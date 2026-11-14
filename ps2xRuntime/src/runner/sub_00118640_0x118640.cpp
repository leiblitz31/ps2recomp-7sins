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

// Function: sub_00118640
// Address: 0x118640 - 0x1186a0
void sub_00118640_0x118640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00118640_0x118640");
#endif

    switch (ctx->pc) {
        case 0x118664u: goto label_118664;
        default: break;
    }

    ctx->pc = 0x118640u;

    // 0x118640: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x118640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x118644: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x118644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x118648: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x118648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x11864c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x11864cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x118650: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x118650u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x118654: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x118654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x118658: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x118658u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11865c: 0xc0400e0  jal         func_100380
    ctx->pc = 0x11865Cu;
    SET_GPR_U32(ctx, 31, 0x118664u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x11865Cu, 0x118664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118664u;
label_118664:
    // 0x118664: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x118664u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x118668: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x118668u;
    {
        const bool branch_taken_0x118668 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x118668) {
            ctx->pc = 0x118680u;
            goto label_118680;
        }
    }
    ctx->pc = 0x118670u;
    // 0x118670: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x118670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x118674: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x118674u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x118678: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x118678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x11867c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x11867cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_118680:
    // 0x118680: 0x27b0002c  addiu       $s0, $sp, 0x2C
    ctx->pc = 0x118680u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x118684: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x118684u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x118688: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x118688u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11868c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x11868cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x118690: 0x3e00008  jr          $ra
    ctx->pc = 0x118690u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x118690u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x118698u;
    // 0x118698: 0x0  nop
    ctx->pc = 0x118698u;
    // NOP
    // 0x11869c: 0x0  nop
    ctx->pc = 0x11869cu;
    // NOP
    ctx->pc = 0x1186a0u;
}
