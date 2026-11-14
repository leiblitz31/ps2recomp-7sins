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

// Function: sub_00264810
// Address: 0x264810 - 0x264870
void sub_00264810_0x264810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00264810_0x264810");
#endif

    switch (ctx->pc) {
        case 0x264834u: goto label_264834;
        default: break;
    }

    ctx->pc = 0x264810u;

    // 0x264810: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x264810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x264814: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x264814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x264818: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x264818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x26481c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x26481cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x264820: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x264820u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x264824: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x264824u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x264828: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x264828u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26482c: 0xc0400e0  jal         func_100380
    ctx->pc = 0x26482Cu;
    SET_GPR_U32(ctx, 31, 0x264834u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x26482Cu, 0x264834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264834u;
label_264834:
    // 0x264834: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x264834u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x264838: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x264838u;
    {
        const bool branch_taken_0x264838 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x264838) {
            ctx->pc = 0x264850u;
            goto label_264850;
        }
    }
    ctx->pc = 0x264840u;
    // 0x264840: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x264840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x264844: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x264844u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x264848: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x264848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x26484c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x26484cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_264850:
    // 0x264850: 0x27b0002c  addiu       $s0, $sp, 0x2C
    ctx->pc = 0x264850u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x264854: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x264854u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x264858: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x264858u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26485c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x26485cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x264860: 0x3e00008  jr          $ra
    ctx->pc = 0x264860u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x264860u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x264868u;
    // 0x264868: 0x0  nop
    ctx->pc = 0x264868u;
    // NOP
    // 0x26486c: 0x0  nop
    ctx->pc = 0x26486cu;
    // NOP
    ctx->pc = 0x264870u;
}
