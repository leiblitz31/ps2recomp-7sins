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

// Function: sub_0011EC70
// Address: 0x11ec70 - 0x11fa70
void sub_0011EC70_0x11ec70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011EC70_0x11ec70");
#endif

    switch (ctx->pc) {
        case 0x11ec70u: goto label_11ec70;
        case 0x11ec74u: goto label_11ec74;
        case 0x11ec78u: goto label_11ec78;
        case 0x11ec7cu: goto label_11ec7c;
        case 0x11ec80u: goto label_11ec80;
        case 0x11ec84u: goto label_11ec84;
        case 0x11ec88u: goto label_11ec88;
        case 0x11ec8cu: goto label_11ec8c;
        case 0x11ec90u: goto label_11ec90;
        case 0x11ec94u: goto label_11ec94;
        case 0x11ec98u: goto label_11ec98;
        case 0x11ec9cu: goto label_11ec9c;
        case 0x11eca0u: goto label_11eca0;
        case 0x11eca4u: goto label_11eca4;
        case 0x11eca8u: goto label_11eca8;
        case 0x11ecacu: goto label_11ecac;
        case 0x11ecb0u: goto label_11ecb0;
        case 0x11ecb4u: goto label_11ecb4;
        case 0x11ecb8u: goto label_11ecb8;
        case 0x11ecbcu: goto label_11ecbc;
        case 0x11ecc0u: goto label_11ecc0;
        case 0x11ecc4u: goto label_11ecc4;
        case 0x11ecc8u: goto label_11ecc8;
        case 0x11ecccu: goto label_11eccc;
        case 0x11ecd0u: goto label_11ecd0;
        case 0x11ecd4u: goto label_11ecd4;
        case 0x11ecd8u: goto label_11ecd8;
        case 0x11ecdcu: goto label_11ecdc;
        case 0x11ece0u: goto label_11ece0;
        case 0x11ece4u: goto label_11ece4;
        case 0x11ece8u: goto label_11ece8;
        case 0x11ececu: goto label_11ecec;
        case 0x11ecf0u: goto label_11ecf0;
        case 0x11ecf4u: goto label_11ecf4;
        case 0x11ecf8u: goto label_11ecf8;
        case 0x11ecfcu: goto label_11ecfc;
        case 0x11ed00u: goto label_11ed00;
        case 0x11ed04u: goto label_11ed04;
        case 0x11ed08u: goto label_11ed08;
        case 0x11ed0cu: goto label_11ed0c;
        case 0x11ed10u: goto label_11ed10;
        case 0x11ed14u: goto label_11ed14;
        case 0x11ed18u: goto label_11ed18;
        case 0x11ed1cu: goto label_11ed1c;
        case 0x11ed20u: goto label_11ed20;
        case 0x11ed24u: goto label_11ed24;
        case 0x11ed28u: goto label_11ed28;
        case 0x11ed2cu: goto label_11ed2c;
        case 0x11ed30u: goto label_11ed30;
        case 0x11ed34u: goto label_11ed34;
        case 0x11ed38u: goto label_11ed38;
        case 0x11ed3cu: goto label_11ed3c;
        case 0x11ed40u: goto label_11ed40;
        case 0x11ed44u: goto label_11ed44;
        case 0x11ed48u: goto label_11ed48;
        case 0x11ed4cu: goto label_11ed4c;
        case 0x11ed50u: goto label_11ed50;
        case 0x11ed54u: goto label_11ed54;
        case 0x11ed58u: goto label_11ed58;
        case 0x11ed5cu: goto label_11ed5c;
        case 0x11ed60u: goto label_11ed60;
        case 0x11ed64u: goto label_11ed64;
        case 0x11ed68u: goto label_11ed68;
        case 0x11ed6cu: goto label_11ed6c;
        case 0x11ed70u: goto label_11ed70;
        case 0x11ed74u: goto label_11ed74;
        case 0x11ed78u: goto label_11ed78;
        case 0x11ed7cu: goto label_11ed7c;
        case 0x11ed80u: goto label_11ed80;
        case 0x11ed84u: goto label_11ed84;
        case 0x11ed88u: goto label_11ed88;
        case 0x11ed8cu: goto label_11ed8c;
        case 0x11ed90u: goto label_11ed90;
        case 0x11ed94u: goto label_11ed94;
        case 0x11ed98u: goto label_11ed98;
        case 0x11ed9cu: goto label_11ed9c;
        case 0x11eda0u: goto label_11eda0;
        case 0x11eda4u: goto label_11eda4;
        case 0x11eda8u: goto label_11eda8;
        case 0x11edacu: goto label_11edac;
        case 0x11edb0u: goto label_11edb0;
        case 0x11edb4u: goto label_11edb4;
        case 0x11edb8u: goto label_11edb8;
        case 0x11edbcu: goto label_11edbc;
        case 0x11edc0u: goto label_11edc0;
        case 0x11edc4u: goto label_11edc4;
        case 0x11edc8u: goto label_11edc8;
        case 0x11edccu: goto label_11edcc;
        case 0x11edd0u: goto label_11edd0;
        case 0x11edd4u: goto label_11edd4;
        case 0x11edd8u: goto label_11edd8;
        case 0x11eddcu: goto label_11eddc;
        case 0x11ede0u: goto label_11ede0;
        case 0x11ede4u: goto label_11ede4;
        case 0x11ede8u: goto label_11ede8;
        case 0x11edecu: goto label_11edec;
        case 0x11edf0u: goto label_11edf0;
        case 0x11edf4u: goto label_11edf4;
        case 0x11edf8u: goto label_11edf8;
        case 0x11edfcu: goto label_11edfc;
        case 0x11ee00u: goto label_11ee00;
        case 0x11ee04u: goto label_11ee04;
        case 0x11ee08u: goto label_11ee08;
        case 0x11ee0cu: goto label_11ee0c;
        case 0x11ee10u: goto label_11ee10;
        case 0x11ee14u: goto label_11ee14;
        case 0x11ee18u: goto label_11ee18;
        case 0x11ee1cu: goto label_11ee1c;
        case 0x11ee20u: goto label_11ee20;
        case 0x11ee24u: goto label_11ee24;
        case 0x11ee28u: goto label_11ee28;
        case 0x11ee2cu: goto label_11ee2c;
        case 0x11ee30u: goto label_11ee30;
        case 0x11ee34u: goto label_11ee34;
        case 0x11ee38u: goto label_11ee38;
        case 0x11ee3cu: goto label_11ee3c;
        case 0x11ee40u: goto label_11ee40;
        case 0x11ee44u: goto label_11ee44;
        case 0x11ee48u: goto label_11ee48;
        case 0x11ee4cu: goto label_11ee4c;
        case 0x11ee50u: goto label_11ee50;
        case 0x11ee54u: goto label_11ee54;
        case 0x11ee58u: goto label_11ee58;
        case 0x11ee5cu: goto label_11ee5c;
        case 0x11ee60u: goto label_11ee60;
        case 0x11ee64u: goto label_11ee64;
        case 0x11ee68u: goto label_11ee68;
        case 0x11ee6cu: goto label_11ee6c;
        case 0x11ee70u: goto label_11ee70;
        case 0x11ee74u: goto label_11ee74;
        case 0x11ee78u: goto label_11ee78;
        case 0x11ee7cu: goto label_11ee7c;
        case 0x11ee80u: goto label_11ee80;
        case 0x11ee84u: goto label_11ee84;
        case 0x11ee88u: goto label_11ee88;
        case 0x11ee8cu: goto label_11ee8c;
        case 0x11ee90u: goto label_11ee90;
        case 0x11ee94u: goto label_11ee94;
        case 0x11ee98u: goto label_11ee98;
        case 0x11ee9cu: goto label_11ee9c;
        case 0x11eea0u: goto label_11eea0;
        case 0x11eea4u: goto label_11eea4;
        case 0x11eea8u: goto label_11eea8;
        case 0x11eeacu: goto label_11eeac;
        case 0x11eeb0u: goto label_11eeb0;
        case 0x11eeb4u: goto label_11eeb4;
        case 0x11eeb8u: goto label_11eeb8;
        case 0x11eebcu: goto label_11eebc;
        case 0x11eec0u: goto label_11eec0;
        case 0x11eec4u: goto label_11eec4;
        case 0x11eec8u: goto label_11eec8;
        case 0x11eeccu: goto label_11eecc;
        case 0x11eed0u: goto label_11eed0;
        case 0x11eed4u: goto label_11eed4;
        case 0x11eed8u: goto label_11eed8;
        case 0x11eedcu: goto label_11eedc;
        case 0x11eee0u: goto label_11eee0;
        case 0x11eee4u: goto label_11eee4;
        case 0x11eee8u: goto label_11eee8;
        case 0x11eeecu: goto label_11eeec;
        case 0x11eef0u: goto label_11eef0;
        case 0x11eef4u: goto label_11eef4;
        case 0x11eef8u: goto label_11eef8;
        case 0x11eefcu: goto label_11eefc;
        case 0x11ef00u: goto label_11ef00;
        case 0x11ef04u: goto label_11ef04;
        case 0x11ef08u: goto label_11ef08;
        case 0x11ef0cu: goto label_11ef0c;
        case 0x11ef10u: goto label_11ef10;
        case 0x11ef14u: goto label_11ef14;
        case 0x11ef18u: goto label_11ef18;
        case 0x11ef1cu: goto label_11ef1c;
        case 0x11ef20u: goto label_11ef20;
        case 0x11ef24u: goto label_11ef24;
        case 0x11ef28u: goto label_11ef28;
        case 0x11ef2cu: goto label_11ef2c;
        case 0x11ef30u: goto label_11ef30;
        case 0x11ef34u: goto label_11ef34;
        case 0x11ef38u: goto label_11ef38;
        case 0x11ef3cu: goto label_11ef3c;
        case 0x11ef40u: goto label_11ef40;
        case 0x11ef44u: goto label_11ef44;
        case 0x11ef48u: goto label_11ef48;
        case 0x11ef4cu: goto label_11ef4c;
        case 0x11ef50u: goto label_11ef50;
        case 0x11ef54u: goto label_11ef54;
        case 0x11ef58u: goto label_11ef58;
        case 0x11ef5cu: goto label_11ef5c;
        case 0x11ef60u: goto label_11ef60;
        case 0x11ef64u: goto label_11ef64;
        case 0x11ef68u: goto label_11ef68;
        case 0x11ef6cu: goto label_11ef6c;
        case 0x11ef70u: goto label_11ef70;
        case 0x11ef74u: goto label_11ef74;
        case 0x11ef78u: goto label_11ef78;
        case 0x11ef7cu: goto label_11ef7c;
        case 0x11ef80u: goto label_11ef80;
        case 0x11ef84u: goto label_11ef84;
        case 0x11ef88u: goto label_11ef88;
        case 0x11ef8cu: goto label_11ef8c;
        case 0x11ef90u: goto label_11ef90;
        case 0x11ef94u: goto label_11ef94;
        case 0x11ef98u: goto label_11ef98;
        case 0x11ef9cu: goto label_11ef9c;
        case 0x11efa0u: goto label_11efa0;
        case 0x11efa4u: goto label_11efa4;
        case 0x11efa8u: goto label_11efa8;
        case 0x11efacu: goto label_11efac;
        case 0x11efb0u: goto label_11efb0;
        case 0x11efb4u: goto label_11efb4;
        case 0x11efb8u: goto label_11efb8;
        case 0x11efbcu: goto label_11efbc;
        case 0x11efc0u: goto label_11efc0;
        case 0x11efc4u: goto label_11efc4;
        case 0x11efc8u: goto label_11efc8;
        case 0x11efccu: goto label_11efcc;
        case 0x11efd0u: goto label_11efd0;
        case 0x11efd4u: goto label_11efd4;
        case 0x11efd8u: goto label_11efd8;
        case 0x11efdcu: goto label_11efdc;
        case 0x11efe0u: goto label_11efe0;
        case 0x11efe4u: goto label_11efe4;
        case 0x11efe8u: goto label_11efe8;
        case 0x11efecu: goto label_11efec;
        case 0x11eff0u: goto label_11eff0;
        case 0x11eff4u: goto label_11eff4;
        case 0x11eff8u: goto label_11eff8;
        case 0x11effcu: goto label_11effc;
        case 0x11f000u: goto label_11f000;
        case 0x11f004u: goto label_11f004;
        case 0x11f008u: goto label_11f008;
        case 0x11f00cu: goto label_11f00c;
        case 0x11f010u: goto label_11f010;
        case 0x11f014u: goto label_11f014;
        case 0x11f018u: goto label_11f018;
        case 0x11f01cu: goto label_11f01c;
        case 0x11f020u: goto label_11f020;
        case 0x11f024u: goto label_11f024;
        case 0x11f028u: goto label_11f028;
        case 0x11f02cu: goto label_11f02c;
        case 0x11f030u: goto label_11f030;
        case 0x11f034u: goto label_11f034;
        case 0x11f038u: goto label_11f038;
        case 0x11f03cu: goto label_11f03c;
        case 0x11f040u: goto label_11f040;
        case 0x11f044u: goto label_11f044;
        case 0x11f048u: goto label_11f048;
        case 0x11f04cu: goto label_11f04c;
        case 0x11f050u: goto label_11f050;
        case 0x11f054u: goto label_11f054;
        case 0x11f058u: goto label_11f058;
        case 0x11f05cu: goto label_11f05c;
        case 0x11f060u: goto label_11f060;
        case 0x11f064u: goto label_11f064;
        case 0x11f068u: goto label_11f068;
        case 0x11f06cu: goto label_11f06c;
        case 0x11f070u: goto label_11f070;
        case 0x11f074u: goto label_11f074;
        case 0x11f078u: goto label_11f078;
        case 0x11f07cu: goto label_11f07c;
        case 0x11f080u: goto label_11f080;
        case 0x11f084u: goto label_11f084;
        case 0x11f088u: goto label_11f088;
        case 0x11f08cu: goto label_11f08c;
        case 0x11f090u: goto label_11f090;
        case 0x11f094u: goto label_11f094;
        case 0x11f098u: goto label_11f098;
        case 0x11f09cu: goto label_11f09c;
        case 0x11f0a0u: goto label_11f0a0;
        case 0x11f0a4u: goto label_11f0a4;
        case 0x11f0a8u: goto label_11f0a8;
        case 0x11f0acu: goto label_11f0ac;
        case 0x11f0b0u: goto label_11f0b0;
        case 0x11f0b4u: goto label_11f0b4;
        case 0x11f0b8u: goto label_11f0b8;
        case 0x11f0bcu: goto label_11f0bc;
        case 0x11f0c0u: goto label_11f0c0;
        case 0x11f0c4u: goto label_11f0c4;
        case 0x11f0c8u: goto label_11f0c8;
        case 0x11f0ccu: goto label_11f0cc;
        case 0x11f0d0u: goto label_11f0d0;
        case 0x11f0d4u: goto label_11f0d4;
        case 0x11f0d8u: goto label_11f0d8;
        case 0x11f0dcu: goto label_11f0dc;
        case 0x11f0e0u: goto label_11f0e0;
        case 0x11f0e4u: goto label_11f0e4;
        case 0x11f0e8u: goto label_11f0e8;
        case 0x11f0ecu: goto label_11f0ec;
        case 0x11f0f0u: goto label_11f0f0;
        case 0x11f0f4u: goto label_11f0f4;
        case 0x11f0f8u: goto label_11f0f8;
        case 0x11f0fcu: goto label_11f0fc;
        case 0x11f100u: goto label_11f100;
        case 0x11f104u: goto label_11f104;
        case 0x11f108u: goto label_11f108;
        case 0x11f10cu: goto label_11f10c;
        case 0x11f110u: goto label_11f110;
        case 0x11f114u: goto label_11f114;
        case 0x11f118u: goto label_11f118;
        case 0x11f11cu: goto label_11f11c;
        case 0x11f120u: goto label_11f120;
        case 0x11f124u: goto label_11f124;
        case 0x11f128u: goto label_11f128;
        case 0x11f12cu: goto label_11f12c;
        case 0x11f130u: goto label_11f130;
        case 0x11f134u: goto label_11f134;
        case 0x11f138u: goto label_11f138;
        case 0x11f13cu: goto label_11f13c;
        case 0x11f140u: goto label_11f140;
        case 0x11f144u: goto label_11f144;
        case 0x11f148u: goto label_11f148;
        case 0x11f14cu: goto label_11f14c;
        case 0x11f150u: goto label_11f150;
        case 0x11f154u: goto label_11f154;
        case 0x11f158u: goto label_11f158;
        case 0x11f15cu: goto label_11f15c;
        case 0x11f160u: goto label_11f160;
        case 0x11f164u: goto label_11f164;
        case 0x11f168u: goto label_11f168;
        case 0x11f16cu: goto label_11f16c;
        case 0x11f170u: goto label_11f170;
        case 0x11f174u: goto label_11f174;
        case 0x11f178u: goto label_11f178;
        case 0x11f17cu: goto label_11f17c;
        case 0x11f180u: goto label_11f180;
        case 0x11f184u: goto label_11f184;
        case 0x11f188u: goto label_11f188;
        case 0x11f18cu: goto label_11f18c;
        case 0x11f190u: goto label_11f190;
        case 0x11f194u: goto label_11f194;
        case 0x11f198u: goto label_11f198;
        case 0x11f19cu: goto label_11f19c;
        case 0x11f1a0u: goto label_11f1a0;
        case 0x11f1a4u: goto label_11f1a4;
        case 0x11f1a8u: goto label_11f1a8;
        case 0x11f1acu: goto label_11f1ac;
        case 0x11f1b0u: goto label_11f1b0;
        case 0x11f1b4u: goto label_11f1b4;
        case 0x11f1b8u: goto label_11f1b8;
        case 0x11f1bcu: goto label_11f1bc;
        case 0x11f1c0u: goto label_11f1c0;
        case 0x11f1c4u: goto label_11f1c4;
        case 0x11f1c8u: goto label_11f1c8;
        case 0x11f1ccu: goto label_11f1cc;
        case 0x11f1d0u: goto label_11f1d0;
        case 0x11f1d4u: goto label_11f1d4;
        case 0x11f1d8u: goto label_11f1d8;
        case 0x11f1dcu: goto label_11f1dc;
        case 0x11f1e0u: goto label_11f1e0;
        case 0x11f1e4u: goto label_11f1e4;
        case 0x11f1e8u: goto label_11f1e8;
        case 0x11f1ecu: goto label_11f1ec;
        case 0x11f1f0u: goto label_11f1f0;
        case 0x11f1f4u: goto label_11f1f4;
        case 0x11f1f8u: goto label_11f1f8;
        case 0x11f1fcu: goto label_11f1fc;
        case 0x11f200u: goto label_11f200;
        case 0x11f204u: goto label_11f204;
        case 0x11f208u: goto label_11f208;
        case 0x11f20cu: goto label_11f20c;
        case 0x11f210u: goto label_11f210;
        case 0x11f214u: goto label_11f214;
        case 0x11f218u: goto label_11f218;
        case 0x11f21cu: goto label_11f21c;
        case 0x11f220u: goto label_11f220;
        case 0x11f224u: goto label_11f224;
        case 0x11f228u: goto label_11f228;
        case 0x11f22cu: goto label_11f22c;
        case 0x11f230u: goto label_11f230;
        case 0x11f234u: goto label_11f234;
        case 0x11f238u: goto label_11f238;
        case 0x11f23cu: goto label_11f23c;
        case 0x11f240u: goto label_11f240;
        case 0x11f244u: goto label_11f244;
        case 0x11f248u: goto label_11f248;
        case 0x11f24cu: goto label_11f24c;
        case 0x11f250u: goto label_11f250;
        case 0x11f254u: goto label_11f254;
        case 0x11f258u: goto label_11f258;
        case 0x11f25cu: goto label_11f25c;
        case 0x11f260u: goto label_11f260;
        case 0x11f264u: goto label_11f264;
        case 0x11f268u: goto label_11f268;
        case 0x11f26cu: goto label_11f26c;
        case 0x11f270u: goto label_11f270;
        case 0x11f274u: goto label_11f274;
        case 0x11f278u: goto label_11f278;
        case 0x11f27cu: goto label_11f27c;
        case 0x11f280u: goto label_11f280;
        case 0x11f284u: goto label_11f284;
        case 0x11f288u: goto label_11f288;
        case 0x11f28cu: goto label_11f28c;
        case 0x11f290u: goto label_11f290;
        case 0x11f294u: goto label_11f294;
        case 0x11f298u: goto label_11f298;
        case 0x11f29cu: goto label_11f29c;
        case 0x11f2a0u: goto label_11f2a0;
        case 0x11f2a4u: goto label_11f2a4;
        case 0x11f2a8u: goto label_11f2a8;
        case 0x11f2acu: goto label_11f2ac;
        case 0x11f2b0u: goto label_11f2b0;
        case 0x11f2b4u: goto label_11f2b4;
        case 0x11f2b8u: goto label_11f2b8;
        case 0x11f2bcu: goto label_11f2bc;
        case 0x11f2c0u: goto label_11f2c0;
        case 0x11f2c4u: goto label_11f2c4;
        case 0x11f2c8u: goto label_11f2c8;
        case 0x11f2ccu: goto label_11f2cc;
        case 0x11f2d0u: goto label_11f2d0;
        case 0x11f2d4u: goto label_11f2d4;
        case 0x11f2d8u: goto label_11f2d8;
        case 0x11f2dcu: goto label_11f2dc;
        case 0x11f2e0u: goto label_11f2e0;
        case 0x11f2e4u: goto label_11f2e4;
        case 0x11f2e8u: goto label_11f2e8;
        case 0x11f2ecu: goto label_11f2ec;
        case 0x11f2f0u: goto label_11f2f0;
        case 0x11f2f4u: goto label_11f2f4;
        case 0x11f2f8u: goto label_11f2f8;
        case 0x11f2fcu: goto label_11f2fc;
        case 0x11f300u: goto label_11f300;
        case 0x11f304u: goto label_11f304;
        case 0x11f308u: goto label_11f308;
        case 0x11f30cu: goto label_11f30c;
        case 0x11f310u: goto label_11f310;
        case 0x11f314u: goto label_11f314;
        case 0x11f318u: goto label_11f318;
        case 0x11f31cu: goto label_11f31c;
        case 0x11f320u: goto label_11f320;
        case 0x11f324u: goto label_11f324;
        case 0x11f328u: goto label_11f328;
        case 0x11f32cu: goto label_11f32c;
        case 0x11f330u: goto label_11f330;
        case 0x11f334u: goto label_11f334;
        case 0x11f338u: goto label_11f338;
        case 0x11f33cu: goto label_11f33c;
        case 0x11f340u: goto label_11f340;
        case 0x11f344u: goto label_11f344;
        case 0x11f348u: goto label_11f348;
        case 0x11f34cu: goto label_11f34c;
        case 0x11f350u: goto label_11f350;
        case 0x11f354u: goto label_11f354;
        case 0x11f358u: goto label_11f358;
        case 0x11f35cu: goto label_11f35c;
        case 0x11f360u: goto label_11f360;
        case 0x11f364u: goto label_11f364;
        case 0x11f368u: goto label_11f368;
        case 0x11f36cu: goto label_11f36c;
        case 0x11f370u: goto label_11f370;
        case 0x11f374u: goto label_11f374;
        case 0x11f378u: goto label_11f378;
        case 0x11f37cu: goto label_11f37c;
        case 0x11f380u: goto label_11f380;
        case 0x11f384u: goto label_11f384;
        case 0x11f388u: goto label_11f388;
        case 0x11f38cu: goto label_11f38c;
        case 0x11f390u: goto label_11f390;
        case 0x11f394u: goto label_11f394;
        case 0x11f398u: goto label_11f398;
        case 0x11f39cu: goto label_11f39c;
        case 0x11f3a0u: goto label_11f3a0;
        case 0x11f3a4u: goto label_11f3a4;
        case 0x11f3a8u: goto label_11f3a8;
        case 0x11f3acu: goto label_11f3ac;
        case 0x11f3b0u: goto label_11f3b0;
        case 0x11f3b4u: goto label_11f3b4;
        case 0x11f3b8u: goto label_11f3b8;
        case 0x11f3bcu: goto label_11f3bc;
        case 0x11f3c0u: goto label_11f3c0;
        case 0x11f3c4u: goto label_11f3c4;
        case 0x11f3c8u: goto label_11f3c8;
        case 0x11f3ccu: goto label_11f3cc;
        case 0x11f3d0u: goto label_11f3d0;
        case 0x11f3d4u: goto label_11f3d4;
        case 0x11f3d8u: goto label_11f3d8;
        case 0x11f3dcu: goto label_11f3dc;
        case 0x11f3e0u: goto label_11f3e0;
        case 0x11f3e4u: goto label_11f3e4;
        case 0x11f3e8u: goto label_11f3e8;
        case 0x11f3ecu: goto label_11f3ec;
        case 0x11f3f0u: goto label_11f3f0;
        case 0x11f3f4u: goto label_11f3f4;
        case 0x11f3f8u: goto label_11f3f8;
        case 0x11f3fcu: goto label_11f3fc;
        case 0x11f400u: goto label_11f400;
        case 0x11f404u: goto label_11f404;
        case 0x11f408u: goto label_11f408;
        case 0x11f40cu: goto label_11f40c;
        case 0x11f410u: goto label_11f410;
        case 0x11f414u: goto label_11f414;
        case 0x11f418u: goto label_11f418;
        case 0x11f41cu: goto label_11f41c;
        case 0x11f420u: goto label_11f420;
        case 0x11f424u: goto label_11f424;
        case 0x11f428u: goto label_11f428;
        case 0x11f42cu: goto label_11f42c;
        case 0x11f430u: goto label_11f430;
        case 0x11f434u: goto label_11f434;
        case 0x11f438u: goto label_11f438;
        case 0x11f43cu: goto label_11f43c;
        case 0x11f440u: goto label_11f440;
        case 0x11f444u: goto label_11f444;
        case 0x11f448u: goto label_11f448;
        case 0x11f44cu: goto label_11f44c;
        case 0x11f450u: goto label_11f450;
        case 0x11f454u: goto label_11f454;
        case 0x11f458u: goto label_11f458;
        case 0x11f45cu: goto label_11f45c;
        case 0x11f460u: goto label_11f460;
        case 0x11f464u: goto label_11f464;
        case 0x11f468u: goto label_11f468;
        case 0x11f46cu: goto label_11f46c;
        case 0x11f470u: goto label_11f470;
        case 0x11f474u: goto label_11f474;
        case 0x11f478u: goto label_11f478;
        case 0x11f47cu: goto label_11f47c;
        case 0x11f480u: goto label_11f480;
        case 0x11f484u: goto label_11f484;
        case 0x11f488u: goto label_11f488;
        case 0x11f48cu: goto label_11f48c;
        case 0x11f490u: goto label_11f490;
        case 0x11f494u: goto label_11f494;
        case 0x11f498u: goto label_11f498;
        case 0x11f49cu: goto label_11f49c;
        case 0x11f4a0u: goto label_11f4a0;
        case 0x11f4a4u: goto label_11f4a4;
        case 0x11f4a8u: goto label_11f4a8;
        case 0x11f4acu: goto label_11f4ac;
        case 0x11f4b0u: goto label_11f4b0;
        case 0x11f4b4u: goto label_11f4b4;
        case 0x11f4b8u: goto label_11f4b8;
        case 0x11f4bcu: goto label_11f4bc;
        case 0x11f4c0u: goto label_11f4c0;
        case 0x11f4c4u: goto label_11f4c4;
        case 0x11f4c8u: goto label_11f4c8;
        case 0x11f4ccu: goto label_11f4cc;
        case 0x11f4d0u: goto label_11f4d0;
        case 0x11f4d4u: goto label_11f4d4;
        case 0x11f4d8u: goto label_11f4d8;
        case 0x11f4dcu: goto label_11f4dc;
        case 0x11f4e0u: goto label_11f4e0;
        case 0x11f4e4u: goto label_11f4e4;
        case 0x11f4e8u: goto label_11f4e8;
        case 0x11f4ecu: goto label_11f4ec;
        case 0x11f4f0u: goto label_11f4f0;
        case 0x11f4f4u: goto label_11f4f4;
        case 0x11f4f8u: goto label_11f4f8;
        case 0x11f4fcu: goto label_11f4fc;
        case 0x11f500u: goto label_11f500;
        case 0x11f504u: goto label_11f504;
        case 0x11f508u: goto label_11f508;
        case 0x11f50cu: goto label_11f50c;
        case 0x11f510u: goto label_11f510;
        case 0x11f514u: goto label_11f514;
        case 0x11f518u: goto label_11f518;
        case 0x11f51cu: goto label_11f51c;
        case 0x11f520u: goto label_11f520;
        case 0x11f524u: goto label_11f524;
        case 0x11f528u: goto label_11f528;
        case 0x11f52cu: goto label_11f52c;
        case 0x11f530u: goto label_11f530;
        case 0x11f534u: goto label_11f534;
        case 0x11f538u: goto label_11f538;
        case 0x11f53cu: goto label_11f53c;
        case 0x11f540u: goto label_11f540;
        case 0x11f544u: goto label_11f544;
        case 0x11f548u: goto label_11f548;
        case 0x11f54cu: goto label_11f54c;
        case 0x11f550u: goto label_11f550;
        case 0x11f554u: goto label_11f554;
        case 0x11f558u: goto label_11f558;
        case 0x11f55cu: goto label_11f55c;
        case 0x11f560u: goto label_11f560;
        case 0x11f564u: goto label_11f564;
        case 0x11f568u: goto label_11f568;
        case 0x11f56cu: goto label_11f56c;
        case 0x11f570u: goto label_11f570;
        case 0x11f574u: goto label_11f574;
        case 0x11f578u: goto label_11f578;
        case 0x11f57cu: goto label_11f57c;
        case 0x11f580u: goto label_11f580;
        case 0x11f584u: goto label_11f584;
        case 0x11f588u: goto label_11f588;
        case 0x11f58cu: goto label_11f58c;
        case 0x11f590u: goto label_11f590;
        case 0x11f594u: goto label_11f594;
        case 0x11f598u: goto label_11f598;
        case 0x11f59cu: goto label_11f59c;
        case 0x11f5a0u: goto label_11f5a0;
        case 0x11f5a4u: goto label_11f5a4;
        case 0x11f5a8u: goto label_11f5a8;
        case 0x11f5acu: goto label_11f5ac;
        case 0x11f5b0u: goto label_11f5b0;
        case 0x11f5b4u: goto label_11f5b4;
        case 0x11f5b8u: goto label_11f5b8;
        case 0x11f5bcu: goto label_11f5bc;
        case 0x11f5c0u: goto label_11f5c0;
        case 0x11f5c4u: goto label_11f5c4;
        case 0x11f5c8u: goto label_11f5c8;
        case 0x11f5ccu: goto label_11f5cc;
        case 0x11f5d0u: goto label_11f5d0;
        case 0x11f5d4u: goto label_11f5d4;
        case 0x11f5d8u: goto label_11f5d8;
        case 0x11f5dcu: goto label_11f5dc;
        case 0x11f5e0u: goto label_11f5e0;
        case 0x11f5e4u: goto label_11f5e4;
        case 0x11f5e8u: goto label_11f5e8;
        case 0x11f5ecu: goto label_11f5ec;
        case 0x11f5f0u: goto label_11f5f0;
        case 0x11f5f4u: goto label_11f5f4;
        case 0x11f5f8u: goto label_11f5f8;
        case 0x11f5fcu: goto label_11f5fc;
        case 0x11f600u: goto label_11f600;
        case 0x11f604u: goto label_11f604;
        case 0x11f608u: goto label_11f608;
        case 0x11f60cu: goto label_11f60c;
        case 0x11f610u: goto label_11f610;
        case 0x11f614u: goto label_11f614;
        case 0x11f618u: goto label_11f618;
        case 0x11f61cu: goto label_11f61c;
        case 0x11f620u: goto label_11f620;
        case 0x11f624u: goto label_11f624;
        case 0x11f628u: goto label_11f628;
        case 0x11f62cu: goto label_11f62c;
        case 0x11f630u: goto label_11f630;
        case 0x11f634u: goto label_11f634;
        case 0x11f638u: goto label_11f638;
        case 0x11f63cu: goto label_11f63c;
        case 0x11f640u: goto label_11f640;
        case 0x11f644u: goto label_11f644;
        case 0x11f648u: goto label_11f648;
        case 0x11f64cu: goto label_11f64c;
        case 0x11f650u: goto label_11f650;
        case 0x11f654u: goto label_11f654;
        case 0x11f658u: goto label_11f658;
        case 0x11f65cu: goto label_11f65c;
        case 0x11f660u: goto label_11f660;
        case 0x11f664u: goto label_11f664;
        case 0x11f668u: goto label_11f668;
        case 0x11f66cu: goto label_11f66c;
        case 0x11f670u: goto label_11f670;
        case 0x11f674u: goto label_11f674;
        case 0x11f678u: goto label_11f678;
        case 0x11f67cu: goto label_11f67c;
        case 0x11f680u: goto label_11f680;
        case 0x11f684u: goto label_11f684;
        case 0x11f688u: goto label_11f688;
        case 0x11f68cu: goto label_11f68c;
        case 0x11f690u: goto label_11f690;
        case 0x11f694u: goto label_11f694;
        case 0x11f698u: goto label_11f698;
        case 0x11f69cu: goto label_11f69c;
        case 0x11f6a0u: goto label_11f6a0;
        case 0x11f6a4u: goto label_11f6a4;
        case 0x11f6a8u: goto label_11f6a8;
        case 0x11f6acu: goto label_11f6ac;
        case 0x11f6b0u: goto label_11f6b0;
        case 0x11f6b4u: goto label_11f6b4;
        case 0x11f6b8u: goto label_11f6b8;
        case 0x11f6bcu: goto label_11f6bc;
        case 0x11f6c0u: goto label_11f6c0;
        case 0x11f6c4u: goto label_11f6c4;
        case 0x11f6c8u: goto label_11f6c8;
        case 0x11f6ccu: goto label_11f6cc;
        case 0x11f6d0u: goto label_11f6d0;
        case 0x11f6d4u: goto label_11f6d4;
        case 0x11f6d8u: goto label_11f6d8;
        case 0x11f6dcu: goto label_11f6dc;
        case 0x11f6e0u: goto label_11f6e0;
        case 0x11f6e4u: goto label_11f6e4;
        case 0x11f6e8u: goto label_11f6e8;
        case 0x11f6ecu: goto label_11f6ec;
        case 0x11f6f0u: goto label_11f6f0;
        case 0x11f6f4u: goto label_11f6f4;
        case 0x11f6f8u: goto label_11f6f8;
        case 0x11f6fcu: goto label_11f6fc;
        case 0x11f700u: goto label_11f700;
        case 0x11f704u: goto label_11f704;
        case 0x11f708u: goto label_11f708;
        case 0x11f70cu: goto label_11f70c;
        case 0x11f710u: goto label_11f710;
        case 0x11f714u: goto label_11f714;
        case 0x11f718u: goto label_11f718;
        case 0x11f71cu: goto label_11f71c;
        case 0x11f720u: goto label_11f720;
        case 0x11f724u: goto label_11f724;
        case 0x11f728u: goto label_11f728;
        case 0x11f72cu: goto label_11f72c;
        case 0x11f730u: goto label_11f730;
        case 0x11f734u: goto label_11f734;
        case 0x11f738u: goto label_11f738;
        case 0x11f73cu: goto label_11f73c;
        case 0x11f740u: goto label_11f740;
        case 0x11f744u: goto label_11f744;
        case 0x11f748u: goto label_11f748;
        case 0x11f74cu: goto label_11f74c;
        case 0x11f750u: goto label_11f750;
        case 0x11f754u: goto label_11f754;
        case 0x11f758u: goto label_11f758;
        case 0x11f75cu: goto label_11f75c;
        case 0x11f760u: goto label_11f760;
        case 0x11f764u: goto label_11f764;
        case 0x11f768u: goto label_11f768;
        case 0x11f76cu: goto label_11f76c;
        case 0x11f770u: goto label_11f770;
        case 0x11f774u: goto label_11f774;
        case 0x11f778u: goto label_11f778;
        case 0x11f77cu: goto label_11f77c;
        case 0x11f780u: goto label_11f780;
        case 0x11f784u: goto label_11f784;
        case 0x11f788u: goto label_11f788;
        case 0x11f78cu: goto label_11f78c;
        case 0x11f790u: goto label_11f790;
        case 0x11f794u: goto label_11f794;
        case 0x11f798u: goto label_11f798;
        case 0x11f79cu: goto label_11f79c;
        case 0x11f7a0u: goto label_11f7a0;
        case 0x11f7a4u: goto label_11f7a4;
        case 0x11f7a8u: goto label_11f7a8;
        case 0x11f7acu: goto label_11f7ac;
        case 0x11f7b0u: goto label_11f7b0;
        case 0x11f7b4u: goto label_11f7b4;
        case 0x11f7b8u: goto label_11f7b8;
        case 0x11f7bcu: goto label_11f7bc;
        case 0x11f7c0u: goto label_11f7c0;
        case 0x11f7c4u: goto label_11f7c4;
        case 0x11f7c8u: goto label_11f7c8;
        case 0x11f7ccu: goto label_11f7cc;
        case 0x11f7d0u: goto label_11f7d0;
        case 0x11f7d4u: goto label_11f7d4;
        case 0x11f7d8u: goto label_11f7d8;
        case 0x11f7dcu: goto label_11f7dc;
        case 0x11f7e0u: goto label_11f7e0;
        case 0x11f7e4u: goto label_11f7e4;
        case 0x11f7e8u: goto label_11f7e8;
        case 0x11f7ecu: goto label_11f7ec;
        case 0x11f7f0u: goto label_11f7f0;
        case 0x11f7f4u: goto label_11f7f4;
        case 0x11f7f8u: goto label_11f7f8;
        case 0x11f7fcu: goto label_11f7fc;
        case 0x11f800u: goto label_11f800;
        case 0x11f804u: goto label_11f804;
        case 0x11f808u: goto label_11f808;
        case 0x11f80cu: goto label_11f80c;
        case 0x11f810u: goto label_11f810;
        case 0x11f814u: goto label_11f814;
        case 0x11f818u: goto label_11f818;
        case 0x11f81cu: goto label_11f81c;
        case 0x11f820u: goto label_11f820;
        case 0x11f824u: goto label_11f824;
        case 0x11f828u: goto label_11f828;
        case 0x11f82cu: goto label_11f82c;
        case 0x11f830u: goto label_11f830;
        case 0x11f834u: goto label_11f834;
        case 0x11f838u: goto label_11f838;
        case 0x11f83cu: goto label_11f83c;
        case 0x11f840u: goto label_11f840;
        case 0x11f844u: goto label_11f844;
        case 0x11f848u: goto label_11f848;
        case 0x11f84cu: goto label_11f84c;
        case 0x11f850u: goto label_11f850;
        case 0x11f854u: goto label_11f854;
        case 0x11f858u: goto label_11f858;
        case 0x11f85cu: goto label_11f85c;
        case 0x11f860u: goto label_11f860;
        case 0x11f864u: goto label_11f864;
        case 0x11f868u: goto label_11f868;
        case 0x11f86cu: goto label_11f86c;
        case 0x11f870u: goto label_11f870;
        case 0x11f874u: goto label_11f874;
        case 0x11f878u: goto label_11f878;
        case 0x11f87cu: goto label_11f87c;
        case 0x11f880u: goto label_11f880;
        case 0x11f884u: goto label_11f884;
        case 0x11f888u: goto label_11f888;
        case 0x11f88cu: goto label_11f88c;
        case 0x11f890u: goto label_11f890;
        case 0x11f894u: goto label_11f894;
        case 0x11f898u: goto label_11f898;
        case 0x11f89cu: goto label_11f89c;
        case 0x11f8a0u: goto label_11f8a0;
        case 0x11f8a4u: goto label_11f8a4;
        case 0x11f8a8u: goto label_11f8a8;
        case 0x11f8acu: goto label_11f8ac;
        case 0x11f8b0u: goto label_11f8b0;
        case 0x11f8b4u: goto label_11f8b4;
        case 0x11f8b8u: goto label_11f8b8;
        case 0x11f8bcu: goto label_11f8bc;
        case 0x11f8c0u: goto label_11f8c0;
        case 0x11f8c4u: goto label_11f8c4;
        case 0x11f8c8u: goto label_11f8c8;
        case 0x11f8ccu: goto label_11f8cc;
        case 0x11f8d0u: goto label_11f8d0;
        case 0x11f8d4u: goto label_11f8d4;
        case 0x11f8d8u: goto label_11f8d8;
        case 0x11f8dcu: goto label_11f8dc;
        case 0x11f8e0u: goto label_11f8e0;
        case 0x11f8e4u: goto label_11f8e4;
        case 0x11f8e8u: goto label_11f8e8;
        case 0x11f8ecu: goto label_11f8ec;
        case 0x11f8f0u: goto label_11f8f0;
        case 0x11f8f4u: goto label_11f8f4;
        case 0x11f8f8u: goto label_11f8f8;
        case 0x11f8fcu: goto label_11f8fc;
        case 0x11f900u: goto label_11f900;
        case 0x11f904u: goto label_11f904;
        case 0x11f908u: goto label_11f908;
        case 0x11f90cu: goto label_11f90c;
        case 0x11f910u: goto label_11f910;
        case 0x11f914u: goto label_11f914;
        case 0x11f918u: goto label_11f918;
        case 0x11f91cu: goto label_11f91c;
        case 0x11f920u: goto label_11f920;
        case 0x11f924u: goto label_11f924;
        case 0x11f928u: goto label_11f928;
        case 0x11f92cu: goto label_11f92c;
        case 0x11f930u: goto label_11f930;
        case 0x11f934u: goto label_11f934;
        case 0x11f938u: goto label_11f938;
        case 0x11f93cu: goto label_11f93c;
        case 0x11f940u: goto label_11f940;
        case 0x11f944u: goto label_11f944;
        case 0x11f948u: goto label_11f948;
        case 0x11f94cu: goto label_11f94c;
        case 0x11f950u: goto label_11f950;
        case 0x11f954u: goto label_11f954;
        case 0x11f958u: goto label_11f958;
        case 0x11f95cu: goto label_11f95c;
        case 0x11f960u: goto label_11f960;
        case 0x11f964u: goto label_11f964;
        case 0x11f968u: goto label_11f968;
        case 0x11f96cu: goto label_11f96c;
        case 0x11f970u: goto label_11f970;
        case 0x11f974u: goto label_11f974;
        case 0x11f978u: goto label_11f978;
        case 0x11f97cu: goto label_11f97c;
        case 0x11f980u: goto label_11f980;
        case 0x11f984u: goto label_11f984;
        case 0x11f988u: goto label_11f988;
        case 0x11f98cu: goto label_11f98c;
        case 0x11f990u: goto label_11f990;
        case 0x11f994u: goto label_11f994;
        case 0x11f998u: goto label_11f998;
        case 0x11f99cu: goto label_11f99c;
        case 0x11f9a0u: goto label_11f9a0;
        case 0x11f9a4u: goto label_11f9a4;
        case 0x11f9a8u: goto label_11f9a8;
        case 0x11f9acu: goto label_11f9ac;
        case 0x11f9b0u: goto label_11f9b0;
        case 0x11f9b4u: goto label_11f9b4;
        case 0x11f9b8u: goto label_11f9b8;
        case 0x11f9bcu: goto label_11f9bc;
        case 0x11f9c0u: goto label_11f9c0;
        case 0x11f9c4u: goto label_11f9c4;
        case 0x11f9c8u: goto label_11f9c8;
        case 0x11f9ccu: goto label_11f9cc;
        case 0x11f9d0u: goto label_11f9d0;
        case 0x11f9d4u: goto label_11f9d4;
        case 0x11f9d8u: goto label_11f9d8;
        case 0x11f9dcu: goto label_11f9dc;
        case 0x11f9e0u: goto label_11f9e0;
        case 0x11f9e4u: goto label_11f9e4;
        case 0x11f9e8u: goto label_11f9e8;
        case 0x11f9ecu: goto label_11f9ec;
        case 0x11f9f0u: goto label_11f9f0;
        case 0x11f9f4u: goto label_11f9f4;
        case 0x11f9f8u: goto label_11f9f8;
        case 0x11f9fcu: goto label_11f9fc;
        case 0x11fa00u: goto label_11fa00;
        case 0x11fa04u: goto label_11fa04;
        case 0x11fa08u: goto label_11fa08;
        case 0x11fa0cu: goto label_11fa0c;
        case 0x11fa10u: goto label_11fa10;
        case 0x11fa14u: goto label_11fa14;
        case 0x11fa18u: goto label_11fa18;
        case 0x11fa1cu: goto label_11fa1c;
        case 0x11fa20u: goto label_11fa20;
        case 0x11fa24u: goto label_11fa24;
        case 0x11fa28u: goto label_11fa28;
        case 0x11fa2cu: goto label_11fa2c;
        case 0x11fa30u: goto label_11fa30;
        case 0x11fa34u: goto label_11fa34;
        case 0x11fa38u: goto label_11fa38;
        case 0x11fa3cu: goto label_11fa3c;
        case 0x11fa40u: goto label_11fa40;
        case 0x11fa44u: goto label_11fa44;
        case 0x11fa48u: goto label_11fa48;
        case 0x11fa4cu: goto label_11fa4c;
        case 0x11fa50u: goto label_11fa50;
        case 0x11fa54u: goto label_11fa54;
        case 0x11fa58u: goto label_11fa58;
        case 0x11fa5cu: goto label_11fa5c;
        case 0x11fa60u: goto label_11fa60;
        case 0x11fa64u: goto label_11fa64;
        case 0x11fa68u: goto label_11fa68;
        case 0x11fa6cu: goto label_11fa6c;
        default: break;
    }

    ctx->pc = 0x11ec70u;

