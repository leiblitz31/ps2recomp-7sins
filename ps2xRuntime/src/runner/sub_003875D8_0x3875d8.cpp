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

// Function: sub_003875D8
// Address: 0x3875d8 - 0x387820
void sub_003875D8_0x3875d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003875D8_0x3875d8");
#endif

    switch (ctx->pc) {
        case 0x387634u: goto label_387634;
        case 0x38764cu: goto label_38764c;
        case 0x38765cu: goto label_38765c;
        case 0x38767cu: goto label_38767c;
        case 0x3876dcu: goto label_3876dc;
        case 0x3876f4u: goto label_3876f4;
        case 0x387704u: goto label_387704;
        case 0x387724u: goto label_387724;
        case 0x387780u: goto label_387780;
        case 0x3877b4u: goto label_3877b4;
        case 0x3877c0u: goto label_3877c0;
        case 0x3877d4u: goto label_3877d4;
        case 0x3877e4u: goto label_3877e4;
        default: break;
    }

    ctx->pc = 0x3875d8u;

    // 0x3875d8: 0x8c82007c  lw          $v0, 0x7C($a0)
    ctx->pc = 0x3875d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
    // 0x3875dc: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3875DCu;
    {
        const bool branch_taken_0x3875dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3875dc) {
            ctx->pc = 0x3875E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3875DCu;
            // 0x3875e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3875F4u;
            goto label_3875f4;
        }
    }
    ctx->pc = 0x3875E4u;
    // 0x3875e4: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x3875e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x3875e8: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x3875E8u;
    {
        const bool branch_taken_0x3875e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3875ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3875E8u;
        // 0x3875ec: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3875e8) {
            ctx->pc = 0x3875F4u;
            goto label_3875f4;
        }
    }
    ctx->pc = 0x3875F0u;
    // 0x3875f0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3875f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3875f4:
    // 0x3875f4: 0x3e00008  jr          $ra
    ctx->pc = 0x3875F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3875F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3875FCu;
    // 0x3875fc: 0x0  nop
    ctx->pc = 0x3875fcu;
    // NOP
    // 0x387600: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x387600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x387604: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x387604u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x387608: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x387608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x38760c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x38760cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x387610: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x387610u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x387614: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x387614u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x387618: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x387618u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38761c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x38761cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x387620: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x387620u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x387624: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x387624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x387628: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x387628u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38762c: 0xc103322  jal         func_40CC88
    ctx->pc = 0x38762Cu;
    SET_GPR_U32(ctx, 31, 0x387634u);
    ctx->pc = 0x387630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38762Cu;
    // 0x387630: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40CC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40CC88u, 0x38762Cu, 0x387634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387634u;
label_387634:
    // 0x387634: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x387634u;
    {
        const bool branch_taken_0x387634 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x387638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387634u;
        // 0x387638: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387634) {
            ctx->pc = 0x387684u;
            goto label_387684;
        }
    }
    ctx->pc = 0x38763Cu;
    // 0x38763c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x38763cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x387640: 0x2406002c  addiu       $a2, $zero, 0x2C
    ctx->pc = 0x387640u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x387644: 0xc0bb7e6  jal         func_2EDF98
    ctx->pc = 0x387644u;
    SET_GPR_U32(ctx, 31, 0x38764Cu);
    ctx->pc = 0x387648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x387644u;
    // 0x387648: 0x2410002c  addiu       $s0, $zero, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x387644u, 0x38764Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38764Cu;
label_38764c:
    // 0x38764c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x38764cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x387650: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x387650u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x387654: 0xc10480a  jal         func_412028
    ctx->pc = 0x387654u;
    SET_GPR_U32(ctx, 31, 0x38765Cu);
    ctx->pc = 0x387658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x387654u;
    // 0x387658: 0x2406002c  addiu       $a2, $zero, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412028u, 0x387654u, 0x38765Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38765Cu;
label_38765c:
    // 0x38765c: 0x5450000a  bnel        $v0, $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x38765Cu;
    {
        const bool branch_taken_0x38765c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x38765c) {
            ctx->pc = 0x387660u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38765Cu;
            // 0x387660: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x387688u;
            goto label_387688;
        }
    }
    ctx->pc = 0x387664u;
    // 0x387664: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x387664u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x387668: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x387668u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38766c: 0x24a2000c  addiu       $v0, $a1, 0xC
    ctx->pc = 0x38766cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
    // 0x387670: 0x24a5ffd4  addiu       $a1, $a1, -0x2C
    ctx->pc = 0x387670u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967252));
    // 0x387674: 0xc1048ec  jal         func_4123B0
    ctx->pc = 0x387674u;
    SET_GPR_U32(ctx, 31, 0x38767Cu);
    ctx->pc = 0x387678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x387674u;
    // 0x387678: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4123B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4123B0u, 0x387674u, 0x38767Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38767Cu;
