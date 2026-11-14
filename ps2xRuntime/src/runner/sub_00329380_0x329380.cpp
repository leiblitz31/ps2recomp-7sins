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

// Function: sub_00329380
// Address: 0x329380 - 0x3293a0
void sub_00329380_0x329380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00329380_0x329380");
#endif

    ctx->pc = 0x329380u;

    // 0x329380: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x329380u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x329384: 0x8c432320  lw          $v1, 0x2320($v0)
    ctx->pc = 0x329384u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4F2320u));
    // 0x329388: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x329388u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32938c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x32938cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x329390: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x329390u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x329394: 0x3e00008  jr          $ra
    ctx->pc = 0x329394u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x329398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329394u;
        // 0x329398: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x329394u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32939Cu;
    // 0x32939c: 0x0  nop
    ctx->pc = 0x32939cu;
    // NOP
    ctx->pc = 0x3293a0u;
}
