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

// Function: sub_0016E6F0
// Address: 0x16e6f0 - 0x16f1d0
void sub_0016E6F0_0x16e6f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016E6F0_0x16e6f0");
#endif

    switch (ctx->pc) {
        case 0x16e6f0u: goto label_16e6f0;
        case 0x16e6f4u: goto label_16e6f4;
        case 0x16e6f8u: goto label_16e6f8;
        case 0x16e6fcu: goto label_16e6fc;
        case 0x16e700u: goto label_16e700;
        case 0x16e704u: goto label_16e704;
        case 0x16e708u: goto label_16e708;
        case 0x16e70cu: goto label_16e70c;
        case 0x16e710u: goto label_16e710;
        case 0x16e714u: goto label_16e714;
        case 0x16e718u: goto label_16e718;
        case 0x16e71cu: goto label_16e71c;
        case 0x16e720u: goto label_16e720;
        case 0x16e724u: goto label_16e724;
        case 0x16e728u: goto label_16e728;
        case 0x16e72cu: goto label_16e72c;
        case 0x16e730u: goto label_16e730;
        case 0x16e734u: goto label_16e734;
        case 0x16e738u: goto label_16e738;
        case 0x16e73cu: goto label_16e73c;
        case 0x16e740u: goto label_16e740;
        case 0x16e744u: goto label_16e744;
        case 0x16e748u: goto label_16e748;
        case 0x16e74cu: goto label_16e74c;
        case 0x16e750u: goto label_16e750;
        case 0x16e754u: goto label_16e754;
        case 0x16e758u: goto label_16e758;
        case 0x16e75cu: goto label_16e75c;
        case 0x16e760u: goto label_16e760;
        case 0x16e764u: goto label_16e764;
        case 0x16e768u: goto label_16e768;
        case 0x16e76cu: goto label_16e76c;
        case 0x16e770u: goto label_16e770;
        case 0x16e774u: goto label_16e774;
        case 0x16e778u: goto label_16e778;
        case 0x16e77cu: goto label_16e77c;
        case 0x16e780u: goto label_16e780;
        case 0x16e784u: goto label_16e784;
        case 0x16e788u: goto label_16e788;
        case 0x16e78cu: goto label_16e78c;
        case 0x16e790u: goto label_16e790;
        case 0x16e794u: goto label_16e794;
        case 0x16e798u: goto label_16e798;
        case 0x16e79cu: goto label_16e79c;
        case 0x16e7a0u: goto label_16e7a0;
        case 0x16e7a4u: goto label_16e7a4;
        case 0x16e7a8u: goto label_16e7a8;
        case 0x16e7acu: goto label_16e7ac;
        case 0x16e7b0u: goto label_16e7b0;
        case 0x16e7b4u: goto label_16e7b4;
        case 0x16e7b8u: goto label_16e7b8;
        case 0x16e7bcu: goto label_16e7bc;
        case 0x16e7c0u: goto label_16e7c0;
        case 0x16e7c4u: goto label_16e7c4;
        case 0x16e7c8u: goto label_16e7c8;
        case 0x16e7ccu: goto label_16e7cc;
        case 0x16e7d0u: goto label_16e7d0;
        case 0x16e7d4u: goto label_16e7d4;
        case 0x16e7d8u: goto label_16e7d8;
        case 0x16e7dcu: goto label_16e7dc;
        case 0x16e7e0u: goto label_16e7e0;
        case 0x16e7e4u: goto label_16e7e4;
        case 0x16e7e8u: goto label_16e7e8;
        case 0x16e7ecu: goto label_16e7ec;
        case 0x16e7f0u: goto label_16e7f0;
        case 0x16e7f4u: goto label_16e7f4;
        case 0x16e7f8u: goto label_16e7f8;
        case 0x16e7fcu: goto label_16e7fc;
        case 0x16e800u: goto label_16e800;
        case 0x16e804u: goto label_16e804;
        case 0x16e808u: goto label_16e808;
        case 0x16e80cu: goto label_16e80c;
        case 0x16e810u: goto label_16e810;
        case 0x16e814u: goto label_16e814;
        case 0x16e818u: goto label_16e818;
        case 0x16e81cu: goto label_16e81c;
        case 0x16e820u: goto label_16e820;
        case 0x16e824u: goto label_16e824;
        case 0x16e828u: goto label_16e828;
        case 0x16e82cu: goto label_16e82c;
        case 0x16e830u: goto label_16e830;
        case 0x16e834u: goto label_16e834;
        case 0x16e838u: goto label_16e838;
        case 0x16e83cu: goto label_16e83c;
        case 0x16e840u: goto label_16e840;
        case 0x16e844u: goto label_16e844;
        case 0x16e848u: goto label_16e848;
        case 0x16e84cu: goto label_16e84c;
        case 0x16e850u: goto label_16e850;
        case 0x16e854u: goto label_16e854;
        case 0x16e858u: goto label_16e858;
        case 0x16e85cu: goto label_16e85c;
        case 0x16e860u: goto label_16e860;
        case 0x16e864u: goto label_16e864;
        case 0x16e868u: goto label_16e868;
        case 0x16e86cu: goto label_16e86c;
        case 0x16e870u: goto label_16e870;
        case 0x16e874u: goto label_16e874;
        case 0x16e878u: goto label_16e878;
        case 0x16e87cu: goto label_16e87c;
        case 0x16e880u: goto label_16e880;
        case 0x16e884u: goto label_16e884;
        case 0x16e888u: goto label_16e888;
        case 0x16e88cu: goto label_16e88c;
        case 0x16e890u: goto label_16e890;
        case 0x16e894u: goto label_16e894;
        case 0x16e898u: goto label_16e898;
        case 0x16e89cu: goto label_16e89c;
        case 0x16e8a0u: goto label_16e8a0;
        case 0x16e8a4u: goto label_16e8a4;
        case 0x16e8a8u: goto label_16e8a8;
        case 0x16e8acu: goto label_16e8ac;
        case 0x16e8b0u: goto label_16e8b0;
        case 0x16e8b4u: goto label_16e8b4;
        case 0x16e8b8u: goto label_16e8b8;
        case 0x16e8bcu: goto label_16e8bc;
        case 0x16e8c0u: goto label_16e8c0;
        case 0x16e8c4u: goto label_16e8c4;
        case 0x16e8c8u: goto label_16e8c8;
        case 0x16e8ccu: goto label_16e8cc;
        case 0x16e8d0u: goto label_16e8d0;
        case 0x16e8d4u: goto label_16e8d4;
        case 0x16e8d8u: goto label_16e8d8;
        case 0x16e8dcu: goto label_16e8dc;
        case 0x16e8e0u: goto label_16e8e0;
        case 0x16e8e4u: goto label_16e8e4;
        case 0x16e8e8u: goto label_16e8e8;
        case 0x16e8ecu: goto label_16e8ec;
        case 0x16e8f0u: goto label_16e8f0;
        case 0x16e8f4u: goto label_16e8f4;
        case 0x16e8f8u: goto label_16e8f8;
        case 0x16e8fcu: goto label_16e8fc;
        case 0x16e900u: goto label_16e900;
        case 0x16e904u: goto label_16e904;
        case 0x16e908u: goto label_16e908;
        case 0x16e90cu: goto label_16e90c;
        case 0x16e910u: goto label_16e910;
        case 0x16e914u: goto label_16e914;
        case 0x16e918u: goto label_16e918;
        case 0x16e91cu: goto label_16e91c;
        case 0x16e920u: goto label_16e920;
        case 0x16e924u: goto label_16e924;
        case 0x16e928u: goto label_16e928;
        case 0x16e92cu: goto label_16e92c;
        case 0x16e930u: goto label_16e930;
        case 0x16e934u: goto label_16e934;
        case 0x16e938u: goto label_16e938;
        case 0x16e93cu: goto label_16e93c;
        case 0x16e940u: goto label_16e940;
        case 0x16e944u: goto label_16e944;
        case 0x16e948u: goto label_16e948;
        case 0x16e94cu: goto label_16e94c;
        case 0x16e950u: goto label_16e950;
        case 0x16e954u: goto label_16e954;
        case 0x16e958u: goto label_16e958;
        case 0x16e95cu: goto label_16e95c;
        case 0x16e960u: goto label_16e960;
        case 0x16e964u: goto label_16e964;
        case 0x16e968u: goto label_16e968;
        case 0x16e96cu: goto label_16e96c;
        case 0x16e970u: goto label_16e970;
        case 0x16e974u: goto label_16e974;
        case 0x16e978u: goto label_16e978;
        case 0x16e97cu: goto label_16e97c;
        case 0x16e980u: goto label_16e980;
        case 0x16e984u: goto label_16e984;
        case 0x16e988u: goto label_16e988;
        case 0x16e98cu: goto label_16e98c;
        case 0x16e990u: goto label_16e990;
        case 0x16e994u: goto label_16e994;
        case 0x16e998u: goto label_16e998;
        case 0x16e99cu: goto label_16e99c;
        case 0x16e9a0u: goto label_16e9a0;
        case 0x16e9a4u: goto label_16e9a4;
        case 0x16e9a8u: goto label_16e9a8;
        case 0x16e9acu: goto label_16e9ac;
        case 0x16e9b0u: goto label_16e9b0;
        case 0x16e9b4u: goto label_16e9b4;
        case 0x16e9b8u: goto label_16e9b8;
        case 0x16e9bcu: goto label_16e9bc;
        case 0x16e9c0u: goto label_16e9c0;
        case 0x16e9c4u: goto label_16e9c4;
        case 0x16e9c8u: goto label_16e9c8;
        case 0x16e9ccu: goto label_16e9cc;
        case 0x16e9d0u: goto label_16e9d0;
        case 0x16e9d4u: goto label_16e9d4;
        case 0x16e9d8u: goto label_16e9d8;
        case 0x16e9dcu: goto label_16e9dc;
        case 0x16e9e0u: goto label_16e9e0;
        case 0x16e9e4u: goto label_16e9e4;
        case 0x16e9e8u: goto label_16e9e8;
        case 0x16e9ecu: goto label_16e9ec;
        case 0x16e9f0u: goto label_16e9f0;
        case 0x16e9f4u: goto label_16e9f4;
        case 0x16e9f8u: goto label_16e9f8;
        case 0x16e9fcu: goto label_16e9fc;
        case 0x16ea00u: goto label_16ea00;
        case 0x16ea04u: goto label_16ea04;
        case 0x16ea08u: goto label_16ea08;
        case 0x16ea0cu: goto label_16ea0c;
        case 0x16ea10u: goto label_16ea10;
        case 0x16ea14u: goto label_16ea14;
        case 0x16ea18u: goto label_16ea18;
        case 0x16ea1cu: goto label_16ea1c;
        case 0x16ea20u: goto label_16ea20;
        case 0x16ea24u: goto label_16ea24;
        case 0x16ea28u: goto label_16ea28;
        case 0x16ea2cu: goto label_16ea2c;
        case 0x16ea30u: goto label_16ea30;
        case 0x16ea34u: goto label_16ea34;
        case 0x16ea38u: goto label_16ea38;
        case 0x16ea3cu: goto label_16ea3c;
        case 0x16ea40u: goto label_16ea40;
        case 0x16ea44u: goto label_16ea44;
        case 0x16ea48u: goto label_16ea48;
        case 0x16ea4cu: goto label_16ea4c;
        case 0x16ea50u: goto label_16ea50;
        case 0x16ea54u: goto label_16ea54;
        case 0x16ea58u: goto label_16ea58;
        case 0x16ea5cu: goto label_16ea5c;
        case 0x16ea60u: goto label_16ea60;
        case 0x16ea64u: goto label_16ea64;
        case 0x16ea68u: goto label_16ea68;
        case 0x16ea6cu: goto label_16ea6c;
        case 0x16ea70u: goto label_16ea70;
        case 0x16ea74u: goto label_16ea74;
        case 0x16ea78u: goto label_16ea78;
        case 0x16ea7cu: goto label_16ea7c;
        case 0x16ea80u: goto label_16ea80;
        case 0x16ea84u: goto label_16ea84;
        case 0x16ea88u: goto label_16ea88;
        case 0x16ea8cu: goto label_16ea8c;
        case 0x16ea90u: goto label_16ea90;
        case 0x16ea94u: goto label_16ea94;
        case 0x16ea98u: goto label_16ea98;
        case 0x16ea9cu: goto label_16ea9c;
        case 0x16eaa0u: goto label_16eaa0;
        case 0x16eaa4u: goto label_16eaa4;
        case 0x16eaa8u: goto label_16eaa8;
        case 0x16eaacu: goto label_16eaac;
        case 0x16eab0u: goto label_16eab0;
        case 0x16eab4u: goto label_16eab4;
        case 0x16eab8u: goto label_16eab8;
        case 0x16eabcu: goto label_16eabc;
        case 0x16eac0u: goto label_16eac0;
        case 0x16eac4u: goto label_16eac4;
        case 0x16eac8u: goto label_16eac8;
        case 0x16eaccu: goto label_16eacc;
        case 0x16ead0u: goto label_16ead0;
        case 0x16ead4u: goto label_16ead4;
        case 0x16ead8u: goto label_16ead8;
        case 0x16eadcu: goto label_16eadc;
        case 0x16eae0u: goto label_16eae0;
        case 0x16eae4u: goto label_16eae4;
        case 0x16eae8u: goto label_16eae8;
        case 0x16eaecu: goto label_16eaec;
        case 0x16eaf0u: goto label_16eaf0;
        case 0x16eaf4u: goto label_16eaf4;
        case 0x16eaf8u: goto label_16eaf8;
        case 0x16eafcu: goto label_16eafc;
        case 0x16eb00u: goto label_16eb00;
        case 0x16eb04u: goto label_16eb04;
        case 0x16eb08u: goto label_16eb08;
        case 0x16eb0cu: goto label_16eb0c;
        case 0x16eb10u: goto label_16eb10;
        case 0x16eb14u: goto label_16eb14;
        case 0x16eb18u: goto label_16eb18;
        case 0x16eb1cu: goto label_16eb1c;
        case 0x16eb20u: goto label_16eb20;
        case 0x16eb24u: goto label_16eb24;
        case 0x16eb28u: goto label_16eb28;
        case 0x16eb2cu: goto label_16eb2c;
        case 0x16eb30u: goto label_16eb30;
        case 0x16eb34u: goto label_16eb34;
        case 0x16eb38u: goto label_16eb38;
        case 0x16eb3cu: goto label_16eb3c;
        case 0x16eb40u: goto label_16eb40;
        case 0x16eb44u: goto label_16eb44;
        case 0x16eb48u: goto label_16eb48;
        case 0x16eb4cu: goto label_16eb4c;
        case 0x16eb50u: goto label_16eb50;
        case 0x16eb54u: goto label_16eb54;
        case 0x16eb58u: goto label_16eb58;
        case 0x16eb5cu: goto label_16eb5c;
        case 0x16eb60u: goto label_16eb60;
        case 0x16eb64u: goto label_16eb64;
        case 0x16eb68u: goto label_16eb68;
        case 0x16eb6cu: goto label_16eb6c;
        case 0x16eb70u: goto label_16eb70;
        case 0x16eb74u: goto label_16eb74;
        case 0x16eb78u: goto label_16eb78;
        case 0x16eb7cu: goto label_16eb7c;
        case 0x16eb80u: goto label_16eb80;
        case 0x16eb84u: goto label_16eb84;
        case 0x16eb88u: goto label_16eb88;
        case 0x16eb8cu: goto label_16eb8c;
        case 0x16eb90u: goto label_16eb90;
        case 0x16eb94u: goto label_16eb94;
        case 0x16eb98u: goto label_16eb98;
        case 0x16eb9cu: goto label_16eb9c;
        case 0x16eba0u: goto label_16eba0;
        case 0x16eba4u: goto label_16eba4;
        case 0x16eba8u: goto label_16eba8;
        case 0x16ebacu: goto label_16ebac;
        case 0x16ebb0u: goto label_16ebb0;
        case 0x16ebb4u: goto label_16ebb4;
        case 0x16ebb8u: goto label_16ebb8;
        case 0x16ebbcu: goto label_16ebbc;
        case 0x16ebc0u: goto label_16ebc0;
        case 0x16ebc4u: goto label_16ebc4;
        case 0x16ebc8u: goto label_16ebc8;
        case 0x16ebccu: goto label_16ebcc;
        case 0x16ebd0u: goto label_16ebd0;
        case 0x16ebd4u: goto label_16ebd4;
        case 0x16ebd8u: goto label_16ebd8;
        case 0x16ebdcu: goto label_16ebdc;
        case 0x16ebe0u: goto label_16ebe0;
        case 0x16ebe4u: goto label_16ebe4;
        case 0x16ebe8u: goto label_16ebe8;
        case 0x16ebecu: goto label_16ebec;
        case 0x16ebf0u: goto label_16ebf0;
        case 0x16ebf4u: goto label_16ebf4;
        case 0x16ebf8u: goto label_16ebf8;
        case 0x16ebfcu: goto label_16ebfc;
        case 0x16ec00u: goto label_16ec00;
        case 0x16ec04u: goto label_16ec04;
        case 0x16ec08u: goto label_16ec08;
        case 0x16ec0cu: goto label_16ec0c;
        case 0x16ec10u: goto label_16ec10;
        case 0x16ec14u: goto label_16ec14;
        case 0x16ec18u: goto label_16ec18;
        case 0x16ec1cu: goto label_16ec1c;
        case 0x16ec20u: goto label_16ec20;
        case 0x16ec24u: goto label_16ec24;
        case 0x16ec28u: goto label_16ec28;
        case 0x16ec2cu: goto label_16ec2c;
        case 0x16ec30u: goto label_16ec30;
        case 0x16ec34u: goto label_16ec34;
        case 0x16ec38u: goto label_16ec38;
        case 0x16ec3cu: goto label_16ec3c;
        case 0x16ec40u: goto label_16ec40;
        case 0x16ec44u: goto label_16ec44;
        case 0x16ec48u: goto label_16ec48;
        case 0x16ec4cu: goto label_16ec4c;
        case 0x16ec50u: goto label_16ec50;
        case 0x16ec54u: goto label_16ec54;
        case 0x16ec58u: goto label_16ec58;
        case 0x16ec5cu: goto label_16ec5c;
        case 0x16ec60u: goto label_16ec60;
        case 0x16ec64u: goto label_16ec64;
        case 0x16ec68u: goto label_16ec68;
        case 0x16ec6cu: goto label_16ec6c;
        case 0x16ec70u: goto label_16ec70;
        case 0x16ec74u: goto label_16ec74;
        case 0x16ec78u: goto label_16ec78;
        case 0x16ec7cu: goto label_16ec7c;
        case 0x16ec80u: goto label_16ec80;
        case 0x16ec84u: goto label_16ec84;
        case 0x16ec88u: goto label_16ec88;
        case 0x16ec8cu: goto label_16ec8c;
        case 0x16ec90u: goto label_16ec90;
        case 0x16ec94u: goto label_16ec94;
        case 0x16ec98u: goto label_16ec98;
        case 0x16ec9cu: goto label_16ec9c;
        case 0x16eca0u: goto label_16eca0;
        case 0x16eca4u: goto label_16eca4;
        case 0x16eca8u: goto label_16eca8;
        case 0x16ecacu: goto label_16ecac;
        case 0x16ecb0u: goto label_16ecb0;
        case 0x16ecb4u: goto label_16ecb4;
        case 0x16ecb8u: goto label_16ecb8;
        case 0x16ecbcu: goto label_16ecbc;
        case 0x16ecc0u: goto label_16ecc0;
        case 0x16ecc4u: goto label_16ecc4;
        case 0x16ecc8u: goto label_16ecc8;
        case 0x16ecccu: goto label_16eccc;
        case 0x16ecd0u: goto label_16ecd0;
        case 0x16ecd4u: goto label_16ecd4;
        case 0x16ecd8u: goto label_16ecd8;
        case 0x16ecdcu: goto label_16ecdc;
        case 0x16ece0u: goto label_16ece0;
        case 0x16ece4u: goto label_16ece4;
        case 0x16ece8u: goto label_16ece8;
        case 0x16ececu: goto label_16ecec;
        case 0x16ecf0u: goto label_16ecf0;
        case 0x16ecf4u: goto label_16ecf4;
        case 0x16ecf8u: goto label_16ecf8;
        case 0x16ecfcu: goto label_16ecfc;
        case 0x16ed00u: goto label_16ed00;
        case 0x16ed04u: goto label_16ed04;
        case 0x16ed08u: goto label_16ed08;
        case 0x16ed0cu: goto label_16ed0c;
        case 0x16ed10u: goto label_16ed10;
        case 0x16ed14u: goto label_16ed14;
        case 0x16ed18u: goto label_16ed18;
        case 0x16ed1cu: goto label_16ed1c;
        case 0x16ed20u: goto label_16ed20;
        case 0x16ed24u: goto label_16ed24;
        case 0x16ed28u: goto label_16ed28;
        case 0x16ed2cu: goto label_16ed2c;
        case 0x16ed30u: goto label_16ed30;
        case 0x16ed34u: goto label_16ed34;
        case 0x16ed38u: goto label_16ed38;
        case 0x16ed3cu: goto label_16ed3c;
        case 0x16ed40u: goto label_16ed40;
        case 0x16ed44u: goto label_16ed44;
        case 0x16ed48u: goto label_16ed48;
        case 0x16ed4cu: goto label_16ed4c;
        case 0x16ed50u: goto label_16ed50;
        case 0x16ed54u: goto label_16ed54;
        case 0x16ed58u: goto label_16ed58;
        case 0x16ed5cu: goto label_16ed5c;
        case 0x16ed60u: goto label_16ed60;
        case 0x16ed64u: goto label_16ed64;
        case 0x16ed68u: goto label_16ed68;
        case 0x16ed6cu: goto label_16ed6c;
        case 0x16ed70u: goto label_16ed70;
        case 0x16ed74u: goto label_16ed74;
        case 0x16ed78u: goto label_16ed78;
        case 0x16ed7cu: goto label_16ed7c;
        case 0x16ed80u: goto label_16ed80;
        case 0x16ed84u: goto label_16ed84;
        case 0x16ed88u: goto label_16ed88;
        case 0x16ed8cu: goto label_16ed8c;
        case 0x16ed90u: goto label_16ed90;
        case 0x16ed94u: goto label_16ed94;
        case 0x16ed98u: goto label_16ed98;
        case 0x16ed9cu: goto label_16ed9c;
        case 0x16eda0u: goto label_16eda0;
        case 0x16eda4u: goto label_16eda4;
        case 0x16eda8u: goto label_16eda8;
        case 0x16edacu: goto label_16edac;
        case 0x16edb0u: goto label_16edb0;
        case 0x16edb4u: goto label_16edb4;
        case 0x16edb8u: goto label_16edb8;
        case 0x16edbcu: goto label_16edbc;
        case 0x16edc0u: goto label_16edc0;
        case 0x16edc4u: goto label_16edc4;
        case 0x16edc8u: goto label_16edc8;
        case 0x16edccu: goto label_16edcc;
        case 0x16edd0u: goto label_16edd0;
        case 0x16edd4u: goto label_16edd4;
        case 0x16edd8u: goto label_16edd8;
        case 0x16eddcu: goto label_16eddc;
        case 0x16ede0u: goto label_16ede0;
        case 0x16ede4u: goto label_16ede4;
        case 0x16ede8u: goto label_16ede8;
        case 0x16edecu: goto label_16edec;
        case 0x16edf0u: goto label_16edf0;
        case 0x16edf4u: goto label_16edf4;
        case 0x16edf8u: goto label_16edf8;
        case 0x16edfcu: goto label_16edfc;
        case 0x16ee00u: goto label_16ee00;
        case 0x16ee04u: goto label_16ee04;
        case 0x16ee08u: goto label_16ee08;
        case 0x16ee0cu: goto label_16ee0c;
        case 0x16ee10u: goto label_16ee10;
        case 0x16ee14u: goto label_16ee14;
        case 0x16ee18u: goto label_16ee18;
        case 0x16ee1cu: goto label_16ee1c;
        case 0x16ee20u: goto label_16ee20;
        case 0x16ee24u: goto label_16ee24;
        case 0x16ee28u: goto label_16ee28;
        case 0x16ee2cu: goto label_16ee2c;
        case 0x16ee30u: goto label_16ee30;
        case 0x16ee34u: goto label_16ee34;
        case 0x16ee38u: goto label_16ee38;
        case 0x16ee3cu: goto label_16ee3c;
        case 0x16ee40u: goto label_16ee40;
        case 0x16ee44u: goto label_16ee44;
        case 0x16ee48u: goto label_16ee48;
        case 0x16ee4cu: goto label_16ee4c;
        case 0x16ee50u: goto label_16ee50;
        case 0x16ee54u: goto label_16ee54;
        case 0x16ee58u: goto label_16ee58;
        case 0x16ee5cu: goto label_16ee5c;
        case 0x16ee60u: goto label_16ee60;
        case 0x16ee64u: goto label_16ee64;
        case 0x16ee68u: goto label_16ee68;
        case 0x16ee6cu: goto label_16ee6c;
        case 0x16ee70u: goto label_16ee70;
        case 0x16ee74u: goto label_16ee74;
        case 0x16ee78u: goto label_16ee78;
        case 0x16ee7cu: goto label_16ee7c;
        case 0x16ee80u: goto label_16ee80;
        case 0x16ee84u: goto label_16ee84;
        case 0x16ee88u: goto label_16ee88;
        case 0x16ee8cu: goto label_16ee8c;
        case 0x16ee90u: goto label_16ee90;
        case 0x16ee94u: goto label_16ee94;
        case 0x16ee98u: goto label_16ee98;
        case 0x16ee9cu: goto label_16ee9c;
        case 0x16eea0u: goto label_16eea0;
        case 0x16eea4u: goto label_16eea4;
        case 0x16eea8u: goto label_16eea8;
        case 0x16eeacu: goto label_16eeac;
        case 0x16eeb0u: goto label_16eeb0;
        case 0x16eeb4u: goto label_16eeb4;
        case 0x16eeb8u: goto label_16eeb8;
        case 0x16eebcu: goto label_16eebc;
        case 0x16eec0u: goto label_16eec0;
        case 0x16eec4u: goto label_16eec4;
        case 0x16eec8u: goto label_16eec8;
        case 0x16eeccu: goto label_16eecc;
        case 0x16eed0u: goto label_16eed0;
        case 0x16eed4u: goto label_16eed4;
        case 0x16eed8u: goto label_16eed8;
        case 0x16eedcu: goto label_16eedc;
        case 0x16eee0u: goto label_16eee0;
        case 0x16eee4u: goto label_16eee4;
        case 0x16eee8u: goto label_16eee8;
        case 0x16eeecu: goto label_16eeec;
        case 0x16eef0u: goto label_16eef0;
        case 0x16eef4u: goto label_16eef4;
        case 0x16eef8u: goto label_16eef8;
        case 0x16eefcu: goto label_16eefc;
        case 0x16ef00u: goto label_16ef00;
        case 0x16ef04u: goto label_16ef04;
        case 0x16ef08u: goto label_16ef08;
        case 0x16ef0cu: goto label_16ef0c;
        case 0x16ef10u: goto label_16ef10;
        case 0x16ef14u: goto label_16ef14;
        case 0x16ef18u: goto label_16ef18;
        case 0x16ef1cu: goto label_16ef1c;
        case 0x16ef20u: goto label_16ef20;
        case 0x16ef24u: goto label_16ef24;
        case 0x16ef28u: goto label_16ef28;
        case 0x16ef2cu: goto label_16ef2c;
        case 0x16ef30u: goto label_16ef30;
        case 0x16ef34u: goto label_16ef34;
        case 0x16ef38u: goto label_16ef38;
        case 0x16ef3cu: goto label_16ef3c;
        case 0x16ef40u: goto label_16ef40;
        case 0x16ef44u: goto label_16ef44;
        case 0x16ef48u: goto label_16ef48;
        case 0x16ef4cu: goto label_16ef4c;
        case 0x16ef50u: goto label_16ef50;
        case 0x16ef54u: goto label_16ef54;
        case 0x16ef58u: goto label_16ef58;
        case 0x16ef5cu: goto label_16ef5c;
        case 0x16ef60u: goto label_16ef60;
        case 0x16ef64u: goto label_16ef64;
        case 0x16ef68u: goto label_16ef68;
        case 0x16ef6cu: goto label_16ef6c;
        case 0x16ef70u: goto label_16ef70;
        case 0x16ef74u: goto label_16ef74;
        case 0x16ef78u: goto label_16ef78;
        case 0x16ef7cu: goto label_16ef7c;
        case 0x16ef80u: goto label_16ef80;
        case 0x16ef84u: goto label_16ef84;
        case 0x16ef88u: goto label_16ef88;
        case 0x16ef8cu: goto label_16ef8c;
        case 0x16ef90u: goto label_16ef90;
        case 0x16ef94u: goto label_16ef94;
        case 0x16ef98u: goto label_16ef98;
        case 0x16ef9cu: goto label_16ef9c;
        case 0x16efa0u: goto label_16efa0;
        case 0x16efa4u: goto label_16efa4;
        case 0x16efa8u: goto label_16efa8;
        case 0x16efacu: goto label_16efac;
        case 0x16efb0u: goto label_16efb0;
        case 0x16efb4u: goto label_16efb4;
        case 0x16efb8u: goto label_16efb8;
        case 0x16efbcu: goto label_16efbc;
        case 0x16efc0u: goto label_16efc0;
        case 0x16efc4u: goto label_16efc4;
        case 0x16efc8u: goto label_16efc8;
        case 0x16efccu: goto label_16efcc;
        case 0x16efd0u: goto label_16efd0;
        case 0x16efd4u: goto label_16efd4;
        case 0x16efd8u: goto label_16efd8;
        case 0x16efdcu: goto label_16efdc;
        case 0x16efe0u: goto label_16efe0;
        case 0x16efe4u: goto label_16efe4;
        case 0x16efe8u: goto label_16efe8;
        case 0x16efecu: goto label_16efec;
        case 0x16eff0u: goto label_16eff0;
        case 0x16eff4u: goto label_16eff4;
        case 0x16eff8u: goto label_16eff8;
        case 0x16effcu: goto label_16effc;
        case 0x16f000u: goto label_16f000;
        case 0x16f004u: goto label_16f004;
        case 0x16f008u: goto label_16f008;
        case 0x16f00cu: goto label_16f00c;
        case 0x16f010u: goto label_16f010;
        case 0x16f014u: goto label_16f014;
        case 0x16f018u: goto label_16f018;
        case 0x16f01cu: goto label_16f01c;
        case 0x16f020u: goto label_16f020;
        case 0x16f024u: goto label_16f024;
        case 0x16f028u: goto label_16f028;
        case 0x16f02cu: goto label_16f02c;
        case 0x16f030u: goto label_16f030;
        case 0x16f034u: goto label_16f034;
        case 0x16f038u: goto label_16f038;
        case 0x16f03cu: goto label_16f03c;
        case 0x16f040u: goto label_16f040;
        case 0x16f044u: goto label_16f044;
        case 0x16f048u: goto label_16f048;
        case 0x16f04cu: goto label_16f04c;
        case 0x16f050u: goto label_16f050;
        case 0x16f054u: goto label_16f054;
        case 0x16f058u: goto label_16f058;
        case 0x16f05cu: goto label_16f05c;
        case 0x16f060u: goto label_16f060;
        case 0x16f064u: goto label_16f064;
        case 0x16f068u: goto label_16f068;
        case 0x16f06cu: goto label_16f06c;
        case 0x16f070u: goto label_16f070;
        case 0x16f074u: goto label_16f074;
        case 0x16f078u: goto label_16f078;
        case 0x16f07cu: goto label_16f07c;
        case 0x16f080u: goto label_16f080;
        case 0x16f084u: goto label_16f084;
        case 0x16f088u: goto label_16f088;
        case 0x16f08cu: goto label_16f08c;
        case 0x16f090u: goto label_16f090;
        case 0x16f094u: goto label_16f094;
        case 0x16f098u: goto label_16f098;
        case 0x16f09cu: goto label_16f09c;
        case 0x16f0a0u: goto label_16f0a0;
        case 0x16f0a4u: goto label_16f0a4;
        case 0x16f0a8u: goto label_16f0a8;
        case 0x16f0acu: goto label_16f0ac;
        case 0x16f0b0u: goto label_16f0b0;
        case 0x16f0b4u: goto label_16f0b4;
        case 0x16f0b8u: goto label_16f0b8;
        case 0x16f0bcu: goto label_16f0bc;
        case 0x16f0c0u: goto label_16f0c0;
        case 0x16f0c4u: goto label_16f0c4;
        case 0x16f0c8u: goto label_16f0c8;
        case 0x16f0ccu: goto label_16f0cc;
        case 0x16f0d0u: goto label_16f0d0;
        case 0x16f0d4u: goto label_16f0d4;
        case 0x16f0d8u: goto label_16f0d8;
        case 0x16f0dcu: goto label_16f0dc;
        case 0x16f0e0u: goto label_16f0e0;
        case 0x16f0e4u: goto label_16f0e4;
        case 0x16f0e8u: goto label_16f0e8;
        case 0x16f0ecu: goto label_16f0ec;
        case 0x16f0f0u: goto label_16f0f0;
        case 0x16f0f4u: goto label_16f0f4;
        case 0x16f0f8u: goto label_16f0f8;
        case 0x16f0fcu: goto label_16f0fc;
        case 0x16f100u: goto label_16f100;
        case 0x16f104u: goto label_16f104;
        case 0x16f108u: goto label_16f108;
        case 0x16f10cu: goto label_16f10c;
        case 0x16f110u: goto label_16f110;
        case 0x16f114u: goto label_16f114;
        case 0x16f118u: goto label_16f118;
        case 0x16f11cu: goto label_16f11c;
        case 0x16f120u: goto label_16f120;
        case 0x16f124u: goto label_16f124;
        case 0x16f128u: goto label_16f128;
        case 0x16f12cu: goto label_16f12c;
        case 0x16f130u: goto label_16f130;
        case 0x16f134u: goto label_16f134;
        case 0x16f138u: goto label_16f138;
        case 0x16f13cu: goto label_16f13c;
        case 0x16f140u: goto label_16f140;
        case 0x16f144u: goto label_16f144;
        case 0x16f148u: goto label_16f148;
        case 0x16f14cu: goto label_16f14c;
        case 0x16f150u: goto label_16f150;
        case 0x16f154u: goto label_16f154;
        case 0x16f158u: goto label_16f158;
        case 0x16f15cu: goto label_16f15c;
        case 0x16f160u: goto label_16f160;
        case 0x16f164u: goto label_16f164;
        case 0x16f168u: goto label_16f168;
        case 0x16f16cu: goto label_16f16c;
        case 0x16f170u: goto label_16f170;
        case 0x16f174u: goto label_16f174;
        case 0x16f178u: goto label_16f178;
        case 0x16f17cu: goto label_16f17c;
        case 0x16f180u: goto label_16f180;
        case 0x16f184u: goto label_16f184;
        case 0x16f188u: goto label_16f188;
        case 0x16f18cu: goto label_16f18c;
        case 0x16f190u: goto label_16f190;
        case 0x16f194u: goto label_16f194;
        case 0x16f198u: goto label_16f198;
        case 0x16f19cu: goto label_16f19c;
        case 0x16f1a0u: goto label_16f1a0;
        case 0x16f1a4u: goto label_16f1a4;
        case 0x16f1a8u: goto label_16f1a8;
        case 0x16f1acu: goto label_16f1ac;
        case 0x16f1b0u: goto label_16f1b0;
        case 0x16f1b4u: goto label_16f1b4;
        case 0x16f1b8u: goto label_16f1b8;
        case 0x16f1bcu: goto label_16f1bc;
        case 0x16f1c0u: goto label_16f1c0;
        case 0x16f1c4u: goto label_16f1c4;
        case 0x16f1c8u: goto label_16f1c8;
        case 0x16f1ccu: goto label_16f1cc;
        default: break;
    }

    ctx->pc = 0x16e6f0u;

