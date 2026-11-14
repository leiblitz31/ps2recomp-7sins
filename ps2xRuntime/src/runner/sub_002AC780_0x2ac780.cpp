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

// Function: sub_002AC780
// Address: 0x2ac780 - 0x2ac7c0
void sub_002AC780_0x2ac780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AC780_0x2ac780");
#endif

    switch (ctx->pc) {
        case 0x2ac7a8u: goto label_2ac7a8;
        default: break;
    }

    ctx->pc = 0x2ac780u;

    // 0x2ac780: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2ac780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2ac784: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ac784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ac788: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2ac788u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2ac78c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x2ac78cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x2ac790: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x2ac790u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ac794: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2ac794u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ac798: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x2ac798u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ac79c: 0x27a6001c  addiu       $a2, $sp, 0x1C
    ctx->pc = 0x2ac79cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x2ac7a0: 0xc0ab1f0  jal         func_2AC7C0
    ctx->pc = 0x2AC7A0u;
    SET_GPR_U32(ctx, 31, 0x2AC7A8u);
    ctx->pc = 0x2AC7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AC7C0u, 0x2AC7A0u, 0x2AC7A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC7A8u;
label_2ac7a8:
    // 0x2ac7a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ac7a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ac7ac: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2ac7acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2ac7b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2AC7B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AC7B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AC7B8u;
    // 0x2ac7b8: 0x0  nop
    ctx->pc = 0x2ac7b8u;
    // NOP
    // 0x2ac7bc: 0x0  nop
    ctx->pc = 0x2ac7bcu;
    // NOP
    ctx->pc = 0x2ac7c0u;
}
