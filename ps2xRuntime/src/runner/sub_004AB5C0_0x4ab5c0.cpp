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

// Function: sub_004AB5C0
// Address: 0x4ab5c0 - 0x4ab690
void sub_004AB5C0_0x4ab5c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AB5C0_0x4ab5c0");
#endif

    switch (ctx->pc) {
        case 0x4ab5f0u: goto label_4ab5f0;
        case 0x4ab608u: goto label_4ab608;
        case 0x4ab624u: goto label_4ab624;
        case 0x4ab668u: goto label_4ab668;
        default: break;
    }

    ctx->pc = 0x4ab5c0u;

    // 0x4ab5c0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4ab5c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x4ab5c4: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x4ab5c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x4ab5c8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x4ab5c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x4ab5cc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4ab5ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ab5d0: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x4ab5d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x4ab5d4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4ab5d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ab5d8: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x4ab5d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x4ab5dc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x4ab5dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ab5e0: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x4ab5e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x4ab5e4: 0x2634000c  addiu       $s4, $s1, 0xC
    ctx->pc = 0x4ab5e4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x4ab5e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ab5e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4ab5ec: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x4ab5ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_4ab5f0:
    // 0x4ab5f0: 0x10940008  beq         $a0, $s4, . + 4 + (0x8 << 2)
    ctx->pc = 0x4AB5F0u;
    {
        const bool branch_taken_0x4ab5f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 20));
        if (branch_taken_0x4ab5f0) {
            ctx->pc = 0x4AB614u;
            goto label_4ab614;
        }
    }
    ctx->pc = 0x4AB5F8u;
    // 0x4ab5f8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4ab5f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ab5fc: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x4ab5fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x4ab600: 0xc12ae0c  jal         func_4AB830
    ctx->pc = 0x4AB600u;
    SET_GPR_U32(ctx, 31, 0x4AB608u);
    ctx->pc = 0x4AB604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AB600u;
    // 0x4ab604: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AB830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AB830u, 0x4AB600u, 0x4AB608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AB608u;
label_4ab608:
    // 0x4ab608: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4ab608u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ab60c: 0x1240fff8  beqz        $s2, . + 4 + (-0x8 << 2)
    ctx->pc = 0x4AB60Cu;
    {
        const bool branch_taken_0x4ab60c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AB610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AB60Cu;
        // 0x4ab610: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ab60c) {
            ctx->pc = 0x4AB5F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4ab5f0;
        }
    }
    ctx->pc = 0x4AB614u;
label_4ab614:
    // 0x4ab614: 0x16400016  bnez        $s2, . + 4 + (0x16 << 2)
    ctx->pc = 0x4AB614u;
    {
        const bool branch_taken_0x4ab614 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x4AB618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AB614u;
        // 0x4ab618: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ab614) {
            ctx->pc = 0x4AB670u;
            goto label_4ab670;
        }
    }
    ctx->pc = 0x4AB61Cu;
    // 0x4ab61c: 0xc12ae54  jal         func_4AB950
    ctx->pc = 0x4AB61Cu;
    SET_GPR_U32(ctx, 31, 0x4AB624u);
    ctx->pc = 0x4AB620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AB61Cu;
    // 0x4ab620: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AB950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AB950u, 0x4AB61Cu, 0x4AB624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AB624u;
label_4ab624:
    // 0x4ab624: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4ab624u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ab628: 0x54800003  bnel        $a0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x4AB628u;
    {
        const bool branch_taken_0x4ab628 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x4ab628) {
            ctx->pc = 0x4AB62Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4AB628u;
            // 0x4ab62c: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4AB638u;
            goto label_4ab638;
        }
    }
    ctx->pc = 0x4AB630u;
    // 0x4ab630: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x4AB630u;
    {
        const bool branch_taken_0x4ab630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AB634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AB630u;
        // 0x4ab634: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ab630) {
            ctx->pc = 0x4AB654u;
            goto label_4ab654;
        }
    }
    ctx->pc = 0x4AB638u;
label_4ab638:
    // 0x4ab638: 0x2623000c  addiu       $v1, $s1, 0xC
    ctx->pc = 0x4ab638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x4ab63c: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x4ab63cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x4ab640: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4ab640u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ab644: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4ab644u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x4ab648: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x4ab648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x4ab64c: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x4ab64cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x4ab650: 0xae24000c  sw          $a0, 0xC($s1)
    ctx->pc = 0x4ab650u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 4));
label_4ab654:
    // 0x4ab654: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4AB654u;
    {
        const bool branch_taken_0x4ab654 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AB658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AB654u;
        // 0x4ab658: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ab654) {
            ctx->pc = 0x4AB66Cu;
            goto label_4ab66c;
        }
    }
    ctx->pc = 0x4AB65Cu;
    // 0x4ab65c: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x4ab65cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x4ab660: 0xc12ae0c  jal         func_4AB830
    ctx->pc = 0x4AB660u;
    SET_GPR_U32(ctx, 31, 0x4AB668u);
    ctx->pc = 0x4AB664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AB660u;
    // 0x4ab664: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AB830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AB830u, 0x4AB660u, 0x4AB668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AB668u;
label_4ab668:
    // 0x4ab668: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4ab668u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4ab66c:
    // 0x4ab66c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x4ab66cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4ab670:
    // 0x4ab670: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x4ab670u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4ab674: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x4ab674u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4ab678: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x4ab678u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4ab67c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x4ab67cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4ab680: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x4ab680u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ab684: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ab684u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ab688: 0x3e00008  jr          $ra
    ctx->pc = 0x4AB688u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AB68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AB688u;
        // 0x4ab68c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AB688u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AB690u;
}
