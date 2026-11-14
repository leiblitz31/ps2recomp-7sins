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

// Function: sub_00227E40
// Address: 0x227e40 - 0x227e80
void sub_00227E40_0x227e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00227E40_0x227e40");
#endif

    switch (ctx->pc) {
        case 0x227e58u: goto label_227e58;
        case 0x227e68u: goto label_227e68;
        default: break;
    }

    ctx->pc = 0x227e40u;

    // 0x227e40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x227e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x227e44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x227e44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x227e48: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x227e48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x227e4c: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x227e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x227e50: 0xc08a064  jal         func_228190
    ctx->pc = 0x227E50u;
    SET_GPR_U32(ctx, 31, 0x227E58u);
    ctx->pc = 0x228190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228190u, 0x227E50u, 0x227E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227E58u;
label_227e58:
    // 0x227e58: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x227e58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x227e5c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x227e5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227e60: 0xc08a024  jal         func_228090
    ctx->pc = 0x227E60u;
    SET_GPR_U32(ctx, 31, 0x227E68u);
    ctx->pc = 0x228090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228090u, 0x227E60u, 0x227E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227E68u;
label_227e68:
    // 0x227e68: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x227e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x227e6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x227e6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x227e70: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x227e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x227e74: 0x3e00008  jr          $ra
    ctx->pc = 0x227E74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227E74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x227E7Cu;
    // 0x227e7c: 0x0  nop
    ctx->pc = 0x227e7cu;
    // NOP
    ctx->pc = 0x227e80u;
}
