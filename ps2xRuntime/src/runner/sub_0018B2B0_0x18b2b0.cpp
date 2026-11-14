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

// Function: sub_0018B2B0
// Address: 0x18b2b0 - 0x18c0a0
void sub_0018B2B0_0x18b2b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018B2B0_0x18b2b0");
#endif

    switch (ctx->pc) {
        case 0x18b2b0u: goto label_18b2b0;
        case 0x18b2b4u: goto label_18b2b4;
        case 0x18b2b8u: goto label_18b2b8;
        case 0x18b2bcu: goto label_18b2bc;
        case 0x18b2c0u: goto label_18b2c0;
        case 0x18b2c4u: goto label_18b2c4;
        case 0x18b2c8u: goto label_18b2c8;
        case 0x18b2ccu: goto label_18b2cc;
        case 0x18b2d0u: goto label_18b2d0;
        case 0x18b2d4u: goto label_18b2d4;
        case 0x18b2d8u: goto label_18b2d8;
        case 0x18b2dcu: goto label_18b2dc;
        case 0x18b2e0u: goto label_18b2e0;
        case 0x18b2e4u: goto label_18b2e4;
        case 0x18b2e8u: goto label_18b2e8;
        case 0x18b2ecu: goto label_18b2ec;
        case 0x18b2f0u: goto label_18b2f0;
        case 0x18b2f4u: goto label_18b2f4;
        case 0x18b2f8u: goto label_18b2f8;
        case 0x18b2fcu: goto label_18b2fc;
        case 0x18b300u: goto label_18b300;
        case 0x18b304u: goto label_18b304;
        case 0x18b308u: goto label_18b308;
        case 0x18b30cu: goto label_18b30c;
        case 0x18b310u: goto label_18b310;
        case 0x18b314u: goto label_18b314;
        case 0x18b318u: goto label_18b318;
        case 0x18b31cu: goto label_18b31c;
        case 0x18b320u: goto label_18b320;
        case 0x18b324u: goto label_18b324;
        case 0x18b328u: goto label_18b328;
        case 0x18b32cu: goto label_18b32c;
        case 0x18b330u: goto label_18b330;
        case 0x18b334u: goto label_18b334;
        case 0x18b338u: goto label_18b338;
        case 0x18b33cu: goto label_18b33c;
        case 0x18b340u: goto label_18b340;
        case 0x18b344u: goto label_18b344;
        case 0x18b348u: goto label_18b348;
        case 0x18b34cu: goto label_18b34c;
        case 0x18b350u: goto label_18b350;
        case 0x18b354u: goto label_18b354;
        case 0x18b358u: goto label_18b358;
        case 0x18b35cu: goto label_18b35c;
        case 0x18b360u: goto label_18b360;
        case 0x18b364u: goto label_18b364;
        case 0x18b368u: goto label_18b368;
        case 0x18b36cu: goto label_18b36c;
        case 0x18b370u: goto label_18b370;
        case 0x18b374u: goto label_18b374;
        case 0x18b378u: goto label_18b378;
        case 0x18b37cu: goto label_18b37c;
        case 0x18b380u: goto label_18b380;
        case 0x18b384u: goto label_18b384;
        case 0x18b388u: goto label_18b388;
        case 0x18b38cu: goto label_18b38c;
        case 0x18b390u: goto label_18b390;
        case 0x18b394u: goto label_18b394;
        case 0x18b398u: goto label_18b398;
        case 0x18b39cu: goto label_18b39c;
        case 0x18b3a0u: goto label_18b3a0;
        case 0x18b3a4u: goto label_18b3a4;
        case 0x18b3a8u: goto label_18b3a8;
        case 0x18b3acu: goto label_18b3ac;
        case 0x18b3b0u: goto label_18b3b0;
        case 0x18b3b4u: goto label_18b3b4;
        case 0x18b3b8u: goto label_18b3b8;
        case 0x18b3bcu: goto label_18b3bc;
        case 0x18b3c0u: goto label_18b3c0;
        case 0x18b3c4u: goto label_18b3c4;
        case 0x18b3c8u: goto label_18b3c8;
        case 0x18b3ccu: goto label_18b3cc;
        case 0x18b3d0u: goto label_18b3d0;
        case 0x18b3d4u: goto label_18b3d4;
        case 0x18b3d8u: goto label_18b3d8;
        case 0x18b3dcu: goto label_18b3dc;
        case 0x18b3e0u: goto label_18b3e0;
        case 0x18b3e4u: goto label_18b3e4;
        case 0x18b3e8u: goto label_18b3e8;
        case 0x18b3ecu: goto label_18b3ec;
        case 0x18b3f0u: goto label_18b3f0;
        case 0x18b3f4u: goto label_18b3f4;
        case 0x18b3f8u: goto label_18b3f8;
        case 0x18b3fcu: goto label_18b3fc;
        case 0x18b400u: goto label_18b400;
        case 0x18b404u: goto label_18b404;
        case 0x18b408u: goto label_18b408;
        case 0x18b40cu: goto label_18b40c;
        case 0x18b410u: goto label_18b410;
        case 0x18b414u: goto label_18b414;
        case 0x18b418u: goto label_18b418;
        case 0x18b41cu: goto label_18b41c;
        case 0x18b420u: goto label_18b420;
        case 0x18b424u: goto label_18b424;
        case 0x18b428u: goto label_18b428;
        case 0x18b42cu: goto label_18b42c;
        case 0x18b430u: goto label_18b430;
        case 0x18b434u: goto label_18b434;
        case 0x18b438u: goto label_18b438;
        case 0x18b43cu: goto label_18b43c;
        case 0x18b440u: goto label_18b440;
        case 0x18b444u: goto label_18b444;
        case 0x18b448u: goto label_18b448;
        case 0x18b44cu: goto label_18b44c;
        case 0x18b450u: goto label_18b450;
        case 0x18b454u: goto label_18b454;
        case 0x18b458u: goto label_18b458;
        case 0x18b45cu: goto label_18b45c;
        case 0x18b460u: goto label_18b460;
        case 0x18b464u: goto label_18b464;
        case 0x18b468u: goto label_18b468;
        case 0x18b46cu: goto label_18b46c;
        case 0x18b470u: goto label_18b470;
        case 0x18b474u: goto label_18b474;
        case 0x18b478u: goto label_18b478;
        case 0x18b47cu: goto label_18b47c;
        case 0x18b480u: goto label_18b480;
        case 0x18b484u: goto label_18b484;
        case 0x18b488u: goto label_18b488;
        case 0x18b48cu: goto label_18b48c;
        case 0x18b490u: goto label_18b490;
        case 0x18b494u: goto label_18b494;
        case 0x18b498u: goto label_18b498;
        case 0x18b49cu: goto label_18b49c;
        case 0x18b4a0u: goto label_18b4a0;
        case 0x18b4a4u: goto label_18b4a4;
        case 0x18b4a8u: goto label_18b4a8;
        case 0x18b4acu: goto label_18b4ac;
        case 0x18b4b0u: goto label_18b4b0;
        case 0x18b4b4u: goto label_18b4b4;
        case 0x18b4b8u: goto label_18b4b8;
        case 0x18b4bcu: goto label_18b4bc;
        case 0x18b4c0u: goto label_18b4c0;
        case 0x18b4c4u: goto label_18b4c4;
        case 0x18b4c8u: goto label_18b4c8;
        case 0x18b4ccu: goto label_18b4cc;
        case 0x18b4d0u: goto label_18b4d0;
        case 0x18b4d4u: goto label_18b4d4;
        case 0x18b4d8u: goto label_18b4d8;
        case 0x18b4dcu: goto label_18b4dc;
        case 0x18b4e0u: goto label_18b4e0;
        case 0x18b4e4u: goto label_18b4e4;
        case 0x18b4e8u: goto label_18b4e8;
        case 0x18b4ecu: goto label_18b4ec;
        case 0x18b4f0u: goto label_18b4f0;
        case 0x18b4f4u: goto label_18b4f4;
        case 0x18b4f8u: goto label_18b4f8;
        case 0x18b4fcu: goto label_18b4fc;
        case 0x18b500u: goto label_18b500;
        case 0x18b504u: goto label_18b504;
        case 0x18b508u: goto label_18b508;
        case 0x18b50cu: goto label_18b50c;
        case 0x18b510u: goto label_18b510;
        case 0x18b514u: goto label_18b514;
        case 0x18b518u: goto label_18b518;
        case 0x18b51cu: goto label_18b51c;
        case 0x18b520u: goto label_18b520;
        case 0x18b524u: goto label_18b524;
        case 0x18b528u: goto label_18b528;
        case 0x18b52cu: goto label_18b52c;
        case 0x18b530u: goto label_18b530;
        case 0x18b534u: goto label_18b534;
        case 0x18b538u: goto label_18b538;
        case 0x18b53cu: goto label_18b53c;
        case 0x18b540u: goto label_18b540;
        case 0x18b544u: goto label_18b544;
        case 0x18b548u: goto label_18b548;
        case 0x18b54cu: goto label_18b54c;
        case 0x18b550u: goto label_18b550;
        case 0x18b554u: goto label_18b554;
        case 0x18b558u: goto label_18b558;
        case 0x18b55cu: goto label_18b55c;
        case 0x18b560u: goto label_18b560;
        case 0x18b564u: goto label_18b564;
        case 0x18b568u: goto label_18b568;
        case 0x18b56cu: goto label_18b56c;
        case 0x18b570u: goto label_18b570;
        case 0x18b574u: goto label_18b574;
        case 0x18b578u: goto label_18b578;
        case 0x18b57cu: goto label_18b57c;
        case 0x18b580u: goto label_18b580;
        case 0x18b584u: goto label_18b584;
        case 0x18b588u: goto label_18b588;
        case 0x18b58cu: goto label_18b58c;
        case 0x18b590u: goto label_18b590;
        case 0x18b594u: goto label_18b594;
        case 0x18b598u: goto label_18b598;
        case 0x18b59cu: goto label_18b59c;
        case 0x18b5a0u: goto label_18b5a0;
        case 0x18b5a4u: goto label_18b5a4;
        case 0x18b5a8u: goto label_18b5a8;
        case 0x18b5acu: goto label_18b5ac;
        case 0x18b5b0u: goto label_18b5b0;
        case 0x18b5b4u: goto label_18b5b4;
        case 0x18b5b8u: goto label_18b5b8;
        case 0x18b5bcu: goto label_18b5bc;
        case 0x18b5c0u: goto label_18b5c0;
        case 0x18b5c4u: goto label_18b5c4;
        case 0x18b5c8u: goto label_18b5c8;
        case 0x18b5ccu: goto label_18b5cc;
        case 0x18b5d0u: goto label_18b5d0;
        case 0x18b5d4u: goto label_18b5d4;
        case 0x18b5d8u: goto label_18b5d8;
        case 0x18b5dcu: goto label_18b5dc;
        case 0x18b5e0u: goto label_18b5e0;
        case 0x18b5e4u: goto label_18b5e4;
        case 0x18b5e8u: goto label_18b5e8;
        case 0x18b5ecu: goto label_18b5ec;
        case 0x18b5f0u: goto label_18b5f0;
        case 0x18b5f4u: goto label_18b5f4;
        case 0x18b5f8u: goto label_18b5f8;
        case 0x18b5fcu: goto label_18b5fc;
        case 0x18b600u: goto label_18b600;
        case 0x18b604u: goto label_18b604;
        case 0x18b608u: goto label_18b608;
        case 0x18b60cu: goto label_18b60c;
        case 0x18b610u: goto label_18b610;
        case 0x18b614u: goto label_18b614;
        case 0x18b618u: goto label_18b618;
        case 0x18b61cu: goto label_18b61c;
        case 0x18b620u: goto label_18b620;
        case 0x18b624u: goto label_18b624;
        case 0x18b628u: goto label_18b628;
        case 0x18b62cu: goto label_18b62c;
        case 0x18b630u: goto label_18b630;
        case 0x18b634u: goto label_18b634;
        case 0x18b638u: goto label_18b638;
        case 0x18b63cu: goto label_18b63c;
        case 0x18b640u: goto label_18b640;
        case 0x18b644u: goto label_18b644;
        case 0x18b648u: goto label_18b648;
        case 0x18b64cu: goto label_18b64c;
        case 0x18b650u: goto label_18b650;
        case 0x18b654u: goto label_18b654;
        case 0x18b658u: goto label_18b658;
        case 0x18b65cu: goto label_18b65c;
        case 0x18b660u: goto label_18b660;
        case 0x18b664u: goto label_18b664;
        case 0x18b668u: goto label_18b668;
        case 0x18b66cu: goto label_18b66c;
        case 0x18b670u: goto label_18b670;
        case 0x18b674u: goto label_18b674;
        case 0x18b678u: goto label_18b678;
        case 0x18b67cu: goto label_18b67c;
        case 0x18b680u: goto label_18b680;
        case 0x18b684u: goto label_18b684;
        case 0x18b688u: goto label_18b688;
        case 0x18b68cu: goto label_18b68c;
        case 0x18b690u: goto label_18b690;
        case 0x18b694u: goto label_18b694;
        case 0x18b698u: goto label_18b698;
        case 0x18b69cu: goto label_18b69c;
        case 0x18b6a0u: goto label_18b6a0;
        case 0x18b6a4u: goto label_18b6a4;
        case 0x18b6a8u: goto label_18b6a8;
        case 0x18b6acu: goto label_18b6ac;
        case 0x18b6b0u: goto label_18b6b0;
        case 0x18b6b4u: goto label_18b6b4;
        case 0x18b6b8u: goto label_18b6b8;
        case 0x18b6bcu: goto label_18b6bc;
        case 0x18b6c0u: goto label_18b6c0;
        case 0x18b6c4u: goto label_18b6c4;
        case 0x18b6c8u: goto label_18b6c8;
        case 0x18b6ccu: goto label_18b6cc;
        case 0x18b6d0u: goto label_18b6d0;
        case 0x18b6d4u: goto label_18b6d4;
        case 0x18b6d8u: goto label_18b6d8;
        case 0x18b6dcu: goto label_18b6dc;
        case 0x18b6e0u: goto label_18b6e0;
        case 0x18b6e4u: goto label_18b6e4;
        case 0x18b6e8u: goto label_18b6e8;
        case 0x18b6ecu: goto label_18b6ec;
        case 0x18b6f0u: goto label_18b6f0;
        case 0x18b6f4u: goto label_18b6f4;
        case 0x18b6f8u: goto label_18b6f8;
        case 0x18b6fcu: goto label_18b6fc;
        case 0x18b700u: goto label_18b700;
        case 0x18b704u: goto label_18b704;
        case 0x18b708u: goto label_18b708;
        case 0x18b70cu: goto label_18b70c;
        case 0x18b710u: goto label_18b710;
        case 0x18b714u: goto label_18b714;
        case 0x18b718u: goto label_18b718;
        case 0x18b71cu: goto label_18b71c;
        case 0x18b720u: goto label_18b720;
        case 0x18b724u: goto label_18b724;
        case 0x18b728u: goto label_18b728;
        case 0x18b72cu: goto label_18b72c;
        case 0x18b730u: goto label_18b730;
        case 0x18b734u: goto label_18b734;
        case 0x18b738u: goto label_18b738;
        case 0x18b73cu: goto label_18b73c;
        case 0x18b740u: goto label_18b740;
        case 0x18b744u: goto label_18b744;
        case 0x18b748u: goto label_18b748;
        case 0x18b74cu: goto label_18b74c;
        case 0x18b750u: goto label_18b750;
        case 0x18b754u: goto label_18b754;
        case 0x18b758u: goto label_18b758;
        case 0x18b75cu: goto label_18b75c;
        case 0x18b760u: goto label_18b760;
        case 0x18b764u: goto label_18b764;
        case 0x18b768u: goto label_18b768;
        case 0x18b76cu: goto label_18b76c;
        case 0x18b770u: goto label_18b770;
        case 0x18b774u: goto label_18b774;
        case 0x18b778u: goto label_18b778;
        case 0x18b77cu: goto label_18b77c;
        case 0x18b780u: goto label_18b780;
        case 0x18b784u: goto label_18b784;
        case 0x18b788u: goto label_18b788;
        case 0x18b78cu: goto label_18b78c;
        case 0x18b790u: goto label_18b790;
        case 0x18b794u: goto label_18b794;
        case 0x18b798u: goto label_18b798;
        case 0x18b79cu: goto label_18b79c;
        case 0x18b7a0u: goto label_18b7a0;
        case 0x18b7a4u: goto label_18b7a4;
        case 0x18b7a8u: goto label_18b7a8;
        case 0x18b7acu: goto label_18b7ac;
        case 0x18b7b0u: goto label_18b7b0;
        case 0x18b7b4u: goto label_18b7b4;
        case 0x18b7b8u: goto label_18b7b8;
        case 0x18b7bcu: goto label_18b7bc;
        case 0x18b7c0u: goto label_18b7c0;
        case 0x18b7c4u: goto label_18b7c4;
        case 0x18b7c8u: goto label_18b7c8;
        case 0x18b7ccu: goto label_18b7cc;
        case 0x18b7d0u: goto label_18b7d0;
        case 0x18b7d4u: goto label_18b7d4;
        case 0x18b7d8u: goto label_18b7d8;
        case 0x18b7dcu: goto label_18b7dc;
        case 0x18b7e0u: goto label_18b7e0;
        case 0x18b7e4u: goto label_18b7e4;
        case 0x18b7e8u: goto label_18b7e8;
        case 0x18b7ecu: goto label_18b7ec;
        case 0x18b7f0u: goto label_18b7f0;
        case 0x18b7f4u: goto label_18b7f4;
        case 0x18b7f8u: goto label_18b7f8;
        case 0x18b7fcu: goto label_18b7fc;
        case 0x18b800u: goto label_18b800;
        case 0x18b804u: goto label_18b804;
        case 0x18b808u: goto label_18b808;
        case 0x18b80cu: goto label_18b80c;
        case 0x18b810u: goto label_18b810;
        case 0x18b814u: goto label_18b814;
        case 0x18b818u: goto label_18b818;
        case 0x18b81cu: goto label_18b81c;
        case 0x18b820u: goto label_18b820;
        case 0x18b824u: goto label_18b824;
        case 0x18b828u: goto label_18b828;
        case 0x18b82cu: goto label_18b82c;
        case 0x18b830u: goto label_18b830;
        case 0x18b834u: goto label_18b834;
        case 0x18b838u: goto label_18b838;
        case 0x18b83cu: goto label_18b83c;
        case 0x18b840u: goto label_18b840;
        case 0x18b844u: goto label_18b844;
        case 0x18b848u: goto label_18b848;
        case 0x18b84cu: goto label_18b84c;
        case 0x18b850u: goto label_18b850;
        case 0x18b854u: goto label_18b854;
        case 0x18b858u: goto label_18b858;
        case 0x18b85cu: goto label_18b85c;
        case 0x18b860u: goto label_18b860;
        case 0x18b864u: goto label_18b864;
        case 0x18b868u: goto label_18b868;
        case 0x18b86cu: goto label_18b86c;
        case 0x18b870u: goto label_18b870;
        case 0x18b874u: goto label_18b874;
        case 0x18b878u: goto label_18b878;
        case 0x18b87cu: goto label_18b87c;
        case 0x18b880u: goto label_18b880;
        case 0x18b884u: goto label_18b884;
        case 0x18b888u: goto label_18b888;
        case 0x18b88cu: goto label_18b88c;
        case 0x18b890u: goto label_18b890;
        case 0x18b894u: goto label_18b894;
        case 0x18b898u: goto label_18b898;
        case 0x18b89cu: goto label_18b89c;
        case 0x18b8a0u: goto label_18b8a0;
        case 0x18b8a4u: goto label_18b8a4;
        case 0x18b8a8u: goto label_18b8a8;
        case 0x18b8acu: goto label_18b8ac;
        case 0x18b8b0u: goto label_18b8b0;
        case 0x18b8b4u: goto label_18b8b4;
        case 0x18b8b8u: goto label_18b8b8;
        case 0x18b8bcu: goto label_18b8bc;
        case 0x18b8c0u: goto label_18b8c0;
        case 0x18b8c4u: goto label_18b8c4;
        case 0x18b8c8u: goto label_18b8c8;
        case 0x18b8ccu: goto label_18b8cc;
        case 0x18b8d0u: goto label_18b8d0;
        case 0x18b8d4u: goto label_18b8d4;
        case 0x18b8d8u: goto label_18b8d8;
        case 0x18b8dcu: goto label_18b8dc;
        case 0x18b8e0u: goto label_18b8e0;
        case 0x18b8e4u: goto label_18b8e4;
        case 0x18b8e8u: goto label_18b8e8;
        case 0x18b8ecu: goto label_18b8ec;
        case 0x18b8f0u: goto label_18b8f0;
        case 0x18b8f4u: goto label_18b8f4;
        case 0x18b8f8u: goto label_18b8f8;
        case 0x18b8fcu: goto label_18b8fc;
        case 0x18b900u: goto label_18b900;
        case 0x18b904u: goto label_18b904;
        case 0x18b908u: goto label_18b908;
        case 0x18b90cu: goto label_18b90c;
        case 0x18b910u: goto label_18b910;
        case 0x18b914u: goto label_18b914;
        case 0x18b918u: goto label_18b918;
        case 0x18b91cu: goto label_18b91c;
        case 0x18b920u: goto label_18b920;
        case 0x18b924u: goto label_18b924;
        case 0x18b928u: goto label_18b928;
        case 0x18b92cu: goto label_18b92c;
        case 0x18b930u: goto label_18b930;
        case 0x18b934u: goto label_18b934;
        case 0x18b938u: goto label_18b938;
        case 0x18b93cu: goto label_18b93c;
        case 0x18b940u: goto label_18b940;
        case 0x18b944u: goto label_18b944;
        case 0x18b948u: goto label_18b948;
        case 0x18b94cu: goto label_18b94c;
        case 0x18b950u: goto label_18b950;
        case 0x18b954u: goto label_18b954;
        case 0x18b958u: goto label_18b958;
        case 0x18b95cu: goto label_18b95c;
        case 0x18b960u: goto label_18b960;
        case 0x18b964u: goto label_18b964;
        case 0x18b968u: goto label_18b968;
        case 0x18b96cu: goto label_18b96c;
        case 0x18b970u: goto label_18b970;
        case 0x18b974u: goto label_18b974;
        case 0x18b978u: goto label_18b978;
        case 0x18b97cu: goto label_18b97c;
        case 0x18b980u: goto label_18b980;
        case 0x18b984u: goto label_18b984;
        case 0x18b988u: goto label_18b988;
        case 0x18b98cu: goto label_18b98c;
        case 0x18b990u: goto label_18b990;
        case 0x18b994u: goto label_18b994;
        case 0x18b998u: goto label_18b998;
        case 0x18b99cu: goto label_18b99c;
        case 0x18b9a0u: goto label_18b9a0;
        case 0x18b9a4u: goto label_18b9a4;
        case 0x18b9a8u: goto label_18b9a8;
        case 0x18b9acu: goto label_18b9ac;
        case 0x18b9b0u: goto label_18b9b0;
        case 0x18b9b4u: goto label_18b9b4;
        case 0x18b9b8u: goto label_18b9b8;
        case 0x18b9bcu: goto label_18b9bc;
        case 0x18b9c0u: goto label_18b9c0;
        case 0x18b9c4u: goto label_18b9c4;
        case 0x18b9c8u: goto label_18b9c8;
        case 0x18b9ccu: goto label_18b9cc;
        case 0x18b9d0u: goto label_18b9d0;
        case 0x18b9d4u: goto label_18b9d4;
        case 0x18b9d8u: goto label_18b9d8;
        case 0x18b9dcu: goto label_18b9dc;
        case 0x18b9e0u: goto label_18b9e0;
        case 0x18b9e4u: goto label_18b9e4;
        case 0x18b9e8u: goto label_18b9e8;
        case 0x18b9ecu: goto label_18b9ec;
        case 0x18b9f0u: goto label_18b9f0;
        case 0x18b9f4u: goto label_18b9f4;
        case 0x18b9f8u: goto label_18b9f8;
        case 0x18b9fcu: goto label_18b9fc;
        case 0x18ba00u: goto label_18ba00;
        case 0x18ba04u: goto label_18ba04;
        case 0x18ba08u: goto label_18ba08;
        case 0x18ba0cu: goto label_18ba0c;
        case 0x18ba10u: goto label_18ba10;
        case 0x18ba14u: goto label_18ba14;
        case 0x18ba18u: goto label_18ba18;
        case 0x18ba1cu: goto label_18ba1c;
        case 0x18ba20u: goto label_18ba20;
        case 0x18ba24u: goto label_18ba24;
        case 0x18ba28u: goto label_18ba28;
        case 0x18ba2cu: goto label_18ba2c;
        case 0x18ba30u: goto label_18ba30;
        case 0x18ba34u: goto label_18ba34;
        case 0x18ba38u: goto label_18ba38;
        case 0x18ba3cu: goto label_18ba3c;
        case 0x18ba40u: goto label_18ba40;
        case 0x18ba44u: goto label_18ba44;
        case 0x18ba48u: goto label_18ba48;
        case 0x18ba4cu: goto label_18ba4c;
        case 0x18ba50u: goto label_18ba50;
        case 0x18ba54u: goto label_18ba54;
        case 0x18ba58u: goto label_18ba58;
        case 0x18ba5cu: goto label_18ba5c;
        case 0x18ba60u: goto label_18ba60;
        case 0x18ba64u: goto label_18ba64;
        case 0x18ba68u: goto label_18ba68;
        case 0x18ba6cu: goto label_18ba6c;
        case 0x18ba70u: goto label_18ba70;
        case 0x18ba74u: goto label_18ba74;
        case 0x18ba78u: goto label_18ba78;
        case 0x18ba7cu: goto label_18ba7c;
        case 0x18ba80u: goto label_18ba80;
        case 0x18ba84u: goto label_18ba84;
        case 0x18ba88u: goto label_18ba88;
        case 0x18ba8cu: goto label_18ba8c;
        case 0x18ba90u: goto label_18ba90;
        case 0x18ba94u: goto label_18ba94;
        case 0x18ba98u: goto label_18ba98;
        case 0x18ba9cu: goto label_18ba9c;
        case 0x18baa0u: goto label_18baa0;
        case 0x18baa4u: goto label_18baa4;
        case 0x18baa8u: goto label_18baa8;
        case 0x18baacu: goto label_18baac;
        case 0x18bab0u: goto label_18bab0;
        case 0x18bab4u: goto label_18bab4;
        case 0x18bab8u: goto label_18bab8;
        case 0x18babcu: goto label_18babc;
        case 0x18bac0u: goto label_18bac0;
        case 0x18bac4u: goto label_18bac4;
        case 0x18bac8u: goto label_18bac8;
        case 0x18baccu: goto label_18bacc;
        case 0x18bad0u: goto label_18bad0;
        case 0x18bad4u: goto label_18bad4;
        case 0x18bad8u: goto label_18bad8;
        case 0x18badcu: goto label_18badc;
        case 0x18bae0u: goto label_18bae0;
        case 0x18bae4u: goto label_18bae4;
        case 0x18bae8u: goto label_18bae8;
        case 0x18baecu: goto label_18baec;
        case 0x18baf0u: goto label_18baf0;
        case 0x18baf4u: goto label_18baf4;
        case 0x18baf8u: goto label_18baf8;
        case 0x18bafcu: goto label_18bafc;
        case 0x18bb00u: goto label_18bb00;
        case 0x18bb04u: goto label_18bb04;
        case 0x18bb08u: goto label_18bb08;
        case 0x18bb0cu: goto label_18bb0c;
        case 0x18bb10u: goto label_18bb10;
        case 0x18bb14u: goto label_18bb14;
        case 0x18bb18u: goto label_18bb18;
        case 0x18bb1cu: goto label_18bb1c;
        case 0x18bb20u: goto label_18bb20;
        case 0x18bb24u: goto label_18bb24;
        case 0x18bb28u: goto label_18bb28;
        case 0x18bb2cu: goto label_18bb2c;
        case 0x18bb30u: goto label_18bb30;
        case 0x18bb34u: goto label_18bb34;
        case 0x18bb38u: goto label_18bb38;
        case 0x18bb3cu: goto label_18bb3c;
        case 0x18bb40u: goto label_18bb40;
        case 0x18bb44u: goto label_18bb44;
        case 0x18bb48u: goto label_18bb48;
        case 0x18bb4cu: goto label_18bb4c;
        case 0x18bb50u: goto label_18bb50;
        case 0x18bb54u: goto label_18bb54;
        case 0x18bb58u: goto label_18bb58;
        case 0x18bb5cu: goto label_18bb5c;
        case 0x18bb60u: goto label_18bb60;
        case 0x18bb64u: goto label_18bb64;
        case 0x18bb68u: goto label_18bb68;
        case 0x18bb6cu: goto label_18bb6c;
        case 0x18bb70u: goto label_18bb70;
        case 0x18bb74u: goto label_18bb74;
        case 0x18bb78u: goto label_18bb78;
        case 0x18bb7cu: goto label_18bb7c;
        case 0x18bb80u: goto label_18bb80;
        case 0x18bb84u: goto label_18bb84;
        case 0x18bb88u: goto label_18bb88;
        case 0x18bb8cu: goto label_18bb8c;
        case 0x18bb90u: goto label_18bb90;
        case 0x18bb94u: goto label_18bb94;
        case 0x18bb98u: goto label_18bb98;
        case 0x18bb9cu: goto label_18bb9c;
        case 0x18bba0u: goto label_18bba0;
        case 0x18bba4u: goto label_18bba4;
        case 0x18bba8u: goto label_18bba8;
        case 0x18bbacu: goto label_18bbac;
        case 0x18bbb0u: goto label_18bbb0;
        case 0x18bbb4u: goto label_18bbb4;
        case 0x18bbb8u: goto label_18bbb8;
        case 0x18bbbcu: goto label_18bbbc;
        case 0x18bbc0u: goto label_18bbc0;
        case 0x18bbc4u: goto label_18bbc4;
        case 0x18bbc8u: goto label_18bbc8;
        case 0x18bbccu: goto label_18bbcc;
        case 0x18bbd0u: goto label_18bbd0;
        case 0x18bbd4u: goto label_18bbd4;
        case 0x18bbd8u: goto label_18bbd8;
        case 0x18bbdcu: goto label_18bbdc;
        case 0x18bbe0u: goto label_18bbe0;
        case 0x18bbe4u: goto label_18bbe4;
        case 0x18bbe8u: goto label_18bbe8;
        case 0x18bbecu: goto label_18bbec;
        case 0x18bbf0u: goto label_18bbf0;
        case 0x18bbf4u: goto label_18bbf4;
        case 0x18bbf8u: goto label_18bbf8;
        case 0x18bbfcu: goto label_18bbfc;
        case 0x18bc00u: goto label_18bc00;
        case 0x18bc04u: goto label_18bc04;
        case 0x18bc08u: goto label_18bc08;
        case 0x18bc0cu: goto label_18bc0c;
        case 0x18bc10u: goto label_18bc10;
        case 0x18bc14u: goto label_18bc14;
        case 0x18bc18u: goto label_18bc18;
        case 0x18bc1cu: goto label_18bc1c;
        case 0x18bc20u: goto label_18bc20;
        case 0x18bc24u: goto label_18bc24;
        case 0x18bc28u: goto label_18bc28;
        case 0x18bc2cu: goto label_18bc2c;
        case 0x18bc30u: goto label_18bc30;
        case 0x18bc34u: goto label_18bc34;
        case 0x18bc38u: goto label_18bc38;
        case 0x18bc3cu: goto label_18bc3c;
        case 0x18bc40u: goto label_18bc40;
        case 0x18bc44u: goto label_18bc44;
        case 0x18bc48u: goto label_18bc48;
        case 0x18bc4cu: goto label_18bc4c;
        case 0x18bc50u: goto label_18bc50;
        case 0x18bc54u: goto label_18bc54;
        case 0x18bc58u: goto label_18bc58;
        case 0x18bc5cu: goto label_18bc5c;
        case 0x18bc60u: goto label_18bc60;
        case 0x18bc64u: goto label_18bc64;
        case 0x18bc68u: goto label_18bc68;
        case 0x18bc6cu: goto label_18bc6c;
        case 0x18bc70u: goto label_18bc70;
        case 0x18bc74u: goto label_18bc74;
        case 0x18bc78u: goto label_18bc78;
        case 0x18bc7cu: goto label_18bc7c;
        case 0x18bc80u: goto label_18bc80;
        case 0x18bc84u: goto label_18bc84;
        case 0x18bc88u: goto label_18bc88;
        case 0x18bc8cu: goto label_18bc8c;
        case 0x18bc90u: goto label_18bc90;
        case 0x18bc94u: goto label_18bc94;
        case 0x18bc98u: goto label_18bc98;
        case 0x18bc9cu: goto label_18bc9c;
        case 0x18bca0u: goto label_18bca0;
        case 0x18bca4u: goto label_18bca4;
        case 0x18bca8u: goto label_18bca8;
        case 0x18bcacu: goto label_18bcac;
        case 0x18bcb0u: goto label_18bcb0;
        case 0x18bcb4u: goto label_18bcb4;
        case 0x18bcb8u: goto label_18bcb8;
        case 0x18bcbcu: goto label_18bcbc;
        case 0x18bcc0u: goto label_18bcc0;
        case 0x18bcc4u: goto label_18bcc4;
        case 0x18bcc8u: goto label_18bcc8;
        case 0x18bcccu: goto label_18bccc;
        case 0x18bcd0u: goto label_18bcd0;
        case 0x18bcd4u: goto label_18bcd4;
        case 0x18bcd8u: goto label_18bcd8;
        case 0x18bcdcu: goto label_18bcdc;
        case 0x18bce0u: goto label_18bce0;
        case 0x18bce4u: goto label_18bce4;
        case 0x18bce8u: goto label_18bce8;
        case 0x18bcecu: goto label_18bcec;
        case 0x18bcf0u: goto label_18bcf0;
        case 0x18bcf4u: goto label_18bcf4;
        case 0x18bcf8u: goto label_18bcf8;
        case 0x18bcfcu: goto label_18bcfc;
        case 0x18bd00u: goto label_18bd00;
        case 0x18bd04u: goto label_18bd04;
        case 0x18bd08u: goto label_18bd08;
        case 0x18bd0cu: goto label_18bd0c;
        case 0x18bd10u: goto label_18bd10;
        case 0x18bd14u: goto label_18bd14;
        case 0x18bd18u: goto label_18bd18;
        case 0x18bd1cu: goto label_18bd1c;
        case 0x18bd20u: goto label_18bd20;
        case 0x18bd24u: goto label_18bd24;
        case 0x18bd28u: goto label_18bd28;
        case 0x18bd2cu: goto label_18bd2c;
        case 0x18bd30u: goto label_18bd30;
        case 0x18bd34u: goto label_18bd34;
        case 0x18bd38u: goto label_18bd38;
        case 0x18bd3cu: goto label_18bd3c;
        case 0x18bd40u: goto label_18bd40;
        case 0x18bd44u: goto label_18bd44;
        case 0x18bd48u: goto label_18bd48;
        case 0x18bd4cu: goto label_18bd4c;
        case 0x18bd50u: goto label_18bd50;
        case 0x18bd54u: goto label_18bd54;
        case 0x18bd58u: goto label_18bd58;
        case 0x18bd5cu: goto label_18bd5c;
        case 0x18bd60u: goto label_18bd60;
        case 0x18bd64u: goto label_18bd64;
        case 0x18bd68u: goto label_18bd68;
        case 0x18bd6cu: goto label_18bd6c;
        case 0x18bd70u: goto label_18bd70;
        case 0x18bd74u: goto label_18bd74;
        case 0x18bd78u: goto label_18bd78;
        case 0x18bd7cu: goto label_18bd7c;
        case 0x18bd80u: goto label_18bd80;
        case 0x18bd84u: goto label_18bd84;
        case 0x18bd88u: goto label_18bd88;
        case 0x18bd8cu: goto label_18bd8c;
        case 0x18bd90u: goto label_18bd90;
        case 0x18bd94u: goto label_18bd94;
        case 0x18bd98u: goto label_18bd98;
        case 0x18bd9cu: goto label_18bd9c;
        case 0x18bda0u: goto label_18bda0;
        case 0x18bda4u: goto label_18bda4;
        case 0x18bda8u: goto label_18bda8;
        case 0x18bdacu: goto label_18bdac;
        case 0x18bdb0u: goto label_18bdb0;
        case 0x18bdb4u: goto label_18bdb4;
        case 0x18bdb8u: goto label_18bdb8;
        case 0x18bdbcu: goto label_18bdbc;
        case 0x18bdc0u: goto label_18bdc0;
        case 0x18bdc4u: goto label_18bdc4;
        case 0x18bdc8u: goto label_18bdc8;
        case 0x18bdccu: goto label_18bdcc;
        case 0x18bdd0u: goto label_18bdd0;
        case 0x18bdd4u: goto label_18bdd4;
        case 0x18bdd8u: goto label_18bdd8;
        case 0x18bddcu: goto label_18bddc;
        case 0x18bde0u: goto label_18bde0;
        case 0x18bde4u: goto label_18bde4;
        case 0x18bde8u: goto label_18bde8;
        case 0x18bdecu: goto label_18bdec;
        case 0x18bdf0u: goto label_18bdf0;
        case 0x18bdf4u: goto label_18bdf4;
        case 0x18bdf8u: goto label_18bdf8;
        case 0x18bdfcu: goto label_18bdfc;
        case 0x18be00u: goto label_18be00;
        case 0x18be04u: goto label_18be04;
        case 0x18be08u: goto label_18be08;
        case 0x18be0cu: goto label_18be0c;
        case 0x18be10u: goto label_18be10;
        case 0x18be14u: goto label_18be14;
        case 0x18be18u: goto label_18be18;
        case 0x18be1cu: goto label_18be1c;
        case 0x18be20u: goto label_18be20;
        case 0x18be24u: goto label_18be24;
        case 0x18be28u: goto label_18be28;
        case 0x18be2cu: goto label_18be2c;
        case 0x18be30u: goto label_18be30;
        case 0x18be34u: goto label_18be34;
        case 0x18be38u: goto label_18be38;
        case 0x18be3cu: goto label_18be3c;
        case 0x18be40u: goto label_18be40;
        case 0x18be44u: goto label_18be44;
        case 0x18be48u: goto label_18be48;
        case 0x18be4cu: goto label_18be4c;
        case 0x18be50u: goto label_18be50;
        case 0x18be54u: goto label_18be54;
        case 0x18be58u: goto label_18be58;
        case 0x18be5cu: goto label_18be5c;
        case 0x18be60u: goto label_18be60;
        case 0x18be64u: goto label_18be64;
        case 0x18be68u: goto label_18be68;
        case 0x18be6cu: goto label_18be6c;
        case 0x18be70u: goto label_18be70;
        case 0x18be74u: goto label_18be74;
        case 0x18be78u: goto label_18be78;
        case 0x18be7cu: goto label_18be7c;
        case 0x18be80u: goto label_18be80;
        case 0x18be84u: goto label_18be84;
        case 0x18be88u: goto label_18be88;
        case 0x18be8cu: goto label_18be8c;
        case 0x18be90u: goto label_18be90;
        case 0x18be94u: goto label_18be94;
        case 0x18be98u: goto label_18be98;
        case 0x18be9cu: goto label_18be9c;
        case 0x18bea0u: goto label_18bea0;
        case 0x18bea4u: goto label_18bea4;
        case 0x18bea8u: goto label_18bea8;
        case 0x18beacu: goto label_18beac;
        case 0x18beb0u: goto label_18beb0;
        case 0x18beb4u: goto label_18beb4;
        case 0x18beb8u: goto label_18beb8;
        case 0x18bebcu: goto label_18bebc;
        case 0x18bec0u: goto label_18bec0;
        case 0x18bec4u: goto label_18bec4;
        case 0x18bec8u: goto label_18bec8;
        case 0x18beccu: goto label_18becc;
        case 0x18bed0u: goto label_18bed0;
        case 0x18bed4u: goto label_18bed4;
        case 0x18bed8u: goto label_18bed8;
        case 0x18bedcu: goto label_18bedc;
        case 0x18bee0u: goto label_18bee0;
        case 0x18bee4u: goto label_18bee4;
        case 0x18bee8u: goto label_18bee8;
        case 0x18beecu: goto label_18beec;
        case 0x18bef0u: goto label_18bef0;
        case 0x18bef4u: goto label_18bef4;
        case 0x18bef8u: goto label_18bef8;
        case 0x18befcu: goto label_18befc;
        case 0x18bf00u: goto label_18bf00;
        case 0x18bf04u: goto label_18bf04;
        case 0x18bf08u: goto label_18bf08;
        case 0x18bf0cu: goto label_18bf0c;
        case 0x18bf10u: goto label_18bf10;
        case 0x18bf14u: goto label_18bf14;
        case 0x18bf18u: goto label_18bf18;
        case 0x18bf1cu: goto label_18bf1c;
        case 0x18bf20u: goto label_18bf20;
        case 0x18bf24u: goto label_18bf24;
        case 0x18bf28u: goto label_18bf28;
        case 0x18bf2cu: goto label_18bf2c;
        case 0x18bf30u: goto label_18bf30;
        case 0x18bf34u: goto label_18bf34;
        case 0x18bf38u: goto label_18bf38;
        case 0x18bf3cu: goto label_18bf3c;
        case 0x18bf40u: goto label_18bf40;
        case 0x18bf44u: goto label_18bf44;
        case 0x18bf48u: goto label_18bf48;
        case 0x18bf4cu: goto label_18bf4c;
        case 0x18bf50u: goto label_18bf50;
        case 0x18bf54u: goto label_18bf54;
        case 0x18bf58u: goto label_18bf58;
        case 0x18bf5cu: goto label_18bf5c;
        case 0x18bf60u: goto label_18bf60;
        case 0x18bf64u: goto label_18bf64;
        case 0x18bf68u: goto label_18bf68;
        case 0x18bf6cu: goto label_18bf6c;
        case 0x18bf70u: goto label_18bf70;
        case 0x18bf74u: goto label_18bf74;
        case 0x18bf78u: goto label_18bf78;
        case 0x18bf7cu: goto label_18bf7c;
        case 0x18bf80u: goto label_18bf80;
        case 0x18bf84u: goto label_18bf84;
        case 0x18bf88u: goto label_18bf88;
        case 0x18bf8cu: goto label_18bf8c;
        case 0x18bf90u: goto label_18bf90;
        case 0x18bf94u: goto label_18bf94;
        case 0x18bf98u: goto label_18bf98;
        case 0x18bf9cu: goto label_18bf9c;
        case 0x18bfa0u: goto label_18bfa0;
        case 0x18bfa4u: goto label_18bfa4;
        case 0x18bfa8u: goto label_18bfa8;
        case 0x18bfacu: goto label_18bfac;
        case 0x18bfb0u: goto label_18bfb0;
        case 0x18bfb4u: goto label_18bfb4;
        case 0x18bfb8u: goto label_18bfb8;
        case 0x18bfbcu: goto label_18bfbc;
        case 0x18bfc0u: goto label_18bfc0;
        case 0x18bfc4u: goto label_18bfc4;
        case 0x18bfc8u: goto label_18bfc8;
        case 0x18bfccu: goto label_18bfcc;
        case 0x18bfd0u: goto label_18bfd0;
        case 0x18bfd4u: goto label_18bfd4;
        case 0x18bfd8u: goto label_18bfd8;
        case 0x18bfdcu: goto label_18bfdc;
        case 0x18bfe0u: goto label_18bfe0;
        case 0x18bfe4u: goto label_18bfe4;
        case 0x18bfe8u: goto label_18bfe8;
        case 0x18bfecu: goto label_18bfec;
        case 0x18bff0u: goto label_18bff0;
        case 0x18bff4u: goto label_18bff4;
        case 0x18bff8u: goto label_18bff8;
        case 0x18bffcu: goto label_18bffc;
        case 0x18c000u: goto label_18c000;
        case 0x18c004u: goto label_18c004;
        case 0x18c008u: goto label_18c008;
        case 0x18c00cu: goto label_18c00c;
        case 0x18c010u: goto label_18c010;
        case 0x18c014u: goto label_18c014;
        case 0x18c018u: goto label_18c018;
        case 0x18c01cu: goto label_18c01c;
        case 0x18c020u: goto label_18c020;
        case 0x18c024u: goto label_18c024;
        case 0x18c028u: goto label_18c028;
        case 0x18c02cu: goto label_18c02c;
        case 0x18c030u: goto label_18c030;
        case 0x18c034u: goto label_18c034;
        case 0x18c038u: goto label_18c038;
        case 0x18c03cu: goto label_18c03c;
        case 0x18c040u: goto label_18c040;
        case 0x18c044u: goto label_18c044;
        case 0x18c048u: goto label_18c048;
        case 0x18c04cu: goto label_18c04c;
        case 0x18c050u: goto label_18c050;
        case 0x18c054u: goto label_18c054;
        case 0x18c058u: goto label_18c058;
        case 0x18c05cu: goto label_18c05c;
        case 0x18c060u: goto label_18c060;
        case 0x18c064u: goto label_18c064;
        case 0x18c068u: goto label_18c068;
        case 0x18c06cu: goto label_18c06c;
        case 0x18c070u: goto label_18c070;
        case 0x18c074u: goto label_18c074;
        case 0x18c078u: goto label_18c078;
        case 0x18c07cu: goto label_18c07c;
        case 0x18c080u: goto label_18c080;
        case 0x18c084u: goto label_18c084;
        case 0x18c088u: goto label_18c088;
        case 0x18c08cu: goto label_18c08c;
        case 0x18c090u: goto label_18c090;
        case 0x18c094u: goto label_18c094;
        case 0x18c098u: goto label_18c098;
        case 0x18c09cu: goto label_18c09c;
        default: break;
    }

    ctx->pc = 0x18b2b0u;

