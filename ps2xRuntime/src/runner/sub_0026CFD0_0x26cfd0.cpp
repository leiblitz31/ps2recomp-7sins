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

// Function: sub_0026CFD0
// Address: 0x26cfd0 - 0x26d840
void sub_0026CFD0_0x26cfd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026CFD0_0x26cfd0");
#endif

    switch (ctx->pc) {
        case 0x26cfd0u: goto label_26cfd0;
        case 0x26cfd4u: goto label_26cfd4;
        case 0x26cfd8u: goto label_26cfd8;
        case 0x26cfdcu: goto label_26cfdc;
        case 0x26cfe0u: goto label_26cfe0;
        case 0x26cfe4u: goto label_26cfe4;
        case 0x26cfe8u: goto label_26cfe8;
        case 0x26cfecu: goto label_26cfec;
        case 0x26cff0u: goto label_26cff0;
        case 0x26cff4u: goto label_26cff4;
        case 0x26cff8u: goto label_26cff8;
        case 0x26cffcu: goto label_26cffc;
        case 0x26d000u: goto label_26d000;
        case 0x26d004u: goto label_26d004;
        case 0x26d008u: goto label_26d008;
        case 0x26d00cu: goto label_26d00c;
        case 0x26d010u: goto label_26d010;
        case 0x26d014u: goto label_26d014;
        case 0x26d018u: goto label_26d018;
        case 0x26d01cu: goto label_26d01c;
        case 0x26d020u: goto label_26d020;
        case 0x26d024u: goto label_26d024;
        case 0x26d028u: goto label_26d028;
        case 0x26d02cu: goto label_26d02c;
        case 0x26d030u: goto label_26d030;
        case 0x26d034u: goto label_26d034;
        case 0x26d038u: goto label_26d038;
        case 0x26d03cu: goto label_26d03c;
        case 0x26d040u: goto label_26d040;
        case 0x26d044u: goto label_26d044;
        case 0x26d048u: goto label_26d048;
        case 0x26d04cu: goto label_26d04c;
        case 0x26d050u: goto label_26d050;
        case 0x26d054u: goto label_26d054;
        case 0x26d058u: goto label_26d058;
        case 0x26d05cu: goto label_26d05c;
        case 0x26d060u: goto label_26d060;
        case 0x26d064u: goto label_26d064;
        case 0x26d068u: goto label_26d068;
        case 0x26d06cu: goto label_26d06c;
        case 0x26d070u: goto label_26d070;
        case 0x26d074u: goto label_26d074;
        case 0x26d078u: goto label_26d078;
        case 0x26d07cu: goto label_26d07c;
        case 0x26d080u: goto label_26d080;
        case 0x26d084u: goto label_26d084;
        case 0x26d088u: goto label_26d088;
        case 0x26d08cu: goto label_26d08c;
        case 0x26d090u: goto label_26d090;
        case 0x26d094u: goto label_26d094;
        case 0x26d098u: goto label_26d098;
        case 0x26d09cu: goto label_26d09c;
        case 0x26d0a0u: goto label_26d0a0;
        case 0x26d0a4u: goto label_26d0a4;
        case 0x26d0a8u: goto label_26d0a8;
        case 0x26d0acu: goto label_26d0ac;
        case 0x26d0b0u: goto label_26d0b0;
        case 0x26d0b4u: goto label_26d0b4;
        case 0x26d0b8u: goto label_26d0b8;
        case 0x26d0bcu: goto label_26d0bc;
        case 0x26d0c0u: goto label_26d0c0;
        case 0x26d0c4u: goto label_26d0c4;
        case 0x26d0c8u: goto label_26d0c8;
        case 0x26d0ccu: goto label_26d0cc;
        case 0x26d0d0u: goto label_26d0d0;
        case 0x26d0d4u: goto label_26d0d4;
        case 0x26d0d8u: goto label_26d0d8;
        case 0x26d0dcu: goto label_26d0dc;
        case 0x26d0e0u: goto label_26d0e0;
        case 0x26d0e4u: goto label_26d0e4;
        case 0x26d0e8u: goto label_26d0e8;
        case 0x26d0ecu: goto label_26d0ec;
        case 0x26d0f0u: goto label_26d0f0;
        case 0x26d0f4u: goto label_26d0f4;
        case 0x26d0f8u: goto label_26d0f8;
        case 0x26d0fcu: goto label_26d0fc;
        case 0x26d100u: goto label_26d100;
        case 0x26d104u: goto label_26d104;
        case 0x26d108u: goto label_26d108;
        case 0x26d10cu: goto label_26d10c;
        case 0x26d110u: goto label_26d110;
        case 0x26d114u: goto label_26d114;
        case 0x26d118u: goto label_26d118;
        case 0x26d11cu: goto label_26d11c;
        case 0x26d120u: goto label_26d120;
        case 0x26d124u: goto label_26d124;
        case 0x26d128u: goto label_26d128;
        case 0x26d12cu: goto label_26d12c;
        case 0x26d130u: goto label_26d130;
        case 0x26d134u: goto label_26d134;
        case 0x26d138u: goto label_26d138;
        case 0x26d13cu: goto label_26d13c;
        case 0x26d140u: goto label_26d140;
        case 0x26d144u: goto label_26d144;
        case 0x26d148u: goto label_26d148;
        case 0x26d14cu: goto label_26d14c;
        case 0x26d150u: goto label_26d150;
        case 0x26d154u: goto label_26d154;
        case 0x26d158u: goto label_26d158;
        case 0x26d15cu: goto label_26d15c;
        case 0x26d160u: goto label_26d160;
        case 0x26d164u: goto label_26d164;
        case 0x26d168u: goto label_26d168;
        case 0x26d16cu: goto label_26d16c;
        case 0x26d170u: goto label_26d170;
        case 0x26d174u: goto label_26d174;
        case 0x26d178u: goto label_26d178;
        case 0x26d17cu: goto label_26d17c;
        case 0x26d180u: goto label_26d180;
        case 0x26d184u: goto label_26d184;
        case 0x26d188u: goto label_26d188;
        case 0x26d18cu: goto label_26d18c;
        case 0x26d190u: goto label_26d190;
        case 0x26d194u: goto label_26d194;
        case 0x26d198u: goto label_26d198;
        case 0x26d19cu: goto label_26d19c;
        case 0x26d1a0u: goto label_26d1a0;
        case 0x26d1a4u: goto label_26d1a4;
        case 0x26d1a8u: goto label_26d1a8;
        case 0x26d1acu: goto label_26d1ac;
        case 0x26d1b0u: goto label_26d1b0;
        case 0x26d1b4u: goto label_26d1b4;
        case 0x26d1b8u: goto label_26d1b8;
        case 0x26d1bcu: goto label_26d1bc;
        case 0x26d1c0u: goto label_26d1c0;
        case 0x26d1c4u: goto label_26d1c4;
        case 0x26d1c8u: goto label_26d1c8;
        case 0x26d1ccu: goto label_26d1cc;
        case 0x26d1d0u: goto label_26d1d0;
        case 0x26d1d4u: goto label_26d1d4;
        case 0x26d1d8u: goto label_26d1d8;
        case 0x26d1dcu: goto label_26d1dc;
        case 0x26d1e0u: goto label_26d1e0;
        case 0x26d1e4u: goto label_26d1e4;
        case 0x26d1e8u: goto label_26d1e8;
        case 0x26d1ecu: goto label_26d1ec;
        case 0x26d1f0u: goto label_26d1f0;
        case 0x26d1f4u: goto label_26d1f4;
        case 0x26d1f8u: goto label_26d1f8;
        case 0x26d1fcu: goto label_26d1fc;
        case 0x26d200u: goto label_26d200;
        case 0x26d204u: goto label_26d204;
        case 0x26d208u: goto label_26d208;
        case 0x26d20cu: goto label_26d20c;
        case 0x26d210u: goto label_26d210;
        case 0x26d214u: goto label_26d214;
        case 0x26d218u: goto label_26d218;
        case 0x26d21cu: goto label_26d21c;
        case 0x26d220u: goto label_26d220;
        case 0x26d224u: goto label_26d224;
        case 0x26d228u: goto label_26d228;
        case 0x26d22cu: goto label_26d22c;
        case 0x26d230u: goto label_26d230;
        case 0x26d234u: goto label_26d234;
        case 0x26d238u: goto label_26d238;
        case 0x26d23cu: goto label_26d23c;
        case 0x26d240u: goto label_26d240;
        case 0x26d244u: goto label_26d244;
        case 0x26d248u: goto label_26d248;
        case 0x26d24cu: goto label_26d24c;
        case 0x26d250u: goto label_26d250;
        case 0x26d254u: goto label_26d254;
        case 0x26d258u: goto label_26d258;
        case 0x26d25cu: goto label_26d25c;
        case 0x26d260u: goto label_26d260;
        case 0x26d264u: goto label_26d264;
        case 0x26d268u: goto label_26d268;
        case 0x26d26cu: goto label_26d26c;
        case 0x26d270u: goto label_26d270;
        case 0x26d274u: goto label_26d274;
        case 0x26d278u: goto label_26d278;
        case 0x26d27cu: goto label_26d27c;
        case 0x26d280u: goto label_26d280;
        case 0x26d284u: goto label_26d284;
        case 0x26d288u: goto label_26d288;
        case 0x26d28cu: goto label_26d28c;
        case 0x26d290u: goto label_26d290;
        case 0x26d294u: goto label_26d294;
        case 0x26d298u: goto label_26d298;
        case 0x26d29cu: goto label_26d29c;
        case 0x26d2a0u: goto label_26d2a0;
        case 0x26d2a4u: goto label_26d2a4;
        case 0x26d2a8u: goto label_26d2a8;
        case 0x26d2acu: goto label_26d2ac;
        case 0x26d2b0u: goto label_26d2b0;
        case 0x26d2b4u: goto label_26d2b4;
        case 0x26d2b8u: goto label_26d2b8;
        case 0x26d2bcu: goto label_26d2bc;
        case 0x26d2c0u: goto label_26d2c0;
        case 0x26d2c4u: goto label_26d2c4;
        case 0x26d2c8u: goto label_26d2c8;
        case 0x26d2ccu: goto label_26d2cc;
        case 0x26d2d0u: goto label_26d2d0;
        case 0x26d2d4u: goto label_26d2d4;
        case 0x26d2d8u: goto label_26d2d8;
        case 0x26d2dcu: goto label_26d2dc;
        case 0x26d2e0u: goto label_26d2e0;
        case 0x26d2e4u: goto label_26d2e4;
        case 0x26d2e8u: goto label_26d2e8;
        case 0x26d2ecu: goto label_26d2ec;
        case 0x26d2f0u: goto label_26d2f0;
        case 0x26d2f4u: goto label_26d2f4;
        case 0x26d2f8u: goto label_26d2f8;
        case 0x26d2fcu: goto label_26d2fc;
        case 0x26d300u: goto label_26d300;
        case 0x26d304u: goto label_26d304;
        case 0x26d308u: goto label_26d308;
        case 0x26d30cu: goto label_26d30c;
        case 0x26d310u: goto label_26d310;
        case 0x26d314u: goto label_26d314;
        case 0x26d318u: goto label_26d318;
        case 0x26d31cu: goto label_26d31c;
        case 0x26d320u: goto label_26d320;
        case 0x26d324u: goto label_26d324;
        case 0x26d328u: goto label_26d328;
        case 0x26d32cu: goto label_26d32c;
        case 0x26d330u: goto label_26d330;
        case 0x26d334u: goto label_26d334;
        case 0x26d338u: goto label_26d338;
        case 0x26d33cu: goto label_26d33c;
        case 0x26d340u: goto label_26d340;
        case 0x26d344u: goto label_26d344;
        case 0x26d348u: goto label_26d348;
        case 0x26d34cu: goto label_26d34c;
        case 0x26d350u: goto label_26d350;
        case 0x26d354u: goto label_26d354;
        case 0x26d358u: goto label_26d358;
        case 0x26d35cu: goto label_26d35c;
        case 0x26d360u: goto label_26d360;
        case 0x26d364u: goto label_26d364;
        case 0x26d368u: goto label_26d368;
        case 0x26d36cu: goto label_26d36c;
        case 0x26d370u: goto label_26d370;
        case 0x26d374u: goto label_26d374;
        case 0x26d378u: goto label_26d378;
        case 0x26d37cu: goto label_26d37c;
        case 0x26d380u: goto label_26d380;
        case 0x26d384u: goto label_26d384;
        case 0x26d388u: goto label_26d388;
        case 0x26d38cu: goto label_26d38c;
        case 0x26d390u: goto label_26d390;
        case 0x26d394u: goto label_26d394;
        case 0x26d398u: goto label_26d398;
        case 0x26d39cu: goto label_26d39c;
        case 0x26d3a0u: goto label_26d3a0;
        case 0x26d3a4u: goto label_26d3a4;
        case 0x26d3a8u: goto label_26d3a8;
        case 0x26d3acu: goto label_26d3ac;
        case 0x26d3b0u: goto label_26d3b0;
        case 0x26d3b4u: goto label_26d3b4;
        case 0x26d3b8u: goto label_26d3b8;
        case 0x26d3bcu: goto label_26d3bc;
        case 0x26d3c0u: goto label_26d3c0;
        case 0x26d3c4u: goto label_26d3c4;
        case 0x26d3c8u: goto label_26d3c8;
        case 0x26d3ccu: goto label_26d3cc;
        case 0x26d3d0u: goto label_26d3d0;
        case 0x26d3d4u: goto label_26d3d4;
        case 0x26d3d8u: goto label_26d3d8;
        case 0x26d3dcu: goto label_26d3dc;
        case 0x26d3e0u: goto label_26d3e0;
        case 0x26d3e4u: goto label_26d3e4;
        case 0x26d3e8u: goto label_26d3e8;
        case 0x26d3ecu: goto label_26d3ec;
        case 0x26d3f0u: goto label_26d3f0;
        case 0x26d3f4u: goto label_26d3f4;
        case 0x26d3f8u: goto label_26d3f8;
        case 0x26d3fcu: goto label_26d3fc;
        case 0x26d400u: goto label_26d400;
        case 0x26d404u: goto label_26d404;
        case 0x26d408u: goto label_26d408;
        case 0x26d40cu: goto label_26d40c;
        case 0x26d410u: goto label_26d410;
        case 0x26d414u: goto label_26d414;
        case 0x26d418u: goto label_26d418;
        case 0x26d41cu: goto label_26d41c;
        case 0x26d420u: goto label_26d420;
        case 0x26d424u: goto label_26d424;
        case 0x26d428u: goto label_26d428;
        case 0x26d42cu: goto label_26d42c;
        case 0x26d430u: goto label_26d430;
        case 0x26d434u: goto label_26d434;
        case 0x26d438u: goto label_26d438;
        case 0x26d43cu: goto label_26d43c;
        case 0x26d440u: goto label_26d440;
        case 0x26d444u: goto label_26d444;
        case 0x26d448u: goto label_26d448;
        case 0x26d44cu: goto label_26d44c;
        case 0x26d450u: goto label_26d450;
        case 0x26d454u: goto label_26d454;
        case 0x26d458u: goto label_26d458;
        case 0x26d45cu: goto label_26d45c;
        case 0x26d460u: goto label_26d460;
        case 0x26d464u: goto label_26d464;
        case 0x26d468u: goto label_26d468;
        case 0x26d46cu: goto label_26d46c;
        case 0x26d470u: goto label_26d470;
        case 0x26d474u: goto label_26d474;
        case 0x26d478u: goto label_26d478;
        case 0x26d47cu: goto label_26d47c;
        case 0x26d480u: goto label_26d480;
        case 0x26d484u: goto label_26d484;
        case 0x26d488u: goto label_26d488;
        case 0x26d48cu: goto label_26d48c;
        case 0x26d490u: goto label_26d490;
        case 0x26d494u: goto label_26d494;
        case 0x26d498u: goto label_26d498;
        case 0x26d49cu: goto label_26d49c;
        case 0x26d4a0u: goto label_26d4a0;
        case 0x26d4a4u: goto label_26d4a4;
        case 0x26d4a8u: goto label_26d4a8;
        case 0x26d4acu: goto label_26d4ac;
        case 0x26d4b0u: goto label_26d4b0;
        case 0x26d4b4u: goto label_26d4b4;
        case 0x26d4b8u: goto label_26d4b8;
        case 0x26d4bcu: goto label_26d4bc;
        case 0x26d4c0u: goto label_26d4c0;
        case 0x26d4c4u: goto label_26d4c4;
        case 0x26d4c8u: goto label_26d4c8;
        case 0x26d4ccu: goto label_26d4cc;
        case 0x26d4d0u: goto label_26d4d0;
        case 0x26d4d4u: goto label_26d4d4;
        case 0x26d4d8u: goto label_26d4d8;
        case 0x26d4dcu: goto label_26d4dc;
        case 0x26d4e0u: goto label_26d4e0;
        case 0x26d4e4u: goto label_26d4e4;
        case 0x26d4e8u: goto label_26d4e8;
        case 0x26d4ecu: goto label_26d4ec;
        case 0x26d4f0u: goto label_26d4f0;
        case 0x26d4f4u: goto label_26d4f4;
        case 0x26d4f8u: goto label_26d4f8;
        case 0x26d4fcu: goto label_26d4fc;
        case 0x26d500u: goto label_26d500;
        case 0x26d504u: goto label_26d504;
        case 0x26d508u: goto label_26d508;
        case 0x26d50cu: goto label_26d50c;
        case 0x26d510u: goto label_26d510;
        case 0x26d514u: goto label_26d514;
        case 0x26d518u: goto label_26d518;
        case 0x26d51cu: goto label_26d51c;
        case 0x26d520u: goto label_26d520;
        case 0x26d524u: goto label_26d524;
        case 0x26d528u: goto label_26d528;
        case 0x26d52cu: goto label_26d52c;
        case 0x26d530u: goto label_26d530;
        case 0x26d534u: goto label_26d534;
        case 0x26d538u: goto label_26d538;
        case 0x26d53cu: goto label_26d53c;
        case 0x26d540u: goto label_26d540;
        case 0x26d544u: goto label_26d544;
        case 0x26d548u: goto label_26d548;
        case 0x26d54cu: goto label_26d54c;
        case 0x26d550u: goto label_26d550;
        case 0x26d554u: goto label_26d554;
        case 0x26d558u: goto label_26d558;
        case 0x26d55cu: goto label_26d55c;
        case 0x26d560u: goto label_26d560;
        case 0x26d564u: goto label_26d564;
        case 0x26d568u: goto label_26d568;
        case 0x26d56cu: goto label_26d56c;
        case 0x26d570u: goto label_26d570;
        case 0x26d574u: goto label_26d574;
        case 0x26d578u: goto label_26d578;
        case 0x26d57cu: goto label_26d57c;
        case 0x26d580u: goto label_26d580;
        case 0x26d584u: goto label_26d584;
        case 0x26d588u: goto label_26d588;
        case 0x26d58cu: goto label_26d58c;
        case 0x26d590u: goto label_26d590;
        case 0x26d594u: goto label_26d594;
        case 0x26d598u: goto label_26d598;
        case 0x26d59cu: goto label_26d59c;
        case 0x26d5a0u: goto label_26d5a0;
        case 0x26d5a4u: goto label_26d5a4;
        case 0x26d5a8u: goto label_26d5a8;
        case 0x26d5acu: goto label_26d5ac;
        case 0x26d5b0u: goto label_26d5b0;
        case 0x26d5b4u: goto label_26d5b4;
        case 0x26d5b8u: goto label_26d5b8;
        case 0x26d5bcu: goto label_26d5bc;
        case 0x26d5c0u: goto label_26d5c0;
        case 0x26d5c4u: goto label_26d5c4;
        case 0x26d5c8u: goto label_26d5c8;
        case 0x26d5ccu: goto label_26d5cc;
        case 0x26d5d0u: goto label_26d5d0;
        case 0x26d5d4u: goto label_26d5d4;
        case 0x26d5d8u: goto label_26d5d8;
        case 0x26d5dcu: goto label_26d5dc;
        case 0x26d5e0u: goto label_26d5e0;
        case 0x26d5e4u: goto label_26d5e4;
        case 0x26d5e8u: goto label_26d5e8;
        case 0x26d5ecu: goto label_26d5ec;
        case 0x26d5f0u: goto label_26d5f0;
        case 0x26d5f4u: goto label_26d5f4;
        case 0x26d5f8u: goto label_26d5f8;
        case 0x26d5fcu: goto label_26d5fc;
        case 0x26d600u: goto label_26d600;
        case 0x26d604u: goto label_26d604;
        case 0x26d608u: goto label_26d608;
        case 0x26d60cu: goto label_26d60c;
        case 0x26d610u: goto label_26d610;
        case 0x26d614u: goto label_26d614;
        case 0x26d618u: goto label_26d618;
        case 0x26d61cu: goto label_26d61c;
        case 0x26d620u: goto label_26d620;
        case 0x26d624u: goto label_26d624;
        case 0x26d628u: goto label_26d628;
        case 0x26d62cu: goto label_26d62c;
        case 0x26d630u: goto label_26d630;
        case 0x26d634u: goto label_26d634;
        case 0x26d638u: goto label_26d638;
        case 0x26d63cu: goto label_26d63c;
        case 0x26d640u: goto label_26d640;
        case 0x26d644u: goto label_26d644;
        case 0x26d648u: goto label_26d648;
        case 0x26d64cu: goto label_26d64c;
        case 0x26d650u: goto label_26d650;
        case 0x26d654u: goto label_26d654;
        case 0x26d658u: goto label_26d658;
        case 0x26d65cu: goto label_26d65c;
        case 0x26d660u: goto label_26d660;
        case 0x26d664u: goto label_26d664;
        case 0x26d668u: goto label_26d668;
        case 0x26d66cu: goto label_26d66c;
        case 0x26d670u: goto label_26d670;
        case 0x26d674u: goto label_26d674;
        case 0x26d678u: goto label_26d678;
        case 0x26d67cu: goto label_26d67c;
        case 0x26d680u: goto label_26d680;
        case 0x26d684u: goto label_26d684;
        case 0x26d688u: goto label_26d688;
        case 0x26d68cu: goto label_26d68c;
        case 0x26d690u: goto label_26d690;
        case 0x26d694u: goto label_26d694;
        case 0x26d698u: goto label_26d698;
        case 0x26d69cu: goto label_26d69c;
        case 0x26d6a0u: goto label_26d6a0;
        case 0x26d6a4u: goto label_26d6a4;
        case 0x26d6a8u: goto label_26d6a8;
        case 0x26d6acu: goto label_26d6ac;
        case 0x26d6b0u: goto label_26d6b0;
        case 0x26d6b4u: goto label_26d6b4;
        case 0x26d6b8u: goto label_26d6b8;
        case 0x26d6bcu: goto label_26d6bc;
        case 0x26d6c0u: goto label_26d6c0;
        case 0x26d6c4u: goto label_26d6c4;
        case 0x26d6c8u: goto label_26d6c8;
        case 0x26d6ccu: goto label_26d6cc;
        case 0x26d6d0u: goto label_26d6d0;
        case 0x26d6d4u: goto label_26d6d4;
        case 0x26d6d8u: goto label_26d6d8;
        case 0x26d6dcu: goto label_26d6dc;
        case 0x26d6e0u: goto label_26d6e0;
        case 0x26d6e4u: goto label_26d6e4;
        case 0x26d6e8u: goto label_26d6e8;
        case 0x26d6ecu: goto label_26d6ec;
        case 0x26d6f0u: goto label_26d6f0;
        case 0x26d6f4u: goto label_26d6f4;
        case 0x26d6f8u: goto label_26d6f8;
        case 0x26d6fcu: goto label_26d6fc;
        case 0x26d700u: goto label_26d700;
        case 0x26d704u: goto label_26d704;
        case 0x26d708u: goto label_26d708;
        case 0x26d70cu: goto label_26d70c;
        case 0x26d710u: goto label_26d710;
        case 0x26d714u: goto label_26d714;
        case 0x26d718u: goto label_26d718;
        case 0x26d71cu: goto label_26d71c;
        case 0x26d720u: goto label_26d720;
        case 0x26d724u: goto label_26d724;
        case 0x26d728u: goto label_26d728;
        case 0x26d72cu: goto label_26d72c;
        case 0x26d730u: goto label_26d730;
        case 0x26d734u: goto label_26d734;
        case 0x26d738u: goto label_26d738;
        case 0x26d73cu: goto label_26d73c;
        case 0x26d740u: goto label_26d740;
        case 0x26d744u: goto label_26d744;
        case 0x26d748u: goto label_26d748;
        case 0x26d74cu: goto label_26d74c;
        case 0x26d750u: goto label_26d750;
        case 0x26d754u: goto label_26d754;
        case 0x26d758u: goto label_26d758;
        case 0x26d75cu: goto label_26d75c;
        case 0x26d760u: goto label_26d760;
        case 0x26d764u: goto label_26d764;
        case 0x26d768u: goto label_26d768;
        case 0x26d76cu: goto label_26d76c;
        case 0x26d770u: goto label_26d770;
        case 0x26d774u: goto label_26d774;
        case 0x26d778u: goto label_26d778;
        case 0x26d77cu: goto label_26d77c;
        case 0x26d780u: goto label_26d780;
        case 0x26d784u: goto label_26d784;
        case 0x26d788u: goto label_26d788;
        case 0x26d78cu: goto label_26d78c;
        case 0x26d790u: goto label_26d790;
        case 0x26d794u: goto label_26d794;
        case 0x26d798u: goto label_26d798;
        case 0x26d79cu: goto label_26d79c;
        case 0x26d7a0u: goto label_26d7a0;
        case 0x26d7a4u: goto label_26d7a4;
        case 0x26d7a8u: goto label_26d7a8;
        case 0x26d7acu: goto label_26d7ac;
        case 0x26d7b0u: goto label_26d7b0;
        case 0x26d7b4u: goto label_26d7b4;
        case 0x26d7b8u: goto label_26d7b8;
        case 0x26d7bcu: goto label_26d7bc;
        case 0x26d7c0u: goto label_26d7c0;
        case 0x26d7c4u: goto label_26d7c4;
        case 0x26d7c8u: goto label_26d7c8;
        case 0x26d7ccu: goto label_26d7cc;
        case 0x26d7d0u: goto label_26d7d0;
        case 0x26d7d4u: goto label_26d7d4;
        case 0x26d7d8u: goto label_26d7d8;
        case 0x26d7dcu: goto label_26d7dc;
        case 0x26d7e0u: goto label_26d7e0;
        case 0x26d7e4u: goto label_26d7e4;
        case 0x26d7e8u: goto label_26d7e8;
        case 0x26d7ecu: goto label_26d7ec;
        case 0x26d7f0u: goto label_26d7f0;
        case 0x26d7f4u: goto label_26d7f4;
        case 0x26d7f8u: goto label_26d7f8;
        case 0x26d7fcu: goto label_26d7fc;
        case 0x26d800u: goto label_26d800;
        case 0x26d804u: goto label_26d804;
        case 0x26d808u: goto label_26d808;
        case 0x26d80cu: goto label_26d80c;
        case 0x26d810u: goto label_26d810;
        case 0x26d814u: goto label_26d814;
        case 0x26d818u: goto label_26d818;
        case 0x26d81cu: goto label_26d81c;
        case 0x26d820u: goto label_26d820;
        case 0x26d824u: goto label_26d824;
        case 0x26d828u: goto label_26d828;
        case 0x26d82cu: goto label_26d82c;
        case 0x26d830u: goto label_26d830;
        case 0x26d834u: goto label_26d834;
        case 0x26d838u: goto label_26d838;
        case 0x26d83cu: goto label_26d83c;
        default: break;
    }

    ctx->pc = 0x26cfd0u;

