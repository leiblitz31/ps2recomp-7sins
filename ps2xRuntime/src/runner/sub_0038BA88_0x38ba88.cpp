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

// Function: sub_0038BA88
// Address: 0x38ba88 - 0x38bc70
void sub_0038BA88_0x38ba88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038BA88_0x38ba88");
#endif

    switch (ctx->pc) {
        case 0x38bba0u: goto label_38bba0;
        case 0x38bc3cu: goto label_38bc3c;
        case 0x38bc4cu: goto label_38bc4c;
        default: break;
    }

    ctx->pc = 0x38ba88u;

    // 0x38ba88: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x38ba88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x38ba8c: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x38ba8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x38ba90: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x38ba90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x38ba94: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x38ba94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x38ba98: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x38ba98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x38ba9c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x38ba9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38baa0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x38baa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x38baa4: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x38baa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x38baa8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x38baa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x38baac: 0x1440005e  bnez        $v0, . + 4 + (0x5E << 2)
    ctx->pc = 0x38BAACu;
    {
        const bool branch_taken_0x38baac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38BAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BAACu;
        // 0x38bab0: 0x24100010  addiu       $s0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38baac) {
            ctx->pc = 0x38BC28u;
            goto label_38bc28;
        }
    }
    ctx->pc = 0x38BAB4u;
    // 0x38bab4: 0x8e250014  lw          $a1, 0x14($s1)
    ctx->pc = 0x38bab4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x38bab8: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x38BAB8u;
    {
        const bool branch_taken_0x38bab8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x38BABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BAB8u;
        // 0x38babc: 0x30620008  andi        $v0, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x38bab8) {
            ctx->pc = 0x38BAE8u;
            goto label_38bae8;
        }
    }
    ctx->pc = 0x38BAC0u;
    // 0x38bac0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x38BAC0u;
    {
        const bool branch_taken_0x38bac0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38BAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BAC0u;
        // 0x38bac4: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38bac0) {
            ctx->pc = 0x38BACCu;
            goto label_38bacc;
        }
    }
    ctx->pc = 0x38BAC8u;
    // 0x38bac8: 0x24500010  addiu       $s0, $v0, 0x10
    ctx->pc = 0x38bac8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_38bacc:
    // 0x38bacc: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x38baccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x38bad0: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x38bad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x38bad4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x38bad4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x38bad8: 0xa22018  mult        $a0, $a1, $v0
    ctx->pc = 0x38bad8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x38badc: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x38badcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x38bae0: 0x908021  addu        $s0, $a0, $s0
    ctx->pc = 0x38bae0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x38bae4: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x38bae4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_38bae8:
    // 0x38bae8: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x38bae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x38baec: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x38baecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x38baf0: 0x18600050  blez        $v1, . + 4 + (0x50 << 2)
    ctx->pc = 0x38BAF0u;
    {
        const bool branch_taken_0x38baf0 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x38BAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BAF0u;
        // 0x38baf4: 0x3c12005e  lui         $s2, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38baf0) {
            ctx->pc = 0x38BC34u;
            goto label_38bc34;
        }
    }
    ctx->pc = 0x38BAF8u;
    // 0x38baf8: 0x60502d  daddu       $t2, $v1, $zero
    ctx->pc = 0x38baf8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38bafc: 0x8e29005c  lw          $t1, 0x5C($s1)
    ctx->pc = 0x38bafcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x38bb00: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x38bb00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x38bb04: 0xa1823  negu        $v1, $t2
    ctx->pc = 0x38bb04u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 10)));
    // 0x38bb08: 0xa23818  mult        $a3, $a1, $v0
    ctx->pc = 0x38bb08u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x38bb0c: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x38bb0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x38bb10: 0x10600021  beqz        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x38BB10u;
    {
        const bool branch_taken_0x38bb10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x38BB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BB10u;
        // 0x38bb14: 0x25280018  addiu       $t0, $t1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38bb10) {
            ctx->pc = 0x38BB98u;
            goto label_38bb98;
        }
    }
    ctx->pc = 0x38BB18u;
    // 0x38bb18: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x38bb18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x38bb1c: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x38BB1Cu;
    {
        const bool branch_taken_0x38bb1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38BB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BB1Cu;
        // 0x38bb20: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x38bb1c) {
            ctx->pc = 0x38BB70u;
            goto label_38bb70;
        }
    }
    ctx->pc = 0x38BB24u;
    // 0x38bb24: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x38BB24u;
    {
        const bool branch_taken_0x38bb24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38BB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BB24u;
        // 0x38bb28: 0x26100018  addiu       $s0, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38bb24) {
            ctx->pc = 0x38BB50u;
            goto label_38bb50;
        }
    }
    ctx->pc = 0x38BB2Cu;
    // 0x38bb2c: 0x8d05fffc  lw          $a1, -0x4($t0)
    ctx->pc = 0x38bb2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294967292)));
    // 0x38bb30: 0x2071021  addu        $v0, $s0, $a3
    ctx->pc = 0x38bb30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x38bb34: 0x8d260018  lw          $a2, 0x18($t1)
    ctx->pc = 0x38bb34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 24)));
    // 0x38bb38: 0x45800b  movn        $s0, $v0, $a1
    ctx->pc = 0x38bb38u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
    // 0x38bb3c: 0x25280034  addiu       $t0, $t1, 0x34
    ctx->pc = 0x38bb3cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), 52));
    // 0x38bb40: 0x2071021  addu        $v0, $s0, $a3
    ctx->pc = 0x38bb40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x38bb44: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x38bb44u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x38bb48: 0x46800b  movn        $s0, $v0, $a2
    ctx->pc = 0x38bb48u;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
    // 0x38bb4c: 0x26100018  addiu       $s0, $s0, 0x18
    ctx->pc = 0x38bb4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
