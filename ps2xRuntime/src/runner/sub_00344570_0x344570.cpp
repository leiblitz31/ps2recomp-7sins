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

// Function: sub_00344570
// Address: 0x344570 - 0x344798
void sub_00344570_0x344570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00344570_0x344570");
#endif

    switch (ctx->pc) {
        case 0x344570u: goto label_344570;
        case 0x344574u: goto label_344574;
        case 0x344578u: goto label_344578;
        case 0x34457cu: goto label_34457c;
        case 0x344580u: goto label_344580;
        case 0x344584u: goto label_344584;
        case 0x344588u: goto label_344588;
        case 0x34458cu: goto label_34458c;
        case 0x344590u: goto label_344590;
        case 0x344594u: goto label_344594;
        case 0x344598u: goto label_344598;
        case 0x34459cu: goto label_34459c;
        case 0x3445a0u: goto label_3445a0;
        case 0x3445a4u: goto label_3445a4;
        case 0x3445a8u: goto label_3445a8;
        case 0x3445acu: goto label_3445ac;
        case 0x3445b0u: goto label_3445b0;
        case 0x3445b4u: goto label_3445b4;
        case 0x3445b8u: goto label_3445b8;
        case 0x3445bcu: goto label_3445bc;
        case 0x3445c0u: goto label_3445c0;
        case 0x3445c4u: goto label_3445c4;
        case 0x3445c8u: goto label_3445c8;
        case 0x3445ccu: goto label_3445cc;
        case 0x3445d0u: goto label_3445d0;
        case 0x3445d4u: goto label_3445d4;
        case 0x3445d8u: goto label_3445d8;
        case 0x3445dcu: goto label_3445dc;
        case 0x3445e0u: goto label_3445e0;
        case 0x3445e4u: goto label_3445e4;
        case 0x3445e8u: goto label_3445e8;
        case 0x3445ecu: goto label_3445ec;
        case 0x3445f0u: goto label_3445f0;
        case 0x3445f4u: goto label_3445f4;
        case 0x3445f8u: goto label_3445f8;
        case 0x3445fcu: goto label_3445fc;
        case 0x344600u: goto label_344600;
        case 0x344604u: goto label_344604;
        case 0x344608u: goto label_344608;
        case 0x34460cu: goto label_34460c;
        case 0x344610u: goto label_344610;
        case 0x344614u: goto label_344614;
        case 0x344618u: goto label_344618;
        case 0x34461cu: goto label_34461c;
        case 0x344620u: goto label_344620;
        case 0x344624u: goto label_344624;
        case 0x344628u: goto label_344628;
        case 0x34462cu: goto label_34462c;
        case 0x344630u: goto label_344630;
        case 0x344634u: goto label_344634;
        case 0x344638u: goto label_344638;
        case 0x34463cu: goto label_34463c;
        case 0x344640u: goto label_344640;
        case 0x344644u: goto label_344644;
        case 0x344648u: goto label_344648;
        case 0x34464cu: goto label_34464c;
        case 0x344650u: goto label_344650;
        case 0x344654u: goto label_344654;
        case 0x344658u: goto label_344658;
        case 0x34465cu: goto label_34465c;
        case 0x344660u: goto label_344660;
        case 0x344664u: goto label_344664;
        case 0x344668u: goto label_344668;
        case 0x34466cu: goto label_34466c;
        case 0x344670u: goto label_344670;
        case 0x344674u: goto label_344674;
        case 0x344678u: goto label_344678;
        case 0x34467cu: goto label_34467c;
        case 0x344680u: goto label_344680;
        case 0x344684u: goto label_344684;
        case 0x344688u: goto label_344688;
        case 0x34468cu: goto label_34468c;
        case 0x344690u: goto label_344690;
        case 0x344694u: goto label_344694;
        case 0x344698u: goto label_344698;
        case 0x34469cu: goto label_34469c;
        case 0x3446a0u: goto label_3446a0;
        case 0x3446a4u: goto label_3446a4;
        case 0x3446a8u: goto label_3446a8;
        case 0x3446acu: goto label_3446ac;
        case 0x3446b0u: goto label_3446b0;
        case 0x3446b4u: goto label_3446b4;
        case 0x3446b8u: goto label_3446b8;
        case 0x3446bcu: goto label_3446bc;
        case 0x3446c0u: goto label_3446c0;
        case 0x3446c4u: goto label_3446c4;
        case 0x3446c8u: goto label_3446c8;
        case 0x3446ccu: goto label_3446cc;
        case 0x3446d0u: goto label_3446d0;
        case 0x3446d4u: goto label_3446d4;
        case 0x3446d8u: goto label_3446d8;
        case 0x3446dcu: goto label_3446dc;
        case 0x3446e0u: goto label_3446e0;
        case 0x3446e4u: goto label_3446e4;
        case 0x3446e8u: goto label_3446e8;
        case 0x3446ecu: goto label_3446ec;
        case 0x3446f0u: goto label_3446f0;
        case 0x3446f4u: goto label_3446f4;
        case 0x3446f8u: goto label_3446f8;
        case 0x3446fcu: goto label_3446fc;
        case 0x344700u: goto label_344700;
        case 0x344704u: goto label_344704;
        case 0x344708u: goto label_344708;
        case 0x34470cu: goto label_34470c;
        case 0x344710u: goto label_344710;
        case 0x344714u: goto label_344714;
        case 0x344718u: goto label_344718;
        case 0x34471cu: goto label_34471c;
        case 0x344720u: goto label_344720;
        case 0x344724u: goto label_344724;
        case 0x344728u: goto label_344728;
        case 0x34472cu: goto label_34472c;
        case 0x344730u: goto label_344730;
        case 0x344734u: goto label_344734;
        case 0x344738u: goto label_344738;
        case 0x34473cu: goto label_34473c;
        case 0x344740u: goto label_344740;
        case 0x344744u: goto label_344744;
        case 0x344748u: goto label_344748;
        case 0x34474cu: goto label_34474c;
        case 0x344750u: goto label_344750;
        case 0x344754u: goto label_344754;
        case 0x344758u: goto label_344758;
        case 0x34475cu: goto label_34475c;
        case 0x344760u: goto label_344760;
        case 0x344764u: goto label_344764;
        case 0x344768u: goto label_344768;
        case 0x34476cu: goto label_34476c;
        case 0x344770u: goto label_344770;
        case 0x344774u: goto label_344774;
        case 0x344778u: goto label_344778;
        case 0x34477cu: goto label_34477c;
        case 0x344780u: goto label_344780;
        case 0x344784u: goto label_344784;
        case 0x344788u: goto label_344788;
        case 0x34478cu: goto label_34478c;
        case 0x344790u: goto label_344790;
        case 0x344794u: goto label_344794;
        default: break;
    }

    ctx->pc = 0x344570u;

