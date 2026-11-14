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

// Function: sub_0031A4E0
// Address: 0x31a4e0 - 0x31ab30
void sub_0031A4E0_0x31a4e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031A4E0_0x31a4e0");
#endif

    switch (ctx->pc) {
        case 0x31a4e0u: goto label_31a4e0;
        case 0x31a4e4u: goto label_31a4e4;
        case 0x31a4e8u: goto label_31a4e8;
        case 0x31a4ecu: goto label_31a4ec;
        case 0x31a4f0u: goto label_31a4f0;
        case 0x31a4f4u: goto label_31a4f4;
        case 0x31a4f8u: goto label_31a4f8;
        case 0x31a4fcu: goto label_31a4fc;
        case 0x31a500u: goto label_31a500;
        case 0x31a504u: goto label_31a504;
        case 0x31a508u: goto label_31a508;
        case 0x31a50cu: goto label_31a50c;
        case 0x31a510u: goto label_31a510;
        case 0x31a514u: goto label_31a514;
        case 0x31a518u: goto label_31a518;
        case 0x31a51cu: goto label_31a51c;
        case 0x31a520u: goto label_31a520;
        case 0x31a524u: goto label_31a524;
        case 0x31a528u: goto label_31a528;
        case 0x31a52cu: goto label_31a52c;
        case 0x31a530u: goto label_31a530;
        case 0x31a534u: goto label_31a534;
        case 0x31a538u: goto label_31a538;
        case 0x31a53cu: goto label_31a53c;
        case 0x31a540u: goto label_31a540;
        case 0x31a544u: goto label_31a544;
        case 0x31a548u: goto label_31a548;
        case 0x31a54cu: goto label_31a54c;
        case 0x31a550u: goto label_31a550;
        case 0x31a554u: goto label_31a554;
        case 0x31a558u: goto label_31a558;
        case 0x31a55cu: goto label_31a55c;
        case 0x31a560u: goto label_31a560;
        case 0x31a564u: goto label_31a564;
        case 0x31a568u: goto label_31a568;
        case 0x31a56cu: goto label_31a56c;
        case 0x31a570u: goto label_31a570;
        case 0x31a574u: goto label_31a574;
        case 0x31a578u: goto label_31a578;
        case 0x31a57cu: goto label_31a57c;
        case 0x31a580u: goto label_31a580;
        case 0x31a584u: goto label_31a584;
        case 0x31a588u: goto label_31a588;
        case 0x31a58cu: goto label_31a58c;
        case 0x31a590u: goto label_31a590;
        case 0x31a594u: goto label_31a594;
        case 0x31a598u: goto label_31a598;
        case 0x31a59cu: goto label_31a59c;
        case 0x31a5a0u: goto label_31a5a0;
        case 0x31a5a4u: goto label_31a5a4;
        case 0x31a5a8u: goto label_31a5a8;
        case 0x31a5acu: goto label_31a5ac;
        case 0x31a5b0u: goto label_31a5b0;
        case 0x31a5b4u: goto label_31a5b4;
        case 0x31a5b8u: goto label_31a5b8;
        case 0x31a5bcu: goto label_31a5bc;
        case 0x31a5c0u: goto label_31a5c0;
        case 0x31a5c4u: goto label_31a5c4;
        case 0x31a5c8u: goto label_31a5c8;
        case 0x31a5ccu: goto label_31a5cc;
        case 0x31a5d0u: goto label_31a5d0;
        case 0x31a5d4u: goto label_31a5d4;
        case 0x31a5d8u: goto label_31a5d8;
        case 0x31a5dcu: goto label_31a5dc;
        case 0x31a5e0u: goto label_31a5e0;
        case 0x31a5e4u: goto label_31a5e4;
        case 0x31a5e8u: goto label_31a5e8;
        case 0x31a5ecu: goto label_31a5ec;
        case 0x31a5f0u: goto label_31a5f0;
        case 0x31a5f4u: goto label_31a5f4;
        case 0x31a5f8u: goto label_31a5f8;
        case 0x31a5fcu: goto label_31a5fc;
        case 0x31a600u: goto label_31a600;
        case 0x31a604u: goto label_31a604;
        case 0x31a608u: goto label_31a608;
        case 0x31a60cu: goto label_31a60c;
        case 0x31a610u: goto label_31a610;
        case 0x31a614u: goto label_31a614;
        case 0x31a618u: goto label_31a618;
        case 0x31a61cu: goto label_31a61c;
        case 0x31a620u: goto label_31a620;
        case 0x31a624u: goto label_31a624;
        case 0x31a628u: goto label_31a628;
        case 0x31a62cu: goto label_31a62c;
        case 0x31a630u: goto label_31a630;
        case 0x31a634u: goto label_31a634;
        case 0x31a638u: goto label_31a638;
        case 0x31a63cu: goto label_31a63c;
        case 0x31a640u: goto label_31a640;
        case 0x31a644u: goto label_31a644;
        case 0x31a648u: goto label_31a648;
        case 0x31a64cu: goto label_31a64c;
        case 0x31a650u: goto label_31a650;
        case 0x31a654u: goto label_31a654;
        case 0x31a658u: goto label_31a658;
        case 0x31a65cu: goto label_31a65c;
        case 0x31a660u: goto label_31a660;
        case 0x31a664u: goto label_31a664;
        case 0x31a668u: goto label_31a668;
        case 0x31a66cu: goto label_31a66c;
        case 0x31a670u: goto label_31a670;
        case 0x31a674u: goto label_31a674;
        case 0x31a678u: goto label_31a678;
        case 0x31a67cu: goto label_31a67c;
        case 0x31a680u: goto label_31a680;
        case 0x31a684u: goto label_31a684;
        case 0x31a688u: goto label_31a688;
        case 0x31a68cu: goto label_31a68c;
        case 0x31a690u: goto label_31a690;
        case 0x31a694u: goto label_31a694;
        case 0x31a698u: goto label_31a698;
        case 0x31a69cu: goto label_31a69c;
        case 0x31a6a0u: goto label_31a6a0;
        case 0x31a6a4u: goto label_31a6a4;
        case 0x31a6a8u: goto label_31a6a8;
        case 0x31a6acu: goto label_31a6ac;
        case 0x31a6b0u: goto label_31a6b0;
        case 0x31a6b4u: goto label_31a6b4;
        case 0x31a6b8u: goto label_31a6b8;
        case 0x31a6bcu: goto label_31a6bc;
        case 0x31a6c0u: goto label_31a6c0;
        case 0x31a6c4u: goto label_31a6c4;
        case 0x31a6c8u: goto label_31a6c8;
        case 0x31a6ccu: goto label_31a6cc;
        case 0x31a6d0u: goto label_31a6d0;
        case 0x31a6d4u: goto label_31a6d4;
        case 0x31a6d8u: goto label_31a6d8;
        case 0x31a6dcu: goto label_31a6dc;
        case 0x31a6e0u: goto label_31a6e0;
        case 0x31a6e4u: goto label_31a6e4;
        case 0x31a6e8u: goto label_31a6e8;
        case 0x31a6ecu: goto label_31a6ec;
        case 0x31a6f0u: goto label_31a6f0;
        case 0x31a6f4u: goto label_31a6f4;
        case 0x31a6f8u: goto label_31a6f8;
        case 0x31a6fcu: goto label_31a6fc;
        case 0x31a700u: goto label_31a700;
        case 0x31a704u: goto label_31a704;
        case 0x31a708u: goto label_31a708;
        case 0x31a70cu: goto label_31a70c;
        case 0x31a710u: goto label_31a710;
        case 0x31a714u: goto label_31a714;
        case 0x31a718u: goto label_31a718;
        case 0x31a71cu: goto label_31a71c;
        case 0x31a720u: goto label_31a720;
        case 0x31a724u: goto label_31a724;
        case 0x31a728u: goto label_31a728;
        case 0x31a72cu: goto label_31a72c;
        case 0x31a730u: goto label_31a730;
        case 0x31a734u: goto label_31a734;
        case 0x31a738u: goto label_31a738;
        case 0x31a73cu: goto label_31a73c;
        case 0x31a740u: goto label_31a740;
        case 0x31a744u: goto label_31a744;
        case 0x31a748u: goto label_31a748;
        case 0x31a74cu: goto label_31a74c;
        case 0x31a750u: goto label_31a750;
        case 0x31a754u: goto label_31a754;
        case 0x31a758u: goto label_31a758;
        case 0x31a75cu: goto label_31a75c;
        case 0x31a760u: goto label_31a760;
        case 0x31a764u: goto label_31a764;
        case 0x31a768u: goto label_31a768;
        case 0x31a76cu: goto label_31a76c;
        case 0x31a770u: goto label_31a770;
        case 0x31a774u: goto label_31a774;
        case 0x31a778u: goto label_31a778;
        case 0x31a77cu: goto label_31a77c;
        case 0x31a780u: goto label_31a780;
        case 0x31a784u: goto label_31a784;
        case 0x31a788u: goto label_31a788;
        case 0x31a78cu: goto label_31a78c;
        case 0x31a790u: goto label_31a790;
        case 0x31a794u: goto label_31a794;
        case 0x31a798u: goto label_31a798;
        case 0x31a79cu: goto label_31a79c;
        case 0x31a7a0u: goto label_31a7a0;
        case 0x31a7a4u: goto label_31a7a4;
        case 0x31a7a8u: goto label_31a7a8;
        case 0x31a7acu: goto label_31a7ac;
        case 0x31a7b0u: goto label_31a7b0;
        case 0x31a7b4u: goto label_31a7b4;
        case 0x31a7b8u: goto label_31a7b8;
        case 0x31a7bcu: goto label_31a7bc;
        case 0x31a7c0u: goto label_31a7c0;
        case 0x31a7c4u: goto label_31a7c4;
        case 0x31a7c8u: goto label_31a7c8;
        case 0x31a7ccu: goto label_31a7cc;
        case 0x31a7d0u: goto label_31a7d0;
        case 0x31a7d4u: goto label_31a7d4;
        case 0x31a7d8u: goto label_31a7d8;
        case 0x31a7dcu: goto label_31a7dc;
        case 0x31a7e0u: goto label_31a7e0;
        case 0x31a7e4u: goto label_31a7e4;
        case 0x31a7e8u: goto label_31a7e8;
        case 0x31a7ecu: goto label_31a7ec;
        case 0x31a7f0u: goto label_31a7f0;
        case 0x31a7f4u: goto label_31a7f4;
        case 0x31a7f8u: goto label_31a7f8;
        case 0x31a7fcu: goto label_31a7fc;
        case 0x31a800u: goto label_31a800;
        case 0x31a804u: goto label_31a804;
        case 0x31a808u: goto label_31a808;
        case 0x31a80cu: goto label_31a80c;
        case 0x31a810u: goto label_31a810;
        case 0x31a814u: goto label_31a814;
        case 0x31a818u: goto label_31a818;
        case 0x31a81cu: goto label_31a81c;
        case 0x31a820u: goto label_31a820;
        case 0x31a824u: goto label_31a824;
        case 0x31a828u: goto label_31a828;
        case 0x31a82cu: goto label_31a82c;
        case 0x31a830u: goto label_31a830;
        case 0x31a834u: goto label_31a834;
        case 0x31a838u: goto label_31a838;
        case 0x31a83cu: goto label_31a83c;
        case 0x31a840u: goto label_31a840;
        case 0x31a844u: goto label_31a844;
        case 0x31a848u: goto label_31a848;
        case 0x31a84cu: goto label_31a84c;
        case 0x31a850u: goto label_31a850;
        case 0x31a854u: goto label_31a854;
        case 0x31a858u: goto label_31a858;
        case 0x31a85cu: goto label_31a85c;
        case 0x31a860u: goto label_31a860;
        case 0x31a864u: goto label_31a864;
        case 0x31a868u: goto label_31a868;
        case 0x31a86cu: goto label_31a86c;
        case 0x31a870u: goto label_31a870;
        case 0x31a874u: goto label_31a874;
        case 0x31a878u: goto label_31a878;
        case 0x31a87cu: goto label_31a87c;
        case 0x31a880u: goto label_31a880;
        case 0x31a884u: goto label_31a884;
        case 0x31a888u: goto label_31a888;
        case 0x31a88cu: goto label_31a88c;
        case 0x31a890u: goto label_31a890;
        case 0x31a894u: goto label_31a894;
        case 0x31a898u: goto label_31a898;
        case 0x31a89cu: goto label_31a89c;
        case 0x31a8a0u: goto label_31a8a0;
        case 0x31a8a4u: goto label_31a8a4;
        case 0x31a8a8u: goto label_31a8a8;
        case 0x31a8acu: goto label_31a8ac;
        case 0x31a8b0u: goto label_31a8b0;
        case 0x31a8b4u: goto label_31a8b4;
        case 0x31a8b8u: goto label_31a8b8;
        case 0x31a8bcu: goto label_31a8bc;
        case 0x31a8c0u: goto label_31a8c0;
        case 0x31a8c4u: goto label_31a8c4;
        case 0x31a8c8u: goto label_31a8c8;
        case 0x31a8ccu: goto label_31a8cc;
        case 0x31a8d0u: goto label_31a8d0;
        case 0x31a8d4u: goto label_31a8d4;
        case 0x31a8d8u: goto label_31a8d8;
        case 0x31a8dcu: goto label_31a8dc;
        case 0x31a8e0u: goto label_31a8e0;
        case 0x31a8e4u: goto label_31a8e4;
        case 0x31a8e8u: goto label_31a8e8;
        case 0x31a8ecu: goto label_31a8ec;
        case 0x31a8f0u: goto label_31a8f0;
        case 0x31a8f4u: goto label_31a8f4;
        case 0x31a8f8u: goto label_31a8f8;
        case 0x31a8fcu: goto label_31a8fc;
        case 0x31a900u: goto label_31a900;
        case 0x31a904u: goto label_31a904;
        case 0x31a908u: goto label_31a908;
        case 0x31a90cu: goto label_31a90c;
        case 0x31a910u: goto label_31a910;
        case 0x31a914u: goto label_31a914;
        case 0x31a918u: goto label_31a918;
        case 0x31a91cu: goto label_31a91c;
        case 0x31a920u: goto label_31a920;
        case 0x31a924u: goto label_31a924;
        case 0x31a928u: goto label_31a928;
        case 0x31a92cu: goto label_31a92c;
        case 0x31a930u: goto label_31a930;
        case 0x31a934u: goto label_31a934;
        case 0x31a938u: goto label_31a938;
        case 0x31a93cu: goto label_31a93c;
        case 0x31a940u: goto label_31a940;
        case 0x31a944u: goto label_31a944;
        case 0x31a948u: goto label_31a948;
        case 0x31a94cu: goto label_31a94c;
        case 0x31a950u: goto label_31a950;
        case 0x31a954u: goto label_31a954;
        case 0x31a958u: goto label_31a958;
        case 0x31a95cu: goto label_31a95c;
        case 0x31a960u: goto label_31a960;
        case 0x31a964u: goto label_31a964;
        case 0x31a968u: goto label_31a968;
        case 0x31a96cu: goto label_31a96c;
        case 0x31a970u: goto label_31a970;
        case 0x31a974u: goto label_31a974;
        case 0x31a978u: goto label_31a978;
        case 0x31a97cu: goto label_31a97c;
        case 0x31a980u: goto label_31a980;
        case 0x31a984u: goto label_31a984;
        case 0x31a988u: goto label_31a988;
        case 0x31a98cu: goto label_31a98c;
        case 0x31a990u: goto label_31a990;
        case 0x31a994u: goto label_31a994;
        case 0x31a998u: goto label_31a998;
        case 0x31a99cu: goto label_31a99c;
        case 0x31a9a0u: goto label_31a9a0;
        case 0x31a9a4u: goto label_31a9a4;
        case 0x31a9a8u: goto label_31a9a8;
        case 0x31a9acu: goto label_31a9ac;
        case 0x31a9b0u: goto label_31a9b0;
        case 0x31a9b4u: goto label_31a9b4;
        case 0x31a9b8u: goto label_31a9b8;
        case 0x31a9bcu: goto label_31a9bc;
        case 0x31a9c0u: goto label_31a9c0;
        case 0x31a9c4u: goto label_31a9c4;
        case 0x31a9c8u: goto label_31a9c8;
        case 0x31a9ccu: goto label_31a9cc;
        case 0x31a9d0u: goto label_31a9d0;
        case 0x31a9d4u: goto label_31a9d4;
        case 0x31a9d8u: goto label_31a9d8;
        case 0x31a9dcu: goto label_31a9dc;
        case 0x31a9e0u: goto label_31a9e0;
        case 0x31a9e4u: goto label_31a9e4;
        case 0x31a9e8u: goto label_31a9e8;
        case 0x31a9ecu: goto label_31a9ec;
        case 0x31a9f0u: goto label_31a9f0;
        case 0x31a9f4u: goto label_31a9f4;
        case 0x31a9f8u: goto label_31a9f8;
        case 0x31a9fcu: goto label_31a9fc;
        case 0x31aa00u: goto label_31aa00;
        case 0x31aa04u: goto label_31aa04;
        case 0x31aa08u: goto label_31aa08;
        case 0x31aa0cu: goto label_31aa0c;
        case 0x31aa10u: goto label_31aa10;
        case 0x31aa14u: goto label_31aa14;
        case 0x31aa18u: goto label_31aa18;
        case 0x31aa1cu: goto label_31aa1c;
        case 0x31aa20u: goto label_31aa20;
        case 0x31aa24u: goto label_31aa24;
        case 0x31aa28u: goto label_31aa28;
        case 0x31aa2cu: goto label_31aa2c;
        case 0x31aa30u: goto label_31aa30;
        case 0x31aa34u: goto label_31aa34;
        case 0x31aa38u: goto label_31aa38;
        case 0x31aa3cu: goto label_31aa3c;
        case 0x31aa40u: goto label_31aa40;
        case 0x31aa44u: goto label_31aa44;
        case 0x31aa48u: goto label_31aa48;
        case 0x31aa4cu: goto label_31aa4c;
        case 0x31aa50u: goto label_31aa50;
        case 0x31aa54u: goto label_31aa54;
        case 0x31aa58u: goto label_31aa58;
        case 0x31aa5cu: goto label_31aa5c;
        case 0x31aa60u: goto label_31aa60;
        case 0x31aa64u: goto label_31aa64;
        case 0x31aa68u: goto label_31aa68;
        case 0x31aa6cu: goto label_31aa6c;
        case 0x31aa70u: goto label_31aa70;
        case 0x31aa74u: goto label_31aa74;
        case 0x31aa78u: goto label_31aa78;
        case 0x31aa7cu: goto label_31aa7c;
        case 0x31aa80u: goto label_31aa80;
        case 0x31aa84u: goto label_31aa84;
        case 0x31aa88u: goto label_31aa88;
        case 0x31aa8cu: goto label_31aa8c;
        case 0x31aa90u: goto label_31aa90;
        case 0x31aa94u: goto label_31aa94;
        case 0x31aa98u: goto label_31aa98;
        case 0x31aa9cu: goto label_31aa9c;
        case 0x31aaa0u: goto label_31aaa0;
        case 0x31aaa4u: goto label_31aaa4;
        case 0x31aaa8u: goto label_31aaa8;
        case 0x31aaacu: goto label_31aaac;
        case 0x31aab0u: goto label_31aab0;
        case 0x31aab4u: goto label_31aab4;
        case 0x31aab8u: goto label_31aab8;
        case 0x31aabcu: goto label_31aabc;
        case 0x31aac0u: goto label_31aac0;
        case 0x31aac4u: goto label_31aac4;
        case 0x31aac8u: goto label_31aac8;
        case 0x31aaccu: goto label_31aacc;
        case 0x31aad0u: goto label_31aad0;
        case 0x31aad4u: goto label_31aad4;
        case 0x31aad8u: goto label_31aad8;
        case 0x31aadcu: goto label_31aadc;
        case 0x31aae0u: goto label_31aae0;
        case 0x31aae4u: goto label_31aae4;
        case 0x31aae8u: goto label_31aae8;
        case 0x31aaecu: goto label_31aaec;
        case 0x31aaf0u: goto label_31aaf0;
        case 0x31aaf4u: goto label_31aaf4;
        case 0x31aaf8u: goto label_31aaf8;
        case 0x31aafcu: goto label_31aafc;
        case 0x31ab00u: goto label_31ab00;
        case 0x31ab04u: goto label_31ab04;
        case 0x31ab08u: goto label_31ab08;
        case 0x31ab0cu: goto label_31ab0c;
        case 0x31ab10u: goto label_31ab10;
        case 0x31ab14u: goto label_31ab14;
        case 0x31ab18u: goto label_31ab18;
        case 0x31ab1cu: goto label_31ab1c;
        case 0x31ab20u: goto label_31ab20;
        case 0x31ab24u: goto label_31ab24;
        case 0x31ab28u: goto label_31ab28;
        case 0x31ab2cu: goto label_31ab2c;
        default: break;
    }

    ctx->pc = 0x31a4e0u;

