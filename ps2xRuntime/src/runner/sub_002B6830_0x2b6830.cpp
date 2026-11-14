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

// Function: sub_002B6830
// Address: 0x2b6830 - 0x2b6870
void sub_002B6830_0x2b6830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B6830_0x2b6830");
#endif

    switch (ctx->pc) {
        case 0x2b6854u: goto label_2b6854;
        default: break;
    }

    ctx->pc = 0x2b6830u;

    // 0x2b6830: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2b6830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2b6834: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b6834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b6838: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2b6838u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2b683c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2b683cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2b6840: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2b6840u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b6844: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x2b6844u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b6848: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2b6848u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b684c: 0xc0ada1c  jal         func_2B6870
    ctx->pc = 0x2B684Cu;
    SET_GPR_U32(ctx, 31, 0x2B6854u);
    ctx->pc = 0x2B6870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6870u, 0x2B684Cu, 0x2B6854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6854u;
label_2b6854:
    // 0x2b6854: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b6854u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b6858: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2b6858u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2b685c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B685Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B685Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B6864u;
    // 0x2b6864: 0x0  nop
    ctx->pc = 0x2b6864u;
    // NOP
    // 0x2b6868: 0x0  nop
    ctx->pc = 0x2b6868u;
    // NOP
    // 0x2b686c: 0x0  nop
    ctx->pc = 0x2b686cu;
    // NOP
    ctx->pc = 0x2b6870u;
}
