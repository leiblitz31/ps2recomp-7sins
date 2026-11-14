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

// Function: sub_001C6800
// Address: 0x1c6800 - 0x1c6830
void sub_001C6800_0x1c6800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C6800_0x1c6800");
#endif

    ctx->pc = 0x1c6800u;

    // 0x1c6800: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c6800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c6804: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1c6804u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1c6808: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x1c6808u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x1c680c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1c680cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c6810: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1c6810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c6814: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1c6814u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1c6818: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1c6818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c681c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1c681cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1c6820: 0x3e00008  jr          $ra
    ctx->pc = 0x1C6820u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C6820u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C6828u;
    // 0x1c6828: 0x0  nop
    ctx->pc = 0x1c6828u;
    // NOP
    // 0x1c682c: 0x0  nop
    ctx->pc = 0x1c682cu;
    // NOP
    ctx->pc = 0x1c6830u;
}
