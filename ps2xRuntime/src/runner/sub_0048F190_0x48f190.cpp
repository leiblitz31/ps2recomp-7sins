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

// Function: sub_0048F190
// Address: 0x48f190 - 0x48f1d0
void sub_0048F190_0x48f190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048F190_0x48f190");
#endif

    switch (ctx->pc) {
        case 0x48f1b0u: goto label_48f1b0;
        case 0x48f1c0u: goto label_48f1c0;
        default: break;
    }

    ctx->pc = 0x48f190u;

    // 0x48f190: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x48f190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x48f194: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x48f194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x48f198: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x48f198u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x48f19c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x48f19cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x48f1a0: 0x27a40018  addiu       $a0, $sp, 0x18
    ctx->pc = 0x48f1a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x48f1a4: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x48f1a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x48f1a8: 0xc123920  jal         func_48E480
    ctx->pc = 0x48F1A8u;
    SET_GPR_U32(ctx, 31, 0x48F1B0u);
    ctx->pc = 0x48E480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48E480u, 0x48F1A8u, 0x48F1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48F1B0u;
label_48f1b0:
    // 0x48f1b0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x48f1b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x48f1b4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x48f1b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48f1b8: 0xc123ff4  jal         func_48FFD0
    ctx->pc = 0x48F1B8u;
    SET_GPR_U32(ctx, 31, 0x48F1C0u);
    ctx->pc = 0x48FFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48FFD0u, 0x48F1B8u, 0x48F1C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48F1C0u;
label_48f1c0:
    // 0x48f1c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x48f1c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48f1c4: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x48f1c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x48f1c8: 0x3e00008  jr          $ra
    ctx->pc = 0x48F1C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48F1C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48F1D0u;
}
