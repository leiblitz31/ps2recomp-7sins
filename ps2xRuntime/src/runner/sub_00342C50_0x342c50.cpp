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

// Function: sub_00342C50
// Address: 0x342c50 - 0x343120
void sub_00342C50_0x342c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00342C50_0x342c50");
#endif

    switch (ctx->pc) {
        case 0x342c50u: goto label_342c50;
        case 0x342c54u: goto label_342c54;
        case 0x342c58u: goto label_342c58;
        case 0x342c5cu: goto label_342c5c;
        case 0x342c60u: goto label_342c60;
        case 0x342c64u: goto label_342c64;
        case 0x342c68u: goto label_342c68;
        case 0x342c6cu: goto label_342c6c;
        case 0x342c70u: goto label_342c70;
        case 0x342c74u: goto label_342c74;
        case 0x342c78u: goto label_342c78;
        case 0x342c7cu: goto label_342c7c;
        case 0x342c80u: goto label_342c80;
        case 0x342c84u: goto label_342c84;
        case 0x342c88u: goto label_342c88;
        case 0x342c8cu: goto label_342c8c;
        case 0x342c90u: goto label_342c90;
        case 0x342c94u: goto label_342c94;
        case 0x342c98u: goto label_342c98;
        case 0x342c9cu: goto label_342c9c;
        case 0x342ca0u: goto label_342ca0;
        case 0x342ca4u: goto label_342ca4;
        case 0x342ca8u: goto label_342ca8;
        case 0x342cacu: goto label_342cac;
        case 0x342cb0u: goto label_342cb0;
        case 0x342cb4u: goto label_342cb4;
        case 0x342cb8u: goto label_342cb8;
        case 0x342cbcu: goto label_342cbc;
        case 0x342cc0u: goto label_342cc0;
        case 0x342cc4u: goto label_342cc4;
        case 0x342cc8u: goto label_342cc8;
        case 0x342cccu: goto label_342ccc;
        case 0x342cd0u: goto label_342cd0;
        case 0x342cd4u: goto label_342cd4;
        case 0x342cd8u: goto label_342cd8;
        case 0x342cdcu: goto label_342cdc;
        case 0x342ce0u: goto label_342ce0;
        case 0x342ce4u: goto label_342ce4;
        case 0x342ce8u: goto label_342ce8;
        case 0x342cecu: goto label_342cec;
        case 0x342cf0u: goto label_342cf0;
        case 0x342cf4u: goto label_342cf4;
        case 0x342cf8u: goto label_342cf8;
        case 0x342cfcu: goto label_342cfc;
        case 0x342d00u: goto label_342d00;
        case 0x342d04u: goto label_342d04;
        case 0x342d08u: goto label_342d08;
        case 0x342d0cu: goto label_342d0c;
        case 0x342d10u: goto label_342d10;
        case 0x342d14u: goto label_342d14;
        case 0x342d18u: goto label_342d18;
        case 0x342d1cu: goto label_342d1c;
        case 0x342d20u: goto label_342d20;
        case 0x342d24u: goto label_342d24;
        case 0x342d28u: goto label_342d28;
        case 0x342d2cu: goto label_342d2c;
        case 0x342d30u: goto label_342d30;
        case 0x342d34u: goto label_342d34;
        case 0x342d38u: goto label_342d38;
        case 0x342d3cu: goto label_342d3c;
        case 0x342d40u: goto label_342d40;
        case 0x342d44u: goto label_342d44;
        case 0x342d48u: goto label_342d48;
        case 0x342d4cu: goto label_342d4c;
        case 0x342d50u: goto label_342d50;
        case 0x342d54u: goto label_342d54;
        case 0x342d58u: goto label_342d58;
        case 0x342d5cu: goto label_342d5c;
        case 0x342d60u: goto label_342d60;
        case 0x342d64u: goto label_342d64;
        case 0x342d68u: goto label_342d68;
        case 0x342d6cu: goto label_342d6c;
        case 0x342d70u: goto label_342d70;
        case 0x342d74u: goto label_342d74;
        case 0x342d78u: goto label_342d78;
        case 0x342d7cu: goto label_342d7c;
        case 0x342d80u: goto label_342d80;
        case 0x342d84u: goto label_342d84;
        case 0x342d88u: goto label_342d88;
        case 0x342d8cu: goto label_342d8c;
        case 0x342d90u: goto label_342d90;
        case 0x342d94u: goto label_342d94;
        case 0x342d98u: goto label_342d98;
        case 0x342d9cu: goto label_342d9c;
        case 0x342da0u: goto label_342da0;
        case 0x342da4u: goto label_342da4;
        case 0x342da8u: goto label_342da8;
        case 0x342dacu: goto label_342dac;
        case 0x342db0u: goto label_342db0;
        case 0x342db4u: goto label_342db4;
        case 0x342db8u: goto label_342db8;
        case 0x342dbcu: goto label_342dbc;
        case 0x342dc0u: goto label_342dc0;
        case 0x342dc4u: goto label_342dc4;
        case 0x342dc8u: goto label_342dc8;
        case 0x342dccu: goto label_342dcc;
        case 0x342dd0u: goto label_342dd0;
        case 0x342dd4u: goto label_342dd4;
        case 0x342dd8u: goto label_342dd8;
        case 0x342ddcu: goto label_342ddc;
        case 0x342de0u: goto label_342de0;
        case 0x342de4u: goto label_342de4;
        case 0x342de8u: goto label_342de8;
        case 0x342decu: goto label_342dec;
        case 0x342df0u: goto label_342df0;
        case 0x342df4u: goto label_342df4;
        case 0x342df8u: goto label_342df8;
        case 0x342dfcu: goto label_342dfc;
        case 0x342e00u: goto label_342e00;
        case 0x342e04u: goto label_342e04;
        case 0x342e08u: goto label_342e08;
        case 0x342e0cu: goto label_342e0c;
        case 0x342e10u: goto label_342e10;
        case 0x342e14u: goto label_342e14;
        case 0x342e18u: goto label_342e18;
        case 0x342e1cu: goto label_342e1c;
        case 0x342e20u: goto label_342e20;
        case 0x342e24u: goto label_342e24;
        case 0x342e28u: goto label_342e28;
        case 0x342e2cu: goto label_342e2c;
        case 0x342e30u: goto label_342e30;
        case 0x342e34u: goto label_342e34;
        case 0x342e38u: goto label_342e38;
        case 0x342e3cu: goto label_342e3c;
        case 0x342e40u: goto label_342e40;
        case 0x342e44u: goto label_342e44;
        case 0x342e48u: goto label_342e48;
        case 0x342e4cu: goto label_342e4c;
        case 0x342e50u: goto label_342e50;
        case 0x342e54u: goto label_342e54;
        case 0x342e58u: goto label_342e58;
        case 0x342e5cu: goto label_342e5c;
        case 0x342e60u: goto label_342e60;
        case 0x342e64u: goto label_342e64;
        case 0x342e68u: goto label_342e68;
        case 0x342e6cu: goto label_342e6c;
        case 0x342e70u: goto label_342e70;
        case 0x342e74u: goto label_342e74;
        case 0x342e78u: goto label_342e78;
        case 0x342e7cu: goto label_342e7c;
        case 0x342e80u: goto label_342e80;
        case 0x342e84u: goto label_342e84;
        case 0x342e88u: goto label_342e88;
        case 0x342e8cu: goto label_342e8c;
        case 0x342e90u: goto label_342e90;
        case 0x342e94u: goto label_342e94;
        case 0x342e98u: goto label_342e98;
        case 0x342e9cu: goto label_342e9c;
        case 0x342ea0u: goto label_342ea0;
        case 0x342ea4u: goto label_342ea4;
        case 0x342ea8u: goto label_342ea8;
        case 0x342eacu: goto label_342eac;
        case 0x342eb0u: goto label_342eb0;
        case 0x342eb4u: goto label_342eb4;
        case 0x342eb8u: goto label_342eb8;
        case 0x342ebcu: goto label_342ebc;
        case 0x342ec0u: goto label_342ec0;
        case 0x342ec4u: goto label_342ec4;
        case 0x342ec8u: goto label_342ec8;
        case 0x342eccu: goto label_342ecc;
        case 0x342ed0u: goto label_342ed0;
        case 0x342ed4u: goto label_342ed4;
        case 0x342ed8u: goto label_342ed8;
        case 0x342edcu: goto label_342edc;
        case 0x342ee0u: goto label_342ee0;
        case 0x342ee4u: goto label_342ee4;
        case 0x342ee8u: goto label_342ee8;
        case 0x342eecu: goto label_342eec;
        case 0x342ef0u: goto label_342ef0;
        case 0x342ef4u: goto label_342ef4;
        case 0x342ef8u: goto label_342ef8;
        case 0x342efcu: goto label_342efc;
        case 0x342f00u: goto label_342f00;
        case 0x342f04u: goto label_342f04;
        case 0x342f08u: goto label_342f08;
        case 0x342f0cu: goto label_342f0c;
        case 0x342f10u: goto label_342f10;
        case 0x342f14u: goto label_342f14;
        case 0x342f18u: goto label_342f18;
        case 0x342f1cu: goto label_342f1c;
        case 0x342f20u: goto label_342f20;
        case 0x342f24u: goto label_342f24;
        case 0x342f28u: goto label_342f28;
        case 0x342f2cu: goto label_342f2c;
        case 0x342f30u: goto label_342f30;
        case 0x342f34u: goto label_342f34;
        case 0x342f38u: goto label_342f38;
        case 0x342f3cu: goto label_342f3c;
        case 0x342f40u: goto label_342f40;
        case 0x342f44u: goto label_342f44;
        case 0x342f48u: goto label_342f48;
        case 0x342f4cu: goto label_342f4c;
        case 0x342f50u: goto label_342f50;
        case 0x342f54u: goto label_342f54;
        case 0x342f58u: goto label_342f58;
        case 0x342f5cu: goto label_342f5c;
        case 0x342f60u: goto label_342f60;
        case 0x342f64u: goto label_342f64;
        case 0x342f68u: goto label_342f68;
        case 0x342f6cu: goto label_342f6c;
        case 0x342f70u: goto label_342f70;
        case 0x342f74u: goto label_342f74;
        case 0x342f78u: goto label_342f78;
        case 0x342f7cu: goto label_342f7c;
        case 0x342f80u: goto label_342f80;
        case 0x342f84u: goto label_342f84;
        case 0x342f88u: goto label_342f88;
        case 0x342f8cu: goto label_342f8c;
        case 0x342f90u: goto label_342f90;
        case 0x342f94u: goto label_342f94;
        case 0x342f98u: goto label_342f98;
        case 0x342f9cu: goto label_342f9c;
        case 0x342fa0u: goto label_342fa0;
        case 0x342fa4u: goto label_342fa4;
        case 0x342fa8u: goto label_342fa8;
        case 0x342facu: goto label_342fac;
        case 0x342fb0u: goto label_342fb0;
        case 0x342fb4u: goto label_342fb4;
        case 0x342fb8u: goto label_342fb8;
        case 0x342fbcu: goto label_342fbc;
        case 0x342fc0u: goto label_342fc0;
        case 0x342fc4u: goto label_342fc4;
        case 0x342fc8u: goto label_342fc8;
        case 0x342fccu: goto label_342fcc;
        case 0x342fd0u: goto label_342fd0;
        case 0x342fd4u: goto label_342fd4;
        case 0x342fd8u: goto label_342fd8;
        case 0x342fdcu: goto label_342fdc;
        case 0x342fe0u: goto label_342fe0;
        case 0x342fe4u: goto label_342fe4;
        case 0x342fe8u: goto label_342fe8;
        case 0x342fecu: goto label_342fec;
        case 0x342ff0u: goto label_342ff0;
        case 0x342ff4u: goto label_342ff4;
        case 0x342ff8u: goto label_342ff8;
        case 0x342ffcu: goto label_342ffc;
        case 0x343000u: goto label_343000;
        case 0x343004u: goto label_343004;
        case 0x343008u: goto label_343008;
        case 0x34300cu: goto label_34300c;
        case 0x343010u: goto label_343010;
        case 0x343014u: goto label_343014;
        case 0x343018u: goto label_343018;
        case 0x34301cu: goto label_34301c;
        case 0x343020u: goto label_343020;
        case 0x343024u: goto label_343024;
        case 0x343028u: goto label_343028;
        case 0x34302cu: goto label_34302c;
        case 0x343030u: goto label_343030;
        case 0x343034u: goto label_343034;
        case 0x343038u: goto label_343038;
        case 0x34303cu: goto label_34303c;
        case 0x343040u: goto label_343040;
        case 0x343044u: goto label_343044;
        case 0x343048u: goto label_343048;
        case 0x34304cu: goto label_34304c;
        case 0x343050u: goto label_343050;
        case 0x343054u: goto label_343054;
        case 0x343058u: goto label_343058;
        case 0x34305cu: goto label_34305c;
        case 0x343060u: goto label_343060;
        case 0x343064u: goto label_343064;
        case 0x343068u: goto label_343068;
        case 0x34306cu: goto label_34306c;
        case 0x343070u: goto label_343070;
        case 0x343074u: goto label_343074;
        case 0x343078u: goto label_343078;
        case 0x34307cu: goto label_34307c;
        case 0x343080u: goto label_343080;
        case 0x343084u: goto label_343084;
        case 0x343088u: goto label_343088;
        case 0x34308cu: goto label_34308c;
        case 0x343090u: goto label_343090;
        case 0x343094u: goto label_343094;
        case 0x343098u: goto label_343098;
        case 0x34309cu: goto label_34309c;
        case 0x3430a0u: goto label_3430a0;
        case 0x3430a4u: goto label_3430a4;
        case 0x3430a8u: goto label_3430a8;
        case 0x3430acu: goto label_3430ac;
        case 0x3430b0u: goto label_3430b0;
        case 0x3430b4u: goto label_3430b4;
        case 0x3430b8u: goto label_3430b8;
        case 0x3430bcu: goto label_3430bc;
        case 0x3430c0u: goto label_3430c0;
        case 0x3430c4u: goto label_3430c4;
        case 0x3430c8u: goto label_3430c8;
        case 0x3430ccu: goto label_3430cc;
        case 0x3430d0u: goto label_3430d0;
        case 0x3430d4u: goto label_3430d4;
        case 0x3430d8u: goto label_3430d8;
        case 0x3430dcu: goto label_3430dc;
        case 0x3430e0u: goto label_3430e0;
        case 0x3430e4u: goto label_3430e4;
        case 0x3430e8u: goto label_3430e8;
        case 0x3430ecu: goto label_3430ec;
        case 0x3430f0u: goto label_3430f0;
        case 0x3430f4u: goto label_3430f4;
        case 0x3430f8u: goto label_3430f8;
        case 0x3430fcu: goto label_3430fc;
        case 0x343100u: goto label_343100;
        case 0x343104u: goto label_343104;
        case 0x343108u: goto label_343108;
        case 0x34310cu: goto label_34310c;
        case 0x343110u: goto label_343110;
        case 0x343114u: goto label_343114;
        case 0x343118u: goto label_343118;
        case 0x34311cu: goto label_34311c;
        default: break;
    }

    ctx->pc = 0x342c50u;

