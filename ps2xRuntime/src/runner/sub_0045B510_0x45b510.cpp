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

// Function: sub_0045B510
// Address: 0x45b510 - 0x45b700
void sub_0045B510_0x45b510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0045B510_0x45b510");
#endif

    switch (ctx->pc) {
        case 0x45b510u: goto label_45b510;
        case 0x45b514u: goto label_45b514;
        case 0x45b518u: goto label_45b518;
        case 0x45b51cu: goto label_45b51c;
        case 0x45b520u: goto label_45b520;
        case 0x45b524u: goto label_45b524;
        case 0x45b528u: goto label_45b528;
        case 0x45b52cu: goto label_45b52c;
        case 0x45b530u: goto label_45b530;
        case 0x45b534u: goto label_45b534;
        case 0x45b538u: goto label_45b538;
        case 0x45b53cu: goto label_45b53c;
        case 0x45b540u: goto label_45b540;
        case 0x45b544u: goto label_45b544;
        case 0x45b548u: goto label_45b548;
        case 0x45b54cu: goto label_45b54c;
        case 0x45b550u: goto label_45b550;
        case 0x45b554u: goto label_45b554;
        case 0x45b558u: goto label_45b558;
        case 0x45b55cu: goto label_45b55c;
        case 0x45b560u: goto label_45b560;
        case 0x45b564u: goto label_45b564;
        case 0x45b568u: goto label_45b568;
        case 0x45b56cu: goto label_45b56c;
        case 0x45b570u: goto label_45b570;
        case 0x45b574u: goto label_45b574;
        case 0x45b578u: goto label_45b578;
        case 0x45b57cu: goto label_45b57c;
        case 0x45b580u: goto label_45b580;
        case 0x45b584u: goto label_45b584;
        case 0x45b588u: goto label_45b588;
        case 0x45b58cu: goto label_45b58c;
        case 0x45b590u: goto label_45b590;
        case 0x45b594u: goto label_45b594;
        case 0x45b598u: goto label_45b598;
        case 0x45b59cu: goto label_45b59c;
        case 0x45b5a0u: goto label_45b5a0;
        case 0x45b5a4u: goto label_45b5a4;
        case 0x45b5a8u: goto label_45b5a8;
        case 0x45b5acu: goto label_45b5ac;
        case 0x45b5b0u: goto label_45b5b0;
        case 0x45b5b4u: goto label_45b5b4;
        case 0x45b5b8u: goto label_45b5b8;
        case 0x45b5bcu: goto label_45b5bc;
        case 0x45b5c0u: goto label_45b5c0;
        case 0x45b5c4u: goto label_45b5c4;
        case 0x45b5c8u: goto label_45b5c8;
        case 0x45b5ccu: goto label_45b5cc;
        case 0x45b5d0u: goto label_45b5d0;
        case 0x45b5d4u: goto label_45b5d4;
        case 0x45b5d8u: goto label_45b5d8;
        case 0x45b5dcu: goto label_45b5dc;
        case 0x45b5e0u: goto label_45b5e0;
        case 0x45b5e4u: goto label_45b5e4;
        case 0x45b5e8u: goto label_45b5e8;
        case 0x45b5ecu: goto label_45b5ec;
        case 0x45b5f0u: goto label_45b5f0;
        case 0x45b5f4u: goto label_45b5f4;
        case 0x45b5f8u: goto label_45b5f8;
        case 0x45b5fcu: goto label_45b5fc;
        case 0x45b600u: goto label_45b600;
        case 0x45b604u: goto label_45b604;
        case 0x45b608u: goto label_45b608;
        case 0x45b60cu: goto label_45b60c;
        case 0x45b610u: goto label_45b610;
        case 0x45b614u: goto label_45b614;
        case 0x45b618u: goto label_45b618;
        case 0x45b61cu: goto label_45b61c;
        case 0x45b620u: goto label_45b620;
        case 0x45b624u: goto label_45b624;
        case 0x45b628u: goto label_45b628;
        case 0x45b62cu: goto label_45b62c;
        case 0x45b630u: goto label_45b630;
        case 0x45b634u: goto label_45b634;
        case 0x45b638u: goto label_45b638;
        case 0x45b63cu: goto label_45b63c;
        case 0x45b640u: goto label_45b640;
        case 0x45b644u: goto label_45b644;
        case 0x45b648u: goto label_45b648;
        case 0x45b64cu: goto label_45b64c;
        case 0x45b650u: goto label_45b650;
        case 0x45b654u: goto label_45b654;
        case 0x45b658u: goto label_45b658;
        case 0x45b65cu: goto label_45b65c;
        case 0x45b660u: goto label_45b660;
        case 0x45b664u: goto label_45b664;
        case 0x45b668u: goto label_45b668;
        case 0x45b66cu: goto label_45b66c;
        case 0x45b670u: goto label_45b670;
        case 0x45b674u: goto label_45b674;
        case 0x45b678u: goto label_45b678;
        case 0x45b67cu: goto label_45b67c;
        case 0x45b680u: goto label_45b680;
        case 0x45b684u: goto label_45b684;
        case 0x45b688u: goto label_45b688;
        case 0x45b68cu: goto label_45b68c;
        case 0x45b690u: goto label_45b690;
        case 0x45b694u: goto label_45b694;
        case 0x45b698u: goto label_45b698;
        case 0x45b69cu: goto label_45b69c;
        case 0x45b6a0u: goto label_45b6a0;
        case 0x45b6a4u: goto label_45b6a4;
        case 0x45b6a8u: goto label_45b6a8;
        case 0x45b6acu: goto label_45b6ac;
        case 0x45b6b0u: goto label_45b6b0;
        case 0x45b6b4u: goto label_45b6b4;
        case 0x45b6b8u: goto label_45b6b8;
        case 0x45b6bcu: goto label_45b6bc;
        case 0x45b6c0u: goto label_45b6c0;
        case 0x45b6c4u: goto label_45b6c4;
        case 0x45b6c8u: goto label_45b6c8;
        case 0x45b6ccu: goto label_45b6cc;
        case 0x45b6d0u: goto label_45b6d0;
        case 0x45b6d4u: goto label_45b6d4;
        case 0x45b6d8u: goto label_45b6d8;
        case 0x45b6dcu: goto label_45b6dc;
        case 0x45b6e0u: goto label_45b6e0;
        case 0x45b6e4u: goto label_45b6e4;
        case 0x45b6e8u: goto label_45b6e8;
        case 0x45b6ecu: goto label_45b6ec;
        case 0x45b6f0u: goto label_45b6f0;
        case 0x45b6f4u: goto label_45b6f4;
        case 0x45b6f8u: goto label_45b6f8;
        case 0x45b6fcu: goto label_45b6fc;
        default: break;
    }

    ctx->pc = 0x45b510u;

