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

// Function: sub_00481530
// Address: 0x481530 - 0x481660
void sub_00481530_0x481530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00481530_0x481530");
#endif

    switch (ctx->pc) {
        case 0x481530u: goto label_481530;
        case 0x481534u: goto label_481534;
        case 0x481538u: goto label_481538;
        case 0x48153cu: goto label_48153c;
        case 0x481540u: goto label_481540;
        case 0x481544u: goto label_481544;
        case 0x481548u: goto label_481548;
        case 0x48154cu: goto label_48154c;
        case 0x481550u: goto label_481550;
        case 0x481554u: goto label_481554;
        case 0x481558u: goto label_481558;
        case 0x48155cu: goto label_48155c;
        case 0x481560u: goto label_481560;
        case 0x481564u: goto label_481564;
        case 0x481568u: goto label_481568;
        case 0x48156cu: goto label_48156c;
        case 0x481570u: goto label_481570;
        case 0x481574u: goto label_481574;
        case 0x481578u: goto label_481578;
        case 0x48157cu: goto label_48157c;
        case 0x481580u: goto label_481580;
        case 0x481584u: goto label_481584;
        case 0x481588u: goto label_481588;
        case 0x48158cu: goto label_48158c;
        case 0x481590u: goto label_481590;
        case 0x481594u: goto label_481594;
        case 0x481598u: goto label_481598;
        case 0x48159cu: goto label_48159c;
        case 0x4815a0u: goto label_4815a0;
        case 0x4815a4u: goto label_4815a4;
        case 0x4815a8u: goto label_4815a8;
        case 0x4815acu: goto label_4815ac;
        case 0x4815b0u: goto label_4815b0;
        case 0x4815b4u: goto label_4815b4;
        case 0x4815b8u: goto label_4815b8;
        case 0x4815bcu: goto label_4815bc;
        case 0x4815c0u: goto label_4815c0;
        case 0x4815c4u: goto label_4815c4;
        case 0x4815c8u: goto label_4815c8;
        case 0x4815ccu: goto label_4815cc;
        case 0x4815d0u: goto label_4815d0;
        case 0x4815d4u: goto label_4815d4;
        case 0x4815d8u: goto label_4815d8;
        case 0x4815dcu: goto label_4815dc;
        case 0x4815e0u: goto label_4815e0;
        case 0x4815e4u: goto label_4815e4;
        case 0x4815e8u: goto label_4815e8;
        case 0x4815ecu: goto label_4815ec;
        case 0x4815f0u: goto label_4815f0;
        case 0x4815f4u: goto label_4815f4;
        case 0x4815f8u: goto label_4815f8;
        case 0x4815fcu: goto label_4815fc;
        case 0x481600u: goto label_481600;
        case 0x481604u: goto label_481604;
        case 0x481608u: goto label_481608;
        case 0x48160cu: goto label_48160c;
        case 0x481610u: goto label_481610;
        case 0x481614u: goto label_481614;
        case 0x481618u: goto label_481618;
        case 0x48161cu: goto label_48161c;
        case 0x481620u: goto label_481620;
        case 0x481624u: goto label_481624;
        case 0x481628u: goto label_481628;
        case 0x48162cu: goto label_48162c;
        case 0x481630u: goto label_481630;
        case 0x481634u: goto label_481634;
        case 0x481638u: goto label_481638;
        case 0x48163cu: goto label_48163c;
        case 0x481640u: goto label_481640;
        case 0x481644u: goto label_481644;
        case 0x481648u: goto label_481648;
        case 0x48164cu: goto label_48164c;
        case 0x481650u: goto label_481650;
        case 0x481654u: goto label_481654;
        case 0x481658u: goto label_481658;
        case 0x48165cu: goto label_48165c;
        default: break;
    }

    ctx->pc = 0x481530u;

label_481530:
    // 0x481530: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x481530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
label_481534:
    // 0x481534: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x481534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_481538:
    // 0x481538: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x481538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_48153c:
    // 0x48153c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x48153cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_481540:
    // 0x481540: 0xafa40160  sw          $a0, 0x160($sp)
    ctx->pc = 0x481540u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 4));
label_481544:
    // 0x481544: 0xafa50170  sw          $a1, 0x170($sp)
    ctx->pc = 0x481544u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 5));
label_481548:
    // 0x481548: 0x8fa40160  lw          $a0, 0x160($sp)
    ctx->pc = 0x481548u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_48154c:
    // 0x48154c: 0xc0c9722  jal         func_325C88
label_481550:
    if (ctx->pc == 0x481550u) {
        ctx->pc = 0x481554u;
        goto label_481554;
    }
    ctx->pc = 0x48154Cu;
    SET_GPR_U32(ctx, 31, 0x481554u);
    ctx->pc = 0x325C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x325C88u, 0x48154Cu, 0x481554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x481554u;
