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

// Function: sub_0039D478
// Address: 0x39d478 - 0x39e070
void sub_0039D478_0x39d478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039D478_0x39d478");
#endif

    switch (ctx->pc) {
        case 0x39d478u: goto label_39d478;
        case 0x39d47cu: goto label_39d47c;
        case 0x39d480u: goto label_39d480;
        case 0x39d484u: goto label_39d484;
        case 0x39d488u: goto label_39d488;
        case 0x39d48cu: goto label_39d48c;
        case 0x39d490u: goto label_39d490;
        case 0x39d494u: goto label_39d494;
        case 0x39d498u: goto label_39d498;
        case 0x39d49cu: goto label_39d49c;
        case 0x39d4a0u: goto label_39d4a0;
        case 0x39d4a4u: goto label_39d4a4;
        case 0x39d4a8u: goto label_39d4a8;
        case 0x39d4acu: goto label_39d4ac;
        case 0x39d4b0u: goto label_39d4b0;
        case 0x39d4b4u: goto label_39d4b4;
        case 0x39d4b8u: goto label_39d4b8;
        case 0x39d4bcu: goto label_39d4bc;
        case 0x39d4c0u: goto label_39d4c0;
        case 0x39d4c4u: goto label_39d4c4;
        case 0x39d4c8u: goto label_39d4c8;
        case 0x39d4ccu: goto label_39d4cc;
        case 0x39d4d0u: goto label_39d4d0;
        case 0x39d4d4u: goto label_39d4d4;
        case 0x39d4d8u: goto label_39d4d8;
        case 0x39d4dcu: goto label_39d4dc;
        case 0x39d4e0u: goto label_39d4e0;
        case 0x39d4e4u: goto label_39d4e4;
        case 0x39d4e8u: goto label_39d4e8;
        case 0x39d4ecu: goto label_39d4ec;
        case 0x39d4f0u: goto label_39d4f0;
        case 0x39d4f4u: goto label_39d4f4;
        case 0x39d4f8u: goto label_39d4f8;
        case 0x39d4fcu: goto label_39d4fc;
        case 0x39d500u: goto label_39d500;
        case 0x39d504u: goto label_39d504;
        case 0x39d508u: goto label_39d508;
        case 0x39d50cu: goto label_39d50c;
        case 0x39d510u: goto label_39d510;
        case 0x39d514u: goto label_39d514;
        case 0x39d518u: goto label_39d518;
        case 0x39d51cu: goto label_39d51c;
        case 0x39d520u: goto label_39d520;
        case 0x39d524u: goto label_39d524;
        case 0x39d528u: goto label_39d528;
        case 0x39d52cu: goto label_39d52c;
        case 0x39d530u: goto label_39d530;
        case 0x39d534u: goto label_39d534;
        case 0x39d538u: goto label_39d538;
        case 0x39d53cu: goto label_39d53c;
        case 0x39d540u: goto label_39d540;
        case 0x39d544u: goto label_39d544;
        case 0x39d548u: goto label_39d548;
        case 0x39d54cu: goto label_39d54c;
        case 0x39d550u: goto label_39d550;
        case 0x39d554u: goto label_39d554;
        case 0x39d558u: goto label_39d558;
        case 0x39d55cu: goto label_39d55c;
        case 0x39d560u: goto label_39d560;
        case 0x39d564u: goto label_39d564;
        case 0x39d568u: goto label_39d568;
        case 0x39d56cu: goto label_39d56c;
        case 0x39d570u: goto label_39d570;
        case 0x39d574u: goto label_39d574;
        case 0x39d578u: goto label_39d578;
        case 0x39d57cu: goto label_39d57c;
        case 0x39d580u: goto label_39d580;
        case 0x39d584u: goto label_39d584;
        case 0x39d588u: goto label_39d588;
        case 0x39d58cu: goto label_39d58c;
        case 0x39d590u: goto label_39d590;
        case 0x39d594u: goto label_39d594;
        case 0x39d598u: goto label_39d598;
        case 0x39d59cu: goto label_39d59c;
        case 0x39d5a0u: goto label_39d5a0;
        case 0x39d5a4u: goto label_39d5a4;
        case 0x39d5a8u: goto label_39d5a8;
        case 0x39d5acu: goto label_39d5ac;
        case 0x39d5b0u: goto label_39d5b0;
        case 0x39d5b4u: goto label_39d5b4;
        case 0x39d5b8u: goto label_39d5b8;
        case 0x39d5bcu: goto label_39d5bc;
        case 0x39d5c0u: goto label_39d5c0;
        case 0x39d5c4u: goto label_39d5c4;
        case 0x39d5c8u: goto label_39d5c8;
        case 0x39d5ccu: goto label_39d5cc;
        case 0x39d5d0u: goto label_39d5d0;
        case 0x39d5d4u: goto label_39d5d4;
        case 0x39d5d8u: goto label_39d5d8;
        case 0x39d5dcu: goto label_39d5dc;
        case 0x39d5e0u: goto label_39d5e0;
        case 0x39d5e4u: goto label_39d5e4;
        case 0x39d5e8u: goto label_39d5e8;
        case 0x39d5ecu: goto label_39d5ec;
        case 0x39d5f0u: goto label_39d5f0;
        case 0x39d5f4u: goto label_39d5f4;
        case 0x39d5f8u: goto label_39d5f8;
        case 0x39d5fcu: goto label_39d5fc;
        case 0x39d600u: goto label_39d600;
        case 0x39d604u: goto label_39d604;
        case 0x39d608u: goto label_39d608;
        case 0x39d60cu: goto label_39d60c;
        case 0x39d610u: goto label_39d610;
        case 0x39d614u: goto label_39d614;
        case 0x39d618u: goto label_39d618;
        case 0x39d61cu: goto label_39d61c;
        case 0x39d620u: goto label_39d620;
        case 0x39d624u: goto label_39d624;
        case 0x39d628u: goto label_39d628;
        case 0x39d62cu: goto label_39d62c;
        case 0x39d630u: goto label_39d630;
        case 0x39d634u: goto label_39d634;
        case 0x39d638u: goto label_39d638;
        case 0x39d63cu: goto label_39d63c;
        case 0x39d640u: goto label_39d640;
        case 0x39d644u: goto label_39d644;
        case 0x39d648u: goto label_39d648;
        case 0x39d64cu: goto label_39d64c;
        case 0x39d650u: goto label_39d650;
        case 0x39d654u: goto label_39d654;
        case 0x39d658u: goto label_39d658;
        case 0x39d65cu: goto label_39d65c;
        case 0x39d660u: goto label_39d660;
        case 0x39d664u: goto label_39d664;
        case 0x39d668u: goto label_39d668;
        case 0x39d66cu: goto label_39d66c;
        case 0x39d670u: goto label_39d670;
        case 0x39d674u: goto label_39d674;
        case 0x39d678u: goto label_39d678;
        case 0x39d67cu: goto label_39d67c;
        case 0x39d680u: goto label_39d680;
        case 0x39d684u: goto label_39d684;
        case 0x39d688u: goto label_39d688;
        case 0x39d68cu: goto label_39d68c;
        case 0x39d690u: goto label_39d690;
        case 0x39d694u: goto label_39d694;
        case 0x39d698u: goto label_39d698;
        case 0x39d69cu: goto label_39d69c;
        case 0x39d6a0u: goto label_39d6a0;
        case 0x39d6a4u: goto label_39d6a4;
        case 0x39d6a8u: goto label_39d6a8;
        case 0x39d6acu: goto label_39d6ac;
        case 0x39d6b0u: goto label_39d6b0;
        case 0x39d6b4u: goto label_39d6b4;
        case 0x39d6b8u: goto label_39d6b8;
        case 0x39d6bcu: goto label_39d6bc;
        case 0x39d6c0u: goto label_39d6c0;
        case 0x39d6c4u: goto label_39d6c4;
        case 0x39d6c8u: goto label_39d6c8;
        case 0x39d6ccu: goto label_39d6cc;
        case 0x39d6d0u: goto label_39d6d0;
        case 0x39d6d4u: goto label_39d6d4;
        case 0x39d6d8u: goto label_39d6d8;
        case 0x39d6dcu: goto label_39d6dc;
        case 0x39d6e0u: goto label_39d6e0;
        case 0x39d6e4u: goto label_39d6e4;
        case 0x39d6e8u: goto label_39d6e8;
        case 0x39d6ecu: goto label_39d6ec;
        case 0x39d6f0u: goto label_39d6f0;
        case 0x39d6f4u: goto label_39d6f4;
        case 0x39d6f8u: goto label_39d6f8;
        case 0x39d6fcu: goto label_39d6fc;
        case 0x39d700u: goto label_39d700;
        case 0x39d704u: goto label_39d704;
        case 0x39d708u: goto label_39d708;
        case 0x39d70cu: goto label_39d70c;
        case 0x39d710u: goto label_39d710;
        case 0x39d714u: goto label_39d714;
        case 0x39d718u: goto label_39d718;
        case 0x39d71cu: goto label_39d71c;
        case 0x39d720u: goto label_39d720;
        case 0x39d724u: goto label_39d724;
        case 0x39d728u: goto label_39d728;
        case 0x39d72cu: goto label_39d72c;
        case 0x39d730u: goto label_39d730;
        case 0x39d734u: goto label_39d734;
        case 0x39d738u: goto label_39d738;
        case 0x39d73cu: goto label_39d73c;
        case 0x39d740u: goto label_39d740;
        case 0x39d744u: goto label_39d744;
        case 0x39d748u: goto label_39d748;
        case 0x39d74cu: goto label_39d74c;
        case 0x39d750u: goto label_39d750;
        case 0x39d754u: goto label_39d754;
        case 0x39d758u: goto label_39d758;
        case 0x39d75cu: goto label_39d75c;
        case 0x39d760u: goto label_39d760;
        case 0x39d764u: goto label_39d764;
        case 0x39d768u: goto label_39d768;
        case 0x39d76cu: goto label_39d76c;
        case 0x39d770u: goto label_39d770;
        case 0x39d774u: goto label_39d774;
        case 0x39d778u: goto label_39d778;
        case 0x39d77cu: goto label_39d77c;
        case 0x39d780u: goto label_39d780;
        case 0x39d784u: goto label_39d784;
        case 0x39d788u: goto label_39d788;
        case 0x39d78cu: goto label_39d78c;
        case 0x39d790u: goto label_39d790;
        case 0x39d794u: goto label_39d794;
        case 0x39d798u: goto label_39d798;
        case 0x39d79cu: goto label_39d79c;
        case 0x39d7a0u: goto label_39d7a0;
        case 0x39d7a4u: goto label_39d7a4;
        case 0x39d7a8u: goto label_39d7a8;
        case 0x39d7acu: goto label_39d7ac;
        case 0x39d7b0u: goto label_39d7b0;
        case 0x39d7b4u: goto label_39d7b4;
        case 0x39d7b8u: goto label_39d7b8;
        case 0x39d7bcu: goto label_39d7bc;
        case 0x39d7c0u: goto label_39d7c0;
        case 0x39d7c4u: goto label_39d7c4;
        case 0x39d7c8u: goto label_39d7c8;
        case 0x39d7ccu: goto label_39d7cc;
        case 0x39d7d0u: goto label_39d7d0;
        case 0x39d7d4u: goto label_39d7d4;
        case 0x39d7d8u: goto label_39d7d8;
        case 0x39d7dcu: goto label_39d7dc;
        case 0x39d7e0u: goto label_39d7e0;
        case 0x39d7e4u: goto label_39d7e4;
        case 0x39d7e8u: goto label_39d7e8;
        case 0x39d7ecu: goto label_39d7ec;
        case 0x39d7f0u: goto label_39d7f0;
        case 0x39d7f4u: goto label_39d7f4;
        case 0x39d7f8u: goto label_39d7f8;
        case 0x39d7fcu: goto label_39d7fc;
        case 0x39d800u: goto label_39d800;
        case 0x39d804u: goto label_39d804;
        case 0x39d808u: goto label_39d808;
        case 0x39d80cu: goto label_39d80c;
        case 0x39d810u: goto label_39d810;
        case 0x39d814u: goto label_39d814;
        case 0x39d818u: goto label_39d818;
        case 0x39d81cu: goto label_39d81c;
        case 0x39d820u: goto label_39d820;
        case 0x39d824u: goto label_39d824;
        case 0x39d828u: goto label_39d828;
        case 0x39d82cu: goto label_39d82c;
        case 0x39d830u: goto label_39d830;
        case 0x39d834u: goto label_39d834;
        case 0x39d838u: goto label_39d838;
        case 0x39d83cu: goto label_39d83c;
        case 0x39d840u: goto label_39d840;
        case 0x39d844u: goto label_39d844;
        case 0x39d848u: goto label_39d848;
        case 0x39d84cu: goto label_39d84c;
        case 0x39d850u: goto label_39d850;
        case 0x39d854u: goto label_39d854;
        case 0x39d858u: goto label_39d858;
        case 0x39d85cu: goto label_39d85c;
        case 0x39d860u: goto label_39d860;
        case 0x39d864u: goto label_39d864;
        case 0x39d868u: goto label_39d868;
        case 0x39d86cu: goto label_39d86c;
        case 0x39d870u: goto label_39d870;
        case 0x39d874u: goto label_39d874;
        case 0x39d878u: goto label_39d878;
        case 0x39d87cu: goto label_39d87c;
        case 0x39d880u: goto label_39d880;
        case 0x39d884u: goto label_39d884;
        case 0x39d888u: goto label_39d888;
        case 0x39d88cu: goto label_39d88c;
        case 0x39d890u: goto label_39d890;
        case 0x39d894u: goto label_39d894;
        case 0x39d898u: goto label_39d898;
        case 0x39d89cu: goto label_39d89c;
        case 0x39d8a0u: goto label_39d8a0;
        case 0x39d8a4u: goto label_39d8a4;
        case 0x39d8a8u: goto label_39d8a8;
        case 0x39d8acu: goto label_39d8ac;
        case 0x39d8b0u: goto label_39d8b0;
        case 0x39d8b4u: goto label_39d8b4;
        case 0x39d8b8u: goto label_39d8b8;
        case 0x39d8bcu: goto label_39d8bc;
        case 0x39d8c0u: goto label_39d8c0;
        case 0x39d8c4u: goto label_39d8c4;
        case 0x39d8c8u: goto label_39d8c8;
        case 0x39d8ccu: goto label_39d8cc;
        case 0x39d8d0u: goto label_39d8d0;
        case 0x39d8d4u: goto label_39d8d4;
        case 0x39d8d8u: goto label_39d8d8;
        case 0x39d8dcu: goto label_39d8dc;
        case 0x39d8e0u: goto label_39d8e0;
        case 0x39d8e4u: goto label_39d8e4;
        case 0x39d8e8u: goto label_39d8e8;
        case 0x39d8ecu: goto label_39d8ec;
        case 0x39d8f0u: goto label_39d8f0;
        case 0x39d8f4u: goto label_39d8f4;
        case 0x39d8f8u: goto label_39d8f8;
        case 0x39d8fcu: goto label_39d8fc;
        case 0x39d900u: goto label_39d900;
        case 0x39d904u: goto label_39d904;
        case 0x39d908u: goto label_39d908;
        case 0x39d90cu: goto label_39d90c;
        case 0x39d910u: goto label_39d910;
        case 0x39d914u: goto label_39d914;
        case 0x39d918u: goto label_39d918;
        case 0x39d91cu: goto label_39d91c;
        case 0x39d920u: goto label_39d920;
        case 0x39d924u: goto label_39d924;
        case 0x39d928u: goto label_39d928;
        case 0x39d92cu: goto label_39d92c;
        case 0x39d930u: goto label_39d930;
        case 0x39d934u: goto label_39d934;
        case 0x39d938u: goto label_39d938;
        case 0x39d93cu: goto label_39d93c;
        case 0x39d940u: goto label_39d940;
        case 0x39d944u: goto label_39d944;
        case 0x39d948u: goto label_39d948;
        case 0x39d94cu: goto label_39d94c;
        case 0x39d950u: goto label_39d950;
        case 0x39d954u: goto label_39d954;
        case 0x39d958u: goto label_39d958;
        case 0x39d95cu: goto label_39d95c;
        case 0x39d960u: goto label_39d960;
        case 0x39d964u: goto label_39d964;
        case 0x39d968u: goto label_39d968;
        case 0x39d96cu: goto label_39d96c;
        case 0x39d970u: goto label_39d970;
        case 0x39d974u: goto label_39d974;
        case 0x39d978u: goto label_39d978;
        case 0x39d97cu: goto label_39d97c;
        case 0x39d980u: goto label_39d980;
        case 0x39d984u: goto label_39d984;
        case 0x39d988u: goto label_39d988;
        case 0x39d98cu: goto label_39d98c;
        case 0x39d990u: goto label_39d990;
        case 0x39d994u: goto label_39d994;
        case 0x39d998u: goto label_39d998;
        case 0x39d99cu: goto label_39d99c;
        case 0x39d9a0u: goto label_39d9a0;
        case 0x39d9a4u: goto label_39d9a4;
        case 0x39d9a8u: goto label_39d9a8;
        case 0x39d9acu: goto label_39d9ac;
        case 0x39d9b0u: goto label_39d9b0;
        case 0x39d9b4u: goto label_39d9b4;
        case 0x39d9b8u: goto label_39d9b8;
        case 0x39d9bcu: goto label_39d9bc;
        case 0x39d9c0u: goto label_39d9c0;
        case 0x39d9c4u: goto label_39d9c4;
        case 0x39d9c8u: goto label_39d9c8;
        case 0x39d9ccu: goto label_39d9cc;
        case 0x39d9d0u: goto label_39d9d0;
        case 0x39d9d4u: goto label_39d9d4;
        case 0x39d9d8u: goto label_39d9d8;
        case 0x39d9dcu: goto label_39d9dc;
        case 0x39d9e0u: goto label_39d9e0;
        case 0x39d9e4u: goto label_39d9e4;
        case 0x39d9e8u: goto label_39d9e8;
        case 0x39d9ecu: goto label_39d9ec;
        case 0x39d9f0u: goto label_39d9f0;
        case 0x39d9f4u: goto label_39d9f4;
        case 0x39d9f8u: goto label_39d9f8;
        case 0x39d9fcu: goto label_39d9fc;
        case 0x39da00u: goto label_39da00;
        case 0x39da04u: goto label_39da04;
        case 0x39da08u: goto label_39da08;
        case 0x39da0cu: goto label_39da0c;
        case 0x39da10u: goto label_39da10;
        case 0x39da14u: goto label_39da14;
        case 0x39da18u: goto label_39da18;
        case 0x39da1cu: goto label_39da1c;
        case 0x39da20u: goto label_39da20;
        case 0x39da24u: goto label_39da24;
        case 0x39da28u: goto label_39da28;
        case 0x39da2cu: goto label_39da2c;
        case 0x39da30u: goto label_39da30;
        case 0x39da34u: goto label_39da34;
        case 0x39da38u: goto label_39da38;
        case 0x39da3cu: goto label_39da3c;
        case 0x39da40u: goto label_39da40;
        case 0x39da44u: goto label_39da44;
        case 0x39da48u: goto label_39da48;
        case 0x39da4cu: goto label_39da4c;
        case 0x39da50u: goto label_39da50;
        case 0x39da54u: goto label_39da54;
        case 0x39da58u: goto label_39da58;
        case 0x39da5cu: goto label_39da5c;
        case 0x39da60u: goto label_39da60;
        case 0x39da64u: goto label_39da64;
        case 0x39da68u: goto label_39da68;
        case 0x39da6cu: goto label_39da6c;
        case 0x39da70u: goto label_39da70;
        case 0x39da74u: goto label_39da74;
        case 0x39da78u: goto label_39da78;
        case 0x39da7cu: goto label_39da7c;
        case 0x39da80u: goto label_39da80;
        case 0x39da84u: goto label_39da84;
        case 0x39da88u: goto label_39da88;
        case 0x39da8cu: goto label_39da8c;
        case 0x39da90u: goto label_39da90;
        case 0x39da94u: goto label_39da94;
        case 0x39da98u: goto label_39da98;
        case 0x39da9cu: goto label_39da9c;
        case 0x39daa0u: goto label_39daa0;
        case 0x39daa4u: goto label_39daa4;
        case 0x39daa8u: goto label_39daa8;
        case 0x39daacu: goto label_39daac;
        case 0x39dab0u: goto label_39dab0;
        case 0x39dab4u: goto label_39dab4;
        case 0x39dab8u: goto label_39dab8;
        case 0x39dabcu: goto label_39dabc;
        case 0x39dac0u: goto label_39dac0;
        case 0x39dac4u: goto label_39dac4;
        case 0x39dac8u: goto label_39dac8;
        case 0x39daccu: goto label_39dacc;
        case 0x39dad0u: goto label_39dad0;
        case 0x39dad4u: goto label_39dad4;
        case 0x39dad8u: goto label_39dad8;
        case 0x39dadcu: goto label_39dadc;
        case 0x39dae0u: goto label_39dae0;
        case 0x39dae4u: goto label_39dae4;
        case 0x39dae8u: goto label_39dae8;
        case 0x39daecu: goto label_39daec;
        case 0x39daf0u: goto label_39daf0;
        case 0x39daf4u: goto label_39daf4;
        case 0x39daf8u: goto label_39daf8;
        case 0x39dafcu: goto label_39dafc;
        case 0x39db00u: goto label_39db00;
        case 0x39db04u: goto label_39db04;
        case 0x39db08u: goto label_39db08;
        case 0x39db0cu: goto label_39db0c;
        case 0x39db10u: goto label_39db10;
        case 0x39db14u: goto label_39db14;
        case 0x39db18u: goto label_39db18;
        case 0x39db1cu: goto label_39db1c;
        case 0x39db20u: goto label_39db20;
        case 0x39db24u: goto label_39db24;
        case 0x39db28u: goto label_39db28;
        case 0x39db2cu: goto label_39db2c;
        case 0x39db30u: goto label_39db30;
        case 0x39db34u: goto label_39db34;
        case 0x39db38u: goto label_39db38;
        case 0x39db3cu: goto label_39db3c;
        case 0x39db40u: goto label_39db40;
        case 0x39db44u: goto label_39db44;
        case 0x39db48u: goto label_39db48;
        case 0x39db4cu: goto label_39db4c;
        case 0x39db50u: goto label_39db50;
        case 0x39db54u: goto label_39db54;
        case 0x39db58u: goto label_39db58;
        case 0x39db5cu: goto label_39db5c;
        case 0x39db60u: goto label_39db60;
        case 0x39db64u: goto label_39db64;
        case 0x39db68u: goto label_39db68;
        case 0x39db6cu: goto label_39db6c;
        case 0x39db70u: goto label_39db70;
        case 0x39db74u: goto label_39db74;
        case 0x39db78u: goto label_39db78;
        case 0x39db7cu: goto label_39db7c;
        case 0x39db80u: goto label_39db80;
        case 0x39db84u: goto label_39db84;
        case 0x39db88u: goto label_39db88;
        case 0x39db8cu: goto label_39db8c;
        case 0x39db90u: goto label_39db90;
        case 0x39db94u: goto label_39db94;
        case 0x39db98u: goto label_39db98;
        case 0x39db9cu: goto label_39db9c;
        case 0x39dba0u: goto label_39dba0;
        case 0x39dba4u: goto label_39dba4;
        case 0x39dba8u: goto label_39dba8;
        case 0x39dbacu: goto label_39dbac;
        case 0x39dbb0u: goto label_39dbb0;
        case 0x39dbb4u: goto label_39dbb4;
        case 0x39dbb8u: goto label_39dbb8;
        case 0x39dbbcu: goto label_39dbbc;
        case 0x39dbc0u: goto label_39dbc0;
        case 0x39dbc4u: goto label_39dbc4;
        case 0x39dbc8u: goto label_39dbc8;
        case 0x39dbccu: goto label_39dbcc;
        case 0x39dbd0u: goto label_39dbd0;
        case 0x39dbd4u: goto label_39dbd4;
        case 0x39dbd8u: goto label_39dbd8;
        case 0x39dbdcu: goto label_39dbdc;
        case 0x39dbe0u: goto label_39dbe0;
        case 0x39dbe4u: goto label_39dbe4;
        case 0x39dbe8u: goto label_39dbe8;
        case 0x39dbecu: goto label_39dbec;
        case 0x39dbf0u: goto label_39dbf0;
        case 0x39dbf4u: goto label_39dbf4;
        case 0x39dbf8u: goto label_39dbf8;
        case 0x39dbfcu: goto label_39dbfc;
        case 0x39dc00u: goto label_39dc00;
        case 0x39dc04u: goto label_39dc04;
        case 0x39dc08u: goto label_39dc08;
        case 0x39dc0cu: goto label_39dc0c;
        case 0x39dc10u: goto label_39dc10;
        case 0x39dc14u: goto label_39dc14;
        case 0x39dc18u: goto label_39dc18;
        case 0x39dc1cu: goto label_39dc1c;
        case 0x39dc20u: goto label_39dc20;
        case 0x39dc24u: goto label_39dc24;
        case 0x39dc28u: goto label_39dc28;
        case 0x39dc2cu: goto label_39dc2c;
        case 0x39dc30u: goto label_39dc30;
        case 0x39dc34u: goto label_39dc34;
        case 0x39dc38u: goto label_39dc38;
        case 0x39dc3cu: goto label_39dc3c;
        case 0x39dc40u: goto label_39dc40;
        case 0x39dc44u: goto label_39dc44;
        case 0x39dc48u: goto label_39dc48;
        case 0x39dc4cu: goto label_39dc4c;
        case 0x39dc50u: goto label_39dc50;
        case 0x39dc54u: goto label_39dc54;
        case 0x39dc58u: goto label_39dc58;
        case 0x39dc5cu: goto label_39dc5c;
        case 0x39dc60u: goto label_39dc60;
        case 0x39dc64u: goto label_39dc64;
        case 0x39dc68u: goto label_39dc68;
        case 0x39dc6cu: goto label_39dc6c;
        case 0x39dc70u: goto label_39dc70;
        case 0x39dc74u: goto label_39dc74;
        case 0x39dc78u: goto label_39dc78;
        case 0x39dc7cu: goto label_39dc7c;
        case 0x39dc80u: goto label_39dc80;
        case 0x39dc84u: goto label_39dc84;
        case 0x39dc88u: goto label_39dc88;
        case 0x39dc8cu: goto label_39dc8c;
        case 0x39dc90u: goto label_39dc90;
        case 0x39dc94u: goto label_39dc94;
        case 0x39dc98u: goto label_39dc98;
        case 0x39dc9cu: goto label_39dc9c;
        case 0x39dca0u: goto label_39dca0;
        case 0x39dca4u: goto label_39dca4;
        case 0x39dca8u: goto label_39dca8;
        case 0x39dcacu: goto label_39dcac;
        case 0x39dcb0u: goto label_39dcb0;
        case 0x39dcb4u: goto label_39dcb4;
        case 0x39dcb8u: goto label_39dcb8;
        case 0x39dcbcu: goto label_39dcbc;
        case 0x39dcc0u: goto label_39dcc0;
        case 0x39dcc4u: goto label_39dcc4;
        case 0x39dcc8u: goto label_39dcc8;
        case 0x39dcccu: goto label_39dccc;
        case 0x39dcd0u: goto label_39dcd0;
        case 0x39dcd4u: goto label_39dcd4;
        case 0x39dcd8u: goto label_39dcd8;
        case 0x39dcdcu: goto label_39dcdc;
        case 0x39dce0u: goto label_39dce0;
        case 0x39dce4u: goto label_39dce4;
        case 0x39dce8u: goto label_39dce8;
        case 0x39dcecu: goto label_39dcec;
        case 0x39dcf0u: goto label_39dcf0;
        case 0x39dcf4u: goto label_39dcf4;
        case 0x39dcf8u: goto label_39dcf8;
        case 0x39dcfcu: goto label_39dcfc;
        case 0x39dd00u: goto label_39dd00;
        case 0x39dd04u: goto label_39dd04;
        case 0x39dd08u: goto label_39dd08;
        case 0x39dd0cu: goto label_39dd0c;
        case 0x39dd10u: goto label_39dd10;
        case 0x39dd14u: goto label_39dd14;
        case 0x39dd18u: goto label_39dd18;
        case 0x39dd1cu: goto label_39dd1c;
        case 0x39dd20u: goto label_39dd20;
        case 0x39dd24u: goto label_39dd24;
        case 0x39dd28u: goto label_39dd28;
        case 0x39dd2cu: goto label_39dd2c;
        case 0x39dd30u: goto label_39dd30;
        case 0x39dd34u: goto label_39dd34;
        case 0x39dd38u: goto label_39dd38;
        case 0x39dd3cu: goto label_39dd3c;
        case 0x39dd40u: goto label_39dd40;
        case 0x39dd44u: goto label_39dd44;
        case 0x39dd48u: goto label_39dd48;
        case 0x39dd4cu: goto label_39dd4c;
        case 0x39dd50u: goto label_39dd50;
        case 0x39dd54u: goto label_39dd54;
        case 0x39dd58u: goto label_39dd58;
        case 0x39dd5cu: goto label_39dd5c;
        case 0x39dd60u: goto label_39dd60;
        case 0x39dd64u: goto label_39dd64;
        case 0x39dd68u: goto label_39dd68;
        case 0x39dd6cu: goto label_39dd6c;
        case 0x39dd70u: goto label_39dd70;
        case 0x39dd74u: goto label_39dd74;
        case 0x39dd78u: goto label_39dd78;
        case 0x39dd7cu: goto label_39dd7c;
        case 0x39dd80u: goto label_39dd80;
        case 0x39dd84u: goto label_39dd84;
        case 0x39dd88u: goto label_39dd88;
        case 0x39dd8cu: goto label_39dd8c;
        case 0x39dd90u: goto label_39dd90;
        case 0x39dd94u: goto label_39dd94;
        case 0x39dd98u: goto label_39dd98;
        case 0x39dd9cu: goto label_39dd9c;
        case 0x39dda0u: goto label_39dda0;
        case 0x39dda4u: goto label_39dda4;
        case 0x39dda8u: goto label_39dda8;
        case 0x39ddacu: goto label_39ddac;
        case 0x39ddb0u: goto label_39ddb0;
        case 0x39ddb4u: goto label_39ddb4;
        case 0x39ddb8u: goto label_39ddb8;
        case 0x39ddbcu: goto label_39ddbc;
        case 0x39ddc0u: goto label_39ddc0;
        case 0x39ddc4u: goto label_39ddc4;
        case 0x39ddc8u: goto label_39ddc8;
        case 0x39ddccu: goto label_39ddcc;
        case 0x39ddd0u: goto label_39ddd0;
        case 0x39ddd4u: goto label_39ddd4;
        case 0x39ddd8u: goto label_39ddd8;
        case 0x39dddcu: goto label_39dddc;
        case 0x39dde0u: goto label_39dde0;
        case 0x39dde4u: goto label_39dde4;
        case 0x39dde8u: goto label_39dde8;
        case 0x39ddecu: goto label_39ddec;
        case 0x39ddf0u: goto label_39ddf0;
        case 0x39ddf4u: goto label_39ddf4;
        case 0x39ddf8u: goto label_39ddf8;
        case 0x39ddfcu: goto label_39ddfc;
        case 0x39de00u: goto label_39de00;
        case 0x39de04u: goto label_39de04;
        case 0x39de08u: goto label_39de08;
        case 0x39de0cu: goto label_39de0c;
        case 0x39de10u: goto label_39de10;
        case 0x39de14u: goto label_39de14;
        case 0x39de18u: goto label_39de18;
        case 0x39de1cu: goto label_39de1c;
        case 0x39de20u: goto label_39de20;
        case 0x39de24u: goto label_39de24;
        case 0x39de28u: goto label_39de28;
        case 0x39de2cu: goto label_39de2c;
        case 0x39de30u: goto label_39de30;
        case 0x39de34u: goto label_39de34;
        case 0x39de38u: goto label_39de38;
        case 0x39de3cu: goto label_39de3c;
        case 0x39de40u: goto label_39de40;
        case 0x39de44u: goto label_39de44;
        case 0x39de48u: goto label_39de48;
        case 0x39de4cu: goto label_39de4c;
        case 0x39de50u: goto label_39de50;
        case 0x39de54u: goto label_39de54;
        case 0x39de58u: goto label_39de58;
        case 0x39de5cu: goto label_39de5c;
        case 0x39de60u: goto label_39de60;
        case 0x39de64u: goto label_39de64;
        case 0x39de68u: goto label_39de68;
        case 0x39de6cu: goto label_39de6c;
        case 0x39de70u: goto label_39de70;
        case 0x39de74u: goto label_39de74;
        case 0x39de78u: goto label_39de78;
        case 0x39de7cu: goto label_39de7c;
        case 0x39de80u: goto label_39de80;
        case 0x39de84u: goto label_39de84;
        case 0x39de88u: goto label_39de88;
        case 0x39de8cu: goto label_39de8c;
        case 0x39de90u: goto label_39de90;
        case 0x39de94u: goto label_39de94;
        case 0x39de98u: goto label_39de98;
        case 0x39de9cu: goto label_39de9c;
        case 0x39dea0u: goto label_39dea0;
        case 0x39dea4u: goto label_39dea4;
        case 0x39dea8u: goto label_39dea8;
        case 0x39deacu: goto label_39deac;
        case 0x39deb0u: goto label_39deb0;
        case 0x39deb4u: goto label_39deb4;
        case 0x39deb8u: goto label_39deb8;
        case 0x39debcu: goto label_39debc;
        case 0x39dec0u: goto label_39dec0;
        case 0x39dec4u: goto label_39dec4;
        case 0x39dec8u: goto label_39dec8;
        case 0x39deccu: goto label_39decc;
        case 0x39ded0u: goto label_39ded0;
        case 0x39ded4u: goto label_39ded4;
        case 0x39ded8u: goto label_39ded8;
        case 0x39dedcu: goto label_39dedc;
        case 0x39dee0u: goto label_39dee0;
        case 0x39dee4u: goto label_39dee4;
        case 0x39dee8u: goto label_39dee8;
        case 0x39deecu: goto label_39deec;
        case 0x39def0u: goto label_39def0;
        case 0x39def4u: goto label_39def4;
        case 0x39def8u: goto label_39def8;
        case 0x39defcu: goto label_39defc;
        case 0x39df00u: goto label_39df00;
        case 0x39df04u: goto label_39df04;
        case 0x39df08u: goto label_39df08;
        case 0x39df0cu: goto label_39df0c;
        case 0x39df10u: goto label_39df10;
        case 0x39df14u: goto label_39df14;
        case 0x39df18u: goto label_39df18;
        case 0x39df1cu: goto label_39df1c;
        case 0x39df20u: goto label_39df20;
        case 0x39df24u: goto label_39df24;
        case 0x39df28u: goto label_39df28;
        case 0x39df2cu: goto label_39df2c;
        case 0x39df30u: goto label_39df30;
        case 0x39df34u: goto label_39df34;
        case 0x39df38u: goto label_39df38;
        case 0x39df3cu: goto label_39df3c;
        case 0x39df40u: goto label_39df40;
        case 0x39df44u: goto label_39df44;
        case 0x39df48u: goto label_39df48;
        case 0x39df4cu: goto label_39df4c;
        case 0x39df50u: goto label_39df50;
        case 0x39df54u: goto label_39df54;
        case 0x39df58u: goto label_39df58;
        case 0x39df5cu: goto label_39df5c;
        case 0x39df60u: goto label_39df60;
        case 0x39df64u: goto label_39df64;
        case 0x39df68u: goto label_39df68;
        case 0x39df6cu: goto label_39df6c;
        case 0x39df70u: goto label_39df70;
        case 0x39df74u: goto label_39df74;
        case 0x39df78u: goto label_39df78;
        case 0x39df7cu: goto label_39df7c;
        case 0x39df80u: goto label_39df80;
        case 0x39df84u: goto label_39df84;
        case 0x39df88u: goto label_39df88;
        case 0x39df8cu: goto label_39df8c;
        case 0x39df90u: goto label_39df90;
        case 0x39df94u: goto label_39df94;
        case 0x39df98u: goto label_39df98;
        case 0x39df9cu: goto label_39df9c;
        case 0x39dfa0u: goto label_39dfa0;
        case 0x39dfa4u: goto label_39dfa4;
        case 0x39dfa8u: goto label_39dfa8;
        case 0x39dfacu: goto label_39dfac;
        case 0x39dfb0u: goto label_39dfb0;
        case 0x39dfb4u: goto label_39dfb4;
        case 0x39dfb8u: goto label_39dfb8;
        case 0x39dfbcu: goto label_39dfbc;
        case 0x39dfc0u: goto label_39dfc0;
        case 0x39dfc4u: goto label_39dfc4;
        case 0x39dfc8u: goto label_39dfc8;
        case 0x39dfccu: goto label_39dfcc;
        case 0x39dfd0u: goto label_39dfd0;
        case 0x39dfd4u: goto label_39dfd4;
        case 0x39dfd8u: goto label_39dfd8;
        case 0x39dfdcu: goto label_39dfdc;
        case 0x39dfe0u: goto label_39dfe0;
        case 0x39dfe4u: goto label_39dfe4;
        case 0x39dfe8u: goto label_39dfe8;
        case 0x39dfecu: goto label_39dfec;
        case 0x39dff0u: goto label_39dff0;
        case 0x39dff4u: goto label_39dff4;
        case 0x39dff8u: goto label_39dff8;
        case 0x39dffcu: goto label_39dffc;
        case 0x39e000u: goto label_39e000;
        case 0x39e004u: goto label_39e004;
        case 0x39e008u: goto label_39e008;
        case 0x39e00cu: goto label_39e00c;
        case 0x39e010u: goto label_39e010;
        case 0x39e014u: goto label_39e014;
        case 0x39e018u: goto label_39e018;
        case 0x39e01cu: goto label_39e01c;
        case 0x39e020u: goto label_39e020;
        case 0x39e024u: goto label_39e024;
        case 0x39e028u: goto label_39e028;
        case 0x39e02cu: goto label_39e02c;
        case 0x39e030u: goto label_39e030;
        case 0x39e034u: goto label_39e034;
        case 0x39e038u: goto label_39e038;
        case 0x39e03cu: goto label_39e03c;
        case 0x39e040u: goto label_39e040;
        case 0x39e044u: goto label_39e044;
        case 0x39e048u: goto label_39e048;
        case 0x39e04cu: goto label_39e04c;
        case 0x39e050u: goto label_39e050;
        case 0x39e054u: goto label_39e054;
        case 0x39e058u: goto label_39e058;
        case 0x39e05cu: goto label_39e05c;
        case 0x39e060u: goto label_39e060;
        case 0x39e064u: goto label_39e064;
        case 0x39e068u: goto label_39e068;
        case 0x39e06cu: goto label_39e06c;
        default: break;
    }

    ctx->pc = 0x39d478u;

