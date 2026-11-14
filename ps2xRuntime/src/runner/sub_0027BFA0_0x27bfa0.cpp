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

// Function: sub_0027BFA0
// Address: 0x27bfa0 - 0x27d350
void sub_0027BFA0_0x27bfa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027BFA0_0x27bfa0");
#endif

    switch (ctx->pc) {
        case 0x27bfa0u: goto label_27bfa0;
        case 0x27bfa4u: goto label_27bfa4;
        case 0x27bfa8u: goto label_27bfa8;
        case 0x27bfacu: goto label_27bfac;
        case 0x27bfb0u: goto label_27bfb0;
        case 0x27bfb4u: goto label_27bfb4;
        case 0x27bfb8u: goto label_27bfb8;
        case 0x27bfbcu: goto label_27bfbc;
        case 0x27bfc0u: goto label_27bfc0;
        case 0x27bfc4u: goto label_27bfc4;
        case 0x27bfc8u: goto label_27bfc8;
        case 0x27bfccu: goto label_27bfcc;
        case 0x27bfd0u: goto label_27bfd0;
        case 0x27bfd4u: goto label_27bfd4;
        case 0x27bfd8u: goto label_27bfd8;
        case 0x27bfdcu: goto label_27bfdc;
        case 0x27bfe0u: goto label_27bfe0;
        case 0x27bfe4u: goto label_27bfe4;
        case 0x27bfe8u: goto label_27bfe8;
        case 0x27bfecu: goto label_27bfec;
        case 0x27bff0u: goto label_27bff0;
        case 0x27bff4u: goto label_27bff4;
        case 0x27bff8u: goto label_27bff8;
        case 0x27bffcu: goto label_27bffc;
        case 0x27c000u: goto label_27c000;
        case 0x27c004u: goto label_27c004;
        case 0x27c008u: goto label_27c008;
        case 0x27c00cu: goto label_27c00c;
        case 0x27c010u: goto label_27c010;
        case 0x27c014u: goto label_27c014;
        case 0x27c018u: goto label_27c018;
        case 0x27c01cu: goto label_27c01c;
        case 0x27c020u: goto label_27c020;
        case 0x27c024u: goto label_27c024;
        case 0x27c028u: goto label_27c028;
        case 0x27c02cu: goto label_27c02c;
        case 0x27c030u: goto label_27c030;
        case 0x27c034u: goto label_27c034;
        case 0x27c038u: goto label_27c038;
        case 0x27c03cu: goto label_27c03c;
        case 0x27c040u: goto label_27c040;
        case 0x27c044u: goto label_27c044;
        case 0x27c048u: goto label_27c048;
        case 0x27c04cu: goto label_27c04c;
        case 0x27c050u: goto label_27c050;
        case 0x27c054u: goto label_27c054;
        case 0x27c058u: goto label_27c058;
        case 0x27c05cu: goto label_27c05c;
        case 0x27c060u: goto label_27c060;
        case 0x27c064u: goto label_27c064;
        case 0x27c068u: goto label_27c068;
        case 0x27c06cu: goto label_27c06c;
        case 0x27c070u: goto label_27c070;
        case 0x27c074u: goto label_27c074;
        case 0x27c078u: goto label_27c078;
        case 0x27c07cu: goto label_27c07c;
        case 0x27c080u: goto label_27c080;
        case 0x27c084u: goto label_27c084;
        case 0x27c088u: goto label_27c088;
        case 0x27c08cu: goto label_27c08c;
        case 0x27c090u: goto label_27c090;
        case 0x27c094u: goto label_27c094;
        case 0x27c098u: goto label_27c098;
        case 0x27c09cu: goto label_27c09c;
        case 0x27c0a0u: goto label_27c0a0;
        case 0x27c0a4u: goto label_27c0a4;
        case 0x27c0a8u: goto label_27c0a8;
        case 0x27c0acu: goto label_27c0ac;
        case 0x27c0b0u: goto label_27c0b0;
        case 0x27c0b4u: goto label_27c0b4;
        case 0x27c0b8u: goto label_27c0b8;
        case 0x27c0bcu: goto label_27c0bc;
        case 0x27c0c0u: goto label_27c0c0;
        case 0x27c0c4u: goto label_27c0c4;
        case 0x27c0c8u: goto label_27c0c8;
        case 0x27c0ccu: goto label_27c0cc;
        case 0x27c0d0u: goto label_27c0d0;
        case 0x27c0d4u: goto label_27c0d4;
        case 0x27c0d8u: goto label_27c0d8;
        case 0x27c0dcu: goto label_27c0dc;
        case 0x27c0e0u: goto label_27c0e0;
        case 0x27c0e4u: goto label_27c0e4;
        case 0x27c0e8u: goto label_27c0e8;
        case 0x27c0ecu: goto label_27c0ec;
        case 0x27c0f0u: goto label_27c0f0;
        case 0x27c0f4u: goto label_27c0f4;
        case 0x27c0f8u: goto label_27c0f8;
        case 0x27c0fcu: goto label_27c0fc;
        case 0x27c100u: goto label_27c100;
        case 0x27c104u: goto label_27c104;
        case 0x27c108u: goto label_27c108;
        case 0x27c10cu: goto label_27c10c;
        case 0x27c110u: goto label_27c110;
        case 0x27c114u: goto label_27c114;
        case 0x27c118u: goto label_27c118;
        case 0x27c11cu: goto label_27c11c;
        case 0x27c120u: goto label_27c120;
        case 0x27c124u: goto label_27c124;
        case 0x27c128u: goto label_27c128;
        case 0x27c12cu: goto label_27c12c;
        case 0x27c130u: goto label_27c130;
        case 0x27c134u: goto label_27c134;
        case 0x27c138u: goto label_27c138;
        case 0x27c13cu: goto label_27c13c;
        case 0x27c140u: goto label_27c140;
        case 0x27c144u: goto label_27c144;
        case 0x27c148u: goto label_27c148;
        case 0x27c14cu: goto label_27c14c;
        case 0x27c150u: goto label_27c150;
        case 0x27c154u: goto label_27c154;
        case 0x27c158u: goto label_27c158;
        case 0x27c15cu: goto label_27c15c;
        case 0x27c160u: goto label_27c160;
        case 0x27c164u: goto label_27c164;
        case 0x27c168u: goto label_27c168;
        case 0x27c16cu: goto label_27c16c;
        case 0x27c170u: goto label_27c170;
        case 0x27c174u: goto label_27c174;
        case 0x27c178u: goto label_27c178;
        case 0x27c17cu: goto label_27c17c;
        case 0x27c180u: goto label_27c180;
        case 0x27c184u: goto label_27c184;
        case 0x27c188u: goto label_27c188;
        case 0x27c18cu: goto label_27c18c;
        case 0x27c190u: goto label_27c190;
        case 0x27c194u: goto label_27c194;
        case 0x27c198u: goto label_27c198;
        case 0x27c19cu: goto label_27c19c;
        case 0x27c1a0u: goto label_27c1a0;
        case 0x27c1a4u: goto label_27c1a4;
        case 0x27c1a8u: goto label_27c1a8;
        case 0x27c1acu: goto label_27c1ac;
        case 0x27c1b0u: goto label_27c1b0;
        case 0x27c1b4u: goto label_27c1b4;
        case 0x27c1b8u: goto label_27c1b8;
        case 0x27c1bcu: goto label_27c1bc;
        case 0x27c1c0u: goto label_27c1c0;
        case 0x27c1c4u: goto label_27c1c4;
        case 0x27c1c8u: goto label_27c1c8;
        case 0x27c1ccu: goto label_27c1cc;
        case 0x27c1d0u: goto label_27c1d0;
        case 0x27c1d4u: goto label_27c1d4;
        case 0x27c1d8u: goto label_27c1d8;
        case 0x27c1dcu: goto label_27c1dc;
        case 0x27c1e0u: goto label_27c1e0;
        case 0x27c1e4u: goto label_27c1e4;
        case 0x27c1e8u: goto label_27c1e8;
        case 0x27c1ecu: goto label_27c1ec;
        case 0x27c1f0u: goto label_27c1f0;
        case 0x27c1f4u: goto label_27c1f4;
        case 0x27c1f8u: goto label_27c1f8;
        case 0x27c1fcu: goto label_27c1fc;
        case 0x27c200u: goto label_27c200;
        case 0x27c204u: goto label_27c204;
        case 0x27c208u: goto label_27c208;
        case 0x27c20cu: goto label_27c20c;
        case 0x27c210u: goto label_27c210;
        case 0x27c214u: goto label_27c214;
        case 0x27c218u: goto label_27c218;
        case 0x27c21cu: goto label_27c21c;
        case 0x27c220u: goto label_27c220;
        case 0x27c224u: goto label_27c224;
        case 0x27c228u: goto label_27c228;
        case 0x27c22cu: goto label_27c22c;
        case 0x27c230u: goto label_27c230;
        case 0x27c234u: goto label_27c234;
        case 0x27c238u: goto label_27c238;
        case 0x27c23cu: goto label_27c23c;
        case 0x27c240u: goto label_27c240;
        case 0x27c244u: goto label_27c244;
        case 0x27c248u: goto label_27c248;
        case 0x27c24cu: goto label_27c24c;
        case 0x27c250u: goto label_27c250;
        case 0x27c254u: goto label_27c254;
        case 0x27c258u: goto label_27c258;
        case 0x27c25cu: goto label_27c25c;
        case 0x27c260u: goto label_27c260;
        case 0x27c264u: goto label_27c264;
        case 0x27c268u: goto label_27c268;
        case 0x27c26cu: goto label_27c26c;
        case 0x27c270u: goto label_27c270;
        case 0x27c274u: goto label_27c274;
        case 0x27c278u: goto label_27c278;
        case 0x27c27cu: goto label_27c27c;
        case 0x27c280u: goto label_27c280;
        case 0x27c284u: goto label_27c284;
        case 0x27c288u: goto label_27c288;
        case 0x27c28cu: goto label_27c28c;
        case 0x27c290u: goto label_27c290;
        case 0x27c294u: goto label_27c294;
        case 0x27c298u: goto label_27c298;
        case 0x27c29cu: goto label_27c29c;
        case 0x27c2a0u: goto label_27c2a0;
        case 0x27c2a4u: goto label_27c2a4;
        case 0x27c2a8u: goto label_27c2a8;
        case 0x27c2acu: goto label_27c2ac;
        case 0x27c2b0u: goto label_27c2b0;
        case 0x27c2b4u: goto label_27c2b4;
        case 0x27c2b8u: goto label_27c2b8;
        case 0x27c2bcu: goto label_27c2bc;
        case 0x27c2c0u: goto label_27c2c0;
        case 0x27c2c4u: goto label_27c2c4;
        case 0x27c2c8u: goto label_27c2c8;
        case 0x27c2ccu: goto label_27c2cc;
        case 0x27c2d0u: goto label_27c2d0;
        case 0x27c2d4u: goto label_27c2d4;
        case 0x27c2d8u: goto label_27c2d8;
        case 0x27c2dcu: goto label_27c2dc;
        case 0x27c2e0u: goto label_27c2e0;
        case 0x27c2e4u: goto label_27c2e4;
        case 0x27c2e8u: goto label_27c2e8;
        case 0x27c2ecu: goto label_27c2ec;
        case 0x27c2f0u: goto label_27c2f0;
        case 0x27c2f4u: goto label_27c2f4;
        case 0x27c2f8u: goto label_27c2f8;
        case 0x27c2fcu: goto label_27c2fc;
        case 0x27c300u: goto label_27c300;
        case 0x27c304u: goto label_27c304;
        case 0x27c308u: goto label_27c308;
        case 0x27c30cu: goto label_27c30c;
        case 0x27c310u: goto label_27c310;
        case 0x27c314u: goto label_27c314;
        case 0x27c318u: goto label_27c318;
        case 0x27c31cu: goto label_27c31c;
        case 0x27c320u: goto label_27c320;
        case 0x27c324u: goto label_27c324;
        case 0x27c328u: goto label_27c328;
        case 0x27c32cu: goto label_27c32c;
        case 0x27c330u: goto label_27c330;
        case 0x27c334u: goto label_27c334;
        case 0x27c338u: goto label_27c338;
        case 0x27c33cu: goto label_27c33c;
        case 0x27c340u: goto label_27c340;
        case 0x27c344u: goto label_27c344;
        case 0x27c348u: goto label_27c348;
        case 0x27c34cu: goto label_27c34c;
        case 0x27c350u: goto label_27c350;
        case 0x27c354u: goto label_27c354;
        case 0x27c358u: goto label_27c358;
        case 0x27c35cu: goto label_27c35c;
        case 0x27c360u: goto label_27c360;
        case 0x27c364u: goto label_27c364;
        case 0x27c368u: goto label_27c368;
        case 0x27c36cu: goto label_27c36c;
        case 0x27c370u: goto label_27c370;
        case 0x27c374u: goto label_27c374;
        case 0x27c378u: goto label_27c378;
        case 0x27c37cu: goto label_27c37c;
        case 0x27c380u: goto label_27c380;
        case 0x27c384u: goto label_27c384;
        case 0x27c388u: goto label_27c388;
        case 0x27c38cu: goto label_27c38c;
        case 0x27c390u: goto label_27c390;
        case 0x27c394u: goto label_27c394;
        case 0x27c398u: goto label_27c398;
        case 0x27c39cu: goto label_27c39c;
        case 0x27c3a0u: goto label_27c3a0;
        case 0x27c3a4u: goto label_27c3a4;
        case 0x27c3a8u: goto label_27c3a8;
        case 0x27c3acu: goto label_27c3ac;
        case 0x27c3b0u: goto label_27c3b0;
        case 0x27c3b4u: goto label_27c3b4;
        case 0x27c3b8u: goto label_27c3b8;
        case 0x27c3bcu: goto label_27c3bc;
        case 0x27c3c0u: goto label_27c3c0;
        case 0x27c3c4u: goto label_27c3c4;
        case 0x27c3c8u: goto label_27c3c8;
        case 0x27c3ccu: goto label_27c3cc;
        case 0x27c3d0u: goto label_27c3d0;
        case 0x27c3d4u: goto label_27c3d4;
        case 0x27c3d8u: goto label_27c3d8;
        case 0x27c3dcu: goto label_27c3dc;
        case 0x27c3e0u: goto label_27c3e0;
        case 0x27c3e4u: goto label_27c3e4;
        case 0x27c3e8u: goto label_27c3e8;
        case 0x27c3ecu: goto label_27c3ec;
        case 0x27c3f0u: goto label_27c3f0;
        case 0x27c3f4u: goto label_27c3f4;
        case 0x27c3f8u: goto label_27c3f8;
        case 0x27c3fcu: goto label_27c3fc;
        case 0x27c400u: goto label_27c400;
        case 0x27c404u: goto label_27c404;
        case 0x27c408u: goto label_27c408;
        case 0x27c40cu: goto label_27c40c;
        case 0x27c410u: goto label_27c410;
        case 0x27c414u: goto label_27c414;
        case 0x27c418u: goto label_27c418;
        case 0x27c41cu: goto label_27c41c;
        case 0x27c420u: goto label_27c420;
        case 0x27c424u: goto label_27c424;
        case 0x27c428u: goto label_27c428;
        case 0x27c42cu: goto label_27c42c;
        case 0x27c430u: goto label_27c430;
        case 0x27c434u: goto label_27c434;
        case 0x27c438u: goto label_27c438;
        case 0x27c43cu: goto label_27c43c;
        case 0x27c440u: goto label_27c440;
        case 0x27c444u: goto label_27c444;
        case 0x27c448u: goto label_27c448;
        case 0x27c44cu: goto label_27c44c;
        case 0x27c450u: goto label_27c450;
        case 0x27c454u: goto label_27c454;
        case 0x27c458u: goto label_27c458;
        case 0x27c45cu: goto label_27c45c;
        case 0x27c460u: goto label_27c460;
        case 0x27c464u: goto label_27c464;
        case 0x27c468u: goto label_27c468;
        case 0x27c46cu: goto label_27c46c;
        case 0x27c470u: goto label_27c470;
        case 0x27c474u: goto label_27c474;
        case 0x27c478u: goto label_27c478;
        case 0x27c47cu: goto label_27c47c;
        case 0x27c480u: goto label_27c480;
        case 0x27c484u: goto label_27c484;
        case 0x27c488u: goto label_27c488;
        case 0x27c48cu: goto label_27c48c;
        case 0x27c490u: goto label_27c490;
        case 0x27c494u: goto label_27c494;
        case 0x27c498u: goto label_27c498;
        case 0x27c49cu: goto label_27c49c;
        case 0x27c4a0u: goto label_27c4a0;
        case 0x27c4a4u: goto label_27c4a4;
        case 0x27c4a8u: goto label_27c4a8;
        case 0x27c4acu: goto label_27c4ac;
        case 0x27c4b0u: goto label_27c4b0;
        case 0x27c4b4u: goto label_27c4b4;
        case 0x27c4b8u: goto label_27c4b8;
        case 0x27c4bcu: goto label_27c4bc;
        case 0x27c4c0u: goto label_27c4c0;
        case 0x27c4c4u: goto label_27c4c4;
        case 0x27c4c8u: goto label_27c4c8;
        case 0x27c4ccu: goto label_27c4cc;
        case 0x27c4d0u: goto label_27c4d0;
        case 0x27c4d4u: goto label_27c4d4;
        case 0x27c4d8u: goto label_27c4d8;
        case 0x27c4dcu: goto label_27c4dc;
        case 0x27c4e0u: goto label_27c4e0;
        case 0x27c4e4u: goto label_27c4e4;
        case 0x27c4e8u: goto label_27c4e8;
        case 0x27c4ecu: goto label_27c4ec;
        case 0x27c4f0u: goto label_27c4f0;
        case 0x27c4f4u: goto label_27c4f4;
        case 0x27c4f8u: goto label_27c4f8;
        case 0x27c4fcu: goto label_27c4fc;
        case 0x27c500u: goto label_27c500;
        case 0x27c504u: goto label_27c504;
        case 0x27c508u: goto label_27c508;
        case 0x27c50cu: goto label_27c50c;
        case 0x27c510u: goto label_27c510;
        case 0x27c514u: goto label_27c514;
        case 0x27c518u: goto label_27c518;
        case 0x27c51cu: goto label_27c51c;
        case 0x27c520u: goto label_27c520;
        case 0x27c524u: goto label_27c524;
        case 0x27c528u: goto label_27c528;
        case 0x27c52cu: goto label_27c52c;
        case 0x27c530u: goto label_27c530;
        case 0x27c534u: goto label_27c534;
        case 0x27c538u: goto label_27c538;
        case 0x27c53cu: goto label_27c53c;
        case 0x27c540u: goto label_27c540;
        case 0x27c544u: goto label_27c544;
        case 0x27c548u: goto label_27c548;
        case 0x27c54cu: goto label_27c54c;
        case 0x27c550u: goto label_27c550;
        case 0x27c554u: goto label_27c554;
        case 0x27c558u: goto label_27c558;
        case 0x27c55cu: goto label_27c55c;
        case 0x27c560u: goto label_27c560;
        case 0x27c564u: goto label_27c564;
        case 0x27c568u: goto label_27c568;
        case 0x27c56cu: goto label_27c56c;
        case 0x27c570u: goto label_27c570;
        case 0x27c574u: goto label_27c574;
        case 0x27c578u: goto label_27c578;
        case 0x27c57cu: goto label_27c57c;
        case 0x27c580u: goto label_27c580;
        case 0x27c584u: goto label_27c584;
        case 0x27c588u: goto label_27c588;
        case 0x27c58cu: goto label_27c58c;
        case 0x27c590u: goto label_27c590;
        case 0x27c594u: goto label_27c594;
        case 0x27c598u: goto label_27c598;
        case 0x27c59cu: goto label_27c59c;
        case 0x27c5a0u: goto label_27c5a0;
        case 0x27c5a4u: goto label_27c5a4;
        case 0x27c5a8u: goto label_27c5a8;
        case 0x27c5acu: goto label_27c5ac;
        case 0x27c5b0u: goto label_27c5b0;
        case 0x27c5b4u: goto label_27c5b4;
        case 0x27c5b8u: goto label_27c5b8;
        case 0x27c5bcu: goto label_27c5bc;
        case 0x27c5c0u: goto label_27c5c0;
        case 0x27c5c4u: goto label_27c5c4;
        case 0x27c5c8u: goto label_27c5c8;
        case 0x27c5ccu: goto label_27c5cc;
        case 0x27c5d0u: goto label_27c5d0;
        case 0x27c5d4u: goto label_27c5d4;
        case 0x27c5d8u: goto label_27c5d8;
        case 0x27c5dcu: goto label_27c5dc;
        case 0x27c5e0u: goto label_27c5e0;
        case 0x27c5e4u: goto label_27c5e4;
        case 0x27c5e8u: goto label_27c5e8;
        case 0x27c5ecu: goto label_27c5ec;
        case 0x27c5f0u: goto label_27c5f0;
        case 0x27c5f4u: goto label_27c5f4;
        case 0x27c5f8u: goto label_27c5f8;
        case 0x27c5fcu: goto label_27c5fc;
        case 0x27c600u: goto label_27c600;
        case 0x27c604u: goto label_27c604;
        case 0x27c608u: goto label_27c608;
        case 0x27c60cu: goto label_27c60c;
        case 0x27c610u: goto label_27c610;
        case 0x27c614u: goto label_27c614;
        case 0x27c618u: goto label_27c618;
        case 0x27c61cu: goto label_27c61c;
        case 0x27c620u: goto label_27c620;
        case 0x27c624u: goto label_27c624;
        case 0x27c628u: goto label_27c628;
        case 0x27c62cu: goto label_27c62c;
        case 0x27c630u: goto label_27c630;
        case 0x27c634u: goto label_27c634;
        case 0x27c638u: goto label_27c638;
        case 0x27c63cu: goto label_27c63c;
        case 0x27c640u: goto label_27c640;
        case 0x27c644u: goto label_27c644;
        case 0x27c648u: goto label_27c648;
        case 0x27c64cu: goto label_27c64c;
        case 0x27c650u: goto label_27c650;
        case 0x27c654u: goto label_27c654;
        case 0x27c658u: goto label_27c658;
        case 0x27c65cu: goto label_27c65c;
        case 0x27c660u: goto label_27c660;
        case 0x27c664u: goto label_27c664;
        case 0x27c668u: goto label_27c668;
        case 0x27c66cu: goto label_27c66c;
        case 0x27c670u: goto label_27c670;
        case 0x27c674u: goto label_27c674;
        case 0x27c678u: goto label_27c678;
        case 0x27c67cu: goto label_27c67c;
        case 0x27c680u: goto label_27c680;
        case 0x27c684u: goto label_27c684;
        case 0x27c688u: goto label_27c688;
        case 0x27c68cu: goto label_27c68c;
        case 0x27c690u: goto label_27c690;
        case 0x27c694u: goto label_27c694;
        case 0x27c698u: goto label_27c698;
        case 0x27c69cu: goto label_27c69c;
        case 0x27c6a0u: goto label_27c6a0;
        case 0x27c6a4u: goto label_27c6a4;
        case 0x27c6a8u: goto label_27c6a8;
        case 0x27c6acu: goto label_27c6ac;
        case 0x27c6b0u: goto label_27c6b0;
        case 0x27c6b4u: goto label_27c6b4;
        case 0x27c6b8u: goto label_27c6b8;
        case 0x27c6bcu: goto label_27c6bc;
        case 0x27c6c0u: goto label_27c6c0;
        case 0x27c6c4u: goto label_27c6c4;
        case 0x27c6c8u: goto label_27c6c8;
        case 0x27c6ccu: goto label_27c6cc;
        case 0x27c6d0u: goto label_27c6d0;
        case 0x27c6d4u: goto label_27c6d4;
        case 0x27c6d8u: goto label_27c6d8;
        case 0x27c6dcu: goto label_27c6dc;
        case 0x27c6e0u: goto label_27c6e0;
        case 0x27c6e4u: goto label_27c6e4;
        case 0x27c6e8u: goto label_27c6e8;
        case 0x27c6ecu: goto label_27c6ec;
        case 0x27c6f0u: goto label_27c6f0;
        case 0x27c6f4u: goto label_27c6f4;
        case 0x27c6f8u: goto label_27c6f8;
        case 0x27c6fcu: goto label_27c6fc;
        case 0x27c700u: goto label_27c700;
        case 0x27c704u: goto label_27c704;
        case 0x27c708u: goto label_27c708;
        case 0x27c70cu: goto label_27c70c;
        case 0x27c710u: goto label_27c710;
        case 0x27c714u: goto label_27c714;
        case 0x27c718u: goto label_27c718;
        case 0x27c71cu: goto label_27c71c;
        case 0x27c720u: goto label_27c720;
        case 0x27c724u: goto label_27c724;
        case 0x27c728u: goto label_27c728;
        case 0x27c72cu: goto label_27c72c;
        case 0x27c730u: goto label_27c730;
        case 0x27c734u: goto label_27c734;
        case 0x27c738u: goto label_27c738;
        case 0x27c73cu: goto label_27c73c;
        case 0x27c740u: goto label_27c740;
        case 0x27c744u: goto label_27c744;
        case 0x27c748u: goto label_27c748;
        case 0x27c74cu: goto label_27c74c;
        case 0x27c750u: goto label_27c750;
        case 0x27c754u: goto label_27c754;
        case 0x27c758u: goto label_27c758;
        case 0x27c75cu: goto label_27c75c;
        case 0x27c760u: goto label_27c760;
        case 0x27c764u: goto label_27c764;
        case 0x27c768u: goto label_27c768;
        case 0x27c76cu: goto label_27c76c;
        case 0x27c770u: goto label_27c770;
        case 0x27c774u: goto label_27c774;
        case 0x27c778u: goto label_27c778;
        case 0x27c77cu: goto label_27c77c;
        case 0x27c780u: goto label_27c780;
        case 0x27c784u: goto label_27c784;
        case 0x27c788u: goto label_27c788;
        case 0x27c78cu: goto label_27c78c;
        case 0x27c790u: goto label_27c790;
        case 0x27c794u: goto label_27c794;
        case 0x27c798u: goto label_27c798;
        case 0x27c79cu: goto label_27c79c;
        case 0x27c7a0u: goto label_27c7a0;
        case 0x27c7a4u: goto label_27c7a4;
        case 0x27c7a8u: goto label_27c7a8;
        case 0x27c7acu: goto label_27c7ac;
        case 0x27c7b0u: goto label_27c7b0;
        case 0x27c7b4u: goto label_27c7b4;
        case 0x27c7b8u: goto label_27c7b8;
        case 0x27c7bcu: goto label_27c7bc;
        case 0x27c7c0u: goto label_27c7c0;
        case 0x27c7c4u: goto label_27c7c4;
        case 0x27c7c8u: goto label_27c7c8;
        case 0x27c7ccu: goto label_27c7cc;
        case 0x27c7d0u: goto label_27c7d0;
        case 0x27c7d4u: goto label_27c7d4;
        case 0x27c7d8u: goto label_27c7d8;
        case 0x27c7dcu: goto label_27c7dc;
        case 0x27c7e0u: goto label_27c7e0;
        case 0x27c7e4u: goto label_27c7e4;
        case 0x27c7e8u: goto label_27c7e8;
        case 0x27c7ecu: goto label_27c7ec;
        case 0x27c7f0u: goto label_27c7f0;
        case 0x27c7f4u: goto label_27c7f4;
        case 0x27c7f8u: goto label_27c7f8;
        case 0x27c7fcu: goto label_27c7fc;
        case 0x27c800u: goto label_27c800;
        case 0x27c804u: goto label_27c804;
        case 0x27c808u: goto label_27c808;
        case 0x27c80cu: goto label_27c80c;
        case 0x27c810u: goto label_27c810;
        case 0x27c814u: goto label_27c814;
        case 0x27c818u: goto label_27c818;
        case 0x27c81cu: goto label_27c81c;
        case 0x27c820u: goto label_27c820;
        case 0x27c824u: goto label_27c824;
        case 0x27c828u: goto label_27c828;
        case 0x27c82cu: goto label_27c82c;
        case 0x27c830u: goto label_27c830;
        case 0x27c834u: goto label_27c834;
        case 0x27c838u: goto label_27c838;
        case 0x27c83cu: goto label_27c83c;
        case 0x27c840u: goto label_27c840;
        case 0x27c844u: goto label_27c844;
        case 0x27c848u: goto label_27c848;
        case 0x27c84cu: goto label_27c84c;
        case 0x27c850u: goto label_27c850;
        case 0x27c854u: goto label_27c854;
        case 0x27c858u: goto label_27c858;
        case 0x27c85cu: goto label_27c85c;
        case 0x27c860u: goto label_27c860;
        case 0x27c864u: goto label_27c864;
        case 0x27c868u: goto label_27c868;
        case 0x27c86cu: goto label_27c86c;
        case 0x27c870u: goto label_27c870;
        case 0x27c874u: goto label_27c874;
        case 0x27c878u: goto label_27c878;
        case 0x27c87cu: goto label_27c87c;
        case 0x27c880u: goto label_27c880;
        case 0x27c884u: goto label_27c884;
        case 0x27c888u: goto label_27c888;
        case 0x27c88cu: goto label_27c88c;
        case 0x27c890u: goto label_27c890;
        case 0x27c894u: goto label_27c894;
        case 0x27c898u: goto label_27c898;
        case 0x27c89cu: goto label_27c89c;
        case 0x27c8a0u: goto label_27c8a0;
        case 0x27c8a4u: goto label_27c8a4;
        case 0x27c8a8u: goto label_27c8a8;
        case 0x27c8acu: goto label_27c8ac;
        case 0x27c8b0u: goto label_27c8b0;
        case 0x27c8b4u: goto label_27c8b4;
        case 0x27c8b8u: goto label_27c8b8;
        case 0x27c8bcu: goto label_27c8bc;
        case 0x27c8c0u: goto label_27c8c0;
        case 0x27c8c4u: goto label_27c8c4;
        case 0x27c8c8u: goto label_27c8c8;
        case 0x27c8ccu: goto label_27c8cc;
        case 0x27c8d0u: goto label_27c8d0;
        case 0x27c8d4u: goto label_27c8d4;
        case 0x27c8d8u: goto label_27c8d8;
        case 0x27c8dcu: goto label_27c8dc;
        case 0x27c8e0u: goto label_27c8e0;
        case 0x27c8e4u: goto label_27c8e4;
        case 0x27c8e8u: goto label_27c8e8;
        case 0x27c8ecu: goto label_27c8ec;
        case 0x27c8f0u: goto label_27c8f0;
        case 0x27c8f4u: goto label_27c8f4;
        case 0x27c8f8u: goto label_27c8f8;
        case 0x27c8fcu: goto label_27c8fc;
        case 0x27c900u: goto label_27c900;
        case 0x27c904u: goto label_27c904;
        case 0x27c908u: goto label_27c908;
        case 0x27c90cu: goto label_27c90c;
        case 0x27c910u: goto label_27c910;
        case 0x27c914u: goto label_27c914;
        case 0x27c918u: goto label_27c918;
        case 0x27c91cu: goto label_27c91c;
        case 0x27c920u: goto label_27c920;
        case 0x27c924u: goto label_27c924;
        case 0x27c928u: goto label_27c928;
        case 0x27c92cu: goto label_27c92c;
        case 0x27c930u: goto label_27c930;
        case 0x27c934u: goto label_27c934;
        case 0x27c938u: goto label_27c938;
        case 0x27c93cu: goto label_27c93c;
        case 0x27c940u: goto label_27c940;
        case 0x27c944u: goto label_27c944;
        case 0x27c948u: goto label_27c948;
        case 0x27c94cu: goto label_27c94c;
        case 0x27c950u: goto label_27c950;
        case 0x27c954u: goto label_27c954;
        case 0x27c958u: goto label_27c958;
        case 0x27c95cu: goto label_27c95c;
        case 0x27c960u: goto label_27c960;
        case 0x27c964u: goto label_27c964;
        case 0x27c968u: goto label_27c968;
        case 0x27c96cu: goto label_27c96c;
        case 0x27c970u: goto label_27c970;
        case 0x27c974u: goto label_27c974;
        case 0x27c978u: goto label_27c978;
        case 0x27c97cu: goto label_27c97c;
        case 0x27c980u: goto label_27c980;
        case 0x27c984u: goto label_27c984;
        case 0x27c988u: goto label_27c988;
        case 0x27c98cu: goto label_27c98c;
        case 0x27c990u: goto label_27c990;
        case 0x27c994u: goto label_27c994;
        case 0x27c998u: goto label_27c998;
        case 0x27c99cu: goto label_27c99c;
        case 0x27c9a0u: goto label_27c9a0;
        case 0x27c9a4u: goto label_27c9a4;
        case 0x27c9a8u: goto label_27c9a8;
        case 0x27c9acu: goto label_27c9ac;
        case 0x27c9b0u: goto label_27c9b0;
        case 0x27c9b4u: goto label_27c9b4;
        case 0x27c9b8u: goto label_27c9b8;
        case 0x27c9bcu: goto label_27c9bc;
        case 0x27c9c0u: goto label_27c9c0;
        case 0x27c9c4u: goto label_27c9c4;
        case 0x27c9c8u: goto label_27c9c8;
        case 0x27c9ccu: goto label_27c9cc;
        case 0x27c9d0u: goto label_27c9d0;
        case 0x27c9d4u: goto label_27c9d4;
        case 0x27c9d8u: goto label_27c9d8;
        case 0x27c9dcu: goto label_27c9dc;
        case 0x27c9e0u: goto label_27c9e0;
        case 0x27c9e4u: goto label_27c9e4;
        case 0x27c9e8u: goto label_27c9e8;
        case 0x27c9ecu: goto label_27c9ec;
        case 0x27c9f0u: goto label_27c9f0;
        case 0x27c9f4u: goto label_27c9f4;
        case 0x27c9f8u: goto label_27c9f8;
        case 0x27c9fcu: goto label_27c9fc;
        case 0x27ca00u: goto label_27ca00;
        case 0x27ca04u: goto label_27ca04;
        case 0x27ca08u: goto label_27ca08;
        case 0x27ca0cu: goto label_27ca0c;
        case 0x27ca10u: goto label_27ca10;
        case 0x27ca14u: goto label_27ca14;
        case 0x27ca18u: goto label_27ca18;
        case 0x27ca1cu: goto label_27ca1c;
        case 0x27ca20u: goto label_27ca20;
        case 0x27ca24u: goto label_27ca24;
        case 0x27ca28u: goto label_27ca28;
        case 0x27ca2cu: goto label_27ca2c;
        case 0x27ca30u: goto label_27ca30;
        case 0x27ca34u: goto label_27ca34;
        case 0x27ca38u: goto label_27ca38;
        case 0x27ca3cu: goto label_27ca3c;
        case 0x27ca40u: goto label_27ca40;
        case 0x27ca44u: goto label_27ca44;
        case 0x27ca48u: goto label_27ca48;
        case 0x27ca4cu: goto label_27ca4c;
        case 0x27ca50u: goto label_27ca50;
        case 0x27ca54u: goto label_27ca54;
        case 0x27ca58u: goto label_27ca58;
        case 0x27ca5cu: goto label_27ca5c;
        case 0x27ca60u: goto label_27ca60;
        case 0x27ca64u: goto label_27ca64;
        case 0x27ca68u: goto label_27ca68;
        case 0x27ca6cu: goto label_27ca6c;
        case 0x27ca70u: goto label_27ca70;
        case 0x27ca74u: goto label_27ca74;
        case 0x27ca78u: goto label_27ca78;
        case 0x27ca7cu: goto label_27ca7c;
        case 0x27ca80u: goto label_27ca80;
        case 0x27ca84u: goto label_27ca84;
        case 0x27ca88u: goto label_27ca88;
        case 0x27ca8cu: goto label_27ca8c;
        case 0x27ca90u: goto label_27ca90;
        case 0x27ca94u: goto label_27ca94;
        case 0x27ca98u: goto label_27ca98;
        case 0x27ca9cu: goto label_27ca9c;
        case 0x27caa0u: goto label_27caa0;
        case 0x27caa4u: goto label_27caa4;
        case 0x27caa8u: goto label_27caa8;
        case 0x27caacu: goto label_27caac;
        case 0x27cab0u: goto label_27cab0;
        case 0x27cab4u: goto label_27cab4;
        case 0x27cab8u: goto label_27cab8;
        case 0x27cabcu: goto label_27cabc;
        case 0x27cac0u: goto label_27cac0;
        case 0x27cac4u: goto label_27cac4;
        case 0x27cac8u: goto label_27cac8;
        case 0x27caccu: goto label_27cacc;
        case 0x27cad0u: goto label_27cad0;
        case 0x27cad4u: goto label_27cad4;
        case 0x27cad8u: goto label_27cad8;
        case 0x27cadcu: goto label_27cadc;
        case 0x27cae0u: goto label_27cae0;
        case 0x27cae4u: goto label_27cae4;
        case 0x27cae8u: goto label_27cae8;
        case 0x27caecu: goto label_27caec;
        case 0x27caf0u: goto label_27caf0;
        case 0x27caf4u: goto label_27caf4;
        case 0x27caf8u: goto label_27caf8;
        case 0x27cafcu: goto label_27cafc;
        case 0x27cb00u: goto label_27cb00;
        case 0x27cb04u: goto label_27cb04;
        case 0x27cb08u: goto label_27cb08;
        case 0x27cb0cu: goto label_27cb0c;
        case 0x27cb10u: goto label_27cb10;
        case 0x27cb14u: goto label_27cb14;
        case 0x27cb18u: goto label_27cb18;
        case 0x27cb1cu: goto label_27cb1c;
        case 0x27cb20u: goto label_27cb20;
        case 0x27cb24u: goto label_27cb24;
        case 0x27cb28u: goto label_27cb28;
        case 0x27cb2cu: goto label_27cb2c;
        case 0x27cb30u: goto label_27cb30;
        case 0x27cb34u: goto label_27cb34;
        case 0x27cb38u: goto label_27cb38;
        case 0x27cb3cu: goto label_27cb3c;
        case 0x27cb40u: goto label_27cb40;
        case 0x27cb44u: goto label_27cb44;
        case 0x27cb48u: goto label_27cb48;
        case 0x27cb4cu: goto label_27cb4c;
        case 0x27cb50u: goto label_27cb50;
        case 0x27cb54u: goto label_27cb54;
        case 0x27cb58u: goto label_27cb58;
        case 0x27cb5cu: goto label_27cb5c;
        case 0x27cb60u: goto label_27cb60;
        case 0x27cb64u: goto label_27cb64;
        case 0x27cb68u: goto label_27cb68;
        case 0x27cb6cu: goto label_27cb6c;
        case 0x27cb70u: goto label_27cb70;
        case 0x27cb74u: goto label_27cb74;
        case 0x27cb78u: goto label_27cb78;
        case 0x27cb7cu: goto label_27cb7c;
        case 0x27cb80u: goto label_27cb80;
        case 0x27cb84u: goto label_27cb84;
        case 0x27cb88u: goto label_27cb88;
        case 0x27cb8cu: goto label_27cb8c;
        case 0x27cb90u: goto label_27cb90;
        case 0x27cb94u: goto label_27cb94;
        case 0x27cb98u: goto label_27cb98;
        case 0x27cb9cu: goto label_27cb9c;
        case 0x27cba0u: goto label_27cba0;
        case 0x27cba4u: goto label_27cba4;
        case 0x27cba8u: goto label_27cba8;
        case 0x27cbacu: goto label_27cbac;
        case 0x27cbb0u: goto label_27cbb0;
        case 0x27cbb4u: goto label_27cbb4;
        case 0x27cbb8u: goto label_27cbb8;
        case 0x27cbbcu: goto label_27cbbc;
        case 0x27cbc0u: goto label_27cbc0;
        case 0x27cbc4u: goto label_27cbc4;
        case 0x27cbc8u: goto label_27cbc8;
        case 0x27cbccu: goto label_27cbcc;
        case 0x27cbd0u: goto label_27cbd0;
        case 0x27cbd4u: goto label_27cbd4;
        case 0x27cbd8u: goto label_27cbd8;
        case 0x27cbdcu: goto label_27cbdc;
        case 0x27cbe0u: goto label_27cbe0;
        case 0x27cbe4u: goto label_27cbe4;
        case 0x27cbe8u: goto label_27cbe8;
        case 0x27cbecu: goto label_27cbec;
        case 0x27cbf0u: goto label_27cbf0;
        case 0x27cbf4u: goto label_27cbf4;
        case 0x27cbf8u: goto label_27cbf8;
        case 0x27cbfcu: goto label_27cbfc;
        case 0x27cc00u: goto label_27cc00;
        case 0x27cc04u: goto label_27cc04;
        case 0x27cc08u: goto label_27cc08;
        case 0x27cc0cu: goto label_27cc0c;
        case 0x27cc10u: goto label_27cc10;
        case 0x27cc14u: goto label_27cc14;
        case 0x27cc18u: goto label_27cc18;
        case 0x27cc1cu: goto label_27cc1c;
        case 0x27cc20u: goto label_27cc20;
        case 0x27cc24u: goto label_27cc24;
        case 0x27cc28u: goto label_27cc28;
        case 0x27cc2cu: goto label_27cc2c;
        case 0x27cc30u: goto label_27cc30;
        case 0x27cc34u: goto label_27cc34;
        case 0x27cc38u: goto label_27cc38;
        case 0x27cc3cu: goto label_27cc3c;
        case 0x27cc40u: goto label_27cc40;
        case 0x27cc44u: goto label_27cc44;
        case 0x27cc48u: goto label_27cc48;
        case 0x27cc4cu: goto label_27cc4c;
        case 0x27cc50u: goto label_27cc50;
        case 0x27cc54u: goto label_27cc54;
        case 0x27cc58u: goto label_27cc58;
        case 0x27cc5cu: goto label_27cc5c;
        case 0x27cc60u: goto label_27cc60;
        case 0x27cc64u: goto label_27cc64;
        case 0x27cc68u: goto label_27cc68;
        case 0x27cc6cu: goto label_27cc6c;
        case 0x27cc70u: goto label_27cc70;
        case 0x27cc74u: goto label_27cc74;
        case 0x27cc78u: goto label_27cc78;
        case 0x27cc7cu: goto label_27cc7c;
        case 0x27cc80u: goto label_27cc80;
        case 0x27cc84u: goto label_27cc84;
        case 0x27cc88u: goto label_27cc88;
        case 0x27cc8cu: goto label_27cc8c;
        case 0x27cc90u: goto label_27cc90;
        case 0x27cc94u: goto label_27cc94;
        case 0x27cc98u: goto label_27cc98;
        case 0x27cc9cu: goto label_27cc9c;
        case 0x27cca0u: goto label_27cca0;
        case 0x27cca4u: goto label_27cca4;
        case 0x27cca8u: goto label_27cca8;
        case 0x27ccacu: goto label_27ccac;
        case 0x27ccb0u: goto label_27ccb0;
        case 0x27ccb4u: goto label_27ccb4;
        case 0x27ccb8u: goto label_27ccb8;
        case 0x27ccbcu: goto label_27ccbc;
        case 0x27ccc0u: goto label_27ccc0;
        case 0x27ccc4u: goto label_27ccc4;
        case 0x27ccc8u: goto label_27ccc8;
        case 0x27ccccu: goto label_27cccc;
        case 0x27ccd0u: goto label_27ccd0;
        case 0x27ccd4u: goto label_27ccd4;
        case 0x27ccd8u: goto label_27ccd8;
        case 0x27ccdcu: goto label_27ccdc;
        case 0x27cce0u: goto label_27cce0;
        case 0x27cce4u: goto label_27cce4;
        case 0x27cce8u: goto label_27cce8;
        case 0x27ccecu: goto label_27ccec;
        case 0x27ccf0u: goto label_27ccf0;
        case 0x27ccf4u: goto label_27ccf4;
        case 0x27ccf8u: goto label_27ccf8;
        case 0x27ccfcu: goto label_27ccfc;
        case 0x27cd00u: goto label_27cd00;
        case 0x27cd04u: goto label_27cd04;
        case 0x27cd08u: goto label_27cd08;
        case 0x27cd0cu: goto label_27cd0c;
        case 0x27cd10u: goto label_27cd10;
        case 0x27cd14u: goto label_27cd14;
        case 0x27cd18u: goto label_27cd18;
        case 0x27cd1cu: goto label_27cd1c;
        case 0x27cd20u: goto label_27cd20;
        case 0x27cd24u: goto label_27cd24;
        case 0x27cd28u: goto label_27cd28;
        case 0x27cd2cu: goto label_27cd2c;
        case 0x27cd30u: goto label_27cd30;
        case 0x27cd34u: goto label_27cd34;
        case 0x27cd38u: goto label_27cd38;
        case 0x27cd3cu: goto label_27cd3c;
        case 0x27cd40u: goto label_27cd40;
        case 0x27cd44u: goto label_27cd44;
        case 0x27cd48u: goto label_27cd48;
        case 0x27cd4cu: goto label_27cd4c;
        case 0x27cd50u: goto label_27cd50;
        case 0x27cd54u: goto label_27cd54;
        case 0x27cd58u: goto label_27cd58;
        case 0x27cd5cu: goto label_27cd5c;
        case 0x27cd60u: goto label_27cd60;
        case 0x27cd64u: goto label_27cd64;
        case 0x27cd68u: goto label_27cd68;
        case 0x27cd6cu: goto label_27cd6c;
        case 0x27cd70u: goto label_27cd70;
        case 0x27cd74u: goto label_27cd74;
        case 0x27cd78u: goto label_27cd78;
        case 0x27cd7cu: goto label_27cd7c;
        case 0x27cd80u: goto label_27cd80;
        case 0x27cd84u: goto label_27cd84;
        case 0x27cd88u: goto label_27cd88;
        case 0x27cd8cu: goto label_27cd8c;
        case 0x27cd90u: goto label_27cd90;
        case 0x27cd94u: goto label_27cd94;
        case 0x27cd98u: goto label_27cd98;
        case 0x27cd9cu: goto label_27cd9c;
        case 0x27cda0u: goto label_27cda0;
        case 0x27cda4u: goto label_27cda4;
        case 0x27cda8u: goto label_27cda8;
        case 0x27cdacu: goto label_27cdac;
        case 0x27cdb0u: goto label_27cdb0;
        case 0x27cdb4u: goto label_27cdb4;
        case 0x27cdb8u: goto label_27cdb8;
        case 0x27cdbcu: goto label_27cdbc;
        case 0x27cdc0u: goto label_27cdc0;
        case 0x27cdc4u: goto label_27cdc4;
        case 0x27cdc8u: goto label_27cdc8;
        case 0x27cdccu: goto label_27cdcc;
        case 0x27cdd0u: goto label_27cdd0;
        case 0x27cdd4u: goto label_27cdd4;
        case 0x27cdd8u: goto label_27cdd8;
        case 0x27cddcu: goto label_27cddc;
        case 0x27cde0u: goto label_27cde0;
        case 0x27cde4u: goto label_27cde4;
        case 0x27cde8u: goto label_27cde8;
        case 0x27cdecu: goto label_27cdec;
        case 0x27cdf0u: goto label_27cdf0;
        case 0x27cdf4u: goto label_27cdf4;
        case 0x27cdf8u: goto label_27cdf8;
        case 0x27cdfcu: goto label_27cdfc;
        case 0x27ce00u: goto label_27ce00;
        case 0x27ce04u: goto label_27ce04;
        case 0x27ce08u: goto label_27ce08;
        case 0x27ce0cu: goto label_27ce0c;
        case 0x27ce10u: goto label_27ce10;
        case 0x27ce14u: goto label_27ce14;
        case 0x27ce18u: goto label_27ce18;
        case 0x27ce1cu: goto label_27ce1c;
        case 0x27ce20u: goto label_27ce20;
        case 0x27ce24u: goto label_27ce24;
        case 0x27ce28u: goto label_27ce28;
        case 0x27ce2cu: goto label_27ce2c;
        case 0x27ce30u: goto label_27ce30;
        case 0x27ce34u: goto label_27ce34;
        case 0x27ce38u: goto label_27ce38;
        case 0x27ce3cu: goto label_27ce3c;
        case 0x27ce40u: goto label_27ce40;
        case 0x27ce44u: goto label_27ce44;
        case 0x27ce48u: goto label_27ce48;
        case 0x27ce4cu: goto label_27ce4c;
        case 0x27ce50u: goto label_27ce50;
        case 0x27ce54u: goto label_27ce54;
        case 0x27ce58u: goto label_27ce58;
        case 0x27ce5cu: goto label_27ce5c;
        case 0x27ce60u: goto label_27ce60;
        case 0x27ce64u: goto label_27ce64;
        case 0x27ce68u: goto label_27ce68;
        case 0x27ce6cu: goto label_27ce6c;
        case 0x27ce70u: goto label_27ce70;
        case 0x27ce74u: goto label_27ce74;
        case 0x27ce78u: goto label_27ce78;
        case 0x27ce7cu: goto label_27ce7c;
        case 0x27ce80u: goto label_27ce80;
        case 0x27ce84u: goto label_27ce84;
        case 0x27ce88u: goto label_27ce88;
        case 0x27ce8cu: goto label_27ce8c;
        case 0x27ce90u: goto label_27ce90;
        case 0x27ce94u: goto label_27ce94;
        case 0x27ce98u: goto label_27ce98;
        case 0x27ce9cu: goto label_27ce9c;
        case 0x27cea0u: goto label_27cea0;
        case 0x27cea4u: goto label_27cea4;
        case 0x27cea8u: goto label_27cea8;
        case 0x27ceacu: goto label_27ceac;
        case 0x27ceb0u: goto label_27ceb0;
        case 0x27ceb4u: goto label_27ceb4;
        case 0x27ceb8u: goto label_27ceb8;
        case 0x27cebcu: goto label_27cebc;
        case 0x27cec0u: goto label_27cec0;
        case 0x27cec4u: goto label_27cec4;
        case 0x27cec8u: goto label_27cec8;
        case 0x27ceccu: goto label_27cecc;
        case 0x27ced0u: goto label_27ced0;
        case 0x27ced4u: goto label_27ced4;
        case 0x27ced8u: goto label_27ced8;
        case 0x27cedcu: goto label_27cedc;
        case 0x27cee0u: goto label_27cee0;
        case 0x27cee4u: goto label_27cee4;
        case 0x27cee8u: goto label_27cee8;
        case 0x27ceecu: goto label_27ceec;
        case 0x27cef0u: goto label_27cef0;
        case 0x27cef4u: goto label_27cef4;
        case 0x27cef8u: goto label_27cef8;
        case 0x27cefcu: goto label_27cefc;
        case 0x27cf00u: goto label_27cf00;
        case 0x27cf04u: goto label_27cf04;
        case 0x27cf08u: goto label_27cf08;
        case 0x27cf0cu: goto label_27cf0c;
        case 0x27cf10u: goto label_27cf10;
        case 0x27cf14u: goto label_27cf14;
        case 0x27cf18u: goto label_27cf18;
        case 0x27cf1cu: goto label_27cf1c;
        case 0x27cf20u: goto label_27cf20;
        case 0x27cf24u: goto label_27cf24;
        case 0x27cf28u: goto label_27cf28;
        case 0x27cf2cu: goto label_27cf2c;
        case 0x27cf30u: goto label_27cf30;
        case 0x27cf34u: goto label_27cf34;
        case 0x27cf38u: goto label_27cf38;
        case 0x27cf3cu: goto label_27cf3c;
        case 0x27cf40u: goto label_27cf40;
        case 0x27cf44u: goto label_27cf44;
        case 0x27cf48u: goto label_27cf48;
        case 0x27cf4cu: goto label_27cf4c;
        case 0x27cf50u: goto label_27cf50;
        case 0x27cf54u: goto label_27cf54;
        case 0x27cf58u: goto label_27cf58;
        case 0x27cf5cu: goto label_27cf5c;
        case 0x27cf60u: goto label_27cf60;
        case 0x27cf64u: goto label_27cf64;
        case 0x27cf68u: goto label_27cf68;
        case 0x27cf6cu: goto label_27cf6c;
        case 0x27cf70u: goto label_27cf70;
        case 0x27cf74u: goto label_27cf74;
        case 0x27cf78u: goto label_27cf78;
        case 0x27cf7cu: goto label_27cf7c;
        case 0x27cf80u: goto label_27cf80;
        case 0x27cf84u: goto label_27cf84;
        case 0x27cf88u: goto label_27cf88;
        case 0x27cf8cu: goto label_27cf8c;
        case 0x27cf90u: goto label_27cf90;
        case 0x27cf94u: goto label_27cf94;
        case 0x27cf98u: goto label_27cf98;
        case 0x27cf9cu: goto label_27cf9c;
        case 0x27cfa0u: goto label_27cfa0;
        case 0x27cfa4u: goto label_27cfa4;
        case 0x27cfa8u: goto label_27cfa8;
        case 0x27cfacu: goto label_27cfac;
        case 0x27cfb0u: goto label_27cfb0;
        case 0x27cfb4u: goto label_27cfb4;
        case 0x27cfb8u: goto label_27cfb8;
        case 0x27cfbcu: goto label_27cfbc;
        case 0x27cfc0u: goto label_27cfc0;
        case 0x27cfc4u: goto label_27cfc4;
        case 0x27cfc8u: goto label_27cfc8;
        case 0x27cfccu: goto label_27cfcc;
        case 0x27cfd0u: goto label_27cfd0;
        case 0x27cfd4u: goto label_27cfd4;
        case 0x27cfd8u: goto label_27cfd8;
        case 0x27cfdcu: goto label_27cfdc;
        case 0x27cfe0u: goto label_27cfe0;
        case 0x27cfe4u: goto label_27cfe4;
        case 0x27cfe8u: goto label_27cfe8;
        case 0x27cfecu: goto label_27cfec;
        case 0x27cff0u: goto label_27cff0;
        case 0x27cff4u: goto label_27cff4;
        case 0x27cff8u: goto label_27cff8;
        case 0x27cffcu: goto label_27cffc;
        case 0x27d000u: goto label_27d000;
        case 0x27d004u: goto label_27d004;
        case 0x27d008u: goto label_27d008;
        case 0x27d00cu: goto label_27d00c;
        case 0x27d010u: goto label_27d010;
        case 0x27d014u: goto label_27d014;
        case 0x27d018u: goto label_27d018;
        case 0x27d01cu: goto label_27d01c;
        case 0x27d020u: goto label_27d020;
        case 0x27d024u: goto label_27d024;
        case 0x27d028u: goto label_27d028;
        case 0x27d02cu: goto label_27d02c;
        case 0x27d030u: goto label_27d030;
        case 0x27d034u: goto label_27d034;
        case 0x27d038u: goto label_27d038;
        case 0x27d03cu: goto label_27d03c;
        case 0x27d040u: goto label_27d040;
        case 0x27d044u: goto label_27d044;
        case 0x27d048u: goto label_27d048;
        case 0x27d04cu: goto label_27d04c;
        case 0x27d050u: goto label_27d050;
        case 0x27d054u: goto label_27d054;
        case 0x27d058u: goto label_27d058;
        case 0x27d05cu: goto label_27d05c;
        case 0x27d060u: goto label_27d060;
        case 0x27d064u: goto label_27d064;
        case 0x27d068u: goto label_27d068;
        case 0x27d06cu: goto label_27d06c;
        case 0x27d070u: goto label_27d070;
        case 0x27d074u: goto label_27d074;
        case 0x27d078u: goto label_27d078;
        case 0x27d07cu: goto label_27d07c;
        case 0x27d080u: goto label_27d080;
        case 0x27d084u: goto label_27d084;
        case 0x27d088u: goto label_27d088;
        case 0x27d08cu: goto label_27d08c;
        case 0x27d090u: goto label_27d090;
        case 0x27d094u: goto label_27d094;
        case 0x27d098u: goto label_27d098;
        case 0x27d09cu: goto label_27d09c;
        case 0x27d0a0u: goto label_27d0a0;
        case 0x27d0a4u: goto label_27d0a4;
        case 0x27d0a8u: goto label_27d0a8;
        case 0x27d0acu: goto label_27d0ac;
        case 0x27d0b0u: goto label_27d0b0;
        case 0x27d0b4u: goto label_27d0b4;
        case 0x27d0b8u: goto label_27d0b8;
        case 0x27d0bcu: goto label_27d0bc;
        case 0x27d0c0u: goto label_27d0c0;
        case 0x27d0c4u: goto label_27d0c4;
        case 0x27d0c8u: goto label_27d0c8;
        case 0x27d0ccu: goto label_27d0cc;
        case 0x27d0d0u: goto label_27d0d0;
        case 0x27d0d4u: goto label_27d0d4;
        case 0x27d0d8u: goto label_27d0d8;
        case 0x27d0dcu: goto label_27d0dc;
        case 0x27d0e0u: goto label_27d0e0;
        case 0x27d0e4u: goto label_27d0e4;
        case 0x27d0e8u: goto label_27d0e8;
        case 0x27d0ecu: goto label_27d0ec;
        case 0x27d0f0u: goto label_27d0f0;
        case 0x27d0f4u: goto label_27d0f4;
        case 0x27d0f8u: goto label_27d0f8;
        case 0x27d0fcu: goto label_27d0fc;
        case 0x27d100u: goto label_27d100;
        case 0x27d104u: goto label_27d104;
        case 0x27d108u: goto label_27d108;
        case 0x27d10cu: goto label_27d10c;
        case 0x27d110u: goto label_27d110;
        case 0x27d114u: goto label_27d114;
        case 0x27d118u: goto label_27d118;
        case 0x27d11cu: goto label_27d11c;
        case 0x27d120u: goto label_27d120;
        case 0x27d124u: goto label_27d124;
        case 0x27d128u: goto label_27d128;
        case 0x27d12cu: goto label_27d12c;
        case 0x27d130u: goto label_27d130;
        case 0x27d134u: goto label_27d134;
        case 0x27d138u: goto label_27d138;
        case 0x27d13cu: goto label_27d13c;
        case 0x27d140u: goto label_27d140;
        case 0x27d144u: goto label_27d144;
        case 0x27d148u: goto label_27d148;
        case 0x27d14cu: goto label_27d14c;
        case 0x27d150u: goto label_27d150;
        case 0x27d154u: goto label_27d154;
        case 0x27d158u: goto label_27d158;
        case 0x27d15cu: goto label_27d15c;
        case 0x27d160u: goto label_27d160;
        case 0x27d164u: goto label_27d164;
        case 0x27d168u: goto label_27d168;
        case 0x27d16cu: goto label_27d16c;
        case 0x27d170u: goto label_27d170;
        case 0x27d174u: goto label_27d174;
        case 0x27d178u: goto label_27d178;
        case 0x27d17cu: goto label_27d17c;
        case 0x27d180u: goto label_27d180;
        case 0x27d184u: goto label_27d184;
        case 0x27d188u: goto label_27d188;
        case 0x27d18cu: goto label_27d18c;
        case 0x27d190u: goto label_27d190;
        case 0x27d194u: goto label_27d194;
        case 0x27d198u: goto label_27d198;
        case 0x27d19cu: goto label_27d19c;
        case 0x27d1a0u: goto label_27d1a0;
        case 0x27d1a4u: goto label_27d1a4;
        case 0x27d1a8u: goto label_27d1a8;
        case 0x27d1acu: goto label_27d1ac;
        case 0x27d1b0u: goto label_27d1b0;
        case 0x27d1b4u: goto label_27d1b4;
        case 0x27d1b8u: goto label_27d1b8;
        case 0x27d1bcu: goto label_27d1bc;
        case 0x27d1c0u: goto label_27d1c0;
        case 0x27d1c4u: goto label_27d1c4;
        case 0x27d1c8u: goto label_27d1c8;
        case 0x27d1ccu: goto label_27d1cc;
        case 0x27d1d0u: goto label_27d1d0;
        case 0x27d1d4u: goto label_27d1d4;
        case 0x27d1d8u: goto label_27d1d8;
        case 0x27d1dcu: goto label_27d1dc;
        case 0x27d1e0u: goto label_27d1e0;
        case 0x27d1e4u: goto label_27d1e4;
        case 0x27d1e8u: goto label_27d1e8;
        case 0x27d1ecu: goto label_27d1ec;
        case 0x27d1f0u: goto label_27d1f0;
        case 0x27d1f4u: goto label_27d1f4;
        case 0x27d1f8u: goto label_27d1f8;
        case 0x27d1fcu: goto label_27d1fc;
        case 0x27d200u: goto label_27d200;
        case 0x27d204u: goto label_27d204;
        case 0x27d208u: goto label_27d208;
        case 0x27d20cu: goto label_27d20c;
        case 0x27d210u: goto label_27d210;
        case 0x27d214u: goto label_27d214;
        case 0x27d218u: goto label_27d218;
        case 0x27d21cu: goto label_27d21c;
        case 0x27d220u: goto label_27d220;
        case 0x27d224u: goto label_27d224;
        case 0x27d228u: goto label_27d228;
        case 0x27d22cu: goto label_27d22c;
        case 0x27d230u: goto label_27d230;
        case 0x27d234u: goto label_27d234;
        case 0x27d238u: goto label_27d238;
        case 0x27d23cu: goto label_27d23c;
        case 0x27d240u: goto label_27d240;
        case 0x27d244u: goto label_27d244;
        case 0x27d248u: goto label_27d248;
        case 0x27d24cu: goto label_27d24c;
        case 0x27d250u: goto label_27d250;
        case 0x27d254u: goto label_27d254;
        case 0x27d258u: goto label_27d258;
        case 0x27d25cu: goto label_27d25c;
        case 0x27d260u: goto label_27d260;
        case 0x27d264u: goto label_27d264;
        case 0x27d268u: goto label_27d268;
        case 0x27d26cu: goto label_27d26c;
        case 0x27d270u: goto label_27d270;
        case 0x27d274u: goto label_27d274;
        case 0x27d278u: goto label_27d278;
        case 0x27d27cu: goto label_27d27c;
        case 0x27d280u: goto label_27d280;
        case 0x27d284u: goto label_27d284;
        case 0x27d288u: goto label_27d288;
        case 0x27d28cu: goto label_27d28c;
        case 0x27d290u: goto label_27d290;
        case 0x27d294u: goto label_27d294;
        case 0x27d298u: goto label_27d298;
        case 0x27d29cu: goto label_27d29c;
        case 0x27d2a0u: goto label_27d2a0;
        case 0x27d2a4u: goto label_27d2a4;
        case 0x27d2a8u: goto label_27d2a8;
        case 0x27d2acu: goto label_27d2ac;
        case 0x27d2b0u: goto label_27d2b0;
        case 0x27d2b4u: goto label_27d2b4;
        case 0x27d2b8u: goto label_27d2b8;
        case 0x27d2bcu: goto label_27d2bc;
        case 0x27d2c0u: goto label_27d2c0;
        case 0x27d2c4u: goto label_27d2c4;
        case 0x27d2c8u: goto label_27d2c8;
        case 0x27d2ccu: goto label_27d2cc;
        case 0x27d2d0u: goto label_27d2d0;
        case 0x27d2d4u: goto label_27d2d4;
        case 0x27d2d8u: goto label_27d2d8;
        case 0x27d2dcu: goto label_27d2dc;
        case 0x27d2e0u: goto label_27d2e0;
        case 0x27d2e4u: goto label_27d2e4;
        case 0x27d2e8u: goto label_27d2e8;
        case 0x27d2ecu: goto label_27d2ec;
        case 0x27d2f0u: goto label_27d2f0;
        case 0x27d2f4u: goto label_27d2f4;
        case 0x27d2f8u: goto label_27d2f8;
        case 0x27d2fcu: goto label_27d2fc;
        case 0x27d300u: goto label_27d300;
        case 0x27d304u: goto label_27d304;
        case 0x27d308u: goto label_27d308;
        case 0x27d30cu: goto label_27d30c;
        case 0x27d310u: goto label_27d310;
        case 0x27d314u: goto label_27d314;
        case 0x27d318u: goto label_27d318;
        case 0x27d31cu: goto label_27d31c;
        case 0x27d320u: goto label_27d320;
        case 0x27d324u: goto label_27d324;
        case 0x27d328u: goto label_27d328;
        case 0x27d32cu: goto label_27d32c;
        case 0x27d330u: goto label_27d330;
        case 0x27d334u: goto label_27d334;
        case 0x27d338u: goto label_27d338;
        case 0x27d33cu: goto label_27d33c;
        case 0x27d340u: goto label_27d340;
        case 0x27d344u: goto label_27d344;
        case 0x27d348u: goto label_27d348;
        case 0x27d34cu: goto label_27d34c;
        default: break;
    }

    ctx->pc = 0x27bfa0u;

