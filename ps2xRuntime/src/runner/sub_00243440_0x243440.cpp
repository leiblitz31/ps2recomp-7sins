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

// Function: sub_00243440
// Address: 0x243440 - 0x2434a0
void sub_00243440_0x243440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00243440_0x243440");
#endif

    switch (ctx->pc) {
        case 0x24345cu: goto label_24345c;
        case 0x24346cu: goto label_24346c;
        case 0x243480u: goto label_243480;
        default: break;
    }

    ctx->pc = 0x243440u;

    // 0x243440: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x243440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x243444: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x243444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x243448: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x243448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x24344c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x24344cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x243450: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x243450u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x243454: 0xc090cac  jal         func_2432B0
    ctx->pc = 0x243454u;
    SET_GPR_U32(ctx, 31, 0x24345Cu);
    ctx->pc = 0x2432B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2432B0u, 0x243454u, 0x24345Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24345Cu;
label_24345c:
    // 0x24345c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x24345cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243460: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x243460u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x243464: 0xc090ca4  jal         func_243290
    ctx->pc = 0x243464u;
    SET_GPR_U32(ctx, 31, 0x24346Cu);
    ctx->pc = 0x243290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243290u, 0x243464u, 0x24346Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24346Cu;
label_24346c:
    // 0x24346c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x24346cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x243470: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x243470u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243474: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x243474u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243478: 0xc090d28  jal         func_2434A0
    ctx->pc = 0x243478u;
    SET_GPR_U32(ctx, 31, 0x243480u);
    ctx->pc = 0x2434A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2434A0u, 0x243478u, 0x243480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243480u;
label_243480:
    // 0x243480: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x243480u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x243484: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x243484u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x243488: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x243488u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x24348c: 0x3e00008  jr          $ra
    ctx->pc = 0x24348Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24348Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x243494u;
    // 0x243494: 0x0  nop
    ctx->pc = 0x243494u;
    // NOP
    // 0x243498: 0x0  nop
    ctx->pc = 0x243498u;
    // NOP
    // 0x24349c: 0x0  nop
    ctx->pc = 0x24349cu;
    // NOP
    ctx->pc = 0x2434a0u;
}
