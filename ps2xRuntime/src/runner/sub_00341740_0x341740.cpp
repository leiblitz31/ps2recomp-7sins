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

// Function: sub_00341740
// Address: 0x341740 - 0x3418a8
void sub_00341740_0x341740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00341740_0x341740");
#endif

    switch (ctx->pc) {
        case 0x341740u: goto label_341740;
        case 0x341744u: goto label_341744;
        case 0x341748u: goto label_341748;
        case 0x34174cu: goto label_34174c;
        case 0x341750u: goto label_341750;
        case 0x341754u: goto label_341754;
        case 0x341758u: goto label_341758;
        case 0x34175cu: goto label_34175c;
        case 0x341760u: goto label_341760;
        case 0x341764u: goto label_341764;
        case 0x341768u: goto label_341768;
        case 0x34176cu: goto label_34176c;
        case 0x341770u: goto label_341770;
        case 0x341774u: goto label_341774;
        case 0x341778u: goto label_341778;
        case 0x34177cu: goto label_34177c;
        case 0x341780u: goto label_341780;
        case 0x341784u: goto label_341784;
        case 0x341788u: goto label_341788;
        case 0x34178cu: goto label_34178c;
        case 0x341790u: goto label_341790;
        case 0x341794u: goto label_341794;
        case 0x341798u: goto label_341798;
        case 0x34179cu: goto label_34179c;
        case 0x3417a0u: goto label_3417a0;
        case 0x3417a4u: goto label_3417a4;
        case 0x3417a8u: goto label_3417a8;
        case 0x3417acu: goto label_3417ac;
        case 0x3417b0u: goto label_3417b0;
        case 0x3417b4u: goto label_3417b4;
        case 0x3417b8u: goto label_3417b8;
        case 0x3417bcu: goto label_3417bc;
        case 0x3417c0u: goto label_3417c0;
        case 0x3417c4u: goto label_3417c4;
        case 0x3417c8u: goto label_3417c8;
        case 0x3417ccu: goto label_3417cc;
        case 0x3417d0u: goto label_3417d0;
        case 0x3417d4u: goto label_3417d4;
        case 0x3417d8u: goto label_3417d8;
        case 0x3417dcu: goto label_3417dc;
        case 0x3417e0u: goto label_3417e0;
        case 0x3417e4u: goto label_3417e4;
        case 0x3417e8u: goto label_3417e8;
        case 0x3417ecu: goto label_3417ec;
        case 0x3417f0u: goto label_3417f0;
        case 0x3417f4u: goto label_3417f4;
        case 0x3417f8u: goto label_3417f8;
        case 0x3417fcu: goto label_3417fc;
        case 0x341800u: goto label_341800;
        case 0x341804u: goto label_341804;
        case 0x341808u: goto label_341808;
        case 0x34180cu: goto label_34180c;
        case 0x341810u: goto label_341810;
        case 0x341814u: goto label_341814;
        case 0x341818u: goto label_341818;
        case 0x34181cu: goto label_34181c;
        case 0x341820u: goto label_341820;
        case 0x341824u: goto label_341824;
        case 0x341828u: goto label_341828;
        case 0x34182cu: goto label_34182c;
        case 0x341830u: goto label_341830;
        case 0x341834u: goto label_341834;
        case 0x341838u: goto label_341838;
        case 0x34183cu: goto label_34183c;
        case 0x341840u: goto label_341840;
        case 0x341844u: goto label_341844;
        case 0x341848u: goto label_341848;
        case 0x34184cu: goto label_34184c;
        case 0x341850u: goto label_341850;
        case 0x341854u: goto label_341854;
        case 0x341858u: goto label_341858;
        case 0x34185cu: goto label_34185c;
        case 0x341860u: goto label_341860;
        case 0x341864u: goto label_341864;
        case 0x341868u: goto label_341868;
        case 0x34186cu: goto label_34186c;
        case 0x341870u: goto label_341870;
        case 0x341874u: goto label_341874;
        case 0x341878u: goto label_341878;
        case 0x34187cu: goto label_34187c;
        case 0x341880u: goto label_341880;
        case 0x341884u: goto label_341884;
        case 0x341888u: goto label_341888;
        case 0x34188cu: goto label_34188c;
        case 0x341890u: goto label_341890;
        case 0x341894u: goto label_341894;
        case 0x341898u: goto label_341898;
        case 0x34189cu: goto label_34189c;
        case 0x3418a0u: goto label_3418a0;
        case 0x3418a4u: goto label_3418a4;
        default: break;
    }

    ctx->pc = 0x341740u;