label_344570:
    // 0x344570: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x344570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_344574:
    // 0x344574: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x344574u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_344578:
    // 0x344578: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x344578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_34457c:
    // 0x34457c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x34457cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_344580:
    // 0x344580: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x344580u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_344584:
    // 0x344584: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x344584u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_344588:
    // 0x344588: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x344588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_34458c:
    // 0x34458c: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x34458cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_344590:
    // 0x344590: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x344590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_344594:
    // 0x344594: 0xc103468  jal         func_40D1A0
label_344598:
    if (ctx->pc == 0x344598u) {
        ctx->pc = 0x344598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344594u;
        // 0x344598: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34459Cu;
        goto label_34459c;
    }
    ctx->pc = 0x344594u;
    SET_GPR_U32(ctx, 31, 0x34459Cu);
    ctx->pc = 0x344598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344594u;
    // 0x344598: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D1A0u, 0x344594u, 0x34459Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34459Cu;
label_34459c:
    // 0x34459c: 0x37a50004  ori         $a1, $sp, 0x4
    ctx->pc = 0x34459cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
label_3445a0:
    // 0x3445a0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3445a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3445a4:
    // 0x3445a4: 0xc103468  jal         func_40D1A0
label_3445a8:
    if (ctx->pc == 0x3445A8u) {
        ctx->pc = 0x3445A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3445A4u;
        // 0x3445a8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3445ACu;
        goto label_3445ac;
    }
    ctx->pc = 0x3445A4u;
    SET_GPR_U32(ctx, 31, 0x3445ACu);
    ctx->pc = 0x3445A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3445A4u;
    // 0x3445a8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D1A0u, 0x3445A4u, 0x3445ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3445ACu;
