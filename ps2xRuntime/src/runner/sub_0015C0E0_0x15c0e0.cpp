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

// Function: sub_0015C0E0
// Address: 0x15c0e0 - 0x15cb00
void sub_0015C0E0_0x15c0e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015C0E0_0x15c0e0");
#endif

    switch (ctx->pc) {
        case 0x15c0e0u: goto label_15c0e0;
        case 0x15c0e4u: goto label_15c0e4;
        case 0x15c0e8u: goto label_15c0e8;
        case 0x15c0ecu: goto label_15c0ec;
        case 0x15c0f0u: goto label_15c0f0;
        case 0x15c0f4u: goto label_15c0f4;
        case 0x15c0f8u: goto label_15c0f8;
        case 0x15c0fcu: goto label_15c0fc;
        case 0x15c100u: goto label_15c100;
        case 0x15c104u: goto label_15c104;
        case 0x15c108u: goto label_15c108;
        case 0x15c10cu: goto label_15c10c;
        case 0x15c110u: goto label_15c110;
        case 0x15c114u: goto label_15c114;
        case 0x15c118u: goto label_15c118;
        case 0x15c11cu: goto label_15c11c;
        case 0x15c120u: goto label_15c120;
        case 0x15c124u: goto label_15c124;
        case 0x15c128u: goto label_15c128;
        case 0x15c12cu: goto label_15c12c;
        case 0x15c130u: goto label_15c130;
        case 0x15c134u: goto label_15c134;
        case 0x15c138u: goto label_15c138;
        case 0x15c13cu: goto label_15c13c;
        case 0x15c140u: goto label_15c140;
        case 0x15c144u: goto label_15c144;
        case 0x15c148u: goto label_15c148;
        case 0x15c14cu: goto label_15c14c;
        case 0x15c150u: goto label_15c150;
        case 0x15c154u: goto label_15c154;
        case 0x15c158u: goto label_15c158;
        case 0x15c15cu: goto label_15c15c;
        case 0x15c160u: goto label_15c160;
        case 0x15c164u: goto label_15c164;
        case 0x15c168u: goto label_15c168;
        case 0x15c16cu: goto label_15c16c;
        case 0x15c170u: goto label_15c170;
        case 0x15c174u: goto label_15c174;
        case 0x15c178u: goto label_15c178;
        case 0x15c17cu: goto label_15c17c;
        case 0x15c180u: goto label_15c180;
        case 0x15c184u: goto label_15c184;
        case 0x15c188u: goto label_15c188;
        case 0x15c18cu: goto label_15c18c;
        case 0x15c190u: goto label_15c190;
        case 0x15c194u: goto label_15c194;
        case 0x15c198u: goto label_15c198;
        case 0x15c19cu: goto label_15c19c;
        case 0x15c1a0u: goto label_15c1a0;
        case 0x15c1a4u: goto label_15c1a4;
        case 0x15c1a8u: goto label_15c1a8;
        case 0x15c1acu: goto label_15c1ac;
        case 0x15c1b0u: goto label_15c1b0;
        case 0x15c1b4u: goto label_15c1b4;
        case 0x15c1b8u: goto label_15c1b8;
        case 0x15c1bcu: goto label_15c1bc;
        case 0x15c1c0u: goto label_15c1c0;
        case 0x15c1c4u: goto label_15c1c4;
        case 0x15c1c8u: goto label_15c1c8;
        case 0x15c1ccu: goto label_15c1cc;
        case 0x15c1d0u: goto label_15c1d0;
        case 0x15c1d4u: goto label_15c1d4;
        case 0x15c1d8u: goto label_15c1d8;
        case 0x15c1dcu: goto label_15c1dc;
        case 0x15c1e0u: goto label_15c1e0;
        case 0x15c1e4u: goto label_15c1e4;
        case 0x15c1e8u: goto label_15c1e8;
        case 0x15c1ecu: goto label_15c1ec;
        case 0x15c1f0u: goto label_15c1f0;
        case 0x15c1f4u: goto label_15c1f4;
        case 0x15c1f8u: goto label_15c1f8;
        case 0x15c1fcu: goto label_15c1fc;
        case 0x15c200u: goto label_15c200;
        case 0x15c204u: goto label_15c204;
        case 0x15c208u: goto label_15c208;
        case 0x15c20cu: goto label_15c20c;
        case 0x15c210u: goto label_15c210;
        case 0x15c214u: goto label_15c214;
        case 0x15c218u: goto label_15c218;
        case 0x15c21cu: goto label_15c21c;
        case 0x15c220u: goto label_15c220;
        case 0x15c224u: goto label_15c224;
        case 0x15c228u: goto label_15c228;
        case 0x15c22cu: goto label_15c22c;
        case 0x15c230u: goto label_15c230;
        case 0x15c234u: goto label_15c234;
        case 0x15c238u: goto label_15c238;
        case 0x15c23cu: goto label_15c23c;
        case 0x15c240u: goto label_15c240;
        case 0x15c244u: goto label_15c244;
        case 0x15c248u: goto label_15c248;
        case 0x15c24cu: goto label_15c24c;
        case 0x15c250u: goto label_15c250;
        case 0x15c254u: goto label_15c254;
        case 0x15c258u: goto label_15c258;
        case 0x15c25cu: goto label_15c25c;
        case 0x15c260u: goto label_15c260;
        case 0x15c264u: goto label_15c264;
        case 0x15c268u: goto label_15c268;
        case 0x15c26cu: goto label_15c26c;
        case 0x15c270u: goto label_15c270;
        case 0x15c274u: goto label_15c274;
        case 0x15c278u: goto label_15c278;
        case 0x15c27cu: goto label_15c27c;
        case 0x15c280u: goto label_15c280;
        case 0x15c284u: goto label_15c284;
        case 0x15c288u: goto label_15c288;
        case 0x15c28cu: goto label_15c28c;
        case 0x15c290u: goto label_15c290;
        case 0x15c294u: goto label_15c294;
        case 0x15c298u: goto label_15c298;
        case 0x15c29cu: goto label_15c29c;
        case 0x15c2a0u: goto label_15c2a0;
        case 0x15c2a4u: goto label_15c2a4;
        case 0x15c2a8u: goto label_15c2a8;
        case 0x15c2acu: goto label_15c2ac;
        case 0x15c2b0u: goto label_15c2b0;
        case 0x15c2b4u: goto label_15c2b4;
        case 0x15c2b8u: goto label_15c2b8;
        case 0x15c2bcu: goto label_15c2bc;
        case 0x15c2c0u: goto label_15c2c0;
        case 0x15c2c4u: goto label_15c2c4;
        case 0x15c2c8u: goto label_15c2c8;
        case 0x15c2ccu: goto label_15c2cc;
        case 0x15c2d0u: goto label_15c2d0;
        case 0x15c2d4u: goto label_15c2d4;
        case 0x15c2d8u: goto label_15c2d8;
        case 0x15c2dcu: goto label_15c2dc;
        case 0x15c2e0u: goto label_15c2e0;
        case 0x15c2e4u: goto label_15c2e4;
        case 0x15c2e8u: goto label_15c2e8;
        case 0x15c2ecu: goto label_15c2ec;
        case 0x15c2f0u: goto label_15c2f0;
        case 0x15c2f4u: goto label_15c2f4;
        case 0x15c2f8u: goto label_15c2f8;
        case 0x15c2fcu: goto label_15c2fc;
        case 0x15c300u: goto label_15c300;
        case 0x15c304u: goto label_15c304;
        case 0x15c308u: goto label_15c308;
        case 0x15c30cu: goto label_15c30c;
        case 0x15c310u: goto label_15c310;
        case 0x15c314u: goto label_15c314;
        case 0x15c318u: goto label_15c318;
        case 0x15c31cu: goto label_15c31c;
        case 0x15c320u: goto label_15c320;
        case 0x15c324u: goto label_15c324;
        case 0x15c328u: goto label_15c328;
        case 0x15c32cu: goto label_15c32c;
        case 0x15c330u: goto label_15c330;
        case 0x15c334u: goto label_15c334;
        case 0x15c338u: goto label_15c338;
        case 0x15c33cu: goto label_15c33c;
        case 0x15c340u: goto label_15c340;
        case 0x15c344u: goto label_15c344;
        case 0x15c348u: goto label_15c348;
        case 0x15c34cu: goto label_15c34c;
        case 0x15c350u: goto label_15c350;
        case 0x15c354u: goto label_15c354;
        case 0x15c358u: goto label_15c358;
        case 0x15c35cu: goto label_15c35c;
        case 0x15c360u: goto label_15c360;
        case 0x15c364u: goto label_15c364;
        case 0x15c368u: goto label_15c368;
        case 0x15c36cu: goto label_15c36c;
        case 0x15c370u: goto label_15c370;
        case 0x15c374u: goto label_15c374;
        case 0x15c378u: goto label_15c378;
        case 0x15c37cu: goto label_15c37c;
        case 0x15c380u: goto label_15c380;
        case 0x15c384u: goto label_15c384;
        case 0x15c388u: goto label_15c388;
        case 0x15c38cu: goto label_15c38c;
        case 0x15c390u: goto label_15c390;
        case 0x15c394u: goto label_15c394;
        case 0x15c398u: goto label_15c398;
        case 0x15c39cu: goto label_15c39c;
        case 0x15c3a0u: goto label_15c3a0;
        case 0x15c3a4u: goto label_15c3a4;
        case 0x15c3a8u: goto label_15c3a8;
        case 0x15c3acu: goto label_15c3ac;
        case 0x15c3b0u: goto label_15c3b0;
        case 0x15c3b4u: goto label_15c3b4;
        case 0x15c3b8u: goto label_15c3b8;
        case 0x15c3bcu: goto label_15c3bc;
        case 0x15c3c0u: goto label_15c3c0;
        case 0x15c3c4u: goto label_15c3c4;
        case 0x15c3c8u: goto label_15c3c8;
        case 0x15c3ccu: goto label_15c3cc;
        case 0x15c3d0u: goto label_15c3d0;
        case 0x15c3d4u: goto label_15c3d4;
        case 0x15c3d8u: goto label_15c3d8;
        case 0x15c3dcu: goto label_15c3dc;
        case 0x15c3e0u: goto label_15c3e0;
        case 0x15c3e4u: goto label_15c3e4;
        case 0x15c3e8u: goto label_15c3e8;
        case 0x15c3ecu: goto label_15c3ec;
        case 0x15c3f0u: goto label_15c3f0;
        case 0x15c3f4u: goto label_15c3f4;
        case 0x15c3f8u: goto label_15c3f8;
        case 0x15c3fcu: goto label_15c3fc;
        case 0x15c400u: goto label_15c400;
        case 0x15c404u: goto label_15c404;
        case 0x15c408u: goto label_15c408;
        case 0x15c40cu: goto label_15c40c;
        case 0x15c410u: goto label_15c410;
        case 0x15c414u: goto label_15c414;
        case 0x15c418u: goto label_15c418;
        case 0x15c41cu: goto label_15c41c;
        case 0x15c420u: goto label_15c420;
        case 0x15c424u: goto label_15c424;
        case 0x15c428u: goto label_15c428;
        case 0x15c42cu: goto label_15c42c;
        case 0x15c430u: goto label_15c430;
        case 0x15c434u: goto label_15c434;
        case 0x15c438u: goto label_15c438;
        case 0x15c43cu: goto label_15c43c;
        case 0x15c440u: goto label_15c440;
        case 0x15c444u: goto label_15c444;
        case 0x15c448u: goto label_15c448;
        case 0x15c44cu: goto label_15c44c;
        case 0x15c450u: goto label_15c450;
        case 0x15c454u: goto label_15c454;
        case 0x15c458u: goto label_15c458;
        case 0x15c45cu: goto label_15c45c;
        case 0x15c460u: goto label_15c460;
        case 0x15c464u: goto label_15c464;
        case 0x15c468u: goto label_15c468;
        case 0x15c46cu: goto label_15c46c;
        case 0x15c470u: goto label_15c470;
        case 0x15c474u: goto label_15c474;
        case 0x15c478u: goto label_15c478;
        case 0x15c47cu: goto label_15c47c;
        case 0x15c480u: goto label_15c480;
        case 0x15c484u: goto label_15c484;
        case 0x15c488u: goto label_15c488;
        case 0x15c48cu: goto label_15c48c;
        case 0x15c490u: goto label_15c490;
        case 0x15c494u: goto label_15c494;
        case 0x15c498u: goto label_15c498;
        case 0x15c49cu: goto label_15c49c;
        case 0x15c4a0u: goto label_15c4a0;
        case 0x15c4a4u: goto label_15c4a4;
        case 0x15c4a8u: goto label_15c4a8;
        case 0x15c4acu: goto label_15c4ac;
        case 0x15c4b0u: goto label_15c4b0;
        case 0x15c4b4u: goto label_15c4b4;
        case 0x15c4b8u: goto label_15c4b8;
        case 0x15c4bcu: goto label_15c4bc;
        case 0x15c4c0u: goto label_15c4c0;
        case 0x15c4c4u: goto label_15c4c4;
        case 0x15c4c8u: goto label_15c4c8;
        case 0x15c4ccu: goto label_15c4cc;
        case 0x15c4d0u: goto label_15c4d0;
        case 0x15c4d4u: goto label_15c4d4;
        case 0x15c4d8u: goto label_15c4d8;
        case 0x15c4dcu: goto label_15c4dc;
        case 0x15c4e0u: goto label_15c4e0;
        case 0x15c4e4u: goto label_15c4e4;
        case 0x15c4e8u: goto label_15c4e8;
        case 0x15c4ecu: goto label_15c4ec;
        case 0x15c4f0u: goto label_15c4f0;
        case 0x15c4f4u: goto label_15c4f4;
        case 0x15c4f8u: goto label_15c4f8;
        case 0x15c4fcu: goto label_15c4fc;
        case 0x15c500u: goto label_15c500;
        case 0x15c504u: goto label_15c504;
        case 0x15c508u: goto label_15c508;
        case 0x15c50cu: goto label_15c50c;
        case 0x15c510u: goto label_15c510;
        case 0x15c514u: goto label_15c514;
        case 0x15c518u: goto label_15c518;
        case 0x15c51cu: goto label_15c51c;
        case 0x15c520u: goto label_15c520;
        case 0x15c524u: goto label_15c524;
        case 0x15c528u: goto label_15c528;
        case 0x15c52cu: goto label_15c52c;
        case 0x15c530u: goto label_15c530;
        case 0x15c534u: goto label_15c534;
        case 0x15c538u: goto label_15c538;
        case 0x15c53cu: goto label_15c53c;
        case 0x15c540u: goto label_15c540;
        case 0x15c544u: goto label_15c544;
        case 0x15c548u: goto label_15c548;
        case 0x15c54cu: goto label_15c54c;
        case 0x15c550u: goto label_15c550;
        case 0x15c554u: goto label_15c554;
        case 0x15c558u: goto label_15c558;
        case 0x15c55cu: goto label_15c55c;
        case 0x15c560u: goto label_15c560;
        case 0x15c564u: goto label_15c564;
        case 0x15c568u: goto label_15c568;
        case 0x15c56cu: goto label_15c56c;
        case 0x15c570u: goto label_15c570;
        case 0x15c574u: goto label_15c574;
        case 0x15c578u: goto label_15c578;
        case 0x15c57cu: goto label_15c57c;
        case 0x15c580u: goto label_15c580;
        case 0x15c584u: goto label_15c584;
        case 0x15c588u: goto label_15c588;
        case 0x15c58cu: goto label_15c58c;
        case 0x15c590u: goto label_15c590;
        case 0x15c594u: goto label_15c594;
        case 0x15c598u: goto label_15c598;
        case 0x15c59cu: goto label_15c59c;
        case 0x15c5a0u: goto label_15c5a0;
        case 0x15c5a4u: goto label_15c5a4;
        case 0x15c5a8u: goto label_15c5a8;
        case 0x15c5acu: goto label_15c5ac;
        case 0x15c5b0u: goto label_15c5b0;
        case 0x15c5b4u: goto label_15c5b4;
        case 0x15c5b8u: goto label_15c5b8;
        case 0x15c5bcu: goto label_15c5bc;
        case 0x15c5c0u: goto label_15c5c0;
        case 0x15c5c4u: goto label_15c5c4;
        case 0x15c5c8u: goto label_15c5c8;
        case 0x15c5ccu: goto label_15c5cc;
        case 0x15c5d0u: goto label_15c5d0;
        case 0x15c5d4u: goto label_15c5d4;
        case 0x15c5d8u: goto label_15c5d8;
        case 0x15c5dcu: goto label_15c5dc;
        case 0x15c5e0u: goto label_15c5e0;
        case 0x15c5e4u: goto label_15c5e4;
        case 0x15c5e8u: goto label_15c5e8;
        case 0x15c5ecu: goto label_15c5ec;
        case 0x15c5f0u: goto label_15c5f0;
        case 0x15c5f4u: goto label_15c5f4;
        case 0x15c5f8u: goto label_15c5f8;
        case 0x15c5fcu: goto label_15c5fc;
        case 0x15c600u: goto label_15c600;
        case 0x15c604u: goto label_15c604;
        case 0x15c608u: goto label_15c608;
        case 0x15c60cu: goto label_15c60c;
        case 0x15c610u: goto label_15c610;
        case 0x15c614u: goto label_15c614;
        case 0x15c618u: goto label_15c618;
        case 0x15c61cu: goto label_15c61c;
        case 0x15c620u: goto label_15c620;
        case 0x15c624u: goto label_15c624;
        case 0x15c628u: goto label_15c628;
        case 0x15c62cu: goto label_15c62c;
        case 0x15c630u: goto label_15c630;
        case 0x15c634u: goto label_15c634;
        case 0x15c638u: goto label_15c638;
        case 0x15c63cu: goto label_15c63c;
        case 0x15c640u: goto label_15c640;
        case 0x15c644u: goto label_15c644;
        case 0x15c648u: goto label_15c648;
        case 0x15c64cu: goto label_15c64c;
        case 0x15c650u: goto label_15c650;
        case 0x15c654u: goto label_15c654;
        case 0x15c658u: goto label_15c658;
        case 0x15c65cu: goto label_15c65c;
        case 0x15c660u: goto label_15c660;
        case 0x15c664u: goto label_15c664;
        case 0x15c668u: goto label_15c668;
        case 0x15c66cu: goto label_15c66c;
        case 0x15c670u: goto label_15c670;
        case 0x15c674u: goto label_15c674;
        case 0x15c678u: goto label_15c678;
        case 0x15c67cu: goto label_15c67c;
        case 0x15c680u: goto label_15c680;
        case 0x15c684u: goto label_15c684;
        case 0x15c688u: goto label_15c688;
        case 0x15c68cu: goto label_15c68c;
        case 0x15c690u: goto label_15c690;
        case 0x15c694u: goto label_15c694;
        case 0x15c698u: goto label_15c698;
        case 0x15c69cu: goto label_15c69c;
        case 0x15c6a0u: goto label_15c6a0;
        case 0x15c6a4u: goto label_15c6a4;
        case 0x15c6a8u: goto label_15c6a8;
        case 0x15c6acu: goto label_15c6ac;
        case 0x15c6b0u: goto label_15c6b0;
        case 0x15c6b4u: goto label_15c6b4;
        case 0x15c6b8u: goto label_15c6b8;
        case 0x15c6bcu: goto label_15c6bc;
        case 0x15c6c0u: goto label_15c6c0;
        case 0x15c6c4u: goto label_15c6c4;
        case 0x15c6c8u: goto label_15c6c8;
        case 0x15c6ccu: goto label_15c6cc;
        case 0x15c6d0u: goto label_15c6d0;
        case 0x15c6d4u: goto label_15c6d4;
        case 0x15c6d8u: goto label_15c6d8;
        case 0x15c6dcu: goto label_15c6dc;
        case 0x15c6e0u: goto label_15c6e0;
        case 0x15c6e4u: goto label_15c6e4;
        case 0x15c6e8u: goto label_15c6e8;
        case 0x15c6ecu: goto label_15c6ec;
        case 0x15c6f0u: goto label_15c6f0;
        case 0x15c6f4u: goto label_15c6f4;
        case 0x15c6f8u: goto label_15c6f8;
        case 0x15c6fcu: goto label_15c6fc;
        case 0x15c700u: goto label_15c700;
        case 0x15c704u: goto label_15c704;
        case 0x15c708u: goto label_15c708;
        case 0x15c70cu: goto label_15c70c;
        case 0x15c710u: goto label_15c710;
        case 0x15c714u: goto label_15c714;
        case 0x15c718u: goto label_15c718;
        case 0x15c71cu: goto label_15c71c;
        case 0x15c720u: goto label_15c720;
        case 0x15c724u: goto label_15c724;
        case 0x15c728u: goto label_15c728;
        case 0x15c72cu: goto label_15c72c;
        case 0x15c730u: goto label_15c730;
        case 0x15c734u: goto label_15c734;
        case 0x15c738u: goto label_15c738;
        case 0x15c73cu: goto label_15c73c;
        case 0x15c740u: goto label_15c740;
        case 0x15c744u: goto label_15c744;
        case 0x15c748u: goto label_15c748;
        case 0x15c74cu: goto label_15c74c;
        case 0x15c750u: goto label_15c750;
        case 0x15c754u: goto label_15c754;
        case 0x15c758u: goto label_15c758;
        case 0x15c75cu: goto label_15c75c;
        case 0x15c760u: goto label_15c760;
        case 0x15c764u: goto label_15c764;
        case 0x15c768u: goto label_15c768;
        case 0x15c76cu: goto label_15c76c;
        case 0x15c770u: goto label_15c770;
        case 0x15c774u: goto label_15c774;
        case 0x15c778u: goto label_15c778;
        case 0x15c77cu: goto label_15c77c;
        case 0x15c780u: goto label_15c780;
        case 0x15c784u: goto label_15c784;
        case 0x15c788u: goto label_15c788;
        case 0x15c78cu: goto label_15c78c;
        case 0x15c790u: goto label_15c790;
        case 0x15c794u: goto label_15c794;
        case 0x15c798u: goto label_15c798;
        case 0x15c79cu: goto label_15c79c;
        case 0x15c7a0u: goto label_15c7a0;
        case 0x15c7a4u: goto label_15c7a4;
        case 0x15c7a8u: goto label_15c7a8;
        case 0x15c7acu: goto label_15c7ac;
        case 0x15c7b0u: goto label_15c7b0;
        case 0x15c7b4u: goto label_15c7b4;
        case 0x15c7b8u: goto label_15c7b8;
        case 0x15c7bcu: goto label_15c7bc;
        case 0x15c7c0u: goto label_15c7c0;
        case 0x15c7c4u: goto label_15c7c4;
        case 0x15c7c8u: goto label_15c7c8;
        case 0x15c7ccu: goto label_15c7cc;
        case 0x15c7d0u: goto label_15c7d0;
        case 0x15c7d4u: goto label_15c7d4;
        case 0x15c7d8u: goto label_15c7d8;
        case 0x15c7dcu: goto label_15c7dc;
        case 0x15c7e0u: goto label_15c7e0;
        case 0x15c7e4u: goto label_15c7e4;
        case 0x15c7e8u: goto label_15c7e8;
        case 0x15c7ecu: goto label_15c7ec;
        case 0x15c7f0u: goto label_15c7f0;
        case 0x15c7f4u: goto label_15c7f4;
        case 0x15c7f8u: goto label_15c7f8;
        case 0x15c7fcu: goto label_15c7fc;
        case 0x15c800u: goto label_15c800;
        case 0x15c804u: goto label_15c804;
        case 0x15c808u: goto label_15c808;
        case 0x15c80cu: goto label_15c80c;
        case 0x15c810u: goto label_15c810;
        case 0x15c814u: goto label_15c814;
        case 0x15c818u: goto label_15c818;
        case 0x15c81cu: goto label_15c81c;
        case 0x15c820u: goto label_15c820;
        case 0x15c824u: goto label_15c824;
        case 0x15c828u: goto label_15c828;
        case 0x15c82cu: goto label_15c82c;
        case 0x15c830u: goto label_15c830;
        case 0x15c834u: goto label_15c834;
        case 0x15c838u: goto label_15c838;
        case 0x15c83cu: goto label_15c83c;
        case 0x15c840u: goto label_15c840;
        case 0x15c844u: goto label_15c844;
        case 0x15c848u: goto label_15c848;
        case 0x15c84cu: goto label_15c84c;
        case 0x15c850u: goto label_15c850;
        case 0x15c854u: goto label_15c854;
        case 0x15c858u: goto label_15c858;
        case 0x15c85cu: goto label_15c85c;
        case 0x15c860u: goto label_15c860;
        case 0x15c864u: goto label_15c864;
        case 0x15c868u: goto label_15c868;
        case 0x15c86cu: goto label_15c86c;
        case 0x15c870u: goto label_15c870;
        case 0x15c874u: goto label_15c874;
        case 0x15c878u: goto label_15c878;
        case 0x15c87cu: goto label_15c87c;
        case 0x15c880u: goto label_15c880;
        case 0x15c884u: goto label_15c884;
        case 0x15c888u: goto label_15c888;
        case 0x15c88cu: goto label_15c88c;
        case 0x15c890u: goto label_15c890;
        case 0x15c894u: goto label_15c894;
        case 0x15c898u: goto label_15c898;
        case 0x15c89cu: goto label_15c89c;
        case 0x15c8a0u: goto label_15c8a0;
        case 0x15c8a4u: goto label_15c8a4;
        case 0x15c8a8u: goto label_15c8a8;
        case 0x15c8acu: goto label_15c8ac;
        case 0x15c8b0u: goto label_15c8b0;
        case 0x15c8b4u: goto label_15c8b4;
        case 0x15c8b8u: goto label_15c8b8;
        case 0x15c8bcu: goto label_15c8bc;
        case 0x15c8c0u: goto label_15c8c0;
        case 0x15c8c4u: goto label_15c8c4;
        case 0x15c8c8u: goto label_15c8c8;
        case 0x15c8ccu: goto label_15c8cc;
        case 0x15c8d0u: goto label_15c8d0;
        case 0x15c8d4u: goto label_15c8d4;
        case 0x15c8d8u: goto label_15c8d8;
        case 0x15c8dcu: goto label_15c8dc;
        case 0x15c8e0u: goto label_15c8e0;
        case 0x15c8e4u: goto label_15c8e4;
        case 0x15c8e8u: goto label_15c8e8;
        case 0x15c8ecu: goto label_15c8ec;
        case 0x15c8f0u: goto label_15c8f0;
        case 0x15c8f4u: goto label_15c8f4;
        case 0x15c8f8u: goto label_15c8f8;
        case 0x15c8fcu: goto label_15c8fc;
        case 0x15c900u: goto label_15c900;
        case 0x15c904u: goto label_15c904;
        case 0x15c908u: goto label_15c908;
        case 0x15c90cu: goto label_15c90c;
        case 0x15c910u: goto label_15c910;
        case 0x15c914u: goto label_15c914;
        case 0x15c918u: goto label_15c918;
        case 0x15c91cu: goto label_15c91c;
        case 0x15c920u: goto label_15c920;
        case 0x15c924u: goto label_15c924;
        case 0x15c928u: goto label_15c928;
        case 0x15c92cu: goto label_15c92c;
        case 0x15c930u: goto label_15c930;
        case 0x15c934u: goto label_15c934;
        case 0x15c938u: goto label_15c938;
        case 0x15c93cu: goto label_15c93c;
        case 0x15c940u: goto label_15c940;
        case 0x15c944u: goto label_15c944;
        case 0x15c948u: goto label_15c948;
        case 0x15c94cu: goto label_15c94c;
        case 0x15c950u: goto label_15c950;
        case 0x15c954u: goto label_15c954;
        case 0x15c958u: goto label_15c958;
        case 0x15c95cu: goto label_15c95c;
        case 0x15c960u: goto label_15c960;
        case 0x15c964u: goto label_15c964;
        case 0x15c968u: goto label_15c968;
        case 0x15c96cu: goto label_15c96c;
        case 0x15c970u: goto label_15c970;
        case 0x15c974u: goto label_15c974;
        case 0x15c978u: goto label_15c978;
        case 0x15c97cu: goto label_15c97c;
        case 0x15c980u: goto label_15c980;
        case 0x15c984u: goto label_15c984;
        case 0x15c988u: goto label_15c988;
        case 0x15c98cu: goto label_15c98c;
        case 0x15c990u: goto label_15c990;
        case 0x15c994u: goto label_15c994;
        case 0x15c998u: goto label_15c998;
        case 0x15c99cu: goto label_15c99c;
        case 0x15c9a0u: goto label_15c9a0;
        case 0x15c9a4u: goto label_15c9a4;
        case 0x15c9a8u: goto label_15c9a8;
        case 0x15c9acu: goto label_15c9ac;
        case 0x15c9b0u: goto label_15c9b0;
        case 0x15c9b4u: goto label_15c9b4;
        case 0x15c9b8u: goto label_15c9b8;
        case 0x15c9bcu: goto label_15c9bc;
        case 0x15c9c0u: goto label_15c9c0;
        case 0x15c9c4u: goto label_15c9c4;
        case 0x15c9c8u: goto label_15c9c8;
        case 0x15c9ccu: goto label_15c9cc;
        case 0x15c9d0u: goto label_15c9d0;
        case 0x15c9d4u: goto label_15c9d4;
        case 0x15c9d8u: goto label_15c9d8;
        case 0x15c9dcu: goto label_15c9dc;
        case 0x15c9e0u: goto label_15c9e0;
        case 0x15c9e4u: goto label_15c9e4;
        case 0x15c9e8u: goto label_15c9e8;
        case 0x15c9ecu: goto label_15c9ec;
        case 0x15c9f0u: goto label_15c9f0;
        case 0x15c9f4u: goto label_15c9f4;
        case 0x15c9f8u: goto label_15c9f8;
        case 0x15c9fcu: goto label_15c9fc;
        case 0x15ca00u: goto label_15ca00;
        case 0x15ca04u: goto label_15ca04;
        case 0x15ca08u: goto label_15ca08;
        case 0x15ca0cu: goto label_15ca0c;
        case 0x15ca10u: goto label_15ca10;
        case 0x15ca14u: goto label_15ca14;
        case 0x15ca18u: goto label_15ca18;
        case 0x15ca1cu: goto label_15ca1c;
        case 0x15ca20u: goto label_15ca20;
        case 0x15ca24u: goto label_15ca24;
        case 0x15ca28u: goto label_15ca28;
        case 0x15ca2cu: goto label_15ca2c;
        case 0x15ca30u: goto label_15ca30;
        case 0x15ca34u: goto label_15ca34;
        case 0x15ca38u: goto label_15ca38;
        case 0x15ca3cu: goto label_15ca3c;
        case 0x15ca40u: goto label_15ca40;
        case 0x15ca44u: goto label_15ca44;
        case 0x15ca48u: goto label_15ca48;
        case 0x15ca4cu: goto label_15ca4c;
        case 0x15ca50u: goto label_15ca50;
        case 0x15ca54u: goto label_15ca54;
        case 0x15ca58u: goto label_15ca58;
        case 0x15ca5cu: goto label_15ca5c;
        case 0x15ca60u: goto label_15ca60;
        case 0x15ca64u: goto label_15ca64;
        case 0x15ca68u: goto label_15ca68;
        case 0x15ca6cu: goto label_15ca6c;
        case 0x15ca70u: goto label_15ca70;
        case 0x15ca74u: goto label_15ca74;
        case 0x15ca78u: goto label_15ca78;
        case 0x15ca7cu: goto label_15ca7c;
        case 0x15ca80u: goto label_15ca80;
        case 0x15ca84u: goto label_15ca84;
        case 0x15ca88u: goto label_15ca88;
        case 0x15ca8cu: goto label_15ca8c;
        case 0x15ca90u: goto label_15ca90;
        case 0x15ca94u: goto label_15ca94;
        case 0x15ca98u: goto label_15ca98;
        case 0x15ca9cu: goto label_15ca9c;
        case 0x15caa0u: goto label_15caa0;
        case 0x15caa4u: goto label_15caa4;
        case 0x15caa8u: goto label_15caa8;
        case 0x15caacu: goto label_15caac;
        case 0x15cab0u: goto label_15cab0;
        case 0x15cab4u: goto label_15cab4;
        case 0x15cab8u: goto label_15cab8;
        case 0x15cabcu: goto label_15cabc;
        case 0x15cac0u: goto label_15cac0;
        case 0x15cac4u: goto label_15cac4;
        case 0x15cac8u: goto label_15cac8;
        case 0x15caccu: goto label_15cacc;
        case 0x15cad0u: goto label_15cad0;
        case 0x15cad4u: goto label_15cad4;
        case 0x15cad8u: goto label_15cad8;
        case 0x15cadcu: goto label_15cadc;
        case 0x15cae0u: goto label_15cae0;
        case 0x15cae4u: goto label_15cae4;
        case 0x15cae8u: goto label_15cae8;
        case 0x15caecu: goto label_15caec;
        case 0x15caf0u: goto label_15caf0;
        case 0x15caf4u: goto label_15caf4;
        case 0x15caf8u: goto label_15caf8;
        case 0x15cafcu: goto label_15cafc;
        default: break;
    }

    ctx->pc = 0x15c0e0u;

