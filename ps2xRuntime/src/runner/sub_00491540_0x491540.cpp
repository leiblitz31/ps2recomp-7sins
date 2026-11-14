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

// Function: sub_00491540
// Address: 0x491540 - 0x491680
void sub_00491540_0x491540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00491540_0x491540");
#endif

    switch (ctx->pc) {
        case 0x491540u: goto label_491540;
        case 0x491544u: goto label_491544;
        case 0x491548u: goto label_491548;
        case 0x49154cu: goto label_49154c;
        case 0x491550u: goto label_491550;
        case 0x491554u: goto label_491554;
        case 0x491558u: goto label_491558;
        case 0x49155cu: goto label_49155c;
        case 0x491560u: goto label_491560;
        case 0x491564u: goto label_491564;
        case 0x491568u: goto label_491568;
        case 0x49156cu: goto label_49156c;
        case 0x491570u: goto label_491570;
        case 0x491574u: goto label_491574;
        case 0x491578u: goto label_491578;
        case 0x49157cu: goto label_49157c;
        case 0x491580u: goto label_491580;
        case 0x491584u: goto label_491584;
        case 0x491588u: goto label_491588;
        case 0x49158cu: goto label_49158c;
        case 0x491590u: goto label_491590;
        case 0x491594u: goto label_491594;
        case 0x491598u: goto label_491598;
        case 0x49159cu: goto label_49159c;
        case 0x4915a0u: goto label_4915a0;
        case 0x4915a4u: goto label_4915a4;
        case 0x4915a8u: goto label_4915a8;
        case 0x4915acu: goto label_4915ac;
        case 0x4915b0u: goto label_4915b0;
        case 0x4915b4u: goto label_4915b4;
        case 0x4915b8u: goto label_4915b8;
        case 0x4915bcu: goto label_4915bc;
        case 0x4915c0u: goto label_4915c0;
        case 0x4915c4u: goto label_4915c4;
        case 0x4915c8u: goto label_4915c8;
        case 0x4915ccu: goto label_4915cc;
        case 0x4915d0u: goto label_4915d0;
        case 0x4915d4u: goto label_4915d4;
        case 0x4915d8u: goto label_4915d8;
        case 0x4915dcu: goto label_4915dc;
        case 0x4915e0u: goto label_4915e0;
        case 0x4915e4u: goto label_4915e4;
        case 0x4915e8u: goto label_4915e8;
        case 0x4915ecu: goto label_4915ec;
        case 0x4915f0u: goto label_4915f0;
        case 0x4915f4u: goto label_4915f4;
        case 0x4915f8u: goto label_4915f8;
        case 0x4915fcu: goto label_4915fc;
        case 0x491600u: goto label_491600;
        case 0x491604u: goto label_491604;
        case 0x491608u: goto label_491608;
        case 0x49160cu: goto label_49160c;
        case 0x491610u: goto label_491610;
        case 0x491614u: goto label_491614;
        case 0x491618u: goto label_491618;
        case 0x49161cu: goto label_49161c;
        case 0x491620u: goto label_491620;
        case 0x491624u: goto label_491624;
        case 0x491628u: goto label_491628;
        case 0x49162cu: goto label_49162c;
        case 0x491630u: goto label_491630;
        case 0x491634u: goto label_491634;
        case 0x491638u: goto label_491638;
        case 0x49163cu: goto label_49163c;
        case 0x491640u: goto label_491640;
        case 0x491644u: goto label_491644;
        case 0x491648u: goto label_491648;
        case 0x49164cu: goto label_49164c;
        case 0x491650u: goto label_491650;
        case 0x491654u: goto label_491654;
        case 0x491658u: goto label_491658;
        case 0x49165cu: goto label_49165c;
        case 0x491660u: goto label_491660;
        case 0x491664u: goto label_491664;
        case 0x491668u: goto label_491668;
        case 0x49166cu: goto label_49166c;
        case 0x491670u: goto label_491670;
        case 0x491674u: goto label_491674;
        case 0x491678u: goto label_491678;
        case 0x49167cu: goto label_49167c;
        default: break;
    }

    ctx->pc = 0x491540u;

label_491540:
    // 0x491540: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x491540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
label_491544:
    // 0x491544: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x491544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_491548:
    // 0x491548: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x491548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_49154c:
    // 0x49154c: 0xafa40150  sw          $a0, 0x150($sp)
    ctx->pc = 0x49154cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 4));
label_491550:
    // 0x491550: 0xafa50160  sw          $a1, 0x160($sp)
    ctx->pc = 0x491550u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 5));
label_491554:
    // 0x491554: 0x8f82c0f4  lw          $v0, -0x3F0C($gp)
    ctx->pc = 0x491554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951156)));
label_491558:
    // 0x491558: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
label_49155c:
    if (ctx->pc == 0x49155Cu) {
        ctx->pc = 0x491560u;
        goto label_491560;
    }
    ctx->pc = 0x491558u;
    {
        const bool branch_taken_0x491558 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x491558) {
            ctx->pc = 0x491604u;
            goto label_491604;
        }
    }
    ctx->pc = 0x491560u;
