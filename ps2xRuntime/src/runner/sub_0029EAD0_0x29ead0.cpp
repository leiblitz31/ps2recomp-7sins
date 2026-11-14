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

// Function: sub_0029EAD0
// Address: 0x29ead0 - 0x2a0280
void sub_0029EAD0_0x29ead0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029EAD0_0x29ead0");
#endif

    switch (ctx->pc) {
        case 0x29ead0u: goto label_29ead0;
        case 0x29ead4u: goto label_29ead4;
        case 0x29ead8u: goto label_29ead8;
        case 0x29eadcu: goto label_29eadc;
        case 0x29eae0u: goto label_29eae0;
        case 0x29eae4u: goto label_29eae4;
        case 0x29eae8u: goto label_29eae8;
        case 0x29eaecu: goto label_29eaec;
        case 0x29eaf0u: goto label_29eaf0;
        case 0x29eaf4u: goto label_29eaf4;
        case 0x29eaf8u: goto label_29eaf8;
        case 0x29eafcu: goto label_29eafc;
        case 0x29eb00u: goto label_29eb00;
        case 0x29eb04u: goto label_29eb04;
        case 0x29eb08u: goto label_29eb08;
        case 0x29eb0cu: goto label_29eb0c;
        case 0x29eb10u: goto label_29eb10;
        case 0x29eb14u: goto label_29eb14;
        case 0x29eb18u: goto label_29eb18;
        case 0x29eb1cu: goto label_29eb1c;
        case 0x29eb20u: goto label_29eb20;
        case 0x29eb24u: goto label_29eb24;
        case 0x29eb28u: goto label_29eb28;
        case 0x29eb2cu: goto label_29eb2c;
        case 0x29eb30u: goto label_29eb30;
        case 0x29eb34u: goto label_29eb34;
        case 0x29eb38u: goto label_29eb38;
        case 0x29eb3cu: goto label_29eb3c;
        case 0x29eb40u: goto label_29eb40;
        case 0x29eb44u: goto label_29eb44;
        case 0x29eb48u: goto label_29eb48;
        case 0x29eb4cu: goto label_29eb4c;
        case 0x29eb50u: goto label_29eb50;
        case 0x29eb54u: goto label_29eb54;
        case 0x29eb58u: goto label_29eb58;
        case 0x29eb5cu: goto label_29eb5c;
        case 0x29eb60u: goto label_29eb60;
        case 0x29eb64u: goto label_29eb64;
        case 0x29eb68u: goto label_29eb68;
        case 0x29eb6cu: goto label_29eb6c;
        case 0x29eb70u: goto label_29eb70;
        case 0x29eb74u: goto label_29eb74;
        case 0x29eb78u: goto label_29eb78;
        case 0x29eb7cu: goto label_29eb7c;
        case 0x29eb80u: goto label_29eb80;
        case 0x29eb84u: goto label_29eb84;
        case 0x29eb88u: goto label_29eb88;
        case 0x29eb8cu: goto label_29eb8c;
        case 0x29eb90u: goto label_29eb90;
        case 0x29eb94u: goto label_29eb94;
        case 0x29eb98u: goto label_29eb98;
        case 0x29eb9cu: goto label_29eb9c;
        case 0x29eba0u: goto label_29eba0;
        case 0x29eba4u: goto label_29eba4;
        case 0x29eba8u: goto label_29eba8;
        case 0x29ebacu: goto label_29ebac;
        case 0x29ebb0u: goto label_29ebb0;
        case 0x29ebb4u: goto label_29ebb4;
        case 0x29ebb8u: goto label_29ebb8;
        case 0x29ebbcu: goto label_29ebbc;
        case 0x29ebc0u: goto label_29ebc0;
        case 0x29ebc4u: goto label_29ebc4;
        case 0x29ebc8u: goto label_29ebc8;
        case 0x29ebccu: goto label_29ebcc;
        case 0x29ebd0u: goto label_29ebd0;
        case 0x29ebd4u: goto label_29ebd4;
        case 0x29ebd8u: goto label_29ebd8;
        case 0x29ebdcu: goto label_29ebdc;
        case 0x29ebe0u: goto label_29ebe0;
        case 0x29ebe4u: goto label_29ebe4;
        case 0x29ebe8u: goto label_29ebe8;
        case 0x29ebecu: goto label_29ebec;
        case 0x29ebf0u: goto label_29ebf0;
        case 0x29ebf4u: goto label_29ebf4;
        case 0x29ebf8u: goto label_29ebf8;
        case 0x29ebfcu: goto label_29ebfc;
        case 0x29ec00u: goto label_29ec00;
        case 0x29ec04u: goto label_29ec04;
        case 0x29ec08u: goto label_29ec08;
        case 0x29ec0cu: goto label_29ec0c;
        case 0x29ec10u: goto label_29ec10;
        case 0x29ec14u: goto label_29ec14;
        case 0x29ec18u: goto label_29ec18;
        case 0x29ec1cu: goto label_29ec1c;
        case 0x29ec20u: goto label_29ec20;
        case 0x29ec24u: goto label_29ec24;
        case 0x29ec28u: goto label_29ec28;
        case 0x29ec2cu: goto label_29ec2c;
        case 0x29ec30u: goto label_29ec30;
        case 0x29ec34u: goto label_29ec34;
        case 0x29ec38u: goto label_29ec38;
        case 0x29ec3cu: goto label_29ec3c;
        case 0x29ec40u: goto label_29ec40;
        case 0x29ec44u: goto label_29ec44;
        case 0x29ec48u: goto label_29ec48;
        case 0x29ec4cu: goto label_29ec4c;
        case 0x29ec50u: goto label_29ec50;
        case 0x29ec54u: goto label_29ec54;
        case 0x29ec58u: goto label_29ec58;
        case 0x29ec5cu: goto label_29ec5c;
        case 0x29ec60u: goto label_29ec60;
        case 0x29ec64u: goto label_29ec64;
        case 0x29ec68u: goto label_29ec68;
        case 0x29ec6cu: goto label_29ec6c;
        case 0x29ec70u: goto label_29ec70;
        case 0x29ec74u: goto label_29ec74;
        case 0x29ec78u: goto label_29ec78;
        case 0x29ec7cu: goto label_29ec7c;
        case 0x29ec80u: goto label_29ec80;
        case 0x29ec84u: goto label_29ec84;
        case 0x29ec88u: goto label_29ec88;
        case 0x29ec8cu: goto label_29ec8c;
        case 0x29ec90u: goto label_29ec90;
        case 0x29ec94u: goto label_29ec94;
        case 0x29ec98u: goto label_29ec98;
        case 0x29ec9cu: goto label_29ec9c;
        case 0x29eca0u: goto label_29eca0;
        case 0x29eca4u: goto label_29eca4;
        case 0x29eca8u: goto label_29eca8;
        case 0x29ecacu: goto label_29ecac;
        case 0x29ecb0u: goto label_29ecb0;
        case 0x29ecb4u: goto label_29ecb4;
        case 0x29ecb8u: goto label_29ecb8;
        case 0x29ecbcu: goto label_29ecbc;
        case 0x29ecc0u: goto label_29ecc0;
        case 0x29ecc4u: goto label_29ecc4;
        case 0x29ecc8u: goto label_29ecc8;
        case 0x29ecccu: goto label_29eccc;
        case 0x29ecd0u: goto label_29ecd0;
        case 0x29ecd4u: goto label_29ecd4;
        case 0x29ecd8u: goto label_29ecd8;
        case 0x29ecdcu: goto label_29ecdc;
        case 0x29ece0u: goto label_29ece0;
        case 0x29ece4u: goto label_29ece4;
        case 0x29ece8u: goto label_29ece8;
        case 0x29ececu: goto label_29ecec;
        case 0x29ecf0u: goto label_29ecf0;
        case 0x29ecf4u: goto label_29ecf4;
        case 0x29ecf8u: goto label_29ecf8;
        case 0x29ecfcu: goto label_29ecfc;
        case 0x29ed00u: goto label_29ed00;
        case 0x29ed04u: goto label_29ed04;
        case 0x29ed08u: goto label_29ed08;
        case 0x29ed0cu: goto label_29ed0c;
        case 0x29ed10u: goto label_29ed10;
        case 0x29ed14u: goto label_29ed14;
        case 0x29ed18u: goto label_29ed18;
        case 0x29ed1cu: goto label_29ed1c;
        case 0x29ed20u: goto label_29ed20;
        case 0x29ed24u: goto label_29ed24;
        case 0x29ed28u: goto label_29ed28;
        case 0x29ed2cu: goto label_29ed2c;
        case 0x29ed30u: goto label_29ed30;
        case 0x29ed34u: goto label_29ed34;
        case 0x29ed38u: goto label_29ed38;
        case 0x29ed3cu: goto label_29ed3c;
        case 0x29ed40u: goto label_29ed40;
        case 0x29ed44u: goto label_29ed44;
        case 0x29ed48u: goto label_29ed48;
        case 0x29ed4cu: goto label_29ed4c;
        case 0x29ed50u: goto label_29ed50;
        case 0x29ed54u: goto label_29ed54;
        case 0x29ed58u: goto label_29ed58;
        case 0x29ed5cu: goto label_29ed5c;
        case 0x29ed60u: goto label_29ed60;
        case 0x29ed64u: goto label_29ed64;
        case 0x29ed68u: goto label_29ed68;
        case 0x29ed6cu: goto label_29ed6c;
        case 0x29ed70u: goto label_29ed70;
        case 0x29ed74u: goto label_29ed74;
        case 0x29ed78u: goto label_29ed78;
        case 0x29ed7cu: goto label_29ed7c;
        case 0x29ed80u: goto label_29ed80;
        case 0x29ed84u: goto label_29ed84;
        case 0x29ed88u: goto label_29ed88;
        case 0x29ed8cu: goto label_29ed8c;
        case 0x29ed90u: goto label_29ed90;
        case 0x29ed94u: goto label_29ed94;
        case 0x29ed98u: goto label_29ed98;
        case 0x29ed9cu: goto label_29ed9c;
        case 0x29eda0u: goto label_29eda0;
        case 0x29eda4u: goto label_29eda4;
        case 0x29eda8u: goto label_29eda8;
        case 0x29edacu: goto label_29edac;
        case 0x29edb0u: goto label_29edb0;
        case 0x29edb4u: goto label_29edb4;
        case 0x29edb8u: goto label_29edb8;
        case 0x29edbcu: goto label_29edbc;
        case 0x29edc0u: goto label_29edc0;
        case 0x29edc4u: goto label_29edc4;
        case 0x29edc8u: goto label_29edc8;
        case 0x29edccu: goto label_29edcc;
        case 0x29edd0u: goto label_29edd0;
        case 0x29edd4u: goto label_29edd4;
        case 0x29edd8u: goto label_29edd8;
        case 0x29eddcu: goto label_29eddc;
        case 0x29ede0u: goto label_29ede0;
        case 0x29ede4u: goto label_29ede4;
        case 0x29ede8u: goto label_29ede8;
        case 0x29edecu: goto label_29edec;
        case 0x29edf0u: goto label_29edf0;
        case 0x29edf4u: goto label_29edf4;
        case 0x29edf8u: goto label_29edf8;
        case 0x29edfcu: goto label_29edfc;
        case 0x29ee00u: goto label_29ee00;
        case 0x29ee04u: goto label_29ee04;
        case 0x29ee08u: goto label_29ee08;
        case 0x29ee0cu: goto label_29ee0c;
        case 0x29ee10u: goto label_29ee10;
        case 0x29ee14u: goto label_29ee14;
        case 0x29ee18u: goto label_29ee18;
        case 0x29ee1cu: goto label_29ee1c;
        case 0x29ee20u: goto label_29ee20;
        case 0x29ee24u: goto label_29ee24;
        case 0x29ee28u: goto label_29ee28;
        case 0x29ee2cu: goto label_29ee2c;
        case 0x29ee30u: goto label_29ee30;
        case 0x29ee34u: goto label_29ee34;
        case 0x29ee38u: goto label_29ee38;
        case 0x29ee3cu: goto label_29ee3c;
        case 0x29ee40u: goto label_29ee40;
        case 0x29ee44u: goto label_29ee44;
        case 0x29ee48u: goto label_29ee48;
        case 0x29ee4cu: goto label_29ee4c;
        case 0x29ee50u: goto label_29ee50;
        case 0x29ee54u: goto label_29ee54;
        case 0x29ee58u: goto label_29ee58;
        case 0x29ee5cu: goto label_29ee5c;
        case 0x29ee60u: goto label_29ee60;
        case 0x29ee64u: goto label_29ee64;
        case 0x29ee68u: goto label_29ee68;
        case 0x29ee6cu: goto label_29ee6c;
        case 0x29ee70u: goto label_29ee70;
        case 0x29ee74u: goto label_29ee74;
        case 0x29ee78u: goto label_29ee78;
        case 0x29ee7cu: goto label_29ee7c;
        case 0x29ee80u: goto label_29ee80;
        case 0x29ee84u: goto label_29ee84;
        case 0x29ee88u: goto label_29ee88;
        case 0x29ee8cu: goto label_29ee8c;
        case 0x29ee90u: goto label_29ee90;
        case 0x29ee94u: goto label_29ee94;
        case 0x29ee98u: goto label_29ee98;
        case 0x29ee9cu: goto label_29ee9c;
        case 0x29eea0u: goto label_29eea0;
        case 0x29eea4u: goto label_29eea4;
        case 0x29eea8u: goto label_29eea8;
        case 0x29eeacu: goto label_29eeac;
        case 0x29eeb0u: goto label_29eeb0;
        case 0x29eeb4u: goto label_29eeb4;
        case 0x29eeb8u: goto label_29eeb8;
        case 0x29eebcu: goto label_29eebc;
        case 0x29eec0u: goto label_29eec0;
        case 0x29eec4u: goto label_29eec4;
        case 0x29eec8u: goto label_29eec8;
        case 0x29eeccu: goto label_29eecc;
        case 0x29eed0u: goto label_29eed0;
        case 0x29eed4u: goto label_29eed4;
        case 0x29eed8u: goto label_29eed8;
        case 0x29eedcu: goto label_29eedc;
        case 0x29eee0u: goto label_29eee0;
        case 0x29eee4u: goto label_29eee4;
        case 0x29eee8u: goto label_29eee8;
        case 0x29eeecu: goto label_29eeec;
        case 0x29eef0u: goto label_29eef0;
        case 0x29eef4u: goto label_29eef4;
        case 0x29eef8u: goto label_29eef8;
        case 0x29eefcu: goto label_29eefc;
        case 0x29ef00u: goto label_29ef00;
        case 0x29ef04u: goto label_29ef04;
        case 0x29ef08u: goto label_29ef08;
        case 0x29ef0cu: goto label_29ef0c;
        case 0x29ef10u: goto label_29ef10;
        case 0x29ef14u: goto label_29ef14;
        case 0x29ef18u: goto label_29ef18;
        case 0x29ef1cu: goto label_29ef1c;
        case 0x29ef20u: goto label_29ef20;
        case 0x29ef24u: goto label_29ef24;
        case 0x29ef28u: goto label_29ef28;
        case 0x29ef2cu: goto label_29ef2c;
        case 0x29ef30u: goto label_29ef30;
        case 0x29ef34u: goto label_29ef34;
        case 0x29ef38u: goto label_29ef38;
        case 0x29ef3cu: goto label_29ef3c;
        case 0x29ef40u: goto label_29ef40;
        case 0x29ef44u: goto label_29ef44;
        case 0x29ef48u: goto label_29ef48;
        case 0x29ef4cu: goto label_29ef4c;
        case 0x29ef50u: goto label_29ef50;
        case 0x29ef54u: goto label_29ef54;
        case 0x29ef58u: goto label_29ef58;
        case 0x29ef5cu: goto label_29ef5c;
        case 0x29ef60u: goto label_29ef60;
        case 0x29ef64u: goto label_29ef64;
        case 0x29ef68u: goto label_29ef68;
        case 0x29ef6cu: goto label_29ef6c;
        case 0x29ef70u: goto label_29ef70;
        case 0x29ef74u: goto label_29ef74;
        case 0x29ef78u: goto label_29ef78;
        case 0x29ef7cu: goto label_29ef7c;
        case 0x29ef80u: goto label_29ef80;
        case 0x29ef84u: goto label_29ef84;
        case 0x29ef88u: goto label_29ef88;
        case 0x29ef8cu: goto label_29ef8c;
        case 0x29ef90u: goto label_29ef90;
        case 0x29ef94u: goto label_29ef94;
        case 0x29ef98u: goto label_29ef98;
        case 0x29ef9cu: goto label_29ef9c;
        case 0x29efa0u: goto label_29efa0;
        case 0x29efa4u: goto label_29efa4;
        case 0x29efa8u: goto label_29efa8;
        case 0x29efacu: goto label_29efac;
        case 0x29efb0u: goto label_29efb0;
        case 0x29efb4u: goto label_29efb4;
        case 0x29efb8u: goto label_29efb8;
        case 0x29efbcu: goto label_29efbc;
        case 0x29efc0u: goto label_29efc0;
        case 0x29efc4u: goto label_29efc4;
        case 0x29efc8u: goto label_29efc8;
        case 0x29efccu: goto label_29efcc;
        case 0x29efd0u: goto label_29efd0;
        case 0x29efd4u: goto label_29efd4;
        case 0x29efd8u: goto label_29efd8;
        case 0x29efdcu: goto label_29efdc;
        case 0x29efe0u: goto label_29efe0;
        case 0x29efe4u: goto label_29efe4;
        case 0x29efe8u: goto label_29efe8;
        case 0x29efecu: goto label_29efec;
        case 0x29eff0u: goto label_29eff0;
        case 0x29eff4u: goto label_29eff4;
        case 0x29eff8u: goto label_29eff8;
        case 0x29effcu: goto label_29effc;
        case 0x29f000u: goto label_29f000;
        case 0x29f004u: goto label_29f004;
        case 0x29f008u: goto label_29f008;
        case 0x29f00cu: goto label_29f00c;
        case 0x29f010u: goto label_29f010;
        case 0x29f014u: goto label_29f014;
        case 0x29f018u: goto label_29f018;
        case 0x29f01cu: goto label_29f01c;
        case 0x29f020u: goto label_29f020;
        case 0x29f024u: goto label_29f024;
        case 0x29f028u: goto label_29f028;
        case 0x29f02cu: goto label_29f02c;
        case 0x29f030u: goto label_29f030;
        case 0x29f034u: goto label_29f034;
        case 0x29f038u: goto label_29f038;
        case 0x29f03cu: goto label_29f03c;
        case 0x29f040u: goto label_29f040;
        case 0x29f044u: goto label_29f044;
        case 0x29f048u: goto label_29f048;
        case 0x29f04cu: goto label_29f04c;
        case 0x29f050u: goto label_29f050;
        case 0x29f054u: goto label_29f054;
        case 0x29f058u: goto label_29f058;
        case 0x29f05cu: goto label_29f05c;
        case 0x29f060u: goto label_29f060;
        case 0x29f064u: goto label_29f064;
        case 0x29f068u: goto label_29f068;
        case 0x29f06cu: goto label_29f06c;
        case 0x29f070u: goto label_29f070;
        case 0x29f074u: goto label_29f074;
        case 0x29f078u: goto label_29f078;
        case 0x29f07cu: goto label_29f07c;
        case 0x29f080u: goto label_29f080;
        case 0x29f084u: goto label_29f084;
        case 0x29f088u: goto label_29f088;
        case 0x29f08cu: goto label_29f08c;
        case 0x29f090u: goto label_29f090;
        case 0x29f094u: goto label_29f094;
        case 0x29f098u: goto label_29f098;
        case 0x29f09cu: goto label_29f09c;
        case 0x29f0a0u: goto label_29f0a0;
        case 0x29f0a4u: goto label_29f0a4;
        case 0x29f0a8u: goto label_29f0a8;
        case 0x29f0acu: goto label_29f0ac;
        case 0x29f0b0u: goto label_29f0b0;
        case 0x29f0b4u: goto label_29f0b4;
        case 0x29f0b8u: goto label_29f0b8;
        case 0x29f0bcu: goto label_29f0bc;
        case 0x29f0c0u: goto label_29f0c0;
        case 0x29f0c4u: goto label_29f0c4;
        case 0x29f0c8u: goto label_29f0c8;
        case 0x29f0ccu: goto label_29f0cc;
        case 0x29f0d0u: goto label_29f0d0;
        case 0x29f0d4u: goto label_29f0d4;
        case 0x29f0d8u: goto label_29f0d8;
        case 0x29f0dcu: goto label_29f0dc;
        case 0x29f0e0u: goto label_29f0e0;
        case 0x29f0e4u: goto label_29f0e4;
        case 0x29f0e8u: goto label_29f0e8;
        case 0x29f0ecu: goto label_29f0ec;
        case 0x29f0f0u: goto label_29f0f0;
        case 0x29f0f4u: goto label_29f0f4;
        case 0x29f0f8u: goto label_29f0f8;
        case 0x29f0fcu: goto label_29f0fc;
        case 0x29f100u: goto label_29f100;
        case 0x29f104u: goto label_29f104;
        case 0x29f108u: goto label_29f108;
        case 0x29f10cu: goto label_29f10c;
        case 0x29f110u: goto label_29f110;
        case 0x29f114u: goto label_29f114;
        case 0x29f118u: goto label_29f118;
        case 0x29f11cu: goto label_29f11c;
        case 0x29f120u: goto label_29f120;
        case 0x29f124u: goto label_29f124;
        case 0x29f128u: goto label_29f128;
        case 0x29f12cu: goto label_29f12c;
        case 0x29f130u: goto label_29f130;
        case 0x29f134u: goto label_29f134;
        case 0x29f138u: goto label_29f138;
        case 0x29f13cu: goto label_29f13c;
        case 0x29f140u: goto label_29f140;
        case 0x29f144u: goto label_29f144;
        case 0x29f148u: goto label_29f148;
        case 0x29f14cu: goto label_29f14c;
        case 0x29f150u: goto label_29f150;
        case 0x29f154u: goto label_29f154;
        case 0x29f158u: goto label_29f158;
        case 0x29f15cu: goto label_29f15c;
        case 0x29f160u: goto label_29f160;
        case 0x29f164u: goto label_29f164;
        case 0x29f168u: goto label_29f168;
        case 0x29f16cu: goto label_29f16c;
        case 0x29f170u: goto label_29f170;
        case 0x29f174u: goto label_29f174;
        case 0x29f178u: goto label_29f178;
        case 0x29f17cu: goto label_29f17c;
        case 0x29f180u: goto label_29f180;
        case 0x29f184u: goto label_29f184;
        case 0x29f188u: goto label_29f188;
        case 0x29f18cu: goto label_29f18c;
        case 0x29f190u: goto label_29f190;
        case 0x29f194u: goto label_29f194;
        case 0x29f198u: goto label_29f198;
        case 0x29f19cu: goto label_29f19c;
        case 0x29f1a0u: goto label_29f1a0;
        case 0x29f1a4u: goto label_29f1a4;
        case 0x29f1a8u: goto label_29f1a8;
        case 0x29f1acu: goto label_29f1ac;
        case 0x29f1b0u: goto label_29f1b0;
        case 0x29f1b4u: goto label_29f1b4;
        case 0x29f1b8u: goto label_29f1b8;
        case 0x29f1bcu: goto label_29f1bc;
        case 0x29f1c0u: goto label_29f1c0;
        case 0x29f1c4u: goto label_29f1c4;
        case 0x29f1c8u: goto label_29f1c8;
        case 0x29f1ccu: goto label_29f1cc;
        case 0x29f1d0u: goto label_29f1d0;
        case 0x29f1d4u: goto label_29f1d4;
        case 0x29f1d8u: goto label_29f1d8;
        case 0x29f1dcu: goto label_29f1dc;
        case 0x29f1e0u: goto label_29f1e0;
        case 0x29f1e4u: goto label_29f1e4;
        case 0x29f1e8u: goto label_29f1e8;
        case 0x29f1ecu: goto label_29f1ec;
        case 0x29f1f0u: goto label_29f1f0;
        case 0x29f1f4u: goto label_29f1f4;
        case 0x29f1f8u: goto label_29f1f8;
        case 0x29f1fcu: goto label_29f1fc;
        case 0x29f200u: goto label_29f200;
        case 0x29f204u: goto label_29f204;
        case 0x29f208u: goto label_29f208;
        case 0x29f20cu: goto label_29f20c;
        case 0x29f210u: goto label_29f210;
        case 0x29f214u: goto label_29f214;
        case 0x29f218u: goto label_29f218;
        case 0x29f21cu: goto label_29f21c;
        case 0x29f220u: goto label_29f220;
        case 0x29f224u: goto label_29f224;
        case 0x29f228u: goto label_29f228;
        case 0x29f22cu: goto label_29f22c;
        case 0x29f230u: goto label_29f230;
        case 0x29f234u: goto label_29f234;
        case 0x29f238u: goto label_29f238;
        case 0x29f23cu: goto label_29f23c;
        case 0x29f240u: goto label_29f240;
        case 0x29f244u: goto label_29f244;
        case 0x29f248u: goto label_29f248;
        case 0x29f24cu: goto label_29f24c;
        case 0x29f250u: goto label_29f250;
        case 0x29f254u: goto label_29f254;
        case 0x29f258u: goto label_29f258;
        case 0x29f25cu: goto label_29f25c;
        case 0x29f260u: goto label_29f260;
        case 0x29f264u: goto label_29f264;
        case 0x29f268u: goto label_29f268;
        case 0x29f26cu: goto label_29f26c;
        case 0x29f270u: goto label_29f270;
        case 0x29f274u: goto label_29f274;
        case 0x29f278u: goto label_29f278;
        case 0x29f27cu: goto label_29f27c;
        case 0x29f280u: goto label_29f280;
        case 0x29f284u: goto label_29f284;
        case 0x29f288u: goto label_29f288;
        case 0x29f28cu: goto label_29f28c;
        case 0x29f290u: goto label_29f290;
        case 0x29f294u: goto label_29f294;
        case 0x29f298u: goto label_29f298;
        case 0x29f29cu: goto label_29f29c;
        case 0x29f2a0u: goto label_29f2a0;
        case 0x29f2a4u: goto label_29f2a4;
        case 0x29f2a8u: goto label_29f2a8;
        case 0x29f2acu: goto label_29f2ac;
        case 0x29f2b0u: goto label_29f2b0;
        case 0x29f2b4u: goto label_29f2b4;
        case 0x29f2b8u: goto label_29f2b8;
        case 0x29f2bcu: goto label_29f2bc;
        case 0x29f2c0u: goto label_29f2c0;
        case 0x29f2c4u: goto label_29f2c4;
        case 0x29f2c8u: goto label_29f2c8;
        case 0x29f2ccu: goto label_29f2cc;
        case 0x29f2d0u: goto label_29f2d0;
        case 0x29f2d4u: goto label_29f2d4;
        case 0x29f2d8u: goto label_29f2d8;
        case 0x29f2dcu: goto label_29f2dc;
        case 0x29f2e0u: goto label_29f2e0;
        case 0x29f2e4u: goto label_29f2e4;
        case 0x29f2e8u: goto label_29f2e8;
        case 0x29f2ecu: goto label_29f2ec;
        case 0x29f2f0u: goto label_29f2f0;
        case 0x29f2f4u: goto label_29f2f4;
        case 0x29f2f8u: goto label_29f2f8;
        case 0x29f2fcu: goto label_29f2fc;
        case 0x29f300u: goto label_29f300;
        case 0x29f304u: goto label_29f304;
        case 0x29f308u: goto label_29f308;
        case 0x29f30cu: goto label_29f30c;
        case 0x29f310u: goto label_29f310;
        case 0x29f314u: goto label_29f314;
        case 0x29f318u: goto label_29f318;
        case 0x29f31cu: goto label_29f31c;
        case 0x29f320u: goto label_29f320;
        case 0x29f324u: goto label_29f324;
        case 0x29f328u: goto label_29f328;
        case 0x29f32cu: goto label_29f32c;
        case 0x29f330u: goto label_29f330;
        case 0x29f334u: goto label_29f334;
        case 0x29f338u: goto label_29f338;
        case 0x29f33cu: goto label_29f33c;
        case 0x29f340u: goto label_29f340;
        case 0x29f344u: goto label_29f344;
        case 0x29f348u: goto label_29f348;
        case 0x29f34cu: goto label_29f34c;
        case 0x29f350u: goto label_29f350;
        case 0x29f354u: goto label_29f354;
        case 0x29f358u: goto label_29f358;
        case 0x29f35cu: goto label_29f35c;
        case 0x29f360u: goto label_29f360;
        case 0x29f364u: goto label_29f364;
        case 0x29f368u: goto label_29f368;
        case 0x29f36cu: goto label_29f36c;
        case 0x29f370u: goto label_29f370;
        case 0x29f374u: goto label_29f374;
        case 0x29f378u: goto label_29f378;
        case 0x29f37cu: goto label_29f37c;
        case 0x29f380u: goto label_29f380;
        case 0x29f384u: goto label_29f384;
        case 0x29f388u: goto label_29f388;
        case 0x29f38cu: goto label_29f38c;
        case 0x29f390u: goto label_29f390;
        case 0x29f394u: goto label_29f394;
        case 0x29f398u: goto label_29f398;
        case 0x29f39cu: goto label_29f39c;
        case 0x29f3a0u: goto label_29f3a0;
        case 0x29f3a4u: goto label_29f3a4;
        case 0x29f3a8u: goto label_29f3a8;
        case 0x29f3acu: goto label_29f3ac;
        case 0x29f3b0u: goto label_29f3b0;
        case 0x29f3b4u: goto label_29f3b4;
        case 0x29f3b8u: goto label_29f3b8;
        case 0x29f3bcu: goto label_29f3bc;
        case 0x29f3c0u: goto label_29f3c0;
        case 0x29f3c4u: goto label_29f3c4;
        case 0x29f3c8u: goto label_29f3c8;
        case 0x29f3ccu: goto label_29f3cc;
        case 0x29f3d0u: goto label_29f3d0;
        case 0x29f3d4u: goto label_29f3d4;
        case 0x29f3d8u: goto label_29f3d8;
        case 0x29f3dcu: goto label_29f3dc;
        case 0x29f3e0u: goto label_29f3e0;
        case 0x29f3e4u: goto label_29f3e4;
        case 0x29f3e8u: goto label_29f3e8;
        case 0x29f3ecu: goto label_29f3ec;
        case 0x29f3f0u: goto label_29f3f0;
        case 0x29f3f4u: goto label_29f3f4;
        case 0x29f3f8u: goto label_29f3f8;
        case 0x29f3fcu: goto label_29f3fc;
        case 0x29f400u: goto label_29f400;
        case 0x29f404u: goto label_29f404;
        case 0x29f408u: goto label_29f408;
        case 0x29f40cu: goto label_29f40c;
        case 0x29f410u: goto label_29f410;
        case 0x29f414u: goto label_29f414;
        case 0x29f418u: goto label_29f418;
        case 0x29f41cu: goto label_29f41c;
        case 0x29f420u: goto label_29f420;
        case 0x29f424u: goto label_29f424;
        case 0x29f428u: goto label_29f428;
        case 0x29f42cu: goto label_29f42c;
        case 0x29f430u: goto label_29f430;
        case 0x29f434u: goto label_29f434;
        case 0x29f438u: goto label_29f438;
        case 0x29f43cu: goto label_29f43c;
        case 0x29f440u: goto label_29f440;
        case 0x29f444u: goto label_29f444;
        case 0x29f448u: goto label_29f448;
        case 0x29f44cu: goto label_29f44c;
        case 0x29f450u: goto label_29f450;
        case 0x29f454u: goto label_29f454;
        case 0x29f458u: goto label_29f458;
        case 0x29f45cu: goto label_29f45c;
        case 0x29f460u: goto label_29f460;
        case 0x29f464u: goto label_29f464;
        case 0x29f468u: goto label_29f468;
        case 0x29f46cu: goto label_29f46c;
        case 0x29f470u: goto label_29f470;
        case 0x29f474u: goto label_29f474;
        case 0x29f478u: goto label_29f478;
        case 0x29f47cu: goto label_29f47c;
        case 0x29f480u: goto label_29f480;
        case 0x29f484u: goto label_29f484;
        case 0x29f488u: goto label_29f488;
        case 0x29f48cu: goto label_29f48c;
        case 0x29f490u: goto label_29f490;
        case 0x29f494u: goto label_29f494;
        case 0x29f498u: goto label_29f498;
        case 0x29f49cu: goto label_29f49c;
        case 0x29f4a0u: goto label_29f4a0;
        case 0x29f4a4u: goto label_29f4a4;
        case 0x29f4a8u: goto label_29f4a8;
        case 0x29f4acu: goto label_29f4ac;
        case 0x29f4b0u: goto label_29f4b0;
        case 0x29f4b4u: goto label_29f4b4;
        case 0x29f4b8u: goto label_29f4b8;
        case 0x29f4bcu: goto label_29f4bc;
        case 0x29f4c0u: goto label_29f4c0;
        case 0x29f4c4u: goto label_29f4c4;
        case 0x29f4c8u: goto label_29f4c8;
        case 0x29f4ccu: goto label_29f4cc;
        case 0x29f4d0u: goto label_29f4d0;
        case 0x29f4d4u: goto label_29f4d4;
        case 0x29f4d8u: goto label_29f4d8;
        case 0x29f4dcu: goto label_29f4dc;
        case 0x29f4e0u: goto label_29f4e0;
        case 0x29f4e4u: goto label_29f4e4;
        case 0x29f4e8u: goto label_29f4e8;
        case 0x29f4ecu: goto label_29f4ec;
        case 0x29f4f0u: goto label_29f4f0;
        case 0x29f4f4u: goto label_29f4f4;
        case 0x29f4f8u: goto label_29f4f8;
        case 0x29f4fcu: goto label_29f4fc;
        case 0x29f500u: goto label_29f500;
        case 0x29f504u: goto label_29f504;
        case 0x29f508u: goto label_29f508;
        case 0x29f50cu: goto label_29f50c;
        case 0x29f510u: goto label_29f510;
        case 0x29f514u: goto label_29f514;
        case 0x29f518u: goto label_29f518;
        case 0x29f51cu: goto label_29f51c;
        case 0x29f520u: goto label_29f520;
        case 0x29f524u: goto label_29f524;
        case 0x29f528u: goto label_29f528;
        case 0x29f52cu: goto label_29f52c;
        case 0x29f530u: goto label_29f530;
        case 0x29f534u: goto label_29f534;
        case 0x29f538u: goto label_29f538;
        case 0x29f53cu: goto label_29f53c;
        case 0x29f540u: goto label_29f540;
        case 0x29f544u: goto label_29f544;
        case 0x29f548u: goto label_29f548;
        case 0x29f54cu: goto label_29f54c;
        case 0x29f550u: goto label_29f550;
        case 0x29f554u: goto label_29f554;
        case 0x29f558u: goto label_29f558;
        case 0x29f55cu: goto label_29f55c;
        case 0x29f560u: goto label_29f560;
        case 0x29f564u: goto label_29f564;
        case 0x29f568u: goto label_29f568;
        case 0x29f56cu: goto label_29f56c;
        case 0x29f570u: goto label_29f570;
        case 0x29f574u: goto label_29f574;
        case 0x29f578u: goto label_29f578;
        case 0x29f57cu: goto label_29f57c;
        case 0x29f580u: goto label_29f580;
        case 0x29f584u: goto label_29f584;
        case 0x29f588u: goto label_29f588;
        case 0x29f58cu: goto label_29f58c;
        case 0x29f590u: goto label_29f590;
        case 0x29f594u: goto label_29f594;
        case 0x29f598u: goto label_29f598;
        case 0x29f59cu: goto label_29f59c;
        case 0x29f5a0u: goto label_29f5a0;
        case 0x29f5a4u: goto label_29f5a4;
        case 0x29f5a8u: goto label_29f5a8;
        case 0x29f5acu: goto label_29f5ac;
        case 0x29f5b0u: goto label_29f5b0;
        case 0x29f5b4u: goto label_29f5b4;
        case 0x29f5b8u: goto label_29f5b8;
        case 0x29f5bcu: goto label_29f5bc;
        case 0x29f5c0u: goto label_29f5c0;
        case 0x29f5c4u: goto label_29f5c4;
        case 0x29f5c8u: goto label_29f5c8;
        case 0x29f5ccu: goto label_29f5cc;
        case 0x29f5d0u: goto label_29f5d0;
        case 0x29f5d4u: goto label_29f5d4;
        case 0x29f5d8u: goto label_29f5d8;
        case 0x29f5dcu: goto label_29f5dc;
        case 0x29f5e0u: goto label_29f5e0;
        case 0x29f5e4u: goto label_29f5e4;
        case 0x29f5e8u: goto label_29f5e8;
        case 0x29f5ecu: goto label_29f5ec;
        case 0x29f5f0u: goto label_29f5f0;
        case 0x29f5f4u: goto label_29f5f4;
        case 0x29f5f8u: goto label_29f5f8;
        case 0x29f5fcu: goto label_29f5fc;
        case 0x29f600u: goto label_29f600;
        case 0x29f604u: goto label_29f604;
        case 0x29f608u: goto label_29f608;
        case 0x29f60cu: goto label_29f60c;
        case 0x29f610u: goto label_29f610;
        case 0x29f614u: goto label_29f614;
        case 0x29f618u: goto label_29f618;
        case 0x29f61cu: goto label_29f61c;
        case 0x29f620u: goto label_29f620;
        case 0x29f624u: goto label_29f624;
        case 0x29f628u: goto label_29f628;
        case 0x29f62cu: goto label_29f62c;
        case 0x29f630u: goto label_29f630;
        case 0x29f634u: goto label_29f634;
        case 0x29f638u: goto label_29f638;
        case 0x29f63cu: goto label_29f63c;
        case 0x29f640u: goto label_29f640;
        case 0x29f644u: goto label_29f644;
        case 0x29f648u: goto label_29f648;
        case 0x29f64cu: goto label_29f64c;
        case 0x29f650u: goto label_29f650;
        case 0x29f654u: goto label_29f654;
        case 0x29f658u: goto label_29f658;
        case 0x29f65cu: goto label_29f65c;
        case 0x29f660u: goto label_29f660;
        case 0x29f664u: goto label_29f664;
        case 0x29f668u: goto label_29f668;
        case 0x29f66cu: goto label_29f66c;
        case 0x29f670u: goto label_29f670;
        case 0x29f674u: goto label_29f674;
        case 0x29f678u: goto label_29f678;
        case 0x29f67cu: goto label_29f67c;
        case 0x29f680u: goto label_29f680;
        case 0x29f684u: goto label_29f684;
        case 0x29f688u: goto label_29f688;
        case 0x29f68cu: goto label_29f68c;
        case 0x29f690u: goto label_29f690;
        case 0x29f694u: goto label_29f694;
        case 0x29f698u: goto label_29f698;
        case 0x29f69cu: goto label_29f69c;
        case 0x29f6a0u: goto label_29f6a0;
        case 0x29f6a4u: goto label_29f6a4;
        case 0x29f6a8u: goto label_29f6a8;
        case 0x29f6acu: goto label_29f6ac;
        case 0x29f6b0u: goto label_29f6b0;
        case 0x29f6b4u: goto label_29f6b4;
        case 0x29f6b8u: goto label_29f6b8;
        case 0x29f6bcu: goto label_29f6bc;
        case 0x29f6c0u: goto label_29f6c0;
        case 0x29f6c4u: goto label_29f6c4;
        case 0x29f6c8u: goto label_29f6c8;
        case 0x29f6ccu: goto label_29f6cc;
        case 0x29f6d0u: goto label_29f6d0;
        case 0x29f6d4u: goto label_29f6d4;
        case 0x29f6d8u: goto label_29f6d8;
        case 0x29f6dcu: goto label_29f6dc;
        case 0x29f6e0u: goto label_29f6e0;
        case 0x29f6e4u: goto label_29f6e4;
        case 0x29f6e8u: goto label_29f6e8;
        case 0x29f6ecu: goto label_29f6ec;
        case 0x29f6f0u: goto label_29f6f0;
        case 0x29f6f4u: goto label_29f6f4;
        case 0x29f6f8u: goto label_29f6f8;
        case 0x29f6fcu: goto label_29f6fc;
        case 0x29f700u: goto label_29f700;
        case 0x29f704u: goto label_29f704;
        case 0x29f708u: goto label_29f708;
        case 0x29f70cu: goto label_29f70c;
        case 0x29f710u: goto label_29f710;
        case 0x29f714u: goto label_29f714;
        case 0x29f718u: goto label_29f718;
        case 0x29f71cu: goto label_29f71c;
        case 0x29f720u: goto label_29f720;
        case 0x29f724u: goto label_29f724;
        case 0x29f728u: goto label_29f728;
        case 0x29f72cu: goto label_29f72c;
        case 0x29f730u: goto label_29f730;
        case 0x29f734u: goto label_29f734;
        case 0x29f738u: goto label_29f738;
        case 0x29f73cu: goto label_29f73c;
        case 0x29f740u: goto label_29f740;
        case 0x29f744u: goto label_29f744;
        case 0x29f748u: goto label_29f748;
        case 0x29f74cu: goto label_29f74c;
        case 0x29f750u: goto label_29f750;
        case 0x29f754u: goto label_29f754;
        case 0x29f758u: goto label_29f758;
        case 0x29f75cu: goto label_29f75c;
        case 0x29f760u: goto label_29f760;
        case 0x29f764u: goto label_29f764;
        case 0x29f768u: goto label_29f768;
        case 0x29f76cu: goto label_29f76c;
        case 0x29f770u: goto label_29f770;
        case 0x29f774u: goto label_29f774;
        case 0x29f778u: goto label_29f778;
        case 0x29f77cu: goto label_29f77c;
        case 0x29f780u: goto label_29f780;
        case 0x29f784u: goto label_29f784;
        case 0x29f788u: goto label_29f788;
        case 0x29f78cu: goto label_29f78c;
        case 0x29f790u: goto label_29f790;
        case 0x29f794u: goto label_29f794;
        case 0x29f798u: goto label_29f798;
        case 0x29f79cu: goto label_29f79c;
        case 0x29f7a0u: goto label_29f7a0;
        case 0x29f7a4u: goto label_29f7a4;
        case 0x29f7a8u: goto label_29f7a8;
        case 0x29f7acu: goto label_29f7ac;
        case 0x29f7b0u: goto label_29f7b0;
        case 0x29f7b4u: goto label_29f7b4;
        case 0x29f7b8u: goto label_29f7b8;
        case 0x29f7bcu: goto label_29f7bc;
        case 0x29f7c0u: goto label_29f7c0;
        case 0x29f7c4u: goto label_29f7c4;
        case 0x29f7c8u: goto label_29f7c8;
        case 0x29f7ccu: goto label_29f7cc;
        case 0x29f7d0u: goto label_29f7d0;
        case 0x29f7d4u: goto label_29f7d4;
        case 0x29f7d8u: goto label_29f7d8;
        case 0x29f7dcu: goto label_29f7dc;
        case 0x29f7e0u: goto label_29f7e0;
        case 0x29f7e4u: goto label_29f7e4;
        case 0x29f7e8u: goto label_29f7e8;
        case 0x29f7ecu: goto label_29f7ec;
        case 0x29f7f0u: goto label_29f7f0;
        case 0x29f7f4u: goto label_29f7f4;
        case 0x29f7f8u: goto label_29f7f8;
        case 0x29f7fcu: goto label_29f7fc;
        case 0x29f800u: goto label_29f800;
        case 0x29f804u: goto label_29f804;
        case 0x29f808u: goto label_29f808;
        case 0x29f80cu: goto label_29f80c;
        case 0x29f810u: goto label_29f810;
        case 0x29f814u: goto label_29f814;
        case 0x29f818u: goto label_29f818;
        case 0x29f81cu: goto label_29f81c;
        case 0x29f820u: goto label_29f820;
        case 0x29f824u: goto label_29f824;
        case 0x29f828u: goto label_29f828;
        case 0x29f82cu: goto label_29f82c;
        case 0x29f830u: goto label_29f830;
        case 0x29f834u: goto label_29f834;
        case 0x29f838u: goto label_29f838;
        case 0x29f83cu: goto label_29f83c;
        case 0x29f840u: goto label_29f840;
        case 0x29f844u: goto label_29f844;
        case 0x29f848u: goto label_29f848;
        case 0x29f84cu: goto label_29f84c;
        case 0x29f850u: goto label_29f850;
        case 0x29f854u: goto label_29f854;
        case 0x29f858u: goto label_29f858;
        case 0x29f85cu: goto label_29f85c;
        case 0x29f860u: goto label_29f860;
        case 0x29f864u: goto label_29f864;
        case 0x29f868u: goto label_29f868;
        case 0x29f86cu: goto label_29f86c;
        case 0x29f870u: goto label_29f870;
        case 0x29f874u: goto label_29f874;
        case 0x29f878u: goto label_29f878;
        case 0x29f87cu: goto label_29f87c;
        case 0x29f880u: goto label_29f880;
        case 0x29f884u: goto label_29f884;
        case 0x29f888u: goto label_29f888;
        case 0x29f88cu: goto label_29f88c;
        case 0x29f890u: goto label_29f890;
        case 0x29f894u: goto label_29f894;
        case 0x29f898u: goto label_29f898;
        case 0x29f89cu: goto label_29f89c;
        case 0x29f8a0u: goto label_29f8a0;
        case 0x29f8a4u: goto label_29f8a4;
        case 0x29f8a8u: goto label_29f8a8;
        case 0x29f8acu: goto label_29f8ac;
        case 0x29f8b0u: goto label_29f8b0;
        case 0x29f8b4u: goto label_29f8b4;
        case 0x29f8b8u: goto label_29f8b8;
        case 0x29f8bcu: goto label_29f8bc;
        case 0x29f8c0u: goto label_29f8c0;
        case 0x29f8c4u: goto label_29f8c4;
        case 0x29f8c8u: goto label_29f8c8;
        case 0x29f8ccu: goto label_29f8cc;
        case 0x29f8d0u: goto label_29f8d0;
        case 0x29f8d4u: goto label_29f8d4;
        case 0x29f8d8u: goto label_29f8d8;
        case 0x29f8dcu: goto label_29f8dc;
        case 0x29f8e0u: goto label_29f8e0;
        case 0x29f8e4u: goto label_29f8e4;
        case 0x29f8e8u: goto label_29f8e8;
        case 0x29f8ecu: goto label_29f8ec;
        case 0x29f8f0u: goto label_29f8f0;
        case 0x29f8f4u: goto label_29f8f4;
        case 0x29f8f8u: goto label_29f8f8;
        case 0x29f8fcu: goto label_29f8fc;
        case 0x29f900u: goto label_29f900;
        case 0x29f904u: goto label_29f904;
        case 0x29f908u: goto label_29f908;
        case 0x29f90cu: goto label_29f90c;
        case 0x29f910u: goto label_29f910;
        case 0x29f914u: goto label_29f914;
        case 0x29f918u: goto label_29f918;
        case 0x29f91cu: goto label_29f91c;
        case 0x29f920u: goto label_29f920;
        case 0x29f924u: goto label_29f924;
        case 0x29f928u: goto label_29f928;
        case 0x29f92cu: goto label_29f92c;
        case 0x29f930u: goto label_29f930;
        case 0x29f934u: goto label_29f934;
        case 0x29f938u: goto label_29f938;
        case 0x29f93cu: goto label_29f93c;
        case 0x29f940u: goto label_29f940;
        case 0x29f944u: goto label_29f944;
        case 0x29f948u: goto label_29f948;
        case 0x29f94cu: goto label_29f94c;
        case 0x29f950u: goto label_29f950;
        case 0x29f954u: goto label_29f954;
        case 0x29f958u: goto label_29f958;
        case 0x29f95cu: goto label_29f95c;
        case 0x29f960u: goto label_29f960;
        case 0x29f964u: goto label_29f964;
        case 0x29f968u: goto label_29f968;
        case 0x29f96cu: goto label_29f96c;
        case 0x29f970u: goto label_29f970;
        case 0x29f974u: goto label_29f974;
        case 0x29f978u: goto label_29f978;
        case 0x29f97cu: goto label_29f97c;
        case 0x29f980u: goto label_29f980;
        case 0x29f984u: goto label_29f984;
        case 0x29f988u: goto label_29f988;
        case 0x29f98cu: goto label_29f98c;
        case 0x29f990u: goto label_29f990;
        case 0x29f994u: goto label_29f994;
        case 0x29f998u: goto label_29f998;
        case 0x29f99cu: goto label_29f99c;
        case 0x29f9a0u: goto label_29f9a0;
        case 0x29f9a4u: goto label_29f9a4;
        case 0x29f9a8u: goto label_29f9a8;
        case 0x29f9acu: goto label_29f9ac;
        case 0x29f9b0u: goto label_29f9b0;
        case 0x29f9b4u: goto label_29f9b4;
        case 0x29f9b8u: goto label_29f9b8;
        case 0x29f9bcu: goto label_29f9bc;
        case 0x29f9c0u: goto label_29f9c0;
        case 0x29f9c4u: goto label_29f9c4;
        case 0x29f9c8u: goto label_29f9c8;
        case 0x29f9ccu: goto label_29f9cc;
        case 0x29f9d0u: goto label_29f9d0;
        case 0x29f9d4u: goto label_29f9d4;
        case 0x29f9d8u: goto label_29f9d8;
        case 0x29f9dcu: goto label_29f9dc;
        case 0x29f9e0u: goto label_29f9e0;
        case 0x29f9e4u: goto label_29f9e4;
        case 0x29f9e8u: goto label_29f9e8;
        case 0x29f9ecu: goto label_29f9ec;
        case 0x29f9f0u: goto label_29f9f0;
        case 0x29f9f4u: goto label_29f9f4;
        case 0x29f9f8u: goto label_29f9f8;
        case 0x29f9fcu: goto label_29f9fc;
        case 0x29fa00u: goto label_29fa00;
        case 0x29fa04u: goto label_29fa04;
        case 0x29fa08u: goto label_29fa08;
        case 0x29fa0cu: goto label_29fa0c;
        case 0x29fa10u: goto label_29fa10;
        case 0x29fa14u: goto label_29fa14;
        case 0x29fa18u: goto label_29fa18;
        case 0x29fa1cu: goto label_29fa1c;
        case 0x29fa20u: goto label_29fa20;
        case 0x29fa24u: goto label_29fa24;
        case 0x29fa28u: goto label_29fa28;
        case 0x29fa2cu: goto label_29fa2c;
        case 0x29fa30u: goto label_29fa30;
        case 0x29fa34u: goto label_29fa34;
        case 0x29fa38u: goto label_29fa38;
        case 0x29fa3cu: goto label_29fa3c;
        case 0x29fa40u: goto label_29fa40;
        case 0x29fa44u: goto label_29fa44;
        case 0x29fa48u: goto label_29fa48;
        case 0x29fa4cu: goto label_29fa4c;
        case 0x29fa50u: goto label_29fa50;
        case 0x29fa54u: goto label_29fa54;
        case 0x29fa58u: goto label_29fa58;
        case 0x29fa5cu: goto label_29fa5c;
        case 0x29fa60u: goto label_29fa60;
        case 0x29fa64u: goto label_29fa64;
        case 0x29fa68u: goto label_29fa68;
        case 0x29fa6cu: goto label_29fa6c;
        case 0x29fa70u: goto label_29fa70;
        case 0x29fa74u: goto label_29fa74;
        case 0x29fa78u: goto label_29fa78;
        case 0x29fa7cu: goto label_29fa7c;
        case 0x29fa80u: goto label_29fa80;
        case 0x29fa84u: goto label_29fa84;
        case 0x29fa88u: goto label_29fa88;
        case 0x29fa8cu: goto label_29fa8c;
        case 0x29fa90u: goto label_29fa90;
        case 0x29fa94u: goto label_29fa94;
        case 0x29fa98u: goto label_29fa98;
        case 0x29fa9cu: goto label_29fa9c;
        case 0x29faa0u: goto label_29faa0;
        case 0x29faa4u: goto label_29faa4;
        case 0x29faa8u: goto label_29faa8;
        case 0x29faacu: goto label_29faac;
        case 0x29fab0u: goto label_29fab0;
        case 0x29fab4u: goto label_29fab4;
        case 0x29fab8u: goto label_29fab8;
        case 0x29fabcu: goto label_29fabc;
        case 0x29fac0u: goto label_29fac0;
        case 0x29fac4u: goto label_29fac4;
        case 0x29fac8u: goto label_29fac8;
        case 0x29faccu: goto label_29facc;
        case 0x29fad0u: goto label_29fad0;
        case 0x29fad4u: goto label_29fad4;
        case 0x29fad8u: goto label_29fad8;
        case 0x29fadcu: goto label_29fadc;
        case 0x29fae0u: goto label_29fae0;
        case 0x29fae4u: goto label_29fae4;
        case 0x29fae8u: goto label_29fae8;
        case 0x29faecu: goto label_29faec;
        case 0x29faf0u: goto label_29faf0;
        case 0x29faf4u: goto label_29faf4;
        case 0x29faf8u: goto label_29faf8;
        case 0x29fafcu: goto label_29fafc;
        case 0x29fb00u: goto label_29fb00;
        case 0x29fb04u: goto label_29fb04;
        case 0x29fb08u: goto label_29fb08;
        case 0x29fb0cu: goto label_29fb0c;
        case 0x29fb10u: goto label_29fb10;
        case 0x29fb14u: goto label_29fb14;
        case 0x29fb18u: goto label_29fb18;
        case 0x29fb1cu: goto label_29fb1c;
        case 0x29fb20u: goto label_29fb20;
        case 0x29fb24u: goto label_29fb24;
        case 0x29fb28u: goto label_29fb28;
        case 0x29fb2cu: goto label_29fb2c;
        case 0x29fb30u: goto label_29fb30;
        case 0x29fb34u: goto label_29fb34;
        case 0x29fb38u: goto label_29fb38;
        case 0x29fb3cu: goto label_29fb3c;
        case 0x29fb40u: goto label_29fb40;
        case 0x29fb44u: goto label_29fb44;
        case 0x29fb48u: goto label_29fb48;
        case 0x29fb4cu: goto label_29fb4c;
        case 0x29fb50u: goto label_29fb50;
        case 0x29fb54u: goto label_29fb54;
        case 0x29fb58u: goto label_29fb58;
        case 0x29fb5cu: goto label_29fb5c;
        case 0x29fb60u: goto label_29fb60;
        case 0x29fb64u: goto label_29fb64;
        case 0x29fb68u: goto label_29fb68;
        case 0x29fb6cu: goto label_29fb6c;
        case 0x29fb70u: goto label_29fb70;
        case 0x29fb74u: goto label_29fb74;
        case 0x29fb78u: goto label_29fb78;
        case 0x29fb7cu: goto label_29fb7c;
        case 0x29fb80u: goto label_29fb80;
        case 0x29fb84u: goto label_29fb84;
        case 0x29fb88u: goto label_29fb88;
        case 0x29fb8cu: goto label_29fb8c;
        case 0x29fb90u: goto label_29fb90;
        case 0x29fb94u: goto label_29fb94;
        case 0x29fb98u: goto label_29fb98;
        case 0x29fb9cu: goto label_29fb9c;
        case 0x29fba0u: goto label_29fba0;
        case 0x29fba4u: goto label_29fba4;
        case 0x29fba8u: goto label_29fba8;
        case 0x29fbacu: goto label_29fbac;
        case 0x29fbb0u: goto label_29fbb0;
        case 0x29fbb4u: goto label_29fbb4;
        case 0x29fbb8u: goto label_29fbb8;
        case 0x29fbbcu: goto label_29fbbc;
        case 0x29fbc0u: goto label_29fbc0;
        case 0x29fbc4u: goto label_29fbc4;
        case 0x29fbc8u: goto label_29fbc8;
        case 0x29fbccu: goto label_29fbcc;
        case 0x29fbd0u: goto label_29fbd0;
        case 0x29fbd4u: goto label_29fbd4;
        case 0x29fbd8u: goto label_29fbd8;
        case 0x29fbdcu: goto label_29fbdc;
        case 0x29fbe0u: goto label_29fbe0;
        case 0x29fbe4u: goto label_29fbe4;
        case 0x29fbe8u: goto label_29fbe8;
        case 0x29fbecu: goto label_29fbec;
        case 0x29fbf0u: goto label_29fbf0;
        case 0x29fbf4u: goto label_29fbf4;
        case 0x29fbf8u: goto label_29fbf8;
        case 0x29fbfcu: goto label_29fbfc;
        case 0x29fc00u: goto label_29fc00;
        case 0x29fc04u: goto label_29fc04;
        case 0x29fc08u: goto label_29fc08;
        case 0x29fc0cu: goto label_29fc0c;
        case 0x29fc10u: goto label_29fc10;
        case 0x29fc14u: goto label_29fc14;
        case 0x29fc18u: goto label_29fc18;
        case 0x29fc1cu: goto label_29fc1c;
        case 0x29fc20u: goto label_29fc20;
        case 0x29fc24u: goto label_29fc24;
        case 0x29fc28u: goto label_29fc28;
        case 0x29fc2cu: goto label_29fc2c;
        case 0x29fc30u: goto label_29fc30;
        case 0x29fc34u: goto label_29fc34;
        case 0x29fc38u: goto label_29fc38;
        case 0x29fc3cu: goto label_29fc3c;
        case 0x29fc40u: goto label_29fc40;
        case 0x29fc44u: goto label_29fc44;
        case 0x29fc48u: goto label_29fc48;
        case 0x29fc4cu: goto label_29fc4c;
        case 0x29fc50u: goto label_29fc50;
        case 0x29fc54u: goto label_29fc54;
        case 0x29fc58u: goto label_29fc58;
        case 0x29fc5cu: goto label_29fc5c;
        case 0x29fc60u: goto label_29fc60;
        case 0x29fc64u: goto label_29fc64;
        case 0x29fc68u: goto label_29fc68;
        case 0x29fc6cu: goto label_29fc6c;
        case 0x29fc70u: goto label_29fc70;
        case 0x29fc74u: goto label_29fc74;
        case 0x29fc78u: goto label_29fc78;
        case 0x29fc7cu: goto label_29fc7c;
        case 0x29fc80u: goto label_29fc80;
        case 0x29fc84u: goto label_29fc84;
        case 0x29fc88u: goto label_29fc88;
        case 0x29fc8cu: goto label_29fc8c;
        case 0x29fc90u: goto label_29fc90;
        case 0x29fc94u: goto label_29fc94;
        case 0x29fc98u: goto label_29fc98;
        case 0x29fc9cu: goto label_29fc9c;
        case 0x29fca0u: goto label_29fca0;
        case 0x29fca4u: goto label_29fca4;
        case 0x29fca8u: goto label_29fca8;
        case 0x29fcacu: goto label_29fcac;
        case 0x29fcb0u: goto label_29fcb0;
        case 0x29fcb4u: goto label_29fcb4;
        case 0x29fcb8u: goto label_29fcb8;
        case 0x29fcbcu: goto label_29fcbc;
        case 0x29fcc0u: goto label_29fcc0;
        case 0x29fcc4u: goto label_29fcc4;
        case 0x29fcc8u: goto label_29fcc8;
        case 0x29fcccu: goto label_29fccc;
        case 0x29fcd0u: goto label_29fcd0;
        case 0x29fcd4u: goto label_29fcd4;
        case 0x29fcd8u: goto label_29fcd8;
        case 0x29fcdcu: goto label_29fcdc;
        case 0x29fce0u: goto label_29fce0;
        case 0x29fce4u: goto label_29fce4;
        case 0x29fce8u: goto label_29fce8;
        case 0x29fcecu: goto label_29fcec;
        case 0x29fcf0u: goto label_29fcf0;
        case 0x29fcf4u: goto label_29fcf4;
        case 0x29fcf8u: goto label_29fcf8;
        case 0x29fcfcu: goto label_29fcfc;
        case 0x29fd00u: goto label_29fd00;
        case 0x29fd04u: goto label_29fd04;
        case 0x29fd08u: goto label_29fd08;
        case 0x29fd0cu: goto label_29fd0c;
        case 0x29fd10u: goto label_29fd10;
        case 0x29fd14u: goto label_29fd14;
        case 0x29fd18u: goto label_29fd18;
        case 0x29fd1cu: goto label_29fd1c;
        case 0x29fd20u: goto label_29fd20;
        case 0x29fd24u: goto label_29fd24;
        case 0x29fd28u: goto label_29fd28;
        case 0x29fd2cu: goto label_29fd2c;
        case 0x29fd30u: goto label_29fd30;
        case 0x29fd34u: goto label_29fd34;
        case 0x29fd38u: goto label_29fd38;
        case 0x29fd3cu: goto label_29fd3c;
        case 0x29fd40u: goto label_29fd40;
        case 0x29fd44u: goto label_29fd44;
        case 0x29fd48u: goto label_29fd48;
        case 0x29fd4cu: goto label_29fd4c;
        case 0x29fd50u: goto label_29fd50;
        case 0x29fd54u: goto label_29fd54;
        case 0x29fd58u: goto label_29fd58;
        case 0x29fd5cu: goto label_29fd5c;
        case 0x29fd60u: goto label_29fd60;
        case 0x29fd64u: goto label_29fd64;
        case 0x29fd68u: goto label_29fd68;
        case 0x29fd6cu: goto label_29fd6c;
        case 0x29fd70u: goto label_29fd70;
        case 0x29fd74u: goto label_29fd74;
        case 0x29fd78u: goto label_29fd78;
        case 0x29fd7cu: goto label_29fd7c;
        case 0x29fd80u: goto label_29fd80;
        case 0x29fd84u: goto label_29fd84;
        case 0x29fd88u: goto label_29fd88;
        case 0x29fd8cu: goto label_29fd8c;
        case 0x29fd90u: goto label_29fd90;
        case 0x29fd94u: goto label_29fd94;
        case 0x29fd98u: goto label_29fd98;
        case 0x29fd9cu: goto label_29fd9c;
        case 0x29fda0u: goto label_29fda0;
        case 0x29fda4u: goto label_29fda4;
        case 0x29fda8u: goto label_29fda8;
        case 0x29fdacu: goto label_29fdac;
        case 0x29fdb0u: goto label_29fdb0;
        case 0x29fdb4u: goto label_29fdb4;
        case 0x29fdb8u: goto label_29fdb8;
        case 0x29fdbcu: goto label_29fdbc;
        case 0x29fdc0u: goto label_29fdc0;
        case 0x29fdc4u: goto label_29fdc4;
        case 0x29fdc8u: goto label_29fdc8;
        case 0x29fdccu: goto label_29fdcc;
        case 0x29fdd0u: goto label_29fdd0;
        case 0x29fdd4u: goto label_29fdd4;
        case 0x29fdd8u: goto label_29fdd8;
        case 0x29fddcu: goto label_29fddc;
        case 0x29fde0u: goto label_29fde0;
        case 0x29fde4u: goto label_29fde4;
        case 0x29fde8u: goto label_29fde8;
        case 0x29fdecu: goto label_29fdec;
        case 0x29fdf0u: goto label_29fdf0;
        case 0x29fdf4u: goto label_29fdf4;
        case 0x29fdf8u: goto label_29fdf8;
        case 0x29fdfcu: goto label_29fdfc;
        case 0x29fe00u: goto label_29fe00;
        case 0x29fe04u: goto label_29fe04;
        case 0x29fe08u: goto label_29fe08;
        case 0x29fe0cu: goto label_29fe0c;
        case 0x29fe10u: goto label_29fe10;
        case 0x29fe14u: goto label_29fe14;
        case 0x29fe18u: goto label_29fe18;
        case 0x29fe1cu: goto label_29fe1c;
        case 0x29fe20u: goto label_29fe20;
        case 0x29fe24u: goto label_29fe24;
        case 0x29fe28u: goto label_29fe28;
        case 0x29fe2cu: goto label_29fe2c;
        case 0x29fe30u: goto label_29fe30;
        case 0x29fe34u: goto label_29fe34;
        case 0x29fe38u: goto label_29fe38;
        case 0x29fe3cu: goto label_29fe3c;
        case 0x29fe40u: goto label_29fe40;
        case 0x29fe44u: goto label_29fe44;
        case 0x29fe48u: goto label_29fe48;
        case 0x29fe4cu: goto label_29fe4c;
        case 0x29fe50u: goto label_29fe50;
        case 0x29fe54u: goto label_29fe54;
        case 0x29fe58u: goto label_29fe58;
        case 0x29fe5cu: goto label_29fe5c;
        case 0x29fe60u: goto label_29fe60;
        case 0x29fe64u: goto label_29fe64;
        case 0x29fe68u: goto label_29fe68;
        case 0x29fe6cu: goto label_29fe6c;
        case 0x29fe70u: goto label_29fe70;
        case 0x29fe74u: goto label_29fe74;
        case 0x29fe78u: goto label_29fe78;
        case 0x29fe7cu: goto label_29fe7c;
        case 0x29fe80u: goto label_29fe80;
        case 0x29fe84u: goto label_29fe84;
        case 0x29fe88u: goto label_29fe88;
        case 0x29fe8cu: goto label_29fe8c;
        case 0x29fe90u: goto label_29fe90;
        case 0x29fe94u: goto label_29fe94;
        case 0x29fe98u: goto label_29fe98;
        case 0x29fe9cu: goto label_29fe9c;
        case 0x29fea0u: goto label_29fea0;
        case 0x29fea4u: goto label_29fea4;
        case 0x29fea8u: goto label_29fea8;
        case 0x29feacu: goto label_29feac;
        case 0x29feb0u: goto label_29feb0;
        case 0x29feb4u: goto label_29feb4;
        case 0x29feb8u: goto label_29feb8;
        case 0x29febcu: goto label_29febc;
        case 0x29fec0u: goto label_29fec0;
        case 0x29fec4u: goto label_29fec4;
        case 0x29fec8u: goto label_29fec8;
        case 0x29feccu: goto label_29fecc;
        case 0x29fed0u: goto label_29fed0;
        case 0x29fed4u: goto label_29fed4;
        case 0x29fed8u: goto label_29fed8;
        case 0x29fedcu: goto label_29fedc;
        case 0x29fee0u: goto label_29fee0;
        case 0x29fee4u: goto label_29fee4;
        case 0x29fee8u: goto label_29fee8;
        case 0x29feecu: goto label_29feec;
        case 0x29fef0u: goto label_29fef0;
        case 0x29fef4u: goto label_29fef4;
        case 0x29fef8u: goto label_29fef8;
        case 0x29fefcu: goto label_29fefc;
        case 0x29ff00u: goto label_29ff00;
        case 0x29ff04u: goto label_29ff04;
        case 0x29ff08u: goto label_29ff08;
        case 0x29ff0cu: goto label_29ff0c;
        case 0x29ff10u: goto label_29ff10;
        case 0x29ff14u: goto label_29ff14;
        case 0x29ff18u: goto label_29ff18;
        case 0x29ff1cu: goto label_29ff1c;
        case 0x29ff20u: goto label_29ff20;
        case 0x29ff24u: goto label_29ff24;
        case 0x29ff28u: goto label_29ff28;
        case 0x29ff2cu: goto label_29ff2c;
        case 0x29ff30u: goto label_29ff30;
        case 0x29ff34u: goto label_29ff34;
        case 0x29ff38u: goto label_29ff38;
        case 0x29ff3cu: goto label_29ff3c;
        case 0x29ff40u: goto label_29ff40;
        case 0x29ff44u: goto label_29ff44;
        case 0x29ff48u: goto label_29ff48;
        case 0x29ff4cu: goto label_29ff4c;
        case 0x29ff50u: goto label_29ff50;
        case 0x29ff54u: goto label_29ff54;
        case 0x29ff58u: goto label_29ff58;
        case 0x29ff5cu: goto label_29ff5c;
        case 0x29ff60u: goto label_29ff60;
        case 0x29ff64u: goto label_29ff64;
        case 0x29ff68u: goto label_29ff68;
        case 0x29ff6cu: goto label_29ff6c;
        case 0x29ff70u: goto label_29ff70;
        case 0x29ff74u: goto label_29ff74;
        case 0x29ff78u: goto label_29ff78;
        case 0x29ff7cu: goto label_29ff7c;
        case 0x29ff80u: goto label_29ff80;
        case 0x29ff84u: goto label_29ff84;
        case 0x29ff88u: goto label_29ff88;
        case 0x29ff8cu: goto label_29ff8c;
        case 0x29ff90u: goto label_29ff90;
        case 0x29ff94u: goto label_29ff94;
        case 0x29ff98u: goto label_29ff98;
        case 0x29ff9cu: goto label_29ff9c;
        case 0x29ffa0u: goto label_29ffa0;
        case 0x29ffa4u: goto label_29ffa4;
        case 0x29ffa8u: goto label_29ffa8;
        case 0x29ffacu: goto label_29ffac;
        case 0x29ffb0u: goto label_29ffb0;
        case 0x29ffb4u: goto label_29ffb4;
        case 0x29ffb8u: goto label_29ffb8;
        case 0x29ffbcu: goto label_29ffbc;
        case 0x29ffc0u: goto label_29ffc0;
        case 0x29ffc4u: goto label_29ffc4;
        case 0x29ffc8u: goto label_29ffc8;
        case 0x29ffccu: goto label_29ffcc;
        case 0x29ffd0u: goto label_29ffd0;
        case 0x29ffd4u: goto label_29ffd4;
        case 0x29ffd8u: goto label_29ffd8;
        case 0x29ffdcu: goto label_29ffdc;
        case 0x29ffe0u: goto label_29ffe0;
        case 0x29ffe4u: goto label_29ffe4;
        case 0x29ffe8u: goto label_29ffe8;
        case 0x29ffecu: goto label_29ffec;
        case 0x29fff0u: goto label_29fff0;
        case 0x29fff4u: goto label_29fff4;
        case 0x29fff8u: goto label_29fff8;
        case 0x29fffcu: goto label_29fffc;
        case 0x2a0000u: goto label_2a0000;
        case 0x2a0004u: goto label_2a0004;
        case 0x2a0008u: goto label_2a0008;
        case 0x2a000cu: goto label_2a000c;
        case 0x2a0010u: goto label_2a0010;
        case 0x2a0014u: goto label_2a0014;
        case 0x2a0018u: goto label_2a0018;
        case 0x2a001cu: goto label_2a001c;
        case 0x2a0020u: goto label_2a0020;
        case 0x2a0024u: goto label_2a0024;
        case 0x2a0028u: goto label_2a0028;
        case 0x2a002cu: goto label_2a002c;
        case 0x2a0030u: goto label_2a0030;
        case 0x2a0034u: goto label_2a0034;
        case 0x2a0038u: goto label_2a0038;
        case 0x2a003cu: goto label_2a003c;
        case 0x2a0040u: goto label_2a0040;
        case 0x2a0044u: goto label_2a0044;
        case 0x2a0048u: goto label_2a0048;
        case 0x2a004cu: goto label_2a004c;
        case 0x2a0050u: goto label_2a0050;
        case 0x2a0054u: goto label_2a0054;
        case 0x2a0058u: goto label_2a0058;
        case 0x2a005cu: goto label_2a005c;
        case 0x2a0060u: goto label_2a0060;
        case 0x2a0064u: goto label_2a0064;
        case 0x2a0068u: goto label_2a0068;
        case 0x2a006cu: goto label_2a006c;
        case 0x2a0070u: goto label_2a0070;
        case 0x2a0074u: goto label_2a0074;
        case 0x2a0078u: goto label_2a0078;
        case 0x2a007cu: goto label_2a007c;
        case 0x2a0080u: goto label_2a0080;
        case 0x2a0084u: goto label_2a0084;
        case 0x2a0088u: goto label_2a0088;
        case 0x2a008cu: goto label_2a008c;
        case 0x2a0090u: goto label_2a0090;
        case 0x2a0094u: goto label_2a0094;
        case 0x2a0098u: goto label_2a0098;
        case 0x2a009cu: goto label_2a009c;
        case 0x2a00a0u: goto label_2a00a0;
        case 0x2a00a4u: goto label_2a00a4;
        case 0x2a00a8u: goto label_2a00a8;
        case 0x2a00acu: goto label_2a00ac;
        case 0x2a00b0u: goto label_2a00b0;
        case 0x2a00b4u: goto label_2a00b4;
        case 0x2a00b8u: goto label_2a00b8;
        case 0x2a00bcu: goto label_2a00bc;
        case 0x2a00c0u: goto label_2a00c0;
        case 0x2a00c4u: goto label_2a00c4;
        case 0x2a00c8u: goto label_2a00c8;
        case 0x2a00ccu: goto label_2a00cc;
        case 0x2a00d0u: goto label_2a00d0;
        case 0x2a00d4u: goto label_2a00d4;
        case 0x2a00d8u: goto label_2a00d8;
        case 0x2a00dcu: goto label_2a00dc;
        case 0x2a00e0u: goto label_2a00e0;
        case 0x2a00e4u: goto label_2a00e4;
        case 0x2a00e8u: goto label_2a00e8;
        case 0x2a00ecu: goto label_2a00ec;
        case 0x2a00f0u: goto label_2a00f0;
        case 0x2a00f4u: goto label_2a00f4;
        case 0x2a00f8u: goto label_2a00f8;
        case 0x2a00fcu: goto label_2a00fc;
        case 0x2a0100u: goto label_2a0100;
        case 0x2a0104u: goto label_2a0104;
        case 0x2a0108u: goto label_2a0108;
        case 0x2a010cu: goto label_2a010c;
        case 0x2a0110u: goto label_2a0110;
        case 0x2a0114u: goto label_2a0114;
        case 0x2a0118u: goto label_2a0118;
        case 0x2a011cu: goto label_2a011c;
        case 0x2a0120u: goto label_2a0120;
        case 0x2a0124u: goto label_2a0124;
        case 0x2a0128u: goto label_2a0128;
        case 0x2a012cu: goto label_2a012c;
        case 0x2a0130u: goto label_2a0130;
        case 0x2a0134u: goto label_2a0134;
        case 0x2a0138u: goto label_2a0138;
        case 0x2a013cu: goto label_2a013c;
        case 0x2a0140u: goto label_2a0140;
        case 0x2a0144u: goto label_2a0144;
        case 0x2a0148u: goto label_2a0148;
        case 0x2a014cu: goto label_2a014c;
        case 0x2a0150u: goto label_2a0150;
        case 0x2a0154u: goto label_2a0154;
        case 0x2a0158u: goto label_2a0158;
        case 0x2a015cu: goto label_2a015c;
        case 0x2a0160u: goto label_2a0160;
        case 0x2a0164u: goto label_2a0164;
        case 0x2a0168u: goto label_2a0168;
        case 0x2a016cu: goto label_2a016c;
        case 0x2a0170u: goto label_2a0170;
        case 0x2a0174u: goto label_2a0174;
        case 0x2a0178u: goto label_2a0178;
        case 0x2a017cu: goto label_2a017c;
        case 0x2a0180u: goto label_2a0180;
        case 0x2a0184u: goto label_2a0184;
        case 0x2a0188u: goto label_2a0188;
        case 0x2a018cu: goto label_2a018c;
        case 0x2a0190u: goto label_2a0190;
        case 0x2a0194u: goto label_2a0194;
        case 0x2a0198u: goto label_2a0198;
        case 0x2a019cu: goto label_2a019c;
        case 0x2a01a0u: goto label_2a01a0;
        case 0x2a01a4u: goto label_2a01a4;
        case 0x2a01a8u: goto label_2a01a8;
        case 0x2a01acu: goto label_2a01ac;
        case 0x2a01b0u: goto label_2a01b0;
        case 0x2a01b4u: goto label_2a01b4;
        case 0x2a01b8u: goto label_2a01b8;
        case 0x2a01bcu: goto label_2a01bc;
        case 0x2a01c0u: goto label_2a01c0;
        case 0x2a01c4u: goto label_2a01c4;
        case 0x2a01c8u: goto label_2a01c8;
        case 0x2a01ccu: goto label_2a01cc;
        case 0x2a01d0u: goto label_2a01d0;
        case 0x2a01d4u: goto label_2a01d4;
        case 0x2a01d8u: goto label_2a01d8;
        case 0x2a01dcu: goto label_2a01dc;
        case 0x2a01e0u: goto label_2a01e0;
        case 0x2a01e4u: goto label_2a01e4;
        case 0x2a01e8u: goto label_2a01e8;
        case 0x2a01ecu: goto label_2a01ec;
        case 0x2a01f0u: goto label_2a01f0;
        case 0x2a01f4u: goto label_2a01f4;
        case 0x2a01f8u: goto label_2a01f8;
        case 0x2a01fcu: goto label_2a01fc;
        case 0x2a0200u: goto label_2a0200;
        case 0x2a0204u: goto label_2a0204;
        case 0x2a0208u: goto label_2a0208;
        case 0x2a020cu: goto label_2a020c;
        case 0x2a0210u: goto label_2a0210;
        case 0x2a0214u: goto label_2a0214;
        case 0x2a0218u: goto label_2a0218;
        case 0x2a021cu: goto label_2a021c;
        case 0x2a0220u: goto label_2a0220;
        case 0x2a0224u: goto label_2a0224;
        case 0x2a0228u: goto label_2a0228;
        case 0x2a022cu: goto label_2a022c;
        case 0x2a0230u: goto label_2a0230;
        case 0x2a0234u: goto label_2a0234;
        case 0x2a0238u: goto label_2a0238;
        case 0x2a023cu: goto label_2a023c;
        case 0x2a0240u: goto label_2a0240;
        case 0x2a0244u: goto label_2a0244;
        case 0x2a0248u: goto label_2a0248;
        case 0x2a024cu: goto label_2a024c;
        case 0x2a0250u: goto label_2a0250;
        case 0x2a0254u: goto label_2a0254;
        case 0x2a0258u: goto label_2a0258;
        case 0x2a025cu: goto label_2a025c;
        case 0x2a0260u: goto label_2a0260;
        case 0x2a0264u: goto label_2a0264;
        case 0x2a0268u: goto label_2a0268;
        case 0x2a026cu: goto label_2a026c;
        case 0x2a0270u: goto label_2a0270;
        case 0x2a0274u: goto label_2a0274;
        case 0x2a0278u: goto label_2a0278;
        case 0x2a027cu: goto label_2a027c;
        default: break;
    }

    ctx->pc = 0x29ead0u;

