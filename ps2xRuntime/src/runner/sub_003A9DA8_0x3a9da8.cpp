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

// Function: sub_003A9DA8
// Address: 0x3a9da8 - 0x3aa2e0
void sub_003A9DA8_0x3a9da8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A9DA8_0x3a9da8");
#endif

    switch (ctx->pc) {
        case 0x3a9da8u: goto label_3a9da8;
        case 0x3a9dacu: goto label_3a9dac;
        case 0x3a9db0u: goto label_3a9db0;
        case 0x3a9db4u: goto label_3a9db4;
        case 0x3a9db8u: goto label_3a9db8;
        case 0x3a9dbcu: goto label_3a9dbc;
        case 0x3a9dc0u: goto label_3a9dc0;
        case 0x3a9dc4u: goto label_3a9dc4;
        case 0x3a9dc8u: goto label_3a9dc8;
        case 0x3a9dccu: goto label_3a9dcc;
        case 0x3a9dd0u: goto label_3a9dd0;
        case 0x3a9dd4u: goto label_3a9dd4;
        case 0x3a9dd8u: goto label_3a9dd8;
        case 0x3a9ddcu: goto label_3a9ddc;
        case 0x3a9de0u: goto label_3a9de0;
        case 0x3a9de4u: goto label_3a9de4;
        case 0x3a9de8u: goto label_3a9de8;
        case 0x3a9decu: goto label_3a9dec;
        case 0x3a9df0u: goto label_3a9df0;
        case 0x3a9df4u: goto label_3a9df4;
        case 0x3a9df8u: goto label_3a9df8;
        case 0x3a9dfcu: goto label_3a9dfc;
        case 0x3a9e00u: goto label_3a9e00;
        case 0x3a9e04u: goto label_3a9e04;
        case 0x3a9e08u: goto label_3a9e08;
        case 0x3a9e0cu: goto label_3a9e0c;
        case 0x3a9e10u: goto label_3a9e10;
        case 0x3a9e14u: goto label_3a9e14;
        case 0x3a9e18u: goto label_3a9e18;
        case 0x3a9e1cu: goto label_3a9e1c;
        case 0x3a9e20u: goto label_3a9e20;
        case 0x3a9e24u: goto label_3a9e24;
        case 0x3a9e28u: goto label_3a9e28;
        case 0x3a9e2cu: goto label_3a9e2c;
        case 0x3a9e30u: goto label_3a9e30;
        case 0x3a9e34u: goto label_3a9e34;
        case 0x3a9e38u: goto label_3a9e38;
        case 0x3a9e3cu: goto label_3a9e3c;
        case 0x3a9e40u: goto label_3a9e40;
        case 0x3a9e44u: goto label_3a9e44;
        case 0x3a9e48u: goto label_3a9e48;
        case 0x3a9e4cu: goto label_3a9e4c;
        case 0x3a9e50u: goto label_3a9e50;
        case 0x3a9e54u: goto label_3a9e54;
        case 0x3a9e58u: goto label_3a9e58;
        case 0x3a9e5cu: goto label_3a9e5c;
        case 0x3a9e60u: goto label_3a9e60;
        case 0x3a9e64u: goto label_3a9e64;
        case 0x3a9e68u: goto label_3a9e68;
        case 0x3a9e6cu: goto label_3a9e6c;
        case 0x3a9e70u: goto label_3a9e70;
        case 0x3a9e74u: goto label_3a9e74;
        case 0x3a9e78u: goto label_3a9e78;
        case 0x3a9e7cu: goto label_3a9e7c;
        case 0x3a9e80u: goto label_3a9e80;
        case 0x3a9e84u: goto label_3a9e84;
        case 0x3a9e88u: goto label_3a9e88;
        case 0x3a9e8cu: goto label_3a9e8c;
        case 0x3a9e90u: goto label_3a9e90;
        case 0x3a9e94u: goto label_3a9e94;
        case 0x3a9e98u: goto label_3a9e98;
        case 0x3a9e9cu: goto label_3a9e9c;
        case 0x3a9ea0u: goto label_3a9ea0;
        case 0x3a9ea4u: goto label_3a9ea4;
        case 0x3a9ea8u: goto label_3a9ea8;
        case 0x3a9eacu: goto label_3a9eac;
        case 0x3a9eb0u: goto label_3a9eb0;
        case 0x3a9eb4u: goto label_3a9eb4;
        case 0x3a9eb8u: goto label_3a9eb8;
        case 0x3a9ebcu: goto label_3a9ebc;
        case 0x3a9ec0u: goto label_3a9ec0;
        case 0x3a9ec4u: goto label_3a9ec4;
        case 0x3a9ec8u: goto label_3a9ec8;
        case 0x3a9eccu: goto label_3a9ecc;
        case 0x3a9ed0u: goto label_3a9ed0;
        case 0x3a9ed4u: goto label_3a9ed4;
        case 0x3a9ed8u: goto label_3a9ed8;
        case 0x3a9edcu: goto label_3a9edc;
        case 0x3a9ee0u: goto label_3a9ee0;
        case 0x3a9ee4u: goto label_3a9ee4;
        case 0x3a9ee8u: goto label_3a9ee8;
        case 0x3a9eecu: goto label_3a9eec;
        case 0x3a9ef0u: goto label_3a9ef0;
        case 0x3a9ef4u: goto label_3a9ef4;
        case 0x3a9ef8u: goto label_3a9ef8;
        case 0x3a9efcu: goto label_3a9efc;
        case 0x3a9f00u: goto label_3a9f00;
        case 0x3a9f04u: goto label_3a9f04;
        case 0x3a9f08u: goto label_3a9f08;
        case 0x3a9f0cu: goto label_3a9f0c;
        case 0x3a9f10u: goto label_3a9f10;
        case 0x3a9f14u: goto label_3a9f14;
        case 0x3a9f18u: goto label_3a9f18;
        case 0x3a9f1cu: goto label_3a9f1c;
        case 0x3a9f20u: goto label_3a9f20;
        case 0x3a9f24u: goto label_3a9f24;
        case 0x3a9f28u: goto label_3a9f28;
        case 0x3a9f2cu: goto label_3a9f2c;
        case 0x3a9f30u: goto label_3a9f30;
        case 0x3a9f34u: goto label_3a9f34;
        case 0x3a9f38u: goto label_3a9f38;
        case 0x3a9f3cu: goto label_3a9f3c;
        case 0x3a9f40u: goto label_3a9f40;
        case 0x3a9f44u: goto label_3a9f44;
        case 0x3a9f48u: goto label_3a9f48;
        case 0x3a9f4cu: goto label_3a9f4c;
        case 0x3a9f50u: goto label_3a9f50;
        case 0x3a9f54u: goto label_3a9f54;
        case 0x3a9f58u: goto label_3a9f58;
        case 0x3a9f5cu: goto label_3a9f5c;
        case 0x3a9f60u: goto label_3a9f60;
        case 0x3a9f64u: goto label_3a9f64;
        case 0x3a9f68u: goto label_3a9f68;
        case 0x3a9f6cu: goto label_3a9f6c;
        case 0x3a9f70u: goto label_3a9f70;
        case 0x3a9f74u: goto label_3a9f74;
        case 0x3a9f78u: goto label_3a9f78;
        case 0x3a9f7cu: goto label_3a9f7c;
        case 0x3a9f80u: goto label_3a9f80;
        case 0x3a9f84u: goto label_3a9f84;
        case 0x3a9f88u: goto label_3a9f88;
        case 0x3a9f8cu: goto label_3a9f8c;
        case 0x3a9f90u: goto label_3a9f90;
        case 0x3a9f94u: goto label_3a9f94;
        case 0x3a9f98u: goto label_3a9f98;
        case 0x3a9f9cu: goto label_3a9f9c;
        case 0x3a9fa0u: goto label_3a9fa0;
        case 0x3a9fa4u: goto label_3a9fa4;
        case 0x3a9fa8u: goto label_3a9fa8;
        case 0x3a9facu: goto label_3a9fac;
        case 0x3a9fb0u: goto label_3a9fb0;
        case 0x3a9fb4u: goto label_3a9fb4;
        case 0x3a9fb8u: goto label_3a9fb8;
        case 0x3a9fbcu: goto label_3a9fbc;
        case 0x3a9fc0u: goto label_3a9fc0;
        case 0x3a9fc4u: goto label_3a9fc4;
        case 0x3a9fc8u: goto label_3a9fc8;
        case 0x3a9fccu: goto label_3a9fcc;
        case 0x3a9fd0u: goto label_3a9fd0;
        case 0x3a9fd4u: goto label_3a9fd4;
        case 0x3a9fd8u: goto label_3a9fd8;
        case 0x3a9fdcu: goto label_3a9fdc;
        case 0x3a9fe0u: goto label_3a9fe0;
        case 0x3a9fe4u: goto label_3a9fe4;
        case 0x3a9fe8u: goto label_3a9fe8;
        case 0x3a9fecu: goto label_3a9fec;
        case 0x3a9ff0u: goto label_3a9ff0;
        case 0x3a9ff4u: goto label_3a9ff4;
        case 0x3a9ff8u: goto label_3a9ff8;
        case 0x3a9ffcu: goto label_3a9ffc;
        case 0x3aa000u: goto label_3aa000;
        case 0x3aa004u: goto label_3aa004;
        case 0x3aa008u: goto label_3aa008;
        case 0x3aa00cu: goto label_3aa00c;
        case 0x3aa010u: goto label_3aa010;
        case 0x3aa014u: goto label_3aa014;
        case 0x3aa018u: goto label_3aa018;
        case 0x3aa01cu: goto label_3aa01c;
        case 0x3aa020u: goto label_3aa020;
        case 0x3aa024u: goto label_3aa024;
        case 0x3aa028u: goto label_3aa028;
        case 0x3aa02cu: goto label_3aa02c;
        case 0x3aa030u: goto label_3aa030;
        case 0x3aa034u: goto label_3aa034;
        case 0x3aa038u: goto label_3aa038;
        case 0x3aa03cu: goto label_3aa03c;
        case 0x3aa040u: goto label_3aa040;
        case 0x3aa044u: goto label_3aa044;
        case 0x3aa048u: goto label_3aa048;
        case 0x3aa04cu: goto label_3aa04c;
        case 0x3aa050u: goto label_3aa050;
        case 0x3aa054u: goto label_3aa054;
        case 0x3aa058u: goto label_3aa058;
        case 0x3aa05cu: goto label_3aa05c;
        case 0x3aa060u: goto label_3aa060;
        case 0x3aa064u: goto label_3aa064;
        case 0x3aa068u: goto label_3aa068;
        case 0x3aa06cu: goto label_3aa06c;
        case 0x3aa070u: goto label_3aa070;
        case 0x3aa074u: goto label_3aa074;
        case 0x3aa078u: goto label_3aa078;
        case 0x3aa07cu: goto label_3aa07c;
        case 0x3aa080u: goto label_3aa080;
        case 0x3aa084u: goto label_3aa084;
        case 0x3aa088u: goto label_3aa088;
        case 0x3aa08cu: goto label_3aa08c;
        case 0x3aa090u: goto label_3aa090;
        case 0x3aa094u: goto label_3aa094;
        case 0x3aa098u: goto label_3aa098;
        case 0x3aa09cu: goto label_3aa09c;
        case 0x3aa0a0u: goto label_3aa0a0;
        case 0x3aa0a4u: goto label_3aa0a4;
        case 0x3aa0a8u: goto label_3aa0a8;
        case 0x3aa0acu: goto label_3aa0ac;
        case 0x3aa0b0u: goto label_3aa0b0;
        case 0x3aa0b4u: goto label_3aa0b4;
        case 0x3aa0b8u: goto label_3aa0b8;
        case 0x3aa0bcu: goto label_3aa0bc;
        case 0x3aa0c0u: goto label_3aa0c0;
        case 0x3aa0c4u: goto label_3aa0c4;
        case 0x3aa0c8u: goto label_3aa0c8;
        case 0x3aa0ccu: goto label_3aa0cc;
        case 0x3aa0d0u: goto label_3aa0d0;
        case 0x3aa0d4u: goto label_3aa0d4;
        case 0x3aa0d8u: goto label_3aa0d8;
        case 0x3aa0dcu: goto label_3aa0dc;
        case 0x3aa0e0u: goto label_3aa0e0;
        case 0x3aa0e4u: goto label_3aa0e4;
        case 0x3aa0e8u: goto label_3aa0e8;
        case 0x3aa0ecu: goto label_3aa0ec;
        case 0x3aa0f0u: goto label_3aa0f0;
        case 0x3aa0f4u: goto label_3aa0f4;
        case 0x3aa0f8u: goto label_3aa0f8;
        case 0x3aa0fcu: goto label_3aa0fc;
        case 0x3aa100u: goto label_3aa100;
        case 0x3aa104u: goto label_3aa104;
        case 0x3aa108u: goto label_3aa108;
        case 0x3aa10cu: goto label_3aa10c;
        case 0x3aa110u: goto label_3aa110;
        case 0x3aa114u: goto label_3aa114;
        case 0x3aa118u: goto label_3aa118;
        case 0x3aa11cu: goto label_3aa11c;
        case 0x3aa120u: goto label_3aa120;
        case 0x3aa124u: goto label_3aa124;
        case 0x3aa128u: goto label_3aa128;
        case 0x3aa12cu: goto label_3aa12c;
        case 0x3aa130u: goto label_3aa130;
        case 0x3aa134u: goto label_3aa134;
        case 0x3aa138u: goto label_3aa138;
        case 0x3aa13cu: goto label_3aa13c;
        case 0x3aa140u: goto label_3aa140;
        case 0x3aa144u: goto label_3aa144;
        case 0x3aa148u: goto label_3aa148;
        case 0x3aa14cu: goto label_3aa14c;
        case 0x3aa150u: goto label_3aa150;
        case 0x3aa154u: goto label_3aa154;
        case 0x3aa158u: goto label_3aa158;
        case 0x3aa15cu: goto label_3aa15c;
        case 0x3aa160u: goto label_3aa160;
        case 0x3aa164u: goto label_3aa164;
        case 0x3aa168u: goto label_3aa168;
        case 0x3aa16cu: goto label_3aa16c;
        case 0x3aa170u: goto label_3aa170;
        case 0x3aa174u: goto label_3aa174;
        case 0x3aa178u: goto label_3aa178;
        case 0x3aa17cu: goto label_3aa17c;
        case 0x3aa180u: goto label_3aa180;
        case 0x3aa184u: goto label_3aa184;
        case 0x3aa188u: goto label_3aa188;
        case 0x3aa18cu: goto label_3aa18c;
        case 0x3aa190u: goto label_3aa190;
        case 0x3aa194u: goto label_3aa194;
        case 0x3aa198u: goto label_3aa198;
        case 0x3aa19cu: goto label_3aa19c;
        case 0x3aa1a0u: goto label_3aa1a0;
        case 0x3aa1a4u: goto label_3aa1a4;
        case 0x3aa1a8u: goto label_3aa1a8;
        case 0x3aa1acu: goto label_3aa1ac;
        case 0x3aa1b0u: goto label_3aa1b0;
        case 0x3aa1b4u: goto label_3aa1b4;
        case 0x3aa1b8u: goto label_3aa1b8;
        case 0x3aa1bcu: goto label_3aa1bc;
        case 0x3aa1c0u: goto label_3aa1c0;
        case 0x3aa1c4u: goto label_3aa1c4;
        case 0x3aa1c8u: goto label_3aa1c8;
        case 0x3aa1ccu: goto label_3aa1cc;
        case 0x3aa1d0u: goto label_3aa1d0;
        case 0x3aa1d4u: goto label_3aa1d4;
        case 0x3aa1d8u: goto label_3aa1d8;
        case 0x3aa1dcu: goto label_3aa1dc;
        case 0x3aa1e0u: goto label_3aa1e0;
        case 0x3aa1e4u: goto label_3aa1e4;
        case 0x3aa1e8u: goto label_3aa1e8;
        case 0x3aa1ecu: goto label_3aa1ec;
        case 0x3aa1f0u: goto label_3aa1f0;
        case 0x3aa1f4u: goto label_3aa1f4;
        case 0x3aa1f8u: goto label_3aa1f8;
        case 0x3aa1fcu: goto label_3aa1fc;
        case 0x3aa200u: goto label_3aa200;
        case 0x3aa204u: goto label_3aa204;
        case 0x3aa208u: goto label_3aa208;
        case 0x3aa20cu: goto label_3aa20c;
        case 0x3aa210u: goto label_3aa210;
        case 0x3aa214u: goto label_3aa214;
        case 0x3aa218u: goto label_3aa218;
        case 0x3aa21cu: goto label_3aa21c;
        case 0x3aa220u: goto label_3aa220;
        case 0x3aa224u: goto label_3aa224;
        case 0x3aa228u: goto label_3aa228;
        case 0x3aa22cu: goto label_3aa22c;
        case 0x3aa230u: goto label_3aa230;
        case 0x3aa234u: goto label_3aa234;
        case 0x3aa238u: goto label_3aa238;
        case 0x3aa23cu: goto label_3aa23c;
        case 0x3aa240u: goto label_3aa240;
        case 0x3aa244u: goto label_3aa244;
        case 0x3aa248u: goto label_3aa248;
        case 0x3aa24cu: goto label_3aa24c;
        case 0x3aa250u: goto label_3aa250;
        case 0x3aa254u: goto label_3aa254;
        case 0x3aa258u: goto label_3aa258;
        case 0x3aa25cu: goto label_3aa25c;
        case 0x3aa260u: goto label_3aa260;
        case 0x3aa264u: goto label_3aa264;
        case 0x3aa268u: goto label_3aa268;
        case 0x3aa26cu: goto label_3aa26c;
        case 0x3aa270u: goto label_3aa270;
        case 0x3aa274u: goto label_3aa274;
        case 0x3aa278u: goto label_3aa278;
        case 0x3aa27cu: goto label_3aa27c;
        case 0x3aa280u: goto label_3aa280;
        case 0x3aa284u: goto label_3aa284;
        case 0x3aa288u: goto label_3aa288;
        case 0x3aa28cu: goto label_3aa28c;
        case 0x3aa290u: goto label_3aa290;
        case 0x3aa294u: goto label_3aa294;
        case 0x3aa298u: goto label_3aa298;
        case 0x3aa29cu: goto label_3aa29c;
        case 0x3aa2a0u: goto label_3aa2a0;
        case 0x3aa2a4u: goto label_3aa2a4;
        case 0x3aa2a8u: goto label_3aa2a8;
        case 0x3aa2acu: goto label_3aa2ac;
        case 0x3aa2b0u: goto label_3aa2b0;
        case 0x3aa2b4u: goto label_3aa2b4;
        case 0x3aa2b8u: goto label_3aa2b8;
        case 0x3aa2bcu: goto label_3aa2bc;
        case 0x3aa2c0u: goto label_3aa2c0;
        case 0x3aa2c4u: goto label_3aa2c4;
        case 0x3aa2c8u: goto label_3aa2c8;
        case 0x3aa2ccu: goto label_3aa2cc;
        case 0x3aa2d0u: goto label_3aa2d0;
        case 0x3aa2d4u: goto label_3aa2d4;
        case 0x3aa2d8u: goto label_3aa2d8;
        case 0x3aa2dcu: goto label_3aa2dc;
        default: break;
    }

    ctx->pc = 0x3a9da8u;

