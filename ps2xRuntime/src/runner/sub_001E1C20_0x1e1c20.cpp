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

// Function: sub_001E1C20
// Address: 0x1e1c20 - 0x1e1c70
void sub_001E1C20_0x1e1c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E1C20_0x1e1c20");
#endif

    switch (ctx->pc) {
        case 0x1e1c3cu: goto label_1e1c3c;
        case 0x1e1c50u: goto label_1e1c50;
        case 0x1e1c60u: goto label_1e1c60;
        default: break;
    }

    ctx->pc = 0x1e1c20u;

    // 0x1e1c20: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1e1c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1e1c24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e1c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e1c28: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1e1c28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1e1c2c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x1e1c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x1e1c30: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1e1c30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1e1c34: 0xc0787c8  jal         func_1E1F20
    ctx->pc = 0x1E1C34u;
    SET_GPR_U32(ctx, 31, 0x1E1C3Cu);
    ctx->pc = 0x1E1F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1F20u, 0x1E1C34u, 0x1E1C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1C3Cu;
label_1e1c3c:
    // 0x1e1c3c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1e1c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e1c40: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x1e1c40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e1c44: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x1e1c44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1e1c48: 0xc07871c  jal         func_1E1C70
    ctx->pc = 0x1E1C48u;
    SET_GPR_U32(ctx, 31, 0x1E1C50u);
    ctx->pc = 0x1E1C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1C70u, 0x1E1C48u, 0x1E1C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1C50u;
label_1e1c50:
    // 0x1e1c50: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1e1c50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1e1c54: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1e1c54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e1c58: 0xc0759e4  jal         func_1D6790
    ctx->pc = 0x1E1C58u;
    SET_GPR_U32(ctx, 31, 0x1E1C60u);
    ctx->pc = 0x1D6790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6790u, 0x1E1C58u, 0x1E1C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1C60u;
label_1e1c60:
    // 0x1e1c60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e1c60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e1c64: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1e1c64u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1e1c68: 0x3e00008  jr          $ra
    ctx->pc = 0x1E1C68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E1C68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E1C70u;
}
