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

// Function: sub_00258710
// Address: 0x258710 - 0x258750
void sub_00258710_0x258710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00258710_0x258710");
#endif

    switch (ctx->pc) {
        case 0x258734u: goto label_258734;
        default: break;
    }

    ctx->pc = 0x258710u;

    // 0x258710: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x258710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x258714: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x258714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x258718: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x258718u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x25871c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x25871cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x258720: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x258720u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x258724: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x258724u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x258728: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x258728u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25872c: 0xc0961d4  jal         func_258750
    ctx->pc = 0x25872Cu;
    SET_GPR_U32(ctx, 31, 0x258734u);
    ctx->pc = 0x258750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258750u, 0x25872Cu, 0x258734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258734u;
label_258734:
    // 0x258734: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x258734u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x258738: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x258738u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x25873c: 0x3e00008  jr          $ra
    ctx->pc = 0x25873Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25873Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x258744u;
    // 0x258744: 0x0  nop
    ctx->pc = 0x258744u;
    // NOP
    // 0x258748: 0x0  nop
    ctx->pc = 0x258748u;
    // NOP
    // 0x25874c: 0x0  nop
    ctx->pc = 0x25874cu;
    // NOP
    ctx->pc = 0x258750u;
}
