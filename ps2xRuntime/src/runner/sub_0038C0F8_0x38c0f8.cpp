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

// Function: sub_0038C0F8
// Address: 0x38c0f8 - 0x38cb60
void sub_0038C0F8_0x38c0f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038C0F8_0x38c0f8");
#endif

    switch (ctx->pc) {
        case 0x38c0f8u: goto label_38c0f8;
        case 0x38c0fcu: goto label_38c0fc;
        case 0x38c100u: goto label_38c100;
        case 0x38c104u: goto label_38c104;
        case 0x38c108u: goto label_38c108;
        case 0x38c10cu: goto label_38c10c;
        case 0x38c110u: goto label_38c110;
        case 0x38c114u: goto label_38c114;
        case 0x38c118u: goto label_38c118;
        case 0x38c11cu: goto label_38c11c;
        case 0x38c120u: goto label_38c120;
        case 0x38c124u: goto label_38c124;
        case 0x38c128u: goto label_38c128;
        case 0x38c12cu: goto label_38c12c;
        case 0x38c130u: goto label_38c130;
        case 0x38c134u: goto label_38c134;
        case 0x38c138u: goto label_38c138;
        case 0x38c13cu: goto label_38c13c;
        case 0x38c140u: goto label_38c140;
        case 0x38c144u: goto label_38c144;
        case 0x38c148u: goto label_38c148;
        case 0x38c14cu: goto label_38c14c;
        case 0x38c150u: goto label_38c150;
        case 0x38c154u: goto label_38c154;
        case 0x38c158u: goto label_38c158;
        case 0x38c15cu: goto label_38c15c;
        case 0x38c160u: goto label_38c160;
        case 0x38c164u: goto label_38c164;
        case 0x38c168u: goto label_38c168;
        case 0x38c16cu: goto label_38c16c;
        case 0x38c170u: goto label_38c170;
        case 0x38c174u: goto label_38c174;
        case 0x38c178u: goto label_38c178;
        case 0x38c17cu: goto label_38c17c;
        case 0x38c180u: goto label_38c180;
        case 0x38c184u: goto label_38c184;
        case 0x38c188u: goto label_38c188;
        case 0x38c18cu: goto label_38c18c;
        case 0x38c190u: goto label_38c190;
        case 0x38c194u: goto label_38c194;
        case 0x38c198u: goto label_38c198;
        case 0x38c19cu: goto label_38c19c;
        case 0x38c1a0u: goto label_38c1a0;
        case 0x38c1a4u: goto label_38c1a4;
        case 0x38c1a8u: goto label_38c1a8;
        case 0x38c1acu: goto label_38c1ac;
        case 0x38c1b0u: goto label_38c1b0;
        case 0x38c1b4u: goto label_38c1b4;
        case 0x38c1b8u: goto label_38c1b8;
        case 0x38c1bcu: goto label_38c1bc;
        case 0x38c1c0u: goto label_38c1c0;
        case 0x38c1c4u: goto label_38c1c4;
        case 0x38c1c8u: goto label_38c1c8;
        case 0x38c1ccu: goto label_38c1cc;
        case 0x38c1d0u: goto label_38c1d0;
        case 0x38c1d4u: goto label_38c1d4;
        case 0x38c1d8u: goto label_38c1d8;
        case 0x38c1dcu: goto label_38c1dc;
        case 0x38c1e0u: goto label_38c1e0;
        case 0x38c1e4u: goto label_38c1e4;
        case 0x38c1e8u: goto label_38c1e8;
        case 0x38c1ecu: goto label_38c1ec;
        case 0x38c1f0u: goto label_38c1f0;
        case 0x38c1f4u: goto label_38c1f4;
        case 0x38c1f8u: goto label_38c1f8;
        case 0x38c1fcu: goto label_38c1fc;
        case 0x38c200u: goto label_38c200;
        case 0x38c204u: goto label_38c204;
        case 0x38c208u: goto label_38c208;
        case 0x38c20cu: goto label_38c20c;
        case 0x38c210u: goto label_38c210;
        case 0x38c214u: goto label_38c214;
        case 0x38c218u: goto label_38c218;
        case 0x38c21cu: goto label_38c21c;
        case 0x38c220u: goto label_38c220;
        case 0x38c224u: goto label_38c224;
        case 0x38c228u: goto label_38c228;
        case 0x38c22cu: goto label_38c22c;
        case 0x38c230u: goto label_38c230;
        case 0x38c234u: goto label_38c234;
        case 0x38c238u: goto label_38c238;
        case 0x38c23cu: goto label_38c23c;
        case 0x38c240u: goto label_38c240;
        case 0x38c244u: goto label_38c244;
        case 0x38c248u: goto label_38c248;
        case 0x38c24cu: goto label_38c24c;
        case 0x38c250u: goto label_38c250;
        case 0x38c254u: goto label_38c254;
        case 0x38c258u: goto label_38c258;
        case 0x38c25cu: goto label_38c25c;
        case 0x38c260u: goto label_38c260;
        case 0x38c264u: goto label_38c264;
        case 0x38c268u: goto label_38c268;
        case 0x38c26cu: goto label_38c26c;
        case 0x38c270u: goto label_38c270;
        case 0x38c274u: goto label_38c274;
        case 0x38c278u: goto label_38c278;
        case 0x38c27cu: goto label_38c27c;
        case 0x38c280u: goto label_38c280;
        case 0x38c284u: goto label_38c284;
        case 0x38c288u: goto label_38c288;
        case 0x38c28cu: goto label_38c28c;
        case 0x38c290u: goto label_38c290;
        case 0x38c294u: goto label_38c294;
        case 0x38c298u: goto label_38c298;
        case 0x38c29cu: goto label_38c29c;
        case 0x38c2a0u: goto label_38c2a0;
        case 0x38c2a4u: goto label_38c2a4;
        case 0x38c2a8u: goto label_38c2a8;
        case 0x38c2acu: goto label_38c2ac;
        case 0x38c2b0u: goto label_38c2b0;
        case 0x38c2b4u: goto label_38c2b4;
        case 0x38c2b8u: goto label_38c2b8;
        case 0x38c2bcu: goto label_38c2bc;
        case 0x38c2c0u: goto label_38c2c0;
        case 0x38c2c4u: goto label_38c2c4;
        case 0x38c2c8u: goto label_38c2c8;
        case 0x38c2ccu: goto label_38c2cc;
        case 0x38c2d0u: goto label_38c2d0;
        case 0x38c2d4u: goto label_38c2d4;
        case 0x38c2d8u: goto label_38c2d8;
        case 0x38c2dcu: goto label_38c2dc;
        case 0x38c2e0u: goto label_38c2e0;
        case 0x38c2e4u: goto label_38c2e4;
        case 0x38c2e8u: goto label_38c2e8;
        case 0x38c2ecu: goto label_38c2ec;
        case 0x38c2f0u: goto label_38c2f0;
        case 0x38c2f4u: goto label_38c2f4;
        case 0x38c2f8u: goto label_38c2f8;
        case 0x38c2fcu: goto label_38c2fc;
        case 0x38c300u: goto label_38c300;
        case 0x38c304u: goto label_38c304;
        case 0x38c308u: goto label_38c308;
        case 0x38c30cu: goto label_38c30c;
        case 0x38c310u: goto label_38c310;
        case 0x38c314u: goto label_38c314;
        case 0x38c318u: goto label_38c318;
        case 0x38c31cu: goto label_38c31c;
        case 0x38c320u: goto label_38c320;
        case 0x38c324u: goto label_38c324;
        case 0x38c328u: goto label_38c328;
        case 0x38c32cu: goto label_38c32c;
        case 0x38c330u: goto label_38c330;
        case 0x38c334u: goto label_38c334;
        case 0x38c338u: goto label_38c338;
        case 0x38c33cu: goto label_38c33c;
        case 0x38c340u: goto label_38c340;
        case 0x38c344u: goto label_38c344;
        case 0x38c348u: goto label_38c348;
        case 0x38c34cu: goto label_38c34c;
        case 0x38c350u: goto label_38c350;
        case 0x38c354u: goto label_38c354;
        case 0x38c358u: goto label_38c358;
        case 0x38c35cu: goto label_38c35c;
        case 0x38c360u: goto label_38c360;
        case 0x38c364u: goto label_38c364;
        case 0x38c368u: goto label_38c368;
        case 0x38c36cu: goto label_38c36c;
        case 0x38c370u: goto label_38c370;
        case 0x38c374u: goto label_38c374;
        case 0x38c378u: goto label_38c378;
        case 0x38c37cu: goto label_38c37c;
        case 0x38c380u: goto label_38c380;
        case 0x38c384u: goto label_38c384;
        case 0x38c388u: goto label_38c388;
        case 0x38c38cu: goto label_38c38c;
        case 0x38c390u: goto label_38c390;
        case 0x38c394u: goto label_38c394;
        case 0x38c398u: goto label_38c398;
        case 0x38c39cu: goto label_38c39c;
        case 0x38c3a0u: goto label_38c3a0;
        case 0x38c3a4u: goto label_38c3a4;
        case 0x38c3a8u: goto label_38c3a8;
        case 0x38c3acu: goto label_38c3ac;
        case 0x38c3b0u: goto label_38c3b0;
        case 0x38c3b4u: goto label_38c3b4;
        case 0x38c3b8u: goto label_38c3b8;
        case 0x38c3bcu: goto label_38c3bc;
        case 0x38c3c0u: goto label_38c3c0;
        case 0x38c3c4u: goto label_38c3c4;
        case 0x38c3c8u: goto label_38c3c8;
        case 0x38c3ccu: goto label_38c3cc;
        case 0x38c3d0u: goto label_38c3d0;
        case 0x38c3d4u: goto label_38c3d4;
        case 0x38c3d8u: goto label_38c3d8;
        case 0x38c3dcu: goto label_38c3dc;
        case 0x38c3e0u: goto label_38c3e0;
        case 0x38c3e4u: goto label_38c3e4;
        case 0x38c3e8u: goto label_38c3e8;
        case 0x38c3ecu: goto label_38c3ec;
        case 0x38c3f0u: goto label_38c3f0;
        case 0x38c3f4u: goto label_38c3f4;
        case 0x38c3f8u: goto label_38c3f8;
        case 0x38c3fcu: goto label_38c3fc;
        case 0x38c400u: goto label_38c400;
        case 0x38c404u: goto label_38c404;
        case 0x38c408u: goto label_38c408;
        case 0x38c40cu: goto label_38c40c;
        case 0x38c410u: goto label_38c410;
        case 0x38c414u: goto label_38c414;
        case 0x38c418u: goto label_38c418;
        case 0x38c41cu: goto label_38c41c;
        case 0x38c420u: goto label_38c420;
        case 0x38c424u: goto label_38c424;
        case 0x38c428u: goto label_38c428;
        case 0x38c42cu: goto label_38c42c;
        case 0x38c430u: goto label_38c430;
        case 0x38c434u: goto label_38c434;
        case 0x38c438u: goto label_38c438;
        case 0x38c43cu: goto label_38c43c;
        case 0x38c440u: goto label_38c440;
        case 0x38c444u: goto label_38c444;
        case 0x38c448u: goto label_38c448;
        case 0x38c44cu: goto label_38c44c;
        case 0x38c450u: goto label_38c450;
        case 0x38c454u: goto label_38c454;
        case 0x38c458u: goto label_38c458;
        case 0x38c45cu: goto label_38c45c;
        case 0x38c460u: goto label_38c460;
        case 0x38c464u: goto label_38c464;
        case 0x38c468u: goto label_38c468;
        case 0x38c46cu: goto label_38c46c;
        case 0x38c470u: goto label_38c470;
        case 0x38c474u: goto label_38c474;
        case 0x38c478u: goto label_38c478;
        case 0x38c47cu: goto label_38c47c;
        case 0x38c480u: goto label_38c480;
        case 0x38c484u: goto label_38c484;
        case 0x38c488u: goto label_38c488;
        case 0x38c48cu: goto label_38c48c;
        case 0x38c490u: goto label_38c490;
        case 0x38c494u: goto label_38c494;
        case 0x38c498u: goto label_38c498;
        case 0x38c49cu: goto label_38c49c;
        case 0x38c4a0u: goto label_38c4a0;
        case 0x38c4a4u: goto label_38c4a4;
        case 0x38c4a8u: goto label_38c4a8;
        case 0x38c4acu: goto label_38c4ac;
        case 0x38c4b0u: goto label_38c4b0;
        case 0x38c4b4u: goto label_38c4b4;
        case 0x38c4b8u: goto label_38c4b8;
        case 0x38c4bcu: goto label_38c4bc;
        case 0x38c4c0u: goto label_38c4c0;
        case 0x38c4c4u: goto label_38c4c4;
        case 0x38c4c8u: goto label_38c4c8;
        case 0x38c4ccu: goto label_38c4cc;
        case 0x38c4d0u: goto label_38c4d0;
        case 0x38c4d4u: goto label_38c4d4;
        case 0x38c4d8u: goto label_38c4d8;
        case 0x38c4dcu: goto label_38c4dc;
        case 0x38c4e0u: goto label_38c4e0;
        case 0x38c4e4u: goto label_38c4e4;
        case 0x38c4e8u: goto label_38c4e8;
        case 0x38c4ecu: goto label_38c4ec;
        case 0x38c4f0u: goto label_38c4f0;
        case 0x38c4f4u: goto label_38c4f4;
        case 0x38c4f8u: goto label_38c4f8;
        case 0x38c4fcu: goto label_38c4fc;
        case 0x38c500u: goto label_38c500;
        case 0x38c504u: goto label_38c504;
        case 0x38c508u: goto label_38c508;
        case 0x38c50cu: goto label_38c50c;
        case 0x38c510u: goto label_38c510;
        case 0x38c514u: goto label_38c514;
        case 0x38c518u: goto label_38c518;
        case 0x38c51cu: goto label_38c51c;
        case 0x38c520u: goto label_38c520;
        case 0x38c524u: goto label_38c524;
        case 0x38c528u: goto label_38c528;
        case 0x38c52cu: goto label_38c52c;
        case 0x38c530u: goto label_38c530;
        case 0x38c534u: goto label_38c534;
        case 0x38c538u: goto label_38c538;
        case 0x38c53cu: goto label_38c53c;
        case 0x38c540u: goto label_38c540;
        case 0x38c544u: goto label_38c544;
        case 0x38c548u: goto label_38c548;
        case 0x38c54cu: goto label_38c54c;
        case 0x38c550u: goto label_38c550;
        case 0x38c554u: goto label_38c554;
        case 0x38c558u: goto label_38c558;
        case 0x38c55cu: goto label_38c55c;
        case 0x38c560u: goto label_38c560;
        case 0x38c564u: goto label_38c564;
        case 0x38c568u: goto label_38c568;
        case 0x38c56cu: goto label_38c56c;
        case 0x38c570u: goto label_38c570;
        case 0x38c574u: goto label_38c574;
        case 0x38c578u: goto label_38c578;
        case 0x38c57cu: goto label_38c57c;
        case 0x38c580u: goto label_38c580;
        case 0x38c584u: goto label_38c584;
        case 0x38c588u: goto label_38c588;
        case 0x38c58cu: goto label_38c58c;
        case 0x38c590u: goto label_38c590;
        case 0x38c594u: goto label_38c594;
        case 0x38c598u: goto label_38c598;
        case 0x38c59cu: goto label_38c59c;
        case 0x38c5a0u: goto label_38c5a0;
        case 0x38c5a4u: goto label_38c5a4;
        case 0x38c5a8u: goto label_38c5a8;
        case 0x38c5acu: goto label_38c5ac;
        case 0x38c5b0u: goto label_38c5b0;
        case 0x38c5b4u: goto label_38c5b4;
        case 0x38c5b8u: goto label_38c5b8;
        case 0x38c5bcu: goto label_38c5bc;
        case 0x38c5c0u: goto label_38c5c0;
        case 0x38c5c4u: goto label_38c5c4;
        case 0x38c5c8u: goto label_38c5c8;
        case 0x38c5ccu: goto label_38c5cc;
        case 0x38c5d0u: goto label_38c5d0;
        case 0x38c5d4u: goto label_38c5d4;
        case 0x38c5d8u: goto label_38c5d8;
        case 0x38c5dcu: goto label_38c5dc;
        case 0x38c5e0u: goto label_38c5e0;
        case 0x38c5e4u: goto label_38c5e4;
        case 0x38c5e8u: goto label_38c5e8;
        case 0x38c5ecu: goto label_38c5ec;
        case 0x38c5f0u: goto label_38c5f0;
        case 0x38c5f4u: goto label_38c5f4;
        case 0x38c5f8u: goto label_38c5f8;
        case 0x38c5fcu: goto label_38c5fc;
        case 0x38c600u: goto label_38c600;
        case 0x38c604u: goto label_38c604;
        case 0x38c608u: goto label_38c608;
        case 0x38c60cu: goto label_38c60c;
        case 0x38c610u: goto label_38c610;
        case 0x38c614u: goto label_38c614;
        case 0x38c618u: goto label_38c618;
        case 0x38c61cu: goto label_38c61c;
        case 0x38c620u: goto label_38c620;
        case 0x38c624u: goto label_38c624;
        case 0x38c628u: goto label_38c628;
        case 0x38c62cu: goto label_38c62c;
        case 0x38c630u: goto label_38c630;
        case 0x38c634u: goto label_38c634;
        case 0x38c638u: goto label_38c638;
        case 0x38c63cu: goto label_38c63c;
        case 0x38c640u: goto label_38c640;
        case 0x38c644u: goto label_38c644;
        case 0x38c648u: goto label_38c648;
        case 0x38c64cu: goto label_38c64c;
        case 0x38c650u: goto label_38c650;
        case 0x38c654u: goto label_38c654;
        case 0x38c658u: goto label_38c658;
        case 0x38c65cu: goto label_38c65c;
        case 0x38c660u: goto label_38c660;
        case 0x38c664u: goto label_38c664;
        case 0x38c668u: goto label_38c668;
        case 0x38c66cu: goto label_38c66c;
        case 0x38c670u: goto label_38c670;
        case 0x38c674u: goto label_38c674;
        case 0x38c678u: goto label_38c678;
        case 0x38c67cu: goto label_38c67c;
        case 0x38c680u: goto label_38c680;
        case 0x38c684u: goto label_38c684;
        case 0x38c688u: goto label_38c688;
        case 0x38c68cu: goto label_38c68c;
        case 0x38c690u: goto label_38c690;
        case 0x38c694u: goto label_38c694;
        case 0x38c698u: goto label_38c698;
        case 0x38c69cu: goto label_38c69c;
        case 0x38c6a0u: goto label_38c6a0;
        case 0x38c6a4u: goto label_38c6a4;
        case 0x38c6a8u: goto label_38c6a8;
        case 0x38c6acu: goto label_38c6ac;
        case 0x38c6b0u: goto label_38c6b0;
        case 0x38c6b4u: goto label_38c6b4;
        case 0x38c6b8u: goto label_38c6b8;
        case 0x38c6bcu: goto label_38c6bc;
        case 0x38c6c0u: goto label_38c6c0;
        case 0x38c6c4u: goto label_38c6c4;
        case 0x38c6c8u: goto label_38c6c8;
        case 0x38c6ccu: goto label_38c6cc;
        case 0x38c6d0u: goto label_38c6d0;
        case 0x38c6d4u: goto label_38c6d4;
        case 0x38c6d8u: goto label_38c6d8;
        case 0x38c6dcu: goto label_38c6dc;
        case 0x38c6e0u: goto label_38c6e0;
        case 0x38c6e4u: goto label_38c6e4;
        case 0x38c6e8u: goto label_38c6e8;
        case 0x38c6ecu: goto label_38c6ec;
        case 0x38c6f0u: goto label_38c6f0;
        case 0x38c6f4u: goto label_38c6f4;
        case 0x38c6f8u: goto label_38c6f8;
        case 0x38c6fcu: goto label_38c6fc;
        case 0x38c700u: goto label_38c700;
        case 0x38c704u: goto label_38c704;
        case 0x38c708u: goto label_38c708;
        case 0x38c70cu: goto label_38c70c;
        case 0x38c710u: goto label_38c710;
        case 0x38c714u: goto label_38c714;
        case 0x38c718u: goto label_38c718;
        case 0x38c71cu: goto label_38c71c;
        case 0x38c720u: goto label_38c720;
        case 0x38c724u: goto label_38c724;
        case 0x38c728u: goto label_38c728;
        case 0x38c72cu: goto label_38c72c;
        case 0x38c730u: goto label_38c730;
        case 0x38c734u: goto label_38c734;
        case 0x38c738u: goto label_38c738;
        case 0x38c73cu: goto label_38c73c;
        case 0x38c740u: goto label_38c740;
        case 0x38c744u: goto label_38c744;
        case 0x38c748u: goto label_38c748;
        case 0x38c74cu: goto label_38c74c;
        case 0x38c750u: goto label_38c750;
        case 0x38c754u: goto label_38c754;
        case 0x38c758u: goto label_38c758;
        case 0x38c75cu: goto label_38c75c;
        case 0x38c760u: goto label_38c760;
        case 0x38c764u: goto label_38c764;
        case 0x38c768u: goto label_38c768;
        case 0x38c76cu: goto label_38c76c;
        case 0x38c770u: goto label_38c770;
        case 0x38c774u: goto label_38c774;
        case 0x38c778u: goto label_38c778;
        case 0x38c77cu: goto label_38c77c;
        case 0x38c780u: goto label_38c780;
        case 0x38c784u: goto label_38c784;
        case 0x38c788u: goto label_38c788;
        case 0x38c78cu: goto label_38c78c;
        case 0x38c790u: goto label_38c790;
        case 0x38c794u: goto label_38c794;
        case 0x38c798u: goto label_38c798;
        case 0x38c79cu: goto label_38c79c;
        case 0x38c7a0u: goto label_38c7a0;
        case 0x38c7a4u: goto label_38c7a4;
        case 0x38c7a8u: goto label_38c7a8;
        case 0x38c7acu: goto label_38c7ac;
        case 0x38c7b0u: goto label_38c7b0;
        case 0x38c7b4u: goto label_38c7b4;
        case 0x38c7b8u: goto label_38c7b8;
        case 0x38c7bcu: goto label_38c7bc;
        case 0x38c7c0u: goto label_38c7c0;
        case 0x38c7c4u: goto label_38c7c4;
        case 0x38c7c8u: goto label_38c7c8;
        case 0x38c7ccu: goto label_38c7cc;
        case 0x38c7d0u: goto label_38c7d0;
        case 0x38c7d4u: goto label_38c7d4;
        case 0x38c7d8u: goto label_38c7d8;
        case 0x38c7dcu: goto label_38c7dc;
        case 0x38c7e0u: goto label_38c7e0;
        case 0x38c7e4u: goto label_38c7e4;
        case 0x38c7e8u: goto label_38c7e8;
        case 0x38c7ecu: goto label_38c7ec;
        case 0x38c7f0u: goto label_38c7f0;
        case 0x38c7f4u: goto label_38c7f4;
        case 0x38c7f8u: goto label_38c7f8;
        case 0x38c7fcu: goto label_38c7fc;
        case 0x38c800u: goto label_38c800;
        case 0x38c804u: goto label_38c804;
        case 0x38c808u: goto label_38c808;
        case 0x38c80cu: goto label_38c80c;
        case 0x38c810u: goto label_38c810;
        case 0x38c814u: goto label_38c814;
        case 0x38c818u: goto label_38c818;
        case 0x38c81cu: goto label_38c81c;
        case 0x38c820u: goto label_38c820;
        case 0x38c824u: goto label_38c824;
        case 0x38c828u: goto label_38c828;
        case 0x38c82cu: goto label_38c82c;
        case 0x38c830u: goto label_38c830;
        case 0x38c834u: goto label_38c834;
        case 0x38c838u: goto label_38c838;
        case 0x38c83cu: goto label_38c83c;
        case 0x38c840u: goto label_38c840;
        case 0x38c844u: goto label_38c844;
        case 0x38c848u: goto label_38c848;
        case 0x38c84cu: goto label_38c84c;
        case 0x38c850u: goto label_38c850;
        case 0x38c854u: goto label_38c854;
        case 0x38c858u: goto label_38c858;
        case 0x38c85cu: goto label_38c85c;
        case 0x38c860u: goto label_38c860;
        case 0x38c864u: goto label_38c864;
        case 0x38c868u: goto label_38c868;
        case 0x38c86cu: goto label_38c86c;
        case 0x38c870u: goto label_38c870;
        case 0x38c874u: goto label_38c874;
        case 0x38c878u: goto label_38c878;
        case 0x38c87cu: goto label_38c87c;
        case 0x38c880u: goto label_38c880;
        case 0x38c884u: goto label_38c884;
        case 0x38c888u: goto label_38c888;
        case 0x38c88cu: goto label_38c88c;
        case 0x38c890u: goto label_38c890;
        case 0x38c894u: goto label_38c894;
        case 0x38c898u: goto label_38c898;
        case 0x38c89cu: goto label_38c89c;
        case 0x38c8a0u: goto label_38c8a0;
        case 0x38c8a4u: goto label_38c8a4;
        case 0x38c8a8u: goto label_38c8a8;
        case 0x38c8acu: goto label_38c8ac;
        case 0x38c8b0u: goto label_38c8b0;
        case 0x38c8b4u: goto label_38c8b4;
        case 0x38c8b8u: goto label_38c8b8;
        case 0x38c8bcu: goto label_38c8bc;
        case 0x38c8c0u: goto label_38c8c0;
        case 0x38c8c4u: goto label_38c8c4;
        case 0x38c8c8u: goto label_38c8c8;
        case 0x38c8ccu: goto label_38c8cc;
        case 0x38c8d0u: goto label_38c8d0;
        case 0x38c8d4u: goto label_38c8d4;
        case 0x38c8d8u: goto label_38c8d8;
        case 0x38c8dcu: goto label_38c8dc;
        case 0x38c8e0u: goto label_38c8e0;
        case 0x38c8e4u: goto label_38c8e4;
        case 0x38c8e8u: goto label_38c8e8;
        case 0x38c8ecu: goto label_38c8ec;
        case 0x38c8f0u: goto label_38c8f0;
        case 0x38c8f4u: goto label_38c8f4;
        case 0x38c8f8u: goto label_38c8f8;
        case 0x38c8fcu: goto label_38c8fc;
        case 0x38c900u: goto label_38c900;
        case 0x38c904u: goto label_38c904;
        case 0x38c908u: goto label_38c908;
        case 0x38c90cu: goto label_38c90c;
        case 0x38c910u: goto label_38c910;
        case 0x38c914u: goto label_38c914;
        case 0x38c918u: goto label_38c918;
        case 0x38c91cu: goto label_38c91c;
        case 0x38c920u: goto label_38c920;
        case 0x38c924u: goto label_38c924;
        case 0x38c928u: goto label_38c928;
        case 0x38c92cu: goto label_38c92c;
        case 0x38c930u: goto label_38c930;
        case 0x38c934u: goto label_38c934;
        case 0x38c938u: goto label_38c938;
        case 0x38c93cu: goto label_38c93c;
        case 0x38c940u: goto label_38c940;
        case 0x38c944u: goto label_38c944;
        case 0x38c948u: goto label_38c948;
        case 0x38c94cu: goto label_38c94c;
        case 0x38c950u: goto label_38c950;
        case 0x38c954u: goto label_38c954;
        case 0x38c958u: goto label_38c958;
        case 0x38c95cu: goto label_38c95c;
        case 0x38c960u: goto label_38c960;
        case 0x38c964u: goto label_38c964;
        case 0x38c968u: goto label_38c968;
        case 0x38c96cu: goto label_38c96c;
        case 0x38c970u: goto label_38c970;
        case 0x38c974u: goto label_38c974;
        case 0x38c978u: goto label_38c978;
        case 0x38c97cu: goto label_38c97c;
        case 0x38c980u: goto label_38c980;
        case 0x38c984u: goto label_38c984;
        case 0x38c988u: goto label_38c988;
        case 0x38c98cu: goto label_38c98c;
        case 0x38c990u: goto label_38c990;
        case 0x38c994u: goto label_38c994;
        case 0x38c998u: goto label_38c998;
        case 0x38c99cu: goto label_38c99c;
        case 0x38c9a0u: goto label_38c9a0;
        case 0x38c9a4u: goto label_38c9a4;
        case 0x38c9a8u: goto label_38c9a8;
        case 0x38c9acu: goto label_38c9ac;
        case 0x38c9b0u: goto label_38c9b0;
        case 0x38c9b4u: goto label_38c9b4;
        case 0x38c9b8u: goto label_38c9b8;
        case 0x38c9bcu: goto label_38c9bc;
        case 0x38c9c0u: goto label_38c9c0;
        case 0x38c9c4u: goto label_38c9c4;
        case 0x38c9c8u: goto label_38c9c8;
        case 0x38c9ccu: goto label_38c9cc;
        case 0x38c9d0u: goto label_38c9d0;
        case 0x38c9d4u: goto label_38c9d4;
        case 0x38c9d8u: goto label_38c9d8;
        case 0x38c9dcu: goto label_38c9dc;
        case 0x38c9e0u: goto label_38c9e0;
        case 0x38c9e4u: goto label_38c9e4;
        case 0x38c9e8u: goto label_38c9e8;
        case 0x38c9ecu: goto label_38c9ec;
        case 0x38c9f0u: goto label_38c9f0;
        case 0x38c9f4u: goto label_38c9f4;
        case 0x38c9f8u: goto label_38c9f8;
        case 0x38c9fcu: goto label_38c9fc;
        case 0x38ca00u: goto label_38ca00;
        case 0x38ca04u: goto label_38ca04;
        case 0x38ca08u: goto label_38ca08;
        case 0x38ca0cu: goto label_38ca0c;
        case 0x38ca10u: goto label_38ca10;
        case 0x38ca14u: goto label_38ca14;
        case 0x38ca18u: goto label_38ca18;
        case 0x38ca1cu: goto label_38ca1c;
        case 0x38ca20u: goto label_38ca20;
        case 0x38ca24u: goto label_38ca24;
        case 0x38ca28u: goto label_38ca28;
        case 0x38ca2cu: goto label_38ca2c;
        case 0x38ca30u: goto label_38ca30;
        case 0x38ca34u: goto label_38ca34;
        case 0x38ca38u: goto label_38ca38;
        case 0x38ca3cu: goto label_38ca3c;
        case 0x38ca40u: goto label_38ca40;
        case 0x38ca44u: goto label_38ca44;
        case 0x38ca48u: goto label_38ca48;
        case 0x38ca4cu: goto label_38ca4c;
        case 0x38ca50u: goto label_38ca50;
        case 0x38ca54u: goto label_38ca54;
        case 0x38ca58u: goto label_38ca58;
        case 0x38ca5cu: goto label_38ca5c;
        case 0x38ca60u: goto label_38ca60;
        case 0x38ca64u: goto label_38ca64;
        case 0x38ca68u: goto label_38ca68;
        case 0x38ca6cu: goto label_38ca6c;
        case 0x38ca70u: goto label_38ca70;
        case 0x38ca74u: goto label_38ca74;
        case 0x38ca78u: goto label_38ca78;
        case 0x38ca7cu: goto label_38ca7c;
        case 0x38ca80u: goto label_38ca80;
        case 0x38ca84u: goto label_38ca84;
        case 0x38ca88u: goto label_38ca88;
        case 0x38ca8cu: goto label_38ca8c;
        case 0x38ca90u: goto label_38ca90;
        case 0x38ca94u: goto label_38ca94;
        case 0x38ca98u: goto label_38ca98;
        case 0x38ca9cu: goto label_38ca9c;
        case 0x38caa0u: goto label_38caa0;
        case 0x38caa4u: goto label_38caa4;
        case 0x38caa8u: goto label_38caa8;
        case 0x38caacu: goto label_38caac;
        case 0x38cab0u: goto label_38cab0;
        case 0x38cab4u: goto label_38cab4;
        case 0x38cab8u: goto label_38cab8;
        case 0x38cabcu: goto label_38cabc;
        case 0x38cac0u: goto label_38cac0;
        case 0x38cac4u: goto label_38cac4;
        case 0x38cac8u: goto label_38cac8;
        case 0x38caccu: goto label_38cacc;
        case 0x38cad0u: goto label_38cad0;
        case 0x38cad4u: goto label_38cad4;
        case 0x38cad8u: goto label_38cad8;
        case 0x38cadcu: goto label_38cadc;
        case 0x38cae0u: goto label_38cae0;
        case 0x38cae4u: goto label_38cae4;
        case 0x38cae8u: goto label_38cae8;
        case 0x38caecu: goto label_38caec;
        case 0x38caf0u: goto label_38caf0;
        case 0x38caf4u: goto label_38caf4;
        case 0x38caf8u: goto label_38caf8;
        case 0x38cafcu: goto label_38cafc;
        case 0x38cb00u: goto label_38cb00;
        case 0x38cb04u: goto label_38cb04;
        case 0x38cb08u: goto label_38cb08;
        case 0x38cb0cu: goto label_38cb0c;
        case 0x38cb10u: goto label_38cb10;
        case 0x38cb14u: goto label_38cb14;
        case 0x38cb18u: goto label_38cb18;
        case 0x38cb1cu: goto label_38cb1c;
        case 0x38cb20u: goto label_38cb20;
        case 0x38cb24u: goto label_38cb24;
        case 0x38cb28u: goto label_38cb28;
        case 0x38cb2cu: goto label_38cb2c;
        case 0x38cb30u: goto label_38cb30;
        case 0x38cb34u: goto label_38cb34;
        case 0x38cb38u: goto label_38cb38;
        case 0x38cb3cu: goto label_38cb3c;
        case 0x38cb40u: goto label_38cb40;
        case 0x38cb44u: goto label_38cb44;
        case 0x38cb48u: goto label_38cb48;
        case 0x38cb4cu: goto label_38cb4c;
        case 0x38cb50u: goto label_38cb50;
        case 0x38cb54u: goto label_38cb54;
        case 0x38cb58u: goto label_38cb58;
        case 0x38cb5cu: goto label_38cb5c;
        default: break;
    }

    ctx->pc = 0x38c0f8u;

