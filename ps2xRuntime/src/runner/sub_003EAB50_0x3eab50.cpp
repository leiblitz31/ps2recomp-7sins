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

// Function: sub_003EAB50
// Address: 0x3eab50 - 0x3ebab8
void sub_003EAB50_0x3eab50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EAB50_0x3eab50");
#endif

    switch (ctx->pc) {
        case 0x3eac5cu: goto label_3eac5c;
        case 0x3eac74u: goto label_3eac74;
        case 0x3eac84u: goto label_3eac84;
        case 0x3eacd0u: goto label_3eacd0;
        case 0x3ead14u: goto label_3ead14;
        case 0x3ead30u: goto label_3ead30;
        case 0x3ead40u: goto label_3ead40;
        case 0x3eadc0u: goto label_3eadc0;
        case 0x3eaddcu: goto label_3eaddc;
        case 0x3eadecu: goto label_3eadec;
        case 0x3eae80u: goto label_3eae80;
        case 0x3eae9cu: goto label_3eae9c;
        case 0x3eaeacu: goto label_3eaeac;
        case 0x3eaee8u: goto label_3eaee8;
        case 0x3eaf08u: goto label_3eaf08;
        case 0x3eaf24u: goto label_3eaf24;
        case 0x3eaf34u: goto label_3eaf34;
        case 0x3eaf80u: goto label_3eaf80;
        case 0x3eaf9cu: goto label_3eaf9c;
        case 0x3eafacu: goto label_3eafac;
        case 0x3eb008u: goto label_3eb008;
        case 0x3eb0e8u: goto label_3eb0e8;
        case 0x3eb0f8u: goto label_3eb0f8;
        case 0x3eb108u: goto label_3eb108;
        case 0x3eb1f0u: goto label_3eb1f0;
        case 0x3eb200u: goto label_3eb200;
        case 0x3eb210u: goto label_3eb210;
        case 0x3eb250u: goto label_3eb250;
        case 0x3eb2b0u: goto label_3eb2b0;
        case 0x3eb2c0u: goto label_3eb2c0;
        case 0x3eb2d0u: goto label_3eb2d0;
        case 0x3eb364u: goto label_3eb364;
        case 0x3eb374u: goto label_3eb374;
        case 0x3eb384u: goto label_3eb384;
        case 0x3eb458u: goto label_3eb458;
        case 0x3eb468u: goto label_3eb468;
        case 0x3eb478u: goto label_3eb478;
        case 0x3eb4c0u: goto label_3eb4c0;
        case 0x3eb510u: goto label_3eb510;
        case 0x3eb520u: goto label_3eb520;
        case 0x3eb530u: goto label_3eb530;
        case 0x3eb5b8u: goto label_3eb5b8;
        case 0x3eb5c8u: goto label_3eb5c8;
        case 0x3eb5d8u: goto label_3eb5d8;
        case 0x3eb680u: goto label_3eb680;
        case 0x3eb690u: goto label_3eb690;
        case 0x3eb6c8u: goto label_3eb6c8;
        case 0x3eb6f8u: goto label_3eb6f8;
        case 0x3eb708u: goto label_3eb708;
        case 0x3eb760u: goto label_3eb760;
        case 0x3eb770u: goto label_3eb770;
        case 0x3eb7d0u: goto label_3eb7d0;
        case 0x3eb8b0u: goto label_3eb8b0;
        case 0x3eb8c0u: goto label_3eb8c0;
        case 0x3eb8d0u: goto label_3eb8d0;
        case 0x3eb970u: goto label_3eb970;
        case 0x3eb9d4u: goto label_3eb9d4;
        case 0x3eb9e4u: goto label_3eb9e4;
        case 0x3eb9f4u: goto label_3eb9f4;
        case 0x3eba74u: goto label_3eba74;
        default: break;
    }

    ctx->pc = 0x3eab50u;

    // 0x3eab50: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x3eab50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x3eab54: 0x7fbe0050  sq          $fp, 0x50($sp)
    ctx->pc = 0x3eab54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 30));
    // 0x3eab58: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x3eab58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
    // 0x3eab5c: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x3eab5cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3eab60: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x3eab60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
    // 0x3eab64: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x3eab64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
    // 0x3eab68: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x3eab68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
    // 0x3eab6c: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x3eab6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
    // 0x3eab70: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x3eab70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
    // 0x3eab74: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x3eab74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x3eab78: 0x7fb70060  sq          $s7, 0x60($sp)
    ctx->pc = 0x3eab78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 23));
    // 0x3eab7c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3eab7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x3eab80: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x3eab80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x3eab84: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x3eab84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x3eab88: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x3eab88u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3eab8c: 0x90a30010  lbu         $v1, 0x10($a1)
    ctx->pc = 0x3eab8cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x3eab90: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x3eab90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x3eab94: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x3eab94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x3eab98: 0x104003ba  beqz        $v0, . + 4 + (0x3BA << 2)
    ctx->pc = 0x3EAB98u;
    {
        const bool branch_taken_0x3eab98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EAB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAB98u;
        // 0x3eab9c: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eab98) {
            ctx->pc = 0x3EBA84u;
            goto label_3eba84;
        }
    }
    ctx->pc = 0x3EABA0u;
    // 0x3eaba0: 0x948402d2  lhu         $a0, 0x2D2($a0)
    ctx->pc = 0x3eaba0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 722)));
    // 0x3eaba4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3eaba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3eaba8: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x3eaba8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3eabac: 0xffa40018  sd          $a0, 0x18($sp)
    ctx->pc = 0x3eabacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 4));
    // 0x3eabb0: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x3eabb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3eabb4: 0x94c602d4  lhu         $a2, 0x2D4($a2)
    ctx->pc = 0x3eabb4u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 724)));
    // 0x3eabb8: 0xffa60020  sd          $a2, 0x20($sp)
    ctx->pc = 0x3eabb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 6));
    // 0x3eabbc: 0x948402d6  lhu         $a0, 0x2D6($a0)
    ctx->pc = 0x3eabbcu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 726)));
    // 0x3eabc0: 0x146201fb  bne         $v1, $v0, . + 4 + (0x1FB << 2)
    ctx->pc = 0x3EABC0u;
    {
        const bool branch_taken_0x3eabc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3EABC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EABC0u;
        // 0x3eabc4: 0xffa40028  sd          $a0, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eabc0) {
            ctx->pc = 0x3EB3B0u;
            goto label_3eb3b0;
        }
    }
    ctx->pc = 0x3EABC8u;
    // 0x3eabc8: 0x90a30011  lbu         $v1, 0x11($a1)
    ctx->pc = 0x3eabc8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 17)));
    // 0x3eabcc: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x3eabccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3eabd0: 0x54620103  bnel        $v1, $v0, . + 4 + (0x103 << 2)
    ctx->pc = 0x3EABD0u;
    {
        const bool branch_taken_0x3eabd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3eabd0) {
            ctx->pc = 0x3EABD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EABD0u;
            // 0x3eabd4: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EAFE0u;
            goto label_3eafe0;
        }
    }
    ctx->pc = 0x3EABD8u;
    // 0x3eabd8: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x3eabd8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3eabdc: 0x8cc20258  lw          $v0, 0x258($a2)
    ctx->pc = 0x3eabdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 600)));
    // 0x3eabe0: 0x10400093  beqz        $v0, . + 4 + (0x93 << 2)
    ctx->pc = 0x3EABE0u;
    {
        const bool branch_taken_0x3eabe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EABE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EABE0u;
        // 0x3eabe4: 0xdfa20008  ld          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eabe0) {
            ctx->pc = 0x3EAE30u;
            goto label_3eae30;
        }
    }
    ctx->pc = 0x3EABE8u;
    // 0x3eabe8: 0x8cc6025c  lw          $a2, 0x25C($a2)
    ctx->pc = 0x3eabe8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 604)));
    // 0x3eabec: 0x10c00090  beqz        $a2, . + 4 + (0x90 << 2)
    ctx->pc = 0x3EABECu;
    {
        const bool branch_taken_0x3eabec = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x3eabec) {
            ctx->pc = 0x3EAE30u;
            goto label_3eae30;
        }
    }
    ctx->pc = 0x3EABF4u;
    // 0x3eabf4: 0x104001ee  beqz        $v0, . + 4 + (0x1EE << 2)
    ctx->pc = 0x3EABF4u;
    {
        const bool branch_taken_0x3eabf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EABF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EABF4u;
        // 0x3eabf8: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eabf4) {
            ctx->pc = 0x3EB3B0u;
            goto label_3eb3b0;
        }
    }
    ctx->pc = 0x3EABFCu;
    // 0x3eabfc: 0xdfa30008  ld          $v1, 0x8($sp)
    ctx->pc = 0x3eabfcu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3eac00: 0x3c0982d  daddu       $s3, $fp, $zero
    ctx->pc = 0x3eac00u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3eac04: 0x3c0a02d  daddu       $s4, $fp, $zero
    ctx->pc = 0x3eac04u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3eac08: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3EAC08u;
    {
        const bool branch_taken_0x3eac08 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x3EAC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAC08u;
        // 0x3eac0c: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eac08) {
            ctx->pc = 0x3EAC18u;
            goto label_3eac18;
        }
    }
    ctx->pc = 0x3EAC10u;
    // 0x3eac10: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x3EAC10u;
    {
        const bool branch_taken_0x3eac10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EAC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAC10u;
        // 0x3eac14: 0x280a82d  daddu       $s5, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eac10) {
            ctx->pc = 0x3EACC8u;
            goto label_3eacc8;
        }
    }
    ctx->pc = 0x3EAC18u;
label_3eac18:
    // 0x3eac18: 0x93c20000  lbu         $v0, 0x0($fp)
    ctx->pc = 0x3eac18u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x3eac1c: 0x27c70003  addiu       $a3, $fp, 0x3
    ctx->pc = 0x3eac1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 30), 3));
    // 0x3eac20: 0x93c30001  lbu         $v1, 0x1($fp)
    ctx->pc = 0x3eac20u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 1)));
    // 0x3eac24: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x3eac24u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3eac28: 0x93c40002  lbu         $a0, 0x2($fp)
    ctx->pc = 0x3eac28u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 2)));
    // 0x3eac2c: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x3eac2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x3eac30: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x3eac30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x3eac34: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x3eac34u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3eac38: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x3eac38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x3eac3c: 0x90710000  lbu         $s1, 0x0($v1)
    ctx->pc = 0x3eac3cu;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3eac40: 0x14b10003  bne         $a1, $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3EAC40u;
    {
        const bool branch_taken_0x3eac40 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 17));
        ctx->pc = 0x3EAC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAC40u;
        // 0x3eac44: 0x90920000  lbu         $s2, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eac40) {
            ctx->pc = 0x3EAC50u;
            goto label_3eac50;
        }
    }
    ctx->pc = 0x3EAC48u;
    // 0x3eac48: 0x52320017  beql        $s1, $s2, . + 4 + (0x17 << 2)
    ctx->pc = 0x3EAC48u;
    {
        const bool branch_taken_0x3eac48 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 18));
        if (branch_taken_0x3eac48) {
            ctx->pc = 0x3EAC4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EAC48u;
            // 0x3eac4c: 0x90e2ffff  lbu         $v0, -0x1($a3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4294967295)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EACA8u;
            goto label_3eaca8;
        }
    }
    ctx->pc = 0x3EAC50u;
label_3eac50:
    // 0x3eac50: 0xdfa40018  ld          $a0, 0x18($sp)
    ctx->pc = 0x3eac50u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3eac54: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x3EAC54u;
    SET_GPR_U32(ctx, 31, 0x3EAC5Cu);
    ctx->pc = 0x3EAC58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EAC54u;
    // 0x3eac58: 0x27d30001  addiu       $s3, $fp, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x3EAC54u, 0x3EAC5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EAC5Cu;
label_3eac5c:
    // 0x3eac5c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3eac5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3eac60: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3eac60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3eac64: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x3eac64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x3eac68: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3eac68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3eac6c: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x3EAC6Cu;
    SET_GPR_U32(ctx, 31, 0x3EAC74u);
    ctx->pc = 0x3EAC70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EAC6Cu;
    // 0x3eac70: 0xdfa40020  ld          $a0, 0x20($sp) (Delay Slot)
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x3EAC6Cu, 0x3EAC74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EAC74u;
label_3eac74:
    // 0x3eac74: 0xdfa40028  ld          $a0, 0x28($sp)
    ctx->pc = 0x3eac74u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3eac78: 0x202802d  daddu       $s0, $s0, $v0
    ctx->pc = 0x3eac78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
    // 0x3eac7c: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x3EAC7Cu;
    SET_GPR_U32(ctx, 31, 0x3EAC84u);
    ctx->pc = 0x3EAC80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EAC7Cu;
    // 0x3eac80: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x3EAC7Cu, 0x3EAC84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EAC84u;
label_3eac84:
    // 0x3eac84: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x3eac84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3eac88: 0x202802d  daddu       $s0, $s0, $v0
    ctx->pc = 0x3eac88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
    // 0x3eac8c: 0x108478  dsll        $s0, $s0, 17
    ctx->pc = 0x3eac8cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << 17);
    // 0x3eac90: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x3eac90u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x3eac94: 0x8cc20258  lw          $v0, 0x258($a2)
    ctx->pc = 0x3eac94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 600)));
    // 0x3eac98: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x3eac98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x3eac9c: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3eac9cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3eaca0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3EACA0u;
    {
        const bool branch_taken_0x3eaca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EACA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EACA0u;
        // 0x3eaca4: 0xa3c30000  sb          $v1, 0x0($fp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 30), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eaca0) {
            ctx->pc = 0x3EACB0u;
            goto label_3eacb0;
        }
    }
    ctx->pc = 0x3EACA8u;
label_3eaca8:
    // 0x3eaca8: 0x27d30001  addiu       $s3, $fp, 0x1
    ctx->pc = 0x3eaca8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x3eacac: 0xa3c20000  sb          $v0, 0x0($fp)
    ctx->pc = 0x3eacacu;
    WRITE8(ADD32(GPR_U32(ctx, 30), 0), (uint8_t)GPR_U32(ctx, 2));
label_3eacb0:
    // 0x3eacb0: 0xdfa30008  ld          $v1, 0x8($sp)
    ctx->pc = 0x3eacb0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3eacb4: 0x66d60001  daddiu      $s6, $s6, 0x1
    ctx->pc = 0x3eacb4u;
    SET_GPR_S64(ctx, 22, (int64_t)GPR_S64(ctx, 22) + (int64_t)(int32_t)1);
    // 0x3eacb8: 0x2c3102b  sltu        $v0, $s6, $v1
    ctx->pc = 0x3eacb8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3eacbc: 0x104001bd  beqz        $v0, . + 4 + (0x1BD << 2)
    ctx->pc = 0x3EACBCu;
    {
        const bool branch_taken_0x3eacbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EACC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EACBCu;
        // 0x3eacc0: 0x8fa60004  lw          $a2, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eacbc) {
            ctx->pc = 0x3EB3B4u;
            goto label_3eb3b4;
        }
    }
    ctx->pc = 0x3EACC4u;
    // 0x3eacc4: 0x280a82d  daddu       $s5, $s4, $zero
    ctx->pc = 0x3eacc4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3eacc8:
    // 0x3eacc8: 0x2a0902d  daddu       $s2, $s5, $zero
    ctx->pc = 0x3eacc8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3eaccc: 0x0  nop
    ctx->pc = 0x3eacccu;
    // NOP
