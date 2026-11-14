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

// Function: sub_0040A5E8
// Address: 0x40a5e8 - 0x40ab08
void sub_0040A5E8_0x40a5e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0040A5E8_0x40a5e8");
#endif

    switch (ctx->pc) {
        case 0x40a648u: goto label_40a648;
        case 0x40a798u: goto label_40a798;
        case 0x40aa20u: goto label_40aa20;
        default: break;
    }

    ctx->pc = 0x40a5e8u;

    // 0x40a5e8: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x40a5e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x40a5ec: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x40a5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x40a5f0: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x40a5f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
    // 0x40a5f4: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x40a5f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x40a5f8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x40a5f8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40a5fc: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x40a5fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x40a600: 0x3c150062  lui         $s5, 0x62
    ctx->pc = 0x40a600u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)98 << 16));
    // 0x40a604: 0x26b5e390  addiu       $s5, $s5, -0x1C70
    ctx->pc = 0x40a604u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294960016));
    // 0x40a608: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x40a608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
    // 0x40a60c: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x40a60cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40a610: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x40a610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
    // 0x40a614: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x40a614u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40a618: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x40a618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x40a61c: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x40a61cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40a620: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x40a620u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x40a624: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x40a624u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x40a628: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x40a628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
    // 0x40a62c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x40a62cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x40a630: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x40a630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x40a634: 0xafa60024  sw          $a2, 0x24($sp)
    ctx->pc = 0x40a634u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 6));
    // 0x40a638: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x40a638u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x40a63c: 0xafa70028  sw          $a3, 0x28($sp)
    ctx->pc = 0x40a63cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 7));
    // 0x40a640: 0xafa30030  sw          $v1, 0x30($sp)
    ctx->pc = 0x40a640u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
    // 0x40a644: 0x0  nop
    ctx->pc = 0x40a644u;
    // NOP
