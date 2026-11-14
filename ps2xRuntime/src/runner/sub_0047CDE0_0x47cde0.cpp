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

// Function: sub_0047CDE0
// Address: 0x47cde0 - 0x47d4d0
void sub_0047CDE0_0x47cde0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047CDE0_0x47cde0");
#endif

    switch (ctx->pc) {
        case 0x47cde0u: goto label_47cde0;
        case 0x47cde4u: goto label_47cde4;
        case 0x47cde8u: goto label_47cde8;
        case 0x47cdecu: goto label_47cdec;
        case 0x47cdf0u: goto label_47cdf0;
        case 0x47cdf4u: goto label_47cdf4;
        case 0x47cdf8u: goto label_47cdf8;
        case 0x47cdfcu: goto label_47cdfc;
        case 0x47ce00u: goto label_47ce00;
        case 0x47ce04u: goto label_47ce04;
        case 0x47ce08u: goto label_47ce08;
        case 0x47ce0cu: goto label_47ce0c;
        case 0x47ce10u: goto label_47ce10;
        case 0x47ce14u: goto label_47ce14;
        case 0x47ce18u: goto label_47ce18;
        case 0x47ce1cu: goto label_47ce1c;
        case 0x47ce20u: goto label_47ce20;
        case 0x47ce24u: goto label_47ce24;
        case 0x47ce28u: goto label_47ce28;
        case 0x47ce2cu: goto label_47ce2c;
        case 0x47ce30u: goto label_47ce30;
        case 0x47ce34u: goto label_47ce34;
        case 0x47ce38u: goto label_47ce38;
        case 0x47ce3cu: goto label_47ce3c;
        case 0x47ce40u: goto label_47ce40;
        case 0x47ce44u: goto label_47ce44;
        case 0x47ce48u: goto label_47ce48;
        case 0x47ce4cu: goto label_47ce4c;
        case 0x47ce50u: goto label_47ce50;
        case 0x47ce54u: goto label_47ce54;
        case 0x47ce58u: goto label_47ce58;
        case 0x47ce5cu: goto label_47ce5c;
        case 0x47ce60u: goto label_47ce60;
        case 0x47ce64u: goto label_47ce64;
        case 0x47ce68u: goto label_47ce68;
        case 0x47ce6cu: goto label_47ce6c;
        case 0x47ce70u: goto label_47ce70;
        case 0x47ce74u: goto label_47ce74;
        case 0x47ce78u: goto label_47ce78;
        case 0x47ce7cu: goto label_47ce7c;
        case 0x47ce80u: goto label_47ce80;
        case 0x47ce84u: goto label_47ce84;
        case 0x47ce88u: goto label_47ce88;
        case 0x47ce8cu: goto label_47ce8c;
        case 0x47ce90u: goto label_47ce90;
        case 0x47ce94u: goto label_47ce94;
        case 0x47ce98u: goto label_47ce98;
        case 0x47ce9cu: goto label_47ce9c;
        case 0x47cea0u: goto label_47cea0;
        case 0x47cea4u: goto label_47cea4;
        case 0x47cea8u: goto label_47cea8;
        case 0x47ceacu: goto label_47ceac;
        case 0x47ceb0u: goto label_47ceb0;
        case 0x47ceb4u: goto label_47ceb4;
        case 0x47ceb8u: goto label_47ceb8;
        case 0x47cebcu: goto label_47cebc;
        case 0x47cec0u: goto label_47cec0;
        case 0x47cec4u: goto label_47cec4;
        case 0x47cec8u: goto label_47cec8;
        case 0x47ceccu: goto label_47cecc;
        case 0x47ced0u: goto label_47ced0;
        case 0x47ced4u: goto label_47ced4;
        case 0x47ced8u: goto label_47ced8;
        case 0x47cedcu: goto label_47cedc;
        case 0x47cee0u: goto label_47cee0;
        case 0x47cee4u: goto label_47cee4;
        case 0x47cee8u: goto label_47cee8;
        case 0x47ceecu: goto label_47ceec;
        case 0x47cef0u: goto label_47cef0;
        case 0x47cef4u: goto label_47cef4;
        case 0x47cef8u: goto label_47cef8;
        case 0x47cefcu: goto label_47cefc;
        case 0x47cf00u: goto label_47cf00;
        case 0x47cf04u: goto label_47cf04;
        case 0x47cf08u: goto label_47cf08;
        case 0x47cf0cu: goto label_47cf0c;
        case 0x47cf10u: goto label_47cf10;
        case 0x47cf14u: goto label_47cf14;
        case 0x47cf18u: goto label_47cf18;
        case 0x47cf1cu: goto label_47cf1c;
        case 0x47cf20u: goto label_47cf20;
        case 0x47cf24u: goto label_47cf24;
        case 0x47cf28u: goto label_47cf28;
        case 0x47cf2cu: goto label_47cf2c;
        case 0x47cf30u: goto label_47cf30;
        case 0x47cf34u: goto label_47cf34;
        case 0x47cf38u: goto label_47cf38;
        case 0x47cf3cu: goto label_47cf3c;
        case 0x47cf40u: goto label_47cf40;
        case 0x47cf44u: goto label_47cf44;
        case 0x47cf48u: goto label_47cf48;
        case 0x47cf4cu: goto label_47cf4c;
        case 0x47cf50u: goto label_47cf50;
        case 0x47cf54u: goto label_47cf54;
        case 0x47cf58u: goto label_47cf58;
        case 0x47cf5cu: goto label_47cf5c;
        case 0x47cf60u: goto label_47cf60;
        case 0x47cf64u: goto label_47cf64;
        case 0x47cf68u: goto label_47cf68;
        case 0x47cf6cu: goto label_47cf6c;
        case 0x47cf70u: goto label_47cf70;
        case 0x47cf74u: goto label_47cf74;
        case 0x47cf78u: goto label_47cf78;
        case 0x47cf7cu: goto label_47cf7c;
        case 0x47cf80u: goto label_47cf80;
        case 0x47cf84u: goto label_47cf84;
        case 0x47cf88u: goto label_47cf88;
        case 0x47cf8cu: goto label_47cf8c;
        case 0x47cf90u: goto label_47cf90;
        case 0x47cf94u: goto label_47cf94;
        case 0x47cf98u: goto label_47cf98;
        case 0x47cf9cu: goto label_47cf9c;
        case 0x47cfa0u: goto label_47cfa0;
        case 0x47cfa4u: goto label_47cfa4;
        case 0x47cfa8u: goto label_47cfa8;
        case 0x47cfacu: goto label_47cfac;
        case 0x47cfb0u: goto label_47cfb0;
        case 0x47cfb4u: goto label_47cfb4;
        case 0x47cfb8u: goto label_47cfb8;
        case 0x47cfbcu: goto label_47cfbc;
        case 0x47cfc0u: goto label_47cfc0;
        case 0x47cfc4u: goto label_47cfc4;
        case 0x47cfc8u: goto label_47cfc8;
        case 0x47cfccu: goto label_47cfcc;
        case 0x47cfd0u: goto label_47cfd0;
        case 0x47cfd4u: goto label_47cfd4;
        case 0x47cfd8u: goto label_47cfd8;
        case 0x47cfdcu: goto label_47cfdc;
        case 0x47cfe0u: goto label_47cfe0;
        case 0x47cfe4u: goto label_47cfe4;
        case 0x47cfe8u: goto label_47cfe8;
        case 0x47cfecu: goto label_47cfec;
        case 0x47cff0u: goto label_47cff0;
        case 0x47cff4u: goto label_47cff4;
        case 0x47cff8u: goto label_47cff8;
        case 0x47cffcu: goto label_47cffc;
        case 0x47d000u: goto label_47d000;
        case 0x47d004u: goto label_47d004;
        case 0x47d008u: goto label_47d008;
        case 0x47d00cu: goto label_47d00c;
        case 0x47d010u: goto label_47d010;
        case 0x47d014u: goto label_47d014;
        case 0x47d018u: goto label_47d018;
        case 0x47d01cu: goto label_47d01c;
        case 0x47d020u: goto label_47d020;
        case 0x47d024u: goto label_47d024;
        case 0x47d028u: goto label_47d028;
        case 0x47d02cu: goto label_47d02c;
        case 0x47d030u: goto label_47d030;
        case 0x47d034u: goto label_47d034;
        case 0x47d038u: goto label_47d038;
        case 0x47d03cu: goto label_47d03c;
        case 0x47d040u: goto label_47d040;
        case 0x47d044u: goto label_47d044;
        case 0x47d048u: goto label_47d048;
        case 0x47d04cu: goto label_47d04c;
        case 0x47d050u: goto label_47d050;
        case 0x47d054u: goto label_47d054;
        case 0x47d058u: goto label_47d058;
        case 0x47d05cu: goto label_47d05c;
        case 0x47d060u: goto label_47d060;
        case 0x47d064u: goto label_47d064;
        case 0x47d068u: goto label_47d068;
        case 0x47d06cu: goto label_47d06c;
        case 0x47d070u: goto label_47d070;
        case 0x47d074u: goto label_47d074;
        case 0x47d078u: goto label_47d078;
        case 0x47d07cu: goto label_47d07c;
        case 0x47d080u: goto label_47d080;
        case 0x47d084u: goto label_47d084;
        case 0x47d088u: goto label_47d088;
        case 0x47d08cu: goto label_47d08c;
        case 0x47d090u: goto label_47d090;
        case 0x47d094u: goto label_47d094;
        case 0x47d098u: goto label_47d098;
        case 0x47d09cu: goto label_47d09c;
        case 0x47d0a0u: goto label_47d0a0;
        case 0x47d0a4u: goto label_47d0a4;
        case 0x47d0a8u: goto label_47d0a8;
        case 0x47d0acu: goto label_47d0ac;
        case 0x47d0b0u: goto label_47d0b0;
        case 0x47d0b4u: goto label_47d0b4;
        case 0x47d0b8u: goto label_47d0b8;
        case 0x47d0bcu: goto label_47d0bc;
        case 0x47d0c0u: goto label_47d0c0;
        case 0x47d0c4u: goto label_47d0c4;
        case 0x47d0c8u: goto label_47d0c8;
        case 0x47d0ccu: goto label_47d0cc;
        case 0x47d0d0u: goto label_47d0d0;
        case 0x47d0d4u: goto label_47d0d4;
        case 0x47d0d8u: goto label_47d0d8;
        case 0x47d0dcu: goto label_47d0dc;
        case 0x47d0e0u: goto label_47d0e0;
        case 0x47d0e4u: goto label_47d0e4;
        case 0x47d0e8u: goto label_47d0e8;
        case 0x47d0ecu: goto label_47d0ec;
        case 0x47d0f0u: goto label_47d0f0;
        case 0x47d0f4u: goto label_47d0f4;
        case 0x47d0f8u: goto label_47d0f8;
        case 0x47d0fcu: goto label_47d0fc;
        case 0x47d100u: goto label_47d100;
        case 0x47d104u: goto label_47d104;
        case 0x47d108u: goto label_47d108;
        case 0x47d10cu: goto label_47d10c;
        case 0x47d110u: goto label_47d110;
        case 0x47d114u: goto label_47d114;
        case 0x47d118u: goto label_47d118;
        case 0x47d11cu: goto label_47d11c;
        case 0x47d120u: goto label_47d120;
        case 0x47d124u: goto label_47d124;
        case 0x47d128u: goto label_47d128;
        case 0x47d12cu: goto label_47d12c;
        case 0x47d130u: goto label_47d130;
        case 0x47d134u: goto label_47d134;
        case 0x47d138u: goto label_47d138;
        case 0x47d13cu: goto label_47d13c;
        case 0x47d140u: goto label_47d140;
        case 0x47d144u: goto label_47d144;
        case 0x47d148u: goto label_47d148;
        case 0x47d14cu: goto label_47d14c;
        case 0x47d150u: goto label_47d150;
        case 0x47d154u: goto label_47d154;
        case 0x47d158u: goto label_47d158;
        case 0x47d15cu: goto label_47d15c;
        case 0x47d160u: goto label_47d160;
        case 0x47d164u: goto label_47d164;
        case 0x47d168u: goto label_47d168;
        case 0x47d16cu: goto label_47d16c;
        case 0x47d170u: goto label_47d170;
        case 0x47d174u: goto label_47d174;
        case 0x47d178u: goto label_47d178;
        case 0x47d17cu: goto label_47d17c;
        case 0x47d180u: goto label_47d180;
        case 0x47d184u: goto label_47d184;
        case 0x47d188u: goto label_47d188;
        case 0x47d18cu: goto label_47d18c;
        case 0x47d190u: goto label_47d190;
        case 0x47d194u: goto label_47d194;
        case 0x47d198u: goto label_47d198;
        case 0x47d19cu: goto label_47d19c;
        case 0x47d1a0u: goto label_47d1a0;
        case 0x47d1a4u: goto label_47d1a4;
        case 0x47d1a8u: goto label_47d1a8;
        case 0x47d1acu: goto label_47d1ac;
        case 0x47d1b0u: goto label_47d1b0;
        case 0x47d1b4u: goto label_47d1b4;
        case 0x47d1b8u: goto label_47d1b8;
        case 0x47d1bcu: goto label_47d1bc;
        case 0x47d1c0u: goto label_47d1c0;
        case 0x47d1c4u: goto label_47d1c4;
        case 0x47d1c8u: goto label_47d1c8;
        case 0x47d1ccu: goto label_47d1cc;
        case 0x47d1d0u: goto label_47d1d0;
        case 0x47d1d4u: goto label_47d1d4;
        case 0x47d1d8u: goto label_47d1d8;
        case 0x47d1dcu: goto label_47d1dc;
        case 0x47d1e0u: goto label_47d1e0;
        case 0x47d1e4u: goto label_47d1e4;
        case 0x47d1e8u: goto label_47d1e8;
        case 0x47d1ecu: goto label_47d1ec;
        case 0x47d1f0u: goto label_47d1f0;
        case 0x47d1f4u: goto label_47d1f4;
        case 0x47d1f8u: goto label_47d1f8;
        case 0x47d1fcu: goto label_47d1fc;
        case 0x47d200u: goto label_47d200;
        case 0x47d204u: goto label_47d204;
        case 0x47d208u: goto label_47d208;
        case 0x47d20cu: goto label_47d20c;
        case 0x47d210u: goto label_47d210;
        case 0x47d214u: goto label_47d214;
        case 0x47d218u: goto label_47d218;
        case 0x47d21cu: goto label_47d21c;
        case 0x47d220u: goto label_47d220;
        case 0x47d224u: goto label_47d224;
        case 0x47d228u: goto label_47d228;
        case 0x47d22cu: goto label_47d22c;
        case 0x47d230u: goto label_47d230;
        case 0x47d234u: goto label_47d234;
        case 0x47d238u: goto label_47d238;
        case 0x47d23cu: goto label_47d23c;
        case 0x47d240u: goto label_47d240;
        case 0x47d244u: goto label_47d244;
        case 0x47d248u: goto label_47d248;
        case 0x47d24cu: goto label_47d24c;
        case 0x47d250u: goto label_47d250;
        case 0x47d254u: goto label_47d254;
        case 0x47d258u: goto label_47d258;
        case 0x47d25cu: goto label_47d25c;
        case 0x47d260u: goto label_47d260;
        case 0x47d264u: goto label_47d264;
        case 0x47d268u: goto label_47d268;
        case 0x47d26cu: goto label_47d26c;
        case 0x47d270u: goto label_47d270;
        case 0x47d274u: goto label_47d274;
        case 0x47d278u: goto label_47d278;
        case 0x47d27cu: goto label_47d27c;
        case 0x47d280u: goto label_47d280;
        case 0x47d284u: goto label_47d284;
        case 0x47d288u: goto label_47d288;
        case 0x47d28cu: goto label_47d28c;
        case 0x47d290u: goto label_47d290;
        case 0x47d294u: goto label_47d294;
        case 0x47d298u: goto label_47d298;
        case 0x47d29cu: goto label_47d29c;
        case 0x47d2a0u: goto label_47d2a0;
        case 0x47d2a4u: goto label_47d2a4;
        case 0x47d2a8u: goto label_47d2a8;
        case 0x47d2acu: goto label_47d2ac;
        case 0x47d2b0u: goto label_47d2b0;
        case 0x47d2b4u: goto label_47d2b4;
        case 0x47d2b8u: goto label_47d2b8;
        case 0x47d2bcu: goto label_47d2bc;
        case 0x47d2c0u: goto label_47d2c0;
        case 0x47d2c4u: goto label_47d2c4;
        case 0x47d2c8u: goto label_47d2c8;
        case 0x47d2ccu: goto label_47d2cc;
        case 0x47d2d0u: goto label_47d2d0;
        case 0x47d2d4u: goto label_47d2d4;
        case 0x47d2d8u: goto label_47d2d8;
        case 0x47d2dcu: goto label_47d2dc;
        case 0x47d2e0u: goto label_47d2e0;
        case 0x47d2e4u: goto label_47d2e4;
        case 0x47d2e8u: goto label_47d2e8;
        case 0x47d2ecu: goto label_47d2ec;
        case 0x47d2f0u: goto label_47d2f0;
        case 0x47d2f4u: goto label_47d2f4;
        case 0x47d2f8u: goto label_47d2f8;
        case 0x47d2fcu: goto label_47d2fc;
        case 0x47d300u: goto label_47d300;
        case 0x47d304u: goto label_47d304;
        case 0x47d308u: goto label_47d308;
        case 0x47d30cu: goto label_47d30c;
        case 0x47d310u: goto label_47d310;
        case 0x47d314u: goto label_47d314;
        case 0x47d318u: goto label_47d318;
        case 0x47d31cu: goto label_47d31c;
        case 0x47d320u: goto label_47d320;
        case 0x47d324u: goto label_47d324;
        case 0x47d328u: goto label_47d328;
        case 0x47d32cu: goto label_47d32c;
        case 0x47d330u: goto label_47d330;
        case 0x47d334u: goto label_47d334;
        case 0x47d338u: goto label_47d338;
        case 0x47d33cu: goto label_47d33c;
        case 0x47d340u: goto label_47d340;
        case 0x47d344u: goto label_47d344;
        case 0x47d348u: goto label_47d348;
        case 0x47d34cu: goto label_47d34c;
        case 0x47d350u: goto label_47d350;
        case 0x47d354u: goto label_47d354;
        case 0x47d358u: goto label_47d358;
        case 0x47d35cu: goto label_47d35c;
        case 0x47d360u: goto label_47d360;
        case 0x47d364u: goto label_47d364;
        case 0x47d368u: goto label_47d368;
        case 0x47d36cu: goto label_47d36c;
        case 0x47d370u: goto label_47d370;
        case 0x47d374u: goto label_47d374;
        case 0x47d378u: goto label_47d378;
        case 0x47d37cu: goto label_47d37c;
        case 0x47d380u: goto label_47d380;
        case 0x47d384u: goto label_47d384;
        case 0x47d388u: goto label_47d388;
        case 0x47d38cu: goto label_47d38c;
        case 0x47d390u: goto label_47d390;
        case 0x47d394u: goto label_47d394;
        case 0x47d398u: goto label_47d398;
        case 0x47d39cu: goto label_47d39c;
        case 0x47d3a0u: goto label_47d3a0;
        case 0x47d3a4u: goto label_47d3a4;
        case 0x47d3a8u: goto label_47d3a8;
        case 0x47d3acu: goto label_47d3ac;
        case 0x47d3b0u: goto label_47d3b0;
        case 0x47d3b4u: goto label_47d3b4;
        case 0x47d3b8u: goto label_47d3b8;
        case 0x47d3bcu: goto label_47d3bc;
        case 0x47d3c0u: goto label_47d3c0;
        case 0x47d3c4u: goto label_47d3c4;
        case 0x47d3c8u: goto label_47d3c8;
        case 0x47d3ccu: goto label_47d3cc;
        case 0x47d3d0u: goto label_47d3d0;
        case 0x47d3d4u: goto label_47d3d4;
        case 0x47d3d8u: goto label_47d3d8;
        case 0x47d3dcu: goto label_47d3dc;
        case 0x47d3e0u: goto label_47d3e0;
        case 0x47d3e4u: goto label_47d3e4;
        case 0x47d3e8u: goto label_47d3e8;
        case 0x47d3ecu: goto label_47d3ec;
        case 0x47d3f0u: goto label_47d3f0;
        case 0x47d3f4u: goto label_47d3f4;
        case 0x47d3f8u: goto label_47d3f8;
        case 0x47d3fcu: goto label_47d3fc;
        case 0x47d400u: goto label_47d400;
        case 0x47d404u: goto label_47d404;
        case 0x47d408u: goto label_47d408;
        case 0x47d40cu: goto label_47d40c;
        case 0x47d410u: goto label_47d410;
        case 0x47d414u: goto label_47d414;
        case 0x47d418u: goto label_47d418;
        case 0x47d41cu: goto label_47d41c;
        case 0x47d420u: goto label_47d420;
        case 0x47d424u: goto label_47d424;
        case 0x47d428u: goto label_47d428;
        case 0x47d42cu: goto label_47d42c;
        case 0x47d430u: goto label_47d430;
        case 0x47d434u: goto label_47d434;
        case 0x47d438u: goto label_47d438;
        case 0x47d43cu: goto label_47d43c;
        case 0x47d440u: goto label_47d440;
        case 0x47d444u: goto label_47d444;
        case 0x47d448u: goto label_47d448;
        case 0x47d44cu: goto label_47d44c;
        case 0x47d450u: goto label_47d450;
        case 0x47d454u: goto label_47d454;
        case 0x47d458u: goto label_47d458;
        case 0x47d45cu: goto label_47d45c;
        case 0x47d460u: goto label_47d460;
        case 0x47d464u: goto label_47d464;
        case 0x47d468u: goto label_47d468;
        case 0x47d46cu: goto label_47d46c;
        case 0x47d470u: goto label_47d470;
        case 0x47d474u: goto label_47d474;
        case 0x47d478u: goto label_47d478;
        case 0x47d47cu: goto label_47d47c;
        case 0x47d480u: goto label_47d480;
        case 0x47d484u: goto label_47d484;
        case 0x47d488u: goto label_47d488;
        case 0x47d48cu: goto label_47d48c;
        case 0x47d490u: goto label_47d490;
        case 0x47d494u: goto label_47d494;
        case 0x47d498u: goto label_47d498;
        case 0x47d49cu: goto label_47d49c;
        case 0x47d4a0u: goto label_47d4a0;
        case 0x47d4a4u: goto label_47d4a4;
        case 0x47d4a8u: goto label_47d4a8;
        case 0x47d4acu: goto label_47d4ac;
        case 0x47d4b0u: goto label_47d4b0;
        case 0x47d4b4u: goto label_47d4b4;
        case 0x47d4b8u: goto label_47d4b8;
        case 0x47d4bcu: goto label_47d4bc;
        case 0x47d4c0u: goto label_47d4c0;
        case 0x47d4c4u: goto label_47d4c4;
        case 0x47d4c8u: goto label_47d4c8;
        case 0x47d4ccu: goto label_47d4cc;
        default: break;
    }

    ctx->pc = 0x47cde0u;

