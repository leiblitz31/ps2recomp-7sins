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

// Function: sub_001C2640
// Address: 0x1c2640 - 0x1c26a0
void sub_001C2640_0x1c2640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C2640_0x1c2640");
#endif

    switch (ctx->pc) {
        case 0x1c2664u: goto label_1c2664;
        default: break;
    }

    ctx->pc = 0x1c2640u;

    // 0x1c2640: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1c2640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1c2644: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c2644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c2648: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c2648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c264c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x1c264cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x1c2650: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x1c2650u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x1c2654: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1c2654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c2658: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x1c2658u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c265c: 0xc0400e0  jal         func_100380
    ctx->pc = 0x1C265Cu;
    SET_GPR_U32(ctx, 31, 0x1C2664u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x1C265Cu, 0x1C2664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2664u;
label_1c2664:
    // 0x1c2664: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x1c2664u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x1c2668: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C2668u;
    {
        const bool branch_taken_0x1c2668 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2668) {
            ctx->pc = 0x1C2680u;
            goto label_1c2680;
        }
    }
    ctx->pc = 0x1C2670u;
    // 0x1c2670: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1c2670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c2674: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1c2674u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c2678: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x1c2678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1c267c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1c267cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_1c2680:
    // 0x1c2680: 0x27b0002c  addiu       $s0, $sp, 0x2C
    ctx->pc = 0x1c2680u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x1c2684: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c2684u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c2688: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c2688u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c268c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1c268cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1c2690: 0x3e00008  jr          $ra
    ctx->pc = 0x1C2690u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C2690u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C2698u;
    // 0x1c2698: 0x0  nop
    ctx->pc = 0x1c2698u;
    // NOP
    // 0x1c269c: 0x0  nop
    ctx->pc = 0x1c269cu;
    // NOP
    ctx->pc = 0x1c26a0u;
}
