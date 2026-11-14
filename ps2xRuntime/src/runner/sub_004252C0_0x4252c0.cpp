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

// Function: sub_004252C0
// Address: 0x4252c0 - 0x425570
void sub_004252C0_0x4252c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004252C0_0x4252c0");
#endif

    switch (ctx->pc) {
        case 0x425424u: goto label_425424;
        case 0x425440u: goto label_425440;
        case 0x4254b4u: goto label_4254b4;
        case 0x425530u: goto label_425530;
        default: break;
    }

    ctx->pc = 0x4252c0u;

label_4252c0:
    // 0x4252c0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x4252c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x4252c4: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x4252c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x4252c8: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x4252c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x4252cc: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x4252ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4252d0: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x4252d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
    // 0x4252d4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4252d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4252d8: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x4252d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x4252dc: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x4252dcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4252e0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x4252e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x4252e4: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x4252e4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4252e8: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x4252e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x4252ec: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x4252ecu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4252f0: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x4252f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
    // 0x4252f4: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x4252f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
    // 0x4252f8: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x4252f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
    // 0x4252fc: 0x12a0008f  beqz        $s5, . + 4 + (0x8F << 2)
    ctx->pc = 0x4252FCu;
    {
        const bool branch_taken_0x4252fc = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x425300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4252FCu;
        // 0x425300: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4252fc) {
            ctx->pc = 0x42553Cu;
            goto label_42553c;
        }
    }
    ctx->pc = 0x425304u;
    // 0x425304: 0x8e290000  lw          $t1, 0x0($s1)
    ctx->pc = 0x425304u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x425308: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x425308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x42530c: 0x8e280004  lw          $t0, 0x4($s1)
    ctx->pc = 0x42530cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x425310: 0x2021004  sllv        $v0, $v0, $s0
    ctx->pc = 0x425310u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 16) & 0x1F));
    // 0x425314: 0x8e270008  lw          $a3, 0x8($s1)
    ctx->pc = 0x425314u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x425318: 0x1226821  addu        $t5, $t1, $v0
    ctx->pc = 0x425318u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x42531c: 0x8e26000c  lw          $a2, 0xC($s1)
    ctx->pc = 0x42531cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x425320: 0x1025821  addu        $t3, $t0, $v0
    ctx->pc = 0x425320u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x425324: 0x8e9e0000  lw          $fp, 0x0($s4)
    ctx->pc = 0x425324u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x425328: 0xe26021  addu        $t4, $a3, $v0
    ctx->pc = 0x425328u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x42532c: 0x8e990004  lw          $t9, 0x4($s4)
    ctx->pc = 0x42532cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x425330: 0xc25021  addu        $t2, $a2, $v0
    ctx->pc = 0x425330u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x425334: 0x8e970008  lw          $s7, 0x8($s4)
    ctx->pc = 0x425334u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x425338: 0x1be2823  subu        $a1, $t5, $fp
    ctx->pc = 0x425338u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 30)));
    // 0x42533c: 0x8e98000c  lw          $t8, 0xC($s4)
    ctx->pc = 0x42533cu;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x425340: 0x1792023  subu        $a0, $t3, $t9
    ctx->pc = 0x425340u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 25)));
    // 0x425344: 0xafa90000  sw          $t1, 0x0($sp)
    ctx->pc = 0x425344u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 9));
    // 0x425348: 0x1971823  subu        $v1, $t4, $s7
    ctx->pc = 0x425348u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 23)));
    // 0x42534c: 0xafa80004  sw          $t0, 0x4($sp)
    ctx->pc = 0x42534cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 8));
    // 0x425350: 0x1581023  subu        $v0, $t2, $t8
    ctx->pc = 0x425350u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 24)));
    // 0x425354: 0xafa70008  sw          $a3, 0x8($sp)
    ctx->pc = 0x425354u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 7));
    // 0x425358: 0xafa6000c  sw          $a2, 0xC($sp)
    ctx->pc = 0x425358u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 6));
    // 0x42535c: 0xafad0010  sw          $t5, 0x10($sp)
    ctx->pc = 0x42535cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 13));
    // 0x425360: 0xafab0014  sw          $t3, 0x14($sp)
    ctx->pc = 0x425360u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 11));
    // 0x425364: 0xafac0018  sw          $t4, 0x18($sp)
    ctx->pc = 0x425364u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 12));
    // 0x425368: 0x18a00074  blez        $a1, . + 4 + (0x74 << 2)
    ctx->pc = 0x425368u;
    {
        const bool branch_taken_0x425368 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x42536Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x425368u;
        // 0x42536c: 0xafaa001c  sw          $t2, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x425368) {
            ctx->pc = 0x42553Cu;
            goto label_42553c;
        }
    }
    ctx->pc = 0x425370u;
    // 0x425370: 0x58800073  blezl       $a0, . + 4 + (0x73 << 2)
    ctx->pc = 0x425370u;
    {
        const bool branch_taken_0x425370 = (GPR_S32(ctx, 4) <= 0);
        if (branch_taken_0x425370) {
            ctx->pc = 0x425374u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x425370u;
            // 0x425374: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x425540u;
            goto label_425540;
        }
    }
    ctx->pc = 0x425378u;
    // 0x425378: 0x58600071  blezl       $v1, . + 4 + (0x71 << 2)
    ctx->pc = 0x425378u;
    {
        const bool branch_taken_0x425378 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x425378) {
            ctx->pc = 0x42537Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x425378u;
            // 0x42537c: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x425540u;
            goto label_425540;
        }
    }
    ctx->pc = 0x425380u;
    // 0x425380: 0x5840006f  blezl       $v0, . + 4 + (0x6F << 2)
    ctx->pc = 0x425380u;
    {
        const bool branch_taken_0x425380 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x425380) {
            ctx->pc = 0x425384u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x425380u;
            // 0x425384: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x425540u;
            goto label_425540;
        }
    }
    ctx->pc = 0x425388u;
    // 0x425388: 0x8e8f0010  lw          $t7, 0x10($s4)
    ctx->pc = 0x425388u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x42538c: 0x8e920014  lw          $s2, 0x14($s4)
    ctx->pc = 0x42538cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x425390: 0x8e930018  lw          $s3, 0x18($s4)
    ctx->pc = 0x425390u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x425394: 0x12f2823  subu        $a1, $t1, $t7
    ctx->pc = 0x425394u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 15)));
    // 0x425398: 0x8e8e001c  lw          $t6, 0x1C($s4)
    ctx->pc = 0x425398u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
    // 0x42539c: 0x1122023  subu        $a0, $t0, $s2
    ctx->pc = 0x42539cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 18)));
    // 0x4253a0: 0xf31823  subu        $v1, $a3, $s3
    ctx->pc = 0x4253a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 19)));
    // 0x4253a4: 0x4a10065  bgez        $a1, . + 4 + (0x65 << 2)
    ctx->pc = 0x4253A4u;
    {
        const bool branch_taken_0x4253a4 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x4253A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4253A4u;
        // 0x4253a8: 0xce1023  subu        $v0, $a2, $t6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4253a4) {
            ctx->pc = 0x42553Cu;
            goto label_42553c;
        }
    }
    ctx->pc = 0x4253ACu;
    // 0x4253ac: 0x4830064  bgezl       $a0, . + 4 + (0x64 << 2)
    ctx->pc = 0x4253ACu;
    {
        const bool branch_taken_0x4253ac = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x4253ac) {
            ctx->pc = 0x4253B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4253ACu;
            // 0x4253b0: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x425540u;
            goto label_425540;
        }
    }
    ctx->pc = 0x4253B4u;
    // 0x4253b4: 0x4630062  bgezl       $v1, . + 4 + (0x62 << 2)
    ctx->pc = 0x4253B4u;
    {
        const bool branch_taken_0x4253b4 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x4253b4) {
            ctx->pc = 0x4253B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4253B4u;
            // 0x4253b8: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x425540u;
            goto label_425540;
        }
    }
    ctx->pc = 0x4253BCu;
    // 0x4253bc: 0x4430060  bgezl       $v0, . + 4 + (0x60 << 2)
    ctx->pc = 0x4253BCu;
    {
        const bool branch_taken_0x4253bc = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x4253bc) {
            ctx->pc = 0x4253C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4253BCu;
            // 0x4253c0: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x425540u;
            goto label_425540;
        }
    }
    ctx->pc = 0x4253C4u;
    // 0x4253c4: 0x13e2823  subu        $a1, $t1, $fp
    ctx->pc = 0x4253c4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 30)));
    // 0x4253c8: 0x1192023  subu        $a0, $t0, $t9
    ctx->pc = 0x4253c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 25)));
    // 0x4253cc: 0xf71823  subu        $v1, $a3, $s7
    ctx->pc = 0x4253ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 23)));
    // 0x4253d0: 0x4a00016  bltz        $a1, . + 4 + (0x16 << 2)
    ctx->pc = 0x4253D0u;
    {
        const bool branch_taken_0x4253d0 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x4253D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4253D0u;
        // 0x4253d4: 0xd81023  subu        $v0, $a2, $t8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4253d0) {
            ctx->pc = 0x42542Cu;
            goto label_42542c;
        }
    }
    ctx->pc = 0x4253D8u;
    // 0x4253d8: 0x4800014  bltz        $a0, . + 4 + (0x14 << 2)
    ctx->pc = 0x4253D8u;
    {
        const bool branch_taken_0x4253d8 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x4253d8) {
            ctx->pc = 0x42542Cu;
            goto label_42542c;
        }
    }
    ctx->pc = 0x4253E0u;
    // 0x4253e0: 0x4600012  bltz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x4253E0u;
    {
        const bool branch_taken_0x4253e0 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x4253e0) {
            ctx->pc = 0x42542Cu;
            goto label_42542c;
        }
    }
    ctx->pc = 0x4253E8u;
    // 0x4253e8: 0x4400010  bltz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x4253E8u;
    {
        const bool branch_taken_0x4253e8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4253ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4253E8u;
        // 0x4253ec: 0x1ed2823  subu        $a1, $t7, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 13)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4253e8) {
            ctx->pc = 0x42542Cu;
            goto label_42542c;
        }
    }
    ctx->pc = 0x4253F0u;
    // 0x4253f0: 0x24b2023  subu        $a0, $s2, $t3
    ctx->pc = 0x4253f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 11)));
    // 0x4253f4: 0x26c1823  subu        $v1, $s3, $t4
    ctx->pc = 0x4253f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 12)));
    // 0x4253f8: 0x4a0000c  bltz        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x4253F8u;
    {
        const bool branch_taken_0x4253f8 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x4253FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4253F8u;
        // 0x4253fc: 0x1ca1023  subu        $v0, $t6, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4253f8) {
            ctx->pc = 0x42542Cu;
            goto label_42542c;
        }
    }
    ctx->pc = 0x425400u;
    // 0x425400: 0x480000a  bltz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x425400u;
    {
        const bool branch_taken_0x425400 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x425400) {
            ctx->pc = 0x42542Cu;
            goto label_42542c;
        }
    }
    ctx->pc = 0x425408u;
    // 0x425408: 0x4600008  bltz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x425408u;
    {
        const bool branch_taken_0x425408 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x425408) {
            ctx->pc = 0x42542Cu;
            goto label_42542c;
        }
    }
    ctx->pc = 0x425410u;
    // 0x425410: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x425410u;
    {
        const bool branch_taken_0x425410 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x425414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x425410u;
        // 0x425414: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x425410) {
            ctx->pc = 0x42542Cu;
            goto label_42542c;
        }
    }
    ctx->pc = 0x425418u;
    // 0x425418: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x425418u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42541c: 0xc10920e  jal         func_424838
    ctx->pc = 0x42541Cu;
    SET_GPR_U32(ctx, 31, 0x425424u);
    ctx->pc = 0x425420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42541Cu;
    // 0x425420: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x424838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x424838u, 0x42541Cu, 0x425424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x425424u;
