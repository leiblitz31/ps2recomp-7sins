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

// Function: sub_001BD3E0
// Address: 0x1bd3e0 - 0x1bd440
void sub_001BD3E0_0x1bd3e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BD3E0_0x1bd3e0");
#endif

    switch (ctx->pc) {
        case 0x1bd404u: goto label_1bd404;
        default: break;
    }

    ctx->pc = 0x1bd3e0u;

    // 0x1bd3e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1bd3e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1bd3e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1bd3e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1bd3e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1bd3e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1bd3ec: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x1bd3ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x1bd3f0: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x1bd3f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x1bd3f4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1bd3f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1bd3f8: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x1bd3f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1bd3fc: 0xc0400e0  jal         func_100380
    ctx->pc = 0x1BD3FCu;
    SET_GPR_U32(ctx, 31, 0x1BD404u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x1BD3FCu, 0x1BD404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD404u;
label_1bd404:
    // 0x1bd404: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x1bd404u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x1bd408: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BD408u;
    {
        const bool branch_taken_0x1bd408 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bd408) {
            ctx->pc = 0x1BD420u;
            goto label_1bd420;
        }
    }
    ctx->pc = 0x1BD410u;
    // 0x1bd410: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1bd410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1bd414: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1bd414u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1bd418: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x1bd418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1bd41c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1bd41cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_1bd420:
    // 0x1bd420: 0x27b0002c  addiu       $s0, $sp, 0x2C
    ctx->pc = 0x1bd420u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x1bd424: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1bd424u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bd428: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1bd428u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bd42c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1bd42cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1bd430: 0x3e00008  jr          $ra
    ctx->pc = 0x1BD430u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BD430u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BD438u;
    // 0x1bd438: 0x0  nop
    ctx->pc = 0x1bd438u;
    // NOP
    // 0x1bd43c: 0x0  nop
    ctx->pc = 0x1bd43cu;
    // NOP
    ctx->pc = 0x1bd440u;
}