label_342c50:
    // 0x342c50: 0x8c870018  lw          $a3, 0x18($a0)
    ctx->pc = 0x342c50u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_342c54:
    // 0x342c54: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x342c54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_342c58:
    // 0x342c58: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x342c58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_342c5c:
    // 0x342c5c: 0xaca70000  sw          $a3, 0x0($a1)
    ctx->pc = 0x342c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 7));
label_342c60:
    // 0x342c60: 0x3e00008  jr          $ra
label_342c64:
    if (ctx->pc == 0x342C64u) {
        ctx->pc = 0x342C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342C60u;
        // 0x342c64: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342C68u;
        goto label_342c68;
    }
    ctx->pc = 0x342C60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x342C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342C60u;
        // 0x342c64: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x342C60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x342C68u;
label_342c68:
    // 0x342c68: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x342c68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_342c6c:
    // 0x342c6c: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x342c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_342c70:
    // 0x342c70: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x342c70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_342c74:
    // 0x342c74: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x342c74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_342c78:
    // 0x342c78: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x342c78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_342c7c:
    // 0x342c7c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x342c7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_342c80:
    // 0x342c80: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x342c80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_342c84:
    // 0x342c84: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x342c84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_342c88:
    // 0x342c88: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x342c88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_342c8c:
    // 0x342c8c: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x342c8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_342c90:
    // 0x342c90: 0x8c62e988  lw          $v0, -0x1678($v1)
    ctx->pc = 0x342c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961544)));
