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

// Function: sub_00494620
// Address: 0x494620 - 0x494890
void sub_00494620_0x494620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00494620_0x494620");
#endif

    switch (ctx->pc) {
        case 0x494620u: goto label_494620;
        case 0x494624u: goto label_494624;
        case 0x494628u: goto label_494628;
        case 0x49462cu: goto label_49462c;
        case 0x494630u: goto label_494630;
        case 0x494634u: goto label_494634;
        case 0x494638u: goto label_494638;
        case 0x49463cu: goto label_49463c;
        case 0x494640u: goto label_494640;
        case 0x494644u: goto label_494644;
        case 0x494648u: goto label_494648;
        case 0x49464cu: goto label_49464c;
        case 0x494650u: goto label_494650;
        case 0x494654u: goto label_494654;
        case 0x494658u: goto label_494658;
        case 0x49465cu: goto label_49465c;
        case 0x494660u: goto label_494660;
        case 0x494664u: goto label_494664;
        case 0x494668u: goto label_494668;
        case 0x49466cu: goto label_49466c;
        case 0x494670u: goto label_494670;
        case 0x494674u: goto label_494674;
        case 0x494678u: goto label_494678;
        case 0x49467cu: goto label_49467c;
        case 0x494680u: goto label_494680;
        case 0x494684u: goto label_494684;
        case 0x494688u: goto label_494688;
        case 0x49468cu: goto label_49468c;
        case 0x494690u: goto label_494690;
        case 0x494694u: goto label_494694;
        case 0x494698u: goto label_494698;
        case 0x49469cu: goto label_49469c;
        case 0x4946a0u: goto label_4946a0;
        case 0x4946a4u: goto label_4946a4;
        case 0x4946a8u: goto label_4946a8;
        case 0x4946acu: goto label_4946ac;
        case 0x4946b0u: goto label_4946b0;
        case 0x4946b4u: goto label_4946b4;
        case 0x4946b8u: goto label_4946b8;
        case 0x4946bcu: goto label_4946bc;
        case 0x4946c0u: goto label_4946c0;
        case 0x4946c4u: goto label_4946c4;
        case 0x4946c8u: goto label_4946c8;
        case 0x4946ccu: goto label_4946cc;
        case 0x4946d0u: goto label_4946d0;
        case 0x4946d4u: goto label_4946d4;
        case 0x4946d8u: goto label_4946d8;
        case 0x4946dcu: goto label_4946dc;
        case 0x4946e0u: goto label_4946e0;
        case 0x4946e4u: goto label_4946e4;
        case 0x4946e8u: goto label_4946e8;
        case 0x4946ecu: goto label_4946ec;
        case 0x4946f0u: goto label_4946f0;
        case 0x4946f4u: goto label_4946f4;
        case 0x4946f8u: goto label_4946f8;
        case 0x4946fcu: goto label_4946fc;
        case 0x494700u: goto label_494700;
        case 0x494704u: goto label_494704;
        case 0x494708u: goto label_494708;
        case 0x49470cu: goto label_49470c;
        case 0x494710u: goto label_494710;
        case 0x494714u: goto label_494714;
        case 0x494718u: goto label_494718;
        case 0x49471cu: goto label_49471c;
        case 0x494720u: goto label_494720;
        case 0x494724u: goto label_494724;
        case 0x494728u: goto label_494728;
        case 0x49472cu: goto label_49472c;
        case 0x494730u: goto label_494730;
        case 0x494734u: goto label_494734;
        case 0x494738u: goto label_494738;
        case 0x49473cu: goto label_49473c;
        case 0x494740u: goto label_494740;
        case 0x494744u: goto label_494744;
        case 0x494748u: goto label_494748;
        case 0x49474cu: goto label_49474c;
        case 0x494750u: goto label_494750;
        case 0x494754u: goto label_494754;
        case 0x494758u: goto label_494758;
        case 0x49475cu: goto label_49475c;
        case 0x494760u: goto label_494760;
        case 0x494764u: goto label_494764;
        case 0x494768u: goto label_494768;
        case 0x49476cu: goto label_49476c;
        case 0x494770u: goto label_494770;
        case 0x494774u: goto label_494774;
        case 0x494778u: goto label_494778;
        case 0x49477cu: goto label_49477c;
        case 0x494780u: goto label_494780;
        case 0x494784u: goto label_494784;
        case 0x494788u: goto label_494788;
        case 0x49478cu: goto label_49478c;
        case 0x494790u: goto label_494790;
        case 0x494794u: goto label_494794;
        case 0x494798u: goto label_494798;
        case 0x49479cu: goto label_49479c;
        case 0x4947a0u: goto label_4947a0;
        case 0x4947a4u: goto label_4947a4;
        case 0x4947a8u: goto label_4947a8;
        case 0x4947acu: goto label_4947ac;
        case 0x4947b0u: goto label_4947b0;
        case 0x4947b4u: goto label_4947b4;
        case 0x4947b8u: goto label_4947b8;
        case 0x4947bcu: goto label_4947bc;
        case 0x4947c0u: goto label_4947c0;
        case 0x4947c4u: goto label_4947c4;
        case 0x4947c8u: goto label_4947c8;
        case 0x4947ccu: goto label_4947cc;
        case 0x4947d0u: goto label_4947d0;
        case 0x4947d4u: goto label_4947d4;
        case 0x4947d8u: goto label_4947d8;
        case 0x4947dcu: goto label_4947dc;
        case 0x4947e0u: goto label_4947e0;
        case 0x4947e4u: goto label_4947e4;
        case 0x4947e8u: goto label_4947e8;
        case 0x4947ecu: goto label_4947ec;
        case 0x4947f0u: goto label_4947f0;
        case 0x4947f4u: goto label_4947f4;
        case 0x4947f8u: goto label_4947f8;
        case 0x4947fcu: goto label_4947fc;
        case 0x494800u: goto label_494800;
        case 0x494804u: goto label_494804;
        case 0x494808u: goto label_494808;
        case 0x49480cu: goto label_49480c;
        case 0x494810u: goto label_494810;
        case 0x494814u: goto label_494814;
        case 0x494818u: goto label_494818;
        case 0x49481cu: goto label_49481c;
        case 0x494820u: goto label_494820;
        case 0x494824u: goto label_494824;
        case 0x494828u: goto label_494828;
        case 0x49482cu: goto label_49482c;
        case 0x494830u: goto label_494830;
        case 0x494834u: goto label_494834;
        case 0x494838u: goto label_494838;
        case 0x49483cu: goto label_49483c;
        case 0x494840u: goto label_494840;
        case 0x494844u: goto label_494844;
        case 0x494848u: goto label_494848;
        case 0x49484cu: goto label_49484c;
        case 0x494850u: goto label_494850;
        case 0x494854u: goto label_494854;
        case 0x494858u: goto label_494858;
        case 0x49485cu: goto label_49485c;
        case 0x494860u: goto label_494860;
        case 0x494864u: goto label_494864;
        case 0x494868u: goto label_494868;
        case 0x49486cu: goto label_49486c;
        case 0x494870u: goto label_494870;
        case 0x494874u: goto label_494874;
        case 0x494878u: goto label_494878;
        case 0x49487cu: goto label_49487c;
        case 0x494880u: goto label_494880;
        case 0x494884u: goto label_494884;
        case 0x494888u: goto label_494888;
        case 0x49488cu: goto label_49488c;
        default: break;
    }

    ctx->pc = 0x494620u;

