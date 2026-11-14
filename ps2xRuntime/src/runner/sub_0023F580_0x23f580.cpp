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

// Function: sub_0023F580
// Address: 0x23f580 - 0x23f5d0
void sub_0023F580_0x23f580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023F580_0x23f580");
#endif

    switch (ctx->pc) {
        case 0x23f598u: goto label_23f598;
        case 0x23f5a4u: goto label_23f5a4;
        default: break;
    }

    ctx->pc = 0x23f580u;

    // 0x23f580: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x23f580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x23f584: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23f584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23f588: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x23f588u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x23f58c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x23f58cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x23f590: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x23F590u;
    {
        const bool branch_taken_0x23f590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23f590) {
            ctx->pc = 0x23F5B0u;
            goto label_23f5b0;
        }
    }
    ctx->pc = 0x23F598u;
label_23f598:
    // 0x23f598: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x23f598u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23f59c: 0xc08fd74  jal         func_23F5D0
    ctx->pc = 0x23F59Cu;
    SET_GPR_U32(ctx, 31, 0x23F5A4u);
    ctx->pc = 0x23F5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F5D0u, 0x23F59Cu, 0x23F5A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F5A4u;
label_23f5a4:
    // 0x23f5a4: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x23f5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23f5a8: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x23f5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x23f5ac: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x23f5acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_23f5b0:
    // 0x23f5b0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x23f5b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23f5b4: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x23f5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23f5b8: 0x1483fff7  bne         $a0, $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x23F5B8u;
    {
        const bool branch_taken_0x23f5b8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x23f5b8) {
            ctx->pc = 0x23F598u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23f598;
        }
    }
    ctx->pc = 0x23F5C0u;
    // 0x23f5c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23f5c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23f5c4: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x23f5c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x23f5c8: 0x3e00008  jr          $ra
    ctx->pc = 0x23F5C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23F5C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23F5D0u;
}
