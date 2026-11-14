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

// Function: sub_00165FD0
// Address: 0x165fd0 - 0x166020
void sub_00165FD0_0x165fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00165FD0_0x165fd0");
#endif

    switch (ctx->pc) {
        case 0x165fe8u: goto label_165fe8;
        case 0x165ff4u: goto label_165ff4;
        default: break;
    }

    ctx->pc = 0x165fd0u;

    // 0x165fd0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x165fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x165fd4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x165fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x165fd8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x165fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x165fdc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x165fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x165fe0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x165FE0u;
    {
        const bool branch_taken_0x165fe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x165fe0) {
            ctx->pc = 0x166000u;
            goto label_166000;
        }
    }
    ctx->pc = 0x165FE8u;
label_165fe8:
    // 0x165fe8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x165fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x165fec: 0xc059808  jal         func_166020
    ctx->pc = 0x165FECu;
    SET_GPR_U32(ctx, 31, 0x165FF4u);
    ctx->pc = 0x166020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166020u, 0x165FECu, 0x165FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165FF4u;
label_165ff4:
    // 0x165ff4: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x165ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x165ff8: 0x2463000c  addiu       $v1, $v1, 0xC
    ctx->pc = 0x165ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x165ffc: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x165ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_166000:
    // 0x166000: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x166000u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x166004: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x166004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x166008: 0x1483fff7  bne         $a0, $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x166008u;
    {
        const bool branch_taken_0x166008 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x166008) {
            ctx->pc = 0x165FE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_165fe8;
        }
    }
    ctx->pc = 0x166010u;
    // 0x166010: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x166010u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x166014: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x166014u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x166018: 0x3e00008  jr          $ra
    ctx->pc = 0x166018u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x166018u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x166020u;
}
