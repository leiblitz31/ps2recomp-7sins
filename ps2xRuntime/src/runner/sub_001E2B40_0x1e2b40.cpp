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

// Function: sub_001E2B40
// Address: 0x1e2b40 - 0x1e2b80
void sub_001E2B40_0x1e2b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E2B40_0x1e2b40");
#endif

    switch (ctx->pc) {
        case 0x1e2b5cu: goto label_1e2b5c;
        case 0x1e2b6cu: goto label_1e2b6c;
        default: break;
    }

    ctx->pc = 0x1e2b40u;

    // 0x1e2b40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e2b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e2b44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e2b44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e2b48: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1e2b48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1e2b4c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1e2b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1e2b50: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1e2b50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e2b54: 0xc078ae0  jal         func_1E2B80
    ctx->pc = 0x1E2B54u;
    SET_GPR_U32(ctx, 31, 0x1E2B5Cu);
    ctx->pc = 0x1E2B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2B80u, 0x1E2B54u, 0x1E2B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2B5Cu;
label_1e2b5c:
    // 0x1e2b5c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1e2b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e2b60: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1e2b60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2b64: 0xc078820  jal         func_1E2080
    ctx->pc = 0x1E2B64u;
    SET_GPR_U32(ctx, 31, 0x1E2B6Cu);
    ctx->pc = 0x1E2080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2080u, 0x1E2B64u, 0x1E2B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2B6Cu;
label_1e2b6c:
    // 0x1e2b6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e2b6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e2b70: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1e2b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1e2b74: 0x3e00008  jr          $ra
    ctx->pc = 0x1E2B74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E2B74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E2B7Cu;
    // 0x1e2b7c: 0x0  nop
    ctx->pc = 0x1e2b7cu;
    // NOP
    ctx->pc = 0x1e2b80u;
}
