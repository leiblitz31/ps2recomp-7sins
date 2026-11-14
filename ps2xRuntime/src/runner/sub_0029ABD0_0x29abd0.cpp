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

// Function: sub_0029ABD0
// Address: 0x29abd0 - 0x29ac30
void sub_0029ABD0_0x29abd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029ABD0_0x29abd0");
#endif

    switch (ctx->pc) {
        case 0x29abf4u: goto label_29abf4;
        default: break;
    }

    ctx->pc = 0x29abd0u;

    // 0x29abd0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x29abd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x29abd4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x29abd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x29abd8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29abd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x29abdc: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x29abdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x29abe0: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x29abe0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x29abe4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x29abe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x29abe8: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x29abe8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29abec: 0xc0400e0  jal         func_100380
    ctx->pc = 0x29ABECu;
    SET_GPR_U32(ctx, 31, 0x29ABF4u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x29ABECu, 0x29ABF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29ABF4u;
label_29abf4:
    // 0x29abf4: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x29abf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x29abf8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x29ABF8u;
    {
        const bool branch_taken_0x29abf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29abf8) {
            ctx->pc = 0x29AC10u;
            goto label_29ac10;
        }
    }
    ctx->pc = 0x29AC00u;
    // 0x29ac00: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x29ac00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29ac04: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x29ac04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x29ac08: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x29ac08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x29ac0c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x29ac0cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_29ac10:
    // 0x29ac10: 0x27b0002c  addiu       $s0, $sp, 0x2C
    ctx->pc = 0x29ac10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x29ac14: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x29ac14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29ac18: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29ac18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29ac1c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x29ac1cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x29ac20: 0x3e00008  jr          $ra
    ctx->pc = 0x29AC20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29AC20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29AC28u;
    // 0x29ac28: 0x0  nop
    ctx->pc = 0x29ac28u;
    // NOP
    // 0x29ac2c: 0x0  nop
    ctx->pc = 0x29ac2cu;
    // NOP
    ctx->pc = 0x29ac30u;
}
