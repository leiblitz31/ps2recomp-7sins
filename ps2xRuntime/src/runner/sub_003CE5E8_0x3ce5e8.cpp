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

// Function: sub_003CE5E8
// Address: 0x3ce5e8 - 0x3ce930
void sub_003CE5E8_0x3ce5e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CE5E8_0x3ce5e8");
#endif

    switch (ctx->pc) {
        case 0x3ce5e8u: goto label_3ce5e8;
        case 0x3ce5ecu: goto label_3ce5ec;
        case 0x3ce5f0u: goto label_3ce5f0;
        case 0x3ce5f4u: goto label_3ce5f4;
        case 0x3ce5f8u: goto label_3ce5f8;
        case 0x3ce5fcu: goto label_3ce5fc;
        case 0x3ce600u: goto label_3ce600;
        case 0x3ce604u: goto label_3ce604;
        case 0x3ce608u: goto label_3ce608;
        case 0x3ce60cu: goto label_3ce60c;
        case 0x3ce610u: goto label_3ce610;
        case 0x3ce614u: goto label_3ce614;
        case 0x3ce618u: goto label_3ce618;
        case 0x3ce61cu: goto label_3ce61c;
        case 0x3ce620u: goto label_3ce620;
        case 0x3ce624u: goto label_3ce624;
        case 0x3ce628u: goto label_3ce628;
        case 0x3ce62cu: goto label_3ce62c;
        case 0x3ce630u: goto label_3ce630;
        case 0x3ce634u: goto label_3ce634;
        case 0x3ce638u: goto label_3ce638;
        case 0x3ce63cu: goto label_3ce63c;
        case 0x3ce640u: goto label_3ce640;
        case 0x3ce644u: goto label_3ce644;
        case 0x3ce648u: goto label_3ce648;
        case 0x3ce64cu: goto label_3ce64c;
        case 0x3ce650u: goto label_3ce650;
        case 0x3ce654u: goto label_3ce654;
        case 0x3ce658u: goto label_3ce658;
        case 0x3ce65cu: goto label_3ce65c;
        case 0x3ce660u: goto label_3ce660;
        case 0x3ce664u: goto label_3ce664;
        case 0x3ce668u: goto label_3ce668;
        case 0x3ce66cu: goto label_3ce66c;
        case 0x3ce670u: goto label_3ce670;
        case 0x3ce674u: goto label_3ce674;
        case 0x3ce678u: goto label_3ce678;
        case 0x3ce67cu: goto label_3ce67c;
        case 0x3ce680u: goto label_3ce680;
        case 0x3ce684u: goto label_3ce684;
        case 0x3ce688u: goto label_3ce688;
        case 0x3ce68cu: goto label_3ce68c;
        case 0x3ce690u: goto label_3ce690;
        case 0x3ce694u: goto label_3ce694;
        case 0x3ce698u: goto label_3ce698;
        case 0x3ce69cu: goto label_3ce69c;
        case 0x3ce6a0u: goto label_3ce6a0;
        case 0x3ce6a4u: goto label_3ce6a4;
        case 0x3ce6a8u: goto label_3ce6a8;
        case 0x3ce6acu: goto label_3ce6ac;
        case 0x3ce6b0u: goto label_3ce6b0;
        case 0x3ce6b4u: goto label_3ce6b4;
        case 0x3ce6b8u: goto label_3ce6b8;
        case 0x3ce6bcu: goto label_3ce6bc;
        case 0x3ce6c0u: goto label_3ce6c0;
        case 0x3ce6c4u: goto label_3ce6c4;
        case 0x3ce6c8u: goto label_3ce6c8;
        case 0x3ce6ccu: goto label_3ce6cc;
        case 0x3ce6d0u: goto label_3ce6d0;
        case 0x3ce6d4u: goto label_3ce6d4;
        case 0x3ce6d8u: goto label_3ce6d8;
        case 0x3ce6dcu: goto label_3ce6dc;
        case 0x3ce6e0u: goto label_3ce6e0;
        case 0x3ce6e4u: goto label_3ce6e4;
        case 0x3ce6e8u: goto label_3ce6e8;
        case 0x3ce6ecu: goto label_3ce6ec;
        case 0x3ce6f0u: goto label_3ce6f0;
        case 0x3ce6f4u: goto label_3ce6f4;
        case 0x3ce6f8u: goto label_3ce6f8;
        case 0x3ce6fcu: goto label_3ce6fc;
        case 0x3ce700u: goto label_3ce700;
        case 0x3ce704u: goto label_3ce704;
        case 0x3ce708u: goto label_3ce708;
        case 0x3ce70cu: goto label_3ce70c;
        case 0x3ce710u: goto label_3ce710;
        case 0x3ce714u: goto label_3ce714;
        case 0x3ce718u: goto label_3ce718;
        case 0x3ce71cu: goto label_3ce71c;
        case 0x3ce720u: goto label_3ce720;
        case 0x3ce724u: goto label_3ce724;
        case 0x3ce728u: goto label_3ce728;
        case 0x3ce72cu: goto label_3ce72c;
        case 0x3ce730u: goto label_3ce730;
        case 0x3ce734u: goto label_3ce734;
        case 0x3ce738u: goto label_3ce738;
        case 0x3ce73cu: goto label_3ce73c;
        case 0x3ce740u: goto label_3ce740;
        case 0x3ce744u: goto label_3ce744;
        case 0x3ce748u: goto label_3ce748;
        case 0x3ce74cu: goto label_3ce74c;
        case 0x3ce750u: goto label_3ce750;
        case 0x3ce754u: goto label_3ce754;
        case 0x3ce758u: goto label_3ce758;
        case 0x3ce75cu: goto label_3ce75c;
        case 0x3ce760u: goto label_3ce760;
        case 0x3ce764u: goto label_3ce764;
        case 0x3ce768u: goto label_3ce768;
        case 0x3ce76cu: goto label_3ce76c;
        case 0x3ce770u: goto label_3ce770;
        case 0x3ce774u: goto label_3ce774;
        case 0x3ce778u: goto label_3ce778;
        case 0x3ce77cu: goto label_3ce77c;
        case 0x3ce780u: goto label_3ce780;
        case 0x3ce784u: goto label_3ce784;
        case 0x3ce788u: goto label_3ce788;
        case 0x3ce78cu: goto label_3ce78c;
        case 0x3ce790u: goto label_3ce790;
        case 0x3ce794u: goto label_3ce794;
        case 0x3ce798u: goto label_3ce798;
        case 0x3ce79cu: goto label_3ce79c;
        case 0x3ce7a0u: goto label_3ce7a0;
        case 0x3ce7a4u: goto label_3ce7a4;
        case 0x3ce7a8u: goto label_3ce7a8;
        case 0x3ce7acu: goto label_3ce7ac;
        case 0x3ce7b0u: goto label_3ce7b0;
        case 0x3ce7b4u: goto label_3ce7b4;
        case 0x3ce7b8u: goto label_3ce7b8;
        case 0x3ce7bcu: goto label_3ce7bc;
        case 0x3ce7c0u: goto label_3ce7c0;
        case 0x3ce7c4u: goto label_3ce7c4;
        case 0x3ce7c8u: goto label_3ce7c8;
        case 0x3ce7ccu: goto label_3ce7cc;
        case 0x3ce7d0u: goto label_3ce7d0;
        case 0x3ce7d4u: goto label_3ce7d4;
        case 0x3ce7d8u: goto label_3ce7d8;
        case 0x3ce7dcu: goto label_3ce7dc;
        case 0x3ce7e0u: goto label_3ce7e0;
        case 0x3ce7e4u: goto label_3ce7e4;
        case 0x3ce7e8u: goto label_3ce7e8;
        case 0x3ce7ecu: goto label_3ce7ec;
        case 0x3ce7f0u: goto label_3ce7f0;
        case 0x3ce7f4u: goto label_3ce7f4;
        case 0x3ce7f8u: goto label_3ce7f8;
        case 0x3ce7fcu: goto label_3ce7fc;
        case 0x3ce800u: goto label_3ce800;
        case 0x3ce804u: goto label_3ce804;
        case 0x3ce808u: goto label_3ce808;
        case 0x3ce80cu: goto label_3ce80c;
        case 0x3ce810u: goto label_3ce810;
        case 0x3ce814u: goto label_3ce814;
        case 0x3ce818u: goto label_3ce818;
        case 0x3ce81cu: goto label_3ce81c;
        case 0x3ce820u: goto label_3ce820;
        case 0x3ce824u: goto label_3ce824;
        case 0x3ce828u: goto label_3ce828;
        case 0x3ce82cu: goto label_3ce82c;
        case 0x3ce830u: goto label_3ce830;
        case 0x3ce834u: goto label_3ce834;
        case 0x3ce838u: goto label_3ce838;
        case 0x3ce83cu: goto label_3ce83c;
        case 0x3ce840u: goto label_3ce840;
        case 0x3ce844u: goto label_3ce844;
        case 0x3ce848u: goto label_3ce848;
        case 0x3ce84cu: goto label_3ce84c;
        case 0x3ce850u: goto label_3ce850;
        case 0x3ce854u: goto label_3ce854;
        case 0x3ce858u: goto label_3ce858;
        case 0x3ce85cu: goto label_3ce85c;
        case 0x3ce860u: goto label_3ce860;
        case 0x3ce864u: goto label_3ce864;
        case 0x3ce868u: goto label_3ce868;
        case 0x3ce86cu: goto label_3ce86c;
        case 0x3ce870u: goto label_3ce870;
        case 0x3ce874u: goto label_3ce874;
        case 0x3ce878u: goto label_3ce878;
        case 0x3ce87cu: goto label_3ce87c;
        case 0x3ce880u: goto label_3ce880;
        case 0x3ce884u: goto label_3ce884;
        case 0x3ce888u: goto label_3ce888;
        case 0x3ce88cu: goto label_3ce88c;
        case 0x3ce890u: goto label_3ce890;
        case 0x3ce894u: goto label_3ce894;
        case 0x3ce898u: goto label_3ce898;
        case 0x3ce89cu: goto label_3ce89c;
        case 0x3ce8a0u: goto label_3ce8a0;
        case 0x3ce8a4u: goto label_3ce8a4;
        case 0x3ce8a8u: goto label_3ce8a8;
        case 0x3ce8acu: goto label_3ce8ac;
        case 0x3ce8b0u: goto label_3ce8b0;
        case 0x3ce8b4u: goto label_3ce8b4;
        case 0x3ce8b8u: goto label_3ce8b8;
        case 0x3ce8bcu: goto label_3ce8bc;
        case 0x3ce8c0u: goto label_3ce8c0;
        case 0x3ce8c4u: goto label_3ce8c4;
        case 0x3ce8c8u: goto label_3ce8c8;
        case 0x3ce8ccu: goto label_3ce8cc;
        case 0x3ce8d0u: goto label_3ce8d0;
        case 0x3ce8d4u: goto label_3ce8d4;
        case 0x3ce8d8u: goto label_3ce8d8;
        case 0x3ce8dcu: goto label_3ce8dc;
        case 0x3ce8e0u: goto label_3ce8e0;
        case 0x3ce8e4u: goto label_3ce8e4;
        case 0x3ce8e8u: goto label_3ce8e8;
        case 0x3ce8ecu: goto label_3ce8ec;
        case 0x3ce8f0u: goto label_3ce8f0;
        case 0x3ce8f4u: goto label_3ce8f4;
        case 0x3ce8f8u: goto label_3ce8f8;
        case 0x3ce8fcu: goto label_3ce8fc;
        case 0x3ce900u: goto label_3ce900;
        case 0x3ce904u: goto label_3ce904;
        case 0x3ce908u: goto label_3ce908;
        case 0x3ce90cu: goto label_3ce90c;
        case 0x3ce910u: goto label_3ce910;
        case 0x3ce914u: goto label_3ce914;
        case 0x3ce918u: goto label_3ce918;
        case 0x3ce91cu: goto label_3ce91c;
        case 0x3ce920u: goto label_3ce920;
        case 0x3ce924u: goto label_3ce924;
        case 0x3ce928u: goto label_3ce928;
        case 0x3ce92cu: goto label_3ce92c;
        default: break;
    }

    ctx->pc = 0x3ce5e8u;

