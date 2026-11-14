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

// Function: sub_003B7590
// Address: 0x3b7590 - 0x3b78b8
void sub_003B7590_0x3b7590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B7590_0x3b7590");
#endif

    switch (ctx->pc) {
        case 0x3b75b8u: goto label_3b75b8;
        case 0x3b75c8u: goto label_3b75c8;
        case 0x3b7600u: goto label_3b7600;
        case 0x3b7650u: goto label_3b7650;
        case 0x3b7660u: goto label_3b7660;
        case 0x3b7670u: goto label_3b7670;
        case 0x3b769cu: goto label_3b769c;
        case 0x3b76e8u: goto label_3b76e8;
        case 0x3b76f8u: goto label_3b76f8;
        case 0x3b7708u: goto label_3b7708;
        case 0x3b772cu: goto label_3b772c;
        case 0x3b7760u: goto label_3b7760;
        case 0x3b7770u: goto label_3b7770;
        case 0x3b7780u: goto label_3b7780;
        case 0x3b77a0u: goto label_3b77a0;
        case 0x3b77e0u: goto label_3b77e0;
        case 0x3b77f0u: goto label_3b77f0;
        case 0x3b7800u: goto label_3b7800;
        case 0x3b7824u: goto label_3b7824;
        case 0x3b7864u: goto label_3b7864;
        case 0x3b7880u: goto label_3b7880;
        case 0x3b7894u: goto label_3b7894;
        default: break;
    }

    ctx->pc = 0x3b7590u;

    // 0x3b7590: 0x3e00008  jr          $ra
    ctx->pc = 0x3B7590u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B7594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7590u;
        // 0x3b7594: 0x8c8200b4  lw          $v0, 0xB4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 180)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B7590u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B7598u;
    // 0x3b7598: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3b7598u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3b759c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3b759cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3b75a0: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x3b75a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3b75a4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3b75a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3b75a8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3B75A8u;
    {
        const bool branch_taken_0x3b75a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b75a8) {
            ctx->pc = 0x3B75C0u;
            goto label_3b75c0;
        }
    }
    ctx->pc = 0x3B75B0u;
    // 0x3b75b0: 0xc1036da  jal         func_40DB68
    ctx->pc = 0x3B75B0u;
    SET_GPR_U32(ctx, 31, 0x3B75B8u);
    ctx->pc = 0x3B75B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B75B0u;
    // 0x3b75b4: 0x8c8400b0  lw          $a0, 0xB0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 176)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB68u, 0x3B75B0u, 0x3B75B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B75B8u;
label_3b75b8:
    // 0x3b75b8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3B75B8u;
    {
        const bool branch_taken_0x3b75b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B75BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B75B8u;
        // 0x3b75bc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b75b8) {
            ctx->pc = 0x3B75D0u;
            goto label_3b75d0;
        }
    }
    ctx->pc = 0x3B75C0u;
label_3b75c0:
    // 0x3b75c0: 0xc1036da  jal         func_40DB68
    ctx->pc = 0x3B75C0u;
    SET_GPR_U32(ctx, 31, 0x3B75C8u);
    ctx->pc = 0x3B75C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B75C0u;
    // 0x3b75c4: 0x8c8400b0  lw          $a0, 0xB0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 176)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB68u, 0x3B75C0u, 0x3B75C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B75C8u;
label_3b75c8:
    // 0x3b75c8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3b75c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b75cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3b75ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3b75d0:
    // 0x3b75d0: 0x3e00008  jr          $ra
    ctx->pc = 0x3B75D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B75D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B75D0u;
        // 0x3b75d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B75D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B75D8u;
    // 0x3b75d8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3b75d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3b75dc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3b75dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3b75e0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3b75e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3b75e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3b75e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b75e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3b75e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3b75ec: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3b75ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b75f0: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x3b75f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x3b75f4: 0x8e0400b0  lw          $a0, 0xB0($s0)
    ctx->pc = 0x3b75f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x3b75f8: 0xc1036e0  jal         func_40DB80
    ctx->pc = 0x3B75F8u;
    SET_GPR_U32(ctx, 31, 0x3B7600u);
    ctx->pc = 0x3B75FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B75F8u;
    // 0x3b75fc: 0x34a501a3  ori         $a1, $a1, 0x1A3 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)419);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB80u, 0x3B75F8u, 0x3B7600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7600u;
