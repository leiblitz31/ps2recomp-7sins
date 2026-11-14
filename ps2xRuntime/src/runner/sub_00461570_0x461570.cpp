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

// Function: sub_00461570
// Address: 0x461570 - 0x4617f0
void sub_00461570_0x461570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00461570_0x461570");
#endif

    switch (ctx->pc) {
        case 0x461570u: goto label_461570;
        case 0x461574u: goto label_461574;
        case 0x461578u: goto label_461578;
        case 0x46157cu: goto label_46157c;
        case 0x461580u: goto label_461580;
        case 0x461584u: goto label_461584;
        case 0x461588u: goto label_461588;
        case 0x46158cu: goto label_46158c;
        case 0x461590u: goto label_461590;
        case 0x461594u: goto label_461594;
        case 0x461598u: goto label_461598;
        case 0x46159cu: goto label_46159c;
        case 0x4615a0u: goto label_4615a0;
        case 0x4615a4u: goto label_4615a4;
        case 0x4615a8u: goto label_4615a8;
        case 0x4615acu: goto label_4615ac;
        case 0x4615b0u: goto label_4615b0;
        case 0x4615b4u: goto label_4615b4;
        case 0x4615b8u: goto label_4615b8;
        case 0x4615bcu: goto label_4615bc;
        case 0x4615c0u: goto label_4615c0;
        case 0x4615c4u: goto label_4615c4;
        case 0x4615c8u: goto label_4615c8;
        case 0x4615ccu: goto label_4615cc;
        case 0x4615d0u: goto label_4615d0;
        case 0x4615d4u: goto label_4615d4;
        case 0x4615d8u: goto label_4615d8;
        case 0x4615dcu: goto label_4615dc;
        case 0x4615e0u: goto label_4615e0;
        case 0x4615e4u: goto label_4615e4;
        case 0x4615e8u: goto label_4615e8;
        case 0x4615ecu: goto label_4615ec;
        case 0x4615f0u: goto label_4615f0;
        case 0x4615f4u: goto label_4615f4;
        case 0x4615f8u: goto label_4615f8;
        case 0x4615fcu: goto label_4615fc;
        case 0x461600u: goto label_461600;
        case 0x461604u: goto label_461604;
        case 0x461608u: goto label_461608;
        case 0x46160cu: goto label_46160c;
        case 0x461610u: goto label_461610;
        case 0x461614u: goto label_461614;
        case 0x461618u: goto label_461618;
        case 0x46161cu: goto label_46161c;
        case 0x461620u: goto label_461620;
        case 0x461624u: goto label_461624;
        case 0x461628u: goto label_461628;
        case 0x46162cu: goto label_46162c;
        case 0x461630u: goto label_461630;
        case 0x461634u: goto label_461634;
        case 0x461638u: goto label_461638;
        case 0x46163cu: goto label_46163c;
        case 0x461640u: goto label_461640;
        case 0x461644u: goto label_461644;
        case 0x461648u: goto label_461648;
        case 0x46164cu: goto label_46164c;
        case 0x461650u: goto label_461650;
        case 0x461654u: goto label_461654;
        case 0x461658u: goto label_461658;
        case 0x46165cu: goto label_46165c;
        case 0x461660u: goto label_461660;
        case 0x461664u: goto label_461664;
        case 0x461668u: goto label_461668;
        case 0x46166cu: goto label_46166c;
        case 0x461670u: goto label_461670;
        case 0x461674u: goto label_461674;
        case 0x461678u: goto label_461678;
        case 0x46167cu: goto label_46167c;
        case 0x461680u: goto label_461680;
        case 0x461684u: goto label_461684;
        case 0x461688u: goto label_461688;
        case 0x46168cu: goto label_46168c;
        case 0x461690u: goto label_461690;
        case 0x461694u: goto label_461694;
        case 0x461698u: goto label_461698;
        case 0x46169cu: goto label_46169c;
        case 0x4616a0u: goto label_4616a0;
        case 0x4616a4u: goto label_4616a4;
        case 0x4616a8u: goto label_4616a8;
        case 0x4616acu: goto label_4616ac;
        case 0x4616b0u: goto label_4616b0;
        case 0x4616b4u: goto label_4616b4;
        case 0x4616b8u: goto label_4616b8;
        case 0x4616bcu: goto label_4616bc;
        case 0x4616c0u: goto label_4616c0;
        case 0x4616c4u: goto label_4616c4;
        case 0x4616c8u: goto label_4616c8;
        case 0x4616ccu: goto label_4616cc;
        case 0x4616d0u: goto label_4616d0;
        case 0x4616d4u: goto label_4616d4;
        case 0x4616d8u: goto label_4616d8;
        case 0x4616dcu: goto label_4616dc;
        case 0x4616e0u: goto label_4616e0;
        case 0x4616e4u: goto label_4616e4;
        case 0x4616e8u: goto label_4616e8;
        case 0x4616ecu: goto label_4616ec;
        case 0x4616f0u: goto label_4616f0;
        case 0x4616f4u: goto label_4616f4;
        case 0x4616f8u: goto label_4616f8;
        case 0x4616fcu: goto label_4616fc;
        case 0x461700u: goto label_461700;
        case 0x461704u: goto label_461704;
        case 0x461708u: goto label_461708;
        case 0x46170cu: goto label_46170c;
        case 0x461710u: goto label_461710;
        case 0x461714u: goto label_461714;
        case 0x461718u: goto label_461718;
        case 0x46171cu: goto label_46171c;
        case 0x461720u: goto label_461720;
        case 0x461724u: goto label_461724;
        case 0x461728u: goto label_461728;
        case 0x46172cu: goto label_46172c;
        case 0x461730u: goto label_461730;
        case 0x461734u: goto label_461734;
        case 0x461738u: goto label_461738;
        case 0x46173cu: goto label_46173c;
        case 0x461740u: goto label_461740;
        case 0x461744u: goto label_461744;
        case 0x461748u: goto label_461748;
        case 0x46174cu: goto label_46174c;
        case 0x461750u: goto label_461750;
        case 0x461754u: goto label_461754;
        case 0x461758u: goto label_461758;
        case 0x46175cu: goto label_46175c;
        case 0x461760u: goto label_461760;
        case 0x461764u: goto label_461764;
        case 0x461768u: goto label_461768;
        case 0x46176cu: goto label_46176c;
        case 0x461770u: goto label_461770;
        case 0x461774u: goto label_461774;
        case 0x461778u: goto label_461778;
        case 0x46177cu: goto label_46177c;
        case 0x461780u: goto label_461780;
        case 0x461784u: goto label_461784;
        case 0x461788u: goto label_461788;
        case 0x46178cu: goto label_46178c;
        case 0x461790u: goto label_461790;
        case 0x461794u: goto label_461794;
        case 0x461798u: goto label_461798;
        case 0x46179cu: goto label_46179c;
        case 0x4617a0u: goto label_4617a0;
        case 0x4617a4u: goto label_4617a4;
        case 0x4617a8u: goto label_4617a8;
        case 0x4617acu: goto label_4617ac;
        case 0x4617b0u: goto label_4617b0;
        case 0x4617b4u: goto label_4617b4;
        case 0x4617b8u: goto label_4617b8;
        case 0x4617bcu: goto label_4617bc;
        case 0x4617c0u: goto label_4617c0;
        case 0x4617c4u: goto label_4617c4;
        case 0x4617c8u: goto label_4617c8;
        case 0x4617ccu: goto label_4617cc;
        case 0x4617d0u: goto label_4617d0;
        case 0x4617d4u: goto label_4617d4;
        case 0x4617d8u: goto label_4617d8;
        case 0x4617dcu: goto label_4617dc;
        case 0x4617e0u: goto label_4617e0;
        case 0x4617e4u: goto label_4617e4;
        case 0x4617e8u: goto label_4617e8;
        case 0x4617ecu: goto label_4617ec;
        default: break;
    }

    ctx->pc = 0x461570u;