label_39d478:
    // 0x39d478: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x39d478u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_39d47c:
    // 0x39d47c: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x39d47cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
label_39d480:
    // 0x39d480: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x39d480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
label_39d484:
    // 0x39d484: 0x3c100062  lui         $s0, 0x62
    ctx->pc = 0x39d484u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)98 << 16));
label_39d488:
    // 0x39d488: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x39d488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
label_39d48c:
    // 0x39d48c: 0x2610e880  addiu       $s0, $s0, -0x1780
    ctx->pc = 0x39d48cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961280));
label_39d490:
    // 0x39d490: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x39d490u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
label_39d494:
    // 0x39d494: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x39d494u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_39d498:
    // 0x39d498: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x39d498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
label_39d49c:
    // 0x39d49c: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x39d49cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
label_39d4a0:
    // 0x39d4a0: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x39d4a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
label_39d4a4:
    // 0x39d4a4: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x39d4a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_39d4a8:
    // 0x39d4a8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x39d4a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_39d4ac:
    // 0x39d4ac: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x39d4acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_39d4b0:
    // 0x39d4b0: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x39d4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_39d4b4:
    // 0x39d4b4: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x39d4b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
label_39d4b8:
    // 0x39d4b8: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x39d4b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_39d4bc:
    // 0x39d4bc: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x39d4bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_39d4c0:
    // 0x39d4c0: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x39d4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
label_39d4c4:
    // 0x39d4c4: 0x34a5050d  ori         $a1, $a1, 0x50D
    ctx->pc = 0x39d4c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1293);
label_39d4c8:
    // 0x39d4c8: 0x8e640018  lw          $a0, 0x18($s3)
    ctx->pc = 0x39d4c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_39d4cc:
    // 0x39d4cc: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x39d4ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
label_39d4d0:
    // 0x39d4d0: 0x40f809  jalr        $v0
label_39d4d4:
    if (ctx->pc == 0x39D4D4u) {
        ctx->pc = 0x39D4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D4D0u;
        // 0x39d4d4: 0x42080  sll         $a0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D4D8u;
        goto label_39d4d8;
    }
    ctx->pc = 0x39D4D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39D4D8u);
        ctx->pc = 0x39D4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D4D0u;
        // 0x39d4d4: 0x42080  sll         $a0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39D4D0u, 0x39D4D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39D4D8u;
label_39d4d8:
    // 0x39d4d8: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x39d4d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
