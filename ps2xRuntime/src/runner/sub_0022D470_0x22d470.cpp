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

// Function: sub_0022D470
// Address: 0x22d470 - 0x22e550
void sub_0022D470_0x22d470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022D470_0x22d470");
#endif

    switch (ctx->pc) {
        case 0x22d470u: goto label_22d470;
        case 0x22d474u: goto label_22d474;
        case 0x22d478u: goto label_22d478;
        case 0x22d47cu: goto label_22d47c;
        case 0x22d480u: goto label_22d480;
        case 0x22d484u: goto label_22d484;
        case 0x22d488u: goto label_22d488;
        case 0x22d48cu: goto label_22d48c;
        case 0x22d490u: goto label_22d490;
        case 0x22d494u: goto label_22d494;
        case 0x22d498u: goto label_22d498;
        case 0x22d49cu: goto label_22d49c;
        case 0x22d4a0u: goto label_22d4a0;
        case 0x22d4a4u: goto label_22d4a4;
        case 0x22d4a8u: goto label_22d4a8;
        case 0x22d4acu: goto label_22d4ac;
        case 0x22d4b0u: goto label_22d4b0;
        case 0x22d4b4u: goto label_22d4b4;
        case 0x22d4b8u: goto label_22d4b8;
        case 0x22d4bcu: goto label_22d4bc;
        case 0x22d4c0u: goto label_22d4c0;
        case 0x22d4c4u: goto label_22d4c4;
        case 0x22d4c8u: goto label_22d4c8;
        case 0x22d4ccu: goto label_22d4cc;
        case 0x22d4d0u: goto label_22d4d0;
        case 0x22d4d4u: goto label_22d4d4;
        case 0x22d4d8u: goto label_22d4d8;
        case 0x22d4dcu: goto label_22d4dc;
        case 0x22d4e0u: goto label_22d4e0;
        case 0x22d4e4u: goto label_22d4e4;
        case 0x22d4e8u: goto label_22d4e8;
        case 0x22d4ecu: goto label_22d4ec;
        case 0x22d4f0u: goto label_22d4f0;
        case 0x22d4f4u: goto label_22d4f4;
        case 0x22d4f8u: goto label_22d4f8;
        case 0x22d4fcu: goto label_22d4fc;
        case 0x22d500u: goto label_22d500;
        case 0x22d504u: goto label_22d504;
        case 0x22d508u: goto label_22d508;
        case 0x22d50cu: goto label_22d50c;
        case 0x22d510u: goto label_22d510;
        case 0x22d514u: goto label_22d514;
        case 0x22d518u: goto label_22d518;
        case 0x22d51cu: goto label_22d51c;
        case 0x22d520u: goto label_22d520;
        case 0x22d524u: goto label_22d524;
        case 0x22d528u: goto label_22d528;
        case 0x22d52cu: goto label_22d52c;
        case 0x22d530u: goto label_22d530;
        case 0x22d534u: goto label_22d534;
        case 0x22d538u: goto label_22d538;
        case 0x22d53cu: goto label_22d53c;
        case 0x22d540u: goto label_22d540;
        case 0x22d544u: goto label_22d544;
        case 0x22d548u: goto label_22d548;
        case 0x22d54cu: goto label_22d54c;
        case 0x22d550u: goto label_22d550;
        case 0x22d554u: goto label_22d554;
        case 0x22d558u: goto label_22d558;
        case 0x22d55cu: goto label_22d55c;
        case 0x22d560u: goto label_22d560;
        case 0x22d564u: goto label_22d564;
        case 0x22d568u: goto label_22d568;
        case 0x22d56cu: goto label_22d56c;
        case 0x22d570u: goto label_22d570;
        case 0x22d574u: goto label_22d574;
        case 0x22d578u: goto label_22d578;
        case 0x22d57cu: goto label_22d57c;
        case 0x22d580u: goto label_22d580;
        case 0x22d584u: goto label_22d584;
        case 0x22d588u: goto label_22d588;
        case 0x22d58cu: goto label_22d58c;
        case 0x22d590u: goto label_22d590;
        case 0x22d594u: goto label_22d594;
        case 0x22d598u: goto label_22d598;
        case 0x22d59cu: goto label_22d59c;
        case 0x22d5a0u: goto label_22d5a0;
        case 0x22d5a4u: goto label_22d5a4;
        case 0x22d5a8u: goto label_22d5a8;
        case 0x22d5acu: goto label_22d5ac;
        case 0x22d5b0u: goto label_22d5b0;
        case 0x22d5b4u: goto label_22d5b4;
        case 0x22d5b8u: goto label_22d5b8;
        case 0x22d5bcu: goto label_22d5bc;
        case 0x22d5c0u: goto label_22d5c0;
        case 0x22d5c4u: goto label_22d5c4;
        case 0x22d5c8u: goto label_22d5c8;
        case 0x22d5ccu: goto label_22d5cc;
        case 0x22d5d0u: goto label_22d5d0;
        case 0x22d5d4u: goto label_22d5d4;
        case 0x22d5d8u: goto label_22d5d8;
        case 0x22d5dcu: goto label_22d5dc;
        case 0x22d5e0u: goto label_22d5e0;
        case 0x22d5e4u: goto label_22d5e4;
        case 0x22d5e8u: goto label_22d5e8;
        case 0x22d5ecu: goto label_22d5ec;
        case 0x22d5f0u: goto label_22d5f0;
        case 0x22d5f4u: goto label_22d5f4;
        case 0x22d5f8u: goto label_22d5f8;
        case 0x22d5fcu: goto label_22d5fc;
        case 0x22d600u: goto label_22d600;
        case 0x22d604u: goto label_22d604;
        case 0x22d608u: goto label_22d608;
        case 0x22d60cu: goto label_22d60c;
        case 0x22d610u: goto label_22d610;
        case 0x22d614u: goto label_22d614;
        case 0x22d618u: goto label_22d618;
        case 0x22d61cu: goto label_22d61c;
        case 0x22d620u: goto label_22d620;
        case 0x22d624u: goto label_22d624;
        case 0x22d628u: goto label_22d628;
        case 0x22d62cu: goto label_22d62c;
        case 0x22d630u: goto label_22d630;
        case 0x22d634u: goto label_22d634;
        case 0x22d638u: goto label_22d638;
        case 0x22d63cu: goto label_22d63c;
        case 0x22d640u: goto label_22d640;
        case 0x22d644u: goto label_22d644;
        case 0x22d648u: goto label_22d648;
        case 0x22d64cu: goto label_22d64c;
        case 0x22d650u: goto label_22d650;
        case 0x22d654u: goto label_22d654;
        case 0x22d658u: goto label_22d658;
        case 0x22d65cu: goto label_22d65c;
        case 0x22d660u: goto label_22d660;
        case 0x22d664u: goto label_22d664;
        case 0x22d668u: goto label_22d668;
        case 0x22d66cu: goto label_22d66c;
        case 0x22d670u: goto label_22d670;
        case 0x22d674u: goto label_22d674;
        case 0x22d678u: goto label_22d678;
        case 0x22d67cu: goto label_22d67c;
        case 0x22d680u: goto label_22d680;
        case 0x22d684u: goto label_22d684;
        case 0x22d688u: goto label_22d688;
        case 0x22d68cu: goto label_22d68c;
        case 0x22d690u: goto label_22d690;
        case 0x22d694u: goto label_22d694;
        case 0x22d698u: goto label_22d698;
        case 0x22d69cu: goto label_22d69c;
        case 0x22d6a0u: goto label_22d6a0;
        case 0x22d6a4u: goto label_22d6a4;
        case 0x22d6a8u: goto label_22d6a8;
        case 0x22d6acu: goto label_22d6ac;
        case 0x22d6b0u: goto label_22d6b0;
        case 0x22d6b4u: goto label_22d6b4;
        case 0x22d6b8u: goto label_22d6b8;
        case 0x22d6bcu: goto label_22d6bc;
        case 0x22d6c0u: goto label_22d6c0;
        case 0x22d6c4u: goto label_22d6c4;
        case 0x22d6c8u: goto label_22d6c8;
        case 0x22d6ccu: goto label_22d6cc;
        case 0x22d6d0u: goto label_22d6d0;
        case 0x22d6d4u: goto label_22d6d4;
        case 0x22d6d8u: goto label_22d6d8;
        case 0x22d6dcu: goto label_22d6dc;
        case 0x22d6e0u: goto label_22d6e0;
        case 0x22d6e4u: goto label_22d6e4;
        case 0x22d6e8u: goto label_22d6e8;
        case 0x22d6ecu: goto label_22d6ec;
        case 0x22d6f0u: goto label_22d6f0;
        case 0x22d6f4u: goto label_22d6f4;
        case 0x22d6f8u: goto label_22d6f8;
        case 0x22d6fcu: goto label_22d6fc;
        case 0x22d700u: goto label_22d700;
        case 0x22d704u: goto label_22d704;
        case 0x22d708u: goto label_22d708;
        case 0x22d70cu: goto label_22d70c;
        case 0x22d710u: goto label_22d710;
        case 0x22d714u: goto label_22d714;
        case 0x22d718u: goto label_22d718;
        case 0x22d71cu: goto label_22d71c;
        case 0x22d720u: goto label_22d720;
        case 0x22d724u: goto label_22d724;
        case 0x22d728u: goto label_22d728;
        case 0x22d72cu: goto label_22d72c;
        case 0x22d730u: goto label_22d730;
        case 0x22d734u: goto label_22d734;
        case 0x22d738u: goto label_22d738;
        case 0x22d73cu: goto label_22d73c;
        case 0x22d740u: goto label_22d740;
        case 0x22d744u: goto label_22d744;
        case 0x22d748u: goto label_22d748;
        case 0x22d74cu: goto label_22d74c;
        case 0x22d750u: goto label_22d750;
        case 0x22d754u: goto label_22d754;
        case 0x22d758u: goto label_22d758;
        case 0x22d75cu: goto label_22d75c;
        case 0x22d760u: goto label_22d760;
        case 0x22d764u: goto label_22d764;
        case 0x22d768u: goto label_22d768;
        case 0x22d76cu: goto label_22d76c;
        case 0x22d770u: goto label_22d770;
        case 0x22d774u: goto label_22d774;
        case 0x22d778u: goto label_22d778;
        case 0x22d77cu: goto label_22d77c;
        case 0x22d780u: goto label_22d780;
        case 0x22d784u: goto label_22d784;
        case 0x22d788u: goto label_22d788;
        case 0x22d78cu: goto label_22d78c;
        case 0x22d790u: goto label_22d790;
        case 0x22d794u: goto label_22d794;
        case 0x22d798u: goto label_22d798;
        case 0x22d79cu: goto label_22d79c;
        case 0x22d7a0u: goto label_22d7a0;
        case 0x22d7a4u: goto label_22d7a4;
        case 0x22d7a8u: goto label_22d7a8;
        case 0x22d7acu: goto label_22d7ac;
        case 0x22d7b0u: goto label_22d7b0;
        case 0x22d7b4u: goto label_22d7b4;
        case 0x22d7b8u: goto label_22d7b8;
        case 0x22d7bcu: goto label_22d7bc;
        case 0x22d7c0u: goto label_22d7c0;
        case 0x22d7c4u: goto label_22d7c4;
        case 0x22d7c8u: goto label_22d7c8;
        case 0x22d7ccu: goto label_22d7cc;
        case 0x22d7d0u: goto label_22d7d0;
        case 0x22d7d4u: goto label_22d7d4;
        case 0x22d7d8u: goto label_22d7d8;
        case 0x22d7dcu: goto label_22d7dc;
        case 0x22d7e0u: goto label_22d7e0;
        case 0x22d7e4u: goto label_22d7e4;
        case 0x22d7e8u: goto label_22d7e8;
        case 0x22d7ecu: goto label_22d7ec;
        case 0x22d7f0u: goto label_22d7f0;
        case 0x22d7f4u: goto label_22d7f4;
        case 0x22d7f8u: goto label_22d7f8;
        case 0x22d7fcu: goto label_22d7fc;
        case 0x22d800u: goto label_22d800;
        case 0x22d804u: goto label_22d804;
        case 0x22d808u: goto label_22d808;
        case 0x22d80cu: goto label_22d80c;
        case 0x22d810u: goto label_22d810;
        case 0x22d814u: goto label_22d814;
        case 0x22d818u: goto label_22d818;
        case 0x22d81cu: goto label_22d81c;
        case 0x22d820u: goto label_22d820;
        case 0x22d824u: goto label_22d824;
        case 0x22d828u: goto label_22d828;
        case 0x22d82cu: goto label_22d82c;
        case 0x22d830u: goto label_22d830;
        case 0x22d834u: goto label_22d834;
        case 0x22d838u: goto label_22d838;
        case 0x22d83cu: goto label_22d83c;
        case 0x22d840u: goto label_22d840;
        case 0x22d844u: goto label_22d844;
        case 0x22d848u: goto label_22d848;
        case 0x22d84cu: goto label_22d84c;
        case 0x22d850u: goto label_22d850;
        case 0x22d854u: goto label_22d854;
        case 0x22d858u: goto label_22d858;
        case 0x22d85cu: goto label_22d85c;
        case 0x22d860u: goto label_22d860;
        case 0x22d864u: goto label_22d864;
        case 0x22d868u: goto label_22d868;
        case 0x22d86cu: goto label_22d86c;
        case 0x22d870u: goto label_22d870;
        case 0x22d874u: goto label_22d874;
        case 0x22d878u: goto label_22d878;
        case 0x22d87cu: goto label_22d87c;
        case 0x22d880u: goto label_22d880;
        case 0x22d884u: goto label_22d884;
        case 0x22d888u: goto label_22d888;
        case 0x22d88cu: goto label_22d88c;
        case 0x22d890u: goto label_22d890;
        case 0x22d894u: goto label_22d894;
        case 0x22d898u: goto label_22d898;
        case 0x22d89cu: goto label_22d89c;
        case 0x22d8a0u: goto label_22d8a0;
        case 0x22d8a4u: goto label_22d8a4;
        case 0x22d8a8u: goto label_22d8a8;
        case 0x22d8acu: goto label_22d8ac;
        case 0x22d8b0u: goto label_22d8b0;
        case 0x22d8b4u: goto label_22d8b4;
        case 0x22d8b8u: goto label_22d8b8;
        case 0x22d8bcu: goto label_22d8bc;
        case 0x22d8c0u: goto label_22d8c0;
        case 0x22d8c4u: goto label_22d8c4;
        case 0x22d8c8u: goto label_22d8c8;
        case 0x22d8ccu: goto label_22d8cc;
        case 0x22d8d0u: goto label_22d8d0;
        case 0x22d8d4u: goto label_22d8d4;
        case 0x22d8d8u: goto label_22d8d8;
        case 0x22d8dcu: goto label_22d8dc;
        case 0x22d8e0u: goto label_22d8e0;
        case 0x22d8e4u: goto label_22d8e4;
        case 0x22d8e8u: goto label_22d8e8;
        case 0x22d8ecu: goto label_22d8ec;
        case 0x22d8f0u: goto label_22d8f0;
        case 0x22d8f4u: goto label_22d8f4;
        case 0x22d8f8u: goto label_22d8f8;
        case 0x22d8fcu: goto label_22d8fc;
        case 0x22d900u: goto label_22d900;
        case 0x22d904u: goto label_22d904;
        case 0x22d908u: goto label_22d908;
        case 0x22d90cu: goto label_22d90c;
        case 0x22d910u: goto label_22d910;
        case 0x22d914u: goto label_22d914;
        case 0x22d918u: goto label_22d918;
        case 0x22d91cu: goto label_22d91c;
        case 0x22d920u: goto label_22d920;
        case 0x22d924u: goto label_22d924;
        case 0x22d928u: goto label_22d928;
        case 0x22d92cu: goto label_22d92c;
        case 0x22d930u: goto label_22d930;
        case 0x22d934u: goto label_22d934;
        case 0x22d938u: goto label_22d938;
        case 0x22d93cu: goto label_22d93c;
        case 0x22d940u: goto label_22d940;
        case 0x22d944u: goto label_22d944;
        case 0x22d948u: goto label_22d948;
        case 0x22d94cu: goto label_22d94c;
        case 0x22d950u: goto label_22d950;
        case 0x22d954u: goto label_22d954;
        case 0x22d958u: goto label_22d958;
        case 0x22d95cu: goto label_22d95c;
        case 0x22d960u: goto label_22d960;
        case 0x22d964u: goto label_22d964;
        case 0x22d968u: goto label_22d968;
        case 0x22d96cu: goto label_22d96c;
        case 0x22d970u: goto label_22d970;
        case 0x22d974u: goto label_22d974;
        case 0x22d978u: goto label_22d978;
        case 0x22d97cu: goto label_22d97c;
        case 0x22d980u: goto label_22d980;
        case 0x22d984u: goto label_22d984;
        case 0x22d988u: goto label_22d988;
        case 0x22d98cu: goto label_22d98c;
        case 0x22d990u: goto label_22d990;
        case 0x22d994u: goto label_22d994;
        case 0x22d998u: goto label_22d998;
        case 0x22d99cu: goto label_22d99c;
        case 0x22d9a0u: goto label_22d9a0;
        case 0x22d9a4u: goto label_22d9a4;
        case 0x22d9a8u: goto label_22d9a8;
        case 0x22d9acu: goto label_22d9ac;
        case 0x22d9b0u: goto label_22d9b0;
        case 0x22d9b4u: goto label_22d9b4;
        case 0x22d9b8u: goto label_22d9b8;
        case 0x22d9bcu: goto label_22d9bc;
        case 0x22d9c0u: goto label_22d9c0;
        case 0x22d9c4u: goto label_22d9c4;
        case 0x22d9c8u: goto label_22d9c8;
        case 0x22d9ccu: goto label_22d9cc;
        case 0x22d9d0u: goto label_22d9d0;
        case 0x22d9d4u: goto label_22d9d4;
        case 0x22d9d8u: goto label_22d9d8;
        case 0x22d9dcu: goto label_22d9dc;
        case 0x22d9e0u: goto label_22d9e0;
        case 0x22d9e4u: goto label_22d9e4;
        case 0x22d9e8u: goto label_22d9e8;
        case 0x22d9ecu: goto label_22d9ec;
        case 0x22d9f0u: goto label_22d9f0;
        case 0x22d9f4u: goto label_22d9f4;
        case 0x22d9f8u: goto label_22d9f8;
        case 0x22d9fcu: goto label_22d9fc;
        case 0x22da00u: goto label_22da00;
        case 0x22da04u: goto label_22da04;
        case 0x22da08u: goto label_22da08;
        case 0x22da0cu: goto label_22da0c;
        case 0x22da10u: goto label_22da10;
        case 0x22da14u: goto label_22da14;
        case 0x22da18u: goto label_22da18;
        case 0x22da1cu: goto label_22da1c;
        case 0x22da20u: goto label_22da20;
        case 0x22da24u: goto label_22da24;
        case 0x22da28u: goto label_22da28;
        case 0x22da2cu: goto label_22da2c;
        case 0x22da30u: goto label_22da30;
        case 0x22da34u: goto label_22da34;
        case 0x22da38u: goto label_22da38;
        case 0x22da3cu: goto label_22da3c;
        case 0x22da40u: goto label_22da40;
        case 0x22da44u: goto label_22da44;
        case 0x22da48u: goto label_22da48;
        case 0x22da4cu: goto label_22da4c;
        case 0x22da50u: goto label_22da50;
        case 0x22da54u: goto label_22da54;
        case 0x22da58u: goto label_22da58;
        case 0x22da5cu: goto label_22da5c;
        case 0x22da60u: goto label_22da60;
        case 0x22da64u: goto label_22da64;
        case 0x22da68u: goto label_22da68;
        case 0x22da6cu: goto label_22da6c;
        case 0x22da70u: goto label_22da70;
        case 0x22da74u: goto label_22da74;
        case 0x22da78u: goto label_22da78;
        case 0x22da7cu: goto label_22da7c;
        case 0x22da80u: goto label_22da80;
        case 0x22da84u: goto label_22da84;
        case 0x22da88u: goto label_22da88;
        case 0x22da8cu: goto label_22da8c;
        case 0x22da90u: goto label_22da90;
        case 0x22da94u: goto label_22da94;
        case 0x22da98u: goto label_22da98;
        case 0x22da9cu: goto label_22da9c;
        case 0x22daa0u: goto label_22daa0;
        case 0x22daa4u: goto label_22daa4;
        case 0x22daa8u: goto label_22daa8;
        case 0x22daacu: goto label_22daac;
        case 0x22dab0u: goto label_22dab0;
        case 0x22dab4u: goto label_22dab4;
        case 0x22dab8u: goto label_22dab8;
        case 0x22dabcu: goto label_22dabc;
        case 0x22dac0u: goto label_22dac0;
        case 0x22dac4u: goto label_22dac4;
        case 0x22dac8u: goto label_22dac8;
        case 0x22daccu: goto label_22dacc;
        case 0x22dad0u: goto label_22dad0;
        case 0x22dad4u: goto label_22dad4;
        case 0x22dad8u: goto label_22dad8;
        case 0x22dadcu: goto label_22dadc;
        case 0x22dae0u: goto label_22dae0;
        case 0x22dae4u: goto label_22dae4;
        case 0x22dae8u: goto label_22dae8;
        case 0x22daecu: goto label_22daec;
        case 0x22daf0u: goto label_22daf0;
        case 0x22daf4u: goto label_22daf4;
        case 0x22daf8u: goto label_22daf8;
        case 0x22dafcu: goto label_22dafc;
        case 0x22db00u: goto label_22db00;
        case 0x22db04u: goto label_22db04;
        case 0x22db08u: goto label_22db08;
        case 0x22db0cu: goto label_22db0c;
        case 0x22db10u: goto label_22db10;
        case 0x22db14u: goto label_22db14;
        case 0x22db18u: goto label_22db18;
        case 0x22db1cu: goto label_22db1c;
        case 0x22db20u: goto label_22db20;
        case 0x22db24u: goto label_22db24;
        case 0x22db28u: goto label_22db28;
        case 0x22db2cu: goto label_22db2c;
        case 0x22db30u: goto label_22db30;
        case 0x22db34u: goto label_22db34;
        case 0x22db38u: goto label_22db38;
        case 0x22db3cu: goto label_22db3c;
        case 0x22db40u: goto label_22db40;
        case 0x22db44u: goto label_22db44;
        case 0x22db48u: goto label_22db48;
        case 0x22db4cu: goto label_22db4c;
        case 0x22db50u: goto label_22db50;
        case 0x22db54u: goto label_22db54;
        case 0x22db58u: goto label_22db58;
        case 0x22db5cu: goto label_22db5c;
        case 0x22db60u: goto label_22db60;
        case 0x22db64u: goto label_22db64;
        case 0x22db68u: goto label_22db68;
        case 0x22db6cu: goto label_22db6c;
        case 0x22db70u: goto label_22db70;
        case 0x22db74u: goto label_22db74;
        case 0x22db78u: goto label_22db78;
        case 0x22db7cu: goto label_22db7c;
        case 0x22db80u: goto label_22db80;
        case 0x22db84u: goto label_22db84;
        case 0x22db88u: goto label_22db88;
        case 0x22db8cu: goto label_22db8c;
        case 0x22db90u: goto label_22db90;
        case 0x22db94u: goto label_22db94;
        case 0x22db98u: goto label_22db98;
        case 0x22db9cu: goto label_22db9c;
        case 0x22dba0u: goto label_22dba0;
        case 0x22dba4u: goto label_22dba4;
        case 0x22dba8u: goto label_22dba8;
        case 0x22dbacu: goto label_22dbac;
        case 0x22dbb0u: goto label_22dbb0;
        case 0x22dbb4u: goto label_22dbb4;
        case 0x22dbb8u: goto label_22dbb8;
        case 0x22dbbcu: goto label_22dbbc;
        case 0x22dbc0u: goto label_22dbc0;
        case 0x22dbc4u: goto label_22dbc4;
        case 0x22dbc8u: goto label_22dbc8;
        case 0x22dbccu: goto label_22dbcc;
        case 0x22dbd0u: goto label_22dbd0;
        case 0x22dbd4u: goto label_22dbd4;
        case 0x22dbd8u: goto label_22dbd8;
        case 0x22dbdcu: goto label_22dbdc;
        case 0x22dbe0u: goto label_22dbe0;
        case 0x22dbe4u: goto label_22dbe4;
        case 0x22dbe8u: goto label_22dbe8;
        case 0x22dbecu: goto label_22dbec;
        case 0x22dbf0u: goto label_22dbf0;
        case 0x22dbf4u: goto label_22dbf4;
        case 0x22dbf8u: goto label_22dbf8;
        case 0x22dbfcu: goto label_22dbfc;
        case 0x22dc00u: goto label_22dc00;
        case 0x22dc04u: goto label_22dc04;
        case 0x22dc08u: goto label_22dc08;
        case 0x22dc0cu: goto label_22dc0c;
        case 0x22dc10u: goto label_22dc10;
        case 0x22dc14u: goto label_22dc14;
        case 0x22dc18u: goto label_22dc18;
        case 0x22dc1cu: goto label_22dc1c;
        case 0x22dc20u: goto label_22dc20;
        case 0x22dc24u: goto label_22dc24;
        case 0x22dc28u: goto label_22dc28;
        case 0x22dc2cu: goto label_22dc2c;
        case 0x22dc30u: goto label_22dc30;
        case 0x22dc34u: goto label_22dc34;
        case 0x22dc38u: goto label_22dc38;
        case 0x22dc3cu: goto label_22dc3c;
        case 0x22dc40u: goto label_22dc40;
        case 0x22dc44u: goto label_22dc44;
        case 0x22dc48u: goto label_22dc48;
        case 0x22dc4cu: goto label_22dc4c;
        case 0x22dc50u: goto label_22dc50;
        case 0x22dc54u: goto label_22dc54;
        case 0x22dc58u: goto label_22dc58;
        case 0x22dc5cu: goto label_22dc5c;
        case 0x22dc60u: goto label_22dc60;
        case 0x22dc64u: goto label_22dc64;
        case 0x22dc68u: goto label_22dc68;
        case 0x22dc6cu: goto label_22dc6c;
        case 0x22dc70u: goto label_22dc70;
        case 0x22dc74u: goto label_22dc74;
        case 0x22dc78u: goto label_22dc78;
        case 0x22dc7cu: goto label_22dc7c;
        case 0x22dc80u: goto label_22dc80;
        case 0x22dc84u: goto label_22dc84;
        case 0x22dc88u: goto label_22dc88;
        case 0x22dc8cu: goto label_22dc8c;
        case 0x22dc90u: goto label_22dc90;
        case 0x22dc94u: goto label_22dc94;
        case 0x22dc98u: goto label_22dc98;
        case 0x22dc9cu: goto label_22dc9c;
        case 0x22dca0u: goto label_22dca0;
        case 0x22dca4u: goto label_22dca4;
        case 0x22dca8u: goto label_22dca8;
        case 0x22dcacu: goto label_22dcac;
        case 0x22dcb0u: goto label_22dcb0;
        case 0x22dcb4u: goto label_22dcb4;
        case 0x22dcb8u: goto label_22dcb8;
        case 0x22dcbcu: goto label_22dcbc;
        case 0x22dcc0u: goto label_22dcc0;
        case 0x22dcc4u: goto label_22dcc4;
        case 0x22dcc8u: goto label_22dcc8;
        case 0x22dcccu: goto label_22dccc;
        case 0x22dcd0u: goto label_22dcd0;
        case 0x22dcd4u: goto label_22dcd4;
        case 0x22dcd8u: goto label_22dcd8;
        case 0x22dcdcu: goto label_22dcdc;
        case 0x22dce0u: goto label_22dce0;
        case 0x22dce4u: goto label_22dce4;
        case 0x22dce8u: goto label_22dce8;
        case 0x22dcecu: goto label_22dcec;
        case 0x22dcf0u: goto label_22dcf0;
        case 0x22dcf4u: goto label_22dcf4;
        case 0x22dcf8u: goto label_22dcf8;
        case 0x22dcfcu: goto label_22dcfc;
        case 0x22dd00u: goto label_22dd00;
        case 0x22dd04u: goto label_22dd04;
        case 0x22dd08u: goto label_22dd08;
        case 0x22dd0cu: goto label_22dd0c;
        case 0x22dd10u: goto label_22dd10;
        case 0x22dd14u: goto label_22dd14;
        case 0x22dd18u: goto label_22dd18;
        case 0x22dd1cu: goto label_22dd1c;
        case 0x22dd20u: goto label_22dd20;
        case 0x22dd24u: goto label_22dd24;
        case 0x22dd28u: goto label_22dd28;
        case 0x22dd2cu: goto label_22dd2c;
        case 0x22dd30u: goto label_22dd30;
        case 0x22dd34u: goto label_22dd34;
        case 0x22dd38u: goto label_22dd38;
        case 0x22dd3cu: goto label_22dd3c;
        case 0x22dd40u: goto label_22dd40;
        case 0x22dd44u: goto label_22dd44;
        case 0x22dd48u: goto label_22dd48;
        case 0x22dd4cu: goto label_22dd4c;
        case 0x22dd50u: goto label_22dd50;
        case 0x22dd54u: goto label_22dd54;
        case 0x22dd58u: goto label_22dd58;
        case 0x22dd5cu: goto label_22dd5c;
        case 0x22dd60u: goto label_22dd60;
        case 0x22dd64u: goto label_22dd64;
        case 0x22dd68u: goto label_22dd68;
        case 0x22dd6cu: goto label_22dd6c;
        case 0x22dd70u: goto label_22dd70;
        case 0x22dd74u: goto label_22dd74;
        case 0x22dd78u: goto label_22dd78;
        case 0x22dd7cu: goto label_22dd7c;
        case 0x22dd80u: goto label_22dd80;
        case 0x22dd84u: goto label_22dd84;
        case 0x22dd88u: goto label_22dd88;
        case 0x22dd8cu: goto label_22dd8c;
        case 0x22dd90u: goto label_22dd90;
        case 0x22dd94u: goto label_22dd94;
        case 0x22dd98u: goto label_22dd98;
        case 0x22dd9cu: goto label_22dd9c;
        case 0x22dda0u: goto label_22dda0;
        case 0x22dda4u: goto label_22dda4;
        case 0x22dda8u: goto label_22dda8;
        case 0x22ddacu: goto label_22ddac;
        case 0x22ddb0u: goto label_22ddb0;
        case 0x22ddb4u: goto label_22ddb4;
        case 0x22ddb8u: goto label_22ddb8;
        case 0x22ddbcu: goto label_22ddbc;
        case 0x22ddc0u: goto label_22ddc0;
        case 0x22ddc4u: goto label_22ddc4;
        case 0x22ddc8u: goto label_22ddc8;
        case 0x22ddccu: goto label_22ddcc;
        case 0x22ddd0u: goto label_22ddd0;
        case 0x22ddd4u: goto label_22ddd4;
        case 0x22ddd8u: goto label_22ddd8;
        case 0x22dddcu: goto label_22dddc;
        case 0x22dde0u: goto label_22dde0;
        case 0x22dde4u: goto label_22dde4;
        case 0x22dde8u: goto label_22dde8;
        case 0x22ddecu: goto label_22ddec;
        case 0x22ddf0u: goto label_22ddf0;
        case 0x22ddf4u: goto label_22ddf4;
        case 0x22ddf8u: goto label_22ddf8;
        case 0x22ddfcu: goto label_22ddfc;
        case 0x22de00u: goto label_22de00;
        case 0x22de04u: goto label_22de04;
        case 0x22de08u: goto label_22de08;
        case 0x22de0cu: goto label_22de0c;
        case 0x22de10u: goto label_22de10;
        case 0x22de14u: goto label_22de14;
        case 0x22de18u: goto label_22de18;
        case 0x22de1cu: goto label_22de1c;
        case 0x22de20u: goto label_22de20;
        case 0x22de24u: goto label_22de24;
        case 0x22de28u: goto label_22de28;
        case 0x22de2cu: goto label_22de2c;
        case 0x22de30u: goto label_22de30;
        case 0x22de34u: goto label_22de34;
        case 0x22de38u: goto label_22de38;
        case 0x22de3cu: goto label_22de3c;
        case 0x22de40u: goto label_22de40;
        case 0x22de44u: goto label_22de44;
        case 0x22de48u: goto label_22de48;
        case 0x22de4cu: goto label_22de4c;
        case 0x22de50u: goto label_22de50;
        case 0x22de54u: goto label_22de54;
        case 0x22de58u: goto label_22de58;
        case 0x22de5cu: goto label_22de5c;
        case 0x22de60u: goto label_22de60;
        case 0x22de64u: goto label_22de64;
        case 0x22de68u: goto label_22de68;
        case 0x22de6cu: goto label_22de6c;
        case 0x22de70u: goto label_22de70;
        case 0x22de74u: goto label_22de74;
        case 0x22de78u: goto label_22de78;
        case 0x22de7cu: goto label_22de7c;
        case 0x22de80u: goto label_22de80;
        case 0x22de84u: goto label_22de84;
        case 0x22de88u: goto label_22de88;
        case 0x22de8cu: goto label_22de8c;
        case 0x22de90u: goto label_22de90;
        case 0x22de94u: goto label_22de94;
        case 0x22de98u: goto label_22de98;
        case 0x22de9cu: goto label_22de9c;
        case 0x22dea0u: goto label_22dea0;
        case 0x22dea4u: goto label_22dea4;
        case 0x22dea8u: goto label_22dea8;
        case 0x22deacu: goto label_22deac;
        case 0x22deb0u: goto label_22deb0;
        case 0x22deb4u: goto label_22deb4;
        case 0x22deb8u: goto label_22deb8;
        case 0x22debcu: goto label_22debc;
        case 0x22dec0u: goto label_22dec0;
        case 0x22dec4u: goto label_22dec4;
        case 0x22dec8u: goto label_22dec8;
        case 0x22deccu: goto label_22decc;
        case 0x22ded0u: goto label_22ded0;
        case 0x22ded4u: goto label_22ded4;
        case 0x22ded8u: goto label_22ded8;
        case 0x22dedcu: goto label_22dedc;
        case 0x22dee0u: goto label_22dee0;
        case 0x22dee4u: goto label_22dee4;
        case 0x22dee8u: goto label_22dee8;
        case 0x22deecu: goto label_22deec;
        case 0x22def0u: goto label_22def0;
        case 0x22def4u: goto label_22def4;
        case 0x22def8u: goto label_22def8;
        case 0x22defcu: goto label_22defc;
        case 0x22df00u: goto label_22df00;
        case 0x22df04u: goto label_22df04;
        case 0x22df08u: goto label_22df08;
        case 0x22df0cu: goto label_22df0c;
        case 0x22df10u: goto label_22df10;
        case 0x22df14u: goto label_22df14;
        case 0x22df18u: goto label_22df18;
        case 0x22df1cu: goto label_22df1c;
        case 0x22df20u: goto label_22df20;
        case 0x22df24u: goto label_22df24;
        case 0x22df28u: goto label_22df28;
        case 0x22df2cu: goto label_22df2c;
        case 0x22df30u: goto label_22df30;
        case 0x22df34u: goto label_22df34;
        case 0x22df38u: goto label_22df38;
        case 0x22df3cu: goto label_22df3c;
        case 0x22df40u: goto label_22df40;
        case 0x22df44u: goto label_22df44;
        case 0x22df48u: goto label_22df48;
        case 0x22df4cu: goto label_22df4c;
        case 0x22df50u: goto label_22df50;
        case 0x22df54u: goto label_22df54;
        case 0x22df58u: goto label_22df58;
        case 0x22df5cu: goto label_22df5c;
        case 0x22df60u: goto label_22df60;
        case 0x22df64u: goto label_22df64;
        case 0x22df68u: goto label_22df68;
        case 0x22df6cu: goto label_22df6c;
        case 0x22df70u: goto label_22df70;
        case 0x22df74u: goto label_22df74;
        case 0x22df78u: goto label_22df78;
        case 0x22df7cu: goto label_22df7c;
        case 0x22df80u: goto label_22df80;
        case 0x22df84u: goto label_22df84;
        case 0x22df88u: goto label_22df88;
        case 0x22df8cu: goto label_22df8c;
        case 0x22df90u: goto label_22df90;
        case 0x22df94u: goto label_22df94;
        case 0x22df98u: goto label_22df98;
        case 0x22df9cu: goto label_22df9c;
        case 0x22dfa0u: goto label_22dfa0;
        case 0x22dfa4u: goto label_22dfa4;
        case 0x22dfa8u: goto label_22dfa8;
        case 0x22dfacu: goto label_22dfac;
        case 0x22dfb0u: goto label_22dfb0;
        case 0x22dfb4u: goto label_22dfb4;
        case 0x22dfb8u: goto label_22dfb8;
        case 0x22dfbcu: goto label_22dfbc;
        case 0x22dfc0u: goto label_22dfc0;
        case 0x22dfc4u: goto label_22dfc4;
        case 0x22dfc8u: goto label_22dfc8;
        case 0x22dfccu: goto label_22dfcc;
        case 0x22dfd0u: goto label_22dfd0;
        case 0x22dfd4u: goto label_22dfd4;
        case 0x22dfd8u: goto label_22dfd8;
        case 0x22dfdcu: goto label_22dfdc;
        case 0x22dfe0u: goto label_22dfe0;
        case 0x22dfe4u: goto label_22dfe4;
        case 0x22dfe8u: goto label_22dfe8;
        case 0x22dfecu: goto label_22dfec;
        case 0x22dff0u: goto label_22dff0;
        case 0x22dff4u: goto label_22dff4;
        case 0x22dff8u: goto label_22dff8;
        case 0x22dffcu: goto label_22dffc;
        case 0x22e000u: goto label_22e000;
        case 0x22e004u: goto label_22e004;
        case 0x22e008u: goto label_22e008;
        case 0x22e00cu: goto label_22e00c;
        case 0x22e010u: goto label_22e010;
        case 0x22e014u: goto label_22e014;
        case 0x22e018u: goto label_22e018;
        case 0x22e01cu: goto label_22e01c;
        case 0x22e020u: goto label_22e020;
        case 0x22e024u: goto label_22e024;
        case 0x22e028u: goto label_22e028;
        case 0x22e02cu: goto label_22e02c;
        case 0x22e030u: goto label_22e030;
        case 0x22e034u: goto label_22e034;
        case 0x22e038u: goto label_22e038;
        case 0x22e03cu: goto label_22e03c;
        case 0x22e040u: goto label_22e040;
        case 0x22e044u: goto label_22e044;
        case 0x22e048u: goto label_22e048;
        case 0x22e04cu: goto label_22e04c;
        case 0x22e050u: goto label_22e050;
        case 0x22e054u: goto label_22e054;
        case 0x22e058u: goto label_22e058;
        case 0x22e05cu: goto label_22e05c;
        case 0x22e060u: goto label_22e060;
        case 0x22e064u: goto label_22e064;
        case 0x22e068u: goto label_22e068;
        case 0x22e06cu: goto label_22e06c;
        case 0x22e070u: goto label_22e070;
        case 0x22e074u: goto label_22e074;
        case 0x22e078u: goto label_22e078;
        case 0x22e07cu: goto label_22e07c;
        case 0x22e080u: goto label_22e080;
        case 0x22e084u: goto label_22e084;
        case 0x22e088u: goto label_22e088;
        case 0x22e08cu: goto label_22e08c;
        case 0x22e090u: goto label_22e090;
        case 0x22e094u: goto label_22e094;
        case 0x22e098u: goto label_22e098;
        case 0x22e09cu: goto label_22e09c;
        case 0x22e0a0u: goto label_22e0a0;
        case 0x22e0a4u: goto label_22e0a4;
        case 0x22e0a8u: goto label_22e0a8;
        case 0x22e0acu: goto label_22e0ac;
        case 0x22e0b0u: goto label_22e0b0;
        case 0x22e0b4u: goto label_22e0b4;
        case 0x22e0b8u: goto label_22e0b8;
        case 0x22e0bcu: goto label_22e0bc;
        case 0x22e0c0u: goto label_22e0c0;
        case 0x22e0c4u: goto label_22e0c4;
        case 0x22e0c8u: goto label_22e0c8;
        case 0x22e0ccu: goto label_22e0cc;
        case 0x22e0d0u: goto label_22e0d0;
        case 0x22e0d4u: goto label_22e0d4;
        case 0x22e0d8u: goto label_22e0d8;
        case 0x22e0dcu: goto label_22e0dc;
        case 0x22e0e0u: goto label_22e0e0;
        case 0x22e0e4u: goto label_22e0e4;
        case 0x22e0e8u: goto label_22e0e8;
        case 0x22e0ecu: goto label_22e0ec;
        case 0x22e0f0u: goto label_22e0f0;
        case 0x22e0f4u: goto label_22e0f4;
        case 0x22e0f8u: goto label_22e0f8;
        case 0x22e0fcu: goto label_22e0fc;
        case 0x22e100u: goto label_22e100;
        case 0x22e104u: goto label_22e104;
        case 0x22e108u: goto label_22e108;
        case 0x22e10cu: goto label_22e10c;
        case 0x22e110u: goto label_22e110;
        case 0x22e114u: goto label_22e114;
        case 0x22e118u: goto label_22e118;
        case 0x22e11cu: goto label_22e11c;
        case 0x22e120u: goto label_22e120;
        case 0x22e124u: goto label_22e124;
        case 0x22e128u: goto label_22e128;
        case 0x22e12cu: goto label_22e12c;
        case 0x22e130u: goto label_22e130;
        case 0x22e134u: goto label_22e134;
        case 0x22e138u: goto label_22e138;
        case 0x22e13cu: goto label_22e13c;
        case 0x22e140u: goto label_22e140;
        case 0x22e144u: goto label_22e144;
        case 0x22e148u: goto label_22e148;
        case 0x22e14cu: goto label_22e14c;
        case 0x22e150u: goto label_22e150;
        case 0x22e154u: goto label_22e154;
        case 0x22e158u: goto label_22e158;
        case 0x22e15cu: goto label_22e15c;
        case 0x22e160u: goto label_22e160;
        case 0x22e164u: goto label_22e164;
        case 0x22e168u: goto label_22e168;
        case 0x22e16cu: goto label_22e16c;
        case 0x22e170u: goto label_22e170;
        case 0x22e174u: goto label_22e174;
        case 0x22e178u: goto label_22e178;
        case 0x22e17cu: goto label_22e17c;
        case 0x22e180u: goto label_22e180;
        case 0x22e184u: goto label_22e184;
        case 0x22e188u: goto label_22e188;
        case 0x22e18cu: goto label_22e18c;
        case 0x22e190u: goto label_22e190;
        case 0x22e194u: goto label_22e194;
        case 0x22e198u: goto label_22e198;
        case 0x22e19cu: goto label_22e19c;
        case 0x22e1a0u: goto label_22e1a0;
        case 0x22e1a4u: goto label_22e1a4;
        case 0x22e1a8u: goto label_22e1a8;
        case 0x22e1acu: goto label_22e1ac;
        case 0x22e1b0u: goto label_22e1b0;
        case 0x22e1b4u: goto label_22e1b4;
        case 0x22e1b8u: goto label_22e1b8;
        case 0x22e1bcu: goto label_22e1bc;
        case 0x22e1c0u: goto label_22e1c0;
        case 0x22e1c4u: goto label_22e1c4;
        case 0x22e1c8u: goto label_22e1c8;
        case 0x22e1ccu: goto label_22e1cc;
        case 0x22e1d0u: goto label_22e1d0;
        case 0x22e1d4u: goto label_22e1d4;
        case 0x22e1d8u: goto label_22e1d8;
        case 0x22e1dcu: goto label_22e1dc;
        case 0x22e1e0u: goto label_22e1e0;
        case 0x22e1e4u: goto label_22e1e4;
        case 0x22e1e8u: goto label_22e1e8;
        case 0x22e1ecu: goto label_22e1ec;
        case 0x22e1f0u: goto label_22e1f0;
        case 0x22e1f4u: goto label_22e1f4;
        case 0x22e1f8u: goto label_22e1f8;
        case 0x22e1fcu: goto label_22e1fc;
        case 0x22e200u: goto label_22e200;
        case 0x22e204u: goto label_22e204;
        case 0x22e208u: goto label_22e208;
        case 0x22e20cu: goto label_22e20c;
        case 0x22e210u: goto label_22e210;
        case 0x22e214u: goto label_22e214;
        case 0x22e218u: goto label_22e218;
        case 0x22e21cu: goto label_22e21c;
        case 0x22e220u: goto label_22e220;
        case 0x22e224u: goto label_22e224;
        case 0x22e228u: goto label_22e228;
        case 0x22e22cu: goto label_22e22c;
        case 0x22e230u: goto label_22e230;
        case 0x22e234u: goto label_22e234;
        case 0x22e238u: goto label_22e238;
        case 0x22e23cu: goto label_22e23c;
        case 0x22e240u: goto label_22e240;
        case 0x22e244u: goto label_22e244;
        case 0x22e248u: goto label_22e248;
        case 0x22e24cu: goto label_22e24c;
        case 0x22e250u: goto label_22e250;
        case 0x22e254u: goto label_22e254;
        case 0x22e258u: goto label_22e258;
        case 0x22e25cu: goto label_22e25c;
        case 0x22e260u: goto label_22e260;
        case 0x22e264u: goto label_22e264;
        case 0x22e268u: goto label_22e268;
        case 0x22e26cu: goto label_22e26c;
        case 0x22e270u: goto label_22e270;
        case 0x22e274u: goto label_22e274;
        case 0x22e278u: goto label_22e278;
        case 0x22e27cu: goto label_22e27c;
        case 0x22e280u: goto label_22e280;
        case 0x22e284u: goto label_22e284;
        case 0x22e288u: goto label_22e288;
        case 0x22e28cu: goto label_22e28c;
        case 0x22e290u: goto label_22e290;
        case 0x22e294u: goto label_22e294;
        case 0x22e298u: goto label_22e298;
        case 0x22e29cu: goto label_22e29c;
        case 0x22e2a0u: goto label_22e2a0;
        case 0x22e2a4u: goto label_22e2a4;
        case 0x22e2a8u: goto label_22e2a8;
        case 0x22e2acu: goto label_22e2ac;
        case 0x22e2b0u: goto label_22e2b0;
        case 0x22e2b4u: goto label_22e2b4;
        case 0x22e2b8u: goto label_22e2b8;
        case 0x22e2bcu: goto label_22e2bc;
        case 0x22e2c0u: goto label_22e2c0;
        case 0x22e2c4u: goto label_22e2c4;
        case 0x22e2c8u: goto label_22e2c8;
        case 0x22e2ccu: goto label_22e2cc;
        case 0x22e2d0u: goto label_22e2d0;
        case 0x22e2d4u: goto label_22e2d4;
        case 0x22e2d8u: goto label_22e2d8;
        case 0x22e2dcu: goto label_22e2dc;
        case 0x22e2e0u: goto label_22e2e0;
        case 0x22e2e4u: goto label_22e2e4;
        case 0x22e2e8u: goto label_22e2e8;
        case 0x22e2ecu: goto label_22e2ec;
        case 0x22e2f0u: goto label_22e2f0;
        case 0x22e2f4u: goto label_22e2f4;
        case 0x22e2f8u: goto label_22e2f8;
        case 0x22e2fcu: goto label_22e2fc;
        case 0x22e300u: goto label_22e300;
        case 0x22e304u: goto label_22e304;
        case 0x22e308u: goto label_22e308;
        case 0x22e30cu: goto label_22e30c;
        case 0x22e310u: goto label_22e310;
        case 0x22e314u: goto label_22e314;
        case 0x22e318u: goto label_22e318;
        case 0x22e31cu: goto label_22e31c;
        case 0x22e320u: goto label_22e320;
        case 0x22e324u: goto label_22e324;
        case 0x22e328u: goto label_22e328;
        case 0x22e32cu: goto label_22e32c;
        case 0x22e330u: goto label_22e330;
        case 0x22e334u: goto label_22e334;
        case 0x22e338u: goto label_22e338;
        case 0x22e33cu: goto label_22e33c;
        case 0x22e340u: goto label_22e340;
        case 0x22e344u: goto label_22e344;
        case 0x22e348u: goto label_22e348;
        case 0x22e34cu: goto label_22e34c;
        case 0x22e350u: goto label_22e350;
        case 0x22e354u: goto label_22e354;
        case 0x22e358u: goto label_22e358;
        case 0x22e35cu: goto label_22e35c;
        case 0x22e360u: goto label_22e360;
        case 0x22e364u: goto label_22e364;
        case 0x22e368u: goto label_22e368;
        case 0x22e36cu: goto label_22e36c;
        case 0x22e370u: goto label_22e370;
        case 0x22e374u: goto label_22e374;
        case 0x22e378u: goto label_22e378;
        case 0x22e37cu: goto label_22e37c;
        case 0x22e380u: goto label_22e380;
        case 0x22e384u: goto label_22e384;
        case 0x22e388u: goto label_22e388;
        case 0x22e38cu: goto label_22e38c;
        case 0x22e390u: goto label_22e390;
        case 0x22e394u: goto label_22e394;
        case 0x22e398u: goto label_22e398;
        case 0x22e39cu: goto label_22e39c;
        case 0x22e3a0u: goto label_22e3a0;
        case 0x22e3a4u: goto label_22e3a4;
        case 0x22e3a8u: goto label_22e3a8;
        case 0x22e3acu: goto label_22e3ac;
        case 0x22e3b0u: goto label_22e3b0;
        case 0x22e3b4u: goto label_22e3b4;
        case 0x22e3b8u: goto label_22e3b8;
        case 0x22e3bcu: goto label_22e3bc;
        case 0x22e3c0u: goto label_22e3c0;
        case 0x22e3c4u: goto label_22e3c4;
        case 0x22e3c8u: goto label_22e3c8;
        case 0x22e3ccu: goto label_22e3cc;
        case 0x22e3d0u: goto label_22e3d0;
        case 0x22e3d4u: goto label_22e3d4;
        case 0x22e3d8u: goto label_22e3d8;
        case 0x22e3dcu: goto label_22e3dc;
        case 0x22e3e0u: goto label_22e3e0;
        case 0x22e3e4u: goto label_22e3e4;
        case 0x22e3e8u: goto label_22e3e8;
        case 0x22e3ecu: goto label_22e3ec;
        case 0x22e3f0u: goto label_22e3f0;
        case 0x22e3f4u: goto label_22e3f4;
        case 0x22e3f8u: goto label_22e3f8;
        case 0x22e3fcu: goto label_22e3fc;
        case 0x22e400u: goto label_22e400;
        case 0x22e404u: goto label_22e404;
        case 0x22e408u: goto label_22e408;
        case 0x22e40cu: goto label_22e40c;
        case 0x22e410u: goto label_22e410;
        case 0x22e414u: goto label_22e414;
        case 0x22e418u: goto label_22e418;
        case 0x22e41cu: goto label_22e41c;
        case 0x22e420u: goto label_22e420;
        case 0x22e424u: goto label_22e424;
        case 0x22e428u: goto label_22e428;
        case 0x22e42cu: goto label_22e42c;
        case 0x22e430u: goto label_22e430;
        case 0x22e434u: goto label_22e434;
        case 0x22e438u: goto label_22e438;
        case 0x22e43cu: goto label_22e43c;
        case 0x22e440u: goto label_22e440;
        case 0x22e444u: goto label_22e444;
        case 0x22e448u: goto label_22e448;
        case 0x22e44cu: goto label_22e44c;
        case 0x22e450u: goto label_22e450;
        case 0x22e454u: goto label_22e454;
        case 0x22e458u: goto label_22e458;
        case 0x22e45cu: goto label_22e45c;
        case 0x22e460u: goto label_22e460;
        case 0x22e464u: goto label_22e464;
        case 0x22e468u: goto label_22e468;
        case 0x22e46cu: goto label_22e46c;
        case 0x22e470u: goto label_22e470;
        case 0x22e474u: goto label_22e474;
        case 0x22e478u: goto label_22e478;
        case 0x22e47cu: goto label_22e47c;
        case 0x22e480u: goto label_22e480;
        case 0x22e484u: goto label_22e484;
        case 0x22e488u: goto label_22e488;
        case 0x22e48cu: goto label_22e48c;
        case 0x22e490u: goto label_22e490;
        case 0x22e494u: goto label_22e494;
        case 0x22e498u: goto label_22e498;
        case 0x22e49cu: goto label_22e49c;
        case 0x22e4a0u: goto label_22e4a0;
        case 0x22e4a4u: goto label_22e4a4;
        case 0x22e4a8u: goto label_22e4a8;
        case 0x22e4acu: goto label_22e4ac;
        case 0x22e4b0u: goto label_22e4b0;
        case 0x22e4b4u: goto label_22e4b4;
        case 0x22e4b8u: goto label_22e4b8;
        case 0x22e4bcu: goto label_22e4bc;
        case 0x22e4c0u: goto label_22e4c0;
        case 0x22e4c4u: goto label_22e4c4;
        case 0x22e4c8u: goto label_22e4c8;
        case 0x22e4ccu: goto label_22e4cc;
        case 0x22e4d0u: goto label_22e4d0;
        case 0x22e4d4u: goto label_22e4d4;
        case 0x22e4d8u: goto label_22e4d8;
        case 0x22e4dcu: goto label_22e4dc;
        case 0x22e4e0u: goto label_22e4e0;
        case 0x22e4e4u: goto label_22e4e4;
        case 0x22e4e8u: goto label_22e4e8;
        case 0x22e4ecu: goto label_22e4ec;
        case 0x22e4f0u: goto label_22e4f0;
        case 0x22e4f4u: goto label_22e4f4;
        case 0x22e4f8u: goto label_22e4f8;
        case 0x22e4fcu: goto label_22e4fc;
        case 0x22e500u: goto label_22e500;
        case 0x22e504u: goto label_22e504;
        case 0x22e508u: goto label_22e508;
        case 0x22e50cu: goto label_22e50c;
        case 0x22e510u: goto label_22e510;
        case 0x22e514u: goto label_22e514;
        case 0x22e518u: goto label_22e518;
        case 0x22e51cu: goto label_22e51c;
        case 0x22e520u: goto label_22e520;
        case 0x22e524u: goto label_22e524;
        case 0x22e528u: goto label_22e528;
        case 0x22e52cu: goto label_22e52c;
        case 0x22e530u: goto label_22e530;
        case 0x22e534u: goto label_22e534;
        case 0x22e538u: goto label_22e538;
        case 0x22e53cu: goto label_22e53c;
        case 0x22e540u: goto label_22e540;
        case 0x22e544u: goto label_22e544;
        case 0x22e548u: goto label_22e548;
        case 0x22e54cu: goto label_22e54c;
        default: break;
    }

    ctx->pc = 0x22d470u;

