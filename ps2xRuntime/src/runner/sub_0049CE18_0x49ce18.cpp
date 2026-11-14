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

// Function: sub_0049CE18
// Address: 0x49ce18 - 0x49d5a0
void sub_0049CE18_0x49ce18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049CE18_0x49ce18");
#endif

    switch (ctx->pc) {
        case 0x49ce18u: goto label_49ce18;
        case 0x49ce1cu: goto label_49ce1c;
        case 0x49ce20u: goto label_49ce20;
        case 0x49ce24u: goto label_49ce24;
        case 0x49ce28u: goto label_49ce28;
        case 0x49ce2cu: goto label_49ce2c;
        case 0x49ce30u: goto label_49ce30;
        case 0x49ce34u: goto label_49ce34;
        case 0x49ce38u: goto label_49ce38;
        case 0x49ce3cu: goto label_49ce3c;
        case 0x49ce40u: goto label_49ce40;
        case 0x49ce44u: goto label_49ce44;
        case 0x49ce48u: goto label_49ce48;
        case 0x49ce4cu: goto label_49ce4c;
        case 0x49ce50u: goto label_49ce50;
        case 0x49ce54u: goto label_49ce54;
        case 0x49ce58u: goto label_49ce58;
        case 0x49ce5cu: goto label_49ce5c;
        case 0x49ce60u: goto label_49ce60;
        case 0x49ce64u: goto label_49ce64;
        case 0x49ce68u: goto label_49ce68;
        case 0x49ce6cu: goto label_49ce6c;
        case 0x49ce70u: goto label_49ce70;
        case 0x49ce74u: goto label_49ce74;
        case 0x49ce78u: goto label_49ce78;
        case 0x49ce7cu: goto label_49ce7c;
        case 0x49ce80u: goto label_49ce80;
        case 0x49ce84u: goto label_49ce84;
        case 0x49ce88u: goto label_49ce88;
        case 0x49ce8cu: goto label_49ce8c;
        case 0x49ce90u: goto label_49ce90;
        case 0x49ce94u: goto label_49ce94;
        case 0x49ce98u: goto label_49ce98;
        case 0x49ce9cu: goto label_49ce9c;
        case 0x49cea0u: goto label_49cea0;
        case 0x49cea4u: goto label_49cea4;
        case 0x49cea8u: goto label_49cea8;
        case 0x49ceacu: goto label_49ceac;
        case 0x49ceb0u: goto label_49ceb0;
        case 0x49ceb4u: goto label_49ceb4;
        case 0x49ceb8u: goto label_49ceb8;
        case 0x49cebcu: goto label_49cebc;
        case 0x49cec0u: goto label_49cec0;
        case 0x49cec4u: goto label_49cec4;
        case 0x49cec8u: goto label_49cec8;
        case 0x49ceccu: goto label_49cecc;
        case 0x49ced0u: goto label_49ced0;
        case 0x49ced4u: goto label_49ced4;
        case 0x49ced8u: goto label_49ced8;
        case 0x49cedcu: goto label_49cedc;
        case 0x49cee0u: goto label_49cee0;
        case 0x49cee4u: goto label_49cee4;
        case 0x49cee8u: goto label_49cee8;
        case 0x49ceecu: goto label_49ceec;
        case 0x49cef0u: goto label_49cef0;
        case 0x49cef4u: goto label_49cef4;
        case 0x49cef8u: goto label_49cef8;
        case 0x49cefcu: goto label_49cefc;
        case 0x49cf00u: goto label_49cf00;
        case 0x49cf04u: goto label_49cf04;
        case 0x49cf08u: goto label_49cf08;
        case 0x49cf0cu: goto label_49cf0c;
        case 0x49cf10u: goto label_49cf10;
        case 0x49cf14u: goto label_49cf14;
        case 0x49cf18u: goto label_49cf18;
        case 0x49cf1cu: goto label_49cf1c;
        case 0x49cf20u: goto label_49cf20;
        case 0x49cf24u: goto label_49cf24;
        case 0x49cf28u: goto label_49cf28;
        case 0x49cf2cu: goto label_49cf2c;
        case 0x49cf30u: goto label_49cf30;
        case 0x49cf34u: goto label_49cf34;
        case 0x49cf38u: goto label_49cf38;
        case 0x49cf3cu: goto label_49cf3c;
        case 0x49cf40u: goto label_49cf40;
        case 0x49cf44u: goto label_49cf44;
        case 0x49cf48u: goto label_49cf48;
        case 0x49cf4cu: goto label_49cf4c;
        case 0x49cf50u: goto label_49cf50;
        case 0x49cf54u: goto label_49cf54;
        case 0x49cf58u: goto label_49cf58;
        case 0x49cf5cu: goto label_49cf5c;
        case 0x49cf60u: goto label_49cf60;
        case 0x49cf64u: goto label_49cf64;
        case 0x49cf68u: goto label_49cf68;
        case 0x49cf6cu: goto label_49cf6c;
        case 0x49cf70u: goto label_49cf70;
        case 0x49cf74u: goto label_49cf74;
        case 0x49cf78u: goto label_49cf78;
        case 0x49cf7cu: goto label_49cf7c;
        case 0x49cf80u: goto label_49cf80;
        case 0x49cf84u: goto label_49cf84;
        case 0x49cf88u: goto label_49cf88;
        case 0x49cf8cu: goto label_49cf8c;
        case 0x49cf90u: goto label_49cf90;
        case 0x49cf94u: goto label_49cf94;
        case 0x49cf98u: goto label_49cf98;
        case 0x49cf9cu: goto label_49cf9c;
        case 0x49cfa0u: goto label_49cfa0;
        case 0x49cfa4u: goto label_49cfa4;
        case 0x49cfa8u: goto label_49cfa8;
        case 0x49cfacu: goto label_49cfac;
        case 0x49cfb0u: goto label_49cfb0;
        case 0x49cfb4u: goto label_49cfb4;
        case 0x49cfb8u: goto label_49cfb8;
        case 0x49cfbcu: goto label_49cfbc;
        case 0x49cfc0u: goto label_49cfc0;
        case 0x49cfc4u: goto label_49cfc4;
        case 0x49cfc8u: goto label_49cfc8;
        case 0x49cfccu: goto label_49cfcc;
        case 0x49cfd0u: goto label_49cfd0;
        case 0x49cfd4u: goto label_49cfd4;
        case 0x49cfd8u: goto label_49cfd8;
        case 0x49cfdcu: goto label_49cfdc;
        case 0x49cfe0u: goto label_49cfe0;
        case 0x49cfe4u: goto label_49cfe4;
        case 0x49cfe8u: goto label_49cfe8;
        case 0x49cfecu: goto label_49cfec;
        case 0x49cff0u: goto label_49cff0;
        case 0x49cff4u: goto label_49cff4;
        case 0x49cff8u: goto label_49cff8;
        case 0x49cffcu: goto label_49cffc;
        case 0x49d000u: goto label_49d000;
        case 0x49d004u: goto label_49d004;
        case 0x49d008u: goto label_49d008;
        case 0x49d00cu: goto label_49d00c;
        case 0x49d010u: goto label_49d010;
        case 0x49d014u: goto label_49d014;
        case 0x49d018u: goto label_49d018;
        case 0x49d01cu: goto label_49d01c;
        case 0x49d020u: goto label_49d020;
        case 0x49d024u: goto label_49d024;
        case 0x49d028u: goto label_49d028;
        case 0x49d02cu: goto label_49d02c;
        case 0x49d030u: goto label_49d030;
        case 0x49d034u: goto label_49d034;
        case 0x49d038u: goto label_49d038;
        case 0x49d03cu: goto label_49d03c;
        case 0x49d040u: goto label_49d040;
        case 0x49d044u: goto label_49d044;
        case 0x49d048u: goto label_49d048;
        case 0x49d04cu: goto label_49d04c;
        case 0x49d050u: goto label_49d050;
        case 0x49d054u: goto label_49d054;
        case 0x49d058u: goto label_49d058;
        case 0x49d05cu: goto label_49d05c;
        case 0x49d060u: goto label_49d060;
        case 0x49d064u: goto label_49d064;
        case 0x49d068u: goto label_49d068;
        case 0x49d06cu: goto label_49d06c;
        case 0x49d070u: goto label_49d070;
        case 0x49d074u: goto label_49d074;
        case 0x49d078u: goto label_49d078;
        case 0x49d07cu: goto label_49d07c;
        case 0x49d080u: goto label_49d080;
        case 0x49d084u: goto label_49d084;
        case 0x49d088u: goto label_49d088;
        case 0x49d08cu: goto label_49d08c;
        case 0x49d090u: goto label_49d090;
        case 0x49d094u: goto label_49d094;
        case 0x49d098u: goto label_49d098;
        case 0x49d09cu: goto label_49d09c;
        case 0x49d0a0u: goto label_49d0a0;
        case 0x49d0a4u: goto label_49d0a4;
        case 0x49d0a8u: goto label_49d0a8;
        case 0x49d0acu: goto label_49d0ac;
        case 0x49d0b0u: goto label_49d0b0;
        case 0x49d0b4u: goto label_49d0b4;
        case 0x49d0b8u: goto label_49d0b8;
        case 0x49d0bcu: goto label_49d0bc;
        case 0x49d0c0u: goto label_49d0c0;
        case 0x49d0c4u: goto label_49d0c4;
        case 0x49d0c8u: goto label_49d0c8;
        case 0x49d0ccu: goto label_49d0cc;
        case 0x49d0d0u: goto label_49d0d0;
        case 0x49d0d4u: goto label_49d0d4;
        case 0x49d0d8u: goto label_49d0d8;
        case 0x49d0dcu: goto label_49d0dc;
        case 0x49d0e0u: goto label_49d0e0;
        case 0x49d0e4u: goto label_49d0e4;
        case 0x49d0e8u: goto label_49d0e8;
        case 0x49d0ecu: goto label_49d0ec;
        case 0x49d0f0u: goto label_49d0f0;
        case 0x49d0f4u: goto label_49d0f4;
        case 0x49d0f8u: goto label_49d0f8;
        case 0x49d0fcu: goto label_49d0fc;
        case 0x49d100u: goto label_49d100;
        case 0x49d104u: goto label_49d104;
        case 0x49d108u: goto label_49d108;
        case 0x49d10cu: goto label_49d10c;
        case 0x49d110u: goto label_49d110;
        case 0x49d114u: goto label_49d114;
        case 0x49d118u: goto label_49d118;
        case 0x49d11cu: goto label_49d11c;
        case 0x49d120u: goto label_49d120;
        case 0x49d124u: goto label_49d124;
        case 0x49d128u: goto label_49d128;
        case 0x49d12cu: goto label_49d12c;
        case 0x49d130u: goto label_49d130;
        case 0x49d134u: goto label_49d134;
        case 0x49d138u: goto label_49d138;
        case 0x49d13cu: goto label_49d13c;
        case 0x49d140u: goto label_49d140;
        case 0x49d144u: goto label_49d144;
        case 0x49d148u: goto label_49d148;
        case 0x49d14cu: goto label_49d14c;
        case 0x49d150u: goto label_49d150;
        case 0x49d154u: goto label_49d154;
        case 0x49d158u: goto label_49d158;
        case 0x49d15cu: goto label_49d15c;
        case 0x49d160u: goto label_49d160;
        case 0x49d164u: goto label_49d164;
        case 0x49d168u: goto label_49d168;
        case 0x49d16cu: goto label_49d16c;
        case 0x49d170u: goto label_49d170;
        case 0x49d174u: goto label_49d174;
        case 0x49d178u: goto label_49d178;
        case 0x49d17cu: goto label_49d17c;
        case 0x49d180u: goto label_49d180;
        case 0x49d184u: goto label_49d184;
        case 0x49d188u: goto label_49d188;
        case 0x49d18cu: goto label_49d18c;
        case 0x49d190u: goto label_49d190;
        case 0x49d194u: goto label_49d194;
        case 0x49d198u: goto label_49d198;
        case 0x49d19cu: goto label_49d19c;
        case 0x49d1a0u: goto label_49d1a0;
        case 0x49d1a4u: goto label_49d1a4;
        case 0x49d1a8u: goto label_49d1a8;
        case 0x49d1acu: goto label_49d1ac;
        case 0x49d1b0u: goto label_49d1b0;
        case 0x49d1b4u: goto label_49d1b4;
        case 0x49d1b8u: goto label_49d1b8;
        case 0x49d1bcu: goto label_49d1bc;
        case 0x49d1c0u: goto label_49d1c0;
        case 0x49d1c4u: goto label_49d1c4;
        case 0x49d1c8u: goto label_49d1c8;
        case 0x49d1ccu: goto label_49d1cc;
        case 0x49d1d0u: goto label_49d1d0;
        case 0x49d1d4u: goto label_49d1d4;
        case 0x49d1d8u: goto label_49d1d8;
        case 0x49d1dcu: goto label_49d1dc;
        case 0x49d1e0u: goto label_49d1e0;
        case 0x49d1e4u: goto label_49d1e4;
        case 0x49d1e8u: goto label_49d1e8;
        case 0x49d1ecu: goto label_49d1ec;
        case 0x49d1f0u: goto label_49d1f0;
        case 0x49d1f4u: goto label_49d1f4;
        case 0x49d1f8u: goto label_49d1f8;
        case 0x49d1fcu: goto label_49d1fc;
        case 0x49d200u: goto label_49d200;
        case 0x49d204u: goto label_49d204;
        case 0x49d208u: goto label_49d208;
        case 0x49d20cu: goto label_49d20c;
        case 0x49d210u: goto label_49d210;
        case 0x49d214u: goto label_49d214;
        case 0x49d218u: goto label_49d218;
        case 0x49d21cu: goto label_49d21c;
        case 0x49d220u: goto label_49d220;
        case 0x49d224u: goto label_49d224;
        case 0x49d228u: goto label_49d228;
        case 0x49d22cu: goto label_49d22c;
        case 0x49d230u: goto label_49d230;
        case 0x49d234u: goto label_49d234;
        case 0x49d238u: goto label_49d238;
        case 0x49d23cu: goto label_49d23c;
        case 0x49d240u: goto label_49d240;
        case 0x49d244u: goto label_49d244;
        case 0x49d248u: goto label_49d248;
        case 0x49d24cu: goto label_49d24c;
        case 0x49d250u: goto label_49d250;
        case 0x49d254u: goto label_49d254;
        case 0x49d258u: goto label_49d258;
        case 0x49d25cu: goto label_49d25c;
        case 0x49d260u: goto label_49d260;
        case 0x49d264u: goto label_49d264;
        case 0x49d268u: goto label_49d268;
        case 0x49d26cu: goto label_49d26c;
        case 0x49d270u: goto label_49d270;
        case 0x49d274u: goto label_49d274;
        case 0x49d278u: goto label_49d278;
        case 0x49d27cu: goto label_49d27c;
        case 0x49d280u: goto label_49d280;
        case 0x49d284u: goto label_49d284;
        case 0x49d288u: goto label_49d288;
        case 0x49d28cu: goto label_49d28c;
        case 0x49d290u: goto label_49d290;
        case 0x49d294u: goto label_49d294;
        case 0x49d298u: goto label_49d298;
        case 0x49d29cu: goto label_49d29c;
        case 0x49d2a0u: goto label_49d2a0;
        case 0x49d2a4u: goto label_49d2a4;
        case 0x49d2a8u: goto label_49d2a8;
        case 0x49d2acu: goto label_49d2ac;
        case 0x49d2b0u: goto label_49d2b0;
        case 0x49d2b4u: goto label_49d2b4;
        case 0x49d2b8u: goto label_49d2b8;
        case 0x49d2bcu: goto label_49d2bc;
        case 0x49d2c0u: goto label_49d2c0;
        case 0x49d2c4u: goto label_49d2c4;
        case 0x49d2c8u: goto label_49d2c8;
        case 0x49d2ccu: goto label_49d2cc;
        case 0x49d2d0u: goto label_49d2d0;
        case 0x49d2d4u: goto label_49d2d4;
        case 0x49d2d8u: goto label_49d2d8;
        case 0x49d2dcu: goto label_49d2dc;
        case 0x49d2e0u: goto label_49d2e0;
        case 0x49d2e4u: goto label_49d2e4;
        case 0x49d2e8u: goto label_49d2e8;
        case 0x49d2ecu: goto label_49d2ec;
        case 0x49d2f0u: goto label_49d2f0;
        case 0x49d2f4u: goto label_49d2f4;
        case 0x49d2f8u: goto label_49d2f8;
        case 0x49d2fcu: goto label_49d2fc;
        case 0x49d300u: goto label_49d300;
        case 0x49d304u: goto label_49d304;
        case 0x49d308u: goto label_49d308;
        case 0x49d30cu: goto label_49d30c;
        case 0x49d310u: goto label_49d310;
        case 0x49d314u: goto label_49d314;
        case 0x49d318u: goto label_49d318;
        case 0x49d31cu: goto label_49d31c;
        case 0x49d320u: goto label_49d320;
        case 0x49d324u: goto label_49d324;
        case 0x49d328u: goto label_49d328;
        case 0x49d32cu: goto label_49d32c;
        case 0x49d330u: goto label_49d330;
        case 0x49d334u: goto label_49d334;
        case 0x49d338u: goto label_49d338;
        case 0x49d33cu: goto label_49d33c;
        case 0x49d340u: goto label_49d340;
        case 0x49d344u: goto label_49d344;
        case 0x49d348u: goto label_49d348;
        case 0x49d34cu: goto label_49d34c;
        case 0x49d350u: goto label_49d350;
        case 0x49d354u: goto label_49d354;
        case 0x49d358u: goto label_49d358;
        case 0x49d35cu: goto label_49d35c;
        case 0x49d360u: goto label_49d360;
        case 0x49d364u: goto label_49d364;
        case 0x49d368u: goto label_49d368;
        case 0x49d36cu: goto label_49d36c;
        case 0x49d370u: goto label_49d370;
        case 0x49d374u: goto label_49d374;
        case 0x49d378u: goto label_49d378;
        case 0x49d37cu: goto label_49d37c;
        case 0x49d380u: goto label_49d380;
        case 0x49d384u: goto label_49d384;
        case 0x49d388u: goto label_49d388;
        case 0x49d38cu: goto label_49d38c;
        case 0x49d390u: goto label_49d390;
        case 0x49d394u: goto label_49d394;
        case 0x49d398u: goto label_49d398;
        case 0x49d39cu: goto label_49d39c;
        case 0x49d3a0u: goto label_49d3a0;
        case 0x49d3a4u: goto label_49d3a4;
        case 0x49d3a8u: goto label_49d3a8;
        case 0x49d3acu: goto label_49d3ac;
        case 0x49d3b0u: goto label_49d3b0;
        case 0x49d3b4u: goto label_49d3b4;
        case 0x49d3b8u: goto label_49d3b8;
        case 0x49d3bcu: goto label_49d3bc;
        case 0x49d3c0u: goto label_49d3c0;
        case 0x49d3c4u: goto label_49d3c4;
        case 0x49d3c8u: goto label_49d3c8;
        case 0x49d3ccu: goto label_49d3cc;
        case 0x49d3d0u: goto label_49d3d0;
        case 0x49d3d4u: goto label_49d3d4;
        case 0x49d3d8u: goto label_49d3d8;
        case 0x49d3dcu: goto label_49d3dc;
        case 0x49d3e0u: goto label_49d3e0;
        case 0x49d3e4u: goto label_49d3e4;
        case 0x49d3e8u: goto label_49d3e8;
        case 0x49d3ecu: goto label_49d3ec;
        case 0x49d3f0u: goto label_49d3f0;
        case 0x49d3f4u: goto label_49d3f4;
        case 0x49d3f8u: goto label_49d3f8;
        case 0x49d3fcu: goto label_49d3fc;
        case 0x49d400u: goto label_49d400;
        case 0x49d404u: goto label_49d404;
        case 0x49d408u: goto label_49d408;
        case 0x49d40cu: goto label_49d40c;
        case 0x49d410u: goto label_49d410;
        case 0x49d414u: goto label_49d414;
        case 0x49d418u: goto label_49d418;
        case 0x49d41cu: goto label_49d41c;
        case 0x49d420u: goto label_49d420;
        case 0x49d424u: goto label_49d424;
        case 0x49d428u: goto label_49d428;
        case 0x49d42cu: goto label_49d42c;
        case 0x49d430u: goto label_49d430;
        case 0x49d434u: goto label_49d434;
        case 0x49d438u: goto label_49d438;
        case 0x49d43cu: goto label_49d43c;
        case 0x49d440u: goto label_49d440;
        case 0x49d444u: goto label_49d444;
        case 0x49d448u: goto label_49d448;
        case 0x49d44cu: goto label_49d44c;
        case 0x49d450u: goto label_49d450;
        case 0x49d454u: goto label_49d454;
        case 0x49d458u: goto label_49d458;
        case 0x49d45cu: goto label_49d45c;
        case 0x49d460u: goto label_49d460;
        case 0x49d464u: goto label_49d464;
        case 0x49d468u: goto label_49d468;
        case 0x49d46cu: goto label_49d46c;
        case 0x49d470u: goto label_49d470;
        case 0x49d474u: goto label_49d474;
        case 0x49d478u: goto label_49d478;
        case 0x49d47cu: goto label_49d47c;
        case 0x49d480u: goto label_49d480;
        case 0x49d484u: goto label_49d484;
        case 0x49d488u: goto label_49d488;
        case 0x49d48cu: goto label_49d48c;
        case 0x49d490u: goto label_49d490;
        case 0x49d494u: goto label_49d494;
        case 0x49d498u: goto label_49d498;
        case 0x49d49cu: goto label_49d49c;
        case 0x49d4a0u: goto label_49d4a0;
        case 0x49d4a4u: goto label_49d4a4;
        case 0x49d4a8u: goto label_49d4a8;
        case 0x49d4acu: goto label_49d4ac;
        case 0x49d4b0u: goto label_49d4b0;
        case 0x49d4b4u: goto label_49d4b4;
        case 0x49d4b8u: goto label_49d4b8;
        case 0x49d4bcu: goto label_49d4bc;
        case 0x49d4c0u: goto label_49d4c0;
        case 0x49d4c4u: goto label_49d4c4;
        case 0x49d4c8u: goto label_49d4c8;
        case 0x49d4ccu: goto label_49d4cc;
        case 0x49d4d0u: goto label_49d4d0;
        case 0x49d4d4u: goto label_49d4d4;
        case 0x49d4d8u: goto label_49d4d8;
        case 0x49d4dcu: goto label_49d4dc;
        case 0x49d4e0u: goto label_49d4e0;
        case 0x49d4e4u: goto label_49d4e4;
        case 0x49d4e8u: goto label_49d4e8;
        case 0x49d4ecu: goto label_49d4ec;
        case 0x49d4f0u: goto label_49d4f0;
        case 0x49d4f4u: goto label_49d4f4;
        case 0x49d4f8u: goto label_49d4f8;
        case 0x49d4fcu: goto label_49d4fc;
        case 0x49d500u: goto label_49d500;
        case 0x49d504u: goto label_49d504;
        case 0x49d508u: goto label_49d508;
        case 0x49d50cu: goto label_49d50c;
        case 0x49d510u: goto label_49d510;
        case 0x49d514u: goto label_49d514;
        case 0x49d518u: goto label_49d518;
        case 0x49d51cu: goto label_49d51c;
        case 0x49d520u: goto label_49d520;
        case 0x49d524u: goto label_49d524;
        case 0x49d528u: goto label_49d528;
        case 0x49d52cu: goto label_49d52c;
        case 0x49d530u: goto label_49d530;
        case 0x49d534u: goto label_49d534;
        case 0x49d538u: goto label_49d538;
        case 0x49d53cu: goto label_49d53c;
        case 0x49d540u: goto label_49d540;
        case 0x49d544u: goto label_49d544;
        case 0x49d548u: goto label_49d548;
        case 0x49d54cu: goto label_49d54c;
        case 0x49d550u: goto label_49d550;
        case 0x49d554u: goto label_49d554;
        case 0x49d558u: goto label_49d558;
        case 0x49d55cu: goto label_49d55c;
        case 0x49d560u: goto label_49d560;
        case 0x49d564u: goto label_49d564;
        case 0x49d568u: goto label_49d568;
        case 0x49d56cu: goto label_49d56c;
        case 0x49d570u: goto label_49d570;
        case 0x49d574u: goto label_49d574;
        case 0x49d578u: goto label_49d578;
        case 0x49d57cu: goto label_49d57c;
        case 0x49d580u: goto label_49d580;
        case 0x49d584u: goto label_49d584;
        case 0x49d588u: goto label_49d588;
        case 0x49d58cu: goto label_49d58c;
        case 0x49d590u: goto label_49d590;
        case 0x49d594u: goto label_49d594;
        case 0x49d598u: goto label_49d598;
        case 0x49d59cu: goto label_49d59c;
        default: break;
    }

    ctx->pc = 0x49ce18u;

