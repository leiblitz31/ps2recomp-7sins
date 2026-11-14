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

// Function: sub_00383730
// Address: 0x383730 - 0x383830
void sub_00383730_0x383730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00383730_0x383730");
#endif

    switch (ctx->pc) {
        case 0x383730u: goto label_383730;
        case 0x383734u: goto label_383734;
        case 0x383738u: goto label_383738;
        case 0x38373cu: goto label_38373c;
        case 0x383740u: goto label_383740;
        case 0x383744u: goto label_383744;
        case 0x383748u: goto label_383748;
        case 0x38374cu: goto label_38374c;
        case 0x383750u: goto label_383750;
        case 0x383754u: goto label_383754;
        case 0x383758u: goto label_383758;
        case 0x38375cu: goto label_38375c;
        case 0x383760u: goto label_383760;
        case 0x383764u: goto label_383764;
        case 0x383768u: goto label_383768;
        case 0x38376cu: goto label_38376c;
        case 0x383770u: goto label_383770;
        case 0x383774u: goto label_383774;
        case 0x383778u: goto label_383778;
        case 0x38377cu: goto label_38377c;
        case 0x383780u: goto label_383780;
        case 0x383784u: goto label_383784;
        case 0x383788u: goto label_383788;
        case 0x38378cu: goto label_38378c;
        case 0x383790u: goto label_383790;
        case 0x383794u: goto label_383794;
        case 0x383798u: goto label_383798;
        case 0x38379cu: goto label_38379c;
        case 0x3837a0u: goto label_3837a0;
        case 0x3837a4u: goto label_3837a4;
        case 0x3837a8u: goto label_3837a8;
        case 0x3837acu: goto label_3837ac;
        case 0x3837b0u: goto label_3837b0;
        case 0x3837b4u: goto label_3837b4;
        case 0x3837b8u: goto label_3837b8;
        case 0x3837bcu: goto label_3837bc;
        case 0x3837c0u: goto label_3837c0;
        case 0x3837c4u: goto label_3837c4;
        case 0x3837c8u: goto label_3837c8;
        case 0x3837ccu: goto label_3837cc;
        case 0x3837d0u: goto label_3837d0;
        case 0x3837d4u: goto label_3837d4;
        case 0x3837d8u: goto label_3837d8;
        case 0x3837dcu: goto label_3837dc;
        case 0x3837e0u: goto label_3837e0;
        case 0x3837e4u: goto label_3837e4;
        case 0x3837e8u: goto label_3837e8;
        case 0x3837ecu: goto label_3837ec;
        case 0x3837f0u: goto label_3837f0;
        case 0x3837f4u: goto label_3837f4;
        case 0x3837f8u: goto label_3837f8;
        case 0x3837fcu: goto label_3837fc;
        case 0x383800u: goto label_383800;
        case 0x383804u: goto label_383804;
        case 0x383808u: goto label_383808;
        case 0x38380cu: goto label_38380c;
        case 0x383810u: goto label_383810;
        case 0x383814u: goto label_383814;
        case 0x383818u: goto label_383818;
        case 0x38381cu: goto label_38381c;
        case 0x383820u: goto label_383820;
        case 0x383824u: goto label_383824;
        case 0x383828u: goto label_383828;
        case 0x38382cu: goto label_38382c;
        default: break;
    }

    ctx->pc = 0x383730u;

label_383730:
    // 0x383730: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x383730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_383734:
    // 0x383734: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x383734u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_383738:
    // 0x383738: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x383738u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_38373c:
    // 0x38373c: 0x3e00008  jr          $ra
label_383740:
    if (ctx->pc == 0x383740u) {
        ctx->pc = 0x383740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38373Cu;
        // 0x383740: 0xaca60000  sw          $a2, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x383744u;
        goto label_383744;
    }
    ctx->pc = 0x38373Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x383740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38373Cu;
        // 0x383740: 0xaca60000  sw          $a2, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38373Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x383744u;