label_38c0f8:
    // 0x38c0f8: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x38c0f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
label_38c0fc:
    // 0x38c0fc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x38c0fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_38c100:
    // 0x38c100: 0x7fb300c0  sq          $s3, 0xC0($sp)
    ctx->pc = 0x38c100u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 19));
label_38c104:
    // 0x38c104: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x38c104u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_38c108:
    // 0x38c108: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x38c108u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_38c10c:
    // 0x38c10c: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x38c10cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
label_38c110:
    // 0x38c110: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x38c110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
label_38c114:
    // 0x38c114: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x38c114u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
label_38c118:
    // 0x38c118: 0x7fb400b0  sq          $s4, 0xB0($sp)
    ctx->pc = 0x38c118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 20));
label_38c11c:
    // 0x38c11c: 0x7fb500a0  sq          $s5, 0xA0($sp)
    ctx->pc = 0x38c11cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 21));
label_38c120:
    // 0x38c120: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x38c120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
label_38c124:
    // 0x38c124: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x38c124u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_38c128:
    // 0x38c128: 0x7fbe0070  sq          $fp, 0x70($sp)
    ctx->pc = 0x38c128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 30));
label_38c12c:
    // 0x38c12c: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x38c12cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_38c130:
    // 0x38c130: 0xc103322  jal         func_40CC88
label_38c134:
    if (ctx->pc == 0x38C134u) {
        ctx->pc = 0x38C134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C130u;
        // 0x38c134: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C138u;
        goto label_38c138;
    }
    ctx->pc = 0x38C130u;
    SET_GPR_U32(ctx, 31, 0x38C138u);
    ctx->pc = 0x38C134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38C130u;
    // 0x38c134: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40CC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40CC88u, 0x38C130u, 0x38C138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C138u;
label_38c138:
    // 0x38c138: 0x104001fb  beqz        $v0, . + 4 + (0x1FB << 2)
label_38c13c:
    if (ctx->pc == 0x38C13Cu) {
        ctx->pc = 0x38C13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C138u;
        // 0x38c13c: 0x8fa30050  lw          $v1, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C140u;
        goto label_38c140;
    }
    ctx->pc = 0x38C138u;
    {
        const bool branch_taken_0x38c138 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38C13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C138u;
        // 0x38c13c: 0x8fa30050  lw          $v1, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c138) {
            ctx->pc = 0x38C928u;
            goto label_38c928;
        }
    }
    ctx->pc = 0x38C140u;
label_38c140:
    // 0x38c140: 0x3c02fffc  lui         $v0, 0xFFFC
    ctx->pc = 0x38c140u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65532 << 16));
label_38c144:
    // 0x38c144: 0x3442b000  ori         $v0, $v0, 0xB000
    ctx->pc = 0x38c144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45056);
label_38c148:
    // 0x38c148: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x38c148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_38c14c:
    // 0x38c14c: 0x2c632003  sltiu       $v1, $v1, 0x2003
    ctx->pc = 0x38c14cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8195) ? 1 : 0);
label_38c150:
    // 0x38c150: 0x54600009  bnel        $v1, $zero, . + 4 + (0x9 << 2)
label_38c154:
    if (ctx->pc == 0x38C154u) {
        ctx->pc = 0x38C154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C150u;
        // 0x38c154: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C158u;
        goto label_38c158;
    }
    ctx->pc = 0x38C150u;
    {
        const bool branch_taken_0x38c150 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x38c150) {
            ctx->pc = 0x38C154u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38C150u;
            // 0x38c154: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38C178u;
            goto label_38c178;
        }
    }
    ctx->pc = 0x38C158u;
label_38c158:
    // 0x38c158: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x38c158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_38c15c:
    // 0x38c15c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x38c15cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_38c160:
    // 0x38c160: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x38c160u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_38c164:
    // 0x38c164: 0xc1035f6  jal         func_40D7D8
label_38c168:
    if (ctx->pc == 0x38C168u) {
        ctx->pc = 0x38C168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C164u;
        // 0x38c168: 0x34840004  ori         $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C16Cu;
        goto label_38c16c;
    }
    ctx->pc = 0x38C164u;
    SET_GPR_U32(ctx, 31, 0x38C16Cu);
    ctx->pc = 0x38C168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38C164u;
    // 0x38c168: 0x34840004  ori         $a0, $a0, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x38C164u, 0x38C16Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C16Cu;
label_38c16c:
    // 0x38c16c: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x38c16cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_38c170:
    // 0x38c170: 0x100001eb  b           . + 4 + (0x1EB << 2)
label_38c174:
    if (ctx->pc == 0x38C174u) {
        ctx->pc = 0x38C174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C170u;
        // 0x38c174: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C178u;
        goto label_38c178;
    }
    ctx->pc = 0x38C170u;
    {
        const bool branch_taken_0x38c170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38C174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C170u;
        // 0x38c174: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c170) {
            ctx->pc = 0x38C920u;
            goto label_38c920;
        }
    }
    ctx->pc = 0x38C178u;
label_38c178:
    // 0x38c178: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x38c178u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_38c17c:
    // 0x38c17c: 0xc10480a  jal         func_412028
label_38c180:
    if (ctx->pc == 0x38C180u) {
        ctx->pc = 0x38C180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C17Cu;
        // 0x38c180: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C184u;
        goto label_38c184;
    }
    ctx->pc = 0x38C17Cu;
    SET_GPR_U32(ctx, 31, 0x38C184u);
    ctx->pc = 0x38C180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38C17Cu;
    // 0x38c180: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412028u, 0x38C17Cu, 0x38C184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C184u;
label_38c184:
    // 0x38c184: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x38c184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_38c188:
    // 0x38c188: 0x14430269  bne         $v0, $v1, . + 4 + (0x269 << 2)
label_38c18c:
    if (ctx->pc == 0x38C18Cu) {
        ctx->pc = 0x38C18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C188u;
        // 0x38c18c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C190u;
        goto label_38c190;
    }
    ctx->pc = 0x38C188u;
    {
        const bool branch_taken_0x38c188 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x38C18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C188u;
        // 0x38c18c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c188) {
            ctx->pc = 0x38CB30u;
            goto label_38cb30;
        }
    }
    ctx->pc = 0x38C190u;
label_38c190:
    // 0x38c190: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x38c190u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_38c194:
    // 0x38c194: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x38c194u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_38c198:
    // 0x38c198: 0xc0e2dbc  jal         func_38B6F0
label_38c19c:
    if (ctx->pc == 0x38C19Cu) {
        ctx->pc = 0x38C19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C198u;
        // 0x38c19c: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C1A0u;
        goto label_38c1a0;
    }
    ctx->pc = 0x38C198u;
    SET_GPR_U32(ctx, 31, 0x38C1A0u);
    ctx->pc = 0x38C19Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38C198u;
    // 0x38c19c: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38B6F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38B6F0u, 0x38C198u, 0x38C1A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C1A0u;
label_38c1a0:
    // 0x38c1a0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x38c1a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_38c1a4:
    // 0x38c1a4: 0x122001e0  beqz        $s1, . + 4 + (0x1E0 << 2)
label_38c1a8:
    if (ctx->pc == 0x38C1A8u) {
        ctx->pc = 0x38C1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C1A4u;
        // 0x38c1a8: 0x8fa5000c  lw          $a1, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C1ACu;
        goto label_38c1ac;
    }
    ctx->pc = 0x38C1A4u;
    {
        const bool branch_taken_0x38c1a4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x38C1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C1A4u;
        // 0x38c1a8: 0x8fa5000c  lw          $a1, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c1a4) {
            ctx->pc = 0x38C928u;
            goto label_38c928;
        }
    }
    ctx->pc = 0x38C1ACu;
label_38c1ac:
    // 0x38c1ac: 0x28a20002  slti        $v0, $a1, 0x2
    ctx->pc = 0x38c1acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
label_38c1b0:
    // 0x38c1b0: 0x5440002c  bnel        $v0, $zero, . + 4 + (0x2C << 2)
label_38c1b4:
    if (ctx->pc == 0x38C1B4u) {
        ctx->pc = 0x38C1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C1B0u;
        // 0x38c1b4: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C1B8u;
        goto label_38c1b8;
    }
    ctx->pc = 0x38C1B0u;
    {
        const bool branch_taken_0x38c1b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x38c1b0) {
            ctx->pc = 0x38C1B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38C1B0u;
            // 0x38c1b4: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38C264u;
            goto label_38c264;
        }
    }
    ctx->pc = 0x38C1B8u;
label_38c1b8:
    // 0x38c1b8: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x38c1b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_38c1bc:
    // 0x38c1bc: 0xc0e2b06  jal         func_38AC18
label_38c1c0:
    if (ctx->pc == 0x38C1C0u) {
        ctx->pc = 0x38C1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C1BCu;
        // 0x38c1c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C1C4u;
        goto label_38c1c4;
    }
    ctx->pc = 0x38C1BCu;
    SET_GPR_U32(ctx, 31, 0x38C1C4u);
    ctx->pc = 0x38C1C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38C1BCu;
    // 0x38c1c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38AC18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38AC18u, 0x38C1BCu, 0x38C1C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C1C4u;