label_3ce5e8:
    // 0x3ce5e8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3ce5e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_3ce5ec:
    // 0x3ce5ec: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x3ce5ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_3ce5f0:
    // 0x3ce5f0: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x3ce5f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_3ce5f4:
    // 0x3ce5f4: 0x3c100062  lui         $s0, 0x62
    ctx->pc = 0x3ce5f4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)98 << 16));
label_3ce5f8:
    // 0x3ce5f8: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x3ce5f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_3ce5fc:
    // 0x3ce5fc: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x3ce5fcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ce600:
    // 0x3ce600: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3ce600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_3ce604:
    // 0x3ce604: 0x2610e880  addiu       $s0, $s0, -0x1780
    ctx->pc = 0x3ce604u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961280));
label_3ce608:
    // 0x3ce608: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x3ce608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_3ce60c:
    // 0x3ce60c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3ce60cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3ce610:
    // 0x3ce610: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3ce610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3ce614:
    // 0x3ce614: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3ce614u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3ce618:
    // 0x3ce618: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x3ce618u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_3ce61c:
    // 0x3ce61c: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x3ce61cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_3ce620:
    // 0x3ce620: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x3ce620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
label_3ce624:
    // 0x3ce624: 0x40f809  jalr        $v0
label_3ce628:
    if (ctx->pc == 0x3CE628u) {
        ctx->pc = 0x3CE628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CE624u;
        // 0x3ce628: 0x34a50114  ori         $a1, $a1, 0x114 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)276);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CE62Cu;
        goto label_3ce62c;
    }
    ctx->pc = 0x3CE624u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3CE62Cu);
        ctx->pc = 0x3CE628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CE624u;
        // 0x3ce628: 0x34a50114  ori         $a1, $a1, 0x114 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)276);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CE624u, 0x3CE62Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3CE62Cu;