label_27bfa0:
    // 0x27bfa0: 0x27bdfd90  addiu       $sp, $sp, -0x270
    ctx->pc = 0x27bfa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966672));
label_27bfa4:
    // 0x27bfa4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x27bfa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_27bfa8:
    // 0x27bfa8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x27bfa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_27bfac:
    // 0x27bfac: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x27bfacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_27bfb0:
    // 0x27bfb0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x27bfb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_27bfb4:
    // 0x27bfb4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x27bfb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_27bfb8:
    // 0x27bfb8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x27bfb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_27bfbc:
    // 0x27bfbc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x27bfbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_27bfc0:
    // 0x27bfc0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x27bfc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_27bfc4:
    // 0x27bfc4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x27bfc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_27bfc8:
    // 0x27bfc8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x27bfc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_27bfcc:
    // 0x27bfcc: 0xafa40260  sw          $a0, 0x260($sp)
    ctx->pc = 0x27bfccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 608), GPR_U32(ctx, 4));
label_27bfd0:
    // 0x27bfd0: 0xc090864  jal         func_242190
label_27bfd4:
    if (ctx->pc == 0x27BFD4u) {
        ctx->pc = 0x27BFD8u;
        goto label_27bfd8;
    }
    ctx->pc = 0x27BFD0u;
    SET_GPR_U32(ctx, 31, 0x27BFD8u);
    ctx->pc = 0x242190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242190u, 0x27BFD0u, 0x27BFD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BFD8u;