label_3eacd0:
    // 0x3eacd0: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x3eacd0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3eacd4: 0x92420000  lbu         $v0, 0x0($s2)
    ctx->pc = 0x3eacd4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3eacd8: 0x8cc4025c  lw          $a0, 0x25C($a2)
    ctx->pc = 0x3eacd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 604)));
    // 0x3eacdc: 0x92430001  lbu         $v1, 0x1($s2)
    ctx->pc = 0x3eacdcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x3eace0: 0x92450002  lbu         $a1, 0x2($s2)
    ctx->pc = 0x3eace0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x3eace4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x3eace4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3eace8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x3eace8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3eacec: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x3eacecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3eacf0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x3eacf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3eacf4: 0x90710000  lbu         $s1, 0x0($v1)
    ctx->pc = 0x3eacf4u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3eacf8: 0x14510003  bne         $v0, $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3EACF8u;
    {
        const bool branch_taken_0x3eacf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x3EACFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EACF8u;
        // 0x3eacfc: 0x90940000  lbu         $s4, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 20, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eacf8) {
            ctx->pc = 0x3EAD08u;
            goto label_3ead08;
        }
    }
    ctx->pc = 0x3EAD00u;
    // 0x3ead00: 0x52340018  beql        $s1, $s4, . + 4 + (0x18 << 2)
    ctx->pc = 0x3EAD00u;
    {
        const bool branch_taken_0x3ead00 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 20));
        if (branch_taken_0x3ead00) {
            ctx->pc = 0x3EAD04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EAD00u;
            // 0x3ead04: 0x92a20002  lbu         $v0, 0x2($s5) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EAD64u;
            goto label_3ead64;
        }
    }
    ctx->pc = 0x3EAD08u;
label_3ead08:
    // 0x3ead08: 0xdfa40018  ld          $a0, 0x18($sp)
    ctx->pc = 0x3ead08u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3ead0c: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x3EAD0Cu;
    SET_GPR_U32(ctx, 31, 0x3EAD14u);
    ctx->pc = 0x3EAD10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EAD0Cu;
    // 0x3ead10: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x3EAD0Cu, 0x3EAD14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EAD14u;
label_3ead14:
    // 0x3ead14: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x3ead14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3ead18: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3ead18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ead1c: 0xdfa40020  ld          $a0, 0x20($sp)
    ctx->pc = 0x3ead1cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3ead20: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3ead20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ead24: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x3ead24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x3ead28: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x3EAD28u;
    SET_GPR_U32(ctx, 31, 0x3EAD30u);
    ctx->pc = 0x3EAD2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EAD28u;
    // 0x3ead2c: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x3EAD28u, 0x3EAD30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EAD30u;
label_3ead30:
    // 0x3ead30: 0xdfa40028  ld          $a0, 0x28($sp)
    ctx->pc = 0x3ead30u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3ead34: 0x202802d  daddu       $s0, $s0, $v0
    ctx->pc = 0x3ead34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
    // 0x3ead38: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x3EAD38u;
    SET_GPR_U32(ctx, 31, 0x3EAD40u);
    ctx->pc = 0x3EAD3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EAD38u;
    // 0x3ead3c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x3EAD38u, 0x3EAD40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EAD40u;
label_3ead40:
    // 0x3ead40: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x3ead40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ead44: 0x202802d  daddu       $s0, $s0, $v0
    ctx->pc = 0x3ead44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
    // 0x3ead48: 0x108478  dsll        $s0, $s0, 17
    ctx->pc = 0x3ead48u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << 17);
    // 0x3ead4c: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x3ead4cu;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x3ead50: 0x8c820258  lw          $v0, 0x258($a0)
    ctx->pc = 0x3ead50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 600)));
    // 0x3ead54: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x3ead54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x3ead58: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3ead58u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3ead5c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3EAD5Cu;
    {
        const bool branch_taken_0x3ead5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EAD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAD5Cu;
        // 0x3ead60: 0xa2630000  sb          $v1, 0x0($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ead5c) {
            ctx->pc = 0x3EAD68u;
            goto label_3ead68;
        }
    }
    ctx->pc = 0x3EAD64u;
label_3ead64:
    // 0x3ead64: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x3ead64u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_3ead68:
    // 0x3ead68: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3ead68u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x3ead6c: 0x92440003  lbu         $a0, 0x3($s2)
    ctx->pc = 0x3ead6cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
    // 0x3ead70: 0x26b50006  addiu       $s5, $s5, 0x6
    ctx->pc = 0x3ead70u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 6));
    // 0x3ead74: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x3ead74u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x3ead78: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x3ead78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ead7c: 0x92430000  lbu         $v1, 0x0($s2)
    ctx->pc = 0x3ead7cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3ead80: 0x8cc2025c  lw          $v0, 0x25C($a2)
    ctx->pc = 0x3ead80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 604)));
    // 0x3ead84: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3ead84u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x3ead88: 0x92450000  lbu         $a1, 0x0($s2)
    ctx->pc = 0x3ead88u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3ead8c: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x3ead8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3ead90: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x3ead90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3ead94: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x3ead94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x3ead98: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x3ead98u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3ead9c: 0x90710000  lbu         $s1, 0x0($v1)
    ctx->pc = 0x3ead9cu;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3eada0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3eada0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x3eada4: 0x14910003  bne         $a0, $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3EADA4u;
    {
        const bool branch_taken_0x3eada4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 17));
        ctx->pc = 0x3EADA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EADA4u;
        // 0x3eada8: 0x90540000  lbu         $s4, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 20, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eada4) {
            ctx->pc = 0x3EADB4u;
            goto label_3eadb4;
        }
    }
    ctx->pc = 0x3EADACu;
    // 0x3eadac: 0x52340018  beql        $s1, $s4, . + 4 + (0x18 << 2)
    ctx->pc = 0x3EADACu;
    {
        const bool branch_taken_0x3eadac = (GPR_U64(ctx, 17) == GPR_U64(ctx, 20));
        if (branch_taken_0x3eadac) {
            ctx->pc = 0x3EADB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EADACu;
            // 0x3eadb0: 0x92a2ffff  lbu         $v0, -0x1($s5) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 4294967295)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EAE10u;
            goto label_3eae10;
        }
    }
    ctx->pc = 0x3EADB4u;
label_3eadb4:
    // 0x3eadb4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3eadb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3eadb8: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x3EADB8u;
    SET_GPR_U32(ctx, 31, 0x3EADC0u);
    ctx->pc = 0x3EADBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EADB8u;
    // 0x3eadbc: 0xdfa40018  ld          $a0, 0x18($sp) (Delay Slot)
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x3EADB8u, 0x3EADC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EADC0u;
label_3eadc0:
    // 0x3eadc0: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x3eadc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3eadc4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3eadc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3eadc8: 0xdfa40020  ld          $a0, 0x20($sp)
    ctx->pc = 0x3eadc8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3eadcc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3eadccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3eadd0: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x3eadd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x3eadd4: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x3EADD4u;
    SET_GPR_U32(ctx, 31, 0x3EADDCu);
    ctx->pc = 0x3EADD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EADD4u;
    // 0x3eadd8: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x3EADD4u, 0x3EADDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EADDCu;
label_3eaddc:
    // 0x3eaddc: 0xdfa40028  ld          $a0, 0x28($sp)
    ctx->pc = 0x3eaddcu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3eade0: 0x202802d  daddu       $s0, $s0, $v0
    ctx->pc = 0x3eade0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
    // 0x3eade4: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x3EADE4u;
    SET_GPR_U32(ctx, 31, 0x3EADECu);
    ctx->pc = 0x3EADE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EADE4u;
    // 0x3eade8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x3EADE4u, 0x3EADECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EADECu;
label_3eadec:
    // 0x3eadec: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x3eadecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3eadf0: 0x202802d  daddu       $s0, $s0, $v0
    ctx->pc = 0x3eadf0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
    // 0x3eadf4: 0x108478  dsll        $s0, $s0, 17
    ctx->pc = 0x3eadf4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << 17);
    // 0x3eadf8: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x3eadf8u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x3eadfc: 0x8c820258  lw          $v0, 0x258($a0)
    ctx->pc = 0x3eadfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 600)));
    // 0x3eae00: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x3eae00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x3eae04: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3eae04u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3eae08: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3EAE08u;
    {
        const bool branch_taken_0x3eae08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EAE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAE08u;
        // 0x3eae0c: 0xa2630000  sb          $v1, 0x0($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eae08) {
            ctx->pc = 0x3EAE14u;
            goto label_3eae14;
        }
    }
    ctx->pc = 0x3EAE10u;
label_3eae10:
    // 0x3eae10: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x3eae10u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_3eae14:
    // 0x3eae14: 0xdfa60008  ld          $a2, 0x8($sp)
    ctx->pc = 0x3eae14u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3eae18: 0x66d60002  daddiu      $s6, $s6, 0x2
    ctx->pc = 0x3eae18u;
    SET_GPR_S64(ctx, 22, (int64_t)GPR_S64(ctx, 22) + (int64_t)(int32_t)2);
    // 0x3eae1c: 0x2c6102b  sltu        $v0, $s6, $a2
    ctx->pc = 0x3eae1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x3eae20: 0x1440ffab  bnez        $v0, . + 4 + (-0x55 << 2)
    ctx->pc = 0x3EAE20u;
    {
        const bool branch_taken_0x3eae20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EAE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAE20u;
        // 0x3eae24: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eae20) {
            ctx->pc = 0x3EACD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3eacd0;
        }
    }
    ctx->pc = 0x3EAE28u;
    // 0x3eae28: 0x10000162  b           . + 4 + (0x162 << 2)
    ctx->pc = 0x3EAE28u;
    {
        const bool branch_taken_0x3eae28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EAE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAE28u;
        // 0x3eae2c: 0x8fa60004  lw          $a2, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eae28) {
            ctx->pc = 0x3EB3B4u;
            goto label_3eb3b4;
        }
    }
    ctx->pc = 0x3EAE30u;
label_3eae30:
    // 0x3eae30: 0x1040015f  beqz        $v0, . + 4 + (0x15F << 2)
    ctx->pc = 0x3EAE30u;
    {
        const bool branch_taken_0x3eae30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EAE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAE30u;
        // 0x3eae34: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eae30) {
            ctx->pc = 0x3EB3B0u;
            goto label_3eb3b0;
        }
    }
    ctx->pc = 0x3EAE38u;
    // 0x3eae38: 0xdfa30008  ld          $v1, 0x8($sp)
    ctx->pc = 0x3eae38u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3eae3c: 0x3c0982d  daddu       $s3, $fp, $zero
    ctx->pc = 0x3eae3cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3eae40: 0x3c0a02d  daddu       $s4, $fp, $zero
    ctx->pc = 0x3eae40u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3eae44: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3EAE44u;
    {
        const bool branch_taken_0x3eae44 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x3EAE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAE44u;
        // 0x3eae48: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eae44) {
            ctx->pc = 0x3EAE54u;
            goto label_3eae54;
        }
    }
    ctx->pc = 0x3EAE4Cu;
    // 0x3eae4c: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x3EAE4Cu;
    {
        const bool branch_taken_0x3eae4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EAE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAE4Cu;
        // 0x3eae50: 0x280a82d  daddu       $s5, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eae4c) {
            ctx->pc = 0x3EAEE0u;
            goto label_3eaee0;
        }
    }
    ctx->pc = 0x3EAE54u;
label_3eae54:
    // 0x3eae54: 0x27c20003  addiu       $v0, $fp, 0x3
    ctx->pc = 0x3eae54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 3));
    // 0x3eae58: 0x93c50000  lbu         $a1, 0x0($fp)
    ctx->pc = 0x3eae58u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x3eae5c: 0x93d10001  lbu         $s1, 0x1($fp)
    ctx->pc = 0x3eae5cu;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 1)));
    // 0x3eae60: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3eae60u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3eae64: 0x14b10003  bne         $a1, $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3EAE64u;
    {
        const bool branch_taken_0x3eae64 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 17));
        ctx->pc = 0x3EAE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAE64u;
        // 0x3eae68: 0x93d20002  lbu         $s2, 0x2($fp) (Delay Slot)
        SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eae64) {
            ctx->pc = 0x3EAE74u;
            goto label_3eae74;
        }
    }
    ctx->pc = 0x3EAE6Cu;
    // 0x3eae6c: 0x52320014  beql        $s1, $s2, . + 4 + (0x14 << 2)
    ctx->pc = 0x3EAE6Cu;
    {
        const bool branch_taken_0x3eae6c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 18));
        if (branch_taken_0x3eae6c) {
            ctx->pc = 0x3EAE70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EAE6Cu;
            // 0x3eae70: 0x9042ffff  lbu         $v0, -0x1($v0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294967295)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EAEC0u;
            goto label_3eaec0;
        }
    }
    ctx->pc = 0x3EAE74u;
label_3eae74:
    // 0x3eae74: 0xdfa40018  ld          $a0, 0x18($sp)
    ctx->pc = 0x3eae74u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3eae78: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x3EAE78u;
    SET_GPR_U32(ctx, 31, 0x3EAE80u);
    ctx->pc = 0x3EAE7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EAE78u;
    // 0x3eae7c: 0x27d30001  addiu       $s3, $fp, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x3EAE78u, 0x3EAE80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EAE80u;
label_3eae80:
    // 0x3eae80: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x3eae80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3eae84: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3eae84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3eae88: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3eae88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3eae8c: 0x34840001  ori         $a0, $a0, 0x1
    ctx->pc = 0x3eae8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
    // 0x3eae90: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x3eae90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x3eae94: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x3EAE94u;
    SET_GPR_U32(ctx, 31, 0x3EAE9Cu);
    ctx->pc = 0x3EAE98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EAE94u;
    // 0x3eae98: 0xdfa40020  ld          $a0, 0x20($sp) (Delay Slot)
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x3EAE94u, 0x3EAE9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EAE9Cu;
label_3eae9c:
    // 0x3eae9c: 0xdfa40028  ld          $a0, 0x28($sp)
    ctx->pc = 0x3eae9cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3eaea0: 0x202802d  daddu       $s0, $s0, $v0
    ctx->pc = 0x3eaea0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
    // 0x3eaea4: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x3EAEA4u;
    SET_GPR_U32(ctx, 31, 0x3EAEACu);
    ctx->pc = 0x3EAEA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EAEA4u;
    // 0x3eaea8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x3EAEA4u, 0x3EAEACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EAEACu;
label_3eaeac:
    // 0x3eaeac: 0x202802d  daddu       $s0, $s0, $v0
    ctx->pc = 0x3eaeacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
    // 0x3eaeb0: 0x1083fa  dsrl        $s0, $s0, 15
    ctx->pc = 0x3eaeb0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> 15);
    // 0x3eaeb4: 0x321000ff  andi        $s0, $s0, 0xFF
    ctx->pc = 0x3eaeb4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x3eaeb8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3EAEB8u;
    {
        const bool branch_taken_0x3eaeb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EAEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAEB8u;
        // 0x3eaebc: 0xa3d00000  sb          $s0, 0x0($fp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 30), 0), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eaeb8) {
            ctx->pc = 0x3EAEC8u;
            goto label_3eaec8;
        }
    }
    ctx->pc = 0x3EAEC0u;
label_3eaec0:
    // 0x3eaec0: 0x27d30001  addiu       $s3, $fp, 0x1
    ctx->pc = 0x3eaec0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x3eaec4: 0xa3c20000  sb          $v0, 0x0($fp)
    ctx->pc = 0x3eaec4u;
    WRITE8(ADD32(GPR_U32(ctx, 30), 0), (uint8_t)GPR_U32(ctx, 2));