label_26cfd0:
    // 0x26cfd0: 0x27bdfde0  addiu       $sp, $sp, -0x220
    ctx->pc = 0x26cfd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966752));
label_26cfd4:
    // 0x26cfd4: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x26cfd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_26cfd8:
    // 0x26cfd8: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x26cfd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_26cfdc:
    // 0x26cfdc: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x26cfdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_26cfe0:
    // 0x26cfe0: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x26cfe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_26cfe4:
    // 0x26cfe4: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x26cfe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_26cfe8:
    // 0x26cfe8: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x26cfe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_26cfec:
    // 0x26cfec: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x26cfecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_26cff0:
    // 0x26cff0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x26cff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_26cff4:
    // 0x26cff4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x26cff4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_26cff8:
    // 0x26cff8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x26cff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_26cffc:
    // 0x26cffc: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x26cffcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_26d000:
    // 0x26d000: 0xafa401d0  sw          $a0, 0x1D0($sp)
    ctx->pc = 0x26d000u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 464), GPR_U32(ctx, 4));
label_26d004:
    // 0x26d004: 0xafa501e0  sw          $a1, 0x1E0($sp)
    ctx->pc = 0x26d004u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 480), GPR_U32(ctx, 5));
label_26d008:
    // 0x26d008: 0xafa601f0  sw          $a2, 0x1F0($sp)
    ctx->pc = 0x26d008u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 6));
