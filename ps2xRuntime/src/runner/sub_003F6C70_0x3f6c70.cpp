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

// Function: sub_003F6C70
// Address: 0x3f6c70 - 0x3f7080
void sub_003F6C70_0x3f6c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F6C70_0x3f6c70");
#endif

    switch (ctx->pc) {
        case 0x3f6cb8u: goto label_3f6cb8;
        case 0x3f6ce0u: goto label_3f6ce0;
        case 0x3f6cf8u: goto label_3f6cf8;
        case 0x3f6d10u: goto label_3f6d10;
        case 0x3f6d20u: goto label_3f6d20;
        case 0x3f6d44u: goto label_3f6d44;
        case 0x3f6d54u: goto label_3f6d54;
        case 0x3f6d5cu: goto label_3f6d5c;
        case 0x3f6db4u: goto label_3f6db4;
        case 0x3f6dc8u: goto label_3f6dc8;
        case 0x3f6de0u: goto label_3f6de0;
        case 0x3f6df0u: goto label_3f6df0;
        case 0x3f6e14u: goto label_3f6e14;
        case 0x3f6e24u: goto label_3f6e24;
        case 0x3f6e2cu: goto label_3f6e2c;
        case 0x3f6e70u: goto label_3f6e70;
        case 0x3f6e84u: goto label_3f6e84;
        case 0x3f6e98u: goto label_3f6e98;
        case 0x3f6eb4u: goto label_3f6eb4;
        case 0x3f6ec4u: goto label_3f6ec4;
        case 0x3f6eccu: goto label_3f6ecc;
        case 0x3f6f14u: goto label_3f6f14;
        case 0x3f6f28u: goto label_3f6f28;
        case 0x3f6f4cu: goto label_3f6f4c;
        case 0x3f6f6cu: goto label_3f6f6c;
        case 0x3f6f88u: goto label_3f6f88;
        case 0x3f6fb4u: goto label_3f6fb4;
        case 0x3f6fd4u: goto label_3f6fd4;
        case 0x3f6ff8u: goto label_3f6ff8;
        case 0x3f700cu: goto label_3f700c;
        case 0x3f7024u: goto label_3f7024;
        case 0x3f7030u: goto label_3f7030;
        case 0x3f704cu: goto label_3f704c;
        case 0x3f7058u: goto label_3f7058;
        default: break;
    }

    ctx->pc = 0x3f6c70u;

    // 0x3f6c70: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x3f6c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x3f6c74: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x3f6c74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x3f6c78: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x3f6c78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x3f6c7c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x3f6c7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f6c80: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x3f6c80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x3f6c84: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3f6c84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f6c88: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x3f6c88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x3f6c8c: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x3f6c8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x3f6c90: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3f6c90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x3f6c94: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x3f6c94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x3f6c98: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3f6c98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3f6c9c: 0xde4300f8  ld          $v1, 0xF8($s2)
    ctx->pc = 0x3f6c9cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 248)));
    // 0x3f6ca0: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x3f6ca0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x3f6ca4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3F6CA4u;
    {
        const bool branch_taken_0x3f6ca4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F6CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6CA4u;
        // 0x3f6ca8: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f6ca4) {
            ctx->pc = 0x3F6CC0u;
            goto label_3f6cc0;
        }
    }
    ctx->pc = 0x3F6CACu;
    // 0x3f6cac: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x3f6cacu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x3f6cb0: 0xc0f86f2  jal         func_3E1BC8
    ctx->pc = 0x3F6CB0u;
    SET_GPR_U32(ctx, 31, 0x3F6CB8u);
    ctx->pc = 0x3F6CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F6CB0u;
    // 0x3f6cb4: 0x24a5f4a8  addiu       $a1, $a1, -0xB58 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964392));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1BC8u, 0x3F6CB0u, 0x3F6CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F6CB8u;
label_3f6cb8:
    // 0x3f6cb8: 0x10000075  b           . + 4 + (0x75 << 2)
    ctx->pc = 0x3F6CB8u;
    {
        const bool branch_taken_0x3f6cb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F6CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6CB8u;
        // 0x3f6cbc: 0x66050001  daddiu      $a1, $s0, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 16) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f6cb8) {
            ctx->pc = 0x3F6E90u;
            goto label_3f6e90;
        }
    }
    ctx->pc = 0x3F6CC0u;