label_22d470:
    // 0x22d470: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x22d470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_22d474:
    // 0x22d474: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x22d474u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_22d478:
    // 0x22d478: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x22d478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_22d47c:
    // 0x22d47c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x22d47cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_22d480:
    // 0x22d480: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x22d480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_22d484:
    // 0x22d484: 0x3e00008  jr          $ra
label_22d488:
    if (ctx->pc == 0x22D488u) {
        ctx->pc = 0x22D48Cu;
        goto label_22d48c;
    }
    ctx->pc = 0x22D484u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22D484u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22D48Cu;
label_22d48c:
    // 0x22d48c: 0x0  nop
    ctx->pc = 0x22d48cu;
    // NOP
label_22d490:
    // 0x22d490: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x22d490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_22d494:
    // 0x22d494: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22d494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_22d498:
    // 0x22d498: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x22d498u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_22d49c:
    // 0x22d49c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x22d49cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_22d4a0:
    // 0x22d4a0: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x22d4a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_22d4a4:
    // 0x22d4a4: 0xc08b498  jal         func_22D260
label_22d4a8:
    if (ctx->pc == 0x22D4A8u) {
        ctx->pc = 0x22D4ACu;
        goto label_22d4ac;
    }
    ctx->pc = 0x22D4A4u;
    SET_GPR_U32(ctx, 31, 0x22D4ACu);
    ctx->pc = 0x22D260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D260u, 0x22D4A4u, 0x22D4ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D4ACu;
