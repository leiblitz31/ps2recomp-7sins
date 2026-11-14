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

// Function: sub_0043EAB8
// Address: 0x43eab8 - 0x440af8
void sub_0043EAB8_0x43eab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0043EAB8_0x43eab8");
#endif

    switch (ctx->pc) {
        case 0x43eab8u: goto label_43eab8;
        case 0x43eabcu: goto label_43eabc;
        case 0x43eac0u: goto label_43eac0;
        case 0x43eac4u: goto label_43eac4;
        case 0x43eac8u: goto label_43eac8;
        case 0x43eaccu: goto label_43eacc;
        case 0x43ead0u: goto label_43ead0;
        case 0x43ead4u: goto label_43ead4;
        case 0x43ead8u: goto label_43ead8;
        case 0x43eadcu: goto label_43eadc;
        case 0x43eae0u: goto label_43eae0;
        case 0x43eae4u: goto label_43eae4;
        case 0x43eae8u: goto label_43eae8;
        case 0x43eaecu: goto label_43eaec;
        case 0x43eaf0u: goto label_43eaf0;
        case 0x43eaf4u: goto label_43eaf4;
        case 0x43eaf8u: goto label_43eaf8;
        case 0x43eafcu: goto label_43eafc;
        case 0x43eb00u: goto label_43eb00;
        case 0x43eb04u: goto label_43eb04;
        case 0x43eb08u: goto label_43eb08;
        case 0x43eb0cu: goto label_43eb0c;
        case 0x43eb10u: goto label_43eb10;
        case 0x43eb14u: goto label_43eb14;
        case 0x43eb18u: goto label_43eb18;
        case 0x43eb1cu: goto label_43eb1c;
        case 0x43eb20u: goto label_43eb20;
        case 0x43eb24u: goto label_43eb24;
        case 0x43eb28u: goto label_43eb28;
        case 0x43eb2cu: goto label_43eb2c;
        case 0x43eb30u: goto label_43eb30;
        case 0x43eb34u: goto label_43eb34;
        case 0x43eb38u: goto label_43eb38;
        case 0x43eb3cu: goto label_43eb3c;
        case 0x43eb40u: goto label_43eb40;
        case 0x43eb44u: goto label_43eb44;
        case 0x43eb48u: goto label_43eb48;
        case 0x43eb4cu: goto label_43eb4c;
        case 0x43eb50u: goto label_43eb50;
        case 0x43eb54u: goto label_43eb54;
        case 0x43eb58u: goto label_43eb58;
        case 0x43eb5cu: goto label_43eb5c;
        case 0x43eb60u: goto label_43eb60;
        case 0x43eb64u: goto label_43eb64;
        case 0x43eb68u: goto label_43eb68;
        case 0x43eb6cu: goto label_43eb6c;
        case 0x43eb70u: goto label_43eb70;
        case 0x43eb74u: goto label_43eb74;
        case 0x43eb78u: goto label_43eb78;
        case 0x43eb7cu: goto label_43eb7c;
        case 0x43eb80u: goto label_43eb80;
        case 0x43eb84u: goto label_43eb84;
        case 0x43eb88u: goto label_43eb88;
        case 0x43eb8cu: goto label_43eb8c;
        case 0x43eb90u: goto label_43eb90;
        case 0x43eb94u: goto label_43eb94;
        case 0x43eb98u: goto label_43eb98;
        case 0x43eb9cu: goto label_43eb9c;
        case 0x43eba0u: goto label_43eba0;
        case 0x43eba4u: goto label_43eba4;
        case 0x43eba8u: goto label_43eba8;
        case 0x43ebacu: goto label_43ebac;
        case 0x43ebb0u: goto label_43ebb0;
        case 0x43ebb4u: goto label_43ebb4;
        case 0x43ebb8u: goto label_43ebb8;
        case 0x43ebbcu: goto label_43ebbc;
        case 0x43ebc0u: goto label_43ebc0;
        case 0x43ebc4u: goto label_43ebc4;
        case 0x43ebc8u: goto label_43ebc8;
        case 0x43ebccu: goto label_43ebcc;
        case 0x43ebd0u: goto label_43ebd0;
        case 0x43ebd4u: goto label_43ebd4;
        case 0x43ebd8u: goto label_43ebd8;
        case 0x43ebdcu: goto label_43ebdc;
        case 0x43ebe0u: goto label_43ebe0;
        case 0x43ebe4u: goto label_43ebe4;
        case 0x43ebe8u: goto label_43ebe8;
        case 0x43ebecu: goto label_43ebec;
        case 0x43ebf0u: goto label_43ebf0;
        case 0x43ebf4u: goto label_43ebf4;
        case 0x43ebf8u: goto label_43ebf8;
        case 0x43ebfcu: goto label_43ebfc;
        case 0x43ec00u: goto label_43ec00;
        case 0x43ec04u: goto label_43ec04;
        case 0x43ec08u: goto label_43ec08;
        case 0x43ec0cu: goto label_43ec0c;
        case 0x43ec10u: goto label_43ec10;
        case 0x43ec14u: goto label_43ec14;
        case 0x43ec18u: goto label_43ec18;
        case 0x43ec1cu: goto label_43ec1c;
        case 0x43ec20u: goto label_43ec20;
        case 0x43ec24u: goto label_43ec24;
        case 0x43ec28u: goto label_43ec28;
        case 0x43ec2cu: goto label_43ec2c;
        case 0x43ec30u: goto label_43ec30;
        case 0x43ec34u: goto label_43ec34;
        case 0x43ec38u: goto label_43ec38;
        case 0x43ec3cu: goto label_43ec3c;
        case 0x43ec40u: goto label_43ec40;
        case 0x43ec44u: goto label_43ec44;
        case 0x43ec48u: goto label_43ec48;
        case 0x43ec4cu: goto label_43ec4c;
        case 0x43ec50u: goto label_43ec50;
        case 0x43ec54u: goto label_43ec54;
        case 0x43ec58u: goto label_43ec58;
        case 0x43ec5cu: goto label_43ec5c;
        case 0x43ec60u: goto label_43ec60;
        case 0x43ec64u: goto label_43ec64;
        case 0x43ec68u: goto label_43ec68;
        case 0x43ec6cu: goto label_43ec6c;
        case 0x43ec70u: goto label_43ec70;
        case 0x43ec74u: goto label_43ec74;
        case 0x43ec78u: goto label_43ec78;
        case 0x43ec7cu: goto label_43ec7c;
        case 0x43ec80u: goto label_43ec80;
        case 0x43ec84u: goto label_43ec84;
        case 0x43ec88u: goto label_43ec88;
        case 0x43ec8cu: goto label_43ec8c;
        case 0x43ec90u: goto label_43ec90;
        case 0x43ec94u: goto label_43ec94;
        case 0x43ec98u: goto label_43ec98;
        case 0x43ec9cu: goto label_43ec9c;
        case 0x43eca0u: goto label_43eca0;
        case 0x43eca4u: goto label_43eca4;
        case 0x43eca8u: goto label_43eca8;
        case 0x43ecacu: goto label_43ecac;
        case 0x43ecb0u: goto label_43ecb0;
        case 0x43ecb4u: goto label_43ecb4;
        case 0x43ecb8u: goto label_43ecb8;
        case 0x43ecbcu: goto label_43ecbc;
        case 0x43ecc0u: goto label_43ecc0;
        case 0x43ecc4u: goto label_43ecc4;
        case 0x43ecc8u: goto label_43ecc8;
        case 0x43ecccu: goto label_43eccc;
        case 0x43ecd0u: goto label_43ecd0;
        case 0x43ecd4u: goto label_43ecd4;
        case 0x43ecd8u: goto label_43ecd8;
        case 0x43ecdcu: goto label_43ecdc;
        case 0x43ece0u: goto label_43ece0;
        case 0x43ece4u: goto label_43ece4;
        case 0x43ece8u: goto label_43ece8;
        case 0x43ececu: goto label_43ecec;
        case 0x43ecf0u: goto label_43ecf0;
        case 0x43ecf4u: goto label_43ecf4;
        case 0x43ecf8u: goto label_43ecf8;
        case 0x43ecfcu: goto label_43ecfc;
        case 0x43ed00u: goto label_43ed00;
        case 0x43ed04u: goto label_43ed04;
        case 0x43ed08u: goto label_43ed08;
        case 0x43ed0cu: goto label_43ed0c;
        case 0x43ed10u: goto label_43ed10;
        case 0x43ed14u: goto label_43ed14;
        case 0x43ed18u: goto label_43ed18;
        case 0x43ed1cu: goto label_43ed1c;
        case 0x43ed20u: goto label_43ed20;
        case 0x43ed24u: goto label_43ed24;
        case 0x43ed28u: goto label_43ed28;
        case 0x43ed2cu: goto label_43ed2c;
        case 0x43ed30u: goto label_43ed30;
        case 0x43ed34u: goto label_43ed34;
        case 0x43ed38u: goto label_43ed38;
        case 0x43ed3cu: goto label_43ed3c;
        case 0x43ed40u: goto label_43ed40;
        case 0x43ed44u: goto label_43ed44;
        case 0x43ed48u: goto label_43ed48;
        case 0x43ed4cu: goto label_43ed4c;
        case 0x43ed50u: goto label_43ed50;
        case 0x43ed54u: goto label_43ed54;
        case 0x43ed58u: goto label_43ed58;
        case 0x43ed5cu: goto label_43ed5c;
        case 0x43ed60u: goto label_43ed60;
        case 0x43ed64u: goto label_43ed64;
        case 0x43ed68u: goto label_43ed68;
        case 0x43ed6cu: goto label_43ed6c;
        case 0x43ed70u: goto label_43ed70;
        case 0x43ed74u: goto label_43ed74;
        case 0x43ed78u: goto label_43ed78;
        case 0x43ed7cu: goto label_43ed7c;
        case 0x43ed80u: goto label_43ed80;
        case 0x43ed84u: goto label_43ed84;
        case 0x43ed88u: goto label_43ed88;
        case 0x43ed8cu: goto label_43ed8c;
        case 0x43ed90u: goto label_43ed90;
        case 0x43ed94u: goto label_43ed94;
        case 0x43ed98u: goto label_43ed98;
        case 0x43ed9cu: goto label_43ed9c;
        case 0x43eda0u: goto label_43eda0;
        case 0x43eda4u: goto label_43eda4;
        case 0x43eda8u: goto label_43eda8;
        case 0x43edacu: goto label_43edac;
        case 0x43edb0u: goto label_43edb0;
        case 0x43edb4u: goto label_43edb4;
        case 0x43edb8u: goto label_43edb8;
        case 0x43edbcu: goto label_43edbc;
        case 0x43edc0u: goto label_43edc0;
        case 0x43edc4u: goto label_43edc4;
        case 0x43edc8u: goto label_43edc8;
        case 0x43edccu: goto label_43edcc;
        case 0x43edd0u: goto label_43edd0;
        case 0x43edd4u: goto label_43edd4;
        case 0x43edd8u: goto label_43edd8;
        case 0x43eddcu: goto label_43eddc;
        case 0x43ede0u: goto label_43ede0;
        case 0x43ede4u: goto label_43ede4;
        case 0x43ede8u: goto label_43ede8;
        case 0x43edecu: goto label_43edec;
        case 0x43edf0u: goto label_43edf0;
        case 0x43edf4u: goto label_43edf4;
        case 0x43edf8u: goto label_43edf8;
        case 0x43edfcu: goto label_43edfc;
        case 0x43ee00u: goto label_43ee00;
        case 0x43ee04u: goto label_43ee04;
        case 0x43ee08u: goto label_43ee08;
        case 0x43ee0cu: goto label_43ee0c;
        case 0x43ee10u: goto label_43ee10;
        case 0x43ee14u: goto label_43ee14;
        case 0x43ee18u: goto label_43ee18;
        case 0x43ee1cu: goto label_43ee1c;
        case 0x43ee20u: goto label_43ee20;
        case 0x43ee24u: goto label_43ee24;
        case 0x43ee28u: goto label_43ee28;
        case 0x43ee2cu: goto label_43ee2c;
        case 0x43ee30u: goto label_43ee30;
        case 0x43ee34u: goto label_43ee34;
        case 0x43ee38u: goto label_43ee38;
        case 0x43ee3cu: goto label_43ee3c;
        case 0x43ee40u: goto label_43ee40;
        case 0x43ee44u: goto label_43ee44;
        case 0x43ee48u: goto label_43ee48;
        case 0x43ee4cu: goto label_43ee4c;
        case 0x43ee50u: goto label_43ee50;
        case 0x43ee54u: goto label_43ee54;
        case 0x43ee58u: goto label_43ee58;
        case 0x43ee5cu: goto label_43ee5c;
        case 0x43ee60u: goto label_43ee60;
        case 0x43ee64u: goto label_43ee64;
        case 0x43ee68u: goto label_43ee68;
        case 0x43ee6cu: goto label_43ee6c;
        case 0x43ee70u: goto label_43ee70;
        case 0x43ee74u: goto label_43ee74;
        case 0x43ee78u: goto label_43ee78;
        case 0x43ee7cu: goto label_43ee7c;
        case 0x43ee80u: goto label_43ee80;
        case 0x43ee84u: goto label_43ee84;
        case 0x43ee88u: goto label_43ee88;
        case 0x43ee8cu: goto label_43ee8c;
        case 0x43ee90u: goto label_43ee90;
        case 0x43ee94u: goto label_43ee94;
        case 0x43ee98u: goto label_43ee98;
        case 0x43ee9cu: goto label_43ee9c;
        case 0x43eea0u: goto label_43eea0;
        case 0x43eea4u: goto label_43eea4;
        case 0x43eea8u: goto label_43eea8;
        case 0x43eeacu: goto label_43eeac;
        case 0x43eeb0u: goto label_43eeb0;
        case 0x43eeb4u: goto label_43eeb4;
        case 0x43eeb8u: goto label_43eeb8;
        case 0x43eebcu: goto label_43eebc;
        case 0x43eec0u: goto label_43eec0;
        case 0x43eec4u: goto label_43eec4;
        case 0x43eec8u: goto label_43eec8;
        case 0x43eeccu: goto label_43eecc;
        case 0x43eed0u: goto label_43eed0;
        case 0x43eed4u: goto label_43eed4;
        case 0x43eed8u: goto label_43eed8;
        case 0x43eedcu: goto label_43eedc;
        case 0x43eee0u: goto label_43eee0;
        case 0x43eee4u: goto label_43eee4;
        case 0x43eee8u: goto label_43eee8;
        case 0x43eeecu: goto label_43eeec;
        case 0x43eef0u: goto label_43eef0;
        case 0x43eef4u: goto label_43eef4;
        case 0x43eef8u: goto label_43eef8;
        case 0x43eefcu: goto label_43eefc;
        case 0x43ef00u: goto label_43ef00;
        case 0x43ef04u: goto label_43ef04;
        case 0x43ef08u: goto label_43ef08;
        case 0x43ef0cu: goto label_43ef0c;
        case 0x43ef10u: goto label_43ef10;
        case 0x43ef14u: goto label_43ef14;
        case 0x43ef18u: goto label_43ef18;
        case 0x43ef1cu: goto label_43ef1c;
        case 0x43ef20u: goto label_43ef20;
        case 0x43ef24u: goto label_43ef24;
        case 0x43ef28u: goto label_43ef28;
        case 0x43ef2cu: goto label_43ef2c;
        case 0x43ef30u: goto label_43ef30;
        case 0x43ef34u: goto label_43ef34;
        case 0x43ef38u: goto label_43ef38;
        case 0x43ef3cu: goto label_43ef3c;
        case 0x43ef40u: goto label_43ef40;
        case 0x43ef44u: goto label_43ef44;
        case 0x43ef48u: goto label_43ef48;
        case 0x43ef4cu: goto label_43ef4c;
        case 0x43ef50u: goto label_43ef50;
        case 0x43ef54u: goto label_43ef54;
        case 0x43ef58u: goto label_43ef58;
        case 0x43ef5cu: goto label_43ef5c;
        case 0x43ef60u: goto label_43ef60;
        case 0x43ef64u: goto label_43ef64;
        case 0x43ef68u: goto label_43ef68;
        case 0x43ef6cu: goto label_43ef6c;
        case 0x43ef70u: goto label_43ef70;
        case 0x43ef74u: goto label_43ef74;
        case 0x43ef78u: goto label_43ef78;
        case 0x43ef7cu: goto label_43ef7c;
        case 0x43ef80u: goto label_43ef80;
        case 0x43ef84u: goto label_43ef84;
        case 0x43ef88u: goto label_43ef88;
        case 0x43ef8cu: goto label_43ef8c;
        case 0x43ef90u: goto label_43ef90;
        case 0x43ef94u: goto label_43ef94;
        case 0x43ef98u: goto label_43ef98;
        case 0x43ef9cu: goto label_43ef9c;
        case 0x43efa0u: goto label_43efa0;
        case 0x43efa4u: goto label_43efa4;
        case 0x43efa8u: goto label_43efa8;
        case 0x43efacu: goto label_43efac;
        case 0x43efb0u: goto label_43efb0;
        case 0x43efb4u: goto label_43efb4;
        case 0x43efb8u: goto label_43efb8;
        case 0x43efbcu: goto label_43efbc;
        case 0x43efc0u: goto label_43efc0;
        case 0x43efc4u: goto label_43efc4;
        case 0x43efc8u: goto label_43efc8;
        case 0x43efccu: goto label_43efcc;
        case 0x43efd0u: goto label_43efd0;
        case 0x43efd4u: goto label_43efd4;
        case 0x43efd8u: goto label_43efd8;
        case 0x43efdcu: goto label_43efdc;
        case 0x43efe0u: goto label_43efe0;
        case 0x43efe4u: goto label_43efe4;
        case 0x43efe8u: goto label_43efe8;
        case 0x43efecu: goto label_43efec;
        case 0x43eff0u: goto label_43eff0;
        case 0x43eff4u: goto label_43eff4;
        case 0x43eff8u: goto label_43eff8;
        case 0x43effcu: goto label_43effc;
        case 0x43f000u: goto label_43f000;
        case 0x43f004u: goto label_43f004;
        case 0x43f008u: goto label_43f008;
        case 0x43f00cu: goto label_43f00c;
        case 0x43f010u: goto label_43f010;
        case 0x43f014u: goto label_43f014;
        case 0x43f018u: goto label_43f018;
        case 0x43f01cu: goto label_43f01c;
        case 0x43f020u: goto label_43f020;
        case 0x43f024u: goto label_43f024;
        case 0x43f028u: goto label_43f028;
        case 0x43f02cu: goto label_43f02c;
        case 0x43f030u: goto label_43f030;
        case 0x43f034u: goto label_43f034;
        case 0x43f038u: goto label_43f038;
        case 0x43f03cu: goto label_43f03c;
        case 0x43f040u: goto label_43f040;
        case 0x43f044u: goto label_43f044;
        case 0x43f048u: goto label_43f048;
        case 0x43f04cu: goto label_43f04c;
        case 0x43f050u: goto label_43f050;
        case 0x43f054u: goto label_43f054;
        case 0x43f058u: goto label_43f058;
        case 0x43f05cu: goto label_43f05c;
        case 0x43f060u: goto label_43f060;
        case 0x43f064u: goto label_43f064;
        case 0x43f068u: goto label_43f068;
        case 0x43f06cu: goto label_43f06c;
        case 0x43f070u: goto label_43f070;
        case 0x43f074u: goto label_43f074;
        case 0x43f078u: goto label_43f078;
        case 0x43f07cu: goto label_43f07c;
        case 0x43f080u: goto label_43f080;
        case 0x43f084u: goto label_43f084;
        case 0x43f088u: goto label_43f088;
        case 0x43f08cu: goto label_43f08c;
        case 0x43f090u: goto label_43f090;
        case 0x43f094u: goto label_43f094;
        case 0x43f098u: goto label_43f098;
        case 0x43f09cu: goto label_43f09c;
        case 0x43f0a0u: goto label_43f0a0;
        case 0x43f0a4u: goto label_43f0a4;
        case 0x43f0a8u: goto label_43f0a8;
        case 0x43f0acu: goto label_43f0ac;
        case 0x43f0b0u: goto label_43f0b0;
        case 0x43f0b4u: goto label_43f0b4;
        case 0x43f0b8u: goto label_43f0b8;
        case 0x43f0bcu: goto label_43f0bc;
        case 0x43f0c0u: goto label_43f0c0;
        case 0x43f0c4u: goto label_43f0c4;
        case 0x43f0c8u: goto label_43f0c8;
        case 0x43f0ccu: goto label_43f0cc;
        case 0x43f0d0u: goto label_43f0d0;
        case 0x43f0d4u: goto label_43f0d4;
        case 0x43f0d8u: goto label_43f0d8;
        case 0x43f0dcu: goto label_43f0dc;
        case 0x43f0e0u: goto label_43f0e0;
        case 0x43f0e4u: goto label_43f0e4;
        case 0x43f0e8u: goto label_43f0e8;
        case 0x43f0ecu: goto label_43f0ec;
        case 0x43f0f0u: goto label_43f0f0;
        case 0x43f0f4u: goto label_43f0f4;
        case 0x43f0f8u: goto label_43f0f8;
        case 0x43f0fcu: goto label_43f0fc;
        case 0x43f100u: goto label_43f100;
        case 0x43f104u: goto label_43f104;
        case 0x43f108u: goto label_43f108;
        case 0x43f10cu: goto label_43f10c;
        case 0x43f110u: goto label_43f110;
        case 0x43f114u: goto label_43f114;
        case 0x43f118u: goto label_43f118;
        case 0x43f11cu: goto label_43f11c;
        case 0x43f120u: goto label_43f120;
        case 0x43f124u: goto label_43f124;
        case 0x43f128u: goto label_43f128;
        case 0x43f12cu: goto label_43f12c;
        case 0x43f130u: goto label_43f130;
        case 0x43f134u: goto label_43f134;
        case 0x43f138u: goto label_43f138;
        case 0x43f13cu: goto label_43f13c;
        case 0x43f140u: goto label_43f140;
        case 0x43f144u: goto label_43f144;
        case 0x43f148u: goto label_43f148;
        case 0x43f14cu: goto label_43f14c;
        case 0x43f150u: goto label_43f150;
        case 0x43f154u: goto label_43f154;
        case 0x43f158u: goto label_43f158;
        case 0x43f15cu: goto label_43f15c;
        case 0x43f160u: goto label_43f160;
        case 0x43f164u: goto label_43f164;
        case 0x43f168u: goto label_43f168;
        case 0x43f16cu: goto label_43f16c;
        case 0x43f170u: goto label_43f170;
        case 0x43f174u: goto label_43f174;
        case 0x43f178u: goto label_43f178;
        case 0x43f17cu: goto label_43f17c;
        case 0x43f180u: goto label_43f180;
        case 0x43f184u: goto label_43f184;
        case 0x43f188u: goto label_43f188;
        case 0x43f18cu: goto label_43f18c;
        case 0x43f190u: goto label_43f190;
        case 0x43f194u: goto label_43f194;
        case 0x43f198u: goto label_43f198;
        case 0x43f19cu: goto label_43f19c;
        case 0x43f1a0u: goto label_43f1a0;
        case 0x43f1a4u: goto label_43f1a4;
        case 0x43f1a8u: goto label_43f1a8;
        case 0x43f1acu: goto label_43f1ac;
        case 0x43f1b0u: goto label_43f1b0;
        case 0x43f1b4u: goto label_43f1b4;
        case 0x43f1b8u: goto label_43f1b8;
        case 0x43f1bcu: goto label_43f1bc;
        case 0x43f1c0u: goto label_43f1c0;
        case 0x43f1c4u: goto label_43f1c4;
        case 0x43f1c8u: goto label_43f1c8;
        case 0x43f1ccu: goto label_43f1cc;
        case 0x43f1d0u: goto label_43f1d0;
        case 0x43f1d4u: goto label_43f1d4;
        case 0x43f1d8u: goto label_43f1d8;
        case 0x43f1dcu: goto label_43f1dc;
        case 0x43f1e0u: goto label_43f1e0;
        case 0x43f1e4u: goto label_43f1e4;
        case 0x43f1e8u: goto label_43f1e8;
        case 0x43f1ecu: goto label_43f1ec;
        case 0x43f1f0u: goto label_43f1f0;
        case 0x43f1f4u: goto label_43f1f4;
        case 0x43f1f8u: goto label_43f1f8;
        case 0x43f1fcu: goto label_43f1fc;
        case 0x43f200u: goto label_43f200;
        case 0x43f204u: goto label_43f204;
        case 0x43f208u: goto label_43f208;
        case 0x43f20cu: goto label_43f20c;
        case 0x43f210u: goto label_43f210;
        case 0x43f214u: goto label_43f214;
        case 0x43f218u: goto label_43f218;
        case 0x43f21cu: goto label_43f21c;
        case 0x43f220u: goto label_43f220;
        case 0x43f224u: goto label_43f224;
        case 0x43f228u: goto label_43f228;
        case 0x43f22cu: goto label_43f22c;
        case 0x43f230u: goto label_43f230;
        case 0x43f234u: goto label_43f234;
        case 0x43f238u: goto label_43f238;
        case 0x43f23cu: goto label_43f23c;
        case 0x43f240u: goto label_43f240;
        case 0x43f244u: goto label_43f244;
        case 0x43f248u: goto label_43f248;
        case 0x43f24cu: goto label_43f24c;
        case 0x43f250u: goto label_43f250;
        case 0x43f254u: goto label_43f254;
        case 0x43f258u: goto label_43f258;
        case 0x43f25cu: goto label_43f25c;
        case 0x43f260u: goto label_43f260;
        case 0x43f264u: goto label_43f264;
        case 0x43f268u: goto label_43f268;
        case 0x43f26cu: goto label_43f26c;
        case 0x43f270u: goto label_43f270;
        case 0x43f274u: goto label_43f274;
        case 0x43f278u: goto label_43f278;
        case 0x43f27cu: goto label_43f27c;
        case 0x43f280u: goto label_43f280;
        case 0x43f284u: goto label_43f284;
        case 0x43f288u: goto label_43f288;
        case 0x43f28cu: goto label_43f28c;
        case 0x43f290u: goto label_43f290;
        case 0x43f294u: goto label_43f294;
        case 0x43f298u: goto label_43f298;
        case 0x43f29cu: goto label_43f29c;
        case 0x43f2a0u: goto label_43f2a0;
        case 0x43f2a4u: goto label_43f2a4;
        case 0x43f2a8u: goto label_43f2a8;
        case 0x43f2acu: goto label_43f2ac;
        case 0x43f2b0u: goto label_43f2b0;
        case 0x43f2b4u: goto label_43f2b4;
        case 0x43f2b8u: goto label_43f2b8;
        case 0x43f2bcu: goto label_43f2bc;
        case 0x43f2c0u: goto label_43f2c0;
        case 0x43f2c4u: goto label_43f2c4;
        case 0x43f2c8u: goto label_43f2c8;
        case 0x43f2ccu: goto label_43f2cc;
        case 0x43f2d0u: goto label_43f2d0;
        case 0x43f2d4u: goto label_43f2d4;
        case 0x43f2d8u: goto label_43f2d8;
        case 0x43f2dcu: goto label_43f2dc;
        case 0x43f2e0u: goto label_43f2e0;
        case 0x43f2e4u: goto label_43f2e4;
        case 0x43f2e8u: goto label_43f2e8;
        case 0x43f2ecu: goto label_43f2ec;
        case 0x43f2f0u: goto label_43f2f0;
        case 0x43f2f4u: goto label_43f2f4;
        case 0x43f2f8u: goto label_43f2f8;
        case 0x43f2fcu: goto label_43f2fc;
        case 0x43f300u: goto label_43f300;
        case 0x43f304u: goto label_43f304;
        case 0x43f308u: goto label_43f308;
        case 0x43f30cu: goto label_43f30c;
        case 0x43f310u: goto label_43f310;
        case 0x43f314u: goto label_43f314;
        case 0x43f318u: goto label_43f318;
        case 0x43f31cu: goto label_43f31c;
        case 0x43f320u: goto label_43f320;
        case 0x43f324u: goto label_43f324;
        case 0x43f328u: goto label_43f328;
        case 0x43f32cu: goto label_43f32c;
        case 0x43f330u: goto label_43f330;
        case 0x43f334u: goto label_43f334;
        case 0x43f338u: goto label_43f338;
        case 0x43f33cu: goto label_43f33c;
        case 0x43f340u: goto label_43f340;
        case 0x43f344u: goto label_43f344;
        case 0x43f348u: goto label_43f348;
        case 0x43f34cu: goto label_43f34c;
        case 0x43f350u: goto label_43f350;
        case 0x43f354u: goto label_43f354;
        case 0x43f358u: goto label_43f358;
        case 0x43f35cu: goto label_43f35c;
        case 0x43f360u: goto label_43f360;
        case 0x43f364u: goto label_43f364;
        case 0x43f368u: goto label_43f368;
        case 0x43f36cu: goto label_43f36c;
        case 0x43f370u: goto label_43f370;
        case 0x43f374u: goto label_43f374;
        case 0x43f378u: goto label_43f378;
        case 0x43f37cu: goto label_43f37c;
        case 0x43f380u: goto label_43f380;
        case 0x43f384u: goto label_43f384;
        case 0x43f388u: goto label_43f388;
        case 0x43f38cu: goto label_43f38c;
        case 0x43f390u: goto label_43f390;
        case 0x43f394u: goto label_43f394;
        case 0x43f398u: goto label_43f398;
        case 0x43f39cu: goto label_43f39c;
        case 0x43f3a0u: goto label_43f3a0;
        case 0x43f3a4u: goto label_43f3a4;
        case 0x43f3a8u: goto label_43f3a8;
        case 0x43f3acu: goto label_43f3ac;
        case 0x43f3b0u: goto label_43f3b0;
        case 0x43f3b4u: goto label_43f3b4;
        case 0x43f3b8u: goto label_43f3b8;
        case 0x43f3bcu: goto label_43f3bc;
        case 0x43f3c0u: goto label_43f3c0;
        case 0x43f3c4u: goto label_43f3c4;
        case 0x43f3c8u: goto label_43f3c8;
        case 0x43f3ccu: goto label_43f3cc;
        case 0x43f3d0u: goto label_43f3d0;
        case 0x43f3d4u: goto label_43f3d4;
        case 0x43f3d8u: goto label_43f3d8;
        case 0x43f3dcu: goto label_43f3dc;
        case 0x43f3e0u: goto label_43f3e0;
        case 0x43f3e4u: goto label_43f3e4;
        case 0x43f3e8u: goto label_43f3e8;
        case 0x43f3ecu: goto label_43f3ec;
        case 0x43f3f0u: goto label_43f3f0;
        case 0x43f3f4u: goto label_43f3f4;
        case 0x43f3f8u: goto label_43f3f8;
        case 0x43f3fcu: goto label_43f3fc;
        case 0x43f400u: goto label_43f400;
        case 0x43f404u: goto label_43f404;
        case 0x43f408u: goto label_43f408;
        case 0x43f40cu: goto label_43f40c;
        case 0x43f410u: goto label_43f410;
        case 0x43f414u: goto label_43f414;
        case 0x43f418u: goto label_43f418;
        case 0x43f41cu: goto label_43f41c;
        case 0x43f420u: goto label_43f420;
        case 0x43f424u: goto label_43f424;
        case 0x43f428u: goto label_43f428;
        case 0x43f42cu: goto label_43f42c;
        case 0x43f430u: goto label_43f430;
        case 0x43f434u: goto label_43f434;
        case 0x43f438u: goto label_43f438;
        case 0x43f43cu: goto label_43f43c;
        case 0x43f440u: goto label_43f440;
        case 0x43f444u: goto label_43f444;
        case 0x43f448u: goto label_43f448;
        case 0x43f44cu: goto label_43f44c;
        case 0x43f450u: goto label_43f450;
        case 0x43f454u: goto label_43f454;
        case 0x43f458u: goto label_43f458;
        case 0x43f45cu: goto label_43f45c;
        case 0x43f460u: goto label_43f460;
        case 0x43f464u: goto label_43f464;
        case 0x43f468u: goto label_43f468;
        case 0x43f46cu: goto label_43f46c;
        case 0x43f470u: goto label_43f470;
        case 0x43f474u: goto label_43f474;
        case 0x43f478u: goto label_43f478;
        case 0x43f47cu: goto label_43f47c;
        case 0x43f480u: goto label_43f480;
        case 0x43f484u: goto label_43f484;
        case 0x43f488u: goto label_43f488;
        case 0x43f48cu: goto label_43f48c;
        case 0x43f490u: goto label_43f490;
        case 0x43f494u: goto label_43f494;
        case 0x43f498u: goto label_43f498;
        case 0x43f49cu: goto label_43f49c;
        case 0x43f4a0u: goto label_43f4a0;
        case 0x43f4a4u: goto label_43f4a4;
        case 0x43f4a8u: goto label_43f4a8;
        case 0x43f4acu: goto label_43f4ac;
        case 0x43f4b0u: goto label_43f4b0;
        case 0x43f4b4u: goto label_43f4b4;
        case 0x43f4b8u: goto label_43f4b8;
        case 0x43f4bcu: goto label_43f4bc;
        case 0x43f4c0u: goto label_43f4c0;
        case 0x43f4c4u: goto label_43f4c4;
        case 0x43f4c8u: goto label_43f4c8;
        case 0x43f4ccu: goto label_43f4cc;
        case 0x43f4d0u: goto label_43f4d0;
        case 0x43f4d4u: goto label_43f4d4;
        case 0x43f4d8u: goto label_43f4d8;
        case 0x43f4dcu: goto label_43f4dc;
        case 0x43f4e0u: goto label_43f4e0;
        case 0x43f4e4u: goto label_43f4e4;
        case 0x43f4e8u: goto label_43f4e8;
        case 0x43f4ecu: goto label_43f4ec;
        case 0x43f4f0u: goto label_43f4f0;
        case 0x43f4f4u: goto label_43f4f4;
        case 0x43f4f8u: goto label_43f4f8;
        case 0x43f4fcu: goto label_43f4fc;
        case 0x43f500u: goto label_43f500;
        case 0x43f504u: goto label_43f504;
        case 0x43f508u: goto label_43f508;
        case 0x43f50cu: goto label_43f50c;
        case 0x43f510u: goto label_43f510;
        case 0x43f514u: goto label_43f514;
        case 0x43f518u: goto label_43f518;
        case 0x43f51cu: goto label_43f51c;
        case 0x43f520u: goto label_43f520;
        case 0x43f524u: goto label_43f524;
        case 0x43f528u: goto label_43f528;
        case 0x43f52cu: goto label_43f52c;
        case 0x43f530u: goto label_43f530;
        case 0x43f534u: goto label_43f534;
        case 0x43f538u: goto label_43f538;
        case 0x43f53cu: goto label_43f53c;
        case 0x43f540u: goto label_43f540;
        case 0x43f544u: goto label_43f544;
        case 0x43f548u: goto label_43f548;
        case 0x43f54cu: goto label_43f54c;
        case 0x43f550u: goto label_43f550;
        case 0x43f554u: goto label_43f554;
        case 0x43f558u: goto label_43f558;
        case 0x43f55cu: goto label_43f55c;
        case 0x43f560u: goto label_43f560;
        case 0x43f564u: goto label_43f564;
        case 0x43f568u: goto label_43f568;
        case 0x43f56cu: goto label_43f56c;
        case 0x43f570u: goto label_43f570;
        case 0x43f574u: goto label_43f574;
        case 0x43f578u: goto label_43f578;
        case 0x43f57cu: goto label_43f57c;
        case 0x43f580u: goto label_43f580;
        case 0x43f584u: goto label_43f584;
        case 0x43f588u: goto label_43f588;
        case 0x43f58cu: goto label_43f58c;
        case 0x43f590u: goto label_43f590;
        case 0x43f594u: goto label_43f594;
        case 0x43f598u: goto label_43f598;
        case 0x43f59cu: goto label_43f59c;
        case 0x43f5a0u: goto label_43f5a0;
        case 0x43f5a4u: goto label_43f5a4;
        case 0x43f5a8u: goto label_43f5a8;
        case 0x43f5acu: goto label_43f5ac;
        case 0x43f5b0u: goto label_43f5b0;
        case 0x43f5b4u: goto label_43f5b4;
        case 0x43f5b8u: goto label_43f5b8;
        case 0x43f5bcu: goto label_43f5bc;
        case 0x43f5c0u: goto label_43f5c0;
        case 0x43f5c4u: goto label_43f5c4;
        case 0x43f5c8u: goto label_43f5c8;
        case 0x43f5ccu: goto label_43f5cc;
        case 0x43f5d0u: goto label_43f5d0;
        case 0x43f5d4u: goto label_43f5d4;
        case 0x43f5d8u: goto label_43f5d8;
        case 0x43f5dcu: goto label_43f5dc;
        case 0x43f5e0u: goto label_43f5e0;
        case 0x43f5e4u: goto label_43f5e4;
        case 0x43f5e8u: goto label_43f5e8;
        case 0x43f5ecu: goto label_43f5ec;
        case 0x43f5f0u: goto label_43f5f0;
        case 0x43f5f4u: goto label_43f5f4;
        case 0x43f5f8u: goto label_43f5f8;
        case 0x43f5fcu: goto label_43f5fc;
        case 0x43f600u: goto label_43f600;
        case 0x43f604u: goto label_43f604;
        case 0x43f608u: goto label_43f608;
        case 0x43f60cu: goto label_43f60c;
        case 0x43f610u: goto label_43f610;
        case 0x43f614u: goto label_43f614;
        case 0x43f618u: goto label_43f618;
        case 0x43f61cu: goto label_43f61c;
        case 0x43f620u: goto label_43f620;
        case 0x43f624u: goto label_43f624;
        case 0x43f628u: goto label_43f628;
        case 0x43f62cu: goto label_43f62c;
        case 0x43f630u: goto label_43f630;
        case 0x43f634u: goto label_43f634;
        case 0x43f638u: goto label_43f638;
        case 0x43f63cu: goto label_43f63c;
        case 0x43f640u: goto label_43f640;
        case 0x43f644u: goto label_43f644;
        case 0x43f648u: goto label_43f648;
        case 0x43f64cu: goto label_43f64c;
        case 0x43f650u: goto label_43f650;
        case 0x43f654u: goto label_43f654;
        case 0x43f658u: goto label_43f658;
        case 0x43f65cu: goto label_43f65c;
        case 0x43f660u: goto label_43f660;
        case 0x43f664u: goto label_43f664;
        case 0x43f668u: goto label_43f668;
        case 0x43f66cu: goto label_43f66c;
        case 0x43f670u: goto label_43f670;
        case 0x43f674u: goto label_43f674;
        case 0x43f678u: goto label_43f678;
        case 0x43f67cu: goto label_43f67c;
        case 0x43f680u: goto label_43f680;
        case 0x43f684u: goto label_43f684;
        case 0x43f688u: goto label_43f688;
        case 0x43f68cu: goto label_43f68c;
        case 0x43f690u: goto label_43f690;
        case 0x43f694u: goto label_43f694;
        case 0x43f698u: goto label_43f698;
        case 0x43f69cu: goto label_43f69c;
        case 0x43f6a0u: goto label_43f6a0;
        case 0x43f6a4u: goto label_43f6a4;
        case 0x43f6a8u: goto label_43f6a8;
        case 0x43f6acu: goto label_43f6ac;
        case 0x43f6b0u: goto label_43f6b0;
        case 0x43f6b4u: goto label_43f6b4;
        case 0x43f6b8u: goto label_43f6b8;
        case 0x43f6bcu: goto label_43f6bc;
        case 0x43f6c0u: goto label_43f6c0;
        case 0x43f6c4u: goto label_43f6c4;
        case 0x43f6c8u: goto label_43f6c8;
        case 0x43f6ccu: goto label_43f6cc;
        case 0x43f6d0u: goto label_43f6d0;
        case 0x43f6d4u: goto label_43f6d4;
        case 0x43f6d8u: goto label_43f6d8;
        case 0x43f6dcu: goto label_43f6dc;
        case 0x43f6e0u: goto label_43f6e0;
        case 0x43f6e4u: goto label_43f6e4;
        case 0x43f6e8u: goto label_43f6e8;
        case 0x43f6ecu: goto label_43f6ec;
        case 0x43f6f0u: goto label_43f6f0;
        case 0x43f6f4u: goto label_43f6f4;
        case 0x43f6f8u: goto label_43f6f8;
        case 0x43f6fcu: goto label_43f6fc;
        case 0x43f700u: goto label_43f700;
        case 0x43f704u: goto label_43f704;
        case 0x43f708u: goto label_43f708;
        case 0x43f70cu: goto label_43f70c;
        case 0x43f710u: goto label_43f710;
        case 0x43f714u: goto label_43f714;
        case 0x43f718u: goto label_43f718;
        case 0x43f71cu: goto label_43f71c;
        case 0x43f720u: goto label_43f720;
        case 0x43f724u: goto label_43f724;
        case 0x43f728u: goto label_43f728;
        case 0x43f72cu: goto label_43f72c;
        case 0x43f730u: goto label_43f730;
        case 0x43f734u: goto label_43f734;
        case 0x43f738u: goto label_43f738;
        case 0x43f73cu: goto label_43f73c;
        case 0x43f740u: goto label_43f740;
        case 0x43f744u: goto label_43f744;
        case 0x43f748u: goto label_43f748;
        case 0x43f74cu: goto label_43f74c;
        case 0x43f750u: goto label_43f750;
        case 0x43f754u: goto label_43f754;
        case 0x43f758u: goto label_43f758;
        case 0x43f75cu: goto label_43f75c;
        case 0x43f760u: goto label_43f760;
        case 0x43f764u: goto label_43f764;
        case 0x43f768u: goto label_43f768;
        case 0x43f76cu: goto label_43f76c;
        case 0x43f770u: goto label_43f770;
        case 0x43f774u: goto label_43f774;
        case 0x43f778u: goto label_43f778;
        case 0x43f77cu: goto label_43f77c;
        case 0x43f780u: goto label_43f780;
        case 0x43f784u: goto label_43f784;
        case 0x43f788u: goto label_43f788;
        case 0x43f78cu: goto label_43f78c;
        case 0x43f790u: goto label_43f790;
        case 0x43f794u: goto label_43f794;
        case 0x43f798u: goto label_43f798;
        case 0x43f79cu: goto label_43f79c;
        case 0x43f7a0u: goto label_43f7a0;
        case 0x43f7a4u: goto label_43f7a4;
        case 0x43f7a8u: goto label_43f7a8;
        case 0x43f7acu: goto label_43f7ac;
        case 0x43f7b0u: goto label_43f7b0;
        case 0x43f7b4u: goto label_43f7b4;
        case 0x43f7b8u: goto label_43f7b8;
        case 0x43f7bcu: goto label_43f7bc;
        case 0x43f7c0u: goto label_43f7c0;
        case 0x43f7c4u: goto label_43f7c4;
        case 0x43f7c8u: goto label_43f7c8;
        case 0x43f7ccu: goto label_43f7cc;
        case 0x43f7d0u: goto label_43f7d0;
        case 0x43f7d4u: goto label_43f7d4;
        case 0x43f7d8u: goto label_43f7d8;
        case 0x43f7dcu: goto label_43f7dc;
        case 0x43f7e0u: goto label_43f7e0;
        case 0x43f7e4u: goto label_43f7e4;
        case 0x43f7e8u: goto label_43f7e8;
        case 0x43f7ecu: goto label_43f7ec;
        case 0x43f7f0u: goto label_43f7f0;
        case 0x43f7f4u: goto label_43f7f4;
        case 0x43f7f8u: goto label_43f7f8;
        case 0x43f7fcu: goto label_43f7fc;
        case 0x43f800u: goto label_43f800;
        case 0x43f804u: goto label_43f804;
        case 0x43f808u: goto label_43f808;
        case 0x43f80cu: goto label_43f80c;
        case 0x43f810u: goto label_43f810;
        case 0x43f814u: goto label_43f814;
        case 0x43f818u: goto label_43f818;
        case 0x43f81cu: goto label_43f81c;
        case 0x43f820u: goto label_43f820;
        case 0x43f824u: goto label_43f824;
        case 0x43f828u: goto label_43f828;
        case 0x43f82cu: goto label_43f82c;
        case 0x43f830u: goto label_43f830;
        case 0x43f834u: goto label_43f834;
        case 0x43f838u: goto label_43f838;
        case 0x43f83cu: goto label_43f83c;
        case 0x43f840u: goto label_43f840;
        case 0x43f844u: goto label_43f844;
        case 0x43f848u: goto label_43f848;
        case 0x43f84cu: goto label_43f84c;
        case 0x43f850u: goto label_43f850;
        case 0x43f854u: goto label_43f854;
        case 0x43f858u: goto label_43f858;
        case 0x43f85cu: goto label_43f85c;
        case 0x43f860u: goto label_43f860;
        case 0x43f864u: goto label_43f864;
        case 0x43f868u: goto label_43f868;
        case 0x43f86cu: goto label_43f86c;
        case 0x43f870u: goto label_43f870;
        case 0x43f874u: goto label_43f874;
        case 0x43f878u: goto label_43f878;
        case 0x43f87cu: goto label_43f87c;
        case 0x43f880u: goto label_43f880;
        case 0x43f884u: goto label_43f884;
        case 0x43f888u: goto label_43f888;
        case 0x43f88cu: goto label_43f88c;
        case 0x43f890u: goto label_43f890;
        case 0x43f894u: goto label_43f894;
        case 0x43f898u: goto label_43f898;
        case 0x43f89cu: goto label_43f89c;
        case 0x43f8a0u: goto label_43f8a0;
        case 0x43f8a4u: goto label_43f8a4;
        case 0x43f8a8u: goto label_43f8a8;
        case 0x43f8acu: goto label_43f8ac;
        case 0x43f8b0u: goto label_43f8b0;
        case 0x43f8b4u: goto label_43f8b4;
        case 0x43f8b8u: goto label_43f8b8;
        case 0x43f8bcu: goto label_43f8bc;
        case 0x43f8c0u: goto label_43f8c0;
        case 0x43f8c4u: goto label_43f8c4;
        case 0x43f8c8u: goto label_43f8c8;
        case 0x43f8ccu: goto label_43f8cc;
        case 0x43f8d0u: goto label_43f8d0;
        case 0x43f8d4u: goto label_43f8d4;
        case 0x43f8d8u: goto label_43f8d8;
        case 0x43f8dcu: goto label_43f8dc;
        case 0x43f8e0u: goto label_43f8e0;
        case 0x43f8e4u: goto label_43f8e4;
        case 0x43f8e8u: goto label_43f8e8;
        case 0x43f8ecu: goto label_43f8ec;
        case 0x43f8f0u: goto label_43f8f0;
        case 0x43f8f4u: goto label_43f8f4;
        case 0x43f8f8u: goto label_43f8f8;
        case 0x43f8fcu: goto label_43f8fc;
        case 0x43f900u: goto label_43f900;
        case 0x43f904u: goto label_43f904;
        case 0x43f908u: goto label_43f908;
        case 0x43f90cu: goto label_43f90c;
        case 0x43f910u: goto label_43f910;
        case 0x43f914u: goto label_43f914;
        case 0x43f918u: goto label_43f918;
        case 0x43f91cu: goto label_43f91c;
        case 0x43f920u: goto label_43f920;
        case 0x43f924u: goto label_43f924;
        case 0x43f928u: goto label_43f928;
        case 0x43f92cu: goto label_43f92c;
        case 0x43f930u: goto label_43f930;
        case 0x43f934u: goto label_43f934;
        case 0x43f938u: goto label_43f938;
        case 0x43f93cu: goto label_43f93c;
        case 0x43f940u: goto label_43f940;
        case 0x43f944u: goto label_43f944;
        case 0x43f948u: goto label_43f948;
        case 0x43f94cu: goto label_43f94c;
        case 0x43f950u: goto label_43f950;
        case 0x43f954u: goto label_43f954;
        case 0x43f958u: goto label_43f958;
        case 0x43f95cu: goto label_43f95c;
        case 0x43f960u: goto label_43f960;
        case 0x43f964u: goto label_43f964;
        case 0x43f968u: goto label_43f968;
        case 0x43f96cu: goto label_43f96c;
        case 0x43f970u: goto label_43f970;
        case 0x43f974u: goto label_43f974;
        case 0x43f978u: goto label_43f978;
        case 0x43f97cu: goto label_43f97c;
        case 0x43f980u: goto label_43f980;
        case 0x43f984u: goto label_43f984;
        case 0x43f988u: goto label_43f988;
        case 0x43f98cu: goto label_43f98c;
        case 0x43f990u: goto label_43f990;
        case 0x43f994u: goto label_43f994;
        case 0x43f998u: goto label_43f998;
        case 0x43f99cu: goto label_43f99c;
        case 0x43f9a0u: goto label_43f9a0;
        case 0x43f9a4u: goto label_43f9a4;
        case 0x43f9a8u: goto label_43f9a8;
        case 0x43f9acu: goto label_43f9ac;
        case 0x43f9b0u: goto label_43f9b0;
        case 0x43f9b4u: goto label_43f9b4;
        case 0x43f9b8u: goto label_43f9b8;
        case 0x43f9bcu: goto label_43f9bc;
        case 0x43f9c0u: goto label_43f9c0;
        case 0x43f9c4u: goto label_43f9c4;
        case 0x43f9c8u: goto label_43f9c8;
        case 0x43f9ccu: goto label_43f9cc;
        case 0x43f9d0u: goto label_43f9d0;
        case 0x43f9d4u: goto label_43f9d4;
        case 0x43f9d8u: goto label_43f9d8;
        case 0x43f9dcu: goto label_43f9dc;
        case 0x43f9e0u: goto label_43f9e0;
        case 0x43f9e4u: goto label_43f9e4;
        case 0x43f9e8u: goto label_43f9e8;
        case 0x43f9ecu: goto label_43f9ec;
        case 0x43f9f0u: goto label_43f9f0;
        case 0x43f9f4u: goto label_43f9f4;
        case 0x43f9f8u: goto label_43f9f8;
        case 0x43f9fcu: goto label_43f9fc;
        case 0x43fa00u: goto label_43fa00;
        case 0x43fa04u: goto label_43fa04;
        case 0x43fa08u: goto label_43fa08;
        case 0x43fa0cu: goto label_43fa0c;
        case 0x43fa10u: goto label_43fa10;
        case 0x43fa14u: goto label_43fa14;
        case 0x43fa18u: goto label_43fa18;
        case 0x43fa1cu: goto label_43fa1c;
        case 0x43fa20u: goto label_43fa20;
        case 0x43fa24u: goto label_43fa24;
        case 0x43fa28u: goto label_43fa28;
        case 0x43fa2cu: goto label_43fa2c;
        case 0x43fa30u: goto label_43fa30;
        case 0x43fa34u: goto label_43fa34;
        case 0x43fa38u: goto label_43fa38;
        case 0x43fa3cu: goto label_43fa3c;
        case 0x43fa40u: goto label_43fa40;
        case 0x43fa44u: goto label_43fa44;
        case 0x43fa48u: goto label_43fa48;
        case 0x43fa4cu: goto label_43fa4c;
        case 0x43fa50u: goto label_43fa50;
        case 0x43fa54u: goto label_43fa54;
        case 0x43fa58u: goto label_43fa58;
        case 0x43fa5cu: goto label_43fa5c;
        case 0x43fa60u: goto label_43fa60;
        case 0x43fa64u: goto label_43fa64;
        case 0x43fa68u: goto label_43fa68;
        case 0x43fa6cu: goto label_43fa6c;
        case 0x43fa70u: goto label_43fa70;
        case 0x43fa74u: goto label_43fa74;
        case 0x43fa78u: goto label_43fa78;
        case 0x43fa7cu: goto label_43fa7c;
        case 0x43fa80u: goto label_43fa80;
        case 0x43fa84u: goto label_43fa84;
        case 0x43fa88u: goto label_43fa88;
        case 0x43fa8cu: goto label_43fa8c;
        case 0x43fa90u: goto label_43fa90;
        case 0x43fa94u: goto label_43fa94;
        case 0x43fa98u: goto label_43fa98;
        case 0x43fa9cu: goto label_43fa9c;
        case 0x43faa0u: goto label_43faa0;
        case 0x43faa4u: goto label_43faa4;
        case 0x43faa8u: goto label_43faa8;
        case 0x43faacu: goto label_43faac;
        case 0x43fab0u: goto label_43fab0;
        case 0x43fab4u: goto label_43fab4;
        case 0x43fab8u: goto label_43fab8;
        case 0x43fabcu: goto label_43fabc;
        case 0x43fac0u: goto label_43fac0;
        case 0x43fac4u: goto label_43fac4;
        case 0x43fac8u: goto label_43fac8;
        case 0x43faccu: goto label_43facc;
        case 0x43fad0u: goto label_43fad0;
        case 0x43fad4u: goto label_43fad4;
        case 0x43fad8u: goto label_43fad8;
        case 0x43fadcu: goto label_43fadc;
        case 0x43fae0u: goto label_43fae0;
        case 0x43fae4u: goto label_43fae4;
        case 0x43fae8u: goto label_43fae8;
        case 0x43faecu: goto label_43faec;
        case 0x43faf0u: goto label_43faf0;
        case 0x43faf4u: goto label_43faf4;
        case 0x43faf8u: goto label_43faf8;
        case 0x43fafcu: goto label_43fafc;
        case 0x43fb00u: goto label_43fb00;
        case 0x43fb04u: goto label_43fb04;
        case 0x43fb08u: goto label_43fb08;
        case 0x43fb0cu: goto label_43fb0c;
        case 0x43fb10u: goto label_43fb10;
        case 0x43fb14u: goto label_43fb14;
        case 0x43fb18u: goto label_43fb18;
        case 0x43fb1cu: goto label_43fb1c;
        case 0x43fb20u: goto label_43fb20;
        case 0x43fb24u: goto label_43fb24;
        case 0x43fb28u: goto label_43fb28;
        case 0x43fb2cu: goto label_43fb2c;
        case 0x43fb30u: goto label_43fb30;
        case 0x43fb34u: goto label_43fb34;
        case 0x43fb38u: goto label_43fb38;
        case 0x43fb3cu: goto label_43fb3c;
        case 0x43fb40u: goto label_43fb40;
        case 0x43fb44u: goto label_43fb44;
        case 0x43fb48u: goto label_43fb48;
        case 0x43fb4cu: goto label_43fb4c;
        case 0x43fb50u: goto label_43fb50;
        case 0x43fb54u: goto label_43fb54;
        case 0x43fb58u: goto label_43fb58;
        case 0x43fb5cu: goto label_43fb5c;
        case 0x43fb60u: goto label_43fb60;
        case 0x43fb64u: goto label_43fb64;
        case 0x43fb68u: goto label_43fb68;
        case 0x43fb6cu: goto label_43fb6c;
        case 0x43fb70u: goto label_43fb70;
        case 0x43fb74u: goto label_43fb74;
        case 0x43fb78u: goto label_43fb78;
        case 0x43fb7cu: goto label_43fb7c;
        case 0x43fb80u: goto label_43fb80;
        case 0x43fb84u: goto label_43fb84;
        case 0x43fb88u: goto label_43fb88;
        case 0x43fb8cu: goto label_43fb8c;
        case 0x43fb90u: goto label_43fb90;
        case 0x43fb94u: goto label_43fb94;
        case 0x43fb98u: goto label_43fb98;
        case 0x43fb9cu: goto label_43fb9c;
        case 0x43fba0u: goto label_43fba0;
        case 0x43fba4u: goto label_43fba4;
        case 0x43fba8u: goto label_43fba8;
        case 0x43fbacu: goto label_43fbac;
        case 0x43fbb0u: goto label_43fbb0;
        case 0x43fbb4u: goto label_43fbb4;
        case 0x43fbb8u: goto label_43fbb8;
        case 0x43fbbcu: goto label_43fbbc;
        case 0x43fbc0u: goto label_43fbc0;
        case 0x43fbc4u: goto label_43fbc4;
        case 0x43fbc8u: goto label_43fbc8;
        case 0x43fbccu: goto label_43fbcc;
        case 0x43fbd0u: goto label_43fbd0;
        case 0x43fbd4u: goto label_43fbd4;
        case 0x43fbd8u: goto label_43fbd8;
        case 0x43fbdcu: goto label_43fbdc;
        case 0x43fbe0u: goto label_43fbe0;
        case 0x43fbe4u: goto label_43fbe4;
        case 0x43fbe8u: goto label_43fbe8;
        case 0x43fbecu: goto label_43fbec;
        case 0x43fbf0u: goto label_43fbf0;
        case 0x43fbf4u: goto label_43fbf4;
        case 0x43fbf8u: goto label_43fbf8;
        case 0x43fbfcu: goto label_43fbfc;
        case 0x43fc00u: goto label_43fc00;
        case 0x43fc04u: goto label_43fc04;
        case 0x43fc08u: goto label_43fc08;
        case 0x43fc0cu: goto label_43fc0c;
        case 0x43fc10u: goto label_43fc10;
        case 0x43fc14u: goto label_43fc14;
        case 0x43fc18u: goto label_43fc18;
        case 0x43fc1cu: goto label_43fc1c;
        case 0x43fc20u: goto label_43fc20;
        case 0x43fc24u: goto label_43fc24;
        case 0x43fc28u: goto label_43fc28;
        case 0x43fc2cu: goto label_43fc2c;
        case 0x43fc30u: goto label_43fc30;
        case 0x43fc34u: goto label_43fc34;
        case 0x43fc38u: goto label_43fc38;
        case 0x43fc3cu: goto label_43fc3c;
        case 0x43fc40u: goto label_43fc40;
        case 0x43fc44u: goto label_43fc44;
        case 0x43fc48u: goto label_43fc48;
        case 0x43fc4cu: goto label_43fc4c;
        case 0x43fc50u: goto label_43fc50;
        case 0x43fc54u: goto label_43fc54;
        case 0x43fc58u: goto label_43fc58;
        case 0x43fc5cu: goto label_43fc5c;
        case 0x43fc60u: goto label_43fc60;
        case 0x43fc64u: goto label_43fc64;
        case 0x43fc68u: goto label_43fc68;
        case 0x43fc6cu: goto label_43fc6c;
        case 0x43fc70u: goto label_43fc70;
        case 0x43fc74u: goto label_43fc74;
        case 0x43fc78u: goto label_43fc78;
        case 0x43fc7cu: goto label_43fc7c;
        case 0x43fc80u: goto label_43fc80;
        case 0x43fc84u: goto label_43fc84;
        case 0x43fc88u: goto label_43fc88;
        case 0x43fc8cu: goto label_43fc8c;
        case 0x43fc90u: goto label_43fc90;
        case 0x43fc94u: goto label_43fc94;
        case 0x43fc98u: goto label_43fc98;
        case 0x43fc9cu: goto label_43fc9c;
        case 0x43fca0u: goto label_43fca0;
        case 0x43fca4u: goto label_43fca4;
        case 0x43fca8u: goto label_43fca8;
        case 0x43fcacu: goto label_43fcac;
        case 0x43fcb0u: goto label_43fcb0;
        case 0x43fcb4u: goto label_43fcb4;
        case 0x43fcb8u: goto label_43fcb8;
        case 0x43fcbcu: goto label_43fcbc;
        case 0x43fcc0u: goto label_43fcc0;
        case 0x43fcc4u: goto label_43fcc4;
        case 0x43fcc8u: goto label_43fcc8;
        case 0x43fcccu: goto label_43fccc;
        case 0x43fcd0u: goto label_43fcd0;
        case 0x43fcd4u: goto label_43fcd4;
        case 0x43fcd8u: goto label_43fcd8;
        case 0x43fcdcu: goto label_43fcdc;
        case 0x43fce0u: goto label_43fce0;
        case 0x43fce4u: goto label_43fce4;
        case 0x43fce8u: goto label_43fce8;
        case 0x43fcecu: goto label_43fcec;
        case 0x43fcf0u: goto label_43fcf0;
        case 0x43fcf4u: goto label_43fcf4;
        case 0x43fcf8u: goto label_43fcf8;
        case 0x43fcfcu: goto label_43fcfc;
        case 0x43fd00u: goto label_43fd00;
        case 0x43fd04u: goto label_43fd04;
        case 0x43fd08u: goto label_43fd08;
        case 0x43fd0cu: goto label_43fd0c;
        case 0x43fd10u: goto label_43fd10;
        case 0x43fd14u: goto label_43fd14;
        case 0x43fd18u: goto label_43fd18;
        case 0x43fd1cu: goto label_43fd1c;
        case 0x43fd20u: goto label_43fd20;
        case 0x43fd24u: goto label_43fd24;
        case 0x43fd28u: goto label_43fd28;
        case 0x43fd2cu: goto label_43fd2c;
        case 0x43fd30u: goto label_43fd30;
        case 0x43fd34u: goto label_43fd34;
        case 0x43fd38u: goto label_43fd38;
        case 0x43fd3cu: goto label_43fd3c;
        case 0x43fd40u: goto label_43fd40;
        case 0x43fd44u: goto label_43fd44;
        case 0x43fd48u: goto label_43fd48;
        case 0x43fd4cu: goto label_43fd4c;
        case 0x43fd50u: goto label_43fd50;
        case 0x43fd54u: goto label_43fd54;
        case 0x43fd58u: goto label_43fd58;
        case 0x43fd5cu: goto label_43fd5c;
        case 0x43fd60u: goto label_43fd60;
        case 0x43fd64u: goto label_43fd64;
        case 0x43fd68u: goto label_43fd68;
        case 0x43fd6cu: goto label_43fd6c;
        case 0x43fd70u: goto label_43fd70;
        case 0x43fd74u: goto label_43fd74;
        case 0x43fd78u: goto label_43fd78;
        case 0x43fd7cu: goto label_43fd7c;
        case 0x43fd80u: goto label_43fd80;
        case 0x43fd84u: goto label_43fd84;
        case 0x43fd88u: goto label_43fd88;
        case 0x43fd8cu: goto label_43fd8c;
        case 0x43fd90u: goto label_43fd90;
        case 0x43fd94u: goto label_43fd94;
        case 0x43fd98u: goto label_43fd98;
        case 0x43fd9cu: goto label_43fd9c;
        case 0x43fda0u: goto label_43fda0;
        case 0x43fda4u: goto label_43fda4;
        case 0x43fda8u: goto label_43fda8;
        case 0x43fdacu: goto label_43fdac;
        case 0x43fdb0u: goto label_43fdb0;
        case 0x43fdb4u: goto label_43fdb4;
        case 0x43fdb8u: goto label_43fdb8;
        case 0x43fdbcu: goto label_43fdbc;
        case 0x43fdc0u: goto label_43fdc0;
        case 0x43fdc4u: goto label_43fdc4;
        case 0x43fdc8u: goto label_43fdc8;
        case 0x43fdccu: goto label_43fdcc;
        case 0x43fdd0u: goto label_43fdd0;
        case 0x43fdd4u: goto label_43fdd4;
        case 0x43fdd8u: goto label_43fdd8;
        case 0x43fddcu: goto label_43fddc;
        case 0x43fde0u: goto label_43fde0;
        case 0x43fde4u: goto label_43fde4;
        case 0x43fde8u: goto label_43fde8;
        case 0x43fdecu: goto label_43fdec;
        case 0x43fdf0u: goto label_43fdf0;
        case 0x43fdf4u: goto label_43fdf4;
        case 0x43fdf8u: goto label_43fdf8;
        case 0x43fdfcu: goto label_43fdfc;
        case 0x43fe00u: goto label_43fe00;
        case 0x43fe04u: goto label_43fe04;
        case 0x43fe08u: goto label_43fe08;
        case 0x43fe0cu: goto label_43fe0c;
        case 0x43fe10u: goto label_43fe10;
        case 0x43fe14u: goto label_43fe14;
        case 0x43fe18u: goto label_43fe18;
        case 0x43fe1cu: goto label_43fe1c;
        case 0x43fe20u: goto label_43fe20;
        case 0x43fe24u: goto label_43fe24;
        case 0x43fe28u: goto label_43fe28;
        case 0x43fe2cu: goto label_43fe2c;
        case 0x43fe30u: goto label_43fe30;
        case 0x43fe34u: goto label_43fe34;
        case 0x43fe38u: goto label_43fe38;
        case 0x43fe3cu: goto label_43fe3c;
        case 0x43fe40u: goto label_43fe40;
        case 0x43fe44u: goto label_43fe44;
        case 0x43fe48u: goto label_43fe48;
        case 0x43fe4cu: goto label_43fe4c;
        case 0x43fe50u: goto label_43fe50;
        case 0x43fe54u: goto label_43fe54;
        case 0x43fe58u: goto label_43fe58;
        case 0x43fe5cu: goto label_43fe5c;
        case 0x43fe60u: goto label_43fe60;
        case 0x43fe64u: goto label_43fe64;
        case 0x43fe68u: goto label_43fe68;
        case 0x43fe6cu: goto label_43fe6c;
        case 0x43fe70u: goto label_43fe70;
        case 0x43fe74u: goto label_43fe74;
        case 0x43fe78u: goto label_43fe78;
        case 0x43fe7cu: goto label_43fe7c;
        case 0x43fe80u: goto label_43fe80;
        case 0x43fe84u: goto label_43fe84;
        case 0x43fe88u: goto label_43fe88;
        case 0x43fe8cu: goto label_43fe8c;
        case 0x43fe90u: goto label_43fe90;
        case 0x43fe94u: goto label_43fe94;
        case 0x43fe98u: goto label_43fe98;
        case 0x43fe9cu: goto label_43fe9c;
        case 0x43fea0u: goto label_43fea0;
        case 0x43fea4u: goto label_43fea4;
        case 0x43fea8u: goto label_43fea8;
        case 0x43feacu: goto label_43feac;
        case 0x43feb0u: goto label_43feb0;
        case 0x43feb4u: goto label_43feb4;
        case 0x43feb8u: goto label_43feb8;
        case 0x43febcu: goto label_43febc;
        case 0x43fec0u: goto label_43fec0;
        case 0x43fec4u: goto label_43fec4;
        case 0x43fec8u: goto label_43fec8;
        case 0x43feccu: goto label_43fecc;
        case 0x43fed0u: goto label_43fed0;
        case 0x43fed4u: goto label_43fed4;
        case 0x43fed8u: goto label_43fed8;
        case 0x43fedcu: goto label_43fedc;
        case 0x43fee0u: goto label_43fee0;
        case 0x43fee4u: goto label_43fee4;
        case 0x43fee8u: goto label_43fee8;
        case 0x43feecu: goto label_43feec;
        case 0x43fef0u: goto label_43fef0;
        case 0x43fef4u: goto label_43fef4;
        case 0x43fef8u: goto label_43fef8;
        case 0x43fefcu: goto label_43fefc;
        case 0x43ff00u: goto label_43ff00;
        case 0x43ff04u: goto label_43ff04;
        case 0x43ff08u: goto label_43ff08;
        case 0x43ff0cu: goto label_43ff0c;
        case 0x43ff10u: goto label_43ff10;
        case 0x43ff14u: goto label_43ff14;
        case 0x43ff18u: goto label_43ff18;
        case 0x43ff1cu: goto label_43ff1c;
        case 0x43ff20u: goto label_43ff20;
        case 0x43ff24u: goto label_43ff24;
        case 0x43ff28u: goto label_43ff28;
        case 0x43ff2cu: goto label_43ff2c;
        case 0x43ff30u: goto label_43ff30;
        case 0x43ff34u: goto label_43ff34;
        case 0x43ff38u: goto label_43ff38;
        case 0x43ff3cu: goto label_43ff3c;
        case 0x43ff40u: goto label_43ff40;
        case 0x43ff44u: goto label_43ff44;
        case 0x43ff48u: goto label_43ff48;
        case 0x43ff4cu: goto label_43ff4c;
        case 0x43ff50u: goto label_43ff50;
        case 0x43ff54u: goto label_43ff54;
        case 0x43ff58u: goto label_43ff58;
        case 0x43ff5cu: goto label_43ff5c;
        case 0x43ff60u: goto label_43ff60;
        case 0x43ff64u: goto label_43ff64;
        case 0x43ff68u: goto label_43ff68;
        case 0x43ff6cu: goto label_43ff6c;
        case 0x43ff70u: goto label_43ff70;
        case 0x43ff74u: goto label_43ff74;
        case 0x43ff78u: goto label_43ff78;
        case 0x43ff7cu: goto label_43ff7c;
        case 0x43ff80u: goto label_43ff80;
        case 0x43ff84u: goto label_43ff84;
        case 0x43ff88u: goto label_43ff88;
        case 0x43ff8cu: goto label_43ff8c;
        case 0x43ff90u: goto label_43ff90;
        case 0x43ff94u: goto label_43ff94;
        case 0x43ff98u: goto label_43ff98;
        case 0x43ff9cu: goto label_43ff9c;
        case 0x43ffa0u: goto label_43ffa0;
        case 0x43ffa4u: goto label_43ffa4;
        case 0x43ffa8u: goto label_43ffa8;
        case 0x43ffacu: goto label_43ffac;
        case 0x43ffb0u: goto label_43ffb0;
        case 0x43ffb4u: goto label_43ffb4;
        case 0x43ffb8u: goto label_43ffb8;
        case 0x43ffbcu: goto label_43ffbc;
        case 0x43ffc0u: goto label_43ffc0;
        case 0x43ffc4u: goto label_43ffc4;
        case 0x43ffc8u: goto label_43ffc8;
        case 0x43ffccu: goto label_43ffcc;
        case 0x43ffd0u: goto label_43ffd0;
        case 0x43ffd4u: goto label_43ffd4;
        case 0x43ffd8u: goto label_43ffd8;
        case 0x43ffdcu: goto label_43ffdc;
        case 0x43ffe0u: goto label_43ffe0;
        case 0x43ffe4u: goto label_43ffe4;
        case 0x43ffe8u: goto label_43ffe8;
        case 0x43ffecu: goto label_43ffec;
        case 0x43fff0u: goto label_43fff0;
        case 0x43fff4u: goto label_43fff4;
        case 0x43fff8u: goto label_43fff8;
        case 0x43fffcu: goto label_43fffc;
        case 0x440000u: goto label_440000;
        case 0x440004u: goto label_440004;
        case 0x440008u: goto label_440008;
        case 0x44000cu: goto label_44000c;
        case 0x440010u: goto label_440010;
        case 0x440014u: goto label_440014;
        case 0x440018u: goto label_440018;
        case 0x44001cu: goto label_44001c;
        case 0x440020u: goto label_440020;
        case 0x440024u: goto label_440024;
        case 0x440028u: goto label_440028;
        case 0x44002cu: goto label_44002c;
        case 0x440030u: goto label_440030;
        case 0x440034u: goto label_440034;
        case 0x440038u: goto label_440038;
        case 0x44003cu: goto label_44003c;
        case 0x440040u: goto label_440040;
        case 0x440044u: goto label_440044;
        case 0x440048u: goto label_440048;
        case 0x44004cu: goto label_44004c;
        case 0x440050u: goto label_440050;
        case 0x440054u: goto label_440054;
        case 0x440058u: goto label_440058;
        case 0x44005cu: goto label_44005c;
        case 0x440060u: goto label_440060;
        case 0x440064u: goto label_440064;
        case 0x440068u: goto label_440068;
        case 0x44006cu: goto label_44006c;
        case 0x440070u: goto label_440070;
        case 0x440074u: goto label_440074;
        case 0x440078u: goto label_440078;
        case 0x44007cu: goto label_44007c;
        case 0x440080u: goto label_440080;
        case 0x440084u: goto label_440084;
        case 0x440088u: goto label_440088;
        case 0x44008cu: goto label_44008c;
        case 0x440090u: goto label_440090;
        case 0x440094u: goto label_440094;
        case 0x440098u: goto label_440098;
        case 0x44009cu: goto label_44009c;
        case 0x4400a0u: goto label_4400a0;
        case 0x4400a4u: goto label_4400a4;
        case 0x4400a8u: goto label_4400a8;
        case 0x4400acu: goto label_4400ac;
        case 0x4400b0u: goto label_4400b0;
        case 0x4400b4u: goto label_4400b4;
        case 0x4400b8u: goto label_4400b8;
        case 0x4400bcu: goto label_4400bc;
        case 0x4400c0u: goto label_4400c0;
        case 0x4400c4u: goto label_4400c4;
        case 0x4400c8u: goto label_4400c8;
        case 0x4400ccu: goto label_4400cc;
        case 0x4400d0u: goto label_4400d0;
        case 0x4400d4u: goto label_4400d4;
        case 0x4400d8u: goto label_4400d8;
        case 0x4400dcu: goto label_4400dc;
        case 0x4400e0u: goto label_4400e0;
        case 0x4400e4u: goto label_4400e4;
        case 0x4400e8u: goto label_4400e8;
        case 0x4400ecu: goto label_4400ec;
        case 0x4400f0u: goto label_4400f0;
        case 0x4400f4u: goto label_4400f4;
        case 0x4400f8u: goto label_4400f8;
        case 0x4400fcu: goto label_4400fc;
        case 0x440100u: goto label_440100;
        case 0x440104u: goto label_440104;
        case 0x440108u: goto label_440108;
        case 0x44010cu: goto label_44010c;
        case 0x440110u: goto label_440110;
        case 0x440114u: goto label_440114;
        case 0x440118u: goto label_440118;
        case 0x44011cu: goto label_44011c;
        case 0x440120u: goto label_440120;
        case 0x440124u: goto label_440124;
        case 0x440128u: goto label_440128;
        case 0x44012cu: goto label_44012c;
        case 0x440130u: goto label_440130;
        case 0x440134u: goto label_440134;
        case 0x440138u: goto label_440138;
        case 0x44013cu: goto label_44013c;
        case 0x440140u: goto label_440140;
        case 0x440144u: goto label_440144;
        case 0x440148u: goto label_440148;
        case 0x44014cu: goto label_44014c;
        case 0x440150u: goto label_440150;
        case 0x440154u: goto label_440154;
        case 0x440158u: goto label_440158;
        case 0x44015cu: goto label_44015c;
        case 0x440160u: goto label_440160;
        case 0x440164u: goto label_440164;
        case 0x440168u: goto label_440168;
        case 0x44016cu: goto label_44016c;
        case 0x440170u: goto label_440170;
        case 0x440174u: goto label_440174;
        case 0x440178u: goto label_440178;
        case 0x44017cu: goto label_44017c;
        case 0x440180u: goto label_440180;
        case 0x440184u: goto label_440184;
        case 0x440188u: goto label_440188;
        case 0x44018cu: goto label_44018c;
        case 0x440190u: goto label_440190;
        case 0x440194u: goto label_440194;
        case 0x440198u: goto label_440198;
        case 0x44019cu: goto label_44019c;
        case 0x4401a0u: goto label_4401a0;
        case 0x4401a4u: goto label_4401a4;
        case 0x4401a8u: goto label_4401a8;
        case 0x4401acu: goto label_4401ac;
        case 0x4401b0u: goto label_4401b0;
        case 0x4401b4u: goto label_4401b4;
        case 0x4401b8u: goto label_4401b8;
        case 0x4401bcu: goto label_4401bc;
        case 0x4401c0u: goto label_4401c0;
        case 0x4401c4u: goto label_4401c4;
        case 0x4401c8u: goto label_4401c8;
        case 0x4401ccu: goto label_4401cc;
        case 0x4401d0u: goto label_4401d0;
        case 0x4401d4u: goto label_4401d4;
        case 0x4401d8u: goto label_4401d8;
        case 0x4401dcu: goto label_4401dc;
        case 0x4401e0u: goto label_4401e0;
        case 0x4401e4u: goto label_4401e4;
        case 0x4401e8u: goto label_4401e8;
        case 0x4401ecu: goto label_4401ec;
        case 0x4401f0u: goto label_4401f0;
        case 0x4401f4u: goto label_4401f4;
        case 0x4401f8u: goto label_4401f8;
        case 0x4401fcu: goto label_4401fc;
        case 0x440200u: goto label_440200;
        case 0x440204u: goto label_440204;
        case 0x440208u: goto label_440208;
        case 0x44020cu: goto label_44020c;
        case 0x440210u: goto label_440210;
        case 0x440214u: goto label_440214;
        case 0x440218u: goto label_440218;
        case 0x44021cu: goto label_44021c;
        case 0x440220u: goto label_440220;
        case 0x440224u: goto label_440224;
        case 0x440228u: goto label_440228;
        case 0x44022cu: goto label_44022c;
        case 0x440230u: goto label_440230;
        case 0x440234u: goto label_440234;
        case 0x440238u: goto label_440238;
        case 0x44023cu: goto label_44023c;
        case 0x440240u: goto label_440240;
        case 0x440244u: goto label_440244;
        case 0x440248u: goto label_440248;
        case 0x44024cu: goto label_44024c;
        case 0x440250u: goto label_440250;
        case 0x440254u: goto label_440254;
        case 0x440258u: goto label_440258;
        case 0x44025cu: goto label_44025c;
        case 0x440260u: goto label_440260;
        case 0x440264u: goto label_440264;
        case 0x440268u: goto label_440268;
        case 0x44026cu: goto label_44026c;
        case 0x440270u: goto label_440270;
        case 0x440274u: goto label_440274;
        case 0x440278u: goto label_440278;
        case 0x44027cu: goto label_44027c;
        case 0x440280u: goto label_440280;
        case 0x440284u: goto label_440284;
        case 0x440288u: goto label_440288;
        case 0x44028cu: goto label_44028c;
        case 0x440290u: goto label_440290;
        case 0x440294u: goto label_440294;
        case 0x440298u: goto label_440298;
        case 0x44029cu: goto label_44029c;
        case 0x4402a0u: goto label_4402a0;
        case 0x4402a4u: goto label_4402a4;
        case 0x4402a8u: goto label_4402a8;
        case 0x4402acu: goto label_4402ac;
        case 0x4402b0u: goto label_4402b0;
        case 0x4402b4u: goto label_4402b4;
        case 0x4402b8u: goto label_4402b8;
        case 0x4402bcu: goto label_4402bc;
        case 0x4402c0u: goto label_4402c0;
        case 0x4402c4u: goto label_4402c4;
        case 0x4402c8u: goto label_4402c8;
        case 0x4402ccu: goto label_4402cc;
        case 0x4402d0u: goto label_4402d0;
        case 0x4402d4u: goto label_4402d4;
        case 0x4402d8u: goto label_4402d8;
        case 0x4402dcu: goto label_4402dc;
        case 0x4402e0u: goto label_4402e0;
        case 0x4402e4u: goto label_4402e4;
        case 0x4402e8u: goto label_4402e8;
        case 0x4402ecu: goto label_4402ec;
        case 0x4402f0u: goto label_4402f0;
        case 0x4402f4u: goto label_4402f4;
        case 0x4402f8u: goto label_4402f8;
        case 0x4402fcu: goto label_4402fc;
        case 0x440300u: goto label_440300;
        case 0x440304u: goto label_440304;
        case 0x440308u: goto label_440308;
        case 0x44030cu: goto label_44030c;
        case 0x440310u: goto label_440310;
        case 0x440314u: goto label_440314;
        case 0x440318u: goto label_440318;
        case 0x44031cu: goto label_44031c;
        case 0x440320u: goto label_440320;
        case 0x440324u: goto label_440324;
        case 0x440328u: goto label_440328;
        case 0x44032cu: goto label_44032c;
        case 0x440330u: goto label_440330;
        case 0x440334u: goto label_440334;
        case 0x440338u: goto label_440338;
        case 0x44033cu: goto label_44033c;
        case 0x440340u: goto label_440340;
        case 0x440344u: goto label_440344;
        case 0x440348u: goto label_440348;
        case 0x44034cu: goto label_44034c;
        case 0x440350u: goto label_440350;
        case 0x440354u: goto label_440354;
        case 0x440358u: goto label_440358;
        case 0x44035cu: goto label_44035c;
        case 0x440360u: goto label_440360;
        case 0x440364u: goto label_440364;
        case 0x440368u: goto label_440368;
        case 0x44036cu: goto label_44036c;
        case 0x440370u: goto label_440370;
        case 0x440374u: goto label_440374;
        case 0x440378u: goto label_440378;
        case 0x44037cu: goto label_44037c;
        case 0x440380u: goto label_440380;
        case 0x440384u: goto label_440384;
        case 0x440388u: goto label_440388;
        case 0x44038cu: goto label_44038c;
        case 0x440390u: goto label_440390;
        case 0x440394u: goto label_440394;
        case 0x440398u: goto label_440398;
        case 0x44039cu: goto label_44039c;
        case 0x4403a0u: goto label_4403a0;
        case 0x4403a4u: goto label_4403a4;
        case 0x4403a8u: goto label_4403a8;
        case 0x4403acu: goto label_4403ac;
        case 0x4403b0u: goto label_4403b0;
        case 0x4403b4u: goto label_4403b4;
        case 0x4403b8u: goto label_4403b8;
        case 0x4403bcu: goto label_4403bc;
        case 0x4403c0u: goto label_4403c0;
        case 0x4403c4u: goto label_4403c4;
        case 0x4403c8u: goto label_4403c8;
        case 0x4403ccu: goto label_4403cc;
        case 0x4403d0u: goto label_4403d0;
        case 0x4403d4u: goto label_4403d4;
        case 0x4403d8u: goto label_4403d8;
        case 0x4403dcu: goto label_4403dc;
        case 0x4403e0u: goto label_4403e0;
        case 0x4403e4u: goto label_4403e4;
        case 0x4403e8u: goto label_4403e8;
        case 0x4403ecu: goto label_4403ec;
        case 0x4403f0u: goto label_4403f0;
        case 0x4403f4u: goto label_4403f4;
        case 0x4403f8u: goto label_4403f8;
        case 0x4403fcu: goto label_4403fc;
        case 0x440400u: goto label_440400;
        case 0x440404u: goto label_440404;
        case 0x440408u: goto label_440408;
        case 0x44040cu: goto label_44040c;
        case 0x440410u: goto label_440410;
        case 0x440414u: goto label_440414;
        case 0x440418u: goto label_440418;
        case 0x44041cu: goto label_44041c;
        case 0x440420u: goto label_440420;
        case 0x440424u: goto label_440424;
        case 0x440428u: goto label_440428;
        case 0x44042cu: goto label_44042c;
        case 0x440430u: goto label_440430;
        case 0x440434u: goto label_440434;
        case 0x440438u: goto label_440438;
        case 0x44043cu: goto label_44043c;
        case 0x440440u: goto label_440440;
        case 0x440444u: goto label_440444;
        case 0x440448u: goto label_440448;
        case 0x44044cu: goto label_44044c;
        case 0x440450u: goto label_440450;
        case 0x440454u: goto label_440454;
        case 0x440458u: goto label_440458;
        case 0x44045cu: goto label_44045c;
        case 0x440460u: goto label_440460;
        case 0x440464u: goto label_440464;
        case 0x440468u: goto label_440468;
        case 0x44046cu: goto label_44046c;
        case 0x440470u: goto label_440470;
        case 0x440474u: goto label_440474;
        case 0x440478u: goto label_440478;
        case 0x44047cu: goto label_44047c;
        case 0x440480u: goto label_440480;
        case 0x440484u: goto label_440484;
        case 0x440488u: goto label_440488;
        case 0x44048cu: goto label_44048c;
        case 0x440490u: goto label_440490;
        case 0x440494u: goto label_440494;
        case 0x440498u: goto label_440498;
        case 0x44049cu: goto label_44049c;
        case 0x4404a0u: goto label_4404a0;
        case 0x4404a4u: goto label_4404a4;
        case 0x4404a8u: goto label_4404a8;
        case 0x4404acu: goto label_4404ac;
        case 0x4404b0u: goto label_4404b0;
        case 0x4404b4u: goto label_4404b4;
        case 0x4404b8u: goto label_4404b8;
        case 0x4404bcu: goto label_4404bc;
        case 0x4404c0u: goto label_4404c0;
        case 0x4404c4u: goto label_4404c4;
        case 0x4404c8u: goto label_4404c8;
        case 0x4404ccu: goto label_4404cc;
        case 0x4404d0u: goto label_4404d0;
        case 0x4404d4u: goto label_4404d4;
        case 0x4404d8u: goto label_4404d8;
        case 0x4404dcu: goto label_4404dc;
        case 0x4404e0u: goto label_4404e0;
        case 0x4404e4u: goto label_4404e4;
        case 0x4404e8u: goto label_4404e8;
        case 0x4404ecu: goto label_4404ec;
        case 0x4404f0u: goto label_4404f0;
        case 0x4404f4u: goto label_4404f4;
        case 0x4404f8u: goto label_4404f8;
        case 0x4404fcu: goto label_4404fc;
        case 0x440500u: goto label_440500;
        case 0x440504u: goto label_440504;
        case 0x440508u: goto label_440508;
        case 0x44050cu: goto label_44050c;
        case 0x440510u: goto label_440510;
        case 0x440514u: goto label_440514;
        case 0x440518u: goto label_440518;
        case 0x44051cu: goto label_44051c;
        case 0x440520u: goto label_440520;
        case 0x440524u: goto label_440524;
        case 0x440528u: goto label_440528;
        case 0x44052cu: goto label_44052c;
        case 0x440530u: goto label_440530;
        case 0x440534u: goto label_440534;
        case 0x440538u: goto label_440538;
        case 0x44053cu: goto label_44053c;
        case 0x440540u: goto label_440540;
        case 0x440544u: goto label_440544;
        case 0x440548u: goto label_440548;
        case 0x44054cu: goto label_44054c;
        case 0x440550u: goto label_440550;
        case 0x440554u: goto label_440554;
        case 0x440558u: goto label_440558;
        case 0x44055cu: goto label_44055c;
        case 0x440560u: goto label_440560;
        case 0x440564u: goto label_440564;
        case 0x440568u: goto label_440568;
        case 0x44056cu: goto label_44056c;
        case 0x440570u: goto label_440570;
        case 0x440574u: goto label_440574;
        case 0x440578u: goto label_440578;
        case 0x44057cu: goto label_44057c;
        case 0x440580u: goto label_440580;
        case 0x440584u: goto label_440584;
        case 0x440588u: goto label_440588;
        case 0x44058cu: goto label_44058c;
        case 0x440590u: goto label_440590;
        case 0x440594u: goto label_440594;
        case 0x440598u: goto label_440598;
        case 0x44059cu: goto label_44059c;
        case 0x4405a0u: goto label_4405a0;
        case 0x4405a4u: goto label_4405a4;
        case 0x4405a8u: goto label_4405a8;
        case 0x4405acu: goto label_4405ac;
        case 0x4405b0u: goto label_4405b0;
        case 0x4405b4u: goto label_4405b4;
        case 0x4405b8u: goto label_4405b8;
        case 0x4405bcu: goto label_4405bc;
        case 0x4405c0u: goto label_4405c0;
        case 0x4405c4u: goto label_4405c4;
        case 0x4405c8u: goto label_4405c8;
        case 0x4405ccu: goto label_4405cc;
        case 0x4405d0u: goto label_4405d0;
        case 0x4405d4u: goto label_4405d4;
        case 0x4405d8u: goto label_4405d8;
        case 0x4405dcu: goto label_4405dc;
        case 0x4405e0u: goto label_4405e0;
        case 0x4405e4u: goto label_4405e4;
        case 0x4405e8u: goto label_4405e8;
        case 0x4405ecu: goto label_4405ec;
        case 0x4405f0u: goto label_4405f0;
        case 0x4405f4u: goto label_4405f4;
        case 0x4405f8u: goto label_4405f8;
        case 0x4405fcu: goto label_4405fc;
        case 0x440600u: goto label_440600;
        case 0x440604u: goto label_440604;
        case 0x440608u: goto label_440608;
        case 0x44060cu: goto label_44060c;
        case 0x440610u: goto label_440610;
        case 0x440614u: goto label_440614;
        case 0x440618u: goto label_440618;
        case 0x44061cu: goto label_44061c;
        case 0x440620u: goto label_440620;
        case 0x440624u: goto label_440624;
        case 0x440628u: goto label_440628;
        case 0x44062cu: goto label_44062c;
        case 0x440630u: goto label_440630;
        case 0x440634u: goto label_440634;
        case 0x440638u: goto label_440638;
        case 0x44063cu: goto label_44063c;
        case 0x440640u: goto label_440640;
        case 0x440644u: goto label_440644;
        case 0x440648u: goto label_440648;
        case 0x44064cu: goto label_44064c;
        case 0x440650u: goto label_440650;
        case 0x440654u: goto label_440654;
        case 0x440658u: goto label_440658;
        case 0x44065cu: goto label_44065c;
        case 0x440660u: goto label_440660;
        case 0x440664u: goto label_440664;
        case 0x440668u: goto label_440668;
        case 0x44066cu: goto label_44066c;
        case 0x440670u: goto label_440670;
        case 0x440674u: goto label_440674;
        case 0x440678u: goto label_440678;
        case 0x44067cu: goto label_44067c;
        case 0x440680u: goto label_440680;
        case 0x440684u: goto label_440684;
        case 0x440688u: goto label_440688;
        case 0x44068cu: goto label_44068c;
        case 0x440690u: goto label_440690;
        case 0x440694u: goto label_440694;
        case 0x440698u: goto label_440698;
        case 0x44069cu: goto label_44069c;
        case 0x4406a0u: goto label_4406a0;
        case 0x4406a4u: goto label_4406a4;
        case 0x4406a8u: goto label_4406a8;
        case 0x4406acu: goto label_4406ac;
        case 0x4406b0u: goto label_4406b0;
        case 0x4406b4u: goto label_4406b4;
        case 0x4406b8u: goto label_4406b8;
        case 0x4406bcu: goto label_4406bc;
        case 0x4406c0u: goto label_4406c0;
        case 0x4406c4u: goto label_4406c4;
        case 0x4406c8u: goto label_4406c8;
        case 0x4406ccu: goto label_4406cc;
        case 0x4406d0u: goto label_4406d0;
        case 0x4406d4u: goto label_4406d4;
        case 0x4406d8u: goto label_4406d8;
        case 0x4406dcu: goto label_4406dc;
        case 0x4406e0u: goto label_4406e0;
        case 0x4406e4u: goto label_4406e4;
        case 0x4406e8u: goto label_4406e8;
        case 0x4406ecu: goto label_4406ec;
        case 0x4406f0u: goto label_4406f0;
        case 0x4406f4u: goto label_4406f4;
        case 0x4406f8u: goto label_4406f8;
        case 0x4406fcu: goto label_4406fc;
        case 0x440700u: goto label_440700;
        case 0x440704u: goto label_440704;
        case 0x440708u: goto label_440708;
        case 0x44070cu: goto label_44070c;
        case 0x440710u: goto label_440710;
        case 0x440714u: goto label_440714;
        case 0x440718u: goto label_440718;
        case 0x44071cu: goto label_44071c;
        case 0x440720u: goto label_440720;
        case 0x440724u: goto label_440724;
        case 0x440728u: goto label_440728;
        case 0x44072cu: goto label_44072c;
        case 0x440730u: goto label_440730;
        case 0x440734u: goto label_440734;
        case 0x440738u: goto label_440738;
        case 0x44073cu: goto label_44073c;
        case 0x440740u: goto label_440740;
        case 0x440744u: goto label_440744;
        case 0x440748u: goto label_440748;
        case 0x44074cu: goto label_44074c;
        case 0x440750u: goto label_440750;
        case 0x440754u: goto label_440754;
        case 0x440758u: goto label_440758;
        case 0x44075cu: goto label_44075c;
        case 0x440760u: goto label_440760;
        case 0x440764u: goto label_440764;
        case 0x440768u: goto label_440768;
        case 0x44076cu: goto label_44076c;
        case 0x440770u: goto label_440770;
        case 0x440774u: goto label_440774;
        case 0x440778u: goto label_440778;
        case 0x44077cu: goto label_44077c;
        case 0x440780u: goto label_440780;
        case 0x440784u: goto label_440784;
        case 0x440788u: goto label_440788;
        case 0x44078cu: goto label_44078c;
        case 0x440790u: goto label_440790;
        case 0x440794u: goto label_440794;
        case 0x440798u: goto label_440798;
        case 0x44079cu: goto label_44079c;
        case 0x4407a0u: goto label_4407a0;
        case 0x4407a4u: goto label_4407a4;
        case 0x4407a8u: goto label_4407a8;
        case 0x4407acu: goto label_4407ac;
        case 0x4407b0u: goto label_4407b0;
        case 0x4407b4u: goto label_4407b4;
        case 0x4407b8u: goto label_4407b8;
        case 0x4407bcu: goto label_4407bc;
        case 0x4407c0u: goto label_4407c0;
        case 0x4407c4u: goto label_4407c4;
        case 0x4407c8u: goto label_4407c8;
        case 0x4407ccu: goto label_4407cc;
        case 0x4407d0u: goto label_4407d0;
        case 0x4407d4u: goto label_4407d4;
        case 0x4407d8u: goto label_4407d8;
        case 0x4407dcu: goto label_4407dc;
        case 0x4407e0u: goto label_4407e0;
        case 0x4407e4u: goto label_4407e4;
        case 0x4407e8u: goto label_4407e8;
        case 0x4407ecu: goto label_4407ec;
        case 0x4407f0u: goto label_4407f0;
        case 0x4407f4u: goto label_4407f4;
        case 0x4407f8u: goto label_4407f8;
        case 0x4407fcu: goto label_4407fc;
        case 0x440800u: goto label_440800;
        case 0x440804u: goto label_440804;
        case 0x440808u: goto label_440808;
        case 0x44080cu: goto label_44080c;
        case 0x440810u: goto label_440810;
        case 0x440814u: goto label_440814;
        case 0x440818u: goto label_440818;
        case 0x44081cu: goto label_44081c;
        case 0x440820u: goto label_440820;
        case 0x440824u: goto label_440824;
        case 0x440828u: goto label_440828;
        case 0x44082cu: goto label_44082c;
        case 0x440830u: goto label_440830;
        case 0x440834u: goto label_440834;
        case 0x440838u: goto label_440838;
        case 0x44083cu: goto label_44083c;
        case 0x440840u: goto label_440840;
        case 0x440844u: goto label_440844;
        case 0x440848u: goto label_440848;
        case 0x44084cu: goto label_44084c;
        case 0x440850u: goto label_440850;
        case 0x440854u: goto label_440854;
        case 0x440858u: goto label_440858;
        case 0x44085cu: goto label_44085c;
        case 0x440860u: goto label_440860;
        case 0x440864u: goto label_440864;
        case 0x440868u: goto label_440868;
        case 0x44086cu: goto label_44086c;
        case 0x440870u: goto label_440870;
        case 0x440874u: goto label_440874;
        case 0x440878u: goto label_440878;
        case 0x44087cu: goto label_44087c;
        case 0x440880u: goto label_440880;
        case 0x440884u: goto label_440884;
        case 0x440888u: goto label_440888;
        case 0x44088cu: goto label_44088c;
        case 0x440890u: goto label_440890;
        case 0x440894u: goto label_440894;
        case 0x440898u: goto label_440898;
        case 0x44089cu: goto label_44089c;
        case 0x4408a0u: goto label_4408a0;
        case 0x4408a4u: goto label_4408a4;
        case 0x4408a8u: goto label_4408a8;
        case 0x4408acu: goto label_4408ac;
        case 0x4408b0u: goto label_4408b0;
        case 0x4408b4u: goto label_4408b4;
        case 0x4408b8u: goto label_4408b8;
        case 0x4408bcu: goto label_4408bc;
        case 0x4408c0u: goto label_4408c0;
        case 0x4408c4u: goto label_4408c4;
        case 0x4408c8u: goto label_4408c8;
        case 0x4408ccu: goto label_4408cc;
        case 0x4408d0u: goto label_4408d0;
        case 0x4408d4u: goto label_4408d4;
        case 0x4408d8u: goto label_4408d8;
        case 0x4408dcu: goto label_4408dc;
        case 0x4408e0u: goto label_4408e0;
        case 0x4408e4u: goto label_4408e4;
        case 0x4408e8u: goto label_4408e8;
        case 0x4408ecu: goto label_4408ec;
        case 0x4408f0u: goto label_4408f0;
        case 0x4408f4u: goto label_4408f4;
        case 0x4408f8u: goto label_4408f8;
        case 0x4408fcu: goto label_4408fc;
        case 0x440900u: goto label_440900;
        case 0x440904u: goto label_440904;
        case 0x440908u: goto label_440908;
        case 0x44090cu: goto label_44090c;
        case 0x440910u: goto label_440910;
        case 0x440914u: goto label_440914;
        case 0x440918u: goto label_440918;
        case 0x44091cu: goto label_44091c;
        case 0x440920u: goto label_440920;
        case 0x440924u: goto label_440924;
        case 0x440928u: goto label_440928;
        case 0x44092cu: goto label_44092c;
        case 0x440930u: goto label_440930;
        case 0x440934u: goto label_440934;
        case 0x440938u: goto label_440938;
        case 0x44093cu: goto label_44093c;
        case 0x440940u: goto label_440940;
        case 0x440944u: goto label_440944;
        case 0x440948u: goto label_440948;
        case 0x44094cu: goto label_44094c;
        case 0x440950u: goto label_440950;
        case 0x440954u: goto label_440954;
        case 0x440958u: goto label_440958;
        case 0x44095cu: goto label_44095c;
        case 0x440960u: goto label_440960;
        case 0x440964u: goto label_440964;
        case 0x440968u: goto label_440968;
        case 0x44096cu: goto label_44096c;
        case 0x440970u: goto label_440970;
        case 0x440974u: goto label_440974;
        case 0x440978u: goto label_440978;
        case 0x44097cu: goto label_44097c;
        case 0x440980u: goto label_440980;
        case 0x440984u: goto label_440984;
        case 0x440988u: goto label_440988;
        case 0x44098cu: goto label_44098c;
        case 0x440990u: goto label_440990;
        case 0x440994u: goto label_440994;
        case 0x440998u: goto label_440998;
        case 0x44099cu: goto label_44099c;
        case 0x4409a0u: goto label_4409a0;
        case 0x4409a4u: goto label_4409a4;
        case 0x4409a8u: goto label_4409a8;
        case 0x4409acu: goto label_4409ac;
        case 0x4409b0u: goto label_4409b0;
        case 0x4409b4u: goto label_4409b4;
        case 0x4409b8u: goto label_4409b8;
        case 0x4409bcu: goto label_4409bc;
        case 0x4409c0u: goto label_4409c0;
        case 0x4409c4u: goto label_4409c4;
        case 0x4409c8u: goto label_4409c8;
        case 0x4409ccu: goto label_4409cc;
        case 0x4409d0u: goto label_4409d0;
        case 0x4409d4u: goto label_4409d4;
        case 0x4409d8u: goto label_4409d8;
        case 0x4409dcu: goto label_4409dc;
        case 0x4409e0u: goto label_4409e0;
        case 0x4409e4u: goto label_4409e4;
        case 0x4409e8u: goto label_4409e8;
        case 0x4409ecu: goto label_4409ec;
        case 0x4409f0u: goto label_4409f0;
        case 0x4409f4u: goto label_4409f4;
        case 0x4409f8u: goto label_4409f8;
        case 0x4409fcu: goto label_4409fc;
        case 0x440a00u: goto label_440a00;
        case 0x440a04u: goto label_440a04;
        case 0x440a08u: goto label_440a08;
        case 0x440a0cu: goto label_440a0c;
        case 0x440a10u: goto label_440a10;
        case 0x440a14u: goto label_440a14;
        case 0x440a18u: goto label_440a18;
        case 0x440a1cu: goto label_440a1c;
        case 0x440a20u: goto label_440a20;
        case 0x440a24u: goto label_440a24;
        case 0x440a28u: goto label_440a28;
        case 0x440a2cu: goto label_440a2c;
        case 0x440a30u: goto label_440a30;
        case 0x440a34u: goto label_440a34;
        case 0x440a38u: goto label_440a38;
        case 0x440a3cu: goto label_440a3c;
        case 0x440a40u: goto label_440a40;
        case 0x440a44u: goto label_440a44;
        case 0x440a48u: goto label_440a48;
        case 0x440a4cu: goto label_440a4c;
        case 0x440a50u: goto label_440a50;
        case 0x440a54u: goto label_440a54;
        case 0x440a58u: goto label_440a58;
        case 0x440a5cu: goto label_440a5c;
        case 0x440a60u: goto label_440a60;
        case 0x440a64u: goto label_440a64;
        case 0x440a68u: goto label_440a68;
        case 0x440a6cu: goto label_440a6c;
        case 0x440a70u: goto label_440a70;
        case 0x440a74u: goto label_440a74;
        case 0x440a78u: goto label_440a78;
        case 0x440a7cu: goto label_440a7c;
        case 0x440a80u: goto label_440a80;
        case 0x440a84u: goto label_440a84;
        case 0x440a88u: goto label_440a88;
        case 0x440a8cu: goto label_440a8c;
        case 0x440a90u: goto label_440a90;
        case 0x440a94u: goto label_440a94;
        case 0x440a98u: goto label_440a98;
        case 0x440a9cu: goto label_440a9c;
        case 0x440aa0u: goto label_440aa0;
        case 0x440aa4u: goto label_440aa4;
        case 0x440aa8u: goto label_440aa8;
        case 0x440aacu: goto label_440aac;
        case 0x440ab0u: goto label_440ab0;
        case 0x440ab4u: goto label_440ab4;
        case 0x440ab8u: goto label_440ab8;
        case 0x440abcu: goto label_440abc;
        case 0x440ac0u: goto label_440ac0;
        case 0x440ac4u: goto label_440ac4;
        case 0x440ac8u: goto label_440ac8;
        case 0x440accu: goto label_440acc;
        case 0x440ad0u: goto label_440ad0;
        case 0x440ad4u: goto label_440ad4;
        case 0x440ad8u: goto label_440ad8;
        case 0x440adcu: goto label_440adc;
        case 0x440ae0u: goto label_440ae0;
        case 0x440ae4u: goto label_440ae4;
        case 0x440ae8u: goto label_440ae8;
        case 0x440aecu: goto label_440aec;
        case 0x440af0u: goto label_440af0;
        case 0x440af4u: goto label_440af4;
        default: break;
    }

    ctx->pc = 0x43eab8u;

label_43eab8:
    // 0x43eab8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x43eab8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_43eabc:
    // 0x43eabc: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x43eabcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_43eac0:
    // 0x43eac0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x43eac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_43eac4:
    // 0x43eac4: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x43eac4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_43eac8:
    // 0x43eac8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x43eac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_43eacc:
    // 0x43eacc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x43eaccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_43ead0:
    // 0x43ead0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x43ead0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_43ead4:
    // 0x43ead4: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x43ead4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_43ead8:
    // 0x43ead8: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x43ead8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_43eadc:
    // 0x43eadc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x43eadcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_43eae0:
    // 0x43eae0: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x43eae0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_43eae4:
    // 0x43eae4: 0x8f90aeec  lw          $s0, -0x5114($gp)
    ctx->pc = 0x43eae4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946540)));
label_43eae8:
    // 0x43eae8: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x43eae8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_43eaec:
    // 0x43eaec: 0x8c880008  lw          $t0, 0x8($a0)
    ctx->pc = 0x43eaecu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_43eaf0:
    // 0x43eaf0: 0x10802b  sltu        $s0, $zero, $s0
    ctx->pc = 0x43eaf0u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_43eaf4:
    // 0x43eaf4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x43eaf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_43eaf8:
    // 0x43eaf8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x43eaf8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_43eafc:
    // 0x43eafc: 0x40f809  jalr        $v0
label_43eb00:
    if (ctx->pc == 0x43EB00u) {
        ctx->pc = 0x43EB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43EAFCu;
        // 0x43eb00: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43EB04u;
        goto label_43eb04;
    }
    ctx->pc = 0x43EAFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x43EB04u);
        ctx->pc = 0x43EB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43EAFCu;
        // 0x43eb00: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43EAFCu, 0x43EB04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x43EB04u;
label_43eb04:
    // 0x43eb04: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x43eb04u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
label_43eb08:
    // 0x43eb08: 0x12000051  beqz        $s0, . + 4 + (0x51 << 2)
label_43eb0c:
    if (ctx->pc == 0x43EB0Cu) {
        ctx->pc = 0x43EB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43EB08u;
        // 0x43eb0c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43EB10u;
        goto label_43eb10;
    }
    ctx->pc = 0x43EB08u;
    {
        const bool branch_taken_0x43eb08 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x43EB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43EB08u;
        // 0x43eb0c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43eb08) {
            ctx->pc = 0x43EC50u;
            goto label_43ec50;
        }
    }
    ctx->pc = 0x43EB10u;
label_43eb10:
    // 0x43eb10: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x43eb10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_43eb14:
    // 0x43eb14: 0x3442000e  ori         $v0, $v0, 0xE
    ctx->pc = 0x43eb14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)14);
label_43eb18:
    // 0x43eb18: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x43eb18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
label_43eb1c:
    // 0x43eb1c: 0x34630404  ori         $v1, $v1, 0x404
    ctx->pc = 0x43eb1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1028);
label_43eb20:
    // 0x43eb20: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x43eb20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_43eb24:
    // 0x43eb24: 0x34630400  ori         $v1, $v1, 0x400
    ctx->pc = 0x43eb24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1024);
label_43eb28:
    // 0x43eb28: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x43eb28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_43eb2c:
    // 0x43eb2c: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x43eb2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
label_43eb30:
    // 0x43eb30: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x43eb30u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_43eb34:
    // 0x43eb34: 0x8f84be20  lw          $a0, -0x41E0($gp)
    ctx->pc = 0x43eb34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
label_43eb38:
    // 0x43eb38: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x43eb38u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
label_43eb3c:
    // 0x43eb3c: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x43eb3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_43eb40:
    // 0x43eb40: 0xaf84be20  sw          $a0, -0x41E0($gp)
    ctx->pc = 0x43eb40u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 4));
label_43eb44:
    // 0x43eb44: 0x3403f819  ori         $v1, $zero, 0xF819
    ctx->pc = 0x43eb44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63513);
label_43eb48:
    // 0x43eb48: 0x31bfc  dsll32      $v1, $v1, 15
    ctx->pc = 0x43eb48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 15));
label_43eb4c:
    // 0x43eb4c: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x43eb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
label_43eb50:
    // 0x43eb50: 0x3442c000  ori         $v0, $v0, 0xC000
    ctx->pc = 0x43eb50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
label_43eb54:
    // 0x43eb54: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x43eb54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_43eb58:
    // 0x43eb58: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x43eb58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
label_43eb5c:
    // 0x43eb5c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x43eb5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_43eb60:
    // 0x43eb60: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x43eb60u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_43eb64:
    // 0x43eb64: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x43eb64u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
label_43eb68:
    // 0x43eb68: 0x24830010  addiu       $v1, $a0, 0x10
    ctx->pc = 0x43eb68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_43eb6c:
    // 0x43eb6c: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x43eb6cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_43eb70:
    // 0x43eb70: 0x7a220000  lq          $v0, 0x0($s1)
    ctx->pc = 0x43eb70u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_43eb74:
    // 0x43eb74: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x43eb74u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
label_43eb78:
    // 0x43eb78: 0x24830020  addiu       $v1, $a0, 0x20
    ctx->pc = 0x43eb78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
label_43eb7c:
    // 0x43eb7c: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x43eb7cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_43eb80:
    // 0x43eb80: 0x7a220010  lq          $v0, 0x10($s1)
    ctx->pc = 0x43eb80u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 16)));
label_43eb84:
    // 0x43eb84: 0x7c820020  sq          $v0, 0x20($a0)
    ctx->pc = 0x43eb84u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 2));
label_43eb88:
    // 0x43eb88: 0x24830030  addiu       $v1, $a0, 0x30
    ctx->pc = 0x43eb88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
label_43eb8c:
    // 0x43eb8c: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x43eb8cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_43eb90:
    // 0x43eb90: 0x7a220020  lq          $v0, 0x20($s1)
    ctx->pc = 0x43eb90u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 32)));
label_43eb94:
    // 0x43eb94: 0x7c820030  sq          $v0, 0x30($a0)
    ctx->pc = 0x43eb94u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 2));
label_43eb98:
    // 0x43eb98: 0x24830040  addiu       $v1, $a0, 0x40
    ctx->pc = 0x43eb98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
label_43eb9c:
    // 0x43eb9c: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x43eb9cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_43eba0:
    // 0x43eba0: 0x7a220030  lq          $v0, 0x30($s1)
    ctx->pc = 0x43eba0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 48)));
label_43eba4:
    // 0x43eba4: 0x7c820040  sq          $v0, 0x40($a0)
    ctx->pc = 0x43eba4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 64), GPR_VEC(ctx, 2));
label_43eba8:
    // 0x43eba8: 0x24830050  addiu       $v1, $a0, 0x50
    ctx->pc = 0x43eba8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
label_43ebac:
    // 0x43ebac: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x43ebacu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_43ebb0:
    // 0x43ebb0: 0x7a420000  lq          $v0, 0x0($s2)
    ctx->pc = 0x43ebb0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_43ebb4:
    // 0x43ebb4: 0x7c820050  sq          $v0, 0x50($a0)
    ctx->pc = 0x43ebb4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 80), GPR_VEC(ctx, 2));
label_43ebb8:
    // 0x43ebb8: 0x24830060  addiu       $v1, $a0, 0x60
    ctx->pc = 0x43ebb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
label_43ebbc:
    // 0x43ebbc: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x43ebbcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_43ebc0:
    // 0x43ebc0: 0x7a420010  lq          $v0, 0x10($s2)
    ctx->pc = 0x43ebc0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 16)));
label_43ebc4:
    // 0x43ebc4: 0x7c820060  sq          $v0, 0x60($a0)
    ctx->pc = 0x43ebc4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 96), GPR_VEC(ctx, 2));
label_43ebc8:
    // 0x43ebc8: 0x24830070  addiu       $v1, $a0, 0x70
    ctx->pc = 0x43ebc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
label_43ebcc:
    // 0x43ebcc: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x43ebccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_43ebd0:
    // 0x43ebd0: 0x7a420020  lq          $v0, 0x20($s2)
    ctx->pc = 0x43ebd0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 32)));
label_43ebd4:
    // 0x43ebd4: 0x7c820070  sq          $v0, 0x70($a0)
    ctx->pc = 0x43ebd4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 112), GPR_VEC(ctx, 2));
label_43ebd8:
    // 0x43ebd8: 0x24830080  addiu       $v1, $a0, 0x80
    ctx->pc = 0x43ebd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
label_43ebdc:
    // 0x43ebdc: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x43ebdcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_43ebe0:
    // 0x43ebe0: 0x7a420030  lq          $v0, 0x30($s2)
    ctx->pc = 0x43ebe0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 48)));
label_43ebe4:
    // 0x43ebe4: 0x7c820080  sq          $v0, 0x80($a0)
    ctx->pc = 0x43ebe4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 128), GPR_VEC(ctx, 2));
label_43ebe8:
    // 0x43ebe8: 0x24830090  addiu       $v1, $a0, 0x90
    ctx->pc = 0x43ebe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 144));
label_43ebec:
    // 0x43ebec: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x43ebecu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_43ebf0:
    // 0x43ebf0: 0x7a620000  lq          $v0, 0x0($s3)
    ctx->pc = 0x43ebf0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_43ebf4:
    // 0x43ebf4: 0x7c820090  sq          $v0, 0x90($a0)
    ctx->pc = 0x43ebf4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 144), GPR_VEC(ctx, 2));
label_43ebf8:
    // 0x43ebf8: 0x248300a0  addiu       $v1, $a0, 0xA0
    ctx->pc = 0x43ebf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
label_43ebfc:
    // 0x43ebfc: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x43ebfcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_43ec00:
    // 0x43ec00: 0x7a620010  lq          $v0, 0x10($s3)
    ctx->pc = 0x43ec00u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 16)));
label_43ec04:
    // 0x43ec04: 0x7c8200a0  sq          $v0, 0xA0($a0)
    ctx->pc = 0x43ec04u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 160), GPR_VEC(ctx, 2));
label_43ec08:
    // 0x43ec08: 0x248300b0  addiu       $v1, $a0, 0xB0
    ctx->pc = 0x43ec08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 176));
label_43ec0c:
    // 0x43ec0c: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x43ec0cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_43ec10:
    // 0x43ec10: 0x7a620020  lq          $v0, 0x20($s3)
    ctx->pc = 0x43ec10u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 32)));
label_43ec14:
    // 0x43ec14: 0x7c8200b0  sq          $v0, 0xB0($a0)
    ctx->pc = 0x43ec14u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 176), GPR_VEC(ctx, 2));
label_43ec18:
    // 0x43ec18: 0x248300c0  addiu       $v1, $a0, 0xC0
    ctx->pc = 0x43ec18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
label_43ec1c:
    // 0x43ec1c: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x43ec1cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_43ec20:
    // 0x43ec20: 0x7a620030  lq          $v0, 0x30($s3)
    ctx->pc = 0x43ec20u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 48)));
label_43ec24:
    // 0x43ec24: 0x7c8200c0  sq          $v0, 0xC0($a0)
    ctx->pc = 0x43ec24u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 192), GPR_VEC(ctx, 2));
label_43ec28:
    // 0x43ec28: 0x248300d0  addiu       $v1, $a0, 0xD0
    ctx->pc = 0x43ec28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 208));
label_43ec2c:
    // 0x43ec2c: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x43ec2cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_43ec30:
    // 0x43ec30: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x43ec30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_43ec34:
    // 0x43ec34: 0x24a5d620  addiu       $a1, $a1, -0x29E0
    ctx->pc = 0x43ec34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956576));
label_43ec38:
    // 0x43ec38: 0x248300e0  addiu       $v1, $a0, 0xE0
    ctx->pc = 0x43ec38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 224));
label_43ec3c:
    // 0x43ec3c: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x43ec3cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_43ec40:
    // 0x43ec40: 0x7c8200d0  sq          $v0, 0xD0($a0)
    ctx->pc = 0x43ec40u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 208), GPR_VEC(ctx, 2));
label_43ec44:
    // 0x43ec44: 0xc10f954  jal         func_43E550
label_43ec48:
    if (ctx->pc == 0x43EC48u) {
        ctx->pc = 0x43EC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43EC44u;
        // 0x43ec48: 0xaf83be20  sw          $v1, -0x41E0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43EC4Cu;
        goto label_43ec4c;
    }
    ctx->pc = 0x43EC44u;
    SET_GPR_U32(ctx, 31, 0x43EC4Cu);
    ctx->pc = 0x43EC48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43EC44u;
    // 0x43ec48: 0xaf83be20  sw          $v1, -0x41E0($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43E550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43E550u, 0x43EC44u, 0x43EC4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43EC4Cu;
label_43ec4c:
    // 0x43ec4c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x43ec4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_43ec50:
    // 0x43ec50: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x43ec50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_43ec54:
    // 0x43ec54: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x43ec54u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_43ec58:
    // 0x43ec58: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x43ec58u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_43ec5c:
    // 0x43ec5c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x43ec5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_43ec60:
    // 0x43ec60: 0x3e00008  jr          $ra
label_43ec64:
    if (ctx->pc == 0x43EC64u) {
        ctx->pc = 0x43EC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43EC60u;
        // 0x43ec64: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43EC68u;
        goto label_43ec68;
    }
    ctx->pc = 0x43EC60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43EC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43EC60u;
        // 0x43ec64: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43EC60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43EC68u;
label_43ec68:
    // 0x43ec68: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x43ec68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_43ec6c:
    // 0x43ec6c: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x43ec6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_43ec70:
    // 0x43ec70: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x43ec70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_43ec74:
    // 0x43ec74: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x43ec74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_43ec78:
    // 0x43ec78: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x43ec78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_43ec7c:
    // 0x43ec7c: 0x79042  srl         $s2, $a3, 1
    ctx->pc = 0x43ec7cu;
    SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 7), 1));
label_43ec80:
    // 0x43ec80: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x43ec80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
label_43ec84:
    // 0x43ec84: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x43ec84u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_43ec88:
    // 0x43ec88: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x43ec88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_43ec8c:
    // 0x43ec8c: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x43ec8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_43ec90:
    // 0x43ec90: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x43ec90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_43ec94:
    // 0x43ec94: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x43ec94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
label_43ec98:
    // 0x43ec98: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x43ec98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
label_43ec9c:
    // 0x43ec9c: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x43ec9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
label_43eca0:
    // 0x43eca0: 0x100000b7  b           . + 4 + (0xB7 << 2)
label_43eca4:
    if (ctx->pc == 0x43ECA4u) {
        ctx->pc = 0x43ECA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43ECA0u;
        // 0x43eca4: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43ECA8u;
        goto label_43eca8;
    }
    ctx->pc = 0x43ECA0u;
    {
        const bool branch_taken_0x43eca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43ECA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43ECA0u;
        // 0x43eca4: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43eca0) {
            ctx->pc = 0x43EF80u;
            goto label_43ef80;
        }
    }
    ctx->pc = 0x43ECA8u;
label_43eca8:
    // 0x43eca8: 0x3c197c00  lui         $t9, 0x7C00
    ctx->pc = 0x43eca8u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)31744 << 16));
label_43ecac:
    // 0x43ecac: 0x2442d620  addiu       $v0, $v0, -0x29E0
    ctx->pc = 0x43ecacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956576));
label_43ecb0:
    // 0x43ecb0: 0x3c18ffff  lui         $t8, 0xFFFF
    ctx->pc = 0x43ecb0u;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)65535 << 16));
label_43ecb4:
    // 0x43ecb4: 0x784f0000  lq          $t7, 0x0($v0)
    ctx->pc = 0x43ecb4u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_43ecb8:
    // 0x43ecb8: 0x2509023  subu        $s2, $s2, $s0
    ctx->pc = 0x43ecb8u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_43ecbc:
    // 0x43ecbc: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x43ecbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_43ecc0:
    // 0x43ecc0: 0x241e0010  addiu       $fp, $zero, 0x10
    ctx->pc = 0x43ecc0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_43ecc4:
    // 0x43ecc4: 0x3c171000  lui         $s7, 0x1000
    ctx->pc = 0x43ecc4u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)4096 << 16));
label_43ecc8:
    // 0x43ecc8: 0x3c160400  lui         $s6, 0x400
    ctx->pc = 0x43ecc8u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)1024 << 16));
label_43eccc:
    // 0x43eccc: 0x3c150100  lui         $s5, 0x100
    ctx->pc = 0x43ecccu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)256 << 16));
label_43ecd0:
    // 0x43ecd0: 0x36b50404  ori         $s5, $s5, 0x404
    ctx->pc = 0x43ecd0u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)1028);
label_43ecd4:
    // 0x43ecd4: 0x15a83c  dsll32      $s5, $s5, 0
    ctx->pc = 0x43ecd4u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) << (32 + 0));
label_43ecd8:
    // 0x43ecd8: 0x37398000  ori         $t9, $t9, 0x8000
    ctx->pc = 0x43ecd8u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 25) | (uint64_t)(uint16_t)32768);
label_43ecdc:
    // 0x43ecdc: 0x3718ffff  ori         $t8, $t8, 0xFFFF
    ctx->pc = 0x43ecdcu;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) | (uint64_t)(uint16_t)65535);
label_43ece0:
    // 0x43ece0: 0x2454d580  addiu       $s4, $v0, -0x2A80
    ctx->pc = 0x43ece0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956416));
label_43ece4:
    // 0x43ece4: 0x0  nop
    ctx->pc = 0x43ece4u;
    // NOP
label_43ece8:
    // 0x43ece8: 0x2e030011  sltiu       $v1, $s0, 0x11
    ctx->pc = 0x43ece8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
label_43ecec:
    // 0x43ecec: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x43ececu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_43ecf0:
    // 0x43ecf0: 0x203300b  movn        $a2, $s0, $v1
    ctx->pc = 0x43ecf0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 16));
label_43ecf4:
    // 0x43ecf4: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x43ecf4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_43ecf8:
    // 0x43ecf8: 0xd61825  or          $v1, $a2, $s6
    ctx->pc = 0x43ecf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 22));
label_43ecfc:
    // 0x43ecfc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x43ecfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_43ed00:
    // 0x43ed00: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x43ed00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_43ed04:
    // 0x43ed04: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x43ed04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_43ed08:
    // 0x43ed08: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x43ed08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_43ed0c:
    // 0x43ed0c: 0x64420002  daddiu      $v0, $v0, 0x2
    ctx->pc = 0x43ed0cu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)2);
label_43ed10:
    // 0x43ed10: 0x752825  or          $a1, $v1, $s5
    ctx->pc = 0x43ed10u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 21));
label_43ed14:
    // 0x43ed14: 0x571825  or          $v1, $v0, $s7
    ctx->pc = 0x43ed14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 23));
label_43ed18:
    // 0x43ed18: 0x2068023  subu        $s0, $s0, $a2
    ctx->pc = 0x43ed18u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
label_43ed1c:
    // 0x43ed1c: 0x70a31389  pcpyld      $v0, $a1, $v1
    ctx->pc = 0x43ed1cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 5), GPR_VEC(ctx, 3)));
label_43ed20:
    // 0x43ed20: 0x8f84be20  lw          $a0, -0x41E0($gp)
    ctx->pc = 0x43ed20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
label_43ed24:
    // 0x43ed24: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x43ed24u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
label_43ed28:
    // 0x43ed28: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x43ed28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_43ed2c:
    // 0x43ed2c: 0xaf84be20  sw          $a0, -0x41E0($gp)
    ctx->pc = 0x43ed2cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 4));
label_43ed30:
    // 0x43ed30: 0x614c0  sll         $v0, $a2, 19
    ctx->pc = 0x43ed30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 19));
label_43ed34:
    // 0x43ed34: 0x591025  or          $v0, $v0, $t9
    ctx->pc = 0x43ed34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 25));
label_43ed38:
    // 0x43ed38: 0x3c03c000  lui         $v1, 0xC000
    ctx->pc = 0x43ed38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49152 << 16));
label_43ed3c:
    // 0x43ed3c: 0x3463c000  ori         $v1, $v1, 0xC000
    ctx->pc = 0x43ed3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49152);
label_43ed40:
    // 0x43ed40: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x43ed40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_43ed44:
    // 0x43ed44: 0x34632000  ori         $v1, $v1, 0x2000
    ctx->pc = 0x43ed44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
label_43ed48:
    // 0x43ed48: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x43ed48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_43ed4c:
    // 0x43ed4c: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x43ed4cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
label_43ed50:
    // 0x43ed50: 0x70a31389  pcpyld      $v0, $a1, $v1
    ctx->pc = 0x43ed50u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 5), GPR_VEC(ctx, 3)));
label_43ed54:
    // 0x43ed54: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x43ed54u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
label_43ed58:
    // 0x43ed58: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x43ed58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_43ed5c:
    // 0x43ed5c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x43ed5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_43ed60:
    // 0x43ed60: 0x10d8007f  beq         $a2, $t8, . + 4 + (0x7F << 2)
label_43ed64:
    if (ctx->pc == 0x43ED64u) {
        ctx->pc = 0x43ED64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43ED60u;
        // 0x43ed64: 0xaf82be20  sw          $v0, -0x41E0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43ED68u;
        goto label_43ed68;
    }
    ctx->pc = 0x43ED60u;
    {
        const bool branch_taken_0x43ed60 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 24));
        ctx->pc = 0x43ED64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43ED60u;
        // 0x43ed64: 0xaf82be20  sw          $v0, -0x41E0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43ed60) {
            ctx->pc = 0x43EF60u;
            goto label_43ef60;
        }
    }
    ctx->pc = 0x43ED68u;
label_43ed68:
    // 0x43ed68: 0x3c0effff  lui         $t6, 0xFFFF
    ctx->pc = 0x43ed68u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)65535 << 16));
label_43ed6c:
    // 0x43ed6c: 0x61027  nor         $v0, $zero, $a2
    ctx->pc = 0x43ed6cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 6)));
label_43ed70:
    // 0x43ed70: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x43ed70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_43ed74:
    // 0x43ed74: 0x35ceffff  ori         $t6, $t6, 0xFFFF
    ctx->pc = 0x43ed74u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)65535);
label_43ed78:
    // 0x43ed78: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
label_43ed7c:
    if (ctx->pc == 0x43ED7Cu) {
        ctx->pc = 0x43ED7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43ED78u;
        // 0x43ed7c: 0x26250040  addiu       $a1, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43ED80u;
        goto label_43ed80;
    }
    ctx->pc = 0x43ED78u;
    {
        const bool branch_taken_0x43ed78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x43ED7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43ED78u;
        // 0x43ed7c: 0x26250040  addiu       $a1, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43ed78) {
            ctx->pc = 0x43EE10u;
            goto label_43ee10;
        }
    }
    ctx->pc = 0x43ED80u;
label_43ed80:
    // 0x43ed80: 0x78a2ffc0  lq          $v0, -0x40($a1)
    ctx->pc = 0x43ed80u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 4294967232)));
label_43ed84:
    // 0x43ed84: 0x24830020  addiu       $v1, $a0, 0x20
    ctx->pc = 0x43ed84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
label_43ed88:
    // 0x43ed88: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x43ed88u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
label_43ed8c:
    // 0x43ed8c: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x43ed8cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_43ed90:
    // 0x43ed90: 0x78a2ffd0  lq          $v0, -0x30($a1)
    ctx->pc = 0x43ed90u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 4294967248)));
label_43ed94:
    // 0x43ed94: 0x7c820020  sq          $v0, 0x20($a0)
    ctx->pc = 0x43ed94u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 2));
label_43ed98:
    // 0x43ed98: 0x24830030  addiu       $v1, $a0, 0x30
    ctx->pc = 0x43ed98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
label_43ed9c:
    // 0x43ed9c: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x43ed9cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_43eda0:
    // 0x43eda0: 0x78a2ffe0  lq          $v0, -0x20($a1)
    ctx->pc = 0x43eda0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 4294967264)));
label_43eda4:
    // 0x43eda4: 0x7c820030  sq          $v0, 0x30($a0)
    ctx->pc = 0x43eda4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 2));
label_43eda8:
    // 0x43eda8: 0x24830040  addiu       $v1, $a0, 0x40
    ctx->pc = 0x43eda8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
label_43edac:
    // 0x43edac: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x43edacu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_43edb0:
    // 0x43edb0: 0x78a2fff0  lq          $v0, -0x10($a1)
    ctx->pc = 0x43edb0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 4294967280)));
label_43edb4:
    // 0x43edb4: 0x7c820040  sq          $v0, 0x40($a0)
    ctx->pc = 0x43edb4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 64), GPR_VEC(ctx, 2));
label_43edb8:
    // 0x43edb8: 0x24830050  addiu       $v1, $a0, 0x50
    ctx->pc = 0x43edb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
label_43edbc:
    // 0x43edbc: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x43edbcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_43edc0:
    // 0x43edc0: 0x7a220040  lq          $v0, 0x40($s1)
    ctx->pc = 0x43edc0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 64)));
label_43edc4:
    // 0x43edc4: 0x7c820050  sq          $v0, 0x50($a0)
    ctx->pc = 0x43edc4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 80), GPR_VEC(ctx, 2));
label_43edc8:
    // 0x43edc8: 0x24830060  addiu       $v1, $a0, 0x60
    ctx->pc = 0x43edc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
label_43edcc:
    // 0x43edcc: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x43edccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_43edd0:
    // 0x43edd0: 0x78a20010  lq          $v0, 0x10($a1)
    ctx->pc = 0x43edd0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 16)));
label_43edd4:
    // 0x43edd4: 0x7c820060  sq          $v0, 0x60($a0)
    ctx->pc = 0x43edd4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 96), GPR_VEC(ctx, 2));
label_43edd8:
    // 0x43edd8: 0x24830070  addiu       $v1, $a0, 0x70
    ctx->pc = 0x43edd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
label_43eddc:
    // 0x43eddc: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x43eddcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_43ede0:
    // 0x43ede0: 0x78a20020  lq          $v0, 0x20($a1)
    ctx->pc = 0x43ede0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 32)));
label_43ede4:
    // 0x43ede4: 0x7c820070  sq          $v0, 0x70($a0)
    ctx->pc = 0x43ede4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 112), GPR_VEC(ctx, 2));
label_43ede8:
    // 0x43ede8: 0x24830080  addiu       $v1, $a0, 0x80
    ctx->pc = 0x43ede8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
label_43edec:
    // 0x43edec: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x43edecu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_43edf0:
    // 0x43edf0: 0x78a20030  lq          $v0, 0x30($a1)
    ctx->pc = 0x43edf0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 48)));
label_43edf4:
    // 0x43edf4: 0x7c820080  sq          $v0, 0x80($a0)
    ctx->pc = 0x43edf4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 128), GPR_VEC(ctx, 2));
label_43edf8:
    // 0x43edf8: 0x24830090  addiu       $v1, $a0, 0x90
    ctx->pc = 0x43edf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 144));
label_43edfc:
    // 0x43edfc: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x43edfcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_43ee00:
    // 0x43ee00: 0x262500c0  addiu       $a1, $s1, 0xC0
    ctx->pc = 0x43ee00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
label_43ee04:
    // 0x43ee04: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x43ee04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_43ee08:
    // 0x43ee08: 0x10ce0055  beq         $a2, $t6, . + 4 + (0x55 << 2)
label_43ee0c:
    if (ctx->pc == 0x43EE0Cu) {
        ctx->pc = 0x43EE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43EE08u;
        // 0x43ee0c: 0x26310080  addiu       $s1, $s1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43EE10u;
        goto label_43ee10;
    }
    ctx->pc = 0x43EE08u;
    {
        const bool branch_taken_0x43ee08 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 14));
        ctx->pc = 0x43EE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43EE08u;
        // 0x43ee0c: 0x26310080  addiu       $s1, $s1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43ee08) {
            ctx->pc = 0x43EF60u;
            goto label_43ef60;
        }
    }
    ctx->pc = 0x43EE10u;
label_43ee10:
    // 0x43ee10: 0xa0682d  daddu       $t5, $a1, $zero
    ctx->pc = 0x43ee10u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_43ee14:
    // 0x43ee14: 0xa0602d  daddu       $t4, $a1, $zero
    ctx->pc = 0x43ee14u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_43ee18:
    // 0x43ee18: 0xa0582d  daddu       $t3, $a1, $zero
    ctx->pc = 0x43ee18u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_43ee1c:
    // 0x43ee1c: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x43ee1cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_43ee20:
    // 0x43ee20: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x43ee20u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_43ee24:
    // 0x43ee24: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x43ee24u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_43ee28:
    // 0x43ee28: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x43ee28u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_43ee2c:
    // 0x43ee2c: 0x0  nop
    ctx->pc = 0x43ee2cu;
    // NOP
label_43ee30:
    // 0x43ee30: 0x8f84be20  lw          $a0, -0x41E0($gp)
    ctx->pc = 0x43ee30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
label_43ee34:
    // 0x43ee34: 0x78e2ffc0  lq          $v0, -0x40($a3)
    ctx->pc = 0x43ee34u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 4294967232)));
label_43ee38:
    // 0x43ee38: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x43ee38u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
label_43ee3c:
    // 0x43ee3c: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x43ee3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_43ee40:
    // 0x43ee40: 0xaf84be20  sw          $a0, -0x41E0($gp)
    ctx->pc = 0x43ee40u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 4));
label_43ee44:
    // 0x43ee44: 0x7902ffd0  lq          $v0, -0x30($t0)
    ctx->pc = 0x43ee44u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 8), 4294967248)));
label_43ee48:
    // 0x43ee48: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x43ee48u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
label_43ee4c:
    // 0x43ee4c: 0x24830010  addiu       $v1, $a0, 0x10
    ctx->pc = 0x43ee4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_43ee50:
    // 0x43ee50: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x43ee50u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_43ee54:
    // 0x43ee54: 0x7922ffe0  lq          $v0, -0x20($t1)
    ctx->pc = 0x43ee54u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 9), 4294967264)));
label_43ee58:
    // 0x43ee58: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x43ee58u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
label_43ee5c:
    // 0x43ee5c: 0x24830020  addiu       $v1, $a0, 0x20
    ctx->pc = 0x43ee5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
label_43ee60:
    // 0x43ee60: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x43ee60u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_43ee64:
    // 0x43ee64: 0x7942fff0  lq          $v0, -0x10($t2)
    ctx->pc = 0x43ee64u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 10), 4294967280)));
label_43ee68:
    // 0x43ee68: 0x7c820020  sq          $v0, 0x20($a0)
    ctx->pc = 0x43ee68u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 2));
label_43ee6c:
    // 0x43ee6c: 0x24830030  addiu       $v1, $a0, 0x30
    ctx->pc = 0x43ee6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
label_43ee70:
    // 0x43ee70: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x43ee70u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_43ee74:
    // 0x43ee74: 0x79620000  lq          $v0, 0x0($t3)
    ctx->pc = 0x43ee74u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 11), 0)));
label_43ee78:
    // 0x43ee78: 0x7c820030  sq          $v0, 0x30($a0)
    ctx->pc = 0x43ee78u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 2));
label_43ee7c:
    // 0x43ee7c: 0x24830040  addiu       $v1, $a0, 0x40
    ctx->pc = 0x43ee7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
label_43ee80:
    // 0x43ee80: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x43ee80u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_43ee84:
    // 0x43ee84: 0x79820010  lq          $v0, 0x10($t4)
    ctx->pc = 0x43ee84u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 12), 16)));
label_43ee88:
    // 0x43ee88: 0x7c820040  sq          $v0, 0x40($a0)
    ctx->pc = 0x43ee88u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 64), GPR_VEC(ctx, 2));
label_43ee8c:
    // 0x43ee8c: 0x24830050  addiu       $v1, $a0, 0x50
    ctx->pc = 0x43ee8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
label_43ee90:
    // 0x43ee90: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x43ee90u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_43ee94:
    // 0x43ee94: 0x79a20020  lq          $v0, 0x20($t5)
    ctx->pc = 0x43ee94u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 13), 32)));
label_43ee98:
    // 0x43ee98: 0x7c820050  sq          $v0, 0x50($a0)
    ctx->pc = 0x43ee98u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 80), GPR_VEC(ctx, 2));
label_43ee9c:
    // 0x43ee9c: 0x24830060  addiu       $v1, $a0, 0x60
    ctx->pc = 0x43ee9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
label_43eea0:
    // 0x43eea0: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x43eea0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_43eea4:
    // 0x43eea4: 0x78a20030  lq          $v0, 0x30($a1)
    ctx->pc = 0x43eea4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 48)));
label_43eea8:
    // 0x43eea8: 0x7c820060  sq          $v0, 0x60($a0)
    ctx->pc = 0x43eea8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 96), GPR_VEC(ctx, 2));
label_43eeac:
    // 0x43eeac: 0x24830070  addiu       $v1, $a0, 0x70
    ctx->pc = 0x43eeacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
label_43eeb0:
    // 0x43eeb0: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x43eeb0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_43eeb4:
    // 0x43eeb4: 0x78e20040  lq          $v0, 0x40($a3)
    ctx->pc = 0x43eeb4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 64)));
label_43eeb8:
    // 0x43eeb8: 0x7c820070  sq          $v0, 0x70($a0)
    ctx->pc = 0x43eeb8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 112), GPR_VEC(ctx, 2));
label_43eebc:
    // 0x43eebc: 0x24830080  addiu       $v1, $a0, 0x80
    ctx->pc = 0x43eebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
label_43eec0:
    // 0x43eec0: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x43eec0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_43eec4:
    // 0x43eec4: 0x79020050  lq          $v0, 0x50($t0)
    ctx->pc = 0x43eec4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 8), 80)));
label_43eec8:
    // 0x43eec8: 0x7c820080  sq          $v0, 0x80($a0)
    ctx->pc = 0x43eec8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 128), GPR_VEC(ctx, 2));
label_43eecc:
    // 0x43eecc: 0x24830090  addiu       $v1, $a0, 0x90
    ctx->pc = 0x43eeccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 144));
label_43eed0:
    // 0x43eed0: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x43eed0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_43eed4:
    // 0x43eed4: 0x79220060  lq          $v0, 0x60($t1)
    ctx->pc = 0x43eed4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 9), 96)));
label_43eed8:
    // 0x43eed8: 0x7c820090  sq          $v0, 0x90($a0)
    ctx->pc = 0x43eed8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 144), GPR_VEC(ctx, 2));
label_43eedc:
    // 0x43eedc: 0x248300a0  addiu       $v1, $a0, 0xA0
    ctx->pc = 0x43eedcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
label_43eee0:
    // 0x43eee0: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x43eee0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_43eee4:
    // 0x43eee4: 0x79420070  lq          $v0, 0x70($t2)
    ctx->pc = 0x43eee4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 10), 112)));
label_43eee8:
    // 0x43eee8: 0x7c8200a0  sq          $v0, 0xA0($a0)
    ctx->pc = 0x43eee8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 160), GPR_VEC(ctx, 2));
label_43eeec:
    // 0x43eeec: 0x248300b0  addiu       $v1, $a0, 0xB0
    ctx->pc = 0x43eeecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 176));
label_43eef0:
    // 0x43eef0: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x43eef0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_43eef4:
    // 0x43eef4: 0x79620080  lq          $v0, 0x80($t3)
    ctx->pc = 0x43eef4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 11), 128)));
label_43eef8:
    // 0x43eef8: 0x7c8200b0  sq          $v0, 0xB0($a0)
    ctx->pc = 0x43eef8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 176), GPR_VEC(ctx, 2));
label_43eefc:
    // 0x43eefc: 0x248300c0  addiu       $v1, $a0, 0xC0
    ctx->pc = 0x43eefcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
label_43ef00:
    // 0x43ef00: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x43ef00u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_43ef04:
    // 0x43ef04: 0x79820090  lq          $v0, 0x90($t4)
    ctx->pc = 0x43ef04u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 12), 144)));
label_43ef08:
    // 0x43ef08: 0x7c8200c0  sq          $v0, 0xC0($a0)
    ctx->pc = 0x43ef08u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 192), GPR_VEC(ctx, 2));
label_43ef0c:
    // 0x43ef0c: 0x248300d0  addiu       $v1, $a0, 0xD0
    ctx->pc = 0x43ef0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 208));
label_43ef10:
    // 0x43ef10: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x43ef10u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_43ef14:
    // 0x43ef14: 0x79a200a0  lq          $v0, 0xA0($t5)
    ctx->pc = 0x43ef14u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 13), 160)));
label_43ef18:
    // 0x43ef18: 0x7c8200d0  sq          $v0, 0xD0($a0)
    ctx->pc = 0x43ef18u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 208), GPR_VEC(ctx, 2));
label_43ef1c:
    // 0x43ef1c: 0x248300e0  addiu       $v1, $a0, 0xE0
    ctx->pc = 0x43ef1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 224));
label_43ef20:
    // 0x43ef20: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x43ef20u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_43ef24:
    // 0x43ef24: 0x78a200b0  lq          $v0, 0xB0($a1)
    ctx->pc = 0x43ef24u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 176)));
label_43ef28:
    // 0x43ef28: 0x7c8200e0  sq          $v0, 0xE0($a0)
    ctx->pc = 0x43ef28u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 224), GPR_VEC(ctx, 2));
label_43ef2c:
    // 0x43ef2c: 0x248400f0  addiu       $a0, $a0, 0xF0
    ctx->pc = 0x43ef2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 240));
label_43ef30:
    // 0x43ef30: 0xaf84be20  sw          $a0, -0x41E0($gp)
    ctx->pc = 0x43ef30u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 4));
label_43ef34:
    // 0x43ef34: 0x24a50100  addiu       $a1, $a1, 0x100
    ctx->pc = 0x43ef34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 256));
label_43ef38:
    // 0x43ef38: 0x25ad0100  addiu       $t5, $t5, 0x100
    ctx->pc = 0x43ef38u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 256));
label_43ef3c:
    // 0x43ef3c: 0x258c0100  addiu       $t4, $t4, 0x100
    ctx->pc = 0x43ef3cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 256));
label_43ef40:
    // 0x43ef40: 0x256b0100  addiu       $t3, $t3, 0x100
    ctx->pc = 0x43ef40u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 256));
label_43ef44:
    // 0x43ef44: 0x254a0100  addiu       $t2, $t2, 0x100
    ctx->pc = 0x43ef44u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 256));
label_43ef48:
    // 0x43ef48: 0x25290100  addiu       $t1, $t1, 0x100
    ctx->pc = 0x43ef48u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 256));
label_43ef4c:
    // 0x43ef4c: 0x25080100  addiu       $t0, $t0, 0x100
    ctx->pc = 0x43ef4cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 256));
label_43ef50:
    // 0x43ef50: 0x24e70100  addiu       $a3, $a3, 0x100
    ctx->pc = 0x43ef50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 256));
label_43ef54:
    // 0x43ef54: 0x24c6fffe  addiu       $a2, $a2, -0x2
    ctx->pc = 0x43ef54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967294));
label_43ef58:
    // 0x43ef58: 0x14ceffb5  bne         $a2, $t6, . + 4 + (-0x4B << 2)
label_43ef5c:
    if (ctx->pc == 0x43EF5Cu) {
        ctx->pc = 0x43EF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43EF58u;
        // 0x43ef5c: 0x26310100  addiu       $s1, $s1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43EF60u;
        goto label_43ef60;
    }
    ctx->pc = 0x43EF58u;
    {
        const bool branch_taken_0x43ef58 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 14));
        ctx->pc = 0x43EF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43EF58u;
        // 0x43ef5c: 0x26310100  addiu       $s1, $s1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43ef58) {
            ctx->pc = 0x43EE30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_43ee30;
        }
    }
    ctx->pc = 0x43EF60u;
label_43ef60:
    // 0x43ef60: 0x8f82be20  lw          $v0, -0x41E0($gp)
    ctx->pc = 0x43ef60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
label_43ef64:
    // 0x43ef64: 0x7c4f0000  sq          $t7, 0x0($v0)
    ctx->pc = 0x43ef64u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 15));
label_43ef68:
    // 0x43ef68: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x43ef68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_43ef6c:
    // 0x43ef6c: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x43ef6cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
label_43ef70:
    // 0x43ef70: 0x1600ff5d  bnez        $s0, . + 4 + (-0xA3 << 2)
label_43ef74:
    if (ctx->pc == 0x43EF74u) {
        ctx->pc = 0x43EF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43EF70u;
        // 0x43ef74: 0x7a8f0000  lq          $t7, 0x0($s4) (Delay Slot)
        SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43EF78u;
        goto label_43ef78;
    }
    ctx->pc = 0x43EF70u;
    {
        const bool branch_taken_0x43ef70 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x43EF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43EF70u;
        // 0x43ef74: 0x7a8f0000  lq          $t7, 0x0($s4) (Delay Slot)
        SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43ef70) {
            ctx->pc = 0x43ECE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_43ece8;
        }
    }
    ctx->pc = 0x43EF78u;
label_43ef78:
    // 0x43ef78: 0xc10f954  jal         func_43E550
label_43ef7c:
    if (ctx->pc == 0x43EF7Cu) {
        ctx->pc = 0x43EF80u;
        goto label_43ef80;
    }
    ctx->pc = 0x43EF78u;
    SET_GPR_U32(ctx, 31, 0x43EF80u);
    ctx->pc = 0x43E550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43E550u, 0x43EF78u, 0x43EF80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43EF80u;
label_43ef80:
    // 0x43ef80: 0x1240000d  beqz        $s2, . + 4 + (0xD << 2)
label_43ef84:
    if (ctx->pc == 0x43EF84u) {
        ctx->pc = 0x43EF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43EF80u;
        // 0x43ef84: 0x8f90aee8  lw          $s0, -0x5118($gp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946536)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43EF88u;
        goto label_43ef88;
    }
    ctx->pc = 0x43EF80u;
    {
        const bool branch_taken_0x43ef80 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x43EF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43EF80u;
        // 0x43ef84: 0x8f90aee8  lw          $s0, -0x5118($gp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946536)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43ef80) {
            ctx->pc = 0x43EFB8u;
            goto label_43efb8;
        }
    }
    ctx->pc = 0x43EF88u;
label_43ef88:
    // 0x43ef88: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x43ef88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_43ef8c:
    // 0x43ef8c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x43ef8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_43ef90:
    // 0x43ef90: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x43ef90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_43ef94:
    // 0x43ef94: 0x212182b  sltu        $v1, $s0, $s2
    ctx->pc = 0x43ef94u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_43ef98:
    // 0x43ef98: 0x8e680004  lw          $t0, 0x4($s3)
    ctx->pc = 0x43ef98u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_43ef9c:
    // 0x43ef9c: 0x243800a  movz        $s0, $s2, $v1
    ctx->pc = 0x43ef9cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 18));
label_43efa0:
    // 0x43efa0: 0x8fa90000  lw          $t1, 0x0($sp)
    ctx->pc = 0x43efa0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_43efa4:
    // 0x43efa4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x43efa4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_43efa8:
    // 0x43efa8: 0x40f809  jalr        $v0
label_43efac:
    if (ctx->pc == 0x43EFACu) {
        ctx->pc = 0x43EFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43EFA8u;
        // 0x43efac: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43EFB0u;
        goto label_43efb0;
    }
    ctx->pc = 0x43EFA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x43EFB0u);
        ctx->pc = 0x43EFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43EFA8u;
        // 0x43efac: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43EFA8u, 0x43EFB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x43EFB0u;
label_43efb0:
    // 0x43efb0: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_43efb4:
    if (ctx->pc == 0x43EFB4u) {
        ctx->pc = 0x43EFB8u;
        goto label_43efb8;
    }
    ctx->pc = 0x43EFB0u;
    {
        const bool branch_taken_0x43efb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x43efb0) {
            ctx->pc = 0x43EFBCu;
            goto label_43efbc;
        }
    }
    ctx->pc = 0x43EFB8u;
label_43efb8:
    // 0x43efb8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x43efb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_43efbc:
    // 0x43efbc: 0x1600ff3a  bnez        $s0, . + 4 + (-0xC6 << 2)
label_43efc0:
    if (ctx->pc == 0x43EFC0u) {
        ctx->pc = 0x43EFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43EFBCu;
        // 0x43efc0: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43EFC4u;
        goto label_43efc4;
    }
    ctx->pc = 0x43EFBCu;
    {
        const bool branch_taken_0x43efbc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x43EFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43EFBCu;
        // 0x43efc0: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43efbc) {
            ctx->pc = 0x43ECA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_43eca8;
        }
    }
    ctx->pc = 0x43EFC4u;
label_43efc4:
    // 0x43efc4: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x43efc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_43efc8:
    // 0x43efc8: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x43efc8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_43efcc:
    // 0x43efcc: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x43efccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_43efd0:
    // 0x43efd0: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x43efd0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_43efd4:
    // 0x43efd4: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x43efd4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_43efd8:
    // 0x43efd8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x43efd8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_43efdc:
    // 0x43efdc: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x43efdcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_43efe0:
    // 0x43efe0: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x43efe0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_43efe4:
    // 0x43efe4: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x43efe4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_43efe8:
    // 0x43efe8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x43efe8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_43efec:
    // 0x43efec: 0x3e00008  jr          $ra
label_43eff0:
    if (ctx->pc == 0x43EFF0u) {
        ctx->pc = 0x43EFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43EFECu;
        // 0x43eff0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43EFF4u;
        goto label_43eff4;
    }
    ctx->pc = 0x43EFECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43EFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43EFECu;
        // 0x43eff0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43EFECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43EFF4u;
label_43eff4:
    // 0x43eff4: 0x0  nop
    ctx->pc = 0x43eff4u;
    // NOP
label_43eff8:
    // 0x43eff8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x43eff8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_43effc:
    // 0x43effc: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x43effcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_43f000:
    // 0x43f000: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x43f000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_43f004:
    // 0x43f004: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x43f004u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_43f008:
    // 0x43f008: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x43f008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_43f00c:
    // 0x43f00c: 0x24f2ffff  addiu       $s2, $a3, -0x1
    ctx->pc = 0x43f00cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
label_43f010:
    // 0x43f010: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x43f010u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
label_43f014:
    // 0x43f014: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x43f014u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_43f018:
    // 0x43f018: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x43f018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_43f01c:
    // 0x43f01c: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x43f01cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_43f020:
    // 0x43f020: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x43f020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_43f024:
    // 0x43f024: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x43f024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
label_43f028:
    // 0x43f028: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x43f028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
label_43f02c:
    // 0x43f02c: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x43f02cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
label_43f030:
    // 0x43f030: 0x100000b9  b           . + 4 + (0xB9 << 2)
label_43f034:
    if (ctx->pc == 0x43F034u) {
        ctx->pc = 0x43F034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F030u;
        // 0x43f034: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43F038u;
        goto label_43f038;
    }
    ctx->pc = 0x43F030u;
    {
        const bool branch_taken_0x43f030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43F034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F030u;
        // 0x43f034: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43f030) {
            ctx->pc = 0x43F318u;
            goto label_43f318;
        }
    }
    ctx->pc = 0x43F038u;
label_43f038:
    // 0x43f038: 0x3c197c00  lui         $t9, 0x7C00
    ctx->pc = 0x43f038u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)31744 << 16));
label_43f03c:
    // 0x43f03c: 0x2442d620  addiu       $v0, $v0, -0x29E0
    ctx->pc = 0x43f03cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956576));
label_43f040:
    // 0x43f040: 0x3c18ffff  lui         $t8, 0xFFFF
    ctx->pc = 0x43f040u;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)65535 << 16));
label_43f044:
    // 0x43f044: 0x784f0000  lq          $t7, 0x0($v0)
    ctx->pc = 0x43f044u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_43f048:
    // 0x43f048: 0x2509023  subu        $s2, $s2, $s0
    ctx->pc = 0x43f048u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_43f04c:
    // 0x43f04c: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x43f04cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_43f050:
    // 0x43f050: 0x241e0010  addiu       $fp, $zero, 0x10
    ctx->pc = 0x43f050u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_43f054:
    // 0x43f054: 0x3c171000  lui         $s7, 0x1000
    ctx->pc = 0x43f054u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)4096 << 16));
label_43f058:
    // 0x43f058: 0x3c160400  lui         $s6, 0x400
    ctx->pc = 0x43f058u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)1024 << 16));
label_43f05c:
    // 0x43f05c: 0x3c150100  lui         $s5, 0x100
    ctx->pc = 0x43f05cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)256 << 16));
label_43f060:
    // 0x43f060: 0x36b50404  ori         $s5, $s5, 0x404
    ctx->pc = 0x43f060u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)1028);
label_43f064:
    // 0x43f064: 0x15a83c  dsll32      $s5, $s5, 0
    ctx->pc = 0x43f064u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) << (32 + 0));
label_43f068:
    // 0x43f068: 0x37398000  ori         $t9, $t9, 0x8000
    ctx->pc = 0x43f068u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 25) | (uint64_t)(uint16_t)32768);
label_43f06c:
    // 0x43f06c: 0x3718ffff  ori         $t8, $t8, 0xFFFF
    ctx->pc = 0x43f06cu;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) | (uint64_t)(uint16_t)65535);
label_43f070:
    // 0x43f070: 0x2454d580  addiu       $s4, $v0, -0x2A80
    ctx->pc = 0x43f070u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956416));
label_43f074:
    // 0x43f074: 0x0  nop
    ctx->pc = 0x43f074u;
    // NOP
label_43f078:
    // 0x43f078: 0x2e030011  sltiu       $v1, $s0, 0x11
    ctx->pc = 0x43f078u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
label_43f07c:
    // 0x43f07c: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x43f07cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_43f080:
    // 0x43f080: 0x203380b  movn        $a3, $s0, $v1
    ctx->pc = 0x43f080u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 16));
label_43f084:
    // 0x43f084: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x43f084u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_43f088:
    // 0x43f088: 0xf61825  or          $v1, $a3, $s6
    ctx->pc = 0x43f088u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | GPR_U64(ctx, 22));
label_43f08c:
    // 0x43f08c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x43f08cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_43f090:
    // 0x43f090: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x43f090u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_43f094:
    // 0x43f094: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x43f094u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_43f098:
    // 0x43f098: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x43f098u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_43f09c:
    // 0x43f09c: 0x64420002  daddiu      $v0, $v0, 0x2
    ctx->pc = 0x43f09cu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)2);
label_43f0a0:
    // 0x43f0a0: 0x752025  or          $a0, $v1, $s5
    ctx->pc = 0x43f0a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 21));
label_43f0a4:
    // 0x43f0a4: 0x571825  or          $v1, $v0, $s7
    ctx->pc = 0x43f0a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 23));
label_43f0a8:
    // 0x43f0a8: 0x2078023  subu        $s0, $s0, $a3
    ctx->pc = 0x43f0a8u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
label_43f0ac:
    // 0x43f0ac: 0x70831389  pcpyld      $v0, $a0, $v1
    ctx->pc = 0x43f0acu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
label_43f0b0:
    // 0x43f0b0: 0x8f85be20  lw          $a1, -0x41E0($gp)
    ctx->pc = 0x43f0b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
label_43f0b4:
    // 0x43f0b4: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x43f0b4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
label_43f0b8:
    // 0x43f0b8: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x43f0b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_43f0bc:
    // 0x43f0bc: 0xaf85be20  sw          $a1, -0x41E0($gp)
    ctx->pc = 0x43f0bcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 5));
label_43f0c0:
    // 0x43f0c0: 0x714c0  sll         $v0, $a3, 19
    ctx->pc = 0x43f0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 19));
label_43f0c4:
    // 0x43f0c4: 0x591025  or          $v0, $v0, $t9
    ctx->pc = 0x43f0c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 25));
label_43f0c8:
    // 0x43f0c8: 0x3c03c000  lui         $v1, 0xC000
    ctx->pc = 0x43f0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49152 << 16));
label_43f0cc:
    // 0x43f0cc: 0x3463c000  ori         $v1, $v1, 0xC000
    ctx->pc = 0x43f0ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49152);
label_43f0d0:
    // 0x43f0d0: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x43f0d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_43f0d4:
    // 0x43f0d4: 0x34632000  ori         $v1, $v1, 0x2000
    ctx->pc = 0x43f0d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
label_43f0d8:
    // 0x43f0d8: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x43f0d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_43f0dc:
    // 0x43f0dc: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x43f0dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
label_43f0e0:
    // 0x43f0e0: 0x70831389  pcpyld      $v0, $a0, $v1
    ctx->pc = 0x43f0e0u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
label_43f0e4:
    // 0x43f0e4: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x43f0e4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
label_43f0e8:
    // 0x43f0e8: 0x24a20010  addiu       $v0, $a1, 0x10
    ctx->pc = 0x43f0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_43f0ec:
    // 0x43f0ec: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x43f0ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
label_43f0f0:
    // 0x43f0f0: 0x10f80081  beq         $a3, $t8, . + 4 + (0x81 << 2)
label_43f0f4:
    if (ctx->pc == 0x43F0F4u) {
        ctx->pc = 0x43F0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F0F0u;
        // 0x43f0f4: 0xaf82be20  sw          $v0, -0x41E0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43F0F8u;
        goto label_43f0f8;
    }
    ctx->pc = 0x43F0F0u;
    {
        const bool branch_taken_0x43f0f0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 24));
        ctx->pc = 0x43F0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F0F0u;
        // 0x43f0f4: 0xaf82be20  sw          $v0, -0x41E0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43f0f0) {
            ctx->pc = 0x43F2F8u;
            goto label_43f2f8;
        }
    }
    ctx->pc = 0x43F0F8u;
label_43f0f8:
    // 0x43f0f8: 0x3c0effff  lui         $t6, 0xFFFF
    ctx->pc = 0x43f0f8u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)65535 << 16));
label_43f0fc:
    // 0x43f0fc: 0x71027  nor         $v0, $zero, $a3
    ctx->pc = 0x43f0fcu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 7)));
label_43f100:
    // 0x43f100: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x43f100u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_43f104:
    // 0x43f104: 0x35ceffff  ori         $t6, $t6, 0xFFFF
    ctx->pc = 0x43f104u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)65535);
label_43f108:
    // 0x43f108: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_43f10c:
    if (ctx->pc == 0x43F10Cu) {
        ctx->pc = 0x43F10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F108u;
        // 0x43f10c: 0x26260040  addiu       $a2, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43F110u;
        goto label_43f110;
    }
    ctx->pc = 0x43F108u;
    {
        const bool branch_taken_0x43f108 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x43F10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F108u;
        // 0x43f10c: 0x26260040  addiu       $a2, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43f108) {
            ctx->pc = 0x43F1A8u;
            goto label_43f1a8;
        }
    }
    ctx->pc = 0x43F110u;
label_43f110:
    // 0x43f110: 0x78c2ffc0  lq          $v0, -0x40($a2)
    ctx->pc = 0x43f110u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 4294967232)));
label_43f114:
    // 0x43f114: 0x24a30020  addiu       $v1, $a1, 0x20
    ctx->pc = 0x43f114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
label_43f118:
    // 0x43f118: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x43f118u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_43f11c:
    // 0x43f11c: 0x7ca20010  sq          $v0, 0x10($a1)
    ctx->pc = 0x43f11cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), GPR_VEC(ctx, 2));
label_43f120:
    // 0x43f120: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x43f120u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_43f124:
    // 0x43f124: 0x78c2ffd0  lq          $v0, -0x30($a2)
    ctx->pc = 0x43f124u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 4294967248)));
label_43f128:
    // 0x43f128: 0x7ca20020  sq          $v0, 0x20($a1)
    ctx->pc = 0x43f128u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), GPR_VEC(ctx, 2));
label_43f12c:
    // 0x43f12c: 0x24a30030  addiu       $v1, $a1, 0x30
    ctx->pc = 0x43f12cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
label_43f130:
    // 0x43f130: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x43f130u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_43f134:
    // 0x43f134: 0x78c2ffe0  lq          $v0, -0x20($a2)
    ctx->pc = 0x43f134u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 4294967264)));
label_43f138:
    // 0x43f138: 0x7ca20030  sq          $v0, 0x30($a1)
    ctx->pc = 0x43f138u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 48), GPR_VEC(ctx, 2));
label_43f13c:
    // 0x43f13c: 0x24a30040  addiu       $v1, $a1, 0x40
    ctx->pc = 0x43f13cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
label_43f140:
    // 0x43f140: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x43f140u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_43f144:
    // 0x43f144: 0x78c2fff0  lq          $v0, -0x10($a2)
    ctx->pc = 0x43f144u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 4294967280)));
label_43f148:
    // 0x43f148: 0x7ca20040  sq          $v0, 0x40($a1)
    ctx->pc = 0x43f148u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 64), GPR_VEC(ctx, 2));
label_43f14c:
    // 0x43f14c: 0x24a30050  addiu       $v1, $a1, 0x50
    ctx->pc = 0x43f14cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 80));
label_43f150:
    // 0x43f150: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x43f150u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_43f154:
    // 0x43f154: 0x7a220040  lq          $v0, 0x40($s1)
    ctx->pc = 0x43f154u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 64)));
label_43f158:
    // 0x43f158: 0x7ca20050  sq          $v0, 0x50($a1)
    ctx->pc = 0x43f158u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 80), GPR_VEC(ctx, 2));
label_43f15c:
    // 0x43f15c: 0x24a30060  addiu       $v1, $a1, 0x60
    ctx->pc = 0x43f15cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 96));
label_43f160:
    // 0x43f160: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x43f160u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_43f164:
    // 0x43f164: 0x78c20010  lq          $v0, 0x10($a2)
    ctx->pc = 0x43f164u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 16)));
label_43f168:
    // 0x43f168: 0x7ca20060  sq          $v0, 0x60($a1)
    ctx->pc = 0x43f168u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 96), GPR_VEC(ctx, 2));
label_43f16c:
    // 0x43f16c: 0x24a30070  addiu       $v1, $a1, 0x70
    ctx->pc = 0x43f16cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 112));
label_43f170:
    // 0x43f170: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x43f170u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_43f174:
    // 0x43f174: 0x78c20020  lq          $v0, 0x20($a2)
    ctx->pc = 0x43f174u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 32)));
label_43f178:
    // 0x43f178: 0x7ca20070  sq          $v0, 0x70($a1)
    ctx->pc = 0x43f178u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 112), GPR_VEC(ctx, 2));
label_43f17c:
    // 0x43f17c: 0x24a30080  addiu       $v1, $a1, 0x80
    ctx->pc = 0x43f17cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
label_43f180:
    // 0x43f180: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x43f180u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_43f184:
    // 0x43f184: 0x78c20030  lq          $v0, 0x30($a2)
    ctx->pc = 0x43f184u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 48)));
label_43f188:
    // 0x43f188: 0x7ca20080  sq          $v0, 0x80($a1)
    ctx->pc = 0x43f188u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 128), GPR_VEC(ctx, 2));
label_43f18c:
    // 0x43f18c: 0x24a30090  addiu       $v1, $a1, 0x90
    ctx->pc = 0x43f18cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 144));
label_43f190:
    // 0x43f190: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x43f190u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_43f194:
    // 0x43f194: 0x26260080  addiu       $a2, $s1, 0x80
    ctx->pc = 0x43f194u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
label_43f198:
    // 0x43f198: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x43f198u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
label_43f19c:
    // 0x43f19c: 0x10ee0056  beq         $a3, $t6, . + 4 + (0x56 << 2)
label_43f1a0:
    if (ctx->pc == 0x43F1A0u) {
        ctx->pc = 0x43F1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F19Cu;
        // 0x43f1a0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43F1A4u;
        goto label_43f1a4;
    }
    ctx->pc = 0x43F19Cu;
    {
        const bool branch_taken_0x43f19c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 14));
        ctx->pc = 0x43F1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F19Cu;
        // 0x43f1a0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43f19c) {
            ctx->pc = 0x43F2F8u;
            goto label_43f2f8;
        }
    }
    ctx->pc = 0x43F1A4u;
label_43f1a4:
    // 0x43f1a4: 0x0  nop
    ctx->pc = 0x43f1a4u;
    // NOP
label_43f1a8:
    // 0x43f1a8: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x43f1a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_43f1ac:
    // 0x43f1ac: 0xa0682d  daddu       $t5, $a1, $zero
    ctx->pc = 0x43f1acu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_43f1b0:
    // 0x43f1b0: 0xa0602d  daddu       $t4, $a1, $zero
    ctx->pc = 0x43f1b0u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_43f1b4:
    // 0x43f1b4: 0xa0582d  daddu       $t3, $a1, $zero
    ctx->pc = 0x43f1b4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_43f1b8:
    // 0x43f1b8: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x43f1b8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_43f1bc:
    // 0x43f1bc: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x43f1bcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_43f1c0:
    // 0x43f1c0: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x43f1c0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_43f1c4:
    // 0x43f1c4: 0x0  nop
    ctx->pc = 0x43f1c4u;
    // NOP
label_43f1c8:
    // 0x43f1c8: 0x8f84be20  lw          $a0, -0x41E0($gp)
    ctx->pc = 0x43f1c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
label_43f1cc:
    // 0x43f1cc: 0x78c2ffc0  lq          $v0, -0x40($a2)
    ctx->pc = 0x43f1ccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 4294967232)));
label_43f1d0:
    // 0x43f1d0: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x43f1d0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
label_43f1d4:
    // 0x43f1d4: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x43f1d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_43f1d8:
    // 0x43f1d8: 0xaf84be20  sw          $a0, -0x41E0($gp)
    ctx->pc = 0x43f1d8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 4));
label_43f1dc:
    // 0x43f1dc: 0x7902ffd0  lq          $v0, -0x30($t0)
    ctx->pc = 0x43f1dcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 8), 4294967248)));
label_43f1e0:
    // 0x43f1e0: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x43f1e0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
label_43f1e4:
    // 0x43f1e4: 0x24830010  addiu       $v1, $a0, 0x10
    ctx->pc = 0x43f1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_43f1e8:
    // 0x43f1e8: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x43f1e8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_43f1ec:
    // 0x43f1ec: 0x7922ffe0  lq          $v0, -0x20($t1)
    ctx->pc = 0x43f1ecu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 9), 4294967264)));
label_43f1f0:
    // 0x43f1f0: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x43f1f0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
label_43f1f4:
    // 0x43f1f4: 0x24830020  addiu       $v1, $a0, 0x20
    ctx->pc = 0x43f1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
label_43f1f8:
    // 0x43f1f8: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x43f1f8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_43f1fc:
    // 0x43f1fc: 0x7942fff0  lq          $v0, -0x10($t2)
    ctx->pc = 0x43f1fcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 10), 4294967280)));
label_43f200:
    // 0x43f200: 0x7c820020  sq          $v0, 0x20($a0)
    ctx->pc = 0x43f200u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 2));
label_43f204:
    // 0x43f204: 0x24830030  addiu       $v1, $a0, 0x30
    ctx->pc = 0x43f204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
label_43f208:
    // 0x43f208: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x43f208u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_43f20c:
    // 0x43f20c: 0x79620000  lq          $v0, 0x0($t3)
    ctx->pc = 0x43f20cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 11), 0)));
label_43f210:
    // 0x43f210: 0x7c820030  sq          $v0, 0x30($a0)
    ctx->pc = 0x43f210u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 2));
label_43f214:
    // 0x43f214: 0x24830040  addiu       $v1, $a0, 0x40
    ctx->pc = 0x43f214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
label_43f218:
    // 0x43f218: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x43f218u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_43f21c:
    // 0x43f21c: 0x79820010  lq          $v0, 0x10($t4)
    ctx->pc = 0x43f21cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 12), 16)));
label_43f220:
    // 0x43f220: 0x7c820040  sq          $v0, 0x40($a0)
    ctx->pc = 0x43f220u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 64), GPR_VEC(ctx, 2));
label_43f224:
    // 0x43f224: 0x24830050  addiu       $v1, $a0, 0x50
    ctx->pc = 0x43f224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
label_43f228:
    // 0x43f228: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x43f228u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_43f22c:
    // 0x43f22c: 0x79a20020  lq          $v0, 0x20($t5)
    ctx->pc = 0x43f22cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 13), 32)));
label_43f230:
    // 0x43f230: 0x7c820050  sq          $v0, 0x50($a0)
    ctx->pc = 0x43f230u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 80), GPR_VEC(ctx, 2));
label_43f234:
    // 0x43f234: 0x24830060  addiu       $v1, $a0, 0x60
    ctx->pc = 0x43f234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
label_43f238:
    // 0x43f238: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x43f238u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_43f23c:
    // 0x43f23c: 0x78a20030  lq          $v0, 0x30($a1)
    ctx->pc = 0x43f23cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 48)));
label_43f240:
    // 0x43f240: 0x7c820060  sq          $v0, 0x60($a0)
    ctx->pc = 0x43f240u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 96), GPR_VEC(ctx, 2));
label_43f244:
    // 0x43f244: 0x24830070  addiu       $v1, $a0, 0x70
    ctx->pc = 0x43f244u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
label_43f248:
    // 0x43f248: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x43f248u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_43f24c:
    // 0x43f24c: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x43f24cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_43f250:
    // 0x43f250: 0x7c820070  sq          $v0, 0x70($a0)
    ctx->pc = 0x43f250u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 112), GPR_VEC(ctx, 2));
label_43f254:
    // 0x43f254: 0x24830080  addiu       $v1, $a0, 0x80
    ctx->pc = 0x43f254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
label_43f258:
    // 0x43f258: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x43f258u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_43f25c:
    // 0x43f25c: 0x79020010  lq          $v0, 0x10($t0)
    ctx->pc = 0x43f25cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 8), 16)));
label_43f260:
    // 0x43f260: 0x7c820080  sq          $v0, 0x80($a0)
    ctx->pc = 0x43f260u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 128), GPR_VEC(ctx, 2));
label_43f264:
    // 0x43f264: 0x24830090  addiu       $v1, $a0, 0x90
    ctx->pc = 0x43f264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 144));
label_43f268:
    // 0x43f268: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x43f268u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_43f26c:
    // 0x43f26c: 0x79220020  lq          $v0, 0x20($t1)
    ctx->pc = 0x43f26cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 9), 32)));
label_43f270:
    // 0x43f270: 0x7c820090  sq          $v0, 0x90($a0)
    ctx->pc = 0x43f270u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 144), GPR_VEC(ctx, 2));
label_43f274:
    // 0x43f274: 0x248300a0  addiu       $v1, $a0, 0xA0
    ctx->pc = 0x43f274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
label_43f278:
    // 0x43f278: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x43f278u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_43f27c:
    // 0x43f27c: 0x79420030  lq          $v0, 0x30($t2)
    ctx->pc = 0x43f27cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 10), 48)));
label_43f280:
    // 0x43f280: 0x7c8200a0  sq          $v0, 0xA0($a0)
    ctx->pc = 0x43f280u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 160), GPR_VEC(ctx, 2));
label_43f284:
    // 0x43f284: 0x248300b0  addiu       $v1, $a0, 0xB0
    ctx->pc = 0x43f284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 176));
label_43f288:
    // 0x43f288: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x43f288u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_43f28c:
    // 0x43f28c: 0x79620040  lq          $v0, 0x40($t3)
    ctx->pc = 0x43f28cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 11), 64)));
label_43f290:
    // 0x43f290: 0x7c8200b0  sq          $v0, 0xB0($a0)
    ctx->pc = 0x43f290u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 176), GPR_VEC(ctx, 2));
label_43f294:
    // 0x43f294: 0x248300c0  addiu       $v1, $a0, 0xC0
    ctx->pc = 0x43f294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
label_43f298:
    // 0x43f298: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x43f298u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_43f29c:
    // 0x43f29c: 0x79820050  lq          $v0, 0x50($t4)
    ctx->pc = 0x43f29cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 12), 80)));
label_43f2a0:
    // 0x43f2a0: 0x7c8200c0  sq          $v0, 0xC0($a0)
    ctx->pc = 0x43f2a0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 192), GPR_VEC(ctx, 2));
label_43f2a4:
    // 0x43f2a4: 0x248300d0  addiu       $v1, $a0, 0xD0
    ctx->pc = 0x43f2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 208));
label_43f2a8:
    // 0x43f2a8: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x43f2a8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_43f2ac:
    // 0x43f2ac: 0x79a20060  lq          $v0, 0x60($t5)
    ctx->pc = 0x43f2acu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 13), 96)));
label_43f2b0:
    // 0x43f2b0: 0x7c8200d0  sq          $v0, 0xD0($a0)
    ctx->pc = 0x43f2b0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 208), GPR_VEC(ctx, 2));
label_43f2b4:
    // 0x43f2b4: 0x248300e0  addiu       $v1, $a0, 0xE0
    ctx->pc = 0x43f2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 224));
label_43f2b8:
    // 0x43f2b8: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x43f2b8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_43f2bc:
    // 0x43f2bc: 0x78a20070  lq          $v0, 0x70($a1)
    ctx->pc = 0x43f2bcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 112)));
label_43f2c0:
    // 0x43f2c0: 0x7c8200e0  sq          $v0, 0xE0($a0)
    ctx->pc = 0x43f2c0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 224), GPR_VEC(ctx, 2));
label_43f2c4:
    // 0x43f2c4: 0x248400f0  addiu       $a0, $a0, 0xF0
    ctx->pc = 0x43f2c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 240));
label_43f2c8:
    // 0x43f2c8: 0xaf84be20  sw          $a0, -0x41E0($gp)
    ctx->pc = 0x43f2c8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 4));
label_43f2cc:
    // 0x43f2cc: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x43f2ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
label_43f2d0:
    // 0x43f2d0: 0x25ad0080  addiu       $t5, $t5, 0x80
    ctx->pc = 0x43f2d0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 128));
label_43f2d4:
    // 0x43f2d4: 0x258c0080  addiu       $t4, $t4, 0x80
    ctx->pc = 0x43f2d4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 128));
label_43f2d8:
    // 0x43f2d8: 0x256b0080  addiu       $t3, $t3, 0x80
    ctx->pc = 0x43f2d8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 128));
label_43f2dc:
    // 0x43f2dc: 0x254a0080  addiu       $t2, $t2, 0x80
    ctx->pc = 0x43f2dcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 128));
label_43f2e0:
    // 0x43f2e0: 0x25290080  addiu       $t1, $t1, 0x80
    ctx->pc = 0x43f2e0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 128));
label_43f2e4:
    // 0x43f2e4: 0x25080080  addiu       $t0, $t0, 0x80
    ctx->pc = 0x43f2e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 128));
label_43f2e8:
    // 0x43f2e8: 0x24c60080  addiu       $a2, $a2, 0x80
    ctx->pc = 0x43f2e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
label_43f2ec:
    // 0x43f2ec: 0x24e7fffe  addiu       $a3, $a3, -0x2
    ctx->pc = 0x43f2ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967294));
label_43f2f0:
    // 0x43f2f0: 0x14eeffb5  bne         $a3, $t6, . + 4 + (-0x4B << 2)
label_43f2f4:
    if (ctx->pc == 0x43F2F4u) {
        ctx->pc = 0x43F2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F2F0u;
        // 0x43f2f4: 0x26310080  addiu       $s1, $s1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43F2F8u;
        goto label_43f2f8;
    }
    ctx->pc = 0x43F2F0u;
    {
        const bool branch_taken_0x43f2f0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 14));
        ctx->pc = 0x43F2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F2F0u;
        // 0x43f2f4: 0x26310080  addiu       $s1, $s1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43f2f0) {
            ctx->pc = 0x43F1C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_43f1c8;
        }
    }
    ctx->pc = 0x43F2F8u;
label_43f2f8:
    // 0x43f2f8: 0x8f82be20  lw          $v0, -0x41E0($gp)
    ctx->pc = 0x43f2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
label_43f2fc:
    // 0x43f2fc: 0x7c4f0000  sq          $t7, 0x0($v0)
    ctx->pc = 0x43f2fcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 15));
label_43f300:
    // 0x43f300: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x43f300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_43f304:
    // 0x43f304: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x43f304u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
label_43f308:
    // 0x43f308: 0x1600ff5b  bnez        $s0, . + 4 + (-0xA5 << 2)
label_43f30c:
    if (ctx->pc == 0x43F30Cu) {
        ctx->pc = 0x43F30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F308u;
        // 0x43f30c: 0x7a8f0000  lq          $t7, 0x0($s4) (Delay Slot)
        SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43F310u;
        goto label_43f310;
    }
    ctx->pc = 0x43F308u;
    {
        const bool branch_taken_0x43f308 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x43F30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F308u;
        // 0x43f30c: 0x7a8f0000  lq          $t7, 0x0($s4) (Delay Slot)
        SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43f308) {
            ctx->pc = 0x43F078u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_43f078;
        }
    }
    ctx->pc = 0x43F310u;
label_43f310:
    // 0x43f310: 0xc10f954  jal         func_43E550
label_43f314:
    if (ctx->pc == 0x43F314u) {
        ctx->pc = 0x43F318u;
        goto label_43f318;
    }
    ctx->pc = 0x43F310u;
    SET_GPR_U32(ctx, 31, 0x43F318u);
    ctx->pc = 0x43E550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43E550u, 0x43F310u, 0x43F318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43F318u;
label_43f318:
    // 0x43f318: 0x1240000d  beqz        $s2, . + 4 + (0xD << 2)
label_43f31c:
    if (ctx->pc == 0x43F31Cu) {
        ctx->pc = 0x43F31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F318u;
        // 0x43f31c: 0x8f90aee8  lw          $s0, -0x5118($gp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946536)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43F320u;
        goto label_43f320;
    }
    ctx->pc = 0x43F318u;
    {
        const bool branch_taken_0x43f318 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x43F31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F318u;
        // 0x43f31c: 0x8f90aee8  lw          $s0, -0x5118($gp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946536)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43f318) {
            ctx->pc = 0x43F350u;
            goto label_43f350;
        }
    }
    ctx->pc = 0x43F320u;
label_43f320:
    // 0x43f320: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x43f320u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_43f324:
    // 0x43f324: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x43f324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_43f328:
    // 0x43f328: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x43f328u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_43f32c:
    // 0x43f32c: 0x212182b  sltu        $v1, $s0, $s2
    ctx->pc = 0x43f32cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_43f330:
    // 0x43f330: 0x8e680004  lw          $t0, 0x4($s3)
    ctx->pc = 0x43f330u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_43f334:
    // 0x43f334: 0x243800a  movz        $s0, $s2, $v1
    ctx->pc = 0x43f334u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 18));
label_43f338:
    // 0x43f338: 0x8fa90000  lw          $t1, 0x0($sp)
    ctx->pc = 0x43f338u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_43f33c:
    // 0x43f33c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x43f33cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_43f340:
    // 0x43f340: 0x40f809  jalr        $v0
label_43f344:
    if (ctx->pc == 0x43F344u) {
        ctx->pc = 0x43F344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F340u;
        // 0x43f344: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43F348u;
        goto label_43f348;
    }
    ctx->pc = 0x43F340u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x43F348u);
        ctx->pc = 0x43F344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F340u;
        // 0x43f344: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43F340u, 0x43F348u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x43F348u;
label_43f348:
    // 0x43f348: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_43f34c:
    if (ctx->pc == 0x43F34Cu) {
        ctx->pc = 0x43F350u;
        goto label_43f350;
    }
    ctx->pc = 0x43F348u;
    {
        const bool branch_taken_0x43f348 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x43f348) {
            ctx->pc = 0x43F354u;
            goto label_43f354;
        }
    }
    ctx->pc = 0x43F350u;
label_43f350:
    // 0x43f350: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x43f350u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_43f354:
    // 0x43f354: 0x1600ff38  bnez        $s0, . + 4 + (-0xC8 << 2)
label_43f358:
    if (ctx->pc == 0x43F358u) {
        ctx->pc = 0x43F358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F354u;
        // 0x43f358: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43F35Cu;
        goto label_43f35c;
    }
    ctx->pc = 0x43F354u;
    {
        const bool branch_taken_0x43f354 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x43F358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F354u;
        // 0x43f358: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43f354) {
            ctx->pc = 0x43F038u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_43f038;
        }
    }
    ctx->pc = 0x43F35Cu;
label_43f35c:
    // 0x43f35c: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x43f35cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_43f360:
    // 0x43f360: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x43f360u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_43f364:
    // 0x43f364: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x43f364u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_43f368:
    // 0x43f368: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x43f368u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_43f36c:
    // 0x43f36c: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x43f36cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_43f370:
    // 0x43f370: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x43f370u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_43f374:
    // 0x43f374: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x43f374u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_43f378:
    // 0x43f378: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x43f378u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_43f37c:
    // 0x43f37c: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x43f37cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_43f380:
    // 0x43f380: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x43f380u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_43f384:
    // 0x43f384: 0x3e00008  jr          $ra
label_43f388:
    if (ctx->pc == 0x43F388u) {
        ctx->pc = 0x43F388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F384u;
        // 0x43f388: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43F38Cu;
        goto label_43f38c;
    }
    ctx->pc = 0x43F384u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43F388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F384u;
        // 0x43f388: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43F384u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43F38Cu;
label_43f38c:
    // 0x43f38c: 0x0  nop
    ctx->pc = 0x43f38cu;
    // NOP
label_43f390:
    // 0x43f390: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x43f390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_43f394:
    // 0x43f394: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x43f394u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_43f398:
    // 0x43f398: 0xe2001b  divu        $zero, $a3, $v0
    ctx->pc = 0x43f398u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,7); } }
label_43f39c:
    // 0x43f39c: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x43f39cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_43f3a0:
    // 0x43f3a0: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x43f3a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_43f3a4:
    // 0x43f3a4: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x43f3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
label_43f3a8:
    // 0x43f3a8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x43f3a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_43f3ac:
    // 0x43f3ac: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x43f3acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_43f3b0:
    // 0x43f3b0: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x43f3b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
label_43f3b4:
    // 0x43f3b4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x43f3b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_43f3b8:
    // 0x43f3b8: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x43f3b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
label_43f3bc:
    // 0x43f3bc: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x43f3bcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_43f3c0:
    // 0x43f3c0: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x43f3c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
label_43f3c4:
    // 0x43f3c4: 0x3c15005e  lui         $s5, 0x5E
    ctx->pc = 0x43f3c4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)94 << 16));
label_43f3c8:
    // 0x43f3c8: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x43f3c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_43f3cc:
    // 0x43f3cc: 0x2476d620  addiu       $s6, $v1, -0x29E0
    ctx->pc = 0x43f3ccu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956576));
label_43f3d0:
    // 0x43f3d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x43f3d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_43f3d4:
    // 0x43f3d4: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_43f3d8:
    if (ctx->pc == 0x43F3D8u) {
        ctx->pc = 0x43F3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F3D4u;
        // 0x43f3d8: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x43F3DCu;
        goto label_43f3dc;
    }
    ctx->pc = 0x43F3D4u;
    {
        const bool branch_taken_0x43f3d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x43f3d4) {
            ctx->pc = 0x43F3D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x43F3D4u;
            // 0x43f3d8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x43F3DCu;
            goto label_43f3dc;
        }
    }
    ctx->pc = 0x43F3DCu;
label_43f3dc:
    // 0x43f3dc: 0x3812  mflo        $a3
    ctx->pc = 0x43f3dcu;
    SET_GPR_U64(ctx, 7, ctx->lo);
label_43f3e0:
    // 0x43f3e0: 0x10000071  b           . + 4 + (0x71 << 2)
label_43f3e4:
    if (ctx->pc == 0x43F3E4u) {
        ctx->pc = 0x43F3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F3E0u;
        // 0x43f3e4: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43F3E8u;
        goto label_43f3e8;
    }
    ctx->pc = 0x43F3E0u;
    {
        const bool branch_taken_0x43f3e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43F3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F3E0u;
        // 0x43f3e4: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43f3e0) {
            ctx->pc = 0x43F5A8u;
            goto label_43f5a8;
        }
    }
    ctx->pc = 0x43F3E8u;
label_43f3e8:
    // 0x43f3e8: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x43f3e8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
label_43f3ec:
    // 0x43f3ec: 0x7ac80000  lq          $t0, 0x0($s6)
    ctx->pc = 0x43f3ecu;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 22), 0)));
label_43f3f0:
    // 0x43f3f0: 0x2509023  subu        $s2, $s2, $s0
    ctx->pc = 0x43f3f0u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_43f3f4:
    // 0x43f3f4: 0x24180010  addiu       $t8, $zero, 0x10
    ctx->pc = 0x43f3f4u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_43f3f8:
    // 0x43f3f8: 0x240f000c  addiu       $t7, $zero, 0xC
    ctx->pc = 0x43f3f8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_43f3fc:
    // 0x43f3fc: 0x3c0e1000  lui         $t6, 0x1000
    ctx->pc = 0x43f3fcu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)4096 << 16));
label_43f400:
    // 0x43f400: 0x3c0d0400  lui         $t5, 0x400
    ctx->pc = 0x43f400u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)1024 << 16));
label_43f404:
    // 0x43f404: 0x3c0c0100  lui         $t4, 0x100
    ctx->pc = 0x43f404u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)256 << 16));
label_43f408:
    // 0x43f408: 0x358c0404  ori         $t4, $t4, 0x404
    ctx->pc = 0x43f408u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)1028);
label_43f40c:
    // 0x43f40c: 0xc603c  dsll32      $t4, $t4, 0
    ctx->pc = 0x43f40cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << (32 + 0));
label_43f410:
    // 0x43f410: 0x354a8000  ori         $t2, $t2, 0x8000
    ctx->pc = 0x43f410u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)32768);
label_43f414:
    // 0x43f414: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x43f414u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
label_43f418:
    // 0x43f418: 0x26abd580  addiu       $t3, $s5, -0x2A80
    ctx->pc = 0x43f418u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 21), 4294956416));
label_43f41c:
    // 0x43f41c: 0x0  nop
    ctx->pc = 0x43f41cu;
    // NOP
label_43f420:
    // 0x43f420: 0x2e020011  sltiu       $v0, $s0, 0x11
    ctx->pc = 0x43f420u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
label_43f424:
    // 0x43f424: 0x300302d  daddu       $a2, $t8, $zero
    ctx->pc = 0x43f424u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
label_43f428:
    // 0x43f428: 0x202300b  movn        $a2, $s0, $v0
    ctx->pc = 0x43f428u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 16));
label_43f42c:
    // 0x43f42c: 0xcf2018  mult        $a0, $a2, $t7
    ctx->pc = 0x43f42cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_43f430:
    // 0x43f430: 0xcd1825  or          $v1, $a2, $t5
    ctx->pc = 0x43f430u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 13));
label_43f434:
    // 0x43f434: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x43f434u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_43f438:
    // 0x43f438: 0x2068023  subu        $s0, $s0, $a2
    ctx->pc = 0x43f438u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
label_43f43c:
    // 0x43f43c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x43f43cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_43f440:
    // 0x43f440: 0x6c2825  or          $a1, $v1, $t4
    ctx->pc = 0x43f440u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 12));
label_43f444:
    // 0x43f444: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x43f444u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
label_43f448:
    // 0x43f448: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x43f448u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_43f44c:
    // 0x43f44c: 0x64420002  daddiu      $v0, $v0, 0x2
    ctx->pc = 0x43f44cu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)2);
label_43f450:
    // 0x43f450: 0x4e1825  or          $v1, $v0, $t6
    ctx->pc = 0x43f450u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 14));
label_43f454:
    // 0x43f454: 0x70a31b89  pcpyld      $v1, $a1, $v1
    ctx->pc = 0x43f454u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 5), GPR_VEC(ctx, 3)));
label_43f458:
    // 0x43f458: 0x8f82be20  lw          $v0, -0x41E0($gp)
    ctx->pc = 0x43f458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
label_43f45c:
    // 0x43f45c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x43f45cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_43f460:
    // 0x43f460: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x43f460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_43f464:
    // 0x43f464: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x43f464u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
label_43f468:
    // 0x43f468: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x43f468u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
label_43f46c:
    // 0x43f46c: 0x8a2025  or          $a0, $a0, $t2
    ctx->pc = 0x43f46cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 10));
label_43f470:
    // 0x43f470: 0x3c03c000  lui         $v1, 0xC000
    ctx->pc = 0x43f470u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49152 << 16));
label_43f474:
    // 0x43f474: 0x3463c000  ori         $v1, $v1, 0xC000
    ctx->pc = 0x43f474u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49152);
label_43f478:
    // 0x43f478: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x43f478u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_43f47c:
    // 0x43f47c: 0x34632000  ori         $v1, $v1, 0x2000
    ctx->pc = 0x43f47cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
label_43f480:
    // 0x43f480: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x43f480u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_43f484:
    // 0x43f484: 0x4283c  dsll32      $a1, $a0, 0
    ctx->pc = 0x43f484u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
label_43f488:
    // 0x43f488: 0x70a31b89  pcpyld      $v1, $a1, $v1
    ctx->pc = 0x43f488u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 5), GPR_VEC(ctx, 3)));
label_43f48c:
    // 0x43f48c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x43f48cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_43f490:
    // 0x43f490: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x43f490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_43f494:
    // 0x43f494: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x43f494u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_43f498:
    // 0x43f498: 0x10c9003b  beq         $a2, $t1, . + 4 + (0x3B << 2)
label_43f49c:
    if (ctx->pc == 0x43F49Cu) {
        ctx->pc = 0x43F49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F498u;
        // 0x43f49c: 0xaf82be20  sw          $v0, -0x41E0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43F4A0u;
        goto label_43f4a0;
    }
    ctx->pc = 0x43F498u;
    {
        const bool branch_taken_0x43f498 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 9));
        ctx->pc = 0x43F49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F498u;
        // 0x43f49c: 0xaf82be20  sw          $v0, -0x41E0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43f498) {
            ctx->pc = 0x43F588u;
            goto label_43f588;
        }
    }
    ctx->pc = 0x43F4A0u;
label_43f4a0:
    // 0x43f4a0: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x43f4a0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
label_43f4a4:
    // 0x43f4a4: 0x26250080  addiu       $a1, $s1, 0x80
    ctx->pc = 0x43f4a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
label_43f4a8:
    // 0x43f4a8: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x43f4a8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
label_43f4ac:
    // 0x43f4ac: 0x0  nop
    ctx->pc = 0x43f4acu;
    // NOP
label_43f4b0:
    // 0x43f4b0: 0x8f84be20  lw          $a0, -0x41E0($gp)
    ctx->pc = 0x43f4b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
label_43f4b4:
    // 0x43f4b4: 0x78a2ff80  lq          $v0, -0x80($a1)
    ctx->pc = 0x43f4b4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 4294967168)));
label_43f4b8:
    // 0x43f4b8: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x43f4b8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
label_43f4bc:
    // 0x43f4bc: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x43f4bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_43f4c0:
    // 0x43f4c0: 0xaf84be20  sw          $a0, -0x41E0($gp)
    ctx->pc = 0x43f4c0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 4));
label_43f4c4:
    // 0x43f4c4: 0x78a2ff90  lq          $v0, -0x70($a1)
    ctx->pc = 0x43f4c4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 4294967184)));
label_43f4c8:
    // 0x43f4c8: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x43f4c8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
label_43f4cc:
    // 0x43f4cc: 0x24830010  addiu       $v1, $a0, 0x10
    ctx->pc = 0x43f4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_43f4d0:
    // 0x43f4d0: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x43f4d0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_43f4d4:
    // 0x43f4d4: 0x78a2ffa0  lq          $v0, -0x60($a1)
    ctx->pc = 0x43f4d4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 4294967200)));
label_43f4d8:
    // 0x43f4d8: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x43f4d8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
label_43f4dc:
    // 0x43f4dc: 0x24830020  addiu       $v1, $a0, 0x20
    ctx->pc = 0x43f4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
label_43f4e0:
    // 0x43f4e0: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x43f4e0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_43f4e4:
    // 0x43f4e4: 0x78a2ffb0  lq          $v0, -0x50($a1)
    ctx->pc = 0x43f4e4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 4294967216)));
label_43f4e8:
    // 0x43f4e8: 0x7c820020  sq          $v0, 0x20($a0)
    ctx->pc = 0x43f4e8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 2));
label_43f4ec:
    // 0x43f4ec: 0x24830030  addiu       $v1, $a0, 0x30
    ctx->pc = 0x43f4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
label_43f4f0:
    // 0x43f4f0: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x43f4f0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_43f4f4:
    // 0x43f4f4: 0x78a2ffc0  lq          $v0, -0x40($a1)
    ctx->pc = 0x43f4f4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 4294967232)));
label_43f4f8:
    // 0x43f4f8: 0x7c820030  sq          $v0, 0x30($a0)
    ctx->pc = 0x43f4f8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 2));
label_43f4fc:
    // 0x43f4fc: 0x24830040  addiu       $v1, $a0, 0x40
    ctx->pc = 0x43f4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
label_43f500:
    // 0x43f500: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x43f500u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_43f504:
    // 0x43f504: 0x78a2ffd0  lq          $v0, -0x30($a1)
    ctx->pc = 0x43f504u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 4294967248)));
label_43f508:
    // 0x43f508: 0x7c820040  sq          $v0, 0x40($a0)
    ctx->pc = 0x43f508u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 64), GPR_VEC(ctx, 2));
label_43f50c:
    // 0x43f50c: 0x24830050  addiu       $v1, $a0, 0x50
    ctx->pc = 0x43f50cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
label_43f510:
    // 0x43f510: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x43f510u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_43f514:
    // 0x43f514: 0x78a2ffe0  lq          $v0, -0x20($a1)
    ctx->pc = 0x43f514u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 4294967264)));
label_43f518:
    // 0x43f518: 0x7c820050  sq          $v0, 0x50($a0)
    ctx->pc = 0x43f518u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 80), GPR_VEC(ctx, 2));
label_43f51c:
    // 0x43f51c: 0x24830060  addiu       $v1, $a0, 0x60
    ctx->pc = 0x43f51cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
label_43f520:
    // 0x43f520: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x43f520u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_43f524:
    // 0x43f524: 0x78a2fff0  lq          $v0, -0x10($a1)
    ctx->pc = 0x43f524u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 4294967280)));
label_43f528:
    // 0x43f528: 0x7c820060  sq          $v0, 0x60($a0)
    ctx->pc = 0x43f528u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 96), GPR_VEC(ctx, 2));
label_43f52c:
    // 0x43f52c: 0x24830070  addiu       $v1, $a0, 0x70
    ctx->pc = 0x43f52cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
label_43f530:
    // 0x43f530: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x43f530u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_43f534:
    // 0x43f534: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x43f534u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_43f538:
    // 0x43f538: 0x7c820070  sq          $v0, 0x70($a0)
    ctx->pc = 0x43f538u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 112), GPR_VEC(ctx, 2));
label_43f53c:
    // 0x43f53c: 0x24830080  addiu       $v1, $a0, 0x80
    ctx->pc = 0x43f53cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
label_43f540:
    // 0x43f540: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x43f540u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_43f544:
    // 0x43f544: 0x78a20010  lq          $v0, 0x10($a1)
    ctx->pc = 0x43f544u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 16)));
label_43f548:
    // 0x43f548: 0x7c820080  sq          $v0, 0x80($a0)
    ctx->pc = 0x43f548u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 128), GPR_VEC(ctx, 2));
label_43f54c:
    // 0x43f54c: 0x24830090  addiu       $v1, $a0, 0x90
    ctx->pc = 0x43f54cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 144));
label_43f550:
    // 0x43f550: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x43f550u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_43f554:
    // 0x43f554: 0x78a20020  lq          $v0, 0x20($a1)
    ctx->pc = 0x43f554u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 32)));
label_43f558:
    // 0x43f558: 0x7c820090  sq          $v0, 0x90($a0)
    ctx->pc = 0x43f558u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 144), GPR_VEC(ctx, 2));
label_43f55c:
    // 0x43f55c: 0x248300a0  addiu       $v1, $a0, 0xA0
    ctx->pc = 0x43f55cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
label_43f560:
    // 0x43f560: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x43f560u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_43f564:
    // 0x43f564: 0x78a20030  lq          $v0, 0x30($a1)
    ctx->pc = 0x43f564u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 48)));
label_43f568:
    // 0x43f568: 0x7c8200a0  sq          $v0, 0xA0($a0)
    ctx->pc = 0x43f568u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 160), GPR_VEC(ctx, 2));
label_43f56c:
    // 0x43f56c: 0x248400b0  addiu       $a0, $a0, 0xB0
    ctx->pc = 0x43f56cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 176));
label_43f570:
    // 0x43f570: 0xaf84be20  sw          $a0, -0x41E0($gp)
    ctx->pc = 0x43f570u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 4));
label_43f574:
    // 0x43f574: 0x24a500c0  addiu       $a1, $a1, 0xC0
    ctx->pc = 0x43f574u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 192));
label_43f578:
    // 0x43f578: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x43f578u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_43f57c:
    // 0x43f57c: 0x14c7ffcc  bne         $a2, $a3, . + 4 + (-0x34 << 2)
label_43f580:
    if (ctx->pc == 0x43F580u) {
        ctx->pc = 0x43F580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F57Cu;
        // 0x43f580: 0x263100c0  addiu       $s1, $s1, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43F584u;
        goto label_43f584;
    }
    ctx->pc = 0x43F57Cu;
    {
        const bool branch_taken_0x43f57c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 7));
        ctx->pc = 0x43F580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F57Cu;
        // 0x43f580: 0x263100c0  addiu       $s1, $s1, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43f57c) {
            ctx->pc = 0x43F4B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_43f4b0;
        }
    }
    ctx->pc = 0x43F584u;
label_43f584:
    // 0x43f584: 0x0  nop
    ctx->pc = 0x43f584u;
    // NOP
label_43f588:
    // 0x43f588: 0x8f82be20  lw          $v0, -0x41E0($gp)
    ctx->pc = 0x43f588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
label_43f58c:
    // 0x43f58c: 0x7c480000  sq          $t0, 0x0($v0)
    ctx->pc = 0x43f58cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 8));
label_43f590:
    // 0x43f590: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x43f590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_43f594:
    // 0x43f594: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x43f594u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
label_43f598:
    // 0x43f598: 0x1600ffa1  bnez        $s0, . + 4 + (-0x5F << 2)
label_43f59c:
    if (ctx->pc == 0x43F59Cu) {
        ctx->pc = 0x43F59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F598u;
        // 0x43f59c: 0x79680000  lq          $t0, 0x0($t3) (Delay Slot)
        SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 11), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43F5A0u;
        goto label_43f5a0;
    }
    ctx->pc = 0x43F598u;
    {
        const bool branch_taken_0x43f598 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x43F59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F598u;
        // 0x43f59c: 0x79680000  lq          $t0, 0x0($t3) (Delay Slot)
        SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 11), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43f598) {
            ctx->pc = 0x43F420u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_43f420;
        }
    }
    ctx->pc = 0x43F5A0u;
label_43f5a0:
    // 0x43f5a0: 0xc10f954  jal         func_43E550
label_43f5a4:
    if (ctx->pc == 0x43F5A4u) {
        ctx->pc = 0x43F5A8u;
        goto label_43f5a8;
    }
    ctx->pc = 0x43F5A0u;
    SET_GPR_U32(ctx, 31, 0x43F5A8u);
    ctx->pc = 0x43E550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43E550u, 0x43F5A0u, 0x43F5A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43F5A8u;
label_43f5a8:
    // 0x43f5a8: 0x1240000d  beqz        $s2, . + 4 + (0xD << 2)
label_43f5ac:
    if (ctx->pc == 0x43F5ACu) {
        ctx->pc = 0x43F5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F5A8u;
        // 0x43f5ac: 0x8f90aeec  lw          $s0, -0x5114($gp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946540)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43F5B0u;
        goto label_43f5b0;
    }
    ctx->pc = 0x43F5A8u;
    {
        const bool branch_taken_0x43f5a8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x43F5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F5A8u;
        // 0x43f5ac: 0x8f90aeec  lw          $s0, -0x5114($gp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946540)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43f5a8) {
            ctx->pc = 0x43F5E0u;
            goto label_43f5e0;
        }
    }
    ctx->pc = 0x43F5B0u;
label_43f5b0:
    // 0x43f5b0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x43f5b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_43f5b4:
    // 0x43f5b4: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x43f5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_43f5b8:
    // 0x43f5b8: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x43f5b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_43f5bc:
    // 0x43f5bc: 0x212182b  sltu        $v1, $s0, $s2
    ctx->pc = 0x43f5bcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_43f5c0:
    // 0x43f5c0: 0x8e680008  lw          $t0, 0x8($s3)
    ctx->pc = 0x43f5c0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_43f5c4:
    // 0x43f5c4: 0x243800a  movz        $s0, $s2, $v1
    ctx->pc = 0x43f5c4u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 18));
label_43f5c8:
    // 0x43f5c8: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x43f5c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_43f5cc:
    // 0x43f5cc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x43f5ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_43f5d0:
    // 0x43f5d0: 0x40f809  jalr        $v0
label_43f5d4:
    if (ctx->pc == 0x43F5D4u) {
        ctx->pc = 0x43F5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F5D0u;
        // 0x43f5d4: 0x280482d  daddu       $t1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43F5D8u;
        goto label_43f5d8;
    }
    ctx->pc = 0x43F5D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x43F5D8u);
        ctx->pc = 0x43F5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F5D0u;
        // 0x43f5d4: 0x280482d  daddu       $t1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43F5D0u, 0x43F5D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x43F5D8u;
label_43f5d8:
    // 0x43f5d8: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_43f5dc:
    if (ctx->pc == 0x43F5DCu) {
        ctx->pc = 0x43F5E0u;
        goto label_43f5e0;
    }
    ctx->pc = 0x43F5D8u;
    {
        const bool branch_taken_0x43f5d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x43f5d8) {
            ctx->pc = 0x43F5E4u;
            goto label_43f5e4;
        }
    }
    ctx->pc = 0x43F5E0u;
label_43f5e0:
    // 0x43f5e0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x43f5e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_43f5e4:
    // 0x43f5e4: 0x1600ff80  bnez        $s0, . + 4 + (-0x80 << 2)
label_43f5e8:
    if (ctx->pc == 0x43F5E8u) {
        ctx->pc = 0x43F5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F5E4u;
        // 0x43f5e8: 0x3c0a7c00  lui         $t2, 0x7C00 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)31744 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43F5ECu;
        goto label_43f5ec;
    }
    ctx->pc = 0x43F5E4u;
    {
        const bool branch_taken_0x43f5e4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x43F5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F5E4u;
        // 0x43f5e8: 0x3c0a7c00  lui         $t2, 0x7C00 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)31744 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43f5e4) {
            ctx->pc = 0x43F3E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_43f3e8;
        }
    }
    ctx->pc = 0x43F5ECu;
label_43f5ec:
    // 0x43f5ec: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x43f5ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_43f5f0:
    // 0x43f5f0: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x43f5f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_43f5f4:
    // 0x43f5f4: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x43f5f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_43f5f8:
    // 0x43f5f8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x43f5f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_43f5fc:
    // 0x43f5fc: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x43f5fcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_43f600:
    // 0x43f600: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x43f600u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_43f604:
    // 0x43f604: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x43f604u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_43f608:
    // 0x43f608: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x43f608u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_43f60c:
    // 0x43f60c: 0x3e00008  jr          $ra
label_43f610:
    if (ctx->pc == 0x43F610u) {
        ctx->pc = 0x43F610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F60Cu;
        // 0x43f610: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43F614u;
        goto label_43f614;
    }
    ctx->pc = 0x43F60Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43F610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F60Cu;
        // 0x43f610: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43F60Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43F614u;
label_43f614:
    // 0x43f614: 0x0  nop
    ctx->pc = 0x43f614u;
    // NOP
label_43f618:
    // 0x43f618: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x43f618u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_43f61c:
    // 0x43f61c: 0x24e3fffe  addiu       $v1, $a3, -0x2
    ctx->pc = 0x43f61cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967294));
label_43f620:
    // 0x43f620: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x43f620u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_43f624:
    // 0x43f624: 0x2ce70003  sltiu       $a3, $a3, 0x3
    ctx->pc = 0x43f624u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_43f628:
    // 0x43f628: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x43f628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_43f62c:
    // 0x43f62c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x43f62cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_43f630:
    // 0x43f630: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x43f630u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_43f634:
    // 0x43f634: 0x67980a  movz        $s3, $v1, $a3
    ctx->pc = 0x43f634u;
    if (GPR_U64(ctx, 7) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 3));
label_43f638:
    // 0x43f638: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x43f638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_43f63c:
    // 0x43f63c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x43f63cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_43f640:
    // 0x43f640: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x43f640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
label_43f644:
    // 0x43f644: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x43f644u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_43f648:
    // 0x43f648: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x43f648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
label_43f64c:
    // 0x43f64c: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x43f64cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_43f650:
    // 0x43f650: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x43f650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_43f654:
    // 0x43f654: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x43f654u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_43f658:
    // 0x43f658: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x43f658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_43f65c:
    // 0x43f65c: 0x3c1e005e  lui         $fp, 0x5E
    ctx->pc = 0x43f65cu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)94 << 16));
label_43f660:
    // 0x43f660: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x43f660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
label_43f664:
    // 0x43f664: 0x1000007a  b           . + 4 + (0x7A << 2)
label_43f668:
    if (ctx->pc == 0x43F668u) {
        ctx->pc = 0x43F668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F664u;
        // 0x43f668: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43F66Cu;
        goto label_43f66c;
    }
    ctx->pc = 0x43F664u;
    {
        const bool branch_taken_0x43f664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43F668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F664u;
        // 0x43f668: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43f664) {
            ctx->pc = 0x43F850u;
            goto label_43f850;
        }
    }
    ctx->pc = 0x43F66Cu;
label_43f66c:
    // 0x43f66c: 0x0  nop
    ctx->pc = 0x43f66cu;
    // NOP
label_43f670:
    // 0x43f670: 0x3c0d7c00  lui         $t5, 0x7C00
    ctx->pc = 0x43f670u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)31744 << 16));
label_43f674:
    // 0x43f674: 0x2442d620  addiu       $v0, $v0, -0x29E0
    ctx->pc = 0x43f674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956576));
label_43f678:
    // 0x43f678: 0x3c0cffff  lui         $t4, 0xFFFF
    ctx->pc = 0x43f678u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)65535 << 16));
label_43f67c:
    // 0x43f67c: 0x784b0000  lq          $t3, 0x0($v0)
    ctx->pc = 0x43f67cu;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_43f680:
    // 0x43f680: 0x2709823  subu        $s3, $s3, $s0
    ctx->pc = 0x43f680u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_43f684:
    // 0x43f684: 0x24160010  addiu       $s6, $zero, 0x10
    ctx->pc = 0x43f684u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_43f688:
    // 0x43f688: 0x2415000c  addiu       $s5, $zero, 0xC
    ctx->pc = 0x43f688u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_43f68c:
    // 0x43f68c: 0x3c191000  lui         $t9, 0x1000
    ctx->pc = 0x43f68cu;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)4096 << 16));
label_43f690:
    // 0x43f690: 0x3c180400  lui         $t8, 0x400
    ctx->pc = 0x43f690u;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)1024 << 16));
label_43f694:
    // 0x43f694: 0x3c0f0100  lui         $t7, 0x100
    ctx->pc = 0x43f694u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)256 << 16));
label_43f698:
    // 0x43f698: 0x35ef0404  ori         $t7, $t7, 0x404
    ctx->pc = 0x43f698u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)1028);
label_43f69c:
    // 0x43f69c: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x43f69cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
label_43f6a0:
    // 0x43f6a0: 0x35ad8000  ori         $t5, $t5, 0x8000
    ctx->pc = 0x43f6a0u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)32768);
label_43f6a4:
    // 0x43f6a4: 0x358cffff  ori         $t4, $t4, 0xFFFF
    ctx->pc = 0x43f6a4u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)65535);
label_43f6a8:
    // 0x43f6a8: 0x27ced580  addiu       $t6, $fp, -0x2A80
    ctx->pc = 0x43f6a8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 30), 4294956416));
label_43f6ac:
    // 0x43f6ac: 0x0  nop
    ctx->pc = 0x43f6acu;
    // NOP
label_43f6b0:
    // 0x43f6b0: 0x2e020011  sltiu       $v0, $s0, 0x11
    ctx->pc = 0x43f6b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
label_43f6b4:
    // 0x43f6b4: 0x2c0482d  daddu       $t1, $s6, $zero
    ctx->pc = 0x43f6b4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_43f6b8:
    // 0x43f6b8: 0x202480b  movn        $t1, $s0, $v0
    ctx->pc = 0x43f6b8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 16));
label_43f6bc:
    // 0x43f6bc: 0x1352018  mult        $a0, $t1, $s5
    ctx->pc = 0x43f6bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_43f6c0:
    // 0x43f6c0: 0x1381825  or          $v1, $t1, $t8
    ctx->pc = 0x43f6c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) | GPR_U64(ctx, 24));
label_43f6c4:
    // 0x43f6c4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x43f6c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_43f6c8:
    // 0x43f6c8: 0x2098023  subu        $s0, $s0, $t1
    ctx->pc = 0x43f6c8u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 9)));
label_43f6cc:
    // 0x43f6cc: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x43f6ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_43f6d0:
    // 0x43f6d0: 0x6f2825  or          $a1, $v1, $t7
    ctx->pc = 0x43f6d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 15));
label_43f6d4:
    // 0x43f6d4: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x43f6d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
label_43f6d8:
    // 0x43f6d8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x43f6d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_43f6dc:
    // 0x43f6dc: 0x64420002  daddiu      $v0, $v0, 0x2
    ctx->pc = 0x43f6dcu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)2);
label_43f6e0:
    // 0x43f6e0: 0x591825  or          $v1, $v0, $t9
    ctx->pc = 0x43f6e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 25));
label_43f6e4:
    // 0x43f6e4: 0x70a31b89  pcpyld      $v1, $a1, $v1
    ctx->pc = 0x43f6e4u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 5), GPR_VEC(ctx, 3)));
label_43f6e8:
    // 0x43f6e8: 0x8f82be20  lw          $v0, -0x41E0($gp)
    ctx->pc = 0x43f6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
label_43f6ec:
    // 0x43f6ec: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x43f6ecu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_43f6f0:
    // 0x43f6f0: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x43f6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_43f6f4:
    // 0x43f6f4: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x43f6f4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
label_43f6f8:
    // 0x43f6f8: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x43f6f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
label_43f6fc:
    // 0x43f6fc: 0x8d2025  or          $a0, $a0, $t5
    ctx->pc = 0x43f6fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 13));
label_43f700:
    // 0x43f700: 0x3c03c000  lui         $v1, 0xC000
    ctx->pc = 0x43f700u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49152 << 16));
label_43f704:
    // 0x43f704: 0x3463c000  ori         $v1, $v1, 0xC000
    ctx->pc = 0x43f704u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49152);
label_43f708:
    // 0x43f708: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x43f708u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_43f70c:
    // 0x43f70c: 0x34632000  ori         $v1, $v1, 0x2000
    ctx->pc = 0x43f70cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
label_43f710:
    // 0x43f710: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x43f710u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_43f714:
    // 0x43f714: 0x4283c  dsll32      $a1, $a0, 0
    ctx->pc = 0x43f714u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
label_43f718:
    // 0x43f718: 0x70a31b89  pcpyld      $v1, $a1, $v1
    ctx->pc = 0x43f718u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 5), GPR_VEC(ctx, 3)));
label_43f71c:
    // 0x43f71c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x43f71cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_43f720:
    // 0x43f720: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x43f720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_43f724:
    // 0x43f724: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x43f724u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
label_43f728:
    // 0x43f728: 0x112c0041  beq         $t1, $t4, . + 4 + (0x41 << 2)
label_43f72c:
    if (ctx->pc == 0x43F72Cu) {
        ctx->pc = 0x43F72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F728u;
        // 0x43f72c: 0xaf82be20  sw          $v0, -0x41E0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43F730u;
        goto label_43f730;
    }
    ctx->pc = 0x43F728u;
    {
        const bool branch_taken_0x43f728 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 12));
        ctx->pc = 0x43F72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F728u;
        // 0x43f72c: 0xaf82be20  sw          $v0, -0x41E0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43f728) {
            ctx->pc = 0x43F830u;
            goto label_43f830;
        }
    }
    ctx->pc = 0x43F730u;
label_43f730:
    // 0x43f730: 0x3c0affff  lui         $t2, 0xFFFF
    ctx->pc = 0x43f730u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65535 << 16));
label_43f734:
    // 0x43f734: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x43f734u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_43f738:
    // 0x43f738: 0x354affff  ori         $t2, $t2, 0xFFFF
    ctx->pc = 0x43f738u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
label_43f73c:
    // 0x43f73c: 0x0  nop
    ctx->pc = 0x43f73cu;
    // NOP
label_43f740:
    // 0x43f740: 0x3a470003  xori        $a3, $s2, 0x3
    ctx->pc = 0x43f740u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)3);
label_43f744:
    // 0x43f744: 0x122980  sll         $a1, $s2, 6
    ctx->pc = 0x43f744u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
label_43f748:
    // 0x43f748: 0x73180  sll         $a2, $a3, 6
    ctx->pc = 0x43f748u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 6));
label_43f74c:
    // 0x43f74c: 0x2252821  addu        $a1, $s1, $a1
    ctx->pc = 0x43f74cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
label_43f750:
    // 0x43f750: 0x2263021  addu        $a2, $s1, $a2
    ctx->pc = 0x43f750u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
label_43f754:
    // 0x43f754: 0x8f84be20  lw          $a0, -0x41E0($gp)
    ctx->pc = 0x43f754u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
label_43f758:
    // 0x43f758: 0x79020000  lq          $v0, 0x0($t0)
    ctx->pc = 0x43f758u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 8), 0)));
label_43f75c:
    // 0x43f75c: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x43f75cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
label_43f760:
    // 0x43f760: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x43f760u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_43f764:
    // 0x43f764: 0xaf84be20  sw          $a0, -0x41E0($gp)
    ctx->pc = 0x43f764u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 4));
label_43f768:
    // 0x43f768: 0x79020010  lq          $v0, 0x10($t0)
    ctx->pc = 0x43f768u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 8), 16)));
label_43f76c:
    // 0x43f76c: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x43f76cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
label_43f770:
    // 0x43f770: 0x24830010  addiu       $v1, $a0, 0x10
    ctx->pc = 0x43f770u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_43f774:
    // 0x43f774: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x43f774u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_43f778:
    // 0x43f778: 0x79020020  lq          $v0, 0x20($t0)
    ctx->pc = 0x43f778u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 8), 32)));
label_43f77c:
    // 0x43f77c: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x43f77cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
label_43f780:
    // 0x43f780: 0x24830020  addiu       $v1, $a0, 0x20
    ctx->pc = 0x43f780u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
label_43f784:
    // 0x43f784: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x43f784u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_43f788:
    // 0x43f788: 0x79020030  lq          $v0, 0x30($t0)
    ctx->pc = 0x43f788u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 8), 48)));
label_43f78c:
    // 0x43f78c: 0x7c820020  sq          $v0, 0x20($a0)
    ctx->pc = 0x43f78cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 2));
label_43f790:
    // 0x43f790: 0x24830030  addiu       $v1, $a0, 0x30
    ctx->pc = 0x43f790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
label_43f794:
    // 0x43f794: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x43f794u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_43f798:
    // 0x43f798: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x43f798u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_43f79c:
    // 0x43f79c: 0x7c820030  sq          $v0, 0x30($a0)
    ctx->pc = 0x43f79cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 2));
label_43f7a0:
    // 0x43f7a0: 0x24830040  addiu       $v1, $a0, 0x40
    ctx->pc = 0x43f7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
label_43f7a4:
    // 0x43f7a4: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x43f7a4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_43f7a8:
    // 0x43f7a8: 0x78a20010  lq          $v0, 0x10($a1)
    ctx->pc = 0x43f7a8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 16)));
label_43f7ac:
    // 0x43f7ac: 0x7c820040  sq          $v0, 0x40($a0)
    ctx->pc = 0x43f7acu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 64), GPR_VEC(ctx, 2));
label_43f7b0:
    // 0x43f7b0: 0x24830050  addiu       $v1, $a0, 0x50
    ctx->pc = 0x43f7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
label_43f7b4:
    // 0x43f7b4: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x43f7b4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_43f7b8:
    // 0x43f7b8: 0x78a20020  lq          $v0, 0x20($a1)
    ctx->pc = 0x43f7b8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 32)));
label_43f7bc:
    // 0x43f7bc: 0x7c820050  sq          $v0, 0x50($a0)
    ctx->pc = 0x43f7bcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 80), GPR_VEC(ctx, 2));
label_43f7c0:
    // 0x43f7c0: 0x24830060  addiu       $v1, $a0, 0x60
    ctx->pc = 0x43f7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
label_43f7c4:
    // 0x43f7c4: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x43f7c4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_43f7c8:
    // 0x43f7c8: 0x78a20030  lq          $v0, 0x30($a1)
    ctx->pc = 0x43f7c8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 48)));
label_43f7cc:
    // 0x43f7cc: 0x7c820060  sq          $v0, 0x60($a0)
    ctx->pc = 0x43f7ccu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 96), GPR_VEC(ctx, 2));
label_43f7d0:
    // 0x43f7d0: 0x24830070  addiu       $v1, $a0, 0x70
    ctx->pc = 0x43f7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
label_43f7d4:
    // 0x43f7d4: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x43f7d4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_43f7d8:
    // 0x43f7d8: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x43f7d8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_43f7dc:
    // 0x43f7dc: 0x7c820070  sq          $v0, 0x70($a0)
    ctx->pc = 0x43f7dcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 112), GPR_VEC(ctx, 2));
label_43f7e0:
    // 0x43f7e0: 0x24830080  addiu       $v1, $a0, 0x80
    ctx->pc = 0x43f7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
label_43f7e4:
    // 0x43f7e4: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x43f7e4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_43f7e8:
    // 0x43f7e8: 0x78c20010  lq          $v0, 0x10($a2)
    ctx->pc = 0x43f7e8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 16)));
label_43f7ec:
    // 0x43f7ec: 0x7c820080  sq          $v0, 0x80($a0)
    ctx->pc = 0x43f7ecu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 128), GPR_VEC(ctx, 2));
label_43f7f0:
    // 0x43f7f0: 0x24830090  addiu       $v1, $a0, 0x90
    ctx->pc = 0x43f7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 144));
label_43f7f4:
    // 0x43f7f4: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x43f7f4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_43f7f8:
    // 0x43f7f8: 0x78c20020  lq          $v0, 0x20($a2)
    ctx->pc = 0x43f7f8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 32)));
label_43f7fc:
    // 0x43f7fc: 0x7c820090  sq          $v0, 0x90($a0)
    ctx->pc = 0x43f7fcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 144), GPR_VEC(ctx, 2));
label_43f800:
    // 0x43f800: 0x248300a0  addiu       $v1, $a0, 0xA0
    ctx->pc = 0x43f800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
label_43f804:
    // 0x43f804: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x43f804u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_43f808:
    // 0x43f808: 0x78c20030  lq          $v0, 0x30($a2)
    ctx->pc = 0x43f808u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 48)));
label_43f80c:
    // 0x43f80c: 0x7c8200a0  sq          $v0, 0xA0($a0)
    ctx->pc = 0x43f80cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 160), GPR_VEC(ctx, 2));
label_43f810:
    // 0x43f810: 0x248400b0  addiu       $a0, $a0, 0xB0
    ctx->pc = 0x43f810u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 176));
label_43f814:
    // 0x43f814: 0xaf84be20  sw          $a0, -0x41E0($gp)
    ctx->pc = 0x43f814u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 4));
label_43f818:
    // 0x43f818: 0x25080040  addiu       $t0, $t0, 0x40
    ctx->pc = 0x43f818u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 64));
label_43f81c:
    // 0x43f81c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x43f81cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_43f820:
    // 0x43f820: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x43f820u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
label_43f824:
    // 0x43f824: 0x152affc6  bne         $t1, $t2, . + 4 + (-0x3A << 2)
label_43f828:
    if (ctx->pc == 0x43F828u) {
        ctx->pc = 0x43F828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F824u;
        // 0x43f828: 0x26310040  addiu       $s1, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43F82Cu;
        goto label_43f82c;
    }
    ctx->pc = 0x43F824u;
    {
        const bool branch_taken_0x43f824 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 10));
        ctx->pc = 0x43F828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F824u;
        // 0x43f828: 0x26310040  addiu       $s1, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43f824) {
            ctx->pc = 0x43F740u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_43f740;
        }
    }
    ctx->pc = 0x43F82Cu;
label_43f82c:
    // 0x43f82c: 0x0  nop
    ctx->pc = 0x43f82cu;
    // NOP
label_43f830:
    // 0x43f830: 0x8f82be20  lw          $v0, -0x41E0($gp)
    ctx->pc = 0x43f830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
label_43f834:
    // 0x43f834: 0x7c4b0000  sq          $t3, 0x0($v0)
    ctx->pc = 0x43f834u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 11));
label_43f838:
    // 0x43f838: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x43f838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_43f83c:
    // 0x43f83c: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x43f83cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
label_43f840:
    // 0x43f840: 0x1600ff9b  bnez        $s0, . + 4 + (-0x65 << 2)
label_43f844:
    if (ctx->pc == 0x43F844u) {
        ctx->pc = 0x43F844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F840u;
        // 0x43f844: 0x79cb0000  lq          $t3, 0x0($t6) (Delay Slot)
        SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 14), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43F848u;
        goto label_43f848;
    }
    ctx->pc = 0x43F840u;
    {
        const bool branch_taken_0x43f840 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x43F844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F840u;
        // 0x43f844: 0x79cb0000  lq          $t3, 0x0($t6) (Delay Slot)
        SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 14), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43f840) {
            ctx->pc = 0x43F6B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_43f6b0;
        }
    }
    ctx->pc = 0x43F848u;
label_43f848:
    // 0x43f848: 0xc10f954  jal         func_43E550
label_43f84c:
    if (ctx->pc == 0x43F84Cu) {
        ctx->pc = 0x43F850u;
        goto label_43f850;
    }
    ctx->pc = 0x43F848u;
    SET_GPR_U32(ctx, 31, 0x43F850u);
    ctx->pc = 0x43E550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43E550u, 0x43F848u, 0x43F850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43F850u;
label_43f850:
    // 0x43f850: 0x1260000d  beqz        $s3, . + 4 + (0xD << 2)
label_43f854:
    if (ctx->pc == 0x43F854u) {
        ctx->pc = 0x43F854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F850u;
        // 0x43f854: 0x8f90aeec  lw          $s0, -0x5114($gp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946540)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43F858u;
        goto label_43f858;
    }
    ctx->pc = 0x43F850u;
    {
        const bool branch_taken_0x43f850 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x43F854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F850u;
        // 0x43f854: 0x8f90aeec  lw          $s0, -0x5114($gp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946540)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43f850) {
            ctx->pc = 0x43F888u;
            goto label_43f888;
        }
    }
    ctx->pc = 0x43F858u;
label_43f858:
    // 0x43f858: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x43f858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_43f85c:
    // 0x43f85c: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x43f85cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_43f860:
    // 0x43f860: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x43f860u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_43f864:
    // 0x43f864: 0x213182b  sltu        $v1, $s0, $s3
    ctx->pc = 0x43f864u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_43f868:
    // 0x43f868: 0x8e880008  lw          $t0, 0x8($s4)
    ctx->pc = 0x43f868u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_43f86c:
    // 0x43f86c: 0x263800a  movz        $s0, $s3, $v1
    ctx->pc = 0x43f86cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 19));
label_43f870:
    // 0x43f870: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x43f870u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_43f874:
    // 0x43f874: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x43f874u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_43f878:
    // 0x43f878: 0x40f809  jalr        $v0
label_43f87c:
    if (ctx->pc == 0x43F87Cu) {
        ctx->pc = 0x43F87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F878u;
        // 0x43f87c: 0x2e0482d  daddu       $t1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43F880u;
        goto label_43f880;
    }
    ctx->pc = 0x43F878u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x43F880u);
        ctx->pc = 0x43F87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F878u;
        // 0x43f87c: 0x2e0482d  daddu       $t1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43F878u, 0x43F880u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x43F880u;
label_43f880:
    // 0x43f880: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_43f884:
    if (ctx->pc == 0x43F884u) {
        ctx->pc = 0x43F888u;
        goto label_43f888;
    }
    ctx->pc = 0x43F880u;
    {
        const bool branch_taken_0x43f880 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x43f880) {
            ctx->pc = 0x43F88Cu;
            goto label_43f88c;
        }
    }
    ctx->pc = 0x43F888u;
label_43f888:
    // 0x43f888: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x43f888u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_43f88c:
    // 0x43f88c: 0x1600ff78  bnez        $s0, . + 4 + (-0x88 << 2)
label_43f890:
    if (ctx->pc == 0x43F890u) {
        ctx->pc = 0x43F890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F88Cu;
        // 0x43f890: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43F894u;
        goto label_43f894;
    }
    ctx->pc = 0x43F88Cu;
    {
        const bool branch_taken_0x43f88c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x43F890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F88Cu;
        // 0x43f890: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43f88c) {
            ctx->pc = 0x43F670u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_43f670;
        }
    }
    ctx->pc = 0x43F894u;
label_43f894:
    // 0x43f894: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x43f894u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_43f898:
    // 0x43f898: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x43f898u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_43f89c:
    // 0x43f89c: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x43f89cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_43f8a0:
    // 0x43f8a0: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x43f8a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_43f8a4:
    // 0x43f8a4: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x43f8a4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_43f8a8:
    // 0x43f8a8: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x43f8a8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_43f8ac:
    // 0x43f8ac: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x43f8acu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_43f8b0:
    // 0x43f8b0: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x43f8b0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_43f8b4:
    // 0x43f8b4: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x43f8b4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_43f8b8:
    // 0x43f8b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x43f8b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_43f8bc:
    // 0x43f8bc: 0x3e00008  jr          $ra
label_43f8c0:
    if (ctx->pc == 0x43F8C0u) {
        ctx->pc = 0x43F8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F8BCu;
        // 0x43f8c0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43F8C4u;
        goto label_43f8c4;
    }
    ctx->pc = 0x43F8BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43F8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F8BCu;
        // 0x43f8c0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43F8BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43F8C4u;
label_43f8c4:
    // 0x43f8c4: 0x0  nop
    ctx->pc = 0x43f8c4u;
    // NOP
label_43f8c8:
    // 0x43f8c8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x43f8c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_43f8cc:
    // 0x43f8cc: 0x24e3fffe  addiu       $v1, $a3, -0x2
    ctx->pc = 0x43f8ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967294));
label_43f8d0:
    // 0x43f8d0: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x43f8d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_43f8d4:
    // 0x43f8d4: 0x2ce70003  sltiu       $a3, $a3, 0x3
    ctx->pc = 0x43f8d4u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_43f8d8:
    // 0x43f8d8: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x43f8d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_43f8dc:
    // 0x43f8dc: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x43f8dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_43f8e0:
    // 0x43f8e0: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x43f8e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_43f8e4:
    // 0x43f8e4: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x43f8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_43f8e8:
    // 0x43f8e8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x43f8e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_43f8ec:
    // 0x43f8ec: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x43f8ecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_43f8f0:
    // 0x43f8f0: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x43f8f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_43f8f4:
    // 0x43f8f4: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x43f8f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_43f8f8:
    // 0x43f8f8: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x43f8f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
label_43f8fc:
    // 0x43f8fc: 0x67980a  movz        $s3, $v1, $a3
    ctx->pc = 0x43f8fcu;
    if (GPR_U64(ctx, 7) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 3));
label_43f900:
    // 0x43f900: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x43f900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
label_43f904:
    // 0x43f904: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x43f904u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_43f908:
    // 0x43f908: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x43f908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_43f90c:
    // 0x43f90c: 0x2457d620  addiu       $s7, $v0, -0x29E0
    ctx->pc = 0x43f90cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956576));
label_43f910:
    // 0x43f910: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x43f910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_43f914:
    // 0x43f914: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x43f914u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_43f918:
    // 0x43f918: 0x10000071  b           . + 4 + (0x71 << 2)
label_43f91c:
    if (ctx->pc == 0x43F91Cu) {
        ctx->pc = 0x43F91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F918u;
        // 0x43f91c: 0x3c16005e  lui         $s6, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43F920u;
        goto label_43f920;
    }
    ctx->pc = 0x43F918u;
    {
        const bool branch_taken_0x43f918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43F91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F918u;
        // 0x43f91c: 0x3c16005e  lui         $s6, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43f918) {
            ctx->pc = 0x43FAE0u;
            goto label_43fae0;
        }
    }
    ctx->pc = 0x43F920u;
label_43f920:
    // 0x43f920: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x43f920u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
label_43f924:
    // 0x43f924: 0x7ae80000  lq          $t0, 0x0($s7)
    ctx->pc = 0x43f924u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 23), 0)));
label_43f928:
    // 0x43f928: 0x2709823  subu        $s3, $s3, $s0
    ctx->pc = 0x43f928u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_43f92c:
    // 0x43f92c: 0x24180010  addiu       $t8, $zero, 0x10
    ctx->pc = 0x43f92cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_43f930:
    // 0x43f930: 0x240f000c  addiu       $t7, $zero, 0xC
    ctx->pc = 0x43f930u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_43f934:
    // 0x43f934: 0x3c0e1000  lui         $t6, 0x1000
    ctx->pc = 0x43f934u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)4096 << 16));
label_43f938:
    // 0x43f938: 0x3c0d0400  lui         $t5, 0x400
    ctx->pc = 0x43f938u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)1024 << 16));
label_43f93c:
    // 0x43f93c: 0x3c0c0100  lui         $t4, 0x100
    ctx->pc = 0x43f93cu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)256 << 16));
label_43f940:
    // 0x43f940: 0x358c0404  ori         $t4, $t4, 0x404
    ctx->pc = 0x43f940u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)1028);
label_43f944:
    // 0x43f944: 0xc603c  dsll32      $t4, $t4, 0
    ctx->pc = 0x43f944u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << (32 + 0));
label_43f948:
    // 0x43f948: 0x354a8000  ori         $t2, $t2, 0x8000
    ctx->pc = 0x43f948u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)32768);
label_43f94c:
    // 0x43f94c: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x43f94cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
label_43f950:
    // 0x43f950: 0x26cbd580  addiu       $t3, $s6, -0x2A80
    ctx->pc = 0x43f950u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 22), 4294956416));
label_43f954:
    // 0x43f954: 0x0  nop
    ctx->pc = 0x43f954u;
    // NOP
label_43f958:
    // 0x43f958: 0x2e020011  sltiu       $v0, $s0, 0x11
    ctx->pc = 0x43f958u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
label_43f95c:
    // 0x43f95c: 0x300302d  daddu       $a2, $t8, $zero
    ctx->pc = 0x43f95cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
label_43f960:
    // 0x43f960: 0x202300b  movn        $a2, $s0, $v0
    ctx->pc = 0x43f960u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 16));
label_43f964:
    // 0x43f964: 0xcf2018  mult        $a0, $a2, $t7
    ctx->pc = 0x43f964u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_43f968:
    // 0x43f968: 0xcd1825  or          $v1, $a2, $t5
    ctx->pc = 0x43f968u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 13));
label_43f96c:
    // 0x43f96c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x43f96cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_43f970:
    // 0x43f970: 0x2068023  subu        $s0, $s0, $a2
    ctx->pc = 0x43f970u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
label_43f974:
    // 0x43f974: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x43f974u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_43f978:
    // 0x43f978: 0x6c2825  or          $a1, $v1, $t4
    ctx->pc = 0x43f978u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 12));
label_43f97c:
    // 0x43f97c: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x43f97cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
label_43f980:
    // 0x43f980: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x43f980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_43f984:
    // 0x43f984: 0x64420002  daddiu      $v0, $v0, 0x2
    ctx->pc = 0x43f984u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)2);
label_43f988:
    // 0x43f988: 0x4e1825  or          $v1, $v0, $t6
    ctx->pc = 0x43f988u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 14));
label_43f98c:
    // 0x43f98c: 0x70a31b89  pcpyld      $v1, $a1, $v1
    ctx->pc = 0x43f98cu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 5), GPR_VEC(ctx, 3)));
label_43f990:
    // 0x43f990: 0x8f82be20  lw          $v0, -0x41E0($gp)
    ctx->pc = 0x43f990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
label_43f994:
    // 0x43f994: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x43f994u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_43f998:
    // 0x43f998: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x43f998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_43f99c:
    // 0x43f99c: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x43f99cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
label_43f9a0:
    // 0x43f9a0: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x43f9a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
label_43f9a4:
    // 0x43f9a4: 0x8a2025  or          $a0, $a0, $t2
    ctx->pc = 0x43f9a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 10));
label_43f9a8:
    // 0x43f9a8: 0x3c03c000  lui         $v1, 0xC000
    ctx->pc = 0x43f9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49152 << 16));
label_43f9ac:
    // 0x43f9ac: 0x3463c000  ori         $v1, $v1, 0xC000
    ctx->pc = 0x43f9acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49152);
label_43f9b0:
    // 0x43f9b0: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x43f9b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_43f9b4:
    // 0x43f9b4: 0x34632000  ori         $v1, $v1, 0x2000
    ctx->pc = 0x43f9b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
label_43f9b8:
    // 0x43f9b8: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x43f9b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_43f9bc:
    // 0x43f9bc: 0x4283c  dsll32      $a1, $a0, 0
    ctx->pc = 0x43f9bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
label_43f9c0:
    // 0x43f9c0: 0x70a31b89  pcpyld      $v1, $a1, $v1
    ctx->pc = 0x43f9c0u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 5), GPR_VEC(ctx, 3)));
label_43f9c4:
    // 0x43f9c4: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x43f9c4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_43f9c8:
    // 0x43f9c8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x43f9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_43f9cc:
    // 0x43f9cc: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x43f9ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_43f9d0:
    // 0x43f9d0: 0x10c9003b  beq         $a2, $t1, . + 4 + (0x3B << 2)
label_43f9d4:
    if (ctx->pc == 0x43F9D4u) {
        ctx->pc = 0x43F9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F9D0u;
        // 0x43f9d4: 0xaf82be20  sw          $v0, -0x41E0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43F9D8u;
        goto label_43f9d8;
    }
    ctx->pc = 0x43F9D0u;
    {
        const bool branch_taken_0x43f9d0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 9));
        ctx->pc = 0x43F9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F9D0u;
        // 0x43f9d4: 0xaf82be20  sw          $v0, -0x41E0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43f9d0) {
            ctx->pc = 0x43FAC0u;
            goto label_43fac0;
        }
    }
    ctx->pc = 0x43F9D8u;
label_43f9d8:
    // 0x43f9d8: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x43f9d8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
label_43f9dc:
    // 0x43f9dc: 0x26450080  addiu       $a1, $s2, 0x80
    ctx->pc = 0x43f9dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
label_43f9e0:
    // 0x43f9e0: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x43f9e0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
label_43f9e4:
    // 0x43f9e4: 0x0  nop
    ctx->pc = 0x43f9e4u;
    // NOP
label_43f9e8:
    // 0x43f9e8: 0x8f84be20  lw          $a0, -0x41E0($gp)
    ctx->pc = 0x43f9e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
label_43f9ec:
    // 0x43f9ec: 0x7a220000  lq          $v0, 0x0($s1)
    ctx->pc = 0x43f9ecu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_43f9f0:
    // 0x43f9f0: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x43f9f0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
label_43f9f4:
    // 0x43f9f4: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x43f9f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_43f9f8:
    // 0x43f9f8: 0xaf84be20  sw          $a0, -0x41E0($gp)
    ctx->pc = 0x43f9f8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 4));
label_43f9fc:
    // 0x43f9fc: 0x7a220010  lq          $v0, 0x10($s1)
    ctx->pc = 0x43f9fcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 16)));
label_43fa00:
    // 0x43fa00: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x43fa00u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
label_43fa04:
    // 0x43fa04: 0x24830010  addiu       $v1, $a0, 0x10
    ctx->pc = 0x43fa04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_43fa08:
    // 0x43fa08: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x43fa08u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_43fa0c:
    // 0x43fa0c: 0x7a220020  lq          $v0, 0x20($s1)
    ctx->pc = 0x43fa0cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 32)));
label_43fa10:
    // 0x43fa10: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x43fa10u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
label_43fa14:
    // 0x43fa14: 0x24830020  addiu       $v1, $a0, 0x20
    ctx->pc = 0x43fa14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
label_43fa18:
    // 0x43fa18: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x43fa18u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_43fa1c:
    // 0x43fa1c: 0x7a220030  lq          $v0, 0x30($s1)
    ctx->pc = 0x43fa1cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 48)));
label_43fa20:
    // 0x43fa20: 0x7c820020  sq          $v0, 0x20($a0)
    ctx->pc = 0x43fa20u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 2));
label_43fa24:
    // 0x43fa24: 0x24830030  addiu       $v1, $a0, 0x30
    ctx->pc = 0x43fa24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
label_43fa28:
    // 0x43fa28: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x43fa28u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_43fa2c:
    // 0x43fa2c: 0x78a2ffc0  lq          $v0, -0x40($a1)
    ctx->pc = 0x43fa2cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 4294967232)));
label_43fa30:
    // 0x43fa30: 0x7c820030  sq          $v0, 0x30($a0)
    ctx->pc = 0x43fa30u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 2));
label_43fa34:
    // 0x43fa34: 0x24830040  addiu       $v1, $a0, 0x40
    ctx->pc = 0x43fa34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
label_43fa38:
    // 0x43fa38: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x43fa38u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_43fa3c:
    // 0x43fa3c: 0x78a2ffd0  lq          $v0, -0x30($a1)
    ctx->pc = 0x43fa3cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 4294967248)));
label_43fa40:
    // 0x43fa40: 0x7c820040  sq          $v0, 0x40($a0)
    ctx->pc = 0x43fa40u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 64), GPR_VEC(ctx, 2));
label_43fa44:
    // 0x43fa44: 0x24830050  addiu       $v1, $a0, 0x50
    ctx->pc = 0x43fa44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
label_43fa48:
    // 0x43fa48: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x43fa48u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_43fa4c:
    // 0x43fa4c: 0x78a2ffe0  lq          $v0, -0x20($a1)
    ctx->pc = 0x43fa4cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 4294967264)));
label_43fa50:
    // 0x43fa50: 0x7c820050  sq          $v0, 0x50($a0)
    ctx->pc = 0x43fa50u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 80), GPR_VEC(ctx, 2));
label_43fa54:
    // 0x43fa54: 0x24830060  addiu       $v1, $a0, 0x60
    ctx->pc = 0x43fa54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
label_43fa58:
    // 0x43fa58: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x43fa58u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_43fa5c:
    // 0x43fa5c: 0x78a2fff0  lq          $v0, -0x10($a1)
    ctx->pc = 0x43fa5cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 4294967280)));
label_43fa60:
    // 0x43fa60: 0x7c820060  sq          $v0, 0x60($a0)
    ctx->pc = 0x43fa60u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 96), GPR_VEC(ctx, 2));
label_43fa64:
    // 0x43fa64: 0x24830070  addiu       $v1, $a0, 0x70
    ctx->pc = 0x43fa64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
label_43fa68:
    // 0x43fa68: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x43fa68u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_43fa6c:
    // 0x43fa6c: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x43fa6cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_43fa70:
    // 0x43fa70: 0x7c820070  sq          $v0, 0x70($a0)
    ctx->pc = 0x43fa70u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 112), GPR_VEC(ctx, 2));
label_43fa74:
    // 0x43fa74: 0x24830080  addiu       $v1, $a0, 0x80
    ctx->pc = 0x43fa74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
label_43fa78:
    // 0x43fa78: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x43fa78u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_43fa7c:
    // 0x43fa7c: 0x78a20010  lq          $v0, 0x10($a1)
    ctx->pc = 0x43fa7cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 16)));
label_43fa80:
    // 0x43fa80: 0x7c820080  sq          $v0, 0x80($a0)
    ctx->pc = 0x43fa80u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 128), GPR_VEC(ctx, 2));
label_43fa84:
    // 0x43fa84: 0x24830090  addiu       $v1, $a0, 0x90
    ctx->pc = 0x43fa84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 144));
label_43fa88:
    // 0x43fa88: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x43fa88u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_43fa8c:
    // 0x43fa8c: 0x78a20020  lq          $v0, 0x20($a1)
    ctx->pc = 0x43fa8cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 32)));
label_43fa90:
    // 0x43fa90: 0x7c820090  sq          $v0, 0x90($a0)
    ctx->pc = 0x43fa90u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 144), GPR_VEC(ctx, 2));
label_43fa94:
    // 0x43fa94: 0x248300a0  addiu       $v1, $a0, 0xA0
    ctx->pc = 0x43fa94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
label_43fa98:
    // 0x43fa98: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x43fa98u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_43fa9c:
    // 0x43fa9c: 0x78a20030  lq          $v0, 0x30($a1)
    ctx->pc = 0x43fa9cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 48)));
label_43faa0:
    // 0x43faa0: 0x7c8200a0  sq          $v0, 0xA0($a0)
    ctx->pc = 0x43faa0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 160), GPR_VEC(ctx, 2));
label_43faa4:
    // 0x43faa4: 0x248400b0  addiu       $a0, $a0, 0xB0
    ctx->pc = 0x43faa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 176));
label_43faa8:
    // 0x43faa8: 0xaf84be20  sw          $a0, -0x41E0($gp)
    ctx->pc = 0x43faa8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 4));
label_43faac:
    // 0x43faac: 0x24a50040  addiu       $a1, $a1, 0x40
    ctx->pc = 0x43faacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
label_43fab0:
    // 0x43fab0: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x43fab0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_43fab4:
    // 0x43fab4: 0x14c7ffcc  bne         $a2, $a3, . + 4 + (-0x34 << 2)
label_43fab8:
    if (ctx->pc == 0x43FAB8u) {
        ctx->pc = 0x43FAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43FAB4u;
        // 0x43fab8: 0x26520040  addiu       $s2, $s2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43FABCu;
        goto label_43fabc;
    }
    ctx->pc = 0x43FAB4u;
    {
        const bool branch_taken_0x43fab4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 7));
        ctx->pc = 0x43FAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43FAB4u;
        // 0x43fab8: 0x26520040  addiu       $s2, $s2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43fab4) {
            ctx->pc = 0x43F9E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_43f9e8;
        }
    }
    ctx->pc = 0x43FABCu;
label_43fabc:
    // 0x43fabc: 0x0  nop
    ctx->pc = 0x43fabcu;
    // NOP
label_43fac0:
    // 0x43fac0: 0x8f82be20  lw          $v0, -0x41E0($gp)
    ctx->pc = 0x43fac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
label_43fac4:
    // 0x43fac4: 0x7c480000  sq          $t0, 0x0($v0)
    ctx->pc = 0x43fac4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 8));
label_43fac8:
    // 0x43fac8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x43fac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_43facc:
    // 0x43facc: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x43faccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
label_43fad0:
    // 0x43fad0: 0x1600ffa1  bnez        $s0, . + 4 + (-0x5F << 2)
label_43fad4:
    if (ctx->pc == 0x43FAD4u) {
        ctx->pc = 0x43FAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43FAD0u;
        // 0x43fad4: 0x79680000  lq          $t0, 0x0($t3) (Delay Slot)
        SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 11), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43FAD8u;
        goto label_43fad8;
    }
    ctx->pc = 0x43FAD0u;
    {
        const bool branch_taken_0x43fad0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x43FAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43FAD0u;
        // 0x43fad4: 0x79680000  lq          $t0, 0x0($t3) (Delay Slot)
        SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 11), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43fad0) {
            ctx->pc = 0x43F958u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_43f958;
        }
    }
    ctx->pc = 0x43FAD8u;
label_43fad8:
    // 0x43fad8: 0xc10f954  jal         func_43E550
label_43fadc:
    if (ctx->pc == 0x43FADCu) {
        ctx->pc = 0x43FAE0u;
        goto label_43fae0;
    }
    ctx->pc = 0x43FAD8u;
    SET_GPR_U32(ctx, 31, 0x43FAE0u);
    ctx->pc = 0x43E550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43E550u, 0x43FAD8u, 0x43FAE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43FAE0u;
label_43fae0:
    // 0x43fae0: 0x1260000d  beqz        $s3, . + 4 + (0xD << 2)
label_43fae4:
    if (ctx->pc == 0x43FAE4u) {
        ctx->pc = 0x43FAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43FAE0u;
        // 0x43fae4: 0x8f90aeec  lw          $s0, -0x5114($gp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946540)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43FAE8u;
        goto label_43fae8;
    }
    ctx->pc = 0x43FAE0u;
    {
        const bool branch_taken_0x43fae0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x43FAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43FAE0u;
        // 0x43fae4: 0x8f90aeec  lw          $s0, -0x5114($gp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946540)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43fae0) {
            ctx->pc = 0x43FB18u;
            goto label_43fb18;
        }
    }
    ctx->pc = 0x43FAE8u;
label_43fae8:
    // 0x43fae8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x43fae8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_43faec:
    // 0x43faec: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x43faecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_43faf0:
    // 0x43faf0: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x43faf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_43faf4:
    // 0x43faf4: 0x213182b  sltu        $v1, $s0, $s3
    ctx->pc = 0x43faf4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_43faf8:
    // 0x43faf8: 0x8e880008  lw          $t0, 0x8($s4)
    ctx->pc = 0x43faf8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_43fafc:
    // 0x43fafc: 0x263800a  movz        $s0, $s3, $v1
    ctx->pc = 0x43fafcu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 19));
label_43fb00:
    // 0x43fb00: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x43fb00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_43fb04:
    // 0x43fb04: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x43fb04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_43fb08:
    // 0x43fb08: 0x40f809  jalr        $v0
label_43fb0c:
    if (ctx->pc == 0x43FB0Cu) {
        ctx->pc = 0x43FB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43FB08u;
        // 0x43fb0c: 0x2a0482d  daddu       $t1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43FB10u;
        goto label_43fb10;
    }
    ctx->pc = 0x43FB08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x43FB10u);
        ctx->pc = 0x43FB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43FB08u;
        // 0x43fb0c: 0x2a0482d  daddu       $t1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43FB08u, 0x43FB10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x43FB10u;
label_43fb10:
    // 0x43fb10: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_43fb14:
    if (ctx->pc == 0x43FB14u) {
        ctx->pc = 0x43FB18u;
        goto label_43fb18;
    }
    ctx->pc = 0x43FB10u;
    {
        const bool branch_taken_0x43fb10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x43fb10) {
            ctx->pc = 0x43FB1Cu;
            goto label_43fb1c;
        }
    }
    ctx->pc = 0x43FB18u;
label_43fb18:
    // 0x43fb18: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x43fb18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_43fb1c:
    // 0x43fb1c: 0x1600ff80  bnez        $s0, . + 4 + (-0x80 << 2)
label_43fb20:
    if (ctx->pc == 0x43FB20u) {
        ctx->pc = 0x43FB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43FB1Cu;
        // 0x43fb20: 0x3c0a7c00  lui         $t2, 0x7C00 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)31744 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43FB24u;
        goto label_43fb24;
    }
    ctx->pc = 0x43FB1Cu;
    {
        const bool branch_taken_0x43fb1c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x43FB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43FB1Cu;
        // 0x43fb20: 0x3c0a7c00  lui         $t2, 0x7C00 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)31744 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43fb1c) {
            ctx->pc = 0x43F920u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_43f920;
        }
    }
    ctx->pc = 0x43FB24u;
label_43fb24:
    // 0x43fb24: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x43fb24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_43fb28:
    // 0x43fb28: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x43fb28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_43fb2c:
    // 0x43fb2c: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x43fb2cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_43fb30:
    // 0x43fb30: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x43fb30u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_43fb34:
    // 0x43fb34: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x43fb34u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_43fb38:
    // 0x43fb38: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x43fb38u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_43fb3c:
    // 0x43fb3c: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x43fb3cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_43fb40:
    // 0x43fb40: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x43fb40u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_43fb44:
    // 0x43fb44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x43fb44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_43fb48:
    // 0x43fb48: 0x3e00008  jr          $ra
label_43fb4c:
    if (ctx->pc == 0x43FB4Cu) {
        ctx->pc = 0x43FB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43FB48u;
        // 0x43fb4c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43FB50u;
        goto label_43fb50;
    }
    ctx->pc = 0x43FB48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43FB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43FB48u;
        // 0x43fb4c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43FB48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43FB50u;
label_43fb50:
    // 0x43fb50: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x43fb50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_43fb54:
    // 0x43fb54: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x43fb54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_43fb58:
    // 0x43fb58: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x43fb58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_43fb5c:
    // 0x43fb5c: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x43fb5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_43fb60:
    // 0x43fb60: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x43fb60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_43fb64:
    // 0x43fb64: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x43fb64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_43fb68:
    // 0x43fb68: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x43fb68u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_43fb6c:
    // 0x43fb6c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x43fb6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_43fb70:
    // 0x43fb70: 0x89842  srl         $s3, $t0, 1
    ctx->pc = 0x43fb70u;
    SET_GPR_S32(ctx, 19, (int32_t)SRL32(GPR_U32(ctx, 8), 1));
label_43fb74:
    // 0x43fb74: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x43fb74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
label_43fb78:
    // 0x43fb78: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x43fb78u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_43fb7c:
    // 0x43fb7c: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x43fb7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
label_43fb80:
    // 0x43fb80: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x43fb80u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_43fb84:
    // 0x43fb84: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x43fb84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
label_43fb88:
    // 0x43fb88: 0x3c17005e  lui         $s7, 0x5E
    ctx->pc = 0x43fb88u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)94 << 16));
label_43fb8c:
    // 0x43fb8c: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x43fb8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_43fb90:
    // 0x43fb90: 0x245ed620  addiu       $fp, $v0, -0x29E0
    ctx->pc = 0x43fb90u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956576));
label_43fb94:
    // 0x43fb94: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x43fb94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_43fb98:
    // 0x43fb98: 0x100000bb  b           . + 4 + (0xBB << 2)
label_43fb9c:
    if (ctx->pc == 0x43FB9Cu) {
        ctx->pc = 0x43FB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43FB98u;
        // 0x43fb9c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43FBA0u;
        goto label_43fba0;
    }
    ctx->pc = 0x43FB98u;
    {
        const bool branch_taken_0x43fb98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43FB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43FB98u;
        // 0x43fb9c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43fb98) {
            ctx->pc = 0x43FE88u;
            goto label_43fe88;
        }
    }
    ctx->pc = 0x43FBA0u;
label_43fba0:
    // 0x43fba0: 0x3c0cffff  lui         $t4, 0xFFFF
    ctx->pc = 0x43fba0u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)65535 << 16));
label_43fba4:
    // 0x43fba4: 0x7bcb0000  lq          $t3, 0x0($fp)
    ctx->pc = 0x43fba4u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 30), 0)));
label_43fba8:
    // 0x43fba8: 0x2709823  subu        $s3, $s3, $s0
    ctx->pc = 0x43fba8u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_43fbac:
    // 0x43fbac: 0x24150010  addiu       $s5, $zero, 0x10
    ctx->pc = 0x43fbacu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_43fbb0:
    // 0x43fbb0: 0x3c191000  lui         $t9, 0x1000
    ctx->pc = 0x43fbb0u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)4096 << 16));
label_43fbb4:
    // 0x43fbb4: 0x3c180400  lui         $t8, 0x400
    ctx->pc = 0x43fbb4u;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)1024 << 16));
label_43fbb8:
    // 0x43fbb8: 0x3c0f0100  lui         $t7, 0x100
    ctx->pc = 0x43fbb8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)256 << 16));
label_43fbbc:
    // 0x43fbbc: 0x35ef0404  ori         $t7, $t7, 0x404
    ctx->pc = 0x43fbbcu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)1028);
label_43fbc0:
    // 0x43fbc0: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x43fbc0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
label_43fbc4:
    // 0x43fbc4: 0x35ad8000  ori         $t5, $t5, 0x8000
    ctx->pc = 0x43fbc4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)32768);
label_43fbc8:
    // 0x43fbc8: 0x358cffff  ori         $t4, $t4, 0xFFFF
    ctx->pc = 0x43fbc8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)65535);
label_43fbcc:
    // 0x43fbcc: 0x26eed580  addiu       $t6, $s7, -0x2A80
    ctx->pc = 0x43fbccu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 23), 4294956416));
label_43fbd0:
    // 0x43fbd0: 0x2e030011  sltiu       $v1, $s0, 0x11
    ctx->pc = 0x43fbd0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
label_43fbd4:
    // 0x43fbd4: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x43fbd4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_43fbd8:
    // 0x43fbd8: 0x203400b  movn        $t0, $s0, $v1
    ctx->pc = 0x43fbd8u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 16));
label_43fbdc:
    // 0x43fbdc: 0x810c0  sll         $v0, $t0, 3
    ctx->pc = 0x43fbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
label_43fbe0:
    // 0x43fbe0: 0x1181825  or          $v1, $t0, $t8
    ctx->pc = 0x43fbe0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) | GPR_U64(ctx, 24));
label_43fbe4:
    // 0x43fbe4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x43fbe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_43fbe8:
    // 0x43fbe8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x43fbe8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_43fbec:
    // 0x43fbec: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x43fbecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_43fbf0:
    // 0x43fbf0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x43fbf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_43fbf4:
    // 0x43fbf4: 0x64420002  daddiu      $v0, $v0, 0x2
    ctx->pc = 0x43fbf4u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)2);
label_43fbf8:
    // 0x43fbf8: 0x6f2025  or          $a0, $v1, $t7
    ctx->pc = 0x43fbf8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 15));
label_43fbfc:
    // 0x43fbfc: 0x591825  or          $v1, $v0, $t9
    ctx->pc = 0x43fbfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 25));
label_43fc00:
    // 0x43fc00: 0x2088023  subu        $s0, $s0, $t0
    ctx->pc = 0x43fc00u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 8)));
label_43fc04:
    // 0x43fc04: 0x70831389  pcpyld      $v0, $a0, $v1
    ctx->pc = 0x43fc04u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
label_43fc08:
    // 0x43fc08: 0x8f86be20  lw          $a2, -0x41E0($gp)
    ctx->pc = 0x43fc08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
label_43fc0c:
    // 0x43fc0c: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x43fc0cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
label_43fc10:
    // 0x43fc10: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x43fc10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
label_43fc14:
    // 0x43fc14: 0xaf86be20  sw          $a2, -0x41E0($gp)
    ctx->pc = 0x43fc14u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 6));
label_43fc18:
    // 0x43fc18: 0x814c0  sll         $v0, $t0, 19
    ctx->pc = 0x43fc18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 19));
label_43fc1c:
    // 0x43fc1c: 0x4d1025  or          $v0, $v0, $t5
    ctx->pc = 0x43fc1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 13));
label_43fc20:
    // 0x43fc20: 0x3c03c000  lui         $v1, 0xC000
    ctx->pc = 0x43fc20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49152 << 16));
label_43fc24:
    // 0x43fc24: 0x3463c000  ori         $v1, $v1, 0xC000
    ctx->pc = 0x43fc24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49152);
label_43fc28:
    // 0x43fc28: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x43fc28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_43fc2c:
    // 0x43fc2c: 0x34632000  ori         $v1, $v1, 0x2000
    ctx->pc = 0x43fc2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
label_43fc30:
    // 0x43fc30: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x43fc30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_43fc34:
    // 0x43fc34: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x43fc34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
label_43fc38:
    // 0x43fc38: 0x70831389  pcpyld      $v0, $a0, $v1
    ctx->pc = 0x43fc38u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
label_43fc3c:
    // 0x43fc3c: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x43fc3cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
label_43fc40:
    // 0x43fc40: 0x24c20010  addiu       $v0, $a2, 0x10
    ctx->pc = 0x43fc40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
label_43fc44:
    // 0x43fc44: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x43fc44u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
label_43fc48:
    // 0x43fc48: 0x110c0087  beq         $t0, $t4, . + 4 + (0x87 << 2)
label_43fc4c:
    if (ctx->pc == 0x43FC4Cu) {
        ctx->pc = 0x43FC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43FC48u;
        // 0x43fc4c: 0xaf82be20  sw          $v0, -0x41E0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43FC50u;
        goto label_43fc50;
    }
    ctx->pc = 0x43FC48u;
    {
        const bool branch_taken_0x43fc48 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 12));
        ctx->pc = 0x43FC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43FC48u;
        // 0x43fc4c: 0xaf82be20  sw          $v0, -0x41E0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43fc48) {
            ctx->pc = 0x43FE68u;
            goto label_43fe68;
        }
    }
    ctx->pc = 0x43FC50u;
label_43fc50:
    // 0x43fc50: 0x3c0affff  lui         $t2, 0xFFFF
    ctx->pc = 0x43fc50u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65535 << 16));
label_43fc54:
    // 0x43fc54: 0x81027  nor         $v0, $zero, $t0
    ctx->pc = 0x43fc54u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 8)));
label_43fc58:
    // 0x43fc58: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x43fc58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_43fc5c:
    // 0x43fc5c: 0x354affff  ori         $t2, $t2, 0xFFFF
    ctx->pc = 0x43fc5cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
label_43fc60:
    // 0x43fc60: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
label_43fc64:
    if (ctx->pc == 0x43FC64u) {
        ctx->pc = 0x43FC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43FC60u;
        // 0x43fc64: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43FC68u;
        goto label_43fc68;
    }
    ctx->pc = 0x43FC60u;
    {
        const bool branch_taken_0x43fc60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x43FC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43FC60u;
        // 0x43fc64: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43fc60) {
            ctx->pc = 0x43FD18u;
            goto label_43fd18;
        }
    }
    ctx->pc = 0x43FC68u;
label_43fc68:
    // 0x43fc68: 0x96240000  lhu         $a0, 0x0($s1)
    ctx->pc = 0x43fc68u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_43fc6c:
    // 0x43fc6c: 0x96250002  lhu         $a1, 0x2($s1)
    ctx->pc = 0x43fc6cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_43fc70:
    // 0x43fc70: 0x42180  sll         $a0, $a0, 6
    ctx->pc = 0x43fc70u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
label_43fc74:
    // 0x43fc74: 0x52980  sll         $a1, $a1, 6
    ctx->pc = 0x43fc74u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
label_43fc78:
    // 0x43fc78: 0x2442021  addu        $a0, $s2, $a0
    ctx->pc = 0x43fc78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
label_43fc7c:
    // 0x43fc7c: 0x2452821  addu        $a1, $s2, $a1
    ctx->pc = 0x43fc7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
label_43fc80:
    // 0x43fc80: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x43fc80u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_43fc84:
    // 0x43fc84: 0x7cc20010  sq          $v0, 0x10($a2)
    ctx->pc = 0x43fc84u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), GPR_VEC(ctx, 2));
label_43fc88:
    // 0x43fc88: 0x24c30020  addiu       $v1, $a2, 0x20
    ctx->pc = 0x43fc88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
label_43fc8c:
    // 0x43fc8c: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x43fc8cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_43fc90:
    // 0x43fc90: 0x78820010  lq          $v0, 0x10($a0)
    ctx->pc = 0x43fc90u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 16)));
label_43fc94:
    // 0x43fc94: 0x7cc20020  sq          $v0, 0x20($a2)
    ctx->pc = 0x43fc94u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), GPR_VEC(ctx, 2));
label_43fc98:
    // 0x43fc98: 0x24c30030  addiu       $v1, $a2, 0x30
    ctx->pc = 0x43fc98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
label_43fc9c:
    // 0x43fc9c: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x43fc9cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_43fca0:
    // 0x43fca0: 0x78820020  lq          $v0, 0x20($a0)
    ctx->pc = 0x43fca0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 32)));
label_43fca4:
    // 0x43fca4: 0x7cc20030  sq          $v0, 0x30($a2)
    ctx->pc = 0x43fca4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), GPR_VEC(ctx, 2));
label_43fca8:
    // 0x43fca8: 0x24c30040  addiu       $v1, $a2, 0x40
    ctx->pc = 0x43fca8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
label_43fcac:
    // 0x43fcac: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x43fcacu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_43fcb0:
    // 0x43fcb0: 0x78820030  lq          $v0, 0x30($a0)
    ctx->pc = 0x43fcb0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 48)));
label_43fcb4:
    // 0x43fcb4: 0x7cc20040  sq          $v0, 0x40($a2)
    ctx->pc = 0x43fcb4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 64), GPR_VEC(ctx, 2));
label_43fcb8:
    // 0x43fcb8: 0x24c30050  addiu       $v1, $a2, 0x50
    ctx->pc = 0x43fcb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 80));
label_43fcbc:
    // 0x43fcbc: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x43fcbcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_43fcc0:
    // 0x43fcc0: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x43fcc0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_43fcc4:
    // 0x43fcc4: 0x7cc20050  sq          $v0, 0x50($a2)
    ctx->pc = 0x43fcc4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 80), GPR_VEC(ctx, 2));
label_43fcc8:
    // 0x43fcc8: 0x24c30060  addiu       $v1, $a2, 0x60
    ctx->pc = 0x43fcc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 96));
label_43fccc:
    // 0x43fccc: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x43fcccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_43fcd0:
    // 0x43fcd0: 0x78a20010  lq          $v0, 0x10($a1)
    ctx->pc = 0x43fcd0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 16)));
label_43fcd4:
    // 0x43fcd4: 0x7cc20060  sq          $v0, 0x60($a2)
    ctx->pc = 0x43fcd4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 96), GPR_VEC(ctx, 2));
label_43fcd8:
    // 0x43fcd8: 0x24c30070  addiu       $v1, $a2, 0x70
    ctx->pc = 0x43fcd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 112));
label_43fcdc:
    // 0x43fcdc: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x43fcdcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_43fce0:
    // 0x43fce0: 0x78a20020  lq          $v0, 0x20($a1)
    ctx->pc = 0x43fce0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 32)));
label_43fce4:
    // 0x43fce4: 0x7cc20070  sq          $v0, 0x70($a2)
    ctx->pc = 0x43fce4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 112), GPR_VEC(ctx, 2));
label_43fce8:
    // 0x43fce8: 0x24c30080  addiu       $v1, $a2, 0x80
    ctx->pc = 0x43fce8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
label_43fcec:
    // 0x43fcec: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x43fcecu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_43fcf0:
    // 0x43fcf0: 0x78a20030  lq          $v0, 0x30($a1)
    ctx->pc = 0x43fcf0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 48)));
label_43fcf4:
    // 0x43fcf4: 0x7cc20080  sq          $v0, 0x80($a2)
    ctx->pc = 0x43fcf4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 128), GPR_VEC(ctx, 2));
label_43fcf8:
    // 0x43fcf8: 0x24c30090  addiu       $v1, $a2, 0x90
    ctx->pc = 0x43fcf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 144));
label_43fcfc:
    // 0x43fcfc: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x43fcfcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_43fd00:
    // 0x43fd00: 0x26220004  addiu       $v0, $s1, 0x4
    ctx->pc = 0x43fd00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_43fd04:
    // 0x43fd04: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x43fd04u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_43fd08:
    // 0x43fd08: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x43fd08u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
label_43fd0c:
    // 0x43fd0c: 0x110a0056  beq         $t0, $t2, . + 4 + (0x56 << 2)
label_43fd10:
    if (ctx->pc == 0x43FD10u) {
        ctx->pc = 0x43FD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43FD0Cu;
        // 0x43fd10: 0xe0882d  daddu       $s1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43FD14u;
        goto label_43fd14;
    }
    ctx->pc = 0x43FD0Cu;
    {
        const bool branch_taken_0x43fd0c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 10));
        ctx->pc = 0x43FD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43FD0Cu;
        // 0x43fd10: 0xe0882d  daddu       $s1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43fd0c) {
            ctx->pc = 0x43FE68u;
            goto label_43fe68;
        }
    }
    ctx->pc = 0x43FD14u;
label_43fd14:
    // 0x43fd14: 0x0  nop
    ctx->pc = 0x43fd14u;
    // NOP
label_43fd18:
    // 0x43fd18: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x43fd18u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_43fd1c:
    // 0x43fd1c: 0x0  nop
    ctx->pc = 0x43fd1cu;
    // NOP
label_43fd20:
    // 0x43fd20: 0x95250000  lhu         $a1, 0x0($t1)
    ctx->pc = 0x43fd20u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
label_43fd24:
    // 0x43fd24: 0x94e60002  lhu         $a2, 0x2($a3)
    ctx->pc = 0x43fd24u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
label_43fd28:
    // 0x43fd28: 0x52980  sll         $a1, $a1, 6
    ctx->pc = 0x43fd28u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
label_43fd2c:
    // 0x43fd2c: 0x63180  sll         $a2, $a2, 6
    ctx->pc = 0x43fd2cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
label_43fd30:
    // 0x43fd30: 0x2452821  addu        $a1, $s2, $a1
    ctx->pc = 0x43fd30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
label_43fd34:
    // 0x43fd34: 0x2463021  addu        $a2, $s2, $a2
    ctx->pc = 0x43fd34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
label_43fd38:
    // 0x43fd38: 0x8f84be20  lw          $a0, -0x41E0($gp)
    ctx->pc = 0x43fd38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
label_43fd3c:
    // 0x43fd3c: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x43fd3cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_43fd40:
    // 0x43fd40: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x43fd40u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
label_43fd44:
    // 0x43fd44: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x43fd44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_43fd48:
    // 0x43fd48: 0xaf84be20  sw          $a0, -0x41E0($gp)
    ctx->pc = 0x43fd48u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 4));
label_43fd4c:
    // 0x43fd4c: 0x78a20010  lq          $v0, 0x10($a1)
    ctx->pc = 0x43fd4cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 16)));
label_43fd50:
    // 0x43fd50: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x43fd50u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
label_43fd54:
    // 0x43fd54: 0x24830010  addiu       $v1, $a0, 0x10
    ctx->pc = 0x43fd54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_43fd58:
    // 0x43fd58: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x43fd58u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_43fd5c:
    // 0x43fd5c: 0x78a20020  lq          $v0, 0x20($a1)
    ctx->pc = 0x43fd5cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 32)));
label_43fd60:
    // 0x43fd60: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x43fd60u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
label_43fd64:
    // 0x43fd64: 0x24830020  addiu       $v1, $a0, 0x20
    ctx->pc = 0x43fd64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
label_43fd68:
    // 0x43fd68: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x43fd68u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_43fd6c:
    // 0x43fd6c: 0x78a20030  lq          $v0, 0x30($a1)
    ctx->pc = 0x43fd6cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 48)));
label_43fd70:
    // 0x43fd70: 0x7c820020  sq          $v0, 0x20($a0)
    ctx->pc = 0x43fd70u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 2));
label_43fd74:
    // 0x43fd74: 0x24830030  addiu       $v1, $a0, 0x30
    ctx->pc = 0x43fd74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
label_43fd78:
    // 0x43fd78: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x43fd78u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_43fd7c:
    // 0x43fd7c: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x43fd7cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_43fd80:
    // 0x43fd80: 0x7c820030  sq          $v0, 0x30($a0)
    ctx->pc = 0x43fd80u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 2));
label_43fd84:
    // 0x43fd84: 0x24830040  addiu       $v1, $a0, 0x40
    ctx->pc = 0x43fd84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
label_43fd88:
    // 0x43fd88: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x43fd88u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_43fd8c:
    // 0x43fd8c: 0x78c20010  lq          $v0, 0x10($a2)
    ctx->pc = 0x43fd8cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 16)));
label_43fd90:
    // 0x43fd90: 0x7c820040  sq          $v0, 0x40($a0)
    ctx->pc = 0x43fd90u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 64), GPR_VEC(ctx, 2));
label_43fd94:
    // 0x43fd94: 0x24830050  addiu       $v1, $a0, 0x50
    ctx->pc = 0x43fd94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
label_43fd98:
    // 0x43fd98: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x43fd98u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_43fd9c:
    // 0x43fd9c: 0x78c20020  lq          $v0, 0x20($a2)
    ctx->pc = 0x43fd9cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 32)));
label_43fda0:
    // 0x43fda0: 0x7c820050  sq          $v0, 0x50($a0)
    ctx->pc = 0x43fda0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 80), GPR_VEC(ctx, 2));
label_43fda4:
    // 0x43fda4: 0x24830060  addiu       $v1, $a0, 0x60
    ctx->pc = 0x43fda4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
label_43fda8:
    // 0x43fda8: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x43fda8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_43fdac:
    // 0x43fdac: 0x78c20030  lq          $v0, 0x30($a2)
    ctx->pc = 0x43fdacu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 48)));
label_43fdb0:
    // 0x43fdb0: 0x7c820060  sq          $v0, 0x60($a0)
    ctx->pc = 0x43fdb0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 96), GPR_VEC(ctx, 2));
label_43fdb4:
    // 0x43fdb4: 0x24830070  addiu       $v1, $a0, 0x70
    ctx->pc = 0x43fdb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
label_43fdb8:
    // 0x43fdb8: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x43fdb8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_43fdbc:
    // 0x43fdbc: 0x95250004  lhu         $a1, 0x4($t1)
    ctx->pc = 0x43fdbcu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 4)));
label_43fdc0:
    // 0x43fdc0: 0x94e60006  lhu         $a2, 0x6($a3)
    ctx->pc = 0x43fdc0u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 6)));
label_43fdc4:
    // 0x43fdc4: 0x52980  sll         $a1, $a1, 6
    ctx->pc = 0x43fdc4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
label_43fdc8:
    // 0x43fdc8: 0x2452821  addu        $a1, $s2, $a1
    ctx->pc = 0x43fdc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
label_43fdcc:
    // 0x43fdcc: 0x63180  sll         $a2, $a2, 6
    ctx->pc = 0x43fdccu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
label_43fdd0:
    // 0x43fdd0: 0x2463021  addu        $a2, $s2, $a2
    ctx->pc = 0x43fdd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
label_43fdd4:
    // 0x43fdd4: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x43fdd4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_43fdd8:
    // 0x43fdd8: 0x7c820070  sq          $v0, 0x70($a0)
    ctx->pc = 0x43fdd8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 112), GPR_VEC(ctx, 2));
label_43fddc:
    // 0x43fddc: 0x24830080  addiu       $v1, $a0, 0x80
    ctx->pc = 0x43fddcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
label_43fde0:
    // 0x43fde0: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x43fde0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_43fde4:
    // 0x43fde4: 0x78a20010  lq          $v0, 0x10($a1)
    ctx->pc = 0x43fde4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 16)));
label_43fde8:
    // 0x43fde8: 0x7c820080  sq          $v0, 0x80($a0)
    ctx->pc = 0x43fde8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 128), GPR_VEC(ctx, 2));
label_43fdec:
    // 0x43fdec: 0x24830090  addiu       $v1, $a0, 0x90
    ctx->pc = 0x43fdecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 144));
label_43fdf0:
    // 0x43fdf0: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x43fdf0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_43fdf4:
    // 0x43fdf4: 0x78a20020  lq          $v0, 0x20($a1)
    ctx->pc = 0x43fdf4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 32)));
label_43fdf8:
    // 0x43fdf8: 0x7c820090  sq          $v0, 0x90($a0)
    ctx->pc = 0x43fdf8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 144), GPR_VEC(ctx, 2));
label_43fdfc:
    // 0x43fdfc: 0x248300a0  addiu       $v1, $a0, 0xA0
    ctx->pc = 0x43fdfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
label_43fe00:
    // 0x43fe00: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x43fe00u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_43fe04:
    // 0x43fe04: 0x78a20030  lq          $v0, 0x30($a1)
    ctx->pc = 0x43fe04u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 48)));
label_43fe08:
    // 0x43fe08: 0x7c8200a0  sq          $v0, 0xA0($a0)
    ctx->pc = 0x43fe08u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 160), GPR_VEC(ctx, 2));
label_43fe0c:
    // 0x43fe0c: 0x248300b0  addiu       $v1, $a0, 0xB0
    ctx->pc = 0x43fe0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 176));
label_43fe10:
    // 0x43fe10: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x43fe10u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_43fe14:
    // 0x43fe14: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x43fe14u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_43fe18:
    // 0x43fe18: 0x7c8200b0  sq          $v0, 0xB0($a0)
    ctx->pc = 0x43fe18u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 176), GPR_VEC(ctx, 2));
label_43fe1c:
    // 0x43fe1c: 0x248300c0  addiu       $v1, $a0, 0xC0
    ctx->pc = 0x43fe1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
label_43fe20:
    // 0x43fe20: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x43fe20u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_43fe24:
    // 0x43fe24: 0x78c20010  lq          $v0, 0x10($a2)
    ctx->pc = 0x43fe24u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 16)));
label_43fe28:
    // 0x43fe28: 0x7c8200c0  sq          $v0, 0xC0($a0)
    ctx->pc = 0x43fe28u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 192), GPR_VEC(ctx, 2));
label_43fe2c:
    // 0x43fe2c: 0x248300d0  addiu       $v1, $a0, 0xD0
    ctx->pc = 0x43fe2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 208));
label_43fe30:
    // 0x43fe30: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x43fe30u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_43fe34:
    // 0x43fe34: 0x78c20020  lq          $v0, 0x20($a2)
    ctx->pc = 0x43fe34u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 32)));
label_43fe38:
    // 0x43fe38: 0x7c8200d0  sq          $v0, 0xD0($a0)
    ctx->pc = 0x43fe38u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 208), GPR_VEC(ctx, 2));
label_43fe3c:
    // 0x43fe3c: 0x248300e0  addiu       $v1, $a0, 0xE0
    ctx->pc = 0x43fe3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 224));
label_43fe40:
    // 0x43fe40: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x43fe40u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_43fe44:
    // 0x43fe44: 0x78c20030  lq          $v0, 0x30($a2)
    ctx->pc = 0x43fe44u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 48)));
label_43fe48:
    // 0x43fe48: 0x7c8200e0  sq          $v0, 0xE0($a0)
    ctx->pc = 0x43fe48u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 224), GPR_VEC(ctx, 2));
label_43fe4c:
    // 0x43fe4c: 0x248400f0  addiu       $a0, $a0, 0xF0
    ctx->pc = 0x43fe4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 240));
label_43fe50:
    // 0x43fe50: 0xaf84be20  sw          $a0, -0x41E0($gp)
    ctx->pc = 0x43fe50u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 4));
label_43fe54:
    // 0x43fe54: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x43fe54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
label_43fe58:
    // 0x43fe58: 0x25290008  addiu       $t1, $t1, 0x8
    ctx->pc = 0x43fe58u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
label_43fe5c:
    // 0x43fe5c: 0x2508fffe  addiu       $t0, $t0, -0x2
    ctx->pc = 0x43fe5cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967294));
label_43fe60:
    // 0x43fe60: 0x150affaf  bne         $t0, $t2, . + 4 + (-0x51 << 2)
label_43fe64:
    if (ctx->pc == 0x43FE64u) {
        ctx->pc = 0x43FE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43FE60u;
        // 0x43fe64: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43FE68u;
        goto label_43fe68;
    }
    ctx->pc = 0x43FE60u;
    {
        const bool branch_taken_0x43fe60 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 10));
        ctx->pc = 0x43FE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43FE60u;
        // 0x43fe64: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43fe60) {
            ctx->pc = 0x43FD20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_43fd20;
        }
    }
    ctx->pc = 0x43FE68u;
label_43fe68:
    // 0x43fe68: 0x8f82be20  lw          $v0, -0x41E0($gp)
    ctx->pc = 0x43fe68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
label_43fe6c:
    // 0x43fe6c: 0x7c4b0000  sq          $t3, 0x0($v0)
    ctx->pc = 0x43fe6cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 11));
label_43fe70:
    // 0x43fe70: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x43fe70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_43fe74:
    // 0x43fe74: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x43fe74u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
label_43fe78:
    // 0x43fe78: 0x1600ff55  bnez        $s0, . + 4 + (-0xAB << 2)
label_43fe7c:
    if (ctx->pc == 0x43FE7Cu) {
        ctx->pc = 0x43FE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43FE78u;
        // 0x43fe7c: 0x79cb0000  lq          $t3, 0x0($t6) (Delay Slot)
        SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 14), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43FE80u;
        goto label_43fe80;
    }
    ctx->pc = 0x43FE78u;
    {
        const bool branch_taken_0x43fe78 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x43FE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43FE78u;
        // 0x43fe7c: 0x79cb0000  lq          $t3, 0x0($t6) (Delay Slot)
        SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 14), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43fe78) {
            ctx->pc = 0x43FBD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_43fbd0;
        }
    }
    ctx->pc = 0x43FE80u;
label_43fe80:
    // 0x43fe80: 0xc10f954  jal         func_43E550
label_43fe84:
    if (ctx->pc == 0x43FE84u) {
        ctx->pc = 0x43FE88u;
        goto label_43fe88;
    }
    ctx->pc = 0x43FE80u;
    SET_GPR_U32(ctx, 31, 0x43FE88u);
    ctx->pc = 0x43E550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43E550u, 0x43FE80u, 0x43FE88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43FE88u;
label_43fe88:
    // 0x43fe88: 0x1260000d  beqz        $s3, . + 4 + (0xD << 2)
label_43fe8c:
    if (ctx->pc == 0x43FE8Cu) {
        ctx->pc = 0x43FE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43FE88u;
        // 0x43fe8c: 0x8f90aee8  lw          $s0, -0x5118($gp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946536)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43FE90u;
        goto label_43fe90;
    }
    ctx->pc = 0x43FE88u;
    {
        const bool branch_taken_0x43fe88 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x43FE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43FE88u;
        // 0x43fe8c: 0x8f90aee8  lw          $s0, -0x5118($gp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946536)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43fe88) {
            ctx->pc = 0x43FEC0u;
            goto label_43fec0;
        }
    }
    ctx->pc = 0x43FE90u;
label_43fe90:
    // 0x43fe90: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x43fe90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_43fe94:
    // 0x43fe94: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x43fe94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_43fe98:
    // 0x43fe98: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x43fe98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_43fe9c:
    // 0x43fe9c: 0x213182b  sltu        $v1, $s0, $s3
    ctx->pc = 0x43fe9cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_43fea0:
    // 0x43fea0: 0x8e880004  lw          $t0, 0x4($s4)
    ctx->pc = 0x43fea0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_43fea4:
    // 0x43fea4: 0x263800a  movz        $s0, $s3, $v1
    ctx->pc = 0x43fea4u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 19));
label_43fea8:
    // 0x43fea8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x43fea8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_43feac:
    // 0x43feac: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x43feacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_43feb0:
    // 0x43feb0: 0x40f809  jalr        $v0
label_43feb4:
    if (ctx->pc == 0x43FEB4u) {
        ctx->pc = 0x43FEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43FEB0u;
        // 0x43feb4: 0x2c0482d  daddu       $t1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43FEB8u;
        goto label_43feb8;
    }
    ctx->pc = 0x43FEB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x43FEB8u);
        ctx->pc = 0x43FEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43FEB0u;
        // 0x43feb4: 0x2c0482d  daddu       $t1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43FEB0u, 0x43FEB8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x43FEB8u;
label_43feb8:
    // 0x43feb8: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_43febc:
    if (ctx->pc == 0x43FEBCu) {
        ctx->pc = 0x43FEC0u;
        goto label_43fec0;
    }
    ctx->pc = 0x43FEB8u;
    {
        const bool branch_taken_0x43feb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x43feb8) {
            ctx->pc = 0x43FEC4u;
            goto label_43fec4;
        }
    }
    ctx->pc = 0x43FEC0u;
label_43fec0:
    // 0x43fec0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x43fec0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_43fec4:
    // 0x43fec4: 0x1600ff36  bnez        $s0, . + 4 + (-0xCA << 2)
label_43fec8:
    if (ctx->pc == 0x43FEC8u) {
        ctx->pc = 0x43FEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43FEC4u;
        // 0x43fec8: 0x3c0d7c00  lui         $t5, 0x7C00 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)31744 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43FECCu;
        goto label_43fecc;
    }
    ctx->pc = 0x43FEC4u;
    {
        const bool branch_taken_0x43fec4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x43FEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43FEC4u;
        // 0x43fec8: 0x3c0d7c00  lui         $t5, 0x7C00 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)31744 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43fec4) {
            ctx->pc = 0x43FBA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_43fba0;
        }
    }
    ctx->pc = 0x43FECCu;
label_43fecc:
    // 0x43fecc: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x43feccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_43fed0:
    // 0x43fed0: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x43fed0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_43fed4:
    // 0x43fed4: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x43fed4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_43fed8:
    // 0x43fed8: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x43fed8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_43fedc:
    // 0x43fedc: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x43fedcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_43fee0:
    // 0x43fee0: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x43fee0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_43fee4:
    // 0x43fee4: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x43fee4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_43fee8:
    // 0x43fee8: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x43fee8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_43feec:
    // 0x43feec: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x43feecu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_43fef0:
    // 0x43fef0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x43fef0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_43fef4:
    // 0x43fef4: 0x3e00008  jr          $ra
label_43fef8:
    if (ctx->pc == 0x43FEF8u) {
        ctx->pc = 0x43FEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43FEF4u;
        // 0x43fef8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43FEFCu;
        goto label_43fefc;
    }
    ctx->pc = 0x43FEF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43FEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43FEF4u;
        // 0x43fef8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43FEF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43FEFCu;
label_43fefc:
    // 0x43fefc: 0x0  nop
    ctx->pc = 0x43fefcu;
    // NOP
label_43ff00:
    // 0x43ff00: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x43ff00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_43ff04:
    // 0x43ff04: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x43ff04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_43ff08:
    // 0x43ff08: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x43ff08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_43ff0c:
    // 0x43ff0c: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x43ff0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_43ff10:
    // 0x43ff10: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x43ff10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_43ff14:
    // 0x43ff14: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x43ff14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_43ff18:
    // 0x43ff18: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x43ff18u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_43ff1c:
    // 0x43ff1c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x43ff1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_43ff20:
    // 0x43ff20: 0x2513ffff  addiu       $s3, $t0, -0x1
    ctx->pc = 0x43ff20u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
label_43ff24:
    // 0x43ff24: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x43ff24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
label_43ff28:
    // 0x43ff28: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x43ff28u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_43ff2c:
    // 0x43ff2c: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x43ff2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
label_43ff30:
    // 0x43ff30: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x43ff30u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_43ff34:
    // 0x43ff34: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x43ff34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
label_43ff38:
    // 0x43ff38: 0x3c17005e  lui         $s7, 0x5E
    ctx->pc = 0x43ff38u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)94 << 16));
label_43ff3c:
    // 0x43ff3c: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x43ff3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_43ff40:
    // 0x43ff40: 0x245ed620  addiu       $fp, $v0, -0x29E0
    ctx->pc = 0x43ff40u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956576));
label_43ff44:
    // 0x43ff44: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x43ff44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_43ff48:
    // 0x43ff48: 0x100000bb  b           . + 4 + (0xBB << 2)
label_43ff4c:
    if (ctx->pc == 0x43FF4Cu) {
        ctx->pc = 0x43FF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43FF48u;
        // 0x43ff4c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43FF50u;
        goto label_43ff50;
    }
    ctx->pc = 0x43FF48u;
    {
        const bool branch_taken_0x43ff48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43FF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43FF48u;
        // 0x43ff4c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43ff48) {
            ctx->pc = 0x440238u;
            goto label_440238;
        }
    }
    ctx->pc = 0x43FF50u;
label_43ff50:
    // 0x43ff50: 0x3c0cffff  lui         $t4, 0xFFFF
    ctx->pc = 0x43ff50u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)65535 << 16));
label_43ff54:
    // 0x43ff54: 0x7bcb0000  lq          $t3, 0x0($fp)
    ctx->pc = 0x43ff54u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 30), 0)));
label_43ff58:
    // 0x43ff58: 0x2709823  subu        $s3, $s3, $s0
    ctx->pc = 0x43ff58u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_43ff5c:
    // 0x43ff5c: 0x24150010  addiu       $s5, $zero, 0x10
    ctx->pc = 0x43ff5cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_43ff60:
    // 0x43ff60: 0x3c191000  lui         $t9, 0x1000
    ctx->pc = 0x43ff60u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)4096 << 16));
label_43ff64:
    // 0x43ff64: 0x3c180400  lui         $t8, 0x400
    ctx->pc = 0x43ff64u;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)1024 << 16));
label_43ff68:
    // 0x43ff68: 0x3c0f0100  lui         $t7, 0x100
    ctx->pc = 0x43ff68u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)256 << 16));
label_43ff6c:
    // 0x43ff6c: 0x35ef0404  ori         $t7, $t7, 0x404
    ctx->pc = 0x43ff6cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)1028);
label_43ff70:
    // 0x43ff70: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x43ff70u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
label_43ff74:
    // 0x43ff74: 0x35ad8000  ori         $t5, $t5, 0x8000
    ctx->pc = 0x43ff74u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)32768);
label_43ff78:
    // 0x43ff78: 0x358cffff  ori         $t4, $t4, 0xFFFF
    ctx->pc = 0x43ff78u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)65535);
label_43ff7c:
    // 0x43ff7c: 0x26eed580  addiu       $t6, $s7, -0x2A80
    ctx->pc = 0x43ff7cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 23), 4294956416));
label_43ff80:
    // 0x43ff80: 0x2e030011  sltiu       $v1, $s0, 0x11
    ctx->pc = 0x43ff80u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
label_43ff84:
    // 0x43ff84: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x43ff84u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_43ff88:
    // 0x43ff88: 0x203400b  movn        $t0, $s0, $v1
    ctx->pc = 0x43ff88u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 16));
label_43ff8c:
    // 0x43ff8c: 0x810c0  sll         $v0, $t0, 3
    ctx->pc = 0x43ff8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
label_43ff90:
    // 0x43ff90: 0x1181825  or          $v1, $t0, $t8
    ctx->pc = 0x43ff90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) | GPR_U64(ctx, 24));
label_43ff94:
    // 0x43ff94: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x43ff94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_43ff98:
    // 0x43ff98: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x43ff98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_43ff9c:
    // 0x43ff9c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x43ff9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_43ffa0:
    // 0x43ffa0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x43ffa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_43ffa4:
    // 0x43ffa4: 0x64420002  daddiu      $v0, $v0, 0x2
    ctx->pc = 0x43ffa4u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)2);
label_43ffa8:
    // 0x43ffa8: 0x6f2025  or          $a0, $v1, $t7
    ctx->pc = 0x43ffa8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 15));
label_43ffac:
    // 0x43ffac: 0x591825  or          $v1, $v0, $t9
    ctx->pc = 0x43ffacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 25));
label_43ffb0:
    // 0x43ffb0: 0x2088023  subu        $s0, $s0, $t0
    ctx->pc = 0x43ffb0u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 8)));
label_43ffb4:
    // 0x43ffb4: 0x70831389  pcpyld      $v0, $a0, $v1
    ctx->pc = 0x43ffb4u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
label_43ffb8:
    // 0x43ffb8: 0x8f86be20  lw          $a2, -0x41E0($gp)
    ctx->pc = 0x43ffb8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
label_43ffbc:
    // 0x43ffbc: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x43ffbcu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
label_43ffc0:
    // 0x43ffc0: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x43ffc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
label_43ffc4:
    // 0x43ffc4: 0xaf86be20  sw          $a2, -0x41E0($gp)
    ctx->pc = 0x43ffc4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 6));
label_43ffc8:
    // 0x43ffc8: 0x814c0  sll         $v0, $t0, 19
    ctx->pc = 0x43ffc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 19));
label_43ffcc:
    // 0x43ffcc: 0x4d1025  or          $v0, $v0, $t5
    ctx->pc = 0x43ffccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 13));
label_43ffd0:
    // 0x43ffd0: 0x3c03c000  lui         $v1, 0xC000
    ctx->pc = 0x43ffd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49152 << 16));
label_43ffd4:
    // 0x43ffd4: 0x3463c000  ori         $v1, $v1, 0xC000
    ctx->pc = 0x43ffd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49152);
label_43ffd8:
    // 0x43ffd8: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x43ffd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_43ffdc:
    // 0x43ffdc: 0x34632000  ori         $v1, $v1, 0x2000
    ctx->pc = 0x43ffdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
label_43ffe0:
    // 0x43ffe0: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x43ffe0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_43ffe4:
    // 0x43ffe4: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x43ffe4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
label_43ffe8:
    // 0x43ffe8: 0x70831389  pcpyld      $v0, $a0, $v1
    ctx->pc = 0x43ffe8u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
label_43ffec:
    // 0x43ffec: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x43ffecu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
label_43fff0:
    // 0x43fff0: 0x24c20010  addiu       $v0, $a2, 0x10
    ctx->pc = 0x43fff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
label_43fff4:
    // 0x43fff4: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x43fff4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
label_43fff8:
    // 0x43fff8: 0x110c0087  beq         $t0, $t4, . + 4 + (0x87 << 2)
label_43fffc:
    if (ctx->pc == 0x43FFFCu) {
        ctx->pc = 0x43FFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43FFF8u;
        // 0x43fffc: 0xaf82be20  sw          $v0, -0x41E0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x440000u;
        goto label_440000;
    }
    ctx->pc = 0x43FFF8u;
    {
        const bool branch_taken_0x43fff8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 12));
        ctx->pc = 0x43FFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43FFF8u;
        // 0x43fffc: 0xaf82be20  sw          $v0, -0x41E0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43fff8) {
            ctx->pc = 0x440218u;
            goto label_440218;
        }
    }
    ctx->pc = 0x440000u;
label_440000:
    // 0x440000: 0x3c0affff  lui         $t2, 0xFFFF
    ctx->pc = 0x440000u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65535 << 16));
label_440004:
    // 0x440004: 0x81027  nor         $v0, $zero, $t0
    ctx->pc = 0x440004u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 8)));
label_440008:
    // 0x440008: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x440008u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_44000c:
    // 0x44000c: 0x354affff  ori         $t2, $t2, 0xFFFF
    ctx->pc = 0x44000cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
label_440010:
    // 0x440010: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
label_440014:
    if (ctx->pc == 0x440014u) {
        ctx->pc = 0x440014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x440010u;
        // 0x440014: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x440018u;
        goto label_440018;
    }
    ctx->pc = 0x440010u;
    {
        const bool branch_taken_0x440010 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x440014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x440010u;
        // 0x440014: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x440010) {
            ctx->pc = 0x4400C8u;
            goto label_4400c8;
        }
    }
    ctx->pc = 0x440018u;
label_440018:
    // 0x440018: 0x96240000  lhu         $a0, 0x0($s1)
    ctx->pc = 0x440018u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_44001c:
    // 0x44001c: 0x96250002  lhu         $a1, 0x2($s1)
    ctx->pc = 0x44001cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_440020:
    // 0x440020: 0x42180  sll         $a0, $a0, 6
    ctx->pc = 0x440020u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
label_440024:
    // 0x440024: 0x52980  sll         $a1, $a1, 6
    ctx->pc = 0x440024u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
label_440028:
    // 0x440028: 0x2442021  addu        $a0, $s2, $a0
    ctx->pc = 0x440028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
label_44002c:
    // 0x44002c: 0x2452821  addu        $a1, $s2, $a1
    ctx->pc = 0x44002cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
label_440030:
    // 0x440030: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x440030u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_440034:
    // 0x440034: 0x7cc20010  sq          $v0, 0x10($a2)
    ctx->pc = 0x440034u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), GPR_VEC(ctx, 2));
label_440038:
    // 0x440038: 0x24c30020  addiu       $v1, $a2, 0x20
    ctx->pc = 0x440038u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
label_44003c:
    // 0x44003c: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x44003cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_440040:
    // 0x440040: 0x78820010  lq          $v0, 0x10($a0)
    ctx->pc = 0x440040u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 16)));
label_440044:
    // 0x440044: 0x7cc20020  sq          $v0, 0x20($a2)
    ctx->pc = 0x440044u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), GPR_VEC(ctx, 2));
label_440048:
    // 0x440048: 0x24c30030  addiu       $v1, $a2, 0x30
    ctx->pc = 0x440048u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
label_44004c:
    // 0x44004c: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x44004cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_440050:
    // 0x440050: 0x78820020  lq          $v0, 0x20($a0)
    ctx->pc = 0x440050u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 32)));
label_440054:
    // 0x440054: 0x7cc20030  sq          $v0, 0x30($a2)
    ctx->pc = 0x440054u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), GPR_VEC(ctx, 2));
label_440058:
    // 0x440058: 0x24c30040  addiu       $v1, $a2, 0x40
    ctx->pc = 0x440058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
label_44005c:
    // 0x44005c: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x44005cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_440060:
    // 0x440060: 0x78820030  lq          $v0, 0x30($a0)
    ctx->pc = 0x440060u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 48)));
label_440064:
    // 0x440064: 0x7cc20040  sq          $v0, 0x40($a2)
    ctx->pc = 0x440064u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 64), GPR_VEC(ctx, 2));
label_440068:
    // 0x440068: 0x24c30050  addiu       $v1, $a2, 0x50
    ctx->pc = 0x440068u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 80));
label_44006c:
    // 0x44006c: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x44006cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_440070:
    // 0x440070: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x440070u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_440074:
    // 0x440074: 0x7cc20050  sq          $v0, 0x50($a2)
    ctx->pc = 0x440074u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 80), GPR_VEC(ctx, 2));
label_440078:
    // 0x440078: 0x24c30060  addiu       $v1, $a2, 0x60
    ctx->pc = 0x440078u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 96));
label_44007c:
    // 0x44007c: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x44007cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_440080:
    // 0x440080: 0x78a20010  lq          $v0, 0x10($a1)
    ctx->pc = 0x440080u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 16)));
label_440084:
    // 0x440084: 0x7cc20060  sq          $v0, 0x60($a2)
    ctx->pc = 0x440084u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 96), GPR_VEC(ctx, 2));
label_440088:
    // 0x440088: 0x24c30070  addiu       $v1, $a2, 0x70
    ctx->pc = 0x440088u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 112));
label_44008c:
    // 0x44008c: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x44008cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_440090:
    // 0x440090: 0x78a20020  lq          $v0, 0x20($a1)
    ctx->pc = 0x440090u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 32)));
label_440094:
    // 0x440094: 0x7cc20070  sq          $v0, 0x70($a2)
    ctx->pc = 0x440094u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 112), GPR_VEC(ctx, 2));
label_440098:
    // 0x440098: 0x24c30080  addiu       $v1, $a2, 0x80
    ctx->pc = 0x440098u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
label_44009c:
    // 0x44009c: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x44009cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_4400a0:
    // 0x4400a0: 0x78a20030  lq          $v0, 0x30($a1)
    ctx->pc = 0x4400a0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 48)));
label_4400a4:
    // 0x4400a4: 0x7cc20080  sq          $v0, 0x80($a2)
    ctx->pc = 0x4400a4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 128), GPR_VEC(ctx, 2));
label_4400a8:
    // 0x4400a8: 0x24c30090  addiu       $v1, $a2, 0x90
    ctx->pc = 0x4400a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 144));
label_4400ac:
    // 0x4400ac: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x4400acu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_4400b0:
    // 0x4400b0: 0x26220002  addiu       $v0, $s1, 0x2
    ctx->pc = 0x4400b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
label_4400b4:
    // 0x4400b4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x4400b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4400b8:
    // 0x4400b8: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x4400b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
label_4400bc:
    // 0x4400bc: 0x110a0056  beq         $t0, $t2, . + 4 + (0x56 << 2)
label_4400c0:
    if (ctx->pc == 0x4400C0u) {
        ctx->pc = 0x4400C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4400BCu;
        // 0x4400c0: 0xe0882d  daddu       $s1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4400C4u;
        goto label_4400c4;
    }
    ctx->pc = 0x4400BCu;
    {
        const bool branch_taken_0x4400bc = (GPR_U64(ctx, 8) == GPR_U64(ctx, 10));
        ctx->pc = 0x4400C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4400BCu;
        // 0x4400c0: 0xe0882d  daddu       $s1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4400bc) {
            ctx->pc = 0x440218u;
            goto label_440218;
        }
    }
    ctx->pc = 0x4400C4u;
label_4400c4:
    // 0x4400c4: 0x0  nop
    ctx->pc = 0x4400c4u;
    // NOP
label_4400c8:
    // 0x4400c8: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x4400c8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_4400cc:
    // 0x4400cc: 0x0  nop
    ctx->pc = 0x4400ccu;
    // NOP
label_4400d0:
    // 0x4400d0: 0x95250000  lhu         $a1, 0x0($t1)
    ctx->pc = 0x4400d0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
label_4400d4:
    // 0x4400d4: 0x94e60002  lhu         $a2, 0x2($a3)
    ctx->pc = 0x4400d4u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
label_4400d8:
    // 0x4400d8: 0x52980  sll         $a1, $a1, 6
    ctx->pc = 0x4400d8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
label_4400dc:
    // 0x4400dc: 0x63180  sll         $a2, $a2, 6
    ctx->pc = 0x4400dcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
label_4400e0:
    // 0x4400e0: 0x2452821  addu        $a1, $s2, $a1
    ctx->pc = 0x4400e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
label_4400e4:
    // 0x4400e4: 0x2463021  addu        $a2, $s2, $a2
    ctx->pc = 0x4400e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
label_4400e8:
    // 0x4400e8: 0x8f84be20  lw          $a0, -0x41E0($gp)
    ctx->pc = 0x4400e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
label_4400ec:
    // 0x4400ec: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x4400ecu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_4400f0:
    // 0x4400f0: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x4400f0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
label_4400f4:
    // 0x4400f4: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x4400f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_4400f8:
    // 0x4400f8: 0xaf84be20  sw          $a0, -0x41E0($gp)
    ctx->pc = 0x4400f8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 4));
label_4400fc:
    // 0x4400fc: 0x78a20010  lq          $v0, 0x10($a1)
    ctx->pc = 0x4400fcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 16)));
label_440100:
    // 0x440100: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x440100u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
label_440104:
    // 0x440104: 0x24830010  addiu       $v1, $a0, 0x10
    ctx->pc = 0x440104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_440108:
    // 0x440108: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x440108u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_44010c:
    // 0x44010c: 0x78a20020  lq          $v0, 0x20($a1)
    ctx->pc = 0x44010cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 32)));
label_440110:
    // 0x440110: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x440110u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
label_440114:
    // 0x440114: 0x24830020  addiu       $v1, $a0, 0x20
    ctx->pc = 0x440114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
label_440118:
    // 0x440118: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x440118u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_44011c:
    // 0x44011c: 0x78a20030  lq          $v0, 0x30($a1)
    ctx->pc = 0x44011cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 48)));
label_440120:
    // 0x440120: 0x7c820020  sq          $v0, 0x20($a0)
    ctx->pc = 0x440120u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 2));
label_440124:
    // 0x440124: 0x24830030  addiu       $v1, $a0, 0x30
    ctx->pc = 0x440124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
label_440128:
    // 0x440128: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x440128u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_44012c:
    // 0x44012c: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x44012cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_440130:
    // 0x440130: 0x7c820030  sq          $v0, 0x30($a0)
    ctx->pc = 0x440130u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 2));
label_440134:
    // 0x440134: 0x24830040  addiu       $v1, $a0, 0x40
    ctx->pc = 0x440134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
label_440138:
    // 0x440138: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x440138u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_44013c:
    // 0x44013c: 0x78c20010  lq          $v0, 0x10($a2)
    ctx->pc = 0x44013cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 16)));
label_440140:
    // 0x440140: 0x7c820040  sq          $v0, 0x40($a0)
    ctx->pc = 0x440140u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 64), GPR_VEC(ctx, 2));
label_440144:
    // 0x440144: 0x24830050  addiu       $v1, $a0, 0x50
    ctx->pc = 0x440144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
label_440148:
    // 0x440148: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x440148u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_44014c:
    // 0x44014c: 0x78c20020  lq          $v0, 0x20($a2)
    ctx->pc = 0x44014cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 32)));
label_440150:
    // 0x440150: 0x7c820050  sq          $v0, 0x50($a0)
    ctx->pc = 0x440150u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 80), GPR_VEC(ctx, 2));
label_440154:
    // 0x440154: 0x24830060  addiu       $v1, $a0, 0x60
    ctx->pc = 0x440154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
label_440158:
    // 0x440158: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x440158u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_44015c:
    // 0x44015c: 0x78c20030  lq          $v0, 0x30($a2)
    ctx->pc = 0x44015cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 48)));
label_440160:
    // 0x440160: 0x7c820060  sq          $v0, 0x60($a0)
    ctx->pc = 0x440160u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 96), GPR_VEC(ctx, 2));
label_440164:
    // 0x440164: 0x24830070  addiu       $v1, $a0, 0x70
    ctx->pc = 0x440164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
label_440168:
    // 0x440168: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x440168u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_44016c:
    // 0x44016c: 0x95250002  lhu         $a1, 0x2($t1)
    ctx->pc = 0x44016cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 2)));
label_440170:
    // 0x440170: 0x94e60004  lhu         $a2, 0x4($a3)
    ctx->pc = 0x440170u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 4)));
label_440174:
    // 0x440174: 0x52980  sll         $a1, $a1, 6
    ctx->pc = 0x440174u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
label_440178:
    // 0x440178: 0x2452821  addu        $a1, $s2, $a1
    ctx->pc = 0x440178u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
label_44017c:
    // 0x44017c: 0x63180  sll         $a2, $a2, 6
    ctx->pc = 0x44017cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
label_440180:
    // 0x440180: 0x2463021  addu        $a2, $s2, $a2
    ctx->pc = 0x440180u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
label_440184:
    // 0x440184: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x440184u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_440188:
    // 0x440188: 0x7c820070  sq          $v0, 0x70($a0)
    ctx->pc = 0x440188u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 112), GPR_VEC(ctx, 2));
label_44018c:
    // 0x44018c: 0x24830080  addiu       $v1, $a0, 0x80
    ctx->pc = 0x44018cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
label_440190:
    // 0x440190: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x440190u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_440194:
    // 0x440194: 0x78a20010  lq          $v0, 0x10($a1)
    ctx->pc = 0x440194u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 16)));
label_440198:
    // 0x440198: 0x7c820080  sq          $v0, 0x80($a0)
    ctx->pc = 0x440198u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 128), GPR_VEC(ctx, 2));
label_44019c:
    // 0x44019c: 0x24830090  addiu       $v1, $a0, 0x90
    ctx->pc = 0x44019cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 144));
label_4401a0:
    // 0x4401a0: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x4401a0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_4401a4:
    // 0x4401a4: 0x78a20020  lq          $v0, 0x20($a1)
    ctx->pc = 0x4401a4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 32)));
label_4401a8:
    // 0x4401a8: 0x7c820090  sq          $v0, 0x90($a0)
    ctx->pc = 0x4401a8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 144), GPR_VEC(ctx, 2));
label_4401ac:
    // 0x4401ac: 0x248300a0  addiu       $v1, $a0, 0xA0
    ctx->pc = 0x4401acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
label_4401b0:
    // 0x4401b0: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x4401b0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_4401b4:
    // 0x4401b4: 0x78a20030  lq          $v0, 0x30($a1)
    ctx->pc = 0x4401b4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 48)));
label_4401b8:
    // 0x4401b8: 0x7c8200a0  sq          $v0, 0xA0($a0)
    ctx->pc = 0x4401b8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 160), GPR_VEC(ctx, 2));
label_4401bc:
    // 0x4401bc: 0x248300b0  addiu       $v1, $a0, 0xB0
    ctx->pc = 0x4401bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 176));
label_4401c0:
    // 0x4401c0: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x4401c0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_4401c4:
    // 0x4401c4: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x4401c4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_4401c8:
    // 0x4401c8: 0x7c8200b0  sq          $v0, 0xB0($a0)
    ctx->pc = 0x4401c8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 176), GPR_VEC(ctx, 2));
label_4401cc:
    // 0x4401cc: 0x248300c0  addiu       $v1, $a0, 0xC0
    ctx->pc = 0x4401ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
label_4401d0:
    // 0x4401d0: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x4401d0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_4401d4:
    // 0x4401d4: 0x78c20010  lq          $v0, 0x10($a2)
    ctx->pc = 0x4401d4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 16)));
label_4401d8:
    // 0x4401d8: 0x7c8200c0  sq          $v0, 0xC0($a0)
    ctx->pc = 0x4401d8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 192), GPR_VEC(ctx, 2));
label_4401dc:
    // 0x4401dc: 0x248300d0  addiu       $v1, $a0, 0xD0
    ctx->pc = 0x4401dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 208));
label_4401e0:
    // 0x4401e0: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x4401e0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_4401e4:
    // 0x4401e4: 0x78c20020  lq          $v0, 0x20($a2)
    ctx->pc = 0x4401e4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 32)));
label_4401e8:
    // 0x4401e8: 0x7c8200d0  sq          $v0, 0xD0($a0)
    ctx->pc = 0x4401e8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 208), GPR_VEC(ctx, 2));
label_4401ec:
    // 0x4401ec: 0x248300e0  addiu       $v1, $a0, 0xE0
    ctx->pc = 0x4401ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 224));
label_4401f0:
    // 0x4401f0: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x4401f0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_4401f4:
    // 0x4401f4: 0x78c20030  lq          $v0, 0x30($a2)
    ctx->pc = 0x4401f4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 48)));
label_4401f8:
    // 0x4401f8: 0x7c8200e0  sq          $v0, 0xE0($a0)
    ctx->pc = 0x4401f8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 224), GPR_VEC(ctx, 2));
label_4401fc:
    // 0x4401fc: 0x248400f0  addiu       $a0, $a0, 0xF0
    ctx->pc = 0x4401fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 240));
label_440200:
    // 0x440200: 0xaf84be20  sw          $a0, -0x41E0($gp)
    ctx->pc = 0x440200u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 4));
label_440204:
    // 0x440204: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x440204u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_440208:
    // 0x440208: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x440208u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
label_44020c:
    // 0x44020c: 0x2508fffe  addiu       $t0, $t0, -0x2
    ctx->pc = 0x44020cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967294));
label_440210:
    // 0x440210: 0x150affaf  bne         $t0, $t2, . + 4 + (-0x51 << 2)
label_440214:
    if (ctx->pc == 0x440214u) {
        ctx->pc = 0x440214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x440210u;
        // 0x440214: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x440218u;
        goto label_440218;
    }
    ctx->pc = 0x440210u;
    {
        const bool branch_taken_0x440210 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 10));
        ctx->pc = 0x440214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x440210u;
        // 0x440214: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x440210) {
            ctx->pc = 0x4400D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4400d0;
        }
    }
    ctx->pc = 0x440218u;
label_440218:
    // 0x440218: 0x8f82be20  lw          $v0, -0x41E0($gp)
    ctx->pc = 0x440218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
label_44021c:
    // 0x44021c: 0x7c4b0000  sq          $t3, 0x0($v0)
    ctx->pc = 0x44021cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 11));
label_440220:
    // 0x440220: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x440220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_440224:
    // 0x440224: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x440224u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
label_440228:
    // 0x440228: 0x1600ff55  bnez        $s0, . + 4 + (-0xAB << 2)
label_44022c:
    if (ctx->pc == 0x44022Cu) {
        ctx->pc = 0x44022Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x440228u;
        // 0x44022c: 0x79cb0000  lq          $t3, 0x0($t6) (Delay Slot)
        SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 14), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x440230u;
        goto label_440230;
    }
    ctx->pc = 0x440228u;
    {
        const bool branch_taken_0x440228 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x44022Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x440228u;
        // 0x44022c: 0x79cb0000  lq          $t3, 0x0($t6) (Delay Slot)
        SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 14), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x440228) {
            ctx->pc = 0x43FF80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_43ff80;
        }
    }
    ctx->pc = 0x440230u;
label_440230:
    // 0x440230: 0xc10f954  jal         func_43E550
label_440234:
    if (ctx->pc == 0x440234u) {
        ctx->pc = 0x440238u;
        goto label_440238;
    }
    ctx->pc = 0x440230u;
    SET_GPR_U32(ctx, 31, 0x440238u);
    ctx->pc = 0x43E550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43E550u, 0x440230u, 0x440238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x440238u;
label_440238:
    // 0x440238: 0x1260000d  beqz        $s3, . + 4 + (0xD << 2)
label_44023c:
    if (ctx->pc == 0x44023Cu) {
        ctx->pc = 0x44023Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x440238u;
        // 0x44023c: 0x8f90aee8  lw          $s0, -0x5118($gp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946536)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x440240u;
        goto label_440240;
    }
    ctx->pc = 0x440238u;
    {
        const bool branch_taken_0x440238 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x44023Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x440238u;
        // 0x44023c: 0x8f90aee8  lw          $s0, -0x5118($gp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946536)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x440238) {
            ctx->pc = 0x440270u;
            goto label_440270;
        }
    }
    ctx->pc = 0x440240u;
label_440240:
    // 0x440240: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x440240u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_440244:
    // 0x440244: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x440244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_440248:
    // 0x440248: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x440248u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_44024c:
    // 0x44024c: 0x213182b  sltu        $v1, $s0, $s3
    ctx->pc = 0x44024cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_440250:
    // 0x440250: 0x8e880004  lw          $t0, 0x4($s4)
    ctx->pc = 0x440250u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_440254:
    // 0x440254: 0x263800a  movz        $s0, $s3, $v1
    ctx->pc = 0x440254u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 19));
label_440258:
    // 0x440258: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x440258u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_44025c:
    // 0x44025c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x44025cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_440260:
    // 0x440260: 0x40f809  jalr        $v0
label_440264:
    if (ctx->pc == 0x440264u) {
        ctx->pc = 0x440264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x440260u;
        // 0x440264: 0x2c0482d  daddu       $t1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x440268u;
        goto label_440268;
    }
    ctx->pc = 0x440260u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x440268u);
        ctx->pc = 0x440264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x440260u;
        // 0x440264: 0x2c0482d  daddu       $t1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x440260u, 0x440268u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x440268u;
label_440268:
    // 0x440268: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_44026c:
    if (ctx->pc == 0x44026Cu) {
        ctx->pc = 0x440270u;
        goto label_440270;
    }
    ctx->pc = 0x440268u;
    {
        const bool branch_taken_0x440268 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x440268) {
            ctx->pc = 0x440274u;
            goto label_440274;
        }
    }
    ctx->pc = 0x440270u;
label_440270:
    // 0x440270: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x440270u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_440274:
    // 0x440274: 0x1600ff36  bnez        $s0, . + 4 + (-0xCA << 2)
label_440278:
    if (ctx->pc == 0x440278u) {
        ctx->pc = 0x440278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x440274u;
        // 0x440278: 0x3c0d7c00  lui         $t5, 0x7C00 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)31744 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44027Cu;
        goto label_44027c;
    }
    ctx->pc = 0x440274u;
    {
        const bool branch_taken_0x440274 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x440278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x440274u;
        // 0x440278: 0x3c0d7c00  lui         $t5, 0x7C00 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)31744 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x440274) {
            ctx->pc = 0x43FF50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_43ff50;
        }
    }
    ctx->pc = 0x44027Cu;
label_44027c:
    // 0x44027c: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x44027cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_440280:
    // 0x440280: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x440280u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_440284:
    // 0x440284: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x440284u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_440288:
    // 0x440288: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x440288u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_44028c:
    // 0x44028c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x44028cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_440290:
    // 0x440290: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x440290u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_440294:
    // 0x440294: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x440294u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_440298:
    // 0x440298: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x440298u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_44029c:
    // 0x44029c: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x44029cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4402a0:
    // 0x4402a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4402a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4402a4:
    // 0x4402a4: 0x3e00008  jr          $ra
label_4402a8:
    if (ctx->pc == 0x4402A8u) {
        ctx->pc = 0x4402A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4402A4u;
        // 0x4402a8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4402ACu;
        goto label_4402ac;
    }
    ctx->pc = 0x4402A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4402A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4402A4u;
        // 0x4402a8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4402A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4402ACu;
label_4402ac:
    // 0x4402ac: 0x0  nop
    ctx->pc = 0x4402acu;
    // NOP
label_4402b0:
    // 0x4402b0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x4402b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4402b4:
    // 0x4402b4: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x4402b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_4402b8:
    // 0x4402b8: 0x102001b  divu        $zero, $t0, $v0
    ctx->pc = 0x4402b8u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 8) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 8) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,8); } }
label_4402bc:
    // 0x4402bc: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x4402bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_4402c0:
    // 0x4402c0: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x4402c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_4402c4:
    // 0x4402c4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x4402c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4402c8:
    // 0x4402c8: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x4402c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_4402cc:
    // 0x4402cc: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x4402ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_4402d0:
    // 0x4402d0: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x4402d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_4402d4:
    // 0x4402d4: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x4402d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
label_4402d8:
    // 0x4402d8: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x4402d8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4402dc:
    // 0x4402dc: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x4402dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
label_4402e0:
    // 0x4402e0: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x4402e0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4402e4:
    // 0x4402e4: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x4402e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_4402e8:
    // 0x4402e8: 0x3c1e005e  lui         $fp, 0x5E
    ctx->pc = 0x4402e8u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)94 << 16));
label_4402ec:
    // 0x4402ec: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x4402ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_4402f0:
    // 0x4402f0: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x4402f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
label_4402f4:
    // 0x4402f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4402f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4402f8:
    // 0x4402f8: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_4402fc:
    if (ctx->pc == 0x4402FCu) {
        ctx->pc = 0x4402FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4402F8u;
        // 0x4402fc: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x440300u;
        goto label_440300;
    }
    ctx->pc = 0x4402F8u;
    {
        const bool branch_taken_0x4402f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4402f8) {
            ctx->pc = 0x4402FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4402F8u;
            // 0x4402fc: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x440300u;
            goto label_440300;
        }
    }
    ctx->pc = 0x440300u;
label_440300:
    // 0x440300: 0x4012  mflo        $t0
    ctx->pc = 0x440300u;
    SET_GPR_U64(ctx, 8, ctx->lo);
label_440304:
    // 0x440304: 0x1000007c  b           . + 4 + (0x7C << 2)
label_440308:
    if (ctx->pc == 0x440308u) {
        ctx->pc = 0x440308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x440304u;
        // 0x440308: 0x100982d  daddu       $s3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44030Cu;
        goto label_44030c;
    }
    ctx->pc = 0x440304u;
    {
        const bool branch_taken_0x440304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x440308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x440304u;
        // 0x440308: 0x100982d  daddu       $s3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x440304) {
            ctx->pc = 0x4404F8u;
            goto label_4404f8;
        }
    }
    ctx->pc = 0x44030Cu;
label_44030c:
    // 0x44030c: 0x0  nop
    ctx->pc = 0x44030cu;
    // NOP
label_440310:
    // 0x440310: 0x3c0d7c00  lui         $t5, 0x7C00
    ctx->pc = 0x440310u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)31744 << 16));
label_440314:
    // 0x440314: 0x2442d620  addiu       $v0, $v0, -0x29E0
    ctx->pc = 0x440314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956576));
label_440318:
    // 0x440318: 0x3c0cffff  lui         $t4, 0xFFFF
    ctx->pc = 0x440318u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)65535 << 16));
label_44031c:
    // 0x44031c: 0x784b0000  lq          $t3, 0x0($v0)
    ctx->pc = 0x44031cu;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_440320:
    // 0x440320: 0x2709823  subu        $s3, $s3, $s0
    ctx->pc = 0x440320u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_440324:
    // 0x440324: 0x24160010  addiu       $s6, $zero, 0x10
    ctx->pc = 0x440324u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_440328:
    // 0x440328: 0x2415000c  addiu       $s5, $zero, 0xC
    ctx->pc = 0x440328u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_44032c:
    // 0x44032c: 0x3c191000  lui         $t9, 0x1000
    ctx->pc = 0x44032cu;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)4096 << 16));
label_440330:
    // 0x440330: 0x3c180400  lui         $t8, 0x400
    ctx->pc = 0x440330u;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)1024 << 16));
label_440334:
    // 0x440334: 0x3c0f0100  lui         $t7, 0x100
    ctx->pc = 0x440334u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)256 << 16));
label_440338:
    // 0x440338: 0x35ef0404  ori         $t7, $t7, 0x404
    ctx->pc = 0x440338u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)1028);
label_44033c:
    // 0x44033c: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x44033cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
label_440340:
    // 0x440340: 0x35ad8000  ori         $t5, $t5, 0x8000
    ctx->pc = 0x440340u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)32768);
label_440344:
    // 0x440344: 0x358cffff  ori         $t4, $t4, 0xFFFF
    ctx->pc = 0x440344u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)65535);
label_440348:
    // 0x440348: 0x27ced580  addiu       $t6, $fp, -0x2A80
    ctx->pc = 0x440348u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 30), 4294956416));
label_44034c:
    // 0x44034c: 0x0  nop
    ctx->pc = 0x44034cu;
    // NOP
label_440350:
    // 0x440350: 0x2e020011  sltiu       $v0, $s0, 0x11
    ctx->pc = 0x440350u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
label_440354:
    // 0x440354: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x440354u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_440358:
    // 0x440358: 0x202400b  movn        $t0, $s0, $v0
    ctx->pc = 0x440358u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 16));
label_44035c:
    // 0x44035c: 0x1152018  mult        $a0, $t0, $s5
    ctx->pc = 0x44035cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_440360:
    // 0x440360: 0x1181825  or          $v1, $t0, $t8
    ctx->pc = 0x440360u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) | GPR_U64(ctx, 24));
label_440364:
    // 0x440364: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x440364u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_440368:
    // 0x440368: 0x2088023  subu        $s0, $s0, $t0
    ctx->pc = 0x440368u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 8)));
label_44036c:
    // 0x44036c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x44036cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_440370:
    // 0x440370: 0x6f2825  or          $a1, $v1, $t7
    ctx->pc = 0x440370u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 15));
label_440374:
    // 0x440374: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x440374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
label_440378:
    // 0x440378: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x440378u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_44037c:
    // 0x44037c: 0x64420002  daddiu      $v0, $v0, 0x2
    ctx->pc = 0x44037cu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)2);
label_440380:
    // 0x440380: 0x591825  or          $v1, $v0, $t9
    ctx->pc = 0x440380u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 25));
label_440384:
    // 0x440384: 0x70a31b89  pcpyld      $v1, $a1, $v1
    ctx->pc = 0x440384u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 5), GPR_VEC(ctx, 3)));
label_440388:
    // 0x440388: 0x8f82be20  lw          $v0, -0x41E0($gp)
    ctx->pc = 0x440388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
label_44038c:
    // 0x44038c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x44038cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_440390:
    // 0x440390: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x440390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_440394:
    // 0x440394: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x440394u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
label_440398:
    // 0x440398: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x440398u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
label_44039c:
    // 0x44039c: 0x8d2025  or          $a0, $a0, $t5
    ctx->pc = 0x44039cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 13));
label_4403a0:
    // 0x4403a0: 0x3c03c000  lui         $v1, 0xC000
    ctx->pc = 0x4403a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49152 << 16));
label_4403a4:
    // 0x4403a4: 0x3463c000  ori         $v1, $v1, 0xC000
    ctx->pc = 0x4403a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49152);
label_4403a8:
    // 0x4403a8: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x4403a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_4403ac:
    // 0x4403ac: 0x34632000  ori         $v1, $v1, 0x2000
    ctx->pc = 0x4403acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
label_4403b0:
    // 0x4403b0: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x4403b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_4403b4:
    // 0x4403b4: 0x4283c  dsll32      $a1, $a0, 0
    ctx->pc = 0x4403b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
label_4403b8:
    // 0x4403b8: 0x70a31b89  pcpyld      $v1, $a1, $v1
    ctx->pc = 0x4403b8u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 5), GPR_VEC(ctx, 3)));
label_4403bc:
    // 0x4403bc: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x4403bcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_4403c0:
    // 0x4403c0: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x4403c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_4403c4:
    // 0x4403c4: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x4403c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
label_4403c8:
    // 0x4403c8: 0x110c0043  beq         $t0, $t4, . + 4 + (0x43 << 2)
label_4403cc:
    if (ctx->pc == 0x4403CCu) {
        ctx->pc = 0x4403CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4403C8u;
        // 0x4403cc: 0xaf82be20  sw          $v0, -0x41E0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4403D0u;
        goto label_4403d0;
    }
    ctx->pc = 0x4403C8u;
    {
        const bool branch_taken_0x4403c8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 12));
        ctx->pc = 0x4403CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4403C8u;
        // 0x4403cc: 0xaf82be20  sw          $v0, -0x41E0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4403c8) {
            ctx->pc = 0x4404D8u;
            goto label_4404d8;
        }
    }
    ctx->pc = 0x4403D0u;
label_4403d0:
    // 0x4403d0: 0x3c0affff  lui         $t2, 0xFFFF
    ctx->pc = 0x4403d0u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65535 << 16));
label_4403d4:
    // 0x4403d4: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x4403d4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4403d8:
    // 0x4403d8: 0x354affff  ori         $t2, $t2, 0xFFFF
    ctx->pc = 0x4403d8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
label_4403dc:
    // 0x4403dc: 0x0  nop
    ctx->pc = 0x4403dcu;
    // NOP
label_4403e0:
    // 0x4403e0: 0x95250000  lhu         $a1, 0x0($t1)
    ctx->pc = 0x4403e0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
label_4403e4:
    // 0x4403e4: 0x95260002  lhu         $a2, 0x2($t1)
    ctx->pc = 0x4403e4u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 2)));
label_4403e8:
    // 0x4403e8: 0x95270004  lhu         $a3, 0x4($t1)
    ctx->pc = 0x4403e8u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 4)));
label_4403ec:
    // 0x4403ec: 0x52980  sll         $a1, $a1, 6
    ctx->pc = 0x4403ecu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
label_4403f0:
    // 0x4403f0: 0x63180  sll         $a2, $a2, 6
    ctx->pc = 0x4403f0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
label_4403f4:
    // 0x4403f4: 0x2252821  addu        $a1, $s1, $a1
    ctx->pc = 0x4403f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
label_4403f8:
    // 0x4403f8: 0x73980  sll         $a3, $a3, 6
    ctx->pc = 0x4403f8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 6));
label_4403fc:
    // 0x4403fc: 0x2263021  addu        $a2, $s1, $a2
    ctx->pc = 0x4403fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
label_440400:
    // 0x440400: 0x2273821  addu        $a3, $s1, $a3
    ctx->pc = 0x440400u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
label_440404:
    // 0x440404: 0x8f84be20  lw          $a0, -0x41E0($gp)
    ctx->pc = 0x440404u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
label_440408:
    // 0x440408: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x440408u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_44040c:
    // 0x44040c: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x44040cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
label_440410:
    // 0x440410: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x440410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_440414:
    // 0x440414: 0xaf84be20  sw          $a0, -0x41E0($gp)
    ctx->pc = 0x440414u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 4));
label_440418:
    // 0x440418: 0x78a20010  lq          $v0, 0x10($a1)
    ctx->pc = 0x440418u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 16)));
label_44041c:
    // 0x44041c: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x44041cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
label_440420:
    // 0x440420: 0x24830010  addiu       $v1, $a0, 0x10
    ctx->pc = 0x440420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_440424:
    // 0x440424: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x440424u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_440428:
    // 0x440428: 0x78a20020  lq          $v0, 0x20($a1)
    ctx->pc = 0x440428u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 32)));
label_44042c:
    // 0x44042c: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x44042cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
label_440430:
    // 0x440430: 0x24830020  addiu       $v1, $a0, 0x20
    ctx->pc = 0x440430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
label_440434:
    // 0x440434: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x440434u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_440438:
    // 0x440438: 0x78a20030  lq          $v0, 0x30($a1)
    ctx->pc = 0x440438u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 48)));
label_44043c:
    // 0x44043c: 0x7c820020  sq          $v0, 0x20($a0)
    ctx->pc = 0x44043cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 2));
label_440440:
    // 0x440440: 0x24830030  addiu       $v1, $a0, 0x30
    ctx->pc = 0x440440u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
label_440444:
    // 0x440444: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x440444u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_440448:
    // 0x440448: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x440448u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_44044c:
    // 0x44044c: 0x7c820030  sq          $v0, 0x30($a0)
    ctx->pc = 0x44044cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 2));
label_440450:
    // 0x440450: 0x24830040  addiu       $v1, $a0, 0x40
    ctx->pc = 0x440450u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
label_440454:
    // 0x440454: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x440454u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_440458:
    // 0x440458: 0x78c20010  lq          $v0, 0x10($a2)
    ctx->pc = 0x440458u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 16)));
label_44045c:
    // 0x44045c: 0x7c820040  sq          $v0, 0x40($a0)
    ctx->pc = 0x44045cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 64), GPR_VEC(ctx, 2));
label_440460:
    // 0x440460: 0x24830050  addiu       $v1, $a0, 0x50
    ctx->pc = 0x440460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
label_440464:
    // 0x440464: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x440464u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_440468:
    // 0x440468: 0x78c20020  lq          $v0, 0x20($a2)
    ctx->pc = 0x440468u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 32)));
label_44046c:
    // 0x44046c: 0x7c820050  sq          $v0, 0x50($a0)
    ctx->pc = 0x44046cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 80), GPR_VEC(ctx, 2));
label_440470:
    // 0x440470: 0x24830060  addiu       $v1, $a0, 0x60
    ctx->pc = 0x440470u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
label_440474:
    // 0x440474: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x440474u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_440478:
    // 0x440478: 0x78c20030  lq          $v0, 0x30($a2)
    ctx->pc = 0x440478u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 48)));
label_44047c:
    // 0x44047c: 0x7c820060  sq          $v0, 0x60($a0)
    ctx->pc = 0x44047cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 96), GPR_VEC(ctx, 2));
label_440480:
    // 0x440480: 0x24830070  addiu       $v1, $a0, 0x70
    ctx->pc = 0x440480u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
label_440484:
    // 0x440484: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x440484u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_440488:
    // 0x440488: 0x78e20000  lq          $v0, 0x0($a3)
    ctx->pc = 0x440488u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 0)));
label_44048c:
    // 0x44048c: 0x7c820070  sq          $v0, 0x70($a0)
    ctx->pc = 0x44048cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 112), GPR_VEC(ctx, 2));
label_440490:
    // 0x440490: 0x24830080  addiu       $v1, $a0, 0x80
    ctx->pc = 0x440490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
label_440494:
    // 0x440494: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x440494u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_440498:
    // 0x440498: 0x78e20010  lq          $v0, 0x10($a3)
    ctx->pc = 0x440498u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 16)));
label_44049c:
    // 0x44049c: 0x7c820080  sq          $v0, 0x80($a0)
    ctx->pc = 0x44049cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 128), GPR_VEC(ctx, 2));
label_4404a0:
    // 0x4404a0: 0x24830090  addiu       $v1, $a0, 0x90
    ctx->pc = 0x4404a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 144));
label_4404a4:
    // 0x4404a4: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x4404a4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_4404a8:
    // 0x4404a8: 0x78e20020  lq          $v0, 0x20($a3)
    ctx->pc = 0x4404a8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 32)));
label_4404ac:
    // 0x4404ac: 0x7c820090  sq          $v0, 0x90($a0)
    ctx->pc = 0x4404acu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 144), GPR_VEC(ctx, 2));
label_4404b0:
    // 0x4404b0: 0x248300a0  addiu       $v1, $a0, 0xA0
    ctx->pc = 0x4404b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
label_4404b4:
    // 0x4404b4: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x4404b4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_4404b8:
    // 0x4404b8: 0x78e20030  lq          $v0, 0x30($a3)
    ctx->pc = 0x4404b8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 48)));
label_4404bc:
    // 0x4404bc: 0x7c8200a0  sq          $v0, 0xA0($a0)
    ctx->pc = 0x4404bcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 160), GPR_VEC(ctx, 2));
label_4404c0:
    // 0x4404c0: 0x248400b0  addiu       $a0, $a0, 0xB0
    ctx->pc = 0x4404c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 176));
label_4404c4:
    // 0x4404c4: 0xaf84be20  sw          $a0, -0x41E0($gp)
    ctx->pc = 0x4404c4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 4));
label_4404c8:
    // 0x4404c8: 0x25290006  addiu       $t1, $t1, 0x6
    ctx->pc = 0x4404c8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 6));
label_4404cc:
    // 0x4404cc: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x4404ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
label_4404d0:
    // 0x4404d0: 0x150affc3  bne         $t0, $t2, . + 4 + (-0x3D << 2)
label_4404d4:
    if (ctx->pc == 0x4404D4u) {
        ctx->pc = 0x4404D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4404D0u;
        // 0x4404d4: 0x26520006  addiu       $s2, $s2, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4404D8u;
        goto label_4404d8;
    }
    ctx->pc = 0x4404D0u;
    {
        const bool branch_taken_0x4404d0 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 10));
        ctx->pc = 0x4404D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4404D0u;
        // 0x4404d4: 0x26520006  addiu       $s2, $s2, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4404d0) {
            ctx->pc = 0x4403E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4403e0;
        }
    }
    ctx->pc = 0x4404D8u;
label_4404d8:
    // 0x4404d8: 0x8f82be20  lw          $v0, -0x41E0($gp)
    ctx->pc = 0x4404d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
label_4404dc:
    // 0x4404dc: 0x7c4b0000  sq          $t3, 0x0($v0)
    ctx->pc = 0x4404dcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 11));
label_4404e0:
    // 0x4404e0: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x4404e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_4404e4:
    // 0x4404e4: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x4404e4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
label_4404e8:
    // 0x4404e8: 0x1600ff99  bnez        $s0, . + 4 + (-0x67 << 2)
label_4404ec:
    if (ctx->pc == 0x4404ECu) {
        ctx->pc = 0x4404ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4404E8u;
        // 0x4404ec: 0x79cb0000  lq          $t3, 0x0($t6) (Delay Slot)
        SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 14), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4404F0u;
        goto label_4404f0;
    }
    ctx->pc = 0x4404E8u;
    {
        const bool branch_taken_0x4404e8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x4404ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4404E8u;
        // 0x4404ec: 0x79cb0000  lq          $t3, 0x0($t6) (Delay Slot)
        SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 14), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4404e8) {
            ctx->pc = 0x440350u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_440350;
        }
    }
    ctx->pc = 0x4404F0u;
label_4404f0:
    // 0x4404f0: 0xc10f954  jal         func_43E550
label_4404f4:
    if (ctx->pc == 0x4404F4u) {
        ctx->pc = 0x4404F8u;
        goto label_4404f8;
    }
    ctx->pc = 0x4404F0u;
    SET_GPR_U32(ctx, 31, 0x4404F8u);
    ctx->pc = 0x43E550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43E550u, 0x4404F0u, 0x4404F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4404F8u;
label_4404f8:
    // 0x4404f8: 0x1260000d  beqz        $s3, . + 4 + (0xD << 2)
label_4404fc:
    if (ctx->pc == 0x4404FCu) {
        ctx->pc = 0x4404FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4404F8u;
        // 0x4404fc: 0x8f90aeec  lw          $s0, -0x5114($gp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946540)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x440500u;
        goto label_440500;
    }
    ctx->pc = 0x4404F8u;
    {
        const bool branch_taken_0x4404f8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x4404FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4404F8u;
        // 0x4404fc: 0x8f90aeec  lw          $s0, -0x5114($gp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946540)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4404f8) {
            ctx->pc = 0x440530u;
            goto label_440530;
        }
    }
    ctx->pc = 0x440500u;
label_440500:
    // 0x440500: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x440500u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_440504:
    // 0x440504: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x440504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_440508:
    // 0x440508: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x440508u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_44050c:
    // 0x44050c: 0x213182b  sltu        $v1, $s0, $s3
    ctx->pc = 0x44050cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_440510:
    // 0x440510: 0x8e880008  lw          $t0, 0x8($s4)
    ctx->pc = 0x440510u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_440514:
    // 0x440514: 0x263800a  movz        $s0, $s3, $v1
    ctx->pc = 0x440514u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 19));
label_440518:
    // 0x440518: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x440518u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_44051c:
    // 0x44051c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x44051cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_440520:
    // 0x440520: 0x40f809  jalr        $v0
label_440524:
    if (ctx->pc == 0x440524u) {
        ctx->pc = 0x440524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x440520u;
        // 0x440524: 0x2e0482d  daddu       $t1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x440528u;
        goto label_440528;
    }
    ctx->pc = 0x440520u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x440528u);
        ctx->pc = 0x440524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x440520u;
        // 0x440524: 0x2e0482d  daddu       $t1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x440520u, 0x440528u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x440528u;
label_440528:
    // 0x440528: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_44052c:
    if (ctx->pc == 0x44052Cu) {
        ctx->pc = 0x440530u;
        goto label_440530;
    }
    ctx->pc = 0x440528u;
    {
        const bool branch_taken_0x440528 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x440528) {
            ctx->pc = 0x440534u;
            goto label_440534;
        }
    }
    ctx->pc = 0x440530u;
label_440530:
    // 0x440530: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x440530u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_440534:
    // 0x440534: 0x1600ff76  bnez        $s0, . + 4 + (-0x8A << 2)
label_440538:
    if (ctx->pc == 0x440538u) {
        ctx->pc = 0x440538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x440534u;
        // 0x440538: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44053Cu;
        goto label_44053c;
    }
    ctx->pc = 0x440534u;
    {
        const bool branch_taken_0x440534 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x440538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x440534u;
        // 0x440538: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x440534) {
            ctx->pc = 0x440310u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_440310;
        }
    }
    ctx->pc = 0x44053Cu;
label_44053c:
    // 0x44053c: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x44053cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_440540:
    // 0x440540: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x440540u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_440544:
    // 0x440544: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x440544u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_440548:
    // 0x440548: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x440548u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_44054c:
    // 0x44054c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x44054cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_440550:
    // 0x440550: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x440550u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_440554:
    // 0x440554: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x440554u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_440558:
    // 0x440558: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x440558u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_44055c:
    // 0x44055c: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x44055cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_440560:
    // 0x440560: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x440560u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_440564:
    // 0x440564: 0x3e00008  jr          $ra
label_440568:
    if (ctx->pc == 0x440568u) {
        ctx->pc = 0x440568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x440564u;
        // 0x440568: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44056Cu;
        goto label_44056c;
    }
    ctx->pc = 0x440564u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x440568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x440564u;
        // 0x440568: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x440564u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x44056Cu;
label_44056c:
    // 0x44056c: 0x0  nop
    ctx->pc = 0x44056cu;
    // NOP
label_440570:
    // 0x440570: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x440570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_440574:
    // 0x440574: 0x2503fffe  addiu       $v1, $t0, -0x2
    ctx->pc = 0x440574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967294));
label_440578:
    // 0x440578: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x440578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_44057c:
    // 0x44057c: 0x2d080003  sltiu       $t0, $t0, 0x3
    ctx->pc = 0x44057cu;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_440580:
    // 0x440580: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x440580u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_440584:
    // 0x440584: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x440584u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_440588:
    // 0x440588: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x440588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_44058c:
    // 0x44058c: 0x68a00a  movz        $s4, $v1, $t0
    ctx->pc = 0x44058cu;
    if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 3));
label_440590:
    // 0x440590: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x440590u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_440594:
    // 0x440594: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x440594u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_440598:
    // 0x440598: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x440598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_44059c:
    // 0x44059c: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x44059cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_4405a0:
    // 0x4405a0: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x4405a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
label_4405a4:
    // 0x4405a4: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x4405a4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4405a8:
    // 0x4405a8: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x4405a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_4405ac:
    // 0x4405ac: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x4405acu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4405b0:
    // 0x4405b0: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x4405b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
label_4405b4:
    // 0x4405b4: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x4405b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
label_4405b8:
    // 0x4405b8: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x4405b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
label_4405bc:
    // 0x4405bc: 0x10000082  b           . + 4 + (0x82 << 2)
label_4405c0:
    if (ctx->pc == 0x4405C0u) {
        ctx->pc = 0x4405C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4405BCu;
        // 0x4405c0: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4405C4u;
        goto label_4405c4;
    }
    ctx->pc = 0x4405BCu;
    {
        const bool branch_taken_0x4405bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4405C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4405BCu;
        // 0x4405c0: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4405bc) {
            ctx->pc = 0x4407C8u;
            goto label_4407c8;
        }
    }
    ctx->pc = 0x4405C4u;
label_4405c4:
    // 0x4405c4: 0x0  nop
    ctx->pc = 0x4405c4u;
    // NOP
label_4405c8:
    // 0x4405c8: 0x3c0e7c00  lui         $t6, 0x7C00
    ctx->pc = 0x4405c8u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)31744 << 16));
label_4405cc:
    // 0x4405cc: 0x2442d620  addiu       $v0, $v0, -0x29E0
    ctx->pc = 0x4405ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956576));
label_4405d0:
    // 0x4405d0: 0x3c0dffff  lui         $t5, 0xFFFF
    ctx->pc = 0x4405d0u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)65535 << 16));
label_4405d4:
    // 0x4405d4: 0x784c0000  lq          $t4, 0x0($v0)
    ctx->pc = 0x4405d4u;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_4405d8:
    // 0x4405d8: 0x290a023  subu        $s4, $s4, $s0
    ctx->pc = 0x4405d8u;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
label_4405dc:
    // 0x4405dc: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x4405dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_4405e0:
    // 0x4405e0: 0x241e0010  addiu       $fp, $zero, 0x10
    ctx->pc = 0x4405e0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_4405e4:
    // 0x4405e4: 0x2417000c  addiu       $s7, $zero, 0xC
    ctx->pc = 0x4405e4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_4405e8:
    // 0x4405e8: 0x3c161000  lui         $s6, 0x1000
    ctx->pc = 0x4405e8u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)4096 << 16));
label_4405ec:
    // 0x4405ec: 0x3c190400  lui         $t9, 0x400
    ctx->pc = 0x4405ecu;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)1024 << 16));
label_4405f0:
    // 0x4405f0: 0x3c180100  lui         $t8, 0x100
    ctx->pc = 0x4405f0u;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)256 << 16));
label_4405f4:
    // 0x4405f4: 0x37180404  ori         $t8, $t8, 0x404
    ctx->pc = 0x4405f4u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) | (uint64_t)(uint16_t)1028);
label_4405f8:
    // 0x4405f8: 0x18c03c  dsll32      $t8, $t8, 0
    ctx->pc = 0x4405f8u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) << (32 + 0));
label_4405fc:
    // 0x4405fc: 0x35ce8000  ori         $t6, $t6, 0x8000
    ctx->pc = 0x4405fcu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)32768);
label_440600:
    // 0x440600: 0x35adffff  ori         $t5, $t5, 0xFFFF
    ctx->pc = 0x440600u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)65535);
label_440604:
    // 0x440604: 0x244fd580  addiu       $t7, $v0, -0x2A80
    ctx->pc = 0x440604u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956416));
label_440608:
    // 0x440608: 0x2e020011  sltiu       $v0, $s0, 0x11
    ctx->pc = 0x440608u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
label_44060c:
    // 0x44060c: 0x3c0482d  daddu       $t1, $fp, $zero
    ctx->pc = 0x44060cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_440610:
    // 0x440610: 0x202480b  movn        $t1, $s0, $v0
    ctx->pc = 0x440610u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 16));
label_440614:
    // 0x440614: 0x1372018  mult        $a0, $t1, $s7
    ctx->pc = 0x440614u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_440618:
    // 0x440618: 0x1391825  or          $v1, $t1, $t9
    ctx->pc = 0x440618u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) | GPR_U64(ctx, 25));
label_44061c:
    // 0x44061c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x44061cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_440620:
    // 0x440620: 0x2098023  subu        $s0, $s0, $t1
    ctx->pc = 0x440620u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 9)));
label_440624:
    // 0x440624: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x440624u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_440628:
    // 0x440628: 0x782825  or          $a1, $v1, $t8
    ctx->pc = 0x440628u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 24));
label_44062c:
    // 0x44062c: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x44062cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
label_440630:
    // 0x440630: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x440630u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_440634:
    // 0x440634: 0x64420002  daddiu      $v0, $v0, 0x2
    ctx->pc = 0x440634u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)2);
label_440638:
    // 0x440638: 0x561825  or          $v1, $v0, $s6
    ctx->pc = 0x440638u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 22));
label_44063c:
    // 0x44063c: 0x70a31b89  pcpyld      $v1, $a1, $v1
    ctx->pc = 0x44063cu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 5), GPR_VEC(ctx, 3)));
label_440640:
    // 0x440640: 0x8f82be20  lw          $v0, -0x41E0($gp)
    ctx->pc = 0x440640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
label_440644:
    // 0x440644: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x440644u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_440648:
    // 0x440648: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x440648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_44064c:
    // 0x44064c: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x44064cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
label_440650:
    // 0x440650: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x440650u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
label_440654:
    // 0x440654: 0x8e2025  or          $a0, $a0, $t6
    ctx->pc = 0x440654u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 14));
label_440658:
    // 0x440658: 0x3c03c000  lui         $v1, 0xC000
    ctx->pc = 0x440658u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49152 << 16));
label_44065c:
    // 0x44065c: 0x3463c000  ori         $v1, $v1, 0xC000
    ctx->pc = 0x44065cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49152);
label_440660:
    // 0x440660: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x440660u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_440664:
    // 0x440664: 0x34632000  ori         $v1, $v1, 0x2000
    ctx->pc = 0x440664u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
label_440668:
    // 0x440668: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x440668u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_44066c:
    // 0x44066c: 0x4283c  dsll32      $a1, $a0, 0
    ctx->pc = 0x44066cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
label_440670:
    // 0x440670: 0x70a31b89  pcpyld      $v1, $a1, $v1
    ctx->pc = 0x440670u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 5), GPR_VEC(ctx, 3)));
label_440674:
    // 0x440674: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x440674u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_440678:
    // 0x440678: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x440678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_44067c:
    // 0x44067c: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x44067cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
label_440680:
    // 0x440680: 0x112d0049  beq         $t1, $t5, . + 4 + (0x49 << 2)
label_440684:
    if (ctx->pc == 0x440684u) {
        ctx->pc = 0x440684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x440680u;
        // 0x440684: 0xaf82be20  sw          $v0, -0x41E0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x440688u;
        goto label_440688;
    }
    ctx->pc = 0x440680u;
    {
        const bool branch_taken_0x440680 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 13));
        ctx->pc = 0x440684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x440680u;
        // 0x440684: 0xaf82be20  sw          $v0, -0x41E0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x440680) {
            ctx->pc = 0x4407A8u;
            goto label_4407a8;
        }
    }
    ctx->pc = 0x440688u;
label_440688:
    // 0x440688: 0x3c0bffff  lui         $t3, 0xFFFF
    ctx->pc = 0x440688u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)65535 << 16));
label_44068c:
    // 0x44068c: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x44068cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_440690:
    // 0x440690: 0x356bffff  ori         $t3, $t3, 0xFFFF
    ctx->pc = 0x440690u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)65535);
label_440694:
    // 0x440694: 0x0  nop
    ctx->pc = 0x440694u;
    // NOP
label_440698:
    // 0x440698: 0x3a680003  xori        $t0, $s3, 0x3
    ctx->pc = 0x440698u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)3);
label_44069c:
    // 0x44069c: 0x131040  sll         $v0, $s3, 1
    ctx->pc = 0x44069cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
label_4406a0:
    // 0x4406a0: 0x81840  sll         $v1, $t0, 1
    ctx->pc = 0x4406a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
label_4406a4:
    // 0x4406a4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x4406a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_4406a8:
    // 0x4406a8: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x4406a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_4406ac:
    // 0x4406ac: 0x94460000  lhu         $a2, 0x0($v0)
    ctx->pc = 0x4406acu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_4406b0:
    // 0x4406b0: 0x94670000  lhu         $a3, 0x0($v1)
    ctx->pc = 0x4406b0u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_4406b4:
    // 0x4406b4: 0x95450000  lhu         $a1, 0x0($t2)
    ctx->pc = 0x4406b4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
label_4406b8:
    // 0x4406b8: 0x63180  sll         $a2, $a2, 6
    ctx->pc = 0x4406b8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
label_4406bc:
    // 0x4406bc: 0x73980  sll         $a3, $a3, 6
    ctx->pc = 0x4406bcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 6));
label_4406c0:
    // 0x4406c0: 0x2463021  addu        $a2, $s2, $a2
    ctx->pc = 0x4406c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
label_4406c4:
    // 0x4406c4: 0x52980  sll         $a1, $a1, 6
    ctx->pc = 0x4406c4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
label_4406c8:
    // 0x4406c8: 0x2473821  addu        $a3, $s2, $a3
    ctx->pc = 0x4406c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 7)));
label_4406cc:
    // 0x4406cc: 0x2452821  addu        $a1, $s2, $a1
    ctx->pc = 0x4406ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
label_4406d0:
    // 0x4406d0: 0x8f84be20  lw          $a0, -0x41E0($gp)
    ctx->pc = 0x4406d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
label_4406d4:
    // 0x4406d4: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x4406d4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_4406d8:
    // 0x4406d8: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x4406d8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
label_4406dc:
    // 0x4406dc: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x4406dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_4406e0:
    // 0x4406e0: 0xaf84be20  sw          $a0, -0x41E0($gp)
    ctx->pc = 0x4406e0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 4));
label_4406e4:
    // 0x4406e4: 0x78a20010  lq          $v0, 0x10($a1)
    ctx->pc = 0x4406e4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 16)));
label_4406e8:
    // 0x4406e8: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x4406e8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
label_4406ec:
    // 0x4406ec: 0x24830010  addiu       $v1, $a0, 0x10
    ctx->pc = 0x4406ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_4406f0:
    // 0x4406f0: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x4406f0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_4406f4:
    // 0x4406f4: 0x78a20020  lq          $v0, 0x20($a1)
    ctx->pc = 0x4406f4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 32)));
label_4406f8:
    // 0x4406f8: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x4406f8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
label_4406fc:
    // 0x4406fc: 0x24830020  addiu       $v1, $a0, 0x20
    ctx->pc = 0x4406fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
label_440700:
    // 0x440700: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x440700u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_440704:
    // 0x440704: 0x78a20030  lq          $v0, 0x30($a1)
    ctx->pc = 0x440704u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 48)));
label_440708:
    // 0x440708: 0x7c820020  sq          $v0, 0x20($a0)
    ctx->pc = 0x440708u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 2));
label_44070c:
    // 0x44070c: 0x24830030  addiu       $v1, $a0, 0x30
    ctx->pc = 0x44070cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
label_440710:
    // 0x440710: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x440710u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_440714:
    // 0x440714: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x440714u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_440718:
    // 0x440718: 0x7c820030  sq          $v0, 0x30($a0)
    ctx->pc = 0x440718u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 2));
label_44071c:
    // 0x44071c: 0x24830040  addiu       $v1, $a0, 0x40
    ctx->pc = 0x44071cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
label_440720:
    // 0x440720: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x440720u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_440724:
    // 0x440724: 0x78c20010  lq          $v0, 0x10($a2)
    ctx->pc = 0x440724u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 16)));
label_440728:
    // 0x440728: 0x7c820040  sq          $v0, 0x40($a0)
    ctx->pc = 0x440728u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 64), GPR_VEC(ctx, 2));
label_44072c:
    // 0x44072c: 0x24830050  addiu       $v1, $a0, 0x50
    ctx->pc = 0x44072cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
label_440730:
    // 0x440730: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x440730u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_440734:
    // 0x440734: 0x78c20020  lq          $v0, 0x20($a2)
    ctx->pc = 0x440734u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 32)));
label_440738:
    // 0x440738: 0x7c820050  sq          $v0, 0x50($a0)
    ctx->pc = 0x440738u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 80), GPR_VEC(ctx, 2));
label_44073c:
    // 0x44073c: 0x24830060  addiu       $v1, $a0, 0x60
    ctx->pc = 0x44073cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
label_440740:
    // 0x440740: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x440740u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_440744:
    // 0x440744: 0x78c20030  lq          $v0, 0x30($a2)
    ctx->pc = 0x440744u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 48)));
label_440748:
    // 0x440748: 0x7c820060  sq          $v0, 0x60($a0)
    ctx->pc = 0x440748u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 96), GPR_VEC(ctx, 2));
label_44074c:
    // 0x44074c: 0x24830070  addiu       $v1, $a0, 0x70
    ctx->pc = 0x44074cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
label_440750:
    // 0x440750: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x440750u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_440754:
    // 0x440754: 0x78e20000  lq          $v0, 0x0($a3)
    ctx->pc = 0x440754u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 0)));
label_440758:
    // 0x440758: 0x7c820070  sq          $v0, 0x70($a0)
    ctx->pc = 0x440758u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 112), GPR_VEC(ctx, 2));
label_44075c:
    // 0x44075c: 0x24830080  addiu       $v1, $a0, 0x80
    ctx->pc = 0x44075cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
label_440760:
    // 0x440760: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x440760u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_440764:
    // 0x440764: 0x78e20010  lq          $v0, 0x10($a3)
    ctx->pc = 0x440764u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 16)));
label_440768:
    // 0x440768: 0x7c820080  sq          $v0, 0x80($a0)
    ctx->pc = 0x440768u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 128), GPR_VEC(ctx, 2));
label_44076c:
    // 0x44076c: 0x24830090  addiu       $v1, $a0, 0x90
    ctx->pc = 0x44076cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 144));
label_440770:
    // 0x440770: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x440770u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_440774:
    // 0x440774: 0x78e20020  lq          $v0, 0x20($a3)
    ctx->pc = 0x440774u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 32)));
label_440778:
    // 0x440778: 0x7c820090  sq          $v0, 0x90($a0)
    ctx->pc = 0x440778u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 144), GPR_VEC(ctx, 2));
label_44077c:
    // 0x44077c: 0x248300a0  addiu       $v1, $a0, 0xA0
    ctx->pc = 0x44077cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
label_440780:
    // 0x440780: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x440780u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_440784:
    // 0x440784: 0x78e20030  lq          $v0, 0x30($a3)
    ctx->pc = 0x440784u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 48)));
label_440788:
    // 0x440788: 0x7c8200a0  sq          $v0, 0xA0($a0)
    ctx->pc = 0x440788u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 160), GPR_VEC(ctx, 2));
label_44078c:
    // 0x44078c: 0x248400b0  addiu       $a0, $a0, 0xB0
    ctx->pc = 0x44078cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 176));
label_440790:
    // 0x440790: 0xaf84be20  sw          $a0, -0x41E0($gp)
    ctx->pc = 0x440790u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 4));
label_440794:
    // 0x440794: 0x254a0002  addiu       $t2, $t2, 0x2
    ctx->pc = 0x440794u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 2));
label_440798:
    // 0x440798: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x440798u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_44079c:
    // 0x44079c: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x44079cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
label_4407a0:
    // 0x4407a0: 0x152bffbd  bne         $t1, $t3, . + 4 + (-0x43 << 2)
label_4407a4:
    if (ctx->pc == 0x4407A4u) {
        ctx->pc = 0x4407A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4407A0u;
        // 0x4407a4: 0x26310002  addiu       $s1, $s1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4407A8u;
        goto label_4407a8;
    }
    ctx->pc = 0x4407A0u;
    {
        const bool branch_taken_0x4407a0 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 11));
        ctx->pc = 0x4407A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4407A0u;
        // 0x4407a4: 0x26310002  addiu       $s1, $s1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4407a0) {
            ctx->pc = 0x440698u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_440698;
        }
    }
    ctx->pc = 0x4407A8u;
label_4407a8:
    // 0x4407a8: 0x8f82be20  lw          $v0, -0x41E0($gp)
    ctx->pc = 0x4407a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
label_4407ac:
    // 0x4407ac: 0x7c4c0000  sq          $t4, 0x0($v0)
    ctx->pc = 0x4407acu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 12));
label_4407b0:
    // 0x4407b0: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x4407b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_4407b4:
    // 0x4407b4: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x4407b4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
label_4407b8:
    // 0x4407b8: 0x1600ff93  bnez        $s0, . + 4 + (-0x6D << 2)
label_4407bc:
    if (ctx->pc == 0x4407BCu) {
        ctx->pc = 0x4407BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4407B8u;
        // 0x4407bc: 0x79ec0000  lq          $t4, 0x0($t7) (Delay Slot)
        SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 15), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4407C0u;
        goto label_4407c0;
    }
    ctx->pc = 0x4407B8u;
    {
        const bool branch_taken_0x4407b8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x4407BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4407B8u;
        // 0x4407bc: 0x79ec0000  lq          $t4, 0x0($t7) (Delay Slot)
        SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 15), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4407b8) {
            ctx->pc = 0x440608u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_440608;
        }
    }
    ctx->pc = 0x4407C0u;
label_4407c0:
    // 0x4407c0: 0xc10f954  jal         func_43E550
label_4407c4:
    if (ctx->pc == 0x4407C4u) {
        ctx->pc = 0x4407C8u;
        goto label_4407c8;
    }
    ctx->pc = 0x4407C0u;
    SET_GPR_U32(ctx, 31, 0x4407C8u);
    ctx->pc = 0x43E550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43E550u, 0x4407C0u, 0x4407C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4407C8u;
label_4407c8:
    // 0x4407c8: 0x1280000d  beqz        $s4, . + 4 + (0xD << 2)
label_4407cc:
    if (ctx->pc == 0x4407CCu) {
        ctx->pc = 0x4407CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4407C8u;
        // 0x4407cc: 0x8f90aeec  lw          $s0, -0x5114($gp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946540)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4407D0u;
        goto label_4407d0;
    }
    ctx->pc = 0x4407C8u;
    {
        const bool branch_taken_0x4407c8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x4407CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4407C8u;
        // 0x4407cc: 0x8f90aeec  lw          $s0, -0x5114($gp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946540)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4407c8) {
            ctx->pc = 0x440800u;
            goto label_440800;
        }
    }
    ctx->pc = 0x4407D0u;
label_4407d0:
    // 0x4407d0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x4407d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4407d4:
    // 0x4407d4: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x4407d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_4407d8:
    // 0x4407d8: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x4407d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_4407dc:
    // 0x4407dc: 0x214182b  sltu        $v1, $s0, $s4
    ctx->pc = 0x4407dcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
label_4407e0:
    // 0x4407e0: 0x8ea80008  lw          $t0, 0x8($s5)
    ctx->pc = 0x4407e0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_4407e4:
    // 0x4407e4: 0x283800a  movz        $s0, $s4, $v1
    ctx->pc = 0x4407e4u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 20));
label_4407e8:
    // 0x4407e8: 0x8fa90000  lw          $t1, 0x0($sp)
    ctx->pc = 0x4407e8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_4407ec:
    // 0x4407ec: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x4407ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_4407f0:
    // 0x4407f0: 0x40f809  jalr        $v0
label_4407f4:
    if (ctx->pc == 0x4407F4u) {
        ctx->pc = 0x4407F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4407F0u;
        // 0x4407f4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4407F8u;
        goto label_4407f8;
    }
    ctx->pc = 0x4407F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4407F8u);
        ctx->pc = 0x4407F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4407F0u;
        // 0x4407f4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4407F0u, 0x4407F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4407F8u;
label_4407f8:
    // 0x4407f8: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_4407fc:
    if (ctx->pc == 0x4407FCu) {
        ctx->pc = 0x440800u;
        goto label_440800;
    }
    ctx->pc = 0x4407F8u;
    {
        const bool branch_taken_0x4407f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4407f8) {
            ctx->pc = 0x440804u;
            goto label_440804;
        }
    }
    ctx->pc = 0x440800u;
label_440800:
    // 0x440800: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x440800u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_440804:
    // 0x440804: 0x1600ff70  bnez        $s0, . + 4 + (-0x90 << 2)
label_440808:
    if (ctx->pc == 0x440808u) {
        ctx->pc = 0x440808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x440804u;
        // 0x440808: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44080Cu;
        goto label_44080c;
    }
    ctx->pc = 0x440804u;
    {
        const bool branch_taken_0x440804 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x440808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x440804u;
        // 0x440808: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x440804) {
            ctx->pc = 0x4405C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4405c8;
        }
    }
    ctx->pc = 0x44080Cu;
label_44080c:
    // 0x44080c: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x44080cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_440810:
    // 0x440810: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x440810u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_440814:
    // 0x440814: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x440814u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_440818:
    // 0x440818: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x440818u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_44081c:
    // 0x44081c: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x44081cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_440820:
    // 0x440820: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x440820u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_440824:
    // 0x440824: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x440824u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_440828:
    // 0x440828: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x440828u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_44082c:
    // 0x44082c: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x44082cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_440830:
    // 0x440830: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x440830u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_440834:
    // 0x440834: 0x3e00008  jr          $ra
label_440838:
    if (ctx->pc == 0x440838u) {
        ctx->pc = 0x440838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x440834u;
        // 0x440838: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44083Cu;
        goto label_44083c;
    }
    ctx->pc = 0x440834u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x440838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x440834u;
        // 0x440838: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x440834u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x44083Cu;
label_44083c:
    // 0x44083c: 0x0  nop
    ctx->pc = 0x44083cu;
    // NOP
label_440840:
    // 0x440840: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x440840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_440844:
    // 0x440844: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x440844u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_440848:
    // 0x440848: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x440848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_44084c:
    // 0x44084c: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x44084cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_440850:
    // 0x440850: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x440850u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_440854:
    // 0x440854: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x440854u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_440858:
    // 0x440858: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x440858u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_44085c:
    // 0x44085c: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x44085cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_440860:
    // 0x440860: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x440860u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_440864:
    // 0x440864: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x440864u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
label_440868:
    // 0x440868: 0x2506fffe  addiu       $a2, $t0, -0x2
    ctx->pc = 0x440868u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967294));
label_44086c:
    // 0x44086c: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x44086cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
label_440870:
    // 0x440870: 0x2d080003  sltiu       $t0, $t0, 0x3
    ctx->pc = 0x440870u;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_440874:
    // 0x440874: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x440874u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_440878:
    // 0x440878: 0xc8980a  movz        $s3, $a2, $t0
    ctx->pc = 0x440878u;
    if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 6));
label_44087c:
    // 0x44087c: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x44087cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
label_440880:
    // 0x440880: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x440880u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_440884:
    // 0x440884: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x440884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_440888:
    // 0x440888: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x440888u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_44088c:
    // 0x44088c: 0x3c1e005e  lui         $fp, 0x5E
    ctx->pc = 0x44088cu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)94 << 16));
label_440890:
    // 0x440890: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x440890u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_440894:
    // 0x440894: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x440894u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_440898:
    // 0x440898: 0x10000079  b           . + 4 + (0x79 << 2)
label_44089c:
    if (ctx->pc == 0x44089Cu) {
        ctx->pc = 0x44089Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x440898u;
        // 0x44089c: 0x2828821  addu        $s1, $s4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4408A0u;
        goto label_4408a0;
    }
    ctx->pc = 0x440898u;
    {
        const bool branch_taken_0x440898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44089Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x440898u;
        // 0x44089c: 0x2828821  addu        $s1, $s4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x440898) {
            ctx->pc = 0x440A80u;
            goto label_440a80;
        }
    }
    ctx->pc = 0x4408A0u;
label_4408a0:
    // 0x4408a0: 0x3c0c7c00  lui         $t4, 0x7C00
    ctx->pc = 0x4408a0u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)31744 << 16));
label_4408a4:
    // 0x4408a4: 0x2442d620  addiu       $v0, $v0, -0x29E0
    ctx->pc = 0x4408a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956576));
label_4408a8:
    // 0x4408a8: 0x3c0bffff  lui         $t3, 0xFFFF
    ctx->pc = 0x4408a8u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)65535 << 16));
label_4408ac:
    // 0x4408ac: 0x784a0000  lq          $t2, 0x0($v0)
    ctx->pc = 0x4408acu;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_4408b0:
    // 0x4408b0: 0x2709823  subu        $s3, $s3, $s0
    ctx->pc = 0x4408b0u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_4408b4:
    // 0x4408b4: 0x24160010  addiu       $s6, $zero, 0x10
    ctx->pc = 0x4408b4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_4408b8:
    // 0x4408b8: 0x2419000c  addiu       $t9, $zero, 0xC
    ctx->pc = 0x4408b8u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_4408bc:
    // 0x4408bc: 0x3c181000  lui         $t8, 0x1000
    ctx->pc = 0x4408bcu;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)4096 << 16));
label_4408c0:
    // 0x4408c0: 0x3c0f0400  lui         $t7, 0x400
    ctx->pc = 0x4408c0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)1024 << 16));
label_4408c4:
    // 0x4408c4: 0x3c0e0100  lui         $t6, 0x100
    ctx->pc = 0x4408c4u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)256 << 16));
label_4408c8:
    // 0x4408c8: 0x35ce0404  ori         $t6, $t6, 0x404
    ctx->pc = 0x4408c8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)1028);
label_4408cc:
    // 0x4408cc: 0xe703c  dsll32      $t6, $t6, 0
    ctx->pc = 0x4408ccu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << (32 + 0));
label_4408d0:
    // 0x4408d0: 0x358c8000  ori         $t4, $t4, 0x8000
    ctx->pc = 0x4408d0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)32768);
label_4408d4:
    // 0x4408d4: 0x356bffff  ori         $t3, $t3, 0xFFFF
    ctx->pc = 0x4408d4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)65535);
label_4408d8:
    // 0x4408d8: 0x27cdd580  addiu       $t5, $fp, -0x2A80
    ctx->pc = 0x4408d8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 30), 4294956416));
label_4408dc:
    // 0x4408dc: 0x0  nop
    ctx->pc = 0x4408dcu;
    // NOP
label_4408e0:
    // 0x4408e0: 0x2e020011  sltiu       $v0, $s0, 0x11
    ctx->pc = 0x4408e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
label_4408e4:
    // 0x4408e4: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x4408e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_4408e8:
    // 0x4408e8: 0x202380b  movn        $a3, $s0, $v0
    ctx->pc = 0x4408e8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 16));
label_4408ec:
    // 0x4408ec: 0xf92018  mult        $a0, $a3, $t9
    ctx->pc = 0x4408ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 25); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_4408f0:
    // 0x4408f0: 0xef1825  or          $v1, $a3, $t7
    ctx->pc = 0x4408f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | GPR_U64(ctx, 15));
label_4408f4:
    // 0x4408f4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x4408f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_4408f8:
    // 0x4408f8: 0x2078023  subu        $s0, $s0, $a3
    ctx->pc = 0x4408f8u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
label_4408fc:
    // 0x4408fc: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x4408fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_440900:
    // 0x440900: 0x6e2825  or          $a1, $v1, $t6
    ctx->pc = 0x440900u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 14));
label_440904:
    // 0x440904: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x440904u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
label_440908:
    // 0x440908: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x440908u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_44090c:
    // 0x44090c: 0x64420002  daddiu      $v0, $v0, 0x2
    ctx->pc = 0x44090cu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)2);
label_440910:
    // 0x440910: 0x581825  or          $v1, $v0, $t8
    ctx->pc = 0x440910u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 24));
label_440914:
    // 0x440914: 0x70a31b89  pcpyld      $v1, $a1, $v1
    ctx->pc = 0x440914u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 5), GPR_VEC(ctx, 3)));
label_440918:
    // 0x440918: 0x8f82be20  lw          $v0, -0x41E0($gp)
    ctx->pc = 0x440918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
label_44091c:
    // 0x44091c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x44091cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_440920:
    // 0x440920: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x440920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_440924:
    // 0x440924: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x440924u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
label_440928:
    // 0x440928: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x440928u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
label_44092c:
    // 0x44092c: 0x8c2025  or          $a0, $a0, $t4
    ctx->pc = 0x44092cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 12));
label_440930:
    // 0x440930: 0x3c03c000  lui         $v1, 0xC000
    ctx->pc = 0x440930u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49152 << 16));
label_440934:
    // 0x440934: 0x3463c000  ori         $v1, $v1, 0xC000
    ctx->pc = 0x440934u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49152);
label_440938:
    // 0x440938: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x440938u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_44093c:
    // 0x44093c: 0x34632000  ori         $v1, $v1, 0x2000
    ctx->pc = 0x44093cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
label_440940:
    // 0x440940: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x440940u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_440944:
    // 0x440944: 0x4283c  dsll32      $a1, $a0, 0
    ctx->pc = 0x440944u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
label_440948:
    // 0x440948: 0x70a31b89  pcpyld      $v1, $a1, $v1
    ctx->pc = 0x440948u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 5), GPR_VEC(ctx, 3)));
label_44094c:
    // 0x44094c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x44094cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_440950:
    // 0x440950: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x440950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_440954:
    // 0x440954: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x440954u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
label_440958:
    // 0x440958: 0x10eb0041  beq         $a3, $t3, . + 4 + (0x41 << 2)
label_44095c:
    if (ctx->pc == 0x44095Cu) {
        ctx->pc = 0x44095Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x440958u;
        // 0x44095c: 0xaf82be20  sw          $v0, -0x41E0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x440960u;
        goto label_440960;
    }
    ctx->pc = 0x440958u;
    {
        const bool branch_taken_0x440958 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 11));
        ctx->pc = 0x44095Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x440958u;
        // 0x44095c: 0xaf82be20  sw          $v0, -0x41E0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x440958) {
            ctx->pc = 0x440A60u;
            goto label_440a60;
        }
    }
    ctx->pc = 0x440960u;
label_440960:
    // 0x440960: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x440960u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
label_440964:
    // 0x440964: 0x26480004  addiu       $t0, $s2, 0x4
    ctx->pc = 0x440964u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_440968:
    // 0x440968: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x440968u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
label_44096c:
    // 0x44096c: 0x0  nop
    ctx->pc = 0x44096cu;
    // NOP
label_440970:
    // 0x440970: 0x9505fffe  lhu         $a1, -0x2($t0)
    ctx->pc = 0x440970u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 4294967294)));
label_440974:
    // 0x440974: 0x95060000  lhu         $a2, 0x0($t0)
    ctx->pc = 0x440974u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
label_440978:
    // 0x440978: 0x52980  sll         $a1, $a1, 6
    ctx->pc = 0x440978u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
label_44097c:
    // 0x44097c: 0x63180  sll         $a2, $a2, 6
    ctx->pc = 0x44097cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
label_440980:
    // 0x440980: 0x2852821  addu        $a1, $s4, $a1
    ctx->pc = 0x440980u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
label_440984:
    // 0x440984: 0x2863021  addu        $a2, $s4, $a2
    ctx->pc = 0x440984u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 6)));
label_440988:
    // 0x440988: 0x8f84be20  lw          $a0, -0x41E0($gp)
    ctx->pc = 0x440988u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
label_44098c:
    // 0x44098c: 0x7a220000  lq          $v0, 0x0($s1)
    ctx->pc = 0x44098cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_440990:
    // 0x440990: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x440990u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
label_440994:
    // 0x440994: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x440994u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_440998:
    // 0x440998: 0xaf84be20  sw          $a0, -0x41E0($gp)
    ctx->pc = 0x440998u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 4));
label_44099c:
    // 0x44099c: 0x7a220010  lq          $v0, 0x10($s1)
    ctx->pc = 0x44099cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 16)));
label_4409a0:
    // 0x4409a0: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x4409a0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
label_4409a4:
    // 0x4409a4: 0x24830010  addiu       $v1, $a0, 0x10
    ctx->pc = 0x4409a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_4409a8:
    // 0x4409a8: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x4409a8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_4409ac:
    // 0x4409ac: 0x7a220020  lq          $v0, 0x20($s1)
    ctx->pc = 0x4409acu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 32)));
label_4409b0:
    // 0x4409b0: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x4409b0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
label_4409b4:
    // 0x4409b4: 0x24830020  addiu       $v1, $a0, 0x20
    ctx->pc = 0x4409b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
label_4409b8:
    // 0x4409b8: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x4409b8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_4409bc:
    // 0x4409bc: 0x7a220030  lq          $v0, 0x30($s1)
    ctx->pc = 0x4409bcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 48)));
label_4409c0:
    // 0x4409c0: 0x7c820020  sq          $v0, 0x20($a0)
    ctx->pc = 0x4409c0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 2));
label_4409c4:
    // 0x4409c4: 0x24830030  addiu       $v1, $a0, 0x30
    ctx->pc = 0x4409c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
label_4409c8:
    // 0x4409c8: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x4409c8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_4409cc:
    // 0x4409cc: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x4409ccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_4409d0:
    // 0x4409d0: 0x7c820030  sq          $v0, 0x30($a0)
    ctx->pc = 0x4409d0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 2));
label_4409d4:
    // 0x4409d4: 0x24830040  addiu       $v1, $a0, 0x40
    ctx->pc = 0x4409d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
label_4409d8:
    // 0x4409d8: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x4409d8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_4409dc:
    // 0x4409dc: 0x78a20010  lq          $v0, 0x10($a1)
    ctx->pc = 0x4409dcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 16)));
label_4409e0:
    // 0x4409e0: 0x7c820040  sq          $v0, 0x40($a0)
    ctx->pc = 0x4409e0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 64), GPR_VEC(ctx, 2));
label_4409e4:
    // 0x4409e4: 0x24830050  addiu       $v1, $a0, 0x50
    ctx->pc = 0x4409e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
label_4409e8:
    // 0x4409e8: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x4409e8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_4409ec:
    // 0x4409ec: 0x78a20020  lq          $v0, 0x20($a1)
    ctx->pc = 0x4409ecu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 32)));
label_4409f0:
    // 0x4409f0: 0x7c820050  sq          $v0, 0x50($a0)
    ctx->pc = 0x4409f0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 80), GPR_VEC(ctx, 2));
label_4409f4:
    // 0x4409f4: 0x24830060  addiu       $v1, $a0, 0x60
    ctx->pc = 0x4409f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
label_4409f8:
    // 0x4409f8: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x4409f8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_4409fc:
    // 0x4409fc: 0x78a20030  lq          $v0, 0x30($a1)
    ctx->pc = 0x4409fcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 48)));
label_440a00:
    // 0x440a00: 0x7c820060  sq          $v0, 0x60($a0)
    ctx->pc = 0x440a00u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 96), GPR_VEC(ctx, 2));
label_440a04:
    // 0x440a04: 0x24830070  addiu       $v1, $a0, 0x70
    ctx->pc = 0x440a04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
label_440a08:
    // 0x440a08: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x440a08u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_440a0c:
    // 0x440a0c: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x440a0cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_440a10:
    // 0x440a10: 0x7c820070  sq          $v0, 0x70($a0)
    ctx->pc = 0x440a10u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 112), GPR_VEC(ctx, 2));
label_440a14:
    // 0x440a14: 0x24830080  addiu       $v1, $a0, 0x80
    ctx->pc = 0x440a14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
label_440a18:
    // 0x440a18: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x440a18u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_440a1c:
    // 0x440a1c: 0x78c20010  lq          $v0, 0x10($a2)
    ctx->pc = 0x440a1cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 16)));
label_440a20:
    // 0x440a20: 0x7c820080  sq          $v0, 0x80($a0)
    ctx->pc = 0x440a20u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 128), GPR_VEC(ctx, 2));
label_440a24:
    // 0x440a24: 0x24830090  addiu       $v1, $a0, 0x90
    ctx->pc = 0x440a24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 144));
label_440a28:
    // 0x440a28: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x440a28u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_440a2c:
    // 0x440a2c: 0x78c20020  lq          $v0, 0x20($a2)
    ctx->pc = 0x440a2cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 32)));
label_440a30:
    // 0x440a30: 0x7c820090  sq          $v0, 0x90($a0)
    ctx->pc = 0x440a30u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 144), GPR_VEC(ctx, 2));
label_440a34:
    // 0x440a34: 0x248300a0  addiu       $v1, $a0, 0xA0
    ctx->pc = 0x440a34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
label_440a38:
    // 0x440a38: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x440a38u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_440a3c:
    // 0x440a3c: 0x78c20030  lq          $v0, 0x30($a2)
    ctx->pc = 0x440a3cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 48)));
label_440a40:
    // 0x440a40: 0x7c8200a0  sq          $v0, 0xA0($a0)
    ctx->pc = 0x440a40u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 160), GPR_VEC(ctx, 2));
label_440a44:
    // 0x440a44: 0x248400b0  addiu       $a0, $a0, 0xB0
    ctx->pc = 0x440a44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 176));
label_440a48:
    // 0x440a48: 0xaf84be20  sw          $a0, -0x41E0($gp)
    ctx->pc = 0x440a48u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 4));
label_440a4c:
    // 0x440a4c: 0x25080002  addiu       $t0, $t0, 0x2
    ctx->pc = 0x440a4cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
label_440a50:
    // 0x440a50: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x440a50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
label_440a54:
    // 0x440a54: 0x14e9ffc6  bne         $a3, $t1, . + 4 + (-0x3A << 2)
label_440a58:
    if (ctx->pc == 0x440A58u) {
        ctx->pc = 0x440A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x440A54u;
        // 0x440a58: 0x26520002  addiu       $s2, $s2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x440A5Cu;
        goto label_440a5c;
    }
    ctx->pc = 0x440A54u;
    {
        const bool branch_taken_0x440a54 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 9));
        ctx->pc = 0x440A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x440A54u;
        // 0x440a58: 0x26520002  addiu       $s2, $s2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x440a54) {
            ctx->pc = 0x440970u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_440970;
        }
    }
    ctx->pc = 0x440A5Cu;
label_440a5c:
    // 0x440a5c: 0x0  nop
    ctx->pc = 0x440a5cu;
    // NOP
label_440a60:
    // 0x440a60: 0x8f82be20  lw          $v0, -0x41E0($gp)
    ctx->pc = 0x440a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
label_440a64:
    // 0x440a64: 0x7c4a0000  sq          $t2, 0x0($v0)
    ctx->pc = 0x440a64u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 10));
label_440a68:
    // 0x440a68: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x440a68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_440a6c:
    // 0x440a6c: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x440a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
label_440a70:
    // 0x440a70: 0x1600ff9b  bnez        $s0, . + 4 + (-0x65 << 2)
label_440a74:
    if (ctx->pc == 0x440A74u) {
        ctx->pc = 0x440A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x440A70u;
        // 0x440a74: 0x79aa0000  lq          $t2, 0x0($t5) (Delay Slot)
        SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 13), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x440A78u;
        goto label_440a78;
    }
    ctx->pc = 0x440A70u;
    {
        const bool branch_taken_0x440a70 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x440A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x440A70u;
        // 0x440a74: 0x79aa0000  lq          $t2, 0x0($t5) (Delay Slot)
        SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 13), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x440a70) {
            ctx->pc = 0x4408E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4408e0;
        }
    }
    ctx->pc = 0x440A78u;
label_440a78:
    // 0x440a78: 0xc10f954  jal         func_43E550
label_440a7c:
    if (ctx->pc == 0x440A7Cu) {
        ctx->pc = 0x440A80u;
        goto label_440a80;
    }
    ctx->pc = 0x440A78u;
    SET_GPR_U32(ctx, 31, 0x440A80u);
    ctx->pc = 0x43E550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43E550u, 0x440A78u, 0x440A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x440A80u;
label_440a80:
    // 0x440a80: 0x1260000d  beqz        $s3, . + 4 + (0xD << 2)
label_440a84:
    if (ctx->pc == 0x440A84u) {
        ctx->pc = 0x440A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x440A80u;
        // 0x440a84: 0x8f90aeec  lw          $s0, -0x5114($gp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946540)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x440A88u;
        goto label_440a88;
    }
    ctx->pc = 0x440A80u;
    {
        const bool branch_taken_0x440a80 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x440A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x440A80u;
        // 0x440a84: 0x8f90aeec  lw          $s0, -0x5114($gp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946540)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x440a80) {
            ctx->pc = 0x440AB8u;
            goto label_440ab8;
        }
    }
    ctx->pc = 0x440A88u;
label_440a88:
    // 0x440a88: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x440a88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_440a8c:
    // 0x440a8c: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x440a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_440a90:
    // 0x440a90: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x440a90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_440a94:
    // 0x440a94: 0x213182b  sltu        $v1, $s0, $s3
    ctx->pc = 0x440a94u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_440a98:
    // 0x440a98: 0x8ea80008  lw          $t0, 0x8($s5)
    ctx->pc = 0x440a98u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_440a9c:
    // 0x440a9c: 0x263800a  movz        $s0, $s3, $v1
    ctx->pc = 0x440a9cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 19));
label_440aa0:
    // 0x440aa0: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x440aa0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_440aa4:
    // 0x440aa4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x440aa4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_440aa8:
    // 0x440aa8: 0x40f809  jalr        $v0
label_440aac:
    if (ctx->pc == 0x440AACu) {
        ctx->pc = 0x440AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x440AA8u;
        // 0x440aac: 0x2e0482d  daddu       $t1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x440AB0u;
        goto label_440ab0;
    }
    ctx->pc = 0x440AA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x440AB0u);
        ctx->pc = 0x440AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x440AA8u;
        // 0x440aac: 0x2e0482d  daddu       $t1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x440AA8u, 0x440AB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x440AB0u;
label_440ab0:
    // 0x440ab0: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_440ab4:
    if (ctx->pc == 0x440AB4u) {
        ctx->pc = 0x440AB8u;
        goto label_440ab8;
    }
    ctx->pc = 0x440AB0u;
    {
        const bool branch_taken_0x440ab0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x440ab0) {
            ctx->pc = 0x440ABCu;
            goto label_440abc;
        }
    }
    ctx->pc = 0x440AB8u;
label_440ab8:
    // 0x440ab8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x440ab8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_440abc:
    // 0x440abc: 0x1600ff78  bnez        $s0, . + 4 + (-0x88 << 2)
label_440ac0:
    if (ctx->pc == 0x440AC0u) {
        ctx->pc = 0x440AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x440ABCu;
        // 0x440ac0: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x440AC4u;
        goto label_440ac4;
    }
    ctx->pc = 0x440ABCu;
    {
        const bool branch_taken_0x440abc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x440AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x440ABCu;
        // 0x440ac0: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x440abc) {
            ctx->pc = 0x4408A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4408a0;
        }
    }
    ctx->pc = 0x440AC4u;
label_440ac4:
    // 0x440ac4: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x440ac4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_440ac8:
    // 0x440ac8: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x440ac8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_440acc:
    // 0x440acc: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x440accu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_440ad0:
    // 0x440ad0: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x440ad0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_440ad4:
    // 0x440ad4: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x440ad4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_440ad8:
    // 0x440ad8: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x440ad8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_440adc:
    // 0x440adc: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x440adcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_440ae0:
    // 0x440ae0: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x440ae0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_440ae4:
    // 0x440ae4: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x440ae4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_440ae8:
    // 0x440ae8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x440ae8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_440aec:
    // 0x440aec: 0x3e00008  jr          $ra
label_440af0:
    if (ctx->pc == 0x440AF0u) {
        ctx->pc = 0x440AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x440AECu;
        // 0x440af0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x440AF4u;
        goto label_440af4;
    }
    ctx->pc = 0x440AECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x440AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x440AECu;
        // 0x440af0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x440AECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x440AF4u;
label_440af4:
    // 0x440af4: 0x0  nop
    ctx->pc = 0x440af4u;
    // NOP
    ctx->pc = 0x440af8u;
}
