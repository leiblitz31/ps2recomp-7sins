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

// Function: sub_002795E0
// Address: 0x2795e0 - 0x279680
void sub_002795E0_0x2795e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002795E0_0x2795e0");
#endif

    switch (ctx->pc) {
        case 0x27960cu: goto label_27960c;
        case 0x27961cu: goto label_27961c;
        case 0x279630u: goto label_279630;
        case 0x279640u: goto label_279640;
        case 0x279658u: goto label_279658;
        default: break;
    }

    ctx->pc = 0x2795e0u;

    // 0x2795e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2795e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2795e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2795e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2795e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2795e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2795ec: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2795ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2795f0: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2795f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2795f4: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x2795f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2795f8: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x2795F8u;
    {
        const bool branch_taken_0x2795f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2795f8) {
            ctx->pc = 0x279664u;
            goto label_279664;
        }
    }
    ctx->pc = 0x279600u;
    // 0x279600: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x279600u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x279604: 0xc09e5b0  jal         func_2796C0
    ctx->pc = 0x279604u;
    SET_GPR_U32(ctx, 31, 0x27960Cu);
    ctx->pc = 0x2796C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2796C0u, 0x279604u, 0x27960Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27960Cu;
label_27960c:
    // 0x27960c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x27960cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x279610: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x279610u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x279614: 0xc0a0b2c  jal         func_282CB0
    ctx->pc = 0x279614u;
    SET_GPR_U32(ctx, 31, 0x27961Cu);
    ctx->pc = 0x282CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282CB0u, 0x279614u, 0x27961Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27961Cu;
label_27961c:
    // 0x27961c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x27961cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x279620: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x279620u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x279624: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x279624u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x279628: 0xc09e5a8  jal         func_2796A0
    ctx->pc = 0x279628u;
    SET_GPR_U32(ctx, 31, 0x279630u);
    ctx->pc = 0x2796A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2796A0u, 0x279628u, 0x279630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279630u;
label_279630:
    // 0x279630: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x279630u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x279634: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x279634u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x279638: 0xc09e5b0  jal         func_2796C0
    ctx->pc = 0x279638u;
    SET_GPR_U32(ctx, 31, 0x279640u);
    ctx->pc = 0x2796C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2796C0u, 0x279638u, 0x279640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279640u;
label_279640:
    // 0x279640: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x279640u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x279644: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x279644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x279648: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x279648u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27964c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x27964cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x279650: 0xc09e5a0  jal         func_279680
    ctx->pc = 0x279650u;
    SET_GPR_U32(ctx, 31, 0x279658u);
    ctx->pc = 0x279680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x279680u, 0x279650u, 0x279658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279658u;
label_279658:
    // 0x279658: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x279658u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x27965c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x27965cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x279660: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x279660u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_279664:
    // 0x279664: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x279664u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x279668: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x279668u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27966c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x27966cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x279670: 0x3e00008  jr          $ra
    ctx->pc = 0x279670u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x279670u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x279678u;
    // 0x279678: 0x0  nop
    ctx->pc = 0x279678u;
    // NOP
    // 0x27967c: 0x0  nop
    ctx->pc = 0x27967cu;
    // NOP
    ctx->pc = 0x279680u;
}
