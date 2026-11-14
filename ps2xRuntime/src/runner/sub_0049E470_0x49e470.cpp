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

// Function: sub_0049E470
// Address: 0x49e470 - 0x49ecc8
void sub_0049E470_0x49e470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049E470_0x49e470");
#endif

    switch (ctx->pc) {
        case 0x49e470u: goto label_49e470;
        case 0x49e474u: goto label_49e474;
        case 0x49e478u: goto label_49e478;
        case 0x49e47cu: goto label_49e47c;
        case 0x49e480u: goto label_49e480;
        case 0x49e484u: goto label_49e484;
        case 0x49e488u: goto label_49e488;
        case 0x49e48cu: goto label_49e48c;
        case 0x49e490u: goto label_49e490;
        case 0x49e494u: goto label_49e494;
        case 0x49e498u: goto label_49e498;
        case 0x49e49cu: goto label_49e49c;
        case 0x49e4a0u: goto label_49e4a0;
        case 0x49e4a4u: goto label_49e4a4;
        case 0x49e4a8u: goto label_49e4a8;
        case 0x49e4acu: goto label_49e4ac;
        case 0x49e4b0u: goto label_49e4b0;
        case 0x49e4b4u: goto label_49e4b4;
        case 0x49e4b8u: goto label_49e4b8;
        case 0x49e4bcu: goto label_49e4bc;
        case 0x49e4c0u: goto label_49e4c0;
        case 0x49e4c4u: goto label_49e4c4;
        case 0x49e4c8u: goto label_49e4c8;
        case 0x49e4ccu: goto label_49e4cc;
        case 0x49e4d0u: goto label_49e4d0;
        case 0x49e4d4u: goto label_49e4d4;
        case 0x49e4d8u: goto label_49e4d8;
        case 0x49e4dcu: goto label_49e4dc;
        case 0x49e4e0u: goto label_49e4e0;
        case 0x49e4e4u: goto label_49e4e4;
        case 0x49e4e8u: goto label_49e4e8;
        case 0x49e4ecu: goto label_49e4ec;
        case 0x49e4f0u: goto label_49e4f0;
        case 0x49e4f4u: goto label_49e4f4;
        case 0x49e4f8u: goto label_49e4f8;
        case 0x49e4fcu: goto label_49e4fc;
        case 0x49e500u: goto label_49e500;
        case 0x49e504u: goto label_49e504;
        case 0x49e508u: goto label_49e508;
        case 0x49e50cu: goto label_49e50c;
        case 0x49e510u: goto label_49e510;
        case 0x49e514u: goto label_49e514;
        case 0x49e518u: goto label_49e518;
        case 0x49e51cu: goto label_49e51c;
        case 0x49e520u: goto label_49e520;
        case 0x49e524u: goto label_49e524;
        case 0x49e528u: goto label_49e528;
        case 0x49e52cu: goto label_49e52c;
        case 0x49e530u: goto label_49e530;
        case 0x49e534u: goto label_49e534;
        case 0x49e538u: goto label_49e538;
        case 0x49e53cu: goto label_49e53c;
        case 0x49e540u: goto label_49e540;
        case 0x49e544u: goto label_49e544;
        case 0x49e548u: goto label_49e548;
        case 0x49e54cu: goto label_49e54c;
        case 0x49e550u: goto label_49e550;
        case 0x49e554u: goto label_49e554;
        case 0x49e558u: goto label_49e558;
        case 0x49e55cu: goto label_49e55c;
        case 0x49e560u: goto label_49e560;
        case 0x49e564u: goto label_49e564;
        case 0x49e568u: goto label_49e568;
        case 0x49e56cu: goto label_49e56c;
        case 0x49e570u: goto label_49e570;
        case 0x49e574u: goto label_49e574;
        case 0x49e578u: goto label_49e578;
        case 0x49e57cu: goto label_49e57c;
        case 0x49e580u: goto label_49e580;
        case 0x49e584u: goto label_49e584;
        case 0x49e588u: goto label_49e588;
        case 0x49e58cu: goto label_49e58c;
        case 0x49e590u: goto label_49e590;
        case 0x49e594u: goto label_49e594;
        case 0x49e598u: goto label_49e598;
        case 0x49e59cu: goto label_49e59c;
        case 0x49e5a0u: goto label_49e5a0;
        case 0x49e5a4u: goto label_49e5a4;
        case 0x49e5a8u: goto label_49e5a8;
        case 0x49e5acu: goto label_49e5ac;
        case 0x49e5b0u: goto label_49e5b0;
        case 0x49e5b4u: goto label_49e5b4;
        case 0x49e5b8u: goto label_49e5b8;
        case 0x49e5bcu: goto label_49e5bc;
        case 0x49e5c0u: goto label_49e5c0;
        case 0x49e5c4u: goto label_49e5c4;
        case 0x49e5c8u: goto label_49e5c8;
        case 0x49e5ccu: goto label_49e5cc;
        case 0x49e5d0u: goto label_49e5d0;
        case 0x49e5d4u: goto label_49e5d4;
        case 0x49e5d8u: goto label_49e5d8;
        case 0x49e5dcu: goto label_49e5dc;
        case 0x49e5e0u: goto label_49e5e0;
        case 0x49e5e4u: goto label_49e5e4;
        case 0x49e5e8u: goto label_49e5e8;
        case 0x49e5ecu: goto label_49e5ec;
        case 0x49e5f0u: goto label_49e5f0;
        case 0x49e5f4u: goto label_49e5f4;
        case 0x49e5f8u: goto label_49e5f8;
        case 0x49e5fcu: goto label_49e5fc;
        case 0x49e600u: goto label_49e600;
        case 0x49e604u: goto label_49e604;
        case 0x49e608u: goto label_49e608;
        case 0x49e60cu: goto label_49e60c;
        case 0x49e610u: goto label_49e610;
        case 0x49e614u: goto label_49e614;
        case 0x49e618u: goto label_49e618;
        case 0x49e61cu: goto label_49e61c;
        case 0x49e620u: goto label_49e620;
        case 0x49e624u: goto label_49e624;
        case 0x49e628u: goto label_49e628;
        case 0x49e62cu: goto label_49e62c;
        case 0x49e630u: goto label_49e630;
        case 0x49e634u: goto label_49e634;
        case 0x49e638u: goto label_49e638;
        case 0x49e63cu: goto label_49e63c;
        case 0x49e640u: goto label_49e640;
        case 0x49e644u: goto label_49e644;
        case 0x49e648u: goto label_49e648;
        case 0x49e64cu: goto label_49e64c;
        case 0x49e650u: goto label_49e650;
        case 0x49e654u: goto label_49e654;
        case 0x49e658u: goto label_49e658;
        case 0x49e65cu: goto label_49e65c;
        case 0x49e660u: goto label_49e660;
        case 0x49e664u: goto label_49e664;
        case 0x49e668u: goto label_49e668;
        case 0x49e66cu: goto label_49e66c;
        case 0x49e670u: goto label_49e670;
        case 0x49e674u: goto label_49e674;
        case 0x49e678u: goto label_49e678;
        case 0x49e67cu: goto label_49e67c;
        case 0x49e680u: goto label_49e680;
        case 0x49e684u: goto label_49e684;
        case 0x49e688u: goto label_49e688;
        case 0x49e68cu: goto label_49e68c;
        case 0x49e690u: goto label_49e690;
        case 0x49e694u: goto label_49e694;
        case 0x49e698u: goto label_49e698;
        case 0x49e69cu: goto label_49e69c;
        case 0x49e6a0u: goto label_49e6a0;
        case 0x49e6a4u: goto label_49e6a4;
        case 0x49e6a8u: goto label_49e6a8;
        case 0x49e6acu: goto label_49e6ac;
        case 0x49e6b0u: goto label_49e6b0;
        case 0x49e6b4u: goto label_49e6b4;
        case 0x49e6b8u: goto label_49e6b8;
        case 0x49e6bcu: goto label_49e6bc;
        case 0x49e6c0u: goto label_49e6c0;
        case 0x49e6c4u: goto label_49e6c4;
        case 0x49e6c8u: goto label_49e6c8;
        case 0x49e6ccu: goto label_49e6cc;
        case 0x49e6d0u: goto label_49e6d0;
        case 0x49e6d4u: goto label_49e6d4;
        case 0x49e6d8u: goto label_49e6d8;
        case 0x49e6dcu: goto label_49e6dc;
        case 0x49e6e0u: goto label_49e6e0;
        case 0x49e6e4u: goto label_49e6e4;
        case 0x49e6e8u: goto label_49e6e8;
        case 0x49e6ecu: goto label_49e6ec;
        case 0x49e6f0u: goto label_49e6f0;
        case 0x49e6f4u: goto label_49e6f4;
        case 0x49e6f8u: goto label_49e6f8;
        case 0x49e6fcu: goto label_49e6fc;
        case 0x49e700u: goto label_49e700;
        case 0x49e704u: goto label_49e704;
        case 0x49e708u: goto label_49e708;
        case 0x49e70cu: goto label_49e70c;
        case 0x49e710u: goto label_49e710;
        case 0x49e714u: goto label_49e714;
        case 0x49e718u: goto label_49e718;
        case 0x49e71cu: goto label_49e71c;
        case 0x49e720u: goto label_49e720;
        case 0x49e724u: goto label_49e724;
        case 0x49e728u: goto label_49e728;
        case 0x49e72cu: goto label_49e72c;
        case 0x49e730u: goto label_49e730;
        case 0x49e734u: goto label_49e734;
        case 0x49e738u: goto label_49e738;
        case 0x49e73cu: goto label_49e73c;
        case 0x49e740u: goto label_49e740;
        case 0x49e744u: goto label_49e744;
        case 0x49e748u: goto label_49e748;
        case 0x49e74cu: goto label_49e74c;
        case 0x49e750u: goto label_49e750;
        case 0x49e754u: goto label_49e754;
        case 0x49e758u: goto label_49e758;
        case 0x49e75cu: goto label_49e75c;
        case 0x49e760u: goto label_49e760;
        case 0x49e764u: goto label_49e764;
        case 0x49e768u: goto label_49e768;
        case 0x49e76cu: goto label_49e76c;
        case 0x49e770u: goto label_49e770;
        case 0x49e774u: goto label_49e774;
        case 0x49e778u: goto label_49e778;
        case 0x49e77cu: goto label_49e77c;
        case 0x49e780u: goto label_49e780;
        case 0x49e784u: goto label_49e784;
        case 0x49e788u: goto label_49e788;
        case 0x49e78cu: goto label_49e78c;
        case 0x49e790u: goto label_49e790;
        case 0x49e794u: goto label_49e794;
        case 0x49e798u: goto label_49e798;
        case 0x49e79cu: goto label_49e79c;
        case 0x49e7a0u: goto label_49e7a0;
        case 0x49e7a4u: goto label_49e7a4;
        case 0x49e7a8u: goto label_49e7a8;
        case 0x49e7acu: goto label_49e7ac;
        case 0x49e7b0u: goto label_49e7b0;
        case 0x49e7b4u: goto label_49e7b4;
        case 0x49e7b8u: goto label_49e7b8;
        case 0x49e7bcu: goto label_49e7bc;
        case 0x49e7c0u: goto label_49e7c0;
        case 0x49e7c4u: goto label_49e7c4;
        case 0x49e7c8u: goto label_49e7c8;
        case 0x49e7ccu: goto label_49e7cc;
        case 0x49e7d0u: goto label_49e7d0;
        case 0x49e7d4u: goto label_49e7d4;
        case 0x49e7d8u: goto label_49e7d8;
        case 0x49e7dcu: goto label_49e7dc;
        case 0x49e7e0u: goto label_49e7e0;
        case 0x49e7e4u: goto label_49e7e4;
        case 0x49e7e8u: goto label_49e7e8;
        case 0x49e7ecu: goto label_49e7ec;
        case 0x49e7f0u: goto label_49e7f0;
        case 0x49e7f4u: goto label_49e7f4;
        case 0x49e7f8u: goto label_49e7f8;
        case 0x49e7fcu: goto label_49e7fc;
        case 0x49e800u: goto label_49e800;
        case 0x49e804u: goto label_49e804;
        case 0x49e808u: goto label_49e808;
        case 0x49e80cu: goto label_49e80c;
        case 0x49e810u: goto label_49e810;
        case 0x49e814u: goto label_49e814;
        case 0x49e818u: goto label_49e818;
        case 0x49e81cu: goto label_49e81c;
        case 0x49e820u: goto label_49e820;
        case 0x49e824u: goto label_49e824;
        case 0x49e828u: goto label_49e828;
        case 0x49e82cu: goto label_49e82c;
        case 0x49e830u: goto label_49e830;
        case 0x49e834u: goto label_49e834;
        case 0x49e838u: goto label_49e838;
        case 0x49e83cu: goto label_49e83c;
        case 0x49e840u: goto label_49e840;
        case 0x49e844u: goto label_49e844;
        case 0x49e848u: goto label_49e848;
        case 0x49e84cu: goto label_49e84c;
        case 0x49e850u: goto label_49e850;
        case 0x49e854u: goto label_49e854;
        case 0x49e858u: goto label_49e858;
        case 0x49e85cu: goto label_49e85c;
        case 0x49e860u: goto label_49e860;
        case 0x49e864u: goto label_49e864;
        case 0x49e868u: goto label_49e868;
        case 0x49e86cu: goto label_49e86c;
        case 0x49e870u: goto label_49e870;
        case 0x49e874u: goto label_49e874;
        case 0x49e878u: goto label_49e878;
        case 0x49e87cu: goto label_49e87c;
        case 0x49e880u: goto label_49e880;
        case 0x49e884u: goto label_49e884;
        case 0x49e888u: goto label_49e888;
        case 0x49e88cu: goto label_49e88c;
        case 0x49e890u: goto label_49e890;
        case 0x49e894u: goto label_49e894;
        case 0x49e898u: goto label_49e898;
        case 0x49e89cu: goto label_49e89c;
        case 0x49e8a0u: goto label_49e8a0;
        case 0x49e8a4u: goto label_49e8a4;
        case 0x49e8a8u: goto label_49e8a8;
        case 0x49e8acu: goto label_49e8ac;
        case 0x49e8b0u: goto label_49e8b0;
        case 0x49e8b4u: goto label_49e8b4;
        case 0x49e8b8u: goto label_49e8b8;
        case 0x49e8bcu: goto label_49e8bc;
        case 0x49e8c0u: goto label_49e8c0;
        case 0x49e8c4u: goto label_49e8c4;
        case 0x49e8c8u: goto label_49e8c8;
        case 0x49e8ccu: goto label_49e8cc;
        case 0x49e8d0u: goto label_49e8d0;
        case 0x49e8d4u: goto label_49e8d4;
        case 0x49e8d8u: goto label_49e8d8;
        case 0x49e8dcu: goto label_49e8dc;
        case 0x49e8e0u: goto label_49e8e0;
        case 0x49e8e4u: goto label_49e8e4;
        case 0x49e8e8u: goto label_49e8e8;
        case 0x49e8ecu: goto label_49e8ec;
        case 0x49e8f0u: goto label_49e8f0;
        case 0x49e8f4u: goto label_49e8f4;
        case 0x49e8f8u: goto label_49e8f8;
        case 0x49e8fcu: goto label_49e8fc;
        case 0x49e900u: goto label_49e900;
        case 0x49e904u: goto label_49e904;
        case 0x49e908u: goto label_49e908;
        case 0x49e90cu: goto label_49e90c;
        case 0x49e910u: goto label_49e910;
        case 0x49e914u: goto label_49e914;
        case 0x49e918u: goto label_49e918;
        case 0x49e91cu: goto label_49e91c;
        case 0x49e920u: goto label_49e920;
        case 0x49e924u: goto label_49e924;
        case 0x49e928u: goto label_49e928;
        case 0x49e92cu: goto label_49e92c;
        case 0x49e930u: goto label_49e930;
        case 0x49e934u: goto label_49e934;
        case 0x49e938u: goto label_49e938;
        case 0x49e93cu: goto label_49e93c;
        case 0x49e940u: goto label_49e940;
        case 0x49e944u: goto label_49e944;
        case 0x49e948u: goto label_49e948;
        case 0x49e94cu: goto label_49e94c;
        case 0x49e950u: goto label_49e950;
        case 0x49e954u: goto label_49e954;
        case 0x49e958u: goto label_49e958;
        case 0x49e95cu: goto label_49e95c;
        case 0x49e960u: goto label_49e960;
        case 0x49e964u: goto label_49e964;
        case 0x49e968u: goto label_49e968;
        case 0x49e96cu: goto label_49e96c;
        case 0x49e970u: goto label_49e970;
        case 0x49e974u: goto label_49e974;
        case 0x49e978u: goto label_49e978;
        case 0x49e97cu: goto label_49e97c;
        case 0x49e980u: goto label_49e980;
        case 0x49e984u: goto label_49e984;
        case 0x49e988u: goto label_49e988;
        case 0x49e98cu: goto label_49e98c;
        case 0x49e990u: goto label_49e990;
        case 0x49e994u: goto label_49e994;
        case 0x49e998u: goto label_49e998;
        case 0x49e99cu: goto label_49e99c;
        case 0x49e9a0u: goto label_49e9a0;
        case 0x49e9a4u: goto label_49e9a4;
        case 0x49e9a8u: goto label_49e9a8;
        case 0x49e9acu: goto label_49e9ac;
        case 0x49e9b0u: goto label_49e9b0;
        case 0x49e9b4u: goto label_49e9b4;
        case 0x49e9b8u: goto label_49e9b8;
        case 0x49e9bcu: goto label_49e9bc;
        case 0x49e9c0u: goto label_49e9c0;
        case 0x49e9c4u: goto label_49e9c4;
        case 0x49e9c8u: goto label_49e9c8;
        case 0x49e9ccu: goto label_49e9cc;
        case 0x49e9d0u: goto label_49e9d0;
        case 0x49e9d4u: goto label_49e9d4;
        case 0x49e9d8u: goto label_49e9d8;
        case 0x49e9dcu: goto label_49e9dc;
        case 0x49e9e0u: goto label_49e9e0;
        case 0x49e9e4u: goto label_49e9e4;
        case 0x49e9e8u: goto label_49e9e8;
        case 0x49e9ecu: goto label_49e9ec;
        case 0x49e9f0u: goto label_49e9f0;
        case 0x49e9f4u: goto label_49e9f4;
        case 0x49e9f8u: goto label_49e9f8;
        case 0x49e9fcu: goto label_49e9fc;
        case 0x49ea00u: goto label_49ea00;
        case 0x49ea04u: goto label_49ea04;
        case 0x49ea08u: goto label_49ea08;
        case 0x49ea0cu: goto label_49ea0c;
        case 0x49ea10u: goto label_49ea10;
        case 0x49ea14u: goto label_49ea14;
        case 0x49ea18u: goto label_49ea18;
        case 0x49ea1cu: goto label_49ea1c;
        case 0x49ea20u: goto label_49ea20;
        case 0x49ea24u: goto label_49ea24;
        case 0x49ea28u: goto label_49ea28;
        case 0x49ea2cu: goto label_49ea2c;
        case 0x49ea30u: goto label_49ea30;
        case 0x49ea34u: goto label_49ea34;
        case 0x49ea38u: goto label_49ea38;
        case 0x49ea3cu: goto label_49ea3c;
        case 0x49ea40u: goto label_49ea40;
        case 0x49ea44u: goto label_49ea44;
        case 0x49ea48u: goto label_49ea48;
        case 0x49ea4cu: goto label_49ea4c;
        case 0x49ea50u: goto label_49ea50;
        case 0x49ea54u: goto label_49ea54;
        case 0x49ea58u: goto label_49ea58;
        case 0x49ea5cu: goto label_49ea5c;
        case 0x49ea60u: goto label_49ea60;
        case 0x49ea64u: goto label_49ea64;
        case 0x49ea68u: goto label_49ea68;
        case 0x49ea6cu: goto label_49ea6c;
        case 0x49ea70u: goto label_49ea70;
        case 0x49ea74u: goto label_49ea74;
        case 0x49ea78u: goto label_49ea78;
        case 0x49ea7cu: goto label_49ea7c;
        case 0x49ea80u: goto label_49ea80;
        case 0x49ea84u: goto label_49ea84;
        case 0x49ea88u: goto label_49ea88;
        case 0x49ea8cu: goto label_49ea8c;
        case 0x49ea90u: goto label_49ea90;
        case 0x49ea94u: goto label_49ea94;
        case 0x49ea98u: goto label_49ea98;
        case 0x49ea9cu: goto label_49ea9c;
        case 0x49eaa0u: goto label_49eaa0;
        case 0x49eaa4u: goto label_49eaa4;
        case 0x49eaa8u: goto label_49eaa8;
        case 0x49eaacu: goto label_49eaac;
        case 0x49eab0u: goto label_49eab0;
        case 0x49eab4u: goto label_49eab4;
        case 0x49eab8u: goto label_49eab8;
        case 0x49eabcu: goto label_49eabc;
        case 0x49eac0u: goto label_49eac0;
        case 0x49eac4u: goto label_49eac4;
        case 0x49eac8u: goto label_49eac8;
        case 0x49eaccu: goto label_49eacc;
        case 0x49ead0u: goto label_49ead0;
        case 0x49ead4u: goto label_49ead4;
        case 0x49ead8u: goto label_49ead8;
        case 0x49eadcu: goto label_49eadc;
        case 0x49eae0u: goto label_49eae0;
        case 0x49eae4u: goto label_49eae4;
        case 0x49eae8u: goto label_49eae8;
        case 0x49eaecu: goto label_49eaec;
        case 0x49eaf0u: goto label_49eaf0;
        case 0x49eaf4u: goto label_49eaf4;
        case 0x49eaf8u: goto label_49eaf8;
        case 0x49eafcu: goto label_49eafc;
        case 0x49eb00u: goto label_49eb00;
        case 0x49eb04u: goto label_49eb04;
        case 0x49eb08u: goto label_49eb08;
        case 0x49eb0cu: goto label_49eb0c;
        case 0x49eb10u: goto label_49eb10;
        case 0x49eb14u: goto label_49eb14;
        case 0x49eb18u: goto label_49eb18;
        case 0x49eb1cu: goto label_49eb1c;
        case 0x49eb20u: goto label_49eb20;
        case 0x49eb24u: goto label_49eb24;
        case 0x49eb28u: goto label_49eb28;
        case 0x49eb2cu: goto label_49eb2c;
        case 0x49eb30u: goto label_49eb30;
        case 0x49eb34u: goto label_49eb34;
        case 0x49eb38u: goto label_49eb38;
        case 0x49eb3cu: goto label_49eb3c;
        case 0x49eb40u: goto label_49eb40;
        case 0x49eb44u: goto label_49eb44;
        case 0x49eb48u: goto label_49eb48;
        case 0x49eb4cu: goto label_49eb4c;
        case 0x49eb50u: goto label_49eb50;
        case 0x49eb54u: goto label_49eb54;
        case 0x49eb58u: goto label_49eb58;
        case 0x49eb5cu: goto label_49eb5c;
        case 0x49eb60u: goto label_49eb60;
        case 0x49eb64u: goto label_49eb64;
        case 0x49eb68u: goto label_49eb68;
        case 0x49eb6cu: goto label_49eb6c;
        case 0x49eb70u: goto label_49eb70;
        case 0x49eb74u: goto label_49eb74;
        case 0x49eb78u: goto label_49eb78;
        case 0x49eb7cu: goto label_49eb7c;
        case 0x49eb80u: goto label_49eb80;
        case 0x49eb84u: goto label_49eb84;
        case 0x49eb88u: goto label_49eb88;
        case 0x49eb8cu: goto label_49eb8c;
        case 0x49eb90u: goto label_49eb90;
        case 0x49eb94u: goto label_49eb94;
        case 0x49eb98u: goto label_49eb98;
        case 0x49eb9cu: goto label_49eb9c;
        case 0x49eba0u: goto label_49eba0;
        case 0x49eba4u: goto label_49eba4;
        case 0x49eba8u: goto label_49eba8;
        case 0x49ebacu: goto label_49ebac;
        case 0x49ebb0u: goto label_49ebb0;
        case 0x49ebb4u: goto label_49ebb4;
        case 0x49ebb8u: goto label_49ebb8;
        case 0x49ebbcu: goto label_49ebbc;
        case 0x49ebc0u: goto label_49ebc0;
        case 0x49ebc4u: goto label_49ebc4;
        case 0x49ebc8u: goto label_49ebc8;
        case 0x49ebccu: goto label_49ebcc;
        case 0x49ebd0u: goto label_49ebd0;
        case 0x49ebd4u: goto label_49ebd4;
        case 0x49ebd8u: goto label_49ebd8;
        case 0x49ebdcu: goto label_49ebdc;
        case 0x49ebe0u: goto label_49ebe0;
        case 0x49ebe4u: goto label_49ebe4;
        case 0x49ebe8u: goto label_49ebe8;
        case 0x49ebecu: goto label_49ebec;
        case 0x49ebf0u: goto label_49ebf0;
        case 0x49ebf4u: goto label_49ebf4;
        case 0x49ebf8u: goto label_49ebf8;
        case 0x49ebfcu: goto label_49ebfc;
        case 0x49ec00u: goto label_49ec00;
        case 0x49ec04u: goto label_49ec04;
        case 0x49ec08u: goto label_49ec08;
        case 0x49ec0cu: goto label_49ec0c;
        case 0x49ec10u: goto label_49ec10;
        case 0x49ec14u: goto label_49ec14;
        case 0x49ec18u: goto label_49ec18;
        case 0x49ec1cu: goto label_49ec1c;
        case 0x49ec20u: goto label_49ec20;
        case 0x49ec24u: goto label_49ec24;
        case 0x49ec28u: goto label_49ec28;
        case 0x49ec2cu: goto label_49ec2c;
        case 0x49ec30u: goto label_49ec30;
        case 0x49ec34u: goto label_49ec34;
        case 0x49ec38u: goto label_49ec38;
        case 0x49ec3cu: goto label_49ec3c;
        case 0x49ec40u: goto label_49ec40;
        case 0x49ec44u: goto label_49ec44;
        case 0x49ec48u: goto label_49ec48;
        case 0x49ec4cu: goto label_49ec4c;
        case 0x49ec50u: goto label_49ec50;
        case 0x49ec54u: goto label_49ec54;
        case 0x49ec58u: goto label_49ec58;
        case 0x49ec5cu: goto label_49ec5c;
        case 0x49ec60u: goto label_49ec60;
        case 0x49ec64u: goto label_49ec64;
        case 0x49ec68u: goto label_49ec68;
        case 0x49ec6cu: goto label_49ec6c;
        case 0x49ec70u: goto label_49ec70;
        case 0x49ec74u: goto label_49ec74;
        case 0x49ec78u: goto label_49ec78;
        case 0x49ec7cu: goto label_49ec7c;
        case 0x49ec80u: goto label_49ec80;
        case 0x49ec84u: goto label_49ec84;
        case 0x49ec88u: goto label_49ec88;
        case 0x49ec8cu: goto label_49ec8c;
        case 0x49ec90u: goto label_49ec90;
        case 0x49ec94u: goto label_49ec94;
        case 0x49ec98u: goto label_49ec98;
        case 0x49ec9cu: goto label_49ec9c;
        case 0x49eca0u: goto label_49eca0;
        case 0x49eca4u: goto label_49eca4;
        case 0x49eca8u: goto label_49eca8;
        case 0x49ecacu: goto label_49ecac;
        case 0x49ecb0u: goto label_49ecb0;
        case 0x49ecb4u: goto label_49ecb4;
        case 0x49ecb8u: goto label_49ecb8;
        case 0x49ecbcu: goto label_49ecbc;
        case 0x49ecc0u: goto label_49ecc0;
        case 0x49ecc4u: goto label_49ecc4;
        default: break;
    }

    ctx->pc = 0x49e470u;

