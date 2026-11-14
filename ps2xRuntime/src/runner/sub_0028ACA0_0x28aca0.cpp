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

// Function: sub_0028ACA0
// Address: 0x28aca0 - 0x28acf0
void sub_0028ACA0_0x28aca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028ACA0_0x28aca0");
#endif

    switch (ctx->pc) {
        case 0x28acc8u: goto label_28acc8;
        case 0x28acdcu: goto label_28acdc;
        default: break;
    }

    ctx->pc = 0x28aca0u;

    // 0x28aca0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x28aca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x28aca4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28aca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28aca8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x28aca8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x28acac: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x28acacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x28acb0: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x28acb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x28acb4: 0x27a40018  addiu       $a0, $sp, 0x18
    ctx->pc = 0x28acb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x28acb8: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x28acb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28acbc: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x28acbcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28acc0: 0xc0a3cb4  jal         func_28F2D0
    ctx->pc = 0x28ACC0u;
    SET_GPR_U32(ctx, 31, 0x28ACC8u);
    ctx->pc = 0x28F2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F2D0u, 0x28ACC0u, 0x28ACC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28ACC8u;
label_28acc8:
    // 0x28acc8: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x28acc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28accc: 0x27a50018  addiu       $a1, $sp, 0x18
    ctx->pc = 0x28acccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x28acd0: 0x27a6001c  addiu       $a2, $sp, 0x1C
    ctx->pc = 0x28acd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x28acd4: 0xc0a2b3c  jal         func_28ACF0
    ctx->pc = 0x28ACD4u;
    SET_GPR_U32(ctx, 31, 0x28ACDCu);
    ctx->pc = 0x28ACF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28ACF0u, 0x28ACD4u, 0x28ACDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28ACDCu;
label_28acdc:
    // 0x28acdc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28acdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28ace0: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x28ace0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x28ace4: 0x3e00008  jr          $ra
    ctx->pc = 0x28ACE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28ACE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28ACECu;
    // 0x28acec: 0x0  nop
    ctx->pc = 0x28acecu;
    // NOP
    ctx->pc = 0x28acf0u;
}
