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

// Function: sub_002F33A0
// Address: 0x2f33a0 - 0x2f3600
void sub_002F33A0_0x2f33a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F33A0_0x2f33a0");
#endif

    switch (ctx->pc) {
        case 0x2f33d0u: goto label_2f33d0;
        case 0x2f3418u: goto label_2f3418;
        case 0x2f34d8u: goto label_2f34d8;
        case 0x2f34ecu: goto label_2f34ec;
        case 0x2f3500u: goto label_2f3500;
        case 0x2f3540u: goto label_2f3540;
        default: break;
    }

    ctx->pc = 0x2f33a0u;

    // 0x2f33a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2f33a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2f33a4: 0x3c03004f  lui         $v1, 0x4F
    ctx->pc = 0x2f33a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)79 << 16));
    // 0x2f33a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2f33a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2f33ac: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x2f33acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f33b0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2f33b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f33b4: 0x8c64ea90  lw          $a0, -0x1570($v1)
    ctx->pc = 0x2f33b4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x4EEA90u));
    // 0x2f33b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2f33b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f33bc: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x2f33bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f33c0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2f33c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f33c4: 0x80bcc5a  j           func_2F3168
    ctx->pc = 0x2F33C4u;
    ctx->pc = 0x2F33C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F33C4u;
    // 0x2f33c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F3168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F3168u, 0x2F33C4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2F33CCu;
    // 0x2f33cc: 0x0  nop
    ctx->pc = 0x2f33ccu;
    // NOP
label_2f33d0:
    // 0x2f33d0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2f33d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2f33d4: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x2f33d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x2f33d8: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x2f33d8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f33dc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2f33dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2f33e0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2f33e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x2f33e4: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x2f33e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x2f33e8: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x2f33e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x2f33ec: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x2f33ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x2f33f0: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x2f33f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x2f33f4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2f33f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2f33f8: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x2f33f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x2f33fc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2f33fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2f3400: 0x2a0902d  daddu       $s2, $s5, $zero
    ctx->pc = 0x2f3400u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3404: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x2f3404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x2f3408: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x2f3408u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f340c: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x2f340cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x2f3410: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x2f3410u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3414: 0x0  nop
    ctx->pc = 0x2f3414u;
    // NOP
label_2f3418:
    // 0x2f3418: 0x82510000  lb          $s1, 0x0($s2)
    ctx->pc = 0x2f3418u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2f341c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2f341cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x2f3420: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2f3420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2f3424: 0x90428f81  lbu         $v0, -0x707F($v0)
    ctx->pc = 0x2f3424u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294938497)));
    // 0x2f3428: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x2f3428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x2f342c: 0x0  nop
    ctx->pc = 0x2f342cu;
    // NOP
    // 0x2f3430: 0x0  nop
    ctx->pc = 0x2f3430u;
    // NOP
    // 0x2f3434: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2F3434u;
    {
        const bool branch_taken_0x2f3434 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F3438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3434u;
        // 0x2f3438: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3434) {
            ctx->pc = 0x2F3418u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f3418;
        }
    }
    ctx->pc = 0x2F343Cu;
    // 0x2f343c: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x2f343cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x2f3440: 0x16220007  bne         $s1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2F3440u;
    {
        const bool branch_taken_0x2f3440 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F3444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3440u;
        // 0x2f3444: 0x2402002b  addiu       $v0, $zero, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3440) {
            ctx->pc = 0x2F3460u;
            goto label_2f3460;
        }
    }
    ctx->pc = 0x2F3448u;
    // 0x2f3448: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f3448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f344c: 0x82510000  lb          $s1, 0x0($s2)
    ctx->pc = 0x2f344cu;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2f3450: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2f3450u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2f3454: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2F3454u;
    {
        const bool branch_taken_0x2f3454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3454u;
        // 0x2f3458: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3454) {
            ctx->pc = 0x2F3470u;
            goto label_2f3470;
        }
    }
    ctx->pc = 0x2F345Cu;
    // 0x2f345c: 0x0  nop
    ctx->pc = 0x2f345cu;
    // NOP
