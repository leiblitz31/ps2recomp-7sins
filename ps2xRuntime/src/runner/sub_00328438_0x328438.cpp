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

// Function: sub_00328438
// Address: 0x328438 - 0x328460
void sub_00328438_0x328438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00328438_0x328438");
#endif

    ctx->pc = 0x328438u;

    // 0x328438: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x328438u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x32843c: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x32843cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x328440: 0x8c45231c  lw          $a1, 0x231C($v0)
    ctx->pc = 0x328440u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x4F231Cu));
    // 0x328444: 0x2463a480  addiu       $v1, $v1, -0x5B80
    ctx->pc = 0x328444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943872));
    // 0x328448: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x328448u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32844c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x32844cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x328450: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x328450u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x328454: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x328454u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x328458: 0x3e00008  jr          $ra
    ctx->pc = 0x328458u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32845Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328458u;
        // 0x32845c: 0xac800008  sw          $zero, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x328458u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x328460u;
}
