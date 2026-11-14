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

// Function: sub_0015BB50
// Address: 0x15bb50 - 0x15bba0
void sub_0015BB50_0x15bb50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015BB50_0x15bb50");
#endif

    switch (ctx->pc) {
        case 0x15bb68u: goto label_15bb68;
        case 0x15bb74u: goto label_15bb74;
        default: break;
    }

    ctx->pc = 0x15bb50u;

    // 0x15bb50: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x15bb50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x15bb54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15bb54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15bb58: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x15bb58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x15bb5c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x15bb5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x15bb60: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x15BB60u;
    {
        const bool branch_taken_0x15bb60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15bb60) {
            ctx->pc = 0x15BB80u;
            goto label_15bb80;
        }
    }
    ctx->pc = 0x15BB68u;
label_15bb68:
    // 0x15bb68: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x15bb68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15bb6c: 0xc056ee8  jal         func_15BBA0
    ctx->pc = 0x15BB6Cu;
    SET_GPR_U32(ctx, 31, 0x15BB74u);
    ctx->pc = 0x15BBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BBA0u, 0x15BB6Cu, 0x15BB74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15BB74u;
label_15bb74:
    // 0x15bb74: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x15bb74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15bb78: 0x24630090  addiu       $v1, $v1, 0x90
    ctx->pc = 0x15bb78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 144));
    // 0x15bb7c: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x15bb7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_15bb80:
    // 0x15bb80: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x15bb80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15bb84: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x15bb84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15bb88: 0x1483fff7  bne         $a0, $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x15BB88u;
    {
        const bool branch_taken_0x15bb88 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x15bb88) {
            ctx->pc = 0x15BB68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15bb68;
        }
    }
    ctx->pc = 0x15BB90u;
    // 0x15bb90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15bb90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15bb94: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x15bb94u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x15bb98: 0x3e00008  jr          $ra
    ctx->pc = 0x15BB98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15BB98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15BBA0u;
}
