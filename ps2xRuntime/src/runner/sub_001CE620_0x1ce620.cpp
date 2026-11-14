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

// Function: sub_001CE620
// Address: 0x1ce620 - 0x1ce660
void sub_001CE620_0x1ce620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CE620_0x1ce620");
#endif

    switch (ctx->pc) {
        case 0x1ce650u: goto label_1ce650;
        default: break;
    }

    ctx->pc = 0x1ce620u;

    // 0x1ce620: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1ce620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1ce624: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ce624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ce628: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1ce628u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1ce62c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1ce62cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1ce630: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x1ce630u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x1ce634: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1ce634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ce638: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1ce638u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ce63c: 0x8c45003c  lw          $a1, 0x3C($v0)
    ctx->pc = 0x1ce63cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x1ce640: 0x8fa60020  lw          $a2, 0x20($sp)
    ctx->pc = 0x1ce640u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ce644: 0x8fa70030  lw          $a3, 0x30($sp)
    ctx->pc = 0x1ce644u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ce648: 0xc07396c  jal         func_1CE5B0
    ctx->pc = 0x1CE648u;
    SET_GPR_U32(ctx, 31, 0x1CE650u);
    ctx->pc = 0x1CE5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE5B0u, 0x1CE648u, 0x1CE650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE650u;
label_1ce650:
    // 0x1ce650: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ce650u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ce654: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1ce654u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1ce658: 0x3e00008  jr          $ra
    ctx->pc = 0x1CE658u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CE658u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CE660u;
}
