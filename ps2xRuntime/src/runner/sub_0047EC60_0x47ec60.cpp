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

// Function: sub_0047EC60
// Address: 0x47ec60 - 0x47f790
void sub_0047EC60_0x47ec60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047EC60_0x47ec60");
#endif

    switch (ctx->pc) {
        case 0x47ec60u: goto label_47ec60;
        case 0x47ec64u: goto label_47ec64;
        case 0x47ec68u: goto label_47ec68;
        case 0x47ec6cu: goto label_47ec6c;
        case 0x47ec70u: goto label_47ec70;
        case 0x47ec74u: goto label_47ec74;
        case 0x47ec78u: goto label_47ec78;
        case 0x47ec7cu: goto label_47ec7c;
        case 0x47ec80u: goto label_47ec80;
        case 0x47ec84u: goto label_47ec84;
        case 0x47ec88u: goto label_47ec88;
        case 0x47ec8cu: goto label_47ec8c;
        case 0x47ec90u: goto label_47ec90;
        case 0x47ec94u: goto label_47ec94;
        case 0x47ec98u: goto label_47ec98;
        case 0x47ec9cu: goto label_47ec9c;
        case 0x47eca0u: goto label_47eca0;
        case 0x47eca4u: goto label_47eca4;
        case 0x47eca8u: goto label_47eca8;
        case 0x47ecacu: goto label_47ecac;
        case 0x47ecb0u: goto label_47ecb0;
        case 0x47ecb4u: goto label_47ecb4;
        case 0x47ecb8u: goto label_47ecb8;
        case 0x47ecbcu: goto label_47ecbc;
        case 0x47ecc0u: goto label_47ecc0;
        case 0x47ecc4u: goto label_47ecc4;
        case 0x47ecc8u: goto label_47ecc8;
        case 0x47ecccu: goto label_47eccc;
        case 0x47ecd0u: goto label_47ecd0;
        case 0x47ecd4u: goto label_47ecd4;
        case 0x47ecd8u: goto label_47ecd8;
        case 0x47ecdcu: goto label_47ecdc;
        case 0x47ece0u: goto label_47ece0;
        case 0x47ece4u: goto label_47ece4;
        case 0x47ece8u: goto label_47ece8;
        case 0x47ececu: goto label_47ecec;
        case 0x47ecf0u: goto label_47ecf0;
        case 0x47ecf4u: goto label_47ecf4;
        case 0x47ecf8u: goto label_47ecf8;
        case 0x47ecfcu: goto label_47ecfc;
        case 0x47ed00u: goto label_47ed00;
        case 0x47ed04u: goto label_47ed04;
        case 0x47ed08u: goto label_47ed08;
        case 0x47ed0cu: goto label_47ed0c;
        case 0x47ed10u: goto label_47ed10;
        case 0x47ed14u: goto label_47ed14;
        case 0x47ed18u: goto label_47ed18;
        case 0x47ed1cu: goto label_47ed1c;
        case 0x47ed20u: goto label_47ed20;
        case 0x47ed24u: goto label_47ed24;
        case 0x47ed28u: goto label_47ed28;
        case 0x47ed2cu: goto label_47ed2c;
        case 0x47ed30u: goto label_47ed30;
        case 0x47ed34u: goto label_47ed34;
        case 0x47ed38u: goto label_47ed38;
        case 0x47ed3cu: goto label_47ed3c;
        case 0x47ed40u: goto label_47ed40;
        case 0x47ed44u: goto label_47ed44;
        case 0x47ed48u: goto label_47ed48;
        case 0x47ed4cu: goto label_47ed4c;
        case 0x47ed50u: goto label_47ed50;
        case 0x47ed54u: goto label_47ed54;
        case 0x47ed58u: goto label_47ed58;
        case 0x47ed5cu: goto label_47ed5c;
        case 0x47ed60u: goto label_47ed60;
        case 0x47ed64u: goto label_47ed64;
        case 0x47ed68u: goto label_47ed68;
        case 0x47ed6cu: goto label_47ed6c;
        case 0x47ed70u: goto label_47ed70;
        case 0x47ed74u: goto label_47ed74;
        case 0x47ed78u: goto label_47ed78;
        case 0x47ed7cu: goto label_47ed7c;
        case 0x47ed80u: goto label_47ed80;
        case 0x47ed84u: goto label_47ed84;
        case 0x47ed88u: goto label_47ed88;
        case 0x47ed8cu: goto label_47ed8c;
        case 0x47ed90u: goto label_47ed90;
        case 0x47ed94u: goto label_47ed94;
        case 0x47ed98u: goto label_47ed98;
        case 0x47ed9cu: goto label_47ed9c;
        case 0x47eda0u: goto label_47eda0;
        case 0x47eda4u: goto label_47eda4;
        case 0x47eda8u: goto label_47eda8;
        case 0x47edacu: goto label_47edac;
        case 0x47edb0u: goto label_47edb0;
        case 0x47edb4u: goto label_47edb4;
        case 0x47edb8u: goto label_47edb8;
        case 0x47edbcu: goto label_47edbc;
        case 0x47edc0u: goto label_47edc0;
        case 0x47edc4u: goto label_47edc4;
        case 0x47edc8u: goto label_47edc8;
        case 0x47edccu: goto label_47edcc;
        case 0x47edd0u: goto label_47edd0;
        case 0x47edd4u: goto label_47edd4;
        case 0x47edd8u: goto label_47edd8;
        case 0x47eddcu: goto label_47eddc;
        case 0x47ede0u: goto label_47ede0;
        case 0x47ede4u: goto label_47ede4;
        case 0x47ede8u: goto label_47ede8;
        case 0x47edecu: goto label_47edec;
        case 0x47edf0u: goto label_47edf0;
        case 0x47edf4u: goto label_47edf4;
        case 0x47edf8u: goto label_47edf8;
        case 0x47edfcu: goto label_47edfc;
        case 0x47ee00u: goto label_47ee00;
        case 0x47ee04u: goto label_47ee04;
        case 0x47ee08u: goto label_47ee08;
        case 0x47ee0cu: goto label_47ee0c;
        case 0x47ee10u: goto label_47ee10;
        case 0x47ee14u: goto label_47ee14;
        case 0x47ee18u: goto label_47ee18;
        case 0x47ee1cu: goto label_47ee1c;
        case 0x47ee20u: goto label_47ee20;
        case 0x47ee24u: goto label_47ee24;
        case 0x47ee28u: goto label_47ee28;
        case 0x47ee2cu: goto label_47ee2c;
        case 0x47ee30u: goto label_47ee30;
        case 0x47ee34u: goto label_47ee34;
        case 0x47ee38u: goto label_47ee38;
        case 0x47ee3cu: goto label_47ee3c;
        case 0x47ee40u: goto label_47ee40;
        case 0x47ee44u: goto label_47ee44;
        case 0x47ee48u: goto label_47ee48;
        case 0x47ee4cu: goto label_47ee4c;
        case 0x47ee50u: goto label_47ee50;
        case 0x47ee54u: goto label_47ee54;
        case 0x47ee58u: goto label_47ee58;
        case 0x47ee5cu: goto label_47ee5c;
        case 0x47ee60u: goto label_47ee60;
        case 0x47ee64u: goto label_47ee64;
        case 0x47ee68u: goto label_47ee68;
        case 0x47ee6cu: goto label_47ee6c;
        case 0x47ee70u: goto label_47ee70;
        case 0x47ee74u: goto label_47ee74;
        case 0x47ee78u: goto label_47ee78;
        case 0x47ee7cu: goto label_47ee7c;
        case 0x47ee80u: goto label_47ee80;
        case 0x47ee84u: goto label_47ee84;
        case 0x47ee88u: goto label_47ee88;
        case 0x47ee8cu: goto label_47ee8c;
        case 0x47ee90u: goto label_47ee90;
        case 0x47ee94u: goto label_47ee94;
        case 0x47ee98u: goto label_47ee98;
        case 0x47ee9cu: goto label_47ee9c;
        case 0x47eea0u: goto label_47eea0;
        case 0x47eea4u: goto label_47eea4;
        case 0x47eea8u: goto label_47eea8;
        case 0x47eeacu: goto label_47eeac;
        case 0x47eeb0u: goto label_47eeb0;
        case 0x47eeb4u: goto label_47eeb4;
        case 0x47eeb8u: goto label_47eeb8;
        case 0x47eebcu: goto label_47eebc;
        case 0x47eec0u: goto label_47eec0;
        case 0x47eec4u: goto label_47eec4;
        case 0x47eec8u: goto label_47eec8;
        case 0x47eeccu: goto label_47eecc;
        case 0x47eed0u: goto label_47eed0;
        case 0x47eed4u: goto label_47eed4;
        case 0x47eed8u: goto label_47eed8;
        case 0x47eedcu: goto label_47eedc;
        case 0x47eee0u: goto label_47eee0;
        case 0x47eee4u: goto label_47eee4;
        case 0x47eee8u: goto label_47eee8;
        case 0x47eeecu: goto label_47eeec;
        case 0x47eef0u: goto label_47eef0;
        case 0x47eef4u: goto label_47eef4;
        case 0x47eef8u: goto label_47eef8;
        case 0x47eefcu: goto label_47eefc;
        case 0x47ef00u: goto label_47ef00;
        case 0x47ef04u: goto label_47ef04;
        case 0x47ef08u: goto label_47ef08;
        case 0x47ef0cu: goto label_47ef0c;
        case 0x47ef10u: goto label_47ef10;
        case 0x47ef14u: goto label_47ef14;
        case 0x47ef18u: goto label_47ef18;
        case 0x47ef1cu: goto label_47ef1c;
        case 0x47ef20u: goto label_47ef20;
        case 0x47ef24u: goto label_47ef24;
        case 0x47ef28u: goto label_47ef28;
        case 0x47ef2cu: goto label_47ef2c;
        case 0x47ef30u: goto label_47ef30;
        case 0x47ef34u: goto label_47ef34;
        case 0x47ef38u: goto label_47ef38;
        case 0x47ef3cu: goto label_47ef3c;
        case 0x47ef40u: goto label_47ef40;
        case 0x47ef44u: goto label_47ef44;
        case 0x47ef48u: goto label_47ef48;
        case 0x47ef4cu: goto label_47ef4c;
        case 0x47ef50u: goto label_47ef50;
        case 0x47ef54u: goto label_47ef54;
        case 0x47ef58u: goto label_47ef58;
        case 0x47ef5cu: goto label_47ef5c;
        case 0x47ef60u: goto label_47ef60;
        case 0x47ef64u: goto label_47ef64;
        case 0x47ef68u: goto label_47ef68;
        case 0x47ef6cu: goto label_47ef6c;
        case 0x47ef70u: goto label_47ef70;
        case 0x47ef74u: goto label_47ef74;
        case 0x47ef78u: goto label_47ef78;
        case 0x47ef7cu: goto label_47ef7c;
        case 0x47ef80u: goto label_47ef80;
        case 0x47ef84u: goto label_47ef84;
        case 0x47ef88u: goto label_47ef88;
        case 0x47ef8cu: goto label_47ef8c;
        case 0x47ef90u: goto label_47ef90;
        case 0x47ef94u: goto label_47ef94;
        case 0x47ef98u: goto label_47ef98;
        case 0x47ef9cu: goto label_47ef9c;
        case 0x47efa0u: goto label_47efa0;
        case 0x47efa4u: goto label_47efa4;
        case 0x47efa8u: goto label_47efa8;
        case 0x47efacu: goto label_47efac;
        case 0x47efb0u: goto label_47efb0;
        case 0x47efb4u: goto label_47efb4;
        case 0x47efb8u: goto label_47efb8;
        case 0x47efbcu: goto label_47efbc;
        case 0x47efc0u: goto label_47efc0;
        case 0x47efc4u: goto label_47efc4;
        case 0x47efc8u: goto label_47efc8;
        case 0x47efccu: goto label_47efcc;
        case 0x47efd0u: goto label_47efd0;
        case 0x47efd4u: goto label_47efd4;
        case 0x47efd8u: goto label_47efd8;
        case 0x47efdcu: goto label_47efdc;
        case 0x47efe0u: goto label_47efe0;
        case 0x47efe4u: goto label_47efe4;
        case 0x47efe8u: goto label_47efe8;
        case 0x47efecu: goto label_47efec;
        case 0x47eff0u: goto label_47eff0;
        case 0x47eff4u: goto label_47eff4;
        case 0x47eff8u: goto label_47eff8;
        case 0x47effcu: goto label_47effc;
        case 0x47f000u: goto label_47f000;
        case 0x47f004u: goto label_47f004;
        case 0x47f008u: goto label_47f008;
        case 0x47f00cu: goto label_47f00c;
        case 0x47f010u: goto label_47f010;
        case 0x47f014u: goto label_47f014;
        case 0x47f018u: goto label_47f018;
        case 0x47f01cu: goto label_47f01c;
        case 0x47f020u: goto label_47f020;
        case 0x47f024u: goto label_47f024;
        case 0x47f028u: goto label_47f028;
        case 0x47f02cu: goto label_47f02c;
        case 0x47f030u: goto label_47f030;
        case 0x47f034u: goto label_47f034;
        case 0x47f038u: goto label_47f038;
        case 0x47f03cu: goto label_47f03c;
        case 0x47f040u: goto label_47f040;
        case 0x47f044u: goto label_47f044;
        case 0x47f048u: goto label_47f048;
        case 0x47f04cu: goto label_47f04c;
        case 0x47f050u: goto label_47f050;
        case 0x47f054u: goto label_47f054;
        case 0x47f058u: goto label_47f058;
        case 0x47f05cu: goto label_47f05c;
        case 0x47f060u: goto label_47f060;
        case 0x47f064u: goto label_47f064;
        case 0x47f068u: goto label_47f068;
        case 0x47f06cu: goto label_47f06c;
        case 0x47f070u: goto label_47f070;
        case 0x47f074u: goto label_47f074;
        case 0x47f078u: goto label_47f078;
        case 0x47f07cu: goto label_47f07c;
        case 0x47f080u: goto label_47f080;
        case 0x47f084u: goto label_47f084;
        case 0x47f088u: goto label_47f088;
        case 0x47f08cu: goto label_47f08c;
        case 0x47f090u: goto label_47f090;
        case 0x47f094u: goto label_47f094;
        case 0x47f098u: goto label_47f098;
        case 0x47f09cu: goto label_47f09c;
        case 0x47f0a0u: goto label_47f0a0;
        case 0x47f0a4u: goto label_47f0a4;
        case 0x47f0a8u: goto label_47f0a8;
        case 0x47f0acu: goto label_47f0ac;
        case 0x47f0b0u: goto label_47f0b0;
        case 0x47f0b4u: goto label_47f0b4;
        case 0x47f0b8u: goto label_47f0b8;
        case 0x47f0bcu: goto label_47f0bc;
        case 0x47f0c0u: goto label_47f0c0;
        case 0x47f0c4u: goto label_47f0c4;
        case 0x47f0c8u: goto label_47f0c8;
        case 0x47f0ccu: goto label_47f0cc;
        case 0x47f0d0u: goto label_47f0d0;
        case 0x47f0d4u: goto label_47f0d4;
        case 0x47f0d8u: goto label_47f0d8;
        case 0x47f0dcu: goto label_47f0dc;
        case 0x47f0e0u: goto label_47f0e0;
        case 0x47f0e4u: goto label_47f0e4;
        case 0x47f0e8u: goto label_47f0e8;
        case 0x47f0ecu: goto label_47f0ec;
        case 0x47f0f0u: goto label_47f0f0;
        case 0x47f0f4u: goto label_47f0f4;
        case 0x47f0f8u: goto label_47f0f8;
        case 0x47f0fcu: goto label_47f0fc;
        case 0x47f100u: goto label_47f100;
        case 0x47f104u: goto label_47f104;
        case 0x47f108u: goto label_47f108;
        case 0x47f10cu: goto label_47f10c;
        case 0x47f110u: goto label_47f110;
        case 0x47f114u: goto label_47f114;
        case 0x47f118u: goto label_47f118;
        case 0x47f11cu: goto label_47f11c;
        case 0x47f120u: goto label_47f120;
        case 0x47f124u: goto label_47f124;
        case 0x47f128u: goto label_47f128;
        case 0x47f12cu: goto label_47f12c;
        case 0x47f130u: goto label_47f130;
        case 0x47f134u: goto label_47f134;
        case 0x47f138u: goto label_47f138;
        case 0x47f13cu: goto label_47f13c;
        case 0x47f140u: goto label_47f140;
        case 0x47f144u: goto label_47f144;
        case 0x47f148u: goto label_47f148;
        case 0x47f14cu: goto label_47f14c;
        case 0x47f150u: goto label_47f150;
        case 0x47f154u: goto label_47f154;
        case 0x47f158u: goto label_47f158;
        case 0x47f15cu: goto label_47f15c;
        case 0x47f160u: goto label_47f160;
        case 0x47f164u: goto label_47f164;
        case 0x47f168u: goto label_47f168;
        case 0x47f16cu: goto label_47f16c;
        case 0x47f170u: goto label_47f170;
        case 0x47f174u: goto label_47f174;
        case 0x47f178u: goto label_47f178;
        case 0x47f17cu: goto label_47f17c;
        case 0x47f180u: goto label_47f180;
        case 0x47f184u: goto label_47f184;
        case 0x47f188u: goto label_47f188;
        case 0x47f18cu: goto label_47f18c;
        case 0x47f190u: goto label_47f190;
        case 0x47f194u: goto label_47f194;
        case 0x47f198u: goto label_47f198;
        case 0x47f19cu: goto label_47f19c;
        case 0x47f1a0u: goto label_47f1a0;
        case 0x47f1a4u: goto label_47f1a4;
        case 0x47f1a8u: goto label_47f1a8;
        case 0x47f1acu: goto label_47f1ac;
        case 0x47f1b0u: goto label_47f1b0;
        case 0x47f1b4u: goto label_47f1b4;
        case 0x47f1b8u: goto label_47f1b8;
        case 0x47f1bcu: goto label_47f1bc;
        case 0x47f1c0u: goto label_47f1c0;
        case 0x47f1c4u: goto label_47f1c4;
        case 0x47f1c8u: goto label_47f1c8;
        case 0x47f1ccu: goto label_47f1cc;
        case 0x47f1d0u: goto label_47f1d0;
        case 0x47f1d4u: goto label_47f1d4;
        case 0x47f1d8u: goto label_47f1d8;
        case 0x47f1dcu: goto label_47f1dc;
        case 0x47f1e0u: goto label_47f1e0;
        case 0x47f1e4u: goto label_47f1e4;
        case 0x47f1e8u: goto label_47f1e8;
        case 0x47f1ecu: goto label_47f1ec;
        case 0x47f1f0u: goto label_47f1f0;
        case 0x47f1f4u: goto label_47f1f4;
        case 0x47f1f8u: goto label_47f1f8;
        case 0x47f1fcu: goto label_47f1fc;
        case 0x47f200u: goto label_47f200;
        case 0x47f204u: goto label_47f204;
        case 0x47f208u: goto label_47f208;
        case 0x47f20cu: goto label_47f20c;
        case 0x47f210u: goto label_47f210;
        case 0x47f214u: goto label_47f214;
        case 0x47f218u: goto label_47f218;
        case 0x47f21cu: goto label_47f21c;
        case 0x47f220u: goto label_47f220;
        case 0x47f224u: goto label_47f224;
        case 0x47f228u: goto label_47f228;
        case 0x47f22cu: goto label_47f22c;
        case 0x47f230u: goto label_47f230;
        case 0x47f234u: goto label_47f234;
        case 0x47f238u: goto label_47f238;
        case 0x47f23cu: goto label_47f23c;
        case 0x47f240u: goto label_47f240;
        case 0x47f244u: goto label_47f244;
        case 0x47f248u: goto label_47f248;
        case 0x47f24cu: goto label_47f24c;
        case 0x47f250u: goto label_47f250;
        case 0x47f254u: goto label_47f254;
        case 0x47f258u: goto label_47f258;
        case 0x47f25cu: goto label_47f25c;
        case 0x47f260u: goto label_47f260;
        case 0x47f264u: goto label_47f264;
        case 0x47f268u: goto label_47f268;
        case 0x47f26cu: goto label_47f26c;
        case 0x47f270u: goto label_47f270;
        case 0x47f274u: goto label_47f274;
        case 0x47f278u: goto label_47f278;
        case 0x47f27cu: goto label_47f27c;
        case 0x47f280u: goto label_47f280;
        case 0x47f284u: goto label_47f284;
        case 0x47f288u: goto label_47f288;
        case 0x47f28cu: goto label_47f28c;
        case 0x47f290u: goto label_47f290;
        case 0x47f294u: goto label_47f294;
        case 0x47f298u: goto label_47f298;
        case 0x47f29cu: goto label_47f29c;
        case 0x47f2a0u: goto label_47f2a0;
        case 0x47f2a4u: goto label_47f2a4;
        case 0x47f2a8u: goto label_47f2a8;
        case 0x47f2acu: goto label_47f2ac;
        case 0x47f2b0u: goto label_47f2b0;
        case 0x47f2b4u: goto label_47f2b4;
        case 0x47f2b8u: goto label_47f2b8;
        case 0x47f2bcu: goto label_47f2bc;
        case 0x47f2c0u: goto label_47f2c0;
        case 0x47f2c4u: goto label_47f2c4;
        case 0x47f2c8u: goto label_47f2c8;
        case 0x47f2ccu: goto label_47f2cc;
        case 0x47f2d0u: goto label_47f2d0;
        case 0x47f2d4u: goto label_47f2d4;
        case 0x47f2d8u: goto label_47f2d8;
        case 0x47f2dcu: goto label_47f2dc;
        case 0x47f2e0u: goto label_47f2e0;
        case 0x47f2e4u: goto label_47f2e4;
        case 0x47f2e8u: goto label_47f2e8;
        case 0x47f2ecu: goto label_47f2ec;
        case 0x47f2f0u: goto label_47f2f0;
        case 0x47f2f4u: goto label_47f2f4;
        case 0x47f2f8u: goto label_47f2f8;
        case 0x47f2fcu: goto label_47f2fc;
        case 0x47f300u: goto label_47f300;
        case 0x47f304u: goto label_47f304;
        case 0x47f308u: goto label_47f308;
        case 0x47f30cu: goto label_47f30c;
        case 0x47f310u: goto label_47f310;
        case 0x47f314u: goto label_47f314;
        case 0x47f318u: goto label_47f318;
        case 0x47f31cu: goto label_47f31c;
        case 0x47f320u: goto label_47f320;
        case 0x47f324u: goto label_47f324;
        case 0x47f328u: goto label_47f328;
        case 0x47f32cu: goto label_47f32c;
        case 0x47f330u: goto label_47f330;
        case 0x47f334u: goto label_47f334;
        case 0x47f338u: goto label_47f338;
        case 0x47f33cu: goto label_47f33c;
        case 0x47f340u: goto label_47f340;
        case 0x47f344u: goto label_47f344;
        case 0x47f348u: goto label_47f348;
        case 0x47f34cu: goto label_47f34c;
        case 0x47f350u: goto label_47f350;
        case 0x47f354u: goto label_47f354;
        case 0x47f358u: goto label_47f358;
        case 0x47f35cu: goto label_47f35c;
        case 0x47f360u: goto label_47f360;
        case 0x47f364u: goto label_47f364;
        case 0x47f368u: goto label_47f368;
        case 0x47f36cu: goto label_47f36c;
        case 0x47f370u: goto label_47f370;
        case 0x47f374u: goto label_47f374;
        case 0x47f378u: goto label_47f378;
        case 0x47f37cu: goto label_47f37c;
        case 0x47f380u: goto label_47f380;
        case 0x47f384u: goto label_47f384;
        case 0x47f388u: goto label_47f388;
        case 0x47f38cu: goto label_47f38c;
        case 0x47f390u: goto label_47f390;
        case 0x47f394u: goto label_47f394;
        case 0x47f398u: goto label_47f398;
        case 0x47f39cu: goto label_47f39c;
        case 0x47f3a0u: goto label_47f3a0;
        case 0x47f3a4u: goto label_47f3a4;
        case 0x47f3a8u: goto label_47f3a8;
        case 0x47f3acu: goto label_47f3ac;
        case 0x47f3b0u: goto label_47f3b0;
        case 0x47f3b4u: goto label_47f3b4;
        case 0x47f3b8u: goto label_47f3b8;
        case 0x47f3bcu: goto label_47f3bc;
        case 0x47f3c0u: goto label_47f3c0;
        case 0x47f3c4u: goto label_47f3c4;
        case 0x47f3c8u: goto label_47f3c8;
        case 0x47f3ccu: goto label_47f3cc;
        case 0x47f3d0u: goto label_47f3d0;
        case 0x47f3d4u: goto label_47f3d4;
        case 0x47f3d8u: goto label_47f3d8;
        case 0x47f3dcu: goto label_47f3dc;
        case 0x47f3e0u: goto label_47f3e0;
        case 0x47f3e4u: goto label_47f3e4;
        case 0x47f3e8u: goto label_47f3e8;
        case 0x47f3ecu: goto label_47f3ec;
        case 0x47f3f0u: goto label_47f3f0;
        case 0x47f3f4u: goto label_47f3f4;
        case 0x47f3f8u: goto label_47f3f8;
        case 0x47f3fcu: goto label_47f3fc;
        case 0x47f400u: goto label_47f400;
        case 0x47f404u: goto label_47f404;
        case 0x47f408u: goto label_47f408;
        case 0x47f40cu: goto label_47f40c;
        case 0x47f410u: goto label_47f410;
        case 0x47f414u: goto label_47f414;
        case 0x47f418u: goto label_47f418;
        case 0x47f41cu: goto label_47f41c;
        case 0x47f420u: goto label_47f420;
        case 0x47f424u: goto label_47f424;
        case 0x47f428u: goto label_47f428;
        case 0x47f42cu: goto label_47f42c;
        case 0x47f430u: goto label_47f430;
        case 0x47f434u: goto label_47f434;
        case 0x47f438u: goto label_47f438;
        case 0x47f43cu: goto label_47f43c;
        case 0x47f440u: goto label_47f440;
        case 0x47f444u: goto label_47f444;
        case 0x47f448u: goto label_47f448;
        case 0x47f44cu: goto label_47f44c;
        case 0x47f450u: goto label_47f450;
        case 0x47f454u: goto label_47f454;
        case 0x47f458u: goto label_47f458;
        case 0x47f45cu: goto label_47f45c;
        case 0x47f460u: goto label_47f460;
        case 0x47f464u: goto label_47f464;
        case 0x47f468u: goto label_47f468;
        case 0x47f46cu: goto label_47f46c;
        case 0x47f470u: goto label_47f470;
        case 0x47f474u: goto label_47f474;
        case 0x47f478u: goto label_47f478;
        case 0x47f47cu: goto label_47f47c;
        case 0x47f480u: goto label_47f480;
        case 0x47f484u: goto label_47f484;
        case 0x47f488u: goto label_47f488;
        case 0x47f48cu: goto label_47f48c;
        case 0x47f490u: goto label_47f490;
        case 0x47f494u: goto label_47f494;
        case 0x47f498u: goto label_47f498;
        case 0x47f49cu: goto label_47f49c;
        case 0x47f4a0u: goto label_47f4a0;
        case 0x47f4a4u: goto label_47f4a4;
        case 0x47f4a8u: goto label_47f4a8;
        case 0x47f4acu: goto label_47f4ac;
        case 0x47f4b0u: goto label_47f4b0;
        case 0x47f4b4u: goto label_47f4b4;
        case 0x47f4b8u: goto label_47f4b8;
        case 0x47f4bcu: goto label_47f4bc;
        case 0x47f4c0u: goto label_47f4c0;
        case 0x47f4c4u: goto label_47f4c4;
        case 0x47f4c8u: goto label_47f4c8;
        case 0x47f4ccu: goto label_47f4cc;
        case 0x47f4d0u: goto label_47f4d0;
        case 0x47f4d4u: goto label_47f4d4;
        case 0x47f4d8u: goto label_47f4d8;
        case 0x47f4dcu: goto label_47f4dc;
        case 0x47f4e0u: goto label_47f4e0;
        case 0x47f4e4u: goto label_47f4e4;
        case 0x47f4e8u: goto label_47f4e8;
        case 0x47f4ecu: goto label_47f4ec;
        case 0x47f4f0u: goto label_47f4f0;
        case 0x47f4f4u: goto label_47f4f4;
        case 0x47f4f8u: goto label_47f4f8;
        case 0x47f4fcu: goto label_47f4fc;
        case 0x47f500u: goto label_47f500;
        case 0x47f504u: goto label_47f504;
        case 0x47f508u: goto label_47f508;
        case 0x47f50cu: goto label_47f50c;
        case 0x47f510u: goto label_47f510;
        case 0x47f514u: goto label_47f514;
        case 0x47f518u: goto label_47f518;
        case 0x47f51cu: goto label_47f51c;
        case 0x47f520u: goto label_47f520;
        case 0x47f524u: goto label_47f524;
        case 0x47f528u: goto label_47f528;
        case 0x47f52cu: goto label_47f52c;
        case 0x47f530u: goto label_47f530;
        case 0x47f534u: goto label_47f534;
        case 0x47f538u: goto label_47f538;
        case 0x47f53cu: goto label_47f53c;
        case 0x47f540u: goto label_47f540;
        case 0x47f544u: goto label_47f544;
        case 0x47f548u: goto label_47f548;
        case 0x47f54cu: goto label_47f54c;
        case 0x47f550u: goto label_47f550;
        case 0x47f554u: goto label_47f554;
        case 0x47f558u: goto label_47f558;
        case 0x47f55cu: goto label_47f55c;
        case 0x47f560u: goto label_47f560;
        case 0x47f564u: goto label_47f564;
        case 0x47f568u: goto label_47f568;
        case 0x47f56cu: goto label_47f56c;
        case 0x47f570u: goto label_47f570;
        case 0x47f574u: goto label_47f574;
        case 0x47f578u: goto label_47f578;
        case 0x47f57cu: goto label_47f57c;
        case 0x47f580u: goto label_47f580;
        case 0x47f584u: goto label_47f584;
        case 0x47f588u: goto label_47f588;
        case 0x47f58cu: goto label_47f58c;
        case 0x47f590u: goto label_47f590;
        case 0x47f594u: goto label_47f594;
        case 0x47f598u: goto label_47f598;
        case 0x47f59cu: goto label_47f59c;
        case 0x47f5a0u: goto label_47f5a0;
        case 0x47f5a4u: goto label_47f5a4;
        case 0x47f5a8u: goto label_47f5a8;
        case 0x47f5acu: goto label_47f5ac;
        case 0x47f5b0u: goto label_47f5b0;
        case 0x47f5b4u: goto label_47f5b4;
        case 0x47f5b8u: goto label_47f5b8;
        case 0x47f5bcu: goto label_47f5bc;
        case 0x47f5c0u: goto label_47f5c0;
        case 0x47f5c4u: goto label_47f5c4;
        case 0x47f5c8u: goto label_47f5c8;
        case 0x47f5ccu: goto label_47f5cc;
        case 0x47f5d0u: goto label_47f5d0;
        case 0x47f5d4u: goto label_47f5d4;
        case 0x47f5d8u: goto label_47f5d8;
        case 0x47f5dcu: goto label_47f5dc;
        case 0x47f5e0u: goto label_47f5e0;
        case 0x47f5e4u: goto label_47f5e4;
        case 0x47f5e8u: goto label_47f5e8;
        case 0x47f5ecu: goto label_47f5ec;
        case 0x47f5f0u: goto label_47f5f0;
        case 0x47f5f4u: goto label_47f5f4;
        case 0x47f5f8u: goto label_47f5f8;
        case 0x47f5fcu: goto label_47f5fc;
        case 0x47f600u: goto label_47f600;
        case 0x47f604u: goto label_47f604;
        case 0x47f608u: goto label_47f608;
        case 0x47f60cu: goto label_47f60c;
        case 0x47f610u: goto label_47f610;
        case 0x47f614u: goto label_47f614;
        case 0x47f618u: goto label_47f618;
        case 0x47f61cu: goto label_47f61c;
        case 0x47f620u: goto label_47f620;
        case 0x47f624u: goto label_47f624;
        case 0x47f628u: goto label_47f628;
        case 0x47f62cu: goto label_47f62c;
        case 0x47f630u: goto label_47f630;
        case 0x47f634u: goto label_47f634;
        case 0x47f638u: goto label_47f638;
        case 0x47f63cu: goto label_47f63c;
        case 0x47f640u: goto label_47f640;
        case 0x47f644u: goto label_47f644;
        case 0x47f648u: goto label_47f648;
        case 0x47f64cu: goto label_47f64c;
        case 0x47f650u: goto label_47f650;
        case 0x47f654u: goto label_47f654;
        case 0x47f658u: goto label_47f658;
        case 0x47f65cu: goto label_47f65c;
        case 0x47f660u: goto label_47f660;
        case 0x47f664u: goto label_47f664;
        case 0x47f668u: goto label_47f668;
        case 0x47f66cu: goto label_47f66c;
        case 0x47f670u: goto label_47f670;
        case 0x47f674u: goto label_47f674;
        case 0x47f678u: goto label_47f678;
        case 0x47f67cu: goto label_47f67c;
        case 0x47f680u: goto label_47f680;
        case 0x47f684u: goto label_47f684;
        case 0x47f688u: goto label_47f688;
        case 0x47f68cu: goto label_47f68c;
        case 0x47f690u: goto label_47f690;
        case 0x47f694u: goto label_47f694;
        case 0x47f698u: goto label_47f698;
        case 0x47f69cu: goto label_47f69c;
        case 0x47f6a0u: goto label_47f6a0;
        case 0x47f6a4u: goto label_47f6a4;
        case 0x47f6a8u: goto label_47f6a8;
        case 0x47f6acu: goto label_47f6ac;
        case 0x47f6b0u: goto label_47f6b0;
        case 0x47f6b4u: goto label_47f6b4;
        case 0x47f6b8u: goto label_47f6b8;
        case 0x47f6bcu: goto label_47f6bc;
        case 0x47f6c0u: goto label_47f6c0;
        case 0x47f6c4u: goto label_47f6c4;
        case 0x47f6c8u: goto label_47f6c8;
        case 0x47f6ccu: goto label_47f6cc;
        case 0x47f6d0u: goto label_47f6d0;
        case 0x47f6d4u: goto label_47f6d4;
        case 0x47f6d8u: goto label_47f6d8;
        case 0x47f6dcu: goto label_47f6dc;
        case 0x47f6e0u: goto label_47f6e0;
        case 0x47f6e4u: goto label_47f6e4;
        case 0x47f6e8u: goto label_47f6e8;
        case 0x47f6ecu: goto label_47f6ec;
        case 0x47f6f0u: goto label_47f6f0;
        case 0x47f6f4u: goto label_47f6f4;
        case 0x47f6f8u: goto label_47f6f8;
        case 0x47f6fcu: goto label_47f6fc;
        case 0x47f700u: goto label_47f700;
        case 0x47f704u: goto label_47f704;
        case 0x47f708u: goto label_47f708;
        case 0x47f70cu: goto label_47f70c;
        case 0x47f710u: goto label_47f710;
        case 0x47f714u: goto label_47f714;
        case 0x47f718u: goto label_47f718;
        case 0x47f71cu: goto label_47f71c;
        case 0x47f720u: goto label_47f720;
        case 0x47f724u: goto label_47f724;
        case 0x47f728u: goto label_47f728;
        case 0x47f72cu: goto label_47f72c;
        case 0x47f730u: goto label_47f730;
        case 0x47f734u: goto label_47f734;
        case 0x47f738u: goto label_47f738;
        case 0x47f73cu: goto label_47f73c;
        case 0x47f740u: goto label_47f740;
        case 0x47f744u: goto label_47f744;
        case 0x47f748u: goto label_47f748;
        case 0x47f74cu: goto label_47f74c;
        case 0x47f750u: goto label_47f750;
        case 0x47f754u: goto label_47f754;
        case 0x47f758u: goto label_47f758;
        case 0x47f75cu: goto label_47f75c;
        case 0x47f760u: goto label_47f760;
        case 0x47f764u: goto label_47f764;
        case 0x47f768u: goto label_47f768;
        case 0x47f76cu: goto label_47f76c;
        case 0x47f770u: goto label_47f770;
        case 0x47f774u: goto label_47f774;
        case 0x47f778u: goto label_47f778;
        case 0x47f77cu: goto label_47f77c;
        case 0x47f780u: goto label_47f780;
        case 0x47f784u: goto label_47f784;
        case 0x47f788u: goto label_47f788;
        case 0x47f78cu: goto label_47f78c;
        default: break;
    }

    ctx->pc = 0x47ec60u;

