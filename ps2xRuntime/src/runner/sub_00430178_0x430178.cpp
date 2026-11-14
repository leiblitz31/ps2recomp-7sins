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

// Function: sub_00430178
// Address: 0x430178 - 0x430530
void sub_00430178_0x430178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00430178_0x430178");
#endif

    switch (ctx->pc) {
        case 0x4301b8u: goto label_4301b8;
        case 0x4301e8u: goto label_4301e8;
        case 0x430240u: goto label_430240;
        case 0x430250u: goto label_430250;
        case 0x430408u: goto label_430408;
        case 0x4304b8u: goto label_4304b8;
        default: break;
    }

    ctx->pc = 0x430178u;

    // 0x430178: 0x27bdf750  addiu       $sp, $sp, -0x8B0
    ctx->pc = 0x430178u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965072));
    // 0x43017c: 0x80702d  daddu       $t6, $a0, $zero
    ctx->pc = 0x43017cu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x430180: 0x7fb008a0  sq          $s0, 0x8A0($sp)
    ctx->pc = 0x430180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2208), GPR_VEC(ctx, 16));
    // 0x430184: 0x7fb10890  sq          $s1, 0x890($sp)
    ctx->pc = 0x430184u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2192), GPR_VEC(ctx, 17));
    // 0x430188: 0x7fb20880  sq          $s2, 0x880($sp)
    ctx->pc = 0x430188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2176), GPR_VEC(ctx, 18));
    // 0x43018c: 0x7fb30870  sq          $s3, 0x870($sp)
    ctx->pc = 0x43018cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2160), GPR_VEC(ctx, 19));
    // 0x430190: 0x7fb40860  sq          $s4, 0x860($sp)
    ctx->pc = 0x430190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2144), GPR_VEC(ctx, 20));
    // 0x430194: 0x7fb50850  sq          $s5, 0x850($sp)
    ctx->pc = 0x430194u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2128), GPR_VEC(ctx, 21));
    // 0x430198: 0x7fb60840  sq          $s6, 0x840($sp)
    ctx->pc = 0x430198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2112), GPR_VEC(ctx, 22));
    // 0x43019c: 0x8dc20010  lw          $v0, 0x10($t6)
    ctx->pc = 0x43019cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 16)));
    // 0x4301a0: 0x184000da  blez        $v0, . + 4 + (0xDA << 2)
    ctx->pc = 0x4301A0u;
    {
        const bool branch_taken_0x4301a0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x4301A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4301A0u;
        // 0x4301a4: 0x782d  daddu       $t7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4301a0) {
            ctx->pc = 0x43050Cu;
            goto label_43050c;
        }
    }
    ctx->pc = 0x4301A8u;
    // 0x4301a8: 0x8dd6000c  lw          $s6, 0xC($t6)
    ctx->pc = 0x4301a8u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 12)));
    // 0x4301ac: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x4301acu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4301b0: 0x27ad0800  addiu       $t5, $sp, 0x800
    ctx->pc = 0x4301b0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 29), 2048));
    // 0x4301b4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x4301b4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4301b8:
    // 0x4301b8: 0x1ac0008f  blez        $s6, . + 4 + (0x8F << 2)
    ctx->pc = 0x4301B8u;
    {
        const bool branch_taken_0x4301b8 = (GPR_S32(ctx, 22) <= 0);
        ctx->pc = 0x4301BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4301B8u;
        // 0x4301bc: 0x25f40004  addiu       $s4, $t7, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 15), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4301b8) {
            ctx->pc = 0x4303F8u;
            goto label_4303f8;
        }
    }
    ctx->pc = 0x4301C0u;
    // 0x4301c0: 0x8dc40018  lw          $a0, 0x18($t6)
    ctx->pc = 0x4301c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 24)));
    // 0x4301c4: 0x25e50002  addiu       $a1, $t7, 0x2
    ctx->pc = 0x4301c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 15), 2));
    // 0x4301c8: 0x8dc30004  lw          $v1, 0x4($t6)
    ctx->pc = 0x4301c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 4)));
    // 0x4301cc: 0x31f90004  andi        $t9, $t7, 0x4
    ctx->pc = 0x4301ccu;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)4);
    // 0x4301d0: 0x1e41018  mult        $v0, $t7, $a0
    ctx->pc = 0x4301d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x4301d4: 0xa43018  mult        $a2, $a1, $a0
    ctx->pc = 0x4301d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x4301d8: 0x8dd3000c  lw          $s3, 0xC($t6)
    ctx->pc = 0x4301d8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 12)));
    // 0x4301dc: 0xc39021  addu        $s2, $a2, $v1
    ctx->pc = 0x4301dcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x4301e0: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x4301e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4301e4: 0x2292821  addu        $a1, $s1, $t1
    ctx->pc = 0x4301e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 9)));
