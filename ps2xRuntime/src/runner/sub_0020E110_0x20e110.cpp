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

// Function: sub_0020E110
// Address: 0x20e110 - 0x20e170
void sub_0020E110_0x20e110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020E110_0x20e110");
#endif

    switch (ctx->pc) {
        case 0x20e134u: goto label_20e134;
        default: break;
    }

    ctx->pc = 0x20e110u;

    // 0x20e110: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x20e110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x20e114: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x20e114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x20e118: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x20e118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x20e11c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x20e11cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x20e120: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x20e120u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x20e124: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x20e124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x20e128: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x20e128u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20e12c: 0xc0400e0  jal         func_100380
    ctx->pc = 0x20E12Cu;
    SET_GPR_U32(ctx, 31, 0x20E134u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x20E12Cu, 0x20E134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E134u;
label_20e134:
    // 0x20e134: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x20e134u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x20e138: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20E138u;
    {
        const bool branch_taken_0x20e138 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20e138) {
            ctx->pc = 0x20E150u;
            goto label_20e150;
        }
    }
    ctx->pc = 0x20E140u;
    // 0x20e140: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x20e140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20e144: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x20e144u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20e148: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x20e148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x20e14c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x20e14cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_20e150:
    // 0x20e150: 0x27b0002c  addiu       $s0, $sp, 0x2C
    ctx->pc = 0x20e150u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x20e154: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x20e154u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20e158: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x20e158u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20e15c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x20e15cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x20e160: 0x3e00008  jr          $ra
    ctx->pc = 0x20E160u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20E160u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20E168u;
    // 0x20e168: 0x0  nop
    ctx->pc = 0x20e168u;
    // NOP
    // 0x20e16c: 0x0  nop
    ctx->pc = 0x20e16cu;
    // NOP
    ctx->pc = 0x20e170u;
}
