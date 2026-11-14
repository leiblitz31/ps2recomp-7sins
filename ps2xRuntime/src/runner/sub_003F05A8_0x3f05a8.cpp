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

// Function: sub_003F05A8
// Address: 0x3f05a8 - 0x3f0948
void sub_003F05A8_0x3f05a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F05A8_0x3f05a8");
#endif

    switch (ctx->pc) {
        case 0x3f0658u: goto label_3f0658;
        case 0x3f0780u: goto label_3f0780;
        case 0x3f0828u: goto label_3f0828;
        case 0x3f08e8u: goto label_3f08e8;
        default: break;
    }

    ctx->pc = 0x3f05a8u;

    // 0x3f05a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3f05a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3f05ac: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3f05acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3f05b0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3f05b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3f05b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3f05b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3f05b8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3f05b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f05bc: 0x92030010  lbu         $v1, 0x10($s0)
    ctx->pc = 0x3f05bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x3f05c0: 0x14620048  bne         $v1, $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x3F05C0u;
    {
        const bool branch_taken_0x3f05c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3F05C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F05C0u;
        // 0x3f05c4: 0xde0b0000  ld          $t3, 0x0($s0) (Delay Slot)
        SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f05c0) {
            ctx->pc = 0x3F06E4u;
            goto label_3f06e4;
        }
    }
    ctx->pc = 0x3F05C8u;
    // 0x3f05c8: 0x10c00046  beqz        $a2, . + 4 + (0x46 << 2)
    ctx->pc = 0x3F05C8u;
    {
        const bool branch_taken_0x3f05c8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F05CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F05C8u;
        // 0x3f05cc: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f05c8) {
            ctx->pc = 0x3F06E4u;
            goto label_3f06e4;
        }
    }
    ctx->pc = 0x3F05D0u;
    // 0x3f05d0: 0x92030011  lbu         $v1, 0x11($s0)
    ctx->pc = 0x3f05d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 17)));
    // 0x3f05d4: 0x54620044  bnel        $v1, $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x3F05D4u;
    {
        const bool branch_taken_0x3f05d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3f05d4) {
            ctx->pc = 0x3F05D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F05D4u;
            // 0x3f05d8: 0x92020010  lbu         $v0, 0x10($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F06E8u;
            goto label_3f06e8;
        }
    }
    ctx->pc = 0x3F05DCu;
    // 0x3f05dc: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x3f05dcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f05e0: 0x11600088  beqz        $t3, . + 4 + (0x88 << 2)
    ctx->pc = 0x3F05E0u;
    {
        const bool branch_taken_0x3f05e0 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F05E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F05E0u;
        // 0x3f05e4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f05e0) {
            ctx->pc = 0x3F0804u;
            goto label_3f0804;
        }
    }
    ctx->pc = 0x3F05E8u;
    // 0x3f05e8: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x3f05e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f05ec: 0x100502d  daddu       $t2, $t0, $zero
    ctx->pc = 0x3f05ecu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f05f0: 0x19600003  blez        $t3, . + 4 + (0x3 << 2)
    ctx->pc = 0x3F05F0u;
    {
        const bool branch_taken_0x3f05f0 = (GPR_S32(ctx, 11) <= 0);
        ctx->pc = 0x3F05F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F05F0u;
        // 0x3f05f4: 0x31620001  andi        $v0, $t3, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f05f0) {
            ctx->pc = 0x3F0600u;
            goto label_3f0600;
        }
    }
    ctx->pc = 0x3F05F8u;
    // 0x3f05f8: 0x50400017  beql        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x3F05F8u;
    {
        const bool branch_taken_0x3f05f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f05f8) {
            ctx->pc = 0x3F05FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F05F8u;
            // 0x3f05fc: 0x140282d  daddu       $a1, $t2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F0658u;
            goto label_3f0658;
        }
    }
    ctx->pc = 0x3F0600u;