label_31a4e0:
    // 0x31a4e0: 0x27bdfe50  addiu       $sp, $sp, -0x1B0
    ctx->pc = 0x31a4e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966864));
label_31a4e4:
    // 0x31a4e4: 0x7fb40140  sq          $s4, 0x140($sp)
    ctx->pc = 0x31a4e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 20));
label_31a4e8:
    // 0x31a4e8: 0x7fb70110  sq          $s7, 0x110($sp)
    ctx->pc = 0x31a4e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 23));
label_31a4ec:
    // 0x31a4ec: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x31a4ecu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_31a4f0:
    // 0x31a4f0: 0x7fbe0100  sq          $fp, 0x100($sp)
    ctx->pc = 0x31a4f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 30));
label_31a4f4:
    // 0x31a4f4: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x31a4f4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_31a4f8:
    // 0x31a4f8: 0x7fb00180  sq          $s0, 0x180($sp)
    ctx->pc = 0x31a4f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 16));
label_31a4fc:
    // 0x31a4fc: 0x120f02d  daddu       $fp, $t1, $zero
    ctx->pc = 0x31a4fcu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_31a500:
    // 0x31a500: 0x7fb10170  sq          $s1, 0x170($sp)
    ctx->pc = 0x31a500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 17));
label_31a504:
    // 0x31a504: 0x7fb20160  sq          $s2, 0x160($sp)
    ctx->pc = 0x31a504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 18));