label_39d4dc:
    // 0x39d4dc: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x39d4dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_39d4e0:
    // 0x39d4e0: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x39d4e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_39d4e4:
    // 0x39d4e4: 0x34a5050d  ori         $a1, $a1, 0x50D
    ctx->pc = 0x39d4e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1293);
label_39d4e8:
    // 0x39d4e8: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x39d4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
label_39d4ec:
    // 0x39d4ec: 0x8e640018  lw          $a0, 0x18($s3)
    ctx->pc = 0x39d4ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_39d4f0:
    // 0x39d4f0: 0x40f809  jalr        $v0
label_39d4f4:
    if (ctx->pc == 0x39D4F4u) {
        ctx->pc = 0x39D4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D4F0u;
        // 0x39d4f4: 0x42080  sll         $a0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D4F8u;
        goto label_39d4f8;
    }
    ctx->pc = 0x39D4F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39D4F8u);
        ctx->pc = 0x39D4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D4F0u;
        // 0x39d4f4: 0x42080  sll         $a0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39D4F0u, 0x39D4F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39D4F8u;
label_39d4f8:
    // 0x39d4f8: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x39d4f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
label_39d4fc:
    // 0x39d4fc: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x39d4fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_39d500:
    // 0x39d500: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x39d500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
label_39d504:
    // 0x39d504: 0x34a5050d  ori         $a1, $a1, 0x50D
    ctx->pc = 0x39d504u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1293);
label_39d508:
    // 0x39d508: 0x8e640018  lw          $a0, 0x18($s3)
    ctx->pc = 0x39d508u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_39d50c:
    // 0x39d50c: 0x40f809  jalr        $v0
label_39d510:
    if (ctx->pc == 0x39D510u) {
        ctx->pc = 0x39D510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D50Cu;
        // 0x39d510: 0x42080  sll         $a0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D514u;
        goto label_39d514;
    }
    ctx->pc = 0x39D50Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39D514u);
        ctx->pc = 0x39D510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D50Cu;
        // 0x39d510: 0x42080  sll         $a0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39D50Cu, 0x39D514u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39D514u;
label_39d514:
    // 0x39d514: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x39d514u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39d518:
    // 0x39d518: 0x8e640018  lw          $a0, 0x18($s3)
    ctx->pc = 0x39d518u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_39d51c:
    // 0x39d51c: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x39d51cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
label_39d520:
    // 0x39d520: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x39d520u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_39d524:
    // 0x39d524: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x39d524u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_39d528:
    // 0x39d528: 0x40f809  jalr        $v0
label_39d52c:
    if (ctx->pc == 0x39D52Cu) {
        ctx->pc = 0x39D52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D528u;
        // 0x39d52c: 0x34a5050d  ori         $a1, $a1, 0x50D (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1293);
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D530u;
        goto label_39d530;
    }
    ctx->pc = 0x39D528u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39D530u);
        ctx->pc = 0x39D52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D528u;
        // 0x39d52c: 0x34a5050d  ori         $a1, $a1, 0x50D (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1293);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39D528u, 0x39D530u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39D530u;
label_39d530:
    // 0x39d530: 0x8e630010  lw          $v1, 0x10($s3)
    ctx->pc = 0x39d530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_39d534:
    // 0x39d534: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x39d534u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_39d538:
    // 0x39d538: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x39d538u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39d53c:
    // 0x39d53c: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x39d53cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_39d540:
    // 0x39d540: 0x640018  mult        $zero, $v1, $a0
    ctx->pc = 0x39d540u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_39d544:
    // 0x39d544: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x39d544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
label_39d548:
    // 0x39d548: 0x2012  mflo        $a0
    ctx->pc = 0x39d548u;
    SET_GPR_U64(ctx, 4, ctx->lo);
label_39d54c:
    // 0x39d54c: 0x40f809  jalr        $v0
label_39d550:
    if (ctx->pc == 0x39D550u) {
        ctx->pc = 0x39D550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D54Cu;
        // 0x39d550: 0x34a5050d  ori         $a1, $a1, 0x50D (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1293);
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D554u;
        goto label_39d554;
    }
    ctx->pc = 0x39D54Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39D554u);
        ctx->pc = 0x39D550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D54Cu;
        // 0x39d550: 0x34a5050d  ori         $a1, $a1, 0x50D (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1293);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39D54Cu, 0x39D554u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39D554u;
label_39d554:
    // 0x39d554: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x39d554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_39d558:
    // 0x39d558: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x39d558u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39d55c:
    // 0x39d55c: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x39d55cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
label_39d560:
    // 0x39d560: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_39d564:
    if (ctx->pc == 0x39D564u) {
        ctx->pc = 0x39D564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D560u;
        // 0x39d564: 0x8fa40020  lw          $a0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D568u;
        goto label_39d568;
    }
    ctx->pc = 0x39D560u;
    {
        const bool branch_taken_0x39d560 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39D564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D560u;
        // 0x39d564: 0x8fa40020  lw          $a0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d560) {
            ctx->pc = 0x39D578u;
            goto label_39d578;
        }
    }
    ctx->pc = 0x39D568u;
label_39d568:
    // 0x39d568: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
label_39d56c:
    if (ctx->pc == 0x39D56Cu) {
        ctx->pc = 0x39D56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D568u;
        // 0x39d56c: 0x8fa50024  lw          $a1, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D570u;
        goto label_39d570;
    }
    ctx->pc = 0x39D568u;
    {
        const bool branch_taken_0x39d568 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x39D56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D568u;
        // 0x39d56c: 0x8fa50024  lw          $a1, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d568) {
            ctx->pc = 0x39D590u;
            goto label_39d590;
        }
    }
    ctx->pc = 0x39D570u;
label_39d570:
    // 0x39d570: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
label_39d574:
    if (ctx->pc == 0x39D574u) {
        ctx->pc = 0x39D578u;
        goto label_39d578;
    }
    ctx->pc = 0x39D570u;
    {
        const bool branch_taken_0x39d570 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x39d570) {
            ctx->pc = 0x39D590u;
            goto label_39d590;
        }
    }
    ctx->pc = 0x39D578u;
label_39d578:
    // 0x39d578: 0x13c00005  beqz        $fp, . + 4 + (0x5 << 2)
label_39d57c:
    if (ctx->pc == 0x39D57Cu) {
        ctx->pc = 0x39D580u;
        goto label_39d580;
    }
    ctx->pc = 0x39D578u;
    {
        const bool branch_taken_0x39d578 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x39d578) {
            ctx->pc = 0x39D590u;
            goto label_39d590;
        }
    }
    ctx->pc = 0x39D580u;
label_39d580:
    // 0x39d580: 0x12e00003  beqz        $s7, . + 4 + (0x3 << 2)
label_39d584:
    if (ctx->pc == 0x39D584u) {
        ctx->pc = 0x39D588u;
        goto label_39d588;
    }
    ctx->pc = 0x39D580u;
    {
        const bool branch_taken_0x39d580 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x39d580) {
            ctx->pc = 0x39D590u;
            goto label_39d590;
        }
    }
    ctx->pc = 0x39D588u;
label_39d588:
    // 0x39d588: 0x56400023  bnel        $s2, $zero, . + 4 + (0x23 << 2)
label_39d58c:
    if (ctx->pc == 0x39D58Cu) {
        ctx->pc = 0x39D58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D588u;
        // 0x39d58c: 0x8e620010  lw          $v0, 0x10($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D590u;
        goto label_39d590;
    }
    ctx->pc = 0x39D588u;
    {
        const bool branch_taken_0x39d588 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x39d588) {
            ctx->pc = 0x39D58Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39D588u;
            // 0x39d58c: 0x8e620010  lw          $v0, 0x10($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39D618u;
            goto label_39d618;
        }
    }
    ctx->pc = 0x39D590u;
label_39d590:
    // 0x39d590: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
label_39d594:
    if (ctx->pc == 0x39D594u) {
        ctx->pc = 0x39D594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D590u;
        // 0x39d594: 0x3c060062  lui         $a2, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D598u;
        goto label_39d598;
    }
    ctx->pc = 0x39D590u;
    {
        const bool branch_taken_0x39d590 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x39D594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D590u;
        // 0x39d594: 0x3c060062  lui         $a2, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d590) {
            ctx->pc = 0x39D5A8u;
            goto label_39d5a8;
        }
    }
    ctx->pc = 0x39D598u;
label_39d598:
    // 0x39d598: 0x24c3e880  addiu       $v1, $a2, -0x1780
    ctx->pc = 0x39d598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961280));
label_39d59c:
    // 0x39d59c: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x39d59cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_39d5a0:
    // 0x39d5a0: 0x40f809  jalr        $v0
label_39d5a4:
    if (ctx->pc == 0x39D5A4u) {
        ctx->pc = 0x39D5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D5A0u;
        // 0x39d5a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D5A8u;
        goto label_39d5a8;
    }
    ctx->pc = 0x39D5A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39D5A8u);
        ctx->pc = 0x39D5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D5A0u;
        // 0x39d5a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39D5A0u, 0x39D5A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39D5A8u;
label_39d5a8:
    // 0x39d5a8: 0x12e00005  beqz        $s7, . + 4 + (0x5 << 2)
label_39d5ac:
    if (ctx->pc == 0x39D5ACu) {
        ctx->pc = 0x39D5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D5A8u;
        // 0x39d5ac: 0x3c070062  lui         $a3, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D5B0u;
        goto label_39d5b0;
    }
    ctx->pc = 0x39D5A8u;
    {
        const bool branch_taken_0x39d5a8 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x39D5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D5A8u;
        // 0x39d5ac: 0x3c070062  lui         $a3, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d5a8) {
            ctx->pc = 0x39D5C0u;
            goto label_39d5c0;
        }
    }
    ctx->pc = 0x39D5B0u;
label_39d5b0:
    // 0x39d5b0: 0x24e3e880  addiu       $v1, $a3, -0x1780
    ctx->pc = 0x39d5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294961280));
label_39d5b4:
    // 0x39d5b4: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x39d5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_39d5b8:
    // 0x39d5b8: 0x40f809  jalr        $v0
label_39d5bc:
    if (ctx->pc == 0x39D5BCu) {
        ctx->pc = 0x39D5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D5B8u;
        // 0x39d5bc: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D5C0u;
        goto label_39d5c0;
    }
    ctx->pc = 0x39D5B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39D5C0u);
        ctx->pc = 0x39D5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D5B8u;
        // 0x39d5bc: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39D5B8u, 0x39D5C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39D5C0u;
label_39d5c0:
    // 0x39d5c0: 0x13c00005  beqz        $fp, . + 4 + (0x5 << 2)
label_39d5c4:
    if (ctx->pc == 0x39D5C4u) {
        ctx->pc = 0x39D5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D5C0u;
        // 0x39d5c4: 0x3c080062  lui         $t0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D5C8u;
        goto label_39d5c8;
    }
    ctx->pc = 0x39D5C0u;
    {
        const bool branch_taken_0x39d5c0 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x39D5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D5C0u;
        // 0x39d5c4: 0x3c080062  lui         $t0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d5c0) {
            ctx->pc = 0x39D5D8u;
            goto label_39d5d8;
        }
    }
    ctx->pc = 0x39D5C8u;
label_39d5c8:
    // 0x39d5c8: 0x2503e880  addiu       $v1, $t0, -0x1780
    ctx->pc = 0x39d5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294961280));
label_39d5cc:
    // 0x39d5cc: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x39d5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_39d5d0:
    // 0x39d5d0: 0x40f809  jalr        $v0
label_39d5d4:
    if (ctx->pc == 0x39D5D4u) {
        ctx->pc = 0x39D5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D5D0u;
        // 0x39d5d4: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D5D8u;
        goto label_39d5d8;
    }
    ctx->pc = 0x39D5D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39D5D8u);
        ctx->pc = 0x39D5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D5D0u;
        // 0x39d5d4: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39D5D0u, 0x39D5D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39D5D8u;
label_39d5d8:
    // 0x39d5d8: 0x8fac0024  lw          $t4, 0x24($sp)
    ctx->pc = 0x39d5d8u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_39d5dc:
    // 0x39d5dc: 0x11800005  beqz        $t4, . + 4 + (0x5 << 2)
label_39d5e0:
    if (ctx->pc == 0x39D5E0u) {
        ctx->pc = 0x39D5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D5DCu;
        // 0x39d5e0: 0x3c0d0062  lui         $t5, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D5E4u;
        goto label_39d5e4;
    }
    ctx->pc = 0x39D5DCu;
    {
        const bool branch_taken_0x39d5dc = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x39D5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D5DCu;
        // 0x39d5e0: 0x3c0d0062  lui         $t5, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d5dc) {
            ctx->pc = 0x39D5F4u;
            goto label_39d5f4;
        }
    }
    ctx->pc = 0x39D5E4u;
label_39d5e4:
    // 0x39d5e4: 0x25a3e880  addiu       $v1, $t5, -0x1780
    ctx->pc = 0x39d5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 13), 4294961280));
label_39d5e8:
    // 0x39d5e8: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x39d5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_39d5ec:
    // 0x39d5ec: 0x40f809  jalr        $v0
label_39d5f0:
    if (ctx->pc == 0x39D5F0u) {
        ctx->pc = 0x39D5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D5ECu;
        // 0x39d5f0: 0x180202d  daddu       $a0, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D5F4u;
        goto label_39d5f4;
    }
    ctx->pc = 0x39D5ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39D5F4u);
        ctx->pc = 0x39D5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D5ECu;
        // 0x39d5f0: 0x180202d  daddu       $a0, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39D5ECu, 0x39D5F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39D5F4u;
label_39d5f4:
    // 0x39d5f4: 0x8fae0020  lw          $t6, 0x20($sp)
    ctx->pc = 0x39d5f4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_39d5f8:
    // 0x39d5f8: 0x11c00102  beqz        $t6, . + 4 + (0x102 << 2)
label_39d5fc:
    if (ctx->pc == 0x39D5FCu) {
        ctx->pc = 0x39D5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D5F8u;
        // 0x39d5fc: 0x3c0f0062  lui         $t7, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D600u;
        goto label_39d600;
    }
    ctx->pc = 0x39D5F8u;
    {
        const bool branch_taken_0x39d5f8 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x39D5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D5F8u;
        // 0x39d5fc: 0x3c0f0062  lui         $t7, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d5f8) {
            ctx->pc = 0x39DA04u;
            goto label_39da04;
        }
    }
    ctx->pc = 0x39D600u;
label_39d600:
    // 0x39d600: 0x25e3e880  addiu       $v1, $t7, -0x1780
    ctx->pc = 0x39d600u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 15), 4294961280));
label_39d604:
    // 0x39d604: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x39d604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_39d608:
    // 0x39d608: 0x40f809  jalr        $v0
label_39d60c:
    if (ctx->pc == 0x39D60Cu) {
        ctx->pc = 0x39D60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D608u;
        // 0x39d60c: 0x1c0202d  daddu       $a0, $t6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D610u;
        goto label_39d610;
    }
    ctx->pc = 0x39D608u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39D610u);
        ctx->pc = 0x39D60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D608u;
        // 0x39d60c: 0x1c0202d  daddu       $a0, $t6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39D608u, 0x39D610u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39D610u;
label_39d610:
    // 0x39d610: 0x1000028b  b           . + 4 + (0x28B << 2)
label_39d614:
    if (ctx->pc == 0x39D614u) {
        ctx->pc = 0x39D614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D610u;
        // 0x39d614: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D618u;
        goto label_39d618;
    }
    ctx->pc = 0x39D610u;
    {
        const bool branch_taken_0x39d610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39D614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D610u;
        // 0x39d614: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d610) {
            ctx->pc = 0x39E040u;
            goto label_39e040;
        }
    }
    ctx->pc = 0x39D618u;
label_39d618:
    // 0x39d618: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x39d618u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39d61c:
    // 0x39d61c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x39d61cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39d620:
    // 0x39d620: 0x1840001f  blez        $v0, . + 4 + (0x1F << 2)
label_39d624:
    if (ctx->pc == 0x39D624u) {
        ctx->pc = 0x39D624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D620u;
        // 0x39d624: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D628u;
        goto label_39d628;
    }
    ctx->pc = 0x39D620u;
    {
        const bool branch_taken_0x39d620 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x39D624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D620u;
        // 0x39d624: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d620) {
            ctx->pc = 0x39D6A0u;
            goto label_39d6a0;
        }
    }
    ctx->pc = 0x39D628u;
label_39d628:
    // 0x39d628: 0x8e6b002c  lw          $t3, 0x2C($s3)
    ctx->pc = 0x39d628u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
label_39d62c:
    // 0x39d62c: 0x3c094000  lui         $t1, 0x4000
    ctx->pc = 0x39d62cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)16384 << 16));
label_39d630:
    // 0x39d630: 0x1128c0  sll         $a1, $s1, 3
    ctx->pc = 0x39d630u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
label_39d634:
    // 0x39d634: 0xa10c0  sll         $v0, $t2, 3
    ctx->pc = 0x39d634u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
label_39d638:
    // 0x39d638: 0xab2821  addu        $a1, $a1, $t3
    ctx->pc = 0x39d638u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 11)));
label_39d63c:
    // 0x39d63c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x39d63cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_39d640:
    // 0x39d640: 0x84a70006  lh          $a3, 0x6($a1)
    ctx->pc = 0x39d640u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 6)));
label_39d644:
    // 0x39d644: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x39d644u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39d648:
    // 0x39d648: 0xa4470004  sh          $a3, 0x4($v0)
    ctx->pc = 0x39d648u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 7));
label_39d64c:
    // 0x39d64c: 0x94a60000  lhu         $a2, 0x0($a1)
    ctx->pc = 0x39d64cu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_39d650:
    // 0x39d650: 0x91840  sll         $v1, $t1, 1
    ctx->pc = 0x39d650u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
label_39d654:
    // 0x39d654: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x39d654u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
label_39d658:
    // 0x39d658: 0x2231825  or          $v1, $s1, $v1
    ctx->pc = 0x39d658u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) | GPR_U64(ctx, 3));
label_39d65c:
    // 0x39d65c: 0xa4460006  sh          $a2, 0x6($v0)
    ctx->pc = 0x39d65cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 6), (uint16_t)GPR_U32(ctx, 6));
label_39d660:
    // 0x39d660: 0x2294025  or          $t0, $s1, $t1
    ctx->pc = 0x39d660u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 17) | GPR_U64(ctx, 9));
label_39d664:
    // 0x39d664: 0xa487000c  sh          $a3, 0xC($a0)
    ctx->pc = 0x39d664u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 12), (uint16_t)GPR_U32(ctx, 7));
label_39d668:
    // 0x39d668: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x39d668u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
label_39d66c:
    // 0x39d66c: 0x94a20002  lhu         $v0, 0x2($a1)
    ctx->pc = 0x39d66cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
label_39d670:
    // 0x39d670: 0xa4870014  sh          $a3, 0x14($a0)
    ctx->pc = 0x39d670u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 20), (uint16_t)GPR_U32(ctx, 7));
label_39d674:
    // 0x39d674: 0xa482000e  sh          $v0, 0xE($a0)
    ctx->pc = 0x39d674u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 14), (uint16_t)GPR_U32(ctx, 2));
label_39d678:
    // 0x39d678: 0xac880008  sw          $t0, 0x8($a0)
    ctx->pc = 0x39d678u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 8));
label_39d67c:
    // 0x39d67c: 0x94a20004  lhu         $v0, 0x4($a1)
    ctx->pc = 0x39d67cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
label_39d680:
    // 0x39d680: 0xa4820016  sh          $v0, 0x16($a0)
    ctx->pc = 0x39d680u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 22), (uint16_t)GPR_U32(ctx, 2));
label_39d684:
    // 0x39d684: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x39d684u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_39d688:
    // 0x39d688: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x39d688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_39d68c:
    // 0x39d68c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x39d68cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39d690:
    // 0x39d690: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x39d690u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_39d694:
    // 0x39d694: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
label_39d698:
    if (ctx->pc == 0x39D698u) {
        ctx->pc = 0x39D698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D694u;
        // 0x39d698: 0x254a0003  addiu       $t2, $t2, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D69Cu;
        goto label_39d69c;
    }
    ctx->pc = 0x39D694u;
    {
        const bool branch_taken_0x39d694 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39D698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D694u;
        // 0x39d698: 0x254a0003  addiu       $t2, $t2, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d694) {
            ctx->pc = 0x39D630u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39d630;
        }
    }
    ctx->pc = 0x39D69Cu;
label_39d69c:
    // 0x39d69c: 0x0  nop
    ctx->pc = 0x39d69cu;
    // NOP
label_39d6a0:
    // 0x39d6a0: 0x32840  sll         $a1, $v1, 1
    ctx->pc = 0x39d6a0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_39d6a4:
    // 0x39d6a4: 0x3c07003a  lui         $a3, 0x3A
    ctx->pc = 0x39d6a4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)58 << 16));