label_11ec70:
    // 0x11ec70: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x11ec70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
label_11ec74:
    // 0x11ec74: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x11ec74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_11ec78:
    // 0x11ec78: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x11ec78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_11ec7c:
    // 0x11ec7c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x11ec7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_11ec80:
    // 0x11ec80: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x11ec80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_11ec84:
    // 0x11ec84: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x11ec84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_11ec88:
    // 0x11ec88: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x11ec88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_11ec8c:
    // 0x11ec8c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x11ec8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_11ec90:
    // 0x11ec90: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x11ec90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_11ec94:
    // 0x11ec94: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x11ec94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_11ec98:
    // 0x11ec98: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x11ec98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_11ec9c:
    // 0x11ec9c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x11ec9cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_11eca0:
    // 0x11eca0: 0xafa40120  sw          $a0, 0x120($sp)
    ctx->pc = 0x11eca0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 4));
label_11eca4:
    // 0x11eca4: 0xa3a50130  sb          $a1, 0x130($sp)
    ctx->pc = 0x11eca4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 304), (uint8_t)GPR_U32(ctx, 5));
label_11eca8:
    // 0x11eca8: 0x8fa40120  lw          $a0, 0x120($sp)
    ctx->pc = 0x11eca8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_11ecac:
    // 0x11ecac: 0x93a50130  lbu         $a1, 0x130($sp)
    ctx->pc = 0x11ecacu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 304)));
