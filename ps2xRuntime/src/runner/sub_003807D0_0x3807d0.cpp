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

// Function: sub_003807D0
// Address: 0x3807d0 - 0x380940
void sub_003807D0_0x3807d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003807D0_0x3807d0");
#endif

    switch (ctx->pc) {
        case 0x3808a8u: goto label_3808a8;
        case 0x380928u: goto label_380928;
        default: break;
    }

    ctx->pc = 0x3807d0u;

label_3807d0:
    // 0x3807d0: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x3807d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x3807d4: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3807D4u;
    {
        const bool branch_taken_0x3807d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3807d4) {
            ctx->pc = 0x3807D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3807D4u;
            // 0x3807d8: 0xac87001c  sw          $a3, 0x1C($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3807DCu;
            goto label_3807dc;
        }
    }
    ctx->pc = 0x3807DCu;
label_3807dc:
    // 0x3807dc: 0x30a20002  andi        $v0, $a1, 0x2
    ctx->pc = 0x3807dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
    // 0x3807e0: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3807E0u;
    {
        const bool branch_taken_0x3807e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3807e0) {
            ctx->pc = 0x3807E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3807E0u;
            // 0x3807e4: 0xac870028  sw          $a3, 0x28($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3807E8u;
            goto label_3807e8;
        }
    }
    ctx->pc = 0x3807E8u;
label_3807e8:
    // 0x3807e8: 0x30a20004  andi        $v0, $a1, 0x4
    ctx->pc = 0x3807e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
    // 0x3807ec: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3807ECu;
    {
        const bool branch_taken_0x3807ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3807ec) {
            ctx->pc = 0x3807F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3807ECu;
            // 0x3807f0: 0xac870038  sw          $a3, 0x38($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3807F4u;
            goto label_3807f4;
        }
    }
    ctx->pc = 0x3807F4u;
label_3807f4:
    // 0x3807f4: 0x8c820038  lw          $v0, 0x38($a0)
    ctx->pc = 0x3807f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x3807f8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3807F8u;
    {
        const bool branch_taken_0x3807f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3807FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3807F8u;
        // 0x3807fc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3807f8) {
            ctx->pc = 0x380808u;
            goto label_380808;
        }
    }
    ctx->pc = 0x380800u;
    // 0x380800: 0x8c820028  lw          $v0, 0x28($a0)
    ctx->pc = 0x380800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x380804: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x380804u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_380808:
    // 0x380808: 0xac830018  sw          $v1, 0x18($a0)
    ctx->pc = 0x380808u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 3));
    // 0x38080c: 0x3e00008  jr          $ra
    ctx->pc = 0x38080Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x380810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38080Cu;
        // 0x380810: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38080Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x380814u;
    // 0x380814: 0x0  nop
    ctx->pc = 0x380814u;
    // NOP
    // 0x380818: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x380818u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x38081c: 0xa0602d  daddu       $t4, $a1, $zero
    ctx->pc = 0x38081cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x380820: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x380820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x380824: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x380824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x380828: 0x1580000a  bnez        $t4, . + 4 + (0xA << 2)
    ctx->pc = 0x380828u;
    {
        const bool branch_taken_0x380828 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x38082Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380828u;
        // 0x38082c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x380828) {
            ctx->pc = 0x380854u;
            goto label_380854;
        }
    }
    ctx->pc = 0x380830u;
    // 0x380830: 0x8e0300f0  lw          $v1, 0xF0($s0)
    ctx->pc = 0x380830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x380834: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x380834u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x380838: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x380838u;
    {
        const bool branch_taken_0x380838 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38083Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380838u;
        // 0x38083c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x380838) {
            ctx->pc = 0x380858u;
            goto label_380858;
        }
    }
    ctx->pc = 0x380840u;
    // 0x380840: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x380840u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x380844: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x380844u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x380848: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x380848u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x38084c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x38084Cu;
    {
        const bool branch_taken_0x38084c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x380850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38084Cu;
        // 0x380850: 0xae0200f0  sw          $v0, 0xF0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38084c) {
            ctx->pc = 0x380878u;
            goto label_380878;
        }
    }
    ctx->pc = 0x380854u;
label_380854:
    // 0x380854: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x380854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_380858:
    // 0x380858: 0x15820034  bne         $t4, $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x380858u;
    {
        const bool branch_taken_0x380858 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 2));
        ctx->pc = 0x38085Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380858u;
        // 0x38085c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x380858) {
            ctx->pc = 0x38092Cu;
            goto label_38092c;
        }
    }
    ctx->pc = 0x380860u;
    // 0x380860: 0x8e0300f0  lw          $v1, 0xF0($s0)
    ctx->pc = 0x380860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x380864: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x380864u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x380868: 0x14400030  bnez        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x380868u;
    {
        const bool branch_taken_0x380868 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38086Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380868u;
        // 0x38086c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x380868) {
            ctx->pc = 0x38092Cu;
            goto label_38092c;
        }
    }
    ctx->pc = 0x380870u;
    // 0x380870: 0x34620001  ori         $v0, $v1, 0x1
    ctx->pc = 0x380870u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x380874: 0xae0200f0  sw          $v0, 0xF0($s0)
    ctx->pc = 0x380874u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 2));
