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

// Function: sub_00481870
// Address: 0x481870 - 0x481aa0
void sub_00481870_0x481870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00481870_0x481870");
#endif

    switch (ctx->pc) {
        case 0x481870u: goto label_481870;
        case 0x481874u: goto label_481874;
        case 0x481878u: goto label_481878;
        case 0x48187cu: goto label_48187c;
        case 0x481880u: goto label_481880;
        case 0x481884u: goto label_481884;
        case 0x481888u: goto label_481888;
        case 0x48188cu: goto label_48188c;
        case 0x481890u: goto label_481890;
        case 0x481894u: goto label_481894;
        case 0x481898u: goto label_481898;
        case 0x48189cu: goto label_48189c;
        case 0x4818a0u: goto label_4818a0;
        case 0x4818a4u: goto label_4818a4;
        case 0x4818a8u: goto label_4818a8;
        case 0x4818acu: goto label_4818ac;
        case 0x4818b0u: goto label_4818b0;
        case 0x4818b4u: goto label_4818b4;
        case 0x4818b8u: goto label_4818b8;
        case 0x4818bcu: goto label_4818bc;
        case 0x4818c0u: goto label_4818c0;
        case 0x4818c4u: goto label_4818c4;
        case 0x4818c8u: goto label_4818c8;
        case 0x4818ccu: goto label_4818cc;
        case 0x4818d0u: goto label_4818d0;
        case 0x4818d4u: goto label_4818d4;
        case 0x4818d8u: goto label_4818d8;
        case 0x4818dcu: goto label_4818dc;
        case 0x4818e0u: goto label_4818e0;
        case 0x4818e4u: goto label_4818e4;
        case 0x4818e8u: goto label_4818e8;
        case 0x4818ecu: goto label_4818ec;
        case 0x4818f0u: goto label_4818f0;
        case 0x4818f4u: goto label_4818f4;
        case 0x4818f8u: goto label_4818f8;
        case 0x4818fcu: goto label_4818fc;
        case 0x481900u: goto label_481900;
        case 0x481904u: goto label_481904;
        case 0x481908u: goto label_481908;
        case 0x48190cu: goto label_48190c;
        case 0x481910u: goto label_481910;
        case 0x481914u: goto label_481914;
        case 0x481918u: goto label_481918;
        case 0x48191cu: goto label_48191c;
        case 0x481920u: goto label_481920;
        case 0x481924u: goto label_481924;
        case 0x481928u: goto label_481928;
        case 0x48192cu: goto label_48192c;
        case 0x481930u: goto label_481930;
        case 0x481934u: goto label_481934;
        case 0x481938u: goto label_481938;
        case 0x48193cu: goto label_48193c;
        case 0x481940u: goto label_481940;
        case 0x481944u: goto label_481944;
        case 0x481948u: goto label_481948;
        case 0x48194cu: goto label_48194c;
        case 0x481950u: goto label_481950;
        case 0x481954u: goto label_481954;
        case 0x481958u: goto label_481958;
        case 0x48195cu: goto label_48195c;
        case 0x481960u: goto label_481960;
        case 0x481964u: goto label_481964;
        case 0x481968u: goto label_481968;
        case 0x48196cu: goto label_48196c;
        case 0x481970u: goto label_481970;
        case 0x481974u: goto label_481974;
        case 0x481978u: goto label_481978;
        case 0x48197cu: goto label_48197c;
        case 0x481980u: goto label_481980;
        case 0x481984u: goto label_481984;
        case 0x481988u: goto label_481988;
        case 0x48198cu: goto label_48198c;
        case 0x481990u: goto label_481990;
        case 0x481994u: goto label_481994;
        case 0x481998u: goto label_481998;
        case 0x48199cu: goto label_48199c;
        case 0x4819a0u: goto label_4819a0;
        case 0x4819a4u: goto label_4819a4;
        case 0x4819a8u: goto label_4819a8;
        case 0x4819acu: goto label_4819ac;
        case 0x4819b0u: goto label_4819b0;
        case 0x4819b4u: goto label_4819b4;
        case 0x4819b8u: goto label_4819b8;
        case 0x4819bcu: goto label_4819bc;
        case 0x4819c0u: goto label_4819c0;
        case 0x4819c4u: goto label_4819c4;
        case 0x4819c8u: goto label_4819c8;
        case 0x4819ccu: goto label_4819cc;
        case 0x4819d0u: goto label_4819d0;
        case 0x4819d4u: goto label_4819d4;
        case 0x4819d8u: goto label_4819d8;
        case 0x4819dcu: goto label_4819dc;
        case 0x4819e0u: goto label_4819e0;
        case 0x4819e4u: goto label_4819e4;
        case 0x4819e8u: goto label_4819e8;
        case 0x4819ecu: goto label_4819ec;
        case 0x4819f0u: goto label_4819f0;
        case 0x4819f4u: goto label_4819f4;
        case 0x4819f8u: goto label_4819f8;
        case 0x4819fcu: goto label_4819fc;
        case 0x481a00u: goto label_481a00;
        case 0x481a04u: goto label_481a04;
        case 0x481a08u: goto label_481a08;
        case 0x481a0cu: goto label_481a0c;
        case 0x481a10u: goto label_481a10;
        case 0x481a14u: goto label_481a14;
        case 0x481a18u: goto label_481a18;
        case 0x481a1cu: goto label_481a1c;
        case 0x481a20u: goto label_481a20;
        case 0x481a24u: goto label_481a24;
        case 0x481a28u: goto label_481a28;
        case 0x481a2cu: goto label_481a2c;
        case 0x481a30u: goto label_481a30;
        case 0x481a34u: goto label_481a34;
        case 0x481a38u: goto label_481a38;
        case 0x481a3cu: goto label_481a3c;
        case 0x481a40u: goto label_481a40;
        case 0x481a44u: goto label_481a44;
        case 0x481a48u: goto label_481a48;
        case 0x481a4cu: goto label_481a4c;
        case 0x481a50u: goto label_481a50;
        case 0x481a54u: goto label_481a54;
        case 0x481a58u: goto label_481a58;
        case 0x481a5cu: goto label_481a5c;
        case 0x481a60u: goto label_481a60;
        case 0x481a64u: goto label_481a64;
        case 0x481a68u: goto label_481a68;
        case 0x481a6cu: goto label_481a6c;
        case 0x481a70u: goto label_481a70;
        case 0x481a74u: goto label_481a74;
        case 0x481a78u: goto label_481a78;
        case 0x481a7cu: goto label_481a7c;
        case 0x481a80u: goto label_481a80;
        case 0x481a84u: goto label_481a84;
        case 0x481a88u: goto label_481a88;
        case 0x481a8cu: goto label_481a8c;
        case 0x481a90u: goto label_481a90;
        case 0x481a94u: goto label_481a94;
        case 0x481a98u: goto label_481a98;
        case 0x481a9cu: goto label_481a9c;
        default: break;
    }

    ctx->pc = 0x481870u;

