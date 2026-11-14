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

// Function: sub_003E02D0
// Address: 0x3e02d0 - 0x3e0af8
void sub_003E02D0_0x3e02d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E02D0_0x3e02d0");
#endif

    switch (ctx->pc) {
        case 0x3e032cu: goto label_3e032c;
        case 0x3e0370u: goto label_3e0370;
        case 0x3e0418u: goto label_3e0418;
        case 0x3e04d0u: goto label_3e04d0;
        case 0x3e05b8u: goto label_3e05b8;
        case 0x3e062cu: goto label_3e062c;
        case 0x3e06f8u: goto label_3e06f8;
        case 0x3e0848u: goto label_3e0848;
        case 0x3e0908u: goto label_3e0908;
        default: break;
    }

    ctx->pc = 0x3e02d0u;

    // 0x3e02d0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x3e02d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x3e02d4: 0x8d2f0000  lw          $t7, 0x0($t1)
    ctx->pc = 0x3e02d4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x3e02d8: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x3e02d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x3e02dc: 0x7fbe0000  sq          $fp, 0x0($sp)
    ctx->pc = 0x3e02dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 30));
    // 0x3e02e0: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x3e02e0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e02e4: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x3e02e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x3e02e8: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x3e02e8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e02ec: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x3e02ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x3e02f0: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x3e02f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x3e02f4: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x3e02f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x3e02f8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3e02f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x3e02fc: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x3e02fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x3e0300: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x3e0300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
    // 0x3e0304: 0x8d0a0034  lw          $t2, 0x34($t0)
    ctx->pc = 0x3e0304u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 52)));
    // 0x3e0308: 0x8d180038  lw          $t8, 0x38($t0)
    ctx->pc = 0x3e0308u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 56)));
    // 0x3e030c: 0x8d390004  lw          $t9, 0x4($t1)
    ctx->pc = 0x3e030cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x3e0310: 0x30a102b  sltu        $v0, $t8, $t2
    ctx->pc = 0x3e0310u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 24) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x3e0314: 0xdd0d0020  ld          $t5, 0x20($t0)
    ctx->pc = 0x3e0314u;
    SET_GPR_U64(ctx, 13, READ64(ADD32(GPR_U32(ctx, 8), 32)));
    // 0x3e0318: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3E0318u;
    {
        const bool branch_taken_0x3e0318 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E031Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0318u;
        // 0x3e031c: 0x8d0c001c  lw          $t4, 0x1C($t0) (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0318) {
            ctx->pc = 0x3E0340u;
            goto label_3e0340;
        }
    }
    ctx->pc = 0x3E0320u;
    // 0x3e0320: 0x1581023  subu        $v0, $t2, $t8
    ctx->pc = 0x3e0320u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 24)));
    // 0x3e0324: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3E0324u;
    {
        const bool branch_taken_0x3e0324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E0328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0324u;
        // 0x3e0328: 0x2450ffff  addiu       $s0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0324) {
            ctx->pc = 0x3E0348u;
            goto label_3e0348;
        }
    }
    ctx->pc = 0x3E032Cu;
label_3e032c:
    // 0x3e032c: 0x8d240004  lw          $a0, 0x4($t1)
    ctx->pc = 0x3e032cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x3e0330: 0xc38c2  srl         $a3, $t4, 3
    ctx->pc = 0x3e0330u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 12), 3));
    // 0x3e0334: 0xfd0d0020  sd          $t5, 0x20($t0)
    ctx->pc = 0x3e0334u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 32), GPR_U64(ctx, 13));
    // 0x3e0338: 0x100001d3  b           . + 4 + (0x1D3 << 2)
    ctx->pc = 0x3E0338u;
    {
        const bool branch_taken_0x3e0338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E033Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0338u;
        // 0x3e033c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0338) {
            ctx->pc = 0x3E0A88u;
            goto label_3e0a88;
        }
    }
    ctx->pc = 0x3E0340u;
label_3e0340:
    // 0x3e0340: 0x8d020030  lw          $v0, 0x30($t0)
    ctx->pc = 0x3e0340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 48)));
    // 0x3e0344: 0x588023  subu        $s0, $v0, $t8
    ctx->pc = 0x3e0344u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 24)));
label_3e0348:
    // 0x3e0348: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x3e0348u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3e034c: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x3e034cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x3e0350: 0x2442c500  addiu       $v0, $v0, -0x3B00
    ctx->pc = 0x3e0350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952192));
    // 0x3e0354: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x3e0354u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x3e0358: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x3e0358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3e035c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3e035cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3e0360: 0x8c770000  lw          $s7, 0x0($v1)
    ctx->pc = 0x3e0360u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3e0364: 0x300382d  daddu       $a3, $t8, $zero
    ctx->pc = 0x3e0364u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e0368: 0x8c950000  lw          $s5, 0x0($a0)
    ctx->pc = 0x3e0368u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3e036c: 0x2d820014  sltiu       $v0, $t4, 0x14
    ctx->pc = 0x3e036cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
label_3e0370:
    // 0x3e0370: 0x1040003e  beqz        $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x3E0370u;
    {
        const bool branch_taken_0x3e0370 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E0374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0370u;
        // 0x3e0374: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0370) {
            ctx->pc = 0x3E046Cu;
            goto label_3e046c;
        }
    }
    ctx->pc = 0x3E0378u;
    // 0x3e0378: 0x1e0282d  daddu       $a1, $t7, $zero
    ctx->pc = 0x3e0378u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e037c: 0x4c1023  subu        $v0, $v0, $t4
    ctx->pc = 0x3e037cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x3e0380: 0x29830014  slti        $v1, $t4, 0x14
    ctx->pc = 0x3e0380u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 12) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x3e0384: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x3E0384u;
    {
        const bool branch_taken_0x3e0384 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E0388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0384u;
        // 0x3e0388: 0x3044001f  andi        $a0, $v0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0384) {
            ctx->pc = 0x3E03ECu;
            goto label_3e03ec;
        }
    }
    ctx->pc = 0x3E038Cu;
    // 0x3e038c: 0x10800020  beqz        $a0, . + 4 + (0x20 << 2)
    ctx->pc = 0x3E038Cu;
    {
        const bool branch_taken_0x3e038c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E0390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E038Cu;
        // 0x3e0390: 0x28820009  slti        $v0, $a0, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e038c) {
            ctx->pc = 0x3E0410u;
            goto label_3e0410;
        }
    }
    ctx->pc = 0x3E0394u;
    // 0x3e0394: 0x54400016  bnel        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x3E0394u;
    {
        const bool branch_taken_0x3e0394 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e0394) {
            ctx->pc = 0x3E0398u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E0394u;
            // 0x3e0398: 0x90a20000  lbu         $v0, 0x0($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E03F0u;
            goto label_3e03f0;
        }
    }
    ctx->pc = 0x3E039Cu;
    // 0x3e039c: 0x28820011  slti        $v0, $a0, 0x11
    ctx->pc = 0x3e039cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x3e03a0: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x3E03A0u;
    {
        const bool branch_taken_0x3e03a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e03a0) {
            ctx->pc = 0x3E03A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E03A0u;
            // 0x3e03a4: 0x90a20000  lbu         $v0, 0x0($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E03D4u;
            goto label_3e03d4;
        }
    }
    ctx->pc = 0x3E03A8u;
    // 0x3e03a8: 0x28820019  slti        $v0, $a0, 0x19
    ctx->pc = 0x3e03a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)25) ? 1 : 0);
    // 0x3e03ac: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x3E03ACu;
    {
        const bool branch_taken_0x3e03ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E03B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E03ACu;
        // 0x3e03b0: 0x25e20001  addiu       $v0, $t7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e03ac) {
            ctx->pc = 0x3E0410u;
            goto label_3e0410;
        }
    }
    ctx->pc = 0x3E03B4u;
    // 0x3e03b4: 0x91e30000  lbu         $v1, 0x0($t7)
    ctx->pc = 0x3e03b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x3e03b8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3e03b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e03bc: 0x2739ffff  addiu       $t9, $t9, -0x1
    ctx->pc = 0x3e03bcu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 4294967295));
    // 0x3e03c0: 0x1831814  dsllv       $v1, $v1, $t4
    ctx->pc = 0x3e03c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 12) & 0x3F));
    // 0x3e03c4: 0xa0782d  daddu       $t7, $a1, $zero
    ctx->pc = 0x3e03c4u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e03c8: 0x1a36825  or          $t5, $t5, $v1
    ctx->pc = 0x3e03c8u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | GPR_U64(ctx, 3));
    // 0x3e03cc: 0x258c0008  addiu       $t4, $t4, 0x8
    ctx->pc = 0x3e03ccu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 8));
    // 0x3e03d0: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3e03d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_3e03d4:
    // 0x3e03d4: 0x2739ffff  addiu       $t9, $t9, -0x1
    ctx->pc = 0x3e03d4u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 4294967295));
    // 0x3e03d8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3e03d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3e03dc: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x3e03dcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x3e03e0: 0x1821014  dsllv       $v0, $v0, $t4
    ctx->pc = 0x3e03e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 12) & 0x3F));
    // 0x3e03e4: 0x1a26825  or          $t5, $t5, $v0
    ctx->pc = 0x3e03e4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | GPR_U64(ctx, 2));
    // 0x3e03e8: 0x258c0008  addiu       $t4, $t4, 0x8
    ctx->pc = 0x3e03e8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 8));
