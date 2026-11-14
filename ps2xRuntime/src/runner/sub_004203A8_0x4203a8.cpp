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

// Function: sub_004203A8
// Address: 0x4203a8 - 0x4203c8
void sub_004203A8_0x4203a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004203A8_0x4203a8");
#endif

    ctx->pc = 0x4203a8u;

    // 0x4203a8: 0x8f85be18  lw          $a1, -0x41E8($gp)
    ctx->pc = 0x4203a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950424)));
    // 0x4203ac: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x4203acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x4203b0: 0x2463e880  addiu       $v1, $v1, -0x1780
    ctx->pc = 0x4203b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961280));
    // 0x4203b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4203b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4203b8: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x4203b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x4203bc: 0x3e00008  jr          $ra
    ctx->pc = 0x4203BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4203C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4203BCu;
        // 0x4203c0: 0xaca40020  sw          $a0, 0x20($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4203BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4203C4u;
    // 0x4203c4: 0x0  nop
    ctx->pc = 0x4203c4u;
    // NOP
    ctx->pc = 0x4203c8u;
}