label_31a508:
    // 0x31a508: 0x7fb30150  sq          $s3, 0x150($sp)
    ctx->pc = 0x31a508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 19));
label_31a50c:
    // 0x31a50c: 0x7fb50130  sq          $s5, 0x130($sp)
    ctx->pc = 0x31a50cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 21));
label_31a510:
    // 0x31a510: 0x7fb60120  sq          $s6, 0x120($sp)
    ctx->pc = 0x31a510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 22));
label_31a514:
    // 0x31a514: 0xffbf00f0  sd          $ra, 0xF0($sp)
    ctx->pc = 0x31a514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 31));
label_31a518:
    // 0x31a518: 0xe7b701a8  swc1        $f23, 0x1A8($sp)
    ctx->pc = 0x31a518u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 424), bits); }
label_31a51c:
    // 0x31a51c: 0xe7b601a0  swc1        $f22, 0x1A0($sp)
    ctx->pc = 0x31a51cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
label_31a520:
    // 0x31a520: 0xe7b50198  swc1        $f21, 0x198($sp)
    ctx->pc = 0x31a520u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 408), bits); }
label_31a524:
    // 0x31a524: 0xe7b40190  swc1        $f20, 0x190($sp)
    ctx->pc = 0x31a524u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
label_31a528:
    // 0x31a528: 0xafa700e0  sw          $a3, 0xE0($sp)
    ctx->pc = 0x31a528u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 7));
label_31a52c:
    // 0x31a52c: 0xafa800e4  sw          $t0, 0xE4($sp)
    ctx->pc = 0x31a52cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 8));
label_31a530:
    // 0x31a530: 0xc681000c  lwc1        $f1, 0xC($s4)
    ctx->pc = 0x31a530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_31a534:
    // 0x31a534: 0xc6830000  lwc1        $f3, 0x0($s4)
    ctx->pc = 0x31a534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_31a538:
    // 0x31a538: 0xc6820010  lwc1        $f2, 0x10($s4)
    ctx->pc = 0x31a538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_31a53c:
    // 0x31a53c: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x31a53cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
label_31a540:
    // 0x31a540: 0xc6840004  lwc1        $f4, 0x4($s4)
    ctx->pc = 0x31a540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_31a544:
    // 0x31a544: 0xc6800014  lwc1        $f0, 0x14($s4)
    ctx->pc = 0x31a544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31a548:
    // 0x31a548: 0xc6830008  lwc1        $f3, 0x8($s4)
    ctx->pc = 0x31a548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_31a54c:
    // 0x31a54c: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x31a54cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
label_31a550:
    // 0x31a550: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x31a550u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_31a554:
    // 0x31a554: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x31a554u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
label_31a558:
    // 0x31a558: 0xe7a20034  swc1        $f2, 0x34($sp)
    ctx->pc = 0x31a558u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_31a55c:
    // 0x31a55c: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x31a55cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_31a560:
    // 0x31a560: 0x84a30004  lh          $v1, 0x4($a1)
    ctx->pc = 0x31a560u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
label_31a564:
    // 0x31a564: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x31a564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_31a568:
    // 0x31a568: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x31a568u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_31a56c:
    // 0x31a56c: 0x8ee6005c  lw          $a2, 0x5C($s7)
    ctx->pc = 0x31a56cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 92)));
label_31a570:
    // 0x31a570: 0x84a40006  lh          $a0, 0x6($a1)
    ctx->pc = 0x31a570u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 6)));
label_31a574:
    // 0x31a574: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x31a574u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_31a578:
    // 0x31a578: 0xc4a10010  lwc1        $f1, 0x10($a1)
    ctx->pc = 0x31a578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_31a57c:
    // 0x31a57c: 0x27b2000c  addiu       $s2, $sp, 0xC
    ctx->pc = 0x31a57cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
label_31a580:
    // 0x31a580: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x31a580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31a584:
    // 0x31a584: 0x823818  mult        $a3, $a0, $v0
    ctx->pc = 0x31a584u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
label_31a588:
    // 0x31a588: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x31a588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_31a58c:
    // 0x31a58c: 0x27b10018  addiu       $s1, $sp, 0x18
    ctx->pc = 0x31a58cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
label_31a590:
    // 0x31a590: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x31a590u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_31a594:
    // 0x31a594: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x31a594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_31a598:
    // 0x31a598: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x31a598u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
label_31a59c:
    // 0x31a59c: 0xe62021  addu        $a0, $a3, $a2
    ctx->pc = 0x31a59cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_31a5a0:
    // 0x31a5a0: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x31a5a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_31a5a4:
    // 0x31a5a4: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x31a5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_31a5a8:
    // 0x31a5a8: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x31a5a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_31a5ac:
    // 0x31a5ac: 0x8ee3002c  lw          $v1, 0x2C($s7)
    ctx->pc = 0x31a5acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 44)));
label_31a5b0:
    // 0x31a5b0: 0x8ee20010  lw          $v0, 0x10($s7)
    ctx->pc = 0x31a5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 16)));
label_31a5b4:
    // 0x31a5b4: 0x1840014e  blez        $v0, . + 4 + (0x14E << 2)
label_31a5b8:
    if (ctx->pc == 0x31A5B8u) {
        ctx->pc = 0x31A5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A5B4u;
        // 0x31a5b8: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31A5BCu;
        goto label_31a5bc;
    }
    ctx->pc = 0x31A5B4u;
    {
        const bool branch_taken_0x31a5b4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x31A5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A5B4u;
        // 0x31a5b8: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a5b4) {
            ctx->pc = 0x31AAF0u;
            goto label_31aaf0;
        }
    }
    ctx->pc = 0x31A5BCu;
