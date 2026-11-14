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

// Function: sub_002EE5B0
// Address: 0x2ee5b0 - 0x2ee7c0
void sub_002EE5B0_0x2ee5b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EE5B0_0x2ee5b0");
#endif

    switch (ctx->pc) {
        case 0x2ee614u: goto label_2ee614;
        case 0x2ee638u: goto label_2ee638;
        case 0x2ee678u: goto label_2ee678;
        case 0x2ee690u: goto label_2ee690;
        case 0x2ee708u: goto label_2ee708;
        case 0x2ee770u: goto label_2ee770;
        default: break;
    }

    ctx->pc = 0x2ee5b0u;

    // 0x2ee5b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ee5b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2ee5b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ee5b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ee5b8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2ee5b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee5bc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2ee5bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2ee5c0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2ee5c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee5c4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2ee5c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2ee5c8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2ee5c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2ee5cc: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2ee5ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2ee5d0: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2ee5d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x2ee5d4: 0x8e130010  lw          $s3, 0x10($s0)
    ctx->pc = 0x2ee5d4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2ee5d8: 0x8e510010  lw          $s1, 0x10($s2)
    ctx->pc = 0x2ee5d8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x2ee5dc: 0x271102a  slt         $v0, $s3, $s1
    ctx->pc = 0x2ee5dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x2ee5e0: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2EE5E0u;
    {
        const bool branch_taken_0x2ee5e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ee5e0) {
            ctx->pc = 0x2EE5E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EE5E0u;
            // 0x2ee5e4: 0x8e050008  lw          $a1, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EE600u;
            goto label_2ee600;
        }
    }
    ctx->pc = 0x2EE5E8u;
    // 0x2ee5e8: 0x200c02d  daddu       $t8, $s0, $zero
    ctx->pc = 0x2ee5e8u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee5ec: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x2ee5ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee5f0: 0x300902d  daddu       $s2, $t8, $zero
    ctx->pc = 0x2ee5f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee5f4: 0x220982d  daddu       $s3, $s1, $zero
    ctx->pc = 0x2ee5f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee5f8: 0x8e510010  lw          $s1, 0x10($s2)
    ctx->pc = 0x2ee5f8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x2ee5fc: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x2ee5fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2ee600:
    // 0x2ee600: 0x271a021  addu        $s4, $s3, $s1
    ctx->pc = 0x2ee600u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
    // 0x2ee604: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2ee604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2ee608: 0xb4282a  slt         $a1, $a1, $s4
    ctx->pc = 0x2ee608u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x2ee60c: 0xc0bb84a  jal         func_2EE128
    ctx->pc = 0x2EE60Cu;
    SET_GPR_U32(ctx, 31, 0x2EE614u);
    ctx->pc = 0x2EE610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE60Cu;
    // 0x2ee610: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE128u, 0x2EE60Cu, 0x2EE614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE614u;
label_2ee614:
    // 0x2ee614: 0x14c880  sll         $t9, $s4, 2
    ctx->pc = 0x2ee614u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x2ee618: 0x40c02d  daddu       $t8, $v0, $zero
    ctx->pc = 0x2ee618u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee61c: 0x270f0014  addiu       $t7, $t8, 0x14
    ctx->pc = 0x2ee61cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 24), 20));
    // 0x2ee620: 0x1f96821  addu        $t5, $t7, $t9
    ctx->pc = 0x2ee620u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 25)));
    // 0x2ee624: 0x1ed102b  sltu        $v0, $t7, $t5
    ctx->pc = 0x2ee624u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x2ee628: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2EE628u;
    {
        const bool branch_taken_0x2ee628 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE628u;
        // 0x2ee62c: 0x1e0402d  daddu       $t0, $t7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee628) {
            ctx->pc = 0x2EE654u;
            goto label_2ee654;
        }
    }
    ctx->pc = 0x2EE630u;
    // 0x2ee630: 0xad000000  sw          $zero, 0x0($t0)
    ctx->pc = 0x2ee630u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 0));
    // 0x2ee634: 0x0  nop
    ctx->pc = 0x2ee634u;
    // NOP
label_2ee638:
    // 0x2ee638: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x2ee638u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x2ee63c: 0x10d102b  sltu        $v0, $t0, $t5
    ctx->pc = 0x2ee63cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x2ee640: 0x0  nop
    ctx->pc = 0x2ee640u;
    // NOP
    // 0x2ee644: 0x0  nop
    ctx->pc = 0x2ee644u;
    // NOP
    // 0x2ee648: 0x0  nop
    ctx->pc = 0x2ee648u;
    // NOP
    // 0x2ee64c: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2EE64Cu;
    {
        const bool branch_taken_0x2ee64c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ee64c) {
            ctx->pc = 0x2EE650u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EE64Cu;
            // 0x2ee650: 0xad000000  sw          $zero, 0x0($t0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EE638u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ee638;
        }
    }
    ctx->pc = 0x2EE654u;
