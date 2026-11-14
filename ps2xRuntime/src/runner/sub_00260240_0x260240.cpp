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

// Function: sub_00260240
// Address: 0x260240 - 0x260260
void sub_00260240_0x260240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00260240_0x260240");
#endif

    ctx->pc = 0x260240u;

    // 0x260240: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x260240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x260244: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x260244u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260248: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x260248u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x26024c: 0x3e00008  jr          $ra
    ctx->pc = 0x26024Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26024Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x260254u;
    // 0x260254: 0x0  nop
    ctx->pc = 0x260254u;
    // NOP
    // 0x260258: 0x0  nop
    ctx->pc = 0x260258u;
    // NOP
    // 0x26025c: 0x0  nop
    ctx->pc = 0x26025cu;
    // NOP
    ctx->pc = 0x260260u;
}