label_341740:
    // 0x341740: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x341740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_341744:
    // 0x341744: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x341744u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_341748:
    // 0x341748: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x341748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
label_34174c:
    // 0x34174c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x34174cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_341750:
    // 0x341750: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x341750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
label_341754:
    // 0x341754: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x341754u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_341758:
    // 0x341758: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x341758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
label_34175c:
    // 0x34175c: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x34175cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
label_341760:
    // 0x341760: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x341760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
label_341764:
    // 0x341764: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x341764u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_341768:
    // 0x341768: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x341768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
label_34176c:
    // 0x34176c: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x34176cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
label_341770:
    // 0x341770: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x341770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_341774:
    // 0x341774: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x341774u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_341778:
    // 0x341778: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x341778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_34177c:
    // 0x34177c: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x34177cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_341780:
    // 0x341780: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x341780u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_341784:
    // 0x341784: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x341784u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_341788:
    // 0x341788: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x341788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_34178c:
    // 0x34178c: 0x50400031  beql        $v0, $zero, . + 4 + (0x31 << 2)
label_341790:
    if (ctx->pc == 0x341790u) {
        ctx->pc = 0x341790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34178Cu;
        // 0x341790: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341794u;
        goto label_341794;
    }
    ctx->pc = 0x34178Cu;
    {
        const bool branch_taken_0x34178c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34178c) {
            ctx->pc = 0x341790u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34178Cu;
            // 0x341790: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x341854u;
            goto label_341854;
        }
    }
    ctx->pc = 0x341794u;
label_341794:
    // 0x341794: 0x8c550000  lw          $s5, 0x0($v0)
    ctx->pc = 0x341794u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_341798:
    // 0x341798: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x341798u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_34179c:
    // 0x34179c: 0x2457e880  addiu       $s7, $v0, -0x1780
    ctx->pc = 0x34179cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_3417a0:
    // 0x3417a0: 0x2a0802d  daddu       $s0, $s5, $zero
    ctx->pc = 0x3417a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3417a4:
    // 0x3417a4: 0x0  nop
    ctx->pc = 0x3417a4u;
    // NOP
label_3417a8:
    // 0x3417a8: 0x16800023  bnez        $s4, . + 4 + (0x23 << 2)
label_3417ac:
    if (ctx->pc == 0x3417ACu) {
        ctx->pc = 0x3417ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3417A8u;
        // 0x3417ac: 0x8e160000  lw          $s6, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3417B0u;
        goto label_3417b0;
    }
    ctx->pc = 0x3417A8u;
    {
        const bool branch_taken_0x3417a8 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x3417ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3417A8u;
        // 0x3417ac: 0x8e160000  lw          $s6, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3417a8) {
            ctx->pc = 0x341838u;
            goto label_341838;
        }
    }
    ctx->pc = 0x3417B0u;
label_3417b0:
    // 0x3417b0: 0x1200001d  beqz        $s0, . + 4 + (0x1D << 2)
label_3417b4:
    if (ctx->pc == 0x3417B4u) {
        ctx->pc = 0x3417B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3417B0u;
        // 0x3417b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3417B8u;
        goto label_3417b8;
    }
    ctx->pc = 0x3417B0u;
    {
        const bool branch_taken_0x3417b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3417B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3417B0u;
        // 0x3417b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3417b0) {
            ctx->pc = 0x341828u;
            goto label_341828;
        }
    }
    ctx->pc = 0x3417B8u;
label_3417b8:
    // 0x3417b8: 0x8e110004  lw          $s1, 0x4($s0)
    ctx->pc = 0x3417b8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3417bc:
    // 0x3417bc: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x3417bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_3417c0:
    // 0x3417c0: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x3417c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3417c4:
    // 0x3417c4: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_3417c8:
    if (ctx->pc == 0x3417C8u) {
        ctx->pc = 0x3417C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3417C4u;
        // 0x3417c8: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3417CCu;
        goto label_3417cc;
    }
    ctx->pc = 0x3417C4u;
    {
        const bool branch_taken_0x3417c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3417C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3417C4u;
        // 0x3417c8: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3417c4) {
            ctx->pc = 0x34180Cu;
            goto label_34180c;
        }
    }
    ctx->pc = 0x3417CCu;