label_47ec60:
    // 0x47ec60: 0x27bdf320  addiu       $sp, $sp, -0xCE0
    ctx->pc = 0x47ec60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294964000));
label_47ec64:
    // 0x47ec64: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x47ec64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_47ec68:
    // 0x47ec68: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x47ec68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_47ec6c:
    // 0x47ec6c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x47ec6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_47ec70:
    // 0x47ec70: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x47ec70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_47ec74:
    // 0x47ec74: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x47ec74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_47ec78:
    // 0x47ec78: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x47ec78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_47ec7c:
    // 0x47ec7c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x47ec7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_47ec80:
    // 0x47ec80: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x47ec80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_47ec84:
    // 0x47ec84: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x47ec84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_47ec88:
    // 0x47ec88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x47ec88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_47ec8c:
    // 0x47ec8c: 0xafa40cc0  sw          $a0, 0xCC0($sp)
    ctx->pc = 0x47ec8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 3264), GPR_U32(ctx, 4));
label_47ec90:
    // 0x47ec90: 0x8fa20cc0  lw          $v0, 0xCC0($sp)
    ctx->pc = 0x47ec90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3264)));
label_47ec94:
    // 0x47ec94: 0x8c440018  lw          $a0, 0x18($v0)
    ctx->pc = 0x47ec94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_47ec98:
    // 0x47ec98: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x47ec98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_47ec9c:
    // 0x47ec9c: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x47ec9cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_47eca0:
    // 0x47eca0: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
