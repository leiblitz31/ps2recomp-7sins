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

// Function: sub_0045E720
// Address: 0x45e720 - 0x45e830
void sub_0045E720_0x45e720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0045E720_0x45e720");
#endif

    switch (ctx->pc) {
        case 0x45e734u: goto label_45e734;
        case 0x45e73cu: goto label_45e73c;
        case 0x45e754u: goto label_45e754;
        case 0x45e770u: goto label_45e770;
        case 0x45e78cu: goto label_45e78c;
        case 0x45e79cu: goto label_45e79c;
        case 0x45e7f0u: goto label_45e7f0;
        default: break;
    }

    ctx->pc = 0x45e720u;

    // 0x45e720: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x45e720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x45e724: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x45e724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x45e728: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x45e728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x45e72c: 0xc117a88  jal         func_45EA20
    ctx->pc = 0x45E72Cu;
    SET_GPR_U32(ctx, 31, 0x45E734u);
    ctx->pc = 0x45EA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45EA20u, 0x45E72Cu, 0x45E734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45E734u;
label_45e734:
    // 0x45e734: 0xc0f0bce  jal         func_3C2F38
    ctx->pc = 0x45E734u;
    SET_GPR_U32(ctx, 31, 0x45E73Cu);
    ctx->pc = 0x3C2F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2F38u, 0x45E734u, 0x45E73Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45E73Cu;
label_45e73c:
    // 0x45e73c: 0x8f82bf7c  lw          $v0, -0x4084($gp)
    ctx->pc = 0x45e73cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950780)));
    // 0x45e740: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x45E740u;
    {
        const bool branch_taken_0x45e740 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45e740) {
            ctx->pc = 0x45E758u;
            goto label_45e758;
        }
    }
    ctx->pc = 0x45E748u;
    // 0x45e748: 0x8f84bf7c  lw          $a0, -0x4084($gp)
    ctx->pc = 0x45e748u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950780)));
    // 0x45e74c: 0xc119c5c  jal         func_467170
    ctx->pc = 0x45E74Cu;
    SET_GPR_U32(ctx, 31, 0x45E754u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x45E74Cu, 0x45E754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45E754u;
label_45e754:
    // 0x45e754: 0xaf80bf7c  sw          $zero, -0x4084($gp)
    ctx->pc = 0x45e754u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950780), GPR_U32(ctx, 0));
label_45e758:
    // 0x45e758: 0x8f82bf80  lw          $v0, -0x4080($gp)
    ctx->pc = 0x45e758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950784)));
    // 0x45e75c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x45E75Cu;
    {
        const bool branch_taken_0x45e75c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45e75c) {
            ctx->pc = 0x45E774u;
            goto label_45e774;
        }
    }
    ctx->pc = 0x45E764u;
    // 0x45e764: 0x8f84bf80  lw          $a0, -0x4080($gp)
    ctx->pc = 0x45e764u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950784)));
    // 0x45e768: 0xc119c5c  jal         func_467170
    ctx->pc = 0x45E768u;
    SET_GPR_U32(ctx, 31, 0x45E770u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x45E768u, 0x45E770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45E770u;
label_45e770:
    // 0x45e770: 0xaf80bf80  sw          $zero, -0x4080($gp)
    ctx->pc = 0x45e770u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950784), GPR_U32(ctx, 0));
label_45e774:
    // 0x45e774: 0x8f82bf84  lw          $v0, -0x407C($gp)
    ctx->pc = 0x45e774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950788)));
    // 0x45e778: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x45E778u;
    {
        const bool branch_taken_0x45e778 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45e778) {
            ctx->pc = 0x45E790u;
            goto label_45e790;
        }
    }
    ctx->pc = 0x45E780u;
    // 0x45e780: 0x8f84bf84  lw          $a0, -0x407C($gp)
    ctx->pc = 0x45e780u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950788)));
    // 0x45e784: 0xc119c5c  jal         func_467170
    ctx->pc = 0x45E784u;
    SET_GPR_U32(ctx, 31, 0x45E78Cu);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x45E784u, 0x45E78Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45E78Cu;
label_45e78c:
    // 0x45e78c: 0xaf80bf84  sw          $zero, -0x407C($gp)
    ctx->pc = 0x45e78cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950788), GPR_U32(ctx, 0));
label_45e790:
    // 0x45e790: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x45e790u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45e794: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x45E794u;
    {
        const bool branch_taken_0x45e794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45e794) {
            ctx->pc = 0x45E808u;
            goto label_45e808;
        }
    }
    ctx->pc = 0x45E79Cu;
label_45e79c:
    // 0x45e79c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x45e79cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x45e7a0: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x45e7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x45e7a4: 0x24424d08  addiu       $v0, $v0, 0x4D08
    ctx->pc = 0x45e7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19720));
    // 0x45e7a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x45e7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x45e7ac: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x45e7acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x45e7b0: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x45E7B0u;
    {
        const bool branch_taken_0x45e7b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45e7b0) {
            ctx->pc = 0x45E804u;
            goto label_45e804;
        }
    }
    ctx->pc = 0x45E7B8u;
    // 0x45e7b8: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x45e7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x45e7bc: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x45e7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x45e7c0: 0x24424d08  addiu       $v0, $v0, 0x4D08
    ctx->pc = 0x45e7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19720));
    // 0x45e7c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x45e7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x45e7c8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x45e7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x45e7cc: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x45E7CCu;
    {
        const bool branch_taken_0x45e7cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45e7cc) {
            ctx->pc = 0x45E804u;
            goto label_45e804;
        }
    }
    ctx->pc = 0x45E7D4u;
    // 0x45e7d4: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x45e7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x45e7d8: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x45e7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x45e7dc: 0x24424d08  addiu       $v0, $v0, 0x4D08
    ctx->pc = 0x45e7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19720));
    // 0x45e7e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x45e7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x45e7e4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x45e7e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x45e7e8: 0xc119c5c  jal         func_467170
    ctx->pc = 0x45E7E8u;
    SET_GPR_U32(ctx, 31, 0x45E7F0u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x45E7E8u, 0x45E7F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45E7F0u;
label_45e7f0:
    // 0x45e7f0: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x45e7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x45e7f4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x45e7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x45e7f8: 0x24424d08  addiu       $v0, $v0, 0x4D08
    ctx->pc = 0x45e7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19720));
    // 0x45e7fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x45e7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x45e800: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x45e800u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_45e804:
    // 0x45e804: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x45e804u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_45e808:
    // 0x45e808: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x45e808u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x45e80c: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x45E80Cu;
    {
        const bool branch_taken_0x45e80c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x45e80c) {
            ctx->pc = 0x45E79Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45e79c;
        }
    }
    ctx->pc = 0x45E814u;
    // 0x45e814: 0xaf80bf88  sw          $zero, -0x4078($gp)
    ctx->pc = 0x45e814u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950792), GPR_U32(ctx, 0));
    // 0x45e818: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x45e818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x45e81c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x45e81cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x45e820: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x45e820u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x45e824: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x45e824u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x45e828: 0x3e00008  jr          $ra
    ctx->pc = 0x45E828u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45E828u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x45E830u;
}
