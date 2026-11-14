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

// Function: sub_00283F60
// Address: 0x283f60 - 0x283fc0
void sub_00283F60_0x283f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00283F60_0x283f60");
#endif

    switch (ctx->pc) {
        case 0x283f84u: goto label_283f84;
        default: break;
    }

    ctx->pc = 0x283f60u;

    // 0x283f60: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x283f60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x283f64: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x283f64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x283f68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x283f68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x283f6c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x283f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x283f70: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x283f70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x283f74: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x283f74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x283f78: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x283f78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x283f7c: 0xc0400e0  jal         func_100380
    ctx->pc = 0x283F7Cu;
    SET_GPR_U32(ctx, 31, 0x283F84u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x283F7Cu, 0x283F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283F84u;
label_283f84:
    // 0x283f84: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x283f84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x283f88: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x283F88u;
    {
        const bool branch_taken_0x283f88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x283f88) {
            ctx->pc = 0x283FA0u;
            goto label_283fa0;
        }
    }
    ctx->pc = 0x283F90u;
    // 0x283f90: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x283f90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x283f94: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x283f94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x283f98: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x283f98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x283f9c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x283f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_283fa0:
    // 0x283fa0: 0x27b0002c  addiu       $s0, $sp, 0x2C
    ctx->pc = 0x283fa0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x283fa4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x283fa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x283fa8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x283fa8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x283fac: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x283facu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x283fb0: 0x3e00008  jr          $ra
    ctx->pc = 0x283FB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x283FB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x283FB8u;
    // 0x283fb8: 0x0  nop
    ctx->pc = 0x283fb8u;
    // NOP
    // 0x283fbc: 0x0  nop
    ctx->pc = 0x283fbcu;
    // NOP
    ctx->pc = 0x283fc0u;
}