label_47eca4:
    if (ctx->pc == 0x47ECA4u) {
        ctx->pc = 0x47ECA8u;
        goto label_47eca8;
    }
    ctx->pc = 0x47ECA0u;
    {
        const bool branch_taken_0x47eca0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x47eca0) {
            ctx->pc = 0x47ECC0u;
            goto label_47ecc0;
        }
    }
    ctx->pc = 0x47ECA8u;
label_47eca8:
    // 0x47eca8: 0x8e25001c  lw          $a1, 0x1C($s1)
    ctx->pc = 0x47eca8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_47ecac:
    // 0x47ecac: 0x28a10002  slti        $at, $a1, 0x2
    ctx->pc = 0x47ecacu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
label_47ecb0:
    // 0x47ecb0: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_47ecb4:
    if (ctx->pc == 0x47ECB4u) {
        ctx->pc = 0x47ECB8u;
        goto label_47ecb8;
    }
    ctx->pc = 0x47ECB0u;
    {
        const bool branch_taken_0x47ecb0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x47ecb0) {
            ctx->pc = 0x47ECC0u;
            goto label_47ecc0;
        }
    }
    ctx->pc = 0x47ECB8u;
label_47ecb8:
    // 0x47ecb8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x47ecb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_47ecbc:
    // 0x47ecbc: 0x305700ff  andi        $s7, $v0, 0xFF
    ctx->pc = 0x47ecbcu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_47ecc0:
    // 0x47ecc0: 0x32e200ff  andi        $v0, $s7, 0xFF
    ctx->pc = 0x47ecc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)255);
label_47ecc4:
    // 0x47ecc4: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_47ecc8:
    if (ctx->pc == 0x47ECC8u) {
        ctx->pc = 0x47ECCCu;
        goto label_47eccc;
    }
    ctx->pc = 0x47ECC4u;
    {
        const bool branch_taken_0x47ecc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x47ecc4) {
            ctx->pc = 0x47ED74u;
            goto label_47ed74;
        }
    }
    ctx->pc = 0x47ECCCu;
label_47eccc:
    // 0x47eccc: 0x8f82b528  lw          $v0, -0x4AD8($gp)
    ctx->pc = 0x47ecccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948136)));
label_47ecd0:
    // 0x47ecd0: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_47ecd4:
    if (ctx->pc == 0x47ECD4u) {
        ctx->pc = 0x47ECD8u;
        goto label_47ecd8;
    }
    ctx->pc = 0x47ECD0u;
    {
        const bool branch_taken_0x47ecd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47ecd0) {
            ctx->pc = 0x47ED74u;
            goto label_47ed74;
        }
    }
    ctx->pc = 0x47ECD8u;
label_47ecd8:
    // 0x47ecd8: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x47ecd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_47ecdc:
    // 0x47ecdc: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x47ecdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_47ece0:
    // 0x47ece0: 0x27a60ca0  addiu       $a2, $sp, 0xCA0
    ctx->pc = 0x47ece0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 3232));
label_47ece4:
    // 0x47ece4: 0xc115ee8  jal         func_457BA0
label_47ece8:
    if (ctx->pc == 0x47ECE8u) {
        ctx->pc = 0x47ECECu;
        goto label_47ecec;
    }
    ctx->pc = 0x47ECE4u;
    SET_GPR_U32(ctx, 31, 0x47ECECu);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x47ECE4u, 0x47ECECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47ECECu;
label_47ecec:
    // 0x47ecec: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_47ecf0:
    if (ctx->pc == 0x47ECF0u) {
        ctx->pc = 0x47ECF4u;
        goto label_47ecf4;
    }
    ctx->pc = 0x47ECECu;
    {
        const bool branch_taken_0x47ecec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47ecec) {
            ctx->pc = 0x47ED74u;
            goto label_47ed74;
        }
    }
    ctx->pc = 0x47ECF4u;
label_47ecf4:
    // 0x47ecf4: 0x8fa20ca8  lw          $v0, 0xCA8($sp)
    ctx->pc = 0x47ecf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3240)));
label_47ecf8:
    // 0x47ecf8: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_47ecfc:
    if (ctx->pc == 0x47ECFCu) {
        ctx->pc = 0x47ED00u;
        goto label_47ed00;
    }
    ctx->pc = 0x47ECF8u;
    {
        const bool branch_taken_0x47ecf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47ecf8) {
            ctx->pc = 0x47ED74u;
            goto label_47ed74;
        }
    }
    ctx->pc = 0x47ED00u;
label_47ed00:
    // 0x47ed00: 0x27a40ac0  addiu       $a0, $sp, 0xAC0
    ctx->pc = 0x47ed00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 2752));
label_47ed04:
    // 0x47ed04: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x47ed04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_47ed08:
    // 0x47ed08: 0x8fa60ca4  lw          $a2, 0xCA4($sp)
    ctx->pc = 0x47ed08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3236)));
label_47ed0c:
    // 0x47ed0c: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x47ed0cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_47ed10:
    // 0x47ed10: 0x24e71920  addiu       $a3, $a3, 0x1920
    ctx->pc = 0x47ed10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 6432));
label_47ed14:
    // 0x47ed14: 0x24080042  addiu       $t0, $zero, 0x42
    ctx->pc = 0x47ed14u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_47ed18:
    // 0x47ed18: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x47ed18u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_47ed1c:
    // 0x47ed1c: 0x25291930  addiu       $t1, $t1, 0x1930
    ctx->pc = 0x47ed1cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 6448));
label_47ed20:
    // 0x47ed20: 0xc113940  jal         func_44E500
label_47ed24:
    if (ctx->pc == 0x47ED24u) {
        ctx->pc = 0x47ED28u;
        goto label_47ed28;
    }
    ctx->pc = 0x47ED20u;
    SET_GPR_U32(ctx, 31, 0x47ED28u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x47ED20u, 0x47ED28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47ED28u;
label_47ed28:
    // 0x47ed28: 0x27a40ac0  addiu       $a0, $sp, 0xAC0
    ctx->pc = 0x47ed28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 2752));
label_47ed2c:
    // 0x47ed2c: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x47ed2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_47ed30:
    // 0x47ed30: 0x24a51970  addiu       $a1, $a1, 0x1970
    ctx->pc = 0x47ed30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6512));
label_47ed34:
    // 0x47ed34: 0xc115c24  jal         func_457090
label_47ed38:
    if (ctx->pc == 0x47ED38u) {
        ctx->pc = 0x47ED3Cu;
        goto label_47ed3c;
    }
    ctx->pc = 0x47ED34u;
    SET_GPR_U32(ctx, 31, 0x47ED3Cu);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x47ED34u, 0x47ED3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47ED3Cu;
label_47ed3c:
    // 0x47ed3c: 0x27a40ac0  addiu       $a0, $sp, 0xAC0
    ctx->pc = 0x47ed3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 2752));
label_47ed40:
    // 0x47ed40: 0x8fa20ca8  lw          $v0, 0xCA8($sp)
    ctx->pc = 0x47ed40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3240)));
label_47ed44:
    // 0x47ed44: 0x40f809  jalr        $v0
label_47ed48:
    if (ctx->pc == 0x47ED48u) {
        ctx->pc = 0x47ED4Cu;
        goto label_47ed4c;
    }
    ctx->pc = 0x47ED44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x47ED4Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47ED44u, 0x47ED4Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x47ED4Cu;
label_47ed4c:
    // 0x47ed4c: 0xaf82b528  sw          $v0, -0x4AD8($gp)
    ctx->pc = 0x47ed4cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948136), GPR_U32(ctx, 2));
label_47ed50:
    // 0x47ed50: 0x8fa20ac0  lw          $v0, 0xAC0($sp)
    ctx->pc = 0x47ed50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2752)));
label_47ed54:
    // 0x47ed54: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_47ed58:
    if (ctx->pc == 0x47ED58u) {
        ctx->pc = 0x47ED5Cu;
        goto label_47ed5c;
    }
    ctx->pc = 0x47ED54u;
    {
        const bool branch_taken_0x47ed54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47ed54) {
            ctx->pc = 0x47ED64u;
            goto label_47ed64;
        }
    }
    ctx->pc = 0x47ED5Cu;
label_47ed5c:
    // 0x47ed5c: 0xd  break       0
    ctx->pc = 0x47ed5cu;
    runtime->handleBreak(rdram, ctx);
label_47ed60:
    // 0x47ed60: 0x0  nop
    ctx->pc = 0x47ed60u;
    // NOP
label_47ed64:
    // 0x47ed64: 0x27a40ac0  addiu       $a0, $sp, 0xAC0
    ctx->pc = 0x47ed64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 2752));
label_47ed68:
    // 0x47ed68: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x47ed68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_47ed6c:
    // 0x47ed6c: 0xc11392c  jal         func_44E4B0
label_47ed70:
    if (ctx->pc == 0x47ED70u) {
        ctx->pc = 0x47ED74u;
        goto label_47ed74;
    }
    ctx->pc = 0x47ED6Cu;
    SET_GPR_U32(ctx, 31, 0x47ED74u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x47ED6Cu, 0x47ED74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47ED74u;
label_47ed74:
    // 0x47ed74: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x47ed74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_47ed78:
    // 0x47ed78: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x47ed78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_47ed7c:
    // 0x47ed7c: 0xc0e33ee  jal         func_38CFB8
label_47ed80:
    if (ctx->pc == 0x47ED80u) {
        ctx->pc = 0x47ED84u;
        goto label_47ed84;
    }
    ctx->pc = 0x47ED7Cu;
    SET_GPR_U32(ctx, 31, 0x47ED84u);
    ctx->pc = 0x38CFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CFB8u, 0x47ED7Cu, 0x47ED84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47ED84u;
label_47ed84:
    // 0x47ed84: 0x1620002b  bnez        $s1, . + 4 + (0x2B << 2)
label_47ed88:
    if (ctx->pc == 0x47ED88u) {
        ctx->pc = 0x47ED8Cu;
        goto label_47ed8c;
    }
    ctx->pc = 0x47ED84u;
    {
        const bool branch_taken_0x47ed84 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x47ed84) {
            ctx->pc = 0x47EE34u;
            goto label_47ee34;
        }
    }
    ctx->pc = 0x47ED8Cu;
label_47ed8c:
    // 0x47ed8c: 0x8f82b52c  lw          $v0, -0x4AD4($gp)
    ctx->pc = 0x47ed8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948140)));
label_47ed90:
    // 0x47ed90: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_47ed94:
    if (ctx->pc == 0x47ED94u) {
        ctx->pc = 0x47ED98u;
        goto label_47ed98;
    }
    ctx->pc = 0x47ED90u;
    {
        const bool branch_taken_0x47ed90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47ed90) {
            ctx->pc = 0x47EE34u;
            goto label_47ee34;
        }
    }
    ctx->pc = 0x47ED98u;
label_47ed98:
    // 0x47ed98: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x47ed98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_47ed9c:
    // 0x47ed9c: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x47ed9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_47eda0:
    // 0x47eda0: 0x27a60c90  addiu       $a2, $sp, 0xC90
    ctx->pc = 0x47eda0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 3216));
label_47eda4:
    // 0x47eda4: 0xc115ee8  jal         func_457BA0
label_47eda8:
    if (ctx->pc == 0x47EDA8u) {
        ctx->pc = 0x47EDACu;
        goto label_47edac;
    }
    ctx->pc = 0x47EDA4u;
    SET_GPR_U32(ctx, 31, 0x47EDACu);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x47EDA4u, 0x47EDACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47EDACu;
label_47edac:
    // 0x47edac: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_47edb0:
    if (ctx->pc == 0x47EDB0u) {
        ctx->pc = 0x47EDB4u;
        goto label_47edb4;
    }
    ctx->pc = 0x47EDACu;
    {
        const bool branch_taken_0x47edac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47edac) {
            ctx->pc = 0x47EE34u;
            goto label_47ee34;
        }
    }
    ctx->pc = 0x47EDB4u;
label_47edb4:
    // 0x47edb4: 0x8fa20c98  lw          $v0, 0xC98($sp)
    ctx->pc = 0x47edb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3224)));
label_47edb8:
    // 0x47edb8: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_47edbc:
    if (ctx->pc == 0x47EDBCu) {
        ctx->pc = 0x47EDC0u;
        goto label_47edc0;
    }
    ctx->pc = 0x47EDB8u;
    {
        const bool branch_taken_0x47edb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47edb8) {
            ctx->pc = 0x47EE34u;
            goto label_47ee34;
        }
    }
    ctx->pc = 0x47EDC0u;
label_47edc0:
    // 0x47edc0: 0x27a409a0  addiu       $a0, $sp, 0x9A0
    ctx->pc = 0x47edc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 2464));
label_47edc4:
    // 0x47edc4: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x47edc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_47edc8:
    // 0x47edc8: 0x8fa60c94  lw          $a2, 0xC94($sp)
    ctx->pc = 0x47edc8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3220)));
label_47edcc:
    // 0x47edcc: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x47edccu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_47edd0:
    // 0x47edd0: 0x24e71920  addiu       $a3, $a3, 0x1920
    ctx->pc = 0x47edd0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 6432));
label_47edd4:
    // 0x47edd4: 0x24080045  addiu       $t0, $zero, 0x45
    ctx->pc = 0x47edd4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
label_47edd8:
    // 0x47edd8: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x47edd8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_47eddc:
    // 0x47eddc: 0x252919b0  addiu       $t1, $t1, 0x19B0
    ctx->pc = 0x47eddcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 6576));
label_47ede0:
    // 0x47ede0: 0xc113940  jal         func_44E500
label_47ede4:
    if (ctx->pc == 0x47EDE4u) {
        ctx->pc = 0x47EDE8u;
        goto label_47ede8;
    }
    ctx->pc = 0x47EDE0u;
    SET_GPR_U32(ctx, 31, 0x47EDE8u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x47EDE0u, 0x47EDE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47EDE8u;
label_47ede8:
    // 0x47ede8: 0x27a409a0  addiu       $a0, $sp, 0x9A0
    ctx->pc = 0x47ede8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 2464));
label_47edec:
    // 0x47edec: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x47edecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_47edf0:
    // 0x47edf0: 0x24a519c0  addiu       $a1, $a1, 0x19C0
    ctx->pc = 0x47edf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6592));
label_47edf4:
    // 0x47edf4: 0xc115c24  jal         func_457090
label_47edf8:
    if (ctx->pc == 0x47EDF8u) {
        ctx->pc = 0x47EDFCu;
        goto label_47edfc;
    }
    ctx->pc = 0x47EDF4u;
    SET_GPR_U32(ctx, 31, 0x47EDFCu);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x47EDF4u, 0x47EDFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47EDFCu;
label_47edfc:
    // 0x47edfc: 0x27a409a0  addiu       $a0, $sp, 0x9A0
    ctx->pc = 0x47edfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 2464));
label_47ee00:
    // 0x47ee00: 0x8fa20c98  lw          $v0, 0xC98($sp)
    ctx->pc = 0x47ee00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3224)));
label_47ee04:
    // 0x47ee04: 0x40f809  jalr        $v0