label_40a648:
    // 0x40a648: 0x33c300ff  andi        $v1, $fp, 0xFF
    ctx->pc = 0x40a648u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)255);
    // 0x40a64c: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x40a64cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x40a650: 0x8ee20008  lw          $v0, 0x8($s7)
    ctx->pc = 0x40a650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x40a654: 0x3c2102b  sltu        $v0, $fp, $v0
    ctx->pc = 0x40a654u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x40a658: 0x144000b4  bnez        $v0, . + 4 + (0xB4 << 2)
    ctx->pc = 0x40A658u;
    {
        const bool branch_taken_0x40a658 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x40A65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40A658u;
        // 0x40a65c: 0x8fa8002c  lw          $t0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40a658) {
            ctx->pc = 0x40A92Cu;
            goto label_40a92c;
        }
    }
    ctx->pc = 0x40A660u;
    // 0x40a660: 0x1e1142  srl         $v0, $fp, 5
    ctx->pc = 0x40a660u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 30), 5));
    // 0x40a664: 0x8fa60028  lw          $a2, 0x28($sp)
    ctx->pc = 0x40a664u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x40a668: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x40a668u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x40a66c: 0x33c4001f  andi        $a0, $fp, 0x1F
    ctx->pc = 0x40a66cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)31);
    // 0x40a670: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x40a670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x40a674: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x40a674u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x40a678: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x40a678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x40a67c: 0x852004  sllv        $a0, $a1, $a0
    ctx->pc = 0x40a67cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 4) & 0x1F));
    // 0x40a680: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x40a680u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x40a684: 0x146000aa  bnez        $v1, . + 4 + (0xAA << 2)
    ctx->pc = 0x40A684u;
    {
        const bool branch_taken_0x40a684 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x40A688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40A684u;
        // 0x40a688: 0x1e1900  sll         $v1, $fp, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 30), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40a684) {
            ctx->pc = 0x40A930u;
            goto label_40a930;
        }
    }
    ctx->pc = 0x40A68Cu;
    // 0x40a68c: 0x8fa70020  lw          $a3, 0x20($sp)
    ctx->pc = 0x40a68cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x40a690: 0x1e1940  sll         $v1, $fp, 5
    ctx->pc = 0x40a690u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 30), 5));
    // 0x40a694: 0x8ee5000c  lw          $a1, 0xC($s7)
    ctx->pc = 0x40a694u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12)));
    // 0x40a698: 0x8ce2005c  lw          $v0, 0x5C($a3)
    ctx->pc = 0x40a698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 92)));
    // 0x40a69c: 0x8ee40010  lw          $a0, 0x10($s7)
    ctx->pc = 0x40a69cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 16)));
    // 0x40a6a0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x40a6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x40a6a4: 0x8ee60014  lw          $a2, 0x14($s7)
    ctx->pc = 0x40a6a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 20)));
    // 0x40a6a8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x40a6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x40a6ac: 0x8ee70018  lw          $a3, 0x18($s7)
    ctx->pc = 0x40a6acu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 24)));
    // 0x40a6b0: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x40a6b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x40a6b4: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x40a6b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x40a6b8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x40a6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x40a6bc: 0x8ee8001c  lw          $t0, 0x1C($s7)
    ctx->pc = 0x40a6bcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 28)));
    // 0x40a6c0: 0x8ee90020  lw          $t1, 0x20($s7)
    ctx->pc = 0x40a6c0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 32)));
    // 0x40a6c4: 0x825824  and         $t3, $a0, $v0
    ctx->pc = 0x40a6c4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x40a6c8: 0x8eea0024  lw          $t2, 0x24($s7)
    ctx->pc = 0x40a6c8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 36)));
    // 0x40a6cc: 0xafab0004  sw          $t3, 0x4($sp)
    ctx->pc = 0x40a6ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 11));
    // 0x40a6d0: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x40a6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x40a6d4: 0x8ee40028  lw          $a0, 0x28($s7)
    ctx->pc = 0x40a6d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 40)));
    // 0x40a6d8: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x40a6d8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x40a6dc: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x40a6dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    // 0x40a6e0: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x40a6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x40a6e4: 0xe23824  and         $a3, $a3, $v0
    ctx->pc = 0x40a6e4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x40a6e8: 0xafa7000c  sw          $a3, 0xC($sp)
    ctx->pc = 0x40a6e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 7));
    // 0x40a6ec: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x40a6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x40a6f0: 0x1024024  and         $t0, $t0, $v0
    ctx->pc = 0x40a6f0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x40a6f4: 0xafa80010  sw          $t0, 0x10($sp)
    ctx->pc = 0x40a6f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 8));
    // 0x40a6f8: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x40a6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x40a6fc: 0x1224824  and         $t1, $t1, $v0
    ctx->pc = 0x40a6fcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 2));
    // 0x40a700: 0xafa90014  sw          $t1, 0x14($sp)
    ctx->pc = 0x40a700u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 9));
    // 0x40a704: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x40a704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x40a708: 0x1425024  and         $t2, $t2, $v0
    ctx->pc = 0x40a708u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 2));
    // 0x40a70c: 0xafaa0018  sw          $t2, 0x18($sp)
    ctx->pc = 0x40a70cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 10));
    // 0x40a710: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x40a710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x40a714: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x40a714u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x40a718: 0x14a0000f  bnez        $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x40A718u;
    {
        const bool branch_taken_0x40a718 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x40A71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40A718u;
        // 0x40a71c: 0xafa4001c  sw          $a0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40a718) {
            ctx->pc = 0x40A758u;
            goto label_40a758;
        }
    }
    ctx->pc = 0x40A720u;
    // 0x40a720: 0x5560000e  bnel        $t3, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x40A720u;
    {
        const bool branch_taken_0x40a720 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        if (branch_taken_0x40a720) {
            ctx->pc = 0x40A724u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x40A720u;
            // 0x40a724: 0x8fa80020  lw          $t0, 0x20($sp) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x40A75Cu;
            goto label_40a75c;
        }
    }
    ctx->pc = 0x40A728u;
    // 0x40a728: 0x54c0000c  bnel        $a2, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x40A728u;
    {
        const bool branch_taken_0x40a728 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x40a728) {
            ctx->pc = 0x40A72Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x40A728u;
            // 0x40a72c: 0x8fa80020  lw          $t0, 0x20($sp) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x40A75Cu;
            goto label_40a75c;
        }
    }
    ctx->pc = 0x40A730u;
    // 0x40a730: 0x54e0000a  bnel        $a3, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x40A730u;
    {
        const bool branch_taken_0x40a730 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x40a730) {
            ctx->pc = 0x40A734u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x40A730u;
            // 0x40a734: 0x8fa80020  lw          $t0, 0x20($sp) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x40A75Cu;
            goto label_40a75c;
        }
    }
    ctx->pc = 0x40A738u;
    // 0x40a738: 0x15000008  bnez        $t0, . + 4 + (0x8 << 2)
    ctx->pc = 0x40A738u;
    {
        const bool branch_taken_0x40a738 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x40A73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40A738u;
        // 0x40a73c: 0x8fa80020  lw          $t0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40a738) {
            ctx->pc = 0x40A75Cu;
            goto label_40a75c;
        }
    }
    ctx->pc = 0x40A740u;
    // 0x40a740: 0x15200006  bnez        $t1, . + 4 + (0x6 << 2)
    ctx->pc = 0x40A740u;
    {
        const bool branch_taken_0x40a740 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x40a740) {
            ctx->pc = 0x40A75Cu;
            goto label_40a75c;
        }
    }
    ctx->pc = 0x40A748u;
    // 0x40a748: 0x15400005  bnez        $t2, . + 4 + (0x5 << 2)
    ctx->pc = 0x40A748u;
    {
        const bool branch_taken_0x40a748 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x40A74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40A748u;
        // 0x40a74c: 0x1e1880  sll         $v1, $fp, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 30), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40a748) {
            ctx->pc = 0x40A760u;
            goto label_40a760;
        }
    }
    ctx->pc = 0x40A750u;
    // 0x40a750: 0x10800076  beqz        $a0, . + 4 + (0x76 << 2)
    ctx->pc = 0x40A750u;
    {
        const bool branch_taken_0x40a750 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x40A754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40A750u;
        // 0x40a754: 0x8fa8002c  lw          $t0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40a750) {
            ctx->pc = 0x40A92Cu;
            goto label_40a92c;
        }
    }
    ctx->pc = 0x40A758u;
