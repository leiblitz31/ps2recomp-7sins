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

// Function: sub_001FF590
// Address: 0x1ff590 - 0x200000
void sub_001FF590_0x1ff590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FF590_0x1ff590");
#endif

    switch (ctx->pc) {
        case 0x1ff590u: goto label_1ff590;
        case 0x1ff594u: goto label_1ff594;
        case 0x1ff598u: goto label_1ff598;
        case 0x1ff59cu: goto label_1ff59c;
        case 0x1ff5a0u: goto label_1ff5a0;
        case 0x1ff5a4u: goto label_1ff5a4;
        case 0x1ff5a8u: goto label_1ff5a8;
        case 0x1ff5acu: goto label_1ff5ac;
        case 0x1ff5b0u: goto label_1ff5b0;
        case 0x1ff5b4u: goto label_1ff5b4;
        case 0x1ff5b8u: goto label_1ff5b8;
        case 0x1ff5bcu: goto label_1ff5bc;
        case 0x1ff5c0u: goto label_1ff5c0;
        case 0x1ff5c4u: goto label_1ff5c4;
        case 0x1ff5c8u: goto label_1ff5c8;
        case 0x1ff5ccu: goto label_1ff5cc;
        case 0x1ff5d0u: goto label_1ff5d0;
        case 0x1ff5d4u: goto label_1ff5d4;
        case 0x1ff5d8u: goto label_1ff5d8;
        case 0x1ff5dcu: goto label_1ff5dc;
        case 0x1ff5e0u: goto label_1ff5e0;
        case 0x1ff5e4u: goto label_1ff5e4;
        case 0x1ff5e8u: goto label_1ff5e8;
        case 0x1ff5ecu: goto label_1ff5ec;
        case 0x1ff5f0u: goto label_1ff5f0;
        case 0x1ff5f4u: goto label_1ff5f4;
        case 0x1ff5f8u: goto label_1ff5f8;
        case 0x1ff5fcu: goto label_1ff5fc;
        case 0x1ff600u: goto label_1ff600;
        case 0x1ff604u: goto label_1ff604;
        case 0x1ff608u: goto label_1ff608;
        case 0x1ff60cu: goto label_1ff60c;
        case 0x1ff610u: goto label_1ff610;
        case 0x1ff614u: goto label_1ff614;
        case 0x1ff618u: goto label_1ff618;
        case 0x1ff61cu: goto label_1ff61c;
        case 0x1ff620u: goto label_1ff620;
        case 0x1ff624u: goto label_1ff624;
        case 0x1ff628u: goto label_1ff628;
        case 0x1ff62cu: goto label_1ff62c;
        case 0x1ff630u: goto label_1ff630;
        case 0x1ff634u: goto label_1ff634;
        case 0x1ff638u: goto label_1ff638;
        case 0x1ff63cu: goto label_1ff63c;
        case 0x1ff640u: goto label_1ff640;
        case 0x1ff644u: goto label_1ff644;
        case 0x1ff648u: goto label_1ff648;
        case 0x1ff64cu: goto label_1ff64c;
        case 0x1ff650u: goto label_1ff650;
        case 0x1ff654u: goto label_1ff654;
        case 0x1ff658u: goto label_1ff658;
        case 0x1ff65cu: goto label_1ff65c;
        case 0x1ff660u: goto label_1ff660;
        case 0x1ff664u: goto label_1ff664;
        case 0x1ff668u: goto label_1ff668;
        case 0x1ff66cu: goto label_1ff66c;
        case 0x1ff670u: goto label_1ff670;
        case 0x1ff674u: goto label_1ff674;
        case 0x1ff678u: goto label_1ff678;
        case 0x1ff67cu: goto label_1ff67c;
        case 0x1ff680u: goto label_1ff680;
        case 0x1ff684u: goto label_1ff684;
        case 0x1ff688u: goto label_1ff688;
        case 0x1ff68cu: goto label_1ff68c;
        case 0x1ff690u: goto label_1ff690;
        case 0x1ff694u: goto label_1ff694;
        case 0x1ff698u: goto label_1ff698;
        case 0x1ff69cu: goto label_1ff69c;
        case 0x1ff6a0u: goto label_1ff6a0;
        case 0x1ff6a4u: goto label_1ff6a4;
        case 0x1ff6a8u: goto label_1ff6a8;
        case 0x1ff6acu: goto label_1ff6ac;
        case 0x1ff6b0u: goto label_1ff6b0;
        case 0x1ff6b4u: goto label_1ff6b4;
        case 0x1ff6b8u: goto label_1ff6b8;
        case 0x1ff6bcu: goto label_1ff6bc;
        case 0x1ff6c0u: goto label_1ff6c0;
        case 0x1ff6c4u: goto label_1ff6c4;
        case 0x1ff6c8u: goto label_1ff6c8;
        case 0x1ff6ccu: goto label_1ff6cc;
        case 0x1ff6d0u: goto label_1ff6d0;
        case 0x1ff6d4u: goto label_1ff6d4;
        case 0x1ff6d8u: goto label_1ff6d8;
        case 0x1ff6dcu: goto label_1ff6dc;
        case 0x1ff6e0u: goto label_1ff6e0;
        case 0x1ff6e4u: goto label_1ff6e4;
        case 0x1ff6e8u: goto label_1ff6e8;
        case 0x1ff6ecu: goto label_1ff6ec;
        case 0x1ff6f0u: goto label_1ff6f0;
        case 0x1ff6f4u: goto label_1ff6f4;
        case 0x1ff6f8u: goto label_1ff6f8;
        case 0x1ff6fcu: goto label_1ff6fc;
        case 0x1ff700u: goto label_1ff700;
        case 0x1ff704u: goto label_1ff704;
        case 0x1ff708u: goto label_1ff708;
        case 0x1ff70cu: goto label_1ff70c;
        case 0x1ff710u: goto label_1ff710;
        case 0x1ff714u: goto label_1ff714;
        case 0x1ff718u: goto label_1ff718;
        case 0x1ff71cu: goto label_1ff71c;
        case 0x1ff720u: goto label_1ff720;
        case 0x1ff724u: goto label_1ff724;
        case 0x1ff728u: goto label_1ff728;
        case 0x1ff72cu: goto label_1ff72c;
        case 0x1ff730u: goto label_1ff730;
        case 0x1ff734u: goto label_1ff734;
        case 0x1ff738u: goto label_1ff738;
        case 0x1ff73cu: goto label_1ff73c;
        case 0x1ff740u: goto label_1ff740;
        case 0x1ff744u: goto label_1ff744;
        case 0x1ff748u: goto label_1ff748;
        case 0x1ff74cu: goto label_1ff74c;
        case 0x1ff750u: goto label_1ff750;
        case 0x1ff754u: goto label_1ff754;
        case 0x1ff758u: goto label_1ff758;
        case 0x1ff75cu: goto label_1ff75c;
        case 0x1ff760u: goto label_1ff760;
        case 0x1ff764u: goto label_1ff764;
        case 0x1ff768u: goto label_1ff768;
        case 0x1ff76cu: goto label_1ff76c;
        case 0x1ff770u: goto label_1ff770;
        case 0x1ff774u: goto label_1ff774;
        case 0x1ff778u: goto label_1ff778;
        case 0x1ff77cu: goto label_1ff77c;
        case 0x1ff780u: goto label_1ff780;
        case 0x1ff784u: goto label_1ff784;
        case 0x1ff788u: goto label_1ff788;
        case 0x1ff78cu: goto label_1ff78c;
        case 0x1ff790u: goto label_1ff790;
        case 0x1ff794u: goto label_1ff794;
        case 0x1ff798u: goto label_1ff798;
        case 0x1ff79cu: goto label_1ff79c;
        case 0x1ff7a0u: goto label_1ff7a0;
        case 0x1ff7a4u: goto label_1ff7a4;
        case 0x1ff7a8u: goto label_1ff7a8;
        case 0x1ff7acu: goto label_1ff7ac;
        case 0x1ff7b0u: goto label_1ff7b0;
        case 0x1ff7b4u: goto label_1ff7b4;
        case 0x1ff7b8u: goto label_1ff7b8;
        case 0x1ff7bcu: goto label_1ff7bc;
        case 0x1ff7c0u: goto label_1ff7c0;
        case 0x1ff7c4u: goto label_1ff7c4;
        case 0x1ff7c8u: goto label_1ff7c8;
        case 0x1ff7ccu: goto label_1ff7cc;
        case 0x1ff7d0u: goto label_1ff7d0;
        case 0x1ff7d4u: goto label_1ff7d4;
        case 0x1ff7d8u: goto label_1ff7d8;
        case 0x1ff7dcu: goto label_1ff7dc;
        case 0x1ff7e0u: goto label_1ff7e0;
        case 0x1ff7e4u: goto label_1ff7e4;
        case 0x1ff7e8u: goto label_1ff7e8;
        case 0x1ff7ecu: goto label_1ff7ec;
        case 0x1ff7f0u: goto label_1ff7f0;
        case 0x1ff7f4u: goto label_1ff7f4;
        case 0x1ff7f8u: goto label_1ff7f8;
        case 0x1ff7fcu: goto label_1ff7fc;
        case 0x1ff800u: goto label_1ff800;
        case 0x1ff804u: goto label_1ff804;
        case 0x1ff808u: goto label_1ff808;
        case 0x1ff80cu: goto label_1ff80c;
        case 0x1ff810u: goto label_1ff810;
        case 0x1ff814u: goto label_1ff814;
        case 0x1ff818u: goto label_1ff818;
        case 0x1ff81cu: goto label_1ff81c;
        case 0x1ff820u: goto label_1ff820;
        case 0x1ff824u: goto label_1ff824;
        case 0x1ff828u: goto label_1ff828;
        case 0x1ff82cu: goto label_1ff82c;
        case 0x1ff830u: goto label_1ff830;
        case 0x1ff834u: goto label_1ff834;
        case 0x1ff838u: goto label_1ff838;
        case 0x1ff83cu: goto label_1ff83c;
        case 0x1ff840u: goto label_1ff840;
        case 0x1ff844u: goto label_1ff844;
        case 0x1ff848u: goto label_1ff848;
        case 0x1ff84cu: goto label_1ff84c;
        case 0x1ff850u: goto label_1ff850;
        case 0x1ff854u: goto label_1ff854;
        case 0x1ff858u: goto label_1ff858;
        case 0x1ff85cu: goto label_1ff85c;
        case 0x1ff860u: goto label_1ff860;
        case 0x1ff864u: goto label_1ff864;
        case 0x1ff868u: goto label_1ff868;
        case 0x1ff86cu: goto label_1ff86c;
        case 0x1ff870u: goto label_1ff870;
        case 0x1ff874u: goto label_1ff874;
        case 0x1ff878u: goto label_1ff878;
        case 0x1ff87cu: goto label_1ff87c;
        case 0x1ff880u: goto label_1ff880;
        case 0x1ff884u: goto label_1ff884;
        case 0x1ff888u: goto label_1ff888;
        case 0x1ff88cu: goto label_1ff88c;
        case 0x1ff890u: goto label_1ff890;
        case 0x1ff894u: goto label_1ff894;
        case 0x1ff898u: goto label_1ff898;
        case 0x1ff89cu: goto label_1ff89c;
        case 0x1ff8a0u: goto label_1ff8a0;
        case 0x1ff8a4u: goto label_1ff8a4;
        case 0x1ff8a8u: goto label_1ff8a8;
        case 0x1ff8acu: goto label_1ff8ac;
        case 0x1ff8b0u: goto label_1ff8b0;
        case 0x1ff8b4u: goto label_1ff8b4;
        case 0x1ff8b8u: goto label_1ff8b8;
        case 0x1ff8bcu: goto label_1ff8bc;
        case 0x1ff8c0u: goto label_1ff8c0;
        case 0x1ff8c4u: goto label_1ff8c4;
        case 0x1ff8c8u: goto label_1ff8c8;
        case 0x1ff8ccu: goto label_1ff8cc;
        case 0x1ff8d0u: goto label_1ff8d0;
        case 0x1ff8d4u: goto label_1ff8d4;
        case 0x1ff8d8u: goto label_1ff8d8;
        case 0x1ff8dcu: goto label_1ff8dc;
        case 0x1ff8e0u: goto label_1ff8e0;
        case 0x1ff8e4u: goto label_1ff8e4;
        case 0x1ff8e8u: goto label_1ff8e8;
        case 0x1ff8ecu: goto label_1ff8ec;
        case 0x1ff8f0u: goto label_1ff8f0;
        case 0x1ff8f4u: goto label_1ff8f4;
        case 0x1ff8f8u: goto label_1ff8f8;
        case 0x1ff8fcu: goto label_1ff8fc;
        case 0x1ff900u: goto label_1ff900;
        case 0x1ff904u: goto label_1ff904;
        case 0x1ff908u: goto label_1ff908;
        case 0x1ff90cu: goto label_1ff90c;
        case 0x1ff910u: goto label_1ff910;
        case 0x1ff914u: goto label_1ff914;
        case 0x1ff918u: goto label_1ff918;
        case 0x1ff91cu: goto label_1ff91c;
        case 0x1ff920u: goto label_1ff920;
        case 0x1ff924u: goto label_1ff924;
        case 0x1ff928u: goto label_1ff928;
        case 0x1ff92cu: goto label_1ff92c;
        case 0x1ff930u: goto label_1ff930;
        case 0x1ff934u: goto label_1ff934;
        case 0x1ff938u: goto label_1ff938;
        case 0x1ff93cu: goto label_1ff93c;
        case 0x1ff940u: goto label_1ff940;
        case 0x1ff944u: goto label_1ff944;
        case 0x1ff948u: goto label_1ff948;
        case 0x1ff94cu: goto label_1ff94c;
        case 0x1ff950u: goto label_1ff950;
        case 0x1ff954u: goto label_1ff954;
        case 0x1ff958u: goto label_1ff958;
        case 0x1ff95cu: goto label_1ff95c;
        case 0x1ff960u: goto label_1ff960;
        case 0x1ff964u: goto label_1ff964;
        case 0x1ff968u: goto label_1ff968;
        case 0x1ff96cu: goto label_1ff96c;
        case 0x1ff970u: goto label_1ff970;
        case 0x1ff974u: goto label_1ff974;
        case 0x1ff978u: goto label_1ff978;
        case 0x1ff97cu: goto label_1ff97c;
        case 0x1ff980u: goto label_1ff980;
        case 0x1ff984u: goto label_1ff984;
        case 0x1ff988u: goto label_1ff988;
        case 0x1ff98cu: goto label_1ff98c;
        case 0x1ff990u: goto label_1ff990;
        case 0x1ff994u: goto label_1ff994;
        case 0x1ff998u: goto label_1ff998;
        case 0x1ff99cu: goto label_1ff99c;
        case 0x1ff9a0u: goto label_1ff9a0;
        case 0x1ff9a4u: goto label_1ff9a4;
        case 0x1ff9a8u: goto label_1ff9a8;
        case 0x1ff9acu: goto label_1ff9ac;
        case 0x1ff9b0u: goto label_1ff9b0;
        case 0x1ff9b4u: goto label_1ff9b4;
        case 0x1ff9b8u: goto label_1ff9b8;
        case 0x1ff9bcu: goto label_1ff9bc;
        case 0x1ff9c0u: goto label_1ff9c0;
        case 0x1ff9c4u: goto label_1ff9c4;
        case 0x1ff9c8u: goto label_1ff9c8;
        case 0x1ff9ccu: goto label_1ff9cc;
        case 0x1ff9d0u: goto label_1ff9d0;
        case 0x1ff9d4u: goto label_1ff9d4;
        case 0x1ff9d8u: goto label_1ff9d8;
        case 0x1ff9dcu: goto label_1ff9dc;
        case 0x1ff9e0u: goto label_1ff9e0;
        case 0x1ff9e4u: goto label_1ff9e4;
        case 0x1ff9e8u: goto label_1ff9e8;
        case 0x1ff9ecu: goto label_1ff9ec;
        case 0x1ff9f0u: goto label_1ff9f0;
        case 0x1ff9f4u: goto label_1ff9f4;
        case 0x1ff9f8u: goto label_1ff9f8;
        case 0x1ff9fcu: goto label_1ff9fc;
        case 0x1ffa00u: goto label_1ffa00;
        case 0x1ffa04u: goto label_1ffa04;
        case 0x1ffa08u: goto label_1ffa08;
        case 0x1ffa0cu: goto label_1ffa0c;
        case 0x1ffa10u: goto label_1ffa10;
        case 0x1ffa14u: goto label_1ffa14;
        case 0x1ffa18u: goto label_1ffa18;
        case 0x1ffa1cu: goto label_1ffa1c;
        case 0x1ffa20u: goto label_1ffa20;
        case 0x1ffa24u: goto label_1ffa24;
        case 0x1ffa28u: goto label_1ffa28;
        case 0x1ffa2cu: goto label_1ffa2c;
        case 0x1ffa30u: goto label_1ffa30;
        case 0x1ffa34u: goto label_1ffa34;
        case 0x1ffa38u: goto label_1ffa38;
        case 0x1ffa3cu: goto label_1ffa3c;
        case 0x1ffa40u: goto label_1ffa40;
        case 0x1ffa44u: goto label_1ffa44;
        case 0x1ffa48u: goto label_1ffa48;
        case 0x1ffa4cu: goto label_1ffa4c;
        case 0x1ffa50u: goto label_1ffa50;
        case 0x1ffa54u: goto label_1ffa54;
        case 0x1ffa58u: goto label_1ffa58;
        case 0x1ffa5cu: goto label_1ffa5c;
        case 0x1ffa60u: goto label_1ffa60;
        case 0x1ffa64u: goto label_1ffa64;
        case 0x1ffa68u: goto label_1ffa68;
        case 0x1ffa6cu: goto label_1ffa6c;
        case 0x1ffa70u: goto label_1ffa70;
        case 0x1ffa74u: goto label_1ffa74;
        case 0x1ffa78u: goto label_1ffa78;
        case 0x1ffa7cu: goto label_1ffa7c;
        case 0x1ffa80u: goto label_1ffa80;
        case 0x1ffa84u: goto label_1ffa84;
        case 0x1ffa88u: goto label_1ffa88;
        case 0x1ffa8cu: goto label_1ffa8c;
        case 0x1ffa90u: goto label_1ffa90;
        case 0x1ffa94u: goto label_1ffa94;
        case 0x1ffa98u: goto label_1ffa98;
        case 0x1ffa9cu: goto label_1ffa9c;
        case 0x1ffaa0u: goto label_1ffaa0;
        case 0x1ffaa4u: goto label_1ffaa4;
        case 0x1ffaa8u: goto label_1ffaa8;
        case 0x1ffaacu: goto label_1ffaac;
        case 0x1ffab0u: goto label_1ffab0;
        case 0x1ffab4u: goto label_1ffab4;
        case 0x1ffab8u: goto label_1ffab8;
        case 0x1ffabcu: goto label_1ffabc;
        case 0x1ffac0u: goto label_1ffac0;
        case 0x1ffac4u: goto label_1ffac4;
        case 0x1ffac8u: goto label_1ffac8;
        case 0x1ffaccu: goto label_1ffacc;
        case 0x1ffad0u: goto label_1ffad0;
        case 0x1ffad4u: goto label_1ffad4;
        case 0x1ffad8u: goto label_1ffad8;
        case 0x1ffadcu: goto label_1ffadc;
        case 0x1ffae0u: goto label_1ffae0;
        case 0x1ffae4u: goto label_1ffae4;
        case 0x1ffae8u: goto label_1ffae8;
        case 0x1ffaecu: goto label_1ffaec;
        case 0x1ffaf0u: goto label_1ffaf0;
        case 0x1ffaf4u: goto label_1ffaf4;
        case 0x1ffaf8u: goto label_1ffaf8;
        case 0x1ffafcu: goto label_1ffafc;
        case 0x1ffb00u: goto label_1ffb00;
        case 0x1ffb04u: goto label_1ffb04;
        case 0x1ffb08u: goto label_1ffb08;
        case 0x1ffb0cu: goto label_1ffb0c;
        case 0x1ffb10u: goto label_1ffb10;
        case 0x1ffb14u: goto label_1ffb14;
        case 0x1ffb18u: goto label_1ffb18;
        case 0x1ffb1cu: goto label_1ffb1c;
        case 0x1ffb20u: goto label_1ffb20;
        case 0x1ffb24u: goto label_1ffb24;
        case 0x1ffb28u: goto label_1ffb28;
        case 0x1ffb2cu: goto label_1ffb2c;
        case 0x1ffb30u: goto label_1ffb30;
        case 0x1ffb34u: goto label_1ffb34;
        case 0x1ffb38u: goto label_1ffb38;
        case 0x1ffb3cu: goto label_1ffb3c;
        case 0x1ffb40u: goto label_1ffb40;
        case 0x1ffb44u: goto label_1ffb44;
        case 0x1ffb48u: goto label_1ffb48;
        case 0x1ffb4cu: goto label_1ffb4c;
        case 0x1ffb50u: goto label_1ffb50;
        case 0x1ffb54u: goto label_1ffb54;
        case 0x1ffb58u: goto label_1ffb58;
        case 0x1ffb5cu: goto label_1ffb5c;
        case 0x1ffb60u: goto label_1ffb60;
        case 0x1ffb64u: goto label_1ffb64;
        case 0x1ffb68u: goto label_1ffb68;
        case 0x1ffb6cu: goto label_1ffb6c;
        case 0x1ffb70u: goto label_1ffb70;
        case 0x1ffb74u: goto label_1ffb74;
        case 0x1ffb78u: goto label_1ffb78;
        case 0x1ffb7cu: goto label_1ffb7c;
        case 0x1ffb80u: goto label_1ffb80;
        case 0x1ffb84u: goto label_1ffb84;
        case 0x1ffb88u: goto label_1ffb88;
        case 0x1ffb8cu: goto label_1ffb8c;
        case 0x1ffb90u: goto label_1ffb90;
        case 0x1ffb94u: goto label_1ffb94;
        case 0x1ffb98u: goto label_1ffb98;
        case 0x1ffb9cu: goto label_1ffb9c;
        case 0x1ffba0u: goto label_1ffba0;
        case 0x1ffba4u: goto label_1ffba4;
        case 0x1ffba8u: goto label_1ffba8;
        case 0x1ffbacu: goto label_1ffbac;
        case 0x1ffbb0u: goto label_1ffbb0;
        case 0x1ffbb4u: goto label_1ffbb4;
        case 0x1ffbb8u: goto label_1ffbb8;
        case 0x1ffbbcu: goto label_1ffbbc;
        case 0x1ffbc0u: goto label_1ffbc0;
        case 0x1ffbc4u: goto label_1ffbc4;
        case 0x1ffbc8u: goto label_1ffbc8;
        case 0x1ffbccu: goto label_1ffbcc;
        case 0x1ffbd0u: goto label_1ffbd0;
        case 0x1ffbd4u: goto label_1ffbd4;
        case 0x1ffbd8u: goto label_1ffbd8;
        case 0x1ffbdcu: goto label_1ffbdc;
        case 0x1ffbe0u: goto label_1ffbe0;
        case 0x1ffbe4u: goto label_1ffbe4;
        case 0x1ffbe8u: goto label_1ffbe8;
        case 0x1ffbecu: goto label_1ffbec;
        case 0x1ffbf0u: goto label_1ffbf0;
        case 0x1ffbf4u: goto label_1ffbf4;
        case 0x1ffbf8u: goto label_1ffbf8;
        case 0x1ffbfcu: goto label_1ffbfc;
        case 0x1ffc00u: goto label_1ffc00;
        case 0x1ffc04u: goto label_1ffc04;
        case 0x1ffc08u: goto label_1ffc08;
        case 0x1ffc0cu: goto label_1ffc0c;
        case 0x1ffc10u: goto label_1ffc10;
        case 0x1ffc14u: goto label_1ffc14;
        case 0x1ffc18u: goto label_1ffc18;
        case 0x1ffc1cu: goto label_1ffc1c;
        case 0x1ffc20u: goto label_1ffc20;
        case 0x1ffc24u: goto label_1ffc24;
        case 0x1ffc28u: goto label_1ffc28;
        case 0x1ffc2cu: goto label_1ffc2c;
        case 0x1ffc30u: goto label_1ffc30;
        case 0x1ffc34u: goto label_1ffc34;
        case 0x1ffc38u: goto label_1ffc38;
        case 0x1ffc3cu: goto label_1ffc3c;
        case 0x1ffc40u: goto label_1ffc40;
        case 0x1ffc44u: goto label_1ffc44;
        case 0x1ffc48u: goto label_1ffc48;
        case 0x1ffc4cu: goto label_1ffc4c;
        case 0x1ffc50u: goto label_1ffc50;
        case 0x1ffc54u: goto label_1ffc54;
        case 0x1ffc58u: goto label_1ffc58;
        case 0x1ffc5cu: goto label_1ffc5c;
        case 0x1ffc60u: goto label_1ffc60;
        case 0x1ffc64u: goto label_1ffc64;
        case 0x1ffc68u: goto label_1ffc68;
        case 0x1ffc6cu: goto label_1ffc6c;
        case 0x1ffc70u: goto label_1ffc70;
        case 0x1ffc74u: goto label_1ffc74;
        case 0x1ffc78u: goto label_1ffc78;
        case 0x1ffc7cu: goto label_1ffc7c;
        case 0x1ffc80u: goto label_1ffc80;
        case 0x1ffc84u: goto label_1ffc84;
        case 0x1ffc88u: goto label_1ffc88;
        case 0x1ffc8cu: goto label_1ffc8c;
        case 0x1ffc90u: goto label_1ffc90;
        case 0x1ffc94u: goto label_1ffc94;
        case 0x1ffc98u: goto label_1ffc98;
        case 0x1ffc9cu: goto label_1ffc9c;
        case 0x1ffca0u: goto label_1ffca0;
        case 0x1ffca4u: goto label_1ffca4;
        case 0x1ffca8u: goto label_1ffca8;
        case 0x1ffcacu: goto label_1ffcac;
        case 0x1ffcb0u: goto label_1ffcb0;
        case 0x1ffcb4u: goto label_1ffcb4;
        case 0x1ffcb8u: goto label_1ffcb8;
        case 0x1ffcbcu: goto label_1ffcbc;
        case 0x1ffcc0u: goto label_1ffcc0;
        case 0x1ffcc4u: goto label_1ffcc4;
        case 0x1ffcc8u: goto label_1ffcc8;
        case 0x1ffcccu: goto label_1ffccc;
        case 0x1ffcd0u: goto label_1ffcd0;
        case 0x1ffcd4u: goto label_1ffcd4;
        case 0x1ffcd8u: goto label_1ffcd8;
        case 0x1ffcdcu: goto label_1ffcdc;
        case 0x1ffce0u: goto label_1ffce0;
        case 0x1ffce4u: goto label_1ffce4;
        case 0x1ffce8u: goto label_1ffce8;
        case 0x1ffcecu: goto label_1ffcec;
        case 0x1ffcf0u: goto label_1ffcf0;
        case 0x1ffcf4u: goto label_1ffcf4;
        case 0x1ffcf8u: goto label_1ffcf8;
        case 0x1ffcfcu: goto label_1ffcfc;
        case 0x1ffd00u: goto label_1ffd00;
        case 0x1ffd04u: goto label_1ffd04;
        case 0x1ffd08u: goto label_1ffd08;
        case 0x1ffd0cu: goto label_1ffd0c;
        case 0x1ffd10u: goto label_1ffd10;
        case 0x1ffd14u: goto label_1ffd14;
        case 0x1ffd18u: goto label_1ffd18;
        case 0x1ffd1cu: goto label_1ffd1c;
        case 0x1ffd20u: goto label_1ffd20;
        case 0x1ffd24u: goto label_1ffd24;
        case 0x1ffd28u: goto label_1ffd28;
        case 0x1ffd2cu: goto label_1ffd2c;
        case 0x1ffd30u: goto label_1ffd30;
        case 0x1ffd34u: goto label_1ffd34;
        case 0x1ffd38u: goto label_1ffd38;
        case 0x1ffd3cu: goto label_1ffd3c;
        case 0x1ffd40u: goto label_1ffd40;
        case 0x1ffd44u: goto label_1ffd44;
        case 0x1ffd48u: goto label_1ffd48;
        case 0x1ffd4cu: goto label_1ffd4c;
        case 0x1ffd50u: goto label_1ffd50;
        case 0x1ffd54u: goto label_1ffd54;
        case 0x1ffd58u: goto label_1ffd58;
        case 0x1ffd5cu: goto label_1ffd5c;
        case 0x1ffd60u: goto label_1ffd60;
        case 0x1ffd64u: goto label_1ffd64;
        case 0x1ffd68u: goto label_1ffd68;
        case 0x1ffd6cu: goto label_1ffd6c;
        case 0x1ffd70u: goto label_1ffd70;
        case 0x1ffd74u: goto label_1ffd74;
        case 0x1ffd78u: goto label_1ffd78;
        case 0x1ffd7cu: goto label_1ffd7c;
        case 0x1ffd80u: goto label_1ffd80;
        case 0x1ffd84u: goto label_1ffd84;
        case 0x1ffd88u: goto label_1ffd88;
        case 0x1ffd8cu: goto label_1ffd8c;
        case 0x1ffd90u: goto label_1ffd90;
        case 0x1ffd94u: goto label_1ffd94;
        case 0x1ffd98u: goto label_1ffd98;
        case 0x1ffd9cu: goto label_1ffd9c;
        case 0x1ffda0u: goto label_1ffda0;
        case 0x1ffda4u: goto label_1ffda4;
        case 0x1ffda8u: goto label_1ffda8;
        case 0x1ffdacu: goto label_1ffdac;
        case 0x1ffdb0u: goto label_1ffdb0;
        case 0x1ffdb4u: goto label_1ffdb4;
        case 0x1ffdb8u: goto label_1ffdb8;
        case 0x1ffdbcu: goto label_1ffdbc;
        case 0x1ffdc0u: goto label_1ffdc0;
        case 0x1ffdc4u: goto label_1ffdc4;
        case 0x1ffdc8u: goto label_1ffdc8;
        case 0x1ffdccu: goto label_1ffdcc;
        case 0x1ffdd0u: goto label_1ffdd0;
        case 0x1ffdd4u: goto label_1ffdd4;
        case 0x1ffdd8u: goto label_1ffdd8;
        case 0x1ffddcu: goto label_1ffddc;
        case 0x1ffde0u: goto label_1ffde0;
        case 0x1ffde4u: goto label_1ffde4;
        case 0x1ffde8u: goto label_1ffde8;
        case 0x1ffdecu: goto label_1ffdec;
        case 0x1ffdf0u: goto label_1ffdf0;
        case 0x1ffdf4u: goto label_1ffdf4;
        case 0x1ffdf8u: goto label_1ffdf8;
        case 0x1ffdfcu: goto label_1ffdfc;
        case 0x1ffe00u: goto label_1ffe00;
        case 0x1ffe04u: goto label_1ffe04;
        case 0x1ffe08u: goto label_1ffe08;
        case 0x1ffe0cu: goto label_1ffe0c;
        case 0x1ffe10u: goto label_1ffe10;
        case 0x1ffe14u: goto label_1ffe14;
        case 0x1ffe18u: goto label_1ffe18;
        case 0x1ffe1cu: goto label_1ffe1c;
        case 0x1ffe20u: goto label_1ffe20;
        case 0x1ffe24u: goto label_1ffe24;
        case 0x1ffe28u: goto label_1ffe28;
        case 0x1ffe2cu: goto label_1ffe2c;
        case 0x1ffe30u: goto label_1ffe30;
        case 0x1ffe34u: goto label_1ffe34;
        case 0x1ffe38u: goto label_1ffe38;
        case 0x1ffe3cu: goto label_1ffe3c;
        case 0x1ffe40u: goto label_1ffe40;
        case 0x1ffe44u: goto label_1ffe44;
        case 0x1ffe48u: goto label_1ffe48;
        case 0x1ffe4cu: goto label_1ffe4c;
        case 0x1ffe50u: goto label_1ffe50;
        case 0x1ffe54u: goto label_1ffe54;
        case 0x1ffe58u: goto label_1ffe58;
        case 0x1ffe5cu: goto label_1ffe5c;
        case 0x1ffe60u: goto label_1ffe60;
        case 0x1ffe64u: goto label_1ffe64;
        case 0x1ffe68u: goto label_1ffe68;
        case 0x1ffe6cu: goto label_1ffe6c;
        case 0x1ffe70u: goto label_1ffe70;
        case 0x1ffe74u: goto label_1ffe74;
        case 0x1ffe78u: goto label_1ffe78;
        case 0x1ffe7cu: goto label_1ffe7c;
        case 0x1ffe80u: goto label_1ffe80;
        case 0x1ffe84u: goto label_1ffe84;
        case 0x1ffe88u: goto label_1ffe88;
        case 0x1ffe8cu: goto label_1ffe8c;
        case 0x1ffe90u: goto label_1ffe90;
        case 0x1ffe94u: goto label_1ffe94;
        case 0x1ffe98u: goto label_1ffe98;
        case 0x1ffe9cu: goto label_1ffe9c;
        case 0x1ffea0u: goto label_1ffea0;
        case 0x1ffea4u: goto label_1ffea4;
        case 0x1ffea8u: goto label_1ffea8;
        case 0x1ffeacu: goto label_1ffeac;
        case 0x1ffeb0u: goto label_1ffeb0;
        case 0x1ffeb4u: goto label_1ffeb4;
        case 0x1ffeb8u: goto label_1ffeb8;
        case 0x1ffebcu: goto label_1ffebc;
        case 0x1ffec0u: goto label_1ffec0;
        case 0x1ffec4u: goto label_1ffec4;
        case 0x1ffec8u: goto label_1ffec8;
        case 0x1ffeccu: goto label_1ffecc;
        case 0x1ffed0u: goto label_1ffed0;
        case 0x1ffed4u: goto label_1ffed4;
        case 0x1ffed8u: goto label_1ffed8;
        case 0x1ffedcu: goto label_1ffedc;
        case 0x1ffee0u: goto label_1ffee0;
        case 0x1ffee4u: goto label_1ffee4;
        case 0x1ffee8u: goto label_1ffee8;
        case 0x1ffeecu: goto label_1ffeec;
        case 0x1ffef0u: goto label_1ffef0;
        case 0x1ffef4u: goto label_1ffef4;
        case 0x1ffef8u: goto label_1ffef8;
        case 0x1ffefcu: goto label_1ffefc;
        case 0x1fff00u: goto label_1fff00;
        case 0x1fff04u: goto label_1fff04;
        case 0x1fff08u: goto label_1fff08;
        case 0x1fff0cu: goto label_1fff0c;
        case 0x1fff10u: goto label_1fff10;
        case 0x1fff14u: goto label_1fff14;
        case 0x1fff18u: goto label_1fff18;
        case 0x1fff1cu: goto label_1fff1c;
        case 0x1fff20u: goto label_1fff20;
        case 0x1fff24u: goto label_1fff24;
        case 0x1fff28u: goto label_1fff28;
        case 0x1fff2cu: goto label_1fff2c;
        case 0x1fff30u: goto label_1fff30;
        case 0x1fff34u: goto label_1fff34;
        case 0x1fff38u: goto label_1fff38;
        case 0x1fff3cu: goto label_1fff3c;
        case 0x1fff40u: goto label_1fff40;
        case 0x1fff44u: goto label_1fff44;
        case 0x1fff48u: goto label_1fff48;
        case 0x1fff4cu: goto label_1fff4c;
        case 0x1fff50u: goto label_1fff50;
        case 0x1fff54u: goto label_1fff54;
        case 0x1fff58u: goto label_1fff58;
        case 0x1fff5cu: goto label_1fff5c;
        case 0x1fff60u: goto label_1fff60;
        case 0x1fff64u: goto label_1fff64;
        case 0x1fff68u: goto label_1fff68;
        case 0x1fff6cu: goto label_1fff6c;
        case 0x1fff70u: goto label_1fff70;
        case 0x1fff74u: goto label_1fff74;
        case 0x1fff78u: goto label_1fff78;
        case 0x1fff7cu: goto label_1fff7c;
        case 0x1fff80u: goto label_1fff80;
        case 0x1fff84u: goto label_1fff84;
        case 0x1fff88u: goto label_1fff88;
        case 0x1fff8cu: goto label_1fff8c;
        case 0x1fff90u: goto label_1fff90;
        case 0x1fff94u: goto label_1fff94;
        case 0x1fff98u: goto label_1fff98;
        case 0x1fff9cu: goto label_1fff9c;
        case 0x1fffa0u: goto label_1fffa0;
        case 0x1fffa4u: goto label_1fffa4;
        case 0x1fffa8u: goto label_1fffa8;
        case 0x1fffacu: goto label_1fffac;
        case 0x1fffb0u: goto label_1fffb0;
        case 0x1fffb4u: goto label_1fffb4;
        case 0x1fffb8u: goto label_1fffb8;
        case 0x1fffbcu: goto label_1fffbc;
        case 0x1fffc0u: goto label_1fffc0;
        case 0x1fffc4u: goto label_1fffc4;
        case 0x1fffc8u: goto label_1fffc8;
        case 0x1fffccu: goto label_1fffcc;
        case 0x1fffd0u: goto label_1fffd0;
        case 0x1fffd4u: goto label_1fffd4;
        case 0x1fffd8u: goto label_1fffd8;
        case 0x1fffdcu: goto label_1fffdc;
        case 0x1fffe0u: goto label_1fffe0;
        case 0x1fffe4u: goto label_1fffe4;
        case 0x1fffe8u: goto label_1fffe8;
        case 0x1fffecu: goto label_1fffec;
        case 0x1ffff0u: goto label_1ffff0;
        case 0x1ffff4u: goto label_1ffff4;
        case 0x1ffff8u: goto label_1ffff8;
        case 0x1ffffcu: goto label_1ffffc;
        default: break;
    }

    ctx->pc = 0x1ff590u;

