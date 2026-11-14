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

// Function: sub_001B9130
// Address: 0x1b9130 - 0x1b9180
void sub_001B9130_0x1b9130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B9130_0x1b9130");
#endif

    switch (ctx->pc) {
        case 0x1b9148u: goto label_1b9148;
        case 0x1b9154u: goto label_1b9154;
        default: break;
    }

    ctx->pc = 0x1b9130u;

    // 0x1b9130: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1b9130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1b9134: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b9134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b9138: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1b9138u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1b913c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1b913cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1b9140: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1B9140u;
    {
        const bool branch_taken_0x1b9140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b9140) {
            ctx->pc = 0x1B9160u;
            goto label_1b9160;
        }
    }
    ctx->pc = 0x1B9148u;
label_1b9148:
    // 0x1b9148: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1b9148u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b914c: 0xc06e460  jal         func_1B9180
    ctx->pc = 0x1B914Cu;
    SET_GPR_U32(ctx, 31, 0x1B9154u);
    ctx->pc = 0x1B9180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9180u, 0x1B914Cu, 0x1B9154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9154u;
label_1b9154:
    // 0x1b9154: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1b9154u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b9158: 0x246300c0  addiu       $v1, $v1, 0xC0
    ctx->pc = 0x1b9158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 192));
    // 0x1b915c: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x1b915cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_1b9160:
    // 0x1b9160: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1b9160u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b9164: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1b9164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b9168: 0x1483fff7  bne         $a0, $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1B9168u;
    {
        const bool branch_taken_0x1b9168 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1b9168) {
            ctx->pc = 0x1B9148u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b9148;
        }
    }
    ctx->pc = 0x1B9170u;
    // 0x1b9170: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b9170u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b9174: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1b9174u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1b9178: 0x3e00008  jr          $ra
    ctx->pc = 0x1B9178u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B9178u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B9180u;
}
