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

// Function: sub_001A0E70
// Address: 0x1a0e70 - 0x1a0eb0
void sub_001A0E70_0x1a0e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A0E70_0x1a0e70");
#endif

    switch (ctx->pc) {
        case 0x1a0ea0u: goto label_1a0ea0;
        default: break;
    }

    ctx->pc = 0x1a0e70u;

    // 0x1a0e70: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1a0e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1a0e74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a0e74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a0e78: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1a0e78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1a0e7c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1a0e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1a0e80: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x1a0e80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x1a0e84: 0xafa70040  sw          $a3, 0x40($sp)
    ctx->pc = 0x1a0e84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 7));
    // 0x1a0e88: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1a0e88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a0e8c: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1a0e8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a0e90: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x1a0e90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a0e94: 0x8fa70040  lw          $a3, 0x40($sp)
    ctx->pc = 0x1a0e94u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a0e98: 0xc0684ec  jal         func_1A13B0
    ctx->pc = 0x1A0E98u;
    SET_GPR_U32(ctx, 31, 0x1A0EA0u);
    ctx->pc = 0x1A13B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A13B0u, 0x1A0E98u, 0x1A0EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0EA0u;
label_1a0ea0:
    // 0x1a0ea0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a0ea0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a0ea4: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1a0ea4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1a0ea8: 0x3e00008  jr          $ra
    ctx->pc = 0x1A0EA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A0EA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A0EB0u;
}