label_491560:
    // 0x491560: 0x8f82b6e4  lw          $v0, -0x491C($gp)
    ctx->pc = 0x491560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948580)));
label_491564:
    // 0x491564: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_491568:
    if (ctx->pc == 0x491568u) {
        ctx->pc = 0x49156Cu;
        goto label_49156c;
    }
    ctx->pc = 0x491564u;
    {
        const bool branch_taken_0x491564 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x491564) {
            ctx->pc = 0x491604u;
            goto label_491604;
        }
    }
    ctx->pc = 0x49156Cu;
label_49156c:
    // 0x49156c: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x49156cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_491570:
    // 0x491570: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x491570u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_491574:
    // 0x491574: 0x27a60140  addiu       $a2, $sp, 0x140
    ctx->pc = 0x491574u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_491578:
    // 0x491578: 0xc115ee8  jal         func_457BA0
label_49157c:
    if (ctx->pc == 0x49157Cu) {
        ctx->pc = 0x491580u;
        goto label_491580;
    }
    ctx->pc = 0x491578u;
    SET_GPR_U32(ctx, 31, 0x491580u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x491578u, 0x491580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x491580u;
label_491580:
    // 0x491580: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_491584:
    if (ctx->pc == 0x491584u) {
        ctx->pc = 0x491588u;
        goto label_491588;
    }
    ctx->pc = 0x491580u;
    {
        const bool branch_taken_0x491580 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x491580) {
            ctx->pc = 0x491604u;
            goto label_491604;
        }
    }
    ctx->pc = 0x491588u;
label_491588:
    // 0x491588: 0x8fa20148  lw          $v0, 0x148($sp)
    ctx->pc = 0x491588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
label_49158c:
    // 0x49158c: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_491590:
    if (ctx->pc == 0x491590u) {
        ctx->pc = 0x491594u;
        goto label_491594;
    }
    ctx->pc = 0x49158Cu;
    {
        const bool branch_taken_0x49158c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x49158c) {
            ctx->pc = 0x491604u;
            goto label_491604;
        }
    }
    ctx->pc = 0x491594u;
label_491594:
    // 0x491594: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x491594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_491598:
    // 0x491598: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x491598u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_49159c:
    // 0x49159c: 0x8fa60144  lw          $a2, 0x144($sp)
    ctx->pc = 0x49159cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
label_4915a0:
    // 0x4915a0: 0x3c07005f  lui         $a3, 0x5F
    ctx->pc = 0x4915a0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)95 << 16));
label_4915a4:
    // 0x4915a4: 0x24e75050  addiu       $a3, $a3, 0x5050
    ctx->pc = 0x4915a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 20560));
label_4915a8:
    // 0x4915a8: 0x240800bb  addiu       $t0, $zero, 0xBB
    ctx->pc = 0x4915a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 187));
label_4915ac:
    // 0x4915ac: 0x3c09005f  lui         $t1, 0x5F
    ctx->pc = 0x4915acu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)95 << 16));
label_4915b0:
    // 0x4915b0: 0x25295070  addiu       $t1, $t1, 0x5070
    ctx->pc = 0x4915b0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 20592));
label_4915b4:
    // 0x4915b4: 0xc113940  jal         func_44E500
label_4915b8:
    if (ctx->pc == 0x4915B8u) {
        ctx->pc = 0x4915BCu;
        goto label_4915bc;
    }
    ctx->pc = 0x4915B4u;
    SET_GPR_U32(ctx, 31, 0x4915BCu);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x4915B4u, 0x4915BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4915BCu;
label_4915bc:
    // 0x4915bc: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x4915bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_4915c0:
    // 0x4915c0: 0x2785b6e0  addiu       $a1, $gp, -0x4920
    ctx->pc = 0x4915c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948576));
label_4915c4:
    // 0x4915c4: 0xc115c24  jal         func_457090
label_4915c8:
    if (ctx->pc == 0x4915C8u) {
        ctx->pc = 0x4915CCu;
        goto label_4915cc;
    }
    ctx->pc = 0x4915C4u;
    SET_GPR_U32(ctx, 31, 0x4915CCu);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x4915C4u, 0x4915CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4915CCu;
label_4915cc:
    // 0x4915cc: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x4915ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_4915d0:
    // 0x4915d0: 0x8fa20148  lw          $v0, 0x148($sp)
    ctx->pc = 0x4915d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
label_4915d4:
    // 0x4915d4: 0x40f809  jalr        $v0
label_4915d8:
    if (ctx->pc == 0x4915D8u) {
        ctx->pc = 0x4915DCu;
        goto label_4915dc;
    }
    ctx->pc = 0x4915D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4915DCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4915D4u, 0x4915DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4915DCu;
label_4915dc:
    // 0x4915dc: 0xaf82b6e4  sw          $v0, -0x491C($gp)
    ctx->pc = 0x4915dcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948580), GPR_U32(ctx, 2));
