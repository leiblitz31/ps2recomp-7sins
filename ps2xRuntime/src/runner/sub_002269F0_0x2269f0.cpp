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

// Function: sub_002269F0
// Address: 0x2269f0 - 0x226a20
void sub_002269F0_0x2269f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002269F0_0x2269f0");
#endif

    ctx->pc = 0x2269f0u;

    // 0x2269f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2269f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2269f4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2269f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2269f8: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x2269f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x2269fc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2269fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x226a00: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x226a00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x226a04: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x226a04u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x226a08: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x226a08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x226a0c: 0x3e00008  jr          $ra
    ctx->pc = 0x226A0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x226A0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x226A14u;
    // 0x226a14: 0x0  nop
    ctx->pc = 0x226a14u;
    // NOP
    // 0x226a18: 0x0  nop
    ctx->pc = 0x226a18u;
    // NOP
    // 0x226a1c: 0x0  nop
    ctx->pc = 0x226a1cu;
    // NOP
    ctx->pc = 0x226a20u;
}