label_383744:
    // 0x383744: 0x0  nop
    ctx->pc = 0x383744u;
    // NOP
label_383748:
    // 0x383748: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x383748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_38374c:
    // 0x38374c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x38374cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_383750:
    // 0x383750: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x383750u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_383754:
    // 0x383754: 0x3e00008  jr          $ra
label_383758:
    if (ctx->pc == 0x383758u) {
        ctx->pc = 0x383758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383754u;
        // 0x383758: 0xe4ac0000  swc1        $f12, 0x0($a1) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x38375Cu;
        goto label_38375c;
    }
    ctx->pc = 0x383754u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x383758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383754u;
        // 0x383758: 0xe4ac0000  swc1        $f12, 0x0($a1) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x383754u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38375Cu;
label_38375c:
    // 0x38375c: 0x0  nop
    ctx->pc = 0x38375cu;
    // NOP
label_383760:
    // 0x383760: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x383760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_383764:
    // 0x383764: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x383764u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_383768:
    // 0x383768: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x383768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_38376c:
    // 0x38376c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x38376cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_383770:
    // 0x383770: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x383770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_383774:
    // 0x383774: 0x59080  sll         $s2, $a1, 2
    ctx->pc = 0x383774u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_383778:
    // 0x383778: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x383778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_38377c:
    // 0x38377c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x38377cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_383780:
    // 0x383780: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x383780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_383784:
    // 0x383784: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x383784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_383788:
    // 0x383788: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x383788u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_38378c:
    // 0x38378c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_383790:
    if (ctx->pc == 0x383790u) {
        ctx->pc = 0x383790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38378Cu;
        // 0x383790: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x383794u;
        goto label_383794;
    }
    ctx->pc = 0x38378Cu;
    {
        const bool branch_taken_0x38378c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x383790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38378Cu;
        // 0x383790: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38378c) {
            ctx->pc = 0x3837A4u;
            goto label_3837a4;
        }
    }
    ctx->pc = 0x383794u;
label_383794:
    // 0x383794: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x383794u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_383798:
    // 0x383798: 0x8c62e98c  lw          $v0, -0x1674($v1)
    ctx->pc = 0x383798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961548)));
label_38379c:
    // 0x38379c: 0x40f809  jalr        $v0
label_3837a0:
    if (ctx->pc == 0x3837A0u) {
        ctx->pc = 0x3837A4u;
        goto label_3837a4;
    }
    ctx->pc = 0x38379Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3837A4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38379Cu, 0x3837A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3837A4u;
label_3837a4:
    // 0x3837a4: 0x56600005  bnel        $s3, $zero, . + 4 + (0x5 << 2)
label_3837a8:
    if (ctx->pc == 0x3837A8u) {
        ctx->pc = 0x3837A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3837A4u;
        // 0x3837a8: 0x8e23000c  lw          $v1, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3837ACu;
        goto label_3837ac;
    }
    ctx->pc = 0x3837A4u;
    {
        const bool branch_taken_0x3837a4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x3837a4) {
            ctx->pc = 0x3837A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3837A4u;
            // 0x3837a8: 0x8e23000c  lw          $v1, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3837BCu;
            goto label_3837bc;
        }
    }
    ctx->pc = 0x3837ACu;
label_3837ac:
    // 0x3837ac: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x3837acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_3837b0:
    // 0x3837b0: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x3837b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_3837b4:
    // 0x3837b4: 0x10000016  b           . + 4 + (0x16 << 2)
label_3837b8:
    if (ctx->pc == 0x3837B8u) {
        ctx->pc = 0x3837B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3837B4u;
        // 0x3837b8: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3837BCu;
        goto label_3837bc;
    }
    ctx->pc = 0x3837B4u;
    {
        const bool branch_taken_0x3837b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3837B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3837B4u;
        // 0x3837b8: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3837b4) {
            ctx->pc = 0x383810u;
            goto label_383810;
        }
    }
    ctx->pc = 0x3837BCu;