label_3e03ec:
    // 0x3e03ec: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3e03ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_3e03f0:
    // 0x3e03f0: 0x2739ffff  addiu       $t9, $t9, -0x1
    ctx->pc = 0x3e03f0u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 4294967295));
    // 0x3e03f4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3e03f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3e03f8: 0x1821014  dsllv       $v0, $v0, $t4
    ctx->pc = 0x3e03f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 12) & 0x3F));
    // 0x3e03fc: 0x258c0008  addiu       $t4, $t4, 0x8
    ctx->pc = 0x3e03fcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 8));
    // 0x3e0400: 0x1a26825  or          $t5, $t5, $v0
    ctx->pc = 0x3e0400u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | GPR_U64(ctx, 2));
    // 0x3e0404: 0x2d820014  sltiu       $v0, $t4, 0x14
    ctx->pc = 0x3e0404u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
    // 0x3e0408: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x3E0408u;
    {
        const bool branch_taken_0x3e0408 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E040Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0408u;
        // 0x3e040c: 0x25ef0001  addiu       $t7, $t7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0408) {
            ctx->pc = 0x3E046Cu;
            goto label_3e046c;
        }
    }
    ctx->pc = 0x3E0410u;
label_3e0410:
    // 0x3e0410: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x3e0410u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e0414: 0x0  nop
    ctx->pc = 0x3e0414u;
    // NOP
label_3e0418:
    // 0x3e0418: 0x91420000  lbu         $v0, 0x0($t2)
    ctx->pc = 0x3e0418u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x3e041c: 0x25830008  addiu       $v1, $t4, 0x8
    ctx->pc = 0x3e041cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), 8));
    // 0x3e0420: 0x91440001  lbu         $a0, 0x1($t2)
    ctx->pc = 0x3e0420u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 1)));
    // 0x3e0424: 0x25860010  addiu       $a2, $t4, 0x10
    ctx->pc = 0x3e0424u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 12), 16));
    // 0x3e0428: 0x1821014  dsllv       $v0, $v0, $t4
    ctx->pc = 0x3e0428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 12) & 0x3F));
    // 0x3e042c: 0x91450002  lbu         $a1, 0x2($t2)
    ctx->pc = 0x3e042cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 2)));
    // 0x3e0430: 0x642014  dsllv       $a0, $a0, $v1
    ctx->pc = 0x3e0430u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (GPR_U32(ctx, 3) & 0x3F));
    // 0x3e0434: 0x1a26825  or          $t5, $t5, $v0
    ctx->pc = 0x3e0434u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | GPR_U64(ctx, 2));
    // 0x3e0438: 0x91430003  lbu         $v1, 0x3($t2)
    ctx->pc = 0x3e0438u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 3)));
    // 0x3e043c: 0x25820018  addiu       $v0, $t4, 0x18
    ctx->pc = 0x3e043cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), 24));
    // 0x3e0440: 0xc52814  dsllv       $a1, $a1, $a2
    ctx->pc = 0x3e0440u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (GPR_U32(ctx, 6) & 0x3F));
    // 0x3e0444: 0x1a46825  or          $t5, $t5, $a0
    ctx->pc = 0x3e0444u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | GPR_U64(ctx, 4));
    // 0x3e0448: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x3e0448u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x3e044c: 0x1a56825  or          $t5, $t5, $a1
    ctx->pc = 0x3e044cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | GPR_U64(ctx, 5));
    // 0x3e0450: 0x258c0020  addiu       $t4, $t4, 0x20
    ctx->pc = 0x3e0450u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 32));
    // 0x3e0454: 0x1a36825  or          $t5, $t5, $v1
    ctx->pc = 0x3e0454u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | GPR_U64(ctx, 3));
    // 0x3e0458: 0x2739fffc  addiu       $t9, $t9, -0x4
    ctx->pc = 0x3e0458u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 4294967292));
    // 0x3e045c: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x3e045cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x3e0460: 0x2d820014  sltiu       $v0, $t4, 0x14
    ctx->pc = 0x3e0460u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
    // 0x3e0464: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x3E0464u;
    {
        const bool branch_taken_0x3e0464 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E0468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0464u;
        // 0x3e0468: 0x25ef0004  addiu       $t7, $t7, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0464) {
            ctx->pc = 0x3E0418u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e0418;
        }
    }
    ctx->pc = 0x3E046Cu;
label_3e046c:
    // 0x3e046c: 0xd103c  dsll32      $v0, $t5, 0
    ctx->pc = 0x3e046cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 13) << (32 + 0));
    // 0x3e0470: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3e0470u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3e0474: 0x571024  and         $v0, $v0, $s7
    ctx->pc = 0x3e0474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 23));
    // 0x3e0478: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3e0478u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x3e047c: 0x3c23021  addu        $a2, $fp, $v0
    ctx->pc = 0x3e047cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x3e0480: 0x90cb0000  lbu         $t3, 0x0($a2)
    ctx->pc = 0x3e0480u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3e0484: 0x1560000a  bnez        $t3, . + 4 + (0xA << 2)
    ctx->pc = 0x3E0484u;
    {
        const bool branch_taken_0x3e0484 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E0488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0484u;
        // 0x3e0488: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0484) {
            ctx->pc = 0x3E04B0u;
            goto label_3e04b0;
        }
    }
    ctx->pc = 0x3E048Cu;
    // 0x3e048c: 0x90c30004  lbu         $v1, 0x4($a2)
    ctx->pc = 0x3e048cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x3e0490: 0x27180001  addiu       $t8, $t8, 0x1
    ctx->pc = 0x3e0490u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 1));
    // 0x3e0494: 0x90c20001  lbu         $v0, 0x1($a2)
    ctx->pc = 0x3e0494u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x3e0498: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x3e0498u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x3e049c: 0xa0e30000  sb          $v1, 0x0($a3)
    ctx->pc = 0x3e049cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3e04a0: 0x1826023  subu        $t4, $t4, $v0
    ctx->pc = 0x3e04a0u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x3e04a4: 0x4d6816  dsrlv       $t5, $t5, $v0
    ctx->pc = 0x3e04a4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) >> (GPR_U32(ctx, 2) & 0x3F));
    // 0x3e04a8: 0x1000016e  b           . + 4 + (0x16E << 2)
    ctx->pc = 0x3E04A8u;
    {
        const bool branch_taken_0x3e04a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E04ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E04A8u;
        // 0x3e04ac: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e04a8) {
            ctx->pc = 0x3E0A64u;
            goto label_3e0a64;
        }
    }
    ctx->pc = 0x3E04B0u;
label_3e04b0:
    // 0x3e04b0: 0x3c12005e  lui         $s2, 0x5E
    ctx->pc = 0x3e04b0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)94 << 16));
    // 0x3e04b4: 0x244ec500  addiu       $t6, $v0, -0x3B00
    ctx->pc = 0x3e04b4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952192));
    // 0x3e04b8: 0x3c130060  lui         $s3, 0x60
    ctx->pc = 0x3e04b8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)96 << 16));
    // 0x3e04bc: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x3e04bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x3e04c0: 0x300502d  daddu       $t2, $t8, $zero
    ctx->pc = 0x3e04c0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e04c4: 0x2451d880  addiu       $s1, $v0, -0x2780
    ctx->pc = 0x3e04c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957184));
    // 0x3e04c8: 0x90c20001  lbu         $v0, 0x1($a2)
    ctx->pc = 0x3e04c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x3e04cc: 0x0  nop
    ctx->pc = 0x3e04ccu;
    // NOP