label_3a9da8:
    // 0x3a9da8: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x3a9da8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
label_3a9dac:
    // 0x3a9dac: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x3a9dacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
label_3a9db0:
    // 0x3a9db0: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x3a9db0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_3a9db4:
    // 0x3a9db4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3a9db4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3a9db8:
    // 0x3a9db8: 0xafa7001c  sw          $a3, 0x1C($sp)
    ctx->pc = 0x3a9db8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 7));
label_3a9dbc:
    // 0x3a9dbc: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x3a9dbcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3a9dc0:
    // 0x3a9dc0: 0xafa60018  sw          $a2, 0x18($sp)
    ctx->pc = 0x3a9dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 6));
label_3a9dc4:
    // 0x3a9dc4: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x3a9dc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
label_3a9dc8:
    // 0x3a9dc8: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x3a9dc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
label_3a9dcc:
    // 0x3a9dcc: 0x3c100062  lui         $s0, 0x62
    ctx->pc = 0x3a9dccu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)98 << 16));
label_3a9dd0:
    // 0x3a9dd0: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x3a9dd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
label_3a9dd4:
    // 0x3a9dd4: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x3a9dd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
label_3a9dd8:
    // 0x3a9dd8: 0x2c0982d  daddu       $s3, $s6, $zero
    ctx->pc = 0x3a9dd8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3a9ddc:
    // 0x3a9ddc: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x3a9ddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
