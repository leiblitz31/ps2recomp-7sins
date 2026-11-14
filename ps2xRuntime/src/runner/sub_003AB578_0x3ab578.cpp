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

// Function: sub_003AB578
// Address: 0x3ab578 - 0x3ab898
void sub_003AB578_0x3ab578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AB578_0x3ab578");
#endif

    switch (ctx->pc) {
        case 0x3ab578u: goto label_3ab578;
        case 0x3ab57cu: goto label_3ab57c;
        case 0x3ab580u: goto label_3ab580;
        case 0x3ab584u: goto label_3ab584;
        case 0x3ab588u: goto label_3ab588;
        case 0x3ab58cu: goto label_3ab58c;
        case 0x3ab590u: goto label_3ab590;
        case 0x3ab594u: goto label_3ab594;
        case 0x3ab598u: goto label_3ab598;
        case 0x3ab59cu: goto label_3ab59c;
        case 0x3ab5a0u: goto label_3ab5a0;
        case 0x3ab5a4u: goto label_3ab5a4;
        case 0x3ab5a8u: goto label_3ab5a8;
        case 0x3ab5acu: goto label_3ab5ac;
        case 0x3ab5b0u: goto label_3ab5b0;
        case 0x3ab5b4u: goto label_3ab5b4;
        case 0x3ab5b8u: goto label_3ab5b8;
        case 0x3ab5bcu: goto label_3ab5bc;
        case 0x3ab5c0u: goto label_3ab5c0;
        case 0x3ab5c4u: goto label_3ab5c4;
        case 0x3ab5c8u: goto label_3ab5c8;
        case 0x3ab5ccu: goto label_3ab5cc;
        case 0x3ab5d0u: goto label_3ab5d0;
        case 0x3ab5d4u: goto label_3ab5d4;
        case 0x3ab5d8u: goto label_3ab5d8;
        case 0x3ab5dcu: goto label_3ab5dc;
        case 0x3ab5e0u: goto label_3ab5e0;
        case 0x3ab5e4u: goto label_3ab5e4;
        case 0x3ab5e8u: goto label_3ab5e8;
        case 0x3ab5ecu: goto label_3ab5ec;
        case 0x3ab5f0u: goto label_3ab5f0;
        case 0x3ab5f4u: goto label_3ab5f4;
        case 0x3ab5f8u: goto label_3ab5f8;
        case 0x3ab5fcu: goto label_3ab5fc;
        case 0x3ab600u: goto label_3ab600;
        case 0x3ab604u: goto label_3ab604;
        case 0x3ab608u: goto label_3ab608;
        case 0x3ab60cu: goto label_3ab60c;
        case 0x3ab610u: goto label_3ab610;
        case 0x3ab614u: goto label_3ab614;
        case 0x3ab618u: goto label_3ab618;
        case 0x3ab61cu: goto label_3ab61c;
        case 0x3ab620u: goto label_3ab620;
        case 0x3ab624u: goto label_3ab624;
        case 0x3ab628u: goto label_3ab628;
        case 0x3ab62cu: goto label_3ab62c;
        case 0x3ab630u: goto label_3ab630;
        case 0x3ab634u: goto label_3ab634;
        case 0x3ab638u: goto label_3ab638;
        case 0x3ab63cu: goto label_3ab63c;
        case 0x3ab640u: goto label_3ab640;
        case 0x3ab644u: goto label_3ab644;
        case 0x3ab648u: goto label_3ab648;
        case 0x3ab64cu: goto label_3ab64c;
        case 0x3ab650u: goto label_3ab650;
        case 0x3ab654u: goto label_3ab654;
        case 0x3ab658u: goto label_3ab658;
        case 0x3ab65cu: goto label_3ab65c;
        case 0x3ab660u: goto label_3ab660;
        case 0x3ab664u: goto label_3ab664;
        case 0x3ab668u: goto label_3ab668;
        case 0x3ab66cu: goto label_3ab66c;
        case 0x3ab670u: goto label_3ab670;
        case 0x3ab674u: goto label_3ab674;
        case 0x3ab678u: goto label_3ab678;
        case 0x3ab67cu: goto label_3ab67c;
        case 0x3ab680u: goto label_3ab680;
        case 0x3ab684u: goto label_3ab684;
        case 0x3ab688u: goto label_3ab688;
        case 0x3ab68cu: goto label_3ab68c;
        case 0x3ab690u: goto label_3ab690;
        case 0x3ab694u: goto label_3ab694;
        case 0x3ab698u: goto label_3ab698;
        case 0x3ab69cu: goto label_3ab69c;
        case 0x3ab6a0u: goto label_3ab6a0;
        case 0x3ab6a4u: goto label_3ab6a4;
        case 0x3ab6a8u: goto label_3ab6a8;
        case 0x3ab6acu: goto label_3ab6ac;
        case 0x3ab6b0u: goto label_3ab6b0;
        case 0x3ab6b4u: goto label_3ab6b4;
        case 0x3ab6b8u: goto label_3ab6b8;
        case 0x3ab6bcu: goto label_3ab6bc;
        case 0x3ab6c0u: goto label_3ab6c0;
        case 0x3ab6c4u: goto label_3ab6c4;
        case 0x3ab6c8u: goto label_3ab6c8;
        case 0x3ab6ccu: goto label_3ab6cc;
        case 0x3ab6d0u: goto label_3ab6d0;
        case 0x3ab6d4u: goto label_3ab6d4;
        case 0x3ab6d8u: goto label_3ab6d8;
        case 0x3ab6dcu: goto label_3ab6dc;
        case 0x3ab6e0u: goto label_3ab6e0;
        case 0x3ab6e4u: goto label_3ab6e4;
        case 0x3ab6e8u: goto label_3ab6e8;
        case 0x3ab6ecu: goto label_3ab6ec;
        case 0x3ab6f0u: goto label_3ab6f0;
        case 0x3ab6f4u: goto label_3ab6f4;
        case 0x3ab6f8u: goto label_3ab6f8;
        case 0x3ab6fcu: goto label_3ab6fc;
        case 0x3ab700u: goto label_3ab700;
        case 0x3ab704u: goto label_3ab704;
        case 0x3ab708u: goto label_3ab708;
        case 0x3ab70cu: goto label_3ab70c;
        case 0x3ab710u: goto label_3ab710;
        case 0x3ab714u: goto label_3ab714;
        case 0x3ab718u: goto label_3ab718;
        case 0x3ab71cu: goto label_3ab71c;
        case 0x3ab720u: goto label_3ab720;
        case 0x3ab724u: goto label_3ab724;
        case 0x3ab728u: goto label_3ab728;
        case 0x3ab72cu: goto label_3ab72c;
        case 0x3ab730u: goto label_3ab730;
        case 0x3ab734u: goto label_3ab734;
        case 0x3ab738u: goto label_3ab738;
        case 0x3ab73cu: goto label_3ab73c;
        case 0x3ab740u: goto label_3ab740;
        case 0x3ab744u: goto label_3ab744;
        case 0x3ab748u: goto label_3ab748;
        case 0x3ab74cu: goto label_3ab74c;
        case 0x3ab750u: goto label_3ab750;
        case 0x3ab754u: goto label_3ab754;
        case 0x3ab758u: goto label_3ab758;
        case 0x3ab75cu: goto label_3ab75c;
        case 0x3ab760u: goto label_3ab760;
        case 0x3ab764u: goto label_3ab764;
        case 0x3ab768u: goto label_3ab768;
        case 0x3ab76cu: goto label_3ab76c;
        case 0x3ab770u: goto label_3ab770;
        case 0x3ab774u: goto label_3ab774;
        case 0x3ab778u: goto label_3ab778;
        case 0x3ab77cu: goto label_3ab77c;
        case 0x3ab780u: goto label_3ab780;
        case 0x3ab784u: goto label_3ab784;
        case 0x3ab788u: goto label_3ab788;
        case 0x3ab78cu: goto label_3ab78c;
        case 0x3ab790u: goto label_3ab790;
        case 0x3ab794u: goto label_3ab794;
        case 0x3ab798u: goto label_3ab798;
        case 0x3ab79cu: goto label_3ab79c;
        case 0x3ab7a0u: goto label_3ab7a0;
        case 0x3ab7a4u: goto label_3ab7a4;
        case 0x3ab7a8u: goto label_3ab7a8;
        case 0x3ab7acu: goto label_3ab7ac;
        case 0x3ab7b0u: goto label_3ab7b0;
        case 0x3ab7b4u: goto label_3ab7b4;
        case 0x3ab7b8u: goto label_3ab7b8;
        case 0x3ab7bcu: goto label_3ab7bc;
        case 0x3ab7c0u: goto label_3ab7c0;
        case 0x3ab7c4u: goto label_3ab7c4;
        case 0x3ab7c8u: goto label_3ab7c8;
        case 0x3ab7ccu: goto label_3ab7cc;
        case 0x3ab7d0u: goto label_3ab7d0;
        case 0x3ab7d4u: goto label_3ab7d4;
        case 0x3ab7d8u: goto label_3ab7d8;
        case 0x3ab7dcu: goto label_3ab7dc;
        case 0x3ab7e0u: goto label_3ab7e0;
        case 0x3ab7e4u: goto label_3ab7e4;
        case 0x3ab7e8u: goto label_3ab7e8;
        case 0x3ab7ecu: goto label_3ab7ec;
        case 0x3ab7f0u: goto label_3ab7f0;
        case 0x3ab7f4u: goto label_3ab7f4;
        case 0x3ab7f8u: goto label_3ab7f8;
        case 0x3ab7fcu: goto label_3ab7fc;
        case 0x3ab800u: goto label_3ab800;
        case 0x3ab804u: goto label_3ab804;
        case 0x3ab808u: goto label_3ab808;
        case 0x3ab80cu: goto label_3ab80c;
        case 0x3ab810u: goto label_3ab810;
        case 0x3ab814u: goto label_3ab814;
        case 0x3ab818u: goto label_3ab818;
        case 0x3ab81cu: goto label_3ab81c;
        case 0x3ab820u: goto label_3ab820;
        case 0x3ab824u: goto label_3ab824;
        case 0x3ab828u: goto label_3ab828;
        case 0x3ab82cu: goto label_3ab82c;
        case 0x3ab830u: goto label_3ab830;
        case 0x3ab834u: goto label_3ab834;
        case 0x3ab838u: goto label_3ab838;
        case 0x3ab83cu: goto label_3ab83c;
        case 0x3ab840u: goto label_3ab840;
        case 0x3ab844u: goto label_3ab844;
        case 0x3ab848u: goto label_3ab848;
        case 0x3ab84cu: goto label_3ab84c;
        case 0x3ab850u: goto label_3ab850;
        case 0x3ab854u: goto label_3ab854;
        case 0x3ab858u: goto label_3ab858;
        case 0x3ab85cu: goto label_3ab85c;
        case 0x3ab860u: goto label_3ab860;
        case 0x3ab864u: goto label_3ab864;
        case 0x3ab868u: goto label_3ab868;
        case 0x3ab86cu: goto label_3ab86c;
        case 0x3ab870u: goto label_3ab870;
        case 0x3ab874u: goto label_3ab874;
        case 0x3ab878u: goto label_3ab878;
        case 0x3ab87cu: goto label_3ab87c;
        case 0x3ab880u: goto label_3ab880;
        case 0x3ab884u: goto label_3ab884;
        case 0x3ab888u: goto label_3ab888;
        case 0x3ab88cu: goto label_3ab88c;
        case 0x3ab890u: goto label_3ab890;
        case 0x3ab894u: goto label_3ab894;
        default: break;
    }

    ctx->pc = 0x3ab578u;