label_26d00c:
    // 0x26d00c: 0xafa70200  sw          $a3, 0x200($sp)
    ctx->pc = 0x26d00cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 512), GPR_U32(ctx, 7));
label_26d010:
    // 0x26d010: 0xa3a80210  sb          $t0, 0x210($sp)
    ctx->pc = 0x26d010u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 528), (uint8_t)GPR_U32(ctx, 8));
label_26d014:
    // 0x26d014: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x26d014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_26d018:
    // 0x26d018: 0x8fa20200  lw          $v0, 0x200($sp)
    ctx->pc = 0x26d018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
label_26d01c:
    // 0x26d01c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x26d01cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_26d020:
    // 0x26d020: 0x27a40178  addiu       $a0, $sp, 0x178
    ctx->pc = 0x26d020u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 376));
label_26d024:
    // 0x26d024: 0xc097640  jal         func_25D900
label_26d028:
    if (ctx->pc == 0x26D028u) {
        ctx->pc = 0x26D02Cu;
        goto label_26d02c;
    }
    ctx->pc = 0x26D024u;
    SET_GPR_U32(ctx, 31, 0x26D02Cu);
    ctx->pc = 0x25D900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D900u, 0x26D024u, 0x26D02Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D02Cu;
label_26d02c:
    // 0x26d02c: 0x8fa201d0  lw          $v0, 0x1D0($sp)
    ctx->pc = 0x26d02cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
label_26d030:
    // 0x26d030: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x26d030u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_26d034:
    // 0x26d034: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x26d034u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_26d038:
    // 0x26d038: 0xc085538  jal         func_2154E0
label_26d03c:
    if (ctx->pc == 0x26D03Cu) {
        ctx->pc = 0x26D040u;
        goto label_26d040;
    }
    ctx->pc = 0x26D038u;
    SET_GPR_U32(ctx, 31, 0x26D040u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x26D038u, 0x26D040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D040u;
label_26d040:
    // 0x26d040: 0xafa201c4  sw          $v0, 0x1C4($sp)
    ctx->pc = 0x26d040u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 452), GPR_U32(ctx, 2));
label_26d044:
    // 0x26d044: 0x8fa201c4  lw          $v0, 0x1C4($sp)
    ctx->pc = 0x26d044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 452)));
label_26d048:
    // 0x26d048: 0x10020084  beq         $zero, $v0, . + 4 + (0x84 << 2)
label_26d04c:
    if (ctx->pc == 0x26D04Cu) {
        ctx->pc = 0x26D050u;
        goto label_26d050;
    }
    ctx->pc = 0x26D048u;
    {
        const bool branch_taken_0x26d048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x26d048) {
            ctx->pc = 0x26D25Cu;
            goto label_26d25c;
        }
    }
    ctx->pc = 0x26D050u;
label_26d050:
    // 0x26d050: 0x8fa401f0  lw          $a0, 0x1F0($sp)
    ctx->pc = 0x26d050u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_26d054:
    // 0x26d054: 0xc0968a8  jal         func_25A2A0
label_26d058:
    if (ctx->pc == 0x26D058u) {
        ctx->pc = 0x26D05Cu;
        goto label_26d05c;
    }
    ctx->pc = 0x26D054u;
    SET_GPR_U32(ctx, 31, 0x26D05Cu);
    ctx->pc = 0x25A2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A2A0u, 0x26D054u, 0x26D05Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D05Cu;
label_26d05c:
    // 0x26d05c: 0x8fa301d0  lw          $v1, 0x1D0($sp)
    ctx->pc = 0x26d05cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
label_26d060:
    // 0x26d060: 0x8c63002c  lw          $v1, 0x2C($v1)
    ctx->pc = 0x26d060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_26d064:
    // 0x26d064: 0x14430010  bne         $v0, $v1, . + 4 + (0x10 << 2)
label_26d068:
    if (ctx->pc == 0x26D068u) {
        ctx->pc = 0x26D06Cu;
        goto label_26d06c;
    }
    ctx->pc = 0x26D064u;
    {
        const bool branch_taken_0x26d064 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x26d064) {
            ctx->pc = 0x26D0A8u;
            goto label_26d0a8;
        }
    }
    ctx->pc = 0x26D06Cu;
label_26d06c:
    // 0x26d06c: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x26d06cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
label_26d070:
    // 0x26d070: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x26d070u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_26d074:
    // 0x26d074: 0x2785a108  addiu       $a1, $gp, -0x5EF8
    ctx->pc = 0x26d074u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294942984));
label_26d078:
    // 0x26d078: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x26d078u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_26d07c:
    // 0x26d07c: 0xc0bc66e  jal         func_2F19B8
label_26d080:
    if (ctx->pc == 0x26D080u) {
        ctx->pc = 0x26D084u;
        goto label_26d084;
    }
    ctx->pc = 0x26D07Cu;
    SET_GPR_U32(ctx, 31, 0x26D084u);
    ctx->pc = 0x2F19B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F19B8u, 0x26D07Cu, 0x26D084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D084u;
label_26d084:
    // 0x26d084: 0x14400075  bnez        $v0, . + 4 + (0x75 << 2)
label_26d088:
    if (ctx->pc == 0x26D088u) {
        ctx->pc = 0x26D08Cu;
        goto label_26d08c;
    }
    ctx->pc = 0x26D084u;
    {
        const bool branch_taken_0x26d084 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26d084) {
            ctx->pc = 0x26D25Cu;
            goto label_26d25c;
        }
    }
    ctx->pc = 0x26D08Cu;
label_26d08c:
    // 0x26d08c: 0x8fa401f0  lw          $a0, 0x1F0($sp)
    ctx->pc = 0x26d08cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_26d090:
    // 0x26d090: 0xc096ea4  jal         func_25BA90
label_26d094:
    if (ctx->pc == 0x26D094u) {
        ctx->pc = 0x26D098u;
        goto label_26d098;
    }
    ctx->pc = 0x26D090u;
    SET_GPR_U32(ctx, 31, 0x26D098u);
    ctx->pc = 0x25BA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BA90u, 0x26D090u, 0x26D098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D098u;
label_26d098:
    // 0x26d098: 0x8fa30200  lw          $v1, 0x200($sp)
    ctx->pc = 0x26d098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
label_26d09c:
    // 0x26d09c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x26d09cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_26d0a0:
    // 0x26d0a0: 0x1000006e  b           . + 4 + (0x6E << 2)
label_26d0a4:
    if (ctx->pc == 0x26D0A4u) {
        ctx->pc = 0x26D0A8u;
        goto label_26d0a8;
    }
    ctx->pc = 0x26D0A0u;
    {
        const bool branch_taken_0x26d0a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26d0a0) {
            ctx->pc = 0x26D25Cu;
            goto label_26d25c;
        }
    }
    ctx->pc = 0x26D0A8u;
label_26d0a8:
    // 0x26d0a8: 0x8fa201f0  lw          $v0, 0x1F0($sp)
    ctx->pc = 0x26d0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_26d0ac:
    // 0x26d0ac: 0x8fa401c4  lw          $a0, 0x1C4($sp)
    ctx->pc = 0x26d0acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 452)));
label_26d0b0:
    // 0x26d0b0: 0x27a50178  addiu       $a1, $sp, 0x178
    ctx->pc = 0x26d0b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 376));
label_26d0b4:
    // 0x26d0b4: 0x8c46002c  lw          $a2, 0x2C($v0)
    ctx->pc = 0x26d0b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_26d0b8:
    // 0x26d0b8: 0x8fa701e0  lw          $a3, 0x1E0($sp)
    ctx->pc = 0x26d0b8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
label_26d0bc:
    // 0x26d0bc: 0xc097704  jal         func_25DC10
label_26d0c0:
    if (ctx->pc == 0x26D0C0u) {
        ctx->pc = 0x26D0C4u;
        goto label_26d0c4;
    }
    ctx->pc = 0x26D0BCu;
    SET_GPR_U32(ctx, 31, 0x26D0C4u);
    ctx->pc = 0x25DC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25DC10u, 0x26D0BCu, 0x26D0C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D0C4u;
label_26d0c4:
    // 0x26d0c4: 0x1040005d  beqz        $v0, . + 4 + (0x5D << 2)
label_26d0c8:
    if (ctx->pc == 0x26D0C8u) {
        ctx->pc = 0x26D0CCu;
        goto label_26d0cc;
    }
    ctx->pc = 0x26D0C4u;
    {
        const bool branch_taken_0x26d0c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26d0c4) {
            ctx->pc = 0x26D23Cu;
            goto label_26d23c;
        }
    }
    ctx->pc = 0x26D0CCu;
label_26d0cc:
    // 0x26d0cc: 0x27a40178  addiu       $a0, $sp, 0x178
    ctx->pc = 0x26d0ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 376));
label_26d0d0:
    // 0x26d0d0: 0xc097634  jal         func_25D8D0
label_26d0d4:
    if (ctx->pc == 0x26D0D4u) {
        ctx->pc = 0x26D0D8u;
        goto label_26d0d8;
    }
    ctx->pc = 0x26D0D0u;
    SET_GPR_U32(ctx, 31, 0x26D0D8u);
    ctx->pc = 0x25D8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D8D0u, 0x26D0D0u, 0x26D0D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D0D8u;
label_26d0d8:
    // 0x26d0d8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_26d0dc:
    if (ctx->pc == 0x26D0DCu) {
        ctx->pc = 0x26D0E0u;
        goto label_26d0e0;
    }
    ctx->pc = 0x26D0D8u;
    {
        const bool branch_taken_0x26d0d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26d0d8) {
            ctx->pc = 0x26D100u;
            goto label_26d100;
        }
    }
    ctx->pc = 0x26D0E0u;
label_26d0e0:
    // 0x26d0e0: 0x27a40178  addiu       $a0, $sp, 0x178
    ctx->pc = 0x26d0e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 376));
label_26d0e4:
    // 0x26d0e4: 0xc097620  jal         func_25D880
label_26d0e8:
    if (ctx->pc == 0x26D0E8u) {
        ctx->pc = 0x26D0ECu;
        goto label_26d0ec;
    }
    ctx->pc = 0x26D0E4u;
    SET_GPR_U32(ctx, 31, 0x26D0ECu);
    ctx->pc = 0x25D880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D880u, 0x26D0E4u, 0x26D0ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D0ECu;
label_26d0ec:
    // 0x26d0ec: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x26d0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_26d0f0:
    // 0x26d0f0: 0x8fa20200  lw          $v0, 0x200($sp)
    ctx->pc = 0x26d0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
label_26d0f4:
    // 0x26d0f4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x26d0f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_26d0f8:
    // 0x26d0f8: 0x10000058  b           . + 4 + (0x58 << 2)
label_26d0fc:
    if (ctx->pc == 0x26D0FCu) {
        ctx->pc = 0x26D100u;
        goto label_26d100;
    }
    ctx->pc = 0x26D0F8u;
    {
        const bool branch_taken_0x26d0f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26d0f8) {
            ctx->pc = 0x26D25Cu;
            goto label_26d25c;
        }
    }
    ctx->pc = 0x26D100u;
label_26d100:
    // 0x26d100: 0x93a20210  lbu         $v0, 0x210($sp)
    ctx->pc = 0x26d100u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 528)));
label_26d104:
    // 0x26d104: 0x14400055  bnez        $v0, . + 4 + (0x55 << 2)
label_26d108:
    if (ctx->pc == 0x26D108u) {
        ctx->pc = 0x26D10Cu;
        goto label_26d10c;
    }
    ctx->pc = 0x26D104u;
    {
        const bool branch_taken_0x26d104 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26d104) {
            ctx->pc = 0x26D25Cu;
            goto label_26d25c;
        }
    }
    ctx->pc = 0x26D10Cu;
label_26d10c:
    // 0x26d10c: 0xc090864  jal         func_242190
label_26d110:
    if (ctx->pc == 0x26D110u) {
        ctx->pc = 0x26D114u;
        goto label_26d114;
    }
    ctx->pc = 0x26D10Cu;
    SET_GPR_U32(ctx, 31, 0x26D114u);
    ctx->pc = 0x242190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242190u, 0x26D10Cu, 0x26D114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D114u;
label_26d114:
    // 0x26d114: 0x8fa301f0  lw          $v1, 0x1F0($sp)
    ctx->pc = 0x26d114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_26d118:
    // 0x26d118: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x26d118u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26d11c:
    // 0x26d11c: 0x8c65002c  lw          $a1, 0x2C($v1)
    ctx->pc = 0x26d11cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_26d120:
    // 0x26d120: 0xc090870  jal         func_2421C0
label_26d124:
    if (ctx->pc == 0x26D124u) {
        ctx->pc = 0x26D128u;
        goto label_26d128;
    }
    ctx->pc = 0x26D120u;
    SET_GPR_U32(ctx, 31, 0x26D128u);
    ctx->pc = 0x2421C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2421C0u, 0x26D120u, 0x26D128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D128u;
label_26d128:
    // 0x26d128: 0xafa201c0  sw          $v0, 0x1C0($sp)
    ctx->pc = 0x26d128u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 448), GPR_U32(ctx, 2));
label_26d12c:
    // 0x26d12c: 0x8fa201c0  lw          $v0, 0x1C0($sp)
    ctx->pc = 0x26d12cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