label_3e04d0:
    // 0x3e04d0: 0x31630010  andi        $v1, $t3, 0x10
    ctx->pc = 0x3e04d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)16);
    // 0x3e04d4: 0x1826023  subu        $t4, $t4, $v0
    ctx->pc = 0x3e04d4u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x3e04d8: 0x10600139  beqz        $v1, . + 4 + (0x139 << 2)
    ctx->pc = 0x3E04D8u;
    {
        const bool branch_taken_0x3e04d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E04DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E04D8u;
        // 0x3e04dc: 0x4d6816  dsrlv       $t5, $t5, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) >> (GPR_U32(ctx, 2) & 0x3F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e04d8) {
            ctx->pc = 0x3E09C0u;
            goto label_3e09c0;
        }
    }
    ctx->pc = 0x3E04E0u;
    // 0x3e04e0: 0x316b000f  andi        $t3, $t3, 0xF
    ctx->pc = 0x3e04e0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)15);
    // 0x3e04e4: 0xd183c  dsll32      $v1, $t5, 0
    ctx->pc = 0x3e04e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 13) << (32 + 0));
    // 0x3e04e8: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x3e04e8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x3e04ec: 0xb1080  sll         $v0, $t3, 2
    ctx->pc = 0x3e04ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
    // 0x3e04f0: 0x8cc50004  lw          $a1, 0x4($a2)
    ctx->pc = 0x3e04f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x3e04f4: 0x4e1021  addu        $v0, $v0, $t6
    ctx->pc = 0x3e04f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 14)));
    // 0x3e04f8: 0x18b6023  subu        $t4, $t4, $t3
    ctx->pc = 0x3e04f8u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 11)));
    // 0x3e04fc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3e04fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3e0500: 0x16d6816  dsrlv       $t5, $t5, $t3
    ctx->pc = 0x3e0500u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) >> (GPR_U32(ctx, 11) & 0x3F));
    // 0x3e0504: 0x2d82000f  sltiu       $v0, $t4, 0xF
    ctx->pc = 0x3e0504u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)(int64_t)(int32_t)15) ? 1 : 0);
    // 0x3e0508: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x3e0508u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x3e050c: 0x1040003f  beqz        $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x3E050Cu;
    {
        const bool branch_taken_0x3e050c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E0510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E050Cu;
        // 0x3e0510: 0xa37021  addu        $t6, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e050c) {
            ctx->pc = 0x3E060Cu;
            goto label_3e060c;
        }
    }
    ctx->pc = 0x3E0514u;
    // 0x3e0514: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x3e0514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x3e0518: 0x1e0282d  daddu       $a1, $t7, $zero
    ctx->pc = 0x3e0518u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e051c: 0x4c1023  subu        $v0, $v0, $t4
    ctx->pc = 0x3e051cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x3e0520: 0x2983000f  slti        $v1, $t4, 0xF
    ctx->pc = 0x3e0520u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 12) < (int64_t)(int32_t)15) ? 1 : 0);
    // 0x3e0524: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x3E0524u;
    {
        const bool branch_taken_0x3e0524 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E0528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0524u;
        // 0x3e0528: 0x3044001f  andi        $a0, $v0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0524) {
            ctx->pc = 0x3E058Cu;
            goto label_3e058c;
        }
    }
    ctx->pc = 0x3E052Cu;
    // 0x3e052c: 0x10800020  beqz        $a0, . + 4 + (0x20 << 2)
    ctx->pc = 0x3E052Cu;
    {
        const bool branch_taken_0x3e052c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E0530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E052Cu;
        // 0x3e0530: 0x28820009  slti        $v0, $a0, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e052c) {
            ctx->pc = 0x3E05B0u;
            goto label_3e05b0;
        }
    }
    ctx->pc = 0x3E0534u;
    // 0x3e0534: 0x54400016  bnel        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x3E0534u;
    {
        const bool branch_taken_0x3e0534 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e0534) {
            ctx->pc = 0x3E0538u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E0534u;
            // 0x3e0538: 0x90a20000  lbu         $v0, 0x0($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E0590u;
            goto label_3e0590;
        }
    }
    ctx->pc = 0x3E053Cu;
    // 0x3e053c: 0x28820011  slti        $v0, $a0, 0x11
    ctx->pc = 0x3e053cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x3e0540: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x3E0540u;
    {
        const bool branch_taken_0x3e0540 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e0540) {
            ctx->pc = 0x3E0544u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E0540u;
            // 0x3e0544: 0x90a20000  lbu         $v0, 0x0($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E0574u;
            goto label_3e0574;
        }
    }
    ctx->pc = 0x3E0548u;
    // 0x3e0548: 0x28820019  slti        $v0, $a0, 0x19
    ctx->pc = 0x3e0548u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)25) ? 1 : 0);
    // 0x3e054c: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x3E054Cu;
    {
        const bool branch_taken_0x3e054c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E0550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E054Cu;
        // 0x3e0550: 0x25e20001  addiu       $v0, $t7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e054c) {
            ctx->pc = 0x3E05B0u;
            goto label_3e05b0;
        }
    }
    ctx->pc = 0x3E0554u;
    // 0x3e0554: 0x91e30000  lbu         $v1, 0x0($t7)
    ctx->pc = 0x3e0554u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x3e0558: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3e0558u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e055c: 0x2739ffff  addiu       $t9, $t9, -0x1
    ctx->pc = 0x3e055cu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 4294967295));
    // 0x3e0560: 0x1831814  dsllv       $v1, $v1, $t4
    ctx->pc = 0x3e0560u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 12) & 0x3F));
    // 0x3e0564: 0xa0782d  daddu       $t7, $a1, $zero
    ctx->pc = 0x3e0564u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e0568: 0x1a36825  or          $t5, $t5, $v1
    ctx->pc = 0x3e0568u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | GPR_U64(ctx, 3));
    // 0x3e056c: 0x258c0008  addiu       $t4, $t4, 0x8
    ctx->pc = 0x3e056cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 8));
    // 0x3e0570: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3e0570u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_3e0574:
    // 0x3e0574: 0x2739ffff  addiu       $t9, $t9, -0x1
    ctx->pc = 0x3e0574u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 4294967295));
    // 0x3e0578: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3e0578u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3e057c: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x3e057cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x3e0580: 0x1821014  dsllv       $v0, $v0, $t4
    ctx->pc = 0x3e0580u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 12) & 0x3F));
    // 0x3e0584: 0x1a26825  or          $t5, $t5, $v0
    ctx->pc = 0x3e0584u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | GPR_U64(ctx, 2));
    // 0x3e0588: 0x258c0008  addiu       $t4, $t4, 0x8
    ctx->pc = 0x3e0588u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 8));
label_3e058c:
    // 0x3e058c: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3e058cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_3e0590:
    // 0x3e0590: 0x2739ffff  addiu       $t9, $t9, -0x1
    ctx->pc = 0x3e0590u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 4294967295));
    // 0x3e0594: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3e0594u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3e0598: 0x1821014  dsllv       $v0, $v0, $t4
    ctx->pc = 0x3e0598u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 12) & 0x3F));
    // 0x3e059c: 0x258c0008  addiu       $t4, $t4, 0x8
    ctx->pc = 0x3e059cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 8));
    // 0x3e05a0: 0x1a26825  or          $t5, $t5, $v0
    ctx->pc = 0x3e05a0u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | GPR_U64(ctx, 2));
    // 0x3e05a4: 0x2d82000f  sltiu       $v0, $t4, 0xF
    ctx->pc = 0x3e05a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)(int64_t)(int32_t)15) ? 1 : 0);
    // 0x3e05a8: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x3E05A8u;
    {
        const bool branch_taken_0x3e05a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E05ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E05A8u;
        // 0x3e05ac: 0x25ef0001  addiu       $t7, $t7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e05a8) {
            ctx->pc = 0x3E060Cu;
            goto label_3e060c;
        }
    }
    ctx->pc = 0x3E05B0u;