label_27bfd8:
    // 0x27bfd8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x27bfd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27bfdc:
    // 0x27bfdc: 0xc090590  jal         func_241640
label_27bfe0:
    if (ctx->pc == 0x27BFE0u) {
        ctx->pc = 0x27BFE4u;
        goto label_27bfe4;
    }
    ctx->pc = 0x27BFDCu;
    SET_GPR_U32(ctx, 31, 0x27BFE4u);
    ctx->pc = 0x241640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241640u, 0x27BFDCu, 0x27BFE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BFE4u;
label_27bfe4:
    // 0x27bfe4: 0xafa20258  sw          $v0, 0x258($sp)
    ctx->pc = 0x27bfe4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 600), GPR_U32(ctx, 2));
label_27bfe8:
    // 0x27bfe8: 0x8fa20260  lw          $v0, 0x260($sp)
    ctx->pc = 0x27bfe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
label_27bfec:
    // 0x27bfec: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x27bfecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
label_27bff0:
    // 0x27bff0: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x27bff0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_27bff4:
    // 0x27bff4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x27bff4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_27bff8:
    // 0x27bff8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x27bff8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_27bffc:
    // 0x27bffc: 0x92230064  lbu         $v1, 0x64($s1)
    ctx->pc = 0x27bffcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 100)));
label_27c000:
    // 0x27c000: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x27c000u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_27c004:
    // 0x27c004: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x27c004u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27c008:
    // 0x27c008: 0x14440006  bne         $v0, $a0, . + 4 + (0x6 << 2)
label_27c00c:
    if (ctx->pc == 0x27C00Cu) {
        ctx->pc = 0x27C010u;
        goto label_27c010;
    }
    ctx->pc = 0x27C008u;
    {
        const bool branch_taken_0x27c008 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x27c008) {
            ctx->pc = 0x27C024u;
            goto label_27c024;
        }
    }
    ctx->pc = 0x27C010u;
label_27c010:
    // 0x27c010: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27c010u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_27c014:
    // 0x27c014: 0xc09fa04  jal         func_27E810
label_27c018:
    if (ctx->pc == 0x27C018u) {
        ctx->pc = 0x27C01Cu;
        goto label_27c01c;
    }
    ctx->pc = 0x27C014u;
    SET_GPR_U32(ctx, 31, 0x27C01Cu);
    ctx->pc = 0x27E810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27E810u, 0x27C014u, 0x27C01Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C01Cu;
label_27c01c:
    // 0x27c01c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x27c01cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27c020:
    // 0x27c020: 0xa383a2c4  sb          $v1, -0x5D3C($gp)
    ctx->pc = 0x27c020u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294943428), (uint8_t)GPR_U32(ctx, 3));
label_27c024:
    // 0x27c024: 0x8f82bbb4  lw          $v0, -0x444C($gp)
    ctx->pc = 0x27c024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
label_27c028:
    // 0x27c028: 0x90420028  lbu         $v0, 0x28($v0)
    ctx->pc = 0x27c028u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 40)));
label_27c02c:
    // 0x27c02c: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x27c02cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_27c030:
    // 0x27c030: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x27c030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27c034:
    // 0x27c034: 0x14a30004  bne         $a1, $v1, . + 4 + (0x4 << 2)
label_27c038:
    if (ctx->pc == 0x27C038u) {
        ctx->pc = 0x27C03Cu;
        goto label_27c03c;
    }
    ctx->pc = 0x27C034u;
    {
        const bool branch_taken_0x27c034 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x27c034) {
            ctx->pc = 0x27C048u;
            goto label_27c048;
        }
    }
    ctx->pc = 0x27C03Cu;
label_27c03c:
    // 0x27c03c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27c03cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_27c040:
    // 0x27c040: 0xc09f6e8  jal         func_27DBA0
label_27c044:
    if (ctx->pc == 0x27C044u) {
        ctx->pc = 0x27C048u;
        goto label_27c048;
    }
    ctx->pc = 0x27C040u;
    SET_GPR_U32(ctx, 31, 0x27C048u);
    ctx->pc = 0x27DBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27DBA0u, 0x27C040u, 0x27C048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C048u;
label_27c048:
    // 0x27c048: 0x2624004c  addiu       $a0, $s1, 0x4C
    ctx->pc = 0x27c048u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 76));
label_27c04c:
    // 0x27c04c: 0xc09e7d0  jal         func_279F40
label_27c050:
    if (ctx->pc == 0x27C050u) {
        ctx->pc = 0x27C054u;
        goto label_27c054;
    }
    ctx->pc = 0x27C04Cu;
    SET_GPR_U32(ctx, 31, 0x27C054u);
    ctx->pc = 0x279F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x279F40u, 0x27C04Cu, 0x27C054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C054u;
label_27c054:
    // 0x27c054: 0xafa20254  sw          $v0, 0x254($sp)
    ctx->pc = 0x27c054u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 596), GPR_U32(ctx, 2));
label_27c058:
    // 0x27c058: 0x1000000a  b           . + 4 + (0xA << 2)
label_27c05c:
    if (ctx->pc == 0x27C05Cu) {
        ctx->pc = 0x27C060u;
        goto label_27c060;
    }
    ctx->pc = 0x27C058u;
    {
        const bool branch_taken_0x27c058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c058) {
            ctx->pc = 0x27C084u;
            goto label_27c084;
        }
    }
    ctx->pc = 0x27C060u;
label_27c060:
    // 0x27c060: 0x8fa30254  lw          $v1, 0x254($sp)
    ctx->pc = 0x27c060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 596)));
label_27c064:
    // 0x27c064: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x27c064u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_27c068:
    // 0x27c068: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x27c068u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_27c06c:
    // 0x27c06c: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x27c06cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_27c070:
    // 0x27c070: 0x320f809  jalr        $t9
label_27c074:
    if (ctx->pc == 0x27C074u) {
        ctx->pc = 0x27C078u;
        goto label_27c078;
    }
    ctx->pc = 0x27C070u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x27C078u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27C070u, 0x27C078u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27C078u;
label_27c078:
    // 0x27c078: 0x8fa20254  lw          $v0, 0x254($sp)
    ctx->pc = 0x27c078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 596)));
label_27c07c:
    // 0x27c07c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x27c07cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_27c080:
    // 0x27c080: 0xafa20254  sw          $v0, 0x254($sp)
    ctx->pc = 0x27c080u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 596), GPR_U32(ctx, 2));
label_27c084:
    // 0x27c084: 0x8fa20254  lw          $v0, 0x254($sp)
    ctx->pc = 0x27c084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 596)));
label_27c088:
    // 0x27c088: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x27c088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_27c08c:
    // 0x27c08c: 0x2624004c  addiu       $a0, $s1, 0x4C
    ctx->pc = 0x27c08cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 76));
label_27c090:
    // 0x27c090: 0xc09e7c8  jal         func_279F20
label_27c094:
    if (ctx->pc == 0x27C094u) {
        ctx->pc = 0x27C098u;
        goto label_27c098;
    }
    ctx->pc = 0x27C090u;
    SET_GPR_U32(ctx, 31, 0x27C098u);
    ctx->pc = 0x279F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x279F20u, 0x27C090u, 0x27C098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C098u;
label_27c098:
    // 0x27c098: 0x7ba300b0  lq          $v1, 0xB0($sp)
    ctx->pc = 0x27c098u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_27c09c:
    // 0x27c09c: 0x1462fff0  bne         $v1, $v0, . + 4 + (-0x10 << 2)
label_27c0a0:
    if (ctx->pc == 0x27C0A0u) {
        ctx->pc = 0x27C0A4u;
        goto label_27c0a4;
    }
    ctx->pc = 0x27C09Cu;
    {
        const bool branch_taken_0x27c09c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x27c09c) {
            ctx->pc = 0x27C060u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27c060;
        }
    }
    ctx->pc = 0x27C0A4u;
label_27c0a4:
    // 0x27c0a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27c0a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_27c0a8:
    // 0x27c0a8: 0xc09f680  jal         func_27DA00
label_27c0ac:
    if (ctx->pc == 0x27C0ACu) {
        ctx->pc = 0x27C0B0u;
        goto label_27c0b0;
    }
    ctx->pc = 0x27C0A8u;
    SET_GPR_U32(ctx, 31, 0x27C0B0u);
    ctx->pc = 0x27DA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27DA00u, 0x27C0A8u, 0x27C0B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C0B0u;
label_27c0b0:
    // 0x27c0b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27c0b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_27c0b4:
    // 0x27c0b4: 0xc09f984  jal         func_27E610
label_27c0b8:
    if (ctx->pc == 0x27C0B8u) {
        ctx->pc = 0x27C0BCu;
        goto label_27c0bc;
    }
    ctx->pc = 0x27C0B4u;
    SET_GPR_U32(ctx, 31, 0x27C0BCu);
    ctx->pc = 0x27E610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27E610u, 0x27C0B4u, 0x27C0BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C0BCu;
label_27c0bc:
    // 0x27c0bc: 0xafa00250  sw          $zero, 0x250($sp)
    ctx->pc = 0x27c0bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 592), GPR_U32(ctx, 0));
label_27c0c0:
    // 0x27c0c0: 0x26260058  addiu       $a2, $s1, 0x58
    ctx->pc = 0x27c0c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
label_27c0c4:
    // 0x27c0c4: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x27c0c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_27c0c8:
    // 0x27c0c8: 0xc09e77c  jal         func_279DF0
label_27c0cc:
    if (ctx->pc == 0x27C0CCu) {
        ctx->pc = 0x27C0D0u;
        goto label_27c0d0;
    }
    ctx->pc = 0x27C0C8u;
    SET_GPR_U32(ctx, 31, 0x27C0D0u);
    ctx->pc = 0x279DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x279DF0u, 0x27C0C8u, 0x27C0D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C0D0u;
label_27c0d0:
    // 0x27c0d0: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x27c0d0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27c0d4:
    // 0x27c0d4: 0x1000001a  b           . + 4 + (0x1A << 2)
label_27c0d8:
    if (ctx->pc == 0x27C0D8u) {
        ctx->pc = 0x27C0DCu;
        goto label_27c0dc;
    }
    ctx->pc = 0x27C0D4u;
    {
        const bool branch_taken_0x27c0d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c0d4) {
            ctx->pc = 0x27C140u;
            goto label_27c140;
        }
    }
    ctx->pc = 0x27C0DCu;
label_27c0dc:
    // 0x27c0dc: 0x8fc50000  lw          $a1, 0x0($fp)
    ctx->pc = 0x27c0dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_27c0e0:
    // 0x27c0e0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x27c0e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_27c0e4:
    // 0x27c0e4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x27c0e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_27c0e8:
    // 0x27c0e8: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x27c0e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_27c0ec:
    // 0x27c0ec: 0x320f809  jalr        $t9
label_27c0f0:
    if (ctx->pc == 0x27C0F0u) {
        ctx->pc = 0x27C0F4u;
        goto label_27c0f4;
    }
    ctx->pc = 0x27C0ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x27C0F4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27C0ECu, 0x27C0F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27C0F4u;
label_27c0f4:
    // 0x27c0f4: 0x8fa40250  lw          $a0, 0x250($sp)
    ctx->pc = 0x27c0f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
label_27c0f8:
    // 0x27c0f8: 0x8f82bc08  lw          $v0, -0x43F8($gp)
    ctx->pc = 0x27c0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949896)));
label_27c0fc:
    // 0x27c0fc: 0x82202b  sltu        $a0, $a0, $v0
    ctx->pc = 0x27c0fcu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_27c100:
    // 0x27c100: 0x1480000b  bnez        $a0, . + 4 + (0xB << 2)
label_27c104:
    if (ctx->pc == 0x27C104u) {
        ctx->pc = 0x27C108u;
        goto label_27c108;
    }
    ctx->pc = 0x27C100u;
    {
        const bool branch_taken_0x27c100 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x27c100) {
            ctx->pc = 0x27C130u;
            goto label_27c130;
        }
    }
    ctx->pc = 0x27C108u;
label_27c108:
    // 0x27c108: 0x8fa20250  lw          $v0, 0x250($sp)
    ctx->pc = 0x27c108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
label_27c10c:
    // 0x27c10c: 0x8f83bc08  lw          $v1, -0x43F8($gp)
    ctx->pc = 0x27c10cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949896)));
label_27c110:
    // 0x27c110: 0x24640003  addiu       $a0, $v1, 0x3
    ctx->pc = 0x27c110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
label_27c114:
    // 0x27c114: 0x44082b  sltu        $at, $v0, $a0
    ctx->pc = 0x27c114u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_27c118:
    // 0x27c118: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
label_27c11c:
    if (ctx->pc == 0x27C11Cu) {
        ctx->pc = 0x27C120u;
        goto label_27c120;
    }
    ctx->pc = 0x27C118u;
    {
        const bool branch_taken_0x27c118 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c118) {
            ctx->pc = 0x27C130u;
            goto label_27c130;
        }
    }
    ctx->pc = 0x27C120u;
label_27c120:
    // 0x27c120: 0x8fc50000  lw          $a1, 0x0($fp)
    ctx->pc = 0x27c120u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_27c124:
    // 0x27c124: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x27c124u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_27c128:
    // 0x27c128: 0xc0a5384  jal         func_294E10
label_27c12c:
    if (ctx->pc == 0x27C12Cu) {
        ctx->pc = 0x27C130u;
        goto label_27c130;
    }
    ctx->pc = 0x27C128u;
    SET_GPR_U32(ctx, 31, 0x27C130u);
    ctx->pc = 0x294E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294E10u, 0x27C128u, 0x27C130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C130u;
label_27c130:
    // 0x27c130: 0x8fa50250  lw          $a1, 0x250($sp)
    ctx->pc = 0x27c130u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
label_27c134:
    // 0x27c134: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x27c134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_27c138:
    // 0x27c138: 0xafa20250  sw          $v0, 0x250($sp)
    ctx->pc = 0x27c138u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 592), GPR_U32(ctx, 2));
label_27c13c:
    // 0x27c13c: 0x27de0004  addiu       $fp, $fp, 0x4
    ctx->pc = 0x27c13cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
label_27c140:
    // 0x27c140: 0x26240058  addiu       $a0, $s1, 0x58
    ctx->pc = 0x27c140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
label_27c144:
    // 0x27c144: 0xc09e774  jal         func_279DD0
label_27c148:
    if (ctx->pc == 0x27C148u) {
        ctx->pc = 0x27C14Cu;
        goto label_27c14c;
    }
    ctx->pc = 0x27C144u;
    SET_GPR_U32(ctx, 31, 0x27C14Cu);
    ctx->pc = 0x279DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x279DD0u, 0x27C144u, 0x27C14Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C14Cu;
label_27c14c:
    // 0x27c14c: 0x17c2ffe3  bne         $fp, $v0, . + 4 + (-0x1D << 2)
label_27c150:
    if (ctx->pc == 0x27C150u) {
        ctx->pc = 0x27C154u;
        goto label_27c154;
    }
    ctx->pc = 0x27C14Cu;
    {
        const bool branch_taken_0x27c14c = (GPR_U64(ctx, 30) != GPR_U64(ctx, 2));
        if (branch_taken_0x27c14c) {
            ctx->pc = 0x27C0DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27c0dc;
        }
    }
    ctx->pc = 0x27C154u;
label_27c154:
    // 0x27c154: 0x8f82bc08  lw          $v0, -0x43F8($gp)
    ctx->pc = 0x27c154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949896)));
label_27c158:
    // 0x27c158: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x27c158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
label_27c15c:
    // 0x27c15c: 0xaf82bc08  sw          $v0, -0x43F8($gp)
    ctx->pc = 0x27c15cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949896), GPR_U32(ctx, 2));
label_27c160:
    // 0x27c160: 0x8f82bc08  lw          $v0, -0x43F8($gp)
    ctx->pc = 0x27c160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949896)));
label_27c164:
    // 0x27c164: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x27c164u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
label_27c168:
    // 0x27c168: 0x26220058  addiu       $v0, $s1, 0x58
    ctx->pc = 0x27c168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
label_27c16c:
    // 0x27c16c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x27c16cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27c170:
    // 0x27c170: 0xc09ea24  jal         func_27A890
label_27c174:
    if (ctx->pc == 0x27C174u) {
        ctx->pc = 0x27C178u;
        goto label_27c178;
    }
    ctx->pc = 0x27C170u;
    SET_GPR_U32(ctx, 31, 0x27C178u);
    ctx->pc = 0x27A890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27A890u, 0x27C170u, 0x27C178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C178u;
label_27c178:
    // 0x27c178: 0x7ba300a0  lq          $v1, 0xA0($sp)
    ctx->pc = 0x27c178u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_27c17c:
    // 0x27c17c: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x27c17cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_27c180:
    // 0x27c180: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_27c184:
    if (ctx->pc == 0x27C184u) {
        ctx->pc = 0x27C188u;
        goto label_27c188;
    }
    ctx->pc = 0x27C180u;
    {
        const bool branch_taken_0x27c180 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27c180) {
            ctx->pc = 0x27C18Cu;
            goto label_27c18c;
        }
    }
    ctx->pc = 0x27C188u;
label_27c188:
    // 0x27c188: 0xaf80bc08  sw          $zero, -0x43F8($gp)
    ctx->pc = 0x27c188u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949896), GPR_U32(ctx, 0));
label_27c18c:
    // 0x27c18c: 0x8f82bc20  lw          $v0, -0x43E0($gp)
    ctx->pc = 0x27c18cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949920)));
label_27c190:
    // 0x27c190: 0x10020004  beq         $zero, $v0, . + 4 + (0x4 << 2)
label_27c194:
    if (ctx->pc == 0x27C194u) {
        ctx->pc = 0x27C198u;
        goto label_27c198;
    }
    ctx->pc = 0x27C190u;
    {
        const bool branch_taken_0x27c190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x27c190) {
            ctx->pc = 0x27C1A4u;
            goto label_27c1a4;
        }
    }
    ctx->pc = 0x27C198u;
label_27c198:
    // 0x27c198: 0x8f84bc20  lw          $a0, -0x43E0($gp)
    ctx->pc = 0x27c198u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949920)));
label_27c19c:
    // 0x27c19c: 0xc0a5abc  jal         func_296AF0
label_27c1a0:
    if (ctx->pc == 0x27C1A0u) {
        ctx->pc = 0x27C1A4u;
        goto label_27c1a4;
    }
    ctx->pc = 0x27C19Cu;
    SET_GPR_U32(ctx, 31, 0x27C1A4u);
    ctx->pc = 0x296AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296AF0u, 0x27C19Cu, 0x27C1A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C1A4u;
label_27c1a4:
    // 0x27c1a4: 0x8e250044  lw          $a1, 0x44($s1)
    ctx->pc = 0x27c1a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
label_27c1a8:
    // 0x27c1a8: 0x10050458  beq         $zero, $a1, . + 4 + (0x458 << 2)
label_27c1ac:
    if (ctx->pc == 0x27C1ACu) {
        ctx->pc = 0x27C1B0u;
        goto label_27c1b0;
    }
    ctx->pc = 0x27C1A8u;
    {
        const bool branch_taken_0x27c1a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 5));
        if (branch_taken_0x27c1a8) {
            ctx->pc = 0x27D30Cu;
            goto label_27d30c;
        }
    }
    ctx->pc = 0x27C1B0u;
label_27c1b0:
    // 0x27c1b0: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x27c1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_27c1b4:
    // 0x27c1b4: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x27c1b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27c1b8:
    // 0x27c1b8: 0xc780bc0c  lwc1        $f0, -0x43F4($gp)
    ctx->pc = 0x27c1b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294949900)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27c1bc:
    // 0x27c1bc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x27c1bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_27c1c0:
    // 0x27c1c0: 0xe780bc0c  swc1        $f0, -0x43F4($gp)
    ctx->pc = 0x27c1c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294949900), bits); }
label_27c1c4:
    // 0x27c1c4: 0xc781bc0c  lwc1        $f1, -0x43F4($gp)
    ctx->pc = 0x27c1c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294949900)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27c1c8:
    // 0x27c1c8: 0xc7808288  lwc1        $f0, -0x7D78($gp)
    ctx->pc = 0x27c1c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27c1cc:
    // 0x27c1cc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x27c1ccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27c1d0:
    // 0x27c1d0: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_27c1d4:
    if (ctx->pc == 0x27C1D4u) {
        ctx->pc = 0x27C1D8u;
        goto label_27c1d8;
    }
    ctx->pc = 0x27C1D0u;
    {
        const bool branch_taken_0x27c1d0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27c1d0) {
            ctx->pc = 0x27C1ECu;
            goto label_27c1ec;
        }
    }
    ctx->pc = 0x27C1D8u;
label_27c1d8:
    // 0x27c1d8: 0x9382a2c4  lbu         $v0, -0x5D3C($gp)
    ctx->pc = 0x27c1d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294943428)));
label_27c1dc:
    // 0x27c1dc: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x27c1dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_27c1e0:
    // 0x27c1e0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x27c1e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27c1e4:
    // 0x27c1e4: 0x14850289  bne         $a0, $a1, . + 4 + (0x289 << 2)
label_27c1e8:
    if (ctx->pc == 0x27C1E8u) {
        ctx->pc = 0x27C1ECu;
        goto label_27c1ec;
    }
    ctx->pc = 0x27C1E4u;
    {
        const bool branch_taken_0x27c1e4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        if (branch_taken_0x27c1e4) {
            ctx->pc = 0x27CC0Cu;
            goto label_27cc0c;
        }
    }
    ctx->pc = 0x27C1ECu;
label_27c1ec:
    // 0x27c1ec: 0xa380a2c4  sb          $zero, -0x5D3C($gp)
    ctx->pc = 0x27c1ecu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294943428), (uint8_t)GPR_U32(ctx, 0));
label_27c1f0:
    // 0x27c1f0: 0xc781bc0c  lwc1        $f1, -0x43F4($gp)
    ctx->pc = 0x27c1f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294949900)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27c1f4:
    // 0x27c1f4: 0xc7808288  lwc1        $f0, -0x7D78($gp)
    ctx->pc = 0x27c1f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27c1f8:
    // 0x27c1f8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x27c1f8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_27c1fc:
    // 0x27c1fc: 0xe780bc0c  swc1        $f0, -0x43F4($gp)
    ctx->pc = 0x27c1fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294949900), bits); }
label_27c200:
    // 0x27c200: 0x8f82bb80  lw          $v0, -0x4480($gp)
    ctx->pc = 0x27c200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
label_27c204:
    // 0x27c204: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x27c204u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_27c208:
    // 0x27c208: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x27c208u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27c20c:
    // 0x27c20c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x27c20cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_27c210:
    // 0x27c210: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x27c210u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_27c214:
    // 0x27c214: 0x320f809  jalr        $t9
label_27c218:
    if (ctx->pc == 0x27C218u) {
        ctx->pc = 0x27C21Cu;
        goto label_27c21c;
    }
    ctx->pc = 0x27C214u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x27C21Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27C214u, 0x27C21Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27C21Cu;
label_27c21c:
    // 0x27c21c: 0x27a301b0  addiu       $v1, $sp, 0x1B0
    ctx->pc = 0x27c21cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_27c220:
    // 0x27c220: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x27c220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_27c224:
    // 0x27c224: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x27c224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27c228:
    // 0x27c228: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x27c228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27c22c:
    // 0x27c22c: 0xe4620000  swc1        $f2, 0x0($v1)
    ctx->pc = 0x27c22cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_27c230:
    // 0x27c230: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x27c230u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_27c234:
    // 0x27c234: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x27c234u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_27c238:
    // 0x27c238: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x27c238u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27c23c:
    // 0x27c23c: 0x0  nop
    ctx->pc = 0x27c23cu;
    // NOP
label_27c240:
    // 0x27c240: 0xe7a001b4  swc1        $f0, 0x1B4($sp)
    ctx->pc = 0x27c240u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 436), bits); }
label_27c244:
    // 0x27c244: 0x8f84bb80  lw          $a0, -0x4480($gp)
    ctx->pc = 0x27c244u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
label_27c248:
    // 0x27c248: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x27c248u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_27c24c:
    // 0x27c24c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x27c24cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_27c250:
    // 0x27c250: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x27c250u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27c254:
    // 0x27c254: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x27c254u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_27c258:
    // 0x27c258: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x27c258u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_27c25c:
    // 0x27c25c: 0x320f809  jalr        $t9
label_27c260:
    if (ctx->pc == 0x27C260u) {
        ctx->pc = 0x27C264u;
        goto label_27c264;
    }
    ctx->pc = 0x27C25Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x27C264u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27C25Cu, 0x27C264u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27C264u;
label_27c264:
    // 0x27c264: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x27c264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_27c268:
    // 0x27c268: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x27c268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_27c26c:
    // 0x27c26c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x27c26cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27c270:
    // 0x27c270: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x27c270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27c274:
    // 0x27c274: 0xe4820000  swc1        $f2, 0x0($a0)
    ctx->pc = 0x27c274u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_27c278:
    // 0x27c278: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x27c278u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_27c27c:
    // 0x27c27c: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x27c27cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_27c280:
    // 0x27c280: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x27c280u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27c284:
    // 0x27c284: 0x0  nop
    ctx->pc = 0x27c284u;
    // NOP
label_27c288:
    // 0x27c288: 0xe7a001a4  swc1        $f0, 0x1A4($sp)
    ctx->pc = 0x27c288u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 420), bits); }
label_27c28c:
    // 0x27c28c: 0xc7a101a0  lwc1        $f1, 0x1A0($sp)
    ctx->pc = 0x27c28cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27c290:
    // 0x27c290: 0xc7a001b0  lwc1        $f0, 0x1B0($sp)
    ctx->pc = 0x27c290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27c294:
    // 0x27c294: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x27c294u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_27c298:
    // 0x27c298: 0xe7a00190  swc1        $f0, 0x190($sp)
    ctx->pc = 0x27c298u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
label_27c29c:
    // 0x27c29c: 0xc7a101a4  lwc1        $f1, 0x1A4($sp)
    ctx->pc = 0x27c29cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27c2a0:
    // 0x27c2a0: 0xc7a001b4  lwc1        $f0, 0x1B4($sp)
    ctx->pc = 0x27c2a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27c2a4:
    // 0x27c2a4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x27c2a4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_27c2a8:
    // 0x27c2a8: 0xe7a00194  swc1        $f0, 0x194($sp)
    ctx->pc = 0x27c2a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 404), bits); }
label_27c2ac:
    // 0x27c2ac: 0xc7a101a8  lwc1        $f1, 0x1A8($sp)
    ctx->pc = 0x27c2acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27c2b0:
    // 0x27c2b0: 0xc7a001b8  lwc1        $f0, 0x1B8($sp)
    ctx->pc = 0x27c2b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27c2b4:
    // 0x27c2b4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x27c2b4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_27c2b8:
    // 0x27c2b8: 0xe7a00198  swc1        $f0, 0x198($sp)
    ctx->pc = 0x27c2b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 408), bits); }
label_27c2bc:
    // 0x27c2bc: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x27c2bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_27c2c0:
    // 0x27c2c0: 0x27a50190  addiu       $a1, $sp, 0x190
    ctx->pc = 0x27c2c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_27c2c4:
    // 0x27c2c4: 0xc104cf2  jal         func_4133C8
label_27c2c8:
    if (ctx->pc == 0x27C2C8u) {
        ctx->pc = 0x27C2CCu;
        goto label_27c2cc;
    }
    ctx->pc = 0x27C2C4u;
    SET_GPR_U32(ctx, 31, 0x27C2CCu);
    ctx->pc = 0x4133C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4133C8u, 0x27C2C4u, 0x27C2CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C2CCu;
label_27c2cc:
    // 0x27c2cc: 0xe7a0024c  swc1        $f0, 0x24C($sp)
    ctx->pc = 0x27c2ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 588), bits); }
label_27c2d0:
    // 0x27c2d0: 0x8e220044  lw          $v0, 0x44($s1)
    ctx->pc = 0x27c2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
label_27c2d4:
    // 0x27c2d4: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x27c2d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_27c2d8:
    // 0x27c2d8: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x27c2d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_27c2dc:
    // 0x27c2dc: 0xc085538  jal         func_2154E0
