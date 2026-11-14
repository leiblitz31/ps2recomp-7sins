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

// Function: sub_002D36C0
// Address: 0x2d36c0 - 0x2d3750
void sub_002D36C0_0x2d36c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D36C0_0x2d36c0");
#endif

    switch (ctx->pc) {
        case 0x2d36e4u: goto label_2d36e4;
        case 0x2d36f0u: goto label_2d36f0;
        case 0x2d3724u: goto label_2d3724;
        default: break;
    }

    ctx->pc = 0x2d36c0u;

    // 0x2d36c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2d36c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2d36c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2d36c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2d36c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d36c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d36cc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2d36ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2d36d0: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x2d36d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x2d36d4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2d36d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d36d8: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x2d36d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x2d36dc: 0xc0b42ec  jal         func_2D0BB0
    ctx->pc = 0x2D36DCu;
    SET_GPR_U32(ctx, 31, 0x2D36E4u);
    ctx->pc = 0x2D0BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0BB0u, 0x2D36DCu, 0x2D36E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D36E4u;
label_2d36e4:
    // 0x2d36e4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d36e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d36e8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2D36E8u;
    {
        const bool branch_taken_0x2d36e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d36e8) {
            ctx->pc = 0x2D3714u;
            goto label_2d3714;
        }
    }
    ctx->pc = 0x2D36F0u;
label_2d36f0:
    // 0x2d36f0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2d36f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d36f4: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x2d36f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x2d36f8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2d36f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d36fc: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D36FCu;
    {
        const bool branch_taken_0x2d36fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2d36fc) {
            ctx->pc = 0x2D3710u;
            goto label_2d3710;
        }
    }
    ctx->pc = 0x2D3704u;
    // 0x2d3704: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d3704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d3708: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2D3708u;
    {
        const bool branch_taken_0x2d3708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d3708) {
            ctx->pc = 0x2D3730u;
            goto label_2d3730;
        }
    }
    ctx->pc = 0x2D3710u;
label_2d3710:
    // 0x2d3710: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2d3710u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_2d3714:
    // 0x2d3714: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2d3714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d3718: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x2d3718u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x2d371c: 0xc0b42d4  jal         func_2D0B50
    ctx->pc = 0x2D371Cu;
    SET_GPR_U32(ctx, 31, 0x2D3724u);
    ctx->pc = 0x2D0B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0B50u, 0x2D371Cu, 0x2D3724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3724u;
label_2d3724:
    // 0x2d3724: 0x1602fff2  bne         $s0, $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x2D3724u;
    {
        const bool branch_taken_0x2d3724 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x2d3724) {
            ctx->pc = 0x2D36F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d36f0;
        }
    }
    ctx->pc = 0x2D372Cu;
    // 0x2d372c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d372cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d3730:
    // 0x2d3730: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2d3730u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d3734: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d3734u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d3738: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2d3738u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2d373c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D373Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D373Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D3744u;
    // 0x2d3744: 0x0  nop
    ctx->pc = 0x2d3744u;
    // NOP
    // 0x2d3748: 0x0  nop
    ctx->pc = 0x2d3748u;
    // NOP
    // 0x2d374c: 0x0  nop
    ctx->pc = 0x2d374cu;
    // NOP
    ctx->pc = 0x2d3750u;
}