label_40a758:
    // 0x40a758: 0x8fa80020  lw          $t0, 0x20($sp)
    ctx->pc = 0x40a758u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_40a75c:
    // 0x40a75c: 0x1e1880  sll         $v1, $fp, 2
    ctx->pc = 0x40a75cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 30), 2));
label_40a760:
    // 0x40a760: 0x8fac0024  lw          $t4, 0x24($sp)
    ctx->pc = 0x40a760u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x40a764: 0x8d020058  lw          $v0, 0x58($t0)
    ctx->pc = 0x40a764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 88)));
    // 0x40a768: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x40a768u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x40a76c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x40a76cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x40a770: 0x184202b  sltu        $a0, $t4, $a0
    ctx->pc = 0x40a770u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x40a774: 0x1080006b  beqz        $a0, . + 4 + (0x6B << 2)
    ctx->pc = 0x40A774u;
    {
        const bool branch_taken_0x40a774 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x40A778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40A774u;
        // 0x40a778: 0x27a30020  addiu       $v1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40a774) {
            ctx->pc = 0x40A924u;
            goto label_40a924;
        }
    }
    ctx->pc = 0x40A77Cu;
    // 0x40a77c: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x40a77cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x40a780: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x40a780u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x40a784: 0x2458c888  addiu       $t8, $v0, -0x3778
    ctx->pc = 0x40a784u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953096));
    // 0x40a788: 0xafa30038  sw          $v1, 0x38($sp)
    ctx->pc = 0x40a788u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 3));
    // 0x40a78c: 0x3a0a02d  daddu       $s4, $sp, $zero
    ctx->pc = 0x40a78cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40a790: 0x3a0c82d  daddu       $t9, $sp, $zero
    ctx->pc = 0x40a790u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40a794: 0x0  nop
    ctx->pc = 0x40a794u;
    // NOP