label_29ead0:
    // 0x29ead0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x29ead0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_29ead4:
    // 0x29ead4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x29ead4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_29ead8:
    // 0x29ead8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29ead8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_29eadc:
    // 0x29eadc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29eadcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_29eae0:
    // 0x29eae0: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x29eae0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
label_29eae4:
    // 0x29eae4: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x29eae4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_29eae8:
    // 0x29eae8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x29eae8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_29eaec:
    // 0x29eaec: 0xc091174  jal         func_2445D0
label_29eaf0:
    if (ctx->pc == 0x29EAF0u) {
        ctx->pc = 0x29EAF4u;
        goto label_29eaf4;
    }
    ctx->pc = 0x29EAECu;
    SET_GPR_U32(ctx, 31, 0x29EAF4u);
    ctx->pc = 0x2445D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2445D0u, 0x29EAECu, 0x29EAF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29EAF4u;
label_29eaf4:
    // 0x29eaf4: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x29eaf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_29eaf8:
    // 0x29eaf8: 0x24636260  addiu       $v1, $v1, 0x6260
    ctx->pc = 0x29eaf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25184));
label_29eafc:
    // 0x29eafc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x29eafcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_29eb00:
    // 0x29eb00: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x29eb00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_29eb04:
    // 0x29eb04: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x29eb04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_29eb08:
    // 0x29eb08: 0x24440034  addiu       $a0, $v0, 0x34
    ctx->pc = 0x29eb08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