label_1ff590:
    // 0x1ff590: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ff590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1ff594:
    // 0x1ff594: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ff594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1ff598:
    // 0x1ff598: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1ff598u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_1ff59c:
    // 0x1ff59c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1ff59cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1ff5a0:
    // 0x1ff5a0: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1ff5a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1ff5a4:
    // 0x1ff5a4: 0xc064924  jal         func_192490
label_1ff5a8:
    if (ctx->pc == 0x1FF5A8u) {
        ctx->pc = 0x1FF5ACu;
        goto label_1ff5ac;
    }
    ctx->pc = 0x1FF5A4u;
    SET_GPR_U32(ctx, 31, 0x1FF5ACu);
    ctx->pc = 0x192490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192490u, 0x1FF5A4u, 0x1FF5ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF5ACu;
label_1ff5ac:
    // 0x1ff5ac: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1ff5acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_1ff5b0:
    // 0x1ff5b0: 0x24634f40  addiu       $v1, $v1, 0x4F40
    ctx->pc = 0x1ff5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20288));
label_1ff5b4:
    // 0x1ff5b4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1ff5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1ff5b8:
    // 0x1ff5b8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1ff5b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_1ff5bc:
    // 0x1ff5bc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1ff5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1ff5c0:
    // 0x1ff5c0: 0x244400d8  addiu       $a0, $v0, 0xD8
    ctx->pc = 0x1ff5c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 216));
