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

// Function: sub_00258750
// Address: 0x258750 - 0x258790
void sub_00258750_0x258750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00258750_0x258750");
#endif

    switch (ctx->pc) {
        case 0x258778u: goto label_258778;
        default: break;
    }

    ctx->pc = 0x258750u;

    // 0x258750: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x258750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x258754: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x258754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x258758: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x258758u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x25875c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x25875cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x258760: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x258760u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x258764: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x258764u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x258768: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x258768u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25876c: 0x27a6001c  addiu       $a2, $sp, 0x1C
    ctx->pc = 0x25876cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x258770: 0xc0961e4  jal         func_258790
    ctx->pc = 0x258770u;
    SET_GPR_U32(ctx, 31, 0x258778u);
    ctx->pc = 0x258790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258790u, 0x258770u, 0x258778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258778u;
label_258778:
    // 0x258778: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x258778u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25877c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x25877cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x258780: 0x3e00008  jr          $ra
    ctx->pc = 0x258780u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x258780u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x258788u;
    // 0x258788: 0x0  nop
    ctx->pc = 0x258788u;
    // NOP
    // 0x25878c: 0x0  nop
    ctx->pc = 0x25878cu;
    // NOP
    ctx->pc = 0x258790u;
}