label_47cde0:
    // 0x47cde0: 0x27bdf920  addiu       $sp, $sp, -0x6E0
    ctx->pc = 0x47cde0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965536));
label_47cde4:
    // 0x47cde4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x47cde4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_47cde8:
    // 0x47cde8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x47cde8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_47cdec:
    // 0x47cdec: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x47cdecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_47cdf0:
    // 0x47cdf0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x47cdf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_47cdf4:
    // 0x47cdf4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x47cdf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_47cdf8:
    // 0x47cdf8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x47cdf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_47cdfc:
    // 0x47cdfc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x47cdfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_47ce00:
    // 0x47ce00: 0xafa40680  sw          $a0, 0x680($sp)
    ctx->pc = 0x47ce00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1664), GPR_U32(ctx, 4));
label_47ce04:
    // 0x47ce04: 0xafa50690  sw          $a1, 0x690($sp)
    ctx->pc = 0x47ce04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1680), GPR_U32(ctx, 5));
label_47ce08:
    // 0x47ce08: 0xafa606a0  sw          $a2, 0x6A0($sp)
    ctx->pc = 0x47ce08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1696), GPR_U32(ctx, 6));
label_47ce0c:
    // 0x47ce0c: 0xafa706b0  sw          $a3, 0x6B0($sp)
    ctx->pc = 0x47ce0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1712), GPR_U32(ctx, 7));
