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

// Function: sub_0049B450
// Address: 0x49b450 - 0x49c040
void sub_0049B450_0x49b450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049B450_0x49b450");
#endif

    switch (ctx->pc) {
        case 0x49b450u: goto label_49b450;
        case 0x49b454u: goto label_49b454;
        case 0x49b458u: goto label_49b458;
        case 0x49b45cu: goto label_49b45c;
        case 0x49b460u: goto label_49b460;
        case 0x49b464u: goto label_49b464;
        case 0x49b468u: goto label_49b468;
        case 0x49b46cu: goto label_49b46c;
        case 0x49b470u: goto label_49b470;
        case 0x49b474u: goto label_49b474;
        case 0x49b478u: goto label_49b478;
        case 0x49b47cu: goto label_49b47c;
        case 0x49b480u: goto label_49b480;
        case 0x49b484u: goto label_49b484;
        case 0x49b488u: goto label_49b488;
        case 0x49b48cu: goto label_49b48c;
        case 0x49b490u: goto label_49b490;
        case 0x49b494u: goto label_49b494;
        case 0x49b498u: goto label_49b498;
        case 0x49b49cu: goto label_49b49c;
        case 0x49b4a0u: goto label_49b4a0;
        case 0x49b4a4u: goto label_49b4a4;
        case 0x49b4a8u: goto label_49b4a8;
        case 0x49b4acu: goto label_49b4ac;
        case 0x49b4b0u: goto label_49b4b0;
        case 0x49b4b4u: goto label_49b4b4;
        case 0x49b4b8u: goto label_49b4b8;
        case 0x49b4bcu: goto label_49b4bc;
        case 0x49b4c0u: goto label_49b4c0;
        case 0x49b4c4u: goto label_49b4c4;
        case 0x49b4c8u: goto label_49b4c8;
        case 0x49b4ccu: goto label_49b4cc;
        case 0x49b4d0u: goto label_49b4d0;
        case 0x49b4d4u: goto label_49b4d4;
        case 0x49b4d8u: goto label_49b4d8;
        case 0x49b4dcu: goto label_49b4dc;
        case 0x49b4e0u: goto label_49b4e0;
        case 0x49b4e4u: goto label_49b4e4;
        case 0x49b4e8u: goto label_49b4e8;
        case 0x49b4ecu: goto label_49b4ec;
        case 0x49b4f0u: goto label_49b4f0;
        case 0x49b4f4u: goto label_49b4f4;
        case 0x49b4f8u: goto label_49b4f8;
        case 0x49b4fcu: goto label_49b4fc;
        case 0x49b500u: goto label_49b500;
        case 0x49b504u: goto label_49b504;
        case 0x49b508u: goto label_49b508;
        case 0x49b50cu: goto label_49b50c;
        case 0x49b510u: goto label_49b510;
        case 0x49b514u: goto label_49b514;
        case 0x49b518u: goto label_49b518;
        case 0x49b51cu: goto label_49b51c;
        case 0x49b520u: goto label_49b520;
        case 0x49b524u: goto label_49b524;
        case 0x49b528u: goto label_49b528;
        case 0x49b52cu: goto label_49b52c;
        case 0x49b530u: goto label_49b530;
        case 0x49b534u: goto label_49b534;
        case 0x49b538u: goto label_49b538;
        case 0x49b53cu: goto label_49b53c;
        case 0x49b540u: goto label_49b540;
        case 0x49b544u: goto label_49b544;
        case 0x49b548u: goto label_49b548;
        case 0x49b54cu: goto label_49b54c;
        case 0x49b550u: goto label_49b550;
        case 0x49b554u: goto label_49b554;
        case 0x49b558u: goto label_49b558;
        case 0x49b55cu: goto label_49b55c;
        case 0x49b560u: goto label_49b560;
        case 0x49b564u: goto label_49b564;
        case 0x49b568u: goto label_49b568;
        case 0x49b56cu: goto label_49b56c;
        case 0x49b570u: goto label_49b570;
        case 0x49b574u: goto label_49b574;
        case 0x49b578u: goto label_49b578;
        case 0x49b57cu: goto label_49b57c;
        case 0x49b580u: goto label_49b580;
        case 0x49b584u: goto label_49b584;
        case 0x49b588u: goto label_49b588;
        case 0x49b58cu: goto label_49b58c;
        case 0x49b590u: goto label_49b590;
        case 0x49b594u: goto label_49b594;
        case 0x49b598u: goto label_49b598;
        case 0x49b59cu: goto label_49b59c;
        case 0x49b5a0u: goto label_49b5a0;
        case 0x49b5a4u: goto label_49b5a4;
        case 0x49b5a8u: goto label_49b5a8;
        case 0x49b5acu: goto label_49b5ac;
        case 0x49b5b0u: goto label_49b5b0;
        case 0x49b5b4u: goto label_49b5b4;
        case 0x49b5b8u: goto label_49b5b8;
        case 0x49b5bcu: goto label_49b5bc;
        case 0x49b5c0u: goto label_49b5c0;
        case 0x49b5c4u: goto label_49b5c4;
        case 0x49b5c8u: goto label_49b5c8;
        case 0x49b5ccu: goto label_49b5cc;
        case 0x49b5d0u: goto label_49b5d0;
        case 0x49b5d4u: goto label_49b5d4;
        case 0x49b5d8u: goto label_49b5d8;
        case 0x49b5dcu: goto label_49b5dc;
        case 0x49b5e0u: goto label_49b5e0;
        case 0x49b5e4u: goto label_49b5e4;
        case 0x49b5e8u: goto label_49b5e8;
        case 0x49b5ecu: goto label_49b5ec;
        case 0x49b5f0u: goto label_49b5f0;
        case 0x49b5f4u: goto label_49b5f4;
        case 0x49b5f8u: goto label_49b5f8;
        case 0x49b5fcu: goto label_49b5fc;
        case 0x49b600u: goto label_49b600;
        case 0x49b604u: goto label_49b604;
        case 0x49b608u: goto label_49b608;
        case 0x49b60cu: goto label_49b60c;
        case 0x49b610u: goto label_49b610;
        case 0x49b614u: goto label_49b614;
        case 0x49b618u: goto label_49b618;
        case 0x49b61cu: goto label_49b61c;
        case 0x49b620u: goto label_49b620;
        case 0x49b624u: goto label_49b624;
        case 0x49b628u: goto label_49b628;
        case 0x49b62cu: goto label_49b62c;
        case 0x49b630u: goto label_49b630;
        case 0x49b634u: goto label_49b634;
        case 0x49b638u: goto label_49b638;
        case 0x49b63cu: goto label_49b63c;
        case 0x49b640u: goto label_49b640;
        case 0x49b644u: goto label_49b644;
        case 0x49b648u: goto label_49b648;
        case 0x49b64cu: goto label_49b64c;
        case 0x49b650u: goto label_49b650;
        case 0x49b654u: goto label_49b654;
        case 0x49b658u: goto label_49b658;
        case 0x49b65cu: goto label_49b65c;
        case 0x49b660u: goto label_49b660;
        case 0x49b664u: goto label_49b664;
        case 0x49b668u: goto label_49b668;
        case 0x49b66cu: goto label_49b66c;
        case 0x49b670u: goto label_49b670;
        case 0x49b674u: goto label_49b674;
        case 0x49b678u: goto label_49b678;
        case 0x49b67cu: goto label_49b67c;
        case 0x49b680u: goto label_49b680;
        case 0x49b684u: goto label_49b684;
        case 0x49b688u: goto label_49b688;
        case 0x49b68cu: goto label_49b68c;
        case 0x49b690u: goto label_49b690;
        case 0x49b694u: goto label_49b694;
        case 0x49b698u: goto label_49b698;
        case 0x49b69cu: goto label_49b69c;
        case 0x49b6a0u: goto label_49b6a0;
        case 0x49b6a4u: goto label_49b6a4;
        case 0x49b6a8u: goto label_49b6a8;
        case 0x49b6acu: goto label_49b6ac;
        case 0x49b6b0u: goto label_49b6b0;
        case 0x49b6b4u: goto label_49b6b4;
        case 0x49b6b8u: goto label_49b6b8;
        case 0x49b6bcu: goto label_49b6bc;
        case 0x49b6c0u: goto label_49b6c0;
        case 0x49b6c4u: goto label_49b6c4;
        case 0x49b6c8u: goto label_49b6c8;
        case 0x49b6ccu: goto label_49b6cc;
        case 0x49b6d0u: goto label_49b6d0;
        case 0x49b6d4u: goto label_49b6d4;
        case 0x49b6d8u: goto label_49b6d8;
        case 0x49b6dcu: goto label_49b6dc;
        case 0x49b6e0u: goto label_49b6e0;
        case 0x49b6e4u: goto label_49b6e4;
        case 0x49b6e8u: goto label_49b6e8;
        case 0x49b6ecu: goto label_49b6ec;
        case 0x49b6f0u: goto label_49b6f0;
        case 0x49b6f4u: goto label_49b6f4;
        case 0x49b6f8u: goto label_49b6f8;
        case 0x49b6fcu: goto label_49b6fc;
        case 0x49b700u: goto label_49b700;
        case 0x49b704u: goto label_49b704;
        case 0x49b708u: goto label_49b708;
        case 0x49b70cu: goto label_49b70c;
        case 0x49b710u: goto label_49b710;
        case 0x49b714u: goto label_49b714;
        case 0x49b718u: goto label_49b718;
        case 0x49b71cu: goto label_49b71c;
        case 0x49b720u: goto label_49b720;
        case 0x49b724u: goto label_49b724;
        case 0x49b728u: goto label_49b728;
        case 0x49b72cu: goto label_49b72c;
        case 0x49b730u: goto label_49b730;
        case 0x49b734u: goto label_49b734;
        case 0x49b738u: goto label_49b738;
        case 0x49b73cu: goto label_49b73c;
        case 0x49b740u: goto label_49b740;
        case 0x49b744u: goto label_49b744;
        case 0x49b748u: goto label_49b748;
        case 0x49b74cu: goto label_49b74c;
        case 0x49b750u: goto label_49b750;
        case 0x49b754u: goto label_49b754;
        case 0x49b758u: goto label_49b758;
        case 0x49b75cu: goto label_49b75c;
        case 0x49b760u: goto label_49b760;
        case 0x49b764u: goto label_49b764;
        case 0x49b768u: goto label_49b768;
        case 0x49b76cu: goto label_49b76c;
        case 0x49b770u: goto label_49b770;
        case 0x49b774u: goto label_49b774;
        case 0x49b778u: goto label_49b778;
        case 0x49b77cu: goto label_49b77c;
        case 0x49b780u: goto label_49b780;
        case 0x49b784u: goto label_49b784;
        case 0x49b788u: goto label_49b788;
        case 0x49b78cu: goto label_49b78c;
        case 0x49b790u: goto label_49b790;
        case 0x49b794u: goto label_49b794;
        case 0x49b798u: goto label_49b798;
        case 0x49b79cu: goto label_49b79c;
        case 0x49b7a0u: goto label_49b7a0;
        case 0x49b7a4u: goto label_49b7a4;
        case 0x49b7a8u: goto label_49b7a8;
        case 0x49b7acu: goto label_49b7ac;
        case 0x49b7b0u: goto label_49b7b0;
        case 0x49b7b4u: goto label_49b7b4;
        case 0x49b7b8u: goto label_49b7b8;
        case 0x49b7bcu: goto label_49b7bc;
        case 0x49b7c0u: goto label_49b7c0;
        case 0x49b7c4u: goto label_49b7c4;
        case 0x49b7c8u: goto label_49b7c8;
        case 0x49b7ccu: goto label_49b7cc;
        case 0x49b7d0u: goto label_49b7d0;
        case 0x49b7d4u: goto label_49b7d4;
        case 0x49b7d8u: goto label_49b7d8;
        case 0x49b7dcu: goto label_49b7dc;
        case 0x49b7e0u: goto label_49b7e0;
        case 0x49b7e4u: goto label_49b7e4;
        case 0x49b7e8u: goto label_49b7e8;
        case 0x49b7ecu: goto label_49b7ec;
        case 0x49b7f0u: goto label_49b7f0;
        case 0x49b7f4u: goto label_49b7f4;
        case 0x49b7f8u: goto label_49b7f8;
        case 0x49b7fcu: goto label_49b7fc;
        case 0x49b800u: goto label_49b800;
        case 0x49b804u: goto label_49b804;
        case 0x49b808u: goto label_49b808;
        case 0x49b80cu: goto label_49b80c;
        case 0x49b810u: goto label_49b810;
        case 0x49b814u: goto label_49b814;
        case 0x49b818u: goto label_49b818;
        case 0x49b81cu: goto label_49b81c;
        case 0x49b820u: goto label_49b820;
        case 0x49b824u: goto label_49b824;
        case 0x49b828u: goto label_49b828;
        case 0x49b82cu: goto label_49b82c;
        case 0x49b830u: goto label_49b830;
        case 0x49b834u: goto label_49b834;
        case 0x49b838u: goto label_49b838;
        case 0x49b83cu: goto label_49b83c;
        case 0x49b840u: goto label_49b840;
        case 0x49b844u: goto label_49b844;
        case 0x49b848u: goto label_49b848;
        case 0x49b84cu: goto label_49b84c;
        case 0x49b850u: goto label_49b850;
        case 0x49b854u: goto label_49b854;
        case 0x49b858u: goto label_49b858;
        case 0x49b85cu: goto label_49b85c;
        case 0x49b860u: goto label_49b860;
        case 0x49b864u: goto label_49b864;
        case 0x49b868u: goto label_49b868;
        case 0x49b86cu: goto label_49b86c;
        case 0x49b870u: goto label_49b870;
        case 0x49b874u: goto label_49b874;
        case 0x49b878u: goto label_49b878;
        case 0x49b87cu: goto label_49b87c;
        case 0x49b880u: goto label_49b880;
        case 0x49b884u: goto label_49b884;
        case 0x49b888u: goto label_49b888;
        case 0x49b88cu: goto label_49b88c;
        case 0x49b890u: goto label_49b890;
        case 0x49b894u: goto label_49b894;
        case 0x49b898u: goto label_49b898;
        case 0x49b89cu: goto label_49b89c;
        case 0x49b8a0u: goto label_49b8a0;
        case 0x49b8a4u: goto label_49b8a4;
        case 0x49b8a8u: goto label_49b8a8;
        case 0x49b8acu: goto label_49b8ac;
        case 0x49b8b0u: goto label_49b8b0;
        case 0x49b8b4u: goto label_49b8b4;
        case 0x49b8b8u: goto label_49b8b8;
        case 0x49b8bcu: goto label_49b8bc;
        case 0x49b8c0u: goto label_49b8c0;
        case 0x49b8c4u: goto label_49b8c4;
        case 0x49b8c8u: goto label_49b8c8;
        case 0x49b8ccu: goto label_49b8cc;
        case 0x49b8d0u: goto label_49b8d0;
        case 0x49b8d4u: goto label_49b8d4;
        case 0x49b8d8u: goto label_49b8d8;
        case 0x49b8dcu: goto label_49b8dc;
        case 0x49b8e0u: goto label_49b8e0;
        case 0x49b8e4u: goto label_49b8e4;
        case 0x49b8e8u: goto label_49b8e8;
        case 0x49b8ecu: goto label_49b8ec;
        case 0x49b8f0u: goto label_49b8f0;
        case 0x49b8f4u: goto label_49b8f4;
        case 0x49b8f8u: goto label_49b8f8;
        case 0x49b8fcu: goto label_49b8fc;
        case 0x49b900u: goto label_49b900;
        case 0x49b904u: goto label_49b904;
        case 0x49b908u: goto label_49b908;
        case 0x49b90cu: goto label_49b90c;
        case 0x49b910u: goto label_49b910;
        case 0x49b914u: goto label_49b914;
        case 0x49b918u: goto label_49b918;
        case 0x49b91cu: goto label_49b91c;
        case 0x49b920u: goto label_49b920;
        case 0x49b924u: goto label_49b924;
        case 0x49b928u: goto label_49b928;
        case 0x49b92cu: goto label_49b92c;
        case 0x49b930u: goto label_49b930;
        case 0x49b934u: goto label_49b934;
        case 0x49b938u: goto label_49b938;
        case 0x49b93cu: goto label_49b93c;
        case 0x49b940u: goto label_49b940;
        case 0x49b944u: goto label_49b944;
        case 0x49b948u: goto label_49b948;
        case 0x49b94cu: goto label_49b94c;
        case 0x49b950u: goto label_49b950;
        case 0x49b954u: goto label_49b954;
        case 0x49b958u: goto label_49b958;
        case 0x49b95cu: goto label_49b95c;
        case 0x49b960u: goto label_49b960;
        case 0x49b964u: goto label_49b964;
        case 0x49b968u: goto label_49b968;
        case 0x49b96cu: goto label_49b96c;
        case 0x49b970u: goto label_49b970;
        case 0x49b974u: goto label_49b974;
        case 0x49b978u: goto label_49b978;
        case 0x49b97cu: goto label_49b97c;
        case 0x49b980u: goto label_49b980;
        case 0x49b984u: goto label_49b984;
        case 0x49b988u: goto label_49b988;
        case 0x49b98cu: goto label_49b98c;
        case 0x49b990u: goto label_49b990;
        case 0x49b994u: goto label_49b994;
        case 0x49b998u: goto label_49b998;
        case 0x49b99cu: goto label_49b99c;
        case 0x49b9a0u: goto label_49b9a0;
        case 0x49b9a4u: goto label_49b9a4;
        case 0x49b9a8u: goto label_49b9a8;
        case 0x49b9acu: goto label_49b9ac;
        case 0x49b9b0u: goto label_49b9b0;
        case 0x49b9b4u: goto label_49b9b4;
        case 0x49b9b8u: goto label_49b9b8;
        case 0x49b9bcu: goto label_49b9bc;
        case 0x49b9c0u: goto label_49b9c0;
        case 0x49b9c4u: goto label_49b9c4;
        case 0x49b9c8u: goto label_49b9c8;
        case 0x49b9ccu: goto label_49b9cc;
        case 0x49b9d0u: goto label_49b9d0;
        case 0x49b9d4u: goto label_49b9d4;
        case 0x49b9d8u: goto label_49b9d8;
        case 0x49b9dcu: goto label_49b9dc;
        case 0x49b9e0u: goto label_49b9e0;
        case 0x49b9e4u: goto label_49b9e4;
        case 0x49b9e8u: goto label_49b9e8;
        case 0x49b9ecu: goto label_49b9ec;
        case 0x49b9f0u: goto label_49b9f0;
        case 0x49b9f4u: goto label_49b9f4;
        case 0x49b9f8u: goto label_49b9f8;
        case 0x49b9fcu: goto label_49b9fc;
        case 0x49ba00u: goto label_49ba00;
        case 0x49ba04u: goto label_49ba04;
        case 0x49ba08u: goto label_49ba08;
        case 0x49ba0cu: goto label_49ba0c;
        case 0x49ba10u: goto label_49ba10;
        case 0x49ba14u: goto label_49ba14;
        case 0x49ba18u: goto label_49ba18;
        case 0x49ba1cu: goto label_49ba1c;
        case 0x49ba20u: goto label_49ba20;
        case 0x49ba24u: goto label_49ba24;
        case 0x49ba28u: goto label_49ba28;
        case 0x49ba2cu: goto label_49ba2c;
        case 0x49ba30u: goto label_49ba30;
        case 0x49ba34u: goto label_49ba34;
        case 0x49ba38u: goto label_49ba38;
        case 0x49ba3cu: goto label_49ba3c;
        case 0x49ba40u: goto label_49ba40;
        case 0x49ba44u: goto label_49ba44;
        case 0x49ba48u: goto label_49ba48;
        case 0x49ba4cu: goto label_49ba4c;
        case 0x49ba50u: goto label_49ba50;
        case 0x49ba54u: goto label_49ba54;
        case 0x49ba58u: goto label_49ba58;
        case 0x49ba5cu: goto label_49ba5c;
        case 0x49ba60u: goto label_49ba60;
        case 0x49ba64u: goto label_49ba64;
        case 0x49ba68u: goto label_49ba68;
        case 0x49ba6cu: goto label_49ba6c;
        case 0x49ba70u: goto label_49ba70;
        case 0x49ba74u: goto label_49ba74;
        case 0x49ba78u: goto label_49ba78;
        case 0x49ba7cu: goto label_49ba7c;
        case 0x49ba80u: goto label_49ba80;
        case 0x49ba84u: goto label_49ba84;
        case 0x49ba88u: goto label_49ba88;
        case 0x49ba8cu: goto label_49ba8c;
        case 0x49ba90u: goto label_49ba90;
        case 0x49ba94u: goto label_49ba94;
        case 0x49ba98u: goto label_49ba98;
        case 0x49ba9cu: goto label_49ba9c;
        case 0x49baa0u: goto label_49baa0;
        case 0x49baa4u: goto label_49baa4;
        case 0x49baa8u: goto label_49baa8;
        case 0x49baacu: goto label_49baac;
        case 0x49bab0u: goto label_49bab0;
        case 0x49bab4u: goto label_49bab4;
        case 0x49bab8u: goto label_49bab8;
        case 0x49babcu: goto label_49babc;
        case 0x49bac0u: goto label_49bac0;
        case 0x49bac4u: goto label_49bac4;
        case 0x49bac8u: goto label_49bac8;
        case 0x49baccu: goto label_49bacc;
        case 0x49bad0u: goto label_49bad0;
        case 0x49bad4u: goto label_49bad4;
        case 0x49bad8u: goto label_49bad8;
        case 0x49badcu: goto label_49badc;
        case 0x49bae0u: goto label_49bae0;
        case 0x49bae4u: goto label_49bae4;
        case 0x49bae8u: goto label_49bae8;
        case 0x49baecu: goto label_49baec;
        case 0x49baf0u: goto label_49baf0;
        case 0x49baf4u: goto label_49baf4;
        case 0x49baf8u: goto label_49baf8;
        case 0x49bafcu: goto label_49bafc;
        case 0x49bb00u: goto label_49bb00;
        case 0x49bb04u: goto label_49bb04;
        case 0x49bb08u: goto label_49bb08;
        case 0x49bb0cu: goto label_49bb0c;
        case 0x49bb10u: goto label_49bb10;
        case 0x49bb14u: goto label_49bb14;
        case 0x49bb18u: goto label_49bb18;
        case 0x49bb1cu: goto label_49bb1c;
        case 0x49bb20u: goto label_49bb20;
        case 0x49bb24u: goto label_49bb24;
        case 0x49bb28u: goto label_49bb28;
        case 0x49bb2cu: goto label_49bb2c;
        case 0x49bb30u: goto label_49bb30;
        case 0x49bb34u: goto label_49bb34;
        case 0x49bb38u: goto label_49bb38;
        case 0x49bb3cu: goto label_49bb3c;
        case 0x49bb40u: goto label_49bb40;
        case 0x49bb44u: goto label_49bb44;
        case 0x49bb48u: goto label_49bb48;
        case 0x49bb4cu: goto label_49bb4c;
        case 0x49bb50u: goto label_49bb50;
        case 0x49bb54u: goto label_49bb54;
        case 0x49bb58u: goto label_49bb58;
        case 0x49bb5cu: goto label_49bb5c;
        case 0x49bb60u: goto label_49bb60;
        case 0x49bb64u: goto label_49bb64;
        case 0x49bb68u: goto label_49bb68;
        case 0x49bb6cu: goto label_49bb6c;
        case 0x49bb70u: goto label_49bb70;
        case 0x49bb74u: goto label_49bb74;
        case 0x49bb78u: goto label_49bb78;
        case 0x49bb7cu: goto label_49bb7c;
        case 0x49bb80u: goto label_49bb80;
        case 0x49bb84u: goto label_49bb84;
        case 0x49bb88u: goto label_49bb88;
        case 0x49bb8cu: goto label_49bb8c;
        case 0x49bb90u: goto label_49bb90;
        case 0x49bb94u: goto label_49bb94;
        case 0x49bb98u: goto label_49bb98;
        case 0x49bb9cu: goto label_49bb9c;
        case 0x49bba0u: goto label_49bba0;
        case 0x49bba4u: goto label_49bba4;
        case 0x49bba8u: goto label_49bba8;
        case 0x49bbacu: goto label_49bbac;
        case 0x49bbb0u: goto label_49bbb0;
        case 0x49bbb4u: goto label_49bbb4;
        case 0x49bbb8u: goto label_49bbb8;
        case 0x49bbbcu: goto label_49bbbc;
        case 0x49bbc0u: goto label_49bbc0;
        case 0x49bbc4u: goto label_49bbc4;
        case 0x49bbc8u: goto label_49bbc8;
        case 0x49bbccu: goto label_49bbcc;
        case 0x49bbd0u: goto label_49bbd0;
        case 0x49bbd4u: goto label_49bbd4;
        case 0x49bbd8u: goto label_49bbd8;
        case 0x49bbdcu: goto label_49bbdc;
        case 0x49bbe0u: goto label_49bbe0;
        case 0x49bbe4u: goto label_49bbe4;
        case 0x49bbe8u: goto label_49bbe8;
        case 0x49bbecu: goto label_49bbec;
        case 0x49bbf0u: goto label_49bbf0;
        case 0x49bbf4u: goto label_49bbf4;
        case 0x49bbf8u: goto label_49bbf8;
        case 0x49bbfcu: goto label_49bbfc;
        case 0x49bc00u: goto label_49bc00;
        case 0x49bc04u: goto label_49bc04;
        case 0x49bc08u: goto label_49bc08;
        case 0x49bc0cu: goto label_49bc0c;
        case 0x49bc10u: goto label_49bc10;
        case 0x49bc14u: goto label_49bc14;
        case 0x49bc18u: goto label_49bc18;
        case 0x49bc1cu: goto label_49bc1c;
        case 0x49bc20u: goto label_49bc20;
        case 0x49bc24u: goto label_49bc24;
        case 0x49bc28u: goto label_49bc28;
        case 0x49bc2cu: goto label_49bc2c;
        case 0x49bc30u: goto label_49bc30;
        case 0x49bc34u: goto label_49bc34;
        case 0x49bc38u: goto label_49bc38;
        case 0x49bc3cu: goto label_49bc3c;
        case 0x49bc40u: goto label_49bc40;
        case 0x49bc44u: goto label_49bc44;
        case 0x49bc48u: goto label_49bc48;
        case 0x49bc4cu: goto label_49bc4c;
        case 0x49bc50u: goto label_49bc50;
        case 0x49bc54u: goto label_49bc54;
        case 0x49bc58u: goto label_49bc58;
        case 0x49bc5cu: goto label_49bc5c;
        case 0x49bc60u: goto label_49bc60;
        case 0x49bc64u: goto label_49bc64;
        case 0x49bc68u: goto label_49bc68;
        case 0x49bc6cu: goto label_49bc6c;
        case 0x49bc70u: goto label_49bc70;
        case 0x49bc74u: goto label_49bc74;
        case 0x49bc78u: goto label_49bc78;
        case 0x49bc7cu: goto label_49bc7c;
        case 0x49bc80u: goto label_49bc80;
        case 0x49bc84u: goto label_49bc84;
        case 0x49bc88u: goto label_49bc88;
        case 0x49bc8cu: goto label_49bc8c;
        case 0x49bc90u: goto label_49bc90;
        case 0x49bc94u: goto label_49bc94;
        case 0x49bc98u: goto label_49bc98;
        case 0x49bc9cu: goto label_49bc9c;
        case 0x49bca0u: goto label_49bca0;
        case 0x49bca4u: goto label_49bca4;
        case 0x49bca8u: goto label_49bca8;
        case 0x49bcacu: goto label_49bcac;
        case 0x49bcb0u: goto label_49bcb0;
        case 0x49bcb4u: goto label_49bcb4;
        case 0x49bcb8u: goto label_49bcb8;
        case 0x49bcbcu: goto label_49bcbc;
        case 0x49bcc0u: goto label_49bcc0;
        case 0x49bcc4u: goto label_49bcc4;
        case 0x49bcc8u: goto label_49bcc8;
        case 0x49bcccu: goto label_49bccc;
        case 0x49bcd0u: goto label_49bcd0;
        case 0x49bcd4u: goto label_49bcd4;
        case 0x49bcd8u: goto label_49bcd8;
        case 0x49bcdcu: goto label_49bcdc;
        case 0x49bce0u: goto label_49bce0;
        case 0x49bce4u: goto label_49bce4;
        case 0x49bce8u: goto label_49bce8;
        case 0x49bcecu: goto label_49bcec;
        case 0x49bcf0u: goto label_49bcf0;
        case 0x49bcf4u: goto label_49bcf4;
        case 0x49bcf8u: goto label_49bcf8;
        case 0x49bcfcu: goto label_49bcfc;
        case 0x49bd00u: goto label_49bd00;
        case 0x49bd04u: goto label_49bd04;
        case 0x49bd08u: goto label_49bd08;
        case 0x49bd0cu: goto label_49bd0c;
        case 0x49bd10u: goto label_49bd10;
        case 0x49bd14u: goto label_49bd14;
        case 0x49bd18u: goto label_49bd18;
        case 0x49bd1cu: goto label_49bd1c;
        case 0x49bd20u: goto label_49bd20;
        case 0x49bd24u: goto label_49bd24;
        case 0x49bd28u: goto label_49bd28;
        case 0x49bd2cu: goto label_49bd2c;
        case 0x49bd30u: goto label_49bd30;
        case 0x49bd34u: goto label_49bd34;
        case 0x49bd38u: goto label_49bd38;
        case 0x49bd3cu: goto label_49bd3c;
        case 0x49bd40u: goto label_49bd40;
        case 0x49bd44u: goto label_49bd44;
        case 0x49bd48u: goto label_49bd48;
        case 0x49bd4cu: goto label_49bd4c;
        case 0x49bd50u: goto label_49bd50;
        case 0x49bd54u: goto label_49bd54;
        case 0x49bd58u: goto label_49bd58;
        case 0x49bd5cu: goto label_49bd5c;
        case 0x49bd60u: goto label_49bd60;
        case 0x49bd64u: goto label_49bd64;
        case 0x49bd68u: goto label_49bd68;
        case 0x49bd6cu: goto label_49bd6c;
        case 0x49bd70u: goto label_49bd70;
        case 0x49bd74u: goto label_49bd74;
        case 0x49bd78u: goto label_49bd78;
        case 0x49bd7cu: goto label_49bd7c;
        case 0x49bd80u: goto label_49bd80;
        case 0x49bd84u: goto label_49bd84;
        case 0x49bd88u: goto label_49bd88;
        case 0x49bd8cu: goto label_49bd8c;
        case 0x49bd90u: goto label_49bd90;
        case 0x49bd94u: goto label_49bd94;
        case 0x49bd98u: goto label_49bd98;
        case 0x49bd9cu: goto label_49bd9c;
        case 0x49bda0u: goto label_49bda0;
        case 0x49bda4u: goto label_49bda4;
        case 0x49bda8u: goto label_49bda8;
        case 0x49bdacu: goto label_49bdac;
        case 0x49bdb0u: goto label_49bdb0;
        case 0x49bdb4u: goto label_49bdb4;
        case 0x49bdb8u: goto label_49bdb8;
        case 0x49bdbcu: goto label_49bdbc;
        case 0x49bdc0u: goto label_49bdc0;
        case 0x49bdc4u: goto label_49bdc4;
        case 0x49bdc8u: goto label_49bdc8;
        case 0x49bdccu: goto label_49bdcc;
        case 0x49bdd0u: goto label_49bdd0;
        case 0x49bdd4u: goto label_49bdd4;
        case 0x49bdd8u: goto label_49bdd8;
        case 0x49bddcu: goto label_49bddc;
        case 0x49bde0u: goto label_49bde0;
        case 0x49bde4u: goto label_49bde4;
        case 0x49bde8u: goto label_49bde8;
        case 0x49bdecu: goto label_49bdec;
        case 0x49bdf0u: goto label_49bdf0;
        case 0x49bdf4u: goto label_49bdf4;
        case 0x49bdf8u: goto label_49bdf8;
        case 0x49bdfcu: goto label_49bdfc;
        case 0x49be00u: goto label_49be00;
        case 0x49be04u: goto label_49be04;
        case 0x49be08u: goto label_49be08;
        case 0x49be0cu: goto label_49be0c;
        case 0x49be10u: goto label_49be10;
        case 0x49be14u: goto label_49be14;
        case 0x49be18u: goto label_49be18;
        case 0x49be1cu: goto label_49be1c;
        case 0x49be20u: goto label_49be20;
        case 0x49be24u: goto label_49be24;
        case 0x49be28u: goto label_49be28;
        case 0x49be2cu: goto label_49be2c;
        case 0x49be30u: goto label_49be30;
        case 0x49be34u: goto label_49be34;
        case 0x49be38u: goto label_49be38;
        case 0x49be3cu: goto label_49be3c;
        case 0x49be40u: goto label_49be40;
        case 0x49be44u: goto label_49be44;
        case 0x49be48u: goto label_49be48;
        case 0x49be4cu: goto label_49be4c;
        case 0x49be50u: goto label_49be50;
        case 0x49be54u: goto label_49be54;
        case 0x49be58u: goto label_49be58;
        case 0x49be5cu: goto label_49be5c;
        case 0x49be60u: goto label_49be60;
        case 0x49be64u: goto label_49be64;
        case 0x49be68u: goto label_49be68;
        case 0x49be6cu: goto label_49be6c;
        case 0x49be70u: goto label_49be70;
        case 0x49be74u: goto label_49be74;
        case 0x49be78u: goto label_49be78;
        case 0x49be7cu: goto label_49be7c;
        case 0x49be80u: goto label_49be80;
        case 0x49be84u: goto label_49be84;
        case 0x49be88u: goto label_49be88;
        case 0x49be8cu: goto label_49be8c;
        case 0x49be90u: goto label_49be90;
        case 0x49be94u: goto label_49be94;
        case 0x49be98u: goto label_49be98;
        case 0x49be9cu: goto label_49be9c;
        case 0x49bea0u: goto label_49bea0;
        case 0x49bea4u: goto label_49bea4;
        case 0x49bea8u: goto label_49bea8;
        case 0x49beacu: goto label_49beac;
        case 0x49beb0u: goto label_49beb0;
        case 0x49beb4u: goto label_49beb4;
        case 0x49beb8u: goto label_49beb8;
        case 0x49bebcu: goto label_49bebc;
        case 0x49bec0u: goto label_49bec0;
        case 0x49bec4u: goto label_49bec4;
        case 0x49bec8u: goto label_49bec8;
        case 0x49beccu: goto label_49becc;
        case 0x49bed0u: goto label_49bed0;
        case 0x49bed4u: goto label_49bed4;
        case 0x49bed8u: goto label_49bed8;
        case 0x49bedcu: goto label_49bedc;
        case 0x49bee0u: goto label_49bee0;
        case 0x49bee4u: goto label_49bee4;
        case 0x49bee8u: goto label_49bee8;
        case 0x49beecu: goto label_49beec;
        case 0x49bef0u: goto label_49bef0;
        case 0x49bef4u: goto label_49bef4;
        case 0x49bef8u: goto label_49bef8;
        case 0x49befcu: goto label_49befc;
        case 0x49bf00u: goto label_49bf00;
        case 0x49bf04u: goto label_49bf04;
        case 0x49bf08u: goto label_49bf08;
        case 0x49bf0cu: goto label_49bf0c;
        case 0x49bf10u: goto label_49bf10;
        case 0x49bf14u: goto label_49bf14;
        case 0x49bf18u: goto label_49bf18;
        case 0x49bf1cu: goto label_49bf1c;
        case 0x49bf20u: goto label_49bf20;
        case 0x49bf24u: goto label_49bf24;
        case 0x49bf28u: goto label_49bf28;
        case 0x49bf2cu: goto label_49bf2c;
        case 0x49bf30u: goto label_49bf30;
        case 0x49bf34u: goto label_49bf34;
        case 0x49bf38u: goto label_49bf38;
        case 0x49bf3cu: goto label_49bf3c;
        case 0x49bf40u: goto label_49bf40;
        case 0x49bf44u: goto label_49bf44;
        case 0x49bf48u: goto label_49bf48;
        case 0x49bf4cu: goto label_49bf4c;
        case 0x49bf50u: goto label_49bf50;
        case 0x49bf54u: goto label_49bf54;
        case 0x49bf58u: goto label_49bf58;
        case 0x49bf5cu: goto label_49bf5c;
        case 0x49bf60u: goto label_49bf60;
        case 0x49bf64u: goto label_49bf64;
        case 0x49bf68u: goto label_49bf68;
        case 0x49bf6cu: goto label_49bf6c;
        case 0x49bf70u: goto label_49bf70;
        case 0x49bf74u: goto label_49bf74;
        case 0x49bf78u: goto label_49bf78;
        case 0x49bf7cu: goto label_49bf7c;
        case 0x49bf80u: goto label_49bf80;
        case 0x49bf84u: goto label_49bf84;
        case 0x49bf88u: goto label_49bf88;
        case 0x49bf8cu: goto label_49bf8c;
        case 0x49bf90u: goto label_49bf90;
        case 0x49bf94u: goto label_49bf94;
        case 0x49bf98u: goto label_49bf98;
        case 0x49bf9cu: goto label_49bf9c;
        case 0x49bfa0u: goto label_49bfa0;
        case 0x49bfa4u: goto label_49bfa4;
        case 0x49bfa8u: goto label_49bfa8;
        case 0x49bfacu: goto label_49bfac;
        case 0x49bfb0u: goto label_49bfb0;
        case 0x49bfb4u: goto label_49bfb4;
        case 0x49bfb8u: goto label_49bfb8;
        case 0x49bfbcu: goto label_49bfbc;
        case 0x49bfc0u: goto label_49bfc0;
        case 0x49bfc4u: goto label_49bfc4;
        case 0x49bfc8u: goto label_49bfc8;
        case 0x49bfccu: goto label_49bfcc;
        case 0x49bfd0u: goto label_49bfd0;
        case 0x49bfd4u: goto label_49bfd4;
        case 0x49bfd8u: goto label_49bfd8;
        case 0x49bfdcu: goto label_49bfdc;
        case 0x49bfe0u: goto label_49bfe0;
        case 0x49bfe4u: goto label_49bfe4;
        case 0x49bfe8u: goto label_49bfe8;
        case 0x49bfecu: goto label_49bfec;
        case 0x49bff0u: goto label_49bff0;
        case 0x49bff4u: goto label_49bff4;
        case 0x49bff8u: goto label_49bff8;
        case 0x49bffcu: goto label_49bffc;
        case 0x49c000u: goto label_49c000;
        case 0x49c004u: goto label_49c004;
        case 0x49c008u: goto label_49c008;
        case 0x49c00cu: goto label_49c00c;
        case 0x49c010u: goto label_49c010;
        case 0x49c014u: goto label_49c014;
        case 0x49c018u: goto label_49c018;
        case 0x49c01cu: goto label_49c01c;
        case 0x49c020u: goto label_49c020;
        case 0x49c024u: goto label_49c024;
        case 0x49c028u: goto label_49c028;
        case 0x49c02cu: goto label_49c02c;
        case 0x49c030u: goto label_49c030;
        case 0x49c034u: goto label_49c034;
        case 0x49c038u: goto label_49c038;
        case 0x49c03cu: goto label_49c03c;
        default: break;
    }

    ctx->pc = 0x49b450u;

