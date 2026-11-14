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

// Function: sub_0022A470
// Address: 0x22a470 - 0x22a490
void sub_0022A470_0x22a470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022A470_0x22a470");
#endif

    ctx->pc = 0x22a470u;

    // 0x22a470: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x22a470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x22a474: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x22a474u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x22a478: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x22a478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22a47c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x22a47cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x22a480: 0x3e00008  jr          $ra
    ctx->pc = 0x22A480u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22A480u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22A488u;
    // 0x22a488: 0x0  nop
    ctx->pc = 0x22a488u;
    // NOP
    // 0x22a48c: 0x0  nop
    ctx->pc = 0x22a48cu;
    // NOP
    ctx->pc = 0x22a490u;
}