label_3f0600:
    // 0x3f0600: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x3f0600u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3f0604: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x3f0604u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3f0608: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3f0608u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x3f060c: 0x24a70001  addiu       $a3, $a1, 0x1
    ctx->pc = 0x3f060cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3f0610: 0x91040000  lbu         $a0, 0x0($t0)
    ctx->pc = 0x3f0610u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3f0614: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x3f0614u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x3f0618: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3f0618u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x3f061c: 0x21280  sll         $v0, $v0, 10
    ctx->pc = 0x3f061cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 10));
    // 0x3f0620: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x3f0620u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3f0624: 0x420c2  srl         $a0, $a0, 3
    ctx->pc = 0x3f0624u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 3));
    // 0x3f0628: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x3f0628u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x3f062c: 0x250a0001  addiu       $t2, $t0, 0x1
    ctx->pc = 0x3f062cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x3f0630: 0x318c2  srl         $v1, $v1, 3
    ctx->pc = 0x3f0630u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 3));
    // 0x3f0634: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x3f0634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x3f0638: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3f0638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3f063c: 0x12b402b  sltu        $t0, $t1, $t3
    ctx->pc = 0x3f063cu;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x3f0640: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x3f0640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x3f0644: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3f0644u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3f0648: 0x1100006e  beqz        $t0, . + 4 + (0x6E << 2)
    ctx->pc = 0x3F0648u;
    {
        const bool branch_taken_0x3f0648 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F064Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0648u;
        // 0x3f064c: 0xa0a30000  sb          $v1, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f0648) {
            ctx->pc = 0x3F0804u;
            goto label_3f0804;
        }
    }
    ctx->pc = 0x3F0650u;
    // 0x3f0650: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x3f0650u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f0654: 0x0  nop
    ctx->pc = 0x3f0654u;
    // NOP
label_3f0658:
    // 0x3f0658: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x3f0658u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3f065c: 0x65290002  daddiu      $t1, $t1, 0x2
    ctx->pc = 0x3f065cu;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 9) + (int64_t)(int32_t)2);
    // 0x3f0660: 0x90a20001  lbu         $v0, 0x1($a1)
    ctx->pc = 0x3f0660u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x3f0664: 0x12b402b  sltu        $t0, $t1, $t3
    ctx->pc = 0x3f0664u;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x3f0668: 0x90a40002  lbu         $a0, 0x2($a1)
    ctx->pc = 0x3f0668u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x3f066c: 0x318c2  srl         $v1, $v1, 3
    ctx->pc = 0x3f066cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 3));
    // 0x3f0670: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x3f0670u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x3f0674: 0x31a80  sll         $v1, $v1, 10
    ctx->pc = 0x3f0674u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 10));
    // 0x3f0678: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x3f0678u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x3f067c: 0x420c2  srl         $a0, $a0, 3
    ctx->pc = 0x3f067cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 3));
    // 0x3f0680: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3f0680u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3f0684: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x3f0684u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x3f0688: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x3f0688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x3f068c: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x3f068cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3f0690: 0xa0e20000  sb          $v0, 0x0($a3)
    ctx->pc = 0x3f0690u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3f0694: 0x90a30003  lbu         $v1, 0x3($a1)
    ctx->pc = 0x3f0694u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
    // 0x3f0698: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x3f0698u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x3f069c: 0x90a40000  lbu         $a0, 0x0($a1)
    ctx->pc = 0x3f069cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3f06a0: 0x318c2  srl         $v1, $v1, 3
    ctx->pc = 0x3f06a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 3));
    // 0x3f06a4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3f06a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3f06a8: 0x31a80  sll         $v1, $v1, 10
    ctx->pc = 0x3f06a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 10));
    // 0x3f06ac: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3f06acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3f06b0: 0x420c2  srl         $a0, $a0, 3
    ctx->pc = 0x3f06b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 3));
    // 0x3f06b4: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x3f06b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x3f06b8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3f06b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3f06bc: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x3f06bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x3f06c0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x3f06c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x3f06c4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3f06c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3f06c8: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x3f06c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x3f06cc: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x3f06ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3f06d0: 0xa0e20001  sb          $v0, 0x1($a3)
    ctx->pc = 0x3f06d0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x3f06d4: 0x1500ffe0  bnez        $t0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x3F06D4u;
    {
        const bool branch_taken_0x3f06d4 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F06D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F06D4u;
        // 0x3f06d8: 0x24e70002  addiu       $a3, $a3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f06d4) {
            ctx->pc = 0x3F0658u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3f0658;
        }
    }
    ctx->pc = 0x3F06DCu;
    // 0x3f06dc: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x3F06DCu;
    {
        const bool branch_taken_0x3f06dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F06E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F06DCu;
        // 0x3f06e0: 0x92030011  lbu         $v1, 0x11($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f06dc) {
            ctx->pc = 0x3F0808u;
            goto label_3f0808;
        }
    }
    ctx->pc = 0x3F06E4u;