label_18b2b0:
    // 0x18b2b0: 0x27bdfd60  addiu       $sp, $sp, -0x2A0
    ctx->pc = 0x18b2b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966624));
label_18b2b4:
    // 0x18b2b4: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x18b2b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_18b2b8:
    // 0x18b2b8: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x18b2b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_18b2bc:
    // 0x18b2bc: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x18b2bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_18b2c0:
    // 0x18b2c0: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x18b2c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_18b2c4:
    // 0x18b2c4: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x18b2c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_18b2c8:
    // 0x18b2c8: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x18b2c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_18b2cc:
    // 0x18b2cc: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x18b2ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_18b2d0:
    // 0x18b2d0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x18b2d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_18b2d4:
    // 0x18b2d4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x18b2d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_18b2d8:
    // 0x18b2d8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x18b2d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_18b2dc:
    // 0x18b2dc: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x18b2dcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_18b2e0:
    // 0x18b2e0: 0xafa40290  sw          $a0, 0x290($sp)
    ctx->pc = 0x18b2e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 656), GPR_U32(ctx, 4));
label_18b2e4:
    // 0x18b2e4: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x18b2e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
label_18b2e8:
    // 0x18b2e8: 0xc047eb8  jal         func_11FAE0
label_18b2ec:
    if (ctx->pc == 0x18B2ECu) {
        ctx->pc = 0x18B2F0u;
        goto label_18b2f0;
    }
    ctx->pc = 0x18B2E8u;
    SET_GPR_U32(ctx, 31, 0x18B2F0u);
    ctx->pc = 0x11FAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FAE0u, 0x18B2E8u, 0x18B2F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B2F0u;
