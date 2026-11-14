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

// Function: sub_00425080
// Address: 0x425080 - 0x4252c0
void sub_00425080_0x425080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00425080_0x425080");
#endif

    switch (ctx->pc) {
        case 0x425198u: goto label_425198;
        case 0x42520cu: goto label_42520c;
        case 0x425288u: goto label_425288;
        default: break;
    }

    ctx->pc = 0x425080u;

label_425080:
    // 0x425080: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x425080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x425084: 0x80782d  daddu       $t7, $a0, $zero
    ctx->pc = 0x425084u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x425088: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x425088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x42508c: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x42508cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x425090: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x425090u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x425094: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x425094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x425098: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x425098u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42509c: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x42509cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x4250a0: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x4250a0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4250a4: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x4250a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x4250a8: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x4250a8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4250ac: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x4250acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x4250b0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x4250b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x4250b4: 0x11e00077  beqz        $t7, . + 4 + (0x77 << 2)
    ctx->pc = 0x4250B4u;
    {
        const bool branch_taken_0x4250b4 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x4250B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4250B4u;
        // 0x4250b8: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4250b4) {
            ctx->pc = 0x425294u;
            goto label_425294;
        }
    }
    ctx->pc = 0x4250BCu;
    // 0x4250bc: 0x8e2d0000  lw          $t5, 0x0($s1)
    ctx->pc = 0x4250bcu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4250c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4250c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4250c4: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x4250c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4250c8: 0x2021004  sllv        $v0, $v0, $s0
    ctx->pc = 0x4250c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 16) & 0x1F));
    // 0x4250cc: 0x8e2e0004  lw          $t6, 0x4($s1)
    ctx->pc = 0x4250ccu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x4250d0: 0x1a24821  addu        $t1, $t5, $v0
    ctx->pc = 0x4250d0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
    // 0x4250d4: 0x8e2c0008  lw          $t4, 0x8($s1)
    ctx->pc = 0x4250d4u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x4250d8: 0x1255023  subu        $t2, $t1, $a1
    ctx->pc = 0x4250d8u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x4250dc: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x4250dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x4250e0: 0x1c24021  addu        $t0, $t6, $v0
    ctx->pc = 0x4250e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
    // 0x4250e4: 0x8e2b000c  lw          $t3, 0xC($s1)
    ctx->pc = 0x4250e4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x4250e8: 0x1823821  addu        $a3, $t4, $v0
    ctx->pc = 0x4250e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x4250ec: 0x8e860004  lw          $a2, 0x4($s4)
    ctx->pc = 0x4250ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x4250f0: 0xe32823  subu        $a1, $a3, $v1
    ctx->pc = 0x4250f0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x4250f4: 0x8e84000c  lw          $a0, 0xC($s4)
    ctx->pc = 0x4250f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x4250f8: 0x1621021  addu        $v0, $t3, $v0
    ctx->pc = 0x4250f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x4250fc: 0x1063023  subu        $a2, $t0, $a2
    ctx->pc = 0x4250fcu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x425100: 0xafad0000  sw          $t5, 0x0($sp)
    ctx->pc = 0x425100u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 13));
    // 0x425104: 0x441823  subu        $v1, $v0, $a0
    ctx->pc = 0x425104u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x425108: 0xafae0004  sw          $t6, 0x4($sp)
    ctx->pc = 0x425108u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 14));
    // 0x42510c: 0xafac0008  sw          $t4, 0x8($sp)
    ctx->pc = 0x42510cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 12));
    // 0x425110: 0xafab000c  sw          $t3, 0xC($sp)
    ctx->pc = 0x425110u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 11));
    // 0x425114: 0xafa90010  sw          $t1, 0x10($sp)
    ctx->pc = 0x425114u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 9));
    // 0x425118: 0xafa80014  sw          $t0, 0x14($sp)
    ctx->pc = 0x425118u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 8));
    // 0x42511c: 0xafa70018  sw          $a3, 0x18($sp)
    ctx->pc = 0x42511cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 7));
    // 0x425120: 0x1940005c  blez        $t2, . + 4 + (0x5C << 2)
    ctx->pc = 0x425120u;
    {
        const bool branch_taken_0x425120 = (GPR_S32(ctx, 10) <= 0);
        ctx->pc = 0x425124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x425120u;
        // 0x425124: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x425120) {
            ctx->pc = 0x425294u;
            goto label_425294;
        }
    }
    ctx->pc = 0x425128u;
    // 0x425128: 0x58c0005b  blezl       $a2, . + 4 + (0x5B << 2)
    ctx->pc = 0x425128u;
    {
        const bool branch_taken_0x425128 = (GPR_S32(ctx, 6) <= 0);
        if (branch_taken_0x425128) {
            ctx->pc = 0x42512Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x425128u;
            // 0x42512c: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x425298u;
            goto label_425298;
        }
    }
    ctx->pc = 0x425130u;
    // 0x425130: 0x58a00059  blezl       $a1, . + 4 + (0x59 << 2)
    ctx->pc = 0x425130u;
    {
        const bool branch_taken_0x425130 = (GPR_S32(ctx, 5) <= 0);
        if (branch_taken_0x425130) {
            ctx->pc = 0x425134u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x425130u;
            // 0x425134: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x425298u;
            goto label_425298;
        }
    }
    ctx->pc = 0x425138u;
    // 0x425138: 0x58600057  blezl       $v1, . + 4 + (0x57 << 2)
    ctx->pc = 0x425138u;
    {
        const bool branch_taken_0x425138 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x425138) {
            ctx->pc = 0x42513Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x425138u;
            // 0x42513c: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x425298u;
            goto label_425298;
        }
    }
    ctx->pc = 0x425140u;
    // 0x425140: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x425140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x425144: 0x8e840014  lw          $a0, 0x14($s4)
    ctx->pc = 0x425144u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x425148: 0x8e850018  lw          $a1, 0x18($s4)
    ctx->pc = 0x425148u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x42514c: 0x1a25023  subu        $t2, $t5, $v0
    ctx->pc = 0x42514cu;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
    // 0x425150: 0x8e83001c  lw          $v1, 0x1C($s4)
    ctx->pc = 0x425150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
    // 0x425154: 0x1c43023  subu        $a2, $t6, $a0
    ctx->pc = 0x425154u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 4)));
    // 0x425158: 0x1852823  subu        $a1, $t4, $a1
    ctx->pc = 0x425158u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 5)));
    // 0x42515c: 0x541004d  bgez        $t2, . + 4 + (0x4D << 2)
    ctx->pc = 0x42515Cu;
    {
        const bool branch_taken_0x42515c = (GPR_S32(ctx, 10) >= 0);
        ctx->pc = 0x425160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42515Cu;
        // 0x425160: 0x1631823  subu        $v1, $t3, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42515c) {
            ctx->pc = 0x425294u;
            goto label_425294;
        }
    }
    ctx->pc = 0x425164u;
    // 0x425164: 0x4c3004c  bgezl       $a2, . + 4 + (0x4C << 2)
    ctx->pc = 0x425164u;
    {
        const bool branch_taken_0x425164 = (GPR_S32(ctx, 6) >= 0);
        if (branch_taken_0x425164) {
            ctx->pc = 0x425168u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x425164u;
            // 0x425168: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x425298u;
            goto label_425298;
        }
    }
    ctx->pc = 0x42516Cu;
    // 0x42516c: 0x4a3004a  bgezl       $a1, . + 4 + (0x4A << 2)
    ctx->pc = 0x42516Cu;
    {
        const bool branch_taken_0x42516c = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x42516c) {
            ctx->pc = 0x425170u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x42516Cu;
            // 0x425170: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x425298u;
            goto label_425298;
        }
    }
    ctx->pc = 0x425174u;
    // 0x425174: 0x4630048  bgezl       $v1, . + 4 + (0x48 << 2)
    ctx->pc = 0x425174u;
    {
        const bool branch_taken_0x425174 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x425174) {
            ctx->pc = 0x425178u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x425174u;
            // 0x425178: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x425298u;
            goto label_425298;
        }
    }
    ctx->pc = 0x42517Cu;
    // 0x42517c: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x42517Cu;
    {
        const bool branch_taken_0x42517c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x425180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42517Cu;
        // 0x425180: 0x25f3001c  addiu       $s3, $t7, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 15), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42517c) {
            ctx->pc = 0x42518Cu;
            goto label_42518c;
        }
    }
    ctx->pc = 0x425184u;
    // 0x425184: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x425184u;
    {
        const bool branch_taken_0x425184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x425188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x425184u;
        // 0x425188: 0xa1f60018  sb          $s6, 0x18($t7) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 15), 24), (uint8_t)GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x425184) {
            ctx->pc = 0x425294u;
            goto label_425294;
        }
    }
    ctx->pc = 0x42518Cu;
