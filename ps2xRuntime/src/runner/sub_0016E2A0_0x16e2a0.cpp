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

// Function: sub_0016E2A0
// Address: 0x16e2a0 - 0x16e2f0
void sub_0016E2A0_0x16e2a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016E2A0_0x16e2a0");
#endif

    switch (ctx->pc) {
        case 0x16e2d8u: goto label_16e2d8;
        default: break;
    }

    ctx->pc = 0x16e2a0u;

    // 0x16e2a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x16e2a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x16e2a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16e2a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16e2a8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x16e2a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x16e2ac: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x16e2acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x16e2b0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x16e2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16e2b4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x16e2b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x16e2b8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x16e2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16e2bc: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x16e2bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x16e2c0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x16e2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16e2c4: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x16e2c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x16e2c8: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x16e2c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16e2cc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16e2ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e2d0: 0xc05b8bc  jal         func_16E2F0
    ctx->pc = 0x16E2D0u;
    SET_GPR_U32(ctx, 31, 0x16E2D8u);
    ctx->pc = 0x16E2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16E2F0u, 0x16E2D0u, 0x16E2D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E2D8u;
label_16e2d8:
    // 0x16e2d8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x16e2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16e2dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16e2dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16e2e0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x16e2e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x16e2e4: 0x3e00008  jr          $ra
    ctx->pc = 0x16E2E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16E2E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16E2ECu;
    // 0x16e2ec: 0x0  nop
    ctx->pc = 0x16e2ecu;
    // NOP
    ctx->pc = 0x16e2f0u;
}