label_3ab578:
    // 0x3ab578: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x3ab578u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_3ab57c:
    // 0x3ab57c: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x3ab57cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_3ab580:
    // 0x3ab580: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x3ab580u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_3ab584:
    // 0x3ab584: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3ab584u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ab588:
    // 0x3ab588: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3ab588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_3ab58c:
    // 0x3ab58c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x3ab58cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3ab590:
    // 0x3ab590: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x3ab590u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_3ab594:
    // 0x3ab594: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x3ab594u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3ab598:
    // 0x3ab598: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x3ab598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_3ab59c:
    // 0x3ab59c: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x3ab59cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_3ab5a0:
    // 0x3ab5a0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3ab5a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_3ab5a4:
    // 0x3ab5a4: 0xc1036d2  jal         func_40DB48
label_3ab5a8:
    if (ctx->pc == 0x3AB5A8u) {
        ctx->pc = 0x3AB5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB5A4u;
        // 0x3ab5a8: 0x8ea40134  lw          $a0, 0x134($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 308)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB5ACu;
        goto label_3ab5ac;
    }
    ctx->pc = 0x3AB5A4u;
    SET_GPR_U32(ctx, 31, 0x3AB5ACu);
    ctx->pc = 0x3AB5A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB5A4u;
    // 0x3ab5a8: 0x8ea40134  lw          $a0, 0x134($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 308)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB48u, 0x3AB5A4u, 0x3AB5ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB5ACu;
