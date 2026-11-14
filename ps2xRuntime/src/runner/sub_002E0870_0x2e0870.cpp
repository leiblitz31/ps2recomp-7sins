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

// Function: sub_002E0870
// Address: 0x2e0870 - 0x2e08d0
void sub_002E0870_0x2e0870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E0870_0x2e0870");
#endif

    switch (ctx->pc) {
        case 0x2e0898u: goto label_2e0898;
        case 0x2e08b0u: goto label_2e08b0;
        case 0x2e08c0u: goto label_2e08c0;
        default: break;
    }

    ctx->pc = 0x2e0870u;

    // 0x2e0870: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2e0870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2e0874: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e0874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e0878: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2e0878u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2e087c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x2e087cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x2e0880: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x2e0880u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x2e0884: 0xafa70050  sw          $a3, 0x50($sp)
    ctx->pc = 0x2e0884u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 7));
    // 0x2e0888: 0x27a40018  addiu       $a0, $sp, 0x18
    ctx->pc = 0x2e0888u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x2e088c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x2e088cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2e0890: 0xc0b8118  jal         func_2E0460
    ctx->pc = 0x2E0890u;
    SET_GPR_U32(ctx, 31, 0x2E0898u);
    ctx->pc = 0x2E0460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0460u, 0x2E0890u, 0x2E0898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0898u;
label_2e0898:
    // 0x2e0898: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x2e0898u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x2e089c: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x2e089cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e08a0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2e08a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e08a4: 0x8fa70050  lw          $a3, 0x50($sp)
    ctx->pc = 0x2e08a4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e08a8: 0xc0b8af0  jal         func_2E2BC0
    ctx->pc = 0x2E08A8u;
    SET_GPR_U32(ctx, 31, 0x2E08B0u);
    ctx->pc = 0x2E2BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E2BC0u, 0x2E08A8u, 0x2E08B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E08B0u;
label_2e08b0:
    // 0x2e08b0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2e08b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e08b4: 0x27a5001c  addiu       $a1, $sp, 0x1C
    ctx->pc = 0x2e08b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x2e08b8: 0xc0b8234  jal         func_2E08D0
    ctx->pc = 0x2E08B8u;
    SET_GPR_U32(ctx, 31, 0x2E08C0u);
    ctx->pc = 0x2E08D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E08D0u, 0x2E08B8u, 0x2E08C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E08C0u;
label_2e08c0:
    // 0x2e08c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e08c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e08c4: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x2e08c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2e08c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2E08C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E08C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E08D0u;
}