label_2f3460:
    // 0x2f3460: 0x16220003  bne         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F3460u;
    {
        const bool branch_taken_0x2f3460 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x2f3460) {
            ctx->pc = 0x2F3470u;
            goto label_2f3470;
        }
    }
    ctx->pc = 0x2F3468u;
    // 0x2f3468: 0x82510000  lb          $s1, 0x0($s2)
    ctx->pc = 0x2f3468u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2f346c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2f346cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2f3470:
    // 0x2f3470: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F3470u;
    {
        const bool branch_taken_0x2f3470 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3470u;
        // 0x2f3474: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3470) {
            ctx->pc = 0x2F3480u;
            goto label_2f3480;
        }
    }
    ctx->pc = 0x2F3478u;
    // 0x2f3478: 0x1662000c  bne         $s3, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2F3478u;
    {
        const bool branch_taken_0x2f3478 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x2f3478) {
            ctx->pc = 0x2F34ACu;
            goto label_2f34ac;
        }
    }
    ctx->pc = 0x2F3480u;
label_2f3480:
    // 0x2f3480: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x2f3480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2f3484: 0x16220009  bne         $s1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2F3484u;
    {
        const bool branch_taken_0x2f3484 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F3488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3484u;
        // 0x2f3488: 0x24020078  addiu       $v0, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3484) {
            ctx->pc = 0x2F34ACu;
            goto label_2f34ac;
        }
    }
    ctx->pc = 0x2F348Cu;
    // 0x2f348c: 0x82430000  lb          $v1, 0x0($s2)
    ctx->pc = 0x2f348cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2f3490: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F3490u;
    {
        const bool branch_taken_0x2f3490 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F3494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3490u;
        // 0x2f3494: 0x24020058  addiu       $v0, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3490) {
            ctx->pc = 0x2F34A0u;
            goto label_2f34a0;
        }
    }
    ctx->pc = 0x2F3498u;
    // 0x2f3498: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F3498u;
    {
        const bool branch_taken_0x2f3498 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2f3498) {
            ctx->pc = 0x2F34ACu;
            goto label_2f34ac;
        }
    }
    ctx->pc = 0x2F34A0u;
label_2f34a0:
    // 0x2f34a0: 0x82510001  lb          $s1, 0x1($s2)
    ctx->pc = 0x2f34a0u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x2f34a4: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x2f34a4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x2f34a8: 0x24130010  addiu       $s3, $zero, 0x10
    ctx->pc = 0x2f34a8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2f34ac:
    // 0x2f34ac: 0x56600006  bnel        $s3, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F34ACu;
    {
        const bool branch_taken_0x2f34ac = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f34ac) {
            ctx->pc = 0x2F34B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F34ACu;
            // 0x2f34b0: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F34C8u;
            goto label_2f34c8;
        }
    }
    ctx->pc = 0x2F34B4u;
    // 0x2f34b4: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2f34b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2f34b8: 0x24130008  addiu       $s3, $zero, 0x8
    ctx->pc = 0x2f34b8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2f34bc: 0x3a220030  xori        $v0, $s1, 0x30
    ctx->pc = 0x2f34bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)48);
    // 0x2f34c0: 0x62980b  movn        $s3, $v1, $v0
    ctx->pc = 0x2f34c0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 3));
    // 0x2f34c4: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x2f34c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2f34c8:
    // 0x2f34c8: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2f34c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f34cc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2f34ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f34d0: 0xc0be820  jal         func_2FA080
    ctx->pc = 0x2F34D0u;
    SET_GPR_U32(ctx, 31, 0x2F34D8u);
    ctx->pc = 0x2F34D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F34D0u;
    // 0x2f34d4: 0x200b82d  daddu       $s7, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA080u, 0x2F34D0u, 0x2F34D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F34D8u;
label_2f34d8:
    // 0x2f34d8: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2f34d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f34dc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2f34dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f34e0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2f34e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f34e4: 0xc0be980  jal         func_2FA600
    ctx->pc = 0x2F34E4u;
    SET_GPR_U32(ctx, 31, 0x2F34ECu);
    ctx->pc = 0x2F34E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F34E4u;
    // 0x2f34e8: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA600u, 0x2F34E4u, 0x2F34ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F34ECu;
