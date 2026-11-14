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

// Function: sub_002816D0
// Address: 0x2816d0 - 0x281720
void sub_002816D0_0x2816d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002816D0_0x2816d0");
#endif

    switch (ctx->pc) {
        case 0x2816f8u: goto label_2816f8;
        case 0x28170cu: goto label_28170c;
        default: break;
    }

    ctx->pc = 0x2816d0u;

    // 0x2816d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2816d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2816d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2816d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2816d8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2816d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2816dc: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x2816dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x2816e0: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x2816e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x2816e4: 0x27a40018  addiu       $a0, $sp, 0x18
    ctx->pc = 0x2816e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x2816e8: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x2816e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2816ec: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x2816ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2816f0: 0xc0a0b50  jal         func_282D40
    ctx->pc = 0x2816F0u;
    SET_GPR_U32(ctx, 31, 0x2816F8u);
    ctx->pc = 0x282D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282D40u, 0x2816F0u, 0x2816F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2816F8u;
label_2816f8:
    // 0x2816f8: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2816f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2816fc: 0x27a50018  addiu       $a1, $sp, 0x18
    ctx->pc = 0x2816fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x281700: 0x27a6001c  addiu       $a2, $sp, 0x1C
    ctx->pc = 0x281700u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x281704: 0xc0a05c8  jal         func_281720
    ctx->pc = 0x281704u;
    SET_GPR_U32(ctx, 31, 0x28170Cu);
    ctx->pc = 0x281720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281720u, 0x281704u, 0x28170Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28170Cu;
label_28170c:
    // 0x28170c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28170cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x281710: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x281710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x281714: 0x3e00008  jr          $ra
    ctx->pc = 0x281714u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x281714u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28171Cu;
    // 0x28171c: 0x0  nop
    ctx->pc = 0x28171cu;
    // NOP
    ctx->pc = 0x281720u;
}