label_2ee654:
    // 0x2ee654: 0x264b0014  addiu       $t3, $s2, 0x14
    ctx->pc = 0x2ee654u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
    // 0x2ee658: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x2ee658u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2ee65c: 0x1628821  addu        $s1, $t3, $v0
    ctx->pc = 0x2ee65cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x2ee660: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x2ee660u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x2ee664: 0x260d0014  addiu       $t5, $s0, 0x14
    ctx->pc = 0x2ee664u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x2ee668: 0x171182b  sltu        $v1, $t3, $s1
    ctx->pc = 0x2ee668u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x2ee66c: 0x1a27021  addu        $t6, $t5, $v0
    ctx->pc = 0x2ee66cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
    // 0x2ee670: 0x1060003e  beqz        $v1, . + 4 + (0x3E << 2)
    ctx->pc = 0x2EE670u;
    {
        const bool branch_taken_0x2ee670 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE670u;
        // 0x2ee674: 0x1e0602d  daddu       $t4, $t7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee670) {
            ctx->pc = 0x2EE76Cu;
            goto label_2ee76c;
        }
    }
    ctx->pc = 0x2EE678u;
label_2ee678:
    // 0x2ee678: 0x8d620000  lw          $v0, 0x0($t3)
    ctx->pc = 0x2ee678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x2ee67c: 0x3049ffff  andi        $t1, $v0, 0xFFFF
    ctx->pc = 0x2ee67cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2ee680: 0x11200019  beqz        $t1, . + 4 + (0x19 << 2)
    ctx->pc = 0x2EE680u;
    {
        const bool branch_taken_0x2ee680 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE680u;
        // 0x2ee684: 0x180382d  daddu       $a3, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee680) {
            ctx->pc = 0x2EE6E8u;
            goto label_2ee6e8;
        }
    }
    ctx->pc = 0x2EE688u;
    // 0x2ee688: 0x1a0402d  daddu       $t0, $t5, $zero
    ctx->pc = 0x2ee688u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee68c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2ee68cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ee690:
    // 0x2ee690: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x2ee690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2ee694: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x2ee694u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x2ee698: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x2ee698u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2ee69c: 0x10e302b  sltu        $a2, $t0, $t6
    ctx->pc = 0x2ee69cu;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 14)) ? 1 : 0);
    // 0x2ee6a0: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x2ee6a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2ee6a4: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x2ee6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x2ee6a8: 0x491018  mult        $v0, $v0, $t1
    ctx->pc = 0x2ee6a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2ee6ac: 0x70691818  mult1       $v1, $v1, $t1
    ctx->pc = 0x2ee6acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 9); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2ee6b0: 0x30a4ffff  andi        $a0, $a1, 0xFFFF
    ctx->pc = 0x2ee6b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x2ee6b4: 0x52c02  srl         $a1, $a1, 16
    ctx->pc = 0x2ee6b4u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    // 0x2ee6b8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2ee6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2ee6bc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2ee6bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2ee6c0: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x2ee6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x2ee6c4: 0x25402  srl         $t2, $v0, 16
    ctx->pc = 0x2ee6c4u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x2ee6c8: 0xa4e20000  sh          $v0, 0x0($a3)
    ctx->pc = 0x2ee6c8u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x2ee6cc: 0x6a1021  addu        $v0, $v1, $t2
    ctx->pc = 0x2ee6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x2ee6d0: 0xa4e20002  sh          $v0, 0x2($a3)
    ctx->pc = 0x2ee6d0u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x2ee6d4: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x2ee6d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x2ee6d8: 0x14c0ffed  bnez        $a2, . + 4 + (-0x13 << 2)
    ctx->pc = 0x2EE6D8u;
    {
        const bool branch_taken_0x2ee6d8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EE6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE6D8u;
        // 0x2ee6dc: 0x25402  srl         $t2, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee6d8) {
            ctx->pc = 0x2EE690u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ee690;
        }
    }
    ctx->pc = 0x2EE6E0u;
    // 0x2ee6e0: 0xacea0000  sw          $t2, 0x0($a3)
    ctx->pc = 0x2ee6e0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 10));
    // 0x2ee6e4: 0x8d620000  lw          $v0, 0x0($t3)
    ctx->pc = 0x2ee6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_2ee6e8:
    // 0x2ee6e8: 0x24c02  srl         $t1, $v0, 16
    ctx->pc = 0x2ee6e8u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x2ee6ec: 0x1120001b  beqz        $t1, . + 4 + (0x1B << 2)
    ctx->pc = 0x2EE6ECu;
    {
        const bool branch_taken_0x2ee6ec = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE6ECu;
        // 0x2ee6f0: 0x180382d  daddu       $a3, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee6ec) {
            ctx->pc = 0x2EE75Cu;
            goto label_2ee75c;
        }
    }
    ctx->pc = 0x2EE6F4u;
    // 0x2ee6f4: 0x1a0402d  daddu       $t0, $t5, $zero
    ctx->pc = 0x2ee6f4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee6f8: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x2ee6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2ee6fc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2ee6fcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee700: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ee700u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee704: 0x0  nop
    ctx->pc = 0x2ee704u;
    // NOP