label_3f6cc0:
    // 0x3f6cc0: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x3f6cc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x3f6cc4: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x3F6CC4u;
    {
        const bool branch_taken_0x3f6cc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F6CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6CC4u;
        // 0x3f6cc8: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f6cc4) {
            ctx->pc = 0x3F6D88u;
            goto label_3f6d88;
        }
    }
    ctx->pc = 0x3F6CCCu;
    // 0x3f6ccc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f6cccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f6cd0: 0x10983c  dsll32      $s3, $s0, 0
    ctx->pc = 0x3f6cd0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 16) << (32 + 0));
    // 0x3f6cd4: 0x13983f  dsra32      $s3, $s3, 0
    ctx->pc = 0x3f6cd4u;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 0));
    // 0x3f6cd8: 0xc0f8782  jal         func_3E1E08
    ctx->pc = 0x3F6CD8u;
    SET_GPR_U32(ctx, 31, 0x3F6CE0u);
    ctx->pc = 0x3F6CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F6CD8u;
    // 0x3f6cdc: 0x24a5f4c8  addiu       $a1, $a1, -0xB38 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964424));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1E08u, 0x3F6CD8u, 0x3F6CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F6CE0u;
label_3f6ce0:
    // 0x3f6ce0: 0x8e54015c  lw          $s4, 0x15C($s2)
    ctx->pc = 0x3f6ce0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 348)));
    // 0x3f6ce4: 0x293102b  sltu        $v0, $s4, $s3
    ctx->pc = 0x3f6ce4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x3f6ce8: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3F6CE8u;
    {
        const bool branch_taken_0x3f6ce8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f6ce8) {
            ctx->pc = 0x3F6D2Cu;
            goto label_3f6d2c;
        }
    }
    ctx->pc = 0x3F6CF0u;
    // 0x3f6cf0: 0x8e510158  lw          $s1, 0x158($s2)
    ctx->pc = 0x3f6cf0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 344)));
    // 0x3f6cf4: 0x0  nop
    ctx->pc = 0x3f6cf4u;
    // NOP
label_3f6cf8:
    // 0x3f6cf8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f6cf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f6cfc: 0x8e50015c  lw          $s0, 0x15C($s2)
    ctx->pc = 0x3f6cfcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 348)));
    // 0x3f6d00: 0x2749823  subu        $s3, $s3, $s4
    ctx->pc = 0x3f6d00u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
    // 0x3f6d04: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3f6d04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f6d08: 0xc0f94da  jal         func_3E5368
    ctx->pc = 0x3F6D08u;
    SET_GPR_U32(ctx, 31, 0x3F6D10u);
    ctx->pc = 0x3F6D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F6D08u;
    // 0x3f6d0c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E5368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E5368u, 0x3F6D08u, 0x3F6D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F6D10u;
label_3f6d10:
    // 0x3f6d10: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3f6d10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f6d14: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3f6d14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f6d18: 0xc0f85ec  jal         func_3E17B0
    ctx->pc = 0x3F6D18u;
    SET_GPR_U32(ctx, 31, 0x3F6D20u);
    ctx->pc = 0x3F6D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F6D18u;
    // 0x3f6d1c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x3F6D18u, 0x3F6D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F6D20u;
label_3f6d20:
    // 0x3f6d20: 0x293102b  sltu        $v0, $s4, $s3
    ctx->pc = 0x3f6d20u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x3f6d24: 0x5440fff4  bnel        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x3F6D24u;
    {
        const bool branch_taken_0x3f6d24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f6d24) {
            ctx->pc = 0x3F6D28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F6D24u;
            // 0x3f6d28: 0x8e510158  lw          $s1, 0x158($s2) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 344)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F6CF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3f6cf8;
        }
    }
    ctx->pc = 0x3F6D2Cu;
label_3f6d2c:
    // 0x3f6d2c: 0x12600009  beqz        $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x3F6D2Cu;
    {
        const bool branch_taken_0x3f6d2c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F6D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6D2Cu;
        // 0x3f6d30: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f6d2c) {
            ctx->pc = 0x3F6D54u;
            goto label_3f6d54;
        }
    }
    ctx->pc = 0x3F6D34u;
    // 0x3f6d34: 0x8e500158  lw          $s0, 0x158($s2)
    ctx->pc = 0x3f6d34u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 344)));
    // 0x3f6d38: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3f6d38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f6d3c: 0xc0f94da  jal         func_3E5368
    ctx->pc = 0x3F6D3Cu;
    SET_GPR_U32(ctx, 31, 0x3F6D44u);
    ctx->pc = 0x3F6D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F6D3Cu;
    // 0x3f6d40: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E5368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E5368u, 0x3F6D3Cu, 0x3F6D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F6D44u;
label_3f6d44:
    // 0x3f6d44: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3f6d44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f6d48: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3f6d48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f6d4c: 0xc0f85ec  jal         func_3E17B0
    ctx->pc = 0x3F6D4Cu;
    SET_GPR_U32(ctx, 31, 0x3F6D54u);
    ctx->pc = 0x3F6D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F6D4Cu;
    // 0x3f6d50: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x3F6D4Cu, 0x3F6D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F6D54u;