label_49e470:
    // 0x49e470: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x49e470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_49e474:
    // 0x49e474: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x49e474u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_49e478:
    // 0x49e478: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x49e478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_49e47c:
    // 0x49e47c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x49e47cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_49e480:
    // 0x49e480: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x49e480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
label_49e484:
    // 0x49e484: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x49e484u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_49e488:
    // 0x49e488: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x49e488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_49e48c:
    // 0x49e48c: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x49e48cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_49e490:
    // 0x49e490: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x49e490u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_49e494:
    // 0x49e494: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x49e494u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_49e498:
    // 0x49e498: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x49e498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_49e49c:
    // 0x49e49c: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x49e49cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
label_49e4a0:
    // 0x49e4a0: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x49e4a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
label_49e4a4:
    // 0x49e4a4: 0x12c0008f  beqz        $s6, . + 4 + (0x8F << 2)
label_49e4a8:
    if (ctx->pc == 0x49E4A8u) {
        ctx->pc = 0x49E4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E4A4u;
        // 0x49e4a8: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49E4ACu;
        goto label_49e4ac;
    }
    ctx->pc = 0x49E4A4u;
    {
        const bool branch_taken_0x49e4a4 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x49E4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E4A4u;
        // 0x49e4a8: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e4a4) {
            ctx->pc = 0x49E6E4u;
            goto label_49e6e4;
        }
    }
    ctx->pc = 0x49E4ACu;
label_49e4ac:
    // 0x49e4ac: 0x3c170066  lui         $s7, 0x66
    ctx->pc = 0x49e4acu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)102 << 16));
label_49e4b0:
    // 0x49e4b0: 0x241efff0  addiu       $fp, $zero, -0x10
    ctx->pc = 0x49e4b0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
label_49e4b4:
    // 0x49e4b4: 0x141140  sll         $v0, $s4, 5
    ctx->pc = 0x49e4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 5));
label_49e4b8:
    // 0x49e4b8: 0x24032000  addiu       $v1, $zero, 0x2000
    ctx->pc = 0x49e4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
label_49e4bc:
    // 0x49e4bc: 0x2a29021  addu        $s2, $s5, $v0
    ctx->pc = 0x49e4bcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_49e4c0:
    // 0x49e4c0: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x49e4c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_49e4c4:
    // 0x49e4c4: 0x1483001c  bne         $a0, $v1, . + 4 + (0x1C << 2)
label_49e4c8:
    if (ctx->pc == 0x49E4C8u) {
        ctx->pc = 0x49E4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E4C4u;
        // 0x49e4c8: 0x24024000  addiu       $v0, $zero, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49E4CCu;
        goto label_49e4cc;
    }
    ctx->pc = 0x49E4C4u;
    {
        const bool branch_taken_0x49e4c4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x49E4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E4C4u;
        // 0x49e4c8: 0x24024000  addiu       $v0, $zero, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e4c4) {
            ctx->pc = 0x49E538u;
            goto label_49e538;
        }
    }
    ctx->pc = 0x49E4CCu;
label_49e4cc:
    // 0x49e4cc: 0x8e450014  lw          $a1, 0x14($s2)
    ctx->pc = 0x49e4ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_49e4d0:
    // 0x49e4d0: 0x26e48330  addiu       $a0, $s7, -0x7CD0
    ctx->pc = 0x49e4d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294935344));
label_49e4d4:
    // 0x49e4d4: 0xc127c22  jal         func_49F088
label_49e4d8:
    if (ctx->pc == 0x49E4D8u) {
        ctx->pc = 0x49E4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E4D4u;
        // 0x49e4d8: 0x24132000  addiu       $s3, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49E4DCu;
        goto label_49e4dc;
    }
    ctx->pc = 0x49E4D4u;
    SET_GPR_U32(ctx, 31, 0x49E4DCu);
    ctx->pc = 0x49E4D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49E4D4u;
    // 0x49e4d8: 0x24132000  addiu       $s3, $zero, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49F088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F088u, 0x49E4D4u, 0x49E4DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49E4DCu;
