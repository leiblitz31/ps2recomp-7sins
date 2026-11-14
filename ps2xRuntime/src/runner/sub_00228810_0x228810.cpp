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

// Function: sub_00228810
// Address: 0x228810 - 0x228850
void sub_00228810_0x228810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00228810_0x228810");
#endif

    switch (ctx->pc) {
        case 0x228830u: goto label_228830;
        default: break;
    }

    ctx->pc = 0x228810u;

    // 0x228810: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x228810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x228814: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x228814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x228818: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x228818u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x22881c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x22881cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x228820: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x228820u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x228824: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x228824u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x228828: 0xc042b9c  jal         func_10AE70
    ctx->pc = 0x228828u;
    SET_GPR_U32(ctx, 31, 0x228830u);
    ctx->pc = 0x10AE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10AE70u, 0x228828u, 0x228830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228830u;
label_228830:
    // 0x228830: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x228830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x228834: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x228834u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x228838: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x228838u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x22883c: 0x3e00008  jr          $ra
    ctx->pc = 0x22883Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22883Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x228844u;
    // 0x228844: 0x0  nop
    ctx->pc = 0x228844u;
    // NOP
    // 0x228848: 0x0  nop
    ctx->pc = 0x228848u;
    // NOP
    // 0x22884c: 0x0  nop
    ctx->pc = 0x22884cu;
    // NOP
    ctx->pc = 0x228850u;
}