label_49ce18:
    // 0x49ce18: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x49ce18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_49ce1c:
    // 0x49ce1c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x49ce1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_49ce20:
    // 0x49ce20: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x49ce20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_49ce24:
    // 0x49ce24: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x49ce24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_49ce28:
    // 0x49ce28: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x49ce28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_49ce2c:
    // 0x49ce2c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x49ce2cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_49ce30:
    // 0x49ce30: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x49ce30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_49ce34:
    // 0x49ce34: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x49ce34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
label_49ce38:
    // 0x49ce38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x49ce38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_49ce3c:
    // 0x49ce3c: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x49ce3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_49ce40:
    // 0x49ce40: 0x96510014  lhu         $s1, 0x14($s2)
    ctx->pc = 0x49ce40u;
    SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 20)));
label_49ce44:
    // 0x49ce44: 0x12200012  beqz        $s1, . + 4 + (0x12 << 2)
label_49ce48:
    if (ctx->pc == 0x49CE48u) {
        ctx->pc = 0x49CE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49CE44u;
        // 0x49ce48: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49CE4Cu;
        goto label_49ce4c;
    }
    ctx->pc = 0x49CE44u;
    {
        const bool branch_taken_0x49ce44 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x49CE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49CE44u;
        // 0x49ce48: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49ce44) {
            ctx->pc = 0x49CE90u;
            goto label_49ce90;
        }
    }
    ctx->pc = 0x49CE4Cu;