label_49b450:
    // 0x49b450: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x49b450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_49b454:
    // 0x49b454: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x49b454u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_49b458:
    // 0x49b458: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x49b458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_49b45c:
    // 0x49b45c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x49b45cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_49b460:
    // 0x49b460: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x49b460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_49b464:
    // 0x49b464: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x49b464u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_49b468:
    // 0x49b468: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x49b468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_49b46c:
    // 0x49b46c: 0x8e470020  lw          $a3, 0x20($s2)
    ctx->pc = 0x49b46cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_49b470:
    // 0x49b470: 0x10e00011  beqz        $a3, . + 4 + (0x11 << 2)
label_49b474:
    if (ctx->pc == 0x49B474u) {
        ctx->pc = 0x49B474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B470u;
        // 0x49b474: 0x8e42001c  lw          $v0, 0x1C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49B478u;
        goto label_49b478;
    }
    ctx->pc = 0x49B470u;
    {
        const bool branch_taken_0x49b470 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x49B474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B470u;
        // 0x49b474: 0x8e42001c  lw          $v0, 0x1C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49b470) {
            ctx->pc = 0x49B4B8u;
            goto label_49b4b8;
        }
    }
    ctx->pc = 0x49B478u;
label_49b478:
    // 0x49b478: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x49b478u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_49b47c:
    // 0x49b47c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_49b480:
    if (ctx->pc == 0x49B480u) {
        ctx->pc = 0x49B480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B47Cu;
        // 0x49b480: 0x3c030fff  lui         $v1, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49B484u;
        goto label_49b484;
    }
    ctx->pc = 0x49B47Cu;
    {
        const bool branch_taken_0x49b47c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49B480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B47Cu;
        // 0x49b480: 0x3c030fff  lui         $v1, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49b47c) {
            ctx->pc = 0x49B4A0u;
            goto label_49b4a0;
        }
    }
    ctx->pc = 0x49B484u;