label_49e4dc:
    // 0x49e4dc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x49e4dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_49e4e0:
    // 0x49e4e0: 0x8e470018  lw          $a3, 0x18($s2)
    ctx->pc = 0x49e4e0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_49e4e4:
    // 0x49e4e4: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x49e4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_49e4e8:
    // 0x49e4e8: 0x24042000  addiu       $a0, $zero, 0x2000
    ctx->pc = 0x49e4e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
label_49e4ec:
    // 0x49e4ec: 0x8e48001c  lw          $t0, 0x1C($s2)
    ctx->pc = 0x49e4ecu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_49e4f0:
    // 0x49e4f0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x49e4f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_49e4f4:
    // 0x49e4f4: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x49e4f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_49e4f8:
    // 0x49e4f8: 0x27a60004  addiu       $a2, $sp, 0x4
    ctx->pc = 0x49e4f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
label_49e4fc:
    // 0x49e4fc: 0xc1277d8  jal         func_49DF60
label_49e500:
    if (ctx->pc == 0x49E500u) {
        ctx->pc = 0x49E500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E4FCu;
        // 0x49e500: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49E504u;
        goto label_49e504;
    }
    ctx->pc = 0x49E4FCu;
    SET_GPR_U32(ctx, 31, 0x49E504u);
    ctx->pc = 0x49E500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49E4FCu;
    // 0x49e500: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49DF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49DF60u, 0x49E4FCu, 0x49E504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49E504u;
label_49e504:
    // 0x49e504: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x49e504u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_49e508:
    // 0x49e508: 0x10e0005a  beqz        $a3, . + 4 + (0x5A << 2)
label_49e50c:
    if (ctx->pc == 0x49E50Cu) {
        ctx->pc = 0x49E50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E508u;
        // 0x49e50c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49E510u;
        goto label_49e510;
    }
    ctx->pc = 0x49E508u;
    {
        const bool branch_taken_0x49e508 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x49E50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E508u;
        // 0x49e50c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e508) {
            ctx->pc = 0x49E674u;
            goto label_49e674;
        }
    }
    ctx->pc = 0x49E510u;
label_49e510:
    // 0x49e510: 0x52000005  beql        $s0, $zero, . + 4 + (0x5 << 2)
label_49e514:
    if (ctx->pc == 0x49E514u) {
        ctx->pc = 0x49E514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E510u;
        // 0x49e514: 0x8ce20014  lw          $v0, 0x14($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49E518u;
        goto label_49e518;
    }
    ctx->pc = 0x49E510u;
    {
        const bool branch_taken_0x49e510 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x49e510) {
            ctx->pc = 0x49E514u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49E510u;
            // 0x49e514: 0x8ce20014  lw          $v0, 0x14($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x49E528u;
            goto label_49e528;
        }
    }
    ctx->pc = 0x49E518u;
label_49e518:
    // 0x49e518: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x49e518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_49e51c:
    // 0x49e51c: 0xacf00018  sw          $s0, 0x18($a3)
    ctx->pc = 0x49e51cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 16));
label_49e520:
    // 0x49e520: 0x34534000  ori         $s3, $v0, 0x4000
    ctx->pc = 0x49e520u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_49e524:
    // 0x49e524: 0x8ce20014  lw          $v0, 0x14($a3)
    ctx->pc = 0x49e524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
label_49e528:
    // 0x49e528: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x49e528u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_49e52c:
    // 0x49e52c: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x49e52cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
label_49e530:
    // 0x49e530: 0x10000050  b           . + 4 + (0x50 << 2)
label_49e534:
    if (ctx->pc == 0x49E534u) {
        ctx->pc = 0x49E534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E530u;
        // 0x49e534: 0xace20014  sw          $v0, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49E538u;
        goto label_49e538;
    }
    ctx->pc = 0x49E530u;
    {
        const bool branch_taken_0x49e530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49E534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E530u;
        // 0x49e534: 0xace20014  sw          $v0, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e530) {
            ctx->pc = 0x49E674u;
            goto label_49e674;
        }
    }
    ctx->pc = 0x49E538u;
label_49e538:
    // 0x49e538: 0x1482002b  bne         $a0, $v0, . + 4 + (0x2B << 2)
label_49e53c:
    if (ctx->pc == 0x49E53Cu) {
        ctx->pc = 0x49E53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E538u;
        // 0x49e53c: 0x24021000  addiu       $v0, $zero, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49E540u;
        goto label_49e540;
    }
    ctx->pc = 0x49E538u;
    {
        const bool branch_taken_0x49e538 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x49E53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E538u;
        // 0x49e53c: 0x24021000  addiu       $v0, $zero, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e538) {
            ctx->pc = 0x49E5E8u;
            goto label_49e5e8;
        }
    }
    ctx->pc = 0x49E540u;
label_49e540:
    // 0x49e540: 0x8e450014  lw          $a1, 0x14($s2)
    ctx->pc = 0x49e540u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_49e544:
    // 0x49e544: 0xc127c22  jal         func_49F088
label_49e548:
    if (ctx->pc == 0x49E548u) {
        ctx->pc = 0x49E548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E544u;
        // 0x49e548: 0x26e48330  addiu       $a0, $s7, -0x7CD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294935344));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49E54Cu;
        goto label_49e54c;
    }
    ctx->pc = 0x49E544u;
    SET_GPR_U32(ctx, 31, 0x49E54Cu);
    ctx->pc = 0x49E548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49E544u;
    // 0x49e548: 0x26e48330  addiu       $a0, $s7, -0x7CD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294935344));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49F088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F088u, 0x49E544u, 0x49E54Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49E54Cu;
label_49e54c:
    // 0x49e54c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x49e54cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_49e550:
    // 0x49e550: 0xc127d08  jal         func_49F420
label_49e554:
    if (ctx->pc == 0x49E554u) {
        ctx->pc = 0x49E554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E550u;
        // 0x49e554: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49E558u;
        goto label_49e558;
    }
    ctx->pc = 0x49E550u;
    SET_GPR_U32(ctx, 31, 0x49E558u);
    ctx->pc = 0x49E554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49E550u;
    // 0x49e554: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49F420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F420u, 0x49E550u, 0x49E558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49E558u;
label_49e558:
    // 0x49e558: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x49e558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_49e55c:
    // 0x49e55c: 0x8e48001c  lw          $t0, 0x1C($s2)
    ctx->pc = 0x49e55cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_49e560:
    // 0x49e560: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x49e560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_49e564:
    // 0x49e564: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x49e564u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_49e568:
    // 0x49e568: 0x8e470018  lw          $a3, 0x18($s2)
    ctx->pc = 0x49e568u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_49e56c:
    // 0x49e56c: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
label_49e570:
    if (ctx->pc == 0x49E570u) {
        ctx->pc = 0x49E570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E56Cu;
        // 0x49e570: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49E574u;
        goto label_49e574;
    }
    ctx->pc = 0x49E56Cu;
    {
        const bool branch_taken_0x49e56c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x49E570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E56Cu;
        // 0x49e570: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e56c) {
            ctx->pc = 0x49E598u;
            goto label_49e598;
        }
    }
    ctx->pc = 0x49E574u;
label_49e574:
    // 0x49e574: 0x10e00008  beqz        $a3, . + 4 + (0x8 << 2)
label_49e578:
    if (ctx->pc == 0x49E578u) {
        ctx->pc = 0x49E57Cu;
        goto label_49e57c;
    }
    ctx->pc = 0x49E574u;
    {
        const bool branch_taken_0x49e574 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x49e574) {
            ctx->pc = 0x49E598u;
            goto label_49e598;
        }
    }
    ctx->pc = 0x49E57Cu;
label_49e57c:
    // 0x49e57c: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x49e57cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_49e580:
    // 0x49e580: 0x8e070018  lw          $a3, 0x18($s0)
    ctx->pc = 0x49e580u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_49e584:
    // 0x49e584: 0x0  nop
    ctx->pc = 0x49e584u;
    // NOP
label_49e588:
    // 0x49e588: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_49e58c:
    if (ctx->pc == 0x49E58Cu) {
        ctx->pc = 0x49E590u;
        goto label_49e590;
    }
    ctx->pc = 0x49E588u;
    {
        const bool branch_taken_0x49e588 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x49e588) {
            ctx->pc = 0x49E598u;
            goto label_49e598;
        }
    }
    ctx->pc = 0x49E590u;
label_49e590:
    // 0x49e590: 0x14e0fffd  bnez        $a3, . + 4 + (-0x3 << 2)
label_49e594:
    if (ctx->pc == 0x49E594u) {
        ctx->pc = 0x49E598u;
        goto label_49e598;
    }
    ctx->pc = 0x49E590u;
    {
        const bool branch_taken_0x49e590 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x49e590) {
            ctx->pc = 0x49E588u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49e588;
        }
    }
    ctx->pc = 0x49E598u;
label_49e598:
    // 0x49e598: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_49e59c:
    if (ctx->pc == 0x49E59Cu) {
        ctx->pc = 0x49E5A0u;
        goto label_49e5a0;
    }
    ctx->pc = 0x49E598u;
    {
        const bool branch_taken_0x49e598 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x49e598) {
            ctx->pc = 0x49E5C0u;
            goto label_49e5c0;
        }
    }
    ctx->pc = 0x49E5A0u;
label_49e5a0:
    // 0x49e5a0: 0x10e00007  beqz        $a3, . + 4 + (0x7 << 2)
label_49e5a4:
    if (ctx->pc == 0x49E5A4u) {
        ctx->pc = 0x49E5A8u;
        goto label_49e5a8;
    }
    ctx->pc = 0x49E5A0u;
    {
        const bool branch_taken_0x49e5a0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x49e5a0) {
            ctx->pc = 0x49E5C0u;
            goto label_49e5c0;
        }
    }
    ctx->pc = 0x49E5A8u;
label_49e5a8:
    // 0x49e5a8: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x49e5a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_49e5ac:
    // 0x49e5ac: 0x8e070018  lw          $a3, 0x18($s0)
    ctx->pc = 0x49e5acu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_49e5b0:
    // 0x49e5b0: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
label_49e5b4:
    if (ctx->pc == 0x49E5B4u) {
        ctx->pc = 0x49E5B8u;
        goto label_49e5b8;
    }
    ctx->pc = 0x49E5B0u;
    {
        const bool branch_taken_0x49e5b0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x49e5b0) {
            ctx->pc = 0x49E5C0u;
            goto label_49e5c0;
        }
    }
    ctx->pc = 0x49E5B8u;
label_49e5b8:
    // 0x49e5b8: 0x14e0fffd  bnez        $a3, . + 4 + (-0x3 << 2)
label_49e5bc:
    if (ctx->pc == 0x49E5BCu) {
        ctx->pc = 0x49E5C0u;
        goto label_49e5c0;
    }
    ctx->pc = 0x49E5B8u;
    {
        const bool branch_taken_0x49e5b8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x49e5b8) {
            ctx->pc = 0x49E5B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49e5b0;
        }
    }
    ctx->pc = 0x49E5C0u;
label_49e5c0:
    // 0x49e5c0: 0xc1277d8  jal         func_49DF60
label_49e5c4:
    if (ctx->pc == 0x49E5C4u) {
        ctx->pc = 0x49E5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E5C0u;
        // 0x49e5c4: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49E5C8u;
        goto label_49e5c8;
    }
    ctx->pc = 0x49E5C0u;
    SET_GPR_U32(ctx, 31, 0x49E5C8u);
    ctx->pc = 0x49E5C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49E5C0u;
    // 0x49e5c4: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49DF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49DF60u, 0x49E5C0u, 0x49E5C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49E5C8u;
label_49e5c8:
    // 0x49e5c8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x49e5c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_49e5cc:
    // 0x49e5cc: 0x10e00019  beqz        $a3, . + 4 + (0x19 << 2)
label_49e5d0:
    if (ctx->pc == 0x49E5D0u) {
        ctx->pc = 0x49E5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E5CCu;
        // 0x49e5d0: 0xe0882d  daddu       $s1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49E5D4u;
        goto label_49e5d4;
    }
    ctx->pc = 0x49E5CCu;
    {
        const bool branch_taken_0x49e5cc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x49E5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E5CCu;
        // 0x49e5d0: 0xe0882d  daddu       $s1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e5cc) {
            ctx->pc = 0x49E634u;
            goto label_49e634;
        }
    }
    ctx->pc = 0x49E5D4u;
label_49e5d4:
    // 0x49e5d4: 0x8ce20014  lw          $v0, 0x14($a3)
    ctx->pc = 0x49e5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
label_49e5d8:
    // 0x49e5d8: 0xacf00018  sw          $s0, 0x18($a3)
    ctx->pc = 0x49e5d8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 16));
label_49e5dc:
    // 0x49e5dc: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x49e5dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_49e5e0:
    // 0x49e5e0: 0x10000024  b           . + 4 + (0x24 << 2)
label_49e5e4:
    if (ctx->pc == 0x49E5E4u) {
        ctx->pc = 0x49E5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E5E0u;
        // 0x49e5e4: 0xace20014  sw          $v0, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49E5E8u;
        goto label_49e5e8;
    }
    ctx->pc = 0x49E5E0u;
    {
        const bool branch_taken_0x49e5e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49E5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E5E0u;
        // 0x49e5e4: 0xace20014  sw          $v0, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e5e0) {
            ctx->pc = 0x49E674u;
            goto label_49e674;
        }
    }
    ctx->pc = 0x49E5E8u;
label_49e5e8:
    // 0x49e5e8: 0x5482001c  bnel        $a0, $v0, . + 4 + (0x1C << 2)
label_49e5ec:
    if (ctx->pc == 0x49E5ECu) {
        ctx->pc = 0x49E5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E5E8u;
        // 0x49e5ec: 0x8e45000c  lw          $a1, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49E5F0u;
        goto label_49e5f0;
    }
    ctx->pc = 0x49E5E8u;
    {
        const bool branch_taken_0x49e5e8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x49e5e8) {
            ctx->pc = 0x49E5ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49E5E8u;
            // 0x49e5ec: 0x8e45000c  lw          $a1, 0xC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x49E65Cu;
            goto label_49e65c;
        }
    }
    ctx->pc = 0x49E5F0u;
label_49e5f0:
    // 0x49e5f0: 0x8e450014  lw          $a1, 0x14($s2)
    ctx->pc = 0x49e5f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_49e5f4:
    // 0x49e5f4: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
label_49e5f8:
    if (ctx->pc == 0x49E5F8u) {
        ctx->pc = 0x49E5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E5F4u;
        // 0x49e5f8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49E5FCu;
        goto label_49e5fc;
    }
    ctx->pc = 0x49E5F4u;
    {
        const bool branch_taken_0x49e5f4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x49E5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E5F4u;
        // 0x49e5f8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e5f4) {
            ctx->pc = 0x49E608u;
            goto label_49e608;
        }
    }
    ctx->pc = 0x49E5FCu;
label_49e5fc:
    // 0x49e5fc: 0xc127c22  jal         func_49F088
label_49e600:
    if (ctx->pc == 0x49E600u) {
        ctx->pc = 0x49E600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E5FCu;
        // 0x49e600: 0x26e48330  addiu       $a0, $s7, -0x7CD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294935344));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49E604u;
        goto label_49e604;
    }
    ctx->pc = 0x49E5FCu;
    SET_GPR_U32(ctx, 31, 0x49E604u);
    ctx->pc = 0x49E600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49E5FCu;
    // 0x49e600: 0x26e48330  addiu       $a0, $s7, -0x7CD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294935344));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49F088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F088u, 0x49E5FCu, 0x49E604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49E604u;
label_49e604:
    // 0x49e604: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x49e604u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_49e608:
    // 0x49e608: 0x8e440018  lw          $a0, 0x18($s2)
    ctx->pc = 0x49e608u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_49e60c:
    // 0x49e60c: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