label_3e05b0:
    // 0x3e05b0: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x3e05b0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e05b4: 0x0  nop
    ctx->pc = 0x3e05b4u;
    // NOP
label_3e05b8:
    // 0x3e05b8: 0x91420000  lbu         $v0, 0x0($t2)
    ctx->pc = 0x3e05b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x3e05bc: 0x25830008  addiu       $v1, $t4, 0x8
    ctx->pc = 0x3e05bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), 8));
    // 0x3e05c0: 0x91440001  lbu         $a0, 0x1($t2)
    ctx->pc = 0x3e05c0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 1)));
    // 0x3e05c4: 0x25860010  addiu       $a2, $t4, 0x10
    ctx->pc = 0x3e05c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 12), 16));
    // 0x3e05c8: 0x1821014  dsllv       $v0, $v0, $t4
    ctx->pc = 0x3e05c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 12) & 0x3F));
    // 0x3e05cc: 0x91450002  lbu         $a1, 0x2($t2)
    ctx->pc = 0x3e05ccu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 2)));
    // 0x3e05d0: 0x642014  dsllv       $a0, $a0, $v1
    ctx->pc = 0x3e05d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (GPR_U32(ctx, 3) & 0x3F));
    // 0x3e05d4: 0x1a26825  or          $t5, $t5, $v0
    ctx->pc = 0x3e05d4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | GPR_U64(ctx, 2));
    // 0x3e05d8: 0x91430003  lbu         $v1, 0x3($t2)
    ctx->pc = 0x3e05d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 3)));
    // 0x3e05dc: 0x25820018  addiu       $v0, $t4, 0x18
    ctx->pc = 0x3e05dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), 24));
    // 0x3e05e0: 0xc52814  dsllv       $a1, $a1, $a2
    ctx->pc = 0x3e05e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (GPR_U32(ctx, 6) & 0x3F));
    // 0x3e05e4: 0x1a46825  or          $t5, $t5, $a0
    ctx->pc = 0x3e05e4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | GPR_U64(ctx, 4));
    // 0x3e05e8: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x3e05e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x3e05ec: 0x1a56825  or          $t5, $t5, $a1
    ctx->pc = 0x3e05ecu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | GPR_U64(ctx, 5));
    // 0x3e05f0: 0x258c0020  addiu       $t4, $t4, 0x20
    ctx->pc = 0x3e05f0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 32));
    // 0x3e05f4: 0x1a36825  or          $t5, $t5, $v1
    ctx->pc = 0x3e05f4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | GPR_U64(ctx, 3));
    // 0x3e05f8: 0x2739fffc  addiu       $t9, $t9, -0x4
    ctx->pc = 0x3e05f8u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 4294967292));
    // 0x3e05fc: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x3e05fcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x3e0600: 0x2d82000f  sltiu       $v0, $t4, 0xF
    ctx->pc = 0x3e0600u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)(int64_t)(int32_t)15) ? 1 : 0);
    // 0x3e0604: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x3E0604u;
    {
        const bool branch_taken_0x3e0604 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E0608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0604u;
        // 0x3e0608: 0x25ef0004  addiu       $t7, $t7, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0604) {
            ctx->pc = 0x3E05B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e05b8;
        }
    }
    ctx->pc = 0x3E060Cu;
label_3e060c:
    // 0x3e060c: 0xd103c  dsll32      $v0, $t5, 0
    ctx->pc = 0x3e060cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 13) << (32 + 0));
    // 0x3e0610: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3e0610u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3e0614: 0x266ad868  addiu       $t2, $s3, -0x2798
    ctx->pc = 0x3e0614u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 19), 4294957160));
    // 0x3e0618: 0x551024  and         $v0, $v0, $s5
    ctx->pc = 0x3e0618u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 21));
    // 0x3e061c: 0x2654c500  addiu       $s4, $s2, -0x3B00
    ctx->pc = 0x3e061cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 4294952192));
    // 0x3e0620: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3e0620u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x3e0624: 0x300982d  daddu       $s3, $t8, $zero
    ctx->pc = 0x3e0624u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e0628: 0x2c23021  addu        $a2, $s6, $v0
    ctx->pc = 0x3e0628u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
label_3e062c:
    // 0x3e062c: 0x90cb0000  lbu         $t3, 0x0($a2)
    ctx->pc = 0x3e062cu;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3e0630: 0x90c20001  lbu         $v0, 0x1($a2)
    ctx->pc = 0x3e0630u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x3e0634: 0x31630010  andi        $v1, $t3, 0x10
    ctx->pc = 0x3e0634u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)16);
    // 0x3e0638: 0x1826023  subu        $t4, $t4, $v0
    ctx->pc = 0x3e0638u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x3e063c: 0x106000c2  beqz        $v1, . + 4 + (0xC2 << 2)
    ctx->pc = 0x3E063Cu;
    {
        const bool branch_taken_0x3e063c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E0640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E063Cu;
        // 0x3e0640: 0x4d6816  dsrlv       $t5, $t5, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) >> (GPR_U32(ctx, 2) & 0x3F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e063c) {
            ctx->pc = 0x3E0948u;
            goto label_3e0948;
        }
    }
    ctx->pc = 0x3E0644u;
    // 0x3e0644: 0x316b000f  andi        $t3, $t3, 0xF
    ctx->pc = 0x3e0644u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)15);
    // 0x3e0648: 0x20e8823  subu        $s1, $s0, $t6
    ctx->pc = 0x3e0648u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 14)));
    // 0x3e064c: 0x8cd20004  lw          $s2, 0x4($a2)
    ctx->pc = 0x3e064cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x3e0650: 0x18b102b  sltu        $v0, $t4, $t3
    ctx->pc = 0x3e0650u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x3e0654: 0x1040003d  beqz        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x3E0654u;
    {
        const bool branch_taken_0x3e0654 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E0658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0654u;
        // 0x3e0658: 0x8d10002c  lw          $s0, 0x2C($t0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0654) {
            ctx->pc = 0x3E074Cu;
            goto label_3e074c;
        }
    }
    ctx->pc = 0x3E065Cu;
    // 0x3e065c: 0x16c1823  subu        $v1, $t3, $t4
    ctx->pc = 0x3e065cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 12)));
    // 0x3e0660: 0x1e0202d  daddu       $a0, $t7, $zero
    ctx->pc = 0x3e0660u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e0664: 0x18b102a  slt         $v0, $t4, $t3
    ctx->pc = 0x3e0664u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
    // 0x3e0668: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x3E0668u;
    {
        const bool branch_taken_0x3e0668 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E066Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0668u;
        // 0x3e066c: 0x3063001f  andi        $v1, $v1, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0668) {
            ctx->pc = 0x3E06D0u;
            goto label_3e06d0;
        }
    }
    ctx->pc = 0x3E0670u;
    // 0x3e0670: 0x10600020  beqz        $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x3E0670u;
    {
        const bool branch_taken_0x3e0670 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E0674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0670u;
        // 0x3e0674: 0x28620009  slti        $v0, $v1, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0670) {
            ctx->pc = 0x3E06F4u;
            goto label_3e06f4;
        }
    }
    ctx->pc = 0x3E0678u;
    // 0x3e0678: 0x54400016  bnel        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x3E0678u;
    {
        const bool branch_taken_0x3e0678 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e0678) {
            ctx->pc = 0x3E067Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E0678u;
            // 0x3e067c: 0x90820000  lbu         $v0, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E06D4u;
            goto label_3e06d4;
        }
    }
    ctx->pc = 0x3E0680u;
    // 0x3e0680: 0x28620011  slti        $v0, $v1, 0x11
    ctx->pc = 0x3e0680u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x3e0684: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x3E0684u;
    {
        const bool branch_taken_0x3e0684 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e0684) {
            ctx->pc = 0x3E0688u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E0684u;
            // 0x3e0688: 0x90820000  lbu         $v0, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E06B8u;
            goto label_3e06b8;
        }
    }
    ctx->pc = 0x3E068Cu;
    // 0x3e068c: 0x28620019  slti        $v0, $v1, 0x19
    ctx->pc = 0x3e068cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)25) ? 1 : 0);
    // 0x3e0690: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x3E0690u;
    {
        const bool branch_taken_0x3e0690 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E0694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0690u;
        // 0x3e0694: 0x25e20001  addiu       $v0, $t7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0690) {
            ctx->pc = 0x3E06F4u;
            goto label_3e06f4;
        }
    }
    ctx->pc = 0x3E0698u;
    // 0x3e0698: 0x91e30000  lbu         $v1, 0x0($t7)
    ctx->pc = 0x3e0698u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x3e069c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3e069cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e06a0: 0x2739ffff  addiu       $t9, $t9, -0x1
    ctx->pc = 0x3e06a0u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 4294967295));
    // 0x3e06a4: 0x1831814  dsllv       $v1, $v1, $t4
    ctx->pc = 0x3e06a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 12) & 0x3F));
    // 0x3e06a8: 0x80782d  daddu       $t7, $a0, $zero
    ctx->pc = 0x3e06a8u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e06ac: 0x1a36825  or          $t5, $t5, $v1
    ctx->pc = 0x3e06acu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | GPR_U64(ctx, 3));
    // 0x3e06b0: 0x258c0008  addiu       $t4, $t4, 0x8
    ctx->pc = 0x3e06b0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 8));
    // 0x3e06b4: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x3e06b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_3e06b8:
    // 0x3e06b8: 0x2739ffff  addiu       $t9, $t9, -0x1
    ctx->pc = 0x3e06b8u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 4294967295));
    // 0x3e06bc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3e06bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3e06c0: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x3e06c0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x3e06c4: 0x1821014  dsllv       $v0, $v0, $t4
    ctx->pc = 0x3e06c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 12) & 0x3F));
    // 0x3e06c8: 0x1a26825  or          $t5, $t5, $v0
    ctx->pc = 0x3e06c8u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | GPR_U64(ctx, 2));
    // 0x3e06cc: 0x258c0008  addiu       $t4, $t4, 0x8
    ctx->pc = 0x3e06ccu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 8));
