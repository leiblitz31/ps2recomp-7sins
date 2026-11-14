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

// Function: sub_00157DA0
// Address: 0x157da0 - 0x157dd0
void sub_00157DA0_0x157da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00157DA0_0x157da0");
#endif

    switch (ctx->pc) {
        case 0x157db8u: goto label_157db8;
        default: break;
    }

    ctx->pc = 0x157da0u;

    // 0x157da0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x157da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x157da4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x157da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x157da8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x157da8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x157dac: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x157dacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x157db0: 0xc041b48  jal         func_106D20
    ctx->pc = 0x157DB0u;
    SET_GPR_U32(ctx, 31, 0x157DB8u);
    ctx->pc = 0x106D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D20u, 0x157DB0u, 0x157DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157DB8u;
label_157db8:
    // 0x157db8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x157db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x157dbc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x157dbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x157dc0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x157dc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x157dc4: 0x3e00008  jr          $ra
    ctx->pc = 0x157DC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x157DC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x157DCCu;
    // 0x157dcc: 0x0  nop
    ctx->pc = 0x157dccu;
    // NOP
    ctx->pc = 0x157dd0u;
}