label_45b510:
    // 0x45b510: 0x27bdfd70  addiu       $sp, $sp, -0x290
    ctx->pc = 0x45b510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966640));
label_45b514:
    // 0x45b514: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x45b514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_45b518:
    // 0x45b518: 0xafa40270  sw          $a0, 0x270($sp)
    ctx->pc = 0x45b518u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 624), GPR_U32(ctx, 4));
label_45b51c:
    // 0x45b51c: 0xafa50280  sw          $a1, 0x280($sp)
    ctx->pc = 0x45b51cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 640), GPR_U32(ctx, 5));
label_45b520:
    // 0x45b520: 0x8fa20270  lw          $v0, 0x270($sp)
    ctx->pc = 0x45b520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_45b524:
    // 0x45b524: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x45b524u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_45b528:
    // 0x45b528: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x45b528u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_45b52c:
    // 0x45b52c: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
label_45b530:
    if (ctx->pc == 0x45B530u) {
        ctx->pc = 0x45B534u;
        goto label_45b534;
    }
    ctx->pc = 0x45B52Cu;
    {
        const bool branch_taken_0x45b52c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x45b52c) {
            ctx->pc = 0x45B5D8u;
            goto label_45b5d8;
        }
    }
    ctx->pc = 0x45B534u;
label_45b534:
    // 0x45b534: 0x8f82b14c  lw          $v0, -0x4EB4($gp)
    ctx->pc = 0x45b534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947148)));
label_45b538:
    // 0x45b538: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_45b53c:
    if (ctx->pc == 0x45B53Cu) {
        ctx->pc = 0x45B540u;
        goto label_45b540;
    }
    ctx->pc = 0x45B538u;
    {
        const bool branch_taken_0x45b538 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45b538) {
            ctx->pc = 0x45B5D8u;
            goto label_45b5d8;
        }
    }
    ctx->pc = 0x45B540u;