label_3ce62c:
    // 0x3ce62c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3ce62cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ce630:
    // 0x3ce630: 0x8e660014  lw          $a2, 0x14($s3)
    ctx->pc = 0x3ce630u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_3ce634:
    // 0x3ce634: 0x8e620018  lw          $v0, 0x18($s3)
    ctx->pc = 0x3ce634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_3ce638:
    // 0x3ce638: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x3ce638u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3ce63c:
    // 0x3ce63c: 0x8e650010  lw          $a1, 0x10($s3)
    ctx->pc = 0x3ce63cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_3ce640:
    // 0x3ce640: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3ce640u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3ce644:
    // 0x3ce644: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x3ce644u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_3ce648:
    // 0x3ce648: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x3ce648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_3ce64c:
    // 0x3ce64c: 0xc0f37d8  jal         func_3CDF60
label_3ce650:
    if (ctx->pc == 0x3CE650u) {
        ctx->pc = 0x3CE650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CE64Cu;
        // 0x3ce650: 0xae420008  sw          $v0, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CE654u;
        goto label_3ce654;
    }
    ctx->pc = 0x3CE64Cu;
    SET_GPR_U32(ctx, 31, 0x3CE654u);
    ctx->pc = 0x3CE650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CE64Cu;
    // 0x3ce650: 0xae420008  sw          $v0, 0x8($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CDF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CDF60u, 0x3CE64Cu, 0x3CE654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CE654u;
label_3ce654:
    // 0x3ce654: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x3ce654u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_3ce658:
    // 0x3ce658: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x3ce658u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_3ce65c:
    // 0x3ce65c: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x3ce65cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
label_3ce660:
    // 0x3ce660: 0x34a50114  ori         $a1, $a1, 0x114
    ctx->pc = 0x3ce660u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)276);
label_3ce664:
    // 0x3ce664: 0x40f809  jalr        $v0
label_3ce668:
    if (ctx->pc == 0x3CE668u) {
        ctx->pc = 0x3CE668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CE664u;
        // 0x3ce668: 0x42140  sll         $a0, $a0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CE66Cu;
        goto label_3ce66c;
    }
    ctx->pc = 0x3CE664u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3CE66Cu);
        ctx->pc = 0x3CE668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CE664u;
        // 0x3ce668: 0x42140  sll         $a0, $a0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CE664u, 0x3CE66Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3CE66Cu;
label_3ce66c:
    // 0x3ce66c: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x3ce66cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_3ce670:
    // 0x3ce670: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x3ce670u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_3ce674:
    // 0x3ce674: 0x8e030108  lw          $v1, 0x108($s0)
    ctx->pc = 0x3ce674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
label_3ce678:
    // 0x3ce678: 0x34a50114  ori         $a1, $a1, 0x114
    ctx->pc = 0x3ce678u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)276);
label_3ce67c:
    // 0x3ce67c: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x3ce67cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_3ce680:
    // 0x3ce680: 0x60f809  jalr        $v1