label_38c1c4:
    // 0x38c1c4: 0x4430027  bgezl       $v0, . + 4 + (0x27 << 2)
label_38c1c8:
    if (ctx->pc == 0x38C1C8u) {
        ctx->pc = 0x38C1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C1C4u;
        // 0x38c1c8: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C1CCu;
        goto label_38c1cc;
    }
    ctx->pc = 0x38C1C4u;
    {
        const bool branch_taken_0x38c1c4 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x38c1c4) {
            ctx->pc = 0x38C1C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38C1C4u;
            // 0x38c1c8: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38C264u;
            goto label_38c264;
        }
    }
    ctx->pc = 0x38C1CCu;
label_38c1cc:
    // 0x38c1cc: 0x8622000e  lh          $v0, 0xE($s1)
    ctx->pc = 0x38c1ccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
label_38c1d0:
    // 0x38c1d0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x38c1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_38c1d4:
    // 0x38c1d4: 0x1c400020  bgtz        $v0, . + 4 + (0x20 << 2)
label_38c1d8:
    if (ctx->pc == 0x38C1D8u) {
        ctx->pc = 0x38C1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C1D4u;
        // 0x38c1d8: 0x9623000e  lhu         $v1, 0xE($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C1DCu;
        goto label_38c1dc;
    }
    ctx->pc = 0x38C1D4u;
    {
        const bool branch_taken_0x38c1d4 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x38C1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C1D4u;
        // 0x38c1d8: 0x9623000e  lhu         $v1, 0xE($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c1d4) {
            ctx->pc = 0x38C258u;
            goto label_38c258;
        }
    }
    ctx->pc = 0x38C1DCu;
label_38c1dc:
    // 0x38c1dc: 0x8e240058  lw          $a0, 0x58($s1)
    ctx->pc = 0x38c1dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_38c1e0:
    // 0x38c1e0: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_38c1e4:
    if (ctx->pc == 0x38C1E4u) {
        ctx->pc = 0x38C1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C1E0u;
        // 0x38c1e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C1E8u;
        goto label_38c1e8;
    }
    ctx->pc = 0x38C1E0u;
    {
        const bool branch_taken_0x38c1e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x38c1e0) {
            ctx->pc = 0x38C1E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38C1E0u;
            // 0x38c1e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38C1F4u;
            goto label_38c1f4;
        }
    }
    ctx->pc = 0x38C1E8u;
label_38c1e8:
    // 0x38c1e8: 0xc104702  jal         func_411C08
label_38c1ec:
    if (ctx->pc == 0x38C1ECu) {
        ctx->pc = 0x38C1F0u;
        goto label_38c1f0;
    }
    ctx->pc = 0x38C1E8u;
    SET_GPR_U32(ctx, 31, 0x38C1F0u);
    ctx->pc = 0x411C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x411C08u, 0x38C1E8u, 0x38C1F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C1F0u;
label_38c1f0:
    // 0x38c1f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x38c1f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_38c1f4:
    // 0x38c1f4: 0xc0e33ee  jal         func_38CFB8
label_38c1f8:
    if (ctx->pc == 0x38C1F8u) {
        ctx->pc = 0x38C1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C1F4u;
        // 0x38c1f8: 0x24050fff  addiu       $a1, $zero, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C1FCu;
        goto label_38c1fc;
    }
    ctx->pc = 0x38C1F4u;
    SET_GPR_U32(ctx, 31, 0x38C1FCu);
    ctx->pc = 0x38C1F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38C1F4u;
    // 0x38c1f8: 0x24050fff  addiu       $a1, $zero, 0xFFF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CFB8u, 0x38C1F4u, 0x38C1FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C1FCu;
label_38c1fc:
    // 0x38c1fc: 0x3c130062  lui         $s3, 0x62
    ctx->pc = 0x38c1fcu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)98 << 16));
label_38c200:
    // 0x38c200: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x38c200u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
label_38c204:
    // 0x38c204: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x38c204u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_38c208:
    // 0x38c208: 0xc104ca6  jal         func_413298
label_38c20c:
    if (ctx->pc == 0x38C20Cu) {
        ctx->pc = 0x38C20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C208u;
        // 0x38c20c: 0x2484add0  addiu       $a0, $a0, -0x5230 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C210u;
        goto label_38c210;
    }
    ctx->pc = 0x38C208u;
    SET_GPR_U32(ctx, 31, 0x38C210u);
    ctx->pc = 0x38C20Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38C208u;
    // 0x38c20c: 0x2484add0  addiu       $a0, $a0, -0x5230 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x413298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413298u, 0x38C208u, 0x38C210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C210u;
label_38c210:
    // 0x38c210: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x38c210u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_38c214:
    // 0x38c214: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_38c218:
    if (ctx->pc == 0x38C218u) {
        ctx->pc = 0x38C218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C214u;
        // 0x38c218: 0x2662e880  addiu       $v0, $s3, -0x1780 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294961280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C21Cu;
        goto label_38c21c;
    }
    ctx->pc = 0x38C214u;
    {
        const bool branch_taken_0x38c214 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x38C218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C214u;
        // 0x38c218: 0x2662e880  addiu       $v0, $s3, -0x1780 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294961280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c214) {
            ctx->pc = 0x38C22Cu;
            goto label_38c22c;
        }
    }
    ctx->pc = 0x38C21Cu;
label_38c21c:
    // 0x38c21c: 0x8c43010c  lw          $v1, 0x10C($v0)
    ctx->pc = 0x38c21cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 268)));
label_38c220:
    // 0x38c220: 0x60f809  jalr        $v1
label_38c224:
    if (ctx->pc == 0x38C224u) {
        ctx->pc = 0x38C228u;
        goto label_38c228;
    }
    ctx->pc = 0x38C220u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x38C228u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38C220u, 0x38C228u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38C228u;
label_38c228:
    // 0x38c228: 0xae20005c  sw          $zero, 0x5C($s1)
    ctx->pc = 0x38c228u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 0));
label_38c22c:
    // 0x38c22c: 0xc0e3da0  jal         func_38F680
label_38c230:
    if (ctx->pc == 0x38C230u) {
        ctx->pc = 0x38C230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C22Cu;
        // 0x38c230: 0x26240020  addiu       $a0, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C234u;
        goto label_38c234;
    }
    ctx->pc = 0x38C22Cu;
    SET_GPR_U32(ctx, 31, 0x38C234u);
    ctx->pc = 0x38C230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38C22Cu;
    // 0x38c230: 0x26240020  addiu       $a0, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F680u, 0x38C22Cu, 0x38C234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C234u;
label_38c234:
    // 0x38c234: 0x9623000e  lhu         $v1, 0xE($s1)
    ctx->pc = 0x38c234u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
label_38c238:
    // 0x38c238: 0x2662e880  addiu       $v0, $s3, -0x1780
    ctx->pc = 0x38c238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294961280));
label_38c23c:
    // 0x38c23c: 0x8c45010c  lw          $a1, 0x10C($v0)
    ctx->pc = 0x38c23cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 268)));
label_38c240:
    // 0x38c240: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x38c240u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_38c244:
    // 0x38c244: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x38c244u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_38c248:
    // 0x38c248: 0xa0f809  jalr        $a1
label_38c24c:
    if (ctx->pc == 0x38C24Cu) {
        ctx->pc = 0x38C24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C248u;
        // 0x38c24c: 0xa623000e  sh          $v1, 0xE($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C250u;
        goto label_38c250;
    }
    ctx->pc = 0x38C248u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x38C250u);
        ctx->pc = 0x38C24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C248u;
        // 0x38c24c: 0xa623000e  sh          $v1, 0xE($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38C248u, 0x38C250u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38C250u;
label_38c250:
    // 0x38c250: 0x10000237  b           . + 4 + (0x237 << 2)
label_38c254:
    if (ctx->pc == 0x38C254u) {
        ctx->pc = 0x38C254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C250u;
        // 0x38c254: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C258u;
        goto label_38c258;
    }
    ctx->pc = 0x38C250u;
    {
        const bool branch_taken_0x38c250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38C254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C250u;
        // 0x38c254: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c250) {
            ctx->pc = 0x38CB30u;
            goto label_38cb30;
        }
    }
    ctx->pc = 0x38C258u;
label_38c258:
    // 0x38c258: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x38c258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_38c25c:
    // 0x38c25c: 0x100001b2  b           . + 4 + (0x1B2 << 2)
label_38c260:
    if (ctx->pc == 0x38C260u) {
        ctx->pc = 0x38C260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C25Cu;
        // 0x38c260: 0xa622000e  sh          $v0, 0xE($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C264u;
        goto label_38c264;
    }
    ctx->pc = 0x38C25Cu;
    {
        const bool branch_taken_0x38c25c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38C260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C25Cu;
        // 0x38c260: 0xa622000e  sh          $v0, 0xE($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c25c) {
            ctx->pc = 0x38C928u;
            goto label_38c928;
        }
    }
    ctx->pc = 0x38C264u;
label_38c264:
    // 0x38c264: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x38c264u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
label_38c268:
    // 0x38c268: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x38c268u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_38c26c:
    // 0x38c26c: 0x544000ab  bnel        $v0, $zero, . + 4 + (0xAB << 2)
label_38c270:
    if (ctx->pc == 0x38C270u) {
        ctx->pc = 0x38C270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C26Cu;
        // 0x38c270: 0x8e220018  lw          $v0, 0x18($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C274u;
        goto label_38c274;
    }
    ctx->pc = 0x38C26Cu;
    {
        const bool branch_taken_0x38c26c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x38c26c) {
            ctx->pc = 0x38C270u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38C26Cu;
            // 0x38c270: 0x8e220018  lw          $v0, 0x18($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38C51Cu;
            goto label_38c51c;
        }
    }
    ctx->pc = 0x38C274u;
label_38c274:
    // 0x38c274: 0x8e300014  lw          $s0, 0x14($s1)
    ctx->pc = 0x38c274u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_38c278:
    // 0x38c278: 0x120000a7  beqz        $s0, . + 4 + (0xA7 << 2)
label_38c27c:
    if (ctx->pc == 0x38C27Cu) {
        ctx->pc = 0x38C27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C278u;
        // 0x38c27c: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C280u;
        goto label_38c280;
    }
    ctx->pc = 0x38C278u;
    {
        const bool branch_taken_0x38c278 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x38C27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C278u;
        // 0x38c27c: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c278) {
            ctx->pc = 0x38C518u;
            goto label_38c518;
        }
    }
    ctx->pc = 0x38C280u;
label_38c280:
    // 0x38c280: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x38c280u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_38c284:
    // 0x38c284: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
label_38c288:
    if (ctx->pc == 0x38C288u) {
        ctx->pc = 0x38C288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C284u;
        // 0x38c288: 0x108080  sll         $s0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C28Cu;
        goto label_38c28c;
    }
    ctx->pc = 0x38C284u;
    {
        const bool branch_taken_0x38c284 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38C288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C284u;
        // 0x38c288: 0x108080  sll         $s0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c284) {
            ctx->pc = 0x38C33Cu;
            goto label_38c33c;
        }
    }
    ctx->pc = 0x38C28Cu;
label_38c28c:
    // 0x38c28c: 0x8e250030  lw          $a1, 0x30($s1)
    ctx->pc = 0x38c28cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_38c290:
    // 0x38c290: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x38c290u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_38c294:
    // 0x38c294: 0xc10480a  jal         func_412028
label_38c298:
    if (ctx->pc == 0x38C298u) {
        ctx->pc = 0x38C298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C294u;
        // 0x38c298: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C29Cu;
        goto label_38c29c;
    }
    ctx->pc = 0x38C294u;
    SET_GPR_U32(ctx, 31, 0x38C29Cu);
    ctx->pc = 0x38C298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38C294u;
    // 0x38c298: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412028u, 0x38C294u, 0x38C29Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C29Cu;
label_38c29c:
    // 0x38c29c: 0x50500028  beql        $v0, $s0, . + 4 + (0x28 << 2)
label_38c2a0:
    if (ctx->pc == 0x38C2A0u) {
        ctx->pc = 0x38C2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C29Cu;
        // 0x38c2a0: 0x8e23001c  lw          $v1, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C2A4u;
        goto label_38c2a4;
    }
    ctx->pc = 0x38C29Cu;
    {
        const bool branch_taken_0x38c29c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x38c29c) {
            ctx->pc = 0x38C2A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38C29Cu;
            // 0x38c2a0: 0x8e23001c  lw          $v1, 0x1C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38C340u;
            goto label_38c340;
        }
    }
    ctx->pc = 0x38C2A4u;
label_38c2a4:
    // 0x38c2a4: 0x8622000e  lh          $v0, 0xE($s1)
    ctx->pc = 0x38c2a4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
label_38c2a8:
    // 0x38c2a8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x38c2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_38c2ac:
    // 0x38c2ac: 0x1c400020  bgtz        $v0, . + 4 + (0x20 << 2)
label_38c2b0:
    if (ctx->pc == 0x38C2B0u) {
        ctx->pc = 0x38C2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C2ACu;
        // 0x38c2b0: 0x9623000e  lhu         $v1, 0xE($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C2B4u;
        goto label_38c2b4;
    }
    ctx->pc = 0x38C2ACu;
    {
        const bool branch_taken_0x38c2ac = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x38C2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C2ACu;
        // 0x38c2b0: 0x9623000e  lhu         $v1, 0xE($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c2ac) {
            ctx->pc = 0x38C330u;
            goto label_38c330;
        }
    }
    ctx->pc = 0x38C2B4u;
label_38c2b4:
    // 0x38c2b4: 0x8e240058  lw          $a0, 0x58($s1)
    ctx->pc = 0x38c2b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_38c2b8:
    // 0x38c2b8: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_38c2bc:
    if (ctx->pc == 0x38C2BCu) {
        ctx->pc = 0x38C2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C2B8u;
        // 0x38c2bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C2C0u;
        goto label_38c2c0;
    }
    ctx->pc = 0x38C2B8u;
    {
        const bool branch_taken_0x38c2b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x38c2b8) {
            ctx->pc = 0x38C2BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38C2B8u;
            // 0x38c2bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38C2CCu;
            goto label_38c2cc;
        }
    }
    ctx->pc = 0x38C2C0u;
label_38c2c0:
    // 0x38c2c0: 0xc104702  jal         func_411C08
label_38c2c4:
    if (ctx->pc == 0x38C2C4u) {
        ctx->pc = 0x38C2C8u;
        goto label_38c2c8;
    }
    ctx->pc = 0x38C2C0u;
    SET_GPR_U32(ctx, 31, 0x38C2C8u);
    ctx->pc = 0x411C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x411C08u, 0x38C2C0u, 0x38C2C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C2C8u;
label_38c2c8:
    // 0x38c2c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x38c2c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_38c2cc:
    // 0x38c2cc: 0xc0e33ee  jal         func_38CFB8
label_38c2d0:
    if (ctx->pc == 0x38C2D0u) {
        ctx->pc = 0x38C2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C2CCu;
        // 0x38c2d0: 0x24050fff  addiu       $a1, $zero, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C2D4u;
        goto label_38c2d4;
    }
    ctx->pc = 0x38C2CCu;
    SET_GPR_U32(ctx, 31, 0x38C2D4u);
    ctx->pc = 0x38C2D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38C2CCu;
    // 0x38c2d0: 0x24050fff  addiu       $a1, $zero, 0xFFF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CFB8u, 0x38C2CCu, 0x38C2D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C2D4u;
label_38c2d4:
    // 0x38c2d4: 0x3c130062  lui         $s3, 0x62
    ctx->pc = 0x38c2d4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)98 << 16));
label_38c2d8:
    // 0x38c2d8: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x38c2d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
label_38c2dc:
    // 0x38c2dc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x38c2dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_38c2e0:
    // 0x38c2e0: 0xc104ca6  jal         func_413298
label_38c2e4:
    if (ctx->pc == 0x38C2E4u) {
        ctx->pc = 0x38C2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C2E0u;
        // 0x38c2e4: 0x2484add0  addiu       $a0, $a0, -0x5230 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C2E8u;
        goto label_38c2e8;
    }
    ctx->pc = 0x38C2E0u;
    SET_GPR_U32(ctx, 31, 0x38C2E8u);
    ctx->pc = 0x38C2E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38C2E0u;
    // 0x38c2e4: 0x2484add0  addiu       $a0, $a0, -0x5230 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x413298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413298u, 0x38C2E0u, 0x38C2E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C2E8u;
label_38c2e8:
    // 0x38c2e8: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x38c2e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_38c2ec:
    // 0x38c2ec: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_38c2f0:
    if (ctx->pc == 0x38C2F0u) {
        ctx->pc = 0x38C2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C2ECu;
        // 0x38c2f0: 0x2662e880  addiu       $v0, $s3, -0x1780 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294961280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C2F4u;
        goto label_38c2f4;
    }
    ctx->pc = 0x38C2ECu;
    {
        const bool branch_taken_0x38c2ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x38C2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C2ECu;
        // 0x38c2f0: 0x2662e880  addiu       $v0, $s3, -0x1780 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294961280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c2ec) {
            ctx->pc = 0x38C304u;
            goto label_38c304;
        }
    }
    ctx->pc = 0x38C2F4u;
label_38c2f4:
    // 0x38c2f4: 0x8c43010c  lw          $v1, 0x10C($v0)
    ctx->pc = 0x38c2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 268)));
label_38c2f8:
    // 0x38c2f8: 0x60f809  jalr        $v1
label_38c2fc:
    if (ctx->pc == 0x38C2FCu) {
        ctx->pc = 0x38C300u;
        goto label_38c300;
    }
    ctx->pc = 0x38C2F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x38C300u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38C2F8u, 0x38C300u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38C300u;
label_38c300:
    // 0x38c300: 0xae20005c  sw          $zero, 0x5C($s1)
    ctx->pc = 0x38c300u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 0));
label_38c304:
    // 0x38c304: 0xc0e3da0  jal         func_38F680
label_38c308:
    if (ctx->pc == 0x38C308u) {
        ctx->pc = 0x38C308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C304u;
        // 0x38c308: 0x26240020  addiu       $a0, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C30Cu;
        goto label_38c30c;
    }
    ctx->pc = 0x38C304u;
    SET_GPR_U32(ctx, 31, 0x38C30Cu);
    ctx->pc = 0x38C308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38C304u;
    // 0x38c308: 0x26240020  addiu       $a0, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F680u, 0x38C304u, 0x38C30Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C30Cu;
label_38c30c:
    // 0x38c30c: 0x9623000e  lhu         $v1, 0xE($s1)
    ctx->pc = 0x38c30cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
label_38c310:
    // 0x38c310: 0x2662e880  addiu       $v0, $s3, -0x1780
    ctx->pc = 0x38c310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294961280));
label_38c314:
    // 0x38c314: 0x8c45010c  lw          $a1, 0x10C($v0)
    ctx->pc = 0x38c314u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 268)));
label_38c318:
    // 0x38c318: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x38c318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_38c31c:
    // 0x38c31c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x38c31cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_38c320:
    // 0x38c320: 0xa0f809  jalr        $a1
label_38c324:
    if (ctx->pc == 0x38C324u) {
        ctx->pc = 0x38C324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C320u;
        // 0x38c324: 0xa623000e  sh          $v1, 0xE($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C328u;
        goto label_38c328;
    }
    ctx->pc = 0x38C320u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x38C328u);
        ctx->pc = 0x38C324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C320u;
        // 0x38c324: 0xa623000e  sh          $v1, 0xE($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38C320u, 0x38C328u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38C328u;
label_38c328:
    // 0x38c328: 0x10000201  b           . + 4 + (0x201 << 2)
label_38c32c:
    if (ctx->pc == 0x38C32Cu) {
        ctx->pc = 0x38C32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C328u;
        // 0x38c32c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C330u;
        goto label_38c330;
    }
    ctx->pc = 0x38C328u;
    {
        const bool branch_taken_0x38c328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38C32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C328u;
        // 0x38c32c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c328) {
            ctx->pc = 0x38CB30u;
            goto label_38cb30;
        }
    }
    ctx->pc = 0x38C330u;
label_38c330:
    // 0x38c330: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x38c330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_38c334:
    // 0x38c334: 0x1000017c  b           . + 4 + (0x17C << 2)
label_38c338:
    if (ctx->pc == 0x38C338u) {
        ctx->pc = 0x38C338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C334u;
        // 0x38c338: 0xa622000e  sh          $v0, 0xE($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C33Cu;
        goto label_38c33c;
    }
    ctx->pc = 0x38C334u;
    {
        const bool branch_taken_0x38c334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38C338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C334u;
        // 0x38c338: 0xa622000e  sh          $v0, 0xE($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c334) {
            ctx->pc = 0x38C928u;
            goto label_38c928;
        }
    }
    ctx->pc = 0x38C33Cu;
label_38c33c:
    // 0x38c33c: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x38c33cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_38c340:
    // 0x38c340: 0x58600037  blezl       $v1, . + 4 + (0x37 << 2)
label_38c344:
    if (ctx->pc == 0x38C344u) {
        ctx->pc = 0x38C344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C340u;
        // 0x38c344: 0x8e300010  lw          $s0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C348u;
        goto label_38c348;
    }
    ctx->pc = 0x38C340u;
    {
        const bool branch_taken_0x38c340 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x38c340) {
            ctx->pc = 0x38C344u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38C340u;
            // 0x38c344: 0x8e300010  lw          $s0, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38C420u;
            goto label_38c420;
        }
    }
    ctx->pc = 0x38C348u;