label_3e06d0:
    // 0x3e06d0: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x3e06d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_3e06d4:
    // 0x3e06d4: 0x2739ffff  addiu       $t9, $t9, -0x1
    ctx->pc = 0x3e06d4u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 4294967295));
    // 0x3e06d8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3e06d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3e06dc: 0x1821014  dsllv       $v0, $v0, $t4
    ctx->pc = 0x3e06dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 12) & 0x3F));
    // 0x3e06e0: 0x258c0008  addiu       $t4, $t4, 0x8
    ctx->pc = 0x3e06e0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 8));
    // 0x3e06e4: 0x1a26825  or          $t5, $t5, $v0
    ctx->pc = 0x3e06e4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | GPR_U64(ctx, 2));
    // 0x3e06e8: 0x18b102b  sltu        $v0, $t4, $t3
    ctx->pc = 0x3e06e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x3e06ec: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x3E06ECu;
    {
        const bool branch_taken_0x3e06ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E06F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E06ECu;
        // 0x3e06f0: 0x25ef0001  addiu       $t7, $t7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e06ec) {
            ctx->pc = 0x3E074Cu;
            goto label_3e074c;
        }
    }
    ctx->pc = 0x3E06F4u;
label_3e06f4:
    // 0x3e06f4: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x3e06f4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3e06f8:
    // 0x3e06f8: 0x91420000  lbu         $v0, 0x0($t2)
    ctx->pc = 0x3e06f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x3e06fc: 0x25830008  addiu       $v1, $t4, 0x8
    ctx->pc = 0x3e06fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), 8));
    // 0x3e0700: 0x91440001  lbu         $a0, 0x1($t2)
    ctx->pc = 0x3e0700u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 1)));
    // 0x3e0704: 0x25860010  addiu       $a2, $t4, 0x10
    ctx->pc = 0x3e0704u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 12), 16));
    // 0x3e0708: 0x1821014  dsllv       $v0, $v0, $t4
    ctx->pc = 0x3e0708u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 12) & 0x3F));
    // 0x3e070c: 0x91450002  lbu         $a1, 0x2($t2)
    ctx->pc = 0x3e070cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 2)));
    // 0x3e0710: 0x642014  dsllv       $a0, $a0, $v1
    ctx->pc = 0x3e0710u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (GPR_U32(ctx, 3) & 0x3F));
    // 0x3e0714: 0x1a26825  or          $t5, $t5, $v0
    ctx->pc = 0x3e0714u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | GPR_U64(ctx, 2));
    // 0x3e0718: 0x91430003  lbu         $v1, 0x3($t2)
    ctx->pc = 0x3e0718u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 3)));
    // 0x3e071c: 0x25820018  addiu       $v0, $t4, 0x18
    ctx->pc = 0x3e071cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), 24));
    // 0x3e0720: 0xc52814  dsllv       $a1, $a1, $a2
    ctx->pc = 0x3e0720u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (GPR_U32(ctx, 6) & 0x3F));
    // 0x3e0724: 0x1a46825  or          $t5, $t5, $a0
    ctx->pc = 0x3e0724u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | GPR_U64(ctx, 4));
    // 0x3e0728: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x3e0728u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x3e072c: 0x1a56825  or          $t5, $t5, $a1
    ctx->pc = 0x3e072cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | GPR_U64(ctx, 5));
    // 0x3e0730: 0x258c0020  addiu       $t4, $t4, 0x20
    ctx->pc = 0x3e0730u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 32));
    // 0x3e0734: 0x1a36825  or          $t5, $t5, $v1
    ctx->pc = 0x3e0734u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | GPR_U64(ctx, 3));
    // 0x3e0738: 0x2739fffc  addiu       $t9, $t9, -0x4
    ctx->pc = 0x3e0738u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 4294967292));
    // 0x3e073c: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x3e073cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x3e0740: 0x18b102b  sltu        $v0, $t4, $t3
    ctx->pc = 0x3e0740u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x3e0744: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x3E0744u;
    {
        const bool branch_taken_0x3e0744 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E0748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0744u;
        // 0x3e0748: 0x25ef0004  addiu       $t7, $t7, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0744) {
            ctx->pc = 0x3E06F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e06f8;
        }
    }
    ctx->pc = 0x3E074Cu;
label_3e074c:
    // 0x3e074c: 0xb1080  sll         $v0, $t3, 2
    ctx->pc = 0x3e074cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
    // 0x3e0750: 0xd183c  dsll32      $v1, $t5, 0
    ctx->pc = 0x3e0750u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 13) << (32 + 0));
    // 0x3e0754: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x3e0754u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x3e0758: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x3e0758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x3e075c: 0x3102823  subu        $a1, $t8, $s0
    ctx->pc = 0x3e075cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 24), GPR_U32(ctx, 16)));
    // 0x3e0760: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3e0760u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3e0764: 0x18b6023  subu        $t4, $t4, $t3
    ctx->pc = 0x3e0764u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 11)));
    // 0x3e0768: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x3e0768u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e076c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x3e076cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x3e0770: 0x2432021  addu        $a0, $s2, $v1
    ctx->pc = 0x3e0770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x3e0774: 0xa4102b  sltu        $v0, $a1, $a0
    ctx->pc = 0x3e0774u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x3e0778: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x3E0778u;
    {
        const bool branch_taken_0x3e0778 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E077Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0778u;
        // 0x3e077c: 0x16d6816  dsrlv       $t5, $t5, $t3 (Delay Slot)
        SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) >> (GPR_U32(ctx, 11) & 0x3F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0778) {
            ctx->pc = 0x3E07ACu;
            goto label_3e07ac;
        }
    }
    ctx->pc = 0x3E0780u;
    // 0x3e0780: 0x3042023  subu        $a0, $t8, $a0
    ctx->pc = 0x3e0780u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 24), GPR_U32(ctx, 4)));
    // 0x3e0784: 0x24e70002  addiu       $a3, $a3, 0x2
    ctx->pc = 0x3e0784u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
    // 0x3e0788: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x3e0788u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3e078c: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3e078cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3e0790: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3e0790u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3e0794: 0x25cefffe  addiu       $t6, $t6, -0x2
    ctx->pc = 0x3e0794u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967294));
    // 0x3e0798: 0xa2630000  sb          $v1, 0x0($s3)
    ctx->pc = 0x3e0798u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3e079c: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x3e079cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3e07a0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3e07a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3e07a4: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x3E07A4u;
    {
        const bool branch_taken_0x3e07a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E07A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E07A4u;
        // 0x3e07a8: 0xa2620001  sb          $v0, 0x1($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e07a4) {
            ctx->pc = 0x3E0884u;
            goto label_3e0884;
        }
    }
    ctx->pc = 0x3E07ACu;