label_16e6f0:
    // 0x16e6f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16e6f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_16e6f4:
    // 0x16e6f4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x16e6f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_16e6f8:
    // 0x16e6f8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x16e6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_16e6fc:
    // 0x16e6fc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x16e6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_16e700:
    // 0x16e700: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x16e700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_16e704:
    // 0x16e704: 0x3e00008  jr          $ra
label_16e708:
    if (ctx->pc == 0x16E708u) {
        ctx->pc = 0x16E70Cu;
        goto label_16e70c;
    }
    ctx->pc = 0x16E704u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16E704u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16E70Cu;
label_16e70c:
    // 0x16e70c: 0x0  nop
    ctx->pc = 0x16e70cu;
    // NOP
label_16e710:
    // 0x16e710: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x16e710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
label_16e714:
    // 0x16e714: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x16e714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_16e718:
    // 0x16e718: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x16e718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_16e71c:
    // 0x16e71c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x16e71cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_16e720:
    // 0x16e720: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x16e720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_16e724:
    // 0x16e724: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x16e724u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_16e728:
    // 0x16e728: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x16e728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_16e72c:
    // 0x16e72c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x16e72cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_16e730:
    // 0x16e730: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x16e730u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_16e734:
    // 0x16e734: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x16e734u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_16e738:
    // 0x16e738: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16e738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_16e73c:
    // 0x16e73c: 0xafa40120  sw          $a0, 0x120($sp)
    ctx->pc = 0x16e73cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 4));