label_22d4ac:
    // 0x22d4ac: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x22d4acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_22d4b0:
    // 0x22d4b0: 0x24440034  addiu       $a0, $v0, 0x34
    ctx->pc = 0x22d4b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
label_22d4b4:
    // 0x22d4b4: 0xc08b3a8  jal         func_22CEA0
label_22d4b8:
    if (ctx->pc == 0x22D4B8u) {
        ctx->pc = 0x22D4BCu;
        goto label_22d4bc;
    }
    ctx->pc = 0x22D4B4u;
    SET_GPR_U32(ctx, 31, 0x22D4BCu);
    ctx->pc = 0x22CEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22CEA0u, 0x22D4B4u, 0x22D4BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D4BCu;
label_22d4bc:
    // 0x22d4bc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x22d4bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_22d4c0:
    // 0x22d4c0: 0xc08ec5c  jal         func_23B170
label_22d4c4:
    if (ctx->pc == 0x22D4C4u) {
        ctx->pc = 0x22D4C8u;
        goto label_22d4c8;
    }
    ctx->pc = 0x22D4C0u;
    SET_GPR_U32(ctx, 31, 0x22D4C8u);
    ctx->pc = 0x23B170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B170u, 0x22D4C0u, 0x22D4C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D4C8u;
label_22d4c8:
    // 0x22d4c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22d4c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_22d4cc:
    // 0x22d4cc: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x22d4ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_22d4d0:
    // 0x22d4d0: 0x3e00008  jr          $ra
label_22d4d4:
    if (ctx->pc == 0x22D4D4u) {
        ctx->pc = 0x22D4D8u;
        goto label_22d4d8;
    }
    ctx->pc = 0x22D4D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22D4D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22D4D8u;
label_22d4d8:
    // 0x22d4d8: 0x0  nop
    ctx->pc = 0x22d4d8u;
    // NOP
label_22d4dc:
    // 0x22d4dc: 0x0  nop
    ctx->pc = 0x22d4dcu;
    // NOP
label_22d4e0:
    // 0x22d4e0: 0x27bdfe60  addiu       $sp, $sp, -0x1A0
    ctx->pc = 0x22d4e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966880));
label_22d4e4:
    // 0x22d4e4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x22d4e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_22d4e8:
    // 0x22d4e8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x22d4e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_22d4ec:
    // 0x22d4ec: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x22d4ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_22d4f0:
    // 0x22d4f0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x22d4f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_22d4f4:
    // 0x22d4f4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x22d4f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_22d4f8:
    // 0x22d4f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22d4f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_22d4fc:
    // 0x22d4fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22d4fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_22d500:
    // 0x22d500: 0xafa40190  sw          $a0, 0x190($sp)
    ctx->pc = 0x22d500u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 4));
label_22d504:
    // 0x22d504: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x22d504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_22d508:
    // 0x22d508: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x22d508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22d50c:
    // 0x22d50c: 0xe7a0018c  swc1        $f0, 0x18C($sp)
    ctx->pc = 0x22d50cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 396), bits); }
label_22d510:
    // 0x22d510: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x22d510u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_22d514:
    // 0x22d514: 0xc05db34  jal         func_176CD0
label_22d518:
    if (ctx->pc == 0x22D518u) {
        ctx->pc = 0x22D51Cu;
        goto label_22d51c;
    }
    ctx->pc = 0x22D514u;
    SET_GPR_U32(ctx, 31, 0x22D51Cu);
    ctx->pc = 0x176CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176CD0u, 0x22D514u, 0x22D51Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D51Cu;
label_22d51c:
    // 0x22d51c: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x22d51cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
label_22d520:
    // 0x22d520: 0x24440040  addiu       $a0, $v0, 0x40
    ctx->pc = 0x22d520u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_22d524:
    // 0x22d524: 0xc08b9f4  jal         func_22E7D0
label_22d528:
    if (ctx->pc == 0x22D528u) {
        ctx->pc = 0x22D52Cu;
        goto label_22d52c;
    }
    ctx->pc = 0x22D524u;
    SET_GPR_U32(ctx, 31, 0x22D52Cu);
    ctx->pc = 0x22E7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7D0u, 0x22D524u, 0x22D52Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D52Cu;
label_22d52c:
    // 0x22d52c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x22d52cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22d530:
    // 0x22d530: 0x100003f6  b           . + 4 + (0x3F6 << 2)
label_22d534:
    if (ctx->pc == 0x22D534u) {
        ctx->pc = 0x22D538u;
        goto label_22d538;
    }
    ctx->pc = 0x22D530u;
    {
        const bool branch_taken_0x22d530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22d530) {
            ctx->pc = 0x22E50Cu;
            goto label_22e50c;
        }
    }
    ctx->pc = 0x22D538u;
label_22d538:
    // 0x22d538: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x22d538u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22d53c:
    // 0x22d53c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x22d53cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22d540:
    // 0x22d540: 0x2a0802d  daddu       $s0, $s5, $zero
    ctx->pc = 0x22d540u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_22d544:
    // 0x22d544: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22d544u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22d548:
    // 0x22d548: 0x0  nop
    ctx->pc = 0x22d548u;
    // NOP
label_22d54c:
    // 0x22d54c: 0xe7a00188  swc1        $f0, 0x188($sp)
    ctx->pc = 0x22d54cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
label_22d550:
    // 0x22d550: 0x9203001c  lbu         $v1, 0x1C($s0)
    ctx->pc = 0x22d550u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 28)));
label_22d554:
    // 0x22d554: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x22d554u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_22d558:
    // 0x22d558: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
label_22d55c:
    if (ctx->pc == 0x22D55Cu) {
        ctx->pc = 0x22D560u;
        goto label_22d560;
    }
    ctx->pc = 0x22D558u;
    {
        const bool branch_taken_0x22d558 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22d558) {
            ctx->pc = 0x22D5A4u;
            goto label_22d5a4;
        }
    }
    ctx->pc = 0x22D560u;
label_22d560:
    // 0x22d560: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x22d560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22d564:
    // 0x22d564: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x22d564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22d568:
    // 0x22d568: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x22d568u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_22d56c:
    // 0x22d56c: 0xe7a00188  swc1        $f0, 0x188($sp)
    ctx->pc = 0x22d56cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
label_22d570:
    // 0x22d570: 0xc7a10188  lwc1        $f1, 0x188($sp)
    ctx->pc = 0x22d570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22d574:
    // 0x22d574: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22d574u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22d578:
    // 0x22d578: 0x0  nop
    ctx->pc = 0x22d578u;
    // NOP
label_22d57c:
    // 0x22d57c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x22d57cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22d580:
    // 0x22d580: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_22d584:
    if (ctx->pc == 0x22D584u) {
        ctx->pc = 0x22D588u;
        goto label_22d588;
    }
    ctx->pc = 0x22D580u;
    {
        const bool branch_taken_0x22d580 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22d580) {
            ctx->pc = 0x22D5A4u;
            goto label_22d5a4;
        }
    }
    ctx->pc = 0x22D588u;
label_22d588:
    // 0x22d588: 0xc6010018  lwc1        $f1, 0x18($s0)
    ctx->pc = 0x22d588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22d58c:
    // 0x22d58c: 0xc7a00188  lwc1        $f0, 0x188($sp)
    ctx->pc = 0x22d58cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22d590:
    // 0x22d590: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x22d590u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_22d594:
    // 0x22d594: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x22d594u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
label_22d598:
    // 0x22d598: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22d598u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22d59c:
    // 0x22d59c: 0x0  nop
    ctx->pc = 0x22d59cu;
    // NOP
label_22d5a0:
    // 0x22d5a0: 0xe7a00188  swc1        $f0, 0x188($sp)
    ctx->pc = 0x22d5a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
label_22d5a4:
    // 0x22d5a4: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x22d5a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22d5a8:
    // 0x22d5a8: 0xc7a1018c  lwc1        $f1, 0x18C($sp)
    ctx->pc = 0x22d5a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22d5ac:
    // 0x22d5ac: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x22d5acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_22d5b0:
    // 0x22d5b0: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x22d5b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
label_22d5b4:
    // 0x22d5b4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x22d5b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_22d5b8:
    // 0x22d5b8: 0xc7a00188  lwc1        $f0, 0x188($sp)
    ctx->pc = 0x22d5b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22d5bc:
    // 0x22d5bc: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x22d5bcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22d5c0:
    // 0x22d5c0: 0x450003a1  bc1f        . + 4 + (0x3A1 << 2)
label_22d5c4:
    if (ctx->pc == 0x22D5C4u) {
        ctx->pc = 0x22D5C8u;
        goto label_22d5c8;
    }
    ctx->pc = 0x22D5C0u;
    {
        const bool branch_taken_0x22d5c0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22d5c0) {
            ctx->pc = 0x22E448u;
            goto label_22e448;
        }
    }
    ctx->pc = 0x22D5C8u;
label_22d5c8:
    // 0x22d5c8: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x22d5c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22d5cc:
    // 0x22d5cc: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x22d5ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22d5d0:
    // 0x22d5d0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x22d5d0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_22d5d4:
    // 0x22d5d4: 0xe7a00184  swc1        $f0, 0x184($sp)
    ctx->pc = 0x22d5d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 388), bits); }
label_22d5d8:
    // 0x22d5d8: 0xc7a10184  lwc1        $f1, 0x184($sp)
    ctx->pc = 0x22d5d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22d5dc:
    // 0x22d5dc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22d5dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22d5e0:
    // 0x22d5e0: 0x0  nop
    ctx->pc = 0x22d5e0u;
    // NOP
label_22d5e4:
    // 0x22d5e4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x22d5e4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22d5e8:
    // 0x22d5e8: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_22d5ec:
    if (ctx->pc == 0x22D5ECu) {
        ctx->pc = 0x22D5F0u;
        goto label_22d5f0;
    }
    ctx->pc = 0x22D5E8u;
    {
        const bool branch_taken_0x22d5e8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22d5e8) {
            ctx->pc = 0x22D60Cu;
            goto label_22d60c;
        }
    }
    ctx->pc = 0x22D5F0u;
label_22d5f0:
    // 0x22d5f0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22d5f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22d5f4:
    // 0x22d5f4: 0x0  nop
    ctx->pc = 0x22d5f4u;
    // NOP
label_22d5f8:
    // 0x22d5f8: 0xe7a00184  swc1        $f0, 0x184($sp)
    ctx->pc = 0x22d5f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 388), bits); }
label_22d5fc:
    // 0x22d5fc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x22d5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22d600:
    // 0x22d600: 0x307200ff  andi        $s2, $v1, 0xFF
    ctx->pc = 0x22d600u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_22d604:
    // 0x22d604: 0x10000011  b           . + 4 + (0x11 << 2)
label_22d608:
    if (ctx->pc == 0x22D608u) {
        ctx->pc = 0x22D60Cu;
        goto label_22d60c;
    }
    ctx->pc = 0x22D604u;
    {
        const bool branch_taken_0x22d604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22d604) {
            ctx->pc = 0x22D64Cu;
            goto label_22d64c;
        }
    }
    ctx->pc = 0x22D60Cu;
label_22d60c:
    // 0x22d60c: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x22d60cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22d610:
    // 0x22d610: 0xc7a1018c  lwc1        $f1, 0x18C($sp)
    ctx->pc = 0x22d610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22d614:
    // 0x22d614: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x22d614u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_22d618:
    // 0x22d618: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x22d618u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
label_22d61c:
    // 0x22d61c: 0xc6010018  lwc1        $f1, 0x18($s0)
    ctx->pc = 0x22d61cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22d620:
    // 0x22d620: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x22d620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22d624:
    // 0x22d624: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x22d624u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22d628:
    // 0x22d628: 0x45010008  bc1t        . + 4 + (0x8 << 2)
label_22d62c:
    if (ctx->pc == 0x22D62Cu) {
        ctx->pc = 0x22D630u;
        goto label_22d630;
    }
    ctx->pc = 0x22D628u;
    {
        const bool branch_taken_0x22d628 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22d628) {
            ctx->pc = 0x22D64Cu;
            goto label_22d64c;
        }
    }
    ctx->pc = 0x22D630u;
label_22d630:
    // 0x22d630: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x22d630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22d634:
    // 0x22d634: 0xe6010018  swc1        $f1, 0x18($s0)
    ctx->pc = 0x22d634u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
label_22d638:
    // 0x22d638: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22d638u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22d63c:
    // 0x22d63c: 0x0  nop
    ctx->pc = 0x22d63cu;
    // NOP
label_22d640:
    // 0x22d640: 0xe7a00184  swc1        $f0, 0x184($sp)
    ctx->pc = 0x22d640u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 388), bits); }
label_22d644:
    // 0x22d644: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x22d644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22d648:
    // 0x22d648: 0x307200ff  andi        $s2, $v1, 0xFF
    ctx->pc = 0x22d648u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_22d64c:
    // 0x22d64c: 0x9203001c  lbu         $v1, 0x1C($s0)
    ctx->pc = 0x22d64cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 28)));
label_22d650:
    // 0x22d650: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x22d650u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_22d654:
    // 0x22d654: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
label_22d658:
    if (ctx->pc == 0x22D658u) {
        ctx->pc = 0x22D65Cu;
        goto label_22d65c;
    }
    ctx->pc = 0x22D654u;
    {
        const bool branch_taken_0x22d654 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22d654) {
            ctx->pc = 0x22D684u;
            goto label_22d684;
        }
    }
    ctx->pc = 0x22D65Cu;
label_22d65c:
    // 0x22d65c: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x22d65cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_22d660:
    // 0x22d660: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_22d664:
    if (ctx->pc == 0x22D664u) {
        ctx->pc = 0x22D668u;
        goto label_22d668;
    }
    ctx->pc = 0x22D660u;
    {
        const bool branch_taken_0x22d660 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22d660) {
            ctx->pc = 0x22D67Cu;
            goto label_22d67c;
        }
    }
    ctx->pc = 0x22D668u;
label_22d668:
    // 0x22d668: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x22d668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22d66c:
    // 0x22d66c: 0x8e050024  lw          $a1, 0x24($s0)
    ctx->pc = 0x22d66cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_22d670:
    // 0x22d670: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x22d670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_22d674:
    // 0x22d674: 0x40f809  jalr        $v0
label_22d678:
    if (ctx->pc == 0x22D678u) {
        ctx->pc = 0x22D67Cu;
        goto label_22d67c;
    }
    ctx->pc = 0x22D674u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22D67Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22D674u, 0x22D67Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22D67Cu;
label_22d67c:
    // 0x22d67c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x22d67cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22d680:
    // 0x22d680: 0xa203001c  sb          $v1, 0x1C($s0)
    ctx->pc = 0x22d680u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 28), (uint8_t)GPR_U32(ctx, 3));
label_22d684:
    // 0x22d684: 0x12400009  beqz        $s2, . + 4 + (0x9 << 2)
label_22d688:
    if (ctx->pc == 0x22D688u) {
        ctx->pc = 0x22D68Cu;
        goto label_22d68c;
    }
    ctx->pc = 0x22D684u;
    {
        const bool branch_taken_0x22d684 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x22d684) {
            ctx->pc = 0x22D6ACu;
            goto label_22d6ac;
        }
    }
    ctx->pc = 0x22D68Cu;
label_22d68c:
    // 0x22d68c: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x22d68cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_22d690:
    // 0x22d690: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_22d694:
    if (ctx->pc == 0x22D694u) {
        ctx->pc = 0x22D698u;
        goto label_22d698;
    }
    ctx->pc = 0x22D690u;
    {
        const bool branch_taken_0x22d690 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22d690) {
            ctx->pc = 0x22D6ACu;
            goto label_22d6ac;
        }
    }
    ctx->pc = 0x22D698u;
label_22d698:
    // 0x22d698: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x22d698u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22d69c:
    // 0x22d69c: 0x8e050024  lw          $a1, 0x24($s0)
    ctx->pc = 0x22d69cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_22d6a0:
    // 0x22d6a0: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x22d6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_22d6a4:
    // 0x22d6a4: 0x40f809  jalr        $v0
label_22d6a8:
    if (ctx->pc == 0x22D6A8u) {
        ctx->pc = 0x22D6ACu;
        goto label_22d6ac;
    }
    ctx->pc = 0x22D6A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22D6ACu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22D6A4u, 0x22D6ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22D6ACu;
label_22d6ac:
    // 0x22d6ac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22d6acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22d6b0:
    // 0x22d6b0: 0x0  nop
    ctx->pc = 0x22d6b0u;
    // NOP
label_22d6b4:
    // 0x22d6b4: 0xe7a00180  swc1        $f0, 0x180($sp)
    ctx->pc = 0x22d6b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
label_22d6b8:
    // 0x22d6b8: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x22d6b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22d6bc:
    // 0x22d6bc: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x22d6bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22d6c0:
    // 0x22d6c0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x22d6c0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_22d6c4:
    // 0x22d6c4: 0xe7a0017c  swc1        $f0, 0x17C($sp)
    ctx->pc = 0x22d6c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 380), bits); }
label_22d6c8:
    // 0x22d6c8: 0x8e04002c  lw          $a0, 0x2C($s0)
    ctx->pc = 0x22d6c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_22d6cc:
    // 0x22d6cc: 0x108000ca  beqz        $a0, . + 4 + (0xCA << 2)
label_22d6d0:
    if (ctx->pc == 0x22D6D0u) {
        ctx->pc = 0x22D6D4u;
        goto label_22d6d4;
    }
    ctx->pc = 0x22D6CCu;
    {
        const bool branch_taken_0x22d6cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x22d6cc) {
            ctx->pc = 0x22D9F8u;
            goto label_22d9f8;
        }
    }
    ctx->pc = 0x22D6D4u;
label_22d6d4:
    // 0x22d6d4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x22d6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_22d6d8:
    // 0x22d6d8: 0x1083003f  beq         $a0, $v1, . + 4 + (0x3F << 2)
label_22d6dc:
    if (ctx->pc == 0x22D6DCu) {
        ctx->pc = 0x22D6E0u;
        goto label_22d6e0;
    }
    ctx->pc = 0x22D6D8u;
    {
        const bool branch_taken_0x22d6d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x22d6d8) {
            ctx->pc = 0x22D7D8u;
            goto label_22d7d8;
        }
    }
    ctx->pc = 0x22D6E0u;
label_22d6e0:
    // 0x22d6e0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x22d6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_22d6e4:
    // 0x22d6e4: 0x1083001a  beq         $a0, $v1, . + 4 + (0x1A << 2)
label_22d6e8:
    if (ctx->pc == 0x22D6E8u) {
        ctx->pc = 0x22D6ECu;
        goto label_22d6ec;
    }
    ctx->pc = 0x22D6E4u;
    {
        const bool branch_taken_0x22d6e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x22d6e4) {
            ctx->pc = 0x22D750u;
            goto label_22d750;
        }
    }
    ctx->pc = 0x22D6ECu;
label_22d6ec:
    // 0x22d6ec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x22d6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22d6f0:
    // 0x22d6f0: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_22d6f4:
    if (ctx->pc == 0x22D6F4u) {
        ctx->pc = 0x22D6F8u;
        goto label_22d6f8;
    }
    ctx->pc = 0x22D6F0u;
    {
        const bool branch_taken_0x22d6f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x22d6f0) {
            ctx->pc = 0x22D700u;
            goto label_22d700;
        }
    }
    ctx->pc = 0x22D6F8u;
