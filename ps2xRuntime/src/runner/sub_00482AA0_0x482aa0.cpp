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

// Function: sub_00482AA0
// Address: 0x482aa0 - 0x482ae0
void sub_00482AA0_0x482aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00482AA0_0x482aa0");
#endif

    switch (ctx->pc) {
        case 0x482ac4u: goto label_482ac4;
        default: break;
    }

    ctx->pc = 0x482aa0u;

    // 0x482aa0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x482aa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x482aa4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x482aa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x482aa8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x482aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x482aac: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x482aacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x482ab0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x482ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x482ab4: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x482ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x482ab8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x482ab8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x482abc: 0xc120ab8  jal         func_482AE0
    ctx->pc = 0x482ABCu;
    SET_GPR_U32(ctx, 31, 0x482AC4u);
    ctx->pc = 0x482AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x482AE0u, 0x482ABCu, 0x482AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x482AC4u;
label_482ac4:
    // 0x482ac4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x482ac4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x482ac8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x482ac8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x482acc: 0x3e00008  jr          $ra
    ctx->pc = 0x482ACCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x482ACCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x482AD4u;
    // 0x482ad4: 0x0  nop
    ctx->pc = 0x482ad4u;
    // NOP
    // 0x482ad8: 0x0  nop
    ctx->pc = 0x482ad8u;
    // NOP
    // 0x482adc: 0x0  nop
    ctx->pc = 0x482adcu;
    // NOP
    ctx->pc = 0x482ae0u;
}
