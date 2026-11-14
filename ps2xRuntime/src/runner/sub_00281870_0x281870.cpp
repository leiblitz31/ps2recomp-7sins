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

// Function: sub_00281870
// Address: 0x281870 - 0x2818f0
void sub_00281870_0x281870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00281870_0x281870");
#endif

    switch (ctx->pc) {
        case 0x281890u: goto label_281890;
        case 0x2818a0u: goto label_2818a0;
        case 0x2818b8u: goto label_2818b8;
        case 0x2818d0u: goto label_2818d0;
        default: break;
    }

    ctx->pc = 0x281870u;

    // 0x281870: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x281870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x281874: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x281874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x281878: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x281878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x28187c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x28187cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x281880: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x281880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x281884: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x281884u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x281888: 0xc0a063c  jal         func_2818F0
    ctx->pc = 0x281888u;
    SET_GPR_U32(ctx, 31, 0x281890u);
    ctx->pc = 0x2818F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2818F0u, 0x281888u, 0x281890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281890u;
label_281890:
    // 0x281890: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x281890u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x281894: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x281894u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x281898: 0xc0a01c8  jal         func_280720
    ctx->pc = 0x281898u;
    SET_GPR_U32(ctx, 31, 0x2818A0u);
    ctx->pc = 0x280720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280720u, 0x281898u, 0x2818A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2818A0u;
label_2818a0:
    // 0x2818a0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2818a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2818a4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2818a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2818a8: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x2818a8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2818ac: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2818acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2818b0: 0xc0a01c0  jal         func_280700
    ctx->pc = 0x2818B0u;
    SET_GPR_U32(ctx, 31, 0x2818B8u);
    ctx->pc = 0x280700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280700u, 0x2818B0u, 0x2818B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2818B8u;
label_2818b8:
    // 0x2818b8: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x2818b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x2818bc: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2818bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2818c0: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x2818c0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2818c4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2818c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2818c8: 0xc0a01b8  jal         func_2806E0
    ctx->pc = 0x2818C8u;
    SET_GPR_U32(ctx, 31, 0x2818D0u);
    ctx->pc = 0x2806E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2806E0u, 0x2818C8u, 0x2818D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2818D0u;
label_2818d0:
    // 0x2818d0: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x2818d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x2818d4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2818d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2818d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2818d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2818dc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2818dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2818e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2818E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2818E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2818E8u;
    // 0x2818e8: 0x0  nop
    ctx->pc = 0x2818e8u;
    // NOP
    // 0x2818ec: 0x0  nop
    ctx->pc = 0x2818ecu;
    // NOP
    ctx->pc = 0x2818f0u;
}