label_27c2e0:
    if (ctx->pc == 0x27C2E0u) {
        ctx->pc = 0x27C2E4u;
        goto label_27c2e4;
    }
    ctx->pc = 0x27C2DCu;
    SET_GPR_U32(ctx, 31, 0x27C2E4u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x27C2DCu, 0x27C2E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C2E4u;
label_27c2e4:
    // 0x27c2e4: 0xafa20248  sw          $v0, 0x248($sp)
    ctx->pc = 0x27c2e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 584), GPR_U32(ctx, 2));
label_27c2e8:
    // 0x27c2e8: 0x8fa40248  lw          $a0, 0x248($sp)
    ctx->pc = 0x27c2e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 584)));
label_27c2ec:
    // 0x27c2ec: 0xc091aa8  jal         func_246AA0
label_27c2f0:
    if (ctx->pc == 0x27C2F0u) {
        ctx->pc = 0x27C2F4u;
        goto label_27c2f4;
    }
    ctx->pc = 0x27C2ECu;
    SET_GPR_U32(ctx, 31, 0x27C2F4u);
    ctx->pc = 0x246AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246AA0u, 0x27C2ECu, 0x27C2F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C2F4u;
label_27c2f4:
    // 0x27c2f4: 0xafa20244  sw          $v0, 0x244($sp)
    ctx->pc = 0x27c2f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 580), GPR_U32(ctx, 2));
label_27c2f8:
    // 0x27c2f8: 0x8fa40244  lw          $a0, 0x244($sp)
    ctx->pc = 0x27c2f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 580)));
label_27c2fc:
    // 0x27c2fc: 0xc040e7c  jal         func_1039F0
label_27c300:
    if (ctx->pc == 0x27C300u) {
        ctx->pc = 0x27C304u;
        goto label_27c304;
    }
    ctx->pc = 0x27C2FCu;
    SET_GPR_U32(ctx, 31, 0x27C304u);
    ctx->pc = 0x1039F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1039F0u, 0x27C2FCu, 0x27C304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C304u;
label_27c304:
    // 0x27c304: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x27c304u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27c308:
    // 0x27c308: 0x1000023b  b           . + 4 + (0x23B << 2)
label_27c30c:
    if (ctx->pc == 0x27C30Cu) {
        ctx->pc = 0x27C310u;
        goto label_27c310;
    }
    ctx->pc = 0x27C308u;
    {
        const bool branch_taken_0x27c308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c308) {
            ctx->pc = 0x27CBF8u;
            goto label_27cbf8;
        }
    }
    ctx->pc = 0x27C310u;
label_27c310:
    // 0x27c310: 0x8ee40000  lw          $a0, 0x0($s7)
    ctx->pc = 0x27c310u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_27c314:
    // 0x27c314: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x27c314u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_27c318:
    // 0x27c318: 0xc085538  jal         func_2154E0
label_27c31c:
    if (ctx->pc == 0x27C31Cu) {
        ctx->pc = 0x27C320u;
        goto label_27c320;
    }
    ctx->pc = 0x27C318u;
    SET_GPR_U32(ctx, 31, 0x27C320u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x27C318u, 0x27C320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C320u;
label_27c320:
    // 0x27c320: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x27c320u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27c324:
    // 0x27c324: 0xafa60240  sw          $a2, 0x240($sp)
    ctx->pc = 0x27c324u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 576), GPR_U32(ctx, 6));
label_27c328:
    // 0x27c328: 0x8fa40240  lw          $a0, 0x240($sp)
    ctx->pc = 0x27c328u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 576)));
label_27c32c:
    // 0x27c32c: 0xc092d70  jal         func_24B5C0
label_27c330:
    if (ctx->pc == 0x27C330u) {
        ctx->pc = 0x27C334u;
        goto label_27c334;
    }
    ctx->pc = 0x27C32Cu;
    SET_GPR_U32(ctx, 31, 0x27C334u);
    ctx->pc = 0x24B5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B5C0u, 0x27C32Cu, 0x27C334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C334u;
label_27c334:
    // 0x27c334: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x27c334u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27c338:
    // 0x27c338: 0xc0477e0  jal         func_11DF80
label_27c33c:
    if (ctx->pc == 0x27C33Cu) {
        ctx->pc = 0x27C340u;
        goto label_27c340;
    }
    ctx->pc = 0x27C338u;
    SET_GPR_U32(ctx, 31, 0x27C340u);
    ctx->pc = 0x11DF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DF80u, 0x27C338u, 0x27C340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C340u;
label_27c340:
    // 0x27c340: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x27c340u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_27c344:
    // 0x27c344: 0xafa4023c  sw          $a0, 0x23C($sp)
    ctx->pc = 0x27c344u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 572), GPR_U32(ctx, 4));
label_27c348:
    // 0x27c348: 0x8ee50000  lw          $a1, 0x0($s7)
    ctx->pc = 0x27c348u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_27c34c:
    // 0x27c34c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x27c34cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_27c350:
    // 0x27c350: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x27c350u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_27c354:
    // 0x27c354: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x27c354u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_27c358:
    // 0x27c358: 0xc085538  jal         func_2154E0
label_27c35c:
    if (ctx->pc == 0x27C35Cu) {
        ctx->pc = 0x27C360u;
        goto label_27c360;
    }
    ctx->pc = 0x27C358u;
    SET_GPR_U32(ctx, 31, 0x27C360u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x27C358u, 0x27C360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C360u;
label_27c360:
    // 0x27c360: 0xafa20238  sw          $v0, 0x238($sp)
    ctx->pc = 0x27c360u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 568), GPR_U32(ctx, 2));
label_27c364:
    // 0x27c364: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x27c364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_27c368:
    // 0x27c368: 0x8fa50238  lw          $a1, 0x238($sp)
    ctx->pc = 0x27c368u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 568)));
label_27c36c:
    // 0x27c36c: 0xc090f80  jal         func_243E00
label_27c370:
    if (ctx->pc == 0x27C370u) {
        ctx->pc = 0x27C374u;
        goto label_27c374;
    }
    ctx->pc = 0x27C36Cu;
    SET_GPR_U32(ctx, 31, 0x27C374u);
    ctx->pc = 0x243E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E00u, 0x27C36Cu, 0x27C374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C374u;
label_27c374:
    // 0x27c374: 0x27a60130  addiu       $a2, $sp, 0x130
    ctx->pc = 0x27c374u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_27c378:
    // 0x27c378: 0x27a20180  addiu       $v0, $sp, 0x180
    ctx->pc = 0x27c378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_27c37c:
    // 0x27c37c: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x27c37cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_27c380:
    // 0x27c380: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x27c380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27c384:
    // 0x27c384: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x27c384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27c388:
    // 0x27c388: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x27c388u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_27c38c:
    // 0x27c38c: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x27c38cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_27c390:
    // 0x27c390: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x27c390u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_27c394:
    // 0x27c394: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x27c394u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27c398:
    // 0x27c398: 0x0  nop
    ctx->pc = 0x27c398u;
    // NOP
label_27c39c:
    // 0x27c39c: 0xe7a00184  swc1        $f0, 0x184($sp)
    ctx->pc = 0x27c39cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 388), bits); }
label_27c3a0:
    // 0x27c3a0: 0x8ee40000  lw          $a0, 0x0($s7)
    ctx->pc = 0x27c3a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_27c3a4:
    // 0x27c3a4: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x27c3a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_27c3a8:
    // 0x27c3a8: 0xc085538  jal         func_2154E0
label_27c3ac:
    if (ctx->pc == 0x27C3ACu) {
        ctx->pc = 0x27C3B0u;
        goto label_27c3b0;
    }
    ctx->pc = 0x27C3A8u;
    SET_GPR_U32(ctx, 31, 0x27C3B0u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x27C3A8u, 0x27C3B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C3B0u;
label_27c3b0:
    // 0x27c3b0: 0xafa20234  sw          $v0, 0x234($sp)
    ctx->pc = 0x27c3b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 564), GPR_U32(ctx, 2));
label_27c3b4:
    // 0x27c3b4: 0x8fa40240  lw          $a0, 0x240($sp)
    ctx->pc = 0x27c3b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 576)));
label_27c3b8:
    // 0x27c3b8: 0xc093728  jal         func_24DCA0
label_27c3bc:
    if (ctx->pc == 0x27C3BCu) {
        ctx->pc = 0x27C3C0u;
        goto label_27c3c0;
    }
    ctx->pc = 0x27C3B8u;
    SET_GPR_U32(ctx, 31, 0x27C3C0u);
    ctx->pc = 0x24DCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24DCA0u, 0x27C3B8u, 0x27C3C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C3C0u;
label_27c3c0:
    // 0x27c3c0: 0x27a40230  addiu       $a0, $sp, 0x230
    ctx->pc = 0x27c3c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
label_27c3c4:
    // 0x27c3c4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x27c3c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27c3c8:
    // 0x27c3c8: 0xc064064  jal         func_190190
label_27c3cc:
    if (ctx->pc == 0x27C3CCu) {
        ctx->pc = 0x27C3D0u;
        goto label_27c3d0;
    }
    ctx->pc = 0x27C3C8u;
    SET_GPR_U32(ctx, 31, 0x27C3D0u);
    ctx->pc = 0x190190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190190u, 0x27C3C8u, 0x27C3D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C3D0u;
label_27c3d0:
    // 0x27c3d0: 0x8fa40234  lw          $a0, 0x234($sp)
    ctx->pc = 0x27c3d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 564)));
label_27c3d4:
    // 0x27c3d4: 0xc0a361c  jal         func_28D870
label_27c3d8:
    if (ctx->pc == 0x27C3D8u) {
        ctx->pc = 0x27C3DCu;
        goto label_27c3dc;
    }
    ctx->pc = 0x27C3D4u;
    SET_GPR_U32(ctx, 31, 0x27C3DCu);
    ctx->pc = 0x28D870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D870u, 0x27C3D4u, 0x27C3DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C3DCu;
label_27c3dc:
    // 0x27c3dc: 0xafa2022c  sw          $v0, 0x22C($sp)
    ctx->pc = 0x27c3dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 556), GPR_U32(ctx, 2));
label_27c3e0:
    // 0x27c3e0: 0x27a40228  addiu       $a0, $sp, 0x228
    ctx->pc = 0x27c3e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 552));
label_27c3e4:
    // 0x27c3e4: 0x8fa5022c  lw          $a1, 0x22C($sp)
    ctx->pc = 0x27c3e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 556)));
label_27c3e8:
    // 0x27c3e8: 0xc0542d8  jal         func_150B60
label_27c3ec:
    if (ctx->pc == 0x27C3ECu) {
        ctx->pc = 0x27C3F0u;
        goto label_27c3f0;
    }
    ctx->pc = 0x27C3E8u;
    SET_GPR_U32(ctx, 31, 0x27C3F0u);
    ctx->pc = 0x150B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150B60u, 0x27C3E8u, 0x27C3F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C3F0u;
label_27c3f0:
    // 0x27c3f0: 0x100001f4  b           . + 4 + (0x1F4 << 2)
label_27c3f4:
    if (ctx->pc == 0x27C3F4u) {
        ctx->pc = 0x27C3F8u;
        goto label_27c3f8;
    }
    ctx->pc = 0x27C3F0u;
    {
        const bool branch_taken_0x27c3f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c3f0) {
            ctx->pc = 0x27CBC4u;
            goto label_27cbc4;
        }
    }
    ctx->pc = 0x27C3F8u;
label_27c3f8:
    // 0x27c3f8: 0x27a30228  addiu       $v1, $sp, 0x228
    ctx->pc = 0x27c3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 552));
label_27c3fc:
    // 0x27c3fc: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x27c3fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_27c400:
    // 0x27c400: 0xc0542c0  jal         func_150B00
label_27c404:
    if (ctx->pc == 0x27C404u) {
        ctx->pc = 0x27C408u;
        goto label_27c408;
    }
    ctx->pc = 0x27C400u;
    SET_GPR_U32(ctx, 31, 0x27C408u);
    ctx->pc = 0x150B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150B00u, 0x27C400u, 0x27C408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C408u;
label_27c408:
    // 0x27c408: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x27c408u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27c40c:
    // 0x27c40c: 0x27a50230  addiu       $a1, $sp, 0x230
    ctx->pc = 0x27c40cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
label_27c410:
    // 0x27c410: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x27c410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_27c414:
    // 0x27c414: 0xc053b9c  jal         func_14EE70
label_27c418:
    if (ctx->pc == 0x27C418u) {
        ctx->pc = 0x27C41Cu;
        goto label_27c41c;
    }
    ctx->pc = 0x27C414u;
    SET_GPR_U32(ctx, 31, 0x27C41Cu);
    ctx->pc = 0x14EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EE70u, 0x27C414u, 0x27C41Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C41Cu;
label_27c41c:
    // 0x27c41c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x27c41cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27c420:
    // 0x27c420: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x27c420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_27c424:
    // 0x27c424: 0x14020004  bne         $zero, $v0, . + 4 + (0x4 << 2)
label_27c428:
    if (ctx->pc == 0x27C428u) {
        ctx->pc = 0x27C42Cu;
        goto label_27c42c;
    }
    ctx->pc = 0x27C424u;
    {
        const bool branch_taken_0x27c424 = (GPR_U64(ctx, 0) != GPR_U64(ctx, 2));
        if (branch_taken_0x27c424) {
            ctx->pc = 0x27C438u;
            goto label_27c438;
        }
    }
    ctx->pc = 0x27C42Cu;
label_27c42c:
    // 0x27c42c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x27c42cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_27c430:
    // 0x27c430: 0x100201dc  beq         $zero, $v0, . + 4 + (0x1DC << 2)
label_27c434:
    if (ctx->pc == 0x27C434u) {
        ctx->pc = 0x27C438u;
        goto label_27c438;
    }
    ctx->pc = 0x27C430u;
    {
        const bool branch_taken_0x27c430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x27c430) {
            ctx->pc = 0x27CBA4u;
            goto label_27cba4;
        }
    }
    ctx->pc = 0x27C438u;
label_27c438:
    // 0x27c438: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x27c438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_27c43c:
    // 0x27c43c: 0x305300ff  andi        $s3, $v0, 0xFF
    ctx->pc = 0x27c43cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_27c440:
    // 0x27c440: 0x8f82ba74  lw          $v0, -0x458C($gp)
    ctx->pc = 0x27c440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949492)));
label_27c444:
    // 0x27c444: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_27c448:
    if (ctx->pc == 0x27C448u) {
        ctx->pc = 0x27C44Cu;
        goto label_27c44c;
    }
    ctx->pc = 0x27C444u;
    {
        const bool branch_taken_0x27c444 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c444) {
            ctx->pc = 0x27C460u;
            goto label_27c460;
        }
    }
    ctx->pc = 0x27C44Cu;
label_27c44c:
    // 0x27c44c: 0x8f84ba74  lw          $a0, -0x458C($gp)
    ctx->pc = 0x27c44cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949492)));
label_27c450:
    // 0x27c450: 0xc04e308  jal         func_138C20
label_27c454:
    if (ctx->pc == 0x27C454u) {
        ctx->pc = 0x27C458u;
        goto label_27c458;
    }
    ctx->pc = 0x27C450u;
    SET_GPR_U32(ctx, 31, 0x27C458u);
    ctx->pc = 0x138C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138C20u, 0x27C450u, 0x27C458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C458u;
label_27c458:
    // 0x27c458: 0x144001bc  bnez        $v0, . + 4 + (0x1BC << 2)
label_27c45c:
    if (ctx->pc == 0x27C45Cu) {
        ctx->pc = 0x27C460u;
        goto label_27c460;
    }
    ctx->pc = 0x27C458u;
    {
        const bool branch_taken_0x27c458 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27c458) {
            ctx->pc = 0x27CB4Cu;
            goto label_27cb4c;
        }
    }
    ctx->pc = 0x27C460u;
label_27c460:
    // 0x27c460: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x27c460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_27c464:
    // 0x27c464: 0x3287c  dsll32      $a1, $v1, 1
    ctx->pc = 0x27c464u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 1));
label_27c468:
    // 0x27c468: 0x5287e  dsrl32      $a1, $a1, 1
    ctx->pc = 0x27c468u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 1));
label_27c46c:
    // 0x27c46c: 0x8fa3023c  lw          $v1, 0x23C($sp)
    ctx->pc = 0x27c46cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 572)));
label_27c470:
    // 0x27c470: 0xa3001b  divu        $zero, $a1, $v1
    ctx->pc = 0x27c470u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
label_27c474:
    // 0x27c474: 0x1010  mfhi        $v0
    ctx->pc = 0x27c474u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_27c478:
    // 0x27c478: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_27c47c:
    if (ctx->pc == 0x27C47Cu) {
        ctx->pc = 0x27C480u;
        goto label_27c480;
    }
    ctx->pc = 0x27C478u;
    {
        const bool branch_taken_0x27c478 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x27c478) {
            ctx->pc = 0x27C494u;
            goto label_27c494;
        }
    }
    ctx->pc = 0x27C480u;
label_27c480:
    // 0x27c480: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27c480u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27c484:
    // 0x27c484: 0x0  nop
    ctx->pc = 0x27c484u;
    // NOP
label_27c488:
    // 0x27c488: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x27c488u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_27c48c:
    // 0x27c48c: 0x10000008  b           . + 4 + (0x8 << 2)
label_27c490:
    if (ctx->pc == 0x27C490u) {
        ctx->pc = 0x27C494u;
        goto label_27c494;
    }
    ctx->pc = 0x27C48Cu;
    {
        const bool branch_taken_0x27c48c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c48c) {
            ctx->pc = 0x27C4B0u;
            goto label_27c4b0;
        }
    }
    ctx->pc = 0x27C494u;
label_27c494:
    // 0x27c494: 0x23042  srl         $a2, $v0, 1
    ctx->pc = 0x27c494u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_27c498:
    // 0x27c498: 0x30440001  andi        $a0, $v0, 0x1
    ctx->pc = 0x27c498u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_27c49c:
    // 0x27c49c: 0xc43025  or          $a2, $a2, $a0
    ctx->pc = 0x27c49cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
label_27c4a0:
    // 0x27c4a0: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x27c4a0u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27c4a4:
    // 0x27c4a4: 0x0  nop
    ctx->pc = 0x27c4a4u;
    // NOP
label_27c4a8:
    // 0x27c4a8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x27c4a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_27c4ac:
    // 0x27c4ac: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x27c4acu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_27c4b0:
    // 0x27c4b0: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x27c4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
label_27c4b4:
    // 0x27c4b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27c4b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27c4b8:
    // 0x27c4b8: 0x0  nop
    ctx->pc = 0x27c4b8u;
    // NOP
label_27c4bc:
    // 0x27c4bc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x27c4bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_27c4c0:
    // 0x27c4c0: 0xe7a00170  swc1        $f0, 0x170($sp)
    ctx->pc = 0x27c4c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
label_27c4c4:
    // 0x27c4c4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x27c4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_27c4c8:
    // 0x27c4c8: 0x2207c  dsll32      $a0, $v0, 1
    ctx->pc = 0x27c4c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 1));
label_27c4cc:
    // 0x27c4cc: 0x4207e  dsrl32      $a0, $a0, 1
    ctx->pc = 0x27c4ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 1));
label_27c4d0:
    // 0x27c4d0: 0x8fa5023c  lw          $a1, 0x23C($sp)
    ctx->pc = 0x27c4d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 572)));
label_27c4d4:
    // 0x27c4d4: 0x85001b  divu        $zero, $a0, $a1
    ctx->pc = 0x27c4d4u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
label_27c4d8:
    // 0x27c4d8: 0x3012  mflo        $a2
    ctx->pc = 0x27c4d8u;
    SET_GPR_U64(ctx, 6, ctx->lo);
label_27c4dc:
    // 0x27c4dc: 0x4c00006  bltz        $a2, . + 4 + (0x6 << 2)
label_27c4e0:
    if (ctx->pc == 0x27C4E0u) {
        ctx->pc = 0x27C4E4u;
        goto label_27c4e4;
    }
    ctx->pc = 0x27C4DCu;
    {
        const bool branch_taken_0x27c4dc = (GPR_S32(ctx, 6) < 0);
        if (branch_taken_0x27c4dc) {
            ctx->pc = 0x27C4F8u;
            goto label_27c4f8;
        }
    }
    ctx->pc = 0x27C4E4u;
label_27c4e4:
    // 0x27c4e4: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x27c4e4u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27c4e8:
    // 0x27c4e8: 0x0  nop
    ctx->pc = 0x27c4e8u;
    // NOP
label_27c4ec:
    // 0x27c4ec: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x27c4ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_27c4f0:
    // 0x27c4f0: 0x10000008  b           . + 4 + (0x8 << 2)
label_27c4f4:
    if (ctx->pc == 0x27C4F4u) {
        ctx->pc = 0x27C4F8u;
        goto label_27c4f8;
    }
    ctx->pc = 0x27C4F0u;
    {
        const bool branch_taken_0x27c4f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c4f0) {
            ctx->pc = 0x27C514u;
            goto label_27c514;
        }
    }
    ctx->pc = 0x27C4F8u;
label_27c4f8:
    // 0x27c4f8: 0x61042  srl         $v0, $a2, 1
    ctx->pc = 0x27c4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
label_27c4fc:
    // 0x27c4fc: 0x30c40001  andi        $a0, $a2, 0x1
    ctx->pc = 0x27c4fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
label_27c500:
    // 0x27c500: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x27c500u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_27c504:
    // 0x27c504: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27c504u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27c508:
    // 0x27c508: 0x0  nop
    ctx->pc = 0x27c508u;
    // NOP
label_27c50c:
    // 0x27c50c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x27c50cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_27c510:
    // 0x27c510: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x27c510u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_27c514:
    // 0x27c514: 0x3c0542a0  lui         $a1, 0x42A0
    ctx->pc = 0x27c514u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17056 << 16));
label_27c518:
    // 0x27c518: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x27c518u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27c51c:
    // 0x27c51c: 0x0  nop
    ctx->pc = 0x27c51cu;
    // NOP
label_27c520:
    // 0x27c520: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x27c520u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_27c524:
    // 0x27c524: 0xe7a00178  swc1        $f0, 0x178($sp)
    ctx->pc = 0x27c524u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 376), bits); }
label_27c528:
    // 0x27c528: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x27c528u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27c52c:
    // 0x27c52c: 0x0  nop
    ctx->pc = 0x27c52cu;
    // NOP
label_27c530:
    // 0x27c530: 0xe7a00174  swc1        $f0, 0x174($sp)
    ctx->pc = 0x27c530u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 372), bits); }
label_27c534:
    // 0x27c534: 0xc7a10170  lwc1        $f1, 0x170($sp)
    ctx->pc = 0x27c534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27c538:
    // 0x27c538: 0xc7a00180  lwc1        $f0, 0x180($sp)
    ctx->pc = 0x27c538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27c53c:
    // 0x27c53c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x27c53cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_27c540:
    // 0x27c540: 0xe7a00170  swc1        $f0, 0x170($sp)
    ctx->pc = 0x27c540u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
label_27c544:
    // 0x27c544: 0xc7a10174  lwc1        $f1, 0x174($sp)
    ctx->pc = 0x27c544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27c548:
    // 0x27c548: 0xc7a00184  lwc1        $f0, 0x184($sp)
    ctx->pc = 0x27c548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27c54c:
    // 0x27c54c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x27c54cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_27c550:
    // 0x27c550: 0xe7a00174  swc1        $f0, 0x174($sp)
    ctx->pc = 0x27c550u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 372), bits); }
label_27c554:
    // 0x27c554: 0xc7a10178  lwc1        $f1, 0x178($sp)
    ctx->pc = 0x27c554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27c558:
    // 0x27c558: 0xc7a00188  lwc1        $f0, 0x188($sp)
    ctx->pc = 0x27c558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27c55c:
    // 0x27c55c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x27c55cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_27c560:
    // 0x27c560: 0xe7a00178  swc1        $f0, 0x178($sp)
    ctx->pc = 0x27c560u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 376), bits); }
label_27c564:
    // 0x27c564: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x27c564u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27c568:
    // 0x27c568: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x27c568u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_27c56c:
    // 0x27c56c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x27c56cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_27c570:
    // 0x27c570: 0xc22024  and         $a0, $a2, $v0
    ctx->pc = 0x27c570u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
label_27c574:
    // 0x27c574: 0x10800049  beqz        $a0, . + 4 + (0x49 << 2)
label_27c578:
    if (ctx->pc == 0x27C578u) {
        ctx->pc = 0x27C57Cu;
        goto label_27c57c;
    }
    ctx->pc = 0x27C574u;
    {
        const bool branch_taken_0x27c574 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c574) {
            ctx->pc = 0x27C69Cu;
            goto label_27c69c;
        }
    }
    ctx->pc = 0x27C57Cu;
label_27c57c:
    // 0x27c57c: 0xc7a10178  lwc1        $f1, 0x178($sp)
    ctx->pc = 0x27c57cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27c580:
    // 0x27c580: 0x3c054220  lui         $a1, 0x4220
    ctx->pc = 0x27c580u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16928 << 16));
label_27c584:
    // 0x27c584: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x27c584u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27c588:
    // 0x27c588: 0x0  nop
    ctx->pc = 0x27c588u;
    // NOP
label_27c58c:
    // 0x27c58c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x27c58cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_27c590:
    // 0x27c590: 0xe7a00178  swc1        $f0, 0x178($sp)
    ctx->pc = 0x27c590u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 376), bits); }
label_27c594:
    // 0x27c594: 0xc7a101a0  lwc1        $f1, 0x1A0($sp)
    ctx->pc = 0x27c594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27c598:
    // 0x27c598: 0xc7a00170  lwc1        $f0, 0x170($sp)
    ctx->pc = 0x27c598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27c59c:
    // 0x27c59c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x27c59cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27c5a0:
    // 0x27c5a0: 0x4501000a  bc1t        . + 4 + (0xA << 2)
label_27c5a4:
    if (ctx->pc == 0x27C5A4u) {
        ctx->pc = 0x27C5A8u;
        goto label_27c5a8;
    }
    ctx->pc = 0x27C5A0u;
    {
        const bool branch_taken_0x27c5a0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27c5a0) {
            ctx->pc = 0x27C5CCu;
            goto label_27c5cc;
        }
    }
    ctx->pc = 0x27C5A8u;
label_27c5a8:
    // 0x27c5a8: 0xc7a101b0  lwc1        $f1, 0x1B0($sp)
    ctx->pc = 0x27c5a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27c5ac:
    // 0x27c5ac: 0xc7a00170  lwc1        $f0, 0x170($sp)
    ctx->pc = 0x27c5acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27c5b0:
    // 0x27c5b0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x27c5b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27c5b4:
    // 0x27c5b4: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_27c5b8:
    if (ctx->pc == 0x27C5B8u) {
        ctx->pc = 0x27C5BCu;
        goto label_27c5bc;
    }
    ctx->pc = 0x27C5B4u;
    {
        const bool branch_taken_0x27c5b4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27c5b4) {
            ctx->pc = 0x27C5CCu;
            goto label_27c5cc;
        }
    }
    ctx->pc = 0x27C5BCu;
label_27c5bc:
    // 0x27c5bc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x27c5bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27c5c0:
    // 0x27c5c0: 0x30d600ff  andi        $s6, $a2, 0xFF
    ctx->pc = 0x27c5c0u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_27c5c4:
    // 0x27c5c4: 0x1000000d  b           . + 4 + (0xD << 2)
label_27c5c8:
    if (ctx->pc == 0x27C5C8u) {
        ctx->pc = 0x27C5CCu;
        goto label_27c5cc;
    }
    ctx->pc = 0x27C5C4u;
    {
        const bool branch_taken_0x27c5c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c5c4) {
            ctx->pc = 0x27C5FCu;
            goto label_27c5fc;
        }
    }
    ctx->pc = 0x27C5CCu;
label_27c5cc:
    // 0x27c5cc: 0xc7a101a0  lwc1        $f1, 0x1A0($sp)
    ctx->pc = 0x27c5ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27c5d0:
    // 0x27c5d0: 0xc7a00170  lwc1        $f0, 0x170($sp)
    ctx->pc = 0x27c5d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27c5d4:
    // 0x27c5d4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x27c5d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27c5d8:
    // 0x27c5d8: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_27c5dc:
    if (ctx->pc == 0x27C5DCu) {
        ctx->pc = 0x27C5E0u;
        goto label_27c5e0;
    }
    ctx->pc = 0x27C5D8u;
    {
        const bool branch_taken_0x27c5d8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27c5d8) {
            ctx->pc = 0x27C5FCu;
            goto label_27c5fc;
        }
    }
    ctx->pc = 0x27C5E0u;
label_27c5e0:
    // 0x27c5e0: 0xc7a101b0  lwc1        $f1, 0x1B0($sp)
    ctx->pc = 0x27c5e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27c5e4:
    // 0x27c5e4: 0xc7a00170  lwc1        $f0, 0x170($sp)
    ctx->pc = 0x27c5e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27c5e8:
    // 0x27c5e8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x27c5e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27c5ec:
    // 0x27c5ec: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_27c5f0:
    if (ctx->pc == 0x27C5F0u) {
        ctx->pc = 0x27C5F4u;
        goto label_27c5f4;
    }
    ctx->pc = 0x27C5ECu;
    {
        const bool branch_taken_0x27c5ec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27c5ec) {
            ctx->pc = 0x27C5FCu;
            goto label_27c5fc;
        }
    }
    ctx->pc = 0x27C5F4u;
label_27c5f4:
    // 0x27c5f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27c5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27c5f8:
    // 0x27c5f8: 0x305600ff  andi        $s6, $v0, 0xFF
    ctx->pc = 0x27c5f8u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_27c5fc:
    // 0x27c5fc: 0x16c00015  bnez        $s6, . + 4 + (0x15 << 2)
label_27c600:
    if (ctx->pc == 0x27C600u) {
        ctx->pc = 0x27C604u;
        goto label_27c604;
    }
    ctx->pc = 0x27C5FCu;
    {
        const bool branch_taken_0x27c5fc = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x27c5fc) {
            ctx->pc = 0x27C654u;
            goto label_27c654;
        }
    }
    ctx->pc = 0x27C604u;
label_27c604:
    // 0x27c604: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x27c604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_27c608:
    // 0x27c608: 0x10020007  beq         $zero, $v0, . + 4 + (0x7 << 2)
label_27c60c:
    if (ctx->pc == 0x27C60Cu) {
        ctx->pc = 0x27C610u;
        goto label_27c610;
    }
    ctx->pc = 0x27C608u;
    {
        const bool branch_taken_0x27c608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x27c608) {
            ctx->pc = 0x27C628u;
            goto label_27c628;
        }
    }
    ctx->pc = 0x27C610u;
label_27c610:
    // 0x27c610: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x27c610u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_27c614:
    // 0x27c614: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x27c614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_27c618:
    // 0x27c618: 0x3c02f7ff  lui         $v0, 0xF7FF
    ctx->pc = 0x27c618u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63487 << 16));
label_27c61c:
    // 0x27c61c: 0x3444ffff  ori         $a0, $v0, 0xFFFF
    ctx->pc = 0x27c61cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_27c620:
    // 0x27c620: 0x642024  and         $a0, $v1, $a0
    ctx->pc = 0x27c620u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_27c624:
    // 0x27c624: 0xaca40004  sw          $a0, 0x4($a1)
    ctx->pc = 0x27c624u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
label_27c628:
    // 0x27c628: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x27c628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_27c62c:
    // 0x27c62c: 0x10020061  beq         $zero, $v0, . + 4 + (0x61 << 2)
