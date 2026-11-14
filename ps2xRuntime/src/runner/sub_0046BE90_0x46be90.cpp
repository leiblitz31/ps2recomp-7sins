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

// Function: sub_0046BE90
// Address: 0x46be90 - 0x46bed0
void sub_0046BE90_0x46be90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046BE90_0x46be90");
#endif

    switch (ctx->pc) {
        case 0x46beb8u: goto label_46beb8;
        default: break;
    }

    ctx->pc = 0x46be90u;

    // 0x46be90: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x46be90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x46be94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x46be94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x46be98: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x46be98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x46be9c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x46be9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x46bea0: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x46bea0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x46bea4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x46bea4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x46bea8: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x46bea8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x46beac: 0x27a6001c  addiu       $a2, $sp, 0x1C
    ctx->pc = 0x46beacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x46beb0: 0xc11afb4  jal         func_46BED0
    ctx->pc = 0x46BEB0u;
    SET_GPR_U32(ctx, 31, 0x46BEB8u);
    ctx->pc = 0x46BED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46BED0u, 0x46BEB0u, 0x46BEB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46BEB8u;
label_46beb8:
    // 0x46beb8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x46beb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x46bebc: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x46bebcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x46bec0: 0x3e00008  jr          $ra
    ctx->pc = 0x46BEC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46BEC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46BEC8u;
    // 0x46bec8: 0x0  nop
    ctx->pc = 0x46bec8u;
    // NOP
    // 0x46becc: 0x0  nop
    ctx->pc = 0x46beccu;
    // NOP
    ctx->pc = 0x46bed0u;
}
