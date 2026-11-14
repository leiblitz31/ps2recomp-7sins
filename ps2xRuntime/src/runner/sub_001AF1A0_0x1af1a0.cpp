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

// Function: sub_001AF1A0
// Address: 0x1af1a0 - 0x1af1e0
void sub_001AF1A0_0x1af1a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AF1A0_0x1af1a0");
#endif

    switch (ctx->pc) {
        case 0x1af1c8u: goto label_1af1c8;
        default: break;
    }

    ctx->pc = 0x1af1a0u;

    // 0x1af1a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1af1a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1af1a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1af1a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1af1a8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1af1a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1af1ac: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x1af1acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x1af1b0: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x1af1b0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x1af1b4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1af1b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1af1b8: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x1af1b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1af1bc: 0x27a6001c  addiu       $a2, $sp, 0x1C
    ctx->pc = 0x1af1bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x1af1c0: 0xc06bc78  jal         func_1AF1E0
    ctx->pc = 0x1AF1C0u;
    SET_GPR_U32(ctx, 31, 0x1AF1C8u);
    ctx->pc = 0x1AF1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF1E0u, 0x1AF1C0u, 0x1AF1C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF1C8u;
label_1af1c8:
    // 0x1af1c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1af1c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1af1cc: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1af1ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1af1d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1AF1D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AF1D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AF1D8u;
    // 0x1af1d8: 0x0  nop
    ctx->pc = 0x1af1d8u;
    // NOP
    // 0x1af1dc: 0x0  nop
    ctx->pc = 0x1af1dcu;
    // NOP
    ctx->pc = 0x1af1e0u;
}
