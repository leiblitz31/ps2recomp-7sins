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

// Function: sub_00392D08
// Address: 0x392d08 - 0x3930a0
void sub_00392D08_0x392d08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00392D08_0x392d08");
#endif

    switch (ctx->pc) {
        case 0x392d08u: goto label_392d08;
        case 0x392d0cu: goto label_392d0c;
        case 0x392d10u: goto label_392d10;
        case 0x392d14u: goto label_392d14;
        case 0x392d18u: goto label_392d18;
        case 0x392d1cu: goto label_392d1c;
        case 0x392d20u: goto label_392d20;
        case 0x392d24u: goto label_392d24;
        case 0x392d28u: goto label_392d28;
        case 0x392d2cu: goto label_392d2c;
        case 0x392d30u: goto label_392d30;
        case 0x392d34u: goto label_392d34;
        case 0x392d38u: goto label_392d38;
        case 0x392d3cu: goto label_392d3c;
        case 0x392d40u: goto label_392d40;
        case 0x392d44u: goto label_392d44;
        case 0x392d48u: goto label_392d48;
        case 0x392d4cu: goto label_392d4c;
        case 0x392d50u: goto label_392d50;
        case 0x392d54u: goto label_392d54;
        case 0x392d58u: goto label_392d58;
        case 0x392d5cu: goto label_392d5c;
        case 0x392d60u: goto label_392d60;
        case 0x392d64u: goto label_392d64;
        case 0x392d68u: goto label_392d68;
        case 0x392d6cu: goto label_392d6c;
        case 0x392d70u: goto label_392d70;
        case 0x392d74u: goto label_392d74;
        case 0x392d78u: goto label_392d78;
        case 0x392d7cu: goto label_392d7c;
        case 0x392d80u: goto label_392d80;
        case 0x392d84u: goto label_392d84;
        case 0x392d88u: goto label_392d88;
        case 0x392d8cu: goto label_392d8c;
        case 0x392d90u: goto label_392d90;
        case 0x392d94u: goto label_392d94;
        case 0x392d98u: goto label_392d98;
        case 0x392d9cu: goto label_392d9c;
        case 0x392da0u: goto label_392da0;
        case 0x392da4u: goto label_392da4;
        case 0x392da8u: goto label_392da8;
        case 0x392dacu: goto label_392dac;
        case 0x392db0u: goto label_392db0;
        case 0x392db4u: goto label_392db4;
        case 0x392db8u: goto label_392db8;
        case 0x392dbcu: goto label_392dbc;
        case 0x392dc0u: goto label_392dc0;
        case 0x392dc4u: goto label_392dc4;
        case 0x392dc8u: goto label_392dc8;
        case 0x392dccu: goto label_392dcc;
        case 0x392dd0u: goto label_392dd0;
        case 0x392dd4u: goto label_392dd4;
        case 0x392dd8u: goto label_392dd8;
        case 0x392ddcu: goto label_392ddc;
        case 0x392de0u: goto label_392de0;
        case 0x392de4u: goto label_392de4;
        case 0x392de8u: goto label_392de8;
        case 0x392decu: goto label_392dec;
        case 0x392df0u: goto label_392df0;
        case 0x392df4u: goto label_392df4;
        case 0x392df8u: goto label_392df8;
        case 0x392dfcu: goto label_392dfc;
        case 0x392e00u: goto label_392e00;
        case 0x392e04u: goto label_392e04;
        case 0x392e08u: goto label_392e08;
        case 0x392e0cu: goto label_392e0c;
        case 0x392e10u: goto label_392e10;
        case 0x392e14u: goto label_392e14;
        case 0x392e18u: goto label_392e18;
        case 0x392e1cu: goto label_392e1c;
        case 0x392e20u: goto label_392e20;
        case 0x392e24u: goto label_392e24;
        case 0x392e28u: goto label_392e28;
        case 0x392e2cu: goto label_392e2c;
        case 0x392e30u: goto label_392e30;
        case 0x392e34u: goto label_392e34;
        case 0x392e38u: goto label_392e38;
        case 0x392e3cu: goto label_392e3c;
        case 0x392e40u: goto label_392e40;
        case 0x392e44u: goto label_392e44;
        case 0x392e48u: goto label_392e48;
        case 0x392e4cu: goto label_392e4c;
        case 0x392e50u: goto label_392e50;
        case 0x392e54u: goto label_392e54;
        case 0x392e58u: goto label_392e58;
        case 0x392e5cu: goto label_392e5c;
        case 0x392e60u: goto label_392e60;
        case 0x392e64u: goto label_392e64;
        case 0x392e68u: goto label_392e68;
        case 0x392e6cu: goto label_392e6c;
        case 0x392e70u: goto label_392e70;
        case 0x392e74u: goto label_392e74;
        case 0x392e78u: goto label_392e78;
        case 0x392e7cu: goto label_392e7c;
        case 0x392e80u: goto label_392e80;
        case 0x392e84u: goto label_392e84;
        case 0x392e88u: goto label_392e88;
        case 0x392e8cu: goto label_392e8c;
        case 0x392e90u: goto label_392e90;
        case 0x392e94u: goto label_392e94;
        case 0x392e98u: goto label_392e98;
        case 0x392e9cu: goto label_392e9c;
        case 0x392ea0u: goto label_392ea0;
        case 0x392ea4u: goto label_392ea4;
        case 0x392ea8u: goto label_392ea8;
        case 0x392eacu: goto label_392eac;
        case 0x392eb0u: goto label_392eb0;
        case 0x392eb4u: goto label_392eb4;
        case 0x392eb8u: goto label_392eb8;
        case 0x392ebcu: goto label_392ebc;
        case 0x392ec0u: goto label_392ec0;
        case 0x392ec4u: goto label_392ec4;
        case 0x392ec8u: goto label_392ec8;
        case 0x392eccu: goto label_392ecc;
        case 0x392ed0u: goto label_392ed0;
        case 0x392ed4u: goto label_392ed4;
        case 0x392ed8u: goto label_392ed8;
        case 0x392edcu: goto label_392edc;
        case 0x392ee0u: goto label_392ee0;
        case 0x392ee4u: goto label_392ee4;
        case 0x392ee8u: goto label_392ee8;
        case 0x392eecu: goto label_392eec;
        case 0x392ef0u: goto label_392ef0;
        case 0x392ef4u: goto label_392ef4;
        case 0x392ef8u: goto label_392ef8;
        case 0x392efcu: goto label_392efc;
        case 0x392f00u: goto label_392f00;
        case 0x392f04u: goto label_392f04;
        case 0x392f08u: goto label_392f08;
        case 0x392f0cu: goto label_392f0c;
        case 0x392f10u: goto label_392f10;
        case 0x392f14u: goto label_392f14;
        case 0x392f18u: goto label_392f18;
        case 0x392f1cu: goto label_392f1c;
        case 0x392f20u: goto label_392f20;
        case 0x392f24u: goto label_392f24;
        case 0x392f28u: goto label_392f28;
        case 0x392f2cu: goto label_392f2c;
        case 0x392f30u: goto label_392f30;
        case 0x392f34u: goto label_392f34;
        case 0x392f38u: goto label_392f38;
        case 0x392f3cu: goto label_392f3c;
        case 0x392f40u: goto label_392f40;
        case 0x392f44u: goto label_392f44;
        case 0x392f48u: goto label_392f48;
        case 0x392f4cu: goto label_392f4c;
        case 0x392f50u: goto label_392f50;
        case 0x392f54u: goto label_392f54;
        case 0x392f58u: goto label_392f58;
        case 0x392f5cu: goto label_392f5c;
        case 0x392f60u: goto label_392f60;
        case 0x392f64u: goto label_392f64;
        case 0x392f68u: goto label_392f68;
        case 0x392f6cu: goto label_392f6c;
        case 0x392f70u: goto label_392f70;
        case 0x392f74u: goto label_392f74;
        case 0x392f78u: goto label_392f78;
        case 0x392f7cu: goto label_392f7c;
        case 0x392f80u: goto label_392f80;
        case 0x392f84u: goto label_392f84;
        case 0x392f88u: goto label_392f88;
        case 0x392f8cu: goto label_392f8c;
        case 0x392f90u: goto label_392f90;
        case 0x392f94u: goto label_392f94;
        case 0x392f98u: goto label_392f98;
        case 0x392f9cu: goto label_392f9c;
        case 0x392fa0u: goto label_392fa0;
        case 0x392fa4u: goto label_392fa4;
        case 0x392fa8u: goto label_392fa8;
        case 0x392facu: goto label_392fac;
        case 0x392fb0u: goto label_392fb0;
        case 0x392fb4u: goto label_392fb4;
        case 0x392fb8u: goto label_392fb8;
        case 0x392fbcu: goto label_392fbc;
        case 0x392fc0u: goto label_392fc0;
        case 0x392fc4u: goto label_392fc4;
        case 0x392fc8u: goto label_392fc8;
        case 0x392fccu: goto label_392fcc;
        case 0x392fd0u: goto label_392fd0;
        case 0x392fd4u: goto label_392fd4;
        case 0x392fd8u: goto label_392fd8;
        case 0x392fdcu: goto label_392fdc;
        case 0x392fe0u: goto label_392fe0;
        case 0x392fe4u: goto label_392fe4;
        case 0x392fe8u: goto label_392fe8;
        case 0x392fecu: goto label_392fec;
        case 0x392ff0u: goto label_392ff0;
        case 0x392ff4u: goto label_392ff4;
        case 0x392ff8u: goto label_392ff8;
        case 0x392ffcu: goto label_392ffc;
        case 0x393000u: goto label_393000;
        case 0x393004u: goto label_393004;
        case 0x393008u: goto label_393008;
        case 0x39300cu: goto label_39300c;
        case 0x393010u: goto label_393010;
        case 0x393014u: goto label_393014;
        case 0x393018u: goto label_393018;
        case 0x39301cu: goto label_39301c;
        case 0x393020u: goto label_393020;
        case 0x393024u: goto label_393024;
        case 0x393028u: goto label_393028;
        case 0x39302cu: goto label_39302c;
        case 0x393030u: goto label_393030;
        case 0x393034u: goto label_393034;
        case 0x393038u: goto label_393038;
        case 0x39303cu: goto label_39303c;
        case 0x393040u: goto label_393040;
        case 0x393044u: goto label_393044;
        case 0x393048u: goto label_393048;
        case 0x39304cu: goto label_39304c;
        case 0x393050u: goto label_393050;
        case 0x393054u: goto label_393054;
        case 0x393058u: goto label_393058;
        case 0x39305cu: goto label_39305c;
        case 0x393060u: goto label_393060;
        case 0x393064u: goto label_393064;
        case 0x393068u: goto label_393068;
        case 0x39306cu: goto label_39306c;
        case 0x393070u: goto label_393070;
        case 0x393074u: goto label_393074;
        case 0x393078u: goto label_393078;
        case 0x39307cu: goto label_39307c;
        case 0x393080u: goto label_393080;
        case 0x393084u: goto label_393084;
        case 0x393088u: goto label_393088;
        case 0x39308cu: goto label_39308c;
        case 0x393090u: goto label_393090;
        case 0x393094u: goto label_393094;
        case 0x393098u: goto label_393098;
        case 0x39309cu: goto label_39309c;
        default: break;
    }

    ctx->pc = 0x392d08u;