label_40a798:
    // 0x40a798: 0x8f290000  lw          $t1, 0x0($t9)
    ctx->pc = 0x40a798u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 0)));
    // 0x40a79c: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x40a79cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x40a7a0: 0x8f2b0004  lw          $t3, 0x4($t9)
    ctx->pc = 0x40a7a0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 4)));
    // 0x40a7a4: 0x3c0c000f  lui         $t4, 0xF
    ctx->pc = 0x40a7a4u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)15 << 16));
    // 0x40a7a8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x40a7a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x40a7ac: 0x312200f0  andi        $v0, $t1, 0xF0
    ctx->pc = 0x40a7acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)240);
    // 0x40a7b0: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x40a7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x40a7b4: 0x31250f00  andi        $a1, $t1, 0xF00
    ctx->pc = 0x40a7b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)3840);
    // 0x40a7b8: 0x581021  addu        $v0, $v0, $t8
    ctx->pc = 0x40a7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 24)));
    // 0x40a7bc: 0x3128f000  andi        $t0, $t1, 0xF000
    ctx->pc = 0x40a7bcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)61440);
    // 0x40a7c0: 0x3166000f  andi        $a2, $t3, 0xF
    ctx->pc = 0x40a7c0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)15);
    // 0x40a7c4: 0x284902b  sltu        $s2, $s4, $a0
    ctx->pc = 0x40a7c4u;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x40a7c8: 0x904f0000  lbu         $t7, 0x0($v0)
    ctx->pc = 0x40a7c8u;
    SET_GPR_ZE32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x40a7cc: 0x3124000f  andi        $a0, $t1, 0xF
    ctx->pc = 0x40a7ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)15);
    // 0x40a7d0: 0x316700f0  andi        $a3, $t3, 0xF0
    ctx->pc = 0x40a7d0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)240);
    // 0x40a7d4: 0xd83021  addu        $a2, $a2, $t8
    ctx->pc = 0x40a7d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 24)));
    // 0x40a7d8: 0x52a02  srl         $a1, $a1, 8
    ctx->pc = 0x40a7d8u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 8));
    // 0x40a7dc: 0x84302  srl         $t0, $t0, 12
    ctx->pc = 0x40a7dcu;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 8), 12));
    // 0x40a7e0: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x40a7e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x40a7e4: 0x982021  addu        $a0, $a0, $t8
    ctx->pc = 0x40a7e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 24)));
    // 0x40a7e8: 0xb82821  addu        $a1, $a1, $t8
    ctx->pc = 0x40a7e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 24)));
    // 0x40a7ec: 0x1184021  addu        $t0, $t0, $t8
    ctx->pc = 0x40a7ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 24)));
    // 0x40a7f0: 0x73902  srl         $a3, $a3, 4
    ctx->pc = 0x40a7f0u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 4));
    // 0x40a7f4: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x40a7f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x40a7f8: 0x90b00000  lbu         $s0, 0x0($a1)
    ctx->pc = 0x40a7f8u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x40a7fc: 0x316a0f00  andi        $t2, $t3, 0xF00
    ctx->pc = 0x40a7fcu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)3840);
    // 0x40a800: 0x91110000  lbu         $s1, 0x0($t0)
    ctx->pc = 0x40a800u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x40a804: 0xf83821  addu        $a3, $a3, $t8
    ctx->pc = 0x40a804u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 24)));
    // 0x40a808: 0x3c0600f0  lui         $a2, 0xF0
    ctx->pc = 0x40a808u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)240 << 16));
    // 0x40a80c: 0x90ee0000  lbu         $t6, 0x0($a3)
    ctx->pc = 0x40a80cu;
    SET_GPR_ZE32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x40a810: 0x12c2024  and         $a0, $t1, $t4
    ctx->pc = 0x40a810u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 9) & GPR_U64(ctx, 12));
    // 0x40a814: 0x1262824  and         $a1, $t1, $a2
    ctx->pc = 0x40a814u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 9) & GPR_U64(ctx, 6));
    // 0x40a818: 0x3c080f00  lui         $t0, 0xF00
    ctx->pc = 0x40a818u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)3840 << 16));
    // 0x40a81c: 0xa5202  srl         $t2, $t2, 8
    ctx->pc = 0x40a81cu;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 10), 8));
    // 0x40a820: 0x1283024  and         $a2, $t1, $t0
    ctx->pc = 0x40a820u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 9) & GPR_U64(ctx, 8));
    // 0x40a824: 0x316cf000  andi        $t4, $t3, 0xF000
    ctx->pc = 0x40a824u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)61440);
    // 0x40a828: 0x1585021  addu        $t2, $t2, $t8
    ctx->pc = 0x40a828u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 24)));
    // 0x40a82c: 0x3c07000f  lui         $a3, 0xF
    ctx->pc = 0x40a82cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)15 << 16));
    // 0x40a830: 0x6f1821  addu        $v1, $v1, $t7
    ctx->pc = 0x40a830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 15)));
    // 0x40a834: 0x42402  srl         $a0, $a0, 16
    ctx->pc = 0x40a834u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
    // 0x40a838: 0x1676824  and         $t5, $t3, $a3
    ctx->pc = 0x40a838u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 11) & GPR_U64(ctx, 7));
    // 0x40a83c: 0x914f0000  lbu         $t7, 0x0($t2)
    ctx->pc = 0x40a83cu;
    SET_GPR_ZE32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x40a840: 0x982021  addu        $a0, $a0, $t8
    ctx->pc = 0x40a840u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 24)));
    // 0x40a844: 0x3c0800f0  lui         $t0, 0xF0
    ctx->pc = 0x40a844u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)240 << 16));
    // 0x40a848: 0xc6302  srl         $t4, $t4, 12
    ctx->pc = 0x40a848u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 12), 12));
    // 0x40a84c: 0x908a0000  lbu         $t2, 0x0($a0)
    ctx->pc = 0x40a84cu;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x40a850: 0x1683824  and         $a3, $t3, $t0
    ctx->pc = 0x40a850u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 11) & GPR_U64(ctx, 8));
    // 0x40a854: 0x1986021  addu        $t4, $t4, $t8
    ctx->pc = 0x40a854u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 24)));
    // 0x40a858: 0x91880000  lbu         $t0, 0x0($t4)
    ctx->pc = 0x40a858u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x40a85c: 0x3c04f000  lui         $a0, 0xF000
    ctx->pc = 0x40a85cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61440 << 16));
    // 0x40a860: 0x4e1021  addu        $v0, $v0, $t6
    ctx->pc = 0x40a860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 14)));
    // 0x40a864: 0x1244824  and         $t1, $t1, $a0
    ctx->pc = 0x40a864u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 4));
    // 0x40a868: 0x3c0c0f00  lui         $t4, 0xF00
    ctx->pc = 0x40a868u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)3840 << 16));
    // 0x40a86c: 0x52d02  srl         $a1, $a1, 20
    ctx->pc = 0x40a86cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 20));
    // 0x40a870: 0xd6c02  srl         $t5, $t5, 16
    ctx->pc = 0x40a870u;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 13), 16));
    // 0x40a874: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x40a874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x40a878: 0x16c2024  and         $a0, $t3, $t4
    ctx->pc = 0x40a878u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 11) & GPR_U64(ctx, 12));
    // 0x40a87c: 0xb82821  addu        $a1, $a1, $t8
    ctx->pc = 0x40a87cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 24)));
    // 0x40a880: 0x63602  srl         $a2, $a2, 24
    ctx->pc = 0x40a880u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 24));
    // 0x40a884: 0x1b86821  addu        $t5, $t5, $t8
    ctx->pc = 0x40a884u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 24)));
    // 0x40a888: 0x73d02  srl         $a3, $a3, 20
    ctx->pc = 0x40a888u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 20));
    // 0x40a88c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x40a88cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x40a890: 0x4f1021  addu        $v0, $v0, $t7
    ctx->pc = 0x40a890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 15)));
    // 0x40a894: 0x90ae0000  lbu         $t6, 0x0($a1)
    ctx->pc = 0x40a894u;
    SET_GPR_ZE32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x40a898: 0xd83021  addu        $a2, $a2, $t8
    ctx->pc = 0x40a898u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 24)));
    // 0x40a89c: 0x91ac0000  lbu         $t4, 0x0($t5)
    ctx->pc = 0x40a89cu;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x40a8a0: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x40a8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x40a8a4: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x40a8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x40a8a8: 0xf83821  addu        $a3, $a3, $t8
    ctx->pc = 0x40a8a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 24)));
    // 0x40a8ac: 0x42602  srl         $a0, $a0, 24
    ctx->pc = 0x40a8acu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 24));
    // 0x40a8b0: 0x90ca0000  lbu         $t2, 0x0($a2)
    ctx->pc = 0x40a8b0u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x40a8b4: 0x3c05f000  lui         $a1, 0xF000
    ctx->pc = 0x40a8b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61440 << 16));
    // 0x40a8b8: 0x90e80000  lbu         $t0, 0x0($a3)
    ctx->pc = 0x40a8b8u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x40a8bc: 0x982021  addu        $a0, $a0, $t8
    ctx->pc = 0x40a8bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 24)));
    // 0x40a8c0: 0x90860000  lbu         $a2, 0x0($a0)
    ctx->pc = 0x40a8c0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x40a8c4: 0x1655824  and         $t3, $t3, $a1
    ctx->pc = 0x40a8c4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 5));
    // 0x40a8c8: 0x94f02  srl         $t1, $t1, 28
    ctx->pc = 0x40a8c8u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 9), 28));
    // 0x40a8cc: 0x4c1021  addu        $v0, $v0, $t4
    ctx->pc = 0x40a8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x40a8d0: 0x1384821  addu        $t1, $t1, $t8
    ctx->pc = 0x40a8d0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 24)));
    // 0x40a8d4: 0xb5f02  srl         $t3, $t3, 28
    ctx->pc = 0x40a8d4u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 11), 28));
    // 0x40a8d8: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x40a8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x40a8dc: 0x91250000  lbu         $a1, 0x0($t1)
    ctx->pc = 0x40a8dcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x40a8e0: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x40a8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x40a8e4: 0x6e1821  addu        $v1, $v1, $t6
    ctx->pc = 0x40a8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 14)));
    // 0x40a8e8: 0x1785821  addu        $t3, $t3, $t8
    ctx->pc = 0x40a8e8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 24)));
    // 0x40a8ec: 0x8fa60034  lw          $a2, 0x34($sp)
    ctx->pc = 0x40a8ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x40a8f0: 0x91640000  lbu         $a0, 0x0($t3)
    ctx->pc = 0x40a8f0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x40a8f4: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x40a8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x40a8f8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x40a8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x40a8fc: 0x27390008  addiu       $t9, $t9, 0x8
    ctx->pc = 0x40a8fcu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 8));
    // 0x40a900: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x40a900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x40a904: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x40a904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x40a908: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x40a908u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x40a90c: 0x1640ffa2  bnez        $s2, . + 4 + (-0x5E << 2)
    ctx->pc = 0x40A90Cu;
    {
        const bool branch_taken_0x40a90c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x40A910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40A90Cu;
        // 0x40a910: 0xafa30034  sw          $v1, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40a90c) {
            ctx->pc = 0x40A798u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_40a798;
        }
    }
    ctx->pc = 0x40A914u;
    // 0x40a914: 0x8fa70024  lw          $a3, 0x24($sp)
    ctx->pc = 0x40a914u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x40a918: 0xe3102b  sltu        $v0, $a3, $v1
    ctx->pc = 0x40a918u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x40a91c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x40A91Cu;
    {
        const bool branch_taken_0x40a91c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x40A920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40A91Cu;
        // 0x40a920: 0x8fa8002c  lw          $t0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40a91c) {
            ctx->pc = 0x40A92Cu;
            goto label_40a92c;
        }
    }
    ctx->pc = 0x40A924u;