label_4301e8:
    // 0x4301e8: 0x91043  sra         $v0, $t1, 1
    ctx->pc = 0x4301e8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 9), 1));
    // 0x4301ec: 0x78a40000  lq          $a0, 0x0($a1)
    ctx->pc = 0x4301ecu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4301f0: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x4301f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x4301f4: 0x2493021  addu        $a2, $s2, $t1
    ctx->pc = 0x4301f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 9)));
    // 0x4301f8: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x4301f8u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4301fc: 0x7fa40800  sq          $a0, 0x800($sp)
    ctx->pc = 0x4301fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2048), GPR_VEC(ctx, 4));
    // 0x430200: 0x25300020  addiu       $s0, $t1, 0x20
    ctx->pc = 0x430200u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 9), 32));
    // 0x430204: 0xfc600608  sd          $zero, 0x608($v1)
    ctx->pc = 0x430204u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 1544), GPR_U64(ctx, 0));
    // 0x430208: 0x78a20010  lq          $v0, 0x10($a1)
    ctx->pc = 0x430208u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x43020c: 0xfc600000  sd          $zero, 0x0($v1)
    ctx->pc = 0x43020cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 0));
    // 0x430210: 0x7fa20810  sq          $v0, 0x810($sp)
    ctx->pc = 0x430210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2064), GPR_VEC(ctx, 2));
    // 0x430214: 0xfc600008  sd          $zero, 0x8($v1)
    ctx->pc = 0x430214u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 0));
    // 0x430218: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x430218u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x43021c: 0xfc600200  sd          $zero, 0x200($v1)
    ctx->pc = 0x43021cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 512), GPR_U64(ctx, 0));
    // 0x430220: 0x7fa20820  sq          $v0, 0x820($sp)
    ctx->pc = 0x430220u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2080), GPR_VEC(ctx, 2));
    // 0x430224: 0xfc600208  sd          $zero, 0x208($v1)
    ctx->pc = 0x430224u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 520), GPR_U64(ctx, 0));
    // 0x430228: 0x78c20010  lq          $v0, 0x10($a2)
    ctx->pc = 0x430228u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x43022c: 0xfc600400  sd          $zero, 0x400($v1)
    ctx->pc = 0x43022cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 1024), GPR_U64(ctx, 0));
    // 0x430230: 0x7fa20830  sq          $v0, 0x830($sp)
    ctx->pc = 0x430230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2096), GPR_VEC(ctx, 2));
    // 0x430234: 0xfc600408  sd          $zero, 0x408($v1)
    ctx->pc = 0x430234u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 1032), GPR_U64(ctx, 0));
    // 0x430238: 0xfc600600  sd          $zero, 0x600($v1)
    ctx->pc = 0x430238u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 1536), GPR_U64(ctx, 0));
    // 0x43023c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x43023cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_430240:
    // 0x430240: 0x25980020  addiu       $t8, $t4, 0x20
    ctx->pc = 0x430240u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 12), 32));
    // 0x430244: 0x180382d  daddu       $a3, $t4, $zero
    ctx->pc = 0x430244u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x430248: 0xc5827  nor         $t3, $zero, $t4
    ctx->pc = 0x430248u;
    SET_GPR_U64(ctx, 11, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 12)));
    // 0x43024c: 0x0  nop
    ctx->pc = 0x43024cu;
    // NOP
