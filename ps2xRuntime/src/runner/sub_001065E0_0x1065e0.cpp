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

// Function: sub_001065E0
// Address: 0x1065e0 - 0x106640
void sub_001065E0_0x1065e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001065E0_0x1065e0");
#endif

    switch (ctx->pc) {
        case 0x106604u: goto label_106604;
        default: break;
    }

    ctx->pc = 0x1065e0u;

    // 0x1065e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1065e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1065e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1065e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1065e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1065e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1065ec: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x1065ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x1065f0: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x1065f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x1065f4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1065f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1065f8: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x1065f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1065fc: 0xc0400e0  jal         func_100380
    ctx->pc = 0x1065FCu;
    SET_GPR_U32(ctx, 31, 0x106604u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x1065FCu, 0x106604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106604u;
label_106604:
    // 0x106604: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x106604u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x106608: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x106608u;
    {
        const bool branch_taken_0x106608 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x106608) {
            ctx->pc = 0x106620u;
            goto label_106620;
        }
    }
    ctx->pc = 0x106610u;
    // 0x106610: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x106610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x106614: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x106614u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x106618: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x106618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x10661c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x10661cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_106620:
    // 0x106620: 0x27b0002c  addiu       $s0, $sp, 0x2C
    ctx->pc = 0x106620u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x106624: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x106624u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x106628: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x106628u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10662c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x10662cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x106630: 0x3e00008  jr          $ra
    ctx->pc = 0x106630u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x106630u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x106638u;
    // 0x106638: 0x0  nop
    ctx->pc = 0x106638u;
    // NOP
    // 0x10663c: 0x0  nop
    ctx->pc = 0x10663cu;
    // NOP
    ctx->pc = 0x106640u;
}
