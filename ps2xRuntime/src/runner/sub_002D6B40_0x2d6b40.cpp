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

// Function: sub_002D6B40
// Address: 0x2d6b40 - 0x2d6c50
void sub_002D6B40_0x2d6b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D6B40_0x2d6b40");
#endif

    switch (ctx->pc) {
        case 0x2d6b68u: goto label_2d6b68;
        case 0x2d6b74u: goto label_2d6b74;
        case 0x2d6b98u: goto label_2d6b98;
        case 0x2d6bb0u: goto label_2d6bb0;
        case 0x2d6bccu: goto label_2d6bcc;
        case 0x2d6be4u: goto label_2d6be4;
        case 0x2d6bf0u: goto label_2d6bf0;
        case 0x2d6c08u: goto label_2d6c08;
        case 0x2d6c24u: goto label_2d6c24;
        default: break;
    }

    ctx->pc = 0x2d6b40u;

    // 0x2d6b40: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2d6b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2d6b44: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2d6b44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2d6b48: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d6b48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2d6b4c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d6b4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d6b50: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x2d6b50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x2d6b54: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x2d6b54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x2d6b58: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2d6b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d6b5c: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x2d6b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x2d6b60: 0xc0b42ec  jal         func_2D0BB0
    ctx->pc = 0x2D6B60u;
    SET_GPR_U32(ctx, 31, 0x2D6B68u);
    ctx->pc = 0x2D0BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0BB0u, 0x2D6B60u, 0x2D6B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6B68u;
label_2d6b68:
    // 0x2d6b68: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d6b68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6b6c: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x2D6B6Cu;
    {
        const bool branch_taken_0x2d6b6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d6b6c) {
            ctx->pc = 0x2D6C14u;
            goto label_2d6c14;
        }
    }
    ctx->pc = 0x2D6B74u;
label_2d6b74:
    // 0x2d6b74: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2d6b74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d6b78: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x2d6b78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x2d6b7c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2d6b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d6b80: 0x14620023  bne         $v1, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x2D6B80u;
    {
        const bool branch_taken_0x2d6b80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2d6b80) {
            ctx->pc = 0x2D6C10u;
            goto label_2d6c10;
        }
    }
    ctx->pc = 0x2D6B88u;
    // 0x2d6b88: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x2d6b88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d6b8c: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x2d6b8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d6b90: 0xc0b4aac  jal         func_2D2AB0
    ctx->pc = 0x2D6B90u;
    SET_GPR_U32(ctx, 31, 0x2D6B98u);
    ctx->pc = 0x2D2AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2AB0u, 0x2D6B90u, 0x2D6B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6B98u;
label_2d6b98:
    // 0x2d6b98: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2D6B98u;
    {
        const bool branch_taken_0x2d6b98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d6b98) {
            ctx->pc = 0x2D6BCCu;
            goto label_2d6bcc;
        }
    }
    ctx->pc = 0x2D6BA0u;
    // 0x2d6ba0: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x2d6ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d6ba4: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x2d6ba4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x2d6ba8: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2D6BA8u;
    SET_GPR_U32(ctx, 31, 0x2D6BB0u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2D6BA8u, 0x2D6BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6BB0u;
label_2d6bb0:
    // 0x2d6bb0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2d6bb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6bb4: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D6BB4u;
    {
        const bool branch_taken_0x2d6bb4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d6bb4) {
            ctx->pc = 0x2D6BCCu;
            goto label_2d6bcc;
        }
    }
    ctx->pc = 0x2D6BBCu;
    // 0x2d6bbc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d6bbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6bc0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2d6bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d6bc4: 0xc0ae044  jal         func_2B8110
    ctx->pc = 0x2D6BC4u;
    SET_GPR_U32(ctx, 31, 0x2D6BCCu);
    ctx->pc = 0x2B8110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8110u, 0x2D6BC4u, 0x2D6BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6BCCu;
label_2d6bcc:
    // 0x2d6bcc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2d6bccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d6bd0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D6BD0u;
    {
        const bool branch_taken_0x2d6bd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d6bd0) {
            ctx->pc = 0x2D6BF4u;
            goto label_2d6bf4;
        }
    }
    ctx->pc = 0x2D6BD8u;
    // 0x2d6bd8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2d6bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d6bdc: 0xc0b42dc  jal         func_2D0B70
    ctx->pc = 0x2D6BDCu;
    SET_GPR_U32(ctx, 31, 0x2D6BE4u);
    ctx->pc = 0x2D0B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0B70u, 0x2D6BDCu, 0x2D6BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6BE4u;
label_2d6be4:
    // 0x2d6be4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2d6be4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d6be8: 0xc119c5c  jal         func_467170
    ctx->pc = 0x2D6BE8u;
    SET_GPR_U32(ctx, 31, 0x2D6BF0u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x2D6BE8u, 0x2D6BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6BF0u;
label_2d6bf0:
    // 0x2d6bf0: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2d6bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_2d6bf4:
    // 0x2d6bf4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2d6bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d6bf8: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x2d6bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x2d6bfc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2d6bfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6c00: 0xc0b4854  jal         func_2D2150
    ctx->pc = 0x2D6C00u;
    SET_GPR_U32(ctx, 31, 0x2D6C08u);
    ctx->pc = 0x2D2150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2150u, 0x2D6C00u, 0x2D6C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6C08u;
label_2d6c08:
    // 0x2d6c08: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2D6C08u;
    {
        const bool branch_taken_0x2d6c08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d6c08) {
            ctx->pc = 0x2D6C2Cu;
            goto label_2d6c2c;
        }
    }
    ctx->pc = 0x2D6C10u;
label_2d6c10:
    // 0x2d6c10: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2d6c10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_2d6c14:
    // 0x2d6c14: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2d6c14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d6c18: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x2d6c18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x2d6c1c: 0xc0b42d4  jal         func_2D0B50
    ctx->pc = 0x2D6C1Cu;
    SET_GPR_U32(ctx, 31, 0x2D6C24u);
    ctx->pc = 0x2D0B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0B50u, 0x2D6C1Cu, 0x2D6C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6C24u;
label_2d6c24:
    // 0x2d6c24: 0x1602ffd3  bne         $s0, $v0, . + 4 + (-0x2D << 2)
    ctx->pc = 0x2D6C24u;
    {
        const bool branch_taken_0x2d6c24 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x2d6c24) {
            ctx->pc = 0x2D6B74u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d6b74;
        }
    }
    ctx->pc = 0x2D6C2Cu;
label_2d6c2c:
    // 0x2d6c2c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2d6c2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d6c30: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d6c30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d6c34: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d6c34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d6c38: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2d6c38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2d6c3c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D6C3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D6C3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D6C44u;
    // 0x2d6c44: 0x0  nop
    ctx->pc = 0x2d6c44u;
    // NOP
    // 0x2d6c48: 0x0  nop
    ctx->pc = 0x2d6c48u;
    // NOP
    // 0x2d6c4c: 0x0  nop
    ctx->pc = 0x2d6c4cu;
    // NOP
    ctx->pc = 0x2d6c50u;
}
