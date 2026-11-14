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

// Function: sub_001B9A90
// Address: 0x1b9a90 - 0x1b9ad0
void sub_001B9A90_0x1b9a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B9A90_0x1b9a90");
#endif

    switch (ctx->pc) {
        case 0x1b9aa8u: goto label_1b9aa8;
        case 0x1b9ab8u: goto label_1b9ab8;
        default: break;
    }

    ctx->pc = 0x1b9a90u;

    // 0x1b9a90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b9a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b9a94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b9a94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b9a98: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1b9a98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1b9a9c: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x1b9a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x1b9aa0: 0xc06e6f4  jal         func_1B9BD0
    ctx->pc = 0x1B9AA0u;
    SET_GPR_U32(ctx, 31, 0x1B9AA8u);
    ctx->pc = 0x1B9BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9BD0u, 0x1B9AA0u, 0x1B9AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9AA8u;
label_1b9aa8:
    // 0x1b9aa8: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1b9aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b9aac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1b9aacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9ab0: 0xc06e6b4  jal         func_1B9AD0
    ctx->pc = 0x1B9AB0u;
    SET_GPR_U32(ctx, 31, 0x1B9AB8u);
    ctx->pc = 0x1B9AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9AD0u, 0x1B9AB0u, 0x1B9AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9AB8u;
label_1b9ab8:
    // 0x1b9ab8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1b9ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b9abc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b9abcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b9ac0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1b9ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1b9ac4: 0x3e00008  jr          $ra
    ctx->pc = 0x1B9AC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B9AC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B9ACCu;
    // 0x1b9acc: 0x0  nop
    ctx->pc = 0x1b9accu;
    // NOP
    ctx->pc = 0x1b9ad0u;
}