label_3f06e4:
    // 0x3f06e4: 0x92020010  lbu         $v0, 0x10($s0)
    ctx->pc = 0x3f06e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
label_3f06e8:
    // 0x3f06e8: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x3f06e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3f06ec: 0x14430052  bne         $v0, $v1, . + 4 + (0x52 << 2)
    ctx->pc = 0x3F06ECu;
    {
        const bool branch_taken_0x3f06ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3F06F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F06ECu;
        // 0x3f06f0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f06ec) {
            ctx->pc = 0x3F0838u;
            goto label_3f0838;
        }
    }
    ctx->pc = 0x3F06F4u;
    // 0x3f06f4: 0x10c00050  beqz        $a2, . + 4 + (0x50 << 2)
    ctx->pc = 0x3F06F4u;
    {
        const bool branch_taken_0x3f06f4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F06F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F06F4u;
        // 0x3f06f8: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f06f4) {
            ctx->pc = 0x3F0838u;
            goto label_3f0838;
        }
    }
    ctx->pc = 0x3F06FCu;
    // 0x3f06fc: 0x92030011  lbu         $v1, 0x11($s0)
    ctx->pc = 0x3f06fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 17)));
    // 0x3f0700: 0x5462004e  bnel        $v1, $v0, . + 4 + (0x4E << 2)
    ctx->pc = 0x3F0700u;
    {
        const bool branch_taken_0x3f0700 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3f0700) {
            ctx->pc = 0x3F0704u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F0700u;
            // 0x3f0704: 0x308300ff  andi        $v1, $a0, 0xFF (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F083Cu;
            goto label_3f083c;
        }
    }
    ctx->pc = 0x3F0708u;
    // 0x3f0708: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x3f0708u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f070c: 0x1160003d  beqz        $t3, . + 4 + (0x3D << 2)
    ctx->pc = 0x3F070Cu;
    {
        const bool branch_taken_0x3f070c = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F0710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F070Cu;
        // 0x3f0710: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f070c) {
            ctx->pc = 0x3F0804u;
            goto label_3f0804;
        }
    }
    ctx->pc = 0x3F0714u;
    // 0x3f0714: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x3f0714u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f0718: 0x100502d  daddu       $t2, $t0, $zero
    ctx->pc = 0x3f0718u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f071c: 0x19600003  blez        $t3, . + 4 + (0x3 << 2)
    ctx->pc = 0x3F071Cu;
    {
        const bool branch_taken_0x3f071c = (GPR_S32(ctx, 11) <= 0);
        ctx->pc = 0x3F0720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F071Cu;
        // 0x3f0720: 0x31620001  andi        $v0, $t3, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f071c) {
            ctx->pc = 0x3F072Cu;
            goto label_3f072c;
        }
    }
    ctx->pc = 0x3F0724u;
    // 0x3f0724: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x3F0724u;
    {
        const bool branch_taken_0x3f0724 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f0724) {
            ctx->pc = 0x3F0728u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F0724u;
            // 0x3f0728: 0x140282d  daddu       $a1, $t2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F0780u;
            goto label_3f0780;
        }
    }
    ctx->pc = 0x3F072Cu;
