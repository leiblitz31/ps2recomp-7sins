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

// Function: sub_002D0710
// Address: 0x2d0710 - 0x2d0760
void sub_002D0710_0x2d0710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D0710_0x2d0710");
#endif

    switch (ctx->pc) {
        case 0x2d0748u: goto label_2d0748;
        default: break;
    }

    ctx->pc = 0x2d0710u;

    // 0x2d0710: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d0710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2d0714: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d0714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d0718: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2d0718u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2d071c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2d071cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2d0720: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2d0720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d0724: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2d0724u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2d0728: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2d0728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d072c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2d072cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2d0730: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2d0730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d0734: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x2d0734u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x2d0738: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x2d0738u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d073c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d073cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0740: 0xc0b41d8  jal         func_2D0760
    ctx->pc = 0x2D0740u;
    SET_GPR_U32(ctx, 31, 0x2D0748u);
    ctx->pc = 0x2D0760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0760u, 0x2D0740u, 0x2D0748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0748u;
label_2d0748:
    // 0x2d0748: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2d0748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d074c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d074cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d0750: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2d0750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2d0754: 0x3e00008  jr          $ra
    ctx->pc = 0x2D0754u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D0754u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D075Cu;
    // 0x2d075c: 0x0  nop
    ctx->pc = 0x2d075cu;
    // NOP
    ctx->pc = 0x2d0760u;
}