label_342c94:
    // 0x342c94: 0x34a50130  ori         $a1, $a1, 0x130
    ctx->pc = 0x342c94u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)304);
label_342c98:
    // 0x342c98: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x342c98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_342c9c:
    // 0x342c9c: 0x922018  mult        $a0, $a0, $s2
    ctx->pc = 0x342c9cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_342ca0:
    // 0x342ca0: 0x40f809  jalr        $v0
label_342ca4:
    if (ctx->pc == 0x342CA4u) {
        ctx->pc = 0x342CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342CA0u;
        // 0x342ca4: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342CA8u;
        goto label_342ca8;
    }
    ctx->pc = 0x342CA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x342CA8u);
        ctx->pc = 0x342CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342CA0u;
        // 0x342ca4: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x342CA0u, 0x342CA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x342CA8u;
label_342ca8:
    // 0x342ca8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x342ca8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_342cac:
    // 0x342cac: 0x1200001b  beqz        $s0, . + 4 + (0x1B << 2)
label_342cb0:
    if (ctx->pc == 0x342CB0u) {
        ctx->pc = 0x342CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342CACu;
        // 0x342cb0: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342CB4u;
        goto label_342cb4;
    }
    ctx->pc = 0x342CACu;
    {
        const bool branch_taken_0x342cac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x342CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342CACu;
        // 0x342cb0: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342cac) {
            ctx->pc = 0x342D1Cu;
            goto label_342d1c;
        }
    }
    ctx->pc = 0x342CB4u;
label_342cb4:
    // 0x342cb4: 0xae12000c  sw          $s2, 0xC($s0)
    ctx->pc = 0x342cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 18));
label_342cb8:
    // 0x342cb8: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x342cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
label_342cbc:
    // 0x342cbc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x342cbcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_342cc0:
    // 0x342cc0: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x342cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_342cc4:
    // 0x342cc4: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x342cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_342cc8:
    // 0x342cc8: 0xae110004  sw          $s1, 0x4($s0)
    ctx->pc = 0x342cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
label_342ccc:
    // 0x342ccc: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x342cccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_342cd0:
    // 0x342cd0: 0x18400012  blez        $v0, . + 4 + (0x12 << 2)
label_342cd4:
    if (ctx->pc == 0x342CD4u) {
        ctx->pc = 0x342CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342CD0u;
        // 0x342cd4: 0xae100000  sw          $s0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342CD8u;
        goto label_342cd8;
    }
    ctx->pc = 0x342CD0u;
    {
        const bool branch_taken_0x342cd0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x342CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342CD0u;
        // 0x342cd4: 0xae100000  sw          $s0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342cd0) {
            ctx->pc = 0x342D1Cu;
            goto label_342d1c;
        }
    }
    ctx->pc = 0x342CD8u;
label_342cd8:
    // 0x342cd8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x342cd8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_342cdc:
    // 0x342cdc: 0x0  nop
    ctx->pc = 0x342cdcu;
    // NOP
label_342ce0:
    // 0x342ce0: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x342ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_342ce4:
    // 0x342ce4: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x342ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_342ce8:
    // 0x342ce8: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x342ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_342cec:
    // 0x342cec: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_342cf0:
    if (ctx->pc == 0x342CF0u) {
        ctx->pc = 0x342CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342CECu;
        // 0x342cf0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342CF4u;
        goto label_342cf4;
    }
    ctx->pc = 0x342CECu;
    {
        const bool branch_taken_0x342cec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x342CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342CECu;
        // 0x342cf0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342cec) {
            ctx->pc = 0x342D08u;
            goto label_342d08;
        }
    }
    ctx->pc = 0x342CF4u;
label_342cf4:
    // 0x342cf4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x342cf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_342cf8:
    // 0x342cf8: 0x40f809  jalr        $v0
label_342cfc:
    if (ctx->pc == 0x342CFCu) {
        ctx->pc = 0x342CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342CF8u;
        // 0x342cfc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342D00u;
        goto label_342d00;
    }
    ctx->pc = 0x342CF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x342D00u);
        ctx->pc = 0x342CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342CF8u;
        // 0x342cfc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x342CF8u, 0x342D00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x342D00u;
label_342d00:
    // 0x342d00: 0x14500007  bne         $v0, $s0, . + 4 + (0x7 << 2)
label_342d04:
    if (ctx->pc == 0x342D04u) {
        ctx->pc = 0x342D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342D00u;
        // 0x342d04: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342D08u;
        goto label_342d08;
    }
    ctx->pc = 0x342D00u;
    {
        const bool branch_taken_0x342d00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x342D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342D00u;
        // 0x342d04: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342d00) {
            ctx->pc = 0x342D20u;
            goto label_342d20;
        }
    }
    ctx->pc = 0x342D08u;