label_3b7600:
    // 0x3b7600: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x3B7600u;
    {
        const bool branch_taken_0x3b7600 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b7600) {
            ctx->pc = 0x3B7604u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B7600u;
            // 0x3b7604: 0xac510000  sw          $s1, 0x0($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B7610u;
            goto label_3b7610;
        }
    }
    ctx->pc = 0x3B7608u;
    // 0x3b7608: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3B7608u;
    {
        const bool branch_taken_0x3b7608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B760Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7608u;
        // 0x3b760c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7608) {
            ctx->pc = 0x3B7620u;
            goto label_3b7620;
        }
    }
    ctx->pc = 0x3B7610u;
label_3b7610:
    // 0x3b7610: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3b7610u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b7614: 0x8e0300b4  lw          $v1, 0xB4($s0)
    ctx->pc = 0x3b7614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
    // 0x3b7618: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3b7618u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3b761c: 0xae0300b4  sw          $v1, 0xB4($s0)
    ctx->pc = 0x3b761cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 3));
label_3b7620:
    // 0x3b7620: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3b7620u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b7624: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3b7624u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b7628: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3b7628u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b762c: 0x3e00008  jr          $ra
    ctx->pc = 0x3B762Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B7630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B762Cu;
        // 0x3b7630: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B762Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B7634u;
    // 0x3b7634: 0x0  nop
    ctx->pc = 0x3b7634u;
    // NOP
    // 0x3b7638: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3b7638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3b763c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3b763cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3b7640: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3b7640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3b7644: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3b7644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3b7648: 0xc0ed294  jal         func_3B4A50
    ctx->pc = 0x3B7648u;
    SET_GPR_U32(ctx, 31, 0x3B7650u);
    ctx->pc = 0x3B764Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B7648u;
    // 0x3b764c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B4A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B4A50u, 0x3B7648u, 0x3B7650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7650u;
label_3b7650:
    // 0x3b7650: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3b7650u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b7654: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3b7654u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b7658: 0xc0ed13c  jal         func_3B44F0
    ctx->pc = 0x3B7658u;
    SET_GPR_U32(ctx, 31, 0x3B7660u);
    ctx->pc = 0x3B765Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B7658u;
    // 0x3b765c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B44F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B44F0u, 0x3B7658u, 0x3B7660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7660u;
label_3b7660:
    // 0x3b7660: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x3b7660u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x3b7664: 0x8e2400b0  lw          $a0, 0xB0($s1)
    ctx->pc = 0x3b7664u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
    // 0x3b7668: 0xc1036e0  jal         func_40DB80
    ctx->pc = 0x3B7668u;
    SET_GPR_U32(ctx, 31, 0x3B7670u);
    ctx->pc = 0x3B766Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B7668u;
    // 0x3b766c: 0x34a501a3  ori         $a1, $a1, 0x1A3 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)419);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB80u, 0x3B7668u, 0x3B7670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7670u;
label_3b7670:
    // 0x3b7670: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x3B7670u;
    {
        const bool branch_taken_0x3b7670 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b7670) {
            ctx->pc = 0x3B7674u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B7670u;
            // 0x3b7674: 0xae0000b4  sw          $zero, 0xB4($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B768Cu;
            goto label_3b768c;
        }
    }
    ctx->pc = 0x3B7678u;
    // 0x3b7678: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x3b7678u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x3b767c: 0x8e2200b4  lw          $v0, 0xB4($s1)
    ctx->pc = 0x3b767cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 180)));
    // 0x3b7680: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3b7680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3b7684: 0xae2200b4  sw          $v0, 0xB4($s1)
    ctx->pc = 0x3b7684u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 2));
    // 0x3b7688: 0xae0000b4  sw          $zero, 0xB4($s0)
    ctx->pc = 0x3b7688u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 0));
label_3b768c:
    // 0x3b768c: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x3b768cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x3b7690: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x3b7690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3b7694: 0xc103642  jal         func_40D908
    ctx->pc = 0x3B7694u;
    SET_GPR_U32(ctx, 31, 0x3B769Cu);
    ctx->pc = 0x3B7698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B7694u;
    // 0x3b7698: 0x34a50190  ori         $a1, $a1, 0x190 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)400);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D908u, 0x3B7694u, 0x3B769Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B769Cu;