label_49e610:
    if (ctx->pc == 0x49E610u) {
        ctx->pc = 0x49E610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E60Cu;
        // 0x49e610: 0x8e48001c  lw          $t0, 0x1C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49E614u;
        goto label_49e614;
    }
    ctx->pc = 0x49E60Cu;
    {
        const bool branch_taken_0x49e60c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x49E610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E60Cu;
        // 0x49e610: 0x8e48001c  lw          $t0, 0x1C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e60c) {
            ctx->pc = 0x49E63Cu;
            goto label_49e63c;
        }
    }
    ctx->pc = 0x49E614u;
label_49e614:
    // 0x49e614: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x49e614u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_49e618:
    // 0x49e618: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x49e618u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_49e61c:
    // 0x49e61c: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x49e61cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_49e620:
    // 0x49e620: 0xc1277d8  jal         func_49DF60
label_49e624:
    if (ctx->pc == 0x49E624u) {
        ctx->pc = 0x49E624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E620u;
        // 0x49e624: 0x24041000  addiu       $a0, $zero, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49E628u;
        goto label_49e628;
    }
    ctx->pc = 0x49E620u;
    SET_GPR_U32(ctx, 31, 0x49E628u);
    ctx->pc = 0x49E624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49E620u;
    // 0x49e624: 0x24041000  addiu       $a0, $zero, 0x1000 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49DF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49DF60u, 0x49E620u, 0x49E628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49E628u;
label_49e628:
    // 0x49e628: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x49e628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_49e62c:
    // 0x49e62c: 0x54800009  bnel        $a0, $zero, . + 4 + (0x9 << 2)
label_49e630:
    if (ctx->pc == 0x49E630u) {
        ctx->pc = 0x49E630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E62Cu;
        // 0x49e630: 0xac900018  sw          $s0, 0x18($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49E634u;
        goto label_49e634;
    }
    ctx->pc = 0x49E62Cu;
    {
        const bool branch_taken_0x49e62c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x49e62c) {
            ctx->pc = 0x49E630u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49E62Cu;
            // 0x49e630: 0xac900018  sw          $s0, 0x18($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x49E654u;
            goto label_49e654;
        }
    }
    ctx->pc = 0x49E634u;
label_49e634:
    // 0x49e634: 0x1000000f  b           . + 4 + (0xF << 2)
label_49e638:
    if (ctx->pc == 0x49E638u) {
        ctx->pc = 0x49E638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E634u;
        // 0x49e638: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49E63Cu;
        goto label_49e63c;
    }
    ctx->pc = 0x49E634u;
    {
        const bool branch_taken_0x49e634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49E638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E634u;
        // 0x49e638: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e634) {
            ctx->pc = 0x49E674u;
            goto label_49e674;
        }
    }
    ctx->pc = 0x49E63Cu;
label_49e63c:
    // 0x49e63c: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x49e63cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_49e640:
    // 0x49e640: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x49e640u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_49e644:
    // 0x49e644: 0x24041000  addiu       $a0, $zero, 0x1000
    ctx->pc = 0x49e644u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
label_49e648:
    // 0x49e648: 0xc1277d8  jal         func_49DF60
label_49e64c:
    if (ctx->pc == 0x49E64Cu) {
        ctx->pc = 0x49E64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E648u;
        // 0x49e64c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49E650u;
        goto label_49e650;
    }
    ctx->pc = 0x49E648u;
    SET_GPR_U32(ctx, 31, 0x49E650u);
    ctx->pc = 0x49E64Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49E648u;
    // 0x49e64c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49DF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49DF60u, 0x49E648u, 0x49E650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49E650u;
label_49e650:
    // 0x49e650: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x49e650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_49e654:
    // 0x49e654: 0x10000007  b           . + 4 + (0x7 << 2)
label_49e658:
    if (ctx->pc == 0x49E658u) {
        ctx->pc = 0x49E658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E654u;
        // 0x49e658: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49E65Cu;
        goto label_49e65c;
    }
    ctx->pc = 0x49E654u;
    {
        const bool branch_taken_0x49e654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49E658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E654u;
        // 0x49e658: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e654) {
            ctx->pc = 0x49E674u;
            goto label_49e674;
        }
    }
    ctx->pc = 0x49E65Cu;
label_49e65c:
    // 0x49e65c: 0x8e460008  lw          $a2, 0x8($s2)
    ctx->pc = 0x49e65cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_49e660:
    // 0x49e660: 0x8e470018  lw          $a3, 0x18($s2)
    ctx->pc = 0x49e660u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_49e664:
    // 0x49e664: 0x8e48001c  lw          $t0, 0x1C($s2)
    ctx->pc = 0x49e664u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_49e668:
    // 0x49e668: 0xc1277d8  jal         func_49DF60
label_49e66c:
    if (ctx->pc == 0x49E66Cu) {
        ctx->pc = 0x49E66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E668u;
        // 0x49e66c: 0xa63021  addu        $a2, $a1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49E670u;
        goto label_49e670;
    }
    ctx->pc = 0x49E668u;
    SET_GPR_U32(ctx, 31, 0x49E670u);
    ctx->pc = 0x49E66Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49E668u;
    // 0x49e66c: 0xa63021  addu        $a2, $a1, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49DF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49DF60u, 0x49E668u, 0x49E670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49E670u;
label_49e670:
    // 0x49e670: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x49e670u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_49e674:
    // 0x49e674: 0x56200011  bnel        $s1, $zero, . + 4 + (0x11 << 2)
label_49e678:
    if (ctx->pc == 0x49E678u) {
        ctx->pc = 0x49E678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E674u;
        // 0x49e678: 0x8e450010  lw          $a1, 0x10($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49E67Cu;
        goto label_49e67c;
    }
    ctx->pc = 0x49E674u;
    {
        const bool branch_taken_0x49e674 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x49e674) {
            ctx->pc = 0x49E678u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49E674u;
            // 0x49e678: 0x8e450010  lw          $a1, 0x10($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x49E6BCu;
            goto label_49e6bc;
        }
    }
    ctx->pc = 0x49E67Cu;
label_49e67c:
    // 0x49e67c: 0x1280000d  beqz        $s4, . + 4 + (0xD << 2)
label_49e680:
    if (ctx->pc == 0x49E680u) {
        ctx->pc = 0x49E680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E67Cu;
        // 0x49e680: 0x280882d  daddu       $s1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49E684u;
        goto label_49e684;
    }
    ctx->pc = 0x49E67Cu;
    {
        const bool branch_taken_0x49e67c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x49E680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E67Cu;
        // 0x49e680: 0x280882d  daddu       $s1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e67c) {
            ctx->pc = 0x49E6B4u;
            goto label_49e6b4;
        }
    }
    ctx->pc = 0x49E684u;
label_49e684:
    // 0x49e684: 0x3d58021  addu        $s0, $fp, $s5
    ctx->pc = 0x49e684u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 21)));
label_49e688:
    // 0x49e688: 0x3c120066  lui         $s2, 0x66
    ctx->pc = 0x49e688u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)102 << 16));
label_49e68c:
    // 0x49e68c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x49e68cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_49e690:
    // 0x49e690: 0x26448330  addiu       $a0, $s2, -0x7CD0
    ctx->pc = 0x49e690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294935344));
label_49e694:
    // 0x49e694: 0x2610ffe0  addiu       $s0, $s0, -0x20
    ctx->pc = 0x49e694u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967264));
label_49e698:
    // 0x49e698: 0xc127c22  jal         func_49F088
label_49e69c:
    if (ctx->pc == 0x49E69Cu) {
        ctx->pc = 0x49E69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E698u;
        // 0x49e69c: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49E6A0u;
        goto label_49e6a0;
    }
    ctx->pc = 0x49E698u;
    SET_GPR_U32(ctx, 31, 0x49E6A0u);
    ctx->pc = 0x49E69Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49E698u;
    // 0x49e69c: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49F088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F088u, 0x49E698u, 0x49E6A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49E6A0u;
label_49e6a0:
    // 0x49e6a0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x49e6a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_49e6a4:
    // 0x49e6a4: 0xc127862  jal         func_49E188
label_49e6a8:
    if (ctx->pc == 0x49E6A8u) {
        ctx->pc = 0x49E6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E6A4u;
        // 0x49e6a8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49E6ACu;
        goto label_49e6ac;
    }
    ctx->pc = 0x49E6A4u;
    SET_GPR_U32(ctx, 31, 0x49E6ACu);
    ctx->pc = 0x49E6A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49E6A4u;
    // 0x49e6a8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49E188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49E188u, 0x49E6A4u, 0x49E6ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49E6ACu;
label_49e6ac:
    // 0x49e6ac: 0x5620fff8  bnel        $s1, $zero, . + 4 + (-0x8 << 2)
label_49e6b0:
    if (ctx->pc == 0x49E6B0u) {
        ctx->pc = 0x49E6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E6ACu;
        // 0x49e6b0: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49E6B4u;
        goto label_49e6b4;
    }
    ctx->pc = 0x49E6ACu;
    {
        const bool branch_taken_0x49e6ac = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x49e6ac) {
            ctx->pc = 0x49E6B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49E6ACu;
            // 0x49e6b0: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x49E690u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49e690;
        }
    }
    ctx->pc = 0x49E6B4u;
label_49e6b4:
    // 0x49e6b4: 0x1000000c  b           . + 4 + (0xC << 2)
label_49e6b8:
    if (ctx->pc == 0x49E6B8u) {
        ctx->pc = 0x49E6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E6B4u;
        // 0x49e6b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49E6BCu;
        goto label_49e6bc;
    }
    ctx->pc = 0x49E6B4u;
    {
        const bool branch_taken_0x49e6b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49E6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E6B4u;
        // 0x49e6b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e6b4) {
            ctx->pc = 0x49E6E8u;
            goto label_49e6e8;
        }
    }
    ctx->pc = 0x49E6BCu;
label_49e6bc:
    // 0x49e6bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x49e6bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_49e6c0:
    // 0x49e6c0: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x49e6c0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_49e6c4:
    // 0x49e6c4: 0xc12a47e  jal         func_4A91F8
label_49e6c8:
    if (ctx->pc == 0x49E6C8u) {
        ctx->pc = 0x49E6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E6C4u;
        // 0x49e6c8: 0x27de0020  addiu       $fp, $fp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49E6CCu;
        goto label_49e6cc;
    }
    ctx->pc = 0x49E6C4u;
    SET_GPR_U32(ctx, 31, 0x49E6CCu);
    ctx->pc = 0x49E6C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49E6C4u;
    // 0x49e6c8: 0x27de0020  addiu       $fp, $fp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A91F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A91F8u, 0x49E6C4u, 0x49E6CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49E6CCu;
label_49e6cc:
    // 0x49e6cc: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x49e6ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_49e6d0:
    // 0x49e6d0: 0xc12a448  jal         func_4A9120
label_49e6d4:
    if (ctx->pc == 0x49E6D4u) {
        ctx->pc = 0x49E6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E6D0u;
        // 0x49e6d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49E6D8u;
        goto label_49e6d8;
    }
    ctx->pc = 0x49E6D0u;
    SET_GPR_U32(ctx, 31, 0x49E6D8u);
    ctx->pc = 0x49E6D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49E6D0u;
    // 0x49e6d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9120u, 0x49E6D0u, 0x49E6D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49E6D8u;
label_49e6d8:
    // 0x49e6d8: 0x296182b  sltu        $v1, $s4, $s6
    ctx->pc = 0x49e6d8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
label_49e6dc:
    // 0x49e6dc: 0x1460ff76  bnez        $v1, . + 4 + (-0x8A << 2)
label_49e6e0:
    if (ctx->pc == 0x49E6E0u) {
        ctx->pc = 0x49E6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E6DCu;
        // 0x49e6e0: 0x141140  sll         $v0, $s4, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49E6E4u;
        goto label_49e6e4;
    }
    ctx->pc = 0x49E6DCu;
    {
        const bool branch_taken_0x49e6dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x49E6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E6DCu;
        // 0x49e6e0: 0x141140  sll         $v0, $s4, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e6dc) {
            ctx->pc = 0x49E4B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49e4b8;
        }
    }
    ctx->pc = 0x49E6E4u;
label_49e6e4:
    // 0x49e6e4: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x49e6e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_49e6e8:
    // 0x49e6e8: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x49e6e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_49e6ec:
    // 0x49e6ec: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x49e6ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_49e6f0:
    // 0x49e6f0: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x49e6f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_49e6f4:
    // 0x49e6f4: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x49e6f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_49e6f8:
    // 0x49e6f8: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x49e6f8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_49e6fc:
    // 0x49e6fc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x49e6fcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_49e700:
    // 0x49e700: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x49e700u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_49e704:
    // 0x49e704: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x49e704u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_49e708:
    // 0x49e708: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x49e708u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_49e70c:
    // 0x49e70c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x49e70cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_49e710:
    // 0x49e710: 0x3e00008  jr          $ra
label_49e714:
    if (ctx->pc == 0x49E714u) {
        ctx->pc = 0x49E714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E710u;
        // 0x49e714: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49E718u;
        goto label_49e718;
    }
    ctx->pc = 0x49E710u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49E714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E710u;
        // 0x49e714: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49E710u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49E718u;
label_49e718:
    // 0x49e718: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x49e718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_49e71c:
    // 0x49e71c: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x49e71cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_49e720:
    // 0x49e720: 0x106200be  beq         $v1, $v0, . + 4 + (0xBE << 2)
label_49e724:
    if (ctx->pc == 0x49E724u) {
        ctx->pc = 0x49E724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E720u;
        // 0x49e724: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49E728u;
        goto label_49e728;
    }
    ctx->pc = 0x49E720u;
    {
        const bool branch_taken_0x49e720 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x49E724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E720u;
        // 0x49e724: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e720) {
            ctx->pc = 0x49EA1Cu;
            goto label_49ea1c;
        }
    }
    ctx->pc = 0x49E728u;
label_49e728:
    // 0x49e728: 0x2c620041  sltiu       $v0, $v1, 0x41
    ctx->pc = 0x49e728u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)65) ? 1 : 0);
label_49e72c:
    // 0x49e72c: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_49e730:
    if (ctx->pc == 0x49E730u) {
        ctx->pc = 0x49E730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E72Cu;
        // 0x49e730: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49E734u;
        goto label_49e734;
    }
    ctx->pc = 0x49E72Cu;
    {
        const bool branch_taken_0x49e72c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49E730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E72Cu;
        // 0x49e730: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e72c) {
            ctx->pc = 0x49E794u;
            goto label_49e794;
        }
    }
    ctx->pc = 0x49E734u;
label_49e734:
    // 0x49e734: 0x10620050  beq         $v1, $v0, . + 4 + (0x50 << 2)
label_49e738:
    if (ctx->pc == 0x49E738u) {
        ctx->pc = 0x49E738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E734u;
        // 0x49e738: 0x2c620005  sltiu       $v0, $v1, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x49E73Cu;
        goto label_49e73c;
    }
    ctx->pc = 0x49E734u;
    {
        const bool branch_taken_0x49e734 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x49E738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E734u;
        // 0x49e738: 0x2c620005  sltiu       $v0, $v1, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e734) {
            ctx->pc = 0x49E878u;
            goto label_49e878;
        }
    }
    ctx->pc = 0x49E73Cu;
label_49e73c:
    // 0x49e73c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_49e740:
    if (ctx->pc == 0x49E740u) {
        ctx->pc = 0x49E740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E73Cu;
        // 0x49e740: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49E744u;
        goto label_49e744;
    }
    ctx->pc = 0x49E73Cu;
    {
        const bool branch_taken_0x49e73c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49E740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E73Cu;
        // 0x49e740: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e73c) {
            ctx->pc = 0x49E75Cu;
            goto label_49e75c;
        }
    }
    ctx->pc = 0x49E744u;
label_49e744:
    // 0x49e744: 0x10620022  beq         $v1, $v0, . + 4 + (0x22 << 2)
