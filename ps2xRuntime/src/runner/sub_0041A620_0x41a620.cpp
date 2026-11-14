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

// Function: sub_0041A620
// Address: 0x41a620 - 0x41aa00
void sub_0041A620_0x41a620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041A620_0x41a620");
#endif

    switch (ctx->pc) {
        case 0x41a620u: goto label_41a620;
        case 0x41a624u: goto label_41a624;
        case 0x41a628u: goto label_41a628;
        case 0x41a62cu: goto label_41a62c;
        case 0x41a630u: goto label_41a630;
        case 0x41a634u: goto label_41a634;
        case 0x41a638u: goto label_41a638;
        case 0x41a63cu: goto label_41a63c;
        case 0x41a640u: goto label_41a640;
        case 0x41a644u: goto label_41a644;
        case 0x41a648u: goto label_41a648;
        case 0x41a64cu: goto label_41a64c;
        case 0x41a650u: goto label_41a650;
        case 0x41a654u: goto label_41a654;
        case 0x41a658u: goto label_41a658;
        case 0x41a65cu: goto label_41a65c;
        case 0x41a660u: goto label_41a660;
        case 0x41a664u: goto label_41a664;
        case 0x41a668u: goto label_41a668;
        case 0x41a66cu: goto label_41a66c;
        case 0x41a670u: goto label_41a670;
        case 0x41a674u: goto label_41a674;
        case 0x41a678u: goto label_41a678;
        case 0x41a67cu: goto label_41a67c;
        case 0x41a680u: goto label_41a680;
        case 0x41a684u: goto label_41a684;
        case 0x41a688u: goto label_41a688;
        case 0x41a68cu: goto label_41a68c;
        case 0x41a690u: goto label_41a690;
        case 0x41a694u: goto label_41a694;
        case 0x41a698u: goto label_41a698;
        case 0x41a69cu: goto label_41a69c;
        case 0x41a6a0u: goto label_41a6a0;
        case 0x41a6a4u: goto label_41a6a4;
        case 0x41a6a8u: goto label_41a6a8;
        case 0x41a6acu: goto label_41a6ac;
        case 0x41a6b0u: goto label_41a6b0;
        case 0x41a6b4u: goto label_41a6b4;
        case 0x41a6b8u: goto label_41a6b8;
        case 0x41a6bcu: goto label_41a6bc;
        case 0x41a6c0u: goto label_41a6c0;
        case 0x41a6c4u: goto label_41a6c4;
        case 0x41a6c8u: goto label_41a6c8;
        case 0x41a6ccu: goto label_41a6cc;
        case 0x41a6d0u: goto label_41a6d0;
        case 0x41a6d4u: goto label_41a6d4;
        case 0x41a6d8u: goto label_41a6d8;
        case 0x41a6dcu: goto label_41a6dc;
        case 0x41a6e0u: goto label_41a6e0;
        case 0x41a6e4u: goto label_41a6e4;
        case 0x41a6e8u: goto label_41a6e8;
        case 0x41a6ecu: goto label_41a6ec;
        case 0x41a6f0u: goto label_41a6f0;
        case 0x41a6f4u: goto label_41a6f4;
        case 0x41a6f8u: goto label_41a6f8;
        case 0x41a6fcu: goto label_41a6fc;
        case 0x41a700u: goto label_41a700;
        case 0x41a704u: goto label_41a704;
        case 0x41a708u: goto label_41a708;
        case 0x41a70cu: goto label_41a70c;
        case 0x41a710u: goto label_41a710;
        case 0x41a714u: goto label_41a714;
        case 0x41a718u: goto label_41a718;
        case 0x41a71cu: goto label_41a71c;
        case 0x41a720u: goto label_41a720;
        case 0x41a724u: goto label_41a724;
        case 0x41a728u: goto label_41a728;
        case 0x41a72cu: goto label_41a72c;
        case 0x41a730u: goto label_41a730;
        case 0x41a734u: goto label_41a734;
        case 0x41a738u: goto label_41a738;
        case 0x41a73cu: goto label_41a73c;
        case 0x41a740u: goto label_41a740;
        case 0x41a744u: goto label_41a744;
        case 0x41a748u: goto label_41a748;
        case 0x41a74cu: goto label_41a74c;
        case 0x41a750u: goto label_41a750;
        case 0x41a754u: goto label_41a754;
        case 0x41a758u: goto label_41a758;
        case 0x41a75cu: goto label_41a75c;
        case 0x41a760u: goto label_41a760;
        case 0x41a764u: goto label_41a764;
        case 0x41a768u: goto label_41a768;
        case 0x41a76cu: goto label_41a76c;
        case 0x41a770u: goto label_41a770;
        case 0x41a774u: goto label_41a774;
        case 0x41a778u: goto label_41a778;
        case 0x41a77cu: goto label_41a77c;
        case 0x41a780u: goto label_41a780;
        case 0x41a784u: goto label_41a784;
        case 0x41a788u: goto label_41a788;
        case 0x41a78cu: goto label_41a78c;
        case 0x41a790u: goto label_41a790;
        case 0x41a794u: goto label_41a794;
        case 0x41a798u: goto label_41a798;
        case 0x41a79cu: goto label_41a79c;
        case 0x41a7a0u: goto label_41a7a0;
        case 0x41a7a4u: goto label_41a7a4;
        case 0x41a7a8u: goto label_41a7a8;
        case 0x41a7acu: goto label_41a7ac;
        case 0x41a7b0u: goto label_41a7b0;
        case 0x41a7b4u: goto label_41a7b4;
        case 0x41a7b8u: goto label_41a7b8;
        case 0x41a7bcu: goto label_41a7bc;
        case 0x41a7c0u: goto label_41a7c0;
        case 0x41a7c4u: goto label_41a7c4;
        case 0x41a7c8u: goto label_41a7c8;
        case 0x41a7ccu: goto label_41a7cc;
        case 0x41a7d0u: goto label_41a7d0;
        case 0x41a7d4u: goto label_41a7d4;
        case 0x41a7d8u: goto label_41a7d8;
        case 0x41a7dcu: goto label_41a7dc;
        case 0x41a7e0u: goto label_41a7e0;
        case 0x41a7e4u: goto label_41a7e4;
        case 0x41a7e8u: goto label_41a7e8;
        case 0x41a7ecu: goto label_41a7ec;
        case 0x41a7f0u: goto label_41a7f0;
        case 0x41a7f4u: goto label_41a7f4;
        case 0x41a7f8u: goto label_41a7f8;
        case 0x41a7fcu: goto label_41a7fc;
        case 0x41a800u: goto label_41a800;
        case 0x41a804u: goto label_41a804;
        case 0x41a808u: goto label_41a808;
        case 0x41a80cu: goto label_41a80c;
        case 0x41a810u: goto label_41a810;
        case 0x41a814u: goto label_41a814;
        case 0x41a818u: goto label_41a818;
        case 0x41a81cu: goto label_41a81c;
        case 0x41a820u: goto label_41a820;
        case 0x41a824u: goto label_41a824;
        case 0x41a828u: goto label_41a828;
        case 0x41a82cu: goto label_41a82c;
        case 0x41a830u: goto label_41a830;
        case 0x41a834u: goto label_41a834;
        case 0x41a838u: goto label_41a838;
        case 0x41a83cu: goto label_41a83c;
        case 0x41a840u: goto label_41a840;
        case 0x41a844u: goto label_41a844;
        case 0x41a848u: goto label_41a848;
        case 0x41a84cu: goto label_41a84c;
        case 0x41a850u: goto label_41a850;
        case 0x41a854u: goto label_41a854;
        case 0x41a858u: goto label_41a858;
        case 0x41a85cu: goto label_41a85c;
        case 0x41a860u: goto label_41a860;
        case 0x41a864u: goto label_41a864;
        case 0x41a868u: goto label_41a868;
        case 0x41a86cu: goto label_41a86c;
        case 0x41a870u: goto label_41a870;
        case 0x41a874u: goto label_41a874;
        case 0x41a878u: goto label_41a878;
        case 0x41a87cu: goto label_41a87c;
        case 0x41a880u: goto label_41a880;
        case 0x41a884u: goto label_41a884;
        case 0x41a888u: goto label_41a888;
        case 0x41a88cu: goto label_41a88c;
        case 0x41a890u: goto label_41a890;
        case 0x41a894u: goto label_41a894;
        case 0x41a898u: goto label_41a898;
        case 0x41a89cu: goto label_41a89c;
        case 0x41a8a0u: goto label_41a8a0;
        case 0x41a8a4u: goto label_41a8a4;
        case 0x41a8a8u: goto label_41a8a8;
        case 0x41a8acu: goto label_41a8ac;
        case 0x41a8b0u: goto label_41a8b0;
        case 0x41a8b4u: goto label_41a8b4;
        case 0x41a8b8u: goto label_41a8b8;
        case 0x41a8bcu: goto label_41a8bc;
        case 0x41a8c0u: goto label_41a8c0;
        case 0x41a8c4u: goto label_41a8c4;
        case 0x41a8c8u: goto label_41a8c8;
        case 0x41a8ccu: goto label_41a8cc;
        case 0x41a8d0u: goto label_41a8d0;
        case 0x41a8d4u: goto label_41a8d4;
        case 0x41a8d8u: goto label_41a8d8;
        case 0x41a8dcu: goto label_41a8dc;
        case 0x41a8e0u: goto label_41a8e0;
        case 0x41a8e4u: goto label_41a8e4;
        case 0x41a8e8u: goto label_41a8e8;
        case 0x41a8ecu: goto label_41a8ec;
        case 0x41a8f0u: goto label_41a8f0;
        case 0x41a8f4u: goto label_41a8f4;
        case 0x41a8f8u: goto label_41a8f8;
        case 0x41a8fcu: goto label_41a8fc;
        case 0x41a900u: goto label_41a900;
        case 0x41a904u: goto label_41a904;
        case 0x41a908u: goto label_41a908;
        case 0x41a90cu: goto label_41a90c;
        case 0x41a910u: goto label_41a910;
        case 0x41a914u: goto label_41a914;
        case 0x41a918u: goto label_41a918;
        case 0x41a91cu: goto label_41a91c;
        case 0x41a920u: goto label_41a920;
        case 0x41a924u: goto label_41a924;
        case 0x41a928u: goto label_41a928;
        case 0x41a92cu: goto label_41a92c;
        case 0x41a930u: goto label_41a930;
        case 0x41a934u: goto label_41a934;
        case 0x41a938u: goto label_41a938;
        case 0x41a93cu: goto label_41a93c;
        case 0x41a940u: goto label_41a940;
        case 0x41a944u: goto label_41a944;
        case 0x41a948u: goto label_41a948;
        case 0x41a94cu: goto label_41a94c;
        case 0x41a950u: goto label_41a950;
        case 0x41a954u: goto label_41a954;
        case 0x41a958u: goto label_41a958;
        case 0x41a95cu: goto label_41a95c;
        case 0x41a960u: goto label_41a960;
        case 0x41a964u: goto label_41a964;
        case 0x41a968u: goto label_41a968;
        case 0x41a96cu: goto label_41a96c;
        case 0x41a970u: goto label_41a970;
        case 0x41a974u: goto label_41a974;
        case 0x41a978u: goto label_41a978;
        case 0x41a97cu: goto label_41a97c;
        case 0x41a980u: goto label_41a980;
        case 0x41a984u: goto label_41a984;
        case 0x41a988u: goto label_41a988;
        case 0x41a98cu: goto label_41a98c;
        case 0x41a990u: goto label_41a990;
        case 0x41a994u: goto label_41a994;
        case 0x41a998u: goto label_41a998;
        case 0x41a99cu: goto label_41a99c;
        case 0x41a9a0u: goto label_41a9a0;
        case 0x41a9a4u: goto label_41a9a4;
        case 0x41a9a8u: goto label_41a9a8;
        case 0x41a9acu: goto label_41a9ac;
        case 0x41a9b0u: goto label_41a9b0;
        case 0x41a9b4u: goto label_41a9b4;
        case 0x41a9b8u: goto label_41a9b8;
        case 0x41a9bcu: goto label_41a9bc;
        case 0x41a9c0u: goto label_41a9c0;
        case 0x41a9c4u: goto label_41a9c4;
        case 0x41a9c8u: goto label_41a9c8;
        case 0x41a9ccu: goto label_41a9cc;
        case 0x41a9d0u: goto label_41a9d0;
        case 0x41a9d4u: goto label_41a9d4;
        case 0x41a9d8u: goto label_41a9d8;
        case 0x41a9dcu: goto label_41a9dc;
        case 0x41a9e0u: goto label_41a9e0;
        case 0x41a9e4u: goto label_41a9e4;
        case 0x41a9e8u: goto label_41a9e8;
        case 0x41a9ecu: goto label_41a9ec;
        case 0x41a9f0u: goto label_41a9f0;
        case 0x41a9f4u: goto label_41a9f4;
        case 0x41a9f8u: goto label_41a9f8;
        case 0x41a9fcu: goto label_41a9fc;
        default: break;
    }

    ctx->pc = 0x41a620u;

