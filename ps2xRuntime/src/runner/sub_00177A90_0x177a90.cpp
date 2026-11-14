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

// Function: sub_00177A90
// Address: 0x177a90 - 0x177ae0
void sub_00177A90_0x177a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00177A90_0x177a90");
#endif

    switch (ctx->pc) {
        case 0x177aa8u: goto label_177aa8;
        case 0x177ab4u: goto label_177ab4;
        default: break;
    }

    ctx->pc = 0x177a90u;

    // 0x177a90: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x177a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x177a94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x177a94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x177a98: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x177a98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x177a9c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x177a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x177aa0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x177AA0u;
    {
        const bool branch_taken_0x177aa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x177aa0) {
            ctx->pc = 0x177AC0u;
            goto label_177ac0;
        }
    }
    ctx->pc = 0x177AA8u;
label_177aa8:
    // 0x177aa8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x177aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x177aac: 0xc05deb8  jal         func_177AE0
    ctx->pc = 0x177AACu;
    SET_GPR_U32(ctx, 31, 0x177AB4u);
    ctx->pc = 0x177AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177AE0u, 0x177AACu, 0x177AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177AB4u;
label_177ab4:
    // 0x177ab4: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x177ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x177ab8: 0x2463000c  addiu       $v1, $v1, 0xC
    ctx->pc = 0x177ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x177abc: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x177abcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_177ac0:
    // 0x177ac0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x177ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x177ac4: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x177ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x177ac8: 0x1483fff7  bne         $a0, $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x177AC8u;
    {
        const bool branch_taken_0x177ac8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x177ac8) {
            ctx->pc = 0x177AA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_177aa8;
        }
    }
    ctx->pc = 0x177AD0u;
    // 0x177ad0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x177ad0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x177ad4: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x177ad4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x177ad8: 0x3e00008  jr          $ra
    ctx->pc = 0x177AD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x177AD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x177AE0u;
}