label_15c0e0:
    // 0x15c0e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x15c0e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_15c0e4:
    // 0x15c0e4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x15c0e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_15c0e8:
    // 0x15c0e8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x15c0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_15c0ec:
    // 0x15c0ec: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x15c0ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_15c0f0:
    // 0x15c0f0: 0x3e00008  jr          $ra
label_15c0f4:
    if (ctx->pc == 0x15C0F4u) {
        ctx->pc = 0x15C0F8u;
        goto label_15c0f8;
    }
    ctx->pc = 0x15C0F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15C0F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15C0F8u;
label_15c0f8:
    // 0x15c0f8: 0x0  nop
    ctx->pc = 0x15c0f8u;
    // NOP
label_15c0fc:
    // 0x15c0fc: 0x0  nop
    ctx->pc = 0x15c0fcu;
    // NOP
label_15c100:
    // 0x15c100: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x15c100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_15c104:
    // 0x15c104: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15c104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_15c108:
    // 0x15c108: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x15c108u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_15c10c:
    // 0x15c10c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x15c10cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
label_15c110:
    // 0x15c110: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x15c110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_15c114:
    // 0x15c114: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
label_15c118:
    if (ctx->pc == 0x15C118u) {
        ctx->pc = 0x15C11Cu;
        goto label_15c11c;
    }
    ctx->pc = 0x15C114u;
    {
        const bool branch_taken_0x15c114 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15c114) {
            ctx->pc = 0x15C1ECu;
            goto label_15c1ec;
        }
    }
    ctx->pc = 0x15C11Cu;