label_29eb0c:
    // 0x29eb0c: 0xc0452e0  jal         func_114B80
label_29eb10:
    if (ctx->pc == 0x29EB10u) {
        ctx->pc = 0x29EB14u;
        goto label_29eb14;
    }
    ctx->pc = 0x29EB0Cu;
    SET_GPR_U32(ctx, 31, 0x29EB14u);
    ctx->pc = 0x114B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114B80u, 0x29EB0Cu, 0x29EB14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29EB14u;
label_29eb14:
    // 0x29eb14: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x29eb14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_29eb18:
    // 0x29eb18: 0xac400040  sw          $zero, 0x40($v0)
    ctx->pc = 0x29eb18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
label_29eb1c:
    // 0x29eb1c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x29eb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_29eb20:
    // 0x29eb20: 0xac400044  sw          $zero, 0x44($v0)
    ctx->pc = 0x29eb20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 0));
label_29eb24:
    // 0x29eb24: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x29eb24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_29eb28:
    // 0x29eb28: 0xac400048  sw          $zero, 0x48($v0)
    ctx->pc = 0x29eb28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 0));
label_29eb2c:
    // 0x29eb2c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x29eb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_29eb30:
    // 0x29eb30: 0xac40004c  sw          $zero, 0x4C($v0)
    ctx->pc = 0x29eb30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 0));
label_29eb34:
    // 0x29eb34: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x29eb34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_29eb38:
    // 0x29eb38: 0xac400050  sw          $zero, 0x50($v0)
    ctx->pc = 0x29eb38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 0));
label_29eb3c:
    // 0x29eb3c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x29eb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_29eb40:
    // 0x29eb40: 0xac400054  sw          $zero, 0x54($v0)
    ctx->pc = 0x29eb40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 84), GPR_U32(ctx, 0));
label_29eb44:
    // 0x29eb44: 0xc7808268  lwc1        $f0, -0x7D98($gp)
    ctx->pc = 0x29eb44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29eb48:
    // 0x29eb48: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x29eb48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_29eb4c:
    // 0x29eb4c: 0xe4400160  swc1        $f0, 0x160($v0)
    ctx->pc = 0x29eb4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 352), bits); }
label_29eb50:
    // 0x29eb50: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x29eb50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_29eb54:
    // 0x29eb54: 0xa0400164  sb          $zero, 0x164($v0)
    ctx->pc = 0x29eb54u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 356), (uint8_t)GPR_U32(ctx, 0));
label_29eb58:
    // 0x29eb58: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x29eb58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_29eb5c:
    // 0x29eb5c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x29eb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_29eb60:
    // 0x29eb60: 0xe4400168  swc1        $f0, 0x168($v0)
    ctx->pc = 0x29eb60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 360), bits); }
label_29eb64:
    // 0x29eb64: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x29eb64u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_29eb68:
    // 0x29eb68: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x29eb68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_29eb6c:
    // 0x29eb6c: 0xe440016c  swc1        $f0, 0x16C($v0)
    ctx->pc = 0x29eb6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 364), bits); }
label_29eb70:
    // 0x29eb70: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x29eb70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_29eb74:
    // 0x29eb74: 0x24440188  addiu       $a0, $v0, 0x188
    ctx->pc = 0x29eb74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 392));
label_29eb78:
    // 0x29eb78: 0x2785a3a8  addiu       $a1, $gp, -0x5C58
    ctx->pc = 0x29eb78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943656));
label_29eb7c:
    // 0x29eb7c: 0xc040304  jal         func_100C10
label_29eb80:
    if (ctx->pc == 0x29EB80u) {
        ctx->pc = 0x29EB84u;
        goto label_29eb84;
    }
    ctx->pc = 0x29EB7Cu;
    SET_GPR_U32(ctx, 31, 0x29EB84u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x29EB7Cu, 0x29EB84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29EB84u;
label_29eb84:
    // 0x29eb84: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x29eb84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29eb88:
    // 0x29eb88: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x29eb88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_29eb8c:
    // 0x29eb8c: 0xac430194  sw          $v1, 0x194($v0)
    ctx->pc = 0x29eb8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 404), GPR_U32(ctx, 3));
label_29eb90:
    // 0x29eb90: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x29eb90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_29eb94:
    // 0x29eb94: 0xac400198  sw          $zero, 0x198($v0)
    ctx->pc = 0x29eb94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 408), GPR_U32(ctx, 0));
label_29eb98:
    // 0x29eb98: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x29eb98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_29eb9c:
    // 0x29eb9c: 0xa040019c  sb          $zero, 0x19C($v0)
    ctx->pc = 0x29eb9cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 412), (uint8_t)GPR_U32(ctx, 0));
label_29eba0:
    // 0x29eba0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x29eba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29eba4:
    // 0x29eba4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x29eba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_29eba8:
    // 0x29eba8: 0xa043019d  sb          $v1, 0x19D($v0)
    ctx->pc = 0x29eba8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 413), (uint8_t)GPR_U32(ctx, 3));
label_29ebac:
    // 0x29ebac: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x29ebacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_29ebb0:
    // 0x29ebb0: 0x244401a0  addiu       $a0, $v0, 0x1A0
    ctx->pc = 0x29ebb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 416));
label_29ebb4:
    // 0x29ebb4: 0x3c050010  lui         $a1, 0x10
    ctx->pc = 0x29ebb4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16 << 16));
label_29ebb8:
    // 0x29ebb8: 0x24a56d20  addiu       $a1, $a1, 0x6D20
    ctx->pc = 0x29ebb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27936));
label_29ebbc:
    // 0x29ebbc: 0x3c060010  lui         $a2, 0x10
    ctx->pc = 0x29ebbcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16 << 16));
label_29ebc0:
    // 0x29ebc0: 0x24c60b50  addiu       $a2, $a2, 0xB50
    ctx->pc = 0x29ebc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2896));
label_29ebc4:
    // 0x29ebc4: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x29ebc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_29ebc8:
    // 0x29ebc8: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x29ebc8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_29ebcc:
    // 0x29ebcc: 0xc0b9ff4  jal         func_2E7FD0
label_29ebd0:
    if (ctx->pc == 0x29EBD0u) {
        ctx->pc = 0x29EBD4u;
        goto label_29ebd4;
    }
    ctx->pc = 0x29EBCCu;
    SET_GPR_U32(ctx, 31, 0x29EBD4u);
    ctx->pc = 0x2E7FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E7FD0u, 0x29EBCCu, 0x29EBD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29EBD4u;
label_29ebd4:
    // 0x29ebd4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x29ebd4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29ebd8:
    // 0x29ebd8: 0x10000007  b           . + 4 + (0x7 << 2)
label_29ebdc:
    if (ctx->pc == 0x29EBDCu) {
        ctx->pc = 0x29EBE0u;
        goto label_29ebe0;
    }
    ctx->pc = 0x29EBD8u;
    {
        const bool branch_taken_0x29ebd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29ebd8) {
            ctx->pc = 0x29EBF8u;
            goto label_29ebf8;
        }
    }
    ctx->pc = 0x29EBE0u;
label_29ebe0:
    // 0x29ebe0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x29ebe0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_29ebe4:
    // 0x29ebe4: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x29ebe4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_29ebe8:
    // 0x29ebe8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x29ebe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_29ebec:
    // 0x29ebec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29ebecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_29ebf0:
    // 0x29ebf0: 0xe4400170  swc1        $f0, 0x170($v0)
    ctx->pc = 0x29ebf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 368), bits); }
label_29ebf4:
    // 0x29ebf4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x29ebf4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_29ebf8:
    // 0x29ebf8: 0x2e220006  sltiu       $v0, $s1, 0x6
    ctx->pc = 0x29ebf8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_29ebfc:
    // 0x29ebfc: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
label_29ec00:
    if (ctx->pc == 0x29EC00u) {
        ctx->pc = 0x29EC04u;
        goto label_29ec04;
    }
    ctx->pc = 0x29EBFCu;
    {
        const bool branch_taken_0x29ebfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29ebfc) {
            ctx->pc = 0x29EBE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29ebe0;
        }
    }
    ctx->pc = 0x29EC04u;
label_29ec04:
    // 0x29ec04: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x29ec04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29ec08:
    // 0x29ec08: 0x1000000c  b           . + 4 + (0xC << 2)
label_29ec0c:
    if (ctx->pc == 0x29EC0Cu) {
        ctx->pc = 0x29EC10u;
        goto label_29ec10;
    }
    ctx->pc = 0x29EC08u;
    {
        const bool branch_taken_0x29ec08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29ec08) {
            ctx->pc = 0x29EC3Cu;
            goto label_29ec3c;
        }
    }
    ctx->pc = 0x29EC10u;
label_29ec10:
    // 0x29ec10: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x29ec10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_29ec14:
    // 0x29ec14: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x29ec14u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_29ec18:
    // 0x29ec18: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x29ec18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_29ec1c:
    // 0x29ec1c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x29ec1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_29ec20:
    // 0x29ec20: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29ec20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_29ec24:
    // 0x29ec24: 0x244401c0  addiu       $a0, $v0, 0x1C0
    ctx->pc = 0x29ec24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 448));
label_29ec28:
    // 0x29ec28: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29ec28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29ec2c:
    // 0x29ec2c: 0x240600e0  addiu       $a2, $zero, 0xE0
    ctx->pc = 0x29ec2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
label_29ec30:
    // 0x29ec30: 0xc0bb7e6  jal         func_2EDF98
label_29ec34:
    if (ctx->pc == 0x29EC34u) {
        ctx->pc = 0x29EC38u;
        goto label_29ec38;
    }
    ctx->pc = 0x29EC30u;
    SET_GPR_U32(ctx, 31, 0x29EC38u);
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x29EC30u, 0x29EC38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29EC38u;
label_29ec38:
    // 0x29ec38: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x29ec38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_29ec3c:
    // 0x29ec3c: 0x2a010003  slti        $at, $s0, 0x3
    ctx->pc = 0x29ec3cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
label_29ec40:
    // 0x29ec40: 0x1420fff3  bnez        $at, . + 4 + (-0xD << 2)
label_29ec44:
    if (ctx->pc == 0x29EC44u) {
        ctx->pc = 0x29EC48u;
        goto label_29ec48;
    }
    ctx->pc = 0x29EC40u;
    {
        const bool branch_taken_0x29ec40 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x29ec40) {
            ctx->pc = 0x29EC10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29ec10;
        }
    }
    ctx->pc = 0x29EC48u;
label_29ec48:
    // 0x29ec48: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x29ec48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_29ec4c:
    // 0x29ec4c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x29ec4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_29ec50:
    // 0x29ec50: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x29ec50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_29ec54:
    // 0x29ec54: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29ec54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_29ec58:
    // 0x29ec58: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x29ec58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_29ec5c:
    // 0x29ec5c: 0x3e00008  jr          $ra
label_29ec60:
    if (ctx->pc == 0x29EC60u) {
        ctx->pc = 0x29EC64u;
        goto label_29ec64;
    }
    ctx->pc = 0x29EC5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29EC5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29EC64u;
label_29ec64:
    // 0x29ec64: 0x0  nop
    ctx->pc = 0x29ec64u;
    // NOP
label_29ec68:
    // 0x29ec68: 0x0  nop
    ctx->pc = 0x29ec68u;
    // NOP
label_29ec6c:
    // 0x29ec6c: 0x0  nop
    ctx->pc = 0x29ec6cu;
    // NOP
label_29ec70:
    // 0x29ec70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x29ec70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_29ec74:
    // 0x29ec74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29ec74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_29ec78:
    // 0x29ec78: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x29ec78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_29ec7c:
    // 0x29ec7c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x29ec7cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
label_29ec80:
    // 0x29ec80: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x29ec80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_29ec84:
    // 0x29ec84: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
label_29ec88:
    if (ctx->pc == 0x29EC88u) {
        ctx->pc = 0x29EC8Cu;
        goto label_29ec8c;
    }
    ctx->pc = 0x29EC84u;
    {
        const bool branch_taken_0x29ec84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29ec84) {
            ctx->pc = 0x29ED14u;
            goto label_29ed14;
        }
    }
    ctx->pc = 0x29EC8Cu;
label_29ec8c:
    // 0x29ec8c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x29ec8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_29ec90:
    // 0x29ec90: 0x24636260  addiu       $v1, $v1, 0x6260
    ctx->pc = 0x29ec90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25184));
label_29ec94:
    // 0x29ec94: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x29ec94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_29ec98:
    // 0x29ec98: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x29ec98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_29ec9c:
    // 0x29ec9c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x29ec9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_29eca0:
    // 0x29eca0: 0x244401a0  addiu       $a0, $v0, 0x1A0
    ctx->pc = 0x29eca0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 416));
label_29eca4:
    // 0x29eca4: 0x3c050010  lui         $a1, 0x10
    ctx->pc = 0x29eca4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16 << 16));
label_29eca8:
    // 0x29eca8: 0x24a50b50  addiu       $a1, $a1, 0xB50
    ctx->pc = 0x29eca8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2896));
label_29ecac:
    // 0x29ecac: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x29ecacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_29ecb0:
    // 0x29ecb0: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x29ecb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_29ecb4:
    // 0x29ecb4: 0xc0b9fd4  jal         func_2E7F50
label_29ecb8:
    if (ctx->pc == 0x29ECB8u) {
        ctx->pc = 0x29ECBCu;
        goto label_29ecbc;
    }
    ctx->pc = 0x29ECB4u;
    SET_GPR_U32(ctx, 31, 0x29ECBCu);
    ctx->pc = 0x2E7F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E7F50u, 0x29ECB4u, 0x29ECBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29ECBCu;
label_29ecbc:
    // 0x29ecbc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x29ecbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_29ecc0:
    // 0x29ecc0: 0x24440188  addiu       $a0, $v0, 0x188
    ctx->pc = 0x29ecc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 392));
label_29ecc4:
    // 0x29ecc4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x29ecc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_29ecc8:
    // 0x29ecc8: 0xc0402d4  jal         func_100B50
label_29eccc:
    if (ctx->pc == 0x29ECCCu) {
        ctx->pc = 0x29ECD0u;
        goto label_29ecd0;
    }
    ctx->pc = 0x29ECC8u;
    SET_GPR_U32(ctx, 31, 0x29ECD0u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x29ECC8u, 0x29ECD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29ECD0u;
label_29ecd0:
    // 0x29ecd0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x29ecd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_29ecd4:
    // 0x29ecd4: 0x24440034  addiu       $a0, $v0, 0x34
    ctx->pc = 0x29ecd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
label_29ecd8:
    // 0x29ecd8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x29ecd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_29ecdc:
    // 0x29ecdc: 0xc045280  jal         func_114A00
label_29ece0:
    if (ctx->pc == 0x29ECE0u) {
        ctx->pc = 0x29ECE4u;
        goto label_29ece4;
    }
    ctx->pc = 0x29ECDCu;
    SET_GPR_U32(ctx, 31, 0x29ECE4u);
    ctx->pc = 0x114A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114A00u, 0x29ECDCu, 0x29ECE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29ECE4u;
label_29ece4:
    // 0x29ece4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x29ece4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_29ece8:
    // 0x29ece8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29ece8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29ecec:
    // 0x29ecec: 0xc091188  jal         func_244620
label_29ecf0:
    if (ctx->pc == 0x29ECF0u) {
        ctx->pc = 0x29ECF4u;
        goto label_29ecf4;
    }
    ctx->pc = 0x29ECECu;
    SET_GPR_U32(ctx, 31, 0x29ECF4u);
    ctx->pc = 0x244620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244620u, 0x29ECECu, 0x29ECF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29ECF4u;
label_29ecf4:
    // 0x29ecf4: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x29ecf4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
label_29ecf8:
    // 0x29ecf8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x29ecf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_29ecfc:
    // 0x29ecfc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x29ecfcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_29ed00:
    // 0x29ed00: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
label_29ed04:
    if (ctx->pc == 0x29ED04u) {
        ctx->pc = 0x29ED08u;
        goto label_29ed08;
    }
    ctx->pc = 0x29ED00u;
    {
        const bool branch_taken_0x29ed00 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x29ed00) {
            ctx->pc = 0x29ED14u;
            goto label_29ed14;
        }
    }
    ctx->pc = 0x29ED08u;
label_29ed08:
    // 0x29ed08: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x29ed08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_29ed0c:
    // 0x29ed0c: 0xc0ba070  jal         func_2E81C0
label_29ed10:
    if (ctx->pc == 0x29ED10u) {
        ctx->pc = 0x29ED14u;
        goto label_29ed14;
    }
    ctx->pc = 0x29ED0Cu;
    SET_GPR_U32(ctx, 31, 0x29ED14u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x29ED0Cu, 0x29ED14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29ED14u;
label_29ed14:
    // 0x29ed14: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x29ed14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_29ed18:
    // 0x29ed18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29ed18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_29ed1c:
    // 0x29ed1c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x29ed1cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_29ed20:
    // 0x29ed20: 0x3e00008  jr          $ra
label_29ed24:
    if (ctx->pc == 0x29ED24u) {
        ctx->pc = 0x29ED28u;
        goto label_29ed28;
    }
    ctx->pc = 0x29ED20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29ED20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29ED28u;
label_29ed28:
    // 0x29ed28: 0x0  nop
    ctx->pc = 0x29ed28u;
    // NOP
label_29ed2c:
    // 0x29ed2c: 0x0  nop
    ctx->pc = 0x29ed2cu;
    // NOP
label_29ed30:
    // 0x29ed30: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x29ed30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_29ed34:
    // 0x29ed34: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x29ed34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_29ed38:
    // 0x29ed38: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x29ed38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_29ed3c:
    // 0x29ed3c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x29ed3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_29ed40:
    // 0x29ed40: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x29ed40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_29ed44:
    // 0x29ed44: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x29ed44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_29ed48:
    // 0x29ed48: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x29ed48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_29ed4c:
    // 0x29ed4c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29ed4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_29ed50:
    // 0x29ed50: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29ed50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_29ed54:
    // 0x29ed54: 0xafa40080  sw          $a0, 0x80($sp)
    ctx->pc = 0x29ed54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 4));
label_29ed58:
    // 0x29ed58: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x29ed58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_29ed5c:
    // 0x29ed5c: 0xc0911a4  jal         func_244690
label_29ed60:
    if (ctx->pc == 0x29ED60u) {
        ctx->pc = 0x29ED64u;
        goto label_29ed64;
    }
    ctx->pc = 0x29ED5Cu;
    SET_GPR_U32(ctx, 31, 0x29ED64u);
    ctx->pc = 0x244690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244690u, 0x29ED5Cu, 0x29ED64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29ED64u;
label_29ed64:
    // 0x29ed64: 0x305600ff  andi        $s6, $v0, 0xFF
    ctx->pc = 0x29ed64u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_29ed68:
    // 0x29ed68: 0x24040088  addiu       $a0, $zero, 0x88
    ctx->pc = 0x29ed68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 136));
label_29ed6c:
    // 0x29ed6c: 0xc119b68  jal         func_466DA0
label_29ed70:
    if (ctx->pc == 0x29ED70u) {
        ctx->pc = 0x29ED74u;
        goto label_29ed74;
    }
    ctx->pc = 0x29ED6Cu;
    SET_GPR_U32(ctx, 31, 0x29ED74u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x29ED6Cu, 0x29ED74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29ED74u;
label_29ed74:
    // 0x29ed74: 0x24040088  addiu       $a0, $zero, 0x88
    ctx->pc = 0x29ed74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 136));
label_29ed78:
    // 0x29ed78: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x29ed78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29ed7c:
    // 0x29ed7c: 0xc0400e0  jal         func_100380
label_29ed80:
    if (ctx->pc == 0x29ED80u) {
        ctx->pc = 0x29ED84u;
        goto label_29ed84;
    }
    ctx->pc = 0x29ED7Cu;
    SET_GPR_U32(ctx, 31, 0x29ED84u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x29ED7Cu, 0x29ED84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29ED84u;
label_29ed84:
    // 0x29ed84: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x29ed84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29ed88:
    // 0x29ed88: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
label_29ed8c:
    if (ctx->pc == 0x29ED8Cu) {
        ctx->pc = 0x29ED90u;
        goto label_29ed90;
    }
    ctx->pc = 0x29ED88u;
    {
        const bool branch_taken_0x29ed88 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x29ed88) {
            ctx->pc = 0x29EDA0u;
            goto label_29eda0;
        }
    }
    ctx->pc = 0x29ED90u;
label_29ed90:
    // 0x29ed90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29ed90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29ed94:
    // 0x29ed94: 0xc1216ec  jal         func_485BB0
label_29ed98:
    if (ctx->pc == 0x29ED98u) {
        ctx->pc = 0x29ED9Cu;
        goto label_29ed9c;
    }
    ctx->pc = 0x29ED94u;
    SET_GPR_U32(ctx, 31, 0x29ED9Cu);
    ctx->pc = 0x485BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x485BB0u, 0x29ED94u, 0x29ED9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29ED9Cu;
label_29ed9c:
    // 0x29ed9c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x29ed9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29eda0:
    // 0x29eda0: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x29eda0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_29eda4:
    // 0x29eda4: 0xac500040  sw          $s0, 0x40($v0)
    ctx->pc = 0x29eda4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 16));
label_29eda8:
    // 0x29eda8: 0x8f82bc38  lw          $v0, -0x43C8($gp)
    ctx->pc = 0x29eda8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949944)));
label_29edac:
    // 0x29edac: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
label_29edb0:
    if (ctx->pc == 0x29EDB0u) {
        ctx->pc = 0x29EDB4u;
        goto label_29edb4;
    }
    ctx->pc = 0x29EDACu;
    {
        const bool branch_taken_0x29edac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29edac) {
            ctx->pc = 0x29EE58u;
            goto label_29ee58;
        }
    }
    ctx->pc = 0x29EDB4u;
label_29edb4:
    // 0x29edb4: 0xc105eea  jal         func_417BA8
label_29edb8:
    if (ctx->pc == 0x29EDB8u) {
        ctx->pc = 0x29EDBCu;
        goto label_29edbc;
    }
    ctx->pc = 0x29EDB4u;
    SET_GPR_U32(ctx, 31, 0x29EDBCu);
    ctx->pc = 0x417BA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x417BA8u, 0x29EDB4u, 0x29EDBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29EDBCu;
label_29edbc:
    // 0x29edbc: 0xaf82bc30  sw          $v0, -0x43D0($gp)
    ctx->pc = 0x29edbcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949936), GPR_U32(ctx, 2));
label_29edc0:
    // 0x29edc0: 0xc1067b0  jal         func_419EC0
label_29edc4:
    if (ctx->pc == 0x29EDC4u) {
        ctx->pc = 0x29EDC8u;
        goto label_29edc8;
    }
    ctx->pc = 0x29EDC0u;
    SET_GPR_U32(ctx, 31, 0x29EDC8u);
    ctx->pc = 0x419EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419EC0u, 0x29EDC0u, 0x29EDC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29EDC8u;
label_29edc8:
    // 0x29edc8: 0x8f84bc30  lw          $a0, -0x43D0($gp)
    ctx->pc = 0x29edc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949936)));
label_29edcc:
    // 0x29edcc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x29edccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29edd0:
    // 0x29edd0: 0xc1083aa  jal         func_420EA8
label_29edd4:
    if (ctx->pc == 0x29EDD4u) {
        ctx->pc = 0x29EDD8u;
        goto label_29edd8;
    }
    ctx->pc = 0x29EDD0u;
    SET_GPR_U32(ctx, 31, 0x29EDD8u);
    ctx->pc = 0x420EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x420EA8u, 0x29EDD0u, 0x29EDD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29EDD8u;
label_29edd8:
    // 0x29edd8: 0x2795bc30  addiu       $s5, $gp, -0x43D0
    ctx->pc = 0x29edd8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 28), 4294949936));
label_29eddc:
    // 0x29eddc: 0x24110100  addiu       $s1, $zero, 0x100
    ctx->pc = 0x29eddcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_29ede0:
    // 0x29ede0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x29ede0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29ede4:
    // 0x29ede4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29ede4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_29ede8:
    // 0x29ede8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x29ede8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_29edec:
    // 0x29edec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x29edecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29edf0:
    // 0x29edf0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x29edf0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29edf4:
    // 0x29edf4: 0xc10746c  jal         func_41D1B0
label_29edf8:
    if (ctx->pc == 0x29EDF8u) {
        ctx->pc = 0x29EDFCu;
        goto label_29edfc;
    }
    ctx->pc = 0x29EDF4u;
    SET_GPR_U32(ctx, 31, 0x29EDFCu);
    ctx->pc = 0x41D1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D1B0u, 0x29EDF4u, 0x29EDFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29EDFCu;
label_29edfc:
    // 0x29edfc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x29edfcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29ee00:
    // 0x29ee00: 0x8f82bc30  lw          $v0, -0x43D0($gp)
    ctx->pc = 0x29ee00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949936)));
label_29ee04:
    // 0x29ee04: 0xac520064  sw          $s2, 0x64($v0)
    ctx->pc = 0x29ee04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 100), GPR_U32(ctx, 18));
label_29ee08:
    // 0x29ee08: 0x2794bc30  addiu       $s4, $gp, -0x43D0
    ctx->pc = 0x29ee08u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 28), 4294949936));
label_29ee0c:
    // 0x29ee0c: 0x8f84bc30  lw          $a0, -0x43D0($gp)
    ctx->pc = 0x29ee0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949936)));
label_29ee10:
    // 0x29ee10: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x29ee10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_29ee14:
    // 0x29ee14: 0xc106008  jal         func_418020
label_29ee18:
    if (ctx->pc == 0x29EE18u) {
        ctx->pc = 0x29EE1Cu;
        goto label_29ee1c;
    }
    ctx->pc = 0x29EE14u;
    SET_GPR_U32(ctx, 31, 0x29EE1Cu);
    ctx->pc = 0x418020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x418020u, 0x29EE14u, 0x29EE1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29EE1Cu;
label_29ee1c:
    // 0x29ee1c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29ee1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_29ee20:
    // 0x29ee20: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x29ee20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_29ee24:
    // 0x29ee24: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x29ee24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_29ee28:
    // 0x29ee28: 0x24070505  addiu       $a3, $zero, 0x505
    ctx->pc = 0x29ee28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1285));
label_29ee2c:
    // 0x29ee2c: 0xc10746c  jal         func_41D1B0
