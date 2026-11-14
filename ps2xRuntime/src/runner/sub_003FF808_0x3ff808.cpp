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

// Function: sub_003FF808
// Address: 0x3ff808 - 0x3ffba8
void sub_003FF808_0x3ff808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003FF808_0x3ff808");
#endif

    switch (ctx->pc) {
        case 0x3ff948u: goto label_3ff948;
        case 0x3ff970u: goto label_3ff970;
        case 0x3ff9ecu: goto label_3ff9ec;
        case 0x3ffa08u: goto label_3ffa08;
        case 0x3ffa14u: goto label_3ffa14;
        case 0x3ffa50u: goto label_3ffa50;
        case 0x3ffabcu: goto label_3ffabc;
        case 0x3ffad8u: goto label_3ffad8;
        case 0x3ffae4u: goto label_3ffae4;
        case 0x3ffb30u: goto label_3ffb30;
        default: break;
    }

    ctx->pc = 0x3ff808u;

    // 0x3ff808: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x3ff808u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x3ff80c: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x3ff80cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ff810: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x3ff810u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x3ff814: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x3ff814u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ff818: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x3ff818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x3ff81c: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x3ff81cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x3ff820: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3ff820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3ff824: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x3ff824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x3ff828: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3ff828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x3ff82c: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x3ff82cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x3ff830: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3ff830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3ff834: 0x91430010  lbu         $v1, 0x10($t2)
    ctx->pc = 0x3ff834u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 16)));
    // 0x3ff838: 0x106200d1  beq         $v1, $v0, . + 4 + (0xD1 << 2)
    ctx->pc = 0x3FF838u;
    {
        const bool branch_taken_0x3ff838 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3FF83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF838u;
        // 0x3ff83c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ff838) {
            ctx->pc = 0x3FFB80u;
            goto label_3ffb80;
        }
    }
    ctx->pc = 0x3FF840u;
    // 0x3ff840: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x3ff840u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x3ff844: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x3FF844u;
    {
        const bool branch_taken_0x3ff844 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FF848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF844u;
        // 0x3ff848: 0x24100003  addiu       $s0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ff844) {
            ctx->pc = 0x3FF894u;
            goto label_3ff894;
        }
    }
    ctx->pc = 0x3FF84Cu;
    // 0x3ff84c: 0x91450011  lbu         $a1, 0x11($t2)
    ctx->pc = 0x3ff84cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 17)));
    // 0x3ff850: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x3ff850u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x3ff854: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x3ff854u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ff858: 0x91260001  lbu         $a2, 0x1($t1)
    ctx->pc = 0x3ff858u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 1)));
    // 0x3ff85c: 0xa32823  subu        $a1, $a1, $v1
    ctx->pc = 0x3ff85cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x3ff860: 0x91270000  lbu         $a3, 0x0($t1)
    ctx->pc = 0x3ff860u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x3ff864: 0x91230002  lbu         $v1, 0x2($t1)
    ctx->pc = 0x3ff864u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 2)));
    // 0x3ff868: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3ff868u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ff86c: 0x862023  subu        $a0, $a0, $a2
    ctx->pc = 0x3ff86cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x3ff870: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x3ff870u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x3ff874: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x3ff874u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3ff878: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x3ff878u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ff87c: 0xafa70010  sw          $a3, 0x10($sp)
    ctx->pc = 0x3ff87cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 7));
    // 0x3ff880: 0xafa40004  sw          $a0, 0x4($sp)
    ctx->pc = 0x3ff880u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 4));
    // 0x3ff884: 0xafa60014  sw          $a2, 0x14($sp)
    ctx->pc = 0x3ff884u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 6));
    // 0x3ff888: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x3ff888u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x3ff88c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3FF88Cu;
    {
        const bool branch_taken_0x3ff88c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FF890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF88Cu;
        // 0x3ff890: 0xafa80018  sw          $t0, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ff88c) {
            ctx->pc = 0x3FF8B0u;
            goto label_3ff8b0;
        }
    }
    ctx->pc = 0x3FF894u;