label_47ce10:
    // 0x47ce10: 0xafa806c0  sw          $t0, 0x6C0($sp)
    ctx->pc = 0x47ce10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1728), GPR_U32(ctx, 8));
label_47ce14:
    // 0x47ce14: 0xafa906d0  sw          $t1, 0x6D0($sp)
    ctx->pc = 0x47ce14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1744), GPR_U32(ctx, 9));
label_47ce18:
    // 0x47ce18: 0x8fa30690  lw          $v1, 0x690($sp)
    ctx->pc = 0x47ce18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1680)));
label_47ce1c:
    // 0x47ce1c: 0x3102b  sltu        $v0, $zero, $v1
    ctx->pc = 0x47ce1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_47ce20:
    // 0x47ce20: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x47ce20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_47ce24:
    // 0x47ce24: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
label_47ce28:
    if (ctx->pc == 0x47CE28u) {
        ctx->pc = 0x47CE2Cu;
        goto label_47ce2c;
    }
    ctx->pc = 0x47CE24u;
    {
        const bool branch_taken_0x47ce24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x47ce24) {
            ctx->pc = 0x47CED0u;
            goto label_47ced0;
        }
    }
    ctx->pc = 0x47CE2Cu;
label_47ce2c:
    // 0x47ce2c: 0x8f82b4d4  lw          $v0, -0x4B2C($gp)
    ctx->pc = 0x47ce2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948052)));
label_47ce30:
    // 0x47ce30: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_47ce34:
    if (ctx->pc == 0x47CE34u) {
        ctx->pc = 0x47CE38u;
        goto label_47ce38;
    }
    ctx->pc = 0x47CE30u;
    {
        const bool branch_taken_0x47ce30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47ce30) {
            ctx->pc = 0x47CED0u;
            goto label_47ced0;
        }
    }
    ctx->pc = 0x47CE38u;
label_47ce38:
    // 0x47ce38: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x47ce38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_47ce3c:
    // 0x47ce3c: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x47ce3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_47ce40:
    // 0x47ce40: 0x27a60670  addiu       $a2, $sp, 0x670
    ctx->pc = 0x47ce40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1648));
label_47ce44:
    // 0x47ce44: 0xc115ee8  jal         func_457BA0
label_47ce48:
    if (ctx->pc == 0x47CE48u) {
        ctx->pc = 0x47CE4Cu;
        goto label_47ce4c;
    }
    ctx->pc = 0x47CE44u;
    SET_GPR_U32(ctx, 31, 0x47CE4Cu);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x47CE44u, 0x47CE4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47CE4Cu;
label_47ce4c:
    // 0x47ce4c: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_47ce50:
    if (ctx->pc == 0x47CE50u) {
        ctx->pc = 0x47CE54u;
        goto label_47ce54;
    }
    ctx->pc = 0x47CE4Cu;
    {
        const bool branch_taken_0x47ce4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47ce4c) {
            ctx->pc = 0x47CED0u;
            goto label_47ced0;
        }
    }
    ctx->pc = 0x47CE54u;
label_47ce54:
    // 0x47ce54: 0x8fa20678  lw          $v0, 0x678($sp)
    ctx->pc = 0x47ce54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1656)));
label_47ce58:
    // 0x47ce58: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_47ce5c:
    if (ctx->pc == 0x47CE5Cu) {
        ctx->pc = 0x47CE60u;
        goto label_47ce60;
    }
    ctx->pc = 0x47CE58u;
    {
        const bool branch_taken_0x47ce58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47ce58) {
            ctx->pc = 0x47CED0u;
            goto label_47ced0;
        }
    }
    ctx->pc = 0x47CE60u;
label_47ce60:
    // 0x47ce60: 0x27a404f0  addiu       $a0, $sp, 0x4F0
    ctx->pc = 0x47ce60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1264));
label_47ce64:
    // 0x47ce64: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x47ce64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_47ce68:
    // 0x47ce68: 0x8fa60674  lw          $a2, 0x674($sp)
    ctx->pc = 0x47ce68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1652)));
label_47ce6c:
    // 0x47ce6c: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x47ce6cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_47ce70:
    // 0x47ce70: 0x24e716f8  addiu       $a3, $a3, 0x16F8
    ctx->pc = 0x47ce70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 5880));
label_47ce74:
    // 0x47ce74: 0x2408034c  addiu       $t0, $zero, 0x34C
    ctx->pc = 0x47ce74u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 844));
label_47ce78:
    // 0x47ce78: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x47ce78u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_47ce7c:
    // 0x47ce7c: 0x25291710  addiu       $t1, $t1, 0x1710
    ctx->pc = 0x47ce7cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 5904));
label_47ce80:
    // 0x47ce80: 0xc113940  jal         func_44E500
label_47ce84:
    if (ctx->pc == 0x47CE84u) {
        ctx->pc = 0x47CE88u;
        goto label_47ce88;
    }
    ctx->pc = 0x47CE80u;
    SET_GPR_U32(ctx, 31, 0x47CE88u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x47CE80u, 0x47CE88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47CE88u;
label_47ce88:
    // 0x47ce88: 0x27a404f0  addiu       $a0, $sp, 0x4F0
    ctx->pc = 0x47ce88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1264));
label_47ce8c:
    // 0x47ce8c: 0x2785b4e8  addiu       $a1, $gp, -0x4B18
    ctx->pc = 0x47ce8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948072));
label_47ce90:
    // 0x47ce90: 0xc115c24  jal         func_457090
label_47ce94:
    if (ctx->pc == 0x47CE94u) {
        ctx->pc = 0x47CE98u;
        goto label_47ce98;
    }
    ctx->pc = 0x47CE90u;
    SET_GPR_U32(ctx, 31, 0x47CE98u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x47CE90u, 0x47CE98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47CE98u;
label_47ce98:
    // 0x47ce98: 0x27a404f0  addiu       $a0, $sp, 0x4F0
    ctx->pc = 0x47ce98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1264));
label_47ce9c:
    // 0x47ce9c: 0x8fa20678  lw          $v0, 0x678($sp)
    ctx->pc = 0x47ce9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1656)));
label_47cea0:
    // 0x47cea0: 0x40f809  jalr        $v0
label_47cea4:
    if (ctx->pc == 0x47CEA4u) {
        ctx->pc = 0x47CEA8u;
        goto label_47cea8;
    }
    ctx->pc = 0x47CEA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x47CEA8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47CEA0u, 0x47CEA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x47CEA8u;
label_47cea8:
    // 0x47cea8: 0xaf82b4d4  sw          $v0, -0x4B2C($gp)
    ctx->pc = 0x47cea8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948052), GPR_U32(ctx, 2));
label_47ceac:
    // 0x47ceac: 0x8fa304f0  lw          $v1, 0x4F0($sp)
    ctx->pc = 0x47ceacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1264)));
label_47ceb0:
    // 0x47ceb0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_47ceb4:
    if (ctx->pc == 0x47CEB4u) {
        ctx->pc = 0x47CEB8u;
        goto label_47ceb8;
    }
    ctx->pc = 0x47CEB0u;
    {
        const bool branch_taken_0x47ceb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x47ceb0) {
            ctx->pc = 0x47CEC0u;
            goto label_47cec0;
        }
    }
    ctx->pc = 0x47CEB8u;
label_47ceb8:
    // 0x47ceb8: 0xd  break       0
    ctx->pc = 0x47ceb8u;
    runtime->handleBreak(rdram, ctx);