label_22d6f8:
    // 0x22d6f8: 0x100000bf  b           . + 4 + (0xBF << 2)
label_22d6fc:
    if (ctx->pc == 0x22D6FCu) {
        ctx->pc = 0x22D700u;
        goto label_22d700;
    }
    ctx->pc = 0x22D6F8u;
    {
        const bool branch_taken_0x22d6f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22d6f8) {
            ctx->pc = 0x22D9F8u;
            goto label_22d9f8;
        }
    }
    ctx->pc = 0x22D700u;
label_22d700:
    // 0x22d700: 0xc78180b0  lwc1        $f1, -0x7F50($gp)
    ctx->pc = 0x22d700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22d704:
    // 0x22d704: 0xc7a0017c  lwc1        $f0, 0x17C($sp)
    ctx->pc = 0x22d704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22d708:
    // 0x22d708: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x22d708u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_22d70c:
    // 0x22d70c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x22d70cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_22d710:
    // 0x22d710: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22d710u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22d714:
    // 0x22d714: 0x0  nop
    ctx->pc = 0x22d714u;
    // NOP
label_22d718:
    // 0x22d718: 0x46010302  mul.s       $f12, $f0, $f1
    ctx->pc = 0x22d718u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_22d71c:
    // 0x22d71c: 0xc0c3966  jal         func_30E598
label_22d720:
    if (ctx->pc == 0x22D720u) {
        ctx->pc = 0x22D724u;
        goto label_22d724;
    }
    ctx->pc = 0x22D71Cu;
    SET_GPR_U32(ctx, 31, 0x22D724u);
    ctx->pc = 0x30E598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E598u, 0x22D71Cu, 0x22D724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D724u;
label_22d724:
    // 0x22d724: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x22d724u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_22d728:
    // 0x22d728: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x22d728u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_22d72c:
    // 0x22d72c: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x22d72cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_22d730:
    // 0x22d730: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x22d730u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_22d734:
    // 0x22d734: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x22d734u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_22d738:
    // 0x22d738: 0x0  nop
    ctx->pc = 0x22d738u;
    // NOP
label_22d73c:
    // 0x22d73c: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x22d73cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[1], ctx->f[2]));
label_22d740:
    // 0x22d740: 0x4600181c  madd.s      $f0, $f3, $f0
    ctx->pc = 0x22d740u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[0]));
label_22d744:
    // 0x22d744: 0xe7a00180  swc1        $f0, 0x180($sp)
    ctx->pc = 0x22d744u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
label_22d748:
    // 0x22d748: 0x1000003b  b           . + 4 + (0x3B << 2)
label_22d74c:
    if (ctx->pc == 0x22D74Cu) {
        ctx->pc = 0x22D750u;
        goto label_22d750;
    }
    ctx->pc = 0x22D748u;
    {
        const bool branch_taken_0x22d748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22d748) {
            ctx->pc = 0x22D838u;
            goto label_22d838;
        }
    }
    ctx->pc = 0x22D750u;
label_22d750:
    // 0x22d750: 0xc7ac017c  lwc1        $f12, 0x17C($sp)
    ctx->pc = 0x22d750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_22d754:
    // 0x22d754: 0xc0bec3e  jal         func_2FB0F8
label_22d758:
    if (ctx->pc == 0x22D758u) {
        ctx->pc = 0x22D75Cu;
        goto label_22d75c;
    }
    ctx->pc = 0x22D754u;
    SET_GPR_U32(ctx, 31, 0x22D75Cu);
    ctx->pc = 0x2FB0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB0F8u, 0x22D754u, 0x22D75Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D75Cu;
label_22d75c:
    // 0x22d75c: 0x3c033ff0  lui         $v1, 0x3FF0
    ctx->pc = 0x22d75cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16368 << 16));
label_22d760:
    // 0x22d760: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x22d760u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
label_22d764:
    // 0x22d764: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x22d764u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22d768:
    // 0x22d768: 0xc0c39be  jal         func_30E6F8
label_22d76c:
    if (ctx->pc == 0x22D76Cu) {
        ctx->pc = 0x22D770u;
        goto label_22d770;
    }
    ctx->pc = 0x22D768u;
    SET_GPR_U32(ctx, 31, 0x22D770u);
    ctx->pc = 0x30E6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E6F8u, 0x22D768u, 0x22D770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D770u;
label_22d770:
    // 0x22d770: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x22d770u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22d774:
    // 0x22d774: 0xc0bef4c  jal         func_2FBD30
label_22d778:
    if (ctx->pc == 0x22D778u) {
        ctx->pc = 0x22D77Cu;
        goto label_22d77c;
    }
    ctx->pc = 0x22D774u;
    SET_GPR_U32(ctx, 31, 0x22D77Cu);
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x22D774u, 0x22D77Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D77Cu;
label_22d77c:
    // 0x22d77c: 0xe7a00180  swc1        $f0, 0x180($sp)
    ctx->pc = 0x22d77cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
label_22d780:
    // 0x22d780: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x22d780u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_22d784:
    // 0x22d784: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x22d784u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_22d788:
    // 0x22d788: 0xc7a1017c  lwc1        $f1, 0x17C($sp)
    ctx->pc = 0x22d788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22d78c:
    // 0x22d78c: 0x46011002  mul.s       $f0, $f2, $f1
    ctx->pc = 0x22d78cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_22d790:
    // 0x22d790: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x22d790u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_22d794:
    // 0x22d794: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x22d794u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_22d798:
    // 0x22d798: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x22d798u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_22d79c:
    // 0x22d79c: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x22d79cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_22d7a0:
    // 0x22d7a0: 0x4810004  bgez        $a0, . + 4 + (0x4 << 2)
label_22d7a4:
    if (ctx->pc == 0x22D7A4u) {
        ctx->pc = 0x22D7A8u;
        goto label_22d7a8;
    }
    ctx->pc = 0x22D7A0u;
    {
        const bool branch_taken_0x22d7a0 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x22d7a0) {
            ctx->pc = 0x22D7B4u;
            goto label_22d7b4;
        }
    }
    ctx->pc = 0x22D7A8u;
label_22d7a8:
    // 0x22d7a8: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_22d7ac:
    if (ctx->pc == 0x22D7ACu) {
        ctx->pc = 0x22D7B0u;
        goto label_22d7b0;
    }
    ctx->pc = 0x22D7A8u;
    {
        const bool branch_taken_0x22d7a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22d7a8) {
            ctx->pc = 0x22D7B4u;
            goto label_22d7b4;
        }
    }
    ctx->pc = 0x22D7B0u;
label_22d7b0:
    // 0x22d7b0: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x22d7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
label_22d7b4:
    // 0x22d7b4: 0x10600020  beqz        $v1, . + 4 + (0x20 << 2)
label_22d7b8:
    if (ctx->pc == 0x22D7B8u) {
        ctx->pc = 0x22D7BCu;
        goto label_22d7bc;
    }
    ctx->pc = 0x22D7B4u;
    {
        const bool branch_taken_0x22d7b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22d7b4) {
            ctx->pc = 0x22D838u;
            goto label_22d838;
        }
    }
    ctx->pc = 0x22D7BCu;
label_22d7bc:
    // 0x22d7bc: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x22d7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_22d7c0:
    // 0x22d7c0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x22d7c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_22d7c4:
    // 0x22d7c4: 0xc7a00180  lwc1        $f0, 0x180($sp)
    ctx->pc = 0x22d7c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22d7c8:
    // 0x22d7c8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x22d7c8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_22d7cc:
    // 0x22d7cc: 0xe7a00180  swc1        $f0, 0x180($sp)
    ctx->pc = 0x22d7ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
label_22d7d0:
    // 0x22d7d0: 0x10000019  b           . + 4 + (0x19 << 2)
label_22d7d4:
    if (ctx->pc == 0x22D7D4u) {
        ctx->pc = 0x22D7D8u;
        goto label_22d7d8;
    }
    ctx->pc = 0x22D7D0u;
    {
        const bool branch_taken_0x22d7d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22d7d0) {
            ctx->pc = 0x22D838u;
            goto label_22d838;
        }
    }
    ctx->pc = 0x22D7D8u;
label_22d7d8:
    // 0x22d7d8: 0xc78180b0  lwc1        $f1, -0x7F50($gp)
    ctx->pc = 0x22d7d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22d7dc:
    // 0x22d7dc: 0xc7a0017c  lwc1        $f0, 0x17C($sp)
    ctx->pc = 0x22d7dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22d7e0:
    // 0x22d7e0: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x22d7e0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_22d7e4:
    // 0x22d7e4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x22d7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_22d7e8:
    // 0x22d7e8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x22d7e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_22d7ec:
    // 0x22d7ec: 0x0  nop
    ctx->pc = 0x22d7ecu;
    // NOP
label_22d7f0:
    // 0x22d7f0: 0x460c6b82  mul.s       $f14, $f13, $f12
    ctx->pc = 0x22d7f0u;
    ctx->f[14] = FPU_MUL_S(ctx->f[13], ctx->f[12]);
label_22d7f4:
    // 0x22d7f4: 0x46007306  mov.s       $f12, $f14
    ctx->pc = 0x22d7f4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[14]);
label_22d7f8:
    // 0x22d7f8: 0xc0c3966  jal         func_30E598
label_22d7fc:
    if (ctx->pc == 0x22D7FCu) {
        ctx->pc = 0x22D800u;
        goto label_22d800;
    }
    ctx->pc = 0x22D7F8u;
    SET_GPR_U32(ctx, 31, 0x22D800u);
    ctx->pc = 0x30E598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E598u, 0x22D7F8u, 0x22D800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D800u;
label_22d800:
    // 0x22d800: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x22d800u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_22d804:
    // 0x22d804: 0x0  nop
    ctx->pc = 0x22d804u;
    // NOP
label_22d808:
    // 0x22d808: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x22d808u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22d80c:
    // 0x22d80c: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_22d810:
    if (ctx->pc == 0x22D810u) {
        ctx->pc = 0x22D814u;
        goto label_22d814;
    }
    ctx->pc = 0x22D80Cu;
    {
        const bool branch_taken_0x22d80c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22d80c) {
            ctx->pc = 0x22D82Cu;
            goto label_22d82c;
        }
    }
    ctx->pc = 0x22D814u;
label_22d814:
    // 0x22d814: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x22d814u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_22d818:
    // 0x22d818: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22d818u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22d81c:
    // 0x22d81c: 0x0  nop
    ctx->pc = 0x22d81cu;
    // NOP
label_22d820:
    // 0x22d820: 0xe7a00180  swc1        $f0, 0x180($sp)
    ctx->pc = 0x22d820u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
label_22d824:
    // 0x22d824: 0x10000004  b           . + 4 + (0x4 << 2)
label_22d828:
    if (ctx->pc == 0x22D828u) {
        ctx->pc = 0x22D82Cu;
        goto label_22d82c;
    }
    ctx->pc = 0x22D824u;
    {
        const bool branch_taken_0x22d824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22d824) {
            ctx->pc = 0x22D838u;
            goto label_22d838;
        }
    }
    ctx->pc = 0x22D82Cu;
label_22d82c:
    // 0x22d82c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x22d82cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_22d830:
    // 0x22d830: 0x0  nop
    ctx->pc = 0x22d830u;
    // NOP
label_22d834:
    // 0x22d834: 0xe7ac0180  swc1        $f12, 0x180($sp)
    ctx->pc = 0x22d834u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
label_22d838:
    // 0x22d838: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x22d838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_22d83c:
    // 0x22d83c: 0x2c610007  sltiu       $at, $v1, 0x7
    ctx->pc = 0x22d83cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_22d840:
    // 0x22d840: 0x1020006b  beqz        $at, . + 4 + (0x6B << 2)
label_22d844:
    if (ctx->pc == 0x22D844u) {
        ctx->pc = 0x22D848u;
        goto label_22d848;
    }
    ctx->pc = 0x22D840u;
    {
        const bool branch_taken_0x22d840 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x22d840) {
            ctx->pc = 0x22D9F0u;
            goto label_22d9f0;
        }
    }
    ctx->pc = 0x22D848u;
label_22d848:
    // 0x22d848: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x22d848u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_22d84c:
    // 0x22d84c: 0x248488e0  addiu       $a0, $a0, -0x7720
    ctx->pc = 0x22d84cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936800));
label_22d850:
    // 0x22d850: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x22d850u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_22d854:
    // 0x22d854: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x22d854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_22d858:
    // 0x22d858: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x22d858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_22d85c:
    // 0x22d85c: 0x600008  jr          $v1
label_22d860:
    if (ctx->pc == 0x22D860u) {
        ctx->pc = 0x22D864u;
        goto label_22d864;
    }
    ctx->pc = 0x22D85Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22D864u: goto label_22d864;
            case 0x22D8F4u: goto label_22d8f4;
            case 0x22D99Cu: goto label_22d99c;
            case 0x22D9F0u: goto label_22d9f0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22D85Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x22D864u;
label_22d864:
    // 0x22d864: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x22d864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_22d868:
    // 0x22d868: 0xc44d0000  lwc1        $f13, 0x0($v0)
    ctx->pc = 0x22d868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_22d86c:
    // 0x22d86c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x22d86cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_22d870:
    // 0x22d870: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x22d870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22d874:
    // 0x22d874: 0x460068c1  sub.s       $f3, $f13, $f0
    ctx->pc = 0x22d874u;
    ctx->f[3] = FPU_SUB_S(ctx->f[13], ctx->f[0]);
label_22d878:
    // 0x22d878: 0xc7a20180  lwc1        $f2, 0x180($sp)
    ctx->pc = 0x22d878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_22d87c:
    // 0x22d87c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x22d87cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_22d880:
    // 0x22d880: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x22d880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22d884:
    // 0x22d884: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22d884u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22d888:
    // 0x22d888: 0x0  nop
    ctx->pc = 0x22d888u;
    // NOP
label_22d88c:
    // 0x22d88c: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x22d88cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
label_22d890:
    // 0x22d890: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x22d890u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_22d894:
    // 0x22d894: 0xe7a00178  swc1        $f0, 0x178($sp)
    ctx->pc = 0x22d894u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 376), bits); }
label_22d898:
    // 0x22d898: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x22d898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_22d89c:
    // 0x22d89c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x22d89cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22d8a0:
    // 0x22d8a0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x22d8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_22d8a4:
    // 0x22d8a4: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x22d8a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22d8a8:
    // 0x22d8a8: 0x460008c1  sub.s       $f3, $f1, $f0
    ctx->pc = 0x22d8a8u;
    ctx->f[3] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_22d8ac:
    // 0x22d8ac: 0xc7a20180  lwc1        $f2, 0x180($sp)
    ctx->pc = 0x22d8acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_22d8b0:
    // 0x22d8b0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x22d8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_22d8b4:
    // 0x22d8b4: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x22d8b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22d8b8:
    // 0x22d8b8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x22d8b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_22d8bc:
    // 0x22d8bc: 0x0  nop
    ctx->pc = 0x22d8bcu;
    // NOP
label_22d8c0:
    // 0x22d8c0: 0x46000818  adda.s      $f1, $f0
    ctx->pc = 0x22d8c0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[1], ctx->f[0]));
label_22d8c4:
    // 0x22d8c4: 0x4603109c  madd.s      $f2, $f2, $f3
    ctx->pc = 0x22d8c4u;
    ctx->f[2] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_22d8c8:
    // 0x22d8c8: 0xe7a20174  swc1        $f2, 0x174($sp)
    ctx->pc = 0x22d8c8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 372), bits); }
label_22d8cc:
    // 0x22d8cc: 0x8fa40190  lw          $a0, 0x190($sp)
    ctx->pc = 0x22d8ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
label_22d8d0:
    // 0x22d8d0: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x22d8d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_22d8d4:
    // 0x22d8d4: 0xc7ac0178  lwc1        $f12, 0x178($sp)
    ctx->pc = 0x22d8d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_22d8d8:
    // 0x22d8d8: 0xc7ad0174  lwc1        $f13, 0x174($sp)
    ctx->pc = 0x22d8d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_22d8dc:
    // 0x22d8dc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22d8dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22d8e0:
    // 0x22d8e0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x22d8e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22d8e4:
    // 0x22d8e4: 0xc08c544  jal         func_231510
label_22d8e8:
    if (ctx->pc == 0x22D8E8u) {
        ctx->pc = 0x22D8ECu;
        goto label_22d8ec;
    }
    ctx->pc = 0x22D8E4u;
    SET_GPR_U32(ctx, 31, 0x22D8ECu);
    ctx->pc = 0x231510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231510u, 0x22D8E4u, 0x22D8ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D8ECu;
label_22d8ec:
    // 0x22d8ec: 0x100002d6  b           . + 4 + (0x2D6 << 2)
label_22d8f0:
    if (ctx->pc == 0x22D8F0u) {
        ctx->pc = 0x22D8F4u;
        goto label_22d8f4;
    }
    ctx->pc = 0x22D8ECu;
    {
        const bool branch_taken_0x22d8ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22d8ec) {
            ctx->pc = 0x22E448u;
            goto label_22e448;
        }
    }
    ctx->pc = 0x22D8F4u;
label_22d8f4:
    // 0x22d8f4: 0x8e140008  lw          $s4, 0x8($s0)
    ctx->pc = 0x22d8f4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_22d8f8:
    // 0x22d8f8: 0x8e130028  lw          $s3, 0x28($s0)
    ctx->pc = 0x22d8f8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_22d8fc:
    // 0x22d8fc: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x22d8fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22d900:
    // 0x22d900: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x22d900u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_22d904:
    // 0x22d904: 0xc66d0000  lwc1        $f13, 0x0($s3)
    ctx->pc = 0x22d904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_22d908:
    // 0x22d908: 0xc7ae0180  lwc1        $f14, 0x180($sp)
    ctx->pc = 0x22d908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_22d90c:
    // 0x22d90c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x22d90cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_22d910:
    // 0x22d910: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x22d910u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22d914:
    // 0x22d914: 0xc1197b4  jal         func_465ED0
label_22d918:
    if (ctx->pc == 0x22D918u) {
        ctx->pc = 0x22D91Cu;
        goto label_22d91c;
    }
    ctx->pc = 0x22D914u;
    SET_GPR_U32(ctx, 31, 0x22D91Cu);
    ctx->pc = 0x465ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x465ED0u, 0x22D914u, 0x22D91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D91Cu;
label_22d91c:
    // 0x22d91c: 0xc68c0004  lwc1        $f12, 0x4($s4)
    ctx->pc = 0x22d91cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_22d920:
    // 0x22d920: 0xc66d0004  lwc1        $f13, 0x4($s3)
    ctx->pc = 0x22d920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_22d924:
    // 0x22d924: 0xc7ae0180  lwc1        $f14, 0x180($sp)
    ctx->pc = 0x22d924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_22d928:
    // 0x22d928: 0x27a40074  addiu       $a0, $sp, 0x74
    ctx->pc = 0x22d928u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
label_22d92c:
    // 0x22d92c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x22d92cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22d930:
    // 0x22d930: 0xc1197b4  jal         func_465ED0
label_22d934:
    if (ctx->pc == 0x22D934u) {
        ctx->pc = 0x22D938u;
        goto label_22d938;
    }
    ctx->pc = 0x22D930u;
    SET_GPR_U32(ctx, 31, 0x22D938u);
    ctx->pc = 0x465ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x465ED0u, 0x22D930u, 0x22D938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D938u;
label_22d938:
    // 0x22d938: 0xc68c0008  lwc1        $f12, 0x8($s4)
    ctx->pc = 0x22d938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_22d93c:
    // 0x22d93c: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x22d93cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22d940:
    // 0x22d940: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x22d940u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
label_22d944:
    // 0x22d944: 0xc7ae0180  lwc1        $f14, 0x180($sp)
    ctx->pc = 0x22d944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_22d948:
    // 0x22d948: 0x27a40078  addiu       $a0, $sp, 0x78
    ctx->pc = 0x22d948u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
label_22d94c:
    // 0x22d94c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x22d94cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22d950:
    // 0x22d950: 0xc1197b4  jal         func_465ED0
label_22d954:
    if (ctx->pc == 0x22D954u) {
        ctx->pc = 0x22D958u;
        goto label_22d958;
    }
    ctx->pc = 0x22D950u;
    SET_GPR_U32(ctx, 31, 0x22D958u);
    ctx->pc = 0x465ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x465ED0u, 0x22D950u, 0x22D958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D958u;
label_22d958:
    // 0x22d958: 0xc68c000c  lwc1        $f12, 0xC($s4)
    ctx->pc = 0x22d958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_22d95c:
    // 0x22d95c: 0xc66d000c  lwc1        $f13, 0xC($s3)
    ctx->pc = 0x22d95cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_22d960:
    // 0x22d960: 0xc7ae0180  lwc1        $f14, 0x180($sp)
    ctx->pc = 0x22d960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_22d964:
    // 0x22d964: 0x27a4007c  addiu       $a0, $sp, 0x7C
    ctx->pc = 0x22d964u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
label_22d968:
    // 0x22d968: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x22d968u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22d96c:
    // 0x22d96c: 0xc1197b4  jal         func_465ED0
label_22d970:
    if (ctx->pc == 0x22D970u) {
        ctx->pc = 0x22D974u;
        goto label_22d974;
    }
    ctx->pc = 0x22D96Cu;
    SET_GPR_U32(ctx, 31, 0x22D974u);
    ctx->pc = 0x465ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x465ED0u, 0x22D96Cu, 0x22D974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D974u;
label_22d974:
    // 0x22d974: 0x8fa40190  lw          $a0, 0x190($sp)
    ctx->pc = 0x22d974u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
label_22d978:
    // 0x22d978: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x22d978u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_22d97c:
    // 0x22d97c: 0xc7ac0070  lwc1        $f12, 0x70($sp)
    ctx->pc = 0x22d97cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_22d980:
    // 0x22d980: 0xc7ad0074  lwc1        $f13, 0x74($sp)
    ctx->pc = 0x22d980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_22d984:
    // 0x22d984: 0xc7ae0078  lwc1        $f14, 0x78($sp)
    ctx->pc = 0x22d984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_22d988:
    // 0x22d988: 0xc7af007c  lwc1        $f15, 0x7C($sp)
    ctx->pc = 0x22d988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_22d98c:
    // 0x22d98c: 0xc08c4d0  jal         func_231340
label_22d990:
    if (ctx->pc == 0x22D990u) {
        ctx->pc = 0x22D994u;
        goto label_22d994;
    }
    ctx->pc = 0x22D98Cu;
    SET_GPR_U32(ctx, 31, 0x22D994u);
    ctx->pc = 0x231340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231340u, 0x22D98Cu, 0x22D994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D994u;
label_22d994:
    // 0x22d994: 0x100002ac  b           . + 4 + (0x2AC << 2)
label_22d998:
    if (ctx->pc == 0x22D998u) {
        ctx->pc = 0x22D99Cu;
        goto label_22d99c;
    }
    ctx->pc = 0x22D994u;
    {
        const bool branch_taken_0x22d994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22d994) {
            ctx->pc = 0x22E448u;
            goto label_22e448;
        }
    }
    ctx->pc = 0x22D99Cu;
label_22d99c:
    // 0x22d99c: 0xc7a10180  lwc1        $f1, 0x180($sp)
    ctx->pc = 0x22d99cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22d9a0:
    // 0x22d9a0: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x22d9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_22d9a4:
    // 0x22d9a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22d9a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22d9a8:
    // 0x22d9a8: 0x0  nop
    ctx->pc = 0x22d9a8u;
    // NOP
label_22d9ac:
    // 0x22d9ac: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x22d9acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22d9b0:
    // 0x22d9b0: 0x45010008  bc1t        . + 4 + (0x8 << 2)
label_22d9b4:
    if (ctx->pc == 0x22D9B4u) {
        ctx->pc = 0x22D9B8u;
        goto label_22d9b8;
    }
    ctx->pc = 0x22D9B0u;
    {
        const bool branch_taken_0x22d9b0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22d9b0) {
            ctx->pc = 0x22D9D4u;
            goto label_22d9d4;
        }
    }
    ctx->pc = 0x22D9B8u;
label_22d9b8:
    // 0x22d9b8: 0x8fa40190  lw          $a0, 0x190($sp)
    ctx->pc = 0x22d9b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
label_22d9bc:
    // 0x22d9bc: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x22d9bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_22d9c0:
    // 0x22d9c0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x22d9c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22d9c4:
    // 0x22d9c4: 0xc08c8dc  jal         func_232370
label_22d9c8:
    if (ctx->pc == 0x22D9C8u) {
        ctx->pc = 0x22D9CCu;
        goto label_22d9cc;
    }
    ctx->pc = 0x22D9C4u;
    SET_GPR_U32(ctx, 31, 0x22D9CCu);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x22D9C4u, 0x22D9CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D9CCu;
label_22d9cc:
    // 0x22d9cc: 0x1000029e  b           . + 4 + (0x29E << 2)
label_22d9d0:
    if (ctx->pc == 0x22D9D0u) {
        ctx->pc = 0x22D9D4u;
        goto label_22d9d4;
    }
    ctx->pc = 0x22D9CCu;
    {
        const bool branch_taken_0x22d9cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22d9cc) {
            ctx->pc = 0x22E448u;
            goto label_22e448;
        }
    }
    ctx->pc = 0x22D9D4u;
