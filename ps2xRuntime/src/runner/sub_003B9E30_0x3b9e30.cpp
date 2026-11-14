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

// Function: sub_003B9E30
// Address: 0x3b9e30 - 0x3ba038
void sub_003B9E30_0x3b9e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B9E30_0x3b9e30");
#endif

    switch (ctx->pc) {
        case 0x3b9e30u: goto label_3b9e30;
        case 0x3b9e34u: goto label_3b9e34;
        case 0x3b9e38u: goto label_3b9e38;
        case 0x3b9e3cu: goto label_3b9e3c;
        case 0x3b9e40u: goto label_3b9e40;
        case 0x3b9e44u: goto label_3b9e44;
        case 0x3b9e48u: goto label_3b9e48;
        case 0x3b9e4cu: goto label_3b9e4c;
        case 0x3b9e50u: goto label_3b9e50;
        case 0x3b9e54u: goto label_3b9e54;
        case 0x3b9e58u: goto label_3b9e58;
        case 0x3b9e5cu: goto label_3b9e5c;
        case 0x3b9e60u: goto label_3b9e60;
        case 0x3b9e64u: goto label_3b9e64;
        case 0x3b9e68u: goto label_3b9e68;
        case 0x3b9e6cu: goto label_3b9e6c;
        case 0x3b9e70u: goto label_3b9e70;
        case 0x3b9e74u: goto label_3b9e74;
        case 0x3b9e78u: goto label_3b9e78;
        case 0x3b9e7cu: goto label_3b9e7c;
        case 0x3b9e80u: goto label_3b9e80;
        case 0x3b9e84u: goto label_3b9e84;
        case 0x3b9e88u: goto label_3b9e88;
        case 0x3b9e8cu: goto label_3b9e8c;
        case 0x3b9e90u: goto label_3b9e90;
        case 0x3b9e94u: goto label_3b9e94;
        case 0x3b9e98u: goto label_3b9e98;
        case 0x3b9e9cu: goto label_3b9e9c;
        case 0x3b9ea0u: goto label_3b9ea0;
        case 0x3b9ea4u: goto label_3b9ea4;
        case 0x3b9ea8u: goto label_3b9ea8;
        case 0x3b9eacu: goto label_3b9eac;
        case 0x3b9eb0u: goto label_3b9eb0;
        case 0x3b9eb4u: goto label_3b9eb4;
        case 0x3b9eb8u: goto label_3b9eb8;
        case 0x3b9ebcu: goto label_3b9ebc;
        case 0x3b9ec0u: goto label_3b9ec0;
        case 0x3b9ec4u: goto label_3b9ec4;
        case 0x3b9ec8u: goto label_3b9ec8;
        case 0x3b9eccu: goto label_3b9ecc;
        case 0x3b9ed0u: goto label_3b9ed0;
        case 0x3b9ed4u: goto label_3b9ed4;
        case 0x3b9ed8u: goto label_3b9ed8;
        case 0x3b9edcu: goto label_3b9edc;
        case 0x3b9ee0u: goto label_3b9ee0;
        case 0x3b9ee4u: goto label_3b9ee4;
        case 0x3b9ee8u: goto label_3b9ee8;
        case 0x3b9eecu: goto label_3b9eec;
        case 0x3b9ef0u: goto label_3b9ef0;
        case 0x3b9ef4u: goto label_3b9ef4;
        case 0x3b9ef8u: goto label_3b9ef8;
        case 0x3b9efcu: goto label_3b9efc;
        case 0x3b9f00u: goto label_3b9f00;
        case 0x3b9f04u: goto label_3b9f04;
        case 0x3b9f08u: goto label_3b9f08;
        case 0x3b9f0cu: goto label_3b9f0c;
        case 0x3b9f10u: goto label_3b9f10;
        case 0x3b9f14u: goto label_3b9f14;
        case 0x3b9f18u: goto label_3b9f18;
        case 0x3b9f1cu: goto label_3b9f1c;
        case 0x3b9f20u: goto label_3b9f20;
        case 0x3b9f24u: goto label_3b9f24;
        case 0x3b9f28u: goto label_3b9f28;
        case 0x3b9f2cu: goto label_3b9f2c;
        case 0x3b9f30u: goto label_3b9f30;
        case 0x3b9f34u: goto label_3b9f34;
        case 0x3b9f38u: goto label_3b9f38;
        case 0x3b9f3cu: goto label_3b9f3c;
        case 0x3b9f40u: goto label_3b9f40;
        case 0x3b9f44u: goto label_3b9f44;
        case 0x3b9f48u: goto label_3b9f48;
        case 0x3b9f4cu: goto label_3b9f4c;
        case 0x3b9f50u: goto label_3b9f50;
        case 0x3b9f54u: goto label_3b9f54;
        case 0x3b9f58u: goto label_3b9f58;
        case 0x3b9f5cu: goto label_3b9f5c;
        case 0x3b9f60u: goto label_3b9f60;
        case 0x3b9f64u: goto label_3b9f64;
        case 0x3b9f68u: goto label_3b9f68;
        case 0x3b9f6cu: goto label_3b9f6c;
        case 0x3b9f70u: goto label_3b9f70;
        case 0x3b9f74u: goto label_3b9f74;
        case 0x3b9f78u: goto label_3b9f78;
        case 0x3b9f7cu: goto label_3b9f7c;
        case 0x3b9f80u: goto label_3b9f80;
        case 0x3b9f84u: goto label_3b9f84;
        case 0x3b9f88u: goto label_3b9f88;
        case 0x3b9f8cu: goto label_3b9f8c;
        case 0x3b9f90u: goto label_3b9f90;
        case 0x3b9f94u: goto label_3b9f94;
        case 0x3b9f98u: goto label_3b9f98;
        case 0x3b9f9cu: goto label_3b9f9c;
        case 0x3b9fa0u: goto label_3b9fa0;
        case 0x3b9fa4u: goto label_3b9fa4;
        case 0x3b9fa8u: goto label_3b9fa8;
        case 0x3b9facu: goto label_3b9fac;
        case 0x3b9fb0u: goto label_3b9fb0;
        case 0x3b9fb4u: goto label_3b9fb4;
        case 0x3b9fb8u: goto label_3b9fb8;
        case 0x3b9fbcu: goto label_3b9fbc;
        case 0x3b9fc0u: goto label_3b9fc0;
        case 0x3b9fc4u: goto label_3b9fc4;
        case 0x3b9fc8u: goto label_3b9fc8;
        case 0x3b9fccu: goto label_3b9fcc;
        case 0x3b9fd0u: goto label_3b9fd0;
        case 0x3b9fd4u: goto label_3b9fd4;
        case 0x3b9fd8u: goto label_3b9fd8;
        case 0x3b9fdcu: goto label_3b9fdc;
        case 0x3b9fe0u: goto label_3b9fe0;
        case 0x3b9fe4u: goto label_3b9fe4;
        case 0x3b9fe8u: goto label_3b9fe8;
        case 0x3b9fecu: goto label_3b9fec;
        case 0x3b9ff0u: goto label_3b9ff0;
        case 0x3b9ff4u: goto label_3b9ff4;
        case 0x3b9ff8u: goto label_3b9ff8;
        case 0x3b9ffcu: goto label_3b9ffc;
        case 0x3ba000u: goto label_3ba000;
        case 0x3ba004u: goto label_3ba004;
        case 0x3ba008u: goto label_3ba008;
        case 0x3ba00cu: goto label_3ba00c;
        case 0x3ba010u: goto label_3ba010;
        case 0x3ba014u: goto label_3ba014;
        case 0x3ba018u: goto label_3ba018;
        case 0x3ba01cu: goto label_3ba01c;
        case 0x3ba020u: goto label_3ba020;
        case 0x3ba024u: goto label_3ba024;
        case 0x3ba028u: goto label_3ba028;
        case 0x3ba02cu: goto label_3ba02c;
        case 0x3ba030u: goto label_3ba030;
        case 0x3ba034u: goto label_3ba034;
        default: break;
    }

    ctx->pc = 0x3b9e30u;

