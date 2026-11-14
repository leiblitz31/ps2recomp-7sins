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

// Function: sub_0045F620
// Address: 0x45f620 - 0x45f760
void sub_0045F620_0x45f620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0045F620_0x45f620");
#endif

    switch (ctx->pc) {
        case 0x45f620u: goto label_45f620;
        case 0x45f624u: goto label_45f624;
        case 0x45f628u: goto label_45f628;
        case 0x45f62cu: goto label_45f62c;
        case 0x45f630u: goto label_45f630;
        case 0x45f634u: goto label_45f634;
        case 0x45f638u: goto label_45f638;
        case 0x45f63cu: goto label_45f63c;
        case 0x45f640u: goto label_45f640;
        case 0x45f644u: goto label_45f644;
        case 0x45f648u: goto label_45f648;
        case 0x45f64cu: goto label_45f64c;
        case 0x45f650u: goto label_45f650;
        case 0x45f654u: goto label_45f654;
        case 0x45f658u: goto label_45f658;
        case 0x45f65cu: goto label_45f65c;
        case 0x45f660u: goto label_45f660;
        case 0x45f664u: goto label_45f664;
        case 0x45f668u: goto label_45f668;
        case 0x45f66cu: goto label_45f66c;
        case 0x45f670u: goto label_45f670;
        case 0x45f674u: goto label_45f674;
        case 0x45f678u: goto label_45f678;
        case 0x45f67cu: goto label_45f67c;
        case 0x45f680u: goto label_45f680;
        case 0x45f684u: goto label_45f684;
        case 0x45f688u: goto label_45f688;
        case 0x45f68cu: goto label_45f68c;
        case 0x45f690u: goto label_45f690;
        case 0x45f694u: goto label_45f694;
        case 0x45f698u: goto label_45f698;
        case 0x45f69cu: goto label_45f69c;
        case 0x45f6a0u: goto label_45f6a0;
        case 0x45f6a4u: goto label_45f6a4;
        case 0x45f6a8u: goto label_45f6a8;
        case 0x45f6acu: goto label_45f6ac;
        case 0x45f6b0u: goto label_45f6b0;
        case 0x45f6b4u: goto label_45f6b4;
        case 0x45f6b8u: goto label_45f6b8;
        case 0x45f6bcu: goto label_45f6bc;
        case 0x45f6c0u: goto label_45f6c0;
        case 0x45f6c4u: goto label_45f6c4;
        case 0x45f6c8u: goto label_45f6c8;
        case 0x45f6ccu: goto label_45f6cc;
        case 0x45f6d0u: goto label_45f6d0;
        case 0x45f6d4u: goto label_45f6d4;
        case 0x45f6d8u: goto label_45f6d8;
        case 0x45f6dcu: goto label_45f6dc;
        case 0x45f6e0u: goto label_45f6e0;
        case 0x45f6e4u: goto label_45f6e4;
        case 0x45f6e8u: goto label_45f6e8;
        case 0x45f6ecu: goto label_45f6ec;
        case 0x45f6f0u: goto label_45f6f0;
        case 0x45f6f4u: goto label_45f6f4;
        case 0x45f6f8u: goto label_45f6f8;
        case 0x45f6fcu: goto label_45f6fc;
        case 0x45f700u: goto label_45f700;
        case 0x45f704u: goto label_45f704;
        case 0x45f708u: goto label_45f708;
        case 0x45f70cu: goto label_45f70c;
        case 0x45f710u: goto label_45f710;
        case 0x45f714u: goto label_45f714;
        case 0x45f718u: goto label_45f718;
        case 0x45f71cu: goto label_45f71c;
        case 0x45f720u: goto label_45f720;
        case 0x45f724u: goto label_45f724;
        case 0x45f728u: goto label_45f728;
        case 0x45f72cu: goto label_45f72c;
        case 0x45f730u: goto label_45f730;
        case 0x45f734u: goto label_45f734;
        case 0x45f738u: goto label_45f738;
        case 0x45f73cu: goto label_45f73c;
        case 0x45f740u: goto label_45f740;
        case 0x45f744u: goto label_45f744;
        case 0x45f748u: goto label_45f748;
        case 0x45f74cu: goto label_45f74c;
        case 0x45f750u: goto label_45f750;
        case 0x45f754u: goto label_45f754;
        case 0x45f758u: goto label_45f758;
        case 0x45f75cu: goto label_45f75c;
        default: break;
    }

    ctx->pc = 0x45f620u;