label_3eaec8:
    // 0x3eaec8: 0xdfa60008  ld          $a2, 0x8($sp)
    ctx->pc = 0x3eaec8u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3eaecc: 0x66d60001  daddiu      $s6, $s6, 0x1
    ctx->pc = 0x3eaeccu;
    SET_GPR_S64(ctx, 22, (int64_t)GPR_S64(ctx, 22) + (int64_t)(int32_t)1);
    // 0x3eaed0: 0x2c6102b  sltu        $v0, $s6, $a2
    ctx->pc = 0x3eaed0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x3eaed4: 0x10400137  beqz        $v0, . + 4 + (0x137 << 2)
    ctx->pc = 0x3EAED4u;
    {
        const bool branch_taken_0x3eaed4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EAED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAED4u;
        // 0x3eaed8: 0x8fa60004  lw          $a2, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eaed4) {
            ctx->pc = 0x3EB3B4u;
            goto label_3eb3b4;
        }
    }
    ctx->pc = 0x3EAEDCu;
    // 0x3eaedc: 0x280a82d  daddu       $s5, $s4, $zero
    ctx->pc = 0x3eaedcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3eaee0:
    // 0x3eaee0: 0x2a0902d  daddu       $s2, $s5, $zero
    ctx->pc = 0x3eaee0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3eaee4: 0x0  nop
    ctx->pc = 0x3eaee4u;
    // NOP
label_3eaee8:
    // 0x3eaee8: 0x92450000  lbu         $a1, 0x0($s2)
    ctx->pc = 0x3eaee8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3eaeec: 0x92510001  lbu         $s1, 0x1($s2)
    ctx->pc = 0x3eaeecu;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x3eaef0: 0x14b10003  bne         $a1, $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3EAEF0u;
    {
        const bool branch_taken_0x3eaef0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 17));
        ctx->pc = 0x3EAEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAEF0u;
        // 0x3eaef4: 0x92540002  lbu         $s4, 0x2($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 20, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eaef0) {
            ctx->pc = 0x3EAF00u;
            goto label_3eaf00;
        }
    }
    ctx->pc = 0x3EAEF8u;
    // 0x3eaef8: 0x52340013  beql        $s1, $s4, . + 4 + (0x13 << 2)
    ctx->pc = 0x3EAEF8u;
    {
        const bool branch_taken_0x3eaef8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 20));
        if (branch_taken_0x3eaef8) {
            ctx->pc = 0x3EAEFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EAEF8u;
            // 0x3eaefc: 0x92a20002  lbu         $v0, 0x2($s5) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EAF48u;
            goto label_3eaf48;
        }
    }
    ctx->pc = 0x3EAF00u;
label_3eaf00:
    // 0x3eaf00: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x3EAF00u;
    SET_GPR_U32(ctx, 31, 0x3EAF08u);
    ctx->pc = 0x3EAF04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EAF00u;
    // 0x3eaf04: 0xdfa40018  ld          $a0, 0x18($sp) (Delay Slot)
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x3EAF00u, 0x3EAF08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EAF08u;
label_3eaf08:
    // 0x3eaf08: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x3eaf08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3eaf0c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3eaf0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3eaf10: 0xdfa40020  ld          $a0, 0x20($sp)
    ctx->pc = 0x3eaf10u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3eaf14: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3eaf14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3eaf18: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x3eaf18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x3eaf1c: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x3EAF1Cu;
    SET_GPR_U32(ctx, 31, 0x3EAF24u);
    ctx->pc = 0x3EAF20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EAF1Cu;
    // 0x3eaf20: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x3EAF1Cu, 0x3EAF24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EAF24u;
label_3eaf24:
    // 0x3eaf24: 0xdfa40028  ld          $a0, 0x28($sp)
    ctx->pc = 0x3eaf24u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3eaf28: 0x202802d  daddu       $s0, $s0, $v0
    ctx->pc = 0x3eaf28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
    // 0x3eaf2c: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x3EAF2Cu;
    SET_GPR_U32(ctx, 31, 0x3EAF34u);
    ctx->pc = 0x3EAF30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EAF2Cu;
    // 0x3eaf30: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x3EAF2Cu, 0x3EAF34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EAF34u;
label_3eaf34:
    // 0x3eaf34: 0x202802d  daddu       $s0, $s0, $v0
    ctx->pc = 0x3eaf34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
    // 0x3eaf38: 0x1083fa  dsrl        $s0, $s0, 15
    ctx->pc = 0x3eaf38u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> 15);
    // 0x3eaf3c: 0x321000ff  andi        $s0, $s0, 0xFF
    ctx->pc = 0x3eaf3cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x3eaf40: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3EAF40u;
    {
        const bool branch_taken_0x3eaf40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EAF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAF40u;
        // 0x3eaf44: 0xa2700000  sb          $s0, 0x0($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eaf40) {
            ctx->pc = 0x3EAF4Cu;
            goto label_3eaf4c;
        }
    }
    ctx->pc = 0x3EAF48u;
label_3eaf48:
    // 0x3eaf48: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x3eaf48u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_3eaf4c:
    // 0x3eaf4c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3eaf4cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x3eaf50: 0x92450003  lbu         $a1, 0x3($s2)
    ctx->pc = 0x3eaf50u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
    // 0x3eaf54: 0x26b50006  addiu       $s5, $s5, 0x6
    ctx->pc = 0x3eaf54u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 6));
    // 0x3eaf58: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x3eaf58u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x3eaf5c: 0x92510000  lbu         $s1, 0x0($s2)
    ctx->pc = 0x3eaf5cu;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3eaf60: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3eaf60u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x3eaf64: 0x92540000  lbu         $s4, 0x0($s2)
    ctx->pc = 0x3eaf64u;
    SET_GPR_ZE32(ctx, 20, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3eaf68: 0x14b10003  bne         $a1, $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3EAF68u;
    {
        const bool branch_taken_0x3eaf68 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 17));
        ctx->pc = 0x3EAF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAF68u;
        // 0x3eaf6c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eaf68) {
            ctx->pc = 0x3EAF78u;
            goto label_3eaf78;
        }
    }
    ctx->pc = 0x3EAF70u;
    // 0x3eaf70: 0x52340013  beql        $s1, $s4, . + 4 + (0x13 << 2)
    ctx->pc = 0x3EAF70u;
    {
        const bool branch_taken_0x3eaf70 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 20));
        if (branch_taken_0x3eaf70) {
            ctx->pc = 0x3EAF74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EAF70u;
            // 0x3eaf74: 0x92a2ffff  lbu         $v0, -0x1($s5) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 4294967295)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EAFC0u;
            goto label_3eafc0;
        }
    }
    ctx->pc = 0x3EAF78u;
label_3eaf78:
    // 0x3eaf78: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x3EAF78u;
    SET_GPR_U32(ctx, 31, 0x3EAF80u);
    ctx->pc = 0x3EAF7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EAF78u;
    // 0x3eaf7c: 0xdfa40018  ld          $a0, 0x18($sp) (Delay Slot)
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x3EAF78u, 0x3EAF80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EAF80u;
label_3eaf80:
    // 0x3eaf80: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x3eaf80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3eaf84: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3eaf84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3eaf88: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3eaf88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3eaf8c: 0x34840001  ori         $a0, $a0, 0x1
    ctx->pc = 0x3eaf8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
    // 0x3eaf90: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x3eaf90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x3eaf94: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x3EAF94u;
    SET_GPR_U32(ctx, 31, 0x3EAF9Cu);
    ctx->pc = 0x3EAF98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EAF94u;
    // 0x3eaf98: 0xdfa40020  ld          $a0, 0x20($sp) (Delay Slot)
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x3EAF94u, 0x3EAF9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EAF9Cu;
label_3eaf9c:
    // 0x3eaf9c: 0xdfa40028  ld          $a0, 0x28($sp)
    ctx->pc = 0x3eaf9cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3eafa0: 0x202802d  daddu       $s0, $s0, $v0
    ctx->pc = 0x3eafa0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
    // 0x3eafa4: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x3EAFA4u;
    SET_GPR_U32(ctx, 31, 0x3EAFACu);
    ctx->pc = 0x3EAFA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EAFA4u;
    // 0x3eafa8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x3EAFA4u, 0x3EAFACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EAFACu;
label_3eafac:
    // 0x3eafac: 0x202802d  daddu       $s0, $s0, $v0
    ctx->pc = 0x3eafacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
    // 0x3eafb0: 0x1083fa  dsrl        $s0, $s0, 15
    ctx->pc = 0x3eafb0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> 15);
    // 0x3eafb4: 0x321000ff  andi        $s0, $s0, 0xFF
    ctx->pc = 0x3eafb4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x3eafb8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3EAFB8u;
    {
        const bool branch_taken_0x3eafb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EAFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAFB8u;
        // 0x3eafbc: 0xa2700000  sb          $s0, 0x0($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eafb8) {
            ctx->pc = 0x3EAFC4u;
            goto label_3eafc4;
        }
    }
    ctx->pc = 0x3EAFC0u;
label_3eafc0:
    // 0x3eafc0: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x3eafc0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_3eafc4:
    // 0x3eafc4: 0xdfa60008  ld          $a2, 0x8($sp)
    ctx->pc = 0x3eafc4u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3eafc8: 0x66d60002  daddiu      $s6, $s6, 0x2
    ctx->pc = 0x3eafc8u;
    SET_GPR_S64(ctx, 22, (int64_t)GPR_S64(ctx, 22) + (int64_t)(int32_t)2);
    // 0x3eafcc: 0x2c6102b  sltu        $v0, $s6, $a2
    ctx->pc = 0x3eafccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x3eafd0: 0x1440ffc5  bnez        $v0, . + 4 + (-0x3B << 2)
    ctx->pc = 0x3EAFD0u;
    {
        const bool branch_taken_0x3eafd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EAFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAFD0u;
        // 0x3eafd4: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eafd0) {
            ctx->pc = 0x3EAEE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3eaee8;
        }
    }
    ctx->pc = 0x3EAFD8u;
    // 0x3eafd8: 0x100000f6  b           . + 4 + (0xF6 << 2)
    ctx->pc = 0x3EAFD8u;
    {
        const bool branch_taken_0x3eafd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EAFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAFD8u;
        // 0x3eafdc: 0x8fa60004  lw          $a2, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eafd8) {
            ctx->pc = 0x3EB3B4u;
            goto label_3eb3b4;
        }
    }
    ctx->pc = 0x3EAFE0u;
label_3eafe0:
    // 0x3eafe0: 0x8c620268  lw          $v0, 0x268($v1)
    ctx->pc = 0x3eafe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 616)));
    // 0x3eafe4: 0x10400062  beqz        $v0, . + 4 + (0x62 << 2)
    ctx->pc = 0x3EAFE4u;
    {
        const bool branch_taken_0x3eafe4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EAFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAFE4u;
        // 0x3eafe8: 0xdfa20008  ld          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eafe4) {
            ctx->pc = 0x3EB170u;
            goto label_3eb170;
        }
    }
    ctx->pc = 0x3EAFECu;
    // 0x3eafec: 0x8c620264  lw          $v0, 0x264($v1)
    ctx->pc = 0x3eafecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 612)));
    // 0x3eaff0: 0x1040005e  beqz        $v0, . + 4 + (0x5E << 2)
    ctx->pc = 0x3EAFF0u;
    {
        const bool branch_taken_0x3eaff0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EAFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAFF0u;
        // 0x3eaff4: 0xdfa40008  ld          $a0, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eaff0) {
            ctx->pc = 0x3EB16Cu;
            goto label_3eb16c;
        }
    }
    ctx->pc = 0x3EAFF8u;
    // 0x3eaff8: 0x108000ed  beqz        $a0, . + 4 + (0xED << 2)
    ctx->pc = 0x3EAFF8u;
    {
        const bool branch_taken_0x3eaff8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EAFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAFF8u;
        // 0x3eaffc: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eaff8) {
            ctx->pc = 0x3EB3B0u;
            goto label_3eb3b0;
        }
    }
    ctx->pc = 0x3EB000u;
    // 0x3eb000: 0x3c0a82d  daddu       $s5, $fp, $zero
    ctx->pc = 0x3eb000u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3eb004: 0x3c0a02d  daddu       $s4, $fp, $zero
    ctx->pc = 0x3eb004u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3eb008:
    // 0x3eb008: 0x92840001  lbu         $a0, 0x1($s4)
    ctx->pc = 0x3eb008u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1)));
    // 0x3eb00c: 0x92820000  lbu         $v0, 0x0($s4)
    ctx->pc = 0x3eb00cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x3eb010: 0x26940002  addiu       $s4, $s4, 0x2
    ctx->pc = 0x3eb010u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
    // 0x3eb014: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x3eb014u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x3eb018: 0x92830000  lbu         $v1, 0x0($s4)
    ctx->pc = 0x3eb018u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x3eb01c: 0x92850001  lbu         $a1, 0x1($s4)
    ctx->pc = 0x3eb01cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1)));
    // 0x3eb020: 0x823825  or          $a3, $a0, $v0
    ctx->pc = 0x3eb020u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x3eb024: 0x26940002  addiu       $s4, $s4, 0x2
    ctx->pc = 0x3eb024u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
    // 0x3eb028: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x3eb028u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x3eb02c: 0x92820000  lbu         $v0, 0x0($s4)
    ctx->pc = 0x3eb02cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x3eb030: 0xa34825  or          $t1, $a1, $v1
    ctx->pc = 0x3eb030u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x3eb034: 0x92840001  lbu         $a0, 0x1($s4)
    ctx->pc = 0x3eb034u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1)));
    // 0x3eb038: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x3eb038u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x3eb03c: 0x26940002  addiu       $s4, $s4, 0x2
    ctx->pc = 0x3eb03cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
    // 0x3eb040: 0x14e90005  bne         $a3, $t1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3EB040u;
    {
        const bool branch_taken_0x3eb040 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 9));
        ctx->pc = 0x3EB044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB040u;
        // 0x3eb044: 0x823025  or          $a2, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb040) {
            ctx->pc = 0x3EB058u;
            goto label_3eb058;
        }
    }
    ctx->pc = 0x3EB048u;
    // 0x3eb048: 0x15260004  bne         $t1, $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x3EB048u;
    {
        const bool branch_taken_0x3eb048 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 6));
        ctx->pc = 0x3EB04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB048u;
        // 0x3eb04c: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb048) {
            ctx->pc = 0x3EB05Cu;
            goto label_3eb05c;
        }
    }
    ctx->pc = 0x3EB050u;
    // 0x3eb050: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x3EB050u;
    {
        const bool branch_taken_0x3eb050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EB054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB050u;
        // 0x3eb054: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb050) {
            ctx->pc = 0x3EB140u;
            goto label_3eb140;
        }
    }
    ctx->pc = 0x3EB058u;