label_3f072c:
    // 0x3f072c: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x3f072cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3f0730: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x3f0730u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3f0734: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3f0734u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x3f0738: 0x24a70001  addiu       $a3, $a1, 0x1
    ctx->pc = 0x3f0738u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3f073c: 0x91040000  lbu         $a0, 0x0($t0)
    ctx->pc = 0x3f073cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3f0740: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x3f0740u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x3f0744: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3f0744u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x3f0748: 0x21280  sll         $v0, $v0, 10
    ctx->pc = 0x3f0748u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 10));
    // 0x3f074c: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x3f074cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3f0750: 0x420c2  srl         $a0, $a0, 3
    ctx->pc = 0x3f0750u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 3));
    // 0x3f0754: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x3f0754u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x3f0758: 0x250a0002  addiu       $t2, $t0, 0x2
    ctx->pc = 0x3f0758u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
    // 0x3f075c: 0x318c2  srl         $v1, $v1, 3
    ctx->pc = 0x3f075cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 3));
    // 0x3f0760: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x3f0760u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x3f0764: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3f0764u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3f0768: 0x12b402b  sltu        $t0, $t1, $t3
    ctx->pc = 0x3f0768u;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x3f076c: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x3f076cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x3f0770: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3f0770u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3f0774: 0x11000023  beqz        $t0, . + 4 + (0x23 << 2)
    ctx->pc = 0x3F0774u;
    {
        const bool branch_taken_0x3f0774 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F0778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0774u;
        // 0x3f0778: 0xa0a30000  sb          $v1, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f0774) {
            ctx->pc = 0x3F0804u;
            goto label_3f0804;
        }
    }
    ctx->pc = 0x3F077Cu;
    // 0x3f077c: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x3f077cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_3f0780:
    // 0x3f0780: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x3f0780u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3f0784: 0x65290002  daddiu      $t1, $t1, 0x2
    ctx->pc = 0x3f0784u;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 9) + (int64_t)(int32_t)2);
    // 0x3f0788: 0x90a20001  lbu         $v0, 0x1($a1)
    ctx->pc = 0x3f0788u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x3f078c: 0x12b402b  sltu        $t0, $t1, $t3
    ctx->pc = 0x3f078cu;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x3f0790: 0x90a40002  lbu         $a0, 0x2($a1)
    ctx->pc = 0x3f0790u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x3f0794: 0x318c2  srl         $v1, $v1, 3
    ctx->pc = 0x3f0794u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 3));
    // 0x3f0798: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x3f0798u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x3f079c: 0x31a80  sll         $v1, $v1, 10
    ctx->pc = 0x3f079cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 10));
    // 0x3f07a0: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x3f07a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x3f07a4: 0x420c2  srl         $a0, $a0, 3
    ctx->pc = 0x3f07a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 3));
    // 0x3f07a8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3f07a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3f07ac: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x3f07acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x3f07b0: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x3f07b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x3f07b4: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x3f07b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3f07b8: 0xa0e20000  sb          $v0, 0x0($a3)
    ctx->pc = 0x3f07b8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3f07bc: 0x90a30004  lbu         $v1, 0x4($a1)
    ctx->pc = 0x3f07bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x3f07c0: 0x24a50005  addiu       $a1, $a1, 0x5
    ctx->pc = 0x3f07c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5));
    // 0x3f07c4: 0x90a40000  lbu         $a0, 0x0($a1)
    ctx->pc = 0x3f07c4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3f07c8: 0x318c2  srl         $v1, $v1, 3
    ctx->pc = 0x3f07c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 3));
    // 0x3f07cc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3f07ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3f07d0: 0x31a80  sll         $v1, $v1, 10
    ctx->pc = 0x3f07d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 10));
    // 0x3f07d4: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3f07d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3f07d8: 0x420c2  srl         $a0, $a0, 3
    ctx->pc = 0x3f07d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 3));
    // 0x3f07dc: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x3f07dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x3f07e0: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x3f07e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x3f07e4: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x3f07e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x3f07e8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x3f07e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x3f07ec: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3f07ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3f07f0: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x3f07f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x3f07f4: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x3f07f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3f07f8: 0xa0e20001  sb          $v0, 0x1($a3)
    ctx->pc = 0x3f07f8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x3f07fc: 0x1500ffe0  bnez        $t0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x3F07FCu;
    {
        const bool branch_taken_0x3f07fc = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F0800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F07FCu;
        // 0x3f0800: 0x24e70002  addiu       $a3, $a3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f07fc) {
            ctx->pc = 0x3F0780u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3f0780;
        }
    }
    ctx->pc = 0x3F0804u;
label_3f0804:
    // 0x3f0804: 0x92030011  lbu         $v1, 0x11($s0)
    ctx->pc = 0x3f0804u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 17)));
label_3f0808:
    // 0x3f0808: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3f0808u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3f080c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3f080cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3f0810: 0xa2050012  sb          $a1, 0x12($s0)
    ctx->pc = 0x3f0810u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 18), (uint8_t)GPR_U32(ctx, 5));
    // 0x3f0814: 0xa2030013  sb          $v1, 0x13($s0)
    ctx->pc = 0x3f0814u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 19), (uint8_t)GPR_U32(ctx, 3));
    // 0x3f0818: 0x160202d  daddu       $a0, $t3, $zero
    ctx->pc = 0x3f0818u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f081c: 0xa2020010  sb          $v0, 0x10($s0)
    ctx->pc = 0x3f081cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 16), (uint8_t)GPR_U32(ctx, 2));
    // 0x3f0820: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x3F0820u;
    SET_GPR_U32(ctx, 31, 0x3F0828u);
    ctx->pc = 0x3F0824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F0820u;
    // 0x3f0824: 0x306500ff  andi        $a1, $v1, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x3F0820u, 0x3F0828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F0828u;