label_2ee708:
    // 0x2ee708: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x2ee708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2ee70c: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x2ee70cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x2ee710: 0xa4e20000  sh          $v0, 0x0($a3)
    ctx->pc = 0x2ee710u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x2ee714: 0x42402  srl         $a0, $a0, 16
    ctx->pc = 0x2ee714u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
    // 0x2ee718: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x2ee718u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2ee71c: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x2ee71cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x2ee720: 0x491018  mult        $v0, $v0, $t1
    ctx->pc = 0x2ee720u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2ee724: 0x70691818  mult1       $v1, $v1, $t1
    ctx->pc = 0x2ee724u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 9); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2ee728: 0x10e282b  sltu        $a1, $t0, $t6
    ctx->pc = 0x2ee728u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 14)) ? 1 : 0);
    // 0x2ee72c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2ee72cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2ee730: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x2ee730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x2ee734: 0xa4e20002  sh          $v0, 0x2($a3)
    ctx->pc = 0x2ee734u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x2ee738: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x2ee738u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x2ee73c: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x2ee73cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2ee740: 0x25402  srl         $t2, $v0, 16
    ctx->pc = 0x2ee740u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x2ee744: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x2ee744u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x2ee748: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2ee748u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2ee74c: 0x6a1021  addu        $v0, $v1, $t2
    ctx->pc = 0x2ee74cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x2ee750: 0x14a0ffed  bnez        $a1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x2EE750u;
    {
        const bool branch_taken_0x2ee750 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EE754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE750u;
        // 0x2ee754: 0x25402  srl         $t2, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee750) {
            ctx->pc = 0x2EE708u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ee708;
        }
    }
    ctx->pc = 0x2EE758u;
    // 0x2ee758: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x2ee758u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
label_2ee75c:
    // 0x2ee75c: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x2ee75cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x2ee760: 0x171102b  sltu        $v0, $t3, $s1
    ctx->pc = 0x2ee760u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x2ee764: 0x1440ffc4  bnez        $v0, . + 4 + (-0x3C << 2)
    ctx->pc = 0x2EE764u;
    {
        const bool branch_taken_0x2ee764 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EE768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE764u;
        // 0x2ee768: 0x258c0004  addiu       $t4, $t4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee764) {
            ctx->pc = 0x2EE678u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ee678;
        }
    }
    ctx->pc = 0x2EE76Cu;
label_2ee76c:
    // 0x2ee76c: 0x1f93821  addu        $a3, $t7, $t9
    ctx->pc = 0x2ee76cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 25)));
label_2ee770:
    // 0x2ee770: 0x5a800009  blezl       $s4, . + 4 + (0x9 << 2)
    ctx->pc = 0x2EE770u;
    {
        const bool branch_taken_0x2ee770 = (GPR_S32(ctx, 20) <= 0);
        if (branch_taken_0x2ee770) {
            ctx->pc = 0x2EE774u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EE770u;
            // 0x2ee774: 0xaf140010  sw          $s4, 0x10($t8) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 24), 16), GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EE798u;
            goto label_2ee798;
        }
    }
    ctx->pc = 0x2EE778u;
    // 0x2ee778: 0x24e7fffc  addiu       $a3, $a3, -0x4
    ctx->pc = 0x2ee778u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967292));
    // 0x2ee77c: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x2ee77cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2ee780: 0x0  nop
    ctx->pc = 0x2ee780u;
    // NOP
    // 0x2ee784: 0x0  nop
    ctx->pc = 0x2ee784u;
    // NOP
    // 0x2ee788: 0x0  nop
    ctx->pc = 0x2ee788u;
    // NOP
    // 0x2ee78c: 0x5040fff8  beql        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2EE78Cu;
    {
        const bool branch_taken_0x2ee78c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ee78c) {
            ctx->pc = 0x2EE790u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EE78Cu;
            // 0x2ee790: 0x2694ffff  addiu       $s4, $s4, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EE770u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ee770;
        }
    }
    ctx->pc = 0x2EE794u;
    // 0x2ee794: 0xaf140010  sw          $s4, 0x10($t8)
    ctx->pc = 0x2ee794u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 16), GPR_U32(ctx, 20));
label_2ee798:
    // 0x2ee798: 0x300102d  daddu       $v0, $t8, $zero
    ctx->pc = 0x2ee798u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee79c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ee79cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ee7a0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2ee7a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ee7a4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2ee7a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ee7a8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2ee7a8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ee7ac: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2ee7acu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ee7b0: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2ee7b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2ee7b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2EE7B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EE7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE7B4u;
        // 0x2ee7b8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EE7B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EE7BCu;
    // 0x2ee7bc: 0x0  nop
    ctx->pc = 0x2ee7bcu;
    // NOP
    ctx->pc = 0x2ee7c0u;
}
