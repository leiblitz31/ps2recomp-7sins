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

// Function: sub_001060D0
// Address: 0x1060d0 - 0x106170
void sub_001060D0_0x1060d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001060D0_0x1060d0");
#endif

    switch (ctx->pc) {
        case 0x1060fcu: goto label_1060fc;
        case 0x10610cu: goto label_10610c;
        case 0x106120u: goto label_106120;
        case 0x106130u: goto label_106130;
        case 0x106148u: goto label_106148;
        default: break;
    }

    ctx->pc = 0x1060d0u;

    // 0x1060d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1060d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1060d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1060d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1060d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1060d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1060dc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1060dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1060e0: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1060e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1060e4: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x1060e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1060e8: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x1060E8u;
    {
        const bool branch_taken_0x1060e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1060e8) {
            ctx->pc = 0x106154u;
            goto label_106154;
        }
    }
    ctx->pc = 0x1060F0u;
    // 0x1060f0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1060f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1060f4: 0xc04186c  jal         func_1061B0
    ctx->pc = 0x1060F4u;
    SET_GPR_U32(ctx, 31, 0x1060FCu);
    ctx->pc = 0x1061B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1061B0u, 0x1060F4u, 0x1060FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1060FCu;
label_1060fc:
    // 0x1060fc: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1060fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x106100: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x106100u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x106104: 0xc042704  jal         func_109C10
    ctx->pc = 0x106104u;
    SET_GPR_U32(ctx, 31, 0x10610Cu);
    ctx->pc = 0x109C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109C10u, 0x106104u, 0x10610Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10610Cu;
label_10610c:
    // 0x10610c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x10610cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x106110: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x106110u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x106114: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x106114u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x106118: 0xc041864  jal         func_106190
    ctx->pc = 0x106118u;
    SET_GPR_U32(ctx, 31, 0x106120u);
    ctx->pc = 0x106190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106190u, 0x106118u, 0x106120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106120u;
label_106120:
    // 0x106120: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x106120u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x106124: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x106124u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x106128: 0xc04186c  jal         func_1061B0
    ctx->pc = 0x106128u;
    SET_GPR_U32(ctx, 31, 0x106130u);
    ctx->pc = 0x1061B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1061B0u, 0x106128u, 0x106130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106130u;
label_106130:
    // 0x106130: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x106130u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x106134: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x106134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x106138: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x106138u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10613c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x10613cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x106140: 0xc04185c  jal         func_106170
    ctx->pc = 0x106140u;
    SET_GPR_U32(ctx, 31, 0x106148u);
    ctx->pc = 0x106170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106170u, 0x106140u, 0x106148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106148u;
label_106148:
    // 0x106148: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x106148u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x10614c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x10614cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x106150: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x106150u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_106154:
    // 0x106154: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x106154u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x106158: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x106158u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10615c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x10615cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x106160: 0x3e00008  jr          $ra
    ctx->pc = 0x106160u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x106160u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x106168u;
    // 0x106168: 0x0  nop
    ctx->pc = 0x106168u;
    // NOP
    // 0x10616c: 0x0  nop
    ctx->pc = 0x10616cu;
    // NOP
    ctx->pc = 0x106170u;
}
