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

// Function: sub_001115F0
// Address: 0x1115f0 - 0x111660
void sub_001115F0_0x1115f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001115F0_0x1115f0");
#endif

    switch (ctx->pc) {
        case 0x11160cu: goto label_11160c;
        default: break;
    }

    ctx->pc = 0x1115f0u;

    // 0x1115f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1115f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1115f4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1115f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1115f8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1115f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1115fc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1115fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x111600: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x111600u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x111604: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x111604u;
    {
        const bool branch_taken_0x111604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x111604) {
            ctx->pc = 0x111634u;
            goto label_111634;
        }
    }
    ctx->pc = 0x11160Cu;
label_11160c:
    // 0x11160c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x11160cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x111610: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x111610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x111614: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x111614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x111618: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x111618u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x11161c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x11161cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x111620: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x111620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x111624: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x111624u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x111628: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x111628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11162c: 0x24500004  addiu       $s0, $v0, 0x4
    ctx->pc = 0x11162cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x111630: 0xafb00010  sw          $s0, 0x10($sp)
    ctx->pc = 0x111630u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 16));
label_111634:
    // 0x111634: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x111634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x111638: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x111638u;
    {
        const bool branch_taken_0x111638 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x111638) {
            ctx->pc = 0x11160Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11160c;
        }
    }
    ctx->pc = 0x111640u;
    // 0x111640: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x111640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x111644: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x111644u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x111648: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x111648u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x11164c: 0x3e00008  jr          $ra
    ctx->pc = 0x11164Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11164Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x111654u;
    // 0x111654: 0x0  nop
    ctx->pc = 0x111654u;
    // NOP
    // 0x111658: 0x0  nop
    ctx->pc = 0x111658u;
    // NOP
    // 0x11165c: 0x0  nop
    ctx->pc = 0x11165cu;
    // NOP
    ctx->pc = 0x111660u;
}