label_47ee08:
    if (ctx->pc == 0x47EE08u) {
        ctx->pc = 0x47EE0Cu;
        goto label_47ee0c;
    }
    ctx->pc = 0x47EE04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x47EE0Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47EE04u, 0x47EE0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x47EE0Cu;
label_47ee0c:
    // 0x47ee0c: 0xaf82b52c  sw          $v0, -0x4AD4($gp)
    ctx->pc = 0x47ee0cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948140), GPR_U32(ctx, 2));
label_47ee10:
    // 0x47ee10: 0x8fa209a0  lw          $v0, 0x9A0($sp)
    ctx->pc = 0x47ee10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2464)));
label_47ee14:
    // 0x47ee14: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_47ee18:
    if (ctx->pc == 0x47EE18u) {
        ctx->pc = 0x47EE1Cu;
        goto label_47ee1c;
    }
    ctx->pc = 0x47EE14u;
    {
        const bool branch_taken_0x47ee14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47ee14) {
            ctx->pc = 0x47EE24u;
            goto label_47ee24;
        }
    }
    ctx->pc = 0x47EE1Cu;
label_47ee1c:
    // 0x47ee1c: 0xd  break       0
    ctx->pc = 0x47ee1cu;
    runtime->handleBreak(rdram, ctx);
label_47ee20:
    // 0x47ee20: 0x0  nop
    ctx->pc = 0x47ee20u;
    // NOP
label_47ee24:
    // 0x47ee24: 0x27a409a0  addiu       $a0, $sp, 0x9A0
    ctx->pc = 0x47ee24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 2464));
label_47ee28:
    // 0x47ee28: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x47ee28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_47ee2c:
    // 0x47ee2c: 0xc11392c  jal         func_44E4B0
label_47ee30:
    if (ctx->pc == 0x47EE30u) {
        ctx->pc = 0x47EE34u;
        goto label_47ee34;
    }
    ctx->pc = 0x47EE2Cu;
    SET_GPR_U32(ctx, 31, 0x47EE34u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x47EE2Cu, 0x47EE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47EE34u;
label_47ee34:
    // 0x47ee34: 0x8e35005c  lw          $s5, 0x5C($s1)
    ctx->pc = 0x47ee34u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_47ee38:
    // 0x47ee38: 0x16a0002b  bnez        $s5, . + 4 + (0x2B << 2)
label_47ee3c:
    if (ctx->pc == 0x47EE3Cu) {
        ctx->pc = 0x47EE40u;
        goto label_47ee40;
    }
    ctx->pc = 0x47EE38u;
    {
        const bool branch_taken_0x47ee38 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x47ee38) {
            ctx->pc = 0x47EEE8u;
            goto label_47eee8;
        }
    }
    ctx->pc = 0x47EE40u;
label_47ee40:
    // 0x47ee40: 0x8f82b530  lw          $v0, -0x4AD0($gp)
    ctx->pc = 0x47ee40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948144)));
label_47ee44:
    // 0x47ee44: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_47ee48:
    if (ctx->pc == 0x47EE48u) {
        ctx->pc = 0x47EE4Cu;
        goto label_47ee4c;
    }
    ctx->pc = 0x47EE44u;
    {
        const bool branch_taken_0x47ee44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47ee44) {
            ctx->pc = 0x47EEE8u;
            goto label_47eee8;
        }
    }
    ctx->pc = 0x47EE4Cu;
label_47ee4c:
    // 0x47ee4c: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x47ee4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_47ee50:
    // 0x47ee50: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x47ee50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_47ee54:
    // 0x47ee54: 0x27a60c80  addiu       $a2, $sp, 0xC80
    ctx->pc = 0x47ee54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 3200));
label_47ee58:
    // 0x47ee58: 0xc115ee8  jal         func_457BA0
label_47ee5c:
    if (ctx->pc == 0x47EE5Cu) {
        ctx->pc = 0x47EE60u;
        goto label_47ee60;
    }
    ctx->pc = 0x47EE58u;
    SET_GPR_U32(ctx, 31, 0x47EE60u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x47EE58u, 0x47EE60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47EE60u;
label_47ee60:
    // 0x47ee60: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_47ee64:
    if (ctx->pc == 0x47EE64u) {
        ctx->pc = 0x47EE68u;
        goto label_47ee68;
    }
    ctx->pc = 0x47EE60u;
    {
        const bool branch_taken_0x47ee60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47ee60) {
            ctx->pc = 0x47EEE8u;
            goto label_47eee8;
        }
    }
    ctx->pc = 0x47EE68u;
label_47ee68:
    // 0x47ee68: 0x8fa20c88  lw          $v0, 0xC88($sp)
    ctx->pc = 0x47ee68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3208)));
label_47ee6c:
    // 0x47ee6c: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_47ee70:
    if (ctx->pc == 0x47EE70u) {
        ctx->pc = 0x47EE74u;
        goto label_47ee74;
    }
    ctx->pc = 0x47EE6Cu;
    {
        const bool branch_taken_0x47ee6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47ee6c) {
            ctx->pc = 0x47EEE8u;
            goto label_47eee8;
        }
    }
    ctx->pc = 0x47EE74u;
label_47ee74:
    // 0x47ee74: 0x27a40880  addiu       $a0, $sp, 0x880
    ctx->pc = 0x47ee74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 2176));
label_47ee78:
    // 0x47ee78: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x47ee78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_47ee7c:
    // 0x47ee7c: 0x8fa60c84  lw          $a2, 0xC84($sp)
    ctx->pc = 0x47ee7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3204)));
label_47ee80:
    // 0x47ee80: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x47ee80u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_47ee84:
    // 0x47ee84: 0x24e71920  addiu       $a3, $a3, 0x1920
    ctx->pc = 0x47ee84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 6432));
label_47ee88:
    // 0x47ee88: 0x24080048  addiu       $t0, $zero, 0x48
    ctx->pc = 0x47ee88u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
label_47ee8c:
    // 0x47ee8c: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x47ee8cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_47ee90:
    // 0x47ee90: 0x252919d0  addiu       $t1, $t1, 0x19D0
    ctx->pc = 0x47ee90u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 6608));
label_47ee94:
    // 0x47ee94: 0xc113940  jal         func_44E500
label_47ee98:
    if (ctx->pc == 0x47EE98u) {
        ctx->pc = 0x47EE9Cu;
        goto label_47ee9c;
    }
    ctx->pc = 0x47EE94u;
    SET_GPR_U32(ctx, 31, 0x47EE9Cu);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x47EE94u, 0x47EE9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47EE9Cu;
label_47ee9c:
    // 0x47ee9c: 0x27a40880  addiu       $a0, $sp, 0x880
    ctx->pc = 0x47ee9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 2176));
label_47eea0:
    // 0x47eea0: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x47eea0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_47eea4:
    // 0x47eea4: 0x24a519e0  addiu       $a1, $a1, 0x19E0
    ctx->pc = 0x47eea4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6624));
label_47eea8:
    // 0x47eea8: 0xc115c24  jal         func_457090
label_47eeac:
    if (ctx->pc == 0x47EEACu) {
        ctx->pc = 0x47EEB0u;
        goto label_47eeb0;
    }
    ctx->pc = 0x47EEA8u;
    SET_GPR_U32(ctx, 31, 0x47EEB0u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x47EEA8u, 0x47EEB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47EEB0u;
label_47eeb0:
    // 0x47eeb0: 0x27a40880  addiu       $a0, $sp, 0x880
    ctx->pc = 0x47eeb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 2176));
label_47eeb4:
    // 0x47eeb4: 0x8fa20c88  lw          $v0, 0xC88($sp)
    ctx->pc = 0x47eeb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3208)));
label_47eeb8:
    // 0x47eeb8: 0x40f809  jalr        $v0
label_47eebc:
    if (ctx->pc == 0x47EEBCu) {
        ctx->pc = 0x47EEC0u;
        goto label_47eec0;
    }
    ctx->pc = 0x47EEB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x47EEC0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47EEB8u, 0x47EEC0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x47EEC0u;
label_47eec0:
    // 0x47eec0: 0xaf82b530  sw          $v0, -0x4AD0($gp)
    ctx->pc = 0x47eec0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948144), GPR_U32(ctx, 2));
label_47eec4:
    // 0x47eec4: 0x8fa20880  lw          $v0, 0x880($sp)
    ctx->pc = 0x47eec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2176)));
label_47eec8:
    // 0x47eec8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_47eecc:
    if (ctx->pc == 0x47EECCu) {
        ctx->pc = 0x47EED0u;
        goto label_47eed0;
    }
    ctx->pc = 0x47EEC8u;
    {
        const bool branch_taken_0x47eec8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47eec8) {
            ctx->pc = 0x47EED8u;
            goto label_47eed8;
        }
    }
    ctx->pc = 0x47EED0u;
label_47eed0:
    // 0x47eed0: 0xd  break       0
    ctx->pc = 0x47eed0u;
    runtime->handleBreak(rdram, ctx);
label_47eed4:
    // 0x47eed4: 0x0  nop
    ctx->pc = 0x47eed4u;
    // NOP
label_47eed8:
    // 0x47eed8: 0x27a40880  addiu       $a0, $sp, 0x880
    ctx->pc = 0x47eed8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 2176));
label_47eedc:
    // 0x47eedc: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x47eedcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_47eee0:
    // 0x47eee0: 0xc11392c  jal         func_44E4B0
label_47eee4:
    if (ctx->pc == 0x47EEE4u) {
        ctx->pc = 0x47EEE8u;
        goto label_47eee8;
    }
    ctx->pc = 0x47EEE0u;
    SET_GPR_U32(ctx, 31, 0x47EEE8u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x47EEE0u, 0x47EEE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47EEE8u;
label_47eee8:
    // 0x47eee8: 0x8ea20014  lw          $v0, 0x14($s5)
    ctx->pc = 0x47eee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
label_47eeec:
    // 0x47eeec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x47eeecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_47eef0:
    // 0x47eef0: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x47eef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_47eef4:
    // 0x47eef4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x47eef4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_47eef8:
    // 0x47eef8: 0x8ea30018  lw          $v1, 0x18($s5)
    ctx->pc = 0x47eef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
label_47eefc:
    // 0x47eefc: 0xafa30cbc  sw          $v1, 0xCBC($sp)
    ctx->pc = 0x47eefcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 3260), GPR_U32(ctx, 3));
label_47ef00:
    // 0x47ef00: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x47ef00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_47ef04:
    // 0x47ef04: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x47ef04u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_47ef08:
    // 0x47ef08: 0x1600002b  bnez        $s0, . + 4 + (0x2B << 2)
label_47ef0c:
    if (ctx->pc == 0x47EF0Cu) {
        ctx->pc = 0x47EF10u;
        goto label_47ef10;
    }
    ctx->pc = 0x47EF08u;
    {
        const bool branch_taken_0x47ef08 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x47ef08) {
            ctx->pc = 0x47EFB8u;
            goto label_47efb8;
        }
    }
    ctx->pc = 0x47EF10u;
label_47ef10:
    // 0x47ef10: 0x8f82b534  lw          $v0, -0x4ACC($gp)
    ctx->pc = 0x47ef10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948148)));
label_47ef14:
    // 0x47ef14: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_47ef18:
    if (ctx->pc == 0x47EF18u) {
        ctx->pc = 0x47EF1Cu;
        goto label_47ef1c;
    }
    ctx->pc = 0x47EF14u;
    {
        const bool branch_taken_0x47ef14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47ef14) {
            ctx->pc = 0x47EFB8u;
            goto label_47efb8;
        }
    }
    ctx->pc = 0x47EF1Cu;
label_47ef1c:
    // 0x47ef1c: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x47ef1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_47ef20:
    // 0x47ef20: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x47ef20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_47ef24:
    // 0x47ef24: 0x27a60c70  addiu       $a2, $sp, 0xC70
    ctx->pc = 0x47ef24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 3184));
label_47ef28:
    // 0x47ef28: 0xc115ee8  jal         func_457BA0
label_47ef2c:
    if (ctx->pc == 0x47EF2Cu) {
        ctx->pc = 0x47EF30u;
        goto label_47ef30;
    }
    ctx->pc = 0x47EF28u;
    SET_GPR_U32(ctx, 31, 0x47EF30u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x47EF28u, 0x47EF30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47EF30u;
label_47ef30:
    // 0x47ef30: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_47ef34:
    if (ctx->pc == 0x47EF34u) {
        ctx->pc = 0x47EF38u;
        goto label_47ef38;
    }
    ctx->pc = 0x47EF30u;
    {
        const bool branch_taken_0x47ef30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47ef30) {
            ctx->pc = 0x47EFB8u;
            goto label_47efb8;
        }
    }
    ctx->pc = 0x47EF38u;
label_47ef38:
    // 0x47ef38: 0x8fa20c78  lw          $v0, 0xC78($sp)
    ctx->pc = 0x47ef38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3192)));
label_47ef3c:
    // 0x47ef3c: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_47ef40:
    if (ctx->pc == 0x47EF40u) {
        ctx->pc = 0x47EF44u;
        goto label_47ef44;
    }
    ctx->pc = 0x47EF3Cu;
    {
        const bool branch_taken_0x47ef3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47ef3c) {
            ctx->pc = 0x47EFB8u;
            goto label_47efb8;
        }
    }
    ctx->pc = 0x47EF44u;
label_47ef44:
    // 0x47ef44: 0x27a40760  addiu       $a0, $sp, 0x760
    ctx->pc = 0x47ef44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1888));
label_47ef48:
    // 0x47ef48: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x47ef48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_47ef4c:
    // 0x47ef4c: 0x8fa60c74  lw          $a2, 0xC74($sp)
    ctx->pc = 0x47ef4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3188)));
label_47ef50:
    // 0x47ef50: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x47ef50u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_47ef54:
    // 0x47ef54: 0x24e71920  addiu       $a3, $a3, 0x1920
    ctx->pc = 0x47ef54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 6432));
label_47ef58:
    // 0x47ef58: 0x24080050  addiu       $t0, $zero, 0x50
    ctx->pc = 0x47ef58u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_47ef5c:
    // 0x47ef5c: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x47ef5cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_47ef60:
    // 0x47ef60: 0x252919f8  addiu       $t1, $t1, 0x19F8
    ctx->pc = 0x47ef60u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 6648));
label_47ef64:
    // 0x47ef64: 0xc113940  jal         func_44E500
label_47ef68:
    if (ctx->pc == 0x47EF68u) {
        ctx->pc = 0x47EF6Cu;
        goto label_47ef6c;
    }
    ctx->pc = 0x47EF64u;
    SET_GPR_U32(ctx, 31, 0x47EF6Cu);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x47EF64u, 0x47EF6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47EF6Cu;
label_47ef6c:
    // 0x47ef6c: 0x27a40760  addiu       $a0, $sp, 0x760
    ctx->pc = 0x47ef6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1888));
label_47ef70:
    // 0x47ef70: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x47ef70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_47ef74:
    // 0x47ef74: 0x24a51a10  addiu       $a1, $a1, 0x1A10
    ctx->pc = 0x47ef74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6672));
label_47ef78:
    // 0x47ef78: 0xc115c24  jal         func_457090
label_47ef7c:
    if (ctx->pc == 0x47EF7Cu) {
        ctx->pc = 0x47EF80u;
        goto label_47ef80;
    }
    ctx->pc = 0x47EF78u;
    SET_GPR_U32(ctx, 31, 0x47EF80u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x47EF78u, 0x47EF80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47EF80u;
label_47ef80:
    // 0x47ef80: 0x27a40760  addiu       $a0, $sp, 0x760
    ctx->pc = 0x47ef80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1888));
label_47ef84:
    // 0x47ef84: 0x8fa20c78  lw          $v0, 0xC78($sp)
    ctx->pc = 0x47ef84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3192)));
label_47ef88:
    // 0x47ef88: 0x40f809  jalr        $v0
label_47ef8c:
    if (ctx->pc == 0x47EF8Cu) {
        ctx->pc = 0x47EF90u;
        goto label_47ef90;
    }
    ctx->pc = 0x47EF88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x47EF90u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47EF88u, 0x47EF90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x47EF90u;
label_47ef90:
    // 0x47ef90: 0xaf82b534  sw          $v0, -0x4ACC($gp)
    ctx->pc = 0x47ef90u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948148), GPR_U32(ctx, 2));
label_47ef94:
    // 0x47ef94: 0x8fa20760  lw          $v0, 0x760($sp)
    ctx->pc = 0x47ef94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1888)));
label_47ef98:
    // 0x47ef98: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_47ef9c:
    if (ctx->pc == 0x47EF9Cu) {
        ctx->pc = 0x47EFA0u;
        goto label_47efa0;
    }
    ctx->pc = 0x47EF98u;
    {
        const bool branch_taken_0x47ef98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47ef98) {
            ctx->pc = 0x47EFA8u;
            goto label_47efa8;
        }
    }
    ctx->pc = 0x47EFA0u;
label_47efa0:
    // 0x47efa0: 0xd  break       0
    ctx->pc = 0x47efa0u;
    runtime->handleBreak(rdram, ctx);
label_47efa4:
    // 0x47efa4: 0x0  nop
    ctx->pc = 0x47efa4u;
    // NOP
label_47efa8:
    // 0x47efa8: 0x27a40760  addiu       $a0, $sp, 0x760
    ctx->pc = 0x47efa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1888));
label_47efac:
    // 0x47efac: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x47efacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_47efb0:
    // 0x47efb0: 0xc11392c  jal         func_44E4B0
label_47efb4:
    if (ctx->pc == 0x47EFB4u) {
        ctx->pc = 0x47EFB8u;
        goto label_47efb8;
    }
    ctx->pc = 0x47EFB0u;
    SET_GPR_U32(ctx, 31, 0x47EFB8u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x47EFB0u, 0x47EFB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47EFB8u;
label_47efb8:
    // 0x47efb8: 0x16400035  bnez        $s2, . + 4 + (0x35 << 2)
label_47efbc:
    if (ctx->pc == 0x47EFBCu) {
        ctx->pc = 0x47EFC0u;
        goto label_47efc0;
    }
    ctx->pc = 0x47EFB8u;
    {
        const bool branch_taken_0x47efb8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x47efb8) {
            ctx->pc = 0x47F090u;
            goto label_47f090;
        }
    }
    ctx->pc = 0x47EFC0u;