label_3b9e30:
    // 0x3b9e30: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3b9e30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_3b9e34:
    // 0x3b9e34: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x3b9e34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_3b9e38:
    // 0x3b9e38: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x3b9e38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_3b9e3c:
    // 0x3b9e3c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x3b9e3cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3b9e40:
    // 0x3b9e40: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x3b9e40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_3b9e44:
    // 0x3b9e44: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3b9e44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_3b9e48:
    // 0x3b9e48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3b9e48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3b9e4c:
    // 0x3b9e4c: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x3b9e4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_3b9e50:
    // 0x3b9e50: 0x8e9300b0  lw          $s3, 0xB0($s4)
    ctx->pc = 0x3b9e50u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 176)));
label_3b9e54:
    // 0x3b9e54: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x3b9e54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_3b9e58:
    // 0x3b9e58: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3b9e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3b9e5c:
    // 0x3b9e5c: 0x14400059  bnez        $v0, . + 4 + (0x59 << 2)
label_3b9e60:
    if (ctx->pc == 0x3B9E60u) {
        ctx->pc = 0x3B9E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9E5Cu;
        // 0x3b9e60: 0xae620004  sw          $v0, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B9E64u;
        goto label_3b9e64;
    }
    ctx->pc = 0x3B9E5Cu;
    {
        const bool branch_taken_0x3b9e5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B9E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9E5Cu;
        // 0x3b9e60: 0xae620004  sw          $v0, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b9e5c) {
            ctx->pc = 0x3B9FC4u;
            goto label_3b9fc4;
        }
    }
    ctx->pc = 0x3B9E64u;
