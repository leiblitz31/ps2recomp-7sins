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

// Function: sub_00218C30
// Address: 0x218c30 - 0x218c70
void sub_00218C30_0x218c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00218C30_0x218c30");
#endif

    switch (ctx->pc) {
        case 0x218c50u: goto label_218c50;
        default: break;
    }

    ctx->pc = 0x218c30u;

    // 0x218c30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x218c30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x218c34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x218c34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x218c38: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x218c38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x218c3c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x218c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x218c40: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x218c40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x218c44: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x218c44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x218c48: 0xc08631c  jal         func_218C70
    ctx->pc = 0x218C48u;
    SET_GPR_U32(ctx, 31, 0x218C50u);
    ctx->pc = 0x218C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218C70u, 0x218C48u, 0x218C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218C50u;
label_218c50:
    // 0x218c50: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x218c50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x218c54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x218c54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x218c58: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x218c58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x218c5c: 0x3e00008  jr          $ra
    ctx->pc = 0x218C5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x218C5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x218C64u;
    // 0x218c64: 0x0  nop
    ctx->pc = 0x218c64u;
    // NOP
    // 0x218c68: 0x0  nop
    ctx->pc = 0x218c68u;
    // NOP
    // 0x218c6c: 0x0  nop
    ctx->pc = 0x218c6cu;
    // NOP
    ctx->pc = 0x218c70u;
}