label_40a924:
    // 0x40a924: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x40A924u;
    {
        const bool branch_taken_0x40a924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40A928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40A924u;
        // 0x40a928: 0xafbe0030  sw          $fp, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40a924) {
            ctx->pc = 0x40AAD8u;
            goto label_40aad8;
        }
    }
    ctx->pc = 0x40A92Cu;
label_40a92c:
    // 0x40a92c: 0x1e1900  sll         $v1, $fp, 4
    ctx->pc = 0x40a92cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 30), 4));
label_40a930:
    // 0x40a930: 0x8d070010  lw          $a3, 0x10($t0)
    ctx->pc = 0x40a930u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x40a934: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x40a934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x40a938: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x40a938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x40a93c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x40a93cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x40a940: 0x10400060  beqz        $v0, . + 4 + (0x60 << 2)
    ctx->pc = 0x40A940u;
    {
        const bool branch_taken_0x40a940 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x40A944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40A940u;
        // 0x40a944: 0x27c40001  addiu       $a0, $fp, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40a940) {
            ctx->pc = 0x40AAC4u;
            goto label_40aac4;
        }
    }
    ctx->pc = 0x40A948u;
    // 0x40a948: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x40a948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x40a94c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x40a94cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x40a950: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x40a950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x40a954: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x40a954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x40a958: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x40a958u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x40a95c: 0x54600057  bnel        $v1, $zero, . + 4 + (0x57 << 2)
    ctx->pc = 0x40A95Cu;
    {
        const bool branch_taken_0x40a95c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x40a95c) {
            ctx->pc = 0x40A960u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x40A95Cu;
            // 0x40a960: 0x26b5fffc  addiu       $s5, $s5, -0x4 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967292));
            ctx->in_delay_slot = false;
            ctx->pc = 0x40AABCu;
            goto label_40aabc;
        }
    }
    ctx->pc = 0x40A964u;
    // 0x40a964: 0x12600054  beqz        $s3, . + 4 + (0x54 << 2)
    ctx->pc = 0x40A964u;
    {
        const bool branch_taken_0x40a964 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x40A968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40A964u;
        // 0x40a968: 0x3c0c0062  lui         $t4, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40a964) {
            ctx->pc = 0x40AAB8u;
            goto label_40aab8;
        }
    }
    ctx->pc = 0x40A96Cu;
    // 0x40a96c: 0x131023  negu        $v0, $s3
    ctx->pc = 0x40a96cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 19)));
    // 0x40a970: 0x258ce390  addiu       $t4, $t4, -0x1C70
    ctx->pc = 0x40a970u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294960016));
    // 0x40a974: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x40a974u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x40a978: 0x2cc2821  addu        $a1, $s6, $t4
    ctx->pc = 0x40a978u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 12)));
    // 0x40a97c: 0x10600026  beqz        $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x40A97Cu;
    {
        const bool branch_taken_0x40a97c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x40A980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40A97Cu;
        // 0x40a980: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40a97c) {
            ctx->pc = 0x40AA18u;
            goto label_40aa18;
        }
    }
    ctx->pc = 0x40A984u;
    // 0x40a984: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x40a984u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x40a988: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x40A988u;
    {
        const bool branch_taken_0x40a988 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x40A98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40A988u;
        // 0x40a98c: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x40a988) {
            ctx->pc = 0x40A9E8u;
            goto label_40a9e8;
        }
    }
    ctx->pc = 0x40A990u;
    // 0x40a990: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x40A990u;
    {
        const bool branch_taken_0x40a990 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x40A994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40A990u;
        // 0x40a994: 0x24a5fffc  addiu       $a1, $a1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40a990) {
            ctx->pc = 0x40A9C0u;
            goto label_40a9c0;
        }
    }
    ctx->pc = 0x40A998u;
    // 0x40a998: 0x26b5fffc  addiu       $s5, $s5, -0x4
    ctx->pc = 0x40a998u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967292));
    // 0x40a99c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x40a99cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40a9a0: 0x26d6fffc  addiu       $s6, $s6, -0x4
    ctx->pc = 0x40a9a0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967292));
    // 0x40a9a4: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x40a9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x40a9a8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x40a9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x40a9ac: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x40a9acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x40a9b0: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x40a9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x40a9b4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x40a9b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x40a9b8: 0x1440003f  bnez        $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x40A9B8u;
    {
        const bool branch_taken_0x40a9b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x40A9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40A9B8u;
        // 0x40a9bc: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40a9b8) {
            ctx->pc = 0x40AAB8u;
            goto label_40aab8;
        }
    }
    ctx->pc = 0x40A9C0u;
