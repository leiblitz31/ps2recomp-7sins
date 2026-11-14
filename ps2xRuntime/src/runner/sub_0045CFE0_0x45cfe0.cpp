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

// Function: sub_0045CFE0
// Address: 0x45cfe0 - 0x45d500
void sub_0045CFE0_0x45cfe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0045CFE0_0x45cfe0");
#endif

    switch (ctx->pc) {
        case 0x45cfe0u: goto label_45cfe0;
        case 0x45cfe4u: goto label_45cfe4;
        case 0x45cfe8u: goto label_45cfe8;
        case 0x45cfecu: goto label_45cfec;
        case 0x45cff0u: goto label_45cff0;
        case 0x45cff4u: goto label_45cff4;
        case 0x45cff8u: goto label_45cff8;
        case 0x45cffcu: goto label_45cffc;
        case 0x45d000u: goto label_45d000;
        case 0x45d004u: goto label_45d004;
        case 0x45d008u: goto label_45d008;
        case 0x45d00cu: goto label_45d00c;
        case 0x45d010u: goto label_45d010;
        case 0x45d014u: goto label_45d014;
        case 0x45d018u: goto label_45d018;
        case 0x45d01cu: goto label_45d01c;
        case 0x45d020u: goto label_45d020;
        case 0x45d024u: goto label_45d024;
        case 0x45d028u: goto label_45d028;
        case 0x45d02cu: goto label_45d02c;
        case 0x45d030u: goto label_45d030;
        case 0x45d034u: goto label_45d034;
        case 0x45d038u: goto label_45d038;
        case 0x45d03cu: goto label_45d03c;
        case 0x45d040u: goto label_45d040;
        case 0x45d044u: goto label_45d044;
        case 0x45d048u: goto label_45d048;
        case 0x45d04cu: goto label_45d04c;
        case 0x45d050u: goto label_45d050;
        case 0x45d054u: goto label_45d054;
        case 0x45d058u: goto label_45d058;
        case 0x45d05cu: goto label_45d05c;
        case 0x45d060u: goto label_45d060;
        case 0x45d064u: goto label_45d064;
        case 0x45d068u: goto label_45d068;
        case 0x45d06cu: goto label_45d06c;
        case 0x45d070u: goto label_45d070;
        case 0x45d074u: goto label_45d074;
        case 0x45d078u: goto label_45d078;
        case 0x45d07cu: goto label_45d07c;
        case 0x45d080u: goto label_45d080;
        case 0x45d084u: goto label_45d084;
        case 0x45d088u: goto label_45d088;
        case 0x45d08cu: goto label_45d08c;
        case 0x45d090u: goto label_45d090;
        case 0x45d094u: goto label_45d094;
        case 0x45d098u: goto label_45d098;
        case 0x45d09cu: goto label_45d09c;
        case 0x45d0a0u: goto label_45d0a0;
        case 0x45d0a4u: goto label_45d0a4;
        case 0x45d0a8u: goto label_45d0a8;
        case 0x45d0acu: goto label_45d0ac;
        case 0x45d0b0u: goto label_45d0b0;
        case 0x45d0b4u: goto label_45d0b4;
        case 0x45d0b8u: goto label_45d0b8;
        case 0x45d0bcu: goto label_45d0bc;
        case 0x45d0c0u: goto label_45d0c0;
        case 0x45d0c4u: goto label_45d0c4;
        case 0x45d0c8u: goto label_45d0c8;
        case 0x45d0ccu: goto label_45d0cc;
        case 0x45d0d0u: goto label_45d0d0;
        case 0x45d0d4u: goto label_45d0d4;
        case 0x45d0d8u: goto label_45d0d8;
        case 0x45d0dcu: goto label_45d0dc;
        case 0x45d0e0u: goto label_45d0e0;
        case 0x45d0e4u: goto label_45d0e4;
        case 0x45d0e8u: goto label_45d0e8;
        case 0x45d0ecu: goto label_45d0ec;
        case 0x45d0f0u: goto label_45d0f0;
        case 0x45d0f4u: goto label_45d0f4;
        case 0x45d0f8u: goto label_45d0f8;
        case 0x45d0fcu: goto label_45d0fc;
        case 0x45d100u: goto label_45d100;
        case 0x45d104u: goto label_45d104;
        case 0x45d108u: goto label_45d108;
        case 0x45d10cu: goto label_45d10c;
        case 0x45d110u: goto label_45d110;
        case 0x45d114u: goto label_45d114;
        case 0x45d118u: goto label_45d118;
        case 0x45d11cu: goto label_45d11c;
        case 0x45d120u: goto label_45d120;
        case 0x45d124u: goto label_45d124;
        case 0x45d128u: goto label_45d128;
        case 0x45d12cu: goto label_45d12c;
        case 0x45d130u: goto label_45d130;
        case 0x45d134u: goto label_45d134;
        case 0x45d138u: goto label_45d138;
        case 0x45d13cu: goto label_45d13c;
        case 0x45d140u: goto label_45d140;
        case 0x45d144u: goto label_45d144;
        case 0x45d148u: goto label_45d148;
        case 0x45d14cu: goto label_45d14c;
        case 0x45d150u: goto label_45d150;
        case 0x45d154u: goto label_45d154;
        case 0x45d158u: goto label_45d158;
        case 0x45d15cu: goto label_45d15c;
        case 0x45d160u: goto label_45d160;
        case 0x45d164u: goto label_45d164;
        case 0x45d168u: goto label_45d168;
        case 0x45d16cu: goto label_45d16c;
        case 0x45d170u: goto label_45d170;
        case 0x45d174u: goto label_45d174;
        case 0x45d178u: goto label_45d178;
        case 0x45d17cu: goto label_45d17c;
        case 0x45d180u: goto label_45d180;
        case 0x45d184u: goto label_45d184;
        case 0x45d188u: goto label_45d188;
        case 0x45d18cu: goto label_45d18c;
        case 0x45d190u: goto label_45d190;
        case 0x45d194u: goto label_45d194;
        case 0x45d198u: goto label_45d198;
        case 0x45d19cu: goto label_45d19c;
        case 0x45d1a0u: goto label_45d1a0;
        case 0x45d1a4u: goto label_45d1a4;
        case 0x45d1a8u: goto label_45d1a8;
        case 0x45d1acu: goto label_45d1ac;
        case 0x45d1b0u: goto label_45d1b0;
        case 0x45d1b4u: goto label_45d1b4;
        case 0x45d1b8u: goto label_45d1b8;
        case 0x45d1bcu: goto label_45d1bc;
        case 0x45d1c0u: goto label_45d1c0;
        case 0x45d1c4u: goto label_45d1c4;
        case 0x45d1c8u: goto label_45d1c8;
        case 0x45d1ccu: goto label_45d1cc;
        case 0x45d1d0u: goto label_45d1d0;
        case 0x45d1d4u: goto label_45d1d4;
        case 0x45d1d8u: goto label_45d1d8;
        case 0x45d1dcu: goto label_45d1dc;
        case 0x45d1e0u: goto label_45d1e0;
        case 0x45d1e4u: goto label_45d1e4;
        case 0x45d1e8u: goto label_45d1e8;
        case 0x45d1ecu: goto label_45d1ec;
        case 0x45d1f0u: goto label_45d1f0;
        case 0x45d1f4u: goto label_45d1f4;
        case 0x45d1f8u: goto label_45d1f8;
        case 0x45d1fcu: goto label_45d1fc;
        case 0x45d200u: goto label_45d200;
        case 0x45d204u: goto label_45d204;
        case 0x45d208u: goto label_45d208;
        case 0x45d20cu: goto label_45d20c;
        case 0x45d210u: goto label_45d210;
        case 0x45d214u: goto label_45d214;
        case 0x45d218u: goto label_45d218;
        case 0x45d21cu: goto label_45d21c;
        case 0x45d220u: goto label_45d220;
        case 0x45d224u: goto label_45d224;
        case 0x45d228u: goto label_45d228;
        case 0x45d22cu: goto label_45d22c;
        case 0x45d230u: goto label_45d230;
        case 0x45d234u: goto label_45d234;
        case 0x45d238u: goto label_45d238;
        case 0x45d23cu: goto label_45d23c;
        case 0x45d240u: goto label_45d240;
        case 0x45d244u: goto label_45d244;
        case 0x45d248u: goto label_45d248;
        case 0x45d24cu: goto label_45d24c;
        case 0x45d250u: goto label_45d250;
        case 0x45d254u: goto label_45d254;
        case 0x45d258u: goto label_45d258;
        case 0x45d25cu: goto label_45d25c;
        case 0x45d260u: goto label_45d260;
        case 0x45d264u: goto label_45d264;
        case 0x45d268u: goto label_45d268;
        case 0x45d26cu: goto label_45d26c;
        case 0x45d270u: goto label_45d270;
        case 0x45d274u: goto label_45d274;
        case 0x45d278u: goto label_45d278;
        case 0x45d27cu: goto label_45d27c;
        case 0x45d280u: goto label_45d280;
        case 0x45d284u: goto label_45d284;
        case 0x45d288u: goto label_45d288;
        case 0x45d28cu: goto label_45d28c;
        case 0x45d290u: goto label_45d290;
        case 0x45d294u: goto label_45d294;
        case 0x45d298u: goto label_45d298;
        case 0x45d29cu: goto label_45d29c;
        case 0x45d2a0u: goto label_45d2a0;
        case 0x45d2a4u: goto label_45d2a4;
        case 0x45d2a8u: goto label_45d2a8;
        case 0x45d2acu: goto label_45d2ac;
        case 0x45d2b0u: goto label_45d2b0;
        case 0x45d2b4u: goto label_45d2b4;
        case 0x45d2b8u: goto label_45d2b8;
        case 0x45d2bcu: goto label_45d2bc;
        case 0x45d2c0u: goto label_45d2c0;
        case 0x45d2c4u: goto label_45d2c4;
        case 0x45d2c8u: goto label_45d2c8;
        case 0x45d2ccu: goto label_45d2cc;
        case 0x45d2d0u: goto label_45d2d0;
        case 0x45d2d4u: goto label_45d2d4;
        case 0x45d2d8u: goto label_45d2d8;
        case 0x45d2dcu: goto label_45d2dc;
        case 0x45d2e0u: goto label_45d2e0;
        case 0x45d2e4u: goto label_45d2e4;
        case 0x45d2e8u: goto label_45d2e8;
        case 0x45d2ecu: goto label_45d2ec;
        case 0x45d2f0u: goto label_45d2f0;
        case 0x45d2f4u: goto label_45d2f4;
        case 0x45d2f8u: goto label_45d2f8;
        case 0x45d2fcu: goto label_45d2fc;
        case 0x45d300u: goto label_45d300;
        case 0x45d304u: goto label_45d304;
        case 0x45d308u: goto label_45d308;
        case 0x45d30cu: goto label_45d30c;
        case 0x45d310u: goto label_45d310;
        case 0x45d314u: goto label_45d314;
        case 0x45d318u: goto label_45d318;
        case 0x45d31cu: goto label_45d31c;
        case 0x45d320u: goto label_45d320;
        case 0x45d324u: goto label_45d324;
        case 0x45d328u: goto label_45d328;
        case 0x45d32cu: goto label_45d32c;
        case 0x45d330u: goto label_45d330;
        case 0x45d334u: goto label_45d334;
        case 0x45d338u: goto label_45d338;
        case 0x45d33cu: goto label_45d33c;
        case 0x45d340u: goto label_45d340;
        case 0x45d344u: goto label_45d344;
        case 0x45d348u: goto label_45d348;
        case 0x45d34cu: goto label_45d34c;
        case 0x45d350u: goto label_45d350;
        case 0x45d354u: goto label_45d354;
        case 0x45d358u: goto label_45d358;
        case 0x45d35cu: goto label_45d35c;
        case 0x45d360u: goto label_45d360;
        case 0x45d364u: goto label_45d364;
        case 0x45d368u: goto label_45d368;
        case 0x45d36cu: goto label_45d36c;
        case 0x45d370u: goto label_45d370;
        case 0x45d374u: goto label_45d374;
        case 0x45d378u: goto label_45d378;
        case 0x45d37cu: goto label_45d37c;
        case 0x45d380u: goto label_45d380;
        case 0x45d384u: goto label_45d384;
        case 0x45d388u: goto label_45d388;
        case 0x45d38cu: goto label_45d38c;
        case 0x45d390u: goto label_45d390;
        case 0x45d394u: goto label_45d394;
        case 0x45d398u: goto label_45d398;
        case 0x45d39cu: goto label_45d39c;
        case 0x45d3a0u: goto label_45d3a0;
        case 0x45d3a4u: goto label_45d3a4;
        case 0x45d3a8u: goto label_45d3a8;
        case 0x45d3acu: goto label_45d3ac;
        case 0x45d3b0u: goto label_45d3b0;
        case 0x45d3b4u: goto label_45d3b4;
        case 0x45d3b8u: goto label_45d3b8;
        case 0x45d3bcu: goto label_45d3bc;
        case 0x45d3c0u: goto label_45d3c0;
        case 0x45d3c4u: goto label_45d3c4;
        case 0x45d3c8u: goto label_45d3c8;
        case 0x45d3ccu: goto label_45d3cc;
        case 0x45d3d0u: goto label_45d3d0;
        case 0x45d3d4u: goto label_45d3d4;
        case 0x45d3d8u: goto label_45d3d8;
        case 0x45d3dcu: goto label_45d3dc;
        case 0x45d3e0u: goto label_45d3e0;
        case 0x45d3e4u: goto label_45d3e4;
        case 0x45d3e8u: goto label_45d3e8;
        case 0x45d3ecu: goto label_45d3ec;
        case 0x45d3f0u: goto label_45d3f0;
        case 0x45d3f4u: goto label_45d3f4;
        case 0x45d3f8u: goto label_45d3f8;
        case 0x45d3fcu: goto label_45d3fc;
        case 0x45d400u: goto label_45d400;
        case 0x45d404u: goto label_45d404;
        case 0x45d408u: goto label_45d408;
        case 0x45d40cu: goto label_45d40c;
        case 0x45d410u: goto label_45d410;
        case 0x45d414u: goto label_45d414;
        case 0x45d418u: goto label_45d418;
        case 0x45d41cu: goto label_45d41c;
        case 0x45d420u: goto label_45d420;
        case 0x45d424u: goto label_45d424;
        case 0x45d428u: goto label_45d428;
        case 0x45d42cu: goto label_45d42c;
        case 0x45d430u: goto label_45d430;
        case 0x45d434u: goto label_45d434;
        case 0x45d438u: goto label_45d438;
        case 0x45d43cu: goto label_45d43c;
        case 0x45d440u: goto label_45d440;
        case 0x45d444u: goto label_45d444;
        case 0x45d448u: goto label_45d448;
        case 0x45d44cu: goto label_45d44c;
        case 0x45d450u: goto label_45d450;
        case 0x45d454u: goto label_45d454;
        case 0x45d458u: goto label_45d458;
        case 0x45d45cu: goto label_45d45c;
        case 0x45d460u: goto label_45d460;
        case 0x45d464u: goto label_45d464;
        case 0x45d468u: goto label_45d468;
        case 0x45d46cu: goto label_45d46c;
        case 0x45d470u: goto label_45d470;
        case 0x45d474u: goto label_45d474;
        case 0x45d478u: goto label_45d478;
        case 0x45d47cu: goto label_45d47c;
        case 0x45d480u: goto label_45d480;
        case 0x45d484u: goto label_45d484;
        case 0x45d488u: goto label_45d488;
        case 0x45d48cu: goto label_45d48c;
        case 0x45d490u: goto label_45d490;
        case 0x45d494u: goto label_45d494;
        case 0x45d498u: goto label_45d498;
        case 0x45d49cu: goto label_45d49c;
        case 0x45d4a0u: goto label_45d4a0;
        case 0x45d4a4u: goto label_45d4a4;
        case 0x45d4a8u: goto label_45d4a8;
        case 0x45d4acu: goto label_45d4ac;
        case 0x45d4b0u: goto label_45d4b0;
        case 0x45d4b4u: goto label_45d4b4;
        case 0x45d4b8u: goto label_45d4b8;
        case 0x45d4bcu: goto label_45d4bc;
        case 0x45d4c0u: goto label_45d4c0;
        case 0x45d4c4u: goto label_45d4c4;
        case 0x45d4c8u: goto label_45d4c8;
        case 0x45d4ccu: goto label_45d4cc;
        case 0x45d4d0u: goto label_45d4d0;
        case 0x45d4d4u: goto label_45d4d4;
        case 0x45d4d8u: goto label_45d4d8;
        case 0x45d4dcu: goto label_45d4dc;
        case 0x45d4e0u: goto label_45d4e0;
        case 0x45d4e4u: goto label_45d4e4;
        case 0x45d4e8u: goto label_45d4e8;
        case 0x45d4ecu: goto label_45d4ec;
        case 0x45d4f0u: goto label_45d4f0;
        case 0x45d4f4u: goto label_45d4f4;
        case 0x45d4f8u: goto label_45d4f8;
        case 0x45d4fcu: goto label_45d4fc;
        default: break;
    }

    ctx->pc = 0x45cfe0u;

