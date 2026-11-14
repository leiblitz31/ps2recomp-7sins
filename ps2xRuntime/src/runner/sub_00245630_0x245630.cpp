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

// Function: sub_00245630
// Address: 0x245630 - 0x245650
void sub_00245630_0x245630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00245630_0x245630");
#endif

    ctx->pc = 0x245630u;

    // 0x245630: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x245630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x245634: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x245634u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x245638: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x245638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24563c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x24563cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x245640: 0x3e00008  jr          $ra
    ctx->pc = 0x245640u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x245640u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x245648u;
    // 0x245648: 0x0  nop
    ctx->pc = 0x245648u;
    // NOP
    // 0x24564c: 0x0  nop
    ctx->pc = 0x24564cu;
    // NOP
    ctx->pc = 0x245650u;
}
