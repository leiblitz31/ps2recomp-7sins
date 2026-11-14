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

// Function: sub_00180630
// Address: 0x180630 - 0x180680
void sub_00180630_0x180630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00180630_0x180630");
#endif

    switch (ctx->pc) {
        case 0x180648u: goto label_180648;
        case 0x180654u: goto label_180654;
        default: break;
    }

    ctx->pc = 0x180630u;

    // 0x180630: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x180630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x180634: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x180634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x180638: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x180638u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x18063c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x18063cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x180640: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x180640u;
    {
        const bool branch_taken_0x180640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x180640) {
            ctx->pc = 0x180660u;
            goto label_180660;
        }
    }
    ctx->pc = 0x180648u;
label_180648:
    // 0x180648: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x180648u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18064c: 0xc0601a0  jal         func_180680
    ctx->pc = 0x18064Cu;
    SET_GPR_U32(ctx, 31, 0x180654u);
    ctx->pc = 0x180680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180680u, 0x18064Cu, 0x180654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180654u;
label_180654:
    // 0x180654: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x180654u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x180658: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x180658u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x18065c: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x18065cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_180660:
    // 0x180660: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x180660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x180664: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x180664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x180668: 0x1483fff7  bne         $a0, $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x180668u;
    {
        const bool branch_taken_0x180668 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x180668) {
            ctx->pc = 0x180648u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_180648;
        }
    }
    ctx->pc = 0x180670u;
    // 0x180670: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x180670u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x180674: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x180674u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x180678: 0x3e00008  jr          $ra
    ctx->pc = 0x180678u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x180678u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x180680u;
}
