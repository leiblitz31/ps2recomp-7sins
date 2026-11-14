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

// Function: sub_002DFBE0
// Address: 0x2dfbe0 - 0x2dfc10
void sub_002DFBE0_0x2dfbe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DFBE0_0x2dfbe0");
#endif

    switch (ctx->pc) {
        case 0x2dfbfcu: goto label_2dfbfc;
        default: break;
    }

    ctx->pc = 0x2dfbe0u;

    // 0x2dfbe0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2dfbe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2dfbe4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2dfbe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2dfbe8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2dfbe8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2dfbec: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2dfbecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dfbf0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2dfbf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2dfbf4: 0xc0b7b94  jal         func_2DEE50
    ctx->pc = 0x2DFBF4u;
    SET_GPR_U32(ctx, 31, 0x2DFBFCu);
    ctx->pc = 0x2DEE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DEE50u, 0x2DFBF4u, 0x2DFBFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFBFCu;
label_2dfbfc:
    // 0x2dfbfc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2dfbfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dfc00: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2dfc00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2dfc04: 0x3e00008  jr          $ra
    ctx->pc = 0x2DFC04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DFC04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DFC0Cu;
    // 0x2dfc0c: 0x0  nop
    ctx->pc = 0x2dfc0cu;
    // NOP
    ctx->pc = 0x2dfc10u;
}
