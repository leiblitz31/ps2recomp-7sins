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

// Function: sub_001C6F80
// Address: 0x1c6f80 - 0x1c6fc0
void sub_001C6F80_0x1c6f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C6F80_0x1c6f80");
#endif

    switch (ctx->pc) {
        case 0x1c6fa0u: goto label_1c6fa0;
        default: break;
    }

    ctx->pc = 0x1c6f80u;

    // 0x1c6f80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c6f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c6f84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c6f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c6f88: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1c6f88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1c6f8c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1c6f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1c6f90: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1c6f90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c6f94: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1c6f94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c6f98: 0xc071bf0  jal         func_1C6FC0
    ctx->pc = 0x1C6F98u;
    SET_GPR_U32(ctx, 31, 0x1C6FA0u);
    ctx->pc = 0x1C6FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6FC0u, 0x1C6F98u, 0x1C6FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6FA0u;
label_1c6fa0:
    // 0x1c6fa0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1c6fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c6fa4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c6fa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c6fa8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1c6fa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1c6fac: 0x3e00008  jr          $ra
    ctx->pc = 0x1C6FACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C6FACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C6FB4u;
    // 0x1c6fb4: 0x0  nop
    ctx->pc = 0x1c6fb4u;
    // NOP
    // 0x1c6fb8: 0x0  nop
    ctx->pc = 0x1c6fb8u;
    // NOP
    // 0x1c6fbc: 0x0  nop
    ctx->pc = 0x1c6fbcu;
    // NOP
    ctx->pc = 0x1c6fc0u;
}
