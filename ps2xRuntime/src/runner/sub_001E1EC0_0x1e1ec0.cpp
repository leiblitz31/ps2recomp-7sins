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

// Function: sub_001E1EC0
// Address: 0x1e1ec0 - 0x1e1f00
void sub_001E1EC0_0x1e1ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E1EC0_0x1e1ec0");
#endif

    switch (ctx->pc) {
        case 0x1e1ee0u: goto label_1e1ee0;
        default: break;
    }

    ctx->pc = 0x1e1ec0u;

    // 0x1e1ec0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e1ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e1ec4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e1ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e1ec8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1e1ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1e1ecc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1e1eccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1e1ed0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1e1ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e1ed4: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1e1ed4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e1ed8: 0xc07a5ec  jal         func_1E97B0
    ctx->pc = 0x1E1ED8u;
    SET_GPR_U32(ctx, 31, 0x1E1EE0u);
    ctx->pc = 0x1E97B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E97B0u, 0x1E1ED8u, 0x1E1EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1EE0u;
label_1e1ee0:
    // 0x1e1ee0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e1ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e1ee4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e1ee4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e1ee8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1e1ee8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1e1eec: 0x3e00008  jr          $ra
    ctx->pc = 0x1E1EECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E1EECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E1EF4u;
    // 0x1e1ef4: 0x0  nop
    ctx->pc = 0x1e1ef4u;
    // NOP
    // 0x1e1ef8: 0x0  nop
    ctx->pc = 0x1e1ef8u;
    // NOP
    // 0x1e1efc: 0x0  nop
    ctx->pc = 0x1e1efcu;
    // NOP
    ctx->pc = 0x1e1f00u;
}
