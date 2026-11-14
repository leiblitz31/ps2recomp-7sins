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

// Function: sub_0023C450
// Address: 0x23c450 - 0x23c4d0
void sub_0023C450_0x23c450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023C450_0x23c450");
#endif

    switch (ctx->pc) {
        case 0x23c470u: goto label_23c470;
        case 0x23c480u: goto label_23c480;
        case 0x23c498u: goto label_23c498;
        case 0x23c4b0u: goto label_23c4b0;
        default: break;
    }

    ctx->pc = 0x23c450u;

    // 0x23c450: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x23c450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23c454: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x23c454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x23c458: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x23c458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x23c45c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x23c45cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x23c460: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x23c460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23c464: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x23c464u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23c468: 0xc08f134  jal         func_23C4D0
    ctx->pc = 0x23C468u;
    SET_GPR_U32(ctx, 31, 0x23C470u);
    ctx->pc = 0x23C4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C4D0u, 0x23C468u, 0x23C470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C470u;
label_23c470:
    // 0x23c470: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x23c470u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x23c474: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x23c474u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23c478: 0xc08f03c  jal         func_23C0F0
    ctx->pc = 0x23C478u;
    SET_GPR_U32(ctx, 31, 0x23C480u);
    ctx->pc = 0x23C0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C0F0u, 0x23C478u, 0x23C480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C480u;
label_23c480:
    // 0x23c480: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x23c480u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x23c484: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x23c484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23c488: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x23c488u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23c48c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x23c48cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23c490: 0xc08f034  jal         func_23C0D0
    ctx->pc = 0x23C490u;
    SET_GPR_U32(ctx, 31, 0x23C498u);
    ctx->pc = 0x23C0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C0D0u, 0x23C490u, 0x23C498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C498u;
label_23c498:
    // 0x23c498: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x23c498u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x23c49c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x23c49cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23c4a0: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x23c4a0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23c4a4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x23c4a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23c4a8: 0xc08f02c  jal         func_23C0B0
    ctx->pc = 0x23C4A8u;
    SET_GPR_U32(ctx, 31, 0x23C4B0u);
    ctx->pc = 0x23C0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C0B0u, 0x23C4A8u, 0x23C4B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C4B0u;
label_23c4b0:
    // 0x23c4b0: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x23c4b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x23c4b4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23c4b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23c4b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x23c4b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23c4bc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x23c4bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x23c4c0: 0x3e00008  jr          $ra
    ctx->pc = 0x23C4C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23C4C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23C4C8u;
    // 0x23c4c8: 0x0  nop
    ctx->pc = 0x23c4c8u;
    // NOP
    // 0x23c4cc: 0x0  nop
    ctx->pc = 0x23c4ccu;
    // NOP
    ctx->pc = 0x23c4d0u;
}