label_430250:
    // 0x430250: 0x13200019  beqz        $t9, . + 4 + (0x19 << 2)
    ctx->pc = 0x430250u;
    {
        const bool branch_taken_0x430250 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 0));
        ctx->pc = 0x430254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430250u;
        // 0x430254: 0x30e40002  andi        $a0, $a3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x430250) {
            ctx->pc = 0x4302B8u;
            goto label_4302b8;
        }
    }
    ctx->pc = 0x430258u;
    // 0x430258: 0x30e20020  andi        $v0, $a3, 0x20
    ctx->pc = 0x430258u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)32);
    // 0x43025c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x43025cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x430260: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x430260u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x430264: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x430264u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x430268: 0x30e30004  andi        $v1, $a3, 0x4
    ctx->pc = 0x430268u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4);
    // 0x43026c: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x43026cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x430270: 0x30e20008  andi        $v0, $a3, 0x8
    ctx->pc = 0x430270u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)8);
    // 0x430274: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x430274u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x430278: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x430278u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x43027c: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x43027cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x430280: 0x30e30010  andi        $v1, $a3, 0x10
    ctx->pc = 0x430280u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)16);
    // 0x430284: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x430284u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x430288: 0x30e60040  andi        $a2, $a3, 0x40
    ctx->pc = 0x430288u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)64);
    // 0x43028c: 0x30e20001  andi        $v0, $a3, 0x1
    ctx->pc = 0x43028cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    // 0x430290: 0x31650001  andi        $a1, $t3, 0x1
    ctx->pc = 0x430290u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)1);
    // 0x430294: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x430294u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x430298: 0x63043  sra         $a2, $a2, 1
    ctx->pc = 0x430298u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
    // 0x43029c: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x43029cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x4302a0: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x4302a0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x4302a4: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x4302a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x4302a8: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4302a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x4302ac: 0x821826  xor         $v1, $a0, $v0
    ctx->pc = 0x4302acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 2));
    // 0x4302b0: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x4302B0u;
    {
        const bool branch_taken_0x4302b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4302B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4302B0u;
        // 0x4302b4: 0x18a3021  addu        $a2, $t4, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4302b0) {
            ctx->pc = 0x430310u;
            goto label_430310;
        }
    }
    ctx->pc = 0x4302B8u;
label_4302b8:
    // 0x4302b8: 0x30e20020  andi        $v0, $a3, 0x20
    ctx->pc = 0x4302b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)32);
    // 0x4302bc: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x4302bcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x4302c0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x4302c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x4302c4: 0x30e30004  andi        $v1, $a3, 0x4
    ctx->pc = 0x4302c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4);
    // 0x4302c8: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x4302c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x4302cc: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x4302ccu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x4302d0: 0x30e20008  andi        $v0, $a3, 0x8
    ctx->pc = 0x4302d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)8);
    // 0x4302d4: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x4302d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x4302d8: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x4302d8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x4302dc: 0x30e30010  andi        $v1, $a3, 0x10
    ctx->pc = 0x4302dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)16);
    // 0x4302e0: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x4302e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x4302e4: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x4302e4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x4302e8: 0x30e20001  andi        $v0, $a3, 0x1
    ctx->pc = 0x4302e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    // 0x4302ec: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x4302ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x4302f0: 0x30e50040  andi        $a1, $a3, 0x40
    ctx->pc = 0x4302f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)64);
    // 0x4302f4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x4302f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4302f8: 0x52843  sra         $a1, $a1, 1
    ctx->pc = 0x4302f8u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 1));
    // 0x4302fc: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x4302fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x430300: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x430300u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x430304: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x430304u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x430308: 0x18a3021  addu        $a2, $t4, $t2
    ctx->pc = 0x430308u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 10)));
    // 0x43030c: 0x821826  xor         $v1, $a0, $v0
    ctx->pc = 0x43030cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 2));