label_3445ac:
    // 0x3445ac: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x3445acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_3445b0:
    // 0x3445b0: 0x18a00024  blez        $a1, . + 4 + (0x24 << 2)
label_3445b4:
    if (ctx->pc == 0x3445B4u) {
        ctx->pc = 0x3445B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3445B0u;
        // 0x3445b4: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3445B8u;
        goto label_3445b8;
    }
    ctx->pc = 0x3445B0u;
    {
        const bool branch_taken_0x3445b0 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x3445B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3445B0u;
        // 0x3445b4: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3445b0) {
            ctx->pc = 0x344644u;
            goto label_344644;
        }
    }
    ctx->pc = 0x3445B8u;
label_3445b8:
    // 0x3445b8: 0x580c0  sll         $s0, $a1, 3
    ctx->pc = 0x3445b8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_3445bc:
    // 0x3445bc: 0x2472c2c8  addiu       $s2, $v1, -0x3D38
    ctx->pc = 0x3445bcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951624));
label_3445c0:
    // 0x3445c0: 0x8e42008c  lw          $v0, 0x8C($s2)
    ctx->pc = 0x3445c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
label_3445c4:
    // 0x3445c4: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x3445c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_3445c8:
    // 0x3445c8: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_3445cc:
    if (ctx->pc == 0x3445CCu) {
        ctx->pc = 0x3445CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3445C8u;
        // 0x3445cc: 0x60a02d  daddu       $s4, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3445D0u;
        goto label_3445d0;
    }
    ctx->pc = 0x3445C8u;
    {
        const bool branch_taken_0x3445c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3445CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3445C8u;
        // 0x3445cc: 0x60a02d  daddu       $s4, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3445c8) {
            ctx->pc = 0x344608u;
            goto label_344608;
        }
    }
    ctx->pc = 0x3445D0u;
label_3445d0:
    // 0x3445d0: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x3445d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_3445d4:
    // 0x3445d4: 0x8e440088  lw          $a0, 0x88($s2)
    ctx->pc = 0x3445d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
label_3445d8:
    // 0x3445d8: 0x8c62e990  lw          $v0, -0x1670($v1)
    ctx->pc = 0x3445d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961552)));
label_3445dc:
    // 0x3445dc: 0x3c060104  lui         $a2, 0x104
    ctx->pc = 0x3445dcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)260 << 16));
label_3445e0:
    // 0x3445e0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3445e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3445e4:
    // 0x3445e4: 0x40f809  jalr        $v0
label_3445e8:
    if (ctx->pc == 0x3445E8u) {
        ctx->pc = 0x3445E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3445E4u;
        // 0x3445e8: 0x34c60130  ori         $a2, $a2, 0x130 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)304);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3445ECu;
        goto label_3445ec;
    }
    ctx->pc = 0x3445E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3445ECu);
        ctx->pc = 0x3445E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3445E4u;
        // 0x3445e8: 0x34c60130  ori         $a2, $a2, 0x130 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)304);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3445E4u, 0x3445ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3445ECu;
label_3445ec:
    // 0x3445ec: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3445ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3445f0:
    // 0x3445f0: 0x56200003  bnel        $s1, $zero, . + 4 + (0x3 << 2)
label_3445f4:
    if (ctx->pc == 0x3445F4u) {
        ctx->pc = 0x3445F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3445F0u;
        // 0x3445f4: 0xae50008c  sw          $s0, 0x8C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3445F8u;
        goto label_3445f8;
    }
    ctx->pc = 0x3445F0u;
    {
        const bool branch_taken_0x3445f0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x3445f0) {
            ctx->pc = 0x3445F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3445F0u;
            // 0x3445f4: 0xae50008c  sw          $s0, 0x8C($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x344600u;
            goto label_344600;
        }
    }
    ctx->pc = 0x3445F8u;