label_11ecb0:
    // 0x11ecb0: 0xc08edb0  jal         func_23B6C0
label_11ecb4:
    if (ctx->pc == 0x11ECB4u) {
        ctx->pc = 0x11ECB8u;
        goto label_11ecb8;
    }
    ctx->pc = 0x11ECB0u;
    SET_GPR_U32(ctx, 31, 0x11ECB8u);
    ctx->pc = 0x23B6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B6C0u, 0x11ECB0u, 0x11ECB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11ECB8u;
label_11ecb8:
    // 0x11ecb8: 0x93a50130  lbu         $a1, 0x130($sp)
    ctx->pc = 0x11ecb8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 304)));
label_11ecbc:
    // 0x11ecbc: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
label_11ecc0:
    if (ctx->pc == 0x11ECC0u) {
        ctx->pc = 0x11ECC4u;
        goto label_11ecc4;
    }
    ctx->pc = 0x11ECBCu;
    {
        const bool branch_taken_0x11ecbc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x11ecbc) {
            ctx->pc = 0x11ECDCu;
            goto label_11ecdc;
        }
    }
    ctx->pc = 0x11ECC4u;
label_11ecc4:
    // 0x11ecc4: 0x8fa40120  lw          $a0, 0x120($sp)
    ctx->pc = 0x11ecc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_11ecc8:
    // 0x11ecc8: 0xc0406f0  jal         func_101BC0
label_11eccc:
    if (ctx->pc == 0x11ECCCu) {
        ctx->pc = 0x11ECD0u;
        goto label_11ecd0;
    }
    ctx->pc = 0x11ECC8u;
    SET_GPR_U32(ctx, 31, 0x11ECD0u);
    ctx->pc = 0x101BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101BC0u, 0x11ECC8u, 0x11ECD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11ECD0u;
label_11ecd0:
    // 0x11ecd0: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_11ecd4:
    if (ctx->pc == 0x11ECD4u) {
        ctx->pc = 0x11ECD8u;
        goto label_11ecd8;
    }
    ctx->pc = 0x11ECD0u;
    {
        const bool branch_taken_0x11ecd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11ecd0) {
            ctx->pc = 0x11ECDCu;
            goto label_11ecdc;
        }
    }
    ctx->pc = 0x11ECD8u;
label_11ecd8:
    // 0x11ecd8: 0xaf80b9e0  sw          $zero, -0x4620($gp)
    ctx->pc = 0x11ecd8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949344), GPR_U32(ctx, 0));
label_11ecdc:
    // 0x11ecdc: 0x8f84b9dc  lw          $a0, -0x4624($gp)
    ctx->pc = 0x11ecdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949340)));
label_11ece0:
    // 0x11ece0: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x11ece0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_11ece4:
    // 0x11ece4: 0xc0553d4  jal         func_154F50
label_11ece8:
    if (ctx->pc == 0x11ECE8u) {
        ctx->pc = 0x11ECECu;
        goto label_11ecec;
    }
    ctx->pc = 0x11ECE4u;
    SET_GPR_U32(ctx, 31, 0x11ECECu);
    ctx->pc = 0x154F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154F50u, 0x11ECE4u, 0x11ECECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11ECECu;
label_11ecec:
    // 0x11ecec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11ececu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11ecf0:
    // 0x11ecf0: 0x93a50130  lbu         $a1, 0x130($sp)
    ctx->pc = 0x11ecf0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 304)));
label_11ecf4:
    // 0x11ecf4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x11ecf4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_11ecf8:
    // 0x11ecf8: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x11ecf8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_11ecfc:
    // 0x11ecfc: 0x320f809  jalr        $t9
label_11ed00:
    if (ctx->pc == 0x11ED00u) {
        ctx->pc = 0x11ED04u;
        goto label_11ed04;
    }
    ctx->pc = 0x11ECFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x11ED04u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11ECFCu, 0x11ED04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11ED04u;
label_11ed04:
    // 0x11ed04: 0x8f85b9d8  lw          $a1, -0x4628($gp)
    ctx->pc = 0x11ed04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949336)));
label_11ed08:
    // 0x11ed08: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x11ed08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_11ed0c:
    // 0x11ed0c: 0xc050c5c  jal         func_143170
label_11ed10:
    if (ctx->pc == 0x11ED10u) {
        ctx->pc = 0x11ED14u;
        goto label_11ed14;
    }
    ctx->pc = 0x11ED0Cu;
    SET_GPR_U32(ctx, 31, 0x11ED14u);
    ctx->pc = 0x143170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143170u, 0x11ED0Cu, 0x11ED14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11ED14u;
label_11ed14:
    // 0x11ed14: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x11ed14u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11ed18:
    // 0x11ed18: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x11ed18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_11ed1c:
    // 0x11ed1c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x11ed1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11ed20:
    // 0x11ed20: 0xc04fbd0  jal         func_13EF40
label_11ed24:
    if (ctx->pc == 0x11ED24u) {
        ctx->pc = 0x11ED28u;
        goto label_11ed28;
    }
    ctx->pc = 0x11ED20u;
    SET_GPR_U32(ctx, 31, 0x11ED28u);
    ctx->pc = 0x13EF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13EF40u, 0x11ED20u, 0x11ED28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11ED28u;
label_11ed28:
    // 0x11ed28: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x11ed28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11ed2c:
    // 0x11ed2c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x11ed2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_11ed30:
    // 0x11ed30: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x11ed30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_11ed34:
    // 0x11ed34: 0xc04fbd0  jal         func_13EF40
label_11ed38:
    if (ctx->pc == 0x11ED38u) {
        ctx->pc = 0x11ED3Cu;
        goto label_11ed3c;
    }
    ctx->pc = 0x11ED34u;
    SET_GPR_U32(ctx, 31, 0x11ED3Cu);
    ctx->pc = 0x13EF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13EF40u, 0x11ED34u, 0x11ED3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11ED3Cu;
label_11ed3c:
    // 0x11ed3c: 0xafa2011c  sw          $v0, 0x11C($sp)
    ctx->pc = 0x11ed3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 2));
label_11ed40:
    // 0x11ed40: 0x8fa4011c  lw          $a0, 0x11C($sp)
    ctx->pc = 0x11ed40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
label_11ed44:
    // 0x11ed44: 0xc04e308  jal         func_138C20
label_11ed48:
    if (ctx->pc == 0x11ED48u) {
        ctx->pc = 0x11ED4Cu;
        goto label_11ed4c;
    }
    ctx->pc = 0x11ED44u;
    SET_GPR_U32(ctx, 31, 0x11ED4Cu);
    ctx->pc = 0x138C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138C20u, 0x11ED44u, 0x11ED4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11ED4Cu;
label_11ed4c:
    // 0x11ed4c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x11ed4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_11ed50:
    // 0x11ed50: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x11ed50u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11ed54:
    // 0x11ed54: 0x8f82bbb4  lw          $v0, -0x444C($gp)
    ctx->pc = 0x11ed54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
label_11ed58:
    // 0x11ed58: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x11ed58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_11ed5c:
    // 0x11ed5c: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x11ed5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_11ed60:
    // 0x11ed60: 0x24a51e58  addiu       $a1, $a1, 0x1E58
    ctx->pc = 0x11ed60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7768));
label_11ed64:
    // 0x11ed64: 0x278689d8  addiu       $a2, $gp, -0x7628
    ctx->pc = 0x11ed64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937048));
label_11ed68:
    // 0x11ed68: 0xc04206c  jal         func_1081B0
label_11ed6c:
    if (ctx->pc == 0x11ED6Cu) {
        ctx->pc = 0x11ED70u;
        goto label_11ed70;
    }
    ctx->pc = 0x11ED68u;
    SET_GPR_U32(ctx, 31, 0x11ED70u);
    ctx->pc = 0x1081B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1081B0u, 0x11ED68u, 0x11ED70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11ED70u;
label_11ed70:
    // 0x11ed70: 0xafa20118  sw          $v0, 0x118($sp)
    ctx->pc = 0x11ed70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 2));
label_11ed74:
    // 0x11ed74: 0x93a20130  lbu         $v0, 0x130($sp)
    ctx->pc = 0x11ed74u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 304)));
label_11ed78:
    // 0x11ed78: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x11ed78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_11ed7c:
    // 0x11ed7c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x11ed7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11ed80:
    // 0x11ed80: 0x1485017e  bne         $a0, $a1, . + 4 + (0x17E << 2)
label_11ed84:
    if (ctx->pc == 0x11ED84u) {
        ctx->pc = 0x11ED88u;
        goto label_11ed88;
    }
    ctx->pc = 0x11ED80u;
    {
        const bool branch_taken_0x11ed80 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        if (branch_taken_0x11ed80) {
            ctx->pc = 0x11F37Cu;
            goto label_11f37c;
        }
    }
    ctx->pc = 0x11ED88u;
label_11ed88:
    // 0x11ed88: 0x8f82bbb4  lw          $v0, -0x444C($gp)
    ctx->pc = 0x11ed88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
label_11ed8c:
    // 0x11ed8c: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x11ed8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_11ed90:
    // 0x11ed90: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x11ed90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_11ed94:
    // 0x11ed94: 0x24a51e70  addiu       $a1, $a1, 0x1E70
    ctx->pc = 0x11ed94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7792));
label_11ed98:
    // 0x11ed98: 0x278689d8  addiu       $a2, $gp, -0x7628
    ctx->pc = 0x11ed98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937048));
label_11ed9c:
    // 0x11ed9c: 0xc04206c  jal         func_1081B0
label_11eda0:
    if (ctx->pc == 0x11EDA0u) {
        ctx->pc = 0x11EDA4u;
        goto label_11eda4;
    }
    ctx->pc = 0x11ED9Cu;
    SET_GPR_U32(ctx, 31, 0x11EDA4u);
    ctx->pc = 0x1081B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1081B0u, 0x11ED9Cu, 0x11EDA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11EDA4u;
label_11eda4:
    // 0x11eda4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11eda4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11eda8:
    // 0x11eda8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11eda8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11edac:
    // 0x11edac: 0x278589e0  addiu       $a1, $gp, -0x7620
    ctx->pc = 0x11edacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937056));
label_11edb0:
    // 0x11edb0: 0xc0bc824  jal         func_2F2090
label_11edb4:
    if (ctx->pc == 0x11EDB4u) {
        ctx->pc = 0x11EDB8u;
        goto label_11edb8;
    }
    ctx->pc = 0x11EDB0u;
    SET_GPR_U32(ctx, 31, 0x11EDB8u);
    ctx->pc = 0x2F2090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2090u, 0x11EDB0u, 0x11EDB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11EDB8u;
label_11edb8:
    // 0x11edb8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_11edbc:
    if (ctx->pc == 0x11EDBCu) {
        ctx->pc = 0x11EDC0u;
        goto label_11edc0;
    }
    ctx->pc = 0x11EDB8u;
    {
        const bool branch_taken_0x11edb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11edb8) {
            ctx->pc = 0x11EDE8u;
            goto label_11ede8;
        }
    }
    ctx->pc = 0x11EDC0u;
label_11edc0:
    // 0x11edc0: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x11edc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
label_11edc4:
    // 0x11edc4: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x11edc4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_11edc8:
    // 0x11edc8: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x11edc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
label_11edcc:
    // 0x11edcc: 0x278589e8  addiu       $a1, $gp, -0x7618
    ctx->pc = 0x11edccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937064));
label_11edd0:
    // 0x11edd0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x11edd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11edd4:
    // 0x11edd4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x11edd4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11edd8:
    // 0x11edd8: 0xc08f6a0  jal         func_23DA80
label_11eddc:
    if (ctx->pc == 0x11EDDCu) {
        ctx->pc = 0x11EDE0u;
        goto label_11ede0;
    }
    ctx->pc = 0x11EDD8u;
    SET_GPR_U32(ctx, 31, 0x11EDE0u);
    ctx->pc = 0x23DA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23DA80u, 0x11EDD8u, 0x11EDE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11EDE0u;
label_11ede0:
    // 0x11ede0: 0x100000ee  b           . + 4 + (0xEE << 2)
label_11ede4:
    if (ctx->pc == 0x11EDE4u) {
        ctx->pc = 0x11EDE8u;
        goto label_11ede8;
    }
    ctx->pc = 0x11EDE0u;
    {
        const bool branch_taken_0x11ede0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11ede0) {
            ctx->pc = 0x11F19Cu;
            goto label_11f19c;
        }
    }
    ctx->pc = 0x11EDE8u;
label_11ede8:
    // 0x11ede8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11ede8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11edec:
    // 0x11edec: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x11edecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_11edf0:
    // 0x11edf0: 0x24a51e90  addiu       $a1, $a1, 0x1E90
    ctx->pc = 0x11edf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7824));
label_11edf4:
    // 0x11edf4: 0xc0bc824  jal         func_2F2090
label_11edf8:
    if (ctx->pc == 0x11EDF8u) {
        ctx->pc = 0x11EDFCu;
        goto label_11edfc;
    }
    ctx->pc = 0x11EDF4u;
    SET_GPR_U32(ctx, 31, 0x11EDFCu);
    ctx->pc = 0x2F2090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2090u, 0x11EDF4u, 0x11EDFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11EDFCu;
label_11edfc:
    // 0x11edfc: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_11ee00:
    if (ctx->pc == 0x11EE00u) {
        ctx->pc = 0x11EE04u;
        goto label_11ee04;
    }
    ctx->pc = 0x11EDFCu;
    {
        const bool branch_taken_0x11edfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11edfc) {
            ctx->pc = 0x11EE2Cu;
            goto label_11ee2c;
        }
    }
    ctx->pc = 0x11EE04u;
label_11ee04:
    // 0x11ee04: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x11ee04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_11ee08:
    // 0x11ee08: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x11ee08u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_11ee0c:
    // 0x11ee0c: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x11ee0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
label_11ee10:
    // 0x11ee10: 0x278589f0  addiu       $a1, $gp, -0x7610
    ctx->pc = 0x11ee10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937072));
label_11ee14:
    // 0x11ee14: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x11ee14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11ee18:
    // 0x11ee18: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x11ee18u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11ee1c:
    // 0x11ee1c: 0xc08f6a0  jal         func_23DA80
label_11ee20:
    if (ctx->pc == 0x11EE20u) {
        ctx->pc = 0x11EE24u;
        goto label_11ee24;
    }
    ctx->pc = 0x11EE1Cu;
    SET_GPR_U32(ctx, 31, 0x11EE24u);
    ctx->pc = 0x23DA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23DA80u, 0x11EE1Cu, 0x11EE24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11EE24u;
label_11ee24:
    // 0x11ee24: 0x100000dd  b           . + 4 + (0xDD << 2)
label_11ee28:
    if (ctx->pc == 0x11EE28u) {
        ctx->pc = 0x11EE2Cu;
        goto label_11ee2c;
    }
    ctx->pc = 0x11EE24u;
    {
        const bool branch_taken_0x11ee24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11ee24) {
            ctx->pc = 0x11F19Cu;
            goto label_11f19c;
        }
    }
    ctx->pc = 0x11EE2Cu;
label_11ee2c:
    // 0x11ee2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11ee2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11ee30:
    // 0x11ee30: 0x278589f8  addiu       $a1, $gp, -0x7608
    ctx->pc = 0x11ee30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937080));
label_11ee34:
    // 0x11ee34: 0xc0bc824  jal         func_2F2090
label_11ee38:
    if (ctx->pc == 0x11EE38u) {
        ctx->pc = 0x11EE3Cu;
        goto label_11ee3c;
    }
    ctx->pc = 0x11EE34u;
    SET_GPR_U32(ctx, 31, 0x11EE3Cu);
    ctx->pc = 0x2F2090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2090u, 0x11EE34u, 0x11EE3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11EE3Cu;
label_11ee3c:
    // 0x11ee3c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_11ee40:
    if (ctx->pc == 0x11EE40u) {
        ctx->pc = 0x11EE44u;
        goto label_11ee44;
    }
    ctx->pc = 0x11EE3Cu;
    {
        const bool branch_taken_0x11ee3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11ee3c) {
            ctx->pc = 0x11EE70u;
            goto label_11ee70;
        }
    }
    ctx->pc = 0x11EE44u;
label_11ee44:
    // 0x11ee44: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x11ee44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_11ee48:
    // 0x11ee48: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x11ee48u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_11ee4c:
    // 0x11ee4c: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x11ee4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
label_11ee50:
    // 0x11ee50: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x11ee50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_11ee54:
    // 0x11ee54: 0x24a51ea0  addiu       $a1, $a1, 0x1EA0
    ctx->pc = 0x11ee54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7840));
label_11ee58:
    // 0x11ee58: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x11ee58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11ee5c:
    // 0x11ee5c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x11ee5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11ee60:
    // 0x11ee60: 0xc08f6a0  jal         func_23DA80
label_11ee64:
    if (ctx->pc == 0x11EE64u) {
        ctx->pc = 0x11EE68u;
        goto label_11ee68;
    }
    ctx->pc = 0x11EE60u;
    SET_GPR_U32(ctx, 31, 0x11EE68u);
    ctx->pc = 0x23DA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23DA80u, 0x11EE60u, 0x11EE68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11EE68u;
label_11ee68:
    // 0x11ee68: 0x100000cc  b           . + 4 + (0xCC << 2)
label_11ee6c:
    if (ctx->pc == 0x11EE6Cu) {
        ctx->pc = 0x11EE70u;
        goto label_11ee70;
    }
    ctx->pc = 0x11EE68u;
    {
        const bool branch_taken_0x11ee68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11ee68) {
            ctx->pc = 0x11F19Cu;
            goto label_11f19c;
        }
    }
    ctx->pc = 0x11EE70u;
label_11ee70:
    // 0x11ee70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11ee70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11ee74:
    // 0x11ee74: 0x27858a00  addiu       $a1, $gp, -0x7600
    ctx->pc = 0x11ee74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937088));
label_11ee78:
    // 0x11ee78: 0xc0bc824  jal         func_2F2090
