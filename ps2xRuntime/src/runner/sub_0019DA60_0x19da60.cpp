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

// Function: sub_0019DA60
// Address: 0x19da60 - 0x19dac0
void sub_0019DA60_0x19da60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019DA60_0x19da60");
#endif

    switch (ctx->pc) {
        case 0x19da7cu: goto label_19da7c;
        case 0x19da8cu: goto label_19da8c;
        default: break;
    }

    ctx->pc = 0x19da60u;

    // 0x19da60: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x19da60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x19da64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19da64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19da68: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x19da68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x19da6c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x19da6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x19da70: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x19da70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x19da74: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x19DA74u;
    {
        const bool branch_taken_0x19da74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19da74) {
            ctx->pc = 0x19DA98u;
            goto label_19da98;
        }
    }
    ctx->pc = 0x19DA7Cu;
label_19da7c:
    // 0x19da7c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x19da7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19da80: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x19da80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19da84: 0xc0660c4  jal         func_198310
    ctx->pc = 0x19DA84u;
    SET_GPR_U32(ctx, 31, 0x19DA8Cu);
    ctx->pc = 0x198310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198310u, 0x19DA84u, 0x19DA8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DA8Cu;
label_19da8c:
    // 0x19da8c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x19da8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19da90: 0x24630038  addiu       $v1, $v1, 0x38
    ctx->pc = 0x19da90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 56));
    // 0x19da94: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x19da94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_19da98:
    // 0x19da98: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x19da98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19da9c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x19da9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19daa0: 0x1483fff6  bne         $a0, $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x19DAA0u;
    {
        const bool branch_taken_0x19daa0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x19daa0) {
            ctx->pc = 0x19DA7Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19da7c;
        }
    }
    ctx->pc = 0x19DAA8u;
    // 0x19daa8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19daa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19daac: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x19daacu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x19dab0: 0x3e00008  jr          $ra
    ctx->pc = 0x19DAB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19DAB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19DAB8u;
    // 0x19dab8: 0x0  nop
    ctx->pc = 0x19dab8u;
    // NOP
    // 0x19dabc: 0x0  nop
    ctx->pc = 0x19dabcu;
    // NOP
    ctx->pc = 0x19dac0u;
}