label_26d130:
    // 0x26d130: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_26d134:
    if (ctx->pc == 0x26D134u) {
        ctx->pc = 0x26D138u;
        goto label_26d138;
    }
    ctx->pc = 0x26D130u;
    {
        const bool branch_taken_0x26d130 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26d130) {
            ctx->pc = 0x26D158u;
            goto label_26d158;
        }
    }
    ctx->pc = 0x26D138u;
label_26d138:
    // 0x26d138: 0xa3a001ce  sb          $zero, 0x1CE($sp)
    ctx->pc = 0x26d138u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 462), (uint8_t)GPR_U32(ctx, 0));
label_26d13c:
    // 0x26d13c: 0x27a40178  addiu       $a0, $sp, 0x178
    ctx->pc = 0x26d13cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 376));
label_26d140:
    // 0x26d140: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x26d140u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_26d144:
    // 0x26d144: 0xc097584  jal         func_25D610
label_26d148:
    if (ctx->pc == 0x26D148u) {
        ctx->pc = 0x26D14Cu;
        goto label_26d14c;
    }
    ctx->pc = 0x26D144u;
    SET_GPR_U32(ctx, 31, 0x26D14Cu);
    ctx->pc = 0x25D610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D610u, 0x26D144u, 0x26D14Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D14Cu;
label_26d14c:
    // 0x26d14c: 0x93a201ce  lbu         $v0, 0x1CE($sp)
    ctx->pc = 0x26d14cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 462)));
label_26d150:
    // 0x26d150: 0x100001ac  b           . + 4 + (0x1AC << 2)
label_26d154:
    if (ctx->pc == 0x26D154u) {
        ctx->pc = 0x26D158u;
        goto label_26d158;
    }
    ctx->pc = 0x26D150u;
    {
        const bool branch_taken_0x26d150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26d150) {
            ctx->pc = 0x26D804u;
            goto label_26d804;
        }
    }
    ctx->pc = 0x26D158u;
label_26d158:
    // 0x26d158: 0x8fa201c0  lw          $v0, 0x1C0($sp)
    ctx->pc = 0x26d158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
label_26d15c:
    // 0x26d15c: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x26d15cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_26d160:
    // 0x26d160: 0x24050017  addiu       $a1, $zero, 0x17
    ctx->pc = 0x26d160u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_26d164:
    // 0x26d164: 0xc085538  jal         func_2154E0
label_26d168:
    if (ctx->pc == 0x26D168u) {
        ctx->pc = 0x26D16Cu;
        goto label_26d16c;
    }
    ctx->pc = 0x26D164u;
    SET_GPR_U32(ctx, 31, 0x26D16Cu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x26D164u, 0x26D16Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D16Cu;
label_26d16c:
    // 0x26d16c: 0xafa201bc  sw          $v0, 0x1BC($sp)
    ctx->pc = 0x26d16cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 444), GPR_U32(ctx, 2));
label_26d170:
    // 0x26d170: 0x8fa201f0  lw          $v0, 0x1F0($sp)
    ctx->pc = 0x26d170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_26d174:
    // 0x26d174: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x26d174u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_26d178:
    // 0x26d178: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x26d178u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_26d17c:
    // 0x26d17c: 0xc085538  jal         func_2154E0
label_26d180:
    if (ctx->pc == 0x26D180u) {
        ctx->pc = 0x26D184u;
        goto label_26d184;
    }
    ctx->pc = 0x26D17Cu;
    SET_GPR_U32(ctx, 31, 0x26D184u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x26D17Cu, 0x26D184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D184u;
label_26d184:
    // 0x26d184: 0xafa201b8  sw          $v0, 0x1B8($sp)
    ctx->pc = 0x26d184u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 440), GPR_U32(ctx, 2));
label_26d188:
    // 0x26d188: 0x8fa201d0  lw          $v0, 0x1D0($sp)
    ctx->pc = 0x26d188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
label_26d18c:
    // 0x26d18c: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x26d18cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_26d190:
    // 0x26d190: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x26d190u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_26d194:
    // 0x26d194: 0xc085538  jal         func_2154E0
label_26d198:
    if (ctx->pc == 0x26D198u) {
        ctx->pc = 0x26D19Cu;
        goto label_26d19c;
    }
    ctx->pc = 0x26D194u;
    SET_GPR_U32(ctx, 31, 0x26D19Cu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x26D194u, 0x26D19Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D19Cu;
label_26d19c:
    // 0x26d19c: 0xafa201b4  sw          $v0, 0x1B4($sp)
    ctx->pc = 0x26d19cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 436), GPR_U32(ctx, 2));
label_26d1a0:
    // 0x26d1a0: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x26d1a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_26d1a4:
    // 0x26d1a4: 0x8fa501b8  lw          $a1, 0x1B8($sp)
    ctx->pc = 0x26d1a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 440)));
label_26d1a8:
    // 0x26d1a8: 0xc090f80  jal         func_243E00
label_26d1ac:
    if (ctx->pc == 0x26D1ACu) {
        ctx->pc = 0x26D1B0u;
        goto label_26d1b0;
    }
    ctx->pc = 0x26D1A8u;
    SET_GPR_U32(ctx, 31, 0x26D1B0u);
    ctx->pc = 0x243E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E00u, 0x26D1A8u, 0x26D1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D1B0u;
label_26d1b0:
    // 0x26d1b0: 0x27a30140  addiu       $v1, $sp, 0x140
    ctx->pc = 0x26d1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_26d1b4:
    // 0x26d1b4: 0x27a20168  addiu       $v0, $sp, 0x168
    ctx->pc = 0x26d1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 360));
label_26d1b8:
    // 0x26d1b8: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x26d1b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_26d1bc:
    // 0x26d1bc: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x26d1bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26d1c0:
    // 0x26d1c0: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x26d1c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26d1c4:
    // 0x26d1c4: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x26d1c4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_26d1c8:
    // 0x26d1c8: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x26d1c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_26d1cc:
    // 0x26d1cc: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x26d1ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_26d1d0:
    // 0x26d1d0: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x26d1d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_26d1d4:
    // 0x26d1d4: 0x8fa501b4  lw          $a1, 0x1B4($sp)
    ctx->pc = 0x26d1d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 436)));
label_26d1d8:
    // 0x26d1d8: 0xc090f80  jal         func_243E00
label_26d1dc:
    if (ctx->pc == 0x26D1DCu) {
        ctx->pc = 0x26D1E0u;
        goto label_26d1e0;
    }
    ctx->pc = 0x26D1D8u;
    SET_GPR_U32(ctx, 31, 0x26D1E0u);
    ctx->pc = 0x243E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E00u, 0x26D1D8u, 0x26D1E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D1E0u;
label_26d1e0:
    // 0x26d1e0: 0x27a30130  addiu       $v1, $sp, 0x130
    ctx->pc = 0x26d1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_26d1e4:
    // 0x26d1e4: 0x27a20158  addiu       $v0, $sp, 0x158
    ctx->pc = 0x26d1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 344));
label_26d1e8:
    // 0x26d1e8: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x26d1e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_26d1ec:
    // 0x26d1ec: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x26d1ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26d1f0:
    // 0x26d1f0: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x26d1f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26d1f4:
    // 0x26d1f4: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x26d1f4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_26d1f8:
    // 0x26d1f8: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x26d1f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_26d1fc:
    // 0x26d1fc: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x26d1fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_26d200:
    // 0x26d200: 0x8fa401bc  lw          $a0, 0x1BC($sp)
    ctx->pc = 0x26d200u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 444)));
label_26d204:
    // 0x26d204: 0x27a50168  addiu       $a1, $sp, 0x168
    ctx->pc = 0x26d204u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 360));
label_26d208:
    // 0x26d208: 0x27a60158  addiu       $a2, $sp, 0x158
    ctx->pc = 0x26d208u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 344));
label_26d20c:
    // 0x26d20c: 0xc0b89dc  jal         func_2E2770
label_26d210:
    if (ctx->pc == 0x26D210u) {
        ctx->pc = 0x26D214u;
        goto label_26d214;
    }
    ctx->pc = 0x26D20Cu;
    SET_GPR_U32(ctx, 31, 0x26D214u);
    ctx->pc = 0x2E2770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E2770u, 0x26D20Cu, 0x26D214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D214u;
label_26d214:
    // 0x26d214: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
label_26d218:
    if (ctx->pc == 0x26D218u) {
        ctx->pc = 0x26D21Cu;
        goto label_26d21c;
    }
    ctx->pc = 0x26D214u;
    {
        const bool branch_taken_0x26d214 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26d214) {
            ctx->pc = 0x26D25Cu;
            goto label_26d25c;
        }
    }
    ctx->pc = 0x26D21Cu;
label_26d21c:
    // 0x26d21c: 0xa3a001cd  sb          $zero, 0x1CD($sp)
    ctx->pc = 0x26d21cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 461), (uint8_t)GPR_U32(ctx, 0));
label_26d220:
    // 0x26d220: 0x27a40178  addiu       $a0, $sp, 0x178
    ctx->pc = 0x26d220u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 376));
label_26d224:
    // 0x26d224: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x26d224u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_26d228:
    // 0x26d228: 0xc097584  jal         func_25D610
label_26d22c:
    if (ctx->pc == 0x26D22Cu) {
        ctx->pc = 0x26D230u;
        goto label_26d230;
    }
    ctx->pc = 0x26D228u;
    SET_GPR_U32(ctx, 31, 0x26D230u);
    ctx->pc = 0x25D610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D610u, 0x26D228u, 0x26D230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D230u;
label_26d230:
    // 0x26d230: 0x93a201cd  lbu         $v0, 0x1CD($sp)
    ctx->pc = 0x26d230u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 461)));
label_26d234:
    // 0x26d234: 0x10000173  b           . + 4 + (0x173 << 2)
label_26d238:
    if (ctx->pc == 0x26D238u) {
        ctx->pc = 0x26D23Cu;
        goto label_26d23c;
    }
    ctx->pc = 0x26D234u;
    {
        const bool branch_taken_0x26d234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26d234) {
            ctx->pc = 0x26D804u;
            goto label_26d804;
        }
    }
    ctx->pc = 0x26D23Cu;
label_26d23c:
    // 0x26d23c: 0xa3a001cc  sb          $zero, 0x1CC($sp)
    ctx->pc = 0x26d23cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 460), (uint8_t)GPR_U32(ctx, 0));
label_26d240:
    // 0x26d240: 0x27a40178  addiu       $a0, $sp, 0x178
    ctx->pc = 0x26d240u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 376));
label_26d244:
    // 0x26d244: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x26d244u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_26d248:
    // 0x26d248: 0xc097584  jal         func_25D610
label_26d24c:
    if (ctx->pc == 0x26D24Cu) {
        ctx->pc = 0x26D250u;
        goto label_26d250;
    }
    ctx->pc = 0x26D248u;
    SET_GPR_U32(ctx, 31, 0x26D250u);
    ctx->pc = 0x25D610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D610u, 0x26D248u, 0x26D250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D250u;
label_26d250:
    // 0x26d250: 0x93a201cc  lbu         $v0, 0x1CC($sp)
    ctx->pc = 0x26d250u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 460)));
label_26d254:
    // 0x26d254: 0x1000016b  b           . + 4 + (0x16B << 2)
label_26d258:
    if (ctx->pc == 0x26D258u) {
        ctx->pc = 0x26D25Cu;
        goto label_26d25c;
    }
    ctx->pc = 0x26D254u;
    {
        const bool branch_taken_0x26d254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26d254) {
            ctx->pc = 0x26D804u;
            goto label_26d804;
        }
    }
    ctx->pc = 0x26D25Cu;
label_26d25c:
    // 0x26d25c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26d25cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26d260:
    // 0x26d260: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x26d260u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_26d264:
    // 0x26d264: 0xa3a001cf  sb          $zero, 0x1CF($sp)
    ctx->pc = 0x26d264u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 463), (uint8_t)GPR_U32(ctx, 0));
label_26d268:
    // 0x26d268: 0x8fa401e0  lw          $a0, 0x1E0($sp)
    ctx->pc = 0x26d268u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
label_26d26c:
    // 0x26d26c: 0xc09b618  jal         func_26D860
label_26d270:
    if (ctx->pc == 0x26D270u) {
        ctx->pc = 0x26D274u;
        goto label_26d274;
    }
    ctx->pc = 0x26D26Cu;
    SET_GPR_U32(ctx, 31, 0x26D274u);
    ctx->pc = 0x26D860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26D860u, 0x26D26Cu, 0x26D274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D274u;
label_26d274:
    // 0x26d274: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x26d274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26d278:
    // 0x26d278: 0xc0998dc  jal         func_266370
label_26d27c:
    if (ctx->pc == 0x26D27Cu) {
        ctx->pc = 0x26D280u;
        goto label_26d280;
    }
    ctx->pc = 0x26D278u;
    SET_GPR_U32(ctx, 31, 0x26D280u);
    ctx->pc = 0x266370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266370u, 0x26D278u, 0x26D280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D280u;
label_26d280:
    // 0x26d280: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x26d280u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26d284:
    // 0x26d284: 0x10000036  b           . + 4 + (0x36 << 2)
label_26d288:
    if (ctx->pc == 0x26D288u) {
        ctx->pc = 0x26D28Cu;
        goto label_26d28c;
    }
    ctx->pc = 0x26D284u;
    {
        const bool branch_taken_0x26d284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26d284) {
            ctx->pc = 0x26D360u;
            goto label_26d360;
        }
    }
    ctx->pc = 0x26D28Cu;
label_26d28c:
    // 0x26d28c: 0x8ef30000  lw          $s3, 0x0($s7)
    ctx->pc = 0x26d28cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_26d290:
    // 0x26d290: 0x93a20210  lbu         $v0, 0x210($sp)
    ctx->pc = 0x26d290u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 528)));
label_26d294:
    // 0x26d294: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_26d298:
    if (ctx->pc == 0x26D298u) {
        ctx->pc = 0x26D29Cu;
        goto label_26d29c;
    }
    ctx->pc = 0x26D294u;
    {
        const bool branch_taken_0x26d294 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26d294) {
            ctx->pc = 0x26D2FCu;
            goto label_26d2fc;
        }
    }
    ctx->pc = 0x26D29Cu;