label_1ff5c4:
    // 0x1ff5c4: 0xc056254  jal         func_158950
label_1ff5c8:
    if (ctx->pc == 0x1FF5C8u) {
        ctx->pc = 0x1FF5CCu;
        goto label_1ff5cc;
    }
    ctx->pc = 0x1FF5C4u;
    SET_GPR_U32(ctx, 31, 0x1FF5CCu);
    ctx->pc = 0x158950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158950u, 0x1FF5C4u, 0x1FF5CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF5CCu;
label_1ff5cc:
    // 0x1ff5cc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1ff5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1ff5d0:
    // 0x1ff5d0: 0x244400e8  addiu       $a0, $v0, 0xE8
    ctx->pc = 0x1ff5d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 232));
label_1ff5d4:
    // 0x1ff5d4: 0xc05ef10  jal         func_17BC40
label_1ff5d8:
    if (ctx->pc == 0x1FF5D8u) {
        ctx->pc = 0x1FF5DCu;
        goto label_1ff5dc;
    }
    ctx->pc = 0x1FF5D4u;
    SET_GPR_U32(ctx, 31, 0x1FF5DCu);
    ctx->pc = 0x17BC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17BC40u, 0x1FF5D4u, 0x1FF5DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF5DCu;
label_1ff5dc:
    // 0x1ff5dc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1ff5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1ff5e0:
    // 0x1ff5e0: 0x244400f4  addiu       $a0, $v0, 0xF4
    ctx->pc = 0x1ff5e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 244));
label_1ff5e4:
    // 0x1ff5e4: 0xc056254  jal         func_158950
label_1ff5e8:
    if (ctx->pc == 0x1FF5E8u) {
        ctx->pc = 0x1FF5ECu;
        goto label_1ff5ec;
    }
    ctx->pc = 0x1FF5E4u;
    SET_GPR_U32(ctx, 31, 0x1FF5ECu);
    ctx->pc = 0x158950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158950u, 0x1FF5E4u, 0x1FF5ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF5ECu;
label_1ff5ec:
    // 0x1ff5ec: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1ff5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1ff5f0:
    // 0x1ff5f0: 0x24440148  addiu       $a0, $v0, 0x148
    ctx->pc = 0x1ff5f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 328));
label_1ff5f4:
    // 0x1ff5f4: 0xc06885c  jal         func_1A2170
label_1ff5f8:
    if (ctx->pc == 0x1FF5F8u) {
        ctx->pc = 0x1FF5FCu;
        goto label_1ff5fc;
    }
    ctx->pc = 0x1FF5F4u;
    SET_GPR_U32(ctx, 31, 0x1FF5FCu);
    ctx->pc = 0x1A2170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2170u, 0x1FF5F4u, 0x1FF5FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF5FCu;
label_1ff5fc:
    // 0x1ff5fc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1ff5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1ff600:
    // 0x1ff600: 0x24440154  addiu       $a0, $v0, 0x154
    ctx->pc = 0x1ff600u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 340));
label_1ff604:
    // 0x1ff604: 0xc0480a4  jal         func_120290
label_1ff608:
    if (ctx->pc == 0x1FF608u) {
        ctx->pc = 0x1FF60Cu;
        goto label_1ff60c;
    }
    ctx->pc = 0x1FF604u;
    SET_GPR_U32(ctx, 31, 0x1FF60Cu);
    ctx->pc = 0x120290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120290u, 0x1FF604u, 0x1FF60Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF60Cu;
label_1ff60c:
    // 0x1ff60c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1ff60cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1ff610:
    // 0x1ff610: 0x8f84bbdc  lw          $a0, -0x4424($gp)
    ctx->pc = 0x1ff610u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949852)));
label_1ff614:
    // 0x1ff614: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x1ff614u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
label_1ff618:
    // 0x1ff618: 0x24a58d40  addiu       $a1, $a1, -0x72C0
    ctx->pc = 0x1ff618u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937920));
label_1ff61c:
    // 0x1ff61c: 0x24460064  addiu       $a2, $v0, 0x64
    ctx->pc = 0x1ff61cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
label_1ff620:
    // 0x1ff620: 0xc08e514  jal         func_239450
label_1ff624:
    if (ctx->pc == 0x1FF624u) {
        ctx->pc = 0x1FF628u;
        goto label_1ff628;
    }
    ctx->pc = 0x1FF620u;
    SET_GPR_U32(ctx, 31, 0x1FF628u);
    ctx->pc = 0x239450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239450u, 0x1FF620u, 0x1FF628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF628u;
label_1ff628:
    // 0x1ff628: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1ff628u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1ff62c:
    // 0x1ff62c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1ff62cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1ff630:
    // 0x1ff630: 0xac430078  sw          $v1, 0x78($v0)
    ctx->pc = 0x1ff630u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 120), GPR_U32(ctx, 3));
label_1ff634:
    // 0x1ff634: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1ff634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1ff638:
    // 0x1ff638: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ff638u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ff63c:
    // 0x1ff63c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1ff63cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1ff640:
    // 0x1ff640: 0x3e00008  jr          $ra
label_1ff644:
    if (ctx->pc == 0x1FF644u) {
        ctx->pc = 0x1FF648u;
        goto label_1ff648;
    }
    ctx->pc = 0x1FF640u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FF640u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FF648u;
label_1ff648:
    // 0x1ff648: 0x0  nop
    ctx->pc = 0x1ff648u;
    // NOP
label_1ff64c:
    // 0x1ff64c: 0x0  nop
    ctx->pc = 0x1ff64cu;
    // NOP
label_1ff650:
    // 0x1ff650: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ff650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1ff654:
    // 0x1ff654: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ff654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1ff658:
    // 0x1ff658: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1ff658u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_1ff65c:
    // 0x1ff65c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x1ff65cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
label_1ff660:
    // 0x1ff660: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1ff660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1ff664:
    // 0x1ff664: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
label_1ff668:
    if (ctx->pc == 0x1FF668u) {
        ctx->pc = 0x1FF66Cu;
        goto label_1ff66c;
    }
    ctx->pc = 0x1FF664u;
    {
        const bool branch_taken_0x1ff664 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ff664) {
            ctx->pc = 0x1FF710u;
            goto label_1ff710;
        }
    }
    ctx->pc = 0x1FF66Cu;
label_1ff66c:
    // 0x1ff66c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1ff66cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_1ff670:
    // 0x1ff670: 0x24634f40  addiu       $v1, $v1, 0x4F40
    ctx->pc = 0x1ff670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20288));
label_1ff674:
    // 0x1ff674: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1ff674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1ff678:
    // 0x1ff678: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1ff678u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_1ff67c:
    // 0x1ff67c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1ff67cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1ff680:
    // 0x1ff680: 0x24440154  addiu       $a0, $v0, 0x154
    ctx->pc = 0x1ff680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 340));
label_1ff684:
    // 0x1ff684: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1ff684u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1ff688:
    // 0x1ff688: 0xc048004  jal         func_120010
label_1ff68c:
    if (ctx->pc == 0x1FF68Cu) {
        ctx->pc = 0x1FF690u;
        goto label_1ff690;
    }
    ctx->pc = 0x1FF688u;
    SET_GPR_U32(ctx, 31, 0x1FF690u);
    ctx->pc = 0x120010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120010u, 0x1FF688u, 0x1FF690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF690u;
label_1ff690:
    // 0x1ff690: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1ff690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1ff694:
    // 0x1ff694: 0x24440148  addiu       $a0, $v0, 0x148
    ctx->pc = 0x1ff694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 328));
label_1ff698:
    // 0x1ff698: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1ff698u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1ff69c:
    // 0x1ff69c: 0xc06877c  jal         func_1A1DF0
label_1ff6a0:
    if (ctx->pc == 0x1FF6A0u) {
        ctx->pc = 0x1FF6A4u;
        goto label_1ff6a4;
    }
    ctx->pc = 0x1FF69Cu;
    SET_GPR_U32(ctx, 31, 0x1FF6A4u);
    ctx->pc = 0x1A1DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1DF0u, 0x1FF69Cu, 0x1FF6A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF6A4u;
label_1ff6a4:
    // 0x1ff6a4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1ff6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1ff6a8:
    // 0x1ff6a8: 0x244400f4  addiu       $a0, $v0, 0xF4
    ctx->pc = 0x1ff6a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 244));
label_1ff6ac:
    // 0x1ff6ac: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1ff6acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1ff6b0:
    // 0x1ff6b0: 0xc056094  jal         func_158250
label_1ff6b4:
    if (ctx->pc == 0x1FF6B4u) {
        ctx->pc = 0x1FF6B8u;
        goto label_1ff6b8;
    }
    ctx->pc = 0x1FF6B0u;
    SET_GPR_U32(ctx, 31, 0x1FF6B8u);
    ctx->pc = 0x158250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158250u, 0x1FF6B0u, 0x1FF6B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF6B8u;
label_1ff6b8:
    // 0x1ff6b8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1ff6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1ff6bc:
    // 0x1ff6bc: 0x244400e8  addiu       $a0, $v0, 0xE8
    ctx->pc = 0x1ff6bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 232));
label_1ff6c0:
    // 0x1ff6c0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1ff6c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1ff6c4:
    // 0x1ff6c4: 0xc05ee30  jal         func_17B8C0
label_1ff6c8:
    if (ctx->pc == 0x1FF6C8u) {
        ctx->pc = 0x1FF6CCu;
        goto label_1ff6cc;
    }
    ctx->pc = 0x1FF6C4u;
    SET_GPR_U32(ctx, 31, 0x1FF6CCu);
    ctx->pc = 0x17B8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B8C0u, 0x1FF6C4u, 0x1FF6CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF6CCu;