label_49e748:
    if (ctx->pc == 0x49E748u) {
        ctx->pc = 0x49E748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E744u;
        // 0x49e748: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49E74Cu;
        goto label_49e74c;
    }
    ctx->pc = 0x49E744u;
    {
        const bool branch_taken_0x49e744 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x49E748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E744u;
        // 0x49e748: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e744) {
            ctx->pc = 0x49E7D0u;
            goto label_49e7d0;
        }
    }
    ctx->pc = 0x49E74Cu;
label_49e74c:
    // 0x49e74c: 0x10620035  beq         $v1, $v0, . + 4 + (0x35 << 2)
label_49e750:
    if (ctx->pc == 0x49E750u) {
        ctx->pc = 0x49E750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E74Cu;
        // 0x49e750: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49E754u;
        goto label_49e754;
    }
    ctx->pc = 0x49E74Cu;
    {
        const bool branch_taken_0x49e74c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x49E750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E74Cu;
        // 0x49e750: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e74c) {
            ctx->pc = 0x49E824u;
            goto label_49e824;
        }
    }
    ctx->pc = 0x49E754u;
label_49e754:
    // 0x49e754: 0x100000b2  b           . + 4 + (0xB2 << 2)
label_49e758:
    if (ctx->pc == 0x49E758u) {
        ctx->pc = 0x49E75Cu;
        goto label_49e75c;
    }
    ctx->pc = 0x49E754u;
    {
        const bool branch_taken_0x49e754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x49e754) {
            ctx->pc = 0x49EA20u;
            goto label_49ea20;
        }
    }
    ctx->pc = 0x49E75Cu;
label_49e75c:
    // 0x49e75c: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x49e75cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_49e760:
    // 0x49e760: 0x1062006f  beq         $v1, $v0, . + 4 + (0x6F << 2)
label_49e764:
    if (ctx->pc == 0x49E764u) {
        ctx->pc = 0x49E764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E760u;
        // 0x49e764: 0x2c620011  sltiu       $v0, $v1, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x49E768u;
        goto label_49e768;
    }
    ctx->pc = 0x49E760u;
    {
        const bool branch_taken_0x49e760 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x49E764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E760u;
        // 0x49e764: 0x2c620011  sltiu       $v0, $v1, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e760) {
            ctx->pc = 0x49E920u;
            goto label_49e920;
        }
    }
    ctx->pc = 0x49E768u;
label_49e768:
    // 0x49e768: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_49e76c:
    if (ctx->pc == 0x49E76Cu) {
        ctx->pc = 0x49E76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E768u;
        // 0x49e76c: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49E770u;
        goto label_49e770;
    }
    ctx->pc = 0x49E768u;
    {
        const bool branch_taken_0x49e768 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49E76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E768u;
        // 0x49e76c: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e768) {
            ctx->pc = 0x49E780u;
            goto label_49e780;
        }
    }
    ctx->pc = 0x49E770u;
label_49e770:
    // 0x49e770: 0x10620056  beq         $v1, $v0, . + 4 + (0x56 << 2)
label_49e774:
    if (ctx->pc == 0x49E774u) {
        ctx->pc = 0x49E774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E770u;
        // 0x49e774: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49E778u;
        goto label_49e778;
    }
    ctx->pc = 0x49E770u;
    {
        const bool branch_taken_0x49e770 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x49E774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E770u;
        // 0x49e774: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e770) {
            ctx->pc = 0x49E8CCu;
            goto label_49e8cc;
        }
    }
    ctx->pc = 0x49E778u;
label_49e778:
    // 0x49e778: 0x100000a9  b           . + 4 + (0xA9 << 2)
label_49e77c:
    if (ctx->pc == 0x49E77Cu) {
        ctx->pc = 0x49E780u;
        goto label_49e780;
    }
    ctx->pc = 0x49E778u;
    {
        const bool branch_taken_0x49e778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x49e778) {
            ctx->pc = 0x49EA20u;
            goto label_49ea20;
        }
    }
    ctx->pc = 0x49E780u;
label_49e780:
    // 0x49e780: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x49e780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_49e784:
    // 0x49e784: 0x1062007b  beq         $v1, $v0, . + 4 + (0x7B << 2)
label_49e788:
    if (ctx->pc == 0x49E788u) {
        ctx->pc = 0x49E788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E784u;
        // 0x49e788: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49E78Cu;
        goto label_49e78c;
    }
    ctx->pc = 0x49E784u;
    {
        const bool branch_taken_0x49e784 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x49E788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E784u;
        // 0x49e788: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e784) {
            ctx->pc = 0x49E974u;
            goto label_49e974;
        }
    }
    ctx->pc = 0x49E78Cu;
label_49e78c:
    // 0x49e78c: 0x100000a4  b           . + 4 + (0xA4 << 2)
label_49e790:
    if (ctx->pc == 0x49E790u) {
        ctx->pc = 0x49E794u;
        goto label_49e794;
    }
    ctx->pc = 0x49E78Cu;
    {
        const bool branch_taken_0x49e78c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x49e78c) {
            ctx->pc = 0x49EA20u;
            goto label_49ea20;
        }
    }
    ctx->pc = 0x49E794u;
label_49e794:
    // 0x49e794: 0x24020200  addiu       $v0, $zero, 0x200
    ctx->pc = 0x49e794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_49e798:
    // 0x49e798: 0x106200a0  beq         $v1, $v0, . + 4 + (0xA0 << 2)
label_49e79c:
    if (ctx->pc == 0x49E79Cu) {
        ctx->pc = 0x49E79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E798u;
        // 0x49e79c: 0x2c620201  sltiu       $v0, $v1, 0x201 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)513) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x49E7A0u;
        goto label_49e7a0;
    }
    ctx->pc = 0x49E798u;
    {
        const bool branch_taken_0x49e798 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x49E79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E798u;
        // 0x49e79c: 0x2c620201  sltiu       $v0, $v1, 0x201 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)513) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e798) {
            ctx->pc = 0x49EA1Cu;
            goto label_49ea1c;
        }
    }
    ctx->pc = 0x49E7A0u;
label_49e7a0:
    // 0x49e7a0: 0x1440009f  bnez        $v0, . + 4 + (0x9F << 2)
label_49e7a4:
    if (ctx->pc == 0x49E7A4u) {
        ctx->pc = 0x49E7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E7A0u;
        // 0x49e7a4: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49E7A8u;
        goto label_49e7a8;
    }
    ctx->pc = 0x49E7A0u;
    {
        const bool branch_taken_0x49e7a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x49E7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E7A0u;
        // 0x49e7a4: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e7a0) {
            ctx->pc = 0x49EA20u;
            goto label_49ea20;
        }
    }
    ctx->pc = 0x49E7A8u;
label_49e7a8:
    // 0x49e7a8: 0x24020800  addiu       $v0, $zero, 0x800
    ctx->pc = 0x49e7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
label_49e7ac:
    // 0x49e7ac: 0x50620086  beql        $v1, $v0, . + 4 + (0x86 << 2)
label_49e7b0:
    if (ctx->pc == 0x49E7B0u) {
        ctx->pc = 0x49E7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E7ACu;
        // 0x49e7b0: 0x8c82000c  lw          $v0, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49E7B4u;
        goto label_49e7b4;
    }
    ctx->pc = 0x49E7ACu;
    {
        const bool branch_taken_0x49e7ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x49e7ac) {
            ctx->pc = 0x49E7B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49E7ACu;
            // 0x49e7b0: 0x8c82000c  lw          $v0, 0xC($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x49E9C8u;
            goto label_49e9c8;
        }
    }
    ctx->pc = 0x49E7B4u;
label_49e7b4:
    // 0x49e7b4: 0x2c620801  sltiu       $v0, $v1, 0x801
    ctx->pc = 0x49e7b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2049) ? 1 : 0);
label_49e7b8:
    // 0x49e7b8: 0x10400098  beqz        $v0, . + 4 + (0x98 << 2)
label_49e7bc:
    if (ctx->pc == 0x49E7BCu) {
        ctx->pc = 0x49E7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E7B8u;
        // 0x49e7bc: 0x24020400  addiu       $v0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49E7C0u;
        goto label_49e7c0;
    }
    ctx->pc = 0x49E7B8u;
    {
        const bool branch_taken_0x49e7b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49E7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E7B8u;
        // 0x49e7bc: 0x24020400  addiu       $v0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e7b8) {
            ctx->pc = 0x49EA1Cu;
            goto label_49ea1c;
        }
    }
    ctx->pc = 0x49E7C0u;
label_49e7c0:
    // 0x49e7c0: 0x50620081  beql        $v1, $v0, . + 4 + (0x81 << 2)
label_49e7c4:
    if (ctx->pc == 0x49E7C4u) {
        ctx->pc = 0x49E7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E7C0u;
        // 0x49e7c4: 0x8c82000c  lw          $v0, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49E7C8u;
        goto label_49e7c8;
    }
    ctx->pc = 0x49E7C0u;
    {
        const bool branch_taken_0x49e7c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x49e7c0) {
            ctx->pc = 0x49E7C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49E7C0u;
            // 0x49e7c4: 0x8c82000c  lw          $v0, 0xC($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x49E9C8u;
            goto label_49e9c8;
        }
    }
    ctx->pc = 0x49E7C8u;
label_49e7c8:
    // 0x49e7c8: 0x3e00008  jr          $ra
label_49e7cc:
    if (ctx->pc == 0x49E7CCu) {
        ctx->pc = 0x49E7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E7C8u;
        // 0x49e7cc: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49E7D0u;
        goto label_49e7d0;
    }
    ctx->pc = 0x49E7C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49E7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E7C8u;
        // 0x49e7cc: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49E7C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49E7D0u;
label_49e7d0:
    // 0x49e7d0: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x49e7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_49e7d4:
    // 0x49e7d4: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
label_49e7d8:
    if (ctx->pc == 0x49E7D8u) {
        ctx->pc = 0x49E7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E7D4u;
        // 0x49e7d8: 0x8c820010  lw          $v0, 0x10($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49E7DCu;
        goto label_49e7dc;
    }
    ctx->pc = 0x49E7D4u;
    {
        const bool branch_taken_0x49e7d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x49e7d4) {
            ctx->pc = 0x49E7D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49E7D4u;
            // 0x49e7d8: 0x8c820010  lw          $v0, 0x10($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x49E800u;
            goto label_49e800;
        }
    }
    ctx->pc = 0x49E7DCu;
label_49e7dc:
    // 0x49e7dc: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x49e7dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_49e7e0:
    // 0x49e7e0: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x49e7e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_49e7e4:
    // 0x49e7e4: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x49e7e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_49e7e8:
    // 0x49e7e8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_49e7ec:
    if (ctx->pc == 0x49E7ECu) {
        ctx->pc = 0x49E7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E7E8u;
        // 0x49e7ec: 0x8c820010  lw          $v0, 0x10($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49E7F0u;
        goto label_49e7f0;
    }
    ctx->pc = 0x49E7E8u;
    {
        const bool branch_taken_0x49e7e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x49e7e8) {
            ctx->pc = 0x49E7ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49E7E8u;
            // 0x49e7ec: 0x8c820010  lw          $v0, 0x10($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x49E800u;
            goto label_49e800;
        }
    }
    ctx->pc = 0x49E7F0u;
label_49e7f0:
    // 0x49e7f0: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x49e7f0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
label_49e7f4:
    // 0x49e7f4: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x49e7f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_49e7f8:
    // 0x49e7f8: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x49e7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_49e7fc:
    // 0x49e7fc: 0x0  nop
    ctx->pc = 0x49e7fcu;
    // NOP
label_49e800:
    // 0x49e800: 0x50400087  beql        $v0, $zero, . + 4 + (0x87 << 2)
label_49e804:
    if (ctx->pc == 0x49E804u) {
        ctx->pc = 0x49E804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E800u;
        // 0x49e804: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49E808u;
        goto label_49e808;
    }
    ctx->pc = 0x49E800u;
    {
        const bool branch_taken_0x49e800 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x49e800) {
            ctx->pc = 0x49E804u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49E800u;
            // 0x49e804: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x49EA20u;
            goto label_49ea20;
        }
    }
    ctx->pc = 0x49E808u;
label_49e808:
    // 0x49e808: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x49e808u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_49e80c:
    // 0x49e80c: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x49e80cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_49e810:
    // 0x49e810: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x49e810u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_49e814:
    // 0x49e814: 0x10400082  beqz        $v0, . + 4 + (0x82 << 2)
label_49e818:
    if (ctx->pc == 0x49E818u) {
        ctx->pc = 0x49E818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E814u;
        // 0x49e818: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49E81Cu;
        goto label_49e81c;
    }
    ctx->pc = 0x49E814u;
    {
        const bool branch_taken_0x49e814 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49E818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E814u;
        // 0x49e818: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e814) {
            ctx->pc = 0x49EA20u;
            goto label_49ea20;
        }
    }
    ctx->pc = 0x49E81Cu;
label_49e81c:
    // 0x49e81c: 0x1000007e  b           . + 4 + (0x7E << 2)
label_49e820:
    if (ctx->pc == 0x49E820u) {
        ctx->pc = 0x49E820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E81Cu;
        // 0x49e820: 0xa0a30000  sb          $v1, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49E824u;
        goto label_49e824;
    }
    ctx->pc = 0x49E81Cu;
    {
        const bool branch_taken_0x49e81c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49E820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E81Cu;
        // 0x49e820: 0xa0a30000  sb          $v1, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e81c) {
            ctx->pc = 0x49EA18u;
            goto label_49ea18;
        }
    }
    ctx->pc = 0x49E824u;
label_49e824:
    // 0x49e824: 0x8c86000c  lw          $a2, 0xC($a0)
    ctx->pc = 0x49e824u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_49e828:
    // 0x49e828: 0x50c0000a  beql        $a2, $zero, . + 4 + (0xA << 2)
label_49e82c:
    if (ctx->pc == 0x49E82Cu) {
        ctx->pc = 0x49E82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E828u;
        // 0x49e82c: 0x8c860010  lw          $a2, 0x10($a0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49E830u;
        goto label_49e830;
    }
    ctx->pc = 0x49E828u;
    {
        const bool branch_taken_0x49e828 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x49e828) {
            ctx->pc = 0x49E82Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49E828u;
            // 0x49e82c: 0x8c860010  lw          $a2, 0x10($a0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x49E854u;
            goto label_49e854;
        }
    }
    ctx->pc = 0x49E830u;
label_49e830:
    // 0x49e830: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x49e830u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_49e834:
    // 0x49e834: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x49e834u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_49e838:
    // 0x49e838: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x49e838u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_49e83c:
    // 0x49e83c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_49e840:
    if (ctx->pc == 0x49E840u) {
        ctx->pc = 0x49E840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E83Cu;
        // 0x49e840: 0x90c60000  lbu         $a2, 0x0($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49E844u;
        goto label_49e844;
    }
    ctx->pc = 0x49E83Cu;
    {
        const bool branch_taken_0x49e83c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49E840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E83Cu;
        // 0x49e840: 0x90c60000  lbu         $a2, 0x0($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e83c) {
            ctx->pc = 0x49E850u;
            goto label_49e850;
        }
    }
    ctx->pc = 0x49E844u;
label_49e844:
    // 0x49e844: 0xa0a60000  sb          $a2, 0x0($a1)
    ctx->pc = 0x49e844u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 6));
label_49e848:
    // 0x49e848: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x49e848u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_49e84c:
    // 0x49e84c: 0x0  nop
    ctx->pc = 0x49e84cu;
    // NOP
label_49e850:
    // 0x49e850: 0x8c860010  lw          $a2, 0x10($a0)
    ctx->pc = 0x49e850u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_49e854:
    // 0x49e854: 0x10c00072  beqz        $a2, . + 4 + (0x72 << 2)