label_3b9e64:
    // 0x3b9e64: 0xc10376a  jal         func_40DDA8
label_3b9e68:
    if (ctx->pc == 0x3B9E68u) {
        ctx->pc = 0x3B9E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9E64u;
        // 0x3b9e68: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B9E6Cu;
        goto label_3b9e6c;
    }
    ctx->pc = 0x3B9E64u;
    SET_GPR_U32(ctx, 31, 0x3B9E6Cu);
    ctx->pc = 0x3B9E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B9E64u;
    // 0x3b9e68: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DDA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DDA8u, 0x3B9E64u, 0x3B9E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B9E6Cu;
label_3b9e6c:
    // 0x3b9e6c: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x3b9e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3b9e70:
    // 0x3b9e70: 0xc1036d2  jal         func_40DB48
label_3b9e74:
    if (ctx->pc == 0x3B9E74u) {
        ctx->pc = 0x3B9E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9E70u;
        // 0x3b9e74: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B9E78u;
        goto label_3b9e78;
    }
    ctx->pc = 0x3B9E70u;
    SET_GPR_U32(ctx, 31, 0x3B9E78u);
    ctx->pc = 0x3B9E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B9E70u;
    // 0x3b9e74: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB48u, 0x3B9E70u, 0x3B9E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B9E78u;
label_3b9e78:
    // 0x3b9e78: 0x1a000045  blez        $s0, . + 4 + (0x45 << 2)
label_3b9e7c:
    if (ctx->pc == 0x3B9E7Cu) {
        ctx->pc = 0x3B9E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9E78u;
        // 0x3b9e7c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B9E80u;
        goto label_3b9e80;
    }
    ctx->pc = 0x3B9E78u;
    {
        const bool branch_taken_0x3b9e78 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x3B9E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9E78u;
        // 0x3b9e7c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b9e78) {
            ctx->pc = 0x3B9F90u;
            goto label_3b9f90;
        }
    }
    ctx->pc = 0x3B9E80u;
label_3b9e80:
    // 0x3b9e80: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x3b9e80u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b9e84:
    // 0x3b9e84: 0x121023  negu        $v0, $s2
    ctx->pc = 0x3b9e84u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 18)));
label_3b9e88:
    // 0x3b9e88: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x3b9e88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_3b9e8c:
    // 0x3b9e8c: 0x1060001f  beqz        $v1, . + 4 + (0x1F << 2)
label_3b9e90:
    if (ctx->pc == 0x3B9E90u) {
        ctx->pc = 0x3B9E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9E8Cu;
        // 0x3b9e90: 0x26300008  addiu       $s0, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B9E94u;
        goto label_3b9e94;
    }
    ctx->pc = 0x3B9E8Cu;
    {
        const bool branch_taken_0x3b9e8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B9E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9E8Cu;
        // 0x3b9e90: 0x26300008  addiu       $s0, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b9e8c) {
            ctx->pc = 0x3B9F0Cu;
            goto label_3b9f0c;
        }
    }
    ctx->pc = 0x3B9E94u;
label_3b9e94:
    // 0x3b9e94: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x3b9e94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_3b9e98:
    // 0x3b9e98: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_3b9e9c:
    if (ctx->pc == 0x3B9E9Cu) {
        ctx->pc = 0x3B9E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9E98u;
        // 0x3b9e9c: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B9EA0u;
        goto label_3b9ea0;
    }
    ctx->pc = 0x3B9E98u;
    {
        const bool branch_taken_0x3b9e98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B9E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9E98u;
        // 0x3b9e9c: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b9e98) {
            ctx->pc = 0x3B9EE8u;
            goto label_3b9ee8;
        }
    }
    ctx->pc = 0x3B9EA0u;
label_3b9ea0:
    // 0x3b9ea0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_3b9ea4:
    if (ctx->pc == 0x3B9EA4u) {
        ctx->pc = 0x3B9EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9EA0u;
        // 0x3b9ea4: 0x8e04fffc  lw          $a0, -0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967292)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B9EA8u;
        goto label_3b9ea8;
    }
    ctx->pc = 0x3B9EA0u;
    {
        const bool branch_taken_0x3b9ea0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B9EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9EA0u;
        // 0x3b9ea4: 0x8e04fffc  lw          $a0, -0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967292)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b9ea0) {
            ctx->pc = 0x3B9EC8u;
            goto label_3b9ec8;
        }
    }
    ctx->pc = 0x3B9EA8u;