label_22d9d4:
    // 0x22d9d4: 0x8fa40190  lw          $a0, 0x190($sp)
    ctx->pc = 0x22d9d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
label_22d9d8:
    // 0x22d9d8: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x22d9d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_22d9dc:
    // 0x22d9dc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22d9dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22d9e0:
    // 0x22d9e0: 0xc08c8dc  jal         func_232370
label_22d9e4:
    if (ctx->pc == 0x22D9E4u) {
        ctx->pc = 0x22D9E8u;
        goto label_22d9e8;
    }
    ctx->pc = 0x22D9E0u;
    SET_GPR_U32(ctx, 31, 0x22D9E8u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x22D9E0u, 0x22D9E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D9E8u;
label_22d9e8:
    // 0x22d9e8: 0x10000297  b           . + 4 + (0x297 << 2)
label_22d9ec:
    if (ctx->pc == 0x22D9ECu) {
        ctx->pc = 0x22D9F0u;
        goto label_22d9f0;
    }
    ctx->pc = 0x22D9E8u;
    {
        const bool branch_taken_0x22d9e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22d9e8) {
            ctx->pc = 0x22E448u;
            goto label_22e448;
        }
    }
    ctx->pc = 0x22D9F0u;
label_22d9f0:
    // 0x22d9f0: 0x100002cc  b           . + 4 + (0x2CC << 2)
label_22d9f4:
    if (ctx->pc == 0x22D9F4u) {
        ctx->pc = 0x22D9F8u;
        goto label_22d9f8;
    }
    ctx->pc = 0x22D9F0u;
    {
        const bool branch_taken_0x22d9f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22d9f0) {
            ctx->pc = 0x22E524u;
            goto label_22e524;
        }
    }
    ctx->pc = 0x22D9F8u;
label_22d9f8:
    // 0x22d9f8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x22d9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_22d9fc:
    // 0x22d9fc: 0x2c610007  sltiu       $at, $v1, 0x7
    ctx->pc = 0x22d9fcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_22da00:
    // 0x22da00: 0x1020028f  beqz        $at, . + 4 + (0x28F << 2)
label_22da04:
    if (ctx->pc == 0x22DA04u) {
        ctx->pc = 0x22DA08u;
        goto label_22da08;
    }
    ctx->pc = 0x22DA00u;
    {
        const bool branch_taken_0x22da00 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x22da00) {
            ctx->pc = 0x22E440u;
            goto label_22e440;
        }
    }
    ctx->pc = 0x22DA08u;
label_22da08:
    // 0x22da08: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x22da08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_22da0c:
    // 0x22da0c: 0x248488c0  addiu       $a0, $a0, -0x7740
    ctx->pc = 0x22da0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936768));
label_22da10:
    // 0x22da10: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x22da10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_22da14:
    // 0x22da14: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x22da14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_22da18:
    // 0x22da18: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x22da18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_22da1c:
    // 0x22da1c: 0x600008  jr          $v1
label_22da20:
    if (ctx->pc == 0x22DA20u) {
        ctx->pc = 0x22DA24u;
        goto label_22da24;
    }
    ctx->pc = 0x22DA1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22DA24u: goto label_22da24;
            case 0x22DC38u: goto label_22dc38;
            case 0x22DCC4u: goto label_22dcc4;
            case 0x22E0E4u: goto label_22e0e4;
            case 0x22E10Cu: goto label_22e10c;
            case 0x22E384u: goto label_22e384;
            case 0x22E3ACu: goto label_22e3ac;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22DA1Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x22DA24u;
label_22da24:
    // 0x22da24: 0x8fa40190  lw          $a0, 0x190($sp)
    ctx->pc = 0x22da24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
label_22da28:
    // 0x22da28: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x22da28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_22da2c:
    // 0x22da2c: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x22da2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_22da30:
    // 0x22da30: 0xc08c704  jal         func_231C10
label_22da34:
    if (ctx->pc == 0x22DA34u) {
        ctx->pc = 0x22DA38u;
        goto label_22da38;
    }
    ctx->pc = 0x22DA30u;
    SET_GPR_U32(ctx, 31, 0x22DA38u);
    ctx->pc = 0x231C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231C10u, 0x22DA30u, 0x22DA38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DA38u;
label_22da38:
    // 0x22da38: 0x12400010  beqz        $s2, . + 4 + (0x10 << 2)
label_22da3c:
    if (ctx->pc == 0x22DA3Cu) {
        ctx->pc = 0x22DA40u;
        goto label_22da40;
    }
    ctx->pc = 0x22DA38u;
    {
        const bool branch_taken_0x22da38 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x22da38) {
            ctx->pc = 0x22DA7Cu;
            goto label_22da7c;
        }
    }
    ctx->pc = 0x22DA40u;
label_22da40:
    // 0x22da40: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x22da40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_22da44:
    // 0x22da44: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x22da44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22da48:
    // 0x22da48: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x22da48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22da4c:
    // 0x22da4c: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x22da4cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_22da50:
    // 0x22da50: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x22da50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_22da54:
    // 0x22da54: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x22da54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22da58:
    // 0x22da58: 0xc7a00094  lwc1        $f0, 0x94($sp)
    ctx->pc = 0x22da58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22da5c:
    // 0x22da5c: 0x46000b41  sub.s       $f13, $f1, $f0
    ctx->pc = 0x22da5cu;
    ctx->f[13] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_22da60:
    // 0x22da60: 0x8fa40190  lw          $a0, 0x190($sp)
    ctx->pc = 0x22da60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
label_22da64:
    // 0x22da64: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x22da64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_22da68:
    // 0x22da68: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x22da68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22da6c:
    // 0x22da6c: 0xc08c208  jal         func_230820
label_22da70:
    if (ctx->pc == 0x22DA70u) {
        ctx->pc = 0x22DA74u;
        goto label_22da74;
    }
    ctx->pc = 0x22DA6Cu;
    SET_GPR_U32(ctx, 31, 0x22DA74u);
    ctx->pc = 0x230820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230820u, 0x22DA6Cu, 0x22DA74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DA74u;
label_22da74:
    // 0x22da74: 0x10000274  b           . + 4 + (0x274 << 2)
label_22da78:
    if (ctx->pc == 0x22DA78u) {
        ctx->pc = 0x22DA7Cu;
        goto label_22da7c;
    }
    ctx->pc = 0x22DA74u;
    {
        const bool branch_taken_0x22da74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22da74) {
            ctx->pc = 0x22E448u;
            goto label_22e448;
        }
    }
    ctx->pc = 0x22DA7Cu;
label_22da7c:
    // 0x22da7c: 0xc7a1018c  lwc1        $f1, 0x18C($sp)
    ctx->pc = 0x22da7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22da80:
    // 0x22da80: 0xc7a00184  lwc1        $f0, 0x184($sp)
    ctx->pc = 0x22da80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22da84:
    // 0x22da84: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x22da84u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_22da88:
    // 0x22da88: 0xe7a10170  swc1        $f1, 0x170($sp)
    ctx->pc = 0x22da88u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
label_22da8c:
    // 0x22da8c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x22da8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_22da90:
    // 0x22da90: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x22da90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22da94:
    // 0x22da94: 0xc7a10090  lwc1        $f1, 0x90($sp)
    ctx->pc = 0x22da94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22da98:
    // 0x22da98: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x22da98u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_22da9c:
    // 0x22da9c: 0xe7a0016c  swc1        $f0, 0x16C($sp)
    ctx->pc = 0x22da9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 364), bits); }
label_22daa0:
    // 0x22daa0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x22daa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_22daa4:
    // 0x22daa4: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x22daa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22daa8:
    // 0x22daa8: 0xc7a00094  lwc1        $f0, 0x94($sp)
    ctx->pc = 0x22daa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22daac:
    // 0x22daac: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x22daacu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_22dab0:
    // 0x22dab0: 0xe7a00168  swc1        $f0, 0x168($sp)
    ctx->pc = 0x22dab0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
label_22dab4:
    // 0x22dab4: 0xc7a1016c  lwc1        $f1, 0x16C($sp)
    ctx->pc = 0x22dab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22dab8:
    // 0x22dab8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22dab8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22dabc:
    // 0x22dabc: 0x0  nop
    ctx->pc = 0x22dabcu;
    // NOP
label_22dac0:
    // 0x22dac0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x22dac0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22dac4:
    // 0x22dac4: 0x45010014  bc1t        . + 4 + (0x14 << 2)
label_22dac8:
    if (ctx->pc == 0x22DAC8u) {
        ctx->pc = 0x22DACCu;
        goto label_22dacc;
    }
    ctx->pc = 0x22DAC4u;
    {
        const bool branch_taken_0x22dac4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22dac4) {
            ctx->pc = 0x22DB18u;
            goto label_22db18;
        }
    }
    ctx->pc = 0x22DACCu;
label_22dacc:
    // 0x22dacc: 0xc7a1016c  lwc1        $f1, 0x16C($sp)
    ctx->pc = 0x22daccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22dad0:
    // 0x22dad0: 0xc7a00170  lwc1        $f0, 0x170($sp)
    ctx->pc = 0x22dad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22dad4:
    // 0x22dad4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x22dad4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_22dad8:
    // 0x22dad8: 0xc7ac016c  lwc1        $f12, 0x16C($sp)
    ctx->pc = 0x22dad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_22dadc:
    // 0x22dadc: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x22dadcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22dae0:
    // 0x22dae0: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_22dae4:
    if (ctx->pc == 0x22DAE4u) {
        ctx->pc = 0x22DAE8u;
        goto label_22dae8;
    }
    ctx->pc = 0x22DAE0u;
    {
        const bool branch_taken_0x22dae0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22dae0) {
            ctx->pc = 0x22DB00u;
            goto label_22db00;
        }
    }
    ctx->pc = 0x22DAE8u;
label_22dae8:
    // 0x22dae8: 0xc7ad016c  lwc1        $f13, 0x16C($sp)
    ctx->pc = 0x22dae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_22daec:
    // 0x22daec: 0xc7a00170  lwc1        $f0, 0x170($sp)
    ctx->pc = 0x22daecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22daf0:
    // 0x22daf0: 0x46006842  mul.s       $f1, $f13, $f0
    ctx->pc = 0x22daf0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
label_22daf4:
    // 0x22daf4: 0xe7a100ec  swc1        $f1, 0xEC($sp)
    ctx->pc = 0x22daf4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
label_22daf8:
    // 0x22daf8: 0x10000003  b           . + 4 + (0x3 << 2)
label_22dafc:
    if (ctx->pc == 0x22DAFCu) {
        ctx->pc = 0x22DB00u;
        goto label_22db00;
    }
    ctx->pc = 0x22DAF8u;
    {
        const bool branch_taken_0x22daf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22daf8) {
            ctx->pc = 0x22DB08u;
            goto label_22db08;
        }
    }
    ctx->pc = 0x22DB00u;
label_22db00:
    // 0x22db00: 0xc7a0016c  lwc1        $f0, 0x16C($sp)
    ctx->pc = 0x22db00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22db04:
    // 0x22db04: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x22db04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
label_22db08:
    // 0x22db08: 0xc7ac00ec  lwc1        $f12, 0xEC($sp)
    ctx->pc = 0x22db08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_22db0c:
    // 0x22db0c: 0xe7ac00e8  swc1        $f12, 0xE8($sp)
    ctx->pc = 0x22db0cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_22db10:
    // 0x22db10: 0x10000012  b           . + 4 + (0x12 << 2)
label_22db14:
    if (ctx->pc == 0x22DB14u) {
        ctx->pc = 0x22DB18u;
        goto label_22db18;
    }
    ctx->pc = 0x22DB10u;
    {
        const bool branch_taken_0x22db10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22db10) {
            ctx->pc = 0x22DB5Cu;
            goto label_22db5c;
        }
    }
    ctx->pc = 0x22DB18u;
label_22db18:
    // 0x22db18: 0xc7a1016c  lwc1        $f1, 0x16C($sp)
    ctx->pc = 0x22db18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22db1c:
    // 0x22db1c: 0xc7a00170  lwc1        $f0, 0x170($sp)
    ctx->pc = 0x22db1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22db20:
    // 0x22db20: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x22db20u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_22db24:
    // 0x22db24: 0xc7a1016c  lwc1        $f1, 0x16C($sp)
    ctx->pc = 0x22db24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22db28:
    // 0x22db28: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x22db28u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22db2c:
    // 0x22db2c: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_22db30:
    if (ctx->pc == 0x22DB30u) {
        ctx->pc = 0x22DB34u;
        goto label_22db34;
    }
    ctx->pc = 0x22DB2Cu;
    {
        const bool branch_taken_0x22db2c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22db2c) {
            ctx->pc = 0x22DB4Cu;
            goto label_22db4c;
        }
    }
    ctx->pc = 0x22DB34u;
label_22db34:
    // 0x22db34: 0xc7a0016c  lwc1        $f0, 0x16C($sp)
    ctx->pc = 0x22db34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22db38:
    // 0x22db38: 0xc7a10170  lwc1        $f1, 0x170($sp)
    ctx->pc = 0x22db38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22db3c:
    // 0x22db3c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x22db3cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_22db40:
    // 0x22db40: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x22db40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
label_22db44:
    // 0x22db44: 0x10000003  b           . + 4 + (0x3 << 2)
label_22db48:
    if (ctx->pc == 0x22DB48u) {
        ctx->pc = 0x22DB4Cu;
        goto label_22db4c;
    }
    ctx->pc = 0x22DB44u;
    {
        const bool branch_taken_0x22db44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22db44) {
            ctx->pc = 0x22DB54u;
            goto label_22db54;
        }
    }
    ctx->pc = 0x22DB4Cu;
label_22db4c:
    // 0x22db4c: 0xc7ac016c  lwc1        $f12, 0x16C($sp)
    ctx->pc = 0x22db4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_22db50:
    // 0x22db50: 0xe7ac00e4  swc1        $f12, 0xE4($sp)
    ctx->pc = 0x22db50u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
label_22db54:
    // 0x22db54: 0xc7a000e4  lwc1        $f0, 0xE4($sp)
    ctx->pc = 0x22db54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22db58:
    // 0x22db58: 0xe7a000e8  swc1        $f0, 0xE8($sp)
    ctx->pc = 0x22db58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_22db5c:
    // 0x22db5c: 0xc7a000e8  lwc1        $f0, 0xE8($sp)
    ctx->pc = 0x22db5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22db60:
    // 0x22db60: 0xe7a00164  swc1        $f0, 0x164($sp)
    ctx->pc = 0x22db60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 356), bits); }
label_22db64:
    // 0x22db64: 0xc7a10168  lwc1        $f1, 0x168($sp)
    ctx->pc = 0x22db64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22db68:
    // 0x22db68: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22db68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22db6c:
    // 0x22db6c: 0x0  nop
    ctx->pc = 0x22db6cu;
    // NOP
label_22db70:
    // 0x22db70: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x22db70u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22db74:
    // 0x22db74: 0x45010014  bc1t        . + 4 + (0x14 << 2)
label_22db78:
    if (ctx->pc == 0x22DB78u) {
        ctx->pc = 0x22DB7Cu;
        goto label_22db7c;
    }
    ctx->pc = 0x22DB74u;
    {
        const bool branch_taken_0x22db74 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22db74) {
            ctx->pc = 0x22DBC8u;
            goto label_22dbc8;
        }
    }
    ctx->pc = 0x22DB7Cu;
label_22db7c:
    // 0x22db7c: 0xc7a10168  lwc1        $f1, 0x168($sp)
    ctx->pc = 0x22db7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22db80:
    // 0x22db80: 0xc7a00170  lwc1        $f0, 0x170($sp)
    ctx->pc = 0x22db80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22db84:
    // 0x22db84: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x22db84u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_22db88:
    // 0x22db88: 0xc7a00168  lwc1        $f0, 0x168($sp)
    ctx->pc = 0x22db88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22db8c:
    // 0x22db8c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x22db8cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22db90:
    // 0x22db90: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_22db94:
    if (ctx->pc == 0x22DB94u) {
        ctx->pc = 0x22DB98u;
        goto label_22db98;
    }
    ctx->pc = 0x22DB90u;
    {
        const bool branch_taken_0x22db90 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22db90) {
            ctx->pc = 0x22DBB0u;
            goto label_22dbb0;
        }
    }
    ctx->pc = 0x22DB98u;
label_22db98:
    // 0x22db98: 0xc7a10168  lwc1        $f1, 0x168($sp)
    ctx->pc = 0x22db98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22db9c:
    // 0x22db9c: 0xc7a00170  lwc1        $f0, 0x170($sp)
    ctx->pc = 0x22db9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22dba0:
    // 0x22dba0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x22dba0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_22dba4:
    // 0x22dba4: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x22dba4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_22dba8:
    // 0x22dba8: 0x10000003  b           . + 4 + (0x3 << 2)
label_22dbac:
    if (ctx->pc == 0x22DBACu) {
        ctx->pc = 0x22DBB0u;
        goto label_22dbb0;
    }
    ctx->pc = 0x22DBA8u;
    {
        const bool branch_taken_0x22dba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22dba8) {
            ctx->pc = 0x22DBB8u;
            goto label_22dbb8;
        }
    }
    ctx->pc = 0x22DBB0u;
label_22dbb0:
    // 0x22dbb0: 0xc7a00168  lwc1        $f0, 0x168($sp)
    ctx->pc = 0x22dbb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22dbb4:
    // 0x22dbb4: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x22dbb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_22dbb8:
    // 0x22dbb8: 0xc7a000e0  lwc1        $f0, 0xE0($sp)
    ctx->pc = 0x22dbb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22dbbc:
    // 0x22dbbc: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x22dbbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
label_22dbc0:
    // 0x22dbc0: 0x10000012  b           . + 4 + (0x12 << 2)
label_22dbc4:
    if (ctx->pc == 0x22DBC4u) {
        ctx->pc = 0x22DBC8u;
        goto label_22dbc8;
    }
    ctx->pc = 0x22DBC0u;
    {
        const bool branch_taken_0x22dbc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22dbc0) {
            ctx->pc = 0x22DC0Cu;
            goto label_22dc0c;
        }
    }
    ctx->pc = 0x22DBC8u;
label_22dbc8:
    // 0x22dbc8: 0xc7a10168  lwc1        $f1, 0x168($sp)
    ctx->pc = 0x22dbc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22dbcc:
    // 0x22dbcc: 0xc7a00170  lwc1        $f0, 0x170($sp)
    ctx->pc = 0x22dbccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22dbd0:
    // 0x22dbd0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x22dbd0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_22dbd4:
    // 0x22dbd4: 0xc7a00168  lwc1        $f0, 0x168($sp)
    ctx->pc = 0x22dbd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22dbd8:
    // 0x22dbd8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x22dbd8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22dbdc:
    // 0x22dbdc: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_22dbe0:
    if (ctx->pc == 0x22DBE0u) {
        ctx->pc = 0x22DBE4u;
        goto label_22dbe4;
    }
    ctx->pc = 0x22DBDCu;
    {
        const bool branch_taken_0x22dbdc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22dbdc) {
            ctx->pc = 0x22DBFCu;
            goto label_22dbfc;
        }
    }
    ctx->pc = 0x22DBE4u;
label_22dbe4:
    // 0x22dbe4: 0xc7a10168  lwc1        $f1, 0x168($sp)
    ctx->pc = 0x22dbe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22dbe8:
    // 0x22dbe8: 0xc7a00170  lwc1        $f0, 0x170($sp)
    ctx->pc = 0x22dbe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22dbec:
    // 0x22dbec: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x22dbecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_22dbf0:
    // 0x22dbf0: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x22dbf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_22dbf4:
    // 0x22dbf4: 0x10000003  b           . + 4 + (0x3 << 2)
label_22dbf8:
    if (ctx->pc == 0x22DBF8u) {
        ctx->pc = 0x22DBFCu;
        goto label_22dbfc;
    }
    ctx->pc = 0x22DBF4u;
    {
        const bool branch_taken_0x22dbf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22dbf4) {
            ctx->pc = 0x22DC04u;
            goto label_22dc04;
        }
    }
    ctx->pc = 0x22DBFCu;
label_22dbfc:
    // 0x22dbfc: 0xc7a00168  lwc1        $f0, 0x168($sp)
    ctx->pc = 0x22dbfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22dc00:
    // 0x22dc00: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x22dc00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_22dc04:
    // 0x22dc04: 0xc7a000d8  lwc1        $f0, 0xD8($sp)
    ctx->pc = 0x22dc04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22dc08:
    // 0x22dc08: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x22dc08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
label_22dc0c:
    // 0x22dc0c: 0xc7a000dc  lwc1        $f0, 0xDC($sp)
    ctx->pc = 0x22dc0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22dc10:
    // 0x22dc10: 0xe7a00160  swc1        $f0, 0x160($sp)
    ctx->pc = 0x22dc10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
label_22dc14:
    // 0x22dc14: 0x8fa40190  lw          $a0, 0x190($sp)
    ctx->pc = 0x22dc14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
label_22dc18:
    // 0x22dc18: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x22dc18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_22dc1c:
    // 0x22dc1c: 0xc7ac0164  lwc1        $f12, 0x164($sp)
    ctx->pc = 0x22dc1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_22dc20:
    // 0x22dc20: 0xc7ad0160  lwc1        $f13, 0x160($sp)
    ctx->pc = 0x22dc20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_22dc24:
    // 0x22dc24: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x22dc24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22dc28:
    // 0x22dc28: 0xc08c208  jal         func_230820
label_22dc2c:
    if (ctx->pc == 0x22DC2Cu) {
        ctx->pc = 0x22DC30u;
        goto label_22dc30;
    }
    ctx->pc = 0x22DC28u;
    SET_GPR_U32(ctx, 31, 0x22DC30u);
    ctx->pc = 0x230820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230820u, 0x22DC28u, 0x22DC30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DC30u;
label_22dc30:
    // 0x22dc30: 0x10000205  b           . + 4 + (0x205 << 2)
label_22dc34:
    if (ctx->pc == 0x22DC34u) {
        ctx->pc = 0x22DC38u;
        goto label_22dc38;
    }
    ctx->pc = 0x22DC30u;
    {
        const bool branch_taken_0x22dc30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22dc30) {
            ctx->pc = 0x22E448u;
            goto label_22e448;
        }
    }
    ctx->pc = 0x22DC38u;
label_22dc38:
    // 0x22dc38: 0x8fa40190  lw          $a0, 0x190($sp)
    ctx->pc = 0x22dc38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
label_22dc3c:
    // 0x22dc3c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x22dc3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_22dc40:
    // 0x22dc40: 0xc08c49c  jal         func_231270
label_22dc44:
    if (ctx->pc == 0x22DC44u) {
        ctx->pc = 0x22DC48u;
        goto label_22dc48;
    }
    ctx->pc = 0x22DC40u;
    SET_GPR_U32(ctx, 31, 0x22DC48u);
    ctx->pc = 0x231270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231270u, 0x22DC40u, 0x22DC48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DC48u;
label_22dc48:
    // 0x22dc48: 0xe7a0015c  swc1        $f0, 0x15C($sp)
    ctx->pc = 0x22dc48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 348), bits); }
label_22dc4c:
    // 0x22dc4c: 0x12400009  beqz        $s2, . + 4 + (0x9 << 2)
label_22dc50:
    if (ctx->pc == 0x22DC50u) {
        ctx->pc = 0x22DC54u;
        goto label_22dc54;
    }
    ctx->pc = 0x22DC4Cu;
    {
        const bool branch_taken_0x22dc4c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x22dc4c) {
            ctx->pc = 0x22DC74u;
            goto label_22dc74;
        }
    }
    ctx->pc = 0x22DC54u;
label_22dc54:
    // 0x22dc54: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x22dc54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_22dc58:
    // 0x22dc58: 0x8fa40190  lw          $a0, 0x190($sp)
    ctx->pc = 0x22dc58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
label_22dc5c:
    // 0x22dc5c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x22dc5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_22dc60:
    // 0x22dc60: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x22dc60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_22dc64:
    // 0x22dc64: 0xc08c434  jal         func_2310D0
label_22dc68:
    if (ctx->pc == 0x22DC68u) {
        ctx->pc = 0x22DC6Cu;
        goto label_22dc6c;
    }
    ctx->pc = 0x22DC64u;
    SET_GPR_U32(ctx, 31, 0x22DC6Cu);
    ctx->pc = 0x2310D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2310D0u, 0x22DC64u, 0x22DC6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DC6Cu;
label_22dc6c:
    // 0x22dc6c: 0x100001f6  b           . + 4 + (0x1F6 << 2)
label_22dc70:
    if (ctx->pc == 0x22DC70u) {
        ctx->pc = 0x22DC74u;
        goto label_22dc74;
    }
    ctx->pc = 0x22DC6Cu;
    {
        const bool branch_taken_0x22dc6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22dc6c) {
            ctx->pc = 0x22E448u;
            goto label_22e448;
        }
    }
    ctx->pc = 0x22DC74u;
