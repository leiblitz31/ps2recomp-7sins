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

// Function: sub_00343740
// Address: 0x343740 - 0x343870
void sub_00343740_0x343740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00343740_0x343740");
#endif

    switch (ctx->pc) {
        case 0x343740u: goto label_343740;
        case 0x343744u: goto label_343744;
        case 0x343748u: goto label_343748;
        case 0x34374cu: goto label_34374c;
        case 0x343750u: goto label_343750;
        case 0x343754u: goto label_343754;
        case 0x343758u: goto label_343758;
        case 0x34375cu: goto label_34375c;
        case 0x343760u: goto label_343760;
        case 0x343764u: goto label_343764;
        case 0x343768u: goto label_343768;
        case 0x34376cu: goto label_34376c;
        case 0x343770u: goto label_343770;
        case 0x343774u: goto label_343774;
        case 0x343778u: goto label_343778;
        case 0x34377cu: goto label_34377c;
        case 0x343780u: goto label_343780;
        case 0x343784u: goto label_343784;
        case 0x343788u: goto label_343788;
        case 0x34378cu: goto label_34378c;
        case 0x343790u: goto label_343790;
        case 0x343794u: goto label_343794;
        case 0x343798u: goto label_343798;
        case 0x34379cu: goto label_34379c;
        case 0x3437a0u: goto label_3437a0;
        case 0x3437a4u: goto label_3437a4;
        case 0x3437a8u: goto label_3437a8;
        case 0x3437acu: goto label_3437ac;
        case 0x3437b0u: goto label_3437b0;
        case 0x3437b4u: goto label_3437b4;
        case 0x3437b8u: goto label_3437b8;
        case 0x3437bcu: goto label_3437bc;
        case 0x3437c0u: goto label_3437c0;
        case 0x3437c4u: goto label_3437c4;
        case 0x3437c8u: goto label_3437c8;
        case 0x3437ccu: goto label_3437cc;
        case 0x3437d0u: goto label_3437d0;
        case 0x3437d4u: goto label_3437d4;
        case 0x3437d8u: goto label_3437d8;
        case 0x3437dcu: goto label_3437dc;
        case 0x3437e0u: goto label_3437e0;
        case 0x3437e4u: goto label_3437e4;
        case 0x3437e8u: goto label_3437e8;
        case 0x3437ecu: goto label_3437ec;
        case 0x3437f0u: goto label_3437f0;
        case 0x3437f4u: goto label_3437f4;
        case 0x3437f8u: goto label_3437f8;
        case 0x3437fcu: goto label_3437fc;
        case 0x343800u: goto label_343800;
        case 0x343804u: goto label_343804;
        case 0x343808u: goto label_343808;
        case 0x34380cu: goto label_34380c;
        case 0x343810u: goto label_343810;
        case 0x343814u: goto label_343814;
        case 0x343818u: goto label_343818;
        case 0x34381cu: goto label_34381c;
        case 0x343820u: goto label_343820;
        case 0x343824u: goto label_343824;
        case 0x343828u: goto label_343828;
        case 0x34382cu: goto label_34382c;
        case 0x343830u: goto label_343830;
        case 0x343834u: goto label_343834;
        case 0x343838u: goto label_343838;
        case 0x34383cu: goto label_34383c;
        case 0x343840u: goto label_343840;
        case 0x343844u: goto label_343844;
        case 0x343848u: goto label_343848;
        case 0x34384cu: goto label_34384c;
        case 0x343850u: goto label_343850;
        case 0x343854u: goto label_343854;
        case 0x343858u: goto label_343858;
        case 0x34385cu: goto label_34385c;
        case 0x343860u: goto label_343860;
        case 0x343864u: goto label_343864;
        case 0x343868u: goto label_343868;
        case 0x34386cu: goto label_34386c;
        default: break;
    }

    ctx->pc = 0x343740u;

label_343740:
    // 0x343740: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x343740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_343744:
    // 0x343744: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x343744u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_343748:
    // 0x343748: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x343748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_34374c:
    // 0x34374c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x34374cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_343750:
    // 0x343750: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x343750u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_343754:
    // 0x343754: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x343754u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_343758:
    // 0x343758: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x343758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_34375c:
    // 0x34375c: 0x2440018  mult        $zero, $s2, $a0
    ctx->pc = 0x34375cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_343760:
    // 0x343760: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x343760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_343764:
    // 0x343764: 0x3c100062  lui         $s0, 0x62
    ctx->pc = 0x343764u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)98 << 16));