label_11ee7c:
    if (ctx->pc == 0x11EE7Cu) {
        ctx->pc = 0x11EE80u;
        goto label_11ee80;
    }
    ctx->pc = 0x11EE78u;
    SET_GPR_U32(ctx, 31, 0x11EE80u);
    ctx->pc = 0x2F2090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2090u, 0x11EE78u, 0x11EE80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11EE80u;
label_11ee80:
    // 0x11ee80: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_11ee84:
    if (ctx->pc == 0x11EE84u) {
        ctx->pc = 0x11EE88u;
        goto label_11ee88;
    }
    ctx->pc = 0x11EE80u;
    {
        const bool branch_taken_0x11ee80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11ee80) {
            ctx->pc = 0x11EEB4u;
            goto label_11eeb4;
        }
    }
    ctx->pc = 0x11EE88u;
label_11ee88:
    // 0x11ee88: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x11ee88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_11ee8c:
    // 0x11ee8c: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x11ee8cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_11ee90:
    // 0x11ee90: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x11ee90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
label_11ee94:
    // 0x11ee94: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x11ee94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_11ee98:
    // 0x11ee98: 0x24a51eb0  addiu       $a1, $a1, 0x1EB0
    ctx->pc = 0x11ee98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7856));
label_11ee9c:
    // 0x11ee9c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x11ee9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11eea0:
    // 0x11eea0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x11eea0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11eea4:
    // 0x11eea4: 0xc08f6a0  jal         func_23DA80
label_11eea8:
    if (ctx->pc == 0x11EEA8u) {
        ctx->pc = 0x11EEACu;
        goto label_11eeac;
    }
    ctx->pc = 0x11EEA4u;
    SET_GPR_U32(ctx, 31, 0x11EEACu);
    ctx->pc = 0x23DA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23DA80u, 0x11EEA4u, 0x11EEACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11EEACu;
label_11eeac:
    // 0x11eeac: 0x100000bb  b           . + 4 + (0xBB << 2)
label_11eeb0:
    if (ctx->pc == 0x11EEB0u) {
        ctx->pc = 0x11EEB4u;
        goto label_11eeb4;
    }
    ctx->pc = 0x11EEACu;
    {
        const bool branch_taken_0x11eeac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11eeac) {
            ctx->pc = 0x11F19Cu;
            goto label_11f19c;
        }
    }
    ctx->pc = 0x11EEB4u;
label_11eeb4:
    // 0x11eeb4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11eeb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11eeb8:
    // 0x11eeb8: 0x27858a08  addiu       $a1, $gp, -0x75F8
    ctx->pc = 0x11eeb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937096));
label_11eebc:
    // 0x11eebc: 0xc0bc824  jal         func_2F2090
label_11eec0:
    if (ctx->pc == 0x11EEC0u) {
        ctx->pc = 0x11EEC4u;
        goto label_11eec4;
    }
    ctx->pc = 0x11EEBCu;
    SET_GPR_U32(ctx, 31, 0x11EEC4u);
    ctx->pc = 0x2F2090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2090u, 0x11EEBCu, 0x11EEC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11EEC4u;
label_11eec4:
    // 0x11eec4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_11eec8:
    if (ctx->pc == 0x11EEC8u) {
        ctx->pc = 0x11EECCu;
        goto label_11eecc;
    }
    ctx->pc = 0x11EEC4u;
    {
        const bool branch_taken_0x11eec4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11eec4) {
            ctx->pc = 0x11EEF4u;
            goto label_11eef4;
        }
    }
    ctx->pc = 0x11EECCu;
label_11eecc:
    // 0x11eecc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x11eeccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_11eed0:
    // 0x11eed0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x11eed0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_11eed4:
    // 0x11eed4: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x11eed4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
label_11eed8:
    // 0x11eed8: 0x27858a10  addiu       $a1, $gp, -0x75F0
    ctx->pc = 0x11eed8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937104));
label_11eedc:
    // 0x11eedc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x11eedcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11eee0:
    // 0x11eee0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x11eee0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11eee4:
    // 0x11eee4: 0xc08f6a0  jal         func_23DA80
label_11eee8:
    if (ctx->pc == 0x11EEE8u) {
        ctx->pc = 0x11EEECu;
        goto label_11eeec;
    }
    ctx->pc = 0x11EEE4u;
    SET_GPR_U32(ctx, 31, 0x11EEECu);
    ctx->pc = 0x23DA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23DA80u, 0x11EEE4u, 0x11EEECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11EEECu;
label_11eeec:
    // 0x11eeec: 0x100000ab  b           . + 4 + (0xAB << 2)
label_11eef0:
    if (ctx->pc == 0x11EEF0u) {
        ctx->pc = 0x11EEF4u;
        goto label_11eef4;
    }
    ctx->pc = 0x11EEECu;
    {
        const bool branch_taken_0x11eeec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11eeec) {
            ctx->pc = 0x11F19Cu;
            goto label_11f19c;
        }
    }
    ctx->pc = 0x11EEF4u;
label_11eef4:
    // 0x11eef4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11eef4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11eef8:
    // 0x11eef8: 0x27858a18  addiu       $a1, $gp, -0x75E8
    ctx->pc = 0x11eef8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937112));
label_11eefc:
    // 0x11eefc: 0xc0bc824  jal         func_2F2090
label_11ef00:
    if (ctx->pc == 0x11EF00u) {
        ctx->pc = 0x11EF04u;
        goto label_11ef04;
    }
    ctx->pc = 0x11EEFCu;
    SET_GPR_U32(ctx, 31, 0x11EF04u);
    ctx->pc = 0x2F2090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2090u, 0x11EEFCu, 0x11EF04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11EF04u;
label_11ef04:
    // 0x11ef04: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_11ef08:
    if (ctx->pc == 0x11EF08u) {
        ctx->pc = 0x11EF0Cu;
        goto label_11ef0c;
    }
    ctx->pc = 0x11EF04u;
    {
        const bool branch_taken_0x11ef04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11ef04) {
            ctx->pc = 0x11EF34u;
            goto label_11ef34;
        }
    }
    ctx->pc = 0x11EF0Cu;
label_11ef0c:
    // 0x11ef0c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x11ef0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_11ef10:
    // 0x11ef10: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x11ef10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_11ef14:
    // 0x11ef14: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x11ef14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
label_11ef18:
    // 0x11ef18: 0x27858a18  addiu       $a1, $gp, -0x75E8
    ctx->pc = 0x11ef18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937112));
label_11ef1c:
    // 0x11ef1c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x11ef1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11ef20:
    // 0x11ef20: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x11ef20u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11ef24:
    // 0x11ef24: 0xc08f6a0  jal         func_23DA80
label_11ef28:
    if (ctx->pc == 0x11EF28u) {
        ctx->pc = 0x11EF2Cu;
        goto label_11ef2c;
    }
    ctx->pc = 0x11EF24u;
    SET_GPR_U32(ctx, 31, 0x11EF2Cu);
    ctx->pc = 0x23DA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23DA80u, 0x11EF24u, 0x11EF2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11EF2Cu;
label_11ef2c:
    // 0x11ef2c: 0x1000009b  b           . + 4 + (0x9B << 2)
label_11ef30:
    if (ctx->pc == 0x11EF30u) {
        ctx->pc = 0x11EF34u;
        goto label_11ef34;
    }
    ctx->pc = 0x11EF2Cu;
    {
        const bool branch_taken_0x11ef2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11ef2c) {
            ctx->pc = 0x11F19Cu;
            goto label_11f19c;
        }
    }
    ctx->pc = 0x11EF34u;
label_11ef34:
    // 0x11ef34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11ef34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11ef38:
    // 0x11ef38: 0x27858a20  addiu       $a1, $gp, -0x75E0
    ctx->pc = 0x11ef38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937120));
label_11ef3c:
    // 0x11ef3c: 0xc0bc824  jal         func_2F2090
label_11ef40:
    if (ctx->pc == 0x11EF40u) {
        ctx->pc = 0x11EF44u;
        goto label_11ef44;
    }
    ctx->pc = 0x11EF3Cu;
    SET_GPR_U32(ctx, 31, 0x11EF44u);
    ctx->pc = 0x2F2090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2090u, 0x11EF3Cu, 0x11EF44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11EF44u;
label_11ef44:
    // 0x11ef44: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_11ef48:
    if (ctx->pc == 0x11EF48u) {
        ctx->pc = 0x11EF4Cu;
        goto label_11ef4c;
    }
    ctx->pc = 0x11EF44u;
    {
        const bool branch_taken_0x11ef44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11ef44) {
            ctx->pc = 0x11EF64u;
            goto label_11ef64;
        }
    }
    ctx->pc = 0x11EF4Cu;
label_11ef4c:
    // 0x11ef4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11ef4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11ef50:
    // 0x11ef50: 0x27858a28  addiu       $a1, $gp, -0x75D8
    ctx->pc = 0x11ef50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937128));
label_11ef54:
    // 0x11ef54: 0xc0bc824  jal         func_2F2090
label_11ef58:
    if (ctx->pc == 0x11EF58u) {
        ctx->pc = 0x11EF5Cu;
        goto label_11ef5c;
    }
    ctx->pc = 0x11EF54u;
    SET_GPR_U32(ctx, 31, 0x11EF5Cu);
    ctx->pc = 0x2F2090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2090u, 0x11EF54u, 0x11EF5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11EF5Cu;
label_11ef5c:
    // 0x11ef5c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_11ef60:
    if (ctx->pc == 0x11EF60u) {
        ctx->pc = 0x11EF64u;
        goto label_11ef64;
    }
    ctx->pc = 0x11EF5Cu;
    {
        const bool branch_taken_0x11ef5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11ef5c) {
            ctx->pc = 0x11EF8Cu;
            goto label_11ef8c;
        }
    }
    ctx->pc = 0x11EF64u;
label_11ef64:
    // 0x11ef64: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x11ef64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_11ef68:
    // 0x11ef68: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x11ef68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_11ef6c:
    // 0x11ef6c: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x11ef6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
label_11ef70:
    // 0x11ef70: 0x27858a20  addiu       $a1, $gp, -0x75E0
    ctx->pc = 0x11ef70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937120));
label_11ef74:
    // 0x11ef74: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x11ef74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11ef78:
    // 0x11ef78: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x11ef78u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11ef7c:
    // 0x11ef7c: 0xc08f6a0  jal         func_23DA80
label_11ef80:
    if (ctx->pc == 0x11EF80u) {
        ctx->pc = 0x11EF84u;
        goto label_11ef84;
    }
    ctx->pc = 0x11EF7Cu;
    SET_GPR_U32(ctx, 31, 0x11EF84u);
    ctx->pc = 0x23DA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23DA80u, 0x11EF7Cu, 0x11EF84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11EF84u;
label_11ef84:
    // 0x11ef84: 0x10000085  b           . + 4 + (0x85 << 2)
label_11ef88:
    if (ctx->pc == 0x11EF88u) {
        ctx->pc = 0x11EF8Cu;
        goto label_11ef8c;
    }
    ctx->pc = 0x11EF84u;
    {
        const bool branch_taken_0x11ef84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11ef84) {
            ctx->pc = 0x11F19Cu;
            goto label_11f19c;
        }
    }
    ctx->pc = 0x11EF8Cu;
label_11ef8c:
    // 0x11ef8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11ef8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11ef90:
    // 0x11ef90: 0x27858a30  addiu       $a1, $gp, -0x75D0
    ctx->pc = 0x11ef90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937136));
label_11ef94:
    // 0x11ef94: 0xc0bc824  jal         func_2F2090
label_11ef98:
    if (ctx->pc == 0x11EF98u) {
        ctx->pc = 0x11EF9Cu;
        goto label_11ef9c;
    }
    ctx->pc = 0x11EF94u;
    SET_GPR_U32(ctx, 31, 0x11EF9Cu);
    ctx->pc = 0x2F2090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2090u, 0x11EF94u, 0x11EF9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11EF9Cu;
label_11ef9c:
    // 0x11ef9c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_11efa0:
    if (ctx->pc == 0x11EFA0u) {
        ctx->pc = 0x11EFA4u;
        goto label_11efa4;
    }
    ctx->pc = 0x11EF9Cu;
    {
        const bool branch_taken_0x11ef9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11ef9c) {
            ctx->pc = 0x11EFBCu;
            goto label_11efbc;
        }
    }
    ctx->pc = 0x11EFA4u;
label_11efa4:
    // 0x11efa4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11efa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11efa8:
    // 0x11efa8: 0x27858a38  addiu       $a1, $gp, -0x75C8
    ctx->pc = 0x11efa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937144));
label_11efac:
    // 0x11efac: 0xc0bc824  jal         func_2F2090
label_11efb0:
    if (ctx->pc == 0x11EFB0u) {
        ctx->pc = 0x11EFB4u;
        goto label_11efb4;
    }
    ctx->pc = 0x11EFACu;
    SET_GPR_U32(ctx, 31, 0x11EFB4u);
    ctx->pc = 0x2F2090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2090u, 0x11EFACu, 0x11EFB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11EFB4u;
label_11efb4:
    // 0x11efb4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_11efb8:
    if (ctx->pc == 0x11EFB8u) {
        ctx->pc = 0x11EFBCu;
        goto label_11efbc;
    }
    ctx->pc = 0x11EFB4u;
    {
        const bool branch_taken_0x11efb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11efb4) {
            ctx->pc = 0x11EFECu;
            goto label_11efec;
        }
    }
    ctx->pc = 0x11EFBCu;
label_11efbc:
    // 0x11efbc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x11efbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_11efc0:
    // 0x11efc0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x11efc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_11efc4:
    // 0x11efc4: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x11efc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
label_11efc8:
    // 0x11efc8: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x11efc8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_11efcc:
    // 0x11efcc: 0x24a51ec0  addiu       $a1, $a1, 0x1EC0
    ctx->pc = 0x11efccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7872));
label_11efd0:
    // 0x11efd0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x11efd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11efd4:
    // 0x11efd4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x11efd4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11efd8:
    // 0x11efd8: 0xc08f6a0  jal         func_23DA80
label_11efdc:
    if (ctx->pc == 0x11EFDCu) {
        ctx->pc = 0x11EFE0u;
        goto label_11efe0;
    }
    ctx->pc = 0x11EFD8u;
    SET_GPR_U32(ctx, 31, 0x11EFE0u);
    ctx->pc = 0x23DA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23DA80u, 0x11EFD8u, 0x11EFE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11EFE0u;
label_11efe0:
    // 0x11efe0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x11efe0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11efe4:
    // 0x11efe4: 0x1000006d  b           . + 4 + (0x6D << 2)
label_11efe8:
    if (ctx->pc == 0x11EFE8u) {
        ctx->pc = 0x11EFECu;
        goto label_11efec;
    }
    ctx->pc = 0x11EFE4u;
    {
        const bool branch_taken_0x11efe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11efe4) {
            ctx->pc = 0x11F19Cu;
            goto label_11f19c;
        }
    }
    ctx->pc = 0x11EFECu;
label_11efec:
    // 0x11efec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11efecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11eff0:
    // 0x11eff0: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x11eff0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_11eff4:
    // 0x11eff4: 0x24a51ed0  addiu       $a1, $a1, 0x1ED0
    ctx->pc = 0x11eff4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7888));
label_11eff8:
    // 0x11eff8: 0xc0bc824  jal         func_2F2090
label_11effc:
    if (ctx->pc == 0x11EFFCu) {
        ctx->pc = 0x11F000u;
        goto label_11f000;
    }
    ctx->pc = 0x11EFF8u;
    SET_GPR_U32(ctx, 31, 0x11F000u);
    ctx->pc = 0x2F2090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2090u, 0x11EFF8u, 0x11F000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F000u;
label_11f000:
    // 0x11f000: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x11f000u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11f004:
    // 0x11f004: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_11f008:
    if (ctx->pc == 0x11F008u) {
        ctx->pc = 0x11F00Cu;
        goto label_11f00c;
    }
    ctx->pc = 0x11F004u;
    {
        const bool branch_taken_0x11f004 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x11f004) {
            ctx->pc = 0x11F034u;
            goto label_11f034;
        }
    }
    ctx->pc = 0x11F00Cu;
label_11f00c:
    // 0x11f00c: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x11f00cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
label_11f010:
    // 0x11f010: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x11f010u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_11f014:
    // 0x11f014: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x11f014u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
label_11f018:
    // 0x11f018: 0x27858a40  addiu       $a1, $gp, -0x75C0
    ctx->pc = 0x11f018u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937152));
label_11f01c:
    // 0x11f01c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x11f01cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11f020:
    // 0x11f020: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x11f020u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11f024:
    // 0x11f024: 0xc08f6a0  jal         func_23DA80
label_11f028:
    if (ctx->pc == 0x11F028u) {
        ctx->pc = 0x11F02Cu;
        goto label_11f02c;
    }
    ctx->pc = 0x11F024u;
    SET_GPR_U32(ctx, 31, 0x11F02Cu);
    ctx->pc = 0x23DA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23DA80u, 0x11F024u, 0x11F02Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F02Cu;
label_11f02c:
    // 0x11f02c: 0x1000005b  b           . + 4 + (0x5B << 2)
label_11f030:
    if (ctx->pc == 0x11F030u) {
        ctx->pc = 0x11F034u;
        goto label_11f034;
    }
    ctx->pc = 0x11F02Cu;
    {
        const bool branch_taken_0x11f02c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11f02c) {
            ctx->pc = 0x11F19Cu;
            goto label_11f19c;
        }
    }
    ctx->pc = 0x11F034u;
label_11f034:
    // 0x11f034: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11f034u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11f038:
    // 0x11f038: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x11f038u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_11f03c:
    // 0x11f03c: 0x24a51ee0  addiu       $a1, $a1, 0x1EE0
    ctx->pc = 0x11f03cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7904));
label_11f040:
    // 0x11f040: 0xc0bc824  jal         func_2F2090
label_11f044:
    if (ctx->pc == 0x11F044u) {
        ctx->pc = 0x11F048u;
        goto label_11f048;
    }
    ctx->pc = 0x11F040u;
    SET_GPR_U32(ctx, 31, 0x11F048u);
    ctx->pc = 0x2F2090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2090u, 0x11F040u, 0x11F048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F048u;
label_11f048:
    // 0x11f048: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x11f048u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11f04c:
    // 0x11f04c: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
label_11f050:
    if (ctx->pc == 0x11F050u) {
        ctx->pc = 0x11F054u;
        goto label_11f054;
    }
    ctx->pc = 0x11F04Cu;
    {
        const bool branch_taken_0x11f04c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x11f04c) {
            ctx->pc = 0x11F080u;
            goto label_11f080;
        }
    }
    ctx->pc = 0x11F054u;
label_11f054:
    // 0x11f054: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x11f054u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_11f058:
    // 0x11f058: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x11f058u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_11f05c:
    // 0x11f05c: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x11f05cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
label_11f060:
    // 0x11f060: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x11f060u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_11f064:
    // 0x11f064: 0x24a51ef0  addiu       $a1, $a1, 0x1EF0
    ctx->pc = 0x11f064u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7920));
label_11f068:
    // 0x11f068: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x11f068u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11f06c:
    // 0x11f06c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x11f06cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11f070:
    // 0x11f070: 0xc08f6a0  jal         func_23DA80
label_11f074:
    if (ctx->pc == 0x11F074u) {
        ctx->pc = 0x11F078u;
        goto label_11f078;
    }
    ctx->pc = 0x11F070u;
    SET_GPR_U32(ctx, 31, 0x11F078u);
    ctx->pc = 0x23DA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23DA80u, 0x11F070u, 0x11F078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F078u;
label_11f078:
    // 0x11f078: 0x10000048  b           . + 4 + (0x48 << 2)
label_11f07c:
    if (ctx->pc == 0x11F07Cu) {
        ctx->pc = 0x11F080u;
        goto label_11f080;
    }
    ctx->pc = 0x11F078u;
    {
        const bool branch_taken_0x11f078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11f078) {
            ctx->pc = 0x11F19Cu;
            goto label_11f19c;
        }
    }
    ctx->pc = 0x11F080u;
label_11f080:
    // 0x11f080: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11f080u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11f084:
    // 0x11f084: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x11f084u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_11f088:
    // 0x11f088: 0x24a51f00  addiu       $a1, $a1, 0x1F00
    ctx->pc = 0x11f088u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7936));
label_11f08c:
    // 0x11f08c: 0xc0bc824  jal         func_2F2090
label_11f090:
    if (ctx->pc == 0x11F090u) {
        ctx->pc = 0x11F094u;
        goto label_11f094;
    }
    ctx->pc = 0x11F08Cu;
    SET_GPR_U32(ctx, 31, 0x11F094u);
    ctx->pc = 0x2F2090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2090u, 0x11F08Cu, 0x11F094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F094u;
label_11f094:
    // 0x11f094: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_11f098:
    if (ctx->pc == 0x11F098u) {
        ctx->pc = 0x11F09Cu;
        goto label_11f09c;
    }
    ctx->pc = 0x11F094u;
    {
        const bool branch_taken_0x11f094 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11f094) {
            ctx->pc = 0x11F0D0u;
            goto label_11f0d0;
        }
    }
    ctx->pc = 0x11F09Cu;
label_11f09c:
    // 0x11f09c: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x11f09cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
label_11f0a0:
    // 0x11f0a0: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x11f0a0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_11f0a4:
    // 0x11f0a4: 0x8f85bbec  lw          $a1, -0x4414($gp)
    ctx->pc = 0x11f0a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
label_11f0a8:
    // 0x11f0a8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x11f0a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_11f0ac:
    // 0x11f0ac: 0x3c06004e  lui         $a2, 0x4E
    ctx->pc = 0x11f0acu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)78 << 16));
