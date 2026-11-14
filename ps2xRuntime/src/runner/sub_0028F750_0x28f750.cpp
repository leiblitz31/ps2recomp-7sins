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

// Function: sub_0028F750
// Address: 0x28f750 - 0x28f7e0
void sub_0028F750_0x28f750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028F750_0x28f750");
#endif

    switch (ctx->pc) {
        case 0x28f76cu: goto label_28f76c;
        case 0x28f778u: goto label_28f778;
        case 0x28f788u: goto label_28f788;
        case 0x28f794u: goto label_28f794;
        case 0x28f7a8u: goto label_28f7a8;
        case 0x28f7bcu: goto label_28f7bc;
        default: break;
    }

    ctx->pc = 0x28f750u;

label_28f750:
    // 0x28f750: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x28f750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x28f754: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x28f754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x28f758: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x28f758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x28f75c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x28f75cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x28f760: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x28f760u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x28f764: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x28F764u;
    {
        const bool branch_taken_0x28f764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28f764) {
            ctx->pc = 0x28F7C0u;
            goto label_28f7c0;
        }
    }
    ctx->pc = 0x28F76Cu;
label_28f76c:
    // 0x28f76c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x28f76cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28f770: 0xc0a3d9c  jal         func_28F670
    ctx->pc = 0x28F770u;
    SET_GPR_U32(ctx, 31, 0x28F778u);
    ctx->pc = 0x28F670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F670u, 0x28F770u, 0x28F778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F778u;
label_28f778:
    // 0x28f778: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x28f778u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28f77c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x28f77cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28f780: 0xc0a3dd4  jal         func_28F750
    ctx->pc = 0x28F780u;
    SET_GPR_U32(ctx, 31, 0x28F788u);
    ctx->pc = 0x28F750u;
    goto label_28f750;
    ctx->pc = 0x28F788u;
label_28f788:
    // 0x28f788: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x28f788u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28f78c: 0xc0a3da4  jal         func_28F690
    ctx->pc = 0x28F78Cu;
    SET_GPR_U32(ctx, 31, 0x28F794u);
    ctx->pc = 0x28F690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F690u, 0x28F78Cu, 0x28F794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F794u;
label_28f794:
    // 0x28f794: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x28f794u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28f798: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x28f798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28f79c: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x28f79cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x28f7a0: 0xc0a3df8  jal         func_28F7E0
    ctx->pc = 0x28F7A0u;
    SET_GPR_U32(ctx, 31, 0x28F7A8u);
    ctx->pc = 0x28F7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F7E0u, 0x28F7A0u, 0x28F7A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F7A8u;
label_28f7a8:
    // 0x28f7a8: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x28f7a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28f7ac: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x28f7acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28f7b0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x28f7b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28f7b4: 0xc0a37a0  jal         func_28DE80
    ctx->pc = 0x28F7B4u;
    SET_GPR_U32(ctx, 31, 0x28F7BCu);
    ctx->pc = 0x28DE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DE80u, 0x28F7B4u, 0x28F7BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F7BCu;
label_28f7bc:
    // 0x28f7bc: 0xafb00030  sw          $s0, 0x30($sp)
    ctx->pc = 0x28f7bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 16));
label_28f7c0:
    // 0x28f7c0: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x28f7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28f7c4: 0x1460ffe9  bnez        $v1, . + 4 + (-0x17 << 2)
    ctx->pc = 0x28F7C4u;
    {
        const bool branch_taken_0x28f7c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x28f7c4) {
            ctx->pc = 0x28F76Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28f76c;
        }
    }
    ctx->pc = 0x28F7CCu;
    // 0x28f7cc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x28f7ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28f7d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x28f7d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28f7d4: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x28f7d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x28f7d8: 0x3e00008  jr          $ra
    ctx->pc = 0x28F7D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28F7D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28F7E0u;
}