label_41a620:
    // 0x41a620: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x41a620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_41a624:
    // 0x41a624: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x41a624u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_41a628:
    // 0x41a628: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x41a628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_41a62c:
    // 0x41a62c: 0x8f82be08  lw          $v0, -0x41F8($gp)
    ctx->pc = 0x41a62cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950408)));
label_41a630:
    // 0x41a630: 0x2470e880  addiu       $s0, $v1, -0x1780
    ctx->pc = 0x41a630u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961280));
label_41a634:
    // 0x41a634: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x41a634u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_41a638:
    // 0x41a638: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x41a638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_41a63c:
    // 0x41a63c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x41a63cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_41a640:
    // 0x41a640: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x41a640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_41a644:
    // 0x41a644: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x41a644u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_41a648:
    // 0x41a648: 0x8c440210  lw          $a0, 0x210($v0)
    ctx->pc = 0x41a648u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 528)));
label_41a64c:
    // 0x41a64c: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_41a650:
    if (ctx->pc == 0x41A650u) {
        ctx->pc = 0x41A650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A64Cu;
        // 0x41a650: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A654u;
        goto label_41a654;
    }
    ctx->pc = 0x41A64Cu;
    {
        const bool branch_taken_0x41a64c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x41A650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A64Cu;
        // 0x41a650: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41a64c) {
            ctx->pc = 0x41A670u;
            goto label_41a670;
        }
    }
    ctx->pc = 0x41A654u;