label_3b9ea8:
    // 0x3b9ea8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_3b9eac:
    if (ctx->pc == 0x3B9EACu) {
        ctx->pc = 0x3B9EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9EA8u;
        // 0x3b9eac: 0x26300014  addiu       $s0, $s1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B9EB0u;
        goto label_3b9eb0;
    }
    ctx->pc = 0x3B9EA8u;
    {
        const bool branch_taken_0x3b9ea8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B9EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9EA8u;
        // 0x3b9eac: 0x26300014  addiu       $s0, $s1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b9ea8) {
            ctx->pc = 0x3B9EC0u;
            goto label_3b9ec0;
        }
    }
    ctx->pc = 0x3B9EB0u;
label_3b9eb0:
    // 0x3b9eb0: 0xc0ec620  jal         func_3B1880
label_3b9eb4:
    if (ctx->pc == 0x3B9EB4u) {
        ctx->pc = 0x3B9EB8u;
        goto label_3b9eb8;
    }
    ctx->pc = 0x3B9EB0u;
    SET_GPR_U32(ctx, 31, 0x3B9EB8u);
    ctx->pc = 0x3B1880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1880u, 0x3B9EB0u, 0x3B9EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B9EB8u;
label_3b9eb8:
    // 0x3b9eb8: 0xc0e9e5c  jal         func_3A7970
label_3b9ebc:
    if (ctx->pc == 0x3B9EBCu) {
        ctx->pc = 0x3B9EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9EB8u;
        // 0x3b9ebc: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B9EC0u;
        goto label_3b9ec0;
    }
    ctx->pc = 0x3B9EB8u;
    SET_GPR_U32(ctx, 31, 0x3B9EC0u);
    ctx->pc = 0x3B9EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B9EB8u;
    // 0x3b9ebc: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7970u, 0x3B9EB8u, 0x3B9EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B9EC0u;
label_3b9ec0:
    // 0x3b9ec0: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x3b9ec0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_3b9ec4:
    // 0x3b9ec4: 0x8e04fffc  lw          $a0, -0x4($s0)
    ctx->pc = 0x3b9ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967292)));
label_3b9ec8:
    // 0x3b9ec8: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_3b9ecc:
    if (ctx->pc == 0x3B9ECCu) {
        ctx->pc = 0x3B9ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9EC8u;
        // 0x3b9ecc: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B9ED0u;
        goto label_3b9ed0;
    }
    ctx->pc = 0x3B9EC8u;
    {
        const bool branch_taken_0x3b9ec8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b9ec8) {
            ctx->pc = 0x3B9ECCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B9EC8u;
            // 0x3b9ecc: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B9EE4u;
            goto label_3b9ee4;
        }
    }
    ctx->pc = 0x3B9ED0u;
label_3b9ed0:
    // 0x3b9ed0: 0xc0ec620  jal         func_3B1880
label_3b9ed4:
    if (ctx->pc == 0x3B9ED4u) {
        ctx->pc = 0x3B9ED8u;
        goto label_3b9ed8;
    }
    ctx->pc = 0x3B9ED0u;
    SET_GPR_U32(ctx, 31, 0x3B9ED8u);
    ctx->pc = 0x3B1880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1880u, 0x3B9ED0u, 0x3B9ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B9ED8u;
label_3b9ed8:
    // 0x3b9ed8: 0xc0e9e5c  jal         func_3A7970
label_3b9edc:
    if (ctx->pc == 0x3B9EDCu) {
        ctx->pc = 0x3B9EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9ED8u;
        // 0x3b9edc: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B9EE0u;
        goto label_3b9ee0;
    }
    ctx->pc = 0x3B9ED8u;
    SET_GPR_U32(ctx, 31, 0x3B9EE0u);
    ctx->pc = 0x3B9EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B9ED8u;
    // 0x3b9edc: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7970u, 0x3B9ED8u, 0x3B9EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B9EE0u;
label_3b9ee0:
    // 0x3b9ee0: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x3b9ee0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_3b9ee4:
    // 0x3b9ee4: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x3b9ee4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_3b9ee8:
    // 0x3b9ee8: 0x8e04fffc  lw          $a0, -0x4($s0)
    ctx->pc = 0x3b9ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967292)));
label_3b9eec:
    // 0x3b9eec: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_3b9ef0:
    if (ctx->pc == 0x3B9EF0u) {
        ctx->pc = 0x3B9EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9EECu;
        // 0x3b9ef0: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B9EF4u;
        goto label_3b9ef4;
    }
    ctx->pc = 0x3B9EECu;
    {
        const bool branch_taken_0x3b9eec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B9EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9EECu;
        // 0x3b9ef0: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b9eec) {
            ctx->pc = 0x3B9F04u;
            goto label_3b9f04;
        }
    }
    ctx->pc = 0x3B9EF4u;
label_3b9ef4:
    // 0x3b9ef4: 0xc0ec620  jal         func_3B1880
label_3b9ef8:
    if (ctx->pc == 0x3B9EF8u) {
        ctx->pc = 0x3B9EFCu;
        goto label_3b9efc;
    }
    ctx->pc = 0x3B9EF4u;
    SET_GPR_U32(ctx, 31, 0x3B9EFCu);
    ctx->pc = 0x3B1880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1880u, 0x3B9EF4u, 0x3B9EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B9EFCu;