label_425424:
    // 0x425424: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x425424u;
    {
        const bool branch_taken_0x425424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x425428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x425424u;
        // 0x425428: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x425424) {
            ctx->pc = 0x425540u;
            goto label_425540;
        }
    }
    ctx->pc = 0x42542Cu;
label_42542c:
    // 0x42542c: 0x1a000043  blez        $s0, . + 4 + (0x43 << 2)
    ctx->pc = 0x42542Cu;
    {
        const bool branch_taken_0x42542c = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x425430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42542Cu;
        // 0x425430: 0x26b3001c  addiu       $s3, $s5, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42542c) {
            ctx->pc = 0x42553Cu;
            goto label_42553c;
        }
    }
    ctx->pc = 0x425434u;
    // 0x425434: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x425434u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x425438: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x425438u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42543c: 0x27b50020  addiu       $s5, $sp, 0x20
    ctx->pc = 0x42543cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_425440:
    // 0x425440: 0x122043  sra         $a0, $s2, 1
    ctx->pc = 0x425440u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 18), 1));
    // 0x425444: 0x8e280008  lw          $t0, 0x8($s1)
    ctx->pc = 0x425444u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x425448: 0x1210c3  sra         $v0, $s2, 3
    ctx->pc = 0x425448u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 18), 3));
    // 0x42544c: 0x121883  sra         $v1, $s2, 2
    ctx->pc = 0x42544cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 18), 2));
    // 0x425450: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x425450u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x425454: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x425454u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x425458: 0x8e270004  lw          $a3, 0x4($s1)
    ctx->pc = 0x425458u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x42545c: 0x2042004  sllv        $a0, $a0, $s0
    ctx->pc = 0x42545cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 16) & 0x1F));
    // 0x425460: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x425460u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x425464: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x425464u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x425468: 0x8e29000c  lw          $t1, 0xC($s1)
    ctx->pc = 0x425468u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x42546c: 0x1044021  addu        $t0, $t0, $a0
    ctx->pc = 0x42546cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x425470: 0x2021004  sllv        $v0, $v0, $s0
    ctx->pc = 0x425470u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 16) & 0x1F));
    // 0x425474: 0x2031804  sllv        $v1, $v1, $s0
    ctx->pc = 0x425474u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 16) & 0x1F));
    // 0x425478: 0x32450001  andi        $a1, $s2, 0x1
    ctx->pc = 0x425478u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x42547c: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x42547cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x425480: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x425480u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x425484: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x425484u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x425488: 0x2052804  sllv        $a1, $a1, $s0
    ctx->pc = 0x425488u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 16) & 0x1F));
    // 0x42548c: 0xafa60020  sw          $a2, 0x20($sp)
    ctx->pc = 0x42548cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
    // 0x425490: 0x1254821  addu        $t1, $t1, $a1
    ctx->pc = 0x425490u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x425494: 0xafa70024  sw          $a3, 0x24($sp)
    ctx->pc = 0x425494u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 7));
    // 0x425498: 0xafa80028  sw          $t0, 0x28($sp)
    ctx->pc = 0x425498u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 8));
    // 0x42549c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x42549cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4254a0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x4254a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4254a4: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x4254a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4254a8: 0xafa9002c  sw          $t1, 0x2C($sp)
    ctx->pc = 0x4254a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 9));
    // 0x4254ac: 0xc1094b0  jal         func_4252C0
    ctx->pc = 0x4254ACu;
    SET_GPR_U32(ctx, 31, 0x4254B4u);
    ctx->pc = 0x4254B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4254ACu;
    // 0x4254b0: 0x2c0402d  daddu       $t0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4252C0u;
    goto label_4252c0;
    ctx->pc = 0x4254B4u;
