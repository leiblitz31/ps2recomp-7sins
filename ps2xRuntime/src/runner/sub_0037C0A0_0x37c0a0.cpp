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

// Function: sub_0037C0A0
// Address: 0x37c0a0 - 0x37cfd0
void sub_0037C0A0_0x37c0a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037C0A0_0x37c0a0");
#endif

    switch (ctx->pc) {
        case 0x37c0a0u: goto label_37c0a0;
        case 0x37c0a4u: goto label_37c0a4;
        case 0x37c0a8u: goto label_37c0a8;
        case 0x37c0acu: goto label_37c0ac;
        case 0x37c0b0u: goto label_37c0b0;
        case 0x37c0b4u: goto label_37c0b4;
        case 0x37c0b8u: goto label_37c0b8;
        case 0x37c0bcu: goto label_37c0bc;
        case 0x37c0c0u: goto label_37c0c0;
        case 0x37c0c4u: goto label_37c0c4;
        case 0x37c0c8u: goto label_37c0c8;
        case 0x37c0ccu: goto label_37c0cc;
        case 0x37c0d0u: goto label_37c0d0;
        case 0x37c0d4u: goto label_37c0d4;
        case 0x37c0d8u: goto label_37c0d8;
        case 0x37c0dcu: goto label_37c0dc;
        case 0x37c0e0u: goto label_37c0e0;
        case 0x37c0e4u: goto label_37c0e4;
        case 0x37c0e8u: goto label_37c0e8;
        case 0x37c0ecu: goto label_37c0ec;
        case 0x37c0f0u: goto label_37c0f0;
        case 0x37c0f4u: goto label_37c0f4;
        case 0x37c0f8u: goto label_37c0f8;
        case 0x37c0fcu: goto label_37c0fc;
        case 0x37c100u: goto label_37c100;
        case 0x37c104u: goto label_37c104;
        case 0x37c108u: goto label_37c108;
        case 0x37c10cu: goto label_37c10c;
        case 0x37c110u: goto label_37c110;
        case 0x37c114u: goto label_37c114;
        case 0x37c118u: goto label_37c118;
        case 0x37c11cu: goto label_37c11c;
        case 0x37c120u: goto label_37c120;
        case 0x37c124u: goto label_37c124;
        case 0x37c128u: goto label_37c128;
        case 0x37c12cu: goto label_37c12c;
        case 0x37c130u: goto label_37c130;
        case 0x37c134u: goto label_37c134;
        case 0x37c138u: goto label_37c138;
        case 0x37c13cu: goto label_37c13c;
        case 0x37c140u: goto label_37c140;
        case 0x37c144u: goto label_37c144;
        case 0x37c148u: goto label_37c148;
        case 0x37c14cu: goto label_37c14c;
        case 0x37c150u: goto label_37c150;
        case 0x37c154u: goto label_37c154;
        case 0x37c158u: goto label_37c158;
        case 0x37c15cu: goto label_37c15c;
        case 0x37c160u: goto label_37c160;
        case 0x37c164u: goto label_37c164;
        case 0x37c168u: goto label_37c168;
        case 0x37c16cu: goto label_37c16c;
        case 0x37c170u: goto label_37c170;
        case 0x37c174u: goto label_37c174;
        case 0x37c178u: goto label_37c178;
        case 0x37c17cu: goto label_37c17c;
        case 0x37c180u: goto label_37c180;
        case 0x37c184u: goto label_37c184;
        case 0x37c188u: goto label_37c188;
        case 0x37c18cu: goto label_37c18c;
        case 0x37c190u: goto label_37c190;
        case 0x37c194u: goto label_37c194;
        case 0x37c198u: goto label_37c198;
        case 0x37c19cu: goto label_37c19c;
        case 0x37c1a0u: goto label_37c1a0;
        case 0x37c1a4u: goto label_37c1a4;
        case 0x37c1a8u: goto label_37c1a8;
        case 0x37c1acu: goto label_37c1ac;
        case 0x37c1b0u: goto label_37c1b0;
        case 0x37c1b4u: goto label_37c1b4;
        case 0x37c1b8u: goto label_37c1b8;
        case 0x37c1bcu: goto label_37c1bc;
        case 0x37c1c0u: goto label_37c1c0;
        case 0x37c1c4u: goto label_37c1c4;
        case 0x37c1c8u: goto label_37c1c8;
        case 0x37c1ccu: goto label_37c1cc;
        case 0x37c1d0u: goto label_37c1d0;
        case 0x37c1d4u: goto label_37c1d4;
        case 0x37c1d8u: goto label_37c1d8;
        case 0x37c1dcu: goto label_37c1dc;
        case 0x37c1e0u: goto label_37c1e0;
        case 0x37c1e4u: goto label_37c1e4;
        case 0x37c1e8u: goto label_37c1e8;
        case 0x37c1ecu: goto label_37c1ec;
        case 0x37c1f0u: goto label_37c1f0;
        case 0x37c1f4u: goto label_37c1f4;
        case 0x37c1f8u: goto label_37c1f8;
        case 0x37c1fcu: goto label_37c1fc;
        case 0x37c200u: goto label_37c200;
        case 0x37c204u: goto label_37c204;
        case 0x37c208u: goto label_37c208;
        case 0x37c20cu: goto label_37c20c;
        case 0x37c210u: goto label_37c210;
        case 0x37c214u: goto label_37c214;
        case 0x37c218u: goto label_37c218;
        case 0x37c21cu: goto label_37c21c;
        case 0x37c220u: goto label_37c220;
        case 0x37c224u: goto label_37c224;
        case 0x37c228u: goto label_37c228;
        case 0x37c22cu: goto label_37c22c;
        case 0x37c230u: goto label_37c230;
        case 0x37c234u: goto label_37c234;
        case 0x37c238u: goto label_37c238;
        case 0x37c23cu: goto label_37c23c;
        case 0x37c240u: goto label_37c240;
        case 0x37c244u: goto label_37c244;
        case 0x37c248u: goto label_37c248;
        case 0x37c24cu: goto label_37c24c;
        case 0x37c250u: goto label_37c250;
        case 0x37c254u: goto label_37c254;
        case 0x37c258u: goto label_37c258;
        case 0x37c25cu: goto label_37c25c;
        case 0x37c260u: goto label_37c260;
        case 0x37c264u: goto label_37c264;
        case 0x37c268u: goto label_37c268;
        case 0x37c26cu: goto label_37c26c;
        case 0x37c270u: goto label_37c270;
        case 0x37c274u: goto label_37c274;
        case 0x37c278u: goto label_37c278;
        case 0x37c27cu: goto label_37c27c;
        case 0x37c280u: goto label_37c280;
        case 0x37c284u: goto label_37c284;
        case 0x37c288u: goto label_37c288;
        case 0x37c28cu: goto label_37c28c;
        case 0x37c290u: goto label_37c290;
        case 0x37c294u: goto label_37c294;
        case 0x37c298u: goto label_37c298;
        case 0x37c29cu: goto label_37c29c;
        case 0x37c2a0u: goto label_37c2a0;
        case 0x37c2a4u: goto label_37c2a4;
        case 0x37c2a8u: goto label_37c2a8;
        case 0x37c2acu: goto label_37c2ac;
        case 0x37c2b0u: goto label_37c2b0;
        case 0x37c2b4u: goto label_37c2b4;
        case 0x37c2b8u: goto label_37c2b8;
        case 0x37c2bcu: goto label_37c2bc;
        case 0x37c2c0u: goto label_37c2c0;
        case 0x37c2c4u: goto label_37c2c4;
        case 0x37c2c8u: goto label_37c2c8;
        case 0x37c2ccu: goto label_37c2cc;
        case 0x37c2d0u: goto label_37c2d0;
        case 0x37c2d4u: goto label_37c2d4;
        case 0x37c2d8u: goto label_37c2d8;
        case 0x37c2dcu: goto label_37c2dc;
        case 0x37c2e0u: goto label_37c2e0;
        case 0x37c2e4u: goto label_37c2e4;
        case 0x37c2e8u: goto label_37c2e8;
        case 0x37c2ecu: goto label_37c2ec;
        case 0x37c2f0u: goto label_37c2f0;
        case 0x37c2f4u: goto label_37c2f4;
        case 0x37c2f8u: goto label_37c2f8;
        case 0x37c2fcu: goto label_37c2fc;
        case 0x37c300u: goto label_37c300;
        case 0x37c304u: goto label_37c304;
        case 0x37c308u: goto label_37c308;
        case 0x37c30cu: goto label_37c30c;
        case 0x37c310u: goto label_37c310;
        case 0x37c314u: goto label_37c314;
        case 0x37c318u: goto label_37c318;
        case 0x37c31cu: goto label_37c31c;
        case 0x37c320u: goto label_37c320;
        case 0x37c324u: goto label_37c324;
        case 0x37c328u: goto label_37c328;
        case 0x37c32cu: goto label_37c32c;
        case 0x37c330u: goto label_37c330;
        case 0x37c334u: goto label_37c334;
        case 0x37c338u: goto label_37c338;
        case 0x37c33cu: goto label_37c33c;
        case 0x37c340u: goto label_37c340;
        case 0x37c344u: goto label_37c344;
        case 0x37c348u: goto label_37c348;
        case 0x37c34cu: goto label_37c34c;
        case 0x37c350u: goto label_37c350;
        case 0x37c354u: goto label_37c354;
        case 0x37c358u: goto label_37c358;
        case 0x37c35cu: goto label_37c35c;
        case 0x37c360u: goto label_37c360;
        case 0x37c364u: goto label_37c364;
        case 0x37c368u: goto label_37c368;
        case 0x37c36cu: goto label_37c36c;
        case 0x37c370u: goto label_37c370;
        case 0x37c374u: goto label_37c374;
        case 0x37c378u: goto label_37c378;
        case 0x37c37cu: goto label_37c37c;
        case 0x37c380u: goto label_37c380;
        case 0x37c384u: goto label_37c384;
        case 0x37c388u: goto label_37c388;
        case 0x37c38cu: goto label_37c38c;
        case 0x37c390u: goto label_37c390;
        case 0x37c394u: goto label_37c394;
        case 0x37c398u: goto label_37c398;
        case 0x37c39cu: goto label_37c39c;
        case 0x37c3a0u: goto label_37c3a0;
        case 0x37c3a4u: goto label_37c3a4;
        case 0x37c3a8u: goto label_37c3a8;
        case 0x37c3acu: goto label_37c3ac;
        case 0x37c3b0u: goto label_37c3b0;
        case 0x37c3b4u: goto label_37c3b4;
        case 0x37c3b8u: goto label_37c3b8;
        case 0x37c3bcu: goto label_37c3bc;
        case 0x37c3c0u: goto label_37c3c0;
        case 0x37c3c4u: goto label_37c3c4;
        case 0x37c3c8u: goto label_37c3c8;
        case 0x37c3ccu: goto label_37c3cc;
        case 0x37c3d0u: goto label_37c3d0;
        case 0x37c3d4u: goto label_37c3d4;
        case 0x37c3d8u: goto label_37c3d8;
        case 0x37c3dcu: goto label_37c3dc;
        case 0x37c3e0u: goto label_37c3e0;
        case 0x37c3e4u: goto label_37c3e4;
        case 0x37c3e8u: goto label_37c3e8;
        case 0x37c3ecu: goto label_37c3ec;
        case 0x37c3f0u: goto label_37c3f0;
        case 0x37c3f4u: goto label_37c3f4;
        case 0x37c3f8u: goto label_37c3f8;
        case 0x37c3fcu: goto label_37c3fc;
        case 0x37c400u: goto label_37c400;
        case 0x37c404u: goto label_37c404;
        case 0x37c408u: goto label_37c408;
        case 0x37c40cu: goto label_37c40c;
        case 0x37c410u: goto label_37c410;
        case 0x37c414u: goto label_37c414;
        case 0x37c418u: goto label_37c418;
        case 0x37c41cu: goto label_37c41c;
        case 0x37c420u: goto label_37c420;
        case 0x37c424u: goto label_37c424;
        case 0x37c428u: goto label_37c428;
        case 0x37c42cu: goto label_37c42c;
        case 0x37c430u: goto label_37c430;
        case 0x37c434u: goto label_37c434;
        case 0x37c438u: goto label_37c438;
        case 0x37c43cu: goto label_37c43c;
        case 0x37c440u: goto label_37c440;
        case 0x37c444u: goto label_37c444;
        case 0x37c448u: goto label_37c448;
        case 0x37c44cu: goto label_37c44c;
        case 0x37c450u: goto label_37c450;
        case 0x37c454u: goto label_37c454;
        case 0x37c458u: goto label_37c458;
        case 0x37c45cu: goto label_37c45c;
        case 0x37c460u: goto label_37c460;
        case 0x37c464u: goto label_37c464;
        case 0x37c468u: goto label_37c468;
        case 0x37c46cu: goto label_37c46c;
        case 0x37c470u: goto label_37c470;
        case 0x37c474u: goto label_37c474;
        case 0x37c478u: goto label_37c478;
        case 0x37c47cu: goto label_37c47c;
        case 0x37c480u: goto label_37c480;
        case 0x37c484u: goto label_37c484;
        case 0x37c488u: goto label_37c488;
        case 0x37c48cu: goto label_37c48c;
        case 0x37c490u: goto label_37c490;
        case 0x37c494u: goto label_37c494;
        case 0x37c498u: goto label_37c498;
        case 0x37c49cu: goto label_37c49c;
        case 0x37c4a0u: goto label_37c4a0;
        case 0x37c4a4u: goto label_37c4a4;
        case 0x37c4a8u: goto label_37c4a8;
        case 0x37c4acu: goto label_37c4ac;
        case 0x37c4b0u: goto label_37c4b0;
        case 0x37c4b4u: goto label_37c4b4;
        case 0x37c4b8u: goto label_37c4b8;
        case 0x37c4bcu: goto label_37c4bc;
        case 0x37c4c0u: goto label_37c4c0;
        case 0x37c4c4u: goto label_37c4c4;
        case 0x37c4c8u: goto label_37c4c8;
        case 0x37c4ccu: goto label_37c4cc;
        case 0x37c4d0u: goto label_37c4d0;
        case 0x37c4d4u: goto label_37c4d4;
        case 0x37c4d8u: goto label_37c4d8;
        case 0x37c4dcu: goto label_37c4dc;
        case 0x37c4e0u: goto label_37c4e0;
        case 0x37c4e4u: goto label_37c4e4;
        case 0x37c4e8u: goto label_37c4e8;
        case 0x37c4ecu: goto label_37c4ec;
        case 0x37c4f0u: goto label_37c4f0;
        case 0x37c4f4u: goto label_37c4f4;
        case 0x37c4f8u: goto label_37c4f8;
        case 0x37c4fcu: goto label_37c4fc;
        case 0x37c500u: goto label_37c500;
        case 0x37c504u: goto label_37c504;
        case 0x37c508u: goto label_37c508;
        case 0x37c50cu: goto label_37c50c;
        case 0x37c510u: goto label_37c510;
        case 0x37c514u: goto label_37c514;
        case 0x37c518u: goto label_37c518;
        case 0x37c51cu: goto label_37c51c;
        case 0x37c520u: goto label_37c520;
        case 0x37c524u: goto label_37c524;
        case 0x37c528u: goto label_37c528;
        case 0x37c52cu: goto label_37c52c;
        case 0x37c530u: goto label_37c530;
        case 0x37c534u: goto label_37c534;
        case 0x37c538u: goto label_37c538;
        case 0x37c53cu: goto label_37c53c;
        case 0x37c540u: goto label_37c540;
        case 0x37c544u: goto label_37c544;
        case 0x37c548u: goto label_37c548;
        case 0x37c54cu: goto label_37c54c;
        case 0x37c550u: goto label_37c550;
        case 0x37c554u: goto label_37c554;
        case 0x37c558u: goto label_37c558;
        case 0x37c55cu: goto label_37c55c;
        case 0x37c560u: goto label_37c560;
        case 0x37c564u: goto label_37c564;
        case 0x37c568u: goto label_37c568;
        case 0x37c56cu: goto label_37c56c;
        case 0x37c570u: goto label_37c570;
        case 0x37c574u: goto label_37c574;
        case 0x37c578u: goto label_37c578;
        case 0x37c57cu: goto label_37c57c;
        case 0x37c580u: goto label_37c580;
        case 0x37c584u: goto label_37c584;
        case 0x37c588u: goto label_37c588;
        case 0x37c58cu: goto label_37c58c;
        case 0x37c590u: goto label_37c590;
        case 0x37c594u: goto label_37c594;
        case 0x37c598u: goto label_37c598;
        case 0x37c59cu: goto label_37c59c;
        case 0x37c5a0u: goto label_37c5a0;
        case 0x37c5a4u: goto label_37c5a4;
        case 0x37c5a8u: goto label_37c5a8;
        case 0x37c5acu: goto label_37c5ac;
        case 0x37c5b0u: goto label_37c5b0;
        case 0x37c5b4u: goto label_37c5b4;
        case 0x37c5b8u: goto label_37c5b8;
        case 0x37c5bcu: goto label_37c5bc;
        case 0x37c5c0u: goto label_37c5c0;
        case 0x37c5c4u: goto label_37c5c4;
        case 0x37c5c8u: goto label_37c5c8;
        case 0x37c5ccu: goto label_37c5cc;
        case 0x37c5d0u: goto label_37c5d0;
        case 0x37c5d4u: goto label_37c5d4;
        case 0x37c5d8u: goto label_37c5d8;
        case 0x37c5dcu: goto label_37c5dc;
        case 0x37c5e0u: goto label_37c5e0;
        case 0x37c5e4u: goto label_37c5e4;
        case 0x37c5e8u: goto label_37c5e8;
        case 0x37c5ecu: goto label_37c5ec;
        case 0x37c5f0u: goto label_37c5f0;
        case 0x37c5f4u: goto label_37c5f4;
        case 0x37c5f8u: goto label_37c5f8;
        case 0x37c5fcu: goto label_37c5fc;
        case 0x37c600u: goto label_37c600;
        case 0x37c604u: goto label_37c604;
        case 0x37c608u: goto label_37c608;
        case 0x37c60cu: goto label_37c60c;
        case 0x37c610u: goto label_37c610;
        case 0x37c614u: goto label_37c614;
        case 0x37c618u: goto label_37c618;
        case 0x37c61cu: goto label_37c61c;
        case 0x37c620u: goto label_37c620;
        case 0x37c624u: goto label_37c624;
        case 0x37c628u: goto label_37c628;
        case 0x37c62cu: goto label_37c62c;
        case 0x37c630u: goto label_37c630;
        case 0x37c634u: goto label_37c634;
        case 0x37c638u: goto label_37c638;
        case 0x37c63cu: goto label_37c63c;
        case 0x37c640u: goto label_37c640;
        case 0x37c644u: goto label_37c644;
        case 0x37c648u: goto label_37c648;
        case 0x37c64cu: goto label_37c64c;
        case 0x37c650u: goto label_37c650;
        case 0x37c654u: goto label_37c654;
        case 0x37c658u: goto label_37c658;
        case 0x37c65cu: goto label_37c65c;
        case 0x37c660u: goto label_37c660;
        case 0x37c664u: goto label_37c664;
        case 0x37c668u: goto label_37c668;
        case 0x37c66cu: goto label_37c66c;
        case 0x37c670u: goto label_37c670;
        case 0x37c674u: goto label_37c674;
        case 0x37c678u: goto label_37c678;
        case 0x37c67cu: goto label_37c67c;
        case 0x37c680u: goto label_37c680;
        case 0x37c684u: goto label_37c684;
        case 0x37c688u: goto label_37c688;
        case 0x37c68cu: goto label_37c68c;
        case 0x37c690u: goto label_37c690;
        case 0x37c694u: goto label_37c694;
        case 0x37c698u: goto label_37c698;
        case 0x37c69cu: goto label_37c69c;
        case 0x37c6a0u: goto label_37c6a0;
        case 0x37c6a4u: goto label_37c6a4;
        case 0x37c6a8u: goto label_37c6a8;
        case 0x37c6acu: goto label_37c6ac;
        case 0x37c6b0u: goto label_37c6b0;
        case 0x37c6b4u: goto label_37c6b4;
        case 0x37c6b8u: goto label_37c6b8;
        case 0x37c6bcu: goto label_37c6bc;
        case 0x37c6c0u: goto label_37c6c0;
        case 0x37c6c4u: goto label_37c6c4;
        case 0x37c6c8u: goto label_37c6c8;
        case 0x37c6ccu: goto label_37c6cc;
        case 0x37c6d0u: goto label_37c6d0;
        case 0x37c6d4u: goto label_37c6d4;
        case 0x37c6d8u: goto label_37c6d8;
        case 0x37c6dcu: goto label_37c6dc;
        case 0x37c6e0u: goto label_37c6e0;
        case 0x37c6e4u: goto label_37c6e4;
        case 0x37c6e8u: goto label_37c6e8;
        case 0x37c6ecu: goto label_37c6ec;
        case 0x37c6f0u: goto label_37c6f0;
        case 0x37c6f4u: goto label_37c6f4;
        case 0x37c6f8u: goto label_37c6f8;
        case 0x37c6fcu: goto label_37c6fc;
        case 0x37c700u: goto label_37c700;
        case 0x37c704u: goto label_37c704;
        case 0x37c708u: goto label_37c708;
        case 0x37c70cu: goto label_37c70c;
        case 0x37c710u: goto label_37c710;
        case 0x37c714u: goto label_37c714;
        case 0x37c718u: goto label_37c718;
        case 0x37c71cu: goto label_37c71c;
        case 0x37c720u: goto label_37c720;
        case 0x37c724u: goto label_37c724;
        case 0x37c728u: goto label_37c728;
        case 0x37c72cu: goto label_37c72c;
        case 0x37c730u: goto label_37c730;
        case 0x37c734u: goto label_37c734;
        case 0x37c738u: goto label_37c738;
        case 0x37c73cu: goto label_37c73c;
        case 0x37c740u: goto label_37c740;
        case 0x37c744u: goto label_37c744;
        case 0x37c748u: goto label_37c748;
        case 0x37c74cu: goto label_37c74c;
        case 0x37c750u: goto label_37c750;
        case 0x37c754u: goto label_37c754;
        case 0x37c758u: goto label_37c758;
        case 0x37c75cu: goto label_37c75c;
        case 0x37c760u: goto label_37c760;
        case 0x37c764u: goto label_37c764;
        case 0x37c768u: goto label_37c768;
        case 0x37c76cu: goto label_37c76c;
        case 0x37c770u: goto label_37c770;
        case 0x37c774u: goto label_37c774;
        case 0x37c778u: goto label_37c778;
        case 0x37c77cu: goto label_37c77c;
        case 0x37c780u: goto label_37c780;
        case 0x37c784u: goto label_37c784;
        case 0x37c788u: goto label_37c788;
        case 0x37c78cu: goto label_37c78c;
        case 0x37c790u: goto label_37c790;
        case 0x37c794u: goto label_37c794;
        case 0x37c798u: goto label_37c798;
        case 0x37c79cu: goto label_37c79c;
        case 0x37c7a0u: goto label_37c7a0;
        case 0x37c7a4u: goto label_37c7a4;
        case 0x37c7a8u: goto label_37c7a8;
        case 0x37c7acu: goto label_37c7ac;
        case 0x37c7b0u: goto label_37c7b0;
        case 0x37c7b4u: goto label_37c7b4;
        case 0x37c7b8u: goto label_37c7b8;
        case 0x37c7bcu: goto label_37c7bc;
        case 0x37c7c0u: goto label_37c7c0;
        case 0x37c7c4u: goto label_37c7c4;
        case 0x37c7c8u: goto label_37c7c8;
        case 0x37c7ccu: goto label_37c7cc;
        case 0x37c7d0u: goto label_37c7d0;
        case 0x37c7d4u: goto label_37c7d4;
        case 0x37c7d8u: goto label_37c7d8;
        case 0x37c7dcu: goto label_37c7dc;
        case 0x37c7e0u: goto label_37c7e0;
        case 0x37c7e4u: goto label_37c7e4;
        case 0x37c7e8u: goto label_37c7e8;
        case 0x37c7ecu: goto label_37c7ec;
        case 0x37c7f0u: goto label_37c7f0;
        case 0x37c7f4u: goto label_37c7f4;
        case 0x37c7f8u: goto label_37c7f8;
        case 0x37c7fcu: goto label_37c7fc;
        case 0x37c800u: goto label_37c800;
        case 0x37c804u: goto label_37c804;
        case 0x37c808u: goto label_37c808;
        case 0x37c80cu: goto label_37c80c;
        case 0x37c810u: goto label_37c810;
        case 0x37c814u: goto label_37c814;
        case 0x37c818u: goto label_37c818;
        case 0x37c81cu: goto label_37c81c;
        case 0x37c820u: goto label_37c820;
        case 0x37c824u: goto label_37c824;
        case 0x37c828u: goto label_37c828;
        case 0x37c82cu: goto label_37c82c;
        case 0x37c830u: goto label_37c830;
        case 0x37c834u: goto label_37c834;
        case 0x37c838u: goto label_37c838;
        case 0x37c83cu: goto label_37c83c;
        case 0x37c840u: goto label_37c840;
        case 0x37c844u: goto label_37c844;
        case 0x37c848u: goto label_37c848;
        case 0x37c84cu: goto label_37c84c;
        case 0x37c850u: goto label_37c850;
        case 0x37c854u: goto label_37c854;
        case 0x37c858u: goto label_37c858;
        case 0x37c85cu: goto label_37c85c;
        case 0x37c860u: goto label_37c860;
        case 0x37c864u: goto label_37c864;
        case 0x37c868u: goto label_37c868;
        case 0x37c86cu: goto label_37c86c;
        case 0x37c870u: goto label_37c870;
        case 0x37c874u: goto label_37c874;
        case 0x37c878u: goto label_37c878;
        case 0x37c87cu: goto label_37c87c;
        case 0x37c880u: goto label_37c880;
        case 0x37c884u: goto label_37c884;
        case 0x37c888u: goto label_37c888;
        case 0x37c88cu: goto label_37c88c;
        case 0x37c890u: goto label_37c890;
        case 0x37c894u: goto label_37c894;
        case 0x37c898u: goto label_37c898;
        case 0x37c89cu: goto label_37c89c;
        case 0x37c8a0u: goto label_37c8a0;
        case 0x37c8a4u: goto label_37c8a4;
        case 0x37c8a8u: goto label_37c8a8;
        case 0x37c8acu: goto label_37c8ac;
        case 0x37c8b0u: goto label_37c8b0;
        case 0x37c8b4u: goto label_37c8b4;
        case 0x37c8b8u: goto label_37c8b8;
        case 0x37c8bcu: goto label_37c8bc;
        case 0x37c8c0u: goto label_37c8c0;
        case 0x37c8c4u: goto label_37c8c4;
        case 0x37c8c8u: goto label_37c8c8;
        case 0x37c8ccu: goto label_37c8cc;
        case 0x37c8d0u: goto label_37c8d0;
        case 0x37c8d4u: goto label_37c8d4;
        case 0x37c8d8u: goto label_37c8d8;
        case 0x37c8dcu: goto label_37c8dc;
        case 0x37c8e0u: goto label_37c8e0;
        case 0x37c8e4u: goto label_37c8e4;
        case 0x37c8e8u: goto label_37c8e8;
        case 0x37c8ecu: goto label_37c8ec;
        case 0x37c8f0u: goto label_37c8f0;
        case 0x37c8f4u: goto label_37c8f4;
        case 0x37c8f8u: goto label_37c8f8;
        case 0x37c8fcu: goto label_37c8fc;
        case 0x37c900u: goto label_37c900;
        case 0x37c904u: goto label_37c904;
        case 0x37c908u: goto label_37c908;
        case 0x37c90cu: goto label_37c90c;
        case 0x37c910u: goto label_37c910;
        case 0x37c914u: goto label_37c914;
        case 0x37c918u: goto label_37c918;
        case 0x37c91cu: goto label_37c91c;
        case 0x37c920u: goto label_37c920;
        case 0x37c924u: goto label_37c924;
        case 0x37c928u: goto label_37c928;
        case 0x37c92cu: goto label_37c92c;
        case 0x37c930u: goto label_37c930;
        case 0x37c934u: goto label_37c934;
        case 0x37c938u: goto label_37c938;
        case 0x37c93cu: goto label_37c93c;
        case 0x37c940u: goto label_37c940;
        case 0x37c944u: goto label_37c944;
        case 0x37c948u: goto label_37c948;
        case 0x37c94cu: goto label_37c94c;
        case 0x37c950u: goto label_37c950;
        case 0x37c954u: goto label_37c954;
        case 0x37c958u: goto label_37c958;
        case 0x37c95cu: goto label_37c95c;
        case 0x37c960u: goto label_37c960;
        case 0x37c964u: goto label_37c964;
        case 0x37c968u: goto label_37c968;
        case 0x37c96cu: goto label_37c96c;
        case 0x37c970u: goto label_37c970;
        case 0x37c974u: goto label_37c974;
        case 0x37c978u: goto label_37c978;
        case 0x37c97cu: goto label_37c97c;
        case 0x37c980u: goto label_37c980;
        case 0x37c984u: goto label_37c984;
        case 0x37c988u: goto label_37c988;
        case 0x37c98cu: goto label_37c98c;
        case 0x37c990u: goto label_37c990;
        case 0x37c994u: goto label_37c994;
        case 0x37c998u: goto label_37c998;
        case 0x37c99cu: goto label_37c99c;
        case 0x37c9a0u: goto label_37c9a0;
        case 0x37c9a4u: goto label_37c9a4;
        case 0x37c9a8u: goto label_37c9a8;
        case 0x37c9acu: goto label_37c9ac;
        case 0x37c9b0u: goto label_37c9b0;
        case 0x37c9b4u: goto label_37c9b4;
        case 0x37c9b8u: goto label_37c9b8;
        case 0x37c9bcu: goto label_37c9bc;
        case 0x37c9c0u: goto label_37c9c0;
        case 0x37c9c4u: goto label_37c9c4;
        case 0x37c9c8u: goto label_37c9c8;
        case 0x37c9ccu: goto label_37c9cc;
        case 0x37c9d0u: goto label_37c9d0;
        case 0x37c9d4u: goto label_37c9d4;
        case 0x37c9d8u: goto label_37c9d8;
        case 0x37c9dcu: goto label_37c9dc;
        case 0x37c9e0u: goto label_37c9e0;
        case 0x37c9e4u: goto label_37c9e4;
        case 0x37c9e8u: goto label_37c9e8;
        case 0x37c9ecu: goto label_37c9ec;
        case 0x37c9f0u: goto label_37c9f0;
        case 0x37c9f4u: goto label_37c9f4;
        case 0x37c9f8u: goto label_37c9f8;
        case 0x37c9fcu: goto label_37c9fc;
        case 0x37ca00u: goto label_37ca00;
        case 0x37ca04u: goto label_37ca04;
        case 0x37ca08u: goto label_37ca08;
        case 0x37ca0cu: goto label_37ca0c;
        case 0x37ca10u: goto label_37ca10;
        case 0x37ca14u: goto label_37ca14;
        case 0x37ca18u: goto label_37ca18;
        case 0x37ca1cu: goto label_37ca1c;
        case 0x37ca20u: goto label_37ca20;
        case 0x37ca24u: goto label_37ca24;
        case 0x37ca28u: goto label_37ca28;
        case 0x37ca2cu: goto label_37ca2c;
        case 0x37ca30u: goto label_37ca30;
        case 0x37ca34u: goto label_37ca34;
        case 0x37ca38u: goto label_37ca38;
        case 0x37ca3cu: goto label_37ca3c;
        case 0x37ca40u: goto label_37ca40;
        case 0x37ca44u: goto label_37ca44;
        case 0x37ca48u: goto label_37ca48;
        case 0x37ca4cu: goto label_37ca4c;
        case 0x37ca50u: goto label_37ca50;
        case 0x37ca54u: goto label_37ca54;
        case 0x37ca58u: goto label_37ca58;
        case 0x37ca5cu: goto label_37ca5c;
        case 0x37ca60u: goto label_37ca60;
        case 0x37ca64u: goto label_37ca64;
        case 0x37ca68u: goto label_37ca68;
        case 0x37ca6cu: goto label_37ca6c;
        case 0x37ca70u: goto label_37ca70;
        case 0x37ca74u: goto label_37ca74;
        case 0x37ca78u: goto label_37ca78;
        case 0x37ca7cu: goto label_37ca7c;
        case 0x37ca80u: goto label_37ca80;
        case 0x37ca84u: goto label_37ca84;
        case 0x37ca88u: goto label_37ca88;
        case 0x37ca8cu: goto label_37ca8c;
        case 0x37ca90u: goto label_37ca90;
        case 0x37ca94u: goto label_37ca94;
        case 0x37ca98u: goto label_37ca98;
        case 0x37ca9cu: goto label_37ca9c;
        case 0x37caa0u: goto label_37caa0;
        case 0x37caa4u: goto label_37caa4;
        case 0x37caa8u: goto label_37caa8;
        case 0x37caacu: goto label_37caac;
        case 0x37cab0u: goto label_37cab0;
        case 0x37cab4u: goto label_37cab4;
        case 0x37cab8u: goto label_37cab8;
        case 0x37cabcu: goto label_37cabc;
        case 0x37cac0u: goto label_37cac0;
        case 0x37cac4u: goto label_37cac4;
        case 0x37cac8u: goto label_37cac8;
        case 0x37caccu: goto label_37cacc;
        case 0x37cad0u: goto label_37cad0;
        case 0x37cad4u: goto label_37cad4;
        case 0x37cad8u: goto label_37cad8;
        case 0x37cadcu: goto label_37cadc;
        case 0x37cae0u: goto label_37cae0;
        case 0x37cae4u: goto label_37cae4;
        case 0x37cae8u: goto label_37cae8;
        case 0x37caecu: goto label_37caec;
        case 0x37caf0u: goto label_37caf0;
        case 0x37caf4u: goto label_37caf4;
        case 0x37caf8u: goto label_37caf8;
        case 0x37cafcu: goto label_37cafc;
        case 0x37cb00u: goto label_37cb00;
        case 0x37cb04u: goto label_37cb04;
        case 0x37cb08u: goto label_37cb08;
        case 0x37cb0cu: goto label_37cb0c;
        case 0x37cb10u: goto label_37cb10;
        case 0x37cb14u: goto label_37cb14;
        case 0x37cb18u: goto label_37cb18;
        case 0x37cb1cu: goto label_37cb1c;
        case 0x37cb20u: goto label_37cb20;
        case 0x37cb24u: goto label_37cb24;
        case 0x37cb28u: goto label_37cb28;
        case 0x37cb2cu: goto label_37cb2c;
        case 0x37cb30u: goto label_37cb30;
        case 0x37cb34u: goto label_37cb34;
        case 0x37cb38u: goto label_37cb38;
        case 0x37cb3cu: goto label_37cb3c;
        case 0x37cb40u: goto label_37cb40;
        case 0x37cb44u: goto label_37cb44;
        case 0x37cb48u: goto label_37cb48;
        case 0x37cb4cu: goto label_37cb4c;
        case 0x37cb50u: goto label_37cb50;
        case 0x37cb54u: goto label_37cb54;
        case 0x37cb58u: goto label_37cb58;
        case 0x37cb5cu: goto label_37cb5c;
        case 0x37cb60u: goto label_37cb60;
        case 0x37cb64u: goto label_37cb64;
        case 0x37cb68u: goto label_37cb68;
        case 0x37cb6cu: goto label_37cb6c;
        case 0x37cb70u: goto label_37cb70;
        case 0x37cb74u: goto label_37cb74;
        case 0x37cb78u: goto label_37cb78;
        case 0x37cb7cu: goto label_37cb7c;
        case 0x37cb80u: goto label_37cb80;
        case 0x37cb84u: goto label_37cb84;
        case 0x37cb88u: goto label_37cb88;
        case 0x37cb8cu: goto label_37cb8c;
        case 0x37cb90u: goto label_37cb90;
        case 0x37cb94u: goto label_37cb94;
        case 0x37cb98u: goto label_37cb98;
        case 0x37cb9cu: goto label_37cb9c;
        case 0x37cba0u: goto label_37cba0;
        case 0x37cba4u: goto label_37cba4;
        case 0x37cba8u: goto label_37cba8;
        case 0x37cbacu: goto label_37cbac;
        case 0x37cbb0u: goto label_37cbb0;
        case 0x37cbb4u: goto label_37cbb4;
        case 0x37cbb8u: goto label_37cbb8;
        case 0x37cbbcu: goto label_37cbbc;
        case 0x37cbc0u: goto label_37cbc0;
        case 0x37cbc4u: goto label_37cbc4;
        case 0x37cbc8u: goto label_37cbc8;
        case 0x37cbccu: goto label_37cbcc;
        case 0x37cbd0u: goto label_37cbd0;
        case 0x37cbd4u: goto label_37cbd4;
        case 0x37cbd8u: goto label_37cbd8;
        case 0x37cbdcu: goto label_37cbdc;
        case 0x37cbe0u: goto label_37cbe0;
        case 0x37cbe4u: goto label_37cbe4;
        case 0x37cbe8u: goto label_37cbe8;
        case 0x37cbecu: goto label_37cbec;
        case 0x37cbf0u: goto label_37cbf0;
        case 0x37cbf4u: goto label_37cbf4;
        case 0x37cbf8u: goto label_37cbf8;
        case 0x37cbfcu: goto label_37cbfc;
        case 0x37cc00u: goto label_37cc00;
        case 0x37cc04u: goto label_37cc04;
        case 0x37cc08u: goto label_37cc08;
        case 0x37cc0cu: goto label_37cc0c;
        case 0x37cc10u: goto label_37cc10;
        case 0x37cc14u: goto label_37cc14;
        case 0x37cc18u: goto label_37cc18;
        case 0x37cc1cu: goto label_37cc1c;
        case 0x37cc20u: goto label_37cc20;
        case 0x37cc24u: goto label_37cc24;
        case 0x37cc28u: goto label_37cc28;
        case 0x37cc2cu: goto label_37cc2c;
        case 0x37cc30u: goto label_37cc30;
        case 0x37cc34u: goto label_37cc34;
        case 0x37cc38u: goto label_37cc38;
        case 0x37cc3cu: goto label_37cc3c;
        case 0x37cc40u: goto label_37cc40;
        case 0x37cc44u: goto label_37cc44;
        case 0x37cc48u: goto label_37cc48;
        case 0x37cc4cu: goto label_37cc4c;
        case 0x37cc50u: goto label_37cc50;
        case 0x37cc54u: goto label_37cc54;
        case 0x37cc58u: goto label_37cc58;
        case 0x37cc5cu: goto label_37cc5c;
        case 0x37cc60u: goto label_37cc60;
        case 0x37cc64u: goto label_37cc64;
        case 0x37cc68u: goto label_37cc68;
        case 0x37cc6cu: goto label_37cc6c;
        case 0x37cc70u: goto label_37cc70;
        case 0x37cc74u: goto label_37cc74;
        case 0x37cc78u: goto label_37cc78;
        case 0x37cc7cu: goto label_37cc7c;
        case 0x37cc80u: goto label_37cc80;
        case 0x37cc84u: goto label_37cc84;
        case 0x37cc88u: goto label_37cc88;
        case 0x37cc8cu: goto label_37cc8c;
        case 0x37cc90u: goto label_37cc90;
        case 0x37cc94u: goto label_37cc94;
        case 0x37cc98u: goto label_37cc98;
        case 0x37cc9cu: goto label_37cc9c;
        case 0x37cca0u: goto label_37cca0;
        case 0x37cca4u: goto label_37cca4;
        case 0x37cca8u: goto label_37cca8;
        case 0x37ccacu: goto label_37ccac;
        case 0x37ccb0u: goto label_37ccb0;
        case 0x37ccb4u: goto label_37ccb4;
        case 0x37ccb8u: goto label_37ccb8;
        case 0x37ccbcu: goto label_37ccbc;
        case 0x37ccc0u: goto label_37ccc0;
        case 0x37ccc4u: goto label_37ccc4;
        case 0x37ccc8u: goto label_37ccc8;
        case 0x37ccccu: goto label_37cccc;
        case 0x37ccd0u: goto label_37ccd0;
        case 0x37ccd4u: goto label_37ccd4;
        case 0x37ccd8u: goto label_37ccd8;
        case 0x37ccdcu: goto label_37ccdc;
        case 0x37cce0u: goto label_37cce0;
        case 0x37cce4u: goto label_37cce4;
        case 0x37cce8u: goto label_37cce8;
        case 0x37ccecu: goto label_37ccec;
        case 0x37ccf0u: goto label_37ccf0;
        case 0x37ccf4u: goto label_37ccf4;
        case 0x37ccf8u: goto label_37ccf8;
        case 0x37ccfcu: goto label_37ccfc;
        case 0x37cd00u: goto label_37cd00;
        case 0x37cd04u: goto label_37cd04;
        case 0x37cd08u: goto label_37cd08;
        case 0x37cd0cu: goto label_37cd0c;
        case 0x37cd10u: goto label_37cd10;
        case 0x37cd14u: goto label_37cd14;
        case 0x37cd18u: goto label_37cd18;
        case 0x37cd1cu: goto label_37cd1c;
        case 0x37cd20u: goto label_37cd20;
        case 0x37cd24u: goto label_37cd24;
        case 0x37cd28u: goto label_37cd28;
        case 0x37cd2cu: goto label_37cd2c;
        case 0x37cd30u: goto label_37cd30;
        case 0x37cd34u: goto label_37cd34;
        case 0x37cd38u: goto label_37cd38;
        case 0x37cd3cu: goto label_37cd3c;
        case 0x37cd40u: goto label_37cd40;
        case 0x37cd44u: goto label_37cd44;
        case 0x37cd48u: goto label_37cd48;
        case 0x37cd4cu: goto label_37cd4c;
        case 0x37cd50u: goto label_37cd50;
        case 0x37cd54u: goto label_37cd54;
        case 0x37cd58u: goto label_37cd58;
        case 0x37cd5cu: goto label_37cd5c;
        case 0x37cd60u: goto label_37cd60;
        case 0x37cd64u: goto label_37cd64;
        case 0x37cd68u: goto label_37cd68;
        case 0x37cd6cu: goto label_37cd6c;
        case 0x37cd70u: goto label_37cd70;
        case 0x37cd74u: goto label_37cd74;
        case 0x37cd78u: goto label_37cd78;
        case 0x37cd7cu: goto label_37cd7c;
        case 0x37cd80u: goto label_37cd80;
        case 0x37cd84u: goto label_37cd84;
        case 0x37cd88u: goto label_37cd88;
        case 0x37cd8cu: goto label_37cd8c;
        case 0x37cd90u: goto label_37cd90;
        case 0x37cd94u: goto label_37cd94;
        case 0x37cd98u: goto label_37cd98;
        case 0x37cd9cu: goto label_37cd9c;
        case 0x37cda0u: goto label_37cda0;
        case 0x37cda4u: goto label_37cda4;
        case 0x37cda8u: goto label_37cda8;
        case 0x37cdacu: goto label_37cdac;
        case 0x37cdb0u: goto label_37cdb0;
        case 0x37cdb4u: goto label_37cdb4;
        case 0x37cdb8u: goto label_37cdb8;
        case 0x37cdbcu: goto label_37cdbc;
        case 0x37cdc0u: goto label_37cdc0;
        case 0x37cdc4u: goto label_37cdc4;
        case 0x37cdc8u: goto label_37cdc8;
        case 0x37cdccu: goto label_37cdcc;
        case 0x37cdd0u: goto label_37cdd0;
        case 0x37cdd4u: goto label_37cdd4;
        case 0x37cdd8u: goto label_37cdd8;
        case 0x37cddcu: goto label_37cddc;
        case 0x37cde0u: goto label_37cde0;
        case 0x37cde4u: goto label_37cde4;
        case 0x37cde8u: goto label_37cde8;
        case 0x37cdecu: goto label_37cdec;
        case 0x37cdf0u: goto label_37cdf0;
        case 0x37cdf4u: goto label_37cdf4;
        case 0x37cdf8u: goto label_37cdf8;
        case 0x37cdfcu: goto label_37cdfc;
        case 0x37ce00u: goto label_37ce00;
        case 0x37ce04u: goto label_37ce04;
        case 0x37ce08u: goto label_37ce08;
        case 0x37ce0cu: goto label_37ce0c;
        case 0x37ce10u: goto label_37ce10;
        case 0x37ce14u: goto label_37ce14;
        case 0x37ce18u: goto label_37ce18;
        case 0x37ce1cu: goto label_37ce1c;
        case 0x37ce20u: goto label_37ce20;
        case 0x37ce24u: goto label_37ce24;
        case 0x37ce28u: goto label_37ce28;
        case 0x37ce2cu: goto label_37ce2c;
        case 0x37ce30u: goto label_37ce30;
        case 0x37ce34u: goto label_37ce34;
        case 0x37ce38u: goto label_37ce38;
        case 0x37ce3cu: goto label_37ce3c;
        case 0x37ce40u: goto label_37ce40;
        case 0x37ce44u: goto label_37ce44;
        case 0x37ce48u: goto label_37ce48;
        case 0x37ce4cu: goto label_37ce4c;
        case 0x37ce50u: goto label_37ce50;
        case 0x37ce54u: goto label_37ce54;
        case 0x37ce58u: goto label_37ce58;
        case 0x37ce5cu: goto label_37ce5c;
        case 0x37ce60u: goto label_37ce60;
        case 0x37ce64u: goto label_37ce64;
        case 0x37ce68u: goto label_37ce68;
        case 0x37ce6cu: goto label_37ce6c;
        case 0x37ce70u: goto label_37ce70;
        case 0x37ce74u: goto label_37ce74;
        case 0x37ce78u: goto label_37ce78;
        case 0x37ce7cu: goto label_37ce7c;
        case 0x37ce80u: goto label_37ce80;
        case 0x37ce84u: goto label_37ce84;
        case 0x37ce88u: goto label_37ce88;
        case 0x37ce8cu: goto label_37ce8c;
        case 0x37ce90u: goto label_37ce90;
        case 0x37ce94u: goto label_37ce94;
        case 0x37ce98u: goto label_37ce98;
        case 0x37ce9cu: goto label_37ce9c;
        case 0x37cea0u: goto label_37cea0;
        case 0x37cea4u: goto label_37cea4;
        case 0x37cea8u: goto label_37cea8;
        case 0x37ceacu: goto label_37ceac;
        case 0x37ceb0u: goto label_37ceb0;
        case 0x37ceb4u: goto label_37ceb4;
        case 0x37ceb8u: goto label_37ceb8;
        case 0x37cebcu: goto label_37cebc;
        case 0x37cec0u: goto label_37cec0;
        case 0x37cec4u: goto label_37cec4;
        case 0x37cec8u: goto label_37cec8;
        case 0x37ceccu: goto label_37cecc;
        case 0x37ced0u: goto label_37ced0;
        case 0x37ced4u: goto label_37ced4;
        case 0x37ced8u: goto label_37ced8;
        case 0x37cedcu: goto label_37cedc;
        case 0x37cee0u: goto label_37cee0;
        case 0x37cee4u: goto label_37cee4;
        case 0x37cee8u: goto label_37cee8;
        case 0x37ceecu: goto label_37ceec;
        case 0x37cef0u: goto label_37cef0;
        case 0x37cef4u: goto label_37cef4;
        case 0x37cef8u: goto label_37cef8;
        case 0x37cefcu: goto label_37cefc;
        case 0x37cf00u: goto label_37cf00;
        case 0x37cf04u: goto label_37cf04;
        case 0x37cf08u: goto label_37cf08;
        case 0x37cf0cu: goto label_37cf0c;
        case 0x37cf10u: goto label_37cf10;
        case 0x37cf14u: goto label_37cf14;
        case 0x37cf18u: goto label_37cf18;
        case 0x37cf1cu: goto label_37cf1c;
        case 0x37cf20u: goto label_37cf20;
        case 0x37cf24u: goto label_37cf24;
        case 0x37cf28u: goto label_37cf28;
        case 0x37cf2cu: goto label_37cf2c;
        case 0x37cf30u: goto label_37cf30;
        case 0x37cf34u: goto label_37cf34;
        case 0x37cf38u: goto label_37cf38;
        case 0x37cf3cu: goto label_37cf3c;
        case 0x37cf40u: goto label_37cf40;
        case 0x37cf44u: goto label_37cf44;
        case 0x37cf48u: goto label_37cf48;
        case 0x37cf4cu: goto label_37cf4c;
        case 0x37cf50u: goto label_37cf50;
        case 0x37cf54u: goto label_37cf54;
        case 0x37cf58u: goto label_37cf58;
        case 0x37cf5cu: goto label_37cf5c;
        case 0x37cf60u: goto label_37cf60;
        case 0x37cf64u: goto label_37cf64;
        case 0x37cf68u: goto label_37cf68;
        case 0x37cf6cu: goto label_37cf6c;
        case 0x37cf70u: goto label_37cf70;
        case 0x37cf74u: goto label_37cf74;
        case 0x37cf78u: goto label_37cf78;
        case 0x37cf7cu: goto label_37cf7c;
        case 0x37cf80u: goto label_37cf80;
        case 0x37cf84u: goto label_37cf84;
        case 0x37cf88u: goto label_37cf88;
        case 0x37cf8cu: goto label_37cf8c;
        case 0x37cf90u: goto label_37cf90;
        case 0x37cf94u: goto label_37cf94;
        case 0x37cf98u: goto label_37cf98;
        case 0x37cf9cu: goto label_37cf9c;
        case 0x37cfa0u: goto label_37cfa0;
        case 0x37cfa4u: goto label_37cfa4;
        case 0x37cfa8u: goto label_37cfa8;
        case 0x37cfacu: goto label_37cfac;
        case 0x37cfb0u: goto label_37cfb0;
        case 0x37cfb4u: goto label_37cfb4;
        case 0x37cfb8u: goto label_37cfb8;
        case 0x37cfbcu: goto label_37cfbc;
        case 0x37cfc0u: goto label_37cfc0;
        case 0x37cfc4u: goto label_37cfc4;
        case 0x37cfc8u: goto label_37cfc8;
        case 0x37cfccu: goto label_37cfcc;
        default: break;
    }

    ctx->pc = 0x37c0a0u;