label_29ee30:
    if (ctx->pc == 0x29EE30u) {
        ctx->pc = 0x29EE34u;
        goto label_29ee34;
    }
    ctx->pc = 0x29EE2Cu;
    SET_GPR_U32(ctx, 31, 0x29EE34u);
    ctx->pc = 0x41D1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D1B0u, 0x29EE2Cu, 0x29EE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29EE34u;
label_29ee34:
    // 0x29ee34: 0xaf82bc34  sw          $v0, -0x43CC($gp)
    ctx->pc = 0x29ee34u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949940), GPR_U32(ctx, 2));
label_29ee38:
    // 0x29ee38: 0x8f84bc34  lw          $a0, -0x43CC($gp)
    ctx->pc = 0x29ee38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949940)));
label_29ee3c:
    // 0x29ee3c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x29ee3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29ee40:
    // 0x29ee40: 0xc110d02  jal         func_443408
label_29ee44:
    if (ctx->pc == 0x29EE44u) {
        ctx->pc = 0x29EE48u;
        goto label_29ee48;
    }
    ctx->pc = 0x29EE40u;
    SET_GPR_U32(ctx, 31, 0x29EE48u);
    ctx->pc = 0x443408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x443408u, 0x29EE40u, 0x29EE48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29EE48u;
label_29ee48:
    // 0x29ee48: 0x8f83bc34  lw          $v1, -0x43CC($gp)
    ctx->pc = 0x29ee48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949940)));
label_29ee4c:
    // 0x29ee4c: 0x8f82bc30  lw          $v0, -0x43D0($gp)
    ctx->pc = 0x29ee4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949936)));
label_29ee50:
    // 0x29ee50: 0xac430060  sw          $v1, 0x60($v0)
    ctx->pc = 0x29ee50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 3));
label_29ee54:
    // 0x29ee54: 0x2793bc30  addiu       $s3, $gp, -0x43D0
    ctx->pc = 0x29ee54u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 28), 4294949936));
label_29ee58:
    // 0x29ee58: 0x8f82bc38  lw          $v0, -0x43C8($gp)
    ctx->pc = 0x29ee58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949944)));
label_29ee5c:
    // 0x29ee5c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x29ee5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_29ee60:
    // 0x29ee60: 0xaf82bc38  sw          $v0, -0x43C8($gp)
    ctx->pc = 0x29ee60u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949944), GPR_U32(ctx, 2));
label_29ee64:
    // 0x29ee64: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x29ee64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_29ee68:
    // 0x29ee68: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x29ee68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_29ee6c:
    // 0x29ee6c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x29ee6cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_29ee70:
    // 0x29ee70: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x29ee70u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_29ee74:
    // 0x29ee74: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x29ee74u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_29ee78:
    // 0x29ee78: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x29ee78u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_29ee7c:
    // 0x29ee7c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x29ee7cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_29ee80:
    // 0x29ee80: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x29ee80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_29ee84:
    // 0x29ee84: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29ee84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_29ee88:
    // 0x29ee88: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x29ee88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_29ee8c:
    // 0x29ee8c: 0x3e00008  jr          $ra
label_29ee90:
    if (ctx->pc == 0x29EE90u) {
        ctx->pc = 0x29EE94u;
        goto label_29ee94;
    }
    ctx->pc = 0x29EE8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29EE8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29EE94u;
label_29ee94:
    // 0x29ee94: 0x0  nop
    ctx->pc = 0x29ee94u;
    // NOP
label_29ee98:
    // 0x29ee98: 0x0  nop
    ctx->pc = 0x29ee98u;
    // NOP
label_29ee9c:
    // 0x29ee9c: 0x0  nop
    ctx->pc = 0x29ee9cu;
    // NOP
label_29eea0:
    // 0x29eea0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x29eea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_29eea4:
    // 0x29eea4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x29eea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_29eea8:
    // 0x29eea8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x29eea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_29eeac:
    // 0x29eeac: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x29eeacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_29eeb0:
    // 0x29eeb0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x29eeb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_29eeb4:
    // 0x29eeb4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x29eeb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_29eeb8:
    // 0x29eeb8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x29eeb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_29eebc:
    // 0x29eebc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29eebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_29eec0:
    // 0x29eec0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29eec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_29eec4:
    // 0x29eec4: 0xafa40080  sw          $a0, 0x80($sp)
    ctx->pc = 0x29eec4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 4));
label_29eec8:
    // 0x29eec8: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x29eec8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_29eecc:
    // 0x29eecc: 0xc0911bc  jal         func_2446F0
label_29eed0:
    if (ctx->pc == 0x29EED0u) {
        ctx->pc = 0x29EED4u;
        goto label_29eed4;
    }
    ctx->pc = 0x29EECCu;
    SET_GPR_U32(ctx, 31, 0x29EED4u);
    ctx->pc = 0x2446F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2446F0u, 0x29EECCu, 0x29EED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29EED4u;
label_29eed4:
    // 0x29eed4: 0x305600ff  andi        $s6, $v0, 0xFF
    ctx->pc = 0x29eed4u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_29eed8:
    // 0x29eed8: 0x8f82bc38  lw          $v0, -0x43C8($gp)
    ctx->pc = 0x29eed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949944)));
label_29eedc:
    // 0x29eedc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x29eedcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_29eee0:
    // 0x29eee0: 0xaf82bc38  sw          $v0, -0x43C8($gp)
    ctx->pc = 0x29eee0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949944), GPR_U32(ctx, 2));
label_29eee4:
    // 0x29eee4: 0x8f82bc38  lw          $v0, -0x43C8($gp)
    ctx->pc = 0x29eee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949944)));
label_29eee8:
    // 0x29eee8: 0x14400024  bnez        $v0, . + 4 + (0x24 << 2)
label_29eeec:
    if (ctx->pc == 0x29EEECu) {
        ctx->pc = 0x29EEF0u;
        goto label_29eef0;
    }
    ctx->pc = 0x29EEE8u;
    {
        const bool branch_taken_0x29eee8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29eee8) {
            ctx->pc = 0x29EF7Cu;
            goto label_29ef7c;
        }
    }
    ctx->pc = 0x29EEF0u;
label_29eef0:
    // 0x29eef0: 0x8f82bc30  lw          $v0, -0x43D0($gp)
    ctx->pc = 0x29eef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949936)));
label_29eef4:
    // 0x29eef4: 0x8c520004  lw          $s2, 0x4($v0)
    ctx->pc = 0x29eef4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_29eef8:
    // 0x29eef8: 0x12400009  beqz        $s2, . + 4 + (0x9 << 2)
label_29eefc:
    if (ctx->pc == 0x29EEFCu) {
        ctx->pc = 0x29EF00u;
        goto label_29ef00;
    }
    ctx->pc = 0x29EEF8u;
    {
        const bool branch_taken_0x29eef8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x29eef8) {
            ctx->pc = 0x29EF20u;
            goto label_29ef20;
        }
    }
    ctx->pc = 0x29EF00u;
label_29ef00:
    // 0x29ef00: 0x8f84bc30  lw          $a0, -0x43D0($gp)
    ctx->pc = 0x29ef00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949936)));
label_29ef04:
    // 0x29ef04: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29ef04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29ef08:
    // 0x29ef08: 0xc1083aa  jal         func_420EA8
label_29ef0c:
    if (ctx->pc == 0x29EF0Cu) {
        ctx->pc = 0x29EF10u;
        goto label_29ef10;
    }
    ctx->pc = 0x29EF08u;
    SET_GPR_U32(ctx, 31, 0x29EF10u);
    ctx->pc = 0x420EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x420EA8u, 0x29EF08u, 0x29EF10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29EF10u;
label_29ef10:
    // 0x29ef10: 0x2795bc30  addiu       $s5, $gp, -0x43D0
    ctx->pc = 0x29ef10u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 28), 4294949936));
label_29ef14:
    // 0x29ef14: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x29ef14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_29ef18:
    // 0x29ef18: 0xc1067c6  jal         func_419F18
label_29ef1c:
    if (ctx->pc == 0x29EF1Cu) {
        ctx->pc = 0x29EF20u;
        goto label_29ef20;
    }
    ctx->pc = 0x29EF18u;
    SET_GPR_U32(ctx, 31, 0x29EF20u);
    ctx->pc = 0x419F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419F18u, 0x29EF18u, 0x29EF20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29EF20u;
label_29ef20:
    // 0x29ef20: 0x8f82bc30  lw          $v0, -0x43D0($gp)
    ctx->pc = 0x29ef20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949936)));
label_29ef24:
    // 0x29ef24: 0x8c510064  lw          $s1, 0x64($v0)
    ctx->pc = 0x29ef24u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_29ef28:
    // 0x29ef28: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
label_29ef2c:
    if (ctx->pc == 0x29EF2Cu) {
        ctx->pc = 0x29EF30u;
        goto label_29ef30;
    }
    ctx->pc = 0x29EF28u;
    {
        const bool branch_taken_0x29ef28 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x29ef28) {
            ctx->pc = 0x29EF48u;
            goto label_29ef48;
        }
    }
    ctx->pc = 0x29EF30u;
label_29ef30:
    // 0x29ef30: 0x8f82bc30  lw          $v0, -0x43D0($gp)
    ctx->pc = 0x29ef30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949936)));
label_29ef34:
    // 0x29ef34: 0xac400064  sw          $zero, 0x64($v0)
    ctx->pc = 0x29ef34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 100), GPR_U32(ctx, 0));
label_29ef38:
    // 0x29ef38: 0x2794bc30  addiu       $s4, $gp, -0x43D0
    ctx->pc = 0x29ef38u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 28), 4294949936));
label_29ef3c:
    // 0x29ef3c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29ef3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_29ef40:
    // 0x29ef40: 0xc1074ac  jal         func_41D2B0
label_29ef44:
    if (ctx->pc == 0x29EF44u) {
        ctx->pc = 0x29EF48u;
        goto label_29ef48;
    }
    ctx->pc = 0x29EF40u;
    SET_GPR_U32(ctx, 31, 0x29EF48u);
    ctx->pc = 0x41D2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D2B0u, 0x29EF40u, 0x29EF48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29EF48u;
label_29ef48:
    // 0x29ef48: 0x8f82bc30  lw          $v0, -0x43D0($gp)
    ctx->pc = 0x29ef48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949936)));
label_29ef4c:
    // 0x29ef4c: 0xac400060  sw          $zero, 0x60($v0)
    ctx->pc = 0x29ef4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 0));
label_29ef50:
    // 0x29ef50: 0x2793bc30  addiu       $s3, $gp, -0x43D0
    ctx->pc = 0x29ef50u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 28), 4294949936));
label_29ef54:
    // 0x29ef54: 0x8f84bc30  lw          $a0, -0x43D0($gp)
    ctx->pc = 0x29ef54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949936)));
label_29ef58:
    // 0x29ef58: 0xc105fc4  jal         func_417F10
label_29ef5c:
    if (ctx->pc == 0x29EF5Cu) {
        ctx->pc = 0x29EF60u;
        goto label_29ef60;
    }
    ctx->pc = 0x29EF58u;
    SET_GPR_U32(ctx, 31, 0x29EF60u);
    ctx->pc = 0x417F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x417F10u, 0x29EF58u, 0x29EF60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29EF60u;
label_29ef60:
    // 0x29ef60: 0x8f84bc34  lw          $a0, -0x43CC($gp)
    ctx->pc = 0x29ef60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949940)));
label_29ef64:
    // 0x29ef64: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29ef64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29ef68:
    // 0x29ef68: 0xc110d02  jal         func_443408
label_29ef6c:
    if (ctx->pc == 0x29EF6Cu) {
        ctx->pc = 0x29EF70u;
        goto label_29ef70;
    }
    ctx->pc = 0x29EF68u;
    SET_GPR_U32(ctx, 31, 0x29EF70u);
    ctx->pc = 0x443408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x443408u, 0x29EF68u, 0x29EF70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29EF70u;
label_29ef70:
    // 0x29ef70: 0x8f84bc34  lw          $a0, -0x43CC($gp)
    ctx->pc = 0x29ef70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949940)));
label_29ef74:
    // 0x29ef74: 0xc1074ac  jal         func_41D2B0
label_29ef78:
    if (ctx->pc == 0x29EF78u) {
        ctx->pc = 0x29EF7Cu;
        goto label_29ef7c;
    }
    ctx->pc = 0x29EF74u;
    SET_GPR_U32(ctx, 31, 0x29EF7Cu);
    ctx->pc = 0x41D2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D2B0u, 0x29EF74u, 0x29EF7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29EF7Cu;
label_29ef7c:
    // 0x29ef7c: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x29ef7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_29ef80:
    // 0x29ef80: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x29ef80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_29ef84:
    // 0x29ef84: 0xc121d18  jal         func_487460
label_29ef88:
    if (ctx->pc == 0x29EF88u) {
        ctx->pc = 0x29EF8Cu;
        goto label_29ef8c;
    }
    ctx->pc = 0x29EF84u;
    SET_GPR_U32(ctx, 31, 0x29EF8Cu);
    ctx->pc = 0x487460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x487460u, 0x29EF84u, 0x29EF8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29EF8Cu;
label_29ef8c:
    // 0x29ef8c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x29ef8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29ef90:
    // 0x29ef90: 0x1010000e  beq         $zero, $s0, . + 4 + (0xE << 2)
label_29ef94:
    if (ctx->pc == 0x29EF94u) {
        ctx->pc = 0x29EF98u;
        goto label_29ef98;
    }
    ctx->pc = 0x29EF90u;
    {
        const bool branch_taken_0x29ef90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 16));
        if (branch_taken_0x29ef90) {
            ctx->pc = 0x29EFCCu;
            goto label_29efcc;
        }
    }
    ctx->pc = 0x29EF98u;
label_29ef98:
    // 0x29ef98: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x29ef98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_29ef9c:
    // 0x29ef9c: 0xc0a8388  jal         func_2A0E20
label_29efa0:
    if (ctx->pc == 0x29EFA0u) {
        ctx->pc = 0x29EFA4u;
        goto label_29efa4;
    }
    ctx->pc = 0x29EF9Cu;
    SET_GPR_U32(ctx, 31, 0x29EFA4u);
    ctx->pc = 0x2A0E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0E20u, 0x29EF9Cu, 0x29EFA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29EFA4u;
label_29efa4:
    // 0x29efa4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x29efa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_29efa8:
    // 0x29efa8: 0xc1066de  jal         func_419B78
label_29efac:
    if (ctx->pc == 0x29EFACu) {
        ctx->pc = 0x29EFB0u;
        goto label_29efb0;
    }
    ctx->pc = 0x29EFA8u;
    SET_GPR_U32(ctx, 31, 0x29EFB0u);
    ctx->pc = 0x419B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419B78u, 0x29EFA8u, 0x29EFB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29EFB0u;
label_29efb0:
    // 0x29efb0: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x29efb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_29efb4:
    // 0x29efb4: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x29efb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_29efb8:
    // 0x29efb8: 0xc1217b4  jal         func_485ED0
label_29efbc:
    if (ctx->pc == 0x29EFBCu) {
        ctx->pc = 0x29EFC0u;
        goto label_29efc0;
    }
    ctx->pc = 0x29EFB8u;
    SET_GPR_U32(ctx, 31, 0x29EFC0u);
    ctx->pc = 0x485ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x485ED0u, 0x29EFB8u, 0x29EFC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29EFC0u;
label_29efc0:
    // 0x29efc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29efc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29efc4:
    // 0x29efc4: 0xc0e20da  jal         func_388368
label_29efc8:
    if (ctx->pc == 0x29EFC8u) {
        ctx->pc = 0x29EFCCu;
        goto label_29efcc;
    }
    ctx->pc = 0x29EFC4u;
    SET_GPR_U32(ctx, 31, 0x29EFCCu);
    ctx->pc = 0x388368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x388368u, 0x29EFC4u, 0x29EFCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29EFCCu;
label_29efcc:
    // 0x29efcc: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x29efccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_29efd0:
    // 0x29efd0: 0x8c420040  lw          $v0, 0x40($v0)
    ctx->pc = 0x29efd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_29efd4:
    // 0x29efd4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_29efd8:
    if (ctx->pc == 0x29EFD8u) {
        ctx->pc = 0x29EFDCu;
        goto label_29efdc;
    }
    ctx->pc = 0x29EFD4u;
    {
        const bool branch_taken_0x29efd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29efd4) {
            ctx->pc = 0x29F004u;
            goto label_29f004;
        }
    }
    ctx->pc = 0x29EFDCu;
label_29efdc:
    // 0x29efdc: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x29efdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_29efe0:
    // 0x29efe0: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x29efe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_29efe4:
    // 0x29efe4: 0xc083b8c  jal         func_20EE30
label_29efe8:
    if (ctx->pc == 0x29EFE8u) {
        ctx->pc = 0x29EFECu;
        goto label_29efec;
    }
    ctx->pc = 0x29EFE4u;
    SET_GPR_U32(ctx, 31, 0x29EFECu);
    ctx->pc = 0x20EE30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20EE30u, 0x29EFE4u, 0x29EFECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29EFECu;
label_29efec:
    // 0x29efec: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x29efecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_29eff0:
    // 0x29eff0: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x29eff0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_29eff4:
    // 0x29eff4: 0xc119c5c  jal         func_467170
label_29eff8:
    if (ctx->pc == 0x29EFF8u) {
        ctx->pc = 0x29EFFCu;
        goto label_29effc;
    }
    ctx->pc = 0x29EFF4u;
    SET_GPR_U32(ctx, 31, 0x29EFFCu);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x29EFF4u, 0x29EFFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29EFFCu;
label_29effc:
    // 0x29effc: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x29effcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_29f000:
    // 0x29f000: 0xac400040  sw          $zero, 0x40($v0)
    ctx->pc = 0x29f000u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
label_29f004:
    // 0x29f004: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x29f004u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_29f008:
    // 0x29f008: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x29f008u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_29f00c:
    // 0x29f00c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x29f00cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_29f010:
    // 0x29f010: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x29f010u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_29f014:
    // 0x29f014: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x29f014u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_29f018:
    // 0x29f018: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x29f018u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_29f01c:
    // 0x29f01c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x29f01cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_29f020:
    // 0x29f020: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x29f020u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_29f024:
    // 0x29f024: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29f024u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_29f028:
    // 0x29f028: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x29f028u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_29f02c:
    // 0x29f02c: 0x3e00008  jr          $ra
label_29f030:
    if (ctx->pc == 0x29F030u) {
        ctx->pc = 0x29F034u;
        goto label_29f034;
    }
    ctx->pc = 0x29F02Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29F02Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29F034u;
label_29f034:
    // 0x29f034: 0x0  nop
    ctx->pc = 0x29f034u;
    // NOP
label_29f038:
    // 0x29f038: 0x0  nop
    ctx->pc = 0x29f038u;
    // NOP
label_29f03c:
    // 0x29f03c: 0x0  nop
    ctx->pc = 0x29f03cu;
    // NOP
label_29f040:
    // 0x29f040: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x29f040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
label_29f044:
    // 0x29f044: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x29f044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_29f048:
    // 0x29f048: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x29f048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_29f04c:
    // 0x29f04c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x29f04cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_29f050:
    // 0x29f050: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x29f050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_29f054:
    // 0x29f054: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x29f054u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_29f058:
    // 0x29f058: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x29f058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_29f05c:
    // 0x29f05c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x29f05cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_29f060:
    // 0x29f060: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x29f060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_29f064:
    // 0x29f064: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29f064u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_29f068:
    // 0x29f068: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29f068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_29f06c:
    // 0x29f06c: 0xafa40160  sw          $a0, 0x160($sp)
    ctx->pc = 0x29f06cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 4));
label_29f070:
    // 0x29f070: 0xafa50170  sw          $a1, 0x170($sp)
    ctx->pc = 0x29f070u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 5));
label_29f074:
    // 0x29f074: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x29f074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_29f078:
    // 0x29f078: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x29f078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
label_29f07c:
    // 0x29f07c: 0x7ba400d0  lq          $a0, 0xD0($sp)
    ctx->pc = 0x29f07cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_29f080:
    // 0x29f080: 0x8fa50170  lw          $a1, 0x170($sp)
    ctx->pc = 0x29f080u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_29f084:
    // 0x29f084: 0xc0911dc  jal         func_244770
label_29f088:
    if (ctx->pc == 0x29F088u) {
        ctx->pc = 0x29F08Cu;
        goto label_29f08c;
    }
    ctx->pc = 0x29F084u;
    SET_GPR_U32(ctx, 31, 0x29F08Cu);
    ctx->pc = 0x244770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244770u, 0x29F084u, 0x29F08Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F08Cu;
label_29f08c:
    // 0x29f08c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29f08cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_29f090:
    // 0x29f090: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x29f090u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29f094:
    // 0x29f094: 0x8fa50170  lw          $a1, 0x170($sp)
    ctx->pc = 0x29f094u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_29f098:
    // 0x29f098: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x29f098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_29f09c:
    // 0x29f09c: 0x10020005  beq         $zero, $v0, . + 4 + (0x5 << 2)
label_29f0a0:
    if (ctx->pc == 0x29F0A0u) {
        ctx->pc = 0x29F0A4u;
        goto label_29f0a4;
    }
    ctx->pc = 0x29F09Cu;
    {
        const bool branch_taken_0x29f09c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x29f09c) {
            ctx->pc = 0x29F0B4u;
            goto label_29f0b4;
        }
    }
    ctx->pc = 0x29F0A4u;
label_29f0a4:
    // 0x29f0a4: 0x8fa40170  lw          $a0, 0x170($sp)
    ctx->pc = 0x29f0a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_29f0a8:
    // 0x29f0a8: 0x8c930008  lw          $s3, 0x8($a0)
    ctx->pc = 0x29f0a8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_29f0ac:
    // 0x29f0ac: 0x10000003  b           . + 4 + (0x3 << 2)
label_29f0b0:
    if (ctx->pc == 0x29F0B0u) {
        ctx->pc = 0x29F0B4u;
        goto label_29f0b4;
    }
    ctx->pc = 0x29F0ACu;
    {
        const bool branch_taken_0x29f0ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29f0ac) {
            ctx->pc = 0x29F0BCu;
            goto label_29f0bc;
        }
    }
    ctx->pc = 0x29F0B4u;
label_29f0b4:
    // 0x29f0b4: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x29f0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_29f0b8:
    // 0x29f0b8: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x29f0b8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_29f0bc:
    // 0x29f0bc: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x29f0bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_29f0c0:
    // 0x29f0c0: 0x10110185  beq         $zero, $s1, . + 4 + (0x185 << 2)
label_29f0c4:
    if (ctx->pc == 0x29F0C4u) {
        ctx->pc = 0x29F0C8u;
        goto label_29f0c8;
    }
    ctx->pc = 0x29F0C0u;
    {
        const bool branch_taken_0x29f0c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 17));
        if (branch_taken_0x29f0c0) {
            ctx->pc = 0x29F6D8u;
            goto label_29f6d8;
        }
    }
    ctx->pc = 0x29F0C8u;
label_29f0c8:
    // 0x29f0c8: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x29f0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_29f0cc:
    // 0x29f0cc: 0x24440034  addiu       $a0, $v0, 0x34
    ctx->pc = 0x29f0ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
label_29f0d0:
    // 0x29f0d0: 0xc09895c  jal         func_262570
label_29f0d4:
    if (ctx->pc == 0x29F0D4u) {
        ctx->pc = 0x29F0D8u;
        goto label_29f0d8;
    }
    ctx->pc = 0x29F0D0u;
    SET_GPR_U32(ctx, 31, 0x29F0D8u);
    ctx->pc = 0x262570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262570u, 0x29F0D0u, 0x29F0D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F0D8u;
label_29f0d8:
    // 0x29f0d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29f0d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_29f0dc:
    // 0x29f0dc: 0x240503ef  addiu       $a1, $zero, 0x3EF
    ctx->pc = 0x29f0dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1007));
label_29f0e0:
    // 0x29f0e0: 0x3c06004f  lui         $a2, 0x4F
    ctx->pc = 0x29f0e0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)79 << 16));
label_29f0e4:
    // 0x29f0e4: 0x24c6d920  addiu       $a2, $a2, -0x26E0
    ctx->pc = 0x29f0e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957344));
label_29f0e8:
    // 0x29f0e8: 0xc041a50  jal         func_106940
label_29f0ec:
    if (ctx->pc == 0x29F0ECu) {
        ctx->pc = 0x29F0F0u;
        goto label_29f0f0;
    }
    ctx->pc = 0x29F0E8u;
    SET_GPR_U32(ctx, 31, 0x29F0F0u);
    ctx->pc = 0x106940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106940u, 0x29F0E8u, 0x29F0F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F0F0u;
label_29f0f0:
    // 0x29f0f0: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x29f0f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_29f0f4:
    // 0x29f0f4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x29f0f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29f0f8:
    // 0x29f0f8: 0xc040304  jal         func_100C10
label_29f0fc:
    if (ctx->pc == 0x29F0FCu) {
        ctx->pc = 0x29F100u;
        goto label_29f100;
    }
    ctx->pc = 0x29F0F8u;
    SET_GPR_U32(ctx, 31, 0x29F100u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x29F0F8u, 0x29F100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F100u;
label_29f100:
    // 0x29f100: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x29f100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_29f104:
    // 0x29f104: 0x24440034  addiu       $a0, $v0, 0x34
    ctx->pc = 0x29f104u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
label_29f108:
    // 0x29f108: 0x27a50140  addiu       $a1, $sp, 0x140
    ctx->pc = 0x29f108u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_29f10c:
    // 0x29f10c: 0xc082c78  jal         func_20B1E0
label_29f110:
    if (ctx->pc == 0x29F110u) {
        ctx->pc = 0x29F114u;
        goto label_29f114;
    }
    ctx->pc = 0x29F10Cu;
    SET_GPR_U32(ctx, 31, 0x29F114u);
    ctx->pc = 0x20B1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B1E0u, 0x29F10Cu, 0x29F114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F114u;
label_29f114:
    // 0x29f114: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x29f114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_29f118:
    // 0x29f118: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x29f118u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_29f11c:
    // 0x29f11c: 0xc0402d4  jal         func_100B50
label_29f120:
    if (ctx->pc == 0x29F120u) {
        ctx->pc = 0x29F124u;
        goto label_29f124;
    }
    ctx->pc = 0x29F11Cu;
    SET_GPR_U32(ctx, 31, 0x29F124u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x29F11Cu, 0x29F124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F124u;
label_29f124:
    // 0x29f124: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29f124u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_29f128:
    // 0x29f128: 0x240503f0  addiu       $a1, $zero, 0x3F0
    ctx->pc = 0x29f128u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1008));
label_29f12c:
    // 0x29f12c: 0x3c06004f  lui         $a2, 0x4F
    ctx->pc = 0x29f12cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)79 << 16));
label_29f130:
    // 0x29f130: 0x24c6d930  addiu       $a2, $a2, -0x26D0
    ctx->pc = 0x29f130u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957360));
label_29f134:
    // 0x29f134: 0xc041a50  jal         func_106940
label_29f138:
    if (ctx->pc == 0x29F138u) {
        ctx->pc = 0x29F13Cu;
        goto label_29f13c;
    }
    ctx->pc = 0x29F134u;
    SET_GPR_U32(ctx, 31, 0x29F13Cu);
    ctx->pc = 0x106940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106940u, 0x29F134u, 0x29F13Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F13Cu;
label_29f13c:
    // 0x29f13c: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x29f13cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_29f140:
    // 0x29f140: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x29f140u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29f144:
    // 0x29f144: 0xc040304  jal         func_100C10
label_29f148:
    if (ctx->pc == 0x29F148u) {
        ctx->pc = 0x29F14Cu;
        goto label_29f14c;
    }
    ctx->pc = 0x29F144u;
    SET_GPR_U32(ctx, 31, 0x29F14Cu);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x29F144u, 0x29F14Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F14Cu;
label_29f14c:
    // 0x29f14c: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x29f14cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_29f150:
    // 0x29f150: 0x24440034  addiu       $a0, $v0, 0x34
    ctx->pc = 0x29f150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
label_29f154:
    // 0x29f154: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x29f154u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_29f158:
    // 0x29f158: 0xc082c78  jal         func_20B1E0
label_29f15c:
    if (ctx->pc == 0x29F15Cu) {
        ctx->pc = 0x29F160u;
        goto label_29f160;
    }
    ctx->pc = 0x29F158u;
    SET_GPR_U32(ctx, 31, 0x29F160u);
    ctx->pc = 0x20B1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B1E0u, 0x29F158u, 0x29F160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F160u;
label_29f160:
    // 0x29f160: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x29f160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_29f164:
    // 0x29f164: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x29f164u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_29f168:
    // 0x29f168: 0xc0402d4  jal         func_100B50
label_29f16c:
    if (ctx->pc == 0x29F16Cu) {
        ctx->pc = 0x29F170u;
        goto label_29f170;
    }
    ctx->pc = 0x29F168u;
    SET_GPR_U32(ctx, 31, 0x29F170u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x29F168u, 0x29F170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F170u;
label_29f170:
    // 0x29f170: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29f170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_29f174:
    // 0x29f174: 0x240503f1  addiu       $a1, $zero, 0x3F1
    ctx->pc = 0x29f174u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1009));
label_29f178:
    // 0x29f178: 0x3c06004f  lui         $a2, 0x4F
    ctx->pc = 0x29f178u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)79 << 16));
label_29f17c:
    // 0x29f17c: 0x24c6d950  addiu       $a2, $a2, -0x26B0
    ctx->pc = 0x29f17cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957392));
label_29f180:
    // 0x29f180: 0xc041a50  jal         func_106940
label_29f184:
    if (ctx->pc == 0x29F184u) {
        ctx->pc = 0x29F188u;
        goto label_29f188;
    }
    ctx->pc = 0x29F180u;
    SET_GPR_U32(ctx, 31, 0x29F188u);
    ctx->pc = 0x106940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106940u, 0x29F180u, 0x29F188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F188u;
label_29f188:
    // 0x29f188: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x29f188u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_29f18c:
    // 0x29f18c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x29f18cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29f190:
    // 0x29f190: 0xc040304  jal         func_100C10
label_29f194:
    if (ctx->pc == 0x29F194u) {
        ctx->pc = 0x29F198u;
        goto label_29f198;
    }
    ctx->pc = 0x29F190u;
    SET_GPR_U32(ctx, 31, 0x29F198u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x29F190u, 0x29F198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F198u;
label_29f198:
    // 0x29f198: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x29f198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_29f19c:
    // 0x29f19c: 0x24440034  addiu       $a0, $v0, 0x34
    ctx->pc = 0x29f19cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
label_29f1a0:
    // 0x29f1a0: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x29f1a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_29f1a4:
    // 0x29f1a4: 0xc082c78  jal         func_20B1E0
label_29f1a8:
    if (ctx->pc == 0x29F1A8u) {
        ctx->pc = 0x29F1ACu;
        goto label_29f1ac;
    }
    ctx->pc = 0x29F1A4u;
    SET_GPR_U32(ctx, 31, 0x29F1ACu);
    ctx->pc = 0x20B1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B1E0u, 0x29F1A4u, 0x29F1ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F1ACu;
label_29f1ac:
    // 0x29f1ac: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x29f1acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_29f1b0:
    // 0x29f1b0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x29f1b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_29f1b4:
    // 0x29f1b4: 0xc0402d4  jal         func_100B50
label_29f1b8:
    if (ctx->pc == 0x29F1B8u) {
        ctx->pc = 0x29F1BCu;
        goto label_29f1bc;
    }
    ctx->pc = 0x29F1B4u;
    SET_GPR_U32(ctx, 31, 0x29F1BCu);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x29F1B4u, 0x29F1BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F1BCu;
label_29f1bc:
    // 0x29f1bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29f1bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_29f1c0:
    // 0x29f1c0: 0x240503f2  addiu       $a1, $zero, 0x3F2
    ctx->pc = 0x29f1c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1010));
label_29f1c4:
    // 0x29f1c4: 0x2786a3a8  addiu       $a2, $gp, -0x5C58
    ctx->pc = 0x29f1c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943656));
label_29f1c8:
    // 0x29f1c8: 0xc041a50  jal         func_106940
label_29f1cc:
    if (ctx->pc == 0x29F1CCu) {
        ctx->pc = 0x29F1D0u;
        goto label_29f1d0;
    }
    ctx->pc = 0x29F1C8u;
    SET_GPR_U32(ctx, 31, 0x29F1D0u);
    ctx->pc = 0x106940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106940u, 0x29F1C8u, 0x29F1D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F1D0u;
label_29f1d0:
    // 0x29f1d0: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x29f1d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_29f1d4:
    // 0x29f1d4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x29f1d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29f1d8:
    // 0x29f1d8: 0xc040304  jal         func_100C10
label_29f1dc:
    if (ctx->pc == 0x29F1DCu) {
        ctx->pc = 0x29F1E0u;
        goto label_29f1e0;
    }
    ctx->pc = 0x29F1D8u;
    SET_GPR_U32(ctx, 31, 0x29F1E0u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x29F1D8u, 0x29F1E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F1E0u;
label_29f1e0:
    // 0x29f1e0: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x29f1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_29f1e4:
    // 0x29f1e4: 0x24440034  addiu       $a0, $v0, 0x34
    ctx->pc = 0x29f1e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
label_29f1e8:
    // 0x29f1e8: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x29f1e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_29f1ec:
    // 0x29f1ec: 0xc082c78  jal         func_20B1E0
label_29f1f0:
    if (ctx->pc == 0x29F1F0u) {
        ctx->pc = 0x29F1F4u;
        goto label_29f1f4;
    }
    ctx->pc = 0x29F1ECu;
    SET_GPR_U32(ctx, 31, 0x29F1F4u);
    ctx->pc = 0x20B1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B1E0u, 0x29F1ECu, 0x29F1F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F1F4u;
label_29f1f4:
    // 0x29f1f4: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x29f1f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_29f1f8:
    // 0x29f1f8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x29f1f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_29f1fc:
    // 0x29f1fc: 0xc0402d4  jal         func_100B50
label_29f200:
    if (ctx->pc == 0x29F200u) {
        ctx->pc = 0x29F204u;
        goto label_29f204;
    }
    ctx->pc = 0x29F1FCu;
    SET_GPR_U32(ctx, 31, 0x29F204u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x29F1FCu, 0x29F204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F204u;
label_29f204:
    // 0x29f204: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29f204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_29f208:
    // 0x29f208: 0x240503f3  addiu       $a1, $zero, 0x3F3
    ctx->pc = 0x29f208u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1011));
label_29f20c:
    // 0x29f20c: 0x2786a3a8  addiu       $a2, $gp, -0x5C58
    ctx->pc = 0x29f20cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943656));
label_29f210:
    // 0x29f210: 0xc041a50  jal         func_106940
label_29f214:
    if (ctx->pc == 0x29F214u) {
        ctx->pc = 0x29F218u;
        goto label_29f218;
    }
    ctx->pc = 0x29F210u;
    SET_GPR_U32(ctx, 31, 0x29F218u);
    ctx->pc = 0x106940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106940u, 0x29F210u, 0x29F218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F218u;
label_29f218:
    // 0x29f218: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x29f218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_29f21c:
    // 0x29f21c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x29f21cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29f220:
    // 0x29f220: 0xc040304  jal         func_100C10
