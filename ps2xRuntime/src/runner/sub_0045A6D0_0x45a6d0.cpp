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

// Function: sub_0045A6D0
// Address: 0x45a6d0 - 0x45aae0
void sub_0045A6D0_0x45a6d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0045A6D0_0x45a6d0");
#endif

    switch (ctx->pc) {
        case 0x45a6d0u: goto label_45a6d0;
        case 0x45a6d4u: goto label_45a6d4;
        case 0x45a6d8u: goto label_45a6d8;
        case 0x45a6dcu: goto label_45a6dc;
        case 0x45a6e0u: goto label_45a6e0;
        case 0x45a6e4u: goto label_45a6e4;
        case 0x45a6e8u: goto label_45a6e8;
        case 0x45a6ecu: goto label_45a6ec;
        case 0x45a6f0u: goto label_45a6f0;
        case 0x45a6f4u: goto label_45a6f4;
        case 0x45a6f8u: goto label_45a6f8;
        case 0x45a6fcu: goto label_45a6fc;
        case 0x45a700u: goto label_45a700;
        case 0x45a704u: goto label_45a704;
        case 0x45a708u: goto label_45a708;
        case 0x45a70cu: goto label_45a70c;
        case 0x45a710u: goto label_45a710;
        case 0x45a714u: goto label_45a714;
        case 0x45a718u: goto label_45a718;
        case 0x45a71cu: goto label_45a71c;
        case 0x45a720u: goto label_45a720;
        case 0x45a724u: goto label_45a724;
        case 0x45a728u: goto label_45a728;
        case 0x45a72cu: goto label_45a72c;
        case 0x45a730u: goto label_45a730;
        case 0x45a734u: goto label_45a734;
        case 0x45a738u: goto label_45a738;
        case 0x45a73cu: goto label_45a73c;
        case 0x45a740u: goto label_45a740;
        case 0x45a744u: goto label_45a744;
        case 0x45a748u: goto label_45a748;
        case 0x45a74cu: goto label_45a74c;
        case 0x45a750u: goto label_45a750;
        case 0x45a754u: goto label_45a754;
        case 0x45a758u: goto label_45a758;
        case 0x45a75cu: goto label_45a75c;
        case 0x45a760u: goto label_45a760;
        case 0x45a764u: goto label_45a764;
        case 0x45a768u: goto label_45a768;
        case 0x45a76cu: goto label_45a76c;
        case 0x45a770u: goto label_45a770;
        case 0x45a774u: goto label_45a774;
        case 0x45a778u: goto label_45a778;
        case 0x45a77cu: goto label_45a77c;
        case 0x45a780u: goto label_45a780;
        case 0x45a784u: goto label_45a784;
        case 0x45a788u: goto label_45a788;
        case 0x45a78cu: goto label_45a78c;
        case 0x45a790u: goto label_45a790;
        case 0x45a794u: goto label_45a794;
        case 0x45a798u: goto label_45a798;
        case 0x45a79cu: goto label_45a79c;
        case 0x45a7a0u: goto label_45a7a0;
        case 0x45a7a4u: goto label_45a7a4;
        case 0x45a7a8u: goto label_45a7a8;
        case 0x45a7acu: goto label_45a7ac;
        case 0x45a7b0u: goto label_45a7b0;
        case 0x45a7b4u: goto label_45a7b4;
        case 0x45a7b8u: goto label_45a7b8;
        case 0x45a7bcu: goto label_45a7bc;
        case 0x45a7c0u: goto label_45a7c0;
        case 0x45a7c4u: goto label_45a7c4;
        case 0x45a7c8u: goto label_45a7c8;
        case 0x45a7ccu: goto label_45a7cc;
        case 0x45a7d0u: goto label_45a7d0;
        case 0x45a7d4u: goto label_45a7d4;
        case 0x45a7d8u: goto label_45a7d8;
        case 0x45a7dcu: goto label_45a7dc;
        case 0x45a7e0u: goto label_45a7e0;
        case 0x45a7e4u: goto label_45a7e4;
        case 0x45a7e8u: goto label_45a7e8;
        case 0x45a7ecu: goto label_45a7ec;
        case 0x45a7f0u: goto label_45a7f0;
        case 0x45a7f4u: goto label_45a7f4;
        case 0x45a7f8u: goto label_45a7f8;
        case 0x45a7fcu: goto label_45a7fc;
        case 0x45a800u: goto label_45a800;
        case 0x45a804u: goto label_45a804;
        case 0x45a808u: goto label_45a808;
        case 0x45a80cu: goto label_45a80c;
        case 0x45a810u: goto label_45a810;
        case 0x45a814u: goto label_45a814;
        case 0x45a818u: goto label_45a818;
        case 0x45a81cu: goto label_45a81c;
        case 0x45a820u: goto label_45a820;
        case 0x45a824u: goto label_45a824;
        case 0x45a828u: goto label_45a828;
        case 0x45a82cu: goto label_45a82c;
        case 0x45a830u: goto label_45a830;
        case 0x45a834u: goto label_45a834;
        case 0x45a838u: goto label_45a838;
        case 0x45a83cu: goto label_45a83c;
        case 0x45a840u: goto label_45a840;
        case 0x45a844u: goto label_45a844;
        case 0x45a848u: goto label_45a848;
        case 0x45a84cu: goto label_45a84c;
        case 0x45a850u: goto label_45a850;
        case 0x45a854u: goto label_45a854;
        case 0x45a858u: goto label_45a858;
        case 0x45a85cu: goto label_45a85c;
        case 0x45a860u: goto label_45a860;
        case 0x45a864u: goto label_45a864;
        case 0x45a868u: goto label_45a868;
        case 0x45a86cu: goto label_45a86c;
        case 0x45a870u: goto label_45a870;
        case 0x45a874u: goto label_45a874;
        case 0x45a878u: goto label_45a878;
        case 0x45a87cu: goto label_45a87c;
        case 0x45a880u: goto label_45a880;
        case 0x45a884u: goto label_45a884;
        case 0x45a888u: goto label_45a888;
        case 0x45a88cu: goto label_45a88c;
        case 0x45a890u: goto label_45a890;
        case 0x45a894u: goto label_45a894;
        case 0x45a898u: goto label_45a898;
        case 0x45a89cu: goto label_45a89c;
        case 0x45a8a0u: goto label_45a8a0;
        case 0x45a8a4u: goto label_45a8a4;
        case 0x45a8a8u: goto label_45a8a8;
        case 0x45a8acu: goto label_45a8ac;
        case 0x45a8b0u: goto label_45a8b0;
        case 0x45a8b4u: goto label_45a8b4;
        case 0x45a8b8u: goto label_45a8b8;
        case 0x45a8bcu: goto label_45a8bc;
        case 0x45a8c0u: goto label_45a8c0;
        case 0x45a8c4u: goto label_45a8c4;
        case 0x45a8c8u: goto label_45a8c8;
        case 0x45a8ccu: goto label_45a8cc;
        case 0x45a8d0u: goto label_45a8d0;
        case 0x45a8d4u: goto label_45a8d4;
        case 0x45a8d8u: goto label_45a8d8;
        case 0x45a8dcu: goto label_45a8dc;
        case 0x45a8e0u: goto label_45a8e0;
        case 0x45a8e4u: goto label_45a8e4;
        case 0x45a8e8u: goto label_45a8e8;
        case 0x45a8ecu: goto label_45a8ec;
        case 0x45a8f0u: goto label_45a8f0;
        case 0x45a8f4u: goto label_45a8f4;
        case 0x45a8f8u: goto label_45a8f8;
        case 0x45a8fcu: goto label_45a8fc;
        case 0x45a900u: goto label_45a900;
        case 0x45a904u: goto label_45a904;
        case 0x45a908u: goto label_45a908;
        case 0x45a90cu: goto label_45a90c;
        case 0x45a910u: goto label_45a910;
        case 0x45a914u: goto label_45a914;
        case 0x45a918u: goto label_45a918;
        case 0x45a91cu: goto label_45a91c;
        case 0x45a920u: goto label_45a920;
        case 0x45a924u: goto label_45a924;
        case 0x45a928u: goto label_45a928;
        case 0x45a92cu: goto label_45a92c;
        case 0x45a930u: goto label_45a930;
        case 0x45a934u: goto label_45a934;
        case 0x45a938u: goto label_45a938;
        case 0x45a93cu: goto label_45a93c;
        case 0x45a940u: goto label_45a940;
        case 0x45a944u: goto label_45a944;
        case 0x45a948u: goto label_45a948;
        case 0x45a94cu: goto label_45a94c;
        case 0x45a950u: goto label_45a950;
        case 0x45a954u: goto label_45a954;
        case 0x45a958u: goto label_45a958;
        case 0x45a95cu: goto label_45a95c;
        case 0x45a960u: goto label_45a960;
        case 0x45a964u: goto label_45a964;
        case 0x45a968u: goto label_45a968;
        case 0x45a96cu: goto label_45a96c;
        case 0x45a970u: goto label_45a970;
        case 0x45a974u: goto label_45a974;
        case 0x45a978u: goto label_45a978;
        case 0x45a97cu: goto label_45a97c;
        case 0x45a980u: goto label_45a980;
        case 0x45a984u: goto label_45a984;
        case 0x45a988u: goto label_45a988;
        case 0x45a98cu: goto label_45a98c;
        case 0x45a990u: goto label_45a990;
        case 0x45a994u: goto label_45a994;
        case 0x45a998u: goto label_45a998;
        case 0x45a99cu: goto label_45a99c;
        case 0x45a9a0u: goto label_45a9a0;
        case 0x45a9a4u: goto label_45a9a4;
        case 0x45a9a8u: goto label_45a9a8;
        case 0x45a9acu: goto label_45a9ac;
        case 0x45a9b0u: goto label_45a9b0;
        case 0x45a9b4u: goto label_45a9b4;
        case 0x45a9b8u: goto label_45a9b8;
        case 0x45a9bcu: goto label_45a9bc;
        case 0x45a9c0u: goto label_45a9c0;
        case 0x45a9c4u: goto label_45a9c4;
        case 0x45a9c8u: goto label_45a9c8;
        case 0x45a9ccu: goto label_45a9cc;
        case 0x45a9d0u: goto label_45a9d0;
        case 0x45a9d4u: goto label_45a9d4;
        case 0x45a9d8u: goto label_45a9d8;
        case 0x45a9dcu: goto label_45a9dc;
        case 0x45a9e0u: goto label_45a9e0;
        case 0x45a9e4u: goto label_45a9e4;
        case 0x45a9e8u: goto label_45a9e8;
        case 0x45a9ecu: goto label_45a9ec;
        case 0x45a9f0u: goto label_45a9f0;
        case 0x45a9f4u: goto label_45a9f4;
        case 0x45a9f8u: goto label_45a9f8;
        case 0x45a9fcu: goto label_45a9fc;
        case 0x45aa00u: goto label_45aa00;
        case 0x45aa04u: goto label_45aa04;
        case 0x45aa08u: goto label_45aa08;
        case 0x45aa0cu: goto label_45aa0c;
        case 0x45aa10u: goto label_45aa10;
        case 0x45aa14u: goto label_45aa14;
        case 0x45aa18u: goto label_45aa18;
        case 0x45aa1cu: goto label_45aa1c;
        case 0x45aa20u: goto label_45aa20;
        case 0x45aa24u: goto label_45aa24;
        case 0x45aa28u: goto label_45aa28;
        case 0x45aa2cu: goto label_45aa2c;
        case 0x45aa30u: goto label_45aa30;
        case 0x45aa34u: goto label_45aa34;
        case 0x45aa38u: goto label_45aa38;
        case 0x45aa3cu: goto label_45aa3c;
        case 0x45aa40u: goto label_45aa40;
        case 0x45aa44u: goto label_45aa44;
        case 0x45aa48u: goto label_45aa48;
        case 0x45aa4cu: goto label_45aa4c;
        case 0x45aa50u: goto label_45aa50;
        case 0x45aa54u: goto label_45aa54;
        case 0x45aa58u: goto label_45aa58;
        case 0x45aa5cu: goto label_45aa5c;
        case 0x45aa60u: goto label_45aa60;
        case 0x45aa64u: goto label_45aa64;
        case 0x45aa68u: goto label_45aa68;
        case 0x45aa6cu: goto label_45aa6c;
        case 0x45aa70u: goto label_45aa70;
        case 0x45aa74u: goto label_45aa74;
        case 0x45aa78u: goto label_45aa78;
        case 0x45aa7cu: goto label_45aa7c;
        case 0x45aa80u: goto label_45aa80;
        case 0x45aa84u: goto label_45aa84;
        case 0x45aa88u: goto label_45aa88;
        case 0x45aa8cu: goto label_45aa8c;
        case 0x45aa90u: goto label_45aa90;
        case 0x45aa94u: goto label_45aa94;
        case 0x45aa98u: goto label_45aa98;
        case 0x45aa9cu: goto label_45aa9c;
        case 0x45aaa0u: goto label_45aaa0;
        case 0x45aaa4u: goto label_45aaa4;
        case 0x45aaa8u: goto label_45aaa8;
        case 0x45aaacu: goto label_45aaac;
        case 0x45aab0u: goto label_45aab0;
        case 0x45aab4u: goto label_45aab4;
        case 0x45aab8u: goto label_45aab8;
        case 0x45aabcu: goto label_45aabc;
        case 0x45aac0u: goto label_45aac0;
        case 0x45aac4u: goto label_45aac4;
        case 0x45aac8u: goto label_45aac8;
        case 0x45aaccu: goto label_45aacc;
        case 0x45aad0u: goto label_45aad0;
        case 0x45aad4u: goto label_45aad4;
        case 0x45aad8u: goto label_45aad8;
        case 0x45aadcu: goto label_45aadc;
        default: break;
    }

    ctx->pc = 0x45a6d0u;

