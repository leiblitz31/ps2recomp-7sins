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

// Function: sub_0038A288
// Address: 0x38a288 - 0x38a3b0
void sub_0038A288_0x38a288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038A288_0x38a288");
#endif

    switch (ctx->pc) {
        case 0x38a2a4u: goto label_38a2a4;
        case 0x38a2b8u: goto label_38a2b8;
        case 0x38a2f4u: goto label_38a2f4;
        case 0x38a324u: goto label_38a324;
        case 0x38a360u: goto label_38a360;
        case 0x38a378u: goto label_38a378;
        default: break;
    }

    ctx->pc = 0x38a288u;

    // 0x38a288: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x38a288u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x38a28c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x38a28cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x38a290: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x38a290u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x38a294: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x38a294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x38a298: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x38a298u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38a29c: 0xc0e2ea2  jal         func_38BA88
    ctx->pc = 0x38A29Cu;
    SET_GPR_U32(ctx, 31, 0x38A2A4u);
    ctx->pc = 0x38A2A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38A29Cu;
    // 0x38a2a0: 0x8e240018  lw          $a0, 0x18($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38BA88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38BA88u, 0x38A29Cu, 0x38A2A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38A2A4u;
label_38a2a4:
    // 0x38a2a4: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x38a2a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x38a2a8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x38a2a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38a2ac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x38a2acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38a2b0: 0xc104aec  jal         func_412BB0
    ctx->pc = 0x38A2B0u;
    SET_GPR_U32(ctx, 31, 0x38A2B8u);
    ctx->pc = 0x38A2B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38A2B0u;
    // 0x38a2b4: 0x2484ada0  addiu       $a0, $a0, -0x5260 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412BB0u, 0x38A2B0u, 0x38A2B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38A2B8u;
label_38a2b8:
    // 0x38a2b8: 0x26100034  addiu       $s0, $s0, 0x34
    ctx->pc = 0x38a2b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 52));
    // 0x38a2bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x38a2bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38a2c0: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x38a2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x38a2c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38a2c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38a2c8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x38a2c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x38a2cc: 0x3e00008  jr          $ra
    ctx->pc = 0x38A2CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38A2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A2CCu;
        // 0x38a2d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38A2CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38A2D4u;
    // 0x38a2d4: 0x0  nop
    ctx->pc = 0x38a2d4u;
    // NOP
    // 0x38a2d8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x38a2d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x38a2dc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x38a2dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x38a2e0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x38a2e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38a2e4: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x38a2e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x38a2e8: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x38a2e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x38a2ec: 0xc0e1f40  jal         func_387D00
    ctx->pc = 0x38A2ECu;
    SET_GPR_U32(ctx, 31, 0x38A2F4u);
    ctx->pc = 0x38A2F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38A2ECu;
    // 0x38a2f0: 0xafa00014  sw          $zero, 0x14($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x387D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x387D00u, 0x38A2ECu, 0x38A2F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38A2F4u;
label_38a2f4:
    // 0x38a2f4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x38a2f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x38a2f8: 0x3e00008  jr          $ra
    ctx->pc = 0x38A2F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38A2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A2F8u;
        // 0x38a2fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38A2F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38A300u;
    // 0x38a300: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x38a300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x38a304: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x38a304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38a308: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x38a308u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x38a30c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x38a30cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x38a310: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x38a310u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38a314: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x38a314u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x38a318: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x38a318u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x38a31c: 0xc0e1ebc  jal         func_387AF0
    ctx->pc = 0x38A31Cu;
    SET_GPR_U32(ctx, 31, 0x38A324u);
    ctx->pc = 0x38A320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38A31Cu;
    // 0x38a320: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x387AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x387AF0u, 0x38A31Cu, 0x38A324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38A324u;
label_38a324:
    // 0x38a324: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x38a324u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x38a328: 0x3e00008  jr          $ra
    ctx->pc = 0x38A328u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38A32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A328u;
        // 0x38a32c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38A328u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38A330u;
    // 0x38a330: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x38a330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x38a334: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x38a334u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x38a338: 0x37a70004  ori         $a3, $sp, 0x4
    ctx->pc = 0x38a338u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x38a33c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x38a33cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x38a340: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x38a340u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38a344: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x38a344u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x38a348: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x38a348u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38a34c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x38a34cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38a350: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x38a350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x38a354: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x38a354u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38a358: 0xc103322  jal         func_40CC88
    ctx->pc = 0x38A358u;
    SET_GPR_U32(ctx, 31, 0x38A360u);
    ctx->pc = 0x38A35Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38A358u;
    // 0x38a35c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40CC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40CC88u, 0x38A358u, 0x38A360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38A360u;
label_38a360:
    // 0x38a360: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x38A360u;
    {
        const bool branch_taken_0x38a360 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38A364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A360u;
        // 0x38a364: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a360) {
            ctx->pc = 0x38A394u;
            goto label_38a394;
        }
    }
    ctx->pc = 0x38A368u;
    // 0x38a368: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x38a368u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38a36c: 0x2410000c  addiu       $s0, $zero, 0xC
    ctx->pc = 0x38a36cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x38a370: 0xc10480a  jal         func_412028
    ctx->pc = 0x38A370u;
    SET_GPR_U32(ctx, 31, 0x38A378u);
    ctx->pc = 0x38A374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38A370u;
    // 0x38a374: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412028u, 0x38A370u, 0x38A378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38A378u;
label_38a378:
    // 0x38a378: 0x14500007  bne         $v0, $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x38A378u;
    {
        const bool branch_taken_0x38a378 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x38A37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A378u;
        // 0x38a37c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a378) {
            ctx->pc = 0x38A398u;
            goto label_38a398;
        }
    }
    ctx->pc = 0x38A380u;
    // 0x38a380: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x38a380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38a384: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x38a384u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38a388: 0x2463000c  addiu       $v1, $v1, 0xC
    ctx->pc = 0x38a388u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x38a38c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x38A38Cu;
    {
        const bool branch_taken_0x38a38c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38A390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A38Cu;
        // 0x38a390: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a38c) {
            ctx->pc = 0x38A398u;
            goto label_38a398;
        }
    }
    ctx->pc = 0x38A394u;
label_38a394:
    // 0x38a394: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x38a394u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38a398:
    // 0x38a398: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x38a398u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x38a39c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x38a39cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x38a3a0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x38a3a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x38a3a4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x38a3a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38a3a8: 0x3e00008  jr          $ra
    ctx->pc = 0x38A3A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38A3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A3A8u;
        // 0x38a3ac: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38A3A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38A3B0u;
}
