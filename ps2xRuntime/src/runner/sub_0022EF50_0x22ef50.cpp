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

// Function: sub_0022EF50
// Address: 0x22ef50 - 0x22efd0
void sub_0022EF50_0x22ef50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022EF50_0x22ef50");
#endif

    switch (ctx->pc) {
        case 0x22ef74u: goto label_22ef74;
        case 0x22ef8cu: goto label_22ef8c;
        default: break;
    }

    ctx->pc = 0x22ef50u;

    // 0x22ef50: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x22ef50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x22ef54: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x22ef54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x22ef58: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22ef58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x22ef5c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x22ef5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x22ef60: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x22ef60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x22ef64: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x22ef64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x22ef68: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x22ef68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22ef6c: 0xc0400e0  jal         func_100380
    ctx->pc = 0x22EF6Cu;
    SET_GPR_U32(ctx, 31, 0x22EF74u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x22EF6Cu, 0x22EF74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22EF74u;
label_22ef74:
    // 0x22ef74: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x22ef74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x22ef78: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x22EF78u;
    {
        const bool branch_taken_0x22ef78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22ef78) {
            ctx->pc = 0x22EFB0u;
            goto label_22efb0;
        }
    }
    ctx->pc = 0x22EF80u;
    // 0x22ef80: 0x8fa70040  lw          $a3, 0x40($sp)
    ctx->pc = 0x22ef80u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22ef84: 0x8fa6002c  lw          $a2, 0x2C($sp)
    ctx->pc = 0x22ef84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x22ef88: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x22ef88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_22ef8c:
    // 0x22ef8c: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x22ef8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x22ef90: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x22ef90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x22ef94: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x22ef94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x22ef98: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x22ef98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x22ef9c: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x22ef9cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x22efa0: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x22efa0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x22efa4: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x22efa4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x22efa8: 0x1ca0fff8  bgtz        $a1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x22EFA8u;
    {
        const bool branch_taken_0x22efa8 = (GPR_S32(ctx, 5) > 0);
        if (branch_taken_0x22efa8) {
            ctx->pc = 0x22EF8Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22ef8c;
        }
    }
    ctx->pc = 0x22EFB0u;
label_22efb0:
    // 0x22efb0: 0x27b0002c  addiu       $s0, $sp, 0x2C
    ctx->pc = 0x22efb0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x22efb4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x22efb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22efb8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22efb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22efbc: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x22efbcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x22efc0: 0x3e00008  jr          $ra
    ctx->pc = 0x22EFC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22EFC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22EFC8u;
    // 0x22efc8: 0x0  nop
    ctx->pc = 0x22efc8u;
    // NOP
    // 0x22efcc: 0x0  nop
    ctx->pc = 0x22efccu;
    // NOP
    ctx->pc = 0x22efd0u;
}
