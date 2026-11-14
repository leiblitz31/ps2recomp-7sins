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

// Function: sub_004AADD8
// Address: 0x4aadd8 - 0x4aae10
void sub_004AADD8_0x4aadd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AADD8_0x4aadd8");
#endif

    switch (ctx->pc) {
        case 0x4aade8u: goto label_4aade8;
        default: break;
    }

    ctx->pc = 0x4aadd8u;

    // 0x4aadd8: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x4aadd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x4aaddc: 0x10640009  beq         $v1, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x4AADDCu;
    {
        const bool branch_taken_0x4aaddc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x4AADE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AADDCu;
        // 0x4aade0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aaddc) {
            ctx->pc = 0x4AAE04u;
            goto label_4aae04;
        }
    }
    ctx->pc = 0x4AADE4u;
    // 0x4aade4: 0x0  nop
    ctx->pc = 0x4aade4u;
    // NOP
label_4aade8:
    // 0x4aade8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x4aade8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x4aadec: 0x54450003  bnel        $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4AADECu;
    {
        const bool branch_taken_0x4aadec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x4aadec) {
            ctx->pc = 0x4AADF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4AADECu;
            // 0x4aadf0: 0x8c630004  lw          $v1, 0x4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4AADFCu;
            goto label_4aadfc;
        }
    }
    ctx->pc = 0x4AADF4u;
    // 0x4aadf4: 0x3e00008  jr          $ra
    ctx->pc = 0x4AADF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AADF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AADF4u;
        // 0x4aadf8: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AADF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AADFCu;
label_4aadfc:
    // 0x4aadfc: 0x1464fffa  bne         $v1, $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4AADFCu;
    {
        const bool branch_taken_0x4aadfc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x4AAE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AADFCu;
        // 0x4aae00: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aadfc) {
            ctx->pc = 0x4AADE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4aade8;
        }
    }
    ctx->pc = 0x4AAE04u;
label_4aae04:
    // 0x4aae04: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4aae04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4aae08: 0x3e00008  jr          $ra
    ctx->pc = 0x4AAE08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AAE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AAE08u;
        // 0x4aae0c: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AAE08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AAE10u;
}