label_3ce684:
    if (ctx->pc == 0x3CE684u) {
        ctx->pc = 0x3CE684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CE680u;
        // 0x3ce684: 0xae420010  sw          $v0, 0x10($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CE688u;
        goto label_3ce688;
    }
    ctx->pc = 0x3CE680u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3CE688u);
        ctx->pc = 0x3CE684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CE680u;
        // 0x3ce684: 0xae420010  sw          $v0, 0x10($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CE680u, 0x3CE688u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3CE688u;
label_3ce688:
    // 0x3ce688: 0x8e460008  lw          $a2, 0x8($s2)
    ctx->pc = 0x3ce688u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_3ce68c:
    // 0x3ce68c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x3ce68cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3ce690:
    // 0x3ce690: 0x8e440010  lw          $a0, 0x10($s2)
    ctx->pc = 0x3ce690u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_3ce694:
    // 0x3ce694: 0x63140  sll         $a2, $a2, 5
    ctx->pc = 0x3ce694u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
label_3ce698:
    // 0x3ce698: 0xc0bb7e6  jal         func_2EDF98
label_3ce69c:
    if (ctx->pc == 0x3CE69Cu) {
        ctx->pc = 0x3CE69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CE698u;
        // 0x3ce69c: 0xae420014  sw          $v0, 0x14($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CE6A0u;
        goto label_3ce6a0;
    }
    ctx->pc = 0x3CE698u;
    SET_GPR_U32(ctx, 31, 0x3CE6A0u);
    ctx->pc = 0x3CE69Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CE698u;
    // 0x3ce69c: 0xae420014  sw          $v0, 0x14($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x3CE698u, 0x3CE6A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CE6A0u;
label_3ce6a0:
    // 0x3ce6a0: 0x8e460008  lw          $a2, 0x8($s2)
    ctx->pc = 0x3ce6a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_3ce6a4:
    // 0x3ce6a4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x3ce6a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3ce6a8:
    // 0x3ce6a8: 0x8e440014  lw          $a0, 0x14($s2)
    ctx->pc = 0x3ce6a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_3ce6ac:
    // 0x3ce6ac: 0xc0bb7e6  jal         func_2EDF98
label_3ce6b0:
    if (ctx->pc == 0x3CE6B0u) {
        ctx->pc = 0x3CE6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CE6ACu;
        // 0x3ce6b0: 0x63140  sll         $a2, $a2, 5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CE6B4u;
        goto label_3ce6b4;
    }
    ctx->pc = 0x3CE6ACu;
    SET_GPR_U32(ctx, 31, 0x3CE6B4u);
    ctx->pc = 0x3CE6B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CE6ACu;
    // 0x3ce6b0: 0x63140  sll         $a2, $a2, 5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x3CE6ACu, 0x3CE6B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CE6B4u;
label_3ce6b4:
    // 0x3ce6b4: 0x8e4a0008  lw          $t2, 0x8($s2)
    ctx->pc = 0x3ce6b4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_3ce6b8:
    // 0x3ce6b8: 0x11400042  beqz        $t2, . + 4 + (0x42 << 2)
label_3ce6bc:
    if (ctx->pc == 0x3CE6BCu) {
        ctx->pc = 0x3CE6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CE6B8u;
        // 0x3ce6bc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CE6C0u;
        goto label_3ce6c0;
    }
    ctx->pc = 0x3CE6B8u;
    {
        const bool branch_taken_0x3ce6b8 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CE6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CE6B8u;
        // 0x3ce6bc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ce6b8) {
            ctx->pc = 0x3CE7C4u;
            goto label_3ce7c4;
        }
    }
    ctx->pc = 0x3CE6C0u;
label_3ce6c0:
    // 0x3ce6c0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3ce6c0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ce6c4:
    // 0x3ce6c4: 0x19400016  blez        $t2, . + 4 + (0x16 << 2)
label_3ce6c8:
    if (ctx->pc == 0x3CE6C8u) {
        ctx->pc = 0x3CE6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CE6C4u;
        // 0x3ce6c8: 0x31430003  andi        $v1, $t2, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CE6CCu;
        goto label_3ce6cc;
    }
    ctx->pc = 0x3CE6C4u;
    {
        const bool branch_taken_0x3ce6c4 = (GPR_S32(ctx, 10) <= 0);
        ctx->pc = 0x3CE6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CE6C4u;
        // 0x3ce6c8: 0x31430003  andi        $v1, $t2, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ce6c4) {
            ctx->pc = 0x3CE720u;
            goto label_3ce720;
        }
    }
    ctx->pc = 0x3CE6CCu;
label_3ce6cc:
    // 0x3ce6cc: 0x5060001f  beql        $v1, $zero, . + 4 + (0x1F << 2)
label_3ce6d0:
    if (ctx->pc == 0x3CE6D0u) {
        ctx->pc = 0x3CE6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CE6CCu;
        // 0x3ce6d0: 0x8e420010  lw          $v0, 0x10($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CE6D4u;
        goto label_3ce6d4;
    }
    ctx->pc = 0x3CE6CCu;
    {
        const bool branch_taken_0x3ce6cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ce6cc) {
            ctx->pc = 0x3CE6D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3CE6CCu;
            // 0x3ce6d0: 0x8e420010  lw          $v0, 0x10($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CE74Cu;
            goto label_3ce74c;
        }
    }
    ctx->pc = 0x3CE6D4u;
label_3ce6d4:
    // 0x3ce6d4: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x3ce6d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_3ce6d8:
    // 0x3ce6d8: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