label_47cebc:
    // 0x47cebc: 0x0  nop
    ctx->pc = 0x47cebcu;
    // NOP
label_47cec0:
    // 0x47cec0: 0x27a404f0  addiu       $a0, $sp, 0x4F0
    ctx->pc = 0x47cec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1264));
label_47cec4:
    // 0x47cec4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x47cec4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_47cec8:
    // 0x47cec8: 0xc11392c  jal         func_44E4B0
label_47cecc:
    if (ctx->pc == 0x47CECCu) {
        ctx->pc = 0x47CED0u;
        goto label_47ced0;
    }
    ctx->pc = 0x47CEC8u;
    SET_GPR_U32(ctx, 31, 0x47CED0u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x47CEC8u, 0x47CED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47CED0u;
label_47ced0:
    // 0x47ced0: 0x8fa306b0  lw          $v1, 0x6B0($sp)
    ctx->pc = 0x47ced0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1712)));
label_47ced4:
    // 0x47ced4: 0x3102b  sltu        $v0, $zero, $v1
    ctx->pc = 0x47ced4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_47ced8:
    // 0x47ced8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x47ced8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_47cedc:
    // 0x47cedc: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
label_47cee0:
    if (ctx->pc == 0x47CEE0u) {
        ctx->pc = 0x47CEE4u;
        goto label_47cee4;
    }
    ctx->pc = 0x47CEDCu;
    {
        const bool branch_taken_0x47cedc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x47cedc) {
            ctx->pc = 0x47CF88u;
            goto label_47cf88;
        }
    }
    ctx->pc = 0x47CEE4u;
label_47cee4:
    // 0x47cee4: 0x8f82b4d8  lw          $v0, -0x4B28($gp)
    ctx->pc = 0x47cee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948056)));
label_47cee8:
    // 0x47cee8: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_47ceec:
    if (ctx->pc == 0x47CEECu) {
        ctx->pc = 0x47CEF0u;
        goto label_47cef0;
    }
    ctx->pc = 0x47CEE8u;
    {
        const bool branch_taken_0x47cee8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47cee8) {
            ctx->pc = 0x47CF88u;
            goto label_47cf88;
        }
    }
    ctx->pc = 0x47CEF0u;
label_47cef0:
    // 0x47cef0: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x47cef0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_47cef4:
    // 0x47cef4: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x47cef4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_47cef8:
    // 0x47cef8: 0x27a60660  addiu       $a2, $sp, 0x660
    ctx->pc = 0x47cef8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1632));
label_47cefc:
    // 0x47cefc: 0xc115ee8  jal         func_457BA0
label_47cf00:
    if (ctx->pc == 0x47CF00u) {
        ctx->pc = 0x47CF04u;
        goto label_47cf04;
    }
    ctx->pc = 0x47CEFCu;
    SET_GPR_U32(ctx, 31, 0x47CF04u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x47CEFCu, 0x47CF04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47CF04u;
label_47cf04:
    // 0x47cf04: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_47cf08:
    if (ctx->pc == 0x47CF08u) {
        ctx->pc = 0x47CF0Cu;
        goto label_47cf0c;
    }
    ctx->pc = 0x47CF04u;
    {
        const bool branch_taken_0x47cf04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47cf04) {
            ctx->pc = 0x47CF88u;
            goto label_47cf88;
        }
    }
    ctx->pc = 0x47CF0Cu;
label_47cf0c:
    // 0x47cf0c: 0x8fa20668  lw          $v0, 0x668($sp)
    ctx->pc = 0x47cf0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1640)));
label_47cf10:
    // 0x47cf10: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_47cf14:
    if (ctx->pc == 0x47CF14u) {
        ctx->pc = 0x47CF18u;
        goto label_47cf18;
    }
    ctx->pc = 0x47CF10u;
    {
        const bool branch_taken_0x47cf10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47cf10) {
            ctx->pc = 0x47CF88u;
            goto label_47cf88;
        }
    }
    ctx->pc = 0x47CF18u;
label_47cf18:
    // 0x47cf18: 0x27a403d0  addiu       $a0, $sp, 0x3D0
    ctx->pc = 0x47cf18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 976));
label_47cf1c:
    // 0x47cf1c: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x47cf1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_47cf20:
    // 0x47cf20: 0x8fa60664  lw          $a2, 0x664($sp)
    ctx->pc = 0x47cf20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1636)));
label_47cf24:
    // 0x47cf24: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x47cf24u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_47cf28:
    // 0x47cf28: 0x24e716f8  addiu       $a3, $a3, 0x16F8
    ctx->pc = 0x47cf28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 5880));
label_47cf2c:
    // 0x47cf2c: 0x2408034d  addiu       $t0, $zero, 0x34D
    ctx->pc = 0x47cf2cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 845));
label_47cf30:
    // 0x47cf30: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x47cf30u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_47cf34:
    // 0x47cf34: 0x25291730  addiu       $t1, $t1, 0x1730
    ctx->pc = 0x47cf34u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 5936));
label_47cf38:
    // 0x47cf38: 0xc113940  jal         func_44E500
label_47cf3c:
    if (ctx->pc == 0x47CF3Cu) {
        ctx->pc = 0x47CF40u;
        goto label_47cf40;
    }
    ctx->pc = 0x47CF38u;
    SET_GPR_U32(ctx, 31, 0x47CF40u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x47CF38u, 0x47CF40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47CF40u;
label_47cf40:
    // 0x47cf40: 0x27a403d0  addiu       $a0, $sp, 0x3D0
    ctx->pc = 0x47cf40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 976));
label_47cf44:
    // 0x47cf44: 0x2785b4e8  addiu       $a1, $gp, -0x4B18
    ctx->pc = 0x47cf44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948072));
label_47cf48:
    // 0x47cf48: 0xc115c24  jal         func_457090
label_47cf4c:
    if (ctx->pc == 0x47CF4Cu) {
        ctx->pc = 0x47CF50u;
        goto label_47cf50;
    }
    ctx->pc = 0x47CF48u;
    SET_GPR_U32(ctx, 31, 0x47CF50u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x47CF48u, 0x47CF50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47CF50u;
label_47cf50:
    // 0x47cf50: 0x27a403d0  addiu       $a0, $sp, 0x3D0
    ctx->pc = 0x47cf50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 976));
label_47cf54:
    // 0x47cf54: 0x8fa20668  lw          $v0, 0x668($sp)
    ctx->pc = 0x47cf54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1640)));
label_47cf58:
    // 0x47cf58: 0x40f809  jalr        $v0
label_47cf5c:
    if (ctx->pc == 0x47CF5Cu) {
        ctx->pc = 0x47CF60u;
        goto label_47cf60;
    }
    ctx->pc = 0x47CF58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x47CF60u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47CF58u, 0x47CF60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x47CF60u;
label_47cf60:
    // 0x47cf60: 0xaf82b4d8  sw          $v0, -0x4B28($gp)
    ctx->pc = 0x47cf60u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948056), GPR_U32(ctx, 2));
label_47cf64:
    // 0x47cf64: 0x8fa203d0  lw          $v0, 0x3D0($sp)
    ctx->pc = 0x47cf64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 976)));
label_47cf68:
    // 0x47cf68: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_47cf6c:
    if (ctx->pc == 0x47CF6Cu) {
        ctx->pc = 0x47CF70u;
        goto label_47cf70;
    }
    ctx->pc = 0x47CF68u;
    {
        const bool branch_taken_0x47cf68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47cf68) {
            ctx->pc = 0x47CF78u;
            goto label_47cf78;
        }
    }
    ctx->pc = 0x47CF70u;
label_47cf70:
    // 0x47cf70: 0xd  break       0
    ctx->pc = 0x47cf70u;
    runtime->handleBreak(rdram, ctx);
label_47cf74:
    // 0x47cf74: 0x0  nop
    ctx->pc = 0x47cf74u;
    // NOP
label_47cf78:
    // 0x47cf78: 0x27a403d0  addiu       $a0, $sp, 0x3D0
    ctx->pc = 0x47cf78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 976));
label_47cf7c:
    // 0x47cf7c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x47cf7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_47cf80:
    // 0x47cf80: 0xc11392c  jal         func_44E4B0
label_47cf84:
    if (ctx->pc == 0x47CF84u) {
        ctx->pc = 0x47CF88u;
        goto label_47cf88;
    }
    ctx->pc = 0x47CF80u;
    SET_GPR_U32(ctx, 31, 0x47CF88u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x47CF80u, 0x47CF88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47CF88u;
label_47cf88:
    // 0x47cf88: 0x8fa206c0  lw          $v0, 0x6C0($sp)
    ctx->pc = 0x47cf88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1728)));
label_47cf8c:
    // 0x47cf8c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x47cf8cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_47cf90:
    // 0x47cf90: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x47cf90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_47cf94:
    // 0x47cf94: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
label_47cf98:
    if (ctx->pc == 0x47CF98u) {
        ctx->pc = 0x47CF9Cu;
        goto label_47cf9c;
    }
    ctx->pc = 0x47CF94u;
    {
        const bool branch_taken_0x47cf94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x47cf94) {
            ctx->pc = 0x47D040u;
            goto label_47d040;
        }
    }
    ctx->pc = 0x47CF9Cu;
label_47cf9c:
    // 0x47cf9c: 0x8f82b4dc  lw          $v0, -0x4B24($gp)
    ctx->pc = 0x47cf9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948060)));
label_47cfa0:
    // 0x47cfa0: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_47cfa4:
    if (ctx->pc == 0x47CFA4u) {
        ctx->pc = 0x47CFA8u;
        goto label_47cfa8;
    }
    ctx->pc = 0x47CFA0u;
    {
        const bool branch_taken_0x47cfa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47cfa0) {
            ctx->pc = 0x47D040u;
            goto label_47d040;
        }
    }
    ctx->pc = 0x47CFA8u;
label_47cfa8:
    // 0x47cfa8: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x47cfa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_47cfac:
    // 0x47cfac: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x47cfacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_47cfb0:
    // 0x47cfb0: 0x27a60650  addiu       $a2, $sp, 0x650
    ctx->pc = 0x47cfb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1616));
label_47cfb4:
    // 0x47cfb4: 0xc115ee8  jal         func_457BA0
label_47cfb8:
    if (ctx->pc == 0x47CFB8u) {
        ctx->pc = 0x47CFBCu;
        goto label_47cfbc;
    }
    ctx->pc = 0x47CFB4u;
    SET_GPR_U32(ctx, 31, 0x47CFBCu);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x47CFB4u, 0x47CFBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47CFBCu;
label_47cfbc:
    // 0x47cfbc: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_47cfc0:
    if (ctx->pc == 0x47CFC0u) {
        ctx->pc = 0x47CFC4u;
        goto label_47cfc4;
    }
    ctx->pc = 0x47CFBCu;
    {
        const bool branch_taken_0x47cfbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47cfbc) {
            ctx->pc = 0x47D040u;
            goto label_47d040;
        }
    }
    ctx->pc = 0x47CFC4u;