label_45b540:
    // 0x45b540: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x45b540u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_45b544:
    // 0x45b544: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x45b544u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_45b548:
    // 0x45b548: 0x27a60260  addiu       $a2, $sp, 0x260
    ctx->pc = 0x45b548u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
label_45b54c:
    // 0x45b54c: 0xc115ee8  jal         func_457BA0
label_45b550:
    if (ctx->pc == 0x45B550u) {
        ctx->pc = 0x45B554u;
        goto label_45b554;
    }
    ctx->pc = 0x45B54Cu;
    SET_GPR_U32(ctx, 31, 0x45B554u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x45B54Cu, 0x45B554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45B554u;
label_45b554:
    // 0x45b554: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_45b558:
    if (ctx->pc == 0x45B558u) {
        ctx->pc = 0x45B55Cu;
        goto label_45b55c;
    }
    ctx->pc = 0x45B554u;
    {
        const bool branch_taken_0x45b554 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45b554) {
            ctx->pc = 0x45B5D8u;
            goto label_45b5d8;
        }
    }
    ctx->pc = 0x45B55Cu;
label_45b55c:
    // 0x45b55c: 0x8fa20268  lw          $v0, 0x268($sp)
    ctx->pc = 0x45b55cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
label_45b560:
    // 0x45b560: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_45b564:
    if (ctx->pc == 0x45B564u) {
        ctx->pc = 0x45B568u;
        goto label_45b568;
    }
    ctx->pc = 0x45B560u;
    {
        const bool branch_taken_0x45b560 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45b560) {
            ctx->pc = 0x45B5D8u;
            goto label_45b5d8;
        }
    }
    ctx->pc = 0x45B568u;
label_45b568:
    // 0x45b568: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x45b568u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_45b56c:
    // 0x45b56c: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x45b56cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_45b570:
    // 0x45b570: 0x8fa60264  lw          $a2, 0x264($sp)
    ctx->pc = 0x45b570u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
label_45b574:
    // 0x45b574: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x45b574u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_45b578:
    // 0x45b578: 0x24e7eb00  addiu       $a3, $a3, -0x1500
    ctx->pc = 0x45b578u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294961920));
label_45b57c:
    // 0x45b57c: 0x24080099  addiu       $t0, $zero, 0x99
    ctx->pc = 0x45b57cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 153));
label_45b580:
    // 0x45b580: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x45b580u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_45b584:
    // 0x45b584: 0x2529eb20  addiu       $t1, $t1, -0x14E0
    ctx->pc = 0x45b584u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294961952));
label_45b588:
    // 0x45b588: 0xc113940  jal         func_44E500
label_45b58c:
    if (ctx->pc == 0x45B58Cu) {
        ctx->pc = 0x45B590u;
        goto label_45b590;
    }
    ctx->pc = 0x45B588u;
    SET_GPR_U32(ctx, 31, 0x45B590u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x45B588u, 0x45B590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45B590u;
label_45b590:
    // 0x45b590: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x45b590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_45b594:
    // 0x45b594: 0x2785b154  addiu       $a1, $gp, -0x4EAC
    ctx->pc = 0x45b594u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294947156));
label_45b598:
    // 0x45b598: 0xc115c24  jal         func_457090
label_45b59c:
    if (ctx->pc == 0x45B59Cu) {
        ctx->pc = 0x45B5A0u;
        goto label_45b5a0;
    }
    ctx->pc = 0x45B598u;
    SET_GPR_U32(ctx, 31, 0x45B5A0u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x45B598u, 0x45B5A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45B5A0u;
label_45b5a0:
    // 0x45b5a0: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x45b5a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_45b5a4:
    // 0x45b5a4: 0x8fa20268  lw          $v0, 0x268($sp)
    ctx->pc = 0x45b5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
label_45b5a8:
    // 0x45b5a8: 0x40f809  jalr        $v0
label_45b5ac:
    if (ctx->pc == 0x45B5ACu) {
        ctx->pc = 0x45B5B0u;
        goto label_45b5b0;
    }
    ctx->pc = 0x45B5A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x45B5B0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45B5A8u, 0x45B5B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x45B5B0u;
label_45b5b0:
    // 0x45b5b0: 0xaf82b14c  sw          $v0, -0x4EB4($gp)
    ctx->pc = 0x45b5b0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947148), GPR_U32(ctx, 2));