label_3445f8:
    // 0x3445f8: 0x1000005e  b           . + 4 + (0x5E << 2)
label_3445fc:
    if (ctx->pc == 0x3445FCu) {
        ctx->pc = 0x3445FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3445F8u;
        // 0x3445fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x344600u;
        goto label_344600;
    }
    ctx->pc = 0x3445F8u;
    {
        const bool branch_taken_0x3445f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3445FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3445F8u;
        // 0x3445fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3445f8) {
            ctx->pc = 0x344774u;
            goto label_344774;
        }
    }
    ctx->pc = 0x344600u;
label_344600:
    // 0x344600: 0x10000002  b           . + 4 + (0x2 << 2)
label_344604:
    if (ctx->pc == 0x344604u) {
        ctx->pc = 0x344604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344600u;
        // 0x344604: 0xae510088  sw          $s1, 0x88($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 136), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x344608u;
        goto label_344608;
    }
    ctx->pc = 0x344600u;
    {
        const bool branch_taken_0x344600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x344604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344600u;
        // 0x344604: 0xae510088  sw          $s1, 0x88($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 136), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344600) {
            ctx->pc = 0x34460Cu;
            goto label_34460c;
        }
    }
    ctx->pc = 0x344608u;
label_344608:
    // 0x344608: 0x8e510088  lw          $s1, 0x88($s2)
    ctx->pc = 0x344608u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
label_34460c:
    // 0x34460c: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x34460cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_344610:
    // 0x344610: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x344610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_344614:
    // 0x344614: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x344614u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_344618:
    // 0x344618: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x344618u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_34461c:
    // 0x34461c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x34461cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_344620:
    // 0x344620: 0xc103468  jal         func_40D1A0
label_344624:
    if (ctx->pc == 0x344624u) {
        ctx->pc = 0x344624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344620u;
        // 0x344624: 0x2229021  addu        $s2, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x344628u;
        goto label_344628;
    }
    ctx->pc = 0x344620u;
    SET_GPR_U32(ctx, 31, 0x344628u);
    ctx->pc = 0x344624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344620u;
    // 0x344624: 0x2229021  addu        $s2, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D1A0u, 0x344620u, 0x344628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344628u;
label_344628:
    // 0x344628: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x344628u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_34462c:
    // 0x34462c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x34462cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_344630:
    // 0x344630: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x344630u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_344634:
    // 0x344634: 0xc103468  jal         func_40D1A0
label_344638:
    if (ctx->pc == 0x344638u) {
        ctx->pc = 0x344638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344634u;
        // 0x344638: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34463Cu;
        goto label_34463c;
    }
    ctx->pc = 0x344634u;
    SET_GPR_U32(ctx, 31, 0x34463Cu);
    ctx->pc = 0x344638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344634u;
    // 0x344638: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D1A0u, 0x344634u, 0x34463Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34463Cu;
label_34463c:
    // 0x34463c: 0x10000005  b           . + 4 + (0x5 << 2)
label_344640:
    if (ctx->pc == 0x344640u) {
        ctx->pc = 0x344640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34463Cu;
        // 0x344640: 0x2682c2c8  addiu       $v0, $s4, -0x3D38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294951624));
        ctx->in_delay_slot = false;
        ctx->pc = 0x344644u;
        goto label_344644;
    }
    ctx->pc = 0x34463Cu;
    {
        const bool branch_taken_0x34463c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x344640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34463Cu;
        // 0x344640: 0x2682c2c8  addiu       $v0, $s4, -0x3D38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294951624));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34463c) {
            ctx->pc = 0x344654u;
            goto label_344654;
        }
    }
    ctx->pc = 0x344644u;
label_344644:
    // 0x344644: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x344644u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_344648:
    // 0x344648: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x344648u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_34464c:
    // 0x34464c: 0x3c140062  lui         $s4, 0x62
    ctx->pc = 0x34464cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)98 << 16));