label_3ab5ac:
    // 0x3ab5ac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3ab5acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ab5b0:
    // 0x3ab5b0: 0x8ea20130  lw          $v0, 0x130($s5)
    ctx->pc = 0x3ab5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 304)));
label_3ab5b4:
    // 0x3ab5b4: 0x1840001a  blez        $v0, . + 4 + (0x1A << 2)
label_3ab5b8:
    if (ctx->pc == 0x3AB5B8u) {
        ctx->pc = 0x3AB5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB5B4u;
        // 0x3ab5b8: 0x24b10008  addiu       $s1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB5BCu;
        goto label_3ab5bc;
    }
    ctx->pc = 0x3AB5B4u;
    {
        const bool branch_taken_0x3ab5b4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x3AB5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB5B4u;
        // 0x3ab5b8: 0x24b10008  addiu       $s1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab5b4) {
            ctx->pc = 0x3AB620u;
            goto label_3ab620;
        }
    }
    ctx->pc = 0x3AB5BCu;
label_3ab5bc:
    // 0x3ab5bc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x3ab5bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3ab5c0:
    // 0x3ab5c0: 0x24b2001c  addiu       $s2, $a1, 0x1C
    ctx->pc = 0x3ab5c0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), 28));
label_3ab5c4:
    // 0x3ab5c4: 0x0  nop
    ctx->pc = 0x3ab5c4u;
    // NOP
label_3ab5c8:
    // 0x3ab5c8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3ab5c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3ab5cc:
    // 0x3ab5cc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3ab5ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3ab5d0:
    // 0x3ab5d0: 0xc10341a  jal         func_40D068
label_3ab5d4:
    if (ctx->pc == 0x3AB5D4u) {
        ctx->pc = 0x3AB5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB5D0u;
        // 0x3ab5d4: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB5D8u;
        goto label_3ab5d8;
    }
    ctx->pc = 0x3AB5D0u;
    SET_GPR_U32(ctx, 31, 0x3AB5D8u);
    ctx->pc = 0x3AB5D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB5D0u;
    // 0x3ab5d4: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D068u, 0x3AB5D0u, 0x3AB5D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB5D8u;
label_3ab5d8:
    // 0x3ab5d8: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
label_3ab5dc:
    if (ctx->pc == 0x3AB5DCu) {
        ctx->pc = 0x3AB5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB5D8u;
        // 0x3ab5dc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB5E0u;
        goto label_3ab5e0;
    }
    ctx->pc = 0x3AB5D8u;
    {
        const bool branch_taken_0x3ab5d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB5D8u;
        // 0x3ab5dc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab5d8) {
            ctx->pc = 0x3AB690u;
            goto label_3ab690;
        }
    }
    ctx->pc = 0x3AB5E0u;
label_3ab5e0:
    // 0x3ab5e0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3ab5e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3ab5e4:
    // 0x3ab5e4: 0xc10341a  jal         func_40D068
label_3ab5e8:
    if (ctx->pc == 0x3AB5E8u) {
        ctx->pc = 0x3AB5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB5E4u;
        // 0x3ab5e8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB5ECu;
        goto label_3ab5ec;
    }
    ctx->pc = 0x3AB5E4u;
    SET_GPR_U32(ctx, 31, 0x3AB5ECu);
    ctx->pc = 0x3AB5E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB5E4u;
    // 0x3ab5e8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D068u, 0x3AB5E4u, 0x3AB5ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB5ECu;
label_3ab5ec:
    // 0x3ab5ec: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_3ab5f0:
    if (ctx->pc == 0x3AB5F0u) {
        ctx->pc = 0x3AB5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB5ECu;
        // 0x3ab5f0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB5F4u;
        goto label_3ab5f4;
    }
    ctx->pc = 0x3AB5ECu;
    {
        const bool branch_taken_0x3ab5ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB5ECu;
        // 0x3ab5f0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab5ec) {
            ctx->pc = 0x3AB690u;
            goto label_3ab690;
        }
    }
    ctx->pc = 0x3AB5F4u;
label_3ab5f4:
    // 0x3ab5f4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3ab5f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3ab5f8:
    // 0x3ab5f8: 0xc10486e  jal         func_4121B8
label_3ab5fc:
    if (ctx->pc == 0x3AB5FCu) {
        ctx->pc = 0x3AB5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB5F8u;
        // 0x3ab5fc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB600u;
        goto label_3ab600;
    }
    ctx->pc = 0x3AB5F8u;
    SET_GPR_U32(ctx, 31, 0x3AB600u);
    ctx->pc = 0x3AB5FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB5F8u;
    // 0x3ab5fc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4121B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4121B8u, 0x3AB5F8u, 0x3AB600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB600u;
label_3ab600:
    // 0x3ab600: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
label_3ab604:
    if (ctx->pc == 0x3AB604u) {
        ctx->pc = 0x3AB604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB600u;
        // 0x3ab604: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB608u;
        goto label_3ab608;
    }
    ctx->pc = 0x3AB600u;
    {
        const bool branch_taken_0x3ab600 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB600u;
        // 0x3ab604: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab600) {
            ctx->pc = 0x3AB690u;
            goto label_3ab690;
        }
    }
    ctx->pc = 0x3AB608u;
label_3ab608:
    // 0x3ab608: 0x8ea20130  lw          $v0, 0x130($s5)
    ctx->pc = 0x3ab608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 304)));
label_3ab60c:
    // 0x3ab60c: 0x26520020  addiu       $s2, $s2, 0x20
    ctx->pc = 0x3ab60cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
label_3ab610:
    // 0x3ab610: 0x26310020  addiu       $s1, $s1, 0x20
    ctx->pc = 0x3ab610u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_3ab614:
    // 0x3ab614: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x3ab614u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3ab618:
    // 0x3ab618: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
label_3ab61c:
    if (ctx->pc == 0x3AB61Cu) {
        ctx->pc = 0x3AB61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB618u;
        // 0x3ab61c: 0x26730020  addiu       $s3, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB620u;
        goto label_3ab620;
    }
    ctx->pc = 0x3AB618u;
    {
        const bool branch_taken_0x3ab618 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AB61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB618u;
        // 0x3ab61c: 0x26730020  addiu       $s3, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab618) {
            ctx->pc = 0x3AB5C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ab5c8;
        }
    }
    ctx->pc = 0x3AB620u;