label_481870:
    // 0x481870: 0x27bdfd10  addiu       $sp, $sp, -0x2F0
    ctx->pc = 0x481870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966544));
label_481874:
    // 0x481874: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x481874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_481878:
    // 0x481878: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x481878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_48187c:
    // 0x48187c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x48187cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_481880:
    // 0x481880: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x481880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_481884:
    // 0x481884: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x481884u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_481888:
    // 0x481888: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x481888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_48188c:
    // 0x48188c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x48188cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_481890:
    // 0x481890: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x481890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_481894:
    // 0x481894: 0xafa402e0  sw          $a0, 0x2E0($sp)
    ctx->pc = 0x481894u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 736), GPR_U32(ctx, 4));
label_481898:
    // 0x481898: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x481898u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_48189c:
    // 0x48189c: 0x8fa402e0  lw          $a0, 0x2E0($sp)
    ctx->pc = 0x48189cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 736)));
label_4818a0:
    // 0x4818a0: 0xc124e2c  jal         func_4938B0
label_4818a4:
    if (ctx->pc == 0x4818A4u) {
        ctx->pc = 0x4818A8u;
        goto label_4818a8;
    }
    ctx->pc = 0x4818A0u;
    SET_GPR_U32(ctx, 31, 0x4818A8u);
    ctx->pc = 0x4938B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4938B0u, 0x4818A0u, 0x4818A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4818A8u;
label_4818a8:
    // 0x4818a8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4818a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4818ac:
    // 0x4818ac: 0x8e160018  lw          $s6, 0x18($s0)
    ctx->pc = 0x4818acu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_4818b0:
    // 0x4818b0: 0x12c0006c  beqz        $s6, . + 4 + (0x6C << 2)