label_3eb058:
    // 0x3eb058: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x3eb058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_3eb05c:
    // 0x3eb05c: 0x30c400ff  andi        $a0, $a2, 0xFF
    ctx->pc = 0x3eb05cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x3eb060: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x3eb060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3eb064: 0x63202  srl         $a2, $a2, 8
    ctx->pc = 0x3eb064u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 8));
    // 0x3eb068: 0x8c530248  lw          $s3, 0x248($v0)
    ctx->pc = 0x3eb068u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 584)));
    // 0x3eb06c: 0x63040  sll         $a2, $a2, 1
    ctx->pc = 0x3eb06cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x3eb070: 0x8c650268  lw          $a1, 0x268($v1)
    ctx->pc = 0x3eb070u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 616)));
    // 0x3eb074: 0x30e200ff  andi        $v0, $a3, 0xFF
    ctx->pc = 0x3eb074u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x3eb078: 0x312300ff  andi        $v1, $t1, 0xFF
    ctx->pc = 0x3eb078u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
    // 0x3eb07c: 0x2621007  srav        $v0, $v0, $s3
    ctx->pc = 0x3eb07cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 19) & 0x1F));
    // 0x3eb080: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3eb080u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3eb084: 0x2631807  srav        $v1, $v1, $s3
    ctx->pc = 0x3eb084u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 19) & 0x1F));
    // 0x3eb088: 0x2642007  srav        $a0, $a0, $s3
    ctx->pc = 0x3eb088u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 19) & 0x1F));
    // 0x3eb08c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x3eb08cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x3eb090: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3eb090u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3eb094: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x3eb094u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3eb098: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x3eb098u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3eb09c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x3eb09cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3eb0a0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3eb0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3eb0a4: 0x91202  srl         $v0, $t1, 8
    ctx->pc = 0x3eb0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 8));
    // 0x3eb0a8: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x3eb0a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3eb0ac: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x3eb0acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x3eb0b0: 0x73a02  srl         $a3, $a3, 8
    ctx->pc = 0x3eb0b0u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 8));
    // 0x3eb0b4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3eb0b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3eb0b8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x3eb0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x3eb0bc: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x3eb0bcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x3eb0c0: 0x94510000  lhu         $s1, 0x0($v0)
    ctx->pc = 0x3eb0c0u;
    SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3eb0c4: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x3eb0c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x3eb0c8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x3eb0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3eb0cc: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x3eb0ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x3eb0d0: 0x94e50000  lhu         $a1, 0x0($a3)
    ctx->pc = 0x3eb0d0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3eb0d4: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x3eb0d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x3eb0d8: 0xdfa40018  ld          $a0, 0x18($sp)
    ctx->pc = 0x3eb0d8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3eb0dc: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x3eb0dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x3eb0e0: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x3EB0E0u;
    SET_GPR_U32(ctx, 31, 0x3EB0E8u);
    ctx->pc = 0x3EB0E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EB0E0u;
    // 0x3eb0e4: 0x94d20000  lhu         $s2, 0x0($a2) (Delay Slot)
    SET_GPR_ZE32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x3EB0E0u, 0x3EB0E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EB0E8u;
label_3eb0e8:
    // 0x3eb0e8: 0xdfa40020  ld          $a0, 0x20($sp)
    ctx->pc = 0x3eb0e8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3eb0ec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3eb0ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3eb0f0: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x3EB0F0u;
    SET_GPR_U32(ctx, 31, 0x3EB0F8u);
    ctx->pc = 0x3EB0F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EB0F0u;
    // 0x3eb0f4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x3EB0F0u, 0x3EB0F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EB0F8u;
label_3eb0f8:
    // 0x3eb0f8: 0xdfa40028  ld          $a0, 0x28($sp)
    ctx->pc = 0x3eb0f8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3eb0fc: 0x202802d  daddu       $s0, $s0, $v0
    ctx->pc = 0x3eb0fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
    // 0x3eb100: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x3EB100u;
    SET_GPR_U32(ctx, 31, 0x3EB108u);
    ctx->pc = 0x3EB104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EB100u;
    // 0x3eb104: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x3EB100u, 0x3EB108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EB108u;
label_3eb108:
    // 0x3eb108: 0x202802d  daddu       $s0, $s0, $v0
    ctx->pc = 0x3eb108u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
    // 0x3eb10c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x3eb10cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3eb110: 0x1083fa  dsrl        $s0, $s0, 15
    ctx->pc = 0x3eb110u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> 15);
    // 0x3eb114: 0x3210ffff  andi        $s0, $s0, 0xFFFF
    ctx->pc = 0x3eb114u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x3eb118: 0x8c640264  lw          $a0, 0x264($v1)
    ctx->pc = 0x3eb118u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 612)));
    // 0x3eb11c: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x3eb11cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x3eb120: 0x2621007  srav        $v0, $v0, $s3
    ctx->pc = 0x3eb120u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 19) & 0x1F));
    // 0x3eb124: 0x108202  srl         $s0, $s0, 8
    ctx->pc = 0x3eb124u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 16), 8));
    // 0x3eb128: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3eb128u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3eb12c: 0x108040  sll         $s0, $s0, 1
    ctx->pc = 0x3eb12cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x3eb130: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3eb130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3eb134: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3eb134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3eb138: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x3eb138u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x3eb13c: 0x96040000  lhu         $a0, 0x0($s0)
    ctx->pc = 0x3eb13cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_3eb140:
    // 0x3eb140: 0x41202  srl         $v0, $a0, 8
    ctx->pc = 0x3eb140u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
    // 0x3eb144: 0x66d60001  daddiu      $s6, $s6, 0x1
    ctx->pc = 0x3eb144u;
    SET_GPR_S64(ctx, 22, (int64_t)GPR_S64(ctx, 22) + (int64_t)(int32_t)1);
    // 0x3eb148: 0xa2a20000  sb          $v0, 0x0($s5)
    ctx->pc = 0x3eb148u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3eb14c: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x3eb14cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x3eb150: 0xdfa60008  ld          $a2, 0x8($sp)
    ctx->pc = 0x3eb150u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3eb154: 0xa2a40000  sb          $a0, 0x0($s5)
    ctx->pc = 0x3eb154u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x3eb158: 0x2c6182b  sltu        $v1, $s6, $a2
    ctx->pc = 0x3eb158u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x3eb15c: 0x1460ffaa  bnez        $v1, . + 4 + (-0x56 << 2)
    ctx->pc = 0x3EB15Cu;
    {
        const bool branch_taken_0x3eb15c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EB160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB15Cu;
        // 0x3eb160: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb15c) {
            ctx->pc = 0x3EB008u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3eb008;
        }
    }
    ctx->pc = 0x3EB164u;
    // 0x3eb164: 0x10000093  b           . + 4 + (0x93 << 2)
    ctx->pc = 0x3EB164u;
    {
        const bool branch_taken_0x3eb164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EB168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB164u;
        // 0x3eb168: 0x8fa60004  lw          $a2, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb164) {
            ctx->pc = 0x3EB3B4u;
            goto label_3eb3b4;
        }
    }
    ctx->pc = 0x3EB16Cu;
label_3eb16c:
    // 0x3eb16c: 0xdfa20008  ld          $v0, 0x8($sp)
    ctx->pc = 0x3eb16cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_3eb170:
    // 0x3eb170: 0x1040008f  beqz        $v0, . + 4 + (0x8F << 2)
    ctx->pc = 0x3EB170u;
    {
        const bool branch_taken_0x3eb170 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EB174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB170u;
        // 0x3eb174: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb170) {
            ctx->pc = 0x3EB3B0u;
            goto label_3eb3b0;
        }
    }
    ctx->pc = 0x3EB178u;
    // 0x3eb178: 0xdfa30008  ld          $v1, 0x8($sp)
    ctx->pc = 0x3eb178u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3eb17c: 0x3c0902d  daddu       $s2, $fp, $zero
    ctx->pc = 0x3eb17cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3eb180: 0x3c0a02d  daddu       $s4, $fp, $zero
    ctx->pc = 0x3eb180u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3eb184: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3EB184u;
    {
        const bool branch_taken_0x3eb184 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x3EB188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB184u;
        // 0x3eb188: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb184) {
            ctx->pc = 0x3EB194u;
            goto label_3eb194;
        }
    }
    ctx->pc = 0x3EB18Cu;
    // 0x3eb18c: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x3EB18Cu;
    {
        const bool branch_taken_0x3eb18c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EB190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB18Cu;
        // 0x3eb190: 0x280a82d  daddu       $s5, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb18c) {
            ctx->pc = 0x3EB240u;
            goto label_3eb240;
        }
    }
    ctx->pc = 0x3EB194u;
label_3eb194:
    // 0x3eb194: 0x93c30000  lbu         $v1, 0x0($fp)
    ctx->pc = 0x3eb194u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x3eb198: 0x27d40006  addiu       $s4, $fp, 0x6
    ctx->pc = 0x3eb198u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 30), 6));
    // 0x3eb19c: 0x93c40002  lbu         $a0, 0x2($fp)
    ctx->pc = 0x3eb19cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 2)));
    // 0x3eb1a0: 0x93c50004  lbu         $a1, 0x4($fp)
    ctx->pc = 0x3eb1a0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x3eb1a4: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x3eb1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x3eb1a8: 0x93c60001  lbu         $a2, 0x1($fp)
    ctx->pc = 0x3eb1a8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 1)));
    // 0x3eb1ac: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x3eb1acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x3eb1b0: 0x93c70003  lbu         $a3, 0x3($fp)
    ctx->pc = 0x3eb1b0u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 3)));
    // 0x3eb1b4: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x3eb1b4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
    // 0x3eb1b8: 0x93c20005  lbu         $v0, 0x5($fp)
    ctx->pc = 0x3eb1b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 5)));
    // 0x3eb1bc: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x3eb1bcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x3eb1c0: 0xe48825  or          $s1, $a3, $a0
    ctx->pc = 0x3eb1c0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 7) | GPR_U64(ctx, 4));
    // 0x3eb1c4: 0x14d10003  bne         $a2, $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3EB1C4u;
    {
        const bool branch_taken_0x3eb1c4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 17));
        ctx->pc = 0x3EB1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB1C4u;
        // 0x3eb1c8: 0x459825  or          $s3, $v0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb1c4) {
            ctx->pc = 0x3EB1D4u;
            goto label_3eb1d4;
        }
    }
    ctx->pc = 0x3EB1CCu;
    // 0x3eb1cc: 0x12330005  beq         $s1, $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x3EB1CCu;
    {
        const bool branch_taken_0x3eb1cc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 19));
        ctx->pc = 0x3EB1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB1CCu;
        // 0x3eb1d0: 0xdfa40018  ld          $a0, 0x18($sp) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb1cc) {
            ctx->pc = 0x3EB1E4u;
            goto label_3eb1e4;
        }
    }
    ctx->pc = 0x3EB1D4u;
label_3eb1d4:
    // 0x3eb1d4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x3eb1d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3eb1d8: 0x34840001  ori         $a0, $a0, 0x1
    ctx->pc = 0x3eb1d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
    // 0x3eb1dc: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x3eb1dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x3eb1e0: 0xdfa40018  ld          $a0, 0x18($sp)
    ctx->pc = 0x3eb1e0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_3eb1e4:
    // 0x3eb1e4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x3eb1e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3eb1e8: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x3EB1E8u;
    SET_GPR_U32(ctx, 31, 0x3EB1F0u);
    ctx->pc = 0x3EB1ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EB1E8u;
    // 0x3eb1ec: 0x66d60001  daddiu      $s6, $s6, 0x1 (Delay Slot)
    SET_GPR_S64(ctx, 22, (int64_t)GPR_S64(ctx, 22) + (int64_t)(int32_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x3EB1E8u, 0x3EB1F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EB1F0u;
label_3eb1f0:
    // 0x3eb1f0: 0xdfa40020  ld          $a0, 0x20($sp)
    ctx->pc = 0x3eb1f0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3eb1f4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3eb1f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3eb1f8: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x3EB1F8u;
    SET_GPR_U32(ctx, 31, 0x3EB200u);
    ctx->pc = 0x3EB1FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EB1F8u;
    // 0x3eb1fc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x3EB1F8u, 0x3EB200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EB200u;
label_3eb200:
    // 0x3eb200: 0xdfa40028  ld          $a0, 0x28($sp)
    ctx->pc = 0x3eb200u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3eb204: 0x202802d  daddu       $s0, $s0, $v0
    ctx->pc = 0x3eb204u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
    // 0x3eb208: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x3EB208u;
    SET_GPR_U32(ctx, 31, 0x3EB210u);
    ctx->pc = 0x3EB20Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EB208u;
    // 0x3eb20c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x3EB208u, 0x3EB210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EB210u;
label_3eb210:
    // 0x3eb210: 0x202802d  daddu       $s0, $s0, $v0
    ctx->pc = 0x3eb210u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
    // 0x3eb214: 0xdfa60008  ld          $a2, 0x8($sp)
    ctx->pc = 0x3eb214u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3eb218: 0x1083fa  dsrl        $s0, $s0, 15
    ctx->pc = 0x3eb218u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> 15);
    // 0x3eb21c: 0x3210ffff  andi        $s0, $s0, 0xFFFF
    ctx->pc = 0x3eb21cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x3eb220: 0x2c6182b  sltu        $v1, $s6, $a2
    ctx->pc = 0x3eb220u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x3eb224: 0x101202  srl         $v0, $s0, 8
    ctx->pc = 0x3eb224u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 8));
    // 0x3eb228: 0xa2420000  sb          $v0, 0x0($s2)
    ctx->pc = 0x3eb228u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3eb22c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3eb22cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x3eb230: 0xa2500000  sb          $s0, 0x0($s2)
    ctx->pc = 0x3eb230u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 16));
    // 0x3eb234: 0x1060005e  beqz        $v1, . + 4 + (0x5E << 2)
    ctx->pc = 0x3EB234u;
    {
        const bool branch_taken_0x3eb234 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EB238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB234u;
        // 0x3eb238: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb234) {
            ctx->pc = 0x3EB3B0u;
            goto label_3eb3b0;
        }
    }
    ctx->pc = 0x3EB23Cu;
    // 0x3eb23c: 0x280a82d  daddu       $s5, $s4, $zero
    ctx->pc = 0x3eb23cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3eb240:
    // 0x3eb240: 0x240982d  daddu       $s3, $s2, $zero
    ctx->pc = 0x3eb240u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3eb244: 0xafb50030  sw          $s5, 0x30($sp)
    ctx->pc = 0x3eb244u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 21));
    // 0x3eb248: 0x2a0902d  daddu       $s2, $s5, $zero
    ctx->pc = 0x3eb248u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3eb24c: 0x2a0b82d  daddu       $s7, $s5, $zero
    ctx->pc = 0x3eb24cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3eb250:
    // 0x3eb250: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x3eb250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3eb254: 0x92430000  lbu         $v1, 0x0($s2)
    ctx->pc = 0x3eb254u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3eb258: 0x90460001  lbu         $a2, 0x1($v0)
    ctx->pc = 0x3eb258u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x3eb25c: 0x92440002  lbu         $a0, 0x2($s2)
    ctx->pc = 0x3eb25cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x3eb260: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x3eb260u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x3eb264: 0x92450004  lbu         $a1, 0x4($s2)
    ctx->pc = 0x3eb264u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x3eb268: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x3eb268u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x3eb26c: 0x92e70003  lbu         $a3, 0x3($s7)
    ctx->pc = 0x3eb26cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 3)));
    // 0x3eb270: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x3eb270u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x3eb274: 0x92a20005  lbu         $v0, 0x5($s5)
    ctx->pc = 0x3eb274u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 5)));
    // 0x3eb278: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x3eb278u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
    // 0x3eb27c: 0xe48825  or          $s1, $a3, $a0
    ctx->pc = 0x3eb27cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 7) | GPR_U64(ctx, 4));
    // 0x3eb280: 0x14d10003  bne         $a2, $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3EB280u;
    {
        const bool branch_taken_0x3eb280 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 17));
        ctx->pc = 0x3EB284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB280u;
        // 0x3eb284: 0x45a025  or          $s4, $v0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb280) {
            ctx->pc = 0x3EB290u;
            goto label_3eb290;
        }
    }
    ctx->pc = 0x3EB288u;
    // 0x3eb288: 0x12340005  beq         $s1, $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x3EB288u;
    {
        const bool branch_taken_0x3eb288 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 20));
        ctx->pc = 0x3EB28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB288u;
        // 0x3eb28c: 0xdfa40018  ld          $a0, 0x18($sp) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb288) {
            ctx->pc = 0x3EB2A0u;
            goto label_3eb2a0;
        }
    }
    ctx->pc = 0x3EB290u;
