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

// Function: sub_003D9828
// Address: 0x3d9828 - 0x3d9950
void sub_003D9828_0x3d9828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D9828_0x3d9828");
#endif

    switch (ctx->pc) {
        case 0x3d9868u: goto label_3d9868;
        default: break;
    }

    ctx->pc = 0x3d9828u;

    // 0x3d9828: 0x80602d  daddu       $t4, $a0, $zero
    ctx->pc = 0x3d9828u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d982c: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x3d982cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x3d9830: 0x25830b6c  addiu       $v1, $t4, 0xB6C
    ctx->pc = 0x3d9830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), 2924));
    // 0x3d9834: 0x8d841460  lw          $a0, 0x1460($t4)
    ctx->pc = 0x3d9834u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 5216)));
    // 0x3d9838: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3d9838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3d983c: 0x63840  sll         $a3, $a2, 1
    ctx->pc = 0x3d983cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x3d9840: 0x8c4e0000  lw          $t6, 0x0($v0)
    ctx->pc = 0x3d9840u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3d9844: 0x87102a  slt         $v0, $a0, $a3
    ctx->pc = 0x3d9844u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x3d9848: 0x1440003d  bnez        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x3D9848u;
    {
        const bool branch_taken_0x3d9848 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D984Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9848u;
        // 0x3d984c: 0xa0582d  daddu       $t3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9848) {
            ctx->pc = 0x3D9940u;
            goto label_3d9940;
        }
    }
    ctx->pc = 0x3D9850u;
    // 0x3d9850: 0x258a1468  addiu       $t2, $t4, 0x1468
    ctx->pc = 0x3d9850u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 12), 5224));
    // 0x3d9854: 0xe1080  sll         $v0, $t6, 2
    ctx->pc = 0x3d9854u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 14), 2));
    // 0x3d9858: 0x4bc021  addu        $t8, $v0, $t3
    ctx->pc = 0x3d9858u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x3d985c: 0x14e7821  addu        $t7, $t2, $t6
    ctx->pc = 0x3d985cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 14)));
    // 0x3d9860: 0x60682d  daddu       $t5, $v1, $zero
    ctx->pc = 0x3d9860u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d9864: 0xe4102a  slt         $v0, $a3, $a0
    ctx->pc = 0x3d9864u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_3d9868:
    // 0x3d9868: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x3D9868u;
    {
        const bool branch_taken_0x3d9868 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D986Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9868u;
        // 0x3d986c: 0x24e90001  addiu       $t1, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9868) {
            ctx->pc = 0x3D98D4u;
            goto label_3d98d4;
        }
    }
    ctx->pc = 0x3D9870u;
    // 0x3d9870: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x3d9870u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x3d9874: 0x91880  sll         $v1, $t1, 2
    ctx->pc = 0x3d9874u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x3d9878: 0x1a21021  addu        $v0, $t5, $v0
    ctx->pc = 0x3d9878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
    // 0x3d987c: 0x1a31821  addu        $v1, $t5, $v1
    ctx->pc = 0x3d987cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 3)));
    // 0x3d9880: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x3d9880u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3d9884: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x3d9884u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3d9888: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x3d9888u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x3d988c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x3d988cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x3d9890: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x3d9890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x3d9894: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x3d9894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x3d9898: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x3d9898u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3d989c: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x3d989cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3d98a0: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x3d98a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x3d98a4: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x3D98A4u;
    {
        const bool branch_taken_0x3d98a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d98a4) {
            ctx->pc = 0x3D98A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D98A4u;
            // 0x3d98a8: 0x120382d  daddu       $a3, $t1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D98D4u;
            goto label_3d98d4;
        }
    }
    ctx->pc = 0x3D98ACu;
    // 0x3d98ac: 0x1464000a  bne         $v1, $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x3D98ACu;
    {
        const bool branch_taken_0x3d98ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x3D98B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D98ACu;
        // 0x3d98b0: 0x71080  sll         $v0, $a3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d98ac) {
            ctx->pc = 0x3D98D8u;
            goto label_3d98d8;
        }
    }
    ctx->pc = 0x3D98B4u;
    // 0x3d98b4: 0x1451821  addu        $v1, $t2, $a1
    ctx->pc = 0x3d98b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 5)));
    // 0x3d98b8: 0x1482021  addu        $a0, $t2, $t0
    ctx->pc = 0x3d98b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 8)));
    // 0x3d98bc: 0x90650000  lbu         $a1, 0x0($v1)
    ctx->pc = 0x3d98bcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3d98c0: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x3d98c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3d98c4: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x3d98c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x3d98c8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D98C8u;
    {
        const bool branch_taken_0x3d98c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D98CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D98C8u;
        // 0x3d98cc: 0x71080  sll         $v0, $a3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d98c8) {
            ctx->pc = 0x3D98D8u;
            goto label_3d98d8;
        }
    }
    ctx->pc = 0x3D98D0u;
    // 0x3d98d0: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x3d98d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_3d98d4:
    // 0x3d98d4: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x3d98d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_3d98d8:
    // 0x3d98d8: 0x25880b6c  addiu       $t0, $t4, 0xB6C
    ctx->pc = 0x3d98d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 12), 2924));
    // 0x3d98dc: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x3d98dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x3d98e0: 0x97040000  lhu         $a0, 0x0($t8)
    ctx->pc = 0x3d98e0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3d98e4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x3d98e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3d98e8: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x3d98e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x3d98ec: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x3d98ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x3d98f0: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x3d98f0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3d98f4: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x3d98f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3d98f8: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x3D98F8u;
    {
        const bool branch_taken_0x3d98f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D98FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D98F8u;
        // 0x3d98fc: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d98f8) {
            ctx->pc = 0x3D9944u;
            goto label_3d9944;
        }
    }
    ctx->pc = 0x3D9900u;
    // 0x3d9900: 0x14830008  bne         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3D9900u;
    {
        const bool branch_taken_0x3d9900 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x3D9904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9900u;
        // 0x3d9904: 0x1021021  addu        $v0, $t0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9900) {
            ctx->pc = 0x3D9924u;
            goto label_3d9924;
        }
    }
    ctx->pc = 0x3D9908u;
    // 0x3d9908: 0x1451021  addu        $v0, $t2, $a1
    ctx->pc = 0x3d9908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 5)));
    // 0x3d990c: 0x91e40000  lbu         $a0, 0x0($t7)
    ctx->pc = 0x3d990cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x3d9910: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3d9910u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3d9914: 0x64182b  sltu        $v1, $v1, $a0
    ctx->pc = 0x3d9914u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x3d9918: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3D9918u;
    {
        const bool branch_taken_0x3d9918 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D991Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9918u;
        // 0x3d991c: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9918) {
            ctx->pc = 0x3D9940u;
            goto label_3d9940;
        }
    }
    ctx->pc = 0x3D9920u;
    // 0x3d9920: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x3d9920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