label_18b2f0:
    // 0x18b2f0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18b2f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18b2f4:
    // 0x18b2f4: 0xc047eb0  jal         func_11FAC0
label_18b2f8:
    if (ctx->pc == 0x18B2F8u) {
        ctx->pc = 0x18B2FCu;
        goto label_18b2fc;
    }
    ctx->pc = 0x18B2F4u;
    SET_GPR_U32(ctx, 31, 0x18B2FCu);
    ctx->pc = 0x11FAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FAC0u, 0x18B2F4u, 0x18B2FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B2FCu;
label_18b2fc:
    // 0x18b2fc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x18b2fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18b300:
    // 0x18b300: 0xafa50288  sw          $a1, 0x288($sp)
    ctx->pc = 0x18b300u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 648), GPR_U32(ctx, 5));
label_18b304:
    // 0x18b304: 0x8fa30288  lw          $v1, 0x288($sp)
    ctx->pc = 0x18b304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 648)));
label_18b308:
    // 0x18b308: 0x8fa40288  lw          $a0, 0x288($sp)
    ctx->pc = 0x18b308u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 648)));
label_18b30c:
    // 0x18b30c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x18b30cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_18b310:
    // 0x18b310: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x18b310u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_18b314:
    // 0x18b314: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x18b314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_18b318:
    // 0x18b318: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x18b318u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_18b31c:
    // 0x18b31c: 0x7fa20110  sq          $v0, 0x110($sp)
    ctx->pc = 0x18b31cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 2));
label_18b320:
    // 0x18b320: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x18b320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_18b324:
    // 0x18b324: 0x7ba30110  lq          $v1, 0x110($sp)
    ctx->pc = 0x18b324u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_18b328:
    // 0x18b328: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18b328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_18b32c:
    // 0x18b32c: 0xafa20284  sw          $v0, 0x284($sp)
    ctx->pc = 0x18b32cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 644), GPR_U32(ctx, 2));
label_18b330:
    // 0x18b330: 0x8fa30288  lw          $v1, 0x288($sp)
    ctx->pc = 0x18b330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 648)));
label_18b334:
    // 0x18b334: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x18b334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_18b338:
    // 0x18b338: 0x28430007  slti        $v1, $v0, 0x7
    ctx->pc = 0x18b338u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)7) ? 1 : 0);
label_18b33c:
    // 0x18b33c: 0x1460002a  bnez        $v1, . + 4 + (0x2A << 2)
label_18b340:
    if (ctx->pc == 0x18B340u) {
        ctx->pc = 0x18B344u;
        goto label_18b344;
    }
    ctx->pc = 0x18B33Cu;
    {
        const bool branch_taken_0x18b33c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18b33c) {
            ctx->pc = 0x18B3E8u;
            goto label_18b3e8;
        }
    }
    ctx->pc = 0x18B344u;
label_18b344:
    // 0x18b344: 0x8fa40290  lw          $a0, 0x290($sp)
    ctx->pc = 0x18b344u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
label_18b348:
    // 0x18b348: 0x278591c0  addiu       $a1, $gp, -0x6E40
    ctx->pc = 0x18b348u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939072));
label_18b34c:
    // 0x18b34c: 0xc05621c  jal         func_158870
label_18b350:
    if (ctx->pc == 0x18B350u) {
        ctx->pc = 0x18B354u;
        goto label_18b354;
    }
    ctx->pc = 0x18B34Cu;
    SET_GPR_U32(ctx, 31, 0x18B354u);
    ctx->pc = 0x158870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158870u, 0x18B34Cu, 0x18B354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B354u;
label_18b354:
    // 0x18b354: 0xafa20280  sw          $v0, 0x280($sp)
    ctx->pc = 0x18b354u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 640), GPR_U32(ctx, 2));
label_18b358:
    // 0x18b358: 0x8fa30280  lw          $v1, 0x280($sp)
    ctx->pc = 0x18b358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_18b35c:
    // 0x18b35c: 0x10600022  beqz        $v1, . + 4 + (0x22 << 2)
label_18b360:
    if (ctx->pc == 0x18B360u) {
        ctx->pc = 0x18B364u;
        goto label_18b364;
    }
    ctx->pc = 0x18B35Cu;
    {
        const bool branch_taken_0x18b35c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b35c) {
            ctx->pc = 0x18B3E8u;
            goto label_18b3e8;
        }
    }
    ctx->pc = 0x18B364u;
label_18b364:
    // 0x18b364: 0x8fa30290  lw          $v1, 0x290($sp)
    ctx->pc = 0x18b364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
label_18b368:
    // 0x18b368: 0x8fa50280  lw          $a1, 0x280($sp)
    ctx->pc = 0x18b368u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_18b36c:
    // 0x18b36c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x18b36cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_18b370:
    // 0x18b370: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x18b370u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_18b374:
    // 0x18b374: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x18b374u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_18b378:
    // 0x18b378: 0xc08c434  jal         func_2310D0
label_18b37c:
    if (ctx->pc == 0x18B37Cu) {
        ctx->pc = 0x18B380u;
        goto label_18b380;
    }
    ctx->pc = 0x18B378u;
    SET_GPR_U32(ctx, 31, 0x18B380u);
    ctx->pc = 0x2310D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2310D0u, 0x18B378u, 0x18B380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B380u;
label_18b380:
    // 0x18b380: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x18b380u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18b384:
    // 0x18b384: 0x8f84bbdc  lw          $a0, -0x4424($gp)
    ctx->pc = 0x18b384u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949852)));
label_18b388:
    // 0x18b388: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x18b388u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_18b38c:
    // 0x18b38c: 0x24a55680  addiu       $a1, $a1, 0x5680
    ctx->pc = 0x18b38cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22144));
label_18b390:
    // 0x18b390: 0xc08e57c  jal         func_2395F0
label_18b394:
    if (ctx->pc == 0x18B394u) {
        ctx->pc = 0x18B398u;
        goto label_18b398;
    }
    ctx->pc = 0x18B390u;
    SET_GPR_U32(ctx, 31, 0x18B398u);
    ctx->pc = 0x2395F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2395F0u, 0x18B390u, 0x18B398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B398u;
label_18b398:
    // 0x18b398: 0x27a40230  addiu       $a0, $sp, 0x230
    ctx->pc = 0x18b398u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
label_18b39c:
    // 0x18b39c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x18b39cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18b3a0:
    // 0x18b3a0: 0xc0406d0  jal         func_101B40
label_18b3a4:
    if (ctx->pc == 0x18B3A4u) {
        ctx->pc = 0x18B3A8u;
        goto label_18b3a8;
    }
    ctx->pc = 0x18B3A0u;
    SET_GPR_U32(ctx, 31, 0x18B3A8u);
    ctx->pc = 0x101B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101B40u, 0x18B3A0u, 0x18B3A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B3A8u;
label_18b3a8:
    // 0x18b3a8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x18b3a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18b3ac:
    // 0x18b3ac: 0x8fa20290  lw          $v0, 0x290($sp)
    ctx->pc = 0x18b3acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
label_18b3b0:
    // 0x18b3b0: 0x8fa50280  lw          $a1, 0x280($sp)
    ctx->pc = 0x18b3b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_18b3b4:
    // 0x18b3b4: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x18b3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_18b3b8:
    // 0x18b3b8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18b3b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18b3bc:
    // 0x18b3bc: 0x27a60230  addiu       $a2, $sp, 0x230
    ctx->pc = 0x18b3bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
label_18b3c0:
    // 0x18b3c0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x18b3c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18b3c4:
    // 0x18b3c4: 0xc08c378  jal         func_230DE0
label_18b3c8:
    if (ctx->pc == 0x18B3C8u) {
        ctx->pc = 0x18B3CCu;
        goto label_18b3cc;
    }
    ctx->pc = 0x18B3C4u;
    SET_GPR_U32(ctx, 31, 0x18B3CCu);
    ctx->pc = 0x230DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230DE0u, 0x18B3C4u, 0x18B3CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B3CCu;
label_18b3cc:
    // 0x18b3cc: 0x27a20230  addiu       $v0, $sp, 0x230
    ctx->pc = 0x18b3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
label_18b3d0:
    // 0x18b3d0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18b3d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18b3d4:
    // 0x18b3d4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x18b3d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_18b3d8:
    // 0x18b3d8: 0xc0406a0  jal         func_101A80
label_18b3dc:
    if (ctx->pc == 0x18B3DCu) {
        ctx->pc = 0x18B3E0u;
        goto label_18b3e0;
    }
    ctx->pc = 0x18B3D8u;
    SET_GPR_U32(ctx, 31, 0x18B3E0u);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x18B3D8u, 0x18B3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B3E0u;
label_18b3e0:
    // 0x18b3e0: 0x1000031f  b           . + 4 + (0x31F << 2)
label_18b3e4:
    if (ctx->pc == 0x18B3E4u) {
        ctx->pc = 0x18B3E8u;
        goto label_18b3e8;
    }
    ctx->pc = 0x18B3E0u;
    {
        const bool branch_taken_0x18b3e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b3e0) {
            ctx->pc = 0x18C060u;
            goto label_18c060;
        }
    }
    ctx->pc = 0x18B3E8u;
label_18b3e8:
    // 0x18b3e8: 0xc090864  jal         func_242190
label_18b3ec:
    if (ctx->pc == 0x18B3ECu) {
        ctx->pc = 0x18B3F0u;
        goto label_18b3f0;
    }
    ctx->pc = 0x18B3E8u;
    SET_GPR_U32(ctx, 31, 0x18B3F0u);
    ctx->pc = 0x242190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242190u, 0x18B3E8u, 0x18B3F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B3F0u;
label_18b3f0:
    // 0x18b3f0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18b3f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18b3f4:
    // 0x18b3f4: 0xc090590  jal         func_241640
label_18b3f8:
    if (ctx->pc == 0x18B3F8u) {
        ctx->pc = 0x18B3FCu;
        goto label_18b3fc;
    }
    ctx->pc = 0x18B3F4u;
    SET_GPR_U32(ctx, 31, 0x18B3FCu);
    ctx->pc = 0x241640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241640u, 0x18B3F4u, 0x18B3FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B3FCu;
label_18b3fc:
    // 0x18b3fc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18b3fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18b400:
    // 0x18b400: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x18b400u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_18b404:
    // 0x18b404: 0xc09157c  jal         func_2455F0
label_18b408:
    if (ctx->pc == 0x18B408u) {
        ctx->pc = 0x18B40Cu;
        goto label_18b40c;
    }
    ctx->pc = 0x18B404u;
    SET_GPR_U32(ctx, 31, 0x18B40Cu);
    ctx->pc = 0x2455F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2455F0u, 0x18B404u, 0x18B40Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B40Cu;
label_18b40c:
    // 0x18b40c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x18b40cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18b410:
    // 0x18b410: 0xafa3027c  sw          $v1, 0x27C($sp)
    ctx->pc = 0x18b410u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 636), GPR_U32(ctx, 3));
label_18b414:
    // 0x18b414: 0x8fa4027c  lw          $a0, 0x27C($sp)
    ctx->pc = 0x18b414u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 636)));
label_18b418:
    // 0x18b418: 0xc040e7c  jal         func_1039F0
label_18b41c:
    if (ctx->pc == 0x18B41Cu) {
        ctx->pc = 0x18B420u;
        goto label_18b420;
    }
    ctx->pc = 0x18B418u;
    SET_GPR_U32(ctx, 31, 0x18B420u);
    ctx->pc = 0x1039F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1039F0u, 0x18B418u, 0x18B420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B420u;
label_18b420:
    // 0x18b420: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x18b420u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18b424:
    // 0x18b424: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18b424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18b428:
    // 0x18b428: 0xafa20278  sw          $v0, 0x278($sp)
    ctx->pc = 0x18b428u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 632), GPR_U32(ctx, 2));
label_18b42c:
    // 0x18b42c: 0x8f85bbb4  lw          $a1, -0x444C($gp)
    ctx->pc = 0x18b42cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
label_18b430:
    // 0x18b430: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x18b430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_18b434:
    // 0x18b434: 0xc050ed8  jal         func_143B60
label_18b438:
    if (ctx->pc == 0x18B438u) {
        ctx->pc = 0x18B43Cu;
        goto label_18b43c;
    }
    ctx->pc = 0x18B434u;
    SET_GPR_U32(ctx, 31, 0x18B43Cu);
    ctx->pc = 0x143B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143B60u, 0x18B434u, 0x18B43Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B43Cu;
label_18b43c:
    // 0x18b43c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18b43cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18b440:
    // 0x18b440: 0x2405054e  addiu       $a1, $zero, 0x54E
    ctx->pc = 0x18b440u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1358));
label_18b444:
    // 0x18b444: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18b444u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18b448:
    // 0x18b448: 0xc040ab0  jal         func_102AC0
label_18b44c:
    if (ctx->pc == 0x18B44Cu) {
        ctx->pc = 0x18B450u;
        goto label_18b450;
    }
    ctx->pc = 0x18B448u;
    SET_GPR_U32(ctx, 31, 0x18B450u);
    ctx->pc = 0x102AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AC0u, 0x18B448u, 0x18B450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B450u;
label_18b450:
    // 0x18b450: 0xafa20274  sw          $v0, 0x274($sp)
    ctx->pc = 0x18b450u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 628), GPR_U32(ctx, 2));
label_18b454:
    // 0x18b454: 0x8f85bbb4  lw          $a1, -0x444C($gp)
    ctx->pc = 0x18b454u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
label_18b458:
    // 0x18b458: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x18b458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_18b45c:
    // 0x18b45c: 0xc050ed8  jal         func_143B60
label_18b460:
    if (ctx->pc == 0x18B460u) {
        ctx->pc = 0x18B464u;
        goto label_18b464;
    }
    ctx->pc = 0x18B45Cu;
    SET_GPR_U32(ctx, 31, 0x18B464u);
    ctx->pc = 0x143B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143B60u, 0x18B45Cu, 0x18B464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B464u;
label_18b464:
    // 0x18b464: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18b464u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18b468:
    // 0x18b468: 0x24050549  addiu       $a1, $zero, 0x549
    ctx->pc = 0x18b468u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1353));
label_18b46c:
    // 0x18b46c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18b46cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18b470:
    // 0x18b470: 0xc040ab0  jal         func_102AC0
label_18b474:
    if (ctx->pc == 0x18B474u) {
        ctx->pc = 0x18B478u;
        goto label_18b478;
    }
    ctx->pc = 0x18B470u;
    SET_GPR_U32(ctx, 31, 0x18B478u);
    ctx->pc = 0x102AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AC0u, 0x18B470u, 0x18B478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B478u;
label_18b478:
    // 0x18b478: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18b478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18b47c:
    // 0x18b47c: 0xafa40270  sw          $a0, 0x270($sp)
    ctx->pc = 0x18b47cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 624), GPR_U32(ctx, 4));
label_18b480:
    // 0x18b480: 0x8fa30278  lw          $v1, 0x278($sp)
    ctx->pc = 0x18b480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 632)));
label_18b484:
    // 0x18b484: 0x106002f6  beqz        $v1, . + 4 + (0x2F6 << 2)
label_18b488:
    if (ctx->pc == 0x18B488u) {
        ctx->pc = 0x18B48Cu;
        goto label_18b48c;
    }
    ctx->pc = 0x18B484u;
    {
        const bool branch_taken_0x18b484 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b484) {
            ctx->pc = 0x18C060u;
            goto label_18c060;
        }
    }
    ctx->pc = 0x18B48Cu;
label_18b48c:
    // 0x18b48c: 0x8fa70290  lw          $a3, 0x290($sp)
    ctx->pc = 0x18b48cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
label_18b490:
    // 0x18b490: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x18b490u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_18b494:
    // 0x18b494: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x18b494u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_18b498:
    // 0x18b498: 0x24a55690  addiu       $a1, $a1, 0x5690
    ctx->pc = 0x18b498u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22160));
label_18b49c:
    // 0x18b49c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x18b49cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_18b4a0:
    // 0x18b4a0: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x18b4a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_18b4a4:
    // 0x18b4a4: 0x320f809  jalr        $t9
label_18b4a8:
    if (ctx->pc == 0x18B4A8u) {
        ctx->pc = 0x18B4ACu;
        goto label_18b4ac;
    }
    ctx->pc = 0x18B4A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x18B4ACu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18B4A4u, 0x18B4ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18B4ACu;
label_18b4ac:
    // 0x18b4ac: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x18b4acu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18b4b0:
    // 0x18b4b0: 0x100002e8  b           . + 4 + (0x2E8 << 2)
label_18b4b4:
    if (ctx->pc == 0x18B4B4u) {
        ctx->pc = 0x18B4B8u;
        goto label_18b4b8;
    }
    ctx->pc = 0x18B4B0u;
    {
        const bool branch_taken_0x18b4b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b4b0) {
            ctx->pc = 0x18C054u;
            goto label_18c054;
        }
    }
    ctx->pc = 0x18B4B8u;
label_18b4b8:
    // 0x18b4b8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x18b4b8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18b4bc:
    // 0x18b4bc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x18b4bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18b4c0:
    // 0x18b4c0: 0x8fa30278  lw          $v1, 0x278($sp)
    ctx->pc = 0x18b4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 632)));
label_18b4c4:
    // 0x18b4c4: 0x10600042  beqz        $v1, . + 4 + (0x42 << 2)
label_18b4c8:
    if (ctx->pc == 0x18B4C8u) {
        ctx->pc = 0x18B4CCu;
        goto label_18b4cc;
    }
    ctx->pc = 0x18B4C4u;
    {
        const bool branch_taken_0x18b4c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b4c4) {
            ctx->pc = 0x18B5D0u;
            goto label_18b5d0;
        }
    }
    ctx->pc = 0x18B4CCu;
label_18b4cc:
    // 0x18b4cc: 0x8fa4027c  lw          $a0, 0x27C($sp)
    ctx->pc = 0x18b4ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 636)));
label_18b4d0:
    // 0x18b4d0: 0xc04147c  jal         func_1051F0
label_18b4d4:
    if (ctx->pc == 0x18B4D4u) {
        ctx->pc = 0x18B4D8u;
        goto label_18b4d8;
    }
    ctx->pc = 0x18B4D0u;
    SET_GPR_U32(ctx, 31, 0x18B4D8u);
    ctx->pc = 0x1051F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051F0u, 0x18B4D0u, 0x18B4D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B4D8u;
label_18b4d8:
    // 0x18b4d8: 0x12c2003d  beq         $s6, $v0, . + 4 + (0x3D << 2)
label_18b4dc:
    if (ctx->pc == 0x18B4DCu) {
        ctx->pc = 0x18B4E0u;
        goto label_18b4e0;
    }
    ctx->pc = 0x18B4D8u;
    {
        const bool branch_taken_0x18b4d8 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 2));
        if (branch_taken_0x18b4d8) {
            ctx->pc = 0x18B5D0u;
            goto label_18b5d0;
        }
    }
    ctx->pc = 0x18B4E0u;
label_18b4e0:
    // 0x18b4e0: 0xc0434e0  jal         func_10D380
label_18b4e4:
    if (ctx->pc == 0x18B4E4u) {
        ctx->pc = 0x18B4E8u;
        goto label_18b4e8;
    }
    ctx->pc = 0x18B4E0u;
    SET_GPR_U32(ctx, 31, 0x18B4E8u);
    ctx->pc = 0x10D380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D380u, 0x18B4E0u, 0x18B4E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B4E8u;