label_42518c:
    // 0x42518c: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x42518cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x425190: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x425190u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x425194: 0x27b50020  addiu       $s5, $sp, 0x20
    ctx->pc = 0x425194u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_425198:
    // 0x425198: 0x122043  sra         $a0, $s2, 1
    ctx->pc = 0x425198u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 18), 1));
    // 0x42519c: 0x8e280008  lw          $t0, 0x8($s1)
    ctx->pc = 0x42519cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x4251a0: 0x1210c3  sra         $v0, $s2, 3
    ctx->pc = 0x4251a0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 18), 3));
    // 0x4251a4: 0x121883  sra         $v1, $s2, 2
    ctx->pc = 0x4251a4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 18), 2));
    // 0x4251a8: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x4251a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x4251ac: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x4251acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4251b0: 0x8e270004  lw          $a3, 0x4($s1)
    ctx->pc = 0x4251b0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x4251b4: 0x2042004  sllv        $a0, $a0, $s0
    ctx->pc = 0x4251b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 16) & 0x1F));
    // 0x4251b8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4251b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x4251bc: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x4251bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x4251c0: 0x8e29000c  lw          $t1, 0xC($s1)
    ctx->pc = 0x4251c0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x4251c4: 0x1044021  addu        $t0, $t0, $a0
    ctx->pc = 0x4251c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x4251c8: 0x2021004  sllv        $v0, $v0, $s0
    ctx->pc = 0x4251c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 16) & 0x1F));
    // 0x4251cc: 0x2031804  sllv        $v1, $v1, $s0
    ctx->pc = 0x4251ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 16) & 0x1F));
    // 0x4251d0: 0x32450001  andi        $a1, $s2, 0x1
    ctx->pc = 0x4251d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x4251d4: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x4251d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4251d8: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x4251d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x4251dc: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x4251dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x4251e0: 0x2052804  sllv        $a1, $a1, $s0
    ctx->pc = 0x4251e0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 16) & 0x1F));
    // 0x4251e4: 0xafa60020  sw          $a2, 0x20($sp)
    ctx->pc = 0x4251e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
    // 0x4251e8: 0x1254821  addu        $t1, $t1, $a1
    ctx->pc = 0x4251e8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x4251ec: 0xafa70024  sw          $a3, 0x24($sp)
    ctx->pc = 0x4251ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 7));
    // 0x4251f0: 0xafa80028  sw          $t0, 0x28($sp)
    ctx->pc = 0x4251f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 8));
    // 0x4251f4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x4251f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4251f8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x4251f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4251fc: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x4251fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x425200: 0xafa9002c  sw          $t1, 0x2C($sp)
    ctx->pc = 0x425200u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 9));
    // 0x425204: 0xc109420  jal         func_425080
    ctx->pc = 0x425204u;
    SET_GPR_U32(ctx, 31, 0x42520Cu);
    ctx->pc = 0x425208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x425204u;
    // 0x425208: 0x2c0402d  daddu       $t0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x425080u;
    goto label_425080;
    ctx->pc = 0x42520Cu;
