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

// Function: sub_0022CA70
// Address: 0x22ca70 - 0x22cac0
void sub_0022CA70_0x22ca70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022CA70_0x22ca70");
#endif

    switch (ctx->pc) {
        case 0x22caa8u: goto label_22caa8;
        default: break;
    }

    ctx->pc = 0x22ca70u;

    // 0x22ca70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x22ca70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x22ca74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22ca74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22ca78: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x22ca78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x22ca7c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x22ca7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x22ca80: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x22ca80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22ca84: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x22ca84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x22ca88: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x22ca88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22ca8c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x22ca8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x22ca90: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x22ca90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22ca94: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x22ca94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x22ca98: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x22ca98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22ca9c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22ca9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22caa0: 0xc08b2b0  jal         func_22CAC0
    ctx->pc = 0x22CAA0u;
    SET_GPR_U32(ctx, 31, 0x22CAA8u);
    ctx->pc = 0x22CAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22CAC0u, 0x22CAA0u, 0x22CAA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CAA8u;
label_22caa8:
    // 0x22caa8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x22caa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22caac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22caacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22cab0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x22cab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x22cab4: 0x3e00008  jr          $ra
    ctx->pc = 0x22CAB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22CAB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22CABCu;
    // 0x22cabc: 0x0  nop
    ctx->pc = 0x22cabcu;
    // NOP
    ctx->pc = 0x22cac0u;
}