label_461570:
    // 0x461570: 0x27bdfd20  addiu       $sp, $sp, -0x2E0
    ctx->pc = 0x461570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966560));
label_461574:
    // 0x461574: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x461574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_461578:
    // 0x461578: 0xafa402b0  sw          $a0, 0x2B0($sp)
    ctx->pc = 0x461578u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 688), GPR_U32(ctx, 4));
label_46157c:
    // 0x46157c: 0xafa502c0  sw          $a1, 0x2C0($sp)
    ctx->pc = 0x46157cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 704), GPR_U32(ctx, 5));
label_461580:
    // 0x461580: 0xafa602d0  sw          $a2, 0x2D0($sp)
    ctx->pc = 0x461580u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 720), GPR_U32(ctx, 6));
label_461584:
    // 0x461584: 0x8f84bfb0  lw          $a0, -0x4050($gp)
    ctx->pc = 0x461584u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950832)));
label_461588:
    // 0x461588: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x461588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_46158c:
    // 0x46158c: 0x10830025  beq         $a0, $v1, . + 4 + (0x25 << 2)
label_461590:
    if (ctx->pc == 0x461590u) {
        ctx->pc = 0x461594u;
        goto label_461594;
    }
    ctx->pc = 0x46158Cu;
    {
        const bool branch_taken_0x46158c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x46158c) {
            ctx->pc = 0x461624u;
            goto label_461624;
        }
    }
    ctx->pc = 0x461594u;
