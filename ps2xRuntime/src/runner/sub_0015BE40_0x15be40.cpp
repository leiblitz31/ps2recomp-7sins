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

// Function: sub_0015BE40
// Address: 0x15be40 - 0x15be80
void sub_0015BE40_0x15be40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015BE40_0x15be40");
#endif

    switch (ctx->pc) {
        case 0x15be58u: goto label_15be58;
        case 0x15be68u: goto label_15be68;
        default: break;
    }

    ctx->pc = 0x15be40u;

    // 0x15be40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x15be40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x15be44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15be44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15be48: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x15be48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x15be4c: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x15be4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x15be50: 0xc056fe0  jal         func_15BF80
    ctx->pc = 0x15BE50u;
    SET_GPR_U32(ctx, 31, 0x15BE58u);
    ctx->pc = 0x15BF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BF80u, 0x15BE50u, 0x15BE58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15BE58u;
label_15be58:
    // 0x15be58: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x15be58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15be5c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x15be5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15be60: 0xc056fa0  jal         func_15BE80
    ctx->pc = 0x15BE60u;
    SET_GPR_U32(ctx, 31, 0x15BE68u);
    ctx->pc = 0x15BE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BE80u, 0x15BE60u, 0x15BE68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15BE68u;
label_15be68:
    // 0x15be68: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x15be68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15be6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15be6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15be70: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x15be70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x15be74: 0x3e00008  jr          $ra
    ctx->pc = 0x15BE74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15BE74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15BE7Cu;
    // 0x15be7c: 0x0  nop
    ctx->pc = 0x15be7cu;
    // NOP
    ctx->pc = 0x15be80u;
}
