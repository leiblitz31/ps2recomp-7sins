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

// Function: sub_001AEF60
// Address: 0x1aef60 - 0x1aefb0
void sub_001AEF60_0x1aef60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AEF60_0x1aef60");
#endif

    switch (ctx->pc) {
        case 0x1aef78u: goto label_1aef78;
        case 0x1aef84u: goto label_1aef84;
        default: break;
    }

    ctx->pc = 0x1aef60u;

    // 0x1aef60: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1aef60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1aef64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1aef64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1aef68: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1aef68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1aef6c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1aef6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1aef70: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1AEF70u;
    {
        const bool branch_taken_0x1aef70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aef70) {
            ctx->pc = 0x1AEF90u;
            goto label_1aef90;
        }
    }
    ctx->pc = 0x1AEF78u;
label_1aef78:
    // 0x1aef78: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1aef78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1aef7c: 0xc06bbec  jal         func_1AEFB0
    ctx->pc = 0x1AEF7Cu;
    SET_GPR_U32(ctx, 31, 0x1AEF84u);
    ctx->pc = 0x1AEFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEFB0u, 0x1AEF7Cu, 0x1AEF84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEF84u;
label_1aef84:
    // 0x1aef84: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1aef84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1aef88: 0x2463000c  addiu       $v1, $v1, 0xC
    ctx->pc = 0x1aef88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x1aef8c: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x1aef8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_1aef90:
    // 0x1aef90: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1aef90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1aef94: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1aef94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1aef98: 0x1483fff7  bne         $a0, $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1AEF98u;
    {
        const bool branch_taken_0x1aef98 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1aef98) {
            ctx->pc = 0x1AEF78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1aef78;
        }
    }
    ctx->pc = 0x1AEFA0u;
    // 0x1aefa0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1aefa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1aefa4: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1aefa4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1aefa8: 0x3e00008  jr          $ra
    ctx->pc = 0x1AEFA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AEFA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AEFB0u;
}
