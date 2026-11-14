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

// Function: sub_0049B108
// Address: 0x49b108 - 0x49b260
void sub_0049B108_0x49b108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049B108_0x49b108");
#endif

    switch (ctx->pc) {
        case 0x49b1b0u: goto label_49b1b0;
        case 0x49b1e8u: goto label_49b1e8;
        default: break;
    }

    ctx->pc = 0x49b108u;

    // 0x49b108: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x49b108u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49b10c: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x49b10cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49b110: 0xad090000  sw          $t1, 0x0($t0)
    ctx->pc = 0x49b110u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 9));
    // 0x49b114: 0xad06001c  sw          $a2, 0x1C($t0)
    ctx->pc = 0x49b114u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 28), GPR_U32(ctx, 6));
    // 0x49b118: 0x1072021  addu        $a0, $t0, $a3
    ctx->pc = 0x49b118u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x49b11c: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x49b11cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49b120: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x49b120u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x49b124: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x49B124u;
    {
        const bool branch_taken_0x49b124 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49B128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B124u;
        // 0x49b128: 0xad040020  sw          $a0, 0x20($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 32), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49b124) {
            ctx->pc = 0x49B208u;
            goto label_49b208;
        }
    }
    ctx->pc = 0x49B12Cu;
    // 0x49b12c: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x49b12cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49b130: 0x10e0000e  beqz        $a3, . + 4 + (0xE << 2)
    ctx->pc = 0x49B130u;
    {
        const bool branch_taken_0x49b130 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x49B134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B130u;
        // 0x49b134: 0x30620002  andi        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x49b130) {
            ctx->pc = 0x49B16Cu;
            goto label_49b16c;
        }
    }
    ctx->pc = 0x49B138u;
    // 0x49b138: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x49B138u;
    {
        const bool branch_taken_0x49b138 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49B13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B138u;
        // 0x49b13c: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49b138) {
            ctx->pc = 0x49B158u;
            goto label_49b158;
        }
    }
    ctx->pc = 0x49B140u;
    // 0x49b140: 0x8d230040  lw          $v1, 0x40($t1)
    ctx->pc = 0x49b140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 64)));
    // 0x49b144: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x49b144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x49b148: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x49b148u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x49b14c: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x49b14cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x49b150: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x49B150u;
    {
        const bool branch_taken_0x49b150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49B154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B150u;
        // 0x49b154: 0x24670004  addiu       $a3, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49b150) {
            ctx->pc = 0x49B17Cu;
            goto label_49b17c;
        }
    }
    ctx->pc = 0x49B158u;
label_49b158:
    // 0x49b158: 0x8d230040  lw          $v1, 0x40($t1)
    ctx->pc = 0x49b158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 64)));
    // 0x49b15c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x49b15cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x49b160: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x49b160u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x49b164: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x49B164u;
    {
        const bool branch_taken_0x49b164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49B168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B164u;
        // 0x49b168: 0x833821  addu        $a3, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49b164) {
            ctx->pc = 0x49B17Cu;
            goto label_49b17c;
        }
    }
    ctx->pc = 0x49B16Cu;
label_49b16c:
    // 0x49b16c: 0x30c30002  andi        $v1, $a2, 0x2
    ctx->pc = 0x49b16cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)2);
    // 0x49b170: 0x25070028  addiu       $a3, $t0, 0x28
    ctx->pc = 0x49b170u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 40));
    // 0x49b174: 0x2502002c  addiu       $v0, $t0, 0x2C
    ctx->pc = 0x49b174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 44));
    // 0x49b178: 0x43380b  movn        $a3, $v0, $v1
    ctx->pc = 0x49b178u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 2));
label_49b17c:
    // 0x49b17c: 0x24eb0008  addiu       $t3, $a3, 0x8
    ctx->pc = 0x49b17cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x49b180: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x49b180u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x49b184: 0xaceb0000  sw          $t3, 0x0($a3)
    ctx->pc = 0x49b184u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 11));
    // 0x49b188: 0x8d23004c  lw          $v1, 0x4C($t1)
    ctx->pc = 0x49b188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 76)));
    // 0x49b18c: 0x9462000c  lhu         $v0, 0xC($v1)
    ctx->pc = 0x49b18cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x49b190: 0x441818  mult        $v1, $v0, $a0
    ctx->pc = 0x49b190u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x49b194: 0x6b1021  addu        $v0, $v1, $t3
    ctx->pc = 0x49b194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x49b198: 0xace20004  sw          $v0, 0x4($a3)
    ctx->pc = 0x49b198u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 2));
    // 0x49b19c: 0x8d23004c  lw          $v1, 0x4C($t1)
    ctx->pc = 0x49b19cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 76)));
    // 0x49b1a0: 0x9465000c  lhu         $a1, 0xC($v1)
    ctx->pc = 0x49b1a0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x49b1a4: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x49B1A4u;
    {
        const bool branch_taken_0x49b1a4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x49B1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B1A4u;
        // 0x49b1a8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49b1a4) {
            ctx->pc = 0x49B1D4u;
            goto label_49b1d4;
        }
    }
    ctx->pc = 0x49B1ACu;
    // 0x49b1ac: 0x240a000c  addiu       $t2, $zero, 0xC
    ctx->pc = 0x49b1acu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_49b1b0:
    // 0x49b1b0: 0xca1818  mult        $v1, $a2, $t2
    ctx->pc = 0x49b1b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x49b1b4: 0x6b1021  addu        $v0, $v1, $t3
    ctx->pc = 0x49b1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x49b1b8: 0x24c30001  addiu       $v1, $a2, 0x1
    ctx->pc = 0x49b1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x49b1bc: 0xac420008  sw          $v0, 0x8($v0)
    ctx->pc = 0x49b1bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 2));
    // 0x49b1c0: 0x3066ffff  andi        $a2, $v1, 0xFFFF
    ctx->pc = 0x49b1c0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x49b1c4: 0xac420000  sw          $v0, 0x0($v0)
    ctx->pc = 0x49b1c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 2));
    // 0x49b1c8: 0xc5202b  sltu        $a0, $a2, $a1
    ctx->pc = 0x49b1c8u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x49b1cc: 0x1480fff8  bnez        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x49B1CCu;
    {
        const bool branch_taken_0x49b1cc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x49B1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B1CCu;
        // 0x49b1d0: 0xac420004  sw          $v0, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49b1cc) {
            ctx->pc = 0x49B1B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49b1b0;
        }
    }
    ctx->pc = 0x49B1D4u;
