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

// Function: sub_00225B60
// Address: 0x225b60 - 0x225bf0
void sub_00225B60_0x225b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00225B60_0x225b60");
#endif

    switch (ctx->pc) {
        case 0x225b7cu: goto label_225b7c;
        case 0x225b88u: goto label_225b88;
        case 0x225b98u: goto label_225b98;
        case 0x225ba4u: goto label_225ba4;
        case 0x225bb8u: goto label_225bb8;
        case 0x225bccu: goto label_225bcc;
        default: break;
    }

    ctx->pc = 0x225b60u;

label_225b60:
    // 0x225b60: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x225b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x225b64: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x225b64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x225b68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x225b68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x225b6c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x225b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x225b70: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x225b70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x225b74: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x225B74u;
    {
        const bool branch_taken_0x225b74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x225b74) {
            ctx->pc = 0x225BD0u;
            goto label_225bd0;
        }
    }
    ctx->pc = 0x225B7Cu;
label_225b7c:
    // 0x225b7c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x225b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x225b80: 0xc08637c  jal         func_218DF0
    ctx->pc = 0x225B80u;
    SET_GPR_U32(ctx, 31, 0x225B88u);
    ctx->pc = 0x218DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218DF0u, 0x225B80u, 0x225B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225B88u;
label_225b88:
    // 0x225b88: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x225b88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x225b8c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x225b8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x225b90: 0xc0896d8  jal         func_225B60
    ctx->pc = 0x225B90u;
    SET_GPR_U32(ctx, 31, 0x225B98u);
    ctx->pc = 0x225B60u;
    goto label_225b60;
    ctx->pc = 0x225B98u;
label_225b98:
    // 0x225b98: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x225b98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x225b9c: 0xc086384  jal         func_218E10
    ctx->pc = 0x225B9Cu;
    SET_GPR_U32(ctx, 31, 0x225BA4u);
    ctx->pc = 0x218E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218E10u, 0x225B9Cu, 0x225BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225BA4u;
label_225ba4:
    // 0x225ba4: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x225ba4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x225ba8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x225ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x225bac: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x225bacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x225bb0: 0xc0896fc  jal         func_225BF0
    ctx->pc = 0x225BB0u;
    SET_GPR_U32(ctx, 31, 0x225BB8u);
    ctx->pc = 0x225BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225BF0u, 0x225BB0u, 0x225BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225BB8u;
label_225bb8:
    // 0x225bb8: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x225bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x225bbc: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x225bbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x225bc0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x225bc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x225bc4: 0xc0894fc  jal         func_2253F0
    ctx->pc = 0x225BC4u;
    SET_GPR_U32(ctx, 31, 0x225BCCu);
    ctx->pc = 0x2253F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2253F0u, 0x225BC4u, 0x225BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225BCCu;
label_225bcc:
    // 0x225bcc: 0xafb00030  sw          $s0, 0x30($sp)
    ctx->pc = 0x225bccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 16));
label_225bd0:
    // 0x225bd0: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x225bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x225bd4: 0x1460ffe9  bnez        $v1, . + 4 + (-0x17 << 2)
    ctx->pc = 0x225BD4u;
    {
        const bool branch_taken_0x225bd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x225bd4) {
            ctx->pc = 0x225B7Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_225b7c;
        }
    }
    ctx->pc = 0x225BDCu;
    // 0x225bdc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x225bdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x225be0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x225be0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x225be4: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x225be4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x225be8: 0x3e00008  jr          $ra
    ctx->pc = 0x225BE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x225BE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x225BF0u;
}