label_45a6d0:
    // 0x45a6d0: 0x27bdfcf0  addiu       $sp, $sp, -0x310
    ctx->pc = 0x45a6d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966512));
label_45a6d4:
    // 0x45a6d4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x45a6d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_45a6d8:
    // 0x45a6d8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x45a6d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_45a6dc:
    // 0x45a6dc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x45a6dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_45a6e0:
    // 0x45a6e0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x45a6e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_45a6e4:
    // 0x45a6e4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x45a6e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_45a6e8:
    // 0x45a6e8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x45a6e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_45a6ec:
    // 0x45a6ec: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x45a6ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_45a6f0:
    // 0x45a6f0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x45a6f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_45a6f4:
    // 0x45a6f4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x45a6f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_45a6f8:
    // 0x45a6f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x45a6f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_45a6fc:
    // 0x45a6fc: 0xafa40300  sw          $a0, 0x300($sp)
    ctx->pc = 0x45a6fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 768), GPR_U32(ctx, 4));
label_45a700:
    // 0x45a700: 0x8fa40300  lw          $a0, 0x300($sp)
    ctx->pc = 0x45a700u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 768)));
label_45a704:
    // 0x45a704: 0xc116738  jal         func_459CE0
label_45a708:
    if (ctx->pc == 0x45A708u) {
        ctx->pc = 0x45A70Cu;
        goto label_45a70c;
    }
    ctx->pc = 0x45A704u;
    SET_GPR_U32(ctx, 31, 0x45A70Cu);
    ctx->pc = 0x459CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x459CE0u, 0x45A704u, 0x45A70Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45A70Cu;