label_18b4e8:
    // 0x18b4e8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18b4e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18b4ec:
    // 0x18b4ec: 0xc0434d8  jal         func_10D360
label_18b4f0:
    if (ctx->pc == 0x18B4F0u) {
        ctx->pc = 0x18B4F4u;
        goto label_18b4f4;
    }
    ctx->pc = 0x18B4ECu;
    SET_GPR_U32(ctx, 31, 0x18B4F4u);
    ctx->pc = 0x10D360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D360u, 0x18B4ECu, 0x18B4F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B4F4u;
label_18b4f4:
    // 0x18b4f4: 0x7fa20100  sq          $v0, 0x100($sp)
    ctx->pc = 0x18b4f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 2));
label_18b4f8:
    // 0x18b4f8: 0x8ec40000  lw          $a0, 0x0($s6)
    ctx->pc = 0x18b4f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_18b4fc:
    // 0x18b4fc: 0xc09138c  jal         func_244E30
label_18b500:
    if (ctx->pc == 0x18B500u) {
        ctx->pc = 0x18B504u;
        goto label_18b504;
    }
    ctx->pc = 0x18B4FCu;
    SET_GPR_U32(ctx, 31, 0x18B504u);
    ctx->pc = 0x244E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244E30u, 0x18B4FCu, 0x18B504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B504u;
label_18b504:
    // 0x18b504: 0x7ba40100  lq          $a0, 0x100($sp)
    ctx->pc = 0x18b504u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_18b508:
    // 0x18b508: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x18b508u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18b50c:
    // 0x18b50c: 0xc044da4  jal         func_113690
label_18b510:
    if (ctx->pc == 0x18B510u) {
        ctx->pc = 0x18B514u;
        goto label_18b514;
    }
    ctx->pc = 0x18B50Cu;
    SET_GPR_U32(ctx, 31, 0x18B514u);
    ctx->pc = 0x113690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113690u, 0x18B50Cu, 0x18B514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B514u;
label_18b514:
    // 0x18b514: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18b514u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18b518:
    // 0x18b518: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x18b518u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_18b51c:
    // 0x18b51c: 0x8ec60000  lw          $a2, 0x0($s6)
    ctx->pc = 0x18b51cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_18b520:
    // 0x18b520: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x18b520u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_18b524:
    // 0x18b524: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x18b524u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_18b528:
    // 0x18b528: 0xc085538  jal         func_2154E0
label_18b52c:
    if (ctx->pc == 0x18B52Cu) {
        ctx->pc = 0x18B530u;
        goto label_18b530;
    }
    ctx->pc = 0x18B528u;
    SET_GPR_U32(ctx, 31, 0x18B530u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x18B528u, 0x18B530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B530u;
label_18b530:
    // 0x18b530: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x18b530u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18b534:
    // 0x18b534: 0x240a02d  daddu       $s4, $s2, $zero
    ctx->pc = 0x18b534u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_18b538:
    // 0x18b538: 0x26d30004  addiu       $s3, $s6, 0x4
    ctx->pc = 0x18b538u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
label_18b53c:
    // 0x18b53c: 0x260b02d  daddu       $s6, $s3, $zero
    ctx->pc = 0x18b53cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_18b540:
    // 0x18b540: 0x8fa4027c  lw          $a0, 0x27C($sp)
    ctx->pc = 0x18b540u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 636)));
label_18b544:
    // 0x18b544: 0xc04147c  jal         func_1051F0
label_18b548:
    if (ctx->pc == 0x18B548u) {
        ctx->pc = 0x18B54Cu;
        goto label_18b54c;
    }
    ctx->pc = 0x18B544u;
    SET_GPR_U32(ctx, 31, 0x18B54Cu);
    ctx->pc = 0x1051F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051F0u, 0x18B544u, 0x18B54Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B54Cu;
label_18b54c:
    // 0x18b54c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x18b54cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18b550:
    // 0x18b550: 0x12c30009  beq         $s6, $v1, . + 4 + (0x9 << 2)
label_18b554:
    if (ctx->pc == 0x18B554u) {
        ctx->pc = 0x18B558u;
        goto label_18b558;
    }
    ctx->pc = 0x18B550u;
    {
        const bool branch_taken_0x18b550 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 3));
        if (branch_taken_0x18b550) {
            ctx->pc = 0x18B578u;
            goto label_18b578;
        }
    }
    ctx->pc = 0x18B558u;
label_18b558:
    // 0x18b558: 0x8fa20274  lw          $v0, 0x274($sp)
    ctx->pc = 0x18b558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 628)));
label_18b55c:
    // 0x18b55c: 0x7fa200f0  sq          $v0, 0xF0($sp)
    ctx->pc = 0x18b55cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
label_18b560:
    // 0x18b560: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18b560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18b564:
    // 0x18b564: 0xc0457d8  jal         func_115F60
label_18b568:
    if (ctx->pc == 0x18B568u) {
        ctx->pc = 0x18B56Cu;
        goto label_18b56c;
    }
    ctx->pc = 0x18B564u;
    SET_GPR_U32(ctx, 31, 0x18B56Cu);
    ctx->pc = 0x115F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115F60u, 0x18B564u, 0x18B56Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B56Cu;
label_18b56c:
    // 0x18b56c: 0x7ba300f0  lq          $v1, 0xF0($sp)
    ctx->pc = 0x18b56cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_18b570:
    // 0x18b570: 0x1062ffdb  beq         $v1, $v0, . + 4 + (-0x25 << 2)
label_18b574:
    if (ctx->pc == 0x18B574u) {
        ctx->pc = 0x18B578u;
        goto label_18b578;
    }
    ctx->pc = 0x18B570u;
    {
        const bool branch_taken_0x18b570 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x18b570) {
            ctx->pc = 0x18B4E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18b4e0;
        }
    }
    ctx->pc = 0x18B578u;
label_18b578:
    // 0x18b578: 0x8fa20274  lw          $v0, 0x274($sp)
    ctx->pc = 0x18b578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 628)));
label_18b57c:
    // 0x18b57c: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x18b57cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
label_18b580:
    // 0x18b580: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18b580u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18b584:
    // 0x18b584: 0xc0457d8  jal         func_115F60
label_18b588:
    if (ctx->pc == 0x18B588u) {
        ctx->pc = 0x18B58Cu;
        goto label_18b58c;
    }
    ctx->pc = 0x18B584u;
    SET_GPR_U32(ctx, 31, 0x18B58Cu);
    ctx->pc = 0x115F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115F60u, 0x18B584u, 0x18B58Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B58Cu;
label_18b58c:
    // 0x18b58c: 0x7ba300e0  lq          $v1, 0xE0($sp)
    ctx->pc = 0x18b58cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_18b590:
    // 0x18b590: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_18b594:
    if (ctx->pc == 0x18B594u) {
        ctx->pc = 0x18B598u;
        goto label_18b598;
    }
    ctx->pc = 0x18B590u;
    {
        const bool branch_taken_0x18b590 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x18b590) {
            ctx->pc = 0x18B5A0u;
            goto label_18b5a0;
        }
    }
    ctx->pc = 0x18B598u;
label_18b598:
    // 0x18b598: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x18b598u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18b59c:
    // 0x18b59c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x18b59cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18b5a0:
    // 0x18b5a0: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x18b5a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
label_18b5a4:
    // 0x18b5a4: 0x90850028  lbu         $a1, 0x28($a0)
    ctx->pc = 0x18b5a4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 40)));
label_18b5a8:
    // 0x18b5a8: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
label_18b5ac:
    if (ctx->pc == 0x18B5ACu) {
        ctx->pc = 0x18B5B0u;
        goto label_18b5b0;
    }
    ctx->pc = 0x18B5A8u;
    {
        const bool branch_taken_0x18b5a8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b5a8) {
            ctx->pc = 0x18B5D0u;
            goto label_18b5d0;
        }
    }
    ctx->pc = 0x18B5B0u;
label_18b5b0:
    // 0x18b5b0: 0x8fb00270  lw          $s0, 0x270($sp)
    ctx->pc = 0x18b5b0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_18b5b4:
    // 0x18b5b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18b5b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18b5b8:
    // 0x18b5b8: 0xc0457d8  jal         func_115F60
label_18b5bc:
    if (ctx->pc == 0x18B5BCu) {
        ctx->pc = 0x18B5C0u;
        goto label_18b5c0;
    }
    ctx->pc = 0x18B5B8u;
    SET_GPR_U32(ctx, 31, 0x18B5C0u);
    ctx->pc = 0x115F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115F60u, 0x18B5B8u, 0x18B5C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B5C0u;
label_18b5c0:
    // 0x18b5c0: 0x16020003  bne         $s0, $v0, . + 4 + (0x3 << 2)
label_18b5c4:
    if (ctx->pc == 0x18B5C4u) {
        ctx->pc = 0x18B5C8u;
        goto label_18b5c8;
    }
    ctx->pc = 0x18B5C0u;
    {
        const bool branch_taken_0x18b5c0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x18b5c0) {
            ctx->pc = 0x18B5D0u;
            goto label_18b5d0;
        }
    }
    ctx->pc = 0x18B5C8u;
label_18b5c8:
    // 0x18b5c8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x18b5c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18b5cc:
    // 0x18b5cc: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x18b5ccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18b5d0:
    // 0x18b5d0: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x18b5d0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18b5d4:
    // 0x18b5d4: 0x10000298  b           . + 4 + (0x298 << 2)
label_18b5d8:
    if (ctx->pc == 0x18B5D8u) {
        ctx->pc = 0x18B5DCu;
        goto label_18b5dc;
    }
    ctx->pc = 0x18B5D4u;
    {
        const bool branch_taken_0x18b5d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b5d4) {
            ctx->pc = 0x18C038u;
            goto label_18c038;
        }
    }
    ctx->pc = 0x18B5DCu;
label_18b5dc:
    // 0x18b5dc: 0x26e70061  addiu       $a3, $s7, 0x61
    ctx->pc = 0x18b5dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 23), 97));
label_18b5e0:
    // 0x18b5e0: 0x27a40200  addiu       $a0, $sp, 0x200
    ctx->pc = 0x18b5e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
label_18b5e4:
    // 0x18b5e4: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x18b5e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_18b5e8:
    // 0x18b5e8: 0x24a556b0  addiu       $a1, $a1, 0x56B0
    ctx->pc = 0x18b5e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22192));
label_18b5ec:
    // 0x18b5ec: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x18b5ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_18b5f0:
    // 0x18b5f0: 0xc0bc3e2  jal         func_2F0F88
label_18b5f4:
    if (ctx->pc == 0x18B5F4u) {
        ctx->pc = 0x18B5F8u;
        goto label_18b5f8;
    }
    ctx->pc = 0x18B5F0u;
    SET_GPR_U32(ctx, 31, 0x18B5F8u);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x18B5F0u, 0x18B5F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B5F8u;
label_18b5f8:
    // 0x18b5f8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x18b5f8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18b5fc:
    // 0x18b5fc: 0x8fa40290  lw          $a0, 0x290($sp)
    ctx->pc = 0x18b5fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
label_18b600:
    // 0x18b600: 0x27a70200  addiu       $a3, $sp, 0x200
    ctx->pc = 0x18b600u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
label_18b604:
    // 0x18b604: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x18b604u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_18b608:
    // 0x18b608: 0xc05621c  jal         func_158870
label_18b60c:
    if (ctx->pc == 0x18B60Cu) {
        ctx->pc = 0x18B610u;
        goto label_18b610;
    }
    ctx->pc = 0x18B608u;
    SET_GPR_U32(ctx, 31, 0x18B610u);
    ctx->pc = 0x158870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158870u, 0x18B608u, 0x18B610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B610u;
label_18b610:
    // 0x18b610: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x18b610u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18b614:
    // 0x18b614: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x18b614u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_18b618:
    // 0x18b618: 0x12e5016b  beq         $s7, $a1, . + 4 + (0x16B << 2)
label_18b61c:
    if (ctx->pc == 0x18B61Cu) {
        ctx->pc = 0x18B620u;
        goto label_18b620;
    }
    ctx->pc = 0x18B618u;
    {
        const bool branch_taken_0x18b618 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 5));
        if (branch_taken_0x18b618) {
            ctx->pc = 0x18BBC8u;
            goto label_18bbc8;
        }
    }
    ctx->pc = 0x18B620u;
label_18b620:
    // 0x18b620: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x18b620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_18b624:
    // 0x18b624: 0x12e3006f  beq         $s7, $v1, . + 4 + (0x6F << 2)
label_18b628:
    if (ctx->pc == 0x18B628u) {
        ctx->pc = 0x18B62Cu;
        goto label_18b62c;
    }
    ctx->pc = 0x18B624u;
    {
        const bool branch_taken_0x18b624 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 3));
        if (branch_taken_0x18b624) {
            ctx->pc = 0x18B7E4u;
            goto label_18b7e4;
        }
    }
    ctx->pc = 0x18B62Cu;
label_18b62c:
    // 0x18b62c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x18b62cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18b630:
    // 0x18b630: 0x12e40042  beq         $s7, $a0, . + 4 + (0x42 << 2)
label_18b634:
    if (ctx->pc == 0x18B634u) {
        ctx->pc = 0x18B638u;
        goto label_18b638;
    }
    ctx->pc = 0x18B630u;
    {
        const bool branch_taken_0x18b630 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 4));
        if (branch_taken_0x18b630) {
            ctx->pc = 0x18B73Cu;
            goto label_18b73c;
        }
    }
    ctx->pc = 0x18B638u;
label_18b638:
    // 0x18b638: 0x12e00003  beqz        $s7, . + 4 + (0x3 << 2)
label_18b63c:
    if (ctx->pc == 0x18B63Cu) {
        ctx->pc = 0x18B640u;
        goto label_18b640;
    }
    ctx->pc = 0x18B638u;
    {
        const bool branch_taken_0x18b638 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b638) {
            ctx->pc = 0x18B648u;
            goto label_18b648;
        }
    }
    ctx->pc = 0x18B640u;
label_18b640:
    // 0x18b640: 0x1000027b  b           . + 4 + (0x27B << 2)
label_18b644:
    if (ctx->pc == 0x18B644u) {
        ctx->pc = 0x18B648u;
        goto label_18b648;
    }
    ctx->pc = 0x18B640u;
    {
        const bool branch_taken_0x18b640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b640) {
            ctx->pc = 0x18C030u;
            goto label_18c030;
        }
    }
    ctx->pc = 0x18B648u;
label_18b648:
    // 0x18b648: 0x12000279  beqz        $s0, . + 4 + (0x279 << 2)
label_18b64c:
    if (ctx->pc == 0x18B64Cu) {
        ctx->pc = 0x18B650u;
        goto label_18b650;
    }
    ctx->pc = 0x18B648u;
    {
        const bool branch_taken_0x18b648 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b648) {
            ctx->pc = 0x18C030u;
            goto label_18c030;
        }
    }
    ctx->pc = 0x18B650u;
label_18b650:
    // 0x18b650: 0x12200032  beqz        $s1, . + 4 + (0x32 << 2)
label_18b654:
    if (ctx->pc == 0x18B654u) {
        ctx->pc = 0x18B658u;
        goto label_18b658;
    }
    ctx->pc = 0x18B650u;
    {
        const bool branch_taken_0x18b650 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b650) {
            ctx->pc = 0x18B71Cu;
            goto label_18b71c;
        }
    }
    ctx->pc = 0x18B658u;
label_18b658:
    // 0x18b658: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18b658u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18b65c:
    // 0x18b65c: 0xc0457e8  jal         func_115FA0
label_18b660:
    if (ctx->pc == 0x18B660u) {
        ctx->pc = 0x18B664u;
        goto label_18b664;
    }
    ctx->pc = 0x18B65Cu;
    SET_GPR_U32(ctx, 31, 0x18B664u);
    ctx->pc = 0x115FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115FA0u, 0x18B65Cu, 0x18B664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B664u;
label_18b664:
    // 0x18b664: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18b664u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18b668:
    // 0x18b668: 0x240503ef  addiu       $a1, $zero, 0x3EF
    ctx->pc = 0x18b668u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1007));
label_18b66c:
    // 0x18b66c: 0x3c06004e  lui         $a2, 0x4E
    ctx->pc = 0x18b66cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)78 << 16));
label_18b670:
    // 0x18b670: 0x24c656c0  addiu       $a2, $a2, 0x56C0
    ctx->pc = 0x18b670u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22208));
label_18b674:
    // 0x18b674: 0xc041a50  jal         func_106940
label_18b678:
    if (ctx->pc == 0x18B678u) {
        ctx->pc = 0x18B67Cu;
        goto label_18b67c;
    }
    ctx->pc = 0x18B674u;
    SET_GPR_U32(ctx, 31, 0x18B67Cu);
    ctx->pc = 0x106940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106940u, 0x18B674u, 0x18B67Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B67Cu;
label_18b67c:
    // 0x18b67c: 0xafa2026c  sw          $v0, 0x26C($sp)
    ctx->pc = 0x18b67cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 620), GPR_U32(ctx, 2));
label_18b680:
    // 0x18b680: 0x8fa2026c  lw          $v0, 0x26C($sp)
    ctx->pc = 0x18b680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
label_18b684:
    // 0x18b684: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_18b688:
    if (ctx->pc == 0x18B688u) {
        ctx->pc = 0x18B68Cu;
        goto label_18b68c;
    }
    ctx->pc = 0x18B684u;
    {
        const bool branch_taken_0x18b684 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b684) {
            ctx->pc = 0x18B6FCu;
            goto label_18b6fc;
        }
    }
    ctx->pc = 0x18B68Cu;
label_18b68c:
    // 0x18b68c: 0x8fa3026c  lw          $v1, 0x26C($sp)
    ctx->pc = 0x18b68cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
label_18b690:
    // 0x18b690: 0x80630000  lb          $v1, 0x0($v1)
    ctx->pc = 0x18b690u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_18b694:
    // 0x18b694: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
label_18b698:
    if (ctx->pc == 0x18B698u) {
        ctx->pc = 0x18B69Cu;
        goto label_18b69c;
    }
    ctx->pc = 0x18B694u;
    {
        const bool branch_taken_0x18b694 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b694) {
            ctx->pc = 0x18B6FCu;
            goto label_18b6fc;
        }
    }
    ctx->pc = 0x18B69Cu;
label_18b69c:
    // 0x18b69c: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x18b69cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
label_18b6a0:
    // 0x18b6a0: 0x8fa5026c  lw          $a1, 0x26C($sp)
    ctx->pc = 0x18b6a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
label_18b6a4:
    // 0x18b6a4: 0xc0bc5c6  jal         func_2F1718
label_18b6a8:
    if (ctx->pc == 0x18B6A8u) {
        ctx->pc = 0x18B6ACu;
        goto label_18b6ac;
    }
    ctx->pc = 0x18B6A4u;
    SET_GPR_U32(ctx, 31, 0x18B6ACu);
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x18B6A4u, 0x18B6ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B6ACu;
label_18b6ac:
    // 0x18b6ac: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x18b6acu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18b6b0:
    // 0x18b6b0: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x18b6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_18b6b4:
    // 0x18b6b4: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x18b6b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
label_18b6b8:
    // 0x18b6b8: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x18b6b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
label_18b6bc:
    // 0x18b6bc: 0xc0bc60c  jal         func_2F1830
label_18b6c0:
    if (ctx->pc == 0x18B6C0u) {
        ctx->pc = 0x18B6C4u;
        goto label_18b6c4;
    }
    ctx->pc = 0x18B6BCu;
    SET_GPR_U32(ctx, 31, 0x18B6C4u);
    ctx->pc = 0x2F1830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1830u, 0x18B6BCu, 0x18B6C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B6C4u;
label_18b6c4:
    // 0x18b6c4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x18b6c4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18b6c8:
    // 0x18b6c8: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x18b6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_18b6cc:
    // 0x18b6cc: 0x5d1821  addu        $v1, $v0, $sp
    ctx->pc = 0x18b6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_18b6d0:
    // 0x18b6d0: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x18b6d0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_18b6d4:
    // 0x18b6d4: 0xa06201e0  sb          $v0, 0x1E0($v1)
    ctx->pc = 0x18b6d4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 480), (uint8_t)GPR_U32(ctx, 2));
label_18b6d8:
    // 0x18b6d8: 0x8fa20290  lw          $v0, 0x290($sp)
    ctx->pc = 0x18b6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
label_18b6dc:
    // 0x18b6dc: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x18b6dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_18b6e0:
    // 0x18b6e0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x18b6e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18b6e4:
    // 0x18b6e4: 0x27a601e0  addiu       $a2, $sp, 0x1E0
    ctx->pc = 0x18b6e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
label_18b6e8:
    // 0x18b6e8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x18b6e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18b6ec:
    // 0x18b6ec: 0xc08c800  jal         func_232000
label_18b6f0:
    if (ctx->pc == 0x18B6F0u) {
        ctx->pc = 0x18B6F4u;
        goto label_18b6f4;
    }
    ctx->pc = 0x18B6ECu;
    SET_GPR_U32(ctx, 31, 0x18B6F4u);
    ctx->pc = 0x232000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232000u, 0x18B6ECu, 0x18B6F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B6F4u;
label_18b6f4:
    // 0x18b6f4: 0x1000024e  b           . + 4 + (0x24E << 2)
label_18b6f8:
    if (ctx->pc == 0x18B6F8u) {
        ctx->pc = 0x18B6FCu;
        goto label_18b6fc;
    }
    ctx->pc = 0x18B6F4u;
    {
        const bool branch_taken_0x18b6f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b6f4) {
            ctx->pc = 0x18C030u;
            goto label_18c030;
        }
    }
    ctx->pc = 0x18B6FCu;
label_18b6fc:
    // 0x18b6fc: 0x8fa20290  lw          $v0, 0x290($sp)
    ctx->pc = 0x18b6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
label_18b700:
    // 0x18b700: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x18b700u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_18b704:
    // 0x18b704: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x18b704u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18b708:
    // 0x18b708: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18b708u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18b70c:
    // 0x18b70c: 0xc08c8dc  jal         func_232370