label_37c0a0:
    // 0x37c0a0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x37c0a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_37c0a4:
    // 0x37c0a4: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x37c0a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_37c0a8:
    // 0x37c0a8: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x37c0a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_37c0ac:
    // 0x37c0ac: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x37c0acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_37c0b0:
    // 0x37c0b0: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x37c0b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_37c0b4:
    // 0x37c0b4: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x37c0b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_37c0b8:
    // 0x37c0b8: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x37c0b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_37c0bc:
    // 0x37c0bc: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x37c0bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_37c0c0:
    // 0x37c0c0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x37c0c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_37c0c4:
    // 0x37c0c4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x37c0c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_37c0c8:
    // 0x37c0c8: 0xc10480a  jal         func_412028
label_37c0cc:
    if (ctx->pc == 0x37C0CCu) {
        ctx->pc = 0x37C0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C0C8u;
        // 0x37c0cc: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37C0D0u;
        goto label_37c0d0;
    }
    ctx->pc = 0x37C0C8u;
    SET_GPR_U32(ctx, 31, 0x37C0D0u);
    ctx->pc = 0x37C0CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C0C8u;
    // 0x37c0cc: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412028u, 0x37C0C8u, 0x37C0D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C0D0u;
label_37c0d0:
    // 0x37c0d0: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0x37c0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_37c0d4:
    // 0x37c0d4: 0x1443002f  bne         $v0, $v1, . + 4 + (0x2F << 2)
