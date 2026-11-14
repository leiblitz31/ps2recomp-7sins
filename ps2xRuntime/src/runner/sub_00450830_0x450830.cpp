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

// Function: sub_00450830
// Address: 0x450830 - 0x450a00
void sub_00450830_0x450830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00450830_0x450830");
#endif

    switch (ctx->pc) {
        case 0x450830u: goto label_450830;
        case 0x450834u: goto label_450834;
        case 0x450838u: goto label_450838;
        case 0x45083cu: goto label_45083c;
        case 0x450840u: goto label_450840;
        case 0x450844u: goto label_450844;
        case 0x450848u: goto label_450848;
        case 0x45084cu: goto label_45084c;
        case 0x450850u: goto label_450850;
        case 0x450854u: goto label_450854;
        case 0x450858u: goto label_450858;
        case 0x45085cu: goto label_45085c;
        case 0x450860u: goto label_450860;
        case 0x450864u: goto label_450864;
        case 0x450868u: goto label_450868;
        case 0x45086cu: goto label_45086c;
        case 0x450870u: goto label_450870;
        case 0x450874u: goto label_450874;
        case 0x450878u: goto label_450878;
        case 0x45087cu: goto label_45087c;
        case 0x450880u: goto label_450880;
        case 0x450884u: goto label_450884;
        case 0x450888u: goto label_450888;
        case 0x45088cu: goto label_45088c;
        case 0x450890u: goto label_450890;
        case 0x450894u: goto label_450894;
        case 0x450898u: goto label_450898;
        case 0x45089cu: goto label_45089c;
        case 0x4508a0u: goto label_4508a0;
        case 0x4508a4u: goto label_4508a4;
        case 0x4508a8u: goto label_4508a8;
        case 0x4508acu: goto label_4508ac;
        case 0x4508b0u: goto label_4508b0;
        case 0x4508b4u: goto label_4508b4;
        case 0x4508b8u: goto label_4508b8;
        case 0x4508bcu: goto label_4508bc;
        case 0x4508c0u: goto label_4508c0;
        case 0x4508c4u: goto label_4508c4;
        case 0x4508c8u: goto label_4508c8;
        case 0x4508ccu: goto label_4508cc;
        case 0x4508d0u: goto label_4508d0;
        case 0x4508d4u: goto label_4508d4;
        case 0x4508d8u: goto label_4508d8;
        case 0x4508dcu: goto label_4508dc;
        case 0x4508e0u: goto label_4508e0;
        case 0x4508e4u: goto label_4508e4;
        case 0x4508e8u: goto label_4508e8;
        case 0x4508ecu: goto label_4508ec;
        case 0x4508f0u: goto label_4508f0;
        case 0x4508f4u: goto label_4508f4;
        case 0x4508f8u: goto label_4508f8;
        case 0x4508fcu: goto label_4508fc;
        case 0x450900u: goto label_450900;
        case 0x450904u: goto label_450904;
        case 0x450908u: goto label_450908;
        case 0x45090cu: goto label_45090c;
        case 0x450910u: goto label_450910;
        case 0x450914u: goto label_450914;
        case 0x450918u: goto label_450918;
        case 0x45091cu: goto label_45091c;
        case 0x450920u: goto label_450920;
        case 0x450924u: goto label_450924;
        case 0x450928u: goto label_450928;
        case 0x45092cu: goto label_45092c;
        case 0x450930u: goto label_450930;
        case 0x450934u: goto label_450934;
        case 0x450938u: goto label_450938;
        case 0x45093cu: goto label_45093c;
        case 0x450940u: goto label_450940;
        case 0x450944u: goto label_450944;
        case 0x450948u: goto label_450948;
        case 0x45094cu: goto label_45094c;
        case 0x450950u: goto label_450950;
        case 0x450954u: goto label_450954;
        case 0x450958u: goto label_450958;
        case 0x45095cu: goto label_45095c;
        case 0x450960u: goto label_450960;
        case 0x450964u: goto label_450964;
        case 0x450968u: goto label_450968;
        case 0x45096cu: goto label_45096c;
        case 0x450970u: goto label_450970;
        case 0x450974u: goto label_450974;
        case 0x450978u: goto label_450978;
        case 0x45097cu: goto label_45097c;
        case 0x450980u: goto label_450980;
        case 0x450984u: goto label_450984;
        case 0x450988u: goto label_450988;
        case 0x45098cu: goto label_45098c;
        case 0x450990u: goto label_450990;
        case 0x450994u: goto label_450994;
        case 0x450998u: goto label_450998;
        case 0x45099cu: goto label_45099c;
        case 0x4509a0u: goto label_4509a0;
        case 0x4509a4u: goto label_4509a4;
        case 0x4509a8u: goto label_4509a8;
        case 0x4509acu: goto label_4509ac;
        case 0x4509b0u: goto label_4509b0;
        case 0x4509b4u: goto label_4509b4;
        case 0x4509b8u: goto label_4509b8;
        case 0x4509bcu: goto label_4509bc;
        case 0x4509c0u: goto label_4509c0;
        case 0x4509c4u: goto label_4509c4;
        case 0x4509c8u: goto label_4509c8;
        case 0x4509ccu: goto label_4509cc;
        case 0x4509d0u: goto label_4509d0;
        case 0x4509d4u: goto label_4509d4;
        case 0x4509d8u: goto label_4509d8;
        case 0x4509dcu: goto label_4509dc;
        case 0x4509e0u: goto label_4509e0;
        case 0x4509e4u: goto label_4509e4;
        case 0x4509e8u: goto label_4509e8;
        case 0x4509ecu: goto label_4509ec;
        case 0x4509f0u: goto label_4509f0;
        case 0x4509f4u: goto label_4509f4;
        case 0x4509f8u: goto label_4509f8;
        case 0x4509fcu: goto label_4509fc;
        default: break;
    }

    ctx->pc = 0x450830u;