label_3417cc:
    // 0x3417cc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3417ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3417d0:
    // 0x3417d0: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x3417d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_3417d4:
    // 0x3417d4: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x3417d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_3417d8:
    // 0x3417d8: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x3417d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_3417dc:
    // 0x3417dc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_3417e0:
    if (ctx->pc == 0x3417E0u) {
        ctx->pc = 0x3417E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3417DCu;
        // 0x3417e0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3417E4u;
        goto label_3417e4;
    }
    ctx->pc = 0x3417DCu;
    {
        const bool branch_taken_0x3417dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3417E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3417DCu;
        // 0x3417e0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3417dc) {
            ctx->pc = 0x3417F8u;
            goto label_3417f8;
        }
    }
    ctx->pc = 0x3417E4u;
label_3417e4:
    // 0x3417e4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3417e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3417e8:
    // 0x3417e8: 0x40f809  jalr        $v0
label_3417ec:
    if (ctx->pc == 0x3417ECu) {
        ctx->pc = 0x3417ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3417E8u;
        // 0x3417ec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3417F0u;
        goto label_3417f0;
    }
    ctx->pc = 0x3417E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3417F0u);
        ctx->pc = 0x3417ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3417E8u;
        // 0x3417ec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3417E8u, 0x3417F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3417F0u;
label_3417f0:
    // 0x3417f0: 0x5450000a  bnel        $v0, $s0, . + 4 + (0xA << 2)
label_3417f4:
    if (ctx->pc == 0x3417F4u) {
        ctx->pc = 0x3417F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3417F0u;
        // 0x3417f4: 0x8ee2010c  lw          $v0, 0x10C($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3417F8u;
        goto label_3417f8;
    }
    ctx->pc = 0x3417F0u;
    {
        const bool branch_taken_0x3417f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x3417f0) {
            ctx->pc = 0x3417F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3417F0u;
            // 0x3417f4: 0x8ee2010c  lw          $v0, 0x10C($s7) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 268)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34181Cu;
            goto label_34181c;
        }
    }
    ctx->pc = 0x3417F8u;
label_3417f8:
    // 0x3417f8: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x3417f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_3417fc:
    // 0x3417fc: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3417fcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_341800:
    // 0x341800: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x341800u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_341804:
    // 0x341804: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
label_341808:
    if (ctx->pc == 0x341808u) {
        ctx->pc = 0x341808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341804u;
        // 0x341808: 0x2652001c  addiu       $s2, $s2, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34180Cu;
        goto label_34180c;
    }
    ctx->pc = 0x341804u;
    {
        const bool branch_taken_0x341804 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x341808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341804u;
        // 0x341808: 0x2652001c  addiu       $s2, $s2, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341804) {
            ctx->pc = 0x3417D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3417d0;
        }
    }
    ctx->pc = 0x34180Cu;
label_34180c:
    // 0x34180c: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x34180cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_341810:
    // 0x341810: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x341810u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_341814:
    // 0x341814: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x341814u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_341818:
    // 0x341818: 0x8ee2010c  lw          $v0, 0x10C($s7)
    ctx->pc = 0x341818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 268)));
label_34181c:
    // 0x34181c: 0x40f809  jalr        $v0
label_341820:
    if (ctx->pc == 0x341820u) {
        ctx->pc = 0x341820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34181Cu;
        // 0x341820: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341824u;
        goto label_341824;
    }
    ctx->pc = 0x34181Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x341824u);
        ctx->pc = 0x341820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34181Cu;
        // 0x341820: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34181Cu, 0x341824u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x341824u;
label_341824:
    // 0x341824: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x341824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_341828:
    // 0x341828: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_34182c:
    if (ctx->pc == 0x34182Cu) {
        ctx->pc = 0x34182Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341828u;
        // 0x34182c: 0x2c0802d  daddu       $s0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341830u;
        goto label_341830;
    }
    ctx->pc = 0x341828u;
    {
        const bool branch_taken_0x341828 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x34182Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341828u;
        // 0x34182c: 0x2c0802d  daddu       $s0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341828) {
            ctx->pc = 0x341848u;
            goto label_341848;
        }
    }
    ctx->pc = 0x341830u;