label_342d08:
    // 0x342d08: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x342d08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_342d0c:
    // 0x342d0c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x342d0cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_342d10:
    // 0x342d10: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x342d10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_342d14:
    // 0x342d14: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
label_342d18:
    if (ctx->pc == 0x342D18u) {
        ctx->pc = 0x342D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342D14u;
        // 0x342d18: 0x2673001c  addiu       $s3, $s3, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342D1Cu;
        goto label_342d1c;
    }
    ctx->pc = 0x342D14u;
    {
        const bool branch_taken_0x342d14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x342D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342D14u;
        // 0x342d18: 0x2673001c  addiu       $s3, $s3, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342d14) {
            ctx->pc = 0x342CE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_342ce0;
        }
    }
    ctx->pc = 0x342D1Cu;
label_342d1c:
    // 0x342d1c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x342d1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_342d20:
    // 0x342d20: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x342d20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_342d24:
    // 0x342d24: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x342d24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_342d28:
    // 0x342d28: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x342d28u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_342d2c:
    // 0x342d2c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x342d2cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_342d30:
    // 0x342d30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x342d30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_342d34:
    // 0x342d34: 0x3e00008  jr          $ra
label_342d38:
    if (ctx->pc == 0x342D38u) {
        ctx->pc = 0x342D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342D34u;
        // 0x342d38: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342D3Cu;
        goto label_342d3c;
    }
    ctx->pc = 0x342D34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x342D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342D34u;
        // 0x342d38: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x342D34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x342D3Cu;
label_342d3c:
    // 0x342d3c: 0x0  nop
    ctx->pc = 0x342d3cu;
    // NOP
label_342d40:
    // 0x342d40: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x342d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_342d44:
    // 0x342d44: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x342d44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_342d48:
    // 0x342d48: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x342d48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_342d4c:
    // 0x342d4c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x342d4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_342d50:
    // 0x342d50: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x342d50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_342d54:
    // 0x342d54: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x342d54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_342d58:
    // 0x342d58: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x342d58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_342d5c:
    // 0x342d5c: 0x1200001e  beqz        $s0, . + 4 + (0x1E << 2)
label_342d60:
    if (ctx->pc == 0x342D60u) {
        ctx->pc = 0x342D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342D5Cu;
        // 0x342d60: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342D64u;
        goto label_342d64;
    }
    ctx->pc = 0x342D5Cu;
    {
        const bool branch_taken_0x342d5c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x342D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342D5Cu;
        // 0x342d60: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342d5c) {
            ctx->pc = 0x342DD8u;
            goto label_342dd8;
        }
    }
    ctx->pc = 0x342D64u;
label_342d64:
    // 0x342d64: 0x8e110004  lw          $s1, 0x4($s0)
    ctx->pc = 0x342d64u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_342d68:
    // 0x342d68: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x342d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_342d6c:
    // 0x342d6c: 0x18400011  blez        $v0, . + 4 + (0x11 << 2)
label_342d70:
    if (ctx->pc == 0x342D70u) {
        ctx->pc = 0x342D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342D6Cu;
        // 0x342d70: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342D74u;
        goto label_342d74;
    }
    ctx->pc = 0x342D6Cu;
    {
        const bool branch_taken_0x342d6c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x342D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342D6Cu;
        // 0x342d70: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342d6c) {
            ctx->pc = 0x342DB4u;
            goto label_342db4;
        }
    }
    ctx->pc = 0x342D74u;
label_342d74:
    // 0x342d74: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x342d74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_342d78:
    // 0x342d78: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x342d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_342d7c:
    // 0x342d7c: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x342d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_342d80:
    // 0x342d80: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x342d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_342d84:
    // 0x342d84: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_342d88:
    if (ctx->pc == 0x342D88u) {
        ctx->pc = 0x342D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342D84u;
        // 0x342d88: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342D8Cu;
        goto label_342d8c;
    }
    ctx->pc = 0x342D84u;
    {
        const bool branch_taken_0x342d84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x342D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342D84u;
        // 0x342d88: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342d84) {
            ctx->pc = 0x342DA0u;
            goto label_342da0;
        }
    }
    ctx->pc = 0x342D8Cu;
label_342d8c:
    // 0x342d8c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x342d8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_342d90:
    // 0x342d90: 0x40f809  jalr        $v0
label_342d94:
    if (ctx->pc == 0x342D94u) {
        ctx->pc = 0x342D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342D90u;
        // 0x342d94: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342D98u;
        goto label_342d98;
    }
    ctx->pc = 0x342D90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x342D98u);
        ctx->pc = 0x342D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342D90u;
        // 0x342d94: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x342D90u, 0x342D98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x342D98u;
label_342d98:
    // 0x342d98: 0x1450000a  bne         $v0, $s0, . + 4 + (0xA << 2)
label_342d9c:
    if (ctx->pc == 0x342D9Cu) {
        ctx->pc = 0x342D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342D98u;
        // 0x342d9c: 0x3c020062  lui         $v0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342DA0u;
        goto label_342da0;
    }
    ctx->pc = 0x342D98u;
    {
        const bool branch_taken_0x342d98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x342D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342D98u;
        // 0x342d9c: 0x3c020062  lui         $v0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342d98) {
            ctx->pc = 0x342DC4u;
            goto label_342dc4;
        }
    }
    ctx->pc = 0x342DA0u;
label_342da0:
    // 0x342da0: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x342da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_342da4:
    // 0x342da4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x342da4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_342da8:
    // 0x342da8: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x342da8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_342dac:
    // 0x342dac: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
label_342db0:
    if (ctx->pc == 0x342DB0u) {
        ctx->pc = 0x342DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342DACu;
        // 0x342db0: 0x2652001c  addiu       $s2, $s2, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342DB4u;
        goto label_342db4;
    }
    ctx->pc = 0x342DACu;
    {
        const bool branch_taken_0x342dac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x342DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342DACu;
        // 0x342db0: 0x2652001c  addiu       $s2, $s2, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342dac) {
            ctx->pc = 0x342D78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_342d78;
        }
    }
    ctx->pc = 0x342DB4u;
label_342db4:
    // 0x342db4: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x342db4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_342db8:
    // 0x342db8: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x342db8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_342dbc:
    // 0x342dbc: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x342dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_342dc0:
    // 0x342dc0: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x342dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_342dc4:
    // 0x342dc4: 0x2442e880  addiu       $v0, $v0, -0x1780
    ctx->pc = 0x342dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_342dc8:
    // 0x342dc8: 0x8c43010c  lw          $v1, 0x10C($v0)
    ctx->pc = 0x342dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 268)));
label_342dcc:
    // 0x342dcc: 0x60f809  jalr        $v1
label_342dd0:
    if (ctx->pc == 0x342DD0u) {
        ctx->pc = 0x342DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342DCCu;
        // 0x342dd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342DD4u;
        goto label_342dd4;
    }
    ctx->pc = 0x342DCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x342DD4u);
        ctx->pc = 0x342DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342DCCu;
        // 0x342dd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x342DCCu, 0x342DD4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x342DD4u;