label_1ff6cc:
    // 0x1ff6cc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1ff6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1ff6d0:
    // 0x1ff6d0: 0x244400d8  addiu       $a0, $v0, 0xD8
    ctx->pc = 0x1ff6d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 216));
label_1ff6d4:
    // 0x1ff6d4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1ff6d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1ff6d8:
    // 0x1ff6d8: 0xc056094  jal         func_158250
label_1ff6dc:
    if (ctx->pc == 0x1FF6DCu) {
        ctx->pc = 0x1FF6E0u;
        goto label_1ff6e0;
    }
    ctx->pc = 0x1FF6D8u;
    SET_GPR_U32(ctx, 31, 0x1FF6E0u);
    ctx->pc = 0x158250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158250u, 0x1FF6D8u, 0x1FF6E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF6E0u;
label_1ff6e0:
    // 0x1ff6e0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1ff6e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1ff6e4:
    // 0x1ff6e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ff6e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ff6e8:
    // 0x1ff6e8: 0xc064970  jal         func_1925C0
label_1ff6ec:
    if (ctx->pc == 0x1FF6ECu) {
        ctx->pc = 0x1FF6F0u;
        goto label_1ff6f0;
    }
    ctx->pc = 0x1FF6E8u;
    SET_GPR_U32(ctx, 31, 0x1FF6F0u);
    ctx->pc = 0x1925C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1925C0u, 0x1FF6E8u, 0x1FF6F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF6F0u;
label_1ff6f0:
    // 0x1ff6f0: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x1ff6f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
label_1ff6f4:
    // 0x1ff6f4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1ff6f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_1ff6f8:
    // 0x1ff6f8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1ff6f8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_1ff6fc:
    // 0x1ff6fc: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
label_1ff700:
    if (ctx->pc == 0x1FF700u) {
        ctx->pc = 0x1FF704u;
        goto label_1ff704;
    }
    ctx->pc = 0x1FF6FCu;
    {
        const bool branch_taken_0x1ff6fc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1ff6fc) {
            ctx->pc = 0x1FF710u;
            goto label_1ff710;
        }
    }
    ctx->pc = 0x1FF704u;
label_1ff704:
    // 0x1ff704: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1ff704u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1ff708:
    // 0x1ff708: 0xc0ba070  jal         func_2E81C0
label_1ff70c:
    if (ctx->pc == 0x1FF70Cu) {
        ctx->pc = 0x1FF710u;
        goto label_1ff710;
    }
    ctx->pc = 0x1FF708u;
    SET_GPR_U32(ctx, 31, 0x1FF710u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x1FF708u, 0x1FF710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF710u;
label_1ff710:
    // 0x1ff710: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1ff710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1ff714:
    // 0x1ff714: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ff714u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ff718:
    // 0x1ff718: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1ff718u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1ff71c:
    // 0x1ff71c: 0x3e00008  jr          $ra
label_1ff720:
    if (ctx->pc == 0x1FF720u) {
        ctx->pc = 0x1FF724u;
        goto label_1ff724;
    }
    ctx->pc = 0x1FF71Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FF71Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FF724u;
label_1ff724:
    // 0x1ff724: 0x0  nop
    ctx->pc = 0x1ff724u;
    // NOP
label_1ff728:
    // 0x1ff728: 0x0  nop
    ctx->pc = 0x1ff728u;
    // NOP
label_1ff72c:
    // 0x1ff72c: 0x0  nop
    ctx->pc = 0x1ff72cu;
    // NOP
label_1ff730:
    // 0x1ff730: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1ff730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1ff734:
    // 0x1ff734: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ff734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1ff738:
    // 0x1ff738: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1ff738u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_1ff73c:
    // 0x1ff73c: 0xa3a50020  sb          $a1, 0x20($sp)
    ctx->pc = 0x1ff73cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 5));
label_1ff740:
    // 0x1ff740: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x1ff740u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
label_1ff744:
    // 0x1ff744: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1ff744u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1ff748:
    // 0x1ff748: 0x93a50020  lbu         $a1, 0x20($sp)
    ctx->pc = 0x1ff748u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
label_1ff74c:
    // 0x1ff74c: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x1ff74cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1ff750:
    // 0x1ff750: 0xc080b58  jal         func_202D60
label_1ff754:
    if (ctx->pc == 0x1FF754u) {
        ctx->pc = 0x1FF758u;
        goto label_1ff758;
    }
    ctx->pc = 0x1FF750u;
    SET_GPR_U32(ctx, 31, 0x1FF758u);
    ctx->pc = 0x202D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202D60u, 0x1FF750u, 0x1FF758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF758u;
label_1ff758:
    // 0x1ff758: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ff758u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ff75c:
    // 0x1ff75c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1ff75cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1ff760:
    // 0x1ff760: 0x3e00008  jr          $ra
label_1ff764:
    if (ctx->pc == 0x1FF764u) {
        ctx->pc = 0x1FF768u;
        goto label_1ff768;
    }
    ctx->pc = 0x1FF760u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FF760u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FF768u;
label_1ff768:
    // 0x1ff768: 0x0  nop
    ctx->pc = 0x1ff768u;
    // NOP
label_1ff76c:
    // 0x1ff76c: 0x0  nop
    ctx->pc = 0x1ff76cu;
    // NOP
label_1ff770:
    // 0x1ff770: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ff770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1ff774:
    // 0x1ff774: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ff774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1ff778:
    // 0x1ff778: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ff778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1ff77c:
    // 0x1ff77c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1ff77cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
label_1ff780:
    // 0x1ff780: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1ff780u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1ff784:
    // 0x1ff784: 0xc064a74  jal         func_1929D0
label_1ff788:
    if (ctx->pc == 0x1FF788u) {
        ctx->pc = 0x1FF78Cu;
        goto label_1ff78c;
    }
    ctx->pc = 0x1FF784u;
    SET_GPR_U32(ctx, 31, 0x1FF78Cu);
    ctx->pc = 0x1929D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1929D0u, 0x1FF784u, 0x1FF78Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF78Cu;
label_1ff78c:
    // 0x1ff78c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x1ff78cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1ff790:
    // 0x1ff790: 0x3c04004f  lui         $a0, 0x4F
    ctx->pc = 0x1ff790u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)79 << 16));
label_1ff794:
    // 0x1ff794: 0x24848d50  addiu       $a0, $a0, -0x72B0
    ctx->pc = 0x1ff794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937936));
label_1ff798:
    // 0x1ff798: 0xc0ac004  jal         func_2B0010
label_1ff79c:
    if (ctx->pc == 0x1FF79Cu) {
        ctx->pc = 0x1FF7A0u;
        goto label_1ff7a0;
    }
    ctx->pc = 0x1FF798u;
    SET_GPR_U32(ctx, 31, 0x1FF7A0u);
    ctx->pc = 0x2B0010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B0010u, 0x1FF798u, 0x1FF7A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF7A0u;
label_1ff7a0:
    // 0x1ff7a0: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1ff7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1ff7a4:
    // 0x1ff7a4: 0xac620060  sw          $v0, 0x60($v1)
    ctx->pc = 0x1ff7a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 2));
label_1ff7a8:
    // 0x1ff7a8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1ff7a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ff7ac:
    // 0x1ff7ac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ff7acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1ff7b0:
    // 0x1ff7b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ff7b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1ff7b4:
    // 0x1ff7b4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1ff7b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1ff7b8:
    // 0x1ff7b8: 0x3e00008  jr          $ra
label_1ff7bc:
    if (ctx->pc == 0x1FF7BCu) {
        ctx->pc = 0x1FF7C0u;
        goto label_1ff7c0;
    }
    ctx->pc = 0x1FF7B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FF7B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FF7C0u;
label_1ff7c0:
    // 0x1ff7c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ff7c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1ff7c4:
    // 0x1ff7c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ff7c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1ff7c8:
    // 0x1ff7c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ff7c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1ff7cc:
    // 0x1ff7cc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1ff7ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
label_1ff7d0:
    // 0x1ff7d0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1ff7d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1ff7d4:
    // 0x1ff7d4: 0xc064adc  jal         func_192B70
label_1ff7d8:
    if (ctx->pc == 0x1FF7D8u) {
        ctx->pc = 0x1FF7DCu;
        goto label_1ff7dc;
    }
    ctx->pc = 0x1FF7D4u;
    SET_GPR_U32(ctx, 31, 0x1FF7DCu);
    ctx->pc = 0x192B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B70u, 0x1FF7D4u, 0x1FF7DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF7DCu;
label_1ff7dc:
    // 0x1ff7dc: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x1ff7dcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1ff7e0:
    // 0x1ff7e0: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x1ff7e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
label_1ff7e4:
    // 0x1ff7e4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ff7e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ff7e8:
    // 0x1ff7e8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ff7e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ff7ec:
    // 0x1ff7ec: 0xc08f740  jal         func_23DD00
label_1ff7f0:
    if (ctx->pc == 0x1FF7F0u) {
        ctx->pc = 0x1FF7F4u;
        goto label_1ff7f4;
    }
    ctx->pc = 0x1FF7ECu;
    SET_GPR_U32(ctx, 31, 0x1FF7F4u);
    ctx->pc = 0x23DD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23DD00u, 0x1FF7ECu, 0x1FF7F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF7F4u;
label_1ff7f4:
    // 0x1ff7f4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1ff7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1ff7f8:
    // 0x1ff7f8: 0x8c440060  lw          $a0, 0x60($v0)
    ctx->pc = 0x1ff7f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_1ff7fc:
    // 0x1ff7fc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ff7fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ff800:
    // 0x1ff800: 0xc0ac13c  jal         func_2B04F0
label_1ff804:
    if (ctx->pc == 0x1FF804u) {
        ctx->pc = 0x1FF808u;
        goto label_1ff808;
    }
    ctx->pc = 0x1FF800u;
    SET_GPR_U32(ctx, 31, 0x1FF808u);
    ctx->pc = 0x2B04F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B04F0u, 0x1FF800u, 0x1FF808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF808u;
label_1ff808:
    // 0x1ff808: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1ff808u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ff80c:
    // 0x1ff80c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ff80cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1ff810:
    // 0x1ff810: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ff810u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1ff814:
    // 0x1ff814: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1ff814u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1ff818:
    // 0x1ff818: 0x3e00008  jr          $ra
label_1ff81c:
    if (ctx->pc == 0x1FF81Cu) {
        ctx->pc = 0x1FF820u;
        goto label_1ff820;
    }
    ctx->pc = 0x1FF818u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FF818u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FF820u;
label_1ff820:
    // 0x1ff820: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x1ff820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
label_1ff824:
    // 0x1ff824: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1ff824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_1ff828:
    // 0x1ff828: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x1ff828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_1ff82c:
    // 0x1ff82c: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x1ff82cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_1ff830:
    // 0x1ff830: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1ff830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_1ff834:
    // 0x1ff834: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1ff834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_1ff838:
    // 0x1ff838: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1ff838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_1ff83c:
    // 0x1ff83c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1ff83cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_1ff840:
    // 0x1ff840: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1ff840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1ff844:
    // 0x1ff844: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1ff844u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1ff848:
    // 0x1ff848: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x1ff848u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1ff84c:
    // 0x1ff84c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1ff84cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1ff850:
    // 0x1ff850: 0xafa40140  sw          $a0, 0x140($sp)
    ctx->pc = 0x1ff850u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 4));
label_1ff854:
    // 0x1ff854: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x1ff854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_1ff858:
    // 0x1ff858: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x1ff858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ff85c:
    // 0x1ff85c: 0xe7a0013c  swc1        $f0, 0x13C($sp)
    ctx->pc = 0x1ff85cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
label_1ff860:
    // 0x1ff860: 0xc0b06cc  jal         func_2C1B30
label_1ff864:
    if (ctx->pc == 0x1FF864u) {
        ctx->pc = 0x1FF868u;
        goto label_1ff868;
    }
    ctx->pc = 0x1FF860u;
    SET_GPR_U32(ctx, 31, 0x1FF868u);
    ctx->pc = 0x2C1B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1B30u, 0x1FF860u, 0x1FF868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF868u;
label_1ff868:
    // 0x1ff868: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ff868u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ff86c:
    // 0x1ff86c: 0xc0b06c4  jal         func_2C1B10
label_1ff870:
    if (ctx->pc == 0x1FF870u) {
        ctx->pc = 0x1FF874u;
        goto label_1ff874;
    }
    ctx->pc = 0x1FF86Cu;
    SET_GPR_U32(ctx, 31, 0x1FF874u);
    ctx->pc = 0x2C1B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1B10u, 0x1FF86Cu, 0x1FF874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF874u;
label_1ff874:
    // 0x1ff874: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x1ff874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_1ff878:
    // 0x1ff878: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ff878u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ff87c:
    // 0x1ff87c: 0x24650148  addiu       $a1, $v1, 0x148
    ctx->pc = 0x1ff87cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 328));
label_1ff880:
    // 0x1ff880: 0xc0b4374  jal         func_2D0DD0
label_1ff884:
    if (ctx->pc == 0x1FF884u) {
        ctx->pc = 0x1FF888u;
        goto label_1ff888;
    }
    ctx->pc = 0x1FF880u;
    SET_GPR_U32(ctx, 31, 0x1FF888u);
    ctx->pc = 0x2D0DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0DD0u, 0x1FF880u, 0x1FF888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF888u;
label_1ff888:
    // 0x1ff888: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x1ff888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_1ff88c:
    // 0x1ff88c: 0x24440148  addiu       $a0, $v0, 0x148
    ctx->pc = 0x1ff88cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 328));
label_1ff890:
    // 0x1ff890: 0xc068ea0  jal         func_1A3A80
label_1ff894:
    if (ctx->pc == 0x1FF894u) {
        ctx->pc = 0x1FF898u;
        goto label_1ff898;
    }
    ctx->pc = 0x1FF890u;
    SET_GPR_U32(ctx, 31, 0x1FF898u);
    ctx->pc = 0x1A3A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3A80u, 0x1FF890u, 0x1FF898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF898u;
label_1ff898:
    // 0x1ff898: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1ff898u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ff89c:
    // 0x1ff89c: 0x10000095  b           . + 4 + (0x95 << 2)
label_1ff8a0:
    if (ctx->pc == 0x1FF8A0u) {
        ctx->pc = 0x1FF8A4u;
        goto label_1ff8a4;
    }
    ctx->pc = 0x1FF89Cu;
    {
        const bool branch_taken_0x1ff89c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ff89c) {
            ctx->pc = 0x1FFAF4u;
            goto label_1ffaf4;
        }
    }
    ctx->pc = 0x1FF8A4u;
label_1ff8a4:
    // 0x1ff8a4: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x1ff8a4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1ff8a8:
    // 0x1ff8a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ff8a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ff8ac:
    // 0x1ff8ac: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1ff8acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1ff8b0:
    // 0x1ff8b0: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x1ff8b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_1ff8b4:
    // 0x1ff8b4: 0x320f809  jalr        $t9
label_1ff8b8:
    if (ctx->pc == 0x1FF8B8u) {
        ctx->pc = 0x1FF8BCu;
        goto label_1ff8bc;
    }
    ctx->pc = 0x1FF8B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1FF8BCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FF8B4u, 0x1FF8BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FF8BCu;
label_1ff8bc:
    // 0x1ff8bc: 0x8e04002c  lw          $a0, 0x2C($s0)
    ctx->pc = 0x1ff8bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_1ff8c0:
    // 0x1ff8c0: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x1ff8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
label_1ff8c4:
    // 0x1ff8c4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1ff8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1ff8c8:
    // 0x1ff8c8: 0x14820078  bne         $a0, $v0, . + 4 + (0x78 << 2)
label_1ff8cc:
    if (ctx->pc == 0x1FF8CCu) {
        ctx->pc = 0x1FF8D0u;
        goto label_1ff8d0;
    }
    ctx->pc = 0x1FF8C8u;
    {
        const bool branch_taken_0x1ff8c8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ff8c8) {
            ctx->pc = 0x1FFAACu;
            goto label_1ffaac;
        }
    }
    ctx->pc = 0x1FF8D0u;
label_1ff8d0:
    // 0x1ff8d0: 0x8f93bcc4  lw          $s3, -0x433C($gp)
    ctx->pc = 0x1ff8d0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