label_3ab620:
    // 0x3ab620: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x3ab620u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
label_3ab624:
    // 0x3ab624: 0x26b10014  addiu       $s1, $s5, 0x14
    ctx->pc = 0x3ab624u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 20));
label_3ab628:
    // 0x3ab628: 0x8ea20014  lw          $v0, 0x14($s5)
    ctx->pc = 0x3ab628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
label_3ab62c:
    // 0x3ab62c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_3ab630:
    if (ctx->pc == 0x3AB630u) {
        ctx->pc = 0x3AB630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB62Cu;
        // 0x3ab630: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB634u;
        goto label_3ab634;
    }
    ctx->pc = 0x3AB62Cu;
    {
        const bool branch_taken_0x3ab62c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB62Cu;
        // 0x3ab630: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab62c) {
            ctx->pc = 0x3AB640u;
            goto label_3ab640;
        }
    }
    ctx->pc = 0x3AB634u;
label_3ab634:
    // 0x3ab634: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3ab634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3ab638:
    // 0x3ab638: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x3ab638u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
label_3ab63c:
    // 0x3ab63c: 0x0  nop
    ctx->pc = 0x3ab63cu;
    // NOP
label_3ab640:
    // 0x3ab640: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3ab640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3ab644:
    // 0x3ab644: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_3ab648:
    if (ctx->pc == 0x3AB648u) {
        ctx->pc = 0x3AB648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB644u;
        // 0x3ab648: 0x8fa20030  lw          $v0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB64Cu;
        goto label_3ab64c;
    }
    ctx->pc = 0x3AB644u;
    {
        const bool branch_taken_0x3ab644 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB644u;
        // 0x3ab648: 0x8fa20030  lw          $v0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab644) {
            ctx->pc = 0x3AB654u;
            goto label_3ab654;
        }
    }
    ctx->pc = 0x3AB64Cu;
label_3ab64c:
    // 0x3ab64c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3ab64cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3ab650:
    // 0x3ab650: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x3ab650u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
label_3ab654:
    // 0x3ab654: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3ab654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_3ab658:
    // 0x3ab658: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_3ab65c:
    if (ctx->pc == 0x3AB65Cu) {
        ctx->pc = 0x3AB65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB658u;
        // 0x3ab65c: 0x8fa20030  lw          $v0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB660u;
        goto label_3ab660;
    }
    ctx->pc = 0x3AB658u;
    {
        const bool branch_taken_0x3ab658 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB658u;
        // 0x3ab65c: 0x8fa20030  lw          $v0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab658) {
            ctx->pc = 0x3AB668u;
            goto label_3ab668;
        }
    }
    ctx->pc = 0x3AB660u;
label_3ab660:
    // 0x3ab660: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3ab660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3ab664:
    // 0x3ab664: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x3ab664u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
label_3ab668:
    // 0x3ab668: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x3ab668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_3ab66c:
    // 0x3ab66c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_3ab670:
    if (ctx->pc == 0x3AB670u) {
        ctx->pc = 0x3AB670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB66Cu;
        // 0x3ab670: 0x8fa20030  lw          $v0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB674u;
        goto label_3ab674;
    }
    ctx->pc = 0x3AB66Cu;
    {
        const bool branch_taken_0x3ab66c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB66Cu;
        // 0x3ab670: 0x8fa20030  lw          $v0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab66c) {
            ctx->pc = 0x3AB67Cu;
            goto label_3ab67c;
        }
    }
    ctx->pc = 0x3AB674u;
label_3ab674:
    // 0x3ab674: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3ab674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3ab678:
    // 0x3ab678: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x3ab678u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
label_3ab67c:
    // 0x3ab67c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3ab67cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3ab680:
    // 0x3ab680: 0xc103440  jal         func_40D100
label_3ab684:
    if (ctx->pc == 0x3AB684u) {
        ctx->pc = 0x3AB684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB680u;
        // 0x3ab684: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB688u;
        goto label_3ab688;
    }
    ctx->pc = 0x3AB680u;
    SET_GPR_U32(ctx, 31, 0x3AB688u);
    ctx->pc = 0x3AB684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB680u;
    // 0x3ab684: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D100u, 0x3AB680u, 0x3AB688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB688u;
label_3ab688:
    // 0x3ab688: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_3ab68c:
    if (ctx->pc == 0x3AB68Cu) {
        ctx->pc = 0x3AB68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB688u;
        // 0x3ab68c: 0x8fa20030  lw          $v0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB690u;
        goto label_3ab690;
    }
    ctx->pc = 0x3AB688u;
    {
        const bool branch_taken_0x3ab688 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AB68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB688u;
        // 0x3ab68c: 0x8fa20030  lw          $v0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab688) {
            ctx->pc = 0x3AB698u;
            goto label_3ab698;
        }
    }
    ctx->pc = 0x3AB690u;
label_3ab690:
    // 0x3ab690: 0x10000019  b           . + 4 + (0x19 << 2)
label_3ab694:
    if (ctx->pc == 0x3AB694u) {
        ctx->pc = 0x3AB694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB690u;
        // 0x3ab694: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB698u;
        goto label_3ab698;
    }
    ctx->pc = 0x3AB690u;
    {
        const bool branch_taken_0x3ab690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB690u;
        // 0x3ab694: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab690) {
            ctx->pc = 0x3AB6F8u;
            goto label_3ab6f8;
        }
    }
    ctx->pc = 0x3AB698u;
label_3ab698:
    // 0x3ab698: 0x18400016  blez        $v0, . + 4 + (0x16 << 2)
label_3ab69c:
    if (ctx->pc == 0x3AB69Cu) {
        ctx->pc = 0x3AB69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB698u;
        // 0x3ab69c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB6A0u;
        goto label_3ab6a0;
    }
    ctx->pc = 0x3AB698u;
    {
        const bool branch_taken_0x3ab698 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x3AB69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB698u;
        // 0x3ab69c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab698) {
            ctx->pc = 0x3AB6F4u;
            goto label_3ab6f4;
        }
    }
    ctx->pc = 0x3AB6A0u;
label_3ab6a0:
    // 0x3ab6a0: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3ab6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_3ab6a4:
    // 0x3ab6a4: 0x2452e880  addiu       $s2, $v0, -0x1780
    ctx->pc = 0x3ab6a4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_3ab6a8:
    // 0x3ab6a8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3ab6a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3ab6ac:
    // 0x3ab6ac: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x3ab6acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_3ab6b0:
    // 0x3ab6b0: 0xc0bb7e6  jal         func_2EDF98