label_342dd4:
    // 0x342dd4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x342dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_342dd8:
    // 0x342dd8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x342dd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_342ddc:
    // 0x342ddc: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x342ddcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_342de0:
    // 0x342de0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x342de0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_342de4:
    // 0x342de4: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x342de4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_342de8:
    // 0x342de8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x342de8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_342dec:
    // 0x342dec: 0x3e00008  jr          $ra
label_342df0:
    if (ctx->pc == 0x342DF0u) {
        ctx->pc = 0x342DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342DECu;
        // 0x342df0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342DF4u;
        goto label_342df4;
    }
    ctx->pc = 0x342DECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x342DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342DECu;
        // 0x342df0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x342DECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x342DF4u;
label_342df4:
    // 0x342df4: 0x0  nop
    ctx->pc = 0x342df4u;
    // NOP
label_342df8:
    // 0x342df8: 0x54800003  bnel        $a0, $zero, . + 4 + (0x3 << 2)
label_342dfc:
    if (ctx->pc == 0x342DFCu) {
        ctx->pc = 0x342DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342DF8u;
        // 0x342dfc: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342E00u;
        goto label_342e00;
    }
    ctx->pc = 0x342DF8u;
    {
        const bool branch_taken_0x342df8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x342df8) {
            ctx->pc = 0x342DFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x342DF8u;
            // 0x342dfc: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x342E08u;
            goto label_342e08;
        }
    }
    ctx->pc = 0x342E00u;
label_342e00:
    // 0x342e00: 0x10000003  b           . + 4 + (0x3 << 2)
label_342e04:
    if (ctx->pc == 0x342E04u) {
        ctx->pc = 0x342E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342E00u;
        // 0x342e04: 0xaca50000  sw          $a1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342E08u;
        goto label_342e08;
    }
    ctx->pc = 0x342E00u;
    {
        const bool branch_taken_0x342e00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x342E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342E00u;
        // 0x342e04: 0xaca50000  sw          $a1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342e00) {
            ctx->pc = 0x342E10u;
            goto label_342e10;
        }
    }
    ctx->pc = 0x342E08u;
label_342e08:
    // 0x342e08: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x342e08u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_342e0c:
    // 0x342e0c: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x342e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
label_342e10:
    // 0x342e10: 0x3e00008  jr          $ra
label_342e14:
    if (ctx->pc == 0x342E14u) {
        ctx->pc = 0x342E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342E10u;
        // 0x342e14: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342E18u;
        goto label_342e18;
    }
    ctx->pc = 0x342E10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x342E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342E10u;
        // 0x342e14: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x342E10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x342E18u;
label_342e18:
    // 0x342e18: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x342e18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_342e1c:
    // 0x342e1c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x342e1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_342e20:
    // 0x342e20: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x342e20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_342e24:
    // 0x342e24: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x342e24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_342e28:
    // 0x342e28: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x342e28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_342e2c:
    // 0x342e2c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x342e2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_342e30:
    // 0x342e30: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x342e30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_342e34:
    // 0x342e34: 0x8e120004  lw          $s2, 0x4($s0)
    ctx->pc = 0x342e34u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_342e38:
    // 0x342e38: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x342e38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_342e3c:
    // 0x342e3c: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x342e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_342e40:
    // 0x342e40: 0xae100000  sw          $s0, 0x0($s0)
    ctx->pc = 0x342e40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 16));
label_342e44:
    // 0x342e44: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x342e44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_342e48:
    // 0x342e48: 0x18400012  blez        $v0, . + 4 + (0x12 << 2)
label_342e4c:
    if (ctx->pc == 0x342E4Cu) {
        ctx->pc = 0x342E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342E48u;
        // 0x342e4c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342E50u;
        goto label_342e50;
    }
    ctx->pc = 0x342E48u;
    {
        const bool branch_taken_0x342e48 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x342E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342E48u;
        // 0x342e4c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342e48) {
            ctx->pc = 0x342E94u;
            goto label_342e94;
        }
    }
    ctx->pc = 0x342E50u;
label_342e50:
    // 0x342e50: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x342e50u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_342e54:
    // 0x342e54: 0x0  nop
    ctx->pc = 0x342e54u;
    // NOP
label_342e58:
    // 0x342e58: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x342e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_342e5c:
    // 0x342e5c: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x342e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_342e60:
    // 0x342e60: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x342e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_342e64:
    // 0x342e64: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_342e68:
    if (ctx->pc == 0x342E68u) {
        ctx->pc = 0x342E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342E64u;
        // 0x342e68: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342E6Cu;
        goto label_342e6c;
    }
    ctx->pc = 0x342E64u;
    {
        const bool branch_taken_0x342e64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x342E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342E64u;
        // 0x342e68: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342e64) {
            ctx->pc = 0x342E80u;
            goto label_342e80;
        }
    }
    ctx->pc = 0x342E6Cu;
label_342e6c:
    // 0x342e6c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x342e6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_342e70:
    // 0x342e70: 0x40f809  jalr        $v0
label_342e74:
    if (ctx->pc == 0x342E74u) {
        ctx->pc = 0x342E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342E70u;
        // 0x342e74: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342E78u;
        goto label_342e78;
    }
    ctx->pc = 0x342E70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x342E78u);
        ctx->pc = 0x342E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342E70u;
        // 0x342e74: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x342E70u, 0x342E78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x342E78u;
label_342e78:
    // 0x342e78: 0x14500007  bne         $v0, $s0, . + 4 + (0x7 << 2)
label_342e7c:
    if (ctx->pc == 0x342E7Cu) {
        ctx->pc = 0x342E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342E78u;
        // 0x342e7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342E80u;
        goto label_342e80;
    }
    ctx->pc = 0x342E78u;
    {
        const bool branch_taken_0x342e78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x342E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342E78u;
        // 0x342e7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342e78) {
            ctx->pc = 0x342E98u;
            goto label_342e98;
        }
    }
    ctx->pc = 0x342E80u;
label_342e80:
    // 0x342e80: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x342e80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_342e84:
    // 0x342e84: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x342e84u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_342e88:
    // 0x342e88: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x342e88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_342e8c:
    // 0x342e8c: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
label_342e90:
    if (ctx->pc == 0x342E90u) {
        ctx->pc = 0x342E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342E8Cu;
        // 0x342e90: 0x2673001c  addiu       $s3, $s3, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342E94u;
        goto label_342e94;
    }
    ctx->pc = 0x342E8Cu;
    {
        const bool branch_taken_0x342e8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x342E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342E8Cu;
        // 0x342e90: 0x2673001c  addiu       $s3, $s3, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342e8c) {
            ctx->pc = 0x342E58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_342e58;
        }
    }
    ctx->pc = 0x342E94u;
label_342e94:
    // 0x342e94: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x342e94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_342e98:
    // 0x342e98: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x342e98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_342e9c:
    // 0x342e9c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x342e9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_342ea0:
    // 0x342ea0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x342ea0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_342ea4:
    // 0x342ea4: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x342ea4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_342ea8:
    // 0x342ea8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x342ea8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_342eac:
    // 0x342eac: 0x3e00008  jr          $ra