label_3f0828:
    // 0x3f0828: 0x64420007  daddiu      $v0, $v0, 0x7
    ctx->pc = 0x3f0828u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)7);
    // 0x3f082c: 0x210fa  dsrl        $v0, $v0, 3
    ctx->pc = 0x3f082cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 3);
    // 0x3f0830: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x3F0830u;
    {
        const bool branch_taken_0x3f0830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F0834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0830u;
        // 0x3f0834: 0xfe020008  sd          $v0, 0x8($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f0830) {
            ctx->pc = 0x3F0938u;
            goto label_3f0938;
        }
    }
    ctx->pc = 0x3F0838u;
label_3f0838:
    // 0x3f0838: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x3f0838u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_3f083c:
    // 0x3f083c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3f083cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3f0840: 0x5462003e  bnel        $v1, $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x3F0840u;
    {
        const bool branch_taken_0x3f0840 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3f0840) {
            ctx->pc = 0x3F0844u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F0840u;
            // 0x3f0844: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F093Cu;
            goto label_3f093c;
        }
    }
    ctx->pc = 0x3F0848u;
    // 0x3f0848: 0x10e0003b  beqz        $a3, . + 4 + (0x3B << 2)
    ctx->pc = 0x3F0848u;
    {
        const bool branch_taken_0x3f0848 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F084Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0848u;
        // 0x3f084c: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f0848) {
            ctx->pc = 0x3F0938u;
            goto label_3f0938;
        }
    }
    ctx->pc = 0x3F0850u;
    // 0x3f0850: 0x92030011  lbu         $v1, 0x11($s0)
    ctx->pc = 0x3f0850u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 17)));
    // 0x3f0854: 0x54620039  bnel        $v1, $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x3F0854u;
    {
        const bool branch_taken_0x3f0854 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3f0854) {
            ctx->pc = 0x3F0858u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F0854u;
            // 0x3f0858: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F093Cu;
            goto label_3f093c;
        }
    }
    ctx->pc = 0x3F085Cu;
    // 0x3f085c: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x3f085cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f0860: 0x11600035  beqz        $t3, . + 4 + (0x35 << 2)
    ctx->pc = 0x3F0860u;
    {
        const bool branch_taken_0x3f0860 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F0864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0860u;
        // 0x3f0864: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f0860) {
            ctx->pc = 0x3F0938u;
            goto label_3f0938;
        }
    }
    ctx->pc = 0x3F0868u;
    // 0x3f0868: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x3f0868u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f086c: 0x19600014  blez        $t3, . + 4 + (0x14 << 2)
    ctx->pc = 0x3F086Cu;
    {
        const bool branch_taken_0x3f086c = (GPR_S32(ctx, 11) <= 0);
        ctx->pc = 0x3F0870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F086Cu;
        // 0x3f0870: 0x31630003  andi        $v1, $t3, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f086c) {
            ctx->pc = 0x3F08C0u;
            goto label_3f08c0;
        }
    }
    ctx->pc = 0x3F0874u;
    // 0x3f0874: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x3F0874u;
    {
        const bool branch_taken_0x3f0874 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F0878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0874u;
        // 0x3f0878: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f0874) {
            ctx->pc = 0x3F08E0u;
            goto label_3f08e0;
        }
    }
    ctx->pc = 0x3F087Cu;
    // 0x3f087c: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x3F087Cu;
    {
        const bool branch_taken_0x3f087c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f087c) {
            ctx->pc = 0x3F0880u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F087Cu;
            // 0x3f0880: 0x90820000  lbu         $v0, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F08C4u;
            goto label_3f08c4;
        }
    }
    ctx->pc = 0x3F0884u;
    // 0x3f0884: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x3f0884u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3f0888: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x3F0888u;
    {
        const bool branch_taken_0x3f0888 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f0888) {
            ctx->pc = 0x3F088Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F0888u;
            // 0x3f088c: 0x90820000  lbu         $v0, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F08ACu;
            goto label_3f08ac;
        }
    }
    ctx->pc = 0x3F0890u;
    // 0x3f0890: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x3f0890u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3f0894: 0x25040001  addiu       $a0, $t0, 0x1
    ctx->pc = 0x3f0894u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x3f0898: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x3f0898u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3f089c: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x3f089cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x3f08a0: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3f08a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3f08a4: 0xa1030000  sb          $v1, 0x0($t0)
    ctx->pc = 0x3f08a4u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3f08a8: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x3f08a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_3f08ac:
    // 0x3f08ac: 0x65290001  daddiu      $t1, $t1, 0x1
    ctx->pc = 0x3f08acu;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 9) + (int64_t)(int32_t)1);
    // 0x3f08b0: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x3f08b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x3f08b4: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3f08b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3f08b8: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x3f08b8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3f08bc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3f08bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_3f08c0:
    // 0x3f08c0: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x3f08c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_3f08c4:
    // 0x3f08c4: 0x65290001  daddiu      $t1, $t1, 0x1
    ctx->pc = 0x3f08c4u;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 9) + (int64_t)(int32_t)1);
    // 0x3f08c8: 0x12b502b  sltu        $t2, $t1, $t3
    ctx->pc = 0x3f08c8u;
    SET_GPR_U64(ctx, 10, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x3f08cc: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x3f08ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x3f08d0: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3f08d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3f08d4: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x3f08d4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3f08d8: 0x11400017  beqz        $t2, . + 4 + (0x17 << 2)
    ctx->pc = 0x3F08D8u;
    {
        const bool branch_taken_0x3f08d8 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F08DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F08D8u;
        // 0x3f08dc: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f08d8) {
            ctx->pc = 0x3F0938u;
            goto label_3f0938;
        }
    }
    ctx->pc = 0x3F08E0u;