label_45a70c:
    // 0x45a70c: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x45a70cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_45a710:
    // 0x45a710: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x45a710u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_45a714:
    // 0x45a714: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x45a714u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_45a718:
    // 0x45a718: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x45a718u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_45a71c:
    // 0x45a71c: 0x100000dd  b           . + 4 + (0xDD << 2)
label_45a720:
    if (ctx->pc == 0x45A720u) {
        ctx->pc = 0x45A724u;
        goto label_45a724;
    }
    ctx->pc = 0x45A71Cu;
    {
        const bool branch_taken_0x45a71c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45a71c) {
            ctx->pc = 0x45AA94u;
            goto label_45aa94;
        }
    }
    ctx->pc = 0x45A724u;
label_45a724:
    // 0x45a724: 0x8fa20300  lw          $v0, 0x300($sp)
    ctx->pc = 0x45a724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 768)));
label_45a728:
    // 0x45a728: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x45a728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_45a72c:
    // 0x45a72c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x45a72cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_45a730:
    // 0x45a730: 0xc116864  jal         func_45A190
label_45a734:
    if (ctx->pc == 0x45A734u) {
        ctx->pc = 0x45A738u;
        goto label_45a738;
    }
    ctx->pc = 0x45A730u;
    SET_GPR_U32(ctx, 31, 0x45A738u);
    ctx->pc = 0x45A190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45A190u, 0x45A730u, 0x45A738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45A738u;
label_45a738:
    // 0x45a738: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x45a738u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_45a73c:
    // 0x45a73c: 0x10102b  sltu        $v0, $zero, $s0
    ctx->pc = 0x45a73cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_45a740:
    // 0x45a740: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x45a740u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_45a744:
    // 0x45a744: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
label_45a748:
    if (ctx->pc == 0x45A748u) {
        ctx->pc = 0x45A74Cu;
        goto label_45a74c;
    }
    ctx->pc = 0x45A744u;
    {
        const bool branch_taken_0x45a744 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x45a744) {
            ctx->pc = 0x45A7F0u;
            goto label_45a7f0;
        }
    }
    ctx->pc = 0x45A74Cu;
label_45a74c:
    // 0x45a74c: 0x8f82b140  lw          $v0, -0x4EC0($gp)
    ctx->pc = 0x45a74cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947136)));
label_45a750:
    // 0x45a750: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_45a754:
    if (ctx->pc == 0x45A754u) {
        ctx->pc = 0x45A758u;
        goto label_45a758;
    }
    ctx->pc = 0x45A750u;
    {
        const bool branch_taken_0x45a750 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45a750) {
            ctx->pc = 0x45A7F0u;
            goto label_45a7f0;
        }
    }
    ctx->pc = 0x45A758u;
label_45a758:
    // 0x45a758: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x45a758u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_45a75c:
    // 0x45a75c: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x45a75cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_45a760:
    // 0x45a760: 0x27a602f0  addiu       $a2, $sp, 0x2F0
    ctx->pc = 0x45a760u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 752));
label_45a764:
    // 0x45a764: 0xc115ee8  jal         func_457BA0
label_45a768:
    if (ctx->pc == 0x45A768u) {
        ctx->pc = 0x45A76Cu;
        goto label_45a76c;
    }
    ctx->pc = 0x45A764u;
    SET_GPR_U32(ctx, 31, 0x45A76Cu);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x45A764u, 0x45A76Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45A76Cu;
label_45a76c:
    // 0x45a76c: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_45a770:
    if (ctx->pc == 0x45A770u) {
        ctx->pc = 0x45A774u;
        goto label_45a774;
    }
    ctx->pc = 0x45A76Cu;
    {
        const bool branch_taken_0x45a76c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45a76c) {
            ctx->pc = 0x45A7F0u;
            goto label_45a7f0;
        }
    }
    ctx->pc = 0x45A774u;
label_45a774:
    // 0x45a774: 0x8fa202f8  lw          $v0, 0x2F8($sp)
    ctx->pc = 0x45a774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 760)));
label_45a778:
    // 0x45a778: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_45a77c:
    if (ctx->pc == 0x45A77Cu) {
        ctx->pc = 0x45A780u;
        goto label_45a780;
    }
    ctx->pc = 0x45A778u;
    {
        const bool branch_taken_0x45a778 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45a778) {
            ctx->pc = 0x45A7F0u;
            goto label_45a7f0;
        }
    }
    ctx->pc = 0x45A780u;
label_45a780:
    // 0x45a780: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x45a780u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_45a784:
    // 0x45a784: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x45a784u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_45a788:
    // 0x45a788: 0x8fa602f4  lw          $a2, 0x2F4($sp)
    ctx->pc = 0x45a788u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 756)));
label_45a78c:
    // 0x45a78c: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x45a78cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_45a790:
    // 0x45a790: 0x24e7ea30  addiu       $a3, $a3, -0x15D0
    ctx->pc = 0x45a790u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294961712));