label_494620:
    // 0x494620: 0x27bdfd70  addiu       $sp, $sp, -0x290
    ctx->pc = 0x494620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966640));
label_494624:
    // 0x494624: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x494624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_494628:
    // 0x494628: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x494628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_49462c:
    // 0x49462c: 0xafa40280  sw          $a0, 0x280($sp)
    ctx->pc = 0x49462cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 640), GPR_U32(ctx, 4));
label_494630:
    // 0x494630: 0xc117d08  jal         func_45F420
label_494634:
    if (ctx->pc == 0x494634u) {
        ctx->pc = 0x494638u;
        goto label_494638;
    }
    ctx->pc = 0x494630u;
    SET_GPR_U32(ctx, 31, 0x494638u);
    ctx->pc = 0x45F420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45F420u, 0x494630u, 0x494638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x494638u;
label_494638:
    // 0x494638: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_49463c:
    if (ctx->pc == 0x49463Cu) {
        ctx->pc = 0x494640u;
        goto label_494640;
    }
    ctx->pc = 0x494638u;
    {
        const bool branch_taken_0x494638 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x494638) {
            ctx->pc = 0x4946E8u;
            goto label_4946e8;
        }
    }
    ctx->pc = 0x494640u;
label_494640:
    // 0x494640: 0x8f82b734  lw          $v0, -0x48CC($gp)
    ctx->pc = 0x494640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948660)));
