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

// Function: sub_002AC850
// Address: 0x2ac850 - 0x2ac8a0
void sub_002AC850_0x2ac850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AC850_0x2ac850");
#endif

    switch (ctx->pc) {
        case 0x2ac888u: goto label_2ac888;
        default: break;
    }

    ctx->pc = 0x2ac850u;

    // 0x2ac850: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ac850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2ac854: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ac854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ac858: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2ac858u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2ac85c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2ac85cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2ac860: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2ac860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ac864: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2ac864u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2ac868: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2ac868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ac86c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2ac86cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2ac870: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2ac870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ac874: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x2ac874u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x2ac878: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x2ac878u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ac87c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ac87cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac880: 0xc0ab228  jal         func_2AC8A0
    ctx->pc = 0x2AC880u;
    SET_GPR_U32(ctx, 31, 0x2AC888u);
    ctx->pc = 0x2AC8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AC8A0u, 0x2AC880u, 0x2AC888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC888u;
label_2ac888:
    // 0x2ac888: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2ac888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ac88c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ac88cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ac890: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2ac890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2ac894: 0x3e00008  jr          $ra
    ctx->pc = 0x2AC894u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AC894u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AC89Cu;
    // 0x2ac89c: 0x0  nop
    ctx->pc = 0x2ac89cu;
    // NOP
    ctx->pc = 0x2ac8a0u;
}