label_392d08:
    // 0x392d08: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x392d08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_392d0c:
    // 0x392d0c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x392d0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_392d10:
    // 0x392d10: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x392d10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_392d14:
    // 0x392d14: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x392d14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_392d18:
    // 0x392d18: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x392d18u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_392d1c:
    // 0x392d1c: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x392d1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_392d20:
    // 0x392d20: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x392d20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_392d24:
    // 0x392d24: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x392d24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_392d28:
    // 0x392d28: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x392d28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
label_392d2c:
    // 0x392d2c: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x392d2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
label_392d30:
    // 0x392d30: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x392d30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_392d34:
    // 0x392d34: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x392d34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_392d38:
    // 0x392d38: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_392d3c:
    if (ctx->pc == 0x392D3Cu) {
        ctx->pc = 0x392D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392D38u;
        // 0x392d3c: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392D40u;
        goto label_392d40;
    }
    ctx->pc = 0x392D38u;
    {
        const bool branch_taken_0x392d38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x392D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392D38u;
        // 0x392d3c: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392d38) {
            ctx->pc = 0x392D48u;
            goto label_392d48;
        }
    }
    ctx->pc = 0x392D40u;
label_392d40:
    // 0x392d40: 0x100000cc  b           . + 4 + (0xCC << 2)