label_45a794:
    // 0x45a794: 0x24080162  addiu       $t0, $zero, 0x162
    ctx->pc = 0x45a794u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 354));
label_45a798:
    // 0x45a798: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x45a798u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_45a79c:
    // 0x45a79c: 0x2529eab0  addiu       $t1, $t1, -0x1550
    ctx->pc = 0x45a79cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294961840));
label_45a7a0:
    // 0x45a7a0: 0xc113940  jal         func_44E500
label_45a7a4:
    if (ctx->pc == 0x45A7A4u) {
        ctx->pc = 0x45A7A8u;
        goto label_45a7a8;
    }
    ctx->pc = 0x45A7A0u;
    SET_GPR_U32(ctx, 31, 0x45A7A8u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x45A7A0u, 0x45A7A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45A7A8u;
label_45a7a8:
    // 0x45a7a8: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x45a7a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_45a7ac:
    // 0x45a7ac: 0x2785b148  addiu       $a1, $gp, -0x4EB8
    ctx->pc = 0x45a7acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294947144));
label_45a7b0:
    // 0x45a7b0: 0xc115c24  jal         func_457090
label_45a7b4:
    if (ctx->pc == 0x45A7B4u) {
        ctx->pc = 0x45A7B8u;
        goto label_45a7b8;
    }
    ctx->pc = 0x45A7B0u;
    SET_GPR_U32(ctx, 31, 0x45A7B8u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x45A7B0u, 0x45A7B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45A7B8u;
label_45a7b8:
    // 0x45a7b8: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x45a7b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_45a7bc:
    // 0x45a7bc: 0x8fa202f8  lw          $v0, 0x2F8($sp)
    ctx->pc = 0x45a7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 760)));
label_45a7c0:
    // 0x45a7c0: 0x40f809  jalr        $v0
label_45a7c4:
    if (ctx->pc == 0x45A7C4u) {
        ctx->pc = 0x45A7C8u;
        goto label_45a7c8;
    }
    ctx->pc = 0x45A7C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x45A7C8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45A7C0u, 0x45A7C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x45A7C8u;
label_45a7c8:
    // 0x45a7c8: 0xaf82b140  sw          $v0, -0x4EC0($gp)
    ctx->pc = 0x45a7c8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947136), GPR_U32(ctx, 2));
label_45a7cc:
    // 0x45a7cc: 0x8fa201c0  lw          $v0, 0x1C0($sp)
    ctx->pc = 0x45a7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
label_45a7d0:
    // 0x45a7d0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_45a7d4:
    if (ctx->pc == 0x45A7D4u) {
        ctx->pc = 0x45A7D8u;
        goto label_45a7d8;
    }
    ctx->pc = 0x45A7D0u;
    {
        const bool branch_taken_0x45a7d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45a7d0) {
            ctx->pc = 0x45A7E0u;
            goto label_45a7e0;
        }
    }
    ctx->pc = 0x45A7D8u;
label_45a7d8:
    // 0x45a7d8: 0xd  break       0
    ctx->pc = 0x45a7d8u;
    runtime->handleBreak(rdram, ctx);
label_45a7dc:
    // 0x45a7dc: 0x0  nop
    ctx->pc = 0x45a7dcu;
    // NOP
label_45a7e0:
    // 0x45a7e0: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x45a7e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_45a7e4:
    // 0x45a7e4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x45a7e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_45a7e8:
    // 0x45a7e8: 0xc11392c  jal         func_44E4B0
label_45a7ec:
    if (ctx->pc == 0x45A7ECu) {
        ctx->pc = 0x45A7F0u;
        goto label_45a7f0;
    }
    ctx->pc = 0x45A7E8u;
    SET_GPR_U32(ctx, 31, 0x45A7F0u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x45A7E8u, 0x45A7F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45A7F0u;
label_45a7f0:
    // 0x45a7f0: 0x8e02011c  lw          $v0, 0x11C($s0)
    ctx->pc = 0x45a7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
label_45a7f4:
    // 0x45a7f4: 0x2c420022  sltiu       $v0, $v0, 0x22
    ctx->pc = 0x45a7f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)34) ? 1 : 0);
label_45a7f8:
    // 0x45a7f8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x45a7f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_45a7fc:
    // 0x45a7fc: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
label_45a800:
    if (ctx->pc == 0x45A800u) {
        ctx->pc = 0x45A804u;
        goto label_45a804;
    }
    ctx->pc = 0x45A7FCu;
    {
        const bool branch_taken_0x45a7fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x45a7fc) {
            ctx->pc = 0x45A8A8u;
            goto label_45a8a8;
        }
    }
    ctx->pc = 0x45A804u;
label_45a804:
    // 0x45a804: 0x8f82b144  lw          $v0, -0x4EBC($gp)
    ctx->pc = 0x45a804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947140)));
label_45a808:
    // 0x45a808: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_45a80c:
    if (ctx->pc == 0x45A80Cu) {
        ctx->pc = 0x45A810u;
        goto label_45a810;
    }
    ctx->pc = 0x45A808u;
    {
        const bool branch_taken_0x45a808 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45a808) {
            ctx->pc = 0x45A8A8u;
            goto label_45a8a8;
        }
    }
    ctx->pc = 0x45A810u;
label_45a810:
    // 0x45a810: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x45a810u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_45a814:
    // 0x45a814: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x45a814u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_45a818:
    // 0x45a818: 0x27a602e0  addiu       $a2, $sp, 0x2E0
    ctx->pc = 0x45a818u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
label_45a81c:
    // 0x45a81c: 0xc115ee8  jal         func_457BA0
label_45a820:
    if (ctx->pc == 0x45A820u) {
        ctx->pc = 0x45A824u;
        goto label_45a824;
    }
    ctx->pc = 0x45A81Cu;
    SET_GPR_U32(ctx, 31, 0x45A824u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x45A81Cu, 0x45A824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45A824u;
label_45a824:
    // 0x45a824: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_45a828:
    if (ctx->pc == 0x45A828u) {
        ctx->pc = 0x45A82Cu;
        goto label_45a82c;
    }
    ctx->pc = 0x45A824u;
    {
        const bool branch_taken_0x45a824 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45a824) {
            ctx->pc = 0x45A8A8u;
            goto label_45a8a8;
        }
    }
    ctx->pc = 0x45A82Cu;
label_45a82c:
    // 0x45a82c: 0x8fa202e8  lw          $v0, 0x2E8($sp)
    ctx->pc = 0x45a82cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 744)));
label_45a830:
    // 0x45a830: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_45a834:
    if (ctx->pc == 0x45A834u) {
        ctx->pc = 0x45A838u;
        goto label_45a838;
    }
    ctx->pc = 0x45A830u;
    {
        const bool branch_taken_0x45a830 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45a830) {
            ctx->pc = 0x45A8A8u;
            goto label_45a8a8;
        }
    }
    ctx->pc = 0x45A838u;