label_4818b4:
    if (ctx->pc == 0x4818B4u) {
        ctx->pc = 0x4818B8u;
        goto label_4818b8;
    }
    ctx->pc = 0x4818B0u;
    {
        const bool branch_taken_0x4818b0 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x4818b0) {
            ctx->pc = 0x481A64u;
            goto label_481a64;
        }
    }
    ctx->pc = 0x4818B8u;
label_4818b8:
    // 0x4818b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4818b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4818bc:
    // 0x4818bc: 0xc0c8ecc  jal         func_323B30
label_4818c0:
    if (ctx->pc == 0x4818C0u) {
        ctx->pc = 0x4818C4u;
        goto label_4818c4;
    }
    ctx->pc = 0x4818BCu;
    SET_GPR_U32(ctx, 31, 0x4818C4u);
    ctx->pc = 0x323B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323B30u, 0x4818BCu, 0x4818C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4818C4u;
label_4818c4:
    // 0x4818c4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x4818c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4818c8:
    // 0x4818c8: 0x12600040  beqz        $s3, . + 4 + (0x40 << 2)
label_4818cc:
    if (ctx->pc == 0x4818CCu) {
        ctx->pc = 0x4818D0u;
        goto label_4818d0;
    }
    ctx->pc = 0x4818C8u;
    {
        const bool branch_taken_0x4818c8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x4818c8) {
            ctx->pc = 0x4819CCu;
            goto label_4819cc;
        }
    }
    ctx->pc = 0x4818D0u;
label_4818d0:
    // 0x4818d0: 0xc0f53aa  jal         func_3D4EA8
label_4818d4:
    if (ctx->pc == 0x4818D4u) {
        ctx->pc = 0x4818D8u;
        goto label_4818d8;
    }
    ctx->pc = 0x4818D0u;
    SET_GPR_U32(ctx, 31, 0x4818D8u);
    ctx->pc = 0x3D4EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4EA8u, 0x4818D0u, 0x4818D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4818D8u;
label_4818d8:
    // 0x4818d8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x4818d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4818dc:
    // 0x4818dc: 0x26720010  addiu       $s2, $s3, 0x10
    ctx->pc = 0x4818dcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_4818e0:
    // 0x4818e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4818e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4818e4:
    // 0x4818e4: 0xc0bc60c  jal         func_2F1830
label_4818e8:
    if (ctx->pc == 0x4818E8u) {
        ctx->pc = 0x4818ECu;
        goto label_4818ec;
    }
    ctx->pc = 0x4818E4u;
    SET_GPR_U32(ctx, 31, 0x4818ECu);
    ctx->pc = 0x2F1830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1830u, 0x4818E4u, 0x4818ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4818ECu;
label_4818ec:
    // 0x4818ec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4818ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4818f0:
    // 0x4818f0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4818f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4818f4:
    // 0x4818f4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x4818f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4818f8:
    // 0x4818f8: 0xc0bc710  jal         func_2F1C40
label_4818fc:
    if (ctx->pc == 0x4818FCu) {
        ctx->pc = 0x481900u;
        goto label_481900;
    }
    ctx->pc = 0x4818F8u;
    SET_GPR_U32(ctx, 31, 0x481900u);
    ctx->pc = 0x2F1C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1C40u, 0x4818F8u, 0x481900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x481900u;
label_481900:
    // 0x481900: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_481904:
    if (ctx->pc == 0x481904u) {
        ctx->pc = 0x481908u;
        goto label_481908;
    }
    ctx->pc = 0x481900u;
    {
        const bool branch_taken_0x481900 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x481900) {
            ctx->pc = 0x481930u;
            goto label_481930;
        }
    }
    ctx->pc = 0x481908u;
label_481908:
    // 0x481908: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x481908u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_48190c:
    // 0x48190c: 0xc0bc60c  jal         func_2F1830
label_481910:
    if (ctx->pc == 0x481910u) {
        ctx->pc = 0x481914u;
        goto label_481914;
    }
    ctx->pc = 0x48190Cu;
    SET_GPR_U32(ctx, 31, 0x481914u);
    ctx->pc = 0x2F1830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1830u, 0x48190Cu, 0x481914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x481914u;
label_481914:
    // 0x481914: 0x242a821  addu        $s5, $s2, $v0
    ctx->pc = 0x481914u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_481918:
    // 0x481918: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x481918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_48191c:
    // 0x48191c: 0xc0ba89e  jal         func_2EA278