label_392d44:
    if (ctx->pc == 0x392D44u) {
        ctx->pc = 0x392D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392D40u;
        // 0x392d44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392D48u;
        goto label_392d48;
    }
    ctx->pc = 0x392D40u;
    {
        const bool branch_taken_0x392d40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x392D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392D40u;
        // 0x392d44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392d40) {
            ctx->pc = 0x393074u;
            goto label_393074;
        }
    }
    ctx->pc = 0x392D48u;
label_392d48:
    // 0x392d48: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x392d48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_392d4c:
    // 0x392d4c: 0x8f85bd50  lw          $a1, -0x42B0($gp)
    ctx->pc = 0x392d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950224)));
label_392d50:
    // 0x392d50: 0x60b82d  daddu       $s7, $v1, $zero
    ctx->pc = 0x392d50u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_392d54:
    // 0x392d54: 0x2463e880  addiu       $v1, $v1, -0x1780
    ctx->pc = 0x392d54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961280));
label_392d58:
    // 0x392d58: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x392d58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_392d5c:
    // 0x392d5c: 0x8c620118  lw          $v0, 0x118($v1)
    ctx->pc = 0x392d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 280)));
label_392d60:
    // 0x392d60: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x392d60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_392d64:
    // 0x392d64: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x392d64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_392d68:
    // 0x392d68: 0x40f809  jalr        $v0
label_392d6c:
    if (ctx->pc == 0x392D6Cu) {
        ctx->pc = 0x392D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392D68u;
        // 0x392d6c: 0x34a50502  ori         $a1, $a1, 0x502 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1282);
        ctx->in_delay_slot = false;
        ctx->pc = 0x392D70u;
        goto label_392d70;
    }
    ctx->pc = 0x392D68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x392D70u);
        ctx->pc = 0x392D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392D68u;
        // 0x392d6c: 0x34a50502  ori         $a1, $a1, 0x502 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1282);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x392D68u, 0x392D70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x392D70u;
label_392d70:
    // 0x392d70: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x392d70u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_392d74:
    // 0x392d74: 0x8eb10000  lw          $s1, 0x0($s5)
    ctx->pc = 0x392d74u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_392d78:
    // 0x392d78: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x392d78u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_392d7c:
    // 0x392d7c: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
label_392d80:
    if (ctx->pc == 0x392D80u) {
        ctx->pc = 0x392D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392D7Cu;
        // 0x392d80: 0xae400008  sw          $zero, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392D84u;
        goto label_392d84;
    }
    ctx->pc = 0x392D7Cu;
    {
        const bool branch_taken_0x392d7c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x392D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392D7Cu;
        // 0x392d80: 0xae400008  sw          $zero, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392d7c) {
            ctx->pc = 0x392DA4u;
            goto label_392da4;
        }
    }
    ctx->pc = 0x392D84u;
label_392d84:
    // 0x392d84: 0x0  nop
    ctx->pc = 0x392d84u;
    // NOP
label_392d88:
    // 0x392d88: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x392d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_392d8c:
    // 0x392d8c: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x392d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_392d90:
    // 0x392d90: 0x24420006  addiu       $v0, $v0, 0x6
    ctx->pc = 0x392d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6));
label_392d94:
    // 0x392d94: 0x8e31000c  lw          $s1, 0xC($s1)
    ctx->pc = 0x392d94u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_392d98:
    // 0x392d98: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x392d98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_392d9c:
    // 0x392d9c: 0x1620fffa  bnez        $s1, . + 4 + (-0x6 << 2)
label_392da0:
    if (ctx->pc == 0x392DA0u) {
        ctx->pc = 0x392DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392D9Cu;
        // 0x392da0: 0xae420008  sw          $v0, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392DA4u;
        goto label_392da4;
    }
    ctx->pc = 0x392D9Cu;
    {
        const bool branch_taken_0x392d9c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x392DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392D9Cu;
        // 0x392da0: 0xae420008  sw          $v0, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392d9c) {
            ctx->pc = 0x392D88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_392d88;
        }
    }
    ctx->pc = 0x392DA4u;
label_392da4:
    // 0x392da4: 0x26e3e880  addiu       $v1, $s7, -0x1780
    ctx->pc = 0x392da4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4294961280));
label_392da8:
    // 0x392da8: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x392da8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_392dac:
    // 0x392dac: 0x8c620108  lw          $v0, 0x108($v1)
    ctx->pc = 0x392dacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
label_392db0:
    // 0x392db0: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x392db0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_392db4:
    // 0x392db4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x392db4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_392db8:
    // 0x392db8: 0x40f809  jalr        $v0