label_3837bc:
    // 0x3837bc: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3837bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_3837c0:
    // 0x3837c0: 0x2450e880  addiu       $s0, $v0, -0x1780
    ctx->pc = 0x3837c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_3837c4:
    // 0x3837c4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3837c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3837c8:
    // 0x3837c8: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x3837c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
label_3837cc:
    // 0x3837cc: 0x8e0200f4  lw          $v0, 0xF4($s0)
    ctx->pc = 0x3837ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
label_3837d0:
    // 0x3837d0: 0x40f809  jalr        $v0
label_3837d4:
    if (ctx->pc == 0x3837D4u) {
        ctx->pc = 0x3837D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3837D0u;
        // 0x3837d4: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3837D8u;
        goto label_3837d8;
    }
    ctx->pc = 0x3837D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3837D8u);
        ctx->pc = 0x3837D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3837D0u;
        // 0x3837d4: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3837D0u, 0x3837D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3837D8u;
label_3837d8:
    // 0x3837d8: 0x8e030108  lw          $v1, 0x108($s0)
    ctx->pc = 0x3837d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
label_3837dc:
    // 0x3837dc: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x3837dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_3837e0:
    // 0x3837e0: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x3837e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3837e4:
    // 0x3837e4: 0x60f809  jalr        $v1
label_3837e8:
    if (ctx->pc == 0x3837E8u) {
        ctx->pc = 0x3837E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3837E4u;
        // 0x3837e8: 0x34a50002  ori         $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3837ECu;
        goto label_3837ec;
    }
    ctx->pc = 0x3837E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3837ECu);
        ctx->pc = 0x3837E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3837E4u;
        // 0x3837e8: 0x34a50002  ori         $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3837E4u, 0x3837ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3837ECu;
label_3837ec:
    // 0x3837ec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3837ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3837f0:
    // 0x3837f0: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x3837f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_3837f4:
    // 0x3837f4: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x3837f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_3837f8:
    // 0x3837f8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_3837fc:
    if (ctx->pc == 0x3837FCu) {
        ctx->pc = 0x3837FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3837F8u;
        // 0x3837fc: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x383800u;
        goto label_383800;
    }
    ctx->pc = 0x3837F8u;
    {
        const bool branch_taken_0x3837f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3837FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3837F8u;
        // 0x3837fc: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3837f8) {
            ctx->pc = 0x383810u;
            goto label_383810;
        }
    }
    ctx->pc = 0x383800u;
label_383800:
    // 0x383800: 0x8e0200cc  lw          $v0, 0xCC($s0)
    ctx->pc = 0x383800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
label_383804:
    // 0x383804: 0x40f809  jalr        $v0
label_383808:
    if (ctx->pc == 0x383808u) {
        ctx->pc = 0x383808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383804u;
        // 0x383808: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38380Cu;
        goto label_38380c;
    }
    ctx->pc = 0x383804u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x38380Cu);
        ctx->pc = 0x383808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383804u;
        // 0x383808: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x383804u, 0x38380Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38380Cu;
label_38380c:
    // 0x38380c: 0x0  nop
    ctx->pc = 0x38380cu;
    // NOP
label_383810:
    // 0x383810: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x383810u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_383814:
    // 0x383814: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x383814u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_383818:
    // 0x383818: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x383818u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_38381c:
    // 0x38381c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x38381cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_383820:
    // 0x383820: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x383820u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_383824:
    // 0x383824: 0x3e00008  jr          $ra
label_383828:
    if (ctx->pc == 0x383828u) {
        ctx->pc = 0x383828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383824u;
        // 0x383828: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38382Cu;
        goto label_38382c;
    }
    ctx->pc = 0x383824u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x383828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383824u;
        // 0x383828: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x383824u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38382Cu;
label_38382c:
    // 0x38382c: 0x0  nop
    ctx->pc = 0x38382cu;
    // NOP
    ctx->pc = 0x383830u;
}