label_3f6d54:
    // 0x3f6d54: 0xc0fe77c  jal         func_3F9DF0
    ctx->pc = 0x3F6D54u;
    SET_GPR_U32(ctx, 31, 0x3F6D5Cu);
    ctx->pc = 0x3F6D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F6D54u;
    // 0x3f6d58: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F9DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F9DF0u, 0x3F6D54u, 0x3F6D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F6D5Cu;
label_3f6d5c:
    // 0x3f6d5c: 0x104000bf  beqz        $v0, . + 4 + (0xBF << 2)
    ctx->pc = 0x3F6D5Cu;
    {
        const bool branch_taken_0x3f6d5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F6D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6D5Cu;
        // 0x3f6d60: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f6d5c) {
            ctx->pc = 0x3F705Cu;
            goto label_3f705c;
        }
    }
    ctx->pc = 0x3F6D64u;
    // 0x3f6d64: 0x92420200  lbu         $v0, 0x200($s2)
    ctx->pc = 0x3f6d64u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 512)));
    // 0x3f6d68: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x3f6d68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x3f6d6c: 0x14400035  bnez        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x3F6D6Cu;
    {
        const bool branch_taken_0x3f6d6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F6D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6D6Cu;
        // 0x3f6d70: 0xde420100  ld          $v0, 0x100($s2) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f6d6c) {
            ctx->pc = 0x3F6E44u;
            goto label_3f6e44;
        }
    }
    ctx->pc = 0x3F6D74u;
    // 0x3f6d74: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x3f6d74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x3f6d78: 0x1440003a  bnez        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x3F6D78u;
    {
        const bool branch_taken_0x3f6d78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F6D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6D78u;
        // 0x3f6d7c: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f6d78) {
            ctx->pc = 0x3F6E64u;
            goto label_3f6e64;
        }
    }
    ctx->pc = 0x3F6D80u;
    // 0x3f6d80: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x3F6D80u;
    {
        const bool branch_taken_0x3f6d80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F6D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6D80u;
        // 0x3f6d84: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f6d80) {
            ctx->pc = 0x3F6E7Cu;
            goto label_3f6e7c;
        }
    }
    ctx->pc = 0x3F6D88u;
label_3f6d88:
    // 0x3f6d88: 0x12a00041  beqz        $s5, . + 4 + (0x41 << 2)
    ctx->pc = 0x3F6D88u;
    {
        const bool branch_taken_0x3f6d88 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F6D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6D88u;
        // 0x3f6d8c: 0x66050001  daddiu      $a1, $s0, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 16) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f6d88) {
            ctx->pc = 0x3F6E90u;
            goto label_3f6e90;
        }
    }
    ctx->pc = 0x3F6D90u;
    // 0x3f6d90: 0xdea20010  ld          $v0, 0x10($s5)
    ctx->pc = 0x3f6d90u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x3f6d94: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x3f6d94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x3f6d98: 0x1040003c  beqz        $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x3F6D98u;
    {
        const bool branch_taken_0x3f6d98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F6D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6D98u;
        // 0x3f6d9c: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f6d98) {
            ctx->pc = 0x3F6E8Cu;
            goto label_3f6e8c;
        }
    }
    ctx->pc = 0x3F6DA0u;
    // 0x3f6da0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f6da0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f6da4: 0x10983c  dsll32      $s3, $s0, 0
    ctx->pc = 0x3f6da4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 16) << (32 + 0));
    // 0x3f6da8: 0x13983f  dsra32      $s3, $s3, 0
    ctx->pc = 0x3f6da8u;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 0));
    // 0x3f6dac: 0xc0f8782  jal         func_3E1E08
    ctx->pc = 0x3F6DACu;
    SET_GPR_U32(ctx, 31, 0x3F6DB4u);
    ctx->pc = 0x3F6DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F6DACu;
    // 0x3f6db0: 0x24a5f4e0  addiu       $a1, $a1, -0xB20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1E08u, 0x3F6DACu, 0x3F6DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F6DB4u;
label_3f6db4:
    // 0x3f6db4: 0x8e54015c  lw          $s4, 0x15C($s2)
    ctx->pc = 0x3f6db4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 348)));
    // 0x3f6db8: 0x293102b  sltu        $v0, $s4, $s3
    ctx->pc = 0x3f6db8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x3f6dbc: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x3F6DBCu;
    {
        const bool branch_taken_0x3f6dbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f6dbc) {
            ctx->pc = 0x3F6DFCu;
            goto label_3f6dfc;
        }
    }
    ctx->pc = 0x3F6DC4u;
    // 0x3f6dc4: 0x8e510158  lw          $s1, 0x158($s2)
    ctx->pc = 0x3f6dc4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 344)));
