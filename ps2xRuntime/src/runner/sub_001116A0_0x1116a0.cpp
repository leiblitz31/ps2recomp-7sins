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

// Function: sub_001116A0
// Address: 0x1116a0 - 0x111700
void sub_001116A0_0x1116a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001116A0_0x1116a0");
#endif

    switch (ctx->pc) {
        case 0x1116c4u: goto label_1116c4;
        default: break;
    }

    ctx->pc = 0x1116a0u;

    // 0x1116a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1116a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1116a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1116a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1116a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1116a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1116ac: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x1116acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x1116b0: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x1116b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x1116b4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1116b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1116b8: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x1116b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1116bc: 0xc0400e0  jal         func_100380
    ctx->pc = 0x1116BCu;
    SET_GPR_U32(ctx, 31, 0x1116C4u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x1116BCu, 0x1116C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1116C4u;
label_1116c4:
    // 0x1116c4: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x1116c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x1116c8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1116C8u;
    {
        const bool branch_taken_0x1116c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1116c8) {
            ctx->pc = 0x1116E0u;
            goto label_1116e0;
        }
    }
    ctx->pc = 0x1116D0u;
    // 0x1116d0: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1116d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1116d4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1116d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1116d8: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x1116d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1116dc: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1116dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_1116e0:
    // 0x1116e0: 0x27b0002c  addiu       $s0, $sp, 0x2C
    ctx->pc = 0x1116e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x1116e4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1116e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1116e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1116e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1116ec: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1116ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1116f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1116F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1116F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1116F8u;
    // 0x1116f8: 0x0  nop
    ctx->pc = 0x1116f8u;
    // NOP
    // 0x1116fc: 0x0  nop
    ctx->pc = 0x1116fcu;
    // NOP
    ctx->pc = 0x111700u;
}
