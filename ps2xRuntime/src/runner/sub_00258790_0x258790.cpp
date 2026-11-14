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

// Function: sub_00258790
// Address: 0x258790 - 0x2587e0
void sub_00258790_0x258790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00258790_0x258790");
#endif

    switch (ctx->pc) {
        case 0x2587a8u: goto label_2587a8;
        case 0x2587b4u: goto label_2587b4;
        default: break;
    }

    ctx->pc = 0x258790u;

    // 0x258790: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x258790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x258794: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x258794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x258798: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x258798u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x25879c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x25879cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2587a0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2587A0u;
    {
        const bool branch_taken_0x2587a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2587a0) {
            ctx->pc = 0x2587C0u;
            goto label_2587c0;
        }
    }
    ctx->pc = 0x2587A8u;
label_2587a8:
    // 0x2587a8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2587a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2587ac: 0xc0961f8  jal         func_2587E0
    ctx->pc = 0x2587ACu;
    SET_GPR_U32(ctx, 31, 0x2587B4u);
    ctx->pc = 0x2587E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2587E0u, 0x2587ACu, 0x2587B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2587B4u;
label_2587b4:
    // 0x2587b4: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2587b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2587b8: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x2587b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x2587bc: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x2587bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_2587c0:
    // 0x2587c0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2587c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2587c4: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2587c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2587c8: 0x1483fff7  bne         $a0, $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2587C8u;
    {
        const bool branch_taken_0x2587c8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2587c8) {
            ctx->pc = 0x2587A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2587a8;
        }
    }
    ctx->pc = 0x2587D0u;
    // 0x2587d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2587d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2587d4: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2587d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2587d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2587D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2587D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2587E0u;
}