label_49ce4c:
    // 0x49ce4c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x49ce4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_49ce50:
    // 0x49ce50: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x49ce50u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_49ce54:
    // 0x49ce54: 0x2455e880  addiu       $s5, $v0, -0x1780
    ctx->pc = 0x49ce54u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_49ce58:
    // 0x49ce58: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x49ce58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_49ce5c:
    // 0x49ce5c: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x49ce5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_49ce60:
    // 0x49ce60: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x49ce60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_49ce64:
    // 0x49ce64: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_49ce68:
    if (ctx->pc == 0x49CE68u) {
        ctx->pc = 0x49CE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49CE64u;
        // 0x49ce68: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49CE6Cu;
        goto label_49ce6c;
    }
    ctx->pc = 0x49CE64u;
    {
        const bool branch_taken_0x49ce64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x49CE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49CE64u;
        // 0x49ce68: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49ce64) {
            ctx->pc = 0x49CE84u;
            goto label_49ce84;
        }
    }
    ctx->pc = 0x49CE6Cu;
label_49ce6c:
    // 0x49ce6c: 0x8ea200f4  lw          $v0, 0xF4($s5)
    ctx->pc = 0x49ce6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 244)));
label_49ce70:
    // 0x49ce70: 0x40f809  jalr        $v0
label_49ce74:
    if (ctx->pc == 0x49CE74u) {
        ctx->pc = 0x49CE78u;
        goto label_49ce78;
    }
    ctx->pc = 0x49CE70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x49CE78u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49CE70u, 0x49CE78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x49CE78u;
label_49ce78:
    // 0x49ce78: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x49ce78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_49ce7c:
    // 0x49ce7c: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x49ce7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_49ce80:
    // 0x49ce80: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x49ce80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_49ce84:
    // 0x49ce84: 0x271102b  sltu        $v0, $s3, $s1
    ctx->pc = 0x49ce84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_49ce88:
    // 0x49ce88: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
label_49ce8c:
    if (ctx->pc == 0x49CE8Cu) {
        ctx->pc = 0x49CE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49CE88u;
        // 0x49ce8c: 0x26940014  addiu       $s4, $s4, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49CE90u;
        goto label_49ce90;
    }
    ctx->pc = 0x49CE88u;
    {
        const bool branch_taken_0x49ce88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x49CE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49CE88u;
        // 0x49ce8c: 0x26940014  addiu       $s4, $s4, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49ce88) {
            ctx->pc = 0x49CE58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49ce58;
        }
    }
    ctx->pc = 0x49CE90u;
label_49ce90:
    // 0x49ce90: 0x96510016  lhu         $s1, 0x16($s2)
    ctx->pc = 0x49ce90u;
    SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 22)));
label_49ce94:
    // 0x49ce94: 0x12200012  beqz        $s1, . + 4 + (0x12 << 2)
label_49ce98:
    if (ctx->pc == 0x49CE98u) {
        ctx->pc = 0x49CE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49CE94u;
        // 0x49ce98: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49CE9Cu;
        goto label_49ce9c;
    }
    ctx->pc = 0x49CE94u;
    {
        const bool branch_taken_0x49ce94 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x49CE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49CE94u;
        // 0x49ce98: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49ce94) {
            ctx->pc = 0x49CEE0u;
            goto label_49cee0;
        }
    }
    ctx->pc = 0x49CE9Cu;
label_49ce9c:
    // 0x49ce9c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x49ce9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_49cea0:
    // 0x49cea0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x49cea0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_49cea4:
    // 0x49cea4: 0x2455e880  addiu       $s5, $v0, -0x1780
    ctx->pc = 0x49cea4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_49cea8:
    // 0x49cea8: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x49cea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_49ceac:
    // 0x49ceac: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x49ceacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_49ceb0:
    // 0x49ceb0: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x49ceb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_49ceb4:
    // 0x49ceb4: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_49ceb8:
    if (ctx->pc == 0x49CEB8u) {
        ctx->pc = 0x49CEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49CEB4u;
        // 0x49ceb8: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49CEBCu;
        goto label_49cebc;
    }
    ctx->pc = 0x49CEB4u;
    {
        const bool branch_taken_0x49ceb4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x49CEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49CEB4u;
        // 0x49ceb8: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49ceb4) {
            ctx->pc = 0x49CED4u;
            goto label_49ced4;
        }
    }
    ctx->pc = 0x49CEBCu;
label_49cebc:
    // 0x49cebc: 0x8ea200f4  lw          $v0, 0xF4($s5)
    ctx->pc = 0x49cebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 244)));
label_49cec0:
    // 0x49cec0: 0x40f809  jalr        $v0
label_49cec4:
    if (ctx->pc == 0x49CEC4u) {
        ctx->pc = 0x49CEC8u;
        goto label_49cec8;
    }
    ctx->pc = 0x49CEC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x49CEC8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49CEC0u, 0x49CEC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x49CEC8u;
label_49cec8:
    // 0x49cec8: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x49cec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_49cecc:
    // 0x49cecc: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x49ceccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_49ced0:
    // 0x49ced0: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x49ced0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_49ced4:
    // 0x49ced4: 0x271102b  sltu        $v0, $s3, $s1
    ctx->pc = 0x49ced4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_49ced8:
    // 0x49ced8: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
label_49cedc:
    if (ctx->pc == 0x49CEDCu) {
        ctx->pc = 0x49CEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49CED8u;
        // 0x49cedc: 0x26940014  addiu       $s4, $s4, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49CEE0u;
        goto label_49cee0;
    }
    ctx->pc = 0x49CED8u;
    {
        const bool branch_taken_0x49ced8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x49CEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49CED8u;
        // 0x49cedc: 0x26940014  addiu       $s4, $s4, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49ced8) {
            ctx->pc = 0x49CEA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49cea8;
        }
    }
    ctx->pc = 0x49CEE0u;
label_49cee0:
    // 0x49cee0: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x49cee0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_49cee4:
    // 0x49cee4: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_49cee8:
    if (ctx->pc == 0x49CEE8u) {
        ctx->pc = 0x49CEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49CEE4u;
        // 0x49cee8: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49CEECu;
        goto label_49ceec;
    }
    ctx->pc = 0x49CEE4u;
    {
        const bool branch_taken_0x49cee4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x49CEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49CEE4u;
        // 0x49cee8: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49cee4) {
            ctx->pc = 0x49CF00u;
            goto label_49cf00;
        }
    }
    ctx->pc = 0x49CEECu;
label_49ceec:
    // 0x49ceec: 0x8c62e974  lw          $v0, -0x168C($v1)
    ctx->pc = 0x49ceecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961524)));
label_49cef0:
    // 0x49cef0: 0x40f809  jalr        $v0
label_49cef4:
    if (ctx->pc == 0x49CEF4u) {
        ctx->pc = 0x49CEF8u;
        goto label_49cef8;
    }
    ctx->pc = 0x49CEF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x49CEF8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49CEF0u, 0x49CEF8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x49CEF8u;
label_49cef8:
    // 0x49cef8: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x49cef8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_49cefc:
    // 0x49cefc: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x49cefcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_49cf00:
    // 0x49cf00: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x49cf00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_49cf04:
    // 0x49cf04: 0xc1277d0  jal         func_49DF40
label_49cf08:
    if (ctx->pc == 0x49CF08u) {
        ctx->pc = 0x49CF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49CF04u;
        // 0x49cf08: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49CF0Cu;
        goto label_49cf0c;
    }
    ctx->pc = 0x49CF04u;
    SET_GPR_U32(ctx, 31, 0x49CF0Cu);
    ctx->pc = 0x49CF08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49CF04u;
    // 0x49cf08: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49DF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49DF40u, 0x49CF04u, 0x49CF0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49CF0Cu;
label_49cf0c:
    // 0x49cf0c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x49cf0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_49cf10:
    // 0x49cf10: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x49cf10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_49cf14:
    // 0x49cf14: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x49cf14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_49cf18:
    // 0x49cf18: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x49cf18u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_49cf1c:
    // 0x49cf1c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x49cf1cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_49cf20:
    // 0x49cf20: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x49cf20u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_49cf24:
    // 0x49cf24: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x49cf24u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_49cf28:
    // 0x49cf28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x49cf28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_49cf2c:
    // 0x49cf2c: 0x3e00008  jr          $ra
label_49cf30:
    if (ctx->pc == 0x49CF30u) {
        ctx->pc = 0x49CF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49CF2Cu;
        // 0x49cf30: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49CF34u;
        goto label_49cf34;
    }
    ctx->pc = 0x49CF2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49CF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49CF2Cu;
        // 0x49cf30: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49CF2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49CF34u;
label_49cf34:
    // 0x49cf34: 0x0  nop
    ctx->pc = 0x49cf34u;
    // NOP
label_49cf38:
    // 0x49cf38: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x49cf38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_49cf3c:
    // 0x49cf3c: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x49cf3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_49cf40:
    // 0x49cf40: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x49cf40u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_49cf44:
    // 0x49cf44: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x49cf44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_49cf48:
    // 0x49cf48: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x49cf48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_49cf4c:
    // 0x49cf4c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x49cf4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_49cf50:
    // 0x49cf50: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x49cf50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_49cf54:
    // 0x49cf54: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x49cf54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_49cf58:
    // 0x49cf58: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x49cf58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
label_49cf5c:
    // 0x49cf5c: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x49cf5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
label_49cf60:
    // 0x49cf60: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x49cf60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_49cf64:
    // 0x49cf64: 0xc127386  jal         func_49CE18
label_49cf68:
    if (ctx->pc == 0x49CF68u) {
        ctx->pc = 0x49CF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49CF64u;
        // 0x49cf68: 0x2413000c  addiu       $s3, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49CF6Cu;
        goto label_49cf6c;
    }
    ctx->pc = 0x49CF64u;
    SET_GPR_U32(ctx, 31, 0x49CF6Cu);
    ctx->pc = 0x49CF68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49CF64u;
    // 0x49cf68: 0x2413000c  addiu       $s3, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49CE18u;
    goto label_49ce18;
    ctx->pc = 0x49CF6Cu;
label_49cf6c:
    // 0x49cf6c: 0x96430014  lhu         $v1, 0x14($s2)
    ctx->pc = 0x49cf6cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 20)));
label_49cf70:
    // 0x49cf70: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x49cf70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_49cf74:
    // 0x49cf74: 0x96460016  lhu         $a2, 0x16($s2)
    ctx->pc = 0x49cf74u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 22)));
label_49cf78:
    // 0x49cf78: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x49cf78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_49cf7c:
    // 0x49cf7c: 0x34a5080a  ori         $a1, $a1, 0x80A
    ctx->pc = 0x49cf7cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2058);
label_49cf80:
    // 0x49cf80: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x49cf80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_49cf84:
    // 0x49cf84: 0x731818  mult        $v1, $v1, $s3
    ctx->pc = 0x49cf84u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_49cf88:
    // 0x49cf88: 0xc127ca4  jal         func_49F290
label_49cf8c:
    if (ctx->pc == 0x49CF8Cu) {
        ctx->pc = 0x49CF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49CF88u;
        // 0x49cf8c: 0x24700028  addiu       $s0, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49CF90u;
        goto label_49cf90;
    }
    ctx->pc = 0x49CF88u;
    SET_GPR_U32(ctx, 31, 0x49CF90u);
    ctx->pc = 0x49CF8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49CF88u;
    // 0x49cf8c: 0x24700028  addiu       $s0, $v1, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49F290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F290u, 0x49CF88u, 0x49CF90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49CF90u;