label_3ab6b4:
    if (ctx->pc == 0x3AB6B4u) {
        ctx->pc = 0x3AB6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB6B0u;
        // 0x3ab6b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB6B8u;
        goto label_3ab6b8;
    }
    ctx->pc = 0x3AB6B0u;
    SET_GPR_U32(ctx, 31, 0x3AB6B8u);
    ctx->pc = 0x3AB6B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB6B0u;
    // 0x3ab6b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x3AB6B0u, 0x3AB6B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB6B8u;
label_3ab6b8:
    // 0x3ab6b8: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x3ab6b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3ab6bc:
    // 0x3ab6bc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3ab6bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3ab6c0:
    // 0x3ab6c0: 0x8e4200c4  lw          $v0, 0xC4($s2)
    ctx->pc = 0x3ab6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
label_3ab6c4:
    // 0x3ab6c4: 0x40f809  jalr        $v0
label_3ab6c8:
    if (ctx->pc == 0x3AB6C8u) {
        ctx->pc = 0x3AB6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB6C4u;
        // 0x3ab6c8: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB6CCu;
        goto label_3ab6cc;
    }
    ctx->pc = 0x3AB6C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3AB6CCu);
        ctx->pc = 0x3AB6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB6C4u;
        // 0x3ab6c8: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AB6C4u, 0x3AB6CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AB6CCu;
label_3ab6cc:
    // 0x3ab6cc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3ab6ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3ab6d0:
    // 0x3ab6d0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3ab6d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3ab6d4:
    // 0x3ab6d4: 0xc10486e  jal         func_4121B8
label_3ab6d8:
    if (ctx->pc == 0x3AB6D8u) {
        ctx->pc = 0x3AB6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB6D4u;
        // 0x3ab6d8: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB6DCu;
        goto label_3ab6dc;
    }
    ctx->pc = 0x3AB6D4u;
    SET_GPR_U32(ctx, 31, 0x3AB6DCu);
    ctx->pc = 0x3AB6D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB6D4u;
    // 0x3ab6d8: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4121B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4121B8u, 0x3AB6D4u, 0x3AB6DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB6DCu;
label_3ab6dc:
    // 0x3ab6dc: 0x1040ffec  beqz        $v0, . + 4 + (-0x14 << 2)
label_3ab6e0:
    if (ctx->pc == 0x3AB6E0u) {
        ctx->pc = 0x3AB6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB6DCu;
        // 0x3ab6e0: 0x8fa20030  lw          $v0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB6E4u;
        goto label_3ab6e4;
    }
    ctx->pc = 0x3AB6DCu;
    {
        const bool branch_taken_0x3ab6dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB6DCu;
        // 0x3ab6e0: 0x8fa20030  lw          $v0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab6dc) {
            ctx->pc = 0x3AB690u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ab690;
        }
    }
    ctx->pc = 0x3AB6E4u;
label_3ab6e4:
    // 0x3ab6e4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3ab6e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_3ab6e8:
    // 0x3ab6e8: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x3ab6e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3ab6ec:
    // 0x3ab6ec: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
label_3ab6f0:
    if (ctx->pc == 0x3AB6F0u) {
        ctx->pc = 0x3AB6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB6ECu;
        // 0x3ab6f0: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB6F4u;
        goto label_3ab6f4;
    }
    ctx->pc = 0x3AB6ECu;
    {
        const bool branch_taken_0x3ab6ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AB6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB6ECu;
        // 0x3ab6f0: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab6ec) {
            ctx->pc = 0x3AB6A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ab6a8;
        }
    }
    ctx->pc = 0x3AB6F4u;
label_3ab6f4:
    // 0x3ab6f4: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x3ab6f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3ab6f8:
    // 0x3ab6f8: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x3ab6f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3ab6fc:
    // 0x3ab6fc: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x3ab6fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3ab700:
    // 0x3ab700: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x3ab700u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3ab704:
    // 0x3ab704: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x3ab704u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3ab708:
    // 0x3ab708: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x3ab708u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3ab70c:
    // 0x3ab70c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3ab70cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3ab710:
    // 0x3ab710: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3ab710u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3ab714:
    // 0x3ab714: 0x3e00008  jr          $ra
label_3ab718:
    if (ctx->pc == 0x3AB718u) {
        ctx->pc = 0x3AB718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB714u;
        // 0x3ab718: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB71Cu;
        goto label_3ab71c;
    }
    ctx->pc = 0x3AB714u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AB718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB714u;
        // 0x3ab718: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AB714u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AB71Cu;
label_3ab71c:
    // 0x3ab71c: 0x0  nop
    ctx->pc = 0x3ab71cu;
    // NOP
label_3ab720:
    // 0x3ab720: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3ab720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_3ab724:
    // 0x3ab724: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3ab724u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_3ab728:
    // 0x3ab728: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3ab728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3ab72c:
    // 0x3ab72c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3ab72cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3ab730:
    // 0x3ab730: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3ab730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3ab734:
    // 0x3ab734: 0xc0eacc8  jal         func_3AB320
label_3ab738:
    if (ctx->pc == 0x3AB738u) {
        ctx->pc = 0x3AB738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB734u;
        // 0x3ab738: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB73Cu;
        goto label_3ab73c;
    }
    ctx->pc = 0x3AB734u;
    SET_GPR_U32(ctx, 31, 0x3AB73Cu);
    ctx->pc = 0x3AB738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB734u;
    // 0x3ab738: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AB320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AB320u, 0x3AB734u, 0x3AB73Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB73Cu;
label_3ab73c:
    // 0x3ab73c: 0x3c070003  lui         $a3, 0x3
    ctx->pc = 0x3ab73cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3 << 16));
label_3ab740:
    // 0x3ab740: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3ab740u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ab744:
    // 0x3ab744: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3ab744u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3ab748:
    // 0x3ab748: 0x24050199  addiu       $a1, $zero, 0x199
    ctx->pc = 0x3ab748u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 409));
label_3ab74c:
    // 0x3ab74c: 0x34e77002  ori         $a3, $a3, 0x7002
    ctx->pc = 0x3ab74cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)28674);
label_3ab750:
    // 0x3ab750: 0xc103404  jal         func_40D010
label_3ab754:
    if (ctx->pc == 0x3AB754u) {
        ctx->pc = 0x3AB754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB750u;
        // 0x3ab754: 0x2408002d  addiu       $t0, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB758u;
        goto label_3ab758;
    }
    ctx->pc = 0x3AB750u;
    SET_GPR_U32(ctx, 31, 0x3AB758u);
    ctx->pc = 0x3AB754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB750u;
    // 0x3ab754: 0x2408002d  addiu       $t0, $zero, 0x2D (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D010u, 0x3AB750u, 0x3AB758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB758u;