label_40a9c0:
    // 0x40a9c0: 0x24c6fffc  addiu       $a2, $a2, -0x4
    ctx->pc = 0x40a9c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
    // 0x40a9c4: 0x26b5fffc  addiu       $s5, $s5, -0x4
    ctx->pc = 0x40a9c4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967292));
    // 0x40a9c8: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x40a9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x40a9cc: 0x26d6fffc  addiu       $s6, $s6, -0x4
    ctx->pc = 0x40a9ccu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967292));
    // 0x40a9d0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x40a9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x40a9d4: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x40a9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x40a9d8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x40a9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x40a9dc: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x40a9dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x40a9e0: 0x14400035  bnez        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x40A9E0u;
    {
        const bool branch_taken_0x40a9e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x40A9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40A9E0u;
        // 0x40a9e4: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40a9e0) {
            ctx->pc = 0x40AAB8u;
            goto label_40aab8;
        }
    }
    ctx->pc = 0x40A9E8u;
label_40a9e8:
    // 0x40a9e8: 0x24c6fffc  addiu       $a2, $a2, -0x4
    ctx->pc = 0x40a9e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
    // 0x40a9ec: 0x26b5fffc  addiu       $s5, $s5, -0x4
    ctx->pc = 0x40a9ecu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967292));
    // 0x40a9f0: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x40a9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x40a9f4: 0x26d6fffc  addiu       $s6, $s6, -0x4
    ctx->pc = 0x40a9f4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967292));
    // 0x40a9f8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x40a9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x40a9fc: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x40a9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x40aa00: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x40aa00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x40aa04: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x40aa04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x40aa08: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x40AA08u;
    {
        const bool branch_taken_0x40aa08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x40AA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40AA08u;
        // 0x40aa0c: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40aa08) {
            ctx->pc = 0x40AAB8u;
            goto label_40aab8;
        }
    }
    ctx->pc = 0x40AA10u;
    // 0x40aa10: 0x5260002a  beql        $s3, $zero, . + 4 + (0x2A << 2)
    ctx->pc = 0x40AA10u;
    {
        const bool branch_taken_0x40aa10 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x40aa10) {
            ctx->pc = 0x40AA14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x40AA10u;
            // 0x40aa14: 0x26b5fffc  addiu       $s5, $s5, -0x4 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967292));
            ctx->in_delay_slot = false;
            ctx->pc = 0x40AABCu;
            goto label_40aabc;
        }
    }
    ctx->pc = 0x40AA18u;