label_41a654:
    // 0x41a654: 0x8e03010c  lw          $v1, 0x10C($s0)
    ctx->pc = 0x41a654u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_41a658:
    // 0x41a658: 0x60f809  jalr        $v1
label_41a65c:
    if (ctx->pc == 0x41A65Cu) {
        ctx->pc = 0x41A660u;
        goto label_41a660;
    }
    ctx->pc = 0x41A658u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x41A660u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41A658u, 0x41A660u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41A660u;
label_41a660:
    // 0x41a660: 0x8f82be08  lw          $v0, -0x41F8($gp)
    ctx->pc = 0x41a660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950408)));
label_41a664:
    // 0x41a664: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x41a664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_41a668:
    // 0x41a668: 0xac400214  sw          $zero, 0x214($v0)
    ctx->pc = 0x41a668u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 532), GPR_U32(ctx, 0));
label_41a66c:
    // 0x41a66c: 0xac400210  sw          $zero, 0x210($v0)
    ctx->pc = 0x41a66cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 528), GPR_U32(ctx, 0));
label_41a670:
    // 0x41a670: 0x8f82be08  lw          $v0, -0x41F8($gp)
    ctx->pc = 0x41a670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950408)));
label_41a674:
    // 0x41a674: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x41a674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_41a678:
    // 0x41a678: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x41a678u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_41a67c:
    // 0x41a67c: 0x50800011  beql        $a0, $zero, . + 4 + (0x11 << 2)
label_41a680:
    if (ctx->pc == 0x41A680u) {
        ctx->pc = 0x41A680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A67Cu;
        // 0x41a680: 0x8f84be08  lw          $a0, -0x41F8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950408)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A684u;
        goto label_41a684;
    }
    ctx->pc = 0x41A67Cu;
    {
        const bool branch_taken_0x41a67c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x41a67c) {
            ctx->pc = 0x41A680u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41A67Cu;
            // 0x41a680: 0x8f84be08  lw          $a0, -0x41F8($gp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950408)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x41A6C4u;
            goto label_41a6c4;
        }
    }
    ctx->pc = 0x41A684u;
label_41a684:
    // 0x41a684: 0x8e03010c  lw          $v1, 0x10C($s0)
    ctx->pc = 0x41a684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_41a688:
    // 0x41a688: 0x60f809  jalr        $v1
label_41a68c:
    if (ctx->pc == 0x41A68Cu) {
        ctx->pc = 0x41A690u;
        goto label_41a690;
    }
    ctx->pc = 0x41A688u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x41A690u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41A688u, 0x41A690u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41A690u;
label_41a690:
    // 0x41a690: 0x8f82be08  lw          $v0, -0x41F8($gp)
    ctx->pc = 0x41a690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950408)));
label_41a694:
    // 0x41a694: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x41a694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_41a698:
    // 0x41a698: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x41a698u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
label_41a69c:
    // 0x41a69c: 0x10000008  b           . + 4 + (0x8 << 2)
label_41a6a0:
    if (ctx->pc == 0x41A6A0u) {
        ctx->pc = 0x41A6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A69Cu;
        // 0x41a6a0: 0xac400004  sw          $zero, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A6A4u;
        goto label_41a6a4;
    }
    ctx->pc = 0x41A69Cu;
    {
        const bool branch_taken_0x41a69c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41A6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A69Cu;
        // 0x41a6a0: 0xac400004  sw          $zero, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41a69c) {
            ctx->pc = 0x41A6C0u;
            goto label_41a6c0;
        }
    }
    ctx->pc = 0x41A6A4u;
label_41a6a4:
    // 0x41a6a4: 0x0  nop
    ctx->pc = 0x41a6a4u;
    // NOP
label_41a6a8:
    // 0x41a6a8: 0x8e02011c  lw          $v0, 0x11C($s0)
    ctx->pc = 0x41a6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
label_41a6ac:
    // 0x41a6ac: 0x8c65021c  lw          $a1, 0x21C($v1)
    ctx->pc = 0x41a6acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 540)));
label_41a6b0:
    // 0x41a6b0: 0x8c640218  lw          $a0, 0x218($v1)
    ctx->pc = 0x41a6b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 536)));
label_41a6b4:
    // 0x41a6b4: 0x8ca60030  lw          $a2, 0x30($a1)
    ctx->pc = 0x41a6b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
label_41a6b8:
    // 0x41a6b8: 0x40f809  jalr        $v0
label_41a6bc:
    if (ctx->pc == 0x41A6BCu) {
        ctx->pc = 0x41A6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A6B8u;
        // 0x41a6bc: 0xac66021c  sw          $a2, 0x21C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 540), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A6C0u;
        goto label_41a6c0;
    }
    ctx->pc = 0x41A6B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x41A6C0u);
        ctx->pc = 0x41A6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A6B8u;
        // 0x41a6bc: 0xac66021c  sw          $a2, 0x21C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 540), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41A6B8u, 0x41A6C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41A6C0u;