label_3f08e0:
    // 0x3f08e0: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x3f08e0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f08e4: 0x0  nop
    ctx->pc = 0x3f08e4u;
    // NOP
label_3f08e8:
    // 0x3f08e8: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x3f08e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3f08ec: 0x65290004  daddiu      $t1, $t1, 0x4
    ctx->pc = 0x3f08ecu;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 9) + (int64_t)(int32_t)4);
    // 0x3f08f0: 0x91030001  lbu         $v1, 0x1($t0)
    ctx->pc = 0x3f08f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 1)));
    // 0x3f08f4: 0x12b502b  sltu        $t2, $t1, $t3
    ctx->pc = 0x3f08f4u;
    SET_GPR_U64(ctx, 10, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x3f08f8: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x3f08f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x3f08fc: 0x91050002  lbu         $a1, 0x2($t0)
    ctx->pc = 0x3f08fcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 2)));
    // 0x3f0900: 0x90460000  lbu         $a2, 0x0($v0)
    ctx->pc = 0x3f0900u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3f0904: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x3f0904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x3f0908: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x3f0908u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x3f090c: 0x91040003  lbu         $a0, 0x3($t0)
    ctx->pc = 0x3f090cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 3)));
    // 0x3f0910: 0xa1060000  sb          $a2, 0x0($t0)
    ctx->pc = 0x3f0910u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x3f0914: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x3f0914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x3f0918: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x3f0918u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3f091c: 0xa1020001  sb          $v0, 0x1($t0)
    ctx->pc = 0x3f091cu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x3f0920: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x3f0920u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3f0924: 0xa1030002  sb          $v1, 0x2($t0)
    ctx->pc = 0x3f0924u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x3f0928: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x3f0928u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3f092c: 0xa1020003  sb          $v0, 0x3($t0)
    ctx->pc = 0x3f092cu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x3f0930: 0x1540ffed  bnez        $t2, . + 4 + (-0x13 << 2)
    ctx->pc = 0x3F0930u;
    {
        const bool branch_taken_0x3f0930 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F0934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0930u;
        // 0x3f0934: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f0930) {
            ctx->pc = 0x3F08E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3f08e8;
        }
    }
    ctx->pc = 0x3F0938u;
label_3f0938:
    // 0x3f0938: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3f0938u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3f093c:
    // 0x3f093c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3f093cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3f0940: 0x3e00008  jr          $ra
    ctx->pc = 0x3F0940u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F0944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0940u;
        // 0x3f0944: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F0940u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F0948u;
}