label_45f620:
    // 0x45f620: 0x27bdfe60  addiu       $sp, $sp, -0x1A0
    ctx->pc = 0x45f620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966880));
label_45f624:
    // 0x45f624: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x45f624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_45f628:
    // 0x45f628: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x45f628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_45f62c:
    // 0x45f62c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x45f62cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_45f630:
    // 0x45f630: 0xafa40160  sw          $a0, 0x160($sp)
    ctx->pc = 0x45f630u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 4));
label_45f634:
    // 0x45f634: 0xafa50170  sw          $a1, 0x170($sp)
    ctx->pc = 0x45f634u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 5));
label_45f638:
    // 0x45f638: 0xafa60180  sw          $a2, 0x180($sp)
    ctx->pc = 0x45f638u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 6));
label_45f63c:
    // 0x45f63c: 0xafa70190  sw          $a3, 0x190($sp)
    ctx->pc = 0x45f63cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 7));
label_45f640:
    // 0x45f640: 0x8fb10160  lw          $s1, 0x160($sp)
    ctx->pc = 0x45f640u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_45f644:
    // 0x45f644: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x45f644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_45f648:
    // 0x45f648: 0xafa20160  sw          $v0, 0x160($sp)
    ctx->pc = 0x45f648u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 2));
label_45f64c:
    // 0x45f64c: 0xafb10170  sw          $s1, 0x170($sp)
    ctx->pc = 0x45f64cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 17));
label_45f650:
    // 0x45f650: 0x8fa40160  lw          $a0, 0x160($sp)
    ctx->pc = 0x45f650u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_45f654:
    // 0x45f654: 0x8fa50170  lw          $a1, 0x170($sp)
    ctx->pc = 0x45f654u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_45f658:
    // 0x45f658: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x45f658u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_45f65c:
    // 0x45f65c: 0xc11818c  jal         func_460630
label_45f660:
    if (ctx->pc == 0x45F660u) {
        ctx->pc = 0x45F664u;
        goto label_45f664;
    }
    ctx->pc = 0x45F65Cu;
    SET_GPR_U32(ctx, 31, 0x45F664u);
    ctx->pc = 0x460630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x460630u, 0x45F65Cu, 0x45F664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45F664u;
label_45f664:
    // 0x45f664: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x45f664u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_45f668:
    // 0x45f668: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x45f668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
label_45f66c:
    // 0x45f66c: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_45f670:
    if (ctx->pc == 0x45F670u) {
        ctx->pc = 0x45F674u;
        goto label_45f674;
    }
    ctx->pc = 0x45F66Cu;
    {
        const bool branch_taken_0x45f66c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x45f66c) {
            ctx->pc = 0x45F71Cu;
            goto label_45f71c;
        }
    }
    ctx->pc = 0x45F674u;
label_45f674:
    // 0x45f674: 0x8f82b1a4  lw          $v0, -0x4E5C($gp)
    ctx->pc = 0x45f674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947236)));
label_45f678:
    // 0x45f678: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_45f67c:
    if (ctx->pc == 0x45F67Cu) {
        ctx->pc = 0x45F680u;
        goto label_45f680;
    }
    ctx->pc = 0x45F678u;
    {
        const bool branch_taken_0x45f678 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45f678) {
            ctx->pc = 0x45F71Cu;
            goto label_45f71c;
        }
    }
    ctx->pc = 0x45F680u;