label_392dbc:
    if (ctx->pc == 0x392DBCu) {
        ctx->pc = 0x392DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392DB8u;
        // 0x392dbc: 0x34a50502  ori         $a1, $a1, 0x502 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1282);
        ctx->in_delay_slot = false;
        ctx->pc = 0x392DC0u;
        goto label_392dc0;
    }
    ctx->pc = 0x392DB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x392DC0u);
        ctx->pc = 0x392DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392DB8u;
        // 0x392dbc: 0x34a50502  ori         $a1, $a1, 0x502 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1282);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x392DB8u, 0x392DC0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x392DC0u;
label_392dc0:
    // 0x392dc0: 0x8eb10000  lw          $s1, 0x0($s5)
    ctx->pc = 0x392dc0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_392dc4:
    // 0x392dc4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x392dc4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_392dc8:
    // 0x392dc8: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x392dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_392dcc:
    // 0x392dcc: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x392dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_392dd0:
    // 0x392dd0: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_392dd4:
    if (ctx->pc == 0x392DD4u) {
        ctx->pc = 0x392DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392DD0u;
        // 0x392dd4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392DD8u;
        goto label_392dd8;
    }
    ctx->pc = 0x392DD0u;
    {
        const bool branch_taken_0x392dd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x392DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392DD0u;
        // 0x392dd4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392dd0) {
            ctx->pc = 0x392E10u;
            goto label_392e10;
        }
    }
    ctx->pc = 0x392DD8u;
label_392dd8:
    // 0x392dd8: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x392dd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_392ddc:
    // 0x392ddc: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x392ddcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_392de0:
    // 0x392de0: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x392de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_392de4:
    // 0x392de4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x392de4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_392de8:
    // 0x392de8: 0x94a40000  lhu         $a0, 0x0($a1)
    ctx->pc = 0x392de8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_392dec:
    // 0x392dec: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x392decu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_392df0:
    // 0x392df0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x392df0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_392df4:
    // 0x392df4: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x392df4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
label_392df8:
    // 0x392df8: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x392df8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_392dfc:
    // 0x392dfc: 0xa4440000  sh          $a0, 0x0($v0)
    ctx->pc = 0x392dfcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
label_392e00:
    // 0x392e00: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x392e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_392e04:
    // 0x392e04: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x392e04u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_392e08:
    // 0x392e08: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_392e0c:
    if (ctx->pc == 0x392E0Cu) {
        ctx->pc = 0x392E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392E08u;
        // 0x392e0c: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392E10u;
        goto label_392e10;
    }
    ctx->pc = 0x392E08u;
    {
        const bool branch_taken_0x392e08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x392E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392E08u;
        // 0x392e0c: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392e08) {
            ctx->pc = 0x392DE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_392de0;
        }
    }
    ctx->pc = 0x392E10u;
label_392e10:
    // 0x392e10: 0x26f0e880  addiu       $s0, $s7, -0x1780
    ctx->pc = 0x392e10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 4294961280));
label_392e14:
    // 0x392e14: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x392e14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_392e18:
    // 0x392e18: 0x40f809  jalr        $v0
label_392e1c:
    if (ctx->pc == 0x392E1Cu) {
        ctx->pc = 0x392E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392E18u;
        // 0x392e1c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392E20u;
        goto label_392e20;
    }
    ctx->pc = 0x392E18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x392E20u);
        ctx->pc = 0x392E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392E18u;
        // 0x392e1c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x392E18u, 0x392E20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x392E20u;
label_392e20:
    // 0x392e20: 0x8f83bd50  lw          $v1, -0x42B0($gp)
    ctx->pc = 0x392e20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950224)));
label_392e24:
    // 0x392e24: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x392e24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_392e28:
    // 0x392e28: 0x8e26000c  lw          $a2, 0xC($s1)
    ctx->pc = 0x392e28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_392e2c:
    // 0x392e2c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x392e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_392e30:
    // 0x392e30: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x392e30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_392e34:
    // 0x392e34: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x392e34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_392e38:
    // 0x392e38: 0x8e02011c  lw          $v0, 0x11C($s0)
    ctx->pc = 0x392e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
label_392e3c:
    // 0x392e3c: 0x40f809  jalr        $v0
label_392e40:
    if (ctx->pc == 0x392E40u) {
        ctx->pc = 0x392E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392E3Cu;
        // 0x392e40: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392E44u;
        goto label_392e44;
    }
    ctx->pc = 0x392E3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x392E44u);
        ctx->pc = 0x392E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392E3Cu;
        // 0x392e40: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x392E3Cu, 0x392E44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x392E44u;
label_392e44:
    // 0x392e44: 0x12200088  beqz        $s1, . + 4 + (0x88 << 2)
label_392e48:
    if (ctx->pc == 0x392E48u) {
        ctx->pc = 0x392E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392E44u;
        // 0x392e48: 0x200b02d  daddu       $s6, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392E4Cu;
        goto label_392e4c;
    }
    ctx->pc = 0x392E44u;
    {
        const bool branch_taken_0x392e44 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x392E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392E44u;
        // 0x392e48: 0x200b02d  daddu       $s6, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392e44) {
            ctx->pc = 0x393068u;
            goto label_393068;
        }
    }
    ctx->pc = 0x392E4Cu;
label_392e4c:
    // 0x392e4c: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x392e4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_392e50:
    // 0x392e50: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x392e50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_392e54:
    // 0x392e54: 0x1220002d  beqz        $s1, . + 4 + (0x2D << 2)
label_392e58:
    if (ctx->pc == 0x392E58u) {
        ctx->pc = 0x392E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392E54u;
        // 0x392e58: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392E5Cu;
        goto label_392e5c;
    }
    ctx->pc = 0x392E54u;
    {
        const bool branch_taken_0x392e54 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x392E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392E54u;
        // 0x392e58: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392e54) {
            ctx->pc = 0x392F0Cu;
            goto label_392f0c;
        }
    }
    ctx->pc = 0x392E5Cu;
