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

// Function: sub_0010C270
// Address: 0x10c270 - 0x10c2c0
void sub_0010C270_0x10c270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010C270_0x10c270");
#endif

    switch (ctx->pc) {
        case 0x10c288u: goto label_10c288;
        case 0x10c294u: goto label_10c294;
        default: break;
    }

    ctx->pc = 0x10c270u;

    // 0x10c270: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x10c270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x10c274: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10c274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10c278: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x10c278u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x10c27c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x10c27cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x10c280: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x10C280u;
    {
        const bool branch_taken_0x10c280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10c280) {
            ctx->pc = 0x10C2A0u;
            goto label_10c2a0;
        }
    }
    ctx->pc = 0x10C288u;
label_10c288:
    // 0x10c288: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x10c288u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10c28c: 0xc042728  jal         func_109CA0
    ctx->pc = 0x10C28Cu;
    SET_GPR_U32(ctx, 31, 0x10C294u);
    ctx->pc = 0x109CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109CA0u, 0x10C28Cu, 0x10C294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C294u;
label_10c294:
    // 0x10c294: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x10c294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10c298: 0x2463000c  addiu       $v1, $v1, 0xC
    ctx->pc = 0x10c298u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x10c29c: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x10c29cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_10c2a0:
    // 0x10c2a0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x10c2a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10c2a4: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x10c2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10c2a8: 0x1483fff7  bne         $a0, $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x10C2A8u;
    {
        const bool branch_taken_0x10c2a8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x10c2a8) {
            ctx->pc = 0x10C288u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10c288;
        }
    }
    ctx->pc = 0x10C2B0u;
    // 0x10c2b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10c2b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10c2b4: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x10c2b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x10c2b8: 0x3e00008  jr          $ra
    ctx->pc = 0x10C2B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10C2B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10C2C0u;
}