label_3ce6dc:
    if (ctx->pc == 0x3CE6DCu) {
        ctx->pc = 0x3CE6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CE6D8u;
        // 0x3ce6dc: 0x8e430010  lw          $v1, 0x10($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CE6E0u;
        goto label_3ce6e0;
    }
    ctx->pc = 0x3CE6D8u;
    {
        const bool branch_taken_0x3ce6d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ce6d8) {
            ctx->pc = 0x3CE6DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3CE6D8u;
            // 0x3ce6dc: 0x8e430010  lw          $v1, 0x10($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CE724u;
            goto label_3ce724;
        }
    }
    ctx->pc = 0x3CE6E0u;
label_3ce6e0:
    // 0x3ce6e0: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x3ce6e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_3ce6e4:
    // 0x3ce6e4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_3ce6e8:
    if (ctx->pc == 0x3CE6E8u) {
        ctx->pc = 0x3CE6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CE6E4u;
        // 0x3ce6e8: 0x8e430010  lw          $v1, 0x10($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CE6ECu;
        goto label_3ce6ec;
    }
    ctx->pc = 0x3CE6E4u;
    {
        const bool branch_taken_0x3ce6e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CE6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CE6E4u;
        // 0x3ce6e8: 0x8e430010  lw          $v1, 0x10($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ce6e4) {
            ctx->pc = 0x3CE704u;
            goto label_3ce704;
        }
    }
    ctx->pc = 0x3CE6ECu;
label_3ce6ec:
    // 0x3ce6ec: 0x24080020  addiu       $t0, $zero, 0x20
    ctx->pc = 0x3ce6ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_3ce6f0:
    // 0x3ce6f0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3ce6f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3ce6f4:
    // 0x3ce6f4: 0xac60001c  sw          $zero, 0x1C($v1)
    ctx->pc = 0x3ce6f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 0));
label_3ce6f8:
    // 0x3ce6f8: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x3ce6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_3ce6fc:
    // 0x3ce6fc: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x3ce6fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
label_3ce700:
    // 0x3ce700: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x3ce700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_3ce704:
    // 0x3ce704: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3ce704u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_3ce708:
    // 0x3ce708: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x3ce708u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
label_3ce70c:
    // 0x3ce70c: 0xac60001c  sw          $zero, 0x1C($v1)
    ctx->pc = 0x3ce70cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 0));
label_3ce710:
    // 0x3ce710: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x3ce710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_3ce714:
    // 0x3ce714: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x3ce714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
label_3ce718:
    // 0x3ce718: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x3ce718u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
label_3ce71c:
    // 0x3ce71c: 0x25080020  addiu       $t0, $t0, 0x20
    ctx->pc = 0x3ce71cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
label_3ce720:
    // 0x3ce720: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x3ce720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_3ce724:
    // 0x3ce724: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3ce724u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_3ce728:
    // 0x3ce728: 0xea482b  sltu        $t1, $a3, $t2
    ctx->pc = 0x3ce728u;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
label_3ce72c:
    // 0x3ce72c: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x3ce72cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
label_3ce730:
    // 0x3ce730: 0xac60001c  sw          $zero, 0x1C($v1)
    ctx->pc = 0x3ce730u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 0));
label_3ce734:
    // 0x3ce734: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x3ce734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_3ce738:
    // 0x3ce738: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x3ce738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
label_3ce73c:
    // 0x3ce73c: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x3ce73cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
label_3ce740:
    // 0x3ce740: 0x11200020  beqz        $t1, . + 4 + (0x20 << 2)
label_3ce744:
    if (ctx->pc == 0x3CE744u) {
        ctx->pc = 0x3CE744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CE740u;
        // 0x3ce744: 0x25080020  addiu       $t0, $t0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CE748u;
        goto label_3ce748;
    }
    ctx->pc = 0x3CE740u;
    {
        const bool branch_taken_0x3ce740 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CE744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CE740u;
        // 0x3ce744: 0x25080020  addiu       $t0, $t0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ce740) {
            ctx->pc = 0x3CE7C4u;
            goto label_3ce7c4;
        }
    }
    ctx->pc = 0x3CE748u;
label_3ce748:
    // 0x3ce748: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x3ce748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_3ce74c:
    // 0x3ce74c: 0x25040020  addiu       $a0, $t0, 0x20
    ctx->pc = 0x3ce74cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
label_3ce750:
    // 0x3ce750: 0x25050040  addiu       $a1, $t0, 0x40
    ctx->pc = 0x3ce750u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 64));
label_3ce754:
    // 0x3ce754: 0x25060060  addiu       $a2, $t0, 0x60
    ctx->pc = 0x3ce754u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 96));
label_3ce758:
    // 0x3ce758: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x3ce758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
label_3ce75c:
    // 0x3ce75c: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x3ce75cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_3ce760:
    // 0x3ce760: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x3ce760u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
label_3ce764:
    // 0x3ce764: 0xea482b  sltu        $t1, $a3, $t2
    ctx->pc = 0x3ce764u;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
label_3ce768:
    // 0x3ce768: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x3ce768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_3ce76c:
    // 0x3ce76c: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x3ce76cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
label_3ce770:
    // 0x3ce770: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x3ce770u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
label_3ce774:
    // 0x3ce774: 0x25080080  addiu       $t0, $t0, 0x80
    ctx->pc = 0x3ce774u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 128));
label_3ce778:
    // 0x3ce778: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x3ce778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_3ce77c:
    // 0x3ce77c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x3ce77cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_3ce780:
    // 0x3ce780: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x3ce780u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
label_3ce784:
    // 0x3ce784: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x3ce784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_3ce788:
    // 0x3ce788: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x3ce788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_3ce78c:
    // 0x3ce78c: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x3ce78cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
label_3ce790:
    // 0x3ce790: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x3ce790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_3ce794:
    // 0x3ce794: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x3ce794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_3ce798:
    // 0x3ce798: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x3ce798u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
