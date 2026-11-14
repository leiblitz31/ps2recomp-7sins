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

// Function: sub_0046CF10
// Address: 0x46cf10 - 0x46cf60
void sub_0046CF10_0x46cf10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046CF10_0x46cf10");
#endif

    switch (ctx->pc) {
        case 0x46cf44u: goto label_46cf44;
        default: break;
    }

    ctx->pc = 0x46cf10u;

    // 0x46cf10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x46cf10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x46cf14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x46cf14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x46cf18: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x46cf18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x46cf1c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x46cf1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x46cf20: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x46cf20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x46cf24: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x46cf24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x46cf28: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x46CF28u;
    {
        const bool branch_taken_0x46cf28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x46cf28) {
            ctx->pc = 0x46CF4Cu;
            goto label_46cf4c;
        }
    }
    ctx->pc = 0x46CF30u;
    // 0x46cf30: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x46cf30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46cf34: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x46cf34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x46cf38: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x46cf38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x46cf3c: 0xc11b170  jal         func_46C5C0
    ctx->pc = 0x46CF3Cu;
    SET_GPR_U32(ctx, 31, 0x46CF44u);
    ctx->pc = 0x46C5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46C5C0u, 0x46CF3Cu, 0x46CF44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46CF44u;
label_46cf44:
    // 0x46cf44: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x46CF44u;
    {
        const bool branch_taken_0x46cf44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x46cf44) {
            ctx->pc = 0x46CF50u;
            goto label_46cf50;
        }
    }
    ctx->pc = 0x46CF4Cu;
label_46cf4c:
    // 0x46cf4c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x46cf4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_46cf50:
    // 0x46cf50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x46cf50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x46cf54: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x46cf54u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x46cf58: 0x3e00008  jr          $ra
    ctx->pc = 0x46CF58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46CF58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46CF60u;
}