label_26d29c:
    // 0x26d29c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x26d29cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_26d2a0:
    // 0x26d2a0: 0xc09ce4c  jal         func_273930
label_26d2a4:
    if (ctx->pc == 0x26D2A4u) {
        ctx->pc = 0x26D2A8u;
        goto label_26d2a8;
    }
    ctx->pc = 0x26D2A0u;
    SET_GPR_U32(ctx, 31, 0x26D2A8u);
    ctx->pc = 0x273930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x273930u, 0x26D2A0u, 0x26D2A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D2A8u;
label_26d2a8:
    // 0x26d2a8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x26d2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_26d2ac:
    // 0x26d2ac: 0x1043002b  beq         $v0, $v1, . + 4 + (0x2B << 2)
label_26d2b0:
    if (ctx->pc == 0x26D2B0u) {
        ctx->pc = 0x26D2B4u;
        goto label_26d2b4;
    }
    ctx->pc = 0x26D2ACu;
    {
        const bool branch_taken_0x26d2ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x26d2ac) {
            ctx->pc = 0x26D35Cu;
            goto label_26d35c;
        }
    }
    ctx->pc = 0x26D2B4u;
label_26d2b4:
    // 0x26d2b4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x26d2b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_26d2b8:
    // 0x26d2b8: 0xc09ce4c  jal         func_273930
label_26d2bc:
    if (ctx->pc == 0x26D2BCu) {
        ctx->pc = 0x26D2C0u;
        goto label_26d2c0;
    }
    ctx->pc = 0x26D2B8u;
    SET_GPR_U32(ctx, 31, 0x26D2C0u);
    ctx->pc = 0x273930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x273930u, 0x26D2B8u, 0x26D2C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D2C0u;
label_26d2c0:
    // 0x26d2c0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x26d2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_26d2c4:
    // 0x26d2c4: 0x10430025  beq         $v0, $v1, . + 4 + (0x25 << 2)
label_26d2c8:
    if (ctx->pc == 0x26D2C8u) {
        ctx->pc = 0x26D2CCu;
        goto label_26d2cc;
    }
    ctx->pc = 0x26D2C4u;
    {
        const bool branch_taken_0x26d2c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x26d2c4) {
            ctx->pc = 0x26D35Cu;
            goto label_26d35c;
        }
    }
    ctx->pc = 0x26D2CCu;
label_26d2cc:
    // 0x26d2cc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x26d2ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_26d2d0:
    // 0x26d2d0: 0xc09ce4c  jal         func_273930
label_26d2d4:
    if (ctx->pc == 0x26D2D4u) {
        ctx->pc = 0x26D2D8u;
        goto label_26d2d8;
    }
    ctx->pc = 0x26D2D0u;
    SET_GPR_U32(ctx, 31, 0x26D2D8u);
    ctx->pc = 0x273930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x273930u, 0x26D2D0u, 0x26D2D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D2D8u;
label_26d2d8:
    // 0x26d2d8: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x26d2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_26d2dc:
    // 0x26d2dc: 0x1043001f  beq         $v0, $v1, . + 4 + (0x1F << 2)
label_26d2e0:
    if (ctx->pc == 0x26D2E0u) {
        ctx->pc = 0x26D2E4u;
        goto label_26d2e4;
    }
    ctx->pc = 0x26D2DCu;
    {
        const bool branch_taken_0x26d2dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x26d2dc) {
            ctx->pc = 0x26D35Cu;
            goto label_26d35c;
        }
    }
    ctx->pc = 0x26D2E4u;
label_26d2e4:
    // 0x26d2e4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x26d2e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_26d2e8:
    // 0x26d2e8: 0xc09ce4c  jal         func_273930
label_26d2ec:
    if (ctx->pc == 0x26D2ECu) {
        ctx->pc = 0x26D2F0u;
        goto label_26d2f0;
    }
    ctx->pc = 0x26D2E8u;
    SET_GPR_U32(ctx, 31, 0x26D2F0u);
    ctx->pc = 0x273930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x273930u, 0x26D2E8u, 0x26D2F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D2F0u;
label_26d2f0:
    // 0x26d2f0: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x26d2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_26d2f4:
    // 0x26d2f4: 0x10430019  beq         $v0, $v1, . + 4 + (0x19 << 2)
label_26d2f8:
    if (ctx->pc == 0x26D2F8u) {
        ctx->pc = 0x26D2FCu;
        goto label_26d2fc;
    }
    ctx->pc = 0x26D2F4u;
    {
        const bool branch_taken_0x26d2f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x26d2f4) {
            ctx->pc = 0x26D35Cu;
            goto label_26d35c;
        }
    }
    ctx->pc = 0x26D2FCu;
label_26d2fc:
    // 0x26d2fc: 0x8fa201d0  lw          $v0, 0x1D0($sp)
    ctx->pc = 0x26d2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
label_26d300:
    // 0x26d300: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x26d300u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_26d304:
    // 0x26d304: 0x8fa501f0  lw          $a1, 0x1F0($sp)
    ctx->pc = 0x26d304u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_26d308:
    // 0x26d308: 0x8fa601e0  lw          $a2, 0x1E0($sp)
    ctx->pc = 0x26d308u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
label_26d30c:
    // 0x26d30c: 0x8c47002c  lw          $a3, 0x2C($v0)
    ctx->pc = 0x26d30cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_26d310:
    // 0x26d310: 0xc09c6fc  jal         func_271BF0
label_26d314:
    if (ctx->pc == 0x26D314u) {
        ctx->pc = 0x26D318u;
        goto label_26d318;
    }
    ctx->pc = 0x26D310u;
    SET_GPR_U32(ctx, 31, 0x26D318u);
    ctx->pc = 0x271BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x271BF0u, 0x26D310u, 0x26D318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D318u;
label_26d318:
    // 0x26d318: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x26d318u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_26d31c:
    // 0x26d31c: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
label_26d320:
    if (ctx->pc == 0x26D320u) {
        ctx->pc = 0x26D324u;
        goto label_26d324;
    }
    ctx->pc = 0x26D31Cu;
    {
        const bool branch_taken_0x26d31c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26d31c) {
            ctx->pc = 0x26D35Cu;
            goto label_26d35c;
        }
    }
    ctx->pc = 0x26D324u;
label_26d324:
    // 0x26d324: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x26d324u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26d328:
    // 0x26d328: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x26d328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_26d32c:
    // 0x26d32c: 0x240504d6  addiu       $a1, $zero, 0x4D6
    ctx->pc = 0x26d32cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1238));
label_26d330:
    // 0x26d330: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26d330u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26d334:
    // 0x26d334: 0xc04146c  jal         func_1051B0
label_26d338:
    if (ctx->pc == 0x26D338u) {
        ctx->pc = 0x26D33Cu;
        goto label_26d33c;
    }
    ctx->pc = 0x26D334u;
    SET_GPR_U32(ctx, 31, 0x26D33Cu);
    ctx->pc = 0x1051B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051B0u, 0x26D334u, 0x26D33Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D33Cu;
label_26d33c:
    // 0x26d33c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x26d33cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_26d340:
    // 0x26d340: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26d340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26d344:
    // 0x26d344: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_26d348:
    if (ctx->pc == 0x26D348u) {
        ctx->pc = 0x26D34Cu;
        goto label_26d34c;
    }
    ctx->pc = 0x26D344u;
    {
        const bool branch_taken_0x26d344 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x26d344) {
            ctx->pc = 0x26D35Cu;
            goto label_26d35c;
        }
    }
    ctx->pc = 0x26D34Cu;
label_26d34c:
    // 0x26d34c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26d34cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26d350:
    // 0x26d350: 0xa3a201cf  sb          $v0, 0x1CF($sp)
    ctx->pc = 0x26d350u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 463), (uint8_t)GPR_U32(ctx, 2));
label_26d354:
    // 0x26d354: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26d354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26d358:
    // 0x26d358: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x26d358u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_26d35c:
    // 0x26d35c: 0x26f70004  addiu       $s7, $s7, 0x4
    ctx->pc = 0x26d35cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4));
label_26d360:
    // 0x26d360: 0x8fa401e0  lw          $a0, 0x1E0($sp)
    ctx->pc = 0x26d360u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
label_26d364:
    // 0x26d364: 0xc09b618  jal         func_26D860
label_26d368:
    if (ctx->pc == 0x26D368u) {
        ctx->pc = 0x26D36Cu;
        goto label_26d36c;
    }
    ctx->pc = 0x26D364u;
    SET_GPR_U32(ctx, 31, 0x26D36Cu);
    ctx->pc = 0x26D860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26D860u, 0x26D364u, 0x26D36Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D36Cu;
label_26d36c:
    // 0x26d36c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x26d36cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26d370:
    // 0x26d370: 0xc0998c4  jal         func_266310
label_26d374:
    if (ctx->pc == 0x26D374u) {
        ctx->pc = 0x26D378u;
        goto label_26d378;
    }
    ctx->pc = 0x26D370u;
    SET_GPR_U32(ctx, 31, 0x26D378u);
    ctx->pc = 0x266310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266310u, 0x26D370u, 0x26D378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D378u;
label_26d378:
    // 0x26d378: 0x12e20003  beq         $s7, $v0, . + 4 + (0x3 << 2)
label_26d37c:
    if (ctx->pc == 0x26D37Cu) {
        ctx->pc = 0x26D380u;
        goto label_26d380;
    }
    ctx->pc = 0x26D378u;
    {
        const bool branch_taken_0x26d378 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 2));
        if (branch_taken_0x26d378) {
            ctx->pc = 0x26D388u;
            goto label_26d388;
        }
    }
    ctx->pc = 0x26D380u;
label_26d380:
    // 0x26d380: 0x1620ffc2  bnez        $s1, . + 4 + (-0x3E << 2)
label_26d384:
    if (ctx->pc == 0x26D384u) {
        ctx->pc = 0x26D388u;
        goto label_26d388;
    }
    ctx->pc = 0x26D380u;
    {
        const bool branch_taken_0x26d380 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x26d380) {
            ctx->pc = 0x26D28Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26d28c;
        }
    }
    ctx->pc = 0x26D388u;
label_26d388:
    // 0x26d388: 0x93a201cf  lbu         $v0, 0x1CF($sp)
    ctx->pc = 0x26d388u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 463)));
label_26d38c:
    // 0x26d38c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x26d38cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_26d390:
    // 0x26d390: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26d390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26d394:
    // 0x26d394: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
label_26d398:
    if (ctx->pc == 0x26D398u) {
        ctx->pc = 0x26D39Cu;
        goto label_26d39c;
    }
    ctx->pc = 0x26D394u;
    {
        const bool branch_taken_0x26d394 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x26d394) {
            ctx->pc = 0x26D3C4u;
            goto label_26d3c4;
        }
    }
    ctx->pc = 0x26D39Cu;
label_26d39c:
    // 0x26d39c: 0x8fa401e0  lw          $a0, 0x1E0($sp)
    ctx->pc = 0x26d39cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
label_26d3a0:
    // 0x26d3a0: 0xc048094  jal         func_120250
label_26d3a4:
    if (ctx->pc == 0x26D3A4u) {
        ctx->pc = 0x26D3A8u;
        goto label_26d3a8;
    }
    ctx->pc = 0x26D3A0u;
    SET_GPR_U32(ctx, 31, 0x26D3A8u);
    ctx->pc = 0x120250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120250u, 0x26D3A0u, 0x26D3A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D3A8u;
label_26d3a8:
    // 0x26d3a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x26d3a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26d3ac:
    // 0x26d3ac: 0x24050553  addiu       $a1, $zero, 0x553
    ctx->pc = 0x26d3acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1363));
label_26d3b0:
    // 0x26d3b0: 0x93a601cf  lbu         $a2, 0x1CF($sp)
    ctx->pc = 0x26d3b0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 463)));
label_26d3b4:
    // 0x26d3b4: 0xc041b54  jal         func_106D50
label_26d3b8:
    if (ctx->pc == 0x26D3B8u) {
        ctx->pc = 0x26D3BCu;
        goto label_26d3bc;
    }
    ctx->pc = 0x26D3B4u;
    SET_GPR_U32(ctx, 31, 0x26D3BCu);
    ctx->pc = 0x106D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D50u, 0x26D3B4u, 0x26D3BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D3BCu;
label_26d3bc:
    // 0x26d3bc: 0x10000016  b           . + 4 + (0x16 << 2)
label_26d3c0:
    if (ctx->pc == 0x26D3C0u) {
        ctx->pc = 0x26D3C4u;
        goto label_26d3c4;
    }
    ctx->pc = 0x26D3BCu;
    {
        const bool branch_taken_0x26d3bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26d3bc) {
            ctx->pc = 0x26D418u;
            goto label_26d418;
        }
    }
    ctx->pc = 0x26D3C4u;
label_26d3c4:
    // 0x26d3c4: 0x8fa401e0  lw          $a0, 0x1E0($sp)
    ctx->pc = 0x26d3c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
label_26d3c8:
    // 0x26d3c8: 0xc048094  jal         func_120250
label_26d3cc:
    if (ctx->pc == 0x26D3CCu) {
        ctx->pc = 0x26D3D0u;
        goto label_26d3d0;
    }
    ctx->pc = 0x26D3C8u;
    SET_GPR_U32(ctx, 31, 0x26D3D0u);
    ctx->pc = 0x120250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120250u, 0x26D3C8u, 0x26D3D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D3D0u;
label_26d3d0:
    // 0x26d3d0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x26d3d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26d3d4:
    // 0x26d3d4: 0x24050553  addiu       $a1, $zero, 0x553
    ctx->pc = 0x26d3d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1363));
label_26d3d8:
    // 0x26d3d8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26d3d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26d3dc:
    // 0x26d3dc: 0xc04146c  jal         func_1051B0
label_26d3e0:
    if (ctx->pc == 0x26D3E0u) {
        ctx->pc = 0x26D3E4u;
        goto label_26d3e4;
    }
    ctx->pc = 0x26D3DCu;
    SET_GPR_U32(ctx, 31, 0x26D3E4u);
    ctx->pc = 0x1051B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051B0u, 0x26D3DCu, 0x26D3E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D3E4u;