label_3b9efc:
    // 0x3b9efc: 0xc0e9e5c  jal         func_3A7970
label_3b9f00:
    if (ctx->pc == 0x3B9F00u) {
        ctx->pc = 0x3B9F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9EFCu;
        // 0x3b9f00: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B9F04u;
        goto label_3b9f04;
    }
    ctx->pc = 0x3B9EFCu;
    SET_GPR_U32(ctx, 31, 0x3B9F04u);
    ctx->pc = 0x3B9F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B9EFCu;
    // 0x3b9f00: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7970u, 0x3B9EFCu, 0x3B9F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B9F04u;
label_3b9f04:
    // 0x3b9f04: 0x12400022  beqz        $s2, . + 4 + (0x22 << 2)
label_3b9f08:
    if (ctx->pc == 0x3B9F08u) {
        ctx->pc = 0x3B9F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9F04u;
        // 0x3b9f08: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B9F0Cu;
        goto label_3b9f0c;
    }
    ctx->pc = 0x3B9F04u;
    {
        const bool branch_taken_0x3b9f04 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B9F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9F04u;
        // 0x3b9f08: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b9f04) {
            ctx->pc = 0x3B9F90u;
            goto label_3b9f90;
        }
    }
    ctx->pc = 0x3B9F0Cu;
label_3b9f0c:
    // 0x3b9f0c: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x3b9f0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b9f10:
    // 0x3b9f10: 0x8e24fffc  lw          $a0, -0x4($s1)
    ctx->pc = 0x3b9f10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294967292)));
label_3b9f14:
    // 0x3b9f14: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_3b9f18:
    if (ctx->pc == 0x3B9F18u) {
        ctx->pc = 0x3B9F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9F14u;
        // 0x3b9f18: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B9F1Cu;
        goto label_3b9f1c;
    }
    ctx->pc = 0x3B9F14u;
    {
        const bool branch_taken_0x3b9f14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b9f14) {
            ctx->pc = 0x3B9F18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B9F14u;
            // 0x3b9f18: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B9F30u;
            goto label_3b9f30;
        }
    }
    ctx->pc = 0x3B9F1Cu;
label_3b9f1c:
    // 0x3b9f1c: 0xc0ec620  jal         func_3B1880
label_3b9f20:
    if (ctx->pc == 0x3B9F20u) {
        ctx->pc = 0x3B9F24u;
        goto label_3b9f24;
    }
    ctx->pc = 0x3B9F1Cu;
    SET_GPR_U32(ctx, 31, 0x3B9F24u);
    ctx->pc = 0x3B1880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1880u, 0x3B9F1Cu, 0x3B9F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B9F24u;
label_3b9f24:
    // 0x3b9f24: 0xc0e9e5c  jal         func_3A7970
label_3b9f28:
    if (ctx->pc == 0x3B9F28u) {
        ctx->pc = 0x3B9F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9F24u;
        // 0x3b9f28: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B9F2Cu;
        goto label_3b9f2c;
    }
    ctx->pc = 0x3B9F24u;
    SET_GPR_U32(ctx, 31, 0x3B9F2Cu);
    ctx->pc = 0x3B9F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B9F24u;
    // 0x3b9f28: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7970u, 0x3B9F24u, 0x3B9F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B9F2Cu;
label_3b9f2c:
    // 0x3b9f2c: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x3b9f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_3b9f30:
    // 0x3b9f30: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_3b9f34:
    if (ctx->pc == 0x3B9F34u) {
        ctx->pc = 0x3B9F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9F30u;
        // 0x3b9f34: 0x8e240014  lw          $a0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B9F38u;
        goto label_3b9f38;
    }
    ctx->pc = 0x3B9F30u;
    {
        const bool branch_taken_0x3b9f30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b9f30) {
            ctx->pc = 0x3B9F34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B9F30u;
            // 0x3b9f34: 0x8e240014  lw          $a0, 0x14($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B9F4Cu;
            goto label_3b9f4c;
        }
    }
    ctx->pc = 0x3B9F38u;
label_3b9f38:
    // 0x3b9f38: 0xc0ec620  jal         func_3B1880
label_3b9f3c:
    if (ctx->pc == 0x3B9F3Cu) {
        ctx->pc = 0x3B9F40u;
        goto label_3b9f40;
    }
    ctx->pc = 0x3B9F38u;
    SET_GPR_U32(ctx, 31, 0x3B9F40u);
    ctx->pc = 0x3B1880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1880u, 0x3B9F38u, 0x3B9F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B9F40u;
label_3b9f40:
    // 0x3b9f40: 0xc0e9e5c  jal         func_3A7970