label_37c0d8:
    if (ctx->pc == 0x37C0D8u) {
        ctx->pc = 0x37C0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C0D4u;
        // 0x37c0d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37C0DCu;
        goto label_37c0dc;
    }
    ctx->pc = 0x37C0D4u;
    {
        const bool branch_taken_0x37c0d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x37C0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C0D4u;
        // 0x37c0d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37c0d4) {
            ctx->pc = 0x37C194u;
            goto label_37c194;
        }
    }
    ctx->pc = 0x37C0DCu;
label_37c0dc:
    // 0x37c0dc: 0x8fb30020  lw          $s3, 0x20($sp)
    ctx->pc = 0x37c0dcu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_37c0e0:
    // 0x37c0e0: 0x2415000c  addiu       $s5, $zero, 0xC
    ctx->pc = 0x37c0e0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_37c0e4:
    // 0x37c0e4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x37c0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_37c0e8:
    // 0x37c0e8: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x37c0e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_37c0ec:
    // 0x37c0ec: 0x2758018  mult        $s0, $s3, $s5
    ctx->pc = 0x37c0ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
label_37c0f0:
    // 0x37c0f0: 0x2452e880  addiu       $s2, $v0, -0x1780
    ctx->pc = 0x37c0f0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_37c0f4:
    // 0x37c0f4: 0x8e420108  lw          $v0, 0x108($s2)
    ctx->pc = 0x37c0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 264)));
label_37c0f8:
    // 0x37c0f8: 0x34a50102  ori         $a1, $a1, 0x102
    ctx->pc = 0x37c0f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)258);
label_37c0fc:
    // 0x37c0fc: 0x40f809  jalr        $v0
label_37c100:
    if (ctx->pc == 0x37C100u) {
        ctx->pc = 0x37C100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C0FCu;
        // 0x37c100: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37C104u;
        goto label_37c104;
    }
    ctx->pc = 0x37C0FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x37C104u);
        ctx->pc = 0x37C100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C0FCu;
        // 0x37c100: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37C0FCu, 0x37C104u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x37C104u;
label_37c104:
    // 0x37c104: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x37c104u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_37c108:
    // 0x37c108: 0x1620000d  bnez        $s1, . + 4 + (0xD << 2)
label_37c10c:
    if (ctx->pc == 0x37C10Cu) {
        ctx->pc = 0x37C10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C108u;
        // 0x37c10c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37C110u;
        goto label_37c110;
    }
    ctx->pc = 0x37C108u;
    {
        const bool branch_taken_0x37c108 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x37C10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C108u;
        // 0x37c10c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37c108) {
            ctx->pc = 0x37C140u;
            goto label_37c140;
        }
    }
    ctx->pc = 0x37C110u;
label_37c110:
    // 0x37c110: 0x24020102  addiu       $v0, $zero, 0x102
    ctx->pc = 0x37c110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 258));
label_37c114:
    // 0x37c114: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x37c114u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_37c118:
    // 0x37c118: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x37c118u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
label_37c11c:
    // 0x37c11c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x37c11cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_37c120:
    // 0x37c120: 0xc1035f6  jal         func_40D7D8
label_37c124:
    if (ctx->pc == 0x37C124u) {
        ctx->pc = 0x37C124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C120u;
        // 0x37c124: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        ctx->pc = 0x37C128u;
        goto label_37c128;
    }
    ctx->pc = 0x37C120u;
    SET_GPR_U32(ctx, 31, 0x37C128u);
    ctx->pc = 0x37C124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C120u;
    // 0x37c124: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x37C120u, 0x37C128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C128u;
label_37c128:
    // 0x37c128: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x37c128u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
label_37c12c:
    // 0x37c12c: 0xc103628  jal         func_40D8A0
label_37c130:
    if (ctx->pc == 0x37C130u) {
        ctx->pc = 0x37C130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C12Cu;
        // 0x37c130: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37C134u;
        goto label_37c134;
    }
    ctx->pc = 0x37C12Cu;
    SET_GPR_U32(ctx, 31, 0x37C134u);
    ctx->pc = 0x37C130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C12Cu;
    // 0x37c130: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x37C12Cu, 0x37C134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C134u;
label_37c134:
    // 0x37c134: 0x10000017  b           . + 4 + (0x17 << 2)
label_37c138:
    if (ctx->pc == 0x37C138u) {
        ctx->pc = 0x37C138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C134u;
        // 0x37c138: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37C13Cu;
        goto label_37c13c;
    }
    ctx->pc = 0x37C134u;
    {
        const bool branch_taken_0x37c134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37C138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C134u;
        // 0x37c138: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37c134) {
            ctx->pc = 0x37C194u;
            goto label_37c194;
        }
    }
    ctx->pc = 0x37C13Cu;
label_37c13c:
    // 0x37c13c: 0x0  nop
    ctx->pc = 0x37c13cu;
    // NOP
label_37c140:
    // 0x37c140: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x37c140u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_37c144:
    // 0x37c144: 0xc103454  jal         func_40D150
label_37c148:
    if (ctx->pc == 0x37C148u) {
        ctx->pc = 0x37C148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C144u;
        // 0x37c148: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37C14Cu;
        goto label_37c14c;
    }
    ctx->pc = 0x37C144u;
    SET_GPR_U32(ctx, 31, 0x37C14Cu);
    ctx->pc = 0x37C148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C144u;
    // 0x37c148: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D150u, 0x37C144u, 0x37C14Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C14Cu;
label_37c14c:
    // 0x37c14c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_37c150:
    if (ctx->pc == 0x37C150u) {
        ctx->pc = 0x37C150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C14Cu;
        // 0x37c150: 0x8fa50024  lw          $a1, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37C154u;
        goto label_37c154;
    }
    ctx->pc = 0x37C14Cu;
    {
        const bool branch_taken_0x37c14c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37C150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C14Cu;
        // 0x37c150: 0x8fa50024  lw          $a1, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37c14c) {
            ctx->pc = 0x37C190u;
            goto label_37c190;
        }
    }
    ctx->pc = 0x37C154u;
label_37c154:
    // 0x37c154: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x37c154u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_37c158:
    // 0x37c158: 0xc0df3f4  jal         func_37CFD0
label_37c15c:
    if (ctx->pc == 0x37C15Cu) {
        ctx->pc = 0x37C15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C158u;
        // 0x37c15c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37C160u;
        goto label_37c160;
    }
    ctx->pc = 0x37C158u;
    SET_GPR_U32(ctx, 31, 0x37C160u);
    ctx->pc = 0x37C15Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C158u;
    // 0x37c15c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37CFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37CFD0u, 0x37C158u, 0x37C160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C160u;
label_37c160:
    // 0x37c160: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x37c160u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_37c164:
    // 0x37c164: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x37c164u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_37c168:
    // 0x37c168: 0x8e4200d0  lw          $v0, 0xD0($s2)
    ctx->pc = 0x37c168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 208)));
label_37c16c:
    // 0x37c16c: 0x26040018  addiu       $a0, $s0, 0x18
    ctx->pc = 0x37c16cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
label_37c170:
    // 0x37c170: 0x40f809  jalr        $v0
label_37c174:
    if (ctx->pc == 0x37C174u) {
        ctx->pc = 0x37C174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C170u;
        // 0x37c174: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37C178u;
        goto label_37c178;
    }
    ctx->pc = 0x37C170u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x37C178u);
        ctx->pc = 0x37C174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C170u;
        // 0x37c174: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37C170u, 0x37C178u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x37C178u;
label_37c178:
    // 0x37c178: 0xa2150000  sb          $s5, 0x0($s0)
    ctx->pc = 0x37c178u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 21));
label_37c17c:
    // 0x37c17c: 0x8e42010c  lw          $v0, 0x10C($s2)
    ctx->pc = 0x37c17cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 268)));
label_37c180:
    // 0x37c180: 0x40f809  jalr        $v0
label_37c184:
    if (ctx->pc == 0x37C184u) {
        ctx->pc = 0x37C184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C180u;
        // 0x37c184: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37C188u;
        goto label_37c188;
    }
    ctx->pc = 0x37C180u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x37C188u);
        ctx->pc = 0x37C184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C180u;
        // 0x37c184: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37C180u, 0x37C188u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x37C188u;
label_37c188:
    // 0x37c188: 0x10000002  b           . + 4 + (0x2 << 2)
label_37c18c:
    if (ctx->pc == 0x37C18Cu) {
        ctx->pc = 0x37C18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C188u;
        // 0x37c18c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37C190u;
        goto label_37c190;
    }
    ctx->pc = 0x37C188u;
    {
        const bool branch_taken_0x37c188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37C18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C188u;
        // 0x37c18c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37c188) {
            ctx->pc = 0x37C194u;
            goto label_37c194;
        }
    }
    ctx->pc = 0x37C190u;
label_37c190:
    // 0x37c190: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x37c190u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37c194:
    // 0x37c194: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x37c194u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_37c198:
    // 0x37c198: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x37c198u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_37c19c:
    // 0x37c19c: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x37c19cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_37c1a0:
    // 0x37c1a0: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x37c1a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_37c1a4:
    // 0x37c1a4: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x37c1a4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_37c1a8:
    // 0x37c1a8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x37c1a8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_37c1ac:
    // 0x37c1ac: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x37c1acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_37c1b0:
    // 0x37c1b0: 0x3e00008  jr          $ra
label_37c1b4:
    if (ctx->pc == 0x37C1B4u) {
        ctx->pc = 0x37C1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C1B0u;
        // 0x37c1b4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37C1B8u;
        goto label_37c1b8;
    }
    ctx->pc = 0x37C1B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37C1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C1B0u;
        // 0x37c1b4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37C1B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37C1B8u;
label_37c1b8:
    // 0x37c1b8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x37c1b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_37c1bc:
    // 0x37c1bc: 0x24890038  addiu       $t1, $a0, 0x38
    ctx->pc = 0x37c1bcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 56));
label_37c1c0:
    // 0x37c1c0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x37c1c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_37c1c4:
    // 0x37c1c4: 0x46006305  abs.s       $f12, $f12
    ctx->pc = 0x37c1c4u;
    ctx->f[12] = FPU_ABS_S(ctx->f[12]);
label_37c1c8:
    // 0x37c1c8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x37c1c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_37c1cc:
    // 0x37c1cc: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x37c1ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_37c1d0:
    // 0x37c1d0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x37c1d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_37c1d4:
    // 0x37c1d4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x37c1d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_37c1d8:
    // 0x37c1d8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x37c1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_37c1dc:
    // 0x37c1dc: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x37c1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_37c1e0:
    // 0x37c1e0: 0x14620016  bne         $v1, $v0, . + 4 + (0x16 << 2)
label_37c1e4:
    if (ctx->pc == 0x37C1E4u) {
        ctx->pc = 0x37C1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C1E0u;
        // 0x37c1e4: 0x8c880008  lw          $t0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37C1E8u;
        goto label_37c1e8;
    }
    ctx->pc = 0x37C1E0u;
    {
        const bool branch_taken_0x37c1e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x37C1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C1E0u;
        // 0x37c1e4: 0x8c880008  lw          $t0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37c1e0) {
            ctx->pc = 0x37C23Cu;
            goto label_37c23c;
        }
    }
    ctx->pc = 0x37C1E8u;
label_37c1e8:
    // 0x37c1e8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x37c1e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_37c1ec:
    // 0x37c1ec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x37c1ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_37c1f0:
    // 0x37c1f0: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x37c1f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_37c1f4:
    // 0x37c1f4: 0x0  nop
    ctx->pc = 0x37c1f4u;
    // NOP
label_37c1f8:
    // 0x37c1f8: 0x45000011  bc1f        . + 4 + (0x11 << 2)
label_37c1fc:
    if (ctx->pc == 0x37C1FCu) {
        ctx->pc = 0x37C1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C1F8u;
        // 0x37c1fc: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37C200u;
        goto label_37c200;
    }
    ctx->pc = 0x37C1F8u;
    {
        const bool branch_taken_0x37c1f8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x37C1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C1F8u;
        // 0x37c1fc: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37c1f8) {
            ctx->pc = 0x37C240u;
            goto label_37c240;
        }
    }
    ctx->pc = 0x37C200u;
label_37c200:
    // 0x37c200: 0x46006024  .word       0x46006024                   # cvt.w.s     $f0, $f12 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x37c200u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[12]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_37c204:
    // 0x37c204: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x37c204u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_37c208:
    // 0x37c208: 0x0  nop
    ctx->pc = 0x37c208u;
    // NOP
label_37c20c:
    // 0x37c20c: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
label_37c210:
    if (ctx->pc == 0x37C210u) {
        ctx->pc = 0x37C210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C20Cu;
        // 0x37c210: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37C214u;
        goto label_37c214;
    }
    ctx->pc = 0x37C20Cu;
    {
        const bool branch_taken_0x37c20c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x37C210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C20Cu;
        // 0x37c210: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37c20c) {
            ctx->pc = 0x37C224u;
            goto label_37c224;
        }
    }
    ctx->pc = 0x37C214u;
label_37c214:
    // 0x37c214: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x37c214u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_37c218:
    // 0x37c218: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x37c218u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_37c21c:
    // 0x37c21c: 0x10000007  b           . + 4 + (0x7 << 2)
label_37c220:
    if (ctx->pc == 0x37C220u) {
        ctx->pc = 0x37C220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C21Cu;
        // 0x37c220: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x37C224u;
        goto label_37c224;
    }
    ctx->pc = 0x37C21Cu;
    {
        const bool branch_taken_0x37c21c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37C220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C21Cu;
        // 0x37c220: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x37c21c) {
            ctx->pc = 0x37C23Cu;
            goto label_37c23c;
        }
    }
    ctx->pc = 0x37C224u;
label_37c224:
    // 0x37c224: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x37c224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_37c228:
    // 0x37c228: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x37c228u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_37c22c:
    // 0x37c22c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x37c22cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_37c230:
    // 0x37c230: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x37c230u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_37c234:
    // 0x37c234: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x37c234u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_37c238:
    // 0x37c238: 0x46006301  sub.s       $f12, $f12, $f0
    ctx->pc = 0x37c238u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
label_37c23c:
    // 0x37c23c: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x37c23cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_37c240:
    // 0x37c240: 0x10a2001f  beq         $a1, $v0, . + 4 + (0x1F << 2)
label_37c244:
    if (ctx->pc == 0x37C244u) {
        ctx->pc = 0x37C244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C240u;
        // 0x37c244: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37C248u;
        goto label_37c248;
    }
    ctx->pc = 0x37C240u;
    {
        const bool branch_taken_0x37c240 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x37C244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C240u;
        // 0x37c244: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37c240) {
            ctx->pc = 0x37C2C0u;
            goto label_37c2c0;
        }
    }
    ctx->pc = 0x37C248u;
label_37c248:
    // 0x37c248: 0x54a20015  bnel        $a1, $v0, . + 4 + (0x15 << 2)
label_37c24c:
    if (ctx->pc == 0x37C24Cu) {
        ctx->pc = 0x37C24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C248u;
        // 0x37c24c: 0x24020102  addiu       $v0, $zero, 0x102 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 258));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37C250u;
        goto label_37c250;
    }
    ctx->pc = 0x37C248u;
    {
        const bool branch_taken_0x37c248 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x37c248) {
            ctx->pc = 0x37C24Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37C248u;
            // 0x37c24c: 0x24020102  addiu       $v0, $zero, 0x102 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 258));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37C2A0u;
            goto label_37c2a0;
        }
    }
    ctx->pc = 0x37C250u;
label_37c250:
    // 0x37c250: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x37c250u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_37c254:
    // 0x37c254: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x37c254u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_37c258:
    // 0x37c258: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x37c258u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_37c25c:
    // 0x37c25c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_37c260:
    if (ctx->pc == 0x37C260u) {
        ctx->pc = 0x37C264u;
        goto label_37c264;
    }
    ctx->pc = 0x37C25Cu;
    {
        const bool branch_taken_0x37c25c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x37c25c) {
            ctx->pc = 0x37C270u;
            goto label_37c270;
        }
    }
    ctx->pc = 0x37C264u;
label_37c264:
    // 0x37c264: 0x460c6000  add.s       $f0, $f12, $f12
    ctx->pc = 0x37c264u;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
label_37c268:
    // 0x37c268: 0x10000015  b           . + 4 + (0x15 << 2)
label_37c26c:
    if (ctx->pc == 0x37C26Cu) {
        ctx->pc = 0x37C26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C268u;
        // 0x37c26c: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x37C270u;
        goto label_37c270;
    }
    ctx->pc = 0x37C268u;
    {
        const bool branch_taken_0x37c268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37C26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C268u;
        // 0x37c26c: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x37c268) {
            ctx->pc = 0x37C2C0u;
            goto label_37c2c0;
        }
    }
    ctx->pc = 0x37C270u;
label_37c270:
    // 0x37c270: 0x3c01c000  lui         $at, 0xC000
    ctx->pc = 0x37c270u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49152 << 16));
label_37c274:
    // 0x37c274: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x37c274u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_37c278:
    // 0x37c278: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x37c278u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_37c27c:
    // 0x37c27c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x37c27cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_37c280:
    // 0x37c280: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x37c280u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
label_37c284:
    // 0x37c284: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x37c284u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
label_37c288:
    // 0x37c288: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x37c288u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_37c28c:
    // 0x37c28c: 0x46016042  mul.s       $f1, $f12, $f1
    ctx->pc = 0x37c28cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
label_37c290:
    // 0x37c290: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x37c290u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
label_37c294:
    // 0x37c294: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x37c294u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_37c298:
    // 0x37c298: 0x10000009  b           . + 4 + (0x9 << 2)
label_37c29c:
    if (ctx->pc == 0x37C29Cu) {
        ctx->pc = 0x37C29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C298u;
        // 0x37c29c: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x37C2A0u;
        goto label_37c2a0;
    }
    ctx->pc = 0x37C298u;
    {
        const bool branch_taken_0x37c298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37C29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C298u;
        // 0x37c29c: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x37c298) {
            ctx->pc = 0x37C2C0u;
            goto label_37c2c0;
        }
    }
    ctx->pc = 0x37C2A0u;
label_37c2a0:
    // 0x37c2a0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x37c2a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_37c2a4:
    // 0x37c2a4: 0xc1035f6  jal         func_40D7D8
label_37c2a8:
    if (ctx->pc == 0x37C2A8u) {
        ctx->pc = 0x37C2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C2A4u;
        // 0x37c2a8: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37C2ACu;
        goto label_37c2ac;
    }
    ctx->pc = 0x37C2A4u;
    SET_GPR_U32(ctx, 31, 0x37C2ACu);
    ctx->pc = 0x37C2A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C2A4u;
    // 0x37c2a8: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x37C2A4u, 0x37C2ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C2ACu;
label_37c2ac:
    // 0x37c2ac: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x37c2acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_37c2b0:
    // 0x37c2b0: 0xc103628  jal         func_40D8A0
label_37c2b4:
    if (ctx->pc == 0x37C2B4u) {
        ctx->pc = 0x37C2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C2B0u;
        // 0x37c2b4: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37C2B8u;
        goto label_37c2b8;
    }
    ctx->pc = 0x37C2B0u;
    SET_GPR_U32(ctx, 31, 0x37C2B8u);
    ctx->pc = 0x37C2B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C2B0u;
    // 0x37c2b4: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x37C2B0u, 0x37C2B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C2B8u;
label_37c2b8:
    // 0x37c2b8: 0x100000c4  b           . + 4 + (0xC4 << 2)
label_37c2bc:
    if (ctx->pc == 0x37C2BCu) {
        ctx->pc = 0x37C2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C2B8u;
        // 0x37c2bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37C2C0u;
        goto label_37c2c0;
    }
    ctx->pc = 0x37C2B8u;
    {
        const bool branch_taken_0x37c2b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37C2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C2B8u;
        // 0x37c2bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37c2b8) {
            ctx->pc = 0x37C5CCu;
            goto label_37c5cc;
        }
    }
    ctx->pc = 0x37C2C0u;
label_37c2c0:
    // 0x37c2c0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x37c2c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_37c2c4:
    // 0x37c2c4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x37c2c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_37c2c8:
    // 0x37c2c8: 0x46006032  c.eq.s      $f12, $f0
    ctx->pc = 0x37c2c8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_37c2cc:
    // 0x37c2cc: 0x0  nop
    ctx->pc = 0x37c2ccu;
    // NOP
label_37c2d0:
    // 0x37c2d0: 0x45010013  bc1t        . + 4 + (0x13 << 2)