label_31a5bc:
    // 0x31a5bc: 0xc797812c  lwc1        $f23, -0x7ED4($gp)
    ctx->pc = 0x31a5bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934828)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_31a5c0:
    // 0x31a5c0: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x31a5c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_31a5c4:
    // 0x31a5c4: 0xc7968130  lwc1        $f22, -0x7ED0($gp)
    ctx->pc = 0x31a5c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934832)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_31a5c8:
    // 0x31a5c8: 0x2415000c  addiu       $s5, $zero, 0xC
    ctx->pc = 0x31a5c8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_31a5cc:
    // 0x31a5cc: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x31a5ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_31a5d0:
    // 0x31a5d0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x31a5d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_31a5d4:
    // 0x31a5d4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x31a5d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_31a5d8:
    // 0x31a5d8: 0x8fa40024  lw          $a0, 0x24($sp)
    ctx->pc = 0x31a5d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_31a5dc:
    // 0x31a5dc: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x31a5dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_31a5e0:
    // 0x31a5e0: 0x1485000b  bne         $a0, $a1, . + 4 + (0xB << 2)
label_31a5e4:
    if (ctx->pc == 0x31A5E4u) {
        ctx->pc = 0x31A5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A5E0u;
        // 0x31a5e4: 0x96620000  lhu         $v0, 0x0($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31A5E8u;
        goto label_31a5e8;
    }
    ctx->pc = 0x31A5E0u;
    {
        const bool branch_taken_0x31a5e0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x31A5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A5E0u;
        // 0x31a5e4: 0x96620000  lhu         $v0, 0x0($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a5e0) {
            ctx->pc = 0x31A610u;
            goto label_31a610;
        }
    }
    ctx->pc = 0x31A5E8u;
label_31a5e8:
    // 0x31a5e8: 0x96630002  lhu         $v1, 0x2($s3)
    ctx->pc = 0x31a5e8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
label_31a5ec:
    // 0x31a5ec: 0x553018  mult        $a2, $v0, $s5
    ctx->pc = 0x31a5ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_31a5f0:
    // 0x31a5f0: 0x96640004  lhu         $a0, 0x4($s3)
    ctx->pc = 0x31a5f0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4)));
label_31a5f4:
    // 0x31a5f4: 0x751018  mult        $v0, $v1, $s5
    ctx->pc = 0x31a5f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_31a5f8:
    // 0x31a5f8: 0xc58021  addu        $s0, $a2, $a1
    ctx->pc = 0x31a5f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_31a5fc:
    // 0x31a5fc: 0x459021  addu        $s2, $v0, $a1
    ctx->pc = 0x31a5fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_31a600:
    // 0x31a600: 0x951018  mult        $v0, $a0, $s5
    ctx->pc = 0x31a600u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_31a604:
    // 0x31a604: 0x1000005c  b           . + 4 + (0x5C << 2)
label_31a608:
    if (ctx->pc == 0x31A608u) {
        ctx->pc = 0x31A608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A604u;
        // 0x31a608: 0x458821  addu        $s1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31A60Cu;
        goto label_31a60c;
    }
    ctx->pc = 0x31A604u;
    {
        const bool branch_taken_0x31a604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31A608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A604u;
        // 0x31a608: 0x458821  addu        $s1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a604) {
            ctx->pc = 0x31A778u;
            goto label_31a778;
        }
    }
    ctx->pc = 0x31A60Cu;
label_31a60c:
    // 0x31a60c: 0x0  nop
    ctx->pc = 0x31a60cu;
    // NOP
label_31a610:
    // 0x31a610: 0x551018  mult        $v0, $v0, $s5
    ctx->pc = 0x31a610u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_31a614:
    // 0x31a614: 0xa21821  addu        $v1, $a1, $v0
    ctx->pc = 0x31a614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_31a618:
    // 0x31a618: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x31a618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_31a61c:
    // 0x31a61c: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x31a61cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_31a620:
    // 0x31a620: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x31a620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31a624:
    // 0x31a624: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x31a624u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_31a628:
    // 0x31a628: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x31a628u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_31a62c:
    // 0x31a62c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x31a62cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31a630:
    // 0x31a630: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x31a630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_31a634:
    // 0x31a634: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x31a634u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_31a638:
    // 0x31a638: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x31a638u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_31a63c:
    // 0x31a63c: 0xc4630008  lwc1        $f3, 0x8($v1)
    ctx->pc = 0x31a63cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_31a640:
    // 0x31a640: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x31a640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31a644:
    // 0x31a644: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x31a644u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
label_31a648:
    // 0x31a648: 0xc7a4002c  lwc1        $f4, 0x2C($sp)
    ctx->pc = 0x31a648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_31a64c:
    // 0x31a64c: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x31a64cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
label_31a650:
    // 0x31a650: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x31a650u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
label_31a654:
    // 0x31a654: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x31a654u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
label_31a658:
    // 0x31a658: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x31a658u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_31a65c:
    // 0x31a65c: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x31a65cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_31a660:
    // 0x31a660: 0xe7a30008  swc1        $f3, 0x8($sp)
    ctx->pc = 0x31a660u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_31a664:
    // 0x31a664: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x31a664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31a668:
    // 0x31a668: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x31a668u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_31a66c:
    // 0x31a66c: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x31a66cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_31a670:
    // 0x31a670: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x31a670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31a674:
    // 0x31a674: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x31a674u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_31a678:
    // 0x31a678: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x31a678u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_31a67c:
    // 0x31a67c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x31a67cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31a680:
    // 0x31a680: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x31a680u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_31a684:
    // 0x31a684: 0xe7a30008  swc1        $f3, 0x8($sp)
    ctx->pc = 0x31a684u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_31a688:
    // 0x31a688: 0x96620002  lhu         $v0, 0x2($s3)
    ctx->pc = 0x31a688u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
label_31a68c:
    // 0x31a68c: 0x551018  mult        $v0, $v0, $s5
    ctx->pc = 0x31a68cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_31a690:
    // 0x31a690: 0xa21821  addu        $v1, $a1, $v0
    ctx->pc = 0x31a690u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_31a694:
    // 0x31a694: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x31a694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_31a698:
    // 0x31a698: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x31a698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_31a69c:
    // 0x31a69c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x31a69cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31a6a0:
    // 0x31a6a0: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x31a6a0u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
label_31a6a4:
    // 0x31a6a4: 0xe7a3000c  swc1        $f3, 0xC($sp)
    ctx->pc = 0x31a6a4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_31a6a8:
    // 0x31a6a8: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x31a6a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31a6ac:
    // 0x31a6ac: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x31a6acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_31a6b0:
    // 0x31a6b0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x31a6b0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_31a6b4:
    // 0x31a6b4: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x31a6b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_31a6b8:
    // 0x31a6b8: 0xc4620008  lwc1        $f2, 0x8($v1)
    ctx->pc = 0x31a6b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_31a6bc:
    // 0x31a6bc: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x31a6bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31a6c0:
    // 0x31a6c0: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x31a6c0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_31a6c4:
    // 0x31a6c4: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x31a6c4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
label_31a6c8:
    // 0x31a6c8: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x31a6c8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
label_31a6cc:
    // 0x31a6cc: 0xe7a3000c  swc1        $f3, 0xC($sp)
    ctx->pc = 0x31a6ccu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_31a6d0:
    // 0x31a6d0: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x31a6d0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
label_31a6d4:
    // 0x31a6d4: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x31a6d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_31a6d8:
    // 0x31a6d8: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x31a6d8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_31a6dc:
    // 0x31a6dc: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x31a6dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31a6e0:
    // 0x31a6e0: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x31a6e0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_31a6e4:
    // 0x31a6e4: 0xe7a3000c  swc1        $f3, 0xC($sp)
    ctx->pc = 0x31a6e4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_31a6e8:
    // 0x31a6e8: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x31a6e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31a6ec:
    // 0x31a6ec: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x31a6ecu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_31a6f0:
    // 0x31a6f0: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x31a6f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_31a6f4:
    // 0x31a6f4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x31a6f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31a6f8:
    // 0x31a6f8: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x31a6f8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_31a6fc:
    // 0x31a6fc: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x31a6fcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_31a700:
    // 0x31a700: 0x96620004  lhu         $v0, 0x4($s3)
    ctx->pc = 0x31a700u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4)));
label_31a704:
    // 0x31a704: 0x551018  mult        $v0, $v0, $s5
    ctx->pc = 0x31a704u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_31a708:
    // 0x31a708: 0xa21821  addu        $v1, $a1, $v0
    ctx->pc = 0x31a708u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_31a70c:
    // 0x31a70c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x31a70cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_31a710:
    // 0x31a710: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x31a710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_31a714:
    // 0x31a714: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x31a714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31a718:
    // 0x31a718: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x31a718u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
label_31a71c:
    // 0x31a71c: 0xe7a30018  swc1        $f3, 0x18($sp)
    ctx->pc = 0x31a71cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_31a720:
    // 0x31a720: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x31a720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31a724:
    // 0x31a724: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x31a724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_31a728:
    // 0x31a728: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x31a728u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_31a72c:
    // 0x31a72c: 0xe7a1001c  swc1        $f1, 0x1C($sp)
    ctx->pc = 0x31a72cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_31a730:
    // 0x31a730: 0xc4620008  lwc1        $f2, 0x8($v1)
    ctx->pc = 0x31a730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_31a734:
    // 0x31a734: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x31a734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31a738:
    // 0x31a738: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x31a738u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_31a73c:
    // 0x31a73c: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x31a73cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