label_45b5b4:
    // 0x45b5b4: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x45b5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_45b5b8:
    // 0x45b5b8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_45b5bc:
    if (ctx->pc == 0x45B5BCu) {
        ctx->pc = 0x45B5C0u;
        goto label_45b5c0;
    }
    ctx->pc = 0x45B5B8u;
    {
        const bool branch_taken_0x45b5b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45b5b8) {
            ctx->pc = 0x45B5C8u;
            goto label_45b5c8;
        }
    }
    ctx->pc = 0x45B5C0u;
label_45b5c0:
    // 0x45b5c0: 0xd  break       0
    ctx->pc = 0x45b5c0u;
    runtime->handleBreak(rdram, ctx);
label_45b5c4:
    // 0x45b5c4: 0x0  nop
    ctx->pc = 0x45b5c4u;
    // NOP
label_45b5c8:
    // 0x45b5c8: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x45b5c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_45b5cc:
    // 0x45b5cc: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x45b5ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_45b5d0:
    // 0x45b5d0: 0xc11392c  jal         func_44E4B0
label_45b5d4:
    if (ctx->pc == 0x45B5D4u) {
        ctx->pc = 0x45B5D8u;
        goto label_45b5d8;
    }
    ctx->pc = 0x45B5D0u;
    SET_GPR_U32(ctx, 31, 0x45B5D8u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x45B5D0u, 0x45B5D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45B5D8u;
label_45b5d8:
    // 0x45b5d8: 0x8fa20280  lw          $v0, 0x280($sp)
    ctx->pc = 0x45b5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_45b5dc:
    // 0x45b5dc: 0x28420022  slti        $v0, $v0, 0x22
    ctx->pc = 0x45b5dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)34) ? 1 : 0);
label_45b5e0:
    // 0x45b5e0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x45b5e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_45b5e4:
    // 0x45b5e4: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
label_45b5e8:
    if (ctx->pc == 0x45B5E8u) {
        ctx->pc = 0x45B5ECu;
        goto label_45b5ec;
    }
    ctx->pc = 0x45B5E4u;
    {
        const bool branch_taken_0x45b5e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x45b5e4) {
            ctx->pc = 0x45B690u;
            goto label_45b690;
        }
    }
    ctx->pc = 0x45B5ECu;
label_45b5ec:
    // 0x45b5ec: 0x8f82b150  lw          $v0, -0x4EB0($gp)
    ctx->pc = 0x45b5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947152)));
label_45b5f0:
    // 0x45b5f0: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_45b5f4:
    if (ctx->pc == 0x45B5F4u) {
        ctx->pc = 0x45B5F8u;
        goto label_45b5f8;
    }
    ctx->pc = 0x45B5F0u;
    {
        const bool branch_taken_0x45b5f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45b5f0) {
            ctx->pc = 0x45B690u;
            goto label_45b690;
        }
    }
    ctx->pc = 0x45B5F8u;
label_45b5f8:
    // 0x45b5f8: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x45b5f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_45b5fc:
    // 0x45b5fc: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x45b5fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_45b600:
    // 0x45b600: 0x27a60250  addiu       $a2, $sp, 0x250
    ctx->pc = 0x45b600u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
label_45b604:
    // 0x45b604: 0xc115ee8  jal         func_457BA0
label_45b608:
    if (ctx->pc == 0x45B608u) {
        ctx->pc = 0x45B60Cu;
        goto label_45b60c;
    }
    ctx->pc = 0x45B604u;
    SET_GPR_U32(ctx, 31, 0x45B60Cu);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x45B604u, 0x45B60Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45B60Cu;
label_45b60c:
    // 0x45b60c: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_45b610:
    if (ctx->pc == 0x45B610u) {
        ctx->pc = 0x45B614u;
        goto label_45b614;
    }
    ctx->pc = 0x45B60Cu;
    {
        const bool branch_taken_0x45b60c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45b60c) {
            ctx->pc = 0x45B690u;
            goto label_45b690;
        }
    }
    ctx->pc = 0x45B614u;
