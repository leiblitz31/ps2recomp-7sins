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

// Function: sub_00154C70
// Address: 0x154c70 - 0x154cb0
void sub_00154C70_0x154c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00154C70_0x154c70");
#endif

    switch (ctx->pc) {
        case 0x154c90u: goto label_154c90;
        default: break;
    }

    ctx->pc = 0x154c70u;

    // 0x154c70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x154c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x154c74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x154c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x154c78: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x154c78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x154c7c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x154c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x154c80: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x154c80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x154c84: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x154c84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x154c88: 0xc05532c  jal         func_154CB0
    ctx->pc = 0x154C88u;
    SET_GPR_U32(ctx, 31, 0x154C90u);
    ctx->pc = 0x154CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154CB0u, 0x154C88u, 0x154C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154C90u;
label_154c90:
    // 0x154c90: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x154c90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x154c94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x154c94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x154c98: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x154c98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x154c9c: 0x3e00008  jr          $ra
    ctx->pc = 0x154C9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x154C9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x154CA4u;
    // 0x154ca4: 0x0  nop
    ctx->pc = 0x154ca4u;
    // NOP
    // 0x154ca8: 0x0  nop
    ctx->pc = 0x154ca8u;
    // NOP
    // 0x154cac: 0x0  nop
    ctx->pc = 0x154cacu;
    // NOP
    ctx->pc = 0x154cb0u;
}