label_430310:
    // 0x430310: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x430310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x430314: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x430314u;
    {
        const bool branch_taken_0x430314 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x430318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430314u;
        // 0x430318: 0x31143  sra         $v0, $v1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x430314) {
            ctx->pc = 0x430374u;
            goto label_430374;
        }
    }
    ctx->pc = 0x43031Cu;
    // 0x43031c: 0x31440001  andi        $a0, $t2, 0x1
    ctx->pc = 0x43031cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)1);
    // 0x430320: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x430320u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x430324: 0x21280  sll         $v0, $v0, 10
    ctx->pc = 0x430324u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 10));
    // 0x430328: 0x1231821  addu        $v1, $t1, $v1
    ctx->pc = 0x430328u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x43032c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x43032cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x430330: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x430330u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x430334: 0x3a32821  addu        $a1, $sp, $v1
    ctx->pc = 0x430334u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x430338: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x430338u;
    {
        const bool branch_taken_0x430338 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x43033Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430338u;
        // 0x43033c: 0x90a80000  lbu         $t0, 0x0($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x430338) {
            ctx->pc = 0x430354u;
            goto label_430354;
        }
    }
    ctx->pc = 0x430340u;
    // 0x430340: 0x61043  sra         $v0, $a2, 1
    ctx->pc = 0x430340u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 6), 1));
    // 0x430344: 0x1a21021  addu        $v0, $t5, $v0
    ctx->pc = 0x430344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
    // 0x430348: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x430348u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x43034c: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x43034Cu;
    {
        const bool branch_taken_0x43034c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x430350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43034Cu;
        // 0x430350: 0x306300f0  andi        $v1, $v1, 0xF0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)240);
        ctx->in_delay_slot = false;
        if (branch_taken_0x43034c) {
            ctx->pc = 0x4303BCu;
            goto label_4303bc;
        }
    }
    ctx->pc = 0x430354u;
label_430354:
    // 0x430354: 0x61843  sra         $v1, $a2, 1
    ctx->pc = 0x430354u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), 1));
    // 0x430358: 0x1a31821  addu        $v1, $t5, $v1
    ctx->pc = 0x430358u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 3)));
    // 0x43035c: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x43035cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x430360: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x430360u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x430364: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x430364u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x430368: 0x1021025  or          $v0, $t0, $v0
    ctx->pc = 0x430368u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x43036c: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x43036Cu;
    {
        const bool branch_taken_0x43036c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x430370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43036Cu;
        // 0x430370: 0xa0a20000  sb          $v0, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43036c) {
            ctx->pc = 0x4303C4u;
            goto label_4303c4;
        }
    }
    ctx->pc = 0x430374u;
label_430374:
    // 0x430374: 0x31440001  andi        $a0, $t2, 0x1
    ctx->pc = 0x430374u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)1);
    // 0x430378: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x430378u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x43037c: 0x21280  sll         $v0, $v0, 10
    ctx->pc = 0x43037cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 10));
    // 0x430380: 0x1231821  addu        $v1, $t1, $v1
    ctx->pc = 0x430380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x430384: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x430384u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x430388: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x430388u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x43038c: 0x3a32821  addu        $a1, $sp, $v1
    ctx->pc = 0x43038cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x430390: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x430390u;
    {
        const bool branch_taken_0x430390 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x430394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430390u;
        // 0x430394: 0x90a80000  lbu         $t0, 0x0($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x430390) {
            ctx->pc = 0x4303ACu;
            goto label_4303ac;
        }
    }
    ctx->pc = 0x430398u;
    // 0x430398: 0x61043  sra         $v0, $a2, 1
    ctx->pc = 0x430398u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 6), 1));
    // 0x43039c: 0x1a21021  addu        $v0, $t5, $v0
    ctx->pc = 0x43039cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
    // 0x4303a0: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x4303a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4303a4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x4303A4u;
    {
        const bool branch_taken_0x4303a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4303A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4303A4u;
        // 0x4303a8: 0x31902  srl         $v1, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4303a4) {
            ctx->pc = 0x4303BCu;
            goto label_4303bc;
        }
    }
    ctx->pc = 0x4303ACu;
