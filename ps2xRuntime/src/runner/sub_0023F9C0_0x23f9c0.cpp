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

// Function: sub_0023F9C0
// Address: 0x23f9c0 - 0x23fa50
void sub_0023F9C0_0x23f9c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023F9C0_0x23f9c0");
#endif

    switch (ctx->pc) {
        case 0x23fa04u: goto label_23fa04;
        case 0x23fa14u: goto label_23fa14;
        default: break;
    }

    ctx->pc = 0x23f9c0u;

    // 0x23f9c0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x23f9c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x23f9c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x23f9c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x23f9c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x23f9c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x23f9cc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x23f9ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x23f9d0: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x23f9d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x23f9d4: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x23f9d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x23f9d8: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x23f9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23f9dc: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x23f9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23f9e0: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x23f9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23f9e4: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x23f9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x23f9e8: 0x38103  sra         $s0, $v1, 4
    ctx->pc = 0x23f9e8u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 3), 4));
    // 0x23f9ec: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x23F9ECu;
    {
        const bool branch_taken_0x23f9ec = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x23f9ec) {
            ctx->pc = 0x23F9FCu;
            goto label_23f9fc;
        }
    }
    ctx->pc = 0x23F9F4u;
    // 0x23f9f4: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x23f9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x23f9f8: 0x28103  sra         $s0, $v0, 4
    ctx->pc = 0x23f9f8u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 4));
label_23f9fc:
    // 0x23f9fc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x23F9FCu;
    {
        const bool branch_taken_0x23f9fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23f9fc) {
            ctx->pc = 0x23FA30u;
            goto label_23fa30;
        }
    }
    ctx->pc = 0x23FA04u;
label_23fa04:
    // 0x23fa04: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x23fa04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x23fa08: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x23fa08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23fa0c: 0xc08fe94  jal         func_23FA50
    ctx->pc = 0x23FA0Cu;
    SET_GPR_U32(ctx, 31, 0x23FA14u);
    ctx->pc = 0x23FA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FA50u, 0x23FA0Cu, 0x23FA14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FA14u;
label_23fa14:
    // 0x23fa14: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x23fa14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23fa18: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x23fa18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x23fa1c: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x23fa1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x23fa20: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x23fa20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x23fa24: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x23fa24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x23fa28: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x23fa28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x23fa2c: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x23fa2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_23fa30:
    // 0x23fa30: 0x1e00fff4  bgtz        $s0, . + 4 + (-0xC << 2)
    ctx->pc = 0x23FA30u;
    {
        const bool branch_taken_0x23fa30 = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x23fa30) {
            ctx->pc = 0x23FA04u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23fa04;
        }
    }
    ctx->pc = 0x23FA38u;
    // 0x23fa38: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x23fa38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x23fa3c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23fa3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23fa40: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x23fa40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23fa44: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x23fa44u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x23fa48: 0x3e00008  jr          $ra
    ctx->pc = 0x23FA48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23FA48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23FA50u;
}
