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

// Function: sub_003410B0
// Address: 0x3410b0 - 0x341200
void sub_003410B0_0x3410b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003410B0_0x3410b0");
#endif

    switch (ctx->pc) {
        case 0x3410b0u: goto label_3410b0;
        case 0x3410b4u: goto label_3410b4;
        case 0x3410b8u: goto label_3410b8;
        case 0x3410bcu: goto label_3410bc;
        case 0x3410c0u: goto label_3410c0;
        case 0x3410c4u: goto label_3410c4;
        case 0x3410c8u: goto label_3410c8;
        case 0x3410ccu: goto label_3410cc;
        case 0x3410d0u: goto label_3410d0;
        case 0x3410d4u: goto label_3410d4;
        case 0x3410d8u: goto label_3410d8;
        case 0x3410dcu: goto label_3410dc;
        case 0x3410e0u: goto label_3410e0;
        case 0x3410e4u: goto label_3410e4;
        case 0x3410e8u: goto label_3410e8;
        case 0x3410ecu: goto label_3410ec;
        case 0x3410f0u: goto label_3410f0;
        case 0x3410f4u: goto label_3410f4;
        case 0x3410f8u: goto label_3410f8;
        case 0x3410fcu: goto label_3410fc;
        case 0x341100u: goto label_341100;
        case 0x341104u: goto label_341104;
        case 0x341108u: goto label_341108;
        case 0x34110cu: goto label_34110c;
        case 0x341110u: goto label_341110;
        case 0x341114u: goto label_341114;
        case 0x341118u: goto label_341118;
        case 0x34111cu: goto label_34111c;
        case 0x341120u: goto label_341120;
        case 0x341124u: goto label_341124;
        case 0x341128u: goto label_341128;
        case 0x34112cu: goto label_34112c;
        case 0x341130u: goto label_341130;
        case 0x341134u: goto label_341134;
        case 0x341138u: goto label_341138;
        case 0x34113cu: goto label_34113c;
        case 0x341140u: goto label_341140;
        case 0x341144u: goto label_341144;
        case 0x341148u: goto label_341148;
        case 0x34114cu: goto label_34114c;
        case 0x341150u: goto label_341150;
        case 0x341154u: goto label_341154;
        case 0x341158u: goto label_341158;
        case 0x34115cu: goto label_34115c;
        case 0x341160u: goto label_341160;
        case 0x341164u: goto label_341164;
        case 0x341168u: goto label_341168;
        case 0x34116cu: goto label_34116c;
        case 0x341170u: goto label_341170;
        case 0x341174u: goto label_341174;
        case 0x341178u: goto label_341178;
        case 0x34117cu: goto label_34117c;
        case 0x341180u: goto label_341180;
        case 0x341184u: goto label_341184;
        case 0x341188u: goto label_341188;
        case 0x34118cu: goto label_34118c;
        case 0x341190u: goto label_341190;
        case 0x341194u: goto label_341194;
        case 0x341198u: goto label_341198;
        case 0x34119cu: goto label_34119c;
        case 0x3411a0u: goto label_3411a0;
        case 0x3411a4u: goto label_3411a4;
        case 0x3411a8u: goto label_3411a8;
        case 0x3411acu: goto label_3411ac;
        case 0x3411b0u: goto label_3411b0;
        case 0x3411b4u: goto label_3411b4;
        case 0x3411b8u: goto label_3411b8;
        case 0x3411bcu: goto label_3411bc;
        case 0x3411c0u: goto label_3411c0;
        case 0x3411c4u: goto label_3411c4;
        case 0x3411c8u: goto label_3411c8;
        case 0x3411ccu: goto label_3411cc;
        case 0x3411d0u: goto label_3411d0;
        case 0x3411d4u: goto label_3411d4;
        case 0x3411d8u: goto label_3411d8;
        case 0x3411dcu: goto label_3411dc;
        case 0x3411e0u: goto label_3411e0;
        case 0x3411e4u: goto label_3411e4;
        case 0x3411e8u: goto label_3411e8;
        case 0x3411ecu: goto label_3411ec;
        case 0x3411f0u: goto label_3411f0;
        case 0x3411f4u: goto label_3411f4;
        case 0x3411f8u: goto label_3411f8;
        case 0x3411fcu: goto label_3411fc;
        default: break;
    }

    ctx->pc = 0x3410b0u;

label_3410b0:
    // 0x3410b0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3410b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_3410b4:
    // 0x3410b4: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x3410b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_3410b8:
    // 0x3410b8: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x3410b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_3410bc:
    // 0x3410bc: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x3410bcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3410c0:
    // 0x3410c0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3410c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3410c4:
    // 0x3410c4: 0x2404002c  addiu       $a0, $zero, 0x2C
    ctx->pc = 0x3410c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