label_45f680:
    // 0x45f680: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x45f680u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_45f684:
    // 0x45f684: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x45f684u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_45f688:
    // 0x45f688: 0x27a60150  addiu       $a2, $sp, 0x150
    ctx->pc = 0x45f688u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_45f68c:
    // 0x45f68c: 0xc115ee8  jal         func_457BA0
label_45f690:
    if (ctx->pc == 0x45F690u) {
        ctx->pc = 0x45F694u;
        goto label_45f694;
    }
    ctx->pc = 0x45F68Cu;
    SET_GPR_U32(ctx, 31, 0x45F694u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x45F68Cu, 0x45F694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45F694u;
label_45f694:
    // 0x45f694: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_45f698:
    if (ctx->pc == 0x45F698u) {
        ctx->pc = 0x45F69Cu;
        goto label_45f69c;
    }
    ctx->pc = 0x45F694u;
    {
        const bool branch_taken_0x45f694 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45f694) {
            ctx->pc = 0x45F71Cu;
            goto label_45f71c;
        }
    }
    ctx->pc = 0x45F69Cu;
label_45f69c:
    // 0x45f69c: 0x8fa20158  lw          $v0, 0x158($sp)
    ctx->pc = 0x45f69cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
label_45f6a0:
    // 0x45f6a0: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_45f6a4:
    if (ctx->pc == 0x45F6A4u) {
        ctx->pc = 0x45F6A8u;
        goto label_45f6a8;
    }
    ctx->pc = 0x45F6A0u;
    {
        const bool branch_taken_0x45f6a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45f6a0) {
            ctx->pc = 0x45F71Cu;
            goto label_45f71c;
        }
    }
    ctx->pc = 0x45F6A8u;
label_45f6a8:
    // 0x45f6a8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x45f6a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_45f6ac:
    // 0x45f6ac: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x45f6acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_45f6b0:
    // 0x45f6b0: 0x8fa60154  lw          $a2, 0x154($sp)
    ctx->pc = 0x45f6b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
label_45f6b4:
    // 0x45f6b4: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x45f6b4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_45f6b8:
    // 0x45f6b8: 0x24e7ed20  addiu       $a3, $a3, -0x12E0
    ctx->pc = 0x45f6b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294962464));
label_45f6bc:
    // 0x45f6bc: 0x24080366  addiu       $t0, $zero, 0x366
    ctx->pc = 0x45f6bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 870));
label_45f6c0:
    // 0x45f6c0: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x45f6c0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_45f6c4:
    // 0x45f6c4: 0x2529ee50  addiu       $t1, $t1, -0x11B0
    ctx->pc = 0x45f6c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294962768));
label_45f6c8:
    // 0x45f6c8: 0xc113940  jal         func_44E500
label_45f6cc:
    if (ctx->pc == 0x45F6CCu) {
        ctx->pc = 0x45F6D0u;
        goto label_45f6d0;
    }
    ctx->pc = 0x45F6C8u;
    SET_GPR_U32(ctx, 31, 0x45F6D0u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x45F6C8u, 0x45F6D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45F6D0u;
label_45f6d0:
    // 0x45f6d0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x45f6d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_45f6d4:
    // 0x45f6d4: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x45f6d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_45f6d8:
    // 0x45f6d8: 0x24a5ee40  addiu       $a1, $a1, -0x11C0
    ctx->pc = 0x45f6d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962752));
label_45f6dc:
    // 0x45f6dc: 0xc115c24  jal         func_457090
label_45f6e0:
    if (ctx->pc == 0x45F6E0u) {
        ctx->pc = 0x45F6E4u;
        goto label_45f6e4;
    }
    ctx->pc = 0x45F6DCu;
    SET_GPR_U32(ctx, 31, 0x45F6E4u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x45F6DCu, 0x45F6E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45F6E4u;
label_45f6e4:
    // 0x45f6e4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x45f6e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_45f6e8:
    // 0x45f6e8: 0x8fa20158  lw          $v0, 0x158($sp)
    ctx->pc = 0x45f6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
label_45f6ec:
    // 0x45f6ec: 0x40f809  jalr        $v0
label_45f6f0:
    if (ctx->pc == 0x45F6F0u) {
        ctx->pc = 0x45F6F4u;
        goto label_45f6f4;
    }
    ctx->pc = 0x45F6ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x45F6F4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45F6ECu, 0x45F6F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x45F6F4u;
label_45f6f4:
    // 0x45f6f4: 0xaf82b1a4  sw          $v0, -0x4E5C($gp)
    ctx->pc = 0x45f6f4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947236), GPR_U32(ctx, 2));