label_4915e0:
    // 0x4915e0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x4915e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_4915e4:
    // 0x4915e4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_4915e8:
    if (ctx->pc == 0x4915E8u) {
        ctx->pc = 0x4915ECu;
        goto label_4915ec;
    }
    ctx->pc = 0x4915E4u;
    {
        const bool branch_taken_0x4915e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4915e4) {
            ctx->pc = 0x4915F4u;
            goto label_4915f4;
        }
    }
    ctx->pc = 0x4915ECu;
label_4915ec:
    // 0x4915ec: 0xd  break       0
    ctx->pc = 0x4915ecu;
    runtime->handleBreak(rdram, ctx);
label_4915f0:
    // 0x4915f0: 0x0  nop
    ctx->pc = 0x4915f0u;
    // NOP
label_4915f4:
    // 0x4915f4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x4915f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_4915f8:
    // 0x4915f8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x4915f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4915fc:
    // 0x4915fc: 0xc11392c  jal         func_44E4B0
label_491600:
    if (ctx->pc == 0x491600u) {
        ctx->pc = 0x491604u;
        goto label_491604;
    }
    ctx->pc = 0x4915FCu;
    SET_GPR_U32(ctx, 31, 0x491604u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x4915FCu, 0x491604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x491604u;
label_491604:
    // 0x491604: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x491604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_491608:
    // 0x491608: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_49160c:
    if (ctx->pc == 0x49160Cu) {
        ctx->pc = 0x491610u;
        goto label_491610;
    }
    ctx->pc = 0x491608u;
    {
        const bool branch_taken_0x491608 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x491608) {
            ctx->pc = 0x49161Cu;
            goto label_49161c;
        }
    }
    ctx->pc = 0x491610u;
label_491610:
    // 0x491610: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x491610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_491614:
    // 0x491614: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_491618:
    if (ctx->pc == 0x491618u) {
        ctx->pc = 0x49161Cu;
        goto label_49161c;
    }
    ctx->pc = 0x491614u;
    {
        const bool branch_taken_0x491614 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x491614) {
            ctx->pc = 0x491628u;
            goto label_491628;
        }
    }
    ctx->pc = 0x49161Cu;
label_49161c:
    // 0x49161c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x49161cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_491620:
    // 0x491620: 0x10000010  b           . + 4 + (0x10 << 2)
label_491624:
    if (ctx->pc == 0x491624u) {
        ctx->pc = 0x491628u;
        goto label_491628;
    }
    ctx->pc = 0x491620u;
    {
        const bool branch_taken_0x491620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x491620) {
            ctx->pc = 0x491664u;
            goto label_491664;
        }
    }
    ctx->pc = 0x491628u;
label_491628:
    // 0x491628: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x491628u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_49162c:
    // 0x49162c: 0x10000008  b           . + 4 + (0x8 << 2)
label_491630:
    if (ctx->pc == 0x491630u) {
        ctx->pc = 0x491634u;
        goto label_491634;
    }
    ctx->pc = 0x49162Cu;
    {
        const bool branch_taken_0x49162c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x49162c) {
            ctx->pc = 0x491650u;
            goto label_491650;
        }
    }
    ctx->pc = 0x491634u;
label_491634:
    // 0x491634: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x491634u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_491638:
    // 0x491638: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x491638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_49163c:
    // 0x49163c: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x49163cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_491640:
    // 0x491640: 0x8f84c0fc  lw          $a0, -0x3F04($gp)
    ctx->pc = 0x491640u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951164)));
label_491644:
    // 0x491644: 0xc1245a0  jal         func_491680
label_491648:
    if (ctx->pc == 0x491648u) {
        ctx->pc = 0x49164Cu;
        goto label_49164c;
    }
    ctx->pc = 0x491644u;
    SET_GPR_U32(ctx, 31, 0x49164Cu);
    ctx->pc = 0x491680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x491680u, 0x491644u, 0x49164Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49164Cu;
label_49164c:
    // 0x49164c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x49164cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_491650:
    // 0x491650: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x491650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_491654:
    // 0x491654: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x491654u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_491658:
    // 0x491658: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_49165c:
    if (ctx->pc == 0x49165Cu) {
        ctx->pc = 0x491660u;
        goto label_491660;
    }
    ctx->pc = 0x491658u;
    {
        const bool branch_taken_0x491658 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x491658) {
            ctx->pc = 0x491634u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_491634;
        }
    }
    ctx->pc = 0x491660u;
label_491660:
    // 0x491660: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x491660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_491664:
    // 0x491664: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x491664u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_491668:
    // 0x491668: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x491668u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_49166c:
    // 0x49166c: 0x27bd0170  addiu       $sp, $sp, 0x170
    ctx->pc = 0x49166cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_491670:
    // 0x491670: 0x3e00008  jr          $ra
label_491674:
    if (ctx->pc == 0x491674u) {
        ctx->pc = 0x491678u;
        goto label_491678;
    }
    ctx->pc = 0x491670u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x491670u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x491678u;
label_491678:
    // 0x491678: 0x0  nop
    ctx->pc = 0x491678u;
    // NOP
label_49167c:
    // 0x49167c: 0x0  nop
    ctx->pc = 0x49167cu;
    // NOP
    ctx->pc = 0x491680u;
}