label_3ff894:
    // 0x3ff894: 0x91230003  lbu         $v1, 0x3($t1)
    ctx->pc = 0x3ff894u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 3)));
    // 0x3ff898: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x3ff898u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ff89c: 0x91420011  lbu         $v0, 0x11($t2)
    ctx->pc = 0x3ff89cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 17)));
    // 0x3ff8a0: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x3ff8a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ff8a4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x3ff8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3ff8a8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x3ff8a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x3ff8ac: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x3ff8acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_3ff8b0:
    // 0x3ff8b0: 0x91420010  lbu         $v0, 0x10($t2)
    ctx->pc = 0x3ff8b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 16)));
    // 0x3ff8b4: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x3ff8b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x3ff8b8: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3FF8B8u;
    {
        const bool branch_taken_0x3ff8b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FF8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF8B8u;
        // 0x3ff8bc: 0x101880  sll         $v1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ff8b8) {
            ctx->pc = 0x3FF8E4u;
            goto label_3ff8e4;
        }
    }
    ctx->pc = 0x3FF8C0u;
    // 0x3ff8c0: 0x91240004  lbu         $a0, 0x4($t1)
    ctx->pc = 0x3ff8c0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x3ff8c4: 0x91420011  lbu         $v0, 0x11($t2)
    ctx->pc = 0x3ff8c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 17)));
    // 0x3ff8c8: 0x3a33021  addu        $a2, $sp, $v1
    ctx->pc = 0x3ff8c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x3ff8cc: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x3ff8ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ff8d0: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x3ff8d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ff8d4: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x3ff8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3ff8d8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3ff8d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3ff8dc: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x3ff8dcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x3ff8e0: 0xaca70010  sw          $a3, 0x10($a1)
    ctx->pc = 0x3ff8e0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 7));
label_3ff8e4:
    // 0x3ff8e4: 0x91430011  lbu         $v1, 0x11($t2)
    ctx->pc = 0x3ff8e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 17)));
    // 0x3ff8e8: 0x306700ff  andi        $a3, $v1, 0xFF
    ctx->pc = 0x3ff8e8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3ff8ec: 0x2ce20008  sltiu       $v0, $a3, 0x8
    ctx->pc = 0x3ff8ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x3ff8f0: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x3FF8F0u;
    {
        const bool branch_taken_0x3ff8f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FF8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF8F0u;
        // 0x3ff8f4: 0x60402d  daddu       $t0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ff8f0) {
            ctx->pc = 0x3FF9D0u;
            goto label_3ff9d0;
        }
    }
    ctx->pc = 0x3FF8F8u;
    // 0x3ff8f8: 0x91230003  lbu         $v1, 0x3($t1)
    ctx->pc = 0x3ff8f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 3)));
    // 0x3ff8fc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3ff8fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ff900: 0xdd440008  ld          $a0, 0x8($t2)
    ctx->pc = 0x3ff900u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 10), 8)));
    // 0x3ff904: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3ff904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ff908: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3FF908u;
    {
        const bool branch_taken_0x3ff908 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3FF90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF908u;
        // 0x3ff90c: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ff908) {
            ctx->pc = 0x3FF924u;
            goto label_3ff924;
        }
    }
    ctx->pc = 0x3FF910u;
    // 0x3ff910: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3ff910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3ff914: 0x14e20004  bne         $a3, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3FF914u;
    {
        const bool branch_taken_0x3ff914 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x3FF918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF914u;
        // 0x3ff918: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ff914) {
            ctx->pc = 0x3FF928u;
            goto label_3ff928;
        }
    }
    ctx->pc = 0x3FF91Cu;
    // 0x3ff91c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3FF91Cu;
    {
        const bool branch_taken_0x3ff91c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FF920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF91Cu;
        // 0x3ff920: 0x240a0055  addiu       $t2, $zero, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ff91c) {
            ctx->pc = 0x3FF93Cu;
            goto label_3ff93c;
        }
    }
    ctx->pc = 0x3FF924u;
label_3ff924:
    // 0x3ff924: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3ff924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3ff928:
    // 0x3ff928: 0x15020004  bne         $t0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3FF928u;
    {
        const bool branch_taken_0x3ff928 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        ctx->pc = 0x3FF92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF928u;
        // 0x3ff92c: 0x240a00ff  addiu       $t2, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ff928) {
            ctx->pc = 0x3FF93Cu;
            goto label_3ff93c;
        }
    }
    ctx->pc = 0x3FF930u;
    // 0x3ff930: 0x38c30003  xori        $v1, $a2, 0x3
    ctx->pc = 0x3ff930u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)3);
    // 0x3ff934: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x3ff934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x3ff938: 0x43500a  movz        $t2, $v0, $v1
    ctx->pc = 0x3ff938u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 10, GPR_VEC(ctx, 2));