label_18b710:
    if (ctx->pc == 0x18B710u) {
        ctx->pc = 0x18B714u;
        goto label_18b714;
    }
    ctx->pc = 0x18B70Cu;
    SET_GPR_U32(ctx, 31, 0x18B714u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x18B70Cu, 0x18B714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B714u;
label_18b714:
    // 0x18b714: 0x10000246  b           . + 4 + (0x246 << 2)
label_18b718:
    if (ctx->pc == 0x18B718u) {
        ctx->pc = 0x18B71Cu;
        goto label_18b71c;
    }
    ctx->pc = 0x18B714u;
    {
        const bool branch_taken_0x18b714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b714) {
            ctx->pc = 0x18C030u;
            goto label_18c030;
        }
    }
    ctx->pc = 0x18B71Cu;
label_18b71c:
    // 0x18b71c: 0x8fa20290  lw          $v0, 0x290($sp)
    ctx->pc = 0x18b71cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
label_18b720:
    // 0x18b720: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x18b720u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_18b724:
    // 0x18b724: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x18b724u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18b728:
    // 0x18b728: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18b728u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18b72c:
    // 0x18b72c: 0xc08c8dc  jal         func_232370
label_18b730:
    if (ctx->pc == 0x18B730u) {
        ctx->pc = 0x18B734u;
        goto label_18b734;
    }
    ctx->pc = 0x18B72Cu;
    SET_GPR_U32(ctx, 31, 0x18B734u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x18B72Cu, 0x18B734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B734u;
label_18b734:
    // 0x18b734: 0x1000023e  b           . + 4 + (0x23E << 2)
label_18b738:
    if (ctx->pc == 0x18B738u) {
        ctx->pc = 0x18B73Cu;
        goto label_18b73c;
    }
    ctx->pc = 0x18B734u;
    {
        const bool branch_taken_0x18b734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b734) {
            ctx->pc = 0x18C030u;
            goto label_18c030;
        }
    }
    ctx->pc = 0x18B73Cu;
label_18b73c:
    // 0x18b73c: 0x1200023c  beqz        $s0, . + 4 + (0x23C << 2)
label_18b740:
    if (ctx->pc == 0x18B740u) {
        ctx->pc = 0x18B744u;
        goto label_18b744;
    }
    ctx->pc = 0x18B73Cu;
    {
        const bool branch_taken_0x18b73c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b73c) {
            ctx->pc = 0x18C030u;
            goto label_18c030;
        }
    }
    ctx->pc = 0x18B744u;
label_18b744:
    // 0x18b744: 0x1220001f  beqz        $s1, . + 4 + (0x1F << 2)
label_18b748:
    if (ctx->pc == 0x18B748u) {
        ctx->pc = 0x18B74Cu;
        goto label_18b74c;
    }
    ctx->pc = 0x18B744u;
    {
        const bool branch_taken_0x18b744 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b744) {
            ctx->pc = 0x18B7C4u;
            goto label_18b7c4;
        }
    }
    ctx->pc = 0x18B74Cu;
label_18b74c:
    // 0x18b74c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18b74cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18b750:
    // 0x18b750: 0xc0457e8  jal         func_115FA0
label_18b754:
    if (ctx->pc == 0x18B754u) {
        ctx->pc = 0x18B758u;
        goto label_18b758;
    }
    ctx->pc = 0x18B750u;
    SET_GPR_U32(ctx, 31, 0x18B758u);
    ctx->pc = 0x115FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115FA0u, 0x18B750u, 0x18B758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B758u;
label_18b758:
    // 0x18b758: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18b758u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18b75c:
    // 0x18b75c: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x18b75cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_18b760:
    // 0x18b760: 0x24a556d0  addiu       $a1, $a1, 0x56D0
    ctx->pc = 0x18b760u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22224));
label_18b764:
    // 0x18b764: 0x278691c8  addiu       $a2, $gp, -0x6E38
    ctx->pc = 0x18b764u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939080));
label_18b768:
    // 0x18b768: 0xc04206c  jal         func_1081B0
label_18b76c:
    if (ctx->pc == 0x18B76Cu) {
        ctx->pc = 0x18B770u;
        goto label_18b770;
    }
    ctx->pc = 0x18B768u;
    SET_GPR_U32(ctx, 31, 0x18B770u);
    ctx->pc = 0x1081B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1081B0u, 0x18B768u, 0x18B770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B770u;
label_18b770:
    // 0x18b770: 0x8f84bbdc  lw          $a0, -0x4424($gp)
    ctx->pc = 0x18b770u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949852)));
label_18b774:
    // 0x18b774: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x18b774u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18b778:
    // 0x18b778: 0xc08e57c  jal         func_2395F0
label_18b77c:
    if (ctx->pc == 0x18B77Cu) {
        ctx->pc = 0x18B780u;
        goto label_18b780;
    }
    ctx->pc = 0x18B778u;
    SET_GPR_U32(ctx, 31, 0x18B780u);
    ctx->pc = 0x2395F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2395F0u, 0x18B778u, 0x18B780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B780u;
label_18b780:
    // 0x18b780: 0x27a40220  addiu       $a0, $sp, 0x220
    ctx->pc = 0x18b780u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
label_18b784:
    // 0x18b784: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x18b784u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18b788:
    // 0x18b788: 0xc0406d0  jal         func_101B40
label_18b78c:
    if (ctx->pc == 0x18B78Cu) {
        ctx->pc = 0x18B790u;
        goto label_18b790;
    }
    ctx->pc = 0x18B788u;
    SET_GPR_U32(ctx, 31, 0x18B790u);
    ctx->pc = 0x101B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101B40u, 0x18B788u, 0x18B790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B790u;
label_18b790:
    // 0x18b790: 0x8fa20290  lw          $v0, 0x290($sp)
    ctx->pc = 0x18b790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
label_18b794:
    // 0x18b794: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x18b794u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_18b798:
    // 0x18b798: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x18b798u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18b79c:
    // 0x18b79c: 0x27a60220  addiu       $a2, $sp, 0x220
    ctx->pc = 0x18b79cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
label_18b7a0:
    // 0x18b7a0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x18b7a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18b7a4:
    // 0x18b7a4: 0xc08c378  jal         func_230DE0
label_18b7a8:
    if (ctx->pc == 0x18B7A8u) {
        ctx->pc = 0x18B7ACu;
        goto label_18b7ac;
    }
    ctx->pc = 0x18B7A4u;
    SET_GPR_U32(ctx, 31, 0x18B7ACu);
    ctx->pc = 0x230DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230DE0u, 0x18B7A4u, 0x18B7ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B7ACu;
label_18b7ac:
    // 0x18b7ac: 0x27a40220  addiu       $a0, $sp, 0x220
    ctx->pc = 0x18b7acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
label_18b7b0:
    // 0x18b7b0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x18b7b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_18b7b4:
    // 0x18b7b4: 0xc0406a0  jal         func_101A80
label_18b7b8:
    if (ctx->pc == 0x18B7B8u) {
        ctx->pc = 0x18B7BCu;
        goto label_18b7bc;
    }
    ctx->pc = 0x18B7B4u;
    SET_GPR_U32(ctx, 31, 0x18B7BCu);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x18B7B4u, 0x18B7BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B7BCu;
label_18b7bc:
    // 0x18b7bc: 0x1000021c  b           . + 4 + (0x21C << 2)
label_18b7c0:
    if (ctx->pc == 0x18B7C0u) {
        ctx->pc = 0x18B7C4u;
        goto label_18b7c4;
    }
    ctx->pc = 0x18B7BCu;
    {
        const bool branch_taken_0x18b7bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b7bc) {
            ctx->pc = 0x18C030u;
            goto label_18c030;
        }
    }
    ctx->pc = 0x18B7C4u;
label_18b7c4:
    // 0x18b7c4: 0x8fa20290  lw          $v0, 0x290($sp)
    ctx->pc = 0x18b7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
label_18b7c8:
    // 0x18b7c8: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x18b7c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_18b7cc:
    // 0x18b7cc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x18b7ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18b7d0:
    // 0x18b7d0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18b7d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18b7d4:
    // 0x18b7d4: 0xc08c8dc  jal         func_232370
label_18b7d8:
    if (ctx->pc == 0x18B7D8u) {
        ctx->pc = 0x18B7DCu;
        goto label_18b7dc;
    }
    ctx->pc = 0x18B7D4u;
    SET_GPR_U32(ctx, 31, 0x18B7DCu);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x18B7D4u, 0x18B7DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B7DCu;
label_18b7dc:
    // 0x18b7dc: 0x10000214  b           . + 4 + (0x214 << 2)
label_18b7e0:
    if (ctx->pc == 0x18B7E0u) {
        ctx->pc = 0x18B7E4u;
        goto label_18b7e4;
    }
    ctx->pc = 0x18B7DCu;
    {
        const bool branch_taken_0x18b7dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b7dc) {
            ctx->pc = 0x18C030u;
            goto label_18c030;
        }
    }
    ctx->pc = 0x18B7E4u;
label_18b7e4:
    // 0x18b7e4: 0x122000d1  beqz        $s1, . + 4 + (0xD1 << 2)
label_18b7e8:
    if (ctx->pc == 0x18B7E8u) {
        ctx->pc = 0x18B7ECu;
        goto label_18b7ec;
    }
    ctx->pc = 0x18B7E4u;
    {
        const bool branch_taken_0x18b7e4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b7e4) {
            ctx->pc = 0x18BB2Cu;
            goto label_18bb2c;
        }
    }
    ctx->pc = 0x18B7ECu;
label_18b7ec:
    // 0x18b7ec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x18b7ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18b7f0:
    // 0x18b7f0: 0x0  nop
    ctx->pc = 0x18b7f0u;
    // NOP
label_18b7f4:
    // 0x18b7f4: 0xe7a00268  swc1        $f0, 0x268($sp)
    ctx->pc = 0x18b7f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 616), bits); }
label_18b7f8:
    // 0x18b7f8: 0xafa00264  sw          $zero, 0x264($sp)
    ctx->pc = 0x18b7f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 0));
label_18b7fc:
    // 0x18b7fc: 0xc090864  jal         func_242190
label_18b800:
    if (ctx->pc == 0x18B800u) {
        ctx->pc = 0x18B804u;
        goto label_18b804;
    }
    ctx->pc = 0x18B7FCu;
    SET_GPR_U32(ctx, 31, 0x18B804u);
    ctx->pc = 0x242190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242190u, 0x18B7FCu, 0x18B804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B804u;
label_18b804:
    // 0x18b804: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18b804u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18b808:
    // 0x18b808: 0xc090598  jal         func_241660
label_18b80c:
    if (ctx->pc == 0x18B80Cu) {
        ctx->pc = 0x18B810u;
        goto label_18b810;
    }
    ctx->pc = 0x18B808u;
    SET_GPR_U32(ctx, 31, 0x18B810u);
    ctx->pc = 0x241660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241660u, 0x18B808u, 0x18B810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B810u;
label_18b810:
    // 0x18b810: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x18b810u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
label_18b814:
    // 0x18b814: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18b814u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18b818:
    // 0x18b818: 0xc0457d8  jal         func_115F60
label_18b81c:
    if (ctx->pc == 0x18B81Cu) {
        ctx->pc = 0x18B820u;
        goto label_18b820;
    }
    ctx->pc = 0x18B818u;
    SET_GPR_U32(ctx, 31, 0x18B820u);
    ctx->pc = 0x115F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115F60u, 0x18B818u, 0x18B820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B820u;
label_18b820:
    // 0x18b820: 0x7ba400c0  lq          $a0, 0xC0($sp)
    ctx->pc = 0x18b820u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_18b824:
    // 0x18b824: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x18b824u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18b828:
    // 0x18b828: 0xc095ad0  jal         func_256B40
label_18b82c:
    if (ctx->pc == 0x18B82Cu) {
        ctx->pc = 0x18B830u;
        goto label_18b830;
    }
    ctx->pc = 0x18B828u;
    SET_GPR_U32(ctx, 31, 0x18B830u);
    ctx->pc = 0x256B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x256B40u, 0x18B828u, 0x18B830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B830u;
label_18b830:
    // 0x18b830: 0xafa20260  sw          $v0, 0x260($sp)
    ctx->pc = 0x18b830u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 608), GPR_U32(ctx, 2));
label_18b834:
    // 0x18b834: 0x8fa30278  lw          $v1, 0x278($sp)
    ctx->pc = 0x18b834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 632)));
label_18b838:
    // 0x18b838: 0x1060001f  beqz        $v1, . + 4 + (0x1F << 2)
label_18b83c:
    if (ctx->pc == 0x18B83Cu) {
        ctx->pc = 0x18B840u;
        goto label_18b840;
    }
    ctx->pc = 0x18B838u;
    {
        const bool branch_taken_0x18b838 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b838) {
            ctx->pc = 0x18B8B8u;
            goto label_18b8b8;
        }
    }
    ctx->pc = 0x18B840u;
label_18b840:
    // 0x18b840: 0x1280001d  beqz        $s4, . + 4 + (0x1D << 2)
label_18b844:
    if (ctx->pc == 0x18B844u) {
        ctx->pc = 0x18B848u;
        goto label_18b848;
    }
    ctx->pc = 0x18B840u;
    {
        const bool branch_taken_0x18b840 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b840) {
            ctx->pc = 0x18B8B8u;
            goto label_18b8b8;
        }
    }
    ctx->pc = 0x18B848u;
label_18b848:
    // 0x18b848: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x18b848u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_18b84c:
    // 0x18b84c: 0xc040aa8  jal         func_102AA0
label_18b850:
    if (ctx->pc == 0x18B850u) {
        ctx->pc = 0x18B854u;
        goto label_18b854;
    }
    ctx->pc = 0x18B84Cu;
    SET_GPR_U32(ctx, 31, 0x18B854u);
    ctx->pc = 0x102AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AA0u, 0x18B84Cu, 0x18B854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B854u;
label_18b854:
    // 0x18b854: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18b854u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18b858:
    // 0x18b858: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x18b858u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_18b85c:
    // 0x18b85c: 0xc040a90  jal         func_102A40
label_18b860:
    if (ctx->pc == 0x18B860u) {
        ctx->pc = 0x18B864u;
        goto label_18b864;
    }
    ctx->pc = 0x18B85Cu;
    SET_GPR_U32(ctx, 31, 0x18B864u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x18B85Cu, 0x18B864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B864u;
label_18b864:
    // 0x18b864: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x18b864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_18b868:
    // 0x18b868: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x18b868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_18b86c:
    // 0x18b86c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x18b86cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_18b870:
    // 0x18b870: 0xc040aa8  jal         func_102AA0
label_18b874:
    if (ctx->pc == 0x18B874u) {
        ctx->pc = 0x18B878u;
        goto label_18b878;
    }
    ctx->pc = 0x18B870u;
    SET_GPR_U32(ctx, 31, 0x18B878u);
    ctx->pc = 0x102AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AA0u, 0x18B870u, 0x18B878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B878u;
label_18b878:
    // 0x18b878: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18b878u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18b87c:
    // 0x18b87c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x18b87cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_18b880:
    // 0x18b880: 0xc040a90  jal         func_102A40
label_18b884:
    if (ctx->pc == 0x18B884u) {
        ctx->pc = 0x18B888u;
        goto label_18b888;
    }
    ctx->pc = 0x18B880u;
    SET_GPR_U32(ctx, 31, 0x18B888u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x18B880u, 0x18B888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B888u;
label_18b888:
    // 0x18b888: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x18b888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_18b88c:
    // 0x18b88c: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x18b88cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_18b890:
    // 0x18b890: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x18b890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18b894:
    // 0x18b894: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x18b894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18b898:
    // 0x18b898: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x18b898u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_18b89c:
    // 0x18b89c: 0xe7a00268  swc1        $f0, 0x268($sp)
    ctx->pc = 0x18b89cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 616), bits); }
label_18b8a0:
    // 0x18b8a0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x18b8a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_18b8a4:
    // 0x18b8a4: 0xc0984a4  jal         func_261290
label_18b8a8:
    if (ctx->pc == 0x18B8A8u) {
        ctx->pc = 0x18B8ACu;
        goto label_18b8ac;
    }
    ctx->pc = 0x18B8A4u;
    SET_GPR_U32(ctx, 31, 0x18B8ACu);
    ctx->pc = 0x261290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261290u, 0x18B8A4u, 0x18B8ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B8ACu;
label_18b8ac:
    // 0x18b8ac: 0xafa20264  sw          $v0, 0x264($sp)
    ctx->pc = 0x18b8acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 2));
label_18b8b0:
    // 0x18b8b0: 0x1000001b  b           . + 4 + (0x1B << 2)
label_18b8b4:
    if (ctx->pc == 0x18B8B4u) {
        ctx->pc = 0x18B8B8u;
        goto label_18b8b8;
    }
    ctx->pc = 0x18B8B0u;
    {
        const bool branch_taken_0x18b8b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b8b0) {
            ctx->pc = 0x18B920u;
            goto label_18b920;
        }
    }
    ctx->pc = 0x18B8B8u;
label_18b8b8:
    // 0x18b8b8: 0x8fa30260  lw          $v1, 0x260($sp)
    ctx->pc = 0x18b8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
label_18b8bc:
    // 0x18b8bc: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
label_18b8c0:
    if (ctx->pc == 0x18B8C0u) {
        ctx->pc = 0x18B8C4u;
        goto label_18b8c4;
    }
    ctx->pc = 0x18B8BCu;
    {
        const bool branch_taken_0x18b8bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b8bc) {
            ctx->pc = 0x18B920u;
            goto label_18b920;
        }
    }
    ctx->pc = 0x18B8C4u;
label_18b8c4:
    // 0x18b8c4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x18b8c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_18b8c8:
    // 0x18b8c8: 0x8fa40260  lw          $a0, 0x260($sp)
    ctx->pc = 0x18b8c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
label_18b8cc:
    // 0x18b8cc: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x18b8ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_18b8d0:
    // 0x18b8d0: 0x24a556e0  addiu       $a1, $a1, 0x56E0
    ctx->pc = 0x18b8d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22240));
label_18b8d4:
    // 0x18b8d4: 0xc049b6c  jal         func_126DB0
label_18b8d8:
    if (ctx->pc == 0x18B8D8u) {
        ctx->pc = 0x18B8DCu;
        goto label_18b8dc;
    }
    ctx->pc = 0x18B8D4u;
    SET_GPR_U32(ctx, 31, 0x18B8DCu);
    ctx->pc = 0x126DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126DB0u, 0x18B8D4u, 0x18B8DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B8DCu;
label_18b8dc:
    // 0x18b8dc: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x18b8dcu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_18b8e0:
    // 0x18b8e0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x18b8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_18b8e4:
    // 0x18b8e4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x18b8e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_18b8e8:
    // 0x18b8e8: 0x8fa40260  lw          $a0, 0x260($sp)
    ctx->pc = 0x18b8e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
label_18b8ec:
    // 0x18b8ec: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x18b8ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_18b8f0:
    // 0x18b8f0: 0x24a55700  addiu       $a1, $a1, 0x5700
    ctx->pc = 0x18b8f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22272));
label_18b8f4:
    // 0x18b8f4: 0xc049b6c  jal         func_126DB0
label_18b8f8:
    if (ctx->pc == 0x18B8F8u) {
        ctx->pc = 0x18B8FCu;
        goto label_18b8fc;
    }
    ctx->pc = 0x18B8F4u;
    SET_GPR_U32(ctx, 31, 0x18B8FCu);
    ctx->pc = 0x126DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126DB0u, 0x18B8F4u, 0x18B8FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B8FCu;
label_18b8fc:
    // 0x18b8fc: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x18b8fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_18b900:
    // 0x18b900: 0xe7a00268  swc1        $f0, 0x268($sp)
    ctx->pc = 0x18b900u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 616), bits); }
label_18b904:
    // 0x18b904: 0x8fa40260  lw          $a0, 0x260($sp)
    ctx->pc = 0x18b904u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
label_18b908:
    // 0x18b908: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x18b908u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_18b90c:
    // 0x18b90c: 0x24a55720  addiu       $a1, $a1, 0x5720
    ctx->pc = 0x18b90cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22304));
label_18b910:
    // 0x18b910: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18b910u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18b914:
    // 0x18b914: 0xc047970  jal         func_11E5C0
label_18b918:
    if (ctx->pc == 0x18B918u) {
        ctx->pc = 0x18B91Cu;
        goto label_18b91c;
    }
    ctx->pc = 0x18B914u;
    SET_GPR_U32(ctx, 31, 0x18B91Cu);
    ctx->pc = 0x11E5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E5C0u, 0x18B914u, 0x18B91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B91Cu;
label_18b91c:
    // 0x18b91c: 0xafa20264  sw          $v0, 0x264($sp)
    ctx->pc = 0x18b91cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 2));
label_18b920:
    // 0x18b920: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x18b920u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18b924:
    // 0x18b924: 0x1000007c  b           . + 4 + (0x7C << 2)
label_18b928:
    if (ctx->pc == 0x18B928u) {
        ctx->pc = 0x18B92Cu;
        goto label_18b92c;
    }
    ctx->pc = 0x18B924u;
    {
        const bool branch_taken_0x18b924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b924) {
            ctx->pc = 0x18BB18u;
            goto label_18bb18;
        }
    }
    ctx->pc = 0x18B92Cu;
label_18b92c:
    // 0x18b92c: 0x26e70061  addiu       $a3, $s7, 0x61
    ctx->pc = 0x18b92cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 23), 97));
label_18b930:
    // 0x18b930: 0x27c80001  addiu       $t0, $fp, 0x1
    ctx->pc = 0x18b930u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
label_18b934:
    // 0x18b934: 0x27a40200  addiu       $a0, $sp, 0x200
    ctx->pc = 0x18b934u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
label_18b938:
    // 0x18b938: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x18b938u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_18b93c:
    // 0x18b93c: 0x24a55738  addiu       $a1, $a1, 0x5738
    ctx->pc = 0x18b93cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22328));
label_18b940:
    // 0x18b940: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x18b940u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_18b944:
    // 0x18b944: 0xc0bc3e2  jal         func_2F0F88
label_18b948:
    if (ctx->pc == 0x18B948u) {
        ctx->pc = 0x18B94Cu;
        goto label_18b94c;
    }
    ctx->pc = 0x18B944u;
    SET_GPR_U32(ctx, 31, 0x18B94Cu);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x18B944u, 0x18B94Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B94Cu;
label_18b94c:
    // 0x18b94c: 0x8fa40290  lw          $a0, 0x290($sp)
    ctx->pc = 0x18b94cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
