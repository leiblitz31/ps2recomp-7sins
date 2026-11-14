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

// Function: sub_0038A640
// Address: 0x38a640 - 0x38a660
void sub_0038A640_0x38a640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038A640_0x38a640");
#endif

    switch (ctx->pc) {
        case 0x38a650u: goto label_38a650;
        default: break;
    }

    ctx->pc = 0x38a640u;

    // 0x38a640: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x38a640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x38a644: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x38a644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x38a648: 0xc0e27ae  jal         func_389EB8
    ctx->pc = 0x38A648u;
    SET_GPR_U32(ctx, 31, 0x38A650u);
    ctx->pc = 0x389EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389EB8u, 0x38A648u, 0x38A650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38A650u;
label_38a650:
    // 0x38a650: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38a650u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38a654: 0x3e00008  jr          $ra
    ctx->pc = 0x38A654u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38A658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A654u;
        // 0x38a658: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38A654u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38A65Cu;
    // 0x38a65c: 0x0  nop
    ctx->pc = 0x38a65cu;
    // NOP
    ctx->pc = 0x38a660u;
}
