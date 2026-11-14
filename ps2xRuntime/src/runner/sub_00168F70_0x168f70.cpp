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

// Function: sub_00168F70
// Address: 0x168f70 - 0x168fc0
void sub_00168F70_0x168f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00168F70_0x168f70");
#endif

    switch (ctx->pc) {
        case 0x168f88u: goto label_168f88;
        case 0x168f94u: goto label_168f94;
        default: break;
    }

    ctx->pc = 0x168f70u;

    // 0x168f70: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x168f70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x168f74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x168f74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x168f78: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x168f78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x168f7c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x168f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x168f80: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x168F80u;
    {
        const bool branch_taken_0x168f80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x168f80) {
            ctx->pc = 0x168FA0u;
            goto label_168fa0;
        }
    }
    ctx->pc = 0x168F88u;
label_168f88:
    // 0x168f88: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x168f88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x168f8c: 0xc05a3f0  jal         func_168FC0
    ctx->pc = 0x168F8Cu;
    SET_GPR_U32(ctx, 31, 0x168F94u);
    ctx->pc = 0x168FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x168FC0u, 0x168F8Cu, 0x168F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168F94u;
label_168f94:
    // 0x168f94: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x168f94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x168f98: 0x24630014  addiu       $v1, $v1, 0x14
    ctx->pc = 0x168f98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x168f9c: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x168f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_168fa0:
    // 0x168fa0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x168fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x168fa4: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x168fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x168fa8: 0x1483fff7  bne         $a0, $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x168FA8u;
    {
        const bool branch_taken_0x168fa8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x168fa8) {
            ctx->pc = 0x168F88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_168f88;
        }
    }
    ctx->pc = 0x168FB0u;
    // 0x168fb0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x168fb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x168fb4: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x168fb4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x168fb8: 0x3e00008  jr          $ra
    ctx->pc = 0x168FB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x168FB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x168FC0u;
}
