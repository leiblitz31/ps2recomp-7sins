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

// Function: sub_00254A50
// Address: 0x254a50 - 0x254aa0
void sub_00254A50_0x254a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00254A50_0x254a50");
#endif

    switch (ctx->pc) {
        case 0x254a88u: goto label_254a88;
        default: break;
    }

    ctx->pc = 0x254a50u;

    // 0x254a50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x254a50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x254a54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x254a54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x254a58: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x254a58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x254a5c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x254a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x254a60: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x254a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x254a64: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x254a64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x254a68: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x254a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x254a6c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x254a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x254a70: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x254a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x254a74: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x254a74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x254a78: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x254a78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x254a7c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x254a7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254a80: 0xc0952a8  jal         func_254AA0
    ctx->pc = 0x254A80u;
    SET_GPR_U32(ctx, 31, 0x254A88u);
    ctx->pc = 0x254AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254AA0u, 0x254A80u, 0x254A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254A88u;
label_254a88:
    // 0x254a88: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x254a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x254a8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x254a8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x254a90: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x254a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x254a94: 0x3e00008  jr          $ra
    ctx->pc = 0x254A94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x254A94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x254A9Cu;
    // 0x254a9c: 0x0  nop
    ctx->pc = 0x254a9cu;
    // NOP
    ctx->pc = 0x254aa0u;
}