label_38767c:
    // 0x38767c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x38767Cu;
    {
        const bool branch_taken_0x38767c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x387680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38767Cu;
        // 0x387680: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38767c) {
            ctx->pc = 0x387688u;
            goto label_387688;
        }
    }
    ctx->pc = 0x387684u;
label_387684:
    // 0x387684: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x387684u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_387688:
    // 0x387688: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x387688u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x38768c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x38768cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x387690: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x387690u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x387694: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x387694u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x387698: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x387698u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38769c: 0x3e00008  jr          $ra
    ctx->pc = 0x38769Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3876A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38769Cu;
        // 0x3876a0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38769Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3876A4u;
    // 0x3876a4: 0x0  nop
    ctx->pc = 0x3876a4u;
    // NOP
    // 0x3876a8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3876a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3876ac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3876acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3876b0: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x3876b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x3876b4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3876b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x3876b8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3876b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3876bc: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x3876bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x3876c0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3876c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3876c4: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x3876c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3876c8: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x3876c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x3876cc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3876ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3876d0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3876d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3876d4: 0xc103322  jal         func_40CC88
    ctx->pc = 0x3876D4u;
    SET_GPR_U32(ctx, 31, 0x3876DCu);
    ctx->pc = 0x3876D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3876D4u;
    // 0x3876d8: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40CC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40CC88u, 0x3876D4u, 0x3876DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3876DCu;
label_3876dc:
    // 0x3876dc: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x3876DCu;
    {
        const bool branch_taken_0x3876dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3876E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3876DCu;
        // 0x3876e0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3876dc) {
            ctx->pc = 0x38772Cu;
            goto label_38772c;
        }
    }
    ctx->pc = 0x3876E4u;
    // 0x3876e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3876e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3876e8: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x3876e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x3876ec: 0xc0bb7e6  jal         func_2EDF98
    ctx->pc = 0x3876ECu;
    SET_GPR_U32(ctx, 31, 0x3876F4u);
    ctx->pc = 0x3876F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3876ECu;
    // 0x3876f0: 0x24100018  addiu       $s0, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x3876ECu, 0x3876F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3876F4u;
label_3876f4:
    // 0x3876f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3876f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3876f8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3876f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3876fc: 0xc10480a  jal         func_412028
    ctx->pc = 0x3876FCu;
    SET_GPR_U32(ctx, 31, 0x387704u);
    ctx->pc = 0x387700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3876FCu;
    // 0x387700: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412028u, 0x3876FCu, 0x387704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387704u;
label_387704:
    // 0x387704: 0x5450000a  bnel        $v0, $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x387704u;
    {
        const bool branch_taken_0x387704 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x387704) {
            ctx->pc = 0x387708u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x387704u;
            // 0x387708: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x387730u;
            goto label_387730;
        }
    }
    ctx->pc = 0x38770Cu;
    // 0x38770c: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x38770cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x387710: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x387710u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x387714: 0x24a2000c  addiu       $v0, $a1, 0xC
    ctx->pc = 0x387714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
    // 0x387718: 0x24a5ffe8  addiu       $a1, $a1, -0x18
    ctx->pc = 0x387718u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967272));
    // 0x38771c: 0xc1048ec  jal         func_4123B0
    ctx->pc = 0x38771Cu;
    SET_GPR_U32(ctx, 31, 0x387724u);
    ctx->pc = 0x387720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38771Cu;
    // 0x387720: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4123B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4123B0u, 0x38771Cu, 0x387724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387724u;
label_387724:
    // 0x387724: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x387724u;
    {
        const bool branch_taken_0x387724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x387728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387724u;
        // 0x387728: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387724) {
            ctx->pc = 0x387730u;
            goto label_387730;
        }
    }
    ctx->pc = 0x38772Cu;
label_38772c:
    // 0x38772c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x38772cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_387730:
    // 0x387730: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x387730u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x387734: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x387734u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x387738: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x387738u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x38773c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x38773cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x387740: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x387740u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x387744: 0x3e00008  jr          $ra
    ctx->pc = 0x387744u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x387748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387744u;
        // 0x387748: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x387744u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38774Cu;
    // 0x38774c: 0x0  nop
    ctx->pc = 0x38774cu;
    // NOP
    // 0x387750: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x387750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x387754: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x387754u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x387758: 0x27a70014  addiu       $a3, $sp, 0x14
    ctx->pc = 0x387758u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x38775c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x38775cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x387760: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x387760u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x387764: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x387764u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x387768: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x387768u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38776c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x38776cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x387770: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x387770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x387774: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x387774u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x387778: 0xc103322  jal         func_40CC88
    ctx->pc = 0x387778u;
    SET_GPR_U32(ctx, 31, 0x387780u);
    ctx->pc = 0x38777Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x387778u;
    // 0x38777c: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40CC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40CC88u, 0x387778u, 0x387780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387780u;