label_3f6dc8:
    // 0x3f6dc8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f6dc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f6dcc: 0x8e50015c  lw          $s0, 0x15C($s2)
    ctx->pc = 0x3f6dccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 348)));
    // 0x3f6dd0: 0x2749823  subu        $s3, $s3, $s4
    ctx->pc = 0x3f6dd0u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
    // 0x3f6dd4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3f6dd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f6dd8: 0xc0f94da  jal         func_3E5368
    ctx->pc = 0x3F6DD8u;
    SET_GPR_U32(ctx, 31, 0x3F6DE0u);
    ctx->pc = 0x3F6DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F6DD8u;
    // 0x3f6ddc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E5368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E5368u, 0x3F6DD8u, 0x3F6DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F6DE0u;
label_3f6de0:
    // 0x3f6de0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3f6de0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f6de4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3f6de4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f6de8: 0xc0f85ec  jal         func_3E17B0
    ctx->pc = 0x3F6DE8u;
    SET_GPR_U32(ctx, 31, 0x3F6DF0u);
    ctx->pc = 0x3F6DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F6DE8u;
    // 0x3f6dec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x3F6DE8u, 0x3F6DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F6DF0u;
label_3f6df0:
    // 0x3f6df0: 0x293102b  sltu        $v0, $s4, $s3
    ctx->pc = 0x3f6df0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x3f6df4: 0x5440fff4  bnel        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x3F6DF4u;
    {
        const bool branch_taken_0x3f6df4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f6df4) {
            ctx->pc = 0x3F6DF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F6DF4u;
            // 0x3f6df8: 0x8e510158  lw          $s1, 0x158($s2) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 344)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F6DC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3f6dc8;
        }
    }
    ctx->pc = 0x3F6DFCu;
label_3f6dfc:
    // 0x3f6dfc: 0x12600009  beqz        $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x3F6DFCu;
    {
        const bool branch_taken_0x3f6dfc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F6E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6DFCu;
        // 0x3f6e00: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f6dfc) {
            ctx->pc = 0x3F6E24u;
            goto label_3f6e24;
        }
    }
    ctx->pc = 0x3F6E04u;
    // 0x3f6e04: 0x8e500158  lw          $s0, 0x158($s2)
    ctx->pc = 0x3f6e04u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 344)));
    // 0x3f6e08: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3f6e08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f6e0c: 0xc0f94da  jal         func_3E5368
    ctx->pc = 0x3F6E0Cu;
    SET_GPR_U32(ctx, 31, 0x3F6E14u);
    ctx->pc = 0x3F6E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F6E0Cu;
    // 0x3f6e10: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E5368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E5368u, 0x3F6E0Cu, 0x3F6E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F6E14u;
label_3f6e14:
    // 0x3f6e14: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3f6e14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f6e18: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3f6e18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f6e1c: 0xc0f85ec  jal         func_3E17B0
    ctx->pc = 0x3F6E1Cu;
    SET_GPR_U32(ctx, 31, 0x3F6E24u);
    ctx->pc = 0x3F6E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F6E1Cu;
    // 0x3f6e20: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x3F6E1Cu, 0x3F6E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F6E24u;
label_3f6e24:
    // 0x3f6e24: 0xc0fe77c  jal         func_3F9DF0
    ctx->pc = 0x3F6E24u;
    SET_GPR_U32(ctx, 31, 0x3F6E2Cu);
    ctx->pc = 0x3F6E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F6E24u;
    // 0x3f6e28: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F9DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F9DF0u, 0x3F6E24u, 0x3F6E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F6E2Cu;
label_3f6e2c:
    // 0x3f6e2c: 0x1040008b  beqz        $v0, . + 4 + (0x8B << 2)
    ctx->pc = 0x3F6E2Cu;
    {
        const bool branch_taken_0x3f6e2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F6E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6E2Cu;
        // 0x3f6e30: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f6e2c) {
            ctx->pc = 0x3F705Cu;
            goto label_3f705c;
        }
    }
    ctx->pc = 0x3F6E34u;
    // 0x3f6e34: 0x92420200  lbu         $v0, 0x200($s2)
    ctx->pc = 0x3f6e34u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 512)));
    // 0x3f6e38: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x3f6e38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x3f6e3c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3F6E3Cu;
    {
        const bool branch_taken_0x3f6e3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F6E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6E3Cu;
        // 0x3f6e40: 0xde420100  ld          $v0, 0x100($s2) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f6e3c) {
            ctx->pc = 0x3F6E58u;
            goto label_3f6e58;
        }
    }
    ctx->pc = 0x3F6E44u;