label_3eb290:
    // 0x3eb290: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x3eb290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3eb294: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x3eb294u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x3eb298: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x3eb298u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x3eb29c: 0xdfa40018  ld          $a0, 0x18($sp)
    ctx->pc = 0x3eb29cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_3eb2a0:
    // 0x3eb2a0: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x3eb2a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3eb2a4: 0x26f70008  addiu       $s7, $s7, 0x8
    ctx->pc = 0x3eb2a4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 8));
    // 0x3eb2a8: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x3EB2A8u;
    SET_GPR_U32(ctx, 31, 0x3EB2B0u);
    ctx->pc = 0x3EB2ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EB2A8u;
    // 0x3eb2ac: 0x26b5000a  addiu       $s5, $s5, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x3EB2A8u, 0x3EB2B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EB2B0u;
label_3eb2b0:
    // 0x3eb2b0: 0xdfa40020  ld          $a0, 0x20($sp)
    ctx->pc = 0x3eb2b0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3eb2b4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3eb2b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3eb2b8: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x3EB2B8u;
    SET_GPR_U32(ctx, 31, 0x3EB2C0u);
    ctx->pc = 0x3EB2BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EB2B8u;
    // 0x3eb2bc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x3EB2B8u, 0x3EB2C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EB2C0u;
label_3eb2c0:
    // 0x3eb2c0: 0xdfa40028  ld          $a0, 0x28($sp)
    ctx->pc = 0x3eb2c0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3eb2c4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3eb2c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3eb2c8: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x3EB2C8u;
    SET_GPR_U32(ctx, 31, 0x3EB2D0u);
    ctx->pc = 0x3EB2CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EB2C8u;
    // 0x3eb2cc: 0x202802d  daddu       $s0, $s0, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x3EB2C8u, 0x3EB2D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EB2D0u;
label_3eb2d0:
    // 0x3eb2d0: 0x202802d  daddu       $s0, $s0, $v0
    ctx->pc = 0x3eb2d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
    // 0x3eb2d4: 0x1083fa  dsrl        $s0, $s0, 15
    ctx->pc = 0x3eb2d4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> 15);
    // 0x3eb2d8: 0x3210ffff  andi        $s0, $s0, 0xFFFF
    ctx->pc = 0x3eb2d8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x3eb2dc: 0x101202  srl         $v0, $s0, 8
    ctx->pc = 0x3eb2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 8));
    // 0x3eb2e0: 0xa2700001  sb          $s0, 0x1($s3)
    ctx->pc = 0x3eb2e0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 16));
    // 0x3eb2e4: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x3eb2e4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3eb2e8: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x3eb2e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3eb2ec: 0x92430006  lbu         $v1, 0x6($s2)
    ctx->pc = 0x3eb2ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 6)));
    // 0x3eb2f0: 0x90870007  lbu         $a3, 0x7($a0)
    ctx->pc = 0x3eb2f0u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 7)));
    // 0x3eb2f4: 0x26520008  addiu       $s2, $s2, 0x8
    ctx->pc = 0x3eb2f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x3eb2f8: 0x92440000  lbu         $a0, 0x0($s2)
    ctx->pc = 0x3eb2f8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3eb2fc: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x3eb2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x3eb300: 0x92e60001  lbu         $a2, 0x1($s7)
    ctx->pc = 0x3eb300u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 1)));
    // 0x3eb304: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x3eb304u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x3eb308: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x3eb308u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x3eb30c: 0x92420000  lbu         $v0, 0x0($s2)
    ctx->pc = 0x3eb30cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3eb310: 0xc48825  or          $s1, $a2, $a0
    ctx->pc = 0x3eb310u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
    // 0x3eb314: 0x92a50001  lbu         $a1, 0x1($s5)
    ctx->pc = 0x3eb314u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 1)));
    // 0x3eb318: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x3eb318u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3eb31c: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x3eb31cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x3eb320: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x3eb320u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x3eb324: 0xa2a025  or          $s4, $a1, $v0
    ctx->pc = 0x3eb324u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x3eb328: 0x24c6000c  addiu       $a2, $a2, 0xC
    ctx->pc = 0x3eb328u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
    // 0x3eb32c: 0x26b50002  addiu       $s5, $s5, 0x2
    ctx->pc = 0x3eb32cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 2));
    // 0x3eb330: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x3eb330u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x3eb334: 0x26f70004  addiu       $s7, $s7, 0x4
    ctx->pc = 0x3eb334u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4));
    // 0x3eb338: 0x14f10003  bne         $a3, $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3EB338u;
    {
        const bool branch_taken_0x3eb338 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 17));
        ctx->pc = 0x3EB33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB338u;
        // 0x3eb33c: 0xafa60030  sw          $a2, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb338) {
            ctx->pc = 0x3EB348u;
            goto label_3eb348;
        }
    }
    ctx->pc = 0x3EB340u;
    // 0x3eb340: 0x12340005  beq         $s1, $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x3EB340u;
    {
        const bool branch_taken_0x3eb340 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 20));
        ctx->pc = 0x3EB344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB340u;
        // 0x3eb344: 0xdfa40018  ld          $a0, 0x18($sp) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb340) {
            ctx->pc = 0x3EB358u;
            goto label_3eb358;
        }
    }
    ctx->pc = 0x3EB348u;
label_3eb348:
    // 0x3eb348: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x3eb348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3eb34c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x3eb34cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x3eb350: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x3eb350u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x3eb354: 0xdfa40018  ld          $a0, 0x18($sp)
    ctx->pc = 0x3eb354u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_3eb358:
    // 0x3eb358: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x3eb358u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3eb35c: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x3EB35Cu;
    SET_GPR_U32(ctx, 31, 0x3EB364u);
    ctx->pc = 0x3EB360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EB35Cu;
    // 0x3eb360: 0x66d60002  daddiu      $s6, $s6, 0x2 (Delay Slot)
    SET_GPR_S64(ctx, 22, (int64_t)GPR_S64(ctx, 22) + (int64_t)(int32_t)2);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x3EB35Cu, 0x3EB364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EB364u;
label_3eb364:
    // 0x3eb364: 0xdfa40020  ld          $a0, 0x20($sp)
    ctx->pc = 0x3eb364u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3eb368: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3eb368u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3eb36c: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x3EB36Cu;
    SET_GPR_U32(ctx, 31, 0x3EB374u);
    ctx->pc = 0x3EB370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EB36Cu;
    // 0x3eb370: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x3EB36Cu, 0x3EB374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EB374u;
label_3eb374:
    // 0x3eb374: 0xdfa40028  ld          $a0, 0x28($sp)
    ctx->pc = 0x3eb374u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3eb378: 0x202802d  daddu       $s0, $s0, $v0
    ctx->pc = 0x3eb378u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
    // 0x3eb37c: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x3EB37Cu;
    SET_GPR_U32(ctx, 31, 0x3EB384u);
    ctx->pc = 0x3EB380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EB37Cu;
    // 0x3eb380: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x3EB37Cu, 0x3EB384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EB384u;
label_3eb384:
    // 0x3eb384: 0x202802d  daddu       $s0, $s0, $v0
    ctx->pc = 0x3eb384u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
    // 0x3eb388: 0xdfa40008  ld          $a0, 0x8($sp)
    ctx->pc = 0x3eb388u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3eb38c: 0x1083fa  dsrl        $s0, $s0, 15
    ctx->pc = 0x3eb38cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> 15);
    // 0x3eb390: 0x3210ffff  andi        $s0, $s0, 0xFFFF
    ctx->pc = 0x3eb390u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x3eb394: 0x2c4182b  sltu        $v1, $s6, $a0
    ctx->pc = 0x3eb394u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x3eb398: 0x101202  srl         $v0, $s0, 8
    ctx->pc = 0x3eb398u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 8));
    // 0x3eb39c: 0xa2620002  sb          $v0, 0x2($s3)
    ctx->pc = 0x3eb39cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x3eb3a0: 0x26730003  addiu       $s3, $s3, 0x3
    ctx->pc = 0x3eb3a0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 3));
    // 0x3eb3a4: 0xa2700000  sb          $s0, 0x0($s3)
    ctx->pc = 0x3eb3a4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 16));
    // 0x3eb3a8: 0x1460ffa9  bnez        $v1, . + 4 + (-0x57 << 2)
    ctx->pc = 0x3EB3A8u;
    {
        const bool branch_taken_0x3eb3a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EB3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB3A8u;
        // 0x3eb3ac: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb3a8) {
            ctx->pc = 0x3EB250u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3eb250;
        }
    }
    ctx->pc = 0x3EB3B0u;
label_3eb3b0:
    // 0x3eb3b0: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x3eb3b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_3eb3b4:
    // 0x3eb3b4: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x3eb3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3eb3b8: 0x90c30010  lbu         $v1, 0x10($a2)
    ctx->pc = 0x3eb3b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x3eb3bc: 0x546201a1  bnel        $v1, $v0, . + 4 + (0x1A1 << 2)
    ctx->pc = 0x3EB3BCu;
    {
        const bool branch_taken_0x3eb3bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3eb3bc) {
            ctx->pc = 0x3EB3C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EB3BCu;
            // 0x3eb3c0: 0x8fa60004  lw          $a2, 0x4($sp) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EBA44u;
            goto label_3eba44;
        }
    }
    ctx->pc = 0x3EB3C4u;
    // 0x3eb3c4: 0x90c30011  lbu         $v1, 0x11($a2)
    ctx->pc = 0x3eb3c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 17)));
    // 0x3eb3c8: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x3eb3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3eb3cc: 0x146200f6  bne         $v1, $v0, . + 4 + (0xF6 << 2)
    ctx->pc = 0x3EB3CCu;
    {
        const bool branch_taken_0x3eb3cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3EB3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB3CCu;
        // 0x3eb3d0: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb3cc) {
            ctx->pc = 0x3EB7A8u;
            goto label_3eb7a8;
        }
    }
    ctx->pc = 0x3EB3D4u;
    // 0x3eb3d4: 0x8c620258  lw          $v0, 0x258($v1)
    ctx->pc = 0x3eb3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 600)));
    // 0x3eb3d8: 0x50400092  beql        $v0, $zero, . + 4 + (0x92 << 2)
    ctx->pc = 0x3EB3D8u;
    {
        const bool branch_taken_0x3eb3d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3eb3d8) {
            ctx->pc = 0x3EB3DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EB3D8u;
            // 0x3eb3dc: 0xdfa20008  ld          $v0, 0x8($sp) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EB624u;
            goto label_3eb624;
        }
    }
    ctx->pc = 0x3EB3E0u;
    // 0x3eb3e0: 0x8c67025c  lw          $a3, 0x25C($v1)
    ctx->pc = 0x3eb3e0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 604)));
    // 0x3eb3e4: 0x10e0008e  beqz        $a3, . + 4 + (0x8E << 2)
    ctx->pc = 0x3EB3E4u;
    {
        const bool branch_taken_0x3eb3e4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EB3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB3E4u;
        // 0x3eb3e8: 0xdfa40008  ld          $a0, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb3e4) {
            ctx->pc = 0x3EB620u;
            goto label_3eb620;
        }
    }
    ctx->pc = 0x3EB3ECu;
    // 0x3eb3ec: 0x10800194  beqz        $a0, . + 4 + (0x194 << 2)
    ctx->pc = 0x3EB3ECu;
    {
        const bool branch_taken_0x3eb3ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EB3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB3ECu;
        // 0x3eb3f0: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb3ec) {
            ctx->pc = 0x3EBA40u;
            goto label_3eba40;
        }
    }
    ctx->pc = 0x3EB3F4u;
    // 0x3eb3f4: 0x3c0902d  daddu       $s2, $fp, $zero
    ctx->pc = 0x3eb3f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3eb3f8: 0x3c0982d  daddu       $s3, $fp, $zero
    ctx->pc = 0x3eb3f8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3eb3fc: 0x18800003  blez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3EB3FCu;
    {
        const bool branch_taken_0x3eb3fc = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x3EB400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB3FCu;
        // 0x3eb400: 0x30820001  andi        $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb3fc) {
            ctx->pc = 0x3EB40Cu;
            goto label_3eb40c;
        }
    }
    ctx->pc = 0x3EB404u;
    // 0x3eb404: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x3EB404u;
    {
        const bool branch_taken_0x3eb404 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EB408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB404u;
        // 0x3eb408: 0x240a02d  daddu       $s4, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb404) {
            ctx->pc = 0x3EB4BCu;
            goto label_3eb4bc;
        }
    }
    ctx->pc = 0x3EB40Cu;
label_3eb40c:
    // 0x3eb40c: 0x93c20000  lbu         $v0, 0x0($fp)
    ctx->pc = 0x3eb40cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x3eb410: 0x27d30003  addiu       $s3, $fp, 0x3
    ctx->pc = 0x3eb410u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 30), 3));
    // 0x3eb414: 0x93c30001  lbu         $v1, 0x1($fp)
    ctx->pc = 0x3eb414u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 1)));
    // 0x3eb418: 0x93c40002  lbu         $a0, 0x2($fp)
    ctx->pc = 0x3eb418u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 2)));
    // 0x3eb41c: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x3eb41cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x3eb420: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x3eb420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x3eb424: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x3eb424u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3eb428: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x3eb428u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x3eb42c: 0x90710000  lbu         $s1, 0x0($v1)
    ctx->pc = 0x3eb42cu;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3eb430: 0x14b10003  bne         $a1, $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3EB430u;
    {
        const bool branch_taken_0x3eb430 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 17));
        ctx->pc = 0x3EB434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB430u;
        // 0x3eb434: 0x90940000  lbu         $s4, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 20, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb430) {
            ctx->pc = 0x3EB440u;
            goto label_3eb440;
        }
    }
    ctx->pc = 0x3EB438u;
    // 0x3eb438: 0x12340005  beq         $s1, $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x3EB438u;
    {
        const bool branch_taken_0x3eb438 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 20));
        ctx->pc = 0x3EB43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB438u;
        // 0x3eb43c: 0xdfa40018  ld          $a0, 0x18($sp) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb438) {
            ctx->pc = 0x3EB450u;
            goto label_3eb450;
        }
    }
    ctx->pc = 0x3EB440u;