label_49cf90:
    // 0x49cf90: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x49cf90u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_49cf94:
    // 0x49cf94: 0x16800003  bnez        $s4, . + 4 + (0x3 << 2)
label_49cf98:
    if (ctx->pc == 0x49CF98u) {
        ctx->pc = 0x49CF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49CF94u;
        // 0x49cf98: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49CF9Cu;
        goto label_49cf9c;
    }
    ctx->pc = 0x49CF94u;
    {
        const bool branch_taken_0x49cf94 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x49CF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49CF94u;
        // 0x49cf98: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49cf94) {
            ctx->pc = 0x49CFA4u;
            goto label_49cfa4;
        }
    }
    ctx->pc = 0x49CF9Cu;
label_49cf9c:
    // 0x49cf9c: 0x100000cd  b           . + 4 + (0xCD << 2)
label_49cfa0:
    if (ctx->pc == 0x49CFA0u) {
        ctx->pc = 0x49CFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49CF9Cu;
        // 0x49cfa0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49CFA4u;
        goto label_49cfa4;
    }
    ctx->pc = 0x49CF9Cu;
    {
        const bool branch_taken_0x49cf9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49CFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49CF9Cu;
        // 0x49cfa0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49cf9c) {
            ctx->pc = 0x49D2D4u;
            goto label_49d2d4;
        }
    }
    ctx->pc = 0x49CFA4u;
label_49cfa4:
    // 0x49cfa4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x49cfa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_49cfa8:
    // 0x49cfa8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x49cfa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_49cfac:
    // 0x49cfac: 0xc0bb778  jal         func_2EDDE0
label_49cfb0:
    if (ctx->pc == 0x49CFB0u) {
        ctx->pc = 0x49CFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49CFACu;
        // 0x49cfb0: 0x2908821  addu        $s1, $s4, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49CFB4u;
        goto label_49cfb4;
    }
    ctx->pc = 0x49CFACu;
    SET_GPR_U32(ctx, 31, 0x49CFB4u);
    ctx->pc = 0x49CFB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49CFACu;
    // 0x49cfb0: 0x2908821  addu        $s1, $s4, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x49CFACu, 0x49CFB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49CFB4u;
label_49cfb4:
    // 0x49cfb4: 0x96830014  lhu         $v1, 0x14($s4)
    ctx->pc = 0x49cfb4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 20)));
label_49cfb8:
    // 0x49cfb8: 0x26820028  addiu       $v0, $s4, 0x28
    ctx->pc = 0x49cfb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 40));
label_49cfbc:
    // 0x49cfbc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x49cfbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_49cfc0:
    // 0x49cfc0: 0xae820010  sw          $v0, 0x10($s4)
    ctx->pc = 0x49cfc0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 2));
label_49cfc4:
    // 0x49cfc4: 0x732818  mult        $a1, $v1, $s3
    ctx->pc = 0x49cfc4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_49cfc8:
    // 0x49cfc8: 0xa21821  addu        $v1, $a1, $v0
    ctx->pc = 0x49cfc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_49cfcc:
    // 0x49cfcc: 0xc12a4ce  jal         func_4A9338
label_49cfd0:
    if (ctx->pc == 0x49CFD0u) {
        ctx->pc = 0x49CFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49CFCCu;
        // 0x49cfd0: 0xae83000c  sw          $v1, 0xC($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49CFD4u;
        goto label_49cfd4;
    }
    ctx->pc = 0x49CFCCu;
    SET_GPR_U32(ctx, 31, 0x49CFD4u);
    ctx->pc = 0x49CFD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49CFCCu;
    // 0x49cfd0: 0xae83000c  sw          $v1, 0xC($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9338u, 0x49CFCCu, 0x49CFD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49CFD4u;
label_49cfd4:
    // 0x49cfd4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x49cfd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_49cfd8:
    // 0x49cfd8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x49cfd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_49cfdc:
    // 0x49cfdc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x49cfdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_49cfe0:
    // 0x49cfe0: 0x68660007  ldl         $a2, 0x7($v1)
    ctx->pc = 0x49cfe0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_49cfe4:
    // 0x49cfe4: 0x6c660000  ldr         $a2, 0x0($v1)
    ctx->pc = 0x49cfe4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_49cfe8:
    // 0x49cfe8: 0x6867000f  ldl         $a3, 0xF($v1)
    ctx->pc = 0x49cfe8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_49cfec:
    // 0x49cfec: 0x6c670008  ldr         $a3, 0x8($v1)
    ctx->pc = 0x49cfecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_49cff0:
    // 0x49cff0: 0xb2260007  sdl         $a2, 0x7($s1)
    ctx->pc = 0x49cff0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_49cff4:
    // 0x49cff4: 0xb6260000  sdr         $a2, 0x0($s1)
    ctx->pc = 0x49cff4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_49cff8:
    // 0x49cff8: 0xb227000f  sdl         $a3, 0xF($s1)
    ctx->pc = 0x49cff8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_49cffc:
    // 0x49cffc: 0xc12a47e  jal         func_4A91F8
label_49d000:
    if (ctx->pc == 0x49D000u) {
        ctx->pc = 0x49D000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49CFFCu;
        // 0x49d000: 0xb6270008  sdr         $a3, 0x8($s1) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 17), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x49D004u;
        goto label_49d004;
    }
    ctx->pc = 0x49CFFCu;
    SET_GPR_U32(ctx, 31, 0x49D004u);
    ctx->pc = 0x49D000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49CFFCu;
    // 0x49d000: 0xb6270008  sdr         $a3, 0x8($s1) (Delay Slot)
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A91F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A91F8u, 0x49CFFCu, 0x49D004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49D004u;
label_49d004:
    // 0x49d004: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x49d004u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_49d008:
    // 0x49d008: 0x10a0000e  beqz        $a1, . + 4 + (0xE << 2)
label_49d00c:
    if (ctx->pc == 0x49D00Cu) {
        ctx->pc = 0x49D00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D008u;
        // 0x49d00c: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49D010u;
        goto label_49d010;
    }
    ctx->pc = 0x49D008u;
    {
        const bool branch_taken_0x49d008 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x49D00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D008u;
        // 0x49d00c: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49d008) {
            ctx->pc = 0x49D044u;
            goto label_49d044;
        }
    }
    ctx->pc = 0x49D010u;
label_49d010:
    // 0x49d010: 0x3c100062  lui         $s0, 0x62
    ctx->pc = 0x49d010u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)98 << 16));
label_49d014:
    // 0x49d014: 0x2610e880  addiu       $s0, $s0, -0x1780
    ctx->pc = 0x49d014u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961280));
label_49d018:
    // 0x49d018: 0x8e0200cc  lw          $v0, 0xCC($s0)
    ctx->pc = 0x49d018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
label_49d01c:
    // 0x49d01c: 0x40f809  jalr        $v0
label_49d020:
    if (ctx->pc == 0x49D020u) {
        ctx->pc = 0x49D020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D01Cu;
        // 0x49d020: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49D024u;
        goto label_49d024;
    }
    ctx->pc = 0x49D01Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x49D024u);
        ctx->pc = 0x49D020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D01Cu;
        // 0x49d020: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49D01Cu, 0x49D024u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x49D024u;
label_49d024:
    // 0x49d024: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x49d024u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_49d028:
    // 0x49d028: 0xc12a448  jal         func_4A9120
label_49d02c:
    if (ctx->pc == 0x49D02Cu) {
        ctx->pc = 0x49D02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D028u;
        // 0x49d02c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49D030u;
        goto label_49d030;
    }
    ctx->pc = 0x49D028u;
    SET_GPR_U32(ctx, 31, 0x49D030u);
    ctx->pc = 0x49D02Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49D028u;
    // 0x49d02c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9120u, 0x49D028u, 0x49D030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49D030u;
label_49d030:
    // 0x49d030: 0x8e0200f4  lw          $v0, 0xF4($s0)
    ctx->pc = 0x49d030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
label_49d034:
    // 0x49d034: 0x40f809  jalr        $v0
label_49d038:
    if (ctx->pc == 0x49D038u) {
        ctx->pc = 0x49D038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D034u;
        // 0x49d038: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49D03Cu;
        goto label_49d03c;
    }
    ctx->pc = 0x49D034u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x49D03Cu);
        ctx->pc = 0x49D038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D034u;
        // 0x49d038: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49D034u, 0x49D03Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x49D03Cu;
label_49d03c:
    // 0x49d03c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x49d03cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_49d040:
    // 0x49d040: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x49d040u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_49d044:
    // 0x49d044: 0x96550014  lhu         $s5, 0x14($s2)
    ctx->pc = 0x49d044u;
    SET_GPR_ZE32(ctx, 21, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 20)));
label_49d048:
    // 0x49d048: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x49d048u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_49d04c:
    // 0x49d04c: 0x12a00031  beqz        $s5, . + 4 + (0x31 << 2)
label_49d050:
    if (ctx->pc == 0x49D050u) {
        ctx->pc = 0x49D050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D04Cu;
        // 0x49d050: 0x26970020  addiu       $s7, $s4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49D054u;
        goto label_49d054;
    }
    ctx->pc = 0x49D04Cu;
    {
        const bool branch_taken_0x49d04c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x49D050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D04Cu;
        // 0x49d050: 0x26970020  addiu       $s7, $s4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49d04c) {
            ctx->pc = 0x49D114u;
            goto label_49d114;
        }
    }
    ctx->pc = 0x49D054u;
label_49d054:
    // 0x49d054: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x49d054u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_49d058:
    // 0x49d058: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x49d058u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_49d05c:
    // 0x49d05c: 0x2456e880  addiu       $s6, $v0, -0x1780
    ctx->pc = 0x49d05cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_49d060:
    // 0x49d060: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x49d060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_49d064:
    // 0x49d064: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x49d064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_49d068:
    // 0x49d068: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x49d068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_49d06c:
    // 0x49d06c: 0x50600026  beql        $v1, $zero, . + 4 + (0x26 << 2)
label_49d070:
    if (ctx->pc == 0x49D070u) {
        ctx->pc = 0x49D070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D06Cu;
        // 0x49d070: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49D074u;
        goto label_49d074;
    }
    ctx->pc = 0x49D06Cu;
    {
        const bool branch_taken_0x49d06c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x49d06c) {
            ctx->pc = 0x49D070u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49D06Cu;
            // 0x49d070: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x49D108u;
            goto label_49d108;
        }
    }
    ctx->pc = 0x49D074u;
label_49d074:
    // 0x49d074: 0x8e840010  lw          $a0, 0x10($s4)
    ctx->pc = 0x49d074u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_49d078:
    // 0x49d078: 0xc12a4ce  jal         func_4A9338
label_49d07c:
    if (ctx->pc == 0x49D07Cu) {
        ctx->pc = 0x49D07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D078u;
        // 0x49d07c: 0x902021  addu        $a0, $a0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49D080u;
        goto label_49d080;
    }
    ctx->pc = 0x49D078u;
    SET_GPR_U32(ctx, 31, 0x49D080u);
    ctx->pc = 0x49D07Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49D078u;
    // 0x49d07c: 0x902021  addu        $a0, $a0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9338u, 0x49D078u, 0x49D080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49D080u;
label_49d080:
    // 0x49d080: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x49d080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_49d084:
    // 0x49d084: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x49d084u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_49d088:
    // 0x49d088: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x49d088u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_49d08c:
    // 0x49d08c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x49d08cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_49d090:
    // 0x49d090: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x49d090u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_49d094:
    // 0x49d094: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x49d094u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_49d098:
    // 0x49d098: 0x6844000f  ldl         $a0, 0xF($v0)
    ctx->pc = 0x49d098u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_49d09c:
    // 0x49d09c: 0x6c440008  ldr         $a0, 0x8($v0)
    ctx->pc = 0x49d09cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_49d0a0:
    // 0x49d0a0: 0xb2230007  sdl         $v1, 0x7($s1)
    ctx->pc = 0x49d0a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_49d0a4:
    // 0x49d0a4: 0xb6230000  sdr         $v1, 0x0($s1)
    ctx->pc = 0x49d0a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_49d0a8:
    // 0x49d0a8: 0xb224000f  sdl         $a0, 0xF($s1)
    ctx->pc = 0x49d0a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_49d0ac:
    // 0x49d0ac: 0xb6240008  sdr         $a0, 0x8($s1)
    ctx->pc = 0x49d0acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_49d0b0:
    // 0x49d0b0: 0x8e840010  lw          $a0, 0x10($s4)
    ctx->pc = 0x49d0b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_49d0b4:
    // 0x49d0b4: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x49d0b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_49d0b8:
    // 0x49d0b8: 0xc12a47e  jal         func_4A91F8
