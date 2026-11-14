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

// Function: sub_00466960
// Address: 0x466960 - 0x4669a0
void sub_00466960_0x466960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00466960_0x466960");
#endif

    switch (ctx->pc) {
        case 0x466988u: goto label_466988;
        default: break;
    }

    ctx->pc = 0x466960u;

    // 0x466960: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x466960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x466964: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x466964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x466968: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x466968u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x46696c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x46696cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x466970: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x466970u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x466974: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x466974u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x466978: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x466978u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x46697c: 0x27a6001c  addiu       $a2, $sp, 0x1C
    ctx->pc = 0x46697cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x466980: 0xc119a68  jal         func_4669A0
    ctx->pc = 0x466980u;
    SET_GPR_U32(ctx, 31, 0x466988u);
    ctx->pc = 0x4669A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4669A0u, 0x466980u, 0x466988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x466988u;
label_466988:
    // 0x466988: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x466988u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x46698c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x46698cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x466990: 0x3e00008  jr          $ra
    ctx->pc = 0x466990u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x466990u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x466998u;
    // 0x466998: 0x0  nop
    ctx->pc = 0x466998u;
    // NOP
    // 0x46699c: 0x0  nop
    ctx->pc = 0x46699cu;
    // NOP
    ctx->pc = 0x4669a0u;
}
