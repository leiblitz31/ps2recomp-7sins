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

// Function: sub_00188FC0
// Address: 0x188fc0 - 0x188fe0
void sub_00188FC0_0x188fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00188FC0_0x188fc0");
#endif

    ctx->pc = 0x188fc0u;

    // 0x188fc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x188fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x188fc4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x188fc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x188fc8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x188fc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188fcc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x188fccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x188fd0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x188fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x188fd4: 0x3e00008  jr          $ra
    ctx->pc = 0x188FD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x188FD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x188FDCu;
    // 0x188fdc: 0x0  nop
    ctx->pc = 0x188fdcu;
    // NOP
    ctx->pc = 0x188fe0u;
}