label_11f0b0:
    // 0x11f0b0: 0x24c61f10  addiu       $a2, $a2, 0x1F10
    ctx->pc = 0x11f0b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 7952));
label_11f0b4:
    // 0x11f0b4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x11f0b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_11f0b8:
    // 0x11f0b8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x11f0b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11f0bc:
    // 0x11f0bc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x11f0bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11f0c0:
    // 0x11f0c0: 0xc08f6a0  jal         func_23DA80
label_11f0c4:
    if (ctx->pc == 0x11F0C4u) {
        ctx->pc = 0x11F0C8u;
        goto label_11f0c8;
    }
    ctx->pc = 0x11F0C0u;
    SET_GPR_U32(ctx, 31, 0x11F0C8u);
    ctx->pc = 0x23DA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23DA80u, 0x11F0C0u, 0x11F0C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F0C8u;
label_11f0c8:
    // 0x11f0c8: 0x10000034  b           . + 4 + (0x34 << 2)
label_11f0cc:
    if (ctx->pc == 0x11F0CCu) {
        ctx->pc = 0x11F0D0u;
        goto label_11f0d0;
    }
    ctx->pc = 0x11F0C8u;
    {
        const bool branch_taken_0x11f0c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11f0c8) {
            ctx->pc = 0x11F19Cu;
            goto label_11f19c;
        }
    }
    ctx->pc = 0x11F0D0u;
label_11f0d0:
    // 0x11f0d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11f0d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11f0d4:
    // 0x11f0d4: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x11f0d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_11f0d8:
    // 0x11f0d8: 0x24a51f20  addiu       $a1, $a1, 0x1F20
    ctx->pc = 0x11f0d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7968));
label_11f0dc:
    // 0x11f0dc: 0xc0bc824  jal         func_2F2090
label_11f0e0:
    if (ctx->pc == 0x11F0E0u) {
        ctx->pc = 0x11F0E4u;
        goto label_11f0e4;
    }
    ctx->pc = 0x11F0DCu;
    SET_GPR_U32(ctx, 31, 0x11F0E4u);
    ctx->pc = 0x2F2090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2090u, 0x11F0DCu, 0x11F0E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F0E4u;
label_11f0e4:
    // 0x11f0e4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_11f0e8:
    if (ctx->pc == 0x11F0E8u) {
        ctx->pc = 0x11F0ECu;
        goto label_11f0ec;
    }
    ctx->pc = 0x11F0E4u;
    {
        const bool branch_taken_0x11f0e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11f0e4) {
            ctx->pc = 0x11F118u;
            goto label_11f118;
        }
    }
    ctx->pc = 0x11F0ECu;
label_11f0ec:
    // 0x11f0ec: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x11f0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_11f0f0:
    // 0x11f0f0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x11f0f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_11f0f4:
    // 0x11f0f4: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x11f0f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
label_11f0f8:
    // 0x11f0f8: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x11f0f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_11f0fc:
    // 0x11f0fc: 0x24a51f30  addiu       $a1, $a1, 0x1F30
    ctx->pc = 0x11f0fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7984));
label_11f100:
    // 0x11f100: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x11f100u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11f104:
    // 0x11f104: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x11f104u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11f108:
    // 0x11f108: 0xc08f6a0  jal         func_23DA80
label_11f10c:
    if (ctx->pc == 0x11F10Cu) {
        ctx->pc = 0x11F110u;
        goto label_11f110;
    }
    ctx->pc = 0x11F108u;
    SET_GPR_U32(ctx, 31, 0x11F110u);
    ctx->pc = 0x23DA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23DA80u, 0x11F108u, 0x11F110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F110u;
label_11f110:
    // 0x11f110: 0x10000022  b           . + 4 + (0x22 << 2)
label_11f114:
    if (ctx->pc == 0x11F114u) {
        ctx->pc = 0x11F118u;
        goto label_11f118;
    }
    ctx->pc = 0x11F110u;
    {
        const bool branch_taken_0x11f110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11f110) {
            ctx->pc = 0x11F19Cu;
            goto label_11f19c;
        }
    }
    ctx->pc = 0x11F118u;
label_11f118:
    // 0x11f118: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11f118u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11f11c:
    // 0x11f11c: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x11f11cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_11f120:
    // 0x11f120: 0x24a51f40  addiu       $a1, $a1, 0x1F40
    ctx->pc = 0x11f120u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8000));
label_11f124:
    // 0x11f124: 0xc0bc824  jal         func_2F2090
label_11f128:
    if (ctx->pc == 0x11F128u) {
        ctx->pc = 0x11F12Cu;
        goto label_11f12c;
    }
    ctx->pc = 0x11F124u;
    SET_GPR_U32(ctx, 31, 0x11F12Cu);
    ctx->pc = 0x2F2090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2090u, 0x11F124u, 0x11F12Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F12Cu;
label_11f12c:
    // 0x11f12c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_11f130:
    if (ctx->pc == 0x11F130u) {
        ctx->pc = 0x11F134u;
        goto label_11f134;
    }
    ctx->pc = 0x11F12Cu;
    {
        const bool branch_taken_0x11f12c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11f12c) {
            ctx->pc = 0x11F160u;
            goto label_11f160;
        }
    }
    ctx->pc = 0x11F134u;
label_11f134:
    // 0x11f134: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x11f134u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_11f138:
    // 0x11f138: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x11f138u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_11f13c:
    // 0x11f13c: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x11f13cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
label_11f140:
    // 0x11f140: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x11f140u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_11f144:
    // 0x11f144: 0x24a51f50  addiu       $a1, $a1, 0x1F50
    ctx->pc = 0x11f144u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8016));
label_11f148:
    // 0x11f148: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x11f148u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11f14c:
    // 0x11f14c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x11f14cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11f150:
    // 0x11f150: 0xc08f6a0  jal         func_23DA80
label_11f154:
    if (ctx->pc == 0x11F154u) {
        ctx->pc = 0x11F158u;
        goto label_11f158;
    }
    ctx->pc = 0x11F150u;
    SET_GPR_U32(ctx, 31, 0x11F158u);
    ctx->pc = 0x23DA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23DA80u, 0x11F150u, 0x11F158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F158u;
label_11f158:
    // 0x11f158: 0x10000010  b           . + 4 + (0x10 << 2)
label_11f15c:
    if (ctx->pc == 0x11F15Cu) {
        ctx->pc = 0x11F160u;
        goto label_11f160;
    }
    ctx->pc = 0x11F158u;
    {
        const bool branch_taken_0x11f158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11f158) {
            ctx->pc = 0x11F19Cu;
            goto label_11f19c;
        }
    }
    ctx->pc = 0x11F160u;
label_11f160:
    // 0x11f160: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11f160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11f164:
    // 0x11f164: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x11f164u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_11f168:
    // 0x11f168: 0x24a51f60  addiu       $a1, $a1, 0x1F60
    ctx->pc = 0x11f168u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8032));
label_11f16c:
    // 0x11f16c: 0xc0bc824  jal         func_2F2090
label_11f170:
    if (ctx->pc == 0x11F170u) {
        ctx->pc = 0x11F174u;
        goto label_11f174;
    }
    ctx->pc = 0x11F16Cu;
    SET_GPR_U32(ctx, 31, 0x11F174u);
    ctx->pc = 0x2F2090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2090u, 0x11F16Cu, 0x11F174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F174u;
label_11f174:
    // 0x11f174: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_11f178:
    if (ctx->pc == 0x11F178u) {
        ctx->pc = 0x11F17Cu;
        goto label_11f17c;
    }
    ctx->pc = 0x11F174u;
    {
        const bool branch_taken_0x11f174 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11f174) {
            ctx->pc = 0x11F19Cu;
            goto label_11f19c;
        }
    }
    ctx->pc = 0x11F17Cu;
label_11f17c:
    // 0x11f17c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x11f17cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_11f180:
    // 0x11f180: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x11f180u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_11f184:
    // 0x11f184: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x11f184u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
label_11f188:
    // 0x11f188: 0x27858a48  addiu       $a1, $gp, -0x75B8
    ctx->pc = 0x11f188u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937160));
label_11f18c:
    // 0x11f18c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x11f18cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11f190:
    // 0x11f190: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x11f190u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11f194:
    // 0x11f194: 0xc08f6a0  jal         func_23DA80
label_11f198:
    if (ctx->pc == 0x11F198u) {
        ctx->pc = 0x11F19Cu;
        goto label_11f19c;
    }
    ctx->pc = 0x11F194u;
    SET_GPR_U32(ctx, 31, 0x11F19Cu);
    ctx->pc = 0x23DA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23DA80u, 0x11F194u, 0x11F19Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F19Cu;
label_11f19c:
    // 0x11f19c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x11f19cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_11f1a0:
    // 0x11f1a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11f1a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11f1a4:
    // 0x11f1a4: 0x93a60130  lbu         $a2, 0x130($sp)
    ctx->pc = 0x11f1a4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 304)));
label_11f1a8:
    // 0x11f1a8: 0xc04fbf8  jal         func_13EFE0
label_11f1ac:
    if (ctx->pc == 0x11F1ACu) {
        ctx->pc = 0x11F1B0u;
        goto label_11f1b0;
    }
    ctx->pc = 0x11F1A8u;
    SET_GPR_U32(ctx, 31, 0x11F1B0u);
    ctx->pc = 0x13EFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13EFE0u, 0x11F1A8u, 0x11F1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F1B0u;
label_11f1b0:
    // 0x11f1b0: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x11f1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_11f1b4:
    // 0x11f1b4: 0xac40003c  sw          $zero, 0x3C($v0)
    ctx->pc = 0x11f1b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 0));
label_11f1b8:
    // 0x11f1b8: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x11f1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_11f1bc:
    // 0x11f1bc: 0x8c42006c  lw          $v0, 0x6C($v0)
    ctx->pc = 0x11f1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_11f1c0:
    // 0x11f1c0: 0x10400051  beqz        $v0, . + 4 + (0x51 << 2)
label_11f1c4:
    if (ctx->pc == 0x11F1C4u) {
        ctx->pc = 0x11F1C8u;
        goto label_11f1c8;
    }
    ctx->pc = 0x11F1C0u;
    {
        const bool branch_taken_0x11f1c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11f1c0) {
            ctx->pc = 0x11F308u;
            goto label_11f308;
        }
    }
    ctx->pc = 0x11F1C8u;
label_11f1c8:
    // 0x11f1c8: 0x27a400f8  addiu       $a0, $sp, 0xF8
    ctx->pc = 0x11f1c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
label_11f1cc:
    // 0x11f1cc: 0x27858a50  addiu       $a1, $gp, -0x75B0
    ctx->pc = 0x11f1ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937168));
label_11f1d0:
    // 0x11f1d0: 0xc040304  jal         func_100C10
label_11f1d4:
    if (ctx->pc == 0x11F1D4u) {
        ctx->pc = 0x11F1D8u;
        goto label_11f1d8;
    }
    ctx->pc = 0x11F1D0u;
    SET_GPR_U32(ctx, 31, 0x11F1D8u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x11F1D0u, 0x11F1D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F1D8u;
label_11f1d8:
    // 0x11f1d8: 0x8f82bbb4  lw          $v0, -0x444C($gp)
    ctx->pc = 0x11f1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
label_11f1dc:
    // 0x11f1dc: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x11f1dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_11f1e0:
    // 0x11f1e0: 0x24050541  addiu       $a1, $zero, 0x541
    ctx->pc = 0x11f1e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1345));
label_11f1e4:
    // 0x11f1e4: 0x278689d8  addiu       $a2, $gp, -0x7628
    ctx->pc = 0x11f1e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937048));
label_11f1e8:
    // 0x11f1e8: 0xc041a50  jal         func_106940
label_11f1ec:
    if (ctx->pc == 0x11F1ECu) {
        ctx->pc = 0x11F1F0u;
        goto label_11f1f0;
    }
    ctx->pc = 0x11F1E8u;
    SET_GPR_U32(ctx, 31, 0x11F1F0u);
    ctx->pc = 0x106940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106940u, 0x11F1E8u, 0x11F1F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F1F0u;
label_11f1f0:
    // 0x11f1f0: 0x27a400f8  addiu       $a0, $sp, 0xF8
    ctx->pc = 0x11f1f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
label_11f1f4:
    // 0x11f1f4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11f1f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11f1f8:
    // 0x11f1f8: 0xc0424e8  jal         func_1093A0
label_11f1fc:
    if (ctx->pc == 0x11F1FCu) {
        ctx->pc = 0x11F200u;
        goto label_11f200;
    }
    ctx->pc = 0x11F1F8u;
    SET_GPR_U32(ctx, 31, 0x11F200u);
    ctx->pc = 0x1093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1093A0u, 0x11F1F8u, 0x11F200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F200u;
label_11f200:
    // 0x11f200: 0x27a400f8  addiu       $a0, $sp, 0xF8
    ctx->pc = 0x11f200u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
label_11f204:
    // 0x11f204: 0x27858a58  addiu       $a1, $gp, -0x75A8
    ctx->pc = 0x11f204u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937176));
label_11f208:
    // 0x11f208: 0xc0424e8  jal         func_1093A0
label_11f20c:
    if (ctx->pc == 0x11F20Cu) {
        ctx->pc = 0x11F210u;
        goto label_11f210;
    }
    ctx->pc = 0x11F208u;
    SET_GPR_U32(ctx, 31, 0x11F210u);
    ctx->pc = 0x1093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1093A0u, 0x11F208u, 0x11F210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F210u;
label_11f210:
    // 0x11f210: 0xc09a360  jal         func_268D80
label_11f214:
    if (ctx->pc == 0x11F214u) {
        ctx->pc = 0x11F218u;
        goto label_11f218;
    }
    ctx->pc = 0x11F210u;
    SET_GPR_U32(ctx, 31, 0x11F218u);
    ctx->pc = 0x268D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x268D80u, 0x11F210u, 0x11F218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F218u;
label_11f218:
    // 0x11f218: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x11f218u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11f21c:
    // 0x11f21c: 0x27a400f8  addiu       $a0, $sp, 0xF8
    ctx->pc = 0x11f21cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
label_11f220:
    // 0x11f220: 0xc041b38  jal         func_106CE0
label_11f224:
    if (ctx->pc == 0x11F224u) {
        ctx->pc = 0x11F228u;
        goto label_11f228;
    }
    ctx->pc = 0x11F220u;
    SET_GPR_U32(ctx, 31, 0x11F228u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x11F220u, 0x11F228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F228u;
label_11f228:
    // 0x11f228: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x11f228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_11f22c:
    // 0x11f22c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11f22cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11f230:
    // 0x11f230: 0xc09a364  jal         func_268D90
label_11f234:
    if (ctx->pc == 0x11F234u) {
        ctx->pc = 0x11F238u;
        goto label_11f238;
    }
    ctx->pc = 0x11F230u;
    SET_GPR_U32(ctx, 31, 0x11F238u);
    ctx->pc = 0x268D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x268D90u, 0x11F230u, 0x11F238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F238u;
label_11f238:
    // 0x11f238: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x11f238u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11f23c:
    // 0x11f23c: 0x16600021  bnez        $s3, . + 4 + (0x21 << 2)
label_11f240:
    if (ctx->pc == 0x11F240u) {
        ctx->pc = 0x11F244u;
        goto label_11f244;
    }
    ctx->pc = 0x11F23Cu;
    {
        const bool branch_taken_0x11f23c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x11f23c) {
            ctx->pc = 0x11F2C4u;
            goto label_11f2c4;
        }
    }
    ctx->pc = 0x11F244u;
label_11f244:
    // 0x11f244: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x11f244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_11f248:
    // 0x11f248: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x11f248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_11f24c:
    // 0x11f24c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x11f24cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_11f250:
    // 0x11f250: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
label_11f254:
    if (ctx->pc == 0x11F254u) {
        ctx->pc = 0x11F258u;
        goto label_11f258;
    }
    ctx->pc = 0x11F250u;
    {
        const bool branch_taken_0x11f250 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x11f250) {
            ctx->pc = 0x11F28Cu;
            goto label_11f28c;
        }
    }
    ctx->pc = 0x11F258u;
label_11f258:
    // 0x11f258: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11f258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11f25c:
    // 0x11f25c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_11f260:
    if (ctx->pc == 0x11F260u) {
        ctx->pc = 0x11F264u;
        goto label_11f264;
    }
    ctx->pc = 0x11F25Cu;
    {
        const bool branch_taken_0x11f25c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x11f25c) {
            ctx->pc = 0x11F26Cu;
            goto label_11f26c;
        }
    }
    ctx->pc = 0x11F264u;
label_11f264:
    // 0x11f264: 0x10000011  b           . + 4 + (0x11 << 2)
label_11f268:
    if (ctx->pc == 0x11F268u) {
        ctx->pc = 0x11F26Cu;
        goto label_11f26c;
    }
    ctx->pc = 0x11F264u;
    {
        const bool branch_taken_0x11f264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11f264) {
            ctx->pc = 0x11F2ACu;
            goto label_11f2ac;
        }
    }
    ctx->pc = 0x11F26Cu;
label_11f26c:
    // 0x11f26c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x11f26cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_11f270:
    // 0x11f270: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x11f270u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_11f274:
    // 0x11f274: 0x24a51f70  addiu       $a1, $a1, 0x1F70
    ctx->pc = 0x11f274u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8048));
label_11f278:
    // 0x11f278: 0xc09a364  jal         func_268D90
label_11f27c:
    if (ctx->pc == 0x11F27Cu) {
        ctx->pc = 0x11F280u;
        goto label_11f280;
    }
    ctx->pc = 0x11F278u;
    SET_GPR_U32(ctx, 31, 0x11F280u);
    ctx->pc = 0x268D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x268D90u, 0x11F278u, 0x11F280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F280u;
label_11f280:
    // 0x11f280: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x11f280u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11f284:
    // 0x11f284: 0x1000000f  b           . + 4 + (0xF << 2)
label_11f288:
    if (ctx->pc == 0x11F288u) {
        ctx->pc = 0x11F28Cu;
        goto label_11f28c;
    }
    ctx->pc = 0x11F284u;
    {
        const bool branch_taken_0x11f284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11f284) {
            ctx->pc = 0x11F2C4u;
            goto label_11f2c4;
        }
    }
    ctx->pc = 0x11F28Cu;
label_11f28c:
    // 0x11f28c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x11f28cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_11f290:
    // 0x11f290: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x11f290u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_11f294:
    // 0x11f294: 0x24a51f80  addiu       $a1, $a1, 0x1F80
    ctx->pc = 0x11f294u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8064));
label_11f298:
    // 0x11f298: 0xc09a364  jal         func_268D90
label_11f29c:
    if (ctx->pc == 0x11F29Cu) {
        ctx->pc = 0x11F2A0u;
        goto label_11f2a0;
    }
    ctx->pc = 0x11F298u;
    SET_GPR_U32(ctx, 31, 0x11F2A0u);
    ctx->pc = 0x268D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x268D90u, 0x11F298u, 0x11F2A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F2A0u;
label_11f2a0:
    // 0x11f2a0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x11f2a0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11f2a4:
    // 0x11f2a4: 0x10000007  b           . + 4 + (0x7 << 2)
label_11f2a8:
    if (ctx->pc == 0x11F2A8u) {
        ctx->pc = 0x11F2ACu;
        goto label_11f2ac;
    }
    ctx->pc = 0x11F2A4u;
    {
        const bool branch_taken_0x11f2a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11f2a4) {
            ctx->pc = 0x11F2C4u;
            goto label_11f2c4;
        }
    }
    ctx->pc = 0x11F2ACu;
label_11f2ac:
    // 0x11f2ac: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x11f2acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_11f2b0:
    // 0x11f2b0: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x11f2b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_11f2b4:
    // 0x11f2b4: 0x24a51f70  addiu       $a1, $a1, 0x1F70
    ctx->pc = 0x11f2b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8048));
label_11f2b8:
    // 0x11f2b8: 0xc09a364  jal         func_268D90
label_11f2bc:
    if (ctx->pc == 0x11F2BCu) {
        ctx->pc = 0x11F2C0u;
        goto label_11f2c0;
    }
    ctx->pc = 0x11F2B8u;
    SET_GPR_U32(ctx, 31, 0x11F2C0u);
    ctx->pc = 0x268D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x268D90u, 0x11F2B8u, 0x11F2C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F2C0u;
label_11f2c0:
    // 0x11f2c0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x11f2c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11f2c4:
    // 0x11f2c4: 0x27a400e8  addiu       $a0, $sp, 0xE8
    ctx->pc = 0x11f2c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
label_11f2c8:
    // 0x11f2c8: 0xc09ac08  jal         func_26B020
label_11f2cc:
    if (ctx->pc == 0x11F2CCu) {
        ctx->pc = 0x11F2D0u;
        goto label_11f2d0;
    }
    ctx->pc = 0x11F2C8u;
    SET_GPR_U32(ctx, 31, 0x11F2D0u);
    ctx->pc = 0x26B020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B020u, 0x11F2C8u, 0x11F2D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F2D0u;
label_11f2d0:
    // 0x11f2d0: 0xafb300ec  sw          $s3, 0xEC($sp)
    ctx->pc = 0x11f2d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 19));
label_11f2d4:
    // 0x11f2d4: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x11f2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
label_11f2d8:
    // 0x11f2d8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x11f2d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_11f2dc:
    // 0x11f2dc: 0x27a500e8  addiu       $a1, $sp, 0xE8
    ctx->pc = 0x11f2dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
label_11f2e0:
    // 0x11f2e0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x11f2e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11f2e4:
    // 0x11f2e4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x11f2e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11f2e8:
    // 0x11f2e8: 0xc0af028  jal         func_2BC0A0
label_11f2ec:
    if (ctx->pc == 0x11F2ECu) {
        ctx->pc = 0x11F2F0u;
        goto label_11f2f0;
    }
    ctx->pc = 0x11F2E8u;
    SET_GPR_U32(ctx, 31, 0x11F2F0u);
    ctx->pc = 0x2BC0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC0A0u, 0x11F2E8u, 0x11F2F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F2F0u;