label_38c348:
    // 0x38c348: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x38c348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_38c34c:
    // 0x38c34c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x38c34cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38c350:
    // 0x38c350: 0x18600032  blez        $v1, . + 4 + (0x32 << 2)
label_38c354:
    if (ctx->pc == 0x38C354u) {
        ctx->pc = 0x38C354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C350u;
        // 0x38c354: 0x2a0c0  sll         $s4, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C358u;
        goto label_38c358;
    }
    ctx->pc = 0x38C350u;
    {
        const bool branch_taken_0x38c350 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x38C354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C350u;
        // 0x38c354: 0x2a0c0  sll         $s4, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c350) {
            ctx->pc = 0x38C41Cu;
            goto label_38c41c;
        }
    }
    ctx->pc = 0x38C358u;
label_38c358:
    // 0x38c358: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x38c358u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_38c35c:
    // 0x38c35c: 0x3c16005e  lui         $s6, 0x5E
    ctx->pc = 0x38c35cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)94 << 16));
label_38c360:
    // 0x38c360: 0x2455e880  addiu       $s5, $v0, -0x1780
    ctx->pc = 0x38c360u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_38c364:
    // 0x38c364: 0x26300034  addiu       $s0, $s1, 0x34
    ctx->pc = 0x38c364u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 52));
label_38c368:
    // 0x38c368: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x38c368u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_38c36c:
    // 0x38c36c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x38c36cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_38c370:
    // 0x38c370: 0xc103454  jal         func_40D150
label_38c374:
    if (ctx->pc == 0x38C374u) {
        ctx->pc = 0x38C374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C370u;
        // 0x38c374: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C378u;
        goto label_38c378;
    }
    ctx->pc = 0x38C370u;
    SET_GPR_U32(ctx, 31, 0x38C378u);
    ctx->pc = 0x38C374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38C370u;
    // 0x38c374: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D150u, 0x38C370u, 0x38C378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C378u;
label_38c378:
    // 0x38c378: 0x54400024  bnel        $v0, $zero, . + 4 + (0x24 << 2)
label_38c37c:
    if (ctx->pc == 0x38C37Cu) {
        ctx->pc = 0x38C37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C378u;
        // 0x38c37c: 0x8e22001c  lw          $v0, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C380u;
        goto label_38c380;
    }
    ctx->pc = 0x38C378u;
    {
        const bool branch_taken_0x38c378 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x38c378) {
            ctx->pc = 0x38C37Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38C378u;
            // 0x38c37c: 0x8e22001c  lw          $v0, 0x1C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38C40Cu;
            goto label_38c40c;
        }
    }
    ctx->pc = 0x38C380u;
label_38c380:
    // 0x38c380: 0x8622000e  lh          $v0, 0xE($s1)
    ctx->pc = 0x38c380u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
label_38c384:
    // 0x38c384: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x38c384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_38c388:
    // 0x38c388: 0x1c40001d  bgtz        $v0, . + 4 + (0x1D << 2)
label_38c38c:
    if (ctx->pc == 0x38C38Cu) {
        ctx->pc = 0x38C38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C388u;
        // 0x38c38c: 0x9623000e  lhu         $v1, 0xE($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C390u;
        goto label_38c390;
    }
    ctx->pc = 0x38C388u;
    {
        const bool branch_taken_0x38c388 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x38C38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C388u;
        // 0x38c38c: 0x9623000e  lhu         $v1, 0xE($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c388) {
            ctx->pc = 0x38C400u;
            goto label_38c400;
        }
    }
    ctx->pc = 0x38C390u;
label_38c390:
    // 0x38c390: 0x8e240058  lw          $a0, 0x58($s1)
    ctx->pc = 0x38c390u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_38c394:
    // 0x38c394: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_38c398:
    if (ctx->pc == 0x38C398u) {
        ctx->pc = 0x38C398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C394u;
        // 0x38c398: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C39Cu;
        goto label_38c39c;
    }
    ctx->pc = 0x38C394u;
    {
        const bool branch_taken_0x38c394 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x38c394) {
            ctx->pc = 0x38C398u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38C394u;
            // 0x38c398: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38C3A8u;
            goto label_38c3a8;
        }
    }
    ctx->pc = 0x38C39Cu;
label_38c39c:
    // 0x38c39c: 0xc104702  jal         func_411C08
label_38c3a0:
    if (ctx->pc == 0x38C3A0u) {
        ctx->pc = 0x38C3A4u;
        goto label_38c3a4;
    }
    ctx->pc = 0x38C39Cu;
    SET_GPR_U32(ctx, 31, 0x38C3A4u);
    ctx->pc = 0x411C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x411C08u, 0x38C39Cu, 0x38C3A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C3A4u;
label_38c3a4:
    // 0x38c3a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x38c3a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_38c3a8:
    // 0x38c3a8: 0xc0e33ee  jal         func_38CFB8
label_38c3ac:
    if (ctx->pc == 0x38C3ACu) {
        ctx->pc = 0x38C3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C3A8u;
        // 0x38c3ac: 0x24050fff  addiu       $a1, $zero, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C3B0u;
        goto label_38c3b0;
    }
    ctx->pc = 0x38C3A8u;
    SET_GPR_U32(ctx, 31, 0x38C3B0u);
    ctx->pc = 0x38C3ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38C3A8u;
    // 0x38c3ac: 0x24050fff  addiu       $a1, $zero, 0xFFF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CFB8u, 0x38C3A8u, 0x38C3B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C3B0u;
label_38c3b0:
    // 0x38c3b0: 0x26c4add0  addiu       $a0, $s6, -0x5230
    ctx->pc = 0x38c3b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294946256));
label_38c3b4:
    // 0x38c3b4: 0xc104ca6  jal         func_413298
label_38c3b8:
    if (ctx->pc == 0x38C3B8u) {
        ctx->pc = 0x38C3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C3B4u;
        // 0x38c3b8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C3BCu;
        goto label_38c3bc;
    }
    ctx->pc = 0x38C3B4u;
    SET_GPR_U32(ctx, 31, 0x38C3BCu);
    ctx->pc = 0x38C3B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38C3B4u;
    // 0x38c3b8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x413298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413298u, 0x38C3B4u, 0x38C3BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C3BCu;
label_38c3bc:
    // 0x38c3bc: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x38c3bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_38c3c0:
    // 0x38c3c0: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_38c3c4:
    if (ctx->pc == 0x38C3C4u) {
        ctx->pc = 0x38C3C8u;
        goto label_38c3c8;
    }
    ctx->pc = 0x38C3C0u;
    {
        const bool branch_taken_0x38c3c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x38c3c0) {
            ctx->pc = 0x38C3D8u;
            goto label_38c3d8;
        }
    }
    ctx->pc = 0x38C3C8u;
label_38c3c8:
    // 0x38c3c8: 0x8ea2010c  lw          $v0, 0x10C($s5)
    ctx->pc = 0x38c3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 268)));
label_38c3cc:
    // 0x38c3cc: 0x40f809  jalr        $v0
label_38c3d0:
    if (ctx->pc == 0x38C3D0u) {
        ctx->pc = 0x38C3D4u;
        goto label_38c3d4;
    }
    ctx->pc = 0x38C3CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x38C3D4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38C3CCu, 0x38C3D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38C3D4u;
label_38c3d4:
    // 0x38c3d4: 0xae20005c  sw          $zero, 0x5C($s1)
    ctx->pc = 0x38c3d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 0));
label_38c3d8:
    // 0x38c3d8: 0xc0e3da0  jal         func_38F680
label_38c3dc:
    if (ctx->pc == 0x38C3DCu) {
        ctx->pc = 0x38C3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C3D8u;
        // 0x38c3dc: 0x26240020  addiu       $a0, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C3E0u;
        goto label_38c3e0;
    }
    ctx->pc = 0x38C3D8u;
    SET_GPR_U32(ctx, 31, 0x38C3E0u);
    ctx->pc = 0x38C3DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38C3D8u;
    // 0x38c3dc: 0x26240020  addiu       $a0, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F680u, 0x38C3D8u, 0x38C3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C3E0u;
label_38c3e0:
    // 0x38c3e0: 0x9623000e  lhu         $v1, 0xE($s1)
    ctx->pc = 0x38c3e0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
label_38c3e4:
    // 0x38c3e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x38c3e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_38c3e8:
    // 0x38c3e8: 0x8ea2010c  lw          $v0, 0x10C($s5)
    ctx->pc = 0x38c3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 268)));
label_38c3ec:
    // 0x38c3ec: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x38c3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_38c3f0:
    // 0x38c3f0: 0x40f809  jalr        $v0
label_38c3f4:
    if (ctx->pc == 0x38C3F4u) {
        ctx->pc = 0x38C3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C3F0u;
        // 0x38c3f4: 0xa623000e  sh          $v1, 0xE($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C3F8u;
        goto label_38c3f8;
    }
    ctx->pc = 0x38C3F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x38C3F8u);
        ctx->pc = 0x38C3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C3F0u;
        // 0x38c3f4: 0xa623000e  sh          $v1, 0xE($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38C3F0u, 0x38C3F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38C3F8u;
label_38c3f8:
    // 0x38c3f8: 0x100001cd  b           . + 4 + (0x1CD << 2)
label_38c3fc:
    if (ctx->pc == 0x38C3FCu) {
        ctx->pc = 0x38C3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C3F8u;
        // 0x38c3fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C400u;
        goto label_38c400;
    }
    ctx->pc = 0x38C3F8u;
    {
        const bool branch_taken_0x38c3f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38C3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C3F8u;
        // 0x38c3fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c3f8) {
            ctx->pc = 0x38CB30u;
            goto label_38cb30;
        }
    }
    ctx->pc = 0x38C400u;
label_38c400:
    // 0x38c400: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x38c400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_38c404:
    // 0x38c404: 0x10000148  b           . + 4 + (0x148 << 2)
label_38c408:
    if (ctx->pc == 0x38C408u) {
        ctx->pc = 0x38C408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C404u;
        // 0x38c408: 0xa622000e  sh          $v0, 0xE($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C40Cu;
        goto label_38c40c;
    }
    ctx->pc = 0x38C404u;
    {
        const bool branch_taken_0x38c404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38C408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C404u;
        // 0x38c408: 0xa622000e  sh          $v0, 0xE($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c404) {
            ctx->pc = 0x38C928u;
            goto label_38c928;
        }
    }
    ctx->pc = 0x38C40Cu;
label_38c40c:
    // 0x38c40c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x38c40cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_38c410:
    // 0x38c410: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x38c410u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_38c414:
    // 0x38c414: 0x1440ffd4  bnez        $v0, . + 4 + (-0x2C << 2)
label_38c418:
    if (ctx->pc == 0x38C418u) {
        ctx->pc = 0x38C418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C414u;
        // 0x38c418: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C41Cu;
        goto label_38c41c;
    }
    ctx->pc = 0x38C414u;
    {
        const bool branch_taken_0x38c414 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38C418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C414u;
        // 0x38c418: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c414) {
            ctx->pc = 0x38C368u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38c368;
        }
    }
    ctx->pc = 0x38C41Cu;
label_38c41c:
    // 0x38c41c: 0x8e300010  lw          $s0, 0x10($s1)
    ctx->pc = 0x38c41cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_38c420:
    // 0x38c420: 0x1200003d  beqz        $s0, . + 4 + (0x3D << 2)
label_38c424:
    if (ctx->pc == 0x38C424u) {
        ctx->pc = 0x38C424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C420u;
        // 0x38c424: 0x200a02d  daddu       $s4, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C428u;
        goto label_38c428;
    }
    ctx->pc = 0x38C420u;
    {
        const bool branch_taken_0x38c420 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x38C424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C420u;
        // 0x38c424: 0x200a02d  daddu       $s4, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c420) {
            ctx->pc = 0x38C518u;
            goto label_38c518;
        }
    }
    ctx->pc = 0x38C428u;
label_38c428:
    // 0x38c428: 0x8e32002c  lw          $s2, 0x2C($s1)
    ctx->pc = 0x38c428u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_38c42c:
    // 0x38c42c: 0x1480c0  sll         $s0, $s4, 3
    ctx->pc = 0x38c42cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
label_38c430:
    // 0x38c430: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x38c430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_38c434:
    // 0x38c434: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x38c434u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_38c438:
    // 0x38c438: 0xc10480a  jal         func_412028
label_38c43c:
    if (ctx->pc == 0x38C43Cu) {
        ctx->pc = 0x38C43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C438u;
        // 0x38c43c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C440u;
        goto label_38c440;
    }
    ctx->pc = 0x38C438u;
    SET_GPR_U32(ctx, 31, 0x38C440u);
    ctx->pc = 0x38C43Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38C438u;
    // 0x38c43c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412028u, 0x38C438u, 0x38C440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C440u;
label_38c440:
    // 0x38c440: 0x50500027  beql        $v0, $s0, . + 4 + (0x27 << 2)
label_38c444:
    if (ctx->pc == 0x38C444u) {
        ctx->pc = 0x38C444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C440u;
        // 0x38c444: 0x2690ffff  addiu       $s0, $s4, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C448u;
        goto label_38c448;
    }
    ctx->pc = 0x38C440u;
    {
        const bool branch_taken_0x38c440 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x38c440) {
            ctx->pc = 0x38C444u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38C440u;
            // 0x38c444: 0x2690ffff  addiu       $s0, $s4, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38C4E0u;
            goto label_38c4e0;
        }
    }
    ctx->pc = 0x38C448u;
label_38c448:
    // 0x38c448: 0x8622000e  lh          $v0, 0xE($s1)
    ctx->pc = 0x38c448u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
label_38c44c:
    // 0x38c44c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x38c44cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_38c450:
    // 0x38c450: 0x1c400020  bgtz        $v0, . + 4 + (0x20 << 2)
label_38c454:
    if (ctx->pc == 0x38C454u) {
        ctx->pc = 0x38C454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C450u;
        // 0x38c454: 0x9623000e  lhu         $v1, 0xE($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C458u;
        goto label_38c458;
    }
    ctx->pc = 0x38C450u;
    {
        const bool branch_taken_0x38c450 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x38C454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C450u;
        // 0x38c454: 0x9623000e  lhu         $v1, 0xE($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c450) {
            ctx->pc = 0x38C4D4u;
            goto label_38c4d4;
        }
    }
    ctx->pc = 0x38C458u;
label_38c458:
    // 0x38c458: 0x8e240058  lw          $a0, 0x58($s1)
    ctx->pc = 0x38c458u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_38c45c:
    // 0x38c45c: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_38c460:
    if (ctx->pc == 0x38C460u) {
        ctx->pc = 0x38C460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C45Cu;
        // 0x38c460: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C464u;
        goto label_38c464;
    }
    ctx->pc = 0x38C45Cu;
    {
        const bool branch_taken_0x38c45c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x38c45c) {
            ctx->pc = 0x38C460u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38C45Cu;
            // 0x38c460: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38C470u;
            goto label_38c470;
        }
    }
    ctx->pc = 0x38C464u;
label_38c464:
    // 0x38c464: 0xc104702  jal         func_411C08
label_38c468:
    if (ctx->pc == 0x38C468u) {
        ctx->pc = 0x38C46Cu;
        goto label_38c46c;
    }
    ctx->pc = 0x38C464u;
    SET_GPR_U32(ctx, 31, 0x38C46Cu);
    ctx->pc = 0x411C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x411C08u, 0x38C464u, 0x38C46Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C46Cu;
label_38c46c:
    // 0x38c46c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x38c46cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_38c470:
    // 0x38c470: 0xc0e33ee  jal         func_38CFB8
label_38c474:
    if (ctx->pc == 0x38C474u) {
        ctx->pc = 0x38C474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C470u;
        // 0x38c474: 0x24050fff  addiu       $a1, $zero, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C478u;
        goto label_38c478;
    }
    ctx->pc = 0x38C470u;
    SET_GPR_U32(ctx, 31, 0x38C478u);
    ctx->pc = 0x38C474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38C470u;
    // 0x38c474: 0x24050fff  addiu       $a1, $zero, 0xFFF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CFB8u, 0x38C470u, 0x38C478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C478u;
label_38c478:
    // 0x38c478: 0x3c130062  lui         $s3, 0x62
    ctx->pc = 0x38c478u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)98 << 16));
label_38c47c:
    // 0x38c47c: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x38c47cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
label_38c480:
    // 0x38c480: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x38c480u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_38c484:
    // 0x38c484: 0xc104ca6  jal         func_413298
label_38c488:
    if (ctx->pc == 0x38C488u) {
        ctx->pc = 0x38C488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C484u;
        // 0x38c488: 0x2484add0  addiu       $a0, $a0, -0x5230 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C48Cu;
        goto label_38c48c;
    }
    ctx->pc = 0x38C484u;
    SET_GPR_U32(ctx, 31, 0x38C48Cu);
    ctx->pc = 0x38C488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38C484u;
    // 0x38c488: 0x2484add0  addiu       $a0, $a0, -0x5230 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x413298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413298u, 0x38C484u, 0x38C48Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C48Cu;
label_38c48c:
    // 0x38c48c: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x38c48cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_38c490:
    // 0x38c490: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_38c494:
    if (ctx->pc == 0x38C494u) {
        ctx->pc = 0x38C494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C490u;
        // 0x38c494: 0x2662e880  addiu       $v0, $s3, -0x1780 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294961280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C498u;
        goto label_38c498;
    }
    ctx->pc = 0x38C490u;
    {
        const bool branch_taken_0x38c490 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x38C494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C490u;
        // 0x38c494: 0x2662e880  addiu       $v0, $s3, -0x1780 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294961280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c490) {
            ctx->pc = 0x38C4A8u;
            goto label_38c4a8;
        }
    }
    ctx->pc = 0x38C498u;
label_38c498:
    // 0x38c498: 0x8c43010c  lw          $v1, 0x10C($v0)
    ctx->pc = 0x38c498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 268)));
label_38c49c:
    // 0x38c49c: 0x60f809  jalr        $v1
label_38c4a0:
    if (ctx->pc == 0x38C4A0u) {
        ctx->pc = 0x38C4A4u;
        goto label_38c4a4;
    }
    ctx->pc = 0x38C49Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x38C4A4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38C49Cu, 0x38C4A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38C4A4u;
label_38c4a4:
    // 0x38c4a4: 0xae20005c  sw          $zero, 0x5C($s1)
    ctx->pc = 0x38c4a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 0));
label_38c4a8:
    // 0x38c4a8: 0xc0e3da0  jal         func_38F680
label_38c4ac:
    if (ctx->pc == 0x38C4ACu) {
        ctx->pc = 0x38C4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C4A8u;
        // 0x38c4ac: 0x26240020  addiu       $a0, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C4B0u;
        goto label_38c4b0;
    }
    ctx->pc = 0x38C4A8u;
    SET_GPR_U32(ctx, 31, 0x38C4B0u);
    ctx->pc = 0x38C4ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38C4A8u;
    // 0x38c4ac: 0x26240020  addiu       $a0, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F680u, 0x38C4A8u, 0x38C4B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C4B0u;
label_38c4b0:
    // 0x38c4b0: 0x9623000e  lhu         $v1, 0xE($s1)
    ctx->pc = 0x38c4b0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
label_38c4b4:
    // 0x38c4b4: 0x2662e880  addiu       $v0, $s3, -0x1780
    ctx->pc = 0x38c4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294961280));
label_38c4b8:
    // 0x38c4b8: 0x8c45010c  lw          $a1, 0x10C($v0)
    ctx->pc = 0x38c4b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 268)));
label_38c4bc:
    // 0x38c4bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x38c4bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_38c4c0:
    // 0x38c4c0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x38c4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_38c4c4:
    // 0x38c4c4: 0xa0f809  jalr        $a1
label_38c4c8:
    if (ctx->pc == 0x38C4C8u) {
        ctx->pc = 0x38C4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C4C4u;
        // 0x38c4c8: 0xa623000e  sh          $v1, 0xE($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C4CCu;
        goto label_38c4cc;
    }
    ctx->pc = 0x38C4C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x38C4CCu);
        ctx->pc = 0x38C4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C4C4u;
        // 0x38c4c8: 0xa623000e  sh          $v1, 0xE($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38C4C4u, 0x38C4CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38C4CCu;
label_38c4cc:
    // 0x38c4cc: 0x10000198  b           . + 4 + (0x198 << 2)
label_38c4d0:
    if (ctx->pc == 0x38C4D0u) {
        ctx->pc = 0x38C4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C4CCu;
        // 0x38c4d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C4D4u;
        goto label_38c4d4;
    }
    ctx->pc = 0x38C4CCu;
    {
        const bool branch_taken_0x38c4cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38C4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C4CCu;
        // 0x38c4d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c4cc) {
            ctx->pc = 0x38CB30u;
            goto label_38cb30;
        }
    }
    ctx->pc = 0x38C4D4u;
label_38c4d4:
    // 0x38c4d4: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x38c4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_38c4d8:
    // 0x38c4d8: 0x10000113  b           . + 4 + (0x113 << 2)
label_38c4dc:
    if (ctx->pc == 0x38C4DCu) {
        ctx->pc = 0x38C4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C4D8u;
        // 0x38c4dc: 0xa622000e  sh          $v0, 0xE($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C4E0u;
        goto label_38c4e0;
    }
    ctx->pc = 0x38C4D8u;
    {
        const bool branch_taken_0x38c4d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38C4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C4D8u;
        // 0x38c4dc: 0xa622000e  sh          $v0, 0xE($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c4d8) {
            ctx->pc = 0x38C928u;
            goto label_38c928;
        }
    }
    ctx->pc = 0x38C4E0u;
