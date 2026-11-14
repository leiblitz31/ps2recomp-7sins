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

// Function: sub_001B93A0
// Address: 0x1b93a0 - 0x1b93f0
void sub_001B93A0_0x1b93a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B93A0_0x1b93a0");
#endif

    switch (ctx->pc) {
        case 0x1b93b8u: goto label_1b93b8;
        case 0x1b93c4u: goto label_1b93c4;
        default: break;
    }

    ctx->pc = 0x1b93a0u;

    // 0x1b93a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1b93a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1b93a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b93a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b93a8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1b93a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1b93ac: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1b93acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1b93b0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1B93B0u;
    {
        const bool branch_taken_0x1b93b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b93b0) {
            ctx->pc = 0x1B93D0u;
            goto label_1b93d0;
        }
    }
    ctx->pc = 0x1B93B8u;
label_1b93b8:
    // 0x1b93b8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1b93b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b93bc: 0xc06e4fc  jal         func_1B93F0
    ctx->pc = 0x1B93BCu;
    SET_GPR_U32(ctx, 31, 0x1B93C4u);
    ctx->pc = 0x1B93F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B93F0u, 0x1B93BCu, 0x1B93C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B93C4u;
label_1b93c4:
    // 0x1b93c4: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1b93c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b93c8: 0x246300d0  addiu       $v1, $v1, 0xD0
    ctx->pc = 0x1b93c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 208));
    // 0x1b93cc: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x1b93ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_1b93d0:
    // 0x1b93d0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1b93d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b93d4: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1b93d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b93d8: 0x1483fff7  bne         $a0, $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1B93D8u;
    {
        const bool branch_taken_0x1b93d8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1b93d8) {
            ctx->pc = 0x1B93B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b93b8;
        }
    }
    ctx->pc = 0x1B93E0u;
    // 0x1b93e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b93e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b93e4: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1b93e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1b93e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1B93E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B93E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B93F0u;
}
