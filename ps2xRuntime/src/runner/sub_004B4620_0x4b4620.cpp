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

// Function: sub_004B4620
// Address: 0x4b4620 - 0x4b4638
void sub_004B4620_0x4b4620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B4620_0x4b4620");
#endif

    ctx->pc = 0x4b4620u;

    // 0x4b4620: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4b4620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4b4624: 0xac850014  sw          $a1, 0x14($a0)
    ctx->pc = 0x4b4624u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 5));
    // 0x4b4628: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x4b4628u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x4b462c: 0x3e00008  jr          $ra
    ctx->pc = 0x4B462Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B4630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B462Cu;
        // 0x4b4630: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B462Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B4634u;
    // 0x4b4634: 0x0  nop
    ctx->pc = 0x4b4634u;
    // NOP
    ctx->pc = 0x4b4638u;
}
