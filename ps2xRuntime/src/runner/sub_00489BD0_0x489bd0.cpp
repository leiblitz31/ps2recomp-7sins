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

// Function: sub_00489BD0
// Address: 0x489bd0 - 0x489c60
void sub_00489BD0_0x489bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00489BD0_0x489bd0");
#endif

    ctx->pc = 0x489bd0u;

    // 0x489bd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x489bd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x489bd4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x489bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x489bd8: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x489bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x489bdc: 0xafa60020  sw          $a2, 0x20($sp)
    ctx->pc = 0x489bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
    // 0x489be0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x489be0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x489be4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x489be4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x489be8: 0xac640078  sw          $a0, 0x78($v1)
    ctx->pc = 0x489be8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 120), GPR_U32(ctx, 4));
    // 0x489bec: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x489becu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x489bf0: 0x8c630078  lw          $v1, 0x78($v1)
    ctx->pc = 0x489bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 120)));
    // 0x489bf4: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x489BF4u;
    {
        const bool branch_taken_0x489bf4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x489bf4) {
            ctx->pc = 0x489C38u;
            goto label_489c38;
        }
    }
    ctx->pc = 0x489BFCu;
    // 0x489bfc: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x489bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x489c00: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x489C00u;
    {
        const bool branch_taken_0x489c00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x489c00) {
            ctx->pc = 0x489C1Cu;
            goto label_489c1c;
        }
    }
    ctx->pc = 0x489C08u;
    // 0x489c08: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x489c08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x489c0c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x489c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x489c10: 0xac64007c  sw          $a0, 0x7C($v1)
    ctx->pc = 0x489c10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 124), GPR_U32(ctx, 4));
    // 0x489c14: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x489C14u;
    {
        const bool branch_taken_0x489c14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x489c14) {
            ctx->pc = 0x489C40u;
            goto label_489c40;
        }
    }
    ctx->pc = 0x489C1Cu;
label_489c1c:
    // 0x489c1c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x489c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x489c20: 0x8c630078  lw          $v1, 0x78($v1)
    ctx->pc = 0x489c20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 120)));
    // 0x489c24: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x489c24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x489c28: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x489c28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x489c2c: 0xac64007c  sw          $a0, 0x7C($v1)
    ctx->pc = 0x489c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 124), GPR_U32(ctx, 4));
    // 0x489c30: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x489C30u;
    {
        const bool branch_taken_0x489c30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x489c30) {
            ctx->pc = 0x489C40u;
            goto label_489c40;
        }
    }
    ctx->pc = 0x489C38u;
label_489c38:
    // 0x489c38: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x489c38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x489c3c: 0xac60007c  sw          $zero, 0x7C($v1)
    ctx->pc = 0x489c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 124), GPR_U32(ctx, 0));
label_489c40:
    // 0x489c40: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x489c40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x489c44: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x489c44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x489c48: 0xac64008c  sw          $a0, 0x8C($v1)
    ctx->pc = 0x489c48u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 140), GPR_U32(ctx, 4));
    // 0x489c4c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x489c4cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x489c50: 0x3e00008  jr          $ra
    ctx->pc = 0x489C50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x489C50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x489C58u;
    // 0x489c58: 0x0  nop
    ctx->pc = 0x489c58u;
    // NOP
    // 0x489c5c: 0x0  nop
    ctx->pc = 0x489c5cu;
    // NOP
    ctx->pc = 0x489c60u;
}
