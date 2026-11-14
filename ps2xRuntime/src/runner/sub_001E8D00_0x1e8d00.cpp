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

// Function: sub_001E8D00
// Address: 0x1e8d00 - 0x1e8d40
void sub_001E8D00_0x1e8d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E8D00_0x1e8d00");
#endif

    switch (ctx->pc) {
        case 0x1e8d30u: goto label_1e8d30;
        default: break;
    }

    ctx->pc = 0x1e8d00u;

    // 0x1e8d00: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1e8d00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1e8d04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e8d04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e8d08: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1e8d08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1e8d0c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x1e8d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x1e8d10: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x1e8d10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x1e8d14: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1e8d14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e8d18: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x1e8d18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e8d1c: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x1e8d1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e8d20: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x1e8d20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x1e8d24: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1e8d24u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8d28: 0xc07a350  jal         func_1E8D40
    ctx->pc = 0x1E8D28u;
    SET_GPR_U32(ctx, 31, 0x1E8D30u);
    ctx->pc = 0x1E8D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8D40u, 0x1E8D28u, 0x1E8D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8D30u;
label_1e8d30:
    // 0x1e8d30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e8d30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e8d34: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x1e8d34u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1e8d38: 0x3e00008  jr          $ra
    ctx->pc = 0x1E8D38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E8D38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E8D40u;
}