label_26d3e4:
    // 0x26d3e4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x26d3e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_26d3e8:
    // 0x26d3e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26d3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26d3ec:
    // 0x26d3ec: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
label_26d3f0:
    if (ctx->pc == 0x26D3F0u) {
        ctx->pc = 0x26D3F4u;
        goto label_26d3f4;
    }
    ctx->pc = 0x26D3ECu;
    {
        const bool branch_taken_0x26d3ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x26d3ec) {
            ctx->pc = 0x26D418u;
            goto label_26d418;
        }
    }
    ctx->pc = 0x26D3F4u;
label_26d3f4:
    // 0x26d3f4: 0x8fa401e0  lw          $a0, 0x1E0($sp)
    ctx->pc = 0x26d3f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
label_26d3f8:
    // 0x26d3f8: 0xc048094  jal         func_120250
label_26d3fc:
    if (ctx->pc == 0x26D3FCu) {
        ctx->pc = 0x26D400u;
        goto label_26d400;
    }
    ctx->pc = 0x26D3F8u;
    SET_GPR_U32(ctx, 31, 0x26D400u);
    ctx->pc = 0x120250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120250u, 0x26D3F8u, 0x26D400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D400u;
label_26d400:
    // 0x26d400: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x26d400u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26d404:
    // 0x26d404: 0x24050553  addiu       $a1, $zero, 0x553
    ctx->pc = 0x26d404u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1363));
label_26d408:
    // 0x26d408: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x26d408u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_26d40c:
    // 0x26d40c: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x26d40cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_26d410:
    // 0x26d410: 0x320f809  jalr        $t9
label_26d414:
    if (ctx->pc == 0x26D414u) {
        ctx->pc = 0x26D418u;
        goto label_26d418;
    }
    ctx->pc = 0x26D410u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x26D418u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26D410u, 0x26D418u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26D418u;
label_26d418:
    // 0x26d418: 0x122000f4  beqz        $s1, . + 4 + (0xF4 << 2)
label_26d41c:
    if (ctx->pc == 0x26D41Cu) {
        ctx->pc = 0x26D420u;
        goto label_26d420;
    }
    ctx->pc = 0x26D418u;
    {
        const bool branch_taken_0x26d418 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x26d418) {
            ctx->pc = 0x26D7ECu;
            goto label_26d7ec;
        }
    }
    ctx->pc = 0x26D420u;
label_26d420:
    // 0x26d420: 0x8fa201d0  lw          $v0, 0x1D0($sp)
    ctx->pc = 0x26d420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
label_26d424:
    // 0x26d424: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x26d424u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_26d428:
    // 0x26d428: 0xc085530  jal         func_2154C0
label_26d42c:
    if (ctx->pc == 0x26D42Cu) {
        ctx->pc = 0x26D430u;
        goto label_26d430;
    }
    ctx->pc = 0x26D428u;
    SET_GPR_U32(ctx, 31, 0x26D430u);
    ctx->pc = 0x2154C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154C0u, 0x26D428u, 0x26D430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D430u;
label_26d430:
    // 0x26d430: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x26d430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_26d434:
    // 0x26d434: 0x144300ed  bne         $v0, $v1, . + 4 + (0xED << 2)
label_26d438:
    if (ctx->pc == 0x26D438u) {
        ctx->pc = 0x26D43Cu;
        goto label_26d43c;
    }
    ctx->pc = 0x26D434u;
    {
        const bool branch_taken_0x26d434 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x26d434) {
            ctx->pc = 0x26D7ECu;
            goto label_26d7ec;
        }
    }
    ctx->pc = 0x26D43Cu;
label_26d43c:
    // 0x26d43c: 0x93a20210  lbu         $v0, 0x210($sp)
    ctx->pc = 0x26d43cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 528)));
label_26d440:
    // 0x26d440: 0x144000ea  bnez        $v0, . + 4 + (0xEA << 2)
label_26d444:
    if (ctx->pc == 0x26D444u) {
        ctx->pc = 0x26D448u;
        goto label_26d448;
    }
    ctx->pc = 0x26D440u;
    {
        const bool branch_taken_0x26d440 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26d440) {
            ctx->pc = 0x26D7ECu;
            goto label_26d7ec;
        }
    }
    ctx->pc = 0x26D448u;
label_26d448:
    // 0x26d448: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x26d448u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26d44c:
    // 0x26d44c: 0x8fa401e0  lw          $a0, 0x1E0($sp)
    ctx->pc = 0x26d44cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
label_26d450:
    // 0x26d450: 0xc041a70  jal         func_1069C0
label_26d454:
    if (ctx->pc == 0x26D454u) {
        ctx->pc = 0x26D458u;
        goto label_26d458;
    }
    ctx->pc = 0x26D450u;
    SET_GPR_U32(ctx, 31, 0x26D458u);
    ctx->pc = 0x1069C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1069C0u, 0x26D450u, 0x26D458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D458u;
label_26d458:
    // 0x26d458: 0xafa201b0  sw          $v0, 0x1B0($sp)
    ctx->pc = 0x26d458u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 2));
label_26d45c:
    // 0x26d45c: 0x8fa401b0  lw          $a0, 0x1B0($sp)
    ctx->pc = 0x26d45cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
label_26d460:
    // 0x26d460: 0xc0999b4  jal         func_2666D0
label_26d464:
    if (ctx->pc == 0x26D464u) {
        ctx->pc = 0x26D468u;
        goto label_26d468;
    }
    ctx->pc = 0x26D460u;
    SET_GPR_U32(ctx, 31, 0x26D468u);
    ctx->pc = 0x2666D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2666D0u, 0x26D460u, 0x26D468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D468u;
label_26d468:
    // 0x26d468: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26d468u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26d46c:
    // 0x26d46c: 0x1000000e  b           . + 4 + (0xE << 2)
label_26d470:
    if (ctx->pc == 0x26D470u) {
        ctx->pc = 0x26D474u;
        goto label_26d474;
    }
    ctx->pc = 0x26D46Cu;
    {
        const bool branch_taken_0x26d46c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26d46c) {
            ctx->pc = 0x26D4A8u;
            goto label_26d4a8;
        }
    }
    ctx->pc = 0x26D474u;
label_26d474:
    // 0x26d474: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x26d474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_26d478:
    // 0x26d478: 0xafa201ac  sw          $v0, 0x1AC($sp)
    ctx->pc = 0x26d478u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 428), GPR_U32(ctx, 2));
label_26d47c:
    // 0x26d47c: 0x8fa401ac  lw          $a0, 0x1AC($sp)
    ctx->pc = 0x26d47cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 428)));
label_26d480:
    // 0x26d480: 0xc09d0b8  jal         func_2742E0
label_26d484:
    if (ctx->pc == 0x26D484u) {
        ctx->pc = 0x26D488u;
        goto label_26d488;
    }
    ctx->pc = 0x26D480u;
    SET_GPR_U32(ctx, 31, 0x26D488u);
    ctx->pc = 0x2742E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2742E0u, 0x26D480u, 0x26D488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D488u;
label_26d488:
    // 0x26d488: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x26d488u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_26d48c:
    // 0x26d48c: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
label_26d490:
    if (ctx->pc == 0x26D490u) {
        ctx->pc = 0x26D494u;
        goto label_26d494;
    }
    ctx->pc = 0x26D48Cu;
    {
        const bool branch_taken_0x26d48c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x26d48c) {
            ctx->pc = 0x26D4A4u;
            goto label_26d4a4;
        }
    }
    ctx->pc = 0x26D494u;
label_26d494:
    // 0x26d494: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26d494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26d498:
    // 0x26d498: 0x305600ff  andi        $s6, $v0, 0xFF
    ctx->pc = 0x26d498u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_26d49c:
    // 0x26d49c: 0x10000007  b           . + 4 + (0x7 << 2)
label_26d4a0:
    if (ctx->pc == 0x26D4A0u) {
        ctx->pc = 0x26D4A4u;
        goto label_26d4a4;
    }
    ctx->pc = 0x26D49Cu;
    {
        const bool branch_taken_0x26d49c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26d49c) {
            ctx->pc = 0x26D4BCu;
            goto label_26d4bc;
        }
    }
    ctx->pc = 0x26D4A4u;
label_26d4a4:
    // 0x26d4a4: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x26d4a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_26d4a8:
    // 0x26d4a8: 0x8fa401b0  lw          $a0, 0x1B0($sp)
    ctx->pc = 0x26d4a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
label_26d4ac:
    // 0x26d4ac: 0xc09b610  jal         func_26D840
label_26d4b0:
    if (ctx->pc == 0x26D4B0u) {
        ctx->pc = 0x26D4B4u;
        goto label_26d4b4;
    }
    ctx->pc = 0x26D4ACu;
    SET_GPR_U32(ctx, 31, 0x26D4B4u);
    ctx->pc = 0x26D840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26D840u, 0x26D4ACu, 0x26D4B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D4B4u;
label_26d4b4:
    // 0x26d4b4: 0x1602ffef  bne         $s0, $v0, . + 4 + (-0x11 << 2)
label_26d4b8:
    if (ctx->pc == 0x26D4B8u) {
        ctx->pc = 0x26D4BCu;
        goto label_26d4bc;
    }
    ctx->pc = 0x26D4B4u;
    {
        const bool branch_taken_0x26d4b4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x26d4b4) {
            ctx->pc = 0x26D474u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26d474;
        }
    }
    ctx->pc = 0x26D4BCu;
label_26d4bc:
    // 0x26d4bc: 0x16c0001d  bnez        $s6, . + 4 + (0x1D << 2)
label_26d4c0:
    if (ctx->pc == 0x26D4C0u) {
        ctx->pc = 0x26D4C4u;
        goto label_26d4c4;
    }
    ctx->pc = 0x26D4BCu;
    {
        const bool branch_taken_0x26d4bc = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x26d4bc) {
            ctx->pc = 0x26D534u;
            goto label_26d534;
        }
    }
    ctx->pc = 0x26D4C4u;
label_26d4c4:
    // 0x26d4c4: 0x8fa401e0  lw          $a0, 0x1E0($sp)
    ctx->pc = 0x26d4c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
label_26d4c8:
    // 0x26d4c8: 0xc041a68  jal         func_1069A0
label_26d4cc:
    if (ctx->pc == 0x26D4CCu) {
        ctx->pc = 0x26D4D0u;
        goto label_26d4d0;
    }
    ctx->pc = 0x26D4C8u;
    SET_GPR_U32(ctx, 31, 0x26D4D0u);
    ctx->pc = 0x1069A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1069A0u, 0x26D4C8u, 0x26D4D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D4D0u;
label_26d4d0:
    // 0x26d4d0: 0xafa201a8  sw          $v0, 0x1A8($sp)
    ctx->pc = 0x26d4d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 424), GPR_U32(ctx, 2));
label_26d4d4:
    // 0x26d4d4: 0x8fa401a8  lw          $a0, 0x1A8($sp)
    ctx->pc = 0x26d4d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_26d4d8:
    // 0x26d4d8: 0xc0999b4  jal         func_2666D0
label_26d4dc:
    if (ctx->pc == 0x26D4DCu) {
        ctx->pc = 0x26D4E0u;
        goto label_26d4e0;
    }
    ctx->pc = 0x26D4D8u;
    SET_GPR_U32(ctx, 31, 0x26D4E0u);
    ctx->pc = 0x2666D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2666D0u, 0x26D4D8u, 0x26D4E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D4E0u;
label_26d4e0:
    // 0x26d4e0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26d4e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26d4e4:
    // 0x26d4e4: 0x1000000e  b           . + 4 + (0xE << 2)
label_26d4e8:
    if (ctx->pc == 0x26D4E8u) {
        ctx->pc = 0x26D4ECu;
        goto label_26d4ec;
    }
    ctx->pc = 0x26D4E4u;
    {
        const bool branch_taken_0x26d4e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26d4e4) {
            ctx->pc = 0x26D520u;
            goto label_26d520;
        }
    }
    ctx->pc = 0x26D4ECu;
label_26d4ec:
    // 0x26d4ec: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x26d4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_26d4f0:
    // 0x26d4f0: 0xafa201a4  sw          $v0, 0x1A4($sp)
    ctx->pc = 0x26d4f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 420), GPR_U32(ctx, 2));
label_26d4f4:
    // 0x26d4f4: 0x8fa401a4  lw          $a0, 0x1A4($sp)
    ctx->pc = 0x26d4f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 420)));
label_26d4f8:
    // 0x26d4f8: 0xc09d0b8  jal         func_2742E0
label_26d4fc:
    if (ctx->pc == 0x26D4FCu) {
        ctx->pc = 0x26D500u;
        goto label_26d500;
    }
    ctx->pc = 0x26D4F8u;
    SET_GPR_U32(ctx, 31, 0x26D500u);
    ctx->pc = 0x2742E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2742E0u, 0x26D4F8u, 0x26D500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D500u;
label_26d500:
    // 0x26d500: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x26d500u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_26d504:
    // 0x26d504: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
label_26d508:
    if (ctx->pc == 0x26D508u) {
        ctx->pc = 0x26D50Cu;
        goto label_26d50c;
    }
    ctx->pc = 0x26D504u;
    {
        const bool branch_taken_0x26d504 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x26d504) {
            ctx->pc = 0x26D51Cu;
            goto label_26d51c;
        }
    }
    ctx->pc = 0x26D50Cu;
label_26d50c:
    // 0x26d50c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26d50cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26d510:
    // 0x26d510: 0x305600ff  andi        $s6, $v0, 0xFF
    ctx->pc = 0x26d510u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_26d514:
    // 0x26d514: 0x10000007  b           . + 4 + (0x7 << 2)
label_26d518:
    if (ctx->pc == 0x26D518u) {
        ctx->pc = 0x26D51Cu;
        goto label_26d51c;
    }
    ctx->pc = 0x26D514u;
    {
        const bool branch_taken_0x26d514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26d514) {
            ctx->pc = 0x26D534u;
            goto label_26d534;
        }
    }
    ctx->pc = 0x26D51Cu;