label_4303ac:
    // 0x4303ac: 0x61043  sra         $v0, $a2, 1
    ctx->pc = 0x4303acu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 6), 1));
    // 0x4303b0: 0x1a21021  addu        $v0, $t5, $v0
    ctx->pc = 0x4303b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
    // 0x4303b4: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x4303b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4303b8: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x4303b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_4303bc:
    // 0x4303bc: 0x1031825  or          $v1, $t0, $v1
    ctx->pc = 0x4303bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x4303c0: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x4303c0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
label_4303c4:
    // 0x4303c4: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x4303c4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x4303c8: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x4303c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x4303cc: 0x29420020  slti        $v0, $t2, 0x20
    ctx->pc = 0x4303ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x4303d0: 0x1440ff9f  bnez        $v0, . + 4 + (-0x61 << 2)
    ctx->pc = 0x4303D0u;
    {
        const bool branch_taken_0x4303d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4303D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4303D0u;
        // 0x4303d4: 0x256bffff  addiu       $t3, $t3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4303d0) {
            ctx->pc = 0x430250u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_430250;
        }
    }
    ctx->pc = 0x4303D8u;
    // 0x4303d8: 0x300602d  daddu       $t4, $t8, $zero
    ctx->pc = 0x4303d8u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4303dc: 0x29820080  slti        $v0, $t4, 0x80
    ctx->pc = 0x4303dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 12) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x4303e0: 0x1440ff97  bnez        $v0, . + 4 + (-0x69 << 2)
    ctx->pc = 0x4303E0u;
    {
        const bool branch_taken_0x4303e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4303E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4303E0u;
        // 0x4303e4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4303e0) {
            ctx->pc = 0x430240u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_430240;
        }
    }
    ctx->pc = 0x4303E8u;
    // 0x4303e8: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x4303e8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4303ec: 0x133102a  slt         $v0, $t1, $s3
    ctx->pc = 0x4303ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x4303f0: 0x1440ff7d  bnez        $v0, . + 4 + (-0x83 << 2)
    ctx->pc = 0x4303F0u;
    {
        const bool branch_taken_0x4303f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4303F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4303F0u;
        // 0x4303f4: 0x2292821  addu        $a1, $s1, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4303f0) {
            ctx->pc = 0x4301E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4301e8;
        }
    }
    ctx->pc = 0x4303F8u;
