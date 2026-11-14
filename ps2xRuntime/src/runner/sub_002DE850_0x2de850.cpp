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

// Function: sub_002DE850
// Address: 0x2de850 - 0x2de8a0
void sub_002DE850_0x2de850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DE850_0x2de850");
#endif

    switch (ctx->pc) {
        case 0x2de870u: goto label_2de870;
        case 0x2de888u: goto label_2de888;
        default: break;
    }

    ctx->pc = 0x2de850u;

    // 0x2de850: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2de850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2de854: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2de854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2de858: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2de858u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2de85c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x2de85cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x2de860: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x2de860u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x2de864: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x2de864u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x2de868: 0xc0b7a60  jal         func_2DE980
    ctx->pc = 0x2DE868u;
    SET_GPR_U32(ctx, 31, 0x2DE870u);
    ctx->pc = 0x2DE980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE980u, 0x2DE868u, 0x2DE870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE870u;
label_2de870:
    // 0x2de870: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2de870u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2de874: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x2de874u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2de878: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x2de878u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2de87c: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x2de87cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x2de880: 0xc0b7a28  jal         func_2DE8A0
    ctx->pc = 0x2DE880u;
    SET_GPR_U32(ctx, 31, 0x2DE888u);
    ctx->pc = 0x2DE8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE8A0u, 0x2DE880u, 0x2DE888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE888u;
label_2de888:
    // 0x2de888: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2de888u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2de88c: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x2de88cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2de890: 0x3e00008  jr          $ra
    ctx->pc = 0x2DE890u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DE890u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DE898u;
    // 0x2de898: 0x0  nop
    ctx->pc = 0x2de898u;
    // NOP
    // 0x2de89c: 0x0  nop
    ctx->pc = 0x2de89cu;
    // NOP
    ctx->pc = 0x2de8a0u;
}
