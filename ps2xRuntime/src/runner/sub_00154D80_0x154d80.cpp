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

// Function: sub_00154D80
// Address: 0x154d80 - 0x154dc0
void sub_00154D80_0x154d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00154D80_0x154d80");
#endif

    switch (ctx->pc) {
        case 0x154da0u: goto label_154da0;
        default: break;
    }

    ctx->pc = 0x154d80u;

    // 0x154d80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x154d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x154d84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x154d84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x154d88: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x154d88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x154d8c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x154d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x154d90: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x154d90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x154d94: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x154d94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x154d98: 0xc042b9c  jal         func_10AE70
    ctx->pc = 0x154D98u;
    SET_GPR_U32(ctx, 31, 0x154DA0u);
    ctx->pc = 0x10AE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10AE70u, 0x154D98u, 0x154DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154DA0u;
label_154da0:
    // 0x154da0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x154da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x154da4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x154da4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x154da8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x154da8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x154dac: 0x3e00008  jr          $ra
    ctx->pc = 0x154DACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x154DACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x154DB4u;
    // 0x154db4: 0x0  nop
    ctx->pc = 0x154db4u;
    // NOP
    // 0x154db8: 0x0  nop
    ctx->pc = 0x154db8u;
    // NOP
    // 0x154dbc: 0x0  nop
    ctx->pc = 0x154dbcu;
    // NOP
    ctx->pc = 0x154dc0u;
}
