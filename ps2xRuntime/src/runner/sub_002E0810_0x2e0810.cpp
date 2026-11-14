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

// Function: sub_002E0810
// Address: 0x2e0810 - 0x2e0840
void sub_002E0810_0x2e0810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E0810_0x2e0810");
#endif

    switch (ctx->pc) {
        case 0x2e0828u: goto label_2e0828;
        default: break;
    }

    ctx->pc = 0x2e0810u;

    // 0x2e0810: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e0810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e0814: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e0814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e0818: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2e0818u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2e081c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2e081cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e0820: 0xc0b8210  jal         func_2E0840
    ctx->pc = 0x2E0820u;
    SET_GPR_U32(ctx, 31, 0x2E0828u);
    ctx->pc = 0x2E0840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0840u, 0x2E0820u, 0x2E0828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0828u;
label_2e0828:
    // 0x2e0828: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e0828u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e082c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2e082cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2e0830: 0x3e00008  jr          $ra
    ctx->pc = 0x2E0830u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E0830u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E0838u;
    // 0x2e0838: 0x0  nop
    ctx->pc = 0x2e0838u;
    // NOP
    // 0x2e083c: 0x0  nop
    ctx->pc = 0x2e083cu;
    // NOP
    ctx->pc = 0x2e0840u;
}