label_37c2d4:
    if (ctx->pc == 0x37C2D4u) {
        ctx->pc = 0x37C2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C2D0u;
        // 0x37c2d4: 0x2507fffc  addiu       $a3, $t0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37C2D8u;
        goto label_37c2d8;
    }
    ctx->pc = 0x37C2D0u;
    {
        const bool branch_taken_0x37c2d0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x37C2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C2D0u;
        // 0x37c2d4: 0x2507fffc  addiu       $a3, $t0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37c2d0) {
            ctx->pc = 0x37C320u;
            goto label_37c320;
        }
    }
    ctx->pc = 0x37C2D8u;
label_37c2d8:
    // 0x37c2d8: 0x2502fffd  addiu       $v0, $t0, -0x3
    ctx->pc = 0x37c2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967293));
label_37c2dc:
    // 0x37c2dc: 0x3c014380  lui         $at, 0x4380
    ctx->pc = 0x37c2dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17280 << 16));
label_37c2e0:
    // 0x37c2e0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x37c2e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_37c2e4:
    // 0x37c2e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x37c2e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_37c2e8:
    // 0x37c2e8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x37c2e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_37c2ec:
    // 0x37c2ec: 0x460c0082  mul.s       $f2, $f0, $f12
    ctx->pc = 0x37c2ecu;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
label_37c2f0:
    // 0x37c2f0: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x37c2f0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_37c2f4:
    // 0x37c2f4: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x37c2f4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
label_37c2f8:
    // 0x37c2f8: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x37c2f8u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_37c2fc:
    // 0x37c2fc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x37c2fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_37c300:
    // 0x37c300: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x37c300u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_37c304:
    // 0x37c304: 0x46010082  mul.s       $f2, $f0, $f1
    ctx->pc = 0x37c304u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_37c308:
    // 0x37c308: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x37c308u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_37c30c:
    // 0x37c30c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x37c30cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_37c310:
    // 0x37c310: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x37c310u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_37c314:
    // 0x37c314: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x37c314u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_37c318:
    // 0x37c318: 0x10000003  b           . + 4 + (0x3 << 2)
label_37c31c:
    if (ctx->pc == 0x37C31Cu) {
        ctx->pc = 0x37C31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C318u;
        // 0x37c31c: 0x46001301  sub.s       $f12, $f2, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x37C320u;
        goto label_37c320;
    }
    ctx->pc = 0x37C318u;
    {
        const bool branch_taken_0x37c318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37C31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C318u;
        // 0x37c31c: 0x46001301  sub.s       $f12, $f2, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x37c318) {
            ctx->pc = 0x37C328u;
            goto label_37c328;
        }
    }
    ctx->pc = 0x37C320u;
label_37c320:
    // 0x37c320: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x37c320u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_37c324:
    // 0x37c324: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x37c324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_37c328:
    // 0x37c328: 0x24080  sll         $t0, $v0, 2
    ctx->pc = 0x37c328u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_37c32c:
    // 0x37c32c: 0x8f84a8c4  lw          $a0, -0x573C($gp)
    ctx->pc = 0x37c32cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944964)));
label_37c330:
    // 0x37c330: 0x8f85a8c8  lw          $a1, -0x5738($gp)
    ctx->pc = 0x37c330u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944968)));
label_37c334:
    // 0x37c334: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x37c334u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_37c338:
    // 0x37c338: 0x8f82a8c0  lw          $v0, -0x5740($gp)
    ctx->pc = 0x37c338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944960)));
label_37c33c:
    // 0x37c33c: 0x1042021  addu        $a0, $t0, $a0
    ctx->pc = 0x37c33cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
label_37c340:
    // 0x37c340: 0x8f83a8bc  lw          $v1, -0x5744($gp)
    ctx->pc = 0x37c340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944956)));
label_37c344:
    // 0x37c344: 0x1052821  addu        $a1, $t0, $a1
    ctx->pc = 0x37c344u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
label_37c348:
    // 0x37c348: 0xc4850000  lwc1        $f5, 0x0($a0)
    ctx->pc = 0x37c348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_37c34c:
    // 0x37c34c: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x37c34cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
label_37c350:
    // 0x37c350: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x37c350u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
label_37c354:
    // 0x37c354: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x37c354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_37c358:
    // 0x37c358: 0xc4a70000  lwc1        $f7, 0x0($a1)
    ctx->pc = 0x37c358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_37c35c:
    // 0x37c35c: 0xe65018  mult        $t2, $a3, $a2
    ctx->pc = 0x37c35cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
label_37c360:
    // 0x37c360: 0xc4460000  lwc1        $f6, 0x0($v0)
    ctx->pc = 0x37c360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_37c364:
    // 0x37c364: 0x46051081  sub.s       $f2, $f2, $f5
    ctx->pc = 0x37c364u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[5]);
label_37c368:
    // 0x37c368: 0xc4640000  lwc1        $f4, 0x0($v1)
    ctx->pc = 0x37c368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_37c36c:
    // 0x37c36c: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x37c36cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_37c370:
    // 0x37c370: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x37c370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_37c374:
    // 0x37c374: 0x46026082  mul.s       $f2, $f12, $f2
    ctx->pc = 0x37c374u;
    ctx->f[2] = FPU_MUL_S(ctx->f[12], ctx->f[2]);
label_37c378:
    // 0x37c378: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x37c378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37c37c:
    // 0x37c37c: 0x46070841  sub.s       $f1, $f1, $f7
    ctx->pc = 0x37c37cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[7]);
label_37c380:
    // 0x37c380: 0x460618c1  sub.s       $f3, $f3, $f6
    ctx->pc = 0x37c380u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[6]);
label_37c384:
    // 0x37c384: 0x1493021  addu        $a2, $t2, $t1
    ctx->pc = 0x37c384u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
label_37c388:
    // 0x37c388: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x37c388u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
label_37c38c:
    // 0x37c38c: 0x24c7000c  addiu       $a3, $a2, 0xC
    ctx->pc = 0x37c38cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
label_37c390:
    // 0x37c390: 0x46016042  mul.s       $f1, $f12, $f1
    ctx->pc = 0x37c390u;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
label_37c394:
    // 0x37c394: 0x24c90018  addiu       $t1, $a2, 0x18
    ctx->pc = 0x37c394u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), 24));
label_37c398:
    // 0x37c398: 0x460360c2  mul.s       $f3, $f12, $f3
    ctx->pc = 0x37c398u;
    ctx->f[3] = FPU_MUL_S(ctx->f[12], ctx->f[3]);
label_37c39c:
    // 0x37c39c: 0x24ca0024  addiu       $t2, $a2, 0x24
    ctx->pc = 0x37c39cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 6), 36));
label_37c3a0:
    // 0x37c3a0: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x37c3a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
label_37c3a4:
    // 0x37c3a4: 0x46022a00  add.s       $f8, $f5, $f2
    ctx->pc = 0x37c3a4u;
    ctx->f[8] = FPU_ADD_S(ctx->f[5], ctx->f[2]);
label_37c3a8:
    // 0x37c3a8: 0x460139c0  add.s       $f7, $f7, $f1
    ctx->pc = 0x37c3a8u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[1]);
label_37c3ac:
    // 0x37c3ac: 0x46033140  add.s       $f5, $f6, $f3
    ctx->pc = 0x37c3acu;
    ctx->f[5] = FPU_ADD_S(ctx->f[6], ctx->f[3]);
label_37c3b0:
    // 0x37c3b0: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x37c3b0u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
label_37c3b4:
    // 0x37c3b4: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x37c3b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_37c3b8:
    // 0x37c3b8: 0x46070842  mul.s       $f1, $f1, $f7
    ctx->pc = 0x37c3b8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[7]);
label_37c3bc:
    // 0x37c3bc: 0xe6210000  swc1        $f1, 0x0($s1)
    ctx->pc = 0x37c3bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_37c3c0:
    // 0x37c3c0: 0xc4c20004  lwc1        $f2, 0x4($a2)
    ctx->pc = 0x37c3c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_37c3c4:
    // 0x37c3c4: 0x46071082  mul.s       $f2, $f2, $f7
    ctx->pc = 0x37c3c4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[7]);
label_37c3c8:
    // 0x37c3c8: 0xe6220004  swc1        $f2, 0x4($s1)
    ctx->pc = 0x37c3c8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_37c3cc:
    // 0x37c3cc: 0xc4c30008  lwc1        $f3, 0x8($a2)
    ctx->pc = 0x37c3ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_37c3d0:
    // 0x37c3d0: 0x460718c2  mul.s       $f3, $f3, $f7
    ctx->pc = 0x37c3d0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[7]);
label_37c3d4:
    // 0x37c3d4: 0xe6230008  swc1        $f3, 0x8($s1)
    ctx->pc = 0x37c3d4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_37c3d8:
    // 0x37c3d8: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x37c3d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37c3dc:
    // 0x37c3dc: 0x46080002  mul.s       $f0, $f0, $f8
    ctx->pc = 0x37c3dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
label_37c3e0:
    // 0x37c3e0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x37c3e0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_37c3e4:
    // 0x37c3e4: 0xe6210000  swc1        $f1, 0x0($s1)
    ctx->pc = 0x37c3e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_37c3e8:
    // 0x37c3e8: 0xc4e00004  lwc1        $f0, 0x4($a3)
    ctx->pc = 0x37c3e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37c3ec:
    // 0x37c3ec: 0x46080002  mul.s       $f0, $f0, $f8
    ctx->pc = 0x37c3ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
label_37c3f0:
    // 0x37c3f0: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x37c3f0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_37c3f4:
    // 0x37c3f4: 0xe6220004  swc1        $f2, 0x4($s1)
    ctx->pc = 0x37c3f4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_37c3f8:
    // 0x37c3f8: 0xc4e00008  lwc1        $f0, 0x8($a3)
    ctx->pc = 0x37c3f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37c3fc:
    // 0x37c3fc: 0x46080002  mul.s       $f0, $f0, $f8
    ctx->pc = 0x37c3fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
label_37c400:
    // 0x37c400: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x37c400u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_37c404:
    // 0x37c404: 0xe6230008  swc1        $f3, 0x8($s1)
    ctx->pc = 0x37c404u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_37c408:
    // 0x37c408: 0xc4c00018  lwc1        $f0, 0x18($a2)
    ctx->pc = 0x37c408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37c40c:
    // 0x37c40c: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x37c40cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
label_37c410:
    // 0x37c410: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x37c410u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_37c414:
    // 0x37c414: 0xe6210000  swc1        $f1, 0x0($s1)
    ctx->pc = 0x37c414u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_37c418:
    // 0x37c418: 0xc5200004  lwc1        $f0, 0x4($t1)
    ctx->pc = 0x37c418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37c41c:
    // 0x37c41c: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x37c41cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
label_37c420:
    // 0x37c420: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x37c420u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_37c424:
    // 0x37c424: 0xe6220004  swc1        $f2, 0x4($s1)
    ctx->pc = 0x37c424u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_37c428:
    // 0x37c428: 0xc5200008  lwc1        $f0, 0x8($t1)
    ctx->pc = 0x37c428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37c42c:
    // 0x37c42c: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x37c42cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
label_37c430:
    // 0x37c430: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x37c430u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_37c434:
    // 0x37c434: 0xe6230008  swc1        $f3, 0x8($s1)
    ctx->pc = 0x37c434u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_37c438:
    // 0x37c438: 0xc4c00024  lwc1        $f0, 0x24($a2)
    ctx->pc = 0x37c438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37c43c:
    // 0x37c43c: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x37c43cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_37c440:
    // 0x37c440: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x37c440u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_37c444:
    // 0x37c444: 0xe6210000  swc1        $f1, 0x0($s1)
    ctx->pc = 0x37c444u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_37c448:
    // 0x37c448: 0xc5400004  lwc1        $f0, 0x4($t2)
    ctx->pc = 0x37c448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37c44c:
    // 0x37c44c: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x37c44cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_37c450:
    // 0x37c450: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x37c450u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_37c454:
    // 0x37c454: 0xe6220004  swc1        $f2, 0x4($s1)
    ctx->pc = 0x37c454u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_37c458:
    // 0x37c458: 0xc5400008  lwc1        $f0, 0x8($t2)
    ctx->pc = 0x37c458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37c45c:
    // 0x37c45c: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x37c45cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_37c460:
    // 0x37c460: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x37c460u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_37c464:
    // 0x37c464: 0x12000058  beqz        $s0, . + 4 + (0x58 << 2)
label_37c468:
    if (ctx->pc == 0x37C468u) {
        ctx->pc = 0x37C468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C464u;
        // 0x37c468: 0xe6230008  swc1        $f3, 0x8($s1) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x37C46Cu;
        goto label_37c46c;
    }
    ctx->pc = 0x37C464u;
    {
        const bool branch_taken_0x37c464 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x37C468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C464u;
        // 0x37c468: 0xe6230008  swc1        $f3, 0x8($s1) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x37c464) {
            ctx->pc = 0x37C5C8u;
            goto label_37c5c8;
        }
    }
    ctx->pc = 0x37C46Cu;
label_37c46c:
    // 0x37c46c: 0x8f83a8d4  lw          $v1, -0x572C($gp)
    ctx->pc = 0x37c46cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944980)));
label_37c470:
    // 0x37c470: 0x8f82a8d8  lw          $v0, -0x5728($gp)
    ctx->pc = 0x37c470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944984)));
label_37c474:
    // 0x37c474: 0x8f84a8d0  lw          $a0, -0x5730($gp)
    ctx->pc = 0x37c474u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944976)));
label_37c478:
    // 0x37c478: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x37c478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
label_37c47c:
    // 0x37c47c: 0x8f85a8cc  lw          $a1, -0x5734($gp)
    ctx->pc = 0x37c47cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944972)));
label_37c480:
    // 0x37c480: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x37c480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
label_37c484:
    // 0x37c484: 0xc4640000  lwc1        $f4, 0x0($v1)
    ctx->pc = 0x37c484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_37c488:
    // 0x37c488: 0x1042021  addu        $a0, $t0, $a0
    ctx->pc = 0x37c488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
label_37c48c:
    // 0x37c48c: 0x1052821  addu        $a1, $t0, $a1
    ctx->pc = 0x37c48cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
label_37c490:
    // 0x37c490: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x37c490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_37c494:
    // 0x37c494: 0xc4470000  lwc1        $f7, 0x0($v0)
    ctx->pc = 0x37c494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_37c498:
    // 0x37c498: 0xc4850000  lwc1        $f5, 0x0($a0)
    ctx->pc = 0x37c498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_37c49c:
    // 0x37c49c: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x37c49cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
label_37c4a0:
    // 0x37c4a0: 0xc4a60000  lwc1        $f6, 0x0($a1)
    ctx->pc = 0x37c4a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_37c4a4:
    // 0x37c4a4: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x37c4a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_37c4a8:
    // 0x37c4a8: 0xc4830004  lwc1        $f3, 0x4($a0)
    ctx->pc = 0x37c4a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_37c4ac:
    // 0x37c4ac: 0x46026082  mul.s       $f2, $f12, $f2
    ctx->pc = 0x37c4acu;
    ctx->f[2] = FPU_MUL_S(ctx->f[12], ctx->f[2]);
label_37c4b0:
    // 0x37c4b0: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x37c4b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37c4b4:
    // 0x37c4b4: 0x46070841  sub.s       $f1, $f1, $f7
    ctx->pc = 0x37c4b4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[7]);
label_37c4b8:
    // 0x37c4b8: 0x460518c1  sub.s       $f3, $f3, $f5
    ctx->pc = 0x37c4b8u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[5]);
label_37c4bc:
    // 0x37c4bc: 0x46060001  sub.s       $f0, $f0, $f6
    ctx->pc = 0x37c4bcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[6]);
label_37c4c0:
    // 0x37c4c0: 0x46016042  mul.s       $f1, $f12, $f1
    ctx->pc = 0x37c4c0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
label_37c4c4:
    // 0x37c4c4: 0x460360c2  mul.s       $f3, $f12, $f3
    ctx->pc = 0x37c4c4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[12], ctx->f[3]);
label_37c4c8:
    // 0x37c4c8: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x37c4c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
label_37c4cc:
    // 0x37c4cc: 0x46022200  add.s       $f8, $f4, $f2
    ctx->pc = 0x37c4ccu;
    ctx->f[8] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
label_37c4d0:
    // 0x37c4d0: 0x460139c0  add.s       $f7, $f7, $f1
    ctx->pc = 0x37c4d0u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[1]);
label_37c4d4:
    // 0x37c4d4: 0x46032940  add.s       $f5, $f5, $f3
    ctx->pc = 0x37c4d4u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[3]);
label_37c4d8:
    // 0x37c4d8: 0x46003100  add.s       $f4, $f6, $f0
    ctx->pc = 0x37c4d8u;
    ctx->f[4] = FPU_ADD_S(ctx->f[6], ctx->f[0]);
label_37c4dc:
    // 0x37c4dc: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x37c4dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_37c4e0:
    // 0x37c4e0: 0x46070842  mul.s       $f1, $f1, $f7
    ctx->pc = 0x37c4e0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[7]);
label_37c4e4:
    // 0x37c4e4: 0xe6010000  swc1        $f1, 0x0($s0)
    ctx->pc = 0x37c4e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_37c4e8:
    // 0x37c4e8: 0xc4c20004  lwc1        $f2, 0x4($a2)
    ctx->pc = 0x37c4e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_37c4ec:
    // 0x37c4ec: 0x46071082  mul.s       $f2, $f2, $f7
    ctx->pc = 0x37c4ecu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[7]);
label_37c4f0:
    // 0x37c4f0: 0xe6020004  swc1        $f2, 0x4($s0)
    ctx->pc = 0x37c4f0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_37c4f4:
    // 0x37c4f4: 0xc4c30008  lwc1        $f3, 0x8($a2)
    ctx->pc = 0x37c4f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_37c4f8:
    // 0x37c4f8: 0x460718c2  mul.s       $f3, $f3, $f7
    ctx->pc = 0x37c4f8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[7]);
label_37c4fc:
    // 0x37c4fc: 0xe6030008  swc1        $f3, 0x8($s0)
    ctx->pc = 0x37c4fcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_37c500:
    // 0x37c500: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x37c500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37c504:
    // 0x37c504: 0x46080002  mul.s       $f0, $f0, $f8
    ctx->pc = 0x37c504u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
label_37c508:
    // 0x37c508: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x37c508u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_37c50c:
    // 0x37c50c: 0xe6010000  swc1        $f1, 0x0($s0)
    ctx->pc = 0x37c50cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_37c510:
    // 0x37c510: 0xc4e00004  lwc1        $f0, 0x4($a3)
    ctx->pc = 0x37c510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37c514:
    // 0x37c514: 0x46080002  mul.s       $f0, $f0, $f8
    ctx->pc = 0x37c514u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
label_37c518:
    // 0x37c518: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x37c518u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_37c51c:
    // 0x37c51c: 0xe6020004  swc1        $f2, 0x4($s0)
    ctx->pc = 0x37c51cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_37c520:
    // 0x37c520: 0xc4e00008  lwc1        $f0, 0x8($a3)
    ctx->pc = 0x37c520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37c524:
    // 0x37c524: 0x46080002  mul.s       $f0, $f0, $f8
    ctx->pc = 0x37c524u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
label_37c528:
    // 0x37c528: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x37c528u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_37c52c:
    // 0x37c52c: 0xe6030008  swc1        $f3, 0x8($s0)
    ctx->pc = 0x37c52cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_37c530:
    // 0x37c530: 0xc4c00018  lwc1        $f0, 0x18($a2)
    ctx->pc = 0x37c530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37c534:
    // 0x37c534: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x37c534u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
label_37c538:
    // 0x37c538: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x37c538u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_37c53c:
    // 0x37c53c: 0xe6010000  swc1        $f1, 0x0($s0)
    ctx->pc = 0x37c53cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_37c540:
    // 0x37c540: 0xc5200004  lwc1        $f0, 0x4($t1)
    ctx->pc = 0x37c540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37c544:
    // 0x37c544: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x37c544u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
label_37c548:
    // 0x37c548: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x37c548u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_37c54c:
    // 0x37c54c: 0xe6020004  swc1        $f2, 0x4($s0)
    ctx->pc = 0x37c54cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_37c550:
    // 0x37c550: 0xc5200008  lwc1        $f0, 0x8($t1)
    ctx->pc = 0x37c550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37c554:
    // 0x37c554: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x37c554u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
label_37c558:
    // 0x37c558: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x37c558u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_37c55c:
    // 0x37c55c: 0xe6030008  swc1        $f3, 0x8($s0)
    ctx->pc = 0x37c55cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_37c560:
    // 0x37c560: 0xc4c00024  lwc1        $f0, 0x24($a2)
    ctx->pc = 0x37c560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37c564:
    // 0x37c564: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x37c564u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_37c568:
    // 0x37c568: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x37c568u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_37c56c:
    // 0x37c56c: 0xe6010000  swc1        $f1, 0x0($s0)
    ctx->pc = 0x37c56cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_37c570:
    // 0x37c570: 0xc5400004  lwc1        $f0, 0x4($t2)
    ctx->pc = 0x37c570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37c574:
    // 0x37c574: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x37c574u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_37c578:
    // 0x37c578: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x37c578u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_37c57c:
    // 0x37c57c: 0xe6020004  swc1        $f2, 0x4($s0)
    ctx->pc = 0x37c57cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_37c580:
    // 0x37c580: 0xc5400008  lwc1        $f0, 0x8($t2)
    ctx->pc = 0x37c580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37c584:
    // 0x37c584: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x37c584u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_37c588:
    // 0x37c588: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x37c588u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_37c58c:
    // 0x37c58c: 0xe6030008  swc1        $f3, 0x8($s0)
    ctx->pc = 0x37c58cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_37c590:
    // 0x37c590: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37c590u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_37c594:
    // 0x37c594: 0xc104da4  jal         func_413690
label_37c598:
    if (ctx->pc == 0x37C598u) {
        ctx->pc = 0x37C598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C594u;
        // 0x37c598: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37C59Cu;
        goto label_37c59c;
    }
    ctx->pc = 0x37C594u;
    SET_GPR_U32(ctx, 31, 0x37C59Cu);
    ctx->pc = 0x37C598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C594u;
    // 0x37c598: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x413690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413690u, 0x37C594u, 0x37C59Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C59Cu;
label_37c59c:
    // 0x37c59c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x37c59cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_37c5a0:
    // 0x37c5a0: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x37c5a0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_37c5a4:
    // 0x37c5a4: 0x0  nop
    ctx->pc = 0x37c5a4u;
    // NOP
label_37c5a8:
    // 0x37c5a8: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_37c5ac:
    if (ctx->pc == 0x37C5ACu) {
        ctx->pc = 0x37C5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C5A8u;
        // 0x37c5ac: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37C5B0u;
        goto label_37c5b0;
    }
    ctx->pc = 0x37C5A8u;
    {
        const bool branch_taken_0x37c5a8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x37C5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C5A8u;
        // 0x37c5ac: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37c5a8) {
            ctx->pc = 0x37C5CCu;
            goto label_37c5cc;
        }
    }
    ctx->pc = 0x37C5B0u;
label_37c5b0:
    // 0x37c5b0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x37c5b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_37c5b4:
    // 0x37c5b4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x37c5b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_37c5b8:
    // 0x37c5b8: 0xe6010008  swc1        $f1, 0x8($s0)
    ctx->pc = 0x37c5b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_37c5bc:
    // 0x37c5bc: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x37c5bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_37c5c0:
    // 0x37c5c0: 0xe6010000  swc1        $f1, 0x0($s0)
    ctx->pc = 0x37c5c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_37c5c4:
    // 0x37c5c4: 0x0  nop
    ctx->pc = 0x37c5c4u;
    // NOP
label_37c5c8:
    // 0x37c5c8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x37c5c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_37c5cc:
    // 0x37c5cc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x37c5ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_37c5d0:
    // 0x37c5d0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x37c5d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_37c5d4:
    // 0x37c5d4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x37c5d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_37c5d8:
    // 0x37c5d8: 0x3e00008  jr          $ra