label_481920:
    if (ctx->pc == 0x481920u) {
        ctx->pc = 0x481924u;
        goto label_481924;
    }
    ctx->pc = 0x48191Cu;
    SET_GPR_U32(ctx, 31, 0x481924u);
    ctx->pc = 0x2EA278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA278u, 0x48191Cu, 0x481924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x481924u;
label_481924:
    // 0x481924: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x481924u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_481928:
    // 0x481928: 0x1000004e  b           . + 4 + (0x4E << 2)
label_48192c:
    if (ctx->pc == 0x48192Cu) {
        ctx->pc = 0x481930u;
        goto label_481930;
    }
    ctx->pc = 0x481928u;
    {
        const bool branch_taken_0x481928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x481928) {
            ctx->pc = 0x481A64u;
            goto label_481a64;
        }
    }
    ctx->pc = 0x481930u;
label_481930:
    // 0x481930: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x481930u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_481934:
    // 0x481934: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x481934u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_481938:
    // 0x481938: 0x27a602d0  addiu       $a2, $sp, 0x2D0
    ctx->pc = 0x481938u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
label_48193c:
    // 0x48193c: 0xc115ee8  jal         func_457BA0
label_481940:
    if (ctx->pc == 0x481940u) {
        ctx->pc = 0x481944u;
        goto label_481944;
    }
    ctx->pc = 0x48193Cu;
    SET_GPR_U32(ctx, 31, 0x481944u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x48193Cu, 0x481944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x481944u;
label_481944:
    // 0x481944: 0x10400047  beqz        $v0, . + 4 + (0x47 << 2)
label_481948:
    if (ctx->pc == 0x481948u) {
        ctx->pc = 0x48194Cu;
        goto label_48194c;
    }
    ctx->pc = 0x481944u;
    {
        const bool branch_taken_0x481944 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x481944) {
            ctx->pc = 0x481A64u;
            goto label_481a64;
        }
    }
    ctx->pc = 0x48194Cu;
label_48194c:
    // 0x48194c: 0x8fa202d8  lw          $v0, 0x2D8($sp)
    ctx->pc = 0x48194cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 728)));
label_481950:
    // 0x481950: 0x10400044  beqz        $v0, . + 4 + (0x44 << 2)
label_481954:
    if (ctx->pc == 0x481954u) {
        ctx->pc = 0x481958u;
        goto label_481958;
    }
    ctx->pc = 0x481950u;
    {
        const bool branch_taken_0x481950 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x481950) {
            ctx->pc = 0x481A64u;
            goto label_481a64;
        }
    }
    ctx->pc = 0x481958u;
label_481958:
    // 0x481958: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x481958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_48195c:
    // 0x48195c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x48195cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_481960:
    // 0x481960: 0x8fa602d4  lw          $a2, 0x2D4($sp)
    ctx->pc = 0x481960u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 724)));
label_481964:
    // 0x481964: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x481964u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_481968:
    // 0x481968: 0x24e71920  addiu       $a3, $a3, 0x1920
    ctx->pc = 0x481968u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 6432));
label_48196c:
    // 0x48196c: 0x24080380  addiu       $t0, $zero, 0x380
    ctx->pc = 0x48196cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 896));
label_481970:
    // 0x481970: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x481970u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_481974:
    // 0x481974: 0xc113940  jal         func_44E500
label_481978:
    if (ctx->pc == 0x481978u) {
        ctx->pc = 0x48197Cu;
        goto label_48197c;
    }
    ctx->pc = 0x481974u;
    SET_GPR_U32(ctx, 31, 0x48197Cu);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x481974u, 0x48197Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48197Cu;
label_48197c:
    // 0x48197c: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x48197cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_481980:
    // 0x481980: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x481980u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_481984:
    // 0x481984: 0x24a51cd0  addiu       $a1, $a1, 0x1CD0
    ctx->pc = 0x481984u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7376));
label_481988:
    // 0x481988: 0xc115c24  jal         func_457090
label_48198c:
    if (ctx->pc == 0x48198Cu) {
        ctx->pc = 0x481990u;
        goto label_481990;
    }
    ctx->pc = 0x481988u;
    SET_GPR_U32(ctx, 31, 0x481990u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x481988u, 0x481990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x481990u;
label_481990:
    // 0x481990: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x481990u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_481994:
    // 0x481994: 0x8fa202d8  lw          $v0, 0x2D8($sp)
    ctx->pc = 0x481994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 728)));
label_481998:
    // 0x481998: 0x40f809  jalr        $v0
