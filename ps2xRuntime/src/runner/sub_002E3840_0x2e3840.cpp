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

// Function: sub_002E3840
// Address: 0x2e3840 - 0x2e38b0
void sub_002E3840_0x2e3840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E3840_0x2e3840");
#endif

    switch (ctx->pc) {
        case 0x2e3860u: goto label_2e3860;
        case 0x2e386cu: goto label_2e386c;
        case 0x2e3878u: goto label_2e3878;
        case 0x2e388cu: goto label_2e388c;
        default: break;
    }

    ctx->pc = 0x2e3840u;

    // 0x2e3840: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e3840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2e3844: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2e3844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2e3848: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e3848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e384c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2e384cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2e3850: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2e3850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e3854: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x2e3854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2e3858: 0xc0b4c3c  jal         func_2D30F0
    ctx->pc = 0x2E3858u;
    SET_GPR_U32(ctx, 31, 0x2E3860u);
    ctx->pc = 0x2D30F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D30F0u, 0x2E3858u, 0x2E3860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3860u;
label_2e3860:
    // 0x2e3860: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e3860u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3864: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2E3864u;
    {
        const bool branch_taken_0x2e3864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e3864) {
            ctx->pc = 0x2E387Cu;
            goto label_2e387c;
        }
    }
    ctx->pc = 0x2E386Cu;
label_2e386c:
    // 0x2e386c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2e386cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2e3870: 0xc0b9f88  jal         func_2E7E20
    ctx->pc = 0x2E3870u;
    SET_GPR_U32(ctx, 31, 0x2E3878u);
    ctx->pc = 0x2E7E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E7E20u, 0x2E3870u, 0x2E3878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3878u;
label_2e3878:
    // 0x2e3878: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2e3878u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_2e387c:
    // 0x2e387c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2e387cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e3880: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x2e3880u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2e3884: 0xc0b8e08  jal         func_2E3820
    ctx->pc = 0x2E3884u;
    SET_GPR_U32(ctx, 31, 0x2E388Cu);
    ctx->pc = 0x2E3820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3820u, 0x2E3884u, 0x2E388Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E388Cu;
label_2e388c:
    // 0x2e388c: 0x1602fff7  bne         $s0, $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2E388Cu;
    {
        const bool branch_taken_0x2e388c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x2e388c) {
            ctx->pc = 0x2E386Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e386c;
        }
    }
    ctx->pc = 0x2E3894u;
    // 0x2e3894: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2e3894u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e3898: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e3898u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e389c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2e389cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2e38a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2E38A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E38A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E38A8u;
    // 0x2e38a8: 0x0  nop
    ctx->pc = 0x2e38a8u;
    // NOP
    // 0x2e38ac: 0x0  nop
    ctx->pc = 0x2e38acu;
    // NOP
    ctx->pc = 0x2e38b0u;
}