label_3eb440:
    // 0x3eb440: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x3eb440u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3eb444: 0x34c60001  ori         $a2, $a2, 0x1
    ctx->pc = 0x3eb444u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)1);
    // 0x3eb448: 0xafa60010  sw          $a2, 0x10($sp)
    ctx->pc = 0x3eb448u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 6));
    // 0x3eb44c: 0xdfa40018  ld          $a0, 0x18($sp)
    ctx->pc = 0x3eb44cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_3eb450:
    // 0x3eb450: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x3EB450u;
    SET_GPR_U32(ctx, 31, 0x3EB458u);
    ctx->pc = 0x3EB454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EB450u;
    // 0x3eb454: 0x66d60001  daddiu      $s6, $s6, 0x1 (Delay Slot)
    SET_GPR_S64(ctx, 22, (int64_t)GPR_S64(ctx, 22) + (int64_t)(int32_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x3EB450u, 0x3EB458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EB458u;
label_3eb458:
    // 0x3eb458: 0xdfa40020  ld          $a0, 0x20($sp)
    ctx->pc = 0x3eb458u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3eb45c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3eb45cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3eb460: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x3EB460u;
    SET_GPR_U32(ctx, 31, 0x3EB468u);
    ctx->pc = 0x3EB464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EB460u;
    // 0x3eb464: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x3EB460u, 0x3EB468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EB468u;
label_3eb468:
    // 0x3eb468: 0xdfa40028  ld          $a0, 0x28($sp)
    ctx->pc = 0x3eb468u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3eb46c: 0x202802d  daddu       $s0, $s0, $v0
    ctx->pc = 0x3eb46cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
    // 0x3eb470: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x3EB470u;
    SET_GPR_U32(ctx, 31, 0x3EB478u);
    ctx->pc = 0x3EB474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EB470u;
    // 0x3eb474: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x3EB470u, 0x3EB478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EB478u;
label_3eb478:
    // 0x3eb478: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x3eb478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3eb47c: 0x202802d  daddu       $s0, $s0, $v0
    ctx->pc = 0x3eb47cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
    // 0x3eb480: 0x108478  dsll        $s0, $s0, 17
    ctx->pc = 0x3eb480u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << 17);
    // 0x3eb484: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x3eb484u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x3eb488: 0xdfa60008  ld          $a2, 0x8($sp)
    ctx->pc = 0x3eb488u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3eb48c: 0x8c620258  lw          $v0, 0x258($v1)
    ctx->pc = 0x3eb48cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 600)));
    // 0x3eb490: 0x2c6202b  sltu        $a0, $s6, $a2
    ctx->pc = 0x3eb490u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x3eb494: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x3eb494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x3eb498: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3eb498u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3eb49c: 0xa2430000  sb          $v1, 0x0($s2)
    ctx->pc = 0x3eb49cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3eb4a0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3eb4a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x3eb4a4: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x3eb4a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3eb4a8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3eb4a8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x3eb4ac: 0xa2420000  sb          $v0, 0x0($s2)
    ctx->pc = 0x3eb4acu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3eb4b0: 0x10800163  beqz        $a0, . + 4 + (0x163 << 2)
    ctx->pc = 0x3EB4B0u;
    {
        const bool branch_taken_0x3eb4b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EB4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB4B0u;
        // 0x3eb4b4: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb4b0) {
            ctx->pc = 0x3EBA40u;
            goto label_3eba40;
        }
    }
    ctx->pc = 0x3EB4B8u;
    // 0x3eb4b8: 0x240a02d  daddu       $s4, $s2, $zero
    ctx->pc = 0x3eb4b8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3eb4bc:
    // 0x3eb4bc: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x3eb4bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3eb4c0:
    // 0x3eb4c0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x3eb4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3eb4c4: 0x92230001  lbu         $v1, 0x1($s1)
    ctx->pc = 0x3eb4c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x3eb4c8: 0x8c44025c  lw          $a0, 0x25C($v0)
    ctx->pc = 0x3eb4c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 604)));
    // 0x3eb4cc: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x3eb4ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3eb4d0: 0x92250002  lbu         $a1, 0x2($s1)
    ctx->pc = 0x3eb4d0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x3eb4d4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x3eb4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3eb4d8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x3eb4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3eb4dc: 0x90720000  lbu         $s2, 0x0($v1)
    ctx->pc = 0x3eb4dcu;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3eb4e0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x3eb4e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3eb4e4: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x3eb4e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3eb4e8: 0x14520003  bne         $v0, $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x3EB4E8u;
    {
        const bool branch_taken_0x3eb4e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x3EB4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB4E8u;
        // 0x3eb4ec: 0x90930000  lbu         $s3, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb4e8) {
            ctx->pc = 0x3EB4F8u;
            goto label_3eb4f8;
        }
    }
    ctx->pc = 0x3EB4F0u;
    // 0x3eb4f0: 0x12530005  beq         $s2, $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x3EB4F0u;
    {
        const bool branch_taken_0x3eb4f0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 19));
        ctx->pc = 0x3EB4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB4F0u;
        // 0x3eb4f4: 0xdfa40018  ld          $a0, 0x18($sp) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb4f0) {
            ctx->pc = 0x3EB508u;
            goto label_3eb508;
        }
    }
    ctx->pc = 0x3EB4F8u;
label_3eb4f8:
    // 0x3eb4f8: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x3eb4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3eb4fc: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x3eb4fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x3eb500: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x3eb500u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x3eb504: 0xdfa40018  ld          $a0, 0x18($sp)
    ctx->pc = 0x3eb504u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_3eb508:
    // 0x3eb508: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x3EB508u;
    SET_GPR_U32(ctx, 31, 0x3EB510u);
    ctx->pc = 0x3EB50Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EB508u;
    // 0x3eb50c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x3EB508u, 0x3EB510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EB510u;
label_3eb510:
    // 0x3eb510: 0xdfa40020  ld          $a0, 0x20($sp)
    ctx->pc = 0x3eb510u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3eb514: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3eb514u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3eb518: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x3EB518u;
    SET_GPR_U32(ctx, 31, 0x3EB520u);
    ctx->pc = 0x3EB51Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EB518u;
    // 0x3eb51c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x3EB518u, 0x3EB520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EB520u;
label_3eb520:
    // 0x3eb520: 0xdfa40028  ld          $a0, 0x28($sp)
    ctx->pc = 0x3eb520u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3eb524: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3eb524u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3eb528: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x3EB528u;
    SET_GPR_U32(ctx, 31, 0x3EB530u);
    ctx->pc = 0x3EB52Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EB528u;
    // 0x3eb52c: 0x202802d  daddu       $s0, $s0, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x3EB528u, 0x3EB530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EB530u;
label_3eb530:
    // 0x3eb530: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x3eb530u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3eb534: 0x202802d  daddu       $s0, $s0, $v0
    ctx->pc = 0x3eb534u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
    // 0x3eb538: 0x108478  dsll        $s0, $s0, 17
    ctx->pc = 0x3eb538u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << 17);
    // 0x3eb53c: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x3eb53cu;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x3eb540: 0x8c820258  lw          $v0, 0x258($a0)
    ctx->pc = 0x3eb540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 600)));
    // 0x3eb544: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x3eb544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x3eb548: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3eb548u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3eb54c: 0xa2830000  sb          $v1, 0x0($s4)
    ctx->pc = 0x3eb54cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3eb550: 0x92220003  lbu         $v0, 0x3($s1)
    ctx->pc = 0x3eb550u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x3eb554: 0xa2820001  sb          $v0, 0x1($s4)
    ctx->pc = 0x3eb554u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x3eb558: 0x92240004  lbu         $a0, 0x4($s1)
    ctx->pc = 0x3eb558u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3eb55c: 0x26310005  addiu       $s1, $s1, 0x5
    ctx->pc = 0x3eb55cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 5));
    // 0x3eb560: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x3eb560u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3eb564: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x3eb564u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3eb568: 0x8cc2025c  lw          $v0, 0x25C($a2)
    ctx->pc = 0x3eb568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 604)));
    // 0x3eb56c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3eb56cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3eb570: 0x92250000  lbu         $a1, 0x0($s1)
    ctx->pc = 0x3eb570u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3eb574: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x3eb574u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3eb578: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x3eb578u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3eb57c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x3eb57cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x3eb580: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x3eb580u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3eb584: 0x90720000  lbu         $s2, 0x0($v1)
    ctx->pc = 0x3eb584u;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3eb588: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3eb588u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3eb58c: 0x14920003  bne         $a0, $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x3EB58Cu;
    {
        const bool branch_taken_0x3eb58c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 18));
        ctx->pc = 0x3EB590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB58Cu;
        // 0x3eb590: 0x90530000  lbu         $s3, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb58c) {
            ctx->pc = 0x3EB59Cu;
            goto label_3eb59c;
        }
    }
    ctx->pc = 0x3EB594u;
    // 0x3eb594: 0x52530005  beql        $s2, $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x3EB594u;
    {
        const bool branch_taken_0x3eb594 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 19));
        if (branch_taken_0x3eb594) {
            ctx->pc = 0x3EB598u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EB594u;
            // 0x3eb598: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EB5ACu;
            goto label_3eb5ac;
        }
    }
    ctx->pc = 0x3EB59Cu;
label_3eb59c:
    // 0x3eb59c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x3eb59cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3eb5a0: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x3eb5a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x3eb5a4: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x3eb5a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x3eb5a8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3eb5a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3eb5ac:
    // 0x3eb5ac: 0x66d60002  daddiu      $s6, $s6, 0x2
    ctx->pc = 0x3eb5acu;
    SET_GPR_S64(ctx, 22, (int64_t)GPR_S64(ctx, 22) + (int64_t)(int32_t)2);
    // 0x3eb5b0: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x3EB5B0u;
    SET_GPR_U32(ctx, 31, 0x3EB5B8u);
    ctx->pc = 0x3EB5B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EB5B0u;
    // 0x3eb5b4: 0xdfa40018  ld          $a0, 0x18($sp) (Delay Slot)
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x3EB5B0u, 0x3EB5B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EB5B8u;
label_3eb5b8:
    // 0x3eb5b8: 0xdfa40020  ld          $a0, 0x20($sp)
    ctx->pc = 0x3eb5b8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3eb5bc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3eb5bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3eb5c0: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x3EB5C0u;
    SET_GPR_U32(ctx, 31, 0x3EB5C8u);
    ctx->pc = 0x3EB5C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EB5C0u;
    // 0x3eb5c4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x3EB5C0u, 0x3EB5C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EB5C8u;
label_3eb5c8:
    // 0x3eb5c8: 0xdfa40028  ld          $a0, 0x28($sp)
    ctx->pc = 0x3eb5c8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3eb5cc: 0x202802d  daddu       $s0, $s0, $v0
    ctx->pc = 0x3eb5ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
    // 0x3eb5d0: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x3EB5D0u;
    SET_GPR_U32(ctx, 31, 0x3EB5D8u);
    ctx->pc = 0x3EB5D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EB5D0u;
    // 0x3eb5d4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x3EB5D0u, 0x3EB5D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EB5D8u;
label_3eb5d8:
    // 0x3eb5d8: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x3eb5d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3eb5dc: 0x202802d  daddu       $s0, $s0, $v0
    ctx->pc = 0x3eb5dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
    // 0x3eb5e0: 0x108478  dsll        $s0, $s0, 17
    ctx->pc = 0x3eb5e0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << 17);
    // 0x3eb5e4: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x3eb5e4u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x3eb5e8: 0xdfa60008  ld          $a2, 0x8($sp)
    ctx->pc = 0x3eb5e8u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3eb5ec: 0x8c830258  lw          $v1, 0x258($a0)
    ctx->pc = 0x3eb5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 600)));
    // 0x3eb5f0: 0x2c6202b  sltu        $a0, $s6, $a2
    ctx->pc = 0x3eb5f0u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x3eb5f4: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x3eb5f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x3eb5f8: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x3eb5f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3eb5fc: 0xa2820002  sb          $v0, 0x2($s4)
    ctx->pc = 0x3eb5fcu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x3eb600: 0x26940003  addiu       $s4, $s4, 0x3
    ctx->pc = 0x3eb600u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 3));
    // 0x3eb604: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x3eb604u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3eb608: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3eb608u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3eb60c: 0xa2820000  sb          $v0, 0x0($s4)
    ctx->pc = 0x3eb60cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3eb610: 0x1480ffab  bnez        $a0, . + 4 + (-0x55 << 2)
    ctx->pc = 0x3EB610u;
    {
        const bool branch_taken_0x3eb610 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EB614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB610u;
        // 0x3eb614: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb610) {
            ctx->pc = 0x3EB4C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3eb4c0;
        }
    }
    ctx->pc = 0x3EB618u;
    // 0x3eb618: 0x1000010a  b           . + 4 + (0x10A << 2)
    ctx->pc = 0x3EB618u;
    {
        const bool branch_taken_0x3eb618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EB61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB618u;
        // 0x3eb61c: 0x8fa60004  lw          $a2, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb618) {
            ctx->pc = 0x3EBA44u;
            goto label_3eba44;
        }
    }
    ctx->pc = 0x3EB620u;
label_3eb620:
    // 0x3eb620: 0xdfa20008  ld          $v0, 0x8($sp)
    ctx->pc = 0x3eb620u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_3eb624:
    // 0x3eb624: 0x10400106  beqz        $v0, . + 4 + (0x106 << 2)
    ctx->pc = 0x3EB624u;
    {
        const bool branch_taken_0x3eb624 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EB628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB624u;
        // 0x3eb628: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb624) {
            ctx->pc = 0x3EBA40u;
            goto label_3eba40;
        }
    }
    ctx->pc = 0x3EB62Cu;
    // 0x3eb62c: 0xdfa30008  ld          $v1, 0x8($sp)
    ctx->pc = 0x3eb62cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3eb630: 0x3c0882d  daddu       $s1, $fp, $zero
    ctx->pc = 0x3eb630u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3eb634: 0x3c0982d  daddu       $s3, $fp, $zero
    ctx->pc = 0x3eb634u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3eb638: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3EB638u;
    {
        const bool branch_taken_0x3eb638 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x3EB63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB638u;
        // 0x3eb63c: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb638) {
            ctx->pc = 0x3EB648u;
            goto label_3eb648;
        }
    }
    ctx->pc = 0x3EB640u;
    // 0x3eb640: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x3EB640u;
    {
        const bool branch_taken_0x3eb640 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EB644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB640u;
        // 0x3eb644: 0x220902d  daddu       $s2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb640) {
            ctx->pc = 0x3EB6C4u;
            goto label_3eb6c4;
        }
    }
    ctx->pc = 0x3EB648u;
label_3eb648:
    // 0x3eb648: 0x93c40000  lbu         $a0, 0x0($fp)
    ctx->pc = 0x3eb648u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x3eb64c: 0x27d30003  addiu       $s3, $fp, 0x3
    ctx->pc = 0x3eb64cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 30), 3));
    // 0x3eb650: 0x93c20001  lbu         $v0, 0x1($fp)
    ctx->pc = 0x3eb650u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 1)));
    // 0x3eb654: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3EB654u;
    {
        const bool branch_taken_0x3eb654 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x3EB658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB654u;
        // 0x3eb658: 0x93d20002  lbu         $s2, 0x2($fp) (Delay Slot)
        SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb654) {
            ctx->pc = 0x3EB664u;
            goto label_3eb664;
        }
    }
    ctx->pc = 0x3EB65Cu;
    // 0x3eb65c: 0x50520005  beql        $v0, $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x3EB65Cu;
    {
        const bool branch_taken_0x3eb65c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x3eb65c) {
            ctx->pc = 0x3EB660u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EB65Cu;
            // 0x3eb660: 0xdfa50020  ld          $a1, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EB674u;
            goto label_3eb674;
        }
    }
    ctx->pc = 0x3EB664u;