label_3b9f44:
    if (ctx->pc == 0x3B9F44u) {
        ctx->pc = 0x3B9F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9F40u;
        // 0x3b9f44: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B9F48u;
        goto label_3b9f48;
    }
    ctx->pc = 0x3B9F40u;
    SET_GPR_U32(ctx, 31, 0x3B9F48u);
    ctx->pc = 0x3B9F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B9F40u;
    // 0x3b9f44: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7970u, 0x3B9F40u, 0x3B9F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B9F48u;
label_3b9f48:
    // 0x3b9f48: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x3b9f48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_3b9f4c:
    // 0x3b9f4c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_3b9f50:
    if (ctx->pc == 0x3B9F50u) {
        ctx->pc = 0x3B9F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9F4Cu;
        // 0x3b9f50: 0x8e240020  lw          $a0, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B9F54u;
        goto label_3b9f54;
    }
    ctx->pc = 0x3B9F4Cu;
    {
        const bool branch_taken_0x3b9f4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b9f4c) {
            ctx->pc = 0x3B9F50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B9F4Cu;
            // 0x3b9f50: 0x8e240020  lw          $a0, 0x20($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B9F68u;
            goto label_3b9f68;
        }
    }
    ctx->pc = 0x3B9F54u;
label_3b9f54:
    // 0x3b9f54: 0xc0ec620  jal         func_3B1880
label_3b9f58:
    if (ctx->pc == 0x3B9F58u) {
        ctx->pc = 0x3B9F5Cu;
        goto label_3b9f5c;
    }
    ctx->pc = 0x3B9F54u;
    SET_GPR_U32(ctx, 31, 0x3B9F5Cu);
    ctx->pc = 0x3B1880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1880u, 0x3B9F54u, 0x3B9F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B9F5Cu;
label_3b9f5c:
    // 0x3b9f5c: 0xc0e9e5c  jal         func_3A7970
label_3b9f60:
    if (ctx->pc == 0x3B9F60u) {
        ctx->pc = 0x3B9F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9F5Cu;
        // 0x3b9f60: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B9F64u;
        goto label_3b9f64;
    }
    ctx->pc = 0x3B9F5Cu;
    SET_GPR_U32(ctx, 31, 0x3B9F64u);
    ctx->pc = 0x3B9F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B9F5Cu;
    // 0x3b9f60: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7970u, 0x3B9F5Cu, 0x3B9F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B9F64u;
label_3b9f64:
    // 0x3b9f64: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x3b9f64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_3b9f68:
    // 0x3b9f68: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_3b9f6c:
    if (ctx->pc == 0x3B9F6Cu) {
        ctx->pc = 0x3B9F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9F68u;
        // 0x3b9f6c: 0x26100030  addiu       $s0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B9F70u;
        goto label_3b9f70;
    }
    ctx->pc = 0x3B9F68u;
    {
        const bool branch_taken_0x3b9f68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b9f68) {
            ctx->pc = 0x3B9F6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B9F68u;
            // 0x3b9f6c: 0x26100030  addiu       $s0, $s0, 0x30 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B9F84u;
            goto label_3b9f84;
        }
    }
    ctx->pc = 0x3B9F70u;
label_3b9f70:
    // 0x3b9f70: 0xc0ec620  jal         func_3B1880
label_3b9f74:
    if (ctx->pc == 0x3B9F74u) {
        ctx->pc = 0x3B9F78u;
        goto label_3b9f78;
    }
    ctx->pc = 0x3B9F70u;
    SET_GPR_U32(ctx, 31, 0x3B9F78u);
    ctx->pc = 0x3B1880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1880u, 0x3B9F70u, 0x3B9F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B9F78u;
label_3b9f78:
    // 0x3b9f78: 0xc0e9e5c  jal         func_3A7970
label_3b9f7c:
    if (ctx->pc == 0x3B9F7Cu) {
        ctx->pc = 0x3B9F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9F78u;
        // 0x3b9f7c: 0x8e040024  lw          $a0, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B9F80u;
        goto label_3b9f80;
    }
    ctx->pc = 0x3B9F78u;
    SET_GPR_U32(ctx, 31, 0x3B9F80u);
    ctx->pc = 0x3B9F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B9F78u;
    // 0x3b9f7c: 0x8e040024  lw          $a0, 0x24($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7970u, 0x3B9F78u, 0x3B9F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B9F80u;
label_3b9f80:
    // 0x3b9f80: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x3b9f80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_3b9f84:
    // 0x3b9f84: 0x2652fffc  addiu       $s2, $s2, -0x4
    ctx->pc = 0x3b9f84u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967292));
label_3b9f88:
    // 0x3b9f88: 0x1640ffe1  bnez        $s2, . + 4 + (-0x1F << 2)
