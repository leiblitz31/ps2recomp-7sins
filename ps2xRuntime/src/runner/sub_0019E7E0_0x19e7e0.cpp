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

// Function: sub_0019E7E0
// Address: 0x19e7e0 - 0x1a0560
void sub_0019E7E0_0x19e7e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019E7E0_0x19e7e0");
#endif

    switch (ctx->pc) {
        case 0x19e7e0u: goto label_19e7e0;
        case 0x19e7e4u: goto label_19e7e4;
        case 0x19e7e8u: goto label_19e7e8;
        case 0x19e7ecu: goto label_19e7ec;
        case 0x19e7f0u: goto label_19e7f0;
        case 0x19e7f4u: goto label_19e7f4;
        case 0x19e7f8u: goto label_19e7f8;
        case 0x19e7fcu: goto label_19e7fc;
        case 0x19e800u: goto label_19e800;
        case 0x19e804u: goto label_19e804;
        case 0x19e808u: goto label_19e808;
        case 0x19e80cu: goto label_19e80c;
        case 0x19e810u: goto label_19e810;
        case 0x19e814u: goto label_19e814;
        case 0x19e818u: goto label_19e818;
        case 0x19e81cu: goto label_19e81c;
        case 0x19e820u: goto label_19e820;
        case 0x19e824u: goto label_19e824;
        case 0x19e828u: goto label_19e828;
        case 0x19e82cu: goto label_19e82c;
        case 0x19e830u: goto label_19e830;
        case 0x19e834u: goto label_19e834;
        case 0x19e838u: goto label_19e838;
        case 0x19e83cu: goto label_19e83c;
        case 0x19e840u: goto label_19e840;
        case 0x19e844u: goto label_19e844;
        case 0x19e848u: goto label_19e848;
        case 0x19e84cu: goto label_19e84c;
        case 0x19e850u: goto label_19e850;
        case 0x19e854u: goto label_19e854;
        case 0x19e858u: goto label_19e858;
        case 0x19e85cu: goto label_19e85c;
        case 0x19e860u: goto label_19e860;
        case 0x19e864u: goto label_19e864;
        case 0x19e868u: goto label_19e868;
        case 0x19e86cu: goto label_19e86c;
        case 0x19e870u: goto label_19e870;
        case 0x19e874u: goto label_19e874;
        case 0x19e878u: goto label_19e878;
        case 0x19e87cu: goto label_19e87c;
        case 0x19e880u: goto label_19e880;
        case 0x19e884u: goto label_19e884;
        case 0x19e888u: goto label_19e888;
        case 0x19e88cu: goto label_19e88c;
        case 0x19e890u: goto label_19e890;
        case 0x19e894u: goto label_19e894;
        case 0x19e898u: goto label_19e898;
        case 0x19e89cu: goto label_19e89c;
        case 0x19e8a0u: goto label_19e8a0;
        case 0x19e8a4u: goto label_19e8a4;
        case 0x19e8a8u: goto label_19e8a8;
        case 0x19e8acu: goto label_19e8ac;
        case 0x19e8b0u: goto label_19e8b0;
        case 0x19e8b4u: goto label_19e8b4;
        case 0x19e8b8u: goto label_19e8b8;
        case 0x19e8bcu: goto label_19e8bc;
        case 0x19e8c0u: goto label_19e8c0;
        case 0x19e8c4u: goto label_19e8c4;
        case 0x19e8c8u: goto label_19e8c8;
        case 0x19e8ccu: goto label_19e8cc;
        case 0x19e8d0u: goto label_19e8d0;
        case 0x19e8d4u: goto label_19e8d4;
        case 0x19e8d8u: goto label_19e8d8;
        case 0x19e8dcu: goto label_19e8dc;
        case 0x19e8e0u: goto label_19e8e0;
        case 0x19e8e4u: goto label_19e8e4;
        case 0x19e8e8u: goto label_19e8e8;
        case 0x19e8ecu: goto label_19e8ec;
        case 0x19e8f0u: goto label_19e8f0;
        case 0x19e8f4u: goto label_19e8f4;
        case 0x19e8f8u: goto label_19e8f8;
        case 0x19e8fcu: goto label_19e8fc;
        case 0x19e900u: goto label_19e900;
        case 0x19e904u: goto label_19e904;
        case 0x19e908u: goto label_19e908;
        case 0x19e90cu: goto label_19e90c;
        case 0x19e910u: goto label_19e910;
        case 0x19e914u: goto label_19e914;
        case 0x19e918u: goto label_19e918;
        case 0x19e91cu: goto label_19e91c;
        case 0x19e920u: goto label_19e920;
        case 0x19e924u: goto label_19e924;
        case 0x19e928u: goto label_19e928;
        case 0x19e92cu: goto label_19e92c;
        case 0x19e930u: goto label_19e930;
        case 0x19e934u: goto label_19e934;
        case 0x19e938u: goto label_19e938;
        case 0x19e93cu: goto label_19e93c;
        case 0x19e940u: goto label_19e940;
        case 0x19e944u: goto label_19e944;
        case 0x19e948u: goto label_19e948;
        case 0x19e94cu: goto label_19e94c;
        case 0x19e950u: goto label_19e950;
        case 0x19e954u: goto label_19e954;
        case 0x19e958u: goto label_19e958;
        case 0x19e95cu: goto label_19e95c;
        case 0x19e960u: goto label_19e960;
        case 0x19e964u: goto label_19e964;
        case 0x19e968u: goto label_19e968;
        case 0x19e96cu: goto label_19e96c;
        case 0x19e970u: goto label_19e970;
        case 0x19e974u: goto label_19e974;
        case 0x19e978u: goto label_19e978;
        case 0x19e97cu: goto label_19e97c;
        case 0x19e980u: goto label_19e980;
        case 0x19e984u: goto label_19e984;
        case 0x19e988u: goto label_19e988;
        case 0x19e98cu: goto label_19e98c;
        case 0x19e990u: goto label_19e990;
        case 0x19e994u: goto label_19e994;
        case 0x19e998u: goto label_19e998;
        case 0x19e99cu: goto label_19e99c;
        case 0x19e9a0u: goto label_19e9a0;
        case 0x19e9a4u: goto label_19e9a4;
        case 0x19e9a8u: goto label_19e9a8;
        case 0x19e9acu: goto label_19e9ac;
        case 0x19e9b0u: goto label_19e9b0;
        case 0x19e9b4u: goto label_19e9b4;
        case 0x19e9b8u: goto label_19e9b8;
        case 0x19e9bcu: goto label_19e9bc;
        case 0x19e9c0u: goto label_19e9c0;
        case 0x19e9c4u: goto label_19e9c4;
        case 0x19e9c8u: goto label_19e9c8;
        case 0x19e9ccu: goto label_19e9cc;
        case 0x19e9d0u: goto label_19e9d0;
        case 0x19e9d4u: goto label_19e9d4;
        case 0x19e9d8u: goto label_19e9d8;
        case 0x19e9dcu: goto label_19e9dc;
        case 0x19e9e0u: goto label_19e9e0;
        case 0x19e9e4u: goto label_19e9e4;
        case 0x19e9e8u: goto label_19e9e8;
        case 0x19e9ecu: goto label_19e9ec;
        case 0x19e9f0u: goto label_19e9f0;
        case 0x19e9f4u: goto label_19e9f4;
        case 0x19e9f8u: goto label_19e9f8;
        case 0x19e9fcu: goto label_19e9fc;
        case 0x19ea00u: goto label_19ea00;
        case 0x19ea04u: goto label_19ea04;
        case 0x19ea08u: goto label_19ea08;
        case 0x19ea0cu: goto label_19ea0c;
        case 0x19ea10u: goto label_19ea10;
        case 0x19ea14u: goto label_19ea14;
        case 0x19ea18u: goto label_19ea18;
        case 0x19ea1cu: goto label_19ea1c;
        case 0x19ea20u: goto label_19ea20;
        case 0x19ea24u: goto label_19ea24;
        case 0x19ea28u: goto label_19ea28;
        case 0x19ea2cu: goto label_19ea2c;
        case 0x19ea30u: goto label_19ea30;
        case 0x19ea34u: goto label_19ea34;
        case 0x19ea38u: goto label_19ea38;
        case 0x19ea3cu: goto label_19ea3c;
        case 0x19ea40u: goto label_19ea40;
        case 0x19ea44u: goto label_19ea44;
        case 0x19ea48u: goto label_19ea48;
        case 0x19ea4cu: goto label_19ea4c;
        case 0x19ea50u: goto label_19ea50;
        case 0x19ea54u: goto label_19ea54;
        case 0x19ea58u: goto label_19ea58;
        case 0x19ea5cu: goto label_19ea5c;
        case 0x19ea60u: goto label_19ea60;
        case 0x19ea64u: goto label_19ea64;
        case 0x19ea68u: goto label_19ea68;
        case 0x19ea6cu: goto label_19ea6c;
        case 0x19ea70u: goto label_19ea70;
        case 0x19ea74u: goto label_19ea74;
        case 0x19ea78u: goto label_19ea78;
        case 0x19ea7cu: goto label_19ea7c;
        case 0x19ea80u: goto label_19ea80;
        case 0x19ea84u: goto label_19ea84;
        case 0x19ea88u: goto label_19ea88;
        case 0x19ea8cu: goto label_19ea8c;
        case 0x19ea90u: goto label_19ea90;
        case 0x19ea94u: goto label_19ea94;
        case 0x19ea98u: goto label_19ea98;
        case 0x19ea9cu: goto label_19ea9c;
        case 0x19eaa0u: goto label_19eaa0;
        case 0x19eaa4u: goto label_19eaa4;
        case 0x19eaa8u: goto label_19eaa8;
        case 0x19eaacu: goto label_19eaac;
        case 0x19eab0u: goto label_19eab0;
        case 0x19eab4u: goto label_19eab4;
        case 0x19eab8u: goto label_19eab8;
        case 0x19eabcu: goto label_19eabc;
        case 0x19eac0u: goto label_19eac0;
        case 0x19eac4u: goto label_19eac4;
        case 0x19eac8u: goto label_19eac8;
        case 0x19eaccu: goto label_19eacc;
        case 0x19ead0u: goto label_19ead0;
        case 0x19ead4u: goto label_19ead4;
        case 0x19ead8u: goto label_19ead8;
        case 0x19eadcu: goto label_19eadc;
        case 0x19eae0u: goto label_19eae0;
        case 0x19eae4u: goto label_19eae4;
        case 0x19eae8u: goto label_19eae8;
        case 0x19eaecu: goto label_19eaec;
        case 0x19eaf0u: goto label_19eaf0;
        case 0x19eaf4u: goto label_19eaf4;
        case 0x19eaf8u: goto label_19eaf8;
        case 0x19eafcu: goto label_19eafc;
        case 0x19eb00u: goto label_19eb00;
        case 0x19eb04u: goto label_19eb04;
        case 0x19eb08u: goto label_19eb08;
        case 0x19eb0cu: goto label_19eb0c;
        case 0x19eb10u: goto label_19eb10;
        case 0x19eb14u: goto label_19eb14;
        case 0x19eb18u: goto label_19eb18;
        case 0x19eb1cu: goto label_19eb1c;
        case 0x19eb20u: goto label_19eb20;
        case 0x19eb24u: goto label_19eb24;
        case 0x19eb28u: goto label_19eb28;
        case 0x19eb2cu: goto label_19eb2c;
        case 0x19eb30u: goto label_19eb30;
        case 0x19eb34u: goto label_19eb34;
        case 0x19eb38u: goto label_19eb38;
        case 0x19eb3cu: goto label_19eb3c;
        case 0x19eb40u: goto label_19eb40;
        case 0x19eb44u: goto label_19eb44;
        case 0x19eb48u: goto label_19eb48;
        case 0x19eb4cu: goto label_19eb4c;
        case 0x19eb50u: goto label_19eb50;
        case 0x19eb54u: goto label_19eb54;
        case 0x19eb58u: goto label_19eb58;
        case 0x19eb5cu: goto label_19eb5c;
        case 0x19eb60u: goto label_19eb60;
        case 0x19eb64u: goto label_19eb64;
        case 0x19eb68u: goto label_19eb68;
        case 0x19eb6cu: goto label_19eb6c;
        case 0x19eb70u: goto label_19eb70;
        case 0x19eb74u: goto label_19eb74;
        case 0x19eb78u: goto label_19eb78;
        case 0x19eb7cu: goto label_19eb7c;
        case 0x19eb80u: goto label_19eb80;
        case 0x19eb84u: goto label_19eb84;
        case 0x19eb88u: goto label_19eb88;
        case 0x19eb8cu: goto label_19eb8c;
        case 0x19eb90u: goto label_19eb90;
        case 0x19eb94u: goto label_19eb94;
        case 0x19eb98u: goto label_19eb98;
        case 0x19eb9cu: goto label_19eb9c;
        case 0x19eba0u: goto label_19eba0;
        case 0x19eba4u: goto label_19eba4;
        case 0x19eba8u: goto label_19eba8;
        case 0x19ebacu: goto label_19ebac;
        case 0x19ebb0u: goto label_19ebb0;
        case 0x19ebb4u: goto label_19ebb4;
        case 0x19ebb8u: goto label_19ebb8;
        case 0x19ebbcu: goto label_19ebbc;
        case 0x19ebc0u: goto label_19ebc0;
        case 0x19ebc4u: goto label_19ebc4;
        case 0x19ebc8u: goto label_19ebc8;
        case 0x19ebccu: goto label_19ebcc;
        case 0x19ebd0u: goto label_19ebd0;
        case 0x19ebd4u: goto label_19ebd4;
        case 0x19ebd8u: goto label_19ebd8;
        case 0x19ebdcu: goto label_19ebdc;
        case 0x19ebe0u: goto label_19ebe0;
        case 0x19ebe4u: goto label_19ebe4;
        case 0x19ebe8u: goto label_19ebe8;
        case 0x19ebecu: goto label_19ebec;
        case 0x19ebf0u: goto label_19ebf0;
        case 0x19ebf4u: goto label_19ebf4;
        case 0x19ebf8u: goto label_19ebf8;
        case 0x19ebfcu: goto label_19ebfc;
        case 0x19ec00u: goto label_19ec00;
        case 0x19ec04u: goto label_19ec04;
        case 0x19ec08u: goto label_19ec08;
        case 0x19ec0cu: goto label_19ec0c;
        case 0x19ec10u: goto label_19ec10;
        case 0x19ec14u: goto label_19ec14;
        case 0x19ec18u: goto label_19ec18;
        case 0x19ec1cu: goto label_19ec1c;
        case 0x19ec20u: goto label_19ec20;
        case 0x19ec24u: goto label_19ec24;
        case 0x19ec28u: goto label_19ec28;
        case 0x19ec2cu: goto label_19ec2c;
        case 0x19ec30u: goto label_19ec30;
        case 0x19ec34u: goto label_19ec34;
        case 0x19ec38u: goto label_19ec38;
        case 0x19ec3cu: goto label_19ec3c;
        case 0x19ec40u: goto label_19ec40;
        case 0x19ec44u: goto label_19ec44;
        case 0x19ec48u: goto label_19ec48;
        case 0x19ec4cu: goto label_19ec4c;
        case 0x19ec50u: goto label_19ec50;
        case 0x19ec54u: goto label_19ec54;
        case 0x19ec58u: goto label_19ec58;
        case 0x19ec5cu: goto label_19ec5c;
        case 0x19ec60u: goto label_19ec60;
        case 0x19ec64u: goto label_19ec64;
        case 0x19ec68u: goto label_19ec68;
        case 0x19ec6cu: goto label_19ec6c;
        case 0x19ec70u: goto label_19ec70;
        case 0x19ec74u: goto label_19ec74;
        case 0x19ec78u: goto label_19ec78;
        case 0x19ec7cu: goto label_19ec7c;
        case 0x19ec80u: goto label_19ec80;
        case 0x19ec84u: goto label_19ec84;
        case 0x19ec88u: goto label_19ec88;
        case 0x19ec8cu: goto label_19ec8c;
        case 0x19ec90u: goto label_19ec90;
        case 0x19ec94u: goto label_19ec94;
        case 0x19ec98u: goto label_19ec98;
        case 0x19ec9cu: goto label_19ec9c;
        case 0x19eca0u: goto label_19eca0;
        case 0x19eca4u: goto label_19eca4;
        case 0x19eca8u: goto label_19eca8;
        case 0x19ecacu: goto label_19ecac;
        case 0x19ecb0u: goto label_19ecb0;
        case 0x19ecb4u: goto label_19ecb4;
        case 0x19ecb8u: goto label_19ecb8;
        case 0x19ecbcu: goto label_19ecbc;
        case 0x19ecc0u: goto label_19ecc0;
        case 0x19ecc4u: goto label_19ecc4;
        case 0x19ecc8u: goto label_19ecc8;
        case 0x19ecccu: goto label_19eccc;
        case 0x19ecd0u: goto label_19ecd0;
        case 0x19ecd4u: goto label_19ecd4;
        case 0x19ecd8u: goto label_19ecd8;
        case 0x19ecdcu: goto label_19ecdc;
        case 0x19ece0u: goto label_19ece0;
        case 0x19ece4u: goto label_19ece4;
        case 0x19ece8u: goto label_19ece8;
        case 0x19ececu: goto label_19ecec;
        case 0x19ecf0u: goto label_19ecf0;
        case 0x19ecf4u: goto label_19ecf4;
        case 0x19ecf8u: goto label_19ecf8;
        case 0x19ecfcu: goto label_19ecfc;
        case 0x19ed00u: goto label_19ed00;
        case 0x19ed04u: goto label_19ed04;
        case 0x19ed08u: goto label_19ed08;
        case 0x19ed0cu: goto label_19ed0c;
        case 0x19ed10u: goto label_19ed10;
        case 0x19ed14u: goto label_19ed14;
        case 0x19ed18u: goto label_19ed18;
        case 0x19ed1cu: goto label_19ed1c;
        case 0x19ed20u: goto label_19ed20;
        case 0x19ed24u: goto label_19ed24;
        case 0x19ed28u: goto label_19ed28;
        case 0x19ed2cu: goto label_19ed2c;
        case 0x19ed30u: goto label_19ed30;
        case 0x19ed34u: goto label_19ed34;
        case 0x19ed38u: goto label_19ed38;
        case 0x19ed3cu: goto label_19ed3c;
        case 0x19ed40u: goto label_19ed40;
        case 0x19ed44u: goto label_19ed44;
        case 0x19ed48u: goto label_19ed48;
        case 0x19ed4cu: goto label_19ed4c;
        case 0x19ed50u: goto label_19ed50;
        case 0x19ed54u: goto label_19ed54;
        case 0x19ed58u: goto label_19ed58;
        case 0x19ed5cu: goto label_19ed5c;
        case 0x19ed60u: goto label_19ed60;
        case 0x19ed64u: goto label_19ed64;
        case 0x19ed68u: goto label_19ed68;
        case 0x19ed6cu: goto label_19ed6c;
        case 0x19ed70u: goto label_19ed70;
        case 0x19ed74u: goto label_19ed74;
        case 0x19ed78u: goto label_19ed78;
        case 0x19ed7cu: goto label_19ed7c;
        case 0x19ed80u: goto label_19ed80;
        case 0x19ed84u: goto label_19ed84;
        case 0x19ed88u: goto label_19ed88;
        case 0x19ed8cu: goto label_19ed8c;
        case 0x19ed90u: goto label_19ed90;
        case 0x19ed94u: goto label_19ed94;
        case 0x19ed98u: goto label_19ed98;
        case 0x19ed9cu: goto label_19ed9c;
        case 0x19eda0u: goto label_19eda0;
        case 0x19eda4u: goto label_19eda4;
        case 0x19eda8u: goto label_19eda8;
        case 0x19edacu: goto label_19edac;
        case 0x19edb0u: goto label_19edb0;
        case 0x19edb4u: goto label_19edb4;
        case 0x19edb8u: goto label_19edb8;
        case 0x19edbcu: goto label_19edbc;
        case 0x19edc0u: goto label_19edc0;
        case 0x19edc4u: goto label_19edc4;
        case 0x19edc8u: goto label_19edc8;
        case 0x19edccu: goto label_19edcc;
        case 0x19edd0u: goto label_19edd0;
        case 0x19edd4u: goto label_19edd4;
        case 0x19edd8u: goto label_19edd8;
        case 0x19eddcu: goto label_19eddc;
        case 0x19ede0u: goto label_19ede0;
        case 0x19ede4u: goto label_19ede4;
        case 0x19ede8u: goto label_19ede8;
        case 0x19edecu: goto label_19edec;
        case 0x19edf0u: goto label_19edf0;
        case 0x19edf4u: goto label_19edf4;
        case 0x19edf8u: goto label_19edf8;
        case 0x19edfcu: goto label_19edfc;
        case 0x19ee00u: goto label_19ee00;
        case 0x19ee04u: goto label_19ee04;
        case 0x19ee08u: goto label_19ee08;
        case 0x19ee0cu: goto label_19ee0c;
        case 0x19ee10u: goto label_19ee10;
        case 0x19ee14u: goto label_19ee14;
        case 0x19ee18u: goto label_19ee18;
        case 0x19ee1cu: goto label_19ee1c;
        case 0x19ee20u: goto label_19ee20;
        case 0x19ee24u: goto label_19ee24;
        case 0x19ee28u: goto label_19ee28;
        case 0x19ee2cu: goto label_19ee2c;
        case 0x19ee30u: goto label_19ee30;
        case 0x19ee34u: goto label_19ee34;
        case 0x19ee38u: goto label_19ee38;
        case 0x19ee3cu: goto label_19ee3c;
        case 0x19ee40u: goto label_19ee40;
        case 0x19ee44u: goto label_19ee44;
        case 0x19ee48u: goto label_19ee48;
        case 0x19ee4cu: goto label_19ee4c;
        case 0x19ee50u: goto label_19ee50;
        case 0x19ee54u: goto label_19ee54;
        case 0x19ee58u: goto label_19ee58;
        case 0x19ee5cu: goto label_19ee5c;
        case 0x19ee60u: goto label_19ee60;
        case 0x19ee64u: goto label_19ee64;
        case 0x19ee68u: goto label_19ee68;
        case 0x19ee6cu: goto label_19ee6c;
        case 0x19ee70u: goto label_19ee70;
        case 0x19ee74u: goto label_19ee74;
        case 0x19ee78u: goto label_19ee78;
        case 0x19ee7cu: goto label_19ee7c;
        case 0x19ee80u: goto label_19ee80;
        case 0x19ee84u: goto label_19ee84;
        case 0x19ee88u: goto label_19ee88;
        case 0x19ee8cu: goto label_19ee8c;
        case 0x19ee90u: goto label_19ee90;
        case 0x19ee94u: goto label_19ee94;
        case 0x19ee98u: goto label_19ee98;
        case 0x19ee9cu: goto label_19ee9c;
        case 0x19eea0u: goto label_19eea0;
        case 0x19eea4u: goto label_19eea4;
        case 0x19eea8u: goto label_19eea8;
        case 0x19eeacu: goto label_19eeac;
        case 0x19eeb0u: goto label_19eeb0;
        case 0x19eeb4u: goto label_19eeb4;
        case 0x19eeb8u: goto label_19eeb8;
        case 0x19eebcu: goto label_19eebc;
        case 0x19eec0u: goto label_19eec0;
        case 0x19eec4u: goto label_19eec4;
        case 0x19eec8u: goto label_19eec8;
        case 0x19eeccu: goto label_19eecc;
        case 0x19eed0u: goto label_19eed0;
        case 0x19eed4u: goto label_19eed4;
        case 0x19eed8u: goto label_19eed8;
        case 0x19eedcu: goto label_19eedc;
        case 0x19eee0u: goto label_19eee0;
        case 0x19eee4u: goto label_19eee4;
        case 0x19eee8u: goto label_19eee8;
        case 0x19eeecu: goto label_19eeec;
        case 0x19eef0u: goto label_19eef0;
        case 0x19eef4u: goto label_19eef4;
        case 0x19eef8u: goto label_19eef8;
        case 0x19eefcu: goto label_19eefc;
        case 0x19ef00u: goto label_19ef00;
        case 0x19ef04u: goto label_19ef04;
        case 0x19ef08u: goto label_19ef08;
        case 0x19ef0cu: goto label_19ef0c;
        case 0x19ef10u: goto label_19ef10;
        case 0x19ef14u: goto label_19ef14;
        case 0x19ef18u: goto label_19ef18;
        case 0x19ef1cu: goto label_19ef1c;
        case 0x19ef20u: goto label_19ef20;
        case 0x19ef24u: goto label_19ef24;
        case 0x19ef28u: goto label_19ef28;
        case 0x19ef2cu: goto label_19ef2c;
        case 0x19ef30u: goto label_19ef30;
        case 0x19ef34u: goto label_19ef34;
        case 0x19ef38u: goto label_19ef38;
        case 0x19ef3cu: goto label_19ef3c;
        case 0x19ef40u: goto label_19ef40;
        case 0x19ef44u: goto label_19ef44;
        case 0x19ef48u: goto label_19ef48;
        case 0x19ef4cu: goto label_19ef4c;
        case 0x19ef50u: goto label_19ef50;
        case 0x19ef54u: goto label_19ef54;
        case 0x19ef58u: goto label_19ef58;
        case 0x19ef5cu: goto label_19ef5c;
        case 0x19ef60u: goto label_19ef60;
        case 0x19ef64u: goto label_19ef64;
        case 0x19ef68u: goto label_19ef68;
        case 0x19ef6cu: goto label_19ef6c;
        case 0x19ef70u: goto label_19ef70;
        case 0x19ef74u: goto label_19ef74;
        case 0x19ef78u: goto label_19ef78;
        case 0x19ef7cu: goto label_19ef7c;
        case 0x19ef80u: goto label_19ef80;
        case 0x19ef84u: goto label_19ef84;
        case 0x19ef88u: goto label_19ef88;
        case 0x19ef8cu: goto label_19ef8c;
        case 0x19ef90u: goto label_19ef90;
        case 0x19ef94u: goto label_19ef94;
        case 0x19ef98u: goto label_19ef98;
        case 0x19ef9cu: goto label_19ef9c;
        case 0x19efa0u: goto label_19efa0;
        case 0x19efa4u: goto label_19efa4;
        case 0x19efa8u: goto label_19efa8;
        case 0x19efacu: goto label_19efac;
        case 0x19efb0u: goto label_19efb0;
        case 0x19efb4u: goto label_19efb4;
        case 0x19efb8u: goto label_19efb8;
        case 0x19efbcu: goto label_19efbc;
        case 0x19efc0u: goto label_19efc0;
        case 0x19efc4u: goto label_19efc4;
        case 0x19efc8u: goto label_19efc8;
        case 0x19efccu: goto label_19efcc;
        case 0x19efd0u: goto label_19efd0;
        case 0x19efd4u: goto label_19efd4;
        case 0x19efd8u: goto label_19efd8;
        case 0x19efdcu: goto label_19efdc;
        case 0x19efe0u: goto label_19efe0;
        case 0x19efe4u: goto label_19efe4;
        case 0x19efe8u: goto label_19efe8;
        case 0x19efecu: goto label_19efec;
        case 0x19eff0u: goto label_19eff0;
        case 0x19eff4u: goto label_19eff4;
        case 0x19eff8u: goto label_19eff8;
        case 0x19effcu: goto label_19effc;
        case 0x19f000u: goto label_19f000;
        case 0x19f004u: goto label_19f004;
        case 0x19f008u: goto label_19f008;
        case 0x19f00cu: goto label_19f00c;
        case 0x19f010u: goto label_19f010;
        case 0x19f014u: goto label_19f014;
        case 0x19f018u: goto label_19f018;
        case 0x19f01cu: goto label_19f01c;
        case 0x19f020u: goto label_19f020;
        case 0x19f024u: goto label_19f024;
        case 0x19f028u: goto label_19f028;
        case 0x19f02cu: goto label_19f02c;
        case 0x19f030u: goto label_19f030;
        case 0x19f034u: goto label_19f034;
        case 0x19f038u: goto label_19f038;
        case 0x19f03cu: goto label_19f03c;
        case 0x19f040u: goto label_19f040;
        case 0x19f044u: goto label_19f044;
        case 0x19f048u: goto label_19f048;
        case 0x19f04cu: goto label_19f04c;
        case 0x19f050u: goto label_19f050;
        case 0x19f054u: goto label_19f054;
        case 0x19f058u: goto label_19f058;
        case 0x19f05cu: goto label_19f05c;
        case 0x19f060u: goto label_19f060;
        case 0x19f064u: goto label_19f064;
        case 0x19f068u: goto label_19f068;
        case 0x19f06cu: goto label_19f06c;
        case 0x19f070u: goto label_19f070;
        case 0x19f074u: goto label_19f074;
        case 0x19f078u: goto label_19f078;
        case 0x19f07cu: goto label_19f07c;
        case 0x19f080u: goto label_19f080;
        case 0x19f084u: goto label_19f084;
        case 0x19f088u: goto label_19f088;
        case 0x19f08cu: goto label_19f08c;
        case 0x19f090u: goto label_19f090;
        case 0x19f094u: goto label_19f094;
        case 0x19f098u: goto label_19f098;
        case 0x19f09cu: goto label_19f09c;
        case 0x19f0a0u: goto label_19f0a0;
        case 0x19f0a4u: goto label_19f0a4;
        case 0x19f0a8u: goto label_19f0a8;
        case 0x19f0acu: goto label_19f0ac;
        case 0x19f0b0u: goto label_19f0b0;
        case 0x19f0b4u: goto label_19f0b4;
        case 0x19f0b8u: goto label_19f0b8;
        case 0x19f0bcu: goto label_19f0bc;
        case 0x19f0c0u: goto label_19f0c0;
        case 0x19f0c4u: goto label_19f0c4;
        case 0x19f0c8u: goto label_19f0c8;
        case 0x19f0ccu: goto label_19f0cc;
        case 0x19f0d0u: goto label_19f0d0;
        case 0x19f0d4u: goto label_19f0d4;
        case 0x19f0d8u: goto label_19f0d8;
        case 0x19f0dcu: goto label_19f0dc;
        case 0x19f0e0u: goto label_19f0e0;
        case 0x19f0e4u: goto label_19f0e4;
        case 0x19f0e8u: goto label_19f0e8;
        case 0x19f0ecu: goto label_19f0ec;
        case 0x19f0f0u: goto label_19f0f0;
        case 0x19f0f4u: goto label_19f0f4;
        case 0x19f0f8u: goto label_19f0f8;
        case 0x19f0fcu: goto label_19f0fc;
        case 0x19f100u: goto label_19f100;
        case 0x19f104u: goto label_19f104;
        case 0x19f108u: goto label_19f108;
        case 0x19f10cu: goto label_19f10c;
        case 0x19f110u: goto label_19f110;
        case 0x19f114u: goto label_19f114;
        case 0x19f118u: goto label_19f118;
        case 0x19f11cu: goto label_19f11c;
        case 0x19f120u: goto label_19f120;
        case 0x19f124u: goto label_19f124;
        case 0x19f128u: goto label_19f128;
        case 0x19f12cu: goto label_19f12c;
        case 0x19f130u: goto label_19f130;
        case 0x19f134u: goto label_19f134;
        case 0x19f138u: goto label_19f138;
        case 0x19f13cu: goto label_19f13c;
        case 0x19f140u: goto label_19f140;
        case 0x19f144u: goto label_19f144;
        case 0x19f148u: goto label_19f148;
        case 0x19f14cu: goto label_19f14c;
        case 0x19f150u: goto label_19f150;
        case 0x19f154u: goto label_19f154;
        case 0x19f158u: goto label_19f158;
        case 0x19f15cu: goto label_19f15c;
        case 0x19f160u: goto label_19f160;
        case 0x19f164u: goto label_19f164;
        case 0x19f168u: goto label_19f168;
        case 0x19f16cu: goto label_19f16c;
        case 0x19f170u: goto label_19f170;
        case 0x19f174u: goto label_19f174;
        case 0x19f178u: goto label_19f178;
        case 0x19f17cu: goto label_19f17c;
        case 0x19f180u: goto label_19f180;
        case 0x19f184u: goto label_19f184;
        case 0x19f188u: goto label_19f188;
        case 0x19f18cu: goto label_19f18c;
        case 0x19f190u: goto label_19f190;
        case 0x19f194u: goto label_19f194;
        case 0x19f198u: goto label_19f198;
        case 0x19f19cu: goto label_19f19c;
        case 0x19f1a0u: goto label_19f1a0;
        case 0x19f1a4u: goto label_19f1a4;
        case 0x19f1a8u: goto label_19f1a8;
        case 0x19f1acu: goto label_19f1ac;
        case 0x19f1b0u: goto label_19f1b0;
        case 0x19f1b4u: goto label_19f1b4;
        case 0x19f1b8u: goto label_19f1b8;
        case 0x19f1bcu: goto label_19f1bc;
        case 0x19f1c0u: goto label_19f1c0;
        case 0x19f1c4u: goto label_19f1c4;
        case 0x19f1c8u: goto label_19f1c8;
        case 0x19f1ccu: goto label_19f1cc;
        case 0x19f1d0u: goto label_19f1d0;
        case 0x19f1d4u: goto label_19f1d4;
        case 0x19f1d8u: goto label_19f1d8;
        case 0x19f1dcu: goto label_19f1dc;
        case 0x19f1e0u: goto label_19f1e0;
        case 0x19f1e4u: goto label_19f1e4;
        case 0x19f1e8u: goto label_19f1e8;
        case 0x19f1ecu: goto label_19f1ec;
        case 0x19f1f0u: goto label_19f1f0;
        case 0x19f1f4u: goto label_19f1f4;
        case 0x19f1f8u: goto label_19f1f8;
        case 0x19f1fcu: goto label_19f1fc;
        case 0x19f200u: goto label_19f200;
        case 0x19f204u: goto label_19f204;
        case 0x19f208u: goto label_19f208;
        case 0x19f20cu: goto label_19f20c;
        case 0x19f210u: goto label_19f210;
        case 0x19f214u: goto label_19f214;
        case 0x19f218u: goto label_19f218;
        case 0x19f21cu: goto label_19f21c;
        case 0x19f220u: goto label_19f220;
        case 0x19f224u: goto label_19f224;
        case 0x19f228u: goto label_19f228;
        case 0x19f22cu: goto label_19f22c;
        case 0x19f230u: goto label_19f230;
        case 0x19f234u: goto label_19f234;
        case 0x19f238u: goto label_19f238;
        case 0x19f23cu: goto label_19f23c;
        case 0x19f240u: goto label_19f240;
        case 0x19f244u: goto label_19f244;
        case 0x19f248u: goto label_19f248;
        case 0x19f24cu: goto label_19f24c;
        case 0x19f250u: goto label_19f250;
        case 0x19f254u: goto label_19f254;
        case 0x19f258u: goto label_19f258;
        case 0x19f25cu: goto label_19f25c;
        case 0x19f260u: goto label_19f260;
        case 0x19f264u: goto label_19f264;
        case 0x19f268u: goto label_19f268;
        case 0x19f26cu: goto label_19f26c;
        case 0x19f270u: goto label_19f270;
        case 0x19f274u: goto label_19f274;
        case 0x19f278u: goto label_19f278;
        case 0x19f27cu: goto label_19f27c;
        case 0x19f280u: goto label_19f280;
        case 0x19f284u: goto label_19f284;
        case 0x19f288u: goto label_19f288;
        case 0x19f28cu: goto label_19f28c;
        case 0x19f290u: goto label_19f290;
        case 0x19f294u: goto label_19f294;
        case 0x19f298u: goto label_19f298;
        case 0x19f29cu: goto label_19f29c;
        case 0x19f2a0u: goto label_19f2a0;
        case 0x19f2a4u: goto label_19f2a4;
        case 0x19f2a8u: goto label_19f2a8;
        case 0x19f2acu: goto label_19f2ac;
        case 0x19f2b0u: goto label_19f2b0;
        case 0x19f2b4u: goto label_19f2b4;
        case 0x19f2b8u: goto label_19f2b8;
        case 0x19f2bcu: goto label_19f2bc;
        case 0x19f2c0u: goto label_19f2c0;
        case 0x19f2c4u: goto label_19f2c4;
        case 0x19f2c8u: goto label_19f2c8;
        case 0x19f2ccu: goto label_19f2cc;
        case 0x19f2d0u: goto label_19f2d0;
        case 0x19f2d4u: goto label_19f2d4;
        case 0x19f2d8u: goto label_19f2d8;
        case 0x19f2dcu: goto label_19f2dc;
        case 0x19f2e0u: goto label_19f2e0;
        case 0x19f2e4u: goto label_19f2e4;
        case 0x19f2e8u: goto label_19f2e8;
        case 0x19f2ecu: goto label_19f2ec;
        case 0x19f2f0u: goto label_19f2f0;
        case 0x19f2f4u: goto label_19f2f4;
        case 0x19f2f8u: goto label_19f2f8;
        case 0x19f2fcu: goto label_19f2fc;
        case 0x19f300u: goto label_19f300;
        case 0x19f304u: goto label_19f304;
        case 0x19f308u: goto label_19f308;
        case 0x19f30cu: goto label_19f30c;
        case 0x19f310u: goto label_19f310;
        case 0x19f314u: goto label_19f314;
        case 0x19f318u: goto label_19f318;
        case 0x19f31cu: goto label_19f31c;
        case 0x19f320u: goto label_19f320;
        case 0x19f324u: goto label_19f324;
        case 0x19f328u: goto label_19f328;
        case 0x19f32cu: goto label_19f32c;
        case 0x19f330u: goto label_19f330;
        case 0x19f334u: goto label_19f334;
        case 0x19f338u: goto label_19f338;
        case 0x19f33cu: goto label_19f33c;
        case 0x19f340u: goto label_19f340;
        case 0x19f344u: goto label_19f344;
        case 0x19f348u: goto label_19f348;
        case 0x19f34cu: goto label_19f34c;
        case 0x19f350u: goto label_19f350;
        case 0x19f354u: goto label_19f354;
        case 0x19f358u: goto label_19f358;
        case 0x19f35cu: goto label_19f35c;
        case 0x19f360u: goto label_19f360;
        case 0x19f364u: goto label_19f364;
        case 0x19f368u: goto label_19f368;
        case 0x19f36cu: goto label_19f36c;
        case 0x19f370u: goto label_19f370;
        case 0x19f374u: goto label_19f374;
        case 0x19f378u: goto label_19f378;
        case 0x19f37cu: goto label_19f37c;
        case 0x19f380u: goto label_19f380;
        case 0x19f384u: goto label_19f384;
        case 0x19f388u: goto label_19f388;
        case 0x19f38cu: goto label_19f38c;
        case 0x19f390u: goto label_19f390;
        case 0x19f394u: goto label_19f394;
        case 0x19f398u: goto label_19f398;
        case 0x19f39cu: goto label_19f39c;
        case 0x19f3a0u: goto label_19f3a0;
        case 0x19f3a4u: goto label_19f3a4;
        case 0x19f3a8u: goto label_19f3a8;
        case 0x19f3acu: goto label_19f3ac;
        case 0x19f3b0u: goto label_19f3b0;
        case 0x19f3b4u: goto label_19f3b4;
        case 0x19f3b8u: goto label_19f3b8;
        case 0x19f3bcu: goto label_19f3bc;
        case 0x19f3c0u: goto label_19f3c0;
        case 0x19f3c4u: goto label_19f3c4;
        case 0x19f3c8u: goto label_19f3c8;
        case 0x19f3ccu: goto label_19f3cc;
        case 0x19f3d0u: goto label_19f3d0;
        case 0x19f3d4u: goto label_19f3d4;
        case 0x19f3d8u: goto label_19f3d8;
        case 0x19f3dcu: goto label_19f3dc;
        case 0x19f3e0u: goto label_19f3e0;
        case 0x19f3e4u: goto label_19f3e4;
        case 0x19f3e8u: goto label_19f3e8;
        case 0x19f3ecu: goto label_19f3ec;
        case 0x19f3f0u: goto label_19f3f0;
        case 0x19f3f4u: goto label_19f3f4;
        case 0x19f3f8u: goto label_19f3f8;
        case 0x19f3fcu: goto label_19f3fc;
        case 0x19f400u: goto label_19f400;
        case 0x19f404u: goto label_19f404;
        case 0x19f408u: goto label_19f408;
        case 0x19f40cu: goto label_19f40c;
        case 0x19f410u: goto label_19f410;
        case 0x19f414u: goto label_19f414;
        case 0x19f418u: goto label_19f418;
        case 0x19f41cu: goto label_19f41c;
        case 0x19f420u: goto label_19f420;
        case 0x19f424u: goto label_19f424;
        case 0x19f428u: goto label_19f428;
        case 0x19f42cu: goto label_19f42c;
        case 0x19f430u: goto label_19f430;
        case 0x19f434u: goto label_19f434;
        case 0x19f438u: goto label_19f438;
        case 0x19f43cu: goto label_19f43c;
        case 0x19f440u: goto label_19f440;
        case 0x19f444u: goto label_19f444;
        case 0x19f448u: goto label_19f448;
        case 0x19f44cu: goto label_19f44c;
        case 0x19f450u: goto label_19f450;
        case 0x19f454u: goto label_19f454;
        case 0x19f458u: goto label_19f458;
        case 0x19f45cu: goto label_19f45c;
        case 0x19f460u: goto label_19f460;
        case 0x19f464u: goto label_19f464;
        case 0x19f468u: goto label_19f468;
        case 0x19f46cu: goto label_19f46c;
        case 0x19f470u: goto label_19f470;
        case 0x19f474u: goto label_19f474;
        case 0x19f478u: goto label_19f478;
        case 0x19f47cu: goto label_19f47c;
        case 0x19f480u: goto label_19f480;
        case 0x19f484u: goto label_19f484;
        case 0x19f488u: goto label_19f488;
        case 0x19f48cu: goto label_19f48c;
        case 0x19f490u: goto label_19f490;
        case 0x19f494u: goto label_19f494;
        case 0x19f498u: goto label_19f498;
        case 0x19f49cu: goto label_19f49c;
        case 0x19f4a0u: goto label_19f4a0;
        case 0x19f4a4u: goto label_19f4a4;
        case 0x19f4a8u: goto label_19f4a8;
        case 0x19f4acu: goto label_19f4ac;
        case 0x19f4b0u: goto label_19f4b0;
        case 0x19f4b4u: goto label_19f4b4;
        case 0x19f4b8u: goto label_19f4b8;
        case 0x19f4bcu: goto label_19f4bc;
        case 0x19f4c0u: goto label_19f4c0;
        case 0x19f4c4u: goto label_19f4c4;
        case 0x19f4c8u: goto label_19f4c8;
        case 0x19f4ccu: goto label_19f4cc;
        case 0x19f4d0u: goto label_19f4d0;
        case 0x19f4d4u: goto label_19f4d4;
        case 0x19f4d8u: goto label_19f4d8;
        case 0x19f4dcu: goto label_19f4dc;
        case 0x19f4e0u: goto label_19f4e0;
        case 0x19f4e4u: goto label_19f4e4;
        case 0x19f4e8u: goto label_19f4e8;
        case 0x19f4ecu: goto label_19f4ec;
        case 0x19f4f0u: goto label_19f4f0;
        case 0x19f4f4u: goto label_19f4f4;
        case 0x19f4f8u: goto label_19f4f8;
        case 0x19f4fcu: goto label_19f4fc;
        case 0x19f500u: goto label_19f500;
        case 0x19f504u: goto label_19f504;
        case 0x19f508u: goto label_19f508;
        case 0x19f50cu: goto label_19f50c;
        case 0x19f510u: goto label_19f510;
        case 0x19f514u: goto label_19f514;
        case 0x19f518u: goto label_19f518;
        case 0x19f51cu: goto label_19f51c;
        case 0x19f520u: goto label_19f520;
        case 0x19f524u: goto label_19f524;
        case 0x19f528u: goto label_19f528;
        case 0x19f52cu: goto label_19f52c;
        case 0x19f530u: goto label_19f530;
        case 0x19f534u: goto label_19f534;
        case 0x19f538u: goto label_19f538;
        case 0x19f53cu: goto label_19f53c;
        case 0x19f540u: goto label_19f540;
        case 0x19f544u: goto label_19f544;
        case 0x19f548u: goto label_19f548;
        case 0x19f54cu: goto label_19f54c;
        case 0x19f550u: goto label_19f550;
        case 0x19f554u: goto label_19f554;
        case 0x19f558u: goto label_19f558;
        case 0x19f55cu: goto label_19f55c;
        case 0x19f560u: goto label_19f560;
        case 0x19f564u: goto label_19f564;
        case 0x19f568u: goto label_19f568;
        case 0x19f56cu: goto label_19f56c;
        case 0x19f570u: goto label_19f570;
        case 0x19f574u: goto label_19f574;
        case 0x19f578u: goto label_19f578;
        case 0x19f57cu: goto label_19f57c;
        case 0x19f580u: goto label_19f580;
        case 0x19f584u: goto label_19f584;
        case 0x19f588u: goto label_19f588;
        case 0x19f58cu: goto label_19f58c;
        case 0x19f590u: goto label_19f590;
        case 0x19f594u: goto label_19f594;
        case 0x19f598u: goto label_19f598;
        case 0x19f59cu: goto label_19f59c;
        case 0x19f5a0u: goto label_19f5a0;
        case 0x19f5a4u: goto label_19f5a4;
        case 0x19f5a8u: goto label_19f5a8;
        case 0x19f5acu: goto label_19f5ac;
        case 0x19f5b0u: goto label_19f5b0;
        case 0x19f5b4u: goto label_19f5b4;
        case 0x19f5b8u: goto label_19f5b8;
        case 0x19f5bcu: goto label_19f5bc;
        case 0x19f5c0u: goto label_19f5c0;
        case 0x19f5c4u: goto label_19f5c4;
        case 0x19f5c8u: goto label_19f5c8;
        case 0x19f5ccu: goto label_19f5cc;
        case 0x19f5d0u: goto label_19f5d0;
        case 0x19f5d4u: goto label_19f5d4;
        case 0x19f5d8u: goto label_19f5d8;
        case 0x19f5dcu: goto label_19f5dc;
        case 0x19f5e0u: goto label_19f5e0;
        case 0x19f5e4u: goto label_19f5e4;
        case 0x19f5e8u: goto label_19f5e8;
        case 0x19f5ecu: goto label_19f5ec;
        case 0x19f5f0u: goto label_19f5f0;
        case 0x19f5f4u: goto label_19f5f4;
        case 0x19f5f8u: goto label_19f5f8;
        case 0x19f5fcu: goto label_19f5fc;
        case 0x19f600u: goto label_19f600;
        case 0x19f604u: goto label_19f604;
        case 0x19f608u: goto label_19f608;
        case 0x19f60cu: goto label_19f60c;
        case 0x19f610u: goto label_19f610;
        case 0x19f614u: goto label_19f614;
        case 0x19f618u: goto label_19f618;
        case 0x19f61cu: goto label_19f61c;
        case 0x19f620u: goto label_19f620;
        case 0x19f624u: goto label_19f624;
        case 0x19f628u: goto label_19f628;
        case 0x19f62cu: goto label_19f62c;
        case 0x19f630u: goto label_19f630;
        case 0x19f634u: goto label_19f634;
        case 0x19f638u: goto label_19f638;
        case 0x19f63cu: goto label_19f63c;
        case 0x19f640u: goto label_19f640;
        case 0x19f644u: goto label_19f644;
        case 0x19f648u: goto label_19f648;
        case 0x19f64cu: goto label_19f64c;
        case 0x19f650u: goto label_19f650;
        case 0x19f654u: goto label_19f654;
        case 0x19f658u: goto label_19f658;
        case 0x19f65cu: goto label_19f65c;
        case 0x19f660u: goto label_19f660;
        case 0x19f664u: goto label_19f664;
        case 0x19f668u: goto label_19f668;
        case 0x19f66cu: goto label_19f66c;
        case 0x19f670u: goto label_19f670;
        case 0x19f674u: goto label_19f674;
        case 0x19f678u: goto label_19f678;
        case 0x19f67cu: goto label_19f67c;
        case 0x19f680u: goto label_19f680;
        case 0x19f684u: goto label_19f684;
        case 0x19f688u: goto label_19f688;
        case 0x19f68cu: goto label_19f68c;
        case 0x19f690u: goto label_19f690;
        case 0x19f694u: goto label_19f694;
        case 0x19f698u: goto label_19f698;
        case 0x19f69cu: goto label_19f69c;
        case 0x19f6a0u: goto label_19f6a0;
        case 0x19f6a4u: goto label_19f6a4;
        case 0x19f6a8u: goto label_19f6a8;
        case 0x19f6acu: goto label_19f6ac;
        case 0x19f6b0u: goto label_19f6b0;
        case 0x19f6b4u: goto label_19f6b4;
        case 0x19f6b8u: goto label_19f6b8;
        case 0x19f6bcu: goto label_19f6bc;
        case 0x19f6c0u: goto label_19f6c0;
        case 0x19f6c4u: goto label_19f6c4;
        case 0x19f6c8u: goto label_19f6c8;
        case 0x19f6ccu: goto label_19f6cc;
        case 0x19f6d0u: goto label_19f6d0;
        case 0x19f6d4u: goto label_19f6d4;
        case 0x19f6d8u: goto label_19f6d8;
        case 0x19f6dcu: goto label_19f6dc;
        case 0x19f6e0u: goto label_19f6e0;
        case 0x19f6e4u: goto label_19f6e4;
        case 0x19f6e8u: goto label_19f6e8;
        case 0x19f6ecu: goto label_19f6ec;
        case 0x19f6f0u: goto label_19f6f0;
        case 0x19f6f4u: goto label_19f6f4;
        case 0x19f6f8u: goto label_19f6f8;
        case 0x19f6fcu: goto label_19f6fc;
        case 0x19f700u: goto label_19f700;
        case 0x19f704u: goto label_19f704;
        case 0x19f708u: goto label_19f708;
        case 0x19f70cu: goto label_19f70c;
        case 0x19f710u: goto label_19f710;
        case 0x19f714u: goto label_19f714;
        case 0x19f718u: goto label_19f718;
        case 0x19f71cu: goto label_19f71c;
        case 0x19f720u: goto label_19f720;
        case 0x19f724u: goto label_19f724;
        case 0x19f728u: goto label_19f728;
        case 0x19f72cu: goto label_19f72c;
        case 0x19f730u: goto label_19f730;
        case 0x19f734u: goto label_19f734;
        case 0x19f738u: goto label_19f738;
        case 0x19f73cu: goto label_19f73c;
        case 0x19f740u: goto label_19f740;
        case 0x19f744u: goto label_19f744;
        case 0x19f748u: goto label_19f748;
        case 0x19f74cu: goto label_19f74c;
        case 0x19f750u: goto label_19f750;
        case 0x19f754u: goto label_19f754;
        case 0x19f758u: goto label_19f758;
        case 0x19f75cu: goto label_19f75c;
        case 0x19f760u: goto label_19f760;
        case 0x19f764u: goto label_19f764;
        case 0x19f768u: goto label_19f768;
        case 0x19f76cu: goto label_19f76c;
        case 0x19f770u: goto label_19f770;
        case 0x19f774u: goto label_19f774;
        case 0x19f778u: goto label_19f778;
        case 0x19f77cu: goto label_19f77c;
        case 0x19f780u: goto label_19f780;
        case 0x19f784u: goto label_19f784;
        case 0x19f788u: goto label_19f788;
        case 0x19f78cu: goto label_19f78c;
        case 0x19f790u: goto label_19f790;
        case 0x19f794u: goto label_19f794;
        case 0x19f798u: goto label_19f798;
        case 0x19f79cu: goto label_19f79c;
        case 0x19f7a0u: goto label_19f7a0;
        case 0x19f7a4u: goto label_19f7a4;
        case 0x19f7a8u: goto label_19f7a8;
        case 0x19f7acu: goto label_19f7ac;
        case 0x19f7b0u: goto label_19f7b0;
        case 0x19f7b4u: goto label_19f7b4;
        case 0x19f7b8u: goto label_19f7b8;
        case 0x19f7bcu: goto label_19f7bc;
        case 0x19f7c0u: goto label_19f7c0;
        case 0x19f7c4u: goto label_19f7c4;
        case 0x19f7c8u: goto label_19f7c8;
        case 0x19f7ccu: goto label_19f7cc;
        case 0x19f7d0u: goto label_19f7d0;
        case 0x19f7d4u: goto label_19f7d4;
        case 0x19f7d8u: goto label_19f7d8;
        case 0x19f7dcu: goto label_19f7dc;
        case 0x19f7e0u: goto label_19f7e0;
        case 0x19f7e4u: goto label_19f7e4;
        case 0x19f7e8u: goto label_19f7e8;
        case 0x19f7ecu: goto label_19f7ec;
        case 0x19f7f0u: goto label_19f7f0;
        case 0x19f7f4u: goto label_19f7f4;
        case 0x19f7f8u: goto label_19f7f8;
        case 0x19f7fcu: goto label_19f7fc;
        case 0x19f800u: goto label_19f800;
        case 0x19f804u: goto label_19f804;
        case 0x19f808u: goto label_19f808;
        case 0x19f80cu: goto label_19f80c;
        case 0x19f810u: goto label_19f810;
        case 0x19f814u: goto label_19f814;
        case 0x19f818u: goto label_19f818;
        case 0x19f81cu: goto label_19f81c;
        case 0x19f820u: goto label_19f820;
        case 0x19f824u: goto label_19f824;
        case 0x19f828u: goto label_19f828;
        case 0x19f82cu: goto label_19f82c;
        case 0x19f830u: goto label_19f830;
        case 0x19f834u: goto label_19f834;
        case 0x19f838u: goto label_19f838;
        case 0x19f83cu: goto label_19f83c;
        case 0x19f840u: goto label_19f840;
        case 0x19f844u: goto label_19f844;
        case 0x19f848u: goto label_19f848;
        case 0x19f84cu: goto label_19f84c;
        case 0x19f850u: goto label_19f850;
        case 0x19f854u: goto label_19f854;
        case 0x19f858u: goto label_19f858;
        case 0x19f85cu: goto label_19f85c;
        case 0x19f860u: goto label_19f860;
        case 0x19f864u: goto label_19f864;
        case 0x19f868u: goto label_19f868;
        case 0x19f86cu: goto label_19f86c;
        case 0x19f870u: goto label_19f870;
        case 0x19f874u: goto label_19f874;
        case 0x19f878u: goto label_19f878;
        case 0x19f87cu: goto label_19f87c;
        case 0x19f880u: goto label_19f880;
        case 0x19f884u: goto label_19f884;
        case 0x19f888u: goto label_19f888;
        case 0x19f88cu: goto label_19f88c;
        case 0x19f890u: goto label_19f890;
        case 0x19f894u: goto label_19f894;
        case 0x19f898u: goto label_19f898;
        case 0x19f89cu: goto label_19f89c;
        case 0x19f8a0u: goto label_19f8a0;
        case 0x19f8a4u: goto label_19f8a4;
        case 0x19f8a8u: goto label_19f8a8;
        case 0x19f8acu: goto label_19f8ac;
        case 0x19f8b0u: goto label_19f8b0;
        case 0x19f8b4u: goto label_19f8b4;
        case 0x19f8b8u: goto label_19f8b8;
        case 0x19f8bcu: goto label_19f8bc;
        case 0x19f8c0u: goto label_19f8c0;
        case 0x19f8c4u: goto label_19f8c4;
        case 0x19f8c8u: goto label_19f8c8;
        case 0x19f8ccu: goto label_19f8cc;
        case 0x19f8d0u: goto label_19f8d0;
        case 0x19f8d4u: goto label_19f8d4;
        case 0x19f8d8u: goto label_19f8d8;
        case 0x19f8dcu: goto label_19f8dc;
        case 0x19f8e0u: goto label_19f8e0;
        case 0x19f8e4u: goto label_19f8e4;
        case 0x19f8e8u: goto label_19f8e8;
        case 0x19f8ecu: goto label_19f8ec;
        case 0x19f8f0u: goto label_19f8f0;
        case 0x19f8f4u: goto label_19f8f4;
        case 0x19f8f8u: goto label_19f8f8;
        case 0x19f8fcu: goto label_19f8fc;
        case 0x19f900u: goto label_19f900;
        case 0x19f904u: goto label_19f904;
        case 0x19f908u: goto label_19f908;
        case 0x19f90cu: goto label_19f90c;
        case 0x19f910u: goto label_19f910;
        case 0x19f914u: goto label_19f914;
        case 0x19f918u: goto label_19f918;
        case 0x19f91cu: goto label_19f91c;
        case 0x19f920u: goto label_19f920;
        case 0x19f924u: goto label_19f924;
        case 0x19f928u: goto label_19f928;
        case 0x19f92cu: goto label_19f92c;
        case 0x19f930u: goto label_19f930;
        case 0x19f934u: goto label_19f934;
        case 0x19f938u: goto label_19f938;
        case 0x19f93cu: goto label_19f93c;
        case 0x19f940u: goto label_19f940;
        case 0x19f944u: goto label_19f944;
        case 0x19f948u: goto label_19f948;
        case 0x19f94cu: goto label_19f94c;
        case 0x19f950u: goto label_19f950;
        case 0x19f954u: goto label_19f954;
        case 0x19f958u: goto label_19f958;
        case 0x19f95cu: goto label_19f95c;
        case 0x19f960u: goto label_19f960;
        case 0x19f964u: goto label_19f964;
        case 0x19f968u: goto label_19f968;
        case 0x19f96cu: goto label_19f96c;
        case 0x19f970u: goto label_19f970;
        case 0x19f974u: goto label_19f974;
        case 0x19f978u: goto label_19f978;
        case 0x19f97cu: goto label_19f97c;
        case 0x19f980u: goto label_19f980;
        case 0x19f984u: goto label_19f984;
        case 0x19f988u: goto label_19f988;
        case 0x19f98cu: goto label_19f98c;
        case 0x19f990u: goto label_19f990;
        case 0x19f994u: goto label_19f994;
        case 0x19f998u: goto label_19f998;
        case 0x19f99cu: goto label_19f99c;
        case 0x19f9a0u: goto label_19f9a0;
        case 0x19f9a4u: goto label_19f9a4;
        case 0x19f9a8u: goto label_19f9a8;
        case 0x19f9acu: goto label_19f9ac;
        case 0x19f9b0u: goto label_19f9b0;
        case 0x19f9b4u: goto label_19f9b4;
        case 0x19f9b8u: goto label_19f9b8;
        case 0x19f9bcu: goto label_19f9bc;
        case 0x19f9c0u: goto label_19f9c0;
        case 0x19f9c4u: goto label_19f9c4;
        case 0x19f9c8u: goto label_19f9c8;
        case 0x19f9ccu: goto label_19f9cc;
        case 0x19f9d0u: goto label_19f9d0;
        case 0x19f9d4u: goto label_19f9d4;
        case 0x19f9d8u: goto label_19f9d8;
        case 0x19f9dcu: goto label_19f9dc;
        case 0x19f9e0u: goto label_19f9e0;
        case 0x19f9e4u: goto label_19f9e4;
        case 0x19f9e8u: goto label_19f9e8;
        case 0x19f9ecu: goto label_19f9ec;
        case 0x19f9f0u: goto label_19f9f0;
        case 0x19f9f4u: goto label_19f9f4;
        case 0x19f9f8u: goto label_19f9f8;
        case 0x19f9fcu: goto label_19f9fc;
        case 0x19fa00u: goto label_19fa00;
        case 0x19fa04u: goto label_19fa04;
        case 0x19fa08u: goto label_19fa08;
        case 0x19fa0cu: goto label_19fa0c;
        case 0x19fa10u: goto label_19fa10;
        case 0x19fa14u: goto label_19fa14;
        case 0x19fa18u: goto label_19fa18;
        case 0x19fa1cu: goto label_19fa1c;
        case 0x19fa20u: goto label_19fa20;
        case 0x19fa24u: goto label_19fa24;
        case 0x19fa28u: goto label_19fa28;
        case 0x19fa2cu: goto label_19fa2c;
        case 0x19fa30u: goto label_19fa30;
        case 0x19fa34u: goto label_19fa34;
        case 0x19fa38u: goto label_19fa38;
        case 0x19fa3cu: goto label_19fa3c;
        case 0x19fa40u: goto label_19fa40;
        case 0x19fa44u: goto label_19fa44;
        case 0x19fa48u: goto label_19fa48;
        case 0x19fa4cu: goto label_19fa4c;
        case 0x19fa50u: goto label_19fa50;
        case 0x19fa54u: goto label_19fa54;
        case 0x19fa58u: goto label_19fa58;
        case 0x19fa5cu: goto label_19fa5c;
        case 0x19fa60u: goto label_19fa60;
        case 0x19fa64u: goto label_19fa64;
        case 0x19fa68u: goto label_19fa68;
        case 0x19fa6cu: goto label_19fa6c;
        case 0x19fa70u: goto label_19fa70;
        case 0x19fa74u: goto label_19fa74;
        case 0x19fa78u: goto label_19fa78;
        case 0x19fa7cu: goto label_19fa7c;
        case 0x19fa80u: goto label_19fa80;
        case 0x19fa84u: goto label_19fa84;
        case 0x19fa88u: goto label_19fa88;
        case 0x19fa8cu: goto label_19fa8c;
        case 0x19fa90u: goto label_19fa90;
        case 0x19fa94u: goto label_19fa94;
        case 0x19fa98u: goto label_19fa98;
        case 0x19fa9cu: goto label_19fa9c;
        case 0x19faa0u: goto label_19faa0;
        case 0x19faa4u: goto label_19faa4;
        case 0x19faa8u: goto label_19faa8;
        case 0x19faacu: goto label_19faac;
        case 0x19fab0u: goto label_19fab0;
        case 0x19fab4u: goto label_19fab4;
        case 0x19fab8u: goto label_19fab8;
        case 0x19fabcu: goto label_19fabc;
        case 0x19fac0u: goto label_19fac0;
        case 0x19fac4u: goto label_19fac4;
        case 0x19fac8u: goto label_19fac8;
        case 0x19faccu: goto label_19facc;
        case 0x19fad0u: goto label_19fad0;
        case 0x19fad4u: goto label_19fad4;
        case 0x19fad8u: goto label_19fad8;
        case 0x19fadcu: goto label_19fadc;
        case 0x19fae0u: goto label_19fae0;
        case 0x19fae4u: goto label_19fae4;
        case 0x19fae8u: goto label_19fae8;
        case 0x19faecu: goto label_19faec;
        case 0x19faf0u: goto label_19faf0;
        case 0x19faf4u: goto label_19faf4;
        case 0x19faf8u: goto label_19faf8;
        case 0x19fafcu: goto label_19fafc;
        case 0x19fb00u: goto label_19fb00;
        case 0x19fb04u: goto label_19fb04;
        case 0x19fb08u: goto label_19fb08;
        case 0x19fb0cu: goto label_19fb0c;
        case 0x19fb10u: goto label_19fb10;
        case 0x19fb14u: goto label_19fb14;
        case 0x19fb18u: goto label_19fb18;
        case 0x19fb1cu: goto label_19fb1c;
        case 0x19fb20u: goto label_19fb20;
        case 0x19fb24u: goto label_19fb24;
        case 0x19fb28u: goto label_19fb28;
        case 0x19fb2cu: goto label_19fb2c;
        case 0x19fb30u: goto label_19fb30;
        case 0x19fb34u: goto label_19fb34;
        case 0x19fb38u: goto label_19fb38;
        case 0x19fb3cu: goto label_19fb3c;
        case 0x19fb40u: goto label_19fb40;
        case 0x19fb44u: goto label_19fb44;
        case 0x19fb48u: goto label_19fb48;
        case 0x19fb4cu: goto label_19fb4c;
        case 0x19fb50u: goto label_19fb50;
        case 0x19fb54u: goto label_19fb54;
        case 0x19fb58u: goto label_19fb58;
        case 0x19fb5cu: goto label_19fb5c;
        case 0x19fb60u: goto label_19fb60;
        case 0x19fb64u: goto label_19fb64;
        case 0x19fb68u: goto label_19fb68;
        case 0x19fb6cu: goto label_19fb6c;
        case 0x19fb70u: goto label_19fb70;
        case 0x19fb74u: goto label_19fb74;
        case 0x19fb78u: goto label_19fb78;
        case 0x19fb7cu: goto label_19fb7c;
        case 0x19fb80u: goto label_19fb80;
        case 0x19fb84u: goto label_19fb84;
        case 0x19fb88u: goto label_19fb88;
        case 0x19fb8cu: goto label_19fb8c;
        case 0x19fb90u: goto label_19fb90;
        case 0x19fb94u: goto label_19fb94;
        case 0x19fb98u: goto label_19fb98;
        case 0x19fb9cu: goto label_19fb9c;
        case 0x19fba0u: goto label_19fba0;
        case 0x19fba4u: goto label_19fba4;
        case 0x19fba8u: goto label_19fba8;
        case 0x19fbacu: goto label_19fbac;
        case 0x19fbb0u: goto label_19fbb0;
        case 0x19fbb4u: goto label_19fbb4;
        case 0x19fbb8u: goto label_19fbb8;
        case 0x19fbbcu: goto label_19fbbc;
        case 0x19fbc0u: goto label_19fbc0;
        case 0x19fbc4u: goto label_19fbc4;
        case 0x19fbc8u: goto label_19fbc8;
        case 0x19fbccu: goto label_19fbcc;
        case 0x19fbd0u: goto label_19fbd0;
        case 0x19fbd4u: goto label_19fbd4;
        case 0x19fbd8u: goto label_19fbd8;
        case 0x19fbdcu: goto label_19fbdc;
        case 0x19fbe0u: goto label_19fbe0;
        case 0x19fbe4u: goto label_19fbe4;
        case 0x19fbe8u: goto label_19fbe8;
        case 0x19fbecu: goto label_19fbec;
        case 0x19fbf0u: goto label_19fbf0;
        case 0x19fbf4u: goto label_19fbf4;
        case 0x19fbf8u: goto label_19fbf8;
        case 0x19fbfcu: goto label_19fbfc;
        case 0x19fc00u: goto label_19fc00;
        case 0x19fc04u: goto label_19fc04;
        case 0x19fc08u: goto label_19fc08;
        case 0x19fc0cu: goto label_19fc0c;
        case 0x19fc10u: goto label_19fc10;
        case 0x19fc14u: goto label_19fc14;
        case 0x19fc18u: goto label_19fc18;
        case 0x19fc1cu: goto label_19fc1c;
        case 0x19fc20u: goto label_19fc20;
        case 0x19fc24u: goto label_19fc24;
        case 0x19fc28u: goto label_19fc28;
        case 0x19fc2cu: goto label_19fc2c;
        case 0x19fc30u: goto label_19fc30;
        case 0x19fc34u: goto label_19fc34;
        case 0x19fc38u: goto label_19fc38;
        case 0x19fc3cu: goto label_19fc3c;
        case 0x19fc40u: goto label_19fc40;
        case 0x19fc44u: goto label_19fc44;
        case 0x19fc48u: goto label_19fc48;
        case 0x19fc4cu: goto label_19fc4c;
        case 0x19fc50u: goto label_19fc50;
        case 0x19fc54u: goto label_19fc54;
        case 0x19fc58u: goto label_19fc58;
        case 0x19fc5cu: goto label_19fc5c;
        case 0x19fc60u: goto label_19fc60;
        case 0x19fc64u: goto label_19fc64;
        case 0x19fc68u: goto label_19fc68;
        case 0x19fc6cu: goto label_19fc6c;
        case 0x19fc70u: goto label_19fc70;
        case 0x19fc74u: goto label_19fc74;
        case 0x19fc78u: goto label_19fc78;
        case 0x19fc7cu: goto label_19fc7c;
        case 0x19fc80u: goto label_19fc80;
        case 0x19fc84u: goto label_19fc84;
        case 0x19fc88u: goto label_19fc88;
        case 0x19fc8cu: goto label_19fc8c;
        case 0x19fc90u: goto label_19fc90;
        case 0x19fc94u: goto label_19fc94;
        case 0x19fc98u: goto label_19fc98;
        case 0x19fc9cu: goto label_19fc9c;
        case 0x19fca0u: goto label_19fca0;
        case 0x19fca4u: goto label_19fca4;
        case 0x19fca8u: goto label_19fca8;
        case 0x19fcacu: goto label_19fcac;
        case 0x19fcb0u: goto label_19fcb0;
        case 0x19fcb4u: goto label_19fcb4;
        case 0x19fcb8u: goto label_19fcb8;
        case 0x19fcbcu: goto label_19fcbc;
        case 0x19fcc0u: goto label_19fcc0;
        case 0x19fcc4u: goto label_19fcc4;
        case 0x19fcc8u: goto label_19fcc8;
        case 0x19fcccu: goto label_19fccc;
        case 0x19fcd0u: goto label_19fcd0;
        case 0x19fcd4u: goto label_19fcd4;
        case 0x19fcd8u: goto label_19fcd8;
        case 0x19fcdcu: goto label_19fcdc;
        case 0x19fce0u: goto label_19fce0;
        case 0x19fce4u: goto label_19fce4;
        case 0x19fce8u: goto label_19fce8;
        case 0x19fcecu: goto label_19fcec;
        case 0x19fcf0u: goto label_19fcf0;
        case 0x19fcf4u: goto label_19fcf4;
        case 0x19fcf8u: goto label_19fcf8;
        case 0x19fcfcu: goto label_19fcfc;
        case 0x19fd00u: goto label_19fd00;
        case 0x19fd04u: goto label_19fd04;
        case 0x19fd08u: goto label_19fd08;
        case 0x19fd0cu: goto label_19fd0c;
        case 0x19fd10u: goto label_19fd10;
        case 0x19fd14u: goto label_19fd14;
        case 0x19fd18u: goto label_19fd18;
        case 0x19fd1cu: goto label_19fd1c;
        case 0x19fd20u: goto label_19fd20;
        case 0x19fd24u: goto label_19fd24;
        case 0x19fd28u: goto label_19fd28;
        case 0x19fd2cu: goto label_19fd2c;
        case 0x19fd30u: goto label_19fd30;
        case 0x19fd34u: goto label_19fd34;
        case 0x19fd38u: goto label_19fd38;
        case 0x19fd3cu: goto label_19fd3c;
        case 0x19fd40u: goto label_19fd40;
        case 0x19fd44u: goto label_19fd44;
        case 0x19fd48u: goto label_19fd48;
        case 0x19fd4cu: goto label_19fd4c;
        case 0x19fd50u: goto label_19fd50;
        case 0x19fd54u: goto label_19fd54;
        case 0x19fd58u: goto label_19fd58;
        case 0x19fd5cu: goto label_19fd5c;
        case 0x19fd60u: goto label_19fd60;
        case 0x19fd64u: goto label_19fd64;
        case 0x19fd68u: goto label_19fd68;
        case 0x19fd6cu: goto label_19fd6c;
        case 0x19fd70u: goto label_19fd70;
        case 0x19fd74u: goto label_19fd74;
        case 0x19fd78u: goto label_19fd78;
        case 0x19fd7cu: goto label_19fd7c;
        case 0x19fd80u: goto label_19fd80;
        case 0x19fd84u: goto label_19fd84;
        case 0x19fd88u: goto label_19fd88;
        case 0x19fd8cu: goto label_19fd8c;
        case 0x19fd90u: goto label_19fd90;
        case 0x19fd94u: goto label_19fd94;
        case 0x19fd98u: goto label_19fd98;
        case 0x19fd9cu: goto label_19fd9c;
        case 0x19fda0u: goto label_19fda0;
        case 0x19fda4u: goto label_19fda4;
        case 0x19fda8u: goto label_19fda8;
        case 0x19fdacu: goto label_19fdac;
        case 0x19fdb0u: goto label_19fdb0;
        case 0x19fdb4u: goto label_19fdb4;
        case 0x19fdb8u: goto label_19fdb8;
        case 0x19fdbcu: goto label_19fdbc;
        case 0x19fdc0u: goto label_19fdc0;
        case 0x19fdc4u: goto label_19fdc4;
        case 0x19fdc8u: goto label_19fdc8;
        case 0x19fdccu: goto label_19fdcc;
        case 0x19fdd0u: goto label_19fdd0;
        case 0x19fdd4u: goto label_19fdd4;
        case 0x19fdd8u: goto label_19fdd8;
        case 0x19fddcu: goto label_19fddc;
        case 0x19fde0u: goto label_19fde0;
        case 0x19fde4u: goto label_19fde4;
        case 0x19fde8u: goto label_19fde8;
        case 0x19fdecu: goto label_19fdec;
        case 0x19fdf0u: goto label_19fdf0;
        case 0x19fdf4u: goto label_19fdf4;
        case 0x19fdf8u: goto label_19fdf8;
        case 0x19fdfcu: goto label_19fdfc;
        case 0x19fe00u: goto label_19fe00;
        case 0x19fe04u: goto label_19fe04;
        case 0x19fe08u: goto label_19fe08;
        case 0x19fe0cu: goto label_19fe0c;
        case 0x19fe10u: goto label_19fe10;
        case 0x19fe14u: goto label_19fe14;
        case 0x19fe18u: goto label_19fe18;
        case 0x19fe1cu: goto label_19fe1c;
        case 0x19fe20u: goto label_19fe20;
        case 0x19fe24u: goto label_19fe24;
        case 0x19fe28u: goto label_19fe28;
        case 0x19fe2cu: goto label_19fe2c;
        case 0x19fe30u: goto label_19fe30;
        case 0x19fe34u: goto label_19fe34;
        case 0x19fe38u: goto label_19fe38;
        case 0x19fe3cu: goto label_19fe3c;
        case 0x19fe40u: goto label_19fe40;
        case 0x19fe44u: goto label_19fe44;
        case 0x19fe48u: goto label_19fe48;
        case 0x19fe4cu: goto label_19fe4c;
        case 0x19fe50u: goto label_19fe50;
        case 0x19fe54u: goto label_19fe54;
        case 0x19fe58u: goto label_19fe58;
        case 0x19fe5cu: goto label_19fe5c;
        case 0x19fe60u: goto label_19fe60;
        case 0x19fe64u: goto label_19fe64;
        case 0x19fe68u: goto label_19fe68;
        case 0x19fe6cu: goto label_19fe6c;
        case 0x19fe70u: goto label_19fe70;
        case 0x19fe74u: goto label_19fe74;
        case 0x19fe78u: goto label_19fe78;
        case 0x19fe7cu: goto label_19fe7c;
        case 0x19fe80u: goto label_19fe80;
        case 0x19fe84u: goto label_19fe84;
        case 0x19fe88u: goto label_19fe88;
        case 0x19fe8cu: goto label_19fe8c;
        case 0x19fe90u: goto label_19fe90;
        case 0x19fe94u: goto label_19fe94;
        case 0x19fe98u: goto label_19fe98;
        case 0x19fe9cu: goto label_19fe9c;
        case 0x19fea0u: goto label_19fea0;
        case 0x19fea4u: goto label_19fea4;
        case 0x19fea8u: goto label_19fea8;
        case 0x19feacu: goto label_19feac;
        case 0x19feb0u: goto label_19feb0;
        case 0x19feb4u: goto label_19feb4;
        case 0x19feb8u: goto label_19feb8;
        case 0x19febcu: goto label_19febc;
        case 0x19fec0u: goto label_19fec0;
        case 0x19fec4u: goto label_19fec4;
        case 0x19fec8u: goto label_19fec8;
        case 0x19feccu: goto label_19fecc;
        case 0x19fed0u: goto label_19fed0;
        case 0x19fed4u: goto label_19fed4;
        case 0x19fed8u: goto label_19fed8;
        case 0x19fedcu: goto label_19fedc;
        case 0x19fee0u: goto label_19fee0;
        case 0x19fee4u: goto label_19fee4;
        case 0x19fee8u: goto label_19fee8;
        case 0x19feecu: goto label_19feec;
        case 0x19fef0u: goto label_19fef0;
        case 0x19fef4u: goto label_19fef4;
        case 0x19fef8u: goto label_19fef8;
        case 0x19fefcu: goto label_19fefc;
        case 0x19ff00u: goto label_19ff00;
        case 0x19ff04u: goto label_19ff04;
        case 0x19ff08u: goto label_19ff08;
        case 0x19ff0cu: goto label_19ff0c;
        case 0x19ff10u: goto label_19ff10;
        case 0x19ff14u: goto label_19ff14;
        case 0x19ff18u: goto label_19ff18;
        case 0x19ff1cu: goto label_19ff1c;
        case 0x19ff20u: goto label_19ff20;
        case 0x19ff24u: goto label_19ff24;
        case 0x19ff28u: goto label_19ff28;
        case 0x19ff2cu: goto label_19ff2c;
        case 0x19ff30u: goto label_19ff30;
        case 0x19ff34u: goto label_19ff34;
        case 0x19ff38u: goto label_19ff38;
        case 0x19ff3cu: goto label_19ff3c;
        case 0x19ff40u: goto label_19ff40;
        case 0x19ff44u: goto label_19ff44;
        case 0x19ff48u: goto label_19ff48;
        case 0x19ff4cu: goto label_19ff4c;
        case 0x19ff50u: goto label_19ff50;
        case 0x19ff54u: goto label_19ff54;
        case 0x19ff58u: goto label_19ff58;
        case 0x19ff5cu: goto label_19ff5c;
        case 0x19ff60u: goto label_19ff60;
        case 0x19ff64u: goto label_19ff64;
        case 0x19ff68u: goto label_19ff68;
        case 0x19ff6cu: goto label_19ff6c;
        case 0x19ff70u: goto label_19ff70;
        case 0x19ff74u: goto label_19ff74;
        case 0x19ff78u: goto label_19ff78;
        case 0x19ff7cu: goto label_19ff7c;
        case 0x19ff80u: goto label_19ff80;
        case 0x19ff84u: goto label_19ff84;
        case 0x19ff88u: goto label_19ff88;
        case 0x19ff8cu: goto label_19ff8c;
        case 0x19ff90u: goto label_19ff90;
        case 0x19ff94u: goto label_19ff94;
        case 0x19ff98u: goto label_19ff98;
        case 0x19ff9cu: goto label_19ff9c;
        case 0x19ffa0u: goto label_19ffa0;
        case 0x19ffa4u: goto label_19ffa4;
        case 0x19ffa8u: goto label_19ffa8;
        case 0x19ffacu: goto label_19ffac;
        case 0x19ffb0u: goto label_19ffb0;
        case 0x19ffb4u: goto label_19ffb4;
        case 0x19ffb8u: goto label_19ffb8;
        case 0x19ffbcu: goto label_19ffbc;
        case 0x19ffc0u: goto label_19ffc0;
        case 0x19ffc4u: goto label_19ffc4;
        case 0x19ffc8u: goto label_19ffc8;
        case 0x19ffccu: goto label_19ffcc;
        case 0x19ffd0u: goto label_19ffd0;
        case 0x19ffd4u: goto label_19ffd4;
        case 0x19ffd8u: goto label_19ffd8;
        case 0x19ffdcu: goto label_19ffdc;
        case 0x19ffe0u: goto label_19ffe0;
        case 0x19ffe4u: goto label_19ffe4;
        case 0x19ffe8u: goto label_19ffe8;
        case 0x19ffecu: goto label_19ffec;
        case 0x19fff0u: goto label_19fff0;
        case 0x19fff4u: goto label_19fff4;
        case 0x19fff8u: goto label_19fff8;
        case 0x19fffcu: goto label_19fffc;
        case 0x1a0000u: goto label_1a0000;
        case 0x1a0004u: goto label_1a0004;
        case 0x1a0008u: goto label_1a0008;
        case 0x1a000cu: goto label_1a000c;
        case 0x1a0010u: goto label_1a0010;
        case 0x1a0014u: goto label_1a0014;
        case 0x1a0018u: goto label_1a0018;
        case 0x1a001cu: goto label_1a001c;
        case 0x1a0020u: goto label_1a0020;
        case 0x1a0024u: goto label_1a0024;
        case 0x1a0028u: goto label_1a0028;
        case 0x1a002cu: goto label_1a002c;
        case 0x1a0030u: goto label_1a0030;
        case 0x1a0034u: goto label_1a0034;
        case 0x1a0038u: goto label_1a0038;
        case 0x1a003cu: goto label_1a003c;
        case 0x1a0040u: goto label_1a0040;
        case 0x1a0044u: goto label_1a0044;
        case 0x1a0048u: goto label_1a0048;
        case 0x1a004cu: goto label_1a004c;
        case 0x1a0050u: goto label_1a0050;
        case 0x1a0054u: goto label_1a0054;
        case 0x1a0058u: goto label_1a0058;
        case 0x1a005cu: goto label_1a005c;
        case 0x1a0060u: goto label_1a0060;
        case 0x1a0064u: goto label_1a0064;
        case 0x1a0068u: goto label_1a0068;
        case 0x1a006cu: goto label_1a006c;
        case 0x1a0070u: goto label_1a0070;
        case 0x1a0074u: goto label_1a0074;
        case 0x1a0078u: goto label_1a0078;
        case 0x1a007cu: goto label_1a007c;
        case 0x1a0080u: goto label_1a0080;
        case 0x1a0084u: goto label_1a0084;
        case 0x1a0088u: goto label_1a0088;
        case 0x1a008cu: goto label_1a008c;
        case 0x1a0090u: goto label_1a0090;
        case 0x1a0094u: goto label_1a0094;
        case 0x1a0098u: goto label_1a0098;
        case 0x1a009cu: goto label_1a009c;
        case 0x1a00a0u: goto label_1a00a0;
        case 0x1a00a4u: goto label_1a00a4;
        case 0x1a00a8u: goto label_1a00a8;
        case 0x1a00acu: goto label_1a00ac;
        case 0x1a00b0u: goto label_1a00b0;
        case 0x1a00b4u: goto label_1a00b4;
        case 0x1a00b8u: goto label_1a00b8;
        case 0x1a00bcu: goto label_1a00bc;
        case 0x1a00c0u: goto label_1a00c0;
        case 0x1a00c4u: goto label_1a00c4;
        case 0x1a00c8u: goto label_1a00c8;
        case 0x1a00ccu: goto label_1a00cc;
        case 0x1a00d0u: goto label_1a00d0;
        case 0x1a00d4u: goto label_1a00d4;
        case 0x1a00d8u: goto label_1a00d8;
        case 0x1a00dcu: goto label_1a00dc;
        case 0x1a00e0u: goto label_1a00e0;
        case 0x1a00e4u: goto label_1a00e4;
        case 0x1a00e8u: goto label_1a00e8;
        case 0x1a00ecu: goto label_1a00ec;
        case 0x1a00f0u: goto label_1a00f0;
        case 0x1a00f4u: goto label_1a00f4;
        case 0x1a00f8u: goto label_1a00f8;
        case 0x1a00fcu: goto label_1a00fc;
        case 0x1a0100u: goto label_1a0100;
        case 0x1a0104u: goto label_1a0104;
        case 0x1a0108u: goto label_1a0108;
        case 0x1a010cu: goto label_1a010c;
        case 0x1a0110u: goto label_1a0110;
        case 0x1a0114u: goto label_1a0114;
        case 0x1a0118u: goto label_1a0118;
        case 0x1a011cu: goto label_1a011c;
        case 0x1a0120u: goto label_1a0120;
        case 0x1a0124u: goto label_1a0124;
        case 0x1a0128u: goto label_1a0128;
        case 0x1a012cu: goto label_1a012c;
        case 0x1a0130u: goto label_1a0130;
        case 0x1a0134u: goto label_1a0134;
        case 0x1a0138u: goto label_1a0138;
        case 0x1a013cu: goto label_1a013c;
        case 0x1a0140u: goto label_1a0140;
        case 0x1a0144u: goto label_1a0144;
        case 0x1a0148u: goto label_1a0148;
        case 0x1a014cu: goto label_1a014c;
        case 0x1a0150u: goto label_1a0150;
        case 0x1a0154u: goto label_1a0154;
        case 0x1a0158u: goto label_1a0158;
        case 0x1a015cu: goto label_1a015c;
        case 0x1a0160u: goto label_1a0160;
        case 0x1a0164u: goto label_1a0164;
        case 0x1a0168u: goto label_1a0168;
        case 0x1a016cu: goto label_1a016c;
        case 0x1a0170u: goto label_1a0170;
        case 0x1a0174u: goto label_1a0174;
        case 0x1a0178u: goto label_1a0178;
        case 0x1a017cu: goto label_1a017c;
        case 0x1a0180u: goto label_1a0180;
        case 0x1a0184u: goto label_1a0184;
        case 0x1a0188u: goto label_1a0188;
        case 0x1a018cu: goto label_1a018c;
        case 0x1a0190u: goto label_1a0190;
        case 0x1a0194u: goto label_1a0194;
        case 0x1a0198u: goto label_1a0198;
        case 0x1a019cu: goto label_1a019c;
        case 0x1a01a0u: goto label_1a01a0;
        case 0x1a01a4u: goto label_1a01a4;
        case 0x1a01a8u: goto label_1a01a8;
        case 0x1a01acu: goto label_1a01ac;
        case 0x1a01b0u: goto label_1a01b0;
        case 0x1a01b4u: goto label_1a01b4;
        case 0x1a01b8u: goto label_1a01b8;
        case 0x1a01bcu: goto label_1a01bc;
        case 0x1a01c0u: goto label_1a01c0;
        case 0x1a01c4u: goto label_1a01c4;
        case 0x1a01c8u: goto label_1a01c8;
        case 0x1a01ccu: goto label_1a01cc;
        case 0x1a01d0u: goto label_1a01d0;
        case 0x1a01d4u: goto label_1a01d4;
        case 0x1a01d8u: goto label_1a01d8;
        case 0x1a01dcu: goto label_1a01dc;
        case 0x1a01e0u: goto label_1a01e0;
        case 0x1a01e4u: goto label_1a01e4;
        case 0x1a01e8u: goto label_1a01e8;
        case 0x1a01ecu: goto label_1a01ec;
        case 0x1a01f0u: goto label_1a01f0;
        case 0x1a01f4u: goto label_1a01f4;
        case 0x1a01f8u: goto label_1a01f8;
        case 0x1a01fcu: goto label_1a01fc;
        case 0x1a0200u: goto label_1a0200;
        case 0x1a0204u: goto label_1a0204;
        case 0x1a0208u: goto label_1a0208;
        case 0x1a020cu: goto label_1a020c;
        case 0x1a0210u: goto label_1a0210;
        case 0x1a0214u: goto label_1a0214;
        case 0x1a0218u: goto label_1a0218;
        case 0x1a021cu: goto label_1a021c;
        case 0x1a0220u: goto label_1a0220;
        case 0x1a0224u: goto label_1a0224;
        case 0x1a0228u: goto label_1a0228;
        case 0x1a022cu: goto label_1a022c;
        case 0x1a0230u: goto label_1a0230;
        case 0x1a0234u: goto label_1a0234;
        case 0x1a0238u: goto label_1a0238;
        case 0x1a023cu: goto label_1a023c;
        case 0x1a0240u: goto label_1a0240;
        case 0x1a0244u: goto label_1a0244;
        case 0x1a0248u: goto label_1a0248;
        case 0x1a024cu: goto label_1a024c;
        case 0x1a0250u: goto label_1a0250;
        case 0x1a0254u: goto label_1a0254;
        case 0x1a0258u: goto label_1a0258;
        case 0x1a025cu: goto label_1a025c;
        case 0x1a0260u: goto label_1a0260;
        case 0x1a0264u: goto label_1a0264;
        case 0x1a0268u: goto label_1a0268;
        case 0x1a026cu: goto label_1a026c;
        case 0x1a0270u: goto label_1a0270;
        case 0x1a0274u: goto label_1a0274;
        case 0x1a0278u: goto label_1a0278;
        case 0x1a027cu: goto label_1a027c;
        case 0x1a0280u: goto label_1a0280;
        case 0x1a0284u: goto label_1a0284;
        case 0x1a0288u: goto label_1a0288;
        case 0x1a028cu: goto label_1a028c;
        case 0x1a0290u: goto label_1a0290;
        case 0x1a0294u: goto label_1a0294;
        case 0x1a0298u: goto label_1a0298;
        case 0x1a029cu: goto label_1a029c;
        case 0x1a02a0u: goto label_1a02a0;
        case 0x1a02a4u: goto label_1a02a4;
        case 0x1a02a8u: goto label_1a02a8;
        case 0x1a02acu: goto label_1a02ac;
        case 0x1a02b0u: goto label_1a02b0;
        case 0x1a02b4u: goto label_1a02b4;
        case 0x1a02b8u: goto label_1a02b8;
        case 0x1a02bcu: goto label_1a02bc;
        case 0x1a02c0u: goto label_1a02c0;
        case 0x1a02c4u: goto label_1a02c4;
        case 0x1a02c8u: goto label_1a02c8;
        case 0x1a02ccu: goto label_1a02cc;
        case 0x1a02d0u: goto label_1a02d0;
        case 0x1a02d4u: goto label_1a02d4;
        case 0x1a02d8u: goto label_1a02d8;
        case 0x1a02dcu: goto label_1a02dc;
        case 0x1a02e0u: goto label_1a02e0;
        case 0x1a02e4u: goto label_1a02e4;
        case 0x1a02e8u: goto label_1a02e8;
        case 0x1a02ecu: goto label_1a02ec;
        case 0x1a02f0u: goto label_1a02f0;
        case 0x1a02f4u: goto label_1a02f4;
        case 0x1a02f8u: goto label_1a02f8;
        case 0x1a02fcu: goto label_1a02fc;
        case 0x1a0300u: goto label_1a0300;
        case 0x1a0304u: goto label_1a0304;
        case 0x1a0308u: goto label_1a0308;
        case 0x1a030cu: goto label_1a030c;
        case 0x1a0310u: goto label_1a0310;
        case 0x1a0314u: goto label_1a0314;
        case 0x1a0318u: goto label_1a0318;
        case 0x1a031cu: goto label_1a031c;
        case 0x1a0320u: goto label_1a0320;
        case 0x1a0324u: goto label_1a0324;
        case 0x1a0328u: goto label_1a0328;
        case 0x1a032cu: goto label_1a032c;
        case 0x1a0330u: goto label_1a0330;
        case 0x1a0334u: goto label_1a0334;
        case 0x1a0338u: goto label_1a0338;
        case 0x1a033cu: goto label_1a033c;
        case 0x1a0340u: goto label_1a0340;
        case 0x1a0344u: goto label_1a0344;
        case 0x1a0348u: goto label_1a0348;
        case 0x1a034cu: goto label_1a034c;
        case 0x1a0350u: goto label_1a0350;
        case 0x1a0354u: goto label_1a0354;
        case 0x1a0358u: goto label_1a0358;
        case 0x1a035cu: goto label_1a035c;
        case 0x1a0360u: goto label_1a0360;
        case 0x1a0364u: goto label_1a0364;
        case 0x1a0368u: goto label_1a0368;
        case 0x1a036cu: goto label_1a036c;
        case 0x1a0370u: goto label_1a0370;
        case 0x1a0374u: goto label_1a0374;
        case 0x1a0378u: goto label_1a0378;
        case 0x1a037cu: goto label_1a037c;
        case 0x1a0380u: goto label_1a0380;
        case 0x1a0384u: goto label_1a0384;
        case 0x1a0388u: goto label_1a0388;
        case 0x1a038cu: goto label_1a038c;
        case 0x1a0390u: goto label_1a0390;
        case 0x1a0394u: goto label_1a0394;
        case 0x1a0398u: goto label_1a0398;
        case 0x1a039cu: goto label_1a039c;
        case 0x1a03a0u: goto label_1a03a0;
        case 0x1a03a4u: goto label_1a03a4;
        case 0x1a03a8u: goto label_1a03a8;
        case 0x1a03acu: goto label_1a03ac;
        case 0x1a03b0u: goto label_1a03b0;
        case 0x1a03b4u: goto label_1a03b4;
        case 0x1a03b8u: goto label_1a03b8;
        case 0x1a03bcu: goto label_1a03bc;
        case 0x1a03c0u: goto label_1a03c0;
        case 0x1a03c4u: goto label_1a03c4;
        case 0x1a03c8u: goto label_1a03c8;
        case 0x1a03ccu: goto label_1a03cc;
        case 0x1a03d0u: goto label_1a03d0;
        case 0x1a03d4u: goto label_1a03d4;
        case 0x1a03d8u: goto label_1a03d8;
        case 0x1a03dcu: goto label_1a03dc;
        case 0x1a03e0u: goto label_1a03e0;
        case 0x1a03e4u: goto label_1a03e4;
        case 0x1a03e8u: goto label_1a03e8;
        case 0x1a03ecu: goto label_1a03ec;
        case 0x1a03f0u: goto label_1a03f0;
        case 0x1a03f4u: goto label_1a03f4;
        case 0x1a03f8u: goto label_1a03f8;
        case 0x1a03fcu: goto label_1a03fc;
        case 0x1a0400u: goto label_1a0400;
        case 0x1a0404u: goto label_1a0404;
        case 0x1a0408u: goto label_1a0408;
        case 0x1a040cu: goto label_1a040c;
        case 0x1a0410u: goto label_1a0410;
        case 0x1a0414u: goto label_1a0414;
        case 0x1a0418u: goto label_1a0418;
        case 0x1a041cu: goto label_1a041c;
        case 0x1a0420u: goto label_1a0420;
        case 0x1a0424u: goto label_1a0424;
        case 0x1a0428u: goto label_1a0428;
        case 0x1a042cu: goto label_1a042c;
        case 0x1a0430u: goto label_1a0430;
        case 0x1a0434u: goto label_1a0434;
        case 0x1a0438u: goto label_1a0438;
        case 0x1a043cu: goto label_1a043c;
        case 0x1a0440u: goto label_1a0440;
        case 0x1a0444u: goto label_1a0444;
        case 0x1a0448u: goto label_1a0448;
        case 0x1a044cu: goto label_1a044c;
        case 0x1a0450u: goto label_1a0450;
        case 0x1a0454u: goto label_1a0454;
        case 0x1a0458u: goto label_1a0458;
        case 0x1a045cu: goto label_1a045c;
        case 0x1a0460u: goto label_1a0460;
        case 0x1a0464u: goto label_1a0464;
        case 0x1a0468u: goto label_1a0468;
        case 0x1a046cu: goto label_1a046c;
        case 0x1a0470u: goto label_1a0470;
        case 0x1a0474u: goto label_1a0474;
        case 0x1a0478u: goto label_1a0478;
        case 0x1a047cu: goto label_1a047c;
        case 0x1a0480u: goto label_1a0480;
        case 0x1a0484u: goto label_1a0484;
        case 0x1a0488u: goto label_1a0488;
        case 0x1a048cu: goto label_1a048c;
        case 0x1a0490u: goto label_1a0490;
        case 0x1a0494u: goto label_1a0494;
        case 0x1a0498u: goto label_1a0498;
        case 0x1a049cu: goto label_1a049c;
        case 0x1a04a0u: goto label_1a04a0;
        case 0x1a04a4u: goto label_1a04a4;
        case 0x1a04a8u: goto label_1a04a8;
        case 0x1a04acu: goto label_1a04ac;
        case 0x1a04b0u: goto label_1a04b0;
        case 0x1a04b4u: goto label_1a04b4;
        case 0x1a04b8u: goto label_1a04b8;
        case 0x1a04bcu: goto label_1a04bc;
        case 0x1a04c0u: goto label_1a04c0;
        case 0x1a04c4u: goto label_1a04c4;
        case 0x1a04c8u: goto label_1a04c8;
        case 0x1a04ccu: goto label_1a04cc;
        case 0x1a04d0u: goto label_1a04d0;
        case 0x1a04d4u: goto label_1a04d4;
        case 0x1a04d8u: goto label_1a04d8;
        case 0x1a04dcu: goto label_1a04dc;
        case 0x1a04e0u: goto label_1a04e0;
        case 0x1a04e4u: goto label_1a04e4;
        case 0x1a04e8u: goto label_1a04e8;
        case 0x1a04ecu: goto label_1a04ec;
        case 0x1a04f0u: goto label_1a04f0;
        case 0x1a04f4u: goto label_1a04f4;
        case 0x1a04f8u: goto label_1a04f8;
        case 0x1a04fcu: goto label_1a04fc;
        case 0x1a0500u: goto label_1a0500;
        case 0x1a0504u: goto label_1a0504;
        case 0x1a0508u: goto label_1a0508;
        case 0x1a050cu: goto label_1a050c;
        case 0x1a0510u: goto label_1a0510;
        case 0x1a0514u: goto label_1a0514;
        case 0x1a0518u: goto label_1a0518;
        case 0x1a051cu: goto label_1a051c;
        case 0x1a0520u: goto label_1a0520;
        case 0x1a0524u: goto label_1a0524;
        case 0x1a0528u: goto label_1a0528;
        case 0x1a052cu: goto label_1a052c;
        case 0x1a0530u: goto label_1a0530;
        case 0x1a0534u: goto label_1a0534;
        case 0x1a0538u: goto label_1a0538;
        case 0x1a053cu: goto label_1a053c;
        case 0x1a0540u: goto label_1a0540;
        case 0x1a0544u: goto label_1a0544;
        case 0x1a0548u: goto label_1a0548;
        case 0x1a054cu: goto label_1a054c;
        case 0x1a0550u: goto label_1a0550;
        case 0x1a0554u: goto label_1a0554;
        case 0x1a0558u: goto label_1a0558;
        case 0x1a055cu: goto label_1a055c;
        default: break;
    }

    ctx->pc = 0x19e7e0u;

label_19e7e0:
    // 0x19e7e0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x19e7e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_19e7e4:
    // 0x19e7e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x19e7e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_19e7e8:
    // 0x19e7e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19e7e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_19e7ec:
    // 0x19e7ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19e7ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_19e7f0:
    // 0x19e7f0: 0xafa400c0  sw          $a0, 0xC0($sp)
    ctx->pc = 0x19e7f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 4));
label_19e7f4:
    // 0x19e7f4: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x19e7f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_19e7f8:
    // 0x19e7f8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x19e7f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_19e7fc:
    // 0x19e7fc: 0xc064924  jal         func_192490
label_19e800:
    if (ctx->pc == 0x19E800u) {
        ctx->pc = 0x19E804u;
        goto label_19e804;
    }
    ctx->pc = 0x19E7FCu;
    SET_GPR_U32(ctx, 31, 0x19E804u);
    ctx->pc = 0x192490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192490u, 0x19E7FCu, 0x19E804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E804u;
label_19e804:
    // 0x19e804: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x19e804u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_19e808:
    // 0x19e808: 0x24634570  addiu       $v1, $v1, 0x4570
    ctx->pc = 0x19e808u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17776));
label_19e80c:
    // 0x19e80c: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x19e80cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_19e810:
    // 0x19e810: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x19e810u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_19e814:
    // 0x19e814: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x19e814u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19e818:
    // 0x19e818: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x19e818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_19e81c:
    // 0x19e81c: 0xe44000a4  swc1        $f0, 0xA4($v0)
    ctx->pc = 0x19e81cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 164), bits); }
label_19e820:
    // 0x19e820: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x19e820u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19e824:
    // 0x19e824: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x19e824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_19e828:
    // 0x19e828: 0xe44000a8  swc1        $f0, 0xA8($v0)
    ctx->pc = 0x19e828u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 168), bits); }
label_19e82c:
    // 0x19e82c: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x19e82cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_19e830:
    // 0x19e830: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19e830u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19e834:
    // 0x19e834: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x19e834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_19e838:
    // 0x19e838: 0xe44000ac  swc1        $f0, 0xAC($v0)
    ctx->pc = 0x19e838u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 172), bits); }
label_19e83c:
    // 0x19e83c: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x19e83cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_19e840:
    // 0x19e840: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19e840u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19e844:
    // 0x19e844: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x19e844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_19e848:
    // 0x19e848: 0xe44000b0  swc1        $f0, 0xB0($v0)
    ctx->pc = 0x19e848u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 176), bits); }
label_19e84c:
    // 0x19e84c: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x19e84cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_19e850:
    // 0x19e850: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19e850u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19e854:
    // 0x19e854: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x19e854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_19e858:
    // 0x19e858: 0xe44000b4  swc1        $f0, 0xB4($v0)
    ctx->pc = 0x19e858u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 180), bits); }
label_19e85c:
    // 0x19e85c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x19e85cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_19e860:
    // 0x19e860: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19e860u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19e864:
    // 0x19e864: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x19e864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_19e868:
    // 0x19e868: 0xe44000b8  swc1        $f0, 0xB8($v0)
    ctx->pc = 0x19e868u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 184), bits); }
label_19e86c:
    // 0x19e86c: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x19e86cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_19e870:
    // 0x19e870: 0xa04000c4  sb          $zero, 0xC4($v0)
    ctx->pc = 0x19e870u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 196), (uint8_t)GPR_U32(ctx, 0));
label_19e874:
    // 0x19e874: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x19e874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_19e878:
    // 0x19e878: 0x244400d8  addiu       $a0, $v0, 0xD8
    ctx->pc = 0x19e878u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 216));
label_19e87c:
    // 0x19e87c: 0xc0480a4  jal         func_120290
label_19e880:
    if (ctx->pc == 0x19E880u) {
        ctx->pc = 0x19E884u;
        goto label_19e884;
    }
    ctx->pc = 0x19E87Cu;
    SET_GPR_U32(ctx, 31, 0x19E884u);
    ctx->pc = 0x120290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120290u, 0x19E87Cu, 0x19E884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E884u;
label_19e884:
    // 0x19e884: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x19e884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_19e888:
    // 0x19e888: 0xac4000e8  sw          $zero, 0xE8($v0)
    ctx->pc = 0x19e888u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 232), GPR_U32(ctx, 0));
label_19e88c:
    // 0x19e88c: 0x8f84bbdc  lw          $a0, -0x4424($gp)
    ctx->pc = 0x19e88cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949852)));
label_19e890:
    // 0x19e890: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x19e890u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_19e894:
    // 0x19e894: 0x24a56158  addiu       $a1, $a1, 0x6158
    ctx->pc = 0x19e894u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24920));
label_19e898:
    // 0x19e898: 0xc08e57c  jal         func_2395F0
label_19e89c:
    if (ctx->pc == 0x19E89Cu) {
        ctx->pc = 0x19E8A0u;
        goto label_19e8a0;
    }
    ctx->pc = 0x19E898u;
    SET_GPR_U32(ctx, 31, 0x19E8A0u);
    ctx->pc = 0x2395F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2395F0u, 0x19E898u, 0x19E8A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E8A0u;
label_19e8a0:
    // 0x19e8a0: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x19e8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_19e8a4:
    // 0x19e8a4: 0x24640064  addiu       $a0, $v1, 0x64
    ctx->pc = 0x19e8a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 100));
label_19e8a8:
    // 0x19e8a8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x19e8a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19e8ac:
    // 0x19e8ac: 0xc0477e8  jal         func_11DFA0
label_19e8b0:
    if (ctx->pc == 0x19E8B0u) {
        ctx->pc = 0x19E8B4u;
        goto label_19e8b4;
    }
    ctx->pc = 0x19E8ACu;
    SET_GPR_U32(ctx, 31, 0x19E8B4u);
    ctx->pc = 0x11DFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DFA0u, 0x19E8ACu, 0x19E8B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E8B4u;
label_19e8b4:
    // 0x19e8b4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x19e8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_19e8b8:
    // 0x19e8b8: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x19e8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_19e8bc:
    // 0x19e8bc: 0xac430078  sw          $v1, 0x78($v0)
    ctx->pc = 0x19e8bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 120), GPR_U32(ctx, 3));
label_19e8c0:
    // 0x19e8c0: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x19e8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_19e8c4:
    // 0x19e8c4: 0xac4000d4  sw          $zero, 0xD4($v0)
    ctx->pc = 0x19e8c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 212), GPR_U32(ctx, 0));
label_19e8c8:
    // 0x19e8c8: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x19e8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_19e8cc:
    // 0x19e8cc: 0xac4000f8  sw          $zero, 0xF8($v0)
    ctx->pc = 0x19e8ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 248), GPR_U32(ctx, 0));
label_19e8d0:
    // 0x19e8d0: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x19e8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_19e8d4:
    // 0x19e8d4: 0x24510054  addiu       $s1, $v0, 0x54
    ctx->pc = 0x19e8d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 84));
label_19e8d8:
    // 0x19e8d8: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x19e8d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_19e8dc:
    // 0x19e8dc: 0x27859300  addiu       $a1, $gp, -0x6D00
    ctx->pc = 0x19e8dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939392));
label_19e8e0:
    // 0x19e8e0: 0xc040304  jal         func_100C10
label_19e8e4:
    if (ctx->pc == 0x19E8E4u) {
        ctx->pc = 0x19E8E8u;
        goto label_19e8e8;
    }
    ctx->pc = 0x19E8E0u;
    SET_GPR_U32(ctx, 31, 0x19E8E8u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x19E8E0u, 0x19E8E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E8E8u;
label_19e8e8:
    // 0x19e8e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19e8e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19e8ec:
    // 0x19e8ec: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x19e8ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_19e8f0:
    // 0x19e8f0: 0xc05c618  jal         func_171860
label_19e8f4:
    if (ctx->pc == 0x19E8F4u) {
        ctx->pc = 0x19E8F8u;
        goto label_19e8f8;
    }
    ctx->pc = 0x19E8F0u;
    SET_GPR_U32(ctx, 31, 0x19E8F8u);
    ctx->pc = 0x171860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171860u, 0x19E8F0u, 0x19E8F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E8F8u;
label_19e8f8:
    // 0x19e8f8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x19e8f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19e8fc:
    // 0x19e8fc: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x19e8fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_19e900:
    // 0x19e900: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x19e900u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_19e904:
    // 0x19e904: 0xc0402d4  jal         func_100B50
label_19e908:
    if (ctx->pc == 0x19E908u) {
        ctx->pc = 0x19E90Cu;
        goto label_19e90c;
    }
    ctx->pc = 0x19E904u;
    SET_GPR_U32(ctx, 31, 0x19E90Cu);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x19E904u, 0x19E90Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E90Cu;
label_19e90c:
    // 0x19e90c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x19e90cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_19e910:
    // 0x19e910: 0x1202000f  beq         $s0, $v0, . + 4 + (0xF << 2)
label_19e914:
    if (ctx->pc == 0x19E914u) {
        ctx->pc = 0x19E918u;
        goto label_19e918;
    }
    ctx->pc = 0x19E910u;
    {
        const bool branch_taken_0x19e910 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x19e910) {
            ctx->pc = 0x19E950u;
            goto label_19e950;
        }
    }
    ctx->pc = 0x19E918u;
label_19e918:
    // 0x19e918: 0x26100005  addiu       $s0, $s0, 0x5
    ctx->pc = 0x19e918u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 5));
label_19e91c:
    // 0x19e91c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19e91cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19e920:
    // 0x19e920: 0xc041b38  jal         func_106CE0
label_19e924:
    if (ctx->pc == 0x19E924u) {
        ctx->pc = 0x19E928u;
        goto label_19e928;
    }
    ctx->pc = 0x19E920u;
    SET_GPR_U32(ctx, 31, 0x19E928u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x19E920u, 0x19E928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E928u;
label_19e928:
    // 0x19e928: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x19e928u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_19e92c:
    // 0x19e92c: 0xc0ba898  jal         func_2EA260
label_19e930:
    if (ctx->pc == 0x19E930u) {
        ctx->pc = 0x19E934u;
        goto label_19e934;
    }
    ctx->pc = 0x19E92Cu;
    SET_GPR_U32(ctx, 31, 0x19E934u);
    ctx->pc = 0x2EA260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA260u, 0x19E92Cu, 0x19E934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E934u;
label_19e934:
    // 0x19e934: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19e934u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19e938:
    // 0x19e938: 0xc0bef4c  jal         func_2FBD30
label_19e93c:
    if (ctx->pc == 0x19E93Cu) {
        ctx->pc = 0x19E940u;
        goto label_19e940;
    }
    ctx->pc = 0x19E938u;
    SET_GPR_U32(ctx, 31, 0x19E940u);
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x19E938u, 0x19E940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E940u;
label_19e940:
    // 0x19e940: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x19e940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_19e944:
    // 0x19e944: 0xe44000c0  swc1        $f0, 0xC0($v0)
    ctx->pc = 0x19e944u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 192), bits); }
label_19e948:
    // 0x19e948: 0x10000004  b           . + 4 + (0x4 << 2)
label_19e94c:
    if (ctx->pc == 0x19E94Cu) {
        ctx->pc = 0x19E950u;
        goto label_19e950;
    }
    ctx->pc = 0x19E948u;
    {
        const bool branch_taken_0x19e948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e948) {
            ctx->pc = 0x19E95Cu;
            goto label_19e95c;
        }
    }
    ctx->pc = 0x19E950u;
label_19e950:
    // 0x19e950: 0xc7808288  lwc1        $f0, -0x7D78($gp)
    ctx->pc = 0x19e950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19e954:
    // 0x19e954: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x19e954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_19e958:
    // 0x19e958: 0xe44000c0  swc1        $f0, 0xC0($v0)
    ctx->pc = 0x19e958u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 192), bits); }
label_19e95c:
    // 0x19e95c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x19e95cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_19e960:
    // 0x19e960: 0x27859308  addiu       $a1, $gp, -0x6CF8
    ctx->pc = 0x19e960u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939400));
label_19e964:
    // 0x19e964: 0xc040304  jal         func_100C10
label_19e968:
    if (ctx->pc == 0x19E968u) {
        ctx->pc = 0x19E96Cu;
        goto label_19e96c;
    }
    ctx->pc = 0x19E964u;
    SET_GPR_U32(ctx, 31, 0x19E96Cu);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x19E964u, 0x19E96Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E96Cu;
label_19e96c:
    // 0x19e96c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19e96cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19e970:
    // 0x19e970: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x19e970u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_19e974:
    // 0x19e974: 0xc05c618  jal         func_171860
label_19e978:
    if (ctx->pc == 0x19E978u) {
        ctx->pc = 0x19E97Cu;
        goto label_19e97c;
    }
    ctx->pc = 0x19E974u;
    SET_GPR_U32(ctx, 31, 0x19E97Cu);
    ctx->pc = 0x171860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171860u, 0x19E974u, 0x19E97Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E97Cu;
label_19e97c:
    // 0x19e97c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x19e97cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19e980:
    // 0x19e980: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x19e980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_19e984:
    // 0x19e984: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x19e984u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_19e988:
    // 0x19e988: 0xc0402d4  jal         func_100B50
label_19e98c:
    if (ctx->pc == 0x19E98Cu) {
        ctx->pc = 0x19E990u;
        goto label_19e990;
    }
    ctx->pc = 0x19E988u;
    SET_GPR_U32(ctx, 31, 0x19E990u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x19E988u, 0x19E990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E990u;
label_19e990:
    // 0x19e990: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x19e990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_19e994:
    // 0x19e994: 0x1202000f  beq         $s0, $v0, . + 4 + (0xF << 2)
label_19e998:
    if (ctx->pc == 0x19E998u) {
        ctx->pc = 0x19E99Cu;
        goto label_19e99c;
    }
    ctx->pc = 0x19E994u;
    {
        const bool branch_taken_0x19e994 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x19e994) {
            ctx->pc = 0x19E9D4u;
            goto label_19e9d4;
        }
    }
    ctx->pc = 0x19E99Cu;
label_19e99c:
    // 0x19e99c: 0x26100005  addiu       $s0, $s0, 0x5
    ctx->pc = 0x19e99cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 5));
label_19e9a0:
    // 0x19e9a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19e9a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19e9a4:
    // 0x19e9a4: 0xc041b38  jal         func_106CE0
label_19e9a8:
    if (ctx->pc == 0x19E9A8u) {
        ctx->pc = 0x19E9ACu;
        goto label_19e9ac;
    }
    ctx->pc = 0x19E9A4u;
    SET_GPR_U32(ctx, 31, 0x19E9ACu);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x19E9A4u, 0x19E9ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E9ACu;
label_19e9ac:
    // 0x19e9ac: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x19e9acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_19e9b0:
    // 0x19e9b0: 0xc0ba898  jal         func_2EA260
label_19e9b4:
    if (ctx->pc == 0x19E9B4u) {
        ctx->pc = 0x19E9B8u;
        goto label_19e9b8;
    }
    ctx->pc = 0x19E9B0u;
    SET_GPR_U32(ctx, 31, 0x19E9B8u);
    ctx->pc = 0x2EA260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA260u, 0x19E9B0u, 0x19E9B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E9B8u;
label_19e9b8:
    // 0x19e9b8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19e9b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19e9bc:
    // 0x19e9bc: 0xc0bef4c  jal         func_2FBD30
label_19e9c0:
    if (ctx->pc == 0x19E9C0u) {
        ctx->pc = 0x19E9C4u;
        goto label_19e9c4;
    }
    ctx->pc = 0x19E9BCu;
    SET_GPR_U32(ctx, 31, 0x19E9C4u);
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x19E9BCu, 0x19E9C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E9C4u;
label_19e9c4:
    // 0x19e9c4: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x19e9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_19e9c8:
    // 0x19e9c8: 0xe44000bc  swc1        $f0, 0xBC($v0)
    ctx->pc = 0x19e9c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 188), bits); }
label_19e9cc:
    // 0x19e9cc: 0x10000004  b           . + 4 + (0x4 << 2)
label_19e9d0:
    if (ctx->pc == 0x19E9D0u) {
        ctx->pc = 0x19E9D4u;
        goto label_19e9d4;
    }
    ctx->pc = 0x19E9CCu;
    {
        const bool branch_taken_0x19e9cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e9cc) {
            ctx->pc = 0x19E9E0u;
            goto label_19e9e0;
        }
    }
    ctx->pc = 0x19E9D4u;
label_19e9d4:
    // 0x19e9d4: 0xc78082e4  lwc1        $f0, -0x7D1C($gp)
    ctx->pc = 0x19e9d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19e9d8:
    // 0x19e9d8: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x19e9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_19e9dc:
    // 0x19e9dc: 0xe44000bc  swc1        $f0, 0xBC($v0)
    ctx->pc = 0x19e9dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 188), bits); }
label_19e9e0:
    // 0x19e9e0: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x19e9e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_19e9e4:
    // 0x19e9e4: 0x27859310  addiu       $a1, $gp, -0x6CF0
    ctx->pc = 0x19e9e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939408));
label_19e9e8:
    // 0x19e9e8: 0xc040304  jal         func_100C10
label_19e9ec:
    if (ctx->pc == 0x19E9ECu) {
        ctx->pc = 0x19E9F0u;
        goto label_19e9f0;
    }
    ctx->pc = 0x19E9E8u;
    SET_GPR_U32(ctx, 31, 0x19E9F0u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x19E9E8u, 0x19E9F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E9F0u;
label_19e9f0:
    // 0x19e9f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19e9f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19e9f4:
    // 0x19e9f4: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x19e9f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_19e9f8:
    // 0x19e9f8: 0xc05c618  jal         func_171860
label_19e9fc:
    if (ctx->pc == 0x19E9FCu) {
        ctx->pc = 0x19EA00u;
        goto label_19ea00;
    }
    ctx->pc = 0x19E9F8u;
    SET_GPR_U32(ctx, 31, 0x19EA00u);
    ctx->pc = 0x171860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171860u, 0x19E9F8u, 0x19EA00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EA00u;
label_19ea00:
    // 0x19ea00: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x19ea00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19ea04:
    // 0x19ea04: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x19ea04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_19ea08:
    // 0x19ea08: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x19ea08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_19ea0c:
    // 0x19ea0c: 0xc0402d4  jal         func_100B50
label_19ea10:
    if (ctx->pc == 0x19EA10u) {
        ctx->pc = 0x19EA14u;
        goto label_19ea14;
    }
    ctx->pc = 0x19EA0Cu;
    SET_GPR_U32(ctx, 31, 0x19EA14u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x19EA0Cu, 0x19EA14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EA14u;
label_19ea14:
    // 0x19ea14: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x19ea14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_19ea18:
    // 0x19ea18: 0x1202000f  beq         $s0, $v0, . + 4 + (0xF << 2)
label_19ea1c:
    if (ctx->pc == 0x19EA1Cu) {
        ctx->pc = 0x19EA20u;
        goto label_19ea20;
    }
    ctx->pc = 0x19EA18u;
    {
        const bool branch_taken_0x19ea18 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x19ea18) {
            ctx->pc = 0x19EA58u;
            goto label_19ea58;
        }
    }
    ctx->pc = 0x19EA20u;
label_19ea20:
    // 0x19ea20: 0x26100005  addiu       $s0, $s0, 0x5
    ctx->pc = 0x19ea20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 5));
label_19ea24:
    // 0x19ea24: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19ea24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19ea28:
    // 0x19ea28: 0xc041b38  jal         func_106CE0
label_19ea2c:
    if (ctx->pc == 0x19EA2Cu) {
        ctx->pc = 0x19EA30u;
        goto label_19ea30;
    }
    ctx->pc = 0x19EA28u;
    SET_GPR_U32(ctx, 31, 0x19EA30u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x19EA28u, 0x19EA30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EA30u;
label_19ea30:
    // 0x19ea30: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x19ea30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_19ea34:
    // 0x19ea34: 0xc0ba898  jal         func_2EA260
label_19ea38:
    if (ctx->pc == 0x19EA38u) {
        ctx->pc = 0x19EA3Cu;
        goto label_19ea3c;
    }
    ctx->pc = 0x19EA34u;
    SET_GPR_U32(ctx, 31, 0x19EA3Cu);
    ctx->pc = 0x2EA260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA260u, 0x19EA34u, 0x19EA3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EA3Cu;
label_19ea3c:
    // 0x19ea3c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19ea3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19ea40:
    // 0x19ea40: 0xc0bef4c  jal         func_2FBD30
label_19ea44:
    if (ctx->pc == 0x19EA44u) {
        ctx->pc = 0x19EA48u;
        goto label_19ea48;
    }
    ctx->pc = 0x19EA40u;
    SET_GPR_U32(ctx, 31, 0x19EA48u);
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x19EA40u, 0x19EA48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EA48u;
label_19ea48:
    // 0x19ea48: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x19ea48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_19ea4c:
    // 0x19ea4c: 0xe44000b0  swc1        $f0, 0xB0($v0)
    ctx->pc = 0x19ea4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 176), bits); }
label_19ea50:
    // 0x19ea50: 0x10000005  b           . + 4 + (0x5 << 2)
label_19ea54:
    if (ctx->pc == 0x19EA54u) {
        ctx->pc = 0x19EA58u;
        goto label_19ea58;
    }
    ctx->pc = 0x19EA50u;
    {
        const bool branch_taken_0x19ea50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ea50) {
            ctx->pc = 0x19EA68u;
            goto label_19ea68;
        }
    }
    ctx->pc = 0x19EA58u;
label_19ea58:
    // 0x19ea58: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x19ea58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
label_19ea5c:
    // 0x19ea5c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19ea5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19ea60:
    // 0x19ea60: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x19ea60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_19ea64:
    // 0x19ea64: 0xe44000b0  swc1        $f0, 0xB0($v0)
    ctx->pc = 0x19ea64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 176), bits); }
label_19ea68:
    // 0x19ea68: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x19ea68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_19ea6c:
    // 0x19ea6c: 0x27859318  addiu       $a1, $gp, -0x6CE8
    ctx->pc = 0x19ea6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939416));
label_19ea70:
    // 0x19ea70: 0xc040304  jal         func_100C10
label_19ea74:
    if (ctx->pc == 0x19EA74u) {
        ctx->pc = 0x19EA78u;
        goto label_19ea78;
    }
    ctx->pc = 0x19EA70u;
    SET_GPR_U32(ctx, 31, 0x19EA78u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x19EA70u, 0x19EA78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EA78u;
label_19ea78:
    // 0x19ea78: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19ea78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19ea7c:
    // 0x19ea7c: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x19ea7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_19ea80:
    // 0x19ea80: 0xc05c618  jal         func_171860
label_19ea84:
    if (ctx->pc == 0x19EA84u) {
        ctx->pc = 0x19EA88u;
        goto label_19ea88;
    }
    ctx->pc = 0x19EA80u;
    SET_GPR_U32(ctx, 31, 0x19EA88u);
    ctx->pc = 0x171860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171860u, 0x19EA80u, 0x19EA88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EA88u;
label_19ea88:
    // 0x19ea88: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x19ea88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19ea8c:
    // 0x19ea8c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x19ea8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_19ea90:
    // 0x19ea90: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x19ea90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_19ea94:
    // 0x19ea94: 0xc0402d4  jal         func_100B50
label_19ea98:
    if (ctx->pc == 0x19EA98u) {
        ctx->pc = 0x19EA9Cu;
        goto label_19ea9c;
    }
    ctx->pc = 0x19EA94u;
    SET_GPR_U32(ctx, 31, 0x19EA9Cu);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x19EA94u, 0x19EA9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EA9Cu;
label_19ea9c:
    // 0x19ea9c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x19ea9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_19eaa0:
    // 0x19eaa0: 0x1202000f  beq         $s0, $v0, . + 4 + (0xF << 2)
label_19eaa4:
    if (ctx->pc == 0x19EAA4u) {
        ctx->pc = 0x19EAA8u;
        goto label_19eaa8;
    }
    ctx->pc = 0x19EAA0u;
    {
        const bool branch_taken_0x19eaa0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x19eaa0) {
            ctx->pc = 0x19EAE0u;
            goto label_19eae0;
        }
    }
    ctx->pc = 0x19EAA8u;
label_19eaa8:
    // 0x19eaa8: 0x26100005  addiu       $s0, $s0, 0x5
    ctx->pc = 0x19eaa8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 5));
label_19eaac:
    // 0x19eaac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19eaacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19eab0:
    // 0x19eab0: 0xc041b38  jal         func_106CE0
label_19eab4:
    if (ctx->pc == 0x19EAB4u) {
        ctx->pc = 0x19EAB8u;
        goto label_19eab8;
    }
    ctx->pc = 0x19EAB0u;
    SET_GPR_U32(ctx, 31, 0x19EAB8u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x19EAB0u, 0x19EAB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EAB8u;
label_19eab8:
    // 0x19eab8: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x19eab8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_19eabc:
    // 0x19eabc: 0xc0ba898  jal         func_2EA260
label_19eac0:
    if (ctx->pc == 0x19EAC0u) {
        ctx->pc = 0x19EAC4u;
        goto label_19eac4;
    }
    ctx->pc = 0x19EABCu;
    SET_GPR_U32(ctx, 31, 0x19EAC4u);
    ctx->pc = 0x2EA260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA260u, 0x19EABCu, 0x19EAC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EAC4u;
label_19eac4:
    // 0x19eac4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19eac4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19eac8:
    // 0x19eac8: 0xc0bef4c  jal         func_2FBD30
label_19eacc:
    if (ctx->pc == 0x19EACCu) {
        ctx->pc = 0x19EAD0u;
        goto label_19ead0;
    }
    ctx->pc = 0x19EAC8u;
    SET_GPR_U32(ctx, 31, 0x19EAD0u);
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x19EAC8u, 0x19EAD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EAD0u;
label_19ead0:
    // 0x19ead0: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x19ead0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_19ead4:
    // 0x19ead4: 0xe44000ac  swc1        $f0, 0xAC($v0)
    ctx->pc = 0x19ead4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 172), bits); }
label_19ead8:
    // 0x19ead8: 0x10000005  b           . + 4 + (0x5 << 2)
label_19eadc:
    if (ctx->pc == 0x19EADCu) {
        ctx->pc = 0x19EAE0u;
        goto label_19eae0;
    }
    ctx->pc = 0x19EAD8u;
    {
        const bool branch_taken_0x19ead8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ead8) {
            ctx->pc = 0x19EAF0u;
            goto label_19eaf0;
        }
    }
    ctx->pc = 0x19EAE0u;
label_19eae0:
    // 0x19eae0: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x19eae0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_19eae4:
    // 0x19eae4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19eae4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19eae8:
    // 0x19eae8: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x19eae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_19eaec:
    // 0x19eaec: 0xe44000ac  swc1        $f0, 0xAC($v0)
    ctx->pc = 0x19eaecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 172), bits); }
label_19eaf0:
    // 0x19eaf0: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x19eaf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_19eaf4:
    // 0x19eaf4: 0x27859320  addiu       $a1, $gp, -0x6CE0
    ctx->pc = 0x19eaf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939424));
label_19eaf8:
    // 0x19eaf8: 0xc040304  jal         func_100C10
label_19eafc:
    if (ctx->pc == 0x19EAFCu) {
        ctx->pc = 0x19EB00u;
        goto label_19eb00;
    }
    ctx->pc = 0x19EAF8u;
    SET_GPR_U32(ctx, 31, 0x19EB00u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x19EAF8u, 0x19EB00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EB00u;
label_19eb00:
    // 0x19eb00: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19eb00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19eb04:
    // 0x19eb04: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x19eb04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_19eb08:
    // 0x19eb08: 0xc05c618  jal         func_171860
label_19eb0c:
    if (ctx->pc == 0x19EB0Cu) {
        ctx->pc = 0x19EB10u;
        goto label_19eb10;
    }
    ctx->pc = 0x19EB08u;
    SET_GPR_U32(ctx, 31, 0x19EB10u);
    ctx->pc = 0x171860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171860u, 0x19EB08u, 0x19EB10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EB10u;
label_19eb10:
    // 0x19eb10: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x19eb10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19eb14:
    // 0x19eb14: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x19eb14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_19eb18:
    // 0x19eb18: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x19eb18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_19eb1c:
    // 0x19eb1c: 0xc0402d4  jal         func_100B50
label_19eb20:
    if (ctx->pc == 0x19EB20u) {
        ctx->pc = 0x19EB24u;
        goto label_19eb24;
    }
    ctx->pc = 0x19EB1Cu;
    SET_GPR_U32(ctx, 31, 0x19EB24u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x19EB1Cu, 0x19EB24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EB24u;
label_19eb24:
    // 0x19eb24: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x19eb24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_19eb28:
    // 0x19eb28: 0x1202000f  beq         $s0, $v0, . + 4 + (0xF << 2)
label_19eb2c:
    if (ctx->pc == 0x19EB2Cu) {
        ctx->pc = 0x19EB30u;
        goto label_19eb30;
    }
    ctx->pc = 0x19EB28u;
    {
        const bool branch_taken_0x19eb28 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x19eb28) {
            ctx->pc = 0x19EB68u;
            goto label_19eb68;
        }
    }
    ctx->pc = 0x19EB30u;
label_19eb30:
    // 0x19eb30: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x19eb30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
label_19eb34:
    // 0x19eb34: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19eb34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19eb38:
    // 0x19eb38: 0xc041b38  jal         func_106CE0
label_19eb3c:
    if (ctx->pc == 0x19EB3Cu) {
        ctx->pc = 0x19EB40u;
        goto label_19eb40;
    }
    ctx->pc = 0x19EB38u;
    SET_GPR_U32(ctx, 31, 0x19EB40u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x19EB38u, 0x19EB40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EB40u;
label_19eb40:
    // 0x19eb40: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x19eb40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_19eb44:
    // 0x19eb44: 0xc0ba898  jal         func_2EA260
label_19eb48:
    if (ctx->pc == 0x19EB48u) {
        ctx->pc = 0x19EB4Cu;
        goto label_19eb4c;
    }
    ctx->pc = 0x19EB44u;
    SET_GPR_U32(ctx, 31, 0x19EB4Cu);
    ctx->pc = 0x2EA260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA260u, 0x19EB44u, 0x19EB4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EB4Cu;
label_19eb4c:
    // 0x19eb4c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19eb4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19eb50:
    // 0x19eb50: 0xc0bef4c  jal         func_2FBD30
label_19eb54:
    if (ctx->pc == 0x19EB54u) {
        ctx->pc = 0x19EB58u;
        goto label_19eb58;
    }
    ctx->pc = 0x19EB50u;
    SET_GPR_U32(ctx, 31, 0x19EB58u);
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x19EB50u, 0x19EB58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EB58u;
label_19eb58:
    // 0x19eb58: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x19eb58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_19eb5c:
    // 0x19eb5c: 0xe44000b4  swc1        $f0, 0xB4($v0)
    ctx->pc = 0x19eb5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 180), bits); }
label_19eb60:
    // 0x19eb60: 0x10000005  b           . + 4 + (0x5 << 2)
label_19eb64:
    if (ctx->pc == 0x19EB64u) {
        ctx->pc = 0x19EB68u;
        goto label_19eb68;
    }
    ctx->pc = 0x19EB60u;
    {
        const bool branch_taken_0x19eb60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19eb60) {
            ctx->pc = 0x19EB78u;
            goto label_19eb78;
        }
    }
    ctx->pc = 0x19EB68u;
label_19eb68:
    // 0x19eb68: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x19eb68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_19eb6c:
    // 0x19eb6c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19eb6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19eb70:
    // 0x19eb70: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x19eb70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_19eb74:
    // 0x19eb74: 0xe44000b4  swc1        $f0, 0xB4($v0)
    ctx->pc = 0x19eb74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 180), bits); }
label_19eb78:
    // 0x19eb78: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x19eb78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_19eb7c:
    // 0x19eb7c: 0x27859324  addiu       $a1, $gp, -0x6CDC
    ctx->pc = 0x19eb7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939428));
label_19eb80:
    // 0x19eb80: 0xc040304  jal         func_100C10
label_19eb84:
    if (ctx->pc == 0x19EB84u) {
        ctx->pc = 0x19EB88u;
        goto label_19eb88;
    }
    ctx->pc = 0x19EB80u;
    SET_GPR_U32(ctx, 31, 0x19EB88u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x19EB80u, 0x19EB88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EB88u;
label_19eb88:
    // 0x19eb88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19eb88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19eb8c:
    // 0x19eb8c: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x19eb8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_19eb90:
    // 0x19eb90: 0xc05c618  jal         func_171860
label_19eb94:
    if (ctx->pc == 0x19EB94u) {
        ctx->pc = 0x19EB98u;
        goto label_19eb98;
    }
    ctx->pc = 0x19EB90u;
    SET_GPR_U32(ctx, 31, 0x19EB98u);
    ctx->pc = 0x171860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171860u, 0x19EB90u, 0x19EB98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EB98u;
label_19eb98:
    // 0x19eb98: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x19eb98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19eb9c:
    // 0x19eb9c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x19eb9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_19eba0:
    // 0x19eba0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x19eba0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_19eba4:
    // 0x19eba4: 0xc0402d4  jal         func_100B50
label_19eba8:
    if (ctx->pc == 0x19EBA8u) {
        ctx->pc = 0x19EBACu;
        goto label_19ebac;
    }
    ctx->pc = 0x19EBA4u;
    SET_GPR_U32(ctx, 31, 0x19EBACu);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x19EBA4u, 0x19EBACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EBACu;
label_19ebac:
    // 0x19ebac: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x19ebacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_19ebb0:
    // 0x19ebb0: 0x1202000f  beq         $s0, $v0, . + 4 + (0xF << 2)
label_19ebb4:
    if (ctx->pc == 0x19EBB4u) {
        ctx->pc = 0x19EBB8u;
        goto label_19ebb8;
    }
    ctx->pc = 0x19EBB0u;
    {
        const bool branch_taken_0x19ebb0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x19ebb0) {
            ctx->pc = 0x19EBF0u;
            goto label_19ebf0;
        }
    }
    ctx->pc = 0x19EBB8u;
label_19ebb8:
    // 0x19ebb8: 0x26100003  addiu       $s0, $s0, 0x3
    ctx->pc = 0x19ebb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
label_19ebbc:
    // 0x19ebbc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19ebbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19ebc0:
    // 0x19ebc0: 0xc041b38  jal         func_106CE0
label_19ebc4:
    if (ctx->pc == 0x19EBC4u) {
        ctx->pc = 0x19EBC8u;
        goto label_19ebc8;
    }
    ctx->pc = 0x19EBC0u;
    SET_GPR_U32(ctx, 31, 0x19EBC8u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x19EBC0u, 0x19EBC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EBC8u;
label_19ebc8:
    // 0x19ebc8: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x19ebc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_19ebcc:
    // 0x19ebcc: 0xc0ba898  jal         func_2EA260
label_19ebd0:
    if (ctx->pc == 0x19EBD0u) {
        ctx->pc = 0x19EBD4u;
        goto label_19ebd4;
    }
    ctx->pc = 0x19EBCCu;
    SET_GPR_U32(ctx, 31, 0x19EBD4u);
    ctx->pc = 0x2EA260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA260u, 0x19EBCCu, 0x19EBD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EBD4u;
label_19ebd4:
    // 0x19ebd4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19ebd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19ebd8:
    // 0x19ebd8: 0xc0bef4c  jal         func_2FBD30
label_19ebdc:
    if (ctx->pc == 0x19EBDCu) {
        ctx->pc = 0x19EBE0u;
        goto label_19ebe0;
    }
    ctx->pc = 0x19EBD8u;
    SET_GPR_U32(ctx, 31, 0x19EBE0u);
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x19EBD8u, 0x19EBE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EBE0u;
label_19ebe0:
    // 0x19ebe0: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x19ebe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_19ebe4:
    // 0x19ebe4: 0xe44000c8  swc1        $f0, 0xC8($v0)
    ctx->pc = 0x19ebe4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 200), bits); }
label_19ebe8:
    // 0x19ebe8: 0x10000004  b           . + 4 + (0x4 << 2)
label_19ebec:
    if (ctx->pc == 0x19EBECu) {
        ctx->pc = 0x19EBF0u;
        goto label_19ebf0;
    }
    ctx->pc = 0x19EBE8u;
    {
        const bool branch_taken_0x19ebe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ebe8) {
            ctx->pc = 0x19EBFCu;
            goto label_19ebfc;
        }
    }
    ctx->pc = 0x19EBF0u;
label_19ebf0:
    // 0x19ebf0: 0xc78081a0  lwc1        $f0, -0x7E60($gp)
    ctx->pc = 0x19ebf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19ebf4:
    // 0x19ebf4: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x19ebf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_19ebf8:
    // 0x19ebf8: 0xe44000c8  swc1        $f0, 0xC8($v0)
    ctx->pc = 0x19ebf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 200), bits); }
label_19ebfc:
    // 0x19ebfc: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x19ebfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_19ec00:
    // 0x19ec00: 0x27859328  addiu       $a1, $gp, -0x6CD8
    ctx->pc = 0x19ec00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939432));
label_19ec04:
    // 0x19ec04: 0xc040304  jal         func_100C10
label_19ec08:
    if (ctx->pc == 0x19EC08u) {
        ctx->pc = 0x19EC0Cu;
        goto label_19ec0c;
    }
    ctx->pc = 0x19EC04u;
    SET_GPR_U32(ctx, 31, 0x19EC0Cu);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x19EC04u, 0x19EC0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EC0Cu;
label_19ec0c:
    // 0x19ec0c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19ec0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19ec10:
    // 0x19ec10: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x19ec10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_19ec14:
    // 0x19ec14: 0xc05c618  jal         func_171860
label_19ec18:
    if (ctx->pc == 0x19EC18u) {
        ctx->pc = 0x19EC1Cu;
        goto label_19ec1c;
    }
    ctx->pc = 0x19EC14u;
    SET_GPR_U32(ctx, 31, 0x19EC1Cu);
    ctx->pc = 0x171860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171860u, 0x19EC14u, 0x19EC1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EC1Cu;
label_19ec1c:
    // 0x19ec1c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x19ec1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19ec20:
    // 0x19ec20: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x19ec20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_19ec24:
    // 0x19ec24: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x19ec24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_19ec28:
    // 0x19ec28: 0xc0402d4  jal         func_100B50
label_19ec2c:
    if (ctx->pc == 0x19EC2Cu) {
        ctx->pc = 0x19EC30u;
        goto label_19ec30;
    }
    ctx->pc = 0x19EC28u;
    SET_GPR_U32(ctx, 31, 0x19EC30u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x19EC28u, 0x19EC30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EC30u;
label_19ec30:
    // 0x19ec30: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x19ec30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_19ec34:
    // 0x19ec34: 0x1202000f  beq         $s0, $v0, . + 4 + (0xF << 2)
label_19ec38:
    if (ctx->pc == 0x19EC38u) {
        ctx->pc = 0x19EC3Cu;
        goto label_19ec3c;
    }
    ctx->pc = 0x19EC34u;
    {
        const bool branch_taken_0x19ec34 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x19ec34) {
            ctx->pc = 0x19EC74u;
            goto label_19ec74;
        }
    }
    ctx->pc = 0x19EC3Cu;
label_19ec3c:
    // 0x19ec3c: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x19ec3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_19ec40:
    // 0x19ec40: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19ec40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19ec44:
    // 0x19ec44: 0xc041b38  jal         func_106CE0
label_19ec48:
    if (ctx->pc == 0x19EC48u) {
        ctx->pc = 0x19EC4Cu;
        goto label_19ec4c;
    }
    ctx->pc = 0x19EC44u;
    SET_GPR_U32(ctx, 31, 0x19EC4Cu);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x19EC44u, 0x19EC4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EC4Cu;
label_19ec4c:
    // 0x19ec4c: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x19ec4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_19ec50:
    // 0x19ec50: 0xc0ba898  jal         func_2EA260
label_19ec54:
    if (ctx->pc == 0x19EC54u) {
        ctx->pc = 0x19EC58u;
        goto label_19ec58;
    }
    ctx->pc = 0x19EC50u;
    SET_GPR_U32(ctx, 31, 0x19EC58u);
    ctx->pc = 0x2EA260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA260u, 0x19EC50u, 0x19EC58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EC58u;
label_19ec58:
    // 0x19ec58: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19ec58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19ec5c:
    // 0x19ec5c: 0xc0bef4c  jal         func_2FBD30
label_19ec60:
    if (ctx->pc == 0x19EC60u) {
        ctx->pc = 0x19EC64u;
        goto label_19ec64;
    }
    ctx->pc = 0x19EC5Cu;
    SET_GPR_U32(ctx, 31, 0x19EC64u);
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x19EC5Cu, 0x19EC64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EC64u;
label_19ec64:
    // 0x19ec64: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x19ec64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_19ec68:
    // 0x19ec68: 0xe44000cc  swc1        $f0, 0xCC($v0)
    ctx->pc = 0x19ec68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 204), bits); }
label_19ec6c:
    // 0x19ec6c: 0x10000004  b           . + 4 + (0x4 << 2)
label_19ec70:
    if (ctx->pc == 0x19EC70u) {
        ctx->pc = 0x19EC74u;
        goto label_19ec74;
    }
    ctx->pc = 0x19EC6Cu;
    {
        const bool branch_taken_0x19ec6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ec6c) {
            ctx->pc = 0x19EC80u;
            goto label_19ec80;
        }
    }
    ctx->pc = 0x19EC74u;
label_19ec74:
    // 0x19ec74: 0xc7808140  lwc1        $f0, -0x7EC0($gp)
    ctx->pc = 0x19ec74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934848)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19ec78:
    // 0x19ec78: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x19ec78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_19ec7c:
    // 0x19ec7c: 0xe44000cc  swc1        $f0, 0xCC($v0)
    ctx->pc = 0x19ec7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 204), bits); }
label_19ec80:
    // 0x19ec80: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x19ec80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_19ec84:
    // 0x19ec84: 0x27859330  addiu       $a1, $gp, -0x6CD0
    ctx->pc = 0x19ec84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939440));
label_19ec88:
    // 0x19ec88: 0xc040304  jal         func_100C10
label_19ec8c:
    if (ctx->pc == 0x19EC8Cu) {
        ctx->pc = 0x19EC90u;
        goto label_19ec90;
    }
    ctx->pc = 0x19EC88u;
    SET_GPR_U32(ctx, 31, 0x19EC90u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x19EC88u, 0x19EC90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EC90u;
label_19ec90:
    // 0x19ec90: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19ec90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19ec94:
    // 0x19ec94: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x19ec94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_19ec98:
    // 0x19ec98: 0xc05c618  jal         func_171860
label_19ec9c:
    if (ctx->pc == 0x19EC9Cu) {
        ctx->pc = 0x19ECA0u;
        goto label_19eca0;
    }
    ctx->pc = 0x19EC98u;
    SET_GPR_U32(ctx, 31, 0x19ECA0u);
    ctx->pc = 0x171860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171860u, 0x19EC98u, 0x19ECA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19ECA0u;
label_19eca0:
    // 0x19eca0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x19eca0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19eca4:
    // 0x19eca4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x19eca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_19eca8:
    // 0x19eca8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x19eca8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_19ecac:
    // 0x19ecac: 0xc0402d4  jal         func_100B50
label_19ecb0:
    if (ctx->pc == 0x19ECB0u) {
        ctx->pc = 0x19ECB4u;
        goto label_19ecb4;
    }
    ctx->pc = 0x19ECACu;
    SET_GPR_U32(ctx, 31, 0x19ECB4u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x19ECACu, 0x19ECB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19ECB4u;
label_19ecb4:
    // 0x19ecb4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x19ecb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_19ecb8:
    // 0x19ecb8: 0x1202000f  beq         $s0, $v0, . + 4 + (0xF << 2)
label_19ecbc:
    if (ctx->pc == 0x19ECBCu) {
        ctx->pc = 0x19ECC0u;
        goto label_19ecc0;
    }
    ctx->pc = 0x19ECB8u;
    {
        const bool branch_taken_0x19ecb8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x19ecb8) {
            ctx->pc = 0x19ECF8u;
            goto label_19ecf8;
        }
    }
    ctx->pc = 0x19ECC0u;
label_19ecc0:
    // 0x19ecc0: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x19ecc0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_19ecc4:
    // 0x19ecc4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19ecc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19ecc8:
    // 0x19ecc8: 0xc041b38  jal         func_106CE0
label_19eccc:
    if (ctx->pc == 0x19ECCCu) {
        ctx->pc = 0x19ECD0u;
        goto label_19ecd0;
    }
    ctx->pc = 0x19ECC8u;
    SET_GPR_U32(ctx, 31, 0x19ECD0u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x19ECC8u, 0x19ECD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19ECD0u;
label_19ecd0:
    // 0x19ecd0: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x19ecd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_19ecd4:
    // 0x19ecd4: 0xc0ba898  jal         func_2EA260
label_19ecd8:
    if (ctx->pc == 0x19ECD8u) {
        ctx->pc = 0x19ECDCu;
        goto label_19ecdc;
    }
    ctx->pc = 0x19ECD4u;
    SET_GPR_U32(ctx, 31, 0x19ECDCu);
    ctx->pc = 0x2EA260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA260u, 0x19ECD4u, 0x19ECDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19ECDCu;
label_19ecdc:
    // 0x19ecdc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19ecdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19ece0:
    // 0x19ece0: 0xc0bef4c  jal         func_2FBD30
label_19ece4:
    if (ctx->pc == 0x19ECE4u) {
        ctx->pc = 0x19ECE8u;
        goto label_19ece8;
    }
    ctx->pc = 0x19ECE0u;
    SET_GPR_U32(ctx, 31, 0x19ECE8u);
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x19ECE0u, 0x19ECE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19ECE8u;
label_19ece8:
    // 0x19ece8: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x19ece8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_19ecec:
    // 0x19ecec: 0xe44000f0  swc1        $f0, 0xF0($v0)
    ctx->pc = 0x19ececu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 240), bits); }
label_19ecf0:
    // 0x19ecf0: 0x10000005  b           . + 4 + (0x5 << 2)
label_19ecf4:
    if (ctx->pc == 0x19ECF4u) {
        ctx->pc = 0x19ECF8u;
        goto label_19ecf8;
    }
    ctx->pc = 0x19ECF0u;
    {
        const bool branch_taken_0x19ecf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ecf0) {
            ctx->pc = 0x19ED08u;
            goto label_19ed08;
        }
    }
    ctx->pc = 0x19ECF8u;
label_19ecf8:
    // 0x19ecf8: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x19ecf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_19ecfc:
    // 0x19ecfc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19ecfcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19ed00:
    // 0x19ed00: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x19ed00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_19ed04:
    // 0x19ed04: 0xe44000f0  swc1        $f0, 0xF0($v0)
    ctx->pc = 0x19ed04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 240), bits); }
label_19ed08:
    // 0x19ed08: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x19ed08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_19ed0c:
    // 0x19ed0c: 0x27859338  addiu       $a1, $gp, -0x6CC8
    ctx->pc = 0x19ed0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939448));
label_19ed10:
    // 0x19ed10: 0xc040304  jal         func_100C10
label_19ed14:
    if (ctx->pc == 0x19ED14u) {
        ctx->pc = 0x19ED18u;
        goto label_19ed18;
    }
    ctx->pc = 0x19ED10u;
    SET_GPR_U32(ctx, 31, 0x19ED18u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x19ED10u, 0x19ED18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19ED18u;
label_19ed18:
    // 0x19ed18: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19ed18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19ed1c:
    // 0x19ed1c: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x19ed1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_19ed20:
    // 0x19ed20: 0xc05c618  jal         func_171860
label_19ed24:
    if (ctx->pc == 0x19ED24u) {
        ctx->pc = 0x19ED28u;
        goto label_19ed28;
    }
    ctx->pc = 0x19ED20u;
    SET_GPR_U32(ctx, 31, 0x19ED28u);
    ctx->pc = 0x171860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171860u, 0x19ED20u, 0x19ED28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19ED28u;
label_19ed28:
    // 0x19ed28: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x19ed28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19ed2c:
    // 0x19ed2c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x19ed2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_19ed30:
    // 0x19ed30: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x19ed30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_19ed34:
    // 0x19ed34: 0xc0402d4  jal         func_100B50
label_19ed38:
    if (ctx->pc == 0x19ED38u) {
        ctx->pc = 0x19ED3Cu;
        goto label_19ed3c;
    }
    ctx->pc = 0x19ED34u;
    SET_GPR_U32(ctx, 31, 0x19ED3Cu);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x19ED34u, 0x19ED3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19ED3Cu;
label_19ed3c:
    // 0x19ed3c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x19ed3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_19ed40:
    // 0x19ed40: 0x1202000f  beq         $s0, $v0, . + 4 + (0xF << 2)
label_19ed44:
    if (ctx->pc == 0x19ED44u) {
        ctx->pc = 0x19ED48u;
        goto label_19ed48;
    }
    ctx->pc = 0x19ED40u;
    {
        const bool branch_taken_0x19ed40 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x19ed40) {
            ctx->pc = 0x19ED80u;
            goto label_19ed80;
        }
    }
    ctx->pc = 0x19ED48u;
label_19ed48:
    // 0x19ed48: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x19ed48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_19ed4c:
    // 0x19ed4c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19ed4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19ed50:
    // 0x19ed50: 0xc041b38  jal         func_106CE0
label_19ed54:
    if (ctx->pc == 0x19ED54u) {
        ctx->pc = 0x19ED58u;
        goto label_19ed58;
    }
    ctx->pc = 0x19ED50u;
    SET_GPR_U32(ctx, 31, 0x19ED58u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x19ED50u, 0x19ED58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19ED58u;
label_19ed58:
    // 0x19ed58: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x19ed58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_19ed5c:
    // 0x19ed5c: 0xc0ba898  jal         func_2EA260
label_19ed60:
    if (ctx->pc == 0x19ED60u) {
        ctx->pc = 0x19ED64u;
        goto label_19ed64;
    }
    ctx->pc = 0x19ED5Cu;
    SET_GPR_U32(ctx, 31, 0x19ED64u);
    ctx->pc = 0x2EA260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA260u, 0x19ED5Cu, 0x19ED64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19ED64u;
label_19ed64:
    // 0x19ed64: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19ed64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19ed68:
    // 0x19ed68: 0xc0bef4c  jal         func_2FBD30
label_19ed6c:
    if (ctx->pc == 0x19ED6Cu) {
        ctx->pc = 0x19ED70u;
        goto label_19ed70;
    }
    ctx->pc = 0x19ED68u;
    SET_GPR_U32(ctx, 31, 0x19ED70u);
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x19ED68u, 0x19ED70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19ED70u;
label_19ed70:
    // 0x19ed70: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x19ed70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_19ed74:
    // 0x19ed74: 0xe44000f4  swc1        $f0, 0xF4($v0)
    ctx->pc = 0x19ed74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 244), bits); }
label_19ed78:
    // 0x19ed78: 0x10000005  b           . + 4 + (0x5 << 2)
label_19ed7c:
    if (ctx->pc == 0x19ED7Cu) {
        ctx->pc = 0x19ED80u;
        goto label_19ed80;
    }
    ctx->pc = 0x19ED78u;
    {
        const bool branch_taken_0x19ed78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ed78) {
            ctx->pc = 0x19ED90u;
            goto label_19ed90;
        }
    }
    ctx->pc = 0x19ED80u;
label_19ed80:
    // 0x19ed80: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x19ed80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
label_19ed84:
    // 0x19ed84: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19ed84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19ed88:
    // 0x19ed88: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x19ed88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_19ed8c:
    // 0x19ed8c: 0xe44000f4  swc1        $f0, 0xF4($v0)
    ctx->pc = 0x19ed8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 244), bits); }
label_19ed90:
    // 0x19ed90: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x19ed90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_19ed94:
    // 0x19ed94: 0xa04000c4  sb          $zero, 0xC4($v0)
    ctx->pc = 0x19ed94u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 196), (uint8_t)GPR_U32(ctx, 0));
label_19ed98:
    // 0x19ed98: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x19ed98u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19ed9c:
    // 0x19ed9c: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x19ed9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_19eda0:
    // 0x19eda0: 0xe44000d0  swc1        $f0, 0xD0($v0)
    ctx->pc = 0x19eda0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
label_19eda4:
    // 0x19eda4: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x19eda4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_19eda8:
    // 0x19eda8: 0xe44000ec  swc1        $f0, 0xEC($v0)
    ctx->pc = 0x19eda8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 236), bits); }
label_19edac:
    // 0x19edac: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x19edacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_19edb0:
    // 0x19edb0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x19edb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_19edb4:
    // 0x19edb4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19edb4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_19edb8:
    // 0x19edb8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19edb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_19edbc:
    // 0x19edbc: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x19edbcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_19edc0:
    // 0x19edc0: 0x3e00008  jr          $ra
label_19edc4:
    if (ctx->pc == 0x19EDC4u) {
        ctx->pc = 0x19EDC8u;
        goto label_19edc8;
    }
    ctx->pc = 0x19EDC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19EDC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19EDC8u;
label_19edc8:
    // 0x19edc8: 0x0  nop
    ctx->pc = 0x19edc8u;
    // NOP
label_19edcc:
    // 0x19edcc: 0x0  nop
    ctx->pc = 0x19edccu;
    // NOP
label_19edd0:
    // 0x19edd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19edd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_19edd4:
    // 0x19edd4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19edd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_19edd8:
    // 0x19edd8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x19edd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_19eddc:
    // 0x19eddc: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x19eddcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
label_19ede0:
    // 0x19ede0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x19ede0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_19ede4:
    // 0x19ede4: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_19ede8:
    if (ctx->pc == 0x19EDE8u) {
        ctx->pc = 0x19EDECu;
        goto label_19edec;
    }
    ctx->pc = 0x19EDE4u;
    {
        const bool branch_taken_0x19ede4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ede4) {
            ctx->pc = 0x19EE40u;
            goto label_19ee40;
        }
    }
    ctx->pc = 0x19EDECu;
label_19edec:
    // 0x19edec: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x19edecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_19edf0:
    // 0x19edf0: 0x24634570  addiu       $v1, $v1, 0x4570
    ctx->pc = 0x19edf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17776));
label_19edf4:
    // 0x19edf4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x19edf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_19edf8:
    // 0x19edf8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x19edf8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_19edfc:
    // 0x19edfc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x19edfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_19ee00:
    // 0x19ee00: 0x244400d8  addiu       $a0, $v0, 0xD8
    ctx->pc = 0x19ee00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 216));
label_19ee04:
    // 0x19ee04: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x19ee04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_19ee08:
    // 0x19ee08: 0xc048004  jal         func_120010
label_19ee0c:
    if (ctx->pc == 0x19EE0Cu) {
        ctx->pc = 0x19EE10u;
        goto label_19ee10;
    }
    ctx->pc = 0x19EE08u;
    SET_GPR_U32(ctx, 31, 0x19EE10u);
    ctx->pc = 0x120010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120010u, 0x19EE08u, 0x19EE10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EE10u;
label_19ee10:
    // 0x19ee10: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x19ee10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_19ee14:
    // 0x19ee14: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19ee14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19ee18:
    // 0x19ee18: 0xc064970  jal         func_1925C0
label_19ee1c:
    if (ctx->pc == 0x19EE1Cu) {
        ctx->pc = 0x19EE20u;
        goto label_19ee20;
    }
    ctx->pc = 0x19EE18u;
    SET_GPR_U32(ctx, 31, 0x19EE20u);
    ctx->pc = 0x1925C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1925C0u, 0x19EE18u, 0x19EE20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EE20u;
label_19ee20:
    // 0x19ee20: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x19ee20u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
label_19ee24:
    // 0x19ee24: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x19ee24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_19ee28:
    // 0x19ee28: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x19ee28u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_19ee2c:
    // 0x19ee2c: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
label_19ee30:
    if (ctx->pc == 0x19EE30u) {
        ctx->pc = 0x19EE34u;
        goto label_19ee34;
    }
    ctx->pc = 0x19EE2Cu;
    {
        const bool branch_taken_0x19ee2c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x19ee2c) {
            ctx->pc = 0x19EE40u;
            goto label_19ee40;
        }
    }
    ctx->pc = 0x19EE34u;
label_19ee34:
    // 0x19ee34: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x19ee34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_19ee38:
    // 0x19ee38: 0xc0ba070  jal         func_2E81C0
label_19ee3c:
    if (ctx->pc == 0x19EE3Cu) {
        ctx->pc = 0x19EE40u;
        goto label_19ee40;
    }
    ctx->pc = 0x19EE38u;
    SET_GPR_U32(ctx, 31, 0x19EE40u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x19EE38u, 0x19EE40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EE40u;
label_19ee40:
    // 0x19ee40: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x19ee40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_19ee44:
    // 0x19ee44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19ee44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19ee48:
    // 0x19ee48: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x19ee48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_19ee4c:
    // 0x19ee4c: 0x3e00008  jr          $ra
label_19ee50:
    if (ctx->pc == 0x19EE50u) {
        ctx->pc = 0x19EE54u;
        goto label_19ee54;
    }
    ctx->pc = 0x19EE4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19EE4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19EE54u;
label_19ee54:
    // 0x19ee54: 0x0  nop
    ctx->pc = 0x19ee54u;
    // NOP
label_19ee58:
    // 0x19ee58: 0x0  nop
    ctx->pc = 0x19ee58u;
    // NOP
label_19ee5c:
    // 0x19ee5c: 0x0  nop
    ctx->pc = 0x19ee5cu;
    // NOP
label_19ee60:
    // 0x19ee60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19ee60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_19ee64:
    // 0x19ee64: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x19ee64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
label_19ee68:
    // 0x19ee68: 0x24426170  addiu       $v0, $v0, 0x6170
    ctx->pc = 0x19ee68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24944));
label_19ee6c:
    // 0x19ee6c: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x19ee6cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_19ee70:
    // 0x19ee70: 0x3e00008  jr          $ra
label_19ee74:
    if (ctx->pc == 0x19EE74u) {
        ctx->pc = 0x19EE78u;
        goto label_19ee78;
    }
    ctx->pc = 0x19EE70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19EE70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19EE78u;
label_19ee78:
    // 0x19ee78: 0x0  nop
    ctx->pc = 0x19ee78u;
    // NOP
label_19ee7c:
    // 0x19ee7c: 0x0  nop
    ctx->pc = 0x19ee7cu;
    // NOP
label_19ee80:
    // 0x19ee80: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x19ee80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_19ee84:
    // 0x19ee84: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x19ee84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_19ee88:
    // 0x19ee88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19ee88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_19ee8c:
    // 0x19ee8c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x19ee8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
label_19ee90:
    // 0x19ee90: 0xe7ac0030  swc1        $f12, 0x30($sp)
    ctx->pc = 0x19ee90u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_19ee94:
    // 0x19ee94: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x19ee94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_19ee98:
    // 0x19ee98: 0x8c6300e8  lw          $v1, 0xE8($v1)
    ctx->pc = 0x19ee98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 232)));
label_19ee9c:
    // 0x19ee9c: 0x14600034  bnez        $v1, . + 4 + (0x34 << 2)
label_19eea0:
    if (ctx->pc == 0x19EEA0u) {
        ctx->pc = 0x19EEA4u;
        goto label_19eea4;
    }
    ctx->pc = 0x19EE9Cu;
    {
        const bool branch_taken_0x19ee9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19ee9c) {
            ctx->pc = 0x19EF70u;
            goto label_19ef70;
        }
    }
    ctx->pc = 0x19EEA4u;
label_19eea4:
    // 0x19eea4: 0x8f83bb70  lw          $v1, -0x4490($gp)
    ctx->pc = 0x19eea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_19eea8:
    // 0x19eea8: 0xc463000c  lwc1        $f3, 0xC($v1)
    ctx->pc = 0x19eea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_19eeac:
    // 0x19eeac: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x19eeacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_19eeb0:
    // 0x19eeb0: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x19eeb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19eeb4:
    // 0x19eeb4: 0xc46000b4  lwc1        $f0, 0xB4($v1)
    ctx->pc = 0x19eeb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19eeb8:
    // 0x19eeb8: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x19eeb8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_19eebc:
    // 0x19eebc: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x19eebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_19eec0:
    // 0x19eec0: 0xc46100a8  lwc1        $f1, 0xA8($v1)
    ctx->pc = 0x19eec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19eec4:
    // 0x19eec4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x19eec4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19eec8:
    // 0x19eec8: 0x0  nop
    ctx->pc = 0x19eec8u;
    // NOP
label_19eecc:
    // 0x19eecc: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x19eeccu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
label_19eed0:
    // 0x19eed0: 0x4602181d  msub.s      $f0, $f3, $f2
    ctx->pc = 0x19eed0u;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_19eed4:
    // 0x19eed4: 0xe46000a8  swc1        $f0, 0xA8($v1)
    ctx->pc = 0x19eed4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 168), bits); }
label_19eed8:
    // 0x19eed8: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x19eed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_19eedc:
    // 0x19eedc: 0xc46100a8  lwc1        $f1, 0xA8($v1)
    ctx->pc = 0x19eedcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19eee0:
    // 0x19eee0: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x19eee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_19eee4:
    // 0x19eee4: 0xc46000ac  lwc1        $f0, 0xAC($v1)
    ctx->pc = 0x19eee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19eee8:
    // 0x19eee8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x19eee8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_19eeec:
    // 0x19eeec: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x19eeecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_19eef0:
    // 0x19eef0: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_19eef4:
    if (ctx->pc == 0x19EEF4u) {
        ctx->pc = 0x19EEF8u;
        goto label_19eef8;
    }
    ctx->pc = 0x19EEF0u;
    {
        const bool branch_taken_0x19eef0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19eef0) {
            ctx->pc = 0x19EF14u;
            goto label_19ef14;
        }
    }
    ctx->pc = 0x19EEF8u;
label_19eef8:
    // 0x19eef8: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x19eef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_19eefc:
    // 0x19eefc: 0xc46000ac  lwc1        $f0, 0xAC($v1)
    ctx->pc = 0x19eefcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19ef00:
    // 0x19ef00: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x19ef00u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_19ef04:
    // 0x19ef04: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x19ef04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_19ef08:
    // 0x19ef08: 0xe46000a8  swc1        $f0, 0xA8($v1)
    ctx->pc = 0x19ef08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 168), bits); }
label_19ef0c:
    // 0x19ef0c: 0x10000018  b           . + 4 + (0x18 << 2)
label_19ef10:
    if (ctx->pc == 0x19EF10u) {
        ctx->pc = 0x19EF14u;
        goto label_19ef14;
    }
    ctx->pc = 0x19EF0Cu;
    {
        const bool branch_taken_0x19ef0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ef0c) {
            ctx->pc = 0x19EF70u;
            goto label_19ef70;
        }
    }
    ctx->pc = 0x19EF14u;
label_19ef14:
    // 0x19ef14: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x19ef14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_19ef18:
    // 0x19ef18: 0xc44c00a8  lwc1        $f12, 0xA8($v0)
    ctx->pc = 0x19ef18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_19ef1c:
    // 0x19ef1c: 0xc0bec3e  jal         func_2FB0F8
label_19ef20:
    if (ctx->pc == 0x19EF20u) {
        ctx->pc = 0x19EF24u;
        goto label_19ef24;
    }
    ctx->pc = 0x19EF1Cu;
    SET_GPR_U32(ctx, 31, 0x19EF24u);
    ctx->pc = 0x2FB0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB0F8u, 0x19EF1Cu, 0x19EF24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EF24u;
label_19ef24:
    // 0x19ef24: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19ef24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19ef28:
    // 0x19ef28: 0xc0c3808  jal         func_30E020
label_19ef2c:
    if (ctx->pc == 0x19EF2Cu) {
        ctx->pc = 0x19EF30u;
        goto label_19ef30;
    }
    ctx->pc = 0x19EF28u;
    SET_GPR_U32(ctx, 31, 0x19EF30u);
    ctx->pc = 0x30E020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E020u, 0x19EF28u, 0x19EF30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EF30u;
label_19ef30:
    // 0x19ef30: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x19ef30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19ef34:
    // 0x19ef34: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x19ef34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_19ef38:
    // 0x19ef38: 0xc44c00b0  lwc1        $f12, 0xB0($v0)
    ctx->pc = 0x19ef38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_19ef3c:
    // 0x19ef3c: 0xc0bec3e  jal         func_2FB0F8
label_19ef40:
    if (ctx->pc == 0x19EF40u) {
        ctx->pc = 0x19EF44u;
        goto label_19ef44;
    }
    ctx->pc = 0x19EF3Cu;
    SET_GPR_U32(ctx, 31, 0x19EF44u);
    ctx->pc = 0x2FB0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB0F8u, 0x19EF3Cu, 0x19EF44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EF44u;
label_19ef44:
    // 0x19ef44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19ef44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19ef48:
    // 0x19ef48: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x19ef48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19ef4c:
    // 0x19ef4c: 0xc090074  jal         func_2401D0
label_19ef50:
    if (ctx->pc == 0x19EF50u) {
        ctx->pc = 0x19EF54u;
        goto label_19ef54;
    }
    ctx->pc = 0x19EF4Cu;
    SET_GPR_U32(ctx, 31, 0x19EF54u);
    ctx->pc = 0x2401D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2401D0u, 0x19EF4Cu, 0x19EF54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EF54u;
label_19ef54:
    // 0x19ef54: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_19ef58:
    if (ctx->pc == 0x19EF58u) {
        ctx->pc = 0x19EF5Cu;
        goto label_19ef5c;
    }
    ctx->pc = 0x19EF54u;
    {
        const bool branch_taken_0x19ef54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ef54) {
            ctx->pc = 0x19EF70u;
            goto label_19ef70;
        }
    }
    ctx->pc = 0x19EF5Cu;
label_19ef5c:
    // 0x19ef5c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x19ef5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_19ef60:
    // 0x19ef60: 0xc46000b0  lwc1        $f0, 0xB0($v1)
    ctx->pc = 0x19ef60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19ef64:
    // 0x19ef64: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x19ef64u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_19ef68:
    // 0x19ef68: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x19ef68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_19ef6c:
    // 0x19ef6c: 0xe46000a8  swc1        $f0, 0xA8($v1)
    ctx->pc = 0x19ef6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 168), bits); }
label_19ef70:
    // 0x19ef70: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19ef70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_19ef74:
    // 0x19ef74: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19ef74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_19ef78:
    // 0x19ef78: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x19ef78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_19ef7c:
    // 0x19ef7c: 0x3e00008  jr          $ra
label_19ef80:
    if (ctx->pc == 0x19EF80u) {
        ctx->pc = 0x19EF84u;
        goto label_19ef84;
    }
    ctx->pc = 0x19EF7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19EF7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19EF84u;
label_19ef84:
    // 0x19ef84: 0x0  nop
    ctx->pc = 0x19ef84u;
    // NOP
label_19ef88:
    // 0x19ef88: 0x0  nop
    ctx->pc = 0x19ef88u;
    // NOP
label_19ef8c:
    // 0x19ef8c: 0x0  nop
    ctx->pc = 0x19ef8cu;
    // NOP
label_19ef90:
    // 0x19ef90: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x19ef90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_19ef94:
    // 0x19ef94: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x19ef94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_19ef98:
    // 0x19ef98: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19ef98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_19ef9c:
    // 0x19ef9c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x19ef9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
label_19efa0:
    // 0x19efa0: 0xe7ac0030  swc1        $f12, 0x30($sp)
    ctx->pc = 0x19efa0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_19efa4:
    // 0x19efa4: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x19efa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_19efa8:
    // 0x19efa8: 0x8c6300e8  lw          $v1, 0xE8($v1)
    ctx->pc = 0x19efa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 232)));
label_19efac:
    // 0x19efac: 0x14600031  bnez        $v1, . + 4 + (0x31 << 2)
label_19efb0:
    if (ctx->pc == 0x19EFB0u) {
        ctx->pc = 0x19EFB4u;
        goto label_19efb4;
    }
    ctx->pc = 0x19EFACu;
    {
        const bool branch_taken_0x19efac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19efac) {
            ctx->pc = 0x19F074u;
            goto label_19f074;
        }
    }
    ctx->pc = 0x19EFB4u;
label_19efb4:
    // 0x19efb4: 0x8f83bb70  lw          $v1, -0x4490($gp)
    ctx->pc = 0x19efb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_19efb8:
    // 0x19efb8: 0xc463000c  lwc1        $f3, 0xC($v1)
    ctx->pc = 0x19efb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_19efbc:
    // 0x19efbc: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x19efbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_19efc0:
    // 0x19efc0: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x19efc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19efc4:
    // 0x19efc4: 0xc46000b4  lwc1        $f0, 0xB4($v1)
    ctx->pc = 0x19efc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19efc8:
    // 0x19efc8: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x19efc8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_19efcc:
    // 0x19efcc: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x19efccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_19efd0:
    // 0x19efd0: 0xc46100a8  lwc1        $f1, 0xA8($v1)
    ctx->pc = 0x19efd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19efd4:
    // 0x19efd4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x19efd4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19efd8:
    // 0x19efd8: 0x0  nop
    ctx->pc = 0x19efd8u;
    // NOP
label_19efdc:
    // 0x19efdc: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x19efdcu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
label_19efe0:
    // 0x19efe0: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x19efe0u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_19efe4:
    // 0x19efe4: 0xe46000a8  swc1        $f0, 0xA8($v1)
    ctx->pc = 0x19efe4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 168), bits); }
label_19efe8:
    // 0x19efe8: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x19efe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_19efec:
    // 0x19efec: 0xc46100a8  lwc1        $f1, 0xA8($v1)
    ctx->pc = 0x19efecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19eff0:
    // 0x19eff0: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x19eff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_19eff4:
    // 0x19eff4: 0xc46000ac  lwc1        $f0, 0xAC($v1)
    ctx->pc = 0x19eff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19eff8:
    // 0x19eff8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x19eff8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_19effc:
    // 0x19effc: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_19f000:
    if (ctx->pc == 0x19F000u) {
        ctx->pc = 0x19F004u;
        goto label_19f004;
    }
    ctx->pc = 0x19EFFCu;
    {
        const bool branch_taken_0x19effc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19effc) {
            ctx->pc = 0x19F01Cu;
            goto label_19f01c;
        }
    }
    ctx->pc = 0x19F004u;
label_19f004:
    // 0x19f004: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x19f004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_19f008:
    // 0x19f008: 0xc46000ac  lwc1        $f0, 0xAC($v1)
    ctx->pc = 0x19f008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19f00c:
    // 0x19f00c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x19f00cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_19f010:
    // 0x19f010: 0xe46000a8  swc1        $f0, 0xA8($v1)
    ctx->pc = 0x19f010u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 168), bits); }
label_19f014:
    // 0x19f014: 0x10000017  b           . + 4 + (0x17 << 2)
label_19f018:
    if (ctx->pc == 0x19F018u) {
        ctx->pc = 0x19F01Cu;
        goto label_19f01c;
    }
    ctx->pc = 0x19F014u;
    {
        const bool branch_taken_0x19f014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f014) {
            ctx->pc = 0x19F074u;
            goto label_19f074;
        }
    }
    ctx->pc = 0x19F01Cu;
label_19f01c:
    // 0x19f01c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x19f01cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_19f020:
    // 0x19f020: 0xc44c00a8  lwc1        $f12, 0xA8($v0)
    ctx->pc = 0x19f020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_19f024:
    // 0x19f024: 0xc0bec3e  jal         func_2FB0F8
label_19f028:
    if (ctx->pc == 0x19F028u) {
        ctx->pc = 0x19F02Cu;
        goto label_19f02c;
    }
    ctx->pc = 0x19F024u;
    SET_GPR_U32(ctx, 31, 0x19F02Cu);
    ctx->pc = 0x2FB0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB0F8u, 0x19F024u, 0x19F02Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F02Cu;
label_19f02c:
    // 0x19f02c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19f02cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19f030:
    // 0x19f030: 0xc0c3808  jal         func_30E020
label_19f034:
    if (ctx->pc == 0x19F034u) {
        ctx->pc = 0x19F038u;
        goto label_19f038;
    }
    ctx->pc = 0x19F030u;
    SET_GPR_U32(ctx, 31, 0x19F038u);
    ctx->pc = 0x30E020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E020u, 0x19F030u, 0x19F038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F038u;
label_19f038:
    // 0x19f038: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x19f038u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19f03c:
    // 0x19f03c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x19f03cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_19f040:
    // 0x19f040: 0xc44c00b0  lwc1        $f12, 0xB0($v0)
    ctx->pc = 0x19f040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_19f044:
    // 0x19f044: 0xc0bec3e  jal         func_2FB0F8
label_19f048:
    if (ctx->pc == 0x19F048u) {
        ctx->pc = 0x19F04Cu;
        goto label_19f04c;
    }
    ctx->pc = 0x19F044u;
    SET_GPR_U32(ctx, 31, 0x19F04Cu);
    ctx->pc = 0x2FB0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB0F8u, 0x19F044u, 0x19F04Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F04Cu;
label_19f04c:
    // 0x19f04c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19f04cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19f050:
    // 0x19f050: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x19f050u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19f054:
    // 0x19f054: 0xc090074  jal         func_2401D0
label_19f058:
    if (ctx->pc == 0x19F058u) {
        ctx->pc = 0x19F05Cu;
        goto label_19f05c;
    }
    ctx->pc = 0x19F054u;
    SET_GPR_U32(ctx, 31, 0x19F05Cu);
    ctx->pc = 0x2401D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2401D0u, 0x19F054u, 0x19F05Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F05Cu;
label_19f05c:
    // 0x19f05c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_19f060:
    if (ctx->pc == 0x19F060u) {
        ctx->pc = 0x19F064u;
        goto label_19f064;
    }
    ctx->pc = 0x19F05Cu;
    {
        const bool branch_taken_0x19f05c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f05c) {
            ctx->pc = 0x19F074u;
            goto label_19f074;
        }
    }
    ctx->pc = 0x19F064u;
label_19f064:
    // 0x19f064: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x19f064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_19f068:
    // 0x19f068: 0xc46000b0  lwc1        $f0, 0xB0($v1)
    ctx->pc = 0x19f068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19f06c:
    // 0x19f06c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x19f06cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_19f070:
    // 0x19f070: 0xe46000a8  swc1        $f0, 0xA8($v1)
    ctx->pc = 0x19f070u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 168), bits); }
label_19f074:
    // 0x19f074: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19f074u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_19f078:
    // 0x19f078: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19f078u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_19f07c:
    // 0x19f07c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x19f07cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_19f080:
    // 0x19f080: 0x3e00008  jr          $ra
label_19f084:
    if (ctx->pc == 0x19F084u) {
        ctx->pc = 0x19F088u;
        goto label_19f088;
    }
    ctx->pc = 0x19F080u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19F080u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19F088u;
label_19f088:
    // 0x19f088: 0x0  nop
    ctx->pc = 0x19f088u;
    // NOP
label_19f08c:
    // 0x19f08c: 0x0  nop
    ctx->pc = 0x19f08cu;
    // NOP
label_19f090:
    // 0x19f090: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x19f090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
label_19f094:
    // 0x19f094: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x19f094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_19f098:
    // 0x19f098: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x19f098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_19f09c:
    // 0x19f09c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x19f09cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_19f0a0:
    // 0x19f0a0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x19f0a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_19f0a4:
    // 0x19f0a4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x19f0a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_19f0a8:
    // 0x19f0a8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x19f0a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_19f0ac:
    // 0x19f0ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19f0acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_19f0b0:
    // 0x19f0b0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19f0b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_19f0b4:
    // 0x19f0b4: 0xafa400f0  sw          $a0, 0xF0($sp)
    ctx->pc = 0x19f0b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 4));
label_19f0b8:
    // 0x19f0b8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x19f0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_19f0bc:
    // 0x19f0bc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19f0bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19f0c0:
    // 0x19f0c0: 0x0  nop
    ctx->pc = 0x19f0c0u;
    // NOP
label_19f0c4:
    // 0x19f0c4: 0xe7ac00ec  swc1        $f12, 0xEC($sp)
    ctx->pc = 0x19f0c4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
label_19f0c8:
    // 0x19f0c8: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x19f0c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
label_19f0cc:
    // 0x19f0cc: 0x44846800  mtc1        $a0, $f13
    ctx->pc = 0x19f0ccu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_19f0d0:
    // 0x19f0d0: 0x0  nop
    ctx->pc = 0x19f0d0u;
    // NOP
label_19f0d4:
    // 0x19f0d4: 0xe7ad00e8  swc1        $f13, 0xE8($sp)
    ctx->pc = 0x19f0d4u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_19f0d8:
    // 0x19f0d8: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x19f0d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_19f0dc:
    // 0x19f0dc: 0xc4ac00b8  lwc1        $f12, 0xB8($a1)
    ctx->pc = 0x19f0dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_19f0e0:
    // 0x19f0e0: 0xe7ac00e4  swc1        $f12, 0xE4($sp)
    ctx->pc = 0x19f0e0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
label_19f0e4:
    // 0x19f0e4: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x19f0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_19f0e8:
    // 0x19f0e8: 0x8c4400e8  lw          $a0, 0xE8($v0)
    ctx->pc = 0x19f0e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 232)));
label_19f0ec:
    // 0x19f0ec: 0x1080005f  beqz        $a0, . + 4 + (0x5F << 2)
label_19f0f0:
    if (ctx->pc == 0x19F0F0u) {
        ctx->pc = 0x19F0F4u;
        goto label_19f0f4;
    }
    ctx->pc = 0x19F0ECu;
    {
        const bool branch_taken_0x19f0ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f0ec) {
            ctx->pc = 0x19F26Cu;
            goto label_19f26c;
        }
    }
    ctx->pc = 0x19F0F4u;
label_19f0f4:
    // 0x19f0f4: 0x8fb500f0  lw          $s5, 0xF0($sp)
    ctx->pc = 0x19f0f4u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_19f0f8:
    // 0x19f0f8: 0x8ea200e8  lw          $v0, 0xE8($s5)
    ctx->pc = 0x19f0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 232)));
label_19f0fc:
    // 0x19f0fc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x19f0fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19f100:
    // 0x19f100: 0x14440031  bne         $v0, $a0, . + 4 + (0x31 << 2)
label_19f104:
    if (ctx->pc == 0x19F104u) {
        ctx->pc = 0x19F108u;
        goto label_19f108;
    }
    ctx->pc = 0x19F100u;
    {
        const bool branch_taken_0x19f100 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x19f100) {
            ctx->pc = 0x19F1C8u;
            goto label_19f1c8;
        }
    }
    ctx->pc = 0x19F108u;
label_19f108:
    // 0x19f108: 0x8f85bb70  lw          $a1, -0x4490($gp)
    ctx->pc = 0x19f108u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_19f10c:
    // 0x19f10c: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x19f10cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
label_19f110:
    // 0x19f110: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x19f110u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_19f114:
    // 0x19f114: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x19f114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19f118:
    // 0x19f118: 0x46006842  mul.s       $f1, $f13, $f0
    ctx->pc = 0x19f118u;
    ctx->f[1] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
label_19f11c:
    // 0x19f11c: 0xc78082d0  lwc1        $f0, -0x7D30($gp)
    ctx->pc = 0x19f11cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19f120:
    // 0x19f120: 0x460008c3  div.s       $f3, $f1, $f0
    ctx->pc = 0x19f120u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_19f124:
    // 0x19f124: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x19f124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_19f128:
    // 0x19f128: 0xc46200a4  lwc1        $f2, 0xA4($v1)
    ctx->pc = 0x19f128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_19f12c:
    // 0x19f12c: 0x46031041  sub.s       $f1, $f2, $f3
    ctx->pc = 0x19f12cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
label_19f130:
    // 0x19f130: 0xe46100a4  swc1        $f1, 0xA4($v1)
    ctx->pc = 0x19f130u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 164), bits); }
label_19f134:
    // 0x19f134: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x19f134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_19f138:
    // 0x19f138: 0xc44100a4  lwc1        $f1, 0xA4($v0)
    ctx->pc = 0x19f138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19f13c:
    // 0x19f13c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x19f13cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19f140:
    // 0x19f140: 0x0  nop
    ctx->pc = 0x19f140u;
    // NOP
label_19f144:
    // 0x19f144: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x19f144u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_19f148:
    // 0x19f148: 0x45000176  bc1f        . + 4 + (0x176 << 2)
label_19f14c:
    if (ctx->pc == 0x19F14Cu) {
        ctx->pc = 0x19F150u;
        goto label_19f150;
    }
    ctx->pc = 0x19F148u;
    {
        const bool branch_taken_0x19f148 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19f148) {
            ctx->pc = 0x19F724u;
            goto label_19f724;
        }
    }
    ctx->pc = 0x19F150u;
label_19f150:
    // 0x19f150: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x19f150u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_19f154:
    // 0x19f154: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x19f154u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_19f158:
    // 0x19f158: 0xe48100ec  swc1        $f1, 0xEC($a0)
    ctx->pc = 0x19f158u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 236), bits); }
label_19f15c:
    // 0x19f15c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x19f15cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19f160:
    // 0x19f160: 0x8fb500f0  lw          $s5, 0xF0($sp)
    ctx->pc = 0x19f160u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_19f164:
    // 0x19f164: 0xe6a000a4  swc1        $f0, 0xA4($s5)
    ctx->pc = 0x19f164u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 164), bits); }
label_19f168:
    // 0x19f168: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x19f168u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_19f16c:
    // 0x19f16c: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x19f16cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_19f170:
    // 0x19f170: 0xaca400e8  sw          $a0, 0xE8($a1)
    ctx->pc = 0x19f170u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 232), GPR_U32(ctx, 4));
label_19f174:
    // 0x19f174: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x19f174u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_19f178:
    // 0x19f178: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x19f178u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19f17c:
    // 0x19f17c: 0x8f82bbec  lw          $v0, -0x4414($gp)
    ctx->pc = 0x19f17cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
label_19f180:
    // 0x19f180: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19f180u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19f184:
    // 0x19f184: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x19f184u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_19f188:
    // 0x19f188: 0x24a56198  addiu       $a1, $a1, 0x6198
    ctx->pc = 0x19f188u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24984));
label_19f18c:
    // 0x19f18c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19f18cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19f190:
    // 0x19f190: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x19f190u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_19f194:
    // 0x19f194: 0xc08f558  jal         func_23D560
label_19f198:
    if (ctx->pc == 0x19F198u) {
        ctx->pc = 0x19F19Cu;
        goto label_19f19c;
    }
    ctx->pc = 0x19F194u;
    SET_GPR_U32(ctx, 31, 0x19F19Cu);
    ctx->pc = 0x23D560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D560u, 0x19F194u, 0x19F19Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F19Cu;
label_19f19c:
    // 0x19f19c: 0x3c153f80  lui         $s5, 0x3F80
    ctx->pc = 0x19f19cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)16256 << 16));
label_19f1a0:
    // 0x19f1a0: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x19f1a0u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19f1a4:
    // 0x19f1a4: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x19f1a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
label_19f1a8:
    // 0x19f1a8: 0x27859340  addiu       $a1, $gp, -0x6CC0
    ctx->pc = 0x19f1a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939456));
label_19f1ac:
    // 0x19f1ac: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x19f1acu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_19f1b0:
    // 0x19f1b0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19f1b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19f1b4:
    // 0x19f1b4: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x19f1b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_19f1b8:
    // 0x19f1b8: 0xc08f558  jal         func_23D560
label_19f1bc:
    if (ctx->pc == 0x19F1BCu) {
        ctx->pc = 0x19F1C0u;
        goto label_19f1c0;
    }
    ctx->pc = 0x19F1B8u;
    SET_GPR_U32(ctx, 31, 0x19F1C0u);
    ctx->pc = 0x23D560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D560u, 0x19F1B8u, 0x19F1C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F1C0u;
label_19f1c0:
    // 0x19f1c0: 0x10000158  b           . + 4 + (0x158 << 2)
label_19f1c4:
    if (ctx->pc == 0x19F1C4u) {
        ctx->pc = 0x19F1C8u;
        goto label_19f1c8;
    }
    ctx->pc = 0x19F1C0u;
    {
        const bool branch_taken_0x19f1c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f1c0) {
            ctx->pc = 0x19F724u;
            goto label_19f724;
        }
    }
    ctx->pc = 0x19F1C8u;
label_19f1c8:
    // 0x19f1c8: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x19f1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_19f1cc:
    // 0x19f1cc: 0x8c6200e8  lw          $v0, 0xE8($v1)
    ctx->pc = 0x19f1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 232)));
label_19f1d0:
    // 0x19f1d0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x19f1d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_19f1d4:
    // 0x19f1d4: 0x14440153  bne         $v0, $a0, . + 4 + (0x153 << 2)
label_19f1d8:
    if (ctx->pc == 0x19F1D8u) {
        ctx->pc = 0x19F1DCu;
        goto label_19f1dc;
    }
    ctx->pc = 0x19F1D4u;
    {
        const bool branch_taken_0x19f1d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x19f1d4) {
            ctx->pc = 0x19F724u;
            goto label_19f724;
        }
    }
    ctx->pc = 0x19F1DCu;
label_19f1dc:
    // 0x19f1dc: 0x8f95bb70  lw          $s5, -0x4490($gp)
    ctx->pc = 0x19f1dcu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_19f1e0:
    // 0x19f1e0: 0xc6ac000c  lwc1        $f12, 0xC($s5)
    ctx->pc = 0x19f1e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_19f1e4:
    // 0x19f1e4: 0xc78082d0  lwc1        $f0, -0x7D30($gp)
    ctx->pc = 0x19f1e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19f1e8:
    // 0x19f1e8: 0x460060c3  div.s       $f3, $f12, $f0
    ctx->pc = 0x19f1e8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[12], ctx->f[0]); }
label_19f1ec:
    // 0x19f1ec: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x19f1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_19f1f0:
    // 0x19f1f0: 0xc44100b8  lwc1        $f1, 0xB8($v0)
    ctx->pc = 0x19f1f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19f1f4:
    // 0x19f1f4: 0x46030800  add.s       $f0, $f1, $f3
    ctx->pc = 0x19f1f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
label_19f1f8:
    // 0x19f1f8: 0xe44000b8  swc1        $f0, 0xB8($v0)
    ctx->pc = 0x19f1f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 184), bits); }
label_19f1fc:
    // 0x19f1fc: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x19f1fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_19f200:
    // 0x19f200: 0xc48200b8  lwc1        $f2, 0xB8($a0)
    ctx->pc = 0x19f200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_19f204:
    // 0x19f204: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x19f204u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_19f208:
    // 0x19f208: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x19f208u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_19f20c:
    // 0x19f20c: 0x0  nop
    ctx->pc = 0x19f20cu;
    // NOP
label_19f210:
    // 0x19f210: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x19f210u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_19f214:
    // 0x19f214: 0x45010143  bc1t        . + 4 + (0x143 << 2)
label_19f218:
    if (ctx->pc == 0x19F218u) {
        ctx->pc = 0x19F21Cu;
        goto label_19f21c;
    }
    ctx->pc = 0x19F214u;
    {
        const bool branch_taken_0x19f214 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19f214) {
            ctx->pc = 0x19F724u;
            goto label_19f724;
        }
    }
    ctx->pc = 0x19F21Cu;
label_19f21c:
    // 0x19f21c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x19f21cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_19f220:
    // 0x19f220: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19f220u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19f224:
    // 0x19f224: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x19f224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_19f228:
    // 0x19f228: 0xe46000b8  swc1        $f0, 0xB8($v1)
    ctx->pc = 0x19f228u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 184), bits); }
label_19f22c:
    // 0x19f22c: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x19f22cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
label_19f230:
    // 0x19f230: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x19f230u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19f234:
    // 0x19f234: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x19f234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_19f238:
    // 0x19f238: 0xe44c00a8  swc1        $f12, 0xA8($v0)
    ctx->pc = 0x19f238u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 168), bits); }
label_19f23c:
    // 0x19f23c: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x19f23cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_19f240:
    // 0x19f240: 0xac4000e8  sw          $zero, 0xE8($v0)
    ctx->pc = 0x19f240u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 232), GPR_U32(ctx, 0));
label_19f244:
    // 0x19f244: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x19f244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_19f248:
    // 0x19f248: 0xa04000c4  sb          $zero, 0xC4($v0)
    ctx->pc = 0x19f248u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 196), (uint8_t)GPR_U32(ctx, 0));
label_19f24c:
    // 0x19f24c: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x19f24cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_19f250:
    // 0x19f250: 0xc46d00cc  lwc1        $f13, 0xCC($v1)
    ctx->pc = 0x19f250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_19f254:
    // 0x19f254: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x19f254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_19f258:
    // 0x19f258: 0xc44c00c8  lwc1        $f12, 0xC8($v0)
    ctx->pc = 0x19f258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_19f25c:
    // 0x19f25c: 0x460d6340  add.s       $f13, $f12, $f13
    ctx->pc = 0x19f25cu;
    ctx->f[13] = FPU_ADD_S(ctx->f[12], ctx->f[13]);
label_19f260:
    // 0x19f260: 0xe44d00c8  swc1        $f13, 0xC8($v0)
    ctx->pc = 0x19f260u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 200), bits); }
label_19f264:
    // 0x19f264: 0x1000012f  b           . + 4 + (0x12F << 2)
label_19f268:
    if (ctx->pc == 0x19F268u) {
        ctx->pc = 0x19F26Cu;
        goto label_19f26c;
    }
    ctx->pc = 0x19F264u;
    {
        const bool branch_taken_0x19f264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f264) {
            ctx->pc = 0x19F724u;
            goto label_19f724;
        }
    }
    ctx->pc = 0x19F26Cu;
label_19f26c:
    // 0x19f26c: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x19f26cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_19f270:
    // 0x19f270: 0xc44c00c8  lwc1        $f12, 0xC8($v0)
    ctx->pc = 0x19f270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_19f274:
    // 0x19f274: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x19f274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_19f278:
    // 0x19f278: 0xc44d000c  lwc1        $f13, 0xC($v0)
    ctx->pc = 0x19f278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_19f27c:
    // 0x19f27c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x19f27cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_19f280:
    // 0x19f280: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x19f280u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_19f284:
    // 0x19f284: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x19f284u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19f288:
    // 0x19f288: 0x0  nop
    ctx->pc = 0x19f288u;
    // NOP
label_19f28c:
    // 0x19f28c: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x19f28cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
label_19f290:
    // 0x19f290: 0x460d635c  madd.s      $f13, $f12, $f13
    ctx->pc = 0x19f290u;
    ctx->f[13] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[12], ctx->f[13]));
label_19f294:
    // 0x19f294: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x19f294u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_19f298:
    // 0x19f298: 0xc48000a8  lwc1        $f0, 0xA8($a0)
    ctx->pc = 0x19f298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19f29c:
    // 0x19f29c: 0x460d0302  mul.s       $f12, $f0, $f13
    ctx->pc = 0x19f29cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
label_19f2a0:
    // 0x19f2a0: 0xe48c00a8  swc1        $f12, 0xA8($a0)
    ctx->pc = 0x19f2a0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 168), bits); }
label_19f2a4:
    // 0x19f2a4: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x19f2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_19f2a8:
    // 0x19f2a8: 0xc44d00a8  lwc1        $f13, 0xA8($v0)
    ctx->pc = 0x19f2a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_19f2ac:
    // 0x19f2ac: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x19f2acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_19f2b0:
    // 0x19f2b0: 0xc44c00ac  lwc1        $f12, 0xAC($v0)
    ctx->pc = 0x19f2b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_19f2b4:
    // 0x19f2b4: 0x46006007  neg.s       $f0, $f12
    ctx->pc = 0x19f2b4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[12]);
label_19f2b8:
    // 0x19f2b8: 0x46006834  c.lt.s      $f13, $f0
    ctx->pc = 0x19f2b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[13], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_19f2bc:
    // 0x19f2bc: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_19f2c0:
    if (ctx->pc == 0x19F2C0u) {
        ctx->pc = 0x19F2C4u;
        goto label_19f2c4;
    }
    ctx->pc = 0x19F2BCu;
    {
        const bool branch_taken_0x19f2bc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19f2bc) {
            ctx->pc = 0x19F2E0u;
            goto label_19f2e0;
        }
    }
    ctx->pc = 0x19F2C4u;
label_19f2c4:
    // 0x19f2c4: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x19f2c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_19f2c8:
    // 0x19f2c8: 0xc48c00ac  lwc1        $f12, 0xAC($a0)
    ctx->pc = 0x19f2c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_19f2cc:
    // 0x19f2cc: 0x46006347  neg.s       $f13, $f12
    ctx->pc = 0x19f2ccu;
    ctx->f[13] = FPU_NEG_S(ctx->f[12]);
label_19f2d0:
    // 0x19f2d0: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x19f2d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_19f2d4:
    // 0x19f2d4: 0xe4ad00a8  swc1        $f13, 0xA8($a1)
    ctx->pc = 0x19f2d4u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 168), bits); }
label_19f2d8:
    // 0x19f2d8: 0x1000000c  b           . + 4 + (0xC << 2)
label_19f2dc:
    if (ctx->pc == 0x19F2DCu) {
        ctx->pc = 0x19F2E0u;
        goto label_19f2e0;
    }
    ctx->pc = 0x19F2D8u;
    {
        const bool branch_taken_0x19f2d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f2d8) {
            ctx->pc = 0x19F30Cu;
            goto label_19f30c;
        }
    }
    ctx->pc = 0x19F2E0u;
label_19f2e0:
    // 0x19f2e0: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x19f2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_19f2e4:
    // 0x19f2e4: 0xc44100a8  lwc1        $f1, 0xA8($v0)
    ctx->pc = 0x19f2e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19f2e8:
    // 0x19f2e8: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x19f2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_19f2ec:
    // 0x19f2ec: 0xc44000ac  lwc1        $f0, 0xAC($v0)
    ctx->pc = 0x19f2ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19f2f0:
    // 0x19f2f0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x19f2f0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_19f2f4:
    // 0x19f2f4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_19f2f8:
    if (ctx->pc == 0x19F2F8u) {
        ctx->pc = 0x19F2FCu;
        goto label_19f2fc;
    }
    ctx->pc = 0x19F2F4u;
    {
        const bool branch_taken_0x19f2f4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19f2f4) {
            ctx->pc = 0x19F30Cu;
            goto label_19f30c;
        }
    }
    ctx->pc = 0x19F2FCu;
label_19f2fc:
    // 0x19f2fc: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x19f2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_19f300:
    // 0x19f300: 0xc44000ac  lwc1        $f0, 0xAC($v0)
    ctx->pc = 0x19f300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19f304:
    // 0x19f304: 0x8fb300f0  lw          $s3, 0xF0($sp)
    ctx->pc = 0x19f304u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_19f308:
    // 0x19f308: 0xe66000a8  swc1        $f0, 0xA8($s3)
    ctx->pc = 0x19f308u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 168), bits); }
label_19f30c:
    // 0x19f30c: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x19f30cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_19f310:
    // 0x19f310: 0xc44300a8  lwc1        $f3, 0xA8($v0)
    ctx->pc = 0x19f310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_19f314:
    // 0x19f314: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x19f314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_19f318:
    // 0x19f318: 0xc442000c  lwc1        $f2, 0xC($v0)
    ctx->pc = 0x19f318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_19f31c:
    // 0x19f31c: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x19f31cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_19f320:
    // 0x19f320: 0xc48100ec  lwc1        $f1, 0xEC($a0)
    ctx->pc = 0x19f320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19f324:
    // 0x19f324: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x19f324u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19f328:
    // 0x19f328: 0x0  nop
    ctx->pc = 0x19f328u;
    // NOP
label_19f32c:
    // 0x19f32c: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x19f32cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
label_19f330:
    // 0x19f330: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x19f330u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_19f334:
    // 0x19f334: 0xe48000ec  swc1        $f0, 0xEC($a0)
    ctx->pc = 0x19f334u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 236), bits); }
label_19f338:
    // 0x19f338: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x19f338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_19f33c:
    // 0x19f33c: 0xc44100a4  lwc1        $f1, 0xA4($v0)
    ctx->pc = 0x19f33cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19f340:
    // 0x19f340: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x19f340u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_19f344:
    // 0x19f344: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19f344u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19f348:
    // 0x19f348: 0x0  nop
    ctx->pc = 0x19f348u;
    // NOP
label_19f34c:
    // 0x19f34c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x19f34cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_19f350:
    // 0x19f350: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_19f354:
    if (ctx->pc == 0x19F354u) {
        ctx->pc = 0x19F358u;
        goto label_19f358;
    }
    ctx->pc = 0x19F350u;
    {
        const bool branch_taken_0x19f350 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19f350) {
            ctx->pc = 0x19F364u;
            goto label_19f364;
        }
    }
    ctx->pc = 0x19F358u;
label_19f358:
    // 0x19f358: 0x24110003  addiu       $s1, $zero, 0x3
    ctx->pc = 0x19f358u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_19f35c:
    // 0x19f35c: 0x1000000d  b           . + 4 + (0xD << 2)
label_19f360:
    if (ctx->pc == 0x19F360u) {
        ctx->pc = 0x19F364u;
        goto label_19f364;
    }
    ctx->pc = 0x19F35Cu;
    {
        const bool branch_taken_0x19f35c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f35c) {
            ctx->pc = 0x19F394u;
            goto label_19f394;
        }
    }
    ctx->pc = 0x19F364u;
label_19f364:
    // 0x19f364: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x19f364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_19f368:
    // 0x19f368: 0xc44100ec  lwc1        $f1, 0xEC($v0)
    ctx->pc = 0x19f368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19f36c:
    // 0x19f36c: 0x3c0442b4  lui         $a0, 0x42B4
    ctx->pc = 0x19f36cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17076 << 16));
label_19f370:
    // 0x19f370: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x19f370u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19f374:
    // 0x19f374: 0x0  nop
    ctx->pc = 0x19f374u;
    // NOP
label_19f378:
    // 0x19f378: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x19f378u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_19f37c:
    // 0x19f37c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_19f380:
    if (ctx->pc == 0x19F380u) {
        ctx->pc = 0x19F384u;
        goto label_19f384;
    }
    ctx->pc = 0x19F37Cu;
    {
        const bool branch_taken_0x19f37c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19f37c) {
            ctx->pc = 0x19F390u;
            goto label_19f390;
        }
    }
    ctx->pc = 0x19F384u;
label_19f384:
    // 0x19f384: 0x24110004  addiu       $s1, $zero, 0x4
    ctx->pc = 0x19f384u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_19f388:
    // 0x19f388: 0x10000002  b           . + 4 + (0x2 << 2)
label_19f38c:
    if (ctx->pc == 0x19F38Cu) {
        ctx->pc = 0x19F390u;
        goto label_19f390;
    }
    ctx->pc = 0x19F388u;
    {
        const bool branch_taken_0x19f388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f388) {
            ctx->pc = 0x19F394u;
            goto label_19f394;
        }
    }
    ctx->pc = 0x19F390u;
label_19f390:
    // 0x19f390: 0x24110005  addiu       $s1, $zero, 0x5
    ctx->pc = 0x19f390u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_19f394:
    // 0x19f394: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x19f394u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_19f398:
    // 0x19f398: 0x8c8200e4  lw          $v0, 0xE4($a0)
    ctx->pc = 0x19f398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 228)));
label_19f39c:
    // 0x19f39c: 0x12220016  beq         $s1, $v0, . + 4 + (0x16 << 2)
label_19f3a0:
    if (ctx->pc == 0x19F3A0u) {
        ctx->pc = 0x19F3A4u;
        goto label_19f3a4;
    }
    ctx->pc = 0x19F39Cu;
    {
        const bool branch_taken_0x19f39c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x19f39c) {
            ctx->pc = 0x19F3F8u;
            goto label_19f3f8;
        }
    }
    ctx->pc = 0x19F3A4u;
label_19f3a4:
    // 0x19f3a4: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x19f3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_19f3a8:
    // 0x19f3a8: 0xac5100e4  sw          $s1, 0xE4($v0)
    ctx->pc = 0x19f3a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 228), GPR_U32(ctx, 17));
label_19f3ac:
    // 0x19f3ac: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x19f3acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_19f3b0:
    // 0x19f3b0: 0xc09ac08  jal         func_26B020
label_19f3b4:
    if (ctx->pc == 0x19F3B4u) {
        ctx->pc = 0x19F3B8u;
        goto label_19f3b8;
    }
    ctx->pc = 0x19F3B0u;
    SET_GPR_U32(ctx, 31, 0x19F3B8u);
    ctx->pc = 0x26B020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B020u, 0x19F3B0u, 0x19F3B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F3B8u;
label_19f3b8:
    // 0x19f3b8: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x19f3b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_19f3bc:
    // 0x19f3bc: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x19f3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_19f3c0:
    // 0x19f3c0: 0x8c6500e4  lw          $a1, 0xE4($v1)
    ctx->pc = 0x19f3c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 228)));
label_19f3c4:
    // 0x19f3c4: 0x248700d8  addiu       $a3, $a0, 0xD8
    ctx->pc = 0x19f3c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 216));
label_19f3c8:
    // 0x19f3c8: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x19f3c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_19f3cc:
    // 0x19f3cc: 0xc068170  jal         func_1A05C0
label_19f3d0:
    if (ctx->pc == 0x19F3D0u) {
        ctx->pc = 0x19F3D4u;
        goto label_19f3d4;
    }
    ctx->pc = 0x19F3CCu;
    SET_GPR_U32(ctx, 31, 0x19F3D4u);
    ctx->pc = 0x1A05C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A05C0u, 0x19F3CCu, 0x19F3D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F3D4u;
label_19f3d4:
    // 0x19f3d4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x19f3d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_19f3d8:
    // 0x19f3d8: 0xafa400b4  sw          $a0, 0xB4($sp)
    ctx->pc = 0x19f3d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 4));
label_19f3dc:
    // 0x19f3dc: 0x8f95bcc4  lw          $s5, -0x433C($gp)
    ctx->pc = 0x19f3dcu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
label_19f3e0:
    // 0x19f3e0: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x19f3e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_19f3e4:
    // 0x19f3e4: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x19f3e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_19f3e8:
    // 0x19f3e8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x19f3e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19f3ec:
    // 0x19f3ec: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x19f3ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19f3f0:
    // 0x19f3f0: 0xc0af03c  jal         func_2BC0F0
label_19f3f4:
    if (ctx->pc == 0x19F3F4u) {
        ctx->pc = 0x19F3F8u;
        goto label_19f3f8;
    }
    ctx->pc = 0x19F3F0u;
    SET_GPR_U32(ctx, 31, 0x19F3F8u);
    ctx->pc = 0x2BC0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC0F0u, 0x19F3F0u, 0x19F3F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F3F8u;
label_19f3f8:
    // 0x19f3f8: 0x8fa600f0  lw          $a2, 0xF0($sp)
    ctx->pc = 0x19f3f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_19f3fc:
    // 0x19f3fc: 0xc4c100ec  lwc1        $f1, 0xEC($a2)
    ctx->pc = 0x19f3fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19f400:
    // 0x19f400: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x19f400u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19f404:
    // 0x19f404: 0x0  nop
    ctx->pc = 0x19f404u;
    // NOP
label_19f408:
    // 0x19f408: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x19f408u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_19f40c:
    // 0x19f40c: 0x45000009  bc1f        . + 4 + (0x9 << 2)
label_19f410:
    if (ctx->pc == 0x19F410u) {
        ctx->pc = 0x19F414u;
        goto label_19f414;
    }
    ctx->pc = 0x19F40Cu;
    {
        const bool branch_taken_0x19f40c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19f40c) {
            ctx->pc = 0x19F434u;
            goto label_19f434;
        }
    }
    ctx->pc = 0x19F414u;
label_19f414:
    // 0x19f414: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x19f414u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19f418:
    // 0x19f418: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x19f418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_19f41c:
    // 0x19f41c: 0xe44000ec  swc1        $f0, 0xEC($v0)
    ctx->pc = 0x19f41cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 236), bits); }
label_19f420:
    // 0x19f420: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x19f420u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19f424:
    // 0x19f424: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x19f424u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_19f428:
    // 0x19f428: 0xe48000a8  swc1        $f0, 0xA8($a0)
    ctx->pc = 0x19f428u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 168), bits); }
label_19f42c:
    // 0x19f42c: 0x10000010  b           . + 4 + (0x10 << 2)
label_19f430:
    if (ctx->pc == 0x19F430u) {
        ctx->pc = 0x19F434u;
        goto label_19f434;
    }
    ctx->pc = 0x19F42Cu;
    {
        const bool branch_taken_0x19f42c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f42c) {
            ctx->pc = 0x19F470u;
            goto label_19f470;
        }
    }
    ctx->pc = 0x19F434u;
label_19f434:
    // 0x19f434: 0x8fb500f0  lw          $s5, 0xF0($sp)
    ctx->pc = 0x19f434u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_19f438:
    // 0x19f438: 0xc6a100ec  lwc1        $f1, 0xEC($s5)
    ctx->pc = 0x19f438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19f43c:
    // 0x19f43c: 0x3c0242e6  lui         $v0, 0x42E6
    ctx->pc = 0x19f43cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17126 << 16));
label_19f440:
    // 0x19f440: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19f440u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19f444:
    // 0x19f444: 0x0  nop
    ctx->pc = 0x19f444u;
    // NOP
label_19f448:
    // 0x19f448: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x19f448u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_19f44c:
    // 0x19f44c: 0x45010008  bc1t        . + 4 + (0x8 << 2)
label_19f450:
    if (ctx->pc == 0x19F450u) {
        ctx->pc = 0x19F454u;
        goto label_19f454;
    }
    ctx->pc = 0x19F44Cu;
    {
        const bool branch_taken_0x19f44c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19f44c) {
            ctx->pc = 0x19F470u;
            goto label_19f470;
        }
    }
    ctx->pc = 0x19F454u;
label_19f454:
    // 0x19f454: 0x3c0442e6  lui         $a0, 0x42E6
    ctx->pc = 0x19f454u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17126 << 16));
label_19f458:
    // 0x19f458: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x19f458u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19f45c:
    // 0x19f45c: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x19f45cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_19f460:
    // 0x19f460: 0xe4a000ec  swc1        $f0, 0xEC($a1)
    ctx->pc = 0x19f460u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 236), bits); }
label_19f464:
    // 0x19f464: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x19f464u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19f468:
    // 0x19f468: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x19f468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_19f46c:
    // 0x19f46c: 0xe44000a8  swc1        $f0, 0xA8($v0)
    ctx->pc = 0x19f46cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 168), bits); }
label_19f470:
    // 0x19f470: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x19f470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_19f474:
    // 0x19f474: 0x3c0442b4  lui         $a0, 0x42B4
    ctx->pc = 0x19f474u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17076 << 16));
label_19f478:
    // 0x19f478: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x19f478u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_19f47c:
    // 0x19f47c: 0xc44000ec  lwc1        $f0, 0xEC($v0)
    ctx->pc = 0x19f47cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19f480:
    // 0x19f480: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x19f480u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_19f484:
    // 0x19f484: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x19f484u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_19f488:
    // 0x19f488: 0x8f95bb70  lw          $s5, -0x4490($gp)
    ctx->pc = 0x19f488u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_19f48c:
    // 0x19f48c: 0xc6a3000c  lwc1        $f3, 0xC($s5)
    ctx->pc = 0x19f48cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_19f490:
    // 0x19f490: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x19f490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_19f494:
    // 0x19f494: 0xc7a100e0  lwc1        $f1, 0xE0($sp)
    ctx->pc = 0x19f494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19f498:
    // 0x19f498: 0xc44000c0  lwc1        $f0, 0xC0($v0)
    ctx->pc = 0x19f498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19f49c:
    // 0x19f49c: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x19f49cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_19f4a0:
    // 0x19f4a0: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x19f4a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_19f4a4:
    // 0x19f4a4: 0xc48100b8  lwc1        $f1, 0xB8($a0)
    ctx->pc = 0x19f4a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19f4a8:
    // 0x19f4a8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x19f4a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19f4ac:
    // 0x19f4ac: 0x0  nop
    ctx->pc = 0x19f4acu;
    // NOP
label_19f4b0:
    // 0x19f4b0: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x19f4b0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
label_19f4b4:
    // 0x19f4b4: 0x4602181d  msub.s      $f0, $f3, $f2
    ctx->pc = 0x19f4b4u;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_19f4b8:
    // 0x19f4b8: 0xe48000b8  swc1        $f0, 0xB8($a0)
    ctx->pc = 0x19f4b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 184), bits); }
label_19f4bc:
    // 0x19f4bc: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x19f4bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_19f4c0:
    // 0x19f4c0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x19f4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_19f4c4:
    // 0x19f4c4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x19f4c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_19f4c8:
    // 0x19f4c8: 0xc4a000b8  lwc1        $f0, 0xB8($a1)
    ctx->pc = 0x19f4c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19f4cc:
    // 0x19f4cc: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x19f4ccu;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_19f4d0:
    // 0x19f4d0: 0xc0679ac  jal         func_19E6B0
label_19f4d4:
    if (ctx->pc == 0x19F4D4u) {
        ctx->pc = 0x19F4D8u;
        goto label_19f4d8;
    }
    ctx->pc = 0x19F4D0u;
    SET_GPR_U32(ctx, 31, 0x19F4D8u);
    ctx->pc = 0x19E6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E6B0u, 0x19F4D0u, 0x19F4D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F4D8u;
label_19f4d8:
    // 0x19f4d8: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x19f4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_19f4dc:
    // 0x19f4dc: 0xe44000a4  swc1        $f0, 0xA4($v0)
    ctx->pc = 0x19f4dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 164), bits); }
label_19f4e0:
    // 0x19f4e0: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x19f4e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_19f4e4:
    // 0x19f4e4: 0xc48100b8  lwc1        $f1, 0xB8($a0)
    ctx->pc = 0x19f4e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19f4e8:
    // 0x19f4e8: 0xc78082e4  lwc1        $f0, -0x7D1C($gp)
    ctx->pc = 0x19f4e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19f4ec:
    // 0x19f4ec: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x19f4ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_19f4f0:
    // 0x19f4f0: 0x45010009  bc1t        . + 4 + (0x9 << 2)
label_19f4f4:
    if (ctx->pc == 0x19F4F4u) {
        ctx->pc = 0x19F4F8u;
        goto label_19f4f8;
    }
    ctx->pc = 0x19F4F0u;
    {
        const bool branch_taken_0x19f4f0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19f4f0) {
            ctx->pc = 0x19F518u;
            goto label_19f518;
        }
    }
    ctx->pc = 0x19F4F8u;
label_19f4f8:
    // 0x19f4f8: 0x8fb500f0  lw          $s5, 0xF0($sp)
    ctx->pc = 0x19f4f8u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_19f4fc:
    // 0x19f4fc: 0xc6a100a4  lwc1        $f1, 0xA4($s5)
    ctx->pc = 0x19f4fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19f500:
    // 0x19f500: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x19f500u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
label_19f504:
    // 0x19f504: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19f504u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19f508:
    // 0x19f508: 0x0  nop
    ctx->pc = 0x19f508u;
    // NOP
label_19f50c:
    // 0x19f50c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x19f50cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_19f510:
    // 0x19f510: 0x45000084  bc1f        . + 4 + (0x84 << 2)
label_19f514:
    if (ctx->pc == 0x19F514u) {
        ctx->pc = 0x19F518u;
        goto label_19f518;
    }
    ctx->pc = 0x19F510u;
    {
        const bool branch_taken_0x19f510 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19f510) {
            ctx->pc = 0x19F724u;
            goto label_19f724;
        }
    }
    ctx->pc = 0x19F518u;
label_19f518:
    // 0x19f518: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x19f518u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_19f51c:
    // 0x19f51c: 0x908500c4  lbu         $a1, 0xC4($a0)
    ctx->pc = 0x19f51cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 196)));
label_19f520:
    // 0x19f520: 0x14a0004a  bnez        $a1, . + 4 + (0x4A << 2)
label_19f524:
    if (ctx->pc == 0x19F524u) {
        ctx->pc = 0x19F528u;
        goto label_19f528;
    }
    ctx->pc = 0x19F520u;
    {
        const bool branch_taken_0x19f520 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x19f520) {
            ctx->pc = 0x19F64Cu;
            goto label_19f64c;
        }
    }
    ctx->pc = 0x19F528u;
label_19f528:
    // 0x19f528: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x19f528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_19f52c:
    // 0x19f52c: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x19f52cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
label_19f530:
    // 0x19f530: 0x44866800  mtc1        $a2, $f13
    ctx->pc = 0x19f530u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_19f534:
    // 0x19f534: 0xc44c0050  lwc1        $f12, 0x50($v0)
    ctx->pc = 0x19f534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_19f538:
    // 0x19f538: 0xc0c39e2  jal         func_30E788
label_19f53c:
    if (ctx->pc == 0x19F53Cu) {
        ctx->pc = 0x19F540u;
        goto label_19f540;
    }
    ctx->pc = 0x19F538u;
    SET_GPR_U32(ctx, 31, 0x19F540u);
    ctx->pc = 0x30E788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E788u, 0x19F538u, 0x19F540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F540u;
label_19f540:
    // 0x19f540: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x19f540u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_19f544:
    // 0x19f544: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x19f544u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_19f548:
    // 0x19f548: 0x0  nop
    ctx->pc = 0x19f548u;
    // NOP
label_19f54c:
    // 0x19f54c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x19f54cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_19f550:
    // 0x19f550: 0x45000009  bc1f        . + 4 + (0x9 << 2)
label_19f554:
    if (ctx->pc == 0x19F554u) {
        ctx->pc = 0x19F558u;
        goto label_19f558;
    }
    ctx->pc = 0x19F550u;
    {
        const bool branch_taken_0x19f550 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19f550) {
            ctx->pc = 0x19F578u;
            goto label_19f578;
        }
    }
    ctx->pc = 0x19F558u;
label_19f558:
    // 0x19f558: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x19f558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_19f55c:
    // 0x19f55c: 0xc44c0050  lwc1        $f12, 0x50($v0)
    ctx->pc = 0x19f55cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_19f560:
    // 0x19f560: 0xc0c3930  jal         func_30E4C0
label_19f564:
    if (ctx->pc == 0x19F564u) {
        ctx->pc = 0x19F568u;
        goto label_19f568;
    }
    ctx->pc = 0x19F560u;
    SET_GPR_U32(ctx, 31, 0x19F568u);
    ctx->pc = 0x30E4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E4C0u, 0x19F560u, 0x19F568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F568u;
label_19f568:
    // 0x19f568: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x19f568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_19f56c:
    // 0x19f56c: 0xe4400050  swc1        $f0, 0x50($v0)
    ctx->pc = 0x19f56cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 80), bits); }
label_19f570:
    // 0x19f570: 0x10000007  b           . + 4 + (0x7 << 2)
label_19f574:
    if (ctx->pc == 0x19F574u) {
        ctx->pc = 0x19F578u;
        goto label_19f578;
    }
    ctx->pc = 0x19F570u;
    {
        const bool branch_taken_0x19f570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f570) {
            ctx->pc = 0x19F590u;
            goto label_19f590;
        }
    }
    ctx->pc = 0x19F578u;
label_19f578:
    // 0x19f578: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x19f578u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_19f57c:
    // 0x19f57c: 0xc48c0050  lwc1        $f12, 0x50($a0)
    ctx->pc = 0x19f57cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_19f580:
    // 0x19f580: 0xc0c38ba  jal         func_30E2E8
label_19f584:
    if (ctx->pc == 0x19F584u) {
        ctx->pc = 0x19F588u;
        goto label_19f588;
    }
    ctx->pc = 0x19F580u;
    SET_GPR_U32(ctx, 31, 0x19F588u);
    ctx->pc = 0x30E2E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E2E8u, 0x19F580u, 0x19F588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F588u;
label_19f588:
    // 0x19f588: 0x8fb500f0  lw          $s5, 0xF0($sp)
    ctx->pc = 0x19f588u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_19f58c:
    // 0x19f58c: 0xe6a00050  swc1        $f0, 0x50($s5)
    ctx->pc = 0x19f58cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 80), bits); }
label_19f590:
    // 0x19f590: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x19f590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_19f594:
    // 0x19f594: 0xc4400050  lwc1        $f0, 0x50($v0)
    ctx->pc = 0x19f594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19f598:
    // 0x19f598: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x19f598u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_19f59c:
    // 0x19f59c: 0xe480003c  swc1        $f0, 0x3C($a0)
    ctx->pc = 0x19f59cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 60), bits); }
label_19f5a0:
    // 0x19f5a0: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x19f5a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_19f5a4:
    // 0x19f5a4: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x19f5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_19f5a8:
    // 0x19f5a8: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x19f5a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_19f5ac:
    // 0x19f5ac: 0xc4ac00f4  lwc1        $f12, 0xF4($a1)
    ctx->pc = 0x19f5acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_19f5b0:
    // 0x19f5b0: 0xc064d10  jal         func_193440
label_19f5b4:
    if (ctx->pc == 0x19F5B4u) {
        ctx->pc = 0x19F5B8u;
        goto label_19f5b8;
    }
    ctx->pc = 0x19F5B0u;
    SET_GPR_U32(ctx, 31, 0x19F5B8u);
    ctx->pc = 0x193440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193440u, 0x19F5B0u, 0x19F5B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F5B8u;
label_19f5b8:
    // 0x19f5b8: 0x8fa600f0  lw          $a2, 0xF0($sp)
    ctx->pc = 0x19f5b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_19f5bc:
    // 0x19f5bc: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x19f5bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_19f5c0:
    // 0x19f5c0: 0x27879348  addiu       $a3, $gp, -0x6CB8
    ctx->pc = 0x19f5c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939464));
label_19f5c4:
    // 0x19f5c4: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x19f5c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_19f5c8:
    // 0x19f5c8: 0xc064d48  jal         func_193520
label_19f5cc:
    if (ctx->pc == 0x19F5CCu) {
        ctx->pc = 0x19F5D0u;
        goto label_19f5d0;
    }
    ctx->pc = 0x19F5C8u;
    SET_GPR_U32(ctx, 31, 0x19F5D0u);
    ctx->pc = 0x193520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193520u, 0x19F5C8u, 0x19F5D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F5D0u;
label_19f5d0:
    // 0x19f5d0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x19f5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_19f5d4:
    // 0x19f5d4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19f5d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19f5d8:
    // 0x19f5d8: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x19f5d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
label_19f5dc:
    // 0x19f5dc: 0x27859350  addiu       $a1, $gp, -0x6CB0
    ctx->pc = 0x19f5dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939472));
label_19f5e0:
    // 0x19f5e0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19f5e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19f5e4:
    // 0x19f5e4: 0x24150002  addiu       $s5, $zero, 0x2
    ctx->pc = 0x19f5e4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_19f5e8:
    // 0x19f5e8: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x19f5e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_19f5ec:
    // 0x19f5ec: 0xc08f558  jal         func_23D560
label_19f5f0:
    if (ctx->pc == 0x19F5F0u) {
        ctx->pc = 0x19F5F4u;
        goto label_19f5f4;
    }
    ctx->pc = 0x19F5ECu;
    SET_GPR_U32(ctx, 31, 0x19F5F4u);
    ctx->pc = 0x23D560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D560u, 0x19F5ECu, 0x19F5F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F5F4u;
label_19f5f4:
    // 0x19f5f4: 0xc7a100e0  lwc1        $f1, 0xE0($sp)
    ctx->pc = 0x19f5f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19f5f8:
    // 0x19f5f8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x19f5f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19f5fc:
    // 0x19f5fc: 0x0  nop
    ctx->pc = 0x19f5fcu;
    // NOP
label_19f600:
    // 0x19f600: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x19f600u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_19f604:
    // 0x19f604: 0x45010011  bc1t        . + 4 + (0x11 << 2)
label_19f608:
    if (ctx->pc == 0x19F608u) {
        ctx->pc = 0x19F60Cu;
        goto label_19f60c;
    }
    ctx->pc = 0x19F604u;
    {
        const bool branch_taken_0x19f604 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19f604) {
            ctx->pc = 0x19F64Cu;
            goto label_19f64c;
        }
    }
    ctx->pc = 0x19F60Cu;
label_19f60c:
    // 0x19f60c: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x19f60cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_19f610:
    // 0x19f610: 0x8c85005c  lw          $a1, 0x5C($a0)
    ctx->pc = 0x19f610u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
label_19f614:
    // 0x19f614: 0x14a0000d  bnez        $a1, . + 4 + (0xD << 2)
label_19f618:
    if (ctx->pc == 0x19F618u) {
        ctx->pc = 0x19F61Cu;
        goto label_19f61c;
    }
    ctx->pc = 0x19F614u;
    {
        const bool branch_taken_0x19f614 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x19f614) {
            ctx->pc = 0x19F64Cu;
            goto label_19f64c;
        }
    }
    ctx->pc = 0x19F61Cu;
label_19f61c:
    // 0x19f61c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x19f61cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_19f620:
    // 0x19f620: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19f620u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19f624:
    // 0x19f624: 0x8f86bbec  lw          $a2, -0x4414($gp)
    ctx->pc = 0x19f624u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
label_19f628:
    // 0x19f628: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x19f628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_19f62c:
    // 0x19f62c: 0x27879358  addiu       $a3, $gp, -0x6CA8
    ctx->pc = 0x19f62cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939480));
label_19f630:
    // 0x19f630: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x19f630u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_19f634:
    // 0x19f634: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x19f634u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19f638:
    // 0x19f638: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x19f638u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_19f63c:
    // 0x19f63c: 0xc08f558  jal         func_23D560
label_19f640:
    if (ctx->pc == 0x19F640u) {
        ctx->pc = 0x19F644u;
        goto label_19f644;
    }
    ctx->pc = 0x19F63Cu;
    SET_GPR_U32(ctx, 31, 0x19F644u);
    ctx->pc = 0x23D560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D560u, 0x19F63Cu, 0x19F644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F644u;
label_19f644:
    // 0x19f644: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x19f644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_19f648:
    // 0x19f648: 0xac62005c  sw          $v0, 0x5C($v1)
    ctx->pc = 0x19f648u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 92), GPR_U32(ctx, 2));
label_19f64c:
    // 0x19f64c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19f64cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19f650:
    // 0x19f650: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x19f650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_19f654:
    // 0x19f654: 0xac4300e8  sw          $v1, 0xE8($v0)
    ctx->pc = 0x19f654u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 232), GPR_U32(ctx, 3));
label_19f658:
    // 0x19f658: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x19f658u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_19f65c:
    // 0x19f65c: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x19f65cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_19f660:
    // 0x19f660: 0xac4300e4  sw          $v1, 0xE4($v0)
    ctx->pc = 0x19f660u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 228), GPR_U32(ctx, 3));
label_19f664:
    // 0x19f664: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x19f664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_19f668:
    // 0x19f668: 0xc09ac08  jal         func_26B020
label_19f66c:
    if (ctx->pc == 0x19F66Cu) {
        ctx->pc = 0x19F670u;
        goto label_19f670;
    }
    ctx->pc = 0x19F668u;
    SET_GPR_U32(ctx, 31, 0x19F670u);
    ctx->pc = 0x26B020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B020u, 0x19F668u, 0x19F670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F670u;
label_19f670:
    // 0x19f670: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x19f670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_19f674:
    // 0x19f674: 0x244400d8  addiu       $a0, $v0, 0xD8
    ctx->pc = 0x19f674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 216));
label_19f678:
    // 0x19f678: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x19f678u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19f67c:
    // 0x19f67c: 0xc068170  jal         func_1A05C0
label_19f680:
    if (ctx->pc == 0x19F680u) {
        ctx->pc = 0x19F684u;
        goto label_19f684;
    }
    ctx->pc = 0x19F67Cu;
    SET_GPR_U32(ctx, 31, 0x19F684u);
    ctx->pc = 0x1A05C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A05C0u, 0x19F67Cu, 0x19F684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F684u;
label_19f684:
    // 0x19f684: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x19f684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_19f688:
    // 0x19f688: 0xafa200a4  sw          $v0, 0xA4($sp)
    ctx->pc = 0x19f688u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 2));
label_19f68c:
    // 0x19f68c: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x19f68cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
label_19f690:
    // 0x19f690: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x19f690u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_19f694:
    // 0x19f694: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x19f694u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_19f698:
    // 0x19f698: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x19f698u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19f69c:
    // 0x19f69c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x19f69cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19f6a0:
    // 0x19f6a0: 0xc0af03c  jal         func_2BC0F0
label_19f6a4:
    if (ctx->pc == 0x19F6A4u) {
        ctx->pc = 0x19F6A8u;
        goto label_19f6a8;
    }
    ctx->pc = 0x19F6A0u;
    SET_GPR_U32(ctx, 31, 0x19F6A8u);
    ctx->pc = 0x2BC0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC0F0u, 0x19F6A0u, 0x19F6A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F6A8u;
label_19f6a8:
    // 0x19f6a8: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x19f6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_19f6ac:
    // 0x19f6ac: 0x244400d8  addiu       $a0, $v0, 0xD8
    ctx->pc = 0x19f6acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 216));
label_19f6b0:
    // 0x19f6b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19f6b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19f6b4:
    // 0x19f6b4: 0xc068170  jal         func_1A05C0
label_19f6b8:
    if (ctx->pc == 0x19F6B8u) {
        ctx->pc = 0x19F6BCu;
        goto label_19f6bc;
    }
    ctx->pc = 0x19F6B4u;
    SET_GPR_U32(ctx, 31, 0x19F6BCu);
    ctx->pc = 0x1A05C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A05C0u, 0x19F6B4u, 0x19F6BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F6BCu;
label_19f6bc:
    // 0x19f6bc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x19f6bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_19f6c0:
    // 0x19f6c0: 0xafa300a4  sw          $v1, 0xA4($sp)
    ctx->pc = 0x19f6c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 3));
label_19f6c4:
    // 0x19f6c4: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x19f6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
label_19f6c8:
    // 0x19f6c8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x19f6c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_19f6cc:
    // 0x19f6cc: 0x27b500a0  addiu       $s5, $sp, 0xA0
    ctx->pc = 0x19f6ccu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_19f6d0:
    // 0x19f6d0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x19f6d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_19f6d4:
    // 0x19f6d4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x19f6d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19f6d8:
    // 0x19f6d8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x19f6d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19f6dc:
    // 0x19f6dc: 0xc0af064  jal         func_2BC190
label_19f6e0:
    if (ctx->pc == 0x19F6E0u) {
        ctx->pc = 0x19F6E4u;
        goto label_19f6e4;
    }
    ctx->pc = 0x19F6DCu;
    SET_GPR_U32(ctx, 31, 0x19F6E4u);
    ctx->pc = 0x2BC190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC190u, 0x19F6DCu, 0x19F6E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F6E4u;
label_19f6e4:
    // 0x19f6e4: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x19f6e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_19f6e8:
    // 0x19f6e8: 0x24a200d8  addiu       $v0, $a1, 0xD8
    ctx->pc = 0x19f6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 216));
label_19f6ec:
    // 0x19f6ec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19f6ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19f6f0:
    // 0x19f6f0: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x19f6f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_19f6f4:
    // 0x19f6f4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x19f6f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_19f6f8:
    // 0x19f6f8: 0xc068170  jal         func_1A05C0
label_19f6fc:
    if (ctx->pc == 0x19F6FCu) {
        ctx->pc = 0x19F700u;
        goto label_19f700;
    }
    ctx->pc = 0x19F6F8u;
    SET_GPR_U32(ctx, 31, 0x19F700u);
    ctx->pc = 0x1A05C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A05C0u, 0x19F6F8u, 0x19F700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F700u;
label_19f700:
    // 0x19f700: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x19f700u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_19f704:
    // 0x19f704: 0xafa400a4  sw          $a0, 0xA4($sp)
    ctx->pc = 0x19f704u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 4));
label_19f708:
    // 0x19f708: 0x8f95bcc4  lw          $s5, -0x433C($gp)
    ctx->pc = 0x19f708u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
label_19f70c:
    // 0x19f70c: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x19f70cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_19f710:
    // 0x19f710: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x19f710u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_19f714:
    // 0x19f714: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x19f714u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19f718:
    // 0x19f718: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x19f718u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19f71c:
    // 0x19f71c: 0xc0af064  jal         func_2BC190
label_19f720:
    if (ctx->pc == 0x19F720u) {
        ctx->pc = 0x19F724u;
        goto label_19f724;
    }
    ctx->pc = 0x19F71Cu;
    SET_GPR_U32(ctx, 31, 0x19F724u);
    ctx->pc = 0x2BC190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC190u, 0x19F71Cu, 0x19F724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F724u;
label_19f724:
    // 0x19f724: 0x8f86bcc4  lw          $a2, -0x433C($gp)
    ctx->pc = 0x19f724u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
label_19f728:
    // 0x19f728: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x19f728u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_19f72c:
    // 0x19f72c: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x19f72cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_19f730:
    // 0x19f730: 0xc085538  jal         func_2154E0
label_19f734:
    if (ctx->pc == 0x19F734u) {
        ctx->pc = 0x19F738u;
        goto label_19f738;
    }
    ctx->pc = 0x19F730u;
    SET_GPR_U32(ctx, 31, 0x19F738u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x19F730u, 0x19F738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F738u;
label_19f738:
    // 0x19f738: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x19f738u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19f73c:
    // 0x19f73c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x19f73cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_19f740:
    // 0x19f740: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x19f740u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_19f744:
    // 0x19f744: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x19f744u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_19f748:
    // 0x19f748: 0x320f809  jalr        $t9
label_19f74c:
    if (ctx->pc == 0x19F74Cu) {
        ctx->pc = 0x19F750u;
        goto label_19f750;
    }
    ctx->pc = 0x19F748u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x19F750u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19F748u, 0x19F750u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19F750u;
label_19f750:
    // 0x19f750: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x19f750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_19f754:
    // 0x19f754: 0xc44100b8  lwc1        $f1, 0xB8($v0)
    ctx->pc = 0x19f754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19f758:
    // 0x19f758: 0xc7a000e4  lwc1        $f0, 0xE4($sp)
    ctx->pc = 0x19f758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19f75c:
    // 0x19f75c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x19f75cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_19f760:
    // 0x19f760: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x19f760u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
label_19f764:
    // 0x19f764: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x19f764u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_19f768:
    // 0x19f768: 0x8f95bb70  lw          $s5, -0x4490($gp)
    ctx->pc = 0x19f768u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_19f76c:
    // 0x19f76c: 0xc48100c0  lwc1        $f1, 0xC0($a0)
    ctx->pc = 0x19f76cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19f770:
    // 0x19f770: 0xc6a0000c  lwc1        $f0, 0xC($s5)
    ctx->pc = 0x19f770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19f774:
    // 0x19f774: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x19f774u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_19f778:
    // 0x19f778: 0xc7a000dc  lwc1        $f0, 0xDC($sp)
    ctx->pc = 0x19f778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19f77c:
    // 0x19f77c: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x19f77cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_19f780:
    // 0x19f780: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x19f780u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
label_19f784:
    // 0x19f784: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19f784u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19f788:
    // 0x19f788: 0x0  nop
    ctx->pc = 0x19f788u;
    // NOP
label_19f78c:
    // 0x19f78c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x19f78cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_19f790:
    // 0x19f790: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x19f790u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_19f794:
    // 0x19f794: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x19f794u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_19f798:
    // 0x19f798: 0x8f85bb70  lw          $a1, -0x4490($gp)
    ctx->pc = 0x19f798u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_19f79c:
    // 0x19f79c: 0xc48100c0  lwc1        $f1, 0xC0($a0)
    ctx->pc = 0x19f79cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19f7a0:
    // 0x19f7a0: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x19f7a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19f7a4:
    // 0x19f7a4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x19f7a4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_19f7a8:
    // 0x19f7a8: 0xc7a000dc  lwc1        $f0, 0xDC($sp)
    ctx->pc = 0x19f7a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19f7ac:
    // 0x19f7ac: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x19f7acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_19f7b0:
    // 0x19f7b0: 0x45000077  bc1f        . + 4 + (0x77 << 2)
label_19f7b4:
    if (ctx->pc == 0x19F7B4u) {
        ctx->pc = 0x19F7B8u;
        goto label_19f7b8;
    }
    ctx->pc = 0x19F7B0u;
    {
        const bool branch_taken_0x19f7b0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19f7b0) {
            ctx->pc = 0x19F990u;
            goto label_19f990;
        }
    }
    ctx->pc = 0x19F7B8u;
label_19f7b8:
    // 0x19f7b8: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x19f7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_19f7bc:
    // 0x19f7bc: 0x8c460030  lw          $a2, 0x30($v0)
    ctx->pc = 0x19f7bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_19f7c0:
    // 0x19f7c0: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x19f7c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_19f7c4:
    // 0x19f7c4: 0x3c07004e  lui         $a3, 0x4E
    ctx->pc = 0x19f7c4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)78 << 16));
label_19f7c8:
    // 0x19f7c8: 0x24e761a8  addiu       $a3, $a3, 0x61A8
    ctx->pc = 0x19f7c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 25000));
label_19f7cc:
    // 0x19f7cc: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x19f7ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_19f7d0:
    // 0x19f7d0: 0xc064ad0  jal         func_192B40
label_19f7d4:
    if (ctx->pc == 0x19F7D4u) {
        ctx->pc = 0x19F7D8u;
        goto label_19f7d8;
    }
    ctx->pc = 0x19F7D0u;
    SET_GPR_U32(ctx, 31, 0x19F7D8u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x19F7D0u, 0x19F7D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F7D8u;
label_19f7d8:
    // 0x19f7d8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x19f7d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19f7dc:
    // 0x19f7dc: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x19f7dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_19f7e0:
    // 0x19f7e0: 0x8c950030  lw          $s5, 0x30($a0)
    ctx->pc = 0x19f7e0u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_19f7e4:
    // 0x19f7e4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x19f7e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_19f7e8:
    // 0x19f7e8: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x19f7e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_19f7ec:
    // 0x19f7ec: 0x24a561b8  addiu       $a1, $a1, 0x61B8
    ctx->pc = 0x19f7ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25016));
label_19f7f0:
    // 0x19f7f0: 0xc064ad0  jal         func_192B40
label_19f7f4:
    if (ctx->pc == 0x19F7F4u) {
        ctx->pc = 0x19F7F8u;
        goto label_19f7f8;
    }
    ctx->pc = 0x19F7F0u;
    SET_GPR_U32(ctx, 31, 0x19F7F8u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x19F7F0u, 0x19F7F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F7F8u;
label_19f7f8:
    // 0x19f7f8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x19f7f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19f7fc:
    // 0x19f7fc: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x19f7fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_19f800:
    // 0x19f800: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x19f800u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_19f804:
    // 0x19f804: 0xc06479c  jal         func_191E70
label_19f808:
    if (ctx->pc == 0x19F808u) {
        ctx->pc = 0x19F80Cu;
        goto label_19f80c;
    }
    ctx->pc = 0x19F804u;
    SET_GPR_U32(ctx, 31, 0x19F80Cu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x19F804u, 0x19F80Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F80Cu;
label_19f80c:
    // 0x19f80c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x19f80cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19f810:
    // 0x19f810: 0x8fa600f0  lw          $a2, 0xF0($sp)
    ctx->pc = 0x19f810u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_19f814:
    // 0x19f814: 0x8cc70030  lw          $a3, 0x30($a2)
    ctx->pc = 0x19f814u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 48)));
label_19f818:
    // 0x19f818: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x19f818u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_19f81c:
    // 0x19f81c: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x19f81cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_19f820:
    // 0x19f820: 0x24a561c8  addiu       $a1, $a1, 0x61C8
    ctx->pc = 0x19f820u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25032));
label_19f824:
    // 0x19f824: 0xc064ad0  jal         func_192B40
label_19f828:
    if (ctx->pc == 0x19F828u) {
        ctx->pc = 0x19F82Cu;
        goto label_19f82c;
    }
    ctx->pc = 0x19F824u;
    SET_GPR_U32(ctx, 31, 0x19F82Cu);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x19F824u, 0x19F82Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F82Cu;
label_19f82c:
    // 0x19f82c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x19f82cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19f830:
    // 0x19f830: 0x3c04447a  lui         $a0, 0x447A
    ctx->pc = 0x19f830u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17530 << 16));
label_19f834:
    // 0x19f834: 0x44846800  mtc1        $a0, $f13
    ctx->pc = 0x19f834u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_19f838:
    // 0x19f838: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x19f838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_19f83c:
    // 0x19f83c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x19f83cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19f840:
    // 0x19f840: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19f840u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19f844:
    // 0x19f844: 0xc08c208  jal         func_230820
label_19f848:
    if (ctx->pc == 0x19F848u) {
        ctx->pc = 0x19F84Cu;
        goto label_19f84c;
    }
    ctx->pc = 0x19F844u;
    SET_GPR_U32(ctx, 31, 0x19F84Cu);
    ctx->pc = 0x230820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230820u, 0x19F844u, 0x19F84Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F84Cu;
label_19f84c:
    // 0x19f84c: 0x8fa700f0  lw          $a3, 0xF0($sp)
    ctx->pc = 0x19f84cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_19f850:
    // 0x19f850: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x19f850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_19f854:
    // 0x19f854: 0xc06479c  jal         func_191E70
label_19f858:
    if (ctx->pc == 0x19F858u) {
        ctx->pc = 0x19F85Cu;
        goto label_19f85c;
    }
    ctx->pc = 0x19F854u;
    SET_GPR_U32(ctx, 31, 0x19F85Cu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x19F854u, 0x19F85Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F85Cu;
label_19f85c:
    // 0x19f85c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x19f85cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19f860:
    // 0x19f860: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x19f860u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_19f864:
    // 0x19f864: 0x8c950030  lw          $s5, 0x30($a0)
    ctx->pc = 0x19f864u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_19f868:
    // 0x19f868: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x19f868u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_19f86c:
    // 0x19f86c: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x19f86cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_19f870:
    // 0x19f870: 0x24a561d8  addiu       $a1, $a1, 0x61D8
    ctx->pc = 0x19f870u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25048));
label_19f874:
    // 0x19f874: 0xc064ad0  jal         func_192B40
label_19f878:
    if (ctx->pc == 0x19F878u) {
        ctx->pc = 0x19F87Cu;
        goto label_19f87c;
    }
    ctx->pc = 0x19F874u;
    SET_GPR_U32(ctx, 31, 0x19F87Cu);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x19F874u, 0x19F87Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F87Cu;
label_19f87c:
    // 0x19f87c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x19f87cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19f880:
    // 0x19f880: 0x3c05447a  lui         $a1, 0x447A
    ctx->pc = 0x19f880u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17530 << 16));
label_19f884:
    // 0x19f884: 0x44856800  mtc1        $a1, $f13
    ctx->pc = 0x19f884u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_19f888:
    // 0x19f888: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x19f888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_19f88c:
    // 0x19f88c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x19f88cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19f890:
    // 0x19f890: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19f890u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19f894:
    // 0x19f894: 0xc08c208  jal         func_230820
label_19f898:
    if (ctx->pc == 0x19F898u) {
        ctx->pc = 0x19F89Cu;
        goto label_19f89c;
    }
    ctx->pc = 0x19F894u;
    SET_GPR_U32(ctx, 31, 0x19F89Cu);
    ctx->pc = 0x230820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230820u, 0x19F894u, 0x19F89Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F89Cu;
label_19f89c:
    // 0x19f89c: 0x8fa700f0  lw          $a3, 0xF0($sp)
    ctx->pc = 0x19f89cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_19f8a0:
    // 0x19f8a0: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x19f8a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_19f8a4:
    // 0x19f8a4: 0xc06479c  jal         func_191E70
label_19f8a8:
    if (ctx->pc == 0x19F8A8u) {
        ctx->pc = 0x19F8ACu;
        goto label_19f8ac;
    }
    ctx->pc = 0x19F8A4u;
    SET_GPR_U32(ctx, 31, 0x19F8ACu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x19F8A4u, 0x19F8ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F8ACu;
label_19f8ac:
    // 0x19f8ac: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x19f8acu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19f8b0:
    // 0x19f8b0: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x19f8b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_19f8b4:
    // 0x19f8b4: 0x8c950030  lw          $s5, 0x30($a0)
    ctx->pc = 0x19f8b4u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_19f8b8:
    // 0x19f8b8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x19f8b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_19f8bc:
    // 0x19f8bc: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x19f8bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_19f8c0:
    // 0x19f8c0: 0x24a561e8  addiu       $a1, $a1, 0x61E8
    ctx->pc = 0x19f8c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25064));
label_19f8c4:
    // 0x19f8c4: 0xc064ad0  jal         func_192B40
label_19f8c8:
    if (ctx->pc == 0x19F8C8u) {
        ctx->pc = 0x19F8CCu;
        goto label_19f8cc;
    }
    ctx->pc = 0x19F8C4u;
    SET_GPR_U32(ctx, 31, 0x19F8CCu);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x19F8C4u, 0x19F8CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F8CCu;
label_19f8cc:
    // 0x19f8cc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x19f8ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19f8d0:
    // 0x19f8d0: 0x3c05447a  lui         $a1, 0x447A
    ctx->pc = 0x19f8d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17530 << 16));
label_19f8d4:
    // 0x19f8d4: 0x44856800  mtc1        $a1, $f13
    ctx->pc = 0x19f8d4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_19f8d8:
    // 0x19f8d8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x19f8d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_19f8dc:
    // 0x19f8dc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x19f8dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19f8e0:
    // 0x19f8e0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19f8e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19f8e4:
    // 0x19f8e4: 0xc08c208  jal         func_230820
label_19f8e8:
    if (ctx->pc == 0x19F8E8u) {
        ctx->pc = 0x19F8ECu;
        goto label_19f8ec;
    }
    ctx->pc = 0x19F8E4u;
    SET_GPR_U32(ctx, 31, 0x19F8ECu);
    ctx->pc = 0x230820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230820u, 0x19F8E4u, 0x19F8ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F8ECu;
label_19f8ec:
    // 0x19f8ec: 0x8fa700f0  lw          $a3, 0xF0($sp)
    ctx->pc = 0x19f8ecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_19f8f0:
    // 0x19f8f0: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x19f8f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_19f8f4:
    // 0x19f8f4: 0xc06479c  jal         func_191E70
label_19f8f8:
    if (ctx->pc == 0x19F8F8u) {
        ctx->pc = 0x19F8FCu;
        goto label_19f8fc;
    }
    ctx->pc = 0x19F8F4u;
    SET_GPR_U32(ctx, 31, 0x19F8FCu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x19F8F4u, 0x19F8FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F8FCu;
label_19f8fc:
    // 0x19f8fc: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x19f8fcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19f900:
    // 0x19f900: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x19f900u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_19f904:
    // 0x19f904: 0x8c950030  lw          $s5, 0x30($a0)
    ctx->pc = 0x19f904u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_19f908:
    // 0x19f908: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x19f908u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_19f90c:
    // 0x19f90c: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x19f90cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_19f910:
    // 0x19f910: 0x24a561f8  addiu       $a1, $a1, 0x61F8
    ctx->pc = 0x19f910u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25080));
label_19f914:
    // 0x19f914: 0xc064ad0  jal         func_192B40
label_19f918:
    if (ctx->pc == 0x19F918u) {
        ctx->pc = 0x19F91Cu;
        goto label_19f91c;
    }
    ctx->pc = 0x19F914u;
    SET_GPR_U32(ctx, 31, 0x19F91Cu);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x19F914u, 0x19F91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F91Cu;
label_19f91c:
    // 0x19f91c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x19f91cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19f920:
    // 0x19f920: 0x3c05447a  lui         $a1, 0x447A
    ctx->pc = 0x19f920u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17530 << 16));
label_19f924:
    // 0x19f924: 0x44856800  mtc1        $a1, $f13
    ctx->pc = 0x19f924u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_19f928:
    // 0x19f928: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x19f928u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_19f92c:
    // 0x19f92c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x19f92cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19f930:
    // 0x19f930: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19f930u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19f934:
    // 0x19f934: 0xc08c208  jal         func_230820
label_19f938:
    if (ctx->pc == 0x19F938u) {
        ctx->pc = 0x19F93Cu;
        goto label_19f93c;
    }
    ctx->pc = 0x19F934u;
    SET_GPR_U32(ctx, 31, 0x19F93Cu);
    ctx->pc = 0x230820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230820u, 0x19F934u, 0x19F93Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F93Cu;
label_19f93c:
    // 0x19f93c: 0x8fa700f0  lw          $a3, 0xF0($sp)
    ctx->pc = 0x19f93cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_19f940:
    // 0x19f940: 0x8ce200e8  lw          $v0, 0xE8($a3)
    ctx->pc = 0x19f940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 232)));
label_19f944:
    // 0x19f944: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_19f948:
    if (ctx->pc == 0x19F948u) {
        ctx->pc = 0x19F94Cu;
        goto label_19f94c;
    }
    ctx->pc = 0x19F944u;
    {
        const bool branch_taken_0x19f944 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19f944) {
            ctx->pc = 0x19F974u;
            goto label_19f974;
        }
    }
    ctx->pc = 0x19F94Cu;
label_19f94c:
    // 0x19f94c: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x19f94cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_19f950:
    // 0x19f950: 0xc44300f0  lwc1        $f3, 0xF0($v0)
    ctx->pc = 0x19f950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_19f954:
    // 0x19f954: 0xc7a200dc  lwc1        $f2, 0xDC($sp)
    ctx->pc = 0x19f954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_19f958:
    // 0x19f958: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x19f958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_19f95c:
    // 0x19f95c: 0xc4610050  lwc1        $f1, 0x50($v1)
    ctx->pc = 0x19f95cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19f960:
    // 0x19f960: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x19f960u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19f964:
    // 0x19f964: 0x0  nop
    ctx->pc = 0x19f964u;
    // NOP
label_19f968:
    // 0x19f968: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x19f968u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
label_19f96c:
    // 0x19f96c: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x19f96cu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_19f970:
    // 0x19f970: 0xe4600050  swc1        $f0, 0x50($v1)
    ctx->pc = 0x19f970u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 80), bits); }
label_19f974:
    // 0x19f974: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x19f974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_19f978:
    // 0x19f978: 0x8c4400fc  lw          $a0, 0xFC($v0)
    ctx->pc = 0x19f978u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 252)));
label_19f97c:
    // 0x19f97c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19f97cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19f980:
    // 0x19f980: 0xc068160  jal         func_1A0580
label_19f984:
    if (ctx->pc == 0x19F984u) {
        ctx->pc = 0x19F988u;
        goto label_19f988;
    }
    ctx->pc = 0x19F980u;
    SET_GPR_U32(ctx, 31, 0x19F988u);
    ctx->pc = 0x1A0580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0580u, 0x19F980u, 0x19F988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F988u;
label_19f988:
    // 0x19f988: 0x1000009c  b           . + 4 + (0x9C << 2)
label_19f98c:
    if (ctx->pc == 0x19F98Cu) {
        ctx->pc = 0x19F990u;
        goto label_19f990;
    }
    ctx->pc = 0x19F988u;
    {
        const bool branch_taken_0x19f988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f988) {
            ctx->pc = 0x19FBFCu;
            goto label_19fbfc;
        }
    }
    ctx->pc = 0x19F990u;
label_19f990:
    // 0x19f990: 0xc7a100d8  lwc1        $f1, 0xD8($sp)
    ctx->pc = 0x19f990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19f994:
    // 0x19f994: 0x3c0342dc  lui         $v1, 0x42DC
    ctx->pc = 0x19f994u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17116 << 16));
label_19f998:
    // 0x19f998: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x19f998u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19f99c:
    // 0x19f99c: 0x0  nop
    ctx->pc = 0x19f99cu;
    // NOP
label_19f9a0:
    // 0x19f9a0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x19f9a0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_19f9a4:
    // 0x19f9a4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_19f9a8:
    if (ctx->pc == 0x19F9A8u) {
        ctx->pc = 0x19F9ACu;
        goto label_19f9ac;
    }
    ctx->pc = 0x19F9A4u;
    {
        const bool branch_taken_0x19f9a4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19f9a4) {
            ctx->pc = 0x19F9BCu;
            goto label_19f9bc;
        }
    }
    ctx->pc = 0x19F9ACu;
label_19f9ac:
    // 0x19f9ac: 0x3c0242dc  lui         $v0, 0x42DC
    ctx->pc = 0x19f9acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17116 << 16));
label_19f9b0:
    // 0x19f9b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19f9b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19f9b4:
    // 0x19f9b4: 0x0  nop
    ctx->pc = 0x19f9b4u;
    // NOP
label_19f9b8:
    // 0x19f9b8: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x19f9b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_19f9bc:
    // 0x19f9bc: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x19f9bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_19f9c0:
    // 0x19f9c0: 0x8c840030  lw          $a0, 0x30($a0)
    ctx->pc = 0x19f9c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_19f9c4:
    // 0x19f9c4: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x19f9c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_19f9c8:
    // 0x19f9c8: 0x24a561d8  addiu       $a1, $a1, 0x61D8
    ctx->pc = 0x19f9c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25048));
label_19f9cc:
    // 0x19f9cc: 0xc064ad0  jal         func_192B40
label_19f9d0:
    if (ctx->pc == 0x19F9D0u) {
        ctx->pc = 0x19F9D4u;
        goto label_19f9d4;
    }
    ctx->pc = 0x19F9CCu;
    SET_GPR_U32(ctx, 31, 0x19F9D4u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x19F9CCu, 0x19F9D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F9D4u;
label_19f9d4:
    // 0x19f9d4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x19f9d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19f9d8:
    // 0x19f9d8: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x19f9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_19f9dc:
    // 0x19f9dc: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x19f9dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_19f9e0:
    // 0x19f9e0: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x19f9e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_19f9e4:
    // 0x19f9e4: 0x24a561f8  addiu       $a1, $a1, 0x61F8
    ctx->pc = 0x19f9e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25080));
label_19f9e8:
    // 0x19f9e8: 0xc064ad0  jal         func_192B40
label_19f9ec:
    if (ctx->pc == 0x19F9ECu) {
        ctx->pc = 0x19F9F0u;
        goto label_19f9f0;
    }
    ctx->pc = 0x19F9E8u;
    SET_GPR_U32(ctx, 31, 0x19F9F0u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x19F9E8u, 0x19F9F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F9F0u;
label_19f9f0:
    // 0x19f9f0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x19f9f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19f9f4:
    // 0x19f9f4: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x19f9f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_19f9f8:
    // 0x19f9f8: 0xc06479c  jal         func_191E70
label_19f9fc:
    if (ctx->pc == 0x19F9FCu) {
        ctx->pc = 0x19FA00u;
        goto label_19fa00;
    }
    ctx->pc = 0x19F9F8u;
    SET_GPR_U32(ctx, 31, 0x19FA00u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x19F9F8u, 0x19FA00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FA00u;
label_19fa00:
    // 0x19fa00: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x19fa00u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19fa04:
    // 0x19fa04: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x19fa04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_19fa08:
    // 0x19fa08: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x19fa08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_19fa0c:
    // 0x19fa0c: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x19fa0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_19fa10:
    // 0x19fa10: 0x24a561a8  addiu       $a1, $a1, 0x61A8
    ctx->pc = 0x19fa10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25000));
label_19fa14:
    // 0x19fa14: 0xc064ad0  jal         func_192B40
label_19fa18:
    if (ctx->pc == 0x19FA18u) {
        ctx->pc = 0x19FA1Cu;
        goto label_19fa1c;
    }
    ctx->pc = 0x19FA14u;
    SET_GPR_U32(ctx, 31, 0x19FA1Cu);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x19FA14u, 0x19FA1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FA1Cu;
label_19fa1c:
    // 0x19fa1c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x19fa1cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19fa20:
    // 0x19fa20: 0x3c03447a  lui         $v1, 0x447A
    ctx->pc = 0x19fa20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17530 << 16));
label_19fa24:
    // 0x19fa24: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x19fa24u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_19fa28:
    // 0x19fa28: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x19fa28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_19fa2c:
    // 0x19fa2c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x19fa2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19fa30:
    // 0x19fa30: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19fa30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19fa34:
    // 0x19fa34: 0xc08c208  jal         func_230820
label_19fa38:
    if (ctx->pc == 0x19FA38u) {
        ctx->pc = 0x19FA3Cu;
        goto label_19fa3c;
    }
    ctx->pc = 0x19FA34u;
    SET_GPR_U32(ctx, 31, 0x19FA3Cu);
    ctx->pc = 0x230820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230820u, 0x19FA34u, 0x19FA3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FA3Cu;
label_19fa3c:
    // 0x19fa3c: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x19fa3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_19fa40:
    // 0x19fa40: 0xc06479c  jal         func_191E70
label_19fa44:
    if (ctx->pc == 0x19FA44u) {
        ctx->pc = 0x19FA48u;
        goto label_19fa48;
    }
    ctx->pc = 0x19FA40u;
    SET_GPR_U32(ctx, 31, 0x19FA48u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x19FA40u, 0x19FA48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FA48u;
label_19fa48:
    // 0x19fa48: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x19fa48u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19fa4c:
    // 0x19fa4c: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x19fa4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_19fa50:
    // 0x19fa50: 0x8c850030  lw          $a1, 0x30($a0)
    ctx->pc = 0x19fa50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_19fa54:
    // 0x19fa54: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x19fa54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_19fa58:
    // 0x19fa58: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x19fa58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_19fa5c:
    // 0x19fa5c: 0x24a561c8  addiu       $a1, $a1, 0x61C8
    ctx->pc = 0x19fa5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25032));
label_19fa60:
    // 0x19fa60: 0xc064ad0  jal         func_192B40
label_19fa64:
    if (ctx->pc == 0x19FA64u) {
        ctx->pc = 0x19FA68u;
        goto label_19fa68;
    }
    ctx->pc = 0x19FA60u;
    SET_GPR_U32(ctx, 31, 0x19FA68u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x19FA60u, 0x19FA68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FA68u;
label_19fa68:
    // 0x19fa68: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x19fa68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19fa6c:
    // 0x19fa6c: 0x3c05447a  lui         $a1, 0x447A
    ctx->pc = 0x19fa6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17530 << 16));
label_19fa70:
    // 0x19fa70: 0x44856800  mtc1        $a1, $f13
    ctx->pc = 0x19fa70u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_19fa74:
    // 0x19fa74: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x19fa74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_19fa78:
    // 0x19fa78: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x19fa78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19fa7c:
    // 0x19fa7c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19fa7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19fa80:
    // 0x19fa80: 0xc08c208  jal         func_230820
label_19fa84:
    if (ctx->pc == 0x19FA84u) {
        ctx->pc = 0x19FA88u;
        goto label_19fa88;
    }
    ctx->pc = 0x19FA80u;
    SET_GPR_U32(ctx, 31, 0x19FA88u);
    ctx->pc = 0x230820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230820u, 0x19FA80u, 0x19FA88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FA88u;
label_19fa88:
    // 0x19fa88: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x19fa88u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19fa8c:
    // 0x19fa8c: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x19fa8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_19fa90:
    // 0x19fa90: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19fa90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19fa94:
    // 0x19fa94: 0xc06479c  jal         func_191E70
label_19fa98:
    if (ctx->pc == 0x19FA98u) {
        ctx->pc = 0x19FA9Cu;
        goto label_19fa9c;
    }
    ctx->pc = 0x19FA94u;
    SET_GPR_U32(ctx, 31, 0x19FA9Cu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x19FA94u, 0x19FA9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FA9Cu;
label_19fa9c:
    // 0x19fa9c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x19fa9cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19faa0:
    // 0x19faa0: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x19faa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_19faa4:
    // 0x19faa4: 0x8c850030  lw          $a1, 0x30($a0)
    ctx->pc = 0x19faa4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_19faa8:
    // 0x19faa8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x19faa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_19faac:
    // 0x19faac: 0x3c07004e  lui         $a3, 0x4E
    ctx->pc = 0x19faacu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)78 << 16));
label_19fab0:
    // 0x19fab0: 0x24e761b8  addiu       $a3, $a3, 0x61B8
    ctx->pc = 0x19fab0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 25016));
label_19fab4:
    // 0x19fab4: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x19fab4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_19fab8:
    // 0x19fab8: 0xc064ad0  jal         func_192B40
label_19fabc:
    if (ctx->pc == 0x19FABCu) {
        ctx->pc = 0x19FAC0u;
        goto label_19fac0;
    }
    ctx->pc = 0x19FAB8u;
    SET_GPR_U32(ctx, 31, 0x19FAC0u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x19FAB8u, 0x19FAC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FAC0u;
label_19fac0:
    // 0x19fac0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x19fac0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19fac4:
    // 0x19fac4: 0x3c03447a  lui         $v1, 0x447A
    ctx->pc = 0x19fac4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17530 << 16));
label_19fac8:
    // 0x19fac8: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x19fac8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_19facc:
    // 0x19facc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x19faccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_19fad0:
    // 0x19fad0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x19fad0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19fad4:
    // 0x19fad4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19fad4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19fad8:
    // 0x19fad8: 0xc08c208  jal         func_230820
label_19fadc:
    if (ctx->pc == 0x19FADCu) {
        ctx->pc = 0x19FAE0u;
        goto label_19fae0;
    }
    ctx->pc = 0x19FAD8u;
    SET_GPR_U32(ctx, 31, 0x19FAE0u);
    ctx->pc = 0x230820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230820u, 0x19FAD8u, 0x19FAE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FAE0u;
label_19fae0:
    // 0x19fae0: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x19fae0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_19fae4:
    // 0x19fae4: 0xc06479c  jal         func_191E70
label_19fae8:
    if (ctx->pc == 0x19FAE8u) {
        ctx->pc = 0x19FAECu;
        goto label_19faec;
    }
    ctx->pc = 0x19FAE4u;
    SET_GPR_U32(ctx, 31, 0x19FAECu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x19FAE4u, 0x19FAECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FAECu;
label_19faec:
    // 0x19faec: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x19faecu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19faf0:
    // 0x19faf0: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x19faf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_19faf4:
    // 0x19faf4: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x19faf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_19faf8:
    // 0x19faf8: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x19faf8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_19fafc:
    // 0x19fafc: 0x24a561e8  addiu       $a1, $a1, 0x61E8
    ctx->pc = 0x19fafcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25064));
label_19fb00:
    // 0x19fb00: 0xc064ad0  jal         func_192B40
label_19fb04:
    if (ctx->pc == 0x19FB04u) {
        ctx->pc = 0x19FB08u;
        goto label_19fb08;
    }
    ctx->pc = 0x19FB00u;
    SET_GPR_U32(ctx, 31, 0x19FB08u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x19FB00u, 0x19FB08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FB08u;
label_19fb08:
    // 0x19fb08: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x19fb08u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19fb0c:
    // 0x19fb0c: 0x3c03447a  lui         $v1, 0x447A
    ctx->pc = 0x19fb0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17530 << 16));
label_19fb10:
    // 0x19fb10: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x19fb10u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_19fb14:
    // 0x19fb14: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x19fb14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_19fb18:
    // 0x19fb18: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x19fb18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19fb1c:
    // 0x19fb1c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19fb1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19fb20:
    // 0x19fb20: 0xc08c208  jal         func_230820
label_19fb24:
    if (ctx->pc == 0x19FB24u) {
        ctx->pc = 0x19FB28u;
        goto label_19fb28;
    }
    ctx->pc = 0x19FB20u;
    SET_GPR_U32(ctx, 31, 0x19FB28u);
    ctx->pc = 0x230820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230820u, 0x19FB20u, 0x19FB28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FB28u;
label_19fb28:
    // 0x19fb28: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x19fb28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_19fb2c:
    // 0x19fb2c: 0x8c4200e8  lw          $v0, 0xE8($v0)
    ctx->pc = 0x19fb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 232)));
label_19fb30:
    // 0x19fb30: 0x14400032  bnez        $v0, . + 4 + (0x32 << 2)
label_19fb34:
    if (ctx->pc == 0x19FB34u) {
        ctx->pc = 0x19FB38u;
        goto label_19fb38;
    }
    ctx->pc = 0x19FB30u;
    {
        const bool branch_taken_0x19fb30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19fb30) {
            ctx->pc = 0x19FBFCu;
            goto label_19fbfc;
        }
    }
    ctx->pc = 0x19FB38u;
label_19fb38:
    // 0x19fb38: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19fb38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19fb3c:
    // 0x19fb3c: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x19fb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_19fb40:
    // 0x19fb40: 0xa04300c4  sb          $v1, 0xC4($v0)
    ctx->pc = 0x19fb40u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 196), (uint8_t)GPR_U32(ctx, 3));
label_19fb44:
    // 0x19fb44: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x19fb44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_19fb48:
    // 0x19fb48: 0xc44300f0  lwc1        $f3, 0xF0($v0)
    ctx->pc = 0x19fb48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_19fb4c:
    // 0x19fb4c: 0xc7a200dc  lwc1        $f2, 0xDC($sp)
    ctx->pc = 0x19fb4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_19fb50:
    // 0x19fb50: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x19fb50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_19fb54:
    // 0x19fb54: 0xc4410050  lwc1        $f1, 0x50($v0)
    ctx->pc = 0x19fb54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19fb58:
    // 0x19fb58: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x19fb58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19fb5c:
    // 0x19fb5c: 0x0  nop
    ctx->pc = 0x19fb5cu;
    // NOP
label_19fb60:
    // 0x19fb60: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x19fb60u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
label_19fb64:
    // 0x19fb64: 0x4602181d  msub.s      $f0, $f3, $f2
    ctx->pc = 0x19fb64u;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_19fb68:
    // 0x19fb68: 0xe4400050  swc1        $f0, 0x50($v0)
    ctx->pc = 0x19fb68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 80), bits); }
label_19fb6c:
    // 0x19fb6c: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x19fb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_19fb70:
    // 0x19fb70: 0x8c4400fc  lw          $a0, 0xFC($v0)
    ctx->pc = 0x19fb70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 252)));
label_19fb74:
    // 0x19fb74: 0xc068158  jal         func_1A0560
label_19fb78:
    if (ctx->pc == 0x19FB78u) {
        ctx->pc = 0x19FB7Cu;
        goto label_19fb7c;
    }
    ctx->pc = 0x19FB74u;
    SET_GPR_U32(ctx, 31, 0x19FB7Cu);
    ctx->pc = 0x1A0560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0560u, 0x19FB74u, 0x19FB7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FB7Cu;
label_19fb7c:
    // 0x19fb7c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_19fb80:
    if (ctx->pc == 0x19FB80u) {
        ctx->pc = 0x19FB84u;
        goto label_19fb84;
    }
    ctx->pc = 0x19FB7Cu;
    {
        const bool branch_taken_0x19fb7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19fb7c) {
            ctx->pc = 0x19FB98u;
            goto label_19fb98;
        }
    }
    ctx->pc = 0x19FB84u;
label_19fb84:
    // 0x19fb84: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x19fb84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_19fb88:
    // 0x19fb88: 0x8c4400fc  lw          $a0, 0xFC($v0)
    ctx->pc = 0x19fb88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 252)));
label_19fb8c:
    // 0x19fb8c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x19fb8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19fb90:
    // 0x19fb90: 0xc0a62ec  jal         func_298BB0
label_19fb94:
    if (ctx->pc == 0x19FB94u) {
        ctx->pc = 0x19FB98u;
        goto label_19fb98;
    }
    ctx->pc = 0x19FB90u;
    SET_GPR_U32(ctx, 31, 0x19FB98u);
    ctx->pc = 0x298BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298BB0u, 0x19FB90u, 0x19FB98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FB98u;
label_19fb98:
    // 0x19fb98: 0xc7a100d8  lwc1        $f1, 0xD8($sp)
    ctx->pc = 0x19fb98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19fb9c:
    // 0x19fb9c: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x19fb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
label_19fba0:
    // 0x19fba0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19fba0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19fba4:
    // 0x19fba4: 0x0  nop
    ctx->pc = 0x19fba4u;
    // NOP
label_19fba8:
    // 0x19fba8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x19fba8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_19fbac:
    // 0x19fbac: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x19fbacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_19fbb0:
    // 0x19fbb0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19fbb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19fbb4:
    // 0x19fbb4: 0x0  nop
    ctx->pc = 0x19fbb4u;
    // NOP
label_19fbb8:
    // 0x19fbb8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x19fbb8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_19fbbc:
    // 0x19fbbc: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_19fbc0:
    if (ctx->pc == 0x19FBC0u) {
        ctx->pc = 0x19FBC4u;
        goto label_19fbc4;
    }
    ctx->pc = 0x19FBBCu;
    {
        const bool branch_taken_0x19fbbc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19fbbc) {
            ctx->pc = 0x19FBD4u;
            goto label_19fbd4;
        }
    }
    ctx->pc = 0x19FBC4u;
label_19fbc4:
    // 0x19fbc4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x19fbc4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_19fbc8:
    // 0x19fbc8: 0x44130800  mfc1        $s3, $f1
    ctx->pc = 0x19fbc8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 19, bits); }
label_19fbcc:
    // 0x19fbcc: 0x10000006  b           . + 4 + (0x6 << 2)
label_19fbd0:
    if (ctx->pc == 0x19FBD0u) {
        ctx->pc = 0x19FBD4u;
        goto label_19fbd4;
    }
    ctx->pc = 0x19FBCCu;
    {
        const bool branch_taken_0x19fbcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19fbcc) {
            ctx->pc = 0x19FBE8u;
            goto label_19fbe8;
        }
    }
    ctx->pc = 0x19FBD4u;
label_19fbd4:
    // 0x19fbd4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x19fbd4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_19fbd8:
    // 0x19fbd8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x19fbd8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_19fbdc:
    // 0x19fbdc: 0x44130800  mfc1        $s3, $f1
    ctx->pc = 0x19fbdcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 19, bits); }
label_19fbe0:
    // 0x19fbe0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x19fbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_19fbe4:
    // 0x19fbe4: 0x2629825  or          $s3, $s3, $v0
    ctx->pc = 0x19fbe4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
label_19fbe8:
    // 0x19fbe8: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x19fbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_19fbec:
    // 0x19fbec: 0x8c4400fc  lw          $a0, 0xFC($v0)
    ctx->pc = 0x19fbecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 252)));
label_19fbf0:
    // 0x19fbf0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x19fbf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_19fbf4:
    // 0x19fbf4: 0xc068160  jal         func_1A0580
label_19fbf8:
    if (ctx->pc == 0x19FBF8u) {
        ctx->pc = 0x19FBFCu;
        goto label_19fbfc;
    }
    ctx->pc = 0x19FBF4u;
    SET_GPR_U32(ctx, 31, 0x19FBFCu);
    ctx->pc = 0x1A0580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0580u, 0x19FBF4u, 0x19FBFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FBFCu;
label_19fbfc:
    // 0x19fbfc: 0xc7a100d8  lwc1        $f1, 0xD8($sp)
    ctx->pc = 0x19fbfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19fc00:
    // 0x19fc00: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x19fc00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19fc04:
    // 0x19fc04: 0x0  nop
    ctx->pc = 0x19fc04u;
    // NOP
label_19fc08:
    // 0x19fc08: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x19fc08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_19fc0c:
    // 0x19fc0c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_19fc10:
    if (ctx->pc == 0x19FC10u) {
        ctx->pc = 0x19FC14u;
        goto label_19fc14;
    }
    ctx->pc = 0x19FC0Cu;
    {
        const bool branch_taken_0x19fc0c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19fc0c) {
            ctx->pc = 0x19FC20u;
            goto label_19fc20;
        }
    }
    ctx->pc = 0x19FC14u;
label_19fc14:
    // 0x19fc14: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x19fc14u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19fc18:
    // 0x19fc18: 0x0  nop
    ctx->pc = 0x19fc18u;
    // NOP
label_19fc1c:
    // 0x19fc1c: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x19fc1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_19fc20:
    // 0x19fc20: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x19fc20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_19fc24:
    // 0x19fc24: 0x3c1142b4  lui         $s1, 0x42B4
    ctx->pc = 0x19fc24u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)17076 << 16));
label_19fc28:
    // 0x19fc28: 0x44910800  mtc1        $s1, $f1
    ctx->pc = 0x19fc28u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_19fc2c:
    // 0x19fc2c: 0xc44000a4  lwc1        $f0, 0xA4($v0)
    ctx->pc = 0x19fc2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19fc30:
    // 0x19fc30: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x19fc30u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_19fc34:
    // 0x19fc34: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x19fc34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_19fc38:
    // 0x19fc38: 0xc7a300d4  lwc1        $f3, 0xD4($sp)
    ctx->pc = 0x19fc38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_19fc3c:
    // 0x19fc3c: 0xc7a200ec  lwc1        $f2, 0xEC($sp)
    ctx->pc = 0x19fc3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_19fc40:
    // 0x19fc40: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x19fc40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_19fc44:
    // 0x19fc44: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x19fc44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_19fc48:
    // 0x19fc48: 0xc7a000d4  lwc1        $f0, 0xD4($sp)
    ctx->pc = 0x19fc48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19fc4c:
    // 0x19fc4c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x19fc4cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_19fc50:
    // 0x19fc50: 0xc7a000e8  lwc1        $f0, 0xE8($sp)
    ctx->pc = 0x19fc50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19fc54:
    // 0x19fc54: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x19fc54u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_19fc58:
    // 0x19fc58: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x19fc58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19fc5c:
    // 0x19fc5c: 0x0  nop
    ctx->pc = 0x19fc5cu;
    // NOP
label_19fc60:
    // 0x19fc60: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x19fc60u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
label_19fc64:
    // 0x19fc64: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x19fc64u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_19fc68:
    // 0x19fc68: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x19fc68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_19fc6c:
    // 0x19fc6c: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x19fc6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_19fc70:
    // 0x19fc70: 0xc06479c  jal         func_191E70
label_19fc74:
    if (ctx->pc == 0x19FC74u) {
        ctx->pc = 0x19FC78u;
        goto label_19fc78;
    }
    ctx->pc = 0x19FC70u;
    SET_GPR_U32(ctx, 31, 0x19FC78u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x19FC70u, 0x19FC78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FC78u;
label_19fc78:
    // 0x19fc78: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x19fc78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19fc7c:
    // 0x19fc7c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x19fc7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19fc80:
    // 0x19fc80: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x19fc80u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_19fc84:
    // 0x19fc84: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19fc84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19fc88:
    // 0x19fc88: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19fc88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19fc8c:
    // 0x19fc8c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19fc8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19fc90:
    // 0x19fc90: 0xc08c208  jal         func_230820
label_19fc94:
    if (ctx->pc == 0x19FC94u) {
        ctx->pc = 0x19FC98u;
        goto label_19fc98;
    }
    ctx->pc = 0x19FC90u;
    SET_GPR_U32(ctx, 31, 0x19FC98u);
    ctx->pc = 0x230820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230820u, 0x19FC90u, 0x19FC98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FC98u;
label_19fc98:
    // 0x19fc98: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x19fc98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19fc9c:
    // 0x19fc9c: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x19fc9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_19fca0:
    // 0x19fca0: 0xc06479c  jal         func_191E70
label_19fca4:
    if (ctx->pc == 0x19FCA4u) {
        ctx->pc = 0x19FCA8u;
        goto label_19fca8;
    }
    ctx->pc = 0x19FCA0u;
    SET_GPR_U32(ctx, 31, 0x19FCA8u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x19FCA0u, 0x19FCA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FCA8u;
label_19fca8:
    // 0x19fca8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x19fca8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19fcac:
    // 0x19fcac: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x19fcacu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_19fcb0:
    // 0x19fcb0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19fcb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19fcb4:
    // 0x19fcb4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x19fcb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_19fcb8:
    // 0x19fcb8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19fcb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19fcbc:
    // 0x19fcbc: 0xc08c208  jal         func_230820
label_19fcc0:
    if (ctx->pc == 0x19FCC0u) {
        ctx->pc = 0x19FCC4u;
        goto label_19fcc4;
    }
    ctx->pc = 0x19FCBCu;
    SET_GPR_U32(ctx, 31, 0x19FCC4u);
    ctx->pc = 0x230820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230820u, 0x19FCBCu, 0x19FCC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FCC4u;
label_19fcc4:
    // 0x19fcc4: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x19fcc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_19fcc8:
    // 0x19fcc8: 0xc06479c  jal         func_191E70
label_19fccc:
    if (ctx->pc == 0x19FCCCu) {
        ctx->pc = 0x19FCD0u;
        goto label_19fcd0;
    }
    ctx->pc = 0x19FCC8u;
    SET_GPR_U32(ctx, 31, 0x19FCD0u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x19FCC8u, 0x19FCD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FCD0u;
label_19fcd0:
    // 0x19fcd0: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x19fcd0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
label_19fcd4:
    // 0x19fcd4: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x19fcd4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19fcd8:
    // 0x19fcd8: 0xc7a100e8  lwc1        $f1, 0xE8($sp)
    ctx->pc = 0x19fcd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19fcdc:
    // 0x19fcdc: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x19fcdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19fce0:
    // 0x19fce0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x19fce0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_19fce4:
    // 0x19fce4: 0xc7a000e8  lwc1        $f0, 0xE8($sp)
    ctx->pc = 0x19fce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19fce8:
    // 0x19fce8: 0x460008c3  div.s       $f3, $f1, $f0
    ctx->pc = 0x19fce8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_19fcec:
    // 0x19fcec: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x19fcecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_19fcf0:
    // 0x19fcf0: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x19fcf0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_19fcf4:
    // 0x19fcf4: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x19fcf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_19fcf8:
    // 0x19fcf8: 0xc4a100b8  lwc1        $f1, 0xB8($a1)
    ctx->pc = 0x19fcf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19fcfc:
    // 0x19fcfc: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x19fcfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19fd00:
    // 0x19fd00: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x19fd00u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_19fd04:
    // 0x19fd04: 0xc7a000e8  lwc1        $f0, 0xE8($sp)
    ctx->pc = 0x19fd04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19fd08:
    // 0x19fd08: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x19fd08u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_19fd0c:
    // 0x19fd0c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x19fd0cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19fd10:
    // 0x19fd10: 0x0  nop
    ctx->pc = 0x19fd10u;
    // NOP
label_19fd14:
    // 0x19fd14: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x19fd14u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
label_19fd18:
    // 0x19fd18: 0x4603135c  madd.s      $f13, $f2, $f3
    ctx->pc = 0x19fd18u;
    ctx->f[13] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_19fd1c:
    // 0x19fd1c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19fd1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19fd20:
    // 0x19fd20: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19fd20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19fd24:
    // 0x19fd24: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19fd24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19fd28:
    // 0x19fd28: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x19fd28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19fd2c:
    // 0x19fd2c: 0xc08c544  jal         func_231510
label_19fd30:
    if (ctx->pc == 0x19FD30u) {
        ctx->pc = 0x19FD34u;
        goto label_19fd34;
    }
    ctx->pc = 0x19FD2Cu;
    SET_GPR_U32(ctx, 31, 0x19FD34u);
    ctx->pc = 0x231510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231510u, 0x19FD2Cu, 0x19FD34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FD34u;
label_19fd34:
    // 0x19fd34: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x19fd34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_19fd38:
    // 0x19fd38: 0xc06479c  jal         func_191E70
label_19fd3c:
    if (ctx->pc == 0x19FD3Cu) {
        ctx->pc = 0x19FD40u;
        goto label_19fd40;
    }
    ctx->pc = 0x19FD38u;
    SET_GPR_U32(ctx, 31, 0x19FD40u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x19FD38u, 0x19FD40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FD40u;
label_19fd40:
    // 0x19fd40: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x19fd40u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19fd44:
    // 0x19fd44: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x19fd44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_19fd48:
    // 0x19fd48: 0x8c850030  lw          $a1, 0x30($a0)
    ctx->pc = 0x19fd48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_19fd4c:
    // 0x19fd4c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x19fd4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_19fd50:
    // 0x19fd50: 0x3c06004e  lui         $a2, 0x4E
    ctx->pc = 0x19fd50u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)78 << 16));
label_19fd54:
    // 0x19fd54: 0x24c66210  addiu       $a2, $a2, 0x6210
    ctx->pc = 0x19fd54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 25104));
label_19fd58:
    // 0x19fd58: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x19fd58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_19fd5c:
    // 0x19fd5c: 0xc064ad0  jal         func_192B40
label_19fd60:
    if (ctx->pc == 0x19FD60u) {
        ctx->pc = 0x19FD64u;
        goto label_19fd64;
    }
    ctx->pc = 0x19FD5Cu;
    SET_GPR_U32(ctx, 31, 0x19FD64u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x19FD5Cu, 0x19FD64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FD64u;
label_19fd64:
    // 0x19fd64: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x19fd64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_19fd68:
    // 0x19fd68: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x19fd68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19fd6c:
    // 0x19fd6c: 0x27a60098  addiu       $a2, $sp, 0x98
    ctx->pc = 0x19fd6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
label_19fd70:
    // 0x19fd70: 0xc08c704  jal         func_231C10
label_19fd74:
    if (ctx->pc == 0x19FD74u) {
        ctx->pc = 0x19FD78u;
        goto label_19fd78;
    }
    ctx->pc = 0x19FD70u;
    SET_GPR_U32(ctx, 31, 0x19FD78u);
    ctx->pc = 0x231C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231C10u, 0x19FD70u, 0x19FD78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FD78u;
label_19fd78:
    // 0x19fd78: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x19fd78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_19fd7c:
    // 0x19fd7c: 0xc06479c  jal         func_191E70
label_19fd80:
    if (ctx->pc == 0x19FD80u) {
        ctx->pc = 0x19FD84u;
        goto label_19fd84;
    }
    ctx->pc = 0x19FD7Cu;
    SET_GPR_U32(ctx, 31, 0x19FD84u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x19FD7Cu, 0x19FD84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FD84u;
label_19fd84:
    // 0x19fd84: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x19fd84u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19fd88:
    // 0x19fd88: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x19fd88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_19fd8c:
    // 0x19fd8c: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x19fd8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_19fd90:
    // 0x19fd90: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x19fd90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_19fd94:
    // 0x19fd94: 0x24a56210  addiu       $a1, $a1, 0x6210
    ctx->pc = 0x19fd94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25104));
label_19fd98:
    // 0x19fd98: 0xc064ad0  jal         func_192B40
label_19fd9c:
    if (ctx->pc == 0x19FD9Cu) {
        ctx->pc = 0x19FDA0u;
        goto label_19fda0;
    }
    ctx->pc = 0x19FD98u;
    SET_GPR_U32(ctx, 31, 0x19FDA0u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x19FD98u, 0x19FDA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FDA0u;
label_19fda0:
    // 0x19fda0: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x19fda0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19fda4:
    // 0x19fda4: 0x46000307  neg.s       $f12, $f0
    ctx->pc = 0x19fda4u;
    ctx->f[12] = FPU_NEG_S(ctx->f[0]);
label_19fda8:
    // 0x19fda8: 0xc7a0009c  lwc1        $f0, 0x9C($sp)
    ctx->pc = 0x19fda8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19fdac:
    // 0x19fdac: 0x46000347  neg.s       $f13, $f0
    ctx->pc = 0x19fdacu;
    ctx->f[13] = FPU_NEG_S(ctx->f[0]);
label_19fdb0:
    // 0x19fdb0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x19fdb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_19fdb4:
    // 0x19fdb4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x19fdb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19fdb8:
    // 0x19fdb8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19fdb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19fdbc:
    // 0x19fdbc: 0xc08c208  jal         func_230820
label_19fdc0:
    if (ctx->pc == 0x19FDC0u) {
        ctx->pc = 0x19FDC4u;
        goto label_19fdc4;
    }
    ctx->pc = 0x19FDBCu;
    SET_GPR_U32(ctx, 31, 0x19FDC4u);
    ctx->pc = 0x230820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230820u, 0x19FDBCu, 0x19FDC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FDC4u;
label_19fdc4:
    // 0x19fdc4: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x19fdc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_19fdc8:
    // 0x19fdc8: 0xc06479c  jal         func_191E70
label_19fdcc:
    if (ctx->pc == 0x19FDCCu) {
        ctx->pc = 0x19FDD0u;
        goto label_19fdd0;
    }
    ctx->pc = 0x19FDC8u;
    SET_GPR_U32(ctx, 31, 0x19FDD0u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x19FDC8u, 0x19FDD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FDD0u;
label_19fdd0:
    // 0x19fdd0: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x19fdd0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19fdd4:
    // 0x19fdd4: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x19fdd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_19fdd8:
    // 0x19fdd8: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x19fdd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_19fddc:
    // 0x19fddc: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x19fddcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_19fde0:
    // 0x19fde0: 0x24a56220  addiu       $a1, $a1, 0x6220
    ctx->pc = 0x19fde0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25120));
label_19fde4:
    // 0x19fde4: 0xc064ad0  jal         func_192B40
label_19fde8:
    if (ctx->pc == 0x19FDE8u) {
        ctx->pc = 0x19FDECu;
        goto label_19fdec;
    }
    ctx->pc = 0x19FDE4u;
    SET_GPR_U32(ctx, 31, 0x19FDECu);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x19FDE4u, 0x19FDECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FDECu;
label_19fdec:
    // 0x19fdec: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x19fdecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19fdf0:
    // 0x19fdf0: 0x46000307  neg.s       $f12, $f0
    ctx->pc = 0x19fdf0u;
    ctx->f[12] = FPU_NEG_S(ctx->f[0]);
label_19fdf4:
    // 0x19fdf4: 0xc7a0009c  lwc1        $f0, 0x9C($sp)
    ctx->pc = 0x19fdf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19fdf8:
    // 0x19fdf8: 0x46000347  neg.s       $f13, $f0
    ctx->pc = 0x19fdf8u;
    ctx->f[13] = FPU_NEG_S(ctx->f[0]);
label_19fdfc:
    // 0x19fdfc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x19fdfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_19fe00:
    // 0x19fe00: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x19fe00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19fe04:
    // 0x19fe04: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19fe04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19fe08:
    // 0x19fe08: 0xc08c208  jal         func_230820
label_19fe0c:
    if (ctx->pc == 0x19FE0Cu) {
        ctx->pc = 0x19FE10u;
        goto label_19fe10;
    }
    ctx->pc = 0x19FE08u;
    SET_GPR_U32(ctx, 31, 0x19FE10u);
    ctx->pc = 0x230820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230820u, 0x19FE08u, 0x19FE10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FE10u;
label_19fe10:
    // 0x19fe10: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x19fe10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_19fe14:
    // 0x19fe14: 0xc06479c  jal         func_191E70
label_19fe18:
    if (ctx->pc == 0x19FE18u) {
        ctx->pc = 0x19FE1Cu;
        goto label_19fe1c;
    }
    ctx->pc = 0x19FE14u;
    SET_GPR_U32(ctx, 31, 0x19FE1Cu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x19FE14u, 0x19FE1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FE1Cu;
label_19fe1c:
    // 0x19fe1c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x19fe1cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19fe20:
    // 0x19fe20: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x19fe20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_19fe24:
    // 0x19fe24: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x19fe24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_19fe28:
    // 0x19fe28: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x19fe28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_19fe2c:
    // 0x19fe2c: 0x24a56210  addiu       $a1, $a1, 0x6210
    ctx->pc = 0x19fe2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25104));
label_19fe30:
    // 0x19fe30: 0xc064ad0  jal         func_192B40
label_19fe34:
    if (ctx->pc == 0x19FE34u) {
        ctx->pc = 0x19FE38u;
        goto label_19fe38;
    }
    ctx->pc = 0x19FE30u;
    SET_GPR_U32(ctx, 31, 0x19FE38u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x19FE30u, 0x19FE38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FE38u;
label_19fe38:
    // 0x19fe38: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x19fe38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_19fe3c:
    // 0x19fe3c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x19fe3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19fe40:
    // 0x19fe40: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x19fe40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_19fe44:
    // 0x19fe44: 0xc08c6c8  jal         func_231B20
label_19fe48:
    if (ctx->pc == 0x19FE48u) {
        ctx->pc = 0x19FE4Cu;
        goto label_19fe4c;
    }
    ctx->pc = 0x19FE44u;
    SET_GPR_U32(ctx, 31, 0x19FE4Cu);
    ctx->pc = 0x231B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231B20u, 0x19FE44u, 0x19FE4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FE4Cu;
label_19fe4c:
    // 0x19fe4c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x19fe4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_19fe50:
    // 0x19fe50: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x19fe50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_19fe54:
    // 0x19fe54: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x19fe54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19fe58:
    // 0x19fe58: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x19fe58u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_19fe5c:
    // 0x19fe5c: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x19fe5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_19fe60:
    // 0x19fe60: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x19fe60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_19fe64:
    // 0x19fe64: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x19fe64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_19fe68:
    // 0x19fe68: 0xc7a00094  lwc1        $f0, 0x94($sp)
    ctx->pc = 0x19fe68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19fe6c:
    // 0x19fe6c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x19fe6cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_19fe70:
    // 0x19fe70: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x19fe70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_19fe74:
    // 0x19fe74: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x19fe74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_19fe78:
    // 0x19fe78: 0xc06479c  jal         func_191E70
label_19fe7c:
    if (ctx->pc == 0x19FE7Cu) {
        ctx->pc = 0x19FE80u;
        goto label_19fe80;
    }
    ctx->pc = 0x19FE78u;
    SET_GPR_U32(ctx, 31, 0x19FE80u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x19FE78u, 0x19FE80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FE80u;
label_19fe80:
    // 0x19fe80: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x19fe80u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19fe84:
    // 0x19fe84: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x19fe84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_19fe88:
    // 0x19fe88: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x19fe88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_19fe8c:
    // 0x19fe8c: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x19fe8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_19fe90:
    // 0x19fe90: 0x24a56210  addiu       $a1, $a1, 0x6210
    ctx->pc = 0x19fe90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25104));
label_19fe94:
    // 0x19fe94: 0xc064ad0  jal         func_192B40
label_19fe98:
    if (ctx->pc == 0x19FE98u) {
        ctx->pc = 0x19FE9Cu;
        goto label_19fe9c;
    }
    ctx->pc = 0x19FE94u;
    SET_GPR_U32(ctx, 31, 0x19FE9Cu);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x19FE94u, 0x19FE9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FE9Cu;
label_19fe9c:
    // 0x19fe9c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x19fe9cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19fea0:
    // 0x19fea0: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x19fea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_19fea4:
    // 0x19fea4: 0xc44000a4  lwc1        $f0, 0xA4($v0)
    ctx->pc = 0x19fea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19fea8:
    // 0x19fea8: 0x46000307  neg.s       $f12, $f0
    ctx->pc = 0x19fea8u;
    ctx->f[12] = FPU_NEG_S(ctx->f[0]);
label_19feac:
    // 0x19feac: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x19feacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_19feb0:
    // 0x19feb0: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x19feb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_19feb4:
    // 0x19feb4: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x19feb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_19feb8:
    // 0x19feb8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x19feb8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19febc:
    // 0x19febc: 0xc08c64c  jal         func_231930
label_19fec0:
    if (ctx->pc == 0x19FEC0u) {
        ctx->pc = 0x19FEC4u;
        goto label_19fec4;
    }
    ctx->pc = 0x19FEBCu;
    SET_GPR_U32(ctx, 31, 0x19FEC4u);
    ctx->pc = 0x231930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231930u, 0x19FEBCu, 0x19FEC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FEC4u;
label_19fec4:
    // 0x19fec4: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x19fec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_19fec8:
    // 0x19fec8: 0xc44300d0  lwc1        $f3, 0xD0($v0)
    ctx->pc = 0x19fec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_19fecc:
    // 0x19fecc: 0xc78282d8  lwc1        $f2, -0x7D28($gp)
    ctx->pc = 0x19feccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_19fed0:
    // 0x19fed0: 0xc7818288  lwc1        $f1, -0x7D78($gp)
    ctx->pc = 0x19fed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19fed4:
    // 0x19fed4: 0xc7a000d8  lwc1        $f0, 0xD8($sp)
    ctx->pc = 0x19fed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19fed8:
    // 0x19fed8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x19fed8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_19fedc:
    // 0x19fedc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x19fedcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19fee0:
    // 0x19fee0: 0x0  nop
    ctx->pc = 0x19fee0u;
    // NOP
label_19fee4:
    // 0x19fee4: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x19fee4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
label_19fee8:
    // 0x19fee8: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x19fee8u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_19feec:
    // 0x19feec: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x19feecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
label_19fef0:
    // 0x19fef0: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x19fef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19fef4:
    // 0x19fef4: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x19fef4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_19fef8:
    // 0x19fef8: 0xe48000d0  swc1        $f0, 0xD0($a0)
    ctx->pc = 0x19fef8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 208), bits); }
label_19fefc:
    // 0x19fefc: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x19fefcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_19ff00:
    // 0x19ff00: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x19ff00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_19ff04:
    // 0x19ff04: 0xc06479c  jal         func_191E70
label_19ff08:
    if (ctx->pc == 0x19FF08u) {
        ctx->pc = 0x19FF0Cu;
        goto label_19ff0c;
    }
    ctx->pc = 0x19FF04u;
    SET_GPR_U32(ctx, 31, 0x19FF0Cu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x19FF04u, 0x19FF0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FF0Cu;
label_19ff0c:
    // 0x19ff0c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x19ff0cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19ff10:
    // 0x19ff10: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x19ff10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_19ff14:
    // 0x19ff14: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x19ff14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_19ff18:
    // 0x19ff18: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x19ff18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_19ff1c:
    // 0x19ff1c: 0x24a56220  addiu       $a1, $a1, 0x6220
    ctx->pc = 0x19ff1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25120));
label_19ff20:
    // 0x19ff20: 0xc064ad0  jal         func_192B40
label_19ff24:
    if (ctx->pc == 0x19FF24u) {
        ctx->pc = 0x19FF28u;
        goto label_19ff28;
    }
    ctx->pc = 0x19FF20u;
    SET_GPR_U32(ctx, 31, 0x19FF28u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x19FF20u, 0x19FF28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FF28u;
label_19ff28:
    // 0x19ff28: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x19ff28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19ff2c:
    // 0x19ff2c: 0x46000307  neg.s       $f12, $f0
    ctx->pc = 0x19ff2cu;
    ctx->f[12] = FPU_NEG_S(ctx->f[0]);
label_19ff30:
    // 0x19ff30: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x19ff30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_19ff34:
    // 0x19ff34: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x19ff34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19ff38:
    // 0x19ff38: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x19ff38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_19ff3c:
    // 0x19ff3c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x19ff3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19ff40:
    // 0x19ff40: 0xc08c64c  jal         func_231930
label_19ff44:
    if (ctx->pc == 0x19FF44u) {
        ctx->pc = 0x19FF48u;
        goto label_19ff48;
    }
    ctx->pc = 0x19FF40u;
    SET_GPR_U32(ctx, 31, 0x19FF48u);
    ctx->pc = 0x231930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231930u, 0x19FF40u, 0x19FF48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FF48u;
label_19ff48:
    // 0x19ff48: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x19ff48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19ff4c:
    // 0x19ff4c: 0x8fa700f0  lw          $a3, 0xF0($sp)
    ctx->pc = 0x19ff4cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_19ff50:
    // 0x19ff50: 0xc4e100a4  lwc1        $f1, 0xA4($a3)
    ctx->pc = 0x19ff50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19ff54:
    // 0x19ff54: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x19ff54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
label_19ff58:
    // 0x19ff58: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19ff58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19ff5c:
    // 0x19ff5c: 0x0  nop
    ctx->pc = 0x19ff5cu;
    // NOP
label_19ff60:
    // 0x19ff60: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x19ff60u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_19ff64:
    // 0x19ff64: 0x3c0342b4  lui         $v1, 0x42B4
    ctx->pc = 0x19ff64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17076 << 16));
label_19ff68:
    // 0x19ff68: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x19ff68u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19ff6c:
    // 0x19ff6c: 0x0  nop
    ctx->pc = 0x19ff6cu;
    // NOP
label_19ff70:
    // 0x19ff70: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x19ff70u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_19ff74:
    // 0x19ff74: 0x0  nop
    ctx->pc = 0x19ff74u;
    // NOP
label_19ff78:
    // 0x19ff78: 0x0  nop
    ctx->pc = 0x19ff78u;
    // NOP
label_19ff7c:
    // 0x19ff7c: 0x0  nop
    ctx->pc = 0x19ff7cu;
    // NOP
label_19ff80:
    // 0x19ff80: 0xc0c3926  jal         func_30E498
label_19ff84:
    if (ctx->pc == 0x19FF84u) {
        ctx->pc = 0x19FF88u;
        goto label_19ff88;
    }
    ctx->pc = 0x19FF80u;
    SET_GPR_U32(ctx, 31, 0x19FF88u);
    ctx->pc = 0x30E498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E498u, 0x19FF80u, 0x19FF88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FF88u;
label_19ff88:
    // 0x19ff88: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x19ff88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_19ff8c:
    // 0x19ff8c: 0x8f83bb80  lw          $v1, -0x4480($gp)
    ctx->pc = 0x19ff8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
label_19ff90:
    // 0x19ff90: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x19ff90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_19ff94:
    // 0x19ff94: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_19ff98:
    if (ctx->pc == 0x19FF98u) {
        ctx->pc = 0x19FF9Cu;
        goto label_19ff9c;
    }
    ctx->pc = 0x19FF94u;
    {
        const bool branch_taken_0x19ff94 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x19ff94) {
            ctx->pc = 0x19FFB0u;
            goto label_19ffb0;
        }
    }
    ctx->pc = 0x19FF9Cu;
label_19ff9c:
    // 0x19ff9c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19ff9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19ffa0:
    // 0x19ffa0: 0x0  nop
    ctx->pc = 0x19ffa0u;
    // NOP
label_19ffa4:
    // 0x19ffa4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x19ffa4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_19ffa8:
    // 0x19ffa8: 0x10000008  b           . + 4 + (0x8 << 2)
label_19ffac:
    if (ctx->pc == 0x19FFACu) {
        ctx->pc = 0x19FFB0u;
        goto label_19ffb0;
    }
    ctx->pc = 0x19FFA8u;
    {
        const bool branch_taken_0x19ffa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ffa8) {
            ctx->pc = 0x19FFCCu;
            goto label_19ffcc;
        }
    }
    ctx->pc = 0x19FFB0u;
label_19ffb0:
    // 0x19ffb0: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x19ffb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_19ffb4:
    // 0x19ffb4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19ffb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_19ffb8:
    // 0x19ffb8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x19ffb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_19ffbc:
    // 0x19ffbc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x19ffbcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19ffc0:
    // 0x19ffc0: 0x0  nop
    ctx->pc = 0x19ffc0u;
    // NOP
label_19ffc4:
    // 0x19ffc4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x19ffc4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_19ffc8:
    // 0x19ffc8: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x19ffc8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_19ffcc:
    // 0x19ffcc: 0x3c0443e0  lui         $a0, 0x43E0
    ctx->pc = 0x19ffccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17376 << 16));
label_19ffd0:
    // 0x19ffd0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x19ffd0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19ffd4:
    // 0x19ffd4: 0x0  nop
    ctx->pc = 0x19ffd4u;
    // NOP
label_19ffd8:
    // 0x19ffd8: 0x46010082  mul.s       $f2, $f0, $f1
    ctx->pc = 0x19ffd8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_19ffdc:
    // 0x19ffdc: 0x8f82bb80  lw          $v0, -0x4480($gp)
    ctx->pc = 0x19ffdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
label_19ffe0:
    // 0x19ffe0: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x19ffe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_19ffe4:
    // 0x19ffe4: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_19ffe8:
    if (ctx->pc == 0x19FFE8u) {
        ctx->pc = 0x19FFECu;
        goto label_19ffec;
    }
    ctx->pc = 0x19FFE4u;
    {
        const bool branch_taken_0x19ffe4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x19ffe4) {
            ctx->pc = 0x1A0000u;
            goto label_1a0000;
        }
    }
    ctx->pc = 0x19FFECu;
label_19ffec:
    // 0x19ffec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19ffecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19fff0:
    // 0x19fff0: 0x0  nop
    ctx->pc = 0x19fff0u;
    // NOP
label_19fff4:
    // 0x19fff4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x19fff4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_19fff8:
    // 0x19fff8: 0x10000008  b           . + 4 + (0x8 << 2)
label_19fffc:
    if (ctx->pc == 0x19FFFCu) {
        ctx->pc = 0x1A0000u;
        goto label_1a0000;
    }
    ctx->pc = 0x19FFF8u;
    {
        const bool branch_taken_0x19fff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19fff8) {
            ctx->pc = 0x1A001Cu;
            goto label_1a001c;
        }
    }
    ctx->pc = 0x1A0000u;
label_1a0000:
    // 0x1a0000: 0x22042  srl         $a0, $v0, 1
    ctx->pc = 0x1a0000u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_1a0004:
    // 0x1a0004: 0x30450001  andi        $a1, $v0, 0x1
    ctx->pc = 0x1a0004u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1a0008:
    // 0x1a0008: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x1a0008u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_1a000c:
    // 0x1a000c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1a000cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a0010:
    // 0x1a0010: 0x0  nop
    ctx->pc = 0x1a0010u;
    // NOP
label_1a0014:
    // 0x1a0014: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1a0014u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1a0018:
    // 0x1a0018: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1a0018u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1a001c:
    // 0x1a001c: 0x3c024420  lui         $v0, 0x4420
    ctx->pc = 0x1a001cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17440 << 16));
label_1a0020:
    // 0x1a0020: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a0020u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a0024:
    // 0x1a0024: 0x0  nop
    ctx->pc = 0x1a0024u;
    // NOP
label_1a0028:
    // 0x1a0028: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1a0028u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1a002c:
    // 0x1a002c: 0x46001043  div.s       $f1, $f2, $f0
    ctx->pc = 0x1a002cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
label_1a0030:
    // 0x1a0030: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1a0030u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1a0034:
    // 0x1a0034: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a0034u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a0038:
    // 0x1a0038: 0x0  nop
    ctx->pc = 0x1a0038u;
    // NOP
label_1a003c:
    // 0x1a003c: 0x46010101  sub.s       $f4, $f0, $f1
    ctx->pc = 0x1a003cu;
    ctx->f[4] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1a0040:
    // 0x1a0040: 0xc7a300c8  lwc1        $f3, 0xC8($sp)
    ctx->pc = 0x1a0040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1a0044:
    // 0x1a0044: 0x8f82bb80  lw          $v0, -0x4480($gp)
    ctx->pc = 0x1a0044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
label_1a0048:
    // 0x1a0048: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x1a0048u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1a004c:
    // 0x1a004c: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
label_1a0050:
    if (ctx->pc == 0x1A0050u) {
        ctx->pc = 0x1A0054u;
        goto label_1a0054;
    }
    ctx->pc = 0x1A004Cu;
    {
        const bool branch_taken_0x1a004c = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x1a004c) {
            ctx->pc = 0x1A0068u;
            goto label_1a0068;
        }
    }
    ctx->pc = 0x1A0054u;
label_1a0054:
    // 0x1a0054: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1a0054u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a0058:
    // 0x1a0058: 0x0  nop
    ctx->pc = 0x1a0058u;
    // NOP
label_1a005c:
    // 0x1a005c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1a005cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1a0060:
    // 0x1a0060: 0x10000008  b           . + 4 + (0x8 << 2)
label_1a0064:
    if (ctx->pc == 0x1A0064u) {
        ctx->pc = 0x1A0068u;
        goto label_1a0068;
    }
    ctx->pc = 0x1A0060u;
    {
        const bool branch_taken_0x1a0060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0060) {
            ctx->pc = 0x1A0084u;
            goto label_1a0084;
        }
    }
    ctx->pc = 0x1A0068u;
label_1a0068:
    // 0x1a0068: 0x42842  srl         $a1, $a0, 1
    ctx->pc = 0x1a0068u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
label_1a006c:
    // 0x1a006c: 0x30860001  andi        $a2, $a0, 0x1
    ctx->pc = 0x1a006cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_1a0070:
    // 0x1a0070: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x1a0070u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
label_1a0074:
    // 0x1a0074: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1a0074u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a0078:
    // 0x1a0078: 0x0  nop
    ctx->pc = 0x1a0078u;
    // NOP
label_1a007c:
    // 0x1a007c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1a007cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1a0080:
    // 0x1a0080: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1a0080u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1a0084:
    // 0x1a0084: 0x3c0243e0  lui         $v0, 0x43E0
    ctx->pc = 0x1a0084u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17376 << 16));
label_1a0088:
    // 0x1a0088: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a0088u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a008c:
    // 0x1a008c: 0x0  nop
    ctx->pc = 0x1a008cu;
    // NOP
label_1a0090:
    // 0x1a0090: 0x46010082  mul.s       $f2, $f0, $f1
    ctx->pc = 0x1a0090u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1a0094:
    // 0x1a0094: 0x8f82bb80  lw          $v0, -0x4480($gp)
    ctx->pc = 0x1a0094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
label_1a0098:
    // 0x1a0098: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x1a0098u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_1a009c:
    // 0x1a009c: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
label_1a00a0:
    if (ctx->pc == 0x1A00A0u) {
        ctx->pc = 0x1A00A4u;
        goto label_1a00a4;
    }
    ctx->pc = 0x1A009Cu;
    {
        const bool branch_taken_0x1a009c = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x1a009c) {
            ctx->pc = 0x1A00B8u;
            goto label_1a00b8;
        }
    }
    ctx->pc = 0x1A00A4u;
label_1a00a4:
    // 0x1a00a4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1a00a4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a00a8:
    // 0x1a00a8: 0x0  nop
    ctx->pc = 0x1a00a8u;
    // NOP
label_1a00ac:
    // 0x1a00ac: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1a00acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1a00b0:
    // 0x1a00b0: 0x10000008  b           . + 4 + (0x8 << 2)
label_1a00b4:
    if (ctx->pc == 0x1A00B4u) {
        ctx->pc = 0x1A00B8u;
        goto label_1a00b8;
    }
    ctx->pc = 0x1A00B0u;
    {
        const bool branch_taken_0x1a00b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a00b0) {
            ctx->pc = 0x1A00D4u;
            goto label_1a00d4;
        }
    }
    ctx->pc = 0x1A00B8u;
label_1a00b8:
    // 0x1a00b8: 0x41042  srl         $v0, $a0, 1
    ctx->pc = 0x1a00b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
label_1a00bc:
    // 0x1a00bc: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x1a00bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_1a00c0:
    // 0x1a00c0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1a00c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1a00c4:
    // 0x1a00c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a00c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a00c8:
    // 0x1a00c8: 0x0  nop
    ctx->pc = 0x1a00c8u;
    // NOP
label_1a00cc:
    // 0x1a00cc: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1a00ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1a00d0:
    // 0x1a00d0: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1a00d0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1a00d4:
    // 0x1a00d4: 0x3c024420  lui         $v0, 0x4420
    ctx->pc = 0x1a00d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17440 << 16));
label_1a00d8:
    // 0x1a00d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a00d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a00dc:
    // 0x1a00dc: 0x0  nop
    ctx->pc = 0x1a00dcu;
    // NOP
label_1a00e0:
    // 0x1a00e0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1a00e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1a00e4:
    // 0x1a00e4: 0x46001043  div.s       $f1, $f2, $f0
    ctx->pc = 0x1a00e4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
label_1a00e8:
    // 0x1a00e8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a00e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a00ec:
    // 0x1a00ec: 0x0  nop
    ctx->pc = 0x1a00ecu;
    // NOP
label_1a00f0:
    // 0x1a00f0: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1a00f0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
label_1a00f4:
    // 0x1a00f4: 0x4604181c  madd.s      $f0, $f3, $f4
    ctx->pc = 0x1a00f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[4]));
label_1a00f8:
    // 0x1a00f8: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x1a00f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_1a00fc:
    // 0x1a00fc: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x1a00fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1a0100:
    // 0x1a0100: 0xc06479c  jal         func_191E70
label_1a0104:
    if (ctx->pc == 0x1A0104u) {
        ctx->pc = 0x1A0108u;
        goto label_1a0108;
    }
    ctx->pc = 0x1A0100u;
    SET_GPR_U32(ctx, 31, 0x1A0108u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1A0100u, 0x1A0108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0108u;
label_1a0108:
    // 0x1a0108: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1a0108u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a010c:
    // 0x1a010c: 0x8fa600f0  lw          $a2, 0xF0($sp)
    ctx->pc = 0x1a010cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1a0110:
    // 0x1a0110: 0x8cc20030  lw          $v0, 0x30($a2)
    ctx->pc = 0x1a0110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 48)));
label_1a0114:
    // 0x1a0114: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a0114u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a0118:
    // 0x1a0118: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1a0118u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_1a011c:
    // 0x1a011c: 0x24a56210  addiu       $a1, $a1, 0x6210
    ctx->pc = 0x1a011cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25104));
label_1a0120:
    // 0x1a0120: 0xc064ad0  jal         func_192B40
label_1a0124:
    if (ctx->pc == 0x1A0124u) {
        ctx->pc = 0x1A0128u;
        goto label_1a0128;
    }
    ctx->pc = 0x1A0120u;
    SET_GPR_U32(ctx, 31, 0x1A0128u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1A0120u, 0x1A0128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0128u;
label_1a0128:
    // 0x1a0128: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a0128u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1a012c:
    // 0x1a012c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1a012cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a0130:
    // 0x1a0130: 0xc7ac0098  lwc1        $f12, 0x98($sp)
    ctx->pc = 0x1a0130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1a0134:
    // 0x1a0134: 0xc7ad009c  lwc1        $f13, 0x9C($sp)
    ctx->pc = 0x1a0134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1a0138:
    // 0x1a0138: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1a0138u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a013c:
    // 0x1a013c: 0xc08c208  jal         func_230820
label_1a0140:
    if (ctx->pc == 0x1A0140u) {
        ctx->pc = 0x1A0144u;
        goto label_1a0144;
    }
    ctx->pc = 0x1A013Cu;
    SET_GPR_U32(ctx, 31, 0x1A0144u);
    ctx->pc = 0x230820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230820u, 0x1A013Cu, 0x1A0144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0144u;
label_1a0144:
    // 0x1a0144: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x1a0144u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1a0148:
    // 0x1a0148: 0xc06479c  jal         func_191E70
label_1a014c:
    if (ctx->pc == 0x1A014Cu) {
        ctx->pc = 0x1A0150u;
        goto label_1a0150;
    }
    ctx->pc = 0x1A0148u;
    SET_GPR_U32(ctx, 31, 0x1A0150u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1A0148u, 0x1A0150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0150u;
label_1a0150:
    // 0x1a0150: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1a0150u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a0154:
    // 0x1a0154: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x1a0154u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1a0158:
    // 0x1a0158: 0x8c850030  lw          $a1, 0x30($a0)
    ctx->pc = 0x1a0158u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_1a015c:
    // 0x1a015c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1a015cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a0160:
    // 0x1a0160: 0x3c06004e  lui         $a2, 0x4E
    ctx->pc = 0x1a0160u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)78 << 16));
label_1a0164:
    // 0x1a0164: 0x24c66220  addiu       $a2, $a2, 0x6220
    ctx->pc = 0x1a0164u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 25120));
label_1a0168:
    // 0x1a0168: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1a0168u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1a016c:
    // 0x1a016c: 0xc064ad0  jal         func_192B40
label_1a0170:
    if (ctx->pc == 0x1A0170u) {
        ctx->pc = 0x1A0174u;
        goto label_1a0174;
    }
    ctx->pc = 0x1A016Cu;
    SET_GPR_U32(ctx, 31, 0x1A0174u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1A016Cu, 0x1A0174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0174u;
label_1a0174:
    // 0x1a0174: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a0174u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1a0178:
    // 0x1a0178: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1a0178u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a017c:
    // 0x1a017c: 0xc7ac0098  lwc1        $f12, 0x98($sp)
    ctx->pc = 0x1a017cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1a0180:
    // 0x1a0180: 0xc7ad009c  lwc1        $f13, 0x9C($sp)
    ctx->pc = 0x1a0180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1a0184:
    // 0x1a0184: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1a0184u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a0188:
    // 0x1a0188: 0xc08c208  jal         func_230820
label_1a018c:
    if (ctx->pc == 0x1A018Cu) {
        ctx->pc = 0x1A0190u;
        goto label_1a0190;
    }
    ctx->pc = 0x1A0188u;
    SET_GPR_U32(ctx, 31, 0x1A0190u);
    ctx->pc = 0x230820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230820u, 0x1A0188u, 0x1A0190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0190u;
label_1a0190:
    // 0x1a0190: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a0190u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a0194:
    // 0x1a0194: 0x8f85bb70  lw          $a1, -0x4490($gp)
    ctx->pc = 0x1a0194u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_1a0198:
    // 0x1a0198: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x1a0198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a019c:
    // 0x1a019c: 0xc781baf4  lwc1        $f1, -0x450C($gp)
    ctx->pc = 0x1a019cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294949620)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a01a0:
    // 0x1a01a0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1a01a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1a01a4:
    // 0x1a01a4: 0xe780baf4  swc1        $f0, -0x450C($gp)
    ctx->pc = 0x1a01a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294949620), bits); }
label_1a01a8:
    // 0x1a01a8: 0xc78382e8  lwc1        $f3, -0x7D18($gp)
    ctx->pc = 0x1a01a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1a01ac:
    // 0x1a01ac: 0xc7a200cc  lwc1        $f2, 0xCC($sp)
    ctx->pc = 0x1a01acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a01b0:
    // 0x1a01b0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1a01b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1a01b4:
    // 0x1a01b4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a01b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a01b8:
    // 0x1a01b8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a01b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a01bc:
    // 0x1a01bc: 0x0  nop
    ctx->pc = 0x1a01bcu;
    // NOP
label_1a01c0:
    // 0x1a01c0: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1a01c0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
label_1a01c4:
    // 0x1a01c4: 0x4602185c  madd.s      $f1, $f3, $f2
    ctx->pc = 0x1a01c4u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_1a01c8:
    // 0x1a01c8: 0xe7a100c0  swc1        $f1, 0xC0($sp)
    ctx->pc = 0x1a01c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_1a01cc:
    // 0x1a01cc: 0xc7a100cc  lwc1        $f1, 0xCC($sp)
    ctx->pc = 0x1a01ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a01d0:
    // 0x1a01d0: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x1a01d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
label_1a01d4:
    // 0x1a01d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a01d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a01d8:
    // 0x1a01d8: 0x0  nop
    ctx->pc = 0x1a01d8u;
    // NOP
label_1a01dc:
    // 0x1a01dc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1a01dcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a01e0:
    // 0x1a01e0: 0x4501000e  bc1t        . + 4 + (0xE << 2)
label_1a01e4:
    if (ctx->pc == 0x1A01E4u) {
        ctx->pc = 0x1A01E8u;
        goto label_1a01e8;
    }
    ctx->pc = 0x1A01E0u;
    {
        const bool branch_taken_0x1a01e0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a01e0) {
            ctx->pc = 0x1A021Cu;
            goto label_1a021c;
        }
    }
    ctx->pc = 0x1A01E8u;
label_1a01e8:
    // 0x1a01e8: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x1a01e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
label_1a01ec:
    // 0x1a01ec: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a01ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a01f0:
    // 0x1a01f0: 0xc780baf4  lwc1        $f0, -0x450C($gp)
    ctx->pc = 0x1a01f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294949620)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a01f4:
    // 0x1a01f4: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x1a01f4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
label_1a01f8:
    // 0x1a01f8: 0xc0c3966  jal         func_30E598
label_1a01fc:
    if (ctx->pc == 0x1A01FCu) {
        ctx->pc = 0x1A0200u;
        goto label_1a0200;
    }
    ctx->pc = 0x1A01F8u;
    SET_GPR_U32(ctx, 31, 0x1A0200u);
    ctx->pc = 0x30E598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E598u, 0x1A01F8u, 0x1A0200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0200u;
label_1a0200:
    // 0x1a0200: 0xc78382e4  lwc1        $f3, -0x7D1C($gp)
    ctx->pc = 0x1a0200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1a0204:
    // 0x1a0204: 0xc7a100c0  lwc1        $f1, 0xC0($sp)
    ctx->pc = 0x1a0204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a0208:
    // 0x1a0208: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1a0208u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1a020c:
    // 0x1a020c: 0x0  nop
    ctx->pc = 0x1a020cu;
    // NOP
label_1a0210:
    // 0x1a0210: 0x46011018  adda.s      $f2, $f1
    ctx->pc = 0x1a0210u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[2], ctx->f[1]));
label_1a0214:
    // 0x1a0214: 0x4600181c  madd.s      $f0, $f3, $f0
    ctx->pc = 0x1a0214u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[0]));
label_1a0218:
    // 0x1a0218: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x1a0218u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_1a021c:
    // 0x1a021c: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x1a021cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1a0220:
    // 0x1a0220: 0xc06479c  jal         func_191E70
label_1a0224:
    if (ctx->pc == 0x1A0224u) {
        ctx->pc = 0x1A0228u;
        goto label_1a0228;
    }
    ctx->pc = 0x1A0220u;
    SET_GPR_U32(ctx, 31, 0x1A0228u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1A0220u, 0x1A0228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0228u;
label_1a0228:
    // 0x1a0228: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1a0228u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a022c:
    // 0x1a022c: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1a022cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1a0230:
    // 0x1a0230: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x1a0230u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_1a0234:
    // 0x1a0234: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1a0234u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_1a0238:
    // 0x1a0238: 0x24a56210  addiu       $a1, $a1, 0x6210
    ctx->pc = 0x1a0238u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25104));
label_1a023c:
    // 0x1a023c: 0xc064ad0  jal         func_192B40
label_1a0240:
    if (ctx->pc == 0x1A0240u) {
        ctx->pc = 0x1A0244u;
        goto label_1a0244;
    }
    ctx->pc = 0x1A023Cu;
    SET_GPR_U32(ctx, 31, 0x1A0244u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1A023Cu, 0x1A0244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0244u;
label_1a0244:
    // 0x1a0244: 0xc7a100c0  lwc1        $f1, 0xC0($sp)
    ctx->pc = 0x1a0244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a0248:
    // 0x1a0248: 0xc7a000c4  lwc1        $f0, 0xC4($sp)
    ctx->pc = 0x1a0248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a024c:
    // 0x1a024c: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x1a024cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1a0250:
    // 0x1a0250: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a0250u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1a0254:
    // 0x1a0254: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1a0254u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a0258:
    // 0x1a0258: 0xc7ad00c0  lwc1        $f13, 0xC0($sp)
    ctx->pc = 0x1a0258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1a025c:
    // 0x1a025c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1a025cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a0260:
    // 0x1a0260: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1a0260u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a0264:
    // 0x1a0264: 0xc08c544  jal         func_231510
label_1a0268:
    if (ctx->pc == 0x1A0268u) {
        ctx->pc = 0x1A026Cu;
        goto label_1a026c;
    }
    ctx->pc = 0x1A0264u;
    SET_GPR_U32(ctx, 31, 0x1A026Cu);
    ctx->pc = 0x231510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231510u, 0x1A0264u, 0x1A026Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A026Cu;
label_1a026c:
    // 0x1a026c: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x1a026cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1a0270:
    // 0x1a0270: 0xc06479c  jal         func_191E70
label_1a0274:
    if (ctx->pc == 0x1A0274u) {
        ctx->pc = 0x1A0278u;
        goto label_1a0278;
    }
    ctx->pc = 0x1A0270u;
    SET_GPR_U32(ctx, 31, 0x1A0278u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1A0270u, 0x1A0278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0278u;
label_1a0278:
    // 0x1a0278: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1a0278u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a027c:
    // 0x1a027c: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x1a027cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1a0280:
    // 0x1a0280: 0x8ca20030  lw          $v0, 0x30($a1)
    ctx->pc = 0x1a0280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
label_1a0284:
    // 0x1a0284: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a0284u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a0288:
    // 0x1a0288: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1a0288u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_1a028c:
    // 0x1a028c: 0x24a56220  addiu       $a1, $a1, 0x6220
    ctx->pc = 0x1a028cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25120));
label_1a0290:
    // 0x1a0290: 0xc064ad0  jal         func_192B40
label_1a0294:
    if (ctx->pc == 0x1A0294u) {
        ctx->pc = 0x1A0298u;
        goto label_1a0298;
    }
    ctx->pc = 0x1A0290u;
    SET_GPR_U32(ctx, 31, 0x1A0298u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1A0290u, 0x1A0298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0298u;
label_1a0298:
    // 0x1a0298: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1a0298u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a029c:
    // 0x1a029c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a029cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1a02a0:
    // 0x1a02a0: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1a02a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1a02a4:
    // 0x1a02a4: 0xc7ac00c0  lwc1        $f12, 0xC0($sp)
    ctx->pc = 0x1a02a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1a02a8:
    // 0x1a02a8: 0xc7ad00c0  lwc1        $f13, 0xC0($sp)
    ctx->pc = 0x1a02a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1a02ac:
    // 0x1a02ac: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1a02acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a02b0:
    // 0x1a02b0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1a02b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a02b4:
    // 0x1a02b4: 0xc08c544  jal         func_231510
label_1a02b8:
    if (ctx->pc == 0x1A02B8u) {
        ctx->pc = 0x1A02BCu;
        goto label_1a02bc;
    }
    ctx->pc = 0x1A02B4u;
    SET_GPR_U32(ctx, 31, 0x1A02BCu);
    ctx->pc = 0x231510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231510u, 0x1A02B4u, 0x1A02BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A02BCu;
label_1a02bc:
    // 0x1a02bc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1a02bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a02c0:
    // 0x1a02c0: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1a02c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1a02c4:
    // 0x1a02c4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a02c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a02c8:
    // 0x1a02c8: 0xc06479c  jal         func_191E70
label_1a02cc:
    if (ctx->pc == 0x1A02CCu) {
        ctx->pc = 0x1A02D0u;
        goto label_1a02d0;
    }
    ctx->pc = 0x1A02C8u;
    SET_GPR_U32(ctx, 31, 0x1A02D0u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1A02C8u, 0x1A02D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A02D0u;
label_1a02d0:
    // 0x1a02d0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a02d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a02d4:
    // 0x1a02d4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a02d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a02d8:
    // 0x1a02d8: 0xc7ac00c0  lwc1        $f12, 0xC0($sp)
    ctx->pc = 0x1a02d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1a02dc:
    // 0x1a02dc: 0xc7ad00c0  lwc1        $f13, 0xC0($sp)
    ctx->pc = 0x1a02dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1a02e0:
    // 0x1a02e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a02e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a02e4:
    // 0x1a02e4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1a02e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a02e8:
    // 0x1a02e8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1a02e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a02ec:
    // 0x1a02ec: 0xc08c544  jal         func_231510
label_1a02f0:
    if (ctx->pc == 0x1A02F0u) {
        ctx->pc = 0x1A02F4u;
        goto label_1a02f4;
    }
    ctx->pc = 0x1A02ECu;
    SET_GPR_U32(ctx, 31, 0x1A02F4u);
    ctx->pc = 0x231510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231510u, 0x1A02ECu, 0x1A02F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A02F4u;
label_1a02f4:
    // 0x1a02f4: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1a02f4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a02f8:
    // 0x1a02f8: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x1a02f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1a02fc:
    // 0x1a02fc: 0xc06479c  jal         func_191E70
label_1a0300:
    if (ctx->pc == 0x1A0300u) {
        ctx->pc = 0x1A0304u;
        goto label_1a0304;
    }
    ctx->pc = 0x1A02FCu;
    SET_GPR_U32(ctx, 31, 0x1A0304u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1A02FCu, 0x1A0304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0304u;
label_1a0304:
    // 0x1a0304: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1a0304u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a0308:
    // 0x1a0308: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x1a0308u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1a030c:
    // 0x1a030c: 0x8ca20030  lw          $v0, 0x30($a1)
    ctx->pc = 0x1a030cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
label_1a0310:
    // 0x1a0310: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a0310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a0314:
    // 0x1a0314: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1a0314u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_1a0318:
    // 0x1a0318: 0x24a56240  addiu       $a1, $a1, 0x6240
    ctx->pc = 0x1a0318u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25152));
label_1a031c:
    // 0x1a031c: 0xc064ad0  jal         func_192B40
label_1a0320:
    if (ctx->pc == 0x1A0320u) {
        ctx->pc = 0x1A0324u;
        goto label_1a0324;
    }
    ctx->pc = 0x1A031Cu;
    SET_GPR_U32(ctx, 31, 0x1A0324u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1A031Cu, 0x1A0324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0324u;
label_1a0324:
    // 0x1a0324: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a0324u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1a0328:
    // 0x1a0328: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1a0328u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a032c:
    // 0x1a032c: 0xc7a100c0  lwc1        $f1, 0xC0($sp)
    ctx->pc = 0x1a032cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a0330:
    // 0x1a0330: 0x46000b06  mov.s       $f12, $f1
    ctx->pc = 0x1a0330u;
    ctx->f[12] = FPU_MOV_S(ctx->f[1]);
label_1a0334:
    // 0x1a0334: 0xc7ad00c0  lwc1        $f13, 0xC0($sp)
    ctx->pc = 0x1a0334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1a0338:
    // 0x1a0338: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a0338u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a033c:
    // 0x1a033c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1a033cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a0340:
    // 0x1a0340: 0xc08c544  jal         func_231510
label_1a0344:
    if (ctx->pc == 0x1A0344u) {
        ctx->pc = 0x1A0348u;
        goto label_1a0348;
    }
    ctx->pc = 0x1A0340u;
    SET_GPR_U32(ctx, 31, 0x1A0348u);
    ctx->pc = 0x231510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231510u, 0x1A0340u, 0x1A0348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0348u;
label_1a0348:
    // 0x1a0348: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1a0348u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a034c:
    // 0x1a034c: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x1a034cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1a0350:
    // 0x1a0350: 0xc06479c  jal         func_191E70
label_1a0354:
    if (ctx->pc == 0x1A0354u) {
        ctx->pc = 0x1A0358u;
        goto label_1a0358;
    }
    ctx->pc = 0x1A0350u;
    SET_GPR_U32(ctx, 31, 0x1A0358u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1A0350u, 0x1A0358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0358u;
label_1a0358:
    // 0x1a0358: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1a0358u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a035c:
    // 0x1a035c: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x1a035cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1a0360:
    // 0x1a0360: 0x8ca20030  lw          $v0, 0x30($a1)
    ctx->pc = 0x1a0360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
label_1a0364:
    // 0x1a0364: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a0364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a0368:
    // 0x1a0368: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1a0368u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_1a036c:
    // 0x1a036c: 0x24a56250  addiu       $a1, $a1, 0x6250
    ctx->pc = 0x1a036cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25168));
label_1a0370:
    // 0x1a0370: 0xc064ad0  jal         func_192B40
label_1a0374:
    if (ctx->pc == 0x1A0374u) {
        ctx->pc = 0x1A0378u;
        goto label_1a0378;
    }
    ctx->pc = 0x1A0370u;
    SET_GPR_U32(ctx, 31, 0x1A0378u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1A0370u, 0x1A0378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0378u;
label_1a0378:
    // 0x1a0378: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a0378u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1a037c:
    // 0x1a037c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1a037cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a0380:
    // 0x1a0380: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x1a0380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a0384:
    // 0x1a0384: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x1a0384u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_1a0388:
    // 0x1a0388: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x1a0388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a038c:
    // 0x1a038c: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x1a038cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
label_1a0390:
    // 0x1a0390: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a0390u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a0394:
    // 0x1a0394: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1a0394u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a0398:
    // 0x1a0398: 0xc08c544  jal         func_231510
label_1a039c:
    if (ctx->pc == 0x1A039Cu) {
        ctx->pc = 0x1A03A0u;
        goto label_1a03a0;
    }
    ctx->pc = 0x1A0398u;
    SET_GPR_U32(ctx, 31, 0x1A03A0u);
    ctx->pc = 0x231510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231510u, 0x1A0398u, 0x1A03A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A03A0u;
label_1a03a0:
    // 0x1a03a0: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1a03a0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a03a4:
    // 0x1a03a4: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x1a03a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1a03a8:
    // 0x1a03a8: 0xc06479c  jal         func_191E70
label_1a03ac:
    if (ctx->pc == 0x1A03ACu) {
        ctx->pc = 0x1A03B0u;
        goto label_1a03b0;
    }
    ctx->pc = 0x1A03A8u;
    SET_GPR_U32(ctx, 31, 0x1A03B0u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1A03A8u, 0x1A03B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A03B0u;
label_1a03b0:
    // 0x1a03b0: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1a03b0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a03b4:
    // 0x1a03b4: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x1a03b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1a03b8:
    // 0x1a03b8: 0x8ca20030  lw          $v0, 0x30($a1)
    ctx->pc = 0x1a03b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
label_1a03bc:
    // 0x1a03bc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a03bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a03c0:
    // 0x1a03c0: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1a03c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_1a03c4:
    // 0x1a03c4: 0x24a56260  addiu       $a1, $a1, 0x6260
    ctx->pc = 0x1a03c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25184));
label_1a03c8:
    // 0x1a03c8: 0xc064ad0  jal         func_192B40
label_1a03cc:
    if (ctx->pc == 0x1A03CCu) {
        ctx->pc = 0x1A03D0u;
        goto label_1a03d0;
    }
    ctx->pc = 0x1A03C8u;
    SET_GPR_U32(ctx, 31, 0x1A03D0u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1A03C8u, 0x1A03D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A03D0u;
label_1a03d0:
    // 0x1a03d0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a03d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1a03d4:
    // 0x1a03d4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1a03d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a03d8:
    // 0x1a03d8: 0xc7ac00c0  lwc1        $f12, 0xC0($sp)
    ctx->pc = 0x1a03d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1a03dc:
    // 0x1a03dc: 0xc7ad00c0  lwc1        $f13, 0xC0($sp)
    ctx->pc = 0x1a03dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1a03e0:
    // 0x1a03e0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a03e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a03e4:
    // 0x1a03e4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1a03e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a03e8:
    // 0x1a03e8: 0xc08c544  jal         func_231510
label_1a03ec:
    if (ctx->pc == 0x1A03ECu) {
        ctx->pc = 0x1A03F0u;
        goto label_1a03f0;
    }
    ctx->pc = 0x1A03E8u;
    SET_GPR_U32(ctx, 31, 0x1A03F0u);
    ctx->pc = 0x231510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231510u, 0x1A03E8u, 0x1A03F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A03F0u;
label_1a03f0:
    // 0x1a03f0: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1a03f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1a03f4:
    // 0x1a03f4: 0x8c4300e8  lw          $v1, 0xE8($v0)
    ctx->pc = 0x1a03f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 232)));
label_1a03f8:
    // 0x1a03f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a03f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a03fc:
    // 0x1a03fc: 0x14620018  bne         $v1, $v0, . + 4 + (0x18 << 2)
label_1a0400:
    if (ctx->pc == 0x1A0400u) {
        ctx->pc = 0x1A0404u;
        goto label_1a0404;
    }
    ctx->pc = 0x1A03FCu;
    {
        const bool branch_taken_0x1a03fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a03fc) {
            ctx->pc = 0x1A0460u;
            goto label_1a0460;
        }
    }
    ctx->pc = 0x1A0404u;
label_1a0404:
    // 0x1a0404: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x1a0404u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1a0408:
    // 0x1a0408: 0xc06479c  jal         func_191E70
label_1a040c:
    if (ctx->pc == 0x1A040Cu) {
        ctx->pc = 0x1A0410u;
        goto label_1a0410;
    }
    ctx->pc = 0x1A0408u;
    SET_GPR_U32(ctx, 31, 0x1A0410u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1A0408u, 0x1A0410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0410u;
label_1a0410:
    // 0x1a0410: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1a0410u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a0414:
    // 0x1a0414: 0x3c03447a  lui         $v1, 0x447A
    ctx->pc = 0x1a0414u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17530 << 16));
label_1a0418:
    // 0x1a0418: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1a0418u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a041c:
    // 0x1a041c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a041cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a0420:
    // 0x1a0420: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a0420u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a0424:
    // 0x1a0424: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x1a0424u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
label_1a0428:
    // 0x1a0428: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a0428u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a042c:
    // 0x1a042c: 0xc08c208  jal         func_230820
label_1a0430:
    if (ctx->pc == 0x1A0430u) {
        ctx->pc = 0x1A0434u;
        goto label_1a0434;
    }
    ctx->pc = 0x1A042Cu;
    SET_GPR_U32(ctx, 31, 0x1A0434u);
    ctx->pc = 0x230820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230820u, 0x1A042Cu, 0x1A0434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0434u;
label_1a0434:
    // 0x1a0434: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x1a0434u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1a0438:
    // 0x1a0438: 0xc06479c  jal         func_191E70
label_1a043c:
    if (ctx->pc == 0x1A043Cu) {
        ctx->pc = 0x1A0440u;
        goto label_1a0440;
    }
    ctx->pc = 0x1A0438u;
    SET_GPR_U32(ctx, 31, 0x1A0440u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1A0438u, 0x1A0440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0440u;
label_1a0440:
    // 0x1a0440: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a0440u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a0444:
    // 0x1a0444: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1a0444u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a0448:
    // 0x1a0448: 0x3c05447a  lui         $a1, 0x447A
    ctx->pc = 0x1a0448u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17530 << 16));
label_1a044c:
    // 0x1a044c: 0x44856800  mtc1        $a1, $f13
    ctx->pc = 0x1a044cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1a0450:
    // 0x1a0450: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1a0450u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1a0454:
    // 0x1a0454: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a0454u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a0458:
    // 0x1a0458: 0xc08c208  jal         func_230820
label_1a045c:
    if (ctx->pc == 0x1A045Cu) {
        ctx->pc = 0x1A0460u;
        goto label_1a0460;
    }
    ctx->pc = 0x1A0458u;
    SET_GPR_U32(ctx, 31, 0x1A0460u);
    ctx->pc = 0x230820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230820u, 0x1A0458u, 0x1A0460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0460u;
label_1a0460:
    // 0x1a0460: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1a0460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1a0464:
    // 0x1a0464: 0x8c4400e8  lw          $a0, 0xE8($v0)
    ctx->pc = 0x1a0464u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 232)));
label_1a0468:
    // 0x1a0468: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a0468u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a046c:
    // 0x1a046c: 0x10850006  beq         $a0, $a1, . + 4 + (0x6 << 2)
label_1a0470:
    if (ctx->pc == 0x1A0470u) {
        ctx->pc = 0x1A0474u;
        goto label_1a0474;
    }
    ctx->pc = 0x1A046Cu;
    {
        const bool branch_taken_0x1a046c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x1a046c) {
            ctx->pc = 0x1A0488u;
            goto label_1a0488;
        }
    }
    ctx->pc = 0x1A0474u;
label_1a0474:
    // 0x1a0474: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1a0474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1a0478:
    // 0x1a0478: 0x8c4400e8  lw          $a0, 0xE8($v0)
    ctx->pc = 0x1a0478u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 232)));
label_1a047c:
    // 0x1a047c: 0x24150002  addiu       $s5, $zero, 0x2
    ctx->pc = 0x1a047cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1a0480:
    // 0x1a0480: 0x14950007  bne         $a0, $s5, . + 4 + (0x7 << 2)
label_1a0484:
    if (ctx->pc == 0x1A0484u) {
        ctx->pc = 0x1A0488u;
        goto label_1a0488;
    }
    ctx->pc = 0x1A0480u;
    {
        const bool branch_taken_0x1a0480 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 21));
        if (branch_taken_0x1a0480) {
            ctx->pc = 0x1A04A0u;
            goto label_1a04a0;
        }
    }
    ctx->pc = 0x1A0488u;
label_1a0488:
    // 0x1a0488: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x1a0488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_1a048c:
    // 0x1a048c: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x1a048cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a0490:
    // 0x1a0490: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x1a0490u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1a0494:
    // 0x1a0494: 0xc480004c  lwc1        $f0, 0x4C($a0)
    ctx->pc = 0x1a0494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a0498:
    // 0x1a0498: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1a0498u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1a049c:
    // 0x1a049c: 0xe480004c  swc1        $f0, 0x4C($a0)
    ctx->pc = 0x1a049cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 76), bits); }
label_1a04a0:
    // 0x1a04a0: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x1a04a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1a04a4:
    // 0x1a04a4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1a04a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a04a8:
    // 0x1a04a8: 0xc064cb0  jal         func_1932C0
label_1a04ac:
    if (ctx->pc == 0x1A04ACu) {
        ctx->pc = 0x1A04B0u;
        goto label_1a04b0;
    }
    ctx->pc = 0x1A04A8u;
    SET_GPR_U32(ctx, 31, 0x1A04B0u);
    ctx->pc = 0x1932C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1932C0u, 0x1A04A8u, 0x1A04B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A04B0u;
label_1a04b0:
    // 0x1a04b0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1a04b4:
    if (ctx->pc == 0x1A04B4u) {
        ctx->pc = 0x1A04B8u;
        goto label_1a04b8;
    }
    ctx->pc = 0x1A04B0u;
    {
        const bool branch_taken_0x1a04b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a04b0) {
            ctx->pc = 0x1A04C8u;
            goto label_1a04c8;
        }
    }
    ctx->pc = 0x1A04B8u;
label_1a04b8:
    // 0x1a04b8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a04b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a04bc:
    // 0x1a04bc: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1a04bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1a04c0:
    // 0x1a04c0: 0x1000001a  b           . + 4 + (0x1A << 2)
label_1a04c4:
    if (ctx->pc == 0x1A04C4u) {
        ctx->pc = 0x1A04C8u;
        goto label_1a04c8;
    }
    ctx->pc = 0x1A04C0u;
    {
        const bool branch_taken_0x1a04c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a04c0) {
            ctx->pc = 0x1A052Cu;
            goto label_1a052c;
        }
    }
    ctx->pc = 0x1A04C8u;
label_1a04c8:
    // 0x1a04c8: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x1a04c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1a04cc:
    // 0x1a04cc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a04ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a04d0:
    // 0x1a04d0: 0xc09ac08  jal         func_26B020
label_1a04d4:
    if (ctx->pc == 0x1A04D4u) {
        ctx->pc = 0x1A04D8u;
        goto label_1a04d8;
    }
    ctx->pc = 0x1A04D0u;
    SET_GPR_U32(ctx, 31, 0x1A04D8u);
    ctx->pc = 0x26B020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B020u, 0x1A04D0u, 0x1A04D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A04D8u;
label_1a04d8:
    // 0x1a04d8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a04d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a04dc:
    // 0x1a04dc: 0x8fb500f0  lw          $s5, 0xF0($sp)
    ctx->pc = 0x1a04dcu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1a04e0:
    // 0x1a04e0: 0x26a400d8  addiu       $a0, $s5, 0xD8
    ctx->pc = 0x1a04e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 216));
label_1a04e4:
    // 0x1a04e4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1a04e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1a04e8:
    // 0x1a04e8: 0xc068170  jal         func_1A05C0
label_1a04ec:
    if (ctx->pc == 0x1A04ECu) {
        ctx->pc = 0x1A04F0u;
        goto label_1a04f0;
    }
    ctx->pc = 0x1A04E8u;
    SET_GPR_U32(ctx, 31, 0x1A04F0u);
    ctx->pc = 0x1A05C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A05C0u, 0x1A04E8u, 0x1A04F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A04F0u;
label_1a04f0:
    // 0x1a04f0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1a04f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a04f4:
    // 0x1a04f4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1a04f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1a04f8:
    // 0x1a04f8: 0xafa20084  sw          $v0, 0x84($sp)
    ctx->pc = 0x1a04f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 2));
label_1a04fc:
    // 0x1a04fc: 0x8f85bcc4  lw          $a1, -0x433C($gp)
    ctx->pc = 0x1a04fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
label_1a0500:
    // 0x1a0500: 0x8ca70000  lw          $a3, 0x0($a1)
    ctx->pc = 0x1a0500u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1a0504:
    // 0x1a0504: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x1a0504u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1a0508:
    // 0x1a0508: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x1a0508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1a050c:
    // 0x1a050c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1a050cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a0510:
    // 0x1a0510: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x1a0510u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a0514:
    // 0x1a0514: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x1a0514u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1a0518:
    // 0x1a0518: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1a0518u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a051c:
    // 0x1a051c: 0xc0af03c  jal         func_2BC0F0
label_1a0520:
    if (ctx->pc == 0x1A0520u) {
        ctx->pc = 0x1A0524u;
        goto label_1a0524;
    }
    ctx->pc = 0x1A051Cu;
    SET_GPR_U32(ctx, 31, 0x1A0524u);
    ctx->pc = 0x2BC0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC0F0u, 0x1A051Cu, 0x1A0524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0524u;
label_1a0524:
    // 0x1a0524: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a0524u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a0528:
    // 0x1a0528: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a0528u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a052c:
    // 0x1a052c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1a052cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1a0530:
    // 0x1a0530: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1a0530u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1a0534:
    // 0x1a0534: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1a0534u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1a0538:
    // 0x1a0538: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1a0538u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1a053c:
    // 0x1a053c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1a053cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1a0540:
    // 0x1a0540: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1a0540u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1a0544:
    // 0x1a0544: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a0544u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1a0548:
    // 0x1a0548: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a0548u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1a054c:
    // 0x1a054c: 0x27bd0100  addiu       $sp, $sp, 0x100
    ctx->pc = 0x1a054cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_1a0550:
    // 0x1a0550: 0x3e00008  jr          $ra
label_1a0554:
    if (ctx->pc == 0x1A0554u) {
        ctx->pc = 0x1A0558u;
        goto label_1a0558;
    }
    ctx->pc = 0x1A0550u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A0550u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A0558u;
label_1a0558:
    // 0x1a0558: 0x0  nop
    ctx->pc = 0x1a0558u;
    // NOP
label_1a055c:
    // 0x1a055c: 0x0  nop
    ctx->pc = 0x1a055cu;
    // NOP
    ctx->pc = 0x1a0560u;
}