label_49e858:
    if (ctx->pc == 0x49E858u) {
        ctx->pc = 0x49E858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E854u;
        // 0x49e858: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49E85Cu;
        goto label_49e85c;
    }
    ctx->pc = 0x49E854u;
    {
        const bool branch_taken_0x49e854 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x49E858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E854u;
        // 0x49e858: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e854) {
            ctx->pc = 0x49EA20u;
            goto label_49ea20;
        }
    }
    ctx->pc = 0x49E85Cu;
label_49e85c:
    // 0x49e85c: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x49e85cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_49e860:
    // 0x49e860: 0x80a30000  lb          $v1, 0x0($a1)
    ctx->pc = 0x49e860u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_49e864:
    // 0x49e864: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x49e864u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_49e868:
    // 0x49e868: 0x1040006c  beqz        $v0, . + 4 + (0x6C << 2)
label_49e86c:
    if (ctx->pc == 0x49E86Cu) {
        ctx->pc = 0x49E86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E868u;
        // 0x49e86c: 0x90c60000  lbu         $a2, 0x0($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49E870u;
        goto label_49e870;
    }
    ctx->pc = 0x49E868u;
    {
        const bool branch_taken_0x49e868 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49E86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E868u;
        // 0x49e86c: 0x90c60000  lbu         $a2, 0x0($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e868) {
            ctx->pc = 0x49EA1Cu;
            goto label_49ea1c;
        }
    }
    ctx->pc = 0x49E870u;
label_49e870:
    // 0x49e870: 0x10000069  b           . + 4 + (0x69 << 2)
label_49e874:
    if (ctx->pc == 0x49E874u) {
        ctx->pc = 0x49E874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E870u;
        // 0x49e874: 0xa0a60000  sb          $a2, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49E878u;
        goto label_49e878;
    }
    ctx->pc = 0x49E870u;
    {
        const bool branch_taken_0x49e870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49E874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E870u;
        // 0x49e874: 0xa0a60000  sb          $a2, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e870) {
            ctx->pc = 0x49EA18u;
            goto label_49ea18;
        }
    }
    ctx->pc = 0x49E878u;
label_49e878:
    // 0x49e878: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x49e878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_49e87c:
    // 0x49e87c: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
label_49e880:
    if (ctx->pc == 0x49E880u) {
        ctx->pc = 0x49E880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E87Cu;
        // 0x49e880: 0x8c820010  lw          $v0, 0x10($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49E884u;
        goto label_49e884;
    }
    ctx->pc = 0x49E87Cu;
    {
        const bool branch_taken_0x49e87c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x49e87c) {
            ctx->pc = 0x49E880u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49E87Cu;
            // 0x49e880: 0x8c820010  lw          $v0, 0x10($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x49E8A8u;
            goto label_49e8a8;
        }
    }
    ctx->pc = 0x49E884u;
label_49e884:
    // 0x49e884: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x49e884u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_49e888:
    // 0x49e888: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x49e888u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_49e88c:
    // 0x49e88c: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x49e88cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_49e890:
    // 0x49e890: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_49e894:
    if (ctx->pc == 0x49E894u) {
        ctx->pc = 0x49E894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E890u;
        // 0x49e894: 0x8c820010  lw          $v0, 0x10($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49E898u;
        goto label_49e898;
    }
    ctx->pc = 0x49E890u;
    {
        const bool branch_taken_0x49e890 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x49e890) {
            ctx->pc = 0x49E894u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49E890u;
            // 0x49e894: 0x8c820010  lw          $v0, 0x10($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x49E8A8u;
            goto label_49e8a8;
        }
    }
    ctx->pc = 0x49E898u;
label_49e898:
    // 0x49e898: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x49e898u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
label_49e89c:
    // 0x49e89c: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x49e89cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_49e8a0:
    // 0x49e8a0: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x49e8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_49e8a4:
    // 0x49e8a4: 0x0  nop
    ctx->pc = 0x49e8a4u;
    // NOP
label_49e8a8:
    // 0x49e8a8: 0x5040005d  beql        $v0, $zero, . + 4 + (0x5D << 2)
label_49e8ac:
    if (ctx->pc == 0x49E8ACu) {
        ctx->pc = 0x49E8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E8A8u;
        // 0x49e8ac: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49E8B0u;
        goto label_49e8b0;
    }
    ctx->pc = 0x49E8A8u;
    {
        const bool branch_taken_0x49e8a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x49e8a8) {
            ctx->pc = 0x49E8ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49E8A8u;
            // 0x49e8ac: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x49EA20u;
            goto label_49ea20;
        }
    }
    ctx->pc = 0x49E8B0u;
label_49e8b0:
    // 0x49e8b0: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x49e8b0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_49e8b4:
    // 0x49e8b4: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x49e8b4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_49e8b8:
    // 0x49e8b8: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x49e8b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_49e8bc:
    // 0x49e8bc: 0x10400058  beqz        $v0, . + 4 + (0x58 << 2)
label_49e8c0:
    if (ctx->pc == 0x49E8C0u) {
        ctx->pc = 0x49E8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E8BCu;
        // 0x49e8c0: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49E8C4u;
        goto label_49e8c4;
    }
    ctx->pc = 0x49E8BCu;
    {
        const bool branch_taken_0x49e8bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49E8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E8BCu;
        // 0x49e8c0: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e8bc) {
            ctx->pc = 0x49EA20u;
            goto label_49ea20;
        }
    }
    ctx->pc = 0x49E8C4u;
label_49e8c4:
    // 0x49e8c4: 0x10000054  b           . + 4 + (0x54 << 2)
label_49e8c8:
    if (ctx->pc == 0x49E8C8u) {
        ctx->pc = 0x49E8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E8C4u;
        // 0x49e8c8: 0xa4a30000  sh          $v1, 0x0($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49E8CCu;
        goto label_49e8cc;
    }
    ctx->pc = 0x49E8C4u;
    {
        const bool branch_taken_0x49e8c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49E8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E8C4u;
        // 0x49e8c8: 0xa4a30000  sh          $v1, 0x0($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e8c4) {
            ctx->pc = 0x49EA18u;
            goto label_49ea18;
        }
    }
    ctx->pc = 0x49E8CCu;
label_49e8cc:
    // 0x49e8cc: 0x8c86000c  lw          $a2, 0xC($a0)
    ctx->pc = 0x49e8ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_49e8d0:
    // 0x49e8d0: 0x50c0000a  beql        $a2, $zero, . + 4 + (0xA << 2)
label_49e8d4:
    if (ctx->pc == 0x49E8D4u) {
        ctx->pc = 0x49E8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E8D0u;
        // 0x49e8d4: 0x8c860010  lw          $a2, 0x10($a0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49E8D8u;
        goto label_49e8d8;
    }
    ctx->pc = 0x49E8D0u;
    {
        const bool branch_taken_0x49e8d0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x49e8d0) {
            ctx->pc = 0x49E8D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49E8D0u;
            // 0x49e8d4: 0x8c860010  lw          $a2, 0x10($a0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x49E8FCu;
            goto label_49e8fc;
        }
    }
    ctx->pc = 0x49E8D8u;
label_49e8d8:
    // 0x49e8d8: 0x84c30000  lh          $v1, 0x0($a2)
    ctx->pc = 0x49e8d8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_49e8dc:
    // 0x49e8dc: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x49e8dcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_49e8e0:
    // 0x49e8e0: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x49e8e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_49e8e4:
    // 0x49e8e4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_49e8e8:
    if (ctx->pc == 0x49E8E8u) {
        ctx->pc = 0x49E8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E8E4u;
        // 0x49e8e8: 0x94c60000  lhu         $a2, 0x0($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49E8ECu;
        goto label_49e8ec;
    }
    ctx->pc = 0x49E8E4u;
    {
        const bool branch_taken_0x49e8e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49E8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E8E4u;
        // 0x49e8e8: 0x94c60000  lhu         $a2, 0x0($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e8e4) {
            ctx->pc = 0x49E8F8u;
            goto label_49e8f8;
        }
    }
    ctx->pc = 0x49E8ECu;
label_49e8ec:
    // 0x49e8ec: 0xa4a60000  sh          $a2, 0x0($a1)
    ctx->pc = 0x49e8ecu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 6));
label_49e8f0:
    // 0x49e8f0: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x49e8f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_49e8f4:
    // 0x49e8f4: 0x0  nop
    ctx->pc = 0x49e8f4u;
    // NOP
label_49e8f8:
    // 0x49e8f8: 0x8c860010  lw          $a2, 0x10($a0)
    ctx->pc = 0x49e8f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_49e8fc:
    // 0x49e8fc: 0x10c00048  beqz        $a2, . + 4 + (0x48 << 2)
label_49e900:
    if (ctx->pc == 0x49E900u) {
        ctx->pc = 0x49E900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E8FCu;
        // 0x49e900: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49E904u;
        goto label_49e904;
    }
    ctx->pc = 0x49E8FCu;
    {
        const bool branch_taken_0x49e8fc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x49E900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E8FCu;
        // 0x49e900: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e8fc) {
            ctx->pc = 0x49EA20u;
            goto label_49ea20;
        }
    }
    ctx->pc = 0x49E904u;
label_49e904:
    // 0x49e904: 0x84c20000  lh          $v0, 0x0($a2)
    ctx->pc = 0x49e904u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_49e908:
    // 0x49e908: 0x84a30000  lh          $v1, 0x0($a1)
    ctx->pc = 0x49e908u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_49e90c:
    // 0x49e90c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x49e90cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_49e910:
    // 0x49e910: 0x10400042  beqz        $v0, . + 4 + (0x42 << 2)
label_49e914:
    if (ctx->pc == 0x49E914u) {
        ctx->pc = 0x49E914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E910u;
        // 0x49e914: 0x94c60000  lhu         $a2, 0x0($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49E918u;
        goto label_49e918;
    }
    ctx->pc = 0x49E910u;
    {
        const bool branch_taken_0x49e910 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49E914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E910u;
        // 0x49e914: 0x94c60000  lhu         $a2, 0x0($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e910) {
            ctx->pc = 0x49EA1Cu;
            goto label_49ea1c;
        }
    }
    ctx->pc = 0x49E918u;
label_49e918:
    // 0x49e918: 0x1000003f  b           . + 4 + (0x3F << 2)
label_49e91c:
    if (ctx->pc == 0x49E91Cu) {
        ctx->pc = 0x49E91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E918u;
        // 0x49e91c: 0xa4a60000  sh          $a2, 0x0($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49E920u;
        goto label_49e920;
    }
    ctx->pc = 0x49E918u;
    {
        const bool branch_taken_0x49e918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49E91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E918u;
        // 0x49e91c: 0xa4a60000  sh          $a2, 0x0($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e918) {
            ctx->pc = 0x49EA18u;
            goto label_49ea18;
        }
    }
    ctx->pc = 0x49E920u;
label_49e920:
    // 0x49e920: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x49e920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_49e924:
    // 0x49e924: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
label_49e928:
    if (ctx->pc == 0x49E928u) {
        ctx->pc = 0x49E928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E924u;
        // 0x49e928: 0x8c820010  lw          $v0, 0x10($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49E92Cu;
        goto label_49e92c;
    }
    ctx->pc = 0x49E924u;
    {
        const bool branch_taken_0x49e924 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x49e924) {
            ctx->pc = 0x49E928u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49E924u;
            // 0x49e928: 0x8c820010  lw          $v0, 0x10($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x49E950u;
            goto label_49e950;
        }
    }
    ctx->pc = 0x49E92Cu;
label_49e92c:
    // 0x49e92c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x49e92cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_49e930:
    // 0x49e930: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x49e930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_49e934:
    // 0x49e934: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x49e934u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_49e938:
    // 0x49e938: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_49e93c:
    if (ctx->pc == 0x49E93Cu) {
        ctx->pc = 0x49E93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E938u;
        // 0x49e93c: 0x8c820010  lw          $v0, 0x10($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49E940u;
        goto label_49e940;
    }
    ctx->pc = 0x49E938u;
    {
        const bool branch_taken_0x49e938 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x49e938) {
            ctx->pc = 0x49E93Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49E938u;
            // 0x49e93c: 0x8c820010  lw          $v0, 0x10($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x49E950u;
            goto label_49e950;
        }
    }
    ctx->pc = 0x49E940u;
label_49e940:
    // 0x49e940: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x49e940u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_49e944:
    // 0x49e944: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x49e944u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_49e948:
    // 0x49e948: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x49e948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_49e94c:
    // 0x49e94c: 0x0  nop
    ctx->pc = 0x49e94cu;
    // NOP
label_49e950:
    // 0x49e950: 0x50400033  beql        $v0, $zero, . + 4 + (0x33 << 2)
label_49e954:
    if (ctx->pc == 0x49E954u) {
        ctx->pc = 0x49E954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E950u;
        // 0x49e954: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49E958u;
        goto label_49e958;
    }
    ctx->pc = 0x49E950u;
    {
        const bool branch_taken_0x49e950 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x49e950) {
            ctx->pc = 0x49E954u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49E950u;
            // 0x49e954: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x49EA20u;
            goto label_49ea20;
        }
    }
    ctx->pc = 0x49E958u;
label_49e958:
    // 0x49e958: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x49e958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_49e95c:
    // 0x49e95c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x49e95cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_49e960:
    // 0x49e960: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x49e960u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_49e964:
    // 0x49e964: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
label_49e968:
    if (ctx->pc == 0x49E968u) {
        ctx->pc = 0x49E968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E964u;
        // 0x49e968: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49E96Cu;
        goto label_49e96c;
    }
    ctx->pc = 0x49E964u;
    {
        const bool branch_taken_0x49e964 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49E968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E964u;
        // 0x49e968: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e964) {
            ctx->pc = 0x49EA20u;
            goto label_49ea20;
        }
    }
    ctx->pc = 0x49E96Cu;
label_49e96c:
    // 0x49e96c: 0x1000002a  b           . + 4 + (0x2A << 2)
label_49e970:
    if (ctx->pc == 0x49E970u) {
        ctx->pc = 0x49E970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E96Cu;
        // 0x49e970: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49E974u;
        goto label_49e974;
    }
    ctx->pc = 0x49E96Cu;
    {
        const bool branch_taken_0x49e96c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49E970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E96Cu;
        // 0x49e970: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e96c) {
            ctx->pc = 0x49EA18u;
            goto label_49ea18;
        }
    }
    ctx->pc = 0x49E974u;
label_49e974:
    // 0x49e974: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x49e974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_49e978:
    // 0x49e978: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_49e97c:
    if (ctx->pc == 0x49E97Cu) {
        ctx->pc = 0x49E97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E978u;
        // 0x49e97c: 0x8c820010  lw          $v0, 0x10($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49E980u;
        goto label_49e980;
    }
    ctx->pc = 0x49E978u;
    {
        const bool branch_taken_0x49e978 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x49e978) {
            ctx->pc = 0x49E97Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49E978u;
            // 0x49e97c: 0x8c820010  lw          $v0, 0x10($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x49E9A0u;
            goto label_49e9a0;
        }
    }
    ctx->pc = 0x49E980u;
label_49e980:
    // 0x49e980: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x49e980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_49e984:
    // 0x49e984: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x49e984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_49e988:
    // 0x49e988: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x49e988u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_49e98c:
    // 0x49e98c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_49e990:
    if (ctx->pc == 0x49E990u) {
        ctx->pc = 0x49E990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E98Cu;
        // 0x49e990: 0x8c820010  lw          $v0, 0x10($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49E994u;
        goto label_49e994;
    }
    ctx->pc = 0x49E98Cu;
    {
        const bool branch_taken_0x49e98c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x49e98c) {
            ctx->pc = 0x49E990u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49E98Cu;
            // 0x49e990: 0x8c820010  lw          $v0, 0x10($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x49E9A0u;
            goto label_49e9a0;
        }
    }
    ctx->pc = 0x49E994u;
label_49e994:
    // 0x49e994: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x49e994u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_49e998:
    // 0x49e998: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x49e998u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_49e99c:
    // 0x49e99c: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x49e99cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_49e9a0:
    // 0x49e9a0: 0x5040001f  beql        $v0, $zero, . + 4 + (0x1F << 2)