label_16e740:
    // 0x16e740: 0xa3a50130  sb          $a1, 0x130($sp)
    ctx->pc = 0x16e740u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 304), (uint8_t)GPR_U32(ctx, 5));
label_16e744:
    // 0x16e744: 0x8fa40120  lw          $a0, 0x120($sp)
    ctx->pc = 0x16e744u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_16e748:
    // 0x16e748: 0x93a50130  lbu         $a1, 0x130($sp)
    ctx->pc = 0x16e748u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 304)));
label_16e74c:
    // 0x16e74c: 0xc055a78  jal         func_1569E0
label_16e750:
    if (ctx->pc == 0x16E750u) {
        ctx->pc = 0x16E754u;
        goto label_16e754;
    }
    ctx->pc = 0x16E74Cu;
    SET_GPR_U32(ctx, 31, 0x16E754u);
    ctx->pc = 0x1569E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1569E0u, 0x16E74Cu, 0x16E754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E754u;
label_16e754:
    // 0x16e754: 0x93a20130  lbu         $v0, 0x130($sp)
    ctx->pc = 0x16e754u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 304)));
label_16e758:
    // 0x16e758: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_16e75c:
    if (ctx->pc == 0x16E75Cu) {
        ctx->pc = 0x16E760u;
        goto label_16e760;
    }
    ctx->pc = 0x16E758u;
    {
        const bool branch_taken_0x16e758 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16e758) {
            ctx->pc = 0x16E794u;
            goto label_16e794;
        }
    }
    ctx->pc = 0x16E760u;
label_16e760:
    // 0x16e760: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x16e760u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
label_16e764:
    // 0x16e764: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x16e764u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16e768:
    // 0x16e768: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16e768u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16e76c:
    // 0x16e76c: 0xc08f740  jal         func_23DD00
label_16e770:
    if (ctx->pc == 0x16E770u) {
        ctx->pc = 0x16E774u;
        goto label_16e774;
    }
    ctx->pc = 0x16E76Cu;
    SET_GPR_U32(ctx, 31, 0x16E774u);
    ctx->pc = 0x23DD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23DD00u, 0x16E76Cu, 0x16E774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E774u;
label_16e774:
    // 0x16e774: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x16e774u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
label_16e778:
    // 0x16e778: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x16e778u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_16e77c:
    // 0x16e77c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x16e77cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16e780:
    // 0x16e780: 0xc08f71c  jal         func_23DC70
label_16e784:
    if (ctx->pc == 0x16E784u) {
        ctx->pc = 0x16E788u;
        goto label_16e788;
    }
    ctx->pc = 0x16E780u;
    SET_GPR_U32(ctx, 31, 0x16E788u);
    ctx->pc = 0x23DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23DC70u, 0x16E780u, 0x16E788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E788u;
label_16e788:
    // 0x16e788: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16e788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16e78c:
    // 0x16e78c: 0x8fa40120  lw          $a0, 0x120($sp)
    ctx->pc = 0x16e78cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_16e790:
    // 0x16e790: 0xa08200c8  sb          $v0, 0xC8($a0)
    ctx->pc = 0x16e790u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 200), (uint8_t)GPR_U32(ctx, 2));
label_16e794:
    // 0x16e794: 0xc05548c  jal         func_155230
label_16e798:
    if (ctx->pc == 0x16E798u) {
        ctx->pc = 0x16E79Cu;
        goto label_16e79c;
    }
    ctx->pc = 0x16E794u;
    SET_GPR_U32(ctx, 31, 0x16E79Cu);
    ctx->pc = 0x155230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155230u, 0x16E794u, 0x16E79Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E79Cu;
label_16e79c:
    // 0x16e79c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x16e79cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16e7a0:
    // 0x16e7a0: 0x2405001d  addiu       $a1, $zero, 0x1D
    ctx->pc = 0x16e7a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
label_16e7a4:
    // 0x16e7a4: 0xc0553d4  jal         func_154F50
label_16e7a8:
    if (ctx->pc == 0x16E7A8u) {
        ctx->pc = 0x16E7ACu;
        goto label_16e7ac;
    }
    ctx->pc = 0x16E7A4u;
    SET_GPR_U32(ctx, 31, 0x16E7ACu);
    ctx->pc = 0x154F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154F50u, 0x16E7A4u, 0x16E7ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E7ACu;
label_16e7ac:
    // 0x16e7ac: 0xafa2011c  sw          $v0, 0x11C($sp)
    ctx->pc = 0x16e7acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 2));
label_16e7b0:
    // 0x16e7b0: 0x93a20130  lbu         $v0, 0x130($sp)
    ctx->pc = 0x16e7b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 304)));
label_16e7b4:
    // 0x16e7b4: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x16e7b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_16e7b8:
    // 0x16e7b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16e7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16e7bc:
    // 0x16e7bc: 0x148201ca  bne         $a0, $v0, . + 4 + (0x1CA << 2)
label_16e7c0:
    if (ctx->pc == 0x16E7C0u) {
        ctx->pc = 0x16E7C4u;
        goto label_16e7c4;
    }
    ctx->pc = 0x16E7BCu;
    {
        const bool branch_taken_0x16e7bc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x16e7bc) {
            ctx->pc = 0x16EEE8u;
            goto label_16eee8;
        }
    }
    ctx->pc = 0x16E7C4u;
label_16e7c4:
    // 0x16e7c4: 0x27a400d8  addiu       $a0, $sp, 0xD8
    ctx->pc = 0x16e7c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
label_16e7c8:
    // 0x16e7c8: 0xc0495d4  jal         func_125750
label_16e7cc:
    if (ctx->pc == 0x16E7CCu) {
        ctx->pc = 0x16E7D0u;
        goto label_16e7d0;
    }
    ctx->pc = 0x16E7C8u;
    SET_GPR_U32(ctx, 31, 0x16E7D0u);
    ctx->pc = 0x125750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125750u, 0x16E7C8u, 0x16E7D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E7D0u;
label_16e7d0:
    // 0x16e7d0: 0x27a400c8  addiu       $a0, $sp, 0xC8
    ctx->pc = 0x16e7d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
label_16e7d4:
    // 0x16e7d4: 0xc0495d4  jal         func_125750
label_16e7d8:
    if (ctx->pc == 0x16E7D8u) {
        ctx->pc = 0x16E7DCu;
        goto label_16e7dc;
    }
    ctx->pc = 0x16E7D4u;
    SET_GPR_U32(ctx, 31, 0x16E7DCu);
    ctx->pc = 0x125750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125750u, 0x16E7D4u, 0x16E7DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E7DCu;
label_16e7dc:
    // 0x16e7dc: 0x8f84bbdc  lw          $a0, -0x4424($gp)
    ctx->pc = 0x16e7dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949852)));
label_16e7e0:
    // 0x16e7e0: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x16e7e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_16e7e4:
    // 0x16e7e4: 0x24a54468  addiu       $a1, $a1, 0x4468
    ctx->pc = 0x16e7e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17512));
label_16e7e8:
    // 0x16e7e8: 0x27a600d8  addiu       $a2, $sp, 0xD8
    ctx->pc = 0x16e7e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
label_16e7ec:
    // 0x16e7ec: 0xc08e514  jal         func_239450
label_16e7f0:
    if (ctx->pc == 0x16E7F0u) {
        ctx->pc = 0x16E7F4u;
        goto label_16e7f4;
    }
    ctx->pc = 0x16E7ECu;
    SET_GPR_U32(ctx, 31, 0x16E7F4u);
    ctx->pc = 0x239450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239450u, 0x16E7ECu, 0x16E7F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E7F4u;
label_16e7f4:
    // 0x16e7f4: 0x8f82bbdc  lw          $v0, -0x4424($gp)
    ctx->pc = 0x16e7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949852)));
label_16e7f8:
    // 0x16e7f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x16e7f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16e7fc:
    // 0x16e7fc: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x16e7fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_16e800:
    // 0x16e800: 0x24a54478  addiu       $a1, $a1, 0x4478
    ctx->pc = 0x16e800u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17528));
label_16e804:
    // 0x16e804: 0x27a600c8  addiu       $a2, $sp, 0xC8
    ctx->pc = 0x16e804u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
label_16e808:
    // 0x16e808: 0xc08e514  jal         func_239450
label_16e80c:
    if (ctx->pc == 0x16E80Cu) {
        ctx->pc = 0x16E810u;
        goto label_16e810;
    }
    ctx->pc = 0x16E808u;
    SET_GPR_U32(ctx, 31, 0x16E810u);
    ctx->pc = 0x239450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239450u, 0x16E808u, 0x16E810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E810u;
label_16e810:
    // 0x16e810: 0x27a400d8  addiu       $a0, $sp, 0xD8
    ctx->pc = 0x16e810u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
label_16e814:
    // 0x16e814: 0x27a500c8  addiu       $a1, $sp, 0xC8
    ctx->pc = 0x16e814u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
label_16e818:
    // 0x16e818: 0x3c064004  lui         $a2, 0x4004
    ctx->pc = 0x16e818u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16388 << 16));
label_16e81c:
    // 0x16e81c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x16e81cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16e820:
    // 0x16e820: 0x8fa80120  lw          $t0, 0x120($sp)
    ctx->pc = 0x16e820u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_16e824:
    // 0x16e824: 0xc08d218  jal         func_234860
label_16e828:
    if (ctx->pc == 0x16E828u) {
        ctx->pc = 0x16E82Cu;
        goto label_16e82c;
    }
    ctx->pc = 0x16E824u;
    SET_GPR_U32(ctx, 31, 0x16E82Cu);
    ctx->pc = 0x234860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x234860u, 0x16E824u, 0x16E82Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E82Cu;
label_16e82c:
    // 0x16e82c: 0x8f83bb70  lw          $v1, -0x4490($gp)
    ctx->pc = 0x16e82cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_16e830:
    // 0x16e830: 0x8c620050  lw          $v0, 0x50($v1)
    ctx->pc = 0x16e830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
label_16e834:
    // 0x16e834: 0x2c410012  sltiu       $at, $v0, 0x12
    ctx->pc = 0x16e834u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)18) ? 1 : 0);
label_16e838:
    // 0x16e838: 0x10200150  beqz        $at, . + 4 + (0x150 << 2)
label_16e83c:
    if (ctx->pc == 0x16E83Cu) {
        ctx->pc = 0x16E840u;
        goto label_16e840;
    }
    ctx->pc = 0x16E838u;
    {
        const bool branch_taken_0x16e838 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16e838) {
            ctx->pc = 0x16ED7Cu;
            goto label_16ed7c;
        }
    }
    ctx->pc = 0x16E840u;
label_16e840:
    // 0x16e840: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x16e840u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_16e844:
    // 0x16e844: 0x24638560  addiu       $v1, $v1, -0x7AA0
    ctx->pc = 0x16e844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935904));
label_16e848:
    // 0x16e848: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16e848u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_16e84c:
    // 0x16e84c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16e84cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_16e850:
    // 0x16e850: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x16e850u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_16e854:
    // 0x16e854: 0x800008  jr          $a0
label_16e858:
    if (ctx->pc == 0x16E858u) {
        ctx->pc = 0x16E85Cu;
        goto label_16e85c;
    }
    ctx->pc = 0x16E854u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16E85Cu: goto label_16e85c;
            case 0x16E8B0u: goto label_16e8b0;
            case 0x16E900u: goto label_16e900;
            case 0x16E950u: goto label_16e950;
            case 0x16E99Cu: goto label_16e99c;
            case 0x16E9E8u: goto label_16e9e8;
            case 0x16EA34u: goto label_16ea34;
            case 0x16EA80u: goto label_16ea80;
            case 0x16EACCu: goto label_16eacc;
            case 0x16EB18u: goto label_16eb18;
            case 0x16EB64u: goto label_16eb64;
            case 0x16EBA8u: goto label_16eba8;
            case 0x16EBECu: goto label_16ebec;
            case 0x16EC30u: goto label_16ec30;
            case 0x16EC74u: goto label_16ec74;
            case 0x16ECB8u: goto label_16ecb8;
            case 0x16ECFCu: goto label_16ecfc;
            case 0x16ED40u: goto label_16ed40;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16E854u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x16E85Cu;
label_16e85c:
    // 0x16e85c: 0x240400f4  addiu       $a0, $zero, 0xF4
    ctx->pc = 0x16e85cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 244));
label_16e860:
    // 0x16e860: 0xc119b68  jal         func_466DA0
label_16e864:
    if (ctx->pc == 0x16E864u) {
        ctx->pc = 0x16E868u;
        goto label_16e868;
    }
    ctx->pc = 0x16E860u;
    SET_GPR_U32(ctx, 31, 0x16E868u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x16E860u, 0x16E868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E868u;
label_16e868:
    // 0x16e868: 0x240400f4  addiu       $a0, $zero, 0xF4
    ctx->pc = 0x16e868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 244));
label_16e86c:
    // 0x16e86c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x16e86cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16e870:
    // 0x16e870: 0xc0400e0  jal         func_100380
label_16e874:
    if (ctx->pc == 0x16E874u) {
        ctx->pc = 0x16E878u;
        goto label_16e878;
    }
    ctx->pc = 0x16E870u;
    SET_GPR_U32(ctx, 31, 0x16E878u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x16E870u, 0x16E878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E878u;
label_16e878:
    // 0x16e878: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x16e878u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16e87c:
    // 0x16e87c: 0xafa30108  sw          $v1, 0x108($sp)
    ctx->pc = 0x16e87cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 3));
label_16e880:
    // 0x16e880: 0x8fa70108  lw          $a3, 0x108($sp)
    ctx->pc = 0x16e880u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
label_16e884:
    // 0x16e884: 0x10e00006  beqz        $a3, . + 4 + (0x6 << 2)
label_16e888:
    if (ctx->pc == 0x16E888u) {
        ctx->pc = 0x16E88Cu;
        goto label_16e88c;
    }
    ctx->pc = 0x16E884u;
    {
        const bool branch_taken_0x16e884 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x16e884) {
            ctx->pc = 0x16E8A0u;
            goto label_16e8a0;
        }
    }
    ctx->pc = 0x16E88Cu;
label_16e88c:
    // 0x16e88c: 0x8fa50108  lw          $a1, 0x108($sp)
    ctx->pc = 0x16e88cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
label_16e890:
    // 0x16e890: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x16e890u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_16e894:
    // 0x16e894: 0xc074640  jal         func_1D1900
label_16e898:
    if (ctx->pc == 0x16E898u) {
        ctx->pc = 0x16E89Cu;
        goto label_16e89c;
    }
    ctx->pc = 0x16E894u;
    SET_GPR_U32(ctx, 31, 0x16E89Cu);
    ctx->pc = 0x1D1900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1900u, 0x16E894u, 0x16E89Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E89Cu;
label_16e89c:
    // 0x16e89c: 0xafa20108  sw          $v0, 0x108($sp)
    ctx->pc = 0x16e89cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 2));
label_16e8a0:
    // 0x16e8a0: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x16e8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
label_16e8a4:
    // 0x16e8a4: 0xaf82bad4  sw          $v0, -0x452C($gp)
    ctx->pc = 0x16e8a4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949588), GPR_U32(ctx, 2));
label_16e8a8:
    // 0x16e8a8: 0x10000134  b           . + 4 + (0x134 << 2)
label_16e8ac:
    if (ctx->pc == 0x16E8ACu) {
        ctx->pc = 0x16E8B0u;
        goto label_16e8b0;
    }
    ctx->pc = 0x16E8A8u;
    {
        const bool branch_taken_0x16e8a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16e8a8) {
            ctx->pc = 0x16ED7Cu;
            goto label_16ed7c;
        }
    }
    ctx->pc = 0x16E8B0u;
label_16e8b0:
    // 0x16e8b0: 0x24040160  addiu       $a0, $zero, 0x160
    ctx->pc = 0x16e8b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
label_16e8b4:
    // 0x16e8b4: 0xc119b68  jal         func_466DA0
label_16e8b8:
    if (ctx->pc == 0x16E8B8u) {
        ctx->pc = 0x16E8BCu;
        goto label_16e8bc;
    }
    ctx->pc = 0x16E8B4u;
    SET_GPR_U32(ctx, 31, 0x16E8BCu);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x16E8B4u, 0x16E8BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E8BCu;
label_16e8bc:
    // 0x16e8bc: 0x24040160  addiu       $a0, $zero, 0x160
    ctx->pc = 0x16e8bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
label_16e8c0:
    // 0x16e8c0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x16e8c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16e8c4:
    // 0x16e8c4: 0xc0400e0  jal         func_100380
label_16e8c8:
    if (ctx->pc == 0x16E8C8u) {
        ctx->pc = 0x16E8CCu;
        goto label_16e8cc;
    }
    ctx->pc = 0x16E8C4u;
    SET_GPR_U32(ctx, 31, 0x16E8CCu);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x16E8C4u, 0x16E8CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E8CCu;
label_16e8cc:
    // 0x16e8cc: 0xafa20104  sw          $v0, 0x104($sp)
    ctx->pc = 0x16e8ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 2));
label_16e8d0:
    // 0x16e8d0: 0x8fa40104  lw          $a0, 0x104($sp)
    ctx->pc = 0x16e8d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
label_16e8d4:
    // 0x16e8d4: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_16e8d8:
    if (ctx->pc == 0x16E8D8u) {
        ctx->pc = 0x16E8DCu;
        goto label_16e8dc;
    }
    ctx->pc = 0x16E8D4u;
    {
        const bool branch_taken_0x16e8d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x16e8d4) {
            ctx->pc = 0x16E8F0u;
            goto label_16e8f0;
        }
    }
    ctx->pc = 0x16E8DCu;