label_3a9de0:
    // 0x3a9de0: 0x7fb70060  sq          $s7, 0x60($sp)
    ctx->pc = 0x3a9de0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 23));
label_3a9de4:
    // 0x3a9de4: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x3a9de4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a9de8:
    // 0x3a9de8: 0x7fbe0050  sq          $fp, 0x50($sp)
    ctx->pc = 0x3a9de8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 30));
label_3a9dec:
    // 0x3a9dec: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3a9decu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_3a9df0:
    // 0x3a9df0: 0x261ece80  addiu       $fp, $s0, -0x3180
    ctx->pc = 0x3a9df0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 16), 4294954624));
label_3a9df4:
    // 0x3a9df4: 0xe7b600f0  swc1        $f22, 0xF0($sp)
    ctx->pc = 0x3a9df4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_3a9df8:
    // 0x3a9df8: 0x3c100062  lui         $s0, 0x62
    ctx->pc = 0x3a9df8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)98 << 16));
label_3a9dfc:
    // 0x3a9dfc: 0xe7b500e8  swc1        $f21, 0xE8($sp)
    ctx->pc = 0x3a9dfcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_3a9e00:
    // 0x3a9e00: 0x2610e880  addiu       $s0, $s0, -0x1780
    ctx->pc = 0x3a9e00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961280));
label_3a9e04:
    // 0x3a9e04: 0xc1082ca  jal         func_420B28
label_3a9e08:
    if (ctx->pc == 0x3A9E08u) {
        ctx->pc = 0x3A9E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9E04u;
        // 0x3a9e08: 0xe7b400e0  swc1        $f20, 0xE0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9E0Cu;
        goto label_3a9e0c;
    }
    ctx->pc = 0x3A9E04u;
    SET_GPR_U32(ctx, 31, 0x3A9E0Cu);
    ctx->pc = 0x3A9E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9E04u;
    // 0x3a9e08: 0xe7b400e0  swc1        $f20, 0xE0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x420B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x420B28u, 0x3A9E04u, 0x3A9E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9E0Cu;
label_3a9e0c:
    // 0x3a9e0c: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x3a9e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_3a9e10:
    // 0x3a9e10: 0x26620024  addiu       $v0, $s3, 0x24
    ctx->pc = 0x3a9e10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 36));
label_3a9e14:
    // 0x3a9e14: 0x8fc40520  lw          $a0, 0x520($fp)
    ctx->pc = 0x3a9e14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1312)));
label_3a9e18:
    // 0x3a9e18: 0xc1082d0  jal         func_420B40
label_3a9e1c:
    if (ctx->pc == 0x3A9E1Cu) {
        ctx->pc = 0x3A9E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9E18u;
        // 0x3a9e1c: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9E20u;
        goto label_3a9e20;
    }
    ctx->pc = 0x3A9E18u;
    SET_GPR_U32(ctx, 31, 0x3A9E20u);
    ctx->pc = 0x3A9E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9E18u;
    // 0x3a9e1c: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x420B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x420B40u, 0x3A9E18u, 0x3A9E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9E20u;
label_3a9e20:
    // 0x3a9e20: 0x8e770130  lw          $s7, 0x130($s3)
    ctx->pc = 0x3a9e20u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 304)));
label_3a9e24:
    // 0x3a9e24: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x3a9e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_3a9e28:
    // 0x3a9e28: 0x8e640134  lw          $a0, 0x134($s3)
    ctx->pc = 0x3a9e28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 308)));
label_3a9e2c:
    // 0x3a9e2c: 0x3c060003  lui         $a2, 0x3
    ctx->pc = 0x3a9e2cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
label_3a9e30:
    // 0x3a9e30: 0x57b80a  movz        $s7, $v0, $s7
    ctx->pc = 0x3a9e30u;
    if (GPR_U64(ctx, 23) == 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 2));
label_3a9e34:
    // 0x3a9e34: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x3a9e34u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
label_3a9e38:
    // 0x3a9e38: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x3a9e38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3a9e3c:
    // 0x3a9e3c: 0x34c60190  ori         $a2, $a2, 0x190
    ctx->pc = 0x3a9e3cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)400);
label_3a9e40:
    // 0x3a9e40: 0xc103722  jal         func_40DC88
label_3a9e44:
    if (ctx->pc == 0x3A9E44u) {
        ctx->pc = 0x3A9E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9E40u;
        // 0x3a9e44: 0x8fd40d74  lw          $s4, 0xD74($fp) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 3444)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9E48u;
        goto label_3a9e48;
    }
    ctx->pc = 0x3A9E40u;
    SET_GPR_U32(ctx, 31, 0x3A9E48u);
    ctx->pc = 0x3A9E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9E40u;
    // 0x3a9e44: 0x8fd40d74  lw          $s4, 0xD74($fp) (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 3444)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DC88u, 0x3A9E40u, 0x3A9E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9E48u;
label_3a9e48:
    // 0x3a9e48: 0xc1036d2  jal         func_40DB48
label_3a9e4c:
    if (ctx->pc == 0x3A9E4Cu) {
        ctx->pc = 0x3A9E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9E48u;
        // 0x3a9e4c: 0x8e640134  lw          $a0, 0x134($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 308)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9E50u;
        goto label_3a9e50;
    }
    ctx->pc = 0x3A9E48u;
    SET_GPR_U32(ctx, 31, 0x3A9E50u);
    ctx->pc = 0x3A9E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9E48u;
    // 0x3a9e4c: 0x8e640134  lw          $a0, 0x134($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 308)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB48u, 0x3A9E48u, 0x3A9E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9E50u;
label_3a9e50:
    // 0x3a9e50: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x3a9e50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
label_3a9e54:
    // 0x3a9e54: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3a9e54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a9e58:
    // 0x3a9e58: 0x173140  sll         $a2, $s7, 5
    ctx->pc = 0x3a9e58u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 23), 5));
label_3a9e5c:
    // 0x3a9e5c: 0xc0bb7e6  jal         func_2EDF98
label_3a9e60:
    if (ctx->pc == 0x3A9E60u) {
        ctx->pc = 0x3A9E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9E5Cu;
        // 0x3a9e60: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9E64u;
        goto label_3a9e64;
    }
    ctx->pc = 0x3A9E5Cu;
    SET_GPR_U32(ctx, 31, 0x3A9E64u);
    ctx->pc = 0x3A9E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9E5Cu;
    // 0x3a9e60: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x3A9E5Cu, 0x3A9E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9E64u;
label_3a9e64:
    // 0x3a9e64: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x3a9e64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_3a9e68:
    // 0x3a9e68: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x3a9e68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_3a9e6c:
    // 0x3a9e6c: 0xc0f0a5a  jal         func_3C2968
label_3a9e70:
    if (ctx->pc == 0x3A9E70u) {
        ctx->pc = 0x3A9E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9E6Cu;
        // 0x3a9e70: 0x8fa60018  lw          $a2, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9E74u;
        goto label_3a9e74;
    }
    ctx->pc = 0x3A9E6Cu;
    SET_GPR_U32(ctx, 31, 0x3A9E74u);
    ctx->pc = 0x3A9E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9E6Cu;
    // 0x3a9e70: 0x8fa60018  lw          $a2, 0x18($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2968u, 0x3A9E6Cu, 0x3A9E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9E74u;
label_3a9e74:
    // 0x3a9e74: 0x3c050061  lui         $a1, 0x61
    ctx->pc = 0x3a9e74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)97 << 16));
label_3a9e78:
    // 0x3a9e78: 0x8e020104  lw          $v0, 0x104($s0)
    ctx->pc = 0x3a9e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
label_3a9e7c:
    // 0x3a9e7c: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x3a9e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_3a9e80:
    // 0x3a9e80: 0x24a59a30  addiu       $a1, $a1, -0x65D0
    ctx->pc = 0x3a9e80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941232));
label_3a9e84:
    // 0x3a9e84: 0x3c070062  lui         $a3, 0x62
    ctx->pc = 0x3a9e84u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)98 << 16));
label_3a9e88:
    // 0x3a9e88: 0x24e7dba4  addiu       $a3, $a3, -0x245C
    ctx->pc = 0x3a9e88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294957988));
label_3a9e8c:
    // 0x3a9e8c: 0x40f809  jalr        $v0
label_3a9e90:
    if (ctx->pc == 0x3A9E90u) {
        ctx->pc = 0x3A9E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9E8Cu;
        // 0x3a9e90: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9E94u;
        goto label_3a9e94;
    }
    ctx->pc = 0x3A9E8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3A9E94u);
        ctx->pc = 0x3A9E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9E8Cu;
        // 0x3a9e90: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A9E8Cu, 0x3A9E94u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A9E94u;
label_3a9e94:
    // 0x3a9e94: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3a9e94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3a9e98:
    // 0x3a9e98: 0x2622ffff  addiu       $v0, $s1, -0x1
    ctx->pc = 0x3a9e98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_3a9e9c:
    // 0x3a9e9c: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x3a9e9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_3a9ea0:
    // 0x3a9ea0: 0x104000fd  beqz        $v0, . + 4 + (0xFD << 2)
