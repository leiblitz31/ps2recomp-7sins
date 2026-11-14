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

// Function: sub_001E1A20
// Address: 0x1e1a20 - 0x1e1a60
void sub_001E1A20_0x1e1a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E1A20_0x1e1a20");
#endif

    switch (ctx->pc) {
        case 0x1e1a50u: goto label_1e1a50;
        default: break;
    }

    ctx->pc = 0x1e1a20u;

    // 0x1e1a20: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1e1a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1e1a24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e1a24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e1a28: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1e1a28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1e1a2c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1e1a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1e1a30: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x1e1a30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x1e1a34: 0xafa70040  sw          $a3, 0x40($sp)
    ctx->pc = 0x1e1a34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 7));
    // 0x1e1a38: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1e1a38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e1a3c: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1e1a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e1a40: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x1e1a40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e1a44: 0x8fa70040  lw          $a3, 0x40($sp)
    ctx->pc = 0x1e1a44u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e1a48: 0xc07a438  jal         func_1E90E0
    ctx->pc = 0x1E1A48u;
    SET_GPR_U32(ctx, 31, 0x1E1A50u);
    ctx->pc = 0x1E90E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E90E0u, 0x1E1A48u, 0x1E1A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1A50u;
label_1e1a50:
    // 0x1e1a50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e1a50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e1a54: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1e1a54u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1e1a58: 0x3e00008  jr          $ra
    ctx->pc = 0x1E1A58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E1A58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E1A60u;
}
