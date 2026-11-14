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

// Function: sub_00218B10
// Address: 0x218b10 - 0x218b50
void sub_00218B10_0x218b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00218B10_0x218b10");
#endif

    switch (ctx->pc) {
        case 0x218b30u: goto label_218b30;
        default: break;
    }

    ctx->pc = 0x218b10u;

    // 0x218b10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x218b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x218b14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x218b14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x218b18: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x218b18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x218b1c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x218b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x218b20: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x218b20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x218b24: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x218b24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x218b28: 0xc042b9c  jal         func_10AE70
    ctx->pc = 0x218B28u;
    SET_GPR_U32(ctx, 31, 0x218B30u);
    ctx->pc = 0x10AE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10AE70u, 0x218B28u, 0x218B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218B30u;
label_218b30:
    // 0x218b30: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x218b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x218b34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x218b34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x218b38: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x218b38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x218b3c: 0x3e00008  jr          $ra
    ctx->pc = 0x218B3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x218B3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x218B44u;
    // 0x218b44: 0x0  nop
    ctx->pc = 0x218b44u;
    // NOP
    // 0x218b48: 0x0  nop
    ctx->pc = 0x218b48u;
    // NOP
    // 0x218b4c: 0x0  nop
    ctx->pc = 0x218b4cu;
    // NOP
    ctx->pc = 0x218b50u;
}