label_342eb0:
    if (ctx->pc == 0x342EB0u) {
        ctx->pc = 0x342EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342EACu;
        // 0x342eb0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342EB4u;
        goto label_342eb4;
    }
    ctx->pc = 0x342EACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x342EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342EACu;
        // 0x342eb0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x342EACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x342EB4u;
label_342eb4:
    // 0x342eb4: 0x0  nop
    ctx->pc = 0x342eb4u;
    // NOP
label_342eb8:
    // 0x342eb8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x342eb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_342ebc:
    // 0x342ebc: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x342ebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_342ec0:
    // 0x342ec0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x342ec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_342ec4:
    // 0x342ec4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x342ec4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_342ec8:
    // 0x342ec8: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x342ec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_342ecc:
    // 0x342ecc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x342eccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_342ed0:
    // 0x342ed0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x342ed0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_342ed4:
    // 0x342ed4: 0x8e120004  lw          $s2, 0x4($s0)
    ctx->pc = 0x342ed4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_342ed8:
    // 0x342ed8: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x342ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_342edc:
    // 0x342edc: 0x18400011  blez        $v0, . + 4 + (0x11 << 2)
label_342ee0:
    if (ctx->pc == 0x342EE0u) {
        ctx->pc = 0x342EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342EDCu;
        // 0x342ee0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342EE4u;
        goto label_342ee4;
    }
    ctx->pc = 0x342EDCu;
    {
        const bool branch_taken_0x342edc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x342EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342EDCu;
        // 0x342ee0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342edc) {
            ctx->pc = 0x342F24u;
            goto label_342f24;
        }
    }
    ctx->pc = 0x342EE4u;
label_342ee4:
    // 0x342ee4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x342ee4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_342ee8:
    // 0x342ee8: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x342ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_342eec:
    // 0x342eec: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x342eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_342ef0:
    // 0x342ef0: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x342ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_342ef4:
    // 0x342ef4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_342ef8:
    if (ctx->pc == 0x342EF8u) {
        ctx->pc = 0x342EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342EF4u;
        // 0x342ef8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342EFCu;
        goto label_342efc;
    }
    ctx->pc = 0x342EF4u;
    {
        const bool branch_taken_0x342ef4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x342EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342EF4u;
        // 0x342ef8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342ef4) {
            ctx->pc = 0x342F10u;
            goto label_342f10;
        }
    }
    ctx->pc = 0x342EFCu;
label_342efc:
    // 0x342efc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x342efcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_342f00:
    // 0x342f00: 0x40f809  jalr        $v0
label_342f04:
    if (ctx->pc == 0x342F04u) {
        ctx->pc = 0x342F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342F00u;
        // 0x342f04: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342F08u;
        goto label_342f08;
    }
    ctx->pc = 0x342F00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x342F08u);
        ctx->pc = 0x342F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342F00u;
        // 0x342f04: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x342F00u, 0x342F08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x342F08u;
label_342f08:
    // 0x342f08: 0x1450000a  bne         $v0, $s0, . + 4 + (0xA << 2)
label_342f0c:
    if (ctx->pc == 0x342F0Cu) {
        ctx->pc = 0x342F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342F08u;
        // 0x342f0c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342F10u;
        goto label_342f10;
    }
    ctx->pc = 0x342F08u;
    {
        const bool branch_taken_0x342f08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x342F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342F08u;
        // 0x342f0c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342f08) {
            ctx->pc = 0x342F34u;
            goto label_342f34;
        }
    }
    ctx->pc = 0x342F10u;
label_342f10:
    // 0x342f10: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x342f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_342f14:
    // 0x342f14: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x342f14u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_342f18:
    // 0x342f18: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x342f18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_342f1c:
    // 0x342f1c: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
label_342f20:
    if (ctx->pc == 0x342F20u) {
        ctx->pc = 0x342F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342F1Cu;
        // 0x342f20: 0x2673001c  addiu       $s3, $s3, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342F24u;
        goto label_342f24;
    }
    ctx->pc = 0x342F1Cu;
    {
        const bool branch_taken_0x342f1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x342F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342F1Cu;
        // 0x342f20: 0x2673001c  addiu       $s3, $s3, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342f1c) {
            ctx->pc = 0x342EE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_342ee8;
        }
    }
    ctx->pc = 0x342F24u;
label_342f24:
    // 0x342f24: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x342f24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_342f28:
    // 0x342f28: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x342f28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_342f2c:
    // 0x342f2c: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x342f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_342f30:
    // 0x342f30: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x342f30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_342f34:
    // 0x342f34: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x342f34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_342f38:
    // 0x342f38: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x342f38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_342f3c:
    // 0x342f3c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x342f3cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_342f40:
    // 0x342f40: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x342f40u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_342f44:
    // 0x342f44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x342f44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_342f48:
    // 0x342f48: 0x3e00008  jr          $ra
label_342f4c:
    if (ctx->pc == 0x342F4Cu) {
        ctx->pc = 0x342F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342F48u;
        // 0x342f4c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342F50u;
        goto label_342f50;
    }
    ctx->pc = 0x342F48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x342F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342F48u;
        // 0x342f4c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x342F48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x342F50u;
label_342f50:
    // 0x342f50: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x342f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_342f54:
    // 0x342f54: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x342f54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_342f58:
    // 0x342f58: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x342f58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_342f5c:
    // 0x342f5c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x342f5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_342f60:
    // 0x342f60: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x342f60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_342f64:
    // 0x342f64: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x342f64u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_342f68:
    // 0x342f68: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x342f68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_342f6c:
    // 0x342f6c: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x342f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_342f70:
    // 0x342f70: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x342f70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_342f74:
    // 0x342f74: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x342f74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_342f78:
    // 0x342f78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x342f78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_342f7c:
    // 0x342f7c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x342f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_342f80:
    // 0x342f80: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x342f80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_342f84:
    // 0x342f84: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x342f84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_342f88:
    // 0x342f88: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x342f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_342f8c:
    // 0x342f8c: 0xae100000  sw          $s0, 0x0($s0)
    ctx->pc = 0x342f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 16));
label_342f90:
    // 0x342f90: 0x8c46000c  lw          $a2, 0xC($v0)
    ctx->pc = 0x342f90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_342f94:
    // 0x342f94: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x342f94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_342f98:
    // 0x342f98: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x342f98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
label_342f9c:
    // 0x342f9c: 0x24c6ffd0  addiu       $a2, $a2, -0x30
    ctx->pc = 0x342f9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967248));
label_342fa0:
    // 0x342fa0: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x342fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
label_342fa4:
    // 0x342fa4: 0xc0bb7e6  jal         func_2EDF98
label_342fa8:
    if (ctx->pc == 0x342FA8u) {
        ctx->pc = 0x342FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342FA4u;
        // 0x342fa8: 0xae000020  sw          $zero, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342FACu;
        goto label_342fac;
    }
    ctx->pc = 0x342FA4u;
    SET_GPR_U32(ctx, 31, 0x342FACu);
    ctx->pc = 0x342FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342FA4u;
    // 0x342fa8: 0xae000020  sw          $zero, 0x20($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x342FA4u, 0x342FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342FACu;
