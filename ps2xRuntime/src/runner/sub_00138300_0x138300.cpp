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

// Function: sub_00138300
// Address: 0x138300 - 0x138340
void sub_00138300_0x138300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00138300_0x138300");
#endif

    switch (ctx->pc) {
        case 0x138330u: goto label_138330;
        default: break;
    }

    ctx->pc = 0x138300u;

    // 0x138300: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x138300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x138304: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x138304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x138308: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x138308u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x13830c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x13830cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x138310: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x138310u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x138314: 0xafa70040  sw          $a3, 0x40($sp)
    ctx->pc = 0x138314u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 7));
    // 0x138318: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x138318u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13831c: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x13831cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x138320: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x138320u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x138324: 0x8fa70040  lw          $a3, 0x40($sp)
    ctx->pc = 0x138324u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x138328: 0xc04f08c  jal         func_13C230
    ctx->pc = 0x138328u;
    SET_GPR_U32(ctx, 31, 0x138330u);
    ctx->pc = 0x13C230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C230u, 0x138328u, 0x138330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138330u;
label_138330:
    // 0x138330: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x138330u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x138334: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x138334u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x138338: 0x3e00008  jr          $ra
    ctx->pc = 0x138338u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x138338u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x138340u;
}