label_2f34ec:
    // 0x2f34ec: 0x2b03c  dsll32      $s6, $v0, 0
    ctx->pc = 0x2f34ecu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2f34f0: 0x16b03f  dsra32      $s6, $s6, 0
    ctx->pc = 0x2f34f0u;
    SET_GPR_S64(ctx, 22, GPR_S64(ctx, 22) >> (32 + 0));
    // 0x2f34f4: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2F34F4u;
    {
        const bool branch_taken_0x2f34f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F34F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F34F4u;
        // 0x2f34f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f34f4) {
            ctx->pc = 0x2F3550u;
            goto label_2f3550;
        }
    }
    ctx->pc = 0x2F34FCu;
    // 0x2f34fc: 0x0  nop
    ctx->pc = 0x2f34fcu;
    // NOP
label_2f3500:
    // 0x2f3500: 0x233102a  slt         $v0, $s1, $s3
    ctx->pc = 0x2f3500u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x2f3504: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x2F3504u;
    {
        const bool branch_taken_0x2f3504 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f3504) {
            ctx->pc = 0x2F3590u;
            goto label_2f3590;
        }
    }
    ctx->pc = 0x2F350Cu;
    // 0x2f350c: 0x6000008  bltz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2F350Cu;
    {
        const bool branch_taken_0x2f350c = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x2F3510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F350Cu;
        // 0x2f3510: 0x285102b  sltu        $v0, $s4, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f350c) {
            ctx->pc = 0x2F3530u;
            goto label_2f3530;
        }
    }
    ctx->pc = 0x2F3514u;
    // 0x2f3514: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2F3514u;
    {
        const bool branch_taken_0x2f3514 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f3514) {
            ctx->pc = 0x2F3518u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F3514u;
            // 0x2f3518: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F3548u;
            goto label_2f3548;
        }
    }
    ctx->pc = 0x2F351Cu;
    // 0x2f351c: 0x14b40006  bne         $a1, $s4, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F351Cu;
    {
        const bool branch_taken_0x2f351c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 20));
        ctx->pc = 0x2F3520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F351Cu;
        // 0x2f3520: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f351c) {
            ctx->pc = 0x2F3538u;
            goto label_2f3538;
        }
    }
    ctx->pc = 0x2F3524u;
    // 0x2f3524: 0x2d1102a  slt         $v0, $s6, $s1
    ctx->pc = 0x2f3524u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x2f3528: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F3528u;
    {
        const bool branch_taken_0x2f3528 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f3528) {
            ctx->pc = 0x2F3538u;
            goto label_2f3538;
        }
    }
    ctx->pc = 0x2F3530u;
label_2f3530:
    // 0x2f3530: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2F3530u;
    {
        const bool branch_taken_0x2f3530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3530u;
        // 0x2f3534: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3530) {
            ctx->pc = 0x2F3548u;
            goto label_2f3548;
        }
    }
    ctx->pc = 0x2F3538u;
label_2f3538:
    // 0x2f3538: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x2F3538u;
    SET_GPR_U32(ctx, 31, 0x2F3540u);
    ctx->pc = 0x2F353Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3538u;
    // 0x2f353c: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x2F3538u, 0x2F3540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3540u;
label_2f3540:
    // 0x2f3540: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2f3540u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f3544: 0x222282d  daddu       $a1, $s1, $v0
    ctx->pc = 0x2f3544u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 2));
label_2f3548:
    // 0x2f3548: 0x82510000  lb          $s1, 0x0($s2)
    ctx->pc = 0x2f3548u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2f354c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2f354cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2f3550:
    // 0x2f3550: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x2f3550u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x2f3554: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x2f3554u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x2f3558: 0x90848f81  lbu         $a0, -0x707F($a0)
    ctx->pc = 0x2f3558u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294938497)));
    // 0x2f355c: 0x30820004  andi        $v0, $a0, 0x4
    ctx->pc = 0x2f355cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
    // 0x2f3560: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F3560u;
    {
        const bool branch_taken_0x2f3560 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3560u;
        // 0x2f3564: 0x30820003  andi        $v0, $a0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3560) {
            ctx->pc = 0x2F3570u;
            goto label_2f3570;
        }
    }
    ctx->pc = 0x2F3568u;
    // 0x2f3568: 0x1000ffe5  b           . + 4 + (-0x1B << 2)
    ctx->pc = 0x2F3568u;
    {
        const bool branch_taken_0x2f3568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F356Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3568u;
        // 0x2f356c: 0x2631ffd0  addiu       $s1, $s1, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3568) {
            ctx->pc = 0x2F3500u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f3500;
        }
    }
    ctx->pc = 0x2F3570u;