label_1ff8d4:
    // 0x1ff8d4: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x1ff8d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1ff8d8:
    // 0x1ff8d8: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1ff8d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_1ff8dc:
    // 0x1ff8dc: 0xc085538  jal         func_2154E0
label_1ff8e0:
    if (ctx->pc == 0x1FF8E0u) {
        ctx->pc = 0x1FF8E4u;
        goto label_1ff8e4;
    }
    ctx->pc = 0x1FF8DCu;
    SET_GPR_U32(ctx, 31, 0x1FF8E4u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x1FF8DCu, 0x1FF8E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF8E4u;
label_1ff8e4:
    // 0x1ff8e4: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x1ff8e4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ff8e8:
    // 0x1ff8e8: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1ff8e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1ff8ec:
    // 0x1ff8ec: 0xc096fd8  jal         func_25BF60
label_1ff8f0:
    if (ctx->pc == 0x1FF8F0u) {
        ctx->pc = 0x1FF8F4u;
        goto label_1ff8f4;
    }
    ctx->pc = 0x1FF8ECu;
    SET_GPR_U32(ctx, 31, 0x1FF8F4u);
    ctx->pc = 0x25BF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BF60u, 0x1FF8ECu, 0x1FF8F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF8F4u;
label_1ff8f4:
    // 0x1ff8f4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1ff8f4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ff8f8:
    // 0x1ff8f8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1ff8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1ff8fc:
    // 0x1ff8fc: 0x16830020  bne         $s4, $v1, . + 4 + (0x20 << 2)
label_1ff900:
    if (ctx->pc == 0x1FF900u) {
        ctx->pc = 0x1FF904u;
        goto label_1ff904;
    }
    ctx->pc = 0x1FF8FCu;
    {
        const bool branch_taken_0x1ff8fc = (GPR_U64(ctx, 20) != GPR_U64(ctx, 3));
        if (branch_taken_0x1ff8fc) {
            ctx->pc = 0x1FF980u;
            goto label_1ff980;
        }
    }
    ctx->pc = 0x1FF904u;
label_1ff904:
    // 0x1ff904: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x1ff904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_1ff908:
    // 0x1ff908: 0x8c7300bc  lw          $s3, 0xBC($v1)
    ctx->pc = 0x1ff908u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
label_1ff90c:
    // 0x1ff90c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1ff90cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1ff910:
    // 0x1ff910: 0x1262001b  beq         $s3, $v0, . + 4 + (0x1B << 2)
label_1ff914:
    if (ctx->pc == 0x1FF914u) {
        ctx->pc = 0x1FF918u;
        goto label_1ff918;
    }
    ctx->pc = 0x1FF910u;
    {
        const bool branch_taken_0x1ff910 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ff910) {
            ctx->pc = 0x1FF980u;
            goto label_1ff980;
        }
    }
    ctx->pc = 0x1FF918u;
label_1ff918:
    // 0x1ff918: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1ff918u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1ff91c:
    // 0x1ff91c: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x1ff91cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_1ff920:
    // 0x1ff920: 0xac4300bc  sw          $v1, 0xBC($v0)
    ctx->pc = 0x1ff920u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 188), GPR_U32(ctx, 3));
label_1ff924:
    // 0x1ff924: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x1ff924u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_1ff928:
    // 0x1ff928: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ff928u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ff92c:
    // 0x1ff92c: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x1ff92cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_1ff930:
    // 0x1ff930: 0xe44000b8  swc1        $f0, 0xB8($v0)
    ctx->pc = 0x1ff930u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 184), bits); }
label_1ff934:
    // 0x1ff934: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x1ff934u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_1ff938:
    // 0x1ff938: 0xc09ac08  jal         func_26B020
label_1ff93c:
    if (ctx->pc == 0x1FF93Cu) {
        ctx->pc = 0x1FF940u;
        goto label_1ff940;
    }
    ctx->pc = 0x1FF938u;
    SET_GPR_U32(ctx, 31, 0x1FF940u);
    ctx->pc = 0x26B020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B020u, 0x1FF938u, 0x1FF940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF940u;
label_1ff940:
    // 0x1ff940: 0x8fb10140  lw          $s1, 0x140($sp)
    ctx->pc = 0x1ff940u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_1ff944:
    // 0x1ff944: 0x26240154  addiu       $a0, $s1, 0x154
    ctx->pc = 0x1ff944u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 340));
label_1ff948:
    // 0x1ff948: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1ff948u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1ff94c:
    // 0x1ff94c: 0xc068170  jal         func_1A05C0
label_1ff950:
    if (ctx->pc == 0x1FF950u) {
        ctx->pc = 0x1FF954u;
        goto label_1ff954;
    }
    ctx->pc = 0x1FF94Cu;
    SET_GPR_U32(ctx, 31, 0x1FF954u);
    ctx->pc = 0x1A05C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A05C0u, 0x1FF94Cu, 0x1FF954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF954u;
label_1ff954:
    // 0x1ff954: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1ff954u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1ff958:
    // 0x1ff958: 0xafa50124  sw          $a1, 0x124($sp)
    ctx->pc = 0x1ff958u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 5));
label_1ff95c:
    // 0x1ff95c: 0x8f84bcc4  lw          $a0, -0x433C($gp)
    ctx->pc = 0x1ff95cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
label_1ff960:
    // 0x1ff960: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1ff960u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1ff964:
    // 0x1ff964: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x1ff964u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_1ff968:
    // 0x1ff968: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1ff968u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ff96c:
    // 0x1ff96c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ff96cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ff970:
    // 0x1ff970: 0xc0af03c  jal         func_2BC0F0
label_1ff974:
    if (ctx->pc == 0x1FF974u) {
        ctx->pc = 0x1FF978u;
        goto label_1ff978;
    }
    ctx->pc = 0x1FF970u;
    SET_GPR_U32(ctx, 31, 0x1FF978u);
    ctx->pc = 0x2BC0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC0F0u, 0x1FF970u, 0x1FF978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF978u;
label_1ff978:
    // 0x1ff978: 0x1000005d  b           . + 4 + (0x5D << 2)
label_1ff97c:
    if (ctx->pc == 0x1FF97Cu) {
        ctx->pc = 0x1FF980u;
        goto label_1ff980;
    }
    ctx->pc = 0x1FF978u;
    {
        const bool branch_taken_0x1ff978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ff978) {
            ctx->pc = 0x1FFAF0u;
            goto label_1ffaf0;
        }
    }
    ctx->pc = 0x1FF980u;
label_1ff980:
    // 0x1ff980: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ff980u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ff984:
    // 0x1ff984: 0xc063dd0  jal         func_18F740
label_1ff988:
    if (ctx->pc == 0x1FF988u) {
        ctx->pc = 0x1FF98Cu;
        goto label_1ff98c;
    }
    ctx->pc = 0x1FF984u;
    SET_GPR_U32(ctx, 31, 0x1FF98Cu);
    ctx->pc = 0x18F740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F740u, 0x1FF984u, 0x1FF98Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF98Cu;
label_1ff98c:
    // 0x1ff98c: 0x14400058  bnez        $v0, . + 4 + (0x58 << 2)
label_1ff990:
    if (ctx->pc == 0x1FF990u) {
        ctx->pc = 0x1FF994u;
        goto label_1ff994;
    }
    ctx->pc = 0x1FF98Cu;
    {
        const bool branch_taken_0x1ff98c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ff98c) {
            ctx->pc = 0x1FFAF0u;
            goto label_1ffaf0;
        }
    }
    ctx->pc = 0x1FF994u;
label_1ff994:
    // 0x1ff994: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1ff994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1ff998:
    // 0x1ff998: 0x12820055  beq         $s4, $v0, . + 4 + (0x55 << 2)
label_1ff99c:
    if (ctx->pc == 0x1FF99Cu) {
        ctx->pc = 0x1FF9A0u;
        goto label_1ff9a0;
    }
    ctx->pc = 0x1FF998u;
    {
        const bool branch_taken_0x1ff998 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ff998) {
            ctx->pc = 0x1FFAF0u;
            goto label_1ffaf0;
        }
    }
    ctx->pc = 0x1FF9A0u;
label_1ff9a0:
    // 0x1ff9a0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1ff9a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1ff9a4:
    // 0x1ff9a4: 0x12850052  beq         $s4, $a1, . + 4 + (0x52 << 2)
label_1ff9a8:
    if (ctx->pc == 0x1FF9A8u) {
        ctx->pc = 0x1FF9ACu;
        goto label_1ff9ac;
    }
    ctx->pc = 0x1FF9A4u;
    {
        const bool branch_taken_0x1ff9a4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 5));
        if (branch_taken_0x1ff9a4) {
            ctx->pc = 0x1FFAF0u;
            goto label_1ffaf0;
        }
    }
    ctx->pc = 0x1FF9ACu;
label_1ff9ac:
    // 0x1ff9ac: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x1ff9acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_1ff9b0:
    // 0x1ff9b0: 0x8c8200bc  lw          $v0, 0xBC($a0)
    ctx->pc = 0x1ff9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 188)));
label_1ff9b4:
    // 0x1ff9b4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1ff9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1ff9b8:
    // 0x1ff9b8: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
label_1ff9bc:
    if (ctx->pc == 0x1FF9BCu) {
        ctx->pc = 0x1FF9C0u;
        goto label_1ff9c0;
    }
    ctx->pc = 0x1FF9B8u;
    {
        const bool branch_taken_0x1ff9b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1ff9b8) {
            ctx->pc = 0x1FF9D4u;
            goto label_1ff9d4;
        }
    }
    ctx->pc = 0x1FF9C0u;
label_1ff9c0:
    // 0x1ff9c0: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x1ff9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_1ff9c4:
    // 0x1ff9c4: 0x8c4300bc  lw          $v1, 0xBC($v0)
    ctx->pc = 0x1ff9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
label_1ff9c8:
    // 0x1ff9c8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1ff9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1ff9cc:
    // 0x1ff9cc: 0x14620014  bne         $v1, $v0, . + 4 + (0x14 << 2)
label_1ff9d0:
    if (ctx->pc == 0x1FF9D0u) {
        ctx->pc = 0x1FF9D4u;
        goto label_1ff9d4;
    }
    ctx->pc = 0x1FF9CCu;
    {
        const bool branch_taken_0x1ff9cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ff9cc) {
            ctx->pc = 0x1FFA20u;
            goto label_1ffa20;
        }
    }
    ctx->pc = 0x1FF9D4u;
label_1ff9d4:
    // 0x1ff9d4: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1ff9d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_1ff9d8:
    // 0x1ff9d8: 0xc09ac08  jal         func_26B020
label_1ff9dc:
    if (ctx->pc == 0x1FF9DCu) {
        ctx->pc = 0x1FF9E0u;
        goto label_1ff9e0;
    }
    ctx->pc = 0x1FF9D8u;
    SET_GPR_U32(ctx, 31, 0x1FF9E0u);
    ctx->pc = 0x26B020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B020u, 0x1FF9D8u, 0x1FF9E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF9E0u;
label_1ff9e0:
    // 0x1ff9e0: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x1ff9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_1ff9e4:
    // 0x1ff9e4: 0x24640154  addiu       $a0, $v1, 0x154
    ctx->pc = 0x1ff9e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 340));
label_1ff9e8:
    // 0x1ff9e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ff9e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ff9ec:
    // 0x1ff9ec: 0xc068170  jal         func_1A05C0
label_1ff9f0:
    if (ctx->pc == 0x1FF9F0u) {
        ctx->pc = 0x1FF9F4u;
        goto label_1ff9f4;
    }
    ctx->pc = 0x1FF9ECu;
    SET_GPR_U32(ctx, 31, 0x1FF9F4u);
    ctx->pc = 0x1A05C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A05C0u, 0x1FF9ECu, 0x1FF9F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF9F4u;
label_1ff9f4:
    // 0x1ff9f4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1ff9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1ff9f8:
    // 0x1ff9f8: 0xafa20114  sw          $v0, 0x114($sp)
    ctx->pc = 0x1ff9f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 276), GPR_U32(ctx, 2));
label_1ff9fc:
    // 0x1ff9fc: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x1ff9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
label_1ffa00:
    // 0x1ffa00: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1ffa00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1ffa04:
    // 0x1ffa04: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x1ffa04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_1ffa08:
    // 0x1ffa08: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1ffa08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ffa0c:
    // 0x1ffa0c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ffa0cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ffa10:
    // 0x1ffa10: 0xc0af03c  jal         func_2BC0F0
label_1ffa14:
    if (ctx->pc == 0x1FFA14u) {
        ctx->pc = 0x1FFA18u;
        goto label_1ffa18;
    }
    ctx->pc = 0x1FFA10u;
    SET_GPR_U32(ctx, 31, 0x1FFA18u);
    ctx->pc = 0x2BC0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC0F0u, 0x1FFA10u, 0x1FFA18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFA18u;
label_1ffa18:
    // 0x1ffa18: 0x10000035  b           . + 4 + (0x35 << 2)
label_1ffa1c:
    if (ctx->pc == 0x1FFA1Cu) {
        ctx->pc = 0x1FFA20u;
        goto label_1ffa20;
    }
    ctx->pc = 0x1FFA18u;
    {
        const bool branch_taken_0x1ffa18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ffa18) {
            ctx->pc = 0x1FFAF0u;
            goto label_1ffaf0;
        }
    }
    ctx->pc = 0x1FFA20u;
label_1ffa20:
    // 0x1ffa20: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x1ffa20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_1ffa24:
    // 0x1ffa24: 0xac4000bc  sw          $zero, 0xBC($v0)
    ctx->pc = 0x1ffa24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 188), GPR_U32(ctx, 0));
label_1ffa28:
    // 0x1ffa28: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x1ffa28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_1ffa2c:
    // 0x1ffa2c: 0xc09ac08  jal         func_26B020
label_1ffa30:
    if (ctx->pc == 0x1FFA30u) {
        ctx->pc = 0x1FFA34u;
        goto label_1ffa34;
    }
    ctx->pc = 0x1FFA2Cu;
    SET_GPR_U32(ctx, 31, 0x1FFA34u);
    ctx->pc = 0x26B020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B020u, 0x1FFA2Cu, 0x1FFA34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFA34u;
label_1ffa34:
    // 0x1ffa34: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x1ffa34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_1ffa38:
    // 0x1ffa38: 0x24440154  addiu       $a0, $v0, 0x154
    ctx->pc = 0x1ffa38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 340));
label_1ffa3c:
    // 0x1ffa3c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ffa3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ffa40:
    // 0x1ffa40: 0xc068170  jal         func_1A05C0
label_1ffa44:
    if (ctx->pc == 0x1FFA44u) {
        ctx->pc = 0x1FFA48u;
        goto label_1ffa48;
    }
    ctx->pc = 0x1FFA40u;
    SET_GPR_U32(ctx, 31, 0x1FFA48u);
    ctx->pc = 0x1A05C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A05C0u, 0x1FFA40u, 0x1FFA48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFA48u;
label_1ffa48:
    // 0x1ffa48: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1ffa48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1ffa4c:
    // 0x1ffa4c: 0xafa20104  sw          $v0, 0x104($sp)
    ctx->pc = 0x1ffa4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 2));
label_1ffa50:
    // 0x1ffa50: 0x8f83bcc4  lw          $v1, -0x433C($gp)
    ctx->pc = 0x1ffa50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
label_1ffa54:
    // 0x1ffa54: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x1ffa54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1ffa58:
    // 0x1ffa58: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1ffa58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1ffa5c:
    // 0x1ffa5c: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x1ffa5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_1ffa60:
    // 0x1ffa60: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1ffa60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ffa64:
    // 0x1ffa64: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ffa64u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ffa68:
    // 0x1ffa68: 0xc0af03c  jal         func_2BC0F0
label_1ffa6c:
    if (ctx->pc == 0x1FFA6Cu) {
        ctx->pc = 0x1FFA70u;
        goto label_1ffa70;
    }
    ctx->pc = 0x1FFA68u;
    SET_GPR_U32(ctx, 31, 0x1FFA70u);
    ctx->pc = 0x2BC0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC0F0u, 0x1FFA68u, 0x1FFA70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFA70u;
label_1ffa70:
    // 0x1ffa70: 0xc0b06cc  jal         func_2C1B30
