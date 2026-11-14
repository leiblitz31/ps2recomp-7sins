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

// Function: sub_003897C0
// Address: 0x3897c0 - 0x389850
void sub_003897C0_0x3897c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003897C0_0x3897c0");
#endif

    switch (ctx->pc) {
        case 0x3897e8u: goto label_3897e8;
        case 0x389810u: goto label_389810;
        default: break;
    }

    ctx->pc = 0x3897c0u;

    // 0x3897c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3897c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3897c4: 0x3c060039  lui         $a2, 0x39
    ctx->pc = 0x3897c4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)57 << 16));
    // 0x3897c8: 0x3c070039  lui         $a3, 0x39
    ctx->pc = 0x3897c8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)57 << 16));
    // 0x3897cc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3897ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3897d0: 0x24c6a790  addiu       $a2, $a2, -0x5870
    ctx->pc = 0x3897d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294944656));
    // 0x3897d4: 0x24e7a7b0  addiu       $a3, $a3, -0x5850
    ctx->pc = 0x3897d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294944688));
    // 0x3897d8: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x3897d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x3897dc: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x3897dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3897e0: 0xc1060b4  jal         func_4182D0
    ctx->pc = 0x3897E0u;
    SET_GPR_U32(ctx, 31, 0x3897E8u);
    ctx->pc = 0x3897E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3897E0u;
    // 0x3897e4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4182D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4182D0u, 0x3897E0u, 0x3897E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3897E8u;
label_3897e8:
    // 0x3897e8: 0x440000d  bltz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x3897E8u;
    {
        const bool branch_taken_0x3897e8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3897ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3897E8u;
        // 0x3897ec: 0xaf82a988  sw          $v0, -0x5678($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294945160), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3897e8) {
            ctx->pc = 0x389820u;
            goto label_389820;
        }
    }
    ctx->pc = 0x3897F0u;
    // 0x3897f0: 0x3c060039  lui         $a2, 0x39
    ctx->pc = 0x3897f0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)57 << 16));
    // 0x3897f4: 0x3c070039  lui         $a3, 0x39
    ctx->pc = 0x3897f4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)57 << 16));
    // 0x3897f8: 0x24c6a7b8  addiu       $a2, $a2, -0x5848
    ctx->pc = 0x3897f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294944696));
    // 0x3897fc: 0x24e7a7d8  addiu       $a3, $a3, -0x5828
    ctx->pc = 0x3897fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294944728));
    // 0x389800: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x389800u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x389804: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x389804u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x389808: 0xc0e36f6  jal         func_38DBD8
    ctx->pc = 0x389808u;
    SET_GPR_U32(ctx, 31, 0x389810u);
    ctx->pc = 0x38980Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x389808u;
    // 0x38980c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38DBD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38DBD8u, 0x389808u, 0x389810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x389810u;
label_389810:
    // 0x389810: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x389810u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x389814: 0xaf82a98c  sw          $v0, -0x5674($gp)
    ctx->pc = 0x389814u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294945164), GPR_U32(ctx, 2));
    // 0x389818: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x389818u;
    {
        const bool branch_taken_0x389818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38981Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389818u;
        // 0x38981c: 0x38620001  xori        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x389818) {
            ctx->pc = 0x389824u;
            goto label_389824;
        }
    }
    ctx->pc = 0x389820u;
label_389820:
    // 0x389820: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x389820u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_389824:
    // 0x389824: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x389824u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x389828: 0x3e00008  jr          $ra
    ctx->pc = 0x389828u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38982Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389828u;
        // 0x38982c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x389828u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x389830u;
    // 0x389830: 0xaf84a990  sw          $a0, -0x5670($gp)
    ctx->pc = 0x389830u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294945168), GPR_U32(ctx, 4));
    // 0x389834: 0x3e00008  jr          $ra
    ctx->pc = 0x389834u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x389838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389834u;
        // 0x389838: 0xaf85a994  sw          $a1, -0x566C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294945172), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x389834u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38983Cu;
    // 0x38983c: 0x0  nop
    ctx->pc = 0x38983cu;
    // NOP
    // 0x389840: 0xaf84a998  sw          $a0, -0x5668($gp)
    ctx->pc = 0x389840u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294945176), GPR_U32(ctx, 4));
    // 0x389844: 0x3e00008  jr          $ra
    ctx->pc = 0x389844u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x389848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389844u;
        // 0x389848: 0xaf85a99c  sw          $a1, -0x5664($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294945180), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x389844u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38984Cu;
    // 0x38984c: 0x0  nop
    ctx->pc = 0x38984cu;
    // NOP
    ctx->pc = 0x389850u;
}