label_3b769c:
    // 0x3b769c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x3b769cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3b76a0: 0xae0200b0  sw          $v0, 0xB0($s0)
    ctx->pc = 0x3b76a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 2));
    // 0x3b76a4: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x3b76a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x3b76a8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3b76a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b76ac: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x3b76acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x3b76b0: 0xae0000b8  sw          $zero, 0xB8($s0)
    ctx->pc = 0x3b76b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 0));
    // 0x3b76b4: 0xae0000bc  sw          $zero, 0xBC($s0)
    ctx->pc = 0x3b76b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 0));
    // 0x3b76b8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3b76b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b76bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3b76bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b76c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3b76c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b76c4: 0x3e00008  jr          $ra
    ctx->pc = 0x3B76C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B76C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B76C4u;
        // 0x3b76c8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B76C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B76CCu;
    // 0x3b76cc: 0x0  nop
    ctx->pc = 0x3b76ccu;
    // NOP
    // 0x3b76d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3b76d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3b76d4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3b76d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3b76d8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3b76d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3b76dc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3b76dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3b76e0: 0xc0ed294  jal         func_3B4A50
    ctx->pc = 0x3B76E0u;
    SET_GPR_U32(ctx, 31, 0x3B76E8u);
    ctx->pc = 0x3B76E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B76E0u;
    // 0x3b76e4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B4A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B4A50u, 0x3B76E0u, 0x3B76E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B76E8u;
label_3b76e8:
    // 0x3b76e8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3b76e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b76ec: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3b76ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3b76f0: 0xc0ed13c  jal         func_3B44F0
    ctx->pc = 0x3B76F0u;
    SET_GPR_U32(ctx, 31, 0x3B76F8u);
    ctx->pc = 0x3B76F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B76F0u;
    // 0x3b76f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B44F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B44F0u, 0x3B76F0u, 0x3B76F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B76F8u;
label_3b76f8:
    // 0x3b76f8: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x3b76f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x3b76fc: 0x8e2400b0  lw          $a0, 0xB0($s1)
    ctx->pc = 0x3b76fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
    // 0x3b7700: 0xc1036e0  jal         func_40DB80
    ctx->pc = 0x3B7700u;
    SET_GPR_U32(ctx, 31, 0x3B7708u);
    ctx->pc = 0x3B7704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B7700u;
    // 0x3b7704: 0x34a501a3  ori         $a1, $a1, 0x1A3 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)419);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB80u, 0x3B7700u, 0x3B7708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7708u;
label_3b7708:
    // 0x3b7708: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3B7708u;
    {
        const bool branch_taken_0x3b7708 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B770Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7708u;
        // 0x3b770c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7708) {
            ctx->pc = 0x3B7720u;
            goto label_3b7720;
        }
    }
    ctx->pc = 0x3B7710u;
    // 0x3b7710: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x3b7710u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x3b7714: 0x8e2200b4  lw          $v0, 0xB4($s1)
    ctx->pc = 0x3b7714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 180)));
    // 0x3b7718: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3b7718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3b771c: 0xae2200b4  sw          $v0, 0xB4($s1)
    ctx->pc = 0x3b771cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 2));
label_3b7720:
    // 0x3b7720: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3b7720u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b7724: 0xc0ee75e  jal         func_3B9D78
    ctx->pc = 0x3B7724u;
    SET_GPR_U32(ctx, 31, 0x3B772Cu);
    ctx->pc = 0x3B7728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B7724u;
    // 0x3b7728: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B9D78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B9D78u, 0x3B7724u, 0x3B772Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B772Cu;
label_3b772c:
    // 0x3b772c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3b772cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b7730: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3b7730u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b7734: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3b7734u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b7738: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3b7738u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b773c: 0x3e00008  jr          $ra
    ctx->pc = 0x3B773Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B7740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B773Cu;
        // 0x3b7740: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B773Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B7744u;
    // 0x3b7744: 0x0  nop
    ctx->pc = 0x3b7744u;
    // NOP
    // 0x3b7748: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3b7748u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3b774c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3b774cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3b7750: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3b7750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3b7754: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3b7754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3b7758: 0xc0ed294  jal         func_3B4A50
    ctx->pc = 0x3B7758u;
    SET_GPR_U32(ctx, 31, 0x3B7760u);
    ctx->pc = 0x3B775Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B7758u;
    // 0x3b775c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B4A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B4A50u, 0x3B7758u, 0x3B7760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7760u;