label_45a838:
    // 0x45a838: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x45a838u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_45a83c:
    // 0x45a83c: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x45a83cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_45a840:
    // 0x45a840: 0x8fa602e4  lw          $a2, 0x2E4($sp)
    ctx->pc = 0x45a840u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 740)));
label_45a844:
    // 0x45a844: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x45a844u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_45a848:
    // 0x45a848: 0x24e7ea30  addiu       $a3, $a3, -0x15D0
    ctx->pc = 0x45a848u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294961712));
label_45a84c:
    // 0x45a84c: 0x24080163  addiu       $t0, $zero, 0x163
    ctx->pc = 0x45a84cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 355));
label_45a850:
    // 0x45a850: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x45a850u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_45a854:
    // 0x45a854: 0x2529ead0  addiu       $t1, $t1, -0x1530
    ctx->pc = 0x45a854u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294961872));
label_45a858:
    // 0x45a858: 0xc113940  jal         func_44E500
label_45a85c:
    if (ctx->pc == 0x45A85Cu) {
        ctx->pc = 0x45A860u;
        goto label_45a860;
    }
    ctx->pc = 0x45A858u;
    SET_GPR_U32(ctx, 31, 0x45A860u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x45A858u, 0x45A860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45A860u;
label_45a860:
    // 0x45a860: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x45a860u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_45a864:
    // 0x45a864: 0x2785b148  addiu       $a1, $gp, -0x4EB8
    ctx->pc = 0x45a864u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294947144));
label_45a868:
    // 0x45a868: 0xc115c24  jal         func_457090
label_45a86c:
    if (ctx->pc == 0x45A86Cu) {
        ctx->pc = 0x45A870u;
        goto label_45a870;
    }
    ctx->pc = 0x45A868u;
    SET_GPR_U32(ctx, 31, 0x45A870u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x45A868u, 0x45A870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45A870u;
label_45a870:
    // 0x45a870: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x45a870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_45a874:
    // 0x45a874: 0x8fa202e8  lw          $v0, 0x2E8($sp)
    ctx->pc = 0x45a874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 744)));
label_45a878:
    // 0x45a878: 0x40f809  jalr        $v0
label_45a87c:
    if (ctx->pc == 0x45A87Cu) {
        ctx->pc = 0x45A880u;
        goto label_45a880;
    }
    ctx->pc = 0x45A878u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x45A880u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45A878u, 0x45A880u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x45A880u;
label_45a880:
    // 0x45a880: 0xaf82b144  sw          $v0, -0x4EBC($gp)
    ctx->pc = 0x45a880u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947140), GPR_U32(ctx, 2));
label_45a884:
    // 0x45a884: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x45a884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_45a888:
    // 0x45a888: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_45a88c:
    if (ctx->pc == 0x45A88Cu) {
        ctx->pc = 0x45A890u;
        goto label_45a890;
    }
    ctx->pc = 0x45A888u;
    {
        const bool branch_taken_0x45a888 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45a888) {
            ctx->pc = 0x45A898u;
            goto label_45a898;
        }
    }
    ctx->pc = 0x45A890u;
label_45a890:
    // 0x45a890: 0xd  break       0
    ctx->pc = 0x45a890u;
    runtime->handleBreak(rdram, ctx);
label_45a894:
    // 0x45a894: 0x0  nop
    ctx->pc = 0x45a894u;
    // NOP
label_45a898:
    // 0x45a898: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x45a898u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_45a89c:
    // 0x45a89c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x45a89cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_45a8a0:
    // 0x45a8a0: 0xc11392c  jal         func_44E4B0
label_45a8a4:
    if (ctx->pc == 0x45A8A4u) {
        ctx->pc = 0x45A8A8u;
        goto label_45a8a8;
    }
    ctx->pc = 0x45A8A0u;
    SET_GPR_U32(ctx, 31, 0x45A8A8u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x45A8A0u, 0x45A8A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45A8A8u;
label_45a8a8:
    // 0x45a8a8: 0x12000079  beqz        $s0, . + 4 + (0x79 << 2)
label_45a8ac:
    if (ctx->pc == 0x45A8ACu) {
        ctx->pc = 0x45A8B0u;
        goto label_45a8b0;
    }
    ctx->pc = 0x45A8A8u;
    {
        const bool branch_taken_0x45a8a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x45a8a8) {
            ctx->pc = 0x45AA90u;
            goto label_45aa90;
        }
    }
    ctx->pc = 0x45A8B0u;
label_45a8b0:
    // 0x45a8b0: 0x8e020134  lw          $v0, 0x134($s0)
    ctx->pc = 0x45a8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 308)));
label_45a8b4:
    // 0x45a8b4: 0x10400076  beqz        $v0, . + 4 + (0x76 << 2)
label_45a8b8:
    if (ctx->pc == 0x45A8B8u) {
        ctx->pc = 0x45A8BCu;
        goto label_45a8bc;
    }
    ctx->pc = 0x45A8B4u;
    {
        const bool branch_taken_0x45a8b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45a8b4) {
            ctx->pc = 0x45AA90u;
            goto label_45aa90;
        }
    }
    ctx->pc = 0x45A8BCu;
label_45a8bc:
    // 0x45a8bc: 0x8e120000  lw          $s2, 0x0($s0)
    ctx->pc = 0x45a8bcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_45a8c0:
    // 0x45a8c0: 0x8e02012c  lw          $v0, 0x12C($s0)
    ctx->pc = 0x45a8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
label_45a8c4:
    // 0x45a8c4: 0x18400054  blez        $v0, . + 4 + (0x54 << 2)
label_45a8c8:
    if (ctx->pc == 0x45A8C8u) {
        ctx->pc = 0x45A8CCu;
        goto label_45a8cc;
    }
    ctx->pc = 0x45A8C4u;
    {
        const bool branch_taken_0x45a8c4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x45a8c4) {
            ctx->pc = 0x45AA18u;
            goto label_45aa18;
        }
    }
    ctx->pc = 0x45A8CCu;
label_45a8cc:
    // 0x45a8cc: 0x8e02012c  lw          $v0, 0x12C($s0)
    ctx->pc = 0x45a8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
label_45a8d0:
    // 0x45a8d0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_45a8d4:
    if (ctx->pc == 0x45A8D4u) {
        ctx->pc = 0x45A8D8u;
        goto label_45a8d8;
    }
    ctx->pc = 0x45A8D0u;
    {
        const bool branch_taken_0x45a8d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45a8d0) {
            ctx->pc = 0x45A8E4u;
            goto label_45a8e4;
        }
    }
    ctx->pc = 0x45A8D8u;
label_45a8d8:
    // 0x45a8d8: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x45a8d8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_45a8dc:
    // 0x45a8dc: 0x10000002  b           . + 4 + (0x2 << 2)