label_49d0bc:
    if (ctx->pc == 0x49D0BCu) {
        ctx->pc = 0x49D0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D0B8u;
        // 0x49d0bc: 0x902021  addu        $a0, $a0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49D0C0u;
        goto label_49d0c0;
    }
    ctx->pc = 0x49D0B8u;
    SET_GPR_U32(ctx, 31, 0x49D0C0u);
    ctx->pc = 0x49D0BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49D0B8u;
    // 0x49d0bc: 0x902021  addu        $a0, $a0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A91F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A91F8u, 0x49D0B8u, 0x49D0C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49D0C0u;
label_49d0c0:
    // 0x49d0c0: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x49d0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_49d0c4:
    // 0x49d0c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x49d0c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_49d0c8:
    // 0x49d0c8: 0x8ec200cc  lw          $v0, 0xCC($s6)
    ctx->pc = 0x49d0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 204)));
label_49d0cc:
    // 0x49d0cc: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x49d0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_49d0d0:
    // 0x49d0d0: 0x40f809  jalr        $v0
label_49d0d4:
    if (ctx->pc == 0x49D0D4u) {
        ctx->pc = 0x49D0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D0D0u;
        // 0x49d0d4: 0x8c650004  lw          $a1, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49D0D8u;
        goto label_49d0d8;
    }
    ctx->pc = 0x49D0D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x49D0D8u);
        ctx->pc = 0x49D0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D0D0u;
        // 0x49d0d4: 0x8c650004  lw          $a1, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49D0D0u, 0x49D0D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x49D0D8u;
label_49d0d8:
    // 0x49d0d8: 0x8e840010  lw          $a0, 0x10($s4)
    ctx->pc = 0x49d0d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_49d0dc:
    // 0x49d0dc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x49d0dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_49d0e0:
    // 0x49d0e0: 0xc12a448  jal         func_4A9120
label_49d0e4:
    if (ctx->pc == 0x49D0E4u) {
        ctx->pc = 0x49D0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D0E0u;
        // 0x49d0e4: 0x902021  addu        $a0, $a0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49D0E8u;
        goto label_49d0e8;
    }
    ctx->pc = 0x49D0E0u;
    SET_GPR_U32(ctx, 31, 0x49D0E8u);
    ctx->pc = 0x49D0E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49D0E0u;
    // 0x49d0e4: 0x902021  addu        $a0, $a0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9120u, 0x49D0E0u, 0x49D0E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49D0E8u;
label_49d0e8:
    // 0x49d0e8: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x49d0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_49d0ec:
    // 0x49d0ec: 0x8ec200f4  lw          $v0, 0xF4($s6)
    ctx->pc = 0x49d0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 244)));
label_49d0f0:
    // 0x49d0f0: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x49d0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_49d0f4:
    // 0x49d0f4: 0x40f809  jalr        $v0
label_49d0f8:
    if (ctx->pc == 0x49D0F8u) {
        ctx->pc = 0x49D0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D0F4u;
        // 0x49d0f8: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49D0FCu;
        goto label_49d0fc;
    }
    ctx->pc = 0x49D0F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x49D0FCu);
        ctx->pc = 0x49D0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D0F4u;
        // 0x49d0f8: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49D0F4u, 0x49D0FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x49D0FCu;
label_49d0fc:
    // 0x49d0fc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x49d0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_49d100:
    // 0x49d100: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x49d100u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_49d104:
    // 0x49d104: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x49d104u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_49d108:
    // 0x49d108: 0x275102b  sltu        $v0, $s3, $s5
    ctx->pc = 0x49d108u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
label_49d10c:
    // 0x49d10c: 0x1440ffd4  bnez        $v0, . + 4 + (-0x2C << 2)
label_49d110:
    if (ctx->pc == 0x49D110u) {
        ctx->pc = 0x49D110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D10Cu;
        // 0x49d110: 0x26100014  addiu       $s0, $s0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49D114u;
        goto label_49d114;
    }
    ctx->pc = 0x49D10Cu;
    {
        const bool branch_taken_0x49d10c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x49D110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D10Cu;
        // 0x49d110: 0x26100014  addiu       $s0, $s0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49d10c) {
            ctx->pc = 0x49D060u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49d060;
        }
    }
    ctx->pc = 0x49D114u;
label_49d114:
    // 0x49d114: 0x96550016  lhu         $s5, 0x16($s2)
    ctx->pc = 0x49d114u;
    SET_GPR_ZE32(ctx, 21, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 22)));
label_49d118:
    // 0x49d118: 0x12a00032  beqz        $s5, . + 4 + (0x32 << 2)
label_49d11c:
    if (ctx->pc == 0x49D11Cu) {
        ctx->pc = 0x49D11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D118u;
        // 0x49d11c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49D120u;
        goto label_49d120;
    }
    ctx->pc = 0x49D118u;
    {
        const bool branch_taken_0x49d118 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x49D11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D118u;
        // 0x49d11c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49d118) {
            ctx->pc = 0x49D1E4u;
            goto label_49d1e4;
        }
    }
    ctx->pc = 0x49D120u;
label_49d120:
    // 0x49d120: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x49d120u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_49d124:
    // 0x49d124: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x49d124u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_49d128:
    // 0x49d128: 0x2456e880  addiu       $s6, $v0, -0x1780
    ctx->pc = 0x49d128u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_49d12c:
    // 0x49d12c: 0x0  nop
    ctx->pc = 0x49d12cu;
    // NOP
label_49d130:
    // 0x49d130: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x49d130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_49d134:
    // 0x49d134: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x49d134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_49d138:
    // 0x49d138: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x49d138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_49d13c:
    // 0x49d13c: 0x50600026  beql        $v1, $zero, . + 4 + (0x26 << 2)
label_49d140:
    if (ctx->pc == 0x49D140u) {
        ctx->pc = 0x49D140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D13Cu;
        // 0x49d140: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49D144u;
        goto label_49d144;
    }
    ctx->pc = 0x49D13Cu;
    {
        const bool branch_taken_0x49d13c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x49d13c) {
            ctx->pc = 0x49D140u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49D13Cu;
            // 0x49d140: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x49D1D8u;
            goto label_49d1d8;
        }
    }
    ctx->pc = 0x49D144u;
label_49d144:
    // 0x49d144: 0x8e84000c  lw          $a0, 0xC($s4)
    ctx->pc = 0x49d144u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_49d148:
    // 0x49d148: 0xc12a4ce  jal         func_4A9338
label_49d14c:
    if (ctx->pc == 0x49D14Cu) {
        ctx->pc = 0x49D14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D148u;
        // 0x49d14c: 0x902021  addu        $a0, $a0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49D150u;
        goto label_49d150;
    }
    ctx->pc = 0x49D148u;
    SET_GPR_U32(ctx, 31, 0x49D150u);
    ctx->pc = 0x49D14Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49D148u;
    // 0x49d14c: 0x902021  addu        $a0, $a0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9338u, 0x49D148u, 0x49D150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49D150u;
label_49d150:
    // 0x49d150: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x49d150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_49d154:
    // 0x49d154: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x49d154u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_49d158:
    // 0x49d158: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x49d158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_49d15c:
    // 0x49d15c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x49d15cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_49d160:
    // 0x49d160: 0x68480007  ldl         $t0, 0x7($v0)
    ctx->pc = 0x49d160u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_49d164:
    // 0x49d164: 0x6c480000  ldr         $t0, 0x0($v0)
    ctx->pc = 0x49d164u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_49d168:
    // 0x49d168: 0x6843000f  ldl         $v1, 0xF($v0)
    ctx->pc = 0x49d168u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_49d16c:
    // 0x49d16c: 0x6c430008  ldr         $v1, 0x8($v0)
    ctx->pc = 0x49d16cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_49d170:
    // 0x49d170: 0xb2280007  sdl         $t0, 0x7($s1)
    ctx->pc = 0x49d170u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_49d174:
    // 0x49d174: 0xb6280000  sdr         $t0, 0x0($s1)
    ctx->pc = 0x49d174u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_49d178:
    // 0x49d178: 0xb223000f  sdl         $v1, 0xF($s1)
    ctx->pc = 0x49d178u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_49d17c:
    // 0x49d17c: 0xb6230008  sdr         $v1, 0x8($s1)
    ctx->pc = 0x49d17cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_49d180:
    // 0x49d180: 0x8e84000c  lw          $a0, 0xC($s4)
    ctx->pc = 0x49d180u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_49d184:
    // 0x49d184: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x49d184u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_49d188:
    // 0x49d188: 0xc12a47e  jal         func_4A91F8
label_49d18c:
    if (ctx->pc == 0x49D18Cu) {
        ctx->pc = 0x49D18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D188u;
        // 0x49d18c: 0x902021  addu        $a0, $a0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49D190u;
        goto label_49d190;
    }
    ctx->pc = 0x49D188u;
    SET_GPR_U32(ctx, 31, 0x49D190u);
    ctx->pc = 0x49D18Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49D188u;
    // 0x49d18c: 0x902021  addu        $a0, $a0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A91F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A91F8u, 0x49D188u, 0x49D190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49D190u;
label_49d190:
    // 0x49d190: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x49d190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_49d194:
    // 0x49d194: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x49d194u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_49d198:
    // 0x49d198: 0x8ec200cc  lw          $v0, 0xCC($s6)
    ctx->pc = 0x49d198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 204)));
label_49d19c:
    // 0x49d19c: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x49d19cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_49d1a0:
    // 0x49d1a0: 0x40f809  jalr        $v0
label_49d1a4:
    if (ctx->pc == 0x49D1A4u) {
        ctx->pc = 0x49D1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D1A0u;
        // 0x49d1a4: 0x8c650004  lw          $a1, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49D1A8u;
        goto label_49d1a8;
    }
    ctx->pc = 0x49D1A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x49D1A8u);
        ctx->pc = 0x49D1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D1A0u;
        // 0x49d1a4: 0x8c650004  lw          $a1, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49D1A0u, 0x49D1A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x49D1A8u;
label_49d1a8:
    // 0x49d1a8: 0x8e84000c  lw          $a0, 0xC($s4)
    ctx->pc = 0x49d1a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_49d1ac:
    // 0x49d1ac: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x49d1acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_49d1b0:
    // 0x49d1b0: 0xc12a448  jal         func_4A9120
label_49d1b4:
    if (ctx->pc == 0x49D1B4u) {
        ctx->pc = 0x49D1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D1B0u;
        // 0x49d1b4: 0x902021  addu        $a0, $a0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49D1B8u;
        goto label_49d1b8;
    }
    ctx->pc = 0x49D1B0u;
    SET_GPR_U32(ctx, 31, 0x49D1B8u);
    ctx->pc = 0x49D1B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49D1B0u;
    // 0x49d1b4: 0x902021  addu        $a0, $a0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9120u, 0x49D1B0u, 0x49D1B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49D1B8u;
label_49d1b8:
    // 0x49d1b8: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x49d1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_49d1bc:
    // 0x49d1bc: 0x8ec200f4  lw          $v0, 0xF4($s6)
    ctx->pc = 0x49d1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 244)));
label_49d1c0:
    // 0x49d1c0: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x49d1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_49d1c4:
    // 0x49d1c4: 0x40f809  jalr        $v0
label_49d1c8:
    if (ctx->pc == 0x49D1C8u) {
        ctx->pc = 0x49D1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D1C4u;
        // 0x49d1c8: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49D1CCu;
        goto label_49d1cc;
    }
    ctx->pc = 0x49D1C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x49D1CCu);
        ctx->pc = 0x49D1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D1C4u;
        // 0x49d1c8: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49D1C4u, 0x49D1CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x49D1CCu;
label_49d1cc:
    // 0x49d1cc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x49d1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_49d1d0:
    // 0x49d1d0: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x49d1d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_49d1d4:
    // 0x49d1d4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x49d1d4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_49d1d8:
    // 0x49d1d8: 0x275102b  sltu        $v0, $s3, $s5
    ctx->pc = 0x49d1d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
label_49d1dc:
    // 0x49d1dc: 0x1440ffd4  bnez        $v0, . + 4 + (-0x2C << 2)
label_49d1e0:
    if (ctx->pc == 0x49D1E0u) {
        ctx->pc = 0x49D1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D1DCu;
        // 0x49d1e0: 0x26100014  addiu       $s0, $s0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49D1E4u;
        goto label_49d1e4;
    }
    ctx->pc = 0x49D1DCu;
    {
        const bool branch_taken_0x49d1dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x49D1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D1DCu;
        // 0x49d1e0: 0x26100014  addiu       $s0, $s0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49d1dc) {
            ctx->pc = 0x49D130u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49d130;
        }
    }
    ctx->pc = 0x49D1E4u;
