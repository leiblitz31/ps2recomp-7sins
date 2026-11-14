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

// Function: sub_00139370
// Address: 0x139370 - 0x139430
void sub_00139370_0x139370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00139370_0x139370");
#endif

    switch (ctx->pc) {
        case 0x139390u: goto label_139390;
        case 0x1393a4u: goto label_1393a4;
        case 0x1393c4u: goto label_1393c4;
        case 0x1393d8u: goto label_1393d8;
        case 0x1393f4u: goto label_1393f4;
        case 0x139410u: goto label_139410;
        default: break;
    }

    ctx->pc = 0x139370u;

    // 0x139370: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x139370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x139374: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x139374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x139378: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x139378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13937c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x13937cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x139380: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x139380u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x139384: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x139384u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139388: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x139388u;
    {
        const bool branch_taken_0x139388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x139388) {
            ctx->pc = 0x1393E4u;
            goto label_1393e4;
        }
    }
    ctx->pc = 0x139390u;
label_139390:
    // 0x139390: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x139390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x139394: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x139394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x139398: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x139398u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13939c: 0xc04e51c  jal         func_139470
    ctx->pc = 0x13939Cu;
    SET_GPR_U32(ctx, 31, 0x1393A4u);
    ctx->pc = 0x139470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139470u, 0x13939Cu, 0x1393A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1393A4u;
label_1393a4:
    // 0x1393a4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1393a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1393a8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1393A8u;
    {
        const bool branch_taken_0x1393a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1393a8) {
            ctx->pc = 0x1393E0u;
            goto label_1393e0;
        }
    }
    ctx->pc = 0x1393B0u;
    // 0x1393b0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1393b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1393b4: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x1393b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1393b8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1393b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1393bc: 0xc04e51c  jal         func_139470
    ctx->pc = 0x1393BCu;
    SET_GPR_U32(ctx, 31, 0x1393C4u);
    ctx->pc = 0x139470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139470u, 0x1393BCu, 0x1393C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1393C4u;
label_1393c4:
    // 0x1393c4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1393c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1393c8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1393c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1393cc: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x1393ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1393d0: 0xc04e45c  jal         func_139170
    ctx->pc = 0x1393D0u;
    SET_GPR_U32(ctx, 31, 0x1393D8u);
    ctx->pc = 0x139170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139170u, 0x1393D0u, 0x1393D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1393D8u;
label_1393d8:
    // 0x1393d8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1393D8u;
    {
        const bool branch_taken_0x1393d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1393d8) {
            ctx->pc = 0x139414u;
            goto label_139414;
        }
    }
    ctx->pc = 0x1393E0u;
label_1393e0:
    // 0x1393e0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1393e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1393e4:
    // 0x1393e4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1393e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1393e8: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x1393e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1393ec: 0xc04e50c  jal         func_139430
    ctx->pc = 0x1393ECu;
    SET_GPR_U32(ctx, 31, 0x1393F4u);
    ctx->pc = 0x139430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139430u, 0x1393ECu, 0x1393F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1393F4u;
label_1393f4:
    // 0x1393f4: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x1393f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1393f8: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x1393F8u;
    {
        const bool branch_taken_0x1393f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1393f8) {
            ctx->pc = 0x139390u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_139390;
        }
    }
    ctx->pc = 0x139400u;
    // 0x139400: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x139400u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x139404: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x139404u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x139408: 0xc04e44c  jal         func_139130
    ctx->pc = 0x139408u;
    SET_GPR_U32(ctx, 31, 0x139410u);
    ctx->pc = 0x139130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139130u, 0x139408u, 0x139410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139410u;
label_139410:
    // 0x139410: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x139410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_139414:
    // 0x139414: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x139414u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x139418: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x139418u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13941c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x13941cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x139420: 0x3e00008  jr          $ra
    ctx->pc = 0x139420u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x139420u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x139428u;
    // 0x139428: 0x0  nop
    ctx->pc = 0x139428u;
    // NOP
    // 0x13942c: 0x0  nop
    ctx->pc = 0x13942cu;
    // NOP
    ctx->pc = 0x139430u;
}
