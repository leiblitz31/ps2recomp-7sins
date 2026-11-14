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

// Function: sub_001C4A30
// Address: 0x1c4a30 - 0x1c4a70
void sub_001C4A30_0x1c4a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C4A30_0x1c4a30");
#endif

    switch (ctx->pc) {
        case 0x1c4a50u: goto label_1c4a50;
        default: break;
    }

    ctx->pc = 0x1c4a30u;

    // 0x1c4a30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c4a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c4a34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c4a34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c4a38: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1c4a38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1c4a3c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1c4a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1c4a40: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1c4a40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c4a44: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1c4a44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c4a48: 0xc07129c  jal         func_1C4A70
    ctx->pc = 0x1C4A48u;
    SET_GPR_U32(ctx, 31, 0x1C4A50u);
    ctx->pc = 0x1C4A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4A70u, 0x1C4A48u, 0x1C4A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4A50u;
label_1c4a50:
    // 0x1c4a50: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1c4a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c4a54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c4a54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c4a58: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1c4a58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1c4a5c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C4A5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C4A5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C4A64u;
    // 0x1c4a64: 0x0  nop
    ctx->pc = 0x1c4a64u;
    // NOP
    // 0x1c4a68: 0x0  nop
    ctx->pc = 0x1c4a68u;
    // NOP
    // 0x1c4a6c: 0x0  nop
    ctx->pc = 0x1c4a6cu;
    // NOP
    ctx->pc = 0x1c4a70u;
}