label_47cfc4:
    // 0x47cfc4: 0x8fa20658  lw          $v0, 0x658($sp)
    ctx->pc = 0x47cfc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1624)));
label_47cfc8:
    // 0x47cfc8: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_47cfcc:
    if (ctx->pc == 0x47CFCCu) {
        ctx->pc = 0x47CFD0u;
        goto label_47cfd0;
    }
    ctx->pc = 0x47CFC8u;
    {
        const bool branch_taken_0x47cfc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47cfc8) {
            ctx->pc = 0x47D040u;
            goto label_47d040;
        }
    }
    ctx->pc = 0x47CFD0u;
label_47cfd0:
    // 0x47cfd0: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x47cfd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
label_47cfd4:
    // 0x47cfd4: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x47cfd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_47cfd8:
    // 0x47cfd8: 0x8fa60654  lw          $a2, 0x654($sp)
    ctx->pc = 0x47cfd8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1620)));
label_47cfdc:
    // 0x47cfdc: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x47cfdcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_47cfe0:
    // 0x47cfe0: 0x24e716f8  addiu       $a3, $a3, 0x16F8
    ctx->pc = 0x47cfe0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 5880));
label_47cfe4:
    // 0x47cfe4: 0x2408034e  addiu       $t0, $zero, 0x34E
    ctx->pc = 0x47cfe4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 846));
label_47cfe8:
    // 0x47cfe8: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x47cfe8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_47cfec:
    // 0x47cfec: 0x25291750  addiu       $t1, $t1, 0x1750
    ctx->pc = 0x47cfecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 5968));
label_47cff0:
    // 0x47cff0: 0xc113940  jal         func_44E500
label_47cff4:
    if (ctx->pc == 0x47CFF4u) {
        ctx->pc = 0x47CFF8u;
        goto label_47cff8;
    }
    ctx->pc = 0x47CFF0u;
    SET_GPR_U32(ctx, 31, 0x47CFF8u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x47CFF0u, 0x47CFF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47CFF8u;
label_47cff8:
    // 0x47cff8: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x47cff8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
label_47cffc:
    // 0x47cffc: 0x2785b4e8  addiu       $a1, $gp, -0x4B18
    ctx->pc = 0x47cffcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948072));
label_47d000:
    // 0x47d000: 0xc115c24  jal         func_457090
label_47d004:
    if (ctx->pc == 0x47D004u) {
        ctx->pc = 0x47D008u;
        goto label_47d008;
    }
    ctx->pc = 0x47D000u;
    SET_GPR_U32(ctx, 31, 0x47D008u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x47D000u, 0x47D008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47D008u;
label_47d008:
    // 0x47d008: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x47d008u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
label_47d00c:
    // 0x47d00c: 0x8fa20658  lw          $v0, 0x658($sp)
    ctx->pc = 0x47d00cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1624)));
label_47d010:
    // 0x47d010: 0x40f809  jalr        $v0
label_47d014:
    if (ctx->pc == 0x47D014u) {
        ctx->pc = 0x47D018u;
        goto label_47d018;
    }
    ctx->pc = 0x47D010u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x47D018u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47D010u, 0x47D018u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x47D018u;
label_47d018:
    // 0x47d018: 0xaf82b4dc  sw          $v0, -0x4B24($gp)
    ctx->pc = 0x47d018u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948060), GPR_U32(ctx, 2));
label_47d01c:
    // 0x47d01c: 0x8fa202b0  lw          $v0, 0x2B0($sp)
    ctx->pc = 0x47d01cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
label_47d020:
    // 0x47d020: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_47d024:
    if (ctx->pc == 0x47D024u) {
        ctx->pc = 0x47D028u;
        goto label_47d028;
    }
    ctx->pc = 0x47D020u;
    {
        const bool branch_taken_0x47d020 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47d020) {
            ctx->pc = 0x47D030u;
            goto label_47d030;
        }
    }
    ctx->pc = 0x47D028u;
label_47d028:
    // 0x47d028: 0xd  break       0
    ctx->pc = 0x47d028u;
    runtime->handleBreak(rdram, ctx);
label_47d02c:
    // 0x47d02c: 0x0  nop
    ctx->pc = 0x47d02cu;
    // NOP
label_47d030:
    // 0x47d030: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x47d030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
label_47d034:
    // 0x47d034: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x47d034u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_47d038:
    // 0x47d038: 0xc11392c  jal         func_44E4B0
label_47d03c:
    if (ctx->pc == 0x47D03Cu) {
        ctx->pc = 0x47D040u;
        goto label_47d040;
    }
    ctx->pc = 0x47D038u;
    SET_GPR_U32(ctx, 31, 0x47D040u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x47D038u, 0x47D040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47D040u;
label_47d040:
    // 0x47d040: 0x8fa30680  lw          $v1, 0x680($sp)
    ctx->pc = 0x47d040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1664)));
label_47d044:
    // 0x47d044: 0x8f82c09c  lw          $v0, -0x3F64($gp)
    ctx->pc = 0x47d044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951068)));
label_47d048:
    // 0x47d048: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x47d048u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_47d04c:
    // 0x47d04c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x47d04cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_47d050:
    // 0x47d050: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
label_47d054:
    if (ctx->pc == 0x47D054u) {
        ctx->pc = 0x47D058u;
        goto label_47d058;
    }
    ctx->pc = 0x47D050u;
    {
        const bool branch_taken_0x47d050 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x47d050) {
            ctx->pc = 0x47D0FCu;
            goto label_47d0fc;
        }
    }
    ctx->pc = 0x47D058u;
label_47d058:
    // 0x47d058: 0x8f82b4e0  lw          $v0, -0x4B20($gp)
    ctx->pc = 0x47d058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948064)));
label_47d05c:
    // 0x47d05c: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_47d060:
    if (ctx->pc == 0x47D060u) {
        ctx->pc = 0x47D064u;
        goto label_47d064;
    }
    ctx->pc = 0x47D05Cu;
    {
        const bool branch_taken_0x47d05c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47d05c) {
            ctx->pc = 0x47D0FCu;
            goto label_47d0fc;
        }
    }
    ctx->pc = 0x47D064u;
label_47d064:
    // 0x47d064: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x47d064u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_47d068:
    // 0x47d068: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x47d068u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_47d06c:
    // 0x47d06c: 0x27a60640  addiu       $a2, $sp, 0x640
    ctx->pc = 0x47d06cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1600));
label_47d070:
    // 0x47d070: 0xc115ee8  jal         func_457BA0
label_47d074:
    if (ctx->pc == 0x47D074u) {
        ctx->pc = 0x47D078u;
        goto label_47d078;
    }
    ctx->pc = 0x47D070u;
    SET_GPR_U32(ctx, 31, 0x47D078u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x47D070u, 0x47D078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47D078u;
label_47d078:
    // 0x47d078: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_47d07c:
    if (ctx->pc == 0x47D07Cu) {
        ctx->pc = 0x47D080u;
        goto label_47d080;
    }
    ctx->pc = 0x47D078u;
    {
        const bool branch_taken_0x47d078 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47d078) {
            ctx->pc = 0x47D0FCu;
            goto label_47d0fc;
        }
    }
    ctx->pc = 0x47D080u;
label_47d080:
    // 0x47d080: 0x8fa20648  lw          $v0, 0x648($sp)
    ctx->pc = 0x47d080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1608)));
label_47d084:
    // 0x47d084: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_47d088:
    if (ctx->pc == 0x47D088u) {
        ctx->pc = 0x47D08Cu;
        goto label_47d08c;
    }
    ctx->pc = 0x47D084u;
    {
        const bool branch_taken_0x47d084 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47d084) {
            ctx->pc = 0x47D0FCu;
            goto label_47d0fc;
        }
    }
    ctx->pc = 0x47D08Cu;
label_47d08c:
    // 0x47d08c: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x47d08cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_47d090:
    // 0x47d090: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x47d090u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_47d094:
    // 0x47d094: 0x8fa60644  lw          $a2, 0x644($sp)
    ctx->pc = 0x47d094u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1604)));
label_47d098:
    // 0x47d098: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x47d098u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_47d09c:
    // 0x47d09c: 0x24e716f8  addiu       $a3, $a3, 0x16F8
    ctx->pc = 0x47d09cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 5880));
label_47d0a0:
    // 0x47d0a0: 0x24080350  addiu       $t0, $zero, 0x350
    ctx->pc = 0x47d0a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 848));
label_47d0a4:
    // 0x47d0a4: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x47d0a4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_47d0a8:
    // 0x47d0a8: 0x25291770  addiu       $t1, $t1, 0x1770
    ctx->pc = 0x47d0a8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 6000));
label_47d0ac:
    // 0x47d0ac: 0xc113940  jal         func_44E500
label_47d0b0:
    if (ctx->pc == 0x47D0B0u) {
        ctx->pc = 0x47D0B4u;
        goto label_47d0b4;
    }
    ctx->pc = 0x47D0ACu;
    SET_GPR_U32(ctx, 31, 0x47D0B4u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x47D0ACu, 0x47D0B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47D0B4u;
label_47d0b4:
    // 0x47d0b4: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x47d0b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_47d0b8:
    // 0x47d0b8: 0x2785b4e8  addiu       $a1, $gp, -0x4B18
    ctx->pc = 0x47d0b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948072));
label_47d0bc:
    // 0x47d0bc: 0xc115c24  jal         func_457090
label_47d0c0:
    if (ctx->pc == 0x47D0C0u) {
        ctx->pc = 0x47D0C4u;
        goto label_47d0c4;
    }
    ctx->pc = 0x47D0BCu;
    SET_GPR_U32(ctx, 31, 0x47D0C4u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x47D0BCu, 0x47D0C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47D0C4u;
label_47d0c4:
    // 0x47d0c4: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x47d0c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_47d0c8:
    // 0x47d0c8: 0x8fa20648  lw          $v0, 0x648($sp)
    ctx->pc = 0x47d0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1608)));
label_47d0cc:
    // 0x47d0cc: 0x40f809  jalr        $v0
label_47d0d0:
    if (ctx->pc == 0x47D0D0u) {
        ctx->pc = 0x47D0D4u;
        goto label_47d0d4;
    }
    ctx->pc = 0x47D0CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x47D0D4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47D0CCu, 0x47D0D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x47D0D4u;
label_47d0d4:
    // 0x47d0d4: 0xaf82b4e0  sw          $v0, -0x4B20($gp)
    ctx->pc = 0x47d0d4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948064), GPR_U32(ctx, 2));
label_47d0d8:
    // 0x47d0d8: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x47d0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