label_15c11c:
    // 0x15c11c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x15c11cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_15c120:
    // 0x15c120: 0x24633a70  addiu       $v1, $v1, 0x3A70
    ctx->pc = 0x15c120u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14960));
label_15c124:
    // 0x15c124: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x15c124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_15c128:
    // 0x15c128: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x15c128u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_15c12c:
    // 0x15c12c: 0xaf80baac  sw          $zero, -0x4554($gp)
    ctx->pc = 0x15c12cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949548), GPR_U32(ctx, 0));
label_15c130:
    // 0x15c130: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x15c130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_15c134:
    // 0x15c134: 0x244400ec  addiu       $a0, $v0, 0xEC
    ctx->pc = 0x15c134u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 236));
label_15c138:
    // 0x15c138: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x15c138u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_15c13c:
    // 0x15c13c: 0xc056e54  jal         func_15B950
label_15c140:
    if (ctx->pc == 0x15C140u) {
        ctx->pc = 0x15C144u;
        goto label_15c144;
    }
    ctx->pc = 0x15C13Cu;
    SET_GPR_U32(ctx, 31, 0x15C144u);
    ctx->pc = 0x15B950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15B950u, 0x15C13Cu, 0x15C144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C144u;
label_15c144:
    // 0x15c144: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x15c144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_15c148:
    // 0x15c148: 0x244400b8  addiu       $a0, $v0, 0xB8
    ctx->pc = 0x15c148u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 184));
label_15c14c:
    // 0x15c14c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x15c14cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_15c150:
    // 0x15c150: 0xc056094  jal         func_158250
label_15c154:
    if (ctx->pc == 0x15C154u) {
        ctx->pc = 0x15C158u;
        goto label_15c158;
    }
    ctx->pc = 0x15C150u;
    SET_GPR_U32(ctx, 31, 0x15C158u);
    ctx->pc = 0x158250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158250u, 0x15C150u, 0x15C158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C158u;
label_15c158:
    // 0x15c158: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x15c158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_15c15c:
    // 0x15c15c: 0x24440084  addiu       $a0, $v0, 0x84
    ctx->pc = 0x15c15cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 132));
label_15c160:
    // 0x15c160: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x15c160u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_15c164:
    // 0x15c164: 0xc045280  jal         func_114A00
label_15c168:
    if (ctx->pc == 0x15C168u) {
        ctx->pc = 0x15C16Cu;
        goto label_15c16c;
    }
    ctx->pc = 0x15C164u;
    SET_GPR_U32(ctx, 31, 0x15C16Cu);
    ctx->pc = 0x114A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114A00u, 0x15C164u, 0x15C16Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C16Cu;
label_15c16c:
    // 0x15c16c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x15c16cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_15c170:
    // 0x15c170: 0x24440074  addiu       $a0, $v0, 0x74
    ctx->pc = 0x15c170u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 116));
label_15c174:
    // 0x15c174: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x15c174u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_15c178:
    // 0x15c178: 0xc056ef4  jal         func_15BBD0
label_15c17c:
    if (ctx->pc == 0x15C17Cu) {
        ctx->pc = 0x15C180u;
        goto label_15c180;
    }
    ctx->pc = 0x15C178u;
    SET_GPR_U32(ctx, 31, 0x15C180u);
    ctx->pc = 0x15BBD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BBD0u, 0x15C178u, 0x15C180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C180u;
label_15c180:
    // 0x15c180: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x15c180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_15c184:
    // 0x15c184: 0x24440068  addiu       $a0, $v0, 0x68
    ctx->pc = 0x15c184u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
label_15c188:
    // 0x15c188: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x15c188u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_15c18c:
    // 0x15c18c: 0xc056094  jal         func_158250
label_15c190:
    if (ctx->pc == 0x15C190u) {
        ctx->pc = 0x15C194u;
        goto label_15c194;
    }
    ctx->pc = 0x15C18Cu;
    SET_GPR_U32(ctx, 31, 0x15C194u);
    ctx->pc = 0x158250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158250u, 0x15C18Cu, 0x15C194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C194u;
label_15c194:
    // 0x15c194: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x15c194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_15c198:
    // 0x15c198: 0x2444005c  addiu       $a0, $v0, 0x5C
    ctx->pc = 0x15c198u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 92));
label_15c19c:
    // 0x15c19c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x15c19cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_15c1a0:
    // 0x15c1a0: 0xc056094  jal         func_158250
label_15c1a4:
    if (ctx->pc == 0x15C1A4u) {
        ctx->pc = 0x15C1A8u;
        goto label_15c1a8;
    }
    ctx->pc = 0x15C1A0u;
    SET_GPR_U32(ctx, 31, 0x15C1A8u);
    ctx->pc = 0x158250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158250u, 0x15C1A0u, 0x15C1A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C1A8u;
label_15c1a8:
    // 0x15c1a8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x15c1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_15c1ac:
    // 0x15c1ac: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x15c1acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
label_15c1b0:
    // 0x15c1b0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x15c1b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_15c1b4:
    // 0x15c1b4: 0xc056094  jal         func_158250
label_15c1b8:
    if (ctx->pc == 0x15C1B8u) {
        ctx->pc = 0x15C1BCu;
        goto label_15c1bc;
    }
    ctx->pc = 0x15C1B4u;
    SET_GPR_U32(ctx, 31, 0x15C1BCu);
    ctx->pc = 0x158250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158250u, 0x15C1B4u, 0x15C1BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C1BCu;
label_15c1bc:
    // 0x15c1bc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x15c1bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_15c1c0:
    // 0x15c1c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15c1c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15c1c4:
    // 0x15c1c4: 0xc055950  jal         func_156540
label_15c1c8:
    if (ctx->pc == 0x15C1C8u) {
        ctx->pc = 0x15C1CCu;
        goto label_15c1cc;
    }
    ctx->pc = 0x15C1C4u;
    SET_GPR_U32(ctx, 31, 0x15C1CCu);
    ctx->pc = 0x156540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156540u, 0x15C1C4u, 0x15C1CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C1CCu;
label_15c1cc:
    // 0x15c1cc: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x15c1ccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
label_15c1d0:
    // 0x15c1d0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x15c1d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_15c1d4:
    // 0x15c1d4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x15c1d4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_15c1d8:
    // 0x15c1d8: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
label_15c1dc:
    if (ctx->pc == 0x15C1DCu) {
        ctx->pc = 0x15C1E0u;
        goto label_15c1e0;
    }
    ctx->pc = 0x15C1D8u;
    {
        const bool branch_taken_0x15c1d8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x15c1d8) {
            ctx->pc = 0x15C1ECu;
            goto label_15c1ec;
        }
    }
    ctx->pc = 0x15C1E0u;
label_15c1e0:
    // 0x15c1e0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x15c1e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_15c1e4:
    // 0x15c1e4: 0xc0ba070  jal         func_2E81C0
label_15c1e8:
    if (ctx->pc == 0x15C1E8u) {
        ctx->pc = 0x15C1ECu;
        goto label_15c1ec;
    }
    ctx->pc = 0x15C1E4u;
    SET_GPR_U32(ctx, 31, 0x15C1ECu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x15C1E4u, 0x15C1ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C1ECu;
label_15c1ec:
    // 0x15c1ec: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x15c1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_15c1f0:
    // 0x15c1f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15c1f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_15c1f4:
    // 0x15c1f4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x15c1f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_15c1f8:
    // 0x15c1f8: 0x3e00008  jr          $ra
label_15c1fc:
    if (ctx->pc == 0x15C1FCu) {
        ctx->pc = 0x15C200u;
        goto label_15c200;
    }
    ctx->pc = 0x15C1F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15C1F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15C200u;
label_15c200:
    // 0x15c200: 0x27bdfdc0  addiu       $sp, $sp, -0x240
    ctx->pc = 0x15c200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966720));
label_15c204:
    // 0x15c204: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x15c204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_15c208:
    // 0x15c208: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x15c208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_15c20c:
    // 0x15c20c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x15c20cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_15c210:
    // 0x15c210: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x15c210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_15c214:
    // 0x15c214: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15c214u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_15c218:
    // 0x15c218: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15c218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_15c21c:
    // 0x15c21c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15c21cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_15c220:
    // 0x15c220: 0xafa40230  sw          $a0, 0x230($sp)
    ctx->pc = 0x15c220u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 560), GPR_U32(ctx, 4));
label_15c224:
    // 0x15c224: 0x8fa40230  lw          $a0, 0x230($sp)
    ctx->pc = 0x15c224u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
label_15c228:
    // 0x15c228: 0xc055974  jal         func_1565D0
label_15c22c:
    if (ctx->pc == 0x15C22Cu) {
        ctx->pc = 0x15C230u;
        goto label_15c230;
    }
    ctx->pc = 0x15C228u;
    SET_GPR_U32(ctx, 31, 0x15C230u);
    ctx->pc = 0x1565D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1565D0u, 0x15C228u, 0x15C230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C230u;
label_15c230:
    // 0x15c230: 0x305400ff  andi        $s4, $v0, 0xFF
    ctx->pc = 0x15c230u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_15c234:
    // 0x15c234: 0x328300ff  andi        $v1, $s4, 0xFF
    ctx->pc = 0x15c234u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
label_15c238:
    // 0x15c238: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15c238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15c23c:
    // 0x15c23c: 0x14620026  bne         $v1, $v0, . + 4 + (0x26 << 2)
label_15c240:
    if (ctx->pc == 0x15C240u) {
        ctx->pc = 0x15C244u;
        goto label_15c244;
    }
    ctx->pc = 0x15C23Cu;
    {
        const bool branch_taken_0x15c23c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x15c23c) {
            ctx->pc = 0x15C2D8u;
            goto label_15c2d8;
        }
    }
    ctx->pc = 0x15C244u;
label_15c244:
    // 0x15c244: 0x8fa40230  lw          $a0, 0x230($sp)
    ctx->pc = 0x15c244u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
label_15c248:
    // 0x15c248: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x15c248u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_15c24c:
    // 0x15c24c: 0x24a53150  addiu       $a1, $a1, 0x3150
    ctx->pc = 0x15c24cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12624));
label_15c250:
    // 0x15c250: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x15c250u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_15c254:
    // 0x15c254: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x15c254u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_15c258:
    // 0x15c258: 0x320f809  jalr        $t9
label_15c25c:
    if (ctx->pc == 0x15C25Cu) {
        ctx->pc = 0x15C260u;
        goto label_15c260;
    }
    ctx->pc = 0x15C258u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x15C260u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15C258u, 0x15C260u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15C260u;
label_15c260:
    // 0x15c260: 0x24040050  addiu       $a0, $zero, 0x50
    ctx->pc = 0x15c260u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_15c264:
    // 0x15c264: 0xc119b68  jal         func_466DA0
label_15c268:
    if (ctx->pc == 0x15C268u) {
        ctx->pc = 0x15C26Cu;
        goto label_15c26c;
    }
    ctx->pc = 0x15C264u;
    SET_GPR_U32(ctx, 31, 0x15C26Cu);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x15C264u, 0x15C26Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C26Cu;
label_15c26c:
    // 0x15c26c: 0x24040050  addiu       $a0, $zero, 0x50
    ctx->pc = 0x15c26cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_15c270:
    // 0x15c270: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x15c270u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15c274:
    // 0x15c274: 0xc0400e0  jal         func_100380
label_15c278:
    if (ctx->pc == 0x15C278u) {
        ctx->pc = 0x15C27Cu;
        goto label_15c27c;
    }
    ctx->pc = 0x15C274u;
    SET_GPR_U32(ctx, 31, 0x15C27Cu);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x15C274u, 0x15C27Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C27Cu;
label_15c27c:
    // 0x15c27c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x15c27cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15c280:
    // 0x15c280: 0x12600006  beqz        $s3, . + 4 + (0x6 << 2)