label_16e8dc:
    // 0x16e8dc: 0x8fa50104  lw          $a1, 0x104($sp)
    ctx->pc = 0x16e8dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
label_16e8e0:
    // 0x16e8e0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x16e8e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_16e8e4:
    // 0x16e8e4: 0xc06a050  jal         func_1A8140
label_16e8e8:
    if (ctx->pc == 0x16E8E8u) {
        ctx->pc = 0x16E8ECu;
        goto label_16e8ec;
    }
    ctx->pc = 0x16E8E4u;
    SET_GPR_U32(ctx, 31, 0x16E8ECu);
    ctx->pc = 0x1A8140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8140u, 0x16E8E4u, 0x16E8ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E8ECu;
label_16e8ec:
    // 0x16e8ec: 0xafa20104  sw          $v0, 0x104($sp)
    ctx->pc = 0x16e8ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 2));
label_16e8f0:
    // 0x16e8f0: 0x8fa40104  lw          $a0, 0x104($sp)
    ctx->pc = 0x16e8f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
label_16e8f4:
    // 0x16e8f4: 0xaf84bad4  sw          $a0, -0x452C($gp)
    ctx->pc = 0x16e8f4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949588), GPR_U32(ctx, 4));
label_16e8f8:
    // 0x16e8f8: 0x10000120  b           . + 4 + (0x120 << 2)
label_16e8fc:
    if (ctx->pc == 0x16E8FCu) {
        ctx->pc = 0x16E900u;
        goto label_16e900;
    }
    ctx->pc = 0x16E8F8u;
    {
        const bool branch_taken_0x16e8f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16e8f8) {
            ctx->pc = 0x16ED7Cu;
            goto label_16ed7c;
        }
    }
    ctx->pc = 0x16E900u;
label_16e900:
    // 0x16e900: 0x240509c4  addiu       $a1, $zero, 0x9C4
    ctx->pc = 0x16e900u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2500));
label_16e904:
    // 0x16e904: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x16e904u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_16e908:
    // 0x16e908: 0xc119b68  jal         func_466DA0
label_16e90c:
    if (ctx->pc == 0x16E90Cu) {
        ctx->pc = 0x16E910u;
        goto label_16e910;
    }
    ctx->pc = 0x16E908u;
    SET_GPR_U32(ctx, 31, 0x16E910u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x16E908u, 0x16E910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E910u;
label_16e910:
    // 0x16e910: 0x240409c4  addiu       $a0, $zero, 0x9C4
    ctx->pc = 0x16e910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2500));
label_16e914:
    // 0x16e914: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x16e914u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16e918:
    // 0x16e918: 0xc0400e0  jal         func_100380
label_16e91c:
    if (ctx->pc == 0x16E91Cu) {
        ctx->pc = 0x16E920u;
        goto label_16e920;
    }
    ctx->pc = 0x16E918u;
    SET_GPR_U32(ctx, 31, 0x16E920u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x16E918u, 0x16E920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E920u;
label_16e920:
    // 0x16e920: 0xafa20100  sw          $v0, 0x100($sp)
    ctx->pc = 0x16e920u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
label_16e924:
    // 0x16e924: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x16e924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_16e928:
    // 0x16e928: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_16e92c:
    if (ctx->pc == 0x16E92Cu) {
        ctx->pc = 0x16E930u;
        goto label_16e930;
    }
    ctx->pc = 0x16E928u;
    {
        const bool branch_taken_0x16e928 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16e928) {
            ctx->pc = 0x16E940u;
            goto label_16e940;
        }
    }
    ctx->pc = 0x16E930u;
label_16e930:
    // 0x16e930: 0x8fa40100  lw          $a0, 0x100($sp)
    ctx->pc = 0x16e930u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_16e934:
    // 0x16e934: 0xc06e374  jal         func_1B8DD0
label_16e938:
    if (ctx->pc == 0x16E938u) {
        ctx->pc = 0x16E93Cu;
        goto label_16e93c;
    }
    ctx->pc = 0x16E934u;
    SET_GPR_U32(ctx, 31, 0x16E93Cu);
    ctx->pc = 0x1B8DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8DD0u, 0x16E934u, 0x16E93Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E93Cu;
label_16e93c:
    // 0x16e93c: 0xafa20100  sw          $v0, 0x100($sp)
    ctx->pc = 0x16e93cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
label_16e940:
    // 0x16e940: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x16e940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_16e944:
    // 0x16e944: 0xaf82bad4  sw          $v0, -0x452C($gp)
    ctx->pc = 0x16e944u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949588), GPR_U32(ctx, 2));
label_16e948:
    // 0x16e948: 0x1000010c  b           . + 4 + (0x10C << 2)
label_16e94c:
    if (ctx->pc == 0x16E94Cu) {
        ctx->pc = 0x16E950u;
        goto label_16e950;
    }
    ctx->pc = 0x16E948u;
    {
        const bool branch_taken_0x16e948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16e948) {
            ctx->pc = 0x16ED7Cu;
            goto label_16ed7c;
        }
    }
    ctx->pc = 0x16E950u;
label_16e950:
    // 0x16e950: 0x24040138  addiu       $a0, $zero, 0x138
    ctx->pc = 0x16e950u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 312));
label_16e954:
    // 0x16e954: 0xc119b68  jal         func_466DA0
label_16e958:
    if (ctx->pc == 0x16E958u) {
        ctx->pc = 0x16E95Cu;
        goto label_16e95c;
    }
    ctx->pc = 0x16E954u;
    SET_GPR_U32(ctx, 31, 0x16E95Cu);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x16E954u, 0x16E95Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E95Cu;
label_16e95c:
    // 0x16e95c: 0x24040138  addiu       $a0, $zero, 0x138
    ctx->pc = 0x16e95cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 312));
label_16e960:
    // 0x16e960: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x16e960u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16e964:
    // 0x16e964: 0xc0400e0  jal         func_100380
label_16e968:
    if (ctx->pc == 0x16E968u) {
        ctx->pc = 0x16E96Cu;
        goto label_16e96c;
    }
    ctx->pc = 0x16E964u;
    SET_GPR_U32(ctx, 31, 0x16E96Cu);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x16E964u, 0x16E96Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E96Cu;
label_16e96c:
    // 0x16e96c: 0xafa200fc  sw          $v0, 0xFC($sp)
    ctx->pc = 0x16e96cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 2));
label_16e970:
    // 0x16e970: 0x8fa200fc  lw          $v0, 0xFC($sp)
    ctx->pc = 0x16e970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
label_16e974:
    // 0x16e974: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_16e978:
    if (ctx->pc == 0x16E978u) {
        ctx->pc = 0x16E97Cu;
        goto label_16e97c;
    }
    ctx->pc = 0x16E974u;
    {
        const bool branch_taken_0x16e974 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16e974) {
            ctx->pc = 0x16E98Cu;
            goto label_16e98c;
        }
    }
    ctx->pc = 0x16E97Cu;
label_16e97c:
    // 0x16e97c: 0x8fa400fc  lw          $a0, 0xFC($sp)
    ctx->pc = 0x16e97cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
label_16e980:
    // 0x16e980: 0xc07e774  jal         func_1F9DD0
label_16e984:
    if (ctx->pc == 0x16E984u) {
        ctx->pc = 0x16E988u;
        goto label_16e988;
    }
    ctx->pc = 0x16E980u;
    SET_GPR_U32(ctx, 31, 0x16E988u);
    ctx->pc = 0x1F9DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9DD0u, 0x16E980u, 0x16E988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E988u;
label_16e988:
    // 0x16e988: 0xafa200fc  sw          $v0, 0xFC($sp)
    ctx->pc = 0x16e988u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 2));
label_16e98c:
    // 0x16e98c: 0x8fa200fc  lw          $v0, 0xFC($sp)
    ctx->pc = 0x16e98cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
label_16e990:
    // 0x16e990: 0xaf82bad4  sw          $v0, -0x452C($gp)
    ctx->pc = 0x16e990u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949588), GPR_U32(ctx, 2));
label_16e994:
    // 0x16e994: 0x100000f9  b           . + 4 + (0xF9 << 2)
label_16e998:
    if (ctx->pc == 0x16E998u) {
        ctx->pc = 0x16E99Cu;
        goto label_16e99c;
    }
    ctx->pc = 0x16E994u;
    {
        const bool branch_taken_0x16e994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16e994) {
            ctx->pc = 0x16ED7Cu;
            goto label_16ed7c;
        }
    }
    ctx->pc = 0x16E99Cu;
label_16e99c:
    // 0x16e99c: 0x2404015c  addiu       $a0, $zero, 0x15C
    ctx->pc = 0x16e99cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 348));
label_16e9a0:
    // 0x16e9a0: 0xc119b68  jal         func_466DA0
label_16e9a4:
    if (ctx->pc == 0x16E9A4u) {
        ctx->pc = 0x16E9A8u;
        goto label_16e9a8;
    }
    ctx->pc = 0x16E9A0u;
    SET_GPR_U32(ctx, 31, 0x16E9A8u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x16E9A0u, 0x16E9A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E9A8u;
label_16e9a8:
    // 0x16e9a8: 0x2404015c  addiu       $a0, $zero, 0x15C
    ctx->pc = 0x16e9a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 348));
label_16e9ac:
    // 0x16e9ac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x16e9acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16e9b0:
    // 0x16e9b0: 0xc0400e0  jal         func_100380
label_16e9b4:
    if (ctx->pc == 0x16E9B4u) {
        ctx->pc = 0x16E9B8u;
        goto label_16e9b8;
    }
    ctx->pc = 0x16E9B0u;
    SET_GPR_U32(ctx, 31, 0x16E9B8u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x16E9B0u, 0x16E9B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E9B8u;
label_16e9b8:
    // 0x16e9b8: 0xafa200f8  sw          $v0, 0xF8($sp)
    ctx->pc = 0x16e9b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 2));
label_16e9bc:
    // 0x16e9bc: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x16e9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
label_16e9c0:
    // 0x16e9c0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_16e9c4:
    if (ctx->pc == 0x16E9C4u) {
        ctx->pc = 0x16E9C8u;
        goto label_16e9c8;
    }
    ctx->pc = 0x16E9C0u;
    {
        const bool branch_taken_0x16e9c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16e9c0) {
            ctx->pc = 0x16E9D8u;
            goto label_16e9d8;
        }
    }
    ctx->pc = 0x16E9C8u;
label_16e9c8:
    // 0x16e9c8: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x16e9c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
label_16e9cc:
    // 0x16e9cc: 0xc0739e4  jal         func_1CE790
label_16e9d0:
    if (ctx->pc == 0x16E9D0u) {
        ctx->pc = 0x16E9D4u;
        goto label_16e9d4;
    }
    ctx->pc = 0x16E9CCu;
    SET_GPR_U32(ctx, 31, 0x16E9D4u);
    ctx->pc = 0x1CE790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE790u, 0x16E9CCu, 0x16E9D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E9D4u;
label_16e9d4:
    // 0x16e9d4: 0xafa200f8  sw          $v0, 0xF8($sp)
    ctx->pc = 0x16e9d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 2));
label_16e9d8:
    // 0x16e9d8: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x16e9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
label_16e9dc:
    // 0x16e9dc: 0xaf82bad4  sw          $v0, -0x452C($gp)
    ctx->pc = 0x16e9dcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949588), GPR_U32(ctx, 2));
label_16e9e0:
    // 0x16e9e0: 0x100000e6  b           . + 4 + (0xE6 << 2)
label_16e9e4:
    if (ctx->pc == 0x16E9E4u) {
        ctx->pc = 0x16E9E8u;
        goto label_16e9e8;
    }
    ctx->pc = 0x16E9E0u;
    {
        const bool branch_taken_0x16e9e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16e9e0) {
            ctx->pc = 0x16ED7Cu;
            goto label_16ed7c;
        }
    }
    ctx->pc = 0x16E9E8u;
label_16e9e8:
    // 0x16e9e8: 0x240400d8  addiu       $a0, $zero, 0xD8
    ctx->pc = 0x16e9e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 216));
label_16e9ec:
    // 0x16e9ec: 0xc119b68  jal         func_466DA0
label_16e9f0:
    if (ctx->pc == 0x16E9F0u) {
        ctx->pc = 0x16E9F4u;
        goto label_16e9f4;
    }
    ctx->pc = 0x16E9ECu;
    SET_GPR_U32(ctx, 31, 0x16E9F4u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x16E9ECu, 0x16E9F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E9F4u;
label_16e9f4:
    // 0x16e9f4: 0x240400d8  addiu       $a0, $zero, 0xD8
    ctx->pc = 0x16e9f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 216));
label_16e9f8:
    // 0x16e9f8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x16e9f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16e9fc:
    // 0x16e9fc: 0xc0400e0  jal         func_100380
label_16ea00:
    if (ctx->pc == 0x16EA00u) {
        ctx->pc = 0x16EA04u;
        goto label_16ea04;
    }
    ctx->pc = 0x16E9FCu;
    SET_GPR_U32(ctx, 31, 0x16EA04u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x16E9FCu, 0x16EA04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16EA04u;
label_16ea04:
    // 0x16ea04: 0xafa200f4  sw          $v0, 0xF4($sp)
    ctx->pc = 0x16ea04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 2));
label_16ea08:
    // 0x16ea08: 0x8fa200f4  lw          $v0, 0xF4($sp)
    ctx->pc = 0x16ea08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
label_16ea0c:
    // 0x16ea0c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_16ea10:
    if (ctx->pc == 0x16EA10u) {
        ctx->pc = 0x16EA14u;
        goto label_16ea14;
    }
    ctx->pc = 0x16EA0Cu;
    {
        const bool branch_taken_0x16ea0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ea0c) {
            ctx->pc = 0x16EA24u;
            goto label_16ea24;
        }
    }
    ctx->pc = 0x16EA14u;
label_16ea14:
    // 0x16ea14: 0x8fa400f4  lw          $a0, 0xF4($sp)
    ctx->pc = 0x16ea14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
label_16ea18:
    // 0x16ea18: 0xc07a768  jal         func_1E9DA0
label_16ea1c:
    if (ctx->pc == 0x16EA1Cu) {
        ctx->pc = 0x16EA20u;
        goto label_16ea20;
    }
    ctx->pc = 0x16EA18u;
    SET_GPR_U32(ctx, 31, 0x16EA20u);
    ctx->pc = 0x1E9DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9DA0u, 0x16EA18u, 0x16EA20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16EA20u;
label_16ea20:
    // 0x16ea20: 0xafa200f4  sw          $v0, 0xF4($sp)
    ctx->pc = 0x16ea20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 2));
label_16ea24:
    // 0x16ea24: 0x8fa200f4  lw          $v0, 0xF4($sp)
    ctx->pc = 0x16ea24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
label_16ea28:
    // 0x16ea28: 0xaf82bad4  sw          $v0, -0x452C($gp)
    ctx->pc = 0x16ea28u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949588), GPR_U32(ctx, 2));
label_16ea2c:
    // 0x16ea2c: 0x100000d3  b           . + 4 + (0xD3 << 2)
label_16ea30:
    if (ctx->pc == 0x16EA30u) {
        ctx->pc = 0x16EA34u;
        goto label_16ea34;
    }
    ctx->pc = 0x16EA2Cu;
    {
        const bool branch_taken_0x16ea2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ea2c) {
            ctx->pc = 0x16ED7Cu;
            goto label_16ed7c;
        }
    }
    ctx->pc = 0x16EA34u;
label_16ea34:
    // 0x16ea34: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x16ea34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_16ea38:
    // 0x16ea38: 0xc119b68  jal         func_466DA0
label_16ea3c:
    if (ctx->pc == 0x16EA3Cu) {
        ctx->pc = 0x16EA40u;
        goto label_16ea40;
    }
    ctx->pc = 0x16EA38u;
    SET_GPR_U32(ctx, 31, 0x16EA40u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x16EA38u, 0x16EA40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16EA40u;
label_16ea40:
    // 0x16ea40: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x16ea40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_16ea44:
    // 0x16ea44: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x16ea44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16ea48:
    // 0x16ea48: 0xc0400e0  jal         func_100380
label_16ea4c:
    if (ctx->pc == 0x16EA4Cu) {
        ctx->pc = 0x16EA50u;
        goto label_16ea50;
    }
    ctx->pc = 0x16EA48u;
    SET_GPR_U32(ctx, 31, 0x16EA50u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x16EA48u, 0x16EA50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16EA50u;
label_16ea50:
    // 0x16ea50: 0xafa200f0  sw          $v0, 0xF0($sp)
    ctx->pc = 0x16ea50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
label_16ea54:
    // 0x16ea54: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x16ea54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_16ea58:
    // 0x16ea58: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_16ea5c:
    if (ctx->pc == 0x16EA5Cu) {
        ctx->pc = 0x16EA60u;
        goto label_16ea60;
    }
    ctx->pc = 0x16EA58u;
    {
        const bool branch_taken_0x16ea58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ea58) {
            ctx->pc = 0x16EA70u;
            goto label_16ea70;
        }
    }
    ctx->pc = 0x16EA60u;
label_16ea60:
    // 0x16ea60: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x16ea60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_16ea64:
    // 0x16ea64: 0xc0679f8  jal         func_19E7E0
label_16ea68:
    if (ctx->pc == 0x16EA68u) {
        ctx->pc = 0x16EA6Cu;
        goto label_16ea6c;
    }
    ctx->pc = 0x16EA64u;
    SET_GPR_U32(ctx, 31, 0x16EA6Cu);
    ctx->pc = 0x19E7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E7E0u, 0x16EA64u, 0x16EA6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16EA6Cu;
label_16ea6c:
    // 0x16ea6c: 0xafa200f0  sw          $v0, 0xF0($sp)
    ctx->pc = 0x16ea6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
label_16ea70:
    // 0x16ea70: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x16ea70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_16ea74:
    // 0x16ea74: 0xaf82bad4  sw          $v0, -0x452C($gp)
    ctx->pc = 0x16ea74u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949588), GPR_U32(ctx, 2));
label_16ea78:
    // 0x16ea78: 0x100000c0  b           . + 4 + (0xC0 << 2)