label_344650:
    // 0x344650: 0x2682c2c8  addiu       $v0, $s4, -0x3D38
    ctx->pc = 0x344650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294951624));
label_344654:
    // 0x344654: 0x8fae0004  lw          $t6, 0x4($sp)
    ctx->pc = 0x344654u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_344658:
    // 0x344658: 0x8c4f0068  lw          $t7, 0x68($v0)
    ctx->pc = 0x344658u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 104)));
label_34465c:
    // 0x34465c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x34465cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_344660:
    // 0x344660: 0x1c0982d  daddu       $s3, $t6, $zero
    ctx->pc = 0x344660u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
label_344664:
    // 0x344664: 0x11e0002d  beqz        $t7, . + 4 + (0x2D << 2)
label_344668:
    if (ctx->pc == 0x344668u) {
        ctx->pc = 0x344668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344664u;
        // 0x344668: 0x1e0482d  daddu       $t1, $t7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34466Cu;
        goto label_34466c;
    }
    ctx->pc = 0x344664u;
    {
        const bool branch_taken_0x344664 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x344668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344664u;
        // 0x344668: 0x1e0482d  daddu       $t1, $t7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344664) {
            ctx->pc = 0x34471Cu;
            goto label_34471c;
        }
    }
    ctx->pc = 0x34466Cu;
label_34466c:
    // 0x34466c: 0x8d220010  lw          $v0, 0x10($t1)
    ctx->pc = 0x34466cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
label_344670:
    // 0x344670: 0x544e0028  bnel        $v0, $t6, . + 4 + (0x28 << 2)
label_344674:
    if (ctx->pc == 0x344674u) {
        ctx->pc = 0x344674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344670u;
        // 0x344674: 0x8d290004  lw          $t1, 0x4($t1) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x344678u;
        goto label_344678;
    }
    ctx->pc = 0x344670u;
    {
        const bool branch_taken_0x344670 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 14));
        if (branch_taken_0x344670) {
            ctx->pc = 0x344674u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x344670u;
            // 0x344674: 0x8d290004  lw          $t1, 0x4($t1) (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x344714u;
            goto label_344714;
        }
    }
    ctx->pc = 0x344678u;
label_344678:
    // 0x344678: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x344678u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_34467c:
    // 0x34467c: 0x19c00022  blez        $t6, . + 4 + (0x22 << 2)
label_344680:
    if (ctx->pc == 0x344680u) {
        ctx->pc = 0x344680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34467Cu;
        // 0x344680: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x344684u;
        goto label_344684;
    }
    ctx->pc = 0x34467Cu;
    {
        const bool branch_taken_0x34467c = (GPR_S32(ctx, 14) <= 0);
        ctx->pc = 0x344680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34467Cu;
        // 0x344680: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34467c) {
            ctx->pc = 0x344708u;
            goto label_344708;
        }
    }
    ctx->pc = 0x344684u;
label_344684:
    // 0x344684: 0x1c0682d  daddu       $t5, $t6, $zero
    ctx->pc = 0x344684u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
label_344688:
    // 0x344688: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x344688u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_34468c:
    // 0x34468c: 0x0  nop
    ctx->pc = 0x34468cu;
    // NOP
label_344690:
    // 0x344690: 0x10000002  b           . + 4 + (0x2 << 2)
label_344694:
    if (ctx->pc == 0x344694u) {
        ctx->pc = 0x344694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344690u;
        // 0x344694: 0x254c0001  addiu       $t4, $t2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x344698u;
        goto label_344698;
    }
    ctx->pc = 0x344690u;
    {
        const bool branch_taken_0x344690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x344694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344690u;
        // 0x344694: 0x254c0001  addiu       $t4, $t2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344690) {
            ctx->pc = 0x34469Cu;
            goto label_34469c;
        }
    }
    ctx->pc = 0x344698u;
label_344698:
    // 0x344698: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x344698u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_34469c:
    // 0x34469c: 0x11600014  beqz        $t3, . + 4 + (0x14 << 2)
