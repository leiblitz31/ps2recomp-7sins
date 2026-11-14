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

// Function: sub_00242990
// Address: 0x242990 - 0x2429d0
void sub_00242990_0x242990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00242990_0x242990");
#endif

    switch (ctx->pc) {
        case 0x2429a8u: goto label_2429a8;
        case 0x2429b8u: goto label_2429b8;
        default: break;
    }

    ctx->pc = 0x242990u;

    // 0x242990: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x242990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x242994: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x242994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x242998: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x242998u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x24299c: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x24299cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x2429a0: 0xc090ab4  jal         func_242AD0
    ctx->pc = 0x2429A0u;
    SET_GPR_U32(ctx, 31, 0x2429A8u);
    ctx->pc = 0x242AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242AD0u, 0x2429A0u, 0x2429A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2429A8u;
label_2429a8:
    // 0x2429a8: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2429a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2429ac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2429acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2429b0: 0xc090a74  jal         func_2429D0
    ctx->pc = 0x2429B0u;
    SET_GPR_U32(ctx, 31, 0x2429B8u);
    ctx->pc = 0x2429D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2429D0u, 0x2429B0u, 0x2429B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2429B8u;
label_2429b8:
    // 0x2429b8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2429b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2429bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2429bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2429c0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2429c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2429c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2429C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2429C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2429CCu;
    // 0x2429cc: 0x0  nop
    ctx->pc = 0x2429ccu;
    // NOP
    ctx->pc = 0x2429d0u;
}