label_39d6a8:
    // 0x39d6a8: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x39d6a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_39d6ac:
    // 0x39d6ac: 0x24e7e1e8  addiu       $a3, $a3, -0x1E18
    ctx->pc = 0x39d6acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294959592));
label_39d6b0:
    // 0x39d6b0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x39d6b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_39d6b4:
    // 0x39d6b4: 0xc0bbc9c  jal         func_2EF270
label_39d6b8:
    if (ctx->pc == 0x39D6B8u) {
        ctx->pc = 0x39D6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D6B4u;
        // 0x39d6b8: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D6BCu;
        goto label_39d6bc;
    }
    ctx->pc = 0x39D6B4u;
    SET_GPR_U32(ctx, 31, 0x39D6BCu);
    ctx->pc = 0x39D6B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39D6B4u;
    // 0x39d6b8: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EF270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EF270u, 0x39D6B4u, 0x39D6BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D6BCu;
label_39d6bc:
    // 0x39d6bc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x39d6bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39d6c0:
    // 0x39d6c0: 0x8e630010  lw          $v1, 0x10($s3)
    ctx->pc = 0x39d6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_39d6c4:
    // 0x39d6c4: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x39d6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_39d6c8:
    // 0x39d6c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x39d6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_39d6cc:
    // 0x39d6cc: 0x18400047  blez        $v0, . + 4 + (0x47 << 2)
label_39d6d0:
    if (ctx->pc == 0x39D6D0u) {
        ctx->pc = 0x39D6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D6CCu;
        // 0x39d6d0: 0x240affff  addiu       $t2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D6D4u;
        goto label_39d6d4;
    }
    ctx->pc = 0x39D6CCu;
    {
        const bool branch_taken_0x39d6cc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x39D6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D6CCu;
        // 0x39d6d0: 0x240affff  addiu       $t2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d6cc) {
            ctx->pc = 0x39D7ECu;
            goto label_39d7ec;
        }
    }
    ctx->pc = 0x39D6D4u;
label_39d6d4:
    // 0x39d6d4: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x39d6d4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39d6d8:
    // 0x39d6d8: 0x240cffff  addiu       $t4, $zero, -0x1
    ctx->pc = 0x39d6d8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_39d6dc:
    // 0x39d6dc: 0x31620001  andi        $v0, $t3, 0x1
    ctx->pc = 0x39d6dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)1);
label_39d6e0:
    // 0x39d6e0: 0x2647fff8  addiu       $a3, $s2, -0x8
    ctx->pc = 0x39d6e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967288));
label_39d6e4:
    // 0x39d6e4: 0x19600003  blez        $t3, . + 4 + (0x3 << 2)
label_39d6e8:
    if (ctx->pc == 0x39D6E8u) {
        ctx->pc = 0x39D6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D6E4u;
        // 0x39d6e8: 0x26430006  addiu       $v1, $s2, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D6ECu;
        goto label_39d6ec;
    }
    ctx->pc = 0x39D6E4u;
    {
        const bool branch_taken_0x39d6e4 = (GPR_S32(ctx, 11) <= 0);
        ctx->pc = 0x39D6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D6E4u;
        // 0x39d6e8: 0x26430006  addiu       $v1, $s2, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d6e4) {
            ctx->pc = 0x39D6F4u;
            goto label_39d6f4;
        }
    }
    ctx->pc = 0x39D6ECu;
label_39d6ec:
    // 0x39d6ec: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_39d6f0:
    if (ctx->pc == 0x39D6F0u) {
        ctx->pc = 0x39D6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D6ECu;
        // 0x39d6f0: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D6F4u;
        goto label_39d6f4;
    }
    ctx->pc = 0x39D6ECu;
    {
        const bool branch_taken_0x39d6ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39d6ec) {
            ctx->pc = 0x39D6F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39D6ECu;
            // 0x39d6f0: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39D710u;
            goto label_39d710;
        }
    }
    ctx->pc = 0x39D6F4u;
label_39d6f4:
    // 0x39d6f4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x39d6f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_39d6f8:
    // 0x39d6f8: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x39d6f8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_39d6fc:
    // 0x39d6fc: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x39d6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_39d700:
    // 0x39d700: 0x22b102a  slt         $v0, $s1, $t3
    ctx->pc = 0x39d700u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
label_39d704:
    // 0x39d704: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
label_39d708:
    if (ctx->pc == 0x39D708u) {
        ctx->pc = 0x39D708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D704u;
        // 0x39d708: 0x24e70008  addiu       $a3, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D70Cu;
        goto label_39d70c;
    }
    ctx->pc = 0x39D704u;
    {
        const bool branch_taken_0x39d704 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39D708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D704u;
        // 0x39d708: 0x24e70008  addiu       $a3, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d704) {
            ctx->pc = 0x39D7ECu;
            goto label_39d7ec;
        }
    }
    ctx->pc = 0x39D70Cu;
label_39d70c:
    // 0x39d70c: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x39d70cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_39d710:
    // 0x39d710: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x39d710u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_39d714:
    // 0x39d714: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x39d714u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_39d718:
    // 0x39d718: 0x52200015  beql        $s1, $zero, . + 4 + (0x15 << 2)
label_39d71c:
    if (ctx->pc == 0x39D71Cu) {
        ctx->pc = 0x39D71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D718u;
        // 0x39d71c: 0x254a0001  addiu       $t2, $t2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D720u;
        goto label_39d720;
    }
    ctx->pc = 0x39D718u;
    {
        const bool branch_taken_0x39d718 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x39d718) {
            ctx->pc = 0x39D71Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39D718u;
            // 0x39d71c: 0x254a0001  addiu       $t2, $t2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39D770u;
            goto label_39d770;
        }
    }
    ctx->pc = 0x39D720u;
label_39d720:
    // 0x39d720: 0x8504fff6  lh          $a0, -0xA($t0)
    ctx->pc = 0x39d720u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 4294967286)));
label_39d724:
    // 0x39d724: 0x8523fffe  lh          $v1, -0x2($t1)
    ctx->pc = 0x39d724u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 4294967294)));
label_39d728:
    // 0x39d728: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x39d728u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_39d72c:
    // 0x39d72c: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
label_39d730:
    if (ctx->pc == 0x39D730u) {
        ctx->pc = 0x39D730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D72Cu;
        // 0x39d730: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D734u;
        goto label_39d734;
    }
    ctx->pc = 0x39D72Cu;
    {
        const bool branch_taken_0x39d72c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x39d72c) {
            ctx->pc = 0x39D730u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39D72Cu;
            // 0x39d730: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39D764u;
            goto label_39d764;
        }
    }
    ctx->pc = 0x39D734u;
label_39d734:
    // 0x39d734: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x39d734u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_39d738:
    // 0x39d738: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_39d73c:
    if (ctx->pc == 0x39D73Cu) {
        ctx->pc = 0x39D73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D738u;
        // 0x39d73c: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D740u;
        goto label_39d740;
    }
    ctx->pc = 0x39D738u;
    {
        const bool branch_taken_0x39d738 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39D73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D738u;
        // 0x39d73c: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d738) {
            ctx->pc = 0x39D764u;
            goto label_39d764;
        }
    }
    ctx->pc = 0x39D740u;
label_39d740:
    // 0x39d740: 0x94e40006  lhu         $a0, 0x6($a3)
    ctx->pc = 0x39d740u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 6)));
label_39d744:
    // 0x39d744: 0x94c30000  lhu         $v1, 0x0($a2)
    ctx->pc = 0x39d744u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_39d748:
    // 0x39d748: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x39d748u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_39d74c:
    // 0x39d74c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_39d750:
    if (ctx->pc == 0x39D750u) {
        ctx->pc = 0x39D750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D74Cu;
        // 0x39d750: 0x83102b  sltu        $v0, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D754u;
        goto label_39d754;
    }
    ctx->pc = 0x39D74Cu;
    {
        const bool branch_taken_0x39d74c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39D750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D74Cu;
        // 0x39d750: 0x83102b  sltu        $v0, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d74c) {
            ctx->pc = 0x39D75Cu;
            goto label_39d75c;
        }
    }
    ctx->pc = 0x39D754u;
label_39d754:
    // 0x39d754: 0x10000003  b           . + 4 + (0x3 << 2)
label_39d758:
    if (ctx->pc == 0x39D758u) {
        ctx->pc = 0x39D758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D754u;
        // 0x39d758: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D75Cu;
        goto label_39d75c;
    }
    ctx->pc = 0x39D754u;
    {
        const bool branch_taken_0x39d754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39D758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D754u;
        // 0x39d758: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d754) {
            ctx->pc = 0x39D764u;
            goto label_39d764;
        }
    }
    ctx->pc = 0x39D75Cu;
label_39d75c:
    // 0x39d75c: 0x180182d  daddu       $v1, $t4, $zero
    ctx->pc = 0x39d75cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
label_39d760:
    // 0x39d760: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x39d760u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
label_39d764:
    // 0x39d764: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_39d768:
    if (ctx->pc == 0x39D768u) {
        ctx->pc = 0x39D768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D764u;
        // 0x39d768: 0x26220001  addiu       $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D76Cu;
        goto label_39d76c;
    }
    ctx->pc = 0x39D764u;
    {
        const bool branch_taken_0x39d764 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x39D768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D764u;
        // 0x39d768: 0x26220001  addiu       $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d764) {
            ctx->pc = 0x39D774u;
            goto label_39d774;
        }
    }
    ctx->pc = 0x39D76Cu;
label_39d76c:
    // 0x39d76c: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x39d76cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_39d770:
    // 0x39d770: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x39d770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_39d774:
    // 0x39d774: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_39d778:
    if (ctx->pc == 0x39D778u) {
        ctx->pc = 0x39D778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D774u;
        // 0x39d778: 0x24e30008  addiu       $v1, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D77Cu;
        goto label_39d77c;
    }
    ctx->pc = 0x39D774u;
    {
        const bool branch_taken_0x39d774 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39D778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D774u;
        // 0x39d778: 0x24e30008  addiu       $v1, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d774) {
            ctx->pc = 0x39D7CCu;
            goto label_39d7cc;
        }
    }
    ctx->pc = 0x39D77Cu;
label_39d77c:
    // 0x39d77c: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x39d77cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_39d780:
    // 0x39d780: 0x8504fffe  lh          $a0, -0x2($t0)
    ctx->pc = 0x39d780u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 4294967294)));
label_39d784:
    // 0x39d784: 0x85230006  lh          $v1, 0x6($t1)
    ctx->pc = 0x39d784u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 6)));
label_39d788:
    // 0x39d788: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x39d788u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_39d78c:
    // 0x39d78c: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
label_39d790:
    if (ctx->pc == 0x39D790u) {
        ctx->pc = 0x39D790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D78Cu;
        // 0x39d790: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D794u;
        goto label_39d794;
    }
    ctx->pc = 0x39D78Cu;
    {
        const bool branch_taken_0x39d78c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x39d78c) {
            ctx->pc = 0x39D790u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39D78Cu;
            // 0x39d790: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39D7C4u;
            goto label_39d7c4;
        }
    }
    ctx->pc = 0x39D794u;
label_39d794:
    // 0x39d794: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x39d794u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_39d798:
    // 0x39d798: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_39d79c:
    if (ctx->pc == 0x39D79Cu) {
        ctx->pc = 0x39D79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D798u;
        // 0x39d79c: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D7A0u;
        goto label_39d7a0;
    }
    ctx->pc = 0x39D798u;
    {
        const bool branch_taken_0x39d798 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39D79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D798u;
        // 0x39d79c: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d798) {
            ctx->pc = 0x39D7C4u;
            goto label_39d7c4;
        }
    }
    ctx->pc = 0x39D7A0u;
label_39d7a0:
    // 0x39d7a0: 0x94a40006  lhu         $a0, 0x6($a1)
    ctx->pc = 0x39d7a0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 6)));
label_39d7a4:
    // 0x39d7a4: 0x94c30008  lhu         $v1, 0x8($a2)
    ctx->pc = 0x39d7a4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 8)));
label_39d7a8:
    // 0x39d7a8: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x39d7a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_39d7ac:
    // 0x39d7ac: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_39d7b0:
    if (ctx->pc == 0x39D7B0u) {
        ctx->pc = 0x39D7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D7ACu;
        // 0x39d7b0: 0x83102b  sltu        $v0, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D7B4u;
        goto label_39d7b4;
    }
    ctx->pc = 0x39D7ACu;
    {
        const bool branch_taken_0x39d7ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39D7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D7ACu;
        // 0x39d7b0: 0x83102b  sltu        $v0, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d7ac) {
            ctx->pc = 0x39D7BCu;
            goto label_39d7bc;
        }
    }
    ctx->pc = 0x39D7B4u;
label_39d7b4:
    // 0x39d7b4: 0x10000003  b           . + 4 + (0x3 << 2)
label_39d7b8:
    if (ctx->pc == 0x39D7B8u) {
        ctx->pc = 0x39D7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D7B4u;
        // 0x39d7b8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D7BCu;
        goto label_39d7bc;
    }
    ctx->pc = 0x39D7B4u;
    {
        const bool branch_taken_0x39d7b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39D7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D7B4u;
        // 0x39d7b8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d7b4) {
            ctx->pc = 0x39D7C4u;
            goto label_39d7c4;
        }
    }
    ctx->pc = 0x39D7BCu;
label_39d7bc:
    // 0x39d7bc: 0x180182d  daddu       $v1, $t4, $zero
    ctx->pc = 0x39d7bcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
label_39d7c0:
    // 0x39d7c0: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x39d7c0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
label_39d7c4:
    // 0x39d7c4: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
label_39d7c8:
    if (ctx->pc == 0x39D7C8u) {
        ctx->pc = 0x39D7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D7C4u;
        // 0x39d7c8: 0x26310002  addiu       $s1, $s1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D7CCu;
        goto label_39d7cc;
    }
    ctx->pc = 0x39D7C4u;
    {
        const bool branch_taken_0x39d7c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x39d7c4) {
            ctx->pc = 0x39D7C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39D7C4u;
            // 0x39d7c8: 0x26310002  addiu       $s1, $s1, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39D7D4u;
            goto label_39d7d4;
        }
    }
    ctx->pc = 0x39D7CCu;
label_39d7cc:
    // 0x39d7cc: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x39d7ccu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_39d7d0:
    // 0x39d7d0: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x39d7d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
label_39d7d4:
    // 0x39d7d4: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x39d7d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
label_39d7d8:
    // 0x39d7d8: 0x25290010  addiu       $t1, $t1, 0x10
    ctx->pc = 0x39d7d8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
label_39d7dc:
    // 0x39d7dc: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x39d7dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
label_39d7e0:
    // 0x39d7e0: 0x22b102a  slt         $v0, $s1, $t3
    ctx->pc = 0x39d7e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
label_39d7e4:
    // 0x39d7e4: 0x1440ffcc  bnez        $v0, . + 4 + (-0x34 << 2)
label_39d7e8:
    if (ctx->pc == 0x39D7E8u) {
        ctx->pc = 0x39D7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D7E4u;
        // 0x39d7e8: 0x24e70010  addiu       $a3, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D7ECu;
        goto label_39d7ec;
    }
    ctx->pc = 0x39D7E4u;
    {
        const bool branch_taken_0x39d7e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39D7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D7E4u;
        // 0x39d7e8: 0x24e70010  addiu       $a3, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d7e4) {
            ctx->pc = 0x39D718u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39d718;
        }
    }
    ctx->pc = 0x39D7ECu;
label_39d7ec:
    // 0x39d7ec: 0x3c110062  lui         $s1, 0x62
    ctx->pc = 0x39d7ecu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)98 << 16));
label_39d7f0:
    // 0x39d7f0: 0x25560001  addiu       $s6, $t2, 0x1
    ctx->pc = 0x39d7f0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_39d7f4:
    // 0x39d7f4: 0x2630e880  addiu       $s0, $s1, -0x1780
    ctx->pc = 0x39d7f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294961280));
label_39d7f8:
    // 0x39d7f8: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x39d7f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_39d7fc:
    // 0x39d7fc: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x39d7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
label_39d800:
    // 0x39d800: 0x162040  sll         $a0, $s6, 1
    ctx->pc = 0x39d800u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 22), 1));
label_39d804:
    // 0x39d804: 0x40f809  jalr        $v0
label_39d808:
    if (ctx->pc == 0x39D808u) {
        ctx->pc = 0x39D808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D804u;
        // 0x39d808: 0x34a5050d  ori         $a1, $a1, 0x50D (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1293);
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D80Cu;
        goto label_39d80c;
    }
    ctx->pc = 0x39D804u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39D80Cu);
        ctx->pc = 0x39D808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D804u;
        // 0x39d808: 0x34a5050d  ori         $a1, $a1, 0x50D (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1293);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39D804u, 0x39D80Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39D80Cu;
label_39d80c:
    // 0x39d80c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x39d80cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39d810:
    // 0x39d810: 0x9266001c  lbu         $a2, 0x1C($s3)
    ctx->pc = 0x39d810u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 28)));
label_39d814:
    // 0x39d814: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x39d814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_39d818:
    // 0x39d818: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x39d818u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_39d81c:
    // 0x39d81c: 0x8e650010  lw          $a1, 0x10($s3)
    ctx->pc = 0x39d81cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_39d820:
    // 0x39d820: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x39d820u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
label_39d824:
    // 0x39d824: 0xc0e2dbc  jal         func_38B6F0
label_39d828:
    if (ctx->pc == 0x39D828u) {
        ctx->pc = 0x39D828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D824u;
        // 0x39d828: 0x463025  or          $a2, $v0, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D82Cu;
        goto label_39d82c;
    }
    ctx->pc = 0x39D824u;
    SET_GPR_U32(ctx, 31, 0x39D82Cu);
    ctx->pc = 0x39D828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39D824u;
    // 0x39d828: 0x463025  or          $a2, $v0, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38B6F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38B6F0u, 0x39D824u, 0x39D82Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D82Cu;
label_39d82c:
    // 0x39d82c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x39d82cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39d830:
    // 0x39d830: 0xc0e33ee  jal         func_38CFB8
label_39d834:
    if (ctx->pc == 0x39D834u) {
        ctx->pc = 0x39D834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D830u;
        // 0x39d834: 0x24050fff  addiu       $a1, $zero, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D838u;
        goto label_39d838;
    }
    ctx->pc = 0x39D830u;
    SET_GPR_U32(ctx, 31, 0x39D838u);
    ctx->pc = 0x39D834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39D830u;
    // 0x39d834: 0x24050fff  addiu       $a1, $zero, 0xFFF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CFB8u, 0x39D830u, 0x39D838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D838u;
label_39d838:
    // 0x39d838: 0x12a00003  beqz        $s5, . + 4 + (0x3 << 2)
label_39d83c:
    if (ctx->pc == 0x39D83Cu) {
        ctx->pc = 0x39D83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D838u;
        // 0x39d83c: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D840u;
        goto label_39d840;
    }
    ctx->pc = 0x39D838u;
    {
        const bool branch_taken_0x39d838 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x39D83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D838u;
        // 0x39d83c: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d838) {
            ctx->pc = 0x39D848u;
            goto label_39d848;
        }
    }
    ctx->pc = 0x39D840u;
label_39d840:
    // 0x39d840: 0x56800015  bnel        $s4, $zero, . + 4 + (0x15 << 2)
label_39d844:
    if (ctx->pc == 0x39D844u) {
        ctx->pc = 0x39D844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D840u;
        // 0x39d844: 0x8e630010  lw          $v1, 0x10($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D848u;
        goto label_39d848;
    }
    ctx->pc = 0x39D840u;
    {
        const bool branch_taken_0x39d840 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x39d840) {
            ctx->pc = 0x39D844u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39D840u;
            // 0x39d844: 0x8e630010  lw          $v1, 0x10($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39D898u;
            goto label_39d898;
        }
    }
    ctx->pc = 0x39D848u;
label_39d848:
    // 0x39d848: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x39d848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_39d84c:
    // 0x39d84c: 0x40f809  jalr        $v0
label_39d850:
    if (ctx->pc == 0x39D850u) {
        ctx->pc = 0x39D850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D84Cu;
        // 0x39d850: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D854u;
        goto label_39d854;
    }
    ctx->pc = 0x39D84Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39D854u);
        ctx->pc = 0x39D850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D84Cu;
        // 0x39d850: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39D84Cu, 0x39D854u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39D854u;
label_39d854:
    // 0x39d854: 0x8e03010c  lw          $v1, 0x10C($s0)
    ctx->pc = 0x39d854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_39d858:
    // 0x39d858: 0x60f809  jalr        $v1
label_39d85c:
    if (ctx->pc == 0x39D85Cu) {
        ctx->pc = 0x39D85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D858u;
        // 0x39d85c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D860u;
        goto label_39d860;
    }
    ctx->pc = 0x39D858u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x39D860u);
        ctx->pc = 0x39D85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D858u;
        // 0x39d85c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39D858u, 0x39D860u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39D860u;