label_45cfe0:
    // 0x45cfe0: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x45cfe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
label_45cfe4:
    // 0x45cfe4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x45cfe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_45cfe8:
    // 0x45cfe8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x45cfe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_45cfec:
    // 0x45cfec: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x45cfecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_45cff0:
    // 0x45cff0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x45cff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_45cff4:
    // 0x45cff4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x45cff4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_45cff8:
    // 0x45cff8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x45cff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_45cffc:
    // 0x45cffc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x45cffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_45d000:
    // 0x45d000: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x45d000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_45d004:
    // 0x45d004: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x45d004u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_45d008:
    // 0x45d008: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x45d008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_45d00c:
    // 0x45d00c: 0xafa40150  sw          $a0, 0x150($sp)
    ctx->pc = 0x45d00cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 4));
label_45d010:
    // 0x45d010: 0xafa50160  sw          $a1, 0x160($sp)
    ctx->pc = 0x45d010u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 5));
label_45d014:
    // 0x45d014: 0xafa60170  sw          $a2, 0x170($sp)
    ctx->pc = 0x45d014u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 6));
label_45d018:
    // 0x45d018: 0xafa70180  sw          $a3, 0x180($sp)
    ctx->pc = 0x45d018u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 7));
label_45d01c:
    // 0x45d01c: 0x8fb00160  lw          $s0, 0x160($sp)
    ctx->pc = 0x45d01cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_45d020:
    // 0x45d020: 0xc0f0c58  jal         func_3C3160