label_37c5dc:
    if (ctx->pc == 0x37C5DCu) {
        ctx->pc = 0x37C5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C5D8u;
        // 0x37c5dc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37C5E0u;
        goto label_37c5e0;
    }
    ctx->pc = 0x37C5D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37C5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C5D8u;
        // 0x37c5dc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37C5D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37C5E0u;
label_37c5e0:
    // 0x37c5e0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x37c5e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_37c5e4:
    // 0x37c5e4: 0x24880038  addiu       $t0, $a0, 0x38
    ctx->pc = 0x37c5e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 56));
label_37c5e8:
    // 0x37c5e8: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x37c5e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
label_37c5ec:
    // 0x37c5ec: 0x46006305  abs.s       $f12, $f12
    ctx->pc = 0x37c5ecu;
    ctx->f[12] = FPU_ABS_S(ctx->f[12]);
label_37c5f0:
    // 0x37c5f0: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x37c5f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
label_37c5f4:
    // 0x37c5f4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x37c5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_37c5f8:
    // 0x37c5f8: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x37c5f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_37c5fc:
    // 0x37c5fc: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x37c5fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_37c600:
    // 0x37c600: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x37c600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
label_37c604:
    // 0x37c604: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x37c604u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_37c608:
    // 0x37c608: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x37c608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
label_37c60c:
    // 0x37c60c: 0x26b40010  addiu       $s4, $s5, 0x10
    ctx->pc = 0x37c60cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
label_37c610:
    // 0x37c610: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x37c610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
label_37c614:
    // 0x37c614: 0x26b30020  addiu       $s3, $s5, 0x20
    ctx->pc = 0x37c614u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
label_37c618:
    // 0x37c618: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x37c618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_37c61c:
    // 0x37c61c: 0x26b10030  addiu       $s1, $s5, 0x30
    ctx->pc = 0x37c61cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 48));
label_37c620:
    // 0x37c620: 0xe7b600d0  swc1        $f22, 0xD0($sp)
    ctx->pc = 0x37c620u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_37c624:
    // 0x37c624: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x37c624u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_37c628:
    // 0x37c628: 0xe7b500c8  swc1        $f21, 0xC8($sp)
    ctx->pc = 0x37c628u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_37c62c:
    // 0x37c62c: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x37c62cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_37c630:
    // 0x37c630: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x37c630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_37c634:
    // 0x37c634: 0x14620016  bne         $v1, $v0, . + 4 + (0x16 << 2)
label_37c638:
    if (ctx->pc == 0x37C638u) {
        ctx->pc = 0x37C638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C634u;
        // 0x37c638: 0x8c870008  lw          $a3, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37C63Cu;
        goto label_37c63c;
    }
    ctx->pc = 0x37C634u;
    {
        const bool branch_taken_0x37c634 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x37C638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C634u;
        // 0x37c638: 0x8c870008  lw          $a3, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37c634) {
            ctx->pc = 0x37C690u;
            goto label_37c690;
        }
    }
    ctx->pc = 0x37C63Cu;
label_37c63c:
    // 0x37c63c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x37c63cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_37c640:
    // 0x37c640: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x37c640u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_37c644:
    // 0x37c644: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x37c644u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_37c648:
    // 0x37c648: 0x0  nop
    ctx->pc = 0x37c648u;
    // NOP
label_37c64c:
    // 0x37c64c: 0x45000011  bc1f        . + 4 + (0x11 << 2)
label_37c650:
    if (ctx->pc == 0x37C650u) {
        ctx->pc = 0x37C650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C64Cu;
        // 0x37c650: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37C654u;
        goto label_37c654;
    }
    ctx->pc = 0x37C64Cu;
    {
        const bool branch_taken_0x37c64c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x37C650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C64Cu;
        // 0x37c650: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37c64c) {
            ctx->pc = 0x37C694u;
            goto label_37c694;
        }
    }
    ctx->pc = 0x37C654u;
label_37c654:
    // 0x37c654: 0x46006024  .word       0x46006024                   # cvt.w.s     $f0, $f12 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x37c654u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[12]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_37c658:
    // 0x37c658: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x37c658u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_37c65c:
    // 0x37c65c: 0x0  nop
    ctx->pc = 0x37c65cu;
    // NOP
label_37c660:
    // 0x37c660: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
label_37c664:
    if (ctx->pc == 0x37C664u) {
        ctx->pc = 0x37C664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C660u;
        // 0x37c664: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37C668u;
        goto label_37c668;
    }
    ctx->pc = 0x37C660u;
    {
        const bool branch_taken_0x37c660 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x37C664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C660u;
        // 0x37c664: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37c660) {
            ctx->pc = 0x37C678u;
            goto label_37c678;
        }
    }
    ctx->pc = 0x37C668u;
label_37c668:
    // 0x37c668: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x37c668u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_37c66c:
    // 0x37c66c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x37c66cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_37c670:
    // 0x37c670: 0x10000007  b           . + 4 + (0x7 << 2)
label_37c674:
    if (ctx->pc == 0x37C674u) {
        ctx->pc = 0x37C674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C670u;
        // 0x37c674: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x37C678u;
        goto label_37c678;
    }
    ctx->pc = 0x37C670u;
    {
        const bool branch_taken_0x37c670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37C674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C670u;
        // 0x37c674: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x37c670) {
            ctx->pc = 0x37C690u;
            goto label_37c690;
        }
    }
    ctx->pc = 0x37C678u;
label_37c678:
    // 0x37c678: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x37c678u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_37c67c:
    // 0x37c67c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x37c67cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_37c680:
    // 0x37c680: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x37c680u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_37c684:
    // 0x37c684: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x37c684u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_37c688:
    // 0x37c688: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x37c688u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_37c68c:
    // 0x37c68c: 0x46006301  sub.s       $f12, $f12, $f0
    ctx->pc = 0x37c68cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
label_37c690:
    // 0x37c690: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x37c690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_37c694:
    // 0x37c694: 0x10a20022  beq         $a1, $v0, . + 4 + (0x22 << 2)
label_37c698:
    if (ctx->pc == 0x37C698u) {
        ctx->pc = 0x37C698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C694u;
        // 0x37c698: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37C69Cu;
        goto label_37c69c;
    }
    ctx->pc = 0x37C694u;
    {
        const bool branch_taken_0x37c694 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x37C698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C694u;
        // 0x37c698: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37c694) {
            ctx->pc = 0x37C720u;
            goto label_37c720;
        }
    }
    ctx->pc = 0x37C69Cu;
label_37c69c:
    // 0x37c69c: 0x54a20015  bnel        $a1, $v0, . + 4 + (0x15 << 2)
label_37c6a0:
    if (ctx->pc == 0x37C6A0u) {
        ctx->pc = 0x37C6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C69Cu;
        // 0x37c6a0: 0x24020102  addiu       $v0, $zero, 0x102 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 258));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37C6A4u;
        goto label_37c6a4;
    }
    ctx->pc = 0x37C69Cu;
    {
        const bool branch_taken_0x37c69c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x37c69c) {
            ctx->pc = 0x37C6A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37C69Cu;
            // 0x37c6a0: 0x24020102  addiu       $v0, $zero, 0x102 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 258));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37C6F4u;
            goto label_37c6f4;
        }
    }
    ctx->pc = 0x37C6A4u;
label_37c6a4:
    // 0x37c6a4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x37c6a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_37c6a8:
    // 0x37c6a8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x37c6a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_37c6ac:
    // 0x37c6ac: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x37c6acu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_37c6b0:
    // 0x37c6b0: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_37c6b4:
    if (ctx->pc == 0x37C6B4u) {
        ctx->pc = 0x37C6B8u;
        goto label_37c6b8;
    }
    ctx->pc = 0x37C6B0u;
    {
        const bool branch_taken_0x37c6b0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x37c6b0) {
            ctx->pc = 0x37C6C4u;
            goto label_37c6c4;
        }
    }
    ctx->pc = 0x37C6B8u;
label_37c6b8:
    // 0x37c6b8: 0x460c6000  add.s       $f0, $f12, $f12
    ctx->pc = 0x37c6b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
label_37c6bc:
    // 0x37c6bc: 0x10000018  b           . + 4 + (0x18 << 2)
label_37c6c0:
    if (ctx->pc == 0x37C6C0u) {
        ctx->pc = 0x37C6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C6BCu;
        // 0x37c6c0: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x37C6C4u;
        goto label_37c6c4;
    }
    ctx->pc = 0x37C6BCu;
    {
        const bool branch_taken_0x37c6bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37C6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C6BCu;
        // 0x37c6c0: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x37c6bc) {
            ctx->pc = 0x37C720u;
            goto label_37c720;
        }
    }
    ctx->pc = 0x37C6C4u;
label_37c6c4:
    // 0x37c6c4: 0x3c01c000  lui         $at, 0xC000
    ctx->pc = 0x37c6c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49152 << 16));
label_37c6c8:
    // 0x37c6c8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x37c6c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_37c6cc:
    // 0x37c6cc: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x37c6ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_37c6d0:
    // 0x37c6d0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x37c6d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_37c6d4:
    // 0x37c6d4: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x37c6d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
label_37c6d8:
    // 0x37c6d8: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x37c6d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
label_37c6dc:
    // 0x37c6dc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x37c6dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_37c6e0:
    // 0x37c6e0: 0x46016042  mul.s       $f1, $f12, $f1
    ctx->pc = 0x37c6e0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
label_37c6e4:
    // 0x37c6e4: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x37c6e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
label_37c6e8:
    // 0x37c6e8: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x37c6e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_37c6ec:
    // 0x37c6ec: 0x1000000c  b           . + 4 + (0xC << 2)
label_37c6f0:
    if (ctx->pc == 0x37C6F0u) {
        ctx->pc = 0x37C6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C6ECu;
        // 0x37c6f0: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x37C6F4u;
        goto label_37c6f4;
    }
    ctx->pc = 0x37C6ECu;
    {
        const bool branch_taken_0x37c6ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37C6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C6ECu;
        // 0x37c6f0: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x37c6ec) {
            ctx->pc = 0x37C720u;
            goto label_37c720;
        }
    }
    ctx->pc = 0x37C6F4u;
label_37c6f4:
    // 0x37c6f4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x37c6f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_37c6f8:
    // 0x37c6f8: 0xc1035f6  jal         func_40D7D8
label_37c6fc:
    if (ctx->pc == 0x37C6FCu) {
        ctx->pc = 0x37C6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C6F8u;
        // 0x37c6fc: 0xafa20030  sw          $v0, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37C700u;
        goto label_37c700;
    }
    ctx->pc = 0x37C6F8u;
    SET_GPR_U32(ctx, 31, 0x37C700u);
    ctx->pc = 0x37C6FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C6F8u;
    // 0x37c6fc: 0xafa20030  sw          $v0, 0x30($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x37C6F8u, 0x37C700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C700u;
label_37c700:
    // 0x37c700: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x37c700u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
label_37c704:
    // 0x37c704: 0xc103628  jal         func_40D8A0
label_37c708:
    if (ctx->pc == 0x37C708u) {
        ctx->pc = 0x37C708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C704u;
        // 0x37c708: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37C70Cu;
        goto label_37c70c;
    }
    ctx->pc = 0x37C704u;
    SET_GPR_U32(ctx, 31, 0x37C70Cu);
    ctx->pc = 0x37C708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C704u;
    // 0x37c708: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x37C704u, 0x37C70Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C70Cu;
label_37c70c:
    // 0x37c70c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x37c70cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_37c710:
    // 0x37c710: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x37c710u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_37c714:
    // 0x37c714: 0x1000016e  b           . + 4 + (0x16E << 2)
label_37c718:
    if (ctx->pc == 0x37C718u) {
        ctx->pc = 0x37C718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C714u;
        // 0x37c718: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37C71Cu;
        goto label_37c71c;
    }
    ctx->pc = 0x37C714u;
    {
        const bool branch_taken_0x37c714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37C718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C714u;
        // 0x37c718: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37c714) {
            ctx->pc = 0x37CCD0u;
            goto label_37ccd0;
        }
    }
    ctx->pc = 0x37C71Cu;
label_37c71c:
    // 0x37c71c: 0x0  nop
    ctx->pc = 0x37c71cu;
    // NOP
label_37c720:
    // 0x37c720: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x37c720u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_37c724:
    // 0x37c724: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x37c724u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_37c728:
    // 0x37c728: 0x46006032  c.eq.s      $f12, $f0
    ctx->pc = 0x37c728u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_37c72c:
    // 0x37c72c: 0x0  nop
    ctx->pc = 0x37c72cu;
    // NOP
label_37c730:
    // 0x37c730: 0x45010013  bc1t        . + 4 + (0x13 << 2)
label_37c734:
    if (ctx->pc == 0x37C734u) {
        ctx->pc = 0x37C734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C730u;
        // 0x37c734: 0x24e2fffc  addiu       $v0, $a3, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37C738u;
        goto label_37c738;
    }
    ctx->pc = 0x37C730u;
    {
        const bool branch_taken_0x37c730 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x37C734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C730u;
        // 0x37c734: 0x24e2fffc  addiu       $v0, $a3, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37c730) {
            ctx->pc = 0x37C780u;
            goto label_37c780;
        }
    }
    ctx->pc = 0x37C738u;
label_37c738:
    // 0x37c738: 0x24e2fffd  addiu       $v0, $a3, -0x3
    ctx->pc = 0x37c738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967293));
label_37c73c:
    // 0x37c73c: 0x3c014380  lui         $at, 0x4380
    ctx->pc = 0x37c73cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17280 << 16));
label_37c740:
    // 0x37c740: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x37c740u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_37c744:
    // 0x37c744: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x37c744u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_37c748:
    // 0x37c748: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x37c748u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_37c74c:
    // 0x37c74c: 0x460c0082  mul.s       $f2, $f0, $f12
    ctx->pc = 0x37c74cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
label_37c750:
    // 0x37c750: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x37c750u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_37c754:
    // 0x37c754: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x37c754u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_37c758:
    // 0x37c758: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x37c758u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_37c75c:
    // 0x37c75c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x37c75cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_37c760:
    // 0x37c760: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x37c760u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_37c764:
    // 0x37c764: 0x46010082  mul.s       $f2, $f0, $f1
    ctx->pc = 0x37c764u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_37c768:
    // 0x37c768: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x37c768u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_37c76c:
    // 0x37c76c: 0x44120000  mfc1        $s2, $f0
    ctx->pc = 0x37c76cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 18, bits); }
label_37c770:
    // 0x37c770: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x37c770u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_37c774:
    // 0x37c774: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x37c774u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_37c778:
    // 0x37c778: 0x10000003  b           . + 4 + (0x3 << 2)
label_37c77c:
    if (ctx->pc == 0x37C77Cu) {
        ctx->pc = 0x37C77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C778u;
        // 0x37c77c: 0x46001581  sub.s       $f22, $f2, $f0 (Delay Slot)
        ctx->f[22] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x37C780u;
        goto label_37c780;
    }
    ctx->pc = 0x37C778u;
    {
        const bool branch_taken_0x37c778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37C77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C778u;
        // 0x37c77c: 0x46001581  sub.s       $f22, $f2, $f0 (Delay Slot)
        ctx->f[22] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x37c778) {
            ctx->pc = 0x37C788u;
            goto label_37c788;
        }
    }
    ctx->pc = 0x37C780u;
label_37c780:
    // 0x37c780: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x37c780u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
label_37c784:
    // 0x37c784: 0x241200ff  addiu       $s2, $zero, 0xFF
    ctx->pc = 0x37c784u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_37c788:
    // 0x37c788: 0x2410000c  addiu       $s0, $zero, 0xC
    ctx->pc = 0x37c788u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_37c78c:
    // 0x37c78c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x37c78cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_37c790:
    // 0x37c790: 0x501818  mult        $v1, $v0, $s0
    ctx->pc = 0x37c790u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_37c794:
    // 0x37c794: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x37c794u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37c798:
    // 0x37c798: 0xc103afe  jal         func_40EBF8
label_37c79c:
    if (ctx->pc == 0x37C79Cu) {
        ctx->pc = 0x37C79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C798u;
        // 0x37c79c: 0x688021  addu        $s0, $v1, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37C7A0u;
        goto label_37c7a0;
    }
    ctx->pc = 0x37C798u;
    SET_GPR_U32(ctx, 31, 0x37C7A0u);
    ctx->pc = 0x37C79Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C798u;
    // 0x37c79c: 0x688021  addu        $s0, $v1, $t0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40EBF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40EBF8u, 0x37C798u, 0x37C7A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C7A0u;
label_37c7a0:
    // 0x37c7a0: 0x8f83a8c8  lw          $v1, -0x5738($gp)
    ctx->pc = 0x37c7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944968)));
label_37c7a4:
    // 0x37c7a4: 0x123080  sll         $a2, $s2, 2
    ctx->pc = 0x37c7a4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_37c7a8:
    // 0x37c7a8: 0x8f82a8c4  lw          $v0, -0x573C($gp)
    ctx->pc = 0x37c7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944964)));
label_37c7ac:
    // 0x37c7ac: 0x2607000c  addiu       $a3, $s0, 0xC
    ctx->pc = 0x37c7acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_37c7b0:
    // 0x37c7b0: 0x8f84a8c0  lw          $a0, -0x5740($gp)
    ctx->pc = 0x37c7b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944960)));
label_37c7b4:
    // 0x37c7b4: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x37c7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_37c7b8:
    // 0x37c7b8: 0x8f85a8bc  lw          $a1, -0x5744($gp)
    ctx->pc = 0x37c7b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944956)));
label_37c7bc:
    // 0x37c7bc: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x37c7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_37c7c0:
    // 0x37c7c0: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x37c7c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_37c7c4:
    // 0x37c7c4: 0xc4670000  lwc1        $f7, 0x0($v1)
    ctx->pc = 0x37c7c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_37c7c8:
    // 0x37c7c8: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x37c7c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_37c7cc:
    // 0x37c7cc: 0xc4450000  lwc1        $f5, 0x0($v0)
    ctx->pc = 0x37c7ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_37c7d0:
    // 0x37c7d0: 0xc4860000  lwc1        $f6, 0x0($a0)
    ctx->pc = 0x37c7d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_37c7d4:
    // 0x37c7d4: 0x26080018  addiu       $t0, $s0, 0x18
    ctx->pc = 0x37c7d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
label_37c7d8:
    // 0x37c7d8: 0xc4a40000  lwc1        $f4, 0x0($a1)
    ctx->pc = 0x37c7d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_37c7dc:
    // 0x37c7dc: 0x26090024  addiu       $t1, $s0, 0x24
    ctx->pc = 0x37c7dcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
label_37c7e0:
    // 0x37c7e0: 0xc4630004  lwc1        $f3, 0x4($v1)
    ctx->pc = 0x37c7e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_37c7e4:
    // 0x37c7e4: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x37c7e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_37c7e8:
    // 0x37c7e8: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x37c7e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_37c7ec:
    // 0x37c7ec: 0x460718c1  sub.s       $f3, $f3, $f7
    ctx->pc = 0x37c7ecu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[7]);
label_37c7f0:
    // 0x37c7f0: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x37c7f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37c7f4:
    // 0x37c7f4: 0x46050841  sub.s       $f1, $f1, $f5
    ctx->pc = 0x37c7f4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
label_37c7f8:
    // 0x37c7f8: 0x46061081  sub.s       $f2, $f2, $f6
    ctx->pc = 0x37c7f8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[6]);
label_37c7fc:
    // 0x37c7fc: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x37c7fcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
label_37c800:
    // 0x37c800: 0x4603b0c2  mul.s       $f3, $f22, $f3
    ctx->pc = 0x37c800u;
    ctx->f[3] = FPU_MUL_S(ctx->f[22], ctx->f[3]);
label_37c804:
    // 0x37c804: 0x4601b042  mul.s       $f1, $f22, $f1
    ctx->pc = 0x37c804u;
    ctx->f[1] = FPU_MUL_S(ctx->f[22], ctx->f[1]);
label_37c808:
    // 0x37c808: 0x4602b082  mul.s       $f2, $f22, $f2
    ctx->pc = 0x37c808u;
    ctx->f[2] = FPU_MUL_S(ctx->f[22], ctx->f[2]);
label_37c80c:
    // 0x37c80c: 0x4600b002  mul.s       $f0, $f22, $f0
    ctx->pc = 0x37c80cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
label_37c810:
    // 0x37c810: 0x46033cc0  add.s       $f19, $f7, $f3
    ctx->pc = 0x37c810u;
    ctx->f[19] = FPU_ADD_S(ctx->f[7], ctx->f[3]);
label_37c814:
    // 0x37c814: 0x46012d00  add.s       $f20, $f5, $f1
    ctx->pc = 0x37c814u;
    ctx->f[20] = FPU_ADD_S(ctx->f[5], ctx->f[1]);
label_37c818:
    // 0x37c818: 0x46023480  add.s       $f18, $f6, $f2
    ctx->pc = 0x37c818u;
    ctx->f[18] = FPU_ADD_S(ctx->f[6], ctx->f[2]);
label_37c81c:
    // 0x37c81c: 0x46002540  add.s       $f21, $f4, $f0
    ctx->pc = 0x37c81cu;
    ctx->f[21] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
label_37c820:
    // 0x37c820: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x37c820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_37c824:
    // 0x37c824: 0x46130842  mul.s       $f1, $f1, $f19
    ctx->pc = 0x37c824u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[19]);
label_37c828:
    // 0x37c828: 0xe6210000  swc1        $f1, 0x0($s1)
    ctx->pc = 0x37c828u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_37c82c:
    // 0x37c82c: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x37c82cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_37c830:
    // 0x37c830: 0x46131082  mul.s       $f2, $f2, $f19
    ctx->pc = 0x37c830u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[19]);
label_37c834:
    // 0x37c834: 0xe6220004  swc1        $f2, 0x4($s1)
    ctx->pc = 0x37c834u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_37c838:
    // 0x37c838: 0xc6030008  lwc1        $f3, 0x8($s0)
    ctx->pc = 0x37c838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_37c83c:
    // 0x37c83c: 0x461318c2  mul.s       $f3, $f3, $f19
    ctx->pc = 0x37c83cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[19]);
label_37c840:
    // 0x37c840: 0xe6230008  swc1        $f3, 0x8($s1)
    ctx->pc = 0x37c840u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_37c844:
    // 0x37c844: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x37c844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37c848:
    // 0x37c848: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x37c848u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_37c84c:
    // 0x37c84c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x37c84cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_37c850:
    // 0x37c850: 0xe6210000  swc1        $f1, 0x0($s1)
    ctx->pc = 0x37c850u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_37c854:
    // 0x37c854: 0xc4e00004  lwc1        $f0, 0x4($a3)
    ctx->pc = 0x37c854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37c858:
    // 0x37c858: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x37c858u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_37c85c:
    // 0x37c85c: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x37c85cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_37c860:
    // 0x37c860: 0xe6220004  swc1        $f2, 0x4($s1)
    ctx->pc = 0x37c860u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_37c864:
    // 0x37c864: 0xc4e00008  lwc1        $f0, 0x8($a3)
    ctx->pc = 0x37c864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37c868:
    // 0x37c868: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x37c868u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_37c86c:
    // 0x37c86c: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x37c86cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_37c870:
    // 0x37c870: 0xe6230008  swc1        $f3, 0x8($s1)
    ctx->pc = 0x37c870u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_37c874:
    // 0x37c874: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x37c874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37c878:
    // 0x37c878: 0x46120002  mul.s       $f0, $f0, $f18
    ctx->pc = 0x37c878u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[18]);
label_37c87c:
    // 0x37c87c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x37c87cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_37c880:
    // 0x37c880: 0xe6210000  swc1        $f1, 0x0($s1)
    ctx->pc = 0x37c880u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_37c884:
    // 0x37c884: 0xc5000004  lwc1        $f0, 0x4($t0)
    ctx->pc = 0x37c884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37c888:
    // 0x37c888: 0x46120002  mul.s       $f0, $f0, $f18
    ctx->pc = 0x37c888u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[18]);
label_37c88c:
    // 0x37c88c: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x37c88cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_37c890:
    // 0x37c890: 0xe6220004  swc1        $f2, 0x4($s1)
    ctx->pc = 0x37c890u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_37c894:
    // 0x37c894: 0xc5000008  lwc1        $f0, 0x8($t0)
    ctx->pc = 0x37c894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37c898:
    // 0x37c898: 0x46120002  mul.s       $f0, $f0, $f18
    ctx->pc = 0x37c898u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[18]);
