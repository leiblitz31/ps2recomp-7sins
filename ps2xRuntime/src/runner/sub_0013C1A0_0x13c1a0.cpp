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

// Function: sub_0013C1A0
// Address: 0x13c1a0 - 0x13c1e0
void sub_0013C1A0_0x13c1a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013C1A0_0x13c1a0");
#endif

    switch (ctx->pc) {
        case 0x13c1c4u: goto label_13c1c4;
        default: break;
    }

    ctx->pc = 0x13c1a0u;

    // 0x13c1a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x13c1a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x13c1a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13c1a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13c1a8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x13c1a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x13c1ac: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x13c1acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x13c1b0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x13c1b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13c1b4: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x13c1b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13c1b8: 0x27a6001c  addiu       $a2, $sp, 0x1C
    ctx->pc = 0x13c1b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x13c1bc: 0xc04f078  jal         func_13C1E0
    ctx->pc = 0x13C1BCu;
    SET_GPR_U32(ctx, 31, 0x13C1C4u);
    ctx->pc = 0x13C1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C1E0u, 0x13C1BCu, 0x13C1C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C1C4u;
label_13c1c4:
    // 0x13c1c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13c1c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13c1c8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x13c1c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x13c1cc: 0x3e00008  jr          $ra
    ctx->pc = 0x13C1CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13C1CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13C1D4u;
    // 0x13c1d4: 0x0  nop
    ctx->pc = 0x13c1d4u;
    // NOP
    // 0x13c1d8: 0x0  nop
    ctx->pc = 0x13c1d8u;
    // NOP
    // 0x13c1dc: 0x0  nop
    ctx->pc = 0x13c1dcu;
    // NOP
    ctx->pc = 0x13c1e0u;
}