label_45d024:
    if (ctx->pc == 0x45D024u) {
        ctx->pc = 0x45D028u;
        goto label_45d028;
    }
    ctx->pc = 0x45D020u;
    SET_GPR_U32(ctx, 31, 0x45D028u);
    ctx->pc = 0x3C3160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C3160u, 0x45D020u, 0x45D028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45D028u;
label_45d028:
    // 0x45d028: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x45d028u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_45d02c:
    // 0x45d02c: 0x1280011f  beqz        $s4, . + 4 + (0x11F << 2)
label_45d030:
    if (ctx->pc == 0x45D030u) {
        ctx->pc = 0x45D034u;
        goto label_45d034;
    }
    ctx->pc = 0x45D02Cu;
    {
        const bool branch_taken_0x45d02c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x45d02c) {
            ctx->pc = 0x45D4ACu;
            goto label_45d4ac;
        }
    }
    ctx->pc = 0x45D034u;
label_45d034:
    // 0x45d034: 0x26870028  addiu       $a3, $s4, 0x28
    ctx->pc = 0x45d034u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 40));
label_45d038:
    // 0x45d038: 0x27a60110  addiu       $a2, $sp, 0x110
    ctx->pc = 0x45d038u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_45d03c:
    // 0x45d03c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x45d03cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_45d040:
    // 0x45d040: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x45d040u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_45d044:
    // 0x45d044: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x45d044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_45d048:
    // 0x45d048: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x45d048u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
label_45d04c:
    // 0x45d04c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x45d04cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_45d050:
    // 0x45d050: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x45d050u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
label_45d054:
    // 0x45d054: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x45d054u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
label_45d058:
    // 0x45d058: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x45d058u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_45d05c:
    // 0x45d05c: 0x1ca0fff8  bgtz        $a1, . + 4 + (-0x8 << 2)
label_45d060:
    if (ctx->pc == 0x45D060u) {
        ctx->pc = 0x45D064u;
        goto label_45d064;
    }
    ctx->pc = 0x45D05Cu;
    {
        const bool branch_taken_0x45d05c = (GPR_S32(ctx, 5) > 0);
        if (branch_taken_0x45d05c) {
            ctx->pc = 0x45D040u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45d040;
        }
    }
    ctx->pc = 0x45D064u;
label_45d064:
    // 0x45d064: 0x8e040080  lw          $a0, 0x80($s0)
    ctx->pc = 0x45d064u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_45d068:
    // 0x45d068: 0x3c034b43  lui         $v1, 0x4B43
    ctx->pc = 0x45d068u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)19267 << 16));
label_45d06c:
    // 0x45d06c: 0x34634150  ori         $v1, $v1, 0x4150
    ctx->pc = 0x45d06cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16720);
label_45d070:
    // 0x45d070: 0x10830032  beq         $a0, $v1, . + 4 + (0x32 << 2)
label_45d074:
    if (ctx->pc == 0x45D074u) {
        ctx->pc = 0x45D078u;
        goto label_45d078;
    }
    ctx->pc = 0x45D070u;
    {
        const bool branch_taken_0x45d070 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x45d070) {
            ctx->pc = 0x45D13Cu;
            goto label_45d13c;
        }
    }
    ctx->pc = 0x45D078u;
label_45d078:
    // 0x45d078: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x45d078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_45d07c:
    // 0x45d07c: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x45d07cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_45d080:
    // 0x45d080: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
label_45d084:
    if (ctx->pc == 0x45D084u) {
        ctx->pc = 0x45D088u;
        goto label_45d088;
    }
    ctx->pc = 0x45D080u;
    {
        const bool branch_taken_0x45d080 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x45d080) {
            ctx->pc = 0x45D0D0u;
            goto label_45d0d0;
        }
    }
    ctx->pc = 0x45D088u;
label_45d088:
    // 0x45d088: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x45d088u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_45d08c:
    // 0x45d08c: 0x8fa50160  lw          $a1, 0x160($sp)
    ctx->pc = 0x45d08cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_45d090:
    // 0x45d090: 0x8fa60170  lw          $a2, 0x170($sp)
    ctx->pc = 0x45d090u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_45d094:
    // 0x45d094: 0x8fa70180  lw          $a3, 0x180($sp)
    ctx->pc = 0x45d094u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
label_45d098:
    // 0x45d098: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x45d098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_45d09c:
    // 0x45d09c: 0x40f809  jalr        $v0
label_45d0a0:
    if (ctx->pc == 0x45D0A0u) {
        ctx->pc = 0x45D0A4u;
        goto label_45d0a4;
    }
    ctx->pc = 0x45D09Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x45D0A4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45D09Cu, 0x45D0A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x45D0A4u;