label_11f2f0:
    // 0x11f2f0: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x11f2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_11f2f4:
    // 0x11f2f4: 0xac40006c  sw          $zero, 0x6C($v0)
    ctx->pc = 0x11f2f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 108), GPR_U32(ctx, 0));
label_11f2f8:
    // 0x11f2f8: 0x27a400f8  addiu       $a0, $sp, 0xF8
    ctx->pc = 0x11f2f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
label_11f2fc:
    // 0x11f2fc: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x11f2fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_11f300:
    // 0x11f300: 0xc0402d4  jal         func_100B50
label_11f304:
    if (ctx->pc == 0x11F304u) {
        ctx->pc = 0x11F308u;
        goto label_11f308;
    }
    ctx->pc = 0x11F300u;
    SET_GPR_U32(ctx, 31, 0x11F308u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x11F300u, 0x11F308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F308u;
label_11f308:
    // 0x11f308: 0xc05548c  jal         func_155230
label_11f30c:
    if (ctx->pc == 0x11F30Cu) {
        ctx->pc = 0x11F310u;
        goto label_11f310;
    }
    ctx->pc = 0x11F308u;
    SET_GPR_U32(ctx, 31, 0x11F310u);
    ctx->pc = 0x155230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155230u, 0x11F308u, 0x11F310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F310u;
label_11f310:
    // 0x11f310: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11f310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11f314:
    // 0x11f314: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x11f314u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_11f318:
    // 0x11f318: 0xc0553d4  jal         func_154F50
label_11f31c:
    if (ctx->pc == 0x11F31Cu) {
        ctx->pc = 0x11F320u;
        goto label_11f320;
    }
    ctx->pc = 0x11F318u;
    SET_GPR_U32(ctx, 31, 0x11F320u);
    ctx->pc = 0x154F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154F50u, 0x11F318u, 0x11F320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F320u;
label_11f320:
    // 0x11f320: 0xafa20114  sw          $v0, 0x114($sp)
    ctx->pc = 0x11f320u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 276), GPR_U32(ctx, 2));
label_11f324:
    // 0x11f324: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x11f324u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
label_11f328:
    // 0x11f328: 0xc047eb8  jal         func_11FAE0
label_11f32c:
    if (ctx->pc == 0x11F32Cu) {
        ctx->pc = 0x11F330u;
        goto label_11f330;
    }
    ctx->pc = 0x11F328u;
    SET_GPR_U32(ctx, 31, 0x11F330u);
    ctx->pc = 0x11FAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FAE0u, 0x11F328u, 0x11F330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F330u;
label_11f330:
    // 0x11f330: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11f330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11f334:
    // 0x11f334: 0xc047eb0  jal         func_11FAC0
label_11f338:
    if (ctx->pc == 0x11F338u) {
        ctx->pc = 0x11F33Cu;
        goto label_11f33c;
    }
    ctx->pc = 0x11F334u;
    SET_GPR_U32(ctx, 31, 0x11F33Cu);
    ctx->pc = 0x11FAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FAC0u, 0x11F334u, 0x11F33Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F33Cu;
label_11f33c:
    // 0x11f33c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x11f33cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_11f340:
    // 0x11f340: 0xafa20110  sw          $v0, 0x110($sp)
    ctx->pc = 0x11f340u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 2));
label_11f344:
    // 0x11f344: 0x8fa20114  lw          $v0, 0x114($sp)
    ctx->pc = 0x11f344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 276)));
label_11f348:
    // 0x11f348: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_11f34c:
    if (ctx->pc == 0x11F34Cu) {
        ctx->pc = 0x11F350u;
        goto label_11f350;
    }
    ctx->pc = 0x11F348u;
    {
        const bool branch_taken_0x11f348 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11f348) {
            ctx->pc = 0x11F3A8u;
            goto label_11f3a8;
        }
    }
    ctx->pc = 0x11F350u;
label_11f350:
    // 0x11f350: 0x8fa30110  lw          $v1, 0x110($sp)
    ctx->pc = 0x11f350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_11f354:
    // 0x11f354: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x11f354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_11f358:
    // 0x11f358: 0x14620013  bne         $v1, $v0, . + 4 + (0x13 << 2)
label_11f35c:
    if (ctx->pc == 0x11F35Cu) {
        ctx->pc = 0x11F360u;
        goto label_11f360;
    }
    ctx->pc = 0x11F358u;
    {
        const bool branch_taken_0x11f358 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x11f358) {
            ctx->pc = 0x11F3A8u;
            goto label_11f3a8;
        }
    }
    ctx->pc = 0x11F360u;
label_11f360:
    // 0x11f360: 0x8fa40114  lw          $a0, 0x114($sp)
    ctx->pc = 0x11f360u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 276)));
label_11f364:
    // 0x11f364: 0x24050046  addiu       $a1, $zero, 0x46
    ctx->pc = 0x11f364u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
label_11f368:
    // 0x11f368: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x11f368u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11f36c:
    // 0x11f36c: 0xc047e9c  jal         func_11FA70
label_11f370:
    if (ctx->pc == 0x11F370u) {
        ctx->pc = 0x11F374u;
        goto label_11f374;
    }
    ctx->pc = 0x11F36Cu;
    SET_GPR_U32(ctx, 31, 0x11F374u);
    ctx->pc = 0x11FA70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FA70u, 0x11F36Cu, 0x11F374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F374u;
label_11f374:
    // 0x11f374: 0x1000000c  b           . + 4 + (0xC << 2)
label_11f378:
    if (ctx->pc == 0x11F378u) {
        ctx->pc = 0x11F37Cu;
        goto label_11f37c;
    }
    ctx->pc = 0x11F374u;
    {
        const bool branch_taken_0x11f374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11f374) {
            ctx->pc = 0x11F3A8u;
            goto label_11f3a8;
        }
    }
    ctx->pc = 0x11F37Cu;
label_11f37c:
    // 0x11f37c: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x11f37cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_11f380:
    // 0x11f380: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x11f380u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_11f384:
    // 0x11f384: 0x8f84ba9c  lw          $a0, -0x4564($gp)
    ctx->pc = 0x11f384u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949532)));
label_11f388:
    // 0x11f388: 0xc0529b8  jal         func_14A6E0
label_11f38c:
    if (ctx->pc == 0x11F38Cu) {
        ctx->pc = 0x11F390u;
        goto label_11f390;
    }
    ctx->pc = 0x11F388u;
    SET_GPR_U32(ctx, 31, 0x11F390u);
    ctx->pc = 0x14A6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A6E0u, 0x11F388u, 0x11F390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F390u;
label_11f390:
    // 0x11f390: 0x8f84ba9c  lw          $a0, -0x4564($gp)
    ctx->pc = 0x11f390u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949532)));
label_11f394:
    // 0x11f394: 0xc052c00  jal         func_14B000
label_11f398:
    if (ctx->pc == 0x11F398u) {
        ctx->pc = 0x11F39Cu;
        goto label_11f39c;
    }
    ctx->pc = 0x11F394u;
    SET_GPR_U32(ctx, 31, 0x11F39Cu);
    ctx->pc = 0x14B000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B000u, 0x11F394u, 0x11F39Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F39Cu;
label_11f39c:
    // 0x11f39c: 0x8f84ba9c  lw          $a0, -0x4564($gp)
    ctx->pc = 0x11f39cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949532)));
label_11f3a0:
    // 0x11f3a0: 0xc052c38  jal         func_14B0E0
label_11f3a4:
    if (ctx->pc == 0x11F3A4u) {
        ctx->pc = 0x11F3A8u;
        goto label_11f3a8;
    }
    ctx->pc = 0x11F3A0u;
    SET_GPR_U32(ctx, 31, 0x11F3A8u);
    ctx->pc = 0x14B0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B0E0u, 0x11F3A0u, 0x11F3A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F3A8u;
label_11f3a8:
    // 0x11f3a8: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x11f3a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_11f3ac:
    // 0x11f3ac: 0xc050530  jal         func_1414C0
label_11f3b0:
    if (ctx->pc == 0x11F3B0u) {
        ctx->pc = 0x11F3B4u;
        goto label_11f3b4;
    }
    ctx->pc = 0x11F3ACu;
    SET_GPR_U32(ctx, 31, 0x11F3B4u);
    ctx->pc = 0x1414C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1414C0u, 0x11F3ACu, 0x11F3B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F3B4u;
label_11f3b4:
    // 0x11f3b4: 0x8f82bbb4  lw          $v0, -0x444C($gp)
    ctx->pc = 0x11f3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
label_11f3b8:
    // 0x11f3b8: 0x90420028  lbu         $v0, 0x28($v0)
    ctx->pc = 0x11f3b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 40)));
label_11f3bc:
    // 0x11f3bc: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x11f3bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_11f3c0:
    // 0x11f3c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11f3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11f3c4:
    // 0x11f3c4: 0x146200c8  bne         $v1, $v0, . + 4 + (0xC8 << 2)
label_11f3c8:
    if (ctx->pc == 0x11F3C8u) {
        ctx->pc = 0x11F3CCu;
        goto label_11f3cc;
    }
    ctx->pc = 0x11F3C4u;
    {
        const bool branch_taken_0x11f3c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x11f3c4) {
            ctx->pc = 0x11F6E8u;
            goto label_11f6e8;
        }
    }
    ctx->pc = 0x11F3CCu;
label_11f3cc:
    // 0x11f3cc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x11f3ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_11f3d0:
    // 0x11f3d0: 0xc04fc3c  jal         func_13F0F0
label_11f3d4:
    if (ctx->pc == 0x11F3D4u) {
        ctx->pc = 0x11F3D8u;
        goto label_11f3d8;
    }
    ctx->pc = 0x11F3D0u;
    SET_GPR_U32(ctx, 31, 0x11F3D8u);
    ctx->pc = 0x13F0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F0F0u, 0x11F3D0u, 0x11F3D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F3D8u;
label_11f3d8:
    // 0x11f3d8: 0xafa2010c  sw          $v0, 0x10C($sp)
    ctx->pc = 0x11f3d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 2));
label_11f3dc:
    // 0x11f3dc: 0x8fa4010c  lw          $a0, 0x10C($sp)
    ctx->pc = 0x11f3dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
label_11f3e0:
    // 0x11f3e0: 0xc0acb38  jal         func_2B2CE0
label_11f3e4:
    if (ctx->pc == 0x11F3E4u) {
        ctx->pc = 0x11F3E8u;
        goto label_11f3e8;
    }
    ctx->pc = 0x11F3E0u;
    SET_GPR_U32(ctx, 31, 0x11F3E8u);
    ctx->pc = 0x2B2CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2CE0u, 0x11F3E0u, 0x11F3E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F3E8u;
label_11f3e8:
    // 0x11f3e8: 0xafa20108  sw          $v0, 0x108($sp)
    ctx->pc = 0x11f3e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 2));
label_11f3ec:
    // 0x11f3ec: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x11f3ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11f3f0:
    // 0x11f3f0: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x11f3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
label_11f3f4:
    // 0x11f3f4: 0x1002000f  beq         $zero, $v0, . + 4 + (0xF << 2)
label_11f3f8:
    if (ctx->pc == 0x11F3F8u) {
        ctx->pc = 0x11F3FCu;
        goto label_11f3fc;
    }
    ctx->pc = 0x11F3F4u;
    {
        const bool branch_taken_0x11f3f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x11f3f4) {
            ctx->pc = 0x11F434u;
            goto label_11f434;
        }
    }
    ctx->pc = 0x11F3FCu;
label_11f3fc:
    // 0x11f3fc: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x11f3fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
label_11f400:
    // 0x11f400: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x11f400u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_11f404:
    // 0x11f404: 0xc085538  jal         func_2154E0
label_11f408:
    if (ctx->pc == 0x11F408u) {
        ctx->pc = 0x11F40Cu;
        goto label_11f40c;
    }
    ctx->pc = 0x11F404u;
    SET_GPR_U32(ctx, 31, 0x11F40Cu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x11F404u, 0x11F40Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F40Cu;
label_11f40c:
    // 0x11f40c: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x11f40cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11f410:
    // 0x11f410: 0x101e0008  beq         $zero, $fp, . + 4 + (0x8 << 2)
label_11f414:
    if (ctx->pc == 0x11F414u) {
        ctx->pc = 0x11F418u;
        goto label_11f418;
    }
    ctx->pc = 0x11F410u;
    {
        const bool branch_taken_0x11f410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 30));
        if (branch_taken_0x11f410) {
            ctx->pc = 0x11F434u;
            goto label_11f434;
        }
    }
    ctx->pc = 0x11F418u;
label_11f418:
    // 0x11f418: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x11f418u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_11f41c:
    // 0x11f41c: 0xc0a82cc  jal         func_2A0B30
label_11f420:
    if (ctx->pc == 0x11F420u) {
        ctx->pc = 0x11F424u;
        goto label_11f424;
    }
    ctx->pc = 0x11F41Cu;
    SET_GPR_U32(ctx, 31, 0x11F424u);
    ctx->pc = 0x2A0B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0B30u, 0x11F41Cu, 0x11F424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F424u;
label_11f424:
    // 0x11f424: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11f424u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11f428:
    // 0x11f428: 0xc121d18  jal         func_487460
label_11f42c:
    if (ctx->pc == 0x11F42Cu) {
        ctx->pc = 0x11F430u;
        goto label_11f430;
    }
    ctx->pc = 0x11F428u;
    SET_GPR_U32(ctx, 31, 0x11F430u);
    ctx->pc = 0x487460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x487460u, 0x11F428u, 0x11F430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F430u;
label_11f430:
    // 0x11f430: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x11f430u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11f434:
    // 0x11f434: 0x93a20130  lbu         $v0, 0x130($sp)
    ctx->pc = 0x11f434u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 304)));
label_11f438:
    // 0x11f438: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x11f438u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_11f43c:
    // 0x11f43c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11f43cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11f440:
    // 0x11f440: 0x14620080  bne         $v1, $v0, . + 4 + (0x80 << 2)
label_11f444:
    if (ctx->pc == 0x11F444u) {
        ctx->pc = 0x11F448u;
        goto label_11f448;
    }
    ctx->pc = 0x11F440u;
    {
        const bool branch_taken_0x11f440 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x11f440) {
            ctx->pc = 0x11F644u;
            goto label_11f644;
        }
    }
    ctx->pc = 0x11F448u;
label_11f448:
    // 0x11f448: 0x32c200ff  andi        $v0, $s6, 0xFF
    ctx->pc = 0x11f448u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
label_11f44c:
    // 0x11f44c: 0x14400076  bnez        $v0, . + 4 + (0x76 << 2)
label_11f450:
    if (ctx->pc == 0x11F450u) {
        ctx->pc = 0x11F454u;
        goto label_11f454;
    }
    ctx->pc = 0x11F44Cu;
    {
        const bool branch_taken_0x11f44c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11f44c) {
            ctx->pc = 0x11F628u;
            goto label_11f628;
        }
    }
    ctx->pc = 0x11F454u;
label_11f454:
    // 0x11f454: 0x3c0243a0  lui         $v0, 0x43A0
    ctx->pc = 0x11f454u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17312 << 16));
label_11f458:
    // 0x11f458: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x11f458u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_11f45c:
    // 0x11f45c: 0x0  nop
    ctx->pc = 0x11f45cu;
    // NOP
label_11f460:
    // 0x11f460: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x11f460u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_11f464:
    // 0x11f464: 0x3c0243c8  lui         $v0, 0x43C8
    ctx->pc = 0x11f464u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
label_11f468:
    // 0x11f468: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x11f468u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_11f46c:
    // 0x11f46c: 0x0  nop
    ctx->pc = 0x11f46cu;
    // NOP
label_11f470:
    // 0x11f470: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x11f470u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
label_11f474:
    // 0x11f474: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x11f474u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
label_11f478:
    // 0x11f478: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x11f478u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_11f47c:
    // 0x11f47c: 0x0  nop
    ctx->pc = 0x11f47cu;
    // NOP
label_11f480:
    // 0x11f480: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x11f480u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_11f484:
    // 0x11f484: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x11f484u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_11f488:
    // 0x11f488: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x11f488u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_11f48c:
    // 0x11f48c: 0x0  nop
    ctx->pc = 0x11f48cu;
    // NOP
label_11f490:
    // 0x11f490: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x11f490u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
label_11f494:
    // 0x11f494: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x11f494u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_11f498:
    // 0x11f498: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x11f498u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_11f49c:
    // 0x11f49c: 0x0  nop
    ctx->pc = 0x11f49cu;
    // NOP
label_11f4a0:
    // 0x11f4a0: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x11f4a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_11f4a4:
    // 0x11f4a4: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x11f4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
label_11f4a8:
    // 0x11f4a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x11f4a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_11f4ac:
    // 0x11f4ac: 0x0  nop
    ctx->pc = 0x11f4acu;
    // NOP
label_11f4b0:
    // 0x11f4b0: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x11f4b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_11f4b4:
    // 0x11f4b4: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x11f4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
label_11f4b8:
    // 0x11f4b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x11f4b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_11f4bc:
    // 0x11f4bc: 0x0  nop
    ctx->pc = 0x11f4bcu;
    // NOP
label_11f4c0:
    // 0x11f4c0: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x11f4c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
label_11f4c4:
    // 0x11f4c4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x11f4c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_11f4c8:
    // 0x11f4c8: 0x0  nop
    ctx->pc = 0x11f4c8u;
    // NOP
label_11f4cc:
    // 0x11f4cc: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x11f4ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_11f4d0:
    // 0x11f4d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11f4d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_11f4d4:
    // 0x11f4d4: 0xc050360  jal         func_140D80
label_11f4d8:
    if (ctx->pc == 0x11F4D8u) {
        ctx->pc = 0x11F4DCu;
        goto label_11f4dc;
    }
    ctx->pc = 0x11F4D4u;
    SET_GPR_U32(ctx, 31, 0x11F4DCu);
    ctx->pc = 0x140D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140D80u, 0x11F4D4u, 0x11F4DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F4DCu;
label_11f4dc:
    // 0x11f4dc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11f4dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11f4e0:
    // 0x11f4e0: 0xc097444  jal         func_25D110
label_11f4e4:
    if (ctx->pc == 0x11F4E4u) {
        ctx->pc = 0x11F4E8u;
        goto label_11f4e8;
    }
    ctx->pc = 0x11F4E0u;
    SET_GPR_U32(ctx, 31, 0x11F4E8u);
    ctx->pc = 0x25D110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D110u, 0x11F4E0u, 0x11F4E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F4E8u;
label_11f4e8:
    // 0x11f4e8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11f4e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11f4ec:
    // 0x11f4ec: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x11f4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_11f4f0:
    // 0x11f4f0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x11f4f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_11f4f4:
    // 0x11f4f4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x11f4f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_11f4f8:
    // 0x11f4f8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x11f4f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11f4fc:
    // 0x11f4fc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x11f4fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_11f500:
    // 0x11f500: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x11f500u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_11f504:
    // 0x11f504: 0x320f809  jalr        $t9
label_11f508:
    if (ctx->pc == 0x11F508u) {
        ctx->pc = 0x11F50Cu;
        goto label_11f50c;
    }
    ctx->pc = 0x11F504u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x11F50Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11F504u, 0x11F50Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11F50Cu;
label_11f50c:
    // 0x11f50c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11f50cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_11f510:
    // 0x11f510: 0xc050360  jal         func_140D80
label_11f514:
    if (ctx->pc == 0x11F514u) {
        ctx->pc = 0x11F518u;
        goto label_11f518;
    }
    ctx->pc = 0x11F510u;
    SET_GPR_U32(ctx, 31, 0x11F518u);
    ctx->pc = 0x140D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140D80u, 0x11F510u, 0x11F518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F518u;
label_11f518:
    // 0x11f518: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11f518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11f51c:
    // 0x11f51c: 0xc097444  jal         func_25D110
label_11f520:
    if (ctx->pc == 0x11F520u) {
        ctx->pc = 0x11F524u;
        goto label_11f524;
    }
    ctx->pc = 0x11F51Cu;
    SET_GPR_U32(ctx, 31, 0x11F524u);
    ctx->pc = 0x25D110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D110u, 0x11F51Cu, 0x11F524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F524u;
label_11f524:
    // 0x11f524: 0x3c04447a  lui         $a0, 0x447A
    ctx->pc = 0x11f524u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17530 << 16));
label_11f528:
    // 0x11f528: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x11f528u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_11f52c:
    // 0x11f52c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11f52cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11f530:
    // 0x11f530: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x11f530u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_11f534:
    // 0x11f534: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x11f534u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_11f538:
    // 0x11f538: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x11f538u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_11f53c:
    // 0x11f53c: 0x320f809  jalr        $t9
label_11f540:
    if (ctx->pc == 0x11F540u) {
        ctx->pc = 0x11F544u;
        goto label_11f544;
    }
    ctx->pc = 0x11F53Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x11F544u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11F53Cu, 0x11F544u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11F544u;
label_11f544:
    // 0x11f544: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11f544u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_11f548:
    // 0x11f548: 0xc050360  jal         func_140D80
label_11f54c:
    if (ctx->pc == 0x11F54Cu) {
        ctx->pc = 0x11F550u;
        goto label_11f550;
    }
    ctx->pc = 0x11F548u;
    SET_GPR_U32(ctx, 31, 0x11F550u);
    ctx->pc = 0x140D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140D80u, 0x11F548u, 0x11F550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F550u;
label_11f550:
    // 0x11f550: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11f550u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11f554:
    // 0x11f554: 0xc097444  jal         func_25D110