label_3e07ac:
    // 0x3e07ac: 0x8d030030  lw          $v1, 0x30($t0)
    ctx->pc = 0x3e07acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 48)));
    // 0x3e07b0: 0x855823  subu        $t3, $a0, $a1
    ctx->pc = 0x3e07b0u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3e07b4: 0x16e102b  sltu        $v0, $t3, $t6
    ctx->pc = 0x3e07b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 14)) ? 1 : 0);
    // 0x3e07b8: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x3E07B8u;
    {
        const bool branch_taken_0x3e07b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E07BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E07B8u;
        // 0x3e07bc: 0x6b2023  subu        $a0, $v1, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e07b8) {
            ctx->pc = 0x3E0884u;
            goto label_3e0884;
        }
    }
    ctx->pc = 0x3E07C0u;
    // 0x3e07c0: 0xb1023  negu        $v0, $t3
    ctx->pc = 0x3e07c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 11)));
    // 0x3e07c4: 0x1cb7023  subu        $t6, $t6, $t3
    ctx->pc = 0x3e07c4u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 11)));
    // 0x3e07c8: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x3e07c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x3e07cc: 0x300282d  daddu       $a1, $t8, $zero
    ctx->pc = 0x3e07ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e07d0: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x3E07D0u;
    {
        const bool branch_taken_0x3e07d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E07D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E07D0u;
        // 0x3e07d4: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e07d0) {
            ctx->pc = 0x3E0844u;
            goto label_3e0844;
        }
    }
    ctx->pc = 0x3E07D8u;
    // 0x3e07d8: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x3e07d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3e07dc: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x3E07DCu;
    {
        const bool branch_taken_0x3e07dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E07E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E07DCu;
        // 0x3e07e0: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e07dc) {
            ctx->pc = 0x3E0824u;
            goto label_3e0824;
        }
    }
    ctx->pc = 0x3E07E4u;
    // 0x3e07e4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3E07E4u;
    {
        const bool branch_taken_0x3e07e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E07E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E07E4u;
        // 0x3e07e8: 0x27020001  addiu       $v0, $t8, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 24), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e07e4) {
            ctx->pc = 0x3E0808u;
            goto label_3e0808;
        }
    }
    ctx->pc = 0x3E07ECu;
    // 0x3e07ec: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x3e07ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3e07f0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3e07f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e07f4: 0x24860001  addiu       $a2, $a0, 0x1
    ctx->pc = 0x3e07f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3e07f8: 0xa3030000  sb          $v1, 0x0($t8)
    ctx->pc = 0x3e07f8u;
    WRITE8(ADD32(GPR_U32(ctx, 24), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3e07fc: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3e07fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x3e0800: 0xa0c02d  daddu       $t8, $a1, $zero
    ctx->pc = 0x3e0800u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e0804: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x3e0804u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
label_3e0808:
    // 0x3e0808: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x3e0808u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3e080c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3e080cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x3e0810: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3e0810u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3e0814: 0x27180001  addiu       $t8, $t8, 0x1
    ctx->pc = 0x3e0814u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 1));
    // 0x3e0818: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x3e0818u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e081c: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x3e081cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x3e0820: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3e0820u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_3e0824:
    // 0x3e0824: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x3e0824u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3e0828: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3e0828u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x3e082c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3e082cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3e0830: 0x27180001  addiu       $t8, $t8, 0x1
    ctx->pc = 0x3e0830u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 1));
    // 0x3e0834: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x3e0834u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e0838: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x3e0838u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x3e083c: 0x11600010  beqz        $t3, . + 4 + (0x10 << 2)
    ctx->pc = 0x3E083Cu;
    {
        const bool branch_taken_0x3e083c = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E0840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E083Cu;
        // 0x3e0840: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e083c) {
            ctx->pc = 0x3E0880u;
            goto label_3e0880;
        }
    }
    ctx->pc = 0x3E0844u;
label_3e0844:
    // 0x3e0844: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x3e0844u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3e0848:
    // 0x3e0848: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x3e0848u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3e084c: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x3e084cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x3e0850: 0x27180004  addiu       $t8, $t8, 0x4
    ctx->pc = 0x3e0850u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 4));
    // 0x3e0854: 0x256bfffc  addiu       $t3, $t3, -0x4
    ctx->pc = 0x3e0854u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967292));
    // 0x3e0858: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x3e0858u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3e085c: 0x90820001  lbu         $v0, 0x1($a0)
    ctx->pc = 0x3e085cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x3e0860: 0xa0a20001  sb          $v0, 0x1($a1)
    ctx->pc = 0x3e0860u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e0864: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x3e0864u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x3e0868: 0xa0a30002  sb          $v1, 0x2($a1)
    ctx->pc = 0x3e0868u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x3e086c: 0x90820003  lbu         $v0, 0x3($a0)
    ctx->pc = 0x3e086cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x3e0870: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x3e0870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x3e0874: 0xa0a20003  sb          $v0, 0x3($a1)
    ctx->pc = 0x3e0874u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e0878: 0x1560fff3  bnez        $t3, . + 4 + (-0xD << 2)
    ctx->pc = 0x3E0878u;
    {
        const bool branch_taken_0x3e0878 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E087Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0878u;
        // 0x3e087c: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0878) {
            ctx->pc = 0x3E0848u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e0848;
        }
    }
    ctx->pc = 0x3E0880u;
label_3e0880:
    // 0x3e0880: 0x8d04002c  lw          $a0, 0x2C($t0)
    ctx->pc = 0x3e0880u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 44)));
label_3e0884:
    // 0x3e0884: 0xe1023  negu        $v0, $t6
    ctx->pc = 0x3e0884u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 14)));
    // 0x3e0888: 0x300282d  daddu       $a1, $t8, $zero
    ctx->pc = 0x3e0888u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e088c: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x3e088cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x3e0890: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x3E0890u;
    {
        const bool branch_taken_0x3e0890 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E0894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0890u;
        // 0x3e0894: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0890) {
            ctx->pc = 0x3E0904u;
            goto label_3e0904;
        }
    }
    ctx->pc = 0x3E0898u;
    // 0x3e0898: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x3e0898u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3e089c: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x3E089Cu;
    {
        const bool branch_taken_0x3e089c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E08A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E089Cu;
        // 0x3e08a0: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e089c) {
            ctx->pc = 0x3E08E4u;
            goto label_3e08e4;
        }
    }
    ctx->pc = 0x3E08A4u;
    // 0x3e08a4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3E08A4u;
    {
        const bool branch_taken_0x3e08a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E08A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E08A4u;
        // 0x3e08a8: 0x27020001  addiu       $v0, $t8, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 24), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e08a4) {
            ctx->pc = 0x3E08C8u;
            goto label_3e08c8;
        }
    }
    ctx->pc = 0x3E08ACu;
    // 0x3e08ac: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x3e08acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3e08b0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3e08b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e08b4: 0x24860001  addiu       $a2, $a0, 0x1
    ctx->pc = 0x3e08b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3e08b8: 0xa3030000  sb          $v1, 0x0($t8)
    ctx->pc = 0x3e08b8u;
    WRITE8(ADD32(GPR_U32(ctx, 24), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3e08bc: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3e08bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x3e08c0: 0xa0c02d  daddu       $t8, $a1, $zero
    ctx->pc = 0x3e08c0u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e08c4: 0x25ceffff  addiu       $t6, $t6, -0x1
    ctx->pc = 0x3e08c4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
label_3e08c8:
    // 0x3e08c8: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x3e08c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3e08cc: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3e08ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x3e08d0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3e08d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3e08d4: 0x27180001  addiu       $t8, $t8, 0x1
    ctx->pc = 0x3e08d4u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 1));
    // 0x3e08d8: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x3e08d8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e08dc: 0x25ceffff  addiu       $t6, $t6, -0x1
    ctx->pc = 0x3e08dcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
    // 0x3e08e0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3e08e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_3e08e4:
    // 0x3e08e4: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x3e08e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3e08e8: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3e08e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x3e08ec: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3e08ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3e08f0: 0x27180001  addiu       $t8, $t8, 0x1
    ctx->pc = 0x3e08f0u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 1));
    // 0x3e08f4: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x3e08f4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e08f8: 0x25ceffff  addiu       $t6, $t6, -0x1
    ctx->pc = 0x3e08f8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
    // 0x3e08fc: 0x11c00059  beqz        $t6, . + 4 + (0x59 << 2)
    ctx->pc = 0x3E08FCu;
    {
        const bool branch_taken_0x3e08fc = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E0900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E08FCu;
        // 0x3e0900: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e08fc) {
            ctx->pc = 0x3E0A64u;
            goto label_3e0a64;
        }
    }
    ctx->pc = 0x3E0904u;