label_45d0a4:
    // 0x45d0a4: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x45d0a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_45d0a8:
    // 0x45d0a8: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x45d0a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_45d0ac:
    // 0x45d0ac: 0xc1170d4  jal         func_45C350
label_45d0b0:
    if (ctx->pc == 0x45D0B0u) {
        ctx->pc = 0x45D0B4u;
        goto label_45d0b4;
    }
    ctx->pc = 0x45D0ACu;
    SET_GPR_U32(ctx, 31, 0x45D0B4u);
    ctx->pc = 0x45C350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45C350u, 0x45D0ACu, 0x45D0B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45D0B4u;
label_45d0b4:
    // 0x45d0b4: 0x8fa40160  lw          $a0, 0x160($sp)
    ctx->pc = 0x45d0b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_45d0b8:
    // 0x45d0b8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x45d0b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_45d0bc:
    // 0x45d0bc: 0x8fa20124  lw          $v0, 0x124($sp)
    ctx->pc = 0x45d0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
label_45d0c0:
    // 0x45d0c0: 0x40f809  jalr        $v0
label_45d0c4:
    if (ctx->pc == 0x45D0C4u) {
        ctx->pc = 0x45D0C8u;
        goto label_45d0c8;
    }
    ctx->pc = 0x45D0C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x45D0C8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45D0C0u, 0x45D0C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x45D0C8u;
label_45d0c8:
    // 0x45d0c8: 0x10000016  b           . + 4 + (0x16 << 2)
label_45d0cc:
    if (ctx->pc == 0x45D0CCu) {
        ctx->pc = 0x45D0D0u;
        goto label_45d0d0;
    }
    ctx->pc = 0x45D0C8u;
    {
        const bool branch_taken_0x45d0c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45d0c8) {
            ctx->pc = 0x45D124u;
            goto label_45d124;
        }
    }
    ctx->pc = 0x45D0D0u;
label_45d0d0:
    // 0x45d0d0: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x45d0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_45d0d4:
    // 0x45d0d4: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x45d0d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_45d0d8:
    // 0x45d0d8: 0xc116f70  jal         func_45BDC0
label_45d0dc:
    if (ctx->pc == 0x45D0DCu) {
        ctx->pc = 0x45D0E0u;
        goto label_45d0e0;
    }
    ctx->pc = 0x45D0D8u;
    SET_GPR_U32(ctx, 31, 0x45D0E0u);
    ctx->pc = 0x45BDC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45BDC0u, 0x45D0D8u, 0x45D0E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45D0E0u;
label_45d0e0:
    // 0x45d0e0: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x45d0e0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_45d0e4:
    // 0x45d0e4: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x45d0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_45d0e8:
    // 0x45d0e8: 0x5e1023  subu        $v0, $v0, $fp
    ctx->pc = 0x45d0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
label_45d0ec:
    // 0x45d0ec: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x45d0ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
label_45d0f0:
    // 0x45d0f0: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x45d0f0u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
label_45d0f4:
    // 0x45d0f4: 0x8fa40160  lw          $a0, 0x160($sp)
    ctx->pc = 0x45d0f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_45d0f8:
    // 0x45d0f8: 0x8fa60180  lw          $a2, 0x180($sp)
    ctx->pc = 0x45d0f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
label_45d0fc:
    // 0x45d0fc: 0xc0f0b30  jal         func_3C2CC0
label_45d100:
    if (ctx->pc == 0x45D100u) {
        ctx->pc = 0x45D104u;
        goto label_45d104;
    }
    ctx->pc = 0x45D0FCu;
    SET_GPR_U32(ctx, 31, 0x45D104u);
    ctx->pc = 0x3C2CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2CC0u, 0x45D0FCu, 0x45D104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45D104u;
label_45d104:
    // 0x45d104: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x45d104u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_45d108:
    // 0x45d108: 0x16e00006  bnez        $s7, . + 4 + (0x6 << 2)
label_45d10c:
    if (ctx->pc == 0x45D10Cu) {
        ctx->pc = 0x45D110u;
        goto label_45d110;
    }
    ctx->pc = 0x45D108u;
    {
        const bool branch_taken_0x45d108 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        if (branch_taken_0x45d108) {
            ctx->pc = 0x45D124u;
            goto label_45d124;
        }
    }
    ctx->pc = 0x45D110u;
label_45d110:
    // 0x45d110: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x45d110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_45d114:
    // 0x45d114: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x45d114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_45d118:
    // 0x45d118: 0x24450010  addiu       $a1, $v0, 0x10
    ctx->pc = 0x45d118u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_45d11c:
    // 0x45d11c: 0xc1170d4  jal         func_45C350
label_45d120:
    if (ctx->pc == 0x45D120u) {
        ctx->pc = 0x45D124u;
        goto label_45d124;
    }
    ctx->pc = 0x45D11Cu;
    SET_GPR_U32(ctx, 31, 0x45D124u);
    ctx->pc = 0x45C350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45C350u, 0x45D11Cu, 0x45D124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45D124u;
label_45d124:
    // 0x45d124: 0x27a30140  addiu       $v1, $sp, 0x140
    ctx->pc = 0x45d124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_45d128:
    // 0x45d128: 0x8fa40150  lw          $a0, 0x150($sp)
    ctx->pc = 0x45d128u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_45d12c:
    // 0x45d12c: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x45d12cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_45d130:
    // 0x45d130: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x45d130u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
label_45d134:
    // 0x45d134: 0x100000e5  b           . + 4 + (0xE5 << 2)
label_45d138:
    if (ctx->pc == 0x45D138u) {
        ctx->pc = 0x45D13Cu;
        goto label_45d13c;
    }
    ctx->pc = 0x45D134u;
    {
        const bool branch_taken_0x45d134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45d134) {
            ctx->pc = 0x45D4CCu;
            goto label_45d4cc;
        }
    }
    ctx->pc = 0x45D13Cu;
label_45d13c:
    // 0x45d13c: 0x8fa40180  lw          $a0, 0x180($sp)
    ctx->pc = 0x45d13cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
label_45d140:
    // 0x45d140: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x45d140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_45d144:
    // 0x45d144: 0x14830040  bne         $a0, $v1, . + 4 + (0x40 << 2)
label_45d148:
    if (ctx->pc == 0x45D148u) {
        ctx->pc = 0x45D14Cu;
        goto label_45d14c;
    }
    ctx->pc = 0x45D144u;
    {
        const bool branch_taken_0x45d144 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x45d144) {
            ctx->pc = 0x45D248u;
            goto label_45d248;
        }
    }
    ctx->pc = 0x45D14Cu;
label_45d14c:
    // 0x45d14c: 0x8e020088  lw          $v0, 0x88($s0)
    ctx->pc = 0x45d14cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
label_45d150:
    // 0x45d150: 0x8c430048  lw          $v1, 0x48($v0)
    ctx->pc = 0x45d150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
label_45d154:
    // 0x45d154: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x45d154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_45d158:
    // 0x45d158: 0x629821  addu        $s3, $v1, $v0
    ctx->pc = 0x45d158u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_45d15c:
    // 0x45d15c: 0x8e020084  lw          $v0, 0x84($s0)
    ctx->pc = 0x45d15cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_45d160:
    // 0x45d160: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x45d160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_45d164:
    // 0x45d164: 0xc116f70  jal         func_45BDC0
label_45d168:
    if (ctx->pc == 0x45D168u) {
        ctx->pc = 0x45D16Cu;
        goto label_45d16c;
    }
    ctx->pc = 0x45D164u;
    SET_GPR_U32(ctx, 31, 0x45D16Cu);
    ctx->pc = 0x45BDC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45BDC0u, 0x45D164u, 0x45D16Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45D16Cu;
label_45d16c:
    // 0x45d16c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x45d16cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_45d170:
    // 0x45d170: 0x53082a  slt         $at, $v0, $s3
    ctx->pc = 0x45d170u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_45d174:
    // 0x45d174: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