label_3ab758:
    // 0x3ab758: 0x1040003f  beqz        $v0, . + 4 + (0x3F << 2)
label_3ab75c:
    if (ctx->pc == 0x3AB75Cu) {
        ctx->pc = 0x3AB75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB758u;
        // 0x3ab75c: 0x3c020100  lui         $v0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB760u;
        goto label_3ab760;
    }
    ctx->pc = 0x3AB758u;
    {
        const bool branch_taken_0x3ab758 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB758u;
        // 0x3ab75c: 0x3c020100  lui         $v0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab758) {
            ctx->pc = 0x3AB858u;
            goto label_3ab858;
        }
    }
    ctx->pc = 0x3AB760u;
label_3ab760:
    // 0x3ab760: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3ab760u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3ab764:
    // 0x3ab764: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x3ab764u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_3ab768:
    // 0x3ab768: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3ab768u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3ab76c:
    // 0x3ab76c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x3ab76cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_3ab770:
    // 0x3ab770: 0xc103440  jal         func_40D100
label_3ab774:
    if (ctx->pc == 0x3AB774u) {
        ctx->pc = 0x3AB774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB770u;
        // 0x3ab774: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB778u;
        goto label_3ab778;
    }
    ctx->pc = 0x3AB770u;
    SET_GPR_U32(ctx, 31, 0x3AB778u);
    ctx->pc = 0x3AB774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB770u;
    // 0x3ab774: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D100u, 0x3AB770u, 0x3AB778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB778u;
label_3ab778:
    // 0x3ab778: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
label_3ab77c:
    if (ctx->pc == 0x3AB77Cu) {
        ctx->pc = 0x3AB77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB778u;
        // 0x3ab77c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB780u;
        goto label_3ab780;
    }
    ctx->pc = 0x3AB778u;
    {
        const bool branch_taken_0x3ab778 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB778u;
        // 0x3ab77c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab778) {
            ctx->pc = 0x3AB858u;
            goto label_3ab858;
        }
    }
    ctx->pc = 0x3AB780u;
label_3ab780:
    // 0x3ab780: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3ab780u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ab784:
    // 0x3ab784: 0xc103440  jal         func_40D100
label_3ab788:
    if (ctx->pc == 0x3AB788u) {
        ctx->pc = 0x3AB788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB784u;
        // 0x3ab788: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB78Cu;
        goto label_3ab78c;
    }
    ctx->pc = 0x3AB784u;
    SET_GPR_U32(ctx, 31, 0x3AB78Cu);
    ctx->pc = 0x3AB788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB784u;
    // 0x3ab788: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D100u, 0x3AB784u, 0x3AB78Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB78Cu;
label_3ab78c:
    // 0x3ab78c: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
label_3ab790:
    if (ctx->pc == 0x3AB790u) {
        ctx->pc = 0x3AB790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB78Cu;
        // 0x3ab790: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB794u;
        goto label_3ab794;
    }
    ctx->pc = 0x3AB78Cu;
    {
        const bool branch_taken_0x3ab78c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB78Cu;
        // 0x3ab790: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab78c) {
            ctx->pc = 0x3AB858u;
            goto label_3ab858;
        }
    }
    ctx->pc = 0x3AB794u;
label_3ab794:
    // 0x3ab794: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x3ab794u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_3ab798:
    // 0x3ab798: 0xc10341a  jal         func_40D068
label_3ab79c:
    if (ctx->pc == 0x3AB79Cu) {
        ctx->pc = 0x3AB79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB798u;
        // 0x3ab79c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB7A0u;
        goto label_3ab7a0;
    }
    ctx->pc = 0x3AB798u;
    SET_GPR_U32(ctx, 31, 0x3AB7A0u);
    ctx->pc = 0x3AB79Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB798u;
    // 0x3ab79c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D068u, 0x3AB798u, 0x3AB7A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB7A0u;
label_3ab7a0:
    // 0x3ab7a0: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
label_3ab7a4:
    if (ctx->pc == 0x3AB7A4u) {
        ctx->pc = 0x3AB7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB7A0u;
        // 0x3ab7a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB7A8u;
        goto label_3ab7a8;
    }
    ctx->pc = 0x3AB7A0u;
    {
        const bool branch_taken_0x3ab7a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB7A0u;
        // 0x3ab7a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab7a0) {
            ctx->pc = 0x3AB858u;
            goto label_3ab858;
        }
    }
    ctx->pc = 0x3AB7A8u;
label_3ab7a8:
    // 0x3ab7a8: 0x26050008  addiu       $a1, $s0, 0x8
    ctx->pc = 0x3ab7a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_3ab7ac:
    // 0x3ab7ac: 0xc10341a  jal         func_40D068
label_3ab7b0:
    if (ctx->pc == 0x3AB7B0u) {
        ctx->pc = 0x3AB7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB7ACu;
        // 0x3ab7b0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB7B4u;
        goto label_3ab7b4;
    }
    ctx->pc = 0x3AB7ACu;
    SET_GPR_U32(ctx, 31, 0x3AB7B4u);
    ctx->pc = 0x3AB7B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB7ACu;
    // 0x3ab7b0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D068u, 0x3AB7ACu, 0x3AB7B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB7B4u;
label_3ab7b4:
    // 0x3ab7b4: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_3ab7b8:
    if (ctx->pc == 0x3AB7B8u) {
        ctx->pc = 0x3AB7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB7B4u;
        // 0x3ab7b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB7BCu;
        goto label_3ab7bc;
    }
    ctx->pc = 0x3AB7B4u;
    {
        const bool branch_taken_0x3ab7b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB7B4u;
        // 0x3ab7b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab7b4) {
            ctx->pc = 0x3AB858u;
            goto label_3ab858;
        }
    }
    ctx->pc = 0x3AB7BCu;
label_3ab7bc:
    // 0x3ab7bc: 0x2605000c  addiu       $a1, $s0, 0xC
    ctx->pc = 0x3ab7bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_3ab7c0:
    // 0x3ab7c0: 0xc10341a  jal         func_40D068
