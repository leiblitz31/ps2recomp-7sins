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

// Function: sub_00145840
// Address: 0x145840 - 0x145890
void sub_00145840_0x145840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00145840_0x145840");
#endif

    switch (ctx->pc) {
        case 0x145858u: goto label_145858;
        case 0x145864u: goto label_145864;
        default: break;
    }

    ctx->pc = 0x145840u;

    // 0x145840: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x145840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x145844: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x145844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x145848: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x145848u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x14584c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x14584cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x145850: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x145850u;
    {
        const bool branch_taken_0x145850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x145850) {
            ctx->pc = 0x145870u;
            goto label_145870;
        }
    }
    ctx->pc = 0x145858u;
label_145858:
    // 0x145858: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x145858u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14585c: 0xc051624  jal         func_145890
    ctx->pc = 0x14585Cu;
    SET_GPR_U32(ctx, 31, 0x145864u);
    ctx->pc = 0x145890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145890u, 0x14585Cu, 0x145864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145864u;
label_145864:
    // 0x145864: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x145864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x145868: 0x2463000c  addiu       $v1, $v1, 0xC
    ctx->pc = 0x145868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x14586c: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x14586cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_145870:
    // 0x145870: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x145870u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x145874: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x145874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x145878: 0x1483fff7  bne         $a0, $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x145878u;
    {
        const bool branch_taken_0x145878 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x145878) {
            ctx->pc = 0x145858u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_145858;
        }
    }
    ctx->pc = 0x145880u;
    // 0x145880: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x145880u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x145884: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x145884u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x145888: 0x3e00008  jr          $ra
    ctx->pc = 0x145888u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145888u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x145890u;
}