label_3f6e44:
    // 0x3f6e44: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x3f6e44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x3f6e48: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3F6E48u;
    {
        const bool branch_taken_0x3f6e48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F6E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6E48u;
        // 0x3f6e4c: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f6e48) {
            ctx->pc = 0x3F6E64u;
            goto label_3f6e64;
        }
    }
    ctx->pc = 0x3F6E50u;
    // 0x3f6e50: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3F6E50u;
    {
        const bool branch_taken_0x3f6e50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F6E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6E50u;
        // 0x3f6e54: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f6e50) {
            ctx->pc = 0x3F6E7Cu;
            goto label_3f6e7c;
        }
    }
    ctx->pc = 0x3F6E58u;
label_3f6e58:
    // 0x3f6e58: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x3f6e58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x3f6e5c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3F6E5Cu;
    {
        const bool branch_taken_0x3f6e5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F6E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6E5Cu;
        // 0x3f6e60: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f6e5c) {
            ctx->pc = 0x3F6E78u;
            goto label_3f6e78;
        }
    }
    ctx->pc = 0x3F6E64u;
label_3f6e64:
    // 0x3f6e64: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f6e64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f6e68: 0xc0f865c  jal         func_3E1970
    ctx->pc = 0x3F6E68u;
    SET_GPR_U32(ctx, 31, 0x3F6E70u);
    ctx->pc = 0x3F6E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F6E68u;
    // 0x3f6e6c: 0x24a5ea40  addiu       $a1, $a1, -0x15C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1970u, 0x3F6E68u, 0x3F6E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F6E70u;
label_3f6e70:
    // 0x3f6e70: 0x1000007a  b           . + 4 + (0x7A << 2)
    ctx->pc = 0x3F6E70u;
    {
        const bool branch_taken_0x3f6e70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F6E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6E70u;
        // 0x3f6e74: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f6e70) {
            ctx->pc = 0x3F705Cu;
            goto label_3f705c;
        }
    }
    ctx->pc = 0x3F6E78u;
label_3f6e78:
    // 0x3f6e78: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f6e78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3f6e7c:
    // 0x3f6e7c: 0xc0f8704  jal         func_3E1C10
    ctx->pc = 0x3F6E7Cu;
    SET_GPR_U32(ctx, 31, 0x3F6E84u);
    ctx->pc = 0x3F6E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F6E7Cu;
    // 0x3f6e80: 0x24a5ea40  addiu       $a1, $a1, -0x15C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1C10u, 0x3F6E7Cu, 0x3F6E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F6E84u;
label_3f6e84:
    // 0x3f6e84: 0x10000075  b           . + 4 + (0x75 << 2)
    ctx->pc = 0x3F6E84u;
    {
        const bool branch_taken_0x3f6e84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F6E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6E84u;
        // 0x3f6e88: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f6e84) {
            ctx->pc = 0x3F705Cu;
            goto label_3f705c;
        }
    }
    ctx->pc = 0x3F6E8Cu;
label_3f6e8c:
    // 0x3f6e8c: 0x66050001  daddiu      $a1, $s0, 0x1
    ctx->pc = 0x3f6e8cu;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 16) + (int64_t)(int32_t)1);
label_3f6e90:
    // 0x3f6e90: 0xc0f8ae2  jal         func_3E2B88
    ctx->pc = 0x3F6E90u;
    SET_GPR_U32(ctx, 31, 0x3F6E98u);
    ctx->pc = 0x3F6E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F6E90u;
    // 0x3f6e94: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2B88u, 0x3F6E90u, 0x3F6E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F6E98u;
label_3f6e98:
    // 0x3f6e98: 0x10803c  dsll32      $s0, $s0, 0
    ctx->pc = 0x3f6e98u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
    // 0x3f6e9c: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x3f6e9cu;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x3f6ea0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3f6ea0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f6ea4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f6ea4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f6ea8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3f6ea8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f6eac: 0xc0f94da  jal         func_3E5368
    ctx->pc = 0x3F6EACu;
    SET_GPR_U32(ctx, 31, 0x3F6EB4u);
    ctx->pc = 0x3F6EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F6EACu;
    // 0x3f6eb0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E5368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E5368u, 0x3F6EACu, 0x3F6EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F6EB4u;
label_3f6eb4:
    // 0x3f6eb4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f6eb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f6eb8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3f6eb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f6ebc: 0xc0f85ec  jal         func_3E17B0
    ctx->pc = 0x3F6EBCu;
    SET_GPR_U32(ctx, 31, 0x3F6EC4u);
    ctx->pc = 0x3F6EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F6EBCu;
    // 0x3f6ec0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x3F6EBCu, 0x3F6EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F6EC4u;