label_38c4e0:
    // 0x38c4e0: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x38c4e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_38c4e4:
    // 0x38c4e4: 0x0  nop
    ctx->pc = 0x38c4e4u;
    // NOP
label_38c4e8:
    // 0x38c4e8: 0x94e50002  lhu         $a1, 0x2($a3)
    ctx->pc = 0x38c4e8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
label_38c4ec:
    // 0x38c4ec: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x38c4ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38c4f0:
    // 0x38c4f0: 0x94e40000  lhu         $a0, 0x0($a3)
    ctx->pc = 0x38c4f0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
label_38c4f4:
    // 0x38c4f4: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x38c4f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_38c4f8:
    // 0x38c4f8: 0x94e20006  lhu         $v0, 0x6($a3)
    ctx->pc = 0x38c4f8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 6)));
label_38c4fc:
    // 0x38c4fc: 0x94e30004  lhu         $v1, 0x4($a3)
    ctx->pc = 0x38c4fcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 4)));
label_38c500:
    // 0x38c500: 0xa4e50000  sh          $a1, 0x0($a3)
    ctx->pc = 0x38c500u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 5));
label_38c504:
    // 0x38c504: 0xa4e40002  sh          $a0, 0x2($a3)
    ctx->pc = 0x38c504u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 2), (uint16_t)GPR_U32(ctx, 4));
label_38c508:
    // 0x38c508: 0xa4e20004  sh          $v0, 0x4($a3)
    ctx->pc = 0x38c508u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 4), (uint16_t)GPR_U32(ctx, 2));
label_38c50c:
    // 0x38c50c: 0xa4e30006  sh          $v1, 0x6($a3)
    ctx->pc = 0x38c50cu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 6), (uint16_t)GPR_U32(ctx, 3));
label_38c510:
    // 0x38c510: 0x14c0fff5  bnez        $a2, . + 4 + (-0xB << 2)
label_38c514:
    if (ctx->pc == 0x38C514u) {
        ctx->pc = 0x38C514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C510u;
        // 0x38c514: 0x24e70008  addiu       $a3, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C518u;
        goto label_38c518;
    }
    ctx->pc = 0x38C510u;
    {
        const bool branch_taken_0x38c510 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x38C514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C510u;
        // 0x38c514: 0x24e70008  addiu       $a3, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c510) {
            ctx->pc = 0x38C4E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38c4e8;
        }
    }
    ctx->pc = 0x38C518u;
label_38c518:
    // 0x38c518: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x38c518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_38c51c:
    // 0x38c51c: 0x184000c6  blez        $v0, . + 4 + (0xC6 << 2)
label_38c520:
    if (ctx->pc == 0x38C520u) {
        ctx->pc = 0x38C520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C51Cu;
        // 0x38c520: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C524u;
        goto label_38c524;
    }
    ctx->pc = 0x38C51Cu;
    {
        const bool branch_taken_0x38c51c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x38C520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C51Cu;
        // 0x38c520: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c51c) {
            ctx->pc = 0x38C838u;
            goto label_38c838;
        }
    }
    ctx->pc = 0x38C524u;
label_38c524:
    // 0x38c524: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x38c524u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_38c528:
    // 0x38c528: 0x241e0018  addiu       $fp, $zero, 0x18
    ctx->pc = 0x38c528u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_38c52c:
    // 0x38c52c: 0x2454e880  addiu       $s4, $v0, -0x1780
    ctx->pc = 0x38c52cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_38c530:
    // 0x38c530: 0x3c16005e  lui         $s6, 0x5E
    ctx->pc = 0x38c530u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)94 << 16));
label_38c534:
    // 0x38c534: 0x2417000c  addiu       $s7, $zero, 0xC
    ctx->pc = 0x38c534u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_38c538:
    // 0x38c538: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x38c538u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38c53c:
    // 0x38c53c: 0x0  nop
    ctx->pc = 0x38c53cu;
    // NOP
label_38c540:
    // 0x38c540: 0x8e22005c  lw          $v0, 0x5C($s1)
    ctx->pc = 0x38c540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_38c544:
    // 0x38c544: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x38c544u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_38c548:
    // 0x38c548: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x38c548u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_38c54c:
    // 0x38c54c: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x38c54cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_38c550:
    // 0x38c550: 0xc10480a  jal         func_412028
label_38c554:
    if (ctx->pc == 0x38C554u) {
        ctx->pc = 0x38C554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C550u;
        // 0x38c554: 0x558021  addu        $s0, $v0, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C558u;
        goto label_38c558;
    }
    ctx->pc = 0x38C550u;
    SET_GPR_U32(ctx, 31, 0x38C558u);
    ctx->pc = 0x38C554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38C550u;
    // 0x38c554: 0x558021  addu        $s0, $v0, $s5 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412028u, 0x38C550u, 0x38C558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C558u;
label_38c558:
    // 0x38c558: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x38c558u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_38c55c:
    // 0x38c55c: 0x107e0024  beq         $v1, $fp, . + 4 + (0x24 << 2)
label_38c560:
    if (ctx->pc == 0x38C560u) {
        ctx->pc = 0x38C564u;
        goto label_38c564;
    }
    ctx->pc = 0x38C55Cu;
    {
        const bool branch_taken_0x38c55c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 30));
        if (branch_taken_0x38c55c) {
            ctx->pc = 0x38C5F0u;
            goto label_38c5f0;
        }
    }
    ctx->pc = 0x38C564u;
label_38c564:
    // 0x38c564: 0x8622000e  lh          $v0, 0xE($s1)
    ctx->pc = 0x38c564u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
label_38c568:
    // 0x38c568: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x38c568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_38c56c:
    // 0x38c56c: 0x1c40001d  bgtz        $v0, . + 4 + (0x1D << 2)
label_38c570:
    if (ctx->pc == 0x38C570u) {
        ctx->pc = 0x38C570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C56Cu;
        // 0x38c570: 0x9623000e  lhu         $v1, 0xE($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C574u;
        goto label_38c574;
    }
    ctx->pc = 0x38C56Cu;
    {
        const bool branch_taken_0x38c56c = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x38C570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C56Cu;
        // 0x38c570: 0x9623000e  lhu         $v1, 0xE($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c56c) {
            ctx->pc = 0x38C5E4u;
            goto label_38c5e4;
        }
    }
    ctx->pc = 0x38C574u;
label_38c574:
    // 0x38c574: 0x8e240058  lw          $a0, 0x58($s1)
    ctx->pc = 0x38c574u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_38c578:
    // 0x38c578: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_38c57c:
    if (ctx->pc == 0x38C57Cu) {
        ctx->pc = 0x38C57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C578u;
        // 0x38c57c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C580u;
        goto label_38c580;
    }
    ctx->pc = 0x38C578u;
    {
        const bool branch_taken_0x38c578 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x38c578) {
            ctx->pc = 0x38C57Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38C578u;
            // 0x38c57c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38C58Cu;
            goto label_38c58c;
        }
    }
    ctx->pc = 0x38C580u;
label_38c580:
    // 0x38c580: 0xc104702  jal         func_411C08
label_38c584:
    if (ctx->pc == 0x38C584u) {
        ctx->pc = 0x38C588u;
        goto label_38c588;
    }
    ctx->pc = 0x38C580u;
    SET_GPR_U32(ctx, 31, 0x38C588u);
    ctx->pc = 0x411C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x411C08u, 0x38C580u, 0x38C588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C588u;
label_38c588:
    // 0x38c588: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x38c588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_38c58c:
    // 0x38c58c: 0xc0e33ee  jal         func_38CFB8
label_38c590:
    if (ctx->pc == 0x38C590u) {
        ctx->pc = 0x38C590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C58Cu;
        // 0x38c590: 0x24050fff  addiu       $a1, $zero, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C594u;
        goto label_38c594;
    }
    ctx->pc = 0x38C58Cu;
    SET_GPR_U32(ctx, 31, 0x38C594u);
    ctx->pc = 0x38C590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38C58Cu;
    // 0x38c590: 0x24050fff  addiu       $a1, $zero, 0xFFF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CFB8u, 0x38C58Cu, 0x38C594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C594u;
label_38c594:
    // 0x38c594: 0x26c4add0  addiu       $a0, $s6, -0x5230
    ctx->pc = 0x38c594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294946256));
label_38c598:
    // 0x38c598: 0xc104ca6  jal         func_413298
label_38c59c:
    if (ctx->pc == 0x38C59Cu) {
        ctx->pc = 0x38C59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C598u;
        // 0x38c59c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C5A0u;
        goto label_38c5a0;
    }
    ctx->pc = 0x38C598u;
    SET_GPR_U32(ctx, 31, 0x38C5A0u);
    ctx->pc = 0x38C59Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38C598u;
    // 0x38c59c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x413298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413298u, 0x38C598u, 0x38C5A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C5A0u;
label_38c5a0:
    // 0x38c5a0: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x38c5a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_38c5a4:
    // 0x38c5a4: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_38c5a8:
    if (ctx->pc == 0x38C5A8u) {
        ctx->pc = 0x38C5ACu;
        goto label_38c5ac;
    }
    ctx->pc = 0x38C5A4u;
    {
        const bool branch_taken_0x38c5a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x38c5a4) {
            ctx->pc = 0x38C5BCu;
            goto label_38c5bc;
        }
    }
    ctx->pc = 0x38C5ACu;
label_38c5ac:
    // 0x38c5ac: 0x8e82010c  lw          $v0, 0x10C($s4)
    ctx->pc = 0x38c5acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 268)));
label_38c5b0:
    // 0x38c5b0: 0x40f809  jalr        $v0
label_38c5b4:
    if (ctx->pc == 0x38C5B4u) {
        ctx->pc = 0x38C5B8u;
        goto label_38c5b8;
    }
    ctx->pc = 0x38C5B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x38C5B8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38C5B0u, 0x38C5B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38C5B8u;
label_38c5b8:
    // 0x38c5b8: 0xae20005c  sw          $zero, 0x5C($s1)
    ctx->pc = 0x38c5b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 0));
label_38c5bc:
    // 0x38c5bc: 0xc0e3da0  jal         func_38F680
label_38c5c0:
    if (ctx->pc == 0x38C5C0u) {
        ctx->pc = 0x38C5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C5BCu;
        // 0x38c5c0: 0x26240020  addiu       $a0, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C5C4u;
        goto label_38c5c4;
    }
    ctx->pc = 0x38C5BCu;
    SET_GPR_U32(ctx, 31, 0x38C5C4u);
    ctx->pc = 0x38C5C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38C5BCu;
    // 0x38c5c0: 0x26240020  addiu       $a0, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F680u, 0x38C5BCu, 0x38C5C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C5C4u;
label_38c5c4:
    // 0x38c5c4: 0x9623000e  lhu         $v1, 0xE($s1)
    ctx->pc = 0x38c5c4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
label_38c5c8:
    // 0x38c5c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x38c5c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_38c5cc:
    // 0x38c5cc: 0x8e82010c  lw          $v0, 0x10C($s4)
    ctx->pc = 0x38c5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 268)));
label_38c5d0:
    // 0x38c5d0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x38c5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_38c5d4:
    // 0x38c5d4: 0x40f809  jalr        $v0
label_38c5d8:
    if (ctx->pc == 0x38C5D8u) {
        ctx->pc = 0x38C5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C5D4u;
        // 0x38c5d8: 0xa623000e  sh          $v1, 0xE($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C5DCu;
        goto label_38c5dc;
    }
    ctx->pc = 0x38C5D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x38C5DCu);
        ctx->pc = 0x38C5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C5D4u;
        // 0x38c5d8: 0xa623000e  sh          $v1, 0xE($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38C5D4u, 0x38C5DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38C5DCu;
label_38c5dc:
    // 0x38c5dc: 0x10000154  b           . + 4 + (0x154 << 2)
label_38c5e0:
    if (ctx->pc == 0x38C5E0u) {
        ctx->pc = 0x38C5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C5DCu;
        // 0x38c5e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C5E4u;
        goto label_38c5e4;
    }
    ctx->pc = 0x38C5DCu;
    {
        const bool branch_taken_0x38c5dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38C5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C5DCu;
        // 0x38c5e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c5dc) {
            ctx->pc = 0x38CB30u;
            goto label_38cb30;
        }
    }
    ctx->pc = 0x38C5E4u;
label_38c5e4:
    // 0x38c5e4: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x38c5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_38c5e8:
    // 0x38c5e8: 0x100000cf  b           . + 4 + (0xCF << 2)
label_38c5ec:
    if (ctx->pc == 0x38C5ECu) {
        ctx->pc = 0x38C5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C5E8u;
        // 0x38c5ec: 0xa622000e  sh          $v0, 0xE($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C5F0u;
        goto label_38c5f0;
    }
    ctx->pc = 0x38C5E8u;
    {
        const bool branch_taken_0x38c5e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38C5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C5E8u;
        // 0x38c5ec: 0xa622000e  sh          $v0, 0xE($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c5e8) {
            ctx->pc = 0x38C928u;
            goto label_38c928;
        }
    }
    ctx->pc = 0x38C5F0u;
label_38c5f0:
    // 0x38c5f0: 0x6ba20027  ldl         $v0, 0x27($sp)
    ctx->pc = 0x38c5f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_38c5f4:
    // 0x38c5f4: 0x6fa20020  ldr         $v0, 0x20($sp)
    ctx->pc = 0x38c5f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_38c5f8:
    // 0x38c5f8: 0x6ba4002f  ldl         $a0, 0x2F($sp)
    ctx->pc = 0x38c5f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_38c5fc:
    // 0x38c5fc: 0x6fa40028  ldr         $a0, 0x28($sp)
    ctx->pc = 0x38c5fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_38c600:
    // 0x38c600: 0xb202000b  sdl         $v0, 0xB($s0)
    ctx->pc = 0x38c600u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 11); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_38c604:
    // 0x38c604: 0xb6020004  sdr         $v0, 0x4($s0)
    ctx->pc = 0x38c604u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 4); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_38c608:
    // 0x38c608: 0xb2040013  sdl         $a0, 0x13($s0)
    ctx->pc = 0x38c608u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_38c60c:
    // 0x38c60c: 0xb604000c  sdr         $a0, 0xC($s0)
    ctx->pc = 0x38c60cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_38c610:
    // 0x38c610: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x38c610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_38c614:
    // 0x38c614: 0x10400057  beqz        $v0, . + 4 + (0x57 << 2)
label_38c618:
    if (ctx->pc == 0x38C618u) {
        ctx->pc = 0x38C618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C614u;
        // 0x38c618: 0x8fa20034  lw          $v0, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C61Cu;
        goto label_38c61c;
    }
    ctx->pc = 0x38C614u;
    {
        const bool branch_taken_0x38c614 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38C618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C614u;
        // 0x38c618: 0x8fa20034  lw          $v0, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c614) {
            ctx->pc = 0x38C774u;
            goto label_38c774;
        }
    }
    ctx->pc = 0x38C61Cu;
label_38c61c:
    // 0x38c61c: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
label_38c620:
    if (ctx->pc == 0x38C620u) {
        ctx->pc = 0x38C620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C61Cu;
        // 0x38c620: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C624u;
        goto label_38c624;
    }
    ctx->pc = 0x38C61Cu;
    {
        const bool branch_taken_0x38c61c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38C620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C61Cu;
        // 0x38c620: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c61c) {
            ctx->pc = 0x38C6CCu;
            goto label_38c6cc;
        }
    }
    ctx->pc = 0x38C624u;
label_38c624:
    // 0x38c624: 0x8e260014  lw          $a2, 0x14($s1)
    ctx->pc = 0x38c624u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_38c628:
    // 0x38c628: 0xc30018  mult        $zero, $a2, $v1
    ctx->pc = 0x38c628u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_38c62c:
    // 0x38c62c: 0x3012  mflo        $a2
    ctx->pc = 0x38c62cu;
    SET_GPR_U64(ctx, 6, ctx->lo);
label_38c630:
    // 0x38c630: 0xc103454  jal         func_40D150
label_38c634:
    if (ctx->pc == 0x38C634u) {
        ctx->pc = 0x38C634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C630u;
        // 0x38c634: 0x8e050014  lw          $a1, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C638u;
        goto label_38c638;
    }
    ctx->pc = 0x38C630u;
    SET_GPR_U32(ctx, 31, 0x38C638u);
    ctx->pc = 0x38C634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38C630u;
    // 0x38c634: 0x8e050014  lw          $a1, 0x14($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D150u, 0x38C630u, 0x38C638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C638u;
label_38c638:
    // 0x38c638: 0x5440007b  bnel        $v0, $zero, . + 4 + (0x7B << 2)
label_38c63c:
    if (ctx->pc == 0x38C63Cu) {
        ctx->pc = 0x38C63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C638u;
        // 0x38c63c: 0x8e220018  lw          $v0, 0x18($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C640u;
        goto label_38c640;
    }
    ctx->pc = 0x38C638u;
    {
        const bool branch_taken_0x38c638 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x38c638) {
            ctx->pc = 0x38C63Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38C638u;
            // 0x38c63c: 0x8e220018  lw          $v0, 0x18($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38C828u;
            goto label_38c828;
        }
    }
    ctx->pc = 0x38C640u;
label_38c640:
    // 0x38c640: 0x8622000e  lh          $v0, 0xE($s1)
    ctx->pc = 0x38c640u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
label_38c644:
    // 0x38c644: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x38c644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_38c648:
    // 0x38c648: 0x1c40001d  bgtz        $v0, . + 4 + (0x1D << 2)
label_38c64c:
    if (ctx->pc == 0x38C64Cu) {
        ctx->pc = 0x38C64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C648u;
        // 0x38c64c: 0x9623000e  lhu         $v1, 0xE($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C650u;
        goto label_38c650;
    }
    ctx->pc = 0x38C648u;
    {
        const bool branch_taken_0x38c648 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x38C64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C648u;
        // 0x38c64c: 0x9623000e  lhu         $v1, 0xE($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c648) {
            ctx->pc = 0x38C6C0u;
            goto label_38c6c0;
        }
    }
    ctx->pc = 0x38C650u;
label_38c650:
    // 0x38c650: 0x8e240058  lw          $a0, 0x58($s1)
    ctx->pc = 0x38c650u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_38c654:
    // 0x38c654: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_38c658:
    if (ctx->pc == 0x38C658u) {
        ctx->pc = 0x38C658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C654u;
        // 0x38c658: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C65Cu;
        goto label_38c65c;
    }
    ctx->pc = 0x38C654u;
    {
        const bool branch_taken_0x38c654 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x38c654) {
            ctx->pc = 0x38C658u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38C654u;
            // 0x38c658: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38C668u;
            goto label_38c668;
        }
    }
    ctx->pc = 0x38C65Cu;
label_38c65c:
    // 0x38c65c: 0xc104702  jal         func_411C08
label_38c660:
    if (ctx->pc == 0x38C660u) {
        ctx->pc = 0x38C664u;
        goto label_38c664;
    }
    ctx->pc = 0x38C65Cu;
    SET_GPR_U32(ctx, 31, 0x38C664u);
    ctx->pc = 0x411C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x411C08u, 0x38C65Cu, 0x38C664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C664u;
label_38c664:
    // 0x38c664: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x38c664u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_38c668:
    // 0x38c668: 0xc0e33ee  jal         func_38CFB8
label_38c66c:
    if (ctx->pc == 0x38C66Cu) {
        ctx->pc = 0x38C66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C668u;
        // 0x38c66c: 0x24050fff  addiu       $a1, $zero, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C670u;
        goto label_38c670;
    }
    ctx->pc = 0x38C668u;
    SET_GPR_U32(ctx, 31, 0x38C670u);
    ctx->pc = 0x38C66Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38C668u;
    // 0x38c66c: 0x24050fff  addiu       $a1, $zero, 0xFFF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CFB8u, 0x38C668u, 0x38C670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C670u;
label_38c670:
    // 0x38c670: 0x26c4add0  addiu       $a0, $s6, -0x5230
    ctx->pc = 0x38c670u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294946256));
label_38c674:
    // 0x38c674: 0xc104ca6  jal         func_413298
label_38c678:
    if (ctx->pc == 0x38C678u) {
        ctx->pc = 0x38C678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C674u;
        // 0x38c678: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C67Cu;
        goto label_38c67c;
    }
    ctx->pc = 0x38C674u;
    SET_GPR_U32(ctx, 31, 0x38C67Cu);
    ctx->pc = 0x38C678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38C674u;
    // 0x38c678: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x413298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413298u, 0x38C674u, 0x38C67Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C67Cu;
label_38c67c:
    // 0x38c67c: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x38c67cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_38c680:
    // 0x38c680: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_38c684:
    if (ctx->pc == 0x38C684u) {
        ctx->pc = 0x38C688u;
        goto label_38c688;
    }
    ctx->pc = 0x38C680u;
    {
        const bool branch_taken_0x38c680 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x38c680) {
            ctx->pc = 0x38C698u;
            goto label_38c698;
        }
    }
    ctx->pc = 0x38C688u;
label_38c688:
    // 0x38c688: 0x8e82010c  lw          $v0, 0x10C($s4)
    ctx->pc = 0x38c688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 268)));
label_38c68c:
    // 0x38c68c: 0x40f809  jalr        $v0
label_38c690:
    if (ctx->pc == 0x38C690u) {
        ctx->pc = 0x38C694u;
        goto label_38c694;
    }
    ctx->pc = 0x38C68Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x38C694u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38C68Cu, 0x38C694u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38C694u;
