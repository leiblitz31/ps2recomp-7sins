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

// Function: sub_002835E0
// Address: 0x2835e0 - 0x283670
void sub_002835E0_0x2835e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002835E0_0x2835e0");
#endif

    switch (ctx->pc) {
        case 0x2835fcu: goto label_2835fc;
        case 0x283608u: goto label_283608;
        case 0x283618u: goto label_283618;
        case 0x283624u: goto label_283624;
        case 0x283638u: goto label_283638;
        case 0x28364cu: goto label_28364c;
        default: break;
    }

    ctx->pc = 0x2835e0u;

label_2835e0:
    // 0x2835e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2835e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2835e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2835e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2835e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2835e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2835ec: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2835ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2835f0: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x2835f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x2835f4: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2835F4u;
    {
        const bool branch_taken_0x2835f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2835f4) {
            ctx->pc = 0x283650u;
            goto label_283650;
        }
    }
    ctx->pc = 0x2835FCu;
label_2835fc:
    // 0x2835fc: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x2835fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x283600: 0xc0a03e0  jal         func_280F80
    ctx->pc = 0x283600u;
    SET_GPR_U32(ctx, 31, 0x283608u);
    ctx->pc = 0x280F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280F80u, 0x283600u, 0x283608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283608u;
label_283608:
    // 0x283608: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x283608u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28360c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x28360cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x283610: 0xc0a0d78  jal         func_2835E0
    ctx->pc = 0x283610u;
    SET_GPR_U32(ctx, 31, 0x283618u);
    ctx->pc = 0x2835E0u;
    goto label_2835e0;
    ctx->pc = 0x283618u;
label_283618:
    // 0x283618: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x283618u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28361c: 0xc0a03e8  jal         func_280FA0
    ctx->pc = 0x28361Cu;
    SET_GPR_U32(ctx, 31, 0x283624u);
    ctx->pc = 0x280FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280FA0u, 0x28361Cu, 0x283624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283624u;
label_283624:
    // 0x283624: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x283624u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x283628: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x283628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28362c: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x28362cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x283630: 0xc0a0d9c  jal         func_283670
    ctx->pc = 0x283630u;
    SET_GPR_U32(ctx, 31, 0x283638u);
    ctx->pc = 0x283670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x283670u, 0x283630u, 0x283638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283638u;
label_283638:
    // 0x283638: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x283638u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28363c: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x28363cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x283640: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x283640u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x283644: 0xc0a0790  jal         func_281E40
    ctx->pc = 0x283644u;
    SET_GPR_U32(ctx, 31, 0x28364Cu);
    ctx->pc = 0x281E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281E40u, 0x283644u, 0x28364Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28364Cu;
label_28364c:
    // 0x28364c: 0xafb00030  sw          $s0, 0x30($sp)
    ctx->pc = 0x28364cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 16));
label_283650:
    // 0x283650: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x283650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x283654: 0x1460ffe9  bnez        $v1, . + 4 + (-0x17 << 2)
    ctx->pc = 0x283654u;
    {
        const bool branch_taken_0x283654 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x283654) {
            ctx->pc = 0x2835FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2835fc;
        }
    }
    ctx->pc = 0x28365Cu;
    // 0x28365c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x28365cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x283660: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x283660u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x283664: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x283664u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x283668: 0x3e00008  jr          $ra
    ctx->pc = 0x283668u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x283668u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x283670u;
}