label_11f558:
    if (ctx->pc == 0x11F558u) {
        ctx->pc = 0x11F55Cu;
        goto label_11f55c;
    }
    ctx->pc = 0x11F554u;
    SET_GPR_U32(ctx, 31, 0x11F55Cu);
    ctx->pc = 0x25D110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D110u, 0x11F554u, 0x11F55Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F55Cu;
label_11f55c:
    // 0x11f55c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11f55cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11f560:
    // 0x11f560: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x11f560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_11f564:
    // 0x11f564: 0xc089a90  jal         func_226A40
label_11f568:
    if (ctx->pc == 0x11F568u) {
        ctx->pc = 0x11F56Cu;
        goto label_11f56c;
    }
    ctx->pc = 0x11F564u;
    SET_GPR_U32(ctx, 31, 0x11F56Cu);
    ctx->pc = 0x226A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226A40u, 0x11F564u, 0x11F56Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F56Cu;
label_11f56c:
    // 0x11f56c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11f56cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_11f570:
    // 0x11f570: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x11f570u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_11f574:
    // 0x11f574: 0xc050194  jal         func_140650
label_11f578:
    if (ctx->pc == 0x11F578u) {
        ctx->pc = 0x11F57Cu;
        goto label_11f57c;
    }
    ctx->pc = 0x11F574u;
    SET_GPR_U32(ctx, 31, 0x11F57Cu);
    ctx->pc = 0x140650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140650u, 0x11F574u, 0x11F57Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F57Cu;
label_11f57c:
    // 0x11f57c: 0xc12242c  jal         func_4890B0
label_11f580:
    if (ctx->pc == 0x11F580u) {
        ctx->pc = 0x11F584u;
        goto label_11f584;
    }
    ctx->pc = 0x11F57Cu;
    SET_GPR_U32(ctx, 31, 0x11F584u);
    ctx->pc = 0x4890B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4890B0u, 0x11F57Cu, 0x11F584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F584u;
label_11f584:
    // 0x11f584: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11f584u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11f588:
    // 0x11f588: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x11f588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_11f58c:
    // 0x11f58c: 0xc105f96  jal         func_417E58
label_11f590:
    if (ctx->pc == 0x11F590u) {
        ctx->pc = 0x11F594u;
        goto label_11f594;
    }
    ctx->pc = 0x11F58Cu;
    SET_GPR_U32(ctx, 31, 0x11F594u);
    ctx->pc = 0x417E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x417E58u, 0x11F58Cu, 0x11F594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F594u;
label_11f594:
    // 0x11f594: 0x3c0542c8  lui         $a1, 0x42C8
    ctx->pc = 0x11f594u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17096 << 16));
label_11f598:
    // 0x11f598: 0x4485a000  mtc1        $a1, $f20
    ctx->pc = 0x11f598u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_11f59c:
    // 0x11f59c: 0xc12242c  jal         func_4890B0
label_11f5a0:
    if (ctx->pc == 0x11F5A0u) {
        ctx->pc = 0x11F5A4u;
        goto label_11f5a4;
    }
    ctx->pc = 0x11F59Cu;
    SET_GPR_U32(ctx, 31, 0x11F5A4u);
    ctx->pc = 0x4890B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4890B0u, 0x11F59Cu, 0x11F5A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F5A4u;
label_11f5a4:
    // 0x11f5a4: 0xe4540088  swc1        $f20, 0x88($v0)
    ctx->pc = 0x11f5a4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 136), bits); }
label_11f5a8:
    // 0x11f5a8: 0xc12242c  jal         func_4890B0
label_11f5ac:
    if (ctx->pc == 0x11F5ACu) {
        ctx->pc = 0x11F5B0u;
        goto label_11f5b0;
    }
    ctx->pc = 0x11F5A8u;
    SET_GPR_U32(ctx, 31, 0x11F5B0u);
    ctx->pc = 0x4890B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4890B0u, 0x11F5A8u, 0x11F5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F5B0u;
label_11f5b0:
    // 0x11f5b0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11f5b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11f5b4:
    // 0x11f5b4: 0xafa40104  sw          $a0, 0x104($sp)
    ctx->pc = 0x11f5b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 4));
label_11f5b8:
    // 0x11f5b8: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x11f5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_11f5bc:
    // 0x11f5bc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11f5bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11f5c0:
    // 0x11f5c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11f5c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11f5c4:
    // 0x11f5c4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x11f5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_11f5c8:
    // 0x11f5c8: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x11f5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_11f5cc:
    // 0x11f5cc: 0x40f809  jalr        $v0
label_11f5d0:
    if (ctx->pc == 0x11F5D0u) {
        ctx->pc = 0x11F5D4u;
        goto label_11f5d4;
    }
    ctx->pc = 0x11F5CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11F5D4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11F5CCu, 0x11F5D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11F5D4u;
label_11f5d4:
    // 0x11f5d4: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x11f5d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_11f5d8:
    // 0x11f5d8: 0x3c0600a0  lui         $a2, 0xA0
    ctx->pc = 0x11f5d8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)160 << 16));
label_11f5dc:
    // 0x11f5dc: 0x34c5c8ff  ori         $a1, $a2, 0xC8FF
    ctx->pc = 0x11f5dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)51455);
label_11f5e0:
    // 0x11f5e0: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x11f5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_11f5e4:
    // 0x11f5e4: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x11f5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_11f5e8:
    // 0x11f5e8: 0x40f809  jalr        $v0
label_11f5ec:
    if (ctx->pc == 0x11F5ECu) {
        ctx->pc = 0x11F5F0u;
        goto label_11f5f0;
    }
    ctx->pc = 0x11F5E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11F5F0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11F5E8u, 0x11F5F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11F5F0u;
label_11f5f0:
    // 0x11f5f0: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x11f5f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_11f5f4:
    // 0x11f5f4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x11f5f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11f5f8:
    // 0x11f5f8: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x11f5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_11f5fc:
    // 0x11f5fc: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x11f5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_11f600:
    // 0x11f600: 0x40f809  jalr        $v0
label_11f604:
    if (ctx->pc == 0x11F604u) {
        ctx->pc = 0x11F608u;
        goto label_11f608;
    }
    ctx->pc = 0x11F600u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11F608u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11F600u, 0x11F608u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11F608u;
label_11f608:
    // 0x11f608: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11f608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11f60c:
    // 0x11f60c: 0xc12242c  jal         func_4890B0
label_11f610:
    if (ctx->pc == 0x11F610u) {
        ctx->pc = 0x11F614u;
        goto label_11f614;
    }
    ctx->pc = 0x11F60Cu;
    SET_GPR_U32(ctx, 31, 0x11F614u);
    ctx->pc = 0x4890B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4890B0u, 0x11F60Cu, 0x11F614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F614u;
label_11f614:
    // 0x11f614: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11f614u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11f618:
    // 0x11f618: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x11f618u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_11f61c:
    // 0x11f61c: 0xc105f9e  jal         func_417E78
label_11f620:
    if (ctx->pc == 0x11F620u) {
        ctx->pc = 0x11F624u;
        goto label_11f624;
    }
    ctx->pc = 0x11F61Cu;
    SET_GPR_U32(ctx, 31, 0x11F624u);
    ctx->pc = 0x417E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x417E78u, 0x11F61Cu, 0x11F624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F624u;
label_11f624:
    // 0x11f624: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x11f624u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11f628:
    // 0x11f628: 0x1012000c  beq         $zero, $s2, . + 4 + (0xC << 2)
label_11f62c:
    if (ctx->pc == 0x11F62Cu) {
        ctx->pc = 0x11F630u;
        goto label_11f630;
    }
    ctx->pc = 0x11F628u;
    {
        const bool branch_taken_0x11f628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 18));
        if (branch_taken_0x11f628) {
            ctx->pc = 0x11F65Cu;
            goto label_11f65c;
        }
    }
    ctx->pc = 0x11F630u;
label_11f630:
    // 0x11f630: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11f630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_11f634:
    // 0x11f634: 0xc11dff8  jal         func_477FE0
label_11f638:
    if (ctx->pc == 0x11F638u) {
        ctx->pc = 0x11F63Cu;
        goto label_11f63c;
    }
    ctx->pc = 0x11F634u;
    SET_GPR_U32(ctx, 31, 0x11F63Cu);
    ctx->pc = 0x477FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x477FE0u, 0x11F634u, 0x11F63Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F63Cu;
label_11f63c:
    // 0x11f63c: 0x10000007  b           . + 4 + (0x7 << 2)
label_11f640:
    if (ctx->pc == 0x11F640u) {
        ctx->pc = 0x11F644u;
        goto label_11f644;
    }
    ctx->pc = 0x11F63Cu;
    {
        const bool branch_taken_0x11f63c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11f63c) {
            ctx->pc = 0x11F65Cu;
            goto label_11f65c;
        }
    }
    ctx->pc = 0x11F644u;
label_11f644:
    // 0x11f644: 0x10120005  beq         $zero, $s2, . + 4 + (0x5 << 2)
label_11f648:
    if (ctx->pc == 0x11F648u) {
        ctx->pc = 0x11F64Cu;
        goto label_11f64c;
    }
    ctx->pc = 0x11F644u;
    {
        const bool branch_taken_0x11f644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 18));
        if (branch_taken_0x11f644) {
            ctx->pc = 0x11F65Cu;
            goto label_11f65c;
        }
    }
    ctx->pc = 0x11F64Cu;
label_11f64c:
    // 0x11f64c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11f64cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_11f650:
    // 0x11f650: 0xc11e00c  jal         func_478030
label_11f654:
    if (ctx->pc == 0x11F654u) {
        ctx->pc = 0x11F658u;
        goto label_11f658;
    }
    ctx->pc = 0x11F650u;
    SET_GPR_U32(ctx, 31, 0x11F658u);
    ctx->pc = 0x478030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x478030u, 0x11F650u, 0x11F658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F658u;
label_11f658:
    // 0x11f658: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11f658u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11f65c:
    // 0x11f65c: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x11f65cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_11f660:
    // 0x11f660: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x11f660u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_11f664:
    // 0x11f664: 0x8f84ba9c  lw          $a0, -0x4564($gp)
    ctx->pc = 0x11f664u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949532)));
label_11f668:
    // 0x11f668: 0xc0529b8  jal         func_14A6E0
label_11f66c:
    if (ctx->pc == 0x11F66Cu) {
        ctx->pc = 0x11F670u;
        goto label_11f670;
    }
    ctx->pc = 0x11F668u;
    SET_GPR_U32(ctx, 31, 0x11F670u);
    ctx->pc = 0x14A6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A6E0u, 0x11F668u, 0x11F670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F670u;
label_11f670:
    // 0x11f670: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11f670u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11f674:
    // 0x11f674: 0x8f85ba9c  lw          $a1, -0x4564($gp)
    ctx->pc = 0x11f674u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949532)));
label_11f678:
    // 0x11f678: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x11f678u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_11f67c:
    // 0x11f67c: 0xc052c00  jal         func_14B000
label_11f680:
    if (ctx->pc == 0x11F680u) {
        ctx->pc = 0x11F684u;
        goto label_11f684;
    }
    ctx->pc = 0x11F67Cu;
    SET_GPR_U32(ctx, 31, 0x11F684u);
    ctx->pc = 0x14B000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B000u, 0x11F67Cu, 0x11F684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F684u;
label_11f684:
    // 0x11f684: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x11f684u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11f688:
    // 0x11f688: 0x8f82ba9c  lw          $v0, -0x4564($gp)
    ctx->pc = 0x11f688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949532)));
label_11f68c:
    // 0x11f68c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11f68cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11f690:
    // 0x11f690: 0xc052c38  jal         func_14B0E0
label_11f694:
    if (ctx->pc == 0x11F694u) {
        ctx->pc = 0x11F698u;
        goto label_11f698;
    }
    ctx->pc = 0x11F690u;
    SET_GPR_U32(ctx, 31, 0x11F698u);
    ctx->pc = 0x14B0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B0E0u, 0x11F690u, 0x11F698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F698u;
label_11f698:
    // 0x11f698: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11f698u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11f69c:
    // 0x11f69c: 0x8f82b9dc  lw          $v0, -0x4624($gp)
    ctx->pc = 0x11f69cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949340)));
label_11f6a0:
    // 0x11f6a0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11f6a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11f6a4:
    // 0x11f6a4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x11f6a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_11f6a8:
    // 0x11f6a8: 0xc0553d4  jal         func_154F50
label_11f6ac:
    if (ctx->pc == 0x11F6ACu) {
        ctx->pc = 0x11F6B0u;
        goto label_11f6b0;
    }
    ctx->pc = 0x11F6A8u;
    SET_GPR_U32(ctx, 31, 0x11F6B0u);
    ctx->pc = 0x154F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154F50u, 0x11F6A8u, 0x11F6B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F6B0u;
label_11f6b0:
    // 0x11f6b0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11f6b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11f6b4:
    // 0x11f6b4: 0x93a50130  lbu         $a1, 0x130($sp)
    ctx->pc = 0x11f6b4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 304)));
label_11f6b8:
    // 0x11f6b8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x11f6b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_11f6bc:
    // 0x11f6bc: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x11f6bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_11f6c0:
    // 0x11f6c0: 0x320f809  jalr        $t9
label_11f6c4:
    if (ctx->pc == 0x11F6C4u) {
        ctx->pc = 0x11F6C8u;
        goto label_11f6c8;
    }
    ctx->pc = 0x11F6C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x11F6C8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11F6C0u, 0x11F6C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11F6C8u;
label_11f6c8:
    // 0x11f6c8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x11f6c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11f6cc:
    // 0x11f6cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11f6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11f6d0:
    // 0x11f6d0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11f6d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11f6d4:
    // 0x11f6d4: 0xc124dc4  jal         func_493710
label_11f6d8:
    if (ctx->pc == 0x11F6D8u) {
        ctx->pc = 0x11F6DCu;
        goto label_11f6dc;
    }
    ctx->pc = 0x11F6D4u;
    SET_GPR_U32(ctx, 31, 0x11F6DCu);
    ctx->pc = 0x493710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x493710u, 0x11F6D4u, 0x11F6DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F6DCu;
label_11f6dc:
    // 0x11f6dc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11f6dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11f6e0:
    // 0x11f6e0: 0x10000091  b           . + 4 + (0x91 << 2)
label_11f6e4:
    if (ctx->pc == 0x11F6E4u) {
        ctx->pc = 0x11F6E8u;
        goto label_11f6e8;
    }
    ctx->pc = 0x11F6E0u;
    {
        const bool branch_taken_0x11f6e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11f6e0) {
            ctx->pc = 0x11F928u;
            goto label_11f928;
        }
    }
    ctx->pc = 0x11F6E8u;
label_11f6e8:
    // 0x11f6e8: 0x8f82b9dc  lw          $v0, -0x4624($gp)
    ctx->pc = 0x11f6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949340)));
label_11f6ec:
    // 0x11f6ec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11f6ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11f6f0:
    // 0x11f6f0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x11f6f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_11f6f4:
    // 0x11f6f4: 0xc0553d4  jal         func_154F50
label_11f6f8:
    if (ctx->pc == 0x11F6F8u) {
        ctx->pc = 0x11F6FCu;
        goto label_11f6fc;
    }
    ctx->pc = 0x11F6F4u;
    SET_GPR_U32(ctx, 31, 0x11F6FCu);
    ctx->pc = 0x154F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154F50u, 0x11F6F4u, 0x11F6FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F6FCu;
label_11f6fc:
    // 0x11f6fc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11f6fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11f700:
    // 0x11f700: 0x93a50130  lbu         $a1, 0x130($sp)
    ctx->pc = 0x11f700u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 304)));
label_11f704:
    // 0x11f704: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x11f704u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_11f708:
    // 0x11f708: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x11f708u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_11f70c:
    // 0x11f70c: 0x320f809  jalr        $t9
label_11f710:
    if (ctx->pc == 0x11F710u) {
        ctx->pc = 0x11F714u;
        goto label_11f714;
    }
    ctx->pc = 0x11F70Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x11F714u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11F70Cu, 0x11F714u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11F714u;
label_11f714:
    // 0x11f714: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x11f714u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11f718:
    // 0x11f718: 0x8f82b9dc  lw          $v0, -0x4624($gp)
    ctx->pc = 0x11f718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949340)));
label_11f71c:
    // 0x11f71c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11f71cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11f720:
    // 0x11f720: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x11f720u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_11f724:
    // 0x11f724: 0xc0553d4  jal         func_154F50
label_11f728:
    if (ctx->pc == 0x11F728u) {
        ctx->pc = 0x11F72Cu;
        goto label_11f72c;
    }
    ctx->pc = 0x11F724u;
    SET_GPR_U32(ctx, 31, 0x11F72Cu);
    ctx->pc = 0x154F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154F50u, 0x11F724u, 0x11F72Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F72Cu;
label_11f72c:
    // 0x11f72c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11f72cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11f730:
    // 0x11f730: 0x93a50130  lbu         $a1, 0x130($sp)
    ctx->pc = 0x11f730u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 304)));
label_11f734:
    // 0x11f734: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x11f734u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_11f738:
    // 0x11f738: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x11f738u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_11f73c:
    // 0x11f73c: 0x320f809  jalr        $t9
label_11f740:
    if (ctx->pc == 0x11F740u) {
        ctx->pc = 0x11F744u;
        goto label_11f744;
    }
    ctx->pc = 0x11F73Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x11F744u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11F73Cu, 0x11F744u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11F744u;
label_11f744:
    // 0x11f744: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11f744u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11f748:
    // 0x11f748: 0x8f85b9dc  lw          $a1, -0x4624($gp)
    ctx->pc = 0x11f748u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949340)));
label_11f74c:
    // 0x11f74c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x11f74cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_11f750:
    // 0x11f750: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x11f750u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_11f754:
    // 0x11f754: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x11f754u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_11f758:
    // 0x11f758: 0xc0553d4  jal         func_154F50
label_11f75c:
    if (ctx->pc == 0x11F75Cu) {
        ctx->pc = 0x11F760u;
        goto label_11f760;
    }
    ctx->pc = 0x11F758u;
    SET_GPR_U32(ctx, 31, 0x11F760u);
    ctx->pc = 0x154F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154F50u, 0x11F758u, 0x11F760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F760u;
label_11f760:
    // 0x11f760: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11f760u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11f764:
    // 0x11f764: 0x93a50130  lbu         $a1, 0x130($sp)
    ctx->pc = 0x11f764u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 304)));
label_11f768:
    // 0x11f768: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x11f768u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_11f76c:
    // 0x11f76c: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x11f76cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_11f770:
    // 0x11f770: 0x320f809  jalr        $t9
label_11f774:
    if (ctx->pc == 0x11F774u) {
        ctx->pc = 0x11F778u;
        goto label_11f778;
    }
    ctx->pc = 0x11F770u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x11F778u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11F770u, 0x11F778u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11F778u;
label_11f778:
    // 0x11f778: 0x16c00067  bnez        $s6, . + 4 + (0x67 << 2)
label_11f77c:
    if (ctx->pc == 0x11F77Cu) {
        ctx->pc = 0x11F780u;
        goto label_11f780;
    }
    ctx->pc = 0x11F778u;
    {
        const bool branch_taken_0x11f778 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x11f778) {
            ctx->pc = 0x11F918u;
            goto label_11f918;
        }
    }
    ctx->pc = 0x11F780u;
label_11f780:
    // 0x11f780: 0x93a20130  lbu         $v0, 0x130($sp)
    ctx->pc = 0x11f780u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 304)));
label_11f784:
    // 0x11f784: 0x10400064  beqz        $v0, . + 4 + (0x64 << 2)
label_11f788:
    if (ctx->pc == 0x11F788u) {
        ctx->pc = 0x11F78Cu;
        goto label_11f78c;
    }
    ctx->pc = 0x11F784u;
    {
        const bool branch_taken_0x11f784 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11f784) {
            ctx->pc = 0x11F918u;
            goto label_11f918;
        }
    }
    ctx->pc = 0x11F78Cu;
label_11f78c:
    // 0x11f78c: 0x3c0443a0  lui         $a0, 0x43A0
    ctx->pc = 0x11f78cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17312 << 16));
label_11f790:
    // 0x11f790: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x11f790u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_11f794:
    // 0x11f794: 0x0  nop
    ctx->pc = 0x11f794u;
    // NOP
label_11f798:
    // 0x11f798: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x11f798u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_11f79c:
    // 0x11f79c: 0x3c054396  lui         $a1, 0x4396
    ctx->pc = 0x11f79cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17302 << 16));
label_11f7a0:
    // 0x11f7a0: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x11f7a0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_11f7a4:
    // 0x11f7a4: 0x0  nop
    ctx->pc = 0x11f7a4u;
    // NOP
label_11f7a8:
    // 0x11f7a8: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x11f7a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
label_11f7ac:
    // 0x11f7ac: 0x3c0642c8  lui         $a2, 0x42C8
    ctx->pc = 0x11f7acu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17096 << 16));
label_11f7b0:
    // 0x11f7b0: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x11f7b0u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_11f7b4:
    // 0x11f7b4: 0x0  nop
    ctx->pc = 0x11f7b4u;
    // NOP
label_11f7b8:
    // 0x11f7b8: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x11f7b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_11f7bc:
    // 0x11f7bc: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x11f7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_11f7c0:
    // 0x11f7c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x11f7c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_11f7c4:
    // 0x11f7c4: 0x0  nop
    ctx->pc = 0x11f7c4u;
    // NOP
label_11f7c8:
    // 0x11f7c8: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x11f7c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
label_11f7cc:
    // 0x11f7cc: 0x3c05bf80  lui         $a1, 0xBF80
    ctx->pc = 0x11f7ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49024 << 16));
label_11f7d0:
    // 0x11f7d0: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x11f7d0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_11f7d4:
    // 0x11f7d4: 0x0  nop
    ctx->pc = 0x11f7d4u;
    // NOP