label_3f6ec4:
    // 0x3f6ec4: 0xc0fe77c  jal         func_3F9DF0
    ctx->pc = 0x3F6EC4u;
    SET_GPR_U32(ctx, 31, 0x3F6ECCu);
    ctx->pc = 0x3F6EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F6EC4u;
    // 0x3f6ec8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F9DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F9DF0u, 0x3F6EC4u, 0x3F6ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F6ECCu;
label_3f6ecc:
    // 0x3f6ecc: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x3F6ECCu;
    {
        const bool branch_taken_0x3f6ecc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F6ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6ECCu;
        // 0x3f6ed0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f6ecc) {
            ctx->pc = 0x3F6F2Cu;
            goto label_3f6f2c;
        }
    }
    ctx->pc = 0x3F6ED4u;
    // 0x3f6ed4: 0x92420200  lbu         $v0, 0x200($s2)
    ctx->pc = 0x3f6ed4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 512)));
    // 0x3f6ed8: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x3f6ed8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x3f6edc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3F6EDCu;
    {
        const bool branch_taken_0x3f6edc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F6EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6EDCu;
        // 0x3f6ee0: 0xde420100  ld          $v0, 0x100($s2) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f6edc) {
            ctx->pc = 0x3F6EF8u;
            goto label_3f6ef8;
        }
    }
    ctx->pc = 0x3F6EE4u;
    // 0x3f6ee4: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x3f6ee4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x3f6ee8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3F6EE8u;
    {
        const bool branch_taken_0x3f6ee8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F6EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6EE8u;
        // 0x3f6eec: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f6ee8) {
            ctx->pc = 0x3F6F04u;
            goto label_3f6f04;
        }
    }
    ctx->pc = 0x3F6EF0u;
    // 0x3f6ef0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3F6EF0u;
    {
        const bool branch_taken_0x3f6ef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F6EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6EF0u;
        // 0x3f6ef4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f6ef0) {
            ctx->pc = 0x3F6F20u;
            goto label_3f6f20;
        }
    }
    ctx->pc = 0x3F6EF8u;
label_3f6ef8:
    // 0x3f6ef8: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x3f6ef8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x3f6efc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3F6EFCu;
    {
        const bool branch_taken_0x3f6efc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F6F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6EFCu;
        // 0x3f6f00: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f6efc) {
            ctx->pc = 0x3F6F1Cu;
            goto label_3f6f1c;
        }
    }
    ctx->pc = 0x3F6F04u;
label_3f6f04:
    // 0x3f6f04: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x3f6f04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x3f6f08: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f6f08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f6f0c: 0xc0f865c  jal         func_3E1970
    ctx->pc = 0x3F6F0Cu;
    SET_GPR_U32(ctx, 31, 0x3F6F14u);
    ctx->pc = 0x3F6F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F6F0Cu;
    // 0x3f6f10: 0x24a5ea40  addiu       $a1, $a1, -0x15C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1970u, 0x3F6F0Cu, 0x3F6F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F6F14u;
label_3f6f14:
    // 0x3f6f14: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3F6F14u;
    {
        const bool branch_taken_0x3f6f14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F6F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6F14u;
        // 0x3f6f18: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f6f14) {
            ctx->pc = 0x3F6F2Cu;
            goto label_3f6f2c;
        }
    }
    ctx->pc = 0x3F6F1Cu;
label_3f6f1c:
    // 0x3f6f1c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f6f1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3f6f20:
    // 0x3f6f20: 0xc0f8704  jal         func_3E1C10
    ctx->pc = 0x3F6F20u;
    SET_GPR_U32(ctx, 31, 0x3F6F28u);
    ctx->pc = 0x3F6F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F6F20u;
    // 0x3f6f24: 0x24a5ea40  addiu       $a1, $a1, -0x15C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1C10u, 0x3F6F20u, 0x3F6F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F6F28u;
label_3f6f28:
    // 0x3f6f28: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3f6f28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3f6f2c:
    // 0x3f6f2c: 0x1440003e  bnez        $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x3F6F2Cu;
    {
        const bool branch_taken_0x3f6f2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F6F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6F2Cu;
        // 0x3f6f30: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f6f2c) {
            ctx->pc = 0x3F7028u;
            goto label_3f7028;
        }
    }
    ctx->pc = 0x3F6F34u;
    // 0x3f6f34: 0x2301021  addu        $v0, $s1, $s0
    ctx->pc = 0x3f6f34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x3f6f38: 0x26240001  addiu       $a0, $s1, 0x1
    ctx->pc = 0x3f6f38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3f6f3c: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x3f6f3cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3f6f40: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x3f6f40u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f6f44: 0xc0bcc0c  jal         func_2F3030
    ctx->pc = 0x3F6F44u;
    SET_GPR_U32(ctx, 31, 0x3F6F4Cu);
    ctx->pc = 0x3F6F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F6F44u;
    // 0x3f6f48: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F3030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F3030u, 0x3F6F44u, 0x3F6F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F6F4Cu;