label_45a8e0:
    if (ctx->pc == 0x45A8E0u) {
        ctx->pc = 0x45A8E4u;
        goto label_45a8e4;
    }
    ctx->pc = 0x45A8DCu;
    {
        const bool branch_taken_0x45a8dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45a8dc) {
            ctx->pc = 0x45A8E8u;
            goto label_45a8e8;
        }
    }
    ctx->pc = 0x45A8E4u;
label_45a8e4:
    // 0x45a8e4: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x45a8e4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_45a8e8:
    // 0x45a8e8: 0x2a0f02d  daddu       $fp, $s5, $zero
    ctx->pc = 0x45a8e8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_45a8ec:
    // 0x45a8ec: 0x8e030128  lw          $v1, 0x128($s0)
    ctx->pc = 0x45a8ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 296)));
label_45a8f0:
    // 0x45a8f0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x45a8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_45a8f4:
    // 0x45a8f4: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_45a8f8:
    if (ctx->pc == 0x45A8F8u) {
        ctx->pc = 0x45A8FCu;
        goto label_45a8fc;
    }
    ctx->pc = 0x45A8F4u;
    {
        const bool branch_taken_0x45a8f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x45a8f4) {
            ctx->pc = 0x45A904u;
            goto label_45a904;
        }
    }
    ctx->pc = 0x45A8FCu;
label_45a8fc:
    // 0x45a8fc: 0x10000013  b           . + 4 + (0x13 << 2)
label_45a900:
    if (ctx->pc == 0x45A900u) {
        ctx->pc = 0x45A904u;
        goto label_45a904;
    }
    ctx->pc = 0x45A8FCu;
    {
        const bool branch_taken_0x45a8fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45a8fc) {
            ctx->pc = 0x45A94Cu;
            goto label_45a94c;
        }
    }
    ctx->pc = 0x45A904u;
label_45a904:
    // 0x45a904: 0x8e05011c  lw          $a1, 0x11C($s0)
    ctx->pc = 0x45a904u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
label_45a908:
    // 0x45a908: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x45a908u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_45a90c:
    // 0x45a90c: 0xc116d44  jal         func_45B510
label_45a910:
    if (ctx->pc == 0x45A910u) {
        ctx->pc = 0x45A914u;
        goto label_45a914;
    }
    ctx->pc = 0x45A90Cu;
    SET_GPR_U32(ctx, 31, 0x45A914u);
    ctx->pc = 0x45B510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45B510u, 0x45A90Cu, 0x45A914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45A914u;
label_45a914:
    // 0x45a914: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x45a914u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_45a918:
    // 0x45a918: 0x8e030114  lw          $v1, 0x114($s0)
    ctx->pc = 0x45a918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
label_45a91c:
    // 0x45a91c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x45a91cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_45a920:
    // 0x45a920: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
label_45a924:
    if (ctx->pc == 0x45A924u) {
        ctx->pc = 0x45A928u;
        goto label_45a928;
    }
    ctx->pc = 0x45A920u;
    {
        const bool branch_taken_0x45a920 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x45a920) {
            ctx->pc = 0x45A950u;
            goto label_45a950;
        }
    }
    ctx->pc = 0x45A928u;
label_45a928:
    // 0x45a928: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_45a92c:
    if (ctx->pc == 0x45A92Cu) {
        ctx->pc = 0x45A930u;
        goto label_45a930;
    }
    ctx->pc = 0x45A928u;
    {
        const bool branch_taken_0x45a928 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x45a928) {
            ctx->pc = 0x45A93Cu;
            goto label_45a93c;
        }
    }
    ctx->pc = 0x45A930u;
label_45a930:
    // 0x45a930: 0x241400ff  addiu       $s4, $zero, 0xFF
    ctx->pc = 0x45a930u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_45a934:
    // 0x45a934: 0x10000002  b           . + 4 + (0x2 << 2)
label_45a938:
    if (ctx->pc == 0x45A938u) {
        ctx->pc = 0x45A93Cu;
        goto label_45a93c;
    }
    ctx->pc = 0x45A934u;
    {
        const bool branch_taken_0x45a934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45a934) {
            ctx->pc = 0x45A940u;
            goto label_45a940;
        }
    }
    ctx->pc = 0x45A93Cu;
label_45a93c:
    // 0x45a93c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x45a93cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_45a940:
    // 0x45a940: 0x280882d  daddu       $s1, $s4, $zero
    ctx->pc = 0x45a940u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_45a944:
    // 0x45a944: 0x10000002  b           . + 4 + (0x2 << 2)
label_45a948:
    if (ctx->pc == 0x45A948u) {
        ctx->pc = 0x45A94Cu;
        goto label_45a94c;
    }
    ctx->pc = 0x45A944u;
    {
        const bool branch_taken_0x45a944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45a944) {
            ctx->pc = 0x45A950u;
            goto label_45a950;
        }
    }
    ctx->pc = 0x45A94Cu;
label_45a94c:
    // 0x45a94c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x45a94cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_45a950:
    // 0x45a950: 0x8e020118  lw          $v0, 0x118($s0)
    ctx->pc = 0x45a950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
label_45a954:
    // 0x45a954: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
label_45a958:
    if (ctx->pc == 0x45A958u) {
        ctx->pc = 0x45A95Cu;
        goto label_45a95c;
    }
    ctx->pc = 0x45A954u;
    {
        const bool branch_taken_0x45a954 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x45a954) {
            ctx->pc = 0x45A994u;
            goto label_45a994;
        }
    }
    ctx->pc = 0x45A95Cu;
label_45a95c:
    // 0x45a95c: 0x8e030114  lw          $v1, 0x114($s0)
    ctx->pc = 0x45a95cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
label_45a960:
    // 0x45a960: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x45a960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_45a964:
    // 0x45a964: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_45a968:
    if (ctx->pc == 0x45A968u) {
        ctx->pc = 0x45A96Cu;
        goto label_45a96c;
    }
    ctx->pc = 0x45A964u;
    {
        const bool branch_taken_0x45a964 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x45a964) {
            ctx->pc = 0x45A97Cu;
            goto label_45a97c;
        }
    }
    ctx->pc = 0x45A96Cu;
label_45a96c:
    // 0x45a96c: 0x8e030114  lw          $v1, 0x114($s0)
    ctx->pc = 0x45a96cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
label_45a970:
    // 0x45a970: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x45a970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_45a974:
    // 0x45a974: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
label_45a978:
    if (ctx->pc == 0x45A978u) {
        ctx->pc = 0x45A97Cu;
        goto label_45a97c;
    }
    ctx->pc = 0x45A974u;
    {
        const bool branch_taken_0x45a974 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x45a974) {
            ctx->pc = 0x45A994u;
            goto label_45a994;
        }
    }
    ctx->pc = 0x45A97Cu;
