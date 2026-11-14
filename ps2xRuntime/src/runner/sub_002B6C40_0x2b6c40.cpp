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

// Function: sub_002B6C40
// Address: 0x2b6c40 - 0x2b6c80
void sub_002B6C40_0x2b6c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B6C40_0x2b6c40");
#endif

    switch (ctx->pc) {
        case 0x2b6c58u: goto label_2b6c58;
        case 0x2b6c68u: goto label_2b6c68;
        default: break;
    }

    ctx->pc = 0x2b6c40u;

    // 0x2b6c40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2b6c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2b6c44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b6c44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b6c48: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2b6c48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2b6c4c: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x2b6c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x2b6c50: 0xc0adb60  jal         func_2B6D80
    ctx->pc = 0x2B6C50u;
    SET_GPR_U32(ctx, 31, 0x2B6C58u);
    ctx->pc = 0x2B6D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6D80u, 0x2B6C50u, 0x2B6C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6C58u;
label_2b6c58:
    // 0x2b6c58: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2b6c58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b6c5c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2b6c5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6c60: 0xc0adb20  jal         func_2B6C80
    ctx->pc = 0x2B6C60u;
    SET_GPR_U32(ctx, 31, 0x2B6C68u);
    ctx->pc = 0x2B6C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6C80u, 0x2B6C60u, 0x2B6C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6C68u;
label_2b6c68:
    // 0x2b6c68: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2b6c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b6c6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b6c6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b6c70: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2b6c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2b6c74: 0x3e00008  jr          $ra
    ctx->pc = 0x2B6C74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B6C74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B6C7Cu;
    // 0x2b6c7c: 0x0  nop
    ctx->pc = 0x2b6c7cu;
    // NOP
    ctx->pc = 0x2b6c80u;
}