label_450830:
    // 0x450830: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x450830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
label_450834:
    // 0x450834: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x450834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_450838:
    // 0x450838: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x450838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_45083c:
    // 0x45083c: 0xafa40150  sw          $a0, 0x150($sp)
    ctx->pc = 0x45083cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 4));
label_450840:
    // 0x450840: 0xafa50160  sw          $a1, 0x160($sp)
    ctx->pc = 0x450840u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 5));
label_450844:
    // 0x450844: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x450844u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_450848:
    // 0x450848: 0x27a40148  addiu       $a0, $sp, 0x148
    ctx->pc = 0x450848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 328));
label_45084c:
    // 0x45084c: 0xc114360  jal         func_450D80
label_450850:
    if (ctx->pc == 0x450850u) {
        ctx->pc = 0x450854u;
        goto label_450854;
    }
    ctx->pc = 0x45084Cu;
    SET_GPR_U32(ctx, 31, 0x450854u);
    ctx->pc = 0x450D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x450D80u, 0x45084Cu, 0x450854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x450854u;
label_450854:
    // 0x450854: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x450854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_450858:
    // 0x450858: 0xafa2014c  sw          $v0, 0x14C($sp)
    ctx->pc = 0x450858u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 2));
label_45085c:
    // 0x45085c: 0x8fa2014c  lw          $v0, 0x14C($sp)
    ctx->pc = 0x45085cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
label_450860:
    // 0x450860: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x450860u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_450864:
    // 0x450864: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x450864u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_450868:
    // 0x450868: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_45086c:
    if (ctx->pc == 0x45086Cu) {
        ctx->pc = 0x450870u;
        goto label_450870;
    }
    ctx->pc = 0x450868u;
    {
        const bool branch_taken_0x450868 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x450868) {
            ctx->pc = 0x450918u;
            goto label_450918;
        }
    }
    ctx->pc = 0x450870u;
label_450870:
    // 0x450870: 0x8f82afd0  lw          $v0, -0x5030($gp)
    ctx->pc = 0x450870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946768)));
label_450874:
    // 0x450874: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_450878:
    if (ctx->pc == 0x450878u) {
        ctx->pc = 0x45087Cu;
        goto label_45087c;
    }
    ctx->pc = 0x450874u;
    {
        const bool branch_taken_0x450874 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x450874) {
            ctx->pc = 0x450918u;
            goto label_450918;
        }
    }
    ctx->pc = 0x45087Cu;
label_45087c:
    // 0x45087c: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x45087cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_450880:
    // 0x450880: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x450880u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_450884:
    // 0x450884: 0x27a60138  addiu       $a2, $sp, 0x138
    ctx->pc = 0x450884u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 312));
