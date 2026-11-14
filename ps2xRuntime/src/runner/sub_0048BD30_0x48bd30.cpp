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

// Function: sub_0048BD30
// Address: 0x48bd30 - 0x48bd80
void sub_0048BD30_0x48bd30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048BD30_0x48bd30");
#endif

    switch (ctx->pc) {
        case 0x48bd48u: goto label_48bd48;
        case 0x48bd54u: goto label_48bd54;
        default: break;
    }

    ctx->pc = 0x48bd30u;

    // 0x48bd30: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x48bd30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x48bd34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x48bd34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x48bd38: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x48bd38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x48bd3c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x48bd3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x48bd40: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x48BD40u;
    {
        const bool branch_taken_0x48bd40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x48bd40) {
            ctx->pc = 0x48BD60u;
            goto label_48bd60;
        }
    }
    ctx->pc = 0x48BD48u;
label_48bd48:
    // 0x48bd48: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x48bd48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48bd4c: 0xc122f60  jal         func_48BD80
    ctx->pc = 0x48BD4Cu;
    SET_GPR_U32(ctx, 31, 0x48BD54u);
    ctx->pc = 0x48BD80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48BD80u, 0x48BD4Cu, 0x48BD54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48BD54u;
label_48bd54:
    // 0x48bd54: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x48bd54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48bd58: 0x24630028  addiu       $v1, $v1, 0x28
    ctx->pc = 0x48bd58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
    // 0x48bd5c: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x48bd5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_48bd60:
    // 0x48bd60: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x48bd60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48bd64: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x48bd64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x48bd68: 0x1483fff7  bne         $a0, $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x48BD68u;
    {
        const bool branch_taken_0x48bd68 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x48bd68) {
            ctx->pc = 0x48BD48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_48bd48;
        }
    }
    ctx->pc = 0x48BD70u;
    // 0x48bd70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x48bd70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48bd74: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x48bd74u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x48bd78: 0x3e00008  jr          $ra
    ctx->pc = 0x48BD78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48BD78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48BD80u;
}