label_3e0904:
    // 0x3e0904: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x3e0904u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3e0908:
    // 0x3e0908: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x3e0908u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3e090c: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x3e090cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x3e0910: 0x27180004  addiu       $t8, $t8, 0x4
    ctx->pc = 0x3e0910u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 4));
    // 0x3e0914: 0x25cefffc  addiu       $t6, $t6, -0x4
    ctx->pc = 0x3e0914u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967292));
    // 0x3e0918: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x3e0918u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3e091c: 0x90820001  lbu         $v0, 0x1($a0)
    ctx->pc = 0x3e091cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x3e0920: 0xa0a20001  sb          $v0, 0x1($a1)
    ctx->pc = 0x3e0920u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e0924: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x3e0924u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x3e0928: 0xa0a30002  sb          $v1, 0x2($a1)
    ctx->pc = 0x3e0928u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x3e092c: 0x90820003  lbu         $v0, 0x3($a0)
    ctx->pc = 0x3e092cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x3e0930: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x3e0930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x3e0934: 0xa0a20003  sb          $v0, 0x3($a1)
    ctx->pc = 0x3e0934u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e0938: 0x15c0fff3  bnez        $t6, . + 4 + (-0xD << 2)
    ctx->pc = 0x3E0938u;
    {
        const bool branch_taken_0x3e0938 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E093Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0938u;
        // 0x3e093c: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0938) {
            ctx->pc = 0x3E0908u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e0908;
        }
    }
    ctx->pc = 0x3E0940u;
    // 0x3e0940: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x3E0940u;
    {
        const bool branch_taken_0x3e0940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E0944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0940u;
        // 0x3e0944: 0x2e020102  sltiu       $v0, $s0, 0x102 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)258) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0940) {
            ctx->pc = 0x3E0A68u;
            goto label_3e0a68;
        }
    }
    ctx->pc = 0x3E0948u;
label_3e0948:
    // 0x3e0948: 0x31620040  andi        $v0, $t3, 0x40
    ctx->pc = 0x3e0948u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)64);
    // 0x3e094c: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x3E094Cu;
    {
        const bool branch_taken_0x3e094c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e094c) {
            ctx->pc = 0x3E0950u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E094Cu;
            // 0x3e0950: 0x8d230004  lw          $v1, 0x4($t1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E0984u;
            goto label_3e0984;
        }
    }
    ctx->pc = 0x3E0954u;
    // 0x3e0954: 0xb1080  sll         $v0, $t3, 2
    ctx->pc = 0x3e0954u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
    // 0x3e0958: 0x8cc40004  lw          $a0, 0x4($a2)
    ctx->pc = 0x3e0958u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x3e095c: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x3e095cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x3e0960: 0xd183c  dsll32      $v1, $t5, 0
    ctx->pc = 0x3e0960u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 13) << (32 + 0));
    // 0x3e0964: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x3e0964u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x3e0968: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x3e0968u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3e096c: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x3e096cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x3e0970: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x3e0970u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x3e0974: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x3e0974u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x3e0978: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x3e0978u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x3e097c: 0x1000ff2b  b           . + 4 + (-0xD5 << 2)
    ctx->pc = 0x3E097Cu;
    {
        const bool branch_taken_0x3e097c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E0980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E097Cu;
        // 0x3e0980: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e097c) {
            ctx->pc = 0x3E062Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e062c;
        }
    }
    ctx->pc = 0x3E0984u;
label_3e0984:
    // 0x3e0984: 0xc28c2  srl         $a1, $t4, 3
    ctx->pc = 0x3e0984u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 12), 3));
    // 0x3e0988: 0xfd0d0020  sd          $t5, 0x20($t0)
    ctx->pc = 0x3e0988u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 32), GPR_U64(ctx, 13));
    // 0x3e098c: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x3e098cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x3e0990: 0x797023  subu        $t6, $v1, $t9
    ctx->pc = 0x3e0990u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 25)));
    // 0x3e0994: 0x8d240000  lw          $a0, 0x0($t1)
    ctx->pc = 0x3e0994u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x3e0998: 0xae182b  sltu        $v1, $a1, $t6
    ctx->pc = 0x3e0998u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 14)) ? 1 : 0);
    // 0x3e099c: 0xdd260008  ld          $a2, 0x8($t1)
    ctx->pc = 0x3e099cu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x3e09a0: 0xa3700b  movn        $t6, $a1, $v1
    ctx->pc = 0x3e09a0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 14, GPR_VEC(ctx, 5));
    // 0x3e09a4: 0xad2a0020  sw          $t2, 0x20($t1)
    ctx->pc = 0x3e09a4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 32), GPR_U32(ctx, 10));
    // 0x3e09a8: 0x1ee7823  subu        $t7, $t7, $t6
    ctx->pc = 0x3e09a8u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x3e09ac: 0xe18c0  sll         $v1, $t6, 3
    ctx->pc = 0x3e09acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 14), 3));
    // 0x3e09b0: 0x1836023  subu        $t4, $t4, $v1
    ctx->pc = 0x3e09b0u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
    // 0x3e09b4: 0x1e42023  subu        $a0, $t7, $a0
    ctx->pc = 0x3e09b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 4)));
    // 0x3e09b8: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x3E09B8u;
    {
        const bool branch_taken_0x3e09b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E09BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E09B8u;
        // 0x3e09bc: 0xc4302d  daddu       $a2, $a2, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e09b8) {
            ctx->pc = 0x3E0AB0u;
            goto label_3e0ab0;
        }
    }
    ctx->pc = 0x3E09C0u;
label_3e09c0:
    // 0x3e09c0: 0x31620040  andi        $v0, $t3, 0x40
    ctx->pc = 0x3e09c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)64);
    // 0x3e09c4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x3E09C4u;
    {
        const bool branch_taken_0x3e09c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E09C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E09C4u;
        // 0x3e09c8: 0x31620020  andi        $v0, $t3, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e09c4) {
            ctx->pc = 0x3E0A10u;
            goto label_3e0a10;
        }
    }
    ctx->pc = 0x3E09CCu;
    // 0x3e09cc: 0x1440fe57  bnez        $v0, . + 4 + (-0x1A9 << 2)
    ctx->pc = 0x3E09CCu;
    {
        const bool branch_taken_0x3e09cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E09D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E09CCu;
        // 0x3e09d0: 0xc28c2  srl         $a1, $t4, 3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 12), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e09cc) {
            ctx->pc = 0x3E032Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e032c;
        }
    }
    ctx->pc = 0x3E09D4u;
    // 0x3e09d4: 0x8d230004  lw          $v1, 0x4($t1)
    ctx->pc = 0x3e09d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x3e09d8: 0xfd0d0020  sd          $t5, 0x20($t0)
    ctx->pc = 0x3e09d8u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 32), GPR_U64(ctx, 13));
    // 0x3e09dc: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x3e09dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x3e09e0: 0x797023  subu        $t6, $v1, $t9
    ctx->pc = 0x3e09e0u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 25)));
    // 0x3e09e4: 0x8d240000  lw          $a0, 0x0($t1)
    ctx->pc = 0x3e09e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x3e09e8: 0xae182b  sltu        $v1, $a1, $t6
    ctx->pc = 0x3e09e8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 14)) ? 1 : 0);
    // 0x3e09ec: 0xdd260008  ld          $a2, 0x8($t1)
    ctx->pc = 0x3e09ecu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x3e09f0: 0xa3700b  movn        $t6, $a1, $v1
    ctx->pc = 0x3e09f0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 14, GPR_VEC(ctx, 5));
    // 0x3e09f4: 0xad310020  sw          $s1, 0x20($t1)
    ctx->pc = 0x3e09f4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 32), GPR_U32(ctx, 17));
    // 0x3e09f8: 0x1ee7823  subu        $t7, $t7, $t6
    ctx->pc = 0x3e09f8u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x3e09fc: 0xe18c0  sll         $v1, $t6, 3
    ctx->pc = 0x3e09fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 14), 3));
    // 0x3e0a00: 0x1836023  subu        $t4, $t4, $v1
    ctx->pc = 0x3e0a00u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
    // 0x3e0a04: 0x1e42023  subu        $a0, $t7, $a0
    ctx->pc = 0x3e0a04u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 4)));
    // 0x3e0a08: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x3E0A08u;
    {
        const bool branch_taken_0x3e0a08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E0A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0A08u;
        // 0x3e0a0c: 0xc4302d  daddu       $a2, $a2, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0a08) {
            ctx->pc = 0x3E0AB0u;
            goto label_3e0ab0;
        }
    }
    ctx->pc = 0x3E0A10u;