label_49e9a4:
    if (ctx->pc == 0x49E9A4u) {
        ctx->pc = 0x49E9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E9A0u;
        // 0x49e9a4: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49E9A8u;
        goto label_49e9a8;
    }
    ctx->pc = 0x49E9A0u;
    {
        const bool branch_taken_0x49e9a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x49e9a0) {
            ctx->pc = 0x49E9A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49E9A0u;
            // 0x49e9a4: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x49EA20u;
            goto label_49ea20;
        }
    }
    ctx->pc = 0x49E9A8u;
label_49e9a8:
    // 0x49e9a8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x49e9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_49e9ac:
    // 0x49e9ac: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x49e9acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_49e9b0:
    // 0x49e9b0: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x49e9b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_49e9b4:
    // 0x49e9b4: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_49e9b8:
    if (ctx->pc == 0x49E9B8u) {
        ctx->pc = 0x49E9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E9B4u;
        // 0x49e9b8: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49E9BCu;
        goto label_49e9bc;
    }
    ctx->pc = 0x49E9B4u;
    {
        const bool branch_taken_0x49e9b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49E9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E9B4u;
        // 0x49e9b8: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e9b4) {
            ctx->pc = 0x49EA20u;
            goto label_49ea20;
        }
    }
    ctx->pc = 0x49E9BCu;
label_49e9bc:
    // 0x49e9bc: 0x10000016  b           . + 4 + (0x16 << 2)
label_49e9c0:
    if (ctx->pc == 0x49E9C0u) {
        ctx->pc = 0x49E9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E9BCu;
        // 0x49e9c0: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49E9C4u;
        goto label_49e9c4;
    }
    ctx->pc = 0x49E9BCu;
    {
        const bool branch_taken_0x49e9bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49E9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E9BCu;
        // 0x49e9c0: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e9bc) {
            ctx->pc = 0x49EA18u;
            goto label_49ea18;
        }
    }
    ctx->pc = 0x49E9C4u;
label_49e9c4:
    // 0x49e9c4: 0x0  nop
    ctx->pc = 0x49e9c4u;
    // NOP
label_49e9c8:
    // 0x49e9c8: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
label_49e9cc:
    if (ctx->pc == 0x49E9CCu) {
        ctx->pc = 0x49E9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E9C8u;
        // 0x49e9cc: 0x8c820010  lw          $v0, 0x10($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49E9D0u;
        goto label_49e9d0;
    }
    ctx->pc = 0x49E9C8u;
    {
        const bool branch_taken_0x49e9c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x49e9c8) {
            ctx->pc = 0x49E9CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49E9C8u;
            // 0x49e9cc: 0x8c820010  lw          $v0, 0x10($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x49E9F4u;
            goto label_49e9f4;
        }
    }
    ctx->pc = 0x49E9D0u;
label_49e9d0:
    // 0x49e9d0: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x49e9d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_49e9d4:
    // 0x49e9d4: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x49e9d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_49e9d8:
    // 0x49e9d8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x49e9d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_49e9dc:
    // 0x49e9dc: 0x0  nop
    ctx->pc = 0x49e9dcu;
    // NOP
label_49e9e0:
    // 0x49e9e0: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
label_49e9e4:
    if (ctx->pc == 0x49E9E4u) {
        ctx->pc = 0x49E9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E9E0u;
        // 0x49e9e4: 0x8c820010  lw          $v0, 0x10($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49E9E8u;
        goto label_49e9e8;
    }
    ctx->pc = 0x49E9E0u;
    {
        const bool branch_taken_0x49e9e0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x49e9e0) {
            ctx->pc = 0x49E9E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49E9E0u;
            // 0x49e9e4: 0x8c820010  lw          $v0, 0x10($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x49E9F4u;
            goto label_49e9f4;
        }
    }
    ctx->pc = 0x49E9E8u;
label_49e9e8:
    // 0x49e9e8: 0xe4a10000  swc1        $f1, 0x0($a1)
    ctx->pc = 0x49e9e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_49e9ec:
    // 0x49e9ec: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x49e9ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_49e9f0:
    // 0x49e9f0: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x49e9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_49e9f4:
    // 0x49e9f4: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
label_49e9f8:
    if (ctx->pc == 0x49E9F8u) {
        ctx->pc = 0x49E9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E9F4u;
        // 0x49e9f8: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49E9FCu;
        goto label_49e9fc;
    }
    ctx->pc = 0x49E9F4u;
    {
        const bool branch_taken_0x49e9f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x49e9f4) {
            ctx->pc = 0x49E9F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49E9F4u;
            // 0x49e9f8: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x49EA20u;
            goto label_49ea20;
        }
    }
    ctx->pc = 0x49E9FCu;
label_49e9fc:
    // 0x49e9fc: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x49e9fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_49ea00:
    // 0x49ea00: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x49ea00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_49ea04:
    // 0x49ea04: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x49ea04u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_49ea08:
    // 0x49ea08: 0x0  nop
    ctx->pc = 0x49ea08u;
    // NOP
label_49ea0c:
    // 0x49ea0c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_49ea10:
    if (ctx->pc == 0x49EA10u) {
        ctx->pc = 0x49EA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49EA0Cu;
        // 0x49ea10: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49EA14u;
        goto label_49ea14;
    }
    ctx->pc = 0x49EA0Cu;
    {
        const bool branch_taken_0x49ea0c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x49EA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49EA0Cu;
        // 0x49ea10: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49ea0c) {
            ctx->pc = 0x49EA20u;
            goto label_49ea20;
        }
    }
    ctx->pc = 0x49EA14u;
label_49ea14:
    // 0x49ea14: 0xe4a10000  swc1        $f1, 0x0($a1)
    ctx->pc = 0x49ea14u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_49ea18:
    // 0x49ea18: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x49ea18u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_49ea1c:
    // 0x49ea1c: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x49ea1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_49ea20:
    // 0x49ea20: 0x3e00008  jr          $ra
label_49ea24:
    if (ctx->pc == 0x49EA24u) {
        ctx->pc = 0x49EA28u;
        goto label_49ea28;
    }
    ctx->pc = 0x49EA20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49EA20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49EA28u;
label_49ea28:
    // 0x49ea28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x49ea28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_49ea2c:
    // 0x49ea2c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x49ea2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_49ea30:
    // 0x49ea30: 0xc127d08  jal         func_49F420
label_49ea34:
    if (ctx->pc == 0x49EA34u) {
        ctx->pc = 0x49EA38u;
        goto label_49ea38;
    }
    ctx->pc = 0x49EA30u;
    SET_GPR_U32(ctx, 31, 0x49EA38u);
    ctx->pc = 0x49F420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F420u, 0x49EA30u, 0x49EA38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49EA38u;
label_49ea38:
    // 0x49ea38: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x49ea38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_49ea3c:
    // 0x49ea3c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x49ea3cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_49ea40:
    // 0x49ea40: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x49ea40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
label_49ea44:
    // 0x49ea44: 0x24445ae8  addiu       $a0, $v0, 0x5AE8
    ctx->pc = 0x49ea44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 23272));
label_49ea48:
    // 0x49ea48: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x49ea48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_49ea4c:
    // 0x49ea4c: 0x14450007  bne         $v0, $a1, . + 4 + (0x7 << 2)
label_49ea50:
    if (ctx->pc == 0x49EA50u) {
        ctx->pc = 0x49EA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49EA4Cu;
        // 0x49ea50: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49EA54u;
        goto label_49ea54;
    }
    ctx->pc = 0x49EA4Cu;
    {
        const bool branch_taken_0x49ea4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x49EA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49EA4Cu;
        // 0x49ea50: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49ea4c) {
            ctx->pc = 0x49EA6Cu;
            goto label_49ea6c;
        }
    }
    ctx->pc = 0x49EA54u;
label_49ea54:
    // 0x49ea54: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x49ea54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_49ea58:
    // 0x49ea58: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x49ea58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_49ea5c:
    // 0x49ea5c: 0xc12a936  jal         func_4AA4D8
label_49ea60:
    if (ctx->pc == 0x49EA60u) {
        ctx->pc = 0x49EA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49EA5Cu;
        // 0x49ea60: 0x34a50803  ori         $a1, $a1, 0x803 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2051);
        ctx->in_delay_slot = false;
        ctx->pc = 0x49EA64u;
        goto label_49ea64;
    }
    ctx->pc = 0x49EA5Cu;
    SET_GPR_U32(ctx, 31, 0x49EA64u);
    ctx->pc = 0x49EA60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49EA5Cu;
    // 0x49ea60: 0x34a50803  ori         $a1, $a1, 0x803 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2051);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AA4D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AA4D8u, 0x49EA5Cu, 0x49EA64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49EA64u;
label_49ea64:
    // 0x49ea64: 0x10000006  b           . + 4 + (0x6 << 2)
label_49ea68:
    if (ctx->pc == 0x49EA68u) {
        ctx->pc = 0x49EA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49EA64u;
        // 0x49ea68: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49EA6Cu;
        goto label_49ea6c;
    }
    ctx->pc = 0x49EA64u;
    {
        const bool branch_taken_0x49ea64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49EA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49EA64u;
        // 0x49ea68: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49ea64) {
            ctx->pc = 0x49EA80u;
            goto label_49ea80;
        }
    }
    ctx->pc = 0x49EA6Cu;
label_49ea6c:
    // 0x49ea6c: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x49ea6cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_49ea70:
    // 0x49ea70: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_49ea74:
    if (ctx->pc == 0x49EA74u) {
        ctx->pc = 0x49EA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49EA70u;
        // 0x49ea74: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49EA78u;
        goto label_49ea78;
    }
    ctx->pc = 0x49EA70u;
    {
        const bool branch_taken_0x49ea70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x49EA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49EA70u;
        // 0x49ea74: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49ea70) {
            ctx->pc = 0x49EA48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49ea48;
        }
    }
    ctx->pc = 0x49EA78u;
label_49ea78:
    // 0x49ea78: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x49ea78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_49ea7c:
    // 0x49ea7c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x49ea7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_49ea80:
    // 0x49ea80: 0x3e00008  jr          $ra
label_49ea84:
    if (ctx->pc == 0x49EA84u) {
        ctx->pc = 0x49EA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49EA80u;
        // 0x49ea84: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49EA88u;
        goto label_49ea88;
    }
    ctx->pc = 0x49EA80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49EA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49EA80u;
        // 0x49ea84: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49EA80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49EA88u;
label_49ea88:
    // 0x49ea88: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x49ea88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_49ea8c:
    // 0x49ea8c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x49ea8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_49ea90:
    // 0x49ea90: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x49ea90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_49ea94:
    // 0x49ea94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x49ea94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_49ea98:
    // 0x49ea98: 0xc127d08  jal         func_49F420
label_49ea9c:
    if (ctx->pc == 0x49EA9Cu) {
        ctx->pc = 0x49EA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49EA98u;
        // 0x49ea9c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49EAA0u;
        goto label_49eaa0;
    }
    ctx->pc = 0x49EA98u;
    SET_GPR_U32(ctx, 31, 0x49EAA0u);
    ctx->pc = 0x49EA9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49EA98u;
    // 0x49ea9c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49F420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F420u, 0x49EA98u, 0x49EAA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49EAA0u;
label_49eaa0:
    // 0x49eaa0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x49eaa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_49eaa4:
    // 0x49eaa4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x49eaa4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_49eaa8:
    // 0x49eaa8: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x49eaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
label_49eaac:
    // 0x49eaac: 0x24445ae8  addiu       $a0, $v0, 0x5AE8
    ctx->pc = 0x49eaacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 23272));
label_49eab0:
    // 0x49eab0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x49eab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_49eab4:
    // 0x49eab4: 0x14450006  bne         $v0, $a1, . + 4 + (0x6 << 2)
label_49eab8:
    if (ctx->pc == 0x49EAB8u) {
        ctx->pc = 0x49EAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49EAB4u;
        // 0x49eab8: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49EABCu;
        goto label_49eabc;
    }
    ctx->pc = 0x49EAB4u;
    {
        const bool branch_taken_0x49eab4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x49EAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49EAB4u;
        // 0x49eab8: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49eab4) {
            ctx->pc = 0x49EAD0u;
            goto label_49ead0;
        }
    }
    ctx->pc = 0x49EABCu;
label_49eabc:
    // 0x49eabc: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x49eabcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_49eac0:
    // 0x49eac0: 0xc12a9a0  jal         func_4AA680
label_49eac4:
    if (ctx->pc == 0x49EAC4u) {
        ctx->pc = 0x49EAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49EAC0u;
        // 0x49eac4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49EAC8u;
        goto label_49eac8;
    }
    ctx->pc = 0x49EAC0u;
    SET_GPR_U32(ctx, 31, 0x49EAC8u);
    ctx->pc = 0x49EAC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49EAC0u;
    // 0x49eac4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AA680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AA680u, 0x49EAC0u, 0x49EAC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49EAC8u;
label_49eac8:
    // 0x49eac8: 0x10000005  b           . + 4 + (0x5 << 2)
label_49eacc:
    if (ctx->pc == 0x49EACCu) {
        ctx->pc = 0x49EACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49EAC8u;
        // 0x49eacc: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49EAD0u;
        goto label_49ead0;
    }
    ctx->pc = 0x49EAC8u;
    {
        const bool branch_taken_0x49eac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49EACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49EAC8u;
        // 0x49eacc: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49eac8) {
            ctx->pc = 0x49EAE0u;
            goto label_49eae0;
        }
    }
    ctx->pc = 0x49EAD0u;
label_49ead0:
    // 0x49ead0: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x49ead0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_49ead4:
    // 0x49ead4: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_49ead8:
    if (ctx->pc == 0x49EAD8u) {
        ctx->pc = 0x49EAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49EAD4u;
        // 0x49ead8: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49EADCu;
        goto label_49eadc;
    }
    ctx->pc = 0x49EAD4u;
    {
        const bool branch_taken_0x49ead4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x49EAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49EAD4u;
        // 0x49ead8: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49ead4) {
            ctx->pc = 0x49EAB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49eab0;
        }
    }
    ctx->pc = 0x49EADCu;
label_49eadc:
    // 0x49eadc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x49eadcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_49eae0:
    // 0x49eae0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x49eae0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_49eae4:
    // 0x49eae4: 0x3e00008  jr          $ra
label_49eae8:
    if (ctx->pc == 0x49EAE8u) {
        ctx->pc = 0x49EAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49EAE4u;
        // 0x49eae8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49EAECu;
        goto label_49eaec;
    }
    ctx->pc = 0x49EAE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49EAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49EAE4u;
        // 0x49eae8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49EAE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49EAECu;
label_49eaec:
    // 0x49eaec: 0x0  nop
    ctx->pc = 0x49eaecu;
    // NOP
label_49eaf0:
    // 0x49eaf0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x49eaf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_49eaf4:
    // 0x49eaf4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x49eaf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_49eaf8:
    // 0x49eaf8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x49eaf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_49eafc:
    // 0x49eafc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x49eafcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_49eb00:
    // 0x49eb00: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x49eb00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_49eb04:
    // 0x49eb04: 0x24110028  addiu       $s1, $zero, 0x28
    ctx->pc = 0x49eb04u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_49eb08:
    // 0x49eb08: 0xc127d08  jal         func_49F420
label_49eb0c:
    if (ctx->pc == 0x49EB0Cu) {
        ctx->pc = 0x49EB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49EB08u;
        // 0x49eb0c: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49EB10u;
        goto label_49eb10;
    }
    ctx->pc = 0x49EB08u;
    SET_GPR_U32(ctx, 31, 0x49EB10u);
    ctx->pc = 0x49EB0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49EB08u;
    // 0x49eb0c: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49F420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F420u, 0x49EB08u, 0x49EB10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49EB10u;
label_49eb10:
    // 0x49eb10: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x49eb10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_49eb14:
    // 0x49eb14: 0x24430028  addiu       $v1, $v0, 0x28
    ctx->pc = 0x49eb14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_49eb18:
    // 0x49eb18: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x49eb18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_49eb1c:
    // 0x49eb1c: 0x64880b  movn        $s1, $v1, $a0
    ctx->pc = 0x49eb1cu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
