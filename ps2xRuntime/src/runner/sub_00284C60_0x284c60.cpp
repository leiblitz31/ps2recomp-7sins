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

// Function: sub_00284C60
// Address: 0x284c60 - 0x284cb0
void sub_00284C60_0x284c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00284C60_0x284c60");
#endif

    switch (ctx->pc) {
        case 0x284c78u: goto label_284c78;
        case 0x284c84u: goto label_284c84;
        default: break;
    }

    ctx->pc = 0x284c60u;

    // 0x284c60: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x284c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x284c64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x284c64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x284c68: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x284c68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x284c6c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x284c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x284c70: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x284C70u;
    {
        const bool branch_taken_0x284c70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x284c70) {
            ctx->pc = 0x284C90u;
            goto label_284c90;
        }
    }
    ctx->pc = 0x284C78u;
label_284c78:
    // 0x284c78: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x284c78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x284c7c: 0xc0a132c  jal         func_284CB0
    ctx->pc = 0x284C7Cu;
    SET_GPR_U32(ctx, 31, 0x284C84u);
    ctx->pc = 0x284CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284CB0u, 0x284C7Cu, 0x284C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284C84u;
label_284c84:
    // 0x284c84: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x284c84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x284c88: 0x24630018  addiu       $v1, $v1, 0x18
    ctx->pc = 0x284c88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
    // 0x284c8c: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x284c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_284c90:
    // 0x284c90: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x284c90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x284c94: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x284c94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x284c98: 0x1483fff7  bne         $a0, $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x284C98u;
    {
        const bool branch_taken_0x284c98 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x284c98) {
            ctx->pc = 0x284C78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_284c78;
        }
    }
    ctx->pc = 0x284CA0u;
    // 0x284ca0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x284ca0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x284ca4: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x284ca4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x284ca8: 0x3e00008  jr          $ra
    ctx->pc = 0x284CA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x284CA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x284CB0u;
}
