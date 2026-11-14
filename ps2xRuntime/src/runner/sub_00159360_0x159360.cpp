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

// Function: sub_00159360
// Address: 0x159360 - 0x159380
void sub_00159360_0x159360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00159360_0x159360");
#endif

    ctx->pc = 0x159360u;

    // 0x159360: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x159360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x159364: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x159364u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x159368: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x159368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15936c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x15936cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x159370: 0x3e00008  jr          $ra
    ctx->pc = 0x159370u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x159370u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x159378u;
    // 0x159378: 0x0  nop
    ctx->pc = 0x159378u;
    // NOP
    // 0x15937c: 0x0  nop
    ctx->pc = 0x15937cu;
    // NOP
    ctx->pc = 0x159380u;
}
