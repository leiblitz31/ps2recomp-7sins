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

// Function: sub_00113440
// Address: 0x113440 - 0x1134c0
void sub_00113440_0x113440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00113440_0x113440");
#endif

    switch (ctx->pc) {
        case 0x113460u: goto label_113460;
        case 0x113470u: goto label_113470;
        case 0x113488u: goto label_113488;
        case 0x1134a0u: goto label_1134a0;
        default: break;
    }

    ctx->pc = 0x113440u;

    // 0x113440: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x113440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x113444: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x113444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x113448: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x113448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x11344c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x11344cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x113450: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x113450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x113454: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x113454u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x113458: 0xc044d30  jal         func_1134C0
    ctx->pc = 0x113458u;
    SET_GPR_U32(ctx, 31, 0x113460u);
    ctx->pc = 0x1134C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1134C0u, 0x113458u, 0x113460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113460u;
label_113460:
    // 0x113460: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x113460u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x113464: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x113464u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x113468: 0xc044cd4  jal         func_113350
    ctx->pc = 0x113468u;
    SET_GPR_U32(ctx, 31, 0x113470u);
    ctx->pc = 0x113350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113350u, 0x113468u, 0x113470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113470u;
label_113470:
    // 0x113470: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x113470u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x113474: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x113474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x113478: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x113478u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11347c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x11347cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x113480: 0xc044ccc  jal         func_113330
    ctx->pc = 0x113480u;
    SET_GPR_U32(ctx, 31, 0x113488u);
    ctx->pc = 0x113330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113330u, 0x113480u, 0x113488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113488u;
label_113488:
    // 0x113488: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x113488u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x11348c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x11348cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x113490: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x113490u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x113494: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x113494u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x113498: 0xc044cc4  jal         func_113310
    ctx->pc = 0x113498u;
    SET_GPR_U32(ctx, 31, 0x1134A0u);
    ctx->pc = 0x113310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113310u, 0x113498u, 0x1134A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1134A0u;
label_1134a0:
    // 0x1134a0: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x1134a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x1134a4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1134a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1134a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1134a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1134ac: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1134acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1134b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1134B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1134B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1134B8u;
    // 0x1134b8: 0x0  nop
    ctx->pc = 0x1134b8u;
    // NOP
    // 0x1134bc: 0x0  nop
    ctx->pc = 0x1134bcu;
    // NOP
    ctx->pc = 0x1134c0u;
}
