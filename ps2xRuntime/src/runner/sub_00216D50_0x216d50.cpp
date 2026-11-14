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

// Function: sub_00216D50
// Address: 0x216d50 - 0x216de0
void sub_00216D50_0x216d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00216D50_0x216d50");
#endif

    switch (ctx->pc) {
        case 0x216d94u: goto label_216d94;
        case 0x216da4u: goto label_216da4;
        default: break;
    }

    ctx->pc = 0x216d50u;

    // 0x216d50: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x216d50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x216d54: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x216d54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x216d58: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x216d58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x216d5c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x216d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x216d60: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x216d60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x216d64: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x216d64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x216d68: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x216d68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x216d6c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x216d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x216d70: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x216d70u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x216d74: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x216d74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x216d78: 0x380c3  sra         $s0, $v1, 3
    ctx->pc = 0x216d78u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 3), 3));
    // 0x216d7c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x216D7Cu;
    {
        const bool branch_taken_0x216d7c = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x216d7c) {
            ctx->pc = 0x216D8Cu;
            goto label_216d8c;
        }
    }
    ctx->pc = 0x216D84u;
    // 0x216d84: 0x24620007  addiu       $v0, $v1, 0x7
    ctx->pc = 0x216d84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 7));
    // 0x216d88: 0x280c3  sra         $s0, $v0, 3
    ctx->pc = 0x216d88u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 3));
label_216d8c:
    // 0x216d8c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x216D8Cu;
    {
        const bool branch_taken_0x216d8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x216d8c) {
            ctx->pc = 0x216DC0u;
            goto label_216dc0;
        }
    }
    ctx->pc = 0x216D94u;
label_216d94:
    // 0x216d94: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x216d94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x216d98: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x216d98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x216d9c: 0xc085b78  jal         func_216DE0
    ctx->pc = 0x216D9Cu;
    SET_GPR_U32(ctx, 31, 0x216DA4u);
    ctx->pc = 0x216DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x216DE0u, 0x216D9Cu, 0x216DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216DA4u;
label_216da4:
    // 0x216da4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x216da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x216da8: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x216da8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x216dac: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x216dacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x216db0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x216db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x216db4: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x216db4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x216db8: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x216db8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x216dbc: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x216dbcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_216dc0:
    // 0x216dc0: 0x1e00fff4  bgtz        $s0, . + 4 + (-0xC << 2)
    ctx->pc = 0x216DC0u;
    {
        const bool branch_taken_0x216dc0 = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x216dc0) {
            ctx->pc = 0x216D94u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_216d94;
        }
    }
    ctx->pc = 0x216DC8u;
    // 0x216dc8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x216dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x216dcc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x216dccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x216dd0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x216dd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x216dd4: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x216dd4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x216dd8: 0x3e00008  jr          $ra
    ctx->pc = 0x216DD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x216DD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x216DE0u;
}
