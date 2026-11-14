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

// Function: sub_0010DA60
// Address: 0x10da60 - 0x10dac0
void sub_0010DA60_0x10da60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010DA60_0x10da60");
#endif

    switch (ctx->pc) {
        case 0x10da7cu: goto label_10da7c;
        case 0x10da8cu: goto label_10da8c;
        default: break;
    }

    ctx->pc = 0x10da60u;

    // 0x10da60: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x10da60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x10da64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10da64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10da68: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x10da68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x10da6c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x10da6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x10da70: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x10da70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x10da74: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x10DA74u;
    {
        const bool branch_taken_0x10da74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10da74) {
            ctx->pc = 0x10DA98u;
            goto label_10da98;
        }
    }
    ctx->pc = 0x10DA7Cu;
label_10da7c:
    // 0x10da7c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x10da7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10da80: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x10da80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10da84: 0xc0430e4  jal         func_10C390
    ctx->pc = 0x10DA84u;
    SET_GPR_U32(ctx, 31, 0x10DA8Cu);
    ctx->pc = 0x10C390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C390u, 0x10DA84u, 0x10DA8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DA8Cu;
label_10da8c:
    // 0x10da8c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x10da8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10da90: 0x2463000c  addiu       $v1, $v1, 0xC
    ctx->pc = 0x10da90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x10da94: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x10da94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_10da98:
    // 0x10da98: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x10da98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10da9c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x10da9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10daa0: 0x1483fff6  bne         $a0, $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x10DAA0u;
    {
        const bool branch_taken_0x10daa0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x10daa0) {
            ctx->pc = 0x10DA7Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10da7c;
        }
    }
    ctx->pc = 0x10DAA8u;
    // 0x10daa8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10daa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10daac: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x10daacu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x10dab0: 0x3e00008  jr          $ra
    ctx->pc = 0x10DAB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10DAB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10DAB8u;
    // 0x10dab8: 0x0  nop
    ctx->pc = 0x10dab8u;
    // NOP
    // 0x10dabc: 0x0  nop
    ctx->pc = 0x10dabcu;
    // NOP
    ctx->pc = 0x10dac0u;
}