label_341830:
    // 0x341830: 0x10000010  b           . + 4 + (0x10 << 2)
label_341834:
    if (ctx->pc == 0x341834u) {
        ctx->pc = 0x341834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341830u;
        // 0x341834: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341838u;
        goto label_341838;
    }
    ctx->pc = 0x341830u;
    {
        const bool branch_taken_0x341830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x341834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341830u;
        // 0x341834: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341830) {
            ctx->pc = 0x341874u;
            goto label_341874;
        }
    }
    ctx->pc = 0x341838u;
label_341838:
    // 0x341838: 0x8ee2010c  lw          $v0, 0x10C($s7)
    ctx->pc = 0x341838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 268)));
label_34183c:
    // 0x34183c: 0x40f809  jalr        $v0
label_341840:
    if (ctx->pc == 0x341840u) {
        ctx->pc = 0x341840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34183Cu;
        // 0x341840: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341844u;
        goto label_341844;
    }
    ctx->pc = 0x34183Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x341844u);
        ctx->pc = 0x341840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34183Cu;
        // 0x341840: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34183Cu, 0x341844u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x341844u;
label_341844:
    // 0x341844: 0x2c0802d  daddu       $s0, $s6, $zero
    ctx->pc = 0x341844u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_341848:
    // 0x341848: 0x1615ffd7  bne         $s0, $s5, . + 4 + (-0x29 << 2)
label_34184c:
    if (ctx->pc == 0x34184Cu) {
        ctx->pc = 0x341850u;
        goto label_341850;
    }
    ctx->pc = 0x341848u;
    {
        const bool branch_taken_0x341848 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 21));
        if (branch_taken_0x341848) {
            ctx->pc = 0x3417A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3417a8;
        }
    }
    ctx->pc = 0x341850u;
label_341850:
    // 0x341850: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x341850u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_341854:
    // 0x341854: 0x2a820002  slti        $v0, $s4, 0x2
    ctx->pc = 0x341854u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
label_341858:
    // 0x341858: 0x1440ffcb  bnez        $v0, . + 4 + (-0x35 << 2)
label_34185c:
    if (ctx->pc == 0x34185Cu) {
        ctx->pc = 0x34185Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341858u;
        // 0x34185c: 0x27de0004  addiu       $fp, $fp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341860u;
        goto label_341860;
    }
    ctx->pc = 0x341858u;
    {
        const bool branch_taken_0x341858 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x34185Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341858u;
        // 0x34185c: 0x27de0004  addiu       $fp, $fp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341858) {
            ctx->pc = 0x341788u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_341788;
        }
    }
    ctx->pc = 0x341860u;
label_341860:
    // 0x341860: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x341860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_341864:
    // 0x341864: 0xac600020  sw          $zero, 0x20($v1)
    ctx->pc = 0x341864u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 0));
label_341868:
    // 0x341868: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x341868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_34186c:
    // 0x34186c: 0xac60001c  sw          $zero, 0x1C($v1)
    ctx->pc = 0x34186cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 0));
label_341870:
    // 0x341870: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x341870u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
label_341874:
    // 0x341874: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x341874u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_341878:
    // 0x341878: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x341878u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_34187c:
    // 0x34187c: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x34187cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_341880:
    // 0x341880: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x341880u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_341884:
    // 0x341884: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x341884u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_341888:
    // 0x341888: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x341888u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_34188c:
    // 0x34188c: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x34188cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_341890:
    // 0x341890: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x341890u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_341894:
    // 0x341894: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x341894u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_341898:
    // 0x341898: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x341898u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_34189c:
    // 0x34189c: 0x3e00008  jr          $ra
label_3418a0:
    if (ctx->pc == 0x3418A0u) {
        ctx->pc = 0x3418A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34189Cu;
        // 0x3418a0: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3418A4u;
        goto label_3418a4;
    }
    ctx->pc = 0x34189Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3418A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34189Cu;
        // 0x3418a0: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34189Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3418A4u;
label_3418a4:
    // 0x3418a4: 0x0  nop
    ctx->pc = 0x3418a4u;
    // NOP
    ctx->pc = 0x3418a8u;
}