label_29f224:
    if (ctx->pc == 0x29F224u) {
        ctx->pc = 0x29F228u;
        goto label_29f228;
    }
    ctx->pc = 0x29F220u;
    SET_GPR_U32(ctx, 31, 0x29F228u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x29F220u, 0x29F228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F228u;
label_29f228:
    // 0x29f228: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x29f228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_29f22c:
    // 0x29f22c: 0x24440034  addiu       $a0, $v0, 0x34
    ctx->pc = 0x29f22cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
label_29f230:
    // 0x29f230: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x29f230u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_29f234:
    // 0x29f234: 0xc082c78  jal         func_20B1E0
label_29f238:
    if (ctx->pc == 0x29F238u) {
        ctx->pc = 0x29F23Cu;
        goto label_29f23c;
    }
    ctx->pc = 0x29F234u;
    SET_GPR_U32(ctx, 31, 0x29F23Cu);
    ctx->pc = 0x20B1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B1E0u, 0x29F234u, 0x29F23Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F23Cu;
label_29f23c:
    // 0x29f23c: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x29f23cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_29f240:
    // 0x29f240: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x29f240u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_29f244:
    // 0x29f244: 0xc0402d4  jal         func_100B50
label_29f248:
    if (ctx->pc == 0x29F248u) {
        ctx->pc = 0x29F24Cu;
        goto label_29f24c;
    }
    ctx->pc = 0x29F244u;
    SET_GPR_U32(ctx, 31, 0x29F24Cu);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x29F244u, 0x29F24Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F24Cu;
label_29f24c:
    // 0x29f24c: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x29f24cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_29f250:
    // 0x29f250: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x29f250u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_29f254:
    // 0x29f254: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x29f254u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_29f258:
    // 0x29f258: 0xc085538  jal         func_2154E0
label_29f25c:
    if (ctx->pc == 0x29F25Cu) {
        ctx->pc = 0x29F260u;
        goto label_29f260;
    }
    ctx->pc = 0x29F258u;
    SET_GPR_U32(ctx, 31, 0x29F260u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x29F258u, 0x29F260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F260u;
label_29f260:
    // 0x29f260: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x29f260u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29f264:
    // 0x29f264: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x29f264u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_29f268:
    // 0x29f268: 0xc096fec  jal         func_25BFB0
label_29f26c:
    if (ctx->pc == 0x29F26Cu) {
        ctx->pc = 0x29F270u;
        goto label_29f270;
    }
    ctx->pc = 0x29F268u;
    SET_GPR_U32(ctx, 31, 0x29F270u);
    ctx->pc = 0x25BFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BFB0u, 0x29F268u, 0x29F270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F270u;
label_29f270:
    // 0x29f270: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x29f270u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29f274:
    // 0x29f274: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x29f274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_29f278:
    // 0x29f278: 0x24440034  addiu       $a0, $v0, 0x34
    ctx->pc = 0x29f278u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
label_29f27c:
    // 0x29f27c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x29f27cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29f280:
    // 0x29f280: 0xc07ce2c  jal         func_1F38B0
label_29f284:
    if (ctx->pc == 0x29F284u) {
        ctx->pc = 0x29F288u;
        goto label_29f288;
    }
    ctx->pc = 0x29F280u;
    SET_GPR_U32(ctx, 31, 0x29F288u);
    ctx->pc = 0x1F38B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F38B0u, 0x29F280u, 0x29F288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F288u;
label_29f288:
    // 0x29f288: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x29f288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29f28c:
    // 0x29f28c: 0xc041874  jal         func_1061D0
label_29f290:
    if (ctx->pc == 0x29F290u) {
        ctx->pc = 0x29F294u;
        goto label_29f294;
    }
    ctx->pc = 0x29F28Cu;
    SET_GPR_U32(ctx, 31, 0x29F294u);
    ctx->pc = 0x1061D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1061D0u, 0x29F28Cu, 0x29F294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F294u;
label_29f294:
    // 0x29f294: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x29f294u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_29f298:
    // 0x29f298: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x29f298u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29f29c:
    // 0x29f29c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x29f29cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29f2a0:
    // 0x29f2a0: 0xc0970f4  jal         func_25C3D0
label_29f2a4:
    if (ctx->pc == 0x29F2A4u) {
        ctx->pc = 0x29F2A8u;
        goto label_29f2a8;
    }
    ctx->pc = 0x29F2A0u;
    SET_GPR_U32(ctx, 31, 0x29F2A8u);
    ctx->pc = 0x25C3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C3D0u, 0x29F2A0u, 0x29F2A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F2A8u;
label_29f2a8:
    // 0x29f2a8: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x29f2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_29f2ac:
    // 0x29f2ac: 0x24440034  addiu       $a0, $v0, 0x34
    ctx->pc = 0x29f2acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
label_29f2b0:
    // 0x29f2b0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x29f2b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_29f2b4:
    // 0x29f2b4: 0xc07ce2c  jal         func_1F38B0
label_29f2b8:
    if (ctx->pc == 0x29F2B8u) {
        ctx->pc = 0x29F2BCu;
        goto label_29f2bc;
    }
    ctx->pc = 0x29F2B4u;
    SET_GPR_U32(ctx, 31, 0x29F2BCu);
    ctx->pc = 0x1F38B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F38B0u, 0x29F2B4u, 0x29F2BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F2BCu;
label_29f2bc:
    // 0x29f2bc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x29f2bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29f2c0:
    // 0x29f2c0: 0xc041874  jal         func_1061D0
label_29f2c4:
    if (ctx->pc == 0x29F2C4u) {
        ctx->pc = 0x29F2C8u;
        goto label_29f2c8;
    }
    ctx->pc = 0x29F2C0u;
    SET_GPR_U32(ctx, 31, 0x29F2C8u);
    ctx->pc = 0x1061D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1061D0u, 0x29F2C0u, 0x29F2C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F2C8u;
label_29f2c8:
    // 0x29f2c8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x29f2c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_29f2cc:
    // 0x29f2cc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x29f2ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29f2d0:
    // 0x29f2d0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x29f2d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29f2d4:
    // 0x29f2d4: 0xc097114  jal         func_25C450
label_29f2d8:
    if (ctx->pc == 0x29F2D8u) {
        ctx->pc = 0x29F2DCu;
        goto label_29f2dc;
    }
    ctx->pc = 0x29F2D4u;
    SET_GPR_U32(ctx, 31, 0x29F2DCu);
    ctx->pc = 0x25C450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C450u, 0x29F2D4u, 0x29F2DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F2DCu;
label_29f2dc:
    // 0x29f2dc: 0x8f82bbb4  lw          $v0, -0x444C($gp)
    ctx->pc = 0x29f2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
label_29f2e0:
    // 0x29f2e0: 0x90420028  lbu         $v0, 0x28($v0)
    ctx->pc = 0x29f2e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 40)));
label_29f2e4:
    // 0x29f2e4: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x29f2e4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_29f2e8:
    // 0x29f2e8: 0x324200ff  andi        $v0, $s2, 0xFF
    ctx->pc = 0x29f2e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
label_29f2ec:
    // 0x29f2ec: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_29f2f0:
    if (ctx->pc == 0x29F2F0u) {
        ctx->pc = 0x29F2F4u;
        goto label_29f2f4;
    }
    ctx->pc = 0x29F2ECu;
    {
        const bool branch_taken_0x29f2ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29f2ec) {
            ctx->pc = 0x29F324u;
            goto label_29f324;
        }
    }
    ctx->pc = 0x29F2F4u;
label_29f2f4:
    // 0x29f2f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29f2f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_29f2f8:
    // 0x29f2f8: 0x240503eb  addiu       $a1, $zero, 0x3EB
    ctx->pc = 0x29f2f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1003));
label_29f2fc:
    // 0x29f2fc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x29f2fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29f300:
    // 0x29f300: 0xc04146c  jal         func_1051B0
label_29f304:
    if (ctx->pc == 0x29F304u) {
        ctx->pc = 0x29F308u;
        goto label_29f308;
    }
    ctx->pc = 0x29F300u;
    SET_GPR_U32(ctx, 31, 0x29F308u);
    ctx->pc = 0x1051B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051B0u, 0x29F300u, 0x29F308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F308u;
label_29f308:
    // 0x29f308: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x29f308u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_29f30c:
    // 0x29f30c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29f30cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29f310:
    // 0x29f310: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_29f314:
    if (ctx->pc == 0x29F314u) {
        ctx->pc = 0x29F318u;
        goto label_29f318;
    }
    ctx->pc = 0x29F310u;
    {
        const bool branch_taken_0x29f310 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x29f310) {
            ctx->pc = 0x29F324u;
            goto label_29f324;
        }
    }
    ctx->pc = 0x29F318u;
label_29f318:
    // 0x29f318: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x29f318u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_29f31c:
    // 0x29f31c: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x29f31cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_29f320:
    // 0x29f320: 0xac430194  sw          $v1, 0x194($v0)
    ctx->pc = 0x29f320u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 404), GPR_U32(ctx, 3));
label_29f324:
    // 0x29f324: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x29f324u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29f328:
    // 0x29f328: 0x10000065  b           . + 4 + (0x65 << 2)
label_29f32c:
    if (ctx->pc == 0x29F32Cu) {
        ctx->pc = 0x29F330u;
        goto label_29f330;
    }
    ctx->pc = 0x29F328u;
    {
        const bool branch_taken_0x29f328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29f328) {
            ctx->pc = 0x29F4C0u;
            goto label_29f4c0;
        }
    }
    ctx->pc = 0x29F330u;
label_29f330:
    // 0x29f330: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x29f330u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_29f334:
    // 0x29f334: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x29f334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_29f338:
    // 0x29f338: 0xac400150  sw          $zero, 0x150($v0)
    ctx->pc = 0x29f338u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 336), GPR_U32(ctx, 0));
label_29f33c:
    // 0x29f33c: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x29f33cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_29f340:
    // 0x29f340: 0x24440034  addiu       $a0, $v0, 0x34
    ctx->pc = 0x29f340u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
label_29f344:
    // 0x29f344: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x29f344u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_29f348:
    // 0x29f348: 0xc07ce2c  jal         func_1F38B0
label_29f34c:
    if (ctx->pc == 0x29F34Cu) {
        ctx->pc = 0x29F350u;
        goto label_29f350;
    }
    ctx->pc = 0x29F348u;
    SET_GPR_U32(ctx, 31, 0x29F350u);
    ctx->pc = 0x1F38B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F38B0u, 0x29F348u, 0x29F350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F350u;
label_29f350:
    // 0x29f350: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x29f350u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29f354:
    // 0x29f354: 0xc041874  jal         func_1061D0
label_29f358:
    if (ctx->pc == 0x29F358u) {
        ctx->pc = 0x29F35Cu;
        goto label_29f35c;
    }
    ctx->pc = 0x29F354u;
    SET_GPR_U32(ctx, 31, 0x29F35Cu);
    ctx->pc = 0x1061D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1061D0u, 0x29F354u, 0x29F35Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F35Cu;
label_29f35c:
    // 0x29f35c: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x29f35cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_29f360:
    // 0x29f360: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x29f360u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29f364:
    // 0x29f364: 0xc0bc5c6  jal         func_2F1718
label_29f368:
    if (ctx->pc == 0x29F368u) {
        ctx->pc = 0x29F36Cu;
        goto label_29f36c;
    }
    ctx->pc = 0x29F364u;
    SET_GPR_U32(ctx, 31, 0x29F36Cu);
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x29F364u, 0x29F36Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F36Cu;
label_29f36c:
    // 0x29f36c: 0x26020031  addiu       $v0, $s0, 0x31
    ctx->pc = 0x29f36cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 49));
label_29f370:
    // 0x29f370: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x29f370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
label_29f374:
    // 0x29f374: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x29f374u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
label_29f378:
    // 0x29f378: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x29f378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
label_29f37c:
    // 0x29f37c: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x29f37cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_29f380:
    // 0x29f380: 0xc0bc60c  jal         func_2F1830
label_29f384:
    if (ctx->pc == 0x29F384u) {
        ctx->pc = 0x29F388u;
        goto label_29f388;
    }
    ctx->pc = 0x29F380u;
    SET_GPR_U32(ctx, 31, 0x29F388u);
    ctx->pc = 0x2F1830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1830u, 0x29F380u, 0x29F388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F388u;
label_29f388:
    // 0x29f388: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x29f388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_29f38c:
    // 0x29f38c: 0x5d1821  addu        $v1, $v0, $sp
    ctx->pc = 0x29f38cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_29f390:
    // 0x29f390: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x29f390u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_29f394:
    // 0x29f394: 0xa06200e0  sb          $v0, 0xE0($v1)
    ctx->pc = 0x29f394u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 224), (uint8_t)GPR_U32(ctx, 2));
label_29f398:
    // 0x29f398: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x29f398u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_29f39c:
    // 0x29f39c: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x29f39cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_29f3a0:
    // 0x29f3a0: 0x8fa40160  lw          $a0, 0x160($sp)
    ctx->pc = 0x29f3a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_29f3a4:
    // 0x29f3a4: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x29f3a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_29f3a8:
    // 0x29f3a8: 0x24460150  addiu       $a2, $v0, 0x150
    ctx->pc = 0x29f3a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 336));
label_29f3ac:
    // 0x29f3ac: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x29f3acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29f3b0:
    // 0x29f3b0: 0xc0a8230  jal         func_2A08C0
label_29f3b4:
    if (ctx->pc == 0x29F3B4u) {
        ctx->pc = 0x29F3B8u;
        goto label_29f3b8;
    }
    ctx->pc = 0x29F3B0u;
    SET_GPR_U32(ctx, 31, 0x29F3B8u);
    ctx->pc = 0x2A08C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A08C0u, 0x29F3B0u, 0x29F3B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F3B8u;
label_29f3b8:
    // 0x29f3b8: 0x324200ff  andi        $v0, $s2, 0xFF
    ctx->pc = 0x29f3b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
label_29f3bc:
    // 0x29f3bc: 0x1440003f  bnez        $v0, . + 4 + (0x3F << 2)
label_29f3c0:
    if (ctx->pc == 0x29F3C0u) {
        ctx->pc = 0x29F3C4u;
        goto label_29f3c4;
    }
    ctx->pc = 0x29F3BCu;
    {
        const bool branch_taken_0x29f3bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29f3bc) {
            ctx->pc = 0x29F4BCu;
            goto label_29f4bc;
        }
    }
    ctx->pc = 0x29F3C4u;
label_29f3c4:
    // 0x29f3c4: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x29f3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_29f3c8:
    // 0x29f3c8: 0x24440034  addiu       $a0, $v0, 0x34
    ctx->pc = 0x29f3c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
label_29f3cc:
    // 0x29f3cc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x29f3ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29f3d0:
    // 0x29f3d0: 0xc07ce2c  jal         func_1F38B0
label_29f3d4:
    if (ctx->pc == 0x29F3D4u) {
        ctx->pc = 0x29F3D8u;
        goto label_29f3d8;
    }
    ctx->pc = 0x29F3D0u;
    SET_GPR_U32(ctx, 31, 0x29F3D8u);
    ctx->pc = 0x1F38B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F38B0u, 0x29F3D0u, 0x29F3D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F3D8u;
label_29f3d8:
    // 0x29f3d8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x29f3d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29f3dc:
    // 0x29f3dc: 0xc041874  jal         func_1061D0
label_29f3e0:
    if (ctx->pc == 0x29F3E0u) {
        ctx->pc = 0x29F3E4u;
        goto label_29f3e4;
    }
    ctx->pc = 0x29F3DCu;
    SET_GPR_U32(ctx, 31, 0x29F3E4u);
    ctx->pc = 0x1061D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1061D0u, 0x29F3DCu, 0x29F3E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F3E4u;
label_29f3e4:
    // 0x29f3e4: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x29f3e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_29f3e8:
    // 0x29f3e8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x29f3e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29f3ec:
    // 0x29f3ec: 0xc0bc5c6  jal         func_2F1718
label_29f3f0:
    if (ctx->pc == 0x29F3F0u) {
        ctx->pc = 0x29F3F4u;
        goto label_29f3f4;
    }
    ctx->pc = 0x29F3ECu;
    SET_GPR_U32(ctx, 31, 0x29F3F4u);
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x29F3ECu, 0x29F3F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F3F4u;
label_29f3f4:
    // 0x29f3f4: 0x26020031  addiu       $v0, $s0, 0x31
    ctx->pc = 0x29f3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 49));
label_29f3f8:
    // 0x29f3f8: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x29f3f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
label_29f3fc:
    // 0x29f3fc: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x29f3fcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
label_29f400:
    // 0x29f400: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x29f400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_29f404:
    // 0x29f404: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x29f404u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_29f408:
    // 0x29f408: 0xc0bc60c  jal         func_2F1830
label_29f40c:
    if (ctx->pc == 0x29F40Cu) {
        ctx->pc = 0x29F410u;
        goto label_29f410;
    }
    ctx->pc = 0x29F408u;
    SET_GPR_U32(ctx, 31, 0x29F410u);
    ctx->pc = 0x2F1830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1830u, 0x29F408u, 0x29F410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F410u;
label_29f410:
    // 0x29f410: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x29f410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_29f414:
    // 0x29f414: 0x5d1821  addu        $v1, $v0, $sp
    ctx->pc = 0x29f414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_29f418:
    // 0x29f418: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x29f418u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_29f41c:
    // 0x29f41c: 0xa06200e0  sb          $v0, 0xE0($v1)
    ctx->pc = 0x29f41cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 224), (uint8_t)GPR_U32(ctx, 2));
label_29f420:
    // 0x29f420: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x29f420u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_29f424:
    // 0x29f424: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x29f424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_29f428:
    // 0x29f428: 0x8fa40160  lw          $a0, 0x160($sp)
    ctx->pc = 0x29f428u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_29f42c:
    // 0x29f42c: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x29f42cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_29f430:
    // 0x29f430: 0x24460150  addiu       $a2, $v0, 0x150
    ctx->pc = 0x29f430u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 336));
label_29f434:
    // 0x29f434: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x29f434u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29f438:
    // 0x29f438: 0xc0a81a8  jal         func_2A06A0
label_29f43c:
    if (ctx->pc == 0x29F43Cu) {
        ctx->pc = 0x29F440u;
        goto label_29f440;
    }
    ctx->pc = 0x29F438u;
    SET_GPR_U32(ctx, 31, 0x29F440u);
    ctx->pc = 0x2A06A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A06A0u, 0x29F438u, 0x29F440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F440u;
label_29f440:
    // 0x29f440: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x29f440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_29f444:
    // 0x29f444: 0x24440034  addiu       $a0, $v0, 0x34
    ctx->pc = 0x29f444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
label_29f448:
    // 0x29f448: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29f448u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29f44c:
    // 0x29f44c: 0xc07ce2c  jal         func_1F38B0
label_29f450:
    if (ctx->pc == 0x29F450u) {
        ctx->pc = 0x29F454u;
        goto label_29f454;
    }
    ctx->pc = 0x29F44Cu;
    SET_GPR_U32(ctx, 31, 0x29F454u);
    ctx->pc = 0x1F38B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F38B0u, 0x29F44Cu, 0x29F454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F454u;
label_29f454:
    // 0x29f454: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x29f454u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29f458:
    // 0x29f458: 0xc041874  jal         func_1061D0
label_29f45c:
    if (ctx->pc == 0x29F45Cu) {
        ctx->pc = 0x29F460u;
        goto label_29f460;
    }
    ctx->pc = 0x29F458u;
    SET_GPR_U32(ctx, 31, 0x29F460u);
    ctx->pc = 0x1061D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1061D0u, 0x29F458u, 0x29F460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F460u;
label_29f460:
    // 0x29f460: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x29f460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_29f464:
    // 0x29f464: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x29f464u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29f468:
    // 0x29f468: 0xc0bc5c6  jal         func_2F1718
label_29f46c:
    if (ctx->pc == 0x29F46Cu) {
        ctx->pc = 0x29F470u;
        goto label_29f470;
    }
    ctx->pc = 0x29F468u;
    SET_GPR_U32(ctx, 31, 0x29F470u);
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x29F468u, 0x29F470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F470u;
label_29f470:
    // 0x29f470: 0x26020031  addiu       $v0, $s0, 0x31
    ctx->pc = 0x29f470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 49));
label_29f474:
    // 0x29f474: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x29f474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
label_29f478:
    // 0x29f478: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x29f478u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
label_29f47c:
    // 0x29f47c: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x29f47cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
label_29f480:
    // 0x29f480: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x29f480u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_29f484:
    // 0x29f484: 0xc0bc60c  jal         func_2F1830
label_29f488:
    if (ctx->pc == 0x29F488u) {
        ctx->pc = 0x29F48Cu;
        goto label_29f48c;
    }
    ctx->pc = 0x29F484u;
    SET_GPR_U32(ctx, 31, 0x29F48Cu);
    ctx->pc = 0x2F1830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1830u, 0x29F484u, 0x29F48Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F48Cu;
label_29f48c:
    // 0x29f48c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x29f48cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_29f490:
    // 0x29f490: 0x5d1821  addu        $v1, $v0, $sp
    ctx->pc = 0x29f490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_29f494:
    // 0x29f494: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x29f494u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_29f498:
    // 0x29f498: 0xa06200e0  sb          $v0, 0xE0($v1)
    ctx->pc = 0x29f498u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 224), (uint8_t)GPR_U32(ctx, 2));
label_29f49c:
    // 0x29f49c: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x29f49cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_29f4a0:
    // 0x29f4a0: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x29f4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_29f4a4:
    // 0x29f4a4: 0x8fa40160  lw          $a0, 0x160($sp)
    ctx->pc = 0x29f4a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_29f4a8:
    // 0x29f4a8: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x29f4a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_29f4ac:
    // 0x29f4ac: 0x24460150  addiu       $a2, $v0, 0x150
    ctx->pc = 0x29f4acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 336));
label_29f4b0:
    // 0x29f4b0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x29f4b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29f4b4:
    // 0x29f4b4: 0xc0a80f8  jal         func_2A03E0
label_29f4b8:
    if (ctx->pc == 0x29F4B8u) {
        ctx->pc = 0x29F4BCu;
        goto label_29f4bc;
    }
    ctx->pc = 0x29F4B4u;
    SET_GPR_U32(ctx, 31, 0x29F4BCu);
    ctx->pc = 0x2A03E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A03E0u, 0x29F4B4u, 0x29F4BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F4BCu;
label_29f4bc:
    // 0x29f4bc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x29f4bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_29f4c0:
    // 0x29f4c0: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x29f4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_29f4c4:
    // 0x29f4c4: 0x8c420194  lw          $v0, 0x194($v0)
    ctx->pc = 0x29f4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 404)));
label_29f4c8:
    // 0x29f4c8: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x29f4c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_29f4cc:
    // 0x29f4cc: 0x1440ff98  bnez        $v0, . + 4 + (-0x68 << 2)
label_29f4d0:
    if (ctx->pc == 0x29F4D0u) {
        ctx->pc = 0x29F4D4u;
        goto label_29f4d4;
    }
    ctx->pc = 0x29F4CCu;
    {
        const bool branch_taken_0x29f4cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29f4cc) {
            ctx->pc = 0x29F330u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29f330;
        }
    }
    ctx->pc = 0x29F4D4u;
label_29f4d4:
    // 0x29f4d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29f4d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_29f4d8:
    // 0x29f4d8: 0x240503eb  addiu       $a1, $zero, 0x3EB
    ctx->pc = 0x29f4d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1003));
label_29f4dc:
    // 0x29f4dc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x29f4dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29f4e0:
    // 0x29f4e0: 0xc04146c  jal         func_1051B0
label_29f4e4:
    if (ctx->pc == 0x29F4E4u) {
        ctx->pc = 0x29F4E8u;
        goto label_29f4e8;
    }
    ctx->pc = 0x29F4E0u;
    SET_GPR_U32(ctx, 31, 0x29F4E8u);
    ctx->pc = 0x1051B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051B0u, 0x29F4E0u, 0x29F4E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F4E8u;
label_29f4e8:
    // 0x29f4e8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x29f4e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_29f4ec:
    // 0x29f4ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29f4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29f4f0:
    // 0x29f4f0: 0x14620029  bne         $v1, $v0, . + 4 + (0x29 << 2)
label_29f4f4:
    if (ctx->pc == 0x29F4F4u) {
        ctx->pc = 0x29F4F8u;
        goto label_29f4f8;
    }
    ctx->pc = 0x29F4F0u;
    {
        const bool branch_taken_0x29f4f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x29f4f0) {
            ctx->pc = 0x29F598u;
            goto label_29f598;
        }
    }
    ctx->pc = 0x29F4F8u;
label_29f4f8:
    // 0x29f4f8: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x29f4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_29f4fc:
    // 0x29f4fc: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x29f4fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_29f500:
    // 0x29f500: 0x8fa50150  lw          $a1, 0x150($sp)
    ctx->pc = 0x29f500u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_29f504:
    // 0x29f504: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x29f504u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29f508:
    // 0x29f508: 0xc12174c  jal         func_485D30
label_29f50c:
    if (ctx->pc == 0x29F50Cu) {
        ctx->pc = 0x29F510u;
        goto label_29f510;
    }
    ctx->pc = 0x29F508u;
    SET_GPR_U32(ctx, 31, 0x29F510u);
    ctx->pc = 0x485D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x485D30u, 0x29F508u, 0x29F510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F510u;
label_29f510:
    // 0x29f510: 0x8fa30160  lw          $v1, 0x160($sp)
    ctx->pc = 0x29f510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_29f514:
    // 0x29f514: 0x240201f5  addiu       $v0, $zero, 0x1F5
    ctx->pc = 0x29f514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 501));
label_29f518:
    // 0x29f518: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29f518u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_29f51c:
    // 0x29f51c: 0x0  nop
    ctx->pc = 0x29f51cu;
    // NOP
label_29f520:
    // 0x29f520: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x29f520u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_29f524:
    // 0x29f524: 0x8c640040  lw          $a0, 0x40($v1)
    ctx->pc = 0x29f524u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
label_29f528:
    // 0x29f528: 0x8fa50158  lw          $a1, 0x158($sp)
    ctx->pc = 0x29f528u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
label_29f52c:
    // 0x29f52c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x29f52cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_29f530:
    // 0x29f530: 0xc121d6c  jal         func_4875B0
label_29f534:
    if (ctx->pc == 0x29F534u) {
        ctx->pc = 0x29F538u;
        goto label_29f538;
    }
    ctx->pc = 0x29F530u;
    SET_GPR_U32(ctx, 31, 0x29F538u);
    ctx->pc = 0x4875B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4875B0u, 0x29F530u, 0x29F538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F538u;
label_29f538:
    // 0x29f538: 0x8fa30160  lw          $v1, 0x160($sp)
    ctx->pc = 0x29f538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_29f53c:
    // 0x29f53c: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x29f53cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
label_29f540:
    // 0x29f540: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x29f540u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_29f544:
    // 0x29f544: 0x8c640040  lw          $a0, 0x40($v1)
    ctx->pc = 0x29f544u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
label_29f548:
    // 0x29f548: 0x8fa50154  lw          $a1, 0x154($sp)
    ctx->pc = 0x29f548u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
label_29f54c:
    // 0x29f54c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x29f54cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29f550:
    // 0x29f550: 0xc121d6c  jal         func_4875B0
label_29f554:
    if (ctx->pc == 0x29F554u) {
        ctx->pc = 0x29F558u;
        goto label_29f558;
    }
    ctx->pc = 0x29F550u;
    SET_GPR_U32(ctx, 31, 0x29F558u);
    ctx->pc = 0x4875B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4875B0u, 0x29F550u, 0x29F558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F558u;
label_29f558:
    // 0x29f558: 0x8fa30160  lw          $v1, 0x160($sp)
    ctx->pc = 0x29f558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_29f55c:
    // 0x29f55c: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x29f55cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
label_29f560:
    // 0x29f560: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x29f560u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_29f564:
    // 0x29f564: 0x8c640040  lw          $a0, 0x40($v1)
    ctx->pc = 0x29f564u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
label_29f568:
    // 0x29f568: 0x8fa50150  lw          $a1, 0x150($sp)
    ctx->pc = 0x29f568u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_29f56c:
    // 0x29f56c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x29f56cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29f570:
    // 0x29f570: 0xc121d6c  jal         func_4875B0
label_29f574:
    if (ctx->pc == 0x29F574u) {
        ctx->pc = 0x29F578u;
        goto label_29f578;
    }
    ctx->pc = 0x29F570u;
    SET_GPR_U32(ctx, 31, 0x29F578u);
    ctx->pc = 0x4875B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4875B0u, 0x29F570u, 0x29F578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F578u;
label_29f578:
    // 0x29f578: 0x8fa40158  lw          $a0, 0x158($sp)
    ctx->pc = 0x29f578u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
label_29f57c:
    // 0x29f57c: 0xc0e20da  jal         func_388368
label_29f580:
    if (ctx->pc == 0x29F580u) {
        ctx->pc = 0x29F584u;
        goto label_29f584;
    }
    ctx->pc = 0x29F57Cu;
    SET_GPR_U32(ctx, 31, 0x29F584u);
    ctx->pc = 0x388368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x388368u, 0x29F57Cu, 0x29F584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F584u;
label_29f584:
    // 0x29f584: 0x8fa40154  lw          $a0, 0x154($sp)
    ctx->pc = 0x29f584u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
label_29f588:
    // 0x29f588: 0xc0e20da  jal         func_388368
label_29f58c:
    if (ctx->pc == 0x29F58Cu) {
        ctx->pc = 0x29F590u;
        goto label_29f590;
    }
    ctx->pc = 0x29F588u;
    SET_GPR_U32(ctx, 31, 0x29F590u);
    ctx->pc = 0x388368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x388368u, 0x29F588u, 0x29F590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F590u;
label_29f590:
    // 0x29f590: 0x10000007  b           . + 4 + (0x7 << 2)
label_29f594:
    if (ctx->pc == 0x29F594u) {
        ctx->pc = 0x29F598u;
        goto label_29f598;
    }
    ctx->pc = 0x29F590u;
    {
        const bool branch_taken_0x29f590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29f590) {
            ctx->pc = 0x29F5B0u;
            goto label_29f5b0;
        }
    }
    ctx->pc = 0x29F598u;
label_29f598:
    // 0x29f598: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x29f598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_29f59c:
    // 0x29f59c: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x29f59cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_29f5a0:
    // 0x29f5a0: 0x8fa50150  lw          $a1, 0x150($sp)
    ctx->pc = 0x29f5a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_29f5a4:
    // 0x29f5a4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x29f5a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29f5a8:
    // 0x29f5a8: 0xc12174c  jal         func_485D30
label_29f5ac:
    if (ctx->pc == 0x29F5ACu) {
        ctx->pc = 0x29F5B0u;
        goto label_29f5b0;
    }
    ctx->pc = 0x29F5A8u;
    SET_GPR_U32(ctx, 31, 0x29F5B0u);
    ctx->pc = 0x485D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x485D30u, 0x29F5A8u, 0x29F5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F5B0u;
label_29f5b0:
    // 0x29f5b0: 0x324200ff  andi        $v0, $s2, 0xFF
    ctx->pc = 0x29f5b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
label_29f5b4:
    // 0x29f5b4: 0x14400048  bnez        $v0, . + 4 + (0x48 << 2)
label_29f5b8:
    if (ctx->pc == 0x29F5B8u) {
        ctx->pc = 0x29F5BCu;
        goto label_29f5bc;
    }
    ctx->pc = 0x29F5B4u;
    {
        const bool branch_taken_0x29f5b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29f5b4) {
            ctx->pc = 0x29F6D8u;
            goto label_29f6d8;
        }
    }
    ctx->pc = 0x29F5BCu;
label_29f5bc:
    // 0x29f5bc: 0xc122430  jal         func_4890C0
label_29f5c0:
    if (ctx->pc == 0x29F5C0u) {
        ctx->pc = 0x29F5C4u;
        goto label_29f5c4;
    }
    ctx->pc = 0x29F5BCu;
    SET_GPR_U32(ctx, 31, 0x29F5C4u);
    ctx->pc = 0x4890C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4890C0u, 0x29F5BCu, 0x29F5C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F5C4u;
label_29f5c4:
    // 0x29f5c4: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x29f5c4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29f5c8:
    // 0x29f5c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29f5c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_29f5cc:
    // 0x29f5cc: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x29f5ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
label_29f5d0:
    // 0x29f5d0: 0x24a5d970  addiu       $a1, $a1, -0x2690
    ctx->pc = 0x29f5d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957424));
label_29f5d4:
    // 0x29f5d4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x29f5d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29f5d8:
    // 0x29f5d8: 0xc047970  jal         func_11E5C0
label_29f5dc:
    if (ctx->pc == 0x29F5DCu) {
        ctx->pc = 0x29F5E0u;
        goto label_29f5e0;
    }
    ctx->pc = 0x29F5D8u;
    SET_GPR_U32(ctx, 31, 0x29F5E0u);
    ctx->pc = 0x11E5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E5C0u, 0x29F5D8u, 0x29F5E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F5E0u;
label_29f5e0:
    // 0x29f5e0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x29f5e0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29f5e4:
    // 0x29f5e4: 0x16800010  bnez        $s4, . + 4 + (0x10 << 2)
label_29f5e8:
    if (ctx->pc == 0x29F5E8u) {
        ctx->pc = 0x29F5ECu;
        goto label_29f5ec;
    }
    ctx->pc = 0x29F5E4u;
    {
        const bool branch_taken_0x29f5e4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x29f5e4) {
            ctx->pc = 0x29F628u;
            goto label_29f628;
        }
    }
    ctx->pc = 0x29F5ECu;
label_29f5ec:
    // 0x29f5ec: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x29f5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_29f5f0:
    // 0x29f5f0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x29f5f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_29f5f4:
    // 0x29f5f4: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x29f5f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_29f5f8:
    // 0x29f5f8: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x29f5f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
label_29f5fc:
    // 0x29f5fc: 0x24a5d980  addiu       $a1, $a1, -0x2680
    ctx->pc = 0x29f5fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957440));
label_29f600:
    // 0x29f600: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x29f600u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29f604:
    // 0x29f604: 0xc1217cc  jal         func_485F30
label_29f608:
    if (ctx->pc == 0x29F608u) {
        ctx->pc = 0x29F60Cu;
        goto label_29f60c;
    }
    ctx->pc = 0x29F604u;
    SET_GPR_U32(ctx, 31, 0x29F60Cu);
    ctx->pc = 0x485F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x485F30u, 0x29F604u, 0x29F60Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F60Cu;
label_29f60c:
    // 0x29f60c: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x29f60cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_29f610:
    // 0x29f610: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x29f610u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_29f614:
    // 0x29f614: 0xc78c8258  lwc1        $f12, -0x7DA8($gp)
    ctx->pc = 0x29f614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_29f618:
    // 0x29f618: 0xc121910  jal         func_486440
label_29f61c:
    if (ctx->pc == 0x29F61Cu) {
        ctx->pc = 0x29F620u;
        goto label_29f620;
    }
    ctx->pc = 0x29F618u;
    SET_GPR_U32(ctx, 31, 0x29F620u);
    ctx->pc = 0x486440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x486440u, 0x29F618u, 0x29F620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F620u;
label_29f620:
    // 0x29f620: 0x10000011  b           . + 4 + (0x11 << 2)
label_29f624:
    if (ctx->pc == 0x29F624u) {
        ctx->pc = 0x29F628u;
        goto label_29f628;
    }
    ctx->pc = 0x29F620u;
    {
        const bool branch_taken_0x29f620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29f620) {
            ctx->pc = 0x29F668u;
            goto label_29f668;
        }
    }
    ctx->pc = 0x29F628u;