label_38c694:
    // 0x38c694: 0xae20005c  sw          $zero, 0x5C($s1)
    ctx->pc = 0x38c694u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 0));
label_38c698:
    // 0x38c698: 0xc0e3da0  jal         func_38F680
label_38c69c:
    if (ctx->pc == 0x38C69Cu) {
        ctx->pc = 0x38C69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C698u;
        // 0x38c69c: 0x26240020  addiu       $a0, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C6A0u;
        goto label_38c6a0;
    }
    ctx->pc = 0x38C698u;
    SET_GPR_U32(ctx, 31, 0x38C6A0u);
    ctx->pc = 0x38C69Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38C698u;
    // 0x38c69c: 0x26240020  addiu       $a0, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F680u, 0x38C698u, 0x38C6A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C6A0u;
label_38c6a0:
    // 0x38c6a0: 0x9623000e  lhu         $v1, 0xE($s1)
    ctx->pc = 0x38c6a0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
label_38c6a4:
    // 0x38c6a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x38c6a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_38c6a8:
    // 0x38c6a8: 0x8e82010c  lw          $v0, 0x10C($s4)
    ctx->pc = 0x38c6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 268)));
label_38c6ac:
    // 0x38c6ac: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x38c6acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_38c6b0:
    // 0x38c6b0: 0x40f809  jalr        $v0
label_38c6b4:
    if (ctx->pc == 0x38C6B4u) {
        ctx->pc = 0x38C6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C6B0u;
        // 0x38c6b4: 0xa623000e  sh          $v1, 0xE($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C6B8u;
        goto label_38c6b8;
    }
    ctx->pc = 0x38C6B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x38C6B8u);
        ctx->pc = 0x38C6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C6B0u;
        // 0x38c6b4: 0xa623000e  sh          $v1, 0xE($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38C6B0u, 0x38C6B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38C6B8u;
label_38c6b8:
    // 0x38c6b8: 0x1000011d  b           . + 4 + (0x11D << 2)
label_38c6bc:
    if (ctx->pc == 0x38C6BCu) {
        ctx->pc = 0x38C6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C6B8u;
        // 0x38c6bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C6C0u;
        goto label_38c6c0;
    }
    ctx->pc = 0x38C6B8u;
    {
        const bool branch_taken_0x38c6b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38C6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C6B8u;
        // 0x38c6bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c6b8) {
            ctx->pc = 0x38CB30u;
            goto label_38cb30;
        }
    }
    ctx->pc = 0x38C6C0u;
label_38c6c0:
    // 0x38c6c0: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x38c6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_38c6c4:
    // 0x38c6c4: 0x10000098  b           . + 4 + (0x98 << 2)
label_38c6c8:
    if (ctx->pc == 0x38C6C8u) {
        ctx->pc = 0x38C6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C6C4u;
        // 0x38c6c8: 0xa622000e  sh          $v0, 0xE($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C6CCu;
        goto label_38c6cc;
    }
    ctx->pc = 0x38C6C4u;
    {
        const bool branch_taken_0x38c6c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38C6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C6C4u;
        // 0x38c6c8: 0xa622000e  sh          $v0, 0xE($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c6c4) {
            ctx->pc = 0x38C928u;
            goto label_38c928;
        }
    }
    ctx->pc = 0x38C6CCu;
label_38c6cc:
    // 0x38c6cc: 0x8e260014  lw          $a2, 0x14($s1)
    ctx->pc = 0x38c6ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_38c6d0:
    // 0x38c6d0: 0xd70018  mult        $zero, $a2, $s7
    ctx->pc = 0x38c6d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_38c6d4:
    // 0x38c6d4: 0x3012  mflo        $a2
    ctx->pc = 0x38c6d4u;
    SET_GPR_U64(ctx, 6, ctx->lo);
label_38c6d8:
    // 0x38c6d8: 0xc103454  jal         func_40D150
label_38c6dc:
    if (ctx->pc == 0x38C6DCu) {
        ctx->pc = 0x38C6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C6D8u;
        // 0x38c6dc: 0x8e050014  lw          $a1, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C6E0u;
        goto label_38c6e0;
    }
    ctx->pc = 0x38C6D8u;
    SET_GPR_U32(ctx, 31, 0x38C6E0u);
    ctx->pc = 0x38C6DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38C6D8u;
    // 0x38c6dc: 0x8e050014  lw          $a1, 0x14($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D150u, 0x38C6D8u, 0x38C6E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C6E0u;
label_38c6e0:
    // 0x38c6e0: 0x14400024  bnez        $v0, . + 4 + (0x24 << 2)
label_38c6e4:
    if (ctx->pc == 0x38C6E4u) {
        ctx->pc = 0x38C6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C6E0u;
        // 0x38c6e4: 0x8fa20034  lw          $v0, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C6E8u;
        goto label_38c6e8;
    }
    ctx->pc = 0x38C6E0u;
    {
        const bool branch_taken_0x38c6e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38C6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C6E0u;
        // 0x38c6e4: 0x8fa20034  lw          $v0, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c6e0) {
            ctx->pc = 0x38C774u;
            goto label_38c774;
        }
    }
    ctx->pc = 0x38C6E8u;
label_38c6e8:
    // 0x38c6e8: 0x8622000e  lh          $v0, 0xE($s1)
    ctx->pc = 0x38c6e8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
label_38c6ec:
    // 0x38c6ec: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x38c6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_38c6f0:
    // 0x38c6f0: 0x1c40001d  bgtz        $v0, . + 4 + (0x1D << 2)
label_38c6f4:
    if (ctx->pc == 0x38C6F4u) {
        ctx->pc = 0x38C6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C6F0u;
        // 0x38c6f4: 0x9623000e  lhu         $v1, 0xE($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C6F8u;
        goto label_38c6f8;
    }
    ctx->pc = 0x38C6F0u;
    {
        const bool branch_taken_0x38c6f0 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x38C6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C6F0u;
        // 0x38c6f4: 0x9623000e  lhu         $v1, 0xE($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c6f0) {
            ctx->pc = 0x38C768u;
            goto label_38c768;
        }
    }
    ctx->pc = 0x38C6F8u;
label_38c6f8:
    // 0x38c6f8: 0x8e240058  lw          $a0, 0x58($s1)
    ctx->pc = 0x38c6f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_38c6fc:
    // 0x38c6fc: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_38c700:
    if (ctx->pc == 0x38C700u) {
        ctx->pc = 0x38C700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C6FCu;
        // 0x38c700: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C704u;
        goto label_38c704;
    }
    ctx->pc = 0x38C6FCu;
    {
        const bool branch_taken_0x38c6fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x38c6fc) {
            ctx->pc = 0x38C700u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38C6FCu;
            // 0x38c700: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38C710u;
            goto label_38c710;
        }
    }
    ctx->pc = 0x38C704u;
label_38c704:
    // 0x38c704: 0xc104702  jal         func_411C08
label_38c708:
    if (ctx->pc == 0x38C708u) {
        ctx->pc = 0x38C70Cu;
        goto label_38c70c;
    }
    ctx->pc = 0x38C704u;
    SET_GPR_U32(ctx, 31, 0x38C70Cu);
    ctx->pc = 0x411C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x411C08u, 0x38C704u, 0x38C70Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C70Cu;
label_38c70c:
    // 0x38c70c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x38c70cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_38c710:
    // 0x38c710: 0xc0e33ee  jal         func_38CFB8
label_38c714:
    if (ctx->pc == 0x38C714u) {
        ctx->pc = 0x38C714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C710u;
        // 0x38c714: 0x24050fff  addiu       $a1, $zero, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C718u;
        goto label_38c718;
    }
    ctx->pc = 0x38C710u;
    SET_GPR_U32(ctx, 31, 0x38C718u);
    ctx->pc = 0x38C714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38C710u;
    // 0x38c714: 0x24050fff  addiu       $a1, $zero, 0xFFF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CFB8u, 0x38C710u, 0x38C718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C718u;
label_38c718:
    // 0x38c718: 0x26c4add0  addiu       $a0, $s6, -0x5230
    ctx->pc = 0x38c718u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294946256));
label_38c71c:
    // 0x38c71c: 0xc104ca6  jal         func_413298
label_38c720:
    if (ctx->pc == 0x38C720u) {
        ctx->pc = 0x38C720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C71Cu;
        // 0x38c720: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C724u;
        goto label_38c724;
    }
    ctx->pc = 0x38C71Cu;
    SET_GPR_U32(ctx, 31, 0x38C724u);
    ctx->pc = 0x38C720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38C71Cu;
    // 0x38c720: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x413298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413298u, 0x38C71Cu, 0x38C724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C724u;
label_38c724:
    // 0x38c724: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x38c724u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_38c728:
    // 0x38c728: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_38c72c:
    if (ctx->pc == 0x38C72Cu) {
        ctx->pc = 0x38C730u;
        goto label_38c730;
    }
    ctx->pc = 0x38C728u;
    {
        const bool branch_taken_0x38c728 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x38c728) {
            ctx->pc = 0x38C740u;
            goto label_38c740;
        }
    }
    ctx->pc = 0x38C730u;
label_38c730:
    // 0x38c730: 0x8e82010c  lw          $v0, 0x10C($s4)
    ctx->pc = 0x38c730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 268)));
label_38c734:
    // 0x38c734: 0x40f809  jalr        $v0
label_38c738:
    if (ctx->pc == 0x38C738u) {
        ctx->pc = 0x38C73Cu;
        goto label_38c73c;
    }
    ctx->pc = 0x38C734u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x38C73Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38C734u, 0x38C73Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38C73Cu;
label_38c73c:
    // 0x38c73c: 0xae20005c  sw          $zero, 0x5C($s1)
    ctx->pc = 0x38c73cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 0));
label_38c740:
    // 0x38c740: 0xc0e3da0  jal         func_38F680
label_38c744:
    if (ctx->pc == 0x38C744u) {
        ctx->pc = 0x38C744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C740u;
        // 0x38c744: 0x26240020  addiu       $a0, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C748u;
        goto label_38c748;
    }
    ctx->pc = 0x38C740u;
    SET_GPR_U32(ctx, 31, 0x38C748u);
    ctx->pc = 0x38C744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38C740u;
    // 0x38c744: 0x26240020  addiu       $a0, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F680u, 0x38C740u, 0x38C748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C748u;
label_38c748:
    // 0x38c748: 0x9623000e  lhu         $v1, 0xE($s1)
    ctx->pc = 0x38c748u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
label_38c74c:
    // 0x38c74c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x38c74cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_38c750:
    // 0x38c750: 0x8e82010c  lw          $v0, 0x10C($s4)
    ctx->pc = 0x38c750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 268)));
label_38c754:
    // 0x38c754: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x38c754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_38c758:
    // 0x38c758: 0x40f809  jalr        $v0
label_38c75c:
    if (ctx->pc == 0x38C75Cu) {
        ctx->pc = 0x38C75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C758u;
        // 0x38c75c: 0xa623000e  sh          $v1, 0xE($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C760u;
        goto label_38c760;
    }
    ctx->pc = 0x38C758u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x38C760u);
        ctx->pc = 0x38C75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C758u;
        // 0x38c75c: 0xa623000e  sh          $v1, 0xE($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38C758u, 0x38C760u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38C760u;
label_38c760:
    // 0x38c760: 0x100000f3  b           . + 4 + (0xF3 << 2)
label_38c764:
    if (ctx->pc == 0x38C764u) {
        ctx->pc = 0x38C764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C760u;
        // 0x38c764: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C768u;
        goto label_38c768;
    }
    ctx->pc = 0x38C760u;
    {
        const bool branch_taken_0x38c760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38C764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C760u;
        // 0x38c764: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c760) {
            ctx->pc = 0x38CB30u;
            goto label_38cb30;
        }
    }
    ctx->pc = 0x38C768u;
label_38c768:
    // 0x38c768: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x38c768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_38c76c:
    // 0x38c76c: 0x1000006e  b           . + 4 + (0x6E << 2)
label_38c770:
    if (ctx->pc == 0x38C770u) {
        ctx->pc = 0x38C770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C76Cu;
        // 0x38c770: 0xa622000e  sh          $v0, 0xE($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C774u;
        goto label_38c774;
    }
    ctx->pc = 0x38C76Cu;
    {
        const bool branch_taken_0x38c76c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38C770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C76Cu;
        // 0x38c770: 0xa622000e  sh          $v0, 0xE($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c76c) {
            ctx->pc = 0x38C928u;
            goto label_38c928;
        }
    }
    ctx->pc = 0x38C774u;
label_38c774:
    // 0x38c774: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
label_38c778:
    if (ctx->pc == 0x38C778u) {
        ctx->pc = 0x38C778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C774u;
        // 0x38c778: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C77Cu;
        goto label_38c77c;
    }
    ctx->pc = 0x38C774u;
    {
        const bool branch_taken_0x38c774 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38C778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C774u;
        // 0x38c778: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c774) {
            ctx->pc = 0x38C824u;
            goto label_38c824;
        }
    }
    ctx->pc = 0x38C77Cu;
label_38c77c:
    // 0x38c77c: 0x8e260014  lw          $a2, 0x14($s1)
    ctx->pc = 0x38c77cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_38c780:
    // 0x38c780: 0xd70018  mult        $zero, $a2, $s7
    ctx->pc = 0x38c780u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_38c784:
    // 0x38c784: 0x3012  mflo        $a2
    ctx->pc = 0x38c784u;
    SET_GPR_U64(ctx, 6, ctx->lo);
label_38c788:
    // 0x38c788: 0xc103454  jal         func_40D150
label_38c78c:
    if (ctx->pc == 0x38C78Cu) {
        ctx->pc = 0x38C78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C788u;
        // 0x38c78c: 0x8e050018  lw          $a1, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C790u;
        goto label_38c790;
    }
    ctx->pc = 0x38C788u;
    SET_GPR_U32(ctx, 31, 0x38C790u);
    ctx->pc = 0x38C78Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38C788u;
    // 0x38c78c: 0x8e050018  lw          $a1, 0x18($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D150u, 0x38C788u, 0x38C790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C790u;
label_38c790:
    // 0x38c790: 0x54400025  bnel        $v0, $zero, . + 4 + (0x25 << 2)
label_38c794:
    if (ctx->pc == 0x38C794u) {
        ctx->pc = 0x38C794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C790u;
        // 0x38c794: 0x8e220018  lw          $v0, 0x18($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C798u;
        goto label_38c798;
    }
    ctx->pc = 0x38C790u;
    {
        const bool branch_taken_0x38c790 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x38c790) {
            ctx->pc = 0x38C794u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38C790u;
            // 0x38c794: 0x8e220018  lw          $v0, 0x18($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38C828u;
            goto label_38c828;
        }
    }
    ctx->pc = 0x38C798u;
label_38c798:
    // 0x38c798: 0x8622000e  lh          $v0, 0xE($s1)
    ctx->pc = 0x38c798u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
label_38c79c:
    // 0x38c79c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x38c79cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_38c7a0:
    // 0x38c7a0: 0x1c40001d  bgtz        $v0, . + 4 + (0x1D << 2)
label_38c7a4:
    if (ctx->pc == 0x38C7A4u) {
        ctx->pc = 0x38C7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C7A0u;
        // 0x38c7a4: 0x9623000e  lhu         $v1, 0xE($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C7A8u;
        goto label_38c7a8;
    }
    ctx->pc = 0x38C7A0u;
    {
        const bool branch_taken_0x38c7a0 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x38C7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C7A0u;
        // 0x38c7a4: 0x9623000e  lhu         $v1, 0xE($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c7a0) {
            ctx->pc = 0x38C818u;
            goto label_38c818;
        }
    }
    ctx->pc = 0x38C7A8u;
label_38c7a8:
    // 0x38c7a8: 0x8e240058  lw          $a0, 0x58($s1)
    ctx->pc = 0x38c7a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_38c7ac:
    // 0x38c7ac: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_38c7b0:
    if (ctx->pc == 0x38C7B0u) {
        ctx->pc = 0x38C7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C7ACu;
        // 0x38c7b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C7B4u;
        goto label_38c7b4;
    }
    ctx->pc = 0x38C7ACu;
    {
        const bool branch_taken_0x38c7ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x38c7ac) {
            ctx->pc = 0x38C7B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38C7ACu;
            // 0x38c7b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38C7C0u;
            goto label_38c7c0;
        }
    }
    ctx->pc = 0x38C7B4u;
label_38c7b4:
    // 0x38c7b4: 0xc104702  jal         func_411C08
label_38c7b8:
    if (ctx->pc == 0x38C7B8u) {
        ctx->pc = 0x38C7BCu;
        goto label_38c7bc;
    }
    ctx->pc = 0x38C7B4u;
    SET_GPR_U32(ctx, 31, 0x38C7BCu);
    ctx->pc = 0x411C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x411C08u, 0x38C7B4u, 0x38C7BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C7BCu;
label_38c7bc:
    // 0x38c7bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x38c7bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_38c7c0:
    // 0x38c7c0: 0xc0e33ee  jal         func_38CFB8
label_38c7c4:
    if (ctx->pc == 0x38C7C4u) {
        ctx->pc = 0x38C7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C7C0u;
        // 0x38c7c4: 0x24050fff  addiu       $a1, $zero, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C7C8u;
        goto label_38c7c8;
    }
    ctx->pc = 0x38C7C0u;
    SET_GPR_U32(ctx, 31, 0x38C7C8u);
    ctx->pc = 0x38C7C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38C7C0u;
    // 0x38c7c4: 0x24050fff  addiu       $a1, $zero, 0xFFF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CFB8u, 0x38C7C0u, 0x38C7C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C7C8u;
label_38c7c8:
    // 0x38c7c8: 0x26c4add0  addiu       $a0, $s6, -0x5230
    ctx->pc = 0x38c7c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294946256));
label_38c7cc:
    // 0x38c7cc: 0xc104ca6  jal         func_413298
label_38c7d0:
    if (ctx->pc == 0x38C7D0u) {
        ctx->pc = 0x38C7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C7CCu;
        // 0x38c7d0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C7D4u;
        goto label_38c7d4;
    }
    ctx->pc = 0x38C7CCu;
    SET_GPR_U32(ctx, 31, 0x38C7D4u);
    ctx->pc = 0x38C7D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38C7CCu;
    // 0x38c7d0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x413298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413298u, 0x38C7CCu, 0x38C7D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C7D4u;
label_38c7d4:
    // 0x38c7d4: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x38c7d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_38c7d8:
    // 0x38c7d8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_38c7dc:
    if (ctx->pc == 0x38C7DCu) {
        ctx->pc = 0x38C7E0u;
        goto label_38c7e0;
    }
    ctx->pc = 0x38C7D8u;
    {
        const bool branch_taken_0x38c7d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x38c7d8) {
            ctx->pc = 0x38C7F0u;
            goto label_38c7f0;
        }
    }
    ctx->pc = 0x38C7E0u;
label_38c7e0:
    // 0x38c7e0: 0x8e82010c  lw          $v0, 0x10C($s4)
    ctx->pc = 0x38c7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 268)));
label_38c7e4:
    // 0x38c7e4: 0x40f809  jalr        $v0
label_38c7e8:
    if (ctx->pc == 0x38C7E8u) {
        ctx->pc = 0x38C7ECu;
        goto label_38c7ec;
    }
    ctx->pc = 0x38C7E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x38C7ECu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38C7E4u, 0x38C7ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38C7ECu;
label_38c7ec:
    // 0x38c7ec: 0xae20005c  sw          $zero, 0x5C($s1)
    ctx->pc = 0x38c7ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 0));
label_38c7f0:
    // 0x38c7f0: 0xc0e3da0  jal         func_38F680
label_38c7f4:
    if (ctx->pc == 0x38C7F4u) {
        ctx->pc = 0x38C7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C7F0u;
        // 0x38c7f4: 0x26240020  addiu       $a0, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C7F8u;
        goto label_38c7f8;
    }
    ctx->pc = 0x38C7F0u;
    SET_GPR_U32(ctx, 31, 0x38C7F8u);
    ctx->pc = 0x38C7F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38C7F0u;
    // 0x38c7f4: 0x26240020  addiu       $a0, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F680u, 0x38C7F0u, 0x38C7F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C7F8u;
label_38c7f8:
    // 0x38c7f8: 0x9623000e  lhu         $v1, 0xE($s1)
    ctx->pc = 0x38c7f8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
label_38c7fc:
    // 0x38c7fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x38c7fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_38c800:
    // 0x38c800: 0x8e82010c  lw          $v0, 0x10C($s4)
    ctx->pc = 0x38c800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 268)));
label_38c804:
    // 0x38c804: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x38c804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_38c808:
    // 0x38c808: 0x40f809  jalr        $v0
label_38c80c:
    if (ctx->pc == 0x38C80Cu) {
        ctx->pc = 0x38C80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C808u;
        // 0x38c80c: 0xa623000e  sh          $v1, 0xE($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C810u;
        goto label_38c810;
    }
    ctx->pc = 0x38C808u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x38C810u);
        ctx->pc = 0x38C80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C808u;
        // 0x38c80c: 0xa623000e  sh          $v1, 0xE($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38C808u, 0x38C810u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38C810u;
label_38c810:
    // 0x38c810: 0x100000c7  b           . + 4 + (0xC7 << 2)
label_38c814:
    if (ctx->pc == 0x38C814u) {
        ctx->pc = 0x38C814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C810u;
        // 0x38c814: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C818u;
        goto label_38c818;
    }
    ctx->pc = 0x38C810u;
    {
        const bool branch_taken_0x38c810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38C814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C810u;
        // 0x38c814: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c810) {
            ctx->pc = 0x38CB30u;
            goto label_38cb30;
        }
    }
    ctx->pc = 0x38C818u;