label_45b614:
    // 0x45b614: 0x8fa20258  lw          $v0, 0x258($sp)
    ctx->pc = 0x45b614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 600)));
label_45b618:
    // 0x45b618: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_45b61c:
    if (ctx->pc == 0x45B61Cu) {
        ctx->pc = 0x45B620u;
        goto label_45b620;
    }
    ctx->pc = 0x45B618u;
    {
        const bool branch_taken_0x45b618 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45b618) {
            ctx->pc = 0x45B690u;
            goto label_45b690;
        }
    }
    ctx->pc = 0x45B620u;
label_45b620:
    // 0x45b620: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x45b620u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_45b624:
    // 0x45b624: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x45b624u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_45b628:
    // 0x45b628: 0x8fa60254  lw          $a2, 0x254($sp)
    ctx->pc = 0x45b628u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 596)));
label_45b62c:
    // 0x45b62c: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x45b62cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_45b630:
    // 0x45b630: 0x24e7eb00  addiu       $a3, $a3, -0x1500
    ctx->pc = 0x45b630u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294961920));
label_45b634:
    // 0x45b634: 0x2408009a  addiu       $t0, $zero, 0x9A
    ctx->pc = 0x45b634u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 154));
label_45b638:
    // 0x45b638: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x45b638u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_45b63c:
    // 0x45b63c: 0x2529eb30  addiu       $t1, $t1, -0x14D0
    ctx->pc = 0x45b63cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294961968));
label_45b640:
    // 0x45b640: 0xc113940  jal         func_44E500
label_45b644:
    if (ctx->pc == 0x45B644u) {
        ctx->pc = 0x45B648u;
        goto label_45b648;
    }
    ctx->pc = 0x45B640u;
    SET_GPR_U32(ctx, 31, 0x45B648u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x45B640u, 0x45B648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45B648u;
label_45b648:
    // 0x45b648: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x45b648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_45b64c:
    // 0x45b64c: 0x2785b154  addiu       $a1, $gp, -0x4EAC
    ctx->pc = 0x45b64cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294947156));
label_45b650:
    // 0x45b650: 0xc115c24  jal         func_457090
label_45b654:
    if (ctx->pc == 0x45B654u) {
        ctx->pc = 0x45B658u;
        goto label_45b658;
    }
    ctx->pc = 0x45B650u;
    SET_GPR_U32(ctx, 31, 0x45B658u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x45B650u, 0x45B658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45B658u;
label_45b658:
    // 0x45b658: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x45b658u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_45b65c:
    // 0x45b65c: 0x8fa20258  lw          $v0, 0x258($sp)
    ctx->pc = 0x45b65cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 600)));
label_45b660:
    // 0x45b660: 0x40f809  jalr        $v0
label_45b664:
    if (ctx->pc == 0x45B664u) {
        ctx->pc = 0x45B668u;
        goto label_45b668;
    }
    ctx->pc = 0x45B660u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x45B668u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45B660u, 0x45B668u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x45B668u;
label_45b668:
    // 0x45b668: 0xaf82b150  sw          $v0, -0x4EB0($gp)
    ctx->pc = 0x45b668u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947152), GPR_U32(ctx, 2));
label_45b66c:
    // 0x45b66c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x45b66cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_45b670:
    // 0x45b670: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_45b674:
    if (ctx->pc == 0x45B674u) {
        ctx->pc = 0x45B678u;
        goto label_45b678;
    }
    ctx->pc = 0x45B670u;
    {
        const bool branch_taken_0x45b670 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45b670) {
            ctx->pc = 0x45B680u;
            goto label_45b680;
        }
    }
    ctx->pc = 0x45B678u;
label_45b678:
    // 0x45b678: 0xd  break       0
    ctx->pc = 0x45b678u;
    runtime->handleBreak(rdram, ctx);
label_45b67c:
    // 0x45b67c: 0x0  nop
    ctx->pc = 0x45b67cu;
    // NOP
label_45b680:
    // 0x45b680: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x45b680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_45b684:
    // 0x45b684: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x45b684u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_45b688:
    // 0x45b688: 0xc11392c  jal         func_44E4B0
