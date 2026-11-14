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

// Function: sub_00242DF0
// Address: 0x242df0 - 0x242e20
void sub_00242DF0_0x242df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00242DF0_0x242df0");
#endif

    switch (ctx->pc) {
        case 0x242e08u: goto label_242e08;
        default: break;
    }

    ctx->pc = 0x242df0u;

    // 0x242df0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x242df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x242df4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x242df4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x242df8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x242df8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x242dfc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x242dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x242e00: 0xc090ca4  jal         func_243290
    ctx->pc = 0x242E00u;
    SET_GPR_U32(ctx, 31, 0x242E08u);
    ctx->pc = 0x243290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243290u, 0x242E00u, 0x242E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242E08u;
label_242e08:
    // 0x242e08: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x242e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x242e0c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x242e0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x242e10: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x242e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x242e14: 0x3e00008  jr          $ra
    ctx->pc = 0x242E14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x242E14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x242E1Cu;
    // 0x242e1c: 0x0  nop
    ctx->pc = 0x242e1cu;
    // NOP
    ctx->pc = 0x242e20u;
}