label_49d1e4:
    // 0x49d1e4: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x49d1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_49d1e8:
    // 0x49d1e8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_49d1ec:
    if (ctx->pc == 0x49D1ECu) {
        ctx->pc = 0x49D1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D1E8u;
        // 0x49d1ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49D1F0u;
        goto label_49d1f0;
    }
    ctx->pc = 0x49D1E8u;
    {
        const bool branch_taken_0x49d1e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49D1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D1E8u;
        // 0x49d1ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49d1e8) {
            ctx->pc = 0x49D1FCu;
            goto label_49d1fc;
        }
    }
    ctx->pc = 0x49D1F0u;
label_49d1f0:
    // 0x49d1f0: 0x40f809  jalr        $v0
label_49d1f4:
    if (ctx->pc == 0x49D1F4u) {
        ctx->pc = 0x49D1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D1F0u;
        // 0x49d1f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49D1F8u;
        goto label_49d1f8;
    }
    ctx->pc = 0x49D1F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x49D1F8u);
        ctx->pc = 0x49D1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D1F0u;
        // 0x49d1f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49D1F0u, 0x49D1F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x49D1F8u;
label_49d1f8:
    // 0x49d1f8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x49d1f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_49d1fc:
    // 0x49d1fc: 0xc12a492  jal         func_4A9248
label_49d200:
    if (ctx->pc == 0x49D200u) {
        ctx->pc = 0x49D200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D1FCu;
        // 0x49d200: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49D204u;
        goto label_49d204;
    }
    ctx->pc = 0x49D1FCu;
    SET_GPR_U32(ctx, 31, 0x49D204u);
    ctx->pc = 0x49D200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49D1FCu;
    // 0x49d200: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9248u, 0x49D1FCu, 0x49D204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49D204u;
label_49d204:
    // 0x49d204: 0x96510014  lhu         $s1, 0x14($s2)
    ctx->pc = 0x49d204u;
    SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 20)));
label_49d208:
    // 0x49d208: 0x5220000b  beql        $s1, $zero, . + 4 + (0xB << 2)
label_49d20c:
    if (ctx->pc == 0x49D20Cu) {
        ctx->pc = 0x49D20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D208u;
        // 0x49d20c: 0x96510016  lhu         $s1, 0x16($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 22)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49D210u;
        goto label_49d210;
    }
    ctx->pc = 0x49D208u;
    {
        const bool branch_taken_0x49d208 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x49d208) {
            ctx->pc = 0x49D20Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49D208u;
            // 0x49d20c: 0x96510016  lhu         $s1, 0x16($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 22)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x49D238u;
            goto label_49d238;
        }
    }
    ctx->pc = 0x49D210u;
label_49d210:
    // 0x49d210: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x49d210u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_49d214:
    // 0x49d214: 0x0  nop
    ctx->pc = 0x49d214u;
    // NOP
label_49d218:
    // 0x49d218: 0x8e440010  lw          $a0, 0x10($s2)
    ctx->pc = 0x49d218u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_49d21c:
    // 0x49d21c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x49d21cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_49d220:
    // 0x49d220: 0xc12a492  jal         func_4A9248
label_49d224:
    if (ctx->pc == 0x49D224u) {
        ctx->pc = 0x49D224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D220u;
        // 0x49d224: 0x932021  addu        $a0, $a0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49D228u;
        goto label_49d228;
    }
    ctx->pc = 0x49D220u;
    SET_GPR_U32(ctx, 31, 0x49D228u);
    ctx->pc = 0x49D224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49D220u;
    // 0x49d224: 0x932021  addu        $a0, $a0, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9248u, 0x49D220u, 0x49D228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49D228u;
label_49d228:
    // 0x49d228: 0x211102b  sltu        $v0, $s0, $s1
    ctx->pc = 0x49d228u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_49d22c:
    // 0x49d22c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_49d230:
    if (ctx->pc == 0x49D230u) {
        ctx->pc = 0x49D230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D22Cu;
        // 0x49d230: 0x26730014  addiu       $s3, $s3, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49D234u;
        goto label_49d234;
    }
    ctx->pc = 0x49D22Cu;
    {
        const bool branch_taken_0x49d22c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x49D230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D22Cu;
        // 0x49d230: 0x26730014  addiu       $s3, $s3, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49d22c) {
            ctx->pc = 0x49D218u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49d218;
        }
    }
    ctx->pc = 0x49D234u;
label_49d234:
    // 0x49d234: 0x96510016  lhu         $s1, 0x16($s2)
    ctx->pc = 0x49d234u;
    SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 22)));
label_49d238:
    // 0x49d238: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
label_49d23c:
    if (ctx->pc == 0x49D23Cu) {
        ctx->pc = 0x49D23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D238u;
        // 0x49d23c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49D240u;
        goto label_49d240;
    }
    ctx->pc = 0x49D238u;
    {
        const bool branch_taken_0x49d238 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x49D23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D238u;
        // 0x49d23c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49d238) {
            ctx->pc = 0x49D264u;
            goto label_49d264;
        }
    }
    ctx->pc = 0x49D240u;
label_49d240:
    // 0x49d240: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x49d240u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_49d244:
    // 0x49d244: 0x0  nop
    ctx->pc = 0x49d244u;
    // NOP
label_49d248:
    // 0x49d248: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x49d248u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_49d24c:
    // 0x49d24c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x49d24cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_49d250:
    // 0x49d250: 0xc12a492  jal         func_4A9248
label_49d254:
    if (ctx->pc == 0x49D254u) {
        ctx->pc = 0x49D254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D250u;
        // 0x49d254: 0x932021  addu        $a0, $a0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49D258u;
        goto label_49d258;
    }
    ctx->pc = 0x49D250u;
    SET_GPR_U32(ctx, 31, 0x49D258u);
    ctx->pc = 0x49D254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49D250u;
    // 0x49d254: 0x932021  addu        $a0, $a0, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9248u, 0x49D250u, 0x49D258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49D258u;
label_49d258:
    // 0x49d258: 0x211102b  sltu        $v0, $s0, $s1
    ctx->pc = 0x49d258u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_49d25c:
    // 0x49d25c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_49d260:
    if (ctx->pc == 0x49D260u) {
        ctx->pc = 0x49D260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D25Cu;
        // 0x49d260: 0x26730014  addiu       $s3, $s3, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49D264u;
        goto label_49d264;
    }
    ctx->pc = 0x49D25Cu;
    {
        const bool branch_taken_0x49d25c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x49D260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D25Cu;
        // 0x49d260: 0x26730014  addiu       $s3, $s3, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49d25c) {
            ctx->pc = 0x49D248u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49d248;
        }
    }
    ctx->pc = 0x49D264u;
label_49d264:
    // 0x49d264: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x49d264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_49d268:
    // 0x49d268: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x49d268u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_49d26c:
    // 0x49d26c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_49d270:
    if (ctx->pc == 0x49D270u) {
        ctx->pc = 0x49D270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D26Cu;
        // 0x49d270: 0x8e430024  lw          $v1, 0x24($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49D274u;
        goto label_49d274;
    }
    ctx->pc = 0x49D26Cu;
    {
        const bool branch_taken_0x49d26c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x49d26c) {
            ctx->pc = 0x49D270u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49D26Cu;
            // 0x49d270: 0x8e430024  lw          $v1, 0x24($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x49D280u;
            goto label_49d280;
        }
    }
    ctx->pc = 0x49D274u;
label_49d274:
    // 0x49d274: 0xc127cae  jal         func_49F2B8
label_49d278:
    if (ctx->pc == 0x49D278u) {
        ctx->pc = 0x49D278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D274u;
        // 0x49d278: 0x8e440010  lw          $a0, 0x10($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49D27Cu;
        goto label_49d27c;
    }
    ctx->pc = 0x49D274u;
    SET_GPR_U32(ctx, 31, 0x49D27Cu);
    ctx->pc = 0x49D278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49D274u;
    // 0x49d278: 0x8e440010  lw          $a0, 0x10($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49F2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F2B8u, 0x49D274u, 0x49D27Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49D27Cu;
label_49d27c:
    // 0x49d27c: 0x8e430024  lw          $v1, 0x24($s2)
    ctx->pc = 0x49d27cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_49d280:
    // 0x49d280: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x49d280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_49d284:
    // 0x49d284: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x49d284u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_49d288:
    // 0x49d288: 0x8e440020  lw          $a0, 0x20($s2)
    ctx->pc = 0x49d288u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_49d28c:
    // 0x49d28c: 0x8e430024  lw          $v1, 0x24($s2)
    ctx->pc = 0x49d28cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_49d290:
    // 0x49d290: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x49d290u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_49d294:
    // 0x49d294: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x49d294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_49d298:
    // 0x49d298: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x49d298u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_49d29c:
    // 0x49d29c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_49d2a0:
    if (ctx->pc == 0x49D2A0u) {
        ctx->pc = 0x49D2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D29Cu;
        // 0x49d2a0: 0x8f83c1a8  lw          $v1, -0x3E58($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951336)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49D2A4u;
        goto label_49d2a4;
    }
    ctx->pc = 0x49D29Cu;
    {
        const bool branch_taken_0x49d29c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x49D2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D29Cu;
        // 0x49d2a0: 0x8f83c1a8  lw          $v1, -0x3E58($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951336)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49d29c) {
            ctx->pc = 0x49D2B8u;
            goto label_49d2b8;
        }
    }
    ctx->pc = 0x49D2A4u;
label_49d2a4:
    // 0x49d2a4: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x49d2a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
label_49d2a8:
    // 0x49d2a8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x49d2a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_49d2ac:
    // 0x49d2ac: 0xc12a9a0  jal         func_4AA680
label_49d2b0:
    if (ctx->pc == 0x49D2B0u) {
        ctx->pc = 0x49D2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D2ACu;
        // 0x49d2b0: 0x24848308  addiu       $a0, $a0, -0x7CF8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49D2B4u;
        goto label_49d2b4;
    }
    ctx->pc = 0x49D2ACu;
    SET_GPR_U32(ctx, 31, 0x49D2B4u);
    ctx->pc = 0x49D2B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49D2ACu;
    // 0x49d2b0: 0x24848308  addiu       $a0, $a0, -0x7CF8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AA680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AA680u, 0x49D2ACu, 0x49D2B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49D2B4u;
label_49d2b4:
    // 0x49d2b4: 0x8f83c1a8  lw          $v1, -0x3E58($gp)
    ctx->pc = 0x49d2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951336)));
label_49d2b8:
    // 0x49d2b8: 0x2784c1a8  addiu       $a0, $gp, -0x3E58
    ctx->pc = 0x49d2b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294951336));
label_49d2bc:
    // 0x49d2bc: 0xae840024  sw          $a0, 0x24($s4)
    ctx->pc = 0x49d2bcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 36), GPR_U32(ctx, 4));
label_49d2c0:
    // 0x49d2c0: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x49d2c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_49d2c4:
    // 0x49d2c4: 0xae830020  sw          $v1, 0x20($s4)
    ctx->pc = 0x49d2c4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 32), GPR_U32(ctx, 3));
label_49d2c8:
    // 0x49d2c8: 0x8f84c1a8  lw          $a0, -0x3E58($gp)
    ctx->pc = 0x49d2c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951336)));
label_49d2cc:
    // 0x49d2cc: 0xac970004  sw          $s7, 0x4($a0)
    ctx->pc = 0x49d2ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 23));
label_49d2d0:
    // 0x49d2d0: 0xaf97c1a8  sw          $s7, -0x3E58($gp)
    ctx->pc = 0x49d2d0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294951336), GPR_U32(ctx, 23));
label_49d2d4:
    // 0x49d2d4: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x49d2d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_49d2d8:
    // 0x49d2d8: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x49d2d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_49d2dc:
    // 0x49d2dc: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x49d2dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_49d2e0:
    // 0x49d2e0: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x49d2e0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_49d2e4:
    // 0x49d2e4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x49d2e4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_49d2e8:
    // 0x49d2e8: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x49d2e8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_49d2ec:
    // 0x49d2ec: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x49d2ecu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_49d2f0:
    // 0x49d2f0: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x49d2f0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_49d2f4:
    // 0x49d2f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x49d2f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_49d2f8:
    // 0x49d2f8: 0x3e00008  jr          $ra
label_49d2fc:
    if (ctx->pc == 0x49D2FCu) {
        ctx->pc = 0x49D2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D2F8u;
        // 0x49d2fc: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49D300u;
        goto label_49d300;
    }
    ctx->pc = 0x49D2F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49D2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D2F8u;
        // 0x49d2fc: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49D2F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49D300u;
label_49d300:
    // 0x49d300: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x49d300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_49d304:
    // 0x49d304: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x49d304u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_49d308:
    // 0x49d308: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x49d308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_49d30c:
    // 0x49d30c: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x49d30cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_49d310:
    // 0x49d310: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x49d310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_49d314:
    // 0x49d314: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x49d314u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_49d318:
    // 0x49d318: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x49d318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_49d31c:
    // 0x49d31c: 0x26260028  addiu       $a2, $s1, 0x28
    ctx->pc = 0x49d31cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