label_3ab7c4:
    if (ctx->pc == 0x3AB7C4u) {
        ctx->pc = 0x3AB7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB7C0u;
        // 0x3ab7c4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB7C8u;
        goto label_3ab7c8;
    }
    ctx->pc = 0x3AB7C0u;
    SET_GPR_U32(ctx, 31, 0x3AB7C8u);
    ctx->pc = 0x3AB7C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB7C0u;
    // 0x3ab7c4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D068u, 0x3AB7C0u, 0x3AB7C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB7C8u;
label_3ab7c8:
    // 0x3ab7c8: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
label_3ab7cc:
    if (ctx->pc == 0x3AB7CCu) {
        ctx->pc = 0x3AB7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB7C8u;
        // 0x3ab7cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB7D0u;
        goto label_3ab7d0;
    }
    ctx->pc = 0x3AB7C8u;
    {
        const bool branch_taken_0x3ab7c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB7C8u;
        // 0x3ab7cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab7c8) {
            ctx->pc = 0x3AB858u;
            goto label_3ab858;
        }
    }
    ctx->pc = 0x3AB7D0u;
label_3ab7d0:
    // 0x3ab7d0: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x3ab7d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_3ab7d4:
    // 0x3ab7d4: 0xc103440  jal         func_40D100
label_3ab7d8:
    if (ctx->pc == 0x3AB7D8u) {
        ctx->pc = 0x3AB7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB7D4u;
        // 0x3ab7d8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB7DCu;
        goto label_3ab7dc;
    }
    ctx->pc = 0x3AB7D4u;
    SET_GPR_U32(ctx, 31, 0x3AB7DCu);
    ctx->pc = 0x3AB7D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB7D4u;
    // 0x3ab7d8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D100u, 0x3AB7D4u, 0x3AB7DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB7DCu;
label_3ab7dc:
    // 0x3ab7dc: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_3ab7e0:
    if (ctx->pc == 0x3AB7E0u) {
        ctx->pc = 0x3AB7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB7DCu;
        // 0x3ab7e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB7E4u;
        goto label_3ab7e4;
    }
    ctx->pc = 0x3AB7DCu;
    {
        const bool branch_taken_0x3ab7dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB7DCu;
        // 0x3ab7e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab7dc) {
            ctx->pc = 0x3AB858u;
            goto label_3ab858;
        }
    }
    ctx->pc = 0x3AB7E4u;
label_3ab7e4:
    // 0x3ab7e4: 0x26050124  addiu       $a1, $s0, 0x124
    ctx->pc = 0x3ab7e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 292));
label_3ab7e8:
    // 0x3ab7e8: 0xc103440  jal         func_40D100
label_3ab7ec:
    if (ctx->pc == 0x3AB7ECu) {
        ctx->pc = 0x3AB7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB7E8u;
        // 0x3ab7ec: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB7F0u;
        goto label_3ab7f0;
    }
    ctx->pc = 0x3AB7E8u;
    SET_GPR_U32(ctx, 31, 0x3AB7F0u);
    ctx->pc = 0x3AB7ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB7E8u;
    // 0x3ab7ec: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D100u, 0x3AB7E8u, 0x3AB7F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB7F0u;
label_3ab7f0:
    // 0x3ab7f0: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_3ab7f4:
    if (ctx->pc == 0x3AB7F4u) {
        ctx->pc = 0x3AB7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB7F0u;
        // 0x3ab7f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB7F8u;
        goto label_3ab7f8;
    }
    ctx->pc = 0x3AB7F0u;
    {
        const bool branch_taken_0x3ab7f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB7F0u;
        // 0x3ab7f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab7f0) {
            ctx->pc = 0x3AB858u;
            goto label_3ab858;
        }
    }
    ctx->pc = 0x3AB7F8u;
label_3ab7f8:
    // 0x3ab7f8: 0x26050130  addiu       $a1, $s0, 0x130
    ctx->pc = 0x3ab7f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 304));
label_3ab7fc:
    // 0x3ab7fc: 0xc103440  jal         func_40D100
label_3ab800:
    if (ctx->pc == 0x3AB800u) {
        ctx->pc = 0x3AB800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB7FCu;
        // 0x3ab800: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB804u;
        goto label_3ab804;
    }
    ctx->pc = 0x3AB7FCu;
    SET_GPR_U32(ctx, 31, 0x3AB804u);
    ctx->pc = 0x3AB800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB7FCu;
    // 0x3ab800: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D100u, 0x3AB7FCu, 0x3AB804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB804u;
label_3ab804:
    // 0x3ab804: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_3ab808:
    if (ctx->pc == 0x3AB808u) {
        ctx->pc = 0x3AB808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB804u;
        // 0x3ab808: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB80Cu;
        goto label_3ab80c;
    }
    ctx->pc = 0x3AB804u;
    {
        const bool branch_taken_0x3ab804 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB804u;
        // 0x3ab808: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab804) {
            ctx->pc = 0x3AB858u;
            goto label_3ab858;
        }
    }
    ctx->pc = 0x3AB80Cu;
label_3ab80c:
    // 0x3ab80c: 0x26050128  addiu       $a1, $s0, 0x128
    ctx->pc = 0x3ab80cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 296));
label_3ab810:
    // 0x3ab810: 0xc103440  jal         func_40D100
label_3ab814:
    if (ctx->pc == 0x3AB814u) {
        ctx->pc = 0x3AB814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB810u;
        // 0x3ab814: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB818u;
        goto label_3ab818;
    }
    ctx->pc = 0x3AB810u;
    SET_GPR_U32(ctx, 31, 0x3AB818u);
    ctx->pc = 0x3AB814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB810u;
    // 0x3ab814: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D100u, 0x3AB810u, 0x3AB818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB818u;
label_3ab818:
    // 0x3ab818: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_3ab81c:
    if (ctx->pc == 0x3AB81Cu) {
        ctx->pc = 0x3AB81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB818u;
        // 0x3ab81c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB820u;
        goto label_3ab820;
    }
    ctx->pc = 0x3AB818u;
    {
        const bool branch_taken_0x3ab818 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB818u;
        // 0x3ab81c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab818) {
            ctx->pc = 0x3AB884u;
            goto label_3ab884;
        }
    }
    ctx->pc = 0x3AB820u;
label_3ab820:
    // 0x3ab820: 0x8e060128  lw          $a2, 0x128($s0)
    ctx->pc = 0x3ab820u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 296)));
label_3ab824:
    // 0x3ab824: 0x18c00006  blez        $a2, . + 4 + (0x6 << 2)