label_4303f8:
    // 0x4303f8: 0x8dca000c  lw          $t2, 0xC($t6)
    ctx->pc = 0x4303f8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 12)));
    // 0x4303fc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4303fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x430400: 0xa6043  sra         $t4, $t2, 1
    ctx->pc = 0x430400u;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 10), 1));
    // 0x430404: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x430404u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_430408:
    // 0x430408: 0x19800038  blez        $t4, . + 4 + (0x38 << 2)
    ctx->pc = 0x430408u;
    {
        const bool branch_taken_0x430408 = (GPR_S32(ctx, 12) <= 0);
        ctx->pc = 0x43040Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430408u;
        // 0x43040c: 0x24cb0001  addiu       $t3, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x430408) {
            ctx->pc = 0x4304ECu;
            goto label_4304ec;
        }
    }
    ctx->pc = 0x430410u;
    // 0x430410: 0x8dc40018  lw          $a0, 0x18($t6)
    ctx->pc = 0x430410u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 24)));
    // 0x430414: 0x1e61821  addu        $v1, $t7, $a2
    ctx->pc = 0x430414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 6)));
    // 0x430418: 0x8dc50004  lw          $a1, 0x4($t6)
    ctx->pc = 0x430418u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 4)));
    // 0x43041c: 0x61240  sll         $v0, $a2, 9
    ctx->pc = 0x43041cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 9));
    // 0x430420: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x430420u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x430424: 0x5d3821  addu        $a3, $v0, $sp
    ctx->pc = 0x430424u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x430428: 0xa4043  sra         $t0, $t2, 1
    ctx->pc = 0x430428u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 10), 1));
    // 0x43042c: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x43042cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x430430: 0x3104003f  andi        $a0, $t0, 0x3F
    ctx->pc = 0x430430u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)63);
    // 0x430434: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x430434u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x430438: 0x19000015  blez        $t0, . + 4 + (0x15 << 2)
    ctx->pc = 0x430438u;
    {
        const bool branch_taken_0x430438 = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x43043Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430438u;
        // 0x43043c: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x430438) {
            ctx->pc = 0x430490u;
            goto label_430490;
        }
    }
    ctx->pc = 0x430440u;
    // 0x430440: 0x1080001a  beqz        $a0, . + 4 + (0x1A << 2)
    ctx->pc = 0x430440u;
    {
        const bool branch_taken_0x430440 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x430444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430440u;
        // 0x430444: 0x28820011  slti        $v0, $a0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x430440) {
            ctx->pc = 0x4304ACu;
            goto label_4304ac;
        }
    }
    ctx->pc = 0x430448u;
    // 0x430448: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x430448u;
    {
        const bool branch_taken_0x430448 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x430448) {
            ctx->pc = 0x43044Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x430448u;
            // 0x43044c: 0x78c20000  lq          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x430494u;
            goto label_430494;
        }
    }
    ctx->pc = 0x430450u;
    // 0x430450: 0x28820021  slti        $v0, $a0, 0x21
    ctx->pc = 0x430450u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)33) ? 1 : 0);
    // 0x430454: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x430454u;
    {
        const bool branch_taken_0x430454 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x430454) {
            ctx->pc = 0x430458u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x430454u;
            // 0x430458: 0x78c20000  lq          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x430480u;
            goto label_430480;
        }
    }
    ctx->pc = 0x43045Cu;
    // 0x43045c: 0x28820031  slti        $v0, $a0, 0x31
    ctx->pc = 0x43045cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)49) ? 1 : 0);
    // 0x430460: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x430460u;
    {
        const bool branch_taken_0x430460 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x430460) {
            ctx->pc = 0x430464u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x430460u;
            // 0x430464: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4304B0u;
            goto label_4304b0;
        }
    }
    ctx->pc = 0x430468u;
    // 0x430468: 0x78e20000  lq          $v0, 0x0($a3)
    ctx->pc = 0x430468u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x43046c: 0x24a30010  addiu       $v1, $a1, 0x10
    ctx->pc = 0x43046cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x430470: 0x24e60010  addiu       $a2, $a3, 0x10
    ctx->pc = 0x430470u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x430474: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x430474u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x430478: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x430478u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x43047c: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x43047cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_430480:
    // 0x430480: 0x25290010  addiu       $t1, $t1, 0x10
    ctx->pc = 0x430480u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
    // 0x430484: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x430484u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x430488: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x430488u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x43048c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x43048cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_430490:
    // 0x430490: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x430490u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_430494:
    // 0x430494: 0x25290010  addiu       $t1, $t1, 0x10
    ctx->pc = 0x430494u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
    // 0x430498: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x430498u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x43049c: 0x128382a  slt         $a3, $t1, $t0
    ctx->pc = 0x43049cu;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x4304a0: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x4304a0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x4304a4: 0x10e00011  beqz        $a3, . + 4 + (0x11 << 2)
    ctx->pc = 0x4304A4u;
    {
        const bool branch_taken_0x4304a4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x4304A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4304A4u;
        // 0x4304a8: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4304a4) {
            ctx->pc = 0x4304ECu;
            goto label_4304ec;
        }
    }
    ctx->pc = 0x4304ACu;
label_4304ac:
    // 0x4304ac: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x4304acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4304b0:
    // 0x4304b0: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x4304b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4304b4: 0x0  nop
    ctx->pc = 0x4304b4u;
    // NOP