label_392e5c:
    // 0x392e5c: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x392e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_392e60:
    // 0x392e60: 0x24860001  addiu       $a2, $a0, 0x1
    ctx->pc = 0x392e60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_392e64:
    // 0x392e64: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x392e64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_392e68:
    // 0x392e68: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x392e68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_392e6c:
    // 0x392e6c: 0x94a3fffe  lhu         $v1, -0x2($a1)
    ctx->pc = 0x392e6cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4294967294)));
label_392e70:
    // 0x392e70: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x392e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_392e74:
    // 0x392e74: 0x0  nop
    ctx->pc = 0x392e74u;
    // NOP
label_392e78:
    // 0x392e78: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x392e78u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_392e7c:
    // 0x392e7c: 0x54620008  bnel        $v1, $v0, . + 4 + (0x8 << 2)
label_392e80:
    if (ctx->pc == 0x392E80u) {
        ctx->pc = 0x392E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392E7Cu;
        // 0x392e80: 0x8e10000c  lw          $s0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392E84u;
        goto label_392e84;
    }
    ctx->pc = 0x392E7Cu;
    {
        const bool branch_taken_0x392e7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x392e7c) {
            ctx->pc = 0x392E80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x392E7Cu;
            // 0x392e80: 0x8e10000c  lw          $s0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x392EA0u;
            goto label_392ea0;
        }
    }
    ctx->pc = 0x392E84u;
label_392e84:
    // 0x392e84: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_392e88:
    if (ctx->pc == 0x392E88u) {
        ctx->pc = 0x392E8Cu;
        goto label_392e8c;
    }
    ctx->pc = 0x392E84u;
    {
        const bool branch_taken_0x392e84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x392e84) {
            ctx->pc = 0x392EA8u;
            goto label_392ea8;
        }
    }
    ctx->pc = 0x392E8Cu;
label_392e8c:
    // 0x392e8c: 0x12800006  beqz        $s4, . + 4 + (0x6 << 2)
label_392e90:
    if (ctx->pc == 0x392E90u) {
        ctx->pc = 0x392E94u;
        goto label_392e94;
    }
    ctx->pc = 0x392E8Cu;
    {
        const bool branch_taken_0x392e8c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x392e8c) {
            ctx->pc = 0x392EA8u;
            goto label_392ea8;
        }
    }
    ctx->pc = 0x392E94u;
label_392e94:
    // 0x392e94: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x392e94u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
label_392e98:
    // 0x392e98: 0x10000003  b           . + 4 + (0x3 << 2)
label_392e9c:
    if (ctx->pc == 0x392E9Cu) {
        ctx->pc = 0x392E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392E98u;
        // 0x392e9c: 0xae460004  sw          $a2, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392EA0u;
        goto label_392ea0;
    }
    ctx->pc = 0x392E98u;
    {
        const bool branch_taken_0x392e98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x392E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392E98u;
        // 0x392e9c: 0xae460004  sw          $a2, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392e98) {
            ctx->pc = 0x392EA8u;
            goto label_392ea8;
        }
    }
    ctx->pc = 0x392EA0u;
label_392ea0:
    // 0x392ea0: 0x5600fff5  bnel        $s0, $zero, . + 4 + (-0xB << 2)
label_392ea4:
    if (ctx->pc == 0x392EA4u) {
        ctx->pc = 0x392EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392EA0u;
        // 0x392ea4: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392EA8u;
        goto label_392ea8;
    }
    ctx->pc = 0x392EA0u;
    {
        const bool branch_taken_0x392ea0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x392ea0) {
            ctx->pc = 0x392EA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x392EA0u;
            // 0x392ea4: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x392E78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_392e78;
        }
    }
    ctx->pc = 0x392EA8u;
label_392ea8:
    // 0x392ea8: 0x5600003a  bnel        $s0, $zero, . + 4 + (0x3A << 2)
label_392eac:
    if (ctx->pc == 0x392EACu) {
        ctx->pc = 0x392EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392EA8u;
        // 0x392eac: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392EB0u;
        goto label_392eb0;
    }
    ctx->pc = 0x392EA8u;
    {
        const bool branch_taken_0x392ea8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x392ea8) {
            ctx->pc = 0x392EACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x392EA8u;
            // 0x392eac: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x392F94u;
            goto label_392f94;
        }
    }
    ctx->pc = 0x392EB0u;
label_392eb0:
    // 0x392eb0: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x392eb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_392eb4:
    // 0x392eb4: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x392eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_392eb8:
    // 0x392eb8: 0x12200014  beqz        $s1, . + 4 + (0x14 << 2)
label_392ebc:
    if (ctx->pc == 0x392EBCu) {
        ctx->pc = 0x392EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392EB8u;
        // 0x392ebc: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392EC0u;
        goto label_392ec0;
    }
    ctx->pc = 0x392EB8u;
    {
        const bool branch_taken_0x392eb8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x392EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392EB8u;
        // 0x392ebc: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392eb8) {
            ctx->pc = 0x392F0Cu;
            goto label_392f0c;
        }
    }
    ctx->pc = 0x392EC0u;
label_392ec0:
    // 0x392ec0: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x392ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_392ec4:
    // 0x392ec4: 0x30870001  andi        $a3, $a0, 0x1
    ctx->pc = 0x392ec4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_392ec8:
    // 0x392ec8: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x392ec8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_392ecc:
    // 0x392ecc: 0x24880001  addiu       $t0, $a0, 0x1
    ctx->pc = 0x392eccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_392ed0:
    // 0x392ed0: 0x94a6fffc  lhu         $a2, -0x4($a1)
    ctx->pc = 0x392ed0u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4294967292)));
label_392ed4:
    // 0x392ed4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x392ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_392ed8:
    // 0x392ed8: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x392ed8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_392edc:
    // 0x392edc: 0x54c20007  bnel        $a2, $v0, . + 4 + (0x7 << 2)