label_1ffa74:
    if (ctx->pc == 0x1FFA74u) {
        ctx->pc = 0x1FFA78u;
        goto label_1ffa78;
    }
    ctx->pc = 0x1FFA70u;
    SET_GPR_U32(ctx, 31, 0x1FFA78u);
    ctx->pc = 0x2C1B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1B30u, 0x1FFA70u, 0x1FFA78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFA78u;
label_1ffa78:
    // 0x1ffa78: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ffa78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ffa7c:
    // 0x1ffa7c: 0xc0b06c4  jal         func_2C1B10
label_1ffa80:
    if (ctx->pc == 0x1FFA80u) {
        ctx->pc = 0x1FFA84u;
        goto label_1ffa84;
    }
    ctx->pc = 0x1FFA7Cu;
    SET_GPR_U32(ctx, 31, 0x1FFA84u);
    ctx->pc = 0x2C1B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1B10u, 0x1FFA7Cu, 0x1FFA84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFA84u;
label_1ffa84:
    // 0x1ffa84: 0x8f85bcc4  lw          $a1, -0x433C($gp)
    ctx->pc = 0x1ffa84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
label_1ffa88:
    // 0x1ffa88: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x1ffa88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_1ffa8c:
    // 0x1ffa8c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ffa8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ffa90:
    // 0x1ffa90: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x1ffa90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1ffa94:
    // 0x1ffa94: 0x246600c0  addiu       $a2, $v1, 0xC0
    ctx->pc = 0x1ffa94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 192));
label_1ffa98:
    // 0x1ffa98: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ffa98u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ffa9c:
    // 0x1ffa9c: 0xc0b43b8  jal         func_2D0EE0
label_1ffaa0:
    if (ctx->pc == 0x1FFAA0u) {
        ctx->pc = 0x1FFAA4u;
        goto label_1ffaa4;
    }
    ctx->pc = 0x1FFA9Cu;
    SET_GPR_U32(ctx, 31, 0x1FFAA4u);
    ctx->pc = 0x2D0EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0EE0u, 0x1FFA9Cu, 0x1FFAA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFAA4u;
label_1ffaa4:
    // 0x1ffaa4: 0x10000012  b           . + 4 + (0x12 << 2)
label_1ffaa8:
    if (ctx->pc == 0x1FFAA8u) {
        ctx->pc = 0x1FFAACu;
        goto label_1ffaac;
    }
    ctx->pc = 0x1FFAA4u;
    {
        const bool branch_taken_0x1ffaa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ffaa4) {
            ctx->pc = 0x1FFAF0u;
            goto label_1ffaf0;
        }
    }
    ctx->pc = 0x1FFAACu;
label_1ffaac:
    // 0x1ffaac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ffaacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ffab0:
    // 0x1ffab0: 0xc063dd0  jal         func_18F740
label_1ffab4:
    if (ctx->pc == 0x1FFAB4u) {
        ctx->pc = 0x1FFAB8u;
        goto label_1ffab8;
    }
    ctx->pc = 0x1FFAB0u;
    SET_GPR_U32(ctx, 31, 0x1FFAB8u);
    ctx->pc = 0x18F740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F740u, 0x1FFAB0u, 0x1FFAB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFAB8u;
label_1ffab8:
    // 0x1ffab8: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_1ffabc:
    if (ctx->pc == 0x1FFABCu) {
        ctx->pc = 0x1FFAC0u;
        goto label_1ffac0;
    }
    ctx->pc = 0x1FFAB8u;
    {
        const bool branch_taken_0x1ffab8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ffab8) {
            ctx->pc = 0x1FFAF0u;
            goto label_1ffaf0;
        }
    }
    ctx->pc = 0x1FFAC0u;
label_1ffac0:
    // 0x1ffac0: 0x8e06002c  lw          $a2, 0x2C($s0)
    ctx->pc = 0x1ffac0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_1ffac4:
    // 0x1ffac4: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1ffac4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1ffac8:
    // 0x1ffac8: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1ffac8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_1ffacc:
    // 0x1ffacc: 0xc085538  jal         func_2154E0
label_1ffad0:
    if (ctx->pc == 0x1FFAD0u) {
        ctx->pc = 0x1FFAD4u;
        goto label_1ffad4;
    }
    ctx->pc = 0x1FFACCu;
    SET_GPR_U32(ctx, 31, 0x1FFAD4u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x1FFACCu, 0x1FFAD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFAD4u;
label_1ffad4:
    // 0x1ffad4: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1ffad4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ffad8:
    // 0x1ffad8: 0xc0b06cc  jal         func_2C1B30
label_1ffadc:
    if (ctx->pc == 0x1FFADCu) {
        ctx->pc = 0x1FFAE0u;
        goto label_1ffae0;
    }
    ctx->pc = 0x1FFAD8u;
    SET_GPR_U32(ctx, 31, 0x1FFAE0u);
    ctx->pc = 0x2C1B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1B30u, 0x1FFAD8u, 0x1FFAE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFAE0u;
label_1ffae0:
    // 0x1ffae0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ffae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ffae4:
    // 0x1ffae4: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1ffae4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1ffae8:
    // 0x1ffae8: 0xc0b0a44  jal         func_2C2910
label_1ffaec:
    if (ctx->pc == 0x1FFAECu) {
        ctx->pc = 0x1FFAF0u;
        goto label_1ffaf0;
    }
    ctx->pc = 0x1FFAE8u;
    SET_GPR_U32(ctx, 31, 0x1FFAF0u);
    ctx->pc = 0x2C2910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2910u, 0x1FFAE8u, 0x1FFAF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFAF0u;
label_1ffaf0:
    // 0x1ffaf0: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x1ffaf0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_1ffaf4:
    // 0x1ffaf4: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x1ffaf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_1ffaf8:
    // 0x1ffaf8: 0x24440148  addiu       $a0, $v0, 0x148
    ctx->pc = 0x1ffaf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 328));
label_1ffafc:
    // 0x1ffafc: 0xc068e98  jal         func_1A3A60
label_1ffb00:
    if (ctx->pc == 0x1FFB00u) {
        ctx->pc = 0x1FFB04u;
        goto label_1ffb04;
    }
    ctx->pc = 0x1FFAFCu;
    SET_GPR_U32(ctx, 31, 0x1FFB04u);
    ctx->pc = 0x1A3A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3A60u, 0x1FFAFCu, 0x1FFB04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFB04u;
label_1ffb04:
    // 0x1ffb04: 0x1642ff67  bne         $s2, $v0, . + 4 + (-0x99 << 2)
label_1ffb08:
    if (ctx->pc == 0x1FFB08u) {
        ctx->pc = 0x1FFB0Cu;
        goto label_1ffb0c;
    }
    ctx->pc = 0x1FFB04u;
    {
        const bool branch_taken_0x1ffb04 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ffb04) {
            ctx->pc = 0x1FF8A4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ff8a4;
        }
    }
    ctx->pc = 0x1FFB0Cu;
label_1ffb0c:
    // 0x1ffb0c: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x1ffb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_1ffb10:
    // 0x1ffb10: 0xc44100cc  lwc1        $f1, 0xCC($v0)
    ctx->pc = 0x1ffb10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ffb14:
    // 0x1ffb14: 0xc7a0013c  lwc1        $f0, 0x13C($sp)
    ctx->pc = 0x1ffb14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ffb18:
    // 0x1ffb18: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1ffb18u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1ffb1c:
    // 0x1ffb1c: 0xe44000cc  swc1        $f0, 0xCC($v0)
    ctx->pc = 0x1ffb1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 204), bits); }
label_1ffb20:
    // 0x1ffb20: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x1ffb20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_1ffb24:
    // 0x1ffb24: 0xc44100cc  lwc1        $f1, 0xCC($v0)
    ctx->pc = 0x1ffb24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ffb28:
    // 0x1ffb28: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ffb28u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ffb2c:
    // 0x1ffb2c: 0x0  nop
    ctx->pc = 0x1ffb2cu;
    // NOP
label_1ffb30:
    // 0x1ffb30: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1ffb30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ffb34:
    // 0x1ffb34: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_1ffb38:
    if (ctx->pc == 0x1FFB38u) {
        ctx->pc = 0x1FFB3Cu;
        goto label_1ffb3c;
    }
    ctx->pc = 0x1FFB34u;
    {
        const bool branch_taken_0x1ffb34 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ffb34) {
            ctx->pc = 0x1FFB48u;
            goto label_1ffb48;
        }
    }
    ctx->pc = 0x1FFB3Cu;
label_1ffb3c:
    // 0x1ffb3c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ffb3cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ffb40:
    // 0x1ffb40: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x1ffb40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_1ffb44:
    // 0x1ffb44: 0xe44000cc  swc1        $f0, 0xCC($v0)
    ctx->pc = 0x1ffb44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 204), bits); }
label_1ffb48:
    // 0x1ffb48: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x1ffb48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_1ffb4c:
    // 0x1ffb4c: 0xc44100b8  lwc1        $f1, 0xB8($v0)
    ctx->pc = 0x1ffb4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ffb50:
    // 0x1ffb50: 0xc7a0013c  lwc1        $f0, 0x13C($sp)
    ctx->pc = 0x1ffb50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ffb54:
    // 0x1ffb54: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1ffb54u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1ffb58:
    // 0x1ffb58: 0xe44000b8  swc1        $f0, 0xB8($v0)
    ctx->pc = 0x1ffb58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 184), bits); }
label_1ffb5c:
    // 0x1ffb5c: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x1ffb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_1ffb60:
    // 0x1ffb60: 0xc44100b8  lwc1        $f1, 0xB8($v0)
    ctx->pc = 0x1ffb60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ffb64:
    // 0x1ffb64: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ffb64u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ffb68:
    // 0x1ffb68: 0x0  nop
    ctx->pc = 0x1ffb68u;
    // NOP
label_1ffb6c:
    // 0x1ffb6c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1ffb6cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ffb70:
    // 0x1ffb70: 0x45000011  bc1f        . + 4 + (0x11 << 2)
label_1ffb74:
    if (ctx->pc == 0x1FFB74u) {
        ctx->pc = 0x1FFB78u;
        goto label_1ffb78;
    }
    ctx->pc = 0x1FFB70u;
    {
        const bool branch_taken_0x1ffb70 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ffb70) {
            ctx->pc = 0x1FFBB8u;
            goto label_1ffbb8;
        }
    }
    ctx->pc = 0x1FFB78u;
label_1ffb78:
    // 0x1ffb78: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ffb78u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ffb7c:
    // 0x1ffb7c: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x1ffb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_1ffb80:
    // 0x1ffb80: 0xe44000b8  swc1        $f0, 0xB8($v0)
    ctx->pc = 0x1ffb80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 184), bits); }
label_1ffb84:
    // 0x1ffb84: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x1ffb84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_1ffb88:
    // 0x1ffb88: 0x8c4300bc  lw          $v1, 0xBC($v0)
    ctx->pc = 0x1ffb88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
label_1ffb8c:
    // 0x1ffb8c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1ffb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1ffb90:
    // 0x1ffb90: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
label_1ffb94:
    if (ctx->pc == 0x1FFB94u) {
        ctx->pc = 0x1FFB98u;
        goto label_1ffb98;
    }
    ctx->pc = 0x1FFB90u;
    {
        const bool branch_taken_0x1ffb90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ffb90) {
            ctx->pc = 0x1FFBACu;
            goto label_1ffbac;
        }
    }
    ctx->pc = 0x1FFB98u;
label_1ffb98:
    // 0x1ffb98: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x1ffb98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_1ffb9c:
    // 0x1ffb9c: 0x8c8200bc  lw          $v0, 0xBC($a0)
    ctx->pc = 0x1ffb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 188)));
label_1ffba0:
    // 0x1ffba0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1ffba0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1ffba4:
    // 0x1ffba4: 0x14440004  bne         $v0, $a0, . + 4 + (0x4 << 2)
label_1ffba8:
    if (ctx->pc == 0x1FFBA8u) {
        ctx->pc = 0x1FFBACu;
        goto label_1ffbac;
    }
    ctx->pc = 0x1FFBA4u;
    {
        const bool branch_taken_0x1ffba4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x1ffba4) {
            ctx->pc = 0x1FFBB8u;
            goto label_1ffbb8;
        }
    }
    ctx->pc = 0x1FFBACu;
label_1ffbac:
    // 0x1ffbac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ffbacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ffbb0:
    // 0x1ffbb0: 0x10000259  b           . + 4 + (0x259 << 2)
label_1ffbb4:
    if (ctx->pc == 0x1FFBB4u) {
        ctx->pc = 0x1FFBB8u;
        goto label_1ffbb8;
    }
    ctx->pc = 0x1FFBB0u;
    {
        const bool branch_taken_0x1ffbb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ffbb0) {
            ctx->pc = 0x200518u;
            return;
        }
    }
    ctx->pc = 0x1FFBB8u;
label_1ffbb8:
    // 0x1ffbb8: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x1ffbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_1ffbbc:
    // 0x1ffbbc: 0x8c4200bc  lw          $v0, 0xBC($v0)
    ctx->pc = 0x1ffbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
label_1ffbc0:
    // 0x1ffbc0: 0x14400105  bnez        $v0, . + 4 + (0x105 << 2)
label_1ffbc4:
    if (ctx->pc == 0x1FFBC4u) {
        ctx->pc = 0x1FFBC8u;
        goto label_1ffbc8;
    }
    ctx->pc = 0x1FFBC0u;
    {
        const bool branch_taken_0x1ffbc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ffbc0) {
            ctx->pc = 0x1FFFD8u;
            goto label_1fffd8;
        }
    }
    ctx->pc = 0x1FFBC8u;
label_1ffbc8:
    // 0x1ffbc8: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x1ffbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
label_1ffbcc:
    // 0x1ffbcc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1ffbccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1ffbd0:
    // 0x1ffbd0: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1ffbd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1ffbd4:
    // 0x1ffbd4: 0xc085538  jal         func_2154E0
label_1ffbd8:
    if (ctx->pc == 0x1FFBD8u) {
        ctx->pc = 0x1FFBDCu;
        goto label_1ffbdc;
    }
    ctx->pc = 0x1FFBD4u;
    SET_GPR_U32(ctx, 31, 0x1FFBDCu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x1FFBD4u, 0x1FFBDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFBDCu;
label_1ffbdc:
    // 0x1ffbdc: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1ffbdcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ffbe0:
    // 0x1ffbe0: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1ffbe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_1ffbe4:
    // 0x1ffbe4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1ffbe4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1ffbe8:
    // 0x1ffbe8: 0xc090f80  jal         func_243E00
label_1ffbec:
    if (ctx->pc == 0x1FFBECu) {
        ctx->pc = 0x1FFBF0u;
        goto label_1ffbf0;
    }
    ctx->pc = 0x1FFBE8u;
    SET_GPR_U32(ctx, 31, 0x1FFBF0u);
    ctx->pc = 0x243E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E00u, 0x1FFBE8u, 0x1FFBF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFBF0u;
label_1ffbf0:
    // 0x1ffbf0: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x1ffbf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_1ffbf4:
    // 0x1ffbf4: 0x27a200f0  addiu       $v0, $sp, 0xF0
    ctx->pc = 0x1ffbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_1ffbf8:
    // 0x1ffbf8: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x1ffbf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1ffbfc:
    // 0x1ffbfc: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x1ffbfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ffc00:
    // 0x1ffc00: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x1ffc00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ffc04:
    // 0x1ffc04: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x1ffc04u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_1ffc08:
    // 0x1ffc08: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x1ffc08u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_1ffc0c:
    // 0x1ffc0c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1ffc0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_1ffc10:
    // 0x1ffc10: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x1ffc10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_1ffc14:
    // 0x1ffc14: 0xc44100c0  lwc1        $f1, 0xC0($v0)
    ctx->pc = 0x1ffc14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ffc18:
    // 0x1ffc18: 0xc7a000f0  lwc1        $f0, 0xF0($sp)
    ctx->pc = 0x1ffc18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ffc1c:
    // 0x1ffc1c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1ffc1cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1ffc20:
    // 0x1ffc20: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x1ffc20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_1ffc24:
    // 0x1ffc24: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x1ffc24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_1ffc28:
    // 0x1ffc28: 0xc44100c4  lwc1        $f1, 0xC4($v0)
    ctx->pc = 0x1ffc28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ffc2c:
    // 0x1ffc2c: 0xc7a000f4  lwc1        $f0, 0xF4($sp)
    ctx->pc = 0x1ffc2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ffc30:
    // 0x1ffc30: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1ffc30u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1ffc34:
    // 0x1ffc34: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x1ffc34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
label_1ffc38:
    // 0x1ffc38: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x1ffc38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_1ffc3c:
    // 0x1ffc3c: 0xc44100c8  lwc1        $f1, 0xC8($v0)
    ctx->pc = 0x1ffc3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ffc40:
    // 0x1ffc40: 0xc7a000f8  lwc1        $f0, 0xF8($sp)
    ctx->pc = 0x1ffc40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ffc44:
    // 0x1ffc44: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1ffc44u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1ffc48:
    // 0x1ffc48: 0xe7a000e8  swc1        $f0, 0xE8($sp)
    ctx->pc = 0x1ffc48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_1ffc4c:
    // 0x1ffc4c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ffc4cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ffc50:
    // 0x1ffc50: 0x0  nop
    ctx->pc = 0x1ffc50u;
    // NOP
label_1ffc54:
    // 0x1ffc54: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x1ffc54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
label_1ffc58:
    // 0x1ffc58: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1ffc58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_1ffc5c:
    // 0x1ffc5c: 0xc104d24  jal         func_413490
label_1ffc60:
    if (ctx->pc == 0x1FFC60u) {
        ctx->pc = 0x1FFC64u;
        goto label_1ffc64;
    }
    ctx->pc = 0x1FFC5Cu;
    SET_GPR_U32(ctx, 31, 0x1FFC64u);
    ctx->pc = 0x413490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413490u, 0x1FFC5Cu, 0x1FFC64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFC64u;
label_1ffc64:
    // 0x1ffc64: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x1ffc64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
label_1ffc68:
    // 0x1ffc68: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ffc68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1ffc6c:
    // 0x1ffc6c: 0x0  nop
    ctx->pc = 0x1ffc6cu;
    // NOP
label_1ffc70:
    // 0x1ffc70: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1ffc70u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ffc74:
    // 0x1ffc74: 0x45000025  bc1f        . + 4 + (0x25 << 2)
label_1ffc78:
    if (ctx->pc == 0x1FFC78u) {
        ctx->pc = 0x1FFC7Cu;
        goto label_1ffc7c;
    }
    ctx->pc = 0x1FFC74u;
    {
        const bool branch_taken_0x1ffc74 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ffc74) {
            ctx->pc = 0x1FFD0Cu;
            goto label_1ffd0c;
        }
    }
    ctx->pc = 0x1FFC7Cu;