label_18b950:
    // 0x18b950: 0x27a50200  addiu       $a1, $sp, 0x200
    ctx->pc = 0x18b950u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
label_18b954:
    // 0x18b954: 0xc05621c  jal         func_158870
label_18b958:
    if (ctx->pc == 0x18B958u) {
        ctx->pc = 0x18B95Cu;
        goto label_18b95c;
    }
    ctx->pc = 0x18B954u;
    SET_GPR_U32(ctx, 31, 0x18B95Cu);
    ctx->pc = 0x158870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158870u, 0x18B954u, 0x18B95Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B95Cu;
label_18b95c:
    // 0x18b95c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x18b95cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18b960:
    // 0x18b960: 0x1200006c  beqz        $s0, . + 4 + (0x6C << 2)
label_18b964:
    if (ctx->pc == 0x18B964u) {
        ctx->pc = 0x18B968u;
        goto label_18b968;
    }
    ctx->pc = 0x18B960u;
    {
        const bool branch_taken_0x18b960 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b960) {
            ctx->pc = 0x18BB14u;
            goto label_18bb14;
        }
    }
    ctx->pc = 0x18B968u;
label_18b968:
    // 0x18b968: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x18b968u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_18b96c:
    // 0x18b96c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18b96cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18b970:
    // 0x18b970: 0x0  nop
    ctx->pc = 0x18b970u;
    // NOP
label_18b974:
    // 0x18b974: 0xe7a0025c  swc1        $f0, 0x25C($sp)
    ctx->pc = 0x18b974u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 604), bits); }
label_18b978:
    // 0x18b978: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x18b978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_18b97c:
    // 0x18b97c: 0x13c20045  beq         $fp, $v0, . + 4 + (0x45 << 2)
label_18b980:
    if (ctx->pc == 0x18B980u) {
        ctx->pc = 0x18B984u;
        goto label_18b984;
    }
    ctx->pc = 0x18B97Cu;
    {
        const bool branch_taken_0x18b97c = (GPR_U64(ctx, 30) == GPR_U64(ctx, 2));
        if (branch_taken_0x18b97c) {
            ctx->pc = 0x18BA94u;
            goto label_18ba94;
        }
    }
    ctx->pc = 0x18B984u;
label_18b984:
    // 0x18b984: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18b984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18b988:
    // 0x18b988: 0x13c20005  beq         $fp, $v0, . + 4 + (0x5 << 2)
label_18b98c:
    if (ctx->pc == 0x18B98Cu) {
        ctx->pc = 0x18B990u;
        goto label_18b990;
    }
    ctx->pc = 0x18B988u;
    {
        const bool branch_taken_0x18b988 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 2));
        if (branch_taken_0x18b988) {
            ctx->pc = 0x18B9A0u;
            goto label_18b9a0;
        }
    }
    ctx->pc = 0x18B990u;
label_18b990:
    // 0x18b990: 0x13c00056  beqz        $fp, . + 4 + (0x56 << 2)
label_18b994:
    if (ctx->pc == 0x18B994u) {
        ctx->pc = 0x18B998u;
        goto label_18b998;
    }
    ctx->pc = 0x18B990u;
    {
        const bool branch_taken_0x18b990 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b990) {
            ctx->pc = 0x18BAECu;
            goto label_18baec;
        }
    }
    ctx->pc = 0x18B998u;
label_18b998:
    // 0x18b998: 0x10000054  b           . + 4 + (0x54 << 2)
label_18b99c:
    if (ctx->pc == 0x18B99Cu) {
        ctx->pc = 0x18B9A0u;
        goto label_18b9a0;
    }
    ctx->pc = 0x18B998u;
    {
        const bool branch_taken_0x18b998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b998) {
            ctx->pc = 0x18BAECu;
            goto label_18baec;
        }
    }
    ctx->pc = 0x18B9A0u;
label_18b9a0:
    // 0x18b9a0: 0x8fa20264  lw          $v0, 0x264($sp)
    ctx->pc = 0x18b9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
label_18b9a4:
    // 0x18b9a4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x18b9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_18b9a8:
    // 0x18b9a8: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_18b9ac:
    if (ctx->pc == 0x18B9ACu) {
        ctx->pc = 0x18B9B0u;
        goto label_18b9b0;
    }
    ctx->pc = 0x18B9A8u;
    {
        const bool branch_taken_0x18b9a8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x18b9a8) {
            ctx->pc = 0x18B9C4u;
            goto label_18b9c4;
        }
    }
    ctx->pc = 0x18B9B0u;
label_18b9b0:
    // 0x18b9b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18b9b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18b9b4:
    // 0x18b9b4: 0x0  nop
    ctx->pc = 0x18b9b4u;
    // NOP
label_18b9b8:
    // 0x18b9b8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x18b9b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_18b9bc:
    // 0x18b9bc: 0x10000008  b           . + 4 + (0x8 << 2)
label_18b9c0:
    if (ctx->pc == 0x18B9C0u) {
        ctx->pc = 0x18B9C4u;
        goto label_18b9c4;
    }
    ctx->pc = 0x18B9BCu;
    {
        const bool branch_taken_0x18b9bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b9bc) {
            ctx->pc = 0x18B9E0u;
            goto label_18b9e0;
        }
    }
    ctx->pc = 0x18B9C4u;
label_18b9c4:
    // 0x18b9c4: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x18b9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_18b9c8:
    // 0x18b9c8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x18b9c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_18b9cc:
    // 0x18b9cc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x18b9ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_18b9d0:
    // 0x18b9d0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x18b9d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18b9d4:
    // 0x18b9d4: 0x0  nop
    ctx->pc = 0x18b9d4u;
    // NOP
label_18b9d8:
    // 0x18b9d8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x18b9d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_18b9dc:
    // 0x18b9dc: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x18b9dcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_18b9e0:
    // 0x18b9e0: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x18b9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
label_18b9e4:
    // 0x18b9e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18b9e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18b9e8:
    // 0x18b9e8: 0x0  nop
    ctx->pc = 0x18b9e8u;
    // NOP
label_18b9ec:
    // 0x18b9ec: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x18b9ecu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_18b9f0:
    // 0x18b9f0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x18b9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_18b9f4:
    // 0x18b9f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18b9f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18b9f8:
    // 0x18b9f8: 0x0  nop
    ctx->pc = 0x18b9f8u;
    // NOP
label_18b9fc:
    // 0x18b9fc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x18b9fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18ba00:
    // 0x18ba00: 0x4500001a  bc1f        . + 4 + (0x1A << 2)
label_18ba04:
    if (ctx->pc == 0x18BA04u) {
        ctx->pc = 0x18BA08u;
        goto label_18ba08;
    }
    ctx->pc = 0x18BA00u;
    {
        const bool branch_taken_0x18ba00 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18ba00) {
            ctx->pc = 0x18BA6Cu;
            goto label_18ba6c;
        }
    }
    ctx->pc = 0x18BA08u;
label_18ba08:
    // 0x18ba08: 0x8fa20264  lw          $v0, 0x264($sp)
    ctx->pc = 0x18ba08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
label_18ba0c:
    // 0x18ba0c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x18ba0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_18ba10:
    // 0x18ba10: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_18ba14:
    if (ctx->pc == 0x18BA14u) {
        ctx->pc = 0x18BA18u;
        goto label_18ba18;
    }
    ctx->pc = 0x18BA10u;
    {
        const bool branch_taken_0x18ba10 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x18ba10) {
            ctx->pc = 0x18BA2Cu;
            goto label_18ba2c;
        }
    }
    ctx->pc = 0x18BA18u;
label_18ba18:
    // 0x18ba18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18ba18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18ba1c:
    // 0x18ba1c: 0x0  nop
    ctx->pc = 0x18ba1cu;
    // NOP
label_18ba20:
    // 0x18ba20: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x18ba20u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_18ba24:
    // 0x18ba24: 0x10000008  b           . + 4 + (0x8 << 2)
label_18ba28:
    if (ctx->pc == 0x18BA28u) {
        ctx->pc = 0x18BA2Cu;
        goto label_18ba2c;
    }
    ctx->pc = 0x18BA24u;
    {
        const bool branch_taken_0x18ba24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ba24) {
            ctx->pc = 0x18BA48u;
            goto label_18ba48;
        }
    }
    ctx->pc = 0x18BA2Cu;
label_18ba2c:
    // 0x18ba2c: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x18ba2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_18ba30:
    // 0x18ba30: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x18ba30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_18ba34:
    // 0x18ba34: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x18ba34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_18ba38:
    // 0x18ba38: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x18ba38u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18ba3c:
    // 0x18ba3c: 0x0  nop
    ctx->pc = 0x18ba3cu;
    // NOP
label_18ba40:
    // 0x18ba40: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x18ba40u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_18ba44:
    // 0x18ba44: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x18ba44u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_18ba48:
    // 0x18ba48: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x18ba48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
label_18ba4c:
    // 0x18ba4c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18ba4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18ba50:
    // 0x18ba50: 0x0  nop
    ctx->pc = 0x18ba50u;
    // NOP
label_18ba54:
    // 0x18ba54: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x18ba54u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_18ba58:
    // 0x18ba58: 0x0  nop
    ctx->pc = 0x18ba58u;
    // NOP
label_18ba5c:
    // 0x18ba5c: 0x0  nop
    ctx->pc = 0x18ba5cu;
    // NOP
label_18ba60:
    // 0x18ba60: 0xe7a00244  swc1        $f0, 0x244($sp)
    ctx->pc = 0x18ba60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 580), bits); }
label_18ba64:
    // 0x18ba64: 0x10000005  b           . + 4 + (0x5 << 2)
label_18ba68:
    if (ctx->pc == 0x18BA68u) {
        ctx->pc = 0x18BA6Cu;
        goto label_18ba6c;
    }
    ctx->pc = 0x18BA64u;
    {
        const bool branch_taken_0x18ba64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ba64) {
            ctx->pc = 0x18BA7Cu;
            goto label_18ba7c;
        }
    }
    ctx->pc = 0x18BA6Cu;
label_18ba6c:
    // 0x18ba6c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x18ba6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_18ba70:
    // 0x18ba70: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18ba70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18ba74:
    // 0x18ba74: 0x0  nop
    ctx->pc = 0x18ba74u;
    // NOP
label_18ba78:
    // 0x18ba78: 0xe7a00244  swc1        $f0, 0x244($sp)
    ctx->pc = 0x18ba78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 580), bits); }
label_18ba7c:
    // 0x18ba7c: 0xc78182e4  lwc1        $f1, -0x7D1C($gp)
    ctx->pc = 0x18ba7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18ba80:
    // 0x18ba80: 0xc7a00244  lwc1        $f0, 0x244($sp)
    ctx->pc = 0x18ba80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18ba84:
    // 0x18ba84: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x18ba84u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_18ba88:
    // 0x18ba88: 0xe7a0025c  swc1        $f0, 0x25C($sp)
    ctx->pc = 0x18ba88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 604), bits); }
label_18ba8c:
    // 0x18ba8c: 0x10000017  b           . + 4 + (0x17 << 2)
label_18ba90:
    if (ctx->pc == 0x18BA90u) {
        ctx->pc = 0x18BA94u;
        goto label_18ba94;
    }
    ctx->pc = 0x18BA8Cu;
    {
        const bool branch_taken_0x18ba8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ba8c) {
            ctx->pc = 0x18BAECu;
            goto label_18baec;
        }
    }
    ctx->pc = 0x18BA94u;
label_18ba94:
    // 0x18ba94: 0xc7a10268  lwc1        $f1, 0x268($sp)
    ctx->pc = 0x18ba94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18ba98:
    // 0x18ba98: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x18ba98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_18ba9c:
    // 0x18ba9c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18ba9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18baa0:
    // 0x18baa0: 0x0  nop
    ctx->pc = 0x18baa0u;
    // NOP
label_18baa4:
    // 0x18baa4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x18baa4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18baa8:
    // 0x18baa8: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_18baac:
    if (ctx->pc == 0x18BAACu) {
        ctx->pc = 0x18BAB0u;
        goto label_18bab0;
    }
    ctx->pc = 0x18BAA8u;
    {
        const bool branch_taken_0x18baa8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18baa8) {
            ctx->pc = 0x18BAC0u;
            goto label_18bac0;
        }
    }
    ctx->pc = 0x18BAB0u;
label_18bab0:
    // 0x18bab0: 0xc7a00268  lwc1        $f0, 0x268($sp)
    ctx->pc = 0x18bab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18bab4:
    // 0x18bab4: 0xe7a00240  swc1        $f0, 0x240($sp)
    ctx->pc = 0x18bab4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 576), bits); }
label_18bab8:
    // 0x18bab8: 0x10000005  b           . + 4 + (0x5 << 2)
label_18babc:
    if (ctx->pc == 0x18BABCu) {
        ctx->pc = 0x18BAC0u;
        goto label_18bac0;
    }
    ctx->pc = 0x18BAB8u;
    {
        const bool branch_taken_0x18bab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18bab8) {
            ctx->pc = 0x18BAD0u;
            goto label_18bad0;
        }
    }
    ctx->pc = 0x18BAC0u;
label_18bac0:
    // 0x18bac0: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x18bac0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_18bac4:
    // 0x18bac4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18bac4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18bac8:
    // 0x18bac8: 0x0  nop
    ctx->pc = 0x18bac8u;
    // NOP
label_18bacc:
    // 0x18bacc: 0xe7a00240  swc1        $f0, 0x240($sp)
    ctx->pc = 0x18baccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 576), bits); }
label_18bad0:
    // 0x18bad0: 0xc78282e4  lwc1        $f2, -0x7D1C($gp)
    ctx->pc = 0x18bad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_18bad4:
    // 0x18bad4: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x18bad4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_18bad8:
    // 0x18bad8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x18bad8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_18badc:
    // 0x18badc: 0xc7a00240  lwc1        $f0, 0x240($sp)
    ctx->pc = 0x18badcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18bae0:
    // 0x18bae0: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x18bae0u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_18bae4:
    // 0x18bae4: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x18bae4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_18bae8:
    // 0x18bae8: 0xe7a0025c  swc1        $f0, 0x25C($sp)
    ctx->pc = 0x18bae8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 604), bits); }
label_18baec:
    // 0x18baec: 0x8fa30290  lw          $v1, 0x290($sp)
    ctx->pc = 0x18baecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
label_18baf0:
    // 0x18baf0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x18baf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_18baf4:
    // 0x18baf4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x18baf4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_18baf8:
    // 0x18baf8: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x18baf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_18bafc:
    // 0x18bafc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x18bafcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18bb00:
    // 0x18bb00: 0xc7ac025c  lwc1        $f12, 0x25C($sp)
    ctx->pc = 0x18bb00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 604)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_18bb04:
    // 0x18bb04: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18bb04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18bb08:
    // 0x18bb08: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x18bb08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18bb0c:
    // 0x18bb0c: 0xc08c544  jal         func_231510
label_18bb10:
    if (ctx->pc == 0x18BB10u) {
        ctx->pc = 0x18BB14u;
        goto label_18bb14;
    }
    ctx->pc = 0x18BB0Cu;
    SET_GPR_U32(ctx, 31, 0x18BB14u);
    ctx->pc = 0x231510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231510u, 0x18BB0Cu, 0x18BB14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BB14u;
label_18bb14:
    // 0x18bb14: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x18bb14u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
label_18bb18:
    // 0x18bb18: 0x2bc30003  slti        $v1, $fp, 0x3
    ctx->pc = 0x18bb18u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 30) < (int64_t)(int32_t)3) ? 1 : 0);
label_18bb1c:
    // 0x18bb1c: 0x1460ff83  bnez        $v1, . + 4 + (-0x7D << 2)
label_18bb20:
    if (ctx->pc == 0x18BB20u) {
        ctx->pc = 0x18BB24u;
        goto label_18bb24;
    }
    ctx->pc = 0x18BB1Cu;
    {
        const bool branch_taken_0x18bb1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18bb1c) {
            ctx->pc = 0x18B92Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18b92c;
        }
    }
    ctx->pc = 0x18BB24u;
label_18bb24:
    // 0x18bb24: 0x10000142  b           . + 4 + (0x142 << 2)
label_18bb28:
    if (ctx->pc == 0x18BB28u) {
        ctx->pc = 0x18BB2Cu;
        goto label_18bb2c;
    }
    ctx->pc = 0x18BB24u;
    {
        const bool branch_taken_0x18bb24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18bb24) {
            ctx->pc = 0x18C030u;
            goto label_18c030;
        }
    }
    ctx->pc = 0x18BB2Cu;
label_18bb2c:
    // 0x18bb2c: 0x8fa20290  lw          $v0, 0x290($sp)
    ctx->pc = 0x18bb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
label_18bb30:
    // 0x18bb30: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x18bb30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_18bb34:
    // 0x18bb34: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x18bb34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18bb38:
    // 0x18bb38: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18bb38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18bb3c:
    // 0x18bb3c: 0xc08c8dc  jal         func_232370
label_18bb40:
    if (ctx->pc == 0x18BB40u) {
        ctx->pc = 0x18BB44u;
        goto label_18bb44;
    }
    ctx->pc = 0x18BB3Cu;
    SET_GPR_U32(ctx, 31, 0x18BB44u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x18BB3Cu, 0x18BB44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BB44u;
label_18bb44:
    // 0x18bb44: 0xafa00258  sw          $zero, 0x258($sp)
    ctx->pc = 0x18bb44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 600), GPR_U32(ctx, 0));
label_18bb48:
    // 0x18bb48: 0x10000019  b           . + 4 + (0x19 << 2)
label_18bb4c:
    if (ctx->pc == 0x18BB4Cu) {
        ctx->pc = 0x18BB50u;
        goto label_18bb50;
    }
    ctx->pc = 0x18BB48u;
    {
        const bool branch_taken_0x18bb48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18bb48) {
            ctx->pc = 0x18BBB0u;
            goto label_18bbb0;
        }
    }
    ctx->pc = 0x18BB50u;
label_18bb50:
    // 0x18bb50: 0x8fa20258  lw          $v0, 0x258($sp)
    ctx->pc = 0x18bb50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 600)));
label_18bb54:
    // 0x18bb54: 0x24470001  addiu       $a3, $v0, 0x1
    ctx->pc = 0x18bb54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_18bb58:
    // 0x18bb58: 0x27a40200  addiu       $a0, $sp, 0x200
    ctx->pc = 0x18bb58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
label_18bb5c:
    // 0x18bb5c: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x18bb5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_18bb60:
    // 0x18bb60: 0x24a55748  addiu       $a1, $a1, 0x5748
    ctx->pc = 0x18bb60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22344));
label_18bb64:
    // 0x18bb64: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x18bb64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_18bb68:
    // 0x18bb68: 0xc0bc3e2  jal         func_2F0F88
label_18bb6c:
    if (ctx->pc == 0x18BB6Cu) {
        ctx->pc = 0x18BB70u;
        goto label_18bb70;
    }
    ctx->pc = 0x18BB68u;
    SET_GPR_U32(ctx, 31, 0x18BB70u);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x18BB68u, 0x18BB70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BB70u;
label_18bb70:
    // 0x18bb70: 0x8fa40290  lw          $a0, 0x290($sp)
    ctx->pc = 0x18bb70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
label_18bb74:
    // 0x18bb74: 0x27a50200  addiu       $a1, $sp, 0x200
    ctx->pc = 0x18bb74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
label_18bb78:
    // 0x18bb78: 0xc05621c  jal         func_158870
label_18bb7c:
    if (ctx->pc == 0x18BB7Cu) {
        ctx->pc = 0x18BB80u;
        goto label_18bb80;
    }
    ctx->pc = 0x18BB78u;
    SET_GPR_U32(ctx, 31, 0x18BB80u);
    ctx->pc = 0x158870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158870u, 0x18BB78u, 0x18BB80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BB80u;
label_18bb80:
    // 0x18bb80: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x18bb80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18bb84:
    // 0x18bb84: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
label_18bb88:
    if (ctx->pc == 0x18BB88u) {
        ctx->pc = 0x18BB8Cu;
        goto label_18bb8c;
    }
    ctx->pc = 0x18BB84u;
    {
        const bool branch_taken_0x18bb84 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x18bb84) {
            ctx->pc = 0x18BBA4u;
            goto label_18bba4;
        }
    }
    ctx->pc = 0x18BB8Cu;
label_18bb8c:
    // 0x18bb8c: 0x8fa20290  lw          $v0, 0x290($sp)
    ctx->pc = 0x18bb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
label_18bb90:
    // 0x18bb90: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x18bb90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_18bb94:
    // 0x18bb94: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x18bb94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18bb98:
    // 0x18bb98: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18bb98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18bb9c:
    // 0x18bb9c: 0xc08c8dc  jal         func_232370
label_18bba0:
    if (ctx->pc == 0x18BBA0u) {
        ctx->pc = 0x18BBA4u;
        goto label_18bba4;
    }
    ctx->pc = 0x18BB9Cu;
    SET_GPR_U32(ctx, 31, 0x18BBA4u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x18BB9Cu, 0x18BBA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BBA4u;
label_18bba4:
    // 0x18bba4: 0x8fa30258  lw          $v1, 0x258($sp)
    ctx->pc = 0x18bba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 600)));
label_18bba8:
    // 0x18bba8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x18bba8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_18bbac:
    // 0x18bbac: 0xafa30258  sw          $v1, 0x258($sp)
    ctx->pc = 0x18bbacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 600), GPR_U32(ctx, 3));
label_18bbb0:
    // 0x18bbb0: 0x8fa30258  lw          $v1, 0x258($sp)
    ctx->pc = 0x18bbb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 600)));
label_18bbb4:
    // 0x18bbb4: 0x28630003  slti        $v1, $v1, 0x3
    ctx->pc = 0x18bbb4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_18bbb8:
    // 0x18bbb8: 0x1460ffe5  bnez        $v1, . + 4 + (-0x1B << 2)
label_18bbbc:
    if (ctx->pc == 0x18BBBCu) {
        ctx->pc = 0x18BBC0u;
        goto label_18bbc0;
    }
    ctx->pc = 0x18BBB8u;
    {
        const bool branch_taken_0x18bbb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18bbb8) {
            ctx->pc = 0x18BB50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18bb50;
        }
    }
    ctx->pc = 0x18BBC0u;