label_41a6c0:
    // 0x41a6c0: 0x8f84be08  lw          $a0, -0x41F8($gp)
    ctx->pc = 0x41a6c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950408)));
label_41a6c4:
    // 0x41a6c4: 0x901021  addu        $v0, $a0, $s0
    ctx->pc = 0x41a6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_41a6c8:
    // 0x41a6c8: 0x8c43021c  lw          $v1, 0x21C($v0)
    ctx->pc = 0x41a6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 540)));
label_41a6cc:
    // 0x41a6cc: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
label_41a6d0:
    if (ctx->pc == 0x41A6D0u) {
        ctx->pc = 0x41A6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A6CCu;
        // 0x41a6d0: 0x901821  addu        $v1, $a0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A6D4u;
        goto label_41a6d4;
    }
    ctx->pc = 0x41A6CCu;
    {
        const bool branch_taken_0x41a6cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x41A6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A6CCu;
        // 0x41a6d0: 0x901821  addu        $v1, $a0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41a6cc) {
            ctx->pc = 0x41A6A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_41a6a8;
        }
    }
    ctx->pc = 0x41A6D4u;
label_41a6d4:
    // 0x41a6d4: 0x8f82be08  lw          $v0, -0x41F8($gp)
    ctx->pc = 0x41a6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950408)));
label_41a6d8:
    // 0x41a6d8: 0x2650e880  addiu       $s0, $s2, -0x1780
    ctx->pc = 0x41a6d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4294961280));
label_41a6dc:
    // 0x41a6dc: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x41a6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_41a6e0:
    // 0x41a6e0: 0x8c440218  lw          $a0, 0x218($v0)
    ctx->pc = 0x41a6e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 536)));
label_41a6e4:
    // 0x41a6e4: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_41a6e8:
    if (ctx->pc == 0x41A6E8u) {
        ctx->pc = 0x41A6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A6E4u;
        // 0x41a6e8: 0x8f82be08  lw          $v0, -0x41F8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950408)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A6ECu;
        goto label_41a6ec;
    }
    ctx->pc = 0x41A6E4u;
    {
        const bool branch_taken_0x41a6e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x41A6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A6E4u;
        // 0x41a6e8: 0x8f82be08  lw          $v0, -0x41F8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950408)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41a6e4) {
            ctx->pc = 0x41A704u;
            goto label_41a704;
        }
    }
    ctx->pc = 0x41A6ECu;
label_41a6ec:
    // 0x41a6ec: 0xc104284  jal         func_410A10
label_41a6f0:
    if (ctx->pc == 0x41A6F0u) {
        ctx->pc = 0x41A6F4u;
        goto label_41a6f4;
    }
    ctx->pc = 0x41A6ECu;
    SET_GPR_U32(ctx, 31, 0x41A6F4u);
    ctx->pc = 0x410A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x410A10u, 0x41A6ECu, 0x41A6F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41A6F4u;
label_41a6f4:
    // 0x41a6f4: 0x8f83be08  lw          $v1, -0x41F8($gp)
    ctx->pc = 0x41a6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950408)));
label_41a6f8:
    // 0x41a6f8: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x41a6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_41a6fc:
    // 0x41a6fc: 0xac600218  sw          $zero, 0x218($v1)
    ctx->pc = 0x41a6fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 536), GPR_U32(ctx, 0));
label_41a700:
    // 0x41a700: 0x8f82be08  lw          $v0, -0x41F8($gp)
    ctx->pc = 0x41a700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950408)));
label_41a704:
    // 0x41a704: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x41a704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_41a708:
    // 0x41a708: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x41a708u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_41a70c:
    // 0x41a70c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_41a710:
    if (ctx->pc == 0x41A710u) {
        ctx->pc = 0x41A714u;
        goto label_41a714;
    }
    ctx->pc = 0x41A70Cu;
    {
        const bool branch_taken_0x41a70c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x41a70c) {
            ctx->pc = 0x41A728u;
            goto label_41a728;
        }
    }
    ctx->pc = 0x41A714u;
label_41a714:
    // 0x41a714: 0xc104284  jal         func_410A10
label_41a718:
    if (ctx->pc == 0x41A718u) {
        ctx->pc = 0x41A71Cu;
        goto label_41a71c;
    }
    ctx->pc = 0x41A714u;
    SET_GPR_U32(ctx, 31, 0x41A71Cu);
    ctx->pc = 0x410A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x410A10u, 0x41A714u, 0x41A71Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41A71Cu;
label_41a71c:
    // 0x41a71c: 0x8f83be08  lw          $v1, -0x41F8($gp)
    ctx->pc = 0x41a71cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950408)));
label_41a720:
    // 0x41a720: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x41a720u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_41a724:
    // 0x41a724: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x41a724u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_41a728:
    // 0x41a728: 0x8f83be0c  lw          $v1, -0x41F4($gp)
    ctx->pc = 0x41a728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950412)));
label_41a72c:
    // 0x41a72c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x41a72cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_41a730:
    // 0x41a730: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x41a730u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_41a734:
    // 0x41a734: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x41a734u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_41a738:
    // 0x41a738: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x41a738u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_41a73c:
    // 0x41a73c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x41a73cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_41a740:
    // 0x41a740: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x41a740u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_41a744:
    // 0x41a744: 0xaf83be0c  sw          $v1, -0x41F4($gp)
    ctx->pc = 0x41a744u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950412), GPR_U32(ctx, 3));
label_41a748:
    // 0x41a748: 0x3e00008  jr          $ra
label_41a74c:
    if (ctx->pc == 0x41A74Cu) {
        ctx->pc = 0x41A74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A748u;
        // 0x41a74c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A750u;
        goto label_41a750;
    }
    ctx->pc = 0x41A748u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41A74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A748u;
        // 0x41a74c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41A748u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41A750u;
label_41a750:
    // 0x41a750: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x41a750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_41a754:
    // 0x41a754: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x41a754u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
label_41a758:
    // 0x41a758: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x41a758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
label_41a75c:
    // 0x41a75c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x41a75cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_41a760:
    // 0x41a760: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x41a760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
label_41a764:
    // 0x41a764: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x41a764u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_41a768:
    // 0x41a768: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x41a768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
label_41a76c:
    // 0x41a76c: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x41a76cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
label_41a770:
    // 0x41a770: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x41a770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
label_41a774:
    // 0x41a774: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x41a774u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_41a778:
    // 0x41a778: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x41a778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_41a77c:
    // 0x41a77c: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x41a77cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