label_27c630:
    if (ctx->pc == 0x27C630u) {
        ctx->pc = 0x27C634u;
        goto label_27c634;
    }
    ctx->pc = 0x27C62Cu;
    {
        const bool branch_taken_0x27c62c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x27c62c) {
            ctx->pc = 0x27C7B4u;
            goto label_27c7b4;
        }
    }
    ctx->pc = 0x27C634u;
label_27c634:
    // 0x27c634: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x27c634u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_27c638:
    // 0x27c638: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x27c638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_27c63c:
    // 0x27c63c: 0x3c04fbff  lui         $a0, 0xFBFF
    ctx->pc = 0x27c63cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64511 << 16));
label_27c640:
    // 0x27c640: 0x3482ffff  ori         $v0, $a0, 0xFFFF
    ctx->pc = 0x27c640u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_27c644:
    // 0x27c644: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x27c644u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_27c648:
    // 0x27c648: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x27c648u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_27c64c:
    // 0x27c64c: 0x10000059  b           . + 4 + (0x59 << 2)
label_27c650:
    if (ctx->pc == 0x27C650u) {
        ctx->pc = 0x27C654u;
        goto label_27c654;
    }
    ctx->pc = 0x27C64Cu;
    {
        const bool branch_taken_0x27c64c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c64c) {
            ctx->pc = 0x27C7B4u;
            goto label_27c7b4;
        }
    }
    ctx->pc = 0x27C654u;
label_27c654:
    // 0x27c654: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x27c654u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_27c658:
    // 0x27c658: 0x10040006  beq         $zero, $a0, . + 4 + (0x6 << 2)
label_27c65c:
    if (ctx->pc == 0x27C65Cu) {
        ctx->pc = 0x27C660u;
        goto label_27c660;
    }
    ctx->pc = 0x27C658u;
    {
        const bool branch_taken_0x27c658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 4));
        if (branch_taken_0x27c658) {
            ctx->pc = 0x27C674u;
            goto label_27c674;
        }
    }
    ctx->pc = 0x27C660u;
label_27c660:
    // 0x27c660: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x27c660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_27c664:
    // 0x27c664: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x27c664u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_27c668:
    // 0x27c668: 0x3c050800  lui         $a1, 0x800
    ctx->pc = 0x27c668u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2048 << 16));
label_27c66c:
    // 0x27c66c: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x27c66cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_27c670:
    // 0x27c670: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x27c670u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
label_27c674:
    // 0x27c674: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x27c674u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_27c678:
    // 0x27c678: 0x1005004e  beq         $zero, $a1, . + 4 + (0x4E << 2)
label_27c67c:
    if (ctx->pc == 0x27C67Cu) {
        ctx->pc = 0x27C680u;
        goto label_27c680;
    }
    ctx->pc = 0x27C678u;
    {
        const bool branch_taken_0x27c678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 5));
        if (branch_taken_0x27c678) {
            ctx->pc = 0x27C7B4u;
            goto label_27c7b4;
        }
    }
    ctx->pc = 0x27C680u;
label_27c680:
    // 0x27c680: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x27c680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_27c684:
    // 0x27c684: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x27c684u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_27c688:
    // 0x27c688: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x27c688u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
label_27c68c:
    // 0x27c68c: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x27c68cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_27c690:
    // 0x27c690: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x27c690u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
label_27c694:
    // 0x27c694: 0x10000047  b           . + 4 + (0x47 << 2)
label_27c698:
    if (ctx->pc == 0x27C698u) {
        ctx->pc = 0x27C69Cu;
        goto label_27c69c;
    }
    ctx->pc = 0x27C694u;
    {
        const bool branch_taken_0x27c694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c694) {
            ctx->pc = 0x27C7B4u;
            goto label_27c7b4;
        }
    }
    ctx->pc = 0x27C69Cu;
label_27c69c:
    // 0x27c69c: 0xc7a10170  lwc1        $f1, 0x170($sp)
    ctx->pc = 0x27c69cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27c6a0:
    // 0x27c6a0: 0x3c044220  lui         $a0, 0x4220
    ctx->pc = 0x27c6a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16928 << 16));
label_27c6a4:
    // 0x27c6a4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x27c6a4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27c6a8:
    // 0x27c6a8: 0x0  nop
    ctx->pc = 0x27c6a8u;
    // NOP
label_27c6ac:
    // 0x27c6ac: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x27c6acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_27c6b0:
    // 0x27c6b0: 0xe7a00170  swc1        $f0, 0x170($sp)
    ctx->pc = 0x27c6b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
label_27c6b4:
    // 0x27c6b4: 0xc7a101a8  lwc1        $f1, 0x1A8($sp)
    ctx->pc = 0x27c6b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27c6b8:
    // 0x27c6b8: 0xc7a00178  lwc1        $f0, 0x178($sp)
    ctx->pc = 0x27c6b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27c6bc:
    // 0x27c6bc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x27c6bcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27c6c0:
    // 0x27c6c0: 0x4501000a  bc1t        . + 4 + (0xA << 2)
label_27c6c4:
    if (ctx->pc == 0x27C6C4u) {
        ctx->pc = 0x27C6C8u;
        goto label_27c6c8;
    }
    ctx->pc = 0x27C6C0u;
    {
        const bool branch_taken_0x27c6c0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27c6c0) {
            ctx->pc = 0x27C6ECu;
            goto label_27c6ec;
        }
    }
    ctx->pc = 0x27C6C8u;
label_27c6c8:
    // 0x27c6c8: 0xc7a101b8  lwc1        $f1, 0x1B8($sp)
    ctx->pc = 0x27c6c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27c6cc:
    // 0x27c6cc: 0xc7a00178  lwc1        $f0, 0x178($sp)
    ctx->pc = 0x27c6ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27c6d0:
    // 0x27c6d0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x27c6d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27c6d4:
    // 0x27c6d4: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_27c6d8:
    if (ctx->pc == 0x27C6D8u) {
        ctx->pc = 0x27C6DCu;
        goto label_27c6dc;
    }
    ctx->pc = 0x27C6D4u;
    {
        const bool branch_taken_0x27c6d4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27c6d4) {
            ctx->pc = 0x27C6ECu;
            goto label_27c6ec;
        }
    }
    ctx->pc = 0x27C6DCu;
label_27c6dc:
    // 0x27c6dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27c6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27c6e0:
    // 0x27c6e0: 0x305600ff  andi        $s6, $v0, 0xFF
    ctx->pc = 0x27c6e0u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_27c6e4:
    // 0x27c6e4: 0x1000000d  b           . + 4 + (0xD << 2)
label_27c6e8:
    if (ctx->pc == 0x27C6E8u) {
        ctx->pc = 0x27C6ECu;
        goto label_27c6ec;
    }
    ctx->pc = 0x27C6E4u;
    {
        const bool branch_taken_0x27c6e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c6e4) {
            ctx->pc = 0x27C71Cu;
            goto label_27c71c;
        }
    }
    ctx->pc = 0x27C6ECu;
label_27c6ec:
    // 0x27c6ec: 0xc7a101a8  lwc1        $f1, 0x1A8($sp)
    ctx->pc = 0x27c6ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27c6f0:
    // 0x27c6f0: 0xc7a00178  lwc1        $f0, 0x178($sp)
    ctx->pc = 0x27c6f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27c6f4:
    // 0x27c6f4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x27c6f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27c6f8:
    // 0x27c6f8: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_27c6fc:
    if (ctx->pc == 0x27C6FCu) {
        ctx->pc = 0x27C700u;
        goto label_27c700;
    }
    ctx->pc = 0x27C6F8u;
    {
        const bool branch_taken_0x27c6f8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27c6f8) {
            ctx->pc = 0x27C71Cu;
            goto label_27c71c;
        }
    }
    ctx->pc = 0x27C700u;
label_27c700:
    // 0x27c700: 0xc7a101b8  lwc1        $f1, 0x1B8($sp)
    ctx->pc = 0x27c700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27c704:
    // 0x27c704: 0xc7a00178  lwc1        $f0, 0x178($sp)
    ctx->pc = 0x27c704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27c708:
    // 0x27c708: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x27c708u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27c70c:
    // 0x27c70c: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_27c710:
    if (ctx->pc == 0x27C710u) {
        ctx->pc = 0x27C714u;
        goto label_27c714;
    }
    ctx->pc = 0x27C70Cu;
    {
        const bool branch_taken_0x27c70c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27c70c) {
            ctx->pc = 0x27C71Cu;
            goto label_27c71c;
        }
    }
    ctx->pc = 0x27C714u;
label_27c714:
    // 0x27c714: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x27c714u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27c718:
    // 0x27c718: 0x309600ff  andi        $s6, $a0, 0xFF
    ctx->pc = 0x27c718u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_27c71c:
    // 0x27c71c: 0x16c00015  bnez        $s6, . + 4 + (0x15 << 2)
label_27c720:
    if (ctx->pc == 0x27C720u) {
        ctx->pc = 0x27C724u;
        goto label_27c724;
    }
    ctx->pc = 0x27C71Cu;
    {
        const bool branch_taken_0x27c71c = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x27c71c) {
            ctx->pc = 0x27C774u;
            goto label_27c774;
        }
    }
    ctx->pc = 0x27C724u;
label_27c724:
    // 0x27c724: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x27c724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_27c728:
    // 0x27c728: 0x10020007  beq         $zero, $v0, . + 4 + (0x7 << 2)
label_27c72c:
    if (ctx->pc == 0x27C72Cu) {
        ctx->pc = 0x27C730u;
        goto label_27c730;
    }
    ctx->pc = 0x27C728u;
    {
        const bool branch_taken_0x27c728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x27c728) {
            ctx->pc = 0x27C748u;
            goto label_27c748;
        }
    }
    ctx->pc = 0x27C730u;
label_27c730:
    // 0x27c730: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x27c730u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_27c734:
    // 0x27c734: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x27c734u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_27c738:
    // 0x27c738: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x27c738u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
label_27c73c:
    // 0x27c73c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x27c73cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_27c740:
    // 0x27c740: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x27c740u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
label_27c744:
    // 0x27c744: 0xac850004  sw          $a1, 0x4($a0)
    ctx->pc = 0x27c744u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
label_27c748:
    // 0x27c748: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x27c748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_27c74c:
    // 0x27c74c: 0x10020019  beq         $zero, $v0, . + 4 + (0x19 << 2)
label_27c750:
    if (ctx->pc == 0x27C750u) {
        ctx->pc = 0x27C754u;
        goto label_27c754;
    }
    ctx->pc = 0x27C74Cu;
    {
        const bool branch_taken_0x27c74c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x27c74c) {
            ctx->pc = 0x27C7B4u;
            goto label_27c7b4;
        }
    }
    ctx->pc = 0x27C754u;
label_27c754:
    // 0x27c754: 0x8e060014  lw          $a2, 0x14($s0)
    ctx->pc = 0x27c754u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_27c758:
    // 0x27c758: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x27c758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_27c75c:
    // 0x27c75c: 0x3c04fdff  lui         $a0, 0xFDFF
    ctx->pc = 0x27c75cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65023 << 16));
label_27c760:
    // 0x27c760: 0x3482ffff  ori         $v0, $a0, 0xFFFF
    ctx->pc = 0x27c760u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_27c764:
    // 0x27c764: 0x622824  and         $a1, $v1, $v0
    ctx->pc = 0x27c764u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_27c768:
    // 0x27c768: 0xacc50004  sw          $a1, 0x4($a2)
    ctx->pc = 0x27c768u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 5));
label_27c76c:
    // 0x27c76c: 0x10000011  b           . + 4 + (0x11 << 2)
label_27c770:
    if (ctx->pc == 0x27C770u) {
        ctx->pc = 0x27C774u;
        goto label_27c774;
    }
    ctx->pc = 0x27C76Cu;
    {
        const bool branch_taken_0x27c76c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c76c) {
            ctx->pc = 0x27C7B4u;
            goto label_27c7b4;
        }
    }
    ctx->pc = 0x27C774u;
label_27c774:
    // 0x27c774: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x27c774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_27c778:
    // 0x27c778: 0x10020006  beq         $zero, $v0, . + 4 + (0x6 << 2)
label_27c77c:
    if (ctx->pc == 0x27C77Cu) {
        ctx->pc = 0x27C780u;
        goto label_27c780;
    }
    ctx->pc = 0x27C778u;
    {
        const bool branch_taken_0x27c778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x27c778) {
            ctx->pc = 0x27C794u;
            goto label_27c794;
        }
    }
    ctx->pc = 0x27C780u;
label_27c780:
    // 0x27c780: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x27c780u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_27c784:
    // 0x27c784: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x27c784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_27c788:
    // 0x27c788: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x27c788u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
label_27c78c:
    // 0x27c78c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x27c78cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_27c790:
    // 0x27c790: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x27c790u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_27c794:
    // 0x27c794: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x27c794u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_27c798:
    // 0x27c798: 0x10040006  beq         $zero, $a0, . + 4 + (0x6 << 2)
label_27c79c:
    if (ctx->pc == 0x27C79Cu) {
        ctx->pc = 0x27C7A0u;
        goto label_27c7a0;
    }
    ctx->pc = 0x27C798u;
    {
        const bool branch_taken_0x27c798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 4));
        if (branch_taken_0x27c798) {
            ctx->pc = 0x27C7B4u;
            goto label_27c7b4;
        }
    }
    ctx->pc = 0x27C7A0u;
label_27c7a0:
    // 0x27c7a0: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x27c7a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_27c7a4:
    // 0x27c7a4: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x27c7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_27c7a8:
    // 0x27c7a8: 0x3c040200  lui         $a0, 0x200
    ctx->pc = 0x27c7a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)512 << 16));
label_27c7ac:
    // 0x27c7ac: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x27c7acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_27c7b0:
    // 0x27c7b0: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x27c7b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_27c7b4:
    // 0x27c7b4: 0x16c00005  bnez        $s6, . + 4 + (0x5 << 2)
label_27c7b8:
    if (ctx->pc == 0x27C7B8u) {
        ctx->pc = 0x27C7BCu;
        goto label_27c7bc;
    }
    ctx->pc = 0x27C7B4u;
    {
        const bool branch_taken_0x27c7b4 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x27c7b4) {
            ctx->pc = 0x27C7CCu;
            goto label_27c7cc;
        }
    }
    ctx->pc = 0x27C7BCu;
label_27c7bc:
    // 0x27c7bc: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x27c7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_27c7c0:
    // 0x27c7c0: 0x305300ff  andi        $s3, $v0, 0xFF
    ctx->pc = 0x27c7c0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_27c7c4:
    // 0x27c7c4: 0x1000004f  b           . + 4 + (0x4F << 2)
label_27c7c8:
    if (ctx->pc == 0x27C7C8u) {
        ctx->pc = 0x27C7CCu;
        goto label_27c7cc;
    }
    ctx->pc = 0x27C7C4u;
    {
        const bool branch_taken_0x27c7c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c7c4) {
            ctx->pc = 0x27C904u;
            goto label_27c904;
        }
    }
    ctx->pc = 0x27C7CCu;
label_27c7cc:
    // 0x27c7cc: 0xc7a10170  lwc1        $f1, 0x170($sp)
    ctx->pc = 0x27c7ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27c7d0:
    // 0x27c7d0: 0xc7a001a0  lwc1        $f0, 0x1A0($sp)
    ctx->pc = 0x27c7d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27c7d4:
    // 0x27c7d4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x27c7d4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_27c7d8:
    // 0x27c7d8: 0xe7a00160  swc1        $f0, 0x160($sp)
    ctx->pc = 0x27c7d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
label_27c7dc:
    // 0x27c7dc: 0xc7a10174  lwc1        $f1, 0x174($sp)
    ctx->pc = 0x27c7dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27c7e0:
    // 0x27c7e0: 0xc7a001a4  lwc1        $f0, 0x1A4($sp)
    ctx->pc = 0x27c7e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27c7e4:
    // 0x27c7e4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x27c7e4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_27c7e8:
    // 0x27c7e8: 0xe7a00164  swc1        $f0, 0x164($sp)
    ctx->pc = 0x27c7e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 356), bits); }
label_27c7ec:
    // 0x27c7ec: 0xc7a10178  lwc1        $f1, 0x178($sp)
    ctx->pc = 0x27c7ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27c7f0:
    // 0x27c7f0: 0xc7a001a8  lwc1        $f0, 0x1A8($sp)
    ctx->pc = 0x27c7f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27c7f4:
    // 0x27c7f4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x27c7f4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_27c7f8:
    // 0x27c7f8: 0xe7a00168  swc1        $f0, 0x168($sp)
    ctx->pc = 0x27c7f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
label_27c7fc:
    // 0x27c7fc: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x27c7fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_27c800:
    // 0x27c800: 0xc104d24  jal         func_413490
label_27c804:
    if (ctx->pc == 0x27C804u) {
        ctx->pc = 0x27C808u;
        goto label_27c808;
    }
    ctx->pc = 0x27C800u;
    SET_GPR_U32(ctx, 31, 0x27C808u);
    ctx->pc = 0x413490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413490u, 0x27C800u, 0x27C808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C808u;
label_27c808:
    // 0x27c808: 0xe7a00224  swc1        $f0, 0x224($sp)
    ctx->pc = 0x27c808u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 548), bits); }
label_27c80c:
    // 0x27c80c: 0xc7a10224  lwc1        $f1, 0x224($sp)
    ctx->pc = 0x27c80cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27c810:
    // 0x27c810: 0x3c024320  lui         $v0, 0x4320
    ctx->pc = 0x27c810u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17184 << 16));
label_27c814:
    // 0x27c814: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27c814u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27c818:
    // 0x27c818: 0x0  nop
    ctx->pc = 0x27c818u;
    // NOP
label_27c81c:
    // 0x27c81c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x27c81cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27c820:
    // 0x27c820: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_27c824:
    if (ctx->pc == 0x27C824u) {
        ctx->pc = 0x27C828u;
        goto label_27c828;
    }
    ctx->pc = 0x27C820u;
    {
        const bool branch_taken_0x27c820 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27c820) {
            ctx->pc = 0x27C834u;
            goto label_27c834;
        }
    }
    ctx->pc = 0x27C828u;
label_27c828:
    // 0x27c828: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x27c828u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27c82c:
    // 0x27c82c: 0x10000028  b           . + 4 + (0x28 << 2)
label_27c830:
    if (ctx->pc == 0x27C830u) {
        ctx->pc = 0x27C834u;
        goto label_27c834;
    }
    ctx->pc = 0x27C82Cu;
    {
        const bool branch_taken_0x27c82c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c82c) {
            ctx->pc = 0x27C8D0u;
            goto label_27c8d0;
        }
    }
    ctx->pc = 0x27C834u;
label_27c834:
    // 0x27c834: 0xc7a10224  lwc1        $f1, 0x224($sp)
    ctx->pc = 0x27c834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27c838:
    // 0x27c838: 0x3c0243b4  lui         $v0, 0x43B4
    ctx->pc = 0x27c838u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17332 << 16));
label_27c83c:
    // 0x27c83c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27c83cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27c840:
    // 0x27c840: 0x0  nop
    ctx->pc = 0x27c840u;
    // NOP
label_27c844:
    // 0x27c844: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x27c844u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27c848:
    // 0x27c848: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_27c84c:
    if (ctx->pc == 0x27C84Cu) {
        ctx->pc = 0x27C850u;
        goto label_27c850;
    }
    ctx->pc = 0x27C848u;
    {
        const bool branch_taken_0x27c848 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27c848) {
            ctx->pc = 0x27C860u;
            goto label_27c860;
        }
    }
    ctx->pc = 0x27C850u;
label_27c850:
    // 0x27c850: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x27c850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_27c854:
    // 0x27c854: 0x309300ff  andi        $s3, $a0, 0xFF
    ctx->pc = 0x27c854u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_27c858:
    // 0x27c858: 0x1000001d  b           . + 4 + (0x1D << 2)
label_27c85c:
    if (ctx->pc == 0x27C85Cu) {
        ctx->pc = 0x27C860u;
        goto label_27c860;
    }
    ctx->pc = 0x27C858u;
    {
        const bool branch_taken_0x27c858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c858) {
            ctx->pc = 0x27C8D0u;
            goto label_27c8d0;
        }
    }
    ctx->pc = 0x27C860u;
label_27c860:
    // 0x27c860: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x27c860u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
label_27c864:
    // 0x27c864: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x27c864u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_27c868:
    // 0x27c868: 0xc7a10224  lwc1        $f1, 0x224($sp)
    ctx->pc = 0x27c868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27c86c:
    // 0x27c86c: 0x3c044320  lui         $a0, 0x4320
    ctx->pc = 0x27c86cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17184 << 16));
label_27c870:
    // 0x27c870: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x27c870u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27c874:
    // 0x27c874: 0x0  nop
    ctx->pc = 0x27c874u;
    // NOP
label_27c878:
    // 0x27c878: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x27c878u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_27c87c:
    // 0x27c87c: 0x46001042  mul.s       $f1, $f2, $f0
    ctx->pc = 0x27c87cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_27c880:
    // 0x27c880: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x27c880u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
label_27c884:
    // 0x27c884: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27c884u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27c888:
    // 0x27c888: 0x0  nop
    ctx->pc = 0x27c888u;
    // NOP
label_27c88c:
    // 0x27c88c: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x27c88cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_27c890:
    // 0x27c890: 0x3c044f00  lui         $a0, 0x4F00
    ctx->pc = 0x27c890u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20224 << 16));
label_27c894:
    // 0x27c894: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x27c894u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27c898:
    // 0x27c898: 0x0  nop
    ctx->pc = 0x27c898u;
    // NOP
label_27c89c:
    // 0x27c89c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x27c89cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27c8a0:
    // 0x27c8a0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_27c8a4:
    if (ctx->pc == 0x27C8A4u) {
        ctx->pc = 0x27C8A8u;
        goto label_27c8a8;
    }
    ctx->pc = 0x27C8A0u;
    {
        const bool branch_taken_0x27c8a0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27c8a0) {
            ctx->pc = 0x27C8B8u;
            goto label_27c8b8;
        }
    }
    ctx->pc = 0x27C8A8u;
label_27c8a8:
    // 0x27c8a8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x27c8a8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_27c8ac:
    // 0x27c8ac: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x27c8acu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_27c8b0:
    // 0x27c8b0: 0x10000006  b           . + 4 + (0x6 << 2)
label_27c8b4:
    if (ctx->pc == 0x27C8B4u) {
        ctx->pc = 0x27C8B8u;
        goto label_27c8b8;
    }
    ctx->pc = 0x27C8B0u;
    {
        const bool branch_taken_0x27c8b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c8b0) {
            ctx->pc = 0x27C8CCu;
            goto label_27c8cc;
        }
    }
    ctx->pc = 0x27C8B8u;
label_27c8b8:
    // 0x27c8b8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x27c8b8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_27c8bc:
    // 0x27c8bc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x27c8bcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_27c8c0:
    // 0x27c8c0: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x27c8c0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_27c8c4:
    // 0x27c8c4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x27c8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_27c8c8:
    // 0x27c8c8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x27c8c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_27c8cc:
    // 0x27c8cc: 0x305300ff  andi        $s3, $v0, 0xFF
    ctx->pc = 0x27c8ccu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_27c8d0:
    // 0x27c8d0: 0x326400ff  andi        $a0, $s3, 0xFF
    ctx->pc = 0x27c8d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
label_27c8d4:
    // 0x27c8d4: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x27c8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_27c8d8:
    // 0x27c8d8: 0x1082000a  beq         $a0, $v0, . + 4 + (0xA << 2)
label_27c8dc:
    if (ctx->pc == 0x27C8DCu) {
        ctx->pc = 0x27C8E0u;
        goto label_27c8e0;
    }
    ctx->pc = 0x27C8D8u;
    {
        const bool branch_taken_0x27c8d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x27c8d8) {
            ctx->pc = 0x27C904u;
            goto label_27c904;
        }
    }
    ctx->pc = 0x27C8E0u;
label_27c8e0:
    // 0x27c8e0: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x27c8e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_27c8e4:
    // 0x27c8e4: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_27c8e8:
    if (ctx->pc == 0x27C8E8u) {
        ctx->pc = 0x27C8ECu;
        goto label_27c8ec;
    }
    ctx->pc = 0x27C8E4u;
    {
        const bool branch_taken_0x27c8e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c8e4) {
            ctx->pc = 0x27C904u;
            goto label_27c904;
        }
    }
    ctx->pc = 0x27C8ECu;
label_27c8ec:
    // 0x27c8ec: 0x27a50128  addiu       $a1, $sp, 0x128
    ctx->pc = 0x27c8ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 296));
label_27c8f0:
    // 0x27c8f0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x27c8f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_27c8f4:
    // 0x27c8f4: 0x26250074  addiu       $a1, $s1, 0x74
    ctx->pc = 0x27c8f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 116));
label_27c8f8:
    // 0x27c8f8: 0x26060018  addiu       $a2, $s0, 0x18
    ctx->pc = 0x27c8f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
label_27c8fc:
    // 0x27c8fc: 0xc064204  jal         func_190810
label_27c900:
    if (ctx->pc == 0x27C900u) {
        ctx->pc = 0x27C904u;
        goto label_27c904;
    }
    ctx->pc = 0x27C8FCu;
    SET_GPR_U32(ctx, 31, 0x27C904u);
    ctx->pc = 0x190810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190810u, 0x27C8FCu, 0x27C904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C904u;
label_27c904:
    // 0x27c904: 0xc7a10170  lwc1        $f1, 0x170($sp)
    ctx->pc = 0x27c904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27c908:
    // 0x27c908: 0xc7a001b0  lwc1        $f0, 0x1B0($sp)
    ctx->pc = 0x27c908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27c90c:
    // 0x27c90c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x27c90cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_27c910:
    // 0x27c910: 0xe7a00160  swc1        $f0, 0x160($sp)
    ctx->pc = 0x27c910u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
label_27c914:
    // 0x27c914: 0xc7a10174  lwc1        $f1, 0x174($sp)
    ctx->pc = 0x27c914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27c918:
    // 0x27c918: 0xc7a001b4  lwc1        $f0, 0x1B4($sp)
    ctx->pc = 0x27c918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27c91c:
    // 0x27c91c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x27c91cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_27c920:
    // 0x27c920: 0xe7a00164  swc1        $f0, 0x164($sp)
    ctx->pc = 0x27c920u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 356), bits); }
label_27c924:
    // 0x27c924: 0xc7a10178  lwc1        $f1, 0x178($sp)
    ctx->pc = 0x27c924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27c928:
    // 0x27c928: 0xc7a001b8  lwc1        $f0, 0x1B8($sp)
    ctx->pc = 0x27c928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27c92c:
    // 0x27c92c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x27c92cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_27c930:
    // 0x27c930: 0xe7a00168  swc1        $f0, 0x168($sp)
    ctx->pc = 0x27c930u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
label_27c934:
    // 0x27c934: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x27c934u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_27c938:
    // 0x27c938: 0xc104d24  jal         func_413490
label_27c93c:
    if (ctx->pc == 0x27C93Cu) {
        ctx->pc = 0x27C940u;
        goto label_27c940;
    }
    ctx->pc = 0x27C938u;
    SET_GPR_U32(ctx, 31, 0x27C940u);
    ctx->pc = 0x413490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413490u, 0x27C938u, 0x27C940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C940u;
label_27c940:
    // 0x27c940: 0xe7a00220  swc1        $f0, 0x220($sp)
    ctx->pc = 0x27c940u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 544), bits); }
label_27c944:
    // 0x27c944: 0xc7a10220  lwc1        $f1, 0x220($sp)
    ctx->pc = 0x27c944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27c948:
    // 0x27c948: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x27c948u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
label_27c94c:
    // 0x27c94c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27c94cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27c950:
    // 0x27c950: 0x0  nop
    ctx->pc = 0x27c950u;
    // NOP
label_27c954:
    // 0x27c954: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x27c954u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27c958:
    // 0x27c958: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_27c95c:
    if (ctx->pc == 0x27C95Cu) {
        ctx->pc = 0x27C960u;
        goto label_27c960;
    }
    ctx->pc = 0x27C958u;
    {
        const bool branch_taken_0x27c958 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27c958) {
            ctx->pc = 0x27C96Cu;
            goto label_27c96c;
        }
    }
    ctx->pc = 0x27C960u;
label_27c960:
    // 0x27c960: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x27c960u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27c964:
    // 0x27c964: 0x10000049  b           . + 4 + (0x49 << 2)
label_27c968:
    if (ctx->pc == 0x27C968u) {
        ctx->pc = 0x27C96Cu;
        goto label_27c96c;
    }
    ctx->pc = 0x27C964u;
    {
        const bool branch_taken_0x27c964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c964) {
            ctx->pc = 0x27CA8Cu;
            goto label_27ca8c;
        }
    }
    ctx->pc = 0x27C96Cu;
label_27c96c:
    // 0x27c96c: 0xc7a10220  lwc1        $f1, 0x220($sp)
    ctx->pc = 0x27c96cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27c970:
    // 0x27c970: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x27c970u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_27c974:
    // 0x27c974: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27c974u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27c978:
    // 0x27c978: 0x0  nop
    ctx->pc = 0x27c978u;
    // NOP
label_27c97c:
    // 0x27c97c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x27c97cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27c980:
    // 0x27c980: 0x45000042  bc1f        . + 4 + (0x42 << 2)
label_27c984:
    if (ctx->pc == 0x27C984u) {
        ctx->pc = 0x27C988u;
        goto label_27c988;
    }
    ctx->pc = 0x27C980u;
    {
        const bool branch_taken_0x27c980 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27c980) {
            ctx->pc = 0x27CA8Cu;
            goto label_27ca8c;
        }
    }
    ctx->pc = 0x27C988u;
label_27c988:
    // 0x27c988: 0x326200ff  andi        $v0, $s3, 0xFF
    ctx->pc = 0x27c988u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
label_27c98c:
    // 0x27c98c: 0x3c04437f  lui         $a0, 0x437F
    ctx->pc = 0x27c98cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17279 << 16));
label_27c990:
    // 0x27c990: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x27c990u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_27c994:
    // 0x27c994: 0xc7a10220  lwc1        $f1, 0x220($sp)
    ctx->pc = 0x27c994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27c998:
    // 0x27c998: 0x3c0542c8  lui         $a1, 0x42C8
    ctx->pc = 0x27c998u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17096 << 16));
label_27c99c:
    // 0x27c99c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x27c99cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27c9a0:
    // 0x27c9a0: 0x0  nop
    ctx->pc = 0x27c9a0u;
    // NOP
label_27c9a4:
    // 0x27c9a4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x27c9a4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_27c9a8:
    // 0x27c9a8: 0x46001042  mul.s       $f1, $f2, $f0
    ctx->pc = 0x27c9a8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_27c9ac:
    // 0x27c9ac: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x27c9acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
label_27c9b0:
    // 0x27c9b0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x27c9b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27c9b4:
    // 0x27c9b4: 0x0  nop
    ctx->pc = 0x27c9b4u;
    // NOP
label_27c9b8:
    // 0x27c9b8: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x27c9b8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_27c9bc:
    // 0x27c9bc: 0x3c044f00  lui         $a0, 0x4F00
    ctx->pc = 0x27c9bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20224 << 16));
label_27c9c0:
    // 0x27c9c0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x27c9c0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27c9c4:
    // 0x27c9c4: 0x0  nop
    ctx->pc = 0x27c9c4u;
    // NOP