label_1ffc7c:
    // 0x1ffc7c: 0xc0b06cc  jal         func_2C1B30
label_1ffc80:
    if (ctx->pc == 0x1FFC80u) {
        ctx->pc = 0x1FFC84u;
        goto label_1ffc84;
    }
    ctx->pc = 0x1FFC7Cu;
    SET_GPR_U32(ctx, 31, 0x1FFC84u);
    ctx->pc = 0x2C1B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1B30u, 0x1FFC7Cu, 0x1FFC84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFC84u;
label_1ffc84:
    // 0x1ffc84: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ffc84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ffc88:
    // 0x1ffc88: 0xc0b06c4  jal         func_2C1B10
label_1ffc8c:
    if (ctx->pc == 0x1FFC8Cu) {
        ctx->pc = 0x1FFC90u;
        goto label_1ffc90;
    }
    ctx->pc = 0x1FFC88u;
    SET_GPR_U32(ctx, 31, 0x1FFC90u);
    ctx->pc = 0x2C1B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1B10u, 0x1FFC88u, 0x1FFC90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFC90u;
label_1ffc90:
    // 0x1ffc90: 0x8f83bcc4  lw          $v1, -0x433C($gp)
    ctx->pc = 0x1ffc90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
label_1ffc94:
    // 0x1ffc94: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ffc94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ffc98:
    // 0x1ffc98: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x1ffc98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1ffc9c:
    // 0x1ffc9c: 0xc0b5ad0  jal         func_2D6B40
label_1ffca0:
    if (ctx->pc == 0x1FFCA0u) {
        ctx->pc = 0x1FFCA4u;
        goto label_1ffca4;
    }
    ctx->pc = 0x1FFC9Cu;
    SET_GPR_U32(ctx, 31, 0x1FFCA4u);
    ctx->pc = 0x2D6B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6B40u, 0x1FFC9Cu, 0x1FFCA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFCA4u;
label_1ffca4:
    // 0x1ffca4: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x1ffca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_1ffca8:
    // 0x1ffca8: 0xc09ac08  jal         func_26B020
label_1ffcac:
    if (ctx->pc == 0x1FFCACu) {
        ctx->pc = 0x1FFCB0u;
        goto label_1ffcb0;
    }
    ctx->pc = 0x1FFCA8u;
    SET_GPR_U32(ctx, 31, 0x1FFCB0u);
    ctx->pc = 0x26B020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B020u, 0x1FFCA8u, 0x1FFCB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFCB0u;
label_1ffcb0:
    // 0x1ffcb0: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x1ffcb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_1ffcb4:
    // 0x1ffcb4: 0x24440154  addiu       $a0, $v0, 0x154
    ctx->pc = 0x1ffcb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 340));
label_1ffcb8:
    // 0x1ffcb8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1ffcb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1ffcbc:
    // 0x1ffcbc: 0xc068170  jal         func_1A05C0
label_1ffcc0:
    if (ctx->pc == 0x1FFCC0u) {
        ctx->pc = 0x1FFCC4u;
        goto label_1ffcc4;
    }
    ctx->pc = 0x1FFCBCu;
    SET_GPR_U32(ctx, 31, 0x1FFCC4u);
    ctx->pc = 0x1A05C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A05C0u, 0x1FFCBCu, 0x1FFCC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFCC4u;
label_1ffcc4:
    // 0x1ffcc4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1ffcc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1ffcc8:
    // 0x1ffcc8: 0xafa200d4  sw          $v0, 0xD4($sp)
    ctx->pc = 0x1ffcc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 2));
label_1ffccc:
    // 0x1ffccc: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x1ffcccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
label_1ffcd0:
    // 0x1ffcd0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1ffcd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1ffcd4:
    // 0x1ffcd4: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x1ffcd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_1ffcd8:
    // 0x1ffcd8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1ffcd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ffcdc:
    // 0x1ffcdc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ffcdcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ffce0:
    // 0x1ffce0: 0xc0af028  jal         func_2BC0A0
label_1ffce4:
    if (ctx->pc == 0x1FFCE4u) {
        ctx->pc = 0x1FFCE8u;
        goto label_1ffce8;
    }
    ctx->pc = 0x1FFCE0u;
    SET_GPR_U32(ctx, 31, 0x1FFCE8u);
    ctx->pc = 0x2BC0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC0A0u, 0x1FFCE0u, 0x1FFCE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFCE8u;
label_1ffce8:
    // 0x1ffce8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1ffce8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1ffcec:
    // 0x1ffcec: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x1ffcecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_1ffcf0:
    // 0x1ffcf0: 0xac4300bc  sw          $v1, 0xBC($v0)
    ctx->pc = 0x1ffcf0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 188), GPR_U32(ctx, 3));
label_1ffcf4:
    // 0x1ffcf4: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x1ffcf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_1ffcf8:
    // 0x1ffcf8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ffcf8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ffcfc:
    // 0x1ffcfc: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x1ffcfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_1ffd00:
    // 0x1ffd00: 0xe44000b8  swc1        $f0, 0xB8($v0)
    ctx->pc = 0x1ffd00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 184), bits); }
label_1ffd04:
    // 0x1ffd04: 0x100000b4  b           . + 4 + (0xB4 << 2)
label_1ffd08:
    if (ctx->pc == 0x1FFD08u) {
        ctx->pc = 0x1FFD0Cu;
        goto label_1ffd0c;
    }
    ctx->pc = 0x1FFD04u;
    {
        const bool branch_taken_0x1ffd04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ffd04) {
            ctx->pc = 0x1FFFD8u;
            goto label_1fffd8;
        }
    }
    ctx->pc = 0x1FFD0Cu;
label_1ffd0c:
    // 0x1ffd0c: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x1ffd0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_1ffd10:
    // 0x1ffd10: 0xc4410054  lwc1        $f1, 0x54($v0)
    ctx->pc = 0x1ffd10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ffd14:
    // 0x1ffd14: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x1ffd14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_1ffd18:
    // 0x1ffd18: 0xc440004c  lwc1        $f0, 0x4C($v0)
    ctx->pc = 0x1ffd18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ffd1c:
    // 0x1ffd1c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1ffd1cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1ffd20:
    // 0x1ffd20: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x1ffd20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_1ffd24:
    // 0x1ffd24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ffd24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ffd28:
    // 0x1ffd28: 0x0  nop
    ctx->pc = 0x1ffd28u;
    // NOP
label_1ffd2c:
    // 0x1ffd2c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1ffd2cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ffd30:
    // 0x1ffd30: 0x45000025  bc1f        . + 4 + (0x25 << 2)
label_1ffd34:
    if (ctx->pc == 0x1FFD34u) {
        ctx->pc = 0x1FFD38u;
        goto label_1ffd38;
    }
    ctx->pc = 0x1FFD30u;
    {
        const bool branch_taken_0x1ffd30 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ffd30) {
            ctx->pc = 0x1FFDC8u;
            goto label_1ffdc8;
        }
    }
    ctx->pc = 0x1FFD38u;
label_1ffd38:
    // 0x1ffd38: 0xc0b06cc  jal         func_2C1B30
label_1ffd3c:
    if (ctx->pc == 0x1FFD3Cu) {
        ctx->pc = 0x1FFD40u;
        goto label_1ffd40;
    }
    ctx->pc = 0x1FFD38u;
    SET_GPR_U32(ctx, 31, 0x1FFD40u);
    ctx->pc = 0x2C1B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1B30u, 0x1FFD38u, 0x1FFD40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFD40u;
label_1ffd40:
    // 0x1ffd40: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ffd40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ffd44:
    // 0x1ffd44: 0xc0b06c4  jal         func_2C1B10
label_1ffd48:
    if (ctx->pc == 0x1FFD48u) {
        ctx->pc = 0x1FFD4Cu;
        goto label_1ffd4c;
    }
    ctx->pc = 0x1FFD44u;
    SET_GPR_U32(ctx, 31, 0x1FFD4Cu);
    ctx->pc = 0x2C1B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1B10u, 0x1FFD44u, 0x1FFD4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFD4Cu;
label_1ffd4c:
    // 0x1ffd4c: 0x8f83bcc4  lw          $v1, -0x433C($gp)
    ctx->pc = 0x1ffd4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
label_1ffd50:
    // 0x1ffd50: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ffd50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ffd54:
    // 0x1ffd54: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x1ffd54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1ffd58:
    // 0x1ffd58: 0xc0b5ad0  jal         func_2D6B40
label_1ffd5c:
    if (ctx->pc == 0x1FFD5Cu) {
        ctx->pc = 0x1FFD60u;
        goto label_1ffd60;
    }
    ctx->pc = 0x1FFD58u;
    SET_GPR_U32(ctx, 31, 0x1FFD60u);
    ctx->pc = 0x2D6B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6B40u, 0x1FFD58u, 0x1FFD60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFD60u;
label_1ffd60:
    // 0x1ffd60: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1ffd60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_1ffd64:
    // 0x1ffd64: 0xc09ac08  jal         func_26B020
label_1ffd68:
    if (ctx->pc == 0x1FFD68u) {
        ctx->pc = 0x1FFD6Cu;
        goto label_1ffd6c;
    }
    ctx->pc = 0x1FFD64u;
    SET_GPR_U32(ctx, 31, 0x1FFD6Cu);
    ctx->pc = 0x26B020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B020u, 0x1FFD64u, 0x1FFD6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFD6Cu;
label_1ffd6c:
    // 0x1ffd6c: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x1ffd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_1ffd70:
    // 0x1ffd70: 0x24440154  addiu       $a0, $v0, 0x154
    ctx->pc = 0x1ffd70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 340));
label_1ffd74:
    // 0x1ffd74: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1ffd74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1ffd78:
    // 0x1ffd78: 0xc068170  jal         func_1A05C0
label_1ffd7c:
    if (ctx->pc == 0x1FFD7Cu) {
        ctx->pc = 0x1FFD80u;
        goto label_1ffd80;
    }
    ctx->pc = 0x1FFD78u;
    SET_GPR_U32(ctx, 31, 0x1FFD80u);
    ctx->pc = 0x1A05C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A05C0u, 0x1FFD78u, 0x1FFD80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFD80u;
label_1ffd80:
    // 0x1ffd80: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1ffd80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1ffd84:
    // 0x1ffd84: 0xafa200c4  sw          $v0, 0xC4($sp)
    ctx->pc = 0x1ffd84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 2));
label_1ffd88:
    // 0x1ffd88: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x1ffd88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
label_1ffd8c:
    // 0x1ffd8c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1ffd8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1ffd90:
    // 0x1ffd90: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x1ffd90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_1ffd94:
    // 0x1ffd94: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1ffd94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ffd98:
    // 0x1ffd98: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ffd98u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ffd9c:
    // 0x1ffd9c: 0xc0af028  jal         func_2BC0A0
label_1ffda0:
    if (ctx->pc == 0x1FFDA0u) {
        ctx->pc = 0x1FFDA4u;
        goto label_1ffda4;
    }
    ctx->pc = 0x1FFD9Cu;
    SET_GPR_U32(ctx, 31, 0x1FFDA4u);
    ctx->pc = 0x2BC0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC0A0u, 0x1FFD9Cu, 0x1FFDA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFDA4u;
label_1ffda4:
    // 0x1ffda4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1ffda4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1ffda8:
    // 0x1ffda8: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x1ffda8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_1ffdac:
    // 0x1ffdac: 0xac4300bc  sw          $v1, 0xBC($v0)
    ctx->pc = 0x1ffdacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 188), GPR_U32(ctx, 3));
label_1ffdb0:
    // 0x1ffdb0: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x1ffdb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_1ffdb4:
    // 0x1ffdb4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ffdb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ffdb8:
    // 0x1ffdb8: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x1ffdb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_1ffdbc:
    // 0x1ffdbc: 0xe44000b8  swc1        $f0, 0xB8($v0)
    ctx->pc = 0x1ffdbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 184), bits); }
label_1ffdc0:
    // 0x1ffdc0: 0x10000085  b           . + 4 + (0x85 << 2)
label_1ffdc4:
    if (ctx->pc == 0x1FFDC4u) {
        ctx->pc = 0x1FFDC8u;
        goto label_1ffdc8;
    }
    ctx->pc = 0x1FFDC0u;
    {
        const bool branch_taken_0x1ffdc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ffdc0) {
            ctx->pc = 0x1FFFD8u;
            goto label_1fffd8;
        }
    }
    ctx->pc = 0x1FFDC8u;
label_1ffdc8:
    // 0x1ffdc8: 0xc0b06cc  jal         func_2C1B30
label_1ffdcc:
    if (ctx->pc == 0x1FFDCCu) {
        ctx->pc = 0x1FFDD0u;
        goto label_1ffdd0;
    }
    ctx->pc = 0x1FFDC8u;
    SET_GPR_U32(ctx, 31, 0x1FFDD0u);
    ctx->pc = 0x2C1B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1B30u, 0x1FFDC8u, 0x1FFDD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFDD0u;
label_1ffdd0:
    // 0x1ffdd0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ffdd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ffdd4:
    // 0x1ffdd4: 0xc0b06c4  jal         func_2C1B10
label_1ffdd8:
    if (ctx->pc == 0x1FFDD8u) {
        ctx->pc = 0x1FFDDCu;
        goto label_1ffddc;
    }
    ctx->pc = 0x1FFDD4u;
    SET_GPR_U32(ctx, 31, 0x1FFDDCu);
    ctx->pc = 0x2C1B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1B10u, 0x1FFDD4u, 0x1FFDDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFDDCu;
label_1ffddc:
    // 0x1ffddc: 0x8f83bcc4  lw          $v1, -0x433C($gp)
    ctx->pc = 0x1ffddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
label_1ffde0:
    // 0x1ffde0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ffde0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ffde4:
    // 0x1ffde4: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x1ffde4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1ffde8:
    // 0x1ffde8: 0xc0b5f44  jal         func_2D7D10