label_39d860:
    // 0x39d860: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x39d860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_39d864:
    // 0x39d864: 0x40f809  jalr        $v0
label_39d868:
    if (ctx->pc == 0x39D868u) {
        ctx->pc = 0x39D868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D864u;
        // 0x39d868: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D86Cu;
        goto label_39d86c;
    }
    ctx->pc = 0x39D864u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39D86Cu);
        ctx->pc = 0x39D868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D864u;
        // 0x39d868: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39D864u, 0x39D86Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39D86Cu;
label_39d86c:
    // 0x39d86c: 0x12a00004  beqz        $s5, . + 4 + (0x4 << 2)
label_39d870:
    if (ctx->pc == 0x39D870u) {
        ctx->pc = 0x39D874u;
        goto label_39d874;
    }
    ctx->pc = 0x39D86Cu;
    {
        const bool branch_taken_0x39d86c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x39d86c) {
            ctx->pc = 0x39D880u;
            goto label_39d880;
        }
    }
    ctx->pc = 0x39D874u;
label_39d874:
    // 0x39d874: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x39d874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_39d878:
    // 0x39d878: 0x40f809  jalr        $v0
label_39d87c:
    if (ctx->pc == 0x39D87Cu) {
        ctx->pc = 0x39D87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D878u;
        // 0x39d87c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D880u;
        goto label_39d880;
    }
    ctx->pc = 0x39D878u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39D880u);
        ctx->pc = 0x39D87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D878u;
        // 0x39d87c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39D878u, 0x39D880u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39D880u;
label_39d880:
    // 0x39d880: 0x128001ef  beqz        $s4, . + 4 + (0x1EF << 2)
label_39d884:
    if (ctx->pc == 0x39D884u) {
        ctx->pc = 0x39D884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D880u;
        // 0x39d884: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D888u;
        goto label_39d888;
    }
    ctx->pc = 0x39D880u;
    {
        const bool branch_taken_0x39d880 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x39D884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D880u;
        // 0x39d884: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d880) {
            ctx->pc = 0x39E040u;
            goto label_39e040;
        }
    }
    ctx->pc = 0x39D888u;
label_39d888:
    // 0x39d888: 0xc0e3414  jal         func_38D050
label_39d88c:
    if (ctx->pc == 0x39D88Cu) {
        ctx->pc = 0x39D88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D888u;
        // 0x39d88c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D890u;
        goto label_39d890;
    }
    ctx->pc = 0x39D888u;
    SET_GPR_U32(ctx, 31, 0x39D890u);
    ctx->pc = 0x39D88Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39D888u;
    // 0x39d88c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38D050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D050u, 0x39D888u, 0x39D890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D890u;
label_39d890:
    // 0x39d890: 0x100001eb  b           . + 4 + (0x1EB << 2)
label_39d894:
    if (ctx->pc == 0x39D894u) {
        ctx->pc = 0x39D894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D890u;
        // 0x39d894: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D898u;
        goto label_39d898;
    }
    ctx->pc = 0x39D890u;
    {
        const bool branch_taken_0x39d890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39D894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D890u;
        // 0x39d894: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d890) {
            ctx->pc = 0x39E040u;
            goto label_39e040;
        }
    }
    ctx->pc = 0x39D898u;
label_39d898:
    // 0x39d898: 0x240affff  addiu       $t2, $zero, -0x1
    ctx->pc = 0x39d898u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_39d89c:
    // 0x39d89c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x39d89cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_39d8a0:
    // 0x39d8a0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x39d8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_39d8a4:
    // 0x39d8a4: 0x18400034  blez        $v0, . + 4 + (0x34 << 2)
label_39d8a8:
    if (ctx->pc == 0x39D8A8u) {
        ctx->pc = 0x39D8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D8A4u;
        // 0x39d8a8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D8ACu;
        goto label_39d8ac;
    }
    ctx->pc = 0x39D8A4u;
    {
        const bool branch_taken_0x39d8a4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x39D8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D8A4u;
        // 0x39d8a8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d8a4) {
            ctx->pc = 0x39D978u;
            goto label_39d978;
        }
    }
    ctx->pc = 0x39D8ACu;
label_39d8ac:
    // 0x39d8ac: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x39d8acu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39d8b0:
    // 0x39d8b0: 0x3c0dc000  lui         $t5, 0xC000
    ctx->pc = 0x39d8b0u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)49152 << 16));
label_39d8b4:
    // 0x39d8b4: 0x240cffff  addiu       $t4, $zero, -0x1
    ctx->pc = 0x39d8b4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_39d8b8:
    // 0x39d8b8: 0x2649fff8  addiu       $t1, $s2, -0x8
    ctx->pc = 0x39d8b8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967288));
label_39d8bc:
    // 0x39d8bc: 0x26470006  addiu       $a3, $s2, 0x6
    ctx->pc = 0x39d8bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 6));
label_39d8c0:
    // 0x39d8c0: 0x26a8fffe  addiu       $t0, $s5, -0x2
    ctx->pc = 0x39d8c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967294));
label_39d8c4:
    // 0x39d8c4: 0x0  nop
    ctx->pc = 0x39d8c4u;
    // NOP
label_39d8c8:
    // 0x39d8c8: 0x8ce3fffa  lw          $v1, -0x6($a3)
    ctx->pc = 0x39d8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294967290)));
label_39d8cc:
    // 0x39d8cc: 0x6d3024  and         $a2, $v1, $t5
    ctx->pc = 0x39d8ccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & GPR_U64(ctx, 13));
label_39d8d0:
    // 0x39d8d0: 0x61027  nor         $v0, $zero, $a2
    ctx->pc = 0x39d8d0u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 6)));
label_39d8d4:
    // 0x39d8d4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x39d8d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_39d8d8:
    // 0x39d8d8: 0x12200014  beqz        $s1, . + 4 + (0x14 << 2)
label_39d8dc:
    if (ctx->pc == 0x39D8DCu) {
        ctx->pc = 0x39D8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D8D8u;
        // 0x39d8dc: 0x63782  srl         $a2, $a2, 30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 30));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D8E0u;
        goto label_39d8e0;
    }
    ctx->pc = 0x39D8D8u;
    {
        const bool branch_taken_0x39d8d8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x39D8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D8D8u;
        // 0x39d8dc: 0x63782  srl         $a2, $a2, 30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d8d8) {
            ctx->pc = 0x39D92Cu;
            goto label_39d92c;
        }
    }
    ctx->pc = 0x39D8E0u;
label_39d8e0:
    // 0x39d8e0: 0x84e5fff6  lh          $a1, -0xA($a3)
    ctx->pc = 0x39d8e0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 4294967286)));
label_39d8e4:
    // 0x39d8e4: 0x84e4fffe  lh          $a0, -0x2($a3)
    ctx->pc = 0x39d8e4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 4294967294)));
label_39d8e8:
    // 0x39d8e8: 0x85102a  slt         $v0, $a0, $a1
    ctx->pc = 0x39d8e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_39d8ec:
    // 0x39d8ec: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
label_39d8f0:
    if (ctx->pc == 0x39D8F0u) {
        ctx->pc = 0x39D8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D8ECu;
        // 0x39d8f0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D8F4u;
        goto label_39d8f4;
    }
    ctx->pc = 0x39D8ECu;
    {
        const bool branch_taken_0x39d8ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x39d8ec) {
            ctx->pc = 0x39D8F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39D8ECu;
            // 0x39d8f0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39D924u;
            goto label_39d924;
        }
    }
    ctx->pc = 0x39D8F4u;
label_39d8f4:
    // 0x39d8f4: 0xa4102a  slt         $v0, $a1, $a0
    ctx->pc = 0x39d8f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_39d8f8:
    // 0x39d8f8: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_39d8fc:
    if (ctx->pc == 0x39D8FCu) {
        ctx->pc = 0x39D8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D8F8u;
        // 0x39d8fc: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D900u;
        goto label_39d900;
    }
    ctx->pc = 0x39D8F8u;
    {
        const bool branch_taken_0x39d8f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39D8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D8F8u;
        // 0x39d8fc: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d8f8) {
            ctx->pc = 0x39D924u;
            goto label_39d924;
        }
    }
    ctx->pc = 0x39D900u;
label_39d900:
    // 0x39d900: 0x95250006  lhu         $a1, 0x6($t1)
    ctx->pc = 0x39d900u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 6)));
label_39d904:
    // 0x39d904: 0x94e40000  lhu         $a0, 0x0($a3)
    ctx->pc = 0x39d904u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
label_39d908:
    // 0x39d908: 0x85102b  sltu        $v0, $a0, $a1
    ctx->pc = 0x39d908u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_39d90c:
    // 0x39d90c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_39d910:
    if (ctx->pc == 0x39D910u) {
        ctx->pc = 0x39D910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D90Cu;
        // 0x39d910: 0xa4102b  sltu        $v0, $a1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D914u;
        goto label_39d914;
    }
    ctx->pc = 0x39D90Cu;
    {
        const bool branch_taken_0x39d90c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39D910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D90Cu;
        // 0x39d910: 0xa4102b  sltu        $v0, $a1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d90c) {
            ctx->pc = 0x39D91Cu;
            goto label_39d91c;
        }
    }
    ctx->pc = 0x39D914u;
label_39d914:
    // 0x39d914: 0x10000003  b           . + 4 + (0x3 << 2)
label_39d918:
    if (ctx->pc == 0x39D918u) {
        ctx->pc = 0x39D918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D914u;
        // 0x39d918: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D91Cu;
        goto label_39d91c;
    }
    ctx->pc = 0x39D914u;
    {
        const bool branch_taken_0x39d914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39D918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D914u;
        // 0x39d918: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d914) {
            ctx->pc = 0x39D924u;
            goto label_39d924;
        }
    }
    ctx->pc = 0x39D91Cu;
label_39d91c:
    // 0x39d91c: 0x180202d  daddu       $a0, $t4, $zero
    ctx->pc = 0x39d91cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
label_39d920:
    // 0x39d920: 0x2200a  movz        $a0, $zero, $v0
    ctx->pc = 0x39d920u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
label_39d924:
    // 0x39d924: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_39d928:
    if (ctx->pc == 0x39D928u) {
        ctx->pc = 0x39D928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D924u;
        // 0x39d928: 0x8e84002c  lw          $a0, 0x2C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D92Cu;
        goto label_39d92c;
    }
    ctx->pc = 0x39D924u;
    {
        const bool branch_taken_0x39d924 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x39d924) {
            ctx->pc = 0x39D928u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39D924u;
            // 0x39d928: 0x8e84002c  lw          $a0, 0x2C($s4) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39D938u;
            goto label_39d938;
        }
    }
    ctx->pc = 0x39D92Cu;
label_39d92c:
    // 0x39d92c: 0x25080002  addiu       $t0, $t0, 0x2
    ctx->pc = 0x39d92cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
label_39d930:
    // 0x39d930: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x39d930u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_39d934:
    // 0x39d934: 0x8e84002c  lw          $a0, 0x2C($s4)
    ctx->pc = 0x39d934u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 44)));
label_39d938:
    // 0x39d938: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x39d938u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_39d93c:
    // 0x39d93c: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x39d93cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_39d940:
    // 0x39d940: 0x8e65002c  lw          $a1, 0x2C($s3)
    ctx->pc = 0x39d940u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
label_39d944:
    // 0x39d944: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x39d944u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_39d948:
    // 0x39d948: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x39d948u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_39d94c:
    // 0x39d94c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x39d94cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_39d950:
    // 0x39d950: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x39d950u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_39d954:
    // 0x39d954: 0xa44a0000  sh          $t2, 0x0($v0)
    ctx->pc = 0x39d954u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 10));
label_39d958:
    // 0x39d958: 0x25290008  addiu       $t1, $t1, 0x8
    ctx->pc = 0x39d958u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
label_39d95c:
    // 0x39d95c: 0x22b282a  slt         $a1, $s1, $t3
    ctx->pc = 0x39d95cu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
label_39d960:
    // 0x39d960: 0x94620006  lhu         $v0, 0x6($v1)
    ctx->pc = 0x39d960u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
label_39d964:
    // 0x39d964: 0xa4820006  sh          $v0, 0x6($a0)
    ctx->pc = 0x39d964u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
label_39d968:
    // 0x39d968: 0x94e30000  lhu         $v1, 0x0($a3)
    ctx->pc = 0x39d968u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
label_39d96c:
    // 0x39d96c: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x39d96cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
label_39d970:
    // 0x39d970: 0x14a0ffd5  bnez        $a1, . + 4 + (-0x2B << 2)
label_39d974:
    if (ctx->pc == 0x39D974u) {
        ctx->pc = 0x39D974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D970u;
        // 0x39d974: 0xa5030000  sh          $v1, 0x0($t0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D978u;
        goto label_39d978;
    }
    ctx->pc = 0x39D970u;
    {
        const bool branch_taken_0x39d970 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x39D974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D970u;
        // 0x39d974: 0xa5030000  sh          $v1, 0x0($t0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d970) {
            ctx->pc = 0x39D8C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39d8c8;
        }
    }
    ctx->pc = 0x39D978u;
label_39d978:
    // 0x39d978: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x39d978u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_39d97c:
    // 0x39d97c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x39d97cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_39d980:
    // 0x39d980: 0x2462e880  addiu       $v0, $v1, -0x1780
    ctx->pc = 0x39d980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961280));
label_39d984:
    // 0x39d984: 0x8c43010c  lw          $v1, 0x10C($v0)
    ctx->pc = 0x39d984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 268)));
label_39d988:
    // 0x39d988: 0x60f809  jalr        $v1
label_39d98c:
    if (ctx->pc == 0x39D98Cu) {
        ctx->pc = 0x39D98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D988u;
        // 0x39d98c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D990u;
        goto label_39d990;
    }
    ctx->pc = 0x39D988u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x39D990u);
        ctx->pc = 0x39D98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D988u;
        // 0x39d98c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39D988u, 0x39D990u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39D990u;
label_39d990:
    // 0x39d990: 0x8e620018  lw          $v0, 0x18($s3)
    ctx->pc = 0x39d990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_39d994:
    // 0x39d994: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x39d994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_39d998:
    // 0x39d998: 0x5840000b  blezl       $v0, . + 4 + (0xB << 2)
label_39d99c:
    if (ctx->pc == 0x39D99Cu) {
        ctx->pc = 0x39D99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D998u;
        // 0x39d99c: 0x8e830018  lw          $v1, 0x18($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D9A0u;
        goto label_39d9a0;
    }
    ctx->pc = 0x39D998u;
    {
        const bool branch_taken_0x39d998 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x39d998) {
            ctx->pc = 0x39D99Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39D998u;
            // 0x39d99c: 0x8e830018  lw          $v1, 0x18($s4) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39D9C8u;
            goto label_39d9c8;
        }
    }
    ctx->pc = 0x39D9A0u;
label_39d9a0:
    // 0x39d9a0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x39d9a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_39d9a4:
    // 0x39d9a4: 0x0  nop
    ctx->pc = 0x39d9a4u;
    // NOP
label_39d9a8:
    // 0x39d9a8: 0xc0e334e  jal         func_38CD38
label_39d9ac:
    if (ctx->pc == 0x39D9ACu) {
        ctx->pc = 0x39D9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D9A8u;
        // 0x39d9ac: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D9B0u;
        goto label_39d9b0;
    }
    ctx->pc = 0x39D9A8u;
    SET_GPR_U32(ctx, 31, 0x39D9B0u);
    ctx->pc = 0x39D9ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39D9A8u;
    // 0x39d9ac: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CD38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CD38u, 0x39D9A8u, 0x39D9B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D9B0u;
label_39d9b0:
    // 0x39d9b0: 0x8e630018  lw          $v1, 0x18($s3)
    ctx->pc = 0x39d9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_39d9b4:
    // 0x39d9b4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x39d9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_39d9b8:
    // 0x39d9b8: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x39d9b8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_39d9bc:
    // 0x39d9bc: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_39d9c0:
    if (ctx->pc == 0x39D9C0u) {
        ctx->pc = 0x39D9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D9BCu;
        // 0x39d9c0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D9C4u;
        goto label_39d9c4;
    }
    ctx->pc = 0x39D9BCu;
    {
        const bool branch_taken_0x39d9bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x39D9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D9BCu;
        // 0x39d9c0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d9bc) {
            ctx->pc = 0x39D9A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39d9a8;
        }
    }
    ctx->pc = 0x39D9C4u;
label_39d9c4:
    // 0x39d9c4: 0x8e830018  lw          $v1, 0x18($s4)
    ctx->pc = 0x39d9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_39d9c8:
    // 0x39d9c8: 0x8e620018  lw          $v0, 0x18($s3)
    ctx->pc = 0x39d9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_39d9cc:
    // 0x39d9cc: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
label_39d9d0:
    if (ctx->pc == 0x39D9D0u) {
        ctx->pc = 0x39D9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D9CCu;
        // 0x39d9d0: 0x3c050062  lui         $a1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D9D4u;
        goto label_39d9d4;
    }
    ctx->pc = 0x39D9CCu;
    {
        const bool branch_taken_0x39d9cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x39D9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D9CCu;
        // 0x39d9d0: 0x3c050062  lui         $a1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d9cc) {
            ctx->pc = 0x39DA0Cu;
            goto label_39da0c;
        }
    }
    ctx->pc = 0x39D9D4u;
label_39d9d4:
    // 0x39d9d4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x39d9d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_39d9d8:
    // 0x39d9d8: 0xc0e3414  jal         func_38D050
label_39d9dc:
    if (ctx->pc == 0x39D9DCu) {
        ctx->pc = 0x39D9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D9D8u;
        // 0x39d9dc: 0x24b0e880  addiu       $s0, $a1, -0x1780 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D9E0u;
        goto label_39d9e0;
    }
    ctx->pc = 0x39D9D8u;
    SET_GPR_U32(ctx, 31, 0x39D9E0u);
    ctx->pc = 0x39D9DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39D9D8u;
    // 0x39d9dc: 0x24b0e880  addiu       $s0, $a1, -0x1780 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38D050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D050u, 0x39D9D8u, 0x39D9E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D9E0u;
label_39d9e0:
    // 0x39d9e0: 0x8e03010c  lw          $v1, 0x10C($s0)
    ctx->pc = 0x39d9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_39d9e4:
    // 0x39d9e4: 0x60f809  jalr        $v1
label_39d9e8:
    if (ctx->pc == 0x39D9E8u) {
        ctx->pc = 0x39D9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D9E4u;
        // 0x39d9e8: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D9ECu;
        goto label_39d9ec;
    }
    ctx->pc = 0x39D9E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x39D9ECu);
        ctx->pc = 0x39D9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D9E4u;
        // 0x39d9e8: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39D9E4u, 0x39D9ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39D9ECu;
label_39d9ec:
    // 0x39d9ec: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x39d9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_39d9f0:
    // 0x39d9f0: 0x40f809  jalr        $v0
label_39d9f4:
    if (ctx->pc == 0x39D9F4u) {
        ctx->pc = 0x39D9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D9F0u;
        // 0x39d9f4: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D9F8u;
        goto label_39d9f8;
    }
    ctx->pc = 0x39D9F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39D9F8u);
        ctx->pc = 0x39D9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D9F0u;
        // 0x39d9f4: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39D9F0u, 0x39D9F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39D9F8u;
label_39d9f8:
    // 0x39d9f8: 0x8e03010c  lw          $v1, 0x10C($s0)
    ctx->pc = 0x39d9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_39d9fc:
    // 0x39d9fc: 0x60f809  jalr        $v1
label_39da00:
    if (ctx->pc == 0x39DA00u) {
        ctx->pc = 0x39DA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D9FCu;
        // 0x39da00: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DA04u;
        goto label_39da04;
    }
    ctx->pc = 0x39D9FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x39DA04u);
        ctx->pc = 0x39DA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D9FCu;
        // 0x39da00: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39D9FCu, 0x39DA04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39DA04u;
label_39da04:
    // 0x39da04: 0x1000018e  b           . + 4 + (0x18E << 2)
label_39da08:
    if (ctx->pc == 0x39DA08u) {
        ctx->pc = 0x39DA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DA04u;
        // 0x39da08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DA0Cu;
        goto label_39da0c;
    }
    ctx->pc = 0x39DA04u;
    {
        const bool branch_taken_0x39da04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39DA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DA04u;
        // 0x39da08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39da04) {
            ctx->pc = 0x39E040u;
            goto label_39e040;
        }
    }
    ctx->pc = 0x39DA0Cu;
label_39da0c:
    // 0x39da0c: 0x8fa60014  lw          $a2, 0x14($sp)
    ctx->pc = 0x39da0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_39da10:
    // 0x39da10: 0x26870020  addiu       $a3, $s4, 0x20
    ctx->pc = 0x39da10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
