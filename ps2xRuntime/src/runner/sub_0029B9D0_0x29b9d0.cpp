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

// Function: sub_0029B9D0
// Address: 0x29b9d0 - 0x29ba10
void sub_0029B9D0_0x29b9d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029B9D0_0x29b9d0");
#endif

    ctx->pc = 0x29b9d0u;

    // 0x29b9d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29b9d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x29b9d4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x29b9d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x29b9d8: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x29b9d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x29b9dc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x29b9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29b9e0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x29b9e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29b9e4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x29b9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29b9e8: 0x8f82b6d8  lw          $v0, -0x4928($gp)
    ctx->pc = 0x29b9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948568)));
    // 0x29b9ec: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x29b9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x29b9f0: 0xac44001c  sw          $a0, 0x1C($v0)
    ctx->pc = 0x29b9f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 4));
    // 0x29b9f4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x29b9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29b9f8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x29b9f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x29b9fc: 0x3e00008  jr          $ra
    ctx->pc = 0x29B9FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29B9FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29BA04u;
    // 0x29ba04: 0x0  nop
    ctx->pc = 0x29ba04u;
    // NOP
    // 0x29ba08: 0x0  nop
    ctx->pc = 0x29ba08u;
    // NOP
    // 0x29ba0c: 0x0  nop
    ctx->pc = 0x29ba0cu;
    // NOP
    ctx->pc = 0x29ba10u;
}