label_15c284:
    if (ctx->pc == 0x15C284u) {
        ctx->pc = 0x15C288u;
        goto label_15c288;
    }
    ctx->pc = 0x15C280u;
    {
        const bool branch_taken_0x15c280 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x15c280) {
            ctx->pc = 0x15C29Cu;
            goto label_15c29c;
        }
    }
    ctx->pc = 0x15C288u;
label_15c288:
    // 0x15c288: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x15c288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_15c28c:
    // 0x15c28c: 0x2405fffe  addiu       $a1, $zero, -0x2
    ctx->pc = 0x15c28cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_15c290:
    // 0x15c290: 0xc0557e8  jal         func_155FA0
label_15c294:
    if (ctx->pc == 0x15C294u) {
        ctx->pc = 0x15C298u;
        goto label_15c298;
    }
    ctx->pc = 0x15C290u;
    SET_GPR_U32(ctx, 31, 0x15C298u);
    ctx->pc = 0x155FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155FA0u, 0x15C290u, 0x15C298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C298u;
label_15c298:
    // 0x15c298: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x15c298u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15c29c:
    // 0x15c29c: 0x8fa20230  lw          $v0, 0x230($sp)
    ctx->pc = 0x15c29cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
label_15c2a0:
    // 0x15c2a0: 0xac53009c  sw          $s3, 0x9C($v0)
    ctx->pc = 0x15c2a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 156), GPR_U32(ctx, 19));
label_15c2a4:
    // 0x15c2a4: 0x8fa20230  lw          $v0, 0x230($sp)
    ctx->pc = 0x15c2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
label_15c2a8:
    // 0x15c2a8: 0x8c44009c  lw          $a0, 0x9C($v0)
    ctx->pc = 0x15c2a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
label_15c2ac:
    // 0x15c2ac: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x15c2acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_15c2b0:
    // 0x15c2b0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x15c2b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_15c2b4:
    // 0x15c2b4: 0x320f809  jalr        $t9
label_15c2b8:
    if (ctx->pc == 0x15C2B8u) {
        ctx->pc = 0x15C2BCu;
        goto label_15c2bc;
    }
    ctx->pc = 0x15C2B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x15C2BCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15C2B4u, 0x15C2BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15C2BCu;
label_15c2bc:
    // 0x15c2bc: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x15c2bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_15c2c0:
    // 0x15c2c0: 0x328200ff  andi        $v0, $s4, 0xFF
    ctx->pc = 0x15c2c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
label_15c2c4:
    // 0x15c2c4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x15c2c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_15c2c8:
    // 0x15c2c8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x15c2c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_15c2cc:
    // 0x15c2cc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x15c2ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_15c2d0:
    // 0x15c2d0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x15c2d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_15c2d4:
    // 0x15c2d4: 0x305400ff  andi        $s4, $v0, 0xFF
    ctx->pc = 0x15c2d4u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_15c2d8:
    // 0x15c2d8: 0x8fa20230  lw          $v0, 0x230($sp)
    ctx->pc = 0x15c2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
label_15c2dc:
    // 0x15c2dc: 0x24440068  addiu       $a0, $v0, 0x68
    ctx->pc = 0x15c2dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
label_15c2e0:
    // 0x15c2e0: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x15c2e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_15c2e4:
    // 0x15c2e4: 0xc056708  jal         func_159C20
label_15c2e8:
    if (ctx->pc == 0x15C2E8u) {
        ctx->pc = 0x15C2ECu;
        goto label_15c2ec;
    }
    ctx->pc = 0x15C2E4u;
    SET_GPR_U32(ctx, 31, 0x15C2ECu);
    ctx->pc = 0x159C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159C20u, 0x15C2E4u, 0x15C2ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C2ECu;
label_15c2ec:
    // 0x15c2ec: 0x8fa20230  lw          $v0, 0x230($sp)
    ctx->pc = 0x15c2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
label_15c2f0:
    // 0x15c2f0: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x15c2f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
label_15c2f4:
    // 0x15c2f4: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x15c2f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_15c2f8:
    // 0x15c2f8: 0xc056708  jal         func_159C20
label_15c2fc:
    if (ctx->pc == 0x15C2FCu) {
        ctx->pc = 0x15C300u;
        goto label_15c300;
    }
    ctx->pc = 0x15C2F8u;
    SET_GPR_U32(ctx, 31, 0x15C300u);
    ctx->pc = 0x159C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159C20u, 0x15C2F8u, 0x15C300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C300u;
label_15c300:
    // 0x15c300: 0x8fa40230  lw          $a0, 0x230($sp)
    ctx->pc = 0x15c300u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
label_15c304:
    // 0x15c304: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x15c304u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_15c308:
    // 0x15c308: 0x24a53170  addiu       $a1, $a1, 0x3170
    ctx->pc = 0x15c308u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12656));
label_15c30c:
    // 0x15c30c: 0xc0552e4  jal         func_154B90
label_15c310:
    if (ctx->pc == 0x15C310u) {
        ctx->pc = 0x15C314u;
        goto label_15c314;
    }
    ctx->pc = 0x15C30Cu;
    SET_GPR_U32(ctx, 31, 0x15C314u);
    ctx->pc = 0x154B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B90u, 0x15C30Cu, 0x15C314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C314u;
label_15c314:
    // 0x15c314: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x15c314u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15c318:
    // 0x15c318: 0x8fa20230  lw          $v0, 0x230($sp)
    ctx->pc = 0x15c318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
label_15c31c:
    // 0x15c31c: 0x24440068  addiu       $a0, $v0, 0x68
    ctx->pc = 0x15c31cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
label_15c320:
    // 0x15c320: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15c320u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15c324:
    // 0x15c324: 0xc05612c  jal         func_1584B0
label_15c328:
    if (ctx->pc == 0x15C328u) {
        ctx->pc = 0x15C32Cu;
        goto label_15c32c;
    }
    ctx->pc = 0x15C324u;
    SET_GPR_U32(ctx, 31, 0x15C32Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x15C324u, 0x15C32Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C32Cu;
label_15c32c:
    // 0x15c32c: 0xac550000  sw          $s5, 0x0($v0)
    ctx->pc = 0x15c32cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 21));
label_15c330:
    // 0x15c330: 0x8fa40230  lw          $a0, 0x230($sp)
    ctx->pc = 0x15c330u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
label_15c334:
    // 0x15c334: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x15c334u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_15c338:
    // 0x15c338: 0x24a53180  addiu       $a1, $a1, 0x3180
    ctx->pc = 0x15c338u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12672));
label_15c33c:
    // 0x15c33c: 0xc0552e4  jal         func_154B90
label_15c340:
    if (ctx->pc == 0x15C340u) {
        ctx->pc = 0x15C344u;
        goto label_15c344;
    }
    ctx->pc = 0x15C33Cu;
    SET_GPR_U32(ctx, 31, 0x15C344u);
    ctx->pc = 0x154B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B90u, 0x15C33Cu, 0x15C344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C344u;
label_15c344:
    // 0x15c344: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x15c344u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15c348:
    // 0x15c348: 0x8fa20230  lw          $v0, 0x230($sp)
    ctx->pc = 0x15c348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
label_15c34c:
    // 0x15c34c: 0x24440068  addiu       $a0, $v0, 0x68
    ctx->pc = 0x15c34cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
label_15c350:
    // 0x15c350: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15c350u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15c354:
    // 0x15c354: 0xc05612c  jal         func_1584B0
label_15c358:
    if (ctx->pc == 0x15C358u) {
        ctx->pc = 0x15C35Cu;
        goto label_15c35c;
    }
    ctx->pc = 0x15C354u;
    SET_GPR_U32(ctx, 31, 0x15C35Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x15C354u, 0x15C35Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C35Cu;
label_15c35c:
    // 0x15c35c: 0xac550000  sw          $s5, 0x0($v0)
    ctx->pc = 0x15c35cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 21));
label_15c360:
    // 0x15c360: 0x8fa40230  lw          $a0, 0x230($sp)
    ctx->pc = 0x15c360u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
label_15c364:
    // 0x15c364: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x15c364u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_15c368:
    // 0x15c368: 0x24a531a0  addiu       $a1, $a1, 0x31A0
    ctx->pc = 0x15c368u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12704));
label_15c36c:
    // 0x15c36c: 0xc0552e4  jal         func_154B90
label_15c370:
    if (ctx->pc == 0x15C370u) {
        ctx->pc = 0x15C374u;
        goto label_15c374;
    }
    ctx->pc = 0x15C36Cu;
    SET_GPR_U32(ctx, 31, 0x15C374u);
    ctx->pc = 0x154B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B90u, 0x15C36Cu, 0x15C374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C374u;
label_15c374:
    // 0x15c374: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x15c374u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15c378:
    // 0x15c378: 0x8fa20230  lw          $v0, 0x230($sp)
    ctx->pc = 0x15c378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
label_15c37c:
    // 0x15c37c: 0x24440068  addiu       $a0, $v0, 0x68
    ctx->pc = 0x15c37cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
label_15c380:
    // 0x15c380: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x15c380u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_15c384:
    // 0x15c384: 0xc05612c  jal         func_1584B0
label_15c388:
    if (ctx->pc == 0x15C388u) {
        ctx->pc = 0x15C38Cu;
        goto label_15c38c;
    }
    ctx->pc = 0x15C384u;
    SET_GPR_U32(ctx, 31, 0x15C38Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x15C384u, 0x15C38Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C38Cu;
label_15c38c:
    // 0x15c38c: 0xac550000  sw          $s5, 0x0($v0)
    ctx->pc = 0x15c38cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 21));
label_15c390:
    // 0x15c390: 0x8fa40230  lw          $a0, 0x230($sp)
    ctx->pc = 0x15c390u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
label_15c394:
    // 0x15c394: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x15c394u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_15c398:
    // 0x15c398: 0x24a531b8  addiu       $a1, $a1, 0x31B8
    ctx->pc = 0x15c398u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12728));
label_15c39c:
    // 0x15c39c: 0xc0552e4  jal         func_154B90
label_15c3a0:
    if (ctx->pc == 0x15C3A0u) {
        ctx->pc = 0x15C3A4u;
        goto label_15c3a4;
    }
    ctx->pc = 0x15C39Cu;
    SET_GPR_U32(ctx, 31, 0x15C3A4u);
    ctx->pc = 0x154B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B90u, 0x15C39Cu, 0x15C3A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C3A4u;
label_15c3a4:
    // 0x15c3a4: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x15c3a4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15c3a8:
    // 0x15c3a8: 0x8fa20230  lw          $v0, 0x230($sp)
    ctx->pc = 0x15c3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
label_15c3ac:
    // 0x15c3ac: 0x24440068  addiu       $a0, $v0, 0x68
    ctx->pc = 0x15c3acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
label_15c3b0:
    // 0x15c3b0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x15c3b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_15c3b4:
    // 0x15c3b4: 0xc05612c  jal         func_1584B0
label_15c3b8:
    if (ctx->pc == 0x15C3B8u) {
        ctx->pc = 0x15C3BCu;
        goto label_15c3bc;
    }
    ctx->pc = 0x15C3B4u;
    SET_GPR_U32(ctx, 31, 0x15C3BCu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x15C3B4u, 0x15C3BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C3BCu;
label_15c3bc:
    // 0x15c3bc: 0xac550000  sw          $s5, 0x0($v0)
    ctx->pc = 0x15c3bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 21));
label_15c3c0:
    // 0x15c3c0: 0x8fa40230  lw          $a0, 0x230($sp)
    ctx->pc = 0x15c3c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
label_15c3c4:
    // 0x15c3c4: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x15c3c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_15c3c8:
    // 0x15c3c8: 0x24a531c8  addiu       $a1, $a1, 0x31C8
    ctx->pc = 0x15c3c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12744));
label_15c3cc:
    // 0x15c3cc: 0xc0552e4  jal         func_154B90
label_15c3d0:
    if (ctx->pc == 0x15C3D0u) {
        ctx->pc = 0x15C3D4u;
        goto label_15c3d4;
    }
    ctx->pc = 0x15C3CCu;
    SET_GPR_U32(ctx, 31, 0x15C3D4u);
    ctx->pc = 0x154B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B90u, 0x15C3CCu, 0x15C3D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C3D4u;
label_15c3d4:
    // 0x15c3d4: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x15c3d4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15c3d8:
    // 0x15c3d8: 0x8fa20230  lw          $v0, 0x230($sp)
    ctx->pc = 0x15c3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
label_15c3dc:
    // 0x15c3dc: 0x24440068  addiu       $a0, $v0, 0x68
    ctx->pc = 0x15c3dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
label_15c3e0:
    // 0x15c3e0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x15c3e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_15c3e4:
    // 0x15c3e4: 0xc05612c  jal         func_1584B0
label_15c3e8:
    if (ctx->pc == 0x15C3E8u) {
        ctx->pc = 0x15C3ECu;
        goto label_15c3ec;
    }
    ctx->pc = 0x15C3E4u;
    SET_GPR_U32(ctx, 31, 0x15C3ECu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x15C3E4u, 0x15C3ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C3ECu;
label_15c3ec:
    // 0x15c3ec: 0xac550000  sw          $s5, 0x0($v0)
    ctx->pc = 0x15c3ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 21));
label_15c3f0:
    // 0x15c3f0: 0x8fa40230  lw          $a0, 0x230($sp)
    ctx->pc = 0x15c3f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
label_15c3f4:
    // 0x15c3f4: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x15c3f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_15c3f8:
    // 0x15c3f8: 0x24a531d8  addiu       $a1, $a1, 0x31D8
    ctx->pc = 0x15c3f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12760));
label_15c3fc:
    // 0x15c3fc: 0xc0552e4  jal         func_154B90
label_15c400:
    if (ctx->pc == 0x15C400u) {
        ctx->pc = 0x15C404u;
        goto label_15c404;
    }
    ctx->pc = 0x15C3FCu;
    SET_GPR_U32(ctx, 31, 0x15C404u);
    ctx->pc = 0x154B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B90u, 0x15C3FCu, 0x15C404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C404u;
label_15c404:
    // 0x15c404: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x15c404u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15c408:
    // 0x15c408: 0x8fa20230  lw          $v0, 0x230($sp)
    ctx->pc = 0x15c408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
label_15c40c:
    // 0x15c40c: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x15c40cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
label_15c410:
    // 0x15c410: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15c410u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15c414:
    // 0x15c414: 0xc05612c  jal         func_1584B0
label_15c418:
    if (ctx->pc == 0x15C418u) {
        ctx->pc = 0x15C41Cu;
        goto label_15c41c;
    }
    ctx->pc = 0x15C414u;
    SET_GPR_U32(ctx, 31, 0x15C41Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x15C414u, 0x15C41Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C41Cu;
label_15c41c:
    // 0x15c41c: 0xac550000  sw          $s5, 0x0($v0)
    ctx->pc = 0x15c41cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 21));
label_15c420:
    // 0x15c420: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x15c420u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15c424:
    // 0x15c424: 0x10000024  b           . + 4 + (0x24 << 2)
label_15c428:
    if (ctx->pc == 0x15C428u) {
        ctx->pc = 0x15C42Cu;
        goto label_15c42c;
    }
    ctx->pc = 0x15C424u;
    {
        const bool branch_taken_0x15c424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15c424) {
            ctx->pc = 0x15C4B8u;
            goto label_15c4b8;
        }
    }
    ctx->pc = 0x15C42Cu;
label_15c42c:
    // 0x15c42c: 0x26260001  addiu       $a2, $s1, 0x1
    ctx->pc = 0x15c42cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_15c430:
    // 0x15c430: 0x27a40210  addiu       $a0, $sp, 0x210
    ctx->pc = 0x15c430u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
