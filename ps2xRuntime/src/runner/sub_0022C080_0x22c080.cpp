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

// Function: sub_0022C080
// Address: 0x22c080 - 0x22c0d0
void sub_0022C080_0x22c080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022C080_0x22c080");
#endif

    switch (ctx->pc) {
        case 0x22c098u: goto label_22c098;
        case 0x22c0a4u: goto label_22c0a4;
        default: break;
    }

    ctx->pc = 0x22c080u;

    // 0x22c080: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x22c080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x22c084: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22c084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22c088: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x22c088u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x22c08c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x22c08cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x22c090: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x22C090u;
    {
        const bool branch_taken_0x22c090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22c090) {
            ctx->pc = 0x22C0B0u;
            goto label_22c0b0;
        }
    }
    ctx->pc = 0x22C098u;
label_22c098:
    // 0x22c098: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x22c098u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22c09c: 0xc08b034  jal         func_22C0D0
    ctx->pc = 0x22C09Cu;
    SET_GPR_U32(ctx, 31, 0x22C0A4u);
    ctx->pc = 0x22C0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C0D0u, 0x22C09Cu, 0x22C0A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C0A4u;
label_22c0a4:
    // 0x22c0a4: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x22c0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22c0a8: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x22c0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x22c0ac: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x22c0acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_22c0b0:
    // 0x22c0b0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x22c0b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22c0b4: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x22c0b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22c0b8: 0x1483fff7  bne         $a0, $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x22C0B8u;
    {
        const bool branch_taken_0x22c0b8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x22c0b8) {
            ctx->pc = 0x22C098u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22c098;
        }
    }
    ctx->pc = 0x22C0C0u;
    // 0x22c0c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22c0c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22c0c4: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x22c0c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x22c0c8: 0x3e00008  jr          $ra
    ctx->pc = 0x22C0C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22C0C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22C0D0u;
}