label_3446a0:
    if (ctx->pc == 0x3446A0u) {
        ctx->pc = 0x3446A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34469Cu;
        // 0x3446a0: 0x10d102a  slt         $v0, $t0, $t5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 13)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3446A4u;
        goto label_3446a4;
    }
    ctx->pc = 0x34469Cu;
    {
        const bool branch_taken_0x34469c = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x3446A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34469Cu;
        // 0x3446a0: 0x10d102a  slt         $v0, $t0, $t5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 13)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34469c) {
            ctx->pc = 0x3446F0u;
            goto label_3446f0;
        }
    }
    ctx->pc = 0x3446A4u;
label_3446a4:
    // 0x3446a4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_3446a8:
    if (ctx->pc == 0x3446A8u) {
        ctx->pc = 0x3446A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3446A4u;
        // 0x3446a8: 0xa3080  sll         $a2, $t2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3446ACu;
        goto label_3446ac;
    }
    ctx->pc = 0x3446A4u;
    {
        const bool branch_taken_0x3446a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3446A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3446A4u;
        // 0x3446a8: 0xa3080  sll         $a2, $t2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3446a4) {
            ctx->pc = 0x3446F0u;
            goto label_3446f0;
        }
    }
    ctx->pc = 0x3446ACu;
label_3446ac:
    // 0x3446ac: 0x8d250018  lw          $a1, 0x18($t1)
    ctx->pc = 0x3446acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 24)));
label_3446b0:
    // 0x3446b0: 0x83880  sll         $a3, $t0, 2
    ctx->pc = 0x3446b0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_3446b4:
    // 0x3446b4: 0xd11821  addu        $v1, $a2, $s1
    ctx->pc = 0x3446b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
label_3446b8:
    // 0x3446b8: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x3446b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_3446bc:
    // 0x3446bc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3446bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3446c0:
    // 0x3446c0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x3446c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_3446c4:
    // 0x3446c4: 0x5482fff5  bnel        $a0, $v0, . + 4 + (-0xB << 2)
label_3446c8:
    if (ctx->pc == 0x3446C8u) {
        ctx->pc = 0x3446C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3446C4u;
        // 0x3446c8: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3446CCu;
        goto label_3446cc;
    }
    ctx->pc = 0x3446C4u;
    {
        const bool branch_taken_0x3446c4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x3446c4) {
            ctx->pc = 0x3446C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3446C4u;
            // 0x3446c8: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34469Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34469c;
        }
    }
    ctx->pc = 0x3446CCu;
label_3446cc:
    // 0x3446cc: 0x8d230020  lw          $v1, 0x20($t1)
    ctx->pc = 0x3446ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 32)));
label_3446d0:
    // 0x3446d0: 0xd21021  addu        $v0, $a2, $s2
    ctx->pc = 0x3446d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
label_3446d4:
    // 0x3446d4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3446d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3446d8:
    // 0x3446d8: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x3446d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
label_3446dc:
    // 0x3446dc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3446dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3446e0:
    // 0x3446e0: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
label_3446e4:
    if (ctx->pc == 0x3446E4u) {
        ctx->pc = 0x3446E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3446E0u;
        // 0x3446e4: 0x10d102a  slt         $v0, $t0, $t5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 13)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3446E8u;
        goto label_3446e8;
    }
    ctx->pc = 0x3446E0u;
    {
        const bool branch_taken_0x3446e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x3446E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3446E0u;
        // 0x3446e4: 0x10d102a  slt         $v0, $t0, $t5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 13)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3446e0) {
            ctx->pc = 0x3446F0u;
            goto label_3446f0;
        }
    }
    ctx->pc = 0x3446E8u;
label_3446e8:
    // 0x3446e8: 0x1000ffeb  b           . + 4 + (-0x15 << 2)
label_3446ec:
    if (ctx->pc == 0x3446ECu) {
        ctx->pc = 0x3446ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3446E8u;
        // 0x3446ec: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3446F0u;
        goto label_3446f0;
    }
    ctx->pc = 0x3446E8u;
    {
        const bool branch_taken_0x3446e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3446ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3446E8u;
        // 0x3446ec: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3446e8) {
            ctx->pc = 0x344698u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_344698;
        }
    }
    ctx->pc = 0x3446F0u;