label_22dc74:
    // 0x22dc74: 0xc7a1018c  lwc1        $f1, 0x18C($sp)
    ctx->pc = 0x22dc74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22dc78:
    // 0x22dc78: 0xc7a00184  lwc1        $f0, 0x184($sp)
    ctx->pc = 0x22dc78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22dc7c:
    // 0x22dc7c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x22dc7cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_22dc80:
    // 0x22dc80: 0xe7a00158  swc1        $f0, 0x158($sp)
    ctx->pc = 0x22dc80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
label_22dc84:
    // 0x22dc84: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x22dc84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_22dc88:
    // 0x22dc88: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x22dc88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22dc8c:
    // 0x22dc8c: 0xc7a0015c  lwc1        $f0, 0x15C($sp)
    ctx->pc = 0x22dc8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22dc90:
    // 0x22dc90: 0x460008c1  sub.s       $f3, $f1, $f0
    ctx->pc = 0x22dc90u;
    ctx->f[3] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_22dc94:
    // 0x22dc94: 0xc7a20158  lwc1        $f2, 0x158($sp)
    ctx->pc = 0x22dc94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_22dc98:
    // 0x22dc98: 0xc7a1015c  lwc1        $f1, 0x15C($sp)
    ctx->pc = 0x22dc98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22dc9c:
    // 0x22dc9c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22dc9cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22dca0:
    // 0x22dca0: 0x0  nop
    ctx->pc = 0x22dca0u;
    // NOP
label_22dca4:
    // 0x22dca4: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x22dca4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
label_22dca8:
    // 0x22dca8: 0x4603131c  madd.s      $f12, $f2, $f3
    ctx->pc = 0x22dca8u;
    ctx->f[12] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_22dcac:
    // 0x22dcac: 0x8fa40190  lw          $a0, 0x190($sp)
    ctx->pc = 0x22dcacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
label_22dcb0:
    // 0x22dcb0: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x22dcb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_22dcb4:
    // 0x22dcb4: 0xc08c434  jal         func_2310D0
label_22dcb8:
    if (ctx->pc == 0x22DCB8u) {
        ctx->pc = 0x22DCBCu;
        goto label_22dcbc;
    }
    ctx->pc = 0x22DCB4u;
    SET_GPR_U32(ctx, 31, 0x22DCBCu);
    ctx->pc = 0x2310D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2310D0u, 0x22DCB4u, 0x22DCBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DCBCu;
label_22dcbc:
    // 0x22dcbc: 0x100001e2  b           . + 4 + (0x1E2 << 2)
label_22dcc0:
    if (ctx->pc == 0x22DCC0u) {
        ctx->pc = 0x22DCC4u;
        goto label_22dcc4;
    }
    ctx->pc = 0x22DCBCu;
    {
        const bool branch_taken_0x22dcbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22dcbc) {
            ctx->pc = 0x22E448u;
            goto label_22e448;
        }
    }
    ctx->pc = 0x22DCC4u;
label_22dcc4:
    // 0x22dcc4: 0x8fa40190  lw          $a0, 0x190($sp)
    ctx->pc = 0x22dcc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
label_22dcc8:
    // 0x22dcc8: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x22dcc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_22dccc:
    // 0x22dccc: 0xc08c510  jal         func_231440
label_22dcd0:
    if (ctx->pc == 0x22DCD0u) {
        ctx->pc = 0x22DCD4u;
        goto label_22dcd4;
    }
    ctx->pc = 0x22DCCCu;
    SET_GPR_U32(ctx, 31, 0x22DCD4u);
    ctx->pc = 0x231440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231440u, 0x22DCCCu, 0x22DCD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DCD4u;
label_22dcd4:
    // 0x22dcd4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x22dcd4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22dcd8:
    // 0x22dcd8: 0x12400017  beqz        $s2, . + 4 + (0x17 << 2)
label_22dcdc:
    if (ctx->pc == 0x22DCDCu) {
        ctx->pc = 0x22DCE0u;
        goto label_22dce0;
    }
    ctx->pc = 0x22DCD8u;
    {
        const bool branch_taken_0x22dcd8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x22dcd8) {
            ctx->pc = 0x22DD38u;
            goto label_22dd38;
        }
    }
    ctx->pc = 0x22DCE0u;
label_22dce0:
    // 0x22dce0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x22dce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_22dce4:
    // 0x22dce4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x22dce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22dce8:
    // 0x22dce8: 0xe7a00154  swc1        $f0, 0x154($sp)
    ctx->pc = 0x22dce8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 340), bits); }
label_22dcec:
    // 0x22dcec: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x22dcecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_22dcf0:
    // 0x22dcf0: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x22dcf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22dcf4:
    // 0x22dcf4: 0xe7a00150  swc1        $f0, 0x150($sp)
    ctx->pc = 0x22dcf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
label_22dcf8:
    // 0x22dcf8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x22dcf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_22dcfc:
    // 0x22dcfc: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x22dcfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22dd00:
    // 0x22dd00: 0xe7a0014c  swc1        $f0, 0x14C($sp)
    ctx->pc = 0x22dd00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
label_22dd04:
    // 0x22dd04: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x22dd04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_22dd08:
    // 0x22dd08: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x22dd08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22dd0c:
    // 0x22dd0c: 0xe7a00148  swc1        $f0, 0x148($sp)
    ctx->pc = 0x22dd0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
label_22dd10:
    // 0x22dd10: 0x8fa40190  lw          $a0, 0x190($sp)
    ctx->pc = 0x22dd10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
label_22dd14:
    // 0x22dd14: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x22dd14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_22dd18:
    // 0x22dd18: 0xc7ac0154  lwc1        $f12, 0x154($sp)
    ctx->pc = 0x22dd18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_22dd1c:
    // 0x22dd1c: 0xc7ad0150  lwc1        $f13, 0x150($sp)
    ctx->pc = 0x22dd1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_22dd20:
    // 0x22dd20: 0xc7ae014c  lwc1        $f14, 0x14C($sp)
    ctx->pc = 0x22dd20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_22dd24:
    // 0x22dd24: 0xc7af0148  lwc1        $f15, 0x148($sp)
    ctx->pc = 0x22dd24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_22dd28:
    // 0x22dd28: 0xc08c4d0  jal         func_231340
label_22dd2c:
    if (ctx->pc == 0x22DD2Cu) {
        ctx->pc = 0x22DD30u;
        goto label_22dd30;
    }
    ctx->pc = 0x22DD28u;
    SET_GPR_U32(ctx, 31, 0x22DD30u);
    ctx->pc = 0x231340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231340u, 0x22DD28u, 0x22DD30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DD30u;
label_22dd30:
    // 0x22dd30: 0x100001c5  b           . + 4 + (0x1C5 << 2)
label_22dd34:
    if (ctx->pc == 0x22DD34u) {
        ctx->pc = 0x22DD38u;
        goto label_22dd38;
    }
    ctx->pc = 0x22DD30u;
    {
        const bool branch_taken_0x22dd30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22dd30) {
            ctx->pc = 0x22E448u;
            goto label_22e448;
        }
    }
    ctx->pc = 0x22DD38u;
label_22dd38:
    // 0x22dd38: 0xc7a1018c  lwc1        $f1, 0x18C($sp)
    ctx->pc = 0x22dd38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22dd3c:
    // 0x22dd3c: 0xc7a00184  lwc1        $f0, 0x184($sp)
    ctx->pc = 0x22dd3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22dd40:
    // 0x22dd40: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x22dd40u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_22dd44:
    // 0x22dd44: 0xe7a00144  swc1        $f0, 0x144($sp)
    ctx->pc = 0x22dd44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
label_22dd48:
    // 0x22dd48: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x22dd48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_22dd4c:
    // 0x22dd4c: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x22dd4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22dd50:
    // 0x22dd50: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x22dd50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22dd54:
    // 0x22dd54: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x22dd54u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_22dd58:
    // 0x22dd58: 0xc7a00144  lwc1        $f0, 0x144($sp)
    ctx->pc = 0x22dd58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22dd5c:
    // 0x22dd5c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x22dd5cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_22dd60:
    // 0x22dd60: 0xe7a00140  swc1        $f0, 0x140($sp)
    ctx->pc = 0x22dd60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_22dd64:
    // 0x22dd64: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x22dd64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_22dd68:
    // 0x22dd68: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x22dd68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22dd6c:
    // 0x22dd6c: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x22dd6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22dd70:
    // 0x22dd70: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x22dd70u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_22dd74:
    // 0x22dd74: 0xc7a00144  lwc1        $f0, 0x144($sp)
    ctx->pc = 0x22dd74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22dd78:
    // 0x22dd78: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x22dd78u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_22dd7c:
    // 0x22dd7c: 0xe7a0013c  swc1        $f0, 0x13C($sp)
    ctx->pc = 0x22dd7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
label_22dd80:
    // 0x22dd80: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x22dd80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_22dd84:
    // 0x22dd84: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x22dd84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22dd88:
    // 0x22dd88: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x22dd88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22dd8c:
    // 0x22dd8c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x22dd8cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_22dd90:
    // 0x22dd90: 0xc7a00144  lwc1        $f0, 0x144($sp)
    ctx->pc = 0x22dd90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22dd94:
    // 0x22dd94: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x22dd94u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_22dd98:
    // 0x22dd98: 0xe7a00138  swc1        $f0, 0x138($sp)
    ctx->pc = 0x22dd98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_22dd9c:
    // 0x22dd9c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x22dd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_22dda0:
    // 0x22dda0: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x22dda0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22dda4:
    // 0x22dda4: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x22dda4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22dda8:
    // 0x22dda8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x22dda8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_22ddac:
    // 0x22ddac: 0xc7a00144  lwc1        $f0, 0x144($sp)
    ctx->pc = 0x22ddacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22ddb0:
    // 0x22ddb0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x22ddb0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_22ddb4:
    // 0x22ddb4: 0xe7a00134  swc1        $f0, 0x134($sp)
    ctx->pc = 0x22ddb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
label_22ddb8:
    // 0x22ddb8: 0xc7a10140  lwc1        $f1, 0x140($sp)
    ctx->pc = 0x22ddb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22ddbc:
    // 0x22ddbc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22ddbcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22ddc0:
    // 0x22ddc0: 0x0  nop
    ctx->pc = 0x22ddc0u;
    // NOP
label_22ddc4:
    // 0x22ddc4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x22ddc4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22ddc8:
    // 0x22ddc8: 0x45010016  bc1t        . + 4 + (0x16 << 2)
label_22ddcc:
    if (ctx->pc == 0x22DDCCu) {
        ctx->pc = 0x22DDD0u;
        goto label_22ddd0;
    }
    ctx->pc = 0x22DDC8u;
    {
        const bool branch_taken_0x22ddc8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22ddc8) {
            ctx->pc = 0x22DE24u;
            goto label_22de24;
        }
    }
    ctx->pc = 0x22DDD0u;
label_22ddd0:
    // 0x22ddd0: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x22ddd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22ddd4:
    // 0x22ddd4: 0xc7a00140  lwc1        $f0, 0x140($sp)
    ctx->pc = 0x22ddd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22ddd8:
    // 0x22ddd8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x22ddd8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_22dddc:
    // 0x22dddc: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x22dddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_22dde0:
    // 0x22dde0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x22dde0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22dde4:
    // 0x22dde4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x22dde4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22dde8:
    // 0x22dde8: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_22ddec:
    if (ctx->pc == 0x22DDECu) {
        ctx->pc = 0x22DDF0u;
        goto label_22ddf0;
    }
    ctx->pc = 0x22DDE8u;
    {
        const bool branch_taken_0x22dde8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22dde8) {
            ctx->pc = 0x22DE08u;
            goto label_22de08;
        }
    }
    ctx->pc = 0x22DDF0u;
label_22ddf0:
    // 0x22ddf0: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x22ddf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22ddf4:
    // 0x22ddf4: 0xc7a00140  lwc1        $f0, 0x140($sp)
    ctx->pc = 0x22ddf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22ddf8:
    // 0x22ddf8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x22ddf8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_22ddfc:
    // 0x22ddfc: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x22ddfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_22de00:
    // 0x22de00: 0x10000004  b           . + 4 + (0x4 << 2)
label_22de04:
    if (ctx->pc == 0x22DE04u) {
        ctx->pc = 0x22DE08u;
        goto label_22de08;
    }
    ctx->pc = 0x22DE00u;
    {
        const bool branch_taken_0x22de00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22de00) {
            ctx->pc = 0x22DE14u;
            goto label_22de14;
        }
    }
    ctx->pc = 0x22DE08u;
label_22de08:
    // 0x22de08: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x22de08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_22de0c:
    // 0x22de0c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x22de0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22de10:
    // 0x22de10: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x22de10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_22de14:
    // 0x22de14: 0xc7a000d4  lwc1        $f0, 0xD4($sp)
    ctx->pc = 0x22de14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22de18:
    // 0x22de18: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x22de18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_22de1c:
    // 0x22de1c: 0x10000014  b           . + 4 + (0x14 << 2)
label_22de20:
    if (ctx->pc == 0x22DE20u) {
        ctx->pc = 0x22DE24u;
        goto label_22de24;
    }
    ctx->pc = 0x22DE1Cu;
    {
        const bool branch_taken_0x22de1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22de1c) {
            ctx->pc = 0x22DE70u;
            goto label_22de70;
        }
    }
    ctx->pc = 0x22DE24u;
label_22de24:
    // 0x22de24: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x22de24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22de28:
    // 0x22de28: 0xc7a00140  lwc1        $f0, 0x140($sp)
    ctx->pc = 0x22de28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22de2c:
    // 0x22de2c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x22de2cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_22de30:
    // 0x22de30: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x22de30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_22de34:
    // 0x22de34: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x22de34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22de38:
    // 0x22de38: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x22de38u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22de3c:
    // 0x22de3c: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_22de40:
    if (ctx->pc == 0x22DE40u) {
        ctx->pc = 0x22DE44u;
        goto label_22de44;
    }
    ctx->pc = 0x22DE3Cu;
    {
        const bool branch_taken_0x22de3c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22de3c) {
            ctx->pc = 0x22DE5Cu;
            goto label_22de5c;
        }
    }
    ctx->pc = 0x22DE44u;
label_22de44:
    // 0x22de44: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x22de44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22de48:
    // 0x22de48: 0xc7a00140  lwc1        $f0, 0x140($sp)
    ctx->pc = 0x22de48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22de4c:
    // 0x22de4c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x22de4cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_22de50:
    // 0x22de50: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x22de50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
label_22de54:
    // 0x22de54: 0x10000004  b           . + 4 + (0x4 << 2)
label_22de58:
    if (ctx->pc == 0x22DE58u) {
        ctx->pc = 0x22DE5Cu;
        goto label_22de5c;
    }
    ctx->pc = 0x22DE54u;
    {
        const bool branch_taken_0x22de54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22de54) {
            ctx->pc = 0x22DE68u;
            goto label_22de68;
        }
    }
    ctx->pc = 0x22DE5Cu;
label_22de5c:
    // 0x22de5c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x22de5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_22de60:
    // 0x22de60: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x22de60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22de64:
    // 0x22de64: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x22de64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
label_22de68:
    // 0x22de68: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x22de68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22de6c:
    // 0x22de6c: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x22de6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_22de70:
    // 0x22de70: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x22de70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22de74:
    // 0x22de74: 0xe7a00130  swc1        $f0, 0x130($sp)
    ctx->pc = 0x22de74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_22de78:
    // 0x22de78: 0xc7a1013c  lwc1        $f1, 0x13C($sp)
    ctx->pc = 0x22de78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22de7c:
    // 0x22de7c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22de7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22de80:
    // 0x22de80: 0x0  nop
    ctx->pc = 0x22de80u;
    // NOP
label_22de84:
    // 0x22de84: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x22de84u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22de88:
    // 0x22de88: 0x45010016  bc1t        . + 4 + (0x16 << 2)
label_22de8c:
    if (ctx->pc == 0x22DE8Cu) {
        ctx->pc = 0x22DE90u;
        goto label_22de90;
    }
    ctx->pc = 0x22DE88u;
    {
        const bool branch_taken_0x22de88 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22de88) {
            ctx->pc = 0x22DEE4u;
            goto label_22dee4;
        }
    }
    ctx->pc = 0x22DE90u;
label_22de90:
    // 0x22de90: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x22de90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22de94:
    // 0x22de94: 0xc7a0013c  lwc1        $f0, 0x13C($sp)
    ctx->pc = 0x22de94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22de98:
    // 0x22de98: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x22de98u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_22de9c:
    // 0x22de9c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x22de9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_22dea0:
    // 0x22dea0: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x22dea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22dea4:
    // 0x22dea4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x22dea4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22dea8:
    // 0x22dea8: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_22deac:
    if (ctx->pc == 0x22DEACu) {
        ctx->pc = 0x22DEB0u;
        goto label_22deb0;
    }
    ctx->pc = 0x22DEA8u;
    {
        const bool branch_taken_0x22dea8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22dea8) {
            ctx->pc = 0x22DEC8u;
            goto label_22dec8;
        }
    }
    ctx->pc = 0x22DEB0u;
label_22deb0:
    // 0x22deb0: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x22deb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22deb4:
    // 0x22deb4: 0xc7a0013c  lwc1        $f0, 0x13C($sp)
    ctx->pc = 0x22deb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22deb8:
    // 0x22deb8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x22deb8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_22debc:
    // 0x22debc: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x22debcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_22dec0:
    // 0x22dec0: 0x10000004  b           . + 4 + (0x4 << 2)
label_22dec4:
    if (ctx->pc == 0x22DEC4u) {
        ctx->pc = 0x22DEC8u;
        goto label_22dec8;
    }
    ctx->pc = 0x22DEC0u;
    {
        const bool branch_taken_0x22dec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22dec0) {
            ctx->pc = 0x22DED4u;
            goto label_22ded4;
        }
    }
    ctx->pc = 0x22DEC8u;
label_22dec8:
    // 0x22dec8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x22dec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_22decc:
    // 0x22decc: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x22deccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22ded0:
    // 0x22ded0: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x22ded0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_22ded4:
    // 0x22ded4: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x22ded4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22ded8:
    // 0x22ded8: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x22ded8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_22dedc:
    // 0x22dedc: 0x10000014  b           . + 4 + (0x14 << 2)
label_22dee0:
    if (ctx->pc == 0x22DEE0u) {
        ctx->pc = 0x22DEE4u;
        goto label_22dee4;
    }
    ctx->pc = 0x22DEDCu;
    {
        const bool branch_taken_0x22dedc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22dedc) {
            ctx->pc = 0x22DF30u;
            goto label_22df30;
        }
    }
    ctx->pc = 0x22DEE4u;
label_22dee4:
    // 0x22dee4: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x22dee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22dee8:
    // 0x22dee8: 0xc7a0013c  lwc1        $f0, 0x13C($sp)
    ctx->pc = 0x22dee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22deec:
    // 0x22deec: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x22deecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_22def0:
    // 0x22def0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x22def0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_22def4:
    // 0x22def4: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x22def4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22def8:
    // 0x22def8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x22def8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22defc:
    // 0x22defc: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_22df00:
    if (ctx->pc == 0x22DF00u) {
        ctx->pc = 0x22DF04u;
        goto label_22df04;
    }
    ctx->pc = 0x22DEFCu;
    {
        const bool branch_taken_0x22defc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22defc) {
            ctx->pc = 0x22DF1Cu;
            goto label_22df1c;
        }
    }
    ctx->pc = 0x22DF04u;
label_22df04:
    // 0x22df04: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x22df04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22df08:
    // 0x22df08: 0xc7a1013c  lwc1        $f1, 0x13C($sp)
    ctx->pc = 0x22df08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22df0c:
    // 0x22df0c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x22df0cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_22df10:
    // 0x22df10: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x22df10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_22df14:
    // 0x22df14: 0x10000004  b           . + 4 + (0x4 << 2)
label_22df18:
    if (ctx->pc == 0x22DF18u) {
        ctx->pc = 0x22DF1Cu;
        goto label_22df1c;
    }
    ctx->pc = 0x22DF14u;
    {
        const bool branch_taken_0x22df14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22df14) {
            ctx->pc = 0x22DF28u;
            goto label_22df28;
        }
    }
    ctx->pc = 0x22DF1Cu;
label_22df1c:
    // 0x22df1c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x22df1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_22df20:
    // 0x22df20: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x22df20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22df24:
    // 0x22df24: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x22df24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_22df28:
    // 0x22df28: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x22df28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22df2c:
    // 0x22df2c: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x22df2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_22df30:
    // 0x22df30: 0xc7a000c4  lwc1        $f0, 0xC4($sp)
    ctx->pc = 0x22df30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22df34:
    // 0x22df34: 0xe7a0012c  swc1        $f0, 0x12C($sp)
    ctx->pc = 0x22df34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
label_22df38:
    // 0x22df38: 0xc7a10138  lwc1        $f1, 0x138($sp)
    ctx->pc = 0x22df38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22df3c:
    // 0x22df3c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22df3cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22df40:
    // 0x22df40: 0x0  nop
    ctx->pc = 0x22df40u;
    // NOP
label_22df44:
    // 0x22df44: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x22df44u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22df48:
    // 0x22df48: 0x45010016  bc1t        . + 4 + (0x16 << 2)
label_22df4c:
    if (ctx->pc == 0x22DF4Cu) {
        ctx->pc = 0x22DF50u;
        goto label_22df50;
    }
    ctx->pc = 0x22DF48u;
    {
        const bool branch_taken_0x22df48 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22df48) {
            ctx->pc = 0x22DFA4u;
            goto label_22dfa4;
        }
    }
    ctx->pc = 0x22DF50u;
label_22df50:
    // 0x22df50: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x22df50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22df54:
    // 0x22df54: 0xc7a00138  lwc1        $f0, 0x138($sp)
    ctx->pc = 0x22df54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22df58:
    // 0x22df58: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x22df58u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_22df5c:
    // 0x22df5c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x22df5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_22df60:
    // 0x22df60: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x22df60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22df64:
    // 0x22df64: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x22df64u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22df68:
    // 0x22df68: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_22df6c:
    if (ctx->pc == 0x22DF6Cu) {
        ctx->pc = 0x22DF70u;
        goto label_22df70;
    }
    ctx->pc = 0x22DF68u;
    {
        const bool branch_taken_0x22df68 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22df68) {
            ctx->pc = 0x22DF88u;
            goto label_22df88;
        }
    }
    ctx->pc = 0x22DF70u;
label_22df70:
    // 0x22df70: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x22df70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22df74:
    // 0x22df74: 0xc7a10138  lwc1        $f1, 0x138($sp)
    ctx->pc = 0x22df74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22df78:
    // 0x22df78: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x22df78u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_22df7c:
    // 0x22df7c: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x22df7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
label_22df80:
    // 0x22df80: 0x10000004  b           . + 4 + (0x4 << 2)
label_22df84:
    if (ctx->pc == 0x22DF84u) {
        ctx->pc = 0x22DF88u;
        goto label_22df88;
    }
    ctx->pc = 0x22DF80u;
    {
        const bool branch_taken_0x22df80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22df80) {
            ctx->pc = 0x22DF94u;
            goto label_22df94;
        }
    }
    ctx->pc = 0x22DF88u;
label_22df88:
    // 0x22df88: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x22df88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_22df8c:
    // 0x22df8c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x22df8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22df90:
    // 0x22df90: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x22df90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
label_22df94:
    // 0x22df94: 0xc7a000bc  lwc1        $f0, 0xBC($sp)
    ctx->pc = 0x22df94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22df98:
    // 0x22df98: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x22df98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_22df9c:
    // 0x22df9c: 0x10000014  b           . + 4 + (0x14 << 2)
label_22dfa0:
    if (ctx->pc == 0x22DFA0u) {
        ctx->pc = 0x22DFA4u;
        goto label_22dfa4;
    }
    ctx->pc = 0x22DF9Cu;
    {
        const bool branch_taken_0x22df9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22df9c) {
            ctx->pc = 0x22DFF0u;
            goto label_22dff0;
        }
    }
    ctx->pc = 0x22DFA4u;
label_22dfa4:
    // 0x22dfa4: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x22dfa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22dfa8:
    // 0x22dfa8: 0xc7a00138  lwc1        $f0, 0x138($sp)
    ctx->pc = 0x22dfa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22dfac:
    // 0x22dfac: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x22dfacu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_22dfb0:
    // 0x22dfb0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x22dfb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_22dfb4:
    // 0x22dfb4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x22dfb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22dfb8:
    // 0x22dfb8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x22dfb8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22dfbc:
    // 0x22dfbc: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_22dfc0:
    if (ctx->pc == 0x22DFC0u) {
        ctx->pc = 0x22DFC4u;
        goto label_22dfc4;
    }
    ctx->pc = 0x22DFBCu;
    {
        const bool branch_taken_0x22dfbc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22dfbc) {
            ctx->pc = 0x22DFDCu;
            goto label_22dfdc;
        }
    }
    ctx->pc = 0x22DFC4u;
label_22dfc4:
    // 0x22dfc4: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x22dfc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22dfc8:
    // 0x22dfc8: 0xc7a00138  lwc1        $f0, 0x138($sp)
    ctx->pc = 0x22dfc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22dfcc:
    // 0x22dfcc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x22dfccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_22dfd0:
    // 0x22dfd0: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x22dfd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
