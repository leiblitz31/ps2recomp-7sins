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

// Function: sub_0025CD40
// Address: 0x25cd40 - 0x25cd80
void sub_0025CD40_0x25cd40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025CD40_0x25cd40");
#endif

    switch (ctx->pc) {
        case 0x25cd70u: goto label_25cd70;
        default: break;
    }

    ctx->pc = 0x25cd40u;

    // 0x25cd40: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x25cd40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x25cd44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25cd44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25cd48: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x25cd48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x25cd4c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x25cd4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x25cd50: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x25cd50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x25cd54: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x25cd54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25cd58: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x25cd58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25cd5c: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x25cd5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25cd60: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x25cd60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x25cd64: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x25cd64u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25cd68: 0xc097360  jal         func_25CD80
    ctx->pc = 0x25CD68u;
    SET_GPR_U32(ctx, 31, 0x25CD70u);
    ctx->pc = 0x25CD80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CD80u, 0x25CD68u, 0x25CD70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CD70u;
label_25cd70:
    // 0x25cd70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25cd70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25cd74: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x25cd74u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x25cd78: 0x3e00008  jr          $ra
    ctx->pc = 0x25CD78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25CD78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25CD80u;
}