label_3ab828:
    if (ctx->pc == 0x3AB828u) {
        ctx->pc = 0x3AB828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB824u;
        // 0x3ab828: 0x63040  sll         $a2, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB82Cu;
        goto label_3ab82c;
    }
    ctx->pc = 0x3AB824u;
    {
        const bool branch_taken_0x3ab824 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x3AB828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB824u;
        // 0x3ab828: 0x63040  sll         $a2, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab824) {
            ctx->pc = 0x3AB840u;
            goto label_3ab840;
        }
    }
    ctx->pc = 0x3AB82Cu;
label_3ab82c:
    // 0x3ab82c: 0x8e05012c  lw          $a1, 0x12C($s0)
    ctx->pc = 0x3ab82cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
label_3ab830:
    // 0x3ab830: 0xc10344a  jal         func_40D128
label_3ab834:
    if (ctx->pc == 0x3AB834u) {
        ctx->pc = 0x3AB834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB830u;
        // 0x3ab834: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB838u;
        goto label_3ab838;
    }
    ctx->pc = 0x3AB830u;
    SET_GPR_U32(ctx, 31, 0x3AB838u);
    ctx->pc = 0x3AB834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB830u;
    // 0x3ab834: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D128u, 0x3AB830u, 0x3AB838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB838u;
label_3ab838:
    // 0x3ab838: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_3ab83c:
    if (ctx->pc == 0x3AB83Cu) {
        ctx->pc = 0x3AB83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB838u;
        // 0x3ab83c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB840u;
        goto label_3ab840;
    }
    ctx->pc = 0x3AB838u;
    {
        const bool branch_taken_0x3ab838 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB838u;
        // 0x3ab83c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab838) {
            ctx->pc = 0x3AB884u;
            goto label_3ab884;
        }
    }
    ctx->pc = 0x3AB840u;
label_3ab840:
    // 0x3ab840: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3ab840u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3ab844:
    // 0x3ab844: 0x26050024  addiu       $a1, $s0, 0x24
    ctx->pc = 0x3ab844u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
label_3ab848:
    // 0x3ab848: 0xc10344a  jal         func_40D128
label_3ab84c:
    if (ctx->pc == 0x3AB84Cu) {
        ctx->pc = 0x3AB84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB848u;
        // 0x3ab84c: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB850u;
        goto label_3ab850;
    }
    ctx->pc = 0x3AB848u;
    SET_GPR_U32(ctx, 31, 0x3AB850u);
    ctx->pc = 0x3AB84Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB848u;
    // 0x3ab84c: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D128u, 0x3AB848u, 0x3AB850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB850u;
label_3ab850:
    // 0x3ab850: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_3ab854:
    if (ctx->pc == 0x3AB854u) {
        ctx->pc = 0x3AB854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB850u;
        // 0x3ab854: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB858u;
        goto label_3ab858;
    }
    ctx->pc = 0x3AB850u;
    {
        const bool branch_taken_0x3ab850 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ab850) {
            ctx->pc = 0x3AB854u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AB850u;
            // 0x3ab854: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AB860u;
            goto label_3ab860;
        }
    }
    ctx->pc = 0x3AB858u;
label_3ab858:
    // 0x3ab858: 0x1000000a  b           . + 4 + (0xA << 2)
label_3ab85c:
    if (ctx->pc == 0x3AB85Cu) {
        ctx->pc = 0x3AB85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB858u;
        // 0x3ab85c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB860u;
        goto label_3ab860;
    }
    ctx->pc = 0x3AB858u;
    {
        const bool branch_taken_0x3ab858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB858u;
        // 0x3ab85c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab858) {
            ctx->pc = 0x3AB884u;
            goto label_3ab884;
        }
    }
    ctx->pc = 0x3AB860u;
label_3ab860:
    // 0x3ab860: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_3ab864:
    if (ctx->pc == 0x3AB864u) {
        ctx->pc = 0x3AB864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB860u;
        // 0x3ab864: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB868u;
        goto label_3ab868;
    }
    ctx->pc = 0x3AB860u;
    {
        const bool branch_taken_0x3ab860 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB860u;
        // 0x3ab864: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab860) {
            ctx->pc = 0x3AB878u;
            goto label_3ab878;
        }
    }
    ctx->pc = 0x3AB868u;
label_3ab868:
    // 0x3ab868: 0xc0ead0c  jal         func_3AB430
label_3ab86c:
    if (ctx->pc == 0x3AB86Cu) {
        ctx->pc = 0x3AB86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB868u;
        // 0x3ab86c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB870u;
        goto label_3ab870;
    }
    ctx->pc = 0x3AB868u;
    SET_GPR_U32(ctx, 31, 0x3AB870u);
    ctx->pc = 0x3AB86Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB868u;
    // 0x3ab86c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AB430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AB430u, 0x3AB868u, 0x3AB870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB870u;
label_3ab870:
    // 0x3ab870: 0x10000004  b           . + 4 + (0x4 << 2)
label_3ab874:
    if (ctx->pc == 0x3AB874u) {
        ctx->pc = 0x3AB874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB870u;
        // 0x3ab874: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB878u;
        goto label_3ab878;
    }
    ctx->pc = 0x3AB870u;
    {
        const bool branch_taken_0x3ab870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB870u;
        // 0x3ab874: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab870) {
            ctx->pc = 0x3AB884u;
            goto label_3ab884;
        }
    }
    ctx->pc = 0x3AB878u;
label_3ab878:
    // 0x3ab878: 0xc0ead5e  jal         func_3AB578
label_3ab87c:
    if (ctx->pc == 0x3AB87Cu) {
        ctx->pc = 0x3AB87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB878u;
        // 0x3ab87c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB880u;
        goto label_3ab880;
    }
    ctx->pc = 0x3AB878u;
    SET_GPR_U32(ctx, 31, 0x3AB880u);
    ctx->pc = 0x3AB87Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB878u;
    // 0x3ab87c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AB578u;
    goto label_3ab578;
    ctx->pc = 0x3AB880u;
label_3ab880:
    // 0x3ab880: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3ab880u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ab884:
    // 0x3ab884: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3ab884u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3ab888:
    // 0x3ab888: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3ab888u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3ab88c:
    // 0x3ab88c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3ab88cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3ab890:
    // 0x3ab890: 0x3e00008  jr          $ra
label_3ab894:
    if (ctx->pc == 0x3AB894u) {
        ctx->pc = 0x3AB894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB890u;
        // 0x3ab894: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB898u;
        goto label_fallthrough_0x3ab890;
    }
    ctx->pc = 0x3AB890u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AB894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB890u;
        // 0x3ab894: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AB890u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3ab890:
    ctx->pc = 0x3AB898u;
}