label_16ea7c:
    if (ctx->pc == 0x16EA7Cu) {
        ctx->pc = 0x16EA80u;
        goto label_16ea80;
    }
    ctx->pc = 0x16EA78u;
    {
        const bool branch_taken_0x16ea78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ea78) {
            ctx->pc = 0x16ED7Cu;
            goto label_16ed7c;
        }
    }
    ctx->pc = 0x16EA80u;
label_16ea80:
    // 0x16ea80: 0x2404014c  addiu       $a0, $zero, 0x14C
    ctx->pc = 0x16ea80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 332));
label_16ea84:
    // 0x16ea84: 0xc119b68  jal         func_466DA0
label_16ea88:
    if (ctx->pc == 0x16EA88u) {
        ctx->pc = 0x16EA8Cu;
        goto label_16ea8c;
    }
    ctx->pc = 0x16EA84u;
    SET_GPR_U32(ctx, 31, 0x16EA8Cu);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x16EA84u, 0x16EA8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16EA8Cu;
label_16ea8c:
    // 0x16ea8c: 0x2404014c  addiu       $a0, $zero, 0x14C
    ctx->pc = 0x16ea8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 332));
label_16ea90:
    // 0x16ea90: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x16ea90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16ea94:
    // 0x16ea94: 0xc0400e0  jal         func_100380
label_16ea98:
    if (ctx->pc == 0x16EA98u) {
        ctx->pc = 0x16EA9Cu;
        goto label_16ea9c;
    }
    ctx->pc = 0x16EA94u;
    SET_GPR_U32(ctx, 31, 0x16EA9Cu);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x16EA94u, 0x16EA9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16EA9Cu;
label_16ea9c:
    // 0x16ea9c: 0xafa200ec  sw          $v0, 0xEC($sp)
    ctx->pc = 0x16ea9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 2));
label_16eaa0:
    // 0x16eaa0: 0x8fa200ec  lw          $v0, 0xEC($sp)
    ctx->pc = 0x16eaa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
label_16eaa4:
    // 0x16eaa4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_16eaa8:
    if (ctx->pc == 0x16EAA8u) {
        ctx->pc = 0x16EAACu;
        goto label_16eaac;
    }
    ctx->pc = 0x16EAA4u;
    {
        const bool branch_taken_0x16eaa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16eaa4) {
            ctx->pc = 0x16EABCu;
            goto label_16eabc;
        }
    }
    ctx->pc = 0x16EAACu;
label_16eaac:
    // 0x16eaac: 0x8fa400ec  lw          $a0, 0xEC($sp)
    ctx->pc = 0x16eaacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
label_16eab0:
    // 0x16eab0: 0xc081e84  jal         func_207A10
label_16eab4:
    if (ctx->pc == 0x16EAB4u) {
        ctx->pc = 0x16EAB8u;
        goto label_16eab8;
    }
    ctx->pc = 0x16EAB0u;
    SET_GPR_U32(ctx, 31, 0x16EAB8u);
    ctx->pc = 0x207A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207A10u, 0x16EAB0u, 0x16EAB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16EAB8u;
label_16eab8:
    // 0x16eab8: 0xafa200ec  sw          $v0, 0xEC($sp)
    ctx->pc = 0x16eab8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 2));
label_16eabc:
    // 0x16eabc: 0x8fa200ec  lw          $v0, 0xEC($sp)
    ctx->pc = 0x16eabcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
label_16eac0:
    // 0x16eac0: 0xaf82bad4  sw          $v0, -0x452C($gp)
    ctx->pc = 0x16eac0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949588), GPR_U32(ctx, 2));
label_16eac4:
    // 0x16eac4: 0x100000ad  b           . + 4 + (0xAD << 2)
label_16eac8:
    if (ctx->pc == 0x16EAC8u) {
        ctx->pc = 0x16EACCu;
        goto label_16eacc;
    }
    ctx->pc = 0x16EAC4u;
    {
        const bool branch_taken_0x16eac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16eac4) {
            ctx->pc = 0x16ED7Cu;
            goto label_16ed7c;
        }
    }
    ctx->pc = 0x16EACCu;
label_16eacc:
    // 0x16eacc: 0x24040114  addiu       $a0, $zero, 0x114
    ctx->pc = 0x16eaccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 276));
label_16ead0:
    // 0x16ead0: 0xc119b68  jal         func_466DA0
label_16ead4:
    if (ctx->pc == 0x16EAD4u) {
        ctx->pc = 0x16EAD8u;
        goto label_16ead8;
    }
    ctx->pc = 0x16EAD0u;
    SET_GPR_U32(ctx, 31, 0x16EAD8u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x16EAD0u, 0x16EAD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16EAD8u;
label_16ead8:
    // 0x16ead8: 0x24040114  addiu       $a0, $zero, 0x114
    ctx->pc = 0x16ead8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 276));
label_16eadc:
    // 0x16eadc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x16eadcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16eae0:
    // 0x16eae0: 0xc0400e0  jal         func_100380
label_16eae4:
    if (ctx->pc == 0x16EAE4u) {
        ctx->pc = 0x16EAE8u;
        goto label_16eae8;
    }
    ctx->pc = 0x16EAE0u;
    SET_GPR_U32(ctx, 31, 0x16EAE8u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x16EAE0u, 0x16EAE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16EAE8u;
label_16eae8:
    // 0x16eae8: 0xafa200e8  sw          $v0, 0xE8($sp)
    ctx->pc = 0x16eae8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 2));
label_16eaec:
    // 0x16eaec: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x16eaecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_16eaf0:
    // 0x16eaf0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_16eaf4:
    if (ctx->pc == 0x16EAF4u) {
        ctx->pc = 0x16EAF8u;
        goto label_16eaf8;
    }
    ctx->pc = 0x16EAF0u;
    {
        const bool branch_taken_0x16eaf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16eaf0) {
            ctx->pc = 0x16EB08u;
            goto label_16eb08;
        }
    }
    ctx->pc = 0x16EAF8u;
label_16eaf8:
    // 0x16eaf8: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x16eaf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_16eafc:
    // 0x16eafc: 0xc080f50  jal         func_203D40
label_16eb00:
    if (ctx->pc == 0x16EB00u) {
        ctx->pc = 0x16EB04u;
        goto label_16eb04;
    }
    ctx->pc = 0x16EAFCu;
    SET_GPR_U32(ctx, 31, 0x16EB04u);
    ctx->pc = 0x203D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203D40u, 0x16EAFCu, 0x16EB04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16EB04u;
label_16eb04:
    // 0x16eb04: 0xafa200e8  sw          $v0, 0xE8($sp)
    ctx->pc = 0x16eb04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 2));
label_16eb08:
    // 0x16eb08: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x16eb08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_16eb0c:
    // 0x16eb0c: 0xaf82bad4  sw          $v0, -0x452C($gp)
    ctx->pc = 0x16eb0cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949588), GPR_U32(ctx, 2));
label_16eb10:
    // 0x16eb10: 0x1000009a  b           . + 4 + (0x9A << 2)
label_16eb14:
    if (ctx->pc == 0x16EB14u) {
        ctx->pc = 0x16EB18u;
        goto label_16eb18;
    }
    ctx->pc = 0x16EB10u;
    {
        const bool branch_taken_0x16eb10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16eb10) {
            ctx->pc = 0x16ED7Cu;
            goto label_16ed7c;
        }
    }
    ctx->pc = 0x16EB18u;
label_16eb18:
    // 0x16eb18: 0x2404010c  addiu       $a0, $zero, 0x10C
    ctx->pc = 0x16eb18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 268));
label_16eb1c:
    // 0x16eb1c: 0xc119b68  jal         func_466DA0
label_16eb20:
    if (ctx->pc == 0x16EB20u) {
        ctx->pc = 0x16EB24u;
        goto label_16eb24;
    }
    ctx->pc = 0x16EB1Cu;
    SET_GPR_U32(ctx, 31, 0x16EB24u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x16EB1Cu, 0x16EB24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16EB24u;
label_16eb24:
    // 0x16eb24: 0x2404010c  addiu       $a0, $zero, 0x10C
    ctx->pc = 0x16eb24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 268));
label_16eb28:
    // 0x16eb28: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x16eb28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16eb2c:
    // 0x16eb2c: 0xc0400e0  jal         func_100380
label_16eb30:
    if (ctx->pc == 0x16EB30u) {
        ctx->pc = 0x16EB34u;
        goto label_16eb34;
    }
    ctx->pc = 0x16EB2Cu;
    SET_GPR_U32(ctx, 31, 0x16EB34u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x16EB2Cu, 0x16EB34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16EB34u;
label_16eb34:
    // 0x16eb34: 0xafa200e4  sw          $v0, 0xE4($sp)
    ctx->pc = 0x16eb34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 2));
label_16eb38:
    // 0x16eb38: 0x8fa200e4  lw          $v0, 0xE4($sp)
    ctx->pc = 0x16eb38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
label_16eb3c:
    // 0x16eb3c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_16eb40:
    if (ctx->pc == 0x16EB40u) {
        ctx->pc = 0x16EB44u;
        goto label_16eb44;
    }
    ctx->pc = 0x16EB3Cu;
    {
        const bool branch_taken_0x16eb3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16eb3c) {
            ctx->pc = 0x16EB54u;
            goto label_16eb54;
        }
    }
    ctx->pc = 0x16EB44u;
label_16eb44:
    // 0x16eb44: 0x8fa400e4  lw          $a0, 0xE4($sp)
    ctx->pc = 0x16eb44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
label_16eb48:
    // 0x16eb48: 0xc071560  jal         func_1C5580
label_16eb4c:
    if (ctx->pc == 0x16EB4Cu) {
        ctx->pc = 0x16EB50u;
        goto label_16eb50;
    }
    ctx->pc = 0x16EB48u;
    SET_GPR_U32(ctx, 31, 0x16EB50u);
    ctx->pc = 0x1C5580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5580u, 0x16EB48u, 0x16EB50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16EB50u;
label_16eb50:
    // 0x16eb50: 0xafa200e4  sw          $v0, 0xE4($sp)
    ctx->pc = 0x16eb50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 2));
label_16eb54:
    // 0x16eb54: 0x8fa200e4  lw          $v0, 0xE4($sp)
    ctx->pc = 0x16eb54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
label_16eb58:
    // 0x16eb58: 0xaf82bad4  sw          $v0, -0x452C($gp)
    ctx->pc = 0x16eb58u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949588), GPR_U32(ctx, 2));
label_16eb5c:
    // 0x16eb5c: 0x10000087  b           . + 4 + (0x87 << 2)
label_16eb60:
    if (ctx->pc == 0x16EB60u) {
        ctx->pc = 0x16EB64u;
        goto label_16eb64;
    }
    ctx->pc = 0x16EB5Cu;
    {
        const bool branch_taken_0x16eb5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16eb5c) {
            ctx->pc = 0x16ED7Cu;
            goto label_16ed7c;
        }
    }
    ctx->pc = 0x16EB64u;
label_16eb64:
    // 0x16eb64: 0x24040144  addiu       $a0, $zero, 0x144
    ctx->pc = 0x16eb64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 324));
label_16eb68:
    // 0x16eb68: 0xc119b68  jal         func_466DA0
label_16eb6c:
    if (ctx->pc == 0x16EB6Cu) {
        ctx->pc = 0x16EB70u;
        goto label_16eb70;
    }
    ctx->pc = 0x16EB68u;
    SET_GPR_U32(ctx, 31, 0x16EB70u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x16EB68u, 0x16EB70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16EB70u;
label_16eb70:
    // 0x16eb70: 0x24040144  addiu       $a0, $zero, 0x144
    ctx->pc = 0x16eb70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 324));
label_16eb74:
    // 0x16eb74: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x16eb74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16eb78:
    // 0x16eb78: 0xc0400e0  jal         func_100380
label_16eb7c:
    if (ctx->pc == 0x16EB7Cu) {
        ctx->pc = 0x16EB80u;
        goto label_16eb80;
    }
    ctx->pc = 0x16EB78u;
    SET_GPR_U32(ctx, 31, 0x16EB80u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x16EB78u, 0x16EB80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16EB80u;
label_16eb80:
    // 0x16eb80: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x16eb80u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16eb84:
    // 0x16eb84: 0x13c00005  beqz        $fp, . + 4 + (0x5 << 2)
label_16eb88:
    if (ctx->pc == 0x16EB88u) {
        ctx->pc = 0x16EB8Cu;
        goto label_16eb8c;
    }
    ctx->pc = 0x16EB84u;
    {
        const bool branch_taken_0x16eb84 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x16eb84) {
            ctx->pc = 0x16EB9Cu;
            goto label_16eb9c;
        }
    }
    ctx->pc = 0x16EB8Cu;
label_16eb8c:
    // 0x16eb8c: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x16eb8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_16eb90:
    // 0x16eb90: 0xc0686c8  jal         func_1A1B20
label_16eb94:
    if (ctx->pc == 0x16EB94u) {
        ctx->pc = 0x16EB98u;
        goto label_16eb98;
    }
    ctx->pc = 0x16EB90u;
    SET_GPR_U32(ctx, 31, 0x16EB98u);
    ctx->pc = 0x1A1B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1B20u, 0x16EB90u, 0x16EB98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16EB98u;
label_16eb98:
    // 0x16eb98: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x16eb98u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16eb9c:
    // 0x16eb9c: 0xaf9ebad4  sw          $fp, -0x452C($gp)
    ctx->pc = 0x16eb9cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949588), GPR_U32(ctx, 30));
label_16eba0:
    // 0x16eba0: 0x10000076  b           . + 4 + (0x76 << 2)
label_16eba4:
    if (ctx->pc == 0x16EBA4u) {
        ctx->pc = 0x16EBA8u;
        goto label_16eba8;
    }
    ctx->pc = 0x16EBA0u;
    {
        const bool branch_taken_0x16eba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16eba0) {
            ctx->pc = 0x16ED7Cu;
            goto label_16ed7c;
        }
    }
    ctx->pc = 0x16EBA8u;
label_16eba8:
    // 0x16eba8: 0x24040308  addiu       $a0, $zero, 0x308
    ctx->pc = 0x16eba8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 776));
label_16ebac:
    // 0x16ebac: 0xc119b68  jal         func_466DA0
label_16ebb0:
    if (ctx->pc == 0x16EBB0u) {
        ctx->pc = 0x16EBB4u;
        goto label_16ebb4;
    }
    ctx->pc = 0x16EBACu;
    SET_GPR_U32(ctx, 31, 0x16EBB4u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x16EBACu, 0x16EBB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16EBB4u;
label_16ebb4:
    // 0x16ebb4: 0x24040308  addiu       $a0, $zero, 0x308
    ctx->pc = 0x16ebb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 776));
label_16ebb8:
    // 0x16ebb8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x16ebb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16ebbc:
    // 0x16ebbc: 0xc0400e0  jal         func_100380
label_16ebc0:
    if (ctx->pc == 0x16EBC0u) {
        ctx->pc = 0x16EBC4u;
        goto label_16ebc4;
    }
    ctx->pc = 0x16EBBCu;
    SET_GPR_U32(ctx, 31, 0x16EBC4u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x16EBBCu, 0x16EBC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16EBC4u;
label_16ebc4:
    // 0x16ebc4: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x16ebc4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16ebc8:
    // 0x16ebc8: 0x12e00005  beqz        $s7, . + 4 + (0x5 << 2)
label_16ebcc:
    if (ctx->pc == 0x16EBCCu) {
        ctx->pc = 0x16EBD0u;
        goto label_16ebd0;
    }
    ctx->pc = 0x16EBC8u;
    {
        const bool branch_taken_0x16ebc8 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ebc8) {
            ctx->pc = 0x16EBE0u;
            goto label_16ebe0;
        }
    }
    ctx->pc = 0x16EBD0u;
label_16ebd0:
    // 0x16ebd0: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x16ebd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_16ebd4:
    // 0x16ebd4: 0xc07c2f8  jal         func_1F0BE0
label_16ebd8:
    if (ctx->pc == 0x16EBD8u) {
        ctx->pc = 0x16EBDCu;
        goto label_16ebdc;
    }
    ctx->pc = 0x16EBD4u;
    SET_GPR_U32(ctx, 31, 0x16EBDCu);
    ctx->pc = 0x1F0BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F0BE0u, 0x16EBD4u, 0x16EBDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16EBDCu;
label_16ebdc:
    // 0x16ebdc: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x16ebdcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16ebe0:
    // 0x16ebe0: 0xaf97bad4  sw          $s7, -0x452C($gp)
    ctx->pc = 0x16ebe0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949588), GPR_U32(ctx, 23));
label_16ebe4:
    // 0x16ebe4: 0x10000065  b           . + 4 + (0x65 << 2)
label_16ebe8:
    if (ctx->pc == 0x16EBE8u) {
        ctx->pc = 0x16EBECu;
        goto label_16ebec;
    }
    ctx->pc = 0x16EBE4u;
    {
        const bool branch_taken_0x16ebe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ebe4) {
            ctx->pc = 0x16ED7Cu;
            goto label_16ed7c;
        }
    }
    ctx->pc = 0x16EBECu;
label_16ebec:
    // 0x16ebec: 0x24040168  addiu       $a0, $zero, 0x168
    ctx->pc = 0x16ebecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 360));
label_16ebf0:
    // 0x16ebf0: 0xc119b68  jal         func_466DA0
label_16ebf4:
    if (ctx->pc == 0x16EBF4u) {
        ctx->pc = 0x16EBF8u;
        goto label_16ebf8;
    }
    ctx->pc = 0x16EBF0u;
    SET_GPR_U32(ctx, 31, 0x16EBF8u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x16EBF0u, 0x16EBF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16EBF8u;
label_16ebf8:
    // 0x16ebf8: 0x24040168  addiu       $a0, $zero, 0x168
    ctx->pc = 0x16ebf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 360));
label_16ebfc:
    // 0x16ebfc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x16ebfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16ec00:
    // 0x16ec00: 0xc0400e0  jal         func_100380
label_16ec04:
    if (ctx->pc == 0x16EC04u) {
        ctx->pc = 0x16EC08u;
        goto label_16ec08;
    }
    ctx->pc = 0x16EC00u;
    SET_GPR_U32(ctx, 31, 0x16EC08u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x16EC00u, 0x16EC08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16EC08u;
label_16ec08:
    // 0x16ec08: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x16ec08u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16ec0c:
    // 0x16ec0c: 0x12c00005  beqz        $s6, . + 4 + (0x5 << 2)
label_16ec10:
    if (ctx->pc == 0x16EC10u) {
        ctx->pc = 0x16EC14u;
        goto label_16ec14;
    }
    ctx->pc = 0x16EC0Cu;
    {
        const bool branch_taken_0x16ec0c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ec0c) {
            ctx->pc = 0x16EC24u;
            goto label_16ec24;
        }
    }
    ctx->pc = 0x16EC14u;