label_3b7760:
    // 0x3b7760: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3b7760u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b7764: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3b7764u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3b7768: 0xc0ed13c  jal         func_3B44F0
    ctx->pc = 0x3B7768u;
    SET_GPR_U32(ctx, 31, 0x3B7770u);
    ctx->pc = 0x3B776Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B7768u;
    // 0x3b776c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B44F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B44F0u, 0x3B7768u, 0x3B7770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7770u;
label_3b7770:
    // 0x3b7770: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x3b7770u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x3b7774: 0x8e2400b0  lw          $a0, 0xB0($s1)
    ctx->pc = 0x3b7774u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
    // 0x3b7778: 0xc1036e0  jal         func_40DB80
    ctx->pc = 0x3B7778u;
    SET_GPR_U32(ctx, 31, 0x3B7780u);
    ctx->pc = 0x3B777Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B7778u;
    // 0x3b777c: 0x34a501a3  ori         $a1, $a1, 0x1A3 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)419);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB80u, 0x3B7778u, 0x3B7780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7780u;
label_3b7780:
    // 0x3b7780: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3B7780u;
    {
        const bool branch_taken_0x3b7780 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b7780) {
            ctx->pc = 0x3B7798u;
            goto label_3b7798;
        }
    }
    ctx->pc = 0x3B7788u;
    // 0x3b7788: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x3b7788u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x3b778c: 0x8e2200b4  lw          $v0, 0xB4($s1)
    ctx->pc = 0x3b778cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 180)));
    // 0x3b7790: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3b7790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3b7794: 0xae2200b4  sw          $v0, 0xB4($s1)
    ctx->pc = 0x3b7794u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 2));
label_3b7798:
    // 0x3b7798: 0xc0ed4c0  jal         func_3B5300
    ctx->pc = 0x3B7798u;
    SET_GPR_U32(ctx, 31, 0x3B77A0u);
    ctx->pc = 0x3B779Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B7798u;
    // 0x3b779c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B5300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B5300u, 0x3B7798u, 0x3B77A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B77A0u;
label_3b77a0:
    // 0x3b77a0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3b77a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b77a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3b77a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b77a8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3b77a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b77ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3b77acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b77b0: 0x3e00008  jr          $ra
    ctx->pc = 0x3B77B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B77B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B77B0u;
        // 0x3b77b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B77B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B77B8u;
    // 0x3b77b8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3b77b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3b77bc: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3b77bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x3b77c0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3b77c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3b77c4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3b77c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b77c8: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x3b77c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x3b77cc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3b77ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b77d0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x3b77d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x3b77d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3b77d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3b77d8: 0xc0ed294  jal         func_3B4A50
    ctx->pc = 0x3B77D8u;
    SET_GPR_U32(ctx, 31, 0x3B77E0u);
    ctx->pc = 0x3B77DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B77D8u;
    // 0x3b77dc: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B4A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B4A50u, 0x3B77D8u, 0x3B77E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B77E0u;
label_3b77e0:
    // 0x3b77e0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3b77e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b77e4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x3b77e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3b77e8: 0xc0ed13c  jal         func_3B44F0
    ctx->pc = 0x3B77E8u;
    SET_GPR_U32(ctx, 31, 0x3B77F0u);
    ctx->pc = 0x3B77ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B77E8u;
    // 0x3b77ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B44F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B44F0u, 0x3B77E8u, 0x3B77F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B77F0u;
label_3b77f0:
    // 0x3b77f0: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x3b77f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x3b77f4: 0x8e2400b0  lw          $a0, 0xB0($s1)
    ctx->pc = 0x3b77f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
    // 0x3b77f8: 0xc1036e0  jal         func_40DB80
    ctx->pc = 0x3B77F8u;
    SET_GPR_U32(ctx, 31, 0x3B7800u);
    ctx->pc = 0x3B77FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B77F8u;
    // 0x3b77fc: 0x34a501a3  ori         $a1, $a1, 0x1A3 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)419);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB80u, 0x3B77F8u, 0x3B7800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7800u;