label_3d9924:
    // 0x3d9924: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x3d9924u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d9928: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x3d9928u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x3d992c: 0x63840  sll         $a3, $a2, 1
    ctx->pc = 0x3d992cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x3d9930: 0x8d841460  lw          $a0, 0x1460($t4)
    ctx->pc = 0x3d9930u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 5216)));
    // 0x3d9934: 0x87102a  slt         $v0, $a0, $a3
    ctx->pc = 0x3d9934u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x3d9938: 0x1040ffcb  beqz        $v0, . + 4 + (-0x35 << 2)
    ctx->pc = 0x3D9938u;
    {
        const bool branch_taken_0x3d9938 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D993Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9938u;
        // 0x3d993c: 0xe4102a  slt         $v0, $a3, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9938) {
            ctx->pc = 0x3D9868u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d9868;
        }
    }
    ctx->pc = 0x3D9940u;
label_3d9940:
    // 0x3d9940: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x3d9940u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_3d9944:
    // 0x3d9944: 0x1821021  addu        $v0, $t4, $v0
    ctx->pc = 0x3d9944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x3d9948: 0x3e00008  jr          $ra
    ctx->pc = 0x3D9948u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D994Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9948u;
        // 0x3d994c: 0xac4e0b6c  sw          $t6, 0xB6C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 2924), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D9948u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D9950u;
}