label_16ec14:
    // 0x16ec14: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x16ec14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_16ec18:
    // 0x16ec18: 0xc07fd64  jal         func_1FF590
label_16ec1c:
    if (ctx->pc == 0x16EC1Cu) {
        ctx->pc = 0x16EC20u;
        goto label_16ec20;
    }
    ctx->pc = 0x16EC18u;
    SET_GPR_U32(ctx, 31, 0x16EC20u);
    ctx->pc = 0x1FF590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF590u, 0x16EC18u, 0x16EC20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16EC20u;
label_16ec20:
    // 0x16ec20: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x16ec20u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16ec24:
    // 0x16ec24: 0xaf96bad4  sw          $s6, -0x452C($gp)
    ctx->pc = 0x16ec24u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949588), GPR_U32(ctx, 22));
label_16ec28:
    // 0x16ec28: 0x10000054  b           . + 4 + (0x54 << 2)
label_16ec2c:
    if (ctx->pc == 0x16EC2Cu) {
        ctx->pc = 0x16EC30u;
        goto label_16ec30;
    }
    ctx->pc = 0x16EC28u;
    {
        const bool branch_taken_0x16ec28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ec28) {
            ctx->pc = 0x16ED7Cu;
            goto label_16ed7c;
        }
    }
    ctx->pc = 0x16EC30u;
label_16ec30:
    // 0x16ec30: 0x24040114  addiu       $a0, $zero, 0x114
    ctx->pc = 0x16ec30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 276));
label_16ec34:
    // 0x16ec34: 0xc119b68  jal         func_466DA0
label_16ec38:
    if (ctx->pc == 0x16EC38u) {
        ctx->pc = 0x16EC3Cu;
        goto label_16ec3c;
    }
    ctx->pc = 0x16EC34u;
    SET_GPR_U32(ctx, 31, 0x16EC3Cu);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x16EC34u, 0x16EC3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16EC3Cu;
label_16ec3c:
    // 0x16ec3c: 0x24040114  addiu       $a0, $zero, 0x114
    ctx->pc = 0x16ec3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 276));
label_16ec40:
    // 0x16ec40: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x16ec40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16ec44:
    // 0x16ec44: 0xc0400e0  jal         func_100380
label_16ec48:
    if (ctx->pc == 0x16EC48u) {
        ctx->pc = 0x16EC4Cu;
        goto label_16ec4c;
    }
    ctx->pc = 0x16EC44u;
    SET_GPR_U32(ctx, 31, 0x16EC4Cu);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x16EC44u, 0x16EC4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16EC4Cu;
label_16ec4c:
    // 0x16ec4c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x16ec4cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16ec50:
    // 0x16ec50: 0x12a00005  beqz        $s5, . + 4 + (0x5 << 2)
label_16ec54:
    if (ctx->pc == 0x16EC54u) {
        ctx->pc = 0x16EC58u;
        goto label_16ec58;
    }
    ctx->pc = 0x16EC50u;
    {
        const bool branch_taken_0x16ec50 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ec50) {
            ctx->pc = 0x16EC68u;
            goto label_16ec68;
        }
    }
    ctx->pc = 0x16EC58u;
label_16ec58:
    // 0x16ec58: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x16ec58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_16ec5c:
    // 0x16ec5c: 0xc075008  jal         func_1D4020
label_16ec60:
    if (ctx->pc == 0x16EC60u) {
        ctx->pc = 0x16EC64u;
        goto label_16ec64;
    }
    ctx->pc = 0x16EC5Cu;
    SET_GPR_U32(ctx, 31, 0x16EC64u);
    ctx->pc = 0x1D4020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4020u, 0x16EC5Cu, 0x16EC64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16EC64u;
label_16ec64:
    // 0x16ec64: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x16ec64u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16ec68:
    // 0x16ec68: 0xaf95bad4  sw          $s5, -0x452C($gp)
    ctx->pc = 0x16ec68u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949588), GPR_U32(ctx, 21));
label_16ec6c:
    // 0x16ec6c: 0x10000043  b           . + 4 + (0x43 << 2)
label_16ec70:
    if (ctx->pc == 0x16EC70u) {
        ctx->pc = 0x16EC74u;
        goto label_16ec74;
    }
    ctx->pc = 0x16EC6Cu;
    {
        const bool branch_taken_0x16ec6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ec6c) {
            ctx->pc = 0x16ED7Cu;
            goto label_16ed7c;
        }
    }
    ctx->pc = 0x16EC74u;
label_16ec74:
    // 0x16ec74: 0x24040104  addiu       $a0, $zero, 0x104
    ctx->pc = 0x16ec74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
label_16ec78:
    // 0x16ec78: 0xc119b68  jal         func_466DA0
label_16ec7c:
    if (ctx->pc == 0x16EC7Cu) {
        ctx->pc = 0x16EC80u;
        goto label_16ec80;
    }
    ctx->pc = 0x16EC78u;
    SET_GPR_U32(ctx, 31, 0x16EC80u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x16EC78u, 0x16EC80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16EC80u;
label_16ec80:
    // 0x16ec80: 0x24040104  addiu       $a0, $zero, 0x104
    ctx->pc = 0x16ec80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
label_16ec84:
    // 0x16ec84: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x16ec84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16ec88:
    // 0x16ec88: 0xc0400e0  jal         func_100380
label_16ec8c:
    if (ctx->pc == 0x16EC8Cu) {
        ctx->pc = 0x16EC90u;
        goto label_16ec90;
    }
    ctx->pc = 0x16EC88u;
    SET_GPR_U32(ctx, 31, 0x16EC90u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x16EC88u, 0x16EC90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16EC90u;
label_16ec90:
    // 0x16ec90: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x16ec90u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16ec94:
    // 0x16ec94: 0x12800005  beqz        $s4, . + 4 + (0x5 << 2)
label_16ec98:
    if (ctx->pc == 0x16EC98u) {
        ctx->pc = 0x16EC9Cu;
        goto label_16ec9c;
    }
    ctx->pc = 0x16EC94u;
    {
        const bool branch_taken_0x16ec94 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ec94) {
            ctx->pc = 0x16ECACu;
            goto label_16ecac;
        }
    }
    ctx->pc = 0x16EC9Cu;
label_16ec9c:
    // 0x16ec9c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x16ec9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_16eca0:
    // 0x16eca0: 0xc072620  jal         func_1C9880
label_16eca4:
    if (ctx->pc == 0x16ECA4u) {
        ctx->pc = 0x16ECA8u;
        goto label_16eca8;
    }
    ctx->pc = 0x16ECA0u;
    SET_GPR_U32(ctx, 31, 0x16ECA8u);
    ctx->pc = 0x1C9880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9880u, 0x16ECA0u, 0x16ECA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16ECA8u;
label_16eca8:
    // 0x16eca8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x16eca8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16ecac:
    // 0x16ecac: 0xaf94bad4  sw          $s4, -0x452C($gp)
    ctx->pc = 0x16ecacu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949588), GPR_U32(ctx, 20));
label_16ecb0:
    // 0x16ecb0: 0x10000032  b           . + 4 + (0x32 << 2)
label_16ecb4:
    if (ctx->pc == 0x16ECB4u) {
        ctx->pc = 0x16ECB8u;
        goto label_16ecb8;
    }
    ctx->pc = 0x16ECB0u;
    {
        const bool branch_taken_0x16ecb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ecb0) {
            ctx->pc = 0x16ED7Cu;
            goto label_16ed7c;
        }
    }
    ctx->pc = 0x16ECB8u;
label_16ecb8:
    // 0x16ecb8: 0x240404ac  addiu       $a0, $zero, 0x4AC
    ctx->pc = 0x16ecb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1196));
label_16ecbc:
    // 0x16ecbc: 0xc119b68  jal         func_466DA0
label_16ecc0:
    if (ctx->pc == 0x16ECC0u) {
        ctx->pc = 0x16ECC4u;
        goto label_16ecc4;
    }
    ctx->pc = 0x16ECBCu;
    SET_GPR_U32(ctx, 31, 0x16ECC4u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x16ECBCu, 0x16ECC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16ECC4u;
label_16ecc4:
    // 0x16ecc4: 0x240404ac  addiu       $a0, $zero, 0x4AC
    ctx->pc = 0x16ecc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1196));
label_16ecc8:
    // 0x16ecc8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x16ecc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16eccc:
    // 0x16eccc: 0xc0400e0  jal         func_100380
label_16ecd0:
    if (ctx->pc == 0x16ECD0u) {
        ctx->pc = 0x16ECD4u;
        goto label_16ecd4;
    }
    ctx->pc = 0x16ECCCu;
    SET_GPR_U32(ctx, 31, 0x16ECD4u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x16ECCCu, 0x16ECD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16ECD4u;
label_16ecd4:
    // 0x16ecd4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x16ecd4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16ecd8:
    // 0x16ecd8: 0x12600005  beqz        $s3, . + 4 + (0x5 << 2)
label_16ecdc:
    if (ctx->pc == 0x16ECDCu) {
        ctx->pc = 0x16ECE0u;
        goto label_16ece0;
    }
    ctx->pc = 0x16ECD8u;
    {
        const bool branch_taken_0x16ecd8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ecd8) {
            ctx->pc = 0x16ECF0u;
            goto label_16ecf0;
        }
    }
    ctx->pc = 0x16ECE0u;
label_16ece0:
    // 0x16ece0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x16ece0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_16ece4:
    // 0x16ece4: 0xc06bb04  jal         func_1AEC10
label_16ece8:
    if (ctx->pc == 0x16ECE8u) {
        ctx->pc = 0x16ECECu;
        goto label_16ecec;
    }
    ctx->pc = 0x16ECE4u;
    SET_GPR_U32(ctx, 31, 0x16ECECu);
    ctx->pc = 0x1AEC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEC10u, 0x16ECE4u, 0x16ECECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16ECECu;
label_16ecec:
    // 0x16ecec: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x16ececu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16ecf0:
    // 0x16ecf0: 0xaf93bad4  sw          $s3, -0x452C($gp)
    ctx->pc = 0x16ecf0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949588), GPR_U32(ctx, 19));
label_16ecf4:
    // 0x16ecf4: 0x10000021  b           . + 4 + (0x21 << 2)
label_16ecf8:
    if (ctx->pc == 0x16ECF8u) {
        ctx->pc = 0x16ECFCu;
        goto label_16ecfc;
    }
    ctx->pc = 0x16ECF4u;
    {
        const bool branch_taken_0x16ecf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ecf4) {
            ctx->pc = 0x16ED7Cu;
            goto label_16ed7c;
        }
    }
    ctx->pc = 0x16ECFCu;
label_16ecfc:
    // 0x16ecfc: 0x24040124  addiu       $a0, $zero, 0x124
    ctx->pc = 0x16ecfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 292));
label_16ed00:
    // 0x16ed00: 0xc119b68  jal         func_466DA0
label_16ed04:
    if (ctx->pc == 0x16ED04u) {
        ctx->pc = 0x16ED08u;
        goto label_16ed08;
    }
    ctx->pc = 0x16ED00u;
    SET_GPR_U32(ctx, 31, 0x16ED08u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x16ED00u, 0x16ED08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16ED08u;
label_16ed08:
    // 0x16ed08: 0x24040124  addiu       $a0, $zero, 0x124
    ctx->pc = 0x16ed08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 292));
label_16ed0c:
    // 0x16ed0c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x16ed0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16ed10:
    // 0x16ed10: 0xc0400e0  jal         func_100380
label_16ed14:
    if (ctx->pc == 0x16ED14u) {
        ctx->pc = 0x16ED18u;
        goto label_16ed18;
    }
    ctx->pc = 0x16ED10u;
    SET_GPR_U32(ctx, 31, 0x16ED18u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x16ED10u, 0x16ED18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16ED18u;
label_16ed18:
    // 0x16ed18: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x16ed18u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16ed1c:
    // 0x16ed1c: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
label_16ed20:
    if (ctx->pc == 0x16ED20u) {
        ctx->pc = 0x16ED24u;
        goto label_16ed24;
    }
    ctx->pc = 0x16ED1Cu;
    {
        const bool branch_taken_0x16ed1c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ed1c) {
            ctx->pc = 0x16ED34u;
            goto label_16ed34;
        }
    }
    ctx->pc = 0x16ED24u;
label_16ed24:
    // 0x16ed24: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x16ed24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_16ed28:
    // 0x16ed28: 0xc06528c  jal         func_194A30
label_16ed2c:
    if (ctx->pc == 0x16ED2Cu) {
        ctx->pc = 0x16ED30u;
        goto label_16ed30;
    }
    ctx->pc = 0x16ED28u;
    SET_GPR_U32(ctx, 31, 0x16ED30u);
    ctx->pc = 0x194A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x194A30u, 0x16ED28u, 0x16ED30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16ED30u;
label_16ed30:
    // 0x16ed30: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x16ed30u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16ed34:
    // 0x16ed34: 0xaf92bad4  sw          $s2, -0x452C($gp)
    ctx->pc = 0x16ed34u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949588), GPR_U32(ctx, 18));
label_16ed38:
    // 0x16ed38: 0x10000010  b           . + 4 + (0x10 << 2)
label_16ed3c:
    if (ctx->pc == 0x16ED3Cu) {
        ctx->pc = 0x16ED40u;
        goto label_16ed40;
    }
    ctx->pc = 0x16ED38u;
    {
        const bool branch_taken_0x16ed38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ed38) {
            ctx->pc = 0x16ED7Cu;
            goto label_16ed7c;
        }
    }
    ctx->pc = 0x16ED40u;
label_16ed40:
    // 0x16ed40: 0x240400a4  addiu       $a0, $zero, 0xA4
    ctx->pc = 0x16ed40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 164));
label_16ed44:
    // 0x16ed44: 0xc119b68  jal         func_466DA0
label_16ed48:
    if (ctx->pc == 0x16ED48u) {
        ctx->pc = 0x16ED4Cu;
        goto label_16ed4c;
    }
    ctx->pc = 0x16ED44u;
    SET_GPR_U32(ctx, 31, 0x16ED4Cu);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x16ED44u, 0x16ED4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16ED4Cu;
label_16ed4c:
    // 0x16ed4c: 0x240400a4  addiu       $a0, $zero, 0xA4
    ctx->pc = 0x16ed4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 164));
label_16ed50:
    // 0x16ed50: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x16ed50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16ed54:
    // 0x16ed54: 0xc0400e0  jal         func_100380
label_16ed58:
    if (ctx->pc == 0x16ED58u) {
        ctx->pc = 0x16ED5Cu;
        goto label_16ed5c;
    }
    ctx->pc = 0x16ED54u;
    SET_GPR_U32(ctx, 31, 0x16ED5Cu);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x16ED54u, 0x16ED5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16ED5Cu;
label_16ed5c:
    // 0x16ed5c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x16ed5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16ed60:
    // 0x16ed60: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
label_16ed64:
    if (ctx->pc == 0x16ED64u) {
        ctx->pc = 0x16ED68u;
        goto label_16ed68;
    }
    ctx->pc = 0x16ED60u;
    {
        const bool branch_taken_0x16ed60 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ed60) {
            ctx->pc = 0x16ED78u;
            goto label_16ed78;
        }
    }
    ctx->pc = 0x16ED68u;
label_16ed68:
    // 0x16ed68: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16ed68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16ed6c:
    // 0x16ed6c: 0xc0651c4  jal         func_194710
label_16ed70:
    if (ctx->pc == 0x16ED70u) {
        ctx->pc = 0x16ED74u;
        goto label_16ed74;
    }
    ctx->pc = 0x16ED6Cu;
    SET_GPR_U32(ctx, 31, 0x16ED74u);
    ctx->pc = 0x194710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x194710u, 0x16ED6Cu, 0x16ED74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16ED74u;
label_16ed74:
    // 0x16ed74: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x16ed74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16ed78:
    // 0x16ed78: 0xaf91bad4  sw          $s1, -0x452C($gp)
    ctx->pc = 0x16ed78u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949588), GPR_U32(ctx, 17));
label_16ed7c:
    // 0x16ed7c: 0x8f84bad4  lw          $a0, -0x452C($gp)
    ctx->pc = 0x16ed7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949588)));
label_16ed80:
    // 0x16ed80: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x16ed80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_16ed84:
    // 0x16ed84: 0x8f390078  lw          $t9, 0x78($t9)
    ctx->pc = 0x16ed84u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 120)));
label_16ed88:
    // 0x16ed88: 0x320f809  jalr        $t9
label_16ed8c:
    if (ctx->pc == 0x16ED8Cu) {
        ctx->pc = 0x16ED90u;
        goto label_16ed90;
    }
    ctx->pc = 0x16ED88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16ED90u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16ED88u, 0x16ED90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16ED90u;
label_16ed90:
    // 0x16ed90: 0x8fa40120  lw          $a0, 0x120($sp)
    ctx->pc = 0x16ed90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_16ed94:
    // 0x16ed94: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x16ed94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16ed98:
    // 0x16ed98: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x16ed98u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_16ed9c:
    // 0x16ed9c: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x16ed9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_16eda0:
    // 0x16eda0: 0x320f809  jalr        $t9
label_16eda4:
    if (ctx->pc == 0x16EDA4u) {
        ctx->pc = 0x16EDA8u;
        goto label_16eda8;
    }
    ctx->pc = 0x16EDA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16EDA8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16EDA0u, 0x16EDA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16EDA8u;
label_16eda8:
    // 0x16eda8: 0x8fa40120  lw          $a0, 0x120($sp)
    ctx->pc = 0x16eda8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_16edac:
    // 0x16edac: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x16edacu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_16edb0:
    // 0x16edb0: 0x24a54490  addiu       $a1, $a1, 0x4490
    ctx->pc = 0x16edb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17552));
label_16edb4:
    // 0x16edb4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x16edb4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_16edb8:
    // 0x16edb8: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x16edb8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_16edbc:
    // 0x16edbc: 0x320f809  jalr        $t9
label_16edc0:
    if (ctx->pc == 0x16EDC0u) {
        ctx->pc = 0x16EDC4u;
        goto label_16edc4;
    }
    ctx->pc = 0x16EDBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16EDC4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16EDBCu, 0x16EDC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16EDC4u;
