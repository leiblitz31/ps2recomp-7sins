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

// Function: sub_0028E640
// Address: 0x28e640 - 0x28e680
void sub_0028E640_0x28e640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028E640_0x28e640");
#endif

    switch (ctx->pc) {
        case 0x28e670u: goto label_28e670;
        default: break;
    }

    ctx->pc = 0x28e640u;

    // 0x28e640: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x28e640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x28e644: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28e644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28e648: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x28e648u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x28e64c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x28e64cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x28e650: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x28e650u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x28e654: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x28e654u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x28e658: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x28e658u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28e65c: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x28e65cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28e660: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x28e660u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28e664: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x28e664u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x28e668: 0xc0a3958  jal         func_28E560
    ctx->pc = 0x28E668u;
    SET_GPR_U32(ctx, 31, 0x28E670u);
    ctx->pc = 0x28E560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E560u, 0x28E668u, 0x28E670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E670u;
label_28e670:
    // 0x28e670: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28e670u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28e674: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x28e674u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x28e678: 0x3e00008  jr          $ra
    ctx->pc = 0x28E678u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28E678u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28E680u;
}