label_49b484:
    // 0x49b484: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x49b484u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_49b488:
    // 0x49b488: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49b488u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_49b48c:
    // 0x49b48c: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x49b48cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_49b490:
    // 0x49b490: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x49b490u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_49b494:
    // 0x49b494: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x49b494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_49b498:
    // 0x49b498: 0x1000000b  b           . + 4 + (0xB << 2)
label_49b49c:
    if (ctx->pc == 0x49B49Cu) {
        ctx->pc = 0x49B49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B498u;
        // 0x49b49c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49B4A0u;
        goto label_49b4a0;
    }
    ctx->pc = 0x49B498u;
    {
        const bool branch_taken_0x49b498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49B49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B498u;
        // 0x49b49c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49b498) {
            ctx->pc = 0x49B4C8u;
            goto label_49b4c8;
        }
    }
    ctx->pc = 0x49B4A0u;
label_49b4a0:
    // 0x49b4a0: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x49b4a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_49b4a4:
    // 0x49b4a4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49b4a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_49b4a8:
    // 0x49b4a8: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x49b4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_49b4ac:
    // 0x49b4ac: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x49b4acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_49b4b0:
    // 0x49b4b0: 0x10000005  b           . + 4 + (0x5 << 2)
label_49b4b4:
    if (ctx->pc == 0x49B4B4u) {
        ctx->pc = 0x49B4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B4B0u;
        // 0x49b4b4: 0xe22021  addu        $a0, $a3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49B4B8u;
        goto label_49b4b8;
    }
    ctx->pc = 0x49B4B0u;
    {
        const bool branch_taken_0x49b4b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49B4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B4B0u;
        // 0x49b4b4: 0xe22021  addu        $a0, $a3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49b4b0) {
            ctx->pc = 0x49B4C8u;
            goto label_49b4c8;
        }
    }
    ctx->pc = 0x49B4B8u;
label_49b4b8:
    // 0x49b4b8: 0x26440028  addiu       $a0, $s2, 0x28
    ctx->pc = 0x49b4b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 40));
label_49b4bc:
    // 0x49b4bc: 0x2643002c  addiu       $v1, $s2, 0x2C
    ctx->pc = 0x49b4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 44));
label_49b4c0:
    // 0x49b4c0: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x49b4c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_49b4c4:
    // 0x49b4c4: 0x62200b  movn        $a0, $v1, $v0
    ctx->pc = 0x49b4c4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
label_49b4c8:
    // 0x49b4c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x49b4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_49b4cc:
    // 0x49b4cc: 0x54c2001e  bnel        $a2, $v0, . + 4 + (0x1E << 2)
label_49b4d0:
    if (ctx->pc == 0x49B4D0u) {
        ctx->pc = 0x49B4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B4CCu;
        // 0x49b4d0: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49B4D4u;
        goto label_49b4d4;
    }
    ctx->pc = 0x49B4CCu;
    {
        const bool branch_taken_0x49b4cc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x49b4cc) {
            ctx->pc = 0x49B4D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49B4CCu;
            // 0x49b4d0: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x49B548u;
            goto label_49b548;
        }
    }
    ctx->pc = 0x49B4D4u;
label_49b4d4:
    // 0x49b4d4: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x49b4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_49b4d8:
    // 0x49b4d8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x49b4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_49b4dc:
    // 0x49b4dc: 0xa21018  mult        $v0, $a1, $v0
    ctx->pc = 0x49b4dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_49b4e0:
    // 0x49b4e0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x49b4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_49b4e4:
    // 0x49b4e4: 0x8c510004  lw          $s1, 0x4($v0)
    ctx->pc = 0x49b4e4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_49b4e8:
    // 0x49b4e8: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x49b4e8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_49b4ec:
    // 0x49b4ec: 0x12110030  beq         $s0, $s1, . + 4 + (0x30 << 2)
label_49b4f0:
    if (ctx->pc == 0x49B4F0u) {
        ctx->pc = 0x49B4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B4ECu;
        // 0x49b4f0: 0x3c130066  lui         $s3, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49B4F4u;
        goto label_49b4f4;
    }
    ctx->pc = 0x49B4ECu;
    {
        const bool branch_taken_0x49b4ec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 17));
        ctx->pc = 0x49B4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B4ECu;
        // 0x49b4f0: 0x3c130066  lui         $s3, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49b4ec) {
            ctx->pc = 0x49B5B0u;
            goto label_49b5b0;
        }
    }
    ctx->pc = 0x49B4F4u;
label_49b4f4:
    // 0x49b4f4: 0x2607ffec  addiu       $a3, $s0, -0x14
    ctx->pc = 0x49b4f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967276));
label_49b4f8:
    // 0x49b4f8: 0x266482e0  addiu       $a0, $s3, -0x7D20
    ctx->pc = 0x49b4f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294935264));
label_49b4fc:
    // 0x49b4fc: 0x8ce60010  lw          $a2, 0x10($a3)
    ctx->pc = 0x49b4fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
label_49b500:
    // 0x49b500: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x49b500u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_49b504:
    // 0x49b504: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x49b504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_49b508:
    // 0x49b508: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x49b508u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_49b50c:
    // 0x49b50c: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x49b50cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_49b510:
    // 0x49b510: 0x8ce3000c  lw          $v1, 0xC($a3)
    ctx->pc = 0x49b510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_49b514:
    // 0x49b514: 0x8ce20010  lw          $v0, 0x10($a3)
    ctx->pc = 0x49b514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
label_49b518:
    // 0x49b518: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x49b518u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_49b51c:
    // 0x49b51c: 0x8ce20014  lw          $v0, 0x14($a3)
    ctx->pc = 0x49b51cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
label_49b520:
    // 0x49b520: 0x8ce60018  lw          $a2, 0x18($a3)
    ctx->pc = 0x49b520u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
label_49b524:
    // 0x49b524: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x49b524u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_49b528:
    // 0x49b528: 0x8ce30014  lw          $v1, 0x14($a3)
    ctx->pc = 0x49b528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
label_49b52c:
    // 0x49b52c: 0x8ce20018  lw          $v0, 0x18($a3)
    ctx->pc = 0x49b52cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
label_49b530:
    // 0x49b530: 0xc12a9a0  jal         func_4AA680
label_49b534:
    if (ctx->pc == 0x49B534u) {
        ctx->pc = 0x49B534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B530u;
        // 0x49b534: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49B538u;
        goto label_49b538;
    }
    ctx->pc = 0x49B530u;
    SET_GPR_U32(ctx, 31, 0x49B538u);
    ctx->pc = 0x49B534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49B530u;
    // 0x49b534: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AA680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AA680u, 0x49B530u, 0x49B538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49B538u;
label_49b538:
    // 0x49b538: 0x1611ffef  bne         $s0, $s1, . + 4 + (-0x11 << 2)
label_49b53c:
    if (ctx->pc == 0x49B53Cu) {
        ctx->pc = 0x49B53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B538u;
        // 0x49b53c: 0x2607ffec  addiu       $a3, $s0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967276));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49B540u;
        goto label_49b540;
    }
    ctx->pc = 0x49B538u;
    {
        const bool branch_taken_0x49b538 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        ctx->pc = 0x49B53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B538u;
        // 0x49b53c: 0x2607ffec  addiu       $a3, $s0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49b538) {
            ctx->pc = 0x49B4F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49b4f8;
        }
    }
    ctx->pc = 0x49B540u;
label_49b540:
    // 0x49b540: 0x1000001c  b           . + 4 + (0x1C << 2)
label_49b544:
    if (ctx->pc == 0x49B544u) {
        ctx->pc = 0x49B544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B540u;
        // 0x49b544: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49B548u;
        goto label_49b548;
    }
    ctx->pc = 0x49B540u;
    {
        const bool branch_taken_0x49b540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49B544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B540u;
        // 0x49b544: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49b540) {
            ctx->pc = 0x49B5B4u;
            goto label_49b5b4;
        }
    }
    ctx->pc = 0x49B548u;
label_49b548:
    // 0x49b548: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x49b548u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_49b54c:
    // 0x49b54c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x49b54cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_49b550:
    // 0x49b550: 0x8c510004  lw          $s1, 0x4($v0)
    ctx->pc = 0x49b550u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_49b554:
    // 0x49b554: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x49b554u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_49b558:
    // 0x49b558: 0x12110015  beq         $s0, $s1, . + 4 + (0x15 << 2)
label_49b55c:
    if (ctx->pc == 0x49B55Cu) {
        ctx->pc = 0x49B55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B558u;
        // 0x49b55c: 0x3c130066  lui         $s3, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49B560u;
        goto label_49b560;
    }
    ctx->pc = 0x49B558u;
    {
        const bool branch_taken_0x49b558 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 17));
        ctx->pc = 0x49B55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B558u;
        // 0x49b55c: 0x3c130066  lui         $s3, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49b558) {
            ctx->pc = 0x49B5B0u;
            goto label_49b5b0;
        }
    }
    ctx->pc = 0x49B560u;
label_49b560:
    // 0x49b560: 0x2607fff4  addiu       $a3, $s0, -0xC
    ctx->pc = 0x49b560u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967284));
label_49b564:
    // 0x49b564: 0x0  nop
    ctx->pc = 0x49b564u;
    // NOP
label_49b568:
    // 0x49b568: 0x266482e0  addiu       $a0, $s3, -0x7D20
    ctx->pc = 0x49b568u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294935264));
label_49b56c:
    // 0x49b56c: 0x8ce60010  lw          $a2, 0x10($a3)
    ctx->pc = 0x49b56cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
label_49b570:
    // 0x49b570: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x49b570u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_49b574:
    // 0x49b574: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x49b574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_49b578:
    // 0x49b578: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x49b578u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_49b57c:
    // 0x49b57c: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x49b57cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_49b580:
    // 0x49b580: 0x8ce3000c  lw          $v1, 0xC($a3)
    ctx->pc = 0x49b580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_49b584:
    // 0x49b584: 0x8ce20010  lw          $v0, 0x10($a3)
    ctx->pc = 0x49b584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
label_49b588:
    // 0x49b588: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x49b588u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_49b58c:
    // 0x49b58c: 0x8ce20014  lw          $v0, 0x14($a3)
    ctx->pc = 0x49b58cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
label_49b590:
    // 0x49b590: 0x8ce60018  lw          $a2, 0x18($a3)
    ctx->pc = 0x49b590u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
label_49b594:
    // 0x49b594: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x49b594u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_49b598:
    // 0x49b598: 0x8ce30014  lw          $v1, 0x14($a3)
    ctx->pc = 0x49b598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
label_49b59c:
    // 0x49b59c: 0x8ce20018  lw          $v0, 0x18($a3)
    ctx->pc = 0x49b59cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
label_49b5a0:
    // 0x49b5a0: 0xc12a9a0  jal         func_4AA680
label_49b5a4:
    if (ctx->pc == 0x49B5A4u) {
        ctx->pc = 0x49B5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B5A0u;
        // 0x49b5a4: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49B5A8u;
        goto label_49b5a8;
    }
    ctx->pc = 0x49B5A0u;
    SET_GPR_U32(ctx, 31, 0x49B5A8u);
    ctx->pc = 0x49B5A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49B5A0u;
    // 0x49b5a4: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AA680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AA680u, 0x49B5A0u, 0x49B5A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49B5A8u;
label_49b5a8:
    // 0x49b5a8: 0x1611ffef  bne         $s0, $s1, . + 4 + (-0x11 << 2)
label_49b5ac:
    if (ctx->pc == 0x49B5ACu) {
        ctx->pc = 0x49B5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B5A8u;
        // 0x49b5ac: 0x2607fff4  addiu       $a3, $s0, -0xC (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967284));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49B5B0u;
        goto label_49b5b0;
    }
    ctx->pc = 0x49B5A8u;
    {
        const bool branch_taken_0x49b5a8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        ctx->pc = 0x49B5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B5A8u;
        // 0x49b5ac: 0x2607fff4  addiu       $a3, $s0, -0xC (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967284));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49b5a8) {
            ctx->pc = 0x49B568u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49b568;
        }
    }
    ctx->pc = 0x49B5B0u;
label_49b5b0:
    // 0x49b5b0: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x49b5b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_49b5b4:
    // 0x49b5b4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x49b5b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_49b5b8:
    // 0x49b5b8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x49b5b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_49b5bc:
    // 0x49b5bc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x49b5bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_49b5c0:
    // 0x49b5c0: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x49b5c0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_49b5c4:
    // 0x49b5c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x49b5c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_49b5c8:
    // 0x49b5c8: 0x3e00008  jr          $ra
label_49b5cc:
    if (ctx->pc == 0x49B5CCu) {
        ctx->pc = 0x49B5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B5C8u;
        // 0x49b5cc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49B5D0u;
        goto label_49b5d0;
    }
    ctx->pc = 0x49B5C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49B5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B5C8u;
        // 0x49b5cc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49B5C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49B5D0u;
label_49b5d0:
    // 0x49b5d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x49b5d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_49b5d4:
    // 0x49b5d4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x49b5d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_49b5d8:
    // 0x49b5d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x49b5d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_49b5dc:
    // 0x49b5dc: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x49b5dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_49b5e0:
    // 0x49b5e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x49b5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_49b5e4:
    // 0x49b5e4: 0x14c20029  bne         $a2, $v0, . + 4 + (0x29 << 2)
label_49b5e8:
    if (ctx->pc == 0x49B5E8u) {
        ctx->pc = 0x49B5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B5E4u;
        // 0x49b5e8: 0x3a0402d  daddu       $t0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49B5ECu;
        goto label_49b5ec;
    }
    ctx->pc = 0x49B5E4u;
    {
        const bool branch_taken_0x49b5e4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x49B5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B5E4u;
        // 0x49b5e8: 0x3a0402d  daddu       $t0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49b5e4) {
            ctx->pc = 0x49B68Cu;
            goto label_49b68c;
        }
    }
    ctx->pc = 0x49B5ECu;
label_49b5ec:
    // 0x49b5ec: 0x8c860020  lw          $a2, 0x20($a0)
    ctx->pc = 0x49b5ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_49b5f0:
    // 0x49b5f0: 0x10c00011  beqz        $a2, . + 4 + (0x11 << 2)
label_49b5f4:
    if (ctx->pc == 0x49B5F4u) {
        ctx->pc = 0x49B5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B5F0u;
        // 0x49b5f4: 0x8c82001c  lw          $v0, 0x1C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49B5F8u;
        goto label_49b5f8;
    }
    ctx->pc = 0x49B5F0u;
    {
        const bool branch_taken_0x49b5f0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x49B5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B5F0u;
        // 0x49b5f4: 0x8c82001c  lw          $v0, 0x1C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49b5f0) {
            ctx->pc = 0x49B638u;
            goto label_49b638;
        }
    }
    ctx->pc = 0x49B5F8u;
label_49b5f8:
    // 0x49b5f8: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x49b5f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_49b5fc:
    // 0x49b5fc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_49b600:
    if (ctx->pc == 0x49B600u) {
        ctx->pc = 0x49B600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B5FCu;
        // 0x49b600: 0x3c030fff  lui         $v1, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49B604u;
        goto label_49b604;
    }
    ctx->pc = 0x49B5FCu;
    {
        const bool branch_taken_0x49b5fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49B600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B5FCu;
        // 0x49b600: 0x3c030fff  lui         $v1, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49b5fc) {
            ctx->pc = 0x49B620u;
            goto label_49b620;
        }
    }
    ctx->pc = 0x49B604u;
label_49b604:
    // 0x49b604: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x49b604u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_49b608:
    // 0x49b608: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49b608u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_49b60c:
    // 0x49b60c: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x49b60cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_49b610:
    // 0x49b610: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x49b610u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_49b614:
    // 0x49b614: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x49b614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_49b618:
    // 0x49b618: 0x1000000b  b           . + 4 + (0xB << 2)
label_49b61c:
    if (ctx->pc == 0x49B61Cu) {
        ctx->pc = 0x49B61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B618u;
        // 0x49b61c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49B620u;
        goto label_49b620;
    }
    ctx->pc = 0x49B618u;
    {
        const bool branch_taken_0x49b618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49B61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B618u;
        // 0x49b61c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49b618) {
            ctx->pc = 0x49B648u;
            goto label_49b648;
        }
    }
    ctx->pc = 0x49B620u;
label_49b620:
    // 0x49b620: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x49b620u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_49b624:
    // 0x49b624: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49b624u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_49b628:
    // 0x49b628: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x49b628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_49b62c:
    // 0x49b62c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x49b62cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_49b630:
    // 0x49b630: 0x10000005  b           . + 4 + (0x5 << 2)
label_49b634:
    if (ctx->pc == 0x49B634u) {
        ctx->pc = 0x49B634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B630u;
        // 0x49b634: 0xc22021  addu        $a0, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49B638u;
        goto label_49b638;
    }
    ctx->pc = 0x49B630u;
    {
        const bool branch_taken_0x49b630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49B634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B630u;
        // 0x49b634: 0xc22021  addu        $a0, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49b630) {
            ctx->pc = 0x49B648u;
            goto label_49b648;
        }
    }
    ctx->pc = 0x49B638u;
label_49b638:
    // 0x49b638: 0x2483002c  addiu       $v1, $a0, 0x2C
    ctx->pc = 0x49b638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 44));
label_49b63c:
    // 0x49b63c: 0x24840028  addiu       $a0, $a0, 0x28
    ctx->pc = 0x49b63cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 40));
label_49b640:
    // 0x49b640: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x49b640u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_49b644:
    // 0x49b644: 0x62200b  movn        $a0, $v1, $v0
    ctx->pc = 0x49b644u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
label_49b648:
    // 0x49b648: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x49b648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_49b64c:
    // 0x49b64c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x49b64cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_49b650:
    // 0x49b650: 0xa21018  mult        $v0, $a1, $v0
    ctx->pc = 0x49b650u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_49b654:
    // 0x49b654: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x49b654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_49b658:
    // 0x49b658: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x49b658u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_49b65c:
    // 0x49b65c: 0x10870014  beq         $a0, $a3, . + 4 + (0x14 << 2)
label_49b660:
    if (ctx->pc == 0x49B660u) {
        ctx->pc = 0x49B660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B65Cu;
        // 0x49b660: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49B664u;
        goto label_49b664;
    }
    ctx->pc = 0x49B65Cu;
    {
        const bool branch_taken_0x49b65c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 7));
        ctx->pc = 0x49B660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B65Cu;
        // 0x49b660: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49b65c) {
            ctx->pc = 0x49B6B0u;
            goto label_49b6b0;
        }
    }
    ctx->pc = 0x49B664u;
label_49b664:
    // 0x49b664: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x49b664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_49b668:
    // 0x49b668: 0x24e3ffec  addiu       $v1, $a3, -0x14
    ctx->pc = 0x49b668u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967276));
label_49b66c:
    // 0x49b66c: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x49b66cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_49b670:
    // 0x49b670: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x49b670u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_49b674:
    // 0x49b674: 0x8ce4ffec  lw          $a0, -0x14($a3)
    ctx->pc = 0x49b674u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294967276)));
label_49b678:
    // 0x49b678: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x49b678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_49b67c:
    // 0x49b67c: 0x40f809  jalr        $v0
label_49b680:
    if (ctx->pc == 0x49B680u) {
        ctx->pc = 0x49B680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B67Cu;
        // 0x49b680: 0x8c650004  lw          $a1, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49B684u;
        goto label_49b684;
    }
    ctx->pc = 0x49B67Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x49B684u);
        ctx->pc = 0x49B680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B67Cu;
        // 0x49b680: 0x8c650004  lw          $a1, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49B67Cu, 0x49B684u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x49B684u;
label_49b684:
    // 0x49b684: 0x1000000a  b           . + 4 + (0xA << 2)