label_3ff93c:
    // 0x3ff93c: 0x10800090  beqz        $a0, . + 4 + (0x90 << 2)
    ctx->pc = 0x3FF93Cu;
    {
        const bool branch_taken_0x3ff93c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FF940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF93Cu;
        // 0x3ff940: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ff93c) {
            ctx->pc = 0x3FFB80u;
            goto label_3ffb80;
        }
    }
    ctx->pc = 0x3FF944u;
    // 0x3ff944: 0x0  nop
    ctx->pc = 0x3ff944u;
    // NOP
label_3ff948:
    // 0x3ff948: 0x90a70000  lbu         $a3, 0x0($a1)
    ctx->pc = 0x3ff948u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3ff94c: 0x64690001  daddiu      $t1, $v1, 0x1
    ctx->pc = 0x3ff94cu;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)1);
    // 0x3ff950: 0xa0a00000  sb          $zero, 0x0($a1)
    ctx->pc = 0x3ff950u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3ff954: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x3ff954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3ff958: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x3ff958u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ff95c: 0x21023  negu        $v0, $v0
    ctx->pc = 0x3ff95cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x3ff960: 0x46102a  slt         $v0, $v0, $a2
    ctx->pc = 0x3ff960u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x3ff964: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x3FF964u;
    {
        const bool branch_taken_0x3ff964 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FF968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF964u;
        // 0x3ff968: 0x24a80001  addiu       $t0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ff964) {
            ctx->pc = 0x3FF9B8u;
            goto label_3ff9b8;
        }
    }
    ctx->pc = 0x3FF96Cu;
    // 0x3ff96c: 0x0  nop
    ctx->pc = 0x3ff96cu;
    // NOP
label_3ff970:
    // 0x3ff970: 0x18c00005  blez        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x3FF970u;
    {
        const bool branch_taken_0x3ff970 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x3FF974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF970u;
        // 0x3ff974: 0xc71804  sllv        $v1, $a3, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 6) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ff970) {
            ctx->pc = 0x3FF988u;
            goto label_3ff988;
        }
    }
    ctx->pc = 0x3FF978u;
    // 0x3ff978: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3ff978u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3ff97c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3ff97cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3ff980: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3FF980u;
    {
        const bool branch_taken_0x3ff980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FF984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF980u;
        // 0x3ff984: 0xa0a20000  sb          $v0, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ff980) {
            ctx->pc = 0x3FF9A0u;
            goto label_3ff9a0;
        }
    }
    ctx->pc = 0x3FF988u;
label_3ff988:
    // 0x3ff988: 0x61023  negu        $v0, $a2
    ctx->pc = 0x3ff988u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
    // 0x3ff98c: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x3ff98cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3ff990: 0x471007  srav        $v0, $a3, $v0
    ctx->pc = 0x3ff990u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x3ff994: 0x1421024  and         $v0, $t2, $v0
    ctx->pc = 0x3ff994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & GPR_U64(ctx, 2));
    // 0x3ff998: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3ff998u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3ff99c: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x3ff99cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
label_3ff9a0:
    // 0x3ff9a0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x3ff9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3ff9a4: 0x21823  negu        $v1, $v0
    ctx->pc = 0x3ff9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x3ff9a8: 0xc23023  subu        $a2, $a2, $v0
    ctx->pc = 0x3ff9a8u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x3ff9ac: 0x66182a  slt         $v1, $v1, $a2
    ctx->pc = 0x3ff9acu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x3ff9b0: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x3FF9B0u;
    {
        const bool branch_taken_0x3ff9b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ff9b0) {
            ctx->pc = 0x3FF970u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ff970;
        }
    }
    ctx->pc = 0x3FF9B8u;
label_3ff9b8:
    // 0x3ff9b8: 0x120182d  daddu       $v1, $t1, $zero
    ctx->pc = 0x3ff9b8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ff9bc: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x3ff9bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x3ff9c0: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x3FF9C0u;
    {
        const bool branch_taken_0x3ff9c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3FF9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF9C0u;
        // 0x3ff9c4: 0x100282d  daddu       $a1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ff9c0) {
            ctx->pc = 0x3FF948u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ff948;
        }
    }
    ctx->pc = 0x3FF9C8u;
    // 0x3ff9c8: 0x1000006e  b           . + 4 + (0x6E << 2)
    ctx->pc = 0x3FF9C8u;
    {
        const bool branch_taken_0x3ff9c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FF9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF9C8u;
        // 0x3ff9cc: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ff9c8) {
            ctx->pc = 0x3FFB84u;
            goto label_3ffb84;
        }
    }
    ctx->pc = 0x3FF9D0u;