label_37c89c:
    // 0x37c89c: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x37c89cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_37c8a0:
    // 0x37c8a0: 0xe6230008  swc1        $f3, 0x8($s1)
    ctx->pc = 0x37c8a0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_37c8a4:
    // 0x37c8a4: 0xc6000024  lwc1        $f0, 0x24($s0)
    ctx->pc = 0x37c8a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37c8a8:
    // 0x37c8a8: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x37c8a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_37c8ac:
    // 0x37c8ac: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x37c8acu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_37c8b0:
    // 0x37c8b0: 0xe6210000  swc1        $f1, 0x0($s1)
    ctx->pc = 0x37c8b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_37c8b4:
    // 0x37c8b4: 0xc5200004  lwc1        $f0, 0x4($t1)
    ctx->pc = 0x37c8b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37c8b8:
    // 0x37c8b8: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x37c8b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_37c8bc:
    // 0x37c8bc: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x37c8bcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_37c8c0:
    // 0x37c8c0: 0xe6220004  swc1        $f2, 0x4($s1)
    ctx->pc = 0x37c8c0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_37c8c4:
    // 0x37c8c4: 0xc5200008  lwc1        $f0, 0x8($t1)
    ctx->pc = 0x37c8c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37c8c8:
    // 0x37c8c8: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x37c8c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_37c8cc:
    // 0x37c8cc: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x37c8ccu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_37c8d0:
    // 0x37c8d0: 0xe6230008  swc1        $f3, 0x8($s1)
    ctx->pc = 0x37c8d0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_37c8d4:
    // 0x37c8d4: 0x8f82a8d8  lw          $v0, -0x5728($gp)
    ctx->pc = 0x37c8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944984)));
label_37c8d8:
    // 0x37c8d8: 0x8f83a8d4  lw          $v1, -0x572C($gp)
    ctx->pc = 0x37c8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944980)));
label_37c8dc:
    // 0x37c8dc: 0x8f84a8d0  lw          $a0, -0x5730($gp)
    ctx->pc = 0x37c8dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944976)));
label_37c8e0:
    // 0x37c8e0: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x37c8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_37c8e4:
    // 0x37c8e4: 0x8f85a8cc  lw          $a1, -0x5734($gp)
    ctx->pc = 0x37c8e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944972)));
label_37c8e8:
    // 0x37c8e8: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x37c8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_37c8ec:
    // 0x37c8ec: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x37c8ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_37c8f0:
    // 0x37c8f0: 0xc4470000  lwc1        $f7, 0x0($v0)
    ctx->pc = 0x37c8f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_37c8f4:
    // 0x37c8f4: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x37c8f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_37c8f8:
    // 0x37c8f8: 0xc4640000  lwc1        $f4, 0x0($v1)
    ctx->pc = 0x37c8f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_37c8fc:
    // 0x37c8fc: 0xc4850000  lwc1        $f5, 0x0($a0)
    ctx->pc = 0x37c8fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_37c900:
    // 0x37c900: 0xc4a60000  lwc1        $f6, 0x0($a1)
    ctx->pc = 0x37c900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_37c904:
    // 0x37c904: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x37c904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_37c908:
    // 0x37c908: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x37c908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_37c90c:
    // 0x37c90c: 0xc4830004  lwc1        $f3, 0x4($a0)
    ctx->pc = 0x37c90cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_37c910:
    // 0x37c910: 0x46070841  sub.s       $f1, $f1, $f7
    ctx->pc = 0x37c910u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[7]);
label_37c914:
    // 0x37c914: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x37c914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37c918:
    // 0x37c918: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x37c918u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
label_37c91c:
    // 0x37c91c: 0x460518c1  sub.s       $f3, $f3, $f5
    ctx->pc = 0x37c91cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[5]);
label_37c920:
    // 0x37c920: 0x46060001  sub.s       $f0, $f0, $f6
    ctx->pc = 0x37c920u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[6]);
label_37c924:
    // 0x37c924: 0x4601b042  mul.s       $f1, $f22, $f1
    ctx->pc = 0x37c924u;
    ctx->f[1] = FPU_MUL_S(ctx->f[22], ctx->f[1]);
label_37c928:
    // 0x37c928: 0x4602b082  mul.s       $f2, $f22, $f2
    ctx->pc = 0x37c928u;
    ctx->f[2] = FPU_MUL_S(ctx->f[22], ctx->f[2]);
label_37c92c:
    // 0x37c92c: 0x4603b0c2  mul.s       $f3, $f22, $f3
    ctx->pc = 0x37c92cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[22], ctx->f[3]);
label_37c930:
    // 0x37c930: 0x4600b002  mul.s       $f0, $f22, $f0
    ctx->pc = 0x37c930u;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
label_37c934:
    // 0x37c934: 0x46013cc0  add.s       $f19, $f7, $f1
    ctx->pc = 0x37c934u;
    ctx->f[19] = FPU_ADD_S(ctx->f[7], ctx->f[1]);
label_37c938:
    // 0x37c938: 0x46022500  add.s       $f20, $f4, $f2
    ctx->pc = 0x37c938u;
    ctx->f[20] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
label_37c93c:
    // 0x37c93c: 0x46032c80  add.s       $f18, $f5, $f3
    ctx->pc = 0x37c93cu;
    ctx->f[18] = FPU_ADD_S(ctx->f[5], ctx->f[3]);
label_37c940:
    // 0x37c940: 0x46003540  add.s       $f21, $f6, $f0
    ctx->pc = 0x37c940u;
    ctx->f[21] = FPU_ADD_S(ctx->f[6], ctx->f[0]);
label_37c944:
    // 0x37c944: 0xc6070000  lwc1        $f7, 0x0($s0)
    ctx->pc = 0x37c944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_37c948:
    // 0x37c948: 0xc6080004  lwc1        $f8, 0x4($s0)
    ctx->pc = 0x37c948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_37c94c:
    // 0x37c94c: 0x461338c2  mul.s       $f3, $f7, $f19
    ctx->pc = 0x37c94cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[7], ctx->f[19]);
label_37c950:
    // 0x37c950: 0xc6060008  lwc1        $f6, 0x8($s0)
    ctx->pc = 0x37c950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_37c954:
    // 0x37c954: 0x46134102  mul.s       $f4, $f8, $f19
    ctx->pc = 0x37c954u;
    ctx->f[4] = FPU_MUL_S(ctx->f[8], ctx->f[19]);
label_37c958:
    // 0x37c958: 0x46133082  mul.s       $f2, $f6, $f19
    ctx->pc = 0x37c958u;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[19]);
label_37c95c:
    // 0x37c95c: 0xc610000c  lwc1        $f16, 0xC($s0)
    ctx->pc = 0x37c95cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
label_37c960:
    // 0x37c960: 0xc4f10008  lwc1        $f17, 0x8($a3)
    ctx->pc = 0x37c960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
label_37c964:
    // 0x37c964: 0x46148142  mul.s       $f5, $f16, $f20
    ctx->pc = 0x37c964u;
    ctx->f[5] = FPU_MUL_S(ctx->f[16], ctx->f[20]);
label_37c968:
    // 0x37c968: 0xc4ef0004  lwc1        $f15, 0x4($a3)
    ctx->pc = 0x37c968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_37c96c:
    // 0x37c96c: 0x46148802  mul.s       $f0, $f17, $f20
    ctx->pc = 0x37c96cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[17], ctx->f[20]);
label_37c970:
    // 0x37c970: 0x46147842  mul.s       $f1, $f15, $f20
    ctx->pc = 0x37c970u;
    ctx->f[1] = FPU_MUL_S(ctx->f[15], ctx->f[20]);
label_37c974:
    // 0x37c974: 0x460518c0  add.s       $f3, $f3, $f5
    ctx->pc = 0x37c974u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
label_37c978:
    // 0x37c978: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x37c978u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_37c97c:
    // 0x37c97c: 0x46012100  add.s       $f4, $f4, $f1
    ctx->pc = 0x37c97cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
label_37c980:
    // 0x37c980: 0xc60d0018  lwc1        $f13, 0x18($s0)
    ctx->pc = 0x37c980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_37c984:
    // 0x37c984: 0xc50e0008  lwc1        $f14, 0x8($t0)
    ctx->pc = 0x37c984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_37c988:
    // 0x37c988: 0x46126942  mul.s       $f5, $f13, $f18
    ctx->pc = 0x37c988u;
    ctx->f[5] = FPU_MUL_S(ctx->f[13], ctx->f[18]);
label_37c98c:
    // 0x37c98c: 0xc50c0004  lwc1        $f12, 0x4($t0)
    ctx->pc = 0x37c98cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_37c990:
    // 0x37c990: 0x46127002  mul.s       $f0, $f14, $f18
    ctx->pc = 0x37c990u;
    ctx->f[0] = FPU_MUL_S(ctx->f[14], ctx->f[18]);
label_37c994:
    // 0x37c994: 0x46126042  mul.s       $f1, $f12, $f18
    ctx->pc = 0x37c994u;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[18]);
label_37c998:
    // 0x37c998: 0x460518c0  add.s       $f3, $f3, $f5
    ctx->pc = 0x37c998u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
label_37c99c:
    // 0x37c99c: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x37c99cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_37c9a0:
    // 0x37c9a0: 0x46012100  add.s       $f4, $f4, $f1
    ctx->pc = 0x37c9a0u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
label_37c9a4:
    // 0x37c9a4: 0xc60a0024  lwc1        $f10, 0x24($s0)
    ctx->pc = 0x37c9a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_37c9a8:
    // 0x37c9a8: 0xc52b0008  lwc1        $f11, 0x8($t1)
    ctx->pc = 0x37c9a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
label_37c9ac:
    // 0x37c9ac: 0x46155142  mul.s       $f5, $f10, $f21
    ctx->pc = 0x37c9acu;
    ctx->f[5] = FPU_MUL_S(ctx->f[10], ctx->f[21]);
label_37c9b0:
    // 0x37c9b0: 0xc5290004  lwc1        $f9, 0x4($t1)
    ctx->pc = 0x37c9b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_37c9b4:
    // 0x37c9b4: 0x46155802  mul.s       $f0, $f11, $f21
    ctx->pc = 0x37c9b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[21]);
label_37c9b8:
    // 0x37c9b8: 0x46154842  mul.s       $f1, $f9, $f21
    ctx->pc = 0x37c9b8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[9], ctx->f[21]);
label_37c9bc:
    // 0x37c9bc: 0x460518c0  add.s       $f3, $f3, $f5
    ctx->pc = 0x37c9bcu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
label_37c9c0:
    // 0x37c9c0: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x37c9c0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_37c9c4:
    // 0x37c9c4: 0x46012100  add.s       $f4, $f4, $f1
    ctx->pc = 0x37c9c4u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
label_37c9c8:
    // 0x37c9c8: 0xe7a30020  swc1        $f3, 0x20($sp)
    ctx->pc = 0x37c9c8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_37c9cc:
    // 0x37c9cc: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x37c9ccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_37c9d0:
    // 0x37c9d0: 0xe7a40024  swc1        $f4, 0x24($sp)
    ctx->pc = 0x37c9d0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_37c9d4:
    // 0x37c9d4: 0x8f82a8e8  lw          $v0, -0x5718($gp)
    ctx->pc = 0x37c9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945000)));
label_37c9d8:
    // 0x37c9d8: 0x8f83a8e4  lw          $v1, -0x571C($gp)
    ctx->pc = 0x37c9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944996)));
label_37c9dc:
    // 0x37c9dc: 0x8f84a8e0  lw          $a0, -0x5720($gp)
    ctx->pc = 0x37c9dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944992)));
label_37c9e0:
    // 0x37c9e0: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x37c9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_37c9e4:
    // 0x37c9e4: 0x8f85a8dc  lw          $a1, -0x5724($gp)
    ctx->pc = 0x37c9e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944988)));
label_37c9e8:
    // 0x37c9e8: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x37c9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_37c9ec:
    // 0x37c9ec: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x37c9ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_37c9f0:
    // 0x37c9f0: 0xc4530000  lwc1        $f19, 0x0($v0)
    ctx->pc = 0x37c9f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[19] = f; }
label_37c9f4:
    // 0x37c9f4: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x37c9f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_37c9f8:
    // 0x37c9f8: 0xc4650000  lwc1        $f5, 0x0($v1)
    ctx->pc = 0x37c9f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_37c9fc:
    // 0x37c9fc: 0xc4920000  lwc1        $f18, 0x0($a0)
    ctx->pc = 0x37c9fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
label_37ca00:
    // 0x37ca00: 0xc4c40000  lwc1        $f4, 0x0($a2)
    ctx->pc = 0x37ca00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_37ca04:
    // 0x37ca04: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x37ca04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_37ca08:
    // 0x37ca08: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x37ca08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_37ca0c:
    // 0x37ca0c: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x37ca0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_37ca10:
    // 0x37ca10: 0x461318c1  sub.s       $f3, $f3, $f19
    ctx->pc = 0x37ca10u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[19]);
label_37ca14:
    // 0x37ca14: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x37ca14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37ca18:
    // 0x37ca18: 0x46050841  sub.s       $f1, $f1, $f5
    ctx->pc = 0x37ca18u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
label_37ca1c:
    // 0x37ca1c: 0x46121081  sub.s       $f2, $f2, $f18
    ctx->pc = 0x37ca1cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[18]);
label_37ca20:
    // 0x37ca20: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x37ca20u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
label_37ca24:
    // 0x37ca24: 0x4603b0c2  mul.s       $f3, $f22, $f3
    ctx->pc = 0x37ca24u;
    ctx->f[3] = FPU_MUL_S(ctx->f[22], ctx->f[3]);
label_37ca28:
    // 0x37ca28: 0x4601b042  mul.s       $f1, $f22, $f1
    ctx->pc = 0x37ca28u;
    ctx->f[1] = FPU_MUL_S(ctx->f[22], ctx->f[1]);
label_37ca2c:
    // 0x37ca2c: 0x4600b002  mul.s       $f0, $f22, $f0
    ctx->pc = 0x37ca2cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
label_37ca30:
    // 0x37ca30: 0x4602b082  mul.s       $f2, $f22, $f2
    ctx->pc = 0x37ca30u;
    ctx->f[2] = FPU_MUL_S(ctx->f[22], ctx->f[2]);
label_37ca34:
    // 0x37ca34: 0x46012d00  add.s       $f20, $f5, $f1
    ctx->pc = 0x37ca34u;
    ctx->f[20] = FPU_ADD_S(ctx->f[5], ctx->f[1]);
label_37ca38:
    // 0x37ca38: 0x46002540  add.s       $f21, $f4, $f0
    ctx->pc = 0x37ca38u;
    ctx->f[21] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
label_37ca3c:
    // 0x37ca3c: 0x46029480  add.s       $f18, $f18, $f2
    ctx->pc = 0x37ca3cu;
    ctx->f[18] = FPU_ADD_S(ctx->f[18], ctx->f[2]);
label_37ca40:
    // 0x37ca40: 0x46039cc0  add.s       $f19, $f19, $f3
    ctx->pc = 0x37ca40u;
    ctx->f[19] = FPU_ADD_S(ctx->f[19], ctx->f[3]);
label_37ca44:
    // 0x37ca44: 0x461339c2  mul.s       $f7, $f7, $f19
    ctx->pc = 0x37ca44u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[19]);
label_37ca48:
    // 0x37ca48: 0x46133182  mul.s       $f6, $f6, $f19
    ctx->pc = 0x37ca48u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[19]);
label_37ca4c:
    // 0x37ca4c: 0x46134202  mul.s       $f8, $f8, $f19
    ctx->pc = 0x37ca4cu;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[19]);
label_37ca50:
    // 0x37ca50: 0x46148402  mul.s       $f16, $f16, $f20
    ctx->pc = 0x37ca50u;
    ctx->f[16] = FPU_MUL_S(ctx->f[16], ctx->f[20]);
label_37ca54:
    // 0x37ca54: 0x46148c42  mul.s       $f17, $f17, $f20
    ctx->pc = 0x37ca54u;
    ctx->f[17] = FPU_MUL_S(ctx->f[17], ctx->f[20]);
label_37ca58:
    // 0x37ca58: 0x46147bc2  mul.s       $f15, $f15, $f20
    ctx->pc = 0x37ca58u;
    ctx->f[15] = FPU_MUL_S(ctx->f[15], ctx->f[20]);
label_37ca5c:
    // 0x37ca5c: 0x461039c0  add.s       $f7, $f7, $f16
    ctx->pc = 0x37ca5cu;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[16]);
label_37ca60:
    // 0x37ca60: 0x46113180  add.s       $f6, $f6, $f17
    ctx->pc = 0x37ca60u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[17]);
label_37ca64:
    // 0x37ca64: 0x460f4200  add.s       $f8, $f8, $f15
    ctx->pc = 0x37ca64u;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[15]);
label_37ca68:
    // 0x37ca68: 0x46126b42  mul.s       $f13, $f13, $f18
    ctx->pc = 0x37ca68u;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[18]);
label_37ca6c:
    // 0x37ca6c: 0x46127382  mul.s       $f14, $f14, $f18
    ctx->pc = 0x37ca6cu;
    ctx->f[14] = FPU_MUL_S(ctx->f[14], ctx->f[18]);
label_37ca70:
    // 0x37ca70: 0x46126302  mul.s       $f12, $f12, $f18
    ctx->pc = 0x37ca70u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[18]);
label_37ca74:
    // 0x37ca74: 0x460d39c0  add.s       $f7, $f7, $f13
    ctx->pc = 0x37ca74u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[13]);
label_37ca78:
    // 0x37ca78: 0x460e3180  add.s       $f6, $f6, $f14
    ctx->pc = 0x37ca78u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[14]);
label_37ca7c:
    // 0x37ca7c: 0x460c4200  add.s       $f8, $f8, $f12
    ctx->pc = 0x37ca7cu;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[12]);
label_37ca80:
    // 0x37ca80: 0x46155282  mul.s       $f10, $f10, $f21
    ctx->pc = 0x37ca80u;
    ctx->f[10] = FPU_MUL_S(ctx->f[10], ctx->f[21]);
label_37ca84:
    // 0x37ca84: 0x46155ac2  mul.s       $f11, $f11, $f21
    ctx->pc = 0x37ca84u;
    ctx->f[11] = FPU_MUL_S(ctx->f[11], ctx->f[21]);
label_37ca88:
    // 0x37ca88: 0x46154a42  mul.s       $f9, $f9, $f21
    ctx->pc = 0x37ca88u;
    ctx->f[9] = FPU_MUL_S(ctx->f[9], ctx->f[21]);
label_37ca8c:
    // 0x37ca8c: 0x460a39c0  add.s       $f7, $f7, $f10
    ctx->pc = 0x37ca8cu;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[10]);
label_37ca90:
    // 0x37ca90: 0x460b3180  add.s       $f6, $f6, $f11
    ctx->pc = 0x37ca90u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[11]);
label_37ca94:
    // 0x37ca94: 0x46094200  add.s       $f8, $f8, $f9
    ctx->pc = 0x37ca94u;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[9]);
label_37ca98:
    // 0x37ca98: 0xe7a70000  swc1        $f7, 0x0($sp)
    ctx->pc = 0x37ca98u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_37ca9c:
    // 0x37ca9c: 0xe7a60008  swc1        $f6, 0x8($sp)
    ctx->pc = 0x37ca9cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_37caa0:
    // 0x37caa0: 0xe7a80004  swc1        $f8, 0x4($sp)
    ctx->pc = 0x37caa0u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_37caa4:
    // 0x37caa4: 0x6ba40027  ldl         $a0, 0x27($sp)
    ctx->pc = 0x37caa4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_37caa8:
    // 0x37caa8: 0x6fa40020  ldr         $a0, 0x20($sp)
    ctx->pc = 0x37caa8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_37caac:
    // 0x37caac: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x37caacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_37cab0:
    // 0x37cab0: 0xb2640007  sdl         $a0, 0x7($s3)
    ctx->pc = 0x37cab0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_37cab4:
    // 0x37cab4: 0xb6640000  sdr         $a0, 0x0($s3)
    ctx->pc = 0x37cab4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_37cab8:
    // 0x37cab8: 0xae650008  sw          $a1, 0x8($s3)
    ctx->pc = 0x37cab8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 5));
label_37cabc:
    // 0x37cabc: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x37cabcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_37cac0:
    // 0x37cac0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x37cac0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_37cac4:
    // 0x37cac4: 0xc104da4  jal         func_413690
label_37cac8:
    if (ctx->pc == 0x37CAC8u) {
        ctx->pc = 0x37CAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37CAC4u;
        // 0x37cac8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37CACCu;
        goto label_37cacc;
    }
    ctx->pc = 0x37CAC4u;
    SET_GPR_U32(ctx, 31, 0x37CACCu);
    ctx->pc = 0x37CAC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37CAC4u;
    // 0x37cac8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x413690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413690u, 0x37CAC4u, 0x37CACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37CACCu;
label_37cacc:
    // 0x37cacc: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x37caccu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_37cad0:
    // 0x37cad0: 0x0  nop
    ctx->pc = 0x37cad0u;
    // NOP
label_37cad4:
    // 0x37cad4: 0x45020008  bc1fl       . + 4 + (0x8 << 2)
label_37cad8:
    if (ctx->pc == 0x37CAD8u) {
        ctx->pc = 0x37CAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37CAD4u;
        // 0x37cad8: 0xc6610004  lwc1        $f1, 0x4($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x37CADCu;
        goto label_37cadc;
    }
    ctx->pc = 0x37CAD4u;
    {
        const bool branch_taken_0x37cad4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x37cad4) {
            ctx->pc = 0x37CAD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37CAD4u;
            // 0x37cad8: 0xc6610004  lwc1        $f1, 0x4($s3) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x37CAF8u;
            goto label_37caf8;
        }
    }
    ctx->pc = 0x37CADCu;
label_37cadc:
    // 0x37cadc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x37cadcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_37cae0:
    // 0x37cae0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x37cae0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_37cae4:
    // 0x37cae4: 0xe6740000  swc1        $f20, 0x0($s3)
    ctx->pc = 0x37cae4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
label_37cae8:
    // 0x37cae8: 0xe6600008  swc1        $f0, 0x8($s3)
    ctx->pc = 0x37cae8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
label_37caec:
    // 0x37caec: 0xe6740004  swc1        $f20, 0x4($s3)
    ctx->pc = 0x37caecu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
label_37caf0:
    // 0x37caf0: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x37caf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_37caf4:
    // 0x37caf4: 0x0  nop
    ctx->pc = 0x37caf4u;
    // NOP
label_37caf8:
    // 0x37caf8: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x37caf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_37cafc:
    // 0x37cafc: 0xc6670008  lwc1        $f7, 0x8($s3)
    ctx->pc = 0x37cafcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_37cb00:
    // 0x37cb00: 0xc7a40004  lwc1        $f4, 0x4($sp)
    ctx->pc = 0x37cb00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_37cb04:
    // 0x37cb04: 0x46011182  mul.s       $f6, $f2, $f1
    ctx->pc = 0x37cb04u;
    ctx->f[6] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_37cb08:
    // 0x37cb08: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x37cb08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37cb0c:
    // 0x37cb0c: 0xc6630000  lwc1        $f3, 0x0($s3)
    ctx->pc = 0x37cb0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_37cb10:
    // 0x37cb10: 0x46072142  mul.s       $f5, $f4, $f7
    ctx->pc = 0x37cb10u;
    ctx->f[5] = FPU_MUL_S(ctx->f[4], ctx->f[7]);
label_37cb14:
    // 0x37cb14: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x37cb14u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_37cb18:
    // 0x37cb18: 0x46032102  mul.s       $f4, $f4, $f3
    ctx->pc = 0x37cb18u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
label_37cb1c:
    // 0x37cb1c: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x37cb1cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_37cb20:
    // 0x37cb20: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x37cb20u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
label_37cb24:
    // 0x37cb24: 0x46062941  sub.s       $f5, $f5, $f6
    ctx->pc = 0x37cb24u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[6]);