label_49b688:
    if (ctx->pc == 0x49B688u) {
        ctx->pc = 0x49B68Cu;
        goto label_49b68c;
    }
    ctx->pc = 0x49B684u;
    {
        const bool branch_taken_0x49b684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x49b684) {
            ctx->pc = 0x49B6B0u;
            goto label_49b6b0;
        }
    }
    ctx->pc = 0x49B68Cu;
label_49b68c:
    // 0x49b68c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x49b68cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_49b690:
    // 0x49b690: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x49b690u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_49b694:
    // 0x49b694: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x49b694u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_49b698:
    // 0x49b698: 0x8c47004c  lw          $a3, 0x4C($v0)
    ctx->pc = 0x49b698u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_49b69c:
    // 0x49b69c: 0x8ce20014  lw          $v0, 0x14($a3)
    ctx->pc = 0x49b69cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
label_49b6a0:
    // 0x49b6a0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x49b6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_49b6a4:
    // 0x49b6a4: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x49b6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_49b6a8:
    // 0x49b6a8: 0x40f809  jalr        $v0
label_49b6ac:
    if (ctx->pc == 0x49B6ACu) {
        ctx->pc = 0x49B6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B6A8u;
        // 0x49b6ac: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49B6B0u;
        goto label_49b6b0;
    }
    ctx->pc = 0x49B6A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x49B6B0u);
        ctx->pc = 0x49B6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B6A8u;
        // 0x49b6ac: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49B6A8u, 0x49B6B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x49B6B0u;
label_49b6b0:
    // 0x49b6b0: 0x52000007  beql        $s0, $zero, . + 4 + (0x7 << 2)
label_49b6b4:
    if (ctx->pc == 0x49B6B4u) {
        ctx->pc = 0x49B6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B6B0u;
        // 0x49b6b4: 0x93a20000  lbu         $v0, 0x0($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49B6B8u;
        goto label_49b6b8;
    }
    ctx->pc = 0x49B6B0u;
    {
        const bool branch_taken_0x49b6b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x49b6b0) {
            ctx->pc = 0x49B6B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49B6B0u;
            // 0x49b6b4: 0x93a20000  lbu         $v0, 0x0($sp) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x49B6D0u;
            goto label_49b6d0;
        }
    }
    ctx->pc = 0x49B6B8u;
label_49b6b8:
    // 0x49b6b8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_49b6bc:
    if (ctx->pc == 0x49B6BCu) {
        ctx->pc = 0x49B6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B6B8u;
        // 0x49b6bc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49B6C0u;
        goto label_49b6c0;
    }
    ctx->pc = 0x49B6B8u;
    {
        const bool branch_taken_0x49b6b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49B6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B6B8u;
        // 0x49b6bc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49b6b8) {
            ctx->pc = 0x49B6C8u;
            goto label_49b6c8;
        }
    }
    ctx->pc = 0x49B6C0u;
label_49b6c0:
    // 0x49b6c0: 0x10000002  b           . + 4 + (0x2 << 2)
label_49b6c4:
    if (ctx->pc == 0x49B6C4u) {
        ctx->pc = 0x49B6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B6C0u;
        // 0x49b6c4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49B6C8u;
        goto label_49b6c8;
    }
    ctx->pc = 0x49B6C0u;
    {
        const bool branch_taken_0x49b6c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49B6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B6C0u;
        // 0x49b6c4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49b6c0) {
            ctx->pc = 0x49B6CCu;
            goto label_49b6cc;
        }
    }
    ctx->pc = 0x49B6C8u;
label_49b6c8:
    // 0x49b6c8: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x49b6c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_49b6cc:
    // 0x49b6cc: 0x93a20000  lbu         $v0, 0x0($sp)
    ctx->pc = 0x49b6ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
label_49b6d0:
    // 0x49b6d0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x49b6d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_49b6d4:
    // 0x49b6d4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x49b6d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_49b6d8:
    // 0x49b6d8: 0x3e00008  jr          $ra
label_49b6dc:
    if (ctx->pc == 0x49B6DCu) {
        ctx->pc = 0x49B6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B6D8u;
        // 0x49b6dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49B6E0u;
        goto label_49b6e0;
    }
    ctx->pc = 0x49B6D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49B6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B6D8u;
        // 0x49b6dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49B6D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49B6E0u;
label_49b6e0:
    // 0x49b6e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x49b6e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_49b6e4:
    // 0x49b6e4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x49b6e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_49b6e8:
    // 0x49b6e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x49b6e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_49b6ec:
    // 0x49b6ec: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x49b6ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_49b6f0:
    // 0x49b6f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x49b6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_49b6f4:
    // 0x49b6f4: 0x14c20029  bne         $a2, $v0, . + 4 + (0x29 << 2)
label_49b6f8:
    if (ctx->pc == 0x49B6F8u) {
        ctx->pc = 0x49B6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B6F4u;
        // 0x49b6f8: 0x3a0402d  daddu       $t0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49B6FCu;
        goto label_49b6fc;
    }
    ctx->pc = 0x49B6F4u;
    {
        const bool branch_taken_0x49b6f4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x49B6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B6F4u;
        // 0x49b6f8: 0x3a0402d  daddu       $t0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49b6f4) {
            ctx->pc = 0x49B79Cu;
            goto label_49b79c;
        }
    }
    ctx->pc = 0x49B6FCu;
label_49b6fc:
    // 0x49b6fc: 0x8c860020  lw          $a2, 0x20($a0)
    ctx->pc = 0x49b6fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_49b700:
    // 0x49b700: 0x10c00011  beqz        $a2, . + 4 + (0x11 << 2)
label_49b704:
    if (ctx->pc == 0x49B704u) {
        ctx->pc = 0x49B704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B700u;
        // 0x49b704: 0x8c82001c  lw          $v0, 0x1C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49B708u;
        goto label_49b708;
    }
    ctx->pc = 0x49B700u;
    {
        const bool branch_taken_0x49b700 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x49B704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B700u;
        // 0x49b704: 0x8c82001c  lw          $v0, 0x1C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49b700) {
            ctx->pc = 0x49B748u;
            goto label_49b748;
        }
    }
    ctx->pc = 0x49B708u;
label_49b708:
    // 0x49b708: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x49b708u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_49b70c:
    // 0x49b70c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_49b710:
    if (ctx->pc == 0x49B710u) {
        ctx->pc = 0x49B710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B70Cu;
        // 0x49b710: 0x3c030fff  lui         $v1, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49B714u;
        goto label_49b714;
    }
    ctx->pc = 0x49B70Cu;
    {
        const bool branch_taken_0x49b70c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49B710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B70Cu;
        // 0x49b710: 0x3c030fff  lui         $v1, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49b70c) {
            ctx->pc = 0x49B730u;
            goto label_49b730;
        }
    }
    ctx->pc = 0x49B714u;
label_49b714:
    // 0x49b714: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x49b714u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_49b718:
    // 0x49b718: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49b718u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_49b71c:
    // 0x49b71c: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x49b71cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_49b720:
    // 0x49b720: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x49b720u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_49b724:
    // 0x49b724: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x49b724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_49b728:
    // 0x49b728: 0x1000000b  b           . + 4 + (0xB << 2)
label_49b72c:
    if (ctx->pc == 0x49B72Cu) {
        ctx->pc = 0x49B72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B728u;
        // 0x49b72c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49B730u;
        goto label_49b730;
    }
    ctx->pc = 0x49B728u;
    {
        const bool branch_taken_0x49b728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49B72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B728u;
        // 0x49b72c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49b728) {
            ctx->pc = 0x49B758u;
            goto label_49b758;
        }
    }
    ctx->pc = 0x49B730u;
label_49b730:
    // 0x49b730: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x49b730u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_49b734:
    // 0x49b734: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49b734u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_49b738:
    // 0x49b738: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x49b738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_49b73c:
    // 0x49b73c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x49b73cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_49b740:
    // 0x49b740: 0x10000005  b           . + 4 + (0x5 << 2)
label_49b744:
    if (ctx->pc == 0x49B744u) {
        ctx->pc = 0x49B744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B740u;
        // 0x49b744: 0xc22021  addu        $a0, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49B748u;
        goto label_49b748;
    }
    ctx->pc = 0x49B740u;
    {
        const bool branch_taken_0x49b740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49B744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B740u;
        // 0x49b744: 0xc22021  addu        $a0, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49b740) {
            ctx->pc = 0x49B758u;
            goto label_49b758;
        }
    }
    ctx->pc = 0x49B748u;
label_49b748:
    // 0x49b748: 0x2483002c  addiu       $v1, $a0, 0x2C
    ctx->pc = 0x49b748u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 44));
label_49b74c:
    // 0x49b74c: 0x24840028  addiu       $a0, $a0, 0x28
    ctx->pc = 0x49b74cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 40));
label_49b750:
    // 0x49b750: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x49b750u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_49b754:
    // 0x49b754: 0x62200b  movn        $a0, $v1, $v0
    ctx->pc = 0x49b754u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
label_49b758:
    // 0x49b758: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x49b758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_49b75c:
    // 0x49b75c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x49b75cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_49b760:
    // 0x49b760: 0xa21018  mult        $v0, $a1, $v0
    ctx->pc = 0x49b760u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_49b764:
    // 0x49b764: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x49b764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_49b768:
    // 0x49b768: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x49b768u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_49b76c:
    // 0x49b76c: 0x10870014  beq         $a0, $a3, . + 4 + (0x14 << 2)
label_49b770:
    if (ctx->pc == 0x49B770u) {
        ctx->pc = 0x49B770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B76Cu;
        // 0x49b770: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49B774u;
        goto label_49b774;
    }
    ctx->pc = 0x49B76Cu;
    {
        const bool branch_taken_0x49b76c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 7));
        ctx->pc = 0x49B770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B76Cu;
        // 0x49b770: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49b76c) {
            ctx->pc = 0x49B7C0u;
            goto label_49b7c0;
        }
    }
    ctx->pc = 0x49B774u;
label_49b774:
    // 0x49b774: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x49b774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_49b778:
    // 0x49b778: 0x24e3ffec  addiu       $v1, $a3, -0x14
    ctx->pc = 0x49b778u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967276));
label_49b77c:
    // 0x49b77c: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x49b77cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_49b780:
    // 0x49b780: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x49b780u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_49b784:
    // 0x49b784: 0x8ce4ffec  lw          $a0, -0x14($a3)
    ctx->pc = 0x49b784u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294967276)));
label_49b788:
    // 0x49b788: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x49b788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_49b78c:
    // 0x49b78c: 0x40f809  jalr        $v0
label_49b790:
    if (ctx->pc == 0x49B790u) {
        ctx->pc = 0x49B790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B78Cu;
        // 0x49b790: 0x8c650004  lw          $a1, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49B794u;
        goto label_49b794;
    }
    ctx->pc = 0x49B78Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x49B794u);
        ctx->pc = 0x49B790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B78Cu;
        // 0x49b790: 0x8c650004  lw          $a1, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49B78Cu, 0x49B794u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x49B794u;
label_49b794:
    // 0x49b794: 0x1000000a  b           . + 4 + (0xA << 2)
label_49b798:
    if (ctx->pc == 0x49B798u) {
        ctx->pc = 0x49B79Cu;
        goto label_49b79c;
    }
    ctx->pc = 0x49B794u;
    {
        const bool branch_taken_0x49b794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x49b794) {
            ctx->pc = 0x49B7C0u;
            goto label_49b7c0;
        }
    }
    ctx->pc = 0x49B79Cu;
label_49b79c:
    // 0x49b79c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x49b79cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_49b7a0:
    // 0x49b7a0: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x49b7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_49b7a4:
    // 0x49b7a4: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x49b7a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_49b7a8:
    // 0x49b7a8: 0x8c47004c  lw          $a3, 0x4C($v0)
    ctx->pc = 0x49b7a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_49b7ac:
    // 0x49b7ac: 0x8ce20014  lw          $v0, 0x14($a3)
    ctx->pc = 0x49b7acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
label_49b7b0:
    // 0x49b7b0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x49b7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_49b7b4:
    // 0x49b7b4: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x49b7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_49b7b8:
    // 0x49b7b8: 0x40f809  jalr        $v0
label_49b7bc:
    if (ctx->pc == 0x49B7BCu) {
        ctx->pc = 0x49B7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B7B8u;
        // 0x49b7bc: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49B7C0u;
        goto label_49b7c0;
    }
    ctx->pc = 0x49B7B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x49B7C0u);
        ctx->pc = 0x49B7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B7B8u;
        // 0x49b7bc: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49B7B8u, 0x49B7C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x49B7C0u;
label_49b7c0:
    // 0x49b7c0: 0x52000007  beql        $s0, $zero, . + 4 + (0x7 << 2)
label_49b7c4:
    if (ctx->pc == 0x49B7C4u) {
        ctx->pc = 0x49B7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B7C0u;
        // 0x49b7c4: 0x83a20000  lb          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49B7C8u;
        goto label_49b7c8;
    }
    ctx->pc = 0x49B7C0u;
    {
        const bool branch_taken_0x49b7c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x49b7c0) {
            ctx->pc = 0x49B7C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49B7C0u;
            // 0x49b7c4: 0x83a20000  lb          $v0, 0x0($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x49B7E0u;
            goto label_49b7e0;
        }
    }
    ctx->pc = 0x49B7C8u;
label_49b7c8:
    // 0x49b7c8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_49b7cc:
    if (ctx->pc == 0x49B7CCu) {
        ctx->pc = 0x49B7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B7C8u;
        // 0x49b7cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49B7D0u;
        goto label_49b7d0;
    }
    ctx->pc = 0x49B7C8u;
    {
        const bool branch_taken_0x49b7c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49B7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B7C8u;
        // 0x49b7cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49b7c8) {
            ctx->pc = 0x49B7D8u;
            goto label_49b7d8;
        }
    }
    ctx->pc = 0x49B7D0u;
label_49b7d0:
    // 0x49b7d0: 0x10000002  b           . + 4 + (0x2 << 2)
label_49b7d4:
    if (ctx->pc == 0x49B7D4u) {
        ctx->pc = 0x49B7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B7D0u;
        // 0x49b7d4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49B7D8u;
        goto label_49b7d8;
    }
    ctx->pc = 0x49B7D0u;
    {
        const bool branch_taken_0x49b7d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49B7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B7D0u;
        // 0x49b7d4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49b7d0) {
            ctx->pc = 0x49B7DCu;
            goto label_49b7dc;
        }
    }
    ctx->pc = 0x49B7D8u;
label_49b7d8:
    // 0x49b7d8: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x49b7d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_49b7dc:
    // 0x49b7dc: 0x83a20000  lb          $v0, 0x0($sp)
    ctx->pc = 0x49b7dcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
label_49b7e0:
    // 0x49b7e0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x49b7e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_49b7e4:
    // 0x49b7e4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x49b7e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_49b7e8:
    // 0x49b7e8: 0x3e00008  jr          $ra
label_49b7ec:
    if (ctx->pc == 0x49B7ECu) {
        ctx->pc = 0x49B7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B7E8u;
        // 0x49b7ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49B7F0u;
        goto label_49b7f0;
    }
    ctx->pc = 0x49B7E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49B7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B7E8u;
        // 0x49b7ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49B7E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49B7F0u;
label_49b7f0:
    // 0x49b7f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x49b7f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_49b7f4:
    // 0x49b7f4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x49b7f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_49b7f8:
    // 0x49b7f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x49b7f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_49b7fc:
    // 0x49b7fc: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x49b7fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_49b800:
    // 0x49b800: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x49b800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_49b804:
    // 0x49b804: 0x14c20029  bne         $a2, $v0, . + 4 + (0x29 << 2)
label_49b808:
    if (ctx->pc == 0x49B808u) {
        ctx->pc = 0x49B808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B804u;
        // 0x49b808: 0x3a0402d  daddu       $t0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49B80Cu;
        goto label_49b80c;
    }
    ctx->pc = 0x49B804u;
    {
        const bool branch_taken_0x49b804 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x49B808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B804u;
        // 0x49b808: 0x3a0402d  daddu       $t0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49b804) {
            ctx->pc = 0x49B8ACu;
            goto label_49b8ac;
        }
    }
    ctx->pc = 0x49B80Cu;
label_49b80c:
    // 0x49b80c: 0x8c860020  lw          $a2, 0x20($a0)
    ctx->pc = 0x49b80cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_49b810:
    // 0x49b810: 0x10c00011  beqz        $a2, . + 4 + (0x11 << 2)
label_49b814:
    if (ctx->pc == 0x49B814u) {
        ctx->pc = 0x49B814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B810u;
        // 0x49b814: 0x8c82001c  lw          $v0, 0x1C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49B818u;
        goto label_49b818;
    }
    ctx->pc = 0x49B810u;
    {
        const bool branch_taken_0x49b810 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x49B814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B810u;
        // 0x49b814: 0x8c82001c  lw          $v0, 0x1C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49b810) {
            ctx->pc = 0x49B858u;
            goto label_49b858;
        }
    }
    ctx->pc = 0x49B818u;
label_49b818:
    // 0x49b818: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x49b818u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_49b81c:
    // 0x49b81c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_49b820:
    if (ctx->pc == 0x49B820u) {
        ctx->pc = 0x49B820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B81Cu;
        // 0x49b820: 0x3c030fff  lui         $v1, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49B824u;
        goto label_49b824;
    }
    ctx->pc = 0x49B81Cu;
    {
        const bool branch_taken_0x49b81c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49B820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B81Cu;
        // 0x49b820: 0x3c030fff  lui         $v1, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49b81c) {
            ctx->pc = 0x49B840u;
            goto label_49b840;
        }
    }
    ctx->pc = 0x49B824u;
label_49b824:
    // 0x49b824: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x49b824u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_49b828:
    // 0x49b828: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49b828u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_49b82c:
    // 0x49b82c: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x49b82cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_49b830:
    // 0x49b830: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x49b830u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_49b834:
    // 0x49b834: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x49b834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_49b838:
    // 0x49b838: 0x1000000b  b           . + 4 + (0xB << 2)
label_49b83c:
    if (ctx->pc == 0x49B83Cu) {
        ctx->pc = 0x49B83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B838u;
        // 0x49b83c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49B840u;
        goto label_49b840;
    }
    ctx->pc = 0x49B838u;
    {
        const bool branch_taken_0x49b838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49B83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B838u;
        // 0x49b83c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49b838) {
            ctx->pc = 0x49B868u;
            goto label_49b868;
        }
    }
    ctx->pc = 0x49B840u;
label_49b840:
    // 0x49b840: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x49b840u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_49b844:
    // 0x49b844: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49b844u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_49b848:
    // 0x49b848: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x49b848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_49b84c:
    // 0x49b84c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x49b84cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_49b850:
    // 0x49b850: 0x10000005  b           . + 4 + (0x5 << 2)
label_49b854:
    if (ctx->pc == 0x49B854u) {
        ctx->pc = 0x49B854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B850u;
        // 0x49b854: 0xc22021  addu        $a0, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49B858u;
        goto label_49b858;
    }
    ctx->pc = 0x49B850u;
    {
        const bool branch_taken_0x49b850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49B854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B850u;
        // 0x49b854: 0xc22021  addu        $a0, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49b850) {
            ctx->pc = 0x49B868u;
            goto label_49b868;
        }
    }
    ctx->pc = 0x49B858u;
label_49b858:
    // 0x49b858: 0x2483002c  addiu       $v1, $a0, 0x2C
    ctx->pc = 0x49b858u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 44));
label_49b85c:
    // 0x49b85c: 0x24840028  addiu       $a0, $a0, 0x28
    ctx->pc = 0x49b85cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 40));
label_49b860:
    // 0x49b860: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x49b860u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_49b864:
    // 0x49b864: 0x62200b  movn        $a0, $v1, $v0
    ctx->pc = 0x49b864u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
label_49b868:
    // 0x49b868: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x49b868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_49b86c:
    // 0x49b86c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x49b86cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_49b870:
    // 0x49b870: 0xa21018  mult        $v0, $a1, $v0
    ctx->pc = 0x49b870u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_49b874:
    // 0x49b874: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x49b874u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_49b878:
    // 0x49b878: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x49b878u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_49b87c:
    // 0x49b87c: 0x10870014  beq         $a0, $a3, . + 4 + (0x14 << 2)
label_49b880:
    if (ctx->pc == 0x49B880u) {
        ctx->pc = 0x49B880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B87Cu;
        // 0x49b880: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49B884u;
        goto label_49b884;
    }
    ctx->pc = 0x49B87Cu;
    {
        const bool branch_taken_0x49b87c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 7));
        ctx->pc = 0x49B880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B87Cu;
        // 0x49b880: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49b87c) {
            ctx->pc = 0x49B8D0u;
            goto label_49b8d0;
        }
    }
    ctx->pc = 0x49B884u;