label_47d0dc:
    // 0x47d0dc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_47d0e0:
    if (ctx->pc == 0x47D0E0u) {
        ctx->pc = 0x47D0E4u;
        goto label_47d0e4;
    }
    ctx->pc = 0x47D0DCu;
    {
        const bool branch_taken_0x47d0dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47d0dc) {
            ctx->pc = 0x47D0ECu;
            goto label_47d0ec;
        }
    }
    ctx->pc = 0x47D0E4u;
label_47d0e4:
    // 0x47d0e4: 0xd  break       0
    ctx->pc = 0x47d0e4u;
    runtime->handleBreak(rdram, ctx);
label_47d0e8:
    // 0x47d0e8: 0x0  nop
    ctx->pc = 0x47d0e8u;
    // NOP
label_47d0ec:
    // 0x47d0ec: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x47d0ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_47d0f0:
    // 0x47d0f0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x47d0f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_47d0f4:
    // 0x47d0f4: 0xc11392c  jal         func_44E4B0
label_47d0f8:
    if (ctx->pc == 0x47D0F8u) {
        ctx->pc = 0x47D0FCu;
        goto label_47d0fc;
    }
    ctx->pc = 0x47D0F4u;
    SET_GPR_U32(ctx, 31, 0x47D0FCu);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x47D0F4u, 0x47D0FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47D0FCu;
label_47d0fc:
    // 0x47d0fc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x47d0fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_47d100:
    // 0x47d100: 0x100000e3  b           . + 4 + (0xE3 << 2)
label_47d104:
    if (ctx->pc == 0x47D104u) {
        ctx->pc = 0x47D108u;
        goto label_47d108;
    }
    ctx->pc = 0x47D100u;
    {
        const bool branch_taken_0x47d100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x47d100) {
            ctx->pc = 0x47D490u;
            goto label_47d490;
        }
    }
    ctx->pc = 0x47D108u;
label_47d108:
    // 0x47d108: 0x8fa206d0  lw          $v0, 0x6D0($sp)
    ctx->pc = 0x47d108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1744)));
label_47d10c:
    // 0x47d10c: 0x18400036  blez        $v0, . + 4 + (0x36 << 2)
label_47d110:
    if (ctx->pc == 0x47D110u) {
        ctx->pc = 0x47D114u;
        goto label_47d114;
    }
    ctx->pc = 0x47D10Cu;
    {
        const bool branch_taken_0x47d10c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x47d10c) {
            ctx->pc = 0x47D1E8u;
            goto label_47d1e8;
        }
    }
    ctx->pc = 0x47D114u;
label_47d114:
    // 0x47d114: 0x8fa206d0  lw          $v0, 0x6D0($sp)
    ctx->pc = 0x47d114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1744)));
label_47d118:
    // 0x47d118: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x47d118u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_47d11c:
    // 0x47d11c: 0x14400032  bnez        $v0, . + 4 + (0x32 << 2)
label_47d120:
    if (ctx->pc == 0x47D120u) {
        ctx->pc = 0x47D124u;
        goto label_47d124;
    }
    ctx->pc = 0x47D11Cu;
    {
        const bool branch_taken_0x47d11c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x47d11c) {
            ctx->pc = 0x47D1E8u;
            goto label_47d1e8;
        }
    }
    ctx->pc = 0x47D124u;
label_47d124:
    // 0x47d124: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x47d124u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_47d128:
    // 0x47d128: 0x8f82c0b4  lw          $v0, -0x3F4C($gp)
    ctx->pc = 0x47d128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951092)));
label_47d12c:
    // 0x47d12c: 0x1440002e  bnez        $v0, . + 4 + (0x2E << 2)
label_47d130:
    if (ctx->pc == 0x47D130u) {
        ctx->pc = 0x47D134u;
        goto label_47d134;
    }
    ctx->pc = 0x47D12Cu;
    {
        const bool branch_taken_0x47d12c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x47d12c) {
            ctx->pc = 0x47D1E8u;
            goto label_47d1e8;
        }
    }
    ctx->pc = 0x47D134u;
label_47d134:
    // 0x47d134: 0x16a0002a  bnez        $s5, . + 4 + (0x2A << 2)
label_47d138:
    if (ctx->pc == 0x47D138u) {
        ctx->pc = 0x47D13Cu;
        goto label_47d13c;
    }
    ctx->pc = 0x47D134u;
    {
        const bool branch_taken_0x47d134 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x47d134) {
            ctx->pc = 0x47D1E0u;
            goto label_47d1e0;
        }
    }
    ctx->pc = 0x47D13Cu;
label_47d13c:
    // 0x47d13c: 0x8f82b4e4  lw          $v0, -0x4B1C($gp)
    ctx->pc = 0x47d13cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948068)));
label_47d140:
    // 0x47d140: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_47d144:
    if (ctx->pc == 0x47D144u) {
        ctx->pc = 0x47D148u;
        goto label_47d148;
    }
    ctx->pc = 0x47D140u;
    {
        const bool branch_taken_0x47d140 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47d140) {
            ctx->pc = 0x47D1E0u;
            goto label_47d1e0;
        }
    }
    ctx->pc = 0x47D148u;
label_47d148:
    // 0x47d148: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x47d148u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_47d14c:
    // 0x47d14c: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x47d14cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_47d150:
    // 0x47d150: 0x27a60630  addiu       $a2, $sp, 0x630
    ctx->pc = 0x47d150u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1584));
label_47d154:
    // 0x47d154: 0xc115ee8  jal         func_457BA0
label_47d158:
    if (ctx->pc == 0x47D158u) {
        ctx->pc = 0x47D15Cu;
        goto label_47d15c;
    }
    ctx->pc = 0x47D154u;
    SET_GPR_U32(ctx, 31, 0x47D15Cu);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x47D154u, 0x47D15Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47D15Cu;
label_47d15c:
    // 0x47d15c: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_47d160:
    if (ctx->pc == 0x47D160u) {
        ctx->pc = 0x47D164u;
        goto label_47d164;
    }
    ctx->pc = 0x47D15Cu;
    {
        const bool branch_taken_0x47d15c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47d15c) {
            ctx->pc = 0x47D1E0u;
            goto label_47d1e0;
        }
    }
    ctx->pc = 0x47D164u;
label_47d164:
    // 0x47d164: 0x8fa20638  lw          $v0, 0x638($sp)
    ctx->pc = 0x47d164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1592)));
label_47d168:
    // 0x47d168: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_47d16c:
    if (ctx->pc == 0x47D16Cu) {
        ctx->pc = 0x47D170u;
        goto label_47d170;
    }
    ctx->pc = 0x47D168u;
    {
        const bool branch_taken_0x47d168 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47d168) {
            ctx->pc = 0x47D1E0u;
            goto label_47d1e0;
        }
    }
    ctx->pc = 0x47D170u;
label_47d170:
    // 0x47d170: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x47d170u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_47d174:
    // 0x47d174: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x47d174u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_47d178:
    // 0x47d178: 0x8fa60634  lw          $a2, 0x634($sp)
    ctx->pc = 0x47d178u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1588)));
label_47d17c:
    // 0x47d17c: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x47d17cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_47d180:
    // 0x47d180: 0x24e716f8  addiu       $a3, $a3, 0x16F8
    ctx->pc = 0x47d180u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 5880));
label_47d184:
    // 0x47d184: 0x2408035d  addiu       $t0, $zero, 0x35D
    ctx->pc = 0x47d184u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 861));
label_47d188:
    // 0x47d188: 0x2789b4f0  addiu       $t1, $gp, -0x4B10
    ctx->pc = 0x47d188u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948080));
label_47d18c:
    // 0x47d18c: 0xc113940  jal         func_44E500
label_47d190:
    if (ctx->pc == 0x47D190u) {
        ctx->pc = 0x47D194u;
        goto label_47d194;
    }
    ctx->pc = 0x47D18Cu;
    SET_GPR_U32(ctx, 31, 0x47D194u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x47D18Cu, 0x47D194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47D194u;
label_47d194:
    // 0x47d194: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x47d194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_47d198:
    // 0x47d198: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x47d198u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_47d19c:
    // 0x47d19c: 0x24a51790  addiu       $a1, $a1, 0x1790
    ctx->pc = 0x47d19cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6032));
label_47d1a0:
    // 0x47d1a0: 0xc115c24  jal         func_457090
label_47d1a4:
    if (ctx->pc == 0x47D1A4u) {
        ctx->pc = 0x47D1A8u;
        goto label_47d1a8;
    }
    ctx->pc = 0x47D1A0u;
    SET_GPR_U32(ctx, 31, 0x47D1A8u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x47D1A0u, 0x47D1A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47D1A8u;
label_47d1a8:
    // 0x47d1a8: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x47d1a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_47d1ac:
    // 0x47d1ac: 0x8fa20638  lw          $v0, 0x638($sp)
    ctx->pc = 0x47d1acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1592)));
label_47d1b0:
    // 0x47d1b0: 0x40f809  jalr        $v0
label_47d1b4:
    if (ctx->pc == 0x47D1B4u) {
        ctx->pc = 0x47D1B8u;
        goto label_47d1b8;
    }
    ctx->pc = 0x47D1B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x47D1B8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47D1B0u, 0x47D1B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x47D1B8u;
label_47d1b8:
    // 0x47d1b8: 0xaf82b4e4  sw          $v0, -0x4B1C($gp)
    ctx->pc = 0x47d1b8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948068), GPR_U32(ctx, 2));
label_47d1bc:
    // 0x47d1bc: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x47d1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_47d1c0:
    // 0x47d1c0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_47d1c4:
    if (ctx->pc == 0x47D1C4u) {
        ctx->pc = 0x47D1C8u;
        goto label_47d1c8;
    }
    ctx->pc = 0x47D1C0u;
    {
        const bool branch_taken_0x47d1c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47d1c0) {
            ctx->pc = 0x47D1D0u;
            goto label_47d1d0;
        }
    }
    ctx->pc = 0x47D1C8u;
label_47d1c8:
    // 0x47d1c8: 0xd  break       0
    ctx->pc = 0x47d1c8u;
    runtime->handleBreak(rdram, ctx);
label_47d1cc:
    // 0x47d1cc: 0x0  nop
    ctx->pc = 0x47d1ccu;
    // NOP
label_47d1d0:
    // 0x47d1d0: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x47d1d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_47d1d4:
    // 0x47d1d4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x47d1d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_47d1d8:
    // 0x47d1d8: 0xc11392c  jal         func_44E4B0