label_31a740:
    // 0x31a740: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x31a740u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
label_31a744:
    // 0x31a744: 0xe7a30018  swc1        $f3, 0x18($sp)
    ctx->pc = 0x31a744u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_31a748:
    // 0x31a748: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x31a748u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
label_31a74c:
    // 0x31a74c: 0xe7a20020  swc1        $f2, 0x20($sp)
    ctx->pc = 0x31a74cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_31a750:
    // 0x31a750: 0xe7a1001c  swc1        $f1, 0x1C($sp)
    ctx->pc = 0x31a750u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_31a754:
    // 0x31a754: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x31a754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31a758:
    // 0x31a758: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x31a758u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_31a75c:
    // 0x31a75c: 0xe7a30018  swc1        $f3, 0x18($sp)
    ctx->pc = 0x31a75cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_31a760:
    // 0x31a760: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x31a760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31a764:
    // 0x31a764: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x31a764u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_31a768:
    // 0x31a768: 0xe7a1001c  swc1        $f1, 0x1C($sp)
    ctx->pc = 0x31a768u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_31a76c:
    // 0x31a76c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x31a76cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31a770:
    // 0x31a770: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x31a770u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_31a774:
    // 0x31a774: 0xe7a20020  swc1        $f2, 0x20($sp)
    ctx->pc = 0x31a774u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_31a778:
    // 0x31a778: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x31a778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31a77c:
    // 0x31a77c: 0xc6480000  lwc1        $f8, 0x0($s2)
    ctx->pc = 0x31a77cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_31a780:
    // 0x31a780: 0x46004201  sub.s       $f8, $f8, $f0
    ctx->pc = 0x31a780u;
    ctx->f[8] = FPU_SUB_S(ctx->f[8], ctx->f[0]);
label_31a784:
    // 0x31a784: 0xe7a80070  swc1        $f8, 0x70($sp)
    ctx->pc = 0x31a784u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_31a788:
    // 0x31a788: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x31a788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31a78c:
    // 0x31a78c: 0xc64a0004  lwc1        $f10, 0x4($s2)
    ctx->pc = 0x31a78cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_31a790:
    // 0x31a790: 0x46005281  sub.s       $f10, $f10, $f0
    ctx->pc = 0x31a790u;
    ctx->f[10] = FPU_SUB_S(ctx->f[10], ctx->f[0]);
label_31a794:
    // 0x31a794: 0xe7aa0074  swc1        $f10, 0x74($sp)
    ctx->pc = 0x31a794u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_31a798:
    // 0x31a798: 0xc6490008  lwc1        $f9, 0x8($s2)
    ctx->pc = 0x31a798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_31a79c:
    // 0x31a79c: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x31a79cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31a7a0:
    // 0x31a7a0: 0x46004a41  sub.s       $f9, $f9, $f0
    ctx->pc = 0x31a7a0u;
    ctx->f[9] = FPU_SUB_S(ctx->f[9], ctx->f[0]);
label_31a7a4:
    // 0x31a7a4: 0xe7a90078  swc1        $f9, 0x78($sp)
    ctx->pc = 0x31a7a4u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_31a7a8:
    // 0x31a7a8: 0xc6240000  lwc1        $f4, 0x0($s1)
    ctx->pc = 0x31a7a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_31a7ac:
    // 0x31a7ac: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x31a7acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31a7b0:
    // 0x31a7b0: 0x46002101  sub.s       $f4, $f4, $f0
    ctx->pc = 0x31a7b0u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
label_31a7b4:
    // 0x31a7b4: 0xe7a40080  swc1        $f4, 0x80($sp)
    ctx->pc = 0x31a7b4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_31a7b8:
    // 0x31a7b8: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x31a7b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31a7bc:
    // 0x31a7bc: 0xc6260004  lwc1        $f6, 0x4($s1)
    ctx->pc = 0x31a7bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_31a7c0:
    // 0x31a7c0: 0x46003181  sub.s       $f6, $f6, $f0
    ctx->pc = 0x31a7c0u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
label_31a7c4:
    // 0x31a7c4: 0xe7a60084  swc1        $f6, 0x84($sp)
    ctx->pc = 0x31a7c4u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_31a7c8:
    // 0x31a7c8: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x31a7c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_31a7cc:
    // 0x31a7cc: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x31a7ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31a7d0:
    // 0x31a7d0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x31a7d0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_31a7d4:
    // 0x31a7d4: 0xe7a10088  swc1        $f1, 0x88($sp)
    ctx->pc = 0x31a7d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_31a7d8:
    // 0x31a7d8: 0xc7a50034  lwc1        $f5, 0x34($sp)
    ctx->pc = 0x31a7d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_31a7dc:
    // 0x31a7dc: 0xc7a20038  lwc1        $f2, 0x38($sp)
    ctx->pc = 0x31a7dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_31a7e0:
    // 0x31a7e0: 0x460429c2  mul.s       $f7, $f5, $f4
    ctx->pc = 0x31a7e0u;
    ctx->f[7] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
label_31a7e4:
    // 0x31a7e4: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x31a7e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31a7e8:
    // 0x31a7e8: 0x46012942  mul.s       $f5, $f5, $f1
    ctx->pc = 0x31a7e8u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
label_31a7ec:
    // 0x31a7ec: 0x46041102  mul.s       $f4, $f2, $f4
    ctx->pc = 0x31a7ecu;
    ctx->f[4] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
label_31a7f0:
    // 0x31a7f0: 0x460600c2  mul.s       $f3, $f0, $f6
    ctx->pc = 0x31a7f0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
label_31a7f4:
    // 0x31a7f4: 0x46061082  mul.s       $f2, $f2, $f6
    ctx->pc = 0x31a7f4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
label_31a7f8:
    // 0x31a7f8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x31a7f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_31a7fc:
    // 0x31a7fc: 0x46071981  sub.s       $f6, $f3, $f7
    ctx->pc = 0x31a7fcu;
    ctx->f[6] = FPU_SUB_S(ctx->f[3], ctx->f[7]);
label_31a800:
    // 0x31a800: 0x46022941  sub.s       $f5, $f5, $f2
    ctx->pc = 0x31a800u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[2]);
label_31a804:
    // 0x31a804: 0x46002101  sub.s       $f4, $f4, $f0
    ctx->pc = 0x31a804u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
label_31a808:
    // 0x31a808: 0xe7a600a8  swc1        $f6, 0xA8($sp)
    ctx->pc = 0x31a808u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_31a80c:
    // 0x31a80c: 0xe7a500a0  swc1        $f5, 0xA0($sp)
    ctx->pc = 0x31a80cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_31a810:
    // 0x31a810: 0xe7a400a4  swc1        $f4, 0xA4($sp)
    ctx->pc = 0x31a810u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_31a814:
    // 0x31a814: 0x46054202  mul.s       $f8, $f8, $f5
    ctx->pc = 0x31a814u;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[5]);
label_31a818:
    // 0x31a818: 0x46045282  mul.s       $f10, $f10, $f4
    ctx->pc = 0x31a818u;
    ctx->f[10] = FPU_MUL_S(ctx->f[10], ctx->f[4]);
label_31a81c:
    // 0x31a81c: 0x46064a42  mul.s       $f9, $f9, $f6
    ctx->pc = 0x31a81cu;
    ctx->f[9] = FPU_MUL_S(ctx->f[9], ctx->f[6]);
label_31a820:
    // 0x31a820: 0x460a4200  add.s       $f8, $f8, $f10
    ctx->pc = 0x31a820u;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[10]);
label_31a824:
    // 0x31a824: 0x46094200  add.s       $f8, $f8, $f9
    ctx->pc = 0x31a824u;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[9]);
label_31a828:
    // 0x31a828: 0x4608b834  c.lt.s      $f23, $f8
    ctx->pc = 0x31a828u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[8])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_31a82c:
    // 0x31a82c: 0x0  nop
    ctx->pc = 0x31a82cu;
    // NOP
label_31a830:
    // 0x31a830: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_31a834:
    if (ctx->pc == 0x31A834u) {
        ctx->pc = 0x31A834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A830u;
        // 0x31a834: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31A838u;
        goto label_31a838;
    }
    ctx->pc = 0x31A830u;
    {
        const bool branch_taken_0x31a830 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x31A834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A830u;
        // 0x31a834: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a830) {
            ctx->pc = 0x31A840u;
            goto label_31a840;
        }
    }
    ctx->pc = 0x31A838u;
label_31a838:
    // 0x31a838: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x31a838u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31a83c:
    // 0x31a83c: 0x0  nop
    ctx->pc = 0x31a83cu;
    // NOP
label_31a840:
    // 0x31a840: 0x504000a7  beql        $v0, $zero, . + 4 + (0xA7 << 2)
label_31a844:
    if (ctx->pc == 0x31A844u) {
        ctx->pc = 0x31A844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A840u;
        // 0x31a844: 0x8ee20010  lw          $v0, 0x10($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31A848u;
        goto label_31a848;
    }
    ctx->pc = 0x31A840u;
    {
        const bool branch_taken_0x31a840 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31a840) {
            ctx->pc = 0x31A844u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31A840u;
            // 0x31a844: 0x8ee20010  lw          $v0, 0x10($s7) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31AAE0u;
            goto label_31aae0;
        }
    }
    ctx->pc = 0x31A848u;