label_392ee0:
    if (ctx->pc == 0x392EE0u) {
        ctx->pc = 0x392EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392EDCu;
        // 0x392ee0: 0x8e10000c  lw          $s0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392EE4u;
        goto label_392ee4;
    }
    ctx->pc = 0x392EDCu;
    {
        const bool branch_taken_0x392edc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x392edc) {
            ctx->pc = 0x392EE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x392EDCu;
            // 0x392ee0: 0x8e10000c  lw          $s0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x392EFCu;
            goto label_392efc;
        }
    }
    ctx->pc = 0x392EE4u;
label_392ee4:
    // 0x392ee4: 0x14e00003  bnez        $a3, . + 4 + (0x3 << 2)
label_392ee8:
    if (ctx->pc == 0x392EE8u) {
        ctx->pc = 0x392EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392EE4u;
        // 0x392ee8: 0xa4a20000  sh          $v0, 0x0($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392EECu;
        goto label_392eec;
    }
    ctx->pc = 0x392EE4u;
    {
        const bool branch_taken_0x392ee4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x392EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392EE4u;
        // 0x392ee8: 0xa4a20000  sh          $v0, 0x0($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392ee4) {
            ctx->pc = 0x392EF4u;
            goto label_392ef4;
        }
    }
    ctx->pc = 0x392EECu;
label_392eec:
    // 0x392eec: 0x16800018  bnez        $s4, . + 4 + (0x18 << 2)
label_392ef0:
    if (ctx->pc == 0x392EF0u) {
        ctx->pc = 0x392EF4u;
        goto label_392ef4;
    }
    ctx->pc = 0x392EECu;
    {
        const bool branch_taken_0x392eec = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x392eec) {
            ctx->pc = 0x392F50u;
            goto label_392f50;
        }
    }
    ctx->pc = 0x392EF4u;
label_392ef4:
    // 0x392ef4: 0x10000003  b           . + 4 + (0x3 << 2)
label_392ef8:
    if (ctx->pc == 0x392EF8u) {
        ctx->pc = 0x392EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392EF4u;
        // 0x392ef8: 0xae480004  sw          $t0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392EFCu;
        goto label_392efc;
    }
    ctx->pc = 0x392EF4u;
    {
        const bool branch_taken_0x392ef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x392EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392EF4u;
        // 0x392ef8: 0xae480004  sw          $t0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392ef4) {
            ctx->pc = 0x392F04u;
            goto label_392f04;
        }
    }
    ctx->pc = 0x392EFCu;
label_392efc:
    // 0x392efc: 0x5600fff6  bnel        $s0, $zero, . + 4 + (-0xA << 2)
label_392f00:
    if (ctx->pc == 0x392F00u) {
        ctx->pc = 0x392F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392EFCu;
        // 0x392f00: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392F04u;
        goto label_392f04;
    }
    ctx->pc = 0x392EFCu;
    {
        const bool branch_taken_0x392efc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x392efc) {
            ctx->pc = 0x392F00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x392EFCu;
            // 0x392f00: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x392ED8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_392ed8;
        }
    }
    ctx->pc = 0x392F04u;
label_392f04:
    // 0x392f04: 0x56000023  bnel        $s0, $zero, . + 4 + (0x23 << 2)
label_392f08:
    if (ctx->pc == 0x392F08u) {
        ctx->pc = 0x392F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392F04u;
        // 0x392f08: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392F0Cu;
        goto label_392f0c;
    }
    ctx->pc = 0x392F04u;
    {
        const bool branch_taken_0x392f04 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x392f04) {
            ctx->pc = 0x392F08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x392F04u;
            // 0x392f08: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x392F94u;
            goto label_392f94;
        }
    }
    ctx->pc = 0x392F0Cu;
label_392f0c:
    // 0x392f0c: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x392f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_392f10:
    // 0x392f10: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x392f10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_392f14:
    // 0x392f14: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_392f18:
    if (ctx->pc == 0x392F18u) {
        ctx->pc = 0x392F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392F14u;
        // 0x392f18: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392F1Cu;
        goto label_392f1c;
    }
    ctx->pc = 0x392F14u;
    {
        const bool branch_taken_0x392f14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x392F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392F14u;
        // 0x392f18: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392f14) {
            ctx->pc = 0x392F24u;
            goto label_392f24;
        }
    }
    ctx->pc = 0x392F1Cu;
label_392f1c:
    // 0x392f1c: 0x56800011  bnel        $s4, $zero, . + 4 + (0x11 << 2)
label_392f20:
    if (ctx->pc == 0x392F20u) {
        ctx->pc = 0x392F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392F1Cu;
        // 0x392f20: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392F24u;
        goto label_392f24;
    }
    ctx->pc = 0x392F1Cu;
    {
        const bool branch_taken_0x392f1c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x392f1c) {
            ctx->pc = 0x392F20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x392F1Cu;
            // 0x392f20: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x392F64u;
            goto label_392f64;
        }
    }
    ctx->pc = 0x392F24u;
label_392f24:
    // 0x392f24: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x392f24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_392f28:
    // 0x392f28: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x392f28u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_392f2c:
    // 0x392f2c: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x392f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
label_392f30:
    // 0x392f30: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x392f30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_392f34:
    // 0x392f34: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x392f34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_392f38:
    // 0x392f38: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x392f38u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
label_392f3c:
    // 0x392f3c: 0x9482fffe  lhu         $v0, -0x2($a0)
    ctx->pc = 0x392f3cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4294967294)));
label_392f40:
    // 0x392f40: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x392f40u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
label_392f44:
    // 0x392f44: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x392f44u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_392f48:
    // 0x392f48: 0x10000011  b           . + 4 + (0x11 << 2)
label_392f4c:
    if (ctx->pc == 0x392F4Cu) {
        ctx->pc = 0x392F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392F48u;
        // 0x392f4c: 0xa4830002  sh          $v1, 0x2($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392F50u;
        goto label_392f50;
    }
    ctx->pc = 0x392F48u;
    {
        const bool branch_taken_0x392f48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x392F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392F48u;
        // 0x392f4c: 0xa4830002  sh          $v1, 0x2($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392f48) {
            ctx->pc = 0x392F90u;
            goto label_392f90;
        }
    }
    ctx->pc = 0x392F50u;
