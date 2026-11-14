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

// Function: sub_00242920
// Address: 0x242920 - 0x242970
void sub_00242920_0x242920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00242920_0x242920");
#endif

    switch (ctx->pc) {
        case 0x242938u: goto label_242938;
        case 0x242944u: goto label_242944;
        default: break;
    }

    ctx->pc = 0x242920u;

    // 0x242920: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x242920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x242924: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x242924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x242928: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x242928u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x24292c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x24292cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x242930: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x242930u;
    {
        const bool branch_taken_0x242930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x242930) {
            ctx->pc = 0x242950u;
            goto label_242950;
        }
    }
    ctx->pc = 0x242938u;
label_242938:
    // 0x242938: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x242938u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24293c: 0xc090a5c  jal         func_242970
    ctx->pc = 0x24293Cu;
    SET_GPR_U32(ctx, 31, 0x242944u);
    ctx->pc = 0x242970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242970u, 0x24293Cu, 0x242944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242944u;
label_242944:
    // 0x242944: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x242944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x242948: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x242948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x24294c: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x24294cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_242950:
    // 0x242950: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x242950u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x242954: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x242954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x242958: 0x1483fff7  bne         $a0, $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x242958u;
    {
        const bool branch_taken_0x242958 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x242958) {
            ctx->pc = 0x242938u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_242938;
        }
    }
    ctx->pc = 0x242960u;
    // 0x242960: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x242960u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x242964: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x242964u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x242968: 0x3e00008  jr          $ra
    ctx->pc = 0x242968u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x242968u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x242970u;
}
