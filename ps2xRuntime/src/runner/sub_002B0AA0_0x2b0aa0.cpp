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

// Function: sub_002B0AA0
// Address: 0x2b0aa0 - 0x2b0ae0
void sub_002B0AA0_0x2b0aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B0AA0_0x2b0aa0");
#endif

    switch (ctx->pc) {
        case 0x2b0accu: goto label_2b0acc;
        default: break;
    }

    ctx->pc = 0x2b0aa0u;

    // 0x2b0aa0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2b0aa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2b0aa4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b0aa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b0aa8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2b0aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2b0aac: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x2b0aacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x2b0ab0: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x2b0ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x2b0ab4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2b0ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b0ab8: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x2b0ab8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b0abc: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x2b0abcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b0ac0: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x2b0ac0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x2b0ac4: 0xc0ac2b8  jal         func_2B0AE0
    ctx->pc = 0x2B0AC4u;
    SET_GPR_U32(ctx, 31, 0x2B0ACCu);
    ctx->pc = 0x2B0AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B0AE0u, 0x2B0AC4u, 0x2B0ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0ACCu;
label_2b0acc:
    // 0x2b0acc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b0accu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b0ad0: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2b0ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2b0ad4: 0x3e00008  jr          $ra
    ctx->pc = 0x2B0AD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B0AD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B0ADCu;
    // 0x2b0adc: 0x0  nop
    ctx->pc = 0x2b0adcu;
    // NOP
    ctx->pc = 0x2b0ae0u;
}