label_38bb50:
    // 0x38bb50: 0x8d05fffc  lw          $a1, -0x4($t0)
    ctx->pc = 0x38bb50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294967292)));
    // 0x38bb54: 0x2071021  addu        $v0, $s0, $a3
    ctx->pc = 0x38bb54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x38bb58: 0x8d060000  lw          $a2, 0x0($t0)
    ctx->pc = 0x38bb58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x38bb5c: 0x45800b  movn        $s0, $v0, $a1
    ctx->pc = 0x38bb5cu;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
    // 0x38bb60: 0x2508001c  addiu       $t0, $t0, 0x1C
    ctx->pc = 0x38bb60u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 28));
    // 0x38bb64: 0x2071021  addu        $v0, $s0, $a3
    ctx->pc = 0x38bb64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x38bb68: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x38bb68u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x38bb6c: 0x46800b  movn        $s0, $v0, $a2
    ctx->pc = 0x38bb6cu;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
label_38bb70:
    // 0x38bb70: 0x26100018  addiu       $s0, $s0, 0x18
    ctx->pc = 0x38bb70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x38bb74: 0x8d05fffc  lw          $a1, -0x4($t0)
    ctx->pc = 0x38bb74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294967292)));
    // 0x38bb78: 0x2071021  addu        $v0, $s0, $a3
    ctx->pc = 0x38bb78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x38bb7c: 0x8d060000  lw          $a2, 0x0($t0)
    ctx->pc = 0x38bb7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x38bb80: 0x45800b  movn        $s0, $v0, $a1
    ctx->pc = 0x38bb80u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
    // 0x38bb84: 0x2508001c  addiu       $t0, $t0, 0x1C
    ctx->pc = 0x38bb84u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 28));
    // 0x38bb88: 0x2071021  addu        $v0, $s0, $a3
    ctx->pc = 0x38bb88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x38bb8c: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x38bb8cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x38bb90: 0x11400028  beqz        $t2, . + 4 + (0x28 << 2)
    ctx->pc = 0x38BB90u;
    {
        const bool branch_taken_0x38bb90 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x38BB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BB90u;
        // 0x38bb94: 0x46800b  movn        $s0, $v0, $a2 (Delay Slot)
        if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38bb90) {
            ctx->pc = 0x38BC34u;
            goto label_38bc34;
        }
    }
    ctx->pc = 0x38BB98u;
label_38bb98:
    // 0x38bb98: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x38bb98u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38bb9c: 0x0  nop
    ctx->pc = 0x38bb9cu;
    // NOP