label_450888:
    // 0x450888: 0xc115ee8  jal         func_457BA0
label_45088c:
    if (ctx->pc == 0x45088Cu) {
        ctx->pc = 0x450890u;
        goto label_450890;
    }
    ctx->pc = 0x450888u;
    SET_GPR_U32(ctx, 31, 0x450890u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x450888u, 0x450890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x450890u;
label_450890:
    // 0x450890: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_450894:
    if (ctx->pc == 0x450894u) {
        ctx->pc = 0x450898u;
        goto label_450898;
    }
    ctx->pc = 0x450890u;
    {
        const bool branch_taken_0x450890 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x450890) {
            ctx->pc = 0x450918u;
            goto label_450918;
        }
    }
    ctx->pc = 0x450898u;
label_450898:
    // 0x450898: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x450898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_45089c:
    // 0x45089c: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_4508a0:
    if (ctx->pc == 0x4508A0u) {
        ctx->pc = 0x4508A4u;
        goto label_4508a4;
    }
    ctx->pc = 0x45089Cu;
    {
        const bool branch_taken_0x45089c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45089c) {
            ctx->pc = 0x450918u;
            goto label_450918;
        }
    }
    ctx->pc = 0x4508A4u;
label_4508a4:
    // 0x4508a4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x4508a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_4508a8:
    // 0x4508a8: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x4508a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_4508ac:
    // 0x4508ac: 0x8fa6013c  lw          $a2, 0x13C($sp)
    ctx->pc = 0x4508acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
label_4508b0:
    // 0x4508b0: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x4508b0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_4508b4:
    // 0x4508b4: 0x24e7d990  addiu       $a3, $a3, -0x2670
    ctx->pc = 0x4508b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294957456));
label_4508b8:
    // 0x4508b8: 0x24080125  addiu       $t0, $zero, 0x125
    ctx->pc = 0x4508b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 293));
label_4508bc:
    // 0x4508bc: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x4508bcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_4508c0:
    // 0x4508c0: 0x2529dac0  addiu       $t1, $t1, -0x2540
    ctx->pc = 0x4508c0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294957760));
label_4508c4:
    // 0x4508c4: 0xc113940  jal         func_44E500
label_4508c8:
    if (ctx->pc == 0x4508C8u) {
        ctx->pc = 0x4508CCu;
        goto label_4508cc;
    }
    ctx->pc = 0x4508C4u;
    SET_GPR_U32(ctx, 31, 0x4508CCu);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x4508C4u, 0x4508CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4508CCu;
label_4508cc:
    // 0x4508cc: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x4508ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_4508d0:
    // 0x4508d0: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x4508d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_4508d4:
    // 0x4508d4: 0x24a5dae0  addiu       $a1, $a1, -0x2520
    ctx->pc = 0x4508d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957792));
label_4508d8:
    // 0x4508d8: 0xc115c24  jal         func_457090
label_4508dc:
    if (ctx->pc == 0x4508DCu) {
        ctx->pc = 0x4508E0u;
        goto label_4508e0;
    }
    ctx->pc = 0x4508D8u;
    SET_GPR_U32(ctx, 31, 0x4508E0u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x4508D8u, 0x4508E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4508E0u;
label_4508e0:
    // 0x4508e0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x4508e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_4508e4:
    // 0x4508e4: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x4508e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_4508e8:
    // 0x4508e8: 0x40f809  jalr        $v0
label_4508ec:
    if (ctx->pc == 0x4508ECu) {
        ctx->pc = 0x4508F0u;
        goto label_4508f0;
    }
    ctx->pc = 0x4508E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4508F0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4508E8u, 0x4508F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4508F0u;
label_4508f0:
    // 0x4508f0: 0xaf82afd0  sw          $v0, -0x5030($gp)
    ctx->pc = 0x4508f0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946768), GPR_U32(ctx, 2));
label_4508f4:
    // 0x4508f4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x4508f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_4508f8:
    // 0x4508f8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_4508fc:
    if (ctx->pc == 0x4508FCu) {
        ctx->pc = 0x450900u;
        goto label_450900;
    }
    ctx->pc = 0x4508F8u;
    {
        const bool branch_taken_0x4508f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4508f8) {
            ctx->pc = 0x450908u;
            goto label_450908;
        }
    }
    ctx->pc = 0x450900u;
