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

// Function: sub_00259440
// Address: 0x259440 - 0x259490
void sub_00259440_0x259440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00259440_0x259440");
#endif

    switch (ctx->pc) {
        case 0x259478u: goto label_259478;
        default: break;
    }

    ctx->pc = 0x259440u;

    // 0x259440: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x259440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x259444: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x259444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x259448: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x259448u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x25944c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x25944cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x259450: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x259450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x259454: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x259454u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x259458: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x259458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25945c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x25945cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x259460: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x259460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x259464: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x259464u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x259468: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x259468u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25946c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x25946cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259470: 0xc096524  jal         func_259490
    ctx->pc = 0x259470u;
    SET_GPR_U32(ctx, 31, 0x259478u);
    ctx->pc = 0x259490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259490u, 0x259470u, 0x259478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259478u;
label_259478:
    // 0x259478: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x259478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25947c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25947cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x259480: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x259480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x259484: 0x3e00008  jr          $ra
    ctx->pc = 0x259484u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x259484u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25948Cu;
    // 0x25948c: 0x0  nop
    ctx->pc = 0x25948cu;
    // NOP
    ctx->pc = 0x259490u;
}
