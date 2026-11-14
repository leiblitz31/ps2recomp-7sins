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

// Function: sub_002F36A0
// Address: 0x2f36a0 - 0x2f3788
void sub_002F36A0_0x2f36a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F36A0_0x2f36a0");
#endif

    switch (ctx->pc) {
        case 0x2f36dcu: goto label_2f36dc;
        case 0x2f3700u: goto label_2f3700;
        case 0x2f3738u: goto label_2f3738;
        case 0x2f3758u: goto label_2f3758;
        default: break;
    }

    ctx->pc = 0x2f36a0u;

    // 0x2f36a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2f36a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2f36a4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2f36a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2f36a8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2f36a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f36ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f36acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f36b0: 0x26420040  addiu       $v0, $s2, 0x40
    ctx->pc = 0x2f36b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x2f36b4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2f36b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2f36b8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2f36b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2f36bc: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2f36bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2f36c0: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2f36c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x2f36c4: 0x8e450030  lw          $a1, 0x30($s2)
    ctx->pc = 0x2f36c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x2f36c8: 0x54a20017  bnel        $a1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2F36C8u;
    {
        const bool branch_taken_0x2f36c8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x2f36c8) {
            ctx->pc = 0x2F36CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F36C8u;
            // 0x2f36cc: 0x8e530034  lw          $s3, 0x34($s2) (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F3728u;
            goto label_2f3728;
        }
    }
    ctx->pc = 0x2F36D0u;
    // 0x2f36d0: 0x8e440054  lw          $a0, 0x54($s2)
    ctx->pc = 0x2f36d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x2f36d4: 0xc0bb542  jal         func_2ED508
    ctx->pc = 0x2F36D4u;
    SET_GPR_U32(ctx, 31, 0x2F36DCu);
    ctx->pc = 0x2F36D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F36D4u;
    // 0x2f36d8: 0x24050400  addiu       $a1, $zero, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ED508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ED508u, 0x2F36D4u, 0x2F36DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F36DCu;
label_2f36dc:
    // 0x2f36dc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2f36dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f36e0: 0x12200021  beqz        $s1, . + 4 + (0x21 << 2)
    ctx->pc = 0x2F36E0u;
    {
        const bool branch_taken_0x2f36e0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F36E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F36E0u;
        // 0x2f36e4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f36e0) {
            ctx->pc = 0x2F3768u;
            goto label_2f3768;
        }
    }
    ctx->pc = 0x2F36E8u;
    // 0x2f36e8: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x2f36e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x2f36ec: 0xae510030  sw          $s1, 0x30($s2)
    ctx->pc = 0x2f36ecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 17));
    // 0x2f36f0: 0xae420034  sw          $v0, 0x34($s2)
    ctx->pc = 0x2f36f0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 2));
    // 0x2f36f4: 0x24130002  addiu       $s3, $zero, 0x2
    ctx->pc = 0x2f36f4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f36f8: 0x263103fd  addiu       $s1, $s1, 0x3FD
    ctx->pc = 0x2f36f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1021));
    // 0x2f36fc: 0x26440042  addiu       $a0, $s2, 0x42
    ctx->pc = 0x2f36fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 66));
label_2f3700:
    // 0x2f3700: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x2f3700u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2f3704: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x2f3704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2f3708: 0x2331021  addu        $v0, $s1, $s3
    ctx->pc = 0x2f3708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    // 0x2f370c: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x2f370cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x2f3710: 0x0  nop
    ctx->pc = 0x2f3710u;
    // NOP
    // 0x2f3714: 0x661fffa  bgez        $s3, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2F3714u;
    {
        const bool branch_taken_0x2f3714 = (GPR_S32(ctx, 19) >= 0);
        ctx->pc = 0x2F3718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3714u;
        // 0x2f3718: 0xa0430000  sb          $v1, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3714) {
            ctx->pc = 0x2F3700u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f3700;
        }
    }
    ctx->pc = 0x2F371Cu;
    // 0x2f371c: 0xae510000  sw          $s1, 0x0($s2)
    ctx->pc = 0x2f371cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
    // 0x2f3720: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2F3720u;
    {
        const bool branch_taken_0x2f3720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3720u;
        // 0x2f3724: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3720) {
            ctx->pc = 0x2F3768u;
            goto label_2f3768;
        }
    }
    ctx->pc = 0x2F3728u;
label_2f3728:
    // 0x2f3728: 0x8e440054  lw          $a0, 0x54($s2)
    ctx->pc = 0x2f3728u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x2f372c: 0x13a040  sll         $s4, $s3, 1
    ctx->pc = 0x2f372cu;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x2f3730: 0xc0bbf6a  jal         func_2EFDA8
    ctx->pc = 0x2F3730u;
    SET_GPR_U32(ctx, 31, 0x2F3738u);
    ctx->pc = 0x2F3734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3730u;
    // 0x2f3734: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EFDA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EFDA8u, 0x2F3730u, 0x2F3738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3738u;
label_2f3738:
    // 0x2f3738: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2f3738u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f373c: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x2F373Cu;
    {
        const bool branch_taken_0x2f373c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F373Cu;
        // 0x2f3740: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f373c) {
            ctx->pc = 0x2F3768u;
            goto label_2f3768;
        }
    }
    ctx->pc = 0x2F3744u;
    // 0x2f3744: 0x2338021  addu        $s0, $s1, $s3
    ctx->pc = 0x2f3744u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    // 0x2f3748: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2f3748u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f374c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f374cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3750: 0xc0bb778  jal         func_2EDDE0
    ctx->pc = 0x2F3750u;
    SET_GPR_U32(ctx, 31, 0x2F3758u);
    ctx->pc = 0x2F3754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3750u;
    // 0x2f3754: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x2F3750u, 0x2F3758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3758u;
label_2f3758:
    // 0x2f3758: 0xae500000  sw          $s0, 0x0($s2)
    ctx->pc = 0x2f3758u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
    // 0x2f375c: 0xae540034  sw          $s4, 0x34($s2)
    ctx->pc = 0x2f375cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 20));
    // 0x2f3760: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f3760u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3764: 0xae510030  sw          $s1, 0x30($s2)
    ctx->pc = 0x2f3764u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 17));
label_2f3768:
    // 0x2f3768: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f3768u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f376c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2f376cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2f3770: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2f3770u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f3774: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2f3774u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2f3778: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2f3778u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f377c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2f377cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2f3780: 0x3e00008  jr          $ra
    ctx->pc = 0x2F3780u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F3784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3780u;
        // 0x2f3784: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F3780u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F3788u;
}