label_342fac:
    // 0x342fac: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x342facu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_342fb0:
    // 0x342fb0: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x342fb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_342fb4:
    // 0x342fb4: 0xc0d120c  jal         func_344830
label_342fb8:
    if (ctx->pc == 0x342FB8u) {
        ctx->pc = 0x342FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342FB4u;
        // 0x342fb8: 0x8c640010  lw          $a0, 0x10($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342FBCu;
        goto label_342fbc;
    }
    ctx->pc = 0x342FB4u;
    SET_GPR_U32(ctx, 31, 0x342FBCu);
    ctx->pc = 0x342FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342FB4u;
    // 0x342fb8: 0x8c640010  lw          $a0, 0x10($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344830u, 0x342FB4u, 0x342FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342FBCu;
label_342fbc:
    // 0x342fbc: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_342fc0:
    if (ctx->pc == 0x342FC0u) {
        ctx->pc = 0x342FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342FBCu;
        // 0x342fc0: 0x8e12000c  lw          $s2, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342FC4u;
        goto label_342fc4;
    }
    ctx->pc = 0x342FBCu;
    {
        const bool branch_taken_0x342fbc = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x342fbc) {
            ctx->pc = 0x342FC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x342FBCu;
            // 0x342fc0: 0x8e12000c  lw          $s2, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x342FD0u;
            goto label_342fd0;
        }
    }
    ctx->pc = 0x342FC4u;
label_342fc4:
    // 0x342fc4: 0xc0d1454  jal         func_345150
label_342fc8:
    if (ctx->pc == 0x342FC8u) {
        ctx->pc = 0x342FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342FC4u;
        // 0x342fc8: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342FCCu;
        goto label_342fcc;
    }
    ctx->pc = 0x342FC4u;
    SET_GPR_U32(ctx, 31, 0x342FCCu);
    ctx->pc = 0x342FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342FC4u;
    // 0x342fc8: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x345150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x345150u, 0x342FC4u, 0x342FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342FCCu;
label_342fcc:
    // 0x342fcc: 0x8e12000c  lw          $s2, 0xC($s0)
    ctx->pc = 0x342fccu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_342fd0:
    // 0x342fd0: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x342fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_342fd4:
    // 0x342fd4: 0x18400011  blez        $v0, . + 4 + (0x11 << 2)
label_342fd8:
    if (ctx->pc == 0x342FD8u) {
        ctx->pc = 0x342FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342FD4u;
        // 0x342fd8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342FDCu;
        goto label_342fdc;
    }
    ctx->pc = 0x342FD4u;
    {
        const bool branch_taken_0x342fd4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x342FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342FD4u;
        // 0x342fd8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342fd4) {
            ctx->pc = 0x34301Cu;
            goto label_34301c;
        }
    }
    ctx->pc = 0x342FDCu;
label_342fdc:
    // 0x342fdc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x342fdcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_342fe0:
    // 0x342fe0: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x342fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_342fe4:
    // 0x342fe4: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x342fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_342fe8:
    // 0x342fe8: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x342fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_342fec:
    // 0x342fec: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_342ff0:
    if (ctx->pc == 0x342FF0u) {
        ctx->pc = 0x342FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342FECu;
        // 0x342ff0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342FF4u;
        goto label_342ff4;
    }
    ctx->pc = 0x342FECu;
    {
        const bool branch_taken_0x342fec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x342FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342FECu;
        // 0x342ff0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342fec) {
            ctx->pc = 0x343008u;
            goto label_343008;
        }
    }
    ctx->pc = 0x342FF4u;
label_342ff4:
    // 0x342ff4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x342ff4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_342ff8:
    // 0x342ff8: 0x40f809  jalr        $v0
label_342ffc:
    if (ctx->pc == 0x342FFCu) {
        ctx->pc = 0x342FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342FF8u;
        // 0x342ffc: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x343000u;
        goto label_343000;
    }
    ctx->pc = 0x342FF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x343000u);
        ctx->pc = 0x342FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342FF8u;
        // 0x342ffc: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x342FF8u, 0x343000u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x343000u;
label_343000:
    // 0x343000: 0x14500007  bne         $v0, $s0, . + 4 + (0x7 << 2)
label_343004:
    if (ctx->pc == 0x343004u) {
        ctx->pc = 0x343004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343000u;
        // 0x343004: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x343008u;
        goto label_343008;
    }
    ctx->pc = 0x343000u;
    {
        const bool branch_taken_0x343000 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x343004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343000u;
        // 0x343004: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343000) {
            ctx->pc = 0x343020u;
            goto label_343020;
        }
    }
    ctx->pc = 0x343008u;
label_343008:
    // 0x343008: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x343008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_34300c:
    // 0x34300c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x34300cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_343010:
    // 0x343010: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x343010u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_343014:
    // 0x343014: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
label_343018:
    if (ctx->pc == 0x343018u) {
        ctx->pc = 0x343018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343014u;
        // 0x343018: 0x2673002c  addiu       $s3, $s3, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 44));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34301Cu;
        goto label_34301c;
    }
    ctx->pc = 0x343014u;
    {
        const bool branch_taken_0x343014 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x343018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343014u;
        // 0x343018: 0x2673002c  addiu       $s3, $s3, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343014) {
            ctx->pc = 0x342FE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_342fe0;
        }
    }
    ctx->pc = 0x34301Cu;
label_34301c:
    // 0x34301c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x34301cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_343020:
    // 0x343020: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x343020u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_343024:
    // 0x343024: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x343024u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_343028:
    // 0x343028: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x343028u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_34302c:
    // 0x34302c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x34302cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_343030:
    // 0x343030: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x343030u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_343034:
    // 0x343034: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x343034u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_343038:
    // 0x343038: 0x3e00008  jr          $ra
label_34303c:
    if (ctx->pc == 0x34303Cu) {
        ctx->pc = 0x34303Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343038u;
        // 0x34303c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x343040u;
        goto label_343040;
    }
    ctx->pc = 0x343038u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34303Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343038u;
        // 0x34303c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x343038u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x343040u;
label_343040:
    // 0x343040: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x343040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_343044:
    // 0x343044: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x343044u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_343048:
    // 0x343048: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x343048u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_34304c:
    // 0x34304c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x34304cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_343050:
    // 0x343050: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x343050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_343054:
    // 0x343054: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x343054u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_343058:
    // 0x343058: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x343058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_34305c:
    // 0x34305c: 0xc0d05d0  jal         func_341740
label_343060:
    if (ctx->pc == 0x343060u) {
        ctx->pc = 0x343060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34305Cu;
        // 0x343060: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x343064u;
        goto label_343064;
    }
    ctx->pc = 0x34305Cu;
    SET_GPR_U32(ctx, 31, 0x343064u);
    ctx->pc = 0x343060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34305Cu;
    // 0x343060: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341740u, 0x34305Cu, 0x343064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343064u;
label_343064:
    // 0x343064: 0x8e12000c  lw          $s2, 0xC($s0)
    ctx->pc = 0x343064u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_343068:
    // 0x343068: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x343068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_34306c:
    // 0x34306c: 0x18400011  blez        $v0, . + 4 + (0x11 << 2)
