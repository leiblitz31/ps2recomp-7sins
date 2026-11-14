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

// Function: sub_0014AF70
// Address: 0x14af70 - 0x14afa0
void sub_0014AF70_0x14af70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014AF70_0x14af70");
#endif

    switch (ctx->pc) {
        case 0x14af88u: goto label_14af88;
        default: break;
    }

    ctx->pc = 0x14af70u;

    // 0x14af70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14af70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14af74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14af74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14af78: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x14af78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x14af7c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x14af7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14af80: 0xc0528b8  jal         func_14A2E0
    ctx->pc = 0x14AF80u;
    SET_GPR_U32(ctx, 31, 0x14AF88u);
    ctx->pc = 0x14A2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A2E0u, 0x14AF80u, 0x14AF88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AF88u;
label_14af88:
    // 0x14af88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14af88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14af8c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x14af8cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x14af90: 0x3e00008  jr          $ra
    ctx->pc = 0x14AF90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14AF90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14AF98u;
    // 0x14af98: 0x0  nop
    ctx->pc = 0x14af98u;
    // NOP
    // 0x14af9c: 0x0  nop
    ctx->pc = 0x14af9cu;
    // NOP
    ctx->pc = 0x14afa0u;
}
