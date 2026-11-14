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

// Function: sub_00112A30
// Address: 0x112a30 - 0x112ac0
void sub_00112A30_0x112a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00112A30_0x112a30");
#endif

    switch (ctx->pc) {
        case 0x112a4cu: goto label_112a4c;
        case 0x112a58u: goto label_112a58;
        case 0x112a68u: goto label_112a68;
        case 0x112a74u: goto label_112a74;
        case 0x112a88u: goto label_112a88;
        case 0x112a9cu: goto label_112a9c;
        default: break;
    }

    ctx->pc = 0x112a30u;

label_112a30:
    // 0x112a30: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x112a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x112a34: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x112a34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x112a38: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x112a38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x112a3c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x112a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x112a40: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x112a40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x112a44: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x112A44u;
    {
        const bool branch_taken_0x112a44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x112a44) {
            ctx->pc = 0x112AA0u;
            goto label_112aa0;
        }
    }
    ctx->pc = 0x112A4Cu;
label_112a4c:
    // 0x112a4c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x112a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x112a50: 0xc044684  jal         func_111A10
    ctx->pc = 0x112A50u;
    SET_GPR_U32(ctx, 31, 0x112A58u);
    ctx->pc = 0x111A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111A10u, 0x112A50u, 0x112A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112A58u;
label_112a58:
    // 0x112a58: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x112a58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x112a5c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x112a5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x112a60: 0xc044a8c  jal         func_112A30
    ctx->pc = 0x112A60u;
    SET_GPR_U32(ctx, 31, 0x112A68u);
    ctx->pc = 0x112A30u;
    goto label_112a30;
    ctx->pc = 0x112A68u;
label_112a68:
    // 0x112a68: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x112a68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x112a6c: 0xc04468c  jal         func_111A30
    ctx->pc = 0x112A6Cu;
    SET_GPR_U32(ctx, 31, 0x112A74u);
    ctx->pc = 0x111A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111A30u, 0x112A6Cu, 0x112A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112A74u;
label_112a74:
    // 0x112a74: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x112a74u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x112a78: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x112a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x112a7c: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x112a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x112a80: 0xc044ab0  jal         func_112AC0
    ctx->pc = 0x112A80u;
    SET_GPR_U32(ctx, 31, 0x112A88u);
    ctx->pc = 0x112AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112AC0u, 0x112A80u, 0x112A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112A88u;
label_112a88:
    // 0x112a88: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x112a88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x112a8c: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x112a8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x112a90: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x112a90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x112a94: 0xc0448b4  jal         func_1122D0
    ctx->pc = 0x112A94u;
    SET_GPR_U32(ctx, 31, 0x112A9Cu);
    ctx->pc = 0x1122D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1122D0u, 0x112A94u, 0x112A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112A9Cu;
label_112a9c:
    // 0x112a9c: 0xafb00030  sw          $s0, 0x30($sp)
    ctx->pc = 0x112a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 16));
label_112aa0:
    // 0x112aa0: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x112aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x112aa4: 0x1460ffe9  bnez        $v1, . + 4 + (-0x17 << 2)
    ctx->pc = 0x112AA4u;
    {
        const bool branch_taken_0x112aa4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x112aa4) {
            ctx->pc = 0x112A4Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_112a4c;
        }
    }
    ctx->pc = 0x112AACu;
    // 0x112aac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x112aacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x112ab0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x112ab0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x112ab4: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x112ab4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x112ab8: 0x3e00008  jr          $ra
    ctx->pc = 0x112AB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x112AB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x112AC0u;
}
