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

// Function: sub_00158810
// Address: 0x158810 - 0x158870
void sub_00158810_0x158810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00158810_0x158810");
#endif

    switch (ctx->pc) {
        case 0x158834u: goto label_158834;
        default: break;
    }

    ctx->pc = 0x158810u;

    // 0x158810: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x158810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x158814: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x158814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x158818: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x158818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15881c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x15881cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x158820: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x158820u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x158824: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x158824u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x158828: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x158828u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15882c: 0xc0400e0  jal         func_100380
    ctx->pc = 0x15882Cu;
    SET_GPR_U32(ctx, 31, 0x158834u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x15882Cu, 0x158834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158834u;
label_158834:
    // 0x158834: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x158834u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x158838: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x158838u;
    {
        const bool branch_taken_0x158838 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x158838) {
            ctx->pc = 0x158850u;
            goto label_158850;
        }
    }
    ctx->pc = 0x158840u;
    // 0x158840: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x158840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x158844: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x158844u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x158848: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x158848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x15884c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x15884cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_158850:
    // 0x158850: 0x27b0002c  addiu       $s0, $sp, 0x2C
    ctx->pc = 0x158850u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x158854: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x158854u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x158858: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x158858u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15885c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x15885cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x158860: 0x3e00008  jr          $ra
    ctx->pc = 0x158860u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x158860u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x158868u;
    // 0x158868: 0x0  nop
    ctx->pc = 0x158868u;
    // NOP
    // 0x15886c: 0x0  nop
    ctx->pc = 0x15886cu;
    // NOP
    ctx->pc = 0x158870u;
}