label_31a848:
    // 0x31a848: 0x46004007  neg.s       $f0, $f8
    ctx->pc = 0x31a848u;
    ctx->f[0] = FPU_NEG_S(ctx->f[8]);
label_31a84c:
    // 0x31a84c: 0x46160282  mul.s       $f10, $f0, $f22
    ctx->pc = 0x31a84cu;
    ctx->f[10] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
label_31a850:
    // 0x31a850: 0x460a42c1  sub.s       $f11, $f8, $f10
    ctx->pc = 0x31a850u;
    ctx->f[11] = FPU_SUB_S(ctx->f[8], ctx->f[10]);
label_31a854:
    // 0x31a854: 0xc6820000  lwc1        $f2, 0x0($s4)
    ctx->pc = 0x31a854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_31a858:
    // 0x31a858: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x31a858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31a85c:
    // 0x31a85c: 0xc6830004  lwc1        $f3, 0x4($s4)
    ctx->pc = 0x31a85cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_31a860:
    // 0x31a860: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x31a860u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_31a864:
    // 0x31a864: 0xc6810008  lwc1        $f1, 0x8($s4)
    ctx->pc = 0x31a864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_31a868:
    // 0x31a868: 0xe7a20090  swc1        $f2, 0x90($sp)
    ctx->pc = 0x31a868u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_31a86c:
    // 0x31a86c: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x31a86cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31a870:
    // 0x31a870: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x31a870u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
label_31a874:
    // 0x31a874: 0xe7a30094  swc1        $f3, 0x94($sp)
    ctx->pc = 0x31a874u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_31a878:
    // 0x31a878: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x31a878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31a87c:
    // 0x31a87c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x31a87cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_31a880:
    // 0x31a880: 0xe7a10098  swc1        $f1, 0x98($sp)
    ctx->pc = 0x31a880u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_31a884:
    // 0x31a884: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x31a884u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
label_31a888:
    // 0x31a888: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x31a888u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
label_31a88c:
    // 0x31a88c: 0x46060842  mul.s       $f1, $f1, $f6
    ctx->pc = 0x31a88cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
label_31a890:
    // 0x31a890: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x31a890u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_31a894:
    // 0x31a894: 0x46011240  add.s       $f9, $f2, $f1
    ctx->pc = 0x31a894u;
    ctx->f[9] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_31a898:
    // 0x31a898: 0x46095036  c.le.s      $f10, $f9
    ctx->pc = 0x31a898u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[10], ctx->f[9])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_31a89c:
    // 0x31a89c: 0x0  nop
    ctx->pc = 0x31a89cu;
    // NOP
label_31a8a0:
    // 0x31a8a0: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_31a8a4:
    if (ctx->pc == 0x31A8A4u) {
        ctx->pc = 0x31A8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A8A0u;
        // 0x31a8a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31A8A8u;
        goto label_31a8a8;
    }
    ctx->pc = 0x31A8A0u;
    {
        const bool branch_taken_0x31a8a0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x31A8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A8A0u;
        // 0x31a8a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a8a0) {
            ctx->pc = 0x31A8B8u;
            goto label_31a8b8;
        }
    }
    ctx->pc = 0x31A8A8u;
label_31a8a8:
    // 0x31a8a8: 0x460b4836  c.le.s      $f9, $f11
    ctx->pc = 0x31a8a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[9], ctx->f[11])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_31a8ac:
    // 0x31a8ac: 0x0  nop
    ctx->pc = 0x31a8acu;
    // NOP
label_31a8b0:
    // 0x31a8b0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_31a8b4:
    if (ctx->pc == 0x31A8B4u) {
        ctx->pc = 0x31A8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A8B0u;
        // 0x31a8b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31A8B8u;
        goto label_31a8b8;
    }
    ctx->pc = 0x31A8B0u;
    {
        const bool branch_taken_0x31a8b0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x31a8b0) {
            ctx->pc = 0x31A8B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31A8B0u;
            // 0x31a8b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31A8B8u;
            goto label_31a8b8;
        }
    }
    ctx->pc = 0x31A8B8u;
label_31a8b8:
    // 0x31a8b8: 0x10400088  beqz        $v0, . + 4 + (0x88 << 2)
label_31a8bc:
    if (ctx->pc == 0x31A8BCu) {
        ctx->pc = 0x31A8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A8B8u;
        // 0x31a8bc: 0xc7a30098  lwc1        $f3, 0x98($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x31A8C0u;
        goto label_31a8c0;
    }
    ctx->pc = 0x31A8B8u;
    {
        const bool branch_taken_0x31a8b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31A8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A8B8u;
        // 0x31a8bc: 0xc7a30098  lwc1        $f3, 0x98($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a8b8) {
            ctx->pc = 0x31AADCu;
            goto label_31aadc;
        }
    }
    ctx->pc = 0x31A8C0u;
label_31a8c0:
    // 0x31a8c0: 0xc7a40074  lwc1        $f4, 0x74($sp)
    ctx->pc = 0x31a8c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_31a8c4:
    // 0x31a8c4: 0xc7a20094  lwc1        $f2, 0x94($sp)
    ctx->pc = 0x31a8c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_31a8c8:
    // 0x31a8c8: 0xc7a70078  lwc1        $f7, 0x78($sp)
    ctx->pc = 0x31a8c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_31a8cc:
    // 0x31a8cc: 0x46041942  mul.s       $f5, $f3, $f4
    ctx->pc = 0x31a8ccu;
    ctx->f[5] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
label_31a8d0:
    // 0x31a8d0: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x31a8d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31a8d4:
    // 0x31a8d4: 0xc7a10070  lwc1        $f1, 0x70($sp)
    ctx->pc = 0x31a8d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_31a8d8:
    // 0x31a8d8: 0x46071182  mul.s       $f6, $f2, $f7
    ctx->pc = 0x31a8d8u;
    ctx->f[6] = FPU_MUL_S(ctx->f[2], ctx->f[7]);
label_31a8dc:
    // 0x31a8dc: 0x46040102  mul.s       $f4, $f0, $f4
    ctx->pc = 0x31a8dcu;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_31a8e0:
    // 0x31a8e0: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x31a8e0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_31a8e4:
    // 0x31a8e4: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x31a8e4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_31a8e8:
    // 0x31a8e8: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x31a8e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
label_31a8ec:
    // 0x31a8ec: 0x46053181  sub.s       $f6, $f6, $f5
    ctx->pc = 0x31a8ecu;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[5]);
label_31a8f0:
    // 0x31a8f0: 0x46022101  sub.s       $f4, $f4, $f2
    ctx->pc = 0x31a8f0u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[2]);
label_31a8f4:
    // 0x31a8f4: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x31a8f4u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
label_31a8f8:
    // 0x31a8f8: 0xe7a600b0  swc1        $f6, 0xB0($sp)
    ctx->pc = 0x31a8f8u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_31a8fc:
    // 0x31a8fc: 0xe7a400b8  swc1        $f4, 0xB8($sp)
    ctx->pc = 0x31a8fcu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_31a900:
    // 0x31a900: 0xe7a300b4  swc1        $f3, 0xB4($sp)
    ctx->pc = 0x31a900u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
label_31a904:
    // 0x31a904: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x31a904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31a908:
    // 0x31a908: 0xc7a20034  lwc1        $f2, 0x34($sp)
    ctx->pc = 0x31a908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_31a90c:
    // 0x31a90c: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x31a90cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
label_31a910:
    // 0x31a910: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x31a910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_31a914:
    // 0x31a914: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x31a914u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_31a918:
    // 0x31a918: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x31a918u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
label_31a91c:
    // 0x31a91c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x31a91cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_31a920:
    // 0x31a920: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x31a920u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_31a924:
    // 0x31a924: 0x46005036  c.le.s      $f10, $f0
    ctx->pc = 0x31a924u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[10], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_31a928:
    // 0x31a928: 0x0  nop
    ctx->pc = 0x31a928u;
    // NOP
label_31a92c:
    // 0x31a92c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_31a930:
    if (ctx->pc == 0x31A930u) {
        ctx->pc = 0x31A930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A92Cu;
        // 0x31a930: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31A934u;
        goto label_31a934;
    }
    ctx->pc = 0x31A92Cu;
    {
        const bool branch_taken_0x31a92c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x31A930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A92Cu;
        // 0x31a930: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a92c) {
            ctx->pc = 0x31A948u;
            goto label_31a948;
        }
    }
    ctx->pc = 0x31A934u;
label_31a934:
    // 0x31a934: 0x46004800  add.s       $f0, $f9, $f0
    ctx->pc = 0x31a934u;
    ctx->f[0] = FPU_ADD_S(ctx->f[9], ctx->f[0]);
label_31a938:
    // 0x31a938: 0x460b0036  c.le.s      $f0, $f11
    ctx->pc = 0x31a938u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[11])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_31a93c:
    // 0x31a93c: 0x0  nop
    ctx->pc = 0x31a93cu;
    // NOP
label_31a940:
    // 0x31a940: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_31a944:
    if (ctx->pc == 0x31A944u) {
        ctx->pc = 0x31A944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A940u;
        // 0x31a944: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31A948u;
        goto label_31a948;
    }
    ctx->pc = 0x31A940u;
    {
        const bool branch_taken_0x31a940 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x31a940) {
            ctx->pc = 0x31A944u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31A940u;
            // 0x31a944: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31A948u;
            goto label_31a948;
        }
    }
    ctx->pc = 0x31A948u;