label_29f628:
    // 0x29f628: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29f628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29f62c:
    // 0x29f62c: 0x1682000e  bne         $s4, $v0, . + 4 + (0xE << 2)
label_29f630:
    if (ctx->pc == 0x29F630u) {
        ctx->pc = 0x29F634u;
        goto label_29f634;
    }
    ctx->pc = 0x29F62Cu;
    {
        const bool branch_taken_0x29f62c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x29f62c) {
            ctx->pc = 0x29F668u;
            goto label_29f668;
        }
    }
    ctx->pc = 0x29F634u;
label_29f634:
    // 0x29f634: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x29f634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_29f638:
    // 0x29f638: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x29f638u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_29f63c:
    // 0x29f63c: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x29f63cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_29f640:
    // 0x29f640: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x29f640u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
label_29f644:
    // 0x29f644: 0x24a5d9a0  addiu       $a1, $a1, -0x2660
    ctx->pc = 0x29f644u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957472));
label_29f648:
    // 0x29f648: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x29f648u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29f64c:
    // 0x29f64c: 0xc1217cc  jal         func_485F30
label_29f650:
    if (ctx->pc == 0x29F650u) {
        ctx->pc = 0x29F654u;
        goto label_29f654;
    }
    ctx->pc = 0x29F64Cu;
    SET_GPR_U32(ctx, 31, 0x29F654u);
    ctx->pc = 0x485F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x485F30u, 0x29F64Cu, 0x29F654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F654u;
label_29f654:
    // 0x29f654: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x29f654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_29f658:
    // 0x29f658: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x29f658u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_29f65c:
    // 0x29f65c: 0xc78c8258  lwc1        $f12, -0x7DA8($gp)
    ctx->pc = 0x29f65cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_29f660:
    // 0x29f660: 0xc121910  jal         func_486440
label_29f664:
    if (ctx->pc == 0x29F664u) {
        ctx->pc = 0x29F668u;
        goto label_29f668;
    }
    ctx->pc = 0x29F660u;
    SET_GPR_U32(ctx, 31, 0x29F668u);
    ctx->pc = 0x486440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x486440u, 0x29F660u, 0x29F668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F668u;
label_29f668:
    // 0x29f668: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x29f668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_29f66c:
    // 0x29f66c: 0x24440034  addiu       $a0, $v0, 0x34
    ctx->pc = 0x29f66cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
label_29f670:
    // 0x29f670: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29f670u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29f674:
    // 0x29f674: 0xc07ce2c  jal         func_1F38B0
label_29f678:
    if (ctx->pc == 0x29F678u) {
        ctx->pc = 0x29F67Cu;
        goto label_29f67c;
    }
    ctx->pc = 0x29F674u;
    SET_GPR_U32(ctx, 31, 0x29F67Cu);
    ctx->pc = 0x1F38B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F38B0u, 0x29F674u, 0x29F67Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F67Cu;
label_29f67c:
    // 0x29f67c: 0x8fa30160  lw          $v1, 0x160($sp)
    ctx->pc = 0x29f67cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_29f680:
    // 0x29f680: 0x24640188  addiu       $a0, $v1, 0x188
    ctx->pc = 0x29f680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 392));
label_29f684:
    // 0x29f684: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x29f684u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29f688:
    // 0x29f688: 0xc0430e4  jal         func_10C390
label_29f68c:
    if (ctx->pc == 0x29F68Cu) {
        ctx->pc = 0x29F690u;
        goto label_29f690;
    }
    ctx->pc = 0x29F688u;
    SET_GPR_U32(ctx, 31, 0x29F690u);
    ctx->pc = 0x10C390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C390u, 0x29F688u, 0x29F690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F690u;
label_29f690:
    // 0x29f690: 0x8fa40160  lw          $a0, 0x160($sp)
    ctx->pc = 0x29f690u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_29f694:
    // 0x29f694: 0xc0a86bc  jal         func_2A1AF0
label_29f698:
    if (ctx->pc == 0x29F698u) {
        ctx->pc = 0x29F69Cu;
        goto label_29f69c;
    }
    ctx->pc = 0x29F694u;
    SET_GPR_U32(ctx, 31, 0x29F69Cu);
    ctx->pc = 0x2A1AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A1AF0u, 0x29F694u, 0x29F69Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F69Cu;
label_29f69c:
    // 0x29f69c: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x29f69cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_29f6a0:
    // 0x29f6a0: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x29f6a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
label_29f6a4:
    // 0x29f6a4: 0x8fa50160  lw          $a1, 0x160($sp)
    ctx->pc = 0x29f6a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_29f6a8:
    // 0x29f6a8: 0x24a20188  addiu       $v0, $a1, 0x188
    ctx->pc = 0x29f6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 392));
label_29f6ac:
    // 0x29f6ac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x29f6acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29f6b0:
    // 0x29f6b0: 0xc042514  jal         func_109450
label_29f6b4:
    if (ctx->pc == 0x29F6B4u) {
        ctx->pc = 0x29F6B8u;
        goto label_29f6b8;
    }
    ctx->pc = 0x29F6B0u;
    SET_GPR_U32(ctx, 31, 0x29F6B8u);
    ctx->pc = 0x109450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109450u, 0x29F6B0u, 0x29F6B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F6B8u;
label_29f6b8:
    // 0x29f6b8: 0x2445ffff  addiu       $a1, $v0, -0x1
    ctx->pc = 0x29f6b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_29f6bc:
    // 0x29f6bc: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x29f6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_29f6c0:
    // 0x29f6c0: 0x24440188  addiu       $a0, $v0, 0x188
    ctx->pc = 0x29f6c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 392));
label_29f6c4:
    // 0x29f6c4: 0xc05db18  jal         func_176C60
label_29f6c8:
    if (ctx->pc == 0x29F6C8u) {
        ctx->pc = 0x29F6CCu;
        goto label_29f6cc;
    }
    ctx->pc = 0x29F6C4u;
    SET_GPR_U32(ctx, 31, 0x29F6CCu);
    ctx->pc = 0x176C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176C60u, 0x29F6C4u, 0x29F6CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F6CCu;
label_29f6cc:
    // 0x29f6cc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x29f6ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29f6d0:
    // 0x29f6d0: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x29f6d0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_29f6d4:
    // 0x29f6d4: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x29f6d4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_29f6d8:
    // 0x29f6d8: 0x2e0102d  daddu       $v0, $s7, $zero
    ctx->pc = 0x29f6d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_29f6dc:
    // 0x29f6dc: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x29f6dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_29f6e0:
    // 0x29f6e0: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x29f6e0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_29f6e4:
    // 0x29f6e4: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x29f6e4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_29f6e8:
    // 0x29f6e8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x29f6e8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_29f6ec:
    // 0x29f6ec: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x29f6ecu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_29f6f0:
    // 0x29f6f0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x29f6f0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_29f6f4:
    // 0x29f6f4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x29f6f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_29f6f8:
    // 0x29f6f8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x29f6f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_29f6fc:
    // 0x29f6fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x29f6fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_29f700:
    // 0x29f700: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29f700u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_29f704:
    // 0x29f704: 0x27bd0180  addiu       $sp, $sp, 0x180
    ctx->pc = 0x29f704u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_29f708:
    // 0x29f708: 0x3e00008  jr          $ra
label_29f70c:
    if (ctx->pc == 0x29F70Cu) {
        ctx->pc = 0x29F710u;
        goto label_29f710;
    }
    ctx->pc = 0x29F708u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29F708u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29F710u;
label_29f710:
    // 0x29f710: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x29f710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
label_29f714:
    // 0x29f714: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x29f714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_29f718:
    // 0x29f718: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x29f718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_29f71c:
    // 0x29f71c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x29f71cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_29f720:
    // 0x29f720: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x29f720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_29f724:
    // 0x29f724: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x29f724u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_29f728:
    // 0x29f728: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x29f728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_29f72c:
    // 0x29f72c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x29f72cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_29f730:
    // 0x29f730: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x29f730u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_29f734:
    // 0x29f734: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29f734u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_29f738:
    // 0x29f738: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29f738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_29f73c:
    // 0x29f73c: 0xafa40130  sw          $a0, 0x130($sp)
    ctx->pc = 0x29f73cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 4));
label_29f740:
    // 0x29f740: 0x8f83bbb4  lw          $v1, -0x444C($gp)
    ctx->pc = 0x29f740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
label_29f744:
    // 0x29f744: 0x90630028  lbu         $v1, 0x28($v1)
    ctx->pc = 0x29f744u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 40)));
label_29f748:
    // 0x29f748: 0x146002c0  bnez        $v1, . + 4 + (0x2C0 << 2)
label_29f74c:
    if (ctx->pc == 0x29F74Cu) {
        ctx->pc = 0x29F750u;
        goto label_29f750;
    }
    ctx->pc = 0x29F748u;
    {
        const bool branch_taken_0x29f748 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x29f748) {
            ctx->pc = 0x2A024Cu;
            goto label_2a024c;
        }
    }
    ctx->pc = 0x29F750u;
label_29f750:
    // 0x29f750: 0xc12242c  jal         func_4890B0
label_29f754:
    if (ctx->pc == 0x29F754u) {
        ctx->pc = 0x29F758u;
        goto label_29f758;
    }
    ctx->pc = 0x29F750u;
    SET_GPR_U32(ctx, 31, 0x29F758u);
    ctx->pc = 0x4890B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4890B0u, 0x29F750u, 0x29F758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F758u;
label_29f758:
    // 0x29f758: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x29f758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_29f75c:
    // 0x29f75c: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x29f75cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
label_29f760:
    // 0x29f760: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x29f760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_29f764:
    // 0x29f764: 0x24430040  addiu       $v1, $v0, 0x40
    ctx->pc = 0x29f764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_29f768:
    // 0x29f768: 0x27a200f0  addiu       $v0, $sp, 0xF0
    ctx->pc = 0x29f768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_29f76c:
    // 0x29f76c: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x29f76cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_29f770:
    // 0x29f770: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x29f770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_29f774:
    // 0x29f774: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x29f774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29f778:
    // 0x29f778: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x29f778u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_29f77c:
    // 0x29f77c: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x29f77cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_29f780:
    // 0x29f780: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x29f780u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_29f784:
    // 0x29f784: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x29f784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_29f788:
    // 0x29f788: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x29f788u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_29f78c:
    // 0x29f78c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x29f78cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_29f790:
    // 0x29f790: 0xc121e84  jal         func_487A10
label_29f794:
    if (ctx->pc == 0x29F794u) {
        ctx->pc = 0x29F798u;
        goto label_29f798;
    }
    ctx->pc = 0x29F790u;
    SET_GPR_U32(ctx, 31, 0x29F798u);
    ctx->pc = 0x487A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x487A10u, 0x29F790u, 0x29F798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F798u;
label_29f798:
    // 0x29f798: 0x27a300e0  addiu       $v1, $sp, 0xE0
    ctx->pc = 0x29f798u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_29f79c:
    // 0x29f79c: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x29f79cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_29f7a0:
    // 0x29f7a0: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x29f7a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_29f7a4:
    // 0x29f7a4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x29f7a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29f7a8:
    // 0x29f7a8: 0xe4620000  swc1        $f2, 0x0($v1)
    ctx->pc = 0x29f7a8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_29f7ac:
    // 0x29f7ac: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x29f7acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_29f7b0:
    // 0x29f7b0: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x29f7b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_29f7b4:
    // 0x29f7b4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x29f7b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_29f7b8:
    // 0x29f7b8: 0x0  nop
    ctx->pc = 0x29f7b8u;
    // NOP
label_29f7bc:
    // 0x29f7bc: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x29f7bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
label_29f7c0:
    // 0x29f7c0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x29f7c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_29f7c4:
    // 0x29f7c4: 0x0  nop
    ctx->pc = 0x29f7c4u;
    // NOP
label_29f7c8:
    // 0x29f7c8: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x29f7c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
label_29f7cc:
    // 0x29f7cc: 0xc7a100e0  lwc1        $f1, 0xE0($sp)
    ctx->pc = 0x29f7ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_29f7d0:
    // 0x29f7d0: 0xc7a000f0  lwc1        $f0, 0xF0($sp)
    ctx->pc = 0x29f7d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29f7d4:
    // 0x29f7d4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x29f7d4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_29f7d8:
    // 0x29f7d8: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x29f7d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_29f7dc:
    // 0x29f7dc: 0xc7a100e4  lwc1        $f1, 0xE4($sp)
    ctx->pc = 0x29f7dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_29f7e0:
    // 0x29f7e0: 0xc7a000f4  lwc1        $f0, 0xF4($sp)
    ctx->pc = 0x29f7e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29f7e4:
    // 0x29f7e4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x29f7e4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_29f7e8:
    // 0x29f7e8: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x29f7e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
label_29f7ec:
    // 0x29f7ec: 0xc7a100e8  lwc1        $f1, 0xE8($sp)
    ctx->pc = 0x29f7ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_29f7f0:
    // 0x29f7f0: 0xc7a000f8  lwc1        $f0, 0xF8($sp)
    ctx->pc = 0x29f7f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29f7f4:
    // 0x29f7f4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x29f7f4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_29f7f8:
    // 0x29f7f8: 0xe7a000e8  swc1        $f0, 0xE8($sp)
    ctx->pc = 0x29f7f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_29f7fc:
    // 0x29f7fc: 0xc05bca4  jal         func_16F290
label_29f800:
    if (ctx->pc == 0x29F800u) {
        ctx->pc = 0x29F804u;
        goto label_29f804;
    }
    ctx->pc = 0x29F7FCu;
    SET_GPR_U32(ctx, 31, 0x29F804u);
    ctx->pc = 0x16F290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F290u, 0x29F7FCu, 0x29F804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F804u;
label_29f804:
    // 0x29f804: 0x3c020024  lui         $v0, 0x24
    ctx->pc = 0x29f804u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
label_29f808:
    // 0x29f808: 0x2442bd40  addiu       $v0, $v0, -0x42C0
    ctx->pc = 0x29f808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950208));
label_29f80c:
    // 0x29f80c: 0xafa200fc  sw          $v0, 0xFC($sp)
    ctx->pc = 0x29f80cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 2));
label_29f810:
    // 0x29f810: 0x8fa300fc  lw          $v1, 0xFC($sp)
    ctx->pc = 0x29f810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
label_29f814:
    // 0x29f814: 0x60f809  jalr        $v1
label_29f818:
    if (ctx->pc == 0x29F818u) {
        ctx->pc = 0x29F81Cu;
        goto label_29f81c;
    }
    ctx->pc = 0x29F814u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x29F81Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29F814u, 0x29F81Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29F81Cu;
label_29f81c:
    // 0x29f81c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x29f81cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29f820:
    // 0x29f820: 0xc0406f0  jal         func_101BC0
label_29f824:
    if (ctx->pc == 0x29F824u) {
        ctx->pc = 0x29F828u;
        goto label_29f828;
    }
    ctx->pc = 0x29F820u;
    SET_GPR_U32(ctx, 31, 0x29F828u);
    ctx->pc = 0x101BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101BC0u, 0x29F820u, 0x29F828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F828u;
label_29f828:
    // 0x29f828: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x29f828u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29f82c:
    // 0x29f82c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x29f82cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29f830:
    // 0x29f830: 0x16c40056  bne         $s6, $a0, . + 4 + (0x56 << 2)
label_29f834:
    if (ctx->pc == 0x29F834u) {
        ctx->pc = 0x29F838u;
        goto label_29f838;
    }
    ctx->pc = 0x29F830u;
    {
        const bool branch_taken_0x29f830 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 4));
        if (branch_taken_0x29f830) {
            ctx->pc = 0x29F98Cu;
            goto label_29f98c;
        }
    }
    ctx->pc = 0x29F838u;
label_29f838:
    // 0x29f838: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x29f838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
label_29f83c:
    // 0x29f83c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x29f83cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_29f840:
    // 0x29f840: 0x10400052  beqz        $v0, . + 4 + (0x52 << 2)
label_29f844:
    if (ctx->pc == 0x29F844u) {
        ctx->pc = 0x29F848u;
        goto label_29f848;
    }
    ctx->pc = 0x29F840u;
    {
        const bool branch_taken_0x29f840 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29f840) {
            ctx->pc = 0x29F98Cu;
            goto label_29f98c;
        }
    }
    ctx->pc = 0x29F848u;
label_29f848:
    // 0x29f848: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x29f848u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29f84c:
    // 0x29f84c: 0x1000001b  b           . + 4 + (0x1B << 2)
label_29f850:
    if (ctx->pc == 0x29F850u) {
        ctx->pc = 0x29F854u;
        goto label_29f854;
    }
    ctx->pc = 0x29F84Cu;
    {
        const bool branch_taken_0x29f84c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29f84c) {
            ctx->pc = 0x29F8BCu;
            goto label_29f8bc;
        }
    }
    ctx->pc = 0x29F854u;
label_29f854:
    // 0x29f854: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x29f854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
label_29f858:
    // 0x29f858: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x29f858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_29f85c:
    // 0x29f85c: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x29f85cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_29f860:
    // 0x29f860: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x29f860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_29f864:
    // 0x29f864: 0x10620022  beq         $v1, $v0, . + 4 + (0x22 << 2)
label_29f868:
    if (ctx->pc == 0x29F868u) {
        ctx->pc = 0x29F86Cu;
        goto label_29f86c;
    }
    ctx->pc = 0x29F864u;
    {
        const bool branch_taken_0x29f864 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x29f864) {
            ctx->pc = 0x29F8F0u;
            goto label_29f8f0;
        }
    }
    ctx->pc = 0x29F86Cu;
label_29f86c:
    // 0x29f86c: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x29f86cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
label_29f870:
    // 0x29f870: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x29f870u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_29f874:
    // 0x29f874: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x29f874u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_29f878:
    // 0x29f878: 0xc085538  jal         func_2154E0
label_29f87c:
    if (ctx->pc == 0x29F87Cu) {
        ctx->pc = 0x29F880u;
        goto label_29f880;
    }
    ctx->pc = 0x29F878u;
    SET_GPR_U32(ctx, 31, 0x29F880u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x29F878u, 0x29F880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F880u;
label_29f880:
    // 0x29f880: 0xafa2012c  sw          $v0, 0x12C($sp)
    ctx->pc = 0x29f880u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 2));
label_29f884:
    // 0x29f884: 0x8fa2012c  lw          $v0, 0x12C($sp)
    ctx->pc = 0x29f884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
label_29f888:
    // 0x29f888: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_29f88c:
    if (ctx->pc == 0x29F88Cu) {
        ctx->pc = 0x29F890u;
        goto label_29f890;
    }
    ctx->pc = 0x29F888u;
    {
        const bool branch_taken_0x29f888 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29f888) {
            ctx->pc = 0x29F8ACu;
            goto label_29f8ac;
        }
    }
    ctx->pc = 0x29F890u;
label_29f890:
    // 0x29f890: 0x8fa4012c  lw          $a0, 0x12C($sp)
    ctx->pc = 0x29f890u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
label_29f894:
    // 0x29f894: 0xc096880  jal         func_25A200
label_29f898:
    if (ctx->pc == 0x29F898u) {
        ctx->pc = 0x29F89Cu;
        goto label_29f89c;
    }
    ctx->pc = 0x29F894u;
    SET_GPR_U32(ctx, 31, 0x29F89Cu);
    ctx->pc = 0x25A200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A200u, 0x29F894u, 0x29F89Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F89Cu;
label_29f89c:
    // 0x29f89c: 0x8fa30130  lw          $v1, 0x130($sp)
    ctx->pc = 0x29f89cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_29f8a0:
    // 0x29f8a0: 0x8c63002c  lw          $v1, 0x2C($v1)
    ctx->pc = 0x29f8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_29f8a4:
    // 0x29f8a4: 0x10430012  beq         $v0, $v1, . + 4 + (0x12 << 2)
label_29f8a8:
    if (ctx->pc == 0x29F8A8u) {
        ctx->pc = 0x29F8ACu;
        goto label_29f8ac;
    }
    ctx->pc = 0x29F8A4u;
    {
        const bool branch_taken_0x29f8a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x29f8a4) {
            ctx->pc = 0x29F8F0u;
            goto label_29f8f0;
        }
    }
    ctx->pc = 0x29F8ACu;
label_29f8ac:
    // 0x29f8ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29f8acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29f8b0:
    // 0x29f8b0: 0x305500ff  andi        $s5, $v0, 0xFF
    ctx->pc = 0x29f8b0u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_29f8b4:
    // 0x29f8b4: 0x1000000e  b           . + 4 + (0xE << 2)
label_29f8b8:
    if (ctx->pc == 0x29F8B8u) {
        ctx->pc = 0x29F8BCu;
        goto label_29f8bc;
    }
    ctx->pc = 0x29F8B4u;
    {
        const bool branch_taken_0x29f8b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29f8b4) {
            ctx->pc = 0x29F8F0u;
            goto label_29f8f0;
        }
    }
    ctx->pc = 0x29F8BCu;
label_29f8bc:
    // 0x29f8bc: 0x8f84bcc4  lw          $a0, -0x433C($gp)
    ctx->pc = 0x29f8bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
label_29f8c0:
    // 0x29f8c0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x29f8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_29f8c4:
    // 0x29f8c4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_29f8c8:
    if (ctx->pc == 0x29F8C8u) {
        ctx->pc = 0x29F8CCu;
        goto label_29f8cc;
    }
    ctx->pc = 0x29F8C4u;
    {
        const bool branch_taken_0x29f8c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29f8c4) {
            ctx->pc = 0x29F8F0u;
            goto label_29f8f0;
        }
    }
    ctx->pc = 0x29F8CCu;
label_29f8cc:
    // 0x29f8cc: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x29f8ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_29f8d0:
    // 0x29f8d0: 0xc104d24  jal         func_413490
label_29f8d4:
    if (ctx->pc == 0x29F8D4u) {
        ctx->pc = 0x29F8D8u;
        goto label_29f8d8;
    }
    ctx->pc = 0x29F8D0u;
    SET_GPR_U32(ctx, 31, 0x29F8D8u);
    ctx->pc = 0x413490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413490u, 0x29F8D0u, 0x29F8D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F8D8u;
label_29f8d8:
    // 0x29f8d8: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x29f8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
label_29f8dc:
    // 0x29f8dc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x29f8dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_29f8e0:
    // 0x29f8e0: 0x0  nop
    ctx->pc = 0x29f8e0u;
    // NOP
label_29f8e4:
    // 0x29f8e4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x29f8e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_29f8e8:
    // 0x29f8e8: 0x4501ffda  bc1t        . + 4 + (-0x26 << 2)
label_29f8ec:
    if (ctx->pc == 0x29F8ECu) {
        ctx->pc = 0x29F8F0u;
        goto label_29f8f0;
    }
    ctx->pc = 0x29F8E8u;
    {
        const bool branch_taken_0x29f8e8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29f8e8) {
            ctx->pc = 0x29F854u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29f854;
        }
    }
    ctx->pc = 0x29F8F0u;
label_29f8f0:
    // 0x29f8f0: 0x12a00012  beqz        $s5, . + 4 + (0x12 << 2)
label_29f8f4:
    if (ctx->pc == 0x29F8F4u) {
        ctx->pc = 0x29F8F8u;
        goto label_29f8f8;
    }
    ctx->pc = 0x29F8F0u;
    {
        const bool branch_taken_0x29f8f0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x29f8f0) {
            ctx->pc = 0x29F93Cu;
            goto label_29f93c;
        }
    }
    ctx->pc = 0x29F8F8u;
label_29f8f8:
    // 0x29f8f8: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x29f8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_29f8fc:
    // 0x29f8fc: 0x9042019d  lbu         $v0, 0x19D($v0)
    ctx->pc = 0x29f8fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 413)));
label_29f900:
    // 0x29f900: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_29f904:
    if (ctx->pc == 0x29F904u) {
        ctx->pc = 0x29F908u;
        goto label_29f908;
    }
    ctx->pc = 0x29F900u;
    {
        const bool branch_taken_0x29f900 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29f900) {
            ctx->pc = 0x29F93Cu;
            goto label_29f93c;
        }
    }
    ctx->pc = 0x29F908u;
label_29f908:
    // 0x29f908: 0x8fa30130  lw          $v1, 0x130($sp)
    ctx->pc = 0x29f908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_29f90c:
    // 0x29f90c: 0xa060019d  sb          $zero, 0x19D($v1)
    ctx->pc = 0x29f90cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 413), (uint8_t)GPR_U32(ctx, 0));
label_29f910:
    // 0x29f910: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x29f910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_29f914:
    // 0x29f914: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x29f914u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_29f918:
    // 0x29f918: 0xc121d18  jal         func_487460
label_29f91c:
    if (ctx->pc == 0x29F91Cu) {
        ctx->pc = 0x29F920u;
        goto label_29f920;
    }
    ctx->pc = 0x29F918u;
    SET_GPR_U32(ctx, 31, 0x29F920u);
    ctx->pc = 0x487460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x487460u, 0x29F918u, 0x29F920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F920u;
label_29f920:
    // 0x29f920: 0x8f84bb84  lw          $a0, -0x447C($gp)
    ctx->pc = 0x29f920u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949764)));
label_29f924:
    // 0x29f924: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x29f924u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29f928:
    // 0x29f928: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x29f928u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29f92c:
    // 0x29f92c: 0xc08a758  jal         func_229D60
label_29f930:
    if (ctx->pc == 0x29F930u) {
        ctx->pc = 0x29F934u;
        goto label_29f934;
    }
    ctx->pc = 0x29F92Cu;
    SET_GPR_U32(ctx, 31, 0x29F934u);
    ctx->pc = 0x229D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229D60u, 0x29F92Cu, 0x29F934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F934u;
label_29f934:
    // 0x29f934: 0x10000048  b           . + 4 + (0x48 << 2)
label_29f938:
    if (ctx->pc == 0x29F938u) {
        ctx->pc = 0x29F93Cu;
        goto label_29f93c;
    }
    ctx->pc = 0x29F934u;
    {
        const bool branch_taken_0x29f934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29f934) {
            ctx->pc = 0x29FA58u;
            goto label_29fa58;
        }
    }
    ctx->pc = 0x29F93Cu;
label_29f93c:
    // 0x29f93c: 0x16a00046  bnez        $s5, . + 4 + (0x46 << 2)
label_29f940:
    if (ctx->pc == 0x29F940u) {
        ctx->pc = 0x29F944u;
        goto label_29f944;
    }
    ctx->pc = 0x29F93Cu;
    {
        const bool branch_taken_0x29f93c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x29f93c) {
            ctx->pc = 0x29FA58u;
            goto label_29fa58;
        }
    }
    ctx->pc = 0x29F944u;
label_29f944:
    // 0x29f944: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x29f944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_29f948:
    // 0x29f948: 0x9044019d  lbu         $a0, 0x19D($v0)
    ctx->pc = 0x29f948u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 413)));
label_29f94c:
    // 0x29f94c: 0x14800042  bnez        $a0, . + 4 + (0x42 << 2)
label_29f950:
    if (ctx->pc == 0x29F950u) {
        ctx->pc = 0x29F954u;
        goto label_29f954;
    }
    ctx->pc = 0x29F94Cu;
    {
        const bool branch_taken_0x29f94c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x29f94c) {
            ctx->pc = 0x29FA58u;
            goto label_29fa58;
        }
    }
    ctx->pc = 0x29F954u;
label_29f954:
    // 0x29f954: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29f954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29f958:
    // 0x29f958: 0x8fa30130  lw          $v1, 0x130($sp)
    ctx->pc = 0x29f958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_29f95c:
    // 0x29f95c: 0xa062019d  sb          $v0, 0x19D($v1)
    ctx->pc = 0x29f95cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 413), (uint8_t)GPR_U32(ctx, 2));
label_29f960:
    // 0x29f960: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x29f960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_29f964:
    // 0x29f964: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x29f964u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_29f968:
    // 0x29f968: 0xc121d18  jal         func_487460
label_29f96c:
    if (ctx->pc == 0x29F96Cu) {
        ctx->pc = 0x29F970u;
        goto label_29f970;
    }
    ctx->pc = 0x29F968u;
    SET_GPR_U32(ctx, 31, 0x29F970u);
    ctx->pc = 0x487460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x487460u, 0x29F968u, 0x29F970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F970u;
label_29f970:
    // 0x29f970: 0x8f84bb84  lw          $a0, -0x447C($gp)
    ctx->pc = 0x29f970u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949764)));
label_29f974:
    // 0x29f974: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x29f974u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29f978:
    // 0x29f978: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x29f978u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29f97c:
    // 0x29f97c: 0xc08a758  jal         func_229D60
label_29f980:
    if (ctx->pc == 0x29F980u) {
        ctx->pc = 0x29F984u;
        goto label_29f984;
    }
    ctx->pc = 0x29F97Cu;
    SET_GPR_U32(ctx, 31, 0x29F984u);
    ctx->pc = 0x229D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229D60u, 0x29F97Cu, 0x29F984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F984u;
label_29f984:
    // 0x29f984: 0x10000034  b           . + 4 + (0x34 << 2)
label_29f988:
    if (ctx->pc == 0x29F988u) {
        ctx->pc = 0x29F98Cu;
        goto label_29f98c;
    }
    ctx->pc = 0x29F984u;
    {
        const bool branch_taken_0x29f984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29f984) {
            ctx->pc = 0x29FA58u;
            goto label_29fa58;
        }
    }
    ctx->pc = 0x29F98Cu;
label_29f98c:
    // 0x29f98c: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x29f98cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_29f990:
    // 0x29f990: 0xc104d24  jal         func_413490
label_29f994:
    if (ctx->pc == 0x29F994u) {
        ctx->pc = 0x29F998u;
        goto label_29f998;
    }
    ctx->pc = 0x29F990u;
    SET_GPR_U32(ctx, 31, 0x29F998u);
    ctx->pc = 0x413490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413490u, 0x29F990u, 0x29F998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F998u;
label_29f998:
    // 0x29f998: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x29f998u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
label_29f99c:
    // 0x29f99c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x29f99cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_29f9a0:
    // 0x29f9a0: 0x0  nop
    ctx->pc = 0x29f9a0u;
    // NOP
label_29f9a4:
    // 0x29f9a4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x29f9a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_29f9a8:
    // 0x29f9a8: 0x45000019  bc1f        . + 4 + (0x19 << 2)
label_29f9ac:
    if (ctx->pc == 0x29F9ACu) {
        ctx->pc = 0x29F9B0u;
        goto label_29f9b0;
    }
    ctx->pc = 0x29F9A8u;
    {
        const bool branch_taken_0x29f9a8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29f9a8) {
            ctx->pc = 0x29FA10u;
            goto label_29fa10;
        }
    }
    ctx->pc = 0x29F9B0u;
label_29f9b0:
    // 0x29f9b0: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x29f9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_29f9b4:
    // 0x29f9b4: 0x12c20016  beq         $s6, $v0, . + 4 + (0x16 << 2)
label_29f9b8:
    if (ctx->pc == 0x29F9B8u) {
        ctx->pc = 0x29F9BCu;
        goto label_29f9bc;
    }
    ctx->pc = 0x29F9B4u;
    {
        const bool branch_taken_0x29f9b4 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 2));
        if (branch_taken_0x29f9b4) {
            ctx->pc = 0x29FA10u;
            goto label_29fa10;
        }
    }
    ctx->pc = 0x29F9BCu;
label_29f9bc:
    // 0x29f9bc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x29f9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_29f9c0:
    // 0x29f9c0: 0x12c30013  beq         $s6, $v1, . + 4 + (0x13 << 2)
label_29f9c4:
    if (ctx->pc == 0x29F9C4u) {
        ctx->pc = 0x29F9C8u;
        goto label_29f9c8;
    }
    ctx->pc = 0x29F9C0u;
    {
        const bool branch_taken_0x29f9c0 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 3));
        if (branch_taken_0x29f9c0) {
            ctx->pc = 0x29FA10u;
            goto label_29fa10;
        }
    }
    ctx->pc = 0x29F9C8u;
label_29f9c8:
    // 0x29f9c8: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x29f9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_29f9cc:
    // 0x29f9cc: 0x9042019d  lbu         $v0, 0x19D($v0)
    ctx->pc = 0x29f9ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 413)));
label_29f9d0:
    // 0x29f9d0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x29f9d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_29f9d4:
    // 0x29f9d4: 0x10600020  beqz        $v1, . + 4 + (0x20 << 2)
label_29f9d8:
    if (ctx->pc == 0x29F9D8u) {
        ctx->pc = 0x29F9DCu;
        goto label_29f9dc;
    }
    ctx->pc = 0x29F9D4u;
    {
        const bool branch_taken_0x29f9d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29f9d4) {
            ctx->pc = 0x29FA58u;
            goto label_29fa58;
        }
    }
    ctx->pc = 0x29F9DCu;
label_29f9dc:
    // 0x29f9dc: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x29f9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_29f9e0:
    // 0x29f9e0: 0xa040019d  sb          $zero, 0x19D($v0)
    ctx->pc = 0x29f9e0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 413), (uint8_t)GPR_U32(ctx, 0));
label_29f9e4:
    // 0x29f9e4: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x29f9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_29f9e8:
    // 0x29f9e8: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x29f9e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_29f9ec:
    // 0x29f9ec: 0xc121d18  jal         func_487460
label_29f9f0:
    if (ctx->pc == 0x29F9F0u) {
        ctx->pc = 0x29F9F4u;
        goto label_29f9f4;
    }
    ctx->pc = 0x29F9ECu;
    SET_GPR_U32(ctx, 31, 0x29F9F4u);
    ctx->pc = 0x487460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x487460u, 0x29F9ECu, 0x29F9F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F9F4u;
label_29f9f4:
    // 0x29f9f4: 0x8f84bb84  lw          $a0, -0x447C($gp)
    ctx->pc = 0x29f9f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949764)));
label_29f9f8:
    // 0x29f9f8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x29f9f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29f9fc:
    // 0x29f9fc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x29f9fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29fa00:
    // 0x29fa00: 0xc08a758  jal         func_229D60
label_29fa04:
    if (ctx->pc == 0x29FA04u) {
        ctx->pc = 0x29FA08u;
        goto label_29fa08;
    }
    ctx->pc = 0x29FA00u;
    SET_GPR_U32(ctx, 31, 0x29FA08u);
    ctx->pc = 0x229D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229D60u, 0x29FA00u, 0x29FA08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FA08u;
label_29fa08:
    // 0x29fa08: 0x10000013  b           . + 4 + (0x13 << 2)
label_29fa0c:
    if (ctx->pc == 0x29FA0Cu) {
        ctx->pc = 0x29FA10u;
        goto label_29fa10;
    }
    ctx->pc = 0x29FA08u;
    {
        const bool branch_taken_0x29fa08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29fa08) {
            ctx->pc = 0x29FA58u;
            goto label_29fa58;
        }
    }
    ctx->pc = 0x29FA10u;
label_29fa10:
    // 0x29fa10: 0x8fa30130  lw          $v1, 0x130($sp)
    ctx->pc = 0x29fa10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_29fa14:
    // 0x29fa14: 0x9062019d  lbu         $v0, 0x19D($v1)
    ctx->pc = 0x29fa14u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 413)));
label_29fa18:
    // 0x29fa18: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x29fa18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_29fa1c:
    // 0x29fa1c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29fa1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29fa20:
    // 0x29fa20: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
