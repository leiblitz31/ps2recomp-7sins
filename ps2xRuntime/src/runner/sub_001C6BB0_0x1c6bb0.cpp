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

// Function: sub_001C6BB0
// Address: 0x1c6bb0 - 0x1c6bf0
void sub_001C6BB0_0x1c6bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C6BB0_0x1c6bb0");
#endif

    switch (ctx->pc) {
        case 0x1c6bd8u: goto label_1c6bd8;
        default: break;
    }

    ctx->pc = 0x1c6bb0u;

    // 0x1c6bb0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1c6bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1c6bb4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c6bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c6bb8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1c6bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1c6bbc: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x1c6bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x1c6bc0: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x1c6bc0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c6bc4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1c6bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c6bc8: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x1c6bc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c6bcc: 0x27a6001c  addiu       $a2, $sp, 0x1C
    ctx->pc = 0x1c6bccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x1c6bd0: 0xc071afc  jal         func_1C6BF0
    ctx->pc = 0x1C6BD0u;
    SET_GPR_U32(ctx, 31, 0x1C6BD8u);
    ctx->pc = 0x1C6BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6BF0u, 0x1C6BD0u, 0x1C6BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6BD8u;
label_1c6bd8:
    // 0x1c6bd8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c6bd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c6bdc: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1c6bdcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1c6be0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C6BE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C6BE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C6BE8u;
    // 0x1c6be8: 0x0  nop
    ctx->pc = 0x1c6be8u;
    // NOP
    // 0x1c6bec: 0x0  nop
    ctx->pc = 0x1c6becu;
    // NOP
    ctx->pc = 0x1c6bf0u;
}