label_48199c:
    if (ctx->pc == 0x48199Cu) {
        ctx->pc = 0x4819A0u;
        goto label_4819a0;
    }
    ctx->pc = 0x481998u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4819A0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x481998u, 0x4819A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4819A0u;
label_4819a0:
    // 0x4819a0: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x4819a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_4819a4:
    // 0x4819a4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_4819a8:
    if (ctx->pc == 0x4819A8u) {
        ctx->pc = 0x4819ACu;
        goto label_4819ac;
    }
    ctx->pc = 0x4819A4u;
    {
        const bool branch_taken_0x4819a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4819a4) {
            ctx->pc = 0x4819B4u;
            goto label_4819b4;
        }
    }
    ctx->pc = 0x4819ACu;
label_4819ac:
    // 0x4819ac: 0xd  break       0
    ctx->pc = 0x4819acu;
    runtime->handleBreak(rdram, ctx);
label_4819b0:
    // 0x4819b0: 0x0  nop
    ctx->pc = 0x4819b0u;
    // NOP
label_4819b4:
    // 0x4819b4: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x4819b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_4819b8:
    // 0x4819b8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x4819b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4819bc:
    // 0x4819bc: 0xc11392c  jal         func_44E4B0
label_4819c0:
    if (ctx->pc == 0x4819C0u) {
        ctx->pc = 0x4819C4u;
        goto label_4819c4;
    }
    ctx->pc = 0x4819BCu;
    SET_GPR_U32(ctx, 31, 0x4819C4u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x4819BCu, 0x4819C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4819C4u;
label_4819c4:
    // 0x4819c4: 0x10000027  b           . + 4 + (0x27 << 2)
label_4819c8:
    if (ctx->pc == 0x4819C8u) {
        ctx->pc = 0x4819CCu;
        goto label_4819cc;
    }
    ctx->pc = 0x4819C4u;
    {
        const bool branch_taken_0x4819c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4819c4) {
            ctx->pc = 0x481A64u;
            goto label_481a64;
        }
    }
    ctx->pc = 0x4819CCu;
label_4819cc:
    // 0x4819cc: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x4819ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_4819d0:
    // 0x4819d0: 0x2405fffe  addiu       $a1, $zero, -0x2
    ctx->pc = 0x4819d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_4819d4:
    // 0x4819d4: 0x27a602c0  addiu       $a2, $sp, 0x2C0
    ctx->pc = 0x4819d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
label_4819d8:
    // 0x4819d8: 0xc115ee8  jal         func_457BA0
label_4819dc:
    if (ctx->pc == 0x4819DCu) {
        ctx->pc = 0x4819E0u;
        goto label_4819e0;
    }
    ctx->pc = 0x4819D8u;
    SET_GPR_U32(ctx, 31, 0x4819E0u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x4819D8u, 0x4819E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4819E0u;
label_4819e0:
    // 0x4819e0: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_4819e4:
    if (ctx->pc == 0x4819E4u) {
        ctx->pc = 0x4819E8u;
        goto label_4819e8;
    }
    ctx->pc = 0x4819E0u;
    {
        const bool branch_taken_0x4819e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4819e0) {
            ctx->pc = 0x481A64u;
            goto label_481a64;
        }
    }
    ctx->pc = 0x4819E8u;
label_4819e8:
    // 0x4819e8: 0x8fa202c8  lw          $v0, 0x2C8($sp)
    ctx->pc = 0x4819e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 712)));
label_4819ec:
    // 0x4819ec: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_4819f0:
    if (ctx->pc == 0x4819F0u) {
        ctx->pc = 0x4819F4u;
        goto label_4819f4;
    }
    ctx->pc = 0x4819ECu;
    {
        const bool branch_taken_0x4819ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4819ec) {
            ctx->pc = 0x481A64u;
            goto label_481a64;
        }
    }
    ctx->pc = 0x4819F4u;
label_4819f4:
    // 0x4819f4: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x4819f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_4819f8:
    // 0x4819f8: 0x2405fffe  addiu       $a1, $zero, -0x2
    ctx->pc = 0x4819f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_4819fc:
    // 0x4819fc: 0x8fa602c4  lw          $a2, 0x2C4($sp)
    ctx->pc = 0x4819fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 708)));
label_481a00:
    // 0x481a00: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x481a00u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_481a04:
    // 0x481a04: 0x24e71920  addiu       $a3, $a3, 0x1920
    ctx->pc = 0x481a04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 6432));
