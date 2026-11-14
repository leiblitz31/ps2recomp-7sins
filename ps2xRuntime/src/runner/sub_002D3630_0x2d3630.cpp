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

// Function: sub_002D3630
// Address: 0x2d3630 - 0x2d36c0
void sub_002D3630_0x2d3630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D3630_0x2d3630");
#endif

    switch (ctx->pc) {
        case 0x2d3654u: goto label_2d3654;
        case 0x2d3660u: goto label_2d3660;
        case 0x2d3698u: goto label_2d3698;
        default: break;
    }

    ctx->pc = 0x2d3630u;

    // 0x2d3630: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2d3630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2d3634: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2d3634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2d3638: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d3638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d363c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2d363cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2d3640: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x2d3640u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x2d3644: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2d3644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d3648: 0x24440034  addiu       $a0, $v0, 0x34
    ctx->pc = 0x2d3648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
    // 0x2d364c: 0xc0b436c  jal         func_2D0DB0
    ctx->pc = 0x2D364Cu;
    SET_GPR_U32(ctx, 31, 0x2D3654u);
    ctx->pc = 0x2D0DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0DB0u, 0x2D364Cu, 0x2D3654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3654u;
label_2d3654:
    // 0x2d3654: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d3654u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3658: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2D3658u;
    {
        const bool branch_taken_0x2d3658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d3658) {
            ctx->pc = 0x2D3688u;
            goto label_2d3688;
        }
    }
    ctx->pc = 0x2D3660u;
label_2d3660:
    // 0x2d3660: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2d3660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d3664: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x2d3664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x2d3668: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2d3668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d366c: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D366Cu;
    {
        const bool branch_taken_0x2d366c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2d366c) {
            ctx->pc = 0x2D3684u;
            goto label_2d3684;
        }
    }
    ctx->pc = 0x2D3674u;
    // 0x2d3674: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2d3674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d3678: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x2d3678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x2d367c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2D367Cu;
    {
        const bool branch_taken_0x2d367c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d367c) {
            ctx->pc = 0x2D36A4u;
            goto label_2d36a4;
        }
    }
    ctx->pc = 0x2D3684u;
label_2d3684:
    // 0x2d3684: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2d3684u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_2d3688:
    // 0x2d3688: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2d3688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d368c: 0x24440034  addiu       $a0, $v0, 0x34
    ctx->pc = 0x2d368cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
    // 0x2d3690: 0xc0b4338  jal         func_2D0CE0
    ctx->pc = 0x2D3690u;
    SET_GPR_U32(ctx, 31, 0x2D3698u);
    ctx->pc = 0x2D0CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0CE0u, 0x2D3690u, 0x2D3698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3698u;
label_2d3698:
    // 0x2d3698: 0x1602fff1  bne         $s0, $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x2D3698u;
    {
        const bool branch_taken_0x2d3698 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x2d3698) {
            ctx->pc = 0x2D3660u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d3660;
        }
    }
    ctx->pc = 0x2D36A0u;
    // 0x2d36a0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d36a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d36a4:
    // 0x2d36a4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2d36a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d36a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d36a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d36ac: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2d36acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2d36b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2D36B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D36B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D36B8u;
    // 0x2d36b8: 0x0  nop
    ctx->pc = 0x2d36b8u;
    // NOP
    // 0x2d36bc: 0x0  nop
    ctx->pc = 0x2d36bcu;
    // NOP
    ctx->pc = 0x2d36c0u;
}
