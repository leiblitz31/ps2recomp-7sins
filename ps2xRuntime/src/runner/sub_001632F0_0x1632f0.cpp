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

// Function: sub_001632F0
// Address: 0x1632f0 - 0x163340
void sub_001632F0_0x1632f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001632F0_0x1632f0");
#endif

    switch (ctx->pc) {
        case 0x163308u: goto label_163308;
        case 0x163314u: goto label_163314;
        default: break;
    }

    ctx->pc = 0x1632f0u;

    // 0x1632f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1632f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1632f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1632f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1632f8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1632f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1632fc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1632fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x163300: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x163300u;
    {
        const bool branch_taken_0x163300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x163300) {
            ctx->pc = 0x163320u;
            goto label_163320;
        }
    }
    ctx->pc = 0x163308u;
label_163308:
    // 0x163308: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x163308u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16330c: 0xc058cd0  jal         func_163340
    ctx->pc = 0x16330Cu;
    SET_GPR_U32(ctx, 31, 0x163314u);
    ctx->pc = 0x163340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163340u, 0x16330Cu, 0x163314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163314u;
label_163314:
    // 0x163314: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x163314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x163318: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x163318u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x16331c: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x16331cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_163320:
    // 0x163320: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x163320u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x163324: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x163324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x163328: 0x1483fff7  bne         $a0, $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x163328u;
    {
        const bool branch_taken_0x163328 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x163328) {
            ctx->pc = 0x163308u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_163308;
        }
    }
    ctx->pc = 0x163330u;
    // 0x163330: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x163330u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x163334: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x163334u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x163338: 0x3e00008  jr          $ra
    ctx->pc = 0x163338u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x163338u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x163340u;
}
