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

// Function: sub_001E1640
// Address: 0x1e1640 - 0x1e1680
void sub_001E1640_0x1e1640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E1640_0x1e1640");
#endif

    switch (ctx->pc) {
        case 0x1e1670u: goto label_1e1670;
        default: break;
    }

    ctx->pc = 0x1e1640u;

    // 0x1e1640: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1e1640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1e1644: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e1644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e1648: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1e1648u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1e164c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1e164cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1e1650: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x1e1650u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x1e1654: 0xafa70040  sw          $a3, 0x40($sp)
    ctx->pc = 0x1e1654u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 7));
    // 0x1e1658: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1e1658u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e165c: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1e165cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e1660: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x1e1660u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e1664: 0x8fa70040  lw          $a3, 0x40($sp)
    ctx->pc = 0x1e1664u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e1668: 0xc079f94  jal         func_1E7E50
    ctx->pc = 0x1E1668u;
    SET_GPR_U32(ctx, 31, 0x1E1670u);
    ctx->pc = 0x1E7E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7E50u, 0x1E1668u, 0x1E1670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1670u;
label_1e1670:
    // 0x1e1670: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e1670u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e1674: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1e1674u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1e1678: 0x3e00008  jr          $ra
    ctx->pc = 0x1E1678u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E1678u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E1680u;
}