label_3eb664:
    // 0x3eb664: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x3eb664u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3eb668: 0x34c60001  ori         $a2, $a2, 0x1
    ctx->pc = 0x3eb668u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)1);
    // 0x3eb66c: 0xafa60010  sw          $a2, 0x10($sp)
    ctx->pc = 0x3eb66cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 6));
    // 0x3eb670: 0xdfa50020  ld          $a1, 0x20($sp)
    ctx->pc = 0x3eb670u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3eb674:
    // 0x3eb674: 0x82202d  daddu       $a0, $a0, $v0
    ctx->pc = 0x3eb674u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 2));
    // 0x3eb678: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x3EB678u;
    SET_GPR_U32(ctx, 31, 0x3EB680u);
    ctx->pc = 0x3EB67Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EB678u;
    // 0x3eb67c: 0x66d60001  daddiu      $s6, $s6, 0x1 (Delay Slot)
    SET_GPR_S64(ctx, 22, (int64_t)GPR_S64(ctx, 22) + (int64_t)(int32_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x3EB678u, 0x3EB680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EB680u;
label_3eb680:
    // 0x3eb680: 0xdfa40028  ld          $a0, 0x28($sp)
    ctx->pc = 0x3eb680u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3eb684: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3eb684u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3eb688: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x3EB688u;
    SET_GPR_U32(ctx, 31, 0x3EB690u);
    ctx->pc = 0x3EB68Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EB688u;
    // 0x3eb68c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x3EB688u, 0x3EB690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EB690u;
label_3eb690:
    // 0x3eb690: 0x202802d  daddu       $s0, $s0, $v0
    ctx->pc = 0x3eb690u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
    // 0x3eb694: 0x10823a  dsrl        $s0, $s0, 8
    ctx->pc = 0x3eb694u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> 8);
    // 0x3eb698: 0xdfa20008  ld          $v0, 0x8($sp)
    ctx->pc = 0x3eb698u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3eb69c: 0x321000ff  andi        $s0, $s0, 0xFF
    ctx->pc = 0x3eb69cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x3eb6a0: 0xa2300000  sb          $s0, 0x0($s1)
    ctx->pc = 0x3eb6a0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 16));
    // 0x3eb6a4: 0x2c2182b  sltu        $v1, $s6, $v0
    ctx->pc = 0x3eb6a4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3eb6a8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3eb6a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3eb6ac: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x3eb6acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3eb6b0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3eb6b0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x3eb6b4: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x3eb6b4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3eb6b8: 0x106000e1  beqz        $v1, . + 4 + (0xE1 << 2)
    ctx->pc = 0x3EB6B8u;
    {
        const bool branch_taken_0x3eb6b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EB6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB6B8u;
        // 0x3eb6bc: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb6b8) {
            ctx->pc = 0x3EBA40u;
            goto label_3eba40;
        }
    }
    ctx->pc = 0x3EB6C0u;
    // 0x3eb6c0: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x3eb6c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3eb6c4:
    // 0x3eb6c4: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x3eb6c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3eb6c8:
    // 0x3eb6c8: 0x92240000  lbu         $a0, 0x0($s1)
    ctx->pc = 0x3eb6c8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3eb6cc: 0x92220001  lbu         $v0, 0x1($s1)
    ctx->pc = 0x3eb6ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x3eb6d0: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3EB6D0u;
    {
        const bool branch_taken_0x3eb6d0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x3EB6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB6D0u;
        // 0x3eb6d4: 0x92330002  lbu         $s3, 0x2($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb6d0) {
            ctx->pc = 0x3EB6E0u;
            goto label_3eb6e0;
        }
    }
    ctx->pc = 0x3EB6D8u;
    // 0x3eb6d8: 0x50530005  beql        $v0, $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x3EB6D8u;
    {
        const bool branch_taken_0x3eb6d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        if (branch_taken_0x3eb6d8) {
            ctx->pc = 0x3EB6DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EB6D8u;
            // 0x3eb6dc: 0xdfa50020  ld          $a1, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EB6F0u;
            goto label_3eb6f0;
        }
    }
    ctx->pc = 0x3EB6E0u;
label_3eb6e0:
    // 0x3eb6e0: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x3eb6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3eb6e4: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x3eb6e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x3eb6e8: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x3eb6e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x3eb6ec: 0xdfa50020  ld          $a1, 0x20($sp)
    ctx->pc = 0x3eb6ecu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3eb6f0:
    // 0x3eb6f0: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x3EB6F0u;
    SET_GPR_U32(ctx, 31, 0x3EB6F8u);
    ctx->pc = 0x3EB6F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EB6F0u;
    // 0x3eb6f4: 0x82202d  daddu       $a0, $a0, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x3EB6F0u, 0x3EB6F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EB6F8u;
label_3eb6f8:
    // 0x3eb6f8: 0xdfa40028  ld          $a0, 0x28($sp)
    ctx->pc = 0x3eb6f8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3eb6fc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3eb6fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3eb700: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x3EB700u;
    SET_GPR_U32(ctx, 31, 0x3EB708u);
    ctx->pc = 0x3EB704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EB700u;
    // 0x3eb704: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x3EB700u, 0x3EB708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EB708u;
label_3eb708:
    // 0x3eb708: 0x202802d  daddu       $s0, $s0, $v0
    ctx->pc = 0x3eb708u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
    // 0x3eb70c: 0x10823a  dsrl        $s0, $s0, 8
    ctx->pc = 0x3eb70cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> 8);
    // 0x3eb710: 0x321000ff  andi        $s0, $s0, 0xFF
    ctx->pc = 0x3eb710u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x3eb714: 0xa2500000  sb          $s0, 0x0($s2)
    ctx->pc = 0x3eb714u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 16));
    // 0x3eb718: 0x92220003  lbu         $v0, 0x3($s1)
    ctx->pc = 0x3eb718u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x3eb71c: 0xa2420001  sb          $v0, 0x1($s2)
    ctx->pc = 0x3eb71cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x3eb720: 0x92240004  lbu         $a0, 0x4($s1)
    ctx->pc = 0x3eb720u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3eb724: 0x26310005  addiu       $s1, $s1, 0x5
    ctx->pc = 0x3eb724u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 5));
    // 0x3eb728: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x3eb728u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3eb72c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3eb72cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3eb730: 0x92330000  lbu         $s3, 0x0($s1)
    ctx->pc = 0x3eb730u;
    SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3eb734: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3EB734u;
    {
        const bool branch_taken_0x3eb734 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x3EB738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB734u;
        // 0x3eb738: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb734) {
            ctx->pc = 0x3EB744u;
            goto label_3eb744;
        }
    }
    ctx->pc = 0x3EB73Cu;
    // 0x3eb73c: 0x50530005  beql        $v0, $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x3EB73Cu;
    {
        const bool branch_taken_0x3eb73c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        if (branch_taken_0x3eb73c) {
            ctx->pc = 0x3EB740u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EB73Cu;
            // 0x3eb740: 0xdfa50020  ld          $a1, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EB754u;
            goto label_3eb754;
        }
    }
    ctx->pc = 0x3EB744u;
label_3eb744:
    // 0x3eb744: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x3eb744u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3eb748: 0x34c60001  ori         $a2, $a2, 0x1
    ctx->pc = 0x3eb748u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)1);
    // 0x3eb74c: 0xafa60010  sw          $a2, 0x10($sp)
    ctx->pc = 0x3eb74cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 6));
    // 0x3eb750: 0xdfa50020  ld          $a1, 0x20($sp)
    ctx->pc = 0x3eb750u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3eb754:
    // 0x3eb754: 0x82202d  daddu       $a0, $a0, $v0
    ctx->pc = 0x3eb754u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 2));
    // 0x3eb758: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x3EB758u;
    SET_GPR_U32(ctx, 31, 0x3EB760u);
    ctx->pc = 0x3EB75Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EB758u;
    // 0x3eb75c: 0x66d60002  daddiu      $s6, $s6, 0x2 (Delay Slot)
    SET_GPR_S64(ctx, 22, (int64_t)GPR_S64(ctx, 22) + (int64_t)(int32_t)2);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x3EB758u, 0x3EB760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EB760u;
label_3eb760:
    // 0x3eb760: 0xdfa40028  ld          $a0, 0x28($sp)
    ctx->pc = 0x3eb760u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3eb764: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3eb764u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3eb768: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x3EB768u;
    SET_GPR_U32(ctx, 31, 0x3EB770u);
    ctx->pc = 0x3EB76Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EB768u;
    // 0x3eb76c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x3EB768u, 0x3EB770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EB770u;
label_3eb770:
    // 0x3eb770: 0x202802d  daddu       $s0, $s0, $v0
    ctx->pc = 0x3eb770u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
    // 0x3eb774: 0x10823a  dsrl        $s0, $s0, 8
    ctx->pc = 0x3eb774u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> 8);
    // 0x3eb778: 0xdfa20008  ld          $v0, 0x8($sp)
    ctx->pc = 0x3eb778u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3eb77c: 0x321000ff  andi        $s0, $s0, 0xFF
    ctx->pc = 0x3eb77cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x3eb780: 0xa2500002  sb          $s0, 0x2($s2)
    ctx->pc = 0x3eb780u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2), (uint8_t)GPR_U32(ctx, 16));
    // 0x3eb784: 0x2c2182b  sltu        $v1, $s6, $v0
    ctx->pc = 0x3eb784u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3eb788: 0x26520003  addiu       $s2, $s2, 0x3
    ctx->pc = 0x3eb788u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 3));
    // 0x3eb78c: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x3eb78cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3eb790: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3eb790u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3eb794: 0xa2420000  sb          $v0, 0x0($s2)
    ctx->pc = 0x3eb794u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3eb798: 0x1460ffcb  bnez        $v1, . + 4 + (-0x35 << 2)
    ctx->pc = 0x3EB798u;
    {
        const bool branch_taken_0x3eb798 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EB79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB798u;
        // 0x3eb79c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb798) {
            ctx->pc = 0x3EB6C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3eb6c8;
        }
    }
    ctx->pc = 0x3EB7A0u;
    // 0x3eb7a0: 0x100000a8  b           . + 4 + (0xA8 << 2)
    ctx->pc = 0x3EB7A0u;
    {
        const bool branch_taken_0x3eb7a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EB7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB7A0u;
        // 0x3eb7a4: 0x8fa60004  lw          $a2, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb7a0) {
            ctx->pc = 0x3EBA44u;
            goto label_3eba44;
        }
    }
    ctx->pc = 0x3EB7A8u;
label_3eb7a8:
    // 0x3eb7a8: 0x8c620268  lw          $v0, 0x268($v1)
    ctx->pc = 0x3eb7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 616)));
    // 0x3eb7ac: 0x1040006a  beqz        $v0, . + 4 + (0x6A << 2)
    ctx->pc = 0x3EB7ACu;
    {
        const bool branch_taken_0x3eb7ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EB7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB7ACu;
        // 0x3eb7b0: 0xdfa20008  ld          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb7ac) {
            ctx->pc = 0x3EB958u;
            goto label_3eb958;
        }
    }
    ctx->pc = 0x3EB7B4u;
    // 0x3eb7b4: 0x8c620264  lw          $v0, 0x264($v1)
    ctx->pc = 0x3eb7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 612)));
    // 0x3eb7b8: 0x10400066  beqz        $v0, . + 4 + (0x66 << 2)
    ctx->pc = 0x3EB7B8u;
    {
        const bool branch_taken_0x3eb7b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EB7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB7B8u;
        // 0x3eb7bc: 0xdfa40008  ld          $a0, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb7b8) {
            ctx->pc = 0x3EB954u;
            goto label_3eb954;
        }
    }
    ctx->pc = 0x3EB7C0u;
    // 0x3eb7c0: 0x1080009f  beqz        $a0, . + 4 + (0x9F << 2)
    ctx->pc = 0x3EB7C0u;
    {
        const bool branch_taken_0x3eb7c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EB7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB7C0u;
        // 0x3eb7c4: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb7c0) {
            ctx->pc = 0x3EBA40u;
            goto label_3eba40;
        }
    }
    ctx->pc = 0x3EB7C8u;
    // 0x3eb7c8: 0x3c0a82d  daddu       $s5, $fp, $zero
    ctx->pc = 0x3eb7c8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3eb7cc: 0x2a0a02d  daddu       $s4, $s5, $zero
    ctx->pc = 0x3eb7ccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3eb7d0:
    // 0x3eb7d0: 0x92840001  lbu         $a0, 0x1($s4)
    ctx->pc = 0x3eb7d0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1)));
    // 0x3eb7d4: 0x92820000  lbu         $v0, 0x0($s4)
    ctx->pc = 0x3eb7d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x3eb7d8: 0x26940002  addiu       $s4, $s4, 0x2
    ctx->pc = 0x3eb7d8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
    // 0x3eb7dc: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x3eb7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x3eb7e0: 0x92830000  lbu         $v1, 0x0($s4)
    ctx->pc = 0x3eb7e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x3eb7e4: 0x92850001  lbu         $a1, 0x1($s4)
    ctx->pc = 0x3eb7e4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1)));
    // 0x3eb7e8: 0x823825  or          $a3, $a0, $v0
    ctx->pc = 0x3eb7e8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x3eb7ec: 0x26940002  addiu       $s4, $s4, 0x2
    ctx->pc = 0x3eb7ecu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
    // 0x3eb7f0: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x3eb7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x3eb7f4: 0x92820000  lbu         $v0, 0x0($s4)
    ctx->pc = 0x3eb7f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x3eb7f8: 0xa34825  or          $t1, $a1, $v1
    ctx->pc = 0x3eb7f8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x3eb7fc: 0x92840001  lbu         $a0, 0x1($s4)
    ctx->pc = 0x3eb7fcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1)));
    // 0x3eb800: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x3eb800u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x3eb804: 0x26940002  addiu       $s4, $s4, 0x2
    ctx->pc = 0x3eb804u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
    // 0x3eb808: 0x14e90005  bne         $a3, $t1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3EB808u;
    {
        const bool branch_taken_0x3eb808 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 9));
        ctx->pc = 0x3EB80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB808u;
        // 0x3eb80c: 0x823025  or          $a2, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb808) {
            ctx->pc = 0x3EB820u;
            goto label_3eb820;
        }
    }
    ctx->pc = 0x3EB810u;
    // 0x3eb810: 0x15260004  bne         $t1, $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x3EB810u;
    {
        const bool branch_taken_0x3eb810 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 6));
        ctx->pc = 0x3EB814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB810u;
        // 0x3eb814: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb810) {
            ctx->pc = 0x3EB824u;
            goto label_3eb824;
        }
    }
    ctx->pc = 0x3EB818u;
    // 0x3eb818: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x3EB818u;
    {
        const bool branch_taken_0x3eb818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EB81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB818u;
        // 0x3eb81c: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb818) {
            ctx->pc = 0x3EB908u;
            goto label_3eb908;
        }
    }
    ctx->pc = 0x3EB820u;