label_494644:
    // 0x494644: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_494648:
    if (ctx->pc == 0x494648u) {
        ctx->pc = 0x49464Cu;
        goto label_49464c;
    }
    ctx->pc = 0x494644u;
    {
        const bool branch_taken_0x494644 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x494644) {
            ctx->pc = 0x4946E8u;
            goto label_4946e8;
        }
    }
    ctx->pc = 0x49464Cu;
label_49464c:
    // 0x49464c: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x49464cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_494650:
    // 0x494650: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x494650u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_494654:
    // 0x494654: 0x27a60270  addiu       $a2, $sp, 0x270
    ctx->pc = 0x494654u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
label_494658:
    // 0x494658: 0xc115ee8  jal         func_457BA0
label_49465c:
    if (ctx->pc == 0x49465Cu) {
        ctx->pc = 0x494660u;
        goto label_494660;
    }
    ctx->pc = 0x494658u;
    SET_GPR_U32(ctx, 31, 0x494660u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x494658u, 0x494660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x494660u;
label_494660:
    // 0x494660: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_494664:
    if (ctx->pc == 0x494664u) {
        ctx->pc = 0x494668u;
        goto label_494668;
    }
    ctx->pc = 0x494660u;
    {
        const bool branch_taken_0x494660 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x494660) {
            ctx->pc = 0x4946E8u;
            goto label_4946e8;
        }
    }
    ctx->pc = 0x494668u;
label_494668:
    // 0x494668: 0x8fa20278  lw          $v0, 0x278($sp)
    ctx->pc = 0x494668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 632)));
label_49466c:
    // 0x49466c: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_494670:
    if (ctx->pc == 0x494670u) {
        ctx->pc = 0x494674u;
        goto label_494674;
    }
    ctx->pc = 0x49466Cu;
    {
        const bool branch_taken_0x49466c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x49466c) {
            ctx->pc = 0x4946E8u;
            goto label_4946e8;
        }
    }
    ctx->pc = 0x494674u;
label_494674:
    // 0x494674: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x494674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_494678:
    // 0x494678: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x494678u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_49467c:
    // 0x49467c: 0x8fa60274  lw          $a2, 0x274($sp)
    ctx->pc = 0x49467cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 628)));
label_494680:
    // 0x494680: 0x3c07005f  lui         $a3, 0x5F
    ctx->pc = 0x494680u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)95 << 16));
label_494684:
    // 0x494684: 0x24e75210  addiu       $a3, $a3, 0x5210
    ctx->pc = 0x494684u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 21008));
label_494688:
    // 0x494688: 0x24080085  addiu       $t0, $zero, 0x85
    ctx->pc = 0x494688u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 133));
label_49468c:
    // 0x49468c: 0x3c09005f  lui         $t1, 0x5F
    ctx->pc = 0x49468cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)95 << 16));
label_494690:
    // 0x494690: 0x25295220  addiu       $t1, $t1, 0x5220
    ctx->pc = 0x494690u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 21024));
label_494694:
    // 0x494694: 0xc113940  jal         func_44E500
label_494698:
    if (ctx->pc == 0x494698u) {
        ctx->pc = 0x49469Cu;
        goto label_49469c;
    }
    ctx->pc = 0x494694u;
    SET_GPR_U32(ctx, 31, 0x49469Cu);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x494694u, 0x49469Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49469Cu;
label_49469c:
    // 0x49469c: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x49469cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_4946a0:
    // 0x4946a0: 0x3c05005f  lui         $a1, 0x5F
    ctx->pc = 0x4946a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)95 << 16));
label_4946a4:
    // 0x4946a4: 0x24a55240  addiu       $a1, $a1, 0x5240
    ctx->pc = 0x4946a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21056));
label_4946a8:
    // 0x4946a8: 0xc115c24  jal         func_457090
label_4946ac:
    if (ctx->pc == 0x4946ACu) {
        ctx->pc = 0x4946B0u;
        goto label_4946b0;
    }
    ctx->pc = 0x4946A8u;
    SET_GPR_U32(ctx, 31, 0x4946B0u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x4946A8u, 0x4946B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4946B0u;
label_4946b0:
    // 0x4946b0: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x4946b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_4946b4:
    // 0x4946b4: 0x8fa20278  lw          $v0, 0x278($sp)
    ctx->pc = 0x4946b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 632)));