label_3f6f4c:
    // 0x3f6f4c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3f6f4cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f6f50: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x3f6f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3f6f54: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x3f6f54u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3f6f58: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3F6F58u;
    {
        const bool branch_taken_0x3f6f58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F6F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6F58u;
        // 0x3f6f5c: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f6f58) {
            ctx->pc = 0x3F6F74u;
            goto label_3f6f74;
        }
    }
    ctx->pc = 0x3F6F60u;
    // 0x3f6f60: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f6f60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f6f64: 0xc0f8782  jal         func_3E1E08
    ctx->pc = 0x3F6F64u;
    SET_GPR_U32(ctx, 31, 0x3F6F6Cu);
    ctx->pc = 0x3F6F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F6F64u;
    // 0x3f6f68: 0x24a5f4f8  addiu       $a1, $a1, -0xB08 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964472));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1E08u, 0x3F6F64u, 0x3F6F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F6F6Cu;
label_3f6f6c:
    // 0x3f6f6c: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x3F6F6Cu;
    {
        const bool branch_taken_0x3f6f6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F6F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6F6Cu;
        // 0x3f6f70: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f6f6c) {
            ctx->pc = 0x3F705Cu;
            goto label_3f705c;
        }
    }
    ctx->pc = 0x3F6F74u;
label_3f6f74:
    // 0x3f6f74: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x3f6f74u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3f6f78: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3F6F78u;
    {
        const bool branch_taken_0x3f6f78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F6F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6F78u;
        // 0x3f6f7c: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f6f78) {
            ctx->pc = 0x3F6FA4u;
            goto label_3f6fa4;
        }
    }
    ctx->pc = 0x3F6F80u;
    // 0x3f6f80: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x3f6f80u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f6f84: 0x0  nop
    ctx->pc = 0x3f6f84u;
    // NOP
label_3f6f88:
    // 0x3f6f88: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3f6f88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3f6f8c: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x3f6f8cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3f6f90: 0x0  nop
    ctx->pc = 0x3f6f90u;
    // NOP
    // 0x3f6f94: 0x0  nop
    ctx->pc = 0x3f6f94u;
    // NOP
    // 0x3f6f98: 0x0  nop
    ctx->pc = 0x3f6f98u;
    // NOP
    // 0x3f6f9c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3F6F9Cu;
    {
        const bool branch_taken_0x3f6f9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F6FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6F9Cu;
        // 0x3f6fa0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f6f9c) {
            ctx->pc = 0x3F6F88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3f6f88;
        }
    }
    ctx->pc = 0x3F6FA4u;
label_3f6fa4:
    // 0x3f6fa4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3f6fa4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3f6fa8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3f6fa8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f6fac: 0xc0bcc0c  jal         func_2F3030
    ctx->pc = 0x3F6FACu;
    SET_GPR_U32(ctx, 31, 0x3F6FB4u);
    ctx->pc = 0x3F6FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F6FACu;
    // 0x3f6fb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F3030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F3030u, 0x3F6FACu, 0x3F6FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F6FB4u;
label_3f6fb4:
    // 0x3f6fb4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3f6fb4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f6fb8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x3f6fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3f6fbc: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x3f6fbcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3f6fc0: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3F6FC0u;
    {
        const bool branch_taken_0x3f6fc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F6FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6FC0u;
        // 0x3f6fc4: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f6fc0) {
            ctx->pc = 0x3F6FDCu;
            goto label_3f6fdc;
        }
    }
    ctx->pc = 0x3F6FC8u;
    // 0x3f6fc8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f6fc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f6fcc: 0xc0f8782  jal         func_3E1E08
    ctx->pc = 0x3F6FCCu;
    SET_GPR_U32(ctx, 31, 0x3F6FD4u);
    ctx->pc = 0x3F6FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F6FCCu;
    // 0x3f6fd0: 0x24a5f520  addiu       $a1, $a1, -0xAE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1E08u, 0x3F6FCCu, 0x3F6FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F6FD4u;
label_3f6fd4:
    // 0x3f6fd4: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x3F6FD4u;
    {
        const bool branch_taken_0x3f6fd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F6FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6FD4u;
        // 0x3f6fd8: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f6fd4) {
            ctx->pc = 0x3F705Cu;
            goto label_3f705c;
        }
    }
    ctx->pc = 0x3F6FDCu;