label_49b884:
    // 0x49b884: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x49b884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_49b888:
    // 0x49b888: 0x24e3ffec  addiu       $v1, $a3, -0x14
    ctx->pc = 0x49b888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967276));
label_49b88c:
    // 0x49b88c: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x49b88cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_49b890:
    // 0x49b890: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x49b890u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_49b894:
    // 0x49b894: 0x8ce4ffec  lw          $a0, -0x14($a3)
    ctx->pc = 0x49b894u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294967276)));
label_49b898:
    // 0x49b898: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x49b898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_49b89c:
    // 0x49b89c: 0x40f809  jalr        $v0
label_49b8a0:
    if (ctx->pc == 0x49B8A0u) {
        ctx->pc = 0x49B8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B89Cu;
        // 0x49b8a0: 0x8c650004  lw          $a1, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49B8A4u;
        goto label_49b8a4;
    }
    ctx->pc = 0x49B89Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x49B8A4u);
        ctx->pc = 0x49B8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B89Cu;
        // 0x49b8a0: 0x8c650004  lw          $a1, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49B89Cu, 0x49B8A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x49B8A4u;
label_49b8a4:
    // 0x49b8a4: 0x1000000a  b           . + 4 + (0xA << 2)
label_49b8a8:
    if (ctx->pc == 0x49B8A8u) {
        ctx->pc = 0x49B8ACu;
        goto label_49b8ac;
    }
    ctx->pc = 0x49B8A4u;
    {
        const bool branch_taken_0x49b8a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x49b8a4) {
            ctx->pc = 0x49B8D0u;
            goto label_49b8d0;
        }
    }
    ctx->pc = 0x49B8ACu;
label_49b8ac:
    // 0x49b8ac: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x49b8acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_49b8b0:
    // 0x49b8b0: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x49b8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_49b8b4:
    // 0x49b8b4: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x49b8b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_49b8b8:
    // 0x49b8b8: 0x8c47004c  lw          $a3, 0x4C($v0)
    ctx->pc = 0x49b8b8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_49b8bc:
    // 0x49b8bc: 0x8ce20014  lw          $v0, 0x14($a3)
    ctx->pc = 0x49b8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
label_49b8c0:
    // 0x49b8c0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x49b8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_49b8c4:
    // 0x49b8c4: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x49b8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_49b8c8:
    // 0x49b8c8: 0x40f809  jalr        $v0
label_49b8cc:
    if (ctx->pc == 0x49B8CCu) {
        ctx->pc = 0x49B8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B8C8u;
        // 0x49b8cc: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49B8D0u;
        goto label_49b8d0;
    }
    ctx->pc = 0x49B8C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x49B8D0u);
        ctx->pc = 0x49B8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B8C8u;
        // 0x49b8cc: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49B8C8u, 0x49B8D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x49B8D0u;
label_49b8d0:
    // 0x49b8d0: 0x52000007  beql        $s0, $zero, . + 4 + (0x7 << 2)
label_49b8d4:
    if (ctx->pc == 0x49B8D4u) {
        ctx->pc = 0x49B8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B8D0u;
        // 0x49b8d4: 0x97a20000  lhu         $v0, 0x0($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49B8D8u;
        goto label_49b8d8;
    }
    ctx->pc = 0x49B8D0u;
    {
        const bool branch_taken_0x49b8d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x49b8d0) {
            ctx->pc = 0x49B8D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49B8D0u;
            // 0x49b8d4: 0x97a20000  lhu         $v0, 0x0($sp) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x49B8F0u;
            goto label_49b8f0;
        }
    }
    ctx->pc = 0x49B8D8u;
label_49b8d8:
    // 0x49b8d8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_49b8dc:
    if (ctx->pc == 0x49B8DCu) {
        ctx->pc = 0x49B8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B8D8u;
        // 0x49b8dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49B8E0u;
        goto label_49b8e0;
    }
    ctx->pc = 0x49B8D8u;
    {
        const bool branch_taken_0x49b8d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49B8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B8D8u;
        // 0x49b8dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49b8d8) {
            ctx->pc = 0x49B8E8u;
            goto label_49b8e8;
        }
    }
    ctx->pc = 0x49B8E0u;
label_49b8e0:
    // 0x49b8e0: 0x10000002  b           . + 4 + (0x2 << 2)
label_49b8e4:
    if (ctx->pc == 0x49B8E4u) {
        ctx->pc = 0x49B8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B8E0u;
        // 0x49b8e4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49B8E8u;
        goto label_49b8e8;
    }
    ctx->pc = 0x49B8E0u;
    {
        const bool branch_taken_0x49b8e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49B8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B8E0u;
        // 0x49b8e4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49b8e0) {
            ctx->pc = 0x49B8ECu;
            goto label_49b8ec;
        }
    }
    ctx->pc = 0x49B8E8u;
label_49b8e8:
    // 0x49b8e8: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x49b8e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_49b8ec:
    // 0x49b8ec: 0x97a20000  lhu         $v0, 0x0($sp)
    ctx->pc = 0x49b8ecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
label_49b8f0:
    // 0x49b8f0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x49b8f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_49b8f4:
    // 0x49b8f4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x49b8f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_49b8f8:
    // 0x49b8f8: 0x3e00008  jr          $ra
label_49b8fc:
    if (ctx->pc == 0x49B8FCu) {
        ctx->pc = 0x49B8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B8F8u;
        // 0x49b8fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49B900u;
        goto label_49b900;
    }
    ctx->pc = 0x49B8F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49B8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B8F8u;
        // 0x49b8fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49B8F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49B900u;
label_49b900:
    // 0x49b900: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x49b900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_49b904:
    // 0x49b904: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x49b904u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_49b908:
    // 0x49b908: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x49b908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_49b90c:
    // 0x49b90c: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x49b90cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_49b910:
    // 0x49b910: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x49b910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_49b914:
    // 0x49b914: 0x14c20029  bne         $a2, $v0, . + 4 + (0x29 << 2)
label_49b918:
    if (ctx->pc == 0x49B918u) {
        ctx->pc = 0x49B918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B914u;
        // 0x49b918: 0x3a0402d  daddu       $t0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49B91Cu;
        goto label_49b91c;
    }
    ctx->pc = 0x49B914u;
    {
        const bool branch_taken_0x49b914 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x49B918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B914u;
        // 0x49b918: 0x3a0402d  daddu       $t0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49b914) {
            ctx->pc = 0x49B9BCu;
            goto label_49b9bc;
        }
    }
    ctx->pc = 0x49B91Cu;
label_49b91c:
    // 0x49b91c: 0x8c860020  lw          $a2, 0x20($a0)
    ctx->pc = 0x49b91cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_49b920:
    // 0x49b920: 0x10c00011  beqz        $a2, . + 4 + (0x11 << 2)
label_49b924:
    if (ctx->pc == 0x49B924u) {
        ctx->pc = 0x49B924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B920u;
        // 0x49b924: 0x8c82001c  lw          $v0, 0x1C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49B928u;
        goto label_49b928;
    }
    ctx->pc = 0x49B920u;
    {
        const bool branch_taken_0x49b920 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x49B924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B920u;
        // 0x49b924: 0x8c82001c  lw          $v0, 0x1C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49b920) {
            ctx->pc = 0x49B968u;
            goto label_49b968;
        }
    }
    ctx->pc = 0x49B928u;
label_49b928:
    // 0x49b928: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x49b928u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_49b92c:
    // 0x49b92c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_49b930:
    if (ctx->pc == 0x49B930u) {
        ctx->pc = 0x49B930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B92Cu;
        // 0x49b930: 0x3c030fff  lui         $v1, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49B934u;
        goto label_49b934;
    }
    ctx->pc = 0x49B92Cu;
    {
        const bool branch_taken_0x49b92c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49B930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B92Cu;
        // 0x49b930: 0x3c030fff  lui         $v1, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49b92c) {
            ctx->pc = 0x49B950u;
            goto label_49b950;
        }
    }
    ctx->pc = 0x49B934u;
label_49b934:
    // 0x49b934: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x49b934u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_49b938:
    // 0x49b938: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49b938u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_49b93c:
    // 0x49b93c: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x49b93cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_49b940:
    // 0x49b940: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x49b940u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_49b944:
    // 0x49b944: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x49b944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_49b948:
    // 0x49b948: 0x1000000b  b           . + 4 + (0xB << 2)
label_49b94c:
    if (ctx->pc == 0x49B94Cu) {
        ctx->pc = 0x49B94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B948u;
        // 0x49b94c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49B950u;
        goto label_49b950;
    }
    ctx->pc = 0x49B948u;
    {
        const bool branch_taken_0x49b948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49B94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B948u;
        // 0x49b94c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49b948) {
            ctx->pc = 0x49B978u;
            goto label_49b978;
        }
    }
    ctx->pc = 0x49B950u;
label_49b950:
    // 0x49b950: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x49b950u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_49b954:
    // 0x49b954: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49b954u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_49b958:
    // 0x49b958: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x49b958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_49b95c:
    // 0x49b95c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x49b95cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_49b960:
    // 0x49b960: 0x10000005  b           . + 4 + (0x5 << 2)
label_49b964:
    if (ctx->pc == 0x49B964u) {
        ctx->pc = 0x49B964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B960u;
        // 0x49b964: 0xc22021  addu        $a0, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49B968u;
        goto label_49b968;
    }
    ctx->pc = 0x49B960u;
    {
        const bool branch_taken_0x49b960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49B964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B960u;
        // 0x49b964: 0xc22021  addu        $a0, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49b960) {
            ctx->pc = 0x49B978u;
            goto label_49b978;
        }
    }
    ctx->pc = 0x49B968u;
label_49b968:
    // 0x49b968: 0x2483002c  addiu       $v1, $a0, 0x2C
    ctx->pc = 0x49b968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 44));
label_49b96c:
    // 0x49b96c: 0x24840028  addiu       $a0, $a0, 0x28
    ctx->pc = 0x49b96cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 40));
label_49b970:
    // 0x49b970: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x49b970u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_49b974:
    // 0x49b974: 0x62200b  movn        $a0, $v1, $v0
    ctx->pc = 0x49b974u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
label_49b978:
    // 0x49b978: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x49b978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_49b97c:
    // 0x49b97c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x49b97cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_49b980:
    // 0x49b980: 0xa21018  mult        $v0, $a1, $v0
    ctx->pc = 0x49b980u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_49b984:
    // 0x49b984: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x49b984u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_49b988:
    // 0x49b988: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x49b988u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_49b98c:
    // 0x49b98c: 0x10870014  beq         $a0, $a3, . + 4 + (0x14 << 2)
label_49b990:
    if (ctx->pc == 0x49B990u) {
        ctx->pc = 0x49B990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B98Cu;
        // 0x49b990: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49B994u;
        goto label_49b994;
    }
    ctx->pc = 0x49B98Cu;
    {
        const bool branch_taken_0x49b98c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 7));
        ctx->pc = 0x49B990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B98Cu;
        // 0x49b990: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49b98c) {
            ctx->pc = 0x49B9E0u;
            goto label_49b9e0;
        }
    }
    ctx->pc = 0x49B994u;
label_49b994:
    // 0x49b994: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x49b994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_49b998:
    // 0x49b998: 0x24e3ffec  addiu       $v1, $a3, -0x14
    ctx->pc = 0x49b998u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967276));
label_49b99c:
    // 0x49b99c: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x49b99cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_49b9a0:
    // 0x49b9a0: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x49b9a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_49b9a4:
    // 0x49b9a4: 0x8ce4ffec  lw          $a0, -0x14($a3)
    ctx->pc = 0x49b9a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294967276)));
label_49b9a8:
    // 0x49b9a8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x49b9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_49b9ac:
    // 0x49b9ac: 0x40f809  jalr        $v0
label_49b9b0:
    if (ctx->pc == 0x49B9B0u) {
        ctx->pc = 0x49B9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B9ACu;
        // 0x49b9b0: 0x8c650004  lw          $a1, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49B9B4u;
        goto label_49b9b4;
    }
    ctx->pc = 0x49B9ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x49B9B4u);
        ctx->pc = 0x49B9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B9ACu;
        // 0x49b9b0: 0x8c650004  lw          $a1, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49B9ACu, 0x49B9B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x49B9B4u;
label_49b9b4:
    // 0x49b9b4: 0x1000000a  b           . + 4 + (0xA << 2)
label_49b9b8:
    if (ctx->pc == 0x49B9B8u) {
        ctx->pc = 0x49B9BCu;
        goto label_49b9bc;
    }
    ctx->pc = 0x49B9B4u;
    {
        const bool branch_taken_0x49b9b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x49b9b4) {
            ctx->pc = 0x49B9E0u;
            goto label_49b9e0;
        }
    }
    ctx->pc = 0x49B9BCu;
label_49b9bc:
    // 0x49b9bc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x49b9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_49b9c0:
    // 0x49b9c0: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x49b9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_49b9c4:
    // 0x49b9c4: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x49b9c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_49b9c8:
    // 0x49b9c8: 0x8c47004c  lw          $a3, 0x4C($v0)
    ctx->pc = 0x49b9c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_49b9cc:
    // 0x49b9cc: 0x8ce20014  lw          $v0, 0x14($a3)
    ctx->pc = 0x49b9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
label_49b9d0:
    // 0x49b9d0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x49b9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_49b9d4:
    // 0x49b9d4: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x49b9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_49b9d8:
    // 0x49b9d8: 0x40f809  jalr        $v0
label_49b9dc:
    if (ctx->pc == 0x49B9DCu) {
        ctx->pc = 0x49B9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B9D8u;
        // 0x49b9dc: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49B9E0u;
        goto label_49b9e0;
    }
    ctx->pc = 0x49B9D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x49B9E0u);
        ctx->pc = 0x49B9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B9D8u;
        // 0x49b9dc: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49B9D8u, 0x49B9E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x49B9E0u;
label_49b9e0:
    // 0x49b9e0: 0x52000007  beql        $s0, $zero, . + 4 + (0x7 << 2)
label_49b9e4:
    if (ctx->pc == 0x49B9E4u) {
        ctx->pc = 0x49B9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B9E0u;
        // 0x49b9e4: 0x87a20000  lh          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49B9E8u;
        goto label_49b9e8;
    }
    ctx->pc = 0x49B9E0u;
    {
        const bool branch_taken_0x49b9e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x49b9e0) {
            ctx->pc = 0x49B9E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49B9E0u;
            // 0x49b9e4: 0x87a20000  lh          $v0, 0x0($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x49BA00u;
            goto label_49ba00;
        }
    }
    ctx->pc = 0x49B9E8u;
label_49b9e8:
    // 0x49b9e8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_49b9ec:
    if (ctx->pc == 0x49B9ECu) {
        ctx->pc = 0x49B9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B9E8u;
        // 0x49b9ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49B9F0u;
        goto label_49b9f0;
    }
    ctx->pc = 0x49B9E8u;
    {
        const bool branch_taken_0x49b9e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49B9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B9E8u;
        // 0x49b9ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49b9e8) {
            ctx->pc = 0x49B9F8u;
            goto label_49b9f8;
        }
    }
    ctx->pc = 0x49B9F0u;
label_49b9f0:
    // 0x49b9f0: 0x10000002  b           . + 4 + (0x2 << 2)
label_49b9f4:
    if (ctx->pc == 0x49B9F4u) {
        ctx->pc = 0x49B9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B9F0u;
        // 0x49b9f4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49B9F8u;
        goto label_49b9f8;
    }
    ctx->pc = 0x49B9F0u;
    {
        const bool branch_taken_0x49b9f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49B9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B9F0u;
        // 0x49b9f4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49b9f0) {
            ctx->pc = 0x49B9FCu;
            goto label_49b9fc;
        }
    }
    ctx->pc = 0x49B9F8u;
label_49b9f8:
    // 0x49b9f8: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x49b9f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_49b9fc:
    // 0x49b9fc: 0x87a20000  lh          $v0, 0x0($sp)
    ctx->pc = 0x49b9fcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
label_49ba00:
    // 0x49ba00: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x49ba00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_49ba04:
    // 0x49ba04: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x49ba04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_49ba08:
    // 0x49ba08: 0x3e00008  jr          $ra
label_49ba0c:
    if (ctx->pc == 0x49BA0Cu) {
        ctx->pc = 0x49BA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BA08u;
        // 0x49ba0c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49BA10u;
        goto label_49ba10;
    }
    ctx->pc = 0x49BA08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49BA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BA08u;
        // 0x49ba0c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49BA08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49BA10u;
label_49ba10:
    // 0x49ba10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x49ba10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_49ba14:
    // 0x49ba14: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x49ba14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_49ba18:
    // 0x49ba18: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x49ba18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_49ba1c:
    // 0x49ba1c: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x49ba1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_49ba20:
    // 0x49ba20: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x49ba20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_49ba24:
    // 0x49ba24: 0x14c20029  bne         $a2, $v0, . + 4 + (0x29 << 2)
label_49ba28:
    if (ctx->pc == 0x49BA28u) {
        ctx->pc = 0x49BA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BA24u;
        // 0x49ba28: 0x3a0402d  daddu       $t0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49BA2Cu;
        goto label_49ba2c;
    }
    ctx->pc = 0x49BA24u;
    {
        const bool branch_taken_0x49ba24 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x49BA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BA24u;
        // 0x49ba28: 0x3a0402d  daddu       $t0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49ba24) {
            ctx->pc = 0x49BACCu;
            goto label_49bacc;
        }
    }
    ctx->pc = 0x49BA2Cu;
label_49ba2c:
    // 0x49ba2c: 0x8c860020  lw          $a2, 0x20($a0)
    ctx->pc = 0x49ba2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_49ba30:
    // 0x49ba30: 0x10c00011  beqz        $a2, . + 4 + (0x11 << 2)
label_49ba34:
    if (ctx->pc == 0x49BA34u) {
        ctx->pc = 0x49BA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BA30u;
        // 0x49ba34: 0x8c82001c  lw          $v0, 0x1C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49BA38u;
        goto label_49ba38;
    }
    ctx->pc = 0x49BA30u;
    {
        const bool branch_taken_0x49ba30 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x49BA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BA30u;
        // 0x49ba34: 0x8c82001c  lw          $v0, 0x1C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49ba30) {
            ctx->pc = 0x49BA78u;
            goto label_49ba78;
        }
    }
    ctx->pc = 0x49BA38u;
label_49ba38:
    // 0x49ba38: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x49ba38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_49ba3c:
    // 0x49ba3c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_49ba40:
    if (ctx->pc == 0x49BA40u) {
        ctx->pc = 0x49BA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BA3Cu;
        // 0x49ba40: 0x3c030fff  lui         $v1, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49BA44u;
        goto label_49ba44;
    }
    ctx->pc = 0x49BA3Cu;
    {
        const bool branch_taken_0x49ba3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49BA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BA3Cu;
        // 0x49ba40: 0x3c030fff  lui         $v1, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49ba3c) {
            ctx->pc = 0x49BA60u;
            goto label_49ba60;
        }
    }
    ctx->pc = 0x49BA44u;
label_49ba44:
    // 0x49ba44: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x49ba44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_49ba48:
    // 0x49ba48: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49ba48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_49ba4c:
    // 0x49ba4c: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x49ba4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_49ba50:
    // 0x49ba50: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x49ba50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_49ba54:
    // 0x49ba54: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x49ba54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_49ba58:
    // 0x49ba58: 0x1000000b  b           . + 4 + (0xB << 2)
label_49ba5c:
    if (ctx->pc == 0x49BA5Cu) {
        ctx->pc = 0x49BA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BA58u;
        // 0x49ba5c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49BA60u;
        goto label_49ba60;
    }
    ctx->pc = 0x49BA58u;
    {
        const bool branch_taken_0x49ba58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49BA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BA58u;
        // 0x49ba5c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49ba58) {
            ctx->pc = 0x49BA88u;
            goto label_49ba88;
        }
    }
    ctx->pc = 0x49BA60u;
label_49ba60:
    // 0x49ba60: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x49ba60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_49ba64:
    // 0x49ba64: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49ba64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_49ba68:
    // 0x49ba68: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x49ba68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_49ba6c:
    // 0x49ba6c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x49ba6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_49ba70:
    // 0x49ba70: 0x10000005  b           . + 4 + (0x5 << 2)
