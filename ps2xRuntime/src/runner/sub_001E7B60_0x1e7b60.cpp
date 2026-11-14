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

// Function: sub_001E7B60
// Address: 0x1e7b60 - 0x1e7bc0
void sub_001E7B60_0x1e7b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E7B60_0x1e7b60");
#endif

    switch (ctx->pc) {
        case 0x1e7b7cu: goto label_1e7b7c;
        case 0x1e7b8cu: goto label_1e7b8c;
        default: break;
    }

    ctx->pc = 0x1e7b60u;

    // 0x1e7b60: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1e7b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1e7b64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e7b64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e7b68: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1e7b68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1e7b6c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1e7b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1e7b70: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x1e7b70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x1e7b74: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1E7B74u;
    {
        const bool branch_taken_0x1e7b74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e7b74) {
            ctx->pc = 0x1E7B98u;
            goto label_1e7b98;
        }
    }
    ctx->pc = 0x1E7B7Cu;
label_1e7b7c:
    // 0x1e7b7c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1e7b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e7b80: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x1e7b80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e7b84: 0xc078cc8  jal         func_1E3320
    ctx->pc = 0x1E7B84u;
    SET_GPR_U32(ctx, 31, 0x1E7B8Cu);
    ctx->pc = 0x1E3320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3320u, 0x1E7B84u, 0x1E7B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7B8Cu;
label_1e7b8c:
    // 0x1e7b8c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1e7b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e7b90: 0x24630014  addiu       $v1, $v1, 0x14
    ctx->pc = 0x1e7b90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x1e7b94: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x1e7b94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_1e7b98:
    // 0x1e7b98: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1e7b98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e7b9c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1e7b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e7ba0: 0x1483fff6  bne         $a0, $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x1E7BA0u;
    {
        const bool branch_taken_0x1e7ba0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e7ba0) {
            ctx->pc = 0x1E7B7Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e7b7c;
        }
    }
    ctx->pc = 0x1E7BA8u;
    // 0x1e7ba8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e7ba8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e7bac: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1e7bacu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1e7bb0: 0x3e00008  jr          $ra
    ctx->pc = 0x1E7BB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E7BB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E7BB8u;
    // 0x1e7bb8: 0x0  nop
    ctx->pc = 0x1e7bb8u;
    // NOP
    // 0x1e7bbc: 0x0  nop
    ctx->pc = 0x1e7bbcu;
    // NOP
    ctx->pc = 0x1e7bc0u;
}