label_3446f0:
    // 0x3446f0: 0x2580a  movz        $t3, $zero, $v0
    ctx->pc = 0x3446f0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 11, GPR_VEC(ctx, 0));
label_3446f4:
    // 0x3446f4: 0x11600006  beqz        $t3, . + 4 + (0x6 << 2)
label_3446f8:
    if (ctx->pc == 0x3446F8u) {
        ctx->pc = 0x3446F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3446F4u;
        // 0x3446f8: 0x180502d  daddu       $t2, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3446FCu;
        goto label_3446fc;
    }
    ctx->pc = 0x3446F4u;
    {
        const bool branch_taken_0x3446f4 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x3446F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3446F4u;
        // 0x3446f8: 0x180502d  daddu       $t2, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3446f4) {
            ctx->pc = 0x344710u;
            goto label_344710;
        }
    }
    ctx->pc = 0x3446FCu;
label_3446fc:
    // 0x3446fc: 0x18e102a  slt         $v0, $t4, $t6
    ctx->pc = 0x3446fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 14)) ? 1 : 0);
label_344700:
    // 0x344700: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
label_344704:
    if (ctx->pc == 0x344704u) {
        ctx->pc = 0x344704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344700u;
        // 0x344704: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x344708u;
        goto label_344708;
    }
    ctx->pc = 0x344700u;
    {
        const bool branch_taken_0x344700 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x344704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344700u;
        // 0x344704: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344700) {
            ctx->pc = 0x344690u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_344690;
        }
    }
    ctx->pc = 0x344708u;
label_344708:
    // 0x344708: 0x55600004  bnel        $t3, $zero, . + 4 + (0x4 << 2)
label_34470c:
    if (ctx->pc == 0x34470Cu) {
        ctx->pc = 0x34470Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344708u;
        // 0x34470c: 0x120802d  daddu       $s0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x344710u;
        goto label_344710;
    }
    ctx->pc = 0x344708u;
    {
        const bool branch_taken_0x344708 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        if (branch_taken_0x344708) {
            ctx->pc = 0x34470Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x344708u;
            // 0x34470c: 0x120802d  daddu       $s0, $t1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34471Cu;
            goto label_34471c;
        }
    }
    ctx->pc = 0x344710u;
label_344710:
    // 0x344710: 0x8d290004  lw          $t1, 0x4($t1)
    ctx->pc = 0x344710u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
label_344714:
    // 0x344714: 0x552fffd6  bnel        $t1, $t7, . + 4 + (-0x2A << 2)
label_344718:
    if (ctx->pc == 0x344718u) {
        ctx->pc = 0x344718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344714u;
        // 0x344718: 0x8d220010  lw          $v0, 0x10($t1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34471Cu;
        goto label_34471c;
    }
    ctx->pc = 0x344714u;
    {
        const bool branch_taken_0x344714 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 15));
        if (branch_taken_0x344714) {
            ctx->pc = 0x344718u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x344714u;
            // 0x344718: 0x8d220010  lw          $v0, 0x10($t1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x344670u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_344670;
        }
    }
    ctx->pc = 0x34471Cu;
label_34471c:
    // 0x34471c: 0x56000007  bnel        $s0, $zero, . + 4 + (0x7 << 2)
label_344720:
    if (ctx->pc == 0x344720u) {
        ctx->pc = 0x344720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34471Cu;
        // 0x344720: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x344724u;
        goto label_344724;
    }
    ctx->pc = 0x34471Cu;
    {
        const bool branch_taken_0x34471c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x34471c) {
            ctx->pc = 0x344720u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34471Cu;
            // 0x344720: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34473Cu;
            goto label_34473c;
        }
    }
    ctx->pc = 0x344724u;
label_344724:
    // 0x344724: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x344724u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_344728:
    // 0x344728: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x344728u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_34472c:
    // 0x34472c: 0xc0d0f36  jal         func_343CD8