label_4254b4:
    // 0x4254b4: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x4254b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x4254b8: 0x8e270004  lw          $a3, 0x4($s1)
    ctx->pc = 0x4254b8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x4254bc: 0x22083  sra         $a0, $v0, 2
    ctx->pc = 0x4254bcu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 2));
    // 0x4254c0: 0x218c3  sra         $v1, $v0, 3
    ctx->pc = 0x4254c0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 3));
    // 0x4254c4: 0x22843  sra         $a1, $v0, 1
    ctx->pc = 0x4254c4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 1));
    // 0x4254c8: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x4254c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x4254cc: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x4254ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4254d0: 0x2042004  sllv        $a0, $a0, $s0
    ctx->pc = 0x4254d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 16) & 0x1F));
    // 0x4254d4: 0x8e280008  lw          $t0, 0x8($s1)
    ctx->pc = 0x4254d4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x4254d8: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x4254d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x4254dc: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x4254dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x4254e0: 0x8e29000c  lw          $t1, 0xC($s1)
    ctx->pc = 0x4254e0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x4254e4: 0xe43821  addu        $a3, $a3, $a0
    ctx->pc = 0x4254e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x4254e8: 0x2052804  sllv        $a1, $a1, $s0
    ctx->pc = 0x4254e8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 16) & 0x1F));
    // 0x4254ec: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4254ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x4254f0: 0x2031804  sllv        $v1, $v1, $s0
    ctx->pc = 0x4254f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 16) & 0x1F));
    // 0x4254f4: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x4254f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x4254f8: 0x1054021  addu        $t0, $t0, $a1
    ctx->pc = 0x4254f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x4254fc: 0x2021004  sllv        $v0, $v0, $s0
    ctx->pc = 0x4254fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 16) & 0x1F));
    // 0x425500: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x425500u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x425504: 0x1224821  addu        $t1, $t1, $v0
    ctx->pc = 0x425504u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x425508: 0xafa60020  sw          $a2, 0x20($sp)
    ctx->pc = 0x425508u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
    // 0x42550c: 0xafa70024  sw          $a3, 0x24($sp)
    ctx->pc = 0x42550cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 7));
    // 0x425510: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x425510u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x425514: 0xafa80028  sw          $t0, 0x28($sp)
    ctx->pc = 0x425514u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 8));
    // 0x425518: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x425518u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42551c: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x42551cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x425520: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x425520u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x425524: 0xafa9002c  sw          $t1, 0x2C($sp)
    ctx->pc = 0x425524u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 9));
    // 0x425528: 0xc1094b0  jal         func_4252C0
    ctx->pc = 0x425528u;
    SET_GPR_U32(ctx, 31, 0x425530u);
    ctx->pc = 0x42552Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x425528u;
    // 0x42552c: 0x26520002  addiu       $s2, $s2, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4252C0u;
    goto label_4252c0;
    ctx->pc = 0x425530u;
label_425530:
    // 0x425530: 0x2a420010  slti        $v0, $s2, 0x10
    ctx->pc = 0x425530u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x425534: 0x1440ffc2  bnez        $v0, . + 4 + (-0x3E << 2)
    ctx->pc = 0x425534u;
    {
        const bool branch_taken_0x425534 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x425538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x425534u;
        // 0x425538: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x425534) {
            ctx->pc = 0x425440u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_425440;
        }
    }
    ctx->pc = 0x42553Cu;
label_42553c:
    // 0x42553c: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x42553cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_425540:
    // 0x425540: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x425540u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x425544: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x425544u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x425548: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x425548u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x42554c: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x42554cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x425550: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x425550u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x425554: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x425554u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x425558: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x425558u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x42555c: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x42555cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x425560: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x425560u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x425564: 0x3e00008  jr          $ra
    ctx->pc = 0x425564u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x425568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x425564u;
        // 0x425568: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x425564u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x42556Cu;
    // 0x42556c: 0x0  nop
    ctx->pc = 0x42556cu;
    // NOP
    ctx->pc = 0x425570u;
}
