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

// Function: sub_001877F0
// Address: 0x1877f0 - 0x187880
void sub_001877F0_0x1877f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001877F0_0x1877f0");
#endif

    switch (ctx->pc) {
        case 0x18780cu: goto label_18780c;
        case 0x187818u: goto label_187818;
        case 0x187828u: goto label_187828;
        case 0x187834u: goto label_187834;
        case 0x187848u: goto label_187848;
        case 0x18785cu: goto label_18785c;
        default: break;
    }

    ctx->pc = 0x1877f0u;

label_1877f0:
    // 0x1877f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1877f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1877f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1877f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1877f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1877f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1877fc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1877fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x187800: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x187800u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x187804: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x187804u;
    {
        const bool branch_taken_0x187804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x187804) {
            ctx->pc = 0x187860u;
            goto label_187860;
        }
    }
    ctx->pc = 0x18780Cu;
label_18780c:
    // 0x18780c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x18780cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x187810: 0xc061dc0  jal         func_187700
    ctx->pc = 0x187810u;
    SET_GPR_U32(ctx, 31, 0x187818u);
    ctx->pc = 0x187700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187700u, 0x187810u, 0x187818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187818u;
label_187818:
    // 0x187818: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x187818u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18781c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x18781cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x187820: 0xc061dfc  jal         func_1877F0
    ctx->pc = 0x187820u;
    SET_GPR_U32(ctx, 31, 0x187828u);
    ctx->pc = 0x1877F0u;
    goto label_1877f0;
    ctx->pc = 0x187828u;
label_187828:
    // 0x187828: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x187828u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18782c: 0xc061dc8  jal         func_187720
    ctx->pc = 0x18782Cu;
    SET_GPR_U32(ctx, 31, 0x187834u);
    ctx->pc = 0x187720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187720u, 0x18782Cu, 0x187834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187834u;
label_187834:
    // 0x187834: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x187834u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x187838: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x187838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18783c: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x18783cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x187840: 0xc0619d0  jal         func_186740
    ctx->pc = 0x187840u;
    SET_GPR_U32(ctx, 31, 0x187848u);
    ctx->pc = 0x186740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186740u, 0x187840u, 0x187848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187848u;
label_187848:
    // 0x187848: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x187848u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18784c: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x18784cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x187850: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x187850u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x187854: 0xc061cb4  jal         func_1872D0
    ctx->pc = 0x187854u;
    SET_GPR_U32(ctx, 31, 0x18785Cu);
    ctx->pc = 0x1872D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1872D0u, 0x187854u, 0x18785Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18785Cu;
label_18785c:
    // 0x18785c: 0xafb00030  sw          $s0, 0x30($sp)
    ctx->pc = 0x18785cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 16));
label_187860:
    // 0x187860: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x187860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x187864: 0x1460ffe9  bnez        $v1, . + 4 + (-0x17 << 2)
    ctx->pc = 0x187864u;
    {
        const bool branch_taken_0x187864 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x187864) {
            ctx->pc = 0x18780Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18780c;
        }
    }
    ctx->pc = 0x18786Cu;
    // 0x18786c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x18786cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x187870: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x187870u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x187874: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x187874u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x187878: 0x3e00008  jr          $ra
    ctx->pc = 0x187878u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x187878u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x187880u;
}