label_40aa18:
    // 0x40aa18: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x40aa18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40aa1c: 0x8ca3fffc  lw          $v1, -0x4($a1)
    ctx->pc = 0x40aa1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967292)));
label_40aa20:
    // 0x40aa20: 0x26b5fffc  addiu       $s5, $s5, -0x4
    ctx->pc = 0x40aa20u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967292));
    // 0x40aa24: 0x26d6fffc  addiu       $s6, $s6, -0x4
    ctx->pc = 0x40aa24u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967292));
    // 0x40aa28: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x40aa28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x40aa2c: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x40aa2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x40aa30: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x40aa30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x40aa34: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x40aa34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x40aa38: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x40AA38u;
    {
        const bool branch_taken_0x40aa38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x40AA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40AA38u;
        // 0x40aa3c: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40aa38) {
            ctx->pc = 0x40AAB8u;
            goto label_40aab8;
        }
    }
    ctx->pc = 0x40AA40u;
    // 0x40aa40: 0x8ca3fff8  lw          $v1, -0x8($a1)
    ctx->pc = 0x40aa40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967288)));
    // 0x40aa44: 0x26b5fffc  addiu       $s5, $s5, -0x4
    ctx->pc = 0x40aa44u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967292));
    // 0x40aa48: 0x26d6fffc  addiu       $s6, $s6, -0x4
    ctx->pc = 0x40aa48u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967292));
    // 0x40aa4c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x40aa4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x40aa50: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x40aa50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x40aa54: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x40aa54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x40aa58: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x40aa58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x40aa5c: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x40AA5Cu;
    {
        const bool branch_taken_0x40aa5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x40AA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40AA5Cu;
        // 0x40aa60: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40aa5c) {
            ctx->pc = 0x40AAB8u;
            goto label_40aab8;
        }
    }
    ctx->pc = 0x40AA64u;
    // 0x40aa64: 0x8ca3fff4  lw          $v1, -0xC($a1)
    ctx->pc = 0x40aa64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967284)));
    // 0x40aa68: 0x26b5fffc  addiu       $s5, $s5, -0x4
    ctx->pc = 0x40aa68u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967292));
    // 0x40aa6c: 0x26d6fffc  addiu       $s6, $s6, -0x4
    ctx->pc = 0x40aa6cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967292));
    // 0x40aa70: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x40aa70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x40aa74: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x40aa74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x40aa78: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x40aa78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x40aa7c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x40aa7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x40aa80: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x40AA80u;
    {
        const bool branch_taken_0x40aa80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x40AA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40AA80u;
        // 0x40aa84: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40aa80) {
            ctx->pc = 0x40AAB8u;
            goto label_40aab8;
        }
    }
    ctx->pc = 0x40AA88u;
    // 0x40aa88: 0x24a5fff0  addiu       $a1, $a1, -0x10
    ctx->pc = 0x40aa88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967280));
    // 0x40aa8c: 0x26b5fffc  addiu       $s5, $s5, -0x4
    ctx->pc = 0x40aa8cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967292));
    // 0x40aa90: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x40aa90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x40aa94: 0x26d6fffc  addiu       $s6, $s6, -0x4
    ctx->pc = 0x40aa94u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967292));
    // 0x40aa98: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x40aa98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x40aa9c: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x40aa9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x40aaa0: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x40aaa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x40aaa4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x40aaa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x40aaa8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x40AAA8u;
    {
        const bool branch_taken_0x40aaa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x40AAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40AAA8u;
        // 0x40aaac: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40aaa8) {
            ctx->pc = 0x40AAB8u;
            goto label_40aab8;
        }
    }
    ctx->pc = 0x40AAB0u;
    // 0x40aab0: 0x5660ffdb  bnel        $s3, $zero, . + 4 + (-0x25 << 2)
    ctx->pc = 0x40AAB0u;
    {
        const bool branch_taken_0x40aab0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x40aab0) {
            ctx->pc = 0x40AAB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x40AAB0u;
            // 0x40aab4: 0x8ca3fffc  lw          $v1, -0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967292)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x40AA20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_40aa20;
        }
    }
    ctx->pc = 0x40AAB8u;
