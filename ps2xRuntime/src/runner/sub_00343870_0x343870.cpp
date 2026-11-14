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

// Function: sub_00343870
// Address: 0x343870 - 0x343970
void sub_00343870_0x343870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00343870_0x343870");
#endif

    switch (ctx->pc) {
        case 0x343898u: goto label_343898;
        case 0x343918u: goto label_343918;
        default: break;
    }

    ctx->pc = 0x343870u;

    // 0x343870: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x343870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x343874: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x343874u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x343878: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x343878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x34387c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x34387cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x343880: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x343880u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343884: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x343884u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x343888: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x343888u;
    {
        const bool branch_taken_0x343888 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x34388Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343888u;
        // 0x34388c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343888) {
            ctx->pc = 0x343898u;
            goto label_343898;
        }
    }
    ctx->pc = 0x343890u;
    // 0x343890: 0xc0d1054  jal         func_344150
    ctx->pc = 0x343890u;
    SET_GPR_U32(ctx, 31, 0x343898u);
    ctx->pc = 0x344150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344150u, 0x343890u, 0x343898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343898u;
label_343898:
    // 0x343898: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x343898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x34389c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x34389cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3438a0: 0xae300010  sw          $s0, 0x10($s1)
    ctx->pc = 0x3438a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 16));
    // 0x3438a4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3438a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3438a8: 0x12000026  beqz        $s0, . + 4 + (0x26 << 2)
    ctx->pc = 0x3438A8u;
    {
        const bool branch_taken_0x3438a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3438ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3438A8u;
        // 0x3438ac: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3438a8) {
            ctx->pc = 0x343944u;
            goto label_343944;
        }
    }
    ctx->pc = 0x3438B0u;
    // 0x3438b0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x3438b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x3438b4: 0x58400024  blezl       $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x3438B4u;
    {
        const bool branch_taken_0x3438b4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3438b4) {
            ctx->pc = 0x3438B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3438B4u;
            // 0x3438b8: 0xae27000c  sw          $a3, 0xC($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x343948u;
            goto label_343948;
        }
    }
    ctx->pc = 0x3438BCu;
    // 0x3438bc: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x3438bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x3438c0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3438c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3438c4: 0x41023  negu        $v0, $a0
    ctx->pc = 0x3438c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x3438c8: 0x30460003  andi        $a2, $v0, 0x3
    ctx->pc = 0x3438c8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x3438cc: 0x10c00012  beqz        $a2, . + 4 + (0x12 << 2)
    ctx->pc = 0x3438CCu;
    {
        const bool branch_taken_0x3438cc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3438D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3438CCu;
        // 0x3438d0: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3438cc) {
            ctx->pc = 0x343918u;
            goto label_343918;
        }
    }
    ctx->pc = 0x3438D4u;
    // 0x3438d4: 0x28c20003  slti        $v0, $a2, 0x3
    ctx->pc = 0x3438d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3438d8: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3438D8u;
    {
        const bool branch_taken_0x3438d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3438DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3438D8u;
        // 0x3438dc: 0x28c20002  slti        $v0, $a2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3438d8) {
            ctx->pc = 0x343904u;
            goto label_343904;
        }
    }
    ctx->pc = 0x3438E0u;
    // 0x3438e0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3438E0u;
    {
        const bool branch_taken_0x3438e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3438e0) {
            ctx->pc = 0x3438E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3438E0u;
            // 0x3438e4: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3438F8u;
            goto label_3438f8;
        }
    }
    ctx->pc = 0x3438E8u;
    // 0x3438e8: 0x8ca70000  lw          $a3, 0x0($a1)
    ctx->pc = 0x3438e8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3438ec: 0x24a30004  addiu       $v1, $a1, 0x4
    ctx->pc = 0x3438ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x3438f0: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3438f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3438f4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3438f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3438f8:
    // 0x3438f8: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3438f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3438fc: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x3438fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x343900: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x343900u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_343904:
    // 0x343904: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x343904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x343908: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x343908u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x34390c: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x34390cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x343910: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x343910u;
    {
        const bool branch_taken_0x343910 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x343914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343910u;
        // 0x343914: 0xe23821  addu        $a3, $a3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343910) {
            ctx->pc = 0x343944u;
            goto label_343944;
        }
    }
    ctx->pc = 0x343918u;
label_343918:
    // 0x343918: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x343918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x34391c: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x34391cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x343920: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x343920u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x343924: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x343924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x343928: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x343928u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x34392c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x34392cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x343930: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x343930u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x343934: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x343934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x343938: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x343938u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x34393c: 0x1480fff6  bnez        $a0, . + 4 + (-0xA << 2)
    ctx->pc = 0x34393Cu;
    {
        const bool branch_taken_0x34393c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x343940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34393Cu;
        // 0x343940: 0xe23821  addu        $a3, $a3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34393c) {
            ctx->pc = 0x343918u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_343918;
        }
    }
    ctx->pc = 0x343944u;
label_343944:
    // 0x343944: 0xae27000c  sw          $a3, 0xC($s1)
    ctx->pc = 0x343944u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 7));
label_343948:
    // 0x343948: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x343948u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34394c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x34394cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x343950: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x343950u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x343954: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x343954u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x343958: 0x3e00008  jr          $ra
    ctx->pc = 0x343958u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34395Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343958u;
        // 0x34395c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x343958u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x343960u;
    // 0x343960: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x343960u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343964: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x343964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x343968: 0x3e00008  jr          $ra
    ctx->pc = 0x343968u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34396Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343968u;
        // 0x34396c: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x343968u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x343970u;
}