label_3a9ea4:
    if (ctx->pc == 0x3A9EA4u) {
        ctx->pc = 0x3A9EA8u;
        goto label_3a9ea8;
    }
    ctx->pc = 0x3A9EA0u;
    {
        const bool branch_taken_0x3a9ea0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a9ea0) {
            ctx->pc = 0x3AA298u;
            goto label_3aa298;
        }
    }
    ctx->pc = 0x3A9EA8u;
label_3a9ea8:
    // 0x3a9ea8: 0xc107156  jal         func_41C558
label_3a9eac:
    if (ctx->pc == 0x3A9EACu) {
        ctx->pc = 0x3A9EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9EA8u;
        // 0x3a9eac: 0x8fc4050c  lw          $a0, 0x50C($fp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1292)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9EB0u;
        goto label_3a9eb0;
    }
    ctx->pc = 0x3A9EA8u;
    SET_GPR_U32(ctx, 31, 0x3A9EB0u);
    ctx->pc = 0x3A9EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9EA8u;
    // 0x3a9eac: 0x8fc4050c  lw          $a0, 0x50C($fp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1292)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C558u, 0x3A9EA8u, 0x3A9EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9EB0u;
label_3a9eb0:
    // 0x3a9eb0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3a9eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a9eb4:
    // 0x3a9eb4: 0x1623001a  bne         $s1, $v1, . + 4 + (0x1A << 2)
label_3a9eb8:
    if (ctx->pc == 0x3A9EB8u) {
        ctx->pc = 0x3A9EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9EB4u;
        // 0x3a9eb8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9EBCu;
        goto label_3a9ebc;
    }
    ctx->pc = 0x3A9EB4u;
    {
        const bool branch_taken_0x3a9eb4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        ctx->pc = 0x3A9EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9EB4u;
        // 0x3a9eb8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9eb4) {
            ctx->pc = 0x3A9F20u;
            goto label_3a9f20;
        }
    }
    ctx->pc = 0x3A9EBCu;
label_3a9ebc:
    // 0x3a9ebc: 0x8fc6050c  lw          $a2, 0x50C($fp)
    ctx->pc = 0x3a9ebcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1292)));
label_3a9ec0:
    // 0x3a9ec0: 0x3c050061  lui         $a1, 0x61
    ctx->pc = 0x3a9ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)97 << 16));
label_3a9ec4:
    // 0x3a9ec4: 0x8e0200c4  lw          $v0, 0xC4($s0)
    ctx->pc = 0x3a9ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
label_3a9ec8:
    // 0x3a9ec8: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x3a9ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
label_3a9ecc:
    // 0x3a9ecc: 0x2484dba4  addiu       $a0, $a0, -0x245C
    ctx->pc = 0x3a9eccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957988));
label_3a9ed0:
    // 0x3a9ed0: 0x24a59a38  addiu       $a1, $a1, -0x65C8
    ctx->pc = 0x3a9ed0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941240));
label_3a9ed4:
    // 0x3a9ed4: 0x40f809  jalr        $v0
label_3a9ed8:
    if (ctx->pc == 0x3A9ED8u) {
        ctx->pc = 0x3A9ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9ED4u;
        // 0x3a9ed8: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9EDCu;
        goto label_3a9edc;
    }
    ctx->pc = 0x3A9ED4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3A9EDCu);
        ctx->pc = 0x3A9ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9ED4u;
        // 0x3a9ed8: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A9ED4u, 0x3A9EDCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A9EDCu;
label_3a9edc:
    // 0x3a9edc: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x3a9edcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
label_3a9ee0:
    // 0x3a9ee0: 0x2484dba4  addiu       $a0, $a0, -0x245C
    ctx->pc = 0x3a9ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957988));
label_3a9ee4:
    // 0x3a9ee4: 0xc0f0b92  jal         func_3C2E48
label_3a9ee8:
    if (ctx->pc == 0x3A9EE8u) {
        ctx->pc = 0x3A9EECu;
        goto label_3a9eec;
    }
    ctx->pc = 0x3A9EE4u;
    SET_GPR_U32(ctx, 31, 0x3A9EECu);
    ctx->pc = 0x3C2E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2E48u, 0x3A9EE4u, 0x3A9EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9EECu;
label_3a9eec:
    // 0x3a9eec: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_3a9ef0:
    if (ctx->pc == 0x3A9EF0u) {
        ctx->pc = 0x3A9EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9EECu;
        // 0x3a9ef0: 0x3c050061  lui         $a1, 0x61 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)97 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9EF4u;
        goto label_3a9ef4;
    }
    ctx->pc = 0x3A9EECu;
    {
        const bool branch_taken_0x3a9eec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A9EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9EECu;
        // 0x3a9ef0: 0x3c050061  lui         $a1, 0x61 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)97 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9eec) {
            ctx->pc = 0x3A9F14u;
            goto label_3a9f14;
        }
    }
    ctx->pc = 0x3A9EF4u;
label_3a9ef4:
    // 0x3a9ef4: 0x8e0200c4  lw          $v0, 0xC4($s0)
    ctx->pc = 0x3a9ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
label_3a9ef8:
    // 0x3a9ef8: 0x24a59a40  addiu       $a1, $a1, -0x65C0
    ctx->pc = 0x3a9ef8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941248));
label_3a9efc:
    // 0x3a9efc: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x3a9efcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
label_3a9f00:
    // 0x3a9f00: 0x2484dba4  addiu       $a0, $a0, -0x245C
    ctx->pc = 0x3a9f00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957988));
label_3a9f04:
    // 0x3a9f04: 0x40f809  jalr        $v0
label_3a9f08:
    if (ctx->pc == 0x3A9F08u) {
        ctx->pc = 0x3A9F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9F04u;
        // 0x3a9f08: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9F0Cu;
        goto label_3a9f0c;
    }
    ctx->pc = 0x3A9F04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3A9F0Cu);
        ctx->pc = 0x3A9F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9F04u;
        // 0x3a9f08: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A9F04u, 0x3A9F0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A9F0Cu;
label_3a9f0c:
    // 0x3a9f0c: 0x10000004  b           . + 4 + (0x4 << 2)
label_3a9f10:
    if (ctx->pc == 0x3A9F10u) {
        ctx->pc = 0x3A9F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9F0Cu;
        // 0x3a9f10: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9F14u;
        goto label_3a9f14;
    }
    ctx->pc = 0x3A9F0Cu;
    {
        const bool branch_taken_0x3a9f0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A9F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9F0Cu;
        // 0x3a9f10: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9f0c) {
            ctx->pc = 0x3A9F20u;
            goto label_3a9f20;
        }
    }
    ctx->pc = 0x3A9F14u;
label_3a9f14:
    // 0x3a9f14: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3a9f14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3a9f18:
    // 0x3a9f18: 0x10000003  b           . + 4 + (0x3 << 2)
label_3a9f1c:
    if (ctx->pc == 0x3A9F1Cu) {
        ctx->pc = 0x3A9F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9F18u;
        // 0x3a9f1c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9F20u;
        goto label_3a9f20;
    }
    ctx->pc = 0x3A9F18u;
    {
        const bool branch_taken_0x3a9f18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A9F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9F18u;
        // 0x3a9f1c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9f18) {
            ctx->pc = 0x3A9F28u;
            goto label_3a9f28;
        }
    }
    ctx->pc = 0x3A9F20u;
label_3a9f20:
    // 0x3a9f20: 0x3c050062  lui         $a1, 0x62
    ctx->pc = 0x3a9f20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)98 << 16));
label_3a9f24:
    // 0x3a9f24: 0x24a5dba4  addiu       $a1, $a1, -0x245C
    ctx->pc = 0x3a9f24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957988));
label_3a9f28:
    // 0x3a9f28: 0xc107fa4  jal         func_41FE90
label_3a9f2c:
    if (ctx->pc == 0x3A9F2Cu) {
        ctx->pc = 0x3A9F30u;
        goto label_3a9f30;
    }
    ctx->pc = 0x3A9F28u;
    SET_GPR_U32(ctx, 31, 0x3A9F30u);
    ctx->pc = 0x41FE90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41FE90u, 0x3A9F28u, 0x3A9F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9F30u;
label_3a9f30:
    // 0x3a9f30: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x3a9f30u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3a9f34:
    // 0x3a9f34: 0x13c000d7  beqz        $fp, . + 4 + (0xD7 << 2)
label_3a9f38:
    if (ctx->pc == 0x3A9F38u) {
        ctx->pc = 0x3A9F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9F34u;
        // 0x3a9f38: 0x8fa4001c  lw          $a0, 0x1C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9F3Cu;
        goto label_3a9f3c;
    }
    ctx->pc = 0x3A9F34u;
    {
        const bool branch_taken_0x3a9f34 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A9F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9F34u;
        // 0x3a9f38: 0x8fa4001c  lw          $a0, 0x1C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9f34) {
            ctx->pc = 0x3AA294u;
            goto label_3aa294;
        }
    }
    ctx->pc = 0x3A9F3Cu;
label_3a9f3c:
    // 0x3a9f3c: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x3a9f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_3a9f40:
    // 0x3a9f40: 0xaede0014  sw          $fp, 0x14($s6)
    ctx->pc = 0x3a9f40u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 20), GPR_U32(ctx, 30));
label_3a9f44:
    // 0x3a9f44: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x3a9f44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_3a9f48:
    // 0x3a9f48: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x3a9f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_3a9f4c:
    // 0x3a9f4c: 0x2470e880  addiu       $s0, $v1, -0x1780
    ctx->pc = 0x3a9f4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961280));
label_3a9f50:
    // 0x3a9f50: 0x8fa60018  lw          $a2, 0x18($sp)
    ctx->pc = 0x3a9f50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_3a9f54:
    // 0x3a9f54: 0x8c520010  lw          $s2, 0x10($v0)
    ctx->pc = 0x3a9f54u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_3a9f58:
    // 0x3a9f58: 0xc0f0a5a  jal         func_3C2968