label_1ffdec:
    if (ctx->pc == 0x1FFDECu) {
        ctx->pc = 0x1FFDF0u;
        goto label_1ffdf0;
    }
    ctx->pc = 0x1FFDE8u;
    SET_GPR_U32(ctx, 31, 0x1FFDF0u);
    ctx->pc = 0x2D7D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7D10u, 0x1FFDE8u, 0x1FFDF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFDF0u;
label_1ffdf0:
    // 0x1ffdf0: 0xe7a00138  swc1        $f0, 0x138($sp)
    ctx->pc = 0x1ffdf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_1ffdf4:
    // 0x1ffdf4: 0xc7a10138  lwc1        $f1, 0x138($sp)
    ctx->pc = 0x1ffdf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ffdf8:
    // 0x1ffdf8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ffdf8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ffdfc:
    // 0x1ffdfc: 0x0  nop
    ctx->pc = 0x1ffdfcu;
    // NOP
label_1ffe00:
    // 0x1ffe00: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1ffe00u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ffe04:
    // 0x1ffe04: 0x45010074  bc1t        . + 4 + (0x74 << 2)
label_1ffe08:
    if (ctx->pc == 0x1FFE08u) {
        ctx->pc = 0x1FFE0Cu;
        goto label_1ffe0c;
    }
    ctx->pc = 0x1FFE04u;
    {
        const bool branch_taken_0x1ffe04 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ffe04) {
            ctx->pc = 0x1FFFD8u;
            goto label_1fffd8;
        }
    }
    ctx->pc = 0x1FFE0Cu;
label_1ffe0c:
    // 0x1ffe0c: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x1ffe0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_1ffe10:
    // 0x1ffe10: 0xc4410140  lwc1        $f1, 0x140($v0)
    ctx->pc = 0x1ffe10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ffe14:
    // 0x1ffe14: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1ffe14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_1ffe18:
    // 0x1ffe18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ffe18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ffe1c:
    // 0x1ffe1c: 0x0  nop
    ctx->pc = 0x1ffe1cu;
    // NOP
label_1ffe20:
    // 0x1ffe20: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1ffe20u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ffe24:
    // 0x1ffe24: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_1ffe28:
    if (ctx->pc == 0x1FFE28u) {
        ctx->pc = 0x1FFE2Cu;
        goto label_1ffe2c;
    }
    ctx->pc = 0x1FFE24u;
    {
        const bool branch_taken_0x1ffe24 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ffe24) {
            ctx->pc = 0x1FFE38u;
            goto label_1ffe38;
        }
    }
    ctx->pc = 0x1FFE2Cu;
label_1ffe2c:
    // 0x1ffe2c: 0xc7a00138  lwc1        $f0, 0x138($sp)
    ctx->pc = 0x1ffe2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ffe30:
    // 0x1ffe30: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x1ffe30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_1ffe34:
    // 0x1ffe34: 0xe4400140  swc1        $f0, 0x140($v0)
    ctx->pc = 0x1ffe34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 320), bits); }
label_1ffe38:
    // 0x1ffe38: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x1ffe38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_1ffe3c:
    // 0x1ffe3c: 0xc4410140  lwc1        $f1, 0x140($v0)
    ctx->pc = 0x1ffe3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ffe40:
    // 0x1ffe40: 0xc7a00138  lwc1        $f0, 0x138($sp)
    ctx->pc = 0x1ffe40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ffe44:
    // 0x1ffe44: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1ffe44u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1ffe48:
    // 0x1ffe48: 0xe7a00134  swc1        $f0, 0x134($sp)
    ctx->pc = 0x1ffe48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
label_1ffe4c:
    // 0x1ffe4c: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x1ffe4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_1ffe50:
    // 0x1ffe50: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x1ffe50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_1ffe54:
    // 0x1ffe54: 0x8c42013c  lw          $v0, 0x13C($v0)
    ctx->pc = 0x1ffe54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 316)));
label_1ffe58:
    // 0x1ffe58: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_1ffe5c:
    if (ctx->pc == 0x1FFE5Cu) {
        ctx->pc = 0x1FFE60u;
        goto label_1ffe60;
    }
    ctx->pc = 0x1FFE58u;
    {
        const bool branch_taken_0x1ffe58 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1ffe58) {
            ctx->pc = 0x1FFE74u;
            goto label_1ffe74;
        }
    }
    ctx->pc = 0x1FFE60u;
label_1ffe60:
    // 0x1ffe60: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ffe60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ffe64:
    // 0x1ffe64: 0x0  nop
    ctx->pc = 0x1ffe64u;
    // NOP
label_1ffe68:
    // 0x1ffe68: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1ffe68u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1ffe6c:
    // 0x1ffe6c: 0x10000008  b           . + 4 + (0x8 << 2)
label_1ffe70:
    if (ctx->pc == 0x1FFE70u) {
        ctx->pc = 0x1FFE74u;
        goto label_1ffe74;
    }
    ctx->pc = 0x1FFE6Cu;
    {
        const bool branch_taken_0x1ffe6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ffe6c) {
            ctx->pc = 0x1FFE90u;
            goto label_1ffe90;
        }
    }
    ctx->pc = 0x1FFE74u;
label_1ffe74:
    // 0x1ffe74: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1ffe74u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_1ffe78:
    // 0x1ffe78: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1ffe78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1ffe7c:
    // 0x1ffe7c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1ffe7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1ffe80:
    // 0x1ffe80: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ffe80u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ffe84:
    // 0x1ffe84: 0x0  nop
    ctx->pc = 0x1ffe84u;
    // NOP
label_1ffe88:
    // 0x1ffe88: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1ffe88u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1ffe8c:
    // 0x1ffe8c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1ffe8cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1ffe90:
    // 0x1ffe90: 0xc4800140  lwc1        $f0, 0x140($a0)
    ctx->pc = 0x1ffe90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ffe94:
    // 0x1ffe94: 0x0  nop
    ctx->pc = 0x1ffe94u;
    // NOP
label_1ffe98:
    // 0x1ffe98: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1ffe98u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_1ffe9c:
    // 0x1ffe9c: 0xe7a00130  swc1        $f0, 0x130($sp)
    ctx->pc = 0x1ffe9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_1ffea0:
    // 0x1ffea0: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x1ffea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_1ffea4:
    // 0x1ffea4: 0x8c420138  lw          $v0, 0x138($v0)
    ctx->pc = 0x1ffea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 312)));
label_1ffea8:
    // 0x1ffea8: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_1ffeac:
    if (ctx->pc == 0x1FFEACu) {
        ctx->pc = 0x1FFEB0u;
        goto label_1ffeb0;
    }
    ctx->pc = 0x1FFEA8u;
    {
        const bool branch_taken_0x1ffea8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1ffea8) {
            ctx->pc = 0x1FFEC4u;
            goto label_1ffec4;
        }
    }
    ctx->pc = 0x1FFEB0u;
label_1ffeb0:
    // 0x1ffeb0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ffeb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ffeb4:
    // 0x1ffeb4: 0x0  nop
    ctx->pc = 0x1ffeb4u;
    // NOP
label_1ffeb8:
    // 0x1ffeb8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1ffeb8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1ffebc:
    // 0x1ffebc: 0x10000008  b           . + 4 + (0x8 << 2)
label_1ffec0:
    if (ctx->pc == 0x1FFEC0u) {
        ctx->pc = 0x1FFEC4u;
        goto label_1ffec4;
    }
    ctx->pc = 0x1FFEBCu;
    {
        const bool branch_taken_0x1ffebc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ffebc) {
            ctx->pc = 0x1FFEE0u;
            goto label_1ffee0;
        }
    }
    ctx->pc = 0x1FFEC4u;
label_1ffec4:
    // 0x1ffec4: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1ffec4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_1ffec8:
    // 0x1ffec8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1ffec8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1ffecc:
    // 0x1ffecc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1ffeccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1ffed0:
    // 0x1ffed0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ffed0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ffed4:
    // 0x1ffed4: 0x0  nop
    ctx->pc = 0x1ffed4u;
    // NOP
label_1ffed8:
    // 0x1ffed8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1ffed8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1ffedc:
    // 0x1ffedc: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1ffedcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1ffee0:
    // 0x1ffee0: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x1ffee0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
label_1ffee4:
    // 0x1ffee4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ffee4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ffee8:
    // 0x1ffee8: 0x0  nop
    ctx->pc = 0x1ffee8u;
    // NOP
label_1ffeec:
    // 0x1ffeec: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x1ffeecu;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1ffef0:
    // 0x1ffef0: 0xc7a00130  lwc1        $f0, 0x130($sp)
    ctx->pc = 0x1ffef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ffef4:
    // 0x1ffef4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1ffef4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1ffef8:
    // 0x1ffef8: 0xc7a00134  lwc1        $f0, 0x134($sp)
    ctx->pc = 0x1ffef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ffefc:
    // 0x1ffefc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1ffefcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1fff00:
    // 0x1fff00: 0x45010035  bc1t        . + 4 + (0x35 << 2)
label_1fff04:
    if (ctx->pc == 0x1FFF04u) {
        ctx->pc = 0x1FFF08u;
        goto label_1fff08;
    }
    ctx->pc = 0x1FFF00u;
    {
        const bool branch_taken_0x1fff00 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1fff00) {
            ctx->pc = 0x1FFFD8u;
            goto label_1fffd8;
        }
    }
    ctx->pc = 0x1FFF08u;
label_1fff08:
    // 0x1fff08: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x1fff08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_1fff0c:
    // 0x1fff0c: 0x8c430138  lw          $v1, 0x138($v0)
    ctx->pc = 0x1fff0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 312)));
label_1fff10:
    // 0x1fff10: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x1fff10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_1fff14:
    // 0x1fff14: 0x8c42013c  lw          $v0, 0x13C($v0)
    ctx->pc = 0x1fff14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 316)));
label_1fff18:
    // 0x1fff18: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x1fff18u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1fff1c:
    // 0x1fff1c: 0x1020002e  beqz        $at, . + 4 + (0x2E << 2)
label_1fff20:
    if (ctx->pc == 0x1FFF20u) {
        ctx->pc = 0x1FFF24u;
        goto label_1fff24;
    }
    ctx->pc = 0x1FFF1Cu;
    {
        const bool branch_taken_0x1fff1c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fff1c) {
            ctx->pc = 0x1FFFD8u;
            goto label_1fffd8;
        }
    }
    ctx->pc = 0x1FFF24u;
label_1fff24:
    // 0x1fff24: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x1fff24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_1fff28:
    // 0x1fff28: 0x8c620138  lw          $v0, 0x138($v1)
    ctx->pc = 0x1fff28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 312)));
label_1fff2c:
    // 0x1fff2c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1fff2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1fff30:
    // 0x1fff30: 0xac620138  sw          $v0, 0x138($v1)
    ctx->pc = 0x1fff30u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 312), GPR_U32(ctx, 2));
label_1fff34:
    // 0x1fff34: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1fff34u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1fff38:
    // 0x1fff38: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x1fff38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_1fff3c:
    // 0x1fff3c: 0xe44000e4  swc1        $f0, 0xE4($v0)
    ctx->pc = 0x1fff3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 228), bits); }
label_1fff40:
    // 0x1fff40: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1fff40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fff44:
    // 0x1fff44: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x1fff44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_1fff48:
    // 0x1fff48: 0xac4300bc  sw          $v1, 0xBC($v0)
    ctx->pc = 0x1fff48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 188), GPR_U32(ctx, 3));
label_1fff4c:
    // 0x1fff4c: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x1fff4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_1fff50:
    // 0x1fff50: 0xc0808e4  jal         func_202390
label_1fff54:
    if (ctx->pc == 0x1FFF54u) {
        ctx->pc = 0x1FFF58u;
        goto label_1fff58;
    }
    ctx->pc = 0x1FFF50u;
    SET_GPR_U32(ctx, 31, 0x1FFF58u);
    ctx->pc = 0x202390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202390u, 0x1FFF50u, 0x1FFF58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFF58u;
label_1fff58:
    // 0x1fff58: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x1fff58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_1fff5c:
    // 0x1fff5c: 0xac400104  sw          $zero, 0x104($v0)
    ctx->pc = 0x1fff5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 260), GPR_U32(ctx, 0));
label_1fff60:
    // 0x1fff60: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x1fff60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_1fff64:
    // 0x1fff64: 0xac400100  sw          $zero, 0x100($v0)
    ctx->pc = 0x1fff64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 256), GPR_U32(ctx, 0));
label_1fff68:
    // 0x1fff68: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1fff68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1fff6c:
    // 0x1fff6c: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x1fff6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_1fff70:
    // 0x1fff70: 0xe4400108  swc1        $f0, 0x108($v0)
    ctx->pc = 0x1fff70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 264), bits); }
label_1fff74:
    // 0x1fff74: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1fff74u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1fff78:
    // 0x1fff78: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x1fff78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_1fff7c:
    // 0x1fff7c: 0xe440011c  swc1        $f0, 0x11C($v0)
    ctx->pc = 0x1fff7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 284), bits); }
label_1fff80:
    // 0x1fff80: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1fff80u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1fff84:
    // 0x1fff84: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x1fff84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_1fff88:
    // 0x1fff88: 0xe4400120  swc1        $f0, 0x120($v0)
    ctx->pc = 0x1fff88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
label_1fff8c:
    // 0x1fff8c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1fff8cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1fff90:
    // 0x1fff90: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x1fff90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_1fff94:
    // 0x1fff94: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x1fff94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_1fff98:
    // 0x1fff98: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1fff98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1fff9c:
    // 0x1fff9c: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x1fff9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_1fffa0:
    // 0x1fffa0: 0xac430128  sw          $v1, 0x128($v0)
    ctx->pc = 0x1fffa0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 296), GPR_U32(ctx, 3));
label_1fffa4:
    // 0x1fffa4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1fffa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1fffa8:
    // 0x1fffa8: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x1fffa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_1fffac:
    // 0x1fffac: 0xac43012c  sw          $v1, 0x12C($v0)
    ctx->pc = 0x1fffacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 300), GPR_U32(ctx, 3));
label_1fffb0:
    // 0x1fffb0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1fffb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1fffb4:
    // 0x1fffb4: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x1fffb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_1fffb8:
    // 0x1fffb8: 0xac430130  sw          $v1, 0x130($v0)
    ctx->pc = 0x1fffb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 304), GPR_U32(ctx, 3));
label_1fffbc:
    // 0x1fffbc: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1fffbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1fffc0:
    // 0x1fffc0: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x1fffc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_1fffc4:
    // 0x1fffc4: 0xac4300bc  sw          $v1, 0xBC($v0)
    ctx->pc = 0x1fffc4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 188), GPR_U32(ctx, 3));
label_1fffc8:
    // 0x1fffc8: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x1fffc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
label_1fffcc:
    // 0x1fffcc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fffccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1fffd0:
    // 0x1fffd0: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x1fffd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_1fffd4:
    // 0x1fffd4: 0xe4400164  swc1        $f0, 0x164($v0)
    ctx->pc = 0x1fffd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 356), bits); }
label_1fffd8:
    // 0x1fffd8: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x1fffd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_1fffdc:
    // 0x1fffdc: 0x8c4300bc  lw          $v1, 0xBC($v0)
    ctx->pc = 0x1fffdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
label_1fffe0:
    // 0x1fffe0: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1fffe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1fffe4:
    // 0x1fffe4: 0x14620013  bne         $v1, $v0, . + 4 + (0x13 << 2)
label_1fffe8:
    if (ctx->pc == 0x1FFFE8u) {
        ctx->pc = 0x1FFFECu;
        goto label_1fffec;
    }
    ctx->pc = 0x1FFFE4u;
    {
        const bool branch_taken_0x1fffe4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1fffe4) {
            ctx->pc = 0x200034u;
            return;
        }
    }
    ctx->pc = 0x1FFFECu;
label_1fffec:
    // 0x1fffec: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x1fffecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_1ffff0:
    // 0x1ffff0: 0xc4410164  lwc1        $f1, 0x164($v0)
    ctx->pc = 0x1ffff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ffff4:
    // 0x1ffff4: 0xc7a0013c  lwc1        $f0, 0x13C($sp)
    ctx->pc = 0x1ffff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ffff8:
    // 0x1ffff8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1ffff8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1ffffc:
    // 0x1ffffc: 0xe4400164  swc1        $f0, 0x164($v0)
    ctx->pc = 0x1ffffcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 356), bits); }
    ctx->pc = 0x200000u;
}