label_3ff9d0:
    // 0x3ff9d0: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x3ff9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3ff9d4: 0x14e20035  bne         $a3, $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x3FF9D4u;
    {
        const bool branch_taken_0x3ff9d4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x3FF9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF9D4u;
        // 0x3ff9d8: 0x200802d  daddu       $s0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ff9d4) {
            ctx->pc = 0x3FFAACu;
            goto label_3ffaac;
        }
    }
    ctx->pc = 0x3FF9DCu;
    // 0x3ff9dc: 0xdd450000  ld          $a1, 0x0($t2)
    ctx->pc = 0x3ff9dcu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x3ff9e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ff9e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ff9e4: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x3FF9E4u;
    SET_GPR_U32(ctx, 31, 0x3FF9ECu);
    ctx->pc = 0x3FF9E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FF9E4u;
    // 0x3ff9e8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x3FF9E4u, 0x3FF9ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FF9ECu;
label_3ff9ec:
    // 0x3ff9ec: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3ff9ecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ff9f0: 0x12600063  beqz        $s3, . + 4 + (0x63 << 2)
    ctx->pc = 0x3FF9F0u;
    {
        const bool branch_taken_0x3ff9f0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FF9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF9F0u;
        // 0x3ff9f4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ff9f0) {
            ctx->pc = 0x3FFB80u;
            goto label_3ffb80;
        }
    }
    ctx->pc = 0x3FF9F8u;
    // 0x3ff9f8: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x3ff9f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3ff9fc: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x3ff9fcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ffa00: 0x200a82d  daddu       $s5, $s0, $zero
    ctx->pc = 0x3ffa00u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ffa04: 0x0  nop
    ctx->pc = 0x3ffa04u;
    // NOP
label_3ffa08:
    // 0x3ffa08: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3ffa08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ffa0c: 0xc0be980  jal         func_2FA600
    ctx->pc = 0x3FFA0Cu;
    SET_GPR_U32(ctx, 31, 0x3FFA14u);
    ctx->pc = 0x3FFA10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FFA0Cu;
    // 0x3ffa10: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA600u, 0x3FFA0Cu, 0x3FFA14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FFA14u;
label_3ffa14:
    // 0x3ffa14: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3ffa14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3ffa18: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3ffa18u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3ffa1c: 0x92260000  lbu         $a2, 0x0($s1)
    ctx->pc = 0x3ffa1cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3ffa20: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x3ffa20u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3ffa24: 0xa2200000  sb          $zero, 0x0($s1)
    ctx->pc = 0x3ffa24u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3ffa28: 0x2a51821  addu        $v1, $s5, $a1
    ctx->pc = 0x3ffa28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 5)));
    // 0x3ffa2c: 0x3a52021  addu        $a0, $sp, $a1
    ctx->pc = 0x3ffa2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 5)));
    // 0x3ffa30: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3ffa30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3ffa34: 0x66480001  daddiu      $t0, $s2, 0x1
    ctx->pc = 0x3ffa34u;
    SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 18) + (int64_t)(int32_t)1);
    // 0x3ffa38: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x3ffa38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3ffa3c: 0x21023  negu        $v0, $v0
    ctx->pc = 0x3ffa3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x3ffa40: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x3ffa40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x3ffa44: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x3FFA44u;
    {
        const bool branch_taken_0x3ffa44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FFA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FFA44u;
        // 0x3ffa48: 0x26270001  addiu       $a3, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ffa44) {
            ctx->pc = 0x3FFA94u;
            goto label_3ffa94;
        }
    }
    ctx->pc = 0x3FFA4Cu;
    // 0x3ffa4c: 0x2052821  addu        $a1, $s0, $a1
    ctx->pc = 0x3ffa4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
label_3ffa50:
    // 0x3ffa50: 0x18800005  blez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3FFA50u;
    {
        const bool branch_taken_0x3ffa50 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x3FFA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FFA50u;
        // 0x3ffa54: 0x861804  sllv        $v1, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 4) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ffa50) {
            ctx->pc = 0x3FFA68u;
            goto label_3ffa68;
        }
    }
    ctx->pc = 0x3FFA58u;
    // 0x3ffa58: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x3ffa58u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3ffa5c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3ffa5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3ffa60: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3FFA60u;
    {
        const bool branch_taken_0x3ffa60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FFA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FFA60u;
        // 0x3ffa64: 0xa2220000  sb          $v0, 0x0($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ffa60) {
            ctx->pc = 0x3FFA7Cu;
            goto label_3ffa7c;
        }
    }
    ctx->pc = 0x3FFA68u;