label_37cb28:
    // 0x37cb28: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x37cb28u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
label_37cb2c:
    // 0x37cb2c: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x37cb2cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_37cb30:
    // 0x37cb30: 0xe7a50010  swc1        $f5, 0x10($sp)
    ctx->pc = 0x37cb30u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_37cb34:
    // 0x37cb34: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x37cb34u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_37cb38:
    // 0x37cb38: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x37cb38u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_37cb3c:
    // 0x37cb3c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x37cb3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_37cb40:
    // 0x37cb40: 0xc104cf2  jal         func_4133C8
label_37cb44:
    if (ctx->pc == 0x37CB44u) {
        ctx->pc = 0x37CB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37CB40u;
        // 0x37cb44: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37CB48u;
        goto label_37cb48;
    }
    ctx->pc = 0x37CB40u;
    SET_GPR_U32(ctx, 31, 0x37CB48u);
    ctx->pc = 0x37CB44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37CB40u;
    // 0x37cb44: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4133C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4133C8u, 0x37CB40u, 0x37CB48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37CB48u;
label_37cb48:
    // 0x37cb48: 0x12c0000d  beqz        $s6, . + 4 + (0xD << 2)
label_37cb4c:
    if (ctx->pc == 0x37CB4Cu) {
        ctx->pc = 0x37CB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37CB48u;
        // 0x37cb4c: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x37CB50u;
        goto label_37cb50;
    }
    ctx->pc = 0x37CB48u;
    {
        const bool branch_taken_0x37cb48 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x37CB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37CB48u;
        // 0x37cb4c: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x37cb48) {
            ctx->pc = 0x37CB80u;
            goto label_37cb80;
        }
    }
    ctx->pc = 0x37CB50u;
label_37cb50:
    // 0x37cb50: 0x6ac40007  ldl         $a0, 0x7($s6)
    ctx->pc = 0x37cb50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_37cb54:
    // 0x37cb54: 0x6ec40000  ldr         $a0, 0x0($s6)
    ctx->pc = 0x37cb54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_37cb58:
    // 0x37cb58: 0x8ec50008  lw          $a1, 0x8($s6)
    ctx->pc = 0x37cb58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
label_37cb5c:
    // 0x37cb5c: 0xb2840007  sdl         $a0, 0x7($s4)
    ctx->pc = 0x37cb5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_37cb60:
    // 0x37cb60: 0xb6840000  sdr         $a0, 0x0($s4)
    ctx->pc = 0x37cb60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_37cb64:
    // 0x37cb64: 0xae850008  sw          $a1, 0x8($s4)
    ctx->pc = 0x37cb64u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 5));
label_37cb68:
    // 0x37cb68: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x37cb68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_37cb6c:
    // 0x37cb6c: 0xc104da4  jal         func_413690
label_37cb70:
    if (ctx->pc == 0x37CB70u) {
        ctx->pc = 0x37CB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37CB6Cu;
        // 0x37cb70: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37CB74u;
        goto label_37cb74;
    }
    ctx->pc = 0x37CB6Cu;
    SET_GPR_U32(ctx, 31, 0x37CB74u);
    ctx->pc = 0x37CB70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37CB6Cu;
    // 0x37cb70: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x413690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413690u, 0x37CB6Cu, 0x37CB74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37CB74u;
label_37cb74:
    // 0x37cb74: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x37cb74u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_37cb78:
    // 0x37cb78: 0x10000008  b           . + 4 + (0x8 << 2)
label_37cb7c:
    if (ctx->pc == 0x37CB7Cu) {
        ctx->pc = 0x37CB80u;
        goto label_37cb80;
    }
    ctx->pc = 0x37CB78u;
    {
        const bool branch_taken_0x37cb78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37cb78) {
            ctx->pc = 0x37CB9Cu;
            goto label_37cb9c;
        }
    }
    ctx->pc = 0x37CB80u;
label_37cb80:
    // 0x37cb80: 0x4614a832  c.eq.s      $f21, $f20
    ctx->pc = 0x37cb80u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[21], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_37cb84:
    // 0x37cb84: 0x6ba40017  ldl         $a0, 0x17($sp)
    ctx->pc = 0x37cb84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_37cb88:
    // 0x37cb88: 0x6fa40010  ldr         $a0, 0x10($sp)
    ctx->pc = 0x37cb88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_37cb8c:
    // 0x37cb8c: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x37cb8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_37cb90:
    // 0x37cb90: 0xb2840007  sdl         $a0, 0x7($s4)
    ctx->pc = 0x37cb90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_37cb94:
    // 0x37cb94: 0xb6840000  sdr         $a0, 0x0($s4)
    ctx->pc = 0x37cb94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_37cb98:
    // 0x37cb98: 0xae850008  sw          $a1, 0x8($s4)
    ctx->pc = 0x37cb98u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 5));
label_37cb9c:
    // 0x37cb9c: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
label_37cba0:
    if (ctx->pc == 0x37CBA0u) {
        ctx->pc = 0x37CBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37CB9Cu;
        // 0x37cba0: 0xc6630008  lwc1        $f3, 0x8($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x37CBA4u;
        goto label_37cba4;
    }
    ctx->pc = 0x37CB9Cu;
    {
        const bool branch_taken_0x37cb9c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x37cb9c) {
            ctx->pc = 0x37CBA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37CB9Cu;
            // 0x37cba0: 0xc6630008  lwc1        $f3, 0x8($s3) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x37CBB8u;
            goto label_37cbb8;
        }
    }
    ctx->pc = 0x37CBA4u;
label_37cba4:
    // 0x37cba4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x37cba4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_37cba8:
    // 0x37cba8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x37cba8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_37cbac:
    // 0x37cbac: 0xe6800004  swc1        $f0, 0x4($s4)
    ctx->pc = 0x37cbacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
label_37cbb0:
    // 0x37cbb0: 0xc6630008  lwc1        $f3, 0x8($s3)
    ctx->pc = 0x37cbb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_37cbb4:
    // 0x37cbb4: 0x0  nop
    ctx->pc = 0x37cbb4u;
    // NOP
label_37cbb8:
    // 0x37cbb8: 0xc6620004  lwc1        $f2, 0x4($s3)
    ctx->pc = 0x37cbb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_37cbbc:
    // 0x37cbbc: 0xc6810004  lwc1        $f1, 0x4($s4)
    ctx->pc = 0x37cbbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_37cbc0:
    // 0x37cbc0: 0xc6800008  lwc1        $f0, 0x8($s4)
    ctx->pc = 0x37cbc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37cbc4:
    // 0x37cbc4: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x37cbc4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_37cbc8:
    // 0x37cbc8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x37cbc8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_37cbcc:
    // 0x37cbcc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x37cbccu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_37cbd0:
    // 0x37cbd0: 0xe6a10000  swc1        $f1, 0x0($s5)
    ctx->pc = 0x37cbd0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
label_37cbd4:
    // 0x37cbd4: 0xc6630000  lwc1        $f3, 0x0($s3)
    ctx->pc = 0x37cbd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_37cbd8:
    // 0x37cbd8: 0xc6610008  lwc1        $f1, 0x8($s3)
    ctx->pc = 0x37cbd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_37cbdc:
    // 0x37cbdc: 0xc6820008  lwc1        $f2, 0x8($s4)
    ctx->pc = 0x37cbdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_37cbe0:
    // 0x37cbe0: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x37cbe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37cbe4:
    // 0x37cbe4: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x37cbe4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_37cbe8:
    // 0x37cbe8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x37cbe8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_37cbec:
    // 0x37cbec: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x37cbecu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_37cbf0:
    // 0x37cbf0: 0xe6a20004  swc1        $f2, 0x4($s5)
    ctx->pc = 0x37cbf0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 4), bits); }
label_37cbf4:
    // 0x37cbf4: 0xc6810000  lwc1        $f1, 0x0($s4)
    ctx->pc = 0x37cbf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_37cbf8:
    // 0x37cbf8: 0xc6630004  lwc1        $f3, 0x4($s3)
    ctx->pc = 0x37cbf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_37cbfc:
    // 0x37cbfc: 0xc6800004  lwc1        $f0, 0x4($s4)
    ctx->pc = 0x37cbfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37cc00:
    // 0x37cc00: 0xc6620000  lwc1        $f2, 0x0($s3)
    ctx->pc = 0x37cc00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_37cc04:
    // 0x37cc04: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x37cc04u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_37cc08:
    // 0x37cc08: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x37cc08u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_37cc0c:
    // 0x37cc0c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x37cc0cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_37cc10:
    // 0x37cc10: 0xe6a10008  swc1        $f1, 0x8($s5)
    ctx->pc = 0x37cc10u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 8), bits); }
label_37cc14:
    // 0x37cc14: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x37cc14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_37cc18:
    // 0x37cc18: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x37cc18u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_37cc1c:
    // 0x37cc1c: 0xc104da4  jal         func_413690
label_37cc20:
    if (ctx->pc == 0x37CC20u) {
        ctx->pc = 0x37CC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37CC1Cu;
        // 0x37cc20: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37CC24u;
        goto label_37cc24;
    }
    ctx->pc = 0x37CC1Cu;
    SET_GPR_U32(ctx, 31, 0x37CC24u);
    ctx->pc = 0x37CC20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37CC1Cu;
    // 0x37cc20: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x413690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413690u, 0x37CC1Cu, 0x37CC24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37CC24u;
label_37cc24:
    // 0x37cc24: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x37cc24u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_37cc28:
    // 0x37cc28: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_37cc2c:
    if (ctx->pc == 0x37CC2Cu) {
        ctx->pc = 0x37CC30u;
        goto label_37cc30;
    }
    ctx->pc = 0x37CC28u;
    {
        const bool branch_taken_0x37cc28 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x37cc28) {
            ctx->pc = 0x37CC3Cu;
            goto label_37cc3c;
        }
    }
    ctx->pc = 0x37CC30u;
label_37cc30:
    // 0x37cc30: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x37cc30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_37cc34:
    // 0x37cc34: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x37cc34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_37cc38:
    // 0x37cc38: 0xe6a00000  swc1        $f0, 0x0($s5)
    ctx->pc = 0x37cc38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
label_37cc3c:
    // 0x37cc3c: 0x12c00022  beqz        $s6, . + 4 + (0x22 << 2)
label_37cc40:
    if (ctx->pc == 0x37CC40u) {
        ctx->pc = 0x37CC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37CC3Cu;
        // 0x37cc40: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37CC44u;
        goto label_37cc44;
    }
    ctx->pc = 0x37CC3Cu;
    {
        const bool branch_taken_0x37cc3c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x37CC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37CC3Cu;
        // 0x37cc40: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37cc3c) {
            ctx->pc = 0x37CCC8u;
            goto label_37ccc8;
        }
    }
    ctx->pc = 0x37CC44u;
label_37cc44:
    // 0x37cc44: 0xc6a30008  lwc1        $f3, 0x8($s5)
    ctx->pc = 0x37cc44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_37cc48:
    // 0x37cc48: 0xc6a20004  lwc1        $f2, 0x4($s5)
    ctx->pc = 0x37cc48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_37cc4c:
    // 0x37cc4c: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x37cc4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_37cc50:
    // 0x37cc50: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x37cc50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37cc54:
    // 0x37cc54: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x37cc54u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_37cc58:
    // 0x37cc58: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x37cc58u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_37cc5c:
    // 0x37cc5c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x37cc5cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_37cc60:
    // 0x37cc60: 0xe6810000  swc1        $f1, 0x0($s4)
    ctx->pc = 0x37cc60u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
label_37cc64:
    // 0x37cc64: 0xc6a30000  lwc1        $f3, 0x0($s5)
    ctx->pc = 0x37cc64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_37cc68:
    // 0x37cc68: 0xc6a10008  lwc1        $f1, 0x8($s5)
    ctx->pc = 0x37cc68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_37cc6c:
    // 0x37cc6c: 0xc6620008  lwc1        $f2, 0x8($s3)
    ctx->pc = 0x37cc6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_37cc70:
    // 0x37cc70: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x37cc70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37cc74:
    // 0x37cc74: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x37cc74u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_37cc78:
    // 0x37cc78: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x37cc78u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_37cc7c:
    // 0x37cc7c: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x37cc7cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_37cc80:
    // 0x37cc80: 0xe6820004  swc1        $f2, 0x4($s4)
    ctx->pc = 0x37cc80u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
label_37cc84:
    // 0x37cc84: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x37cc84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_37cc88:
    // 0x37cc88: 0xc6a30000  lwc1        $f3, 0x0($s5)
    ctx->pc = 0x37cc88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_37cc8c:
    // 0x37cc8c: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x37cc8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37cc90:
    // 0x37cc90: 0xc6a20004  lwc1        $f2, 0x4($s5)
    ctx->pc = 0x37cc90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_37cc94:
    // 0x37cc94: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x37cc94u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_37cc98:
    // 0x37cc98: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x37cc98u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_37cc9c:
    // 0x37cc9c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x37cc9cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_37cca0:
    // 0x37cca0: 0xe6800008  swc1        $f0, 0x8($s4)
    ctx->pc = 0x37cca0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 8), bits); }
label_37cca4:
    // 0x37cca4: 0xc104da4  jal         func_413690
label_37cca8:
    if (ctx->pc == 0x37CCA8u) {
        ctx->pc = 0x37CCA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37CCA4u;
        // 0x37cca8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37CCACu;
        goto label_37ccac;
    }
    ctx->pc = 0x37CCA4u;
    SET_GPR_U32(ctx, 31, 0x37CCACu);
    ctx->pc = 0x37CCA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37CCA4u;
    // 0x37cca8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x413690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413690u, 0x37CCA4u, 0x37CCACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37CCACu;
label_37ccac:
    // 0x37ccac: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x37ccacu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_37ccb0:
    // 0x37ccb0: 0x0  nop
    ctx->pc = 0x37ccb0u;
    // NOP
label_37ccb4:
    // 0x37ccb4: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_37ccb8:
    if (ctx->pc == 0x37CCB8u) {
        ctx->pc = 0x37CCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37CCB4u;
        // 0x37ccb8: 0x4600a806  mov.s       $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x37CCBCu;
        goto label_37ccbc;
    }
    ctx->pc = 0x37CCB4u;
    {
        const bool branch_taken_0x37ccb4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x37CCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37CCB4u;
        // 0x37ccb8: 0x4600a806  mov.s       $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x37ccb4) {
            ctx->pc = 0x37CCCCu;
            goto label_37cccc;
        }
    }
    ctx->pc = 0x37CCBCu;
label_37ccbc:
    // 0x37ccbc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x37ccbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_37ccc0:
    // 0x37ccc0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x37ccc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_37ccc4:
    // 0x37ccc4: 0xe6800004  swc1        $f0, 0x4($s4)
    ctx->pc = 0x37ccc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
label_37ccc8:
    // 0x37ccc8: 0x4600a806  mov.s       $f0, $f21
    ctx->pc = 0x37ccc8u;
    ctx->f[0] = FPU_MOV_S(ctx->f[21]);
label_37cccc:
    // 0x37cccc: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x37ccccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_37ccd0:
    // 0x37ccd0: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x37ccd0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_37ccd4:
    // 0x37ccd4: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x37ccd4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_37ccd8:
    // 0x37ccd8: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x37ccd8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_37ccdc:
    // 0x37ccdc: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x37ccdcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_37cce0:
    // 0x37cce0: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x37cce0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_37cce4:
    // 0x37cce4: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x37cce4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_37cce8:
    // 0x37cce8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x37cce8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_37ccec:
    // 0x37ccec: 0xc7b600d0  lwc1        $f22, 0xD0($sp)
    ctx->pc = 0x37ccecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_37ccf0:
    // 0x37ccf0: 0xc7b500c8  lwc1        $f21, 0xC8($sp)
    ctx->pc = 0x37ccf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_37ccf4:
    // 0x37ccf4: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x37ccf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_37ccf8:
    // 0x37ccf8: 0x3e00008  jr          $ra
label_37ccfc:
    if (ctx->pc == 0x37CCFCu) {
        ctx->pc = 0x37CCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37CCF8u;
        // 0x37ccfc: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37CD00u;
        goto label_37cd00;
    }
    ctx->pc = 0x37CCF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37CCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37CCF8u;
        // 0x37ccfc: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37CCF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37CD00u;
label_37cd00:
    // 0x37cd00: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x37cd00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_37cd04:
    // 0x37cd04: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x37cd04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_37cd08:
    // 0x37cd08: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x37cd08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_37cd0c:
    // 0x37cd0c: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x37cd0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_37cd10:
    // 0x37cd10: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x37cd10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_37cd14:
    // 0x37cd14: 0x2410000c  addiu       $s0, $zero, 0xC
    ctx->pc = 0x37cd14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_37cd18:
    // 0x37cd18: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x37cd18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_37cd1c:
    // 0x37cd1c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x37cd1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_37cd20:
    // 0x37cd20: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x37cd20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_37cd24:
    // 0x37cd24: 0x34a5000c  ori         $a1, $a1, 0xC
    ctx->pc = 0x37cd24u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)12);
label_37cd28:
    // 0x37cd28: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x37cd28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_37cd2c:
    // 0x37cd2c: 0x60a02d  daddu       $s4, $v1, $zero
    ctx->pc = 0x37cd2cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_37cd30:
    // 0x37cd30: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x37cd30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_37cd34:
    // 0x37cd34: 0x2463e880  addiu       $v1, $v1, -0x1780
    ctx->pc = 0x37cd34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961280));
label_37cd38:
    // 0x37cd38: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x37cd38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_37cd3c:
    // 0x37cd3c: 0x8c620108  lw          $v0, 0x108($v1)
    ctx->pc = 0x37cd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
label_37cd40:
    // 0x37cd40: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x37cd40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_37cd44:
    // 0x37cd44: 0x902018  mult        $a0, $a0, $s0
    ctx->pc = 0x37cd44u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_37cd48:
    // 0x37cd48: 0x40f809  jalr        $v0
label_37cd4c:
    if (ctx->pc == 0x37CD4Cu) {
        ctx->pc = 0x37CD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37CD48u;
        // 0x37cd4c: 0x24840044  addiu       $a0, $a0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 68));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37CD50u;
        goto label_37cd50;
    }
    ctx->pc = 0x37CD48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x37CD50u);
        ctx->pc = 0x37CD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37CD48u;
        // 0x37cd4c: 0x24840044  addiu       $a0, $a0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 68));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37CD48u, 0x37CD50u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x37CD50u;
label_37cd50:
    // 0x37cd50: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x37cd50u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_37cd54:
    // 0x37cd54: 0x1240003a  beqz        $s2, . + 4 + (0x3A << 2)
label_37cd58:
    if (ctx->pc == 0x37CD58u) {
        ctx->pc = 0x37CD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37CD54u;
        // 0x37cd58: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37CD5Cu;
        goto label_37cd5c;
    }
    ctx->pc = 0x37CD54u;
    {
        const bool branch_taken_0x37cd54 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x37CD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37CD54u;
        // 0x37cd58: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37cd54) {
            ctx->pc = 0x37CE40u;
            goto label_37ce40;
        }
    }
    ctx->pc = 0x37CD5Cu;
label_37cd5c:
    // 0x37cd5c: 0xa2500000  sb          $s0, 0x0($s2)
    ctx->pc = 0x37cd5cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 16));
label_37cd60:
    // 0x37cd60: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x37cd60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_37cd64:
    // 0x37cd64: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_37cd68:
    if (ctx->pc == 0x37CD68u) {
        ctx->pc = 0x37CD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37CD64u;
        // 0x37cd68: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37CD6Cu;
        goto label_37cd6c;
    }
    ctx->pc = 0x37CD64u;
    {
        const bool branch_taken_0x37cd64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x37CD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37CD64u;
        // 0x37cd68: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37cd64) {
            ctx->pc = 0x37CD7Cu;
            goto label_37cd7c;
        }
    }
    ctx->pc = 0x37CD6Cu;
label_37cd6c:
    // 0x37cd6c: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
label_37cd70:
    if (ctx->pc == 0x37CD70u) {
        ctx->pc = 0x37CD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37CD6Cu;
        // 0x37cd70: 0x24020102  addiu       $v0, $zero, 0x102 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 258));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37CD74u;
        goto label_37cd74;
    }
    ctx->pc = 0x37CD6Cu;
    {
        const bool branch_taken_0x37cd6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x37CD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37CD6Cu;
        // 0x37cd70: 0x24020102  addiu       $v0, $zero, 0x102 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 258));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37cd6c) {
            ctx->pc = 0x37CD88u;
            goto label_37cd88;
        }
    }
    ctx->pc = 0x37CD74u;
label_37cd74:
    // 0x37cd74: 0x10000007  b           . + 4 + (0x7 << 2)
label_37cd78:
    if (ctx->pc == 0x37CD78u) {
        ctx->pc = 0x37CD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37CD74u;
        // 0x37cd78: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37CD7Cu;
        goto label_37cd7c;
    }
    ctx->pc = 0x37CD74u;
    {
        const bool branch_taken_0x37cd74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37CD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37CD74u;
        // 0x37cd78: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37cd74) {
            ctx->pc = 0x37CD94u;
            goto label_37cd94;
        }
    }
    ctx->pc = 0x37CD7Cu;
label_37cd7c:
    // 0x37cd7c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x37cd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_37cd80:
    // 0x37cd80: 0x1000000b  b           . + 4 + (0xB << 2)
label_37cd84:
    if (ctx->pc == 0x37CD84u) {
        ctx->pc = 0x37CD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37CD80u;
        // 0x37cd84: 0x2453fffe  addiu       $s3, $v0, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37CD88u;
        goto label_37cd88;
    }
    ctx->pc = 0x37CD80u;
    {
        const bool branch_taken_0x37cd80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37CD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37CD80u;
        // 0x37cd84: 0x2453fffe  addiu       $s3, $v0, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37cd80) {
            ctx->pc = 0x37CDB0u;
            goto label_37cdb0;
        }
    }
    ctx->pc = 0x37CD88u;
label_37cd88:
    // 0x37cd88: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x37cd88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_37cd8c:
    // 0x37cd8c: 0x10000008  b           . + 4 + (0x8 << 2)
label_37cd90:
    if (ctx->pc == 0x37CD90u) {
        ctx->pc = 0x37CD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37CD8Cu;
        // 0x37cd90: 0x2453fffd  addiu       $s3, $v0, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37CD94u;
        goto label_37cd94;
    }
    ctx->pc = 0x37CD8Cu;
    {
        const bool branch_taken_0x37cd8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37CD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37CD8Cu;
        // 0x37cd90: 0x2453fffd  addiu       $s3, $v0, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37cd8c) {
            ctx->pc = 0x37CDB0u;
            goto label_37cdb0;
        }
    }
    ctx->pc = 0x37CD94u;
label_37cd94:
    // 0x37cd94: 0xc1035f6  jal         func_40D7D8
label_37cd98:
    if (ctx->pc == 0x37CD98u) {
        ctx->pc = 0x37CD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37CD94u;
        // 0x37cd98: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37CD9Cu;
        goto label_37cd9c;
    }
    ctx->pc = 0x37CD94u;
    SET_GPR_U32(ctx, 31, 0x37CD9Cu);
    ctx->pc = 0x37CD98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37CD94u;
    // 0x37cd98: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x37CD94u, 0x37CD9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37CD9Cu;
label_37cd9c:
    // 0x37cd9c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x37cd9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_37cda0:
    // 0x37cda0: 0xc103628  jal         func_40D8A0
label_37cda4:
    if (ctx->pc == 0x37CDA4u) {
        ctx->pc = 0x37CDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37CDA0u;
        // 0x37cda4: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37CDA8u;
        goto label_37cda8;
    }
    ctx->pc = 0x37CDA0u;
    SET_GPR_U32(ctx, 31, 0x37CDA8u);
    ctx->pc = 0x37CDA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37CDA0u;
    // 0x37cda4: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x37CDA0u, 0x37CDA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37CDA8u;