label_3ce79c:
    // 0x3ce79c: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x3ce79cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_3ce7a0:
    // 0x3ce7a0: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x3ce7a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_3ce7a4:
    // 0x3ce7a4: 0xaca0001c  sw          $zero, 0x1C($a1)
    ctx->pc = 0x3ce7a4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 0));
label_3ce7a8:
    // 0x3ce7a8: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x3ce7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_3ce7ac:
    // 0x3ce7ac: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x3ce7acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_3ce7b0:
    // 0x3ce7b0: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x3ce7b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
label_3ce7b4:
    // 0x3ce7b4: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x3ce7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_3ce7b8:
    // 0x3ce7b8: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x3ce7b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_3ce7bc:
    // 0x3ce7bc: 0x1520ffe2  bnez        $t1, . + 4 + (-0x1E << 2)
label_3ce7c0:
    if (ctx->pc == 0x3CE7C0u) {
        ctx->pc = 0x3CE7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CE7BCu;
        // 0x3ce7c0: 0xacc0001c  sw          $zero, 0x1C($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CE7C4u;
        goto label_3ce7c4;
    }
    ctx->pc = 0x3CE7BCu;
    {
        const bool branch_taken_0x3ce7bc = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CE7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CE7BCu;
        // 0x3ce7c0: 0xacc0001c  sw          $zero, 0x1C($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ce7bc) {
            ctx->pc = 0x3CE748u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ce748;
        }
    }
    ctx->pc = 0x3CE7C4u;
label_3ce7c4:
    // 0x3ce7c4: 0x8e65001c  lw          $a1, 0x1C($s3)
    ctx->pc = 0x3ce7c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_3ce7c8:
    // 0x3ce7c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3ce7c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3ce7cc:
    // 0x3ce7cc: 0x2690e880  addiu       $s0, $s4, -0x1780
    ctx->pc = 0x3ce7ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 4294961280));
label_3ce7d0:
    // 0x3ce7d0: 0xc0f3750  jal         func_3CDD40
label_3ce7d4:
    if (ctx->pc == 0x3CE7D4u) {
        ctx->pc = 0x3CE7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CE7D0u;
        // 0x3ce7d4: 0x24110084  addiu       $s1, $zero, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CE7D8u;
        goto label_3ce7d8;
    }
    ctx->pc = 0x3CE7D0u;
    SET_GPR_U32(ctx, 31, 0x3CE7D8u);
    ctx->pc = 0x3CE7D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CE7D0u;
    // 0x3ce7d4: 0x24110084  addiu       $s1, $zero, 0x84 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CDD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CDD40u, 0x3CE7D0u, 0x3CE7D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CE7D8u;
label_3ce7d8:
    // 0x3ce7d8: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x3ce7d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3ce7dc:
    // 0x3ce7dc: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x3ce7dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_3ce7e0:
    // 0x3ce7e0: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x3ce7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
label_3ce7e4:
    // 0x3ce7e4: 0x34a50114  ori         $a1, $a1, 0x114
    ctx->pc = 0x3ce7e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)276);
label_3ce7e8:
    // 0x3ce7e8: 0x40f809  jalr        $v0
label_3ce7ec:
    if (ctx->pc == 0x3CE7ECu) {
        ctx->pc = 0x3CE7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CE7E8u;
        // 0x3ce7ec: 0x42100  sll         $a0, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CE7F0u;
        goto label_3ce7f0;
    }
    ctx->pc = 0x3CE7E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3CE7F0u);
        ctx->pc = 0x3CE7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CE7E8u;
        // 0x3ce7ec: 0x42100  sll         $a0, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CE7E8u, 0x3CE7F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3CE7F0u;
label_3ce7f0:
    // 0x3ce7f0: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x3ce7f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3ce7f4:
    // 0x3ce7f4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3ce7f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ce7f8:
    // 0x3ce7f8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x3ce7f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3ce7fc:
    // 0x3ce7fc: 0xae420018  sw          $v0, 0x18($s2)
    ctx->pc = 0x3ce7fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 2));
label_3ce800:
    // 0x3ce800: 0xc0bb7e6  jal         func_2EDF98
label_3ce804:
    if (ctx->pc == 0x3CE804u) {
        ctx->pc = 0x3CE804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CE800u;
        // 0x3ce804: 0x63100  sll         $a2, $a2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CE808u;
        goto label_3ce808;
    }
    ctx->pc = 0x3CE800u;
    SET_GPR_U32(ctx, 31, 0x3CE808u);
    ctx->pc = 0x3CE804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CE800u;
    // 0x3ce804: 0x63100  sll         $a2, $a2, 4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x3CE800u, 0x3CE808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CE808u;
label_3ce808:
    // 0x3ce808: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x3ce808u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3ce80c:
    // 0x3ce80c: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x3ce80cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_3ce810:
    // 0x3ce810: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x3ce810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
label_3ce814:
    // 0x3ce814: 0x910018  mult        $zero, $a0, $s1
    ctx->pc = 0x3ce814u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_3ce818:
    // 0x3ce818: 0x2012  mflo        $a0
    ctx->pc = 0x3ce818u;
    SET_GPR_U64(ctx, 4, ctx->lo);
label_3ce81c:
    // 0x3ce81c: 0x40f809  jalr        $v0
label_3ce820:
    if (ctx->pc == 0x3CE820u) {
        ctx->pc = 0x3CE820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CE81Cu;
        // 0x3ce820: 0x34a50114  ori         $a1, $a1, 0x114 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)276);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CE824u;
        goto label_3ce824;
    }
    ctx->pc = 0x3CE81Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3CE824u);
        ctx->pc = 0x3CE820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CE81Cu;
        // 0x3ce820: 0x34a50114  ori         $a1, $a1, 0x114 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)276);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CE81Cu, 0x3CE824u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3CE824u;