label_38c818:
    // 0x38c818: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x38c818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_38c81c:
    // 0x38c81c: 0x10000042  b           . + 4 + (0x42 << 2)
label_38c820:
    if (ctx->pc == 0x38C820u) {
        ctx->pc = 0x38C820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C81Cu;
        // 0x38c820: 0xa622000e  sh          $v0, 0xE($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C824u;
        goto label_38c824;
    }
    ctx->pc = 0x38C81Cu;
    {
        const bool branch_taken_0x38c81c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38C820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C81Cu;
        // 0x38c820: 0xa622000e  sh          $v0, 0xE($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c81c) {
            ctx->pc = 0x38C928u;
            goto label_38c928;
        }
    }
    ctx->pc = 0x38C824u;
label_38c824:
    // 0x38c824: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x38c824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_38c828:
    // 0x38c828: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x38c828u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_38c82c:
    // 0x38c82c: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x38c82cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_38c830:
    // 0x38c830: 0x1440ff43  bnez        $v0, . + 4 + (-0xBD << 2)
label_38c834:
    if (ctx->pc == 0x38C834u) {
        ctx->pc = 0x38C834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C830u;
        // 0x38c834: 0x26b5001c  addiu       $s5, $s5, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C838u;
        goto label_38c838;
    }
    ctx->pc = 0x38C830u;
    {
        const bool branch_taken_0x38c830 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38C834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C830u;
        // 0x38c834: 0x26b5001c  addiu       $s5, $s5, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c830) {
            ctx->pc = 0x38C540u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38c540;
        }
    }
    ctx->pc = 0x38C838u;
label_38c838:
    // 0x38c838: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x38c838u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_38c83c:
    // 0x38c83c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x38c83cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_38c840:
    // 0x38c840: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x38c840u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_38c844:
    // 0x38c844: 0xc103322  jal         func_40CC88
label_38c848:
    if (ctx->pc == 0x38C848u) {
        ctx->pc = 0x38C848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C844u;
        // 0x38c848: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C84Cu;
        goto label_38c84c;
    }
    ctx->pc = 0x38C844u;
    SET_GPR_U32(ctx, 31, 0x38C84Cu);
    ctx->pc = 0x38C848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38C844u;
    // 0x38c848: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40CC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40CC88u, 0x38C844u, 0x38C84Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C84Cu;
label_38c84c:
    // 0x38c84c: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
label_38c850:
    if (ctx->pc == 0x38C850u) {
        ctx->pc = 0x38C850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C84Cu;
        // 0x38c850: 0x8fa30050  lw          $v1, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C854u;
        goto label_38c854;
    }
    ctx->pc = 0x38C84Cu;
    {
        const bool branch_taken_0x38c84c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38C850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C84Cu;
        // 0x38c850: 0x8fa30050  lw          $v1, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c84c) {
            ctx->pc = 0x38C928u;
            goto label_38c928;
        }
    }
    ctx->pc = 0x38C854u;
label_38c854:
    // 0x38c854: 0x3c02fffc  lui         $v0, 0xFFFC
    ctx->pc = 0x38c854u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65532 << 16));
label_38c858:
    // 0x38c858: 0x3442b000  ori         $v0, $v0, 0xB000
    ctx->pc = 0x38c858u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45056);
label_38c85c:
    // 0x38c85c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x38c85cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_38c860:
    // 0x38c860: 0x2c632003  sltiu       $v1, $v1, 0x2003
    ctx->pc = 0x38c860u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8195) ? 1 : 0);
label_38c864:
    // 0x38c864: 0x14600032  bnez        $v1, . + 4 + (0x32 << 2)
label_38c868:
    if (ctx->pc == 0x38C868u) {
        ctx->pc = 0x38C868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C864u;
        // 0x38c868: 0x26300020  addiu       $s0, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C86Cu;
        goto label_38c86c;
    }
    ctx->pc = 0x38C864u;
    {
        const bool branch_taken_0x38c864 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x38C868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C864u;
        // 0x38c868: 0x26300020  addiu       $s0, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c864) {
            ctx->pc = 0x38C930u;
            goto label_38c930;
        }
    }
    ctx->pc = 0x38C86Cu;
label_38c86c:
    // 0x38c86c: 0x8622000e  lh          $v0, 0xE($s1)
    ctx->pc = 0x38c86cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
label_38c870:
    // 0x38c870: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x38c870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_38c874:
    // 0x38c874: 0x1c400021  bgtz        $v0, . + 4 + (0x21 << 2)
label_38c878:
    if (ctx->pc == 0x38C878u) {
        ctx->pc = 0x38C878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C874u;
        // 0x38c878: 0x9623000e  lhu         $v1, 0xE($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C87Cu;
        goto label_38c87c;
    }
    ctx->pc = 0x38C874u;
    {
        const bool branch_taken_0x38c874 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x38C878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C874u;
        // 0x38c878: 0x9623000e  lhu         $v1, 0xE($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c874) {
            ctx->pc = 0x38C8FCu;
            goto label_38c8fc;
        }
    }
    ctx->pc = 0x38C87Cu;
label_38c87c:
    // 0x38c87c: 0x8e240058  lw          $a0, 0x58($s1)
    ctx->pc = 0x38c87cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_38c880:
    // 0x38c880: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_38c884:
    if (ctx->pc == 0x38C884u) {
        ctx->pc = 0x38C884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C880u;
        // 0x38c884: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C888u;
        goto label_38c888;
    }
    ctx->pc = 0x38C880u;
    {
        const bool branch_taken_0x38c880 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x38c880) {
            ctx->pc = 0x38C884u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38C880u;
            // 0x38c884: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38C894u;
            goto label_38c894;
        }
    }
    ctx->pc = 0x38C888u;
label_38c888:
    // 0x38c888: 0xc104702  jal         func_411C08
label_38c88c:
    if (ctx->pc == 0x38C88Cu) {
        ctx->pc = 0x38C890u;
        goto label_38c890;
    }
    ctx->pc = 0x38C888u;
    SET_GPR_U32(ctx, 31, 0x38C890u);
    ctx->pc = 0x411C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x411C08u, 0x38C888u, 0x38C890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C890u;
label_38c890:
    // 0x38c890: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x38c890u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_38c894:
    // 0x38c894: 0xc0e33ee  jal         func_38CFB8
label_38c898:
    if (ctx->pc == 0x38C898u) {
        ctx->pc = 0x38C898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C894u;
        // 0x38c898: 0x24050fff  addiu       $a1, $zero, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C89Cu;
        goto label_38c89c;
    }
    ctx->pc = 0x38C894u;
    SET_GPR_U32(ctx, 31, 0x38C89Cu);
    ctx->pc = 0x38C898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38C894u;
    // 0x38c898: 0x24050fff  addiu       $a1, $zero, 0xFFF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CFB8u, 0x38C894u, 0x38C89Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C89Cu;
label_38c89c:
    // 0x38c89c: 0x3c130062  lui         $s3, 0x62
    ctx->pc = 0x38c89cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)98 << 16));
label_38c8a0:
    // 0x38c8a0: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x38c8a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
label_38c8a4:
    // 0x38c8a4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x38c8a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_38c8a8:
    // 0x38c8a8: 0xc104ca6  jal         func_413298
label_38c8ac:
    if (ctx->pc == 0x38C8ACu) {
        ctx->pc = 0x38C8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C8A8u;
        // 0x38c8ac: 0x2484add0  addiu       $a0, $a0, -0x5230 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C8B0u;
        goto label_38c8b0;
    }
    ctx->pc = 0x38C8A8u;
    SET_GPR_U32(ctx, 31, 0x38C8B0u);
    ctx->pc = 0x38C8ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38C8A8u;
    // 0x38c8ac: 0x2484add0  addiu       $a0, $a0, -0x5230 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x413298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413298u, 0x38C8A8u, 0x38C8B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C8B0u;
label_38c8b0:
    // 0x38c8b0: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x38c8b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_38c8b4:
    // 0x38c8b4: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_38c8b8:
    if (ctx->pc == 0x38C8B8u) {
        ctx->pc = 0x38C8BCu;
        goto label_38c8bc;
    }
    ctx->pc = 0x38C8B4u;
    {
        const bool branch_taken_0x38c8b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x38c8b4) {
            ctx->pc = 0x38C8D0u;
            goto label_38c8d0;
        }
    }
    ctx->pc = 0x38C8BCu;
label_38c8bc:
    // 0x38c8bc: 0x2662e880  addiu       $v0, $s3, -0x1780
    ctx->pc = 0x38c8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294961280));
label_38c8c0:
    // 0x38c8c0: 0x8c43010c  lw          $v1, 0x10C($v0)
    ctx->pc = 0x38c8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 268)));
label_38c8c4:
    // 0x38c8c4: 0x60f809  jalr        $v1
label_38c8c8:
    if (ctx->pc == 0x38C8C8u) {
        ctx->pc = 0x38C8CCu;
        goto label_38c8cc;
    }
    ctx->pc = 0x38C8C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x38C8CCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38C8C4u, 0x38C8CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38C8CCu;
label_38c8cc:
    // 0x38c8cc: 0xae20005c  sw          $zero, 0x5C($s1)
    ctx->pc = 0x38c8ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 0));
label_38c8d0:
    // 0x38c8d0: 0xc0e3da0  jal         func_38F680
label_38c8d4:
    if (ctx->pc == 0x38C8D4u) {
        ctx->pc = 0x38C8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C8D0u;
        // 0x38c8d4: 0x26240020  addiu       $a0, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C8D8u;
        goto label_38c8d8;
    }
    ctx->pc = 0x38C8D0u;
    SET_GPR_U32(ctx, 31, 0x38C8D8u);
    ctx->pc = 0x38C8D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38C8D0u;
    // 0x38c8d4: 0x26240020  addiu       $a0, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F680u, 0x38C8D0u, 0x38C8D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C8D8u;
label_38c8d8:
    // 0x38c8d8: 0x9623000e  lhu         $v1, 0xE($s1)
    ctx->pc = 0x38c8d8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
label_38c8dc:
    // 0x38c8dc: 0x2662e880  addiu       $v0, $s3, -0x1780
    ctx->pc = 0x38c8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294961280));
label_38c8e0:
    // 0x38c8e0: 0x8c45010c  lw          $a1, 0x10C($v0)
    ctx->pc = 0x38c8e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 268)));
label_38c8e4:
    // 0x38c8e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x38c8e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_38c8e8:
    // 0x38c8e8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x38c8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_38c8ec:
    // 0x38c8ec: 0xa0f809  jalr        $a1
label_38c8f0:
    if (ctx->pc == 0x38C8F0u) {
        ctx->pc = 0x38C8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C8ECu;
        // 0x38c8f0: 0xa623000e  sh          $v1, 0xE($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C8F4u;
        goto label_38c8f4;
    }
    ctx->pc = 0x38C8ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x38C8F4u);
        ctx->pc = 0x38C8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C8ECu;
        // 0x38c8f0: 0xa623000e  sh          $v1, 0xE($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38C8ECu, 0x38C8F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38C8F4u;
label_38c8f4:
    // 0x38c8f4: 0x10000004  b           . + 4 + (0x4 << 2)
label_38c8f8:
    if (ctx->pc == 0x38C8F8u) {
        ctx->pc = 0x38C8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C8F4u;
        // 0x38c8f8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C8FCu;
        goto label_38c8fc;
    }
    ctx->pc = 0x38C8F4u;
    {
        const bool branch_taken_0x38c8f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38C8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C8F4u;
        // 0x38c8f8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c8f4) {
            ctx->pc = 0x38C908u;
            goto label_38c908;
        }
    }
    ctx->pc = 0x38C8FCu;
label_38c8fc:
    // 0x38c8fc: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x38c8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_38c900:
    // 0x38c900: 0xa622000e  sh          $v0, 0xE($s1)
    ctx->pc = 0x38c900u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 2));
label_38c904:
    // 0x38c904: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x38c904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_38c908:
    // 0x38c908: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x38c908u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_38c90c:
    // 0x38c90c: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x38c90cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_38c910:
    // 0x38c910: 0xc1035f6  jal         func_40D7D8
label_38c914:
    if (ctx->pc == 0x38C914u) {
        ctx->pc = 0x38C914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C910u;
        // 0x38c914: 0x34840004  ori         $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C918u;
        goto label_38c918;
    }
    ctx->pc = 0x38C910u;
    SET_GPR_U32(ctx, 31, 0x38C918u);
    ctx->pc = 0x38C914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38C910u;
    // 0x38c914: 0x34840004  ori         $a0, $a0, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x38C910u, 0x38C918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C918u;
label_38c918:
    // 0x38c918: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x38c918u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
label_38c91c:
    // 0x38c91c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x38c91cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_38c920:
    // 0x38c920: 0xc103628  jal         func_40D8A0
label_38c924:
    if (ctx->pc == 0x38C924u) {
        ctx->pc = 0x38C928u;
        goto label_38c928;
    }
    ctx->pc = 0x38C920u;
    SET_GPR_U32(ctx, 31, 0x38C928u);
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x38C920u, 0x38C928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C928u;
label_38c928:
    // 0x38c928: 0x10000081  b           . + 4 + (0x81 << 2)
label_38c92c:
    if (ctx->pc == 0x38C92Cu) {
        ctx->pc = 0x38C92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C928u;
        // 0x38c92c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C930u;
        goto label_38c930;
    }
    ctx->pc = 0x38C928u;
    {
        const bool branch_taken_0x38c928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38C92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C928u;
        // 0x38c92c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c928) {
            ctx->pc = 0x38CB30u;
            goto label_38cb30;
        }
    }
    ctx->pc = 0x38C930u;
label_38c930:
    // 0x38c930: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x38c930u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_38c934:
    // 0x38c934: 0xc0e3bf0  jal         func_38EFC0
label_38c938:
    if (ctx->pc == 0x38C938u) {
        ctx->pc = 0x38C938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C934u;
        // 0x38c938: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C93Cu;
        goto label_38c93c;
    }
    ctx->pc = 0x38C934u;
    SET_GPR_U32(ctx, 31, 0x38C93Cu);
    ctx->pc = 0x38C938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38C934u;
    // 0x38c938: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38EFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38EFC0u, 0x38C934u, 0x38C93Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C93Cu;
label_38c93c:
    // 0x38c93c: 0x14400027  bnez        $v0, . + 4 + (0x27 << 2)
label_38c940:
    if (ctx->pc == 0x38C940u) {
        ctx->pc = 0x38C940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C93Cu;
        // 0x38c940: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C944u;
        goto label_38c944;
    }
    ctx->pc = 0x38C93Cu;
    {
        const bool branch_taken_0x38c93c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38C940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C93Cu;
        // 0x38c940: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c93c) {
            ctx->pc = 0x38C9DCu;
            goto label_38c9dc;
        }
    }
    ctx->pc = 0x38C944u;
label_38c944:
    // 0x38c944: 0x8622000e  lh          $v0, 0xE($s1)
    ctx->pc = 0x38c944u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
label_38c948:
    // 0x38c948: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x38c948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_38c94c:
    // 0x38c94c: 0x1c400020  bgtz        $v0, . + 4 + (0x20 << 2)
label_38c950:
    if (ctx->pc == 0x38C950u) {
        ctx->pc = 0x38C950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C94Cu;
        // 0x38c950: 0x9623000e  lhu         $v1, 0xE($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C954u;
        goto label_38c954;
    }
    ctx->pc = 0x38C94Cu;
    {
        const bool branch_taken_0x38c94c = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x38C950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C94Cu;
        // 0x38c950: 0x9623000e  lhu         $v1, 0xE($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c94c) {
            ctx->pc = 0x38C9D0u;
            goto label_38c9d0;
        }
    }
    ctx->pc = 0x38C954u;
label_38c954:
    // 0x38c954: 0x8e240058  lw          $a0, 0x58($s1)
    ctx->pc = 0x38c954u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_38c958:
    // 0x38c958: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_38c95c:
    if (ctx->pc == 0x38C95Cu) {
        ctx->pc = 0x38C95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C958u;
        // 0x38c95c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C960u;
        goto label_38c960;
    }
    ctx->pc = 0x38C958u;
    {
        const bool branch_taken_0x38c958 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x38c958) {
            ctx->pc = 0x38C95Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38C958u;
            // 0x38c95c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38C96Cu;
            goto label_38c96c;
        }
    }
    ctx->pc = 0x38C960u;
label_38c960:
    // 0x38c960: 0xc104702  jal         func_411C08
label_38c964:
    if (ctx->pc == 0x38C964u) {
        ctx->pc = 0x38C968u;
        goto label_38c968;
    }
    ctx->pc = 0x38C960u;
    SET_GPR_U32(ctx, 31, 0x38C968u);
    ctx->pc = 0x411C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x411C08u, 0x38C960u, 0x38C968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C968u;
label_38c968:
    // 0x38c968: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x38c968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_38c96c:
    // 0x38c96c: 0xc0e33ee  jal         func_38CFB8
label_38c970:
    if (ctx->pc == 0x38C970u) {
        ctx->pc = 0x38C970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C96Cu;
        // 0x38c970: 0x24050fff  addiu       $a1, $zero, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C974u;
        goto label_38c974;
    }
    ctx->pc = 0x38C96Cu;
    SET_GPR_U32(ctx, 31, 0x38C974u);
    ctx->pc = 0x38C970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38C96Cu;
    // 0x38c970: 0x24050fff  addiu       $a1, $zero, 0xFFF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CFB8u, 0x38C96Cu, 0x38C974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C974u;
label_38c974:
    // 0x38c974: 0x3c130062  lui         $s3, 0x62
    ctx->pc = 0x38c974u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)98 << 16));
label_38c978:
    // 0x38c978: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x38c978u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
label_38c97c:
    // 0x38c97c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x38c97cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_38c980:
    // 0x38c980: 0xc104ca6  jal         func_413298
label_38c984:
    if (ctx->pc == 0x38C984u) {
        ctx->pc = 0x38C984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C980u;
        // 0x38c984: 0x2484add0  addiu       $a0, $a0, -0x5230 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C988u;
        goto label_38c988;
    }
    ctx->pc = 0x38C980u;
    SET_GPR_U32(ctx, 31, 0x38C988u);
    ctx->pc = 0x38C984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38C980u;
    // 0x38c984: 0x2484add0  addiu       $a0, $a0, -0x5230 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x413298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413298u, 0x38C980u, 0x38C988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C988u;
label_38c988:
    // 0x38c988: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x38c988u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_38c98c:
    // 0x38c98c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_38c990:
    if (ctx->pc == 0x38C990u) {
        ctx->pc = 0x38C990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C98Cu;
        // 0x38c990: 0x2662e880  addiu       $v0, $s3, -0x1780 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294961280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C994u;
        goto label_38c994;
    }
    ctx->pc = 0x38C98Cu;
    {
        const bool branch_taken_0x38c98c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x38C990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C98Cu;
        // 0x38c990: 0x2662e880  addiu       $v0, $s3, -0x1780 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294961280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c98c) {
            ctx->pc = 0x38C9A4u;
            goto label_38c9a4;
        }
    }
    ctx->pc = 0x38C994u;
label_38c994:
    // 0x38c994: 0x8c43010c  lw          $v1, 0x10C($v0)
    ctx->pc = 0x38c994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 268)));
label_38c998:
    // 0x38c998: 0x60f809  jalr        $v1
label_38c99c:
    if (ctx->pc == 0x38C99Cu) {
        ctx->pc = 0x38C9A0u;
        goto label_38c9a0;
    }
    ctx->pc = 0x38C998u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x38C9A0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38C998u, 0x38C9A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38C9A0u;
label_38c9a0:
    // 0x38c9a0: 0xae20005c  sw          $zero, 0x5C($s1)
    ctx->pc = 0x38c9a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 0));
label_38c9a4:
    // 0x38c9a4: 0xc0e3da0  jal         func_38F680
label_38c9a8:
    if (ctx->pc == 0x38C9A8u) {
        ctx->pc = 0x38C9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C9A4u;
        // 0x38c9a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C9ACu;
        goto label_38c9ac;
    }
    ctx->pc = 0x38C9A4u;
    SET_GPR_U32(ctx, 31, 0x38C9ACu);
    ctx->pc = 0x38C9A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38C9A4u;
    // 0x38c9a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F680u, 0x38C9A4u, 0x38C9ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C9ACu;
label_38c9ac:
    // 0x38c9ac: 0x9623000e  lhu         $v1, 0xE($s1)
    ctx->pc = 0x38c9acu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
label_38c9b0:
    // 0x38c9b0: 0x2662e880  addiu       $v0, $s3, -0x1780
    ctx->pc = 0x38c9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294961280));
label_38c9b4:
    // 0x38c9b4: 0x8c45010c  lw          $a1, 0x10C($v0)
    ctx->pc = 0x38c9b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 268)));
label_38c9b8:
    // 0x38c9b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x38c9b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_38c9bc:
    // 0x38c9bc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x38c9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_38c9c0:
    // 0x38c9c0: 0xa0f809  jalr        $a1
label_38c9c4:
    if (ctx->pc == 0x38C9C4u) {
        ctx->pc = 0x38C9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C9C0u;
        // 0x38c9c4: 0xa623000e  sh          $v1, 0xE($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C9C8u;
        goto label_38c9c8;
    }
    ctx->pc = 0x38C9C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x38C9C8u);
        ctx->pc = 0x38C9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C9C0u;
        // 0x38c9c4: 0xa623000e  sh          $v1, 0xE($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38C9C0u, 0x38C9C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38C9C8u;
label_38c9c8:
    // 0x38c9c8: 0x10000059  b           . + 4 + (0x59 << 2)