label_41a780:
    // 0x41a780: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x41a780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_41a784:
    // 0x41a784: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x41a784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_41a788:
    // 0x41a788: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x41a788u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_41a78c:
    // 0x41a78c: 0x1040008d  beqz        $v0, . + 4 + (0x8D << 2)
label_41a790:
    if (ctx->pc == 0x41A790u) {
        ctx->pc = 0x41A790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A78Cu;
        // 0x41a790: 0xc0f02d  daddu       $fp, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A794u;
        goto label_41a794;
    }
    ctx->pc = 0x41A78Cu;
    {
        const bool branch_taken_0x41a78c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41A790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A78Cu;
        // 0x41a790: 0xc0f02d  daddu       $fp, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41a78c) {
            ctx->pc = 0x41A9C4u;
            goto label_41a9c4;
        }
    }
    ctx->pc = 0x41A794u;
label_41a794:
    // 0x41a794: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x41a794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_41a798:
    // 0x41a798: 0x1040008a  beqz        $v0, . + 4 + (0x8A << 2)
label_41a79c:
    if (ctx->pc == 0x41A79Cu) {
        ctx->pc = 0x41A79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A798u;
        // 0x41a79c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A7A0u;
        goto label_41a7a0;
    }
    ctx->pc = 0x41A798u;
    {
        const bool branch_taken_0x41a798 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41A79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A798u;
        // 0x41a79c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41a798) {
            ctx->pc = 0x41A9C4u;
            goto label_41a9c4;
        }
    }
    ctx->pc = 0x41A7A0u;
label_41a7a0:
    // 0x41a7a0: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x41a7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_41a7a4:
    // 0x41a7a4: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_41a7a8:
    if (ctx->pc == 0x41A7A8u) {
        ctx->pc = 0x41A7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A7A4u;
        // 0x41a7a8: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A7ACu;
        goto label_41a7ac;
    }
    ctx->pc = 0x41A7A4u;
    {
        const bool branch_taken_0x41a7a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x41A7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A7A4u;
        // 0x41a7a8: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41a7a4) {
            ctx->pc = 0x41A7B8u;
            goto label_41a7b8;
        }
    }
    ctx->pc = 0x41A7ACu;
label_41a7ac:
    // 0x41a7ac: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x41a7acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_41a7b0:
    // 0x41a7b0: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_41a7b4:
    if (ctx->pc == 0x41A7B4u) {
        ctx->pc = 0x41A7B8u;
        goto label_41a7b8;
    }
    ctx->pc = 0x41A7B0u;
    {
        const bool branch_taken_0x41a7b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x41a7b0) {
            ctx->pc = 0x41A7BCu;
            goto label_41a7bc;
        }
    }
    ctx->pc = 0x41A7B8u;
label_41a7b8:
    // 0x41a7b8: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x41a7b8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_41a7bc:
    // 0x41a7bc: 0x12a00006  beqz        $s5, . + 4 + (0x6 << 2)
label_41a7c0:
    if (ctx->pc == 0x41A7C0u) {
        ctx->pc = 0x41A7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A7BCu;
        // 0x41a7c0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A7C4u;
        goto label_41a7c4;
    }
    ctx->pc = 0x41A7BCu;
    {
        const bool branch_taken_0x41a7bc = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x41A7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A7BCu;
        // 0x41a7c0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41a7bc) {
            ctx->pc = 0x41A7D8u;
            goto label_41a7d8;
        }
    }
    ctx->pc = 0x41A7C4u;
label_41a7c4:
    // 0x41a7c4: 0x621014  dsllv       $v0, $v0, $v1
    ctx->pc = 0x41a7c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 3) & 0x3F));
label_41a7c8:
    // 0x41a7c8: 0x2983c  dsll32      $s3, $v0, 0
    ctx->pc = 0x41a7c8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) << (32 + 0));
label_41a7cc:
    // 0x41a7cc: 0x13983f  dsra32      $s3, $s3, 0
    ctx->pc = 0x41a7ccu;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 0));
label_41a7d0:
    // 0x41a7d0: 0x10000003  b           . + 4 + (0x3 << 2)
label_41a7d4:
    if (ctx->pc == 0x41A7D4u) {
        ctx->pc = 0x41A7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A7D0u;
        // 0x41a7d4: 0x24620007  addiu       $v0, $v1, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A7D8u;
        goto label_41a7d8;
    }
    ctx->pc = 0x41A7D0u;
    {
        const bool branch_taken_0x41a7d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41A7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A7D0u;
        // 0x41a7d4: 0x24620007  addiu       $v0, $v1, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41a7d0) {
            ctx->pc = 0x41A7E0u;
            goto label_41a7e0;
        }
    }
    ctx->pc = 0x41A7D8u;
label_41a7d8:
    // 0x41a7d8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x41a7d8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_41a7dc:
    // 0x41a7dc: 0x24620007  addiu       $v0, $v1, 0x7
    ctx->pc = 0x41a7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 7));
label_41a7e0:
    // 0x41a7e0: 0x2404fffc  addiu       $a0, $zero, -0x4
    ctx->pc = 0x41a7e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_41a7e4:
    // 0x41a7e4: 0x2a0c3  sra         $s4, $v0, 3
    ctx->pc = 0x41a7e4u;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 2), 3));
label_41a7e8:
    // 0x41a7e8: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x41a7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_41a7ec:
    // 0x41a7ec: 0x297a018  mult        $s4, $s4, $s7
    ctx->pc = 0x41a7ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 20, (int32_t)result); }
label_41a7f0:
    // 0x41a7f0: 0x2463e880  addiu       $v1, $v1, -0x1780
    ctx->pc = 0x41a7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961280));
label_41a7f4:
    // 0x41a7f4: 0x8c620108  lw          $v0, 0x108($v1)
    ctx->pc = 0x41a7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
label_41a7f8:
    // 0x41a7f8: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x41a7f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_41a7fc:
    // 0x41a7fc: 0x34a50018  ori         $a1, $a1, 0x18
    ctx->pc = 0x41a7fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)24);
label_41a800:
    // 0x41a800: 0x26830003  addiu       $v1, $s4, 0x3
    ctx->pc = 0x41a800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 3));
label_41a804:
    // 0x41a804: 0x64a024  and         $s4, $v1, $a0
    ctx->pc = 0x41a804u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_41a808:
    // 0x41a808: 0x29e8818  mult        $s1, $s4, $fp
    ctx->pc = 0x41a808u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
label_41a80c:
    // 0x41a80c: 0x2338021  addu        $s0, $s1, $s3
    ctx->pc = 0x41a80cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