label_47efc0:
    // 0x47efc0: 0x8f84b538  lw          $a0, -0x4AC8($gp)
    ctx->pc = 0x47efc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948152)));
label_47efc4:
    // 0x47efc4: 0x10800032  beqz        $a0, . + 4 + (0x32 << 2)
label_47efc8:
    if (ctx->pc == 0x47EFC8u) {
        ctx->pc = 0x47EFCCu;
        goto label_47efcc;
    }
    ctx->pc = 0x47EFC4u;
    {
        const bool branch_taken_0x47efc4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x47efc4) {
            ctx->pc = 0x47F090u;
            goto label_47f090;
        }
    }
    ctx->pc = 0x47EFCCu;
label_47efcc:
    // 0x47efcc: 0x8f85bf38  lw          $a1, -0x40C8($gp)
    ctx->pc = 0x47efccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_47efd0:
    // 0x47efd0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x47efd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_47efd4:
    // 0x47efd4: 0x2406fffc  addiu       $a2, $zero, -0x4
    ctx->pc = 0x47efd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_47efd8:
    // 0x47efd8: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x47efd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_47efdc:
    // 0x47efdc: 0x27a60c60  addiu       $a2, $sp, 0xC60
    ctx->pc = 0x47efdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 3168));
label_47efe0:
    // 0x47efe0: 0xc115ee8  jal         func_457BA0
label_47efe4:
    if (ctx->pc == 0x47EFE4u) {
        ctx->pc = 0x47EFE8u;
        goto label_47efe8;
    }
    ctx->pc = 0x47EFE0u;
    SET_GPR_U32(ctx, 31, 0x47EFE8u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x47EFE0u, 0x47EFE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47EFE8u;
label_47efe8:
    // 0x47efe8: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
label_47efec:
    if (ctx->pc == 0x47EFECu) {
        ctx->pc = 0x47EFF0u;
        goto label_47eff0;
    }
    ctx->pc = 0x47EFE8u;
    {
        const bool branch_taken_0x47efe8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47efe8) {
            ctx->pc = 0x47F090u;
            goto label_47f090;
        }
    }
    ctx->pc = 0x47EFF0u;
label_47eff0:
    // 0x47eff0: 0x8fa40c68  lw          $a0, 0xC68($sp)
    ctx->pc = 0x47eff0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3176)));
label_47eff4:
    // 0x47eff4: 0x10800026  beqz        $a0, . + 4 + (0x26 << 2)
label_47eff8:
    if (ctx->pc == 0x47EFF8u) {
        ctx->pc = 0x47EFFCu;
        goto label_47effc;
    }
    ctx->pc = 0x47EFF4u;
    {
        const bool branch_taken_0x47eff4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x47eff4) {
            ctx->pc = 0x47F090u;
            goto label_47f090;
        }
    }
    ctx->pc = 0x47EFFCu;
label_47effc:
    // 0x47effc: 0x27a50640  addiu       $a1, $sp, 0x640
    ctx->pc = 0x47effcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1600));
label_47f000:
    // 0x47f000: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x47f000u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_47f004:
    // 0x47f004: 0x2406fffc  addiu       $a2, $zero, -0x4
    ctx->pc = 0x47f004u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_47f008:
    // 0x47f008: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x47f008u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_47f00c:
    // 0x47f00c: 0x8fa70c64  lw          $a3, 0xC64($sp)
    ctx->pc = 0x47f00cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3172)));
label_47f010:
    // 0x47f010: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x47f010u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_47f014:
    // 0x47f014: 0x3c08005e  lui         $t0, 0x5E
    ctx->pc = 0x47f014u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)94 << 16));
label_47f018:
    // 0x47f018: 0x25081920  addiu       $t0, $t0, 0x1920
    ctx->pc = 0x47f018u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 6432));
label_47f01c:
    // 0x47f01c: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x47f01cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_47f020:
    // 0x47f020: 0x24090051  addiu       $t1, $zero, 0x51
    ctx->pc = 0x47f020u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
label_47f024:
    // 0x47f024: 0x120402d  daddu       $t0, $t1, $zero
    ctx->pc = 0x47f024u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_47f028:
    // 0x47f028: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x47f028u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_47f02c:
    // 0x47f02c: 0x25291a28  addiu       $t1, $t1, 0x1A28
    ctx->pc = 0x47f02cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 6696));
label_47f030:
    // 0x47f030: 0xc113940  jal         func_44E500
label_47f034:
    if (ctx->pc == 0x47F034u) {
        ctx->pc = 0x47F038u;
        goto label_47f038;
    }
    ctx->pc = 0x47F030u;
    SET_GPR_U32(ctx, 31, 0x47F038u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x47F030u, 0x47F038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47F038u;
label_47f038:
    // 0x47f038: 0x27a50640  addiu       $a1, $sp, 0x640
    ctx->pc = 0x47f038u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1600));
label_47f03c:
    // 0x47f03c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x47f03cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_47f040:
    // 0x47f040: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x47f040u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_47f044:
    // 0x47f044: 0x24a51a40  addiu       $a1, $a1, 0x1A40
    ctx->pc = 0x47f044u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6720));
label_47f048:
    // 0x47f048: 0xc115c24  jal         func_457090
label_47f04c:
    if (ctx->pc == 0x47F04Cu) {
        ctx->pc = 0x47F050u;
        goto label_47f050;
    }
    ctx->pc = 0x47F048u;
    SET_GPR_U32(ctx, 31, 0x47F050u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x47F048u, 0x47F050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47F050u;
label_47f050:
    // 0x47f050: 0x27a20640  addiu       $v0, $sp, 0x640
    ctx->pc = 0x47f050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1600));
label_47f054:
    // 0x47f054: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x47f054u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_47f058:
    // 0x47f058: 0x8fa20c68  lw          $v0, 0xC68($sp)
    ctx->pc = 0x47f058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3176)));
label_47f05c:
    // 0x47f05c: 0x40f809  jalr        $v0
label_47f060:
    if (ctx->pc == 0x47F060u) {
        ctx->pc = 0x47F064u;
        goto label_47f064;
    }
    ctx->pc = 0x47F05Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x47F064u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47F05Cu, 0x47F064u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x47F064u;
label_47f064:
    // 0x47f064: 0xaf82b538  sw          $v0, -0x4AC8($gp)
    ctx->pc = 0x47f064u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948152), GPR_U32(ctx, 2));
label_47f068:
    // 0x47f068: 0x8fa40640  lw          $a0, 0x640($sp)
    ctx->pc = 0x47f068u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1600)));
label_47f06c:
    // 0x47f06c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_47f070:
    if (ctx->pc == 0x47F070u) {
        ctx->pc = 0x47F074u;
        goto label_47f074;
    }
    ctx->pc = 0x47F06Cu;
    {
        const bool branch_taken_0x47f06c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x47f06c) {
            ctx->pc = 0x47F07Cu;
            goto label_47f07c;
        }
    }
    ctx->pc = 0x47F074u;
label_47f074:
    // 0x47f074: 0xd  break       0
    ctx->pc = 0x47f074u;
    runtime->handleBreak(rdram, ctx);
label_47f078:
    // 0x47f078: 0x0  nop
    ctx->pc = 0x47f078u;
    // NOP
label_47f07c:
    // 0x47f07c: 0x27a50640  addiu       $a1, $sp, 0x640
    ctx->pc = 0x47f07cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1600));
label_47f080:
    // 0x47f080: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x47f080u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_47f084:
    // 0x47f084: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x47f084u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_47f088:
    // 0x47f088: 0xc11392c  jal         func_44E4B0
label_47f08c:
    if (ctx->pc == 0x47F08Cu) {
        ctx->pc = 0x47F090u;
        goto label_47f090;
    }
    ctx->pc = 0x47F088u;
    SET_GPR_U32(ctx, 31, 0x47F090u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x47F088u, 0x47F090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47F090u;
label_47f090:
    // 0x47f090: 0x8fa20cbc  lw          $v0, 0xCBC($sp)
    ctx->pc = 0x47f090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3260)));
label_47f094:
    // 0x47f094: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_47f098:
    if (ctx->pc == 0x47F098u) {
        ctx->pc = 0x47F09Cu;
        goto label_47f09c;
    }
    ctx->pc = 0x47F094u;
    {
        const bool branch_taken_0x47f094 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x47f094) {
            ctx->pc = 0x47F144u;
            goto label_47f144;
        }
    }
    ctx->pc = 0x47F09Cu;
label_47f09c:
    // 0x47f09c: 0x8f82b53c  lw          $v0, -0x4AC4($gp)
    ctx->pc = 0x47f09cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948156)));
label_47f0a0:
    // 0x47f0a0: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_47f0a4:
    if (ctx->pc == 0x47F0A4u) {
        ctx->pc = 0x47F0A8u;
        goto label_47f0a8;
    }
    ctx->pc = 0x47F0A0u;
    {
        const bool branch_taken_0x47f0a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47f0a0) {
            ctx->pc = 0x47F144u;
            goto label_47f144;
        }
    }
    ctx->pc = 0x47F0A8u;
label_47f0a8:
    // 0x47f0a8: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x47f0a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_47f0ac:
    // 0x47f0ac: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x47f0acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_47f0b0:
    // 0x47f0b0: 0x27a60c50  addiu       $a2, $sp, 0xC50
    ctx->pc = 0x47f0b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 3152));
label_47f0b4:
    // 0x47f0b4: 0xc115ee8  jal         func_457BA0
label_47f0b8:
    if (ctx->pc == 0x47F0B8u) {
        ctx->pc = 0x47F0BCu;
        goto label_47f0bc;
    }
    ctx->pc = 0x47F0B4u;
    SET_GPR_U32(ctx, 31, 0x47F0BCu);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x47F0B4u, 0x47F0BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47F0BCu;
label_47f0bc:
    // 0x47f0bc: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_47f0c0:
    if (ctx->pc == 0x47F0C0u) {
        ctx->pc = 0x47F0C4u;
        goto label_47f0c4;
    }
    ctx->pc = 0x47F0BCu;
    {
        const bool branch_taken_0x47f0bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47f0bc) {
            ctx->pc = 0x47F144u;
            goto label_47f144;
        }
    }
    ctx->pc = 0x47F0C4u;
label_47f0c4:
    // 0x47f0c4: 0x8fa20c58  lw          $v0, 0xC58($sp)
    ctx->pc = 0x47f0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3160)));
label_47f0c8:
    // 0x47f0c8: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_47f0cc:
    if (ctx->pc == 0x47F0CCu) {
        ctx->pc = 0x47F0D0u;
        goto label_47f0d0;
    }
    ctx->pc = 0x47F0C8u;
    {
        const bool branch_taken_0x47f0c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47f0c8) {
            ctx->pc = 0x47F144u;
            goto label_47f144;
        }
    }
    ctx->pc = 0x47F0D0u;
label_47f0d0:
    // 0x47f0d0: 0x27a40520  addiu       $a0, $sp, 0x520
    ctx->pc = 0x47f0d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1312));
label_47f0d4:
    // 0x47f0d4: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x47f0d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_47f0d8:
    // 0x47f0d8: 0x8fa60c54  lw          $a2, 0xC54($sp)
    ctx->pc = 0x47f0d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3156)));
label_47f0dc:
    // 0x47f0dc: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x47f0dcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_47f0e0:
    // 0x47f0e0: 0x24e71920  addiu       $a3, $a3, 0x1920
    ctx->pc = 0x47f0e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 6432));
label_47f0e4:
    // 0x47f0e4: 0x24080052  addiu       $t0, $zero, 0x52
    ctx->pc = 0x47f0e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
label_47f0e8:
    // 0x47f0e8: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x47f0e8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_47f0ec:
    // 0x47f0ec: 0x25291a58  addiu       $t1, $t1, 0x1A58
    ctx->pc = 0x47f0ecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 6744));
label_47f0f0:
    // 0x47f0f0: 0xc113940  jal         func_44E500
label_47f0f4:
    if (ctx->pc == 0x47F0F4u) {
        ctx->pc = 0x47F0F8u;
        goto label_47f0f8;
    }
    ctx->pc = 0x47F0F0u;
    SET_GPR_U32(ctx, 31, 0x47F0F8u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x47F0F0u, 0x47F0F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47F0F8u;
label_47f0f8:
    // 0x47f0f8: 0x27a40520  addiu       $a0, $sp, 0x520
    ctx->pc = 0x47f0f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1312));
label_47f0fc:
    // 0x47f0fc: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x47f0fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_47f100:
    // 0x47f100: 0x24a51a70  addiu       $a1, $a1, 0x1A70
    ctx->pc = 0x47f100u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6768));
label_47f104:
    // 0x47f104: 0xc115c24  jal         func_457090
label_47f108:
    if (ctx->pc == 0x47F108u) {
        ctx->pc = 0x47F10Cu;
        goto label_47f10c;
    }
    ctx->pc = 0x47F104u;
    SET_GPR_U32(ctx, 31, 0x47F10Cu);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x47F104u, 0x47F10Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47F10Cu;
label_47f10c:
    // 0x47f10c: 0x27a40520  addiu       $a0, $sp, 0x520
    ctx->pc = 0x47f10cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1312));
label_47f110:
    // 0x47f110: 0x8fa20c58  lw          $v0, 0xC58($sp)
    ctx->pc = 0x47f110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3160)));
label_47f114:
    // 0x47f114: 0x40f809  jalr        $v0
label_47f118:
    if (ctx->pc == 0x47F118u) {
        ctx->pc = 0x47F11Cu;
        goto label_47f11c;
    }
    ctx->pc = 0x47F114u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x47F11Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47F114u, 0x47F11Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x47F11Cu;
label_47f11c:
    // 0x47f11c: 0xaf82b53c  sw          $v0, -0x4AC4($gp)
    ctx->pc = 0x47f11cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948156), GPR_U32(ctx, 2));
label_47f120:
    // 0x47f120: 0x8fa20520  lw          $v0, 0x520($sp)
    ctx->pc = 0x47f120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1312)));
label_47f124:
    // 0x47f124: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_47f128:
    if (ctx->pc == 0x47F128u) {
        ctx->pc = 0x47F12Cu;
        goto label_47f12c;
    }
    ctx->pc = 0x47F124u;
    {
        const bool branch_taken_0x47f124 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47f124) {
            ctx->pc = 0x47F134u;
            goto label_47f134;
        }
    }
    ctx->pc = 0x47F12Cu;
label_47f12c:
    // 0x47f12c: 0xd  break       0
    ctx->pc = 0x47f12cu;
    runtime->handleBreak(rdram, ctx);
label_47f130:
    // 0x47f130: 0x0  nop
    ctx->pc = 0x47f130u;
    // NOP
label_47f134:
    // 0x47f134: 0x27a40520  addiu       $a0, $sp, 0x520
    ctx->pc = 0x47f134u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1312));
label_47f138:
    // 0x47f138: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x47f138u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_47f13c:
    // 0x47f13c: 0xc11392c  jal         func_44E4B0
label_47f140:
    if (ctx->pc == 0x47F140u) {
        ctx->pc = 0x47F144u;
        goto label_47f144;
    }
    ctx->pc = 0x47F13Cu;
    SET_GPR_U32(ctx, 31, 0x47F144u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x47F13Cu, 0x47F144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47F144u;
label_47f144:
    // 0x47f144: 0x1680002b  bnez        $s4, . + 4 + (0x2B << 2)
label_47f148:
    if (ctx->pc == 0x47F148u) {
        ctx->pc = 0x47F14Cu;
        goto label_47f14c;
    }
    ctx->pc = 0x47F144u;
    {
        const bool branch_taken_0x47f144 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x47f144) {
            ctx->pc = 0x47F1F4u;
            goto label_47f1f4;
        }
    }
    ctx->pc = 0x47F14Cu;
label_47f14c:
    // 0x47f14c: 0x8f82b540  lw          $v0, -0x4AC0($gp)
    ctx->pc = 0x47f14cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948160)));
label_47f150:
    // 0x47f150: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_47f154:
    if (ctx->pc == 0x47F154u) {
        ctx->pc = 0x47F158u;
        goto label_47f158;
    }
    ctx->pc = 0x47F150u;
    {
        const bool branch_taken_0x47f150 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47f150) {
            ctx->pc = 0x47F1F4u;
            goto label_47f1f4;
        }
    }
    ctx->pc = 0x47F158u;
label_47f158:
    // 0x47f158: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x47f158u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_47f15c:
    // 0x47f15c: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x47f15cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_47f160:
    // 0x47f160: 0x27a60c40  addiu       $a2, $sp, 0xC40
    ctx->pc = 0x47f160u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 3136));
label_47f164:
    // 0x47f164: 0xc115ee8  jal         func_457BA0
label_47f168:
    if (ctx->pc == 0x47F168u) {
        ctx->pc = 0x47F16Cu;
        goto label_47f16c;
    }
    ctx->pc = 0x47F164u;
    SET_GPR_U32(ctx, 31, 0x47F16Cu);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x47F164u, 0x47F16Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47F16Cu;
label_47f16c:
    // 0x47f16c: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_47f170:
    if (ctx->pc == 0x47F170u) {
        ctx->pc = 0x47F174u;
        goto label_47f174;
    }
    ctx->pc = 0x47F16Cu;
    {
        const bool branch_taken_0x47f16c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47f16c) {
            ctx->pc = 0x47F1F4u;
            goto label_47f1f4;
        }
    }
    ctx->pc = 0x47F174u;