label_3b9f8c:
    if (ctx->pc == 0x3B9F8Cu) {
        ctx->pc = 0x3B9F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9F88u;
        // 0x3b9f8c: 0x26310030  addiu       $s1, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B9F90u;
        goto label_3b9f90;
    }
    ctx->pc = 0x3B9F88u;
    {
        const bool branch_taken_0x3b9f88 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B9F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9F88u;
        // 0x3b9f8c: 0x26310030  addiu       $s1, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b9f88) {
            ctx->pc = 0x3B9F10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b9f10;
        }
    }
    ctx->pc = 0x3B9F90u;
label_3b9f90:
    // 0x3b9f90: 0xc103684  jal         func_40DA10
label_3b9f94:
    if (ctx->pc == 0x3B9F94u) {
        ctx->pc = 0x3B9F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9F90u;
        // 0x3b9f94: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B9F98u;
        goto label_3b9f98;
    }
    ctx->pc = 0x3B9F90u;
    SET_GPR_U32(ctx, 31, 0x3B9F98u);
    ctx->pc = 0x3B9F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B9F90u;
    // 0x3b9f94: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DA10u, 0x3B9F90u, 0x3B9F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B9F98u;
label_3b9f98:
    // 0x3b9f98: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x3b9f98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_3b9f9c:
    // 0x3b9f9c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_3b9fa0:
    if (ctx->pc == 0x3B9FA0u) {
        ctx->pc = 0x3B9FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9F9Cu;
        // 0x3b9fa0: 0x3c020062  lui         $v0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B9FA4u;
        goto label_3b9fa4;
    }
    ctx->pc = 0x3B9F9Cu;
    {
        const bool branch_taken_0x3b9f9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B9FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9F9Cu;
        // 0x3b9fa0: 0x3c020062  lui         $v0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b9f9c) {
            ctx->pc = 0x3B9FB4u;
            goto label_3b9fb4;
        }
    }
    ctx->pc = 0x3B9FA4u;
label_3b9fa4:
    // 0x3b9fa4: 0xc0e3414  jal         func_38D050
label_3b9fa8:
    if (ctx->pc == 0x3B9FA8u) {
        ctx->pc = 0x3B9FACu;
        goto label_3b9fac;
    }
    ctx->pc = 0x3B9FA4u;
    SET_GPR_U32(ctx, 31, 0x3B9FACu);
    ctx->pc = 0x38D050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D050u, 0x3B9FA4u, 0x3B9FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B9FACu;
label_3b9fac:
    // 0x3b9fac: 0xae600008  sw          $zero, 0x8($s3)
    ctx->pc = 0x3b9facu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
label_3b9fb0:
    // 0x3b9fb0: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3b9fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_3b9fb4:
    // 0x3b9fb4: 0x2442e880  addiu       $v0, $v0, -0x1780
    ctx->pc = 0x3b9fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_3b9fb8:
    // 0x3b9fb8: 0x8c43010c  lw          $v1, 0x10C($v0)
    ctx->pc = 0x3b9fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 268)));
label_3b9fbc:
    // 0x3b9fbc: 0x60f809  jalr        $v1
label_3b9fc0:
    if (ctx->pc == 0x3B9FC0u) {
        ctx->pc = 0x3B9FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9FBCu;
        // 0x3b9fc0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B9FC4u;
        goto label_3b9fc4;
    }
    ctx->pc = 0x3B9FBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3B9FC4u);
        ctx->pc = 0x3B9FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9FBCu;
        // 0x3b9fc0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B9FBCu, 0x3B9FC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B9FC4u;
label_3b9fc4:
    // 0x3b9fc4: 0x8e8400b8  lw          $a0, 0xB8($s4)
    ctx->pc = 0x3b9fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 184)));
label_3b9fc8:
    // 0x3b9fc8: 0x5080000b  beql        $a0, $zero, . + 4 + (0xB << 2)
label_3b9fcc:
    if (ctx->pc == 0x3B9FCCu) {
        ctx->pc = 0x3B9FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9FC8u;
        // 0x3b9fcc: 0x8e8400b4  lw          $a0, 0xB4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 180)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B9FD0u;
        goto label_3b9fd0;
    }
    ctx->pc = 0x3B9FC8u;
    {
        const bool branch_taken_0x3b9fc8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b9fc8) {
            ctx->pc = 0x3B9FCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B9FC8u;
            // 0x3b9fcc: 0x8e8400b4  lw          $a0, 0xB4($s4) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 180)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B9FF8u;
            goto label_3b9ff8;
        }
    }
    ctx->pc = 0x3B9FD0u;
label_3b9fd0:
    // 0x3b9fd0: 0x8c900004  lw          $s0, 0x4($a0)
    ctx->pc = 0x3b9fd0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_3b9fd4:
    // 0x3b9fd4: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
