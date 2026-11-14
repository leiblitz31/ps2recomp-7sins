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

// Function: sub_0010AE30
// Address: 0x10ae30 - 0x10ae70
void sub_0010AE30_0x10ae30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010AE30_0x10ae30");
#endif

    switch (ctx->pc) {
        case 0x10ae50u: goto label_10ae50;
        default: break;
    }

    ctx->pc = 0x10ae30u;

    // 0x10ae30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10ae30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10ae34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10ae34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10ae38: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x10ae38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x10ae3c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x10ae3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x10ae40: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x10ae40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10ae44: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x10ae44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10ae48: 0xc042b9c  jal         func_10AE70
    ctx->pc = 0x10AE48u;
    SET_GPR_U32(ctx, 31, 0x10AE50u);
    ctx->pc = 0x10AE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10AE70u, 0x10AE48u, 0x10AE50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AE50u;
label_10ae50:
    // 0x10ae50: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x10ae50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10ae54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10ae54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10ae58: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x10ae58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x10ae5c: 0x3e00008  jr          $ra
    ctx->pc = 0x10AE5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10AE5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10AE64u;
    // 0x10ae64: 0x0  nop
    ctx->pc = 0x10ae64u;
    // NOP
    // 0x10ae68: 0x0  nop
    ctx->pc = 0x10ae68u;
    // NOP
    // 0x10ae6c: 0x0  nop
    ctx->pc = 0x10ae6cu;
    // NOP
    ctx->pc = 0x10ae70u;
}