label_450900:
    // 0x450900: 0xd  break       0
    ctx->pc = 0x450900u;
    runtime->handleBreak(rdram, ctx);
label_450904:
    // 0x450904: 0x0  nop
    ctx->pc = 0x450904u;
    // NOP
label_450908:
    // 0x450908: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x450908u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_45090c:
    // 0x45090c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x45090cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_450910:
    // 0x450910: 0xc11392c  jal         func_44E4B0
label_450914:
    if (ctx->pc == 0x450914u) {
        ctx->pc = 0x450918u;
        goto label_450918;
    }
    ctx->pc = 0x450910u;
    SET_GPR_U32(ctx, 31, 0x450918u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x450910u, 0x450918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x450918u;
label_450918:
    // 0x450918: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x450918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_45091c:
    // 0x45091c: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x45091cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_450920:
    // 0x450920: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x450920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_450924:
    // 0x450924: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
label_450928:
    if (ctx->pc == 0x450928u) {
        ctx->pc = 0x45092Cu;
        goto label_45092c;
    }
    ctx->pc = 0x450924u;
    {
        const bool branch_taken_0x450924 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x450924) {
            ctx->pc = 0x450958u;
            goto label_450958;
        }
    }
    ctx->pc = 0x45092Cu;
label_45092c:
    // 0x45092c: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x45092cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_450930:
    // 0x450930: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x450930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_450934:
    // 0x450934: 0xc042514  jal         func_109450
label_450938:
    if (ctx->pc == 0x450938u) {
        ctx->pc = 0x45093Cu;
        goto label_45093c;
    }
    ctx->pc = 0x450934u;
    SET_GPR_U32(ctx, 31, 0x45093Cu);
    ctx->pc = 0x109450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109450u, 0x450934u, 0x45093Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45093Cu;
label_45093c:
    // 0x45093c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_450940:
    if (ctx->pc == 0x450940u) {
        ctx->pc = 0x450944u;
        goto label_450944;
    }
    ctx->pc = 0x45093Cu;
    {
        const bool branch_taken_0x45093c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45093c) {
            ctx->pc = 0x450958u;
            goto label_450958;
        }
    }
    ctx->pc = 0x450944u;
label_450944:
    // 0x450944: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x450944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_450948:
    // 0x450948: 0x24440024  addiu       $a0, $v0, 0x24
    ctx->pc = 0x450948u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
label_45094c:
    // 0x45094c: 0x27a50160  addiu       $a1, $sp, 0x160
    ctx->pc = 0x45094cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_450950:
    // 0x450950: 0xc114280  jal         func_450A00
label_450954:
    if (ctx->pc == 0x450954u) {
        ctx->pc = 0x450958u;
        goto label_450958;
    }
    ctx->pc = 0x450950u;
    SET_GPR_U32(ctx, 31, 0x450958u);
    ctx->pc = 0x450A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x450A00u, 0x450950u, 0x450958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x450958u;
label_450958:
    // 0x450958: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x450958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_45095c:
    // 0x45095c: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x45095cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_450960:
    // 0x450960: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
label_450964:
    if (ctx->pc == 0x450964u) {
        ctx->pc = 0x450968u;
        goto label_450968;
    }
    ctx->pc = 0x450960u;
    {
        const bool branch_taken_0x450960 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x450960) {
            ctx->pc = 0x4509E8u;
            goto label_4509e8;
        }
    }
    ctx->pc = 0x450968u;
label_450968:
    // 0x450968: 0xafa00148  sw          $zero, 0x148($sp)
    ctx->pc = 0x450968u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 0));
label_45096c:
    // 0x45096c: 0x27a40148  addiu       $a0, $sp, 0x148
    ctx->pc = 0x45096cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 328));
label_450970:
    // 0x450970: 0x8f82bf24  lw          $v0, -0x40DC($gp)
    ctx->pc = 0x450970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950692)));
label_450974:
    // 0x450974: 0x40f809  jalr        $v0
label_450978:
    if (ctx->pc == 0x450978u) {
        ctx->pc = 0x45097Cu;
        goto label_45097c;
    }
    ctx->pc = 0x450974u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x45097Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x450974u, 0x45097Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x45097Cu;