label_49b1d4:
    // 0x49b1d4: 0x8d22004c  lw          $v0, 0x4C($t1)
    ctx->pc = 0x49b1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 76)));
    // 0x49b1d8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x49b1d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49b1dc: 0x9445000e  lhu         $a1, 0xE($v0)
    ctx->pc = 0x49b1dcu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x49b1e0: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x49B1E0u;
    {
        const bool branch_taken_0x49b1e0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x49B1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B1E0u;
        // 0x49b1e4: 0x8ce40004  lw          $a0, 0x4($a3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49b1e0) {
            ctx->pc = 0x49B208u;
            goto label_49b208;
        }
    }
    ctx->pc = 0x49B1E8u;
label_49b1e8:
    // 0x49b1e8: 0x24c20001  addiu       $v0, $a2, 0x1
    ctx->pc = 0x49b1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x49b1ec: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x49b1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x49b1f0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x49b1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x49b1f4: 0x3046ffff  andi        $a2, $v0, 0xFFFF
    ctx->pc = 0x49b1f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x49b1f8: 0xac630004  sw          $v1, 0x4($v1)
    ctx->pc = 0x49b1f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 3));
    // 0x49b1fc: 0xc5102b  sltu        $v0, $a2, $a1
    ctx->pc = 0x49b1fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x49b200: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x49B200u;
    {
        const bool branch_taken_0x49b200 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x49B204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B200u;
        // 0x49b204: 0xac630000  sw          $v1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49b200) {
            ctx->pc = 0x49B1E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49b1e8;
        }
    }
    ctx->pc = 0x49B208u;
label_49b208:
    // 0x49b208: 0x8d02001c  lw          $v0, 0x1C($t0)
    ctx->pc = 0x49b208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 28)));
    // 0x49b20c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x49b20cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x49b210: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x49B210u;
    {
        const bool branch_taken_0x49b210 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x49b210) {
            ctx->pc = 0x49B214u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49B210u;
            // 0x49b214: 0x2502000c  addiu       $v0, $t0, 0xC (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 12));
            ctx->in_delay_slot = false;
            ctx->pc = 0x49B248u;
            goto label_49b248;
        }
    }
    ctx->pc = 0x49B218u;
    // 0x49b218: 0x8d050020  lw          $a1, 0x20($t0)
    ctx->pc = 0x49b218u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 32)));
    // 0x49b21c: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x49B21Cu;
    {
        const bool branch_taken_0x49b21c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x49B220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B21Cu;
        // 0x49b220: 0x3c030fff  lui         $v1, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49b21c) {
            ctx->pc = 0x49B23Cu;
            goto label_49b23c;
        }
    }
    ctx->pc = 0x49B224u;
    // 0x49b224: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x49b224u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x49b228: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49b228u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x49b22c: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x49b22cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x49b230: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x49b230u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x49b234: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x49B234u;
    {
        const bool branch_taken_0x49b234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49B238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B234u;
        // 0x49b238: 0xa21021  addu        $v0, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49b234) {
            ctx->pc = 0x49B240u;
            goto label_49b240;
        }
    }
    ctx->pc = 0x49B23Cu;
label_49b23c:
    // 0x49b23c: 0x25020028  addiu       $v0, $t0, 0x28
    ctx->pc = 0x49b23cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 40));
label_49b240:
    // 0x49b240: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x49b240u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x49b244: 0x2502000c  addiu       $v0, $t0, 0xC
    ctx->pc = 0x49b244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 12));
label_49b248:
    // 0x49b248: 0xad000014  sw          $zero, 0x14($t0)
    ctx->pc = 0x49b248u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 20), GPR_U32(ctx, 0));
    // 0x49b24c: 0xad020010  sw          $v0, 0x10($t0)
    ctx->pc = 0x49b24cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 2));
    // 0x49b250: 0xad02000c  sw          $v0, 0xC($t0)
    ctx->pc = 0x49b250u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 2));
    // 0x49b254: 0x3e00008  jr          $ra
    ctx->pc = 0x49B254u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49B258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B254u;
        // 0x49b258: 0xad000018  sw          $zero, 0x18($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49B254u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49B25Cu;
    // 0x49b25c: 0x0  nop
    ctx->pc = 0x49b25cu;
    // NOP
    ctx->pc = 0x49b260u;
}