label_15c434:
    // 0x15c434: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x15c434u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_15c438:
    // 0x15c438: 0x24a531e8  addiu       $a1, $a1, 0x31E8
    ctx->pc = 0x15c438u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12776));
label_15c43c:
    // 0x15c43c: 0xc0bc3e2  jal         func_2F0F88
label_15c440:
    if (ctx->pc == 0x15C440u) {
        ctx->pc = 0x15C444u;
        goto label_15c444;
    }
    ctx->pc = 0x15C43Cu;
    SET_GPR_U32(ctx, 31, 0x15C444u);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x15C43Cu, 0x15C444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C444u;
label_15c444:
    // 0x15c444: 0x8fa40230  lw          $a0, 0x230($sp)
    ctx->pc = 0x15c444u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
label_15c448:
    // 0x15c448: 0x27a50210  addiu       $a1, $sp, 0x210
    ctx->pc = 0x15c448u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
label_15c44c:
    // 0x15c44c: 0xc0552e4  jal         func_154B90
label_15c450:
    if (ctx->pc == 0x15C450u) {
        ctx->pc = 0x15C454u;
        goto label_15c454;
    }
    ctx->pc = 0x15C44Cu;
    SET_GPR_U32(ctx, 31, 0x15C454u);
    ctx->pc = 0x154B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B90u, 0x15C44Cu, 0x15C454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C454u;
label_15c454:
    // 0x15c454: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x15c454u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15c458:
    // 0x15c458: 0x8fa20230  lw          $v0, 0x230($sp)
    ctx->pc = 0x15c458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
label_15c45c:
    // 0x15c45c: 0x26250001  addiu       $a1, $s1, 0x1
    ctx->pc = 0x15c45cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_15c460:
    // 0x15c460: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x15c460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
label_15c464:
    // 0x15c464: 0xc05612c  jal         func_1584B0
label_15c468:
    if (ctx->pc == 0x15C468u) {
        ctx->pc = 0x15C46Cu;
        goto label_15c46c;
    }
    ctx->pc = 0x15C464u;
    SET_GPR_U32(ctx, 31, 0x15C46Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x15C464u, 0x15C46Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C46Cu;
label_15c46c:
    // 0x15c46c: 0xac550000  sw          $s5, 0x0($v0)
    ctx->pc = 0x15c46cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 21));
label_15c470:
    // 0x15c470: 0x26260001  addiu       $a2, $s1, 0x1
    ctx->pc = 0x15c470u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_15c474:
    // 0x15c474: 0x27a40210  addiu       $a0, $sp, 0x210
    ctx->pc = 0x15c474u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
label_15c478:
    // 0x15c478: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x15c478u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_15c47c:
    // 0x15c47c: 0x24a531f8  addiu       $a1, $a1, 0x31F8
    ctx->pc = 0x15c47cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12792));
label_15c480:
    // 0x15c480: 0xc0bc3e2  jal         func_2F0F88
label_15c484:
    if (ctx->pc == 0x15C484u) {
        ctx->pc = 0x15C488u;
        goto label_15c488;
    }
    ctx->pc = 0x15C480u;
    SET_GPR_U32(ctx, 31, 0x15C488u);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x15C480u, 0x15C488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C488u;
label_15c488:
    // 0x15c488: 0x8fa40230  lw          $a0, 0x230($sp)
    ctx->pc = 0x15c488u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
label_15c48c:
    // 0x15c48c: 0x27a50210  addiu       $a1, $sp, 0x210
    ctx->pc = 0x15c48cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
label_15c490:
    // 0x15c490: 0xc0552e4  jal         func_154B90
label_15c494:
    if (ctx->pc == 0x15C494u) {
        ctx->pc = 0x15C498u;
        goto label_15c498;
    }
    ctx->pc = 0x15C490u;
    SET_GPR_U32(ctx, 31, 0x15C498u);
    ctx->pc = 0x154B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B90u, 0x15C490u, 0x15C498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C498u;
label_15c498:
    // 0x15c498: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x15c498u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15c49c:
    // 0x15c49c: 0x8fa20230  lw          $v0, 0x230($sp)
    ctx->pc = 0x15c49cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
label_15c4a0:
    // 0x15c4a0: 0x26250004  addiu       $a1, $s1, 0x4
    ctx->pc = 0x15c4a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_15c4a4:
    // 0x15c4a4: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x15c4a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
label_15c4a8:
    // 0x15c4a8: 0xc05612c  jal         func_1584B0
label_15c4ac:
    if (ctx->pc == 0x15C4ACu) {
        ctx->pc = 0x15C4B0u;
        goto label_15c4b0;
    }
    ctx->pc = 0x15C4A8u;
    SET_GPR_U32(ctx, 31, 0x15C4B0u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x15C4A8u, 0x15C4B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C4B0u;
label_15c4b0:
    // 0x15c4b0: 0xac550000  sw          $s5, 0x0($v0)
    ctx->pc = 0x15c4b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 21));
label_15c4b4:
    // 0x15c4b4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x15c4b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_15c4b8:
    // 0x15c4b8: 0x2a210003  slti        $at, $s1, 0x3
    ctx->pc = 0x15c4b8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
label_15c4bc:
    // 0x15c4bc: 0x1420ffdb  bnez        $at, . + 4 + (-0x25 << 2)
label_15c4c0:
    if (ctx->pc == 0x15C4C0u) {
        ctx->pc = 0x15C4C4u;
        goto label_15c4c4;
    }
    ctx->pc = 0x15C4BCu;
    {
        const bool branch_taken_0x15c4bc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x15c4bc) {
            ctx->pc = 0x15C42Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15c42c;
        }
    }
    ctx->pc = 0x15C4C4u;
label_15c4c4:
    // 0x15c4c4: 0x3c06004e  lui         $a2, 0x4E
    ctx->pc = 0x15c4c4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)78 << 16));
label_15c4c8:
    // 0x15c4c8: 0x24c62fd0  addiu       $a2, $a2, 0x2FD0
    ctx->pc = 0x15c4c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12240));
label_15c4cc:
    // 0x15c4cc: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x15c4ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_15c4d0:
    // 0x15c4d0: 0x240400c0  addiu       $a0, $zero, 0xC0
    ctx->pc = 0x15c4d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
label_15c4d4:
    // 0x15c4d4: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x15c4d4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_15c4d8:
    // 0x15c4d8: 0x80c20001  lb          $v0, 0x1($a2)
    ctx->pc = 0x15c4d8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
label_15c4dc:
    // 0x15c4dc: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x15c4dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
label_15c4e0:
    // 0x15c4e0: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x15c4e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_15c4e4:
    // 0x15c4e4: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x15c4e4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
label_15c4e8:
    // 0x15c4e8: 0xa0a20001  sb          $v0, 0x1($a1)
    ctx->pc = 0x15c4e8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 2));
label_15c4ec:
    // 0x15c4ec: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x15c4ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
label_15c4f0:
    // 0x15c4f0: 0x1c80fff8  bgtz        $a0, . + 4 + (-0x8 << 2)
label_15c4f4:
    if (ctx->pc == 0x15C4F4u) {
        ctx->pc = 0x15C4F8u;
        goto label_15c4f8;
    }
    ctx->pc = 0x15C4F0u;
    {
        const bool branch_taken_0x15c4f0 = (GPR_S32(ctx, 4) > 0);
        if (branch_taken_0x15c4f0) {
            ctx->pc = 0x15C4D4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15c4d4;
        }
    }
    ctx->pc = 0x15C4F8u;
label_15c4f8:
    // 0x15c4f8: 0x8fa20230  lw          $v0, 0x230($sp)
    ctx->pc = 0x15c4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
label_15c4fc:
    // 0x15c4fc: 0x2444005c  addiu       $a0, $v0, 0x5C
    ctx->pc = 0x15c4fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 92));
label_15c500:
    // 0x15c500: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x15c500u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_15c504:
    // 0x15c504: 0xc056708  jal         func_159C20
label_15c508:
    if (ctx->pc == 0x15C508u) {
        ctx->pc = 0x15C50Cu;
        goto label_15c50c;
    }
    ctx->pc = 0x15C504u;
    SET_GPR_U32(ctx, 31, 0x15C50Cu);
    ctx->pc = 0x159C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159C20u, 0x15C504u, 0x15C50Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C50Cu;
label_15c50c:
    // 0x15c50c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x15c50cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15c510:
    // 0x15c510: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x15c510u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15c514:
    // 0x15c514: 0x1000000f  b           . + 4 + (0xF << 2)
label_15c518:
    if (ctx->pc == 0x15C518u) {
        ctx->pc = 0x15C51Cu;
        goto label_15c51c;
    }
    ctx->pc = 0x15C514u;
    {
        const bool branch_taken_0x15c514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15c514) {
            ctx->pc = 0x15C554u;
            goto label_15c554;
        }
    }
    ctx->pc = 0x15C51Cu;
label_15c51c:
    // 0x15c51c: 0x101140  sll         $v0, $s0, 5
    ctx->pc = 0x15c51cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
label_15c520:
    // 0x15c520: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x15c520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_15c524:
    // 0x15c524: 0x8fa40230  lw          $a0, 0x230($sp)
    ctx->pc = 0x15c524u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
label_15c528:
    // 0x15c528: 0x24450090  addiu       $a1, $v0, 0x90
    ctx->pc = 0x15c528u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
label_15c52c:
    // 0x15c52c: 0xc0552e4  jal         func_154B90
label_15c530:
    if (ctx->pc == 0x15C530u) {
        ctx->pc = 0x15C534u;
        goto label_15c534;
    }
    ctx->pc = 0x15C52Cu;
    SET_GPR_U32(ctx, 31, 0x15C534u);
    ctx->pc = 0x154B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B90u, 0x15C52Cu, 0x15C534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C534u;
label_15c534:
    // 0x15c534: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x15c534u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15c538:
    // 0x15c538: 0x8fa20230  lw          $v0, 0x230($sp)
    ctx->pc = 0x15c538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
label_15c53c:
    // 0x15c53c: 0x2444005c  addiu       $a0, $v0, 0x5C
    ctx->pc = 0x15c53cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 92));
label_15c540:
    // 0x15c540: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15c540u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15c544:
    // 0x15c544: 0xc05612c  jal         func_1584B0
label_15c548:
    if (ctx->pc == 0x15C548u) {
        ctx->pc = 0x15C54Cu;
        goto label_15c54c;
    }
    ctx->pc = 0x15C544u;
    SET_GPR_U32(ctx, 31, 0x15C54Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x15C544u, 0x15C54Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C54Cu;
label_15c54c:
    // 0x15c54c: 0xac550000  sw          $s5, 0x0($v0)
    ctx->pc = 0x15c54cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 21));
label_15c550:
    // 0x15c550: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x15c550u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_15c554:
    // 0x15c554: 0x2e02000c  sltiu       $v0, $s0, 0xC
    ctx->pc = 0x15c554u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
label_15c558:
    // 0x15c558: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
label_15c55c:
    if (ctx->pc == 0x15C55Cu) {
        ctx->pc = 0x15C560u;
        goto label_15c560;
    }
    ctx->pc = 0x15C558u;
    {
        const bool branch_taken_0x15c558 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15c558) {
            ctx->pc = 0x15C51Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15c51c;
        }
    }
    ctx->pc = 0x15C560u;
label_15c560:
    // 0x15c560: 0x8fa40230  lw          $a0, 0x230($sp)
    ctx->pc = 0x15c560u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
label_15c564:
    // 0x15c564: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x15c564u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_15c568:
    // 0x15c568: 0x24a53210  addiu       $a1, $a1, 0x3210
    ctx->pc = 0x15c568u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12816));
label_15c56c:
    // 0x15c56c: 0xc0552e4  jal         func_154B90
label_15c570:
    if (ctx->pc == 0x15C570u) {
        ctx->pc = 0x15C574u;
        goto label_15c574;
    }
    ctx->pc = 0x15C56Cu;
    SET_GPR_U32(ctx, 31, 0x15C574u);
    ctx->pc = 0x154B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B90u, 0x15C56Cu, 0x15C574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C574u;
label_15c574:
    // 0x15c574: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x15c574u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15c578:
    // 0x15c578: 0x8fa20230  lw          $v0, 0x230($sp)
    ctx->pc = 0x15c578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
label_15c57c:
    // 0x15c57c: 0x2444005c  addiu       $a0, $v0, 0x5C
    ctx->pc = 0x15c57cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 92));
label_15c580:
    // 0x15c580: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15c580u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15c584:
    // 0x15c584: 0xc05612c  jal         func_1584B0
label_15c588:
    if (ctx->pc == 0x15C588u) {
        ctx->pc = 0x15C58Cu;
        goto label_15c58c;
    }
    ctx->pc = 0x15C584u;
    SET_GPR_U32(ctx, 31, 0x15C58Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x15C584u, 0x15C58Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C58Cu;
label_15c58c:
    // 0x15c58c: 0xac550000  sw          $s5, 0x0($v0)
    ctx->pc = 0x15c58cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 21));
label_15c590:
    // 0x15c590: 0x8fa40230  lw          $a0, 0x230($sp)
    ctx->pc = 0x15c590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
label_15c594:
    // 0x15c594: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x15c594u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_15c598:
    // 0x15c598: 0x24a53228  addiu       $a1, $a1, 0x3228
    ctx->pc = 0x15c598u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12840));
label_15c59c:
    // 0x15c59c: 0xc0552e4  jal         func_154B90
label_15c5a0:
    if (ctx->pc == 0x15C5A0u) {
        ctx->pc = 0x15C5A4u;
        goto label_15c5a4;
    }
    ctx->pc = 0x15C59Cu;
    SET_GPR_U32(ctx, 31, 0x15C5A4u);
    ctx->pc = 0x154B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B90u, 0x15C59Cu, 0x15C5A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C5A4u;
label_15c5a4:
    // 0x15c5a4: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x15c5a4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15c5a8:
    // 0x15c5a8: 0x8fa20230  lw          $v0, 0x230($sp)
    ctx->pc = 0x15c5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
label_15c5ac:
    // 0x15c5ac: 0x26050001  addiu       $a1, $s0, 0x1
    ctx->pc = 0x15c5acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_15c5b0:
    // 0x15c5b0: 0x2444005c  addiu       $a0, $v0, 0x5C
    ctx->pc = 0x15c5b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 92));
label_15c5b4:
    // 0x15c5b4: 0xc05612c  jal         func_1584B0
label_15c5b8:
    if (ctx->pc == 0x15C5B8u) {
        ctx->pc = 0x15C5BCu;
        goto label_15c5bc;
    }
    ctx->pc = 0x15C5B4u;
    SET_GPR_U32(ctx, 31, 0x15C5BCu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x15C5B4u, 0x15C5BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C5BCu;
label_15c5bc:
    // 0x15c5bc: 0xac550000  sw          $s5, 0x0($v0)
    ctx->pc = 0x15c5bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 21));
label_15c5c0:
    // 0x15c5c0: 0x8fa40230  lw          $a0, 0x230($sp)
    ctx->pc = 0x15c5c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
label_15c5c4:
    // 0x15c5c4: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x15c5c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_15c5c8:
    // 0x15c5c8: 0x24a53238  addiu       $a1, $a1, 0x3238
    ctx->pc = 0x15c5c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12856));
label_15c5cc:
    // 0x15c5cc: 0xc0552e4  jal         func_154B90
label_15c5d0:
    if (ctx->pc == 0x15C5D0u) {
        ctx->pc = 0x15C5D4u;
        goto label_15c5d4;
    }
    ctx->pc = 0x15C5CCu;
    SET_GPR_U32(ctx, 31, 0x15C5D4u);
    ctx->pc = 0x154B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B90u, 0x15C5CCu, 0x15C5D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C5D4u;