label_26d51c:
    // 0x26d51c: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x26d51cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_26d520:
    // 0x26d520: 0x8fa401a8  lw          $a0, 0x1A8($sp)
    ctx->pc = 0x26d520u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_26d524:
    // 0x26d524: 0xc09b610  jal         func_26D840
label_26d528:
    if (ctx->pc == 0x26D528u) {
        ctx->pc = 0x26D52Cu;
        goto label_26d52c;
    }
    ctx->pc = 0x26D524u;
    SET_GPR_U32(ctx, 31, 0x26D52Cu);
    ctx->pc = 0x26D840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26D840u, 0x26D524u, 0x26D52Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D52Cu;
label_26d52c:
    // 0x26d52c: 0x1602ffef  bne         $s0, $v0, . + 4 + (-0x11 << 2)
label_26d530:
    if (ctx->pc == 0x26D530u) {
        ctx->pc = 0x26D534u;
        goto label_26d534;
    }
    ctx->pc = 0x26D52Cu;
    {
        const bool branch_taken_0x26d52c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x26d52c) {
            ctx->pc = 0x26D4ECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26d4ec;
        }
    }
    ctx->pc = 0x26D534u;
label_26d534:
    // 0x26d534: 0x12c000ad  beqz        $s6, . + 4 + (0xAD << 2)
label_26d538:
    if (ctx->pc == 0x26D538u) {
        ctx->pc = 0x26D53Cu;
        goto label_26d53c;
    }
    ctx->pc = 0x26D534u;
    {
        const bool branch_taken_0x26d534 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x26d534) {
            ctx->pc = 0x26D7ECu;
            goto label_26d7ec;
        }
    }
    ctx->pc = 0x26D53Cu;
label_26d53c:
    // 0x26d53c: 0x8fa201d0  lw          $v0, 0x1D0($sp)
    ctx->pc = 0x26d53cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
label_26d540:
    // 0x26d540: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x26d540u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_26d544:
    // 0x26d544: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x26d544u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_26d548:
    // 0x26d548: 0xc085538  jal         func_2154E0
label_26d54c:
    if (ctx->pc == 0x26D54Cu) {
        ctx->pc = 0x26D550u;
        goto label_26d550;
    }
    ctx->pc = 0x26D548u;
    SET_GPR_U32(ctx, 31, 0x26D550u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x26D548u, 0x26D550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D550u;
label_26d550:
    // 0x26d550: 0xafa201a0  sw          $v0, 0x1A0($sp)
    ctx->pc = 0x26d550u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 2));
label_26d554:
    // 0x26d554: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x26d554u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_26d558:
    // 0x26d558: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x26d558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_26d55c:
    // 0x26d55c: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
label_26d560:
    if (ctx->pc == 0x26D560u) {
        ctx->pc = 0x26D564u;
        goto label_26d564;
    }
    ctx->pc = 0x26D55Cu;
    {
        const bool branch_taken_0x26d55c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x26d55c) {
            ctx->pc = 0x26D584u;
            goto label_26d584;
        }
    }
    ctx->pc = 0x26D564u;
label_26d564:
    // 0x26d564: 0x801021  addu        $v0, $a0, $zero
    ctx->pc = 0x26d564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 0)));
label_26d568:
    // 0x26d568: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x26d568u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
label_26d56c:
    // 0x26d56c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x26d56cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_26d570:
    // 0x26d570: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x26d570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_26d574:
    // 0x26d574: 0x0  nop
    ctx->pc = 0x26d574u;
    // NOP
label_26d578:
    // 0x26d578: 0x0  nop
    ctx->pc = 0x26d578u;
    // NOP
label_26d57c:
    // 0x26d57c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_26d580:
    if (ctx->pc == 0x26D580u) {
        ctx->pc = 0x26D584u;
        goto label_26d584;
    }
    ctx->pc = 0x26D57Cu;
    {
        const bool branch_taken_0x26d57c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x26d57c) {
            ctx->pc = 0x26D568u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26d568;
        }
    }
    ctx->pc = 0x26D584u;
label_26d584:
    // 0x26d584: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x26d584u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_26d588:
    // 0x26d588: 0x8fa501a0  lw          $a1, 0x1A0($sp)
    ctx->pc = 0x26d588u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_26d58c:
    // 0x26d58c: 0xc090f80  jal         func_243E00
label_26d590:
    if (ctx->pc == 0x26D590u) {
        ctx->pc = 0x26D594u;
        goto label_26d594;
    }
    ctx->pc = 0x26D58Cu;
    SET_GPR_U32(ctx, 31, 0x26D594u);
    ctx->pc = 0x243E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E00u, 0x26D58Cu, 0x26D594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D594u;
label_26d594:
    // 0x26d594: 0xc7a00120  lwc1        $f0, 0x120($sp)
    ctx->pc = 0x26d594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26d598:
    // 0x26d598: 0xe7a00150  swc1        $f0, 0x150($sp)
    ctx->pc = 0x26d598u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
label_26d59c:
    // 0x26d59c: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x26d59cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_26d5a0:
    // 0x26d5a0: 0x8fa501a0  lw          $a1, 0x1A0($sp)
    ctx->pc = 0x26d5a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_26d5a4:
    // 0x26d5a4: 0xc090f80  jal         func_243E00
label_26d5a8:
    if (ctx->pc == 0x26D5A8u) {
        ctx->pc = 0x26D5ACu;
        goto label_26d5ac;
    }
    ctx->pc = 0x26D5A4u;
    SET_GPR_U32(ctx, 31, 0x26D5ACu);
    ctx->pc = 0x243E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E00u, 0x26D5A4u, 0x26D5ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D5ACu;
label_26d5ac:
    // 0x26d5ac: 0xc7a00118  lwc1        $f0, 0x118($sp)
    ctx->pc = 0x26d5acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26d5b0:
    // 0x26d5b0: 0xe7a00154  swc1        $f0, 0x154($sp)
    ctx->pc = 0x26d5b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 340), bits); }
label_26d5b4:
    // 0x26d5b4: 0xe7a00184  swc1        $f0, 0x184($sp)
    ctx->pc = 0x26d5b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 388), bits); }
label_26d5b8:
    // 0x26d5b8: 0xc090864  jal         func_242190
label_26d5bc:
    if (ctx->pc == 0x26D5BCu) {
        ctx->pc = 0x26D5C0u;
        goto label_26d5c0;
    }
    ctx->pc = 0x26D5B8u;
    SET_GPR_U32(ctx, 31, 0x26D5C0u);
    ctx->pc = 0x242190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242190u, 0x26D5B8u, 0x26D5C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D5C0u;
label_26d5c0:
    // 0x26d5c0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x26d5c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26d5c4:
    // 0x26d5c4: 0x27a50150  addiu       $a1, $sp, 0x150
    ctx->pc = 0x26d5c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_26d5c8:
    // 0x26d5c8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26d5c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26d5cc:
    // 0x26d5cc: 0xc09088c  jal         func_242230
label_26d5d0:
    if (ctx->pc == 0x26D5D0u) {
        ctx->pc = 0x26D5D4u;
        goto label_26d5d4;
    }
    ctx->pc = 0x26D5CCu;
    SET_GPR_U32(ctx, 31, 0x26D5D4u);
    ctx->pc = 0x242230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242230u, 0x26D5CCu, 0x26D5D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D5D4u;
label_26d5d4:
    // 0x26d5d4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x26d5d4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26d5d8:
    // 0x26d5d8: 0x12800070  beqz        $s4, . + 4 + (0x70 << 2)
label_26d5dc:
    if (ctx->pc == 0x26D5DCu) {
        ctx->pc = 0x26D5E0u;
        goto label_26d5e0;
    }
    ctx->pc = 0x26D5D8u;
    {
        const bool branch_taken_0x26d5d8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x26d5d8) {
            ctx->pc = 0x26D79Cu;
            goto label_26d79c;
        }
    }
    ctx->pc = 0x26D5E0u;
label_26d5e0:
    // 0x26d5e0: 0x8e84002c  lw          $a0, 0x2C($s4)
    ctx->pc = 0x26d5e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 44)));
label_26d5e4:
    // 0x26d5e4: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x26d5e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_26d5e8:
    // 0x26d5e8: 0xc085538  jal         func_2154E0
label_26d5ec:
    if (ctx->pc == 0x26D5ECu) {
        ctx->pc = 0x26D5F0u;
        goto label_26d5f0;
    }
    ctx->pc = 0x26D5E8u;
    SET_GPR_U32(ctx, 31, 0x26D5F0u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x26D5E8u, 0x26D5F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D5F0u;
label_26d5f0:
    // 0x26d5f0: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x26d5f0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26d5f4:
    // 0x26d5f4: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x26d5f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_26d5f8:
    // 0x26d5f8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x26d5f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_26d5fc:
    // 0x26d5fc: 0xc090f80  jal         func_243E00
label_26d600:
    if (ctx->pc == 0x26D600u) {
        ctx->pc = 0x26D604u;
        goto label_26d604;
    }
    ctx->pc = 0x26D5FCu;
    SET_GPR_U32(ctx, 31, 0x26D604u);
    ctx->pc = 0x243E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E00u, 0x26D5FCu, 0x26D604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D604u;
label_26d604:
    // 0x26d604: 0xc7a10100  lwc1        $f1, 0x100($sp)
    ctx->pc = 0x26d604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26d608:
    // 0x26d608: 0xc7a00150  lwc1        $f0, 0x150($sp)
    ctx->pc = 0x26d608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26d60c:
    // 0x26d60c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x26d60cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_26d610:
    // 0x26d610: 0xe7a0019c  swc1        $f0, 0x19C($sp)
    ctx->pc = 0x26d610u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 412), bits); }
label_26d614:
    // 0x26d614: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x26d614u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_26d618:
    // 0x26d618: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x26d618u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_26d61c:
    // 0x26d61c: 0xc090f80  jal         func_243E00
label_26d620:
    if (ctx->pc == 0x26D620u) {
        ctx->pc = 0x26D624u;
        goto label_26d624;
    }
    ctx->pc = 0x26D61Cu;
    SET_GPR_U32(ctx, 31, 0x26D624u);
    ctx->pc = 0x243E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E00u, 0x26D61Cu, 0x26D624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D624u;
label_26d624:
    // 0x26d624: 0xc7a100f8  lwc1        $f1, 0xF8($sp)
    ctx->pc = 0x26d624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26d628:
    // 0x26d628: 0xc7a00154  lwc1        $f0, 0x154($sp)
    ctx->pc = 0x26d628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26d62c:
    // 0x26d62c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x26d62cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_26d630:
    // 0x26d630: 0xe7a00198  swc1        $f0, 0x198($sp)
    ctx->pc = 0x26d630u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 408), bits); }
label_26d634:
    // 0x26d634: 0xc7a0019c  lwc1        $f0, 0x19C($sp)
    ctx->pc = 0x26d634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 412)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26d638:
    // 0x26d638: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x26d638u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_26d63c:
    // 0x26d63c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x26d63cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_26d640:
    // 0x26d640: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x26d640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_26d644:
    // 0x26d644: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x26d644u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_26d648:
    // 0x26d648: 0x1012  mflo        $v0
    ctx->pc = 0x26d648u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_26d64c:
    // 0x26d64c: 0xafa20194  sw          $v0, 0x194($sp)
    ctx->pc = 0x26d64cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 404), GPR_U32(ctx, 2));
label_26d650:
    // 0x26d650: 0xc7a00198  lwc1        $f0, 0x198($sp)
    ctx->pc = 0x26d650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26d654:
    // 0x26d654: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x26d654u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_26d658:
    // 0x26d658: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x26d658u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_26d65c:
    // 0x26d65c: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x26d65cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_26d660:
    // 0x26d660: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x26d660u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_26d664:
    // 0x26d664: 0xf012  mflo        $fp
    ctx->pc = 0x26d664u;
    SET_GPR_U64(ctx, 30, ctx->lo);
label_26d668:
    // 0x26d668: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x26d668u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_26d66c:
    // 0x26d66c: 0xc092d70  jal         func_24B5C0
label_26d670:
    if (ctx->pc == 0x26D670u) {
        ctx->pc = 0x26D674u;
        goto label_26d674;
    }
    ctx->pc = 0x26D66Cu;
    SET_GPR_U32(ctx, 31, 0x26D674u);
    ctx->pc = 0x24B5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B5C0u, 0x26D66Cu, 0x26D674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D674u;
label_26d674:
    // 0x26d674: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x26d674u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26d678:
    // 0x26d678: 0x8fa50194  lw          $a1, 0x194($sp)
    ctx->pc = 0x26d678u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 404)));
label_26d67c:
    // 0x26d67c: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x26d67cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_26d680:
    // 0x26d680: 0xc04d328  jal         func_134CA0
label_26d684:
    if (ctx->pc == 0x26D684u) {
        ctx->pc = 0x26D688u;
        goto label_26d688;
    }
    ctx->pc = 0x26D680u;
    SET_GPR_U32(ctx, 31, 0x26D688u);
    ctx->pc = 0x134CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134CA0u, 0x26D680u, 0x26D688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D688u;
label_26d688:
    // 0x26d688: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x26d688u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26d68c:
    // 0x26d68c: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
label_26d690:
    if (ctx->pc == 0x26D690u) {
        ctx->pc = 0x26D694u;
        goto label_26d694;
    }
    ctx->pc = 0x26D68Cu;
    {
        const bool branch_taken_0x26d68c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x26d68c) {
            ctx->pc = 0x26D6B0u;
            goto label_26d6b0;
        }
    }
    ctx->pc = 0x26D694u;
label_26d694:
    // 0x26d694: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x26d694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_26d698:
    // 0x26d698: 0x30420f00  andi        $v0, $v0, 0xF00
    ctx->pc = 0x26d698u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3840);
label_26d69c:
    // 0x26d69c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_26d6a0:
    if (ctx->pc == 0x26D6A0u) {
        ctx->pc = 0x26D6A4u;
        goto label_26d6a4;
    }
    ctx->pc = 0x26D69Cu;
    {
        const bool branch_taken_0x26d69c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26d69c) {
            ctx->pc = 0x26D6B0u;
            goto label_26d6b0;
        }
    }
    ctx->pc = 0x26D6A4u;