label_4946b8:
    // 0x4946b8: 0x40f809  jalr        $v0
label_4946bc:
    if (ctx->pc == 0x4946BCu) {
        ctx->pc = 0x4946C0u;
        goto label_4946c0;
    }
    ctx->pc = 0x4946B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4946C0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4946B8u, 0x4946C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4946C0u;
label_4946c0:
    // 0x4946c0: 0xaf82b734  sw          $v0, -0x48CC($gp)
    ctx->pc = 0x4946c0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948660), GPR_U32(ctx, 2));
label_4946c4:
    // 0x4946c4: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x4946c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_4946c8:
    // 0x4946c8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_4946cc:
    if (ctx->pc == 0x4946CCu) {
        ctx->pc = 0x4946D0u;
        goto label_4946d0;
    }
    ctx->pc = 0x4946C8u;
    {
        const bool branch_taken_0x4946c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4946c8) {
            ctx->pc = 0x4946D8u;
            goto label_4946d8;
        }
    }
    ctx->pc = 0x4946D0u;
label_4946d0:
    // 0x4946d0: 0xd  break       0
    ctx->pc = 0x4946d0u;
    runtime->handleBreak(rdram, ctx);
label_4946d4:
    // 0x4946d4: 0x0  nop
    ctx->pc = 0x4946d4u;
    // NOP
label_4946d8:
    // 0x4946d8: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x4946d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_4946dc:
    // 0x4946dc: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x4946dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4946e0:
    // 0x4946e0: 0xc11392c  jal         func_44E4B0
label_4946e4:
    if (ctx->pc == 0x4946E4u) {
        ctx->pc = 0x4946E8u;
        goto label_4946e8;
    }
    ctx->pc = 0x4946E0u;
    SET_GPR_U32(ctx, 31, 0x4946E8u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x4946E0u, 0x4946E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4946E8u;
label_4946e8:
    // 0x4946e8: 0x8fa20280  lw          $v0, 0x280($sp)
    ctx->pc = 0x4946e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_4946ec:
    // 0x4946ec: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x4946ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4946f0:
    // 0x4946f0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x4946f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_4946f4:
    // 0x4946f4: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_4946f8:
    if (ctx->pc == 0x4946F8u) {
        ctx->pc = 0x4946FCu;
        goto label_4946fc;
    }
    ctx->pc = 0x4946F4u;
    {
        const bool branch_taken_0x4946f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4946f4) {
            ctx->pc = 0x4947A4u;
            goto label_4947a4;
        }
    }
    ctx->pc = 0x4946FCu;
label_4946fc:
    // 0x4946fc: 0x8f82b738  lw          $v0, -0x48C8($gp)
    ctx->pc = 0x4946fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948664)));
label_494700:
    // 0x494700: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_494704:
    if (ctx->pc == 0x494704u) {
        ctx->pc = 0x494708u;
        goto label_494708;
    }
    ctx->pc = 0x494700u;
    {
        const bool branch_taken_0x494700 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x494700) {
            ctx->pc = 0x4947A4u;
            goto label_4947a4;
        }
    }
    ctx->pc = 0x494708u;
label_494708:
    // 0x494708: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x494708u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_49470c:
    // 0x49470c: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x49470cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_494710:
    // 0x494710: 0x27a60260  addiu       $a2, $sp, 0x260
    ctx->pc = 0x494710u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
label_494714:
    // 0x494714: 0xc115ee8  jal         func_457BA0
label_494718:
    if (ctx->pc == 0x494718u) {
        ctx->pc = 0x49471Cu;
        goto label_49471c;
    }
    ctx->pc = 0x494714u;
    SET_GPR_U32(ctx, 31, 0x49471Cu);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x494714u, 0x49471Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49471Cu;
label_49471c:
    // 0x49471c: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_494720:
    if (ctx->pc == 0x494720u) {
        ctx->pc = 0x494724u;
        goto label_494724;
    }
    ctx->pc = 0x49471Cu;
    {
        const bool branch_taken_0x49471c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x49471c) {
            ctx->pc = 0x4947A4u;
            goto label_4947a4;
        }
    }
    ctx->pc = 0x494724u;