label_3ce824:
    // 0x3ce824: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x3ce824u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3ce828:
    // 0x3ce828: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3ce828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ce82c:
    // 0x3ce82c: 0xae42001c  sw          $v0, 0x1C($s2)
    ctx->pc = 0x3ce82cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 2));
label_3ce830:
    // 0x3ce830: 0xd10018  mult        $zero, $a2, $s1
    ctx->pc = 0x3ce830u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_3ce834:
    // 0x3ce834: 0x3012  mflo        $a2
    ctx->pc = 0x3ce834u;
    SET_GPR_U64(ctx, 6, ctx->lo);
label_3ce838:
    // 0x3ce838: 0xc0bb7e6  jal         func_2EDF98
label_3ce83c:
    if (ctx->pc == 0x3CE83Cu) {
        ctx->pc = 0x3CE83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CE838u;
        // 0x3ce83c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CE840u;
        goto label_3ce840;
    }
    ctx->pc = 0x3CE838u;
    SET_GPR_U32(ctx, 31, 0x3CE840u);
    ctx->pc = 0x3CE83Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CE838u;
    // 0x3ce83c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x3CE838u, 0x3CE840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CE840u;
label_3ce840:
    // 0x3ce840: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3ce840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3ce844:
    // 0x3ce844: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x3ce844u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_3ce848:
    // 0x3ce848: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3ce848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3ce84c:
    // 0x3ce84c: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
label_3ce850:
    if (ctx->pc == 0x3CE850u) {
        ctx->pc = 0x3CE850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CE84Cu;
        // 0x3ce850: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CE854u;
        goto label_3ce854;
    }
    ctx->pc = 0x3CE84Cu;
    {
        const bool branch_taken_0x3ce84c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CE850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CE84Cu;
        // 0x3ce850: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ce84c) {
            ctx->pc = 0x3CE900u;
            goto label_3ce900;
        }
    }
    ctx->pc = 0x3CE854u;
label_3ce854:
    // 0x3ce854: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3ce854u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ce858:
    // 0x3ce858: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3ce858u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ce85c:
    // 0x3ce85c: 0x18c00011  blez        $a2, . + 4 + (0x11 << 2)
label_3ce860:
    if (ctx->pc == 0x3CE860u) {
        ctx->pc = 0x3CE860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CE85Cu;
        // 0x3ce860: 0x30c30003  andi        $v1, $a2, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CE864u;
        goto label_3ce864;
    }
    ctx->pc = 0x3CE85Cu;
    {
        const bool branch_taken_0x3ce85c = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x3CE860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CE85Cu;
        // 0x3ce860: 0x30c30003  andi        $v1, $a2, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ce85c) {
            ctx->pc = 0x3CE8A4u;
            goto label_3ce8a4;
        }
    }
    ctx->pc = 0x3CE864u;
label_3ce864:
    // 0x3ce864: 0x50600017  beql        $v1, $zero, . + 4 + (0x17 << 2)
label_3ce868:
    if (ctx->pc == 0x3CE868u) {
        ctx->pc = 0x3CE868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CE864u;
        // 0x3ce868: 0x8e43001c  lw          $v1, 0x1C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CE86Cu;
        goto label_3ce86c;
    }
    ctx->pc = 0x3CE864u;
    {
        const bool branch_taken_0x3ce864 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ce864) {
            ctx->pc = 0x3CE868u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3CE864u;
            // 0x3ce868: 0x8e43001c  lw          $v1, 0x1C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CE8C4u;
            goto label_3ce8c4;
        }
    }
    ctx->pc = 0x3CE86Cu;
label_3ce86c:
    // 0x3ce86c: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x3ce86cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_3ce870:
    // 0x3ce870: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
label_3ce874:
    if (ctx->pc == 0x3CE874u) {
        ctx->pc = 0x3CE874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CE870u;
        // 0x3ce874: 0x8e42001c  lw          $v0, 0x1C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CE878u;
        goto label_3ce878;
    }
    ctx->pc = 0x3CE870u;
    {
        const bool branch_taken_0x3ce870 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ce870) {
            ctx->pc = 0x3CE874u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3CE870u;
            // 0x3ce874: 0x8e42001c  lw          $v0, 0x1C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CE8A8u;
            goto label_3ce8a8;
        }
    }
    ctx->pc = 0x3CE878u;
label_3ce878:
    // 0x3ce878: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x3ce878u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_3ce87c:
    // 0x3ce87c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_3ce880:
    if (ctx->pc == 0x3CE880u) {
        ctx->pc = 0x3CE880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CE87Cu;
        // 0x3ce880: 0x8e42001c  lw          $v0, 0x1C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CE884u;
        goto label_3ce884;
    }
    ctx->pc = 0x3CE87Cu;
    {
        const bool branch_taken_0x3ce87c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CE880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CE87Cu;
        // 0x3ce880: 0x8e42001c  lw          $v0, 0x1C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ce87c) {
            ctx->pc = 0x3CE894u;
            goto label_3ce894;
        }
    }
    ctx->pc = 0x3CE884u;
label_3ce884:
    // 0x3ce884: 0x2404002c  addiu       $a0, $zero, 0x2C
    ctx->pc = 0x3ce884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
label_3ce888:
    // 0x3ce888: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3ce888u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3ce88c:
    // 0x3ce88c: 0xac400028  sw          $zero, 0x28($v0)
    ctx->pc = 0x3ce88cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
label_3ce890:
    // 0x3ce890: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x3ce890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_3ce894:
    // 0x3ce894: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3ce894u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_3ce898:
    // 0x3ce898: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x3ce898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_3ce89c:
    // 0x3ce89c: 0xac400028  sw          $zero, 0x28($v0)
    ctx->pc = 0x3ce89cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
