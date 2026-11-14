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

// Function: sub_0017B810
// Address: 0x17b810 - 0x17b850
void sub_0017B810_0x17b810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017B810_0x17b810");
#endif

    switch (ctx->pc) {
        case 0x17b838u: goto label_17b838;
        default: break;
    }

    ctx->pc = 0x17b810u;

    // 0x17b810: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x17b810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x17b814: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17b814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17b818: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x17b818u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x17b81c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x17b81cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x17b820: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x17b820u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x17b824: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x17b824u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17b828: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x17b828u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17b82c: 0x27a6001c  addiu       $a2, $sp, 0x1C
    ctx->pc = 0x17b82cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x17b830: 0xc05ee14  jal         func_17B850
    ctx->pc = 0x17B830u;
    SET_GPR_U32(ctx, 31, 0x17B838u);
    ctx->pc = 0x17B850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B850u, 0x17B830u, 0x17B838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B838u;
label_17b838:
    // 0x17b838: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17b838u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17b83c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x17b83cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x17b840: 0x3e00008  jr          $ra
    ctx->pc = 0x17B840u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17B840u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17B848u;
    // 0x17b848: 0x0  nop
    ctx->pc = 0x17b848u;
    // NOP
    // 0x17b84c: 0x0  nop
    ctx->pc = 0x17b84cu;
    // NOP
    ctx->pc = 0x17b850u;
}