label_45097c:
    // 0x45097c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x45097cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_450980:
    // 0x450980: 0xc11904c  jal         func_464130
label_450984:
    if (ctx->pc == 0x450984u) {
        ctx->pc = 0x450988u;
        goto label_450988;
    }
    ctx->pc = 0x450980u;
    SET_GPR_U32(ctx, 31, 0x450988u);
    ctx->pc = 0x464130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x464130u, 0x450980u, 0x450988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x450988u;
label_450988:
    // 0x450988: 0x8fa30160  lw          $v1, 0x160($sp)
    ctx->pc = 0x450988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_45098c:
    // 0x45098c: 0xfc620008  sd          $v0, 0x8($v1)
    ctx->pc = 0x45098cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 2));
label_450990:
    // 0x450990: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x450990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_450994:
    // 0x450994: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x450994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_450998:
    // 0x450998: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x450998u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_45099c:
    // 0x45099c: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x45099cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_4509a0:
    // 0x4509a0: 0x8c44001c  lw          $a0, 0x1C($v0)
    ctx->pc = 0x4509a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_4509a4:
    // 0x4509a4: 0xc11395c  jal         func_44E570
label_4509a8:
    if (ctx->pc == 0x4509A8u) {
        ctx->pc = 0x4509ACu;
        goto label_4509ac;
    }
    ctx->pc = 0x4509A4u;
    SET_GPR_U32(ctx, 31, 0x4509ACu);
    ctx->pc = 0x44E570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E570u, 0x4509A4u, 0x4509ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4509ACu;
label_4509ac:
    // 0x4509ac: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_4509b0:
    if (ctx->pc == 0x4509B0u) {
        ctx->pc = 0x4509B4u;
        goto label_4509b4;
    }
    ctx->pc = 0x4509ACu;
    {
        const bool branch_taken_0x4509ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4509ac) {
            ctx->pc = 0x4509C8u;
            goto label_4509c8;
        }
    }
    ctx->pc = 0x4509B4u;
label_4509b4:
    // 0x4509b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4509b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4509b8:
    // 0x4509b8: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x4509b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_4509bc:
    // 0x4509bc: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x4509bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
label_4509c0:
    // 0x4509c0: 0x10000009  b           . + 4 + (0x9 << 2)
label_4509c4:
    if (ctx->pc == 0x4509C4u) {
        ctx->pc = 0x4509C8u;
        goto label_4509c8;
    }
    ctx->pc = 0x4509C0u;
    {
        const bool branch_taken_0x4509c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4509c0) {
            ctx->pc = 0x4509E8u;
            goto label_4509e8;
        }
    }
    ctx->pc = 0x4509C8u;
label_4509c8:
    // 0x4509c8: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x4509c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_4509cc:
    // 0x4509cc: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x4509ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_4509d0:
    // 0x4509d0: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x4509d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_4509d4:
    // 0x4509d4: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_4509d8:
    if (ctx->pc == 0x4509D8u) {
        ctx->pc = 0x4509DCu;
        goto label_4509dc;
    }
    ctx->pc = 0x4509D4u;
    {
        const bool branch_taken_0x4509d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x4509d4) {
            ctx->pc = 0x4509E8u;
            goto label_4509e8;
        }
    }
    ctx->pc = 0x4509DCu;
label_4509dc:
    // 0x4509dc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4509dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4509e0:
    // 0x4509e0: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x4509e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_4509e4:
    // 0x4509e4: 0xac430014  sw          $v1, 0x14($v0)
    ctx->pc = 0x4509e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
label_4509e8:
    // 0x4509e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4509e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4509ec:
    // 0x4509ec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4509ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4509f0:
    // 0x4509f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4509f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4509f4:
    // 0x4509f4: 0x27bd0170  addiu       $sp, $sp, 0x170
    ctx->pc = 0x4509f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_4509f8:
    // 0x4509f8: 0x3e00008  jr          $ra
label_4509fc:
    if (ctx->pc == 0x4509FCu) {
        ctx->pc = 0x450A00u;
        goto label_fallthrough_0x4509f8;
    }
    ctx->pc = 0x4509F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4509F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4509f8:
    ctx->pc = 0x450A00u;
}