label_47d1dc:
    if (ctx->pc == 0x47D1DCu) {
        ctx->pc = 0x47D1E0u;
        goto label_47d1e0;
    }
    ctx->pc = 0x47D1D8u;
    SET_GPR_U32(ctx, 31, 0x47D1E0u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x47D1D8u, 0x47D1E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47D1E0u;
label_47d1e0:
    // 0x47d1e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x47d1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_47d1e4:
    // 0x47d1e4: 0xaf82c0b4  sw          $v0, -0x3F4C($gp)
    ctx->pc = 0x47d1e4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294951092), GPR_U32(ctx, 2));
label_47d1e8:
    // 0x47d1e8: 0x8f82c0b4  lw          $v0, -0x3F4C($gp)
    ctx->pc = 0x47d1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951092)));
label_47d1ec:
    // 0x47d1ec: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_47d1f0:
    if (ctx->pc == 0x47D1F0u) {
        ctx->pc = 0x47D1F4u;
        goto label_47d1f4;
    }
    ctx->pc = 0x47D1ECu;
    {
        const bool branch_taken_0x47d1ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47d1ec) {
            ctx->pc = 0x47D200u;
            goto label_47d200;
        }
    }
    ctx->pc = 0x47D1F4u;
label_47d1f4:
    // 0x47d1f4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x47d1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_47d1f8:
    // 0x47d1f8: 0x100000ab  b           . + 4 + (0xAB << 2)
label_47d1fc:
    if (ctx->pc == 0x47D1FCu) {
        ctx->pc = 0x47D200u;
        goto label_47d200;
    }
    ctx->pc = 0x47D1F8u;
    {
        const bool branch_taken_0x47d1f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x47d1f8) {
            ctx->pc = 0x47D4A8u;
            goto label_47d4a8;
        }
    }
    ctx->pc = 0x47D200u;
label_47d200:
    // 0x47d200: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x47d200u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_47d204:
    // 0x47d204: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x47d204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_47d208:
    // 0x47d208: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x47d208u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_47d20c:
    // 0x47d20c: 0x8fa20690  lw          $v0, 0x690($sp)
    ctx->pc = 0x47d20cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1680)));
label_47d210:
    // 0x47d210: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x47d210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_47d214:
    // 0x47d214: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x47d214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_47d218:
    // 0x47d218: 0xe7a00620  swc1        $f0, 0x620($sp)
    ctx->pc = 0x47d218u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1568), bits); }
label_47d21c:
    // 0x47d21c: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x47d21cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_47d220:
    // 0x47d220: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x47d220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_47d224:
    // 0x47d224: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x47d224u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_47d228:
    // 0x47d228: 0x8fa20690  lw          $v0, 0x690($sp)
    ctx->pc = 0x47d228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1680)));
label_47d22c:
    // 0x47d22c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x47d22cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_47d230:
    // 0x47d230: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x47d230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_47d234:
    // 0x47d234: 0xe7a00624  swc1        $f0, 0x624($sp)
    ctx->pc = 0x47d234u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1572), bits); }
label_47d238:
    // 0x47d238: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x47d238u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_47d23c:
    // 0x47d23c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x47d23cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_47d240:
    // 0x47d240: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x47d240u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_47d244:
    // 0x47d244: 0x8fa20690  lw          $v0, 0x690($sp)
    ctx->pc = 0x47d244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1680)));
label_47d248:
    // 0x47d248: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x47d248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_47d24c:
    // 0x47d24c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x47d24cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_47d250:
    // 0x47d250: 0xe7a00628  swc1        $f0, 0x628($sp)
    ctx->pc = 0x47d250u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1576), bits); }
label_47d254:
    // 0x47d254: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x47d254u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_47d258:
    // 0x47d258: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x47d258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_47d25c:
    // 0x47d25c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x47d25cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_47d260:
    // 0x47d260: 0x8fa206c0  lw          $v0, 0x6C0($sp)
    ctx->pc = 0x47d260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1728)));
label_47d264:
    // 0x47d264: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x47d264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_47d268:
    // 0x47d268: 0x27a50620  addiu       $a1, $sp, 0x620
    ctx->pc = 0x47d268u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1568));
label_47d26c:
    // 0x47d26c: 0xc041d58  jal         func_107560
label_47d270:
    if (ctx->pc == 0x47D270u) {
        ctx->pc = 0x47D274u;
        goto label_47d274;
    }
    ctx->pc = 0x47D26Cu;
    SET_GPR_U32(ctx, 31, 0x47D274u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x47D26Cu, 0x47D274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47D274u;
label_47d274:
    // 0x47d274: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x47d274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_47d278:
    // 0x47d278: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x47d278u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_47d27c:
    // 0x47d27c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x47d27cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_47d280:
    // 0x47d280: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x47d280u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_47d284:
    // 0x47d284: 0x8fa20690  lw          $v0, 0x690($sp)
    ctx->pc = 0x47d284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1680)));
label_47d288:
    // 0x47d288: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x47d288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_47d28c:
    // 0x47d28c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x47d28cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_47d290:
    // 0x47d290: 0xe7a00610  swc1        $f0, 0x610($sp)
    ctx->pc = 0x47d290u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1552), bits); }
label_47d294:
    // 0x47d294: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x47d294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_47d298:
    // 0x47d298: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x47d298u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_47d29c:
    // 0x47d29c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x47d29cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_47d2a0:
    // 0x47d2a0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x47d2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_47d2a4:
    // 0x47d2a4: 0x8fa20690  lw          $v0, 0x690($sp)
    ctx->pc = 0x47d2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1680)));
label_47d2a8:
    // 0x47d2a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x47d2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_47d2ac:
    // 0x47d2ac: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x47d2acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_47d2b0:
    // 0x47d2b0: 0xe7a00614  swc1        $f0, 0x614($sp)
    ctx->pc = 0x47d2b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1556), bits); }
label_47d2b4:
    // 0x47d2b4: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x47d2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_47d2b8:
    // 0x47d2b8: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x47d2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_47d2bc:
    // 0x47d2bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x47d2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_47d2c0:
    // 0x47d2c0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x47d2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_47d2c4:
    // 0x47d2c4: 0x8fa20690  lw          $v0, 0x690($sp)
    ctx->pc = 0x47d2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1680)));
label_47d2c8:
    // 0x47d2c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x47d2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_47d2cc:
    // 0x47d2cc: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x47d2ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_47d2d0:
    // 0x47d2d0: 0xe7a00618  swc1        $f0, 0x618($sp)
    ctx->pc = 0x47d2d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1560), bits); }
label_47d2d4:
    // 0x47d2d4: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x47d2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_47d2d8:
    // 0x47d2d8: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x47d2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_47d2dc:
    // 0x47d2dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x47d2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_47d2e0:
    // 0x47d2e0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x47d2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_47d2e4:
    // 0x47d2e4: 0x8fa206c0  lw          $v0, 0x6C0($sp)
    ctx->pc = 0x47d2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1728)));
label_47d2e8:
    // 0x47d2e8: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x47d2e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_47d2ec:
    // 0x47d2ec: 0x27a50610  addiu       $a1, $sp, 0x610
    ctx->pc = 0x47d2ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1552));
label_47d2f0:
    // 0x47d2f0: 0xc041d58  jal         func_107560
label_47d2f4:
    if (ctx->pc == 0x47D2F4u) {
        ctx->pc = 0x47D2F8u;
        goto label_47d2f8;
    }
    ctx->pc = 0x47D2F0u;
    SET_GPR_U32(ctx, 31, 0x47D2F8u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x47D2F0u, 0x47D2F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47D2F8u;
label_47d2f8:
    // 0x47d2f8: 0x8fa206a0  lw          $v0, 0x6A0($sp)
    ctx->pc = 0x47d2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1696)));
label_47d2fc:
    // 0x47d2fc: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_47d300:
    if (ctx->pc == 0x47D300u) {
        ctx->pc = 0x47D304u;
        goto label_47d304;
    }
    ctx->pc = 0x47D2FCu;
    {
        const bool branch_taken_0x47d2fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47d2fc) {
            ctx->pc = 0x47D3A0u;
            goto label_47d3a0;
        }
    }
    ctx->pc = 0x47D304u;
label_47d304:
    // 0x47d304: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x47d304u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_47d308:
    // 0x47d308: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x47d308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_47d30c:
    // 0x47d30c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x47d30cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_47d310:
    // 0x47d310: 0x8fa206c0  lw          $v0, 0x6C0($sp)
    ctx->pc = 0x47d310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1728)));
label_47d314:
    // 0x47d314: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x47d314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_47d318:
    // 0x47d318: 0x2454000c  addiu       $s4, $v0, 0xC
    ctx->pc = 0x47d318u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_47d31c:
    // 0x47d31c: 0x8fa206b0  lw          $v0, 0x6B0($sp)
    ctx->pc = 0x47d31cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1712)));
label_47d320:
    // 0x47d320: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x47d320u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_47d324:
    // 0x47d324: 0xa2820000  sb          $v0, 0x0($s4)
    ctx->pc = 0x47d324u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 2));
label_47d328:
    // 0x47d328: 0x8fa206b0  lw          $v0, 0x6B0($sp)
    ctx->pc = 0x47d328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1712)));
label_47d32c:
    // 0x47d32c: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x47d32cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_47d330:
    // 0x47d330: 0xa2820001  sb          $v0, 0x1($s4)
    ctx->pc = 0x47d330u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1), (uint8_t)GPR_U32(ctx, 2));
label_47d334:
    // 0x47d334: 0x8fa206b0  lw          $v0, 0x6B0($sp)
    ctx->pc = 0x47d334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1712)));
label_47d338:
    // 0x47d338: 0x90420002  lbu         $v0, 0x2($v0)
    ctx->pc = 0x47d338u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_47d33c:
    // 0x47d33c: 0xa2820002  sb          $v0, 0x2($s4)
    ctx->pc = 0x47d33cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 2), (uint8_t)GPR_U32(ctx, 2));
label_47d340:
    // 0x47d340: 0x8fa206b0  lw          $v0, 0x6B0($sp)
    ctx->pc = 0x47d340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1712)));
label_47d344:
    // 0x47d344: 0x90420003  lbu         $v0, 0x3($v0)
    ctx->pc = 0x47d344u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
label_47d348:
    // 0x47d348: 0xa2820003  sb          $v0, 0x3($s4)
    ctx->pc = 0x47d348u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 3), (uint8_t)GPR_U32(ctx, 2));
label_47d34c:
    // 0x47d34c: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x47d34cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_47d350:
    // 0x47d350: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x47d350u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_47d354:
    // 0x47d354: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x47d354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_47d358:
    // 0x47d358: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x47d358u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_47d35c:
    // 0x47d35c: 0x8fa206c0  lw          $v0, 0x6C0($sp)
    ctx->pc = 0x47d35cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1728)));