label_494724:
    // 0x494724: 0x8fa20268  lw          $v0, 0x268($sp)
    ctx->pc = 0x494724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
label_494728:
    // 0x494728: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_49472c:
    if (ctx->pc == 0x49472Cu) {
        ctx->pc = 0x494730u;
        goto label_494730;
    }
    ctx->pc = 0x494728u;
    {
        const bool branch_taken_0x494728 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x494728) {
            ctx->pc = 0x4947A4u;
            goto label_4947a4;
        }
    }
    ctx->pc = 0x494730u;
label_494730:
    // 0x494730: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x494730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_494734:
    // 0x494734: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x494734u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_494738:
    // 0x494738: 0x8fa60264  lw          $a2, 0x264($sp)
    ctx->pc = 0x494738u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
label_49473c:
    // 0x49473c: 0x3c07005f  lui         $a3, 0x5F
    ctx->pc = 0x49473cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)95 << 16));
label_494740:
    // 0x494740: 0x24e75210  addiu       $a3, $a3, 0x5210
    ctx->pc = 0x494740u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 21008));
label_494744:
    // 0x494744: 0x24080088  addiu       $t0, $zero, 0x88
    ctx->pc = 0x494744u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 136));
label_494748:
    // 0x494748: 0x3c09005f  lui         $t1, 0x5F
    ctx->pc = 0x494748u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)95 << 16));
label_49474c:
    // 0x49474c: 0x25295290  addiu       $t1, $t1, 0x5290
    ctx->pc = 0x49474cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 21136));
label_494750:
    // 0x494750: 0xc113940  jal         func_44E500
label_494754:
    if (ctx->pc == 0x494754u) {
        ctx->pc = 0x494758u;
        goto label_494758;
    }
    ctx->pc = 0x494750u;
    SET_GPR_U32(ctx, 31, 0x494758u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x494750u, 0x494758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x494758u;
label_494758:
    // 0x494758: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x494758u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_49475c:
    // 0x49475c: 0x3c05005f  lui         $a1, 0x5F
    ctx->pc = 0x49475cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)95 << 16));
label_494760:
    // 0x494760: 0x24a552b0  addiu       $a1, $a1, 0x52B0
    ctx->pc = 0x494760u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21168));
label_494764:
    // 0x494764: 0xc115c24  jal         func_457090
label_494768:
    if (ctx->pc == 0x494768u) {
        ctx->pc = 0x49476Cu;
        goto label_49476c;
    }
    ctx->pc = 0x494764u;
    SET_GPR_U32(ctx, 31, 0x49476Cu);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x494764u, 0x49476Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49476Cu;
label_49476c:
    // 0x49476c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x49476cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_494770:
    // 0x494770: 0x8fa20268  lw          $v0, 0x268($sp)
    ctx->pc = 0x494770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
label_494774:
    // 0x494774: 0x40f809  jalr        $v0
label_494778:
    if (ctx->pc == 0x494778u) {
        ctx->pc = 0x49477Cu;
        goto label_49477c;
    }
    ctx->pc = 0x494774u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x49477Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x494774u, 0x49477Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x49477Cu;
label_49477c:
    // 0x49477c: 0xaf82b738  sw          $v0, -0x48C8($gp)
    ctx->pc = 0x49477cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948664), GPR_U32(ctx, 2));
label_494780:
    // 0x494780: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x494780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_494784:
    // 0x494784: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_494788:
    if (ctx->pc == 0x494788u) {
        ctx->pc = 0x49478Cu;
        goto label_49478c;
    }
    ctx->pc = 0x494784u;
    {
        const bool branch_taken_0x494784 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x494784) {
            ctx->pc = 0x494794u;
            goto label_494794;
        }
    }
    ctx->pc = 0x49478Cu;
label_49478c:
    // 0x49478c: 0xd  break       0
    ctx->pc = 0x49478cu;
    runtime->handleBreak(rdram, ctx);
label_494790:
    // 0x494790: 0x0  nop
    ctx->pc = 0x494790u;
    // NOP
label_494794:
    // 0x494794: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x494794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_494798:
    // 0x494798: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x494798u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_49479c:
    // 0x49479c: 0xc11392c  jal         func_44E4B0
