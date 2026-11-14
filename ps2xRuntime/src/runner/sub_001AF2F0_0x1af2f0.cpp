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

// Function: sub_001AF2F0
// Address: 0x1af2f0 - 0x1af340
void sub_001AF2F0_0x1af2f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AF2F0_0x1af2f0");
#endif

    switch (ctx->pc) {
        case 0x1af328u: goto label_1af328;
        default: break;
    }

    ctx->pc = 0x1af2f0u;

    // 0x1af2f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1af2f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1af2f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1af2f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1af2f8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1af2f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1af2fc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1af2fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1af300: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1af300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1af304: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1af304u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1af308: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1af308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1af30c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1af30cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1af310: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1af310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1af314: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x1af314u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1af318: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1af318u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1af31c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1af31cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af320: 0xc06bcd0  jal         func_1AF340
    ctx->pc = 0x1AF320u;
    SET_GPR_U32(ctx, 31, 0x1AF328u);
    ctx->pc = 0x1AF340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF340u, 0x1AF320u, 0x1AF328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF328u;
label_1af328:
    // 0x1af328: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1af328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1af32c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1af32cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1af330: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1af330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1af334: 0x3e00008  jr          $ra
    ctx->pc = 0x1AF334u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AF334u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AF33Cu;
    // 0x1af33c: 0x0  nop
    ctx->pc = 0x1af33cu;
    // NOP
    ctx->pc = 0x1af340u;
}