label_3ffa68:
    // 0x3ffa68: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x3ffa68u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3ffa6c: 0x41023  negu        $v0, $a0
    ctx->pc = 0x3ffa6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x3ffa70: 0x461007  srav        $v0, $a2, $v0
    ctx->pc = 0x3ffa70u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 6), GPR_U32(ctx, 2) & 0x1F));
    // 0x3ffa74: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3ffa74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3ffa78: 0xa2230000  sb          $v1, 0x0($s1)
    ctx->pc = 0x3ffa78u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
label_3ffa7c:
    // 0x3ffa7c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x3ffa7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3ffa80: 0x21823  negu        $v1, $v0
    ctx->pc = 0x3ffa80u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x3ffa84: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x3ffa84u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3ffa88: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x3ffa88u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x3ffa8c: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x3FFA8Cu;
    {
        const bool branch_taken_0x3ffa8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ffa8c) {
            ctx->pc = 0x3FFA50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ffa50;
        }
    }
    ctx->pc = 0x3FFA94u;
label_3ffa94:
    // 0x3ffa94: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x3ffa94u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ffa98: 0x253102b  sltu        $v0, $s2, $s3
    ctx->pc = 0x3ffa98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x3ffa9c: 0x1440ffda  bnez        $v0, . + 4 + (-0x26 << 2)
    ctx->pc = 0x3FFA9Cu;
    {
        const bool branch_taken_0x3ffa9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3FFAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FFA9Cu;
        // 0x3ffaa0: 0xe0882d  daddu       $s1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ffa9c) {
            ctx->pc = 0x3FFA08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ffa08;
        }
    }
    ctx->pc = 0x3FFAA4u;
    // 0x3ffaa4: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x3FFAA4u;
    {
        const bool branch_taken_0x3ffaa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FFAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FFAA4u;
        // 0x3ffaa8: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ffaa4) {
            ctx->pc = 0x3FFB84u;
            goto label_3ffb84;
        }
    }
    ctx->pc = 0x3FFAACu;
label_3ffaac:
    // 0x3ffaac: 0xdd450000  ld          $a1, 0x0($t2)
    ctx->pc = 0x3ffaacu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x3ffab0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ffab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ffab4: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x3FFAB4u;
    SET_GPR_U32(ctx, 31, 0x3FFABCu);
    ctx->pc = 0x3FFAB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FFAB4u;
    // 0x3ffab8: 0x220902d  daddu       $s2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x3FFAB4u, 0x3FFABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FFABCu;
label_3ffabc:
    // 0x3ffabc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3ffabcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ffac0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3ffac0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ffac4: 0x1260002e  beqz        $s3, . + 4 + (0x2E << 2)
    ctx->pc = 0x3FFAC4u;
    {
        const bool branch_taken_0x3ffac4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FFAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FFAC4u;
        // 0x3ffac8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ffac4) {
            ctx->pc = 0x3FFB80u;
            goto label_3ffb80;
        }
    }
    ctx->pc = 0x3FFACCu;
    // 0x3ffacc: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x3ffaccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3ffad0: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x3ffad0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ffad4: 0x200a82d  daddu       $s5, $s0, $zero
    ctx->pc = 0x3ffad4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ffad8:
    // 0x3ffad8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3ffad8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ffadc: 0xc0be980  jal         func_2FA600
    ctx->pc = 0x3FFADCu;
    SET_GPR_U32(ctx, 31, 0x3FFAE4u);
    ctx->pc = 0x3FFAE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FFADCu;
    // 0x3ffae0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA600u, 0x3FFADCu, 0x3FFAE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FFAE4u;