label_343768:
    // 0x343768: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x343768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_34376c:
    // 0x34376c: 0x2603e880  addiu       $v1, $s0, -0x1780
    ctx->pc = 0x34376cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961280));
label_343770:
    // 0x343770: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x343770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
label_343774:
    // 0x343774: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x343774u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_343778:
    // 0x343778: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x343778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_34377c:
    // 0x34377c: 0x2012  mflo        $a0
    ctx->pc = 0x34377cu;
    SET_GPR_U64(ctx, 4, ctx->lo);
label_343780:
    // 0x343780: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x343780u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_343784:
    // 0x343784: 0x34a50130  ori         $a1, $a1, 0x130
    ctx->pc = 0x343784u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)304);
label_343788:
    // 0x343788: 0x8c620108  lw          $v0, 0x108($v1)
    ctx->pc = 0x343788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
label_34378c:
    // 0x34378c: 0x40f809  jalr        $v0
label_343790:
    if (ctx->pc == 0x343790u) {
        ctx->pc = 0x343790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34378Cu;
        // 0x343790: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x343794u;
        goto label_343794;
    }
    ctx->pc = 0x34378Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x343794u);
        ctx->pc = 0x343790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34378Cu;
        // 0x343790: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34378Cu, 0x343794u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x343794u;
label_343794:
    // 0x343794: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x343794u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_343798:
    // 0x343798: 0x12200025  beqz        $s1, . + 4 + (0x25 << 2)
label_34379c:
    if (ctx->pc == 0x34379Cu) {
        ctx->pc = 0x34379Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343798u;
        // 0x34379c: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3437A0u;
        goto label_3437a0;
    }
    ctx->pc = 0x343798u;
    {
        const bool branch_taken_0x343798 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x34379Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343798u;
        // 0x34379c: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343798) {
            ctx->pc = 0x343830u;
            goto label_343830;
        }
    }
    ctx->pc = 0x3437A0u;
label_3437a0:
    // 0x3437a0: 0x1a400019  blez        $s2, . + 4 + (0x19 << 2)
label_3437a4:
    if (ctx->pc == 0x3437A4u) {
        ctx->pc = 0x3437A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3437A0u;
        // 0x3437a4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3437A8u;
        goto label_3437a8;
    }
    ctx->pc = 0x3437A0u;
    {
        const bool branch_taken_0x3437a0 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x3437A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3437A0u;
        // 0x3437a4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3437a0) {
            ctx->pc = 0x343808u;
            goto label_343808;
        }
    }
    ctx->pc = 0x3437A8u;
label_3437a8:
    // 0x3437a8: 0x2408001c  addiu       $t0, $zero, 0x1C
    ctx->pc = 0x3437a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_3437ac:
    // 0x3437ac: 0xe82018  mult        $a0, $a3, $t0
    ctx->pc = 0x3437acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_3437b0:
    // 0x3437b0: 0x951821  addu        $v1, $a0, $s5
    ctx->pc = 0x3437b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
label_3437b4:
    // 0x3437b4: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x3437b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
label_3437b8:
    // 0x3437b8: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x3437b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3437bc:
    // 0x3437bc: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x3437bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3437c0:
    // 0x3437c0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3437c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3437c4:
    // 0x3437c4: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x3437c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_3437c8:
    // 0x3437c8: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x3437c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_3437cc:
    // 0x3437cc: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x3437ccu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
label_3437d0:
    // 0x3437d0: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x3437d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_3437d4:
    // 0x3437d4: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x3437d4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
label_3437d8:
    // 0x3437d8: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x3437d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_3437dc:
    // 0x3437dc: 0xacc3000c  sw          $v1, 0xC($a2)
    ctx->pc = 0x3437dcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 3));
label_3437e0:
    // 0x3437e0: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x3437e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_3437e4:
    // 0x3437e4: 0xacc20010  sw          $v0, 0x10($a2)
    ctx->pc = 0x3437e4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 2));
label_3437e8:
    // 0x3437e8: 0x8ca30014  lw          $v1, 0x14($a1)
    ctx->pc = 0x3437e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_3437ec:
    // 0x3437ec: 0xacc30014  sw          $v1, 0x14($a2)
    ctx->pc = 0x3437ecu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 3));