label_461594:
    // 0x461594: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_461598:
    if (ctx->pc == 0x461598u) {
        ctx->pc = 0x46159Cu;
        goto label_46159c;
    }
    ctx->pc = 0x461594u;
    {
        const bool branch_taken_0x461594 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x461594) {
            ctx->pc = 0x4615A4u;
            goto label_4615a4;
        }
    }
    ctx->pc = 0x46159Cu;
label_46159c:
    // 0x46159c: 0x10000066  b           . + 4 + (0x66 << 2)
label_4615a0:
    if (ctx->pc == 0x4615A0u) {
        ctx->pc = 0x4615A4u;
        goto label_4615a4;
    }
    ctx->pc = 0x46159Cu;
    {
        const bool branch_taken_0x46159c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x46159c) {
            ctx->pc = 0x461738u;
            goto label_461738;
        }
    }
    ctx->pc = 0x4615A4u;
label_4615a4:
    // 0x4615a4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x4615a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_4615a8:
    // 0x4615a8: 0x8c424ddc  lw          $v0, 0x4DDC($v0)
    ctx->pc = 0x4615a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 19932)));
label_4615ac:
    // 0x4615ac: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x4615acu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_4615b0:
    // 0x4615b0: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
label_4615b4:
    if (ctx->pc == 0x4615B4u) {
        ctx->pc = 0x4615B8u;
        goto label_4615b8;
    }
    ctx->pc = 0x4615B0u;
    {
        const bool branch_taken_0x4615b0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4615b0) {
            ctx->pc = 0x4615D0u;
            goto label_4615d0;
        }
    }
    ctx->pc = 0x4615B8u;
label_4615b8:
    // 0x4615b8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4615b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4615bc:
    // 0x4615bc: 0x2405fffd  addiu       $a1, $zero, -0x3
    ctx->pc = 0x4615bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_4615c0:
    // 0x4615c0: 0xc1181ac  jal         func_4606B0
label_4615c4:
    if (ctx->pc == 0x4615C4u) {
        ctx->pc = 0x4615C8u;
        goto label_4615c8;
    }
    ctx->pc = 0x4615C0u;
    SET_GPR_U32(ctx, 31, 0x4615C8u);
    ctx->pc = 0x4606B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4606B0u, 0x4615C0u, 0x4615C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4615C8u;
label_4615c8:
    // 0x4615c8: 0x10000084  b           . + 4 + (0x84 << 2)
label_4615cc:
    if (ctx->pc == 0x4615CCu) {
        ctx->pc = 0x4615D0u;
        goto label_4615d0;
    }
    ctx->pc = 0x4615C8u;
    {
        const bool branch_taken_0x4615c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4615c8) {
            ctx->pc = 0x4617DCu;
            goto label_4617dc;
        }
    }
    ctx->pc = 0x4615D0u;
label_4615d0:
    // 0x4615d0: 0x27a40250  addiu       $a0, $sp, 0x250
    ctx->pc = 0x4615d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