label_3b7800:
    // 0x3b7800: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3B7800u;
    {
        const bool branch_taken_0x3b7800 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B7804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7800u;
        // 0x3b7804: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7800) {
            ctx->pc = 0x3B7818u;
            goto label_3b7818;
        }
    }
    ctx->pc = 0x3B7808u;
    // 0x3b7808: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x3b7808u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x3b780c: 0x8e2200b4  lw          $v0, 0xB4($s1)
    ctx->pc = 0x3b780cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 180)));
    // 0x3b7810: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3b7810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3b7814: 0xae2200b4  sw          $v0, 0xB4($s1)
    ctx->pc = 0x3b7814u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 2));
label_3b7818:
    // 0x3b7818: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3b7818u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b781c: 0xc0ed06e  jal         func_3B41B8
    ctx->pc = 0x3B781Cu;
    SET_GPR_U32(ctx, 31, 0x3B7824u);
    ctx->pc = 0x3B7820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B781Cu;
    // 0x3b7820: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B41B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B41B8u, 0x3B781Cu, 0x3B7824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7824u;
label_3b7824:
    // 0x3b7824: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3b7824u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b7828: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3b7828u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3b782c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x3b782cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3b7830: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3b7830u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b7834: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x3b7834u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b7838: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3b7838u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b783c: 0x3e00008  jr          $ra
    ctx->pc = 0x3B783Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B7840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B783Cu;
        // 0x3b7840: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B783Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B7844u;
    // 0x3b7844: 0x0  nop
    ctx->pc = 0x3b7844u;
    // NOP
    // 0x3b7848: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3b7848u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3b784c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3b784cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3b7850: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3b7850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3b7854: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3b7854u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b7858: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3b7858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3b785c: 0xc0ede2e  jal         func_3B78B8
    ctx->pc = 0x3B785Cu;
    SET_GPR_U32(ctx, 31, 0x3B7864u);
    ctx->pc = 0x3B7860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B785Cu;
    // 0x3b7860: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B78B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B78B8u, 0x3B785Cu, 0x3B7864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7864u;
label_3b7864:
    // 0x3b7864: 0x3c070003  lui         $a3, 0x3
    ctx->pc = 0x3b7864u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3 << 16));
    // 0x3b7868: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3b7868u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b786c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3b786cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b7870: 0x240501a5  addiu       $a1, $zero, 0x1A5
    ctx->pc = 0x3b7870u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 421));
    // 0x3b7874: 0x34e77002  ori         $a3, $a3, 0x7002
    ctx->pc = 0x3b7874u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)28674);
    // 0x3b7878: 0xc103404  jal         func_40D010
    ctx->pc = 0x3B7878u;
    SET_GPR_U32(ctx, 31, 0x3B7880u);
    ctx->pc = 0x3B787Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B7878u;
    // 0x3b787c: 0x2408002d  addiu       $t0, $zero, 0x2D (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D010u, 0x3B7878u, 0x3B7880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7880u;
label_3b7880:
    // 0x3b7880: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3B7880u;
    {
        const bool branch_taken_0x3b7880 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B7884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7880u;
        // 0x3b7884: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7880) {
            ctx->pc = 0x3B789Cu;
            goto label_3b789c;
        }
    }
    ctx->pc = 0x3B7888u;
    // 0x3b7888: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b7888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b788c: 0xc0ed87e  jal         func_3B61F8
    ctx->pc = 0x3B788Cu;
    SET_GPR_U32(ctx, 31, 0x3B7894u);
    ctx->pc = 0x3B7890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B788Cu;
    // 0x3b7890: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B61F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B61F8u, 0x3B788Cu, 0x3B7894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7894u;
label_3b7894:
    // 0x3b7894: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3B7894u;
    {
        const bool branch_taken_0x3b7894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B7898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7894u;
        // 0x3b7898: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7894) {
            ctx->pc = 0x3B78A0u;
            goto label_3b78a0;
        }
    }
    ctx->pc = 0x3B789Cu;
label_3b789c:
    // 0x3b789c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3b789cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b78a0:
    // 0x3b78a0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3b78a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b78a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3b78a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b78a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3b78a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b78ac: 0x3e00008  jr          $ra
    ctx->pc = 0x3B78ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B78B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B78ACu;
        // 0x3b78b0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B78ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B78B4u;
    // 0x3b78b4: 0x0  nop
    ctx->pc = 0x3b78b4u;
    // NOP
    ctx->pc = 0x3b78b8u;
}
