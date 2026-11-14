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

// Function: sub_00491A80
// Address: 0x491a80 - 0x491ae0
void sub_00491A80_0x491a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00491A80_0x491a80");
#endif

    switch (ctx->pc) {
        case 0x491aa4u: goto label_491aa4;
        default: break;
    }

    ctx->pc = 0x491a80u;

    // 0x491a80: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x491a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x491a84: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x491a84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x491a88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x491a88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x491a8c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x491a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x491a90: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x491a90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x491a94: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x491a94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x491a98: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x491a98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x491a9c: 0xc0400e0  jal         func_100380
    ctx->pc = 0x491A9Cu;
    SET_GPR_U32(ctx, 31, 0x491AA4u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x491A9Cu, 0x491AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x491AA4u;
label_491aa4:
    // 0x491aa4: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x491aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x491aa8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x491AA8u;
    {
        const bool branch_taken_0x491aa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x491aa8) {
            ctx->pc = 0x491AC0u;
            goto label_491ac0;
        }
    }
    ctx->pc = 0x491AB0u;
    // 0x491ab0: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x491ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x491ab4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x491ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x491ab8: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x491ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x491abc: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x491abcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_491ac0:
    // 0x491ac0: 0x27b0002c  addiu       $s0, $sp, 0x2C
    ctx->pc = 0x491ac0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x491ac4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x491ac4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x491ac8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x491ac8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x491acc: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x491accu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x491ad0: 0x3e00008  jr          $ra
    ctx->pc = 0x491AD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x491AD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x491AD8u;
    // 0x491ad8: 0x0  nop
    ctx->pc = 0x491ad8u;
    // NOP
    // 0x491adc: 0x0  nop
    ctx->pc = 0x491adcu;
    // NOP
    ctx->pc = 0x491ae0u;
}
