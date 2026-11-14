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

// Function: sub_00156420
// Address: 0x156420 - 0x156490
void sub_00156420_0x156420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00156420_0x156420");
#endif

    switch (ctx->pc) {
        case 0x156440u: goto label_156440;
        case 0x156454u: goto label_156454;
        case 0x156468u: goto label_156468;
        default: break;
    }

    ctx->pc = 0x156420u;

    // 0x156420: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x156420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x156424: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x156424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x156428: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x156428u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x15642c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x15642cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x156430: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x156430u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x156434: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x156434u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x156438: 0xc055940  jal         func_156500
    ctx->pc = 0x156438u;
    SET_GPR_U32(ctx, 31, 0x156440u);
    ctx->pc = 0x156500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156500u, 0x156438u, 0x156440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156440u;
label_156440:
    // 0x156440: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x156440u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x156444: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x156444u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156448: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x156448u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15644c: 0xc055924  jal         func_156490
    ctx->pc = 0x15644Cu;
    SET_GPR_U32(ctx, 31, 0x156454u);
    ctx->pc = 0x156490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156490u, 0x15644Cu, 0x156454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156454u;
label_156454:
    // 0x156454: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x156454u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x156458: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x156458u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15645c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15645cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156460: 0xc0562f4  jal         func_158BD0
    ctx->pc = 0x156460u;
    SET_GPR_U32(ctx, 31, 0x156468u);
    ctx->pc = 0x158BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158BD0u, 0x156460u, 0x156468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156468u;
label_156468:
    // 0x156468: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x156468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15646c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x15646cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x156470: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x156470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x156474: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x156474u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x156478: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x156478u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x15647c: 0x3e00008  jr          $ra
    ctx->pc = 0x15647Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15647Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x156484u;
    // 0x156484: 0x0  nop
    ctx->pc = 0x156484u;
    // NOP
    // 0x156488: 0x0  nop
    ctx->pc = 0x156488u;
    // NOP
    // 0x15648c: 0x0  nop
    ctx->pc = 0x15648cu;
    // NOP
    ctx->pc = 0x156490u;
}