label_27c9c8:
    // 0x27c9c8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x27c9c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27c9cc:
    // 0x27c9cc: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_27c9d0:
    if (ctx->pc == 0x27C9D0u) {
        ctx->pc = 0x27C9D4u;
        goto label_27c9d4;
    }
    ctx->pc = 0x27C9CCu;
    {
        const bool branch_taken_0x27c9cc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27c9cc) {
            ctx->pc = 0x27C9E4u;
            goto label_27c9e4;
        }
    }
    ctx->pc = 0x27C9D4u;
label_27c9d4:
    // 0x27c9d4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x27c9d4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_27c9d8:
    // 0x27c9d8: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x27c9d8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_27c9dc:
    // 0x27c9dc: 0x10000006  b           . + 4 + (0x6 << 2)
label_27c9e0:
    if (ctx->pc == 0x27C9E0u) {
        ctx->pc = 0x27C9E4u;
        goto label_27c9e4;
    }
    ctx->pc = 0x27C9DCu;
    {
        const bool branch_taken_0x27c9dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c9dc) {
            ctx->pc = 0x27C9F8u;
            goto label_27c9f8;
        }
    }
    ctx->pc = 0x27C9E4u;
label_27c9e4:
    // 0x27c9e4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x27c9e4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_27c9e8:
    // 0x27c9e8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x27c9e8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_27c9ec:
    // 0x27c9ec: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x27c9ecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_27c9f0:
    // 0x27c9f0: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x27c9f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
label_27c9f4:
    // 0x27c9f4: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x27c9f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_27c9f8:
    // 0x27c9f8: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x27c9f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_27c9fc:
    // 0x27c9fc: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x27c9fcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_27ca00:
    // 0x27ca00: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_27ca04:
    if (ctx->pc == 0x27CA04u) {
        ctx->pc = 0x27CA08u;
        goto label_27ca08;
    }
    ctx->pc = 0x27CA00u;
    {
        const bool branch_taken_0x27ca00 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x27ca00) {
            ctx->pc = 0x27CA14u;
            goto label_27ca14;
        }
    }
    ctx->pc = 0x27CA08u;
label_27ca08:
    // 0x27ca08: 0xa3b3025d  sb          $s3, 0x25D($sp)
    ctx->pc = 0x27ca08u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 605), (uint8_t)GPR_U32(ctx, 19));
label_27ca0c:
    // 0x27ca0c: 0x1000001d  b           . + 4 + (0x1D << 2)
label_27ca10:
    if (ctx->pc == 0x27CA10u) {
        ctx->pc = 0x27CA14u;
        goto label_27ca14;
    }
    ctx->pc = 0x27CA0Cu;
    {
        const bool branch_taken_0x27ca0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27ca0c) {
            ctx->pc = 0x27CA84u;
            goto label_27ca84;
        }
    }
    ctx->pc = 0x27CA14u;
label_27ca14:
    // 0x27ca14: 0x3c04437f  lui         $a0, 0x437F
    ctx->pc = 0x27ca14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17279 << 16));
label_27ca18:
    // 0x27ca18: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x27ca18u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_27ca1c:
    // 0x27ca1c: 0xc7a10220  lwc1        $f1, 0x220($sp)
    ctx->pc = 0x27ca1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27ca20:
    // 0x27ca20: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x27ca20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_27ca24:
    // 0x27ca24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27ca24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27ca28:
    // 0x27ca28: 0x0  nop
    ctx->pc = 0x27ca28u;
    // NOP
label_27ca2c:
    // 0x27ca2c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x27ca2cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_27ca30:
    // 0x27ca30: 0x46001042  mul.s       $f1, $f2, $f0
    ctx->pc = 0x27ca30u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_27ca34:
    // 0x27ca34: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x27ca34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_27ca38:
    // 0x27ca38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27ca38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27ca3c:
    // 0x27ca3c: 0x0  nop
    ctx->pc = 0x27ca3cu;
    // NOP
label_27ca40:
    // 0x27ca40: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x27ca40u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_27ca44:
    // 0x27ca44: 0x3c044f00  lui         $a0, 0x4F00
    ctx->pc = 0x27ca44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20224 << 16));
label_27ca48:
    // 0x27ca48: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x27ca48u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27ca4c:
    // 0x27ca4c: 0x0  nop
    ctx->pc = 0x27ca4cu;
    // NOP
label_27ca50:
    // 0x27ca50: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x27ca50u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27ca54:
    // 0x27ca54: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_27ca58:
    if (ctx->pc == 0x27CA58u) {
        ctx->pc = 0x27CA5Cu;
        goto label_27ca5c;
    }
    ctx->pc = 0x27CA54u;
    {
        const bool branch_taken_0x27ca54 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27ca54) {
            ctx->pc = 0x27CA6Cu;
            goto label_27ca6c;
        }
    }
    ctx->pc = 0x27CA5Cu;
label_27ca5c:
    // 0x27ca5c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x27ca5cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_27ca60:
    // 0x27ca60: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x27ca60u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_27ca64:
    // 0x27ca64: 0x10000006  b           . + 4 + (0x6 << 2)
label_27ca68:
    if (ctx->pc == 0x27CA68u) {
        ctx->pc = 0x27CA6Cu;
        goto label_27ca6c;
    }
    ctx->pc = 0x27CA64u;
    {
        const bool branch_taken_0x27ca64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27ca64) {
            ctx->pc = 0x27CA80u;
            goto label_27ca80;
        }
    }
    ctx->pc = 0x27CA6Cu;
label_27ca6c:
    // 0x27ca6c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x27ca6cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_27ca70:
    // 0x27ca70: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x27ca70u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_27ca74:
    // 0x27ca74: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x27ca74u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_27ca78:
    // 0x27ca78: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x27ca78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_27ca7c:
    // 0x27ca7c: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x27ca7cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_27ca80:
    // 0x27ca80: 0xa3a5025d  sb          $a1, 0x25D($sp)
    ctx->pc = 0x27ca80u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 605), (uint8_t)GPR_U32(ctx, 5));
label_27ca84:
    // 0x27ca84: 0x93a2025d  lbu         $v0, 0x25D($sp)
    ctx->pc = 0x27ca84u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 605)));
label_27ca88:
    // 0x27ca88: 0x305300ff  andi        $s3, $v0, 0xFF
    ctx->pc = 0x27ca88u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_27ca8c:
    // 0x27ca8c: 0xc7a10220  lwc1        $f1, 0x220($sp)
    ctx->pc = 0x27ca8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27ca90:
    // 0x27ca90: 0x3c0542c8  lui         $a1, 0x42C8
    ctx->pc = 0x27ca90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17096 << 16));
label_27ca94:
    // 0x27ca94: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x27ca94u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27ca98:
    // 0x27ca98: 0x0  nop
    ctx->pc = 0x27ca98u;
    // NOP
label_27ca9c:
    // 0x27ca9c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x27ca9cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27caa0:
    // 0x27caa0: 0x4500002a  bc1f        . + 4 + (0x2A << 2)
label_27caa4:
    if (ctx->pc == 0x27CAA4u) {
        ctx->pc = 0x27CAA8u;
        goto label_27caa8;
    }
    ctx->pc = 0x27CAA0u;
    {
        const bool branch_taken_0x27caa0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27caa0) {
            ctx->pc = 0x27CB4Cu;
            goto label_27cb4c;
        }
    }
    ctx->pc = 0x27CAA8u;
label_27caa8:
    // 0x27caa8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x27caa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_27caac:
    // 0x27caac: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x27caacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_27cab0:
    // 0x27cab0: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x27cab0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_27cab4:
    // 0x27cab4: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_27cab8:
    if (ctx->pc == 0x27CAB8u) {
        ctx->pc = 0x27CABCu;
        goto label_27cabc;
    }
    ctx->pc = 0x27CAB4u;
    {
        const bool branch_taken_0x27cab4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27cab4) {
            ctx->pc = 0x27CB0Cu;
            goto label_27cb0c;
        }
    }
    ctx->pc = 0x27CABCu;
label_27cabc:
    // 0x27cabc: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x27cabcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_27cac0:
    // 0x27cac0: 0x10020008  beq         $zero, $v0, . + 4 + (0x8 << 2)
label_27cac4:
    if (ctx->pc == 0x27CAC4u) {
        ctx->pc = 0x27CAC8u;
        goto label_27cac8;
    }
    ctx->pc = 0x27CAC0u;
    {
        const bool branch_taken_0x27cac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x27cac0) {
            ctx->pc = 0x27CAE4u;
            goto label_27cae4;
        }
    }
    ctx->pc = 0x27CAC8u;
label_27cac8:
    // 0x27cac8: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x27cac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_27cacc:
    // 0x27cacc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x27caccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_27cad0:
    // 0x27cad0: 0x7fa300c0  sq          $v1, 0xC0($sp)
    ctx->pc = 0x27cad0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 3));
label_27cad4:
    // 0x27cad4: 0x3c040800  lui         $a0, 0x800
    ctx->pc = 0x27cad4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2048 << 16));
label_27cad8:
    // 0x27cad8: 0x7ba300c0  lq          $v1, 0xC0($sp)
    ctx->pc = 0x27cad8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_27cadc:
    // 0x27cadc: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x27cadcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_27cae0:
    // 0x27cae0: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x27cae0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
label_27cae4:
    // 0x27cae4: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x27cae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_27cae8:
    // 0x27cae8: 0x10020018  beq         $zero, $v0, . + 4 + (0x18 << 2)
label_27caec:
    if (ctx->pc == 0x27CAECu) {
        ctx->pc = 0x27CAF0u;
        goto label_27caf0;
    }
    ctx->pc = 0x27CAE8u;
    {
        const bool branch_taken_0x27cae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x27cae8) {
            ctx->pc = 0x27CB4Cu;
            goto label_27cb4c;
        }
    }
    ctx->pc = 0x27CAF0u;
label_27caf0:
    // 0x27caf0: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x27caf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_27caf4:
    // 0x27caf4: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x27caf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_27caf8:
    // 0x27caf8: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x27caf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
label_27cafc:
    // 0x27cafc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x27cafcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_27cb00:
    // 0x27cb00: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x27cb00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_27cb04:
    // 0x27cb04: 0x10000011  b           . + 4 + (0x11 << 2)
label_27cb08:
    if (ctx->pc == 0x27CB08u) {
        ctx->pc = 0x27CB0Cu;
        goto label_27cb0c;
    }
    ctx->pc = 0x27CB04u;
    {
        const bool branch_taken_0x27cb04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27cb04) {
            ctx->pc = 0x27CB4Cu;
            goto label_27cb4c;
        }
    }
    ctx->pc = 0x27CB0Cu;
label_27cb0c:
    // 0x27cb0c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x27cb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_27cb10:
    // 0x27cb10: 0x10020006  beq         $zero, $v0, . + 4 + (0x6 << 2)
label_27cb14:
    if (ctx->pc == 0x27CB14u) {
        ctx->pc = 0x27CB18u;
        goto label_27cb18;
    }
    ctx->pc = 0x27CB10u;
    {
        const bool branch_taken_0x27cb10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x27cb10) {
            ctx->pc = 0x27CB2Cu;
            goto label_27cb2c;
        }
    }
    ctx->pc = 0x27CB18u;
label_27cb18:
    // 0x27cb18: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x27cb18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_27cb1c:
    // 0x27cb1c: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x27cb1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_27cb20:
    // 0x27cb20: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x27cb20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
label_27cb24:
    // 0x27cb24: 0x622025  or          $a0, $v1, $v0
    ctx->pc = 0x27cb24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_27cb28:
    // 0x27cb28: 0xaca40004  sw          $a0, 0x4($a1)
    ctx->pc = 0x27cb28u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
label_27cb2c:
    // 0x27cb2c: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x27cb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_27cb30:
    // 0x27cb30: 0x10020006  beq         $zero, $v0, . + 4 + (0x6 << 2)
label_27cb34:
    if (ctx->pc == 0x27CB34u) {
        ctx->pc = 0x27CB38u;
        goto label_27cb38;
    }
    ctx->pc = 0x27CB30u;
    {
        const bool branch_taken_0x27cb30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x27cb30) {
            ctx->pc = 0x27CB4Cu;
            goto label_27cb4c;
        }
    }
    ctx->pc = 0x27CB38u;
label_27cb38:
    // 0x27cb38: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x27cb38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_27cb3c:
    // 0x27cb3c: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x27cb3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_27cb40:
    // 0x27cb40: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x27cb40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
label_27cb44:
    // 0x27cb44: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x27cb44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_27cb48:
    // 0x27cb48: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x27cb48u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_27cb4c:
    // 0x27cb4c: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x27cb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_27cb50:
    // 0x27cb50: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_27cb54:
    if (ctx->pc == 0x27CB54u) {
        ctx->pc = 0x27CB58u;
        goto label_27cb58;
    }
    ctx->pc = 0x27CB50u;
    {
        const bool branch_taken_0x27cb50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27cb50) {
            ctx->pc = 0x27CB7Cu;
            goto label_27cb7c;
        }
    }
    ctx->pc = 0x27CB58u;
label_27cb58:
    // 0x27cb58: 0x326200ff  andi        $v0, $s3, 0xFF
    ctx->pc = 0x27cb58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
label_27cb5c:
    // 0x27cb5c: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x27cb5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_27cb60:
    // 0x27cb60: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x27cb60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_27cb64:
    // 0x27cb64: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x27cb64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_27cb68:
    // 0x27cb68: 0x24428920  addiu       $v0, $v0, -0x76E0
    ctx->pc = 0x27cb68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936864));
label_27cb6c:
    // 0x27cb6c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x27cb6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27cb70:
    // 0x27cb70: 0x7ba600b0  lq          $a2, 0xB0($sp)
    ctx->pc = 0x27cb70u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_27cb74:
    // 0x27cb74: 0xc0e2628  jal         func_3898A0
label_27cb78:
    if (ctx->pc == 0x27CB78u) {
        ctx->pc = 0x27CB7Cu;
        goto label_27cb7c;
    }
    ctx->pc = 0x27CB74u;
    SET_GPR_U32(ctx, 31, 0x27CB7Cu);
    ctx->pc = 0x3898A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3898A0u, 0x27CB74u, 0x27CB7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CB7Cu;
label_27cb7c:
    // 0x27cb7c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x27cb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_27cb80:
    // 0x27cb80: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_27cb84:
    if (ctx->pc == 0x27CB84u) {
        ctx->pc = 0x27CB88u;
        goto label_27cb88;
    }
    ctx->pc = 0x27CB80u;
    {
        const bool branch_taken_0x27cb80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27cb80) {
            ctx->pc = 0x27CBA4u;
            goto label_27cba4;
        }
    }
    ctx->pc = 0x27CB88u;
label_27cb88:
    // 0x27cb88: 0x326600ff  andi        $a2, $s3, 0xFF
    ctx->pc = 0x27cb88u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
label_27cb8c:
    // 0x27cb8c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x27cb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_27cb90:
    // 0x27cb90: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x27cb90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27cb94:
    // 0x27cb94: 0x3c050028  lui         $a1, 0x28
    ctx->pc = 0x27cb94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)40 << 16));
label_27cb98:
    // 0x27cb98: 0x24a58920  addiu       $a1, $a1, -0x76E0
    ctx->pc = 0x27cb98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936864));
label_27cb9c:
    // 0x27cb9c: 0xc0e2628  jal         func_3898A0
label_27cba0:
    if (ctx->pc == 0x27CBA0u) {
        ctx->pc = 0x27CBA4u;
        goto label_27cba4;
    }
    ctx->pc = 0x27CB9Cu;
    SET_GPR_U32(ctx, 31, 0x27CBA4u);
    ctx->pc = 0x3898A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3898A0u, 0x27CB9Cu, 0x27CBA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CBA4u;
label_27cba4:
    // 0x27cba4: 0x27a40228  addiu       $a0, $sp, 0x228
    ctx->pc = 0x27cba4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 552));
label_27cba8:
    // 0x27cba8: 0xc054278  jal         func_1509E0
label_27cbac:
    if (ctx->pc == 0x27CBACu) {
        ctx->pc = 0x27CBB0u;
        goto label_27cbb0;
    }
    ctx->pc = 0x27CBA8u;
    SET_GPR_U32(ctx, 31, 0x27CBB0u);
    ctx->pc = 0x1509E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1509E0u, 0x27CBA8u, 0x27CBB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CBB0u;
label_27cbb0:
    // 0x27cbb0: 0x27a40230  addiu       $a0, $sp, 0x230
    ctx->pc = 0x27cbb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
label_27cbb4:
    // 0x27cbb4: 0xc064054  jal         func_190150
label_27cbb8:
    if (ctx->pc == 0x27CBB8u) {
        ctx->pc = 0x27CBBCu;
        goto label_27cbbc;
    }
    ctx->pc = 0x27CBB4u;
    SET_GPR_U32(ctx, 31, 0x27CBBCu);
    ctx->pc = 0x190150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190150u, 0x27CBB4u, 0x27CBBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CBBCu;
label_27cbbc:
    // 0x27cbbc: 0xafa201c0  sw          $v0, 0x1C0($sp)
    ctx->pc = 0x27cbbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 448), GPR_U32(ctx, 2));
label_27cbc0:
    // 0x27cbc0: 0x8fa301c0  lw          $v1, 0x1C0($sp)
    ctx->pc = 0x27cbc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
label_27cbc4:
    // 0x27cbc4: 0x27a401cc  addiu       $a0, $sp, 0x1CC
    ctx->pc = 0x27cbc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 460));
label_27cbc8:
    // 0x27cbc8: 0x8fa5022c  lw          $a1, 0x22C($sp)
    ctx->pc = 0x27cbc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 556)));
label_27cbcc:
    // 0x27cbcc: 0xc054288  jal         func_150A20
label_27cbd0:
    if (ctx->pc == 0x27CBD0u) {
        ctx->pc = 0x27CBD4u;
        goto label_27cbd4;
    }
    ctx->pc = 0x27CBCCu;
    SET_GPR_U32(ctx, 31, 0x27CBD4u);
    ctx->pc = 0x150A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150A20u, 0x27CBCCu, 0x27CBD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CBD4u;
label_27cbd4:
    // 0x27cbd4: 0x27a20228  addiu       $v0, $sp, 0x228
    ctx->pc = 0x27cbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 552));
label_27cbd8:
    // 0x27cbd8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x27cbd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27cbdc:
    // 0x27cbdc: 0x27a501cc  addiu       $a1, $sp, 0x1CC
    ctx->pc = 0x27cbdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 460));
label_27cbe0:
    // 0x27cbe0: 0xc041998  jal         func_106660
label_27cbe4:
    if (ctx->pc == 0x27CBE4u) {
        ctx->pc = 0x27CBE8u;
        goto label_27cbe8;
    }
    ctx->pc = 0x27CBE0u;
    SET_GPR_U32(ctx, 31, 0x27CBE8u);
    ctx->pc = 0x106660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106660u, 0x27CBE0u, 0x27CBE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CBE8u;
label_27cbe8:
    // 0x27cbe8: 0x1440fe03  bnez        $v0, . + 4 + (-0x1FD << 2)
label_27cbec:
    if (ctx->pc == 0x27CBECu) {
        ctx->pc = 0x27CBF0u;
        goto label_27cbf0;
    }
    ctx->pc = 0x27CBE8u;
    {
        const bool branch_taken_0x27cbe8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27cbe8) {
            ctx->pc = 0x27C3F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27c3f8;
        }
    }
    ctx->pc = 0x27CBF0u;
label_27cbf0:
    // 0x27cbf0: 0x26fe0004  addiu       $fp, $s7, 0x4
    ctx->pc = 0x27cbf0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 23), 4));
label_27cbf4:
    // 0x27cbf4: 0x3c0b82d  daddu       $s7, $fp, $zero
    ctx->pc = 0x27cbf4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_27cbf8:
    // 0x27cbf8: 0x8fa40244  lw          $a0, 0x244($sp)
    ctx->pc = 0x27cbf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 580)));
label_27cbfc:
    // 0x27cbfc: 0xc04147c  jal         func_1051F0
label_27cc00:
    if (ctx->pc == 0x27CC00u) {
        ctx->pc = 0x27CC04u;
        goto label_27cc04;
    }
    ctx->pc = 0x27CBFCu;
    SET_GPR_U32(ctx, 31, 0x27CC04u);
    ctx->pc = 0x1051F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051F0u, 0x27CBFCu, 0x27CC04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CC04u;
label_27cc04:
    // 0x27cc04: 0x16e2fdc2  bne         $s7, $v0, . + 4 + (-0x23E << 2)
label_27cc08:
    if (ctx->pc == 0x27CC08u) {
        ctx->pc = 0x27CC0Cu;
        goto label_27cc0c;
    }
    ctx->pc = 0x27CC04u;
    {
        const bool branch_taken_0x27cc04 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 2));
        if (branch_taken_0x27cc04) {
            ctx->pc = 0x27C310u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27c310;
        }
    }
    ctx->pc = 0x27CC0Cu;
label_27cc0c:
    // 0x27cc0c: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x27cc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
label_27cc10:
    // 0x27cc10: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x27cc10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_27cc14:
    // 0x27cc14: 0x10400173  beqz        $v0, . + 4 + (0x173 << 2)
label_27cc18:
    if (ctx->pc == 0x27CC18u) {
        ctx->pc = 0x27CC1Cu;
        goto label_27cc1c;
    }
    ctx->pc = 0x27CC14u;
    {
        const bool branch_taken_0x27cc14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27cc14) {
            ctx->pc = 0x27D1E4u;
            goto label_27d1e4;
        }
    }
    ctx->pc = 0x27CC1Cu;
label_27cc1c:
    // 0x27cc1c: 0xc090864  jal         func_242190
label_27cc20:
    if (ctx->pc == 0x27CC20u) {
        ctx->pc = 0x27CC24u;
        goto label_27cc24;
    }
    ctx->pc = 0x27CC1Cu;
    SET_GPR_U32(ctx, 31, 0x27CC24u);
    ctx->pc = 0x242190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242190u, 0x27CC1Cu, 0x27CC24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CC24u;
label_27cc24:
    // 0x27cc24: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x27cc24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
label_27cc28:
    // 0x27cc28: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x27cc28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
label_27cc2c:
    // 0x27cc2c: 0x7ba400a0  lq          $a0, 0xA0($sp)
    ctx->pc = 0x27cc2cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_27cc30:
    // 0x27cc30: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x27cc30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_27cc34:
    // 0x27cc34: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x27cc34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27cc38:
    // 0x27cc38: 0xc090870  jal         func_2421C0
label_27cc3c:
    if (ctx->pc == 0x27CC3Cu) {
        ctx->pc = 0x27CC40u;
        goto label_27cc40;
    }
    ctx->pc = 0x27CC38u;
    SET_GPR_U32(ctx, 31, 0x27CC40u);
    ctx->pc = 0x2421C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2421C0u, 0x27CC38u, 0x27CC40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CC40u;
label_27cc40:
    // 0x27cc40: 0xafa2021c  sw          $v0, 0x21C($sp)
    ctx->pc = 0x27cc40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 540), GPR_U32(ctx, 2));
label_27cc44:
    // 0x27cc44: 0x8fa2021c  lw          $v0, 0x21C($sp)
    ctx->pc = 0x27cc44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 540)));
label_27cc48:
    // 0x27cc48: 0x10400166  beqz        $v0, . + 4 + (0x166 << 2)
label_27cc4c:
    if (ctx->pc == 0x27CC4Cu) {
        ctx->pc = 0x27CC50u;
        goto label_27cc50;
    }
    ctx->pc = 0x27CC48u;
    {
        const bool branch_taken_0x27cc48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27cc48) {
            ctx->pc = 0x27D1E4u;
            goto label_27d1e4;
        }
    }
    ctx->pc = 0x27CC50u;
label_27cc50:
    // 0x27cc50: 0x8fa4021c  lw          $a0, 0x21C($sp)
    ctx->pc = 0x27cc50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 540)));
label_27cc54:
    // 0x27cc54: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x27cc54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
label_27cc58:
    // 0x27cc58: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x27cc58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27cc5c:
    // 0x27cc5c: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x27cc5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_27cc60:
    // 0x27cc60: 0xc085538  jal         func_2154E0
label_27cc64:
    if (ctx->pc == 0x27CC64u) {
        ctx->pc = 0x27CC68u;
        goto label_27cc68;
    }
    ctx->pc = 0x27CC60u;
    SET_GPR_U32(ctx, 31, 0x27CC68u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x27CC60u, 0x27CC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CC68u;
label_27cc68:
    // 0x27cc68: 0xafa20218  sw          $v0, 0x218($sp)
    ctx->pc = 0x27cc68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 536), GPR_U32(ctx, 2));
label_27cc6c:
    // 0x27cc6c: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x27cc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
label_27cc70:
    // 0x27cc70: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x27cc70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_27cc74:
    // 0x27cc74: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x27cc74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_27cc78:
    // 0x27cc78: 0xc085538  jal         func_2154E0
label_27cc7c:
    if (ctx->pc == 0x27CC7Cu) {
        ctx->pc = 0x27CC80u;
        goto label_27cc80;
    }
    ctx->pc = 0x27CC78u;
    SET_GPR_U32(ctx, 31, 0x27CC80u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x27CC78u, 0x27CC80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CC80u;
label_27cc80:
    // 0x27cc80: 0xafa20214  sw          $v0, 0x214($sp)
    ctx->pc = 0x27cc80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 532), GPR_U32(ctx, 2));
label_27cc84:
    // 0x27cc84: 0x27a40118  addiu       $a0, $sp, 0x118
    ctx->pc = 0x27cc84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
label_27cc88:
    // 0x27cc88: 0x8fa50218  lw          $a1, 0x218($sp)
    ctx->pc = 0x27cc88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
label_27cc8c:
    // 0x27cc8c: 0xc090f80  jal         func_243E00
label_27cc90:
    if (ctx->pc == 0x27CC90u) {
        ctx->pc = 0x27CC94u;
        goto label_27cc94;
    }
    ctx->pc = 0x27CC8Cu;
    SET_GPR_U32(ctx, 31, 0x27CC94u);
    ctx->pc = 0x243E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E00u, 0x27CC8Cu, 0x27CC94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CC94u;
label_27cc94:
    // 0x27cc94: 0x27a20118  addiu       $v0, $sp, 0x118
    ctx->pc = 0x27cc94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
label_27cc98:
    // 0x27cc98: 0x27a30150  addiu       $v1, $sp, 0x150
    ctx->pc = 0x27cc98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_27cc9c:
    // 0x27cc9c: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x27cc9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_27cca0:
    // 0x27cca0: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x27cca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27cca4:
    // 0x27cca4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x27cca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27cca8:
    // 0x27cca8: 0xe4620000  swc1        $f2, 0x0($v1)
    ctx->pc = 0x27cca8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_27ccac:
    // 0x27ccac: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x27ccacu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_27ccb0:
    // 0x27ccb0: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x27ccb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_27ccb4:
    // 0x27ccb4: 0x27a40108  addiu       $a0, $sp, 0x108
    ctx->pc = 0x27ccb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
label_27ccb8:
    // 0x27ccb8: 0x8fa50214  lw          $a1, 0x214($sp)
    ctx->pc = 0x27ccb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 532)));
label_27ccbc:
    // 0x27ccbc: 0xc090f80  jal         func_243E00
label_27ccc0:
    if (ctx->pc == 0x27CCC0u) {
        ctx->pc = 0x27CCC4u;
        goto label_27ccc4;
    }
    ctx->pc = 0x27CCBCu;
    SET_GPR_U32(ctx, 31, 0x27CCC4u);
    ctx->pc = 0x243E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E00u, 0x27CCBCu, 0x27CCC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CCC4u;
label_27ccc4:
    // 0x27ccc4: 0x27a50108  addiu       $a1, $sp, 0x108
    ctx->pc = 0x27ccc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
label_27ccc8:
    // 0x27ccc8: 0x27a20140  addiu       $v0, $sp, 0x140
    ctx->pc = 0x27ccc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_27cccc:
    // 0x27cccc: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x27ccccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_27ccd0:
    // 0x27ccd0: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x27ccd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27ccd4:
    // 0x27ccd4: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x27ccd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27ccd8:
    // 0x27ccd8: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x27ccd8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_27ccdc:
    // 0x27ccdc: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x27ccdcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_27cce0:
    // 0x27cce0: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x27cce0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_27cce4:
    // 0x27cce4: 0xc7a10140  lwc1        $f1, 0x140($sp)
    ctx->pc = 0x27cce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27cce8:
    // 0x27cce8: 0xc7a00150  lwc1        $f0, 0x150($sp)
    ctx->pc = 0x27cce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27ccec:
    // 0x27ccec: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x27ccecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_27ccf0:
    // 0x27ccf0: 0xe7a00140  swc1        $f0, 0x140($sp)
    ctx->pc = 0x27ccf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_27ccf4:
    // 0x27ccf4: 0xc7a10144  lwc1        $f1, 0x144($sp)
    ctx->pc = 0x27ccf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27ccf8:
    // 0x27ccf8: 0xc7a00154  lwc1        $f0, 0x154($sp)
    ctx->pc = 0x27ccf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27ccfc:
    // 0x27ccfc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x27ccfcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_27cd00:
    // 0x27cd00: 0xe7a00144  swc1        $f0, 0x144($sp)
    ctx->pc = 0x27cd00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
label_27cd04:
    // 0x27cd04: 0xc7a10148  lwc1        $f1, 0x148($sp)
    ctx->pc = 0x27cd04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27cd08:
    // 0x27cd08: 0xc7a00158  lwc1        $f0, 0x158($sp)
    ctx->pc = 0x27cd08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27cd0c:
    // 0x27cd0c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x27cd0cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_27cd10:
    // 0x27cd10: 0xe7a00148  swc1        $f0, 0x148($sp)
    ctx->pc = 0x27cd10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
label_27cd14:
    // 0x27cd14: 0x8fa4021c  lw          $a0, 0x21C($sp)
    ctx->pc = 0x27cd14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 540)));
label_27cd18:
    // 0x27cd18: 0xc092d70  jal         func_24B5C0
label_27cd1c:
    if (ctx->pc == 0x27CD1Cu) {
        ctx->pc = 0x27CD20u;
        goto label_27cd20;
    }
    ctx->pc = 0x27CD18u;
    SET_GPR_U32(ctx, 31, 0x27CD20u);
    ctx->pc = 0x24B5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B5C0u, 0x27CD18u, 0x27CD20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CD20u;
label_27cd20:
    // 0x27cd20: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x27cd20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27cd24:
    // 0x27cd24: 0xafa40210  sw          $a0, 0x210($sp)
    ctx->pc = 0x27cd24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 528), GPR_U32(ctx, 4));
label_27cd28:
    // 0x27cd28: 0x3c0542a0  lui         $a1, 0x42A0
    ctx->pc = 0x27cd28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17056 << 16));
label_27cd2c:
    // 0x27cd2c: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x27cd2cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_27cd30:
    // 0x27cd30: 0xc7a00140  lwc1        $f0, 0x140($sp)
    ctx->pc = 0x27cd30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27cd34:
    // 0x27cd34: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x27cd34u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_27cd38:
    // 0x27cd38: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x27cd38u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_27cd3c:
    // 0x27cd3c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x27cd3cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_27cd40:
    // 0x27cd40: 0x0  nop
    ctx->pc = 0x27cd40u;
    // NOP
label_27cd44:
    // 0x27cd44: 0xafa2020c  sw          $v0, 0x20C($sp)
    ctx->pc = 0x27cd44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 524), GPR_U32(ctx, 2));
label_27cd48:
    // 0x27cd48: 0x3c0442a0  lui         $a0, 0x42A0
    ctx->pc = 0x27cd48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17056 << 16));