label_3a9f5c:
    if (ctx->pc == 0x3A9F5Cu) {
        ctx->pc = 0x3A9F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9F58u;
        // 0x3a9f5c: 0x8c51000c  lw          $s1, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9F60u;
        goto label_3a9f60;
    }
    ctx->pc = 0x3A9F58u;
    SET_GPR_U32(ctx, 31, 0x3A9F60u);
    ctx->pc = 0x3A9F5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9F58u;
    // 0x3a9f5c: 0x8c51000c  lw          $s1, 0xC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2968u, 0x3A9F58u, 0x3A9F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9F60u;
label_3a9f60:
    // 0x3a9f60: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x3a9f60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_3a9f64:
    // 0x3a9f64: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3a9f64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3a9f68:
    // 0x3a9f68: 0x3c050061  lui         $a1, 0x61
    ctx->pc = 0x3a9f68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)97 << 16));
label_3a9f6c:
    // 0x3a9f6c: 0x8e020104  lw          $v0, 0x104($s0)
    ctx->pc = 0x3a9f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
label_3a9f70:
    // 0x3a9f70: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x3a9f70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_3a9f74:
    // 0x3a9f74: 0x24a59a48  addiu       $a1, $a1, -0x65B8
    ctx->pc = 0x3a9f74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941256));
label_3a9f78:
    // 0x3a9f78: 0x40f809  jalr        $v0
label_3a9f7c:
    if (ctx->pc == 0x3A9F7Cu) {
        ctx->pc = 0x3A9F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9F78u;
        // 0x3a9f7c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9F80u;
        goto label_3a9f80;
    }
    ctx->pc = 0x3A9F78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3A9F80u);
        ctx->pc = 0x3A9F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9F78u;
        // 0x3a9f7c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A9F78u, 0x3A9F80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A9F80u;
label_3a9f80:
    // 0x3a9f80: 0x44910800  mtc1        $s1, $f1
    ctx->pc = 0x3a9f80u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3a9f84:
    // 0x3a9f84: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3a9f84u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_3a9f88:
    // 0x3a9f88: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3a9f88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3a9f8c:
    // 0x3a9f8c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3a9f8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3a9f90:
    // 0x3a9f90: 0x44921000  mtc1        $s2, $f2
    ctx->pc = 0x3a9f90u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3a9f94:
    // 0x3a9f94: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x3a9f94u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_3a9f98:
    // 0x3a9f98: 0x46010583  div.s       $f22, $f0, $f1
    ctx->pc = 0x3a9f98u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[22] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_3a9f9c:
    // 0x3a9f9c: 0x46020543  div.s       $f21, $f0, $f2
    ctx->pc = 0x3a9f9cu;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
label_3a9fa0:
    // 0x3a9fa0: 0x1000009b  b           . + 4 + (0x9B << 2)
label_3a9fa4:
    if (ctx->pc == 0x3A9FA4u) {
        ctx->pc = 0x3A9FA8u;
        goto label_3a9fa8;
    }
    ctx->pc = 0x3A9FA0u;
    {
        const bool branch_taken_0x3a9fa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a9fa0) {
            ctx->pc = 0x3AA210u;
            goto label_3aa210;
        }
    }
    ctx->pc = 0x3A9FA8u;
label_3a9fa8:
    // 0x3a9fa8: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x3a9fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_3a9fac:
    // 0x3a9fac: 0x2492e880  addiu       $s2, $a0, -0x1780
    ctx->pc = 0x3a9facu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961280));
label_3a9fb0:
    // 0x3a9fb0: 0x2465bfd8  addiu       $a1, $v1, -0x4028
    ctx->pc = 0x3a9fb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950872));
label_3a9fb4:
    // 0x3a9fb4: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x3a9fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_3a9fb8:
    // 0x3a9fb8: 0x27a60004  addiu       $a2, $sp, 0x4
    ctx->pc = 0x3a9fb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
label_3a9fbc:
    // 0x3a9fbc: 0x8e420104  lw          $v0, 0x104($s2)
    ctx->pc = 0x3a9fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
label_3a9fc0:
    // 0x3a9fc0: 0x27a70008  addiu       $a3, $sp, 0x8
    ctx->pc = 0x3a9fc0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
label_3a9fc4:
    // 0x3a9fc4: 0x27a8000c  addiu       $t0, $sp, 0xC
    ctx->pc = 0x3a9fc4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
label_3a9fc8:
    // 0x3a9fc8: 0x27a90010  addiu       $t1, $sp, 0x10
    ctx->pc = 0x3a9fc8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3a9fcc:
    // 0x3a9fcc: 0x40f809  jalr        $v0
label_3a9fd0:
    if (ctx->pc == 0x3A9FD0u) {
        ctx->pc = 0x3A9FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9FCCu;
        // 0x3a9fd0: 0x27aa0014  addiu       $t2, $sp, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9FD4u;
        goto label_3a9fd4;
    }
    ctx->pc = 0x3A9FCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3A9FD4u);
        ctx->pc = 0x3A9FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9FCCu;
        // 0x3a9fd0: 0x27aa0014  addiu       $t2, $sp, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A9FCCu, 0x3A9FD4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A9FD4u;
label_3a9fd4:
    // 0x3a9fd4: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x3a9fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3a9fd8:
    // 0x3a9fd8: 0x1444008d  bne         $v0, $a0, . + 4 + (0x8D << 2)
label_3a9fdc:
    if (ctx->pc == 0x3A9FDCu) {
        ctx->pc = 0x3A9FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9FD8u;
        // 0x3a9fdc: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9FE0u;
        goto label_3a9fe0;
    }
    ctx->pc = 0x3A9FD8u;
    {
        const bool branch_taken_0x3a9fd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x3A9FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9FD8u;
        // 0x3a9fdc: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9fd8) {
            ctx->pc = 0x3AA210u;
            goto label_3aa210;
        }
    }
    ctx->pc = 0x3A9FE0u;
label_3a9fe0:
    // 0x3a9fe0: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x3a9fe0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_3a9fe4:
    // 0x3a9fe4: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x3a9fe4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3a9fe8:
    // 0x3a9fe8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_3a9fec:
    if (ctx->pc == 0x3A9FECu) {
        ctx->pc = 0x3A9FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9FE8u;
        // 0x3a9fec: 0x151140  sll         $v0, $s5, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9FF0u;
        goto label_3a9ff0;
    }
    ctx->pc = 0x3A9FE8u;
    {
        const bool branch_taken_0x3a9fe8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A9FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9FE8u;
        // 0x3a9fec: 0x151140  sll         $v0, $s5, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9fe8) {
            ctx->pc = 0x3A9FF8u;
            goto label_3a9ff8;
        }
    }
    ctx->pc = 0x3A9FF0u;
label_3a9ff0:
    // 0x3a9ff0: 0x10000087  b           . + 4 + (0x87 << 2)
label_3a9ff4:
    if (ctx->pc == 0x3A9FF4u) {
        ctx->pc = 0x3A9FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9FF0u;
        // 0x3a9ff4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9FF8u;
        goto label_3a9ff8;
    }
    ctx->pc = 0x3A9FF0u;
    {
        const bool branch_taken_0x3a9ff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A9FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9FF0u;
        // 0x3a9ff4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9ff0) {
            ctx->pc = 0x3AA210u;
            goto label_3aa210;
        }
    }
    ctx->pc = 0x3A9FF8u;
label_3a9ff8:
    // 0x3a9ff8: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x3a9ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
label_3a9ffc:
    // 0x3a9ffc: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x3a9ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_3aa000:
    // 0x3aa000: 0x2490ce80  addiu       $s0, $a0, -0x3180
    ctx->pc = 0x3aa000u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954624));
label_3aa004:
    // 0x3aa004: 0x26a30001  addiu       $v1, $s5, 0x1
    ctx->pc = 0x3aa004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_3aa008:
    // 0x3aa008: 0x8e040d78  lw          $a0, 0xD78($s0)
    ctx->pc = 0x3aa008u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3448)));
label_3aa00c:
    // 0x3aa00c: 0x2a4102a  slt         $v0, $s5, $a0
    ctx->pc = 0x3aa00cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_3aa010:
    // 0x3aa010: 0x1440003b  bnez        $v0, . + 4 + (0x3B << 2)
label_3aa014:
    if (ctx->pc == 0x3AA014u) {
        ctx->pc = 0x3AA014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA010u;
        // 0x3aa014: 0xafa30030  sw          $v1, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA018u;
        goto label_3aa018;
    }
    ctx->pc = 0x3AA010u;
    {
        const bool branch_taken_0x3aa010 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AA014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA010u;
        // 0x3aa014: 0xafa30030  sw          $v1, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa010) {
            ctx->pc = 0x3AA100u;
            goto label_3aa100;
        }
    }
    ctx->pc = 0x3AA018u;
label_3aa018:
    // 0x3aa018: 0x24910020  addiu       $s1, $a0, 0x20
    ctx->pc = 0x3aa018u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
label_3aa01c:
    // 0x3aa01c: 0x8e420108  lw          $v0, 0x108($s2)
    ctx->pc = 0x3aa01cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 264)));
label_3aa020:
    // 0x3aa020: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x3aa020u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_3aa024:
    // 0x3aa024: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x3aa024u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_3aa028:
    // 0x3aa028: 0x40f809  jalr        $v0
label_3aa02c:
    if (ctx->pc == 0x3AA02Cu) {
        ctx->pc = 0x3AA02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA028u;
        // 0x3aa02c: 0x34a50190  ori         $a1, $a1, 0x190 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)400);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA030u;
        goto label_3aa030;
    }
    ctx->pc = 0x3AA028u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3AA030u);
        ctx->pc = 0x3AA02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA028u;
        // 0x3aa02c: 0x34a50190  ori         $a1, $a1, 0x190 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)400);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AA028u, 0x3AA030u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AA030u;