label_37cda8:
    // 0x37cda8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x37cda8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37cdac:
    // 0x37cdac: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x37cdacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_37cdb0:
    // 0x37cdb0: 0x2410000c  addiu       $s0, $zero, 0xC
    ctx->pc = 0x37cdb0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_37cdb4:
    // 0x37cdb4: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x37cdb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_37cdb8:
    // 0x37cdb8: 0x26440038  addiu       $a0, $s2, 0x38
    ctx->pc = 0x37cdb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 56));
label_37cdbc:
    // 0x37cdbc: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x37cdbcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
label_37cdc0:
    // 0x37cdc0: 0xae430010  sw          $v1, 0x10($s2)
    ctx->pc = 0x37cdc0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 3));
label_37cdc4:
    // 0x37cdc4: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x37cdc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_37cdc8:
    // 0x37cdc8: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x37cdc8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
label_37cdcc:
    // 0x37cdcc: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x37cdccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_37cdd0:
    // 0x37cdd0: 0xd00018  mult        $zero, $a2, $s0
    ctx->pc = 0x37cdd0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_37cdd4:
    // 0x37cdd4: 0x3012  mflo        $a2
    ctx->pc = 0x37cdd4u;
    SET_GPR_U64(ctx, 6, ctx->lo);
label_37cdd8:
    // 0x37cdd8: 0xc0bb778  jal         func_2EDDE0
label_37cddc:
    if (ctx->pc == 0x37CDDCu) {
        ctx->pc = 0x37CDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37CDD8u;
        // 0x37cddc: 0x26250038  addiu       $a1, $s1, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37CDE0u;
        goto label_37cde0;
    }
    ctx->pc = 0x37CDD8u;
    SET_GPR_U32(ctx, 31, 0x37CDE0u);
    ctx->pc = 0x37CDDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37CDD8u;
    // 0x37cddc: 0x26250038  addiu       $a1, $s1, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x37CDD8u, 0x37CDE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37CDE0u;
label_37cde0:
    // 0x37cde0: 0x2708018  mult        $s0, $s3, $s0
    ctx->pc = 0x37cde0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
label_37cde4:
    // 0x37cde4: 0x2683e880  addiu       $v1, $s4, -0x1780
    ctx->pc = 0x37cde4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294961280));
label_37cde8:
    // 0x37cde8: 0x8c620108  lw          $v0, 0x108($v1)
    ctx->pc = 0x37cde8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
label_37cdec:
    // 0x37cdec: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x37cdecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_37cdf0:
    // 0x37cdf0: 0x34a5000c  ori         $a1, $a1, 0xC
    ctx->pc = 0x37cdf0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)12);
label_37cdf4:
    // 0x37cdf4: 0x40f809  jalr        $v0
label_37cdf8:
    if (ctx->pc == 0x37CDF8u) {
        ctx->pc = 0x37CDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37CDF4u;
        // 0x37cdf8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37CDFCu;
        goto label_37cdfc;
    }
    ctx->pc = 0x37CDF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x37CDFCu);
        ctx->pc = 0x37CDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37CDF4u;
        // 0x37cdf8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37CDF4u, 0x37CDFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x37CDFCu;
label_37cdfc:
    // 0x37cdfc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_37ce00:
    if (ctx->pc == 0x37CE00u) {
        ctx->pc = 0x37CE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37CDFCu;
        // 0x37ce00: 0xae420014  sw          $v0, 0x14($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37CE04u;
        goto label_37ce04;
    }
    ctx->pc = 0x37CDFCu;
    {
        const bool branch_taken_0x37cdfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37CE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37CDFCu;
        // 0x37ce00: 0xae420014  sw          $v0, 0x14($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37cdfc) {
            ctx->pc = 0x37CE1Cu;
            goto label_37ce1c;
        }
    }
    ctx->pc = 0x37CE04u;
label_37ce04:
    // 0x37ce04: 0x8e250014  lw          $a1, 0x14($s1)
    ctx->pc = 0x37ce04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_37ce08:
    // 0x37ce08: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x37ce08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_37ce0c:
    // 0x37ce0c: 0xc0bb778  jal         func_2EDDE0
label_37ce10:
    if (ctx->pc == 0x37CE10u) {
        ctx->pc = 0x37CE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37CE0Cu;
        // 0x37ce10: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37CE14u;
        goto label_37ce14;
    }
    ctx->pc = 0x37CE0Cu;
    SET_GPR_U32(ctx, 31, 0x37CE14u);
    ctx->pc = 0x37CE10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37CE0Cu;
    // 0x37ce10: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x37CE0Cu, 0x37CE14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37CE14u;
label_37ce14:
    // 0x37ce14: 0x10000019  b           . + 4 + (0x19 << 2)
label_37ce18:
    if (ctx->pc == 0x37CE18u) {
        ctx->pc = 0x37CE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37CE14u;
        // 0x37ce18: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37CE1Cu;
        goto label_37ce1c;
    }
    ctx->pc = 0x37CE14u;
    {
        const bool branch_taken_0x37ce14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37CE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37CE14u;
        // 0x37ce18: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37ce14) {
            ctx->pc = 0x37CE7Cu;
            goto label_37ce7c;
        }
    }
    ctx->pc = 0x37CE1Cu;
label_37ce1c:
    // 0x37ce1c: 0x24020102  addiu       $v0, $zero, 0x102
    ctx->pc = 0x37ce1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 258));
label_37ce20:
    // 0x37ce20: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x37ce20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_37ce24:
    // 0x37ce24: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x37ce24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_37ce28:
    // 0x37ce28: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x37ce28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_37ce2c:
    // 0x37ce2c: 0xc1035f6  jal         func_40D7D8
label_37ce30:
    if (ctx->pc == 0x37CE30u) {
        ctx->pc = 0x37CE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37CE2Cu;
        // 0x37ce30: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        ctx->pc = 0x37CE34u;
        goto label_37ce34;
    }
    ctx->pc = 0x37CE2Cu;
    SET_GPR_U32(ctx, 31, 0x37CE34u);
    ctx->pc = 0x37CE30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37CE2Cu;
    // 0x37ce30: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x37CE2Cu, 0x37CE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37CE34u;
label_37ce34:
    // 0x37ce34: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x37ce34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_37ce38:
    // 0x37ce38: 0x1000000d  b           . + 4 + (0xD << 2)
label_37ce3c:
    if (ctx->pc == 0x37CE3Cu) {
        ctx->pc = 0x37CE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37CE38u;
        // 0x37ce3c: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37CE40u;
        goto label_37ce40;
    }
    ctx->pc = 0x37CE38u;
    {
        const bool branch_taken_0x37ce38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37CE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37CE38u;
        // 0x37ce3c: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37ce38) {
            ctx->pc = 0x37CE70u;
            goto label_37ce70;
        }
    }
    ctx->pc = 0x37CE40u;
label_37ce40:
    // 0x37ce40: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x37ce40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_37ce44:
    // 0x37ce44: 0x24020102  addiu       $v0, $zero, 0x102
    ctx->pc = 0x37ce44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 258));
label_37ce48:
    // 0x37ce48: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x37ce48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_37ce4c:
    // 0x37ce4c: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x37ce4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_37ce50:
    // 0x37ce50: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x37ce50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_37ce54:
    // 0x37ce54: 0x34840013  ori         $a0, $a0, 0x13
    ctx->pc = 0x37ce54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
label_37ce58:
    // 0x37ce58: 0xb02818  mult        $a1, $a1, $s0
    ctx->pc = 0x37ce58u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_37ce5c:
    // 0x37ce5c: 0xc1035f6  jal         func_40D7D8
label_37ce60:
    if (ctx->pc == 0x37CE60u) {
        ctx->pc = 0x37CE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37CE5Cu;
        // 0x37ce60: 0x24a50044  addiu       $a1, $a1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 68));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37CE64u;
        goto label_37ce64;
    }
    ctx->pc = 0x37CE5Cu;
    SET_GPR_U32(ctx, 31, 0x37CE64u);
    ctx->pc = 0x37CE60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37CE5Cu;
    // 0x37ce60: 0x24a50044  addiu       $a1, $a1, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x37CE5Cu, 0x37CE64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37CE64u;
label_37ce64:
    // 0x37ce64: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x37ce64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
label_37ce68:
    // 0x37ce68: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x37ce68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_37ce6c:
    // 0x37ce6c: 0x0  nop
    ctx->pc = 0x37ce6cu;
    // NOP
label_37ce70:
    // 0x37ce70: 0xc103628  jal         func_40D8A0
label_37ce74:
    if (ctx->pc == 0x37CE74u) {
        ctx->pc = 0x37CE78u;
        goto label_37ce78;
    }
    ctx->pc = 0x37CE70u;
    SET_GPR_U32(ctx, 31, 0x37CE78u);
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x37CE70u, 0x37CE78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37CE78u;
label_37ce78:
    // 0x37ce78: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x37ce78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37ce7c:
    // 0x37ce7c: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x37ce7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_37ce80:
    // 0x37ce80: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x37ce80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_37ce84:
    // 0x37ce84: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x37ce84u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_37ce88:
    // 0x37ce88: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x37ce88u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_37ce8c:
    // 0x37ce8c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x37ce8cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_37ce90:
    // 0x37ce90: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x37ce90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_37ce94:
    // 0x37ce94: 0x3e00008  jr          $ra
label_37ce98:
    if (ctx->pc == 0x37CE98u) {
        ctx->pc = 0x37CE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37CE94u;
        // 0x37ce98: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37CE9Cu;
        goto label_37ce9c;
    }
    ctx->pc = 0x37CE94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37CE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37CE94u;
        // 0x37ce98: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37CE94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37CE9Cu;
label_37ce9c:
    // 0x37ce9c: 0x0  nop
    ctx->pc = 0x37ce9cu;
    // NOP
label_37cea0:
    // 0x37cea0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x37cea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_37cea4:
    // 0x37cea4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x37cea4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_37cea8:
    // 0x37cea8: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x37cea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_37ceac:
    // 0x37ceac: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x37ceacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_37ceb0:
    // 0x37ceb0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x37ceb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_37ceb4:
    // 0x37ceb4: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x37ceb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_37ceb8:
    // 0x37ceb8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x37ceb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_37cebc:
    // 0x37cebc: 0xc10493e  jal         func_4124F8
label_37cec0:
    if (ctx->pc == 0x37CEC0u) {
        ctx->pc = 0x37CEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37CEBCu;
        // 0x37cec0: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37CEC4u;
        goto label_37cec4;
    }
    ctx->pc = 0x37CEBCu;
    SET_GPR_U32(ctx, 31, 0x37CEC4u);
    ctx->pc = 0x37CEC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37CEBCu;
    // 0x37cec0: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4124F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4124F8u, 0x37CEBCu, 0x37CEC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37CEC4u;
label_37cec4:
    // 0x37cec4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x37cec4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_37cec8:
    // 0x37cec8: 0x1220003b  beqz        $s1, . + 4 + (0x3B << 2)
label_37cecc:
    if (ctx->pc == 0x37CECCu) {
        ctx->pc = 0x37CECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37CEC8u;
        // 0x37cecc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37CED0u;
        goto label_37ced0;
    }
    ctx->pc = 0x37CEC8u;
    {
        const bool branch_taken_0x37cec8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x37CECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37CEC8u;
        // 0x37cecc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37cec8) {
            ctx->pc = 0x37CFB8u;
            goto label_37cfb8;
        }
    }
    ctx->pc = 0x37CED0u;
label_37ced0:
    // 0x37ced0: 0xc0df56c  jal         func_37D5B0
label_37ced4:
    if (ctx->pc == 0x37CED4u) {
        ctx->pc = 0x37CED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37CED0u;
        // 0x37ced4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37CED8u;
        goto label_37ced8;
    }
    ctx->pc = 0x37CED0u;
    SET_GPR_U32(ctx, 31, 0x37CED8u);
    ctx->pc = 0x37CED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37CED0u;
    // 0x37ced4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37D5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D5B0u, 0x37CED0u, 0x37CED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37CED8u;
label_37ced8:
    // 0x37ced8: 0x3c070003  lui         $a3, 0x3
    ctx->pc = 0x37ced8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3 << 16));
label_37cedc:
    // 0x37cedc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x37cedcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_37cee0:
    // 0x37cee0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x37cee0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_37cee4:
    // 0x37cee4: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x37cee4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_37cee8:
    // 0x37cee8: 0x34e77002  ori         $a3, $a3, 0x7002
    ctx->pc = 0x37cee8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)28674);
label_37ceec:
    // 0x37ceec: 0xc103404  jal         func_40D010
label_37cef0:
    if (ctx->pc == 0x37CEF0u) {
        ctx->pc = 0x37CEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37CEECu;
        // 0x37cef0: 0x2408002d  addiu       $t0, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37CEF4u;
        goto label_37cef4;
    }
    ctx->pc = 0x37CEECu;
    SET_GPR_U32(ctx, 31, 0x37CEF4u);
    ctx->pc = 0x37CEF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37CEECu;
    // 0x37cef0: 0x2408002d  addiu       $t0, $zero, 0x2D (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D010u, 0x37CEECu, 0x37CEF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37CEF4u;
label_37cef4:
    // 0x37cef4: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_37cef8:
    if (ctx->pc == 0x37CEF8u) {
        ctx->pc = 0x37CEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37CEF4u;
        // 0x37cef8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37CEFCu;
        goto label_37cefc;
    }
    ctx->pc = 0x37CEF4u;
    {
        const bool branch_taken_0x37cef4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37CEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37CEF4u;
        // 0x37cef8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37cef4) {
            ctx->pc = 0x37CF94u;
            goto label_37cf94;
        }
    }
    ctx->pc = 0x37CEFCu;
label_37cefc:
    // 0x37cefc: 0xc0df4a4  jal         func_37D290
label_37cf00:
    if (ctx->pc == 0x37CF00u) {
        ctx->pc = 0x37CF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37CEFCu;
        // 0x37cf00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37CF04u;
        goto label_37cf04;
    }
    ctx->pc = 0x37CEFCu;
    SET_GPR_U32(ctx, 31, 0x37CF04u);
    ctx->pc = 0x37CF00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37CEFCu;
    // 0x37cf00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37D290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D290u, 0x37CEFCu, 0x37CF04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37CF04u;
label_37cf04:
    // 0x37cf04: 0x26050018  addiu       $a1, $s0, 0x18
    ctx->pc = 0x37cf04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
label_37cf08:
    // 0x37cf08: 0x14a0000b  bnez        $a1, . + 4 + (0xB << 2)
label_37cf0c:
    if (ctx->pc == 0x37CF0Cu) {
        ctx->pc = 0x37CF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37CF08u;
        // 0x37cf0c: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37CF10u;
        goto label_37cf10;
    }
    ctx->pc = 0x37CF08u;
    {
        const bool branch_taken_0x37cf08 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x37CF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37CF08u;
        // 0x37cf0c: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37cf08) {
            ctx->pc = 0x37CF38u;
            goto label_37cf38;
        }
    }
    ctx->pc = 0x37CF10u;
label_37cf10:
    // 0x37cf10: 0x24020102  addiu       $v0, $zero, 0x102
    ctx->pc = 0x37cf10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 258));
label_37cf14:
    // 0x37cf14: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x37cf14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37cf18:
    // 0x37cf18: 0xc1035f6  jal         func_40D7D8
label_37cf1c:
    if (ctx->pc == 0x37CF1Cu) {
        ctx->pc = 0x37CF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37CF18u;
        // 0x37cf1c: 0xafa20030  sw          $v0, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37CF20u;
        goto label_37cf20;
    }
    ctx->pc = 0x37CF18u;
    SET_GPR_U32(ctx, 31, 0x37CF20u);
    ctx->pc = 0x37CF1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37CF18u;
    // 0x37cf1c: 0xafa20030  sw          $v0, 0x30($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x37CF18u, 0x37CF20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37CF20u;
label_37cf20:
    // 0x37cf20: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x37cf20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
label_37cf24:
    // 0x37cf24: 0xc103628  jal         func_40D8A0
label_37cf28:
    if (ctx->pc == 0x37CF28u) {
        ctx->pc = 0x37CF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37CF24u;
        // 0x37cf28: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37CF2Cu;
        goto label_37cf2c;
    }
    ctx->pc = 0x37CF24u;
    SET_GPR_U32(ctx, 31, 0x37CF2Cu);
    ctx->pc = 0x37CF28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37CF24u;
    // 0x37cf28: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x37CF24u, 0x37CF2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37CF2Cu;
label_37cf2c:
    // 0x37cf2c: 0x10000019  b           . + 4 + (0x19 << 2)
label_37cf30:
    if (ctx->pc == 0x37CF30u) {
        ctx->pc = 0x37CF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37CF2Cu;
        // 0x37cf30: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37CF34u;
        goto label_37cf34;
    }
    ctx->pc = 0x37CF2Cu;
    {
        const bool branch_taken_0x37cf2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37CF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37CF2Cu;
        // 0x37cf30: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37cf2c) {
            ctx->pc = 0x37CF94u;
            goto label_37cf94;
        }
    }
    ctx->pc = 0x37CF34u;
label_37cf34:
    // 0x37cf34: 0x0  nop
    ctx->pc = 0x37cf34u;
    // NOP
label_37cf38:
    // 0x37cf38: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x37cf38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_37cf3c:
    // 0x37cf3c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x37cf3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_37cf40:
    // 0x37cf40: 0x8c62e950  lw          $v0, -0x16B0($v1)
    ctx->pc = 0x37cf40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961488)));
label_37cf44:
    // 0x37cf44: 0x40f809  jalr        $v0
label_37cf48:
    if (ctx->pc == 0x37CF48u) {
        ctx->pc = 0x37CF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37CF44u;
        // 0x37cf48: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37CF4Cu;
        goto label_37cf4c;
    }
    ctx->pc = 0x37CF44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x37CF4Cu);
        ctx->pc = 0x37CF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37CF44u;
        // 0x37cf48: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37CF44u, 0x37CF4Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x37CF4Cu;
label_37cf4c:
    // 0x37cf4c: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x37cf4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_37cf50:
    // 0x37cf50: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x37cf50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_37cf54:
    // 0x37cf54: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x37cf54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_37cf58:
    // 0x37cf58: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x37cf58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_37cf5c:
    // 0x37cf5c: 0xc10486e  jal         func_4121B8
label_37cf60:
    if (ctx->pc == 0x37CF60u) {
        ctx->pc = 0x37CF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37CF5Cu;
        // 0x37cf60: 0xafa30024  sw          $v1, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37CF64u;
        goto label_37cf64;
    }
    ctx->pc = 0x37CF5Cu;
    SET_GPR_U32(ctx, 31, 0x37CF64u);
    ctx->pc = 0x37CF60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37CF5Cu;
    // 0x37cf60: 0xafa30024  sw          $v1, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4121B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4121B8u, 0x37CF5Cu, 0x37CF64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37CF64u;
label_37cf64:
    // 0x37cf64: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_37cf68:
    if (ctx->pc == 0x37CF68u) {
        ctx->pc = 0x37CF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37CF64u;
        // 0x37cf68: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37CF6Cu;
        goto label_37cf6c;
    }
    ctx->pc = 0x37CF64u;
    {
        const bool branch_taken_0x37cf64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37CF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37CF64u;
        // 0x37cf68: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37cf64) {
            ctx->pc = 0x37CF94u;
            goto label_37cf94;
        }
    }
    ctx->pc = 0x37CF6Cu;
label_37cf6c:
    // 0x37cf6c: 0xc0df4a4  jal         func_37D290
label_37cf70:
    if (ctx->pc == 0x37CF70u) {
        ctx->pc = 0x37CF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37CF6Cu;
        // 0x37cf70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37CF74u;
        goto label_37cf74;
    }
    ctx->pc = 0x37CF6Cu;
    SET_GPR_U32(ctx, 31, 0x37CF74u);
    ctx->pc = 0x37CF70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37CF6Cu;
    // 0x37cf70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37D290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D290u, 0x37CF6Cu, 0x37CF74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37CF74u;
label_37cf74:
    // 0x37cf74: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x37cf74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_37cf78:
    // 0x37cf78: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x37cf78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_37cf7c:
    // 0x37cf7c: 0x460018  mult        $zero, $v0, $a2
    ctx->pc = 0x37cf7cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_37cf80:
    // 0x37cf80: 0x3012  mflo        $a2
    ctx->pc = 0x37cf80u;
    SET_GPR_U64(ctx, 6, ctx->lo);
label_37cf84:
    // 0x37cf84: 0xc10341a  jal         func_40D068
label_37cf88:
    if (ctx->pc == 0x37CF88u) {
        ctx->pc = 0x37CF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37CF84u;
        // 0x37cf88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37CF8Cu;
        goto label_37cf8c;
    }
    ctx->pc = 0x37CF84u;
    SET_GPR_U32(ctx, 31, 0x37CF8Cu);
    ctx->pc = 0x37CF88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37CF84u;
    // 0x37cf88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D068u, 0x37CF84u, 0x37CF8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37CF8Cu;
label_37cf8c:
    // 0x37cf8c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x37cf8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37cf90:
    // 0x37cf90: 0x202200b  movn        $a0, $s0, $v0
    ctx->pc = 0x37cf90u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 16));
label_37cf94:
    // 0x37cf94: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_37cf98:
    if (ctx->pc == 0x37CF98u) {
        ctx->pc = 0x37CF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37CF94u;
        // 0x37cf98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37CF9Cu;
        goto label_37cf9c;
    }
    ctx->pc = 0x37CF94u;
    {
        const bool branch_taken_0x37cf94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x37CF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37CF94u;
        // 0x37cf98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37cf94) {
            ctx->pc = 0x37CFACu;
            goto label_37cfac;
        }
    }
    ctx->pc = 0x37CF9Cu;
label_37cf9c:
    // 0x37cf9c: 0xc10496a  jal         func_4125A8
label_37cfa0:
    if (ctx->pc == 0x37CFA0u) {
        ctx->pc = 0x37CFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37CF9Cu;
        // 0x37cfa0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37CFA4u;
        goto label_37cfa4;
    }
    ctx->pc = 0x37CF9Cu;
    SET_GPR_U32(ctx, 31, 0x37CFA4u);
    ctx->pc = 0x37CFA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37CF9Cu;
    // 0x37cfa0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4125A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4125A8u, 0x37CF9Cu, 0x37CFA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37CFA4u;
label_37cfa4:
    // 0x37cfa4: 0x10000004  b           . + 4 + (0x4 << 2)
label_37cfa8:
    if (ctx->pc == 0x37CFA8u) {
        ctx->pc = 0x37CFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37CFA4u;
        // 0x37cfa8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37CFACu;
        goto label_37cfac;
    }
    ctx->pc = 0x37CFA4u;
    {
        const bool branch_taken_0x37cfa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37CFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37CFA4u;
        // 0x37cfa8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37cfa4) {
            ctx->pc = 0x37CFB8u;
            goto label_37cfb8;
        }
    }
    ctx->pc = 0x37CFACu;
label_37cfac:
    // 0x37cfac: 0xc10496a  jal         func_4125A8
label_37cfb0:
    if (ctx->pc == 0x37CFB0u) {
        ctx->pc = 0x37CFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37CFACu;
        // 0x37cfb0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37CFB4u;
        goto label_37cfb4;
    }
    ctx->pc = 0x37CFACu;
    SET_GPR_U32(ctx, 31, 0x37CFB4u);
    ctx->pc = 0x37CFB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37CFACu;
    // 0x37cfb0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4125A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4125A8u, 0x37CFACu, 0x37CFB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37CFB4u;
label_37cfb4:
    // 0x37cfb4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x37cfb4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37cfb8:
    // 0x37cfb8: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x37cfb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_37cfbc:
    // 0x37cfbc: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x37cfbcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_37cfc0:
    // 0x37cfc0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x37cfc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_37cfc4:
    // 0x37cfc4: 0x3e00008  jr          $ra
label_37cfc8:
    if (ctx->pc == 0x37CFC8u) {
        ctx->pc = 0x37CFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37CFC4u;
        // 0x37cfc8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37CFCCu;
        goto label_37cfcc;
    }
    ctx->pc = 0x37CFC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37CFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37CFC4u;
        // 0x37cfc8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37CFC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37CFCCu;
label_37cfcc:
    // 0x37cfcc: 0x0  nop
    ctx->pc = 0x37cfccu;
    // NOP
    ctx->pc = 0x37cfd0u;
}