label_16edc4:
    // 0x16edc4: 0x8fa40120  lw          $a0, 0x120($sp)
    ctx->pc = 0x16edc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_16edc8:
    // 0x16edc8: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x16edc8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_16edcc:
    // 0x16edcc: 0x24a544c0  addiu       $a1, $a1, 0x44C0
    ctx->pc = 0x16edccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17600));
label_16edd0:
    // 0x16edd0: 0xc05621c  jal         func_158870
label_16edd4:
    if (ctx->pc == 0x16EDD4u) {
        ctx->pc = 0x16EDD8u;
        goto label_16edd8;
    }
    ctx->pc = 0x16EDD0u;
    SET_GPR_U32(ctx, 31, 0x16EDD8u);
    ctx->pc = 0x158870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158870u, 0x16EDD0u, 0x16EDD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16EDD8u;
label_16edd8:
    // 0x16edd8: 0xafa20118  sw          $v0, 0x118($sp)
    ctx->pc = 0x16edd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 2));
label_16eddc:
    // 0x16eddc: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x16eddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_16ede0:
    // 0x16ede0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_16ede4:
    if (ctx->pc == 0x16EDE4u) {
        ctx->pc = 0x16EDE8u;
        goto label_16ede8;
    }
    ctx->pc = 0x16EDE0u;
    {
        const bool branch_taken_0x16ede0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ede0) {
            ctx->pc = 0x16EE18u;
            goto label_16ee18;
        }
    }
    ctx->pc = 0x16EDE8u;
label_16ede8:
    // 0x16ede8: 0x8f84bad4  lw          $a0, -0x452C($gp)
    ctx->pc = 0x16ede8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949588)));
label_16edec:
    // 0x16edec: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x16edecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_16edf0:
    // 0x16edf0: 0x8f390088  lw          $t9, 0x88($t9)
    ctx->pc = 0x16edf0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 136)));
label_16edf4:
    // 0x16edf4: 0x320f809  jalr        $t9
label_16edf8:
    if (ctx->pc == 0x16EDF8u) {
        ctx->pc = 0x16EDFCu;
        goto label_16edfc;
    }
    ctx->pc = 0x16EDF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16EDFCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16EDF4u, 0x16EDFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16EDFCu;
label_16edfc:
    // 0x16edfc: 0x8fa30120  lw          $v1, 0x120($sp)
    ctx->pc = 0x16edfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_16ee00:
    // 0x16ee00: 0x8fa50118  lw          $a1, 0x118($sp)
    ctx->pc = 0x16ee00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_16ee04:
    // 0x16ee04: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x16ee04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_16ee08:
    // 0x16ee08: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x16ee08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16ee0c:
    // 0x16ee0c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x16ee0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16ee10:
    // 0x16ee10: 0xc08c378  jal         func_230DE0
label_16ee14:
    if (ctx->pc == 0x16EE14u) {
        ctx->pc = 0x16EE18u;
        goto label_16ee18;
    }
    ctx->pc = 0x16EE10u;
    SET_GPR_U32(ctx, 31, 0x16EE18u);
    ctx->pc = 0x230DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230DE0u, 0x16EE10u, 0x16EE18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16EE18u;
label_16ee18:
    // 0x16ee18: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x16ee18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_16ee1c:
    // 0x16ee1c: 0x24440074  addiu       $a0, $v0, 0x74
    ctx->pc = 0x16ee1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 116));
label_16ee20:
    // 0x16ee20: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x16ee20u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_16ee24:
    // 0x16ee24: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x16ee24u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_16ee28:
    // 0x16ee28: 0x320f809  jalr        $t9
label_16ee2c:
    if (ctx->pc == 0x16EE2Cu) {
        ctx->pc = 0x16EE30u;
        goto label_16ee30;
    }
    ctx->pc = 0x16EE28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16EE30u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16EE28u, 0x16EE30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16EE30u;
label_16ee30:
    // 0x16ee30: 0x8f84bad4  lw          $a0, -0x452C($gp)
    ctx->pc = 0x16ee30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949588)));
label_16ee34:
    // 0x16ee34: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x16ee34u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_16ee38:
    // 0x16ee38: 0x8f390078  lw          $t9, 0x78($t9)
    ctx->pc = 0x16ee38u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 120)));
label_16ee3c:
    // 0x16ee3c: 0x320f809  jalr        $t9
label_16ee40:
    if (ctx->pc == 0x16EE40u) {
        ctx->pc = 0x16EE44u;
        goto label_16ee44;
    }
    ctx->pc = 0x16EE3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16EE44u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16EE3Cu, 0x16EE44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16EE44u;
label_16ee44:
    // 0x16ee44: 0x8fa30120  lw          $v1, 0x120($sp)
    ctx->pc = 0x16ee44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_16ee48:
    // 0x16ee48: 0x24640074  addiu       $a0, $v1, 0x74
    ctx->pc = 0x16ee48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 116));
label_16ee4c:
    // 0x16ee4c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x16ee4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16ee50:
    // 0x16ee50: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x16ee50u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_16ee54:
    // 0x16ee54: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x16ee54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_16ee58:
    // 0x16ee58: 0x320f809  jalr        $t9
label_16ee5c:
    if (ctx->pc == 0x16EE5Cu) {
        ctx->pc = 0x16EE60u;
        goto label_16ee60;
    }
    ctx->pc = 0x16EE58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16EE60u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16EE58u, 0x16EE60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16EE60u;
label_16ee60:
    // 0x16ee60: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x16ee60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_16ee64:
    // 0x16ee64: 0x8c4400c4  lw          $a0, 0xC4($v0)
    ctx->pc = 0x16ee64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_16ee68:
    // 0x16ee68: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x16ee68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_16ee6c:
    // 0x16ee6c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x16ee6cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_16ee70:
    // 0x16ee70: 0x320f809  jalr        $t9
label_16ee74:
    if (ctx->pc == 0x16EE74u) {
        ctx->pc = 0x16EE78u;
        goto label_16ee78;
    }
    ctx->pc = 0x16EE70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16EE78u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16EE70u, 0x16EE78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16EE78u;
label_16ee78:
    // 0x16ee78: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x16ee78u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16ee7c:
    // 0x16ee7c: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x16ee7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_16ee80:
    // 0x16ee80: 0xe4400060  swc1        $f0, 0x60($v0)
    ctx->pc = 0x16ee80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 96), bits); }
label_16ee84:
    // 0x16ee84: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x16ee84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_16ee88:
    // 0x16ee88: 0xc4400060  lwc1        $f0, 0x60($v0)
    ctx->pc = 0x16ee88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_16ee8c:
    // 0x16ee8c: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x16ee8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_16ee90:
    // 0x16ee90: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x16ee90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
label_16ee94:
    // 0x16ee94: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x16ee94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_16ee98:
    // 0x16ee98: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x16ee98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_16ee9c:
    // 0x16ee9c: 0xac430070  sw          $v1, 0x70($v0)
    ctx->pc = 0x16ee9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 112), GPR_U32(ctx, 3));
label_16eea0:
    // 0x16eea0: 0x8fa30120  lw          $v1, 0x120($sp)
    ctx->pc = 0x16eea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_16eea4:
    // 0x16eea4: 0x8f82bad4  lw          $v0, -0x452C($gp)
    ctx->pc = 0x16eea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949588)));
label_16eea8:
    // 0x16eea8: 0xac430030  sw          $v1, 0x30($v0)
    ctx->pc = 0x16eea8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 3));
label_16eeac:
    // 0x16eeac: 0x8f84bad4  lw          $a0, -0x452C($gp)
    ctx->pc = 0x16eeacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949588)));
label_16eeb0:
    // 0x16eeb0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x16eeb0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_16eeb4:
    // 0x16eeb4: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x16eeb4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_16eeb8:
    // 0x16eeb8: 0x320f809  jalr        $t9
label_16eebc:
    if (ctx->pc == 0x16EEBCu) {
        ctx->pc = 0x16EEC0u;
        goto label_16eec0;
    }
    ctx->pc = 0x16EEB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16EEC0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16EEB8u, 0x16EEC0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16EEC0u;
label_16eec0:
    // 0x16eec0: 0x27a400c8  addiu       $a0, $sp, 0xC8
    ctx->pc = 0x16eec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
label_16eec4:
    // 0x16eec4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x16eec4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_16eec8:
    // 0x16eec8: 0xc0406a0  jal         func_101A80
label_16eecc:
    if (ctx->pc == 0x16EECCu) {
        ctx->pc = 0x16EED0u;
        goto label_16eed0;
    }
    ctx->pc = 0x16EEC8u;
    SET_GPR_U32(ctx, 31, 0x16EED0u);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x16EEC8u, 0x16EED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16EED0u;
label_16eed0:
    // 0x16eed0: 0x27a400d8  addiu       $a0, $sp, 0xD8
    ctx->pc = 0x16eed0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
label_16eed4:
    // 0x16eed4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x16eed4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_16eed8:
    // 0x16eed8: 0xc0406a0  jal         func_101A80
label_16eedc:
    if (ctx->pc == 0x16EEDCu) {
        ctx->pc = 0x16EEE0u;
        goto label_16eee0;
    }
    ctx->pc = 0x16EED8u;
    SET_GPR_U32(ctx, 31, 0x16EEE0u);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x16EED8u, 0x16EEE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16EEE0u;
label_16eee0:
    // 0x16eee0: 0x100000a5  b           . + 4 + (0xA5 << 2)
label_16eee4:
    if (ctx->pc == 0x16EEE4u) {
        ctx->pc = 0x16EEE8u;
        goto label_16eee8;
    }
    ctx->pc = 0x16EEE0u;
    {
        const bool branch_taken_0x16eee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16eee0) {
            ctx->pc = 0x16F178u;
            goto label_16f178;
        }
    }
    ctx->pc = 0x16EEE8u;
label_16eee8:
    // 0x16eee8: 0x27a400b8  addiu       $a0, $sp, 0xB8
    ctx->pc = 0x16eee8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_16eeec:
    // 0x16eeec: 0xc0495d4  jal         func_125750
label_16eef0:
    if (ctx->pc == 0x16EEF0u) {
        ctx->pc = 0x16EEF4u;
        goto label_16eef4;
    }
    ctx->pc = 0x16EEECu;
    SET_GPR_U32(ctx, 31, 0x16EEF4u);
    ctx->pc = 0x125750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125750u, 0x16EEECu, 0x16EEF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16EEF4u;
label_16eef4:
    // 0x16eef4: 0x27a400a8  addiu       $a0, $sp, 0xA8
    ctx->pc = 0x16eef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
label_16eef8:
    // 0x16eef8: 0xc0495d4  jal         func_125750
label_16eefc:
    if (ctx->pc == 0x16EEFCu) {
        ctx->pc = 0x16EF00u;
        goto label_16ef00;
    }
    ctx->pc = 0x16EEF8u;
    SET_GPR_U32(ctx, 31, 0x16EF00u);
    ctx->pc = 0x125750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125750u, 0x16EEF8u, 0x16EF00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16EF00u;
label_16ef00:
    // 0x16ef00: 0x8f84bbdc  lw          $a0, -0x4424($gp)
    ctx->pc = 0x16ef00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949852)));
label_16ef04:
    // 0x16ef04: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x16ef04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_16ef08:
    // 0x16ef08: 0x24a54468  addiu       $a1, $a1, 0x4468
    ctx->pc = 0x16ef08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17512));
label_16ef0c:
    // 0x16ef0c: 0x27a600b8  addiu       $a2, $sp, 0xB8
    ctx->pc = 0x16ef0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_16ef10:
    // 0x16ef10: 0xc08e514  jal         func_239450
label_16ef14:
    if (ctx->pc == 0x16EF14u) {
        ctx->pc = 0x16EF18u;
        goto label_16ef18;
    }
    ctx->pc = 0x16EF10u;
    SET_GPR_U32(ctx, 31, 0x16EF18u);
    ctx->pc = 0x239450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239450u, 0x16EF10u, 0x16EF18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16EF18u;
label_16ef18:
    // 0x16ef18: 0x8f84bbdc  lw          $a0, -0x4424($gp)
    ctx->pc = 0x16ef18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949852)));
label_16ef1c:
    // 0x16ef1c: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x16ef1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_16ef20:
    // 0x16ef20: 0x24a54478  addiu       $a1, $a1, 0x4478
    ctx->pc = 0x16ef20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17528));
label_16ef24:
    // 0x16ef24: 0x27a600a8  addiu       $a2, $sp, 0xA8
    ctx->pc = 0x16ef24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
label_16ef28:
    // 0x16ef28: 0xc08e514  jal         func_239450
label_16ef2c:
    if (ctx->pc == 0x16EF2Cu) {
        ctx->pc = 0x16EF30u;
        goto label_16ef30;
    }
    ctx->pc = 0x16EF28u;
    SET_GPR_U32(ctx, 31, 0x16EF30u);
    ctx->pc = 0x239450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239450u, 0x16EF28u, 0x16EF30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16EF30u;
label_16ef30:
    // 0x16ef30: 0xc05bca4  jal         func_16F290
label_16ef34:
    if (ctx->pc == 0x16EF34u) {
        ctx->pc = 0x16EF38u;
        goto label_16ef38;
    }
    ctx->pc = 0x16EF30u;
    SET_GPR_U32(ctx, 31, 0x16EF38u);
    ctx->pc = 0x16F290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F290u, 0x16EF30u, 0x16EF38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16EF38u;
label_16ef38:
    // 0x16ef38: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_16ef3c:
    if (ctx->pc == 0x16EF3Cu) {
        ctx->pc = 0x16EF40u;
        goto label_16ef40;
    }
    ctx->pc = 0x16EF38u;
    {
        const bool branch_taken_0x16ef38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ef38) {
            ctx->pc = 0x16EF5Cu;
            goto label_16ef5c;
        }
    }
    ctx->pc = 0x16EF40u;
label_16ef40:
    // 0x16ef40: 0x27a400b8  addiu       $a0, $sp, 0xB8
    ctx->pc = 0x16ef40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_16ef44:
    // 0x16ef44: 0x27a500a8  addiu       $a1, $sp, 0xA8
    ctx->pc = 0x16ef44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
label_16ef48:
    // 0x16ef48: 0x3c064004  lui         $a2, 0x4004
    ctx->pc = 0x16ef48u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16388 << 16));
label_16ef4c:
    // 0x16ef4c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x16ef4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16ef50:
    // 0x16ef50: 0x8fa80120  lw          $t0, 0x120($sp)
    ctx->pc = 0x16ef50u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_16ef54:
    // 0x16ef54: 0xc08d218  jal         func_234860
label_16ef58:
    if (ctx->pc == 0x16EF58u) {
        ctx->pc = 0x16EF5Cu;
        goto label_16ef5c;
    }
    ctx->pc = 0x16EF54u;
    SET_GPR_U32(ctx, 31, 0x16EF5Cu);
    ctx->pc = 0x234860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x234860u, 0x16EF54u, 0x16EF5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16EF5Cu;
label_16ef5c:
    // 0x16ef5c: 0xafa00114  sw          $zero, 0x114($sp)
    ctx->pc = 0x16ef5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 276), GPR_U32(ctx, 0));
label_16ef60:
    // 0x16ef60: 0x8f82bad4  lw          $v0, -0x452C($gp)
    ctx->pc = 0x16ef60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949588)));
label_16ef64:
    // 0x16ef64: 0x1002002a  beq         $zero, $v0, . + 4 + (0x2A << 2)
label_16ef68:
    if (ctx->pc == 0x16EF68u) {
        ctx->pc = 0x16EF6Cu;
        goto label_16ef6c;
    }
    ctx->pc = 0x16EF64u;
    {
        const bool branch_taken_0x16ef64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x16ef64) {
            ctx->pc = 0x16F010u;
            goto label_16f010;
        }
    }
    ctx->pc = 0x16EF6Cu;
label_16ef6c:
    // 0x16ef6c: 0x8fa40120  lw          $a0, 0x120($sp)
    ctx->pc = 0x16ef6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_16ef70:
    // 0x16ef70: 0x8c850058  lw          $a1, 0x58($a0)
    ctx->pc = 0x16ef70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_16ef74:
    // 0x16ef74: 0x8f82bad4  lw          $v0, -0x452C($gp)
    ctx->pc = 0x16ef74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949588)));
label_16ef78:
    // 0x16ef78: 0xac45002c  sw          $a1, 0x2C($v0)
    ctx->pc = 0x16ef78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 5));
label_16ef7c:
    // 0x16ef7c: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x16ef7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_16ef80:
    // 0x16ef80: 0x8f84bad4  lw          $a0, -0x452C($gp)
    ctx->pc = 0x16ef80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949588)));
label_16ef84:
    // 0x16ef84: 0x24450058  addiu       $a1, $v0, 0x58
    ctx->pc = 0x16ef84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
label_16ef88:
    // 0x16ef88: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x16ef88u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_16ef8c:
    // 0x16ef8c: 0x8f390080  lw          $t9, 0x80($t9)
    ctx->pc = 0x16ef8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 128)));
label_16ef90:
    // 0x16ef90: 0x320f809  jalr        $t9
label_16ef94:
    if (ctx->pc == 0x16EF94u) {
        ctx->pc = 0x16EF98u;
        goto label_16ef98;
    }
    ctx->pc = 0x16EF90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16EF98u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16EF90u, 0x16EF98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16EF98u;
label_16ef98:
    // 0x16ef98: 0x8f84bad4  lw          $a0, -0x452C($gp)
    ctx->pc = 0x16ef98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949588)));
label_16ef9c:
    // 0x16ef9c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x16ef9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_16efa0:
    // 0x16efa0: 0x8f3900a4  lw          $t9, 0xA4($t9)
    ctx->pc = 0x16efa0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 164)));
label_16efa4:
    // 0x16efa4: 0x320f809  jalr        $t9
label_16efa8:
    if (ctx->pc == 0x16EFA8u) {
        ctx->pc = 0x16EFACu;
        goto label_16efac;
    }
    ctx->pc = 0x16EFA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16EFACu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16EFA4u, 0x16EFACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16EFACu;
label_16efac:
    // 0x16efac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x16efacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16efb0:
    // 0x16efb0: 0xafa50114  sw          $a1, 0x114($sp)
    ctx->pc = 0x16efb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 276), GPR_U32(ctx, 5));