label_4947a0:
    if (ctx->pc == 0x4947A0u) {
        ctx->pc = 0x4947A4u;
        goto label_4947a4;
    }
    ctx->pc = 0x49479Cu;
    SET_GPR_U32(ctx, 31, 0x4947A4u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x49479Cu, 0x4947A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4947A4u;
label_4947a4:
    // 0x4947a4: 0x8fa20280  lw          $v0, 0x280($sp)
    ctx->pc = 0x4947a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_4947a8:
    // 0x4947a8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_4947ac:
    if (ctx->pc == 0x4947ACu) {
        ctx->pc = 0x4947B0u;
        goto label_4947b0;
    }
    ctx->pc = 0x4947A8u;
    {
        const bool branch_taken_0x4947a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4947a8) {
            ctx->pc = 0x4947BCu;
            goto label_4947bc;
        }
    }
    ctx->pc = 0x4947B0u;
label_4947b0:
    // 0x4947b0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4947b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4947b4:
    // 0x4947b4: 0x10000030  b           . + 4 + (0x30 << 2)
label_4947b8:
    if (ctx->pc == 0x4947B8u) {
        ctx->pc = 0x4947BCu;
        goto label_4947bc;
    }
    ctx->pc = 0x4947B4u;
    {
        const bool branch_taken_0x4947b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4947b4) {
            ctx->pc = 0x494878u;
            goto label_494878;
        }
    }
    ctx->pc = 0x4947BCu;
label_4947bc:
    // 0x4947bc: 0x8fa20280  lw          $v0, 0x280($sp)
    ctx->pc = 0x4947bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_4947c0:
    // 0x4947c0: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x4947c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_4947c4:
    // 0x4947c4: 0xaf82c168  sw          $v0, -0x3E98($gp)
    ctx->pc = 0x4947c4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294951272), GPR_U32(ctx, 2));
label_4947c8:
    // 0x4947c8: 0x8f82c168  lw          $v0, -0x3E98($gp)
    ctx->pc = 0x4947c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951272)));
label_4947cc:
    // 0x4947cc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_4947d0:
    if (ctx->pc == 0x4947D0u) {
        ctx->pc = 0x4947D4u;
        goto label_4947d4;
    }
    ctx->pc = 0x4947CCu;
    {
        const bool branch_taken_0x4947cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4947cc) {
            ctx->pc = 0x4947E0u;
            goto label_4947e0;
        }
    }
    ctx->pc = 0x4947D4u;
label_4947d4:
    // 0x4947d4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4947d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4947d8:
    // 0x4947d8: 0x10000027  b           . + 4 + (0x27 << 2)
label_4947dc:
    if (ctx->pc == 0x4947DCu) {
        ctx->pc = 0x4947E0u;
        goto label_4947e0;
    }
    ctx->pc = 0x4947D8u;
    {
        const bool branch_taken_0x4947d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4947d8) {
            ctx->pc = 0x494878u;
            goto label_494878;
        }
    }
    ctx->pc = 0x4947E0u;
label_4947e0:
    // 0x4947e0: 0x8fa20280  lw          $v0, 0x280($sp)
    ctx->pc = 0x4947e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_4947e4:
    // 0x4947e4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x4947e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4947e8:
    // 0x4947e8: 0xaf82c164  sw          $v0, -0x3E9C($gp)
    ctx->pc = 0x4947e8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294951268), GPR_U32(ctx, 2));
label_4947ec:
    // 0x4947ec: 0x8f82c164  lw          $v0, -0x3E9C($gp)
    ctx->pc = 0x4947ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951268)));
label_4947f0:
    // 0x4947f0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_4947f4:
    if (ctx->pc == 0x4947F4u) {
        ctx->pc = 0x4947F8u;
        goto label_4947f8;
    }
    ctx->pc = 0x4947F0u;
    {
        const bool branch_taken_0x4947f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4947f0) {
            ctx->pc = 0x494804u;
            goto label_494804;
        }
    }
    ctx->pc = 0x4947F8u;
label_4947f8:
    // 0x4947f8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4947f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4947fc:
    // 0x4947fc: 0x1000001e  b           . + 4 + (0x1E << 2)
label_494800:
    if (ctx->pc == 0x494800u) {
        ctx->pc = 0x494804u;
        goto label_494804;
    }
    ctx->pc = 0x4947FCu;
    {
        const bool branch_taken_0x4947fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4947fc) {
            ctx->pc = 0x494878u;
            goto label_494878;
        }
    }
    ctx->pc = 0x494804u;