label_45d178:
    if (ctx->pc == 0x45D178u) {
        ctx->pc = 0x45D17Cu;
        goto label_45d17c;
    }
    ctx->pc = 0x45D174u;
    {
        const bool branch_taken_0x45d174 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x45d174) {
            ctx->pc = 0x45D190u;
            goto label_45d190;
        }
    }
    ctx->pc = 0x45D17Cu;
label_45d17c:
    // 0x45d17c: 0x8e020084  lw          $v0, 0x84($s0)
    ctx->pc = 0x45d17cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_45d180:
    // 0x45d180: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x45d180u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_45d184:
    // 0x45d184: 0xc116f70  jal         func_45BDC0
label_45d188:
    if (ctx->pc == 0x45D188u) {
        ctx->pc = 0x45D18Cu;
        goto label_45d18c;
    }
    ctx->pc = 0x45D184u;
    SET_GPR_U32(ctx, 31, 0x45D18Cu);
    ctx->pc = 0x45BDC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45BDC0u, 0x45D184u, 0x45D18Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45D18Cu;
label_45d18c:
    // 0x45d18c: 0x2453ffff  addiu       $s3, $v0, -0x1
    ctx->pc = 0x45d18cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_45d190:
    // 0x45d190: 0x8e020084  lw          $v0, 0x84($s0)
    ctx->pc = 0x45d190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_45d194:
    // 0x45d194: 0x24440030  addiu       $a0, $v0, 0x30
    ctx->pc = 0x45d194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
label_45d198:
    // 0x45d198: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x45d198u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_45d19c:
    // 0x45d19c: 0xc116f64  jal         func_45BD90
label_45d1a0:
    if (ctx->pc == 0x45D1A0u) {
        ctx->pc = 0x45D1A4u;
        goto label_45d1a4;
    }
    ctx->pc = 0x45D19Cu;
    SET_GPR_U32(ctx, 31, 0x45D1A4u);
    ctx->pc = 0x45BD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45BD90u, 0x45D19Cu, 0x45D1A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45D1A4u;
label_45d1a4:
    // 0x45d1a4: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x45d1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_45d1a8:
    // 0x45d1a8: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x45d1a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_45d1ac:
    // 0x45d1ac: 0x8fa50170  lw          $a1, 0x170($sp)
    ctx->pc = 0x45d1acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_45d1b0:
    // 0x45d1b0: 0xc116f64  jal         func_45BD90
label_45d1b4:
    if (ctx->pc == 0x45D1B4u) {
        ctx->pc = 0x45D1B8u;
        goto label_45d1b8;
    }
    ctx->pc = 0x45D1B0u;
    SET_GPR_U32(ctx, 31, 0x45D1B8u);
    ctx->pc = 0x45BD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45BD90u, 0x45D1B0u, 0x45D1B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45D1B8u;
label_45d1b8:
    // 0x45d1b8: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x45d1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_45d1bc:
    // 0x45d1bc: 0xae02008c  sw          $v0, 0x8C($s0)
    ctx->pc = 0x45d1bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 2));
label_45d1c0:
    // 0x45d1c0: 0x8e03008c  lw          $v1, 0x8C($s0)
    ctx->pc = 0x45d1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
label_45d1c4:
    // 0x45d1c4: 0x8e020088  lw          $v0, 0x88($s0)
    ctx->pc = 0x45d1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
label_45d1c8:
    // 0x45d1c8: 0x8c42004c  lw          $v0, 0x4C($v0)
    ctx->pc = 0x45d1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_45d1cc:
    // 0x45d1cc: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_45d1d0:
    if (ctx->pc == 0x45D1D0u) {
        ctx->pc = 0x45D1D4u;
        goto label_45d1d4;
    }
    ctx->pc = 0x45D1CCu;
    {
        const bool branch_taken_0x45d1cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x45d1cc) {
            ctx->pc = 0x45D1E4u;
            goto label_45d1e4;
        }
    }
    ctx->pc = 0x45D1D4u;
label_45d1d4:
    // 0x45d1d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x45d1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_45d1d8:
    // 0x45d1d8: 0xae020090  sw          $v0, 0x90($s0)
    ctx->pc = 0x45d1d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 2));
label_45d1dc:
    // 0x45d1dc: 0x10000002  b           . + 4 + (0x2 << 2)
label_45d1e0:
    if (ctx->pc == 0x45D1E0u) {
        ctx->pc = 0x45D1E4u;
        goto label_45d1e4;
    }
    ctx->pc = 0x45D1DCu;
    {
        const bool branch_taken_0x45d1dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45d1dc) {
            ctx->pc = 0x45D1E8u;
            goto label_45d1e8;
        }
    }
    ctx->pc = 0x45D1E4u;
label_45d1e4:
    // 0x45d1e4: 0xae000090  sw          $zero, 0x90($s0)
    ctx->pc = 0x45d1e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 0));
label_45d1e8:
    // 0x45d1e8: 0x8e020084  lw          $v0, 0x84($s0)
    ctx->pc = 0x45d1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_45d1ec:
    // 0x45d1ec: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x45d1ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_45d1f0:
    // 0x45d1f0: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x45d1f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_45d1f4:
    // 0x45d1f4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x45d1f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_45d1f8:
    // 0x45d1f8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x45d1f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_45d1fc:
    // 0x45d1fc: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x45d1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_45d200:
    // 0x45d200: 0x40f809  jalr        $v0
label_45d204:
    if (ctx->pc == 0x45D204u) {
        ctx->pc = 0x45D208u;
        goto label_45d208;
    }
    ctx->pc = 0x45D200u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x45D208u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45D200u, 0x45D208u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x45D208u;
label_45d208:
    // 0x45d208: 0x27a200c0  addiu       $v0, $sp, 0xC0
    ctx->pc = 0x45d208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_45d20c:
    // 0x45d20c: 0x27a30100  addiu       $v1, $sp, 0x100
    ctx->pc = 0x45d20cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_45d210:
    // 0x45d210: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x45d210u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_45d214:
    // 0x45d214: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x45d214u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
label_45d218:
    // 0x45d218: 0x8e020084  lw          $v0, 0x84($s0)
    ctx->pc = 0x45d218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_45d21c:
    // 0x45d21c: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x45d21cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_45d220:
    // 0x45d220: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x45d220u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_45d224:
    // 0x45d224: 0x8fa20124  lw          $v0, 0x124($sp)
    ctx->pc = 0x45d224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
label_45d228:
    // 0x45d228: 0x40f809  jalr        $v0
label_45d22c:
    if (ctx->pc == 0x45D22Cu) {
        ctx->pc = 0x45D230u;
        goto label_45d230;
    }
    ctx->pc = 0x45D228u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x45D230u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45D228u, 0x45D230u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x45D230u;
label_45d230:
    // 0x45d230: 0x27a30100  addiu       $v1, $sp, 0x100
    ctx->pc = 0x45d230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_45d234:
    // 0x45d234: 0x8fa40150  lw          $a0, 0x150($sp)
    ctx->pc = 0x45d234u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_45d238:
    // 0x45d238: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x45d238u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_45d23c:
    // 0x45d23c: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x45d23cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
label_45d240:
    // 0x45d240: 0x100000a2  b           . + 4 + (0xA2 << 2)
label_45d244:
    if (ctx->pc == 0x45D244u) {
        ctx->pc = 0x45D248u;
        goto label_45d248;
    }
    ctx->pc = 0x45D240u;
    {
        const bool branch_taken_0x45d240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45d240) {
            ctx->pc = 0x45D4CCu;
            goto label_45d4cc;
        }
    }
    ctx->pc = 0x45D248u;
label_45d248:
    // 0x45d248: 0x8fa40180  lw          $a0, 0x180($sp)
    ctx->pc = 0x45d248u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
label_45d24c:
    // 0x45d24c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x45d24cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_45d250:
    // 0x45d250: 0x1483004a  bne         $a0, $v1, . + 4 + (0x4A << 2)