label_481554:
    // 0x481554: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x481554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_481558:
    // 0x481558: 0x8c510018  lw          $s1, 0x18($v0)
    ctx->pc = 0x481558u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_48155c:
    // 0x48155c: 0x12200038  beqz        $s1, . + 4 + (0x38 << 2)
label_481560:
    if (ctx->pc == 0x481560u) {
        ctx->pc = 0x481564u;
        goto label_481564;
    }
    ctx->pc = 0x48155Cu;
    {
        const bool branch_taken_0x48155c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x48155c) {
            ctx->pc = 0x481640u;
            goto label_481640;
        }
    }
    ctx->pc = 0x481564u;
label_481564:
    // 0x481564: 0x8fb00170  lw          $s0, 0x170($sp)
    ctx->pc = 0x481564u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_481568:
    // 0x481568: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
label_48156c:
    if (ctx->pc == 0x48156Cu) {
        ctx->pc = 0x481570u;
        goto label_481570;
    }
    ctx->pc = 0x481568u;
    {
        const bool branch_taken_0x481568 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x481568) {
            ctx->pc = 0x481580u;
            goto label_481580;
        }
    }
    ctx->pc = 0x481570u;
label_481570:
    // 0x481570: 0x8fa40160  lw          $a0, 0x160($sp)
    ctx->pc = 0x481570u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_481574:
    // 0x481574: 0xc0c8ecc  jal         func_323B30
label_481578:
    if (ctx->pc == 0x481578u) {
        ctx->pc = 0x48157Cu;
        goto label_48157c;
    }
    ctx->pc = 0x481574u;
    SET_GPR_U32(ctx, 31, 0x48157Cu);
    ctx->pc = 0x323B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323B30u, 0x481574u, 0x48157Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48157Cu;
label_48157c:
    // 0x48157c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x48157cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_481580:
    // 0x481580: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_481584:
    if (ctx->pc == 0x481584u) {
        ctx->pc = 0x481588u;
        goto label_481588;
    }
    ctx->pc = 0x481580u;
    {
        const bool branch_taken_0x481580 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x481580) {
            ctx->pc = 0x4815A8u;
            goto label_4815a8;
        }
    }
    ctx->pc = 0x481588u;
label_481588:
    // 0x481588: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x481588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_48158c:
    // 0x48158c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x48158cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_481590:
    // 0x481590: 0x24a51660  addiu       $a1, $a1, 0x1660
    ctx->pc = 0x481590u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5728));
label_481594:
    // 0x481594: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x481594u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_481598:
    // 0x481598: 0xc0e3396  jal         func_38CE58
label_48159c:
    if (ctx->pc == 0x48159Cu) {
        ctx->pc = 0x4815A0u;
        goto label_4815a0;
    }
    ctx->pc = 0x481598u;
    SET_GPR_U32(ctx, 31, 0x4815A0u);
    ctx->pc = 0x38CE58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CE58u, 0x481598u, 0x4815A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4815A0u;
label_4815a0:
    // 0x4815a0: 0x10000027  b           . + 4 + (0x27 << 2)
label_4815a4:
    if (ctx->pc == 0x4815A4u) {
        ctx->pc = 0x4815A8u;
        goto label_4815a8;
    }
    ctx->pc = 0x4815A0u;
    {
        const bool branch_taken_0x4815a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4815a0) {
            ctx->pc = 0x481640u;
            goto label_481640;
        }
    }
    ctx->pc = 0x4815A8u;
label_4815a8:
    // 0x4815a8: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x4815a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_4815ac:
    // 0x4815ac: 0x2405fffe  addiu       $a1, $zero, -0x2
    ctx->pc = 0x4815acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_4815b0:
    // 0x4815b0: 0x27a60150  addiu       $a2, $sp, 0x150
    ctx->pc = 0x4815b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_4815b4:
    // 0x4815b4: 0xc115ee8  jal         func_457BA0
label_4815b8:
    if (ctx->pc == 0x4815B8u) {
        ctx->pc = 0x4815BCu;
        goto label_4815bc;
    }
    ctx->pc = 0x4815B4u;
    SET_GPR_U32(ctx, 31, 0x4815BCu);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x4815B4u, 0x4815BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4815BCu;
label_4815bc:
    // 0x4815bc: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_4815c0:
    if (ctx->pc == 0x4815C0u) {
        ctx->pc = 0x4815C4u;
        goto label_4815c4;
    }
    ctx->pc = 0x4815BCu;
    {
        const bool branch_taken_0x4815bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4815bc) {
            ctx->pc = 0x481640u;
            goto label_481640;
        }
    }
    ctx->pc = 0x4815C4u;
label_4815c4:
    // 0x4815c4: 0x8fa20158  lw          $v0, 0x158($sp)
    ctx->pc = 0x4815c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
