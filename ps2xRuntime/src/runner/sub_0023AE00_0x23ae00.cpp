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

// Function: sub_0023AE00
// Address: 0x23ae00 - 0x23ae40
void sub_0023AE00_0x23ae00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023AE00_0x23ae00");
#endif

    switch (ctx->pc) {
        case 0x23ae18u: goto label_23ae18;
        case 0x23ae28u: goto label_23ae28;
        default: break;
    }

    ctx->pc = 0x23ae00u;

    // 0x23ae00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x23ae00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23ae04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23ae04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23ae08: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x23ae08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x23ae0c: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x23ae0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x23ae10: 0xc08ebd0  jal         func_23AF40
    ctx->pc = 0x23AE10u;
    SET_GPR_U32(ctx, 31, 0x23AE18u);
    ctx->pc = 0x23AF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23AF40u, 0x23AE10u, 0x23AE18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23AE18u;
label_23ae18:
    // 0x23ae18: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x23ae18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23ae1c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x23ae1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ae20: 0xc08eb90  jal         func_23AE40
    ctx->pc = 0x23AE20u;
    SET_GPR_U32(ctx, 31, 0x23AE28u);
    ctx->pc = 0x23AE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23AE40u, 0x23AE20u, 0x23AE28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23AE28u;
label_23ae28:
    // 0x23ae28: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x23ae28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23ae2c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23ae2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23ae30: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x23ae30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x23ae34: 0x3e00008  jr          $ra
    ctx->pc = 0x23AE34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23AE34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23AE3Cu;
    // 0x23ae3c: 0x0  nop
    ctx->pc = 0x23ae3cu;
    // NOP
    ctx->pc = 0x23ae40u;
}
