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

// Function: sub_00154CB0
// Address: 0x154cb0 - 0x154cf0
void sub_00154CB0_0x154cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00154CB0_0x154cb0");
#endif

    switch (ctx->pc) {
        case 0x154cd4u: goto label_154cd4;
        default: break;
    }

    ctx->pc = 0x154cb0u;

    // 0x154cb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x154cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x154cb4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x154cb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x154cb8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x154cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x154cbc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x154cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x154cc0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x154cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x154cc4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x154cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x154cc8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x154cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x154ccc: 0xc05533c  jal         func_154CF0
    ctx->pc = 0x154CCCu;
    SET_GPR_U32(ctx, 31, 0x154CD4u);
    ctx->pc = 0x154CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154CF0u, 0x154CCCu, 0x154CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154CD4u;
label_154cd4:
    // 0x154cd4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x154cd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x154cd8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x154cd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x154cdc: 0x3e00008  jr          $ra
    ctx->pc = 0x154CDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x154CDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x154CE4u;
    // 0x154ce4: 0x0  nop
    ctx->pc = 0x154ce4u;
    // NOP
    // 0x154ce8: 0x0  nop
    ctx->pc = 0x154ce8u;
    // NOP
    // 0x154cec: 0x0  nop
    ctx->pc = 0x154cecu;
    // NOP
    ctx->pc = 0x154cf0u;
}