label_3410c8:
    // 0x3410c8: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x3410c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_3410cc:
    // 0x3410cc: 0x2440018  mult        $zero, $s2, $a0
    ctx->pc = 0x3410ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_3410d0:
    // 0x3410d0: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x3410d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_3410d4:
    // 0x3410d4: 0x3c100062  lui         $s0, 0x62
    ctx->pc = 0x3410d4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)98 << 16));
label_3410d8:
    // 0x3410d8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3410d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3410dc:
    // 0x3410dc: 0x2603e880  addiu       $v1, $s0, -0x1780
    ctx->pc = 0x3410dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961280));
label_3410e0:
    // 0x3410e0: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x3410e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
label_3410e4:
    // 0x3410e4: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x3410e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_3410e8:
    // 0x3410e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3410e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3410ec:
    // 0x3410ec: 0x2012  mflo        $a0
    ctx->pc = 0x3410ecu;
    SET_GPR_U64(ctx, 4, ctx->lo);
label_3410f0:
    // 0x3410f0: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x3410f0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3410f4:
    // 0x3410f4: 0x34a50130  ori         $a1, $a1, 0x130
    ctx->pc = 0x3410f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)304);
label_3410f8:
    // 0x3410f8: 0x8c620108  lw          $v0, 0x108($v1)
    ctx->pc = 0x3410f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
label_3410fc:
    // 0x3410fc: 0x40f809  jalr        $v0
label_341100:
    if (ctx->pc == 0x341100u) {
        ctx->pc = 0x341100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3410FCu;
        // 0x341100: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341104u;
        goto label_341104;
    }
    ctx->pc = 0x3410FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x341104u);
        ctx->pc = 0x341100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3410FCu;
        // 0x341100: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3410FCu, 0x341104u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x341104u;
label_341104:
    // 0x341104: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x341104u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_341108:
    // 0x341108: 0x1220002d  beqz        $s1, . + 4 + (0x2D << 2)
label_34110c:
    if (ctx->pc == 0x34110Cu) {
        ctx->pc = 0x34110Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341108u;
        // 0x34110c: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341110u;
        goto label_341110;
    }
    ctx->pc = 0x341108u;
    {
        const bool branch_taken_0x341108 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x34110Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341108u;
        // 0x34110c: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341108) {
            ctx->pc = 0x3411C0u;
            goto label_3411c0;
        }
    }
    ctx->pc = 0x341110u;
label_341110:
    // 0x341110: 0x1a400021  blez        $s2, . + 4 + (0x21 << 2)
label_341114:
    if (ctx->pc == 0x341114u) {
        ctx->pc = 0x341114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341110u;
        // 0x341114: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341118u;
        goto label_341118;
    }
    ctx->pc = 0x341110u;
    {
        const bool branch_taken_0x341110 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x341114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341110u;
        // 0x341114: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341110) {
            ctx->pc = 0x341198u;
            goto label_341198;
        }
    }
    ctx->pc = 0x341118u;
label_341118:
    // 0x341118: 0x2408002c  addiu       $t0, $zero, 0x2C
    ctx->pc = 0x341118u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
label_34111c:
    // 0x34111c: 0xe83018  mult        $a2, $a3, $t0
    ctx->pc = 0x34111cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_341120:
    // 0x341120: 0xd51821  addu        $v1, $a2, $s5
    ctx->pc = 0x341120u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 21)));
label_341124:
    // 0x341124: 0xd13021  addu        $a2, $a2, $s1
    ctx->pc = 0x341124u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
label_341128:
    // 0x341128: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x341128u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_34112c:
    // 0x34112c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x34112cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_341130:
    // 0x341130: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x341130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_341134:
    // 0x341134: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x341134u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_341138:
    // 0x341138: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x341138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_34113c:
    // 0x34113c: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x34113cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_341140:
    // 0x341140: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x341140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_341144:
    // 0x341144: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x341144u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
label_341148:
    // 0x341148: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x341148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_34114c:
    // 0x34114c: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x34114cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
label_341150:
    // 0x341150: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x341150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_341154:
    // 0x341154: 0xaca20010  sw          $v0, 0x10($a1)
    ctx->pc = 0x341154u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 2));
label_341158:
    // 0x341158: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x341158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_34115c:
    // 0x34115c: 0xaca30014  sw          $v1, 0x14($a1)
    ctx->pc = 0x34115cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 3));
label_341160:
    // 0x341160: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x341160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_341164:
    // 0x341164: 0xaca20018  sw          $v0, 0x18($a1)
    ctx->pc = 0x341164u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 2));
label_341168:
    // 0x341168: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x341168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_34116c:
    // 0x34116c: 0xaca3001c  sw          $v1, 0x1C($a1)
    ctx->pc = 0x34116cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 3));