label_49eb20:
    // 0x49eb20: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x49eb20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_49eb24:
    // 0x49eb24: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x49eb24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_49eb28:
    // 0x49eb28: 0x45880b  movn        $s1, $v0, $a1
    ctx->pc = 0x49eb28u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
label_49eb2c:
    // 0x49eb2c: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_49eb30:
    if (ctx->pc == 0x49EB30u) {
        ctx->pc = 0x49EB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49EB2Cu;
        // 0x49eb30: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49EB34u;
        goto label_49eb34;
    }
    ctx->pc = 0x49EB2Cu;
    {
        const bool branch_taken_0x49eb2c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x49EB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49EB2Cu;
        // 0x49eb30: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49eb2c) {
            ctx->pc = 0x49EB4Cu;
            goto label_49eb4c;
        }
    }
    ctx->pc = 0x49EB34u;
label_49eb34:
    // 0x49eb34: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x49eb34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_49eb38:
    // 0x49eb38: 0x8c62e974  lw          $v0, -0x168C($v1)
    ctx->pc = 0x49eb38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961524)));
label_49eb3c:
    // 0x49eb3c: 0x40f809  jalr        $v0
label_49eb40:
    if (ctx->pc == 0x49EB40u) {
        ctx->pc = 0x49EB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49EB3Cu;
        // 0x49eb40: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49EB44u;
        goto label_49eb44;
    }
    ctx->pc = 0x49EB3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x49EB44u);
        ctx->pc = 0x49EB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49EB3Cu;
        // 0x49eb40: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49EB3Cu, 0x49EB44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x49EB44u;
label_49eb44:
    // 0x49eb44: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x49eb44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_49eb48:
    // 0x49eb48: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x49eb48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_49eb4c:
    // 0x49eb4c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x49eb4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_49eb50:
    // 0x49eb50: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x49eb50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_49eb54:
    // 0x49eb54: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x49eb54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_49eb58:
    // 0x49eb58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x49eb58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_49eb5c:
    // 0x49eb5c: 0x3e00008  jr          $ra
label_49eb60:
    if (ctx->pc == 0x49EB60u) {
        ctx->pc = 0x49EB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49EB5Cu;
        // 0x49eb60: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49EB64u;
        goto label_49eb64;
    }
    ctx->pc = 0x49EB5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49EB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49EB5Cu;
        // 0x49eb60: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49EB5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49EB64u;
label_49eb64:
    // 0x49eb64: 0x0  nop
    ctx->pc = 0x49eb64u;
    // NOP
label_49eb68:
    // 0x49eb68: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x49eb68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_49eb6c:
    // 0x49eb6c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x49eb6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_49eb70:
    // 0x49eb70: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x49eb70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_49eb74:
    // 0x49eb74: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x49eb74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_49eb78:
    // 0x49eb78: 0xafa60004  sw          $a2, 0x4($sp)
    ctx->pc = 0x49eb78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
label_49eb7c:
    // 0x49eb7c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x49eb7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_49eb80:
    // 0x49eb80: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x49eb80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_49eb84:
    // 0x49eb84: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x49eb84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_49eb88:
    // 0x49eb88: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x49eb88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_49eb8c:
    // 0x49eb8c: 0x24042000  addiu       $a0, $zero, 0x2000
    ctx->pc = 0x49eb8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
label_49eb90:
    // 0x49eb90: 0xc1277d8  jal         func_49DF60
label_49eb94:
    if (ctx->pc == 0x49EB94u) {
        ctx->pc = 0x49EB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49EB90u;
        // 0x49eb94: 0x37a60004  ori         $a2, $sp, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x49EB98u;
        goto label_49eb98;
    }
    ctx->pc = 0x49EB90u;
    SET_GPR_U32(ctx, 31, 0x49EB98u);
    ctx->pc = 0x49EB94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49EB90u;
    // 0x49eb94: 0x37a60004  ori         $a2, $sp, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x49DF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49DF60u, 0x49EB90u, 0x49EB98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49EB98u;
label_49eb98:
    // 0x49eb98: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x49eb98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_49eb9c:
    // 0x49eb9c: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
label_49eba0:
    if (ctx->pc == 0x49EBA0u) {
        ctx->pc = 0x49EBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49EB9Cu;
        // 0x49eba0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49EBA4u;
        goto label_49eba4;
    }
    ctx->pc = 0x49EB9Cu;
    {
        const bool branch_taken_0x49eb9c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x49EBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49EB9Cu;
        // 0x49eba0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49eb9c) {
            ctx->pc = 0x49EBC8u;
            goto label_49ebc8;
        }
    }
    ctx->pc = 0x49EBA4u;
label_49eba4:
    // 0x49eba4: 0x52000005  beql        $s0, $zero, . + 4 + (0x5 << 2)
label_49eba8:
    if (ctx->pc == 0x49EBA8u) {
        ctx->pc = 0x49EBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49EBA4u;
        // 0x49eba8: 0x8ca30014  lw          $v1, 0x14($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49EBACu;
        goto label_49ebac;
    }
    ctx->pc = 0x49EBA4u;
    {
        const bool branch_taken_0x49eba4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x49eba4) {
            ctx->pc = 0x49EBA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49EBA4u;
            // 0x49eba8: 0x8ca30014  lw          $v1, 0x14($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x49EBBCu;
            goto label_49ebbc;
        }
    }
    ctx->pc = 0x49EBACu;
label_49ebac:
    // 0x49ebac: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x49ebacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_49ebb0:
    // 0x49ebb0: 0xacb00018  sw          $s0, 0x18($a1)
    ctx->pc = 0x49ebb0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 16));
label_49ebb4:
    // 0x49ebb4: 0x34514000  ori         $s1, $v0, 0x4000
    ctx->pc = 0x49ebb4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_49ebb8:
    // 0x49ebb8: 0x8ca30014  lw          $v1, 0x14($a1)
    ctx->pc = 0x49ebb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_49ebbc:
    // 0x49ebbc: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x49ebbcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_49ebc0:
    // 0x49ebc0: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x49ebc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
label_49ebc4:
    // 0x49ebc4: 0xaca30014  sw          $v1, 0x14($a1)
    ctx->pc = 0x49ebc4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 3));
label_49ebc8:
    // 0x49ebc8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x49ebc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_49ebcc:
    // 0x49ebcc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x49ebccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_49ebd0:
    // 0x49ebd0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x49ebd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_49ebd4:
    // 0x49ebd4: 0x3e00008  jr          $ra
label_49ebd8:
    if (ctx->pc == 0x49EBD8u) {
        ctx->pc = 0x49EBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49EBD4u;
        // 0x49ebd8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49EBDCu;
        goto label_49ebdc;
    }
    ctx->pc = 0x49EBD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49EBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49EBD4u;
        // 0x49ebd8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49EBD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49EBDCu;
label_49ebdc:
    // 0x49ebdc: 0x0  nop
    ctx->pc = 0x49ebdcu;
    // NOP
label_49ebe0:
    // 0x49ebe0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x49ebe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_49ebe4:
    // 0x49ebe4: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x49ebe4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_49ebe8:
    // 0x49ebe8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x49ebe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_49ebec:
    // 0x49ebec: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x49ebecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_49ebf0:
    // 0x49ebf0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x49ebf0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_49ebf4:
    // 0x49ebf4: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
label_49ebf8:
    if (ctx->pc == 0x49EBF8u) {
        ctx->pc = 0x49EBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49EBF4u;
        // 0x49ebf8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49EBFCu;
        goto label_49ebfc;
    }
    ctx->pc = 0x49EBF4u;
    {
        const bool branch_taken_0x49ebf4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x49EBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49EBF4u;
        // 0x49ebf8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49ebf4) {
            ctx->pc = 0x49EC20u;
            goto label_49ec20;
        }
    }
    ctx->pc = 0x49EBFCu;
label_49ebfc:
    // 0x49ebfc: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x49ebfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_49ec00:
    // 0x49ec00: 0x24041000  addiu       $a0, $zero, 0x1000
    ctx->pc = 0x49ec00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
label_49ec04:
    // 0x49ec04: 0xc1277d8  jal         func_49DF60
label_49ec08:
    if (ctx->pc == 0x49EC08u) {
        ctx->pc = 0x49EC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49EC04u;
        // 0x49ec08: 0x8e060010  lw          $a2, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49EC0Cu;
        goto label_49ec0c;
    }
    ctx->pc = 0x49EC04u;
    SET_GPR_U32(ctx, 31, 0x49EC0Cu);
    ctx->pc = 0x49EC08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49EC04u;
    // 0x49ec08: 0x8e060010  lw          $a2, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49DF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49DF60u, 0x49EC04u, 0x49EC0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49EC0Cu;
label_49ec0c:
    // 0x49ec0c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x49ec0cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_49ec10:
    // 0x49ec10: 0x54e00008  bnel        $a3, $zero, . + 4 + (0x8 << 2)
label_49ec14:
    if (ctx->pc == 0x49EC14u) {
        ctx->pc = 0x49EC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49EC10u;
        // 0x49ec14: 0xacf00018  sw          $s0, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49EC18u;
        goto label_49ec18;
    }
    ctx->pc = 0x49EC10u;
    {
        const bool branch_taken_0x49ec10 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x49ec10) {
            ctx->pc = 0x49EC14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49EC10u;
            // 0x49ec14: 0xacf00018  sw          $s0, 0x18($a3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x49EC34u;
            goto label_49ec34;
        }
    }
    ctx->pc = 0x49EC18u;
label_49ec18:
    // 0x49ec18: 0x10000007  b           . + 4 + (0x7 << 2)
label_49ec1c:
    if (ctx->pc == 0x49EC1Cu) {
        ctx->pc = 0x49EC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49EC18u;
        // 0x49ec1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49EC20u;
        goto label_49ec20;
    }
    ctx->pc = 0x49EC18u;
    {
        const bool branch_taken_0x49ec18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49EC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49EC18u;
        // 0x49ec1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49ec18) {
            ctx->pc = 0x49EC38u;
            goto label_49ec38;
        }
    }
    ctx->pc = 0x49EC20u;
label_49ec20:
    // 0x49ec20: 0x24041000  addiu       $a0, $zero, 0x1000
    ctx->pc = 0x49ec20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
label_49ec24:
    // 0x49ec24: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x49ec24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_49ec28:
    // 0x49ec28: 0xc1277d8  jal         func_49DF60
label_49ec2c:
    if (ctx->pc == 0x49EC2Cu) {
        ctx->pc = 0x49EC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49EC28u;
        // 0x49ec2c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49EC30u;
        goto label_49ec30;
    }
    ctx->pc = 0x49EC28u;
    SET_GPR_U32(ctx, 31, 0x49EC30u);
    ctx->pc = 0x49EC2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49EC28u;
    // 0x49ec2c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49DF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49DF60u, 0x49EC28u, 0x49EC30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49EC30u;
label_49ec30:
    // 0x49ec30: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x49ec30u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_49ec34:
    // 0x49ec34: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x49ec34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_49ec38:
    // 0x49ec38: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x49ec38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_49ec3c:
    // 0x49ec3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x49ec3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_49ec40:
    // 0x49ec40: 0x3e00008  jr          $ra
label_49ec44:
    if (ctx->pc == 0x49EC44u) {
        ctx->pc = 0x49EC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49EC40u;
        // 0x49ec44: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49EC48u;
        goto label_49ec48;
    }
    ctx->pc = 0x49EC40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49EC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49EC40u;
        // 0x49ec44: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49EC40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49EC48u;
label_49ec48:
    // 0x49ec48: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x49ec48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_49ec4c:
    // 0x49ec4c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x49ec4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_49ec50:
    // 0x49ec50: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x49ec50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_49ec54:
    // 0x49ec54: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x49ec54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_49ec58:
    // 0x49ec58: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x49ec58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_49ec5c:
    // 0x49ec5c: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x49ec5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
label_49ec60:
    // 0x49ec60: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x49ec60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_49ec64:
    // 0x49ec64: 0x24848330  addiu       $a0, $a0, -0x7CD0
    ctx->pc = 0x49ec64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935344));
label_49ec68:
    // 0x49ec68: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x49ec68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_49ec6c:
    // 0x49ec6c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x49ec6cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_49ec70:
    // 0x49ec70: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x49ec70u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_49ec74:
    // 0x49ec74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x49ec74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_49ec78:
    // 0x49ec78: 0xc127c22  jal         func_49F088
label_49ec7c:
    if (ctx->pc == 0x49EC7Cu) {
        ctx->pc = 0x49EC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49EC78u;
        // 0x49ec7c: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49EC80u;
        goto label_49ec80;
    }
    ctx->pc = 0x49EC78u;
    SET_GPR_U32(ctx, 31, 0x49EC80u);
    ctx->pc = 0x49EC7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49EC78u;
    // 0x49ec7c: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49F088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F088u, 0x49EC78u, 0x49EC80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49EC80u;
label_49ec80:
    // 0x49ec80: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_49ec84:
    if (ctx->pc == 0x49EC84u) {
        ctx->pc = 0x49EC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49EC80u;
        // 0x49ec84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49EC88u;
        goto label_49ec88;
    }
    ctx->pc = 0x49EC80u;
    {
        const bool branch_taken_0x49ec80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49EC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49EC80u;
        // 0x49ec84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49ec80) {
            ctx->pc = 0x49ECA4u;
            goto label_49eca4;
        }
    }
    ctx->pc = 0x49EC88u;
label_49ec88:
    // 0x49ec88: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x49ec88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_49ec8c:
    // 0x49ec8c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x49ec8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_49ec90:
    // 0x49ec90: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x49ec90u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_49ec94:
    // 0x49ec94: 0xc127b32  jal         func_49ECC8
label_49ec98:
    if (ctx->pc == 0x49EC98u) {
        ctx->pc = 0x49EC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49EC94u;
        // 0x49ec98: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49EC9Cu;
        goto label_49ec9c;
    }
    ctx->pc = 0x49EC94u;
    SET_GPR_U32(ctx, 31, 0x49EC9Cu);
    ctx->pc = 0x49EC98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49EC94u;
    // 0x49ec98: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49ECC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49ECC8u, 0x49EC94u, 0x49EC9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49EC9Cu;
label_49ec9c:
    // 0x49ec9c: 0x10000003  b           . + 4 + (0x3 << 2)
label_49eca0:
    if (ctx->pc == 0x49ECA0u) {
        ctx->pc = 0x49ECA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49EC9Cu;
        // 0x49eca0: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49ECA4u;
        goto label_49eca4;
    }
    ctx->pc = 0x49EC9Cu;
    {
        const bool branch_taken_0x49ec9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49ECA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49EC9Cu;
        // 0x49eca0: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49ec9c) {
            ctx->pc = 0x49ECACu;
            goto label_49ecac;
        }
    }
    ctx->pc = 0x49ECA4u;
label_49eca4:
    // 0x49eca4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x49eca4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_49eca8:
    // 0x49eca8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x49eca8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_49ecac:
    // 0x49ecac: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x49ecacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_49ecb0:
    // 0x49ecb0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x49ecb0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_49ecb4:
    // 0x49ecb4: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x49ecb4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_49ecb8:
    // 0x49ecb8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x49ecb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_49ecbc:
    // 0x49ecbc: 0x3e00008  jr          $ra
label_49ecc0:
    if (ctx->pc == 0x49ECC0u) {
        ctx->pc = 0x49ECC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49ECBCu;
        // 0x49ecc0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49ECC4u;
        goto label_49ecc4;
    }
    ctx->pc = 0x49ECBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49ECC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49ECBCu;
        // 0x49ecc0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49ECBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49ECC4u;
label_49ecc4:
    // 0x49ecc4: 0x0  nop
    ctx->pc = 0x49ecc4u;
    // NOP
    ctx->pc = 0x49ecc8u;
}