label_47f174:
    // 0x47f174: 0x8fa20c48  lw          $v0, 0xC48($sp)
    ctx->pc = 0x47f174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3144)));
label_47f178:
    // 0x47f178: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_47f17c:
    if (ctx->pc == 0x47F17Cu) {
        ctx->pc = 0x47F180u;
        goto label_47f180;
    }
    ctx->pc = 0x47F178u;
    {
        const bool branch_taken_0x47f178 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47f178) {
            ctx->pc = 0x47F1F4u;
            goto label_47f1f4;
        }
    }
    ctx->pc = 0x47F180u;
label_47f180:
    // 0x47f180: 0x27a40400  addiu       $a0, $sp, 0x400
    ctx->pc = 0x47f180u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1024));
label_47f184:
    // 0x47f184: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x47f184u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_47f188:
    // 0x47f188: 0x8fa60c44  lw          $a2, 0xC44($sp)
    ctx->pc = 0x47f188u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3140)));
label_47f18c:
    // 0x47f18c: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x47f18cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_47f190:
    // 0x47f190: 0x24e71920  addiu       $a3, $a3, 0x1920
    ctx->pc = 0x47f190u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 6432));
label_47f194:
    // 0x47f194: 0x24080053  addiu       $t0, $zero, 0x53
    ctx->pc = 0x47f194u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
label_47f198:
    // 0x47f198: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x47f198u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_47f19c:
    // 0x47f19c: 0x25291a88  addiu       $t1, $t1, 0x1A88
    ctx->pc = 0x47f19cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 6792));
label_47f1a0:
    // 0x47f1a0: 0xc113940  jal         func_44E500
label_47f1a4:
    if (ctx->pc == 0x47F1A4u) {
        ctx->pc = 0x47F1A8u;
        goto label_47f1a8;
    }
    ctx->pc = 0x47F1A0u;
    SET_GPR_U32(ctx, 31, 0x47F1A8u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x47F1A0u, 0x47F1A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47F1A8u;
label_47f1a8:
    // 0x47f1a8: 0x27a40400  addiu       $a0, $sp, 0x400
    ctx->pc = 0x47f1a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1024));
label_47f1ac:
    // 0x47f1ac: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x47f1acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_47f1b0:
    // 0x47f1b0: 0x24a51aa0  addiu       $a1, $a1, 0x1AA0
    ctx->pc = 0x47f1b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6816));
label_47f1b4:
    // 0x47f1b4: 0xc115c24  jal         func_457090
label_47f1b8:
    if (ctx->pc == 0x47F1B8u) {
        ctx->pc = 0x47F1BCu;
        goto label_47f1bc;
    }
    ctx->pc = 0x47F1B4u;
    SET_GPR_U32(ctx, 31, 0x47F1BCu);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x47F1B4u, 0x47F1BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47F1BCu;
label_47f1bc:
    // 0x47f1bc: 0x27a40400  addiu       $a0, $sp, 0x400
    ctx->pc = 0x47f1bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1024));
label_47f1c0:
    // 0x47f1c0: 0x8fa20c48  lw          $v0, 0xC48($sp)
    ctx->pc = 0x47f1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3144)));
label_47f1c4:
    // 0x47f1c4: 0x40f809  jalr        $v0
label_47f1c8:
    if (ctx->pc == 0x47F1C8u) {
        ctx->pc = 0x47F1CCu;
        goto label_47f1cc;
    }
    ctx->pc = 0x47F1C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x47F1CCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47F1C4u, 0x47F1CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x47F1CCu;
label_47f1cc:
    // 0x47f1cc: 0xaf82b540  sw          $v0, -0x4AC0($gp)
    ctx->pc = 0x47f1ccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948160), GPR_U32(ctx, 2));
label_47f1d0:
    // 0x47f1d0: 0x8fa20400  lw          $v0, 0x400($sp)
    ctx->pc = 0x47f1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1024)));
label_47f1d4:
    // 0x47f1d4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_47f1d8:
    if (ctx->pc == 0x47F1D8u) {
        ctx->pc = 0x47F1DCu;
        goto label_47f1dc;
    }
    ctx->pc = 0x47F1D4u;
    {
        const bool branch_taken_0x47f1d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47f1d4) {
            ctx->pc = 0x47F1E4u;
            goto label_47f1e4;
        }
    }
    ctx->pc = 0x47F1DCu;
label_47f1dc:
    // 0x47f1dc: 0xd  break       0
    ctx->pc = 0x47f1dcu;
    runtime->handleBreak(rdram, ctx);
label_47f1e0:
    // 0x47f1e0: 0x0  nop
    ctx->pc = 0x47f1e0u;
    // NOP
label_47f1e4:
    // 0x47f1e4: 0x27a40400  addiu       $a0, $sp, 0x400
    ctx->pc = 0x47f1e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1024));
label_47f1e8:
    // 0x47f1e8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x47f1e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_47f1ec:
    // 0x47f1ec: 0xc11392c  jal         func_44E4B0
label_47f1f0:
    if (ctx->pc == 0x47F1F0u) {
        ctx->pc = 0x47F1F4u;
        goto label_47f1f4;
    }
    ctx->pc = 0x47F1ECu;
    SET_GPR_U32(ctx, 31, 0x47F1F4u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x47F1ECu, 0x47F1F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47F1F4u;
label_47f1f4:
    // 0x47f1f4: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x47f1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_47f1f8:
    // 0x47f1f8: 0xafa20cb8  sw          $v0, 0xCB8($sp)
    ctx->pc = 0x47f1f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 3256), GPR_U32(ctx, 2));
label_47f1fc:
    // 0x47f1fc: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x47f1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_47f200:
    // 0x47f200: 0xafa20cb4  sw          $v0, 0xCB4($sp)
    ctx->pc = 0x47f200u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 3252), GPR_U32(ctx, 2));
label_47f204:
    // 0x47f204: 0x8fa20cb8  lw          $v0, 0xCB8($sp)
    ctx->pc = 0x47f204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3256)));
label_47f208:
    // 0x47f208: 0x401027  not         $v0, $v0
    ctx->pc = 0x47f208u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 2) | GPR_U64(ctx, 0)));
label_47f20c:
    // 0x47f20c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x47f20cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_47f210:
    // 0x47f210: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x47f210u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_47f214:
    // 0x47f214: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_47f218:
    if (ctx->pc == 0x47F218u) {
        ctx->pc = 0x47F21Cu;
        goto label_47f21c;
    }
    ctx->pc = 0x47F214u;
    {
        const bool branch_taken_0x47f214 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x47f214) {
            ctx->pc = 0x47F2C4u;
            goto label_47f2c4;
        }
    }
    ctx->pc = 0x47F21Cu;
label_47f21c:
    // 0x47f21c: 0x8f82b544  lw          $v0, -0x4ABC($gp)
    ctx->pc = 0x47f21cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948164)));
label_47f220:
    // 0x47f220: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_47f224:
    if (ctx->pc == 0x47F224u) {
        ctx->pc = 0x47F228u;
        goto label_47f228;
    }
    ctx->pc = 0x47F220u;
    {
        const bool branch_taken_0x47f220 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47f220) {
            ctx->pc = 0x47F2C4u;
            goto label_47f2c4;
        }
    }
    ctx->pc = 0x47F228u;
label_47f228:
    // 0x47f228: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x47f228u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_47f22c:
    // 0x47f22c: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x47f22cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_47f230:
    // 0x47f230: 0x27a60c30  addiu       $a2, $sp, 0xC30
    ctx->pc = 0x47f230u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 3120));
label_47f234:
    // 0x47f234: 0xc115ee8  jal         func_457BA0
label_47f238:
    if (ctx->pc == 0x47F238u) {
        ctx->pc = 0x47F23Cu;
        goto label_47f23c;
    }
    ctx->pc = 0x47F234u;
    SET_GPR_U32(ctx, 31, 0x47F23Cu);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x47F234u, 0x47F23Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47F23Cu;
label_47f23c:
    // 0x47f23c: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_47f240:
    if (ctx->pc == 0x47F240u) {
        ctx->pc = 0x47F244u;
        goto label_47f244;
    }
    ctx->pc = 0x47F23Cu;
    {
        const bool branch_taken_0x47f23c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47f23c) {
            ctx->pc = 0x47F2C4u;
            goto label_47f2c4;
        }
    }
    ctx->pc = 0x47F244u;
label_47f244:
    // 0x47f244: 0x8fa20c38  lw          $v0, 0xC38($sp)
    ctx->pc = 0x47f244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3128)));
label_47f248:
    // 0x47f248: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_47f24c:
    if (ctx->pc == 0x47F24Cu) {
        ctx->pc = 0x47F250u;
        goto label_47f250;
    }
    ctx->pc = 0x47F248u;
    {
        const bool branch_taken_0x47f248 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47f248) {
            ctx->pc = 0x47F2C4u;
            goto label_47f2c4;
        }
    }
    ctx->pc = 0x47F250u;
label_47f250:
    // 0x47f250: 0x27a402e0  addiu       $a0, $sp, 0x2E0
    ctx->pc = 0x47f250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
label_47f254:
    // 0x47f254: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x47f254u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_47f258:
    // 0x47f258: 0x8fa60c34  lw          $a2, 0xC34($sp)
    ctx->pc = 0x47f258u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3124)));
label_47f25c:
    // 0x47f25c: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x47f25cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_47f260:
    // 0x47f260: 0x24e71920  addiu       $a3, $a3, 0x1920
    ctx->pc = 0x47f260u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 6432));
label_47f264:
    // 0x47f264: 0x24080059  addiu       $t0, $zero, 0x59
    ctx->pc = 0x47f264u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 89));
label_47f268:
    // 0x47f268: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x47f268u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_47f26c:
    // 0x47f26c: 0x25291ac0  addiu       $t1, $t1, 0x1AC0
    ctx->pc = 0x47f26cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 6848));
label_47f270:
    // 0x47f270: 0xc113940  jal         func_44E500
label_47f274:
    if (ctx->pc == 0x47F274u) {
        ctx->pc = 0x47F278u;
        goto label_47f278;
    }
    ctx->pc = 0x47F270u;
    SET_GPR_U32(ctx, 31, 0x47F278u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x47F270u, 0x47F278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47F278u;
label_47f278:
    // 0x47f278: 0x27a402e0  addiu       $a0, $sp, 0x2E0
    ctx->pc = 0x47f278u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
label_47f27c:
    // 0x47f27c: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x47f27cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_47f280:
    // 0x47f280: 0x24a51ae0  addiu       $a1, $a1, 0x1AE0
    ctx->pc = 0x47f280u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6880));
label_47f284:
    // 0x47f284: 0xc115c24  jal         func_457090
label_47f288:
    if (ctx->pc == 0x47F288u) {
        ctx->pc = 0x47F28Cu;
        goto label_47f28c;
    }
    ctx->pc = 0x47F284u;
    SET_GPR_U32(ctx, 31, 0x47F28Cu);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x47F284u, 0x47F28Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47F28Cu;
label_47f28c:
    // 0x47f28c: 0x27a402e0  addiu       $a0, $sp, 0x2E0
    ctx->pc = 0x47f28cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
label_47f290:
    // 0x47f290: 0x8fa20c38  lw          $v0, 0xC38($sp)
    ctx->pc = 0x47f290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3128)));
label_47f294:
    // 0x47f294: 0x40f809  jalr        $v0
label_47f298:
    if (ctx->pc == 0x47F298u) {
        ctx->pc = 0x47F29Cu;
        goto label_47f29c;
    }
    ctx->pc = 0x47F294u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x47F29Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47F294u, 0x47F29Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x47F29Cu;
label_47f29c:
    // 0x47f29c: 0xaf82b544  sw          $v0, -0x4ABC($gp)
    ctx->pc = 0x47f29cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948164), GPR_U32(ctx, 2));
label_47f2a0:
    // 0x47f2a0: 0x8fa202e0  lw          $v0, 0x2E0($sp)
    ctx->pc = 0x47f2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 736)));
label_47f2a4:
    // 0x47f2a4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_47f2a8:
    if (ctx->pc == 0x47F2A8u) {
        ctx->pc = 0x47F2ACu;
        goto label_47f2ac;
    }
    ctx->pc = 0x47F2A4u;
    {
        const bool branch_taken_0x47f2a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47f2a4) {
            ctx->pc = 0x47F2B4u;
            goto label_47f2b4;
        }
    }
    ctx->pc = 0x47F2ACu;
label_47f2ac:
    // 0x47f2ac: 0xd  break       0
    ctx->pc = 0x47f2acu;
    runtime->handleBreak(rdram, ctx);
label_47f2b0:
    // 0x47f2b0: 0x0  nop
    ctx->pc = 0x47f2b0u;
    // NOP
label_47f2b4:
    // 0x47f2b4: 0x27a402e0  addiu       $a0, $sp, 0x2E0
    ctx->pc = 0x47f2b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
label_47f2b8:
    // 0x47f2b8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x47f2b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_47f2bc:
    // 0x47f2bc: 0xc11392c  jal         func_44E4B0
label_47f2c0:
    if (ctx->pc == 0x47F2C0u) {
        ctx->pc = 0x47F2C4u;
        goto label_47f2c4;
    }
    ctx->pc = 0x47F2BCu;
    SET_GPR_U32(ctx, 31, 0x47F2C4u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x47F2BCu, 0x47F2C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47F2C4u;
label_47f2c4:
    // 0x47f2c4: 0x8fa20cb4  lw          $v0, 0xCB4($sp)
    ctx->pc = 0x47f2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3252)));
label_47f2c8:
    // 0x47f2c8: 0x401027  not         $v0, $v0
    ctx->pc = 0x47f2c8u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 2) | GPR_U64(ctx, 0)));
label_47f2cc:
    // 0x47f2cc: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x47f2ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_47f2d0:
    // 0x47f2d0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x47f2d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_47f2d4:
    // 0x47f2d4: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_47f2d8:
    if (ctx->pc == 0x47F2D8u) {
        ctx->pc = 0x47F2DCu;
        goto label_47f2dc;
    }
    ctx->pc = 0x47F2D4u;
    {
        const bool branch_taken_0x47f2d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x47f2d4) {
            ctx->pc = 0x47F384u;
            goto label_47f384;
        }
    }
    ctx->pc = 0x47F2DCu;
label_47f2dc:
    // 0x47f2dc: 0x8f82b548  lw          $v0, -0x4AB8($gp)
    ctx->pc = 0x47f2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948168)));
label_47f2e0:
    // 0x47f2e0: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_47f2e4:
    if (ctx->pc == 0x47F2E4u) {
        ctx->pc = 0x47F2E8u;
        goto label_47f2e8;
    }
    ctx->pc = 0x47F2E0u;
    {
        const bool branch_taken_0x47f2e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47f2e0) {
            ctx->pc = 0x47F384u;
            goto label_47f384;
        }
    }
    ctx->pc = 0x47F2E8u;
label_47f2e8:
    // 0x47f2e8: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x47f2e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_47f2ec:
    // 0x47f2ec: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x47f2ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_47f2f0:
    // 0x47f2f0: 0x27a60c20  addiu       $a2, $sp, 0xC20
    ctx->pc = 0x47f2f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 3104));
label_47f2f4:
    // 0x47f2f4: 0xc115ee8  jal         func_457BA0
label_47f2f8:
    if (ctx->pc == 0x47F2F8u) {
        ctx->pc = 0x47F2FCu;
        goto label_47f2fc;
    }
    ctx->pc = 0x47F2F4u;
    SET_GPR_U32(ctx, 31, 0x47F2FCu);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x47F2F4u, 0x47F2FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47F2FCu;
label_47f2fc:
    // 0x47f2fc: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_47f300:
    if (ctx->pc == 0x47F300u) {
        ctx->pc = 0x47F304u;
        goto label_47f304;
    }
    ctx->pc = 0x47F2FCu;
    {
        const bool branch_taken_0x47f2fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47f2fc) {
            ctx->pc = 0x47F384u;
            goto label_47f384;
        }
    }
    ctx->pc = 0x47F304u;
label_47f304:
    // 0x47f304: 0x8fa20c28  lw          $v0, 0xC28($sp)
    ctx->pc = 0x47f304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3112)));
label_47f308:
    // 0x47f308: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_47f30c:
    if (ctx->pc == 0x47F30Cu) {
        ctx->pc = 0x47F310u;
        goto label_47f310;
    }
    ctx->pc = 0x47F308u;
    {
        const bool branch_taken_0x47f308 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47f308) {
            ctx->pc = 0x47F384u;
            goto label_47f384;
        }
    }
    ctx->pc = 0x47F310u;
label_47f310:
    // 0x47f310: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x47f310u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_47f314:
    // 0x47f314: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x47f314u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_47f318:
    // 0x47f318: 0x8fa60c24  lw          $a2, 0xC24($sp)
    ctx->pc = 0x47f318u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3108)));
label_47f31c:
    // 0x47f31c: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x47f31cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_47f320:
    // 0x47f320: 0x24e71920  addiu       $a3, $a3, 0x1920
    ctx->pc = 0x47f320u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 6432));
label_47f324:
    // 0x47f324: 0x2408005a  addiu       $t0, $zero, 0x5A
    ctx->pc = 0x47f324u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
label_47f328:
    // 0x47f328: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x47f328u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_47f32c:
    // 0x47f32c: 0x25291b00  addiu       $t1, $t1, 0x1B00
    ctx->pc = 0x47f32cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 6912));
label_47f330:
    // 0x47f330: 0xc113940  jal         func_44E500
label_47f334:
    if (ctx->pc == 0x47F334u) {
        ctx->pc = 0x47F338u;
        goto label_47f338;
    }
    ctx->pc = 0x47F330u;
    SET_GPR_U32(ctx, 31, 0x47F338u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x47F330u, 0x47F338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47F338u;
label_47f338:
    // 0x47f338: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x47f338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_47f33c:
    // 0x47f33c: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x47f33cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_47f340:
    // 0x47f340: 0x24a51b20  addiu       $a1, $a1, 0x1B20
    ctx->pc = 0x47f340u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6944));