label_38c9cc:
    if (ctx->pc == 0x38C9CCu) {
        ctx->pc = 0x38C9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C9C8u;
        // 0x38c9cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C9D0u;
        goto label_38c9d0;
    }
    ctx->pc = 0x38C9C8u;
    {
        const bool branch_taken_0x38c9c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38C9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C9C8u;
        // 0x38c9cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c9c8) {
            ctx->pc = 0x38CB30u;
            goto label_38cb30;
        }
    }
    ctx->pc = 0x38C9D0u;
label_38c9d0:
    // 0x38c9d0: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x38c9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_38c9d4:
    // 0x38c9d4: 0x1000ffd4  b           . + 4 + (-0x2C << 2)
label_38c9d8:
    if (ctx->pc == 0x38C9D8u) {
        ctx->pc = 0x38C9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C9D4u;
        // 0x38c9d8: 0xa622000e  sh          $v0, 0xE($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C9DCu;
        goto label_38c9dc;
    }
    ctx->pc = 0x38C9D4u;
    {
        const bool branch_taken_0x38c9d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38C9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C9D4u;
        // 0x38c9d8: 0xa622000e  sh          $v0, 0xE($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c9d4) {
            ctx->pc = 0x38C928u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38c928;
        }
    }
    ctx->pc = 0x38C9DCu;
label_38c9dc:
    // 0x38c9dc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x38c9dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_38c9e0:
    // 0x38c9e0: 0x2452add0  addiu       $s2, $v0, -0x5230
    ctx->pc = 0x38c9e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946256));
label_38c9e4:
    // 0x38c9e4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x38c9e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_38c9e8:
    // 0x38c9e8: 0xc1049e2  jal         func_412788
label_38c9ec:
    if (ctx->pc == 0x38C9ECu) {
        ctx->pc = 0x38C9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C9E8u;
        // 0x38c9ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C9F0u;
        goto label_38c9f0;
    }
    ctx->pc = 0x38C9E8u;
    SET_GPR_U32(ctx, 31, 0x38C9F0u);
    ctx->pc = 0x38C9ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38C9E8u;
    // 0x38c9ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412788u, 0x38C9E8u, 0x38C9F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C9F0u;
label_38c9f0:
    // 0x38c9f0: 0x14400026  bnez        $v0, . + 4 + (0x26 << 2)
label_38c9f4:
    if (ctx->pc == 0x38C9F4u) {
        ctx->pc = 0x38C9F8u;
        goto label_38c9f8;
    }
    ctx->pc = 0x38C9F0u;
    {
        const bool branch_taken_0x38c9f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x38c9f0) {
            ctx->pc = 0x38CA8Cu;
            goto label_38ca8c;
        }
    }
    ctx->pc = 0x38C9F8u;
label_38c9f8:
    // 0x38c9f8: 0x8622000e  lh          $v0, 0xE($s1)
    ctx->pc = 0x38c9f8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
label_38c9fc:
    // 0x38c9fc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x38c9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_38ca00:
    // 0x38ca00: 0x1c40001f  bgtz        $v0, . + 4 + (0x1F << 2)
label_38ca04:
    if (ctx->pc == 0x38CA04u) {
        ctx->pc = 0x38CA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CA00u;
        // 0x38ca04: 0x9623000e  lhu         $v1, 0xE($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38CA08u;
        goto label_38ca08;
    }
    ctx->pc = 0x38CA00u;
    {
        const bool branch_taken_0x38ca00 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x38CA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CA00u;
        // 0x38ca04: 0x9623000e  lhu         $v1, 0xE($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ca00) {
            ctx->pc = 0x38CA80u;
            goto label_38ca80;
        }
    }
    ctx->pc = 0x38CA08u;
label_38ca08:
    // 0x38ca08: 0x8e240058  lw          $a0, 0x58($s1)
    ctx->pc = 0x38ca08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_38ca0c:
    // 0x38ca0c: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_38ca10:
    if (ctx->pc == 0x38CA10u) {
        ctx->pc = 0x38CA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CA0Cu;
        // 0x38ca10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38CA14u;
        goto label_38ca14;
    }
    ctx->pc = 0x38CA0Cu;
    {
        const bool branch_taken_0x38ca0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x38ca0c) {
            ctx->pc = 0x38CA10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38CA0Cu;
            // 0x38ca10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38CA20u;
            goto label_38ca20;
        }
    }
    ctx->pc = 0x38CA14u;
label_38ca14:
    // 0x38ca14: 0xc104702  jal         func_411C08
label_38ca18:
    if (ctx->pc == 0x38CA18u) {
        ctx->pc = 0x38CA1Cu;
        goto label_38ca1c;
    }
    ctx->pc = 0x38CA14u;
    SET_GPR_U32(ctx, 31, 0x38CA1Cu);
    ctx->pc = 0x411C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x411C08u, 0x38CA14u, 0x38CA1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38CA1Cu;
label_38ca1c:
    // 0x38ca1c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x38ca1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_38ca20:
    // 0x38ca20: 0xc0e33ee  jal         func_38CFB8
label_38ca24:
    if (ctx->pc == 0x38CA24u) {
        ctx->pc = 0x38CA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CA20u;
        // 0x38ca24: 0x24050fff  addiu       $a1, $zero, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38CA28u;
        goto label_38ca28;
    }
    ctx->pc = 0x38CA20u;
    SET_GPR_U32(ctx, 31, 0x38CA28u);
    ctx->pc = 0x38CA24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38CA20u;
    // 0x38ca24: 0x24050fff  addiu       $a1, $zero, 0xFFF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CFB8u, 0x38CA20u, 0x38CA28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38CA28u;
label_38ca28:
    // 0x38ca28: 0x3c130062  lui         $s3, 0x62
    ctx->pc = 0x38ca28u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)98 << 16));
label_38ca2c:
    // 0x38ca2c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x38ca2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_38ca30:
    // 0x38ca30: 0xc104ca6  jal         func_413298
label_38ca34:
    if (ctx->pc == 0x38CA34u) {
        ctx->pc = 0x38CA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CA30u;
        // 0x38ca34: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38CA38u;
        goto label_38ca38;
    }
    ctx->pc = 0x38CA30u;
    SET_GPR_U32(ctx, 31, 0x38CA38u);
    ctx->pc = 0x38CA34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38CA30u;
    // 0x38ca34: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x413298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413298u, 0x38CA30u, 0x38CA38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38CA38u;
label_38ca38:
    // 0x38ca38: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x38ca38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_38ca3c:
    // 0x38ca3c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_38ca40:
    if (ctx->pc == 0x38CA40u) {
        ctx->pc = 0x38CA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CA3Cu;
        // 0x38ca40: 0x2662e880  addiu       $v0, $s3, -0x1780 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294961280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38CA44u;
        goto label_38ca44;
    }
    ctx->pc = 0x38CA3Cu;
    {
        const bool branch_taken_0x38ca3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x38CA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CA3Cu;
        // 0x38ca40: 0x2662e880  addiu       $v0, $s3, -0x1780 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294961280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ca3c) {
            ctx->pc = 0x38CA54u;
            goto label_38ca54;
        }
    }
    ctx->pc = 0x38CA44u;
label_38ca44:
    // 0x38ca44: 0x8c43010c  lw          $v1, 0x10C($v0)
    ctx->pc = 0x38ca44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 268)));
label_38ca48:
    // 0x38ca48: 0x60f809  jalr        $v1
label_38ca4c:
    if (ctx->pc == 0x38CA4Cu) {
        ctx->pc = 0x38CA50u;
        goto label_38ca50;
    }
    ctx->pc = 0x38CA48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x38CA50u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38CA48u, 0x38CA50u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38CA50u;
label_38ca50:
    // 0x38ca50: 0xae20005c  sw          $zero, 0x5C($s1)
    ctx->pc = 0x38ca50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 0));
label_38ca54:
    // 0x38ca54: 0xc0e3da0  jal         func_38F680
label_38ca58:
    if (ctx->pc == 0x38CA58u) {
        ctx->pc = 0x38CA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CA54u;
        // 0x38ca58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38CA5Cu;
        goto label_38ca5c;
    }
    ctx->pc = 0x38CA54u;
    SET_GPR_U32(ctx, 31, 0x38CA5Cu);
    ctx->pc = 0x38CA58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38CA54u;
    // 0x38ca58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F680u, 0x38CA54u, 0x38CA5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38CA5Cu;
label_38ca5c:
    // 0x38ca5c: 0x9623000e  lhu         $v1, 0xE($s1)
    ctx->pc = 0x38ca5cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
label_38ca60:
    // 0x38ca60: 0x2662e880  addiu       $v0, $s3, -0x1780
    ctx->pc = 0x38ca60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294961280));
label_38ca64:
    // 0x38ca64: 0x8c45010c  lw          $a1, 0x10C($v0)
    ctx->pc = 0x38ca64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 268)));
label_38ca68:
    // 0x38ca68: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x38ca68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_38ca6c:
    // 0x38ca6c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x38ca6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_38ca70:
    // 0x38ca70: 0xa0f809  jalr        $a1
label_38ca74:
    if (ctx->pc == 0x38CA74u) {
        ctx->pc = 0x38CA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CA70u;
        // 0x38ca74: 0xa623000e  sh          $v1, 0xE($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38CA78u;
        goto label_38ca78;
    }
    ctx->pc = 0x38CA70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x38CA78u);
        ctx->pc = 0x38CA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CA70u;
        // 0x38ca74: 0xa623000e  sh          $v1, 0xE($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38CA70u, 0x38CA78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38CA78u;
label_38ca78:
    // 0x38ca78: 0x1000002d  b           . + 4 + (0x2D << 2)
label_38ca7c:
    if (ctx->pc == 0x38CA7Cu) {
        ctx->pc = 0x38CA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CA78u;
        // 0x38ca7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38CA80u;
        goto label_38ca80;
    }
    ctx->pc = 0x38CA78u;
    {
        const bool branch_taken_0x38ca78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38CA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CA78u;
        // 0x38ca7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ca78) {
            ctx->pc = 0x38CB30u;
            goto label_38cb30;
        }
    }
    ctx->pc = 0x38CA80u;
label_38ca80:
    // 0x38ca80: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x38ca80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_38ca84:
    // 0x38ca84: 0x1000ffa8  b           . + 4 + (-0x58 << 2)
label_38ca88:
    if (ctx->pc == 0x38CA88u) {
        ctx->pc = 0x38CA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CA84u;
        // 0x38ca88: 0xa622000e  sh          $v0, 0xE($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38CA8Cu;
        goto label_38ca8c;
    }
    ctx->pc = 0x38CA84u;
    {
        const bool branch_taken_0x38ca84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38CA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CA84u;
        // 0x38ca88: 0xa622000e  sh          $v0, 0xE($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ca84) {
            ctx->pc = 0x38C928u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38c928;
        }
    }
    ctx->pc = 0x38CA8Cu;
label_38ca8c:
    // 0x38ca8c: 0xc0e2d08  jal         func_38B420
label_38ca90:
    if (ctx->pc == 0x38CA90u) {
        ctx->pc = 0x38CA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CA8Cu;
        // 0x38ca90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38CA94u;
        goto label_38ca94;
    }
    ctx->pc = 0x38CA8Cu;
    SET_GPR_U32(ctx, 31, 0x38CA94u);
    ctx->pc = 0x38CA90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38CA8Cu;
    // 0x38ca90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38B420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38B420u, 0x38CA8Cu, 0x38CA94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38CA94u;
label_38ca94:
    // 0x38ca94: 0x14400026  bnez        $v0, . + 4 + (0x26 << 2)
label_38ca98:
    if (ctx->pc == 0x38CA98u) {
        ctx->pc = 0x38CA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CA94u;
        // 0x38ca98: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38CA9Cu;
        goto label_38ca9c;
    }
    ctx->pc = 0x38CA94u;
    {
        const bool branch_taken_0x38ca94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38CA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CA94u;
        // 0x38ca98: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ca94) {
            ctx->pc = 0x38CB30u;
            goto label_38cb30;
        }
    }
    ctx->pc = 0x38CA9Cu;
label_38ca9c:
    // 0x38ca9c: 0x8622000e  lh          $v0, 0xE($s1)
    ctx->pc = 0x38ca9cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
label_38caa0:
    // 0x38caa0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x38caa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_38caa4:
    // 0x38caa4: 0x1c40001f  bgtz        $v0, . + 4 + (0x1F << 2)
label_38caa8:
    if (ctx->pc == 0x38CAA8u) {
        ctx->pc = 0x38CAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CAA4u;
        // 0x38caa8: 0x9623000e  lhu         $v1, 0xE($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38CAACu;
        goto label_38caac;
    }
    ctx->pc = 0x38CAA4u;
    {
        const bool branch_taken_0x38caa4 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x38CAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CAA4u;
        // 0x38caa8: 0x9623000e  lhu         $v1, 0xE($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38caa4) {
            ctx->pc = 0x38CB24u;
            goto label_38cb24;
        }
    }
    ctx->pc = 0x38CAACu;
label_38caac:
    // 0x38caac: 0x8e240058  lw          $a0, 0x58($s1)
    ctx->pc = 0x38caacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_38cab0:
    // 0x38cab0: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_38cab4:
    if (ctx->pc == 0x38CAB4u) {
        ctx->pc = 0x38CAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CAB0u;
        // 0x38cab4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38CAB8u;
        goto label_38cab8;
    }
    ctx->pc = 0x38CAB0u;
    {
        const bool branch_taken_0x38cab0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x38cab0) {
            ctx->pc = 0x38CAB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38CAB0u;
            // 0x38cab4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38CAC4u;
            goto label_38cac4;
        }
    }
    ctx->pc = 0x38CAB8u;
label_38cab8:
    // 0x38cab8: 0xc104702  jal         func_411C08
label_38cabc:
    if (ctx->pc == 0x38CABCu) {
        ctx->pc = 0x38CAC0u;
        goto label_38cac0;
    }
    ctx->pc = 0x38CAB8u;
    SET_GPR_U32(ctx, 31, 0x38CAC0u);
    ctx->pc = 0x411C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x411C08u, 0x38CAB8u, 0x38CAC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38CAC0u;
label_38cac0:
    // 0x38cac0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x38cac0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_38cac4:
    // 0x38cac4: 0xc0e33ee  jal         func_38CFB8
label_38cac8:
    if (ctx->pc == 0x38CAC8u) {
        ctx->pc = 0x38CAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CAC4u;
        // 0x38cac8: 0x24050fff  addiu       $a1, $zero, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38CACCu;
        goto label_38cacc;
    }
    ctx->pc = 0x38CAC4u;
    SET_GPR_U32(ctx, 31, 0x38CACCu);
    ctx->pc = 0x38CAC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38CAC4u;
    // 0x38cac8: 0x24050fff  addiu       $a1, $zero, 0xFFF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CFB8u, 0x38CAC4u, 0x38CACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38CACCu;
label_38cacc:
    // 0x38cacc: 0x3c130062  lui         $s3, 0x62
    ctx->pc = 0x38caccu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)98 << 16));
label_38cad0:
    // 0x38cad0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x38cad0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_38cad4:
    // 0x38cad4: 0xc104ca6  jal         func_413298
label_38cad8:
    if (ctx->pc == 0x38CAD8u) {
        ctx->pc = 0x38CAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CAD4u;
        // 0x38cad8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38CADCu;
        goto label_38cadc;
    }
    ctx->pc = 0x38CAD4u;
    SET_GPR_U32(ctx, 31, 0x38CADCu);
    ctx->pc = 0x38CAD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38CAD4u;
    // 0x38cad8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x413298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413298u, 0x38CAD4u, 0x38CADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38CADCu;
label_38cadc:
    // 0x38cadc: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x38cadcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_38cae0:
    // 0x38cae0: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_38cae4:
    if (ctx->pc == 0x38CAE4u) {
        ctx->pc = 0x38CAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CAE0u;
        // 0x38cae4: 0x2662e880  addiu       $v0, $s3, -0x1780 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294961280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38CAE8u;
        goto label_38cae8;
    }
    ctx->pc = 0x38CAE0u;
    {
        const bool branch_taken_0x38cae0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x38CAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CAE0u;
        // 0x38cae4: 0x2662e880  addiu       $v0, $s3, -0x1780 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294961280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38cae0) {
            ctx->pc = 0x38CAF8u;
            goto label_38caf8;
        }
    }
    ctx->pc = 0x38CAE8u;
label_38cae8:
    // 0x38cae8: 0x8c43010c  lw          $v1, 0x10C($v0)
    ctx->pc = 0x38cae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 268)));
label_38caec:
    // 0x38caec: 0x60f809  jalr        $v1
label_38caf0:
    if (ctx->pc == 0x38CAF0u) {
        ctx->pc = 0x38CAF4u;
        goto label_38caf4;
    }
    ctx->pc = 0x38CAECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x38CAF4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38CAECu, 0x38CAF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38CAF4u;
label_38caf4:
    // 0x38caf4: 0xae20005c  sw          $zero, 0x5C($s1)
    ctx->pc = 0x38caf4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 0));
label_38caf8:
    // 0x38caf8: 0xc0e3da0  jal         func_38F680
label_38cafc:
    if (ctx->pc == 0x38CAFCu) {
        ctx->pc = 0x38CAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CAF8u;
        // 0x38cafc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38CB00u;
        goto label_38cb00;
    }
    ctx->pc = 0x38CAF8u;
    SET_GPR_U32(ctx, 31, 0x38CB00u);
    ctx->pc = 0x38CAFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38CAF8u;
    // 0x38cafc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F680u, 0x38CAF8u, 0x38CB00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38CB00u;
label_38cb00:
    // 0x38cb00: 0x9623000e  lhu         $v1, 0xE($s1)
    ctx->pc = 0x38cb00u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
label_38cb04:
    // 0x38cb04: 0x2662e880  addiu       $v0, $s3, -0x1780
    ctx->pc = 0x38cb04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294961280));
label_38cb08:
    // 0x38cb08: 0x8c45010c  lw          $a1, 0x10C($v0)
    ctx->pc = 0x38cb08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 268)));
label_38cb0c:
    // 0x38cb0c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x38cb0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_38cb10:
    // 0x38cb10: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x38cb10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_38cb14:
    // 0x38cb14: 0xa0f809  jalr        $a1
label_38cb18:
    if (ctx->pc == 0x38CB18u) {
        ctx->pc = 0x38CB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CB14u;
        // 0x38cb18: 0xa623000e  sh          $v1, 0xE($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38CB1Cu;
        goto label_38cb1c;
    }
    ctx->pc = 0x38CB14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x38CB1Cu);
        ctx->pc = 0x38CB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CB14u;
        // 0x38cb18: 0xa623000e  sh          $v1, 0xE($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38CB14u, 0x38CB1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38CB1Cu;
label_38cb1c:
    // 0x38cb1c: 0x10000004  b           . + 4 + (0x4 << 2)
label_38cb20:
    if (ctx->pc == 0x38CB20u) {
        ctx->pc = 0x38CB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CB1Cu;
        // 0x38cb20: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38CB24u;
        goto label_38cb24;
    }
    ctx->pc = 0x38CB1Cu;
    {
        const bool branch_taken_0x38cb1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38CB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CB1Cu;
        // 0x38cb20: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38cb1c) {
            ctx->pc = 0x38CB30u;
            goto label_38cb30;
        }
    }
    ctx->pc = 0x38CB24u;
label_38cb24:
    // 0x38cb24: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x38cb24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_38cb28:
    // 0x38cb28: 0x1000ff7f  b           . + 4 + (-0x81 << 2)
label_38cb2c:
    if (ctx->pc == 0x38CB2Cu) {
        ctx->pc = 0x38CB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CB28u;
        // 0x38cb2c: 0xa622000e  sh          $v0, 0xE($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38CB30u;
        goto label_38cb30;
    }
    ctx->pc = 0x38CB28u;
    {
        const bool branch_taken_0x38cb28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38CB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CB28u;
        // 0x38cb2c: 0xa622000e  sh          $v0, 0xE($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38cb28) {
            ctx->pc = 0x38C928u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38c928;
        }
    }
    ctx->pc = 0x38CB30u;
label_38cb30:
    // 0x38cb30: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x38cb30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_38cb34:
    // 0x38cb34: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x38cb34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_38cb38:
    // 0x38cb38: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x38cb38u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_38cb3c:
    // 0x38cb3c: 0x7bb300c0  lq          $s3, 0xC0($sp)
    ctx->pc = 0x38cb3cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_38cb40:
    // 0x38cb40: 0x7bb400b0  lq          $s4, 0xB0($sp)
    ctx->pc = 0x38cb40u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_38cb44:
    // 0x38cb44: 0x7bb500a0  lq          $s5, 0xA0($sp)
    ctx->pc = 0x38cb44u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_38cb48:
    // 0x38cb48: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x38cb48u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_38cb4c:
    // 0x38cb4c: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x38cb4cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_38cb50:
    // 0x38cb50: 0x7bbe0070  lq          $fp, 0x70($sp)
    ctx->pc = 0x38cb50u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_38cb54:
    // 0x38cb54: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x38cb54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_38cb58:
    // 0x38cb58: 0x3e00008  jr          $ra
label_38cb5c:
    if (ctx->pc == 0x38CB5Cu) {
        ctx->pc = 0x38CB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CB58u;
        // 0x38cb5c: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38CB60u;
        goto label_fallthrough_0x38cb58;
    }
    ctx->pc = 0x38CB58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38CB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CB58u;
        // 0x38cb5c: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38CB58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x38cb58:
    ctx->pc = 0x38CB60u;
}
