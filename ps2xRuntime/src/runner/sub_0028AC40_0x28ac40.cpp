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

// Function: sub_0028AC40
// Address: 0x28ac40 - 0x28ac80
void sub_0028AC40_0x28ac40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028AC40_0x28ac40");
#endif

    switch (ctx->pc) {
        case 0x28ac5cu: goto label_28ac5c;
        case 0x28ac6cu: goto label_28ac6c;
        default: break;
    }

    ctx->pc = 0x28ac40u;

    // 0x28ac40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x28ac40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x28ac44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28ac44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28ac48: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x28ac48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x28ac4c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x28ac4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x28ac50: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x28ac50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28ac54: 0xc0a2a9c  jal         func_28AA70
    ctx->pc = 0x28AC54u;
    SET_GPR_U32(ctx, 31, 0x28AC5Cu);
    ctx->pc = 0x28AA70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AA70u, 0x28AC54u, 0x28AC5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AC5Cu;
label_28ac5c:
    // 0x28ac5c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x28ac5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28ac60: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x28ac60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28ac64: 0xc0a2acc  jal         func_28AB30
    ctx->pc = 0x28AC64u;
    SET_GPR_U32(ctx, 31, 0x28AC6Cu);
    ctx->pc = 0x28AB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AB30u, 0x28AC64u, 0x28AC6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AC6Cu;
label_28ac6c:
    // 0x28ac6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28ac6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28ac70: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x28ac70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x28ac74: 0x3e00008  jr          $ra
    ctx->pc = 0x28AC74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28AC74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28AC7Cu;
    // 0x28ac7c: 0x0  nop
    ctx->pc = 0x28ac7cu;
    // NOP
    ctx->pc = 0x28ac80u;
}
