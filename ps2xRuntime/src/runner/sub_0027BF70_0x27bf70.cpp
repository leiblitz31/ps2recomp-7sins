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

// Function: sub_0027BF70
// Address: 0x27bf70 - 0x27bfa0
void sub_0027BF70_0x27bf70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027BF70_0x27bf70");
#endif

    switch (ctx->pc) {
        case 0x27bf88u: goto label_27bf88;
        default: break;
    }

    ctx->pc = 0x27bf70u;

    // 0x27bf70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x27bf70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x27bf74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x27bf74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27bf78: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x27bf78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x27bf7c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x27bf7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27bf80: 0xc09e578  jal         func_2795E0
    ctx->pc = 0x27BF80u;
    SET_GPR_U32(ctx, 31, 0x27BF88u);
    ctx->pc = 0x2795E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2795E0u, 0x27BF80u, 0x27BF88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BF88u;
label_27bf88:
    // 0x27bf88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27bf88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27bf8c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x27bf8cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x27bf90: 0x3e00008  jr          $ra
    ctx->pc = 0x27BF90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27BF90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27BF98u;
    // 0x27bf98: 0x0  nop
    ctx->pc = 0x27bf98u;
    // NOP
    // 0x27bf9c: 0x0  nop
    ctx->pc = 0x27bf9cu;
    // NOP
    ctx->pc = 0x27bfa0u;
}