label_22dfd4:
    // 0x22dfd4: 0x10000004  b           . + 4 + (0x4 << 2)
label_22dfd8:
    if (ctx->pc == 0x22DFD8u) {
        ctx->pc = 0x22DFDCu;
        goto label_22dfdc;
    }
    ctx->pc = 0x22DFD4u;
    {
        const bool branch_taken_0x22dfd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22dfd4) {
            ctx->pc = 0x22DFE8u;
            goto label_22dfe8;
        }
    }
    ctx->pc = 0x22DFDCu;
label_22dfdc:
    // 0x22dfdc: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x22dfdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_22dfe0:
    // 0x22dfe0: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x22dfe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22dfe4:
    // 0x22dfe4: 0xe7a100b4  swc1        $f1, 0xB4($sp)
    ctx->pc = 0x22dfe4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
label_22dfe8:
    // 0x22dfe8: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x22dfe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22dfec:
    // 0x22dfec: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x22dfecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_22dff0:
    // 0x22dff0: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x22dff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22dff4:
    // 0x22dff4: 0xe7a00128  swc1        $f0, 0x128($sp)
    ctx->pc = 0x22dff4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_22dff8:
    // 0x22dff8: 0xc7a10134  lwc1        $f1, 0x134($sp)
    ctx->pc = 0x22dff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22dffc:
    // 0x22dffc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22dffcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22e000:
    // 0x22e000: 0x0  nop
    ctx->pc = 0x22e000u;
    // NOP
label_22e004:
    // 0x22e004: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x22e004u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22e008:
    // 0x22e008: 0x45010016  bc1t        . + 4 + (0x16 << 2)
label_22e00c:
    if (ctx->pc == 0x22E00Cu) {
        ctx->pc = 0x22E010u;
        goto label_22e010;
    }
    ctx->pc = 0x22E008u;
    {
        const bool branch_taken_0x22e008 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22e008) {
            ctx->pc = 0x22E064u;
            goto label_22e064;
        }
    }
    ctx->pc = 0x22E010u;
label_22e010:
    // 0x22e010: 0xc621000c  lwc1        $f1, 0xC($s1)
    ctx->pc = 0x22e010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22e014:
    // 0x22e014: 0xc7a00134  lwc1        $f0, 0x134($sp)
    ctx->pc = 0x22e014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22e018:
    // 0x22e018: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x22e018u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_22e01c:
    // 0x22e01c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x22e01cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_22e020:
    // 0x22e020: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x22e020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22e024:
    // 0x22e024: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x22e024u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22e028:
    // 0x22e028: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_22e02c:
    if (ctx->pc == 0x22E02Cu) {
        ctx->pc = 0x22E030u;
        goto label_22e030;
    }
    ctx->pc = 0x22E028u;
    {
        const bool branch_taken_0x22e028 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22e028) {
            ctx->pc = 0x22E048u;
            goto label_22e048;
        }
    }
    ctx->pc = 0x22E030u;
label_22e030:
    // 0x22e030: 0xc623000c  lwc1        $f3, 0xC($s1)
    ctx->pc = 0x22e030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_22e034:
    // 0x22e034: 0xc7a20134  lwc1        $f2, 0x134($sp)
    ctx->pc = 0x22e034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_22e038:
    // 0x22e038: 0x46021800  add.s       $f0, $f3, $f2
    ctx->pc = 0x22e038u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
label_22e03c:
    // 0x22e03c: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x22e03cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_22e040:
    // 0x22e040: 0x10000004  b           . + 4 + (0x4 << 2)
label_22e044:
    if (ctx->pc == 0x22E044u) {
        ctx->pc = 0x22E048u;
        goto label_22e048;
    }
    ctx->pc = 0x22E040u;
    {
        const bool branch_taken_0x22e040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e040) {
            ctx->pc = 0x22E054u;
            goto label_22e054;
        }
    }
    ctx->pc = 0x22E048u;
label_22e048:
    // 0x22e048: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x22e048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_22e04c:
    // 0x22e04c: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x22e04cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22e050:
    // 0x22e050: 0xe7a100b0  swc1        $f1, 0xB0($sp)
    ctx->pc = 0x22e050u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_22e054:
    // 0x22e054: 0xc7ac00b0  lwc1        $f12, 0xB0($sp)
    ctx->pc = 0x22e054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_22e058:
    // 0x22e058: 0xe7ac00ac  swc1        $f12, 0xAC($sp)
    ctx->pc = 0x22e058u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
label_22e05c:
    // 0x22e05c: 0x10000014  b           . + 4 + (0x14 << 2)
label_22e060:
    if (ctx->pc == 0x22E060u) {
        ctx->pc = 0x22E064u;
        goto label_22e064;
    }
    ctx->pc = 0x22E05Cu;
    {
        const bool branch_taken_0x22e05c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e05c) {
            ctx->pc = 0x22E0B0u;
            goto label_22e0b0;
        }
    }
    ctx->pc = 0x22E064u;
label_22e064:
    // 0x22e064: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x22e064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22e068:
    // 0x22e068: 0xc7a20134  lwc1        $f2, 0x134($sp)
    ctx->pc = 0x22e068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_22e06c:
    // 0x22e06c: 0x46020040  add.s       $f1, $f0, $f2
    ctx->pc = 0x22e06cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_22e070:
    // 0x22e070: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x22e070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_22e074:
    // 0x22e074: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x22e074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22e078:
    // 0x22e078: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x22e078u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22e07c:
    // 0x22e07c: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_22e080:
    if (ctx->pc == 0x22E080u) {
        ctx->pc = 0x22E084u;
        goto label_22e084;
    }
    ctx->pc = 0x22E07Cu;
    {
        const bool branch_taken_0x22e07c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22e07c) {
            ctx->pc = 0x22E09Cu;
            goto label_22e09c;
        }
    }
    ctx->pc = 0x22E084u;
label_22e084:
    // 0x22e084: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x22e084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22e088:
    // 0x22e088: 0xc7a10134  lwc1        $f1, 0x134($sp)
    ctx->pc = 0x22e088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22e08c:
    // 0x22e08c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x22e08cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_22e090:
    // 0x22e090: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x22e090u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_22e094:
    // 0x22e094: 0x10000004  b           . + 4 + (0x4 << 2)
label_22e098:
    if (ctx->pc == 0x22E098u) {
        ctx->pc = 0x22E09Cu;
        goto label_22e09c;
    }
    ctx->pc = 0x22E094u;
    {
        const bool branch_taken_0x22e094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e094) {
            ctx->pc = 0x22E0A8u;
            goto label_22e0a8;
        }
    }
    ctx->pc = 0x22E09Cu;
label_22e09c:
    // 0x22e09c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x22e09cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_22e0a0:
    // 0x22e0a0: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x22e0a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22e0a4:
    // 0x22e0a4: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x22e0a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_22e0a8:
    // 0x22e0a8: 0xc7a100a8  lwc1        $f1, 0xA8($sp)
    ctx->pc = 0x22e0a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22e0ac:
    // 0x22e0ac: 0xe7a100ac  swc1        $f1, 0xAC($sp)
    ctx->pc = 0x22e0acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
label_22e0b0:
    // 0x22e0b0: 0xc7a000ac  lwc1        $f0, 0xAC($sp)
    ctx->pc = 0x22e0b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22e0b4:
    // 0x22e0b4: 0xe7a00124  swc1        $f0, 0x124($sp)
    ctx->pc = 0x22e0b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
label_22e0b8:
    // 0x22e0b8: 0x8fa40190  lw          $a0, 0x190($sp)
    ctx->pc = 0x22e0b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
label_22e0bc:
    // 0x22e0bc: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x22e0bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_22e0c0:
    // 0x22e0c0: 0xc7ac0130  lwc1        $f12, 0x130($sp)
    ctx->pc = 0x22e0c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_22e0c4:
    // 0x22e0c4: 0xc7ad012c  lwc1        $f13, 0x12C($sp)
    ctx->pc = 0x22e0c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_22e0c8:
    // 0x22e0c8: 0xc7ae0128  lwc1        $f14, 0x128($sp)
    ctx->pc = 0x22e0c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_22e0cc:
    // 0x22e0cc: 0xc7a00124  lwc1        $f0, 0x124($sp)
    ctx->pc = 0x22e0ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22e0d0:
    // 0x22e0d0: 0x460003c6  mov.s       $f15, $f0
    ctx->pc = 0x22e0d0u;
    ctx->f[15] = FPU_MOV_S(ctx->f[0]);
label_22e0d4:
    // 0x22e0d4: 0xc08c4d0  jal         func_231340
label_22e0d8:
    if (ctx->pc == 0x22E0D8u) {
        ctx->pc = 0x22E0DCu;
        goto label_22e0dc;
    }
    ctx->pc = 0x22E0D4u;
    SET_GPR_U32(ctx, 31, 0x22E0DCu);
    ctx->pc = 0x231340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231340u, 0x22E0D4u, 0x22E0DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E0DCu;
label_22e0dc:
    // 0x22e0dc: 0x100000da  b           . + 4 + (0xDA << 2)
label_22e0e0:
    if (ctx->pc == 0x22E0E0u) {
        ctx->pc = 0x22E0E4u;
        goto label_22e0e4;
    }
    ctx->pc = 0x22E0DCu;
    {
        const bool branch_taken_0x22e0dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e0dc) {
            ctx->pc = 0x22E448u;
            goto label_22e448;
        }
    }
    ctx->pc = 0x22E0E4u;
label_22e0e4:
    // 0x22e0e4: 0x124000d8  beqz        $s2, . + 4 + (0xD8 << 2)
label_22e0e8:
    if (ctx->pc == 0x22E0E8u) {
        ctx->pc = 0x22E0ECu;
        goto label_22e0ec;
    }
    ctx->pc = 0x22E0E4u;
    {
        const bool branch_taken_0x22e0e4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e0e4) {
            ctx->pc = 0x22E448u;
            goto label_22e448;
        }
    }
    ctx->pc = 0x22E0ECu;
label_22e0ec:
    // 0x22e0ec: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x22e0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_22e0f0:
    // 0x22e0f0: 0x8fa40190  lw          $a0, 0x190($sp)
    ctx->pc = 0x22e0f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
label_22e0f4:
    // 0x22e0f4: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x22e0f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_22e0f8:
    // 0x22e0f8: 0x90460000  lbu         $a2, 0x0($v0)
    ctx->pc = 0x22e0f8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_22e0fc:
    // 0x22e0fc: 0xc08c8dc  jal         func_232370
label_22e100:
    if (ctx->pc == 0x22E100u) {
        ctx->pc = 0x22E104u;
        goto label_22e104;
    }
    ctx->pc = 0x22E0FCu;
    SET_GPR_U32(ctx, 31, 0x22E104u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x22E0FCu, 0x22E104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E104u;
label_22e104:
    // 0x22e104: 0x100000d0  b           . + 4 + (0xD0 << 2)
label_22e108:
    if (ctx->pc == 0x22E108u) {
        ctx->pc = 0x22E10Cu;
        goto label_22e10c;
    }
    ctx->pc = 0x22E104u;
    {
        const bool branch_taken_0x22e104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e104) {
            ctx->pc = 0x22E448u;
            goto label_22e448;
        }
    }
    ctx->pc = 0x22E10Cu;
label_22e10c:
    // 0x22e10c: 0x8fa40190  lw          $a0, 0x190($sp)
    ctx->pc = 0x22e10cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
label_22e110:
    // 0x22e110: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x22e110u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_22e114:
    // 0x22e114: 0x27a60088  addiu       $a2, $sp, 0x88
    ctx->pc = 0x22e114u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
label_22e118:
    // 0x22e118: 0xc08c6c8  jal         func_231B20
label_22e11c:
    if (ctx->pc == 0x22E11Cu) {
        ctx->pc = 0x22E120u;
        goto label_22e120;
    }
    ctx->pc = 0x22E118u;
    SET_GPR_U32(ctx, 31, 0x22E120u);
    ctx->pc = 0x231B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231B20u, 0x22E118u, 0x22E120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E120u;
label_22e120:
    // 0x22e120: 0x8fa40190  lw          $a0, 0x190($sp)
    ctx->pc = 0x22e120u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
label_22e124:
    // 0x22e124: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x22e124u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_22e128:
    // 0x22e128: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x22e128u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_22e12c:
    // 0x22e12c: 0xc08c688  jal         func_231A20
label_22e130:
    if (ctx->pc == 0x22E130u) {
        ctx->pc = 0x22E134u;
        goto label_22e134;
    }
    ctx->pc = 0x22E12Cu;
    SET_GPR_U32(ctx, 31, 0x22E134u);
    ctx->pc = 0x231A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A20u, 0x22E12Cu, 0x22E134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E134u;
label_22e134:
    // 0x22e134: 0x12400011  beqz        $s2, . + 4 + (0x11 << 2)
label_22e138:
    if (ctx->pc == 0x22E138u) {
        ctx->pc = 0x22E13Cu;
        goto label_22e13c;
    }
    ctx->pc = 0x22E134u;
    {
        const bool branch_taken_0x22e134 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e134) {
            ctx->pc = 0x22E17Cu;
            goto label_22e17c;
        }
    }
    ctx->pc = 0x22E13Cu;
label_22e13c:
    // 0x22e13c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x22e13cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_22e140:
    // 0x22e140: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x22e140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22e144:
    // 0x22e144: 0xe7a10120  swc1        $f1, 0x120($sp)
    ctx->pc = 0x22e144u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_22e148:
    // 0x22e148: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x22e148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_22e14c:
    // 0x22e14c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x22e14cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22e150:
    // 0x22e150: 0xe7a0011c  swc1        $f0, 0x11C($sp)
    ctx->pc = 0x22e150u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
label_22e154:
    // 0x22e154: 0x8fa40190  lw          $a0, 0x190($sp)
    ctx->pc = 0x22e154u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
label_22e158:
    // 0x22e158: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x22e158u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_22e15c:
    // 0x22e15c: 0xc7ac0120  lwc1        $f12, 0x120($sp)
    ctx->pc = 0x22e15cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_22e160:
    // 0x22e160: 0xc7ad011c  lwc1        $f13, 0x11C($sp)
    ctx->pc = 0x22e160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_22e164:
    // 0x22e164: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22e164u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22e168:
    // 0x22e168: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x22e168u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22e16c:
    // 0x22e16c: 0xc08c544  jal         func_231510
label_22e170:
    if (ctx->pc == 0x22E170u) {
        ctx->pc = 0x22E174u;
        goto label_22e174;
    }
    ctx->pc = 0x22E16Cu;
    SET_GPR_U32(ctx, 31, 0x22E174u);
    ctx->pc = 0x231510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231510u, 0x22E16Cu, 0x22E174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E174u;
label_22e174:
    // 0x22e174: 0x100000b4  b           . + 4 + (0xB4 << 2)
label_22e178:
    if (ctx->pc == 0x22E178u) {
        ctx->pc = 0x22E17Cu;
        goto label_22e17c;
    }
    ctx->pc = 0x22E174u;
    {
        const bool branch_taken_0x22e174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e174) {
            ctx->pc = 0x22E448u;
            goto label_22e448;
        }
    }
    ctx->pc = 0x22E17Cu;
label_22e17c:
    // 0x22e17c: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x22e17cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22e180:
    // 0x22e180: 0xc7a30088  lwc1        $f3, 0x88($sp)
    ctx->pc = 0x22e180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_22e184:
    // 0x22e184: 0x46030083  div.s       $f2, $f0, $f3
    ctx->pc = 0x22e184u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[0], ctx->f[3]); }
label_22e188:
    // 0x22e188: 0xe7a20118  swc1        $f2, 0x118($sp)
    ctx->pc = 0x22e188u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_22e18c:
    // 0x22e18c: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x22e18cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22e190:
    // 0x22e190: 0xc7a0008c  lwc1        $f0, 0x8C($sp)
    ctx->pc = 0x22e190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22e194:
    // 0x22e194: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x22e194u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_22e198:
    // 0x22e198: 0xe7a00114  swc1        $f0, 0x114($sp)
    ctx->pc = 0x22e198u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
label_22e19c:
    // 0x22e19c: 0xc7a1018c  lwc1        $f1, 0x18C($sp)
    ctx->pc = 0x22e19cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22e1a0:
    // 0x22e1a0: 0xc7a00184  lwc1        $f0, 0x184($sp)
    ctx->pc = 0x22e1a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22e1a4:
    // 0x22e1a4: 0x460008c3  div.s       $f3, $f1, $f0
    ctx->pc = 0x22e1a4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_22e1a8:
    // 0x22e1a8: 0xe7a30110  swc1        $f3, 0x110($sp)
    ctx->pc = 0x22e1a8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_22e1ac:
    // 0x22e1ac: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x22e1acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_22e1b0:
    // 0x22e1b0: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x22e1b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_22e1b4:
    // 0x22e1b4: 0xc7a00118  lwc1        $f0, 0x118($sp)
    ctx->pc = 0x22e1b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22e1b8:
    // 0x22e1b8: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x22e1b8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_22e1bc:
    // 0x22e1bc: 0xc7a10110  lwc1        $f1, 0x110($sp)
    ctx->pc = 0x22e1bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22e1c0:
    // 0x22e1c0: 0xc7ac0118  lwc1        $f12, 0x118($sp)
    ctx->pc = 0x22e1c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_22e1c4:
    // 0x22e1c4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22e1c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22e1c8:
    // 0x22e1c8: 0x0  nop
    ctx->pc = 0x22e1c8u;
    // NOP
label_22e1cc:
    // 0x22e1cc: 0x460c0018  adda.s      $f0, $f12
    ctx->pc = 0x22e1ccu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[12]));
label_22e1d0:
    // 0x22e1d0: 0x46020b5c  madd.s      $f13, $f1, $f2
    ctx->pc = 0x22e1d0u;
    ctx->f[13] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[2]));
label_22e1d4:
    // 0x22e1d4: 0xe7ad010c  swc1        $f13, 0x10C($sp)
    ctx->pc = 0x22e1d4u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
label_22e1d8:
    // 0x22e1d8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x22e1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_22e1dc:
    // 0x22e1dc: 0xc44d0004  lwc1        $f13, 0x4($v0)
    ctx->pc = 0x22e1dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_22e1e0:
    // 0x22e1e0: 0xc7ae0114  lwc1        $f14, 0x114($sp)
    ctx->pc = 0x22e1e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_22e1e4:
    // 0x22e1e4: 0x460e6b01  sub.s       $f12, $f13, $f14
    ctx->pc = 0x22e1e4u;
    ctx->f[12] = FPU_SUB_S(ctx->f[13], ctx->f[14]);
label_22e1e8:
    // 0x22e1e8: 0xc7ad0110  lwc1        $f13, 0x110($sp)
    ctx->pc = 0x22e1e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_22e1ec:
    // 0x22e1ec: 0xc7ae0114  lwc1        $f14, 0x114($sp)
    ctx->pc = 0x22e1ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_22e1f0:
    // 0x22e1f0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22e1f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22e1f4:
    // 0x22e1f4: 0x0  nop
    ctx->pc = 0x22e1f4u;
    // NOP
label_22e1f8:
    // 0x22e1f8: 0x460e0018  adda.s      $f0, $f14
    ctx->pc = 0x22e1f8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[14]));
label_22e1fc:
    // 0x22e1fc: 0x460c6b1c  madd.s      $f12, $f13, $f12
    ctx->pc = 0x22e1fcu;
    ctx->f[12] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[13], ctx->f[12]));
label_22e200:
    // 0x22e200: 0xe7ac0108  swc1        $f12, 0x108($sp)
    ctx->pc = 0x22e200u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
label_22e204:
    // 0x22e204: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x22e204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_22e208:
    // 0x22e208: 0xc44e0000  lwc1        $f14, 0x0($v0)
    ctx->pc = 0x22e208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_22e20c:
    // 0x22e20c: 0xc7ac0118  lwc1        $f12, 0x118($sp)
    ctx->pc = 0x22e20cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_22e210:
    // 0x22e210: 0x460c7341  sub.s       $f13, $f14, $f12
    ctx->pc = 0x22e210u;
    ctx->f[13] = FPU_SUB_S(ctx->f[14], ctx->f[12]);
label_22e214:
    // 0x22e214: 0xe7ad0104  swc1        $f13, 0x104($sp)
    ctx->pc = 0x22e214u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
label_22e218:
    // 0x22e218: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x22e218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_22e21c:
    // 0x22e21c: 0xc44e0004  lwc1        $f14, 0x4($v0)
    ctx->pc = 0x22e21cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_22e220:
    // 0x22e220: 0xc7ac0114  lwc1        $f12, 0x114($sp)
    ctx->pc = 0x22e220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_22e224:
    // 0x22e224: 0x460c7341  sub.s       $f13, $f14, $f12
    ctx->pc = 0x22e224u;
    ctx->f[13] = FPU_SUB_S(ctx->f[14], ctx->f[12]);
label_22e228:
    // 0x22e228: 0xe7ad0100  swc1        $f13, 0x100($sp)
    ctx->pc = 0x22e228u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_22e22c:
    // 0x22e22c: 0xc7ae0104  lwc1        $f14, 0x104($sp)
    ctx->pc = 0x22e22cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_22e230:
    // 0x22e230: 0x44807800  mtc1        $zero, $f15
    ctx->pc = 0x22e230u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_22e234:
    // 0x22e234: 0x0  nop
    ctx->pc = 0x22e234u;
    // NOP
label_22e238:
    // 0x22e238: 0x460f7034  c.lt.s      $f14, $f15
    ctx->pc = 0x22e238u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[14], ctx->f[15])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22e23c:
    // 0x22e23c: 0x45010012  bc1t        . + 4 + (0x12 << 2)
label_22e240:
    if (ctx->pc == 0x22E240u) {
        ctx->pc = 0x22E244u;
        goto label_22e244;
    }
    ctx->pc = 0x22E23Cu;
    {
        const bool branch_taken_0x22e23c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22e23c) {
            ctx->pc = 0x22E288u;
            goto label_22e288;
        }
    }
    ctx->pc = 0x22E244u;
label_22e244:
    // 0x22e244: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x22e244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_22e248:
    // 0x22e248: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x22e248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22e24c:
    // 0x22e24c: 0xc7a0010c  lwc1        $f0, 0x10C($sp)
    ctx->pc = 0x22e24cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22e250:
    // 0x22e250: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x22e250u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22e254:
    // 0x22e254: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_22e258:
    if (ctx->pc == 0x22E258u) {
        ctx->pc = 0x22E25Cu;
        goto label_22e25c;
    }
    ctx->pc = 0x22E254u;
    {
        const bool branch_taken_0x22e254 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22e254) {
            ctx->pc = 0x22E26Cu;
            goto label_22e26c;
        }
    }
    ctx->pc = 0x22E25Cu;
label_22e25c:
    // 0x22e25c: 0xc7a1010c  lwc1        $f1, 0x10C($sp)
    ctx->pc = 0x22e25cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22e260:
    // 0x22e260: 0xe7a100a4  swc1        $f1, 0xA4($sp)
    ctx->pc = 0x22e260u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_22e264:
    // 0x22e264: 0x10000004  b           . + 4 + (0x4 << 2)
label_22e268:
    if (ctx->pc == 0x22E268u) {
        ctx->pc = 0x22E26Cu;
        goto label_22e26c;
    }
    ctx->pc = 0x22E264u;
    {
        const bool branch_taken_0x22e264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e264) {
            ctx->pc = 0x22E278u;
            goto label_22e278;
        }
    }
    ctx->pc = 0x22E26Cu;
label_22e26c:
    // 0x22e26c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x22e26cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_22e270:
    // 0x22e270: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x22e270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22e274:
    // 0x22e274: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x22e274u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_22e278:
    // 0x22e278: 0xc7ac00a4  lwc1        $f12, 0xA4($sp)
    ctx->pc = 0x22e278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_22e27c:
    // 0x22e27c: 0xe7ac00fc  swc1        $f12, 0xFC($sp)
    ctx->pc = 0x22e27cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
label_22e280:
    // 0x22e280: 0x10000010  b           . + 4 + (0x10 << 2)
label_22e284:
    if (ctx->pc == 0x22E284u) {
        ctx->pc = 0x22E288u;
        goto label_22e288;
    }
    ctx->pc = 0x22E280u;
    {
        const bool branch_taken_0x22e280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e280) {
            ctx->pc = 0x22E2C4u;
            goto label_22e2c4;
        }
    }
    ctx->pc = 0x22E288u;
label_22e288:
    // 0x22e288: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x22e288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_22e28c:
    // 0x22e28c: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x22e28cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22e290:
    // 0x22e290: 0xc7a0010c  lwc1        $f0, 0x10C($sp)
    ctx->pc = 0x22e290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22e294:
    // 0x22e294: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x22e294u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22e298:
    // 0x22e298: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_22e29c:
    if (ctx->pc == 0x22E29Cu) {
        ctx->pc = 0x22E2A0u;
        goto label_22e2a0;
    }
    ctx->pc = 0x22E298u;
    {
        const bool branch_taken_0x22e298 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22e298) {
            ctx->pc = 0x22E2B0u;
            goto label_22e2b0;
        }
    }
    ctx->pc = 0x22E2A0u;