label_392f50:
    // 0x392f50: 0x24820002  addiu       $v0, $a0, 0x2
    ctx->pc = 0x392f50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
label_392f54:
    // 0x392f54: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x392f54u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_392f58:
    // 0x392f58: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x392f58u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
label_392f5c:
    // 0x392f5c: 0x1000ffe9  b           . + 4 + (-0x17 << 2)
label_392f60:
    if (ctx->pc == 0x392F60u) {
        ctx->pc = 0x392F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392F5Cu;
        // 0x392f60: 0xa4a30002  sh          $v1, 0x2($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392F64u;
        goto label_392f64;
    }
    ctx->pc = 0x392F5Cu;
    {
        const bool branch_taken_0x392f5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x392F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392F5Cu;
        // 0x392f60: 0xa4a30002  sh          $v1, 0x2($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392f5c) {
            ctx->pc = 0x392F04u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_392f04;
        }
    }
    ctx->pc = 0x392F64u;
label_392f64:
    // 0x392f64: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x392f64u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_392f68:
    // 0x392f68: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x392f68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_392f6c:
    // 0x392f6c: 0x24630003  addiu       $v1, $v1, 0x3
    ctx->pc = 0x392f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
label_392f70:
    // 0x392f70: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x392f70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_392f74:
    // 0x392f74: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x392f74u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
label_392f78:
    // 0x392f78: 0x9482fffe  lhu         $v0, -0x2($a0)
    ctx->pc = 0x392f78u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4294967294)));
label_392f7c:
    // 0x392f7c: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x392f7cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
label_392f80:
    // 0x392f80: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x392f80u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_392f84:
    // 0x392f84: 0xa4830002  sh          $v1, 0x2($a0)
    ctx->pc = 0x392f84u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 3));
label_392f88:
    // 0x392f88: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x392f88u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_392f8c:
    // 0x392f8c: 0xa4820004  sh          $v0, 0x4($a0)
    ctx->pc = 0x392f8cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 2));
label_392f90:
    // 0x392f90: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x392f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_392f94:
    // 0x392f94: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_392f98:
    if (ctx->pc == 0x392F98u) {
        ctx->pc = 0x392F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392F94u;
        // 0x392f98: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392F9Cu;
        goto label_392f9c;
    }
    ctx->pc = 0x392F94u;
    {
        const bool branch_taken_0x392f94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x392F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392F94u;
        // 0x392f98: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392f94) {
            ctx->pc = 0x392FD8u;
            goto label_392fd8;
        }
    }
    ctx->pc = 0x392F9Cu;
label_392f9c:
    // 0x392f9c: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x392f9cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_392fa0:
    // 0x392fa0: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x392fa0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_392fa4:
    // 0x392fa4: 0x0  nop
    ctx->pc = 0x392fa4u;
    // NOP
label_392fa8:
    // 0x392fa8: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x392fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_392fac:
    // 0x392fac: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x392facu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_392fb0:
    // 0x392fb0: 0x94a40000  lhu         $a0, 0x0($a1)
    ctx->pc = 0x392fb0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_392fb4:
    // 0x392fb4: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x392fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_392fb8:
    // 0x392fb8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x392fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_392fbc:
    // 0x392fbc: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x392fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
label_392fc0:
    // 0x392fc0: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x392fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_392fc4:
    // 0x392fc4: 0xa4440000  sh          $a0, 0x0($v0)
    ctx->pc = 0x392fc4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
label_392fc8:
    // 0x392fc8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x392fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_392fcc:
    // 0x392fcc: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x392fccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_392fd0:
    // 0x392fd0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_392fd4:
    if (ctx->pc == 0x392FD4u) {
        ctx->pc = 0x392FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392FD0u;
        // 0x392fd4: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392FD8u;
        goto label_392fd8;
    }
    ctx->pc = 0x392FD0u;
    {
        const bool branch_taken_0x392fd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x392FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392FD0u;
        // 0x392fd4: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392fd0) {
            ctx->pc = 0x392FA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_392fa8;
        }
    }
    ctx->pc = 0x392FD8u;
label_392fd8:
    // 0x392fd8: 0x26f3e880  addiu       $s3, $s7, -0x1780
    ctx->pc = 0x392fd8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 23), 4294961280));
label_392fdc:
    // 0x392fdc: 0x8e62010c  lw          $v0, 0x10C($s3)
    ctx->pc = 0x392fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 268)));
label_392fe0:
    // 0x392fe0: 0x40f809  jalr        $v0
label_392fe4:
    if (ctx->pc == 0x392FE4u) {
        ctx->pc = 0x392FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392FE0u;
        // 0x392fe4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392FE8u;
        goto label_392fe8;
    }
    ctx->pc = 0x392FE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x392FE8u);
        ctx->pc = 0x392FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392FE0u;
        // 0x392fe4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x392FE0u, 0x392FE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x392FE8u;
label_392fe8:
    // 0x392fe8: 0x1630000a  bne         $s1, $s0, . + 4 + (0xA << 2)
label_392fec:
    if (ctx->pc == 0x392FECu) {
        ctx->pc = 0x392FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392FE8u;
        // 0x392fec: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392FF0u;
        goto label_392ff0;
    }
    ctx->pc = 0x392FE8u;
    {
        const bool branch_taken_0x392fe8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 16));
        ctx->pc = 0x392FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392FE8u;
        // 0x392fec: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392fe8) {
            ctx->pc = 0x393014u;
            goto label_393014;
        }
    }
    ctx->pc = 0x392FF0u;
label_392ff0:
    // 0x392ff0: 0x8f83bd50  lw          $v1, -0x42B0($gp)
    ctx->pc = 0x392ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950224)));