label_27cd4c:
    // 0x27cd4c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x27cd4cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_27cd50:
    // 0x27cd50: 0xc7a00148  lwc1        $f0, 0x148($sp)
    ctx->pc = 0x27cd50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27cd54:
    // 0x27cd54: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x27cd54u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_27cd58:
    // 0x27cd58: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x27cd58u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_27cd5c:
    // 0x27cd5c: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x27cd5cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_27cd60:
    // 0x27cd60: 0x0  nop
    ctx->pc = 0x27cd60u;
    // NOP
label_27cd64:
    // 0x27cd64: 0xafa50208  sw          $a1, 0x208($sp)
    ctx->pc = 0x27cd64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 520), GPR_U32(ctx, 5));
label_27cd68:
    // 0x27cd68: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x27cd68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_27cd6c:
    // 0x27cd6c: 0xafa20204  sw          $v0, 0x204($sp)
    ctx->pc = 0x27cd6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 516), GPR_U32(ctx, 2));
label_27cd70:
    // 0x27cd70: 0x10000035  b           . + 4 + (0x35 << 2)
label_27cd74:
    if (ctx->pc == 0x27CD74u) {
        ctx->pc = 0x27CD78u;
        goto label_27cd78;
    }
    ctx->pc = 0x27CD70u;
    {
        const bool branch_taken_0x27cd70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27cd70) {
            ctx->pc = 0x27CE48u;
            goto label_27ce48;
        }
    }
    ctx->pc = 0x27CD78u;
label_27cd78:
    // 0x27cd78: 0x2404fffe  addiu       $a0, $zero, -0x2
    ctx->pc = 0x27cd78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_27cd7c:
    // 0x27cd7c: 0xafa40200  sw          $a0, 0x200($sp)
    ctx->pc = 0x27cd7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 512), GPR_U32(ctx, 4));
label_27cd80:
    // 0x27cd80: 0x1000002a  b           . + 4 + (0x2A << 2)
label_27cd84:
    if (ctx->pc == 0x27CD84u) {
        ctx->pc = 0x27CD88u;
        goto label_27cd88;
    }
    ctx->pc = 0x27CD80u;
    {
        const bool branch_taken_0x27cd80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27cd80) {
            ctx->pc = 0x27CE2Cu;
            goto label_27ce2c;
        }
    }
    ctx->pc = 0x27CD88u;
label_27cd88:
    // 0x27cd88: 0x8fa2020c  lw          $v0, 0x20C($sp)
    ctx->pc = 0x27cd88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 524)));
label_27cd8c:
    // 0x27cd8c: 0x8fa40200  lw          $a0, 0x200($sp)
    ctx->pc = 0x27cd8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
label_27cd90:
    // 0x27cd90: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x27cd90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_27cd94:
    // 0x27cd94: 0x8fa40208  lw          $a0, 0x208($sp)
    ctx->pc = 0x27cd94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
label_27cd98:
    // 0x27cd98: 0x8fa50204  lw          $a1, 0x204($sp)
    ctx->pc = 0x27cd98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 516)));
label_27cd9c:
    // 0x27cd9c: 0x853021  addu        $a2, $a0, $a1
    ctx->pc = 0x27cd9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_27cda0:
    // 0x27cda0: 0x8fa40210  lw          $a0, 0x210($sp)
    ctx->pc = 0x27cda0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
label_27cda4:
    // 0x27cda4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x27cda4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27cda8:
    // 0x27cda8: 0xc04d328  jal         func_134CA0
label_27cdac:
    if (ctx->pc == 0x27CDACu) {
        ctx->pc = 0x27CDB0u;
        goto label_27cdb0;
    }
    ctx->pc = 0x27CDA8u;
    SET_GPR_U32(ctx, 31, 0x27CDB0u);
    ctx->pc = 0x134CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134CA0u, 0x27CDA8u, 0x27CDB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CDB0u;
label_27cdb0:
    // 0x27cdb0: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x27cdb0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27cdb4:
    // 0x27cdb4: 0x1015001a  beq         $zero, $s5, . + 4 + (0x1A << 2)
label_27cdb8:
    if (ctx->pc == 0x27CDB8u) {
        ctx->pc = 0x27CDBCu;
        goto label_27cdbc;
    }
    ctx->pc = 0x27CDB4u;
    {
        const bool branch_taken_0x27cdb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 21));
        if (branch_taken_0x27cdb4) {
            ctx->pc = 0x27CE20u;
            goto label_27ce20;
        }
    }
    ctx->pc = 0x27CDBCu;
label_27cdbc:
    // 0x27cdbc: 0x8ea20018  lw          $v0, 0x18($s5)
    ctx->pc = 0x27cdbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
label_27cdc0:
    // 0x27cdc0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_27cdc4:
    if (ctx->pc == 0x27CDC4u) {
        ctx->pc = 0x27CDC8u;
        goto label_27cdc8;
    }
    ctx->pc = 0x27CDC0u;
    {
        const bool branch_taken_0x27cdc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27cdc0) {
            ctx->pc = 0x27CDDCu;
            goto label_27cddc;
        }
    }
    ctx->pc = 0x27CDC8u;
label_27cdc8:
    // 0x27cdc8: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x27cdc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_27cdcc:
    // 0x27cdcc: 0x26250074  addiu       $a1, $s1, 0x74
    ctx->pc = 0x27cdccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 116));
label_27cdd0:
    // 0x27cdd0: 0x26a60018  addiu       $a2, $s5, 0x18
    ctx->pc = 0x27cdd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 24));
label_27cdd4:
    // 0x27cdd4: 0xc064204  jal         func_190810
label_27cdd8:
    if (ctx->pc == 0x27CDD8u) {
        ctx->pc = 0x27CDDCu;
        goto label_27cddc;
    }
    ctx->pc = 0x27CDD4u;
    SET_GPR_U32(ctx, 31, 0x27CDDCu);
    ctx->pc = 0x190810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190810u, 0x27CDD4u, 0x27CDDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CDDCu;
label_27cddc:
    // 0x27cddc: 0x8ea20014  lw          $v0, 0x14($s5)
    ctx->pc = 0x27cddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
label_27cde0:
    // 0x27cde0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_27cde4:
    if (ctx->pc == 0x27CDE4u) {
        ctx->pc = 0x27CDE8u;
        goto label_27cde8;
    }
    ctx->pc = 0x27CDE0u;
    {
        const bool branch_taken_0x27cde0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27cde0) {
            ctx->pc = 0x27CDFCu;
            goto label_27cdfc;
        }
    }
    ctx->pc = 0x27CDE8u;
label_27cde8:
    // 0x27cde8: 0x27a400f8  addiu       $a0, $sp, 0xF8
    ctx->pc = 0x27cde8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
label_27cdec:
    // 0x27cdec: 0x26250074  addiu       $a1, $s1, 0x74
    ctx->pc = 0x27cdecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 116));
label_27cdf0:
    // 0x27cdf0: 0x26a60014  addiu       $a2, $s5, 0x14
    ctx->pc = 0x27cdf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 20));
label_27cdf4:
    // 0x27cdf4: 0xc064204  jal         func_190810
label_27cdf8:
    if (ctx->pc == 0x27CDF8u) {
        ctx->pc = 0x27CDFCu;
        goto label_27cdfc;
    }
    ctx->pc = 0x27CDF4u;
    SET_GPR_U32(ctx, 31, 0x27CDFCu);
    ctx->pc = 0x190810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190810u, 0x27CDF4u, 0x27CDFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CDFCu;
label_27cdfc:
    // 0x27cdfc: 0x8ea2001c  lw          $v0, 0x1C($s5)
    ctx->pc = 0x27cdfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
label_27ce00:
    // 0x27ce00: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_27ce04:
    if (ctx->pc == 0x27CE04u) {
        ctx->pc = 0x27CE08u;
        goto label_27ce08;
    }
    ctx->pc = 0x27CE00u;
    {
        const bool branch_taken_0x27ce00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27ce00) {
            ctx->pc = 0x27CE20u;
            goto label_27ce20;
        }
    }
    ctx->pc = 0x27CE08u;
label_27ce08:
    // 0x27ce08: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x27ce08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_27ce0c:
    // 0x27ce0c: 0x26250074  addiu       $a1, $s1, 0x74
    ctx->pc = 0x27ce0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 116));
label_27ce10:
    // 0x27ce10: 0x26a2001c  addiu       $v0, $s5, 0x1C
    ctx->pc = 0x27ce10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 28));
label_27ce14:
    // 0x27ce14: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x27ce14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27ce18:
    // 0x27ce18: 0xc064204  jal         func_190810
label_27ce1c:
    if (ctx->pc == 0x27CE1Cu) {
        ctx->pc = 0x27CE20u;
        goto label_27ce20;
    }
    ctx->pc = 0x27CE18u;
    SET_GPR_U32(ctx, 31, 0x27CE20u);
    ctx->pc = 0x190810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190810u, 0x27CE18u, 0x27CE20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CE20u;
label_27ce20:
    // 0x27ce20: 0x8fa40200  lw          $a0, 0x200($sp)
    ctx->pc = 0x27ce20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
label_27ce24:
    // 0x27ce24: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x27ce24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_27ce28:
    // 0x27ce28: 0xafa20200  sw          $v0, 0x200($sp)
    ctx->pc = 0x27ce28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 512), GPR_U32(ctx, 2));
label_27ce2c:
    // 0x27ce2c: 0x8fa40200  lw          $a0, 0x200($sp)
    ctx->pc = 0x27ce2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
label_27ce30:
    // 0x27ce30: 0x28810003  slti        $at, $a0, 0x3
    ctx->pc = 0x27ce30u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
label_27ce34:
    // 0x27ce34: 0x1420ffd4  bnez        $at, . + 4 + (-0x2C << 2)
label_27ce38:
    if (ctx->pc == 0x27CE38u) {
        ctx->pc = 0x27CE3Cu;
        goto label_27ce3c;
    }
    ctx->pc = 0x27CE34u;
    {
        const bool branch_taken_0x27ce34 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x27ce34) {
            ctx->pc = 0x27CD88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27cd88;
        }
    }
    ctx->pc = 0x27CE3Cu;
label_27ce3c:
    // 0x27ce3c: 0x8fa40204  lw          $a0, 0x204($sp)
    ctx->pc = 0x27ce3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 516)));
label_27ce40:
    // 0x27ce40: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x27ce40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_27ce44:
    // 0x27ce44: 0xafa20204  sw          $v0, 0x204($sp)
    ctx->pc = 0x27ce44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 516), GPR_U32(ctx, 2));
label_27ce48:
    // 0x27ce48: 0x8fa40204  lw          $a0, 0x204($sp)
    ctx->pc = 0x27ce48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 516)));
label_27ce4c:
    // 0x27ce4c: 0x28810003  slti        $at, $a0, 0x3
    ctx->pc = 0x27ce4cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
label_27ce50:
    // 0x27ce50: 0x1420ffc9  bnez        $at, . + 4 + (-0x37 << 2)
label_27ce54:
    if (ctx->pc == 0x27CE54u) {
        ctx->pc = 0x27CE58u;
        goto label_27ce58;
    }
    ctx->pc = 0x27CE50u;
    {
        const bool branch_taken_0x27ce50 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x27ce50) {
            ctx->pc = 0x27CD78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27cd78;
        }
    }
    ctx->pc = 0x27CE58u;
label_27ce58:
    // 0x27ce58: 0xc12242c  jal         func_4890B0
label_27ce5c:
    if (ctx->pc == 0x27CE5Cu) {
        ctx->pc = 0x27CE60u;
        goto label_27ce60;
    }
    ctx->pc = 0x27CE58u;
    SET_GPR_U32(ctx, 31, 0x27CE60u);
    ctx->pc = 0x4890B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4890B0u, 0x27CE58u, 0x27CE60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CE60u;
label_27ce60:
    // 0x27ce60: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x27ce60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27ce64:
    // 0x27ce64: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x27ce64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_27ce68:
    // 0x27ce68: 0x27a20140  addiu       $v0, $sp, 0x140
    ctx->pc = 0x27ce68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_27ce6c:
    // 0x27ce6c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x27ce6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27ce70:
    // 0x27ce70: 0x24650040  addiu       $a1, $v1, 0x40
    ctx->pc = 0x27ce70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
label_27ce74:
    // 0x27ce74: 0xc041d58  jal         func_107560
label_27ce78:
    if (ctx->pc == 0x27CE78u) {
        ctx->pc = 0x27CE7Cu;
        goto label_27ce7c;
    }
    ctx->pc = 0x27CE74u;
    SET_GPR_U32(ctx, 31, 0x27CE7Cu);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x27CE74u, 0x27CE7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CE7Cu;
label_27ce7c:
    // 0x27ce7c: 0xc7a10140  lwc1        $f1, 0x140($sp)
    ctx->pc = 0x27ce7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27ce80:
    // 0x27ce80: 0xc7a00150  lwc1        $f0, 0x150($sp)
    ctx->pc = 0x27ce80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27ce84:
    // 0x27ce84: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x27ce84u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_27ce88:
    // 0x27ce88: 0xe7a00140  swc1        $f0, 0x140($sp)
    ctx->pc = 0x27ce88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_27ce8c:
    // 0x27ce8c: 0xc7a10144  lwc1        $f1, 0x144($sp)
    ctx->pc = 0x27ce8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27ce90:
    // 0x27ce90: 0xc7a00154  lwc1        $f0, 0x154($sp)
    ctx->pc = 0x27ce90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27ce94:
    // 0x27ce94: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x27ce94u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_27ce98:
    // 0x27ce98: 0xe7a00144  swc1        $f0, 0x144($sp)
    ctx->pc = 0x27ce98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
label_27ce9c:
    // 0x27ce9c: 0xc7a10148  lwc1        $f1, 0x148($sp)
    ctx->pc = 0x27ce9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27cea0:
    // 0x27cea0: 0xc7a00158  lwc1        $f0, 0x158($sp)
    ctx->pc = 0x27cea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27cea4:
    // 0x27cea4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x27cea4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_27cea8:
    // 0x27cea8: 0xe7a00148  swc1        $f0, 0x148($sp)
    ctx->pc = 0x27cea8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
label_27ceac:
    // 0x27ceac: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x27ceacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
label_27ceb0:
    // 0x27ceb0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x27ceb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_27ceb4:
    // 0x27ceb4: 0xc7a00140  lwc1        $f0, 0x140($sp)
    ctx->pc = 0x27ceb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27ceb8:
    // 0x27ceb8: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x27ceb8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_27cebc:
    // 0x27cebc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x27cebcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_27cec0:
    // 0x27cec0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x27cec0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_27cec4:
    // 0x27cec4: 0x0  nop
    ctx->pc = 0x27cec4u;
    // NOP
label_27cec8:
    // 0x27cec8: 0xafa2020c  sw          $v0, 0x20C($sp)
    ctx->pc = 0x27cec8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 524), GPR_U32(ctx, 2));
label_27cecc:
    // 0x27cecc: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x27ceccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
label_27ced0:
    // 0x27ced0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x27ced0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_27ced4:
    // 0x27ced4: 0xc7a00148  lwc1        $f0, 0x148($sp)
    ctx->pc = 0x27ced4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27ced8:
    // 0x27ced8: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x27ced8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_27cedc:
    // 0x27cedc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x27cedcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_27cee0:
    // 0x27cee0: 0x44130000  mfc1        $s3, $f0
    ctx->pc = 0x27cee0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 19, bits); }
label_27cee4:
    // 0x27cee4: 0x0  nop
    ctx->pc = 0x27cee4u;
    // NOP
label_27cee8:
    // 0x27cee8: 0xafb30208  sw          $s3, 0x208($sp)
    ctx->pc = 0x27cee8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 520), GPR_U32(ctx, 19));
label_27ceec:
    // 0x27ceec: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x27ceecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_27cef0:
    // 0x27cef0: 0xafa201fc  sw          $v0, 0x1FC($sp)
    ctx->pc = 0x27cef0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 508), GPR_U32(ctx, 2));
label_27cef4:
    // 0x27cef4: 0x10000033  b           . + 4 + (0x33 << 2)
label_27cef8:
    if (ctx->pc == 0x27CEF8u) {
        ctx->pc = 0x27CEFCu;
        goto label_27cefc;
    }
    ctx->pc = 0x27CEF4u;
    {
        const bool branch_taken_0x27cef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27cef4) {
            ctx->pc = 0x27CFC4u;
            goto label_27cfc4;
        }
    }
    ctx->pc = 0x27CEFCu;
label_27cefc:
    // 0x27cefc: 0x2404fffe  addiu       $a0, $zero, -0x2
    ctx->pc = 0x27cefcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_27cf00:
    // 0x27cf00: 0xafa401f8  sw          $a0, 0x1F8($sp)
    ctx->pc = 0x27cf00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 504), GPR_U32(ctx, 4));
label_27cf04:
    // 0x27cf04: 0x10000028  b           . + 4 + (0x28 << 2)
label_27cf08:
    if (ctx->pc == 0x27CF08u) {
        ctx->pc = 0x27CF0Cu;
        goto label_27cf0c;
    }
    ctx->pc = 0x27CF04u;
    {
        const bool branch_taken_0x27cf04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27cf04) {
            ctx->pc = 0x27CFA8u;
            goto label_27cfa8;
        }
    }
    ctx->pc = 0x27CF0Cu;
label_27cf0c:
    // 0x27cf0c: 0x8fa2020c  lw          $v0, 0x20C($sp)
    ctx->pc = 0x27cf0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 524)));
label_27cf10:
    // 0x27cf10: 0x8fa301f8  lw          $v1, 0x1F8($sp)
    ctx->pc = 0x27cf10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
label_27cf14:
    // 0x27cf14: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x27cf14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_27cf18:
    // 0x27cf18: 0x8fa30208  lw          $v1, 0x208($sp)
    ctx->pc = 0x27cf18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
label_27cf1c:
    // 0x27cf1c: 0x8fa201fc  lw          $v0, 0x1FC($sp)
    ctx->pc = 0x27cf1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
label_27cf20:
    // 0x27cf20: 0x623021  addu        $a2, $v1, $v0
    ctx->pc = 0x27cf20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_27cf24:
    // 0x27cf24: 0x8fa40210  lw          $a0, 0x210($sp)
    ctx->pc = 0x27cf24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
label_27cf28:
    // 0x27cf28: 0xc04d328  jal         func_134CA0
label_27cf2c:
    if (ctx->pc == 0x27CF2Cu) {
        ctx->pc = 0x27CF30u;
        goto label_27cf30;
    }
    ctx->pc = 0x27CF28u;
    SET_GPR_U32(ctx, 31, 0x27CF30u);
    ctx->pc = 0x134CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134CA0u, 0x27CF28u, 0x27CF30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CF30u;
label_27cf30:
    // 0x27cf30: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x27cf30u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27cf34:
    // 0x27cf34: 0x10140019  beq         $zero, $s4, . + 4 + (0x19 << 2)
label_27cf38:
    if (ctx->pc == 0x27CF38u) {
        ctx->pc = 0x27CF3Cu;
        goto label_27cf3c;
    }
    ctx->pc = 0x27CF34u;
    {
        const bool branch_taken_0x27cf34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 20));
        if (branch_taken_0x27cf34) {
            ctx->pc = 0x27CF9Cu;
            goto label_27cf9c;
        }
    }
    ctx->pc = 0x27CF3Cu;
label_27cf3c:
    // 0x27cf3c: 0x8e820018  lw          $v0, 0x18($s4)
    ctx->pc = 0x27cf3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_27cf40:
    // 0x27cf40: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_27cf44:
    if (ctx->pc == 0x27CF44u) {
        ctx->pc = 0x27CF48u;
        goto label_27cf48;
    }
    ctx->pc = 0x27CF40u;
    {
        const bool branch_taken_0x27cf40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27cf40) {
            ctx->pc = 0x27CF5Cu;
            goto label_27cf5c;
        }
    }
    ctx->pc = 0x27CF48u;
label_27cf48:
    // 0x27cf48: 0x27a400e8  addiu       $a0, $sp, 0xE8
    ctx->pc = 0x27cf48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
label_27cf4c:
    // 0x27cf4c: 0x26250074  addiu       $a1, $s1, 0x74
    ctx->pc = 0x27cf4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 116));
label_27cf50:
    // 0x27cf50: 0x26860018  addiu       $a2, $s4, 0x18
    ctx->pc = 0x27cf50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 24));
label_27cf54:
    // 0x27cf54: 0xc064204  jal         func_190810
label_27cf58:
    if (ctx->pc == 0x27CF58u) {
        ctx->pc = 0x27CF5Cu;
        goto label_27cf5c;
    }
    ctx->pc = 0x27CF54u;
    SET_GPR_U32(ctx, 31, 0x27CF5Cu);
    ctx->pc = 0x190810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190810u, 0x27CF54u, 0x27CF5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CF5Cu;
label_27cf5c:
    // 0x27cf5c: 0x8e820014  lw          $v0, 0x14($s4)
    ctx->pc = 0x27cf5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_27cf60:
    // 0x27cf60: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_27cf64:
    if (ctx->pc == 0x27CF64u) {
        ctx->pc = 0x27CF68u;
        goto label_27cf68;
    }
    ctx->pc = 0x27CF60u;
    {
        const bool branch_taken_0x27cf60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27cf60) {
            ctx->pc = 0x27CF7Cu;
            goto label_27cf7c;
        }
    }
    ctx->pc = 0x27CF68u;
label_27cf68:
    // 0x27cf68: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x27cf68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_27cf6c:
    // 0x27cf6c: 0x26250074  addiu       $a1, $s1, 0x74
    ctx->pc = 0x27cf6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 116));
label_27cf70:
    // 0x27cf70: 0x26860014  addiu       $a2, $s4, 0x14
    ctx->pc = 0x27cf70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 20));
label_27cf74:
    // 0x27cf74: 0xc064204  jal         func_190810
label_27cf78:
    if (ctx->pc == 0x27CF78u) {
        ctx->pc = 0x27CF7Cu;
        goto label_27cf7c;
    }
    ctx->pc = 0x27CF74u;
    SET_GPR_U32(ctx, 31, 0x27CF7Cu);
    ctx->pc = 0x190810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190810u, 0x27CF74u, 0x27CF7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CF7Cu;
label_27cf7c:
    // 0x27cf7c: 0x8e82001c  lw          $v0, 0x1C($s4)
    ctx->pc = 0x27cf7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
label_27cf80:
    // 0x27cf80: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_27cf84:
    if (ctx->pc == 0x27CF84u) {
        ctx->pc = 0x27CF88u;
        goto label_27cf88;
    }
    ctx->pc = 0x27CF80u;
    {
        const bool branch_taken_0x27cf80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27cf80) {
            ctx->pc = 0x27CF9Cu;
            goto label_27cf9c;
        }
    }
    ctx->pc = 0x27CF88u;
label_27cf88:
    // 0x27cf88: 0x27a400d8  addiu       $a0, $sp, 0xD8
    ctx->pc = 0x27cf88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
label_27cf8c:
    // 0x27cf8c: 0x26250074  addiu       $a1, $s1, 0x74
    ctx->pc = 0x27cf8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 116));
label_27cf90:
    // 0x27cf90: 0x2686001c  addiu       $a2, $s4, 0x1C
    ctx->pc = 0x27cf90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 28));
label_27cf94:
    // 0x27cf94: 0xc064204  jal         func_190810
label_27cf98:
    if (ctx->pc == 0x27CF98u) {
        ctx->pc = 0x27CF9Cu;
        goto label_27cf9c;
    }
    ctx->pc = 0x27CF94u;
    SET_GPR_U32(ctx, 31, 0x27CF9Cu);
    ctx->pc = 0x190810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190810u, 0x27CF94u, 0x27CF9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CF9Cu;
label_27cf9c:
    // 0x27cf9c: 0x8fb601f8  lw          $s6, 0x1F8($sp)
    ctx->pc = 0x27cf9cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
label_27cfa0:
    // 0x27cfa0: 0x26c20001  addiu       $v0, $s6, 0x1
    ctx->pc = 0x27cfa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_27cfa4:
    // 0x27cfa4: 0xafa201f8  sw          $v0, 0x1F8($sp)
    ctx->pc = 0x27cfa4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 504), GPR_U32(ctx, 2));
label_27cfa8:
    // 0x27cfa8: 0x8fb601f8  lw          $s6, 0x1F8($sp)
    ctx->pc = 0x27cfa8u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
label_27cfac:
    // 0x27cfac: 0x2ac10003  slti        $at, $s6, 0x3
    ctx->pc = 0x27cfacu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)3) ? 1 : 0);
label_27cfb0:
    // 0x27cfb0: 0x1420ffd6  bnez        $at, . + 4 + (-0x2A << 2)
label_27cfb4:
    if (ctx->pc == 0x27CFB4u) {
        ctx->pc = 0x27CFB8u;
        goto label_27cfb8;
    }
    ctx->pc = 0x27CFB0u;
    {
        const bool branch_taken_0x27cfb0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x27cfb0) {
            ctx->pc = 0x27CF0Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27cf0c;
        }
    }
    ctx->pc = 0x27CFB8u;
label_27cfb8:
    // 0x27cfb8: 0x8fa201fc  lw          $v0, 0x1FC($sp)
    ctx->pc = 0x27cfb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
label_27cfbc:
    // 0x27cfbc: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x27cfbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_27cfc0:
    // 0x27cfc0: 0xafa501fc  sw          $a1, 0x1FC($sp)
    ctx->pc = 0x27cfc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 508), GPR_U32(ctx, 5));
label_27cfc4:
    // 0x27cfc4: 0x8fa301fc  lw          $v1, 0x1FC($sp)
    ctx->pc = 0x27cfc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
label_27cfc8:
    // 0x27cfc8: 0x28610003  slti        $at, $v1, 0x3
    ctx->pc = 0x27cfc8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_27cfcc:
    // 0x27cfcc: 0x1420ffcb  bnez        $at, . + 4 + (-0x35 << 2)
label_27cfd0:
    if (ctx->pc == 0x27CFD0u) {
        ctx->pc = 0x27CFD4u;
        goto label_27cfd4;
    }
    ctx->pc = 0x27CFCCu;
    {
        const bool branch_taken_0x27cfcc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x27cfcc) {
            ctx->pc = 0x27CEFCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27cefc;
        }
    }
    ctx->pc = 0x27CFD4u;
label_27cfd4:
    // 0x27cfd4: 0x26240074  addiu       $a0, $s1, 0x74
    ctx->pc = 0x27cfd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 116));
label_27cfd8:
    // 0x27cfd8: 0xc09f4d4  jal         func_27D350
label_27cfdc:
    if (ctx->pc == 0x27CFDCu) {
        ctx->pc = 0x27CFE0u;
        goto label_27cfe0;
    }
    ctx->pc = 0x27CFD8u;
    SET_GPR_U32(ctx, 31, 0x27CFE0u);
    ctx->pc = 0x27D350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27D350u, 0x27CFD8u, 0x27CFE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CFE0u;
label_27cfe0:
    // 0x27cfe0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_27cfe4:
    if (ctx->pc == 0x27CFE4u) {
        ctx->pc = 0x27CFE8u;
        goto label_27cfe8;
    }
    ctx->pc = 0x27CFE0u;
    {
        const bool branch_taken_0x27cfe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27cfe0) {
            ctx->pc = 0x27D010u;
            goto label_27d010;
        }
    }
    ctx->pc = 0x27CFE8u;
label_27cfe8:
    // 0x27cfe8: 0x26240074  addiu       $a0, $s1, 0x74
    ctx->pc = 0x27cfe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 116));
label_27cfec:
    // 0x27cfec: 0xc09f4d4  jal         func_27D350
label_27cff0:
    if (ctx->pc == 0x27CFF0u) {
        ctx->pc = 0x27CFF4u;
        goto label_27cff4;
    }
    ctx->pc = 0x27CFECu;
    SET_GPR_U32(ctx, 31, 0x27CFF4u);
    ctx->pc = 0x27D350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27D350u, 0x27CFECu, 0x27CFF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CFF4u;
label_27cff4:
    // 0x27cff4: 0x8e250080  lw          $a1, 0x80($s1)
    ctx->pc = 0x27cff4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_27cff8:
    // 0x27cff8: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x27cff8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_27cffc:
    // 0x27cffc: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x27cffcu;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
label_27d000:
    // 0x27d000: 0x1010  mfhi        $v0
    ctx->pc = 0x27d000u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_27d004:
    // 0x27d004: 0xae220080  sw          $v0, 0x80($s1)
    ctx->pc = 0x27d004u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 2));
label_27d008:
    // 0x27d008: 0x10000002  b           . + 4 + (0x2 << 2)
label_27d00c:
    if (ctx->pc == 0x27D00Cu) {
        ctx->pc = 0x27D010u;
        goto label_27d010;
    }
    ctx->pc = 0x27D008u;
    {
        const bool branch_taken_0x27d008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27d008) {
            ctx->pc = 0x27D014u;
            goto label_27d014;
        }
    }
    ctx->pc = 0x27D010u;
label_27d010:
    // 0x27d010: 0xae200080  sw          $zero, 0x80($s1)
    ctx->pc = 0x27d010u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 0));
label_27d014:
    // 0x27d014: 0x27a401f4  addiu       $a0, $sp, 0x1F4
    ctx->pc = 0x27d014u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 500));
label_27d018:
    // 0x27d018: 0xc06476c  jal         func_191DB0
label_27d01c:
    if (ctx->pc == 0x27D01Cu) {
        ctx->pc = 0x27D020u;
        goto label_27d020;
    }
    ctx->pc = 0x27D018u;
    SET_GPR_U32(ctx, 31, 0x27D020u);
    ctx->pc = 0x191DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191DB0u, 0x27D018u, 0x27D020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D020u;
label_27d020:
    // 0x27d020: 0x27a401f0  addiu       $a0, $sp, 0x1F0
    ctx->pc = 0x27d020u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_27d024:
    // 0x27d024: 0xc06476c  jal         func_191DB0
label_27d028:
    if (ctx->pc == 0x27D028u) {
        ctx->pc = 0x27D02Cu;
        goto label_27d02c;
    }
    ctx->pc = 0x27D024u;
    SET_GPR_U32(ctx, 31, 0x27D02Cu);
    ctx->pc = 0x191DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191DB0u, 0x27D024u, 0x27D02Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D02Cu;
label_27d02c:
    // 0x27d02c: 0xafa001ec  sw          $zero, 0x1EC($sp)
    ctx->pc = 0x27d02cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 492), GPR_U32(ctx, 0));
label_27d030:
    // 0x27d030: 0x27a401c8  addiu       $a0, $sp, 0x1C8
    ctx->pc = 0x27d030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 456));
label_27d034:
    // 0x27d034: 0x26250074  addiu       $a1, $s1, 0x74
    ctx->pc = 0x27d034u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 116));
label_27d038:
    // 0x27d038: 0xc0641e4  jal         func_190790
label_27d03c:
    if (ctx->pc == 0x27D03Cu) {
        ctx->pc = 0x27D040u;
        goto label_27d040;
    }
    ctx->pc = 0x27D038u;
    SET_GPR_U32(ctx, 31, 0x27D040u);
    ctx->pc = 0x190790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190790u, 0x27D038u, 0x27D040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D040u;
label_27d040:
    // 0x27d040: 0x27a401f4  addiu       $a0, $sp, 0x1F4
    ctx->pc = 0x27d040u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 500));
label_27d044:
    // 0x27d044: 0x27a501c8  addiu       $a1, $sp, 0x1C8
    ctx->pc = 0x27d044u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 456));