label_4304b8:
    // 0x4304b8: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x4304b8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4304bc: 0x25290040  addiu       $t1, $t1, 0x40
    ctx->pc = 0x4304bcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 64));
    // 0x4304c0: 0x128382a  slt         $a3, $t1, $t0
    ctx->pc = 0x4304c0u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x4304c4: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x4304c4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x4304c8: 0x78a20010  lq          $v0, 0x10($a1)
    ctx->pc = 0x4304c8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x4304cc: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x4304ccu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
    // 0x4304d0: 0x78a30020  lq          $v1, 0x20($a1)
    ctx->pc = 0x4304d0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x4304d4: 0x7c830020  sq          $v1, 0x20($a0)
    ctx->pc = 0x4304d4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 3));
    // 0x4304d8: 0x78a20030  lq          $v0, 0x30($a1)
    ctx->pc = 0x4304d8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x4304dc: 0x24a50040  addiu       $a1, $a1, 0x40
    ctx->pc = 0x4304dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x4304e0: 0x7c820030  sq          $v0, 0x30($a0)
    ctx->pc = 0x4304e0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 2));
    // 0x4304e4: 0x14e0fff4  bnez        $a3, . + 4 + (-0xC << 2)
    ctx->pc = 0x4304E4u;
    {
        const bool branch_taken_0x4304e4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x4304E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4304E4u;
        // 0x4304e8: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4304e4) {
            ctx->pc = 0x4304B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4304b8;
        }
    }
    ctx->pc = 0x4304ECu;
label_4304ec:
    // 0x4304ec: 0x160302d  daddu       $a2, $t3, $zero
    ctx->pc = 0x4304ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4304f0: 0x28c20004  slti        $v0, $a2, 0x4
    ctx->pc = 0x4304f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x4304f4: 0x5440ffc4  bnel        $v0, $zero, . + 4 + (-0x3C << 2)
    ctx->pc = 0x4304F4u;
    {
        const bool branch_taken_0x4304f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4304f4) {
            ctx->pc = 0x4304F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4304F4u;
            // 0x4304f8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x430408u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_430408;
        }
    }
    ctx->pc = 0x4304FCu;
    // 0x4304fc: 0x280782d  daddu       $t7, $s4, $zero
    ctx->pc = 0x4304fcu;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x430500: 0x1f5102a  slt         $v0, $t7, $s5
    ctx->pc = 0x430500u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x430504: 0x5440ff2c  bnel        $v0, $zero, . + 4 + (-0xD4 << 2)
    ctx->pc = 0x430504u;
    {
        const bool branch_taken_0x430504 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x430504) {
            ctx->pc = 0x430508u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x430504u;
            // 0x430508: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4301B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4301b8;
        }
    }
    ctx->pc = 0x43050Cu;
label_43050c:
    // 0x43050c: 0x7bb008a0  lq          $s0, 0x8A0($sp)
    ctx->pc = 0x43050cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 2208)));
    // 0x430510: 0x7bb10890  lq          $s1, 0x890($sp)
    ctx->pc = 0x430510u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 2192)));
    // 0x430514: 0x7bb20880  lq          $s2, 0x880($sp)
    ctx->pc = 0x430514u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 2176)));
    // 0x430518: 0x7bb30870  lq          $s3, 0x870($sp)
    ctx->pc = 0x430518u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 2160)));
    // 0x43051c: 0x7bb40860  lq          $s4, 0x860($sp)
    ctx->pc = 0x43051cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 2144)));
    // 0x430520: 0x7bb50850  lq          $s5, 0x850($sp)
    ctx->pc = 0x430520u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 2128)));
    // 0x430524: 0x7bb60840  lq          $s6, 0x840($sp)
    ctx->pc = 0x430524u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 2112)));
    // 0x430528: 0x3e00008  jr          $ra
    ctx->pc = 0x430528u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43052Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430528u;
        // 0x43052c: 0x27bd08b0  addiu       $sp, $sp, 0x8B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x430528u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x430530u;
}