label_40aab8:
    // 0x40aab8: 0x26b5fffc  addiu       $s5, $s5, -0x4
    ctx->pc = 0x40aab8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967292));
label_40aabc:
    // 0x40aabc: 0x26d6fffc  addiu       $s6, $s6, -0x4
    ctx->pc = 0x40aabcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967292));
    // 0x40aac0: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x40aac0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_40aac4:
    // 0x40aac4: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x40aac4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40aac8: 0x26b50004  addiu       $s5, $s5, 0x4
    ctx->pc = 0x40aac8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    // 0x40aacc: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x40aaccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x40aad0: 0x1660fedd  bnez        $s3, . + 4 + (-0x123 << 2)
    ctx->pc = 0x40AAD0u;
    {
        const bool branch_taken_0x40aad0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x40AAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40AAD0u;
        // 0x40aad4: 0x26d60004  addiu       $s6, $s6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40aad0) {
            ctx->pc = 0x40A648u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_40a648;
        }
    }
    ctx->pc = 0x40AAD8u;
label_40aad8:
    // 0x40aad8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x40aad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x40aadc: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x40aadcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x40aae0: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x40aae0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x40aae4: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x40aae4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x40aae8: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x40aae8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x40aaec: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x40aaecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x40aaf0: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x40aaf0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x40aaf4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x40aaf4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x40aaf8: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x40aaf8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x40aafc: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x40aafcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x40ab00: 0x3e00008  jr          $ra
    ctx->pc = 0x40AB00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40AB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40AB00u;
        // 0x40ab04: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40AB00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x40AB08u;
}
