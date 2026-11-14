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

// Function: sub_00281690
// Address: 0x281690 - 0x2816b0
void sub_00281690_0x281690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00281690_0x281690");
#endif

    ctx->pc = 0x281690u;

    // 0x281690: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x281690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x281694: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x281694u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x281698: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x281698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28169c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x28169cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2816a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2816A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2816A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2816A8u;
    // 0x2816a8: 0x0  nop
    ctx->pc = 0x2816a8u;
    // NOP
    // 0x2816ac: 0x0  nop
    ctx->pc = 0x2816acu;
    // NOP
    ctx->pc = 0x2816b0u;
}
