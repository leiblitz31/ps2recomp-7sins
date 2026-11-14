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

// Function: sub_00288C50
// Address: 0x288c50 - 0x288c90
void sub_00288C50_0x288c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00288C50_0x288c50");
#endif

    switch (ctx->pc) {
        case 0x288c70u: goto label_288c70;
        case 0x288c80u: goto label_288c80;
        default: break;
    }

    ctx->pc = 0x288c50u;

    // 0x288c50: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x288c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x288c54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x288c54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x288c58: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x288c58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x288c5c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x288c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x288c60: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x288c60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x288c64: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x288c64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x288c68: 0xc0a2350  jal         func_288D40
    ctx->pc = 0x288C68u;
    SET_GPR_U32(ctx, 31, 0x288C70u);
    ctx->pc = 0x288D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288D40u, 0x288C68u, 0x288C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288C70u;
label_288c70:
    // 0x288c70: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x288c70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x288c74: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x288c74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288c78: 0xc0a2324  jal         func_288C90
    ctx->pc = 0x288C78u;
    SET_GPR_U32(ctx, 31, 0x288C80u);
    ctx->pc = 0x288C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288C90u, 0x288C78u, 0x288C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288C80u;
label_288c80:
    // 0x288c80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x288c80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x288c84: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x288c84u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x288c88: 0x3e00008  jr          $ra
    ctx->pc = 0x288C88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x288C88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x288C90u;
}