label_49ba74:
    if (ctx->pc == 0x49BA74u) {
        ctx->pc = 0x49BA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BA70u;
        // 0x49ba74: 0xc22021  addu        $a0, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49BA78u;
        goto label_49ba78;
    }
    ctx->pc = 0x49BA70u;
    {
        const bool branch_taken_0x49ba70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49BA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BA70u;
        // 0x49ba74: 0xc22021  addu        $a0, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49ba70) {
            ctx->pc = 0x49BA88u;
            goto label_49ba88;
        }
    }
    ctx->pc = 0x49BA78u;
label_49ba78:
    // 0x49ba78: 0x2483002c  addiu       $v1, $a0, 0x2C
    ctx->pc = 0x49ba78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 44));
label_49ba7c:
    // 0x49ba7c: 0x24840028  addiu       $a0, $a0, 0x28
    ctx->pc = 0x49ba7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 40));
label_49ba80:
    // 0x49ba80: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x49ba80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_49ba84:
    // 0x49ba84: 0x62200b  movn        $a0, $v1, $v0
    ctx->pc = 0x49ba84u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
label_49ba88:
    // 0x49ba88: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x49ba88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_49ba8c:
    // 0x49ba8c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x49ba8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_49ba90:
    // 0x49ba90: 0xa21018  mult        $v0, $a1, $v0
    ctx->pc = 0x49ba90u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_49ba94:
    // 0x49ba94: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x49ba94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_49ba98:
    // 0x49ba98: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x49ba98u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_49ba9c:
    // 0x49ba9c: 0x10870014  beq         $a0, $a3, . + 4 + (0x14 << 2)
label_49baa0:
    if (ctx->pc == 0x49BAA0u) {
        ctx->pc = 0x49BAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BA9Cu;
        // 0x49baa0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49BAA4u;
        goto label_49baa4;
    }
    ctx->pc = 0x49BA9Cu;
    {
        const bool branch_taken_0x49ba9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 7));
        ctx->pc = 0x49BAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BA9Cu;
        // 0x49baa0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49ba9c) {
            ctx->pc = 0x49BAF0u;
            goto label_49baf0;
        }
    }
    ctx->pc = 0x49BAA4u;
label_49baa4:
    // 0x49baa4: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x49baa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_49baa8:
    // 0x49baa8: 0x24e3ffec  addiu       $v1, $a3, -0x14
    ctx->pc = 0x49baa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967276));
label_49baac:
    // 0x49baac: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x49baacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_49bab0:
    // 0x49bab0: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x49bab0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_49bab4:
    // 0x49bab4: 0x8ce4ffec  lw          $a0, -0x14($a3)
    ctx->pc = 0x49bab4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294967276)));
label_49bab8:
    // 0x49bab8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x49bab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_49babc:
    // 0x49babc: 0x40f809  jalr        $v0
label_49bac0:
    if (ctx->pc == 0x49BAC0u) {
        ctx->pc = 0x49BAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BABCu;
        // 0x49bac0: 0x8c650004  lw          $a1, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49BAC4u;
        goto label_49bac4;
    }
    ctx->pc = 0x49BABCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x49BAC4u);
        ctx->pc = 0x49BAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BABCu;
        // 0x49bac0: 0x8c650004  lw          $a1, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49BABCu, 0x49BAC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x49BAC4u;
label_49bac4:
    // 0x49bac4: 0x1000000a  b           . + 4 + (0xA << 2)
label_49bac8:
    if (ctx->pc == 0x49BAC8u) {
        ctx->pc = 0x49BACCu;
        goto label_49bacc;
    }
    ctx->pc = 0x49BAC4u;
    {
        const bool branch_taken_0x49bac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x49bac4) {
            ctx->pc = 0x49BAF0u;
            goto label_49baf0;
        }
    }
    ctx->pc = 0x49BACCu;
label_49bacc:
    // 0x49bacc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x49baccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_49bad0:
    // 0x49bad0: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x49bad0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_49bad4:
    // 0x49bad4: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x49bad4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_49bad8:
    // 0x49bad8: 0x8c47004c  lw          $a3, 0x4C($v0)
    ctx->pc = 0x49bad8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_49badc:
    // 0x49badc: 0x8ce20014  lw          $v0, 0x14($a3)
    ctx->pc = 0x49badcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
label_49bae0:
    // 0x49bae0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x49bae0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_49bae4:
    // 0x49bae4: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x49bae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_49bae8:
    // 0x49bae8: 0x40f809  jalr        $v0
label_49baec:
    if (ctx->pc == 0x49BAECu) {
        ctx->pc = 0x49BAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BAE8u;
        // 0x49baec: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49BAF0u;
        goto label_49baf0;
    }
    ctx->pc = 0x49BAE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x49BAF0u);
        ctx->pc = 0x49BAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BAE8u;
        // 0x49baec: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49BAE8u, 0x49BAF0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x49BAF0u;
label_49baf0:
    // 0x49baf0: 0x52000007  beql        $s0, $zero, . + 4 + (0x7 << 2)
label_49baf4:
    if (ctx->pc == 0x49BAF4u) {
        ctx->pc = 0x49BAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BAF0u;
        // 0x49baf4: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49BAF8u;
        goto label_49baf8;
    }
    ctx->pc = 0x49BAF0u;
    {
        const bool branch_taken_0x49baf0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x49baf0) {
            ctx->pc = 0x49BAF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49BAF0u;
            // 0x49baf4: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x49BB10u;
            goto label_49bb10;
        }
    }
    ctx->pc = 0x49BAF8u;
label_49baf8:
    // 0x49baf8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_49bafc:
    if (ctx->pc == 0x49BAFCu) {
        ctx->pc = 0x49BAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BAF8u;
        // 0x49bafc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49BB00u;
        goto label_49bb00;
    }
    ctx->pc = 0x49BAF8u;
    {
        const bool branch_taken_0x49baf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49BAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BAF8u;
        // 0x49bafc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49baf8) {
            ctx->pc = 0x49BB08u;
            goto label_49bb08;
        }
    }
    ctx->pc = 0x49BB00u;
label_49bb00:
    // 0x49bb00: 0x10000002  b           . + 4 + (0x2 << 2)
label_49bb04:
    if (ctx->pc == 0x49BB04u) {
        ctx->pc = 0x49BB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BB00u;
        // 0x49bb04: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49BB08u;
        goto label_49bb08;
    }
    ctx->pc = 0x49BB00u;
    {
        const bool branch_taken_0x49bb00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49BB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BB00u;
        // 0x49bb04: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49bb00) {
            ctx->pc = 0x49BB0Cu;
            goto label_49bb0c;
        }
    }
    ctx->pc = 0x49BB08u;
label_49bb08:
    // 0x49bb08: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x49bb08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_49bb0c:
    // 0x49bb0c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x49bb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_49bb10:
    // 0x49bb10: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x49bb10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_49bb14:
    // 0x49bb14: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x49bb14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_49bb18:
    // 0x49bb18: 0x3e00008  jr          $ra
label_49bb1c:
    if (ctx->pc == 0x49BB1Cu) {
        ctx->pc = 0x49BB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BB18u;
        // 0x49bb1c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49BB20u;
        goto label_49bb20;
    }
    ctx->pc = 0x49BB18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49BB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BB18u;
        // 0x49bb1c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49BB18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49BB20u;
label_49bb20:
    // 0x49bb20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x49bb20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_49bb24:
    // 0x49bb24: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x49bb24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_49bb28:
    // 0x49bb28: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x49bb28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_49bb2c:
    // 0x49bb2c: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x49bb2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_49bb30:
    // 0x49bb30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x49bb30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_49bb34:
    // 0x49bb34: 0x14c20029  bne         $a2, $v0, . + 4 + (0x29 << 2)
label_49bb38:
    if (ctx->pc == 0x49BB38u) {
        ctx->pc = 0x49BB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BB34u;
        // 0x49bb38: 0x3a0402d  daddu       $t0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49BB3Cu;
        goto label_49bb3c;
    }
    ctx->pc = 0x49BB34u;
    {
        const bool branch_taken_0x49bb34 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x49BB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BB34u;
        // 0x49bb38: 0x3a0402d  daddu       $t0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49bb34) {
            ctx->pc = 0x49BBDCu;
            goto label_49bbdc;
        }
    }
    ctx->pc = 0x49BB3Cu;
label_49bb3c:
    // 0x49bb3c: 0x8c860020  lw          $a2, 0x20($a0)
    ctx->pc = 0x49bb3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_49bb40:
    // 0x49bb40: 0x10c00011  beqz        $a2, . + 4 + (0x11 << 2)
label_49bb44:
    if (ctx->pc == 0x49BB44u) {
        ctx->pc = 0x49BB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BB40u;
        // 0x49bb44: 0x8c82001c  lw          $v0, 0x1C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49BB48u;
        goto label_49bb48;
    }
    ctx->pc = 0x49BB40u;
    {
        const bool branch_taken_0x49bb40 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x49BB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BB40u;
        // 0x49bb44: 0x8c82001c  lw          $v0, 0x1C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49bb40) {
            ctx->pc = 0x49BB88u;
            goto label_49bb88;
        }
    }
    ctx->pc = 0x49BB48u;
label_49bb48:
    // 0x49bb48: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x49bb48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_49bb4c:
    // 0x49bb4c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_49bb50:
    if (ctx->pc == 0x49BB50u) {
        ctx->pc = 0x49BB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BB4Cu;
        // 0x49bb50: 0x3c030fff  lui         $v1, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49BB54u;
        goto label_49bb54;
    }
    ctx->pc = 0x49BB4Cu;
    {
        const bool branch_taken_0x49bb4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49BB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BB4Cu;
        // 0x49bb50: 0x3c030fff  lui         $v1, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49bb4c) {
            ctx->pc = 0x49BB70u;
            goto label_49bb70;
        }
    }
    ctx->pc = 0x49BB54u;
label_49bb54:
    // 0x49bb54: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x49bb54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_49bb58:
    // 0x49bb58: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49bb58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_49bb5c:
    // 0x49bb5c: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x49bb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_49bb60:
    // 0x49bb60: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x49bb60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_49bb64:
    // 0x49bb64: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x49bb64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_49bb68:
    // 0x49bb68: 0x1000000b  b           . + 4 + (0xB << 2)
label_49bb6c:
    if (ctx->pc == 0x49BB6Cu) {
        ctx->pc = 0x49BB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BB68u;
        // 0x49bb6c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49BB70u;
        goto label_49bb70;
    }
    ctx->pc = 0x49BB68u;
    {
        const bool branch_taken_0x49bb68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49BB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BB68u;
        // 0x49bb6c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49bb68) {
            ctx->pc = 0x49BB98u;
            goto label_49bb98;
        }
    }
    ctx->pc = 0x49BB70u;
label_49bb70:
    // 0x49bb70: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x49bb70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_49bb74:
    // 0x49bb74: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49bb74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_49bb78:
    // 0x49bb78: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x49bb78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_49bb7c:
    // 0x49bb7c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x49bb7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_49bb80:
    // 0x49bb80: 0x10000005  b           . + 4 + (0x5 << 2)
label_49bb84:
    if (ctx->pc == 0x49BB84u) {
        ctx->pc = 0x49BB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BB80u;
        // 0x49bb84: 0xc22021  addu        $a0, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49BB88u;
        goto label_49bb88;
    }
    ctx->pc = 0x49BB80u;
    {
        const bool branch_taken_0x49bb80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49BB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BB80u;
        // 0x49bb84: 0xc22021  addu        $a0, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49bb80) {
            ctx->pc = 0x49BB98u;
            goto label_49bb98;
        }
    }
    ctx->pc = 0x49BB88u;
label_49bb88:
    // 0x49bb88: 0x2483002c  addiu       $v1, $a0, 0x2C
    ctx->pc = 0x49bb88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 44));
label_49bb8c:
    // 0x49bb8c: 0x24840028  addiu       $a0, $a0, 0x28
    ctx->pc = 0x49bb8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 40));
label_49bb90:
    // 0x49bb90: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x49bb90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_49bb94:
    // 0x49bb94: 0x62200b  movn        $a0, $v1, $v0
    ctx->pc = 0x49bb94u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
label_49bb98:
    // 0x49bb98: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x49bb98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_49bb9c:
    // 0x49bb9c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x49bb9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_49bba0:
    // 0x49bba0: 0xa21018  mult        $v0, $a1, $v0
    ctx->pc = 0x49bba0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_49bba4:
    // 0x49bba4: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x49bba4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_49bba8:
    // 0x49bba8: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x49bba8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_49bbac:
    // 0x49bbac: 0x10870014  beq         $a0, $a3, . + 4 + (0x14 << 2)
label_49bbb0:
    if (ctx->pc == 0x49BBB0u) {
        ctx->pc = 0x49BBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BBACu;
        // 0x49bbb0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49BBB4u;
        goto label_49bbb4;
    }
    ctx->pc = 0x49BBACu;
    {
        const bool branch_taken_0x49bbac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 7));
        ctx->pc = 0x49BBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BBACu;
        // 0x49bbb0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49bbac) {
            ctx->pc = 0x49BC00u;
            goto label_49bc00;
        }
    }
    ctx->pc = 0x49BBB4u;
label_49bbb4:
    // 0x49bbb4: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x49bbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_49bbb8:
    // 0x49bbb8: 0x24e3ffec  addiu       $v1, $a3, -0x14
    ctx->pc = 0x49bbb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967276));
label_49bbbc:
    // 0x49bbbc: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x49bbbcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_49bbc0:
    // 0x49bbc0: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x49bbc0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_49bbc4:
    // 0x49bbc4: 0x8ce4ffec  lw          $a0, -0x14($a3)
    ctx->pc = 0x49bbc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294967276)));
label_49bbc8:
    // 0x49bbc8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x49bbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_49bbcc:
    // 0x49bbcc: 0x40f809  jalr        $v0
label_49bbd0:
    if (ctx->pc == 0x49BBD0u) {
        ctx->pc = 0x49BBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BBCCu;
        // 0x49bbd0: 0x8c650004  lw          $a1, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49BBD4u;
        goto label_49bbd4;
    }
    ctx->pc = 0x49BBCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x49BBD4u);
        ctx->pc = 0x49BBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BBCCu;
        // 0x49bbd0: 0x8c650004  lw          $a1, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49BBCCu, 0x49BBD4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x49BBD4u;
label_49bbd4:
    // 0x49bbd4: 0x1000000a  b           . + 4 + (0xA << 2)
label_49bbd8:
    if (ctx->pc == 0x49BBD8u) {
        ctx->pc = 0x49BBDCu;
        goto label_49bbdc;
    }
    ctx->pc = 0x49BBD4u;
    {
        const bool branch_taken_0x49bbd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x49bbd4) {
            ctx->pc = 0x49BC00u;
            goto label_49bc00;
        }
    }
    ctx->pc = 0x49BBDCu;
label_49bbdc:
    // 0x49bbdc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x49bbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_49bbe0:
    // 0x49bbe0: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x49bbe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_49bbe4:
    // 0x49bbe4: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x49bbe4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_49bbe8:
    // 0x49bbe8: 0x8c47004c  lw          $a3, 0x4C($v0)
    ctx->pc = 0x49bbe8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_49bbec:
    // 0x49bbec: 0x8ce20014  lw          $v0, 0x14($a3)
    ctx->pc = 0x49bbecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
label_49bbf0:
    // 0x49bbf0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x49bbf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_49bbf4:
    // 0x49bbf4: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x49bbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_49bbf8:
    // 0x49bbf8: 0x40f809  jalr        $v0
label_49bbfc:
    if (ctx->pc == 0x49BBFCu) {
        ctx->pc = 0x49BBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BBF8u;
        // 0x49bbfc: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49BC00u;
        goto label_49bc00;
    }
    ctx->pc = 0x49BBF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x49BC00u);
        ctx->pc = 0x49BBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BBF8u;
        // 0x49bbfc: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49BBF8u, 0x49BC00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x49BC00u;
label_49bc00:
    // 0x49bc00: 0x52000007  beql        $s0, $zero, . + 4 + (0x7 << 2)
label_49bc04:
    if (ctx->pc == 0x49BC04u) {
        ctx->pc = 0x49BC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BC00u;
        // 0x49bc04: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49BC08u;
        goto label_49bc08;
    }
    ctx->pc = 0x49BC00u;
    {
        const bool branch_taken_0x49bc00 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x49bc00) {
            ctx->pc = 0x49BC04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49BC00u;
            // 0x49bc04: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x49BC20u;
            goto label_49bc20;
        }
    }
    ctx->pc = 0x49BC08u;
label_49bc08:
    // 0x49bc08: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_49bc0c:
    if (ctx->pc == 0x49BC0Cu) {
        ctx->pc = 0x49BC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BC08u;
        // 0x49bc0c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49BC10u;
        goto label_49bc10;
    }
    ctx->pc = 0x49BC08u;
    {
        const bool branch_taken_0x49bc08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49BC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BC08u;
        // 0x49bc0c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49bc08) {
            ctx->pc = 0x49BC18u;
            goto label_49bc18;
        }
    }
    ctx->pc = 0x49BC10u;
label_49bc10:
    // 0x49bc10: 0x10000002  b           . + 4 + (0x2 << 2)
label_49bc14:
    if (ctx->pc == 0x49BC14u) {
        ctx->pc = 0x49BC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BC10u;
        // 0x49bc14: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49BC18u;
        goto label_49bc18;
    }
    ctx->pc = 0x49BC10u;
    {
        const bool branch_taken_0x49bc10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49BC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BC10u;
        // 0x49bc14: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49bc10) {
            ctx->pc = 0x49BC1Cu;
            goto label_49bc1c;
        }
    }
    ctx->pc = 0x49BC18u;
label_49bc18:
    // 0x49bc18: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x49bc18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_49bc1c:
    // 0x49bc1c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x49bc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_49bc20:
    // 0x49bc20: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x49bc20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_49bc24:
    // 0x49bc24: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x49bc24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_49bc28:
    // 0x49bc28: 0x3e00008  jr          $ra
label_49bc2c:
    if (ctx->pc == 0x49BC2Cu) {
        ctx->pc = 0x49BC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BC28u;
        // 0x49bc2c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49BC30u;
        goto label_49bc30;
    }
    ctx->pc = 0x49BC28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49BC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BC28u;
        // 0x49bc2c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49BC28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49BC30u;
label_49bc30:
    // 0x49bc30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x49bc30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_49bc34:
    // 0x49bc34: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x49bc34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_49bc38:
    // 0x49bc38: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x49bc38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_49bc3c:
    // 0x49bc3c: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x49bc3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_49bc40:
    // 0x49bc40: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x49bc40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_49bc44:
    // 0x49bc44: 0x14c20029  bne         $a2, $v0, . + 4 + (0x29 << 2)
label_49bc48:
    if (ctx->pc == 0x49BC48u) {
        ctx->pc = 0x49BC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BC44u;
        // 0x49bc48: 0x3a0402d  daddu       $t0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49BC4Cu;
        goto label_49bc4c;
    }
    ctx->pc = 0x49BC44u;
    {
        const bool branch_taken_0x49bc44 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x49BC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BC44u;
        // 0x49bc48: 0x3a0402d  daddu       $t0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49bc44) {
            ctx->pc = 0x49BCECu;
            goto label_49bcec;
        }
    }
    ctx->pc = 0x49BC4Cu;
label_49bc4c:
    // 0x49bc4c: 0x8c860020  lw          $a2, 0x20($a0)
    ctx->pc = 0x49bc4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_49bc50:
    // 0x49bc50: 0x10c00011  beqz        $a2, . + 4 + (0x11 << 2)
label_49bc54:
    if (ctx->pc == 0x49BC54u) {
        ctx->pc = 0x49BC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BC50u;
        // 0x49bc54: 0x8c82001c  lw          $v0, 0x1C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49BC58u;
        goto label_49bc58;
    }
    ctx->pc = 0x49BC50u;
    {
        const bool branch_taken_0x49bc50 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x49BC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BC50u;
        // 0x49bc54: 0x8c82001c  lw          $v0, 0x1C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49bc50) {
            ctx->pc = 0x49BC98u;
            goto label_49bc98;
        }
    }
    ctx->pc = 0x49BC58u;