label_45d254:
    if (ctx->pc == 0x45D254u) {
        ctx->pc = 0x45D258u;
        goto label_45d258;
    }
    ctx->pc = 0x45D250u;
    {
        const bool branch_taken_0x45d250 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x45d250) {
            ctx->pc = 0x45D37Cu;
            goto label_45d37c;
        }
    }
    ctx->pc = 0x45D258u;
label_45d258:
    // 0x45d258: 0x8fb20170  lw          $s2, 0x170($sp)
    ctx->pc = 0x45d258u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_45d25c:
    // 0x45d25c: 0x8e020084  lw          $v0, 0x84($s0)
    ctx->pc = 0x45d25cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_45d260:
    // 0x45d260: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x45d260u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_45d264:
    // 0x45d264: 0xc116f70  jal         func_45BDC0
label_45d268:
    if (ctx->pc == 0x45D268u) {
        ctx->pc = 0x45D26Cu;
        goto label_45d26c;
    }
    ctx->pc = 0x45D264u;
    SET_GPR_U32(ctx, 31, 0x45D26Cu);
    ctx->pc = 0x45BDC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45BDC0u, 0x45D264u, 0x45D26Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45D26Cu;
label_45d26c:
    // 0x45d26c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x45d26cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_45d270:
    // 0x45d270: 0x52082a  slt         $at, $v0, $s2
    ctx->pc = 0x45d270u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_45d274:
    // 0x45d274: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
label_45d278:
    if (ctx->pc == 0x45D278u) {
        ctx->pc = 0x45D27Cu;
        goto label_45d27c;
    }
    ctx->pc = 0x45D274u;
    {
        const bool branch_taken_0x45d274 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x45d274) {
            ctx->pc = 0x45D290u;
            goto label_45d290;
        }
    }
    ctx->pc = 0x45D27Cu;
label_45d27c:
    // 0x45d27c: 0x8e020084  lw          $v0, 0x84($s0)
    ctx->pc = 0x45d27cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_45d280:
    // 0x45d280: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x45d280u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_45d284:
    // 0x45d284: 0xc116f70  jal         func_45BDC0
label_45d288:
    if (ctx->pc == 0x45D288u) {
        ctx->pc = 0x45D28Cu;
        goto label_45d28c;
    }
    ctx->pc = 0x45D284u;
    SET_GPR_U32(ctx, 31, 0x45D28Cu);
    ctx->pc = 0x45BDC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45BDC0u, 0x45D284u, 0x45D28Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45D28Cu;
label_45d28c:
    // 0x45d28c: 0x2452ffff  addiu       $s2, $v0, -0x1
    ctx->pc = 0x45d28cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_45d290:
    // 0x45d290: 0x8e020084  lw          $v0, 0x84($s0)
    ctx->pc = 0x45d290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_45d294:
    // 0x45d294: 0x24440030  addiu       $a0, $v0, 0x30
    ctx->pc = 0x45d294u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
label_45d298:
    // 0x45d298: 0xc116f70  jal         func_45BDC0
label_45d29c:
    if (ctx->pc == 0x45D29Cu) {
        ctx->pc = 0x45D2A0u;
        goto label_45d2a0;
    }
    ctx->pc = 0x45D298u;
    SET_GPR_U32(ctx, 31, 0x45D2A0u);
    ctx->pc = 0x45BDC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45BDC0u, 0x45D298u, 0x45D2A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45D2A0u;
label_45d2a0:
    // 0x45d2a0: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x45d2a0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_45d2a4:
    // 0x45d2a4: 0x8e020084  lw          $v0, 0x84($s0)
    ctx->pc = 0x45d2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_45d2a8:
    // 0x45d2a8: 0x2d22821  addu        $a1, $s6, $s2
    ctx->pc = 0x45d2a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 18)));
label_45d2ac:
    // 0x45d2ac: 0x24440030  addiu       $a0, $v0, 0x30
    ctx->pc = 0x45d2acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
label_45d2b0:
    // 0x45d2b0: 0xc116f64  jal         func_45BD90
label_45d2b4:
    if (ctx->pc == 0x45D2B4u) {
        ctx->pc = 0x45D2B8u;
        goto label_45d2b8;
    }
    ctx->pc = 0x45D2B0u;
    SET_GPR_U32(ctx, 31, 0x45D2B8u);
    ctx->pc = 0x45BD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45BD90u, 0x45D2B0u, 0x45D2B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45D2B8u;
label_45d2b8:
    // 0x45d2b8: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x45d2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_45d2bc:
    // 0x45d2bc: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x45d2bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_45d2c0:
    // 0x45d2c0: 0xc116f70  jal         func_45BDC0
label_45d2c4:
    if (ctx->pc == 0x45D2C4u) {
        ctx->pc = 0x45D2C8u;
        goto label_45d2c8;
    }
    ctx->pc = 0x45D2C0u;
    SET_GPR_U32(ctx, 31, 0x45D2C8u);
    ctx->pc = 0x45BDC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45BDC0u, 0x45D2C0u, 0x45D2C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45D2C8u;
label_45d2c8:
    // 0x45d2c8: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x45d2c8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_45d2cc:
    // 0x45d2cc: 0x8fa30160  lw          $v1, 0x160($sp)
    ctx->pc = 0x45d2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_45d2d0:
    // 0x45d2d0: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x45d2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_45d2d4:
    // 0x45d2d4: 0x2a22821  addu        $a1, $s5, $v0
    ctx->pc = 0x45d2d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_45d2d8:
    // 0x45d2d8: 0x24640010  addiu       $a0, $v1, 0x10
    ctx->pc = 0x45d2d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_45d2dc:
    // 0x45d2dc: 0xc116f64  jal         func_45BD90
label_45d2e0:
    if (ctx->pc == 0x45D2E0u) {
        ctx->pc = 0x45D2E4u;
        goto label_45d2e4;
    }
    ctx->pc = 0x45D2DCu;
    SET_GPR_U32(ctx, 31, 0x45D2E4u);
    ctx->pc = 0x45BD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45BD90u, 0x45D2DCu, 0x45D2E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45D2E4u;
label_45d2e4:
    // 0x45d2e4: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x45d2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_45d2e8:
    // 0x45d2e8: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x45d2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_45d2ec:
    // 0x45d2ec: 0xae02008c  sw          $v0, 0x8C($s0)
    ctx->pc = 0x45d2ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 2));
label_45d2f0:
    // 0x45d2f0: 0x8e03008c  lw          $v1, 0x8C($s0)
    ctx->pc = 0x45d2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
label_45d2f4:
    // 0x45d2f4: 0x8e020088  lw          $v0, 0x88($s0)
    ctx->pc = 0x45d2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
label_45d2f8:
    // 0x45d2f8: 0x8c42004c  lw          $v0, 0x4C($v0)
    ctx->pc = 0x45d2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_45d2fc:
    // 0x45d2fc: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x45d2fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_45d300:
    // 0x45d300: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_45d304:
    if (ctx->pc == 0x45D304u) {
        ctx->pc = 0x45D308u;
        goto label_45d308;
    }
    ctx->pc = 0x45D300u;
    {
        const bool branch_taken_0x45d300 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x45d300) {
            ctx->pc = 0x45D318u;
            goto label_45d318;
        }
    }
    ctx->pc = 0x45D308u;
label_45d308:
    // 0x45d308: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x45d308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_45d30c:
    // 0x45d30c: 0xae020090  sw          $v0, 0x90($s0)
    ctx->pc = 0x45d30cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 2));
label_45d310:
    // 0x45d310: 0x10000002  b           . + 4 + (0x2 << 2)
label_45d314:
    if (ctx->pc == 0x45D314u) {
        ctx->pc = 0x45D318u;
        goto label_45d318;
    }
    ctx->pc = 0x45D310u;
    {
        const bool branch_taken_0x45d310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45d310) {
            ctx->pc = 0x45D31Cu;
            goto label_45d31c;
        }
    }
    ctx->pc = 0x45D318u;
