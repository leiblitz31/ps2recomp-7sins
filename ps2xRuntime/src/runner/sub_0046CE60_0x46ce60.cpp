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

// Function: sub_0046CE60
// Address: 0x46ce60 - 0x46cef0
void sub_0046CE60_0x46ce60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046CE60_0x46ce60");
#endif

    switch (ctx->pc) {
        case 0x46cea4u: goto label_46cea4;
        case 0x46ceb4u: goto label_46ceb4;
        default: break;
    }

    ctx->pc = 0x46ce60u;

    // 0x46ce60: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x46ce60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x46ce64: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x46ce64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x46ce68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x46ce68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x46ce6c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x46ce6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x46ce70: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x46ce70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x46ce74: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x46ce74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x46ce78: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x46ce78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x46ce7c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x46ce7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x46ce80: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x46ce80u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x46ce84: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x46ce84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x46ce88: 0x38183  sra         $s0, $v1, 6
    ctx->pc = 0x46ce88u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 3), 6));
    // 0x46ce8c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x46CE8Cu;
    {
        const bool branch_taken_0x46ce8c = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x46ce8c) {
            ctx->pc = 0x46CE9Cu;
            goto label_46ce9c;
        }
    }
    ctx->pc = 0x46CE94u;
    // 0x46ce94: 0x2462003f  addiu       $v0, $v1, 0x3F
    ctx->pc = 0x46ce94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
    // 0x46ce98: 0x28183  sra         $s0, $v0, 6
    ctx->pc = 0x46ce98u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 6));
label_46ce9c:
    // 0x46ce9c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x46CE9Cu;
    {
        const bool branch_taken_0x46ce9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x46ce9c) {
            ctx->pc = 0x46CED0u;
            goto label_46ced0;
        }
    }
    ctx->pc = 0x46CEA4u;
label_46cea4:
    // 0x46cea4: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x46cea4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x46cea8: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x46cea8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x46ceac: 0xc11b0d0  jal         func_46C340
    ctx->pc = 0x46CEACu;
    SET_GPR_U32(ctx, 31, 0x46CEB4u);
    ctx->pc = 0x46C340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46C340u, 0x46CEACu, 0x46CEB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46CEB4u;
label_46ceb4:
    // 0x46ceb4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x46ceb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x46ceb8: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x46ceb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x46cebc: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x46cebcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x46cec0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x46cec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x46cec4: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x46cec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x46cec8: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x46cec8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x46cecc: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x46ceccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_46ced0:
    // 0x46ced0: 0x1e00fff4  bgtz        $s0, . + 4 + (-0xC << 2)
    ctx->pc = 0x46CED0u;
    {
        const bool branch_taken_0x46ced0 = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x46ced0) {
            ctx->pc = 0x46CEA4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_46cea4;
        }
    }
    ctx->pc = 0x46CED8u;
    // 0x46ced8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x46ced8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x46cedc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x46cedcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46cee0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x46cee0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x46cee4: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x46cee4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x46cee8: 0x3e00008  jr          $ra
    ctx->pc = 0x46CEE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46CEE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46CEF0u;
}