label_38bba0:
    // 0x38bba0: 0x8d25fffc  lw          $a1, -0x4($t1)
    ctx->pc = 0x38bba0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294967292)));
    // 0x38bba4: 0x26100018  addiu       $s0, $s0, 0x18
    ctx->pc = 0x38bba4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x38bba8: 0x2071021  addu        $v0, $s0, $a3
    ctx->pc = 0x38bba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x38bbac: 0x8d060000  lw          $a2, 0x0($t0)
    ctx->pc = 0x38bbacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x38bbb0: 0x45800b  movn        $s0, $v0, $a1
    ctx->pc = 0x38bbb0u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
    // 0x38bbb4: 0x254afffc  addiu       $t2, $t2, -0x4
    ctx->pc = 0x38bbb4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967292));
    // 0x38bbb8: 0x2071021  addu        $v0, $s0, $a3
    ctx->pc = 0x38bbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x38bbbc: 0x8d250018  lw          $a1, 0x18($t1)
    ctx->pc = 0x38bbbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 24)));
    // 0x38bbc0: 0x46800b  movn        $s0, $v0, $a2
    ctx->pc = 0x38bbc0u;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
    // 0x38bbc4: 0x26100018  addiu       $s0, $s0, 0x18
    ctx->pc = 0x38bbc4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x38bbc8: 0x8d06001c  lw          $a2, 0x1C($t0)
    ctx->pc = 0x38bbc8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 28)));
    // 0x38bbcc: 0x2071021  addu        $v0, $s0, $a3
    ctx->pc = 0x38bbccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x38bbd0: 0x45800b  movn        $s0, $v0, $a1
    ctx->pc = 0x38bbd0u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
    // 0x38bbd4: 0x2071821  addu        $v1, $s0, $a3
    ctx->pc = 0x38bbd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x38bbd8: 0x8d250034  lw          $a1, 0x34($t1)
    ctx->pc = 0x38bbd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 52)));
    // 0x38bbdc: 0x66800b  movn        $s0, $v1, $a2
    ctx->pc = 0x38bbdcu;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    // 0x38bbe0: 0x26100018  addiu       $s0, $s0, 0x18
    ctx->pc = 0x38bbe0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x38bbe4: 0x8d060038  lw          $a2, 0x38($t0)
    ctx->pc = 0x38bbe4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 56)));
    // 0x38bbe8: 0x2071021  addu        $v0, $s0, $a3
    ctx->pc = 0x38bbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x38bbec: 0x45800b  movn        $s0, $v0, $a1
    ctx->pc = 0x38bbecu;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
    // 0x38bbf0: 0x2071821  addu        $v1, $s0, $a3
    ctx->pc = 0x38bbf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x38bbf4: 0x8d250050  lw          $a1, 0x50($t1)
    ctx->pc = 0x38bbf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 80)));
    // 0x38bbf8: 0x66800b  movn        $s0, $v1, $a2
    ctx->pc = 0x38bbf8u;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    // 0x38bbfc: 0x25290070  addiu       $t1, $t1, 0x70
    ctx->pc = 0x38bbfcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 112));
    // 0x38bc00: 0x26100018  addiu       $s0, $s0, 0x18
    ctx->pc = 0x38bc00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x38bc04: 0x8d060054  lw          $a2, 0x54($t0)
    ctx->pc = 0x38bc04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 84)));
    // 0x38bc08: 0x2071821  addu        $v1, $s0, $a3
    ctx->pc = 0x38bc08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x38bc0c: 0x25080070  addiu       $t0, $t0, 0x70
    ctx->pc = 0x38bc0cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 112));
    // 0x38bc10: 0x65800b  movn        $s0, $v1, $a1
    ctx->pc = 0x38bc10u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    // 0x38bc14: 0x2071021  addu        $v0, $s0, $a3
    ctx->pc = 0x38bc14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x38bc18: 0x1540ffe1  bnez        $t2, . + 4 + (-0x1F << 2)
    ctx->pc = 0x38BC18u;
    {
        const bool branch_taken_0x38bc18 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x38BC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BC18u;
        // 0x38bc1c: 0x46800b  movn        $s0, $v0, $a2 (Delay Slot)
        if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38bc18) {
            ctx->pc = 0x38BBA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38bba0;
        }
    }
    ctx->pc = 0x38BC20u;
    // 0x38bc20: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x38BC20u;
    {
        const bool branch_taken_0x38bc20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x38bc20) {
            ctx->pc = 0x38BC34u;
            goto label_38bc34;
        }
    }
    ctx->pc = 0x38BC28u;
label_38bc28:
    // 0x38bc28: 0x24100028  addiu       $s0, $zero, 0x28
    ctx->pc = 0x38bc28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x38bc2c: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x38bc2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x38bc30: 0x3c12005e  lui         $s2, 0x5E
    ctx->pc = 0x38bc30u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)94 << 16));
label_38bc34:
    // 0x38bc34: 0xc0e3e3a  jal         func_38F8E8
    ctx->pc = 0x38BC34u;
    SET_GPR_U32(ctx, 31, 0x38BC3Cu);
    ctx->pc = 0x38BC38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38BC34u;
    // 0x38bc38: 0x26100018  addiu       $s0, $s0, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F8E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F8E8u, 0x38BC34u, 0x38BC3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38BC3Cu;
label_38bc3c:
    // 0x38bc3c: 0x2644add0  addiu       $a0, $s2, -0x5230
    ctx->pc = 0x38bc3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294946256));
    // 0x38bc40: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x38bc40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38bc44: 0xc104aec  jal         func_412BB0
    ctx->pc = 0x38BC44u;
    SET_GPR_U32(ctx, 31, 0x38BC4Cu);
    ctx->pc = 0x38BC48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38BC44u;
    // 0x38bc48: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412BB0u, 0x38BC44u, 0x38BC4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38BC4Cu;
label_38bc4c:
    // 0x38bc4c: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x38bc4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x38bc50: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x38bc50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x38bc54: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x38bc54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x38bc58: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x38bc58u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38bc5c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x38bc5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x38bc60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38bc60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38bc64: 0x3e00008  jr          $ra
    ctx->pc = 0x38BC64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38BC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BC64u;
        // 0x38bc68: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38BC64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38BC6Cu;
    // 0x38bc6c: 0x0  nop
    ctx->pc = 0x38bc6cu;
    // NOP
    ctx->pc = 0x38bc70u;
}
