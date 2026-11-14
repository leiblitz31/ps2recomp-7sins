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

// Function: sub_00327890
// Address: 0x327890 - 0x3278b0
void sub_00327890_0x327890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00327890_0x327890");
#endif

    ctx->pc = 0x327890u;

    // 0x327890: 0x8f83a650  lw          $v1, -0x59B0($gp)
    ctx->pc = 0x327890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944336)));
    // 0x327894: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x327894u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327898: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x327898u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x32789c: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x32789cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x3278a0: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x3278a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x3278a4: 0x3e00008  jr          $ra
    ctx->pc = 0x3278A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3278A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3278A4u;
        // 0x3278a8: 0xac800004  sw          $zero, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3278A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3278ACu;
    // 0x3278ac: 0x0  nop
    ctx->pc = 0x3278acu;
    // NOP
    ctx->pc = 0x3278b0u;
}