label_4615d4:
    // 0x4615d4: 0x2785b1d0  addiu       $a1, $gp, -0x4E30
    ctx->pc = 0x4615d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294947280));
label_4615d8:
    // 0x4615d8: 0x2786bfb8  addiu       $a2, $gp, -0x4048
    ctx->pc = 0x4615d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294950840));
label_4615dc:
    // 0x4615dc: 0x3c070062  lui         $a3, 0x62
    ctx->pc = 0x4615dcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)98 << 16));
label_4615e0:
    // 0x4615e0: 0x24e74de8  addiu       $a3, $a3, 0x4DE8
    ctx->pc = 0x4615e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 19944));
label_4615e4:
    // 0x4615e4: 0x3c080062  lui         $t0, 0x62
    ctx->pc = 0x4615e4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)98 << 16));
label_4615e8:
    // 0x4615e8: 0x25084e3c  addiu       $t0, $t0, 0x4E3C
    ctx->pc = 0x4615e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 20028));
label_4615ec:
    // 0x4615ec: 0xc0bc3e2  jal         func_2F0F88
label_4615f0:
    if (ctx->pc == 0x4615F0u) {
        ctx->pc = 0x4615F4u;
        goto label_4615f4;
    }
    ctx->pc = 0x4615ECu;
    SET_GPR_U32(ctx, 31, 0x4615F4u);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x4615ECu, 0x4615F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4615F4u;
label_4615f4:
    // 0x4615f4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x4615f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_4615f8:
    // 0x4615f8: 0x8c444e00  lw          $a0, 0x4E00($v0)
    ctx->pc = 0x4615f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 19968)));
label_4615fc:
    // 0x4615fc: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x4615fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_461600:
    // 0x461600: 0x8c454e04  lw          $a1, 0x4E04($v0)
    ctx->pc = 0x461600u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 19972)));
label_461604:
    // 0x461604: 0x27a60250  addiu       $a2, $sp, 0x250
    ctx->pc = 0x461604u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
label_461608:
    // 0x461608: 0xc0c3b48  jal         func_30ED20
label_46160c:
    if (ctx->pc == 0x46160Cu) {
        ctx->pc = 0x461610u;
        goto label_461610;
    }
    ctx->pc = 0x461608u;
    SET_GPR_U32(ctx, 31, 0x461610u);
    ctx->pc = 0x30ED20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30ED20u, 0x461608u, 0x461610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x461610u;
label_461610:
    // 0x461610: 0x8f83bfb0  lw          $v1, -0x4050($gp)
    ctx->pc = 0x461610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950832)));
label_461614:
    // 0x461614: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x461614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_461618:
    // 0x461618: 0xaf83bfb0  sw          $v1, -0x4050($gp)
    ctx->pc = 0x461618u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950832), GPR_U32(ctx, 3));
label_46161c:
    // 0x46161c: 0x1000006f  b           . + 4 + (0x6F << 2)
label_461620:
    if (ctx->pc == 0x461620u) {
        ctx->pc = 0x461624u;
        goto label_461624;
    }
    ctx->pc = 0x46161Cu;
    {
        const bool branch_taken_0x46161c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x46161c) {
            ctx->pc = 0x4617DCu;
            goto label_4617dc;
        }
    }
    ctx->pc = 0x461624u;
label_461624:
    // 0x461624: 0x8fa402d0  lw          $a0, 0x2D0($sp)
    ctx->pc = 0x461624u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 720)));
label_461628:
    // 0x461628: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x461628u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_46162c:
    // 0x46162c: 0x1483006b  bne         $a0, $v1, . + 4 + (0x6B << 2)
label_461630:
    if (ctx->pc == 0x461630u) {
        ctx->pc = 0x461634u;
        goto label_461634;
    }
    ctx->pc = 0x46162Cu;
    {
        const bool branch_taken_0x46162c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x46162c) {
            ctx->pc = 0x4617DCu;
            goto label_4617dc;
        }
    }
    ctx->pc = 0x461634u;
label_461634:
    // 0x461634: 0x8fa202b0  lw          $v0, 0x2B0($sp)
    ctx->pc = 0x461634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