label_343070:
    if (ctx->pc == 0x343070u) {
        ctx->pc = 0x343070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34306Cu;
        // 0x343070: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x343074u;
        goto label_343074;
    }
    ctx->pc = 0x34306Cu;
    {
        const bool branch_taken_0x34306c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x343070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34306Cu;
        // 0x343070: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34306c) {
            ctx->pc = 0x3430B4u;
            goto label_3430b4;
        }
    }
    ctx->pc = 0x343074u;
label_343074:
    // 0x343074: 0x0  nop
    ctx->pc = 0x343074u;
    // NOP
label_343078:
    // 0x343078: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x343078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_34307c:
    // 0x34307c: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x34307cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_343080:
    // 0x343080: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x343080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_343084:
    // 0x343084: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_343088:
    if (ctx->pc == 0x343088u) {
        ctx->pc = 0x343088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343084u;
        // 0x343088: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34308Cu;
        goto label_34308c;
    }
    ctx->pc = 0x343084u;
    {
        const bool branch_taken_0x343084 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x343088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343084u;
        // 0x343088: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343084) {
            ctx->pc = 0x3430A0u;
            goto label_3430a0;
        }
    }
    ctx->pc = 0x34308Cu;
label_34308c:
    // 0x34308c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x34308cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_343090:
    // 0x343090: 0x40f809  jalr        $v0
label_343094:
    if (ctx->pc == 0x343094u) {
        ctx->pc = 0x343094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343090u;
        // 0x343094: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x343098u;
        goto label_343098;
    }
    ctx->pc = 0x343090u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x343098u);
        ctx->pc = 0x343094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343090u;
        // 0x343094: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x343090u, 0x343098u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x343098u;
label_343098:
    // 0x343098: 0x1450001a  bne         $v0, $s0, . + 4 + (0x1A << 2)
label_34309c:
    if (ctx->pc == 0x34309Cu) {
        ctx->pc = 0x34309Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343098u;
        // 0x34309c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3430A0u;
        goto label_3430a0;
    }
    ctx->pc = 0x343098u;
    {
        const bool branch_taken_0x343098 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x34309Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343098u;
        // 0x34309c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343098) {
            ctx->pc = 0x343104u;
            goto label_343104;
        }
    }
    ctx->pc = 0x3430A0u;
label_3430a0:
    // 0x3430a0: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x3430a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_3430a4:
    // 0x3430a4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3430a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_3430a8:
    // 0x3430a8: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x3430a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3430ac:
    // 0x3430ac: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
label_3430b0:
    if (ctx->pc == 0x3430B0u) {
        ctx->pc = 0x3430B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3430ACu;
        // 0x3430b0: 0x2673002c  addiu       $s3, $s3, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 44));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3430B4u;
        goto label_3430b4;
    }
    ctx->pc = 0x3430ACu;
    {
        const bool branch_taken_0x3430ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3430B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3430ACu;
        // 0x3430b0: 0x2673002c  addiu       $s3, $s3, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3430ac) {
            ctx->pc = 0x343078u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_343078;
        }
    }
    ctx->pc = 0x3430B4u;
label_3430b4:
    // 0x3430b4: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x3430b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_3430b8:
    // 0x3430b8: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x3430b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_3430bc:
    // 0x3430bc: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x3430bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_3430c0:
    // 0x3430c0: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x3430c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_3430c4:
    // 0x3430c4: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x3430c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_3430c8:
    // 0x3430c8: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x3430c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_3430cc:
    // 0x3430cc: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x3430ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_3430d0:
    // 0x3430d0: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x3430d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
label_3430d4:
    // 0x3430d4: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x3430d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
label_3430d8:
    // 0x3430d8: 0xc0d120c  jal         func_344830
label_3430dc:
    if (ctx->pc == 0x3430DCu) {
        ctx->pc = 0x3430DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3430D8u;
        // 0x3430dc: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3430E0u;
        goto label_3430e0;
    }
    ctx->pc = 0x3430D8u;
    SET_GPR_U32(ctx, 31, 0x3430E0u);
    ctx->pc = 0x3430DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3430D8u;
    // 0x3430dc: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344830u, 0x3430D8u, 0x3430E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3430E0u;
label_3430e0:
    // 0x3430e0: 0x4400003  bltz        $v0, . + 4 + (0x3 << 2)
label_3430e4:
    if (ctx->pc == 0x3430E4u) {
        ctx->pc = 0x3430E8u;
        goto label_3430e8;
    }
    ctx->pc = 0x3430E0u;
    {
        const bool branch_taken_0x3430e0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x3430e0) {
            ctx->pc = 0x3430F0u;
            goto label_3430f0;
        }
    }
    ctx->pc = 0x3430E8u;
label_3430e8:
    // 0x3430e8: 0xc0d1466  jal         func_345198
label_3430ec:
    if (ctx->pc == 0x3430ECu) {
        ctx->pc = 0x3430ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3430E8u;
        // 0x3430ec: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3430F0u;
        goto label_3430f0;
    }
    ctx->pc = 0x3430E8u;
    SET_GPR_U32(ctx, 31, 0x3430F0u);
    ctx->pc = 0x3430ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3430E8u;
    // 0x3430ec: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x345198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x345198u, 0x3430E8u, 0x3430F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3430F0u;
label_3430f0:
    // 0x3430f0: 0xc0d03c8  jal         func_340F20
label_3430f4:
    if (ctx->pc == 0x3430F4u) {
        ctx->pc = 0x3430F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3430F0u;
        // 0x3430f4: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3430F8u;
        goto label_3430f8;
    }
    ctx->pc = 0x3430F0u;
    SET_GPR_U32(ctx, 31, 0x3430F8u);
    ctx->pc = 0x3430F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3430F0u;
    // 0x3430f4: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x340F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x340F20u, 0x3430F0u, 0x3430F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3430F8u;
label_3430f8:
    // 0x3430f8: 0xc0d0ce8  jal         func_3433A0
label_3430fc:
    if (ctx->pc == 0x3430FCu) {
        ctx->pc = 0x3430FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3430F8u;
        // 0x3430fc: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x343100u;
        goto label_343100;
    }
    ctx->pc = 0x3430F8u;
    SET_GPR_U32(ctx, 31, 0x343100u);
    ctx->pc = 0x3430FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3430F8u;
    // 0x3430fc: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3433A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3433A0u, 0x3430F8u, 0x343100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343100u;
label_343100:
    // 0x343100: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x343100u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_343104:
    // 0x343104: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x343104u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_343108:
    // 0x343108: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x343108u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_34310c:
    // 0x34310c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x34310cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_343110:
    // 0x343110: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x343110u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_343114:
    // 0x343114: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x343114u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_343118:
    // 0x343118: 0x3e00008  jr          $ra
label_34311c:
    if (ctx->pc == 0x34311Cu) {
        ctx->pc = 0x34311Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343118u;
        // 0x34311c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x343120u;
        goto label_fallthrough_0x343118;
    }
    ctx->pc = 0x343118u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34311Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343118u;
        // 0x34311c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x343118u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x343118:
    ctx->pc = 0x343120u;
}