label_16efb4:
    // 0x16efb4: 0x8f86bad4  lw          $a2, -0x452C($gp)
    ctx->pc = 0x16efb4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949588)));
label_16efb8:
    // 0x16efb8: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x16efb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_16efbc:
    // 0x16efbc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x16efbcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_16efc0:
    // 0x16efc0: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x16efc0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_16efc4:
    // 0x16efc4: 0x320f809  jalr        $t9
label_16efc8:
    if (ctx->pc == 0x16EFC8u) {
        ctx->pc = 0x16EFCCu;
        goto label_16efcc;
    }
    ctx->pc = 0x16EFC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16EFCCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16EFC4u, 0x16EFCCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16EFCCu;
label_16efcc:
    // 0x16efcc: 0x8f82bad4  lw          $v0, -0x452C($gp)
    ctx->pc = 0x16efccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949588)));
label_16efd0:
    // 0x16efd0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_16efd4:
    if (ctx->pc == 0x16EFD4u) {
        ctx->pc = 0x16EFD8u;
        goto label_16efd8;
    }
    ctx->pc = 0x16EFD0u;
    {
        const bool branch_taken_0x16efd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16efd0) {
            ctx->pc = 0x16EFF8u;
            goto label_16eff8;
        }
    }
    ctx->pc = 0x16EFD8u;
label_16efd8:
    // 0x16efd8: 0x8f84bad4  lw          $a0, -0x452C($gp)
    ctx->pc = 0x16efd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949588)));
label_16efdc:
    // 0x16efdc: 0xc05bc94  jal         func_16F250
label_16efe0:
    if (ctx->pc == 0x16EFE0u) {
        ctx->pc = 0x16EFE4u;
        goto label_16efe4;
    }
    ctx->pc = 0x16EFDCu;
    SET_GPR_U32(ctx, 31, 0x16EFE4u);
    ctx->pc = 0x16F250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F250u, 0x16EFDCu, 0x16EFE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16EFE4u;
label_16efe4:
    // 0x16efe4: 0x8f85bad4  lw          $a1, -0x452C($gp)
    ctx->pc = 0x16efe4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949588)));
label_16efe8:
    // 0x16efe8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x16efe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_16efec:
    // 0x16efec: 0xc119c5c  jal         func_467170
label_16eff0:
    if (ctx->pc == 0x16EFF0u) {
        ctx->pc = 0x16EFF4u;
        goto label_16eff4;
    }
    ctx->pc = 0x16EFECu;
    SET_GPR_U32(ctx, 31, 0x16EFF4u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x16EFECu, 0x16EFF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16EFF4u;
label_16eff4:
    // 0x16eff4: 0xaf80bad4  sw          $zero, -0x452C($gp)
    ctx->pc = 0x16eff4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949588), GPR_U32(ctx, 0));
label_16eff8:
    // 0x16eff8: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x16eff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_16effc:
    // 0x16effc: 0x24440074  addiu       $a0, $v0, 0x74
    ctx->pc = 0x16effcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 116));
label_16f000:
    // 0x16f000: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x16f000u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_16f004:
    // 0x16f004: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x16f004u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_16f008:
    // 0x16f008: 0x320f809  jalr        $t9
label_16f00c:
    if (ctx->pc == 0x16F00Cu) {
        ctx->pc = 0x16F010u;
        goto label_16f010;
    }
    ctx->pc = 0x16F008u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16F010u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16F008u, 0x16F010u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16F010u;
label_16f010:
    // 0x16f010: 0x8f84bb70  lw          $a0, -0x4490($gp)
    ctx->pc = 0x16f010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_16f014:
    // 0x16f014: 0x24820070  addiu       $v0, $a0, 0x70
    ctx->pc = 0x16f014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
label_16f018:
    // 0x16f018: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x16f018u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16f01c:
    // 0x16f01c: 0xc050ee0  jal         func_143B80
label_16f020:
    if (ctx->pc == 0x16F020u) {
        ctx->pc = 0x16F024u;
        goto label_16f024;
    }
    ctx->pc = 0x16F01Cu;
    SET_GPR_U32(ctx, 31, 0x16F024u);
    ctx->pc = 0x143B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143B80u, 0x16F01Cu, 0x16F024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F024u;
label_16f024:
    // 0x16f024: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x16f024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16f028:
    // 0x16f028: 0x14800041  bnez        $a0, . + 4 + (0x41 << 2)
label_16f02c:
    if (ctx->pc == 0x16F02Cu) {
        ctx->pc = 0x16F030u;
        goto label_16f030;
    }
    ctx->pc = 0x16F028u;
    {
        const bool branch_taken_0x16f028 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x16f028) {
            ctx->pc = 0x16F130u;
            goto label_16f130;
        }
    }
    ctx->pc = 0x16F030u;
label_16f030:
    // 0x16f030: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x16f030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
label_16f034:
    // 0x16f034: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x16f034u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_16f038:
    // 0x16f038: 0x1080003d  beqz        $a0, . + 4 + (0x3D << 2)
label_16f03c:
    if (ctx->pc == 0x16F03Cu) {
        ctx->pc = 0x16F040u;
        goto label_16f040;
    }
    ctx->pc = 0x16F038u;
    {
        const bool branch_taken_0x16f038 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x16f038) {
            ctx->pc = 0x16F130u;
            goto label_16f130;
        }
    }
    ctx->pc = 0x16F040u;
label_16f040:
    // 0x16f040: 0xc090864  jal         func_242190
label_16f044:
    if (ctx->pc == 0x16F044u) {
        ctx->pc = 0x16F048u;
        goto label_16f048;
    }
    ctx->pc = 0x16F040u;
    SET_GPR_U32(ctx, 31, 0x16F048u);
    ctx->pc = 0x242190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242190u, 0x16F040u, 0x16F048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F048u;
label_16f048:
    // 0x16f048: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x16f048u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16f04c:
    // 0x16f04c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x16f04cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_16f050:
    // 0x16f050: 0xc0905a0  jal         func_241680
label_16f054:
    if (ctx->pc == 0x16F054u) {
        ctx->pc = 0x16F058u;
        goto label_16f058;
    }
    ctx->pc = 0x16F050u;
    SET_GPR_U32(ctx, 31, 0x16F058u);
    ctx->pc = 0x241680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241680u, 0x16F050u, 0x16F058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F058u;
label_16f058:
    // 0x16f058: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x16f058u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16f05c:
    // 0x16f05c: 0xafa60110  sw          $a2, 0x110($sp)
    ctx->pc = 0x16f05cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 6));
label_16f060:
    // 0x16f060: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x16f060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_16f064:
    // 0x16f064: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x16f064u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16f068:
    // 0x16f068: 0xc119b68  jal         func_466DA0
label_16f06c:
    if (ctx->pc == 0x16F06Cu) {
        ctx->pc = 0x16F070u;
        goto label_16f070;
    }
    ctx->pc = 0x16F068u;
    SET_GPR_U32(ctx, 31, 0x16F070u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x16F068u, 0x16F070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F070u;
label_16f070:
    // 0x16f070: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x16f070u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_16f074:
    // 0x16f074: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x16f074u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_16f078:
    // 0x16f078: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x16f078u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16f07c:
    // 0x16f07c: 0xc0400e0  jal         func_100380
label_16f080:
    if (ctx->pc == 0x16F080u) {
        ctx->pc = 0x16F084u;
        goto label_16f084;
    }
    ctx->pc = 0x16F07Cu;
    SET_GPR_U32(ctx, 31, 0x16F084u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x16F07Cu, 0x16F084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F084u;
label_16f084:
    // 0x16f084: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x16f084u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16f088:
    // 0x16f088: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x16f088u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_16f08c:
    // 0x16f08c: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
label_16f090:
    if (ctx->pc == 0x16F090u) {
        ctx->pc = 0x16F094u;
        goto label_16f094;
    }
    ctx->pc = 0x16F08Cu;
    {
        const bool branch_taken_0x16f08c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x16f08c) {
            ctx->pc = 0x16F0A4u;
            goto label_16f0a4;
        }
    }
    ctx->pc = 0x16F094u;
label_16f094:
    // 0x16f094: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16f094u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16f098:
    // 0x16f098: 0xc09ac08  jal         func_26B020
label_16f09c:
    if (ctx->pc == 0x16F09Cu) {
        ctx->pc = 0x16F0A0u;
        goto label_16f0a0;
    }
    ctx->pc = 0x16F098u;
    SET_GPR_U32(ctx, 31, 0x16F0A0u);
    ctx->pc = 0x26B020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B020u, 0x16F098u, 0x16F0A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F0A0u;
label_16f0a0:
    // 0x16f0a0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x16f0a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16f0a4:
    // 0x16f0a4: 0xafb0010c  sw          $s0, 0x10C($sp)
    ctx->pc = 0x16f0a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 16));
label_16f0a8:
    // 0x16f0a8: 0x8f84bb70  lw          $a0, -0x4490($gp)
    ctx->pc = 0x16f0a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_16f0ac:
    // 0x16f0ac: 0x24850070  addiu       $a1, $a0, 0x70
    ctx->pc = 0x16f0acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
label_16f0b0:
    // 0x16f0b0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x16f0b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_16f0b4:
    // 0x16f0b4: 0xc041b38  jal         func_106CE0
label_16f0b8:
    if (ctx->pc == 0x16F0B8u) {
        ctx->pc = 0x16F0BCu;
        goto label_16f0bc;
    }
    ctx->pc = 0x16F0B4u;
    SET_GPR_U32(ctx, 31, 0x16F0BCu);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x16F0B4u, 0x16F0BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F0BCu;
label_16f0bc:
    // 0x16f0bc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x16f0bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16f0c0:
    // 0x16f0c0: 0x8fa80110  lw          $t0, 0x110($sp)
    ctx->pc = 0x16f0c0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_16f0c4:
    // 0x16f0c4: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x16f0c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_16f0c8:
    // 0x16f0c8: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x16f0c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_16f0cc:
    // 0x16f0cc: 0xc09a364  jal         func_268D90
label_16f0d0:
    if (ctx->pc == 0x16F0D0u) {
        ctx->pc = 0x16F0D4u;
        goto label_16f0d4;
    }
    ctx->pc = 0x16F0CCu;
    SET_GPR_U32(ctx, 31, 0x16F0D4u);
    ctx->pc = 0x268D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x268D90u, 0x16F0CCu, 0x16F0D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F0D4u;
label_16f0d4:
    // 0x16f0d4: 0x8fa3010c  lw          $v1, 0x10C($sp)
    ctx->pc = 0x16f0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
label_16f0d8:
    // 0x16f0d8: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x16f0d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_16f0dc:
    // 0x16f0dc: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x16f0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_16f0e0:
    // 0x16f0e0: 0x8c43007c  lw          $v1, 0x7C($v0)
    ctx->pc = 0x16f0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
label_16f0e4:
    // 0x16f0e4: 0x8fa2010c  lw          $v0, 0x10C($sp)
    ctx->pc = 0x16f0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
label_16f0e8:
    // 0x16f0e8: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x16f0e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
label_16f0ec:
    // 0x16f0ec: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x16f0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_16f0f0:
    // 0x16f0f0: 0x24440070  addiu       $a0, $v0, 0x70
    ctx->pc = 0x16f0f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_16f0f4:
    // 0x16f0f4: 0xc05bc88  jal         func_16F220
label_16f0f8:
    if (ctx->pc == 0x16F0F8u) {
        ctx->pc = 0x16F0FCu;
        goto label_16f0fc;
    }
    ctx->pc = 0x16F0F4u;
    SET_GPR_U32(ctx, 31, 0x16F0FCu);
    ctx->pc = 0x16F220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F220u, 0x16F0F4u, 0x16F0FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F0FCu;
label_16f0fc:
    // 0x16f0fc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x16f0fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16f100:
    // 0x16f100: 0xc0b06cc  jal         func_2C1B30
label_16f104:
    if (ctx->pc == 0x16F104u) {
        ctx->pc = 0x16F108u;
        goto label_16f108;
    }
    ctx->pc = 0x16F100u;
    SET_GPR_U32(ctx, 31, 0x16F108u);
    ctx->pc = 0x2C1B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1B30u, 0x16F100u, 0x16F108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F108u;
label_16f108:
    // 0x16f108: 0x8fa40120  lw          $a0, 0x120($sp)
    ctx->pc = 0x16f108u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_16f10c:
    // 0x16f10c: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x16f10cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_16f110:
    // 0x16f110: 0x603826  xor         $a3, $v1, $zero
    ctx->pc = 0x16f110u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 0));
label_16f114:
    // 0x16f114: 0x2ce70001  sltiu       $a3, $a3, 0x1
    ctx->pc = 0x16f114u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_16f118:
    // 0x16f118: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x16f118u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16f11c:
    // 0x16f11c: 0x8fa5010c  lw          $a1, 0x10C($sp)
    ctx->pc = 0x16f11cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
label_16f120:
    // 0x16f120: 0x8fa20114  lw          $v0, 0x114($sp)
    ctx->pc = 0x16f120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 276)));
label_16f124:
    // 0x16f124: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x16f124u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16f128:
    // 0x16f128: 0xc05bc74  jal         func_16F1D0
label_16f12c:
    if (ctx->pc == 0x16F12Cu) {
        ctx->pc = 0x16F130u;
        goto label_16f130;
    }
    ctx->pc = 0x16F128u;
    SET_GPR_U32(ctx, 31, 0x16F130u);
    ctx->pc = 0x16F1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F1D0u, 0x16F128u, 0x16F130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F130u;
label_16f130:
    // 0x16f130: 0x8fa40120  lw          $a0, 0x120($sp)
    ctx->pc = 0x16f130u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_16f134:
    // 0x16f134: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x16f134u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_16f138:
    // 0x16f138: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x16f138u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_16f13c:
    // 0x16f13c: 0x320f809  jalr        $t9
label_16f140:
    if (ctx->pc == 0x16F140u) {
        ctx->pc = 0x16F144u;
        goto label_16f144;
    }
    ctx->pc = 0x16F13Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16F144u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16F13Cu, 0x16F144u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16F144u;
label_16f144:
    // 0x16f144: 0x8fa40120  lw          $a0, 0x120($sp)
    ctx->pc = 0x16f144u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_16f148:
    // 0x16f148: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x16f148u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_16f14c:
    // 0x16f14c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x16f14cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_16f150:
    // 0x16f150: 0x320f809  jalr        $t9
label_16f154:
    if (ctx->pc == 0x16F154u) {
        ctx->pc = 0x16F158u;
        goto label_16f158;
    }
    ctx->pc = 0x16F150u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16F158u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16F150u, 0x16F158u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16F158u;
label_16f158:
    // 0x16f158: 0x27a400a8  addiu       $a0, $sp, 0xA8
    ctx->pc = 0x16f158u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
label_16f15c:
    // 0x16f15c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x16f15cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_16f160:
    // 0x16f160: 0xc0406a0  jal         func_101A80
label_16f164:
    if (ctx->pc == 0x16F164u) {
        ctx->pc = 0x16F168u;
        goto label_16f168;
    }
    ctx->pc = 0x16F160u;
    SET_GPR_U32(ctx, 31, 0x16F168u);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x16F160u, 0x16F168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F168u;
label_16f168:
    // 0x16f168: 0x27a400b8  addiu       $a0, $sp, 0xB8
    ctx->pc = 0x16f168u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_16f16c:
    // 0x16f16c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x16f16cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_16f170:
    // 0x16f170: 0xc0406a0  jal         func_101A80
label_16f174:
    if (ctx->pc == 0x16F174u) {
        ctx->pc = 0x16F178u;
        goto label_16f178;
    }
    ctx->pc = 0x16F170u;
    SET_GPR_U32(ctx, 31, 0x16F178u);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x16F170u, 0x16F178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F178u;
label_16f178:
    // 0x16f178: 0xc05bca4  jal         func_16F290
label_16f17c:
    if (ctx->pc == 0x16F17Cu) {
        ctx->pc = 0x16F180u;
        goto label_16f180;
    }
    ctx->pc = 0x16F178u;
    SET_GPR_U32(ctx, 31, 0x16F180u);
    ctx->pc = 0x16F290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F290u, 0x16F178u, 0x16F180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F180u;
label_16f180:
    // 0x16f180: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x16f180u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16f184:
    // 0x16f184: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_16f188:
    if (ctx->pc == 0x16F188u) {
        ctx->pc = 0x16F18Cu;
        goto label_16f18c;
    }
    ctx->pc = 0x16F184u;
    {
        const bool branch_taken_0x16f184 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x16f184) {
            ctx->pc = 0x16F198u;
            goto label_16f198;
        }
    }
    ctx->pc = 0x16F18Cu;
label_16f18c:
    // 0x16f18c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16f18cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16f190:
    // 0x16f190: 0xc08d230  jal         func_2348C0
label_16f194:
    if (ctx->pc == 0x16F194u) {
        ctx->pc = 0x16F198u;
        goto label_16f198;
    }
    ctx->pc = 0x16F190u;
    SET_GPR_U32(ctx, 31, 0x16F198u);
    ctx->pc = 0x2348C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2348C0u, 0x16F190u, 0x16F198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F198u;
label_16f198:
    // 0x16f198: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x16f198u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_16f19c:
    // 0x16f19c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x16f19cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_16f1a0:
    // 0x16f1a0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x16f1a0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_16f1a4:
    // 0x16f1a4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x16f1a4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_16f1a8:
    // 0x16f1a8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x16f1a8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_16f1ac:
    // 0x16f1ac: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x16f1acu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_16f1b0:
    // 0x16f1b0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x16f1b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_16f1b4:
    // 0x16f1b4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x16f1b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_16f1b8:
    // 0x16f1b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16f1b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_16f1bc:
    // 0x16f1bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16f1bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_16f1c0:
    // 0x16f1c0: 0x27bd0140  addiu       $sp, $sp, 0x140
    ctx->pc = 0x16f1c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_16f1c4:
    // 0x16f1c4: 0x3e00008  jr          $ra
label_16f1c8:
    if (ctx->pc == 0x16F1C8u) {
        ctx->pc = 0x16F1CCu;
        goto label_16f1cc;
    }
    ctx->pc = 0x16F1C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16F1C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16F1CCu;
label_16f1cc:
    // 0x16f1cc: 0x0  nop
    ctx->pc = 0x16f1ccu;
    // NOP
    ctx->pc = 0x16f1d0u;
}
