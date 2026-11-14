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

// Function: sub_0018C590
// Address: 0x18c590 - 0x18c5e0
void sub_0018C590_0x18c590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018C590_0x18c590");
#endif

    switch (ctx->pc) {
        case 0x18c5a8u: goto label_18c5a8;
        case 0x18c5b4u: goto label_18c5b4;
        default: break;
    }

    ctx->pc = 0x18c590u;

    // 0x18c590: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x18c590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x18c594: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18c594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18c598: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x18c598u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x18c59c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x18c59cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x18c5a0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x18C5A0u;
    {
        const bool branch_taken_0x18c5a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18c5a0) {
            ctx->pc = 0x18C5C0u;
            goto label_18c5c0;
        }
    }
    ctx->pc = 0x18C5A8u;
label_18c5a8:
    // 0x18c5a8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x18c5a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18c5ac: 0xc063178  jal         func_18C5E0
    ctx->pc = 0x18C5ACu;
    SET_GPR_U32(ctx, 31, 0x18C5B4u);
    ctx->pc = 0x18C5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C5E0u, 0x18C5ACu, 0x18C5B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C5B4u;
label_18c5b4:
    // 0x18c5b4: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x18c5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18c5b8: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x18c5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x18c5bc: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x18c5bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_18c5c0:
    // 0x18c5c0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x18c5c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18c5c4: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x18c5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18c5c8: 0x1483fff7  bne         $a0, $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x18C5C8u;
    {
        const bool branch_taken_0x18c5c8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x18c5c8) {
            ctx->pc = 0x18C5A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18c5a8;
        }
    }
    ctx->pc = 0x18C5D0u;
    // 0x18c5d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18c5d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18c5d4: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x18c5d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x18c5d8: 0x3e00008  jr          $ra
    ctx->pc = 0x18C5D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18C5D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18C5E0u;
}
