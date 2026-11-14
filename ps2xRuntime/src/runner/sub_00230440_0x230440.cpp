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

// Function: sub_00230440
// Address: 0x230440 - 0x2304a0
void sub_00230440_0x230440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00230440_0x230440");
#endif

    switch (ctx->pc) {
        case 0x230464u: goto label_230464;
        default: break;
    }

    ctx->pc = 0x230440u;

    // 0x230440: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x230440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x230444: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x230444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x230448: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x230448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x23044c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x23044cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x230450: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x230450u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x230454: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x230454u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x230458: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x230458u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23045c: 0xc0400e0  jal         func_100380
    ctx->pc = 0x23045Cu;
    SET_GPR_U32(ctx, 31, 0x230464u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x23045Cu, 0x230464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230464u;
label_230464:
    // 0x230464: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x230464u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x230468: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x230468u;
    {
        const bool branch_taken_0x230468 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x230468) {
            ctx->pc = 0x230480u;
            goto label_230480;
        }
    }
    ctx->pc = 0x230470u;
    // 0x230470: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x230470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x230474: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x230474u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x230478: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x230478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x23047c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x23047cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_230480:
    // 0x230480: 0x27b0002c  addiu       $s0, $sp, 0x2C
    ctx->pc = 0x230480u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x230484: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x230484u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x230488: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x230488u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23048c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x23048cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x230490: 0x3e00008  jr          $ra
    ctx->pc = 0x230490u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x230490u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x230498u;
    // 0x230498: 0x0  nop
    ctx->pc = 0x230498u;
    // NOP
    // 0x23049c: 0x0  nop
    ctx->pc = 0x23049cu;
    // NOP
    ctx->pc = 0x2304a0u;
}