label_3ce8a0:
    // 0x3ce8a0: 0x2484002c  addiu       $a0, $a0, 0x2C
    ctx->pc = 0x3ce8a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 44));
label_3ce8a4:
    // 0x3ce8a4: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x3ce8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_3ce8a8:
    // 0x3ce8a8: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3ce8a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_3ce8ac:
    // 0x3ce8ac: 0xe6282b  sltu        $a1, $a3, $a2
    ctx->pc = 0x3ce8acu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_3ce8b0:
    // 0x3ce8b0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x3ce8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_3ce8b4:
    // 0x3ce8b4: 0xac400028  sw          $zero, 0x28($v0)
    ctx->pc = 0x3ce8b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
label_3ce8b8:
    // 0x3ce8b8: 0x10a00011  beqz        $a1, . + 4 + (0x11 << 2)
label_3ce8bc:
    if (ctx->pc == 0x3CE8BCu) {
        ctx->pc = 0x3CE8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CE8B8u;
        // 0x3ce8bc: 0x2484002c  addiu       $a0, $a0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 44));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CE8C0u;
        goto label_3ce8c0;
    }
    ctx->pc = 0x3CE8B8u;
    {
        const bool branch_taken_0x3ce8b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CE8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CE8B8u;
        // 0x3ce8bc: 0x2484002c  addiu       $a0, $a0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ce8b8) {
            ctx->pc = 0x3CE900u;
            goto label_3ce900;
        }
    }
    ctx->pc = 0x3CE8C0u;
label_3ce8c0:
    // 0x3ce8c0: 0x8e43001c  lw          $v1, 0x1C($s2)
    ctx->pc = 0x3ce8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_3ce8c4:
    // 0x3ce8c4: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x3ce8c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_3ce8c8:
    // 0x3ce8c8: 0xe6282b  sltu        $a1, $a3, $a2
    ctx->pc = 0x3ce8c8u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_3ce8cc:
    // 0x3ce8cc: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x3ce8ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_3ce8d0:
    // 0x3ce8d0: 0xac600028  sw          $zero, 0x28($v1)
    ctx->pc = 0x3ce8d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 0));
label_3ce8d4:
    // 0x3ce8d4: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x3ce8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_3ce8d8:
    // 0x3ce8d8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x3ce8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_3ce8dc:
    // 0x3ce8dc: 0xac400054  sw          $zero, 0x54($v0)
    ctx->pc = 0x3ce8dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 84), GPR_U32(ctx, 0));
label_3ce8e0:
    // 0x3ce8e0: 0x8e43001c  lw          $v1, 0x1C($s2)
    ctx->pc = 0x3ce8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_3ce8e4:
    // 0x3ce8e4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x3ce8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_3ce8e8:
    // 0x3ce8e8: 0xac600080  sw          $zero, 0x80($v1)
    ctx->pc = 0x3ce8e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 0));
label_3ce8ec:
    // 0x3ce8ec: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x3ce8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_3ce8f0:
    // 0x3ce8f0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x3ce8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_3ce8f4:
    // 0x3ce8f4: 0xac4000ac  sw          $zero, 0xAC($v0)
    ctx->pc = 0x3ce8f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 172), GPR_U32(ctx, 0));
label_3ce8f8:
    // 0x3ce8f8: 0x14a0fff1  bnez        $a1, . + 4 + (-0xF << 2)
label_3ce8fc:
    if (ctx->pc == 0x3CE8FCu) {
        ctx->pc = 0x3CE8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CE8F8u;
        // 0x3ce8fc: 0x248400b0  addiu       $a0, $a0, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CE900u;
        goto label_3ce900;
    }
    ctx->pc = 0x3CE8F8u;
    {
        const bool branch_taken_0x3ce8f8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CE8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CE8F8u;
        // 0x3ce8fc: 0x248400b0  addiu       $a0, $a0, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ce8f8) {
            ctx->pc = 0x3CE8C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ce8c0;
        }
    }
    ctx->pc = 0x3CE900u;
label_3ce900:
    // 0x3ce900: 0x8e65001c  lw          $a1, 0x1C($s3)
    ctx->pc = 0x3ce900u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_3ce904:
    // 0x3ce904: 0xc0f389a  jal         func_3CE268
label_3ce908:
    if (ctx->pc == 0x3CE908u) {
        ctx->pc = 0x3CE908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CE904u;
        // 0x3ce908: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CE90Cu;
        goto label_3ce90c;
    }
    ctx->pc = 0x3CE904u;
    SET_GPR_U32(ctx, 31, 0x3CE90Cu);
    ctx->pc = 0x3CE908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CE904u;
    // 0x3ce908: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CE268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CE268u, 0x3CE904u, 0x3CE90Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CE90Cu;
label_3ce90c:
    // 0x3ce90c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x3ce90cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3ce910:
    // 0x3ce910: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x3ce910u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3ce914:
    // 0x3ce914: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x3ce914u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3ce918:
    // 0x3ce918: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3ce918u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3ce91c:
    // 0x3ce91c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x3ce91cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3ce920:
    // 0x3ce920: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x3ce920u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3ce924:
    // 0x3ce924: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3ce924u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3ce928:
    // 0x3ce928: 0x3e00008  jr          $ra
label_3ce92c:
    if (ctx->pc == 0x3CE92Cu) {
        ctx->pc = 0x3CE92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CE928u;
        // 0x3ce92c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CE930u;
        goto label_fallthrough_0x3ce928;
    }
    ctx->pc = 0x3CE928u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CE92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CE928u;
        // 0x3ce92c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CE928u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3ce928:
    ctx->pc = 0x3CE930u;
}
