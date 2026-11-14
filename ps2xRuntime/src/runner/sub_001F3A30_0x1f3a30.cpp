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

// Function: sub_001F3A30
// Address: 0x1f3a30 - 0x1f3a70
void sub_001F3A30_0x1f3a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F3A30_0x1f3a30");
#endif

    switch (ctx->pc) {
        case 0x1f3a60u: goto label_1f3a60;
        default: break;
    }

    ctx->pc = 0x1f3a30u;

    // 0x1f3a30: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1f3a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1f3a34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f3a34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f3a38: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1f3a38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1f3a3c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1f3a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1f3a40: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x1f3a40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x1f3a44: 0xafa70040  sw          $a3, 0x40($sp)
    ctx->pc = 0x1f3a44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 7));
    // 0x1f3a48: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1f3a48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f3a4c: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1f3a4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f3a50: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x1f3a50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f3a54: 0x8fa70040  lw          $a3, 0x40($sp)
    ctx->pc = 0x1f3a54u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f3a58: 0xc07e630  jal         func_1F98C0
    ctx->pc = 0x1F3A58u;
    SET_GPR_U32(ctx, 31, 0x1F3A60u);
    ctx->pc = 0x1F98C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F98C0u, 0x1F3A58u, 0x1F3A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3A60u;
label_1f3a60:
    // 0x1f3a60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f3a60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f3a64: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1f3a64u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1f3a68: 0x3e00008  jr          $ra
    ctx->pc = 0x1F3A68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F3A68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F3A70u;
}