label_45a97c:
    // 0x45a97c: 0x8fa40300  lw          $a0, 0x300($sp)
    ctx->pc = 0x45a97cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 768)));
label_45a980:
    // 0x45a980: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x45a980u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_45a984:
    // 0x45a984: 0xc116ad4  jal         func_45AB50
label_45a988:
    if (ctx->pc == 0x45A988u) {
        ctx->pc = 0x45A98Cu;
        goto label_45a98c;
    }
    ctx->pc = 0x45A984u;
    SET_GPR_U32(ctx, 31, 0x45A98Cu);
    ctx->pc = 0x45AB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45AB50u, 0x45A984u, 0x45A98Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45A98Cu;
label_45a98c:
    // 0x45a98c: 0x1c400008  bgtz        $v0, . + 4 + (0x8 << 2)
label_45a990:
    if (ctx->pc == 0x45A990u) {
        ctx->pc = 0x45A994u;
        goto label_45a994;
    }
    ctx->pc = 0x45A98Cu;
    {
        const bool branch_taken_0x45a98c = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x45a98c) {
            ctx->pc = 0x45A9B0u;
            goto label_45a9b0;
        }
    }
    ctx->pc = 0x45A994u;
label_45a994:
    // 0x45a994: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x45a994u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_45a998:
    // 0x45a998: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x45a998u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_45a99c:
    // 0x45a99c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x45a99cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_45a9a0:
    // 0x45a9a0: 0x8e020134  lw          $v0, 0x134($s0)
    ctx->pc = 0x45a9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 308)));
label_45a9a4:
    // 0x45a9a4: 0x40f809  jalr        $v0
label_45a9a8:
    if (ctx->pc == 0x45A9A8u) {
        ctx->pc = 0x45A9ACu;
        goto label_45a9ac;
    }
    ctx->pc = 0x45A9A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x45A9ACu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45A9A4u, 0x45A9ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x45A9ACu;
label_45a9ac:
    // 0x45a9ac: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x45a9acu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_45a9b0:
    // 0x45a9b0: 0x8e020114  lw          $v0, 0x114($s0)
    ctx->pc = 0x45a9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
label_45a9b4:
    // 0x45a9b4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_45a9b8:
    if (ctx->pc == 0x45A9B8u) {
        ctx->pc = 0x45A9BCu;
        goto label_45a9bc;
    }
    ctx->pc = 0x45A9B4u;
    {
        const bool branch_taken_0x45a9b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x45a9b4) {
            ctx->pc = 0x45A9C8u;
            goto label_45a9c8;
        }
    }
    ctx->pc = 0x45A9BCu;
label_45a9bc:
    // 0x45a9bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x45a9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_45a9c0:
    // 0x45a9c0: 0x12c20005  beq         $s6, $v0, . + 4 + (0x5 << 2)
label_45a9c4:
    if (ctx->pc == 0x45A9C4u) {
        ctx->pc = 0x45A9C8u;
        goto label_45a9c8;
    }
    ctx->pc = 0x45A9C0u;
    {
        const bool branch_taken_0x45a9c0 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 2));
        if (branch_taken_0x45a9c0) {
            ctx->pc = 0x45A9D8u;
            goto label_45a9d8;
        }
    }
    ctx->pc = 0x45A9C8u;
label_45a9c8:
    // 0x45a9c8: 0x8e030128  lw          $v1, 0x128($s0)
    ctx->pc = 0x45a9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 296)));
label_45a9cc:
    // 0x45a9cc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x45a9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_45a9d0:
    // 0x45a9d0: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_45a9d4:
    if (ctx->pc == 0x45A9D4u) {
        ctx->pc = 0x45A9D8u;
        goto label_45a9d8;
    }
    ctx->pc = 0x45A9D0u;
    {
        const bool branch_taken_0x45a9d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x45a9d0) {
            ctx->pc = 0x45A9E8u;
            goto label_45a9e8;
        }
    }
    ctx->pc = 0x45A9D8u;
label_45a9d8:
    // 0x45a9d8: 0x8fa40300  lw          $a0, 0x300($sp)
    ctx->pc = 0x45a9d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 768)));
label_45a9dc:
    // 0x45a9dc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x45a9dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_45a9e0:
    // 0x45a9e0: 0xc116af0  jal         func_45ABC0
label_45a9e4:
    if (ctx->pc == 0x45A9E4u) {
        ctx->pc = 0x45A9E8u;
        goto label_45a9e8;
    }
    ctx->pc = 0x45A9E0u;
    SET_GPR_U32(ctx, 31, 0x45A9E8u);
    ctx->pc = 0x45ABC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45ABC0u, 0x45A9E0u, 0x45A9E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45A9E8u;
label_45a9e8:
    // 0x45a9e8: 0x8e030128  lw          $v1, 0x128($s0)
    ctx->pc = 0x45a9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 296)));
label_45a9ec:
    // 0x45a9ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x45a9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_45a9f0:
    // 0x45a9f0: 0x14620027  bne         $v1, $v0, . + 4 + (0x27 << 2)
label_45a9f4:
    if (ctx->pc == 0x45A9F4u) {
        ctx->pc = 0x45A9F8u;
        goto label_45a9f8;
    }
    ctx->pc = 0x45A9F0u;
    {
        const bool branch_taken_0x45a9f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x45a9f0) {
            ctx->pc = 0x45AA90u;
            goto label_45aa90;
        }
    }
    ctx->pc = 0x45A9F8u;
label_45a9f8:
    // 0x45a9f8: 0x8fa40300  lw          $a0, 0x300($sp)
    ctx->pc = 0x45a9f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 768)));
label_45a9fc:
    // 0x45a9fc: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x45a9fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_45aa00:
    // 0x45aa00: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x45aa00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_45aa04:
    // 0x45aa04: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x45aa04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_45aa08:
    // 0x45aa08: 0xc11687c  jal         func_45A1F0
label_45aa0c:
    if (ctx->pc == 0x45AA0Cu) {
        ctx->pc = 0x45AA10u;
        goto label_45aa10;
    }
    ctx->pc = 0x45AA08u;
    SET_GPR_U32(ctx, 31, 0x45AA10u);
    ctx->pc = 0x45A1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45A1F0u, 0x45AA08u, 0x45AA10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45AA10u;
label_45aa10:
    // 0x45aa10: 0x1000001f  b           . + 4 + (0x1F << 2)
label_45aa14:
    if (ctx->pc == 0x45AA14u) {
        ctx->pc = 0x45AA18u;
        goto label_45aa18;
    }
    ctx->pc = 0x45AA10u;
    {
        const bool branch_taken_0x45aa10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45aa10) {
            ctx->pc = 0x45AA90u;
            goto label_45aa90;
        }
    }
    ctx->pc = 0x45AA18u;
label_45aa18:
    // 0x45aa18: 0x8fa40300  lw          $a0, 0x300($sp)
    ctx->pc = 0x45aa18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 768)));