label_29fa24:
    if (ctx->pc == 0x29FA24u) {
        ctx->pc = 0x29FA28u;
        goto label_29fa28;
    }
    ctx->pc = 0x29FA20u;
    {
        const bool branch_taken_0x29fa20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x29fa20) {
            ctx->pc = 0x29FA58u;
            goto label_29fa58;
        }
    }
    ctx->pc = 0x29FA28u;
label_29fa28:
    // 0x29fa28: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x29fa28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29fa2c:
    // 0x29fa2c: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x29fa2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_29fa30:
    // 0x29fa30: 0xa043019d  sb          $v1, 0x19D($v0)
    ctx->pc = 0x29fa30u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 413), (uint8_t)GPR_U32(ctx, 3));
label_29fa34:
    // 0x29fa34: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x29fa34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_29fa38:
    // 0x29fa38: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x29fa38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_29fa3c:
    // 0x29fa3c: 0xc121d18  jal         func_487460
label_29fa40:
    if (ctx->pc == 0x29FA40u) {
        ctx->pc = 0x29FA44u;
        goto label_29fa44;
    }
    ctx->pc = 0x29FA3Cu;
    SET_GPR_U32(ctx, 31, 0x29FA44u);
    ctx->pc = 0x487460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x487460u, 0x29FA3Cu, 0x29FA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FA44u;
label_29fa44:
    // 0x29fa44: 0x8f84bb84  lw          $a0, -0x447C($gp)
    ctx->pc = 0x29fa44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949764)));
label_29fa48:
    // 0x29fa48: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x29fa48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29fa4c:
    // 0x29fa4c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x29fa4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29fa50:
    // 0x29fa50: 0xc08a758  jal         func_229D60
label_29fa54:
    if (ctx->pc == 0x29FA54u) {
        ctx->pc = 0x29FA58u;
        goto label_29fa58;
    }
    ctx->pc = 0x29FA50u;
    SET_GPR_U32(ctx, 31, 0x29FA58u);
    ctx->pc = 0x229D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229D60u, 0x29FA50u, 0x29FA58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FA58u;
label_29fa58:
    // 0x29fa58: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x29fa58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_29fa5c:
    // 0x29fa5c: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x29fa5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_29fa60:
    // 0x29fa60: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x29fa60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_29fa64:
    // 0x29fa64: 0xc085538  jal         func_2154E0
label_29fa68:
    if (ctx->pc == 0x29FA68u) {
        ctx->pc = 0x29FA6Cu;
        goto label_29fa6c;
    }
    ctx->pc = 0x29FA64u;
    SET_GPR_U32(ctx, 31, 0x29FA6Cu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x29FA64u, 0x29FA6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FA6Cu;
label_29fa6c:
    // 0x29fa6c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x29fa6cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29fa70:
    // 0x29fa70: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29fa70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_29fa74:
    // 0x29fa74: 0xc096950  jal         func_25A540
label_29fa78:
    if (ctx->pc == 0x29FA78u) {
        ctx->pc = 0x29FA7Cu;
        goto label_29fa7c;
    }
    ctx->pc = 0x29FA74u;
    SET_GPR_U32(ctx, 31, 0x29FA7Cu);
    ctx->pc = 0x25A540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A540u, 0x29FA74u, 0x29FA7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FA7Cu;
label_29fa7c:
    // 0x29fa7c: 0xafa20128  sw          $v0, 0x128($sp)
    ctx->pc = 0x29fa7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 2));
label_29fa80:
    // 0x29fa80: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29fa80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_29fa84:
    // 0x29fa84: 0xc096ad0  jal         func_25AB40
label_29fa88:
    if (ctx->pc == 0x29FA88u) {
        ctx->pc = 0x29FA8Cu;
        goto label_29fa8c;
    }
    ctx->pc = 0x29FA84u;
    SET_GPR_U32(ctx, 31, 0x29FA8Cu);
    ctx->pc = 0x25AB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AB40u, 0x29FA84u, 0x29FA8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FA8Cu;
label_29fa8c:
    // 0x29fa8c: 0x8fa40130  lw          $a0, 0x130($sp)
    ctx->pc = 0x29fa8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_29fa90:
    // 0x29fa90: 0x8c850054  lw          $a1, 0x54($a0)
    ctx->pc = 0x29fa90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
label_29fa94:
    // 0x29fa94: 0x1045000d  beq         $v0, $a1, . + 4 + (0xD << 2)
label_29fa98:
    if (ctx->pc == 0x29FA98u) {
        ctx->pc = 0x29FA9Cu;
        goto label_29fa9c;
    }
    ctx->pc = 0x29FA94u;
    {
        const bool branch_taken_0x29fa94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x29fa94) {
            ctx->pc = 0x29FACCu;
            goto label_29facc;
        }
    }
    ctx->pc = 0x29FA9Cu;
label_29fa9c:
    // 0x29fa9c: 0x8fa40130  lw          $a0, 0x130($sp)
    ctx->pc = 0x29fa9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_29faa0:
    // 0x29faa0: 0xc0a8388  jal         func_2A0E20
label_29faa4:
    if (ctx->pc == 0x29FAA4u) {
        ctx->pc = 0x29FAA8u;
        goto label_29faa8;
    }
    ctx->pc = 0x29FAA0u;
    SET_GPR_U32(ctx, 31, 0x29FAA8u);
    ctx->pc = 0x2A0E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0E20u, 0x29FAA0u, 0x29FAA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FAA8u;
label_29faa8:
    // 0x29faa8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29faa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_29faac:
    // 0x29faac: 0xc096ad0  jal         func_25AB40
label_29fab0:
    if (ctx->pc == 0x29FAB0u) {
        ctx->pc = 0x29FAB4u;
        goto label_29fab4;
    }
    ctx->pc = 0x29FAACu;
    SET_GPR_U32(ctx, 31, 0x29FAB4u);
    ctx->pc = 0x25AB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AB40u, 0x29FAACu, 0x29FAB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FAB4u;
label_29fab4:
    // 0x29fab4: 0x8fa40130  lw          $a0, 0x130($sp)
    ctx->pc = 0x29fab4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_29fab8:
    // 0x29fab8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x29fab8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29fabc:
    // 0x29fabc: 0xc0a82d4  jal         func_2A0B50
label_29fac0:
    if (ctx->pc == 0x29FAC0u) {
        ctx->pc = 0x29FAC4u;
        goto label_29fac4;
    }
    ctx->pc = 0x29FABCu;
    SET_GPR_U32(ctx, 31, 0x29FAC4u);
    ctx->pc = 0x2A0B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0B50u, 0x29FABCu, 0x29FAC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FAC4u;
label_29fac4:
    // 0x29fac4: 0x10000029  b           . + 4 + (0x29 << 2)
label_29fac8:
    if (ctx->pc == 0x29FAC8u) {
        ctx->pc = 0x29FACCu;
        goto label_29facc;
    }
    ctx->pc = 0x29FAC4u;
    {
        const bool branch_taken_0x29fac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29fac4) {
            ctx->pc = 0x29FB6Cu;
            goto label_29fb6c;
        }
    }
    ctx->pc = 0x29FACCu;
label_29facc:
    // 0x29facc: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x29faccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_29fad0:
    // 0x29fad0: 0x8c420054  lw          $v0, 0x54($v0)
    ctx->pc = 0x29fad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_29fad4:
    // 0x29fad4: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
label_29fad8:
    if (ctx->pc == 0x29FAD8u) {
        ctx->pc = 0x29FADCu;
        goto label_29fadc;
    }
    ctx->pc = 0x29FAD4u;
    {
        const bool branch_taken_0x29fad4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29fad4) {
            ctx->pc = 0x29FB6Cu;
            goto label_29fb6c;
        }
    }
    ctx->pc = 0x29FADCu;
label_29fadc:
    // 0x29fadc: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x29fadcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_29fae0:
    // 0x29fae0: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x29fae0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_29fae4:
    // 0x29fae4: 0x2405002e  addiu       $a1, $zero, 0x2E
    ctx->pc = 0x29fae4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
label_29fae8:
    // 0x29fae8: 0xc121e9c  jal         func_487A70
label_29faec:
    if (ctx->pc == 0x29FAECu) {
        ctx->pc = 0x29FAF0u;
        goto label_29faf0;
    }
    ctx->pc = 0x29FAE8u;
    SET_GPR_U32(ctx, 31, 0x29FAF0u);
    ctx->pc = 0x487A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x487A70u, 0x29FAE8u, 0x29FAF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FAF0u;
label_29faf0:
    // 0x29faf0: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x29faf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
label_29faf4:
    // 0x29faf4: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x29faf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_29faf8:
    // 0x29faf8: 0x8c440054  lw          $a0, 0x54($v0)
    ctx->pc = 0x29faf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_29fafc:
    // 0x29fafc: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x29fafcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_29fb00:
    // 0x29fb00: 0xc085538  jal         func_2154E0
label_29fb04:
    if (ctx->pc == 0x29FB04u) {
        ctx->pc = 0x29FB08u;
        goto label_29fb08;
    }
    ctx->pc = 0x29FB00u;
    SET_GPR_U32(ctx, 31, 0x29FB08u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x29FB00u, 0x29FB08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FB08u;
label_29fb08:
    // 0x29fb08: 0xafa20124  sw          $v0, 0x124($sp)
    ctx->pc = 0x29fb08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 2));
label_29fb0c:
    // 0x29fb0c: 0x8fa40124  lw          $a0, 0x124($sp)
    ctx->pc = 0x29fb0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
label_29fb10:
    // 0x29fb10: 0xc091018  jal         func_244060
label_29fb14:
    if (ctx->pc == 0x29FB14u) {
        ctx->pc = 0x29FB18u;
        goto label_29fb18;
    }
    ctx->pc = 0x29FB10u;
    SET_GPR_U32(ctx, 31, 0x29FB18u);
    ctx->pc = 0x244060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244060u, 0x29FB10u, 0x29FB18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FB18u;
label_29fb18:
    // 0x29fb18: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x29fb18u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29fb1c:
    // 0x29fb1c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29fb1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_29fb20:
    // 0x29fb20: 0xc106638  jal         func_4198E0
label_29fb24:
    if (ctx->pc == 0x29FB24u) {
        ctx->pc = 0x29FB28u;
        goto label_29fb28;
    }
    ctx->pc = 0x29FB20u;
    SET_GPR_U32(ctx, 31, 0x29FB28u);
    ctx->pc = 0x4198E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4198E0u, 0x29FB20u, 0x29FB28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FB28u;
label_29fb28:
    // 0x29fb28: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x29fb28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_29fb2c:
    // 0x29fb2c: 0xc106784  jal         func_419E10
label_29fb30:
    if (ctx->pc == 0x29FB30u) {
        ctx->pc = 0x29FB34u;
        goto label_29fb34;
    }
    ctx->pc = 0x29FB2Cu;
    SET_GPR_U32(ctx, 31, 0x29FB34u);
    ctx->pc = 0x419E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419E10u, 0x29FB2Cu, 0x29FB34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FB34u;
label_29fb34:
    // 0x29fb34: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29fb34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_29fb38:
    // 0x29fb38: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x29fb38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29fb3c:
    // 0x29fb3c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x29fb3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29fb40:
    // 0x29fb40: 0xc1065f8  jal         func_4197E0
label_29fb44:
    if (ctx->pc == 0x29FB44u) {
        ctx->pc = 0x29FB48u;
        goto label_29fb48;
    }
    ctx->pc = 0x29FB40u;
    SET_GPR_U32(ctx, 31, 0x29FB48u);
    ctx->pc = 0x4197E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4197E0u, 0x29FB40u, 0x29FB48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FB48u;
label_29fb48:
    // 0x29fb48: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x29fb48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
label_29fb4c:
    // 0x29fb4c: 0x219c0  sll         $v1, $v0, 7
    ctx->pc = 0x29fb4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
label_29fb50:
    // 0x29fb50: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x29fb50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_29fb54:
    // 0x29fb54: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29fb54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_29fb58:
    // 0x29fb58: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29fb58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_29fb5c:
    // 0x29fb5c: 0x24450060  addiu       $a1, $v0, 0x60
    ctx->pc = 0x29fb5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
label_29fb60:
    // 0x29fb60: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x29fb60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29fb64:
    // 0x29fb64: 0xc1065f8  jal         func_4197E0
label_29fb68:
    if (ctx->pc == 0x29FB68u) {
        ctx->pc = 0x29FB6Cu;
        goto label_29fb6c;
    }
    ctx->pc = 0x29FB64u;
    SET_GPR_U32(ctx, 31, 0x29FB6Cu);
    ctx->pc = 0x4197E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4197E0u, 0x29FB64u, 0x29FB6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FB6Cu;
label_29fb6c:
    // 0x29fb6c: 0x3c03004f  lui         $v1, 0x4F
    ctx->pc = 0x29fb6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)79 << 16));
label_29fb70:
    // 0x29fb70: 0x2463d9b8  addiu       $v1, $v1, -0x2648
    ctx->pc = 0x29fb70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957496));
label_29fb74:
    // 0x29fb74: 0x27a200d0  addiu       $v0, $sp, 0xD0
    ctx->pc = 0x29fb74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_29fb78:
    // 0x29fb78: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x29fb78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_29fb7c:
    // 0x29fb7c: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x29fb7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_29fb80:
    // 0x29fb80: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x29fb80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29fb84:
    // 0x29fb84: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x29fb84u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_29fb88:
    // 0x29fb88: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x29fb88u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_29fb8c:
    // 0x29fb8c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x29fb8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_29fb90:
    // 0x29fb90: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x29fb90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29fb94:
    // 0x29fb94: 0x10000070  b           . + 4 + (0x70 << 2)
label_29fb98:
    if (ctx->pc == 0x29FB98u) {
        ctx->pc = 0x29FB9Cu;
        goto label_29fb9c;
    }
    ctx->pc = 0x29FB94u;
    {
        const bool branch_taken_0x29fb94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29fb94) {
            ctx->pc = 0x29FD58u;
            goto label_29fd58;
        }
    }
    ctx->pc = 0x29FB9Cu;
label_29fb9c:
    // 0x29fb9c: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x29fb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_29fba0:
    // 0x29fba0: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x29fba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_29fba4:
    // 0x29fba4: 0x8c4200d0  lw          $v0, 0xD0($v0)
    ctx->pc = 0x29fba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 208)));
label_29fba8:
    // 0x29fba8: 0xafa20120  sw          $v0, 0x120($sp)
    ctx->pc = 0x29fba8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 2));
label_29fbac:
    // 0x29fbac: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x29fbacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_29fbb0:
    // 0x29fbb0: 0x16220008  bne         $s1, $v0, . + 4 + (0x8 << 2)
label_29fbb4:
    if (ctx->pc == 0x29FBB4u) {
        ctx->pc = 0x29FBB8u;
        goto label_29fbb8;
    }
    ctx->pc = 0x29FBB0u;
    {
        const bool branch_taken_0x29fbb0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x29fbb0) {
            ctx->pc = 0x29FBD4u;
            goto label_29fbd4;
        }
    }
    ctx->pc = 0x29FBB8u;
label_29fbb8:
    // 0x29fbb8: 0x1110c0  sll         $v0, $s1, 3
    ctx->pc = 0x29fbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
label_29fbbc:
    // 0x29fbbc: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x29fbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_29fbc0:
    // 0x29fbc0: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x29fbc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_29fbc4:
    // 0x29fbc4: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x29fbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_29fbc8:
    // 0x29fbc8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29fbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_29fbcc:
    // 0x29fbcc: 0x8c420290  lw          $v0, 0x290($v0)
    ctx->pc = 0x29fbccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 656)));
label_29fbd0:
    // 0x29fbd0: 0xafa20120  sw          $v0, 0x120($sp)
    ctx->pc = 0x29fbd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 2));
label_29fbd4:
    // 0x29fbd4: 0x1110c0  sll         $v0, $s1, 3
    ctx->pc = 0x29fbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
label_29fbd8:
    // 0x29fbd8: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x29fbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_29fbdc:
    // 0x29fbdc: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x29fbdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_29fbe0:
    // 0x29fbe0: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x29fbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_29fbe4:
    // 0x29fbe4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29fbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_29fbe8:
    // 0x29fbe8: 0x8c4201c0  lw          $v0, 0x1C0($v0)
    ctx->pc = 0x29fbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 448)));
label_29fbec:
    // 0x29fbec: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x29fbecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_29fbf0:
    // 0x29fbf0: 0x10200058  beqz        $at, . + 4 + (0x58 << 2)
label_29fbf4:
    if (ctx->pc == 0x29FBF4u) {
        ctx->pc = 0x29FBF8u;
        goto label_29fbf8;
    }
    ctx->pc = 0x29FBF0u;
    {
        const bool branch_taken_0x29fbf0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x29fbf0) {
            ctx->pc = 0x29FD54u;
            goto label_29fd54;
        }
    }
    ctx->pc = 0x29FBF8u;
label_29fbf8:
    // 0x29fbf8: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x29fbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_29fbfc:
    // 0x29fbfc: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x29fbfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_29fc00:
    // 0x29fc00: 0x8fa50120  lw          $a1, 0x120($sp)
    ctx->pc = 0x29fc00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_29fc04:
    // 0x29fc04: 0xc121e9c  jal         func_487A70
label_29fc08:
    if (ctx->pc == 0x29FC08u) {
        ctx->pc = 0x29FC0Cu;
        goto label_29fc0c;
    }
    ctx->pc = 0x29FC04u;
    SET_GPR_U32(ctx, 31, 0x29FC0Cu);
    ctx->pc = 0x487A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x487A70u, 0x29FC04u, 0x29FC0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FC0Cu;
label_29fc0c:
    // 0x29fc0c: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x29fc0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
label_29fc10:
    // 0x29fc10: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x29fc10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_29fc14:
    // 0x29fc14: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_29fc18:
    if (ctx->pc == 0x29FC18u) {
        ctx->pc = 0x29FC1Cu;
        goto label_29fc1c;
    }
    ctx->pc = 0x29FC14u;
    {
        const bool branch_taken_0x29fc14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29fc14) {
            ctx->pc = 0x29FC44u;
            goto label_29fc44;
        }
    }
    ctx->pc = 0x29FC1Cu;
label_29fc1c:
    // 0x29fc1c: 0x1110c0  sll         $v0, $s1, 3
    ctx->pc = 0x29fc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
label_29fc20:
    // 0x29fc20: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x29fc20u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_29fc24:
    // 0x29fc24: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x29fc24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_29fc28:
    // 0x29fc28: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x29fc28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_29fc2c:
    // 0x29fc2c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29fc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_29fc30:
    // 0x29fc30: 0x244401c0  addiu       $a0, $v0, 0x1C0
    ctx->pc = 0x29fc30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 448));
label_29fc34:
    // 0x29fc34: 0x8fa50128  lw          $a1, 0x128($sp)
    ctx->pc = 0x29fc34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
label_29fc38:
    // 0x29fc38: 0x8fa600a0  lw          $a2, 0xA0($sp)
    ctx->pc = 0x29fc38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_29fc3c:
    // 0x29fc3c: 0xc0a7a6c  jal         func_29E9B0
label_29fc40:
    if (ctx->pc == 0x29FC40u) {
        ctx->pc = 0x29FC44u;
        goto label_29fc44;
    }
    ctx->pc = 0x29FC3Cu;
    SET_GPR_U32(ctx, 31, 0x29FC44u);
    ctx->pc = 0x29E9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E9B0u, 0x29FC3Cu, 0x29FC44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FC44u;
label_29fc44:
    // 0x29fc44: 0x1110c0  sll         $v0, $s1, 3
    ctx->pc = 0x29fc44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
label_29fc48:
    // 0x29fc48: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x29fc48u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_29fc4c:
    // 0x29fc4c: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x29fc4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_29fc50:
    // 0x29fc50: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x29fc50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_29fc54:
    // 0x29fc54: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29fc54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_29fc58:
    // 0x29fc58: 0x8c4201e8  lw          $v0, 0x1E8($v0)
    ctx->pc = 0x29fc58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 488)));
label_29fc5c:
    // 0x29fc5c: 0x1002003d  beq         $zero, $v0, . + 4 + (0x3D << 2)
label_29fc60:
    if (ctx->pc == 0x29FC60u) {
        ctx->pc = 0x29FC64u;
        goto label_29fc64;
    }
    ctx->pc = 0x29FC5Cu;
    {
        const bool branch_taken_0x29fc5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x29fc5c) {
            ctx->pc = 0x29FD54u;
            goto label_29fd54;
        }
    }
    ctx->pc = 0x29FC64u;
label_29fc64:
    // 0x29fc64: 0x1110c0  sll         $v0, $s1, 3
    ctx->pc = 0x29fc64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
label_29fc68:
    // 0x29fc68: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x29fc68u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_29fc6c:
    // 0x29fc6c: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x29fc6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_29fc70:
    // 0x29fc70: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x29fc70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_29fc74:
    // 0x29fc74: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29fc74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_29fc78:
    // 0x29fc78: 0x8c4401e8  lw          $a0, 0x1E8($v0)
    ctx->pc = 0x29fc78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 488)));
label_29fc7c:
    // 0x29fc7c: 0x27a500c8  addiu       $a1, $sp, 0xC8
    ctx->pc = 0x29fc7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
label_29fc80:
    // 0x29fc80: 0x27a600cc  addiu       $a2, $sp, 0xCC
    ctx->pc = 0x29fc80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 204));
label_29fc84:
    // 0x29fc84: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x29fc84u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29fc88:
    // 0x29fc88: 0xc1233b4  jal         func_48CED0
label_29fc8c:
    if (ctx->pc == 0x29FC8Cu) {
        ctx->pc = 0x29FC90u;
        goto label_29fc90;
    }
    ctx->pc = 0x29FC88u;
    SET_GPR_U32(ctx, 31, 0x29FC90u);
    ctx->pc = 0x48CED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CED0u, 0x29FC88u, 0x29FC90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FC90u;
label_29fc90:
    // 0x29fc90: 0x1110c0  sll         $v0, $s1, 3
    ctx->pc = 0x29fc90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
label_29fc94:
    // 0x29fc94: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x29fc94u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_29fc98:
    // 0x29fc98: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x29fc98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_29fc9c:
    // 0x29fc9c: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x29fc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_29fca0:
    // 0x29fca0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29fca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_29fca4:
    // 0x29fca4: 0x8c4401e8  lw          $a0, 0x1E8($v0)
    ctx->pc = 0x29fca4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 488)));
label_29fca8:
    // 0x29fca8: 0xc1233ac  jal         func_48CEB0
label_29fcac:
    if (ctx->pc == 0x29FCACu) {
        ctx->pc = 0x29FCB0u;
        goto label_29fcb0;
    }
    ctx->pc = 0x29FCA8u;
    SET_GPR_U32(ctx, 31, 0x29FCB0u);
    ctx->pc = 0x48CEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CEB0u, 0x29FCA8u, 0x29FCB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FCB0u;
label_29fcb0:
    // 0x29fcb0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x29fcb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_29fcb4:
    // 0x29fcb4: 0x1443000b  bne         $v0, $v1, . + 4 + (0xB << 2)
label_29fcb8:
    if (ctx->pc == 0x29FCB8u) {
        ctx->pc = 0x29FCBCu;
        goto label_29fcbc;
    }
    ctx->pc = 0x29FCB4u;
    {
        const bool branch_taken_0x29fcb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x29fcb4) {
            ctx->pc = 0x29FCE4u;
            goto label_29fce4;
        }
    }
    ctx->pc = 0x29FCBCu;
label_29fcbc:
    // 0x29fcbc: 0x8fa200cc  lw          $v0, 0xCC($sp)
    ctx->pc = 0x29fcbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
label_29fcc0:
    // 0x29fcc0: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_29fcc4:
    if (ctx->pc == 0x29FCC4u) {
        ctx->pc = 0x29FCC8u;
        goto label_29fcc8;
    }
    ctx->pc = 0x29FCC0u;
    {
        const bool branch_taken_0x29fcc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29fcc0) {
            ctx->pc = 0x29FCE4u;
            goto label_29fce4;
        }
    }
    ctx->pc = 0x29FCC8u;
label_29fcc8:
    // 0x29fcc8: 0x8fa40130  lw          $a0, 0x130($sp)
    ctx->pc = 0x29fcc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_29fccc:
    // 0x29fccc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x29fcccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_29fcd0:
    // 0x29fcd0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x29fcd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29fcd4:
    // 0x29fcd4: 0xc0a8554  jal         func_2A1550
label_29fcd8:
    if (ctx->pc == 0x29FCD8u) {
        ctx->pc = 0x29FCDCu;
        goto label_29fcdc;
    }
    ctx->pc = 0x29FCD4u;
    SET_GPR_U32(ctx, 31, 0x29FCDCu);
    ctx->pc = 0x2A1550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A1550u, 0x29FCD4u, 0x29FCDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FCDCu;
label_29fcdc:
    // 0x29fcdc: 0x1000001d  b           . + 4 + (0x1D << 2)
label_29fce0:
    if (ctx->pc == 0x29FCE0u) {
        ctx->pc = 0x29FCE4u;
        goto label_29fce4;
    }
    ctx->pc = 0x29FCDCu;
    {
        const bool branch_taken_0x29fcdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29fcdc) {
            ctx->pc = 0x29FD54u;
            goto label_29fd54;
        }
    }
    ctx->pc = 0x29FCE4u;
label_29fce4:
    // 0x29fce4: 0x8f83bb70  lw          $v1, -0x4490($gp)
    ctx->pc = 0x29fce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_29fce8:
    // 0x29fce8: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x29fce8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
label_29fcec:
    // 0x29fcec: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x29fcecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_29fcf0:
    // 0x29fcf0: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x29fcf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29fcf4:
    // 0x29fcf4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x29fcf4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_29fcf8:
    // 0x29fcf8: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x29fcf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_29fcfc:
    // 0x29fcfc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29fcfcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_29fd00:
    // 0x29fd00: 0x0  nop
    ctx->pc = 0x29fd00u;
    // NOP
label_29fd04:
    // 0x29fd04: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x29fd04u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_29fd08:
    // 0x29fd08: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_29fd0c:
    if (ctx->pc == 0x29FD0Cu) {
        ctx->pc = 0x29FD10u;
        goto label_29fd10;
    }
    ctx->pc = 0x29FD08u;
    {
        const bool branch_taken_0x29fd08 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29fd08) {
            ctx->pc = 0x29FD20u;
            goto label_29fd20;
        }
    }
    ctx->pc = 0x29FD10u;
label_29fd10:
    // 0x29fd10: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29fd10u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_29fd14:
    // 0x29fd14: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x29fd14u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_29fd18:
    // 0x29fd18: 0x10000006  b           . + 4 + (0x6 << 2)
label_29fd1c:
    if (ctx->pc == 0x29FD1Cu) {
        ctx->pc = 0x29FD20u;
        goto label_29fd20;
    }
    ctx->pc = 0x29FD18u;
    {
        const bool branch_taken_0x29fd18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29fd18) {
            ctx->pc = 0x29FD34u;
            goto label_29fd34;
        }
    }
    ctx->pc = 0x29FD20u;
label_29fd20:
    // 0x29fd20: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x29fd20u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_29fd24:
    // 0x29fd24: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29fd24u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_29fd28:
    // 0x29fd28: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x29fd28u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_29fd2c:
    // 0x29fd2c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x29fd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_29fd30:
    // 0x29fd30: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x29fd30u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_29fd34:
    // 0x29fd34: 0x1110c0  sll         $v0, $s1, 3
    ctx->pc = 0x29fd34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
label_29fd38:
    // 0x29fd38: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x29fd38u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_29fd3c:
    // 0x29fd3c: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x29fd3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_29fd40:
    // 0x29fd40: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x29fd40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_29fd44:
    // 0x29fd44: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29fd44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_29fd48:
    // 0x29fd48: 0x8c4401e8  lw          $a0, 0x1E8($v0)
    ctx->pc = 0x29fd48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 488)));
label_29fd4c:
    // 0x29fd4c: 0xc123260  jal         func_48C980
label_29fd50:
    if (ctx->pc == 0x29FD50u) {
        ctx->pc = 0x29FD54u;
        goto label_29fd54;
    }
    ctx->pc = 0x29FD4Cu;
    SET_GPR_U32(ctx, 31, 0x29FD54u);
    ctx->pc = 0x48C980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48C980u, 0x29FD4Cu, 0x29FD54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FD54u;
label_29fd54:
    // 0x29fd54: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x29fd54u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_29fd58:
    // 0x29fd58: 0x2a210003  slti        $at, $s1, 0x3
    ctx->pc = 0x29fd58u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
label_29fd5c:
    // 0x29fd5c: 0x1420ff8f  bnez        $at, . + 4 + (-0x71 << 2)
label_29fd60:
    if (ctx->pc == 0x29FD60u) {
        ctx->pc = 0x29FD64u;
        goto label_29fd64;
    }
    ctx->pc = 0x29FD5Cu;
    {
        const bool branch_taken_0x29fd5c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x29fd5c) {
            ctx->pc = 0x29FB9Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29fb9c;
        }
    }
    ctx->pc = 0x29FD64u;
label_29fd64:
    // 0x29fd64: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x29fd64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_29fd68:
    // 0x29fd68: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x29fd68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_29fd6c:
    // 0x29fd6c: 0xc121d18  jal         func_487460
label_29fd70:
    if (ctx->pc == 0x29FD70u) {
        ctx->pc = 0x29FD74u;
        goto label_29fd74;
    }
    ctx->pc = 0x29FD6Cu;
    SET_GPR_U32(ctx, 31, 0x29FD74u);
    ctx->pc = 0x487460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x487460u, 0x29FD6Cu, 0x29FD74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FD74u;
label_29fd74:
    // 0x29fd74: 0x8fa30130  lw          $v1, 0x130($sp)
    ctx->pc = 0x29fd74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_29fd78:
    // 0x29fd78: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x29fd78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29fd7c:
    // 0x29fd7c: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x29fd7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
label_29fd80:
    // 0x29fd80: 0x24a5e320  addiu       $a1, $a1, -0x1CE0
    ctx->pc = 0x29fd80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959904));
label_29fd84:
    // 0x29fd84: 0x8c660194  lw          $a2, 0x194($v1)
    ctx->pc = 0x29fd84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 404)));
label_29fd88:
    // 0x29fd88: 0xc0e2628  jal         func_3898A0
label_29fd8c:
    if (ctx->pc == 0x29FD8Cu) {
        ctx->pc = 0x29FD90u;
        goto label_29fd90;
    }
    ctx->pc = 0x29FD88u;
    SET_GPR_U32(ctx, 31, 0x29FD90u);
    ctx->pc = 0x3898A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3898A0u, 0x29FD88u, 0x29FD90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FD90u;
label_29fd90:
    // 0x29fd90: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x29fd90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_29fd94:
    // 0x29fd94: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x29fd94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_29fd98:
    // 0x29fd98: 0xc0858ac  jal         func_2162B0
label_29fd9c:
    if (ctx->pc == 0x29FD9Cu) {
        ctx->pc = 0x29FDA0u;
        goto label_29fda0;
    }
    ctx->pc = 0x29FD98u;
    SET_GPR_U32(ctx, 31, 0x29FDA0u);
    ctx->pc = 0x2162B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2162B0u, 0x29FD98u, 0x29FDA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FDA0u;
label_29fda0:
    // 0x29fda0: 0xe7a0011c  swc1        $f0, 0x11C($sp)
    ctx->pc = 0x29fda0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
label_29fda4:
    // 0x29fda4: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x29fda4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_29fda8:
    // 0x29fda8: 0x8c440044  lw          $a0, 0x44($v0)
    ctx->pc = 0x29fda8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_29fdac:
    // 0x29fdac: 0xc0c8842  jal         func_322108
label_29fdb0:
    if (ctx->pc == 0x29FDB0u) {
        ctx->pc = 0x29FDB4u;
        goto label_29fdb4;
    }
    ctx->pc = 0x29FDACu;
    SET_GPR_U32(ctx, 31, 0x29FDB4u);
    ctx->pc = 0x322108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322108u, 0x29FDACu, 0x29FDB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FDB4u;
label_29fdb4:
    // 0x29fdb4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_29fdb8:
    if (ctx->pc == 0x29FDB8u) {
        ctx->pc = 0x29FDBCu;
        goto label_29fdbc;
    }
    ctx->pc = 0x29FDB4u;
    {
        const bool branch_taken_0x29fdb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29fdb4) {
            ctx->pc = 0x29FDD0u;
            goto label_29fdd0;
        }
    }
    ctx->pc = 0x29FDBCu;
label_29fdbc:
    // 0x29fdbc: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x29fdbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_29fdc0:
    // 0x29fdc0: 0x8c430194  lw          $v1, 0x194($v0)
    ctx->pc = 0x29fdc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 404)));
label_29fdc4:
    // 0x29fdc4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29fdc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29fdc8:
    // 0x29fdc8: 0x14620112  bne         $v1, $v0, . + 4 + (0x112 << 2)
label_29fdcc:
    if (ctx->pc == 0x29FDCCu) {
        ctx->pc = 0x29FDD0u;
        goto label_29fdd0;
    }
    ctx->pc = 0x29FDC8u;
    {
        const bool branch_taken_0x29fdc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x29fdc8) {
            ctx->pc = 0x2A0214u;
            goto label_2a0214;
        }
    }
    ctx->pc = 0x29FDD0u;
label_29fdd0:
    // 0x29fdd0: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x29fdd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_29fdd4:
    // 0x29fdd4: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x29fdd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_29fdd8:
    // 0x29fdd8: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x29fdd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_29fddc:
    // 0x29fddc: 0xc085538  jal         func_2154E0
label_29fde0:
    if (ctx->pc == 0x29FDE0u) {
        ctx->pc = 0x29FDE4u;
        goto label_29fde4;
    }
    ctx->pc = 0x29FDDCu;
    SET_GPR_U32(ctx, 31, 0x29FDE4u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x29FDDCu, 0x29FDE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FDE4u;
label_29fde4:
    // 0x29fde4: 0xafa20118  sw          $v0, 0x118($sp)
    ctx->pc = 0x29fde4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 2));
label_29fde8:
    // 0x29fde8: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x29fde8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_29fdec:
    // 0x29fdec: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x29fdecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_29fdf0:
    // 0x29fdf0: 0xc09c3c8  jal         func_270F20
label_29fdf4:
    if (ctx->pc == 0x29FDF4u) {
        ctx->pc = 0x29FDF8u;
        goto label_29fdf8;
    }
    ctx->pc = 0x29FDF0u;
    SET_GPR_U32(ctx, 31, 0x29FDF8u);
    ctx->pc = 0x270F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x270F20u, 0x29FDF0u, 0x29FDF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FDF8u;
label_29fdf8:
    // 0x29fdf8: 0x14400106  bnez        $v0, . + 4 + (0x106 << 2)
label_29fdfc:
    if (ctx->pc == 0x29FDFCu) {
        ctx->pc = 0x29FE00u;
        goto label_29fe00;
    }
    ctx->pc = 0x29FDF8u;
    {
        const bool branch_taken_0x29fdf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29fdf8) {
            ctx->pc = 0x2A0214u;
            goto label_2a0214;
        }
    }
    ctx->pc = 0x29FE00u;
label_29fe00:
    // 0x29fe00: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x29fe00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_29fe04:
    // 0x29fe04: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x29fe04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_29fe08:
    // 0x29fe08: 0xc09c3c8  jal         func_270F20
label_29fe0c:
    if (ctx->pc == 0x29FE0Cu) {
        ctx->pc = 0x29FE10u;
        goto label_29fe10;
    }
    ctx->pc = 0x29FE08u;
    SET_GPR_U32(ctx, 31, 0x29FE10u);
    ctx->pc = 0x270F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x270F20u, 0x29FE08u, 0x29FE10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FE10u;