label_18bbc0:
    // 0x18bbc0: 0x1000011b  b           . + 4 + (0x11B << 2)
label_18bbc4:
    if (ctx->pc == 0x18BBC4u) {
        ctx->pc = 0x18BBC8u;
        goto label_18bbc8;
    }
    ctx->pc = 0x18BBC0u;
    {
        const bool branch_taken_0x18bbc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18bbc0) {
            ctx->pc = 0x18C030u;
            goto label_18c030;
        }
    }
    ctx->pc = 0x18BBC8u;
label_18bbc8:
    // 0x18bbc8: 0x122000f5  beqz        $s1, . + 4 + (0xF5 << 2)
label_18bbcc:
    if (ctx->pc == 0x18BBCCu) {
        ctx->pc = 0x18BBD0u;
        goto label_18bbd0;
    }
    ctx->pc = 0x18BBC8u;
    {
        const bool branch_taken_0x18bbc8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x18bbc8) {
            ctx->pc = 0x18BFA0u;
            goto label_18bfa0;
        }
    }
    ctx->pc = 0x18BBD0u;
label_18bbd0:
    // 0x18bbd0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x18bbd0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18bbd4:
    // 0x18bbd4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x18bbd4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18bbd8:
    // 0x18bbd8: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x18bbd8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_18bbdc:
    // 0x18bbdc: 0x24a55390  addiu       $a1, $a1, 0x5390
    ctx->pc = 0x18bbdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21392));
label_18bbe0:
    // 0x18bbe0: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x18bbe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_18bbe4:
    // 0x18bbe4: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x18bbe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_18bbe8:
    // 0x18bbe8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x18bbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_18bbec:
    // 0x18bbec: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x18bbecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_18bbf0:
    // 0x18bbf0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x18bbf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_18bbf4:
    // 0x18bbf4: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x18bbf4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_18bbf8:
    // 0x18bbf8: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x18bbf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_18bbfc:
    // 0x18bbfc: 0x1c60fffa  bgtz        $v1, . + 4 + (-0x6 << 2)
label_18bc00:
    if (ctx->pc == 0x18BC00u) {
        ctx->pc = 0x18BC04u;
        goto label_18bc04;
    }
    ctx->pc = 0x18BBFCu;
    {
        const bool branch_taken_0x18bbfc = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x18bbfc) {
            ctx->pc = 0x18BBE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18bbe8;
        }
    }
    ctx->pc = 0x18BC04u;
label_18bc04:
    // 0x18bc04: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x18bc04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_18bc08:
    // 0x18bc08: 0x24a55490  addiu       $a1, $a1, 0x5490
    ctx->pc = 0x18bc08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21648));
label_18bc0c:
    // 0x18bc0c: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x18bc0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_18bc10:
    // 0x18bc10: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x18bc10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_18bc14:
    // 0x18bc14: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x18bc14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_18bc18:
    // 0x18bc18: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x18bc18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_18bc1c:
    // 0x18bc1c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x18bc1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_18bc20:
    // 0x18bc20: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x18bc20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_18bc24:
    // 0x18bc24: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x18bc24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_18bc28:
    // 0x18bc28: 0x1c60fffa  bgtz        $v1, . + 4 + (-0x6 << 2)
label_18bc2c:
    if (ctx->pc == 0x18BC2Cu) {
        ctx->pc = 0x18BC30u;
        goto label_18bc30;
    }
    ctx->pc = 0x18BC28u;
    {
        const bool branch_taken_0x18bc28 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x18bc28) {
            ctx->pc = 0x18BC14u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18bc14;
        }
    }
    ctx->pc = 0x18BC30u;
label_18bc30:
    // 0x18bc30: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x18bc30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_18bc34:
    // 0x18bc34: 0x24a55620  addiu       $a1, $a1, 0x5620
    ctx->pc = 0x18bc34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22048));
label_18bc38:
    // 0x18bc38: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x18bc38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_18bc3c:
    // 0x18bc3c: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x18bc3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_18bc40:
    // 0x18bc40: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x18bc40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_18bc44:
    // 0x18bc44: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x18bc44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_18bc48:
    // 0x18bc48: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x18bc48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_18bc4c:
    // 0x18bc4c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x18bc4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_18bc50:
    // 0x18bc50: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x18bc50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_18bc54:
    // 0x18bc54: 0x1c60fffa  bgtz        $v1, . + 4 + (-0x6 << 2)
label_18bc58:
    if (ctx->pc == 0x18BC58u) {
        ctx->pc = 0x18BC5Cu;
        goto label_18bc5c;
    }
    ctx->pc = 0x18BC54u;
    {
        const bool branch_taken_0x18bc54 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x18bc54) {
            ctx->pc = 0x18BC40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18bc40;
        }
    }
    ctx->pc = 0x18BC5Cu;
label_18bc5c:
    // 0x18bc5c: 0x3c04004e  lui         $a0, 0x4E
    ctx->pc = 0x18bc5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)78 << 16));
label_18bc60:
    // 0x18bc60: 0x24845650  addiu       $a0, $a0, 0x5650
    ctx->pc = 0x18bc60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22096));
label_18bc64:
    // 0x18bc64: 0x27a20120  addiu       $v0, $sp, 0x120
    ctx->pc = 0x18bc64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_18bc68:
    // 0x18bc68: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x18bc68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_18bc6c:
    // 0x18bc6c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x18bc6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_18bc70:
    // 0x18bc70: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x18bc70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_18bc74:
    // 0x18bc74: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x18bc74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_18bc78:
    // 0x18bc78: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x18bc78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_18bc7c:
    // 0x18bc7c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x18bc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_18bc80:
    // 0x18bc80: 0x1ca0fffa  bgtz        $a1, . + 4 + (-0x6 << 2)
label_18bc84:
    if (ctx->pc == 0x18BC84u) {
        ctx->pc = 0x18BC88u;
        goto label_18bc88;
    }
    ctx->pc = 0x18BC80u;
    {
        const bool branch_taken_0x18bc80 = (GPR_S32(ctx, 5) > 0);
        if (branch_taken_0x18bc80) {
            ctx->pc = 0x18BC6Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18bc6c;
        }
    }
    ctx->pc = 0x18BC88u;
label_18bc88:
    // 0x18bc88: 0xc090864  jal         func_242190
label_18bc8c:
    if (ctx->pc == 0x18BC8Cu) {
        ctx->pc = 0x18BC90u;
        goto label_18bc90;
    }
    ctx->pc = 0x18BC88u;
    SET_GPR_U32(ctx, 31, 0x18BC90u);
    ctx->pc = 0x242190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242190u, 0x18BC88u, 0x18BC90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BC90u;
label_18bc90:
    // 0x18bc90: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18bc90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18bc94:
    // 0x18bc94: 0xc090598  jal         func_241660
label_18bc98:
    if (ctx->pc == 0x18BC98u) {
        ctx->pc = 0x18BC9Cu;
        goto label_18bc9c;
    }
    ctx->pc = 0x18BC94u;
    SET_GPR_U32(ctx, 31, 0x18BC9Cu);
    ctx->pc = 0x241660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241660u, 0x18BC94u, 0x18BC9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BC9Cu;
label_18bc9c:
    // 0x18bc9c: 0x7fa20110  sq          $v0, 0x110($sp)
    ctx->pc = 0x18bc9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 2));
label_18bca0:
    // 0x18bca0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18bca0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18bca4:
    // 0x18bca4: 0xc0457d8  jal         func_115F60
label_18bca8:
    if (ctx->pc == 0x18BCA8u) {
        ctx->pc = 0x18BCACu;
        goto label_18bcac;
    }
    ctx->pc = 0x18BCA4u;
    SET_GPR_U32(ctx, 31, 0x18BCACu);
    ctx->pc = 0x115F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115F60u, 0x18BCA4u, 0x18BCACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BCACu;
label_18bcac:
    // 0x18bcac: 0x7ba40110  lq          $a0, 0x110($sp)
    ctx->pc = 0x18bcacu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_18bcb0:
    // 0x18bcb0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x18bcb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18bcb4:
    // 0x18bcb4: 0xc095ad0  jal         func_256B40
label_18bcb8:
    if (ctx->pc == 0x18BCB8u) {
        ctx->pc = 0x18BCBCu;
        goto label_18bcbc;
    }
    ctx->pc = 0x18BCB4u;
    SET_GPR_U32(ctx, 31, 0x18BCBCu);
    ctx->pc = 0x256B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x256B40u, 0x18BCB4u, 0x18BCBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BCBCu;
label_18bcbc:
    // 0x18bcbc: 0xafa20254  sw          $v0, 0x254($sp)
    ctx->pc = 0x18bcbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 596), GPR_U32(ctx, 2));
label_18bcc0:
    // 0x18bcc0: 0x1000008d  b           . + 4 + (0x8D << 2)
label_18bcc4:
    if (ctx->pc == 0x18BCC4u) {
        ctx->pc = 0x18BCC8u;
        goto label_18bcc8;
    }
    ctx->pc = 0x18BCC0u;
    {
        const bool branch_taken_0x18bcc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18bcc0) {
            ctx->pc = 0x18BEF8u;
            goto label_18bef8;
        }
    }
    ctx->pc = 0x18BCC8u;
label_18bcc8:
    // 0x18bcc8: 0x8fa30278  lw          $v1, 0x278($sp)
    ctx->pc = 0x18bcc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 632)));
label_18bccc:
    // 0x18bccc: 0x10600045  beqz        $v1, . + 4 + (0x45 << 2)
label_18bcd0:
    if (ctx->pc == 0x18BCD0u) {
        ctx->pc = 0x18BCD4u;
        goto label_18bcd4;
    }
    ctx->pc = 0x18BCCCu;
    {
        const bool branch_taken_0x18bccc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18bccc) {
            ctx->pc = 0x18BDE4u;
            goto label_18bde4;
        }
    }
    ctx->pc = 0x18BCD4u;
label_18bcd4:
    // 0x18bcd4: 0x12800043  beqz        $s4, . + 4 + (0x43 << 2)
label_18bcd8:
    if (ctx->pc == 0x18BCD8u) {
        ctx->pc = 0x18BCDCu;
        goto label_18bcdc;
    }
    ctx->pc = 0x18BCD4u;
    {
        const bool branch_taken_0x18bcd4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x18bcd4) {
            ctx->pc = 0x18BDE4u;
            goto label_18bde4;
        }
    }
    ctx->pc = 0x18BCDCu;
label_18bcdc:
    // 0x18bcdc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x18bcdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_18bce0:
    // 0x18bce0: 0xc040aa8  jal         func_102AA0
label_18bce4:
    if (ctx->pc == 0x18BCE4u) {
        ctx->pc = 0x18BCE8u;
        goto label_18bce8;
    }
    ctx->pc = 0x18BCE0u;
    SET_GPR_U32(ctx, 31, 0x18BCE8u);
    ctx->pc = 0x102AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AA0u, 0x18BCE0u, 0x18BCE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BCE8u;
label_18bce8:
    // 0x18bce8: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x18bce8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_18bcec:
    // 0x18bcec: 0x7d2021  addu        $a0, $v1, $sp
    ctx->pc = 0x18bcecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
label_18bcf0:
    // 0x18bcf0: 0x8c850120  lw          $a1, 0x120($a0)
    ctx->pc = 0x18bcf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 288)));
label_18bcf4:
    // 0x18bcf4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18bcf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18bcf8:
    // 0x18bcf8: 0xc040a90  jal         func_102A40
label_18bcfc:
    if (ctx->pc == 0x18BCFCu) {
        ctx->pc = 0x18BD00u;
        goto label_18bd00;
    }
    ctx->pc = 0x18BCF8u;
    SET_GPR_U32(ctx, 31, 0x18BD00u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x18BCF8u, 0x18BD00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BD00u;
label_18bd00:
    // 0x18bd00: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x18bd00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_18bd04:
    // 0x18bd04: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x18bd04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18bd08:
    // 0x18bd08: 0xe7a00250  swc1        $f0, 0x250($sp)
    ctx->pc = 0x18bd08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 592), bits); }
label_18bd0c:
    // 0x18bd0c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x18bd0cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_18bd10:
    // 0x18bd10: 0xc7a00250  lwc1        $f0, 0x250($sp)
    ctx->pc = 0x18bd10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18bd14:
    // 0x18bd14: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x18bd14u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18bd18:
    // 0x18bd18: 0x4500002e  bc1f        . + 4 + (0x2E << 2)
label_18bd1c:
    if (ctx->pc == 0x18BD1Cu) {
        ctx->pc = 0x18BD20u;
        goto label_18bd20;
    }
    ctx->pc = 0x18BD18u;
    {
        const bool branch_taken_0x18bd18 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18bd18) {
            ctx->pc = 0x18BDD4u;
            goto label_18bdd4;
        }
    }
    ctx->pc = 0x18BD20u;
label_18bd20:
    // 0x18bd20: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x18bd20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_18bd24:
    // 0x18bd24: 0x7d2821  addu        $a1, $v1, $sp
    ctx->pc = 0x18bd24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
label_18bd28:
    // 0x18bd28: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x18bd28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_18bd2c:
    // 0x18bd2c: 0x8ca20120  lw          $v0, 0x120($a1)
    ctx->pc = 0x18bd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 288)));
label_18bd30:
    // 0x18bd30: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x18bd30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18bd34:
    // 0x18bd34: 0xc0980d0  jal         func_260340
label_18bd38:
    if (ctx->pc == 0x18BD38u) {
        ctx->pc = 0x18BD3Cu;
        goto label_18bd3c;
    }
    ctx->pc = 0x18BD34u;
    SET_GPR_U32(ctx, 31, 0x18BD3Cu);
    ctx->pc = 0x260340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260340u, 0x18BD34u, 0x18BD3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BD3Cu;
label_18bd3c:
    // 0x18bd3c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18bd3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18bd40:
    // 0x18bd40: 0xa3a4028f  sb          $a0, 0x28F($sp)
    ctx->pc = 0x18bd40u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 655), (uint8_t)GPR_U32(ctx, 4));
label_18bd44:
    // 0x18bd44: 0x93a3028f  lbu         $v1, 0x28F($sp)
    ctx->pc = 0x18bd44u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 655)));
label_18bd48:
    // 0x18bd48: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x18bd48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_18bd4c:
    // 0x18bd4c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x18bd4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18bd50:
    // 0x18bd50: 0x1485001e  bne         $a0, $a1, . + 4 + (0x1E << 2)
label_18bd54:
    if (ctx->pc == 0x18BD54u) {
        ctx->pc = 0x18BD58u;
        goto label_18bd58;
    }
    ctx->pc = 0x18BD50u;
    {
        const bool branch_taken_0x18bd50 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        if (branch_taken_0x18bd50) {
            ctx->pc = 0x18BDCCu;
            goto label_18bdcc;
        }
    }
    ctx->pc = 0x18BD58u;
label_18bd58:
    // 0x18bd58: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x18bd58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_18bd5c:
    // 0x18bd5c: 0x27a40200  addiu       $a0, $sp, 0x200
    ctx->pc = 0x18bd5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
label_18bd60:
    // 0x18bd60: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x18bd60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_18bd64:
    // 0x18bd64: 0x24a55758  addiu       $a1, $a1, 0x5758
    ctx->pc = 0x18bd64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22360));
label_18bd68:
    // 0x18bd68: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x18bd68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_18bd6c:
    // 0x18bd6c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x18bd6cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18bd70:
    // 0x18bd70: 0xc0bc3e2  jal         func_2F0F88
label_18bd74:
    if (ctx->pc == 0x18BD74u) {
        ctx->pc = 0x18BD78u;
        goto label_18bd78;
    }
    ctx->pc = 0x18BD70u;
    SET_GPR_U32(ctx, 31, 0x18BD78u);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x18BD70u, 0x18BD78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BD78u;
label_18bd78:
    // 0x18bd78: 0x8fa50290  lw          $a1, 0x290($sp)
    ctx->pc = 0x18bd78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
label_18bd7c:
    // 0x18bd7c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x18bd7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_18bd80:
    // 0x18bd80: 0x27a20200  addiu       $v0, $sp, 0x200
    ctx->pc = 0x18bd80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
label_18bd84:
    // 0x18bd84: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x18bd84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18bd88:
    // 0x18bd88: 0xc05621c  jal         func_158870
label_18bd8c:
    if (ctx->pc == 0x18BD8Cu) {
        ctx->pc = 0x18BD90u;
        goto label_18bd90;
    }
    ctx->pc = 0x18BD88u;
    SET_GPR_U32(ctx, 31, 0x18BD90u);
    ctx->pc = 0x158870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158870u, 0x18BD88u, 0x18BD90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BD90u;
label_18bd90:
    // 0x18bd90: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x18bd90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18bd94:
    // 0x18bd94: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x18bd94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_18bd98:
    // 0x18bd98: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
label_18bd9c:
    if (ctx->pc == 0x18BD9Cu) {
        ctx->pc = 0x18BDA0u;
        goto label_18bda0;
    }
    ctx->pc = 0x18BD98u;
    {
        const bool branch_taken_0x18bd98 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x18bd98) {
            ctx->pc = 0x18BDCCu;
            goto label_18bdcc;
        }
    }
    ctx->pc = 0x18BDA0u;
label_18bda0:
    // 0x18bda0: 0x8fa70290  lw          $a3, 0x290($sp)
    ctx->pc = 0x18bda0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
label_18bda4:
    // 0x18bda4: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x18bda4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_18bda8:
    // 0x18bda8: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x18bda8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_18bdac:
    // 0x18bdac: 0x8ce50034  lw          $a1, 0x34($a3)
    ctx->pc = 0x18bdacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 52)));
label_18bdb0:
    // 0x18bdb0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x18bdb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_18bdb4:
    // 0x18bdb4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x18bdb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18bdb8:
    // 0x18bdb8: 0x8c420180  lw          $v0, 0x180($v0)
    ctx->pc = 0x18bdb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 384)));
label_18bdbc:
    // 0x18bdbc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x18bdbcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18bdc0:
    // 0x18bdc0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x18bdc0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18bdc4:
    // 0x18bdc4: 0xc08c800  jal         func_232000
label_18bdc8:
    if (ctx->pc == 0x18BDC8u) {
        ctx->pc = 0x18BDCCu;
        goto label_18bdcc;
    }
    ctx->pc = 0x18BDC4u;
    SET_GPR_U32(ctx, 31, 0x18BDCCu);
    ctx->pc = 0x232000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232000u, 0x18BDC4u, 0x18BDCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BDCCu;
label_18bdcc:
    // 0x18bdcc: 0x26440001  addiu       $a0, $s2, 0x1
    ctx->pc = 0x18bdccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_18bdd0:
    // 0x18bdd0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x18bdd0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_18bdd4:
    // 0x18bdd4: 0x26650001  addiu       $a1, $s3, 0x1
    ctx->pc = 0x18bdd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_18bdd8:
    // 0x18bdd8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x18bdd8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_18bddc:
    // 0x18bddc: 0x10000046  b           . + 4 + (0x46 << 2)
label_18bde0:
    if (ctx->pc == 0x18BDE0u) {
        ctx->pc = 0x18BDE4u;
        goto label_18bde4;
    }
    ctx->pc = 0x18BDDCu;
    {
        const bool branch_taken_0x18bddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18bddc) {
            ctx->pc = 0x18BEF8u;
            goto label_18bef8;
        }
    }
    ctx->pc = 0x18BDE4u;
label_18bde4:
    // 0x18bde4: 0x8fa30254  lw          $v1, 0x254($sp)
    ctx->pc = 0x18bde4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 596)));
label_18bde8:
    // 0x18bde8: 0x10600041  beqz        $v1, . + 4 + (0x41 << 2)
label_18bdec:
    if (ctx->pc == 0x18BDECu) {
        ctx->pc = 0x18BDF0u;
        goto label_18bdf0;
    }
    ctx->pc = 0x18BDE8u;
    {
        const bool branch_taken_0x18bde8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18bde8) {
            ctx->pc = 0x18BEF0u;
            goto label_18bef0;
        }
    }
    ctx->pc = 0x18BDF0u;
label_18bdf0:
    // 0x18bdf0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18bdf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18bdf4:
    // 0x18bdf4: 0xc0457e8  jal         func_115FA0
label_18bdf8:
    if (ctx->pc == 0x18BDF8u) {
        ctx->pc = 0x18BDFCu;
        goto label_18bdfc;
    }
    ctx->pc = 0x18BDF4u;
    SET_GPR_U32(ctx, 31, 0x18BDFCu);
    ctx->pc = 0x115FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115FA0u, 0x18BDF4u, 0x18BDFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BDFCu;
label_18bdfc:
    // 0x18bdfc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18bdfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18be00:
    // 0x18be00: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x18be00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_18be04:
    // 0x18be04: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x18be04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_18be08:
    // 0x18be08: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x18be08u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_18be0c:
    // 0x18be0c: 0x8c4501b0  lw          $a1, 0x1B0($v0)
    ctx->pc = 0x18be0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 432)));
label_18be10:
    // 0x18be10: 0xc042090  jal         func_108240
label_18be14:
    if (ctx->pc == 0x18BE14u) {
        ctx->pc = 0x18BE18u;
        goto label_18be18;
    }
    ctx->pc = 0x18BE10u;
    SET_GPR_U32(ctx, 31, 0x18BE18u);
    ctx->pc = 0x108240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108240u, 0x18BE10u, 0x18BE18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BE18u;
label_18be18:
    // 0x18be18: 0xe7a0024c  swc1        $f0, 0x24C($sp)
    ctx->pc = 0x18be18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 588), bits); }
label_18be1c:
    // 0x18be1c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x18be1cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_18be20:
    // 0x18be20: 0xc7a0024c  lwc1        $f0, 0x24C($sp)
    ctx->pc = 0x18be20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18be24:
    // 0x18be24: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x18be24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18be28:
    // 0x18be28: 0x4500002e  bc1f        . + 4 + (0x2E << 2)
label_18be2c:
    if (ctx->pc == 0x18BE2Cu) {
        ctx->pc = 0x18BE30u;
        goto label_18be30;
    }
    ctx->pc = 0x18BE28u;
    {
        const bool branch_taken_0x18be28 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18be28) {
            ctx->pc = 0x18BEE4u;
            goto label_18bee4;
        }
    }
    ctx->pc = 0x18BE30u;
