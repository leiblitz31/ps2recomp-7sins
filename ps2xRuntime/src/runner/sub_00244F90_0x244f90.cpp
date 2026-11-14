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

// Function: sub_00244F90
// Address: 0x244f90 - 0x244fb0
void sub_00244F90_0x244f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00244F90_0x244f90");
#endif

    ctx->pc = 0x244f90u;

    // 0x244f90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x244f90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x244f94: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x244f94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x244f98: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x244f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x244f9c: 0x8c420040  lw          $v0, 0x40($v0)
    ctx->pc = 0x244f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x244fa0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x244fa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x244fa4: 0x3e00008  jr          $ra
    ctx->pc = 0x244FA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x244FA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x244FACu;
    // 0x244fac: 0x0  nop
    ctx->pc = 0x244facu;
    // NOP
    ctx->pc = 0x244fb0u;
}