label_341170:
    // 0x341170: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x341170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_341174:
    // 0x341174: 0xaca20020  sw          $v0, 0x20($a1)
    ctx->pc = 0x341174u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 2));
label_341178:
    // 0x341178: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x341178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_34117c:
    // 0x34117c: 0xaca30024  sw          $v1, 0x24($a1)
    ctx->pc = 0x34117cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 3));
label_341180:
    // 0x341180: 0x8c820028  lw          $v0, 0x28($a0)
    ctx->pc = 0x341180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_341184:
    // 0x341184: 0xaca20028  sw          $v0, 0x28($a1)
    ctx->pc = 0x341184u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 2));
label_341188:
    // 0x341188: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x341188u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_34118c:
    // 0x34118c: 0xf2102a  slt         $v0, $a3, $s2
    ctx->pc = 0x34118cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_341190:
    // 0x341190: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
label_341194:
    if (ctx->pc == 0x341194u) {
        ctx->pc = 0x341194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341190u;
        // 0x341194: 0xe83018  mult        $a2, $a3, $t0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x341198u;
        goto label_341198;
    }
    ctx->pc = 0x341190u;
    {
        const bool branch_taken_0x341190 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x341194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341190u;
        // 0x341194: 0xe83018  mult        $a2, $a3, $t0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x341190) {
            ctx->pc = 0x341120u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_341120;
        }
    }
    ctx->pc = 0x341198u;
label_341198:
    // 0x341198: 0x8e840018  lw          $a0, 0x18($s4)
    ctx->pc = 0x341198u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_34119c:
    // 0x34119c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_3411a0:
    if (ctx->pc == 0x3411A0u) {
        ctx->pc = 0x3411A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34119Cu;
        // 0x3411a0: 0x2603e880  addiu       $v1, $s0, -0x1780 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3411A4u;
        goto label_3411a4;
    }
    ctx->pc = 0x34119Cu;
    {
        const bool branch_taken_0x34119c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3411A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34119Cu;
        // 0x3411a0: 0x2603e880  addiu       $v1, $s0, -0x1780 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34119c) {
            ctx->pc = 0x3411B0u;
            goto label_3411b0;
        }
    }
    ctx->pc = 0x3411A4u;
label_3411a4:
    // 0x3411a4: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x3411a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_3411a8:
    // 0x3411a8: 0x40f809  jalr        $v0
label_3411ac:
    if (ctx->pc == 0x3411ACu) {
        ctx->pc = 0x3411B0u;
        goto label_3411b0;
    }
    ctx->pc = 0x3411A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3411B0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3411A8u, 0x3411B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3411B0u;
label_3411b0:
    // 0x3411b0: 0xae920014  sw          $s2, 0x14($s4)
    ctx->pc = 0x3411b0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 18));
label_3411b4:
    // 0x3411b4: 0x280982d  daddu       $s3, $s4, $zero
    ctx->pc = 0x3411b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3411b8:
    // 0x3411b8: 0xae910018  sw          $s1, 0x18($s4)
    ctx->pc = 0x3411b8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 17));
label_3411bc:
    // 0x3411bc: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x3411bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3411c0:
    // 0x3411c0: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x3411c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3411c4:
    // 0x3411c4: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x3411c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3411c8:
    // 0x3411c8: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x3411c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3411cc:
    // 0x3411cc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3411ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3411d0:
    // 0x3411d0: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x3411d0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3411d4:
    // 0x3411d4: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x3411d4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3411d8:
    // 0x3411d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3411d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3411dc:
    // 0x3411dc: 0x3e00008  jr          $ra
label_3411e0:
    if (ctx->pc == 0x3411E0u) {
        ctx->pc = 0x3411E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3411DCu;
        // 0x3411e0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3411E4u;
        goto label_3411e4;
    }
    ctx->pc = 0x3411DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3411E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3411DCu;
        // 0x3411e0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3411DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3411E4u;
label_3411e4:
    // 0x3411e4: 0x0  nop
    ctx->pc = 0x3411e4u;
    // NOP
label_3411e8:
    // 0x3411e8: 0x8c870014  lw          $a3, 0x14($a0)
    ctx->pc = 0x3411e8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_3411ec:
    // 0x3411ec: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3411ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3411f0:
    // 0x3411f0: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x3411f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_3411f4:
    // 0x3411f4: 0xaca70000  sw          $a3, 0x0($a1)
    ctx->pc = 0x3411f4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 7));
label_3411f8:
    // 0x3411f8: 0x3e00008  jr          $ra
label_3411fc:
    if (ctx->pc == 0x3411FCu) {
        ctx->pc = 0x3411FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3411F8u;
        // 0x3411fc: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341200u;
        goto label_fallthrough_0x3411f8;
    }
    ctx->pc = 0x3411F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3411FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3411F8u;
        // 0x3411fc: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3411F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3411f8:
    ctx->pc = 0x341200u;
}