label_461638:
    // 0x461638: 0x3842000b  xori        $v0, $v0, 0xB
    ctx->pc = 0x461638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)11);
label_46163c:
    // 0x46163c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x46163cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_461640:
    // 0x461640: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x461640u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_461644:
    // 0x461644: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_461648:
    if (ctx->pc == 0x461648u) {
        ctx->pc = 0x46164Cu;
        goto label_46164c;
    }
    ctx->pc = 0x461644u;
    {
        const bool branch_taken_0x461644 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x461644) {
            ctx->pc = 0x4616F4u;
            goto label_4616f4;
        }
    }
    ctx->pc = 0x46164Cu;
label_46164c:
    // 0x46164c: 0x8f82b21c  lw          $v0, -0x4DE4($gp)
    ctx->pc = 0x46164cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947356)));
label_461650:
    // 0x461650: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_461654:
    if (ctx->pc == 0x461654u) {
        ctx->pc = 0x461658u;
        goto label_461658;
    }
    ctx->pc = 0x461650u;
    {
        const bool branch_taken_0x461650 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x461650) {
            ctx->pc = 0x4616F4u;
            goto label_4616f4;
        }
    }
    ctx->pc = 0x461658u;
label_461658:
    // 0x461658: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x461658u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_46165c:
    // 0x46165c: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x46165cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_461660:
    // 0x461660: 0x27a602a0  addiu       $a2, $sp, 0x2A0
    ctx->pc = 0x461660u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
label_461664:
    // 0x461664: 0xc115ee8  jal         func_457BA0
label_461668:
    if (ctx->pc == 0x461668u) {
        ctx->pc = 0x46166Cu;
        goto label_46166c;
    }
    ctx->pc = 0x461664u;
    SET_GPR_U32(ctx, 31, 0x46166Cu);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x461664u, 0x46166Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46166Cu;
label_46166c:
    // 0x46166c: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_461670:
    if (ctx->pc == 0x461670u) {
        ctx->pc = 0x461674u;
        goto label_461674;
    }
    ctx->pc = 0x46166Cu;
    {
        const bool branch_taken_0x46166c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x46166c) {
            ctx->pc = 0x4616F4u;
            goto label_4616f4;
        }
    }
    ctx->pc = 0x461674u;
label_461674:
    // 0x461674: 0x8fa202a8  lw          $v0, 0x2A8($sp)
    ctx->pc = 0x461674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 680)));
label_461678:
    // 0x461678: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_46167c:
    if (ctx->pc == 0x46167Cu) {
        ctx->pc = 0x461680u;
        goto label_461680;
    }
    ctx->pc = 0x461678u;
    {
        const bool branch_taken_0x461678 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x461678) {
            ctx->pc = 0x4616F4u;
            goto label_4616f4;
        }
    }
    ctx->pc = 0x461680u;
label_461680:
    // 0x461680: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x461680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_461684:
    // 0x461684: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x461684u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_461688:
    // 0x461688: 0x8fa602a4  lw          $a2, 0x2A4($sp)
    ctx->pc = 0x461688u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 676)));
label_46168c:
    // 0x46168c: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x46168cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_461690:
    // 0x461690: 0x24e7ed20  addiu       $a3, $a3, -0x12E0
    ctx->pc = 0x461690u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294962464));
label_461694:
    // 0x461694: 0x2408065c  addiu       $t0, $zero, 0x65C
    ctx->pc = 0x461694u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1628));
label_461698:
    // 0x461698: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x461698u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_46169c:
    // 0x46169c: 0x2529f1b0  addiu       $t1, $t1, -0xE50
    ctx->pc = 0x46169cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294963632));
label_4616a0:
    // 0x4616a0: 0xc113940  jal         func_44E500
label_4616a4:
    if (ctx->pc == 0x4616A4u) {
        ctx->pc = 0x4616A8u;
        goto label_4616a8;
    }
    ctx->pc = 0x4616A0u;
    SET_GPR_U32(ctx, 31, 0x4616A8u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x4616A0u, 0x4616A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4616A8u;
label_4616a8:
    // 0x4616a8: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x4616a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_4616ac:
    // 0x4616ac: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x4616acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_4616b0:
    // 0x4616b0: 0x24a5efb0  addiu       $a1, $a1, -0x1050
    ctx->pc = 0x4616b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963120));