label_3eb820:
    // 0x3eb820: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x3eb820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_3eb824:
    // 0x3eb824: 0x30c400ff  andi        $a0, $a2, 0xFF
    ctx->pc = 0x3eb824u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x3eb828: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x3eb828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3eb82c: 0x63202  srl         $a2, $a2, 8
    ctx->pc = 0x3eb82cu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 8));
    // 0x3eb830: 0x8c530248  lw          $s3, 0x248($v0)
    ctx->pc = 0x3eb830u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 584)));
    // 0x3eb834: 0x63040  sll         $a2, $a2, 1
    ctx->pc = 0x3eb834u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x3eb838: 0x8c650268  lw          $a1, 0x268($v1)
    ctx->pc = 0x3eb838u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 616)));
    // 0x3eb83c: 0x30e200ff  andi        $v0, $a3, 0xFF
    ctx->pc = 0x3eb83cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x3eb840: 0x312300ff  andi        $v1, $t1, 0xFF
    ctx->pc = 0x3eb840u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
    // 0x3eb844: 0x2621007  srav        $v0, $v0, $s3
    ctx->pc = 0x3eb844u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 19) & 0x1F));
    // 0x3eb848: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3eb848u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3eb84c: 0x2631807  srav        $v1, $v1, $s3
    ctx->pc = 0x3eb84cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 19) & 0x1F));
    // 0x3eb850: 0x2642007  srav        $a0, $a0, $s3
    ctx->pc = 0x3eb850u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 19) & 0x1F));
    // 0x3eb854: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x3eb854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x3eb858: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3eb858u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3eb85c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x3eb85cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3eb860: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x3eb860u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3eb864: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x3eb864u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3eb868: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3eb868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3eb86c: 0x91202  srl         $v0, $t1, 8
    ctx->pc = 0x3eb86cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 8));
    // 0x3eb870: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x3eb870u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3eb874: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x3eb874u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x3eb878: 0x73a02  srl         $a3, $a3, 8
    ctx->pc = 0x3eb878u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 8));
    // 0x3eb87c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3eb87cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3eb880: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x3eb880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x3eb884: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x3eb884u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x3eb888: 0x94510000  lhu         $s1, 0x0($v0)
    ctx->pc = 0x3eb888u;
    SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3eb88c: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x3eb88cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x3eb890: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x3eb890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3eb894: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x3eb894u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x3eb898: 0x94e50000  lhu         $a1, 0x0($a3)
    ctx->pc = 0x3eb898u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3eb89c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x3eb89cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x3eb8a0: 0xdfa40018  ld          $a0, 0x18($sp)
    ctx->pc = 0x3eb8a0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3eb8a4: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x3eb8a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x3eb8a8: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x3EB8A8u;
    SET_GPR_U32(ctx, 31, 0x3EB8B0u);
    ctx->pc = 0x3EB8ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EB8A8u;
    // 0x3eb8ac: 0x94d20000  lhu         $s2, 0x0($a2) (Delay Slot)
    SET_GPR_ZE32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x3EB8A8u, 0x3EB8B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EB8B0u;
label_3eb8b0:
    // 0x3eb8b0: 0xdfa40020  ld          $a0, 0x20($sp)
    ctx->pc = 0x3eb8b0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3eb8b4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3eb8b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3eb8b8: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x3EB8B8u;
    SET_GPR_U32(ctx, 31, 0x3EB8C0u);
    ctx->pc = 0x3EB8BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EB8B8u;
    // 0x3eb8bc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x3EB8B8u, 0x3EB8C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EB8C0u;
label_3eb8c0:
    // 0x3eb8c0: 0xdfa40028  ld          $a0, 0x28($sp)
    ctx->pc = 0x3eb8c0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3eb8c4: 0x202802d  daddu       $s0, $s0, $v0
    ctx->pc = 0x3eb8c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
    // 0x3eb8c8: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x3EB8C8u;
    SET_GPR_U32(ctx, 31, 0x3EB8D0u);
    ctx->pc = 0x3EB8CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EB8C8u;
    // 0x3eb8cc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x3EB8C8u, 0x3EB8D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EB8D0u;
label_3eb8d0:
    // 0x3eb8d0: 0x202802d  daddu       $s0, $s0, $v0
    ctx->pc = 0x3eb8d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
    // 0x3eb8d4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x3eb8d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3eb8d8: 0x1083fa  dsrl        $s0, $s0, 15
    ctx->pc = 0x3eb8d8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> 15);
    // 0x3eb8dc: 0x3210ffff  andi        $s0, $s0, 0xFFFF
    ctx->pc = 0x3eb8dcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x3eb8e0: 0x8c640264  lw          $a0, 0x264($v1)
    ctx->pc = 0x3eb8e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 612)));
    // 0x3eb8e4: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x3eb8e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x3eb8e8: 0x2621007  srav        $v0, $v0, $s3
    ctx->pc = 0x3eb8e8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 19) & 0x1F));
    // 0x3eb8ec: 0x108202  srl         $s0, $s0, 8
    ctx->pc = 0x3eb8ecu;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 16), 8));
    // 0x3eb8f0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3eb8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3eb8f4: 0x108040  sll         $s0, $s0, 1
    ctx->pc = 0x3eb8f4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x3eb8f8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3eb8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3eb8fc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3eb8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3eb900: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x3eb900u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x3eb904: 0x96040000  lhu         $a0, 0x0($s0)
    ctx->pc = 0x3eb904u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_3eb908:
    // 0x3eb908: 0x41202  srl         $v0, $a0, 8
    ctx->pc = 0x3eb908u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
    // 0x3eb90c: 0x66d60001  daddiu      $s6, $s6, 0x1
    ctx->pc = 0x3eb90cu;
    SET_GPR_S64(ctx, 22, (int64_t)GPR_S64(ctx, 22) + (int64_t)(int32_t)1);
    // 0x3eb910: 0xa2a20000  sb          $v0, 0x0($s5)
    ctx->pc = 0x3eb910u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3eb914: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x3eb914u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x3eb918: 0xdfa60008  ld          $a2, 0x8($sp)
    ctx->pc = 0x3eb918u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3eb91c: 0xa2a40000  sb          $a0, 0x0($s5)
    ctx->pc = 0x3eb91cu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x3eb920: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x3eb920u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x3eb924: 0x2c6182b  sltu        $v1, $s6, $a2
    ctx->pc = 0x3eb924u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x3eb928: 0x92820000  lbu         $v0, 0x0($s4)
    ctx->pc = 0x3eb928u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x3eb92c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x3eb92cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x3eb930: 0xa2a20000  sb          $v0, 0x0($s5)
    ctx->pc = 0x3eb930u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3eb934: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x3eb934u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x3eb938: 0x92820000  lbu         $v0, 0x0($s4)
    ctx->pc = 0x3eb938u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x3eb93c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x3eb93cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x3eb940: 0xa2a20000  sb          $v0, 0x0($s5)
    ctx->pc = 0x3eb940u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3eb944: 0x1460ffa2  bnez        $v1, . + 4 + (-0x5E << 2)
    ctx->pc = 0x3EB944u;
    {
        const bool branch_taken_0x3eb944 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EB948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB944u;
        // 0x3eb948: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb944) {
            ctx->pc = 0x3EB7D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3eb7d0;
        }
    }
    ctx->pc = 0x3EB94Cu;
    // 0x3eb94c: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x3EB94Cu;
    {
        const bool branch_taken_0x3eb94c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EB950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB94Cu;
        // 0x3eb950: 0x8fa60004  lw          $a2, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb94c) {
            ctx->pc = 0x3EBA44u;
            goto label_3eba44;
        }
    }
    ctx->pc = 0x3EB954u;
label_3eb954:
    // 0x3eb954: 0xdfa20008  ld          $v0, 0x8($sp)
    ctx->pc = 0x3eb954u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_3eb958:
    // 0x3eb958: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x3eb958u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3eb95c: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x3EB95Cu;
    {
        const bool branch_taken_0x3eb95c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EB960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB95Cu;
        // 0x3eb960: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb95c) {
            ctx->pc = 0x3EBA40u;
            goto label_3eba40;
        }
    }
    ctx->pc = 0x3EB964u;
    // 0x3eb964: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x3eb964u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3eb968: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x3eb968u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3eb96c: 0x0  nop
    ctx->pc = 0x3eb96cu;
    // NOP
label_3eb970:
    // 0x3eb970: 0x92240001  lbu         $a0, 0x1($s1)
    ctx->pc = 0x3eb970u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x3eb974: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x3eb974u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3eb978: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x3eb978u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x3eb97c: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x3eb97cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x3eb980: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x3eb980u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3eb984: 0x92250001  lbu         $a1, 0x1($s1)
    ctx->pc = 0x3eb984u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x3eb988: 0x823025  or          $a2, $a0, $v0
    ctx->pc = 0x3eb988u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x3eb98c: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x3eb98cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x3eb990: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x3eb990u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x3eb994: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x3eb994u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3eb998: 0xa39825  or          $s3, $a1, $v1
    ctx->pc = 0x3eb998u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x3eb99c: 0x92240001  lbu         $a0, 0x1($s1)
    ctx->pc = 0x3eb99cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x3eb9a0: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x3eb9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x3eb9a4: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x3eb9a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x3eb9a8: 0x14d30003  bne         $a2, $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x3EB9A8u;
    {
        const bool branch_taken_0x3eb9a8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 19));
        ctx->pc = 0x3EB9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB9A8u;
        // 0x3eb9ac: 0x82a025  or          $s4, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb9a8) {
            ctx->pc = 0x3EB9B8u;
            goto label_3eb9b8;
        }
    }
    ctx->pc = 0x3EB9B0u;
    // 0x3eb9b0: 0x12740005  beq         $s3, $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x3EB9B0u;
    {
        const bool branch_taken_0x3eb9b0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 20));
        ctx->pc = 0x3EB9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB9B0u;
        // 0x3eb9b4: 0xdfa40018  ld          $a0, 0x18($sp) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb9b0) {
            ctx->pc = 0x3EB9C8u;
            goto label_3eb9c8;
        }
    }
    ctx->pc = 0x3EB9B8u;
label_3eb9b8:
    // 0x3eb9b8: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x3eb9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3eb9bc: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x3eb9bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x3eb9c0: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x3eb9c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x3eb9c4: 0xdfa40018  ld          $a0, 0x18($sp)
    ctx->pc = 0x3eb9c4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_3eb9c8:
    // 0x3eb9c8: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x3eb9c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3eb9cc: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x3EB9CCu;
    SET_GPR_U32(ctx, 31, 0x3EB9D4u);
    ctx->pc = 0x3EB9D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EB9CCu;
    // 0x3eb9d0: 0x66d60001  daddiu      $s6, $s6, 0x1 (Delay Slot)
    SET_GPR_S64(ctx, 22, (int64_t)GPR_S64(ctx, 22) + (int64_t)(int32_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x3EB9CCu, 0x3EB9D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EB9D4u;
label_3eb9d4:
    // 0x3eb9d4: 0xdfa40020  ld          $a0, 0x20($sp)
    ctx->pc = 0x3eb9d4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3eb9d8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3eb9d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3eb9dc: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x3EB9DCu;
    SET_GPR_U32(ctx, 31, 0x3EB9E4u);
    ctx->pc = 0x3EB9E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EB9DCu;
    // 0x3eb9e0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x3EB9DCu, 0x3EB9E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EB9E4u;
label_3eb9e4:
    // 0x3eb9e4: 0xdfa40028  ld          $a0, 0x28($sp)
    ctx->pc = 0x3eb9e4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3eb9e8: 0x202802d  daddu       $s0, $s0, $v0
    ctx->pc = 0x3eb9e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
    // 0x3eb9ec: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x3EB9ECu;
    SET_GPR_U32(ctx, 31, 0x3EB9F4u);
    ctx->pc = 0x3EB9F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EB9ECu;
    // 0x3eb9f0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x3EB9ECu, 0x3EB9F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EB9F4u;
label_3eb9f4:
    // 0x3eb9f4: 0x202802d  daddu       $s0, $s0, $v0
    ctx->pc = 0x3eb9f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
    // 0x3eb9f8: 0xdfa40008  ld          $a0, 0x8($sp)
    ctx->pc = 0x3eb9f8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3eb9fc: 0x1083fa  dsrl        $s0, $s0, 15
    ctx->pc = 0x3eb9fcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> 15);
    // 0x3eba00: 0x3210ffff  andi        $s0, $s0, 0xFFFF
    ctx->pc = 0x3eba00u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x3eba04: 0x2c4182b  sltu        $v1, $s6, $a0
    ctx->pc = 0x3eba04u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x3eba08: 0x101202  srl         $v0, $s0, 8
    ctx->pc = 0x3eba08u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 8));
    // 0x3eba0c: 0xa2420000  sb          $v0, 0x0($s2)
    ctx->pc = 0x3eba0cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3eba10: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3eba10u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x3eba14: 0xa2500000  sb          $s0, 0x0($s2)
    ctx->pc = 0x3eba14u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 16));
    // 0x3eba18: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3eba18u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x3eba1c: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x3eba1cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3eba20: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3eba20u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3eba24: 0xa2420000  sb          $v0, 0x0($s2)
    ctx->pc = 0x3eba24u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3eba28: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3eba28u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x3eba2c: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x3eba2cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3eba30: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3eba30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3eba34: 0xa2420000  sb          $v0, 0x0($s2)
    ctx->pc = 0x3eba34u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3eba38: 0x1460ffcd  bnez        $v1, . + 4 + (-0x33 << 2)
    ctx->pc = 0x3EBA38u;
    {
        const bool branch_taken_0x3eba38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EBA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBA38u;
        // 0x3eba3c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eba38) {
            ctx->pc = 0x3EB970u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3eb970;
        }
    }
    ctx->pc = 0x3EBA40u;
label_3eba40:
    // 0x3eba40: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x3eba40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_3eba44:
    // 0x3eba44: 0xdfa40008  ld          $a0, 0x8($sp)
    ctx->pc = 0x3eba44u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3eba48: 0x90c30012  lbu         $v1, 0x12($a2)
    ctx->pc = 0x3eba48u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 18)));
    // 0x3eba4c: 0x90c50011  lbu         $a1, 0x11($a2)
    ctx->pc = 0x3eba4cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 17)));
    // 0x3eba50: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x3eba50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x3eba54: 0x90c20010  lbu         $v0, 0x10($a2)
    ctx->pc = 0x3eba54u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x3eba58: 0x652818  mult        $a1, $v1, $a1
    ctx->pc = 0x3eba58u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x3eba5c: 0xa0c30012  sb          $v1, 0x12($a2)
    ctx->pc = 0x3eba5cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 18), (uint8_t)GPR_U32(ctx, 3));
    // 0x3eba60: 0x304200fd  andi        $v0, $v0, 0xFD
    ctx->pc = 0x3eba60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)253);
    // 0x3eba64: 0xa0c20010  sb          $v0, 0x10($a2)
    ctx->pc = 0x3eba64u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 16), (uint8_t)GPR_U32(ctx, 2));
    // 0x3eba68: 0xa0c50013  sb          $a1, 0x13($a2)
    ctx->pc = 0x3eba68u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 19), (uint8_t)GPR_U32(ctx, 5));
    // 0x3eba6c: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x3EBA6Cu;
    SET_GPR_U32(ctx, 31, 0x3EBA74u);
    ctx->pc = 0x3EBA70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EBA6Cu;
    // 0x3eba70: 0x30a500ff  andi        $a1, $a1, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x3EBA6Cu, 0x3EBA74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EBA74u;
label_3eba74:
    // 0x3eba74: 0x64420007  daddiu      $v0, $v0, 0x7
    ctx->pc = 0x3eba74u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)7);
    // 0x3eba78: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x3eba78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x3eba7c: 0x210fa  dsrl        $v0, $v0, 3
    ctx->pc = 0x3eba7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 3);
    // 0x3eba80: 0xfc620008  sd          $v0, 0x8($v1)
    ctx->pc = 0x3eba80u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 2));
label_3eba84:
    // 0x3eba84: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x3eba84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3eba88: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x3eba88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x3eba8c: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x3eba8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x3eba90: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x3eba90u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x3eba94: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x3eba94u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x3eba98: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x3eba98u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3eba9c: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x3eba9cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3ebaa0: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x3ebaa0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3ebaa4: 0x7bb70060  lq          $s7, 0x60($sp)
    ctx->pc = 0x3ebaa4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3ebaa8: 0x7bbe0050  lq          $fp, 0x50($sp)
    ctx->pc = 0x3ebaa8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3ebaac: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3ebaacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3ebab0: 0x3e00008  jr          $ra
    ctx->pc = 0x3EBAB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EBAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBAB0u;
        // 0x3ebab4: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EBAB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3EBAB8u;
}