label_45f6f8:
    // 0x45f6f8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x45f6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_45f6fc:
    // 0x45f6fc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_45f700:
    if (ctx->pc == 0x45F700u) {
        ctx->pc = 0x45F704u;
        goto label_45f704;
    }
    ctx->pc = 0x45F6FCu;
    {
        const bool branch_taken_0x45f6fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45f6fc) {
            ctx->pc = 0x45F70Cu;
            goto label_45f70c;
        }
    }
    ctx->pc = 0x45F704u;
label_45f704:
    // 0x45f704: 0xd  break       0
    ctx->pc = 0x45f704u;
    runtime->handleBreak(rdram, ctx);
label_45f708:
    // 0x45f708: 0x0  nop
    ctx->pc = 0x45f708u;
    // NOP
label_45f70c:
    // 0x45f70c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x45f70cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_45f710:
    // 0x45f710: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x45f710u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_45f714:
    // 0x45f714: 0xc11392c  jal         func_44E4B0
label_45f718:
    if (ctx->pc == 0x45F718u) {
        ctx->pc = 0x45F71Cu;
        goto label_45f71c;
    }
    ctx->pc = 0x45F714u;
    SET_GPR_U32(ctx, 31, 0x45F71Cu);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x45F714u, 0x45F71Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45F71Cu;
label_45f71c:
    // 0x45f71c: 0x8fa30190  lw          $v1, 0x190($sp)
    ctx->pc = 0x45f71cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
label_45f720:
    // 0x45f720: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x45f720u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_45f724:
    // 0x45f724: 0xac434e18  sw          $v1, 0x4E18($v0)
    ctx->pc = 0x45f724u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 19992), GPR_U32(ctx, 3));
label_45f728:
    // 0x45f728: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x45f728u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
label_45f72c:
    // 0x45f72c: 0x24844e3c  addiu       $a0, $a0, 0x4E3C
    ctx->pc = 0x45f72cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20028));
label_45f730:
    // 0x45f730: 0x8fa50180  lw          $a1, 0x180($sp)
    ctx->pc = 0x45f730u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
label_45f734:
    // 0x45f734: 0xc0bc5c6  jal         func_2F1718
label_45f738:
    if (ctx->pc == 0x45F738u) {
        ctx->pc = 0x45F73Cu;
        goto label_45f73c;
    }
    ctx->pc = 0x45F734u;
    SET_GPR_U32(ctx, 31, 0x45F73Cu);
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x45F734u, 0x45F73Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45F73Cu;
label_45f73c:
    // 0x45f73c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x45f73cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_45f740:
    // 0x45f740: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x45f740u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_45f744:
    // 0x45f744: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x45f744u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_45f748:
    // 0x45f748: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x45f748u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_45f74c:
    // 0x45f74c: 0x27bd01a0  addiu       $sp, $sp, 0x1A0
    ctx->pc = 0x45f74cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_45f750:
    // 0x45f750: 0x3e00008  jr          $ra
label_45f754:
    if (ctx->pc == 0x45F754u) {
        ctx->pc = 0x45F758u;
        goto label_45f758;
    }
    ctx->pc = 0x45F750u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45F750u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x45F758u;
label_45f758:
    // 0x45f758: 0x0  nop
    ctx->pc = 0x45f758u;
    // NOP
label_45f75c:
    // 0x45f75c: 0x0  nop
    ctx->pc = 0x45f75cu;
    // NOP
    ctx->pc = 0x45f760u;
}
