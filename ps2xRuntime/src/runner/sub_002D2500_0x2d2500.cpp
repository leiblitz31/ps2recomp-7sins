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

// Function: sub_002D2500
// Address: 0x2d2500 - 0x2d2570
void sub_002D2500_0x2d2500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D2500_0x2d2500");
#endif

    switch (ctx->pc) {
        case 0x2d251cu: goto label_2d251c;
        default: break;
    }

    ctx->pc = 0x2d2500u;

    // 0x2d2500: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2d2500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2d2504: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d2504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d2508: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2d2508u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2d250c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2d250cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2d2510: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x2d2510u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x2d2514: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2D2514u;
    {
        const bool branch_taken_0x2d2514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d2514) {
            ctx->pc = 0x2D2544u;
            goto label_2d2544;
        }
    }
    ctx->pc = 0x2D251Cu;
label_2d251c:
    // 0x2d251c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2d251cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d2520: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2d2520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d2524: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2d2524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d2528: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2d2528u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2d252c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2d252cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d2530: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2d2530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2d2534: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x2d2534u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x2d2538: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2d2538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d253c: 0x24500004  addiu       $s0, $v0, 0x4
    ctx->pc = 0x2d253cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2d2540: 0xafb00010  sw          $s0, 0x10($sp)
    ctx->pc = 0x2d2540u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 16));
label_2d2544:
    // 0x2d2544: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2d2544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d2548: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2D2548u;
    {
        const bool branch_taken_0x2d2548 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d2548) {
            ctx->pc = 0x2D251Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d251c;
        }
    }
    ctx->pc = 0x2D2550u;
    // 0x2d2550: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2d2550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d2554: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d2554u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d2558: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2d2558u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2d255c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D255Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D255Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D2564u;
    // 0x2d2564: 0x0  nop
    ctx->pc = 0x2d2564u;
    // NOP
    // 0x2d2568: 0x0  nop
    ctx->pc = 0x2d2568u;
    // NOP
    // 0x2d256c: 0x0  nop
    ctx->pc = 0x2d256cu;
    // NOP
    ctx->pc = 0x2d2570u;
}