label_26d6a4:
    // 0x26d6a4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x26d6a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26d6a8:
    // 0x26d6a8: 0x1000003c  b           . + 4 + (0x3C << 2)
label_26d6ac:
    if (ctx->pc == 0x26D6ACu) {
        ctx->pc = 0x26D6B0u;
        goto label_26d6b0;
    }
    ctx->pc = 0x26D6A8u;
    {
        const bool branch_taken_0x26d6a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26d6a8) {
            ctx->pc = 0x26D79Cu;
            goto label_26d79c;
        }
    }
    ctx->pc = 0x26D6B0u;
label_26d6b0:
    // 0x26d6b0: 0x8fa201f0  lw          $v0, 0x1F0($sp)
    ctx->pc = 0x26d6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_26d6b4:
    // 0x26d6b4: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x26d6b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_26d6b8:
    // 0x26d6b8: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x26d6b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_26d6bc:
    // 0x26d6bc: 0xc085538  jal         func_2154E0
label_26d6c0:
    if (ctx->pc == 0x26D6C0u) {
        ctx->pc = 0x26D6C4u;
        goto label_26d6c4;
    }
    ctx->pc = 0x26D6BCu;
    SET_GPR_U32(ctx, 31, 0x26D6C4u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x26D6BCu, 0x26D6C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D6C4u;
label_26d6c4:
    // 0x26d6c4: 0xafa20190  sw          $v0, 0x190($sp)
    ctx->pc = 0x26d6c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 2));
label_26d6c8:
    // 0x26d6c8: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x26d6c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_26d6cc:
    // 0x26d6cc: 0x8fa50190  lw          $a1, 0x190($sp)
    ctx->pc = 0x26d6ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
label_26d6d0:
    // 0x26d6d0: 0xc090f80  jal         func_243E00
label_26d6d4:
    if (ctx->pc == 0x26D6D4u) {
        ctx->pc = 0x26D6D8u;
        goto label_26d6d8;
    }
    ctx->pc = 0x26D6D0u;
    SET_GPR_U32(ctx, 31, 0x26D6D8u);
    ctx->pc = 0x243E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E00u, 0x26D6D0u, 0x26D6D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D6D8u;
label_26d6d8:
    // 0x26d6d8: 0xc7b400e0  lwc1        $f20, 0xE0($sp)
    ctx->pc = 0x26d6d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_26d6dc:
    // 0x26d6dc: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x26d6dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_26d6e0:
    // 0x26d6e0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x26d6e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_26d6e4:
    // 0x26d6e4: 0xc090f80  jal         func_243E00
label_26d6e8:
    if (ctx->pc == 0x26D6E8u) {
        ctx->pc = 0x26D6ECu;
        goto label_26d6ec;
    }
    ctx->pc = 0x26D6E4u;
    SET_GPR_U32(ctx, 31, 0x26D6ECu);
    ctx->pc = 0x243E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E00u, 0x26D6E4u, 0x26D6ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D6ECu;
label_26d6ec:
    // 0x26d6ec: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x26d6ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26d6f0:
    // 0x26d6f0: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x26d6f0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_26d6f4:
    // 0x26d6f4: 0xe7a0019c  swc1        $f0, 0x19C($sp)
    ctx->pc = 0x26d6f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 412), bits); }
label_26d6f8:
    // 0x26d6f8: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x26d6f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_26d6fc:
    // 0x26d6fc: 0x8fa50190  lw          $a1, 0x190($sp)
    ctx->pc = 0x26d6fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
label_26d700:
    // 0x26d700: 0xc090f80  jal         func_243E00
label_26d704:
    if (ctx->pc == 0x26D704u) {
        ctx->pc = 0x26D708u;
        goto label_26d708;
    }
    ctx->pc = 0x26D700u;
    SET_GPR_U32(ctx, 31, 0x26D708u);
    ctx->pc = 0x243E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E00u, 0x26D700u, 0x26D708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D708u;
label_26d708:
    // 0x26d708: 0xc7b400c8  lwc1        $f20, 0xC8($sp)
    ctx->pc = 0x26d708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_26d70c:
    // 0x26d70c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x26d70cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_26d710:
    // 0x26d710: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x26d710u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_26d714:
    // 0x26d714: 0xc090f80  jal         func_243E00
label_26d718:
    if (ctx->pc == 0x26D718u) {
        ctx->pc = 0x26D71Cu;
        goto label_26d71c;
    }
    ctx->pc = 0x26D714u;
    SET_GPR_U32(ctx, 31, 0x26D71Cu);
    ctx->pc = 0x243E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E00u, 0x26D714u, 0x26D71Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D71Cu;
label_26d71c:
    // 0x26d71c: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x26d71cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26d720:
    // 0x26d720: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x26d720u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_26d724:
    // 0x26d724: 0xe7a00198  swc1        $f0, 0x198($sp)
    ctx->pc = 0x26d724u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 408), bits); }
label_26d728:
    // 0x26d728: 0xc7a0019c  lwc1        $f0, 0x19C($sp)
    ctx->pc = 0x26d728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 412)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26d72c:
    // 0x26d72c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x26d72cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_26d730:
    // 0x26d730: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x26d730u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_26d734:
    // 0x26d734: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x26d734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_26d738:
    // 0x26d738: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x26d738u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_26d73c:
    // 0x26d73c: 0x1012  mflo        $v0
    ctx->pc = 0x26d73cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_26d740:
    // 0x26d740: 0xafa20194  sw          $v0, 0x194($sp)
    ctx->pc = 0x26d740u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 404), GPR_U32(ctx, 2));
label_26d744:
    // 0x26d744: 0xc7a00198  lwc1        $f0, 0x198($sp)
    ctx->pc = 0x26d744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26d748:
    // 0x26d748: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x26d748u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_26d74c:
    // 0x26d74c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x26d74cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_26d750:
    // 0x26d750: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x26d750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_26d754:
    // 0x26d754: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x26d754u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_26d758:
    // 0x26d758: 0xf012  mflo        $fp
    ctx->pc = 0x26d758u;
    SET_GPR_U64(ctx, 30, ctx->lo);
label_26d75c:
    // 0x26d75c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x26d75cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_26d760:
    // 0x26d760: 0xc092d70  jal         func_24B5C0
label_26d764:
    if (ctx->pc == 0x26D764u) {
        ctx->pc = 0x26D768u;
        goto label_26d768;
    }
    ctx->pc = 0x26D760u;
    SET_GPR_U32(ctx, 31, 0x26D768u);
    ctx->pc = 0x24B5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B5C0u, 0x26D760u, 0x26D768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D768u;
label_26d768:
    // 0x26d768: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x26d768u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26d76c:
    // 0x26d76c: 0x8fa50194  lw          $a1, 0x194($sp)
    ctx->pc = 0x26d76cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 404)));
label_26d770:
    // 0x26d770: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x26d770u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_26d774:
    // 0x26d774: 0xc04d328  jal         func_134CA0
label_26d778:
    if (ctx->pc == 0x26D778u) {
        ctx->pc = 0x26D77Cu;
        goto label_26d77c;
    }
    ctx->pc = 0x26D774u;
    SET_GPR_U32(ctx, 31, 0x26D77Cu);
    ctx->pc = 0x134CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134CA0u, 0x26D774u, 0x26D77Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D77Cu;
label_26d77c:
    // 0x26d77c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x26d77cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26d780:
    // 0x26d780: 0x12400006  beqz        $s2, . + 4 + (0x6 << 2)
label_26d784:
    if (ctx->pc == 0x26D784u) {
        ctx->pc = 0x26D788u;
        goto label_26d788;
    }
    ctx->pc = 0x26D780u;
    {
        const bool branch_taken_0x26d780 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x26d780) {
            ctx->pc = 0x26D79Cu;
            goto label_26d79c;
        }
    }
    ctx->pc = 0x26D788u;
label_26d788:
    // 0x26d788: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x26d788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_26d78c:
    // 0x26d78c: 0x30420f00  andi        $v0, $v0, 0xF00
    ctx->pc = 0x26d78cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3840);
label_26d790:
    // 0x26d790: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_26d794:
    if (ctx->pc == 0x26D794u) {
        ctx->pc = 0x26D798u;
        goto label_26d798;
    }
    ctx->pc = 0x26D790u;
    {
        const bool branch_taken_0x26d790 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26d790) {
            ctx->pc = 0x26D79Cu;
            goto label_26d79c;
        }
    }
    ctx->pc = 0x26D798u;
label_26d798:
    // 0x26d798: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x26d798u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26d79c:
    // 0x26d79c: 0x12200013  beqz        $s1, . + 4 + (0x13 << 2)
label_26d7a0:
    if (ctx->pc == 0x26D7A0u) {
        ctx->pc = 0x26D7A4u;
        goto label_26d7a4;
    }
    ctx->pc = 0x26D79Cu;
    {
        const bool branch_taken_0x26d79c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x26d79c) {
            ctx->pc = 0x26D7ECu;
            goto label_26d7ec;
        }
    }
    ctx->pc = 0x26D7A4u;
label_26d7a4:
    // 0x26d7a4: 0x8fa201d0  lw          $v0, 0x1D0($sp)
    ctx->pc = 0x26d7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
label_26d7a8:
    // 0x26d7a8: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x26d7a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_26d7ac:
    // 0x26d7ac: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x26d7acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_26d7b0:
    // 0x26d7b0: 0xc085538  jal         func_2154E0
label_26d7b4:
    if (ctx->pc == 0x26D7B4u) {
        ctx->pc = 0x26D7B8u;
        goto label_26d7b8;
    }
    ctx->pc = 0x26D7B0u;
    SET_GPR_U32(ctx, 31, 0x26D7B8u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x26D7B0u, 0x26D7B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D7B8u;
label_26d7b8:
    // 0x26d7b8: 0xafa2018c  sw          $v0, 0x18C($sp)
    ctx->pc = 0x26d7b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 2));
label_26d7bc:
    // 0x26d7bc: 0x8fa4018c  lw          $a0, 0x18C($sp)
    ctx->pc = 0x26d7bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
label_26d7c0:
    // 0x26d7c0: 0xc0480fc  jal         func_1203F0
label_26d7c4:
    if (ctx->pc == 0x26D7C4u) {
        ctx->pc = 0x26D7C8u;
        goto label_26d7c8;
    }
    ctx->pc = 0x26D7C0u;
    SET_GPR_U32(ctx, 31, 0x26D7C8u);
    ctx->pc = 0x1203F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1203F0u, 0x26D7C0u, 0x26D7C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D7C8u;
label_26d7c8:
    // 0x26d7c8: 0xafa20188  sw          $v0, 0x188($sp)
    ctx->pc = 0x26d7c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 392), GPR_U32(ctx, 2));
label_26d7cc:
    // 0x26d7cc: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x26d7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
label_26d7d0:
    // 0x26d7d0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_26d7d4:
    if (ctx->pc == 0x26D7D4u) {
        ctx->pc = 0x26D7D8u;
        goto label_26d7d8;
    }
    ctx->pc = 0x26D7D0u;
    {
        const bool branch_taken_0x26d7d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26d7d0) {
            ctx->pc = 0x26D7ECu;
            goto label_26d7ec;
        }
    }
    ctx->pc = 0x26D7D8u;
label_26d7d8:
    // 0x26d7d8: 0x8fa30188  lw          $v1, 0x188($sp)
    ctx->pc = 0x26d7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
label_26d7dc:
    // 0x26d7dc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x26d7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_26d7e0:
    // 0x26d7e0: 0x10620002  beq         $v1, $v0, . + 4 + (0x2 << 2)
label_26d7e4:
    if (ctx->pc == 0x26D7E4u) {
        ctx->pc = 0x26D7E8u;
        goto label_26d7e8;
    }
    ctx->pc = 0x26D7E0u;
    {
        const bool branch_taken_0x26d7e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x26d7e0) {
            ctx->pc = 0x26D7ECu;
            goto label_26d7ec;
        }
    }
    ctx->pc = 0x26D7E8u;
label_26d7e8:
    // 0x26d7e8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x26d7e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26d7ec:
    // 0x26d7ec: 0xa3b101cb  sb          $s1, 0x1CB($sp)
    ctx->pc = 0x26d7ecu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 459), (uint8_t)GPR_U32(ctx, 17));
label_26d7f0:
    // 0x26d7f0: 0x27a40178  addiu       $a0, $sp, 0x178
    ctx->pc = 0x26d7f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 376));
label_26d7f4:
    // 0x26d7f4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x26d7f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_26d7f8:
    // 0x26d7f8: 0xc097584  jal         func_25D610
label_26d7fc:
    if (ctx->pc == 0x26D7FCu) {
        ctx->pc = 0x26D800u;
        goto label_26d800;
    }
    ctx->pc = 0x26D7F8u;
    SET_GPR_U32(ctx, 31, 0x26D800u);
    ctx->pc = 0x25D610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D610u, 0x26D7F8u, 0x26D800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D800u;
label_26d800:
    // 0x26d800: 0x93a201cb  lbu         $v0, 0x1CB($sp)
    ctx->pc = 0x26d800u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 459)));
label_26d804:
    // 0x26d804: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x26d804u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_26d808:
    // 0x26d808: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x26d808u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_26d80c:
    // 0x26d80c: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x26d80cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_26d810:
    // 0x26d810: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x26d810u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_26d814:
    // 0x26d814: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x26d814u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_26d818:
    // 0x26d818: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x26d818u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_26d81c:
    // 0x26d81c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x26d81cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_26d820:
    // 0x26d820: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x26d820u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_26d824:
    // 0x26d824: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x26d824u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_26d828:
    // 0x26d828: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x26d828u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_26d82c:
    // 0x26d82c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x26d82cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_26d830:
    // 0x26d830: 0x27bd0220  addiu       $sp, $sp, 0x220
    ctx->pc = 0x26d830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
label_26d834:
    // 0x26d834: 0x3e00008  jr          $ra
label_26d838:
    if (ctx->pc == 0x26D838u) {
        ctx->pc = 0x26D83Cu;
        goto label_26d83c;
    }
    ctx->pc = 0x26D834u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26D834u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26D83Cu;
label_26d83c:
    // 0x26d83c: 0x0  nop
    ctx->pc = 0x26d83cu;
    // NOP
    ctx->pc = 0x26d840u;
}