label_27d048:
    // 0x27d048: 0xc06475c  jal         func_191D70
label_27d04c:
    if (ctx->pc == 0x27D04Cu) {
        ctx->pc = 0x27D050u;
        goto label_27d050;
    }
    ctx->pc = 0x27D048u;
    SET_GPR_U32(ctx, 31, 0x27D050u);
    ctx->pc = 0x191D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191D70u, 0x27D048u, 0x27D050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D050u;
label_27d050:
    // 0x27d050: 0x10000057  b           . + 4 + (0x57 << 2)
label_27d054:
    if (ctx->pc == 0x27D054u) {
        ctx->pc = 0x27D058u;
        goto label_27d058;
    }
    ctx->pc = 0x27D050u;
    {
        const bool branch_taken_0x27d050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27d050) {
            ctx->pc = 0x27D1B0u;
            goto label_27d1b0;
        }
    }
    ctx->pc = 0x27D058u;
label_27d058:
    // 0x27d058: 0xa3a0025f  sb          $zero, 0x25F($sp)
    ctx->pc = 0x27d058u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 607), (uint8_t)GPR_U32(ctx, 0));
label_27d05c:
    // 0x27d05c: 0x8fa401ec  lw          $a0, 0x1EC($sp)
    ctx->pc = 0x27d05cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
label_27d060:
    // 0x27d060: 0x8e230080  lw          $v1, 0x80($s1)
    ctx->pc = 0x27d060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_27d064:
    // 0x27d064: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
label_27d068:
    if (ctx->pc == 0x27D068u) {
        ctx->pc = 0x27D06Cu;
        goto label_27d06c;
    }
    ctx->pc = 0x27D064u;
    {
        const bool branch_taken_0x27d064 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x27d064) {
            ctx->pc = 0x27D074u;
            goto label_27d074;
        }
    }
    ctx->pc = 0x27D06Cu;
label_27d06c:
    // 0x27d06c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x27d06cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27d070:
    // 0x27d070: 0xa3a3025f  sb          $v1, 0x25F($sp)
    ctx->pc = 0x27d070u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 607), (uint8_t)GPR_U32(ctx, 3));
label_27d074:
    // 0x27d074: 0x27a401f4  addiu       $a0, $sp, 0x1F4
    ctx->pc = 0x27d074u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 500));
label_27d078:
    // 0x27d078: 0xc0641dc  jal         func_190770
label_27d07c:
    if (ctx->pc == 0x27D07Cu) {
        ctx->pc = 0x27D080u;
        goto label_27d080;
    }
    ctx->pc = 0x27D078u;
    SET_GPR_U32(ctx, 31, 0x27D080u);
    ctx->pc = 0x190770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190770u, 0x27D078u, 0x27D080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D080u;
label_27d080:
    // 0x27d080: 0x8c560000  lw          $s6, 0x0($v0)
    ctx->pc = 0x27d080u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_27d084:
    // 0x27d084: 0xafb601e8  sw          $s6, 0x1E8($sp)
    ctx->pc = 0x27d084u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 488), GPR_U32(ctx, 22));
label_27d088:
    // 0x27d088: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x27d088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
label_27d08c:
    // 0x27d08c: 0xc085530  jal         func_2154C0
label_27d090:
    if (ctx->pc == 0x27D090u) {
        ctx->pc = 0x27D094u;
        goto label_27d094;
    }
    ctx->pc = 0x27D08Cu;
    SET_GPR_U32(ctx, 31, 0x27D094u);
    ctx->pc = 0x2154C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154C0u, 0x27D08Cu, 0x27D094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D094u;
label_27d094:
    // 0x27d094: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x27d094u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27d098:
    // 0x27d098: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x27d098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_27d09c:
    // 0x27d09c: 0x16c2001e  bne         $s6, $v0, . + 4 + (0x1E << 2)
label_27d0a0:
    if (ctx->pc == 0x27D0A0u) {
        ctx->pc = 0x27D0A4u;
        goto label_27d0a4;
    }
    ctx->pc = 0x27D09Cu;
    {
        const bool branch_taken_0x27d09c = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        if (branch_taken_0x27d09c) {
            ctx->pc = 0x27D118u;
            goto label_27d118;
        }
    }
    ctx->pc = 0x27D0A4u;
label_27d0a4:
    // 0x27d0a4: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x27d0a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
label_27d0a8:
    // 0x27d0a8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x27d0a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_27d0ac:
    // 0x27d0ac: 0xc085538  jal         func_2154E0
label_27d0b0:
    if (ctx->pc == 0x27D0B0u) {
        ctx->pc = 0x27D0B4u;
        goto label_27d0b4;
    }
    ctx->pc = 0x27D0ACu;
    SET_GPR_U32(ctx, 31, 0x27D0B4u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x27D0ACu, 0x27D0B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D0B4u;
label_27d0b4:
    // 0x27d0b4: 0xafa201e4  sw          $v0, 0x1E4($sp)
    ctx->pc = 0x27d0b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 484), GPR_U32(ctx, 2));
label_27d0b8:
    // 0x27d0b8: 0x8fa201e4  lw          $v0, 0x1E4($sp)
    ctx->pc = 0x27d0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 484)));
label_27d0bc:
    // 0x27d0bc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x27d0bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27d0c0:
    // 0x27d0c0: 0x93a5025f  lbu         $a1, 0x25F($sp)
    ctx->pc = 0x27d0c0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 607)));
label_27d0c4:
    // 0x27d0c4: 0xc0a5a90  jal         func_296A40
label_27d0c8:
    if (ctx->pc == 0x27D0C8u) {
        ctx->pc = 0x27D0CCu;
        goto label_27d0cc;
    }
    ctx->pc = 0x27D0C4u;
    SET_GPR_U32(ctx, 31, 0x27D0CCu);
    ctx->pc = 0x296A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296A40u, 0x27D0C4u, 0x27D0CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D0CCu;
label_27d0cc:
    // 0x27d0cc: 0x8fa601e4  lw          $a2, 0x1E4($sp)
    ctx->pc = 0x27d0ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 484)));
label_27d0d0:
    // 0x27d0d0: 0x8cc30034  lw          $v1, 0x34($a2)
    ctx->pc = 0x27d0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
label_27d0d4:
    // 0x27d0d4: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x27d0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_27d0d8:
    // 0x27d0d8: 0x1462002f  bne         $v1, $v0, . + 4 + (0x2F << 2)
label_27d0dc:
    if (ctx->pc == 0x27D0DCu) {
        ctx->pc = 0x27D0E0u;
        goto label_27d0e0;
    }
    ctx->pc = 0x27D0D8u;
    {
        const bool branch_taken_0x27d0d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x27d0d8) {
            ctx->pc = 0x27D198u;
            goto label_27d198;
        }
    }
    ctx->pc = 0x27D0E0u;
label_27d0e0:
    // 0x27d0e0: 0x27a401f0  addiu       $a0, $sp, 0x1F0
    ctx->pc = 0x27d0e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_27d0e4:
    // 0x27d0e4: 0x27a501f4  addiu       $a1, $sp, 0x1F4
    ctx->pc = 0x27d0e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 500));
label_27d0e8:
    // 0x27d0e8: 0xc06475c  jal         func_191D70
label_27d0ec:
    if (ctx->pc == 0x27D0ECu) {
        ctx->pc = 0x27D0F0u;
        goto label_27d0f0;
    }
    ctx->pc = 0x27D0E8u;
    SET_GPR_U32(ctx, 31, 0x27D0F0u);
    ctx->pc = 0x191D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191D70u, 0x27D0E8u, 0x27D0F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D0F0u;
label_27d0f0:
    // 0x27d0f0: 0x27a401f4  addiu       $a0, $sp, 0x1F4
    ctx->pc = 0x27d0f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 500));
label_27d0f4:
    // 0x27d0f4: 0xc0641cc  jal         func_190730
label_27d0f8:
    if (ctx->pc == 0x27D0F8u) {
        ctx->pc = 0x27D0FCu;
        goto label_27d0fc;
    }
    ctx->pc = 0x27D0F4u;
    SET_GPR_U32(ctx, 31, 0x27D0FCu);
    ctx->pc = 0x190730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190730u, 0x27D0F4u, 0x27D0FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D0FCu;
label_27d0fc:
    // 0x27d0fc: 0x26230074  addiu       $v1, $s1, 0x74
    ctx->pc = 0x27d0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 116));
label_27d100:
    // 0x27d100: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x27d100u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_27d104:
    // 0x27d104: 0x8fa501f0  lw          $a1, 0x1F0($sp)
    ctx->pc = 0x27d104u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_27d108:
    // 0x27d108: 0xc09ef80  jal         func_27BE00
label_27d10c:
    if (ctx->pc == 0x27D10Cu) {
        ctx->pc = 0x27D110u;
        goto label_27d110;
    }
    ctx->pc = 0x27D108u;
    SET_GPR_U32(ctx, 31, 0x27D110u);
    ctx->pc = 0x27BE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27BE00u, 0x27D108u, 0x27D110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D110u;
label_27d110:
    // 0x27d110: 0x10000027  b           . + 4 + (0x27 << 2)
label_27d114:
    if (ctx->pc == 0x27D114u) {
        ctx->pc = 0x27D118u;
        goto label_27d118;
    }
    ctx->pc = 0x27D110u;
    {
        const bool branch_taken_0x27d110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27d110) {
            ctx->pc = 0x27D1B0u;
            goto label_27d1b0;
        }
    }
    ctx->pc = 0x27D118u;
label_27d118:
    // 0x27d118: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x27d118u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
label_27d11c:
    // 0x27d11c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x27d11cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_27d120:
    // 0x27d120: 0xc085538  jal         func_2154E0
label_27d124:
    if (ctx->pc == 0x27D124u) {
        ctx->pc = 0x27D128u;
        goto label_27d128;
    }
    ctx->pc = 0x27D120u;
    SET_GPR_U32(ctx, 31, 0x27D128u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x27D120u, 0x27D128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D128u;
label_27d128:
    // 0x27d128: 0xafa201e0  sw          $v0, 0x1E0($sp)
    ctx->pc = 0x27d128u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 480), GPR_U32(ctx, 2));
label_27d12c:
    // 0x27d12c: 0x8fa401e0  lw          $a0, 0x1E0($sp)
    ctx->pc = 0x27d12cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
label_27d130:
    // 0x27d130: 0x93a2025f  lbu         $v0, 0x25F($sp)
    ctx->pc = 0x27d130u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 607)));
label_27d134:
    // 0x27d134: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x27d134u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27d138:
    // 0x27d138: 0xc0a6088  jal         func_298220
label_27d13c:
    if (ctx->pc == 0x27D13Cu) {
        ctx->pc = 0x27D140u;
        goto label_27d140;
    }
    ctx->pc = 0x27D138u;
    SET_GPR_U32(ctx, 31, 0x27D140u);
    ctx->pc = 0x298220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298220u, 0x27D138u, 0x27D140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D140u;
label_27d140:
    // 0x27d140: 0x8fb301e0  lw          $s3, 0x1E0($sp)
    ctx->pc = 0x27d140u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
label_27d144:
    // 0x27d144: 0x8e640044  lw          $a0, 0x44($s3)
    ctx->pc = 0x27d144u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 68)));
label_27d148:
    // 0x27d148: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x27d148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_27d14c:
    // 0x27d14c: 0x14820012  bne         $a0, $v0, . + 4 + (0x12 << 2)
label_27d150:
    if (ctx->pc == 0x27D150u) {
        ctx->pc = 0x27D154u;
        goto label_27d154;
    }
    ctx->pc = 0x27D14Cu;
    {
        const bool branch_taken_0x27d14c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x27d14c) {
            ctx->pc = 0x27D198u;
            goto label_27d198;
        }
    }
    ctx->pc = 0x27D154u;
label_27d154:
    // 0x27d154: 0x93a2025f  lbu         $v0, 0x25F($sp)
    ctx->pc = 0x27d154u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 607)));
label_27d158:
    // 0x27d158: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_27d15c:
    if (ctx->pc == 0x27D15Cu) {
        ctx->pc = 0x27D160u;
        goto label_27d160;
    }
    ctx->pc = 0x27D158u;
    {
        const bool branch_taken_0x27d158 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27d158) {
            ctx->pc = 0x27D198u;
            goto label_27d198;
        }
    }
    ctx->pc = 0x27D160u;
label_27d160:
    // 0x27d160: 0x27a401f0  addiu       $a0, $sp, 0x1F0
    ctx->pc = 0x27d160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_27d164:
    // 0x27d164: 0x27b301f4  addiu       $s3, $sp, 0x1F4
    ctx->pc = 0x27d164u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 500));
label_27d168:
    // 0x27d168: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x27d168u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_27d16c:
    // 0x27d16c: 0xc06475c  jal         func_191D70
label_27d170:
    if (ctx->pc == 0x27D170u) {
        ctx->pc = 0x27D174u;
        goto label_27d174;
    }
    ctx->pc = 0x27D16Cu;
    SET_GPR_U32(ctx, 31, 0x27D174u);
    ctx->pc = 0x191D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191D70u, 0x27D16Cu, 0x27D174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D174u;
label_27d174:
    // 0x27d174: 0x27a401f4  addiu       $a0, $sp, 0x1F4
    ctx->pc = 0x27d174u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 500));
label_27d178:
    // 0x27d178: 0xc0641cc  jal         func_190730
label_27d17c:
    if (ctx->pc == 0x27D17Cu) {
        ctx->pc = 0x27D180u;
        goto label_27d180;
    }
    ctx->pc = 0x27D178u;
    SET_GPR_U32(ctx, 31, 0x27D180u);
    ctx->pc = 0x190730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190730u, 0x27D178u, 0x27D180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D180u;
label_27d180:
    // 0x27d180: 0x26240074  addiu       $a0, $s1, 0x74
    ctx->pc = 0x27d180u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 116));
label_27d184:
    // 0x27d184: 0x8fa501f0  lw          $a1, 0x1F0($sp)
    ctx->pc = 0x27d184u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_27d188:
    // 0x27d188: 0xc09ef80  jal         func_27BE00
label_27d18c:
    if (ctx->pc == 0x27D18Cu) {
        ctx->pc = 0x27D190u;
        goto label_27d190;
    }
    ctx->pc = 0x27D188u;
    SET_GPR_U32(ctx, 31, 0x27D190u);
    ctx->pc = 0x27BE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27BE00u, 0x27D188u, 0x27D190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D190u;
label_27d190:
    // 0x27d190: 0x10000007  b           . + 4 + (0x7 << 2)
label_27d194:
    if (ctx->pc == 0x27D194u) {
        ctx->pc = 0x27D198u;
        goto label_27d198;
    }
    ctx->pc = 0x27D190u;
    {
        const bool branch_taken_0x27d190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27d190) {
            ctx->pc = 0x27D1B0u;
            goto label_27d1b0;
        }
    }
    ctx->pc = 0x27D198u;
label_27d198:
    // 0x27d198: 0x8fa301ec  lw          $v1, 0x1EC($sp)
    ctx->pc = 0x27d198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
label_27d19c:
    // 0x27d19c: 0x24730001  addiu       $s3, $v1, 0x1
    ctx->pc = 0x27d19cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_27d1a0:
    // 0x27d1a0: 0xafb301ec  sw          $s3, 0x1EC($sp)
    ctx->pc = 0x27d1a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 492), GPR_U32(ctx, 19));
label_27d1a4:
    // 0x27d1a4: 0x27a401f4  addiu       $a0, $sp, 0x1F4
    ctx->pc = 0x27d1a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 500));
label_27d1a8:
    // 0x27d1a8: 0xc0641cc  jal         func_190730
label_27d1ac:
    if (ctx->pc == 0x27D1ACu) {
        ctx->pc = 0x27D1B0u;
        goto label_27d1b0;
    }
    ctx->pc = 0x27D1A8u;
    SET_GPR_U32(ctx, 31, 0x27D1B0u);
    ctx->pc = 0x190730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190730u, 0x27D1A8u, 0x27D1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D1B0u;
label_27d1b0:
    // 0x27d1b0: 0x27a401c4  addiu       $a0, $sp, 0x1C4
    ctx->pc = 0x27d1b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 452));
label_27d1b4:
    // 0x27d1b4: 0x26250074  addiu       $a1, $s1, 0x74
    ctx->pc = 0x27d1b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 116));
label_27d1b8:
    // 0x27d1b8: 0xc0641a0  jal         func_190680
label_27d1bc:
    if (ctx->pc == 0x27D1BCu) {
        ctx->pc = 0x27D1C0u;
        goto label_27d1c0;
    }
    ctx->pc = 0x27D1B8u;
    SET_GPR_U32(ctx, 31, 0x27D1C0u);
    ctx->pc = 0x190680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190680u, 0x27D1B8u, 0x27D1C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D1C0u;
label_27d1c0:
    // 0x27d1c0: 0x27a501f4  addiu       $a1, $sp, 0x1F4
    ctx->pc = 0x27d1c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 500));
label_27d1c4:
    // 0x27d1c4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x27d1c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_27d1c8:
    // 0x27d1c8: 0x27a601c4  addiu       $a2, $sp, 0x1C4
    ctx->pc = 0x27d1c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 452));
label_27d1cc:
    // 0x27d1cc: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x27d1ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_27d1d0:
    // 0x27d1d0: 0xc041998  jal         func_106660
label_27d1d4:
    if (ctx->pc == 0x27D1D4u) {
        ctx->pc = 0x27D1D8u;
        goto label_27d1d8;
    }
    ctx->pc = 0x27D1D0u;
    SET_GPR_U32(ctx, 31, 0x27D1D8u);
    ctx->pc = 0x106660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106660u, 0x27D1D0u, 0x27D1D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D1D8u;
label_27d1d8:
    // 0x27d1d8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x27d1d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27d1dc:
    // 0x27d1dc: 0x1480ff9e  bnez        $a0, . + 4 + (-0x62 << 2)
label_27d1e0:
    if (ctx->pc == 0x27D1E0u) {
        ctx->pc = 0x27D1E4u;
        goto label_27d1e4;
    }
    ctx->pc = 0x27D1DCu;
    {
        const bool branch_taken_0x27d1dc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x27d1dc) {
            ctx->pc = 0x27D058u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27d058;
        }
    }
    ctx->pc = 0x27D1E4u;
label_27d1e4:
    // 0x27d1e4: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x27d1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_27d1e8:
    // 0x27d1e8: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x27d1e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27d1ec:
    // 0x27d1ec: 0xc780bc10  lwc1        $f0, -0x43F0($gp)
    ctx->pc = 0x27d1ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294949904)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27d1f0:
    // 0x27d1f0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x27d1f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_27d1f4:
    // 0x27d1f4: 0xe780bc10  swc1        $f0, -0x43F0($gp)
    ctx->pc = 0x27d1f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294949904), bits); }
label_27d1f8:
    // 0x27d1f8: 0xa3a0025e  sb          $zero, 0x25E($sp)
    ctx->pc = 0x27d1f8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 606), (uint8_t)GPR_U32(ctx, 0));
label_27d1fc:
    // 0x27d1fc: 0xc781bc10  lwc1        $f1, -0x43F0($gp)
    ctx->pc = 0x27d1fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294949904)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27d200:
    // 0x27d200: 0xc7808288  lwc1        $f0, -0x7D78($gp)
    ctx->pc = 0x27d200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27d204:
    // 0x27d204: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x27d204u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27d208:
    // 0x27d208: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_27d20c:
    if (ctx->pc == 0x27D20Cu) {
        ctx->pc = 0x27D210u;
        goto label_27d210;
    }
    ctx->pc = 0x27D208u;
    {
        const bool branch_taken_0x27d208 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27d208) {
            ctx->pc = 0x27D228u;
            goto label_27d228;
        }
    }
    ctx->pc = 0x27D210u;
label_27d210:
    // 0x27d210: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27d210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27d214:
    // 0x27d214: 0xa3a2025e  sb          $v0, 0x25E($sp)
    ctx->pc = 0x27d214u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 606), (uint8_t)GPR_U32(ctx, 2));
label_27d218:
    // 0x27d218: 0xc781bc10  lwc1        $f1, -0x43F0($gp)
    ctx->pc = 0x27d218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294949904)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27d21c:
    // 0x27d21c: 0xc7808288  lwc1        $f0, -0x7D78($gp)
    ctx->pc = 0x27d21cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27d220:
    // 0x27d220: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x27d220u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_27d224:
    // 0x27d224: 0xe780bc10  swc1        $f0, -0x43F0($gp)
    ctx->pc = 0x27d224u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294949904), bits); }
label_27d228:
    // 0x27d228: 0xc090864  jal         func_242190
label_27d22c:
    if (ctx->pc == 0x27D22Cu) {
        ctx->pc = 0x27D230u;
        goto label_27d230;
    }
    ctx->pc = 0x27D228u;
    SET_GPR_U32(ctx, 31, 0x27D230u);
    ctx->pc = 0x242190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242190u, 0x27D228u, 0x27D230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D230u;
label_27d230:
    // 0x27d230: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x27d230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27d234:
    // 0x27d234: 0xc090590  jal         func_241640
label_27d238:
    if (ctx->pc == 0x27D238u) {
        ctx->pc = 0x27D23Cu;
        goto label_27d23c;
    }
    ctx->pc = 0x27D234u;
    SET_GPR_U32(ctx, 31, 0x27D23Cu);
    ctx->pc = 0x241640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241640u, 0x27D234u, 0x27D23Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D23Cu;
label_27d23c:
    // 0x27d23c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x27d23cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27d240:
    // 0x27d240: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x27d240u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_27d244:
    // 0x27d244: 0xc09157c  jal         func_2455F0
label_27d248:
    if (ctx->pc == 0x27D248u) {
        ctx->pc = 0x27D24Cu;
        goto label_27d24c;
    }
    ctx->pc = 0x27D244u;
    SET_GPR_U32(ctx, 31, 0x27D24Cu);
    ctx->pc = 0x2455F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2455F0u, 0x27D244u, 0x27D24Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D24Cu;
label_27d24c:
    // 0x27d24c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x27d24cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27d250:
    // 0x27d250: 0xafa301dc  sw          $v1, 0x1DC($sp)
    ctx->pc = 0x27d250u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 476), GPR_U32(ctx, 3));
label_27d254:
    // 0x27d254: 0xc090864  jal         func_242190
label_27d258:
    if (ctx->pc == 0x27D258u) {
        ctx->pc = 0x27D25Cu;
        goto label_27d25c;
    }
    ctx->pc = 0x27D254u;
    SET_GPR_U32(ctx, 31, 0x27D25Cu);
    ctx->pc = 0x242190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242190u, 0x27D254u, 0x27D25Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D25Cu;
label_27d25c:
    // 0x27d25c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x27d25cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27d260:
    // 0x27d260: 0xc090590  jal         func_241640
label_27d264:
    if (ctx->pc == 0x27D264u) {
        ctx->pc = 0x27D268u;
        goto label_27d268;
    }
    ctx->pc = 0x27D260u;
    SET_GPR_U32(ctx, 31, 0x27D268u);
    ctx->pc = 0x241640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241640u, 0x27D260u, 0x27D268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D268u;
label_27d268:
    // 0x27d268: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x27d268u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27d26c:
    // 0x27d26c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x27d26cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_27d270:
    // 0x27d270: 0xc09157c  jal         func_2455F0
label_27d274:
    if (ctx->pc == 0x27D274u) {
        ctx->pc = 0x27D278u;
        goto label_27d278;
    }
    ctx->pc = 0x27D270u;
    SET_GPR_U32(ctx, 31, 0x27D278u);
    ctx->pc = 0x2455F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2455F0u, 0x27D270u, 0x27D278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D278u;
label_27d278:
    // 0x27d278: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x27d278u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27d27c:
    // 0x27d27c: 0xafa301d8  sw          $v1, 0x1D8($sp)
    ctx->pc = 0x27d27cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 472), GPR_U32(ctx, 3));
label_27d280:
    // 0x27d280: 0x8fa401dc  lw          $a0, 0x1DC($sp)
    ctx->pc = 0x27d280u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
label_27d284:
    // 0x27d284: 0xc040e7c  jal         func_1039F0
label_27d288:
    if (ctx->pc == 0x27D288u) {
        ctx->pc = 0x27D28Cu;
        goto label_27d28c;
    }
    ctx->pc = 0x27D284u;
    SET_GPR_U32(ctx, 31, 0x27D28Cu);
    ctx->pc = 0x1039F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1039F0u, 0x27D284u, 0x27D28Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D28Cu;
label_27d28c:
    // 0x27d28c: 0xafa201d4  sw          $v0, 0x1D4($sp)
    ctx->pc = 0x27d28cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 468), GPR_U32(ctx, 2));
label_27d290:
    // 0x27d290: 0x10000015  b           . + 4 + (0x15 << 2)
label_27d294:
    if (ctx->pc == 0x27D294u) {
        ctx->pc = 0x27D298u;
        goto label_27d298;
    }
    ctx->pc = 0x27D290u;
    {
        const bool branch_taken_0x27d290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27d290) {
            ctx->pc = 0x27D2E8u;
            goto label_27d2e8;
        }
    }
    ctx->pc = 0x27D298u;
label_27d298:
    // 0x27d298: 0x8fa201d4  lw          $v0, 0x1D4($sp)
    ctx->pc = 0x27d298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 468)));
label_27d29c:
    // 0x27d29c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x27d29cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_27d2a0:
    // 0x27d2a0: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x27d2a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_27d2a4:
    // 0x27d2a4: 0xc085538  jal         func_2154E0
label_27d2a8:
    if (ctx->pc == 0x27D2A8u) {
        ctx->pc = 0x27D2ACu;
        goto label_27d2ac;
    }
    ctx->pc = 0x27D2A4u;
    SET_GPR_U32(ctx, 31, 0x27D2ACu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x27D2A4u, 0x27D2ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D2ACu;
label_27d2ac:
    // 0x27d2ac: 0xafa201d0  sw          $v0, 0x1D0($sp)
    ctx->pc = 0x27d2acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 464), GPR_U32(ctx, 2));
label_27d2b0:
    // 0x27d2b0: 0x93a2025e  lbu         $v0, 0x25E($sp)
    ctx->pc = 0x27d2b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 606)));
label_27d2b4:
    // 0x27d2b4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_27d2b8:
    if (ctx->pc == 0x27D2B8u) {
        ctx->pc = 0x27D2BCu;
        goto label_27d2bc;
    }
    ctx->pc = 0x27D2B4u;
    {
        const bool branch_taken_0x27d2b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27d2b4) {
            ctx->pc = 0x27D2D0u;
            goto label_27d2d0;
        }
    }
    ctx->pc = 0x27D2BCu;
label_27d2bc:
    // 0x27d2bc: 0x8fb301d0  lw          $s3, 0x1D0($sp)
    ctx->pc = 0x27d2bcu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
label_27d2c0:
    // 0x27d2c0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x27d2c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_27d2c4:
    // 0x27d2c4: 0x8fa501d8  lw          $a1, 0x1D8($sp)
    ctx->pc = 0x27d2c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
label_27d2c8:
    // 0x27d2c8: 0xc0a5fdc  jal         func_297F70
label_27d2cc:
    if (ctx->pc == 0x27D2CCu) {
        ctx->pc = 0x27D2D0u;
        goto label_27d2d0;
    }
    ctx->pc = 0x27D2C8u;
    SET_GPR_U32(ctx, 31, 0x27D2D0u);
    ctx->pc = 0x297F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297F70u, 0x27D2C8u, 0x27D2D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D2D0u;
label_27d2d0:
    // 0x27d2d0: 0x8fa401d0  lw          $a0, 0x1D0($sp)
    ctx->pc = 0x27d2d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
label_27d2d4:
    // 0x27d2d4: 0xc0a60b0  jal         func_2982C0
label_27d2d8:
    if (ctx->pc == 0x27D2D8u) {
        ctx->pc = 0x27D2DCu;
        goto label_27d2dc;
    }
    ctx->pc = 0x27D2D4u;
    SET_GPR_U32(ctx, 31, 0x27D2DCu);
    ctx->pc = 0x2982C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2982C0u, 0x27D2D4u, 0x27D2DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D2DCu;
label_27d2dc:
    // 0x27d2dc: 0x8fa201d4  lw          $v0, 0x1D4($sp)
    ctx->pc = 0x27d2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 468)));
label_27d2e0:
    // 0x27d2e0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x27d2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_27d2e4:
    // 0x27d2e4: 0xafa201d4  sw          $v0, 0x1D4($sp)
    ctx->pc = 0x27d2e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 468), GPR_U32(ctx, 2));
label_27d2e8:
    // 0x27d2e8: 0x8fa201d4  lw          $v0, 0x1D4($sp)
    ctx->pc = 0x27d2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 468)));
label_27d2ec:
    // 0x27d2ec: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x27d2ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
label_27d2f0:
    // 0x27d2f0: 0x8fa401dc  lw          $a0, 0x1DC($sp)
    ctx->pc = 0x27d2f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
label_27d2f4:
    // 0x27d2f4: 0xc04147c  jal         func_1051F0
label_27d2f8:
    if (ctx->pc == 0x27D2F8u) {
        ctx->pc = 0x27D2FCu;
        goto label_27d2fc;
    }
    ctx->pc = 0x27D2F4u;
    SET_GPR_U32(ctx, 31, 0x27D2FCu);
    ctx->pc = 0x1051F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051F0u, 0x27D2F4u, 0x27D2FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D2FCu;
label_27d2fc:
    // 0x27d2fc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x27d2fcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27d300:
    // 0x27d300: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x27d300u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_27d304:
    // 0x27d304: 0x1443ffe4  bne         $v0, $v1, . + 4 + (-0x1C << 2)
label_27d308:
    if (ctx->pc == 0x27D308u) {
        ctx->pc = 0x27D30Cu;
        goto label_27d30c;
    }
    ctx->pc = 0x27D304u;
    {
        const bool branch_taken_0x27d304 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x27d304) {
            ctx->pc = 0x27D298u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27d298;
        }
    }
    ctx->pc = 0x27D30Cu;
label_27d30c:
    // 0x27d30c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27d30cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_27d310:
    // 0x27d310: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x27d310u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27d314:
    // 0x27d314: 0xc0a0024  jal         func_280090
label_27d318:
    if (ctx->pc == 0x27D318u) {
        ctx->pc = 0x27D31Cu;
        goto label_27d31c;
    }
    ctx->pc = 0x27D314u;
    SET_GPR_U32(ctx, 31, 0x27D31Cu);
    ctx->pc = 0x280090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280090u, 0x27D314u, 0x27D31Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D31Cu;
label_27d31c:
    // 0x27d31c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x27d31cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_27d320:
    // 0x27d320: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x27d320u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_27d324:
    // 0x27d324: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x27d324u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_27d328:
    // 0x27d328: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x27d328u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_27d32c:
    // 0x27d32c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x27d32cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_27d330:
    // 0x27d330: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x27d330u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_27d334:
    // 0x27d334: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x27d334u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_27d338:
    // 0x27d338: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x27d338u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_27d33c:
    // 0x27d33c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x27d33cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_27d340:
    // 0x27d340: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27d340u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_27d344:
    // 0x27d344: 0x27bd0270  addiu       $sp, $sp, 0x270
    ctx->pc = 0x27d344u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
label_27d348:
    // 0x27d348: 0x3e00008  jr          $ra
label_27d34c:
    if (ctx->pc == 0x27D34Cu) {
        ctx->pc = 0x27D350u;
        goto label_fallthrough_0x27d348;
    }
    ctx->pc = 0x27D348u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27D348u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x27d348:
    ctx->pc = 0x27D350u;
}