label_45d318:
    // 0x45d318: 0xae000090  sw          $zero, 0x90($s0)
    ctx->pc = 0x45d318u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 0));
label_45d31c:
    // 0x45d31c: 0x8e020084  lw          $v0, 0x84($s0)
    ctx->pc = 0x45d31cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_45d320:
    // 0x45d320: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x45d320u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_45d324:
    // 0x45d324: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x45d324u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_45d328:
    // 0x45d328: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x45d328u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_45d32c:
    // 0x45d32c: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x45d32cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_45d330:
    // 0x45d330: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x45d330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_45d334:
    // 0x45d334: 0x40f809  jalr        $v0
label_45d338:
    if (ctx->pc == 0x45D338u) {
        ctx->pc = 0x45D33Cu;
        goto label_45d33c;
    }
    ctx->pc = 0x45D334u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x45D33Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45D334u, 0x45D33Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x45D33Cu;
label_45d33c:
    // 0x45d33c: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x45d33cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_45d340:
    // 0x45d340: 0x27a300f0  addiu       $v1, $sp, 0xF0
    ctx->pc = 0x45d340u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_45d344:
    // 0x45d344: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x45d344u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_45d348:
    // 0x45d348: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x45d348u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
label_45d34c:
    // 0x45d34c: 0x8e020084  lw          $v0, 0x84($s0)
    ctx->pc = 0x45d34cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_45d350:
    // 0x45d350: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x45d350u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_45d354:
    // 0x45d354: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x45d354u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_45d358:
    // 0x45d358: 0x8fa20124  lw          $v0, 0x124($sp)
    ctx->pc = 0x45d358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
label_45d35c:
    // 0x45d35c: 0x40f809  jalr        $v0
label_45d360:
    if (ctx->pc == 0x45D360u) {
        ctx->pc = 0x45D364u;
        goto label_45d364;
    }
    ctx->pc = 0x45D35Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x45D364u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45D35Cu, 0x45D364u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x45D364u;
label_45d364:
    // 0x45d364: 0x27a300f0  addiu       $v1, $sp, 0xF0
    ctx->pc = 0x45d364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_45d368:
    // 0x45d368: 0x8fa40150  lw          $a0, 0x150($sp)
    ctx->pc = 0x45d368u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_45d36c:
    // 0x45d36c: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x45d36cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_45d370:
    // 0x45d370: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x45d370u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
label_45d374:
    // 0x45d374: 0x10000055  b           . + 4 + (0x55 << 2)
label_45d378:
    if (ctx->pc == 0x45D378u) {
        ctx->pc = 0x45D37Cu;
        goto label_45d37c;
    }
    ctx->pc = 0x45D374u;
    {
        const bool branch_taken_0x45d374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45d374) {
            ctx->pc = 0x45D4CCu;
            goto label_45d4cc;
        }
    }
    ctx->pc = 0x45D37Cu;
label_45d37c:
    // 0x45d37c: 0x8fa40180  lw          $a0, 0x180($sp)
    ctx->pc = 0x45d37cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
label_45d380:
    // 0x45d380: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x45d380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_45d384:
    // 0x45d384: 0x14830049  bne         $a0, $v1, . + 4 + (0x49 << 2)
label_45d388:
    if (ctx->pc == 0x45D388u) {
        ctx->pc = 0x45D38Cu;
        goto label_45d38c;
    }
    ctx->pc = 0x45D384u;
    {
        const bool branch_taken_0x45d384 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x45d384) {
            ctx->pc = 0x45D4ACu;
            goto label_45d4ac;
        }
    }
    ctx->pc = 0x45D38Cu;
label_45d38c:
    // 0x45d38c: 0x8e030088  lw          $v1, 0x88($s0)
    ctx->pc = 0x45d38cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
label_45d390:
    // 0x45d390: 0x8e020088  lw          $v0, 0x88($s0)
    ctx->pc = 0x45d390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
label_45d394:
    // 0x45d394: 0x8c630048  lw          $v1, 0x48($v1)
    ctx->pc = 0x45d394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_45d398:
    // 0x45d398: 0x8c42004c  lw          $v0, 0x4C($v0)
    ctx->pc = 0x45d398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_45d39c:
    // 0x45d39c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x45d39cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_45d3a0:
    // 0x45d3a0: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x45d3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_45d3a4:
    // 0x45d3a4: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x45d3a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_45d3a8:
    // 0x45d3a8: 0x8e020084  lw          $v0, 0x84($s0)
    ctx->pc = 0x45d3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_45d3ac:
    // 0x45d3ac: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x45d3acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_45d3b0:
    // 0x45d3b0: 0xc116f70  jal         func_45BDC0
label_45d3b4:
    if (ctx->pc == 0x45D3B4u) {
        ctx->pc = 0x45D3B8u;
        goto label_45d3b8;
    }
    ctx->pc = 0x45D3B0u;
    SET_GPR_U32(ctx, 31, 0x45D3B8u);
    ctx->pc = 0x45BDC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45BDC0u, 0x45D3B0u, 0x45D3B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45D3B8u;
label_45d3b8:
    // 0x45d3b8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x45d3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_45d3bc:
    // 0x45d3bc: 0x51082a  slt         $at, $v0, $s1
    ctx->pc = 0x45d3bcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_45d3c0:
    // 0x45d3c0: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
label_45d3c4:
    if (ctx->pc == 0x45D3C4u) {
        ctx->pc = 0x45D3C8u;
        goto label_45d3c8;
    }
    ctx->pc = 0x45D3C0u;
    {
        const bool branch_taken_0x45d3c0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x45d3c0) {
            ctx->pc = 0x45D3DCu;
            goto label_45d3dc;
        }
    }
    ctx->pc = 0x45D3C8u;
label_45d3c8:
    // 0x45d3c8: 0x8e020084  lw          $v0, 0x84($s0)
    ctx->pc = 0x45d3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_45d3cc:
    // 0x45d3cc: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x45d3ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_45d3d0:
    // 0x45d3d0: 0xc116f70  jal         func_45BDC0
label_45d3d4:
    if (ctx->pc == 0x45D3D4u) {
        ctx->pc = 0x45D3D8u;
        goto label_45d3d8;
    }
    ctx->pc = 0x45D3D0u;
    SET_GPR_U32(ctx, 31, 0x45D3D8u);
    ctx->pc = 0x45BDC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45BDC0u, 0x45D3D0u, 0x45D3D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45D3D8u;
label_45d3d8:
    // 0x45d3d8: 0x2451ffff  addiu       $s1, $v0, -0x1
    ctx->pc = 0x45d3d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_45d3dc:
    // 0x45d3dc: 0x8e020084  lw          $v0, 0x84($s0)
    ctx->pc = 0x45d3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_45d3e0:
    // 0x45d3e0: 0x24440030  addiu       $a0, $v0, 0x30
    ctx->pc = 0x45d3e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
label_45d3e4:
    // 0x45d3e4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x45d3e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_45d3e8:
    // 0x45d3e8: 0xc116f64  jal         func_45BD90
label_45d3ec:
    if (ctx->pc == 0x45D3ECu) {
        ctx->pc = 0x45D3F0u;
        goto label_45d3f0;
    }
    ctx->pc = 0x45D3E8u;
    SET_GPR_U32(ctx, 31, 0x45D3F0u);
    ctx->pc = 0x45BD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45BD90u, 0x45D3E8u, 0x45D3F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45D3F0u;
label_45d3f0:
    // 0x45d3f0: 0x8fa40160  lw          $a0, 0x160($sp)
    ctx->pc = 0x45d3f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_45d3f4:
    // 0x45d3f4: 0x8e020088  lw          $v0, 0x88($s0)
    ctx->pc = 0x45d3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
