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

// Function: sub_00218820
// Address: 0x218820 - 0x218860
void sub_00218820_0x218820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00218820_0x218820");
#endif

    switch (ctx->pc) {
        case 0x218840u: goto label_218840;
        default: break;
    }

    ctx->pc = 0x218820u;

    // 0x218820: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x218820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x218824: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x218824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x218828: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x218828u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x21882c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x21882cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x218830: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x218830u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x218834: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x218834u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x218838: 0xc086218  jal         func_218860
    ctx->pc = 0x218838u;
    SET_GPR_U32(ctx, 31, 0x218840u);
    ctx->pc = 0x218860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218860u, 0x218838u, 0x218840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218840u;
label_218840:
    // 0x218840: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x218840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x218844: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x218844u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x218848: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x218848u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x21884c: 0x3e00008  jr          $ra
    ctx->pc = 0x21884Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21884Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x218854u;
    // 0x218854: 0x0  nop
    ctx->pc = 0x218854u;
    // NOP
    // 0x218858: 0x0  nop
    ctx->pc = 0x218858u;
    // NOP
    // 0x21885c: 0x0  nop
    ctx->pc = 0x21885cu;
    // NOP
    ctx->pc = 0x218860u;
}
