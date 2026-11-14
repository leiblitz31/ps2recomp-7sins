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

// Function: sub_0049AC00
// Address: 0x49ac00 - 0x49ac78
void sub_0049AC00_0x49ac00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049AC00_0x49ac00");
#endif

    switch (ctx->pc) {
        case 0x49ac30u: goto label_49ac30;
        case 0x49ac3cu: goto label_49ac3c;
        default: break;
    }

    ctx->pc = 0x49ac00u;

    // 0x49ac00: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x49ac00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x49ac04: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x49ac04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x49ac08: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x49ac08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x49ac0c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x49ac0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x49ac10: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x49ac10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x49ac14: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x49ac14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x49ac18: 0x8cb30050  lw          $s3, 0x50($a1)
    ctx->pc = 0x49ac18u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 80)));
    // 0x49ac1c: 0x8e700000  lw          $s0, 0x0($s3)
    ctx->pc = 0x49ac1cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x49ac20: 0x1213000d  beq         $s0, $s3, . + 4 + (0xD << 2)
    ctx->pc = 0x49AC20u;
    {
        const bool branch_taken_0x49ac20 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 19));
        ctx->pc = 0x49AC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49AC20u;
        // 0x49ac24: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49ac20) {
            ctx->pc = 0x49AC58u;
            goto label_49ac58;
        }
    }
    ctx->pc = 0x49AC28u;
    // 0x49ac28: 0x8e04ffe0  lw          $a0, -0x20($s0)
    ctx->pc = 0x49ac28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967264)));
    // 0x49ac2c: 0x0  nop
    ctx->pc = 0x49ac2cu;
    // NOP
label_49ac30:
    // 0x49ac30: 0x2611ffe0  addiu       $s1, $s0, -0x20
    ctx->pc = 0x49ac30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967264));
    // 0x49ac34: 0xc12a3ec  jal         func_4A8FB0
    ctx->pc = 0x49AC34u;
    SET_GPR_U32(ctx, 31, 0x49AC3Cu);
    ctx->pc = 0x49AC38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49AC34u;
    // 0x49ac38: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8FB0u, 0x49AC34u, 0x49AC3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49AC3Cu;
label_49ac3c:
    // 0x49ac3c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x49AC3Cu;
    {
        const bool branch_taken_0x49ac3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x49ac3c) {
            ctx->pc = 0x49AC40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49AC3Cu;
            // 0x49ac40: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x49AC50u;
            goto label_49ac50;
        }
    }
    ctx->pc = 0x49AC44u;
    // 0x49ac44: 0xae510004  sw          $s1, 0x4($s2)
    ctx->pc = 0x49ac44u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 17));
    // 0x49ac48: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x49AC48u;
    {
        const bool branch_taken_0x49ac48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49AC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49AC48u;
        // 0x49ac4c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49ac48) {
            ctx->pc = 0x49AC5Cu;
            goto label_49ac5c;
        }
    }
    ctx->pc = 0x49AC50u;
label_49ac50:
    // 0x49ac50: 0x5613fff7  bnel        $s0, $s3, . + 4 + (-0x9 << 2)
    ctx->pc = 0x49AC50u;
    {
        const bool branch_taken_0x49ac50 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 19));
        if (branch_taken_0x49ac50) {
            ctx->pc = 0x49AC54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49AC50u;
            // 0x49ac54: 0x8e04ffe0  lw          $a0, -0x20($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967264)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x49AC30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49ac30;
        }
    }
    ctx->pc = 0x49AC58u;
label_49ac58:
    // 0x49ac58: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x49ac58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_49ac5c:
    // 0x49ac5c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x49ac5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x49ac60: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x49ac60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x49ac64: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x49ac64u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x49ac68: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x49ac68u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x49ac6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x49ac6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49ac70: 0x3e00008  jr          $ra
    ctx->pc = 0x49AC70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49AC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49AC70u;
        // 0x49ac74: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49AC70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49AC78u;
}