label_47f344:
    // 0x47f344: 0xc115c24  jal         func_457090
label_47f348:
    if (ctx->pc == 0x47F348u) {
        ctx->pc = 0x47F34Cu;
        goto label_47f34c;
    }
    ctx->pc = 0x47F344u;
    SET_GPR_U32(ctx, 31, 0x47F34Cu);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x47F344u, 0x47F34Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47F34Cu;
label_47f34c:
    // 0x47f34c: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x47f34cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_47f350:
    // 0x47f350: 0x8fa20c28  lw          $v0, 0xC28($sp)
    ctx->pc = 0x47f350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3112)));
label_47f354:
    // 0x47f354: 0x40f809  jalr        $v0
label_47f358:
    if (ctx->pc == 0x47F358u) {
        ctx->pc = 0x47F35Cu;
        goto label_47f35c;
    }
    ctx->pc = 0x47F354u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x47F35Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47F354u, 0x47F35Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x47F35Cu;
label_47f35c:
    // 0x47f35c: 0xaf82b548  sw          $v0, -0x4AB8($gp)
    ctx->pc = 0x47f35cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948168), GPR_U32(ctx, 2));
label_47f360:
    // 0x47f360: 0x8fa201c0  lw          $v0, 0x1C0($sp)
    ctx->pc = 0x47f360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
label_47f364:
    // 0x47f364: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_47f368:
    if (ctx->pc == 0x47F368u) {
        ctx->pc = 0x47F36Cu;
        goto label_47f36c;
    }
    ctx->pc = 0x47F364u;
    {
        const bool branch_taken_0x47f364 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47f364) {
            ctx->pc = 0x47F374u;
            goto label_47f374;
        }
    }
    ctx->pc = 0x47F36Cu;
label_47f36c:
    // 0x47f36c: 0xd  break       0
    ctx->pc = 0x47f36cu;
    runtime->handleBreak(rdram, ctx);
label_47f370:
    // 0x47f370: 0x0  nop
    ctx->pc = 0x47f370u;
    // NOP
label_47f374:
    // 0x47f374: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x47f374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_47f378:
    // 0x47f378: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x47f378u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_47f37c:
    // 0x47f37c: 0xc11392c  jal         func_44E4B0
label_47f380:
    if (ctx->pc == 0x47F380u) {
        ctx->pc = 0x47F384u;
        goto label_47f384;
    }
    ctx->pc = 0x47F37Cu;
    SET_GPR_U32(ctx, 31, 0x47F384u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x47F37Cu, 0x47F384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47F384u;
label_47f384:
    // 0x47f384: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x47f384u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_47f388:
    // 0x47f388: 0x100000b9  b           . + 4 + (0xB9 << 2)
label_47f38c:
    if (ctx->pc == 0x47F38Cu) {
        ctx->pc = 0x47F390u;
        goto label_47f390;
    }
    ctx->pc = 0x47F388u;
    {
        const bool branch_taken_0x47f388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x47f388) {
            ctx->pc = 0x47F670u;
            goto label_47f670;
        }
    }
    ctx->pc = 0x47F390u;
label_47f390:
    // 0x47f390: 0x13b8c0  sll         $s7, $s3, 3
    ctx->pc = 0x47f390u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
label_47f394:
    // 0x47f394: 0x2571021  addu        $v0, $s2, $s7
    ctx->pc = 0x47f394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 23)));
label_47f398:
    // 0x47f398: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x47f398u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_47f39c:
    // 0x47f39c: 0xa7a20c18  sh          $v0, 0xC18($sp)
    ctx->pc = 0x47f39cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 3096), (uint16_t)GPR_U32(ctx, 2));
label_47f3a0:
    // 0x47f3a0: 0x1320c0  sll         $a0, $s3, 3
    ctx->pc = 0x47f3a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
label_47f3a4:
    // 0x47f3a4: 0x2442821  addu        $a1, $s2, $a0
    ctx->pc = 0x47f3a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
label_47f3a8:
    // 0x47f3a8: 0x94a60002  lhu         $a2, 0x2($a1)
    ctx->pc = 0x47f3a8u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
label_47f3ac:
    // 0x47f3ac: 0xa7a60c1a  sh          $a2, 0xC1A($sp)
    ctx->pc = 0x47f3acu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 3098), (uint16_t)GPR_U32(ctx, 6));
label_47f3b0:
    // 0x47f3b0: 0x1310c0  sll         $v0, $s3, 3
    ctx->pc = 0x47f3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
label_47f3b4:
    // 0x47f3b4: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x47f3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_47f3b8:
    // 0x47f3b8: 0x94440004  lhu         $a0, 0x4($v0)
    ctx->pc = 0x47f3b8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
label_47f3bc:
    // 0x47f3bc: 0xa7a40c1c  sh          $a0, 0xC1C($sp)
    ctx->pc = 0x47f3bcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 3100), (uint16_t)GPR_U32(ctx, 4));
label_47f3c0:
    // 0x47f3c0: 0x97a50c1a  lhu         $a1, 0xC1A($sp)
    ctx->pc = 0x47f3c0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 3098)));
label_47f3c4:
    // 0x47f3c4: 0x30a6ffff  andi        $a2, $a1, 0xFFFF
    ctx->pc = 0x47f3c4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
label_47f3c8:
    // 0x47f3c8: 0x63840  sll         $a3, $a2, 1
    ctx->pc = 0x47f3c8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_47f3cc:
    // 0x47f3cc: 0xe64021  addu        $t0, $a3, $a2
    ctx->pc = 0x47f3ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_47f3d0:
    // 0x47f3d0: 0x84880  sll         $t1, $t0, 2
    ctx->pc = 0x47f3d0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_47f3d4:
    // 0x47f3d4: 0x2091021  addu        $v0, $s0, $t1
    ctx->pc = 0x47f3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 9)));
label_47f3d8:
    // 0x47f3d8: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x47f3d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_47f3dc:
    // 0x47f3dc: 0x97a40c18  lhu         $a0, 0xC18($sp)
    ctx->pc = 0x47f3dcu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 3096)));
label_47f3e0:
    // 0x47f3e0: 0x3085ffff  andi        $a1, $a0, 0xFFFF
    ctx->pc = 0x47f3e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_47f3e4:
    // 0x47f3e4: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x47f3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_47f3e8:
    // 0x47f3e8: 0x452021  addu        $a0, $v0, $a1
    ctx->pc = 0x47f3e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_47f3ec:
    // 0x47f3ec: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x47f3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_47f3f0:
    // 0x47f3f0: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x47f3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_47f3f4:
    // 0x47f3f4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x47f3f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_47f3f8:
    // 0x47f3f8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x47f3f8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_47f3fc:
    // 0x47f3fc: 0xe7a00bf8  swc1        $f0, 0xBF8($sp)
    ctx->pc = 0x47f3fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 3064), bits); }
label_47f400:
    // 0x47f400: 0x97a20c1a  lhu         $v0, 0xC1A($sp)
    ctx->pc = 0x47f400u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 3098)));
label_47f404:
    // 0x47f404: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x47f404u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_47f408:
    // 0x47f408: 0x42840  sll         $a1, $a0, 1
    ctx->pc = 0x47f408u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_47f40c:
    // 0x47f40c: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x47f40cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_47f410:
    // 0x47f410: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x47f410u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_47f414:
    // 0x47f414: 0x2051021  addu        $v0, $s0, $a1
    ctx->pc = 0x47f414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
label_47f418:
    // 0x47f418: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x47f418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_47f41c:
    // 0x47f41c: 0x97a20c18  lhu         $v0, 0xC18($sp)
    ctx->pc = 0x47f41cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 3096)));
label_47f420:
    // 0x47f420: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x47f420u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_47f424:
    // 0x47f424: 0x42840  sll         $a1, $a0, 1
    ctx->pc = 0x47f424u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_47f428:
    // 0x47f428: 0xa43021  addu        $a2, $a1, $a0
    ctx->pc = 0x47f428u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_47f42c:
    // 0x47f42c: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x47f42cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_47f430:
    // 0x47f430: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x47f430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_47f434:
    // 0x47f434: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x47f434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_47f438:
    // 0x47f438: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x47f438u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_47f43c:
    // 0x47f43c: 0xe7a00bfc  swc1        $f0, 0xBFC($sp)
    ctx->pc = 0x47f43cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 3068), bits); }
label_47f440:
    // 0x47f440: 0x97a40c1a  lhu         $a0, 0xC1A($sp)
    ctx->pc = 0x47f440u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 3098)));
label_47f444:
    // 0x47f444: 0x3085ffff  andi        $a1, $a0, 0xFFFF
    ctx->pc = 0x47f444u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_47f448:
    // 0x47f448: 0x53040  sll         $a2, $a1, 1
    ctx->pc = 0x47f448u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_47f44c:
    // 0x47f44c: 0xc53821  addu        $a3, $a2, $a1
    ctx->pc = 0x47f44cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_47f450:
    // 0x47f450: 0x74080  sll         $t0, $a3, 2
    ctx->pc = 0x47f450u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_47f454:
    // 0x47f454: 0x2084821  addu        $t1, $s0, $t0
    ctx->pc = 0x47f454u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 8)));
label_47f458:
    // 0x47f458: 0xc5210008  lwc1        $f1, 0x8($t1)
    ctx->pc = 0x47f458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_47f45c:
    // 0x47f45c: 0x97a20c18  lhu         $v0, 0xC18($sp)
    ctx->pc = 0x47f45cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 3096)));
label_47f460:
    // 0x47f460: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x47f460u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_47f464:
    // 0x47f464: 0x42840  sll         $a1, $a0, 1
    ctx->pc = 0x47f464u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_47f468:
    // 0x47f468: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x47f468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_47f46c:
    // 0x47f46c: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x47f46cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_47f470:
    // 0x47f470: 0x2041021  addu        $v0, $s0, $a0
    ctx->pc = 0x47f470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
label_47f474:
    // 0x47f474: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x47f474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_47f478:
    // 0x47f478: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x47f478u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_47f47c:
    // 0x47f47c: 0xe7a00c00  swc1        $f0, 0xC00($sp)
    ctx->pc = 0x47f47cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 3072), bits); }
label_47f480:
    // 0x47f480: 0x97a20c1c  lhu         $v0, 0xC1C($sp)
    ctx->pc = 0x47f480u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 3100)));
label_47f484:
    // 0x47f484: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x47f484u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_47f488:
    // 0x47f488: 0x22040  sll         $a0, $v0, 1
    ctx->pc = 0x47f488u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_47f48c:
    // 0x47f48c: 0x822821  addu        $a1, $a0, $v0
    ctx->pc = 0x47f48cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_47f490:
    // 0x47f490: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x47f490u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_47f494:
    // 0x47f494: 0x202a821  addu        $s5, $s0, $v0
    ctx->pc = 0x47f494u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_47f498:
    // 0x47f498: 0xc6a10000  lwc1        $f1, 0x0($s5)
    ctx->pc = 0x47f498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_47f49c:
    // 0x47f49c: 0x97a20c18  lhu         $v0, 0xC18($sp)
    ctx->pc = 0x47f49cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 3096)));
label_47f4a0:
    // 0x47f4a0: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x47f4a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_47f4a4:
    // 0x47f4a4: 0x42840  sll         $a1, $a0, 1
    ctx->pc = 0x47f4a4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_47f4a8:
    // 0x47f4a8: 0xa43021  addu        $a2, $a1, $a0
    ctx->pc = 0x47f4a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_47f4ac:
    // 0x47f4ac: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x47f4acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_47f4b0:
    // 0x47f4b0: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x47f4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_47f4b4:
    // 0x47f4b4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x47f4b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_47f4b8:
    // 0x47f4b8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x47f4b8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_47f4bc:
    // 0x47f4bc: 0xe7a00be8  swc1        $f0, 0xBE8($sp)
    ctx->pc = 0x47f4bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 3048), bits); }
label_47f4c0:
    // 0x47f4c0: 0x97a40c1c  lhu         $a0, 0xC1C($sp)
    ctx->pc = 0x47f4c0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 3100)));
label_47f4c4:
    // 0x47f4c4: 0x3085ffff  andi        $a1, $a0, 0xFFFF
    ctx->pc = 0x47f4c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_47f4c8:
    // 0x47f4c8: 0x53040  sll         $a2, $a1, 1
    ctx->pc = 0x47f4c8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_47f4cc:
    // 0x47f4cc: 0xc53821  addu        $a3, $a2, $a1
    ctx->pc = 0x47f4ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_47f4d0:
    // 0x47f4d0: 0x74080  sll         $t0, $a3, 2
    ctx->pc = 0x47f4d0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_47f4d4:
    // 0x47f4d4: 0x2084821  addu        $t1, $s0, $t0
    ctx->pc = 0x47f4d4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 8)));
label_47f4d8:
    // 0x47f4d8: 0xc5210004  lwc1        $f1, 0x4($t1)
    ctx->pc = 0x47f4d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_47f4dc:
    // 0x47f4dc: 0x97a20c18  lhu         $v0, 0xC18($sp)
    ctx->pc = 0x47f4dcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 3096)));
label_47f4e0:
    // 0x47f4e0: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x47f4e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_47f4e4:
    // 0x47f4e4: 0x42840  sll         $a1, $a0, 1
    ctx->pc = 0x47f4e4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_47f4e8:
    // 0x47f4e8: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x47f4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_47f4ec:
    // 0x47f4ec: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x47f4ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_47f4f0:
    // 0x47f4f0: 0x2041021  addu        $v0, $s0, $a0
    ctx->pc = 0x47f4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
label_47f4f4:
    // 0x47f4f4: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x47f4f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_47f4f8:
    // 0x47f4f8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x47f4f8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_47f4fc:
    // 0x47f4fc: 0xe7a00bec  swc1        $f0, 0xBEC($sp)
    ctx->pc = 0x47f4fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 3052), bits); }
label_47f500:
    // 0x47f500: 0x97a20c1c  lhu         $v0, 0xC1C($sp)
    ctx->pc = 0x47f500u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 3100)));
label_47f504:
    // 0x47f504: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x47f504u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_47f508:
    // 0x47f508: 0x22040  sll         $a0, $v0, 1
    ctx->pc = 0x47f508u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_47f50c:
    // 0x47f50c: 0x822821  addu        $a1, $a0, $v0
    ctx->pc = 0x47f50cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_47f510:
    // 0x47f510: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x47f510u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_47f514:
    // 0x47f514: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x47f514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_47f518:
    // 0x47f518: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x47f518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_47f51c:
    // 0x47f51c: 0x97a20c18  lhu         $v0, 0xC18($sp)
    ctx->pc = 0x47f51cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 3096)));
label_47f520:
    // 0x47f520: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x47f520u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_47f524:
    // 0x47f524: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x47f524u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_47f528:
    // 0x47f528: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x47f528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_47f52c:
    // 0x47f52c: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x47f52cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_47f530:
    // 0x47f530: 0x2042821  addu        $a1, $s0, $a0
    ctx->pc = 0x47f530u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
label_47f534:
    // 0x47f534: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x47f534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_47f538:
    // 0x47f538: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x47f538u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_47f53c:
    // 0x47f53c: 0xe7a00bf0  swc1        $f0, 0xBF0($sp)
    ctx->pc = 0x47f53cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 3056), bits); }
label_47f540:
    // 0x47f540: 0xc7a30c00  lwc1        $f3, 0xC00($sp)
    ctx->pc = 0x47f540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 3072)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_47f544:
    // 0x47f544: 0xc7a20bec  lwc1        $f2, 0xBEC($sp)
    ctx->pc = 0x47f544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 3052)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_47f548:
    // 0x47f548: 0xc7a10bfc  lwc1        $f1, 0xBFC($sp)
    ctx->pc = 0x47f548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 3068)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_47f54c:
    // 0x47f54c: 0xc7a00bf0  lwc1        $f0, 0xBF0($sp)
    ctx->pc = 0x47f54cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 3056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_47f550:
    // 0x47f550: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x47f550u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_47f554:
    // 0x47f554: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x47f554u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_47f558:
    // 0x47f558: 0x0  nop
    ctx->pc = 0x47f558u;
    // NOP
label_47f55c:
    // 0x47f55c: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x47f55cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
label_47f560:
    // 0x47f560: 0x4602181d  msub.s      $f0, $f3, $f2
    ctx->pc = 0x47f560u;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_47f564:
    // 0x47f564: 0xe7a00c08  swc1        $f0, 0xC08($sp)
    ctx->pc = 0x47f564u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 3080), bits); }
label_47f568:
    // 0x47f568: 0xc7a30bf8  lwc1        $f3, 0xBF8($sp)
    ctx->pc = 0x47f568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 3064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_47f56c:
    // 0x47f56c: 0xc7a20bf0  lwc1        $f2, 0xBF0($sp)
    ctx->pc = 0x47f56cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 3056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_47f570:
    // 0x47f570: 0xc7a10c00  lwc1        $f1, 0xC00($sp)
    ctx->pc = 0x47f570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 3072)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_47f574:
    // 0x47f574: 0xc7a00be8  lwc1        $f0, 0xBE8($sp)
    ctx->pc = 0x47f574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 3048)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_47f578:
    // 0x47f578: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x47f578u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_47f57c:
    // 0x47f57c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x47f57cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_47f580:
    // 0x47f580: 0x0  nop
    ctx->pc = 0x47f580u;
    // NOP
label_47f584:
    // 0x47f584: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x47f584u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
label_47f588:
    // 0x47f588: 0x4602181d  msub.s      $f0, $f3, $f2
    ctx->pc = 0x47f588u;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_47f58c:
    // 0x47f58c: 0xe7a00c0c  swc1        $f0, 0xC0C($sp)
    ctx->pc = 0x47f58cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 3084), bits); }