label_45aa1c:
    // 0x45aa1c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x45aa1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_45aa20:
    // 0x45aa20: 0xc116ad4  jal         func_45AB50
label_45aa24:
    if (ctx->pc == 0x45AA24u) {
        ctx->pc = 0x45AA28u;
        goto label_45aa28;
    }
    ctx->pc = 0x45AA20u;
    SET_GPR_U32(ctx, 31, 0x45AA28u);
    ctx->pc = 0x45AB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45AB50u, 0x45AA20u, 0x45AA28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45AA28u;
label_45aa28:
    // 0x45aa28: 0x18400019  blez        $v0, . + 4 + (0x19 << 2)
label_45aa2c:
    if (ctx->pc == 0x45AA2Cu) {
        ctx->pc = 0x45AA30u;
        goto label_45aa30;
    }
    ctx->pc = 0x45AA28u;
    {
        const bool branch_taken_0x45aa28 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x45aa28) {
            ctx->pc = 0x45AA90u;
            goto label_45aa90;
        }
    }
    ctx->pc = 0x45AA30u;
label_45aa30:
    // 0x45aa30: 0x8e030120  lw          $v1, 0x120($s0)
    ctx->pc = 0x45aa30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 288)));
label_45aa34:
    // 0x45aa34: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x45aa34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_45aa38:
    // 0x45aa38: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
label_45aa3c:
    if (ctx->pc == 0x45AA3Cu) {
        ctx->pc = 0x45AA40u;
        goto label_45aa40;
    }
    ctx->pc = 0x45AA38u;
    {
        const bool branch_taken_0x45aa38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x45aa38) {
            ctx->pc = 0x45AA60u;
            goto label_45aa60;
        }
    }
    ctx->pc = 0x45AA40u;
label_45aa40:
    // 0x45aa40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x45aa40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_45aa44:
    // 0x45aa44: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x45aa44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_45aa48:
    // 0x45aa48: 0x2406007f  addiu       $a2, $zero, 0x7F
    ctx->pc = 0x45aa48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
label_45aa4c:
    // 0x45aa4c: 0x8e020134  lw          $v0, 0x134($s0)
    ctx->pc = 0x45aa4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 308)));
label_45aa50:
    // 0x45aa50: 0x40f809  jalr        $v0
label_45aa54:
    if (ctx->pc == 0x45AA54u) {
        ctx->pc = 0x45AA58u;
        goto label_45aa58;
    }
    ctx->pc = 0x45AA50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x45AA58u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45AA50u, 0x45AA58u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x45AA58u;
label_45aa58:
    // 0x45aa58: 0x10000007  b           . + 4 + (0x7 << 2)
label_45aa5c:
    if (ctx->pc == 0x45AA5Cu) {
        ctx->pc = 0x45AA60u;
        goto label_45aa60;
    }
    ctx->pc = 0x45AA58u;
    {
        const bool branch_taken_0x45aa58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45aa58) {
            ctx->pc = 0x45AA78u;
            goto label_45aa78;
        }
    }
    ctx->pc = 0x45AA60u;
label_45aa60:
    // 0x45aa60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x45aa60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_45aa64:
    // 0x45aa64: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x45aa64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_45aa68:
    // 0x45aa68: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x45aa68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_45aa6c:
    // 0x45aa6c: 0x8e020134  lw          $v0, 0x134($s0)
    ctx->pc = 0x45aa6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 308)));
label_45aa70:
    // 0x45aa70: 0x40f809  jalr        $v0
label_45aa74:
    if (ctx->pc == 0x45AA74u) {
        ctx->pc = 0x45AA78u;
        goto label_45aa78;
    }
    ctx->pc = 0x45AA70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x45AA78u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45AA70u, 0x45AA78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x45AA78u;
label_45aa78:
    // 0x45aa78: 0x8fa40300  lw          $a0, 0x300($sp)
    ctx->pc = 0x45aa78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 768)));
label_45aa7c:
    // 0x45aa7c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x45aa7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_45aa80:
    // 0x45aa80: 0x8e060128  lw          $a2, 0x128($s0)
    ctx->pc = 0x45aa80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 296)));
label_45aa84:
    // 0x45aa84: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x45aa84u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_45aa88:
    // 0x45aa88: 0xc11687c  jal         func_45A1F0
label_45aa8c:
    if (ctx->pc == 0x45AA8Cu) {
        ctx->pc = 0x45AA90u;
        goto label_45aa90;
    }
    ctx->pc = 0x45AA88u;
    SET_GPR_U32(ctx, 31, 0x45AA90u);
    ctx->pc = 0x45A1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45A1F0u, 0x45AA88u, 0x45AA90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45AA90u;
label_45aa90:
    // 0x45aa90: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x45aa90u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_45aa94:
    // 0x45aa94: 0x277102b  sltu        $v0, $s3, $s7
    ctx->pc = 0x45aa94u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
label_45aa98:
    // 0x45aa98: 0x1440ff22  bnez        $v0, . + 4 + (-0xDE << 2)
label_45aa9c:
    if (ctx->pc == 0x45AA9Cu) {
        ctx->pc = 0x45AAA0u;
        goto label_45aaa0;
    }
    ctx->pc = 0x45AA98u;
    {
        const bool branch_taken_0x45aa98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x45aa98) {
            ctx->pc = 0x45A724u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45a724;
        }
    }
    ctx->pc = 0x45AAA0u;
label_45aaa0:
    // 0x45aaa0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x45aaa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_45aaa4:
    // 0x45aaa4: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x45aaa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_45aaa8:
    // 0x45aaa8: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x45aaa8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_45aaac:
    // 0x45aaac: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x45aaacu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_45aab0:
    // 0x45aab0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x45aab0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_45aab4:
    // 0x45aab4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x45aab4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_45aab8:
    // 0x45aab8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x45aab8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_45aabc:
    // 0x45aabc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x45aabcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_45aac0:
    // 0x45aac0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x45aac0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_45aac4:
    // 0x45aac4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x45aac4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_45aac8:
    // 0x45aac8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x45aac8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_45aacc:
    // 0x45aacc: 0x27bd0310  addiu       $sp, $sp, 0x310
    ctx->pc = 0x45aaccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 784));
label_45aad0:
    // 0x45aad0: 0x3e00008  jr          $ra
label_45aad4:
    if (ctx->pc == 0x45AAD4u) {
        ctx->pc = 0x45AAD8u;
        goto label_45aad8;
    }
    ctx->pc = 0x45AAD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45AAD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x45AAD8u;
label_45aad8:
    // 0x45aad8: 0x0  nop
    ctx->pc = 0x45aad8u;
    // NOP
label_45aadc:
    // 0x45aadc: 0x0  nop
    ctx->pc = 0x45aadcu;
    // NOP
    ctx->pc = 0x45aae0u;
}