label_39da14:
    // 0x39da14: 0x26680020  addiu       $t0, $s3, 0x20
    ctx->pc = 0x39da14u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
label_39da18:
    // 0x39da18: 0xafa7002c  sw          $a3, 0x2C($sp)
    ctx->pc = 0x39da18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 7));
label_39da1c:
    // 0x39da1c: 0x30cb0008  andi        $t3, $a2, 0x8
    ctx->pc = 0x39da1cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)8);
label_39da20:
    // 0x39da20: 0xafa80028  sw          $t0, 0x28($sp)
    ctx->pc = 0x39da20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 8));
label_39da24:
    // 0x39da24: 0x18600046  blez        $v1, . + 4 + (0x46 << 2)
label_39da28:
    if (ctx->pc == 0x39DA28u) {
        ctx->pc = 0x39DA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DA24u;
        // 0x39da28: 0x30c60010  andi        $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DA2Cu;
        goto label_39da2c;
    }
    ctx->pc = 0x39DA24u;
    {
        const bool branch_taken_0x39da24 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x39DA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DA24u;
        // 0x39da28: 0x30c60010  andi        $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x39da24) {
            ctx->pc = 0x39DB40u;
            goto label_39db40;
        }
    }
    ctx->pc = 0x39DA2Cu;
label_39da2c:
    // 0x39da2c: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x39da2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_39da30:
    // 0x39da30: 0x8e67005c  lw          $a3, 0x5C($s3)
    ctx->pc = 0x39da30u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 92)));
label_39da34:
    // 0x39da34: 0x8e8a005c  lw          $t2, 0x5C($s4)
    ctx->pc = 0x39da34u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 92)));
label_39da38:
    // 0x39da38: 0x111023  negu        $v0, $s1
    ctx->pc = 0x39da38u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 17)));
label_39da3c:
    // 0x39da3c: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x39da3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_39da40:
    // 0x39da40: 0x24e50014  addiu       $a1, $a3, 0x14
    ctx->pc = 0x39da40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 20));
label_39da44:
    // 0x39da44: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x39da44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_39da48:
    // 0x39da48: 0x25490014  addiu       $t1, $t2, 0x14
    ctx->pc = 0x39da48u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), 20));
label_39da4c:
    // 0x39da4c: 0x10600022  beqz        $v1, . + 4 + (0x22 << 2)
label_39da50:
    if (ctx->pc == 0x39DA50u) {
        ctx->pc = 0x39DA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DA4Cu;
        // 0x39da50: 0x2e0402d  daddu       $t0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DA54u;
        goto label_39da54;
    }
    ctx->pc = 0x39DA4Cu;
    {
        const bool branch_taken_0x39da4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x39DA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DA4Cu;
        // 0x39da50: 0x2e0402d  daddu       $t0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39da4c) {
            ctx->pc = 0x39DAD8u;
            goto label_39dad8;
        }
    }
    ctx->pc = 0x39DA54u;
label_39da54:
    // 0x39da54: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x39da54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_39da58:
    // 0x39da58: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_39da5c:
    if (ctx->pc == 0x39DA5Cu) {
        ctx->pc = 0x39DA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DA58u;
        // 0x39da5c: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DA60u;
        goto label_39da60;
    }
    ctx->pc = 0x39DA58u;
    {
        const bool branch_taken_0x39da58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39DA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DA58u;
        // 0x39da5c: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x39da58) {
            ctx->pc = 0x39DAB0u;
            goto label_39dab0;
        }
    }
    ctx->pc = 0x39DA60u;
label_39da60:
    // 0x39da60: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_39da64:
    if (ctx->pc == 0x39DA64u) {
        ctx->pc = 0x39DA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DA60u;
        // 0x39da64: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DA68u;
        goto label_39da68;
    }
    ctx->pc = 0x39DA60u;
    {
        const bool branch_taken_0x39da60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39da60) {
            ctx->pc = 0x39DA64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39DA60u;
            // 0x39da64: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39DA90u;
            goto label_39da90;
        }
    }
    ctx->pc = 0x39DA68u;
label_39da68:
    // 0x39da68: 0x8ce20014  lw          $v0, 0x14($a3)
    ctx->pc = 0x39da68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
label_39da6c:
    // 0x39da6c: 0x25490030  addiu       $t1, $t2, 0x30
    ctx->pc = 0x39da6cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), 48));
label_39da70:
    // 0x39da70: 0x24e50030  addiu       $a1, $a3, 0x30
    ctx->pc = 0x39da70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 48));
label_39da74:
    // 0x39da74: 0x26e80004  addiu       $t0, $s7, 0x4
    ctx->pc = 0x39da74u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 23), 4));
label_39da78:
    // 0x39da78: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x39da78u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
label_39da7c:
    // 0x39da7c: 0x27c40004  addiu       $a0, $fp, 0x4
    ctx->pc = 0x39da7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
label_39da80:
    // 0x39da80: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x39da80u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_39da84:
    // 0x39da84: 0x8d420014  lw          $v0, 0x14($t2)
    ctx->pc = 0x39da84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 20)));
label_39da88:
    // 0x39da88: 0xaee20000  sw          $v0, 0x0($s7)
    ctx->pc = 0x39da88u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
label_39da8c:
    // 0x39da8c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x39da8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_39da90:
    // 0x39da90: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x39da90u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_39da94:
    // 0x39da94: 0x24a5001c  addiu       $a1, $a1, 0x1C
    ctx->pc = 0x39da94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28));
label_39da98:
    // 0x39da98: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x39da98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_39da9c:
    // 0x39da9c: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x39da9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_39daa0:
    // 0x39daa0: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x39daa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_39daa4:
    // 0x39daa4: 0x2529001c  addiu       $t1, $t1, 0x1C
    ctx->pc = 0x39daa4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 28));
label_39daa8:
    // 0x39daa8: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x39daa8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
label_39daac:
    // 0x39daac: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x39daacu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
label_39dab0:
    // 0x39dab0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x39dab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_39dab4:
    // 0x39dab4: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x39dab4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_39dab8:
    // 0x39dab8: 0x24a5001c  addiu       $a1, $a1, 0x1C
    ctx->pc = 0x39dab8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28));
label_39dabc:
    // 0x39dabc: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x39dabcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_39dac0:
    // 0x39dac0: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x39dac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_39dac4:
    // 0x39dac4: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x39dac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_39dac8:
    // 0x39dac8: 0x2529001c  addiu       $t1, $t1, 0x1C
    ctx->pc = 0x39dac8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 28));
label_39dacc:
    // 0x39dacc: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x39daccu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
label_39dad0:
    // 0x39dad0: 0x1220001b  beqz        $s1, . + 4 + (0x1B << 2)
label_39dad4:
    if (ctx->pc == 0x39DAD4u) {
        ctx->pc = 0x39DAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DAD0u;
        // 0x39dad4: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DAD8u;
        goto label_39dad8;
    }
    ctx->pc = 0x39DAD0u;
    {
        const bool branch_taken_0x39dad0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x39DAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DAD0u;
        // 0x39dad4: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39dad0) {
            ctx->pc = 0x39DB40u;
            goto label_39db40;
        }
    }
    ctx->pc = 0x39DAD8u;
label_39dad8:
    // 0x39dad8: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x39dad8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_39dadc:
    // 0x39dadc: 0x100182d  daddu       $v1, $t0, $zero
    ctx->pc = 0x39dadcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_39dae0:
    // 0x39dae0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x39dae0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_39dae4:
    // 0x39dae4: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x39dae4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_39dae8:
    // 0x39dae8: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x39dae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_39daec:
    // 0x39daec: 0x2631fffc  addiu       $s1, $s1, -0x4
    ctx->pc = 0x39daecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
label_39daf0:
    // 0x39daf0: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x39daf0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_39daf4:
    // 0x39daf4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x39daf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_39daf8:
    // 0x39daf8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x39daf8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_39dafc:
    // 0x39dafc: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x39dafcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
label_39db00:
    // 0x39db00: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x39db00u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_39db04:
    // 0x39db04: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x39db04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_39db08:
    // 0x39db08: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x39db08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_39db0c:
    // 0x39db0c: 0x8ce20038  lw          $v0, 0x38($a3)
    ctx->pc = 0x39db0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 56)));
label_39db10:
    // 0x39db10: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x39db10u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
label_39db14:
    // 0x39db14: 0x8c820038  lw          $v0, 0x38($a0)
    ctx->pc = 0x39db14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
label_39db18:
    // 0x39db18: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x39db18u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_39db1c:
    // 0x39db1c: 0x8ce20054  lw          $v0, 0x54($a3)
    ctx->pc = 0x39db1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 84)));
label_39db20:
    // 0x39db20: 0x24e70070  addiu       $a3, $a3, 0x70
    ctx->pc = 0x39db20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 112));
label_39db24:
    // 0x39db24: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x39db24u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
label_39db28:
    // 0x39db28: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x39db28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_39db2c:
    // 0x39db2c: 0x8c820054  lw          $v0, 0x54($a0)
    ctx->pc = 0x39db2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
label_39db30:
    // 0x39db30: 0x24840070  addiu       $a0, $a0, 0x70
    ctx->pc = 0x39db30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
label_39db34:
    // 0x39db34: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x39db34u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
label_39db38:
    // 0x39db38: 0x1620ffeb  bnez        $s1, . + 4 + (-0x15 << 2)
label_39db3c:
    if (ctx->pc == 0x39DB3Cu) {
        ctx->pc = 0x39DB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DB38u;
        // 0x39db3c: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DB40u;
        goto label_39db40;
    }
    ctx->pc = 0x39DB38u;
    {
        const bool branch_taken_0x39db38 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x39DB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DB38u;
        // 0x39db3c: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39db38) {
            ctx->pc = 0x39DAE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39dae8;
        }
    }
    ctx->pc = 0x39DB40u;
label_39db40:
    // 0x39db40: 0x10c0004b  beqz        $a2, . + 4 + (0x4B << 2)
label_39db44:
    if (ctx->pc == 0x39DB44u) {
        ctx->pc = 0x39DB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DB40u;
        // 0x39db44: 0x702d  daddu       $t6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DB48u;
        goto label_39db48;
    }
    ctx->pc = 0x39DB40u;
    {
        const bool branch_taken_0x39db40 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x39DB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DB40u;
        // 0x39db44: 0x702d  daddu       $t6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39db40) {
            ctx->pc = 0x39DC70u;
            goto label_39dc70;
        }
    }
    ctx->pc = 0x39DB48u;
label_39db48:
    // 0x39db48: 0x8e620018  lw          $v0, 0x18($s3)
    ctx->pc = 0x39db48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_39db4c:
    // 0x39db4c: 0x18400048  blez        $v0, . + 4 + (0x48 << 2)
label_39db50:
    if (ctx->pc == 0x39DB50u) {
        ctx->pc = 0x39DB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DB4Cu;
        // 0x39db50: 0x240e0001  addiu       $t6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DB54u;
        goto label_39db54;
    }
    ctx->pc = 0x39DB4Cu;
    {
        const bool branch_taken_0x39db4c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x39DB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DB4Cu;
        // 0x39db50: 0x240e0001  addiu       $t6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39db4c) {
            ctx->pc = 0x39DC70u;
            goto label_39dc70;
        }
    }
    ctx->pc = 0x39DB54u;
label_39db54:
    // 0x39db54: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x39db54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39db58:
    // 0x39db58: 0x8e66005c  lw          $a2, 0x5C($s3)
    ctx->pc = 0x39db58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 92)));
label_39db5c:
    // 0x39db5c: 0x8e89005c  lw          $t1, 0x5C($s4)
    ctx->pc = 0x39db5cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 92)));
label_39db60:
    // 0x39db60: 0x111023  negu        $v0, $s1
    ctx->pc = 0x39db60u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 17)));
label_39db64:
    // 0x39db64: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x39db64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_39db68:
    // 0x39db68: 0x24c50018  addiu       $a1, $a2, 0x18
    ctx->pc = 0x39db68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 24));
label_39db6c:
    // 0x39db6c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x39db6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_39db70:
    // 0x39db70: 0x25280018  addiu       $t0, $t1, 0x18
    ctx->pc = 0x39db70u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), 24));
label_39db74:
    // 0x39db74: 0x10600024  beqz        $v1, . + 4 + (0x24 << 2)
label_39db78:
    if (ctx->pc == 0x39DB78u) {
        ctx->pc = 0x39DB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DB74u;
        // 0x39db78: 0x8fa70024  lw          $a3, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DB7Cu;
        goto label_39db7c;
    }
    ctx->pc = 0x39DB74u;
    {
        const bool branch_taken_0x39db74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x39DB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DB74u;
        // 0x39db78: 0x8fa70024  lw          $a3, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39db74) {
            ctx->pc = 0x39DC08u;
            goto label_39dc08;
        }
    }
    ctx->pc = 0x39DB7Cu;
label_39db7c:
    // 0x39db7c: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x39db7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_39db80:
    // 0x39db80: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_39db84:
    if (ctx->pc == 0x39DB84u) {
        ctx->pc = 0x39DB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DB80u;
        // 0x39db84: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DB88u;
        goto label_39db88;
    }
    ctx->pc = 0x39DB80u;
    {
        const bool branch_taken_0x39db80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39DB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DB80u;
        // 0x39db84: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x39db80) {
            ctx->pc = 0x39DBE0u;
            goto label_39dbe0;
        }
    }
    ctx->pc = 0x39DB88u;
label_39db88:
    // 0x39db88: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
label_39db8c:
    if (ctx->pc == 0x39DB8Cu) {
        ctx->pc = 0x39DB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DB88u;
        // 0x39db8c: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DB90u;
        goto label_39db90;
    }
    ctx->pc = 0x39DB88u;
    {
        const bool branch_taken_0x39db88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39db88) {
            ctx->pc = 0x39DB8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39DB88u;
            // 0x39db8c: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39DBC0u;
            goto label_39dbc0;
        }
    }
    ctx->pc = 0x39DB90u;
label_39db90:
    // 0x39db90: 0x8cc20018  lw          $v0, 0x18($a2)
    ctx->pc = 0x39db90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
label_39db94:
    // 0x39db94: 0x25280034  addiu       $t0, $t1, 0x34
    ctx->pc = 0x39db94u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), 52));
label_39db98:
    // 0x39db98: 0x24c50034  addiu       $a1, $a2, 0x34
    ctx->pc = 0x39db98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 52));
label_39db9c:
    // 0x39db9c: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x39db9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_39dba0:
    // 0x39dba0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x39dba0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_39dba4:
    // 0x39dba4: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x39dba4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_39dba8:
    // 0x39dba8: 0x8d220018  lw          $v0, 0x18($t1)
    ctx->pc = 0x39dba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 24)));
label_39dbac:
    // 0x39dbac: 0x8fad0024  lw          $t5, 0x24($sp)
    ctx->pc = 0x39dbacu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_39dbb0:
    // 0x39dbb0: 0x8fac0020  lw          $t4, 0x20($sp)
    ctx->pc = 0x39dbb0u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_39dbb4:
    // 0x39dbb4: 0xada20000  sw          $v0, 0x0($t5)
    ctx->pc = 0x39dbb4u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 2));
label_39dbb8:
    // 0x39dbb8: 0x25840004  addiu       $a0, $t4, 0x4
    ctx->pc = 0x39dbb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
label_39dbbc:
    // 0x39dbbc: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x39dbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_39dbc0:
    // 0x39dbc0: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x39dbc0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_39dbc4:
    // 0x39dbc4: 0x24a5001c  addiu       $a1, $a1, 0x1C
    ctx->pc = 0x39dbc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28));
label_39dbc8:
    // 0x39dbc8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x39dbc8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_39dbcc:
    // 0x39dbcc: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x39dbccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_39dbd0:
    // 0x39dbd0: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x39dbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_39dbd4:
    // 0x39dbd4: 0x2508001c  addiu       $t0, $t0, 0x1C
    ctx->pc = 0x39dbd4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 28));
label_39dbd8:
    // 0x39dbd8: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x39dbd8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
label_39dbdc:
    // 0x39dbdc: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x39dbdcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_39dbe0:
    // 0x39dbe0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x39dbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_39dbe4:
    // 0x39dbe4: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x39dbe4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_39dbe8:
    // 0x39dbe8: 0x24a5001c  addiu       $a1, $a1, 0x1C
    ctx->pc = 0x39dbe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28));
label_39dbec:
    // 0x39dbec: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x39dbecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_39dbf0:
    // 0x39dbf0: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x39dbf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_39dbf4:
    // 0x39dbf4: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x39dbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_39dbf8:
    // 0x39dbf8: 0x2508001c  addiu       $t0, $t0, 0x1C
    ctx->pc = 0x39dbf8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 28));
label_39dbfc:
    // 0x39dbfc: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x39dbfcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
label_39dc00:
    // 0x39dc00: 0x1220001b  beqz        $s1, . + 4 + (0x1B << 2)
label_39dc04:
    if (ctx->pc == 0x39DC04u) {
        ctx->pc = 0x39DC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DC00u;
        // 0x39dc04: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DC08u;
        goto label_39dc08;
    }
    ctx->pc = 0x39DC00u;
    {
        const bool branch_taken_0x39dc00 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x39DC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DC00u;
        // 0x39dc04: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39dc00) {
            ctx->pc = 0x39DC70u;
            goto label_39dc70;
        }
    }
    ctx->pc = 0x39DC08u;
label_39dc08:
    // 0x39dc08: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x39dc08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_39dc0c:
    // 0x39dc0c: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x39dc0cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_39dc10:
    // 0x39dc10: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x39dc10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_39dc14:
    // 0x39dc14: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x39dc14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_39dc18:
    // 0x39dc18: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x39dc18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_39dc1c:
    // 0x39dc1c: 0x2631fffc  addiu       $s1, $s1, -0x4
    ctx->pc = 0x39dc1cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
label_39dc20:
    // 0x39dc20: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x39dc20u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_39dc24:
    // 0x39dc24: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x39dc24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_39dc28:
    // 0x39dc28: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x39dc28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_39dc2c:
    // 0x39dc2c: 0x8cc2001c  lw          $v0, 0x1C($a2)
    ctx->pc = 0x39dc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
label_39dc30:
    // 0x39dc30: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x39dc30u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_39dc34:
    // 0x39dc34: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x39dc34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_39dc38:
    // 0x39dc38: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x39dc38u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_39dc3c:
    // 0x39dc3c: 0x8cc20038  lw          $v0, 0x38($a2)
    ctx->pc = 0x39dc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 56)));
label_39dc40:
    // 0x39dc40: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x39dc40u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
label_39dc44:
    // 0x39dc44: 0x8c820038  lw          $v0, 0x38($a0)
    ctx->pc = 0x39dc44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
label_39dc48:
    // 0x39dc48: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x39dc48u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_39dc4c:
    // 0x39dc4c: 0x8cc20054  lw          $v0, 0x54($a2)
    ctx->pc = 0x39dc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 84)));
label_39dc50:
    // 0x39dc50: 0x24c60070  addiu       $a2, $a2, 0x70
    ctx->pc = 0x39dc50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 112));
label_39dc54:
    // 0x39dc54: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x39dc54u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
label_39dc58:
    // 0x39dc58: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x39dc58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_39dc5c:
    // 0x39dc5c: 0x8c820054  lw          $v0, 0x54($a0)
    ctx->pc = 0x39dc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
label_39dc60:
    // 0x39dc60: 0x24840070  addiu       $a0, $a0, 0x70
    ctx->pc = 0x39dc60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
label_39dc64:
    // 0x39dc64: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x39dc64u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
label_39dc68:
    // 0x39dc68: 0x1620ffeb  bnez        $s1, . + 4 + (-0x15 << 2)
label_39dc6c:
    if (ctx->pc == 0x39DC6Cu) {
        ctx->pc = 0x39DC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DC68u;
        // 0x39dc6c: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DC70u;
        goto label_39dc70;
    }
    ctx->pc = 0x39DC68u;
    {
        const bool branch_taken_0x39dc68 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x39DC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DC68u;
        // 0x39dc6c: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39dc68) {
            ctx->pc = 0x39DC18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39dc18;
        }
    }
    ctx->pc = 0x39DC70u;
label_39dc70:
    // 0x39dc70: 0x11600006  beqz        $t3, . + 4 + (0x6 << 2)
label_39dc74:
    if (ctx->pc == 0x39DC74u) {
        ctx->pc = 0x39DC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DC70u;
        // 0x39dc74: 0x240d0001  addiu       $t5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DC78u;
        goto label_39dc78;
    }
    ctx->pc = 0x39DC70u;
    {
        const bool branch_taken_0x39dc70 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x39DC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DC70u;
        // 0x39dc74: 0x240d0001  addiu       $t5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39dc70) {
            ctx->pc = 0x39DC8Cu;
            goto label_39dc8c;
        }
    }
    ctx->pc = 0x39DC78u;