label_41a810:
    // 0x41a810: 0x40f809  jalr        $v0
label_41a814:
    if (ctx->pc == 0x41A814u) {
        ctx->pc = 0x41A814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A810u;
        // 0x41a814: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A818u;
        goto label_41a818;
    }
    ctx->pc = 0x41A810u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x41A818u);
        ctx->pc = 0x41A814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A810u;
        // 0x41a814: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41A810u, 0x41A818u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41A818u;
label_41a818:
    // 0x41a818: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x41a818u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_41a81c:
    // 0x41a81c: 0x56c0000c  bnel        $s6, $zero, . + 4 + (0xC << 2)
label_41a820:
    if (ctx->pc == 0x41A820u) {
        ctx->pc = 0x41A820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A81Cu;
        // 0x41a820: 0x2d11021  addu        $v0, $s6, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A824u;
        goto label_41a824;
    }
    ctx->pc = 0x41A81Cu;
    {
        const bool branch_taken_0x41a81c = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x41a81c) {
            ctx->pc = 0x41A820u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41A81Cu;
            // 0x41a820: 0x2d11021  addu        $v0, $s6, $s1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 17)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x41A850u;
            goto label_41a850;
        }
    }
    ctx->pc = 0x41A824u;
label_41a824:
    // 0x41a824: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x41a824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_41a828:
    // 0x41a828: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x41a828u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_41a82c:
    // 0x41a82c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x41a82cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_41a830:
    // 0x41a830: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x41a830u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41a834:
    // 0x41a834: 0xc1035f6  jal         func_40D7D8
label_41a838:
    if (ctx->pc == 0x41A838u) {
        ctx->pc = 0x41A838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A834u;
        // 0x41a838: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A83Cu;
        goto label_41a83c;
    }
    ctx->pc = 0x41A834u;
    SET_GPR_U32(ctx, 31, 0x41A83Cu);
    ctx->pc = 0x41A838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41A834u;
    // 0x41a838: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x41A834u, 0x41A83Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41A83Cu;
label_41a83c:
    // 0x41a83c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x41a83cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_41a840:
    // 0x41a840: 0xc103628  jal         func_40D8A0
label_41a844:
    if (ctx->pc == 0x41A844u) {
        ctx->pc = 0x41A844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A840u;
        // 0x41a844: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A848u;
        goto label_41a848;
    }
    ctx->pc = 0x41A840u;
    SET_GPR_U32(ctx, 31, 0x41A848u);
    ctx->pc = 0x41A844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41A840u;
    // 0x41a844: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x41A840u, 0x41A848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41A848u;
label_41a848:
    // 0x41a848: 0x10000061  b           . + 4 + (0x61 << 2)
label_41a84c:
    if (ctx->pc == 0x41A84Cu) {
        ctx->pc = 0x41A84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A848u;
        // 0x41a84c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A850u;
        goto label_41a850;
    }
    ctx->pc = 0x41A848u;
    {
        const bool branch_taken_0x41a848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41A84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A848u;
        // 0x41a84c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41a848) {
            ctx->pc = 0x41A9D0u;
            goto label_41a9d0;
        }
    }
    ctx->pc = 0x41A850u;
label_41a850:
    // 0x41a850: 0x15100a  movz        $v0, $zero, $s5
    ctx->pc = 0x41a850u;
    if (GPR_U64(ctx, 21) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_41a854:
    // 0x41a854: 0x12a00005  beqz        $s5, . + 4 + (0x5 << 2)
label_41a858:
    if (ctx->pc == 0x41A858u) {
        ctx->pc = 0x41A858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A854u;
        // 0x41a858: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A85Cu;
        goto label_41a85c;
    }
    ctx->pc = 0x41A854u;
    {
        const bool branch_taken_0x41a854 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x41A858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A854u;
        // 0x41a858: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41a854) {
            ctx->pc = 0x41A86Cu;
            goto label_41a86c;
        }
    }
    ctx->pc = 0x41A85Cu;
label_41a85c:
    // 0x41a85c: 0x8e450018  lw          $a1, 0x18($s2)
    ctx->pc = 0x41a85cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_41a860:
    // 0x41a860: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x41a860u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_41a864:
    // 0x41a864: 0xc0bb778  jal         func_2EDDE0
label_41a868:
    if (ctx->pc == 0x41A868u) {
        ctx->pc = 0x41A868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A864u;
        // 0x41a868: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A86Cu;
        goto label_41a86c;
    }
    ctx->pc = 0x41A864u;
    SET_GPR_U32(ctx, 31, 0x41A86Cu);
    ctx->pc = 0x41A868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41A864u;
    // 0x41a868: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x41A864u, 0x41A86Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41A86Cu;
label_41a86c:
    // 0x41a86c: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x41a86cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_41a870:
    // 0x41a870: 0x2c0882d  daddu       $s1, $s6, $zero
    ctx->pc = 0x41a870u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_41a874:
    // 0x41a874: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x41a874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_41a878:
    // 0x41a878: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x41a878u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_41a87c:
    // 0x41a87c: 0x2e3202a  slt         $a0, $s7, $v1
    ctx->pc = 0x41a87cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 23) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_41a880:
    // 0x41a880: 0x2e4180b  movn        $v1, $s7, $a0
    ctx->pc = 0x41a880u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 23));
label_41a884:
    // 0x41a884: 0x24420007  addiu       $v0, $v0, 0x7
    ctx->pc = 0x41a884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
label_41a888:
    // 0x41a888: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x41a888u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
label_41a88c:
    // 0x41a88c: 0x3c5202a  slt         $a0, $fp, $a1
    ctx->pc = 0x41a88cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 30) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_41a890:
    // 0x41a890: 0x43a818  mult        $s5, $v0, $v1
    ctx->pc = 0x41a890u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 21, (int32_t)result); }
label_41a894:
    // 0x41a894: 0x3c4280b  movn        $a1, $fp, $a0
    ctx->pc = 0x41a894u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 30));
label_41a898:
    // 0x41a898: 0x18a00041  blez        $a1, . + 4 + (0x41 << 2)
label_41a89c:
    if (ctx->pc == 0x41A89Cu) {
        ctx->pc = 0x41A89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A898u;
        // 0x41a89c: 0x8e500014  lw          $s0, 0x14($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A8A0u;
        goto label_41a8a0;
    }
    ctx->pc = 0x41A898u;
    {
        const bool branch_taken_0x41a898 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x41A89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A898u;
        // 0x41a89c: 0x8e500014  lw          $s0, 0x14($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41a898) {
            ctx->pc = 0x41A9A0u;
            goto label_41a9a0;
        }
    }
    ctx->pc = 0x41A8A0u;
