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

// Function: sub_00194F70
// Address: 0x194f70 - 0x194fc0
void sub_00194F70_0x194f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00194F70_0x194f70");
#endif

    switch (ctx->pc) {
        case 0x194f88u: goto label_194f88;
        case 0x194f94u: goto label_194f94;
        default: break;
    }

    ctx->pc = 0x194f70u;

    // 0x194f70: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x194f70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x194f74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x194f74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x194f78: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x194f78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x194f7c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x194f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x194f80: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x194F80u;
    {
        const bool branch_taken_0x194f80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x194f80) {
            ctx->pc = 0x194FA0u;
            goto label_194fa0;
        }
    }
    ctx->pc = 0x194F88u;
label_194f88:
    // 0x194f88: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x194f88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x194f8c: 0xc0653f0  jal         func_194FC0
    ctx->pc = 0x194F8Cu;
    SET_GPR_U32(ctx, 31, 0x194F94u);
    ctx->pc = 0x194FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x194FC0u, 0x194F8Cu, 0x194F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194F94u;
label_194f94:
    // 0x194f94: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x194f94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x194f98: 0x24630038  addiu       $v1, $v1, 0x38
    ctx->pc = 0x194f98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 56));
    // 0x194f9c: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x194f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_194fa0:
    // 0x194fa0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x194fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x194fa4: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x194fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x194fa8: 0x1483fff7  bne         $a0, $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x194FA8u;
    {
        const bool branch_taken_0x194fa8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x194fa8) {
            ctx->pc = 0x194F88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_194f88;
        }
    }
    ctx->pc = 0x194FB0u;
    // 0x194fb0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x194fb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x194fb4: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x194fb4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x194fb8: 0x3e00008  jr          $ra
    ctx->pc = 0x194FB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x194FB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x194FC0u;
}