label_15c5d4:
    // 0x15c5d4: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x15c5d4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15c5d8:
    // 0x15c5d8: 0x8fa20230  lw          $v0, 0x230($sp)
    ctx->pc = 0x15c5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
label_15c5dc:
    // 0x15c5dc: 0x26050002  addiu       $a1, $s0, 0x2
    ctx->pc = 0x15c5dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
label_15c5e0:
    // 0x15c5e0: 0x2444005c  addiu       $a0, $v0, 0x5C
    ctx->pc = 0x15c5e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 92));
label_15c5e4:
    // 0x15c5e4: 0xc05612c  jal         func_1584B0
label_15c5e8:
    if (ctx->pc == 0x15C5E8u) {
        ctx->pc = 0x15C5ECu;
        goto label_15c5ec;
    }
    ctx->pc = 0x15C5E4u;
    SET_GPR_U32(ctx, 31, 0x15C5ECu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x15C5E4u, 0x15C5ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C5ECu;
label_15c5ec:
    // 0x15c5ec: 0xac550000  sw          $s5, 0x0($v0)
    ctx->pc = 0x15c5ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 21));
label_15c5f0:
    // 0x15c5f0: 0x8fa40230  lw          $a0, 0x230($sp)
    ctx->pc = 0x15c5f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
label_15c5f4:
    // 0x15c5f4: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x15c5f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_15c5f8:
    // 0x15c5f8: 0x24a53248  addiu       $a1, $a1, 0x3248
    ctx->pc = 0x15c5f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12872));
label_15c5fc:
    // 0x15c5fc: 0xc0552e4  jal         func_154B90
label_15c600:
    if (ctx->pc == 0x15C600u) {
        ctx->pc = 0x15C604u;
        goto label_15c604;
    }
    ctx->pc = 0x15C5FCu;
    SET_GPR_U32(ctx, 31, 0x15C604u);
    ctx->pc = 0x154B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B90u, 0x15C5FCu, 0x15C604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C604u;
label_15c604:
    // 0x15c604: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x15c604u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15c608:
    // 0x15c608: 0x8fa20230  lw          $v0, 0x230($sp)
    ctx->pc = 0x15c608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
label_15c60c:
    // 0x15c60c: 0x26050003  addiu       $a1, $s0, 0x3
    ctx->pc = 0x15c60cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
label_15c610:
    // 0x15c610: 0x2444005c  addiu       $a0, $v0, 0x5C
    ctx->pc = 0x15c610u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 92));
label_15c614:
    // 0x15c614: 0xc05612c  jal         func_1584B0
label_15c618:
    if (ctx->pc == 0x15C618u) {
        ctx->pc = 0x15C61Cu;
        goto label_15c61c;
    }
    ctx->pc = 0x15C614u;
    SET_GPR_U32(ctx, 31, 0x15C61Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x15C614u, 0x15C61Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C61Cu;
label_15c61c:
    // 0x15c61c: 0xac550000  sw          $s5, 0x0($v0)
    ctx->pc = 0x15c61cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 21));
label_15c620:
    // 0x15c620: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x15c620u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15c624:
    // 0x15c624: 0x10000044  b           . + 4 + (0x44 << 2)
label_15c628:
    if (ctx->pc == 0x15C628u) {
        ctx->pc = 0x15C62Cu;
        goto label_15c62c;
    }
    ctx->pc = 0x15C624u;
    {
        const bool branch_taken_0x15c624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15c624) {
            ctx->pc = 0x15C738u;
            goto label_15c738;
        }
    }
    ctx->pc = 0x15C62Cu;
label_15c62c:
    // 0x15c62c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x15c62cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_15c630:
    // 0x15c630: 0x1242002a  beq         $s2, $v0, . + 4 + (0x2A << 2)
label_15c634:
    if (ctx->pc == 0x15C634u) {
        ctx->pc = 0x15C638u;
        goto label_15c638;
    }
    ctx->pc = 0x15C630u;
    {
        const bool branch_taken_0x15c630 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x15c630) {
            ctx->pc = 0x15C6DCu;
            goto label_15c6dc;
        }
    }
    ctx->pc = 0x15C638u;
label_15c638:
    // 0x15c638: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x15c638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_15c63c:
    // 0x15c63c: 0x12420020  beq         $s2, $v0, . + 4 + (0x20 << 2)
label_15c640:
    if (ctx->pc == 0x15C640u) {
        ctx->pc = 0x15C644u;
        goto label_15c644;
    }
    ctx->pc = 0x15C63Cu;
    {
        const bool branch_taken_0x15c63c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x15c63c) {
            ctx->pc = 0x15C6C0u;
            goto label_15c6c0;
        }
    }
    ctx->pc = 0x15C644u;
label_15c644:
    // 0x15c644: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x15c644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_15c648:
    // 0x15c648: 0x12420016  beq         $s2, $v0, . + 4 + (0x16 << 2)
label_15c64c:
    if (ctx->pc == 0x15C64Cu) {
        ctx->pc = 0x15C650u;
        goto label_15c650;
    }
    ctx->pc = 0x15C648u;
    {
        const bool branch_taken_0x15c648 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x15c648) {
            ctx->pc = 0x15C6A4u;
            goto label_15c6a4;
        }
    }
    ctx->pc = 0x15C650u;
label_15c650:
    // 0x15c650: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15c650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15c654:
    // 0x15c654: 0x1242000c  beq         $s2, $v0, . + 4 + (0xC << 2)
label_15c658:
    if (ctx->pc == 0x15C658u) {
        ctx->pc = 0x15C65Cu;
        goto label_15c65c;
    }
    ctx->pc = 0x15C654u;
    {
        const bool branch_taken_0x15c654 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x15c654) {
            ctx->pc = 0x15C688u;
            goto label_15c688;
        }
    }
    ctx->pc = 0x15C65Cu;
label_15c65c:
    // 0x15c65c: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
label_15c660:
    if (ctx->pc == 0x15C660u) {
        ctx->pc = 0x15C664u;
        goto label_15c664;
    }
    ctx->pc = 0x15C65Cu;
    {
        const bool branch_taken_0x15c65c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x15c65c) {
            ctx->pc = 0x15C66Cu;
            goto label_15c66c;
        }
    }
    ctx->pc = 0x15C664u;
label_15c664:
    // 0x15c664: 0x10000022  b           . + 4 + (0x22 << 2)
label_15c668:
    if (ctx->pc == 0x15C668u) {
        ctx->pc = 0x15C66Cu;
        goto label_15c66c;
    }
    ctx->pc = 0x15C664u;
    {
        const bool branch_taken_0x15c664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15c664) {
            ctx->pc = 0x15C6F0u;
            goto label_15c6f0;
        }
    }
    ctx->pc = 0x15C66Cu;
label_15c66c:
    // 0x15c66c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x15c66cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_15c670:
    // 0x15c670: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x15c670u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_15c674:
    // 0x15c674: 0x24a53258  addiu       $a1, $a1, 0x3258
    ctx->pc = 0x15c674u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12888));
label_15c678:
    // 0x15c678: 0xc0bc5c6  jal         func_2F1718
label_15c67c:
    if (ctx->pc == 0x15C67Cu) {
        ctx->pc = 0x15C680u;
        goto label_15c680;
    }
    ctx->pc = 0x15C678u;
    SET_GPR_U32(ctx, 31, 0x15C680u);
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x15C678u, 0x15C680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C680u;
label_15c680:
    // 0x15c680: 0x1000001b  b           . + 4 + (0x1B << 2)
label_15c684:
    if (ctx->pc == 0x15C684u) {
        ctx->pc = 0x15C688u;
        goto label_15c688;
    }
    ctx->pc = 0x15C680u;
    {
        const bool branch_taken_0x15c680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15c680) {
            ctx->pc = 0x15C6F0u;
            goto label_15c6f0;
        }
    }
    ctx->pc = 0x15C688u;
label_15c688:
    // 0x15c688: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x15c688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_15c68c:
    // 0x15c68c: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x15c68cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_15c690:
    // 0x15c690: 0x24a53268  addiu       $a1, $a1, 0x3268
    ctx->pc = 0x15c690u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12904));
label_15c694:
    // 0x15c694: 0xc0bc5c6  jal         func_2F1718
label_15c698:
    if (ctx->pc == 0x15C698u) {
        ctx->pc = 0x15C69Cu;
        goto label_15c69c;
    }
    ctx->pc = 0x15C694u;
    SET_GPR_U32(ctx, 31, 0x15C69Cu);
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x15C694u, 0x15C69Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C69Cu;
label_15c69c:
    // 0x15c69c: 0x10000014  b           . + 4 + (0x14 << 2)
label_15c6a0:
    if (ctx->pc == 0x15C6A0u) {
        ctx->pc = 0x15C6A4u;
        goto label_15c6a4;
    }
    ctx->pc = 0x15C69Cu;
    {
        const bool branch_taken_0x15c69c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15c69c) {
            ctx->pc = 0x15C6F0u;
            goto label_15c6f0;
        }
    }
    ctx->pc = 0x15C6A4u;
label_15c6a4:
    // 0x15c6a4: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x15c6a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_15c6a8:
    // 0x15c6a8: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x15c6a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_15c6ac:
    // 0x15c6ac: 0x24a53280  addiu       $a1, $a1, 0x3280
    ctx->pc = 0x15c6acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12928));
label_15c6b0:
    // 0x15c6b0: 0xc0bc5c6  jal         func_2F1718
label_15c6b4:
    if (ctx->pc == 0x15C6B4u) {
        ctx->pc = 0x15C6B8u;
        goto label_15c6b8;
    }
    ctx->pc = 0x15C6B0u;
    SET_GPR_U32(ctx, 31, 0x15C6B8u);
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x15C6B0u, 0x15C6B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C6B8u;
label_15c6b8:
    // 0x15c6b8: 0x1000000d  b           . + 4 + (0xD << 2)
label_15c6bc:
    if (ctx->pc == 0x15C6BCu) {
        ctx->pc = 0x15C6C0u;
        goto label_15c6c0;
    }
    ctx->pc = 0x15C6B8u;
    {
        const bool branch_taken_0x15c6b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15c6b8) {
            ctx->pc = 0x15C6F0u;
            goto label_15c6f0;
        }
    }
    ctx->pc = 0x15C6C0u;
label_15c6c0:
    // 0x15c6c0: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x15c6c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_15c6c4:
    // 0x15c6c4: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x15c6c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_15c6c8:
    // 0x15c6c8: 0x24a53298  addiu       $a1, $a1, 0x3298
    ctx->pc = 0x15c6c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12952));
label_15c6cc:
    // 0x15c6cc: 0xc0bc5c6  jal         func_2F1718
label_15c6d0:
    if (ctx->pc == 0x15C6D0u) {
        ctx->pc = 0x15C6D4u;
        goto label_15c6d4;
    }
    ctx->pc = 0x15C6CCu;
    SET_GPR_U32(ctx, 31, 0x15C6D4u);
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x15C6CCu, 0x15C6D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C6D4u;
label_15c6d4:
    // 0x15c6d4: 0x10000006  b           . + 4 + (0x6 << 2)
label_15c6d8:
    if (ctx->pc == 0x15C6D8u) {
        ctx->pc = 0x15C6DCu;
        goto label_15c6dc;
    }
    ctx->pc = 0x15C6D4u;
    {
        const bool branch_taken_0x15c6d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15c6d4) {
            ctx->pc = 0x15C6F0u;
            goto label_15c6f0;
        }
    }
    ctx->pc = 0x15C6DCu;
label_15c6dc:
    // 0x15c6dc: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x15c6dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_15c6e0:
    // 0x15c6e0: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x15c6e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_15c6e4:
    // 0x15c6e4: 0x24a532a8  addiu       $a1, $a1, 0x32A8
    ctx->pc = 0x15c6e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12968));
label_15c6e8:
    // 0x15c6e8: 0xc0bc5c6  jal         func_2F1718
label_15c6ec:
    if (ctx->pc == 0x15C6ECu) {
        ctx->pc = 0x15C6F0u;
        goto label_15c6f0;
    }
    ctx->pc = 0x15C6E8u;
    SET_GPR_U32(ctx, 31, 0x15C6F0u);
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x15C6E8u, 0x15C6F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C6F0u;
label_15c6f0:
    // 0x15c6f0: 0x8fa40230  lw          $a0, 0x230($sp)
    ctx->pc = 0x15c6f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
label_15c6f4:
    // 0x15c6f4: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x15c6f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_15c6f8:
    // 0x15c6f8: 0xc0552e4  jal         func_154B90
label_15c6fc:
    if (ctx->pc == 0x15C6FCu) {
        ctx->pc = 0x15C700u;
        goto label_15c700;
    }
    ctx->pc = 0x15C6F8u;
    SET_GPR_U32(ctx, 31, 0x15C700u);
    ctx->pc = 0x154B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B90u, 0x15C6F8u, 0x15C700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C700u;
label_15c700:
    // 0x15c700: 0x122080  sll         $a0, $s2, 2
    ctx->pc = 0x15c700u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_15c704:
    // 0x15c704: 0x8fa30230  lw          $v1, 0x230($sp)
    ctx->pc = 0x15c704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
label_15c708:
    // 0x15c708: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15c708u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_15c70c:
    // 0x15c70c: 0xac6200d0  sw          $v0, 0xD0($v1)
    ctx->pc = 0x15c70cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 208), GPR_U32(ctx, 2));
label_15c710:
    // 0x15c710: 0x8fa40230  lw          $a0, 0x230($sp)
    ctx->pc = 0x15c710u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
label_15c714:
    // 0x15c714: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x15c714u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_15c718:
    // 0x15c718: 0x8fa20230  lw          $v0, 0x230($sp)
    ctx->pc = 0x15c718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
label_15c71c:
    // 0x15c71c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15c71cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_15c720:
    // 0x15c720: 0x8c840034  lw          $a0, 0x34($a0)
    ctx->pc = 0x15c720u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
label_15c724:
    // 0x15c724: 0x8c4500d0  lw          $a1, 0xD0($v0)
    ctx->pc = 0x15c724u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 208)));
label_15c728:
    // 0x15c728: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15c728u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15c72c:
    // 0x15c72c: 0xc08c8dc  jal         func_232370
label_15c730:
    if (ctx->pc == 0x15C730u) {
        ctx->pc = 0x15C734u;
        goto label_15c734;
    }
    ctx->pc = 0x15C72Cu;
    SET_GPR_U32(ctx, 31, 0x15C734u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x15C72Cu, 0x15C734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C734u;
label_15c734:
    // 0x15c734: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x15c734u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_15c738:
    // 0x15c738: 0x2e420005  sltiu       $v0, $s2, 0x5
    ctx->pc = 0x15c738u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_15c73c:
    // 0x15c73c: 0x1440ffbb  bnez        $v0, . + 4 + (-0x45 << 2)
label_15c740:
    if (ctx->pc == 0x15C740u) {
        ctx->pc = 0x15C744u;
        goto label_15c744;
    }
    ctx->pc = 0x15C73Cu;
    {
        const bool branch_taken_0x15c73c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15c73c) {
            ctx->pc = 0x15C62Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15c62c;
        }
    }
    ctx->pc = 0x15C744u;
label_15c744:
    // 0x15c744: 0x8fa40230  lw          $a0, 0x230($sp)
    ctx->pc = 0x15c744u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