label_3f6fdc:
    // 0x3f6fdc: 0x2d0102b  sltu        $v0, $s6, $s0
    ctx->pc = 0x3f6fdcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x3f6fe0: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x3F6FE0u;
    {
        const bool branch_taken_0x3f6fe0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F6FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6FE0u;
        // 0x3f6fe4: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f6fe0) {
            ctx->pc = 0x3F7018u;
            goto label_3f7018;
        }
    }
    ctx->pc = 0x3F6FE8u;
    // 0x3f6fe8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3f6fe8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f6fec: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3f6fecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f6ff0: 0xc0beed6  jal         func_2FBB58
    ctx->pc = 0x3F6FF0u;
    SET_GPR_U32(ctx, 31, 0x3F6FF8u);
    ctx->pc = 0x3F6FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F6FF0u;
    // 0x3f6ff4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBB58u, 0x3F6FF0u, 0x3F6FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F6FF8u;
label_3f6ff8:
    // 0x3f6ff8: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3F6FF8u;
    {
        const bool branch_taken_0x3f6ff8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x3F6FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6FF8u;
        // 0x3f6ffc: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f6ff8) {
            ctx->pc = 0x3F7018u;
            goto label_3f7018;
        }
    }
    ctx->pc = 0x3F7000u;
    // 0x3f7000: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3f7000u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f7004: 0xc0beed6  jal         func_2FBB58
    ctx->pc = 0x3F7004u;
    SET_GPR_U32(ctx, 31, 0x3F700Cu);
    ctx->pc = 0x3F7008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F7004u;
    // 0x3f7008: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBB58u, 0x3F7004u, 0x3F700Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F700Cu;
label_3f700c:
    // 0x3f700c: 0x5c40000a  bgtzl       $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3F700Cu;
    {
        const bool branch_taken_0x3f700c = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x3f700c) {
            ctx->pc = 0x3F7010u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F700Cu;
            // 0x3f7010: 0x82260000  lb          $a2, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F7038u;
            goto label_3f7038;
        }
    }
    ctx->pc = 0x3F7014u;
    // 0x3f7014: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x3f7014u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_3f7018:
    // 0x3f7018: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f7018u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f701c: 0xc0f8782  jal         func_3E1E08
    ctx->pc = 0x3F701Cu;
    SET_GPR_U32(ctx, 31, 0x3F7024u);
    ctx->pc = 0x3F7020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F701Cu;
    // 0x3f7020: 0x24a5f548  addiu       $a1, $a1, -0xAB8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1E08u, 0x3F701Cu, 0x3F7024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F7024u;
label_3f7024:
    // 0x3f7024: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f7024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3f7028:
    // 0x3f7028: 0xc0f8b02  jal         func_3E2C08
    ctx->pc = 0x3F7028u;
    SET_GPR_U32(ctx, 31, 0x3F7030u);
    ctx->pc = 0x3F702Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F7028u;
    // 0x3f702c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2C08u, 0x3F7028u, 0x3F7030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F7030u;
label_3f7030:
    // 0x3f7030: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3F7030u;
    {
        const bool branch_taken_0x3f7030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F7034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7030u;
        // 0x3f7034: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f7030) {
            ctx->pc = 0x3F705Cu;
            goto label_3f705c;
        }
    }
    ctx->pc = 0x3F7038u;
label_3f7038:
    // 0x3f7038: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x3f7038u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f703c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f703cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f7040: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x3f7040u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f7044: 0xc0fee84  jal         func_3FBA10
    ctx->pc = 0x3F7044u;
    SET_GPR_U32(ctx, 31, 0x3F704Cu);
    ctx->pc = 0x3F7048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F7044u;
    // 0x3f7048: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3FBA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3FBA10u, 0x3F7044u, 0x3F704Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F704Cu;
label_3f704c:
    // 0x3f704c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f704cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f7050: 0xc0f8b02  jal         func_3E2C08
    ctx->pc = 0x3F7050u;
    SET_GPR_U32(ctx, 31, 0x3F7058u);
    ctx->pc = 0x3F7054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F7050u;
    // 0x3f7054: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2C08u, 0x3F7050u, 0x3F7058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F7058u;
label_3f7058:
    // 0x3f7058: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x3f7058u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3f705c:
    // 0x3f705c: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x3f705cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3f7060: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x3f7060u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3f7064: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x3f7064u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3f7068: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3f7068u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3f706c: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x3f706cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3f7070: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x3f7070u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3f7074: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3f7074u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3f7078: 0x3e00008  jr          $ra
    ctx->pc = 0x3F7078u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F707Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7078u;
        // 0x3f707c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F7078u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F7080u;
}