label_39dc78:
    // 0x39dc78: 0x8e6f0030  lw          $t7, 0x30($s3)
    ctx->pc = 0x39dc78u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
label_39dc7c:
    // 0x39dc7c: 0xafaf0018  sw          $t7, 0x18($sp)
    ctx->pc = 0x39dc7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 15));
label_39dc80:
    // 0x39dc80: 0x8e900030  lw          $s0, 0x30($s4)
    ctx->pc = 0x39dc80u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
label_39dc84:
    // 0x39dc84: 0x10000002  b           . + 4 + (0x2 << 2)
label_39dc88:
    if (ctx->pc == 0x39DC88u) {
        ctx->pc = 0x39DC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DC84u;
        // 0x39dc88: 0xafb0001c  sw          $s0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DC8Cu;
        goto label_39dc8c;
    }
    ctx->pc = 0x39DC84u;
    {
        const bool branch_taken_0x39dc84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39DC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DC84u;
        // 0x39dc88: 0xafb0001c  sw          $s0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39dc84) {
            ctx->pc = 0x39DC90u;
            goto label_39dc90;
        }
    }
    ctx->pc = 0x39DC8Cu;
label_39dc8c:
    // 0x39dc8c: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x39dc8cu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39dc90:
    // 0x39dc90: 0x1ac0003c  blez        $s6, . + 4 + (0x3C << 2)
label_39dc94:
    if (ctx->pc == 0x39DC94u) {
        ctx->pc = 0x39DC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DC90u;
        // 0x39dc94: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DC98u;
        goto label_39dc98;
    }
    ctx->pc = 0x39DC90u;
    {
        const bool branch_taken_0x39dc90 = (GPR_S32(ctx, 22) <= 0);
        ctx->pc = 0x39DC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DC90u;
        // 0x39dc94: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39dc90) {
            ctx->pc = 0x39DD84u;
            goto label_39dd84;
        }
    }
    ctx->pc = 0x39DC98u;
label_39dc98:
    // 0x39dc98: 0x240c000c  addiu       $t4, $zero, 0xC
    ctx->pc = 0x39dc98u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_39dc9c:
    // 0x39dc9c: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x39dc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
label_39dca0:
    // 0x39dca0: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x39dca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_39dca4:
    // 0x39dca4: 0x11a0000b  beqz        $t5, . + 4 + (0xB << 2)
label_39dca8:
    if (ctx->pc == 0x39DCA8u) {
        ctx->pc = 0x39DCA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DCA4u;
        // 0x39dca8: 0x94440000  lhu         $a0, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DCACu;
        goto label_39dcac;
    }
    ctx->pc = 0x39DCA4u;
    {
        const bool branch_taken_0x39dca4 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x39DCA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DCA4u;
        // 0x39dca8: 0x94440000  lhu         $a0, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39dca4) {
            ctx->pc = 0x39DCD4u;
            goto label_39dcd4;
        }
    }
    ctx->pc = 0x39DCACu;
label_39dcac:
    // 0x39dcac: 0x8fb2001c  lw          $s2, 0x1C($sp)
    ctx->pc = 0x39dcacu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_39dcb0:
    // 0x39dcb0: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x39dcb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_39dcb4:
    // 0x39dcb4: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x39dcb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_39dcb8:
    // 0x39dcb8: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x39dcb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_39dcbc:
    // 0x39dcbc: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x39dcbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_39dcc0:
    // 0x39dcc0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x39dcc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_39dcc4:
    // 0x39dcc4: 0x88460003  lwl         $a2, 0x3($v0)
    ctx->pc = 0x39dcc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 6) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 6, (int32_t)merged); }
label_39dcc8:
    // 0x39dcc8: 0x98460000  lwr         $a2, 0x0($v0)
    ctx->pc = 0x39dcc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 6) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 6) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 6, merged64); }
label_39dccc:
    // 0x39dccc: 0xa8660003  swl         $a2, 0x3($v1)
    ctx->pc = 0x39dcccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_39dcd0:
    // 0x39dcd0: 0xb8660000  swr         $a2, 0x0($v1)
    ctx->pc = 0x39dcd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_39dcd4:
    // 0x39dcd4: 0x8e620018  lw          $v0, 0x18($s3)
    ctx->pc = 0x39dcd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_39dcd8:
    // 0x39dcd8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x39dcd8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39dcdc:
    // 0x39dcdc: 0x18400025  blez        $v0, . + 4 + (0x25 << 2)
label_39dce0:
    if (ctx->pc == 0x39DCE0u) {
        ctx->pc = 0x39DCE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DCDCu;
        // 0x39dce0: 0x262b0001  addiu       $t3, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DCE4u;
        goto label_39dce4;
    }
    ctx->pc = 0x39DCDCu;
    {
        const bool branch_taken_0x39dcdc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x39DCE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DCDCu;
        // 0x39dce0: 0x262b0001  addiu       $t3, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39dcdc) {
            ctx->pc = 0x39DD74u;
            goto label_39dd74;
        }
    }
    ctx->pc = 0x39DCE4u;
label_39dce4:
    // 0x39dce4: 0x22c4018  mult        $t0, $s1, $t4
    ctx->pc = 0x39dce4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
label_39dce8:
    // 0x39dce8: 0x8c5018  mult        $t2, $a0, $t4
    ctx->pc = 0x39dce8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
label_39dcec:
    // 0x39dcec: 0x8fa50024  lw          $a1, 0x24($sp)
    ctx->pc = 0x39dcecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_39dcf0:
    // 0x39dcf0: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x39dcf0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_39dcf4:
    // 0x39dcf4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x39dcf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_39dcf8:
    // 0x39dcf8: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x39dcf8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_39dcfc:
    // 0x39dcfc: 0x0  nop
    ctx->pc = 0x39dcfcu;
    // NOP
label_39dd00:
    // 0x39dd00: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x39dd00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_39dd04:
    // 0x39dd04: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x39dd04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_39dd08:
    // 0x39dd08: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x39dd08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
label_39dd0c:
    // 0x39dd0c: 0x1421021  addu        $v0, $t2, $v0
    ctx->pc = 0x39dd0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
label_39dd10:
    // 0x39dd10: 0x684f0007  ldl         $t7, 0x7($v0)
    ctx->pc = 0x39dd10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem << shift)); }
label_39dd14:
    // 0x39dd14: 0x6c4f0000  ldr         $t7, 0x0($v0)
    ctx->pc = 0x39dd14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
label_39dd18:
    // 0x39dd18: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x39dd18u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_39dd1c:
    // 0x39dd1c: 0xb06f0007  sdl         $t7, 0x7($v1)
    ctx->pc = 0x39dd1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 15); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_39dd20:
    // 0x39dd20: 0xb46f0000  sdr         $t7, 0x0($v1)
    ctx->pc = 0x39dd20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 15); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_39dd24:
    // 0x39dd24: 0x11c0000b  beqz        $t6, . + 4 + (0xB << 2)
label_39dd28:
    if (ctx->pc == 0x39DD28u) {
        ctx->pc = 0x39DD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DD24u;
        // 0x39dd28: 0xac700008  sw          $s0, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DD2Cu;
        goto label_39dd2c;
    }
    ctx->pc = 0x39DD24u;
    {
        const bool branch_taken_0x39dd24 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x39DD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DD24u;
        // 0x39dd28: 0xac700008  sw          $s0, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39dd24) {
            ctx->pc = 0x39DD54u;
            goto label_39dd54;
        }
    }
    ctx->pc = 0x39DD2Cu;
label_39dd2c:
    // 0x39dd2c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x39dd2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_39dd30:
    // 0x39dd30: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x39dd30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_39dd34:
    // 0x39dd34: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x39dd34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
label_39dd38:
    // 0x39dd38: 0x1421021  addu        $v0, $t2, $v0
    ctx->pc = 0x39dd38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
label_39dd3c:
    // 0x39dd3c: 0x684f0007  ldl         $t7, 0x7($v0)
    ctx->pc = 0x39dd3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem << shift)); }
label_39dd40:
    // 0x39dd40: 0x6c4f0000  ldr         $t7, 0x0($v0)
    ctx->pc = 0x39dd40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
label_39dd44:
    // 0x39dd44: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x39dd44u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_39dd48:
    // 0x39dd48: 0xb06f0007  sdl         $t7, 0x7($v1)
    ctx->pc = 0x39dd48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 15); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_39dd4c:
    // 0x39dd4c: 0xb46f0000  sdr         $t7, 0x0($v1)
    ctx->pc = 0x39dd4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 15); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_39dd50:
    // 0x39dd50: 0xac700008  sw          $s0, 0x8($v1)
    ctx->pc = 0x39dd50u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 16));
label_39dd54:
    // 0x39dd54: 0x8e620018  lw          $v0, 0x18($s3)
    ctx->pc = 0x39dd54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_39dd58:
    // 0x39dd58: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x39dd58u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_39dd5c:
    // 0x39dd5c: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x39dd5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_39dd60:
    // 0x39dd60: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x39dd60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_39dd64:
    // 0x39dd64: 0x122102a  slt         $v0, $t1, $v0
    ctx->pc = 0x39dd64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_39dd68:
    // 0x39dd68: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x39dd68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_39dd6c:
    // 0x39dd6c: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
label_39dd70:
    if (ctx->pc == 0x39DD70u) {
        ctx->pc = 0x39DD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DD6Cu;
        // 0x39dd70: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DD74u;
        goto label_39dd74;
    }
    ctx->pc = 0x39DD6Cu;
    {
        const bool branch_taken_0x39dd6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39DD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DD6Cu;
        // 0x39dd70: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39dd6c) {
            ctx->pc = 0x39DD00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39dd00;
        }
    }
    ctx->pc = 0x39DD74u;
label_39dd74:
    // 0x39dd74: 0x160882d  daddu       $s1, $t3, $zero
    ctx->pc = 0x39dd74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_39dd78:
    // 0x39dd78: 0x236102a  slt         $v0, $s1, $s6
    ctx->pc = 0x39dd78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
label_39dd7c:
    // 0x39dd7c: 0x1440ffc8  bnez        $v0, . + 4 + (-0x38 << 2)
label_39dd80:
    if (ctx->pc == 0x39DD80u) {
        ctx->pc = 0x39DD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DD7Cu;
        // 0x39dd80: 0x111040  sll         $v0, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DD84u;
        goto label_39dd84;
    }
    ctx->pc = 0x39DD7Cu;
    {
        const bool branch_taken_0x39dd7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39DD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DD7Cu;
        // 0x39dd80: 0x111040  sll         $v0, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39dd7c) {
            ctx->pc = 0x39DCA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39dca0;
        }
    }
    ctx->pc = 0x39DD84u;
label_39dd84:
    // 0x39dd84: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x39dd84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_39dd88:
    // 0x39dd88: 0x1840005c  blez        $v0, . + 4 + (0x5C << 2)
label_39dd8c:
    if (ctx->pc == 0x39DD8Cu) {
        ctx->pc = 0x39DD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DD88u;
        // 0x39dd8c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DD90u;
        goto label_39dd90;
    }
    ctx->pc = 0x39DD88u;
    {
        const bool branch_taken_0x39dd88 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x39DD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DD88u;
        // 0x39dd8c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39dd88) {
            ctx->pc = 0x39DEFCu;
            goto label_39defc;
        }
    }
    ctx->pc = 0x39DD90u;
label_39dd90:
    // 0x39dd90: 0x266a0034  addiu       $t2, $s3, 0x34
    ctx->pc = 0x39dd90u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 19), 52));
label_39dd94:
    // 0x39dd94: 0x26880034  addiu       $t0, $s4, 0x34
    ctx->pc = 0x39dd94u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 20), 52));
label_39dd98:
    // 0x39dd98: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x39dd98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_39dd9c:
    // 0x39dd9c: 0x0  nop
    ctx->pc = 0x39dd9cu;
    // NOP
label_39dda0:
    // 0x39dda0: 0x262b0001  addiu       $t3, $s1, 0x1
    ctx->pc = 0x39dda0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_39dda4:
    // 0x39dda4: 0x1021821  addu        $v1, $t0, $v0
    ctx->pc = 0x39dda4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
label_39dda8:
    // 0x39dda8: 0x1421021  addu        $v0, $t2, $v0
    ctx->pc = 0x39dda8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
label_39ddac:
    // 0x39ddac: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x39ddacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_39ddb0:
    // 0x39ddb0: 0x1ac0004d  blez        $s6, . + 4 + (0x4D << 2)
label_39ddb4:
    if (ctx->pc == 0x39DDB4u) {
        ctx->pc = 0x39DDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DDB0u;
        // 0x39ddb4: 0x8c470000  lw          $a3, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DDB8u;
        goto label_39ddb8;
    }
    ctx->pc = 0x39DDB0u;
    {
        const bool branch_taken_0x39ddb0 = (GPR_S32(ctx, 22) <= 0);
        ctx->pc = 0x39DDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DDB0u;
        // 0x39ddb4: 0x8c470000  lw          $a3, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ddb0) {
            ctx->pc = 0x39DEE8u;
            goto label_39dee8;
        }
    }
    ctx->pc = 0x39DDB8u;
label_39ddb8:
    // 0x39ddb8: 0x161023  negu        $v0, $s6
    ctx->pc = 0x39ddb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 22)));
label_39ddbc:
    // 0x39ddbc: 0x2c0482d  daddu       $t1, $s6, $zero
    ctx->pc = 0x39ddbcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_39ddc0:
    // 0x39ddc0: 0x30440003  andi        $a0, $v0, 0x3
    ctx->pc = 0x39ddc0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_39ddc4:
    // 0x39ddc4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x39ddc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_39ddc8:
    // 0x39ddc8: 0x10800025  beqz        $a0, . + 4 + (0x25 << 2)
label_39ddcc:
    if (ctx->pc == 0x39DDCCu) {
        ctx->pc = 0x39DDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DDC8u;
        // 0x39ddcc: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DDD0u;
        goto label_39ddd0;
    }
    ctx->pc = 0x39DDC8u;
    {
        const bool branch_taken_0x39ddc8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x39DDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DDC8u;
        // 0x39ddcc: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ddc8) {
            ctx->pc = 0x39DE60u;
            goto label_39de60;
        }
    }
    ctx->pc = 0x39DDD0u;
label_39ddd0:
    // 0x39ddd0: 0x28820003  slti        $v0, $a0, 0x3
    ctx->pc = 0x39ddd0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
label_39ddd4:
    // 0x39ddd4: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_39ddd8:
    if (ctx->pc == 0x39DDD8u) {
        ctx->pc = 0x39DDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DDD4u;
        // 0x39ddd8: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DDDCu;
        goto label_39dddc;
    }
    ctx->pc = 0x39DDD4u;
    {
        const bool branch_taken_0x39ddd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39DDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DDD4u;
        // 0x39ddd8: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ddd4) {
            ctx->pc = 0x39DE34u;
            goto label_39de34;
        }
    }
    ctx->pc = 0x39DDDCu;
label_39dddc:
    // 0x39dddc: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
label_39dde0:
    if (ctx->pc == 0x39DDE0u) {
        ctx->pc = 0x39DDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DDDCu;
        // 0x39dde0: 0x94a20000  lhu         $v0, 0x0($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DDE4u;
        goto label_39dde4;
    }
    ctx->pc = 0x39DDDCu;
    {
        const bool branch_taken_0x39dddc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39dddc) {
            ctx->pc = 0x39DDE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39DDDCu;
            // 0x39dde0: 0x94a20000  lhu         $v0, 0x0($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39DE10u;
            goto label_39de10;
        }
    }
    ctx->pc = 0x39DDE4u;
label_39dde4:
    // 0x39dde4: 0x96a20000  lhu         $v0, 0x0($s5)
    ctx->pc = 0x39dde4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
label_39dde8:
    // 0x39dde8: 0x24660008  addiu       $a2, $v1, 0x8
    ctx->pc = 0x39dde8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_39ddec:
    // 0x39ddec: 0x26a50002  addiu       $a1, $s5, 0x2
    ctx->pc = 0x39ddecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 2));
label_39ddf0:
    // 0x39ddf0: 0x26c9ffff  addiu       $t1, $s6, -0x1
    ctx->pc = 0x39ddf0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
label_39ddf4:
    // 0x39ddf4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x39ddf4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_39ddf8:
    // 0x39ddf8: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x39ddf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_39ddfc:
    // 0x39ddfc: 0x68440007  ldl         $a0, 0x7($v0)
    ctx->pc = 0x39ddfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_39de00:
    // 0x39de00: 0x6c440000  ldr         $a0, 0x0($v0)
    ctx->pc = 0x39de00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_39de04:
    // 0x39de04: 0xb0640007  sdl         $a0, 0x7($v1)
    ctx->pc = 0x39de04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_39de08:
    // 0x39de08: 0xb4640000  sdr         $a0, 0x0($v1)
    ctx->pc = 0x39de08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_39de0c:
    // 0x39de0c: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x39de0cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_39de10:
    // 0x39de10: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x39de10u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
label_39de14:
    // 0x39de14: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x39de14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
label_39de18:
    // 0x39de18: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x39de18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_39de1c:
    // 0x39de1c: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x39de1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_39de20:
    // 0x39de20: 0x684f0007  ldl         $t7, 0x7($v0)
    ctx->pc = 0x39de20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem << shift)); }
label_39de24:
    // 0x39de24: 0x6c4f0000  ldr         $t7, 0x0($v0)
    ctx->pc = 0x39de24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
label_39de28:
    // 0x39de28: 0xb0cf0007  sdl         $t7, 0x7($a2)
    ctx->pc = 0x39de28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 15); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_39de2c:
    // 0x39de2c: 0xb4cf0000  sdr         $t7, 0x0($a2)
    ctx->pc = 0x39de2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 15); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_39de30:
    // 0x39de30: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x39de30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_39de34:
    // 0x39de34: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x39de34u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_39de38:
    // 0x39de38: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x39de38u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
label_39de3c:
    // 0x39de3c: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x39de3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
label_39de40:
    // 0x39de40: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x39de40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_39de44:
    // 0x39de44: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x39de44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_39de48:
    // 0x39de48: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x39de48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_39de4c:
    // 0x39de4c: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x39de4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_39de50:
    // 0x39de50: 0xb0c30007  sdl         $v1, 0x7($a2)
    ctx->pc = 0x39de50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_39de54:
    // 0x39de54: 0xb4c30000  sdr         $v1, 0x0($a2)
    ctx->pc = 0x39de54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_39de58:
    // 0x39de58: 0x11200023  beqz        $t1, . + 4 + (0x23 << 2)
label_39de5c:
    if (ctx->pc == 0x39DE5Cu) {
        ctx->pc = 0x39DE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DE58u;
        // 0x39de5c: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DE60u;
        goto label_39de60;
    }
    ctx->pc = 0x39DE58u;
    {
        const bool branch_taken_0x39de58 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x39DE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DE58u;
        // 0x39de5c: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39de58) {
            ctx->pc = 0x39DEE8u;
            goto label_39dee8;
        }
    }
    ctx->pc = 0x39DE60u;
label_39de60:
    // 0x39de60: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x39de60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_39de64:
    // 0x39de64: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x39de64u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_39de68:
    // 0x39de68: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x39de68u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_39de6c:
    // 0x39de6c: 0x2529fffc  addiu       $t1, $t1, -0x4
    ctx->pc = 0x39de6cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967292));
label_39de70:
    // 0x39de70: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x39de70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_39de74:
    // 0x39de74: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x39de74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_39de78:
    // 0x39de78: 0x684e0007  ldl         $t6, 0x7($v0)
    ctx->pc = 0x39de78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem << shift)); }
label_39de7c:
    // 0x39de7c: 0x6c4e0000  ldr         $t6, 0x0($v0)
    ctx->pc = 0x39de7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem >> shift)); }
label_39de80:
    // 0x39de80: 0xb06e0007  sdl         $t6, 0x7($v1)
    ctx->pc = 0x39de80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 14); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_39de84:
    // 0x39de84: 0xb46e0000  sdr         $t6, 0x0($v1)
    ctx->pc = 0x39de84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 14); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_39de88:
    // 0x39de88: 0x94820002  lhu         $v0, 0x2($a0)
    ctx->pc = 0x39de88u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_39de8c:
    // 0x39de8c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x39de8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_39de90:
    // 0x39de90: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x39de90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_39de94:
    // 0x39de94: 0x68520007  ldl         $s2, 0x7($v0)
    ctx->pc = 0x39de94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem << shift)); }
label_39de98:
    // 0x39de98: 0x6c520000  ldr         $s2, 0x0($v0)
    ctx->pc = 0x39de98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem >> shift)); }