label_41a8a0:
    // 0x41a8a0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x41a8a0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_41a8a4:
    // 0x41a8a4: 0x131023  negu        $v0, $s3
    ctx->pc = 0x41a8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 19)));
label_41a8a8:
    // 0x41a8a8: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x41a8a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_41a8ac:
    // 0x41a8ac: 0x5060001f  beql        $v1, $zero, . + 4 + (0x1F << 2)
label_41a8b0:
    if (ctx->pc == 0x41A8B0u) {
        ctx->pc = 0x41A8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A8ACu;
        // 0x41a8b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A8B4u;
        goto label_41a8b4;
    }
    ctx->pc = 0x41A8ACu;
    {
        const bool branch_taken_0x41a8ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x41a8ac) {
            ctx->pc = 0x41A8B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41A8ACu;
            // 0x41a8b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x41A92Cu;
            goto label_41a92c;
        }
    }
    ctx->pc = 0x41A8B4u;
label_41a8b4:
    // 0x41a8b4: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x41a8b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_41a8b8:
    // 0x41a8b8: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_41a8bc:
    if (ctx->pc == 0x41A8BCu) {
        ctx->pc = 0x41A8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A8B8u;
        // 0x41a8bc: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A8C0u;
        goto label_41a8c0;
    }
    ctx->pc = 0x41A8B8u;
    {
        const bool branch_taken_0x41a8b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41A8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A8B8u;
        // 0x41a8bc: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x41a8b8) {
            ctx->pc = 0x41A904u;
            goto label_41a904;
        }
    }
    ctx->pc = 0x41A8C0u;
label_41a8c0:
    // 0x41a8c0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_41a8c4:
    if (ctx->pc == 0x41A8C4u) {
        ctx->pc = 0x41A8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A8C0u;
        // 0x41a8c4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A8C8u;
        goto label_41a8c8;
    }
    ctx->pc = 0x41A8C0u;
    {
        const bool branch_taken_0x41a8c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41A8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A8C0u;
        // 0x41a8c4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41a8c0) {
            ctx->pc = 0x41A8E4u;
            goto label_41a8e4;
        }
    }
    ctx->pc = 0x41A8C8u;
label_41a8c8:
    // 0x41a8c8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x41a8c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_41a8cc:
    // 0x41a8cc: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x41a8ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_41a8d0:
    // 0x41a8d0: 0xc0bb778  jal         func_2EDDE0
label_41a8d4:
    if (ctx->pc == 0x41A8D4u) {
        ctx->pc = 0x41A8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A8D0u;
        // 0x41a8d4: 0x2d48821  addu        $s1, $s6, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A8D8u;
        goto label_41a8d8;
    }
    ctx->pc = 0x41A8D0u;
    SET_GPR_U32(ctx, 31, 0x41A8D8u);
    ctx->pc = 0x41A8D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41A8D0u;
    // 0x41a8d4: 0x2d48821  addu        $s1, $s6, $s4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x41A8D0u, 0x41A8D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41A8D8u;
label_41a8d8:
    // 0x41a8d8: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x41a8d8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_41a8dc:
    // 0x41a8dc: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x41a8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_41a8e0:
    // 0x41a8e0: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x41a8e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_41a8e4:
    // 0x41a8e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x41a8e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_41a8e8:
    // 0x41a8e8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x41a8e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41a8ec:
    // 0x41a8ec: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x41a8ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_41a8f0:
    // 0x41a8f0: 0xc0bb778  jal         func_2EDDE0
label_41a8f4:
    if (ctx->pc == 0x41A8F4u) {
        ctx->pc = 0x41A8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A8F0u;
        // 0x41a8f4: 0x2348821  addu        $s1, $s1, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A8F8u;
        goto label_41a8f8;
    }
    ctx->pc = 0x41A8F0u;
    SET_GPR_U32(ctx, 31, 0x41A8F8u);
    ctx->pc = 0x41A8F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41A8F0u;
    // 0x41a8f4: 0x2348821  addu        $s1, $s1, $s4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x41A8F0u, 0x41A8F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41A8F8u;
label_41a8f8:
    // 0x41a8f8: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x41a8f8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_41a8fc:
    // 0x41a8fc: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x41a8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_41a900:
    // 0x41a900: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x41a900u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_41a904:
    // 0x41a904: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x41a904u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_41a908:
    // 0x41a908: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x41a908u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41a90c:
    // 0x41a90c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x41a90cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_41a910:
    // 0x41a910: 0xc0bb778  jal         func_2EDDE0
label_41a914:
    if (ctx->pc == 0x41A914u) {
        ctx->pc = 0x41A914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A910u;
        // 0x41a914: 0x2348821  addu        $s1, $s1, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A918u;
        goto label_41a918;
    }
    ctx->pc = 0x41A910u;
    SET_GPR_U32(ctx, 31, 0x41A918u);
    ctx->pc = 0x41A914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41A910u;
    // 0x41a914: 0x2348821  addu        $s1, $s1, $s4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x41A910u, 0x41A918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41A918u;
label_41a918:
    // 0x41a918: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x41a918u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_41a91c:
    // 0x41a91c: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x41a91cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_41a920:
    // 0x41a920: 0x1260001f  beqz        $s3, . + 4 + (0x1F << 2)
label_41a924:
    if (ctx->pc == 0x41A924u) {
        ctx->pc = 0x41A924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A920u;
        // 0x41a924: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A928u;
        goto label_41a928;
    }
    ctx->pc = 0x41A920u;
    {
        const bool branch_taken_0x41a920 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x41A924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A920u;
        // 0x41a924: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41a920) {
            ctx->pc = 0x41A9A0u;
            goto label_41a9a0;
        }
    }
    ctx->pc = 0x41A928u;
label_41a928:
    // 0x41a928: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x41a928u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_41a92c:
    // 0x41a92c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x41a92cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41a930:
    // 0x41a930: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x41a930u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_41a934:
    // 0x41a934: 0xc0bb778  jal         func_2EDDE0
label_41a938:
    if (ctx->pc == 0x41A938u) {
        ctx->pc = 0x41A938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A934u;
        // 0x41a938: 0x2348821  addu        $s1, $s1, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A93Cu;
        goto label_41a93c;
    }
    ctx->pc = 0x41A934u;
    SET_GPR_U32(ctx, 31, 0x41A93Cu);
    ctx->pc = 0x41A938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41A934u;
    // 0x41a938: 0x2348821  addu        $s1, $s1, $s4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x41A934u, 0x41A93Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41A93Cu;