label_4815c8:
    // 0x4815c8: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_4815cc:
    if (ctx->pc == 0x4815CCu) {
        ctx->pc = 0x4815D0u;
        goto label_4815d0;
    }
    ctx->pc = 0x4815C8u;
    {
        const bool branch_taken_0x4815c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4815c8) {
            ctx->pc = 0x481640u;
            goto label_481640;
        }
    }
    ctx->pc = 0x4815D0u;
label_4815d0:
    // 0x4815d0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x4815d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_4815d4:
    // 0x4815d4: 0x2405fffe  addiu       $a1, $zero, -0x2
    ctx->pc = 0x4815d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_4815d8:
    // 0x4815d8: 0x8fa60154  lw          $a2, 0x154($sp)
    ctx->pc = 0x4815d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
label_4815dc:
    // 0x4815dc: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x4815dcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_4815e0:
    // 0x4815e0: 0x24e71920  addiu       $a3, $a3, 0x1920
    ctx->pc = 0x4815e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 6432));
label_4815e4:
    // 0x4815e4: 0x2408031b  addiu       $t0, $zero, 0x31B
    ctx->pc = 0x4815e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 795));
label_4815e8:
    // 0x4815e8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x4815e8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4815ec:
    // 0x4815ec: 0xc113940  jal         func_44E500
label_4815f0:
    if (ctx->pc == 0x4815F0u) {
        ctx->pc = 0x4815F4u;
        goto label_4815f4;
    }
    ctx->pc = 0x4815ECu;
    SET_GPR_U32(ctx, 31, 0x4815F4u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x4815ECu, 0x4815F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4815F4u;
label_4815f4:
    // 0x4815f4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x4815f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_4815f8:
    // 0x4815f8: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x4815f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_4815fc:
    // 0x4815fc: 0x24a51ca0  addiu       $a1, $a1, 0x1CA0
    ctx->pc = 0x4815fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7328));
label_481600:
    // 0x481600: 0x8fa60160  lw          $a2, 0x160($sp)
    ctx->pc = 0x481600u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_481604:
    // 0x481604: 0xc115c24  jal         func_457090
label_481608:
    if (ctx->pc == 0x481608u) {
        ctx->pc = 0x48160Cu;
        goto label_48160c;
    }
    ctx->pc = 0x481604u;
    SET_GPR_U32(ctx, 31, 0x48160Cu);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x481604u, 0x48160Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48160Cu;
label_48160c:
    // 0x48160c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x48160cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_481610:
    // 0x481610: 0x8fa20158  lw          $v0, 0x158($sp)
    ctx->pc = 0x481610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
label_481614:
    // 0x481614: 0x40f809  jalr        $v0
label_481618:
    if (ctx->pc == 0x481618u) {
        ctx->pc = 0x48161Cu;
        goto label_48161c;
    }
    ctx->pc = 0x481614u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x48161Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x481614u, 0x48161Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x48161Cu;
label_48161c:
    // 0x48161c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x48161cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_481620:
    // 0x481620: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_481624:
    if (ctx->pc == 0x481624u) {
        ctx->pc = 0x481628u;
        goto label_481628;
    }
    ctx->pc = 0x481620u;
    {
        const bool branch_taken_0x481620 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x481620) {
            ctx->pc = 0x481630u;
            goto label_481630;
        }
    }
    ctx->pc = 0x481628u;
label_481628:
    // 0x481628: 0xd  break       0
    ctx->pc = 0x481628u;
    runtime->handleBreak(rdram, ctx);
label_48162c:
    // 0x48162c: 0x0  nop
    ctx->pc = 0x48162cu;
    // NOP
label_481630:
    // 0x481630: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x481630u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_481634:
    // 0x481634: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x481634u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_481638:
    // 0x481638: 0xc11392c  jal         func_44E4B0
label_48163c:
    if (ctx->pc == 0x48163Cu) {
        ctx->pc = 0x481640u;
        goto label_481640;
    }
    ctx->pc = 0x481638u;
    SET_GPR_U32(ctx, 31, 0x481640u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x481638u, 0x481640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x481640u;
label_481640:
    // 0x481640: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x481640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_481644:
    // 0x481644: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x481644u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_481648:
    // 0x481648: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x481648u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_48164c:
    // 0x48164c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x48164cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_481650:
    // 0x481650: 0x27bd0180  addiu       $sp, $sp, 0x180
    ctx->pc = 0x481650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_481654:
    // 0x481654: 0x3e00008  jr          $ra
label_481658:
    if (ctx->pc == 0x481658u) {
        ctx->pc = 0x48165Cu;
        goto label_48165c;
    }
    ctx->pc = 0x481654u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x481654u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48165Cu;
label_48165c:
    // 0x48165c: 0x0  nop
    ctx->pc = 0x48165cu;
    // NOP
    ctx->pc = 0x481660u;
}