label_3aa030:
    // 0x3aa030: 0x8e060d78  lw          $a2, 0xD78($s0)
    ctx->pc = 0x3aa030u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3448)));
label_3aa034:
    // 0x3aa034: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3aa034u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3aa038:
    // 0x3aa038: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3aa038u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3aa03c:
    // 0x3aa03c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3aa03cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3aa040:
    // 0x3aa040: 0xc0bb778  jal         func_2EDDE0
label_3aa044:
    if (ctx->pc == 0x3AA044u) {
        ctx->pc = 0x3AA044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA040u;
        // 0x3aa044: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA048u;
        goto label_3aa048;
    }
    ctx->pc = 0x3AA040u;
    SET_GPR_U32(ctx, 31, 0x3AA048u);
    ctx->pc = 0x3AA044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AA040u;
    // 0x3aa044: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x3AA040u, 0x3AA048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AA048u;
label_3aa048:
    // 0x3aa048: 0x8e040d78  lw          $a0, 0xD78($s0)
    ctx->pc = 0x3aa048u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3448)));
label_3aa04c:
    // 0x3aa04c: 0x91102a  slt         $v0, $a0, $s1
    ctx->pc = 0x3aa04cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_3aa050:
    // 0x3aa050: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_3aa054:
    if (ctx->pc == 0x3AA054u) {
        ctx->pc = 0x3AA054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA050u;
        // 0x3aa054: 0x41880  sll         $v1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA058u;
        goto label_3aa058;
    }
    ctx->pc = 0x3AA050u;
    {
        const bool branch_taken_0x3aa050 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AA054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA050u;
        // 0x3aa054: 0x41880  sll         $v1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa050) {
            ctx->pc = 0x3AA0D4u;
            goto label_3aa0d4;
        }
    }
    ctx->pc = 0x3AA058u;
label_3aa058:
    // 0x3aa058: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x3aa058u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3aa05c:
    // 0x3aa05c: 0x2242023  subu        $a0, $s1, $a0
    ctx->pc = 0x3aa05cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
label_3aa060:
    // 0x3aa060: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x3aa060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_3aa064:
    // 0x3aa064: 0x41023  negu        $v0, $a0
    ctx->pc = 0x3aa064u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
label_3aa068:
    // 0x3aa068: 0x30450003  andi        $a1, $v0, 0x3
    ctx->pc = 0x3aa068u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_3aa06c:
    // 0x3aa06c: 0x10a00010  beqz        $a1, . + 4 + (0x10 << 2)
label_3aa070:
    if (ctx->pc == 0x3AA070u) {
        ctx->pc = 0x3AA070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA06Cu;
        // 0x3aa070: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA074u;
        goto label_3aa074;
    }
    ctx->pc = 0x3AA06Cu;
    {
        const bool branch_taken_0x3aa06c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AA070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA06Cu;
        // 0x3aa070: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa06c) {
            ctx->pc = 0x3AA0B0u;
            goto label_3aa0b0;
        }
    }
    ctx->pc = 0x3AA074u;
label_3aa074:
    // 0x3aa074: 0x28a20003  slti        $v0, $a1, 0x3
    ctx->pc = 0x3aa074u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
label_3aa078:
    // 0x3aa078: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_3aa07c:
    if (ctx->pc == 0x3AA07Cu) {
        ctx->pc = 0x3AA07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA078u;
        // 0x3aa07c: 0x28a20002  slti        $v0, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA080u;
        goto label_3aa080;
    }
    ctx->pc = 0x3AA078u;
    {
        const bool branch_taken_0x3aa078 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AA07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA078u;
        // 0x3aa07c: 0x28a20002  slti        $v0, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa078) {
            ctx->pc = 0x3AA0A0u;
            goto label_3aa0a0;
        }
    }
    ctx->pc = 0x3AA080u;
label_3aa080:
    // 0x3aa080: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_3aa084:
    if (ctx->pc == 0x3AA084u) {
        ctx->pc = 0x3AA084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA080u;
        // 0x3aa084: 0xacc70000  sw          $a3, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA088u;
        goto label_3aa088;
    }
    ctx->pc = 0x3AA080u;
    {
        const bool branch_taken_0x3aa080 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3aa080) {
            ctx->pc = 0x3AA084u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AA080u;
            // 0x3aa084: 0xacc70000  sw          $a3, 0x0($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AA098u;
            goto label_3aa098;
        }
    }
    ctx->pc = 0x3AA088u;
label_3aa088:
    // 0x3aa088: 0xac670000  sw          $a3, 0x0($v1)
    ctx->pc = 0x3aa088u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
label_3aa08c:
    // 0x3aa08c: 0x24660004  addiu       $a2, $v1, 0x4
    ctx->pc = 0x3aa08cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_3aa090:
    // 0x3aa090: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3aa090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_3aa094:
    // 0x3aa094: 0xacc70000  sw          $a3, 0x0($a2)
    ctx->pc = 0x3aa094u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 7));
label_3aa098:
    // 0x3aa098: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3aa098u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_3aa09c:
    // 0x3aa09c: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x3aa09cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_3aa0a0:
    // 0x3aa0a0: 0xacc70000  sw          $a3, 0x0($a2)
    ctx->pc = 0x3aa0a0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 7));
label_3aa0a4:
    // 0x3aa0a4: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3aa0a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_3aa0a8:
    // 0x3aa0a8: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
label_3aa0ac:
    if (ctx->pc == 0x3AA0ACu) {
        ctx->pc = 0x3AA0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA0A8u;
        // 0x3aa0ac: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA0B0u;
        goto label_3aa0b0;
    }
    ctx->pc = 0x3AA0A8u;
    {
        const bool branch_taken_0x3aa0a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AA0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA0A8u;
        // 0x3aa0ac: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa0a8) {
            ctx->pc = 0x3AA0D4u;
            goto label_3aa0d4;
        }
    }
    ctx->pc = 0x3AA0B0u;
label_3aa0b0:
    // 0x3aa0b0: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x3aa0b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3aa0b4:
    // 0x3aa0b4: 0x0  nop
    ctx->pc = 0x3aa0b4u;
    // NOP
label_3aa0b8:
    // 0x3aa0b8: 0xac470000  sw          $a3, 0x0($v0)
    ctx->pc = 0x3aa0b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
label_3aa0bc:
    // 0x3aa0bc: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x3aa0bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
label_3aa0c0:
    // 0x3aa0c0: 0xac470004  sw          $a3, 0x4($v0)
    ctx->pc = 0x3aa0c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 7));
label_3aa0c4:
    // 0x3aa0c4: 0xac470008  sw          $a3, 0x8($v0)
    ctx->pc = 0x3aa0c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 7));
label_3aa0c8:
    // 0x3aa0c8: 0xac47000c  sw          $a3, 0xC($v0)
    ctx->pc = 0x3aa0c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 7));
label_3aa0cc:
    // 0x3aa0cc: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
label_3aa0d0:
    if (ctx->pc == 0x3AA0D0u) {
        ctx->pc = 0x3AA0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA0CCu;
        // 0x3aa0d0: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA0D4u;
        goto label_3aa0d4;
    }
    ctx->pc = 0x3AA0CCu;
    {
        const bool branch_taken_0x3aa0cc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AA0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA0CCu;
        // 0x3aa0d0: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa0cc) {
            ctx->pc = 0x3AA0B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3aa0b8;
        }
    }
    ctx->pc = 0x3AA0D4u;
label_3aa0d4:
    // 0x3aa0d4: 0x12800005  beqz        $s4, . + 4 + (0x5 << 2)
label_3aa0d8:
    if (ctx->pc == 0x3AA0D8u) {
        ctx->pc = 0x3AA0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA0D4u;
        // 0x3aa0d8: 0x3c040062  lui         $a0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA0DCu;
        goto label_3aa0dc;
    }
    ctx->pc = 0x3AA0D4u;
    {
        const bool branch_taken_0x3aa0d4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AA0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA0D4u;
        // 0x3aa0d8: 0x3c040062  lui         $a0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa0d4) {
            ctx->pc = 0x3AA0ECu;
            goto label_3aa0ec;
        }
    }
    ctx->pc = 0x3AA0DCu;
label_3aa0dc:
    // 0x3aa0dc: 0x2484e880  addiu       $a0, $a0, -0x1780
    ctx->pc = 0x3aa0dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961280));
label_3aa0e0:
    // 0x3aa0e0: 0x8c82010c  lw          $v0, 0x10C($a0)
    ctx->pc = 0x3aa0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 268)));
label_3aa0e4:
    // 0x3aa0e4: 0x40f809  jalr        $v0
label_3aa0e8:
    if (ctx->pc == 0x3AA0E8u) {
        ctx->pc = 0x3AA0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA0E4u;
        // 0x3aa0e8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA0ECu;
        goto label_3aa0ec;
    }
    ctx->pc = 0x3AA0E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3AA0ECu);
        ctx->pc = 0x3AA0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA0E4u;
        // 0x3aa0e8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AA0E4u, 0x3AA0ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AA0ECu;
label_3aa0ec:
    // 0x3aa0ec: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3aa0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_3aa0f0:
    // 0x3aa0f0: 0x240a02d  daddu       $s4, $s2, $zero
    ctx->pc = 0x3aa0f0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3aa0f4:
    // 0x3aa0f4: 0x2442ce80  addiu       $v0, $v0, -0x3180
    ctx->pc = 0x3aa0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954624));
label_3aa0f8:
    // 0x3aa0f8: 0xac510d78  sw          $s1, 0xD78($v0)
    ctx->pc = 0x3aa0f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3448), GPR_U32(ctx, 17));
label_3aa0fc:
    // 0x3aa0fc: 0xac540d74  sw          $s4, 0xD74($v0)
    ctx->pc = 0x3aa0fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3444), GPR_U32(ctx, 20));