label_4616b4:
    // 0x4616b4: 0xc115c24  jal         func_457090
label_4616b8:
    if (ctx->pc == 0x4616B8u) {
        ctx->pc = 0x4616BCu;
        goto label_4616bc;
    }
    ctx->pc = 0x4616B4u;
    SET_GPR_U32(ctx, 31, 0x4616BCu);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x4616B4u, 0x4616BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4616BCu;
label_4616bc:
    // 0x4616bc: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x4616bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_4616c0:
    // 0x4616c0: 0x8fa202a8  lw          $v0, 0x2A8($sp)
    ctx->pc = 0x4616c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 680)));
label_4616c4:
    // 0x4616c4: 0x40f809  jalr        $v0
label_4616c8:
    if (ctx->pc == 0x4616C8u) {
        ctx->pc = 0x4616CCu;
        goto label_4616cc;
    }
    ctx->pc = 0x4616C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4616CCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4616C4u, 0x4616CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4616CCu;
label_4616cc:
    // 0x4616cc: 0xaf82b21c  sw          $v0, -0x4DE4($gp)
    ctx->pc = 0x4616ccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947356), GPR_U32(ctx, 2));
label_4616d0:
    // 0x4616d0: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x4616d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_4616d4:
    // 0x4616d4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_4616d8:
    if (ctx->pc == 0x4616D8u) {
        ctx->pc = 0x4616DCu;
        goto label_4616dc;
    }
    ctx->pc = 0x4616D4u;
    {
        const bool branch_taken_0x4616d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4616d4) {
            ctx->pc = 0x4616E4u;
            goto label_4616e4;
        }
    }
    ctx->pc = 0x4616DCu;
label_4616dc:
    // 0x4616dc: 0xd  break       0
    ctx->pc = 0x4616dcu;
    runtime->handleBreak(rdram, ctx);
label_4616e0:
    // 0x4616e0: 0x0  nop
    ctx->pc = 0x4616e0u;
    // NOP
label_4616e4:
    // 0x4616e4: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x4616e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_4616e8:
    // 0x4616e8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x4616e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4616ec:
    // 0x4616ec: 0xc11392c  jal         func_44E4B0
label_4616f0:
    if (ctx->pc == 0x4616F0u) {
        ctx->pc = 0x4616F4u;
        goto label_4616f4;
    }
    ctx->pc = 0x4616ECu;
    SET_GPR_U32(ctx, 31, 0x4616F4u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x4616ECu, 0x4616F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4616F4u;
label_4616f4:
    // 0x4616f4: 0x8fa202c0  lw          $v0, 0x2C0($sp)
    ctx->pc = 0x4616f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
label_4616f8:
    // 0x4616f8: 0x4410009  bgez        $v0, . + 4 + (0x9 << 2)
label_4616fc:
    if (ctx->pc == 0x4616FCu) {
        ctx->pc = 0x461700u;
        goto label_461700;
    }
    ctx->pc = 0x4616F8u;
    {
        const bool branch_taken_0x4616f8 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x4616f8) {
            ctx->pc = 0x461720u;
            goto label_461720;
        }
    }
    ctx->pc = 0x461700u;
label_461700:
    // 0x461700: 0x8fa202c0  lw          $v0, 0x2C0($sp)
    ctx->pc = 0x461700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
label_461704:
    // 0x461704: 0xaf82bfb4  sw          $v0, -0x404C($gp)
    ctx->pc = 0x461704u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950836), GPR_U32(ctx, 2));
label_461708:
    // 0x461708: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x461708u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_46170c:
    // 0x46170c: 0x8f85bfb4  lw          $a1, -0x404C($gp)
    ctx->pc = 0x46170cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950836)));
label_461710:
    // 0x461710: 0xc1181ac  jal         func_4606B0
label_461714:
    if (ctx->pc == 0x461714u) {
        ctx->pc = 0x461718u;
        goto label_461718;
    }
    ctx->pc = 0x461710u;
    SET_GPR_U32(ctx, 31, 0x461718u);
    ctx->pc = 0x4606B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4606B0u, 0x461710u, 0x461718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x461718u;
