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

// Function: sub_00389798
// Address: 0x389798 - 0x3897c0
void sub_00389798_0x389798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00389798_0x389798");
#endif

    ctx->pc = 0x389798u;

    // 0x389798: 0x8c82006c  lw          $v0, 0x6C($a0)
    ctx->pc = 0x389798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 108)));
    // 0x38979c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x38979Cu;
    {
        const bool branch_taken_0x38979c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38979c) {
            ctx->pc = 0x3897A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38979Cu;
            // 0x3897a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3897B4u;
            goto label_3897b4;
        }
    }
    ctx->pc = 0x3897A4u;
    // 0x3897a4: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x3897a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x3897a8: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x3897A8u;
    {
        const bool branch_taken_0x3897a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3897ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3897A8u;
        // 0x3897ac: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3897a8) {
            ctx->pc = 0x3897B4u;
            goto label_3897b4;
        }
    }
    ctx->pc = 0x3897B0u;
    // 0x3897b0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3897b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3897b4:
    // 0x3897b4: 0x3e00008  jr          $ra
    ctx->pc = 0x3897B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3897B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3897BCu;
    // 0x3897bc: 0x0  nop
    ctx->pc = 0x3897bcu;
    // NOP
    ctx->pc = 0x3897c0u;
}
