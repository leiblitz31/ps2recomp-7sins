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

// Function: sub_002BDB30
// Address: 0x2bdb30 - 0x2bdb70
void sub_002BDB30_0x2bdb30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BDB30_0x2bdb30");
#endif

    switch (ctx->pc) {
        case 0x2bdb50u: goto label_2bdb50;
        default: break;
    }

    ctx->pc = 0x2bdb30u;

    // 0x2bdb30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2bdb30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2bdb34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2bdb34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2bdb38: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2bdb38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2bdb3c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2bdb3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2bdb40: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2bdb40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bdb44: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x2bdb44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bdb48: 0xc0af6dc  jal         func_2BDB70
    ctx->pc = 0x2BDB48u;
    SET_GPR_U32(ctx, 31, 0x2BDB50u);
    ctx->pc = 0x2BDB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BDB70u, 0x2BDB48u, 0x2BDB50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDB50u;
label_2bdb50:
    // 0x2bdb50: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2bdb50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bdb54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2bdb54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bdb58: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2bdb58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2bdb5c: 0x3e00008  jr          $ra
    ctx->pc = 0x2BDB5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BDB5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BDB64u;
    // 0x2bdb64: 0x0  nop
    ctx->pc = 0x2bdb64u;
    // NOP
    // 0x2bdb68: 0x0  nop
    ctx->pc = 0x2bdb68u;
    // NOP
    // 0x2bdb6c: 0x0  nop
    ctx->pc = 0x2bdb6cu;
    // NOP
    ctx->pc = 0x2bdb70u;
}