label_461718:
    // 0x461718: 0x10000030  b           . + 4 + (0x30 << 2)
label_46171c:
    if (ctx->pc == 0x46171Cu) {
        ctx->pc = 0x461720u;
        goto label_461720;
    }
    ctx->pc = 0x461718u;
    {
        const bool branch_taken_0x461718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x461718) {
            ctx->pc = 0x4617DCu;
            goto label_4617dc;
        }
    }
    ctx->pc = 0x461720u;
label_461720:
    // 0x461720: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x461720u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_461724:
    // 0x461724: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x461724u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_461728:
    // 0x461728: 0xc1181ac  jal         func_4606B0
label_46172c:
    if (ctx->pc == 0x46172Cu) {
        ctx->pc = 0x461730u;
        goto label_461730;
    }
    ctx->pc = 0x461728u;
    SET_GPR_U32(ctx, 31, 0x461730u);
    ctx->pc = 0x4606B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4606B0u, 0x461728u, 0x461730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x461730u;
label_461730:
    // 0x461730: 0x1000002a  b           . + 4 + (0x2A << 2)
label_461734:
    if (ctx->pc == 0x461734u) {
        ctx->pc = 0x461738u;
        goto label_461738;
    }
    ctx->pc = 0x461730u;
    {
        const bool branch_taken_0x461730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x461730) {
            ctx->pc = 0x4617DCu;
            goto label_4617dc;
        }
    }
    ctx->pc = 0x461738u;
label_461738:
    // 0x461738: 0x8f83b220  lw          $v1, -0x4DE0($gp)
    ctx->pc = 0x461738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947360)));
label_46173c:
    // 0x46173c: 0x10600027  beqz        $v1, . + 4 + (0x27 << 2)
label_461740:
    if (ctx->pc == 0x461740u) {
        ctx->pc = 0x461744u;
        goto label_461744;
    }
    ctx->pc = 0x46173Cu;
    {
        const bool branch_taken_0x46173c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x46173c) {
            ctx->pc = 0x4617DCu;
            goto label_4617dc;
        }
    }
    ctx->pc = 0x461744u;
label_461744:
    // 0x461744: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x461744u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_461748:
    // 0x461748: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x461748u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_46174c:
    // 0x46174c: 0x27a60290  addiu       $a2, $sp, 0x290
    ctx->pc = 0x46174cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
label_461750:
    // 0x461750: 0xc115ee8  jal         func_457BA0
label_461754:
    if (ctx->pc == 0x461754u) {
        ctx->pc = 0x461758u;
        goto label_461758;
    }
    ctx->pc = 0x461750u;
    SET_GPR_U32(ctx, 31, 0x461758u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x461750u, 0x461758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x461758u;
label_461758:
    // 0x461758: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_46175c:
    if (ctx->pc == 0x46175Cu) {
        ctx->pc = 0x461760u;
        goto label_461760;
    }
    ctx->pc = 0x461758u;
    {
        const bool branch_taken_0x461758 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x461758) {
            ctx->pc = 0x4617DCu;
            goto label_4617dc;
        }
    }
    ctx->pc = 0x461760u;
label_461760:
    // 0x461760: 0x8fa30298  lw          $v1, 0x298($sp)
    ctx->pc = 0x461760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
label_461764:
    // 0x461764: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
label_461768:
    if (ctx->pc == 0x461768u) {
        ctx->pc = 0x46176Cu;
        goto label_46176c;
    }
    ctx->pc = 0x461764u;
    {
        const bool branch_taken_0x461764 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x461764) {
            ctx->pc = 0x4617DCu;
            goto label_4617dc;
        }
    }
    ctx->pc = 0x46176Cu;
label_46176c:
    // 0x46176c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x46176cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_461770:
    // 0x461770: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x461770u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_461774:
    // 0x461774: 0x8fa60294  lw          $a2, 0x294($sp)
    ctx->pc = 0x461774u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 660)));
label_461778:
    // 0x461778: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x461778u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_46177c:
    // 0x46177c: 0x24e7ed20  addiu       $a3, $a3, -0x12E0
    ctx->pc = 0x46177cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294962464));
