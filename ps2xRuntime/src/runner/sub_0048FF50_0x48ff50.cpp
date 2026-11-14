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

// Function: sub_0048FF50
// Address: 0x48ff50 - 0x48ffa0
void sub_0048FF50_0x48ff50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048FF50_0x48ff50");
#endif

    switch (ctx->pc) {
        case 0x48ff70u: goto label_48ff70;
        case 0x48ff88u: goto label_48ff88;
        default: break;
    }

    ctx->pc = 0x48ff50u;

    // 0x48ff50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x48ff50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x48ff54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x48ff54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x48ff58: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x48ff58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x48ff5c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x48ff5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x48ff60: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x48ff60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x48ff64: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x48ff64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x48ff68: 0xc123fe8  jal         func_48FFA0
    ctx->pc = 0x48FF68u;
    SET_GPR_U32(ctx, 31, 0x48FF70u);
    ctx->pc = 0x48FFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48FFA0u, 0x48FF68u, 0x48FF70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48FF70u;
label_48ff70:
    // 0x48ff70: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x48ff70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48ff74: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x48ff74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x48ff78: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x48ff78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x48ff7c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x48ff7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x48ff80: 0xc1240a4  jal         func_490290
    ctx->pc = 0x48FF80u;
    SET_GPR_U32(ctx, 31, 0x48FF88u);
    ctx->pc = 0x490290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x490290u, 0x48FF80u, 0x48FF88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48FF88u;
label_48ff88:
    // 0x48ff88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x48ff88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48ff8c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x48ff8cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x48ff90: 0x3e00008  jr          $ra
    ctx->pc = 0x48FF90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48FF90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48FF98u;
    // 0x48ff98: 0x0  nop
    ctx->pc = 0x48ff98u;
    // NOP
    // 0x48ff9c: 0x0  nop
    ctx->pc = 0x48ff9cu;
    // NOP
    ctx->pc = 0x48ffa0u;
}