label_22e2a0:
    // 0x22e2a0: 0xc7ad010c  lwc1        $f13, 0x10C($sp)
    ctx->pc = 0x22e2a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_22e2a4:
    // 0x22e2a4: 0xe7ad00a0  swc1        $f13, 0xA0($sp)
    ctx->pc = 0x22e2a4u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_22e2a8:
    // 0x22e2a8: 0x10000004  b           . + 4 + (0x4 << 2)
label_22e2ac:
    if (ctx->pc == 0x22E2ACu) {
        ctx->pc = 0x22E2B0u;
        goto label_22e2b0;
    }
    ctx->pc = 0x22E2A8u;
    {
        const bool branch_taken_0x22e2a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e2a8) {
            ctx->pc = 0x22E2BCu;
            goto label_22e2bc;
        }
    }
    ctx->pc = 0x22E2B0u;
label_22e2b0:
    // 0x22e2b0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x22e2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_22e2b4:
    // 0x22e2b4: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x22e2b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22e2b8:
    // 0x22e2b8: 0xe7a100a0  swc1        $f1, 0xA0($sp)
    ctx->pc = 0x22e2b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_22e2bc:
    // 0x22e2bc: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x22e2bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22e2c0:
    // 0x22e2c0: 0xe7a000fc  swc1        $f0, 0xFC($sp)
    ctx->pc = 0x22e2c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
label_22e2c4:
    // 0x22e2c4: 0xc7a10100  lwc1        $f1, 0x100($sp)
    ctx->pc = 0x22e2c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22e2c8:
    // 0x22e2c8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22e2c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22e2cc:
    // 0x22e2cc: 0x0  nop
    ctx->pc = 0x22e2ccu;
    // NOP
label_22e2d0:
    // 0x22e2d0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x22e2d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22e2d4:
    // 0x22e2d4: 0x45010012  bc1t        . + 4 + (0x12 << 2)
label_22e2d8:
    if (ctx->pc == 0x22E2D8u) {
        ctx->pc = 0x22E2DCu;
        goto label_22e2dc;
    }
    ctx->pc = 0x22E2D4u;
    {
        const bool branch_taken_0x22e2d4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22e2d4) {
            ctx->pc = 0x22E320u;
            goto label_22e320;
        }
    }
    ctx->pc = 0x22E2DCu;
label_22e2dc:
    // 0x22e2dc: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x22e2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_22e2e0:
    // 0x22e2e0: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x22e2e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22e2e4:
    // 0x22e2e4: 0xc7a00108  lwc1        $f0, 0x108($sp)
    ctx->pc = 0x22e2e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22e2e8:
    // 0x22e2e8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x22e2e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22e2ec:
    // 0x22e2ec: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_22e2f0:
    if (ctx->pc == 0x22E2F0u) {
        ctx->pc = 0x22E2F4u;
        goto label_22e2f4;
    }
    ctx->pc = 0x22E2ECu;
    {
        const bool branch_taken_0x22e2ec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22e2ec) {
            ctx->pc = 0x22E304u;
            goto label_22e304;
        }
    }
    ctx->pc = 0x22E2F4u;
label_22e2f4:
    // 0x22e2f4: 0xc7a10108  lwc1        $f1, 0x108($sp)
    ctx->pc = 0x22e2f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22e2f8:
    // 0x22e2f8: 0xe7a1009c  swc1        $f1, 0x9C($sp)
    ctx->pc = 0x22e2f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
label_22e2fc:
    // 0x22e2fc: 0x10000004  b           . + 4 + (0x4 << 2)
label_22e300:
    if (ctx->pc == 0x22E300u) {
        ctx->pc = 0x22E304u;
        goto label_22e304;
    }
    ctx->pc = 0x22E2FCu;
    {
        const bool branch_taken_0x22e2fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e2fc) {
            ctx->pc = 0x22E310u;
            goto label_22e310;
        }
    }
    ctx->pc = 0x22E304u;
label_22e304:
    // 0x22e304: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x22e304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_22e308:
    // 0x22e308: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x22e308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22e30c:
    // 0x22e30c: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x22e30cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
label_22e310:
    // 0x22e310: 0xc7a0009c  lwc1        $f0, 0x9C($sp)
    ctx->pc = 0x22e310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22e314:
    // 0x22e314: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x22e314u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
label_22e318:
    // 0x22e318: 0x10000010  b           . + 4 + (0x10 << 2)
label_22e31c:
    if (ctx->pc == 0x22E31Cu) {
        ctx->pc = 0x22E320u;
        goto label_22e320;
    }
    ctx->pc = 0x22E318u;
    {
        const bool branch_taken_0x22e318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e318) {
            ctx->pc = 0x22E35Cu;
            goto label_22e35c;
        }
    }
    ctx->pc = 0x22E320u;
label_22e320:
    // 0x22e320: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x22e320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_22e324:
    // 0x22e324: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x22e324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22e328:
    // 0x22e328: 0xc7a00108  lwc1        $f0, 0x108($sp)
    ctx->pc = 0x22e328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22e32c:
    // 0x22e32c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x22e32cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22e330:
    // 0x22e330: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_22e334:
    if (ctx->pc == 0x22E334u) {
        ctx->pc = 0x22E338u;
        goto label_22e338;
    }
    ctx->pc = 0x22E330u;
    {
        const bool branch_taken_0x22e330 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22e330) {
            ctx->pc = 0x22E348u;
            goto label_22e348;
        }
    }
    ctx->pc = 0x22E338u;
label_22e338:
    // 0x22e338: 0xc7a10108  lwc1        $f1, 0x108($sp)
    ctx->pc = 0x22e338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22e33c:
    // 0x22e33c: 0xe7a10098  swc1        $f1, 0x98($sp)
    ctx->pc = 0x22e33cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_22e340:
    // 0x22e340: 0x10000004  b           . + 4 + (0x4 << 2)
label_22e344:
    if (ctx->pc == 0x22E344u) {
        ctx->pc = 0x22E348u;
        goto label_22e348;
    }
    ctx->pc = 0x22E340u;
    {
        const bool branch_taken_0x22e340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e340) {
            ctx->pc = 0x22E354u;
            goto label_22e354;
        }
    }
    ctx->pc = 0x22E348u;
label_22e348:
    // 0x22e348: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x22e348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_22e34c:
    // 0x22e34c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x22e34cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22e350:
    // 0x22e350: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x22e350u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_22e354:
    // 0x22e354: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x22e354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22e358:
    // 0x22e358: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x22e358u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
label_22e35c:
    // 0x22e35c: 0x8fa40190  lw          $a0, 0x190($sp)
    ctx->pc = 0x22e35cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
label_22e360:
    // 0x22e360: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x22e360u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_22e364:
    // 0x22e364: 0xc7ac00fc  lwc1        $f12, 0xFC($sp)
    ctx->pc = 0x22e364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_22e368:
    // 0x22e368: 0xc7ad00f8  lwc1        $f13, 0xF8($sp)
    ctx->pc = 0x22e368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_22e36c:
    // 0x22e36c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22e36cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22e370:
    // 0x22e370: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x22e370u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22e374:
    // 0x22e374: 0xc08c544  jal         func_231510
label_22e378:
    if (ctx->pc == 0x22E378u) {
        ctx->pc = 0x22E37Cu;
        goto label_22e37c;
    }
    ctx->pc = 0x22E374u;
    SET_GPR_U32(ctx, 31, 0x22E37Cu);
    ctx->pc = 0x231510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231510u, 0x22E374u, 0x22E37Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E37Cu;
label_22e37c:
    // 0x22e37c: 0x10000032  b           . + 4 + (0x32 << 2)
label_22e380:
    if (ctx->pc == 0x22E380u) {
        ctx->pc = 0x22E384u;
        goto label_22e384;
    }
    ctx->pc = 0x22E37Cu;
    {
        const bool branch_taken_0x22e37c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e37c) {
            ctx->pc = 0x22E448u;
            goto label_22e448;
        }
    }
    ctx->pc = 0x22E384u;
label_22e384:
    // 0x22e384: 0x12400030  beqz        $s2, . + 4 + (0x30 << 2)
label_22e388:
    if (ctx->pc == 0x22E388u) {
        ctx->pc = 0x22E38Cu;
        goto label_22e38c;
    }
    ctx->pc = 0x22E384u;
    {
        const bool branch_taken_0x22e384 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e384) {
            ctx->pc = 0x22E448u;
            goto label_22e448;
        }
    }
    ctx->pc = 0x22E38Cu;
label_22e38c:
    // 0x22e38c: 0x8fa40190  lw          $a0, 0x190($sp)
    ctx->pc = 0x22e38cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
label_22e390:
    // 0x22e390: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x22e390u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_22e394:
    // 0x22e394: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x22e394u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_22e398:
    // 0x22e398: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x22e398u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22e39c:
    // 0x22e39c: 0xc08c378  jal         func_230DE0
label_22e3a0:
    if (ctx->pc == 0x22E3A0u) {
        ctx->pc = 0x22E3A4u;
        goto label_22e3a4;
    }
    ctx->pc = 0x22E39Cu;
    SET_GPR_U32(ctx, 31, 0x22E3A4u);
    ctx->pc = 0x230DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230DE0u, 0x22E39Cu, 0x22E3A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E3A4u;
label_22e3a4:
    // 0x22e3a4: 0x10000028  b           . + 4 + (0x28 << 2)
label_22e3a8:
    if (ctx->pc == 0x22E3A8u) {
        ctx->pc = 0x22E3ACu;
        goto label_22e3ac;
    }
    ctx->pc = 0x22E3A4u;
    {
        const bool branch_taken_0x22e3a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e3a4) {
            ctx->pc = 0x22E448u;
            goto label_22e448;
        }
    }
    ctx->pc = 0x22E3ACu;
label_22e3ac:
    // 0x22e3ac: 0x8fa40190  lw          $a0, 0x190($sp)
    ctx->pc = 0x22e3acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
label_22e3b0:
    // 0x22e3b0: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x22e3b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_22e3b4:
    // 0x22e3b4: 0xc08c794  jal         func_231E50
label_22e3b8:
    if (ctx->pc == 0x22E3B8u) {
        ctx->pc = 0x22E3BCu;
        goto label_22e3bc;
    }
    ctx->pc = 0x22E3B4u;
    SET_GPR_U32(ctx, 31, 0x22E3BCu);
    ctx->pc = 0x231E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231E50u, 0x22E3B4u, 0x22E3BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E3BCu;
label_22e3bc:
    // 0x22e3bc: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x22e3bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
label_22e3c0:
    // 0x22e3c0: 0x1240000d  beqz        $s2, . + 4 + (0xD << 2)
label_22e3c4:
    if (ctx->pc == 0x22E3C4u) {
        ctx->pc = 0x22E3C8u;
        goto label_22e3c8;
    }
    ctx->pc = 0x22E3C0u;
    {
        const bool branch_taken_0x22e3c0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e3c0) {
            ctx->pc = 0x22E3F8u;
            goto label_22e3f8;
        }
    }
    ctx->pc = 0x22E3C8u;
label_22e3c8:
    // 0x22e3c8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x22e3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_22e3cc:
    // 0x22e3cc: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x22e3ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22e3d0:
    // 0x22e3d0: 0xc7a000f4  lwc1        $f0, 0xF4($sp)
    ctx->pc = 0x22e3d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22e3d4:
    // 0x22e3d4: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x22e3d4u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_22e3d8:
    // 0x22e3d8: 0x8fa40190  lw          $a0, 0x190($sp)
    ctx->pc = 0x22e3d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
label_22e3dc:
    // 0x22e3dc: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x22e3dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_22e3e0:
    // 0x22e3e0: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x22e3e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_22e3e4:
    // 0x22e3e4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x22e3e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22e3e8:
    // 0x22e3e8: 0xc08c64c  jal         func_231930
label_22e3ec:
    if (ctx->pc == 0x22E3ECu) {
        ctx->pc = 0x22E3F0u;
        goto label_22e3f0;
    }
    ctx->pc = 0x22E3E8u;
    SET_GPR_U32(ctx, 31, 0x22E3F0u);
    ctx->pc = 0x231930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231930u, 0x22E3E8u, 0x22E3F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E3F0u;
label_22e3f0:
    // 0x22e3f0: 0x10000015  b           . + 4 + (0x15 << 2)
label_22e3f4:
    if (ctx->pc == 0x22E3F4u) {
        ctx->pc = 0x22E3F8u;
        goto label_22e3f8;
    }
    ctx->pc = 0x22E3F0u;
    {
        const bool branch_taken_0x22e3f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e3f0) {
            ctx->pc = 0x22E448u;
            goto label_22e448;
        }
    }
    ctx->pc = 0x22E3F8u;
label_22e3f8:
    // 0x22e3f8: 0xc7a1018c  lwc1        $f1, 0x18C($sp)
    ctx->pc = 0x22e3f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22e3fc:
    // 0x22e3fc: 0xc7a00184  lwc1        $f0, 0x184($sp)
    ctx->pc = 0x22e3fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22e400:
    // 0x22e400: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x22e400u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_22e404:
    // 0x22e404: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x22e404u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_22e408:
    // 0x22e408: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x22e408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_22e40c:
    // 0x22e40c: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x22e40cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22e410:
    // 0x22e410: 0xc7a000f4  lwc1        $f0, 0xF4($sp)
    ctx->pc = 0x22e410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22e414:
    // 0x22e414: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x22e414u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_22e418:
    // 0x22e418: 0xc7a000f0  lwc1        $f0, 0xF0($sp)
    ctx->pc = 0x22e418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22e41c:
    // 0x22e41c: 0x46010302  mul.s       $f12, $f0, $f1
    ctx->pc = 0x22e41cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_22e420:
    // 0x22e420: 0x8fa40190  lw          $a0, 0x190($sp)
    ctx->pc = 0x22e420u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
label_22e424:
    // 0x22e424: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x22e424u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_22e428:
    // 0x22e428: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x22e428u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_22e42c:
    // 0x22e42c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x22e42cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22e430:
    // 0x22e430: 0xc08c64c  jal         func_231930
label_22e434:
    if (ctx->pc == 0x22E434u) {
        ctx->pc = 0x22E438u;
        goto label_22e438;
    }
    ctx->pc = 0x22E430u;
    SET_GPR_U32(ctx, 31, 0x22E438u);
    ctx->pc = 0x231930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231930u, 0x22E430u, 0x22E438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E438u;
label_22e438:
    // 0x22e438: 0x10000003  b           . + 4 + (0x3 << 2)
label_22e43c:
    if (ctx->pc == 0x22E43Cu) {
        ctx->pc = 0x22E440u;
        goto label_22e440;
    }
    ctx->pc = 0x22E438u;
    {
        const bool branch_taken_0x22e438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e438) {
            ctx->pc = 0x22E448u;
            goto label_22e448;
        }
    }
    ctx->pc = 0x22E440u;
label_22e440:
    // 0x22e440: 0x10000038  b           . + 4 + (0x38 << 2)
label_22e444:
    if (ctx->pc == 0x22E444u) {
        ctx->pc = 0x22E448u;
        goto label_22e448;
    }
    ctx->pc = 0x22E440u;
    {
        const bool branch_taken_0x22e440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e440) {
            ctx->pc = 0x22E524u;
            goto label_22e524;
        }
    }
    ctx->pc = 0x22E448u;
label_22e448:
    // 0x22e448: 0x324300ff  andi        $v1, $s2, 0xFF
    ctx->pc = 0x22e448u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
label_22e44c:
    // 0x22e44c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22e44cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22e450:
    // 0x22e450: 0x1462002d  bne         $v1, $v0, . + 4 + (0x2D << 2)
label_22e454:
    if (ctx->pc == 0x22E454u) {
        ctx->pc = 0x22E458u;
        goto label_22e458;
    }
    ctx->pc = 0x22E450u;
    {
        const bool branch_taken_0x22e450 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x22e450) {
            ctx->pc = 0x22E508u;
            goto label_22e508;
        }
    }
    ctx->pc = 0x22E458u;
label_22e458:
    // 0x22e458: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x22e458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_22e45c:
    // 0x22e45c: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
label_22e460:
    if (ctx->pc == 0x22E460u) {
        ctx->pc = 0x22E464u;
        goto label_22e464;
    }
    ctx->pc = 0x22E45Cu;
    {
        const bool branch_taken_0x22e45c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22e45c) {
            ctx->pc = 0x22E508u;
            goto label_22e508;
        }
    }
    ctx->pc = 0x22E464u;
label_22e464:
    // 0x22e464: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x22e464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_22e468:
    // 0x22e468: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x22e468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_22e46c:
    // 0x22e46c: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
label_22e470:
    if (ctx->pc == 0x22E470u) {
        ctx->pc = 0x22E474u;
        goto label_22e474;
    }
    ctx->pc = 0x22E46Cu;
    {
        const bool branch_taken_0x22e46c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x22e46c) {
            ctx->pc = 0x22E498u;
            goto label_22e498;
        }
    }
    ctx->pc = 0x22E474u;
label_22e474:
    // 0x22e474: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x22e474u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_22e478:
    // 0x22e478: 0xc0406b8  jal         func_101AE0
label_22e47c:
    if (ctx->pc == 0x22E47Cu) {
        ctx->pc = 0x22E480u;
        goto label_22e480;
    }
    ctx->pc = 0x22E478u;
    SET_GPR_U32(ctx, 31, 0x22E480u);
    ctx->pc = 0x101AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101AE0u, 0x22E478u, 0x22E480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E480u;
label_22e480:
    // 0x22e480: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x22e480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_22e484:
    // 0x22e484: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_22e488:
    if (ctx->pc == 0x22E488u) {
        ctx->pc = 0x22E48Cu;
        goto label_22e48c;
    }
    ctx->pc = 0x22E484u;
    {
        const bool branch_taken_0x22e484 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e484) {
            ctx->pc = 0x22E498u;
            goto label_22e498;
        }
    }
    ctx->pc = 0x22E48Cu;
label_22e48c:
    // 0x22e48c: 0x8e040028  lw          $a0, 0x28($s0)
    ctx->pc = 0x22e48cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_22e490:
    // 0x22e490: 0xc0406b8  jal         func_101AE0
label_22e494:
    if (ctx->pc == 0x22E494u) {
        ctx->pc = 0x22E498u;
        goto label_22e498;
    }
    ctx->pc = 0x22E490u;
    SET_GPR_U32(ctx, 31, 0x22E498u);
    ctx->pc = 0x101AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101AE0u, 0x22E490u, 0x22E498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E498u;
label_22e498:
    // 0x22e498: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x22e498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_22e49c:
    // 0x22e49c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_22e4a0:
    if (ctx->pc == 0x22E4A0u) {
        ctx->pc = 0x22E4A4u;
        goto label_22e4a4;
    }
    ctx->pc = 0x22E49Cu;
    {
        const bool branch_taken_0x22e49c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e49c) {
            ctx->pc = 0x22E4C0u;
            goto label_22e4c0;
        }
    }
    ctx->pc = 0x22E4A4u;
label_22e4a4:
    // 0x22e4a4: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x22e4a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_22e4a8:
    // 0x22e4a8: 0xc08b9ec  jal         func_22E7B0
label_22e4ac:
    if (ctx->pc == 0x22E4ACu) {
        ctx->pc = 0x22E4B0u;
        goto label_22e4b0;
    }
    ctx->pc = 0x22E4A8u;
    SET_GPR_U32(ctx, 31, 0x22E4B0u);
    ctx->pc = 0x22E7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7B0u, 0x22E4A8u, 0x22E4B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E4B0u;
label_22e4b0:
    // 0x22e4b0: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x22e4b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_22e4b4:
    // 0x22e4b4: 0xc119c5c  jal         func_467170
label_22e4b8:
    if (ctx->pc == 0x22E4B8u) {
        ctx->pc = 0x22E4BCu;
        goto label_22e4bc;
    }
    ctx->pc = 0x22E4B4u;
    SET_GPR_U32(ctx, 31, 0x22E4BCu);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x22E4B4u, 0x22E4BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E4BCu;
label_22e4bc:
    // 0x22e4bc: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x22e4bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_22e4c0:
    // 0x22e4c0: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x22e4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_22e4c4:
    // 0x22e4c4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_22e4c8:
    if (ctx->pc == 0x22E4C8u) {
        ctx->pc = 0x22E4CCu;
        goto label_22e4cc;
    }
    ctx->pc = 0x22E4C4u;
    {
        const bool branch_taken_0x22e4c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e4c4) {
            ctx->pc = 0x22E4E8u;
            goto label_22e4e8;
        }
    }
    ctx->pc = 0x22E4CCu;
label_22e4cc:
    // 0x22e4cc: 0x8e040028  lw          $a0, 0x28($s0)
    ctx->pc = 0x22e4ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_22e4d0:
    // 0x22e4d0: 0xc08b9ec  jal         func_22E7B0
label_22e4d4:
    if (ctx->pc == 0x22E4D4u) {
        ctx->pc = 0x22E4D8u;
        goto label_22e4d8;
    }
    ctx->pc = 0x22E4D0u;
    SET_GPR_U32(ctx, 31, 0x22E4D8u);
    ctx->pc = 0x22E7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7B0u, 0x22E4D0u, 0x22E4D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E4D8u;
label_22e4d8:
    // 0x22e4d8: 0x8e040028  lw          $a0, 0x28($s0)
    ctx->pc = 0x22e4d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_22e4dc:
    // 0x22e4dc: 0xc119c5c  jal         func_467170
label_22e4e0:
    if (ctx->pc == 0x22E4E0u) {
        ctx->pc = 0x22E4E4u;
        goto label_22e4e4;
    }
    ctx->pc = 0x22E4DCu;
    SET_GPR_U32(ctx, 31, 0x22E4E4u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x22E4DCu, 0x22E4E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E4E4u;
label_22e4e4:
    // 0x22e4e4: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x22e4e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
label_22e4e8:
    // 0x22e4e8: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x22e4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
label_22e4ec:
    // 0x22e4ec: 0x24440040  addiu       $a0, $v0, 0x40
    ctx->pc = 0x22e4ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_22e4f0:
    // 0x22e4f0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x22e4f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_22e4f4:
    // 0x22e4f4: 0xc08b95c  jal         func_22E570
label_22e4f8:
    if (ctx->pc == 0x22E4F8u) {
        ctx->pc = 0x22E4FCu;
        goto label_22e4fc;
    }
    ctx->pc = 0x22E4F4u;
    SET_GPR_U32(ctx, 31, 0x22E4FCu);
    ctx->pc = 0x22E570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E570u, 0x22E4F4u, 0x22E4FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E4FCu;
label_22e4fc:
    // 0x22e4fc: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x22e4fcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22e500:
    // 0x22e500: 0x10000002  b           . + 4 + (0x2 << 2)
label_22e504:
    if (ctx->pc == 0x22E504u) {
        ctx->pc = 0x22E508u;
        goto label_22e508;
    }
    ctx->pc = 0x22E500u;
    {
        const bool branch_taken_0x22e500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e500) {
            ctx->pc = 0x22E50Cu;
            goto label_22e50c;
        }
    }
    ctx->pc = 0x22E508u;
label_22e508:
    // 0x22e508: 0x26b50030  addiu       $s5, $s5, 0x30
    ctx->pc = 0x22e508u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 48));
label_22e50c:
    // 0x22e50c: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x22e50cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
label_22e510:
    // 0x22e510: 0x24440040  addiu       $a0, $v0, 0x40
    ctx->pc = 0x22e510u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_22e514:
    // 0x22e514: 0xc08b954  jal         func_22E550
label_22e518:
    if (ctx->pc == 0x22E518u) {
        ctx->pc = 0x22E51Cu;
        goto label_22e51c;
    }
    ctx->pc = 0x22E514u;
    SET_GPR_U32(ctx, 31, 0x22E51Cu);
    ctx->pc = 0x22E550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E550u, 0x22E514u, 0x22E51Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E51Cu;
label_22e51c:
    // 0x22e51c: 0x16a2fc06  bne         $s5, $v0, . + 4 + (-0x3FA << 2)
label_22e520:
    if (ctx->pc == 0x22E520u) {
        ctx->pc = 0x22E524u;
        goto label_22e524;
    }
    ctx->pc = 0x22E51Cu;
    {
        const bool branch_taken_0x22e51c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        if (branch_taken_0x22e51c) {
            ctx->pc = 0x22D538u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22d538;
        }
    }
    ctx->pc = 0x22E524u;
label_22e524:
    // 0x22e524: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x22e524u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_22e528:
    // 0x22e528: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x22e528u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_22e52c:
    // 0x22e52c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x22e52cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_22e530:
    // 0x22e530: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x22e530u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_22e534:
    // 0x22e534: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x22e534u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_22e538:
    // 0x22e538: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22e538u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_22e53c:
    // 0x22e53c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22e53cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_22e540:
    // 0x22e540: 0x27bd01a0  addiu       $sp, $sp, 0x1A0
    ctx->pc = 0x22e540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_22e544:
    // 0x22e544: 0x3e00008  jr          $ra
label_22e548:
    if (ctx->pc == 0x22E548u) {
        ctx->pc = 0x22E54Cu;
        goto label_22e54c;
    }
    ctx->pc = 0x22E544u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22E544u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22E54Cu;
label_22e54c:
    // 0x22e54c: 0x0  nop
    ctx->pc = 0x22e54cu;
    // NOP
    ctx->pc = 0x22e550u;
}
