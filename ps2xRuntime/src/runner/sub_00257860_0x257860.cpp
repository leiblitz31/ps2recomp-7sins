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

// Function: sub_00257860
// Address: 0x257860 - 0x257890
void sub_00257860_0x257860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00257860_0x257860");
#endif

    ctx->pc = 0x257860u;

    // 0x257860: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x257860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x257864: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x257864u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x257868: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x257868u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x25786c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x25786cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x257870: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x257870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x257874: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x257874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x257878: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x257878u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x25787c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x25787cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x257880: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x257880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x257884: 0x3e00008  jr          $ra
    ctx->pc = 0x257884u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x257884u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25788Cu;
    // 0x25788c: 0x0  nop
    ctx->pc = 0x25788cu;
    // NOP
    ctx->pc = 0x257890u;
}