label_2f3570:
    // 0x2f3570: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2F3570u;
    {
        const bool branch_taken_0x2f3570 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3570u;
        // 0x2f3574: 0x2622ffc9  addiu       $v0, $s1, -0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967241));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3570) {
            ctx->pc = 0x2F3590u;
            goto label_2f3590;
        }
    }
    ctx->pc = 0x2F3578u;
    // 0x2f3578: 0x2623ffa9  addiu       $v1, $s1, -0x57
    ctx->pc = 0x2f3578u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967209));
    // 0x2f357c: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x2f357cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x2f3580: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2f3580u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3584: 0x1000ffde  b           . + 4 + (-0x22 << 2)
    ctx->pc = 0x2F3584u;
    {
        const bool branch_taken_0x2f3584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3584u;
        // 0x2f3588: 0x64880a  movz        $s1, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3584) {
            ctx->pc = 0x2F3500u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f3500;
        }
    }
    ctx->pc = 0x2F358Cu;
    // 0x2f358c: 0x0  nop
    ctx->pc = 0x2f358cu;
    // NOP
label_2f3590:
    // 0x2f3590: 0x6010007  bgez        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2F3590u;
    {
        const bool branch_taken_0x2f3590 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x2F3594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3590u;
        // 0x2f3594: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3590) {
            ctx->pc = 0x2F35B0u;
            goto label_2f35b0;
        }
    }
    ctx->pc = 0x2F3598u;
    // 0x2f3598: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2f3598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f359c: 0x24020022  addiu       $v0, $zero, 0x22
    ctx->pc = 0x2f359cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x2f35a0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2f35a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f35a4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2F35A4u;
    {
        const bool branch_taken_0x2f35a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F35A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F35A4u;
        // 0x2f35a8: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f35a4) {
            ctx->pc = 0x2F35B8u;
            goto label_2f35b8;
        }
    }
    ctx->pc = 0x2F35ACu;
    // 0x2f35ac: 0x0  nop
    ctx->pc = 0x2f35acu;
    // NOP
label_2f35b0:
    // 0x2f35b0: 0x5102f  dsubu       $v0, $zero, $a1
    ctx->pc = 0x2f35b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) - GPR_U64(ctx, 5));
    // 0x2f35b4: 0x43280b  movn        $a1, $v0, $v1
    ctx->pc = 0x2f35b4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
label_2f35b8:
    // 0x2f35b8: 0x13c00003  beqz        $fp, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F35B8u;
    {
        const bool branch_taken_0x2f35b8 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F35BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F35B8u;
        // 0x2f35bc: 0x2642ffff  addiu       $v0, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f35b8) {
            ctx->pc = 0x2F35C8u;
            goto label_2f35c8;
        }
    }
    ctx->pc = 0x2F35C0u;
    // 0x2f35c0: 0x50a80b  movn        $s5, $v0, $s0
    ctx->pc = 0x2f35c0u;
    if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 2));
    // 0x2f35c4: 0xafd50000  sw          $s5, 0x0($fp)
    ctx->pc = 0x2f35c4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 21));
label_2f35c8:
    // 0x2f35c8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2f35c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f35cc: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x2f35ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f35d0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2f35d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2f35d4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2f35d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f35d8: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x2f35d8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2f35dc: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x2f35dcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f35e0: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x2f35e0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2f35e4: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x2f35e4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f35e8: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x2f35e8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2f35ec: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x2f35ecu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2f35f0: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x2f35f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2f35f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2F35F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F35F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F35F4u;
        // 0x2f35f8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F35F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F35FCu;
    // 0x2f35fc: 0x0  nop
    ctx->pc = 0x2f35fcu;
    // NOP
    ctx->pc = 0x2f3600u;
}