label_481a08:
    // 0x481a08: 0x24080385  addiu       $t0, $zero, 0x385
    ctx->pc = 0x481a08u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 901));
label_481a0c:
    // 0x481a0c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x481a0cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_481a10:
    // 0x481a10: 0xc113940  jal         func_44E500
label_481a14:
    if (ctx->pc == 0x481A14u) {
        ctx->pc = 0x481A18u;
        goto label_481a18;
    }
    ctx->pc = 0x481A10u;
    SET_GPR_U32(ctx, 31, 0x481A18u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x481A10u, 0x481A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x481A18u;
label_481a18:
    // 0x481a18: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x481a18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_481a1c:
    // 0x481a1c: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x481a1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_481a20:
    // 0x481a20: 0x24a51ca0  addiu       $a1, $a1, 0x1CA0
    ctx->pc = 0x481a20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7328));
label_481a24:
    // 0x481a24: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x481a24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_481a28:
    // 0x481a28: 0xc115c24  jal         func_457090
label_481a2c:
    if (ctx->pc == 0x481A2Cu) {
        ctx->pc = 0x481A30u;
        goto label_481a30;
    }
    ctx->pc = 0x481A28u;
    SET_GPR_U32(ctx, 31, 0x481A30u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x481A28u, 0x481A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x481A30u;
label_481a30:
    // 0x481a30: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x481a30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_481a34:
    // 0x481a34: 0x8fa202c8  lw          $v0, 0x2C8($sp)
    ctx->pc = 0x481a34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 712)));
label_481a38:
    // 0x481a38: 0x40f809  jalr        $v0
label_481a3c:
    if (ctx->pc == 0x481A3Cu) {
        ctx->pc = 0x481A40u;
        goto label_481a40;
    }
    ctx->pc = 0x481A38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x481A40u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x481A38u, 0x481A40u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x481A40u;
label_481a40:
    // 0x481a40: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x481a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_481a44:
    // 0x481a44: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_481a48:
    if (ctx->pc == 0x481A48u) {
        ctx->pc = 0x481A4Cu;
        goto label_481a4c;
    }
    ctx->pc = 0x481A44u;
    {
        const bool branch_taken_0x481a44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x481a44) {
            ctx->pc = 0x481A54u;
            goto label_481a54;
        }
    }
    ctx->pc = 0x481A4Cu;
label_481a4c:
    // 0x481a4c: 0xd  break       0
    ctx->pc = 0x481a4cu;
    runtime->handleBreak(rdram, ctx);
label_481a50:
    // 0x481a50: 0x0  nop
    ctx->pc = 0x481a50u;
    // NOP
label_481a54:
    // 0x481a54: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x481a54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_481a58:
    // 0x481a58: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x481a58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_481a5c:
    // 0x481a5c: 0xc11392c  jal         func_44E4B0
label_481a60:
    if (ctx->pc == 0x481A60u) {
        ctx->pc = 0x481A64u;
        goto label_481a64;
    }
    ctx->pc = 0x481A5Cu;
    SET_GPR_U32(ctx, 31, 0x481A64u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x481A5Cu, 0x481A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x481A64u;
label_481a64:
    // 0x481a64: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x481a64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_481a68:
    // 0x481a68: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x481a68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_481a6c:
    // 0x481a6c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x481a6cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_481a70:
    // 0x481a70: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x481a70u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_481a74:
    // 0x481a74: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x481a74u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_481a78:
    // 0x481a78: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x481a78u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_481a7c:
    // 0x481a7c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x481a7cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_481a80:
    // 0x481a80: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x481a80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_481a84:
    // 0x481a84: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x481a84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_481a88:
    // 0x481a88: 0x27bd02f0  addiu       $sp, $sp, 0x2F0
    ctx->pc = 0x481a88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 752));
label_481a8c:
    // 0x481a8c: 0x3e00008  jr          $ra
label_481a90:
    if (ctx->pc == 0x481A90u) {
        ctx->pc = 0x481A94u;
        goto label_481a94;
    }
    ctx->pc = 0x481A8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x481A8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x481A94u;
label_481a94:
    // 0x481a94: 0x0  nop
    ctx->pc = 0x481a94u;
    // NOP
label_481a98:
    // 0x481a98: 0x0  nop
    ctx->pc = 0x481a98u;
    // NOP
label_481a9c:
    // 0x481a9c: 0x0  nop
    ctx->pc = 0x481a9cu;
    // NOP
    ctx->pc = 0x481aa0u;
}
