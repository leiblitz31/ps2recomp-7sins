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

// Function: sub_002E0370
// Address: 0x2e0370 - 0x2e03b0
void sub_002E0370_0x2e0370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E0370_0x2e0370");
#endif

    switch (ctx->pc) {
        case 0x2e0390u: goto label_2e0390;
        case 0x2e03a0u: goto label_2e03a0;
        default: break;
    }

    ctx->pc = 0x2e0370u;

    // 0x2e0370: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2e0370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2e0374: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e0374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e0378: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2e0378u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2e037c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x2e037cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x2e0380: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x2e0380u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x2e0384: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x2e0384u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2e0388: 0xc0b8118  jal         func_2E0460
    ctx->pc = 0x2E0388u;
    SET_GPR_U32(ctx, 31, 0x2E0390u);
    ctx->pc = 0x2E0460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0460u, 0x2E0388u, 0x2E0390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0390u;
label_2e0390:
    // 0x2e0390: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2e0390u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e0394: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2e0394u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0398: 0xc0b80ec  jal         func_2E03B0
    ctx->pc = 0x2E0398u;
    SET_GPR_U32(ctx, 31, 0x2E03A0u);
    ctx->pc = 0x2E03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E03B0u, 0x2E0398u, 0x2E03A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E03A0u;
label_2e03a0:
    // 0x2e03a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e03a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e03a4: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2e03a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2e03a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2E03A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E03A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E03B0u;
}