label_3ffae4:
    // 0x3ffae4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3ffae4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3ffae8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3ffae8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3ffaec: 0x92440000  lbu         $a0, 0x0($s2)
    ctx->pc = 0x3ffaecu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3ffaf0: 0x23880  sll         $a3, $v0, 2
    ctx->pc = 0x3ffaf0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3ffaf4: 0x92460001  lbu         $a2, 0x1($s2)
    ctx->pc = 0x3ffaf4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x3ffaf8: 0x2a71821  addu        $v1, $s5, $a3
    ctx->pc = 0x3ffaf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 7)));
    // 0x3ffafc: 0x3a72821  addu        $a1, $sp, $a3
    ctx->pc = 0x3ffafcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 7)));
    // 0x3ffb00: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3ffb00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3ffb04: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x3ffb04u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x3ffb08: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x3ffb08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3ffb0c: 0xc43025  or          $a2, $a2, $a0
    ctx->pc = 0x3ffb0cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
    // 0x3ffb10: 0x21023  negu        $v0, $v0
    ctx->pc = 0x3ffb10u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x3ffb14: 0x66280001  daddiu      $t0, $s1, 0x1
    ctx->pc = 0x3ffb14u;
    SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 17) + (int64_t)(int32_t)1);
    // 0x3ffb18: 0x26490001  addiu       $t1, $s2, 0x1
    ctx->pc = 0x3ffb18u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x3ffb1c: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x3ffb1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x3ffb20: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x3FFB20u;
    {
        const bool branch_taken_0x3ffb20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FFB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FFB20u;
        // 0x3ffb24: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ffb20) {
            ctx->pc = 0x3FFB60u;
            goto label_3ffb60;
        }
    }
    ctx->pc = 0x3FFB28u;
    // 0x3ffb28: 0x2073821  addu        $a3, $s0, $a3
    ctx->pc = 0x3ffb28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x3ffb2c: 0x0  nop
    ctx->pc = 0x3ffb2cu;
    // NOP
label_3ffb30:
    // 0x3ffb30: 0x1ca00003  bgtz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3FFB30u;
    {
        const bool branch_taken_0x3ffb30 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x3FFB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FFB30u;
        // 0x3ffb34: 0xa61004  sllv        $v0, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 5) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ffb30) {
            ctx->pc = 0x3FFB40u;
            goto label_3ffb40;
        }
    }
    ctx->pc = 0x3FFB38u;
    // 0x3ffb38: 0x51023  negu        $v0, $a1
    ctx->pc = 0x3ffb38u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
    // 0x3ffb3c: 0x461007  srav        $v0, $a2, $v0
    ctx->pc = 0x3ffb3cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 6), GPR_U32(ctx, 2) & 0x1F));
label_3ffb40:
    // 0x3ffb40: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x3ffb40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x3ffb44: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x3ffb44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3ffb48: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x3ffb48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3ffb4c: 0x21823  negu        $v1, $v0
    ctx->pc = 0x3ffb4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x3ffb50: 0xa22823  subu        $a1, $a1, $v0
    ctx->pc = 0x3ffb50u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x3ffb54: 0x65182a  slt         $v1, $v1, $a1
    ctx->pc = 0x3ffb54u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x3ffb58: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x3FFB58u;
    {
        const bool branch_taken_0x3ffb58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ffb58) {
            ctx->pc = 0x3FFB30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ffb30;
        }
    }
    ctx->pc = 0x3FFB60u;
label_3ffb60:
    // 0x3ffb60: 0x41202  srl         $v0, $a0, 8
    ctx->pc = 0x3ffb60u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
    // 0x3ffb64: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x3ffb64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ffb68: 0xa2420000  sb          $v0, 0x0($s2)
    ctx->pc = 0x3ffb68u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ffb6c: 0x233182b  sltu        $v1, $s1, $s3
    ctx->pc = 0x3ffb6cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x3ffb70: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x3ffb70u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ffb74: 0xa2440000  sb          $a0, 0x0($s2)
    ctx->pc = 0x3ffb74u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x3ffb78: 0x1460ffd7  bnez        $v1, . + 4 + (-0x29 << 2)
    ctx->pc = 0x3FFB78u;
    {
        const bool branch_taken_0x3ffb78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3FFB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FFB78u;
        // 0x3ffb7c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ffb78) {
            ctx->pc = 0x3FFAD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ffad8;
        }
    }
    ctx->pc = 0x3FFB80u;
label_3ffb80:
    // 0x3ffb80: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x3ffb80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3ffb84:
    // 0x3ffb84: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x3ffb84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3ffb88: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x3ffb88u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3ffb8c: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x3ffb8cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3ffb90: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3ffb90u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3ffb94: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x3ffb94u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3ffb98: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3ffb98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3ffb9c: 0x3e00008  jr          $ra
    ctx->pc = 0x3FFB9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3FFBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FFB9Cu;
        // 0x3ffba0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FFB9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3FFBA4u;
    // 0x3ffba4: 0x0  nop
    ctx->pc = 0x3ffba4u;
    // NOP
    ctx->pc = 0x3ffba8u;
}