label_3b9fd8:
    if (ctx->pc == 0x3B9FD8u) {
        ctx->pc = 0x3B9FDCu;
        goto label_3b9fdc;
    }
    ctx->pc = 0x3B9FD4u;
    {
        const bool branch_taken_0x3b9fd4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b9fd4) {
            ctx->pc = 0x3B9FECu;
            goto label_3b9fec;
        }
    }
    ctx->pc = 0x3B9FDCu;
label_3b9fdc:
    // 0x3b9fdc: 0xc0e2686  jal         func_389A18
label_3b9fe0:
    if (ctx->pc == 0x3B9FE0u) {
        ctx->pc = 0x3B9FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9FDCu;
        // 0x3b9fe0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B9FE4u;
        goto label_3b9fe4;
    }
    ctx->pc = 0x3B9FDCu;
    SET_GPR_U32(ctx, 31, 0x3B9FE4u);
    ctx->pc = 0x3B9FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B9FDCu;
    // 0x3b9fe0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x389A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389A18u, 0x3B9FDCu, 0x3B9FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B9FE4u;
label_3b9fe4:
    // 0x3b9fe4: 0xc1067c6  jal         func_419F18
label_3b9fe8:
    if (ctx->pc == 0x3B9FE8u) {
        ctx->pc = 0x3B9FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9FE4u;
        // 0x3b9fe8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B9FECu;
        goto label_3b9fec;
    }
    ctx->pc = 0x3B9FE4u;
    SET_GPR_U32(ctx, 31, 0x3B9FECu);
    ctx->pc = 0x3B9FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B9FE4u;
    // 0x3b9fe8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419F18u, 0x3B9FE4u, 0x3B9FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B9FECu;
label_3b9fec:
    // 0x3b9fec: 0xc0e27ae  jal         func_389EB8
label_3b9ff0:
    if (ctx->pc == 0x3B9FF0u) {
        ctx->pc = 0x3B9FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9FECu;
        // 0x3b9ff0: 0x8e8400b8  lw          $a0, 0xB8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 184)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B9FF4u;
        goto label_3b9ff4;
    }
    ctx->pc = 0x3B9FECu;
    SET_GPR_U32(ctx, 31, 0x3B9FF4u);
    ctx->pc = 0x3B9FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B9FECu;
    // 0x3b9ff0: 0x8e8400b8  lw          $a0, 0xB8($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 184)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x389EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389EB8u, 0x3B9FECu, 0x3B9FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B9FF4u;
label_3b9ff4:
    // 0x3b9ff4: 0x8e8400b4  lw          $a0, 0xB4($s4)
    ctx->pc = 0x3b9ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 180)));
label_3b9ff8:
    // 0x3b9ff8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_3b9ffc:
    if (ctx->pc == 0x3B9FFCu) {
        ctx->pc = 0x3B9FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9FF8u;
        // 0x3b9ffc: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BA000u;
        goto label_3ba000;
    }
    ctx->pc = 0x3B9FF8u;
    {
        const bool branch_taken_0x3b9ff8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B9FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9FF8u;
        // 0x3b9ffc: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b9ff8) {
            ctx->pc = 0x3BA010u;
            goto label_3ba010;
        }
    }
    ctx->pc = 0x3BA000u;
label_3ba000:
    // 0x3ba000: 0x8c62e98c  lw          $v0, -0x1674($v1)
    ctx->pc = 0x3ba000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961548)));
label_3ba004:
    // 0x3ba004: 0x40f809  jalr        $v0
label_3ba008:
    if (ctx->pc == 0x3BA008u) {
        ctx->pc = 0x3BA00Cu;
        goto label_3ba00c;
    }
    ctx->pc = 0x3BA004u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3BA00Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BA004u, 0x3BA00Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3BA00Cu;
label_3ba00c:
    // 0x3ba00c: 0xae8000b4  sw          $zero, 0xB4($s4)
    ctx->pc = 0x3ba00cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 180), GPR_U32(ctx, 0));
label_3ba010:
    // 0x3ba010: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x3ba010u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3ba014:
    // 0x3ba014: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3ba014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3ba018:
    // 0x3ba018: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x3ba018u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3ba01c:
    // 0x3ba01c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3ba01cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3ba020:
    // 0x3ba020: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x3ba020u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3ba024:
    // 0x3ba024: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x3ba024u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3ba028:
    // 0x3ba028: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3ba028u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3ba02c:
    // 0x3ba02c: 0x3e00008  jr          $ra
label_3ba030:
    if (ctx->pc == 0x3BA030u) {
        ctx->pc = 0x3BA030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA02Cu;
        // 0x3ba030: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BA034u;
        goto label_3ba034;
    }
    ctx->pc = 0x3BA02Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BA030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA02Cu;
        // 0x3ba030: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BA02Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BA034u;
label_3ba034:
    // 0x3ba034: 0x0  nop
    ctx->pc = 0x3ba034u;
    // NOP
    ctx->pc = 0x3ba038u;
}