label_3437f0:
    // 0x3437f0: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x3437f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
label_3437f4:
    // 0x3437f4: 0xacc20018  sw          $v0, 0x18($a2)
    ctx->pc = 0x3437f4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 2));
label_3437f8:
    // 0x3437f8: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3437f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_3437fc:
    // 0x3437fc: 0xf2102a  slt         $v0, $a3, $s2
    ctx->pc = 0x3437fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_343800:
    // 0x343800: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
label_343804:
    if (ctx->pc == 0x343804u) {
        ctx->pc = 0x343804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343800u;
        // 0x343804: 0xe82018  mult        $a0, $a3, $t0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x343808u;
        goto label_343808;
    }
    ctx->pc = 0x343800u;
    {
        const bool branch_taken_0x343800 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x343804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343800u;
        // 0x343804: 0xe82018  mult        $a0, $a3, $t0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x343800) {
            ctx->pc = 0x3437B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3437b0;
        }
    }
    ctx->pc = 0x343808u;
label_343808:
    // 0x343808: 0x8e640018  lw          $a0, 0x18($s3)
    ctx->pc = 0x343808u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_34380c:
    // 0x34380c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_343810:
    if (ctx->pc == 0x343810u) {
        ctx->pc = 0x343810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34380Cu;
        // 0x343810: 0x2603e880  addiu       $v1, $s0, -0x1780 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x343814u;
        goto label_343814;
    }
    ctx->pc = 0x34380Cu;
    {
        const bool branch_taken_0x34380c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x343810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34380Cu;
        // 0x343810: 0x2603e880  addiu       $v1, $s0, -0x1780 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34380c) {
            ctx->pc = 0x343820u;
            goto label_343820;
        }
    }
    ctx->pc = 0x343814u;
label_343814:
    // 0x343814: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x343814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_343818:
    // 0x343818: 0x40f809  jalr        $v0
label_34381c:
    if (ctx->pc == 0x34381Cu) {
        ctx->pc = 0x343820u;
        goto label_343820;
    }
    ctx->pc = 0x343818u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x343820u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x343818u, 0x343820u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x343820u;
label_343820:
    // 0x343820: 0xae720014  sw          $s2, 0x14($s3)
    ctx->pc = 0x343820u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 18));
label_343824:
    // 0x343824: 0x260a02d  daddu       $s4, $s3, $zero
    ctx->pc = 0x343824u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_343828:
    // 0x343828: 0xae710018  sw          $s1, 0x18($s3)
    ctx->pc = 0x343828u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 17));
label_34382c:
    // 0x34382c: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x34382cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_343830:
    // 0x343830: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x343830u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_343834:
    // 0x343834: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x343834u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_343838:
    // 0x343838: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x343838u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_34383c:
    // 0x34383c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x34383cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_343840:
    // 0x343840: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x343840u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_343844:
    // 0x343844: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x343844u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_343848:
    // 0x343848: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x343848u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_34384c:
    // 0x34384c: 0x3e00008  jr          $ra
label_343850:
    if (ctx->pc == 0x343850u) {
        ctx->pc = 0x343850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34384Cu;
        // 0x343850: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x343854u;
        goto label_343854;
    }
    ctx->pc = 0x34384Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x343850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34384Cu;
        // 0x343850: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34384Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x343854u;
label_343854:
    // 0x343854: 0x0  nop
    ctx->pc = 0x343854u;
    // NOP
label_343858:
    // 0x343858: 0x8c870014  lw          $a3, 0x14($a0)
    ctx->pc = 0x343858u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_34385c:
    // 0x34385c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x34385cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_343860:
    // 0x343860: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x343860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_343864:
    // 0x343864: 0xaca70000  sw          $a3, 0x0($a1)
    ctx->pc = 0x343864u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 7));
label_343868:
    // 0x343868: 0x3e00008  jr          $ra
label_34386c:
    if (ctx->pc == 0x34386Cu) {
        ctx->pc = 0x34386Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343868u;
        // 0x34386c: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x343870u;
        goto label_fallthrough_0x343868;
    }
    ctx->pc = 0x343868u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34386Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343868u;
        // 0x34386c: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x343868u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x343868:
    ctx->pc = 0x343870u;
}