label_47f590:
    // 0x47f590: 0xc7a30bfc  lwc1        $f3, 0xBFC($sp)
    ctx->pc = 0x47f590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 3068)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_47f594:
    // 0x47f594: 0xc7a20be8  lwc1        $f2, 0xBE8($sp)
    ctx->pc = 0x47f594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 3048)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_47f598:
    // 0x47f598: 0xc7a10bf8  lwc1        $f1, 0xBF8($sp)
    ctx->pc = 0x47f598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 3064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_47f59c:
    // 0x47f59c: 0xc7a00bec  lwc1        $f0, 0xBEC($sp)
    ctx->pc = 0x47f59cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 3052)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_47f5a0:
    // 0x47f5a0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x47f5a0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_47f5a4:
    // 0x47f5a4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x47f5a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_47f5a8:
    // 0x47f5a8: 0x0  nop
    ctx->pc = 0x47f5a8u;
    // NOP
label_47f5ac:
    // 0x47f5ac: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x47f5acu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
label_47f5b0:
    // 0x47f5b0: 0x4602181d  msub.s      $f0, $f3, $f2
    ctx->pc = 0x47f5b0u;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_47f5b4:
    // 0x47f5b4: 0xe7a00c10  swc1        $f0, 0xC10($sp)
    ctx->pc = 0x47f5b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 3088), bits); }
label_47f5b8:
    // 0x47f5b8: 0x27a60c08  addiu       $a2, $sp, 0xC08
    ctx->pc = 0x47f5b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 3080));
label_47f5bc:
    // 0x47f5bc: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x47f5bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_47f5c0:
    // 0x47f5c0: 0xc11fee8  jal         func_47FBA0
label_47f5c4:
    if (ctx->pc == 0x47F5C4u) {
        ctx->pc = 0x47F5C8u;
        goto label_47f5c8;
    }
    ctx->pc = 0x47F5C0u;
    SET_GPR_U32(ctx, 31, 0x47F5C8u);
    ctx->pc = 0x47FBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47FBA0u, 0x47F5C0u, 0x47F5C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47F5C8u;
label_47f5c8:
    // 0x47f5c8: 0xe7a00cb0  swc1        $f0, 0xCB0($sp)
    ctx->pc = 0x47f5c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 3248), bits); }
label_47f5cc:
    // 0x47f5cc: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x47f5ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_47f5d0:
    // 0x47f5d0: 0xc7a00c08  lwc1        $f0, 0xC08($sp)
    ctx->pc = 0x47f5d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 3080)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_47f5d4:
    // 0x47f5d4: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x47f5d4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_47f5d8:
    // 0x47f5d8: 0x4500000b  bc1f        . + 4 + (0xB << 2)
label_47f5dc:
    if (ctx->pc == 0x47F5DCu) {
        ctx->pc = 0x47F5E0u;
        goto label_47f5e0;
    }
    ctx->pc = 0x47F5D8u;
    {
        const bool branch_taken_0x47f5d8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x47f5d8) {
            ctx->pc = 0x47F608u;
            goto label_47f608;
        }
    }
    ctx->pc = 0x47F5E0u;
label_47f5e0:
    // 0x47f5e0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x47f5e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_47f5e4:
    // 0x47f5e4: 0xc7a00c0c  lwc1        $f0, 0xC0C($sp)
    ctx->pc = 0x47f5e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 3084)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_47f5e8:
    // 0x47f5e8: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x47f5e8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_47f5ec:
    // 0x47f5ec: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_47f5f0:
    if (ctx->pc == 0x47F5F0u) {
        ctx->pc = 0x47F5F4u;
        goto label_47f5f4;
    }
    ctx->pc = 0x47F5ECu;
    {
        const bool branch_taken_0x47f5ec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x47f5ec) {
            ctx->pc = 0x47F608u;
            goto label_47f608;
        }
    }
    ctx->pc = 0x47F5F4u;
label_47f5f4:
    // 0x47f5f4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x47f5f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_47f5f8:
    // 0x47f5f8: 0xc7a00c10  lwc1        $f0, 0xC10($sp)
    ctx->pc = 0x47f5f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 3088)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_47f5fc:
    // 0x47f5fc: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x47f5fcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_47f600:
    // 0x47f600: 0x45010019  bc1t        . + 4 + (0x19 << 2)
label_47f604:
    if (ctx->pc == 0x47F604u) {
        ctx->pc = 0x47F608u;
        goto label_47f608;
    }
    ctx->pc = 0x47F600u;
    {
        const bool branch_taken_0x47f600 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x47f600) {
            ctx->pc = 0x47F668u;
            goto label_47f668;
        }
    }
    ctx->pc = 0x47F608u;
label_47f608:
    // 0x47f608: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x47f608u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_47f60c:
    // 0x47f60c: 0x10000013  b           . + 4 + (0x13 << 2)
label_47f610:
    if (ctx->pc == 0x47F610u) {
        ctx->pc = 0x47F614u;
        goto label_47f614;
    }
    ctx->pc = 0x47F60Cu;
    {
        const bool branch_taken_0x47f60c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x47f60c) {
            ctx->pc = 0x47F65Cu;
            goto label_47f65c;
        }
    }
    ctx->pc = 0x47F614u;
label_47f614:
    // 0x47f614: 0x1310c0  sll         $v0, $s3, 3
    ctx->pc = 0x47f614u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
label_47f618:
    // 0x47f618: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x47f618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_47f61c:
    // 0x47f61c: 0x162040  sll         $a0, $s6, 1
    ctx->pc = 0x47f61cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 22), 1));
label_47f620:
    // 0x47f620: 0x442821  addu        $a1, $v0, $a0
    ctx->pc = 0x47f620u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_47f624:
    // 0x47f624: 0x94a60000  lhu         $a2, 0x0($a1)
    ctx->pc = 0x47f624u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_47f628:
    // 0x47f628: 0x30c7ffff  andi        $a3, $a2, 0xFFFF
    ctx->pc = 0x47f628u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
label_47f62c:
    // 0x47f62c: 0xe0f02d  daddu       $fp, $a3, $zero
    ctx->pc = 0x47f62cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_47f630:
    // 0x47f630: 0xc7a00cb0  lwc1        $f0, 0xCB0($sp)
    ctx->pc = 0x47f630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 3248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_47f634:
    // 0x47f634: 0x33c8ffff  andi        $t0, $fp, 0xFFFF
    ctx->pc = 0x47f634u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)65535);
label_47f638:
    // 0x47f638: 0x848c0  sll         $t1, $t0, 3
    ctx->pc = 0x47f638u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
label_47f63c:
    // 0x47f63c: 0x2891021  addu        $v0, $s4, $t1
    ctx->pc = 0x47f63cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 9)));
label_47f640:
    // 0x47f640: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x47f640u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_47f644:
    // 0x47f644: 0x33c4ffff  andi        $a0, $fp, 0xFFFF
    ctx->pc = 0x47f644u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)65535);
label_47f648:
    // 0x47f648: 0x428c0  sll         $a1, $a0, 3
    ctx->pc = 0x47f648u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_47f64c:
    // 0x47f64c: 0x2851021  addu        $v0, $s4, $a1
    ctx->pc = 0x47f64cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
label_47f650:
    // 0x47f650: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x47f650u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_47f654:
    // 0x47f654: 0x26c40001  addiu       $a0, $s6, 0x1
    ctx->pc = 0x47f654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_47f658:
    // 0x47f658: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x47f658u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_47f65c:
    // 0x47f65c: 0x2ec20003  sltiu       $v0, $s6, 0x3
    ctx->pc = 0x47f65cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_47f660:
    // 0x47f660: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
label_47f664:
    if (ctx->pc == 0x47F664u) {
        ctx->pc = 0x47F668u;
        goto label_47f668;
    }
    ctx->pc = 0x47F660u;
    {
        const bool branch_taken_0x47f660 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x47f660) {
            ctx->pc = 0x47F614u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_47f614;
        }
    }
    ctx->pc = 0x47F668u;
label_47f668:
    // 0x47f668: 0x26620001  addiu       $v0, $s3, 0x1
    ctx->pc = 0x47f668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_47f66c:
    // 0x47f66c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x47f66cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_47f670:
    // 0x47f670: 0x8fa20cb4  lw          $v0, 0xCB4($sp)
    ctx->pc = 0x47f670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3252)));
label_47f674:
    // 0x47f674: 0x262202b  sltu        $a0, $s3, $v0
    ctx->pc = 0x47f674u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_47f678:
    // 0x47f678: 0x1480ff45  bnez        $a0, . + 4 + (-0xBB << 2)
label_47f67c:
    if (ctx->pc == 0x47F67Cu) {
        ctx->pc = 0x47F680u;
        goto label_47f680;
    }
    ctx->pc = 0x47F678u;
    {
        const bool branch_taken_0x47f678 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x47f678) {
            ctx->pc = 0x47F390u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_47f390;
        }
    }
    ctx->pc = 0x47F680u;
label_47f680:
    // 0x47f680: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x47f680u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_47f684:
    // 0x47f684: 0xc0e2d08  jal         func_38B420
label_47f688:
    if (ctx->pc == 0x47F688u) {
        ctx->pc = 0x47F68Cu;
        goto label_47f68c;
    }
    ctx->pc = 0x47F684u;
    SET_GPR_U32(ctx, 31, 0x47F68Cu);
    ctx->pc = 0x38B420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38B420u, 0x47F684u, 0x47F68Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47F68Cu;
label_47f68c:
    // 0x47f68c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x47f68cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_47f690:
    // 0x47f690: 0x16200031  bnez        $s1, . + 4 + (0x31 << 2)
label_47f694:
    if (ctx->pc == 0x47F694u) {
        ctx->pc = 0x47F698u;
        goto label_47f698;
    }
    ctx->pc = 0x47F690u;
    {
        const bool branch_taken_0x47f690 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x47f690) {
            ctx->pc = 0x47F758u;
            goto label_47f758;
        }
    }
    ctx->pc = 0x47F698u;
label_47f698:
    // 0x47f698: 0x8f82b54c  lw          $v0, -0x4AB4($gp)
    ctx->pc = 0x47f698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948172)));
label_47f69c:
    // 0x47f69c: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
label_47f6a0:
    if (ctx->pc == 0x47F6A0u) {
        ctx->pc = 0x47F6A4u;
        goto label_47f6a4;
    }
    ctx->pc = 0x47F69Cu;
    {
        const bool branch_taken_0x47f69c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47f69c) {
            ctx->pc = 0x47F758u;
            goto label_47f758;
        }
    }
    ctx->pc = 0x47F6A4u;
label_47f6a4:
    // 0x47f6a4: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x47f6a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_47f6a8:
    // 0x47f6a8: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x47f6a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_47f6ac:
    // 0x47f6ac: 0x27a60bd8  addiu       $a2, $sp, 0xBD8
    ctx->pc = 0x47f6acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 3032));
label_47f6b0:
    // 0x47f6b0: 0xc115ee8  jal         func_457BA0
label_47f6b4:
    if (ctx->pc == 0x47F6B4u) {
        ctx->pc = 0x47F6B8u;
        goto label_47f6b8;
    }
    ctx->pc = 0x47F6B0u;
    SET_GPR_U32(ctx, 31, 0x47F6B8u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x47F6B0u, 0x47F6B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47F6B8u;
label_47f6b8:
    // 0x47f6b8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x47f6b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_47f6bc:
    // 0x47f6bc: 0x10c00026  beqz        $a2, . + 4 + (0x26 << 2)
label_47f6c0:
    if (ctx->pc == 0x47F6C0u) {
        ctx->pc = 0x47F6C4u;
        goto label_47f6c4;
    }
    ctx->pc = 0x47F6BCu;
    {
        const bool branch_taken_0x47f6bc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x47f6bc) {
            ctx->pc = 0x47F758u;
            goto label_47f758;
        }
    }
    ctx->pc = 0x47F6C4u;
label_47f6c4:
    // 0x47f6c4: 0x8fa20be0  lw          $v0, 0xBE0($sp)
    ctx->pc = 0x47f6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3040)));
label_47f6c8:
    // 0x47f6c8: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
label_47f6cc:
    if (ctx->pc == 0x47F6CCu) {
        ctx->pc = 0x47F6D0u;
        goto label_47f6d0;
    }
    ctx->pc = 0x47F6C8u;
    {
        const bool branch_taken_0x47f6c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47f6c8) {
            ctx->pc = 0x47F758u;
            goto label_47f758;
        }
    }
    ctx->pc = 0x47F6D0u;
label_47f6d0:
    // 0x47f6d0: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x47f6d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_47f6d4:
    // 0x47f6d4: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x47f6d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_47f6d8:
    // 0x47f6d8: 0x8fa60bdc  lw          $a2, 0xBDC($sp)
    ctx->pc = 0x47f6d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3036)));
label_47f6dc:
    // 0x47f6dc: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x47f6dcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_47f6e0:
    // 0x47f6e0: 0x24e71920  addiu       $a3, $a3, 0x1920
    ctx->pc = 0x47f6e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 6432));
label_47f6e4:
    // 0x47f6e4: 0x240800a6  addiu       $t0, $zero, 0xA6
    ctx->pc = 0x47f6e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 166));
label_47f6e8:
    // 0x47f6e8: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x47f6e8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_47f6ec:
    // 0x47f6ec: 0x252919b0  addiu       $t1, $t1, 0x19B0
    ctx->pc = 0x47f6ecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 6576));
label_47f6f0:
    // 0x47f6f0: 0xc113940  jal         func_44E500
label_47f6f4:
    if (ctx->pc == 0x47F6F4u) {
        ctx->pc = 0x47F6F8u;
        goto label_47f6f8;
    }
    ctx->pc = 0x47F6F0u;
    SET_GPR_U32(ctx, 31, 0x47F6F8u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x47F6F0u, 0x47F6F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47F6F8u;
label_47f6f8:
    // 0x47f6f8: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x47f6f8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_47f6fc:
    // 0x47f6fc: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x47f6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_47f700:
    // 0x47f700: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x47f700u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_47f704:
    // 0x47f704: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x47f704u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_47f708:
    // 0x47f708: 0x24a51b38  addiu       $a1, $a1, 0x1B38
    ctx->pc = 0x47f708u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6968));
label_47f70c:
    // 0x47f70c: 0xc115c24  jal         func_457090
label_47f710:
    if (ctx->pc == 0x47F710u) {
        ctx->pc = 0x47F714u;
        goto label_47f714;
    }
    ctx->pc = 0x47F70Cu;
    SET_GPR_U32(ctx, 31, 0x47F714u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x47F70Cu, 0x47F714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47F714u;
label_47f714:
    // 0x47f714: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x47f714u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_47f718:
    // 0x47f718: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x47f718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_47f71c:
    // 0x47f71c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x47f71cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_47f720:
    // 0x47f720: 0x8fa20be0  lw          $v0, 0xBE0($sp)
    ctx->pc = 0x47f720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3040)));
label_47f724:
    // 0x47f724: 0x40f809  jalr        $v0
label_47f728:
    if (ctx->pc == 0x47F728u) {
        ctx->pc = 0x47F72Cu;
        goto label_47f72c;
    }
    ctx->pc = 0x47F724u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x47F72Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47F724u, 0x47F72Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x47F72Cu;
label_47f72c:
    // 0x47f72c: 0xaf82b54c  sw          $v0, -0x4AB4($gp)
    ctx->pc = 0x47f72cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948172), GPR_U32(ctx, 2));
label_47f730:
    // 0x47f730: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x47f730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_47f734:
    // 0x47f734: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_47f738:
    if (ctx->pc == 0x47F738u) {
        ctx->pc = 0x47F73Cu;
        goto label_47f73c;
    }
    ctx->pc = 0x47F734u;
    {
        const bool branch_taken_0x47f734 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47f734) {
            ctx->pc = 0x47F744u;
            goto label_47f744;
        }
    }
    ctx->pc = 0x47F73Cu;
label_47f73c:
    // 0x47f73c: 0xd  break       0
    ctx->pc = 0x47f73cu;
    runtime->handleBreak(rdram, ctx);
label_47f740:
    // 0x47f740: 0x0  nop
    ctx->pc = 0x47f740u;
    // NOP
label_47f744:
    // 0x47f744: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x47f744u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_47f748:
    // 0x47f748: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x47f748u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_47f74c:
    // 0x47f74c: 0xc11392c  jal         func_44E4B0
label_47f750:
    if (ctx->pc == 0x47F750u) {
        ctx->pc = 0x47F754u;
        goto label_47f754;
    }
    ctx->pc = 0x47F74Cu;
    SET_GPR_U32(ctx, 31, 0x47F754u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x47F74Cu, 0x47F754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47F754u;
label_47f754:
    // 0x47f754: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x47f754u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_47f758:
    // 0x47f758: 0x8fa20cc0  lw          $v0, 0xCC0($sp)
    ctx->pc = 0x47f758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3264)));
label_47f75c:
    // 0x47f75c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x47f75cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_47f760:
    // 0x47f760: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x47f760u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_47f764:
    // 0x47f764: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x47f764u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_47f768:
    // 0x47f768: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x47f768u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_47f76c:
    // 0x47f76c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x47f76cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_47f770:
    // 0x47f770: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x47f770u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_47f774:
    // 0x47f774: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x47f774u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_47f778:
    // 0x47f778: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x47f778u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_47f77c:
    // 0x47f77c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x47f77cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_47f780:
    // 0x47f780: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x47f780u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_47f784:
    // 0x47f784: 0x27bd0ce0  addiu       $sp, $sp, 0xCE0
    ctx->pc = 0x47f784u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 3296));
label_47f788:
    // 0x47f788: 0x3e00008  jr          $ra
label_47f78c:
    if (ctx->pc == 0x47F78Cu) {
        ctx->pc = 0x47F790u;
        goto label_fallthrough_0x47f788;
    }
    ctx->pc = 0x47F788u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47F788u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x47f788:
    ctx->pc = 0x47F790u;
}
