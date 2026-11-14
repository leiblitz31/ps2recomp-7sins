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

// Function: sub_003874D8
// Address: 0x3874d8 - 0x387500
void sub_003874D8_0x3874d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003874D8_0x3874d8");
#endif

    ctx->pc = 0x3874d8u;

    // 0x3874d8: 0x8c82006c  lw          $v0, 0x6C($a0)
    ctx->pc = 0x3874d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 108)));
    // 0x3874dc: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3874DCu;
    {
        const bool branch_taken_0x3874dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3874dc) {
            ctx->pc = 0x3874E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3874DCu;
            // 0x3874e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3874F4u;
            goto label_3874f4;
        }
    }
    ctx->pc = 0x3874E4u;
    // 0x3874e4: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x3874e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x3874e8: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x3874E8u;
    {
        const bool branch_taken_0x3874e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3874ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3874E8u;
        // 0x3874ec: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3874e8) {
            ctx->pc = 0x3874F4u;
            goto label_3874f4;
        }
    }
    ctx->pc = 0x3874F0u;
    // 0x3874f0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3874f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3874f4:
    // 0x3874f4: 0x3e00008  jr          $ra
    ctx->pc = 0x3874F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3874F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3874FCu;
    // 0x3874fc: 0x0  nop
    ctx->pc = 0x3874fcu;
    // NOP
    ctx->pc = 0x387500u;
}
