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

// Function: sub_002AC810
// Address: 0x2ac810 - 0x2ac850
void sub_002AC810_0x2ac810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AC810_0x2ac810");
#endif

    switch (ctx->pc) {
        case 0x2ac830u: goto label_2ac830;
        default: break;
    }

    ctx->pc = 0x2ac810u;

    // 0x2ac810: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ac810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2ac814: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ac814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ac818: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2ac818u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2ac81c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2ac81cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2ac820: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2ac820u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ac824: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x2ac824u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ac828: 0xc0ab214  jal         func_2AC850
    ctx->pc = 0x2AC828u;
    SET_GPR_U32(ctx, 31, 0x2AC830u);
    ctx->pc = 0x2AC850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AC850u, 0x2AC828u, 0x2AC830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC830u;
label_2ac830:
    // 0x2ac830: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2ac830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ac834: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ac834u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ac838: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2ac838u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2ac83c: 0x3e00008  jr          $ra
    ctx->pc = 0x2AC83Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AC83Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AC844u;
    // 0x2ac844: 0x0  nop
    ctx->pc = 0x2ac844u;
    // NOP
    // 0x2ac848: 0x0  nop
    ctx->pc = 0x2ac848u;
    // NOP
    // 0x2ac84c: 0x0  nop
    ctx->pc = 0x2ac84cu;
    // NOP
    ctx->pc = 0x2ac850u;
}