label_39de9c:
    // 0x39de9c: 0xb072000f  sdl         $s2, 0xF($v1)
    ctx->pc = 0x39de9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 18); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_39dea0:
    // 0x39dea0: 0xb4720008  sdr         $s2, 0x8($v1)
    ctx->pc = 0x39dea0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 18); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_39dea4:
    // 0x39dea4: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x39dea4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_39dea8:
    // 0x39dea8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x39dea8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_39deac:
    // 0x39deac: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x39deacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_39deb0:
    // 0x39deb0: 0x684d0007  ldl         $t5, 0x7($v0)
    ctx->pc = 0x39deb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem << shift)); }
label_39deb4:
    // 0x39deb4: 0x6c4d0000  ldr         $t5, 0x0($v0)
    ctx->pc = 0x39deb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem >> shift)); }
label_39deb8:
    // 0x39deb8: 0xb06d0017  sdl         $t5, 0x17($v1)
    ctx->pc = 0x39deb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_39debc:
    // 0x39debc: 0xb46d0010  sdr         $t5, 0x10($v1)
    ctx->pc = 0x39debcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_39dec0:
    // 0x39dec0: 0x94820006  lhu         $v0, 0x6($a0)
    ctx->pc = 0x39dec0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_39dec4:
    // 0x39dec4: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x39dec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_39dec8:
    // 0x39dec8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x39dec8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_39decc:
    // 0x39decc: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x39deccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_39ded0:
    // 0x39ded0: 0x68510007  ldl         $s1, 0x7($v0)
    ctx->pc = 0x39ded0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 17, (GPR_U64(ctx, 17) & keepMask) | (mem << shift)); }
label_39ded4:
    // 0x39ded4: 0x6c510000  ldr         $s1, 0x0($v0)
    ctx->pc = 0x39ded4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 17, (GPR_U64(ctx, 17) & keepMask) | (mem >> shift)); }
label_39ded8:
    // 0x39ded8: 0xb071001f  sdl         $s1, 0x1F($v1)
    ctx->pc = 0x39ded8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 17); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_39dedc:
    // 0x39dedc: 0xb4710018  sdr         $s1, 0x18($v1)
    ctx->pc = 0x39dedcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 17); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_39dee0:
    // 0x39dee0: 0x1520ffe1  bnez        $t1, . + 4 + (-0x1F << 2)
label_39dee4:
    if (ctx->pc == 0x39DEE4u) {
        ctx->pc = 0x39DEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DEE0u;
        // 0x39dee4: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DEE8u;
        goto label_39dee8;
    }
    ctx->pc = 0x39DEE0u;
    {
        const bool branch_taken_0x39dee0 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x39DEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DEE0u;
        // 0x39dee4: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39dee0) {
            ctx->pc = 0x39DE68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39de68;
        }
    }
    ctx->pc = 0x39DEE8u;
label_39dee8:
    // 0x39dee8: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x39dee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_39deec:
    // 0x39deec: 0x160882d  daddu       $s1, $t3, $zero
    ctx->pc = 0x39deecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_39def0:
    // 0x39def0: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x39def0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_39def4:
    // 0x39def4: 0x1440ffaa  bnez        $v0, . + 4 + (-0x56 << 2)
label_39def8:
    if (ctx->pc == 0x39DEF8u) {
        ctx->pc = 0x39DEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DEF4u;
        // 0x39def8: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DEFCu;
        goto label_39defc;
    }
    ctx->pc = 0x39DEF4u;
    {
        const bool branch_taken_0x39def4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39DEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DEF4u;
        // 0x39def8: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39def4) {
            ctx->pc = 0x39DDA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39dda0;
        }
    }
    ctx->pc = 0x39DEFCu;
label_39defc:
    // 0x39defc: 0x8e820018  lw          $v0, 0x18($s4)
    ctx->pc = 0x39defcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_39df00:
    // 0x39df00: 0x18400015  blez        $v0, . + 4 + (0x15 << 2)
label_39df04:
    if (ctx->pc == 0x39DF04u) {
        ctx->pc = 0x39DF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DF00u;
        // 0x39df04: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DF08u;
        goto label_39df08;
    }
    ctx->pc = 0x39DF00u;
    {
        const bool branch_taken_0x39df00 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x39DF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DF00u;
        // 0x39df04: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39df00) {
            ctx->pc = 0x39DF58u;
            goto label_39df58;
        }
    }
    ctx->pc = 0x39DF08u;
label_39df08:
    // 0x39df08: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x39df08u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39df0c:
    // 0x39df0c: 0x8e90005c  lw          $s0, 0x5C($s4)
    ctx->pc = 0x39df0cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 92)));
label_39df10:
    // 0x39df10: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x39df10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_39df14:
    // 0x39df14: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x39df14u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_39df18:
    // 0x39df18: 0x2128021  addu        $s0, $s0, $s2
    ctx->pc = 0x39df18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
label_39df1c:
    // 0x39df1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39df1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_39df20:
    // 0x39df20: 0xc0e2ab0  jal         func_38AAC0
label_39df24:
    if (ctx->pc == 0x39DF24u) {
        ctx->pc = 0x39DF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DF20u;
        // 0x39df24: 0x2652001c  addiu       $s2, $s2, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DF28u;
        goto label_39df28;
    }
    ctx->pc = 0x39DF20u;
    SET_GPR_U32(ctx, 31, 0x39DF28u);
    ctx->pc = 0x39DF24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39DF20u;
    // 0x39df24: 0x2652001c  addiu       $s2, $s2, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38AAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38AAC0u, 0x39DF20u, 0x39DF28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39DF28u;
label_39df28:
    // 0x39df28: 0x6ba70007  ldl         $a3, 0x7($sp)
    ctx->pc = 0x39df28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_39df2c:
    // 0x39df2c: 0x6fa70000  ldr         $a3, 0x0($sp)
    ctx->pc = 0x39df2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_39df30:
    // 0x39df30: 0x6ba8000f  ldl         $t0, 0xF($sp)
    ctx->pc = 0x39df30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_39df34:
    // 0x39df34: 0x6fa80008  ldr         $t0, 0x8($sp)
    ctx->pc = 0x39df34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_39df38:
    // 0x39df38: 0xb207000b  sdl         $a3, 0xB($s0)
    ctx->pc = 0x39df38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 11); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_39df3c:
    // 0x39df3c: 0xb6070004  sdr         $a3, 0x4($s0)
    ctx->pc = 0x39df3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 4); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_39df40:
    // 0x39df40: 0xb2080013  sdl         $t0, 0x13($s0)
    ctx->pc = 0x39df40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_39df44:
    // 0x39df44: 0xb608000c  sdr         $t0, 0xC($s0)
    ctx->pc = 0x39df44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_39df48:
    // 0x39df48: 0x8e820018  lw          $v0, 0x18($s4)
    ctx->pc = 0x39df48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_39df4c:
    // 0x39df4c: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x39df4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_39df50:
    // 0x39df50: 0x5440ffef  bnel        $v0, $zero, . + 4 + (-0x11 << 2)
label_39df54:
    if (ctx->pc == 0x39DF54u) {
        ctx->pc = 0x39DF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DF50u;
        // 0x39df54: 0x8e90005c  lw          $s0, 0x5C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DF58u;
        goto label_39df58;
    }
    ctx->pc = 0x39DF50u;
    {
        const bool branch_taken_0x39df50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x39df50) {
            ctx->pc = 0x39DF54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39DF50u;
            // 0x39df54: 0x8e90005c  lw          $s0, 0x5C($s4) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 92)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39DF10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39df10;
        }
    }
    ctx->pc = 0x39DF58u;
label_39df58:
    // 0x39df58: 0x3c0e0062  lui         $t6, 0x62
    ctx->pc = 0x39df58u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)98 << 16));
label_39df5c:
    // 0x39df5c: 0x25d0e880  addiu       $s0, $t6, -0x1780
    ctx->pc = 0x39df5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 14), 4294961280));
label_39df60:
    // 0x39df60: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x39df60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_39df64:
    // 0x39df64: 0x40f809  jalr        $v0
label_39df68:
    if (ctx->pc == 0x39DF68u) {
        ctx->pc = 0x39DF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DF64u;
        // 0x39df68: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DF6Cu;
        goto label_39df6c;
    }
    ctx->pc = 0x39DF64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39DF6Cu);
        ctx->pc = 0x39DF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DF64u;
        // 0x39df68: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39DF64u, 0x39DF6Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39DF6Cu;
label_39df6c:
    // 0x39df6c: 0x8e03010c  lw          $v1, 0x10C($s0)
    ctx->pc = 0x39df6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_39df70:
    // 0x39df70: 0x60f809  jalr        $v1
label_39df74:
    if (ctx->pc == 0x39DF74u) {
        ctx->pc = 0x39DF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DF70u;
        // 0x39df74: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DF78u;
        goto label_39df78;
    }
    ctx->pc = 0x39DF70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x39DF78u);
        ctx->pc = 0x39DF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DF70u;
        // 0x39df74: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39DF70u, 0x39DF78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39DF78u;
label_39df78:
    // 0x39df78: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x39df78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_39df7c:
    // 0x39df7c: 0x40f809  jalr        $v0
label_39df80:
    if (ctx->pc == 0x39DF80u) {
        ctx->pc = 0x39DF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DF7Cu;
        // 0x39df80: 0x8fa40024  lw          $a0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DF84u;
        goto label_39df84;
    }
    ctx->pc = 0x39DF7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39DF84u);
        ctx->pc = 0x39DF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DF7Cu;
        // 0x39df80: 0x8fa40024  lw          $a0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39DF7Cu, 0x39DF84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39DF84u;
label_39df84:
    // 0x39df84: 0x8e03010c  lw          $v1, 0x10C($s0)
    ctx->pc = 0x39df84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_39df88:
    // 0x39df88: 0x60f809  jalr        $v1
label_39df8c:
    if (ctx->pc == 0x39DF8Cu) {
        ctx->pc = 0x39DF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DF88u;
        // 0x39df8c: 0x8fa40020  lw          $a0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DF90u;
        goto label_39df90;
    }
    ctx->pc = 0x39DF88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x39DF90u);
        ctx->pc = 0x39DF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DF88u;
        // 0x39df8c: 0x8fa40020  lw          $a0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39DF88u, 0x39DF90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39DF90u;
label_39df90:
    // 0x39df90: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x39df90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_39df94:
    // 0x39df94: 0xc0e3a84  jal         func_38EA10
label_39df98:
    if (ctx->pc == 0x39DF98u) {
        ctx->pc = 0x39DF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DF94u;
        // 0x39df98: 0x8fa50028  lw          $a1, 0x28($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DF9Cu;
        goto label_39df9c;
    }
    ctx->pc = 0x39DF94u;
    SET_GPR_U32(ctx, 31, 0x39DF9Cu);
    ctx->pc = 0x39DF98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39DF94u;
    // 0x39df98: 0x8fa50028  lw          $a1, 0x28($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38EA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38EA10u, 0x39DF94u, 0x39DF9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39DF9Cu;
label_39df9c:
    // 0x39df9c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_39dfa0:
    if (ctx->pc == 0x39DFA0u) {
        ctx->pc = 0x39DFA4u;
        goto label_39dfa4;
    }
    ctx->pc = 0x39DF9Cu;
    {
        const bool branch_taken_0x39df9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x39df9c) {
            ctx->pc = 0x39DFB8u;
            goto label_39dfb8;
        }
    }
    ctx->pc = 0x39DFA4u;
label_39dfa4:
    // 0x39dfa4: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x39dfa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_39dfa8:
    // 0x39dfa8: 0x40f809  jalr        $v0
label_39dfac:
    if (ctx->pc == 0x39DFACu) {
        ctx->pc = 0x39DFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DFA8u;
        // 0x39dfac: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DFB0u;
        goto label_39dfb0;
    }
    ctx->pc = 0x39DFA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39DFB0u);
        ctx->pc = 0x39DFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DFA8u;
        // 0x39dfac: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39DFA8u, 0x39DFB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39DFB0u;
label_39dfb0:
    // 0x39dfb0: 0x10000020  b           . + 4 + (0x20 << 2)
label_39dfb4:
    if (ctx->pc == 0x39DFB4u) {
        ctx->pc = 0x39DFB8u;
        goto label_39dfb8;
    }
    ctx->pc = 0x39DFB0u;
    {
        const bool branch_taken_0x39dfb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x39dfb0) {
            ctx->pc = 0x39E034u;
            goto label_39e034;
        }
    }
    ctx->pc = 0x39DFB8u;
label_39dfb8:
    // 0x39dfb8: 0xc0e32e4  jal         func_38CB90
label_39dfbc:
    if (ctx->pc == 0x39DFBCu) {
        ctx->pc = 0x39DFC0u;
        goto label_39dfc0;
    }
    ctx->pc = 0x39DFB8u;
    SET_GPR_U32(ctx, 31, 0x39DFC0u);
    ctx->pc = 0x38CB90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CB90u, 0x39DFB8u, 0x39DFC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39DFC0u;
label_39dfc0:
    // 0x39dfc0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x39dfc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39dfc4:
    // 0x39dfc4: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
label_39dfc8:
    if (ctx->pc == 0x39DFC8u) {
        ctx->pc = 0x39DFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DFC4u;
        // 0x39dfc8: 0x8faf0010  lw          $t7, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DFCCu;
        goto label_39dfcc;
    }
    ctx->pc = 0x39DFC4u;
    {
        const bool branch_taken_0x39dfc4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x39DFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DFC4u;
        // 0x39dfc8: 0x8faf0010  lw          $t7, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39dfc4) {
            ctx->pc = 0x39DFF8u;
            goto label_39dff8;
        }
    }
    ctx->pc = 0x39DFCCu;
label_39dfcc:
    // 0x39dfcc: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x39dfccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_39dfd0:
    // 0x39dfd0: 0x58c00006  blezl       $a2, . + 4 + (0x6 << 2)
label_39dfd4:
    if (ctx->pc == 0x39DFD4u) {
        ctx->pc = 0x39DFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DFD0u;
        // 0x39dfd4: 0x8e100030  lw          $s0, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DFD8u;
        goto label_39dfd8;
    }
    ctx->pc = 0x39DFD0u;
    {
        const bool branch_taken_0x39dfd0 = (GPR_S32(ctx, 6) <= 0);
        if (branch_taken_0x39dfd0) {
            ctx->pc = 0x39DFD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39DFD0u;
            // 0x39dfd4: 0x8e100030  lw          $s0, 0x30($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39DFECu;
            goto label_39dfec;
        }
    }
    ctx->pc = 0x39DFD8u;
label_39dfd8:
    // 0x39dfd8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x39dfd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_39dfdc:
    // 0x39dfdc: 0x2642821  addu        $a1, $s3, $a0
    ctx->pc = 0x39dfdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
label_39dfe0:
    // 0x39dfe0: 0xc0bb778  jal         func_2EDDE0
label_39dfe4:
    if (ctx->pc == 0x39DFE4u) {
        ctx->pc = 0x39DFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DFE0u;
        // 0x39dfe4: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DFE8u;
        goto label_39dfe8;
    }
    ctx->pc = 0x39DFE0u;
    SET_GPR_U32(ctx, 31, 0x39DFE8u);
    ctx->pc = 0x39DFE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39DFE0u;
    // 0x39dfe4: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x39DFE0u, 0x39DFE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39DFE8u;
label_39dfe8:
    // 0x39dfe8: 0x8e100030  lw          $s0, 0x30($s0)
    ctx->pc = 0x39dfe8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_39dfec:
    // 0x39dfec: 0x5600fff8  bnel        $s0, $zero, . + 4 + (-0x8 << 2)
label_39dff0:
    if (ctx->pc == 0x39DFF0u) {
        ctx->pc = 0x39DFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DFECu;
        // 0x39dff0: 0x8e060004  lw          $a2, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DFF4u;
        goto label_39dff4;
    }
    ctx->pc = 0x39DFECu;
    {
        const bool branch_taken_0x39dfec = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x39dfec) {
            ctx->pc = 0x39DFF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39DFECu;
            // 0x39dff0: 0x8e060004  lw          $a2, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39DFD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39dfd0;
        }
    }
    ctx->pc = 0x39DFF4u;
label_39dff4:
    // 0x39dff4: 0x8faf0010  lw          $t7, 0x10($sp)
    ctx->pc = 0x39dff4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_39dff8:
    // 0x39dff8: 0x11e00005  beqz        $t7, . + 4 + (0x5 << 2)
label_39dffc:
    if (ctx->pc == 0x39DFFCu) {
        ctx->pc = 0x39DFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DFF8u;
        // 0x39dffc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E000u;
        goto label_39e000;
    }
    ctx->pc = 0x39DFF8u;
    {
        const bool branch_taken_0x39dff8 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x39DFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DFF8u;
        // 0x39dffc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39dff8) {
            ctx->pc = 0x39E010u;
            goto label_39e010;
        }
    }
    ctx->pc = 0x39E000u;
label_39e000:
    // 0x39e000: 0x32c7ffff  andi        $a3, $s6, 0xFFFF
    ctx->pc = 0x39e000u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)65535);
label_39e004:
    // 0x39e004: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x39e004u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_39e008:
    // 0x39e008: 0x1e0f809  jalr        $t7
label_39e00c:
    if (ctx->pc == 0x39E00Cu) {
        ctx->pc = 0x39E00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E008u;
        // 0x39e00c: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E010u;
        goto label_39e010;
    }
    ctx->pc = 0x39E008u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 15);
        SET_GPR_U32(ctx, 31, 0x39E010u);
        ctx->pc = 0x39E00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E008u;
        // 0x39e00c: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39E008u, 0x39E010u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39E010u;
label_39e010:
    // 0x39e010: 0x3c100062  lui         $s0, 0x62
    ctx->pc = 0x39e010u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)98 << 16));
label_39e014:
    // 0x39e014: 0x2603e880  addiu       $v1, $s0, -0x1780
    ctx->pc = 0x39e014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961280));
label_39e018:
    // 0x39e018: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x39e018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_39e01c:
    // 0x39e01c: 0x40f809  jalr        $v0
label_39e020:
    if (ctx->pc == 0x39E020u) {
        ctx->pc = 0x39E020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E01Cu;
        // 0x39e020: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E024u;
        goto label_39e024;
    }
    ctx->pc = 0x39E01Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39E024u);
        ctx->pc = 0x39E020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E01Cu;
        // 0x39e020: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39E01Cu, 0x39E024u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39E024u;
label_39e024:
    // 0x39e024: 0xc0e2d08  jal         func_38B420
label_39e028:
    if (ctx->pc == 0x39E028u) {
        ctx->pc = 0x39E028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E024u;
        // 0x39e028: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E02Cu;
        goto label_39e02c;
    }
    ctx->pc = 0x39E024u;
    SET_GPR_U32(ctx, 31, 0x39E02Cu);
    ctx->pc = 0x39E028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E024u;
    // 0x39e028: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38B420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38B420u, 0x39E024u, 0x39E02Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E02Cu;
label_39e02c:
    // 0x39e02c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_39e030:
    if (ctx->pc == 0x39E030u) {
        ctx->pc = 0x39E030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E02Cu;
        // 0x39e030: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E034u;
        goto label_39e034;
    }
    ctx->pc = 0x39E02Cu;
    {
        const bool branch_taken_0x39e02c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39E030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E02Cu;
        // 0x39e030: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e02c) {
            ctx->pc = 0x39E040u;
            goto label_39e040;
        }
    }
    ctx->pc = 0x39E034u;
label_39e034:
    // 0x39e034: 0xc0e3414  jal         func_38D050
label_39e038:
    if (ctx->pc == 0x39E038u) {
        ctx->pc = 0x39E038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E034u;
        // 0x39e038: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E03Cu;
        goto label_39e03c;
    }
    ctx->pc = 0x39E034u;
    SET_GPR_U32(ctx, 31, 0x39E03Cu);
    ctx->pc = 0x39E038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E034u;
    // 0x39e038: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38D050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D050u, 0x39E034u, 0x39E03Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E03Cu;
label_39e03c:
    // 0x39e03c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x39e03cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39e040:
    // 0x39e040: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x39e040u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_39e044:
    // 0x39e044: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x39e044u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_39e048:
    // 0x39e048: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x39e048u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_39e04c:
    // 0x39e04c: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x39e04cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_39e050:
    // 0x39e050: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x39e050u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_39e054:
    // 0x39e054: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x39e054u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_39e058:
    // 0x39e058: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x39e058u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_39e05c:
    // 0x39e05c: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x39e05cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_39e060:
    // 0x39e060: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x39e060u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_39e064:
    // 0x39e064: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x39e064u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_39e068:
    // 0x39e068: 0x3e00008  jr          $ra
label_39e06c:
    if (ctx->pc == 0x39E06Cu) {
        ctx->pc = 0x39E06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E068u;
        // 0x39e06c: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E070u;
        goto label_fallthrough_0x39e068;
    }
    ctx->pc = 0x39E068u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39E06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E068u;
        // 0x39e06c: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39E068u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x39e068:
    ctx->pc = 0x39E070u;
}