label_29fe10:
    // 0x29fe10: 0x14400100  bnez        $v0, . + 4 + (0x100 << 2)
label_29fe14:
    if (ctx->pc == 0x29FE14u) {
        ctx->pc = 0x29FE18u;
        goto label_29fe18;
    }
    ctx->pc = 0x29FE10u;
    {
        const bool branch_taken_0x29fe10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29fe10) {
            ctx->pc = 0x2A0214u;
            goto label_2a0214;
        }
    }
    ctx->pc = 0x29FE18u;
label_29fe18:
    // 0x29fe18: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x29fe18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_29fe1c:
    // 0x29fe1c: 0x8c430194  lw          $v1, 0x194($v0)
    ctx->pc = 0x29fe1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 404)));
label_29fe20:
    // 0x29fe20: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29fe20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29fe24:
    // 0x29fe24: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
label_29fe28:
    if (ctx->pc == 0x29FE28u) {
        ctx->pc = 0x29FE2Cu;
        goto label_29fe2c;
    }
    ctx->pc = 0x29FE24u;
    {
        const bool branch_taken_0x29fe24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x29fe24) {
            ctx->pc = 0x29FE40u;
            goto label_29fe40;
        }
    }
    ctx->pc = 0x29FE2Cu;
label_29fe2c:
    // 0x29fe2c: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x29fe2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_29fe30:
    // 0x29fe30: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x29fe30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_29fe34:
    // 0x29fe34: 0x8c5e0018  lw          $fp, 0x18($v0)
    ctx->pc = 0x29fe34u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_29fe38:
    // 0x29fe38: 0x10000007  b           . + 4 + (0x7 << 2)
label_29fe3c:
    if (ctx->pc == 0x29FE3Cu) {
        ctx->pc = 0x29FE40u;
        goto label_29fe40;
    }
    ctx->pc = 0x29FE38u;
    {
        const bool branch_taken_0x29fe38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29fe38) {
            ctx->pc = 0x29FE58u;
            goto label_29fe58;
        }
    }
    ctx->pc = 0x29FE40u;
label_29fe40:
    // 0x29fe40: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x29fe40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_29fe44:
    // 0x29fe44: 0x8c440044  lw          $a0, 0x44($v0)
    ctx->pc = 0x29fe44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_29fe48:
    // 0x29fe48: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29fe48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29fe4c:
    // 0x29fe4c: 0xc0c8812  jal         func_322048
label_29fe50:
    if (ctx->pc == 0x29FE50u) {
        ctx->pc = 0x29FE54u;
        goto label_29fe54;
    }
    ctx->pc = 0x29FE4Cu;
    SET_GPR_U32(ctx, 31, 0x29FE54u);
    ctx->pc = 0x322048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322048u, 0x29FE4Cu, 0x29FE54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FE54u;
label_29fe54:
    // 0x29fe54: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x29fe54u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29fe58:
    // 0x29fe58: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x29fe58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_29fe5c:
    // 0x29fe5c: 0xc0c7620  jal         func_31D880
label_29fe60:
    if (ctx->pc == 0x29FE60u) {
        ctx->pc = 0x29FE64u;
        goto label_29fe64;
    }
    ctx->pc = 0x29FE5Cu;
    SET_GPR_U32(ctx, 31, 0x29FE64u);
    ctx->pc = 0x31D880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D880u, 0x29FE5Cu, 0x29FE64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FE64u;
label_29fe64:
    // 0x29fe64: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x29fe64u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29fe68:
    // 0x29fe68: 0xafa30114  sw          $v1, 0x114($sp)
    ctx->pc = 0x29fe68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 276), GPR_U32(ctx, 3));
label_29fe6c:
    // 0x29fe6c: 0x8fa30114  lw          $v1, 0x114($sp)
    ctx->pc = 0x29fe6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 276)));
label_29fe70:
    // 0x29fe70: 0x2c610002  sltiu       $at, $v1, 0x2
    ctx->pc = 0x29fe70u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_29fe74:
    // 0x29fe74: 0x142000e7  bnez        $at, . + 4 + (0xE7 << 2)
label_29fe78:
    if (ctx->pc == 0x29FE78u) {
        ctx->pc = 0x29FE7Cu;
        goto label_29fe7c;
    }
    ctx->pc = 0x29FE74u;
    {
        const bool branch_taken_0x29fe74 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x29fe74) {
            ctx->pc = 0x2A0214u;
            goto label_2a0214;
        }
    }
    ctx->pc = 0x29FE7Cu;
label_29fe7c:
    // 0x29fe7c: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x29fe7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_29fe80:
    // 0x29fe80: 0x90420164  lbu         $v0, 0x164($v0)
    ctx->pc = 0x29fe80u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 356)));
label_29fe84:
    // 0x29fe84: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_29fe88:
    if (ctx->pc == 0x29FE88u) {
        ctx->pc = 0x29FE8Cu;
        goto label_29fe8c;
    }
    ctx->pc = 0x29FE84u;
    {
        const bool branch_taken_0x29fe84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29fe84) {
            ctx->pc = 0x29FEBCu;
            goto label_29febc;
        }
    }
    ctx->pc = 0x29FE8Cu;
label_29fe8c:
    // 0x29fe8c: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x29fe8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_29fe90:
    // 0x29fe90: 0xc441016c  lwc1        $f1, 0x16C($v0)
    ctx->pc = 0x29fe90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_29fe94:
    // 0x29fe94: 0xc7a0011c  lwc1        $f0, 0x11C($sp)
    ctx->pc = 0x29fe94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29fe98:
    // 0x29fe98: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x29fe98u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_29fe9c:
    // 0x29fe9c: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_29fea0:
    if (ctx->pc == 0x29FEA0u) {
        ctx->pc = 0x29FEA4u;
        goto label_29fea4;
    }
    ctx->pc = 0x29FE9Cu;
    {
        const bool branch_taken_0x29fe9c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29fe9c) {
            ctx->pc = 0x29FEBCu;
            goto label_29febc;
        }
    }
    ctx->pc = 0x29FEA4u;
label_29fea4:
    // 0x29fea4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x29fea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29fea8:
    // 0x29fea8: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x29fea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_29feac:
    // 0x29feac: 0xa0430164  sb          $v1, 0x164($v0)
    ctx->pc = 0x29feacu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 356), (uint8_t)GPR_U32(ctx, 3));
label_29feb0:
    // 0x29feb0: 0xc7a0011c  lwc1        $f0, 0x11C($sp)
    ctx->pc = 0x29feb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29feb4:
    // 0x29feb4: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x29feb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_29feb8:
    // 0x29feb8: 0xe4400168  swc1        $f0, 0x168($v0)
    ctx->pc = 0x29feb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 360), bits); }
label_29febc:
    // 0x29febc: 0x8fa40130  lw          $a0, 0x130($sp)
    ctx->pc = 0x29febcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_29fec0:
    // 0x29fec0: 0x90850164  lbu         $a1, 0x164($a0)
    ctx->pc = 0x29fec0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 356)));
label_29fec4:
    // 0x29fec4: 0x10a00081  beqz        $a1, . + 4 + (0x81 << 2)
label_29fec8:
    if (ctx->pc == 0x29FEC8u) {
        ctx->pc = 0x29FECCu;
        goto label_29fecc;
    }
    ctx->pc = 0x29FEC4u;
    {
        const bool branch_taken_0x29fec4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x29fec4) {
            ctx->pc = 0x2A00CCu;
            goto label_2a00cc;
        }
    }
    ctx->pc = 0x29FECCu;
label_29fecc:
    // 0x29fecc: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x29feccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_29fed0:
    // 0x29fed0: 0xc4410168  lwc1        $f1, 0x168($v0)
    ctx->pc = 0x29fed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_29fed4:
    // 0x29fed4: 0xc7a0011c  lwc1        $f0, 0x11C($sp)
    ctx->pc = 0x29fed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29fed8:
    // 0x29fed8: 0x46010081  sub.s       $f2, $f0, $f1
    ctx->pc = 0x29fed8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_29fedc:
    // 0x29fedc: 0x8fa30130  lw          $v1, 0x130($sp)
    ctx->pc = 0x29fedcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_29fee0:
    // 0x29fee0: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x29fee0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_29fee4:
    // 0x29fee4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x29fee4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_29fee8:
    // 0x29fee8: 0xc4600160  lwc1        $f0, 0x160($v1)
    ctx->pc = 0x29fee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29feec:
    // 0x29feec: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x29feecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_29fef0:
    // 0x29fef0: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x29fef0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_29fef4:
    // 0x29fef4: 0x45000019  bc1f        . + 4 + (0x19 << 2)
label_29fef8:
    if (ctx->pc == 0x29FEF8u) {
        ctx->pc = 0x29FEFCu;
        goto label_29fefc;
    }
    ctx->pc = 0x29FEF4u;
    {
        const bool branch_taken_0x29fef4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29fef4) {
            ctx->pc = 0x29FF5Cu;
            goto label_29ff5c;
        }
    }
    ctx->pc = 0x29FEFCu;
label_29fefc:
    // 0x29fefc: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x29fefcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_29ff00:
    // 0x29ff00: 0xc4410168  lwc1        $f1, 0x168($v0)
    ctx->pc = 0x29ff00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_29ff04:
    // 0x29ff04: 0xc7a0011c  lwc1        $f0, 0x11C($sp)
    ctx->pc = 0x29ff04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29ff08:
    // 0x29ff08: 0x46010081  sub.s       $f2, $f0, $f1
    ctx->pc = 0x29ff08u;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_29ff0c:
    // 0x29ff0c: 0x8fa30130  lw          $v1, 0x130($sp)
    ctx->pc = 0x29ff0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_29ff10:
    // 0x29ff10: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x29ff10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_29ff14:
    // 0x29ff14: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x29ff14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_29ff18:
    // 0x29ff18: 0xc4600160  lwc1        $f0, 0x160($v1)
    ctx->pc = 0x29ff18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29ff1c:
    // 0x29ff1c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x29ff1cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_29ff20:
    // 0x29ff20: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x29ff20u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
label_29ff24:
    // 0x29ff24: 0xe7a00110  swc1        $f0, 0x110($sp)
    ctx->pc = 0x29ff24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_29ff28:
    // 0x29ff28: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x29ff28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_29ff2c:
    // 0x29ff2c: 0x8c440044  lw          $a0, 0x44($v0)
    ctx->pc = 0x29ff2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_29ff30:
    // 0x29ff30: 0xc0c79b8  jal         func_31E6E0
label_29ff34:
    if (ctx->pc == 0x29FF34u) {
        ctx->pc = 0x29FF38u;
        goto label_29ff38;
    }
    ctx->pc = 0x29FF30u;
    SET_GPR_U32(ctx, 31, 0x29FF38u);
    ctx->pc = 0x31E6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E6E0u, 0x29FF30u, 0x29FF38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FF38u;
label_29ff38:
    // 0x29ff38: 0xafa2010c  sw          $v0, 0x10C($sp)
    ctx->pc = 0x29ff38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 2));
label_29ff3c:
    // 0x29ff3c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x29ff3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_29ff40:
    // 0x29ff40: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x29ff40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_29ff44:
    // 0x29ff44: 0xc7a00110  lwc1        $f0, 0x110($sp)
    ctx->pc = 0x29ff44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29ff48:
    // 0x29ff48: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x29ff48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_29ff4c:
    // 0x29ff4c: 0x8fa2010c  lw          $v0, 0x10C($sp)
    ctx->pc = 0x29ff4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
label_29ff50:
    // 0x29ff50: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x29ff50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_29ff54:
    // 0x29ff54: 0x1000005d  b           . + 4 + (0x5D << 2)
label_29ff58:
    if (ctx->pc == 0x29FF58u) {
        ctx->pc = 0x29FF5Cu;
        goto label_29ff5c;
    }
    ctx->pc = 0x29FF54u;
    {
        const bool branch_taken_0x29ff54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29ff54) {
            ctx->pc = 0x2A00CCu;
            goto label_2a00cc;
        }
    }
    ctx->pc = 0x29FF5Cu;
label_29ff5c:
    // 0x29ff5c: 0x8fa30130  lw          $v1, 0x130($sp)
    ctx->pc = 0x29ff5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_29ff60:
    // 0x29ff60: 0xc4610168  lwc1        $f1, 0x168($v1)
    ctx->pc = 0x29ff60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_29ff64:
    // 0x29ff64: 0xc7a0011c  lwc1        $f0, 0x11C($sp)
    ctx->pc = 0x29ff64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29ff68:
    // 0x29ff68: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x29ff68u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_29ff6c:
    // 0x29ff6c: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x29ff6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_29ff70:
    // 0x29ff70: 0xc4400160  lwc1        $f0, 0x160($v0)
    ctx->pc = 0x29ff70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29ff74:
    // 0x29ff74: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x29ff74u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_29ff78:
    // 0x29ff78: 0x45000026  bc1f        . + 4 + (0x26 << 2)
label_29ff7c:
    if (ctx->pc == 0x29FF7Cu) {
        ctx->pc = 0x29FF80u;
        goto label_29ff80;
    }
    ctx->pc = 0x29FF78u;
    {
        const bool branch_taken_0x29ff78 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29ff78) {
            ctx->pc = 0x2A0014u;
            goto label_2a0014;
        }
    }
    ctx->pc = 0x29FF80u;
label_29ff80:
    // 0x29ff80: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x29ff80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_29ff84:
    // 0x29ff84: 0xc4430160  lwc1        $f3, 0x160($v0)
    ctx->pc = 0x29ff84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_29ff88:
    // 0x29ff88: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x29ff88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_29ff8c:
    // 0x29ff8c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x29ff8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_29ff90:
    // 0x29ff90: 0x8fa40130  lw          $a0, 0x130($sp)
    ctx->pc = 0x29ff90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_29ff94:
    // 0x29ff94: 0xc4810168  lwc1        $f1, 0x168($a0)
    ctx->pc = 0x29ff94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_29ff98:
    // 0x29ff98: 0xc7a0011c  lwc1        $f0, 0x11C($sp)
    ctx->pc = 0x29ff98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29ff9c:
    // 0x29ff9c: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x29ff9cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_29ffa0:
    // 0x29ffa0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x29ffa0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_29ffa4:
    // 0x29ffa4: 0x0  nop
    ctx->pc = 0x29ffa4u;
    // NOP
label_29ffa8:
    // 0x29ffa8: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x29ffa8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
label_29ffac:
    // 0x29ffac: 0x4603109d  msub.s      $f2, $f2, $f3
    ctx->pc = 0x29ffacu;
    ctx->f[2] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_29ffb0:
    // 0x29ffb0: 0x8fa50130  lw          $a1, 0x130($sp)
    ctx->pc = 0x29ffb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_29ffb4:
    // 0x29ffb4: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x29ffb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_29ffb8:
    // 0x29ffb8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x29ffb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_29ffbc:
    // 0x29ffbc: 0xc4a00160  lwc1        $f0, 0x160($a1)
    ctx->pc = 0x29ffbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29ffc0:
    // 0x29ffc0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x29ffc0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_29ffc4:
    // 0x29ffc4: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x29ffc4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
label_29ffc8:
    // 0x29ffc8: 0xe7a00108  swc1        $f0, 0x108($sp)
    ctx->pc = 0x29ffc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
label_29ffcc:
    // 0x29ffcc: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x29ffccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_29ffd0:
    // 0x29ffd0: 0x8c440044  lw          $a0, 0x44($v0)
    ctx->pc = 0x29ffd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_29ffd4:
    // 0x29ffd4: 0xc0c79b8  jal         func_31E6E0
label_29ffd8:
    if (ctx->pc == 0x29FFD8u) {
        ctx->pc = 0x29FFDCu;
        goto label_29ffdc;
    }
    ctx->pc = 0x29FFD4u;
    SET_GPR_U32(ctx, 31, 0x29FFDCu);
    ctx->pc = 0x31E6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E6E0u, 0x29FFD4u, 0x29FFDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FFDCu;
label_29ffdc:
    // 0x29ffdc: 0xafa20104  sw          $v0, 0x104($sp)
    ctx->pc = 0x29ffdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 2));
label_29ffe0:
    // 0x29ffe0: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x29ffe0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_29ffe4:
    // 0x29ffe4: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x29ffe4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_29ffe8:
    // 0x29ffe8: 0xc7a20108  lwc1        $f2, 0x108($sp)
    ctx->pc = 0x29ffe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_29ffec:
    // 0x29ffec: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x29ffecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_29fff0:
    // 0x29fff0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x29fff0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_29fff4:
    // 0x29fff4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x29fff4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_29fff8:
    // 0x29fff8: 0x0  nop
    ctx->pc = 0x29fff8u;
    // NOP
label_29fffc:
    // 0x29fffc: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x29fffcu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
label_2a0000:
    // 0x2a0000: 0x4602181d  msub.s      $f0, $f3, $f2
    ctx->pc = 0x2a0000u;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_2a0004:
    // 0x2a0004: 0x8fa20104  lw          $v0, 0x104($sp)
    ctx->pc = 0x2a0004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
label_2a0008:
    // 0x2a0008: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2a0008u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2a000c:
    // 0x2a000c: 0x1000002f  b           . + 4 + (0x2F << 2)
label_2a0010:
    if (ctx->pc == 0x2A0010u) {
        ctx->pc = 0x2A0014u;
        goto label_2a0014;
    }
    ctx->pc = 0x2A000Cu;
    {
        const bool branch_taken_0x2a000c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a000c) {
            ctx->pc = 0x2A00CCu;
            goto label_2a00cc;
        }
    }
    ctx->pc = 0x2A0014u;
label_2a0014:
    // 0x2a0014: 0x8fb50130  lw          $s5, 0x130($sp)
    ctx->pc = 0x2a0014u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_2a0018:
    // 0x2a0018: 0x8ea40044  lw          $a0, 0x44($s5)
    ctx->pc = 0x2a0018u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 68)));
label_2a001c:
    // 0x2a001c: 0xc0c79b8  jal         func_31E6E0
label_2a0020:
    if (ctx->pc == 0x2A0020u) {
        ctx->pc = 0x2A0024u;
        goto label_2a0024;
    }
    ctx->pc = 0x2A001Cu;
    SET_GPR_U32(ctx, 31, 0x2A0024u);
    ctx->pc = 0x31E6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E6E0u, 0x2A001Cu, 0x2A0024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0024u;
label_2a0024:
    // 0x2a0024: 0xafa20100  sw          $v0, 0x100($sp)
    ctx->pc = 0x2a0024u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
label_2a0028:
    // 0x2a0028: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a0028u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a002c:
    // 0x2a002c: 0x8fa40100  lw          $a0, 0x100($sp)
    ctx->pc = 0x2a002cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_2a0030:
    // 0x2a0030: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x2a0030u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_2a0034:
    // 0x2a0034: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x2a0034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_2a0038:
    // 0x2a0038: 0xa0400164  sb          $zero, 0x164($v0)
    ctx->pc = 0x2a0038u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 356), (uint8_t)GPR_U32(ctx, 0));
label_2a003c:
    // 0x2a003c: 0xc7a0011c  lwc1        $f0, 0x11C($sp)
    ctx->pc = 0x2a003cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a0040:
    // 0x2a0040: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x2a0040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_2a0044:
    // 0x2a0044: 0xe4400168  swc1        $f0, 0x168($v0)
    ctx->pc = 0x2a0044u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 360), bits); }
label_2a0048:
    // 0x2a0048: 0xc0de0d2  jal         func_378348
label_2a004c:
    if (ctx->pc == 0x2A004Cu) {
        ctx->pc = 0x2A0050u;
        goto label_2a0050;
    }
    ctx->pc = 0x2A0048u;
    SET_GPR_U32(ctx, 31, 0x2A0050u);
    ctx->pc = 0x378348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378348u, 0x2A0048u, 0x2A0050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0050u;
label_2a0050:
    // 0x2a0050: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_2a0054:
    if (ctx->pc == 0x2A0054u) {
        ctx->pc = 0x2A0058u;
        goto label_2a0058;
    }
    ctx->pc = 0x2A0050u;
    {
        const bool branch_taken_0x2a0050 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2a0050) {
            ctx->pc = 0x2A006Cu;
            goto label_2a006c;
        }
    }
    ctx->pc = 0x2A0058u;
label_2a0058:
    // 0x2a0058: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a0058u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a005c:
    // 0x2a005c: 0x0  nop
    ctx->pc = 0x2a005cu;
    // NOP
label_2a0060:
    // 0x2a0060: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2a0060u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_2a0064:
    // 0x2a0064: 0x10000008  b           . + 4 + (0x8 << 2)
label_2a0068:
    if (ctx->pc == 0x2A0068u) {
        ctx->pc = 0x2A006Cu;
        goto label_2a006c;
    }
    ctx->pc = 0x2A0064u;
    {
        const bool branch_taken_0x2a0064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a0064) {
            ctx->pc = 0x2A0088u;
            goto label_2a0088;
        }
    }
    ctx->pc = 0x2A006Cu;
label_2a006c:
    // 0x2a006c: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x2a006cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_2a0070:
    // 0x2a0070: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2a0070u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2a0074:
    // 0x2a0074: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2a0074u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2a0078:
    // 0x2a0078: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a0078u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a007c:
    // 0x2a007c: 0x0  nop
    ctx->pc = 0x2a007cu;
    // NOP
label_2a0080:
    // 0x2a0080: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2a0080u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_2a0084:
    // 0x2a0084: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2a0084u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2a0088:
    // 0x2a0088: 0x3c044f00  lui         $a0, 0x4F00
    ctx->pc = 0x2a0088u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20224 << 16));
label_2a008c:
    // 0x2a008c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2a008cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a0090:
    // 0x2a0090: 0x0  nop
    ctx->pc = 0x2a0090u;
    // NOP
label_2a0094:
    // 0x2a0094: 0x460008c3  div.s       $f3, $f1, $f0
    ctx->pc = 0x2a0094u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_2a0098:
    // 0x2a0098: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x2a0098u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_2a009c:
    // 0x2a009c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2a009cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2a00a0:
    // 0x2a00a0: 0xc7a1011c  lwc1        $f1, 0x11C($sp)
    ctx->pc = 0x2a00a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a00a4:
    // 0x2a00a4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a00a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a00a8:
    // 0x2a00a8: 0x0  nop
    ctx->pc = 0x2a00a8u;
    // NOP
label_2a00ac:
    // 0x2a00ac: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x2a00acu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
label_2a00b0:
    // 0x2a00b0: 0x4603105c  madd.s      $f1, $f2, $f3
    ctx->pc = 0x2a00b0u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_2a00b4:
    // 0x2a00b4: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x2a00b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
label_2a00b8:
    // 0x2a00b8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2a00b8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a00bc:
    // 0x2a00bc: 0x0  nop
    ctx->pc = 0x2a00bcu;
    // NOP
label_2a00c0:
    // 0x2a00c0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2a00c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2a00c4:
    // 0x2a00c4: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x2a00c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_2a00c8:
    // 0x2a00c8: 0xe440016c  swc1        $f0, 0x16C($v0)
    ctx->pc = 0x2a00c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 364), bits); }
label_2a00cc:
    // 0x2a00cc: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x2a00ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_2a00d0:
    // 0x2a00d0: 0x8c440044  lw          $a0, 0x44($v0)
    ctx->pc = 0x2a00d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_2a00d4:
    // 0x2a00d4: 0xc0c79b8  jal         func_31E6E0
label_2a00d8:
    if (ctx->pc == 0x2A00D8u) {
        ctx->pc = 0x2A00DCu;
        goto label_2a00dc;
    }
    ctx->pc = 0x2A00D4u;
    SET_GPR_U32(ctx, 31, 0x2A00DCu);
    ctx->pc = 0x31E6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E6E0u, 0x2A00D4u, 0x2A00DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A00DCu;
label_2a00dc:
    // 0x2a00dc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2a00dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a00e0:
    // 0x2a00e0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2a00e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a00e4:
    // 0x2a00e4: 0x10000048  b           . + 4 + (0x48 << 2)
label_2a00e8:
    if (ctx->pc == 0x2A00E8u) {
        ctx->pc = 0x2A00ECu;
        goto label_2a00ec;
    }
    ctx->pc = 0x2A00E4u;
    {
        const bool branch_taken_0x2a00e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a00e4) {
            ctx->pc = 0x2A0208u;
            goto label_2a0208;
        }
    }
    ctx->pc = 0x2A00ECu;
label_2a00ec:
    // 0x2a00ec: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2a00ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2a00f0:
    // 0x2a00f0: 0x12030043  beq         $s0, $v1, . + 4 + (0x43 << 2)
label_2a00f4:
    if (ctx->pc == 0x2A00F4u) {
        ctx->pc = 0x2A00F8u;
        goto label_2a00f8;
    }
    ctx->pc = 0x2A00F0u;
    {
        const bool branch_taken_0x2a00f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x2a00f0) {
            ctx->pc = 0x2A0200u;
            goto label_2a0200;
        }
    }
    ctx->pc = 0x2A00F8u;
label_2a00f8:
    // 0x2a00f8: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x2a00f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_2a00fc:
    // 0x2a00fc: 0x2422021  addu        $a0, $s2, $v0
    ctx->pc = 0x2a00fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_2a0100:
    // 0x2a0100: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x2a0100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a0104:
    // 0x2a0104: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x2a0104u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_2a0108:
    // 0x2a0108: 0x8fa40130  lw          $a0, 0x130($sp)
    ctx->pc = 0x2a0108u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_2a010c:
    // 0x2a010c: 0x823021  addu        $a2, $a0, $v0
    ctx->pc = 0x2a010cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_2a0110:
    // 0x2a0110: 0xc4c00170  lwc1        $f0, 0x170($a2)
    ctx->pc = 0x2a0110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a0114:
    // 0x2a0114: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2a0114u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2a0118:
    // 0x2a0118: 0x45000018  bc1f        . + 4 + (0x18 << 2)
label_2a011c:
    if (ctx->pc == 0x2A011Cu) {
        ctx->pc = 0x2A0120u;
        goto label_2a0120;
    }
    ctx->pc = 0x2A0118u;
    {
        const bool branch_taken_0x2a0118 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a0118) {
            ctx->pc = 0x2A017Cu;
            goto label_2a017c;
        }
    }
    ctx->pc = 0x2A0120u;
label_2a0120:
    // 0x2a0120: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x2a0120u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_2a0124:
    // 0x2a0124: 0x2422021  addu        $a0, $s2, $v0
    ctx->pc = 0x2a0124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_2a0128:
    // 0x2a0128: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x2a0128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a012c:
    // 0x2a012c: 0xc7808044  lwc1        $f0, -0x7FBC($gp)
    ctx->pc = 0x2a012cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a0130:
    // 0x2a0130: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2a0130u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2a0134:
    // 0x2a0134: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x2a0134u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_2a0138:
    // 0x2a0138: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x2a0138u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_2a013c:
    // 0x2a013c: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x2a013cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_2a0140:
    // 0x2a0140: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2a0140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a0144:
    // 0x2a0144: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x2a0144u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_2a0148:
    // 0x2a0148: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x2a0148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_2a014c:
    // 0x2a014c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a014cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2a0150:
    // 0x2a0150: 0xc4400170  lwc1        $f0, 0x170($v0)
    ctx->pc = 0x2a0150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a0154:
    // 0x2a0154: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2a0154u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2a0158:
    // 0x2a0158: 0x45010008  bc1t        . + 4 + (0x8 << 2)
label_2a015c:
    if (ctx->pc == 0x2A015Cu) {
        ctx->pc = 0x2A0160u;
        goto label_2a0160;
    }
    ctx->pc = 0x2A0158u;
    {
        const bool branch_taken_0x2a0158 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a0158) {
            ctx->pc = 0x2A017Cu;
            goto label_2a017c;
        }
    }
    ctx->pc = 0x2A0160u;
label_2a0160:
    // 0x2a0160: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x2a0160u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_2a0164:
    // 0x2a0164: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x2a0164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_2a0168:
    // 0x2a0168: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a0168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2a016c:
    // 0x2a016c: 0xc4400170  lwc1        $f0, 0x170($v0)
    ctx->pc = 0x2a016cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a0170:
    // 0x2a0170: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x2a0170u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_2a0174:
    // 0x2a0174: 0x2441021  addu        $v0, $s2, $a0
    ctx->pc = 0x2a0174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
label_2a0178:
    // 0x2a0178: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2a0178u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_2a017c:
    // 0x2a017c: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x2a017cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_2a0180:
    // 0x2a0180: 0x2441021  addu        $v0, $s2, $a0
    ctx->pc = 0x2a0180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
label_2a0184:
    // 0x2a0184: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2a0184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a0188:
    // 0x2a0188: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x2a0188u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_2a018c:
    // 0x2a018c: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x2a018cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_2a0190:
    // 0x2a0190: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x2a0190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2a0194:
    // 0x2a0194: 0xc4600170  lwc1        $f0, 0x170($v1)
    ctx->pc = 0x2a0194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a0198:
    // 0x2a0198: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2a0198u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2a019c:
    // 0x2a019c: 0x45010018  bc1t        . + 4 + (0x18 << 2)
label_2a01a0:
    if (ctx->pc == 0x2A01A0u) {
        ctx->pc = 0x2A01A4u;
        goto label_2a01a4;
    }
    ctx->pc = 0x2A019Cu;
    {
        const bool branch_taken_0x2a019c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a019c) {
            ctx->pc = 0x2A0200u;
            goto label_2a0200;
        }
    }
    ctx->pc = 0x2A01A4u;
label_2a01a4:
    // 0x2a01a4: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x2a01a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_2a01a8:
    // 0x2a01a8: 0x2421821  addu        $v1, $s2, $v0
    ctx->pc = 0x2a01a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_2a01ac:
    // 0x2a01ac: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x2a01acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a01b0:
    // 0x2a01b0: 0xc7808044  lwc1        $f0, -0x7FBC($gp)
    ctx->pc = 0x2a01b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a01b4:
    // 0x2a01b4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2a01b4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2a01b8:
    // 0x2a01b8: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x2a01b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_2a01bc:
    // 0x2a01bc: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x2a01bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_2a01c0:
    // 0x2a01c0: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x2a01c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_2a01c4:
    // 0x2a01c4: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2a01c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a01c8:
    // 0x2a01c8: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x2a01c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_2a01cc:
    // 0x2a01cc: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x2a01ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_2a01d0:
    // 0x2a01d0: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x2a01d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2a01d4:
    // 0x2a01d4: 0xc4800170  lwc1        $f0, 0x170($a0)
    ctx->pc = 0x2a01d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a01d8:
    // 0x2a01d8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2a01d8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2a01dc:
    // 0x2a01dc: 0x45010008  bc1t        . + 4 + (0x8 << 2)
label_2a01e0:
    if (ctx->pc == 0x2A01E0u) {
        ctx->pc = 0x2A01E4u;
        goto label_2a01e4;
    }
    ctx->pc = 0x2A01DCu;
    {
        const bool branch_taken_0x2a01dc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a01dc) {
            ctx->pc = 0x2A0200u;
            goto label_2a0200;
        }
    }
    ctx->pc = 0x2A01E4u;
label_2a01e4:
    // 0x2a01e4: 0x103080  sll         $a2, $s0, 2
    ctx->pc = 0x2a01e4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_2a01e8:
    // 0x2a01e8: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x2a01e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_2a01ec:
    // 0x2a01ec: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2a01ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_2a01f0:
    // 0x2a01f0: 0xc4400170  lwc1        $f0, 0x170($v0)
    ctx->pc = 0x2a01f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a01f4:
    // 0x2a01f4: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x2a01f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_2a01f8:
    // 0x2a01f8: 0x2442821  addu        $a1, $s2, $a0
    ctx->pc = 0x2a01f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
label_2a01fc:
    // 0x2a01fc: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x2a01fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_2a0200:
    // 0x2a0200: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x2a0200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2a0204:
    // 0x2a0204: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a0204u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a0208:
    // 0x2a0208: 0x2e020006  sltiu       $v0, $s0, 0x6
    ctx->pc = 0x2a0208u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_2a020c:
    // 0x2a020c: 0x1440ffb7  bnez        $v0, . + 4 + (-0x49 << 2)
label_2a0210:
    if (ctx->pc == 0x2A0210u) {
        ctx->pc = 0x2A0214u;
        goto label_2a0214;
    }
    ctx->pc = 0x2A020Cu;
    {
        const bool branch_taken_0x2a020c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a020c) {
            ctx->pc = 0x2A00ECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a00ec;
        }
    }
    ctx->pc = 0x2A0214u;
label_2a0214:
    // 0x2a0214: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x2a0214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_2a0218:
    // 0x2a0218: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x2a0218u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_2a021c:
    // 0x2a021c: 0x2405001d  addiu       $a1, $zero, 0x1D
    ctx->pc = 0x2a021cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
label_2a0220:
    // 0x2a0220: 0xc085538  jal         func_2154E0
label_2a0224:
    if (ctx->pc == 0x2A0224u) {
        ctx->pc = 0x2A0228u;
        goto label_2a0228;
    }
    ctx->pc = 0x2A0220u;
    SET_GPR_U32(ctx, 31, 0x2A0228u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2A0220u, 0x2A0228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0228u;
label_2a0228:
    // 0x2a0228: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a0228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a022c:
    // 0x2a022c: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x2a022cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2a0230:
    // 0x2a0230: 0x10170006  beq         $zero, $s7, . + 4 + (0x6 << 2)
label_2a0234:
    if (ctx->pc == 0x2A0234u) {
        ctx->pc = 0x2A0238u;
        goto label_2a0238;
    }
    ctx->pc = 0x2A0230u;
    {
        const bool branch_taken_0x2a0230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 23));
        if (branch_taken_0x2a0230) {
            ctx->pc = 0x2A024Cu;
            goto label_2a024c;
        }
    }
    ctx->pc = 0x2A0238u;
label_2a0238:
    // 0x2a0238: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2a0238u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2a023c:
    // 0x2a023c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2a023cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2a0240:
    // 0x2a0240: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x2a0240u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_2a0244:
    // 0x2a0244: 0x320f809  jalr        $t9
label_2a0248:
    if (ctx->pc == 0x2A0248u) {
        ctx->pc = 0x2A024Cu;
        goto label_2a024c;
    }
    ctx->pc = 0x2A0244u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2A024Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A0244u, 0x2A024Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A024Cu;
label_2a024c:
    // 0x2a024c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2a024cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_2a0250:
    // 0x2a0250: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2a0250u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2a0254:
    // 0x2a0254: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2a0254u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2a0258:
    // 0x2a0258: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2a0258u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2a025c:
    // 0x2a025c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2a025cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2a0260:
    // 0x2a0260: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2a0260u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2a0264:
    // 0x2a0264: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2a0264u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2a0268:
    // 0x2a0268: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2a0268u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2a026c:
    // 0x2a026c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a026cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2a0270:
    // 0x2a0270: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a0270u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2a0274:
    // 0x2a0274: 0x27bd0140  addiu       $sp, $sp, 0x140
    ctx->pc = 0x2a0274u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_2a0278:
    // 0x2a0278: 0x3e00008  jr          $ra
label_2a027c:
    if (ctx->pc == 0x2A027Cu) {
        ctx->pc = 0x2A0280u;
        goto label_fallthrough_0x2a0278;
    }
    ctx->pc = 0x2A0278u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A0278u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2a0278:
    ctx->pc = 0x2A0280u;
}