label_3aa100:
    // 0x3aa100: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x3aa100u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_3aa104:
    // 0x3aa104: 0x28a20080  slti        $v0, $a1, 0x80
    ctx->pc = 0x3aa104u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)128) ? 1 : 0);
label_3aa108:
    // 0x3aa108: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_3aa10c:
    if (ctx->pc == 0x3AA10Cu) {
        ctx->pc = 0x3AA10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA108u;
        // 0x3aa10c: 0x8fa30020  lw          $v1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA110u;
        goto label_3aa110;
    }
    ctx->pc = 0x3AA108u;
    {
        const bool branch_taken_0x3aa108 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AA10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA108u;
        // 0x3aa10c: 0x8fa30020  lw          $v1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa108) {
            ctx->pc = 0x3AA12Cu;
            goto label_3aa12c;
        }
    }
    ctx->pc = 0x3AA110u;
label_3aa110:
    // 0x3aa110: 0x8ec20010  lw          $v0, 0x10($s6)
    ctx->pc = 0x3aa110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
label_3aa114:
    // 0x3aa114: 0x151880  sll         $v1, $s5, 2
    ctx->pc = 0x3aa114u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
label_3aa118:
    // 0x3aa118: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x3aa118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_3aa11c:
    // 0x3aa11c: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x3aa11cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_3aa120:
    // 0x3aa120: 0xaec20010  sw          $v0, 0x10($s6)
    ctx->pc = 0x3aa120u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 16), GPR_U32(ctx, 2));
label_3aa124:
    // 0x3aa124: 0x10000004  b           . + 4 + (0x4 << 2)
label_3aa128:
    if (ctx->pc == 0x3AA128u) {
        ctx->pc = 0x3AA128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA124u;
        // 0x3aa128: 0xac650000  sw          $a1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA12Cu;
        goto label_3aa12c;
    }
    ctx->pc = 0x3AA124u;
    {
        const bool branch_taken_0x3aa124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AA128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA124u;
        // 0x3aa128: 0xac650000  sw          $a1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa124) {
            ctx->pc = 0x3AA138u;
            goto label_3aa138;
        }
    }
    ctx->pc = 0x3AA12Cu;
label_3aa12c:
    // 0x3aa12c: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x3aa12cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_3aa130:
    // 0x3aa130: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3aa130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3aa134:
    // 0x3aa134: 0xa4550000  sh          $s5, 0x0($v0)
    ctx->pc = 0x3aa134u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 21));
label_3aa138:
    // 0x3aa138: 0x8fa40024  lw          $a0, 0x24($sp)
    ctx->pc = 0x3aa138u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_3aa13c:
    // 0x3aa13c: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x3aa13cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_3aa140:
    // 0x3aa140: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x3aa140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_3aa144:
    // 0x3aa144: 0x822821  addu        $a1, $a0, $v0
    ctx->pc = 0x3aa144u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_3aa148:
    // 0x3aa148: 0x8fa60014  lw          $a2, 0x14($sp)
    ctx->pc = 0x3aa148u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_3aa14c:
    // 0x3aa14c: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x3aa14cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_3aa150:
    // 0x3aa150: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x3aa150u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_3aa154:
    // 0x3aa154: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x3aa154u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
label_3aa158:
    // 0x3aa158: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x3aa158u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_3aa15c:
    // 0x3aa15c: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x3aa15cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3aa160:
    // 0x3aa160: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3aa160u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3aa164:
    // 0x3aa164: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x3aa164u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3aa168:
    // 0x3aa168: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x3aa168u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_3aa16c:
    // 0x3aa16c: 0x8fb50030  lw          $s5, 0x30($sp)
    ctx->pc = 0x3aa16cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_3aa170:
    // 0x3aa170: 0xc21023  subu        $v0, $a2, $v0
    ctx->pc = 0x3aa170u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_3aa174:
    // 0x3aa174: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x3aa174u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_3aa178:
    // 0x3aa178: 0x44822800  mtc1        $v0, $f5
    ctx->pc = 0x3aa178u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_3aa17c:
    // 0x3aa17c: 0x46802960  cvt.s.w     $f5, $f5
    ctx->pc = 0x3aa17cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
label_3aa180:
    // 0x3aa180: 0xa0a0001c  sb          $zero, 0x1C($a1)
    ctx->pc = 0x3aa180u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 28), (uint8_t)GPR_U32(ctx, 0));
label_3aa184:
    // 0x3aa184: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x3aa184u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3aa188:
    // 0x3aa188: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3aa188u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_3aa18c:
    // 0x3aa18c: 0xacbe0004  sw          $fp, 0x4($a1)
    ctx->pc = 0x3aa18cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 30));
label_3aa190:
    // 0x3aa190: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x3aa190u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_3aa194:
    // 0x3aa194: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x3aa194u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_3aa198:
    // 0x3aa198: 0x2b7102a  slt         $v0, $s5, $s7
    ctx->pc = 0x3aa198u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
label_3aa19c:
    // 0x3aa19c: 0x46142100  add.s       $f4, $f4, $f20
    ctx->pc = 0x3aa19cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[20]);
label_3aa1a0:
    // 0x3aa1a0: 0x46141080  add.s       $f2, $f2, $f20
    ctx->pc = 0x3aa1a0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[20]);
label_3aa1a4:
    // 0x3aa1a4: 0x460518c3  div.s       $f3, $f3, $f5
    ctx->pc = 0x3aa1a4u;
    { if (ctx->f[5] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[3], ctx->f[5]); }
label_3aa1a8:
    // 0x3aa1a8: 0x46140840  add.s       $f1, $f1, $f20
    ctx->pc = 0x3aa1a8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
label_3aa1ac:
    // 0x3aa1ac: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x3aa1acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_3aa1b0:
    // 0x3aa1b0: 0x46162102  mul.s       $f4, $f4, $f22
    ctx->pc = 0x3aa1b0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[22]);
label_3aa1b4:
    // 0x3aa1b4: 0x46151082  mul.s       $f2, $f2, $f21
    ctx->pc = 0x3aa1b4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[21]);
label_3aa1b8:
    // 0x3aa1b8: 0x46160842  mul.s       $f1, $f1, $f22
    ctx->pc = 0x3aa1b8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[22]);
label_3aa1bc:
    // 0x3aa1bc: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x3aa1bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_3aa1c0:
    // 0x3aa1c0: 0xe4a30000  swc1        $f3, 0x0($a1)
    ctx->pc = 0x3aa1c0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_3aa1c4:
    // 0x3aa1c4: 0xe4a40008  swc1        $f4, 0x8($a1)
    ctx->pc = 0x3aa1c4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
label_3aa1c8:
    // 0x3aa1c8: 0xe4a2000c  swc1        $f2, 0xC($a1)
    ctx->pc = 0x3aa1c8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
label_3aa1cc:
    // 0x3aa1cc: 0xe4a10010  swc1        $f1, 0x10($a1)
    ctx->pc = 0x3aa1ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 16), bits); }
label_3aa1d0:
    // 0x3aa1d0: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
label_3aa1d4:
    if (ctx->pc == 0x3AA1D4u) {
        ctx->pc = 0x3AA1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA1D0u;
        // 0x3aa1d4: 0xe4a00014  swc1        $f0, 0x14($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 20), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA1D8u;
        goto label_3aa1d8;
    }
    ctx->pc = 0x3AA1D0u;
    {
        const bool branch_taken_0x3aa1d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AA1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA1D0u;
        // 0x3aa1d4: 0xe4a00014  swc1        $f0, 0x14($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa1d0) {
            ctx->pc = 0x3AA210u;
            goto label_3aa210;
        }
    }
    ctx->pc = 0x3AA1D8u;
label_3aa1d8:
    // 0x3aa1d8: 0x8ec40134  lw          $a0, 0x134($s6)
    ctx->pc = 0x3aa1d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 308)));
label_3aa1dc:
    // 0x3aa1dc: 0x3c060003  lui         $a2, 0x3
    ctx->pc = 0x3aa1dcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
label_3aa1e0:
    // 0x3aa1e0: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x3aa1e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_3aa1e4:
    // 0x3aa1e4: 0xc103722  jal         func_40DC88
label_3aa1e8:
    if (ctx->pc == 0x3AA1E8u) {
        ctx->pc = 0x3AA1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA1E4u;
        // 0x3aa1e8: 0x34c60190  ori         $a2, $a2, 0x190 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)400);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA1ECu;
        goto label_3aa1ec;
    }
    ctx->pc = 0x3AA1E4u;
    SET_GPR_U32(ctx, 31, 0x3AA1ECu);
    ctx->pc = 0x3AA1E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AA1E4u;
    // 0x3aa1e8: 0x34c60190  ori         $a2, $a2, 0x190 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)400);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DC88u, 0x3AA1E4u, 0x3AA1ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AA1ECu;
label_3aa1ec:
    // 0x3aa1ec: 0x26f70020  addiu       $s7, $s7, 0x20
    ctx->pc = 0x3aa1ecu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 32));
label_3aa1f0:
    // 0x3aa1f0: 0xc1036d2  jal         func_40DB48
label_3aa1f4:
    if (ctx->pc == 0x3AA1F4u) {
        ctx->pc = 0x3AA1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA1F0u;
        // 0x3aa1f4: 0x8ec40134  lw          $a0, 0x134($s6) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 308)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA1F8u;
        goto label_3aa1f8;
    }
    ctx->pc = 0x3AA1F0u;
    SET_GPR_U32(ctx, 31, 0x3AA1F8u);
    ctx->pc = 0x3AA1F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AA1F0u;
    // 0x3aa1f4: 0x8ec40134  lw          $a0, 0x134($s6) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 308)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB48u, 0x3AA1F0u, 0x3AA1F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AA1F8u;
label_3aa1f8:
    // 0x3aa1f8: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x3aa1f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
label_3aa1fc:
    // 0x3aa1fc: 0x152140  sll         $a0, $s5, 5
    ctx->pc = 0x3aa1fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 21), 5));
