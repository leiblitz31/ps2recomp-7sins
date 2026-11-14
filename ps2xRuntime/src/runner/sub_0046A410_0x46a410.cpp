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

// Function: sub_0046A410
// Address: 0x46a410 - 0x46a460
void sub_0046A410_0x46a410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046A410_0x46a410");
#endif

    switch (ctx->pc) {
        case 0x46a434u: goto label_46a434;
        case 0x46a448u: goto label_46a448;
        default: break;
    }

    ctx->pc = 0x46a410u;

    // 0x46a410: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x46a410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x46a414: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x46a414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x46a418: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x46a418u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x46a41c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x46a41cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x46a420: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x46a420u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x46a424: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x46a424u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46a428: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x46a428u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x46a42c: 0xc042844  jal         func_10A110
    ctx->pc = 0x46A42Cu;
    SET_GPR_U32(ctx, 31, 0x46A434u);
    ctx->pc = 0x10A110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A110u, 0x46A42Cu, 0x46A434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46A434u;
label_46a434:
    // 0x46a434: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x46a434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46a438: 0x2444000c  addiu       $a0, $v0, 0xC
    ctx->pc = 0x46a438u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x46a43c: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x46a43cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x46a440: 0xc11a918  jal         func_46A460
    ctx->pc = 0x46A440u;
    SET_GPR_U32(ctx, 31, 0x46A448u);
    ctx->pc = 0x46A460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46A460u, 0x46A440u, 0x46A448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46A448u;
label_46a448:
    // 0x46a448: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x46a448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46a44c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x46a44cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x46a450: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x46a450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x46a454: 0x3e00008  jr          $ra
    ctx->pc = 0x46A454u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46A454u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46A45Cu;
    // 0x46a45c: 0x0  nop
    ctx->pc = 0x46a45cu;
    // NOP
    ctx->pc = 0x46a460u;
}
