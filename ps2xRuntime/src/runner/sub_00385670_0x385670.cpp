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

// Function: sub_00385670
// Address: 0x385670 - 0x385778
void sub_00385670_0x385670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00385670_0x385670");
#endif

    switch (ctx->pc) {
        case 0x3856acu: goto label_3856ac;
        case 0x3856c4u: goto label_3856c4;
        case 0x3856d0u: goto label_3856d0;
        case 0x3856e4u: goto label_3856e4;
        case 0x3856ecu: goto label_3856ec;
        case 0x385700u: goto label_385700;
        case 0x385708u: goto label_385708;
        case 0x38571cu: goto label_38571c;
        case 0x385724u: goto label_385724;
        case 0x385738u: goto label_385738;
        case 0x385740u: goto label_385740;
        default: break;
    }

    ctx->pc = 0x385670u;

    // 0x385670: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x385670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x385674: 0x8f82bd00  lw          $v0, -0x4300($gp)
    ctx->pc = 0x385674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950144)));
    // 0x385678: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x385678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x38567c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x38567cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x385680: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x385680u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x385684: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x385684u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x385688: 0x2828021  addu        $s0, $s4, $v0
    ctx->pc = 0x385688u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x38568c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x38568cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x385690: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x385690u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x385694: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x385694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x385698: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x385698u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x38569c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x38569Cu;
    {
        const bool branch_taken_0x38569c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3856A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38569Cu;
        // 0x3856a0: 0x26110008  addiu       $s1, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38569c) {
            ctx->pc = 0x3856B0u;
            goto label_3856b0;
        }
    }
    ctx->pc = 0x3856A4u;
    // 0x3856a4: 0xc103da2  jal         func_40F688
    ctx->pc = 0x3856A4u;
    SET_GPR_U32(ctx, 31, 0x3856ACu);
    ctx->pc = 0x40F688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F688u, 0x3856A4u, 0x3856ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3856ACu;
label_3856ac:
    // 0x3856ac: 0x0  nop
    ctx->pc = 0x3856acu;
    // NOP
label_3856b0:
    // 0x3856b0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x3856b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3856b4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3856B4u;
    {
        const bool branch_taken_0x3856b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3856B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3856B4u;
        // 0x3856b8: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3856b4) {
            ctx->pc = 0x3856C4u;
            goto label_3856c4;
        }
    }
    ctx->pc = 0x3856BCu;
    // 0x3856bc: 0xc103da2  jal         func_40F688
    ctx->pc = 0x3856BCu;
    SET_GPR_U32(ctx, 31, 0x3856C4u);
    ctx->pc = 0x40F688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F688u, 0x3856BCu, 0x3856C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3856C4u;
label_3856c4:
    // 0x3856c4: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x3856c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x3856c8: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x3856c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3856cc: 0x26130028  addiu       $s3, $s0, 0x28
    ctx->pc = 0x3856ccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
label_3856d0:
    // 0x3856d0: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x3856d0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3856d4: 0x52000006  beql        $s0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x3856D4u;
    {
        const bool branch_taken_0x3856d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3856d4) {
            ctx->pc = 0x3856D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3856D4u;
            // 0x3856d8: 0x8e300004  lw          $s0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3856F0u;
            goto label_3856f0;
        }
    }
    ctx->pc = 0x3856DCu;
    // 0x3856dc: 0xc0e1498  jal         func_385260
    ctx->pc = 0x3856DCu;
    SET_GPR_U32(ctx, 31, 0x3856E4u);
    ctx->pc = 0x3856E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3856DCu;
    // 0x3856e0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x385260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x385260u, 0x3856DCu, 0x3856E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3856E4u;
label_3856e4:
    // 0x3856e4: 0xc0ef39c  jal         func_3BCE70
    ctx->pc = 0x3856E4u;
    SET_GPR_U32(ctx, 31, 0x3856ECu);
    ctx->pc = 0x3856E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3856E4u;
    // 0x3856e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BCE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BCE70u, 0x3856E4u, 0x3856ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3856ECu;