label_49bc58:
    // 0x49bc58: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x49bc58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_49bc5c:
    // 0x49bc5c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_49bc60:
    if (ctx->pc == 0x49BC60u) {
        ctx->pc = 0x49BC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BC5Cu;
        // 0x49bc60: 0x3c030fff  lui         $v1, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49BC64u;
        goto label_49bc64;
    }
    ctx->pc = 0x49BC5Cu;
    {
        const bool branch_taken_0x49bc5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49BC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BC5Cu;
        // 0x49bc60: 0x3c030fff  lui         $v1, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49bc5c) {
            ctx->pc = 0x49BC80u;
            goto label_49bc80;
        }
    }
    ctx->pc = 0x49BC64u;
label_49bc64:
    // 0x49bc64: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x49bc64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_49bc68:
    // 0x49bc68: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49bc68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_49bc6c:
    // 0x49bc6c: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x49bc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_49bc70:
    // 0x49bc70: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x49bc70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_49bc74:
    // 0x49bc74: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x49bc74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_49bc78:
    // 0x49bc78: 0x1000000b  b           . + 4 + (0xB << 2)
label_49bc7c:
    if (ctx->pc == 0x49BC7Cu) {
        ctx->pc = 0x49BC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BC78u;
        // 0x49bc7c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49BC80u;
        goto label_49bc80;
    }
    ctx->pc = 0x49BC78u;
    {
        const bool branch_taken_0x49bc78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49BC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BC78u;
        // 0x49bc7c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49bc78) {
            ctx->pc = 0x49BCA8u;
            goto label_49bca8;
        }
    }
    ctx->pc = 0x49BC80u;
label_49bc80:
    // 0x49bc80: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x49bc80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_49bc84:
    // 0x49bc84: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49bc84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_49bc88:
    // 0x49bc88: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x49bc88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_49bc8c:
    // 0x49bc8c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x49bc8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_49bc90:
    // 0x49bc90: 0x10000005  b           . + 4 + (0x5 << 2)
label_49bc94:
    if (ctx->pc == 0x49BC94u) {
        ctx->pc = 0x49BC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BC90u;
        // 0x49bc94: 0xc22021  addu        $a0, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49BC98u;
        goto label_49bc98;
    }
    ctx->pc = 0x49BC90u;
    {
        const bool branch_taken_0x49bc90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49BC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BC90u;
        // 0x49bc94: 0xc22021  addu        $a0, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49bc90) {
            ctx->pc = 0x49BCA8u;
            goto label_49bca8;
        }
    }
    ctx->pc = 0x49BC98u;
label_49bc98:
    // 0x49bc98: 0x2483002c  addiu       $v1, $a0, 0x2C
    ctx->pc = 0x49bc98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 44));
label_49bc9c:
    // 0x49bc9c: 0x24840028  addiu       $a0, $a0, 0x28
    ctx->pc = 0x49bc9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 40));
label_49bca0:
    // 0x49bca0: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x49bca0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_49bca4:
    // 0x49bca4: 0x62200b  movn        $a0, $v1, $v0
    ctx->pc = 0x49bca4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
label_49bca8:
    // 0x49bca8: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x49bca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_49bcac:
    // 0x49bcac: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x49bcacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_49bcb0:
    // 0x49bcb0: 0xa21018  mult        $v0, $a1, $v0
    ctx->pc = 0x49bcb0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_49bcb4:
    // 0x49bcb4: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x49bcb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_49bcb8:
    // 0x49bcb8: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x49bcb8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_49bcbc:
    // 0x49bcbc: 0x10870014  beq         $a0, $a3, . + 4 + (0x14 << 2)
label_49bcc0:
    if (ctx->pc == 0x49BCC0u) {
        ctx->pc = 0x49BCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BCBCu;
        // 0x49bcc0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49BCC4u;
        goto label_49bcc4;
    }
    ctx->pc = 0x49BCBCu;
    {
        const bool branch_taken_0x49bcbc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 7));
        ctx->pc = 0x49BCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BCBCu;
        // 0x49bcc0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49bcbc) {
            ctx->pc = 0x49BD10u;
            goto label_49bd10;
        }
    }
    ctx->pc = 0x49BCC4u;
label_49bcc4:
    // 0x49bcc4: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x49bcc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_49bcc8:
    // 0x49bcc8: 0x24e3ffec  addiu       $v1, $a3, -0x14
    ctx->pc = 0x49bcc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967276));
label_49bccc:
    // 0x49bccc: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x49bcccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_49bcd0:
    // 0x49bcd0: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x49bcd0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_49bcd4:
    // 0x49bcd4: 0x8ce4ffec  lw          $a0, -0x14($a3)
    ctx->pc = 0x49bcd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294967276)));
label_49bcd8:
    // 0x49bcd8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x49bcd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_49bcdc:
    // 0x49bcdc: 0x40f809  jalr        $v0
label_49bce0:
    if (ctx->pc == 0x49BCE0u) {
        ctx->pc = 0x49BCE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BCDCu;
        // 0x49bce0: 0x8c650004  lw          $a1, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49BCE4u;
        goto label_49bce4;
    }
    ctx->pc = 0x49BCDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x49BCE4u);
        ctx->pc = 0x49BCE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BCDCu;
        // 0x49bce0: 0x8c650004  lw          $a1, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49BCDCu, 0x49BCE4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x49BCE4u;
label_49bce4:
    // 0x49bce4: 0x1000000a  b           . + 4 + (0xA << 2)
label_49bce8:
    if (ctx->pc == 0x49BCE8u) {
        ctx->pc = 0x49BCECu;
        goto label_49bcec;
    }
    ctx->pc = 0x49BCE4u;
    {
        const bool branch_taken_0x49bce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x49bce4) {
            ctx->pc = 0x49BD10u;
            goto label_49bd10;
        }
    }
    ctx->pc = 0x49BCECu;
label_49bcec:
    // 0x49bcec: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x49bcecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_49bcf0:
    // 0x49bcf0: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x49bcf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_49bcf4:
    // 0x49bcf4: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x49bcf4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_49bcf8:
    // 0x49bcf8: 0x8c47004c  lw          $a3, 0x4C($v0)
    ctx->pc = 0x49bcf8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_49bcfc:
    // 0x49bcfc: 0x8ce20014  lw          $v0, 0x14($a3)
    ctx->pc = 0x49bcfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
label_49bd00:
    // 0x49bd00: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x49bd00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_49bd04:
    // 0x49bd04: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x49bd04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_49bd08:
    // 0x49bd08: 0x40f809  jalr        $v0
label_49bd0c:
    if (ctx->pc == 0x49BD0Cu) {
        ctx->pc = 0x49BD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BD08u;
        // 0x49bd0c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49BD10u;
        goto label_49bd10;
    }
    ctx->pc = 0x49BD08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x49BD10u);
        ctx->pc = 0x49BD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BD08u;
        // 0x49bd0c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49BD08u, 0x49BD10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x49BD10u;
label_49bd10:
    // 0x49bd10: 0x52000007  beql        $s0, $zero, . + 4 + (0x7 << 2)
label_49bd14:
    if (ctx->pc == 0x49BD14u) {
        ctx->pc = 0x49BD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BD10u;
        // 0x49bd14: 0xdfa20000  ld          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49BD18u;
        goto label_49bd18;
    }
    ctx->pc = 0x49BD10u;
    {
        const bool branch_taken_0x49bd10 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x49bd10) {
            ctx->pc = 0x49BD14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49BD10u;
            // 0x49bd14: 0xdfa20000  ld          $v0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x49BD30u;
            goto label_49bd30;
        }
    }
    ctx->pc = 0x49BD18u;
label_49bd18:
    // 0x49bd18: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_49bd1c:
    if (ctx->pc == 0x49BD1Cu) {
        ctx->pc = 0x49BD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BD18u;
        // 0x49bd1c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49BD20u;
        goto label_49bd20;
    }
    ctx->pc = 0x49BD18u;
    {
        const bool branch_taken_0x49bd18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49BD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BD18u;
        // 0x49bd1c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49bd18) {
            ctx->pc = 0x49BD28u;
            goto label_49bd28;
        }
    }
    ctx->pc = 0x49BD20u;
label_49bd20:
    // 0x49bd20: 0x10000002  b           . + 4 + (0x2 << 2)
label_49bd24:
    if (ctx->pc == 0x49BD24u) {
        ctx->pc = 0x49BD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BD20u;
        // 0x49bd24: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49BD28u;
        goto label_49bd28;
    }
    ctx->pc = 0x49BD20u;
    {
        const bool branch_taken_0x49bd20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49BD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BD20u;
        // 0x49bd24: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49bd20) {
            ctx->pc = 0x49BD2Cu;
            goto label_49bd2c;
        }
    }
    ctx->pc = 0x49BD28u;
label_49bd28:
    // 0x49bd28: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x49bd28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_49bd2c:
    // 0x49bd2c: 0xdfa20000  ld          $v0, 0x0($sp)
    ctx->pc = 0x49bd2cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_49bd30:
    // 0x49bd30: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x49bd30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_49bd34:
    // 0x49bd34: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x49bd34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_49bd38:
    // 0x49bd38: 0x3e00008  jr          $ra
label_49bd3c:
    if (ctx->pc == 0x49BD3Cu) {
        ctx->pc = 0x49BD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BD38u;
        // 0x49bd3c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49BD40u;
        goto label_49bd40;
    }
    ctx->pc = 0x49BD38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49BD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BD38u;
        // 0x49bd3c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49BD38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49BD40u;
label_49bd40:
    // 0x49bd40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x49bd40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_49bd44:
    // 0x49bd44: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x49bd44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_49bd48:
    // 0x49bd48: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x49bd48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_49bd4c:
    // 0x49bd4c: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x49bd4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_49bd50:
    // 0x49bd50: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x49bd50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_49bd54:
    // 0x49bd54: 0x14c20029  bne         $a2, $v0, . + 4 + (0x29 << 2)
label_49bd58:
    if (ctx->pc == 0x49BD58u) {
        ctx->pc = 0x49BD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BD54u;
        // 0x49bd58: 0x3a0402d  daddu       $t0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49BD5Cu;
        goto label_49bd5c;
    }
    ctx->pc = 0x49BD54u;
    {
        const bool branch_taken_0x49bd54 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x49BD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BD54u;
        // 0x49bd58: 0x3a0402d  daddu       $t0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49bd54) {
            ctx->pc = 0x49BDFCu;
            goto label_49bdfc;
        }
    }
    ctx->pc = 0x49BD5Cu;
label_49bd5c:
    // 0x49bd5c: 0x8c860020  lw          $a2, 0x20($a0)
    ctx->pc = 0x49bd5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_49bd60:
    // 0x49bd60: 0x10c00011  beqz        $a2, . + 4 + (0x11 << 2)
label_49bd64:
    if (ctx->pc == 0x49BD64u) {
        ctx->pc = 0x49BD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BD60u;
        // 0x49bd64: 0x8c82001c  lw          $v0, 0x1C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49BD68u;
        goto label_49bd68;
    }
    ctx->pc = 0x49BD60u;
    {
        const bool branch_taken_0x49bd60 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x49BD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BD60u;
        // 0x49bd64: 0x8c82001c  lw          $v0, 0x1C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49bd60) {
            ctx->pc = 0x49BDA8u;
            goto label_49bda8;
        }
    }
    ctx->pc = 0x49BD68u;
label_49bd68:
    // 0x49bd68: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x49bd68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_49bd6c:
    // 0x49bd6c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_49bd70:
    if (ctx->pc == 0x49BD70u) {
        ctx->pc = 0x49BD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BD6Cu;
        // 0x49bd70: 0x3c030fff  lui         $v1, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49BD74u;
        goto label_49bd74;
    }
    ctx->pc = 0x49BD6Cu;
    {
        const bool branch_taken_0x49bd6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49BD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BD6Cu;
        // 0x49bd70: 0x3c030fff  lui         $v1, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49bd6c) {
            ctx->pc = 0x49BD90u;
            goto label_49bd90;
        }
    }
    ctx->pc = 0x49BD74u;
label_49bd74:
    // 0x49bd74: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x49bd74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_49bd78:
    // 0x49bd78: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49bd78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_49bd7c:
    // 0x49bd7c: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x49bd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_49bd80:
    // 0x49bd80: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x49bd80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_49bd84:
    // 0x49bd84: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x49bd84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_49bd88:
    // 0x49bd88: 0x1000000b  b           . + 4 + (0xB << 2)
label_49bd8c:
    if (ctx->pc == 0x49BD8Cu) {
        ctx->pc = 0x49BD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BD88u;
        // 0x49bd8c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49BD90u;
        goto label_49bd90;
    }
    ctx->pc = 0x49BD88u;
    {
        const bool branch_taken_0x49bd88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49BD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BD88u;
        // 0x49bd8c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49bd88) {
            ctx->pc = 0x49BDB8u;
            goto label_49bdb8;
        }
    }
    ctx->pc = 0x49BD90u;
label_49bd90:
    // 0x49bd90: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x49bd90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_49bd94:
    // 0x49bd94: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49bd94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_49bd98:
    // 0x49bd98: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x49bd98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_49bd9c:
    // 0x49bd9c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x49bd9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_49bda0:
    // 0x49bda0: 0x10000005  b           . + 4 + (0x5 << 2)
label_49bda4:
    if (ctx->pc == 0x49BDA4u) {
        ctx->pc = 0x49BDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BDA0u;
        // 0x49bda4: 0xc22021  addu        $a0, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49BDA8u;
        goto label_49bda8;
    }
    ctx->pc = 0x49BDA0u;
    {
        const bool branch_taken_0x49bda0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49BDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BDA0u;
        // 0x49bda4: 0xc22021  addu        $a0, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49bda0) {
            ctx->pc = 0x49BDB8u;
            goto label_49bdb8;
        }
    }
    ctx->pc = 0x49BDA8u;
label_49bda8:
    // 0x49bda8: 0x2483002c  addiu       $v1, $a0, 0x2C
    ctx->pc = 0x49bda8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 44));
label_49bdac:
    // 0x49bdac: 0x24840028  addiu       $a0, $a0, 0x28
    ctx->pc = 0x49bdacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 40));
label_49bdb0:
    // 0x49bdb0: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x49bdb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_49bdb4:
    // 0x49bdb4: 0x62200b  movn        $a0, $v1, $v0
    ctx->pc = 0x49bdb4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
label_49bdb8:
    // 0x49bdb8: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x49bdb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_49bdbc:
    // 0x49bdbc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x49bdbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_49bdc0:
    // 0x49bdc0: 0xa21018  mult        $v0, $a1, $v0
    ctx->pc = 0x49bdc0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_49bdc4:
    // 0x49bdc4: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x49bdc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_49bdc8:
    // 0x49bdc8: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x49bdc8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_49bdcc:
    // 0x49bdcc: 0x10870014  beq         $a0, $a3, . + 4 + (0x14 << 2)
label_49bdd0:
    if (ctx->pc == 0x49BDD0u) {
        ctx->pc = 0x49BDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BDCCu;
        // 0x49bdd0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49BDD4u;
        goto label_49bdd4;
    }
    ctx->pc = 0x49BDCCu;
    {
        const bool branch_taken_0x49bdcc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 7));
        ctx->pc = 0x49BDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BDCCu;
        // 0x49bdd0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49bdcc) {
            ctx->pc = 0x49BE20u;
            goto label_49be20;
        }
    }
    ctx->pc = 0x49BDD4u;
label_49bdd4:
    // 0x49bdd4: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x49bdd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_49bdd8:
    // 0x49bdd8: 0x24e3ffec  addiu       $v1, $a3, -0x14
    ctx->pc = 0x49bdd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967276));
label_49bddc:
    // 0x49bddc: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x49bddcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_49bde0:
    // 0x49bde0: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x49bde0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_49bde4:
    // 0x49bde4: 0x8ce4ffec  lw          $a0, -0x14($a3)
    ctx->pc = 0x49bde4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294967276)));
label_49bde8:
    // 0x49bde8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x49bde8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_49bdec:
    // 0x49bdec: 0x40f809  jalr        $v0
label_49bdf0:
    if (ctx->pc == 0x49BDF0u) {
        ctx->pc = 0x49BDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BDECu;
        // 0x49bdf0: 0x8c650004  lw          $a1, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49BDF4u;
        goto label_49bdf4;
    }
    ctx->pc = 0x49BDECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x49BDF4u);
        ctx->pc = 0x49BDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BDECu;
        // 0x49bdf0: 0x8c650004  lw          $a1, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49BDECu, 0x49BDF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x49BDF4u;
label_49bdf4:
    // 0x49bdf4: 0x1000000a  b           . + 4 + (0xA << 2)
label_49bdf8:
    if (ctx->pc == 0x49BDF8u) {
        ctx->pc = 0x49BDFCu;
        goto label_49bdfc;
    }
    ctx->pc = 0x49BDF4u;
    {
        const bool branch_taken_0x49bdf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x49bdf4) {
            ctx->pc = 0x49BE20u;
            goto label_49be20;
        }
    }
    ctx->pc = 0x49BDFCu;
label_49bdfc:
    // 0x49bdfc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x49bdfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_49be00:
    // 0x49be00: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x49be00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_49be04:
    // 0x49be04: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x49be04u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_49be08:
    // 0x49be08: 0x8c47004c  lw          $a3, 0x4C($v0)
    ctx->pc = 0x49be08u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_49be0c:
    // 0x49be0c: 0x8ce20014  lw          $v0, 0x14($a3)
    ctx->pc = 0x49be0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
label_49be10:
    // 0x49be10: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x49be10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_49be14:
    // 0x49be14: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x49be14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_49be18:
    // 0x49be18: 0x40f809  jalr        $v0
label_49be1c:
    if (ctx->pc == 0x49BE1Cu) {
        ctx->pc = 0x49BE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BE18u;
        // 0x49be1c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49BE20u;
        goto label_49be20;
    }
    ctx->pc = 0x49BE18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x49BE20u);
        ctx->pc = 0x49BE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BE18u;
        // 0x49be1c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49BE18u, 0x49BE20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x49BE20u;
label_49be20:
    // 0x49be20: 0x52000007  beql        $s0, $zero, . + 4 + (0x7 << 2)
label_49be24:
    if (ctx->pc == 0x49BE24u) {
        ctx->pc = 0x49BE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BE20u;
        // 0x49be24: 0xdfa20000  ld          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49BE28u;
        goto label_49be28;
    }
    ctx->pc = 0x49BE20u;
    {
        const bool branch_taken_0x49be20 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x49be20) {
            ctx->pc = 0x49BE24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49BE20u;
            // 0x49be24: 0xdfa20000  ld          $v0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x49BE40u;
            goto label_49be40;
        }
    }
    ctx->pc = 0x49BE28u;
label_49be28:
    // 0x49be28: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_49be2c:
    if (ctx->pc == 0x49BE2Cu) {
        ctx->pc = 0x49BE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BE28u;
        // 0x49be2c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49BE30u;
        goto label_49be30;
    }
    ctx->pc = 0x49BE28u;
    {
        const bool branch_taken_0x49be28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49BE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BE28u;
        // 0x49be2c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49be28) {
            ctx->pc = 0x49BE38u;
            goto label_49be38;
        }
    }
    ctx->pc = 0x49BE30u;
label_49be30:
    // 0x49be30: 0x10000002  b           . + 4 + (0x2 << 2)
label_49be34:
    if (ctx->pc == 0x49BE34u) {
        ctx->pc = 0x49BE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BE30u;
        // 0x49be34: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49BE38u;
        goto label_49be38;
    }
    ctx->pc = 0x49BE30u;
    {
        const bool branch_taken_0x49be30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49BE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BE30u;
        // 0x49be34: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49be30) {
            ctx->pc = 0x49BE3Cu;
            goto label_49be3c;
        }
    }
    ctx->pc = 0x49BE38u;
label_49be38:
    // 0x49be38: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x49be38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_49be3c:
    // 0x49be3c: 0xdfa20000  ld          $v0, 0x0($sp)
    ctx->pc = 0x49be3cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_49be40:
    // 0x49be40: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x49be40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_49be44:
    // 0x49be44: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x49be44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_49be48:
    // 0x49be48: 0x3e00008  jr          $ra
label_49be4c:
    if (ctx->pc == 0x49BE4Cu) {
        ctx->pc = 0x49BE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BE48u;
        // 0x49be4c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49BE50u;
        goto label_49be50;
    }
    ctx->pc = 0x49BE48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49BE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BE48u;
        // 0x49be4c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49BE48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49BE50u;
label_49be50:
    // 0x49be50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x49be50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_49be54:
    // 0x49be54: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x49be54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_49be58:
    // 0x49be58: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x49be58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_49be5c:
    // 0x49be5c: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x49be5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_49be60:
    // 0x49be60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x49be60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_49be64:
    // 0x49be64: 0x14c20029  bne         $a2, $v0, . + 4 + (0x29 << 2)
