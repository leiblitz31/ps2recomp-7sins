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

// Function: sub_002DF670
// Address: 0x2df670 - 0x2df6d0
void sub_002DF670_0x2df670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DF670_0x2df670");
#endif

    switch (ctx->pc) {
        case 0x2df694u: goto label_2df694;
        case 0x2df6b0u: goto label_2df6b0;
        case 0x2df6bcu: goto label_2df6bc;
        default: break;
    }

    ctx->pc = 0x2df670u;

    // 0x2df670: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2df670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2df674: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2df674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2df678: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2df678u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2df67c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2df67cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2df680: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x2df680u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x2df684: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2df684u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2df688: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x2df688u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2df68c: 0xc0b7dfc  jal         func_2DF7F0
    ctx->pc = 0x2DF68Cu;
    SET_GPR_U32(ctx, 31, 0x2DF694u);
    ctx->pc = 0x2DF7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF7F0u, 0x2DF68Cu, 0x2DF694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF694u;
label_2df694:
    // 0x2df694: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2df694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2df698: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2df698u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2df69c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2df69cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2df6a0: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x2df6a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x2df6a4: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x2df6a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2df6a8: 0xc0b7ddc  jal         func_2DF770
    ctx->pc = 0x2DF6A8u;
    SET_GPR_U32(ctx, 31, 0x2DF6B0u);
    ctx->pc = 0x2DF770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF770u, 0x2DF6A8u, 0x2DF6B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF6B0u;
label_2df6b0:
    // 0x2df6b0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2df6b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2df6b4: 0xc0b7db4  jal         func_2DF6D0
    ctx->pc = 0x2DF6B4u;
    SET_GPR_U32(ctx, 31, 0x2DF6BCu);
    ctx->pc = 0x2DF6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF6D0u, 0x2DF6B4u, 0x2DF6BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF6BCu;
label_2df6bc:
    // 0x2df6bc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2df6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2df6c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2df6c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2df6c4: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2df6c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2df6c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2DF6C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DF6C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DF6D0u;
}