label_3aa200:
    // 0x3aa200: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3aa200u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3aa204:
    // 0x3aa204: 0x24060400  addiu       $a2, $zero, 0x400
    ctx->pc = 0x3aa204u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_3aa208:
    // 0x3aa208: 0xc0bb7e6  jal         func_2EDF98
label_3aa20c:
    if (ctx->pc == 0x3AA20Cu) {
        ctx->pc = 0x3AA20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA208u;
        // 0x3aa20c: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA210u;
        goto label_3aa210;
    }
    ctx->pc = 0x3AA208u;
    SET_GPR_U32(ctx, 31, 0x3AA210u);
    ctx->pc = 0x3AA20Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AA208u;
    // 0x3aa20c: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x3AA208u, 0x3AA210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AA210u;
label_3aa210:
    // 0x3aa210: 0x16760021  bne         $s3, $s6, . + 4 + (0x21 << 2)
label_3aa214:
    if (ctx->pc == 0x3AA214u) {
        ctx->pc = 0x3AA214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA210u;
        // 0x3aa214: 0x8fa4001c  lw          $a0, 0x1C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA218u;
        goto label_3aa218;
    }
    ctx->pc = 0x3AA210u;
    {
        const bool branch_taken_0x3aa210 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 22));
        ctx->pc = 0x3AA214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA210u;
        // 0x3aa214: 0x8fa4001c  lw          $a0, 0x1C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa210) {
            ctx->pc = 0x3AA298u;
            goto label_3aa298;
        }
    }
    ctx->pc = 0x3AA218u;
label_3aa218:
    // 0x3aa218: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x3aa218u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_3aa21c:
    // 0x3aa21c: 0xc0f0a5a  jal         func_3C2968
label_3aa220:
    if (ctx->pc == 0x3AA220u) {
        ctx->pc = 0x3AA220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA21Cu;
        // 0x3aa220: 0x8fa60018  lw          $a2, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA224u;
        goto label_3aa224;
    }
    ctx->pc = 0x3AA21Cu;
    SET_GPR_U32(ctx, 31, 0x3AA224u);
    ctx->pc = 0x3AA220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AA21Cu;
    // 0x3aa220: 0x8fa60018  lw          $a2, 0x18($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2968u, 0x3AA21Cu, 0x3AA224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AA224u;
label_3aa224:
    // 0x3aa224: 0x1440ff60  bnez        $v0, . + 4 + (-0xA0 << 2)
label_3aa228:
    if (ctx->pc == 0x3AA228u) {
        ctx->pc = 0x3AA228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA224u;
        // 0x3aa228: 0x3c040062  lui         $a0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA22Cu;
        goto label_3aa22c;
    }
    ctx->pc = 0x3AA224u;
    {
        const bool branch_taken_0x3aa224 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AA228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA224u;
        // 0x3aa228: 0x3c040062  lui         $a0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa224) {
            ctx->pc = 0x3A9FA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a9fa8;
        }
    }
    ctx->pc = 0x3AA22Cu;
label_3aa22c:
    // 0x3aa22c: 0xae750130  sw          $s5, 0x130($s3)
    ctx->pc = 0x3aa22cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 304), GPR_U32(ctx, 21));
label_3aa230:
    // 0x3aa230: 0xc0ea696  jal         func_3A9A58
label_3aa234:
    if (ctx->pc == 0x3AA234u) {
        ctx->pc = 0x3AA234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA230u;
        // 0x3aa234: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA238u;
        goto label_3aa238;
    }
    ctx->pc = 0x3AA230u;
    SET_GPR_U32(ctx, 31, 0x3AA238u);
    ctx->pc = 0x3AA234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AA230u;
    // 0x3aa234: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A9A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A9A58u, 0x3AA230u, 0x3AA238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AA238u;
label_3aa238:
    // 0x3aa238: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x3aa238u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_3aa23c:
    // 0x3aa23c: 0x2470ce80  addiu       $s0, $v1, -0x3180
    ctx->pc = 0x3aa23cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954624));
label_3aa240:
    // 0x3aa240: 0x8e040d74  lw          $a0, 0xD74($s0)
    ctx->pc = 0x3aa240u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3444)));
label_3aa244:
    // 0x3aa244: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_3aa248:
    if (ctx->pc == 0x3AA248u) {
        ctx->pc = 0x3AA248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA244u;
        // 0x3aa248: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA24Cu;
        goto label_3aa24c;
    }
    ctx->pc = 0x3AA244u;
    {
        const bool branch_taken_0x3aa244 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AA248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA244u;
        // 0x3aa248: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa244) {
            ctx->pc = 0x3AA258u;
            goto label_3aa258;
        }
    }
    ctx->pc = 0x3AA24Cu;
label_3aa24c:
    // 0x3aa24c: 0x8e060d78  lw          $a2, 0xD78($s0)
    ctx->pc = 0x3aa24cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3448)));
label_3aa250:
    // 0x3aa250: 0xc0bb7e6  jal         func_2EDF98
label_3aa254:
    if (ctx->pc == 0x3AA254u) {
        ctx->pc = 0x3AA254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA250u;
        // 0x3aa254: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA258u;
        goto label_3aa258;
    }
    ctx->pc = 0x3AA250u;
    SET_GPR_U32(ctx, 31, 0x3AA258u);
    ctx->pc = 0x3AA254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AA250u;
    // 0x3aa254: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x3AA250u, 0x3AA258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AA258u;
label_3aa258:
    // 0x3aa258: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x3aa258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_3aa25c:
    // 0x3aa25c: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x3aa25cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3aa260:
    // 0x3aa260: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3aa260u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_3aa264:
    // 0x3aa264: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x3aa264u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_3aa268:
    // 0x3aa268: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x3aa268u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
label_3aa26c:
    // 0x3aa26c: 0x2442c538  addiu       $v0, $v0, -0x3AC8
    ctx->pc = 0x3aa26cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952248));
label_3aa270:
    // 0x3aa270: 0xae60000c  sw          $zero, 0xC($s3)
    ctx->pc = 0x3aa270u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 0));
label_3aa274:
    // 0x3aa274: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x3aa274u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3aa278:
    // 0x3aa278: 0xae620138  sw          $v0, 0x138($s3)
    ctx->pc = 0x3aa278u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 312), GPR_U32(ctx, 2));
label_3aa27c:
    // 0x3aa27c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3aa27cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3aa280:
    // 0x3aa280: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3aa280u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3aa284:
    // 0x3aa284: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x3aa284u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_3aa288:
    // 0x3aa288: 0xe6600004  swc1        $f0, 0x4($s3)
    ctx->pc = 0x3aa288u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
label_3aa28c:
    // 0x3aa28c: 0x10000002  b           . + 4 + (0x2 << 2)
label_3aa290:
    if (ctx->pc == 0x3AA290u) {
        ctx->pc = 0x3AA290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA28Cu;
        // 0x3aa290: 0xe6610008  swc1        $f1, 0x8($s3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA294u;
        goto label_3aa294;
    }
    ctx->pc = 0x3AA28Cu;
    {
        const bool branch_taken_0x3aa28c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AA290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA28Cu;
        // 0x3aa290: 0xe6610008  swc1        $f1, 0x8($s3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa28c) {
            ctx->pc = 0x3AA298u;
            goto label_3aa298;
        }
    }
    ctx->pc = 0x3AA294u;
label_3aa294:
    // 0x3aa294: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3aa294u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3aa298:
    // 0x3aa298: 0xc1082d0  jal         func_420B40
label_3aa29c:
    if (ctx->pc == 0x3AA29Cu) {
        ctx->pc = 0x3AA29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA298u;
        // 0x3aa29c: 0x8fa40028  lw          $a0, 0x28($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA2A0u;
        goto label_3aa2a0;
    }
    ctx->pc = 0x3AA298u;
    SET_GPR_U32(ctx, 31, 0x3AA2A0u);
    ctx->pc = 0x3AA29Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AA298u;
    // 0x3aa29c: 0x8fa40028  lw          $a0, 0x28($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x420B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x420B40u, 0x3AA298u, 0x3AA2A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AA2A0u;
label_3aa2a0:
    // 0x3aa2a0: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x3aa2a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3aa2a4:
    // 0x3aa2a4: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x3aa2a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_3aa2a8:
    // 0x3aa2a8: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x3aa2a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_3aa2ac:
    // 0x3aa2ac: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x3aa2acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_3aa2b0:
    // 0x3aa2b0: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x3aa2b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3aa2b4:
    // 0x3aa2b4: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x3aa2b4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3aa2b8:
    // 0x3aa2b8: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x3aa2b8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3aa2bc:
    // 0x3aa2bc: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x3aa2bcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3aa2c0:
    // 0x3aa2c0: 0x7bb70060  lq          $s7, 0x60($sp)
    ctx->pc = 0x3aa2c0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3aa2c4:
    // 0x3aa2c4: 0x7bbe0050  lq          $fp, 0x50($sp)
    ctx->pc = 0x3aa2c4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3aa2c8:
    // 0x3aa2c8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3aa2c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3aa2cc:
    // 0x3aa2cc: 0xc7b600f0  lwc1        $f22, 0xF0($sp)
    ctx->pc = 0x3aa2ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_3aa2d0:
    // 0x3aa2d0: 0xc7b500e8  lwc1        $f21, 0xE8($sp)
    ctx->pc = 0x3aa2d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3aa2d4:
    // 0x3aa2d4: 0xc7b400e0  lwc1        $f20, 0xE0($sp)
    ctx->pc = 0x3aa2d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3aa2d8:
    // 0x3aa2d8: 0x3e00008  jr          $ra
label_3aa2dc:
    if (ctx->pc == 0x3AA2DCu) {
        ctx->pc = 0x3AA2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA2D8u;
        // 0x3aa2dc: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA2E0u;
        goto label_fallthrough_0x3aa2d8;
    }
    ctx->pc = 0x3AA2D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AA2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA2D8u;
        // 0x3aa2dc: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AA2D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3aa2d8:
    ctx->pc = 0x3AA2E0u;
}