label_42520c:
    // 0x42520c: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x42520cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x425210: 0x8e270004  lw          $a3, 0x4($s1)
    ctx->pc = 0x425210u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x425214: 0x22083  sra         $a0, $v0, 2
    ctx->pc = 0x425214u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 2));
    // 0x425218: 0x218c3  sra         $v1, $v0, 3
    ctx->pc = 0x425218u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 3));
    // 0x42521c: 0x22843  sra         $a1, $v0, 1
    ctx->pc = 0x42521cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 1));
    // 0x425220: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x425220u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x425224: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x425224u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x425228: 0x2042004  sllv        $a0, $a0, $s0
    ctx->pc = 0x425228u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 16) & 0x1F));
    // 0x42522c: 0x8e280008  lw          $t0, 0x8($s1)
    ctx->pc = 0x42522cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x425230: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x425230u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x425234: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x425234u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x425238: 0x8e29000c  lw          $t1, 0xC($s1)
    ctx->pc = 0x425238u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x42523c: 0xe43821  addu        $a3, $a3, $a0
    ctx->pc = 0x42523cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x425240: 0x2052804  sllv        $a1, $a1, $s0
    ctx->pc = 0x425240u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 16) & 0x1F));
    // 0x425244: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x425244u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x425248: 0x2031804  sllv        $v1, $v1, $s0
    ctx->pc = 0x425248u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 16) & 0x1F));
    // 0x42524c: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x42524cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x425250: 0x1054021  addu        $t0, $t0, $a1
    ctx->pc = 0x425250u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x425254: 0x2021004  sllv        $v0, $v0, $s0
    ctx->pc = 0x425254u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 16) & 0x1F));
    // 0x425258: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x425258u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x42525c: 0x1224821  addu        $t1, $t1, $v0
    ctx->pc = 0x42525cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x425260: 0xafa60020  sw          $a2, 0x20($sp)
    ctx->pc = 0x425260u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
    // 0x425264: 0xafa70024  sw          $a3, 0x24($sp)
    ctx->pc = 0x425264u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 7));
    // 0x425268: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x425268u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42526c: 0xafa80028  sw          $t0, 0x28($sp)
    ctx->pc = 0x42526cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 8));
    // 0x425270: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x425270u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x425274: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x425274u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x425278: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x425278u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42527c: 0xafa9002c  sw          $t1, 0x2C($sp)
    ctx->pc = 0x42527cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 9));
    // 0x425280: 0xc109420  jal         func_425080
    ctx->pc = 0x425280u;
    SET_GPR_U32(ctx, 31, 0x425288u);
    ctx->pc = 0x425284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x425280u;
    // 0x425284: 0x26520002  addiu       $s2, $s2, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x425080u;
    goto label_425080;
    ctx->pc = 0x425288u;
label_425288:
    // 0x425288: 0x2a420010  slti        $v0, $s2, 0x10
    ctx->pc = 0x425288u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x42528c: 0x1440ffc2  bnez        $v0, . + 4 + (-0x3E << 2)
    ctx->pc = 0x42528Cu;
    {
        const bool branch_taken_0x42528c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x425290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42528Cu;
        // 0x425290: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42528c) {
            ctx->pc = 0x425198u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_425198;
        }
    }
    ctx->pc = 0x425294u;
label_425294:
    // 0x425294: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x425294u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_425298:
    // 0x425298: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x425298u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x42529c: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x42529cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x4252a0: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x4252a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x4252a4: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x4252a4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4252a8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x4252a8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4252ac: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x4252acu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4252b0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4252b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4252b4: 0x3e00008  jr          $ra
    ctx->pc = 0x4252B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4252B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4252B4u;
        // 0x4252b8: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4252B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4252BCu;
    // 0x4252bc: 0x0  nop
    ctx->pc = 0x4252bcu;
    // NOP
    ctx->pc = 0x4252c0u;
}