label_45b68c:
    if (ctx->pc == 0x45B68Cu) {
        ctx->pc = 0x45B690u;
        goto label_45b690;
    }
    ctx->pc = 0x45B688u;
    SET_GPR_U32(ctx, 31, 0x45B690u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x45B688u, 0x45B690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45B690u;
label_45b690:
    // 0x45b690: 0x8fa20270  lw          $v0, 0x270($sp)
    ctx->pc = 0x45b690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_45b694:
    // 0x45b694: 0x28410003  slti        $at, $v0, 0x3
    ctx->pc = 0x45b694u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
label_45b698:
    // 0x45b698: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
label_45b69c:
    if (ctx->pc == 0x45B69Cu) {
        ctx->pc = 0x45B6A0u;
        goto label_45b6a0;
    }
    ctx->pc = 0x45B698u;
    {
        const bool branch_taken_0x45b698 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x45b698) {
            ctx->pc = 0x45B6B0u;
            goto label_45b6b0;
        }
    }
    ctx->pc = 0x45B6A0u;
label_45b6a0:
    // 0x45b6a0: 0x8fa20280  lw          $v0, 0x280($sp)
    ctx->pc = 0x45b6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_45b6a4:
    // 0x45b6a4: 0x28410022  slti        $at, $v0, 0x22
    ctx->pc = 0x45b6a4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)34) ? 1 : 0);
label_45b6a8:
    // 0x45b6a8: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
label_45b6ac:
    if (ctx->pc == 0x45B6ACu) {
        ctx->pc = 0x45B6B0u;
        goto label_45b6b0;
    }
    ctx->pc = 0x45B6A8u;
    {
        const bool branch_taken_0x45b6a8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x45b6a8) {
            ctx->pc = 0x45B6BCu;
            goto label_45b6bc;
        }
    }
    ctx->pc = 0x45B6B0u;
label_45b6b0:
    // 0x45b6b0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x45b6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_45b6b4:
    // 0x45b6b4: 0x1000000c  b           . + 4 + (0xC << 2)
label_45b6b8:
    if (ctx->pc == 0x45B6B8u) {
        ctx->pc = 0x45B6BCu;
        goto label_45b6bc;
    }
    ctx->pc = 0x45B6B4u;
    {
        const bool branch_taken_0x45b6b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45b6b4) {
            ctx->pc = 0x45B6E8u;
            goto label_45b6e8;
        }
    }
    ctx->pc = 0x45B6BCu;
label_45b6bc:
    // 0x45b6bc: 0x8fa30270  lw          $v1, 0x270($sp)
    ctx->pc = 0x45b6bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_45b6c0:
    // 0x45b6c0: 0x31140  sll         $v0, $v1, 5
    ctx->pc = 0x45b6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_45b6c4:
    // 0x45b6c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x45b6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_45b6c8:
    // 0x45b6c8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x45b6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_45b6cc:
    // 0x45b6cc: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x45b6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_45b6d0:
    // 0x45b6d0: 0x24424920  addiu       $v0, $v0, 0x4920
    ctx->pc = 0x45b6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18720));
label_45b6d4:
    // 0x45b6d4: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x45b6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_45b6d8:
    // 0x45b6d8: 0x8fa20280  lw          $v0, 0x280($sp)
    ctx->pc = 0x45b6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_45b6dc:
    // 0x45b6dc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x45b6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_45b6e0:
    // 0x45b6e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x45b6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_45b6e4:
    // 0x45b6e4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x45b6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_45b6e8:
    // 0x45b6e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x45b6e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_45b6ec:
    // 0x45b6ec: 0x27bd0290  addiu       $sp, $sp, 0x290
    ctx->pc = 0x45b6ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
label_45b6f0:
    // 0x45b6f0: 0x3e00008  jr          $ra
label_45b6f4:
    if (ctx->pc == 0x45B6F4u) {
        ctx->pc = 0x45B6F8u;
        goto label_45b6f8;
    }
    ctx->pc = 0x45B6F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45B6F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x45B6F8u;
label_45b6f8:
    // 0x45b6f8: 0x0  nop
    ctx->pc = 0x45b6f8u;
    // NOP
label_45b6fc:
    // 0x45b6fc: 0x0  nop
    ctx->pc = 0x45b6fcu;
    // NOP
    ctx->pc = 0x45b700u;
}