label_11f7d8:
    // 0x11f7d8: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x11f7d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_11f7dc:
    // 0x11f7dc: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x11f7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_11f7e0:
    // 0x11f7e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x11f7e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_11f7e4:
    // 0x11f7e4: 0x0  nop
    ctx->pc = 0x11f7e4u;
    // NOP
label_11f7e8:
    // 0x11f7e8: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x11f7e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_11f7ec:
    // 0x11f7ec: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x11f7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_11f7f0:
    // 0x11f7f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x11f7f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_11f7f4:
    // 0x11f7f4: 0x0  nop
    ctx->pc = 0x11f7f4u;
    // NOP
label_11f7f8:
    // 0x11f7f8: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x11f7f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
label_11f7fc:
    // 0x11f7fc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x11f7fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_11f800:
    // 0x11f800: 0x0  nop
    ctx->pc = 0x11f800u;
    // NOP
label_11f804:
    // 0x11f804: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x11f804u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_11f808:
    // 0x11f808: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11f808u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_11f80c:
    // 0x11f80c: 0xc050360  jal         func_140D80
label_11f810:
    if (ctx->pc == 0x11F810u) {
        ctx->pc = 0x11F814u;
        goto label_11f814;
    }
    ctx->pc = 0x11F80Cu;
    SET_GPR_U32(ctx, 31, 0x11F814u);
    ctx->pc = 0x140D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140D80u, 0x11F80Cu, 0x11F814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F814u;
label_11f814:
    // 0x11f814: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11f814u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11f818:
    // 0x11f818: 0xc097444  jal         func_25D110
label_11f81c:
    if (ctx->pc == 0x11F81Cu) {
        ctx->pc = 0x11F820u;
        goto label_11f820;
    }
    ctx->pc = 0x11F818u;
    SET_GPR_U32(ctx, 31, 0x11F820u);
    ctx->pc = 0x25D110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D110u, 0x11F818u, 0x11F820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F820u;
label_11f820:
    // 0x11f820: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11f820u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11f824:
    // 0x11f824: 0x3c0641f0  lui         $a2, 0x41F0
    ctx->pc = 0x11f824u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16880 << 16));
label_11f828:
    // 0x11f828: 0x44866000  mtc1        $a2, $f12
    ctx->pc = 0x11f828u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_11f82c:
    // 0x11f82c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x11f82cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_11f830:
    // 0x11f830: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11f830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11f834:
    // 0x11f834: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11f834u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11f838:
    // 0x11f838: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x11f838u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_11f83c:
    // 0x11f83c: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x11f83cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_11f840:
    // 0x11f840: 0x320f809  jalr        $t9
label_11f844:
    if (ctx->pc == 0x11F844u) {
        ctx->pc = 0x11F848u;
        goto label_11f848;
    }
    ctx->pc = 0x11F840u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x11F848u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11F840u, 0x11F848u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11F848u;
label_11f848:
    // 0x11f848: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11f848u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_11f84c:
    // 0x11f84c: 0xc050360  jal         func_140D80
label_11f850:
    if (ctx->pc == 0x11F850u) {
        ctx->pc = 0x11F854u;
        goto label_11f854;
    }
    ctx->pc = 0x11F84Cu;
    SET_GPR_U32(ctx, 31, 0x11F854u);
    ctx->pc = 0x140D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140D80u, 0x11F84Cu, 0x11F854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F854u;
label_11f854:
    // 0x11f854: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11f854u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11f858:
    // 0x11f858: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x11f858u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_11f85c:
    // 0x11f85c: 0xc097444  jal         func_25D110
label_11f860:
    if (ctx->pc == 0x11F860u) {
        ctx->pc = 0x11F864u;
        goto label_11f864;
    }
    ctx->pc = 0x11F85Cu;
    SET_GPR_U32(ctx, 31, 0x11F864u);
    ctx->pc = 0x25D110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D110u, 0x11F85Cu, 0x11F864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F864u;
label_11f864:
    // 0x11f864: 0x24051770  addiu       $a1, $zero, 0x1770
    ctx->pc = 0x11f864u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6000));
label_11f868:
    // 0x11f868: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x11f868u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_11f86c:
    // 0x11f86c: 0x0  nop
    ctx->pc = 0x11f86cu;
    // NOP
label_11f870:
    // 0x11f870: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x11f870u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_11f874:
    // 0x11f874: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11f874u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11f878:
    // 0x11f878: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x11f878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_11f87c:
    // 0x11f87c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11f87cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11f880:
    // 0x11f880: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x11f880u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_11f884:
    // 0x11f884: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x11f884u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_11f888:
    // 0x11f888: 0x320f809  jalr        $t9
label_11f88c:
    if (ctx->pc == 0x11F88Cu) {
        ctx->pc = 0x11F890u;
        goto label_11f890;
    }
    ctx->pc = 0x11F888u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x11F890u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11F888u, 0x11F890u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11F890u;
label_11f890:
    // 0x11f890: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11f890u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_11f894:
    // 0x11f894: 0xc050360  jal         func_140D80
label_11f898:
    if (ctx->pc == 0x11F898u) {
        ctx->pc = 0x11F89Cu;
        goto label_11f89c;
    }
    ctx->pc = 0x11F894u;
    SET_GPR_U32(ctx, 31, 0x11F89Cu);
    ctx->pc = 0x140D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140D80u, 0x11F894u, 0x11F89Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F89Cu;
label_11f89c:
    // 0x11f89c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11f89cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11f8a0:
    // 0x11f8a0: 0xc097444  jal         func_25D110
label_11f8a4:
    if (ctx->pc == 0x11F8A4u) {
        ctx->pc = 0x11F8A8u;
        goto label_11f8a8;
    }
    ctx->pc = 0x11F8A0u;
    SET_GPR_U32(ctx, 31, 0x11F8A8u);
    ctx->pc = 0x25D110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D110u, 0x11F8A0u, 0x11F8A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F8A8u;
label_11f8a8:
    // 0x11f8a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11f8a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11f8ac:
    // 0x11f8ac: 0xc089a90  jal         func_226A40
label_11f8b0:
    if (ctx->pc == 0x11F8B0u) {
        ctx->pc = 0x11F8B4u;
        goto label_11f8b4;
    }
    ctx->pc = 0x11F8ACu;
    SET_GPR_U32(ctx, 31, 0x11F8B4u);
    ctx->pc = 0x226A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226A40u, 0x11F8ACu, 0x11F8B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F8B4u;
label_11f8b4:
    // 0x11f8b4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11f8b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11f8b8:
    // 0x11f8b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11f8b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_11f8bc:
    // 0x11f8bc: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x11f8bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_11f8c0:
    // 0x11f8c0: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x11f8c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_11f8c4:
    // 0x11f8c4: 0xc050194  jal         func_140650
label_11f8c8:
    if (ctx->pc == 0x11F8C8u) {
        ctx->pc = 0x11F8CCu;
        goto label_11f8cc;
    }
    ctx->pc = 0x11F8C4u;
    SET_GPR_U32(ctx, 31, 0x11F8CCu);
    ctx->pc = 0x140650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140650u, 0x11F8C4u, 0x11F8CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F8CCu;
label_11f8cc:
    // 0x11f8cc: 0xc12242c  jal         func_4890B0
label_11f8d0:
    if (ctx->pc == 0x11F8D0u) {
        ctx->pc = 0x11F8D4u;
        goto label_11f8d4;
    }
    ctx->pc = 0x11F8CCu;
    SET_GPR_U32(ctx, 31, 0x11F8D4u);
    ctx->pc = 0x4890B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4890B0u, 0x11F8CCu, 0x11F8D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F8D4u;
label_11f8d4:
    // 0x11f8d4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11f8d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11f8d8:
    // 0x11f8d8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x11f8d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_11f8dc:
    // 0x11f8dc: 0xc105f96  jal         func_417E58
label_11f8e0:
    if (ctx->pc == 0x11F8E0u) {
        ctx->pc = 0x11F8E4u;
        goto label_11f8e4;
    }
    ctx->pc = 0x11F8DCu;
    SET_GPR_U32(ctx, 31, 0x11F8E4u);
    ctx->pc = 0x417E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x417E58u, 0x11F8DCu, 0x11F8E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F8E4u;
label_11f8e4:
    // 0x11f8e4: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x11f8e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_11f8e8:
    // 0x11f8e8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x11f8e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_11f8ec:
    // 0x11f8ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11f8ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11f8f0:
    // 0x11f8f0: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x11f8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_11f8f4:
    // 0x11f8f4: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x11f8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_11f8f8:
    // 0x11f8f8: 0x40f809  jalr        $v0
label_11f8fc:
    if (ctx->pc == 0x11F8FCu) {
        ctx->pc = 0x11F900u;
        goto label_11f900;
    }
    ctx->pc = 0x11F8F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11F900u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11F8F8u, 0x11F900u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11F900u;
label_11f900:
    // 0x11f900: 0xc12242c  jal         func_4890B0
label_11f904:
    if (ctx->pc == 0x11F904u) {
        ctx->pc = 0x11F908u;
        goto label_11f908;
    }
    ctx->pc = 0x11F900u;
    SET_GPR_U32(ctx, 31, 0x11F908u);
    ctx->pc = 0x4890B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4890B0u, 0x11F900u, 0x11F908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F908u;
label_11f908:
    // 0x11f908: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11f908u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11f90c:
    // 0x11f90c: 0xc105f9e  jal         func_417E78
label_11f910:
    if (ctx->pc == 0x11F910u) {
        ctx->pc = 0x11F914u;
        goto label_11f914;
    }
    ctx->pc = 0x11F90Cu;
    SET_GPR_U32(ctx, 31, 0x11F914u);
    ctx->pc = 0x417E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x417E78u, 0x11F90Cu, 0x11F914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F914u;
label_11f914:
    // 0x11f914: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11f914u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11f918:
    // 0x11f918: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x11f918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11f91c:
    // 0x11f91c: 0xc124dc4  jal         func_493710
label_11f920:
    if (ctx->pc == 0x11F920u) {
        ctx->pc = 0x11F924u;
        goto label_11f924;
    }
    ctx->pc = 0x11F91Cu;
    SET_GPR_U32(ctx, 31, 0x11F924u);
    ctx->pc = 0x493710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x493710u, 0x11F91Cu, 0x11F924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F924u;
label_11f924:
    // 0x11f924: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x11f924u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11f928:
    // 0x11f928: 0x93a30130  lbu         $v1, 0x130($sp)
    ctx->pc = 0x11f928u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 304)));
label_11f92c:
    // 0x11f92c: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x11f92cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_11f930:
    // 0x11f930: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x11f930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11f934:
    // 0x11f934: 0x14a30017  bne         $a1, $v1, . + 4 + (0x17 << 2)
label_11f938:
    if (ctx->pc == 0x11F938u) {
        ctx->pc = 0x11F93Cu;
        goto label_11f93c;
    }
    ctx->pc = 0x11F934u;
    {
        const bool branch_taken_0x11f934 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x11f934) {
            ctx->pc = 0x11F994u;
            goto label_11f994;
        }
    }
    ctx->pc = 0x11F93Cu;
label_11f93c:
    // 0x11f93c: 0x8f84b9d8  lw          $a0, -0x4628($gp)
    ctx->pc = 0x11f93cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949336)));
label_11f940:
    // 0x11f940: 0xc050c64  jal         func_143190
label_11f944:
    if (ctx->pc == 0x11F944u) {
        ctx->pc = 0x11F948u;
        goto label_11f948;
    }
    ctx->pc = 0x11F940u;
    SET_GPR_U32(ctx, 31, 0x11F948u);
    ctx->pc = 0x143190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143190u, 0x11F940u, 0x11F948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F948u;
label_11f948:
    // 0x11f948: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11f948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11f94c:
    // 0x11f94c: 0xc04738c  jal         func_11CE30
label_11f950:
    if (ctx->pc == 0x11F950u) {
        ctx->pc = 0x11F954u;
        goto label_11f954;
    }
    ctx->pc = 0x11F94Cu;
    SET_GPR_U32(ctx, 31, 0x11F954u);
    ctx->pc = 0x11CE30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11CE30u, 0x11F94Cu, 0x11F954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F954u;
label_11f954:
    // 0x11f954: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11f954u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11f958:
    // 0x11f958: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x11f958u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_11f95c:
    // 0x11f95c: 0x12c00008  beqz        $s6, . + 4 + (0x8 << 2)
label_11f960:
    if (ctx->pc == 0x11F960u) {
        ctx->pc = 0x11F964u;
        goto label_11f964;
    }
    ctx->pc = 0x11F95Cu;
    {
        const bool branch_taken_0x11f95c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x11f95c) {
            ctx->pc = 0x11F980u;
            goto label_11f980;
        }
    }
    ctx->pc = 0x11F964u;
label_11f964:
    // 0x11f964: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x11f964u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_11f968:
    // 0x11f968: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x11f968u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11f96c:
    // 0x11f96c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x11f96cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_11f970:
    // 0x11f970: 0xc04c608  jal         func_131820
label_11f974:
    if (ctx->pc == 0x11F974u) {
        ctx->pc = 0x11F978u;
        goto label_11f978;
    }
    ctx->pc = 0x11F970u;
    SET_GPR_U32(ctx, 31, 0x11F978u);
    ctx->pc = 0x131820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131820u, 0x11F970u, 0x11F978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F978u;
label_11f978:
    // 0x11f978: 0x10000006  b           . + 4 + (0x6 << 2)
label_11f97c:
    if (ctx->pc == 0x11F97Cu) {
        ctx->pc = 0x11F980u;
        goto label_11f980;
    }
    ctx->pc = 0x11F978u;
    {
        const bool branch_taken_0x11f978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11f978) {
            ctx->pc = 0x11F994u;
            goto label_11f994;
        }
    }
    ctx->pc = 0x11F980u;
label_11f980:
    // 0x11f980: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x11f980u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_11f984:
    // 0x11f984: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11f984u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11f988:
    // 0x11f988: 0xc04c608  jal         func_131820
label_11f98c:
    if (ctx->pc == 0x11F98Cu) {
        ctx->pc = 0x11F990u;
        goto label_11f990;
    }
    ctx->pc = 0x11F988u;
    SET_GPR_U32(ctx, 31, 0x11F990u);
    ctx->pc = 0x131820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131820u, 0x11F988u, 0x11F990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F990u;
label_11f990:
    // 0x11f990: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11f990u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11f994:
    // 0x11f994: 0x93a30130  lbu         $v1, 0x130($sp)
    ctx->pc = 0x11f994u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 304)));
label_11f998:
    // 0x11f998: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x11f998u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_11f99c:
    // 0x11f99c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x11f99cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11f9a0:
    // 0x11f9a0: 0x14640025  bne         $v1, $a0, . + 4 + (0x25 << 2)
label_11f9a4:
    if (ctx->pc == 0x11F9A4u) {
        ctx->pc = 0x11F9A8u;
        goto label_11f9a8;
    }
    ctx->pc = 0x11F9A0u;
    {
        const bool branch_taken_0x11f9a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x11f9a0) {
            ctx->pc = 0x11FA38u;
            goto label_11fa38;
        }
    }
    ctx->pc = 0x11F9A8u;
label_11f9a8:
    // 0x11f9a8: 0x8fa50118  lw          $a1, 0x118($sp)
    ctx->pc = 0x11f9a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_11f9ac:
    // 0x11f9ac: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x11f9acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_11f9b0:
    // 0x11f9b0: 0x278689d8  addiu       $a2, $gp, -0x7628
    ctx->pc = 0x11f9b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937048));
label_11f9b4:
    // 0x11f9b4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x11f9b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_11f9b8:
    // 0x11f9b8: 0xc0bc574  jal         func_2F15D0
label_11f9bc:
    if (ctx->pc == 0x11F9BCu) {
        ctx->pc = 0x11F9C0u;
        goto label_11f9c0;
    }
    ctx->pc = 0x11F9B8u;
    SET_GPR_U32(ctx, 31, 0x11F9C0u);
    ctx->pc = 0x2F15D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F15D0u, 0x11F9B8u, 0x11F9C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F9C0u;
label_11f9c0:
    // 0x11f9c0: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_11f9c4:
    if (ctx->pc == 0x11F9C4u) {
        ctx->pc = 0x11F9C8u;
        goto label_11f9c8;
    }
    ctx->pc = 0x11F9C0u;
    {
        const bool branch_taken_0x11f9c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11f9c0) {
            ctx->pc = 0x11FA38u;
            goto label_11fa38;
        }
    }
    ctx->pc = 0x11F9C8u;
label_11f9c8:
    // 0x11f9c8: 0x27a500d8  addiu       $a1, $sp, 0xD8
    ctx->pc = 0x11f9c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
label_11f9cc:
    // 0x11f9cc: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x11f9ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_11f9d0:
    // 0x11f9d0: 0xc088560  jal         func_221580
label_11f9d4:
    if (ctx->pc == 0x11F9D4u) {
        ctx->pc = 0x11F9D8u;
        goto label_11f9d8;
    }
    ctx->pc = 0x11F9D0u;
    SET_GPR_U32(ctx, 31, 0x11F9D8u);
    ctx->pc = 0x221580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221580u, 0x11F9D0u, 0x11F9D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F9D8u;
label_11f9d8:
    // 0x11f9d8: 0x27a400d8  addiu       $a0, $sp, 0xD8
    ctx->pc = 0x11f9d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
label_11f9dc:
    // 0x11f9dc: 0x240504c6  addiu       $a1, $zero, 0x4C6
    ctx->pc = 0x11f9dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1222));
label_11f9e0:
    // 0x11f9e0: 0x8fa60118  lw          $a2, 0x118($sp)
    ctx->pc = 0x11f9e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_11f9e4:
    // 0x11f9e4: 0xc0433dc  jal         func_10CF70
label_11f9e8:
    if (ctx->pc == 0x11F9E8u) {
        ctx->pc = 0x11F9ECu;
        goto label_11f9ec;
    }
    ctx->pc = 0x11F9E4u;
    SET_GPR_U32(ctx, 31, 0x11F9ECu);
    ctx->pc = 0x10CF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CF70u, 0x11F9E4u, 0x11F9ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F9ECu;
label_11f9ec:
    // 0x11f9ec: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x11f9ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11f9f0:
    // 0x11f9f0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x11f9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_11f9f4:
    // 0x11f9f4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11f9f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11f9f8:
    // 0x11f9f8: 0x27a500d8  addiu       $a1, $sp, 0xD8
    ctx->pc = 0x11f9f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
label_11f9fc:
    // 0x11f9fc: 0xc08ef28  jal         func_23BCA0
label_11fa00:
    if (ctx->pc == 0x11FA00u) {
        ctx->pc = 0x11FA04u;
        goto label_11fa04;
    }
    ctx->pc = 0x11F9FCu;
    SET_GPR_U32(ctx, 31, 0x11FA04u);
    ctx->pc = 0x23BCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BCA0u, 0x11F9FCu, 0x11FA04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11FA04u;
label_11fa04:
    // 0x11fa04: 0x8f82bbb4  lw          $v0, -0x444C($gp)
    ctx->pc = 0x11fa04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
label_11fa08:
    // 0x11fa08: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x11fa08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_11fa0c:
    // 0x11fa0c: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x11fa0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_11fa10:
    // 0x11fa10: 0x24a51e58  addiu       $a1, $a1, 0x1E58
    ctx->pc = 0x11fa10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7768));
label_11fa14:
    // 0x11fa14: 0x278689d8  addiu       $a2, $gp, -0x7628
    ctx->pc = 0x11fa14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937048));
label_11fa18:
    // 0x11fa18: 0xc041b90  jal         func_106E40
label_11fa1c:
    if (ctx->pc == 0x11FA1Cu) {
        ctx->pc = 0x11FA20u;
        goto label_11fa20;
    }
    ctx->pc = 0x11FA18u;
    SET_GPR_U32(ctx, 31, 0x11FA20u);
    ctx->pc = 0x106E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106E40u, 0x11FA18u, 0x11FA20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11FA20u;
label_11fa20:
    // 0x11fa20: 0x27a500d8  addiu       $a1, $sp, 0xD8
    ctx->pc = 0x11fa20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
label_11fa24:
    // 0x11fa24: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x11fa24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_11fa28:
    // 0x11fa28: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x11fa28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_11fa2c:
    // 0x11fa2c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11fa2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11fa30:
    // 0x11fa30: 0xc0887b4  jal         func_221ED0
label_11fa34:
    if (ctx->pc == 0x11FA34u) {
        ctx->pc = 0x11FA38u;
        goto label_11fa38;
    }
    ctx->pc = 0x11FA30u;
    SET_GPR_U32(ctx, 31, 0x11FA38u);
    ctx->pc = 0x221ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221ED0u, 0x11FA30u, 0x11FA38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11FA38u;
label_11fa38:
    // 0x11fa38: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x11fa38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_11fa3c:
    // 0x11fa3c: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x11fa3cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_11fa40:
    // 0x11fa40: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x11fa40u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_11fa44:
    // 0x11fa44: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x11fa44u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_11fa48:
    // 0x11fa48: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x11fa48u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_11fa4c:
    // 0x11fa4c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x11fa4cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_11fa50:
    // 0x11fa50: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x11fa50u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_11fa54:
    // 0x11fa54: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x11fa54u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_11fa58:
    // 0x11fa58: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x11fa58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_11fa5c:
    // 0x11fa5c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x11fa5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_11fa60:
    // 0x11fa60: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x11fa60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_11fa64:
    // 0x11fa64: 0x27bd0140  addiu       $sp, $sp, 0x140
    ctx->pc = 0x11fa64u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_11fa68:
    // 0x11fa68: 0x3e00008  jr          $ra
label_11fa6c:
    if (ctx->pc == 0x11FA6Cu) {
        ctx->pc = 0x11FA70u;
        goto label_fallthrough_0x11fa68;
    }
    ctx->pc = 0x11FA68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11FA68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x11fa68:
    ctx->pc = 0x11FA70u;
}