label_45d3f8:
    // 0x45d3f8: 0x8c43004c  lw          $v1, 0x4C($v0)
    ctx->pc = 0x45d3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_45d3fc:
    // 0x45d3fc: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x45d3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_45d400:
    // 0x45d400: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x45d400u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_45d404:
    // 0x45d404: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x45d404u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_45d408:
    // 0x45d408: 0xc116f64  jal         func_45BD90
label_45d40c:
    if (ctx->pc == 0x45D40Cu) {
        ctx->pc = 0x45D410u;
        goto label_45d410;
    }
    ctx->pc = 0x45D408u;
    SET_GPR_U32(ctx, 31, 0x45D410u);
    ctx->pc = 0x45BD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45BD90u, 0x45D408u, 0x45D410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45D410u;
label_45d410:
    // 0x45d410: 0x8e020088  lw          $v0, 0x88($s0)
    ctx->pc = 0x45d410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
label_45d414:
    // 0x45d414: 0x8c43004c  lw          $v1, 0x4C($v0)
    ctx->pc = 0x45d414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_45d418:
    // 0x45d418: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x45d418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_45d41c:
    // 0x45d41c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x45d41cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_45d420:
    // 0x45d420: 0xae02008c  sw          $v0, 0x8C($s0)
    ctx->pc = 0x45d420u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 2));
label_45d424:
    // 0x45d424: 0x8e03008c  lw          $v1, 0x8C($s0)
    ctx->pc = 0x45d424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
label_45d428:
    // 0x45d428: 0x8e020088  lw          $v0, 0x88($s0)
    ctx->pc = 0x45d428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
label_45d42c:
    // 0x45d42c: 0x8c42004c  lw          $v0, 0x4C($v0)
    ctx->pc = 0x45d42cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_45d430:
    // 0x45d430: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_45d434:
    if (ctx->pc == 0x45D434u) {
        ctx->pc = 0x45D438u;
        goto label_45d438;
    }
    ctx->pc = 0x45D430u;
    {
        const bool branch_taken_0x45d430 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x45d430) {
            ctx->pc = 0x45D448u;
            goto label_45d448;
        }
    }
    ctx->pc = 0x45D438u;
label_45d438:
    // 0x45d438: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x45d438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_45d43c:
    // 0x45d43c: 0xae020090  sw          $v0, 0x90($s0)
    ctx->pc = 0x45d43cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 2));
label_45d440:
    // 0x45d440: 0x10000002  b           . + 4 + (0x2 << 2)
label_45d444:
    if (ctx->pc == 0x45D444u) {
        ctx->pc = 0x45D448u;
        goto label_45d448;
    }
    ctx->pc = 0x45D440u;
    {
        const bool branch_taken_0x45d440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45d440) {
            ctx->pc = 0x45D44Cu;
            goto label_45d44c;
        }
    }
    ctx->pc = 0x45D448u;
label_45d448:
    // 0x45d448: 0xae000090  sw          $zero, 0x90($s0)
    ctx->pc = 0x45d448u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 0));
label_45d44c:
    // 0x45d44c: 0x8e020084  lw          $v0, 0x84($s0)
    ctx->pc = 0x45d44cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_45d450:
    // 0x45d450: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x45d450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_45d454:
    // 0x45d454: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x45d454u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_45d458:
    // 0x45d458: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x45d458u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_45d45c:
    // 0x45d45c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x45d45cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_45d460:
    // 0x45d460: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x45d460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_45d464:
    // 0x45d464: 0x40f809  jalr        $v0
label_45d468:
    if (ctx->pc == 0x45D468u) {
        ctx->pc = 0x45D46Cu;
        goto label_45d46c;
    }
    ctx->pc = 0x45D464u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x45D46Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45D464u, 0x45D46Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x45D46Cu;
label_45d46c:
    // 0x45d46c: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x45d46cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_45d470:
    // 0x45d470: 0x27a300e0  addiu       $v1, $sp, 0xE0
    ctx->pc = 0x45d470u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_45d474:
    // 0x45d474: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x45d474u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_45d478:
    // 0x45d478: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x45d478u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
label_45d47c:
    // 0x45d47c: 0x8e020084  lw          $v0, 0x84($s0)
    ctx->pc = 0x45d47cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_45d480:
    // 0x45d480: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x45d480u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_45d484:
    // 0x45d484: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x45d484u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_45d488:
    // 0x45d488: 0x8fa20124  lw          $v0, 0x124($sp)
    ctx->pc = 0x45d488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
label_45d48c:
    // 0x45d48c: 0x40f809  jalr        $v0
label_45d490:
    if (ctx->pc == 0x45D490u) {
        ctx->pc = 0x45D494u;
        goto label_45d494;
    }
    ctx->pc = 0x45D48Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x45D494u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45D48Cu, 0x45D494u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x45D494u;
label_45d494:
    // 0x45d494: 0x27a300e0  addiu       $v1, $sp, 0xE0
    ctx->pc = 0x45d494u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_45d498:
    // 0x45d498: 0x8fa40150  lw          $a0, 0x150($sp)
    ctx->pc = 0x45d498u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_45d49c:
    // 0x45d49c: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x45d49cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_45d4a0:
    // 0x45d4a0: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x45d4a0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
label_45d4a4:
    // 0x45d4a4: 0x10000009  b           . + 4 + (0x9 << 2)
label_45d4a8:
    if (ctx->pc == 0x45D4A8u) {
        ctx->pc = 0x45D4ACu;
        goto label_45d4ac;
    }
    ctx->pc = 0x45D4A4u;
    {
        const bool branch_taken_0x45d4a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45d4a4) {
            ctx->pc = 0x45D4CCu;
            goto label_45d4cc;
        }
    }
    ctx->pc = 0x45D4ACu;
label_45d4ac:
    // 0x45d4ac: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x45d4acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_45d4b0:
    // 0x45d4b0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x45d4b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_45d4b4:
    // 0x45d4b4: 0xc116f64  jal         func_45BD90
label_45d4b8:
    if (ctx->pc == 0x45D4B8u) {
        ctx->pc = 0x45D4BCu;
        goto label_45d4bc;
    }
    ctx->pc = 0x45D4B4u;
    SET_GPR_U32(ctx, 31, 0x45D4BCu);
    ctx->pc = 0x45BD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45BD90u, 0x45D4B4u, 0x45D4BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45D4BCu;
label_45d4bc:
    // 0x45d4bc: 0x27a30140  addiu       $v1, $sp, 0x140
    ctx->pc = 0x45d4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_45d4c0:
    // 0x45d4c0: 0x8fa40150  lw          $a0, 0x150($sp)
    ctx->pc = 0x45d4c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_45d4c4:
    // 0x45d4c4: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x45d4c4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_45d4c8:
    // 0x45d4c8: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x45d4c8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
label_45d4cc:
    // 0x45d4cc: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x45d4ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_45d4d0:
    // 0x45d4d0: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x45d4d0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_45d4d4:
    // 0x45d4d4: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x45d4d4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_45d4d8:
    // 0x45d4d8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x45d4d8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_45d4dc:
    // 0x45d4dc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x45d4dcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_45d4e0:
    // 0x45d4e0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x45d4e0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_45d4e4:
    // 0x45d4e4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x45d4e4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_45d4e8:
    // 0x45d4e8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x45d4e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_45d4ec:
    // 0x45d4ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x45d4ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_45d4f0:
    // 0x45d4f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x45d4f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_45d4f4:
    // 0x45d4f4: 0x27bd0190  addiu       $sp, $sp, 0x190
    ctx->pc = 0x45d4f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_45d4f8:
    // 0x45d4f8: 0x3e00008  jr          $ra
label_45d4fc:
    if (ctx->pc == 0x45D4FCu) {
        ctx->pc = 0x45D500u;
        goto label_fallthrough_0x45d4f8;
    }
    ctx->pc = 0x45D4F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45D4F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x45d4f8:
    ctx->pc = 0x45D500u;
}