label_41a93c:
    // 0x41a93c: 0x2673fffc  addiu       $s3, $s3, -0x4
    ctx->pc = 0x41a93cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967292));
label_41a940:
    // 0x41a940: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x41a940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_41a944:
    // 0x41a944: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x41a944u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_41a948:
    // 0x41a948: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x41a948u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_41a94c:
    // 0x41a94c: 0x2348821  addu        $s1, $s1, $s4
    ctx->pc = 0x41a94cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
label_41a950:
    // 0x41a950: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x41a950u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_41a954:
    // 0x41a954: 0xc0bb778  jal         func_2EDDE0
label_41a958:
    if (ctx->pc == 0x41A958u) {
        ctx->pc = 0x41A958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A954u;
        // 0x41a958: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A95Cu;
        goto label_41a95c;
    }
    ctx->pc = 0x41A954u;
    SET_GPR_U32(ctx, 31, 0x41A95Cu);
    ctx->pc = 0x41A958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41A954u;
    // 0x41a958: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x41A954u, 0x41A95Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41A95Cu;
label_41a95c:
    // 0x41a95c: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x41a95cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_41a960:
    // 0x41a960: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x41a960u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_41a964:
    // 0x41a964: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x41a964u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_41a968:
    // 0x41a968: 0x2348821  addu        $s1, $s1, $s4
    ctx->pc = 0x41a968u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
label_41a96c:
    // 0x41a96c: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x41a96cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_41a970:
    // 0x41a970: 0xc0bb778  jal         func_2EDDE0
label_41a974:
    if (ctx->pc == 0x41A974u) {
        ctx->pc = 0x41A974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A970u;
        // 0x41a974: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A978u;
        goto label_41a978;
    }
    ctx->pc = 0x41A970u;
    SET_GPR_U32(ctx, 31, 0x41A978u);
    ctx->pc = 0x41A974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41A970u;
    // 0x41a974: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x41A970u, 0x41A978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41A978u;
label_41a978:
    // 0x41a978: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x41a978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_41a97c:
    // 0x41a97c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x41a97cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_41a980:
    // 0x41a980: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x41a980u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_41a984:
    // 0x41a984: 0x2348821  addu        $s1, $s1, $s4
    ctx->pc = 0x41a984u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
label_41a988:
    // 0x41a988: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x41a988u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_41a98c:
    // 0x41a98c: 0xc0bb778  jal         func_2EDDE0
label_41a990:
    if (ctx->pc == 0x41A990u) {
        ctx->pc = 0x41A990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A98Cu;
        // 0x41a990: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A994u;
        goto label_41a994;
    }
    ctx->pc = 0x41A98Cu;
    SET_GPR_U32(ctx, 31, 0x41A994u);
    ctx->pc = 0x41A990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41A98Cu;
    // 0x41a990: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x41A98Cu, 0x41A994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41A994u;
label_41a994:
    // 0x41a994: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x41a994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_41a998:
    // 0x41a998: 0x1660ffe3  bnez        $s3, . + 4 + (-0x1D << 2)
label_41a99c:
    if (ctx->pc == 0x41A99Cu) {
        ctx->pc = 0x41A99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A998u;
        // 0x41a99c: 0x2038021  addu        $s0, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A9A0u;
        goto label_41a9a0;
    }
    ctx->pc = 0x41A998u;
    {
        const bool branch_taken_0x41a998 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x41A99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A998u;
        // 0x41a99c: 0x2038021  addu        $s0, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41a998) {
            ctx->pc = 0x41A928u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_41a928;
        }
    }
    ctx->pc = 0x41A9A0u;
label_41a9a0:
    // 0x41a9a0: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x41a9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_41a9a4:
    // 0x41a9a4: 0x2443e880  addiu       $v1, $v0, -0x1780
    ctx->pc = 0x41a9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_41a9a8:
    // 0x41a9a8: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x41a9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_41a9ac:
    // 0x41a9ac: 0x40f809  jalr        $v0
label_41a9b0:
    if (ctx->pc == 0x41A9B0u) {
        ctx->pc = 0x41A9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A9ACu;
        // 0x41a9b0: 0x8e440014  lw          $a0, 0x14($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A9B4u;
        goto label_41a9b4;
    }
    ctx->pc = 0x41A9ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x41A9B4u);
        ctx->pc = 0x41A9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A9ACu;
        // 0x41a9b0: 0x8e440014  lw          $a0, 0x14($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41A9ACu, 0x41A9B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41A9B4u;
label_41a9b4:
    // 0x41a9b4: 0xae560014  sw          $s6, 0x14($s2)
    ctx->pc = 0x41a9b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 22));
label_41a9b8:
    // 0x41a9b8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x41a9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_41a9bc:
    // 0x41a9bc: 0xae540010  sw          $s4, 0x10($s2)
    ctx->pc = 0x41a9bcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 20));
label_41a9c0:
    // 0x41a9c0: 0xae420018  sw          $v0, 0x18($s2)
    ctx->pc = 0x41a9c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 2));
label_41a9c4:
    // 0x41a9c4: 0xae570004  sw          $s7, 0x4($s2)
    ctx->pc = 0x41a9c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 23));
label_41a9c8:
    // 0x41a9c8: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x41a9c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_41a9cc:
    // 0x41a9cc: 0xae5e0008  sw          $fp, 0x8($s2)
    ctx->pc = 0x41a9ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 30));
label_41a9d0:
    // 0x41a9d0: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x41a9d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_41a9d4:
    // 0x41a9d4: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x41a9d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_41a9d8:
    // 0x41a9d8: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x41a9d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_41a9dc:
    // 0x41a9dc: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x41a9dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_41a9e0:
    // 0x41a9e0: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x41a9e0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_41a9e4:
    // 0x41a9e4: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x41a9e4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_41a9e8:
    // 0x41a9e8: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x41a9e8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_41a9ec:
    // 0x41a9ec: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x41a9ecu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_41a9f0:
    // 0x41a9f0: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x41a9f0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_41a9f4:
    // 0x41a9f4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x41a9f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_41a9f8:
    // 0x41a9f8: 0x3e00008  jr          $ra
label_41a9fc:
    if (ctx->pc == 0x41A9FCu) {
        ctx->pc = 0x41A9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A9F8u;
        // 0x41a9fc: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41AA00u;
        goto label_fallthrough_0x41a9f8;
    }
    ctx->pc = 0x41A9F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41A9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A9F8u;
        // 0x41a9fc: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41A9F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x41a9f8:
    ctx->pc = 0x41AA00u;
}