label_49d320:
    // 0x49d320: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x49d320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
label_49d324:
    // 0x49d324: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x49d324u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
label_49d328:
    // 0x49d328: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x49d328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
label_49d32c:
    // 0x49d32c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x49d32cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_49d330:
    // 0x49d330: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x49d330u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_49d334:
    // 0x49d334: 0x96220014  lhu         $v0, 0x14($s1)
    ctx->pc = 0x49d334u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 20)));
label_49d338:
    // 0x49d338: 0x96250016  lhu         $a1, 0x16($s1)
    ctx->pc = 0x49d338u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 22)));
label_49d33c:
    // 0x49d33c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x49d33cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_49d340:
    // 0x49d340: 0xae260010  sw          $a2, 0x10($s1)
    ctx->pc = 0x49d340u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 6));
label_49d344:
    // 0x49d344: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x49d344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_49d348:
    // 0x49d348: 0x471018  mult        $v0, $v0, $a3
    ctx->pc = 0x49d348u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_49d34c:
    // 0x49d34c: 0x672818  mult        $a1, $v1, $a3
    ctx->pc = 0x49d34cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_49d350:
    // 0x49d350: 0x24420028  addiu       $v0, $v0, 0x28
    ctx->pc = 0x49d350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_49d354:
    // 0x49d354: 0xa61821  addu        $v1, $a1, $a2
    ctx->pc = 0x49d354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_49d358:
    // 0x49d358: 0x2228021  addu        $s0, $s1, $v0
    ctx->pc = 0x49d358u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_49d35c:
    // 0x49d35c: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x49d35cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
label_49d360:
    // 0x49d360: 0xc12a47e  jal         func_4A91F8
label_49d364:
    if (ctx->pc == 0x49D364u) {
        ctx->pc = 0x49D364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D360u;
        // 0x49d364: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49D368u;
        goto label_49d368;
    }
    ctx->pc = 0x49D360u;
    SET_GPR_U32(ctx, 31, 0x49D368u);
    ctx->pc = 0x49D364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49D360u;
    // 0x49d364: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A91F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A91F8u, 0x49D360u, 0x49D368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49D368u;
label_49d368:
    // 0x49d368: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x49d368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_49d36c:
    // 0x49d36c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_49d370:
    if (ctx->pc == 0x49D370u) {
        ctx->pc = 0x49D370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D36Cu;
        // 0x49d370: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49D374u;
        goto label_49d374;
    }
    ctx->pc = 0x49D36Cu;
    {
        const bool branch_taken_0x49d36c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49D370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D36Cu;
        // 0x49d370: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49d36c) {
            ctx->pc = 0x49D398u;
            goto label_49d398;
        }
    }
    ctx->pc = 0x49D374u;
label_49d374:
    // 0x49d374: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x49d374u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_49d378:
    // 0x49d378: 0xc12a448  jal         func_4A9120
label_49d37c:
    if (ctx->pc == 0x49D37Cu) {
        ctx->pc = 0x49D37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D378u;
        // 0x49d37c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49D380u;
        goto label_49d380;
    }
    ctx->pc = 0x49D378u;
    SET_GPR_U32(ctx, 31, 0x49D380u);
    ctx->pc = 0x49D37Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49D378u;
    // 0x49d37c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9120u, 0x49D378u, 0x49D380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49D380u;
label_49d380:
    // 0x49d380: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x49d380u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_49d384:
    // 0x49d384: 0x8c62e974  lw          $v0, -0x168C($v1)
    ctx->pc = 0x49d384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961524)));
label_49d388:
    // 0x49d388: 0x40f809  jalr        $v0
label_49d38c:
    if (ctx->pc == 0x49D38Cu) {
        ctx->pc = 0x49D38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D388u;
        // 0x49d38c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49D390u;
        goto label_49d390;
    }
    ctx->pc = 0x49D388u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x49D390u);
        ctx->pc = 0x49D38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D388u;
        // 0x49d38c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49D388u, 0x49D390u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x49D390u;
label_49d390:
    // 0x49d390: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x49d390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_49d394:
    // 0x49d394: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x49d394u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_49d398:
    // 0x49d398: 0x96340014  lhu         $s4, 0x14($s1)
    ctx->pc = 0x49d398u;
    SET_GPR_ZE32(ctx, 20, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 20)));
label_49d39c:
    // 0x49d39c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x49d39cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_49d3a0:
    // 0x49d3a0: 0x1280001d  beqz        $s4, . + 4 + (0x1D << 2)
label_49d3a4:
    if (ctx->pc == 0x49D3A4u) {
        ctx->pc = 0x49D3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D3A0u;
        // 0x49d3a4: 0x26360020  addiu       $s6, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49D3A8u;
        goto label_49d3a8;
    }
    ctx->pc = 0x49D3A0u;
    {
        const bool branch_taken_0x49d3a0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x49D3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D3A0u;
        // 0x49d3a4: 0x26360020  addiu       $s6, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49d3a0) {
            ctx->pc = 0x49D418u;
            goto label_49d418;
        }
    }
    ctx->pc = 0x49D3A8u;
label_49d3a8:
    // 0x49d3a8: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x49d3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_49d3ac:
    // 0x49d3ac: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x49d3acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_49d3b0:
    // 0x49d3b0: 0x2455e880  addiu       $s5, $v0, -0x1780
    ctx->pc = 0x49d3b0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_49d3b4:
    // 0x49d3b4: 0x0  nop
    ctx->pc = 0x49d3b4u;
    // NOP
label_49d3b8:
    // 0x49d3b8: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x49d3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_49d3bc:
    // 0x49d3bc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x49d3bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_49d3c0:
    // 0x49d3c0: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x49d3c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_49d3c4:
    // 0x49d3c4: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x49d3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_49d3c8:
    // 0x49d3c8: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x49d3c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
label_49d3cc:
    // 0x49d3cc: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x49d3ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_49d3d0:
    // 0x49d3d0: 0xc12a47e  jal         func_4A91F8
label_49d3d4:
    if (ctx->pc == 0x49D3D4u) {
        ctx->pc = 0x49D3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D3D0u;
        // 0x49d3d4: 0x932021  addu        $a0, $a0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49D3D8u;
        goto label_49d3d8;
    }
    ctx->pc = 0x49D3D0u;
    SET_GPR_U32(ctx, 31, 0x49D3D8u);
    ctx->pc = 0x49D3D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49D3D0u;
    // 0x49d3d4: 0x932021  addu        $a0, $a0, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A91F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A91F8u, 0x49D3D0u, 0x49D3D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49D3D8u;
label_49d3d8:
    // 0x49d3d8: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x49d3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_49d3dc:
    // 0x49d3dc: 0x2632021  addu        $a0, $s3, $v1
    ctx->pc = 0x49d3dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
label_49d3e0:
    // 0x49d3e0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x49d3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_49d3e4:
    // 0x49d3e4: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_49d3e8:
    if (ctx->pc == 0x49D3E8u) {
        ctx->pc = 0x49D3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D3E4u;
        // 0x49d3e8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49D3ECu;
        goto label_49d3ec;
    }
    ctx->pc = 0x49D3E4u;
    {
        const bool branch_taken_0x49d3e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x49d3e4) {
            ctx->pc = 0x49D3E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49D3E4u;
            // 0x49d3e8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x49D40Cu;
            goto label_49d40c;
        }
    }
    ctx->pc = 0x49D3ECu;
label_49d3ec:
    // 0x49d3ec: 0xc12a448  jal         func_4A9120
label_49d3f0:
    if (ctx->pc == 0x49D3F0u) {
        ctx->pc = 0x49D3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D3ECu;
        // 0x49d3f0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49D3F4u;
        goto label_49d3f4;
    }
    ctx->pc = 0x49D3ECu;
    SET_GPR_U32(ctx, 31, 0x49D3F4u);
    ctx->pc = 0x49D3F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49D3ECu;
    // 0x49d3f0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9120u, 0x49D3ECu, 0x49D3F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49D3F4u;
label_49d3f4:
    // 0x49d3f4: 0x8ea200f4  lw          $v0, 0xF4($s5)
    ctx->pc = 0x49d3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 244)));
label_49d3f8:
    // 0x49d3f8: 0x40f809  jalr        $v0
label_49d3fc:
    if (ctx->pc == 0x49D3FCu) {
        ctx->pc = 0x49D3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D3F8u;
        // 0x49d3fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49D400u;
        goto label_49d400;
    }
    ctx->pc = 0x49D3F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x49D400u);
        ctx->pc = 0x49D3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D3F8u;
        // 0x49d3fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49D3F8u, 0x49D400u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x49D400u;
label_49d400:
    // 0x49d400: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x49d400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_49d404:
    // 0x49d404: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x49d404u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_49d408:
    // 0x49d408: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x49d408u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_49d40c:
    // 0x49d40c: 0x254102b  sltu        $v0, $s2, $s4
    ctx->pc = 0x49d40cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
label_49d410:
    // 0x49d410: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
label_49d414:
    if (ctx->pc == 0x49D414u) {
        ctx->pc = 0x49D414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D410u;
        // 0x49d414: 0x26730014  addiu       $s3, $s3, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49D418u;
        goto label_49d418;
    }
    ctx->pc = 0x49D410u;
    {
        const bool branch_taken_0x49d410 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x49D414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D410u;
        // 0x49d414: 0x26730014  addiu       $s3, $s3, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49d410) {
            ctx->pc = 0x49D3B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49d3b8;
        }
    }
    ctx->pc = 0x49D418u;
label_49d418:
    // 0x49d418: 0x96340016  lhu         $s4, 0x16($s1)
    ctx->pc = 0x49d418u;
    SET_GPR_ZE32(ctx, 20, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 22)));
label_49d41c:
    // 0x49d41c: 0x1280001c  beqz        $s4, . + 4 + (0x1C << 2)
label_49d420:
    if (ctx->pc == 0x49D420u) {
        ctx->pc = 0x49D420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D41Cu;
        // 0x49d420: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49D424u;
        goto label_49d424;
    }
    ctx->pc = 0x49D41Cu;
    {
        const bool branch_taken_0x49d41c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x49D420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D41Cu;
        // 0x49d420: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49d41c) {
            ctx->pc = 0x49D490u;
            goto label_49d490;
        }
    }
    ctx->pc = 0x49D424u;
label_49d424:
    // 0x49d424: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x49d424u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_49d428:
    // 0x49d428: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x49d428u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_49d42c:
    // 0x49d42c: 0x2455e880  addiu       $s5, $v0, -0x1780
    ctx->pc = 0x49d42cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_49d430:
    // 0x49d430: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x49d430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_49d434:
    // 0x49d434: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x49d434u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_49d438:
    // 0x49d438: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x49d438u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_49d43c:
    // 0x49d43c: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x49d43cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_49d440:
    // 0x49d440: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x49d440u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
label_49d444:
    // 0x49d444: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x49d444u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_49d448:
    // 0x49d448: 0xc12a47e  jal         func_4A91F8
label_49d44c:
    if (ctx->pc == 0x49D44Cu) {
        ctx->pc = 0x49D44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D448u;
        // 0x49d44c: 0x932021  addu        $a0, $a0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49D450u;
        goto label_49d450;
    }
    ctx->pc = 0x49D448u;
    SET_GPR_U32(ctx, 31, 0x49D450u);
    ctx->pc = 0x49D44Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49D448u;
    // 0x49d44c: 0x932021  addu        $a0, $a0, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A91F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A91F8u, 0x49D448u, 0x49D450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49D450u;
label_49d450:
    // 0x49d450: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x49d450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_49d454:
    // 0x49d454: 0x2632021  addu        $a0, $s3, $v1
    ctx->pc = 0x49d454u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
label_49d458:
    // 0x49d458: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x49d458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_49d45c:
    // 0x49d45c: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_49d460:
    if (ctx->pc == 0x49D460u) {
        ctx->pc = 0x49D460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D45Cu;
        // 0x49d460: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49D464u;
        goto label_49d464;
    }
    ctx->pc = 0x49D45Cu;
    {
        const bool branch_taken_0x49d45c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x49d45c) {
            ctx->pc = 0x49D460u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49D45Cu;
            // 0x49d460: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x49D484u;
            goto label_49d484;
        }
    }
    ctx->pc = 0x49D464u;
label_49d464:
    // 0x49d464: 0xc12a448  jal         func_4A9120
