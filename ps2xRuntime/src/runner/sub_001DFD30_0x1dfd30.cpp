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

// Function: sub_001DFD30
// Address: 0x1dfd30 - 0x1dfd90
void sub_001DFD30_0x1dfd30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DFD30_0x1dfd30");
#endif

    ctx->pc = 0x1dfd30u;

    // 0x1dfd30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1dfd30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1dfd34: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1dfd34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1dfd38: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x1dfd38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x1dfd3c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1dfd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dfd40: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1dfd40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1dfd44: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1dfd44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dfd48: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1dfd48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1dfd4c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1dfd4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1dfd50: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1dfd50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1dfd54: 0x31083  sra         $v0, $v1, 2
    ctx->pc = 0x1dfd54u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
    // 0x1dfd58: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DFD58u;
    {
        const bool branch_taken_0x1dfd58 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1dfd58) {
            ctx->pc = 0x1DFD68u;
            goto label_1dfd68;
        }
    }
    ctx->pc = 0x1DFD60u;
    // 0x1dfd60: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x1dfd60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x1dfd64: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x1dfd64u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_1dfd68:
    // 0x1dfd68: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x1dfd68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1dfd6c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1dfd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dfd70: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1dfd70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1dfd74: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1dfd74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1dfd78: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1dfd78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dfd7c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1dfd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1dfd80: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x1dfd80u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1dfd84: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1dfd84u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1dfd88: 0x3e00008  jr          $ra
    ctx->pc = 0x1DFD88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DFD88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DFD90u;
}