label_18be30:
    // 0x18be30: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x18be30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_18be34:
    // 0x18be34: 0x5d2821  addu        $a1, $v0, $sp
    ctx->pc = 0x18be34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_18be38:
    // 0x18be38: 0x8fa20254  lw          $v0, 0x254($sp)
    ctx->pc = 0x18be38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 596)));
label_18be3c:
    // 0x18be3c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18be3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18be40:
    // 0x18be40: 0x8ca50150  lw          $a1, 0x150($a1)
    ctx->pc = 0x18be40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 336)));
label_18be44:
    // 0x18be44: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18be44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18be48:
    // 0x18be48: 0xc047328  jal         func_11CCA0
label_18be4c:
    if (ctx->pc == 0x18BE4Cu) {
        ctx->pc = 0x18BE50u;
        goto label_18be50;
    }
    ctx->pc = 0x18BE48u;
    SET_GPR_U32(ctx, 31, 0x18BE50u);
    ctx->pc = 0x11CCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11CCA0u, 0x18BE48u, 0x18BE50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BE50u;
label_18be50:
    // 0x18be50: 0xa3a2028e  sb          $v0, 0x28E($sp)
    ctx->pc = 0x18be50u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 654), (uint8_t)GPR_U32(ctx, 2));
label_18be54:
    // 0x18be54: 0x93a5028e  lbu         $a1, 0x28E($sp)
    ctx->pc = 0x18be54u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 654)));
label_18be58:
    // 0x18be58: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x18be58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_18be5c:
    // 0x18be5c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x18be5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18be60:
    // 0x18be60: 0x1483001f  bne         $a0, $v1, . + 4 + (0x1F << 2)
label_18be64:
    if (ctx->pc == 0x18BE64u) {
        ctx->pc = 0x18BE68u;
        goto label_18be68;
    }
    ctx->pc = 0x18BE60u;
    {
        const bool branch_taken_0x18be60 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x18be60) {
            ctx->pc = 0x18BEE0u;
            goto label_18bee0;
        }
    }
    ctx->pc = 0x18BE68u;
label_18be68:
    // 0x18be68: 0x26470001  addiu       $a3, $s2, 0x1
    ctx->pc = 0x18be68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_18be6c:
    // 0x18be6c: 0x27a50200  addiu       $a1, $sp, 0x200
    ctx->pc = 0x18be6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
label_18be70:
    // 0x18be70: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x18be70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_18be74:
    // 0x18be74: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x18be74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
label_18be78:
    // 0x18be78: 0x24425758  addiu       $v0, $v0, 0x5758
    ctx->pc = 0x18be78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22360));
label_18be7c:
    // 0x18be7c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x18be7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18be80:
    // 0x18be80: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x18be80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_18be84:
    // 0x18be84: 0xc0bc3e2  jal         func_2F0F88
label_18be88:
    if (ctx->pc == 0x18BE88u) {
        ctx->pc = 0x18BE8Cu;
        goto label_18be8c;
    }
    ctx->pc = 0x18BE84u;
    SET_GPR_U32(ctx, 31, 0x18BE8Cu);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x18BE84u, 0x18BE8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BE8Cu;
label_18be8c:
    // 0x18be8c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x18be8cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18be90:
    // 0x18be90: 0x8fa40290  lw          $a0, 0x290($sp)
    ctx->pc = 0x18be90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
label_18be94:
    // 0x18be94: 0x27a20200  addiu       $v0, $sp, 0x200
    ctx->pc = 0x18be94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
label_18be98:
    // 0x18be98: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x18be98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18be9c:
    // 0x18be9c: 0xc05621c  jal         func_158870
label_18bea0:
    if (ctx->pc == 0x18BEA0u) {
        ctx->pc = 0x18BEA4u;
        goto label_18bea4;
    }
    ctx->pc = 0x18BE9Cu;
    SET_GPR_U32(ctx, 31, 0x18BEA4u);
    ctx->pc = 0x158870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158870u, 0x18BE9Cu, 0x18BEA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BEA4u;
label_18bea4:
    // 0x18bea4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x18bea4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18bea8:
    // 0x18bea8: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
label_18beac:
    if (ctx->pc == 0x18BEACu) {
        ctx->pc = 0x18BEB0u;
        goto label_18beb0;
    }
    ctx->pc = 0x18BEA8u;
    {
        const bool branch_taken_0x18bea8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x18bea8) {
            ctx->pc = 0x18BEE0u;
            goto label_18bee0;
        }
    }
    ctx->pc = 0x18BEB0u;
label_18beb0:
    // 0x18beb0: 0x8fa20290  lw          $v0, 0x290($sp)
    ctx->pc = 0x18beb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
label_18beb4:
    // 0x18beb4: 0x7fa20100  sq          $v0, 0x100($sp)
    ctx->pc = 0x18beb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 2));
label_18beb8:
    // 0x18beb8: 0x132080  sll         $a0, $s3, 2
    ctx->pc = 0x18beb8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_18bebc:
    // 0x18bebc: 0x9d1021  addu        $v0, $a0, $sp
    ctx->pc = 0x18bebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
label_18bec0:
    // 0x18bec0: 0x7ba30100  lq          $v1, 0x100($sp)
    ctx->pc = 0x18bec0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_18bec4:
    // 0x18bec4: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x18bec4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_18bec8:
    // 0x18bec8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x18bec8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18becc:
    // 0x18becc: 0x8c460180  lw          $a2, 0x180($v0)
    ctx->pc = 0x18beccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 384)));
label_18bed0:
    // 0x18bed0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x18bed0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18bed4:
    // 0x18bed4: 0xc08c800  jal         func_232000
label_18bed8:
    if (ctx->pc == 0x18BED8u) {
        ctx->pc = 0x18BEDCu;
        goto label_18bedc;
    }
    ctx->pc = 0x18BED4u;
    SET_GPR_U32(ctx, 31, 0x18BEDCu);
    ctx->pc = 0x232000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232000u, 0x18BED4u, 0x18BEDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BEDCu;
label_18bedc:
    // 0x18bedc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x18bedcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18bee0:
    // 0x18bee0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x18bee0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_18bee4:
    // 0x18bee4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x18bee4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_18bee8:
    // 0x18bee8: 0x10000003  b           . + 4 + (0x3 << 2)
label_18beec:
    if (ctx->pc == 0x18BEECu) {
        ctx->pc = 0x18BEF0u;
        goto label_18bef0;
    }
    ctx->pc = 0x18BEE8u;
    {
        const bool branch_taken_0x18bee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18bee8) {
            ctx->pc = 0x18BEF8u;
            goto label_18bef8;
        }
    }
    ctx->pc = 0x18BEF0u;
label_18bef0:
    // 0x18bef0: 0x26440001  addiu       $a0, $s2, 0x1
    ctx->pc = 0x18bef0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_18bef4:
    // 0x18bef4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x18bef4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_18bef8:
    // 0x18bef8: 0x2a410006  slti        $at, $s2, 0x6
    ctx->pc = 0x18bef8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)6) ? 1 : 0);
label_18befc:
    // 0x18befc: 0x10200023  beqz        $at, . + 4 + (0x23 << 2)
label_18bf00:
    if (ctx->pc == 0x18BF00u) {
        ctx->pc = 0x18BF04u;
        goto label_18bf04;
    }
    ctx->pc = 0x18BEFCu;
    {
        const bool branch_taken_0x18befc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x18befc) {
            ctx->pc = 0x18BF8Cu;
            goto label_18bf8c;
        }
    }
    ctx->pc = 0x18BF04u;
label_18bf04:
    // 0x18bf04: 0x2a63000b  slti        $v1, $s3, 0xB
    ctx->pc = 0x18bf04u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)11) ? 1 : 0);
label_18bf08:
    // 0x18bf08: 0x1460ff6f  bnez        $v1, . + 4 + (-0x91 << 2)
label_18bf0c:
    if (ctx->pc == 0x18BF0Cu) {
        ctx->pc = 0x18BF10u;
        goto label_18bf10;
    }
    ctx->pc = 0x18BF08u;
    {
        const bool branch_taken_0x18bf08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18bf08) {
            ctx->pc = 0x18BCC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18bcc8;
        }
    }
    ctx->pc = 0x18BF10u;
label_18bf10:
    // 0x18bf10: 0x1000001e  b           . + 4 + (0x1E << 2)
label_18bf14:
    if (ctx->pc == 0x18BF14u) {
        ctx->pc = 0x18BF18u;
        goto label_18bf18;
    }
    ctx->pc = 0x18BF10u;
    {
        const bool branch_taken_0x18bf10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18bf10) {
            ctx->pc = 0x18BF8Cu;
            goto label_18bf8c;
        }
    }
    ctx->pc = 0x18BF18u;
label_18bf18:
    // 0x18bf18: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x18bf18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_18bf1c:
    // 0x18bf1c: 0x7fa200f0  sq          $v0, 0xF0($sp)
    ctx->pc = 0x18bf1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
label_18bf20:
    // 0x18bf20: 0x27a20200  addiu       $v0, $sp, 0x200
    ctx->pc = 0x18bf20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
label_18bf24:
    // 0x18bf24: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18bf24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18bf28:
    // 0x18bf28: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x18bf28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
label_18bf2c:
    // 0x18bf2c: 0x24425758  addiu       $v0, $v0, 0x5758
    ctx->pc = 0x18bf2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22360));
label_18bf30:
    // 0x18bf30: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x18bf30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
label_18bf34:
    // 0x18bf34: 0x7ba500e0  lq          $a1, 0xE0($sp)
    ctx->pc = 0x18bf34u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_18bf38:
    // 0x18bf38: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x18bf38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_18bf3c:
    // 0x18bf3c: 0x7ba700f0  lq          $a3, 0xF0($sp)
    ctx->pc = 0x18bf3cu;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_18bf40:
    // 0x18bf40: 0xc0bc3e2  jal         func_2F0F88
label_18bf44:
    if (ctx->pc == 0x18BF44u) {
        ctx->pc = 0x18BF48u;
        goto label_18bf48;
    }
    ctx->pc = 0x18BF40u;
    SET_GPR_U32(ctx, 31, 0x18BF48u);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x18BF40u, 0x18BF48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BF48u;
label_18bf48:
    // 0x18bf48: 0x8fa40290  lw          $a0, 0x290($sp)
    ctx->pc = 0x18bf48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
label_18bf4c:
    // 0x18bf4c: 0x27a50200  addiu       $a1, $sp, 0x200
    ctx->pc = 0x18bf4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
label_18bf50:
    // 0x18bf50: 0xc05621c  jal         func_158870
label_18bf54:
    if (ctx->pc == 0x18BF54u) {
        ctx->pc = 0x18BF58u;
        goto label_18bf58;
    }
    ctx->pc = 0x18BF50u;
    SET_GPR_U32(ctx, 31, 0x18BF58u);
    ctx->pc = 0x158870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158870u, 0x18BF50u, 0x18BF58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BF58u;
label_18bf58:
    // 0x18bf58: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x18bf58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18bf5c:
    // 0x18bf5c: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_18bf60:
    if (ctx->pc == 0x18BF60u) {
        ctx->pc = 0x18BF64u;
        goto label_18bf64;
    }
    ctx->pc = 0x18BF5Cu;
    {
        const bool branch_taken_0x18bf5c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x18bf5c) {
            ctx->pc = 0x18BF84u;
            goto label_18bf84;
        }
    }
    ctx->pc = 0x18BF64u;
label_18bf64:
    // 0x18bf64: 0x8fa20290  lw          $v0, 0x290($sp)
    ctx->pc = 0x18bf64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
label_18bf68:
    // 0x18bf68: 0x8c470034  lw          $a3, 0x34($v0)
    ctx->pc = 0x18bf68u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_18bf6c:
    // 0x18bf6c: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x18bf6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_18bf70:
    // 0x18bf70: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x18bf70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18bf74:
    // 0x18bf74: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18bf74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18bf78:
    // 0x18bf78: 0xc08c8dc  jal         func_232370
label_18bf7c:
    if (ctx->pc == 0x18BF7Cu) {
        ctx->pc = 0x18BF80u;
        goto label_18bf80;
    }
    ctx->pc = 0x18BF78u;
    SET_GPR_U32(ctx, 31, 0x18BF80u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x18BF78u, 0x18BF80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BF80u;
label_18bf80:
    // 0x18bf80: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18bf80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18bf84:
    // 0x18bf84: 0x26450001  addiu       $a1, $s2, 0x1
    ctx->pc = 0x18bf84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_18bf88:
    // 0x18bf88: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x18bf88u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_18bf8c:
    // 0x18bf8c: 0x2a430006  slti        $v1, $s2, 0x6
    ctx->pc = 0x18bf8cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)6) ? 1 : 0);
label_18bf90:
    // 0x18bf90: 0x1460ffe1  bnez        $v1, . + 4 + (-0x1F << 2)
label_18bf94:
    if (ctx->pc == 0x18BF94u) {
        ctx->pc = 0x18BF98u;
        goto label_18bf98;
    }
    ctx->pc = 0x18BF90u;
    {
        const bool branch_taken_0x18bf90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18bf90) {
            ctx->pc = 0x18BF18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18bf18;
        }
    }
    ctx->pc = 0x18BF98u;
label_18bf98:
    // 0x18bf98: 0x10000025  b           . + 4 + (0x25 << 2)
label_18bf9c:
    if (ctx->pc == 0x18BF9Cu) {
        ctx->pc = 0x18BFA0u;
        goto label_18bfa0;
    }
    ctx->pc = 0x18BF98u;
    {
        const bool branch_taken_0x18bf98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18bf98) {
            ctx->pc = 0x18C030u;
            goto label_18c030;
        }
    }
    ctx->pc = 0x18BFA0u;
label_18bfa0:
    // 0x18bfa0: 0xafa00248  sw          $zero, 0x248($sp)
    ctx->pc = 0x18bfa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 584), GPR_U32(ctx, 0));
label_18bfa4:
    // 0x18bfa4: 0x1000001e  b           . + 4 + (0x1E << 2)
label_18bfa8:
    if (ctx->pc == 0x18BFA8u) {
        ctx->pc = 0x18BFACu;
        goto label_18bfac;
    }
    ctx->pc = 0x18BFA4u;
    {
        const bool branch_taken_0x18bfa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18bfa4) {
            ctx->pc = 0x18C020u;
            goto label_18c020;
        }
    }
    ctx->pc = 0x18BFACu;
label_18bfac:
    // 0x18bfac: 0x8fa40248  lw          $a0, 0x248($sp)
    ctx->pc = 0x18bfacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 584)));
label_18bfb0:
    // 0x18bfb0: 0x24870001  addiu       $a3, $a0, 0x1
    ctx->pc = 0x18bfb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_18bfb4:
    // 0x18bfb4: 0x27a20200  addiu       $v0, $sp, 0x200
    ctx->pc = 0x18bfb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
label_18bfb8:
    // 0x18bfb8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18bfb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18bfbc:
    // 0x18bfbc: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x18bfbcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_18bfc0:
    // 0x18bfc0: 0x24a55758  addiu       $a1, $a1, 0x5758
    ctx->pc = 0x18bfc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22360));
label_18bfc4:
    // 0x18bfc4: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x18bfc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_18bfc8:
    // 0x18bfc8: 0xc0bc3e2  jal         func_2F0F88
label_18bfcc:
    if (ctx->pc == 0x18BFCCu) {
        ctx->pc = 0x18BFD0u;
        goto label_18bfd0;
    }
    ctx->pc = 0x18BFC8u;
    SET_GPR_U32(ctx, 31, 0x18BFD0u);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x18BFC8u, 0x18BFD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BFD0u;
label_18bfd0:
    // 0x18bfd0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x18bfd0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18bfd4:
    // 0x18bfd4: 0x8fa40290  lw          $a0, 0x290($sp)
    ctx->pc = 0x18bfd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
label_18bfd8:
    // 0x18bfd8: 0x27a20200  addiu       $v0, $sp, 0x200
    ctx->pc = 0x18bfd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
label_18bfdc:
    // 0x18bfdc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x18bfdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18bfe0:
    // 0x18bfe0: 0xc05621c  jal         func_158870
label_18bfe4:
    if (ctx->pc == 0x18BFE4u) {
        ctx->pc = 0x18BFE8u;
        goto label_18bfe8;
    }
    ctx->pc = 0x18BFE0u;
    SET_GPR_U32(ctx, 31, 0x18BFE8u);
    ctx->pc = 0x158870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158870u, 0x18BFE0u, 0x18BFE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BFE8u;
label_18bfe8:
    // 0x18bfe8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x18bfe8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18bfec:
    // 0x18bfec: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x18bfecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_18bff0:
    // 0x18bff0: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_18bff4:
    if (ctx->pc == 0x18BFF4u) {
        ctx->pc = 0x18BFF8u;
        goto label_18bff8;
    }
    ctx->pc = 0x18BFF0u;
    {
        const bool branch_taken_0x18bff0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x18bff0) {
            ctx->pc = 0x18C014u;
            goto label_18c014;
        }
    }
    ctx->pc = 0x18BFF8u;
label_18bff8:
    // 0x18bff8: 0x8fa60290  lw          $a2, 0x290($sp)
    ctx->pc = 0x18bff8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
label_18bffc:
    // 0x18bffc: 0x8cc20034  lw          $v0, 0x34($a2)
    ctx->pc = 0x18bffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
label_18c000:
    // 0x18c000: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18c000u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18c004:
    // 0x18c004: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x18c004u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18c008:
    // 0x18c008: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18c008u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18c00c:
    // 0x18c00c: 0xc08c8dc  jal         func_232370
label_18c010:
    if (ctx->pc == 0x18C010u) {
        ctx->pc = 0x18C014u;
        goto label_18c014;
    }
    ctx->pc = 0x18C00Cu;
    SET_GPR_U32(ctx, 31, 0x18C014u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x18C00Cu, 0x18C014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C014u;
label_18c014:
    // 0x18c014: 0x8fa30248  lw          $v1, 0x248($sp)
    ctx->pc = 0x18c014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 584)));
label_18c018:
    // 0x18c018: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x18c018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_18c01c:
    // 0x18c01c: 0xafa30248  sw          $v1, 0x248($sp)
    ctx->pc = 0x18c01cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 584), GPR_U32(ctx, 3));
label_18c020:
    // 0x18c020: 0x8fa40248  lw          $a0, 0x248($sp)
    ctx->pc = 0x18c020u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 584)));
label_18c024:
    // 0x18c024: 0x28850006  slti        $a1, $a0, 0x6
    ctx->pc = 0x18c024u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)6) ? 1 : 0);
label_18c028:
    // 0x18c028: 0x14a0ffe0  bnez        $a1, . + 4 + (-0x20 << 2)
label_18c02c:
    if (ctx->pc == 0x18C02Cu) {
        ctx->pc = 0x18C030u;
        goto label_18c030;
    }
    ctx->pc = 0x18C028u;
    {
        const bool branch_taken_0x18c028 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x18c028) {
            ctx->pc = 0x18BFACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18bfac;
        }
    }
    ctx->pc = 0x18C030u;
label_18c030:
    // 0x18c030: 0x26e30001  addiu       $v1, $s7, 0x1
    ctx->pc = 0x18c030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_18c034:
    // 0x18c034: 0x60b82d  daddu       $s7, $v1, $zero
    ctx->pc = 0x18c034u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_18c038:
    // 0x18c038: 0x2ae30004  slti        $v1, $s7, 0x4
    ctx->pc = 0x18c038u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)4) ? 1 : 0);
label_18c03c:
    // 0x18c03c: 0x7fa300d0  sq          $v1, 0xD0($sp)
    ctx->pc = 0x18c03cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 3));
label_18c040:
    // 0x18c040: 0x7ba300d0  lq          $v1, 0xD0($sp)
    ctx->pc = 0x18c040u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_18c044:
    // 0x18c044: 0x1460fd65  bnez        $v1, . + 4 + (-0x29B << 2)
label_18c048:
    if (ctx->pc == 0x18C048u) {
        ctx->pc = 0x18C04Cu;
        goto label_18c04c;
    }
    ctx->pc = 0x18C044u;
    {
        const bool branch_taken_0x18c044 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18c044) {
            ctx->pc = 0x18B5DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18b5dc;
        }
    }
    ctx->pc = 0x18C04Cu;
label_18c04c:
    // 0x18c04c: 0x26a40001  addiu       $a0, $s5, 0x1
    ctx->pc = 0x18c04cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_18c050:
    // 0x18c050: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x18c050u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_18c054:
    // 0x18c054: 0x2aa30008  slti        $v1, $s5, 0x8
    ctx->pc = 0x18c054u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)8) ? 1 : 0);
label_18c058:
    // 0x18c058: 0x1460fd17  bnez        $v1, . + 4 + (-0x2E9 << 2)
label_18c05c:
    if (ctx->pc == 0x18C05Cu) {
        ctx->pc = 0x18C060u;
        goto label_18c060;
    }
    ctx->pc = 0x18C058u;
    {
        const bool branch_taken_0x18c058 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18c058) {
            ctx->pc = 0x18B4B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18b4b8;
        }
    }
    ctx->pc = 0x18C060u;
label_18c060:
    // 0x18c060: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x18c060u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_18c064:
    // 0x18c064: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x18c064u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_18c068:
    // 0x18c068: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x18c068u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_18c06c:
    // 0x18c06c: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x18c06cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_18c070:
    // 0x18c070: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x18c070u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_18c074:
    // 0x18c074: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x18c074u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_18c078:
    // 0x18c078: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x18c078u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_18c07c:
    // 0x18c07c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x18c07cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_18c080:
    // 0x18c080: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x18c080u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_18c084:
    // 0x18c084: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x18c084u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_18c088:
    // 0x18c088: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x18c088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_18c08c:
    // 0x18c08c: 0x27bd02a0  addiu       $sp, $sp, 0x2A0
    ctx->pc = 0x18c08cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
label_18c090:
    // 0x18c090: 0x3e00008  jr          $ra
label_18c094:
    if (ctx->pc == 0x18C094u) {
        ctx->pc = 0x18C098u;
        goto label_18c098;
    }
    ctx->pc = 0x18C090u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18C090u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18C098u;
label_18c098:
    // 0x18c098: 0x0  nop
    ctx->pc = 0x18c098u;
    // NOP
label_18c09c:
    // 0x18c09c: 0x0  nop
    ctx->pc = 0x18c09cu;
    // NOP
    ctx->pc = 0x18c0a0u;
}