label_47d360:
    // 0x47d360: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x47d360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_47d364:
    // 0x47d364: 0x2453000c  addiu       $s3, $v0, 0xC
    ctx->pc = 0x47d364u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_47d368:
    // 0x47d368: 0x8fa206b0  lw          $v0, 0x6B0($sp)
    ctx->pc = 0x47d368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1712)));
label_47d36c:
    // 0x47d36c: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x47d36cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_47d370:
    // 0x47d370: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x47d370u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_47d374:
    // 0x47d374: 0x8fa206b0  lw          $v0, 0x6B0($sp)
    ctx->pc = 0x47d374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1712)));
label_47d378:
    // 0x47d378: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x47d378u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_47d37c:
    // 0x47d37c: 0xa2620001  sb          $v0, 0x1($s3)
    ctx->pc = 0x47d37cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 2));
label_47d380:
    // 0x47d380: 0x8fa206b0  lw          $v0, 0x6B0($sp)
    ctx->pc = 0x47d380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1712)));
label_47d384:
    // 0x47d384: 0x90420002  lbu         $v0, 0x2($v0)
    ctx->pc = 0x47d384u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_47d388:
    // 0x47d388: 0xa2620002  sb          $v0, 0x2($s3)
    ctx->pc = 0x47d388u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 2), (uint8_t)GPR_U32(ctx, 2));
label_47d38c:
    // 0x47d38c: 0x8fa206b0  lw          $v0, 0x6B0($sp)
    ctx->pc = 0x47d38cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1712)));
label_47d390:
    // 0x47d390: 0x90420003  lbu         $v0, 0x3($v0)
    ctx->pc = 0x47d390u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
label_47d394:
    // 0x47d394: 0xa2620003  sb          $v0, 0x3($s3)
    ctx->pc = 0x47d394u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 3), (uint8_t)GPR_U32(ctx, 2));
label_47d398:
    // 0x47d398: 0x1000003b  b           . + 4 + (0x3B << 2)
label_47d39c:
    if (ctx->pc == 0x47D39Cu) {
        ctx->pc = 0x47D3A0u;
        goto label_47d3a0;
    }
    ctx->pc = 0x47D398u;
    {
        const bool branch_taken_0x47d398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x47d398) {
            ctx->pc = 0x47D488u;
            goto label_47d488;
        }
    }
    ctx->pc = 0x47D3A0u;
label_47d3a0:
    // 0x47d3a0: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x47d3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_47d3a4:
    // 0x47d3a4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x47d3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_47d3a8:
    // 0x47d3a8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x47d3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_47d3ac:
    // 0x47d3ac: 0x8fa206c0  lw          $v0, 0x6C0($sp)
    ctx->pc = 0x47d3acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1728)));
label_47d3b0:
    // 0x47d3b0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x47d3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_47d3b4:
    // 0x47d3b4: 0x2452000c  addiu       $s2, $v0, 0xC
    ctx->pc = 0x47d3b4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_47d3b8:
    // 0x47d3b8: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x47d3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_47d3bc:
    // 0x47d3bc: 0x8fa206b0  lw          $v0, 0x6B0($sp)
    ctx->pc = 0x47d3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1712)));
label_47d3c0:
    // 0x47d3c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x47d3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_47d3c4:
    // 0x47d3c4: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x47d3c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_47d3c8:
    // 0x47d3c8: 0xa2420000  sb          $v0, 0x0($s2)
    ctx->pc = 0x47d3c8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 2));
label_47d3cc:
    // 0x47d3cc: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x47d3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_47d3d0:
    // 0x47d3d0: 0x8fa206b0  lw          $v0, 0x6B0($sp)
    ctx->pc = 0x47d3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1712)));
label_47d3d4:
    // 0x47d3d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x47d3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_47d3d8:
    // 0x47d3d8: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x47d3d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_47d3dc:
    // 0x47d3dc: 0xa2420001  sb          $v0, 0x1($s2)
    ctx->pc = 0x47d3dcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 2));
label_47d3e0:
    // 0x47d3e0: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x47d3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_47d3e4:
    // 0x47d3e4: 0x8fa206b0  lw          $v0, 0x6B0($sp)
    ctx->pc = 0x47d3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1712)));
label_47d3e8:
    // 0x47d3e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x47d3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_47d3ec:
    // 0x47d3ec: 0x90420002  lbu         $v0, 0x2($v0)
    ctx->pc = 0x47d3ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_47d3f0:
    // 0x47d3f0: 0xa2420002  sb          $v0, 0x2($s2)
    ctx->pc = 0x47d3f0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2), (uint8_t)GPR_U32(ctx, 2));
label_47d3f4:
    // 0x47d3f4: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x47d3f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_47d3f8:
    // 0x47d3f8: 0x8fa506b0  lw          $a1, 0x6B0($sp)
    ctx->pc = 0x47d3f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1712)));
label_47d3fc:
    // 0x47d3fc: 0xa43021  addu        $a2, $a1, $a0
    ctx->pc = 0x47d3fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_47d400:
    // 0x47d400: 0x90c20003  lbu         $v0, 0x3($a2)
    ctx->pc = 0x47d400u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3)));
label_47d404:
    // 0x47d404: 0xa2420003  sb          $v0, 0x3($s2)
    ctx->pc = 0x47d404u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 3), (uint8_t)GPR_U32(ctx, 2));
label_47d408:
    // 0x47d408: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x47d408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_47d40c:
    // 0x47d40c: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x47d40cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_47d410:
    // 0x47d410: 0x822821  addu        $a1, $a0, $v0
    ctx->pc = 0x47d410u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_47d414:
    // 0x47d414: 0x53080  sll         $a2, $a1, 2
    ctx->pc = 0x47d414u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_47d418:
    // 0x47d418: 0x8fa706c0  lw          $a3, 0x6C0($sp)
    ctx->pc = 0x47d418u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1728)));
label_47d41c:
    // 0x47d41c: 0xe64021  addu        $t0, $a3, $a2
    ctx->pc = 0x47d41cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_47d420:
    // 0x47d420: 0x2509000c  addiu       $t1, $t0, 0xC
    ctx->pc = 0x47d420u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), 12));
label_47d424:
    // 0x47d424: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x47d424u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_47d428:
    // 0x47d428: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x47d428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_47d42c:
    // 0x47d42c: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x47d42cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_47d430:
    // 0x47d430: 0x8fa506b0  lw          $a1, 0x6B0($sp)
    ctx->pc = 0x47d430u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1712)));
label_47d434:
    // 0x47d434: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x47d434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_47d438:
    // 0x47d438: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x47d438u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_47d43c:
    // 0x47d43c: 0xa2240000  sb          $a0, 0x0($s1)
    ctx->pc = 0x47d43cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 4));
label_47d440:
    // 0x47d440: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x47d440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_47d444:
    // 0x47d444: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x47d444u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_47d448:
    // 0x47d448: 0x8fa306b0  lw          $v1, 0x6B0($sp)
    ctx->pc = 0x47d448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1712)));
label_47d44c:
    // 0x47d44c: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x47d44cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_47d450:
    // 0x47d450: 0x90850001  lbu         $a1, 0x1($a0)
    ctx->pc = 0x47d450u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
label_47d454:
    // 0x47d454: 0xa2250001  sb          $a1, 0x1($s1)
    ctx->pc = 0x47d454u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 5));
label_47d458:
    // 0x47d458: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x47d458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_47d45c:
    // 0x47d45c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x47d45cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_47d460:
    // 0x47d460: 0x8fa206b0  lw          $v0, 0x6B0($sp)
    ctx->pc = 0x47d460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1712)));
label_47d464:
    // 0x47d464: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x47d464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_47d468:
    // 0x47d468: 0x90420002  lbu         $v0, 0x2($v0)
    ctx->pc = 0x47d468u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_47d46c:
    // 0x47d46c: 0xa2220002  sb          $v0, 0x2($s1)
    ctx->pc = 0x47d46cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 2));
label_47d470:
    // 0x47d470: 0x26040001  addiu       $a0, $s0, 0x1
    ctx->pc = 0x47d470u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_47d474:
    // 0x47d474: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x47d474u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_47d478:
    // 0x47d478: 0x8fa606b0  lw          $a2, 0x6B0($sp)
    ctx->pc = 0x47d478u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1712)));
label_47d47c:
    // 0x47d47c: 0xc51021  addu        $v0, $a2, $a1
    ctx->pc = 0x47d47cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_47d480:
    // 0x47d480: 0x90420003  lbu         $v0, 0x3($v0)
    ctx->pc = 0x47d480u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
label_47d484:
    // 0x47d484: 0xa2220003  sb          $v0, 0x3($s1)
    ctx->pc = 0x47d484u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 2));
label_47d488:
    // 0x47d488: 0x26040001  addiu       $a0, $s0, 0x1
    ctx->pc = 0x47d488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_47d48c:
    // 0x47d48c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x47d48cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_47d490:
    // 0x47d490: 0x8fa50680  lw          $a1, 0x680($sp)
    ctx->pc = 0x47d490u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1664)));
label_47d494:
    // 0x47d494: 0x205302b  sltu        $a2, $s0, $a1
    ctx->pc = 0x47d494u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_47d498:
    // 0x47d498: 0x14c0ff1b  bnez        $a2, . + 4 + (-0xE5 << 2)
label_47d49c:
    if (ctx->pc == 0x47D49Cu) {
        ctx->pc = 0x47D4A0u;
        goto label_47d4a0;
    }
    ctx->pc = 0x47D498u;
    {
        const bool branch_taken_0x47d498 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x47d498) {
            ctx->pc = 0x47D108u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_47d108;
        }
    }
    ctx->pc = 0x47D4A0u;
label_47d4a0:
    // 0x47d4a0: 0x8fa70680  lw          $a3, 0x680($sp)
    ctx->pc = 0x47d4a0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1664)));
label_47d4a4:
    // 0x47d4a4: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x47d4a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_47d4a8:
    // 0x47d4a8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x47d4a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_47d4ac:
    // 0x47d4ac: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x47d4acu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_47d4b0:
    // 0x47d4b0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x47d4b0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_47d4b4:
    // 0x47d4b4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x47d4b4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_47d4b8:
    // 0x47d4b8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x47d4b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_47d4bc:
    // 0x47d4bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x47d4bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_47d4c0:
    // 0x47d4c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x47d4c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_47d4c4:
    // 0x47d4c4: 0x27bd06e0  addiu       $sp, $sp, 0x6E0
    ctx->pc = 0x47d4c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1760));
label_47d4c8:
    // 0x47d4c8: 0x3e00008  jr          $ra
label_47d4cc:
    if (ctx->pc == 0x47D4CCu) {
        ctx->pc = 0x47D4D0u;
        goto label_fallthrough_0x47d4c8;
    }
    ctx->pc = 0x47D4C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47D4C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x47d4c8:
    ctx->pc = 0x47D4D0u;
}