label_31a948:
    // 0x31a948: 0x10400064  beqz        $v0, . + 4 + (0x64 << 2)
label_31a94c:
    if (ctx->pc == 0x31A94Cu) {
        ctx->pc = 0x31A94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A948u;
        // 0x31a94c: 0xc7a000b0  lwc1        $f0, 0xB0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x31A950u;
        goto label_31a950;
    }
    ctx->pc = 0x31A948u;
    {
        const bool branch_taken_0x31a948 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31A94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A948u;
        // 0x31a94c: 0xc7a000b0  lwc1        $f0, 0xB0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a948) {
            ctx->pc = 0x31AADCu;
            goto label_31aadc;
        }
    }
    ctx->pc = 0x31A950u;
label_31a950:
    // 0x31a950: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x31a950u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31a954:
    // 0x31a954: 0xc7a20080  lwc1        $f2, 0x80($sp)
    ctx->pc = 0x31a954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_31a958:
    // 0x31a958: 0xc7a30084  lwc1        $f3, 0x84($sp)
    ctx->pc = 0x31a958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_31a95c:
    // 0x31a95c: 0xc7a400b4  lwc1        $f4, 0xB4($sp)
    ctx->pc = 0x31a95cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_31a960:
    // 0x31a960: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x31a960u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_31a964:
    // 0x31a964: 0xc7a10088  lwc1        $f1, 0x88($sp)
    ctx->pc = 0x31a964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_31a968:
    // 0x31a968: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x31a968u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
label_31a96c:
    // 0x31a96c: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x31a96cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31a970:
    // 0x31a970: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x31a970u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_31a974:
    // 0x31a974: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x31a974u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_31a978:
    // 0x31a978: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x31a978u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_31a97c:
    // 0x31a97c: 0x46025036  c.le.s      $f10, $f2
    ctx->pc = 0x31a97cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[10], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_31a980:
    // 0x31a980: 0x0  nop
    ctx->pc = 0x31a980u;
    // NOP
label_31a984:
    // 0x31a984: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_31a988:
    if (ctx->pc == 0x31A988u) {
        ctx->pc = 0x31A988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A984u;
        // 0x31a988: 0x46001306  mov.s       $f12, $f2 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x31A98Cu;
        goto label_31a98c;
    }
    ctx->pc = 0x31A984u;
    {
        const bool branch_taken_0x31a984 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x31A988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A984u;
        // 0x31a988: 0x46001306  mov.s       $f12, $f2 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a984) {
            ctx->pc = 0x31A99Cu;
            goto label_31a99c;
        }
    }
    ctx->pc = 0x31A98Cu;
label_31a98c:
    // 0x31a98c: 0x460b1036  c.le.s      $f2, $f11
    ctx->pc = 0x31a98cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[11])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_31a990:
    // 0x31a990: 0x0  nop
    ctx->pc = 0x31a990u;
    // NOP
label_31a994:
    // 0x31a994: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_31a998:
    if (ctx->pc == 0x31A998u) {
        ctx->pc = 0x31A998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A994u;
        // 0x31a998: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31A99Cu;
        goto label_31a99c;
    }
    ctx->pc = 0x31A994u;
    {
        const bool branch_taken_0x31a994 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x31a994) {
            ctx->pc = 0x31A998u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31A994u;
            // 0x31a998: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31A99Cu;
            goto label_31a99c;
        }
    }
    ctx->pc = 0x31A99Cu;
label_31a99c:
    // 0x31a99c: 0x50400050  beql        $v0, $zero, . + 4 + (0x50 << 2)
label_31a9a0:
    if (ctx->pc == 0x31A9A0u) {
        ctx->pc = 0x31A9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A99Cu;
        // 0x31a9a0: 0x8ee20010  lw          $v0, 0x10($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31A9A4u;
        goto label_31a9a4;
    }
    ctx->pc = 0x31A99Cu;
    {
        const bool branch_taken_0x31a99c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31a99c) {
            ctx->pc = 0x31A9A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31A99Cu;
            // 0x31a9a0: 0x8ee20010  lw          $v0, 0x10($s7) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31AAE0u;
            goto label_31aae0;
        }
    }
    ctx->pc = 0x31A9A4u;
label_31a9a4:
    // 0x31a9a4: 0x46086303  div.s       $f12, $f12, $f8
    ctx->pc = 0x31a9a4u;
    { if (ctx->f[8] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[12], ctx->f[8]); }
label_31a9a8:
    // 0x31a9a8: 0x6a030007  ldl         $v1, 0x7($s0)
    ctx->pc = 0x31a9a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_31a9ac:
    // 0x31a9ac: 0x6e030000  ldr         $v1, 0x0($s0)
    ctx->pc = 0x31a9acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_31a9b0:
    // 0x31a9b0: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x31a9b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_31a9b4:
    // 0x31a9b4: 0xb3a30053  sdl         $v1, 0x53($sp)
    ctx->pc = 0x31a9b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 83); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_31a9b8:
    // 0x31a9b8: 0xb7a3004c  sdr         $v1, 0x4C($sp)
    ctx->pc = 0x31a9b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 76); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_31a9bc:
    // 0x31a9bc: 0xafa40054  sw          $a0, 0x54($sp)
    ctx->pc = 0x31a9bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 4));
label_31a9c0:
    // 0x31a9c0: 0xafb60058  sw          $s6, 0x58($sp)
    ctx->pc = 0x31a9c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 22));
label_31a9c4:
    // 0x31a9c4: 0xafb0005c  sw          $s0, 0x5C($sp)
    ctx->pc = 0x31a9c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 16));
label_31a9c8:
    // 0x31a9c8: 0xafb20060  sw          $s2, 0x60($sp)
    ctx->pc = 0x31a9c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 18));
label_31a9cc:
    // 0x31a9cc: 0xafb10064  sw          $s1, 0x64($sp)
    ctx->pc = 0x31a9ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 17));
label_31a9d0:
    // 0x31a9d0: 0xc6470000  lwc1        $f7, 0x0($s2)
    ctx->pc = 0x31a9d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_31a9d4:
    // 0x31a9d4: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x31a9d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31a9d8:
    // 0x31a9d8: 0x460039c1  sub.s       $f7, $f7, $f0
    ctx->pc = 0x31a9d8u;
    ctx->f[7] = FPU_SUB_S(ctx->f[7], ctx->f[0]);
label_31a9dc:
    // 0x31a9dc: 0xe7a700c0  swc1        $f7, 0xC0($sp)
    ctx->pc = 0x31a9dcu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_31a9e0:
    // 0x31a9e0: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x31a9e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31a9e4:
    // 0x31a9e4: 0xc6460004  lwc1        $f6, 0x4($s2)
    ctx->pc = 0x31a9e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_31a9e8:
    // 0x31a9e8: 0x46003181  sub.s       $f6, $f6, $f0
    ctx->pc = 0x31a9e8u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
label_31a9ec:
    // 0x31a9ec: 0xe7a600c4  swc1        $f6, 0xC4($sp)
    ctx->pc = 0x31a9ecu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_31a9f0:
    // 0x31a9f0: 0xc6450008  lwc1        $f5, 0x8($s2)
    ctx->pc = 0x31a9f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_31a9f4:
    // 0x31a9f4: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x31a9f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31a9f8:
    // 0x31a9f8: 0x46002941  sub.s       $f5, $f5, $f0
    ctx->pc = 0x31a9f8u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
label_31a9fc:
    // 0x31a9fc: 0xe7a500c8  swc1        $f5, 0xC8($sp)
    ctx->pc = 0x31a9fcu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_31aa00:
    // 0x31aa00: 0xc6220000  lwc1        $f2, 0x0($s1)
    ctx->pc = 0x31aa00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_31aa04:
    // 0x31aa04: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x31aa04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31aa08:
    // 0x31aa08: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x31aa08u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_31aa0c:
    // 0x31aa0c: 0xe7a200d0  swc1        $f2, 0xD0($sp)
    ctx->pc = 0x31aa0cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_31aa10:
    // 0x31aa10: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x31aa10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31aa14:
    // 0x31aa14: 0xc6240004  lwc1        $f4, 0x4($s1)
    ctx->pc = 0x31aa14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_31aa18:
    // 0x31aa18: 0x46002101  sub.s       $f4, $f4, $f0
    ctx->pc = 0x31aa18u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
label_31aa1c:
    // 0x31aa1c: 0xe7a400d4  swc1        $f4, 0xD4($sp)
    ctx->pc = 0x31aa1cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_31aa20:
    // 0x31aa20: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x31aa20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_31aa24:
    // 0x31aa24: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x31aa24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31aa28:
    // 0x31aa28: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x31aa28u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_31aa2c:
    // 0x31aa2c: 0xe7a100d8  swc1        $f1, 0xD8($sp)
    ctx->pc = 0x31aa2cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_31aa30:
    // 0x31aa30: 0x46013002  mul.s       $f0, $f6, $f1
    ctx->pc = 0x31aa30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
label_31aa34:
    // 0x31aa34: 0x46023182  mul.s       $f6, $f6, $f2
    ctx->pc = 0x31aa34u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
label_31aa38:
    // 0x31aa38: 0x460438c2  mul.s       $f3, $f7, $f4
    ctx->pc = 0x31aa38u;
    ctx->f[3] = FPU_MUL_S(ctx->f[7], ctx->f[4]);