label_392ff4:
    // 0x392ff4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x392ff4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_392ff8:
    // 0x392ff8: 0x8e62011c  lw          $v0, 0x11C($s3)
    ctx->pc = 0x392ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 284)));
label_392ffc:
    // 0x392ffc: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x392ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_393000:
    // 0x393000: 0x8e31000c  lw          $s1, 0xC($s1)
    ctx->pc = 0x393000u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_393004:
    // 0x393004: 0x40f809  jalr        $v0
label_393008:
    if (ctx->pc == 0x393008u) {
        ctx->pc = 0x393008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393004u;
        // 0x393008: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39300Cu;
        goto label_39300c;
    }
    ctx->pc = 0x393004u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39300Cu);
        ctx->pc = 0x393008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393004u;
        // 0x393008: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x393004u, 0x39300Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39300Cu;
label_39300c:
    // 0x39300c: 0x10000014  b           . + 4 + (0x14 << 2)
label_393010:
    if (ctx->pc == 0x393010u) {
        ctx->pc = 0x393014u;
        goto label_393014;
    }
    ctx->pc = 0x39300Cu;
    {
        const bool branch_taken_0x39300c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x39300c) {
            ctx->pc = 0x393060u;
            goto label_393060;
        }
    }
    ctx->pc = 0x393014u;
label_393014:
    // 0x393014: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x393014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_393018:
    // 0x393018: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x393018u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_39301c:
    // 0x39301c: 0x10500009  beq         $v0, $s0, . + 4 + (0x9 << 2)
label_393020:
    if (ctx->pc == 0x393020u) {
        ctx->pc = 0x393020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39301Cu;
        // 0x393020: 0x8e06000c  lw          $a2, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393024u;
        goto label_393024;
    }
    ctx->pc = 0x39301Cu;
    {
        const bool branch_taken_0x39301c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x393020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39301Cu;
        // 0x393020: 0x8e06000c  lw          $a2, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39301c) {
            ctx->pc = 0x393044u;
            goto label_393044;
        }
    }
    ctx->pc = 0x393024u;
label_393024:
    // 0x393024: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x393024u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_393028:
    // 0x393028: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x393028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_39302c:
    // 0x39302c: 0x0  nop
    ctx->pc = 0x39302cu;
    // NOP
label_393030:
    // 0x393030: 0x0  nop
    ctx->pc = 0x393030u;
    // NOP
label_393034:
    // 0x393034: 0x0  nop
    ctx->pc = 0x393034u;
    // NOP
label_393038:
    // 0x393038: 0x0  nop
    ctx->pc = 0x393038u;
    // NOP
label_39303c:
    // 0x39303c: 0x5450fffa  bnel        $v0, $s0, . + 4 + (-0x6 << 2)
label_393040:
    if (ctx->pc == 0x393040u) {
        ctx->pc = 0x393040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39303Cu;
        // 0x393040: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393044u;
        goto label_393044;
    }
    ctx->pc = 0x39303Cu;
    {
        const bool branch_taken_0x39303c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x39303c) {
            ctx->pc = 0x393040u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39303Cu;
            // 0x393040: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x393028u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_393028;
        }
    }
    ctx->pc = 0x393044u;
label_393044:
    // 0x393044: 0x8f83bd50  lw          $v1, -0x42B0($gp)
    ctx->pc = 0x393044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950224)));
label_393048:
    // 0x393048: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x393048u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_39304c:
    // 0x39304c: 0xac86000c  sw          $a2, 0xC($a0)
    ctx->pc = 0x39304cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
label_393050:
    // 0x393050: 0x761821  addu        $v1, $v1, $s6
    ctx->pc = 0x393050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
label_393054:
    // 0x393054: 0x8ec2011c  lw          $v0, 0x11C($s6)
    ctx->pc = 0x393054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 284)));
label_393058:
    // 0x393058: 0x40f809  jalr        $v0
label_39305c:
    if (ctx->pc == 0x39305Cu) {
        ctx->pc = 0x39305Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393058u;
        // 0x39305c: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393060u;
        goto label_393060;
    }
    ctx->pc = 0x393058u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x393060u);
        ctx->pc = 0x39305Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393058u;
        // 0x39305c: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x393058u, 0x393060u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x393060u;
label_393060:
    // 0x393060: 0x1620ff7b  bnez        $s1, . + 4 + (-0x85 << 2)
label_393064:
    if (ctx->pc == 0x393064u) {
        ctx->pc = 0x393064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393060u;
        // 0x393064: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393068u;
        goto label_393068;
    }
    ctx->pc = 0x393060u;
    {
        const bool branch_taken_0x393060 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x393064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393060u;
        // 0x393064: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393060) {
            ctx->pc = 0x392E50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_392e50;
        }
    }
    ctx->pc = 0x393068u;
label_393068:
    // 0x393068: 0xaeb20000  sw          $s2, 0x0($s5)
    ctx->pc = 0x393068u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 18));
label_39306c:
    // 0x39306c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x39306cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_393070:
    // 0x393070: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x393070u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
label_393074:
    // 0x393074: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x393074u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_393078:
    // 0x393078: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x393078u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_39307c:
    // 0x39307c: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x39307cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_393080:
    // 0x393080: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x393080u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_393084:
    // 0x393084: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x393084u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_393088:
    // 0x393088: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x393088u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_39308c:
    // 0x39308c: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x39308cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_393090:
    // 0x393090: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x393090u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_393094:
    // 0x393094: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x393094u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_393098:
    // 0x393098: 0x3e00008  jr          $ra
label_39309c:
    if (ctx->pc == 0x39309Cu) {
        ctx->pc = 0x39309Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393098u;
        // 0x39309c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3930A0u;
        goto label_fallthrough_0x393098;
    }
    ctx->pc = 0x393098u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39309Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393098u;
        // 0x39309c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x393098u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x393098:
    ctx->pc = 0x3930A0u;
}