label_3856ec:
    // 0x3856ec: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x3856ecu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3856f0:
    // 0x3856f0: 0x52000006  beql        $s0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x3856F0u;
    {
        const bool branch_taken_0x3856f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3856f0) {
            ctx->pc = 0x3856F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3856F0u;
            // 0x3856f4: 0x8e300008  lw          $s0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38570Cu;
            goto label_38570c;
        }
    }
    ctx->pc = 0x3856F8u;
    // 0x3856f8: 0xc0e1498  jal         func_385260
    ctx->pc = 0x3856F8u;
    SET_GPR_U32(ctx, 31, 0x385700u);
    ctx->pc = 0x3856FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3856F8u;
    // 0x3856fc: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x385260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x385260u, 0x3856F8u, 0x385700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385700u;
label_385700:
    // 0x385700: 0xc0ef39c  jal         func_3BCE70
    ctx->pc = 0x385700u;
    SET_GPR_U32(ctx, 31, 0x385708u);
    ctx->pc = 0x385704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385700u;
    // 0x385704: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BCE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BCE70u, 0x385700u, 0x385708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385708u;
label_385708:
    // 0x385708: 0x8e300008  lw          $s0, 0x8($s1)
    ctx->pc = 0x385708u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_38570c:
    // 0x38570c: 0x52000006  beql        $s0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x38570Cu;
    {
        const bool branch_taken_0x38570c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x38570c) {
            ctx->pc = 0x385710u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38570Cu;
            // 0x385710: 0x8e30000c  lw          $s0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x385728u;
            goto label_385728;
        }
    }
    ctx->pc = 0x385714u;
    // 0x385714: 0xc0e1498  jal         func_385260
    ctx->pc = 0x385714u;
    SET_GPR_U32(ctx, 31, 0x38571Cu);
    ctx->pc = 0x385718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385714u;
    // 0x385718: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x385260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x385260u, 0x385714u, 0x38571Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38571Cu;
label_38571c:
    // 0x38571c: 0xc0ef39c  jal         func_3BCE70
    ctx->pc = 0x38571Cu;
    SET_GPR_U32(ctx, 31, 0x385724u);
    ctx->pc = 0x385720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38571Cu;
    // 0x385720: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BCE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BCE70u, 0x38571Cu, 0x385724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385724u;
label_385724:
    // 0x385724: 0x8e30000c  lw          $s0, 0xC($s1)
    ctx->pc = 0x385724u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_385728:
    // 0x385728: 0x52000006  beql        $s0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x385728u;
    {
        const bool branch_taken_0x385728 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x385728) {
            ctx->pc = 0x38572Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x385728u;
            // 0x38572c: 0x26520010  addiu       $s2, $s2, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x385744u;
            goto label_385744;
        }
    }
    ctx->pc = 0x385730u;
    // 0x385730: 0xc0e1498  jal         func_385260
    ctx->pc = 0x385730u;
    SET_GPR_U32(ctx, 31, 0x385738u);
    ctx->pc = 0x385734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385730u;
    // 0x385734: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x385260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x385260u, 0x385730u, 0x385738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385738u;
label_385738:
    // 0x385738: 0xc0ef39c  jal         func_3BCE70
    ctx->pc = 0x385738u;
    SET_GPR_U32(ctx, 31, 0x385740u);
    ctx->pc = 0x38573Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385738u;
    // 0x38573c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BCE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BCE70u, 0x385738u, 0x385740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385740u;
label_385740:
    // 0x385740: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x385740u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_385744:
    // 0x385744: 0x253102b  sltu        $v0, $s2, $s3
    ctx->pc = 0x385744u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x385748: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x385748u;
    {
        const bool branch_taken_0x385748 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38574Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385748u;
        // 0x38574c: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385748) {
            ctx->pc = 0x3856D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3856d0;
        }
    }
    ctx->pc = 0x385750u;
    // 0x385750: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x385750u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x385754: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x385754u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x385758: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x385758u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x38575c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x38575cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x385760: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x385760u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x385764: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x385764u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x385768: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x385768u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38576c: 0x3e00008  jr          $ra
    ctx->pc = 0x38576Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x385770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38576Cu;
        // 0x385770: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38576Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x385774u;
    // 0x385774: 0x0  nop
    ctx->pc = 0x385774u;
    // NOP
    ctx->pc = 0x385778u;
}