label_31aa3c:
    // 0x31aa3c: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x31aa3cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_31aa40:
    // 0x31aa40: 0x460139c2  mul.s       $f7, $f7, $f1
    ctx->pc = 0x31aa40u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[1]);
label_31aa44:
    // 0x31aa44: 0x46042942  mul.s       $f5, $f5, $f4
    ctx->pc = 0x31aa44u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
label_31aa48:
    // 0x31aa48: 0x460618c1  sub.s       $f3, $f3, $f6
    ctx->pc = 0x31aa48u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[6]);
label_31aa4c:
    // 0x31aa4c: 0x46071081  sub.s       $f2, $f2, $f7
    ctx->pc = 0x31aa4cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[7]);
label_31aa50:
    // 0x31aa50: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x31aa50u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
label_31aa54:
    // 0x31aa54: 0xe7a30048  swc1        $f3, 0x48($sp)
    ctx->pc = 0x31aa54u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_31aa58:
    // 0x31aa58: 0xe7a20044  swc1        $f2, 0x44($sp)
    ctx->pc = 0x31aa58u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_31aa5c:
    // 0x31aa5c: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x31aa5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_31aa60:
    // 0x31aa60: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x31aa60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_31aa64:
    // 0x31aa64: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x31aa64u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
label_31aa68:
    // 0x31aa68: 0x460318c2  mul.s       $f3, $f3, $f3
    ctx->pc = 0x31aa68u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
label_31aa6c:
    // 0x31aa6c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x31aa6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_31aa70:
    // 0x31aa70: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x31aa70u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_31aa74:
    // 0x31aa74: 0x46000004  c1          0x4
    ctx->pc = 0x31aa74u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
label_31aa78:
    // 0x31aa78: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x31aa78u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_31aa7c:
    // 0x31aa7c: 0x0  nop
    ctx->pc = 0x31aa7cu;
    // NOP
label_31aa80:
    // 0x31aa80: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_31aa84:
    if (ctx->pc == 0x31AA84u) {
        ctx->pc = 0x31AA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AA80u;
        // 0x31aa84: 0x460000c6  mov.s       $f3, $f0 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x31AA88u;
        goto label_31aa88;
    }
    ctx->pc = 0x31AA80u;
    {
        const bool branch_taken_0x31aa80 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x31AA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AA80u;
        // 0x31aa84: 0x460000c6  mov.s       $f3, $f0 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31aa80) {
            ctx->pc = 0x31AA98u;
            goto label_31aa98;
        }
    }
    ctx->pc = 0x31AA88u;
label_31aa88:
    // 0x31aa88: 0x4600a0c3  div.s       $f3, $f20, $f0
    ctx->pc = 0x31aa88u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[20], ctx->f[0]); }
label_31aa8c:
    // 0x31aa8c: 0x10000004  b           . + 4 + (0x4 << 2)
label_31aa90:
    if (ctx->pc == 0x31AA90u) {
        ctx->pc = 0x31AA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AA8Cu;
        // 0x31aa90: 0xc7a00040  lwc1        $f0, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x31AA94u;
        goto label_31aa94;
    }
    ctx->pc = 0x31AA8Cu;
    {
        const bool branch_taken_0x31aa8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31AA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AA8Cu;
        // 0x31aa90: 0xc7a00040  lwc1        $f0, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x31aa8c) {
            ctx->pc = 0x31AAA0u;
            goto label_31aaa0;
        }
    }
    ctx->pc = 0x31AA94u;
label_31aa94:
    // 0x31aa94: 0x0  nop
    ctx->pc = 0x31aa94u;
    // NOP
label_31aa98:
    // 0x31aa98: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x31aa98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31aa9c:
    // 0x31aa9c: 0x0  nop
    ctx->pc = 0x31aa9cu;
    // NOP
label_31aaa0:
    // 0x31aaa0: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x31aaa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_31aaa4:
    // 0x31aaa4: 0xc7a20048  lwc1        $f2, 0x48($sp)
    ctx->pc = 0x31aaa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_31aaa8:
    // 0x31aaa8: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x31aaa8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_31aaac:
    // 0x31aaac: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x31aaacu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_31aab0:
    // 0x31aab0: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x31aab0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_31aab4:
    // 0x31aab4: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x31aab4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_31aab8:
    // 0x31aab8: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x31aab8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_31aabc:
    // 0x31aabc: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x31aabcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_31aac0:
    // 0x31aac0: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x31aac0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_31aac4:
    // 0x31aac4: 0x8fa700e4  lw          $a3, 0xE4($sp)
    ctx->pc = 0x31aac4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
label_31aac8:
    // 0x31aac8: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x31aac8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_31aacc:
    // 0x31aacc: 0xe0f809  jalr        $a3
label_31aad0:
    if (ctx->pc == 0x31AAD0u) {
        ctx->pc = 0x31AAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AACCu;
        // 0x31aad0: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31AAD4u;
        goto label_31aad4;
    }
    ctx->pc = 0x31AACCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x31AAD4u);
        ctx->pc = 0x31AAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AACCu;
        // 0x31aad0: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31AACCu, 0x31AAD4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31AAD4u;
label_31aad4:
    // 0x31aad4: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_31aad8:
    if (ctx->pc == 0x31AAD8u) {
        ctx->pc = 0x31AAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AAD4u;
        // 0x31aad8: 0x7bb00180  lq          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31AADCu;
        goto label_31aadc;
    }
    ctx->pc = 0x31AAD4u;
    {
        const bool branch_taken_0x31aad4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31aad4) {
            ctx->pc = 0x31AAD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31AAD4u;
            // 0x31aad8: 0x7bb00180  lq          $s0, 0x180($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 384)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31AAF4u;
            goto label_31aaf4;
        }
    }
    ctx->pc = 0x31AADCu;
label_31aadc:
    // 0x31aadc: 0x8ee20010  lw          $v0, 0x10($s7)
    ctx->pc = 0x31aadcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 16)));
label_31aae0:
    // 0x31aae0: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x31aae0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_31aae4:
    // 0x31aae4: 0x2c2102a  slt         $v0, $s6, $v0
    ctx->pc = 0x31aae4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_31aae8:
    // 0x31aae8: 0x1440febb  bnez        $v0, . + 4 + (-0x145 << 2)
label_31aaec:
    if (ctx->pc == 0x31AAECu) {
        ctx->pc = 0x31AAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AAE8u;
        // 0x31aaec: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31AAF0u;
        goto label_31aaf0;
    }
    ctx->pc = 0x31AAE8u;
    {
        const bool branch_taken_0x31aae8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31AAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AAE8u;
        // 0x31aaec: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31aae8) {
            ctx->pc = 0x31A5D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31a5d8;
        }
    }
    ctx->pc = 0x31AAF0u;
label_31aaf0:
    // 0x31aaf0: 0x7bb00180  lq          $s0, 0x180($sp)
    ctx->pc = 0x31aaf0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 384)));
label_31aaf4:
    // 0x31aaf4: 0x7bb10170  lq          $s1, 0x170($sp)
    ctx->pc = 0x31aaf4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 368)));
label_31aaf8:
    // 0x31aaf8: 0x7bb20160  lq          $s2, 0x160($sp)
    ctx->pc = 0x31aaf8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 352)));
label_31aafc:
    // 0x31aafc: 0x7bb30150  lq          $s3, 0x150($sp)
    ctx->pc = 0x31aafcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_31ab00:
    // 0x31ab00: 0x7bb40140  lq          $s4, 0x140($sp)
    ctx->pc = 0x31ab00u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_31ab04:
    // 0x31ab04: 0x7bb50130  lq          $s5, 0x130($sp)
    ctx->pc = 0x31ab04u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_31ab08:
    // 0x31ab08: 0x7bb60120  lq          $s6, 0x120($sp)
    ctx->pc = 0x31ab08u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_31ab0c:
    // 0x31ab0c: 0x7bb70110  lq          $s7, 0x110($sp)
    ctx->pc = 0x31ab0cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_31ab10:
    // 0x31ab10: 0x7bbe0100  lq          $fp, 0x100($sp)
    ctx->pc = 0x31ab10u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_31ab14:
    // 0x31ab14: 0xdfbf00f0  ld          $ra, 0xF0($sp)
    ctx->pc = 0x31ab14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 240)));
label_31ab18:
    // 0x31ab18: 0xc7b701a8  lwc1        $f23, 0x1A8($sp)
    ctx->pc = 0x31ab18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_31ab1c:
    // 0x31ab1c: 0xc7b601a0  lwc1        $f22, 0x1A0($sp)
    ctx->pc = 0x31ab1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_31ab20:
    // 0x31ab20: 0xc7b50198  lwc1        $f21, 0x198($sp)
    ctx->pc = 0x31ab20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_31ab24:
    // 0x31ab24: 0xc7b40190  lwc1        $f20, 0x190($sp)
    ctx->pc = 0x31ab24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_31ab28:
    // 0x31ab28: 0x3e00008  jr          $ra
label_31ab2c:
    if (ctx->pc == 0x31AB2Cu) {
        ctx->pc = 0x31AB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AB28u;
        // 0x31ab2c: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31AB30u;
        goto label_fallthrough_0x31ab28;
    }
    ctx->pc = 0x31AB28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31AB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AB28u;
        // 0x31ab2c: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31AB28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x31ab28:
    ctx->pc = 0x31AB30u;
}
