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

// Function: sub_004AB9B0
// Address: 0x4ab9b0 - 0x4aba80
void sub_004AB9B0_0x4ab9b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AB9B0_0x4ab9b0");
#endif

    switch (ctx->pc) {
        case 0x4ab9c0u: goto label_4ab9c0;
        case 0x4aba08u: goto label_4aba08;
        case 0x4aba48u: goto label_4aba48;
        case 0x4aba50u: goto label_4aba50;
        case 0x4aba68u: goto label_4aba68;
        default: break;
    }

    ctx->pc = 0x4ab9b0u;

    // 0x4ab9b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4ab9b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4ab9b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ab9b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4ab9b8: 0xc127cae  jal         func_49F2B8
    ctx->pc = 0x4AB9B8u;
    SET_GPR_U32(ctx, 31, 0x4AB9C0u);
    ctx->pc = 0x49F2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F2B8u, 0x4AB9B8u, 0x4AB9C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AB9C0u;
label_4ab9c0:
    // 0x4ab9c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ab9c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ab9c4: 0x3e00008  jr          $ra
    ctx->pc = 0x4AB9C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AB9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AB9C4u;
        // 0x4ab9c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AB9C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AB9CCu;
    // 0x4ab9cc: 0x0  nop
    ctx->pc = 0x4ab9ccu;
    // NOP
    // 0x4ab9d0: 0x2782c218  addiu       $v0, $gp, -0x3DE8
    ctx->pc = 0x4ab9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294951448));
    // 0x4ab9d4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4ab9d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4ab9d8: 0x3c080066  lui         $t0, 0x66
    ctx->pc = 0x4ab9d8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)102 << 16));
    // 0x4ab9dc: 0x3c090004  lui         $t1, 0x4
    ctx->pc = 0x4ab9dcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4 << 16));
    // 0x4ab9e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ab9e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4ab9e4: 0x25088920  addiu       $t0, $t0, -0x76E0
    ctx->pc = 0x4ab9e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294936864));
    // 0x4ab9e8: 0xaf82c21c  sw          $v0, -0x3DE4($gp)
    ctx->pc = 0x4ab9e8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294951452), GPR_U32(ctx, 2));
    // 0x4ab9ec: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x4ab9ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x4ab9f0: 0xaf82c218  sw          $v0, -0x3DE8($gp)
    ctx->pc = 0x4ab9f0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294951448), GPR_U32(ctx, 2));
    // 0x4ab9f4: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x4ab9f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x4ab9f8: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x4ab9f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x4ab9fc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4ab9fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aba00: 0xc12aa26  jal         func_4AA898
    ctx->pc = 0x4ABA00u;
    SET_GPR_U32(ctx, 31, 0x4ABA08u);
    ctx->pc = 0x4ABA04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4ABA00u;
    // 0x4aba04: 0x35290800  ori         $t1, $t1, 0x800 (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)2048);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AA898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AA898u, 0x4ABA00u, 0x4ABA08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4ABA08u;
label_4aba08:
    // 0x4aba08: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4ABA08u;
    {
        const bool branch_taken_0x4aba08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4ABA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ABA08u;
        // 0x4aba0c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aba08) {
            ctx->pc = 0x4ABA18u;
            goto label_4aba18;
        }
    }
    ctx->pc = 0x4ABA10u;
    // 0x4aba10: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4ABA10u;
    {
        const bool branch_taken_0x4aba10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4ABA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ABA10u;
        // 0x4aba14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aba10) {
            ctx->pc = 0x4ABA20u;
            goto label_4aba20;
        }
    }
    ctx->pc = 0x4ABA18u;
label_4aba18:
    // 0x4aba18: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4aba18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4aba1c: 0xaf83b8a0  sw          $v1, -0x4760($gp)
    ctx->pc = 0x4aba1cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949024), GPR_U32(ctx, 3));
label_4aba20:
    // 0x4aba20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4aba20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4aba24: 0x3e00008  jr          $ra
    ctx->pc = 0x4ABA24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4ABA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ABA24u;
        // 0x4aba28: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4ABA24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4ABA2Cu;
    // 0x4aba2c: 0x0  nop
    ctx->pc = 0x4aba2cu;
    // NOP
    // 0x4aba30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4aba30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4aba34: 0x8f84c218  lw          $a0, -0x3DE8($gp)
    ctx->pc = 0x4aba34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951448)));
    // 0x4aba38: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4aba38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x4aba3c: 0x2790c218  addiu       $s0, $gp, -0x3DE8
    ctx->pc = 0x4aba3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 28), 4294951448));
    // 0x4aba40: 0x10900006  beq         $a0, $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4ABA40u;
    {
        const bool branch_taken_0x4aba40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 16));
        ctx->pc = 0x4ABA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ABA40u;
        // 0x4aba44: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aba40) {
            ctx->pc = 0x4ABA5Cu;
            goto label_4aba5c;
        }
    }
    ctx->pc = 0x4ABA48u;
label_4aba48:
    // 0x4aba48: 0xc12ad4e  jal         func_4AB538
    ctx->pc = 0x4ABA48u;
    SET_GPR_U32(ctx, 31, 0x4ABA50u);
    ctx->pc = 0x4ABA4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4ABA48u;
    // 0x4aba4c: 0x2484ffec  addiu       $a0, $a0, -0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967276));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AB538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AB538u, 0x4ABA48u, 0x4ABA50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4ABA50u;
label_4aba50:
    // 0x4aba50: 0x8f84c218  lw          $a0, -0x3DE8($gp)
    ctx->pc = 0x4aba50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951448)));
    // 0x4aba54: 0x1490fffc  bne         $a0, $s0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x4ABA54u;
    {
        const bool branch_taken_0x4aba54 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 16));
        if (branch_taken_0x4aba54) {
            ctx->pc = 0x4ABA48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4aba48;
        }
    }
    ctx->pc = 0x4ABA5Cu;
label_4aba5c:
    // 0x4aba5c: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x4aba5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x4aba60: 0xc12aa86  jal         func_4AAA18
    ctx->pc = 0x4ABA60u;
    SET_GPR_U32(ctx, 31, 0x4ABA68u);
    ctx->pc = 0x4ABA64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4ABA60u;
    // 0x4aba64: 0x24848920  addiu       $a0, $a0, -0x76E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AAA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AAA18u, 0x4ABA60u, 0x4ABA68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4ABA68u;
label_4aba68:
    // 0x4aba68: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4aba68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4aba6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4aba6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4aba70: 0xaf80b8a0  sw          $zero, -0x4760($gp)
    ctx->pc = 0x4aba70u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949024), GPR_U32(ctx, 0));
    // 0x4aba74: 0x3e00008  jr          $ra
    ctx->pc = 0x4ABA74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4ABA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ABA74u;
        // 0x4aba78: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4ABA74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4ABA7Cu;
    // 0x4aba7c: 0x0  nop
    ctx->pc = 0x4aba7cu;
    // NOP
    ctx->pc = 0x4aba80u;
}