label_15c748:
    // 0x15c748: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x15c748u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_15c74c:
    // 0x15c74c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15c74cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15c750:
    // 0x15c750: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x15c750u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15c754:
    // 0x15c754: 0xc057b5c  jal         func_15ED70
label_15c758:
    if (ctx->pc == 0x15C758u) {
        ctx->pc = 0x15C75Cu;
        goto label_15c75c;
    }
    ctx->pc = 0x15C754u;
    SET_GPR_U32(ctx, 31, 0x15C75Cu);
    ctx->pc = 0x15ED70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15ED70u, 0x15C754u, 0x15C75Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C75Cu;
label_15c75c:
    // 0x15c75c: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x15c75cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_15c760:
    // 0x15c760: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x15c760u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_15c764:
    // 0x15c764: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x15c764u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_15c768:
    // 0x15c768: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x15c768u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_15c76c:
    // 0x15c76c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x15c76cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_15c770:
    // 0x15c770: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15c770u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_15c774:
    // 0x15c774: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15c774u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_15c778:
    // 0x15c778: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15c778u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_15c77c:
    // 0x15c77c: 0x27bd0240  addiu       $sp, $sp, 0x240
    ctx->pc = 0x15c77cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
label_15c780:
    // 0x15c780: 0x3e00008  jr          $ra
label_15c784:
    if (ctx->pc == 0x15C784u) {
        ctx->pc = 0x15C788u;
        goto label_15c788;
    }
    ctx->pc = 0x15C780u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15C780u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15C788u;
label_15c788:
    // 0x15c788: 0x0  nop
    ctx->pc = 0x15c788u;
    // NOP
label_15c78c:
    // 0x15c78c: 0x0  nop
    ctx->pc = 0x15c78cu;
    // NOP
label_15c790:
    // 0x15c790: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x15c790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_15c794:
    // 0x15c794: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15c794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_15c798:
    // 0x15c798: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x15c798u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_15c79c:
    // 0x15c79c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x15c79cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_15c7a0:
    // 0x15c7a0: 0x8c44009c  lw          $a0, 0x9C($v0)
    ctx->pc = 0x15c7a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
label_15c7a4:
    // 0x15c7a4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x15c7a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_15c7a8:
    // 0x15c7a8: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x15c7a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_15c7ac:
    // 0x15c7ac: 0x320f809  jalr        $t9
label_15c7b0:
    if (ctx->pc == 0x15C7B0u) {
        ctx->pc = 0x15C7B4u;
        goto label_15c7b4;
    }
    ctx->pc = 0x15C7ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x15C7B4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15C7ACu, 0x15C7B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15C7B4u;
label_15c7b4:
    // 0x15c7b4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x15c7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_15c7b8:
    // 0x15c7b8: 0x8c42009c  lw          $v0, 0x9C($v0)
    ctx->pc = 0x15c7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
label_15c7bc:
    // 0x15c7bc: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_15c7c0:
    if (ctx->pc == 0x15C7C0u) {
        ctx->pc = 0x15C7C4u;
        goto label_15c7c4;
    }
    ctx->pc = 0x15C7BCu;
    {
        const bool branch_taken_0x15c7bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15c7bc) {
            ctx->pc = 0x15C7ECu;
            goto label_15c7ec;
        }
    }
    ctx->pc = 0x15C7C4u;
label_15c7c4:
    // 0x15c7c4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x15c7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_15c7c8:
    // 0x15c7c8: 0x8c44009c  lw          $a0, 0x9C($v0)
    ctx->pc = 0x15c7c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
label_15c7cc:
    // 0x15c7cc: 0xc054fe0  jal         func_153F80
label_15c7d0:
    if (ctx->pc == 0x15C7D0u) {
        ctx->pc = 0x15C7D4u;
        goto label_15c7d4;
    }
    ctx->pc = 0x15C7CCu;
    SET_GPR_U32(ctx, 31, 0x15C7D4u);
    ctx->pc = 0x153F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153F80u, 0x15C7CCu, 0x15C7D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C7D4u;
label_15c7d4:
    // 0x15c7d4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x15c7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_15c7d8:
    // 0x15c7d8: 0x8c44009c  lw          $a0, 0x9C($v0)
    ctx->pc = 0x15c7d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
label_15c7dc:
    // 0x15c7dc: 0xc119c5c  jal         func_467170
label_15c7e0:
    if (ctx->pc == 0x15C7E0u) {
        ctx->pc = 0x15C7E4u;
        goto label_15c7e4;
    }
    ctx->pc = 0x15C7DCu;
    SET_GPR_U32(ctx, 31, 0x15C7E4u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x15C7DCu, 0x15C7E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C7E4u;
label_15c7e4:
    // 0x15c7e4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x15c7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_15c7e8:
    // 0x15c7e8: 0xac40009c  sw          $zero, 0x9C($v0)
    ctx->pc = 0x15c7e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 156), GPR_U32(ctx, 0));
label_15c7ec:
    // 0x15c7ec: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x15c7ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_15c7f0:
    // 0x15c7f0: 0xc0559ac  jal         func_1566B0
label_15c7f4:
    if (ctx->pc == 0x15C7F4u) {
        ctx->pc = 0x15C7F8u;
        goto label_15c7f8;
    }
    ctx->pc = 0x15C7F0u;
    SET_GPR_U32(ctx, 31, 0x15C7F8u);
    ctx->pc = 0x1566B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1566B0u, 0x15C7F0u, 0x15C7F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C7F8u;
label_15c7f8:
    // 0x15c7f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15c7f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_15c7fc:
    // 0x15c7fc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x15c7fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_15c800:
    // 0x15c800: 0x3e00008  jr          $ra
label_15c804:
    if (ctx->pc == 0x15C804u) {
        ctx->pc = 0x15C808u;
        goto label_15c808;
    }
    ctx->pc = 0x15C800u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15C800u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15C808u;
label_15c808:
    // 0x15c808: 0x0  nop
    ctx->pc = 0x15c808u;
    // NOP
label_15c80c:
    // 0x15c80c: 0x0  nop
    ctx->pc = 0x15c80cu;
    // NOP
label_15c810:
    // 0x15c810: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x15c810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_15c814:
    // 0x15c814: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15c814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_15c818:
    // 0x15c818: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x15c818u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_15c81c:
    // 0x15c81c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x15c81cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_15c820:
    // 0x15c820: 0x904200a0  lbu         $v0, 0xA0($v0)
    ctx->pc = 0x15c820u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 160)));
label_15c824:
    // 0x15c824: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_15c828:
    if (ctx->pc == 0x15C828u) {
        ctx->pc = 0x15C82Cu;
        goto label_15c82c;
    }
    ctx->pc = 0x15C824u;
    {
        const bool branch_taken_0x15c824 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15c824) {
            ctx->pc = 0x15C844u;
            goto label_15c844;
        }
    }
    ctx->pc = 0x15C82Cu;
label_15c82c:
    // 0x15c82c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x15c82cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_15c830:
    // 0x15c830: 0x8c44009c  lw          $a0, 0x9C($v0)
    ctx->pc = 0x15c830u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
label_15c834:
    // 0x15c834: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x15c834u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_15c838:
    // 0x15c838: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x15c838u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_15c83c:
    // 0x15c83c: 0x320f809  jalr        $t9
label_15c840:
    if (ctx->pc == 0x15C840u) {
        ctx->pc = 0x15C844u;
        goto label_15c844;
    }
    ctx->pc = 0x15C83Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x15C844u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15C83Cu, 0x15C844u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15C844u;
label_15c844:
    // 0x15c844: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x15c844u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_15c848:
    // 0x15c848: 0xc055a84  jal         func_156A10
label_15c84c:
    if (ctx->pc == 0x15C84Cu) {
        ctx->pc = 0x15C850u;
        goto label_15c850;
    }
    ctx->pc = 0x15C848u;
    SET_GPR_U32(ctx, 31, 0x15C850u);
    ctx->pc = 0x156A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156A10u, 0x15C848u, 0x15C850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C850u;
label_15c850:
    // 0x15c850: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15c850u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_15c854:
    // 0x15c854: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x15c854u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_15c858:
    // 0x15c858: 0x3e00008  jr          $ra
label_15c85c:
    if (ctx->pc == 0x15C85Cu) {
        ctx->pc = 0x15C860u;
        goto label_15c860;
    }
    ctx->pc = 0x15C858u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15C858u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15C860u;
label_15c860:
    // 0x15c860: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x15c860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_15c864:
    // 0x15c864: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x15c864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_15c868:
    // 0x15c868: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15c868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_15c86c:
    // 0x15c86c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15c86cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_15c870:
    // 0x15c870: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15c870u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_15c874:
    // 0x15c874: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x15c874u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
label_15c878:
    // 0x15c878: 0xa3a50050  sb          $a1, 0x50($sp)
    ctx->pc = 0x15c878u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 80), (uint8_t)GPR_U32(ctx, 5));
label_15c87c:
    // 0x15c87c: 0x93a20050  lbu         $v0, 0x50($sp)
    ctx->pc = 0x15c87cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 80)));
label_15c880:
    // 0x15c880: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x15c880u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_15c884:
    // 0x15c884: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15c884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15c888:
    // 0x15c888: 0x1462006a  bne         $v1, $v0, . + 4 + (0x6A << 2)
label_15c88c:
    if (ctx->pc == 0x15C88Cu) {
        ctx->pc = 0x15C890u;
        goto label_15c890;
    }
    ctx->pc = 0x15C888u;
    {
        const bool branch_taken_0x15c888 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x15c888) {
            ctx->pc = 0x15CA34u;
            goto label_15ca34;
        }
    }
    ctx->pc = 0x15C890u;
label_15c890:
    // 0x15c890: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x15c890u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_15c894:
    // 0x15c894: 0x93a50050  lbu         $a1, 0x50($sp)
    ctx->pc = 0x15c894u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 80)));
label_15c898:
    // 0x15c898: 0xc055a78  jal         func_1569E0
label_15c89c:
    if (ctx->pc == 0x15C89Cu) {
        ctx->pc = 0x15C8A0u;
        goto label_15c8a0;
    }
    ctx->pc = 0x15C898u;
    SET_GPR_U32(ctx, 31, 0x15C8A0u);
    ctx->pc = 0x1569E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1569E0u, 0x15C898u, 0x15C8A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C8A0u;
label_15c8a0:
    // 0x15c8a0: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x15c8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
label_15c8a4:
    // 0x15c8a4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x15c8a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_15c8a8:
    // 0x15c8a8: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x15c8a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_15c8ac:
    // 0x15c8ac: 0xc085538  jal         func_2154E0
label_15c8b0:
    if (ctx->pc == 0x15C8B0u) {
        ctx->pc = 0x15C8B4u;
        goto label_15c8b4;
    }
    ctx->pc = 0x15C8ACu;
    SET_GPR_U32(ctx, 31, 0x15C8B4u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x15C8ACu, 0x15C8B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C8B4u;
label_15c8b4:
    // 0x15c8b4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x15c8b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15c8b8:
    // 0x15c8b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15c8b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15c8bc:
    // 0x15c8bc: 0xc05734c  jal         func_15CD30
label_15c8c0:
    if (ctx->pc == 0x15C8C0u) {
        ctx->pc = 0x15C8C4u;
        goto label_15c8c4;
    }
    ctx->pc = 0x15C8BCu;
    SET_GPR_U32(ctx, 31, 0x15C8C4u);
    ctx->pc = 0x15CD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CD30u, 0x15C8BCu, 0x15C8C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C8C4u;
label_15c8c4:
    // 0x15c8c4: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x15c8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_15c8c8:
    // 0x15c8c8: 0xa06200a0  sb          $v0, 0xA0($v1)
    ctx->pc = 0x15c8c8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 160), (uint8_t)GPR_U32(ctx, 2));
label_15c8cc:
    // 0x15c8cc: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x15c8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_15c8d0:
    // 0x15c8d0: 0x904200a0  lbu         $v0, 0xA0($v0)
    ctx->pc = 0x15c8d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 160)));
label_15c8d4:
    // 0x15c8d4: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
label_15c8d8:
    if (ctx->pc == 0x15C8D8u) {
        ctx->pc = 0x15C8DCu;
        goto label_15c8dc;
    }
    ctx->pc = 0x15C8D4u;
    {
        const bool branch_taken_0x15c8d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15c8d4) {
            ctx->pc = 0x15C9B0u;
            goto label_15c9b0;
        }
    }
    ctx->pc = 0x15C8DCu;
label_15c8dc:
    // 0x15c8dc: 0xc090864  jal         func_242190
label_15c8e0:
    if (ctx->pc == 0x15C8E0u) {
        ctx->pc = 0x15C8E4u;
        goto label_15c8e4;
    }
    ctx->pc = 0x15C8DCu;
    SET_GPR_U32(ctx, 31, 0x15C8E4u);
    ctx->pc = 0x242190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242190u, 0x15C8DCu, 0x15C8E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C8E4u;
label_15c8e4:
    // 0x15c8e4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x15c8e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15c8e8:
    // 0x15c8e8: 0xc0905a0  jal         func_241680
label_15c8ec:
    if (ctx->pc == 0x15C8ECu) {
        ctx->pc = 0x15C8F0u;
        goto label_15c8f0;
    }
    ctx->pc = 0x15C8E8u;
    SET_GPR_U32(ctx, 31, 0x15C8F0u);
    ctx->pc = 0x241680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241680u, 0x15C8E8u, 0x15C8F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C8F0u;
label_15c8f0:
    // 0x15c8f0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x15c8f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15c8f4:
    // 0x15c8f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15c8f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15c8f8:
    // 0x15c8f8: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x15c8f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_15c8fc:
    // 0x15c8fc: 0x24a532b8  addiu       $a1, $a1, 0x32B8
    ctx->pc = 0x15c8fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12984));
label_15c900:
    // 0x15c900: 0xc09a364  jal         func_268D90
label_15c904:
    if (ctx->pc == 0x15C904u) {
        ctx->pc = 0x15C908u;
        goto label_15c908;
    }
    ctx->pc = 0x15C900u;
    SET_GPR_U32(ctx, 31, 0x15C908u);
    ctx->pc = 0x268D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x268D90u, 0x15C900u, 0x15C908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C908u;
label_15c908:
    // 0x15c908: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x15c908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_15c90c:
    // 0x15c90c: 0xac6200c8  sw          $v0, 0xC8($v1)
    ctx->pc = 0x15c90cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 200), GPR_U32(ctx, 2));
label_15c910:
    // 0x15c910: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x15c910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_15c914:
    // 0x15c914: 0x8c44009c  lw          $a0, 0x9C($v0)
    ctx->pc = 0x15c914u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
label_15c918:
    // 0x15c918: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x15c918u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_15c91c:
    // 0x15c91c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x15c91cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_15c920:
    // 0x15c920: 0x320f809  jalr        $t9
label_15c924:
    if (ctx->pc == 0x15C924u) {
        ctx->pc = 0x15C928u;
        goto label_15c928;
    }
    ctx->pc = 0x15C920u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x15C928u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15C920u, 0x15C928u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15C928u;
label_15c928:
    // 0x15c928: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x15c928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_15c92c:
    // 0x15c92c: 0x8c44009c  lw          $a0, 0x9C($v0)
    ctx->pc = 0x15c92cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
label_15c930:
    // 0x15c930: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x15c930u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_15c934:
    // 0x15c934: 0x24a532d0  addiu       $a1, $a1, 0x32D0
    ctx->pc = 0x15c934u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13008));
label_15c938:
    // 0x15c938: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x15c938u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_15c93c:
    // 0x15c93c: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x15c93cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_15c940:
    // 0x15c940: 0x320f809  jalr        $t9