label_3e0a10:
    // 0x3e0a10: 0xb1080  sll         $v0, $t3, 2
    ctx->pc = 0x3e0a10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
    // 0x3e0a14: 0x8cc40004  lw          $a0, 0x4($a2)
    ctx->pc = 0x3e0a14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x3e0a18: 0x4e1021  addu        $v0, $v0, $t6
    ctx->pc = 0x3e0a18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 14)));
    // 0x3e0a1c: 0xd183c  dsll32      $v1, $t5, 0
    ctx->pc = 0x3e0a1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 13) << (32 + 0));
    // 0x3e0a20: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x3e0a20u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x3e0a24: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x3e0a24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3e0a28: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x3e0a28u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x3e0a2c: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x3e0a2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x3e0a30: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x3e0a30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x3e0a34: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x3e0a34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x3e0a38: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x3e0a38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x3e0a3c: 0x90cb0000  lbu         $t3, 0x0($a2)
    ctx->pc = 0x3e0a3cu;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3e0a40: 0x1560fea3  bnez        $t3, . + 4 + (-0x15D << 2)
    ctx->pc = 0x3E0A40u;
    {
        const bool branch_taken_0x3e0a40 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E0A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0A40u;
        // 0x3e0a44: 0x90c20001  lbu         $v0, 0x1($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0a40) {
            ctx->pc = 0x3E04D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e04d0;
        }
    }
    ctx->pc = 0x3E0A48u;
    // 0x3e0a48: 0x90c30004  lbu         $v1, 0x4($a2)
    ctx->pc = 0x3e0a48u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x3e0a4c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3e0a4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x3e0a50: 0x27180001  addiu       $t8, $t8, 0x1
    ctx->pc = 0x3e0a50u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 1));
    // 0x3e0a54: 0xa1430000  sb          $v1, 0x0($t2)
    ctx->pc = 0x3e0a54u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3e0a58: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x3e0a58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x3e0a5c: 0x1826023  subu        $t4, $t4, $v0
    ctx->pc = 0x3e0a5cu;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x3e0a60: 0x4d6816  dsrlv       $t5, $t5, $v0
    ctx->pc = 0x3e0a60u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) >> (GPR_U32(ctx, 2) & 0x3F));
label_3e0a64:
    // 0x3e0a64: 0x2e020102  sltiu       $v0, $s0, 0x102
    ctx->pc = 0x3e0a64u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)258) ? 1 : 0);
label_3e0a68:
    // 0x3e0a68: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3E0A68u;
    {
        const bool branch_taken_0x3e0a68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E0A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0A68u;
        // 0x3e0a6c: 0x2f22000a  sltiu       $v0, $t9, 0xA (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 25) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0a68) {
            ctx->pc = 0x3E0A78u;
            goto label_3e0a78;
        }
    }
    ctx->pc = 0x3E0A70u;
    // 0x3e0a70: 0x1040fe3f  beqz        $v0, . + 4 + (-0x1C1 << 2)
    ctx->pc = 0x3E0A70u;
    {
        const bool branch_taken_0x3e0a70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E0A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0A70u;
        // 0x3e0a74: 0x2d820014  sltiu       $v0, $t4, 0x14 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0a70) {
            ctx->pc = 0x3E0370u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e0370;
        }
    }
    ctx->pc = 0x3E0A78u;
label_3e0a78:
    // 0x3e0a78: 0x8d240004  lw          $a0, 0x4($t1)
    ctx->pc = 0x3e0a78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x3e0a7c: 0xc38c2  srl         $a3, $t4, 3
    ctx->pc = 0x3e0a7cu;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 12), 3));
    // 0x3e0a80: 0xfd0d0020  sd          $t5, 0x20($t0)
    ctx->pc = 0x3e0a80u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 32), GPR_U64(ctx, 13));
    // 0x3e0a84: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3e0a84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e0a88:
    // 0x3e0a88: 0x997023  subu        $t6, $a0, $t9
    ctx->pc = 0x3e0a88u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 25)));
    // 0x3e0a8c: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x3e0a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x3e0a90: 0xee202b  sltu        $a0, $a3, $t6
    ctx->pc = 0x3e0a90u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 14)) ? 1 : 0);
    // 0x3e0a94: 0xdd260008  ld          $a2, 0x8($t1)
    ctx->pc = 0x3e0a94u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x3e0a98: 0xe4700b  movn        $t6, $a3, $a0
    ctx->pc = 0x3e0a98u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 14, GPR_VEC(ctx, 7));
    // 0x3e0a9c: 0x1ee7823  subu        $t7, $t7, $t6
    ctx->pc = 0x3e0a9cu;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x3e0aa0: 0xe28c0  sll         $a1, $t6, 3
    ctx->pc = 0x3e0aa0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 14), 3));
    // 0x3e0aa4: 0x1856023  subu        $t4, $t4, $a1
    ctx->pc = 0x3e0aa4u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 5)));
    // 0x3e0aa8: 0x1e31823  subu        $v1, $t7, $v1
    ctx->pc = 0x3e0aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 3)));
    // 0x3e0aac: 0xc3302d  daddu       $a2, $a2, $v1
    ctx->pc = 0x3e0aacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 3));
label_3e0ab0:
    // 0x3e0ab0: 0xad2f0000  sw          $t7, 0x0($t1)
    ctx->pc = 0x3e0ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 15));
    // 0x3e0ab4: 0xad0c001c  sw          $t4, 0x1C($t0)
    ctx->pc = 0x3e0ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 28), GPR_U32(ctx, 12));
    // 0x3e0ab8: 0x32ec821  addu        $t9, $t9, $t6
    ctx->pc = 0x3e0ab8u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 14)));
    // 0x3e0abc: 0xad180038  sw          $t8, 0x38($t0)
    ctx->pc = 0x3e0abcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 56), GPR_U32(ctx, 24));
    // 0x3e0ac0: 0xad390004  sw          $t9, 0x4($t1)
    ctx->pc = 0x3e0ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 25));
    // 0x3e0ac4: 0xfd260008  sd          $a2, 0x8($t1)
    ctx->pc = 0x3e0ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 8), GPR_U64(ctx, 6));
    // 0x3e0ac8: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x3e0ac8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3e0acc: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x3e0accu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3e0ad0: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x3e0ad0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3e0ad4: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x3e0ad4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3e0ad8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3e0ad8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3e0adc: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x3e0adcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3e0ae0: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x3e0ae0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3e0ae4: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x3e0ae4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e0ae8: 0x7bbe0000  lq          $fp, 0x0($sp)
    ctx->pc = 0x3e0ae8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e0aec: 0x3e00008  jr          $ra
    ctx->pc = 0x3E0AECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E0AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0AECu;
        // 0x3e0af0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E0AECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E0AF4u;
    // 0x3e0af4: 0x0  nop
    ctx->pc = 0x3e0af4u;
    // NOP
    ctx->pc = 0x3e0af8u;
}
