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

// Function: sub_0038CD58
// Address: 0x38cd58 - 0x38cd70
void sub_0038CD58_0x38cd58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038CD58_0x38cd58");
#endif

    ctx->pc = 0x38cd58u;

    // 0x38cd58: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x38cd58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38cd5c: 0xa4a80004  sh          $t0, 0x4($a1)
    ctx->pc = 0x38cd5cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4), (uint16_t)GPR_U32(ctx, 8));
    // 0x38cd60: 0xa4a60000  sh          $a2, 0x0($a1)
    ctx->pc = 0x38cd60u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x38cd64: 0x3e00008  jr          $ra
    ctx->pc = 0x38CD64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38CD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CD64u;
        // 0x38cd68: 0xa4a70002  sh          $a3, 0x2($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38CD64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38CD6Cu;
    // 0x38cd6c: 0x0  nop
    ctx->pc = 0x38cd6cu;
    // NOP
    ctx->pc = 0x38cd70u;
}
