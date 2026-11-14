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

// Function: sub_0045A080
// Address: 0x45a080 - 0x45a0e0
void sub_0045A080_0x45a080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0045A080_0x45a080");
#endif

    switch (ctx->pc) {
        case 0x45a0a4u: goto label_45a0a4;
        default: break;
    }

    ctx->pc = 0x45a080u;

    // 0x45a080: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x45a080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x45a084: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x45a084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x45a088: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x45a088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x45a08c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x45a08cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x45a090: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x45a090u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x45a094: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x45a094u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x45a098: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x45a098u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x45a09c: 0xc0400e0  jal         func_100380
    ctx->pc = 0x45A09Cu;
    SET_GPR_U32(ctx, 31, 0x45A0A4u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x45A09Cu, 0x45A0A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45A0A4u;
label_45a0a4:
    // 0x45a0a4: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x45a0a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x45a0a8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x45A0A8u;
    {
        const bool branch_taken_0x45a0a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45a0a8) {
            ctx->pc = 0x45A0C0u;
            goto label_45a0c0;
        }
    }
    ctx->pc = 0x45A0B0u;
    // 0x45a0b0: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x45a0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x45a0b4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x45a0b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x45a0b8: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x45a0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x45a0bc: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x45a0bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_45a0c0:
    // 0x45a0c0: 0x27b0002c  addiu       $s0, $sp, 0x2C
    ctx->pc = 0x45a0c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x45a0c4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x45a0c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x45a0c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x45a0c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x45a0cc: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x45a0ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x45a0d0: 0x3e00008  jr          $ra
    ctx->pc = 0x45A0D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45A0D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x45A0D8u;
    // 0x45a0d8: 0x0  nop
    ctx->pc = 0x45a0d8u;
    // NOP
    // 0x45a0dc: 0x0  nop
    ctx->pc = 0x45a0dcu;
    // NOP
    ctx->pc = 0x45a0e0u;
}