label_461780:
    // 0x461780: 0x2408066a  addiu       $t0, $zero, 0x66A
    ctx->pc = 0x461780u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1642));
label_461784:
    // 0x461784: 0x2789b1cc  addiu       $t1, $gp, -0x4E34
    ctx->pc = 0x461784u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 28), 4294947276));
label_461788:
    // 0x461788: 0xc113940  jal         func_44E500
label_46178c:
    if (ctx->pc == 0x46178Cu) {
        ctx->pc = 0x461790u;
        goto label_461790;
    }
    ctx->pc = 0x461788u;
    SET_GPR_U32(ctx, 31, 0x461790u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x461788u, 0x461790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x461790u;
label_461790:
    // 0x461790: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x461790u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_461794:
    // 0x461794: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x461794u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_461798:
    // 0x461798: 0x24a5efd0  addiu       $a1, $a1, -0x1030
    ctx->pc = 0x461798u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963152));
label_46179c:
    // 0x46179c: 0xc115c24  jal         func_457090
label_4617a0:
    if (ctx->pc == 0x4617A0u) {
        ctx->pc = 0x4617A4u;
        goto label_4617a4;
    }
    ctx->pc = 0x46179Cu;
    SET_GPR_U32(ctx, 31, 0x4617A4u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x46179Cu, 0x4617A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4617A4u;
label_4617a4:
    // 0x4617a4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x4617a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_4617a8:
    // 0x4617a8: 0x8fa20298  lw          $v0, 0x298($sp)
    ctx->pc = 0x4617a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
label_4617ac:
    // 0x4617ac: 0x40f809  jalr        $v0
label_4617b0:
    if (ctx->pc == 0x4617B0u) {
        ctx->pc = 0x4617B4u;
        goto label_4617b4;
    }
    ctx->pc = 0x4617ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4617B4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4617ACu, 0x4617B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4617B4u;
label_4617b4:
    // 0x4617b4: 0xaf82b220  sw          $v0, -0x4DE0($gp)
    ctx->pc = 0x4617b4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947360), GPR_U32(ctx, 2));
label_4617b8:
    // 0x4617b8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x4617b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_4617bc:
    // 0x4617bc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_4617c0:
    if (ctx->pc == 0x4617C0u) {
        ctx->pc = 0x4617C4u;
        goto label_4617c4;
    }
    ctx->pc = 0x4617BCu;
    {
        const bool branch_taken_0x4617bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4617bc) {
            ctx->pc = 0x4617CCu;
            goto label_4617cc;
        }
    }
    ctx->pc = 0x4617C4u;
label_4617c4:
    // 0x4617c4: 0xd  break       0
    ctx->pc = 0x4617c4u;
    runtime->handleBreak(rdram, ctx);
label_4617c8:
    // 0x4617c8: 0x0  nop
    ctx->pc = 0x4617c8u;
    // NOP
label_4617cc:
    // 0x4617cc: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x4617ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_4617d0:
    // 0x4617d0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x4617d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4617d4:
    // 0x4617d4: 0xc11392c  jal         func_44E4B0
label_4617d8:
    if (ctx->pc == 0x4617D8u) {
        ctx->pc = 0x4617DCu;
        goto label_4617dc;
    }
    ctx->pc = 0x4617D4u;
    SET_GPR_U32(ctx, 31, 0x4617DCu);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x4617D4u, 0x4617DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4617DCu;
label_4617dc:
    // 0x4617dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4617dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4617e0:
    // 0x4617e0: 0x27bd02e0  addiu       $sp, $sp, 0x2E0
    ctx->pc = 0x4617e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
label_4617e4:
    // 0x4617e4: 0x3e00008  jr          $ra
label_4617e8:
    if (ctx->pc == 0x4617E8u) {
        ctx->pc = 0x4617ECu;
        goto label_4617ec;
    }
    ctx->pc = 0x4617E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4617E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4617ECu;
label_4617ec:
    // 0x4617ec: 0x0  nop
    ctx->pc = 0x4617ecu;
    // NOP
    ctx->pc = 0x4617f0u;
}
