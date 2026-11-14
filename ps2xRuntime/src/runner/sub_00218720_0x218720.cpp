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

// Function: sub_00218720
// Address: 0x218720 - 0x218760
void sub_00218720_0x218720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00218720_0x218720");
#endif

    switch (ctx->pc) {
        case 0x218744u: goto label_218744;
        default: break;
    }

    ctx->pc = 0x218720u;

    // 0x218720: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x218720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x218724: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x218724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x218728: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x218728u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x21872c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x21872cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x218730: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x218730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x218734: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x218734u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x218738: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x218738u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21873c: 0xc0861d8  jal         func_218760
    ctx->pc = 0x21873Cu;
    SET_GPR_U32(ctx, 31, 0x218744u);
    ctx->pc = 0x218760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218760u, 0x21873Cu, 0x218744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218744u;
label_218744:
    // 0x218744: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x218744u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x218748: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x218748u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x21874c: 0x3e00008  jr          $ra
    ctx->pc = 0x21874Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21874Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x218754u;
    // 0x218754: 0x0  nop
    ctx->pc = 0x218754u;
    // NOP
    // 0x218758: 0x0  nop
    ctx->pc = 0x218758u;
    // NOP
    // 0x21875c: 0x0  nop
    ctx->pc = 0x21875cu;
    // NOP
    ctx->pc = 0x218760u;
}