label_344730:
    if (ctx->pc == 0x344730u) {
        ctx->pc = 0x344730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34472Cu;
        // 0x344730: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x344734u;
        goto label_344734;
    }
    ctx->pc = 0x34472Cu;
    SET_GPR_U32(ctx, 31, 0x344734u);
    ctx->pc = 0x344730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34472Cu;
    // 0x344730: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x343CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x343CD8u, 0x34472Cu, 0x344734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344734u;
label_344734:
    // 0x344734: 0x10000003  b           . + 4 + (0x3 << 2)
label_344738:
    if (ctx->pc == 0x344738u) {
        ctx->pc = 0x344738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344734u;
        // 0x344738: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34473Cu;
        goto label_34473c;
    }
    ctx->pc = 0x344734u;
    {
        const bool branch_taken_0x344734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x344738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344734u;
        // 0x344738: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344734) {
            ctx->pc = 0x344744u;
            goto label_344744;
        }
    }
    ctx->pc = 0x34473Cu;
label_34473c:
    // 0x34473c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x34473cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_344740:
    // 0x344740: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x344740u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_344744:
    // 0x344744: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
label_344748:
    if (ctx->pc == 0x344748u) {
        ctx->pc = 0x344748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344744u;
        // 0x344748: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34474Cu;
        goto label_34474c;
    }
    ctx->pc = 0x344744u;
    {
        const bool branch_taken_0x344744 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x344748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344744u;
        // 0x344748: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344744) {
            ctx->pc = 0x344750u;
            goto label_344750;
        }
    }
    ctx->pc = 0x34474Cu;
label_34474c:
    // 0x34474c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x34474cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_344750:
    // 0x344750: 0xc0d0ecc  jal         func_343B30
label_344754:
    if (ctx->pc == 0x344754u) {
        ctx->pc = 0x344754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344750u;
        // 0x344754: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x344758u;
        goto label_344758;
    }
    ctx->pc = 0x344750u;
    SET_GPR_U32(ctx, 31, 0x344758u);
    ctx->pc = 0x344754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344750u;
    // 0x344754: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x343B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x343B30u, 0x344750u, 0x344758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344758u;
label_344758:
    // 0x344758: 0x2683c2c8  addiu       $v1, $s4, -0x3D38
    ctx->pc = 0x344758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294951624));
label_34475c:
    // 0x34475c: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x34475cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_344760:
    // 0x344760: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_344764:
    if (ctx->pc == 0x344764u) {
        ctx->pc = 0x344764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344760u;
        // 0x344764: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x344768u;
        goto label_344768;
    }
    ctx->pc = 0x344760u;
    {
        const bool branch_taken_0x344760 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x344760) {
            ctx->pc = 0x344764u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x344760u;
            // 0x344764: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x344774u;
            goto label_344774;
        }
    }
    ctx->pc = 0x344768u;
label_344768:
    // 0x344768: 0x40f809  jalr        $v0
label_34476c:
    if (ctx->pc == 0x34476Cu) {
        ctx->pc = 0x34476Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344768u;
        // 0x34476c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x344770u;
        goto label_344770;
    }
    ctx->pc = 0x344768u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x344770u);
        ctx->pc = 0x34476Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344768u;
        // 0x34476c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x344768u, 0x344770u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x344770u;
label_344770:
    // 0x344770: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x344770u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_344774:
    // 0x344774: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x344774u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_344778:
    // 0x344778: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x344778u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_34477c:
    // 0x34477c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x34477cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_344780:
    // 0x344780: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x344780u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_344784:
    // 0x344784: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x344784u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_344788:
    // 0x344788: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x344788u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_34478c:
    // 0x34478c: 0x3e00008  jr          $ra
label_344790:
    if (ctx->pc == 0x344790u) {
        ctx->pc = 0x344790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34478Cu;
        // 0x344790: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x344794u;
        goto label_344794;
    }
    ctx->pc = 0x34478Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x344790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34478Cu;
        // 0x344790: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34478Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x344794u;
label_344794:
    // 0x344794: 0x0  nop
    ctx->pc = 0x344794u;
    // NOP
    ctx->pc = 0x344798u;
}
