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

// Function: sub_0023C2D0
// Address: 0x23c2d0 - 0x23c310
void sub_0023C2D0_0x23c2d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023C2D0_0x23c2d0");
#endif

    switch (ctx->pc) {
        case 0x23c2f8u: goto label_23c2f8;
        default: break;
    }

    ctx->pc = 0x23c2d0u;

    // 0x23c2d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x23c2d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x23c2d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23c2d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23c2d8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x23c2d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x23c2dc: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x23c2dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x23c2e0: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x23c2e0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x23c2e4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x23c2e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23c2e8: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x23c2e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23c2ec: 0x27a6001c  addiu       $a2, $sp, 0x1C
    ctx->pc = 0x23c2ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x23c2f0: 0xc08f0c4  jal         func_23C310
    ctx->pc = 0x23C2F0u;
    SET_GPR_U32(ctx, 31, 0x23C2F8u);
    ctx->pc = 0x23C310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C310u, 0x23C2F0u, 0x23C2F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C2F8u;
label_23c2f8:
    // 0x23c2f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23c2f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23c2fc: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x23c2fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x23c300: 0x3e00008  jr          $ra
    ctx->pc = 0x23C300u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23C300u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23C308u;
    // 0x23c308: 0x0  nop
    ctx->pc = 0x23c308u;
    // NOP
    // 0x23c30c: 0x0  nop
    ctx->pc = 0x23c30cu;
    // NOP
    ctx->pc = 0x23c310u;
}
