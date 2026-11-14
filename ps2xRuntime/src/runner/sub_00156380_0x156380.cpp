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

// Function: sub_00156380
// Address: 0x156380 - 0x156400
void sub_00156380_0x156380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00156380_0x156380");
#endif

    switch (ctx->pc) {
        case 0x1563a0u: goto label_1563a0;
        case 0x1563b0u: goto label_1563b0;
        case 0x1563c8u: goto label_1563c8;
        case 0x1563e0u: goto label_1563e0;
        default: break;
    }

    ctx->pc = 0x156380u;

    // 0x156380: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x156380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x156384: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x156384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x156388: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x156388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15638c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x15638cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x156390: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x156390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x156394: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x156394u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x156398: 0xc055900  jal         func_156400
    ctx->pc = 0x156398u;
    SET_GPR_U32(ctx, 31, 0x1563A0u);
    ctx->pc = 0x156400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156400u, 0x156398u, 0x1563A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1563A0u;
label_1563a0:
    // 0x1563a0: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x1563a0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1563a4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1563a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1563a8: 0xc0558a4  jal         func_156290
    ctx->pc = 0x1563A8u;
    SET_GPR_U32(ctx, 31, 0x1563B0u);
    ctx->pc = 0x156290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156290u, 0x1563A8u, 0x1563B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1563B0u;
label_1563b0:
    // 0x1563b0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1563b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1563b4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1563b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1563b8: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1563b8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1563bc: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1563bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1563c0: 0xc055390  jal         func_154E40
    ctx->pc = 0x1563C0u;
    SET_GPR_U32(ctx, 31, 0x1563C8u);
    ctx->pc = 0x154E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154E40u, 0x1563C0u, 0x1563C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1563C8u;
label_1563c8:
    // 0x1563c8: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x1563c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x1563cc: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1563ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1563d0: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1563d0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1563d4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1563d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1563d8: 0xc05589c  jal         func_156270
    ctx->pc = 0x1563D8u;
    SET_GPR_U32(ctx, 31, 0x1563E0u);
    ctx->pc = 0x156270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156270u, 0x1563D8u, 0x1563E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1563E0u;
label_1563e0:
    // 0x1563e0: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x1563e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x1563e4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1563e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1563e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1563e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1563ec: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1563ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1563f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1563F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1563F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1563F8u;
    // 0x1563f8: 0x0  nop
    ctx->pc = 0x1563f8u;
    // NOP
    // 0x1563fc: 0x0  nop
    ctx->pc = 0x1563fcu;
    // NOP
    ctx->pc = 0x156400u;
}