label_15c944:
    if (ctx->pc == 0x15C944u) {
        ctx->pc = 0x15C948u;
        goto label_15c948;
    }
    ctx->pc = 0x15C940u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x15C948u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15C940u, 0x15C948u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15C948u;
label_15c948:
    // 0x15c948: 0x3c024020  lui         $v0, 0x4020
    ctx->pc = 0x15c948u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16416 << 16));
label_15c94c:
    // 0x15c94c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15c94cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_15c950:
    // 0x15c950: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x15c950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_15c954:
    // 0x15c954: 0xe44000a4  swc1        $f0, 0xA4($v0)
    ctx->pc = 0x15c954u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 164), bits); }
label_15c958:
    // 0x15c958: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x15c958u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_15c95c:
    // 0x15c95c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x15c95cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_15c960:
    // 0x15c960: 0xe44000a8  swc1        $f0, 0xA8($v0)
    ctx->pc = 0x15c960u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 168), bits); }
label_15c964:
    // 0x15c964: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x15c964u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_15c968:
    // 0x15c968: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x15c968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_15c96c:
    // 0x15c96c: 0xe44000ac  swc1        $f0, 0xAC($v0)
    ctx->pc = 0x15c96cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 172), bits); }
label_15c970:
    // 0x15c970: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x15c970u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_15c974:
    // 0x15c974: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x15c974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_15c978:
    // 0x15c978: 0xe44000b0  swc1        $f0, 0xB0($v0)
    ctx->pc = 0x15c978u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 176), bits); }
label_15c97c:
    // 0x15c97c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x15c97cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_15c980:
    // 0x15c980: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x15c980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_15c984:
    // 0x15c984: 0xe44000b4  swc1        $f0, 0xB4($v0)
    ctx->pc = 0x15c984u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 180), bits); }
label_15c988:
    // 0x15c988: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x15c988u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_15c98c:
    // 0x15c98c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x15c98cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_15c990:
    // 0x15c990: 0xac4300c4  sw          $v1, 0xC4($v0)
    ctx->pc = 0x15c990u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 196), GPR_U32(ctx, 3));
label_15c994:
    // 0x15c994: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x15c994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_15c998:
    // 0x15c998: 0xa04000cc  sb          $zero, 0xCC($v0)
    ctx->pc = 0x15c998u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 204), (uint8_t)GPR_U32(ctx, 0));
label_15c99c:
    // 0x15c99c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x15c99cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_15c9a0:
    // 0x15c9a0: 0xa04000e4  sb          $zero, 0xE4($v0)
    ctx->pc = 0x15c9a0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 228), (uint8_t)GPR_U32(ctx, 0));
label_15c9a4:
    // 0x15c9a4: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x15c9a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_15c9a8:
    // 0x15c9a8: 0xc058724  jal         func_161C90
label_15c9ac:
    if (ctx->pc == 0x15C9ACu) {
        ctx->pc = 0x15C9B0u;
        goto label_15c9b0;
    }
    ctx->pc = 0x15C9A8u;
    SET_GPR_U32(ctx, 31, 0x15C9B0u);
    ctx->pc = 0x161C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161C90u, 0x15C9A8u, 0x15C9B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C9B0u;
label_15c9b0:
    // 0x15c9b0: 0x3c120016  lui         $s2, 0x16
    ctx->pc = 0x15c9b0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)22 << 16));
label_15c9b4:
    // 0x15c9b4: 0x265201d0  addiu       $s2, $s2, 0x1D0
    ctx->pc = 0x15c9b4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 464));
label_15c9b8:
    // 0x15c9b8: 0x8f84baa8  lw          $a0, -0x4558($gp)
    ctx->pc = 0x15c9b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949544)));
label_15c9bc:
    // 0x15c9bc: 0xc0412ec  jal         func_104BB0
label_15c9c0:
    if (ctx->pc == 0x15C9C0u) {
        ctx->pc = 0x15C9C4u;
        goto label_15c9c4;
    }
    ctx->pc = 0x15C9BCu;
    SET_GPR_U32(ctx, 31, 0x15C9C4u);
    ctx->pc = 0x104BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104BB0u, 0x15C9BCu, 0x15C9C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C9C4u;
label_15c9c4:
    // 0x15c9c4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x15c9c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15c9c8:
    // 0x15c9c8: 0xc0ac868  jal         func_2B21A0
label_15c9cc:
    if (ctx->pc == 0x15C9CCu) {
        ctx->pc = 0x15C9D0u;
        goto label_15c9d0;
    }
    ctx->pc = 0x15C9C8u;
    SET_GPR_U32(ctx, 31, 0x15C9D0u);
    ctx->pc = 0x2B21A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B21A0u, 0x15C9C8u, 0x15C9D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C9D0u;
label_15c9d0:
    // 0x15c9d0: 0xac520028  sw          $s2, 0x28($v0)
    ctx->pc = 0x15c9d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 18));
label_15c9d4:
    // 0x15c9d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15c9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15c9d8:
    // 0x15c9d8: 0xa382a4b8  sb          $v0, -0x5B48($gp)
    ctx->pc = 0x15c9d8u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294943928), (uint8_t)GPR_U32(ctx, 2));
label_15c9dc:
    // 0x15c9dc: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x15c9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_15c9e0:
    // 0x15c9e0: 0x24440074  addiu       $a0, $v0, 0x74
    ctx->pc = 0x15c9e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 116));
label_15c9e4:
    // 0x15c9e4: 0xc0572c0  jal         func_15CB00
label_15c9e8:
    if (ctx->pc == 0x15C9E8u) {
        ctx->pc = 0x15C9ECu;
        goto label_15c9ec;
    }
    ctx->pc = 0x15C9E4u;
    SET_GPR_U32(ctx, 31, 0x15C9ECu);
    ctx->pc = 0x15CB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CB00u, 0x15C9E4u, 0x15C9ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C9ECu;
label_15c9ec:
    // 0x15c9ec: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x15c9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_15c9f0:
    // 0x15c9f0: 0xac4000e8  sw          $zero, 0xE8($v0)
    ctx->pc = 0x15c9f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 232), GPR_U32(ctx, 0));
label_15c9f4:
    // 0x15c9f4: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x15c9f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_15c9f8:
    // 0x15c9f8: 0xc057438  jal         func_15D0E0
label_15c9fc:
    if (ctx->pc == 0x15C9FCu) {
        ctx->pc = 0x15CA00u;
        goto label_15ca00;
    }
    ctx->pc = 0x15C9F8u;
    SET_GPR_U32(ctx, 31, 0x15CA00u);
    ctx->pc = 0x15D0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D0E0u, 0x15C9F8u, 0x15CA00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15CA00u;
label_15ca00:
    // 0x15ca00: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x15ca00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_15ca04:
    // 0x15ca04: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15ca04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15ca08:
    // 0x15ca08: 0xc05831c  jal         func_160C70
label_15ca0c:
    if (ctx->pc == 0x15CA0Cu) {
        ctx->pc = 0x15CA10u;
        goto label_15ca10;
    }
    ctx->pc = 0x15CA08u;
    SET_GPR_U32(ctx, 31, 0x15CA10u);
    ctx->pc = 0x160C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160C70u, 0x15CA08u, 0x15CA10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15CA10u;
label_15ca10:
    // 0x15ca10: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x15ca10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_15ca14:
    // 0x15ca14: 0xac400090  sw          $zero, 0x90($v0)
    ctx->pc = 0x15ca14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 144), GPR_U32(ctx, 0));
label_15ca18:
    // 0x15ca18: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x15ca18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_15ca1c:
    // 0x15ca1c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x15ca1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_15ca20:
    // 0x15ca20: 0xac430090  sw          $v1, 0x90($v0)
    ctx->pc = 0x15ca20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 144), GPR_U32(ctx, 3));
label_15ca24:
    // 0x15ca24: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x15ca24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_15ca28:
    // 0x15ca28: 0xac4000f8  sw          $zero, 0xF8($v0)
    ctx->pc = 0x15ca28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 248), GPR_U32(ctx, 0));
label_15ca2c:
    // 0x15ca2c: 0x10000023  b           . + 4 + (0x23 << 2)
label_15ca30:
    if (ctx->pc == 0x15CA30u) {
        ctx->pc = 0x15CA34u;
        goto label_15ca34;
    }
    ctx->pc = 0x15CA2Cu;
    {
        const bool branch_taken_0x15ca2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ca2c) {
            ctx->pc = 0x15CABCu;
            goto label_15cabc;
        }
    }
    ctx->pc = 0x15CA34u;
label_15ca34:
    // 0x15ca34: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x15ca34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_15ca38:
    // 0x15ca38: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x15ca38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_15ca3c:
    // 0x15ca3c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x15ca3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_15ca40:
    // 0x15ca40: 0xc08c910  jal         func_232440
label_15ca44:
    if (ctx->pc == 0x15CA44u) {
        ctx->pc = 0x15CA48u;
        goto label_15ca48;
    }
    ctx->pc = 0x15CA40u;
    SET_GPR_U32(ctx, 31, 0x15CA48u);
    ctx->pc = 0x232440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232440u, 0x15CA40u, 0x15CA48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15CA48u;
label_15ca48:
    // 0x15ca48: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x15ca48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_15ca4c:
    // 0x15ca4c: 0x24440074  addiu       $a0, $v0, 0x74
    ctx->pc = 0x15ca4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 116));
label_15ca50:
    // 0x15ca50: 0xc0572c0  jal         func_15CB00
label_15ca54:
    if (ctx->pc == 0x15CA54u) {
        ctx->pc = 0x15CA58u;
        goto label_15ca58;
    }
    ctx->pc = 0x15CA50u;
    SET_GPR_U32(ctx, 31, 0x15CA58u);
    ctx->pc = 0x15CB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CB00u, 0x15CA50u, 0x15CA58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15CA58u;
label_15ca58:
    // 0x15ca58: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15ca58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15ca5c:
    // 0x15ca5c: 0xa382a4b8  sb          $v0, -0x5B48($gp)
    ctx->pc = 0x15ca5cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294943928), (uint8_t)GPR_U32(ctx, 2));
label_15ca60:
    // 0x15ca60: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x15ca60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_15ca64:
    // 0x15ca64: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x15ca64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_15ca68:
    // 0x15ca68: 0xac430090  sw          $v1, 0x90($v0)
    ctx->pc = 0x15ca68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 144), GPR_U32(ctx, 3));
label_15ca6c:
    // 0x15ca6c: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x15ca6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_15ca70:
    // 0x15ca70: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15ca70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15ca74:
    // 0x15ca74: 0xc05831c  jal         func_160C70
label_15ca78:
    if (ctx->pc == 0x15CA78u) {
        ctx->pc = 0x15CA7Cu;
        goto label_15ca7c;
    }
    ctx->pc = 0x15CA74u;
    SET_GPR_U32(ctx, 31, 0x15CA7Cu);
    ctx->pc = 0x160C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160C70u, 0x15CA74u, 0x15CA7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15CA7Cu;
label_15ca7c:
    // 0x15ca7c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x15ca7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_15ca80:
    // 0x15ca80: 0x904200a0  lbu         $v0, 0xA0($v0)
    ctx->pc = 0x15ca80u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 160)));
label_15ca84:
    // 0x15ca84: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_15ca88:
    if (ctx->pc == 0x15CA88u) {
        ctx->pc = 0x15CA8Cu;
        goto label_15ca8c;
    }
    ctx->pc = 0x15CA84u;
    {
        const bool branch_taken_0x15ca84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ca84) {
            ctx->pc = 0x15CAACu;
            goto label_15caac;
        }
    }
    ctx->pc = 0x15CA8Cu;
label_15ca8c:
    // 0x15ca8c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x15ca8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_15ca90:
    // 0x15ca90: 0x8c44009c  lw          $a0, 0x9C($v0)
    ctx->pc = 0x15ca90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
label_15ca94:
    // 0x15ca94: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x15ca94u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_15ca98:
    // 0x15ca98: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x15ca98u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_15ca9c:
    // 0x15ca9c: 0x320f809  jalr        $t9
label_15caa0:
    if (ctx->pc == 0x15CAA0u) {
        ctx->pc = 0x15CAA4u;
        goto label_15caa4;
    }
    ctx->pc = 0x15CA9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x15CAA4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15CA9Cu, 0x15CAA4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15CAA4u;
label_15caa4:
    // 0x15caa4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x15caa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_15caa8:
    // 0x15caa8: 0xa04000a0  sb          $zero, 0xA0($v0)
    ctx->pc = 0x15caa8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 160), (uint8_t)GPR_U32(ctx, 0));
label_15caac:
    // 0x15caac: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x15caacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_15cab0:
    // 0x15cab0: 0x93a50050  lbu         $a1, 0x50($sp)
    ctx->pc = 0x15cab0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 80)));
label_15cab4:
    // 0x15cab4: 0xc055a78  jal         func_1569E0
label_15cab8:
    if (ctx->pc == 0x15CAB8u) {
        ctx->pc = 0x15CABCu;
        goto label_15cabc;
    }
    ctx->pc = 0x15CAB4u;
    SET_GPR_U32(ctx, 31, 0x15CABCu);
    ctx->pc = 0x1569E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1569E0u, 0x15CAB4u, 0x15CABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15CABCu;
label_15cabc:
    // 0x15cabc: 0x8f84baa8  lw          $a0, -0x4558($gp)
    ctx->pc = 0x15cabcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949544)));
label_15cac0:
    // 0x15cac0: 0xc0412ec  jal         func_104BB0
label_15cac4:
    if (ctx->pc == 0x15CAC4u) {
        ctx->pc = 0x15CAC8u;
        goto label_15cac8;
    }
    ctx->pc = 0x15CAC0u;
    SET_GPR_U32(ctx, 31, 0x15CAC8u);
    ctx->pc = 0x104BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104BB0u, 0x15CAC0u, 0x15CAC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15CAC8u;
label_15cac8:
    // 0x15cac8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x15cac8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15cacc:
    // 0x15cacc: 0xc0ac868  jal         func_2B21A0
label_15cad0:
    if (ctx->pc == 0x15CAD0u) {
        ctx->pc = 0x15CAD4u;
        goto label_15cad4;
    }
    ctx->pc = 0x15CACCu;
    SET_GPR_U32(ctx, 31, 0x15CAD4u);
    ctx->pc = 0x2B21A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B21A0u, 0x15CACCu, 0x15CAD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15CAD4u;
label_15cad4:
    // 0x15cad4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x15cad4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15cad8:
    // 0x15cad8: 0xc0b1de8  jal         func_2C77A0
label_15cadc:
    if (ctx->pc == 0x15CADCu) {
        ctx->pc = 0x15CAE0u;
        goto label_15cae0;
    }
    ctx->pc = 0x15CAD8u;
    SET_GPR_U32(ctx, 31, 0x15CAE0u);
    ctx->pc = 0x2C77A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C77A0u, 0x15CAD8u, 0x15CAE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15CAE0u;
label_15cae0:
    // 0x15cae0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x15cae0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_15cae4:
    // 0x15cae4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15cae4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_15cae8:
    // 0x15cae8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15cae8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_15caec:
    // 0x15caec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15caecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_15caf0:
    // 0x15caf0: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x15caf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_15caf4:
    // 0x15caf4: 0x3e00008  jr          $ra
label_15caf8:
    if (ctx->pc == 0x15CAF8u) {
        ctx->pc = 0x15CAFCu;
        goto label_15cafc;
    }
    ctx->pc = 0x15CAF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15CAF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15CAFCu;
label_15cafc:
    // 0x15cafc: 0x0  nop
    ctx->pc = 0x15cafcu;
    // NOP
    ctx->pc = 0x15cb00u;
}