label_387780:
    // 0x387780: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x387780u;
    {
        const bool branch_taken_0x387780 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x387784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387780u;
        // 0x387784: 0x8fa30014  lw          $v1, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387780) {
            ctx->pc = 0x387804u;
            goto label_387804;
        }
    }
    ctx->pc = 0x387788u;
    // 0x387788: 0x3c02fffc  lui         $v0, 0xFFFC
    ctx->pc = 0x387788u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65532 << 16));
    // 0x38778c: 0x3442b000  ori         $v0, $v0, 0xB000
    ctx->pc = 0x38778cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45056);
    // 0x387790: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x387790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x387794: 0x2c632003  sltiu       $v1, $v1, 0x2003
    ctx->pc = 0x387794u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8195) ? 1 : 0);
    // 0x387798: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x387798u;
    {
        const bool branch_taken_0x387798 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x38779Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387798u;
        // 0x38779c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387798) {
            ctx->pc = 0x3877C8u;
            goto label_3877c8;
        }
    }
    ctx->pc = 0x3877A0u;
    // 0x3877a0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3877a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3877a4: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x3877a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x3877a8: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x3877a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x3877ac: 0xc1035f6  jal         func_40D7D8
    ctx->pc = 0x3877ACu;
    SET_GPR_U32(ctx, 31, 0x3877B4u);
    ctx->pc = 0x3877B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3877ACu;
    // 0x3877b0: 0x34840004  ori         $a0, $a0, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x3877ACu, 0x3877B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3877B4u;
label_3877b4:
    // 0x3877b4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3877b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3877b8: 0xc103628  jal         func_40D8A0
    ctx->pc = 0x3877B8u;
    SET_GPR_U32(ctx, 31, 0x3877C0u);
    ctx->pc = 0x3877BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3877B8u;
    // 0x3877bc: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x3877B8u, 0x3877C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3877C0u;
label_3877c0:
    // 0x3877c0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x3877C0u;
    {
        const bool branch_taken_0x3877c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3877C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3877C0u;
        // 0x3877c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3877c0) {
            ctx->pc = 0x387808u;
            goto label_387808;
        }
    }
    ctx->pc = 0x3877C8u;
label_3877c8:
    // 0x3877c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3877c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3877cc: 0xc0bb7e6  jal         func_2EDF98
    ctx->pc = 0x3877CCu;
    SET_GPR_U32(ctx, 31, 0x3877D4u);
    ctx->pc = 0x3877D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3877CCu;
    // 0x3877d0: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x3877CCu, 0x3877D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3877D4u;
label_3877d4:
    // 0x3877d4: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x3877d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3877d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3877d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3877dc: 0xc10480a  jal         func_412028
    ctx->pc = 0x3877DCu;
    SET_GPR_U32(ctx, 31, 0x3877E4u);
    ctx->pc = 0x3877E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3877DCu;
    // 0x3877e0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412028u, 0x3877DCu, 0x3877E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3877E4u;
label_3877e4:
    // 0x3877e4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3877e4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3877e8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x3877e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3877ec: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3877ECu;
    {
        const bool branch_taken_0x3877ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3877F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3877ECu;
        // 0x3877f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3877ec) {
            ctx->pc = 0x387808u;
            goto label_387808;
        }
    }
    ctx->pc = 0x3877F4u;
    // 0x3877f4: 0x2463000c  addiu       $v1, $v1, 0xC
    ctx->pc = 0x3877f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x3877f8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3877f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3877fc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3877FCu;
    {
        const bool branch_taken_0x3877fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x387800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3877FCu;
        // 0x387800: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3877fc) {
            ctx->pc = 0x387808u;
            goto label_387808;
        }
    }
    ctx->pc = 0x387804u;
label_387804:
    // 0x387804: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x387804u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_387808:
    // 0x387808: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x387808u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x38780c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x38780cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x387810: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x387810u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x387814: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x387814u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x387818: 0x3e00008  jr          $ra
    ctx->pc = 0x387818u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38781Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387818u;
        // 0x38781c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x387818u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x387820u;
}