label_49d468:
    if (ctx->pc == 0x49D468u) {
        ctx->pc = 0x49D468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D464u;
        // 0x49d468: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49D46Cu;
        goto label_49d46c;
    }
    ctx->pc = 0x49D464u;
    SET_GPR_U32(ctx, 31, 0x49D46Cu);
    ctx->pc = 0x49D468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49D464u;
    // 0x49d468: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9120u, 0x49D464u, 0x49D46Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49D46Cu;
label_49d46c:
    // 0x49d46c: 0x8ea200f4  lw          $v0, 0xF4($s5)
    ctx->pc = 0x49d46cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 244)));
label_49d470:
    // 0x49d470: 0x40f809  jalr        $v0
label_49d474:
    if (ctx->pc == 0x49D474u) {
        ctx->pc = 0x49D474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D470u;
        // 0x49d474: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49D478u;
        goto label_49d478;
    }
    ctx->pc = 0x49D470u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x49D478u);
        ctx->pc = 0x49D474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D470u;
        // 0x49d474: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49D470u, 0x49D478u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x49D478u;
label_49d478:
    // 0x49d478: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x49d478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_49d47c:
    // 0x49d47c: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x49d47cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_49d480:
    // 0x49d480: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x49d480u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_49d484:
    // 0x49d484: 0x254102b  sltu        $v0, $s2, $s4
    ctx->pc = 0x49d484u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
label_49d488:
    // 0x49d488: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
label_49d48c:
    if (ctx->pc == 0x49D48Cu) {
        ctx->pc = 0x49D48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D488u;
        // 0x49d48c: 0x26730014  addiu       $s3, $s3, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49D490u;
        goto label_49d490;
    }
    ctx->pc = 0x49D488u;
    {
        const bool branch_taken_0x49d488 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x49D48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D488u;
        // 0x49d48c: 0x26730014  addiu       $s3, $s3, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49d488) {
            ctx->pc = 0x49D430u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49d430;
        }
    }
    ctx->pc = 0x49D490u;
label_49d490:
    // 0x49d490: 0xae200024  sw          $zero, 0x24($s1)
    ctx->pc = 0x49d490u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
label_49d494:
    // 0x49d494: 0x2784c1a8  addiu       $a0, $gp, -0x3E58
    ctx->pc = 0x49d494u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294951336));
label_49d498:
    // 0x49d498: 0xae200020  sw          $zero, 0x20($s1)
    ctx->pc = 0x49d498u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 0));
label_49d49c:
    // 0x49d49c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x49d49cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_49d4a0:
    // 0x49d4a0: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x49d4a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_49d4a4:
    // 0x49d4a4: 0x8f83c1a8  lw          $v1, -0x3E58($gp)
    ctx->pc = 0x49d4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951336)));
label_49d4a8:
    // 0x49d4a8: 0xae240024  sw          $a0, 0x24($s1)
    ctx->pc = 0x49d4a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 4));
label_49d4ac:
    // 0x49d4ac: 0xae230020  sw          $v1, 0x20($s1)
    ctx->pc = 0x49d4acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 3));
label_49d4b0:
    // 0x49d4b0: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x49d4b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_49d4b4:
    // 0x49d4b4: 0x8f84c1a8  lw          $a0, -0x3E58($gp)
    ctx->pc = 0x49d4b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951336)));
label_49d4b8:
    // 0x49d4b8: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x49d4b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_49d4bc:
    // 0x49d4bc: 0xac960004  sw          $s6, 0x4($a0)
    ctx->pc = 0x49d4bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 22));
label_49d4c0:
    // 0x49d4c0: 0xaf96c1a8  sw          $s6, -0x3E58($gp)
    ctx->pc = 0x49d4c0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294951336), GPR_U32(ctx, 22));
label_49d4c4:
    // 0x49d4c4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x49d4c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_49d4c8:
    // 0x49d4c8: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x49d4c8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_49d4cc:
    // 0x49d4cc: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x49d4ccu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_49d4d0:
    // 0x49d4d0: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x49d4d0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_49d4d4:
    // 0x49d4d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x49d4d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_49d4d8:
    // 0x49d4d8: 0x3e00008  jr          $ra
label_49d4dc:
    if (ctx->pc == 0x49D4DCu) {
        ctx->pc = 0x49D4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D4D8u;
        // 0x49d4dc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49D4E0u;
        goto label_49d4e0;
    }
    ctx->pc = 0x49D4D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49D4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D4D8u;
        // 0x49d4dc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49D4D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49D4E0u;
label_49d4e0:
    // 0x49d4e0: 0x2782c1a8  addiu       $v0, $gp, -0x3E58
    ctx->pc = 0x49d4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294951336));
label_49d4e4:
    // 0x49d4e4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x49d4e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_49d4e8:
    // 0x49d4e8: 0x3c080066  lui         $t0, 0x66
    ctx->pc = 0x49d4e8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)102 << 16));
label_49d4ec:
    // 0x49d4ec: 0x3c090004  lui         $t1, 0x4
    ctx->pc = 0x49d4ecu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4 << 16));
label_49d4f0:
    // 0x49d4f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x49d4f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_49d4f4:
    // 0x49d4f4: 0x25088308  addiu       $t0, $t0, -0x7CF8
    ctx->pc = 0x49d4f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294935304));
label_49d4f8:
    // 0x49d4f8: 0xaf82c1ac  sw          $v0, -0x3E54($gp)
    ctx->pc = 0x49d4f8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294951340), GPR_U32(ctx, 2));
label_49d4fc:
    // 0x49d4fc: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x49d4fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_49d500:
    // 0x49d500: 0xaf82c1a8  sw          $v0, -0x3E58($gp)
    ctx->pc = 0x49d500u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294951336), GPR_U32(ctx, 2));
label_49d504:
    // 0x49d504: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x49d504u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_49d508:
    // 0x49d508: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x49d508u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_49d50c:
    // 0x49d50c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x49d50cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_49d510:
    // 0x49d510: 0xc12aa26  jal         func_4AA898
label_49d514:
    if (ctx->pc == 0x49D514u) {
        ctx->pc = 0x49D514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D510u;
        // 0x49d514: 0x3529080a  ori         $t1, $t1, 0x80A (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)2058);
        ctx->in_delay_slot = false;
        ctx->pc = 0x49D518u;
        goto label_49d518;
    }
    ctx->pc = 0x49D510u;
    SET_GPR_U32(ctx, 31, 0x49D518u);
    ctx->pc = 0x49D514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49D510u;
    // 0x49d514: 0x3529080a  ori         $t1, $t1, 0x80A (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)2058);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AA898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AA898u, 0x49D510u, 0x49D518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49D518u;
label_49d518:
    // 0x49d518: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_49d51c:
    if (ctx->pc == 0x49D51Cu) {
        ctx->pc = 0x49D51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D518u;
        // 0x49d51c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49D520u;
        goto label_49d520;
    }
    ctx->pc = 0x49D518u;
    {
        const bool branch_taken_0x49d518 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x49D51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D518u;
        // 0x49d51c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49d518) {
            ctx->pc = 0x49D528u;
            goto label_49d528;
        }
    }
    ctx->pc = 0x49D520u;
label_49d520:
    // 0x49d520: 0x10000003  b           . + 4 + (0x3 << 2)
label_49d524:
    if (ctx->pc == 0x49D524u) {
        ctx->pc = 0x49D524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D520u;
        // 0x49d524: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49D528u;
        goto label_49d528;
    }
    ctx->pc = 0x49D520u;
    {
        const bool branch_taken_0x49d520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49D524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D520u;
        // 0x49d524: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49d520) {
            ctx->pc = 0x49D530u;
            goto label_49d530;
        }
    }
    ctx->pc = 0x49D528u;
label_49d528:
    // 0x49d528: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x49d528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_49d52c:
    // 0x49d52c: 0xaf83b7c4  sw          $v1, -0x483C($gp)
    ctx->pc = 0x49d52cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948804), GPR_U32(ctx, 3));
label_49d530:
    // 0x49d530: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x49d530u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_49d534:
    // 0x49d534: 0x3e00008  jr          $ra
label_49d538:
    if (ctx->pc == 0x49D538u) {
        ctx->pc = 0x49D538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D534u;
        // 0x49d538: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49D53Cu;
        goto label_49d53c;
    }
    ctx->pc = 0x49D534u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49D538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D534u;
        // 0x49d538: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49D534u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49D53Cu;
label_49d53c:
    // 0x49d53c: 0x0  nop
    ctx->pc = 0x49d53cu;
    // NOP
label_49d540:
    // 0x49d540: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x49d540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_49d544:
    // 0x49d544: 0x8f84c1a8  lw          $a0, -0x3E58($gp)
    ctx->pc = 0x49d544u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951336)));
label_49d548:
    // 0x49d548: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x49d548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_49d54c:
    // 0x49d54c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x49d54cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_49d550:
    // 0x49d550: 0x2790c1a8  addiu       $s0, $gp, -0x3E58
    ctx->pc = 0x49d550u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 28), 4294951336));
label_49d554:
    // 0x49d554: 0x10900007  beq         $a0, $s0, . + 4 + (0x7 << 2)
label_49d558:
    if (ctx->pc == 0x49D558u) {
        ctx->pc = 0x49D558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D554u;
        // 0x49d558: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49D55Cu;
        goto label_49d55c;
    }
    ctx->pc = 0x49D554u;
    {
        const bool branch_taken_0x49d554 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 16));
        ctx->pc = 0x49D558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D554u;
        // 0x49d558: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49d554) {
            ctx->pc = 0x49D574u;
            goto label_49d574;
        }
    }
    ctx->pc = 0x49D55Cu;
label_49d55c:
    // 0x49d55c: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x49d55cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_49d560:
    // 0x49d560: 0xc127608  jal         func_49D820
label_49d564:
    if (ctx->pc == 0x49D564u) {
        ctx->pc = 0x49D564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D560u;
        // 0x49d564: 0x2484ffe0  addiu       $a0, $a0, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967264));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49D568u;
        goto label_49d568;
    }
    ctx->pc = 0x49D560u;
    SET_GPR_U32(ctx, 31, 0x49D568u);
    ctx->pc = 0x49D564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49D560u;
    // 0x49d564: 0x2484ffe0  addiu       $a0, $a0, -0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49D820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49D820u, 0x49D560u, 0x49D568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49D568u;
label_49d568:
    // 0x49d568: 0x8f84c1a8  lw          $a0, -0x3E58($gp)
    ctx->pc = 0x49d568u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951336)));
label_49d56c:
    // 0x49d56c: 0x1491fffc  bne         $a0, $s1, . + 4 + (-0x4 << 2)
label_49d570:
    if (ctx->pc == 0x49D570u) {
        ctx->pc = 0x49D574u;
        goto label_49d574;
    }
    ctx->pc = 0x49D56Cu;
    {
        const bool branch_taken_0x49d56c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 17));
        if (branch_taken_0x49d56c) {
            ctx->pc = 0x49D560u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49d560;
        }
    }
    ctx->pc = 0x49D574u;
label_49d574:
    // 0x49d574: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x49d574u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
label_49d578:
    // 0x49d578: 0xaf90c1ac  sw          $s0, -0x3E54($gp)
    ctx->pc = 0x49d578u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294951340), GPR_U32(ctx, 16));
label_49d57c:
    // 0x49d57c: 0x24848308  addiu       $a0, $a0, -0x7CF8
    ctx->pc = 0x49d57cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935304));
label_49d580:
    // 0x49d580: 0xc12aa86  jal         func_4AAA18
label_49d584:
    if (ctx->pc == 0x49D584u) {
        ctx->pc = 0x49D584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D580u;
        // 0x49d584: 0xaf90c1a8  sw          $s0, -0x3E58($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294951336), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49D588u;
        goto label_49d588;
    }
    ctx->pc = 0x49D580u;
    SET_GPR_U32(ctx, 31, 0x49D588u);
    ctx->pc = 0x49D584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49D580u;
    // 0x49d584: 0xaf90c1a8  sw          $s0, -0x3E58($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294951336), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AAA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AAA18u, 0x49D580u, 0x49D588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49D588u;
label_49d588:
    // 0x49d588: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x49d588u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_49d58c:
    // 0x49d58c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x49d58cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_49d590:
    // 0x49d590: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x49d590u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_49d594:
    // 0x49d594: 0xaf80b7c4  sw          $zero, -0x483C($gp)
    ctx->pc = 0x49d594u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948804), GPR_U32(ctx, 0));
label_49d598:
    // 0x49d598: 0x3e00008  jr          $ra
label_49d59c:
    if (ctx->pc == 0x49D59Cu) {
        ctx->pc = 0x49D59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D598u;
        // 0x49d59c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49D5A0u;
        goto label_fallthrough_0x49d598;
    }
    ctx->pc = 0x49D598u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49D59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D598u;
        // 0x49d59c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49D598u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x49d598:
    ctx->pc = 0x49D5A0u;
}