label_494804:
    // 0x494804: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x494804u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_494808:
    // 0x494808: 0x10000006  b           . + 4 + (0x6 << 2)
label_49480c:
    if (ctx->pc == 0x49480Cu) {
        ctx->pc = 0x494810u;
        goto label_494810;
    }
    ctx->pc = 0x494808u;
    {
        const bool branch_taken_0x494808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x494808) {
            ctx->pc = 0x494824u;
            goto label_494824;
        }
    }
    ctx->pc = 0x494810u;
label_494810:
    // 0x494810: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x494810u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_494814:
    // 0x494814: 0x2782c140  addiu       $v0, $gp, -0x3EC0
    ctx->pc = 0x494814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294951232));
label_494818:
    // 0x494818: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x494818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_49481c:
    // 0x49481c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x49481cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_494820:
    // 0x494820: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x494820u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_494824:
    // 0x494824: 0x2e020002  sltiu       $v0, $s0, 0x2
    ctx->pc = 0x494824u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_494828:
    // 0x494828: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_49482c:
    if (ctx->pc == 0x49482Cu) {
        ctx->pc = 0x494830u;
        goto label_494830;
    }
    ctx->pc = 0x494828u;
    {
        const bool branch_taken_0x494828 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x494828) {
            ctx->pc = 0x494810u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_494810;
        }
    }
    ctx->pc = 0x494830u;
label_494830:
    // 0x494830: 0xaf80c14c  sw          $zero, -0x3EB4($gp)
    ctx->pc = 0x494830u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294951244), GPR_U32(ctx, 0));
label_494834:
    // 0x494834: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x494834u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_494838:
    // 0x494838: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x494838u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_49483c:
    // 0x49483c: 0xc12522c  jal         func_4948B0
label_494840:
    if (ctx->pc == 0x494840u) {
        ctx->pc = 0x494844u;
        goto label_494844;
    }
    ctx->pc = 0x49483Cu;
    SET_GPR_U32(ctx, 31, 0x494844u);
    ctx->pc = 0x4948B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4948B0u, 0x49483Cu, 0x494844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x494844u;
label_494844:
    // 0x494844: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x494844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_494848:
    // 0x494848: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x494848u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_49484c:
    // 0x49484c: 0xac437e70  sw          $v1, 0x7E70($v0)
    ctx->pc = 0x49484cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32368), GPR_U32(ctx, 3));
label_494850:
    // 0x494850: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x494850u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_494854:
    // 0x494854: 0xac407e74  sw          $zero, 0x7E74($v0)
    ctx->pc = 0x494854u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32372), GPR_U32(ctx, 0));
label_494858:
    // 0x494858: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x494858u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_49485c:
    // 0x49485c: 0xac407e78  sw          $zero, 0x7E78($v0)
    ctx->pc = 0x49485cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32376), GPR_U32(ctx, 0));
label_494860:
    // 0x494860: 0xaf80c15c  sw          $zero, -0x3EA4($gp)
    ctx->pc = 0x494860u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294951260), GPR_U32(ctx, 0));
label_494864:
    // 0x494864: 0xaf80c160  sw          $zero, -0x3EA0($gp)
    ctx->pc = 0x494864u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294951264), GPR_U32(ctx, 0));
label_494868:
    // 0x494868: 0xaf80c170  sw          $zero, -0x3E90($gp)
    ctx->pc = 0x494868u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294951280), GPR_U32(ctx, 0));
label_49486c:
    // 0x49486c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x49486cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_494870:
    // 0x494870: 0xaf82c13c  sw          $v0, -0x3EC4($gp)
    ctx->pc = 0x494870u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294951228), GPR_U32(ctx, 2));
label_494874:
    // 0x494874: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x494874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_494878:
    // 0x494878: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x494878u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_49487c:
    // 0x49487c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x49487cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_494880:
    // 0x494880: 0x27bd0290  addiu       $sp, $sp, 0x290
    ctx->pc = 0x494880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
label_494884:
    // 0x494884: 0x3e00008  jr          $ra
label_494888:
    if (ctx->pc == 0x494888u) {
        ctx->pc = 0x49488Cu;
        goto label_49488c;
    }
    ctx->pc = 0x494884u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x494884u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49488Cu;
label_49488c:
    // 0x49488c: 0x0  nop
    ctx->pc = 0x49488cu;
    // NOP
    ctx->pc = 0x494890u;
}
