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

// Function: sub_004B4638
// Address: 0x4b4638 - 0x4b4650
void sub_004B4638_0x4b4638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B4638_0x4b4638");
#endif

    ctx->pc = 0x4b4638u;

    // 0x4b4638: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4b4638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4b463c: 0xac850004  sw          $a1, 0x4($a0)
    ctx->pc = 0x4b463cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
    // 0x4b4640: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x4b4640u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x4b4644: 0x3e00008  jr          $ra
    ctx->pc = 0x4B4644u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B4648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4644u;
        // 0x4b4648: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B4644u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B464Cu;
    // 0x4b464c: 0x0  nop
    ctx->pc = 0x4b464cu;
    // NOP
    ctx->pc = 0x4b4650u;
}