label_380878:
    // 0x380878: 0x8e070100  lw          $a3, 0x100($s0)
    ctx->pc = 0x380878u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
    // 0x38087c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x38087cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x380880: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x380880u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x380884: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x380884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x380888: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x380888u;
    {
        const bool branch_taken_0x380888 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38088Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380888u;
        // 0x38088c: 0xe0182d  daddu       $v1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x380888) {
            ctx->pc = 0x380918u;
            goto label_380918;
        }
    }
    ctx->pc = 0x380890u;
    // 0x380890: 0x3c0affff  lui         $t2, 0xFFFF
    ctx->pc = 0x380890u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65535 << 16));
    // 0x380894: 0x8e090104  lw          $t1, 0x104($s0)
    ctx->pc = 0x380894u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x380898: 0x354affff  ori         $t2, $t2, 0xFFFF
    ctx->pc = 0x380898u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
    // 0x38089c: 0x240e0024  addiu       $t6, $zero, 0x24
    ctx->pc = 0x38089cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x3808a0: 0x240d0001  addiu       $t5, $zero, 0x1
    ctx->pc = 0x3808a0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3808a4: 0x0  nop
    ctx->pc = 0x3808a4u;
    // NOP
label_3808a8:
    // 0x3808a8: 0x8d260000  lw          $a2, 0x0($t1)
    ctx->pc = 0x3808a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x3808ac: 0x10ca0014  beq         $a2, $t2, . + 4 + (0x14 << 2)
    ctx->pc = 0x3808ACu;
    {
        const bool branch_taken_0x3808ac = (GPR_U64(ctx, 6) == GPR_U64(ctx, 10));
        ctx->pc = 0x3808B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3808ACu;
        // 0x3808b0: 0xce2018  mult        $a0, $a2, $t6 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3808ac) {
            ctx->pc = 0x380900u;
            goto label_380900;
        }
    }
    ctx->pc = 0x3808B4u;
    // 0x3808b4: 0x8ce30050  lw          $v1, 0x50($a3)
    ctx->pc = 0x3808b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 80)));
    // 0x3808b8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x3808b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x3808bc: 0x158d0007  bne         $t4, $t5, . + 4 + (0x7 << 2)
    ctx->pc = 0x3808BCu;
    {
        const bool branch_taken_0x3808bc = (GPR_U64(ctx, 12) != GPR_U64(ctx, 13));
        ctx->pc = 0x3808C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3808BCu;
        // 0x3808c0: 0x444021  addu        $t0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3808bc) {
            ctx->pc = 0x3808DCu;
            goto label_3808dc;
        }
    }
    ctx->pc = 0x3808C4u;
    // 0x3808c4: 0x8ce40054  lw          $a0, 0x54($a3)
    ctx->pc = 0x3808c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 84)));
    // 0x3808c8: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x3808c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x3808cc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3808ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3808d0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3808d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3808d4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3808D4u;
    {
        const bool branch_taken_0x3808d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3808D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3808D4u;
        // 0x3808d8: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3808d4) {
            ctx->pc = 0x3808F0u;
            goto label_3808f0;
        }
    }
    ctx->pc = 0x3808DCu;
label_3808dc:
    // 0x3808dc: 0x8ce40054  lw          $a0, 0x54($a3)
    ctx->pc = 0x3808dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 84)));
    // 0x3808e0: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x3808e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x3808e4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3808e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3808e8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3808e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3808ec: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3808ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3808f0:
    // 0x3808f0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x3808f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x3808f4: 0x8d02001c  lw          $v0, 0x1C($t0)
    ctx->pc = 0x3808f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 28)));
    // 0x3808f8: 0x8e030100  lw          $v1, 0x100($s0)
    ctx->pc = 0x3808f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
    // 0x3808fc: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x3808fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_380900:
    // 0x380900: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x380900u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x380904: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x380904u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x380908: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x380908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x38090c: 0x162102b  sltu        $v0, $t3, $v0
    ctx->pc = 0x38090cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x380910: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x380910u;
    {
        const bool branch_taken_0x380910 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x380914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380910u;
        // 0x380914: 0x25290004  addiu       $t1, $t1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x380910) {
            ctx->pc = 0x3808A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3808a8;
        }
    }
    ctx->pc = 0x380918u;
label_380918:
    // 0x380918: 0x8e040100  lw          $a0, 0x100($s0)
    ctx->pc = 0x380918u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
    // 0x38091c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x38091cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x380920: 0xc0e01f4  jal         func_3807D0
    ctx->pc = 0x380920u;
    SET_GPR_U32(ctx, 31, 0x380928u);
    ctx->pc = 0x380924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x380920u;
    // 0x380924: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3807D0u;
    goto label_3807d0;
    ctx->pc = 0x380928u;
label_380928:
    // 0x380928: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x380928u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38092c:
    // 0x38092c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x38092cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x380930: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x380930u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x380934: 0x3e00008  jr          $ra
    ctx->pc = 0x380934u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x380938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380934u;
        // 0x380938: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x380934u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38093Cu;
    // 0x38093c: 0x0  nop
    ctx->pc = 0x38093cu;
    // NOP
    ctx->pc = 0x380940u;
}
