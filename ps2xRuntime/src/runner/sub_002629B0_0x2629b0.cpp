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

// Function: sub_002629B0
// Address: 0x2629b0 - 0x262a00
void sub_002629B0_0x2629b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002629B0_0x2629b0");
#endif

    switch (ctx->pc) {
        case 0x2629c8u: goto label_2629c8;
        case 0x2629d4u: goto label_2629d4;
        default: break;
    }

    ctx->pc = 0x2629b0u;

    // 0x2629b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2629b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2629b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2629b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2629b8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2629b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2629bc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2629bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2629c0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2629C0u;
    {
        const bool branch_taken_0x2629c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2629c0) {
            ctx->pc = 0x2629E0u;
            goto label_2629e0;
        }
    }
    ctx->pc = 0x2629C8u;
label_2629c8:
    // 0x2629c8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2629c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2629cc: 0xc098a80  jal         func_262A00
    ctx->pc = 0x2629CCu;
    SET_GPR_U32(ctx, 31, 0x2629D4u);
    ctx->pc = 0x262A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262A00u, 0x2629CCu, 0x2629D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2629D4u;
label_2629d4:
    // 0x2629d4: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2629d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2629d8: 0x2463000c  addiu       $v1, $v1, 0xC
    ctx->pc = 0x2629d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x2629dc: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x2629dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_2629e0:
    // 0x2629e0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2629e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2629e4: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2629e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2629e8: 0x1483fff7  bne         $a0, $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2629E8u;
    {
        const bool branch_taken_0x2629e8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2629e8) {
            ctx->pc = 0x2629C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2629c8;
        }
    }
    ctx->pc = 0x2629F0u;
    // 0x2629f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2629f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2629f4: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2629f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2629f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2629F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2629F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x262A00u;
}