label_49be68:
    if (ctx->pc == 0x49BE68u) {
        ctx->pc = 0x49BE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BE64u;
        // 0x49be68: 0x3a0402d  daddu       $t0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49BE6Cu;
        goto label_49be6c;
    }
    ctx->pc = 0x49BE64u;
    {
        const bool branch_taken_0x49be64 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x49BE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BE64u;
        // 0x49be68: 0x3a0402d  daddu       $t0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49be64) {
            ctx->pc = 0x49BF0Cu;
            goto label_49bf0c;
        }
    }
    ctx->pc = 0x49BE6Cu;
label_49be6c:
    // 0x49be6c: 0x8c860020  lw          $a2, 0x20($a0)
    ctx->pc = 0x49be6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_49be70:
    // 0x49be70: 0x10c00011  beqz        $a2, . + 4 + (0x11 << 2)
label_49be74:
    if (ctx->pc == 0x49BE74u) {
        ctx->pc = 0x49BE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BE70u;
        // 0x49be74: 0x8c82001c  lw          $v0, 0x1C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49BE78u;
        goto label_49be78;
    }
    ctx->pc = 0x49BE70u;
    {
        const bool branch_taken_0x49be70 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x49BE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BE70u;
        // 0x49be74: 0x8c82001c  lw          $v0, 0x1C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49be70) {
            ctx->pc = 0x49BEB8u;
            goto label_49beb8;
        }
    }
    ctx->pc = 0x49BE78u;
label_49be78:
    // 0x49be78: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x49be78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_49be7c:
    // 0x49be7c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_49be80:
    if (ctx->pc == 0x49BE80u) {
        ctx->pc = 0x49BE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BE7Cu;
        // 0x49be80: 0x3c030fff  lui         $v1, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49BE84u;
        goto label_49be84;
    }
    ctx->pc = 0x49BE7Cu;
    {
        const bool branch_taken_0x49be7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49BE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BE7Cu;
        // 0x49be80: 0x3c030fff  lui         $v1, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49be7c) {
            ctx->pc = 0x49BEA0u;
            goto label_49bea0;
        }
    }
    ctx->pc = 0x49BE84u;
label_49be84:
    // 0x49be84: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x49be84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_49be88:
    // 0x49be88: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49be88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_49be8c:
    // 0x49be8c: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x49be8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_49be90:
    // 0x49be90: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x49be90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_49be94:
    // 0x49be94: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x49be94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_49be98:
    // 0x49be98: 0x1000000b  b           . + 4 + (0xB << 2)
label_49be9c:
    if (ctx->pc == 0x49BE9Cu) {
        ctx->pc = 0x49BE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BE98u;
        // 0x49be9c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49BEA0u;
        goto label_49bea0;
    }
    ctx->pc = 0x49BE98u;
    {
        const bool branch_taken_0x49be98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49BE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BE98u;
        // 0x49be9c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49be98) {
            ctx->pc = 0x49BEC8u;
            goto label_49bec8;
        }
    }
    ctx->pc = 0x49BEA0u;
label_49bea0:
    // 0x49bea0: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x49bea0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_49bea4:
    // 0x49bea4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49bea4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_49bea8:
    // 0x49bea8: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x49bea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_49beac:
    // 0x49beac: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x49beacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_49beb0:
    // 0x49beb0: 0x10000005  b           . + 4 + (0x5 << 2)
label_49beb4:
    if (ctx->pc == 0x49BEB4u) {
        ctx->pc = 0x49BEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BEB0u;
        // 0x49beb4: 0xc22021  addu        $a0, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49BEB8u;
        goto label_49beb8;
    }
    ctx->pc = 0x49BEB0u;
    {
        const bool branch_taken_0x49beb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49BEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BEB0u;
        // 0x49beb4: 0xc22021  addu        $a0, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49beb0) {
            ctx->pc = 0x49BEC8u;
            goto label_49bec8;
        }
    }
    ctx->pc = 0x49BEB8u;
label_49beb8:
    // 0x49beb8: 0x2483002c  addiu       $v1, $a0, 0x2C
    ctx->pc = 0x49beb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 44));
label_49bebc:
    // 0x49bebc: 0x24840028  addiu       $a0, $a0, 0x28
    ctx->pc = 0x49bebcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 40));
label_49bec0:
    // 0x49bec0: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x49bec0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_49bec4:
    // 0x49bec4: 0x62200b  movn        $a0, $v1, $v0
    ctx->pc = 0x49bec4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
label_49bec8:
    // 0x49bec8: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x49bec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_49becc:
    // 0x49becc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x49beccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_49bed0:
    // 0x49bed0: 0xa21018  mult        $v0, $a1, $v0
    ctx->pc = 0x49bed0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_49bed4:
    // 0x49bed4: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x49bed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_49bed8:
    // 0x49bed8: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x49bed8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_49bedc:
    // 0x49bedc: 0x10870014  beq         $a0, $a3, . + 4 + (0x14 << 2)
label_49bee0:
    if (ctx->pc == 0x49BEE0u) {
        ctx->pc = 0x49BEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BEDCu;
        // 0x49bee0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49BEE4u;
        goto label_49bee4;
    }
    ctx->pc = 0x49BEDCu;
    {
        const bool branch_taken_0x49bedc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 7));
        ctx->pc = 0x49BEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BEDCu;
        // 0x49bee0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49bedc) {
            ctx->pc = 0x49BF30u;
            goto label_49bf30;
        }
    }
    ctx->pc = 0x49BEE4u;
label_49bee4:
    // 0x49bee4: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x49bee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_49bee8:
    // 0x49bee8: 0x24e3ffec  addiu       $v1, $a3, -0x14
    ctx->pc = 0x49bee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967276));
label_49beec:
    // 0x49beec: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x49beecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_49bef0:
    // 0x49bef0: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x49bef0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_49bef4:
    // 0x49bef4: 0x8ce4ffec  lw          $a0, -0x14($a3)
    ctx->pc = 0x49bef4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294967276)));
label_49bef8:
    // 0x49bef8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x49bef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_49befc:
    // 0x49befc: 0x40f809  jalr        $v0
label_49bf00:
    if (ctx->pc == 0x49BF00u) {
        ctx->pc = 0x49BF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BEFCu;
        // 0x49bf00: 0x8c650004  lw          $a1, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49BF04u;
        goto label_49bf04;
    }
    ctx->pc = 0x49BEFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x49BF04u);
        ctx->pc = 0x49BF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BEFCu;
        // 0x49bf00: 0x8c650004  lw          $a1, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49BEFCu, 0x49BF04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x49BF04u;
label_49bf04:
    // 0x49bf04: 0x1000000a  b           . + 4 + (0xA << 2)
label_49bf08:
    if (ctx->pc == 0x49BF08u) {
        ctx->pc = 0x49BF0Cu;
        goto label_49bf0c;
    }
    ctx->pc = 0x49BF04u;
    {
        const bool branch_taken_0x49bf04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x49bf04) {
            ctx->pc = 0x49BF30u;
            goto label_49bf30;
        }
    }
    ctx->pc = 0x49BF0Cu;
label_49bf0c:
    // 0x49bf0c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x49bf0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_49bf10:
    // 0x49bf10: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x49bf10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_49bf14:
    // 0x49bf14: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x49bf14u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_49bf18:
    // 0x49bf18: 0x8c47004c  lw          $a3, 0x4C($v0)
    ctx->pc = 0x49bf18u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_49bf1c:
    // 0x49bf1c: 0x8ce20014  lw          $v0, 0x14($a3)
    ctx->pc = 0x49bf1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
label_49bf20:
    // 0x49bf20: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x49bf20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_49bf24:
    // 0x49bf24: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x49bf24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_49bf28:
    // 0x49bf28: 0x40f809  jalr        $v0
label_49bf2c:
    if (ctx->pc == 0x49BF2Cu) {
        ctx->pc = 0x49BF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BF28u;
        // 0x49bf2c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49BF30u;
        goto label_49bf30;
    }
    ctx->pc = 0x49BF28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x49BF30u);
        ctx->pc = 0x49BF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BF28u;
        // 0x49bf2c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49BF28u, 0x49BF30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x49BF30u;
label_49bf30:
    // 0x49bf30: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
label_49bf34:
    if (ctx->pc == 0x49BF34u) {
        ctx->pc = 0x49BF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BF30u;
        // 0x49bf34: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x49BF38u;
        goto label_49bf38;
    }
    ctx->pc = 0x49BF30u;
    {
        const bool branch_taken_0x49bf30 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x49BF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BF30u;
        // 0x49bf34: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x49bf30) {
            ctx->pc = 0x49BF50u;
            goto label_49bf50;
        }
    }
    ctx->pc = 0x49BF38u;
label_49bf38:
    // 0x49bf38: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_49bf3c:
    if (ctx->pc == 0x49BF3Cu) {
        ctx->pc = 0x49BF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BF38u;
        // 0x49bf3c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49BF40u;
        goto label_49bf40;
    }
    ctx->pc = 0x49BF38u;
    {
        const bool branch_taken_0x49bf38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49BF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BF38u;
        // 0x49bf3c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49bf38) {
            ctx->pc = 0x49BF48u;
            goto label_49bf48;
        }
    }
    ctx->pc = 0x49BF40u;
label_49bf40:
    // 0x49bf40: 0x10000002  b           . + 4 + (0x2 << 2)
label_49bf44:
    if (ctx->pc == 0x49BF44u) {
        ctx->pc = 0x49BF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BF40u;
        // 0x49bf44: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49BF48u;
        goto label_49bf48;
    }
    ctx->pc = 0x49BF40u;
    {
        const bool branch_taken_0x49bf40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49BF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BF40u;
        // 0x49bf44: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49bf40) {
            ctx->pc = 0x49BF4Cu;
            goto label_49bf4c;
        }
    }
    ctx->pc = 0x49BF48u;
label_49bf48:
    // 0x49bf48: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x49bf48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_49bf4c:
    // 0x49bf4c: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x49bf4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_49bf50:
    // 0x49bf50: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x49bf50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_49bf54:
    // 0x49bf54: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x49bf54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_49bf58:
    // 0x49bf58: 0x3e00008  jr          $ra
label_49bf5c:
    if (ctx->pc == 0x49BF5Cu) {
        ctx->pc = 0x49BF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BF58u;
        // 0x49bf5c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49BF60u;
        goto label_49bf60;
    }
    ctx->pc = 0x49BF58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49BF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BF58u;
        // 0x49bf5c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49BF58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49BF60u;
label_49bf60:
    // 0x49bf60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x49bf60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_49bf64:
    // 0x49bf64: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x49bf64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_49bf68:
    // 0x49bf68: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x49bf68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_49bf6c:
    // 0x49bf6c: 0x2783c198  addiu       $v1, $gp, -0x3E68
    ctx->pc = 0x49bf6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294951320));
label_49bf70:
    // 0x49bf70: 0x245082e0  addiu       $s0, $v0, -0x7D20
    ctx->pc = 0x49bf70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935264));
label_49bf74:
    // 0x49bf74: 0x3c090004  lui         $t1, 0x4
    ctx->pc = 0x49bf74u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4 << 16));
label_49bf78:
    // 0x49bf78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x49bf78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_49bf7c:
    // 0x49bf7c: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x49bf7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_49bf80:
    // 0x49bf80: 0xaf83c19c  sw          $v1, -0x3E64($gp)
    ctx->pc = 0x49bf80u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294951324), GPR_U32(ctx, 3));
label_49bf84:
    // 0x49bf84: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x49bf84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_49bf88:
    // 0x49bf88: 0xaf83c198  sw          $v1, -0x3E68($gp)
    ctx->pc = 0x49bf88u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294951320), GPR_U32(ctx, 3));
label_49bf8c:
    // 0x49bf8c: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x49bf8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_49bf90:
    // 0x49bf90: 0xaf80c1a0  sw          $zero, -0x3E60($gp)
    ctx->pc = 0x49bf90u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294951328), GPR_U32(ctx, 0));
label_49bf94:
    // 0x49bf94: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x49bf94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_49bf98:
    // 0x49bf98: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x49bf98u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_49bf9c:
    // 0x49bf9c: 0xc12aa26  jal         func_4AA898
label_49bfa0:
    if (ctx->pc == 0x49BFA0u) {
        ctx->pc = 0x49BFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BF9Cu;
        // 0x49bfa0: 0x3529080b  ori         $t1, $t1, 0x80B (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)2059);
        ctx->in_delay_slot = false;
        ctx->pc = 0x49BFA4u;
        goto label_49bfa4;
    }
    ctx->pc = 0x49BF9Cu;
    SET_GPR_U32(ctx, 31, 0x49BFA4u);
    ctx->pc = 0x49BFA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49BF9Cu;
    // 0x49bfa0: 0x3529080b  ori         $t1, $t1, 0x80B (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)2059);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AA898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AA898u, 0x49BF9Cu, 0x49BFA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49BFA4u;
label_49bfa4:
    // 0x49bfa4: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_49bfa8:
    if (ctx->pc == 0x49BFA8u) {
        ctx->pc = 0x49BFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BFA4u;
        // 0x49bfa8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49BFACu;
        goto label_49bfac;
    }
    ctx->pc = 0x49BFA4u;
    {
        const bool branch_taken_0x49bfa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49BFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BFA4u;
        // 0x49bfa8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49bfa4) {
            ctx->pc = 0x49BFE8u;
            goto label_49bfe8;
        }
    }
    ctx->pc = 0x49BFACu;
label_49bfac:
    // 0x49bfac: 0x3c08004a  lui         $t0, 0x4A
    ctx->pc = 0x49bfacu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)74 << 16));
label_49bfb0:
    // 0x49bfb0: 0x8f84c190  lw          $a0, -0x3E70($gp)
    ctx->pc = 0x49bfb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951312)));
label_49bfb4:
    // 0x49bfb4: 0x2508c9c8  addiu       $t0, $t0, -0x3638
    ctx->pc = 0x49bfb4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294953416));
label_49bfb8:
    // 0x49bfb8: 0xaf82b7b8  sw          $v0, -0x4848($gp)
    ctx->pc = 0x49bfb8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948792), GPR_U32(ctx, 2));
label_49bfbc:
    // 0x49bfbc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x49bfbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_49bfc0:
    // 0x49bfc0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x49bfc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_49bfc4:
    // 0x49bfc4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x49bfc4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_49bfc8:
    // 0x49bfc8: 0xc126b7e  jal         func_49ADF8
label_49bfcc:
    if (ctx->pc == 0x49BFCCu) {
        ctx->pc = 0x49BFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BFC8u;
        // 0x49bfcc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49BFD0u;
        goto label_49bfd0;
    }
    ctx->pc = 0x49BFC8u;
    SET_GPR_U32(ctx, 31, 0x49BFD0u);
    ctx->pc = 0x49BFCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49BFC8u;
    // 0x49bfcc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49ADF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49ADF8u, 0x49BFC8u, 0x49BFD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49BFD0u;
label_49bfd0:
    // 0x49bfd0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_49bfd4:
    if (ctx->pc == 0x49BFD4u) {
        ctx->pc = 0x49BFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BFD0u;
        // 0x49bfd4: 0xaf82b7b4  sw          $v0, -0x484C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294948788), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49BFD8u;
        goto label_49bfd8;
    }
    ctx->pc = 0x49BFD0u;
    {
        const bool branch_taken_0x49bfd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49BFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BFD0u;
        // 0x49bfd4: 0xaf82b7b4  sw          $v0, -0x484C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294948788), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49bfd0) {
            ctx->pc = 0x49BFE0u;
            goto label_49bfe0;
        }
    }
    ctx->pc = 0x49BFD8u;
label_49bfd8:
    // 0x49bfd8: 0x10000005  b           . + 4 + (0x5 << 2)
label_49bfdc:
    if (ctx->pc == 0x49BFDCu) {
        ctx->pc = 0x49BFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BFD8u;
        // 0x49bfdc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49BFE0u;
        goto label_49bfe0;
    }
    ctx->pc = 0x49BFD8u;
    {
        const bool branch_taken_0x49bfd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49BFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BFD8u;
        // 0x49bfdc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49bfd8) {
            ctx->pc = 0x49BFF0u;
            goto label_49bff0;
        }
    }
    ctx->pc = 0x49BFE0u;
label_49bfe0:
    // 0x49bfe0: 0xc12aa86  jal         func_4AAA18
label_49bfe4:
    if (ctx->pc == 0x49BFE4u) {
        ctx->pc = 0x49BFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BFE0u;
        // 0x49bfe4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49BFE8u;
        goto label_49bfe8;
    }
    ctx->pc = 0x49BFE0u;
    SET_GPR_U32(ctx, 31, 0x49BFE8u);
    ctx->pc = 0x49BFE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49BFE0u;
    // 0x49bfe4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AAA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AAA18u, 0x49BFE0u, 0x49BFE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49BFE8u;
label_49bfe8:
    // 0x49bfe8: 0xaf80b7b8  sw          $zero, -0x4848($gp)
    ctx->pc = 0x49bfe8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948792), GPR_U32(ctx, 0));
label_49bfec:
    // 0x49bfec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x49bfecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_49bff0:
    // 0x49bff0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x49bff0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_49bff4:
    // 0x49bff4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x49bff4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_49bff8:
    // 0x49bff8: 0x3e00008  jr          $ra
label_49bffc:
    if (ctx->pc == 0x49BFFCu) {
        ctx->pc = 0x49BFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BFF8u;
        // 0x49bffc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49C000u;
        goto label_49c000;
    }
    ctx->pc = 0x49BFF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49BFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BFF8u;
        // 0x49bffc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49BFF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49C000u;
label_49c000:
    // 0x49c000: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x49c000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_49c004:
    // 0x49c004: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x49c004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_49c008:
    // 0x49c008: 0x8f84b7b4  lw          $a0, -0x484C($gp)
    ctx->pc = 0x49c008u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948788)));
label_49c00c:
    // 0x49c00c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x49c00cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_49c010:
    // 0x49c010: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x49c010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_49c014:
    // 0x49c014: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x49c014u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_49c018:
    // 0x49c018: 0xc12702a  jal         func_49C0A8
label_49c01c:
    if (ctx->pc == 0x49C01Cu) {
        ctx->pc = 0x49C01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C018u;
        // 0x49c01c: 0xaf82c1a0  sw          $v0, -0x3E60($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294951328), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49C020u;
        goto label_49c020;
    }
    ctx->pc = 0x49C018u;
    SET_GPR_U32(ctx, 31, 0x49C020u);
    ctx->pc = 0x49C01Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49C018u;
    // 0x49c01c: 0xaf82c1a0  sw          $v0, -0x3E60($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294951328), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49C0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49C0A8u, 0x49C018u, 0x49C020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49C020u;
label_49c020:
    // 0x49c020: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x49c020u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
label_49c024:
    // 0x49c024: 0xaf80b7b4  sw          $zero, -0x484C($gp)
    ctx->pc = 0x49c024u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948788), GPR_U32(ctx, 0));
label_49c028:
    // 0x49c028: 0xc12aa86  jal         func_4AAA18
label_49c02c:
    if (ctx->pc == 0x49C02Cu) {
        ctx->pc = 0x49C02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C028u;
        // 0x49c02c: 0x248482e0  addiu       $a0, $a0, -0x7D20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935264));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49C030u;
        goto label_49c030;
    }
    ctx->pc = 0x49C028u;
    SET_GPR_U32(ctx, 31, 0x49C030u);
    ctx->pc = 0x49C02Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49C028u;
    // 0x49c02c: 0x248482e0  addiu       $a0, $a0, -0x7D20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AAA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AAA18u, 0x49C028u, 0x49C030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49C030u;
label_49c030:
    // 0x49c030: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x49c030u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_49c034:
    // 0x49c034: 0xaf80b7b8  sw          $zero, -0x4848($gp)
    ctx->pc = 0x49c034u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948792), GPR_U32(ctx, 0));
label_49c038:
    // 0x49c038: 0x3e00008  jr          $ra
label_49c03c:
    if (ctx->pc == 0x49C03Cu) {
        ctx->pc = 0x49C03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C038u;
        // 0x49c03c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49C040u;
        goto label_fallthrough_0x49c038;
    }
    ctx->pc = 0x49C038u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49C03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C038u;
        // 0x49c03c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49C038u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x49c038:
    ctx->pc = 0x49C040u;
}
