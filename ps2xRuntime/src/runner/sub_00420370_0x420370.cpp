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

// Function: sub_00420370
// Address: 0x420370 - 0x420390
void sub_00420370_0x420370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00420370_0x420370");
#endif

    ctx->pc = 0x420370u;

    // 0x420370: 0x8f85be18  lw          $a1, -0x41E8($gp)
    ctx->pc = 0x420370u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950424)));
    // 0x420374: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x420374u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x420378: 0x2463e880  addiu       $v1, $v1, -0x1780
    ctx->pc = 0x420378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961280));
    // 0x42037c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x42037cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x420380: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x420380u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x420384: 0x3e00008  jr          $ra
    ctx->pc = 0x420384u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x420388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420384u;
        // 0x420388: 0xaca4001c  sw          $a0, 0x1C($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x420384u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x42038Cu;
    // 0x42038c: 0x0  nop
    ctx->pc = 0x42038cu;
    // NOP
    ctx->pc = 0x420390u;
}
