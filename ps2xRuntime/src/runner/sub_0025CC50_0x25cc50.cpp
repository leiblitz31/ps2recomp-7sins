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

// Function: sub_0025CC50
// Address: 0x25cc50 - 0x25ccb0
void sub_0025CC50_0x25cc50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025CC50_0x25cc50");
#endif

    switch (ctx->pc) {
        case 0x25cc74u: goto label_25cc74;
        default: break;
    }

    ctx->pc = 0x25cc50u;

    // 0x25cc50: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x25cc50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x25cc54: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x25cc54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x25cc58: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25cc58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25cc5c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x25cc5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x25cc60: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x25cc60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x25cc64: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x25cc64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x25cc68: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x25cc68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25cc6c: 0xc0400e0  jal         func_100380
    ctx->pc = 0x25CC6Cu;
    SET_GPR_U32(ctx, 31, 0x25CC74u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x25CC6Cu, 0x25CC74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CC74u;
label_25cc74:
    // 0x25cc74: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x25cc74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x25cc78: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x25CC78u;
    {
        const bool branch_taken_0x25cc78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25cc78) {
            ctx->pc = 0x25CC90u;
            goto label_25cc90;
        }
    }
    ctx->pc = 0x25CC80u;
    // 0x25cc80: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x25cc80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25cc84: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x25cc84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25cc88: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x25cc88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x25cc8c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x25cc8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_25cc90:
    // 0x25cc90: 0x27b0002c  addiu       $s0, $sp, 0x2C
    ctx->pc = 0x25cc90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x25cc94: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x25cc94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25cc98: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25cc98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25cc9c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x25cc9cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x25cca0: 0x3e00008  jr          $ra
    ctx->pc = 0x25CCA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25CCA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25CCA8u;
    // 0x25cca8: 0x0  nop
    ctx->pc = 0x25cca8u;
    // NOP
    // 0x25ccac: 0x0  nop
    ctx->pc = 0x25ccacu;
    // NOP
    ctx->pc = 0x25ccb0u;
}
