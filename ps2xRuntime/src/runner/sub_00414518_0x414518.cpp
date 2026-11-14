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

// Function: sub_00414518
// Address: 0x414518 - 0x4146d0
void sub_00414518_0x414518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00414518_0x414518");
#endif

    switch (ctx->pc) {
        case 0x414518u: goto label_414518;
        case 0x41451cu: goto label_41451c;
        case 0x414520u: goto label_414520;
        case 0x414524u: goto label_414524;
        case 0x414528u: goto label_414528;
        case 0x41452cu: goto label_41452c;
        case 0x414530u: goto label_414530;
        case 0x414534u: goto label_414534;
        case 0x414538u: goto label_414538;
        case 0x41453cu: goto label_41453c;
        case 0x414540u: goto label_414540;
        case 0x414544u: goto label_414544;
        case 0x414548u: goto label_414548;
        case 0x41454cu: goto label_41454c;
        case 0x414550u: goto label_414550;
        case 0x414554u: goto label_414554;
        case 0x414558u: goto label_414558;
        case 0x41455cu: goto label_41455c;
        case 0x414560u: goto label_414560;
        case 0x414564u: goto label_414564;
        case 0x414568u: goto label_414568;
        case 0x41456cu: goto label_41456c;
        case 0x414570u: goto label_414570;
        case 0x414574u: goto label_414574;
        case 0x414578u: goto label_414578;
        case 0x41457cu: goto label_41457c;
        case 0x414580u: goto label_414580;
        case 0x414584u: goto label_414584;
        case 0x414588u: goto label_414588;
        case 0x41458cu: goto label_41458c;
        case 0x414590u: goto label_414590;
        case 0x414594u: goto label_414594;
        case 0x414598u: goto label_414598;
        case 0x41459cu: goto label_41459c;
        case 0x4145a0u: goto label_4145a0;
        case 0x4145a4u: goto label_4145a4;
        case 0x4145a8u: goto label_4145a8;
        case 0x4145acu: goto label_4145ac;
        case 0x4145b0u: goto label_4145b0;
        case 0x4145b4u: goto label_4145b4;
        case 0x4145b8u: goto label_4145b8;
        case 0x4145bcu: goto label_4145bc;
        case 0x4145c0u: goto label_4145c0;
        case 0x4145c4u: goto label_4145c4;
        case 0x4145c8u: goto label_4145c8;
        case 0x4145ccu: goto label_4145cc;
        case 0x4145d0u: goto label_4145d0;
        case 0x4145d4u: goto label_4145d4;
        case 0x4145d8u: goto label_4145d8;
        case 0x4145dcu: goto label_4145dc;
        case 0x4145e0u: goto label_4145e0;
        case 0x4145e4u: goto label_4145e4;
        case 0x4145e8u: goto label_4145e8;
        case 0x4145ecu: goto label_4145ec;
        case 0x4145f0u: goto label_4145f0;
        case 0x4145f4u: goto label_4145f4;
        case 0x4145f8u: goto label_4145f8;
        case 0x4145fcu: goto label_4145fc;
        case 0x414600u: goto label_414600;
        case 0x414604u: goto label_414604;
        case 0x414608u: goto label_414608;
        case 0x41460cu: goto label_41460c;
        case 0x414610u: goto label_414610;
        case 0x414614u: goto label_414614;
        case 0x414618u: goto label_414618;
        case 0x41461cu: goto label_41461c;
        case 0x414620u: goto label_414620;
        case 0x414624u: goto label_414624;
        case 0x414628u: goto label_414628;
        case 0x41462cu: goto label_41462c;
        case 0x414630u: goto label_414630;
        case 0x414634u: goto label_414634;
        case 0x414638u: goto label_414638;
        case 0x41463cu: goto label_41463c;
        case 0x414640u: goto label_414640;
        case 0x414644u: goto label_414644;
        case 0x414648u: goto label_414648;
        case 0x41464cu: goto label_41464c;
        case 0x414650u: goto label_414650;
        case 0x414654u: goto label_414654;
        case 0x414658u: goto label_414658;
        case 0x41465cu: goto label_41465c;
        case 0x414660u: goto label_414660;
        case 0x414664u: goto label_414664;
        case 0x414668u: goto label_414668;
        case 0x41466cu: goto label_41466c;
        case 0x414670u: goto label_414670;
        case 0x414674u: goto label_414674;
        case 0x414678u: goto label_414678;
        case 0x41467cu: goto label_41467c;
        case 0x414680u: goto label_414680;
        case 0x414684u: goto label_414684;
        case 0x414688u: goto label_414688;
        case 0x41468cu: goto label_41468c;
        case 0x414690u: goto label_414690;
        case 0x414694u: goto label_414694;
        case 0x414698u: goto label_414698;
        case 0x41469cu: goto label_41469c;
        case 0x4146a0u: goto label_4146a0;
        case 0x4146a4u: goto label_4146a4;
        case 0x4146a8u: goto label_4146a8;
        case 0x4146acu: goto label_4146ac;
        case 0x4146b0u: goto label_4146b0;
        case 0x4146b4u: goto label_4146b4;
        case 0x4146b8u: goto label_4146b8;
        case 0x4146bcu: goto label_4146bc;
        case 0x4146c0u: goto label_4146c0;
        case 0x4146c4u: goto label_4146c4;
        case 0x4146c8u: goto label_4146c8;
        case 0x4146ccu: goto label_4146cc;
        default: break;
    }

    ctx->pc = 0x414518u;

label_414518:
    // 0x414518: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x414518u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_41451c:
    // 0x41451c: 0x8f83bdf0  lw          $v1, -0x4210($gp)
    ctx->pc = 0x41451cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950384)));
label_414520:
    // 0x414520: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x414520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_414524:
    // 0x414524: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x414524u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_414528:
    // 0x414528: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x414528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_41452c:
    // 0x41452c: 0x2452e880  addiu       $s2, $v0, -0x1780
    ctx->pc = 0x41452cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_414530:
    // 0x414530: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x414530u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_414534:
    // 0x414534: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x414534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_414538:
    // 0x414538: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x414538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_41453c:
    // 0x41453c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x41453cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_414540:
    // 0x414540: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x414540u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_414544:
    // 0x414544: 0x8e420118  lw          $v0, 0x118($s2)
    ctx->pc = 0x414544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 280)));
label_414548:
    // 0x414548: 0x34a50412  ori         $a1, $a1, 0x412
    ctx->pc = 0x414548u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1042);
label_41454c:
    // 0x41454c: 0x40f809  jalr        $v0
label_414550:
    if (ctx->pc == 0x414550u) {
        ctx->pc = 0x414550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41454Cu;
        // 0x414550: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x414554u;
        goto label_414554;
    }
    ctx->pc = 0x41454Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x414554u);
        ctx->pc = 0x414550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41454Cu;
        // 0x414550: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41454Cu, 0x414554u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x414554u;
label_414554:
    // 0x414554: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x414554u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_414558:
    // 0x414558: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_41455c:
    if (ctx->pc == 0x41455Cu) {
        ctx->pc = 0x41455Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414558u;
        // 0x41455c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x414560u;
        goto label_414560;
    }
    ctx->pc = 0x414558u;
    {
        const bool branch_taken_0x414558 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x41455Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414558u;
        // 0x41455c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x414558) {
            ctx->pc = 0x41456Cu;
            goto label_41456c;
        }
    }
    ctx->pc = 0x414560u;
label_414560:
    // 0x414560: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x414560u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_414564:
    // 0x414564: 0xc0bb7e6  jal         func_2EDF98
label_414568:
    if (ctx->pc == 0x414568u) {
        ctx->pc = 0x414568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414564u;
        // 0x414568: 0x24060021  addiu       $a2, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41456Cu;
        goto label_41456c;
    }
    ctx->pc = 0x414564u;
    SET_GPR_U32(ctx, 31, 0x41456Cu);
    ctx->pc = 0x414568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x414564u;
    // 0x414568: 0x24060021  addiu       $a2, $zero, 0x21 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x414564u, 0x41456Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41456Cu;
label_41456c:
    // 0x41456c: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
label_414570:
    if (ctx->pc == 0x414570u) {
        ctx->pc = 0x414570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41456Cu;
        // 0x414570: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x414574u;
        goto label_414574;
    }
    ctx->pc = 0x41456Cu;
    {
        const bool branch_taken_0x41456c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x414570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41456Cu;
        // 0x414570: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41456c) {
            ctx->pc = 0x4145B8u;
            goto label_4145b8;
        }
    }
    ctx->pc = 0x414574u;
label_414574:
    // 0x414574: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x414574u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_414578:
    // 0x414578: 0xc103468  jal         func_40D1A0
label_41457c:
    if (ctx->pc == 0x41457Cu) {
        ctx->pc = 0x41457Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414578u;
        // 0x41457c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x414580u;
        goto label_414580;
    }
    ctx->pc = 0x414578u;
    SET_GPR_U32(ctx, 31, 0x414580u);
    ctx->pc = 0x41457Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x414578u;
    // 0x41457c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D1A0u, 0x414578u, 0x414580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x414580u;
label_414580:
    // 0x414580: 0x14510006  bne         $v0, $s1, . + 4 + (0x6 << 2)
label_414584:
    if (ctx->pc == 0x414584u) {
        ctx->pc = 0x414584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414580u;
        // 0x414584: 0x8f83bdf0  lw          $v1, -0x4210($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950384)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x414588u;
        goto label_414588;
    }
    ctx->pc = 0x414580u;
    {
        const bool branch_taken_0x414580 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x414584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414580u;
        // 0x414584: 0x8f83bdf0  lw          $v1, -0x4210($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x414580) {
            ctx->pc = 0x41459Cu;
            goto label_41459c;
        }
    }
    ctx->pc = 0x414588u;
label_414588:
    // 0x414588: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x414588u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_41458c:
    // 0x41458c: 0xc10521e  jal         func_414878
label_414590:
    if (ctx->pc == 0x414590u) {
        ctx->pc = 0x414590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41458Cu;
        // 0x414590: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x414594u;
        goto label_414594;
    }
    ctx->pc = 0x41458Cu;
    SET_GPR_U32(ctx, 31, 0x414594u);
    ctx->pc = 0x414590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41458Cu;
    // 0x414590: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x414878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x414878u, 0x41458Cu, 0x414594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x414594u;
label_414594:
    // 0x414594: 0x10500008  beq         $v0, $s0, . + 4 + (0x8 << 2)
label_414598:
    if (ctx->pc == 0x414598u) {
        ctx->pc = 0x414598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414594u;
        // 0x414598: 0x8f83bdf0  lw          $v1, -0x4210($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950384)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41459Cu;
        goto label_41459c;
    }
    ctx->pc = 0x414594u;
    {
        const bool branch_taken_0x414594 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x414598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414594u;
        // 0x414598: 0x8f83bdf0  lw          $v1, -0x4210($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x414594) {
            ctx->pc = 0x4145B8u;
            goto label_4145b8;
        }
    }
    ctx->pc = 0x41459Cu;
label_41459c:
    // 0x41459c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x41459cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4145a0:
    // 0x4145a0: 0x8e42011c  lw          $v0, 0x11C($s2)
    ctx->pc = 0x4145a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 284)));
label_4145a4:
    // 0x4145a4: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x4145a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_4145a8:
    // 0x4145a8: 0x40f809  jalr        $v0
label_4145ac:
    if (ctx->pc == 0x4145ACu) {
        ctx->pc = 0x4145ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4145A8u;
        // 0x4145ac: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4145B0u;
        goto label_4145b0;
    }
    ctx->pc = 0x4145A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4145B0u);
        ctx->pc = 0x4145ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4145A8u;
        // 0x4145ac: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4145A8u, 0x4145B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4145B0u;
label_4145b0:
    // 0x4145b0: 0x10000002  b           . + 4 + (0x2 << 2)
label_4145b4:
    if (ctx->pc == 0x4145B4u) {
        ctx->pc = 0x4145B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4145B0u;
        // 0x4145b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4145B8u;
        goto label_4145b8;
    }
    ctx->pc = 0x4145B0u;
    {
        const bool branch_taken_0x4145b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4145B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4145B0u;
        // 0x4145b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4145b0) {
            ctx->pc = 0x4145BCu;
            goto label_4145bc;
        }
    }
    ctx->pc = 0x4145B8u;
label_4145b8:
    // 0x4145b8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4145b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4145bc:
    // 0x4145bc: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x4145bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4145c0:
    // 0x4145c0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x4145c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4145c4:
    // 0x4145c4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4145c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4145c8:
    // 0x4145c8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4145c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4145cc:
    // 0x4145cc: 0x3e00008  jr          $ra
label_4145d0:
    if (ctx->pc == 0x4145D0u) {
        ctx->pc = 0x4145D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4145CCu;
        // 0x4145d0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4145D4u;
        goto label_4145d4;
    }
    ctx->pc = 0x4145CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4145D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4145CCu;
        // 0x4145d0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4145CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4145D4u;
label_4145d4:
    // 0x4145d4: 0x0  nop
    ctx->pc = 0x4145d4u;
    // NOP
label_4145d8:
    // 0x4145d8: 0x3e00008  jr          $ra
label_4145dc:
    if (ctx->pc == 0x4145DCu) {
        ctx->pc = 0x4145DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4145D8u;
        // 0x4145dc: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4145E0u;
        goto label_4145e0;
    }
    ctx->pc = 0x4145D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4145DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4145D8u;
        // 0x4145dc: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4145D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4145E0u;
label_4145e0:
    // 0x4145e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4145e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4145e4:
    // 0x4145e4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4145e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4145e8:
    // 0x4145e8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x4145e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_4145ec:
    // 0x4145ec: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4145ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4145f0:
    // 0x4145f0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x4145f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_4145f4:
    // 0x4145f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4145f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4145f8:
    // 0x4145f8: 0xc1051b4  jal         func_4146D0
label_4145fc:
    if (ctx->pc == 0x4145FCu) {
        ctx->pc = 0x4145FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4145F8u;
        // 0x4145fc: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x414600u;
        goto label_414600;
    }
    ctx->pc = 0x4145F8u;
    SET_GPR_U32(ctx, 31, 0x414600u);
    ctx->pc = 0x4145FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4145F8u;
    // 0x4145fc: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4146D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4146D0u, 0x4145F8u, 0x414600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x414600u;
label_414600:
    // 0x414600: 0x3c070003  lui         $a3, 0x3
    ctx->pc = 0x414600u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3 << 16));
label_414604:
    // 0x414604: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x414604u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_414608:
    // 0x414608: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x414608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41460c:
    // 0x41460c: 0x24050029  addiu       $a1, $zero, 0x29
    ctx->pc = 0x41460cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
label_414610:
    // 0x414610: 0x34e77002  ori         $a3, $a3, 0x7002
    ctx->pc = 0x414610u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)28674);
label_414614:
    // 0x414614: 0xc103404  jal         func_40D010
label_414618:
    if (ctx->pc == 0x414618u) {
        ctx->pc = 0x414618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414614u;
        // 0x414618: 0x2408002d  addiu       $t0, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41461Cu;
        goto label_41461c;
    }
    ctx->pc = 0x414614u;
    SET_GPR_U32(ctx, 31, 0x41461Cu);
    ctx->pc = 0x414618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x414614u;
    // 0x414618: 0x2408002d  addiu       $t0, $zero, 0x2D (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D010u, 0x414614u, 0x41461Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41461Cu;
label_41461c:
    // 0x41461c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x41461cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_414620:
    // 0x414620: 0x1630000f  bne         $s1, $s0, . + 4 + (0xF << 2)
label_414624:
    if (ctx->pc == 0x414624u) {
        ctx->pc = 0x414624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414620u;
        // 0x414624: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x414628u;
        goto label_414628;
    }
    ctx->pc = 0x414620u;
    {
        const bool branch_taken_0x414620 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 16));
        ctx->pc = 0x414624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414620u;
        // 0x414624: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x414620) {
            ctx->pc = 0x414660u;
            goto label_414660;
        }
    }
    ctx->pc = 0x414628u;
label_414628:
    // 0x414628: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x414628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_41462c:
    // 0x41462c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x41462cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_414630:
    // 0x414630: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x414630u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_414634:
    // 0x414634: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x414634u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_414638:
    // 0x414638: 0xc103440  jal         func_40D100
label_41463c:
    if (ctx->pc == 0x41463Cu) {
        ctx->pc = 0x41463Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414638u;
        // 0x41463c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x414640u;
        goto label_414640;
    }
    ctx->pc = 0x414638u;
    SET_GPR_U32(ctx, 31, 0x414640u);
    ctx->pc = 0x41463Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x414638u;
    // 0x41463c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D100u, 0x414638u, 0x414640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x414640u;
label_414640:
    // 0x414640: 0x54510007  bnel        $v0, $s1, . + 4 + (0x7 << 2)
label_414644:
    if (ctx->pc == 0x414644u) {
        ctx->pc = 0x414644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414640u;
        // 0x414644: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x414648u;
        goto label_414648;
    }
    ctx->pc = 0x414640u;
    {
        const bool branch_taken_0x414640 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x414640) {
            ctx->pc = 0x414644u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x414640u;
            // 0x414644: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x414660u;
            goto label_414660;
        }
    }
    ctx->pc = 0x414648u;
label_414648:
    // 0x414648: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x414648u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_41464c:
    // 0x41464c: 0xc105336  jal         func_414CD8
label_414650:
    if (ctx->pc == 0x414650u) {
        ctx->pc = 0x414650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41464Cu;
        // 0x414650: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x414654u;
        goto label_414654;
    }
    ctx->pc = 0x41464Cu;
    SET_GPR_U32(ctx, 31, 0x414654u);
    ctx->pc = 0x414650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41464Cu;
    // 0x414650: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x414CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x414CD8u, 0x41464Cu, 0x414654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x414654u;
label_414654:
    // 0x414654: 0x521026  xor         $v0, $v0, $s2
    ctx->pc = 0x414654u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 18));
label_414658:
    // 0x414658: 0x2900b  movn        $s2, $zero, $v0
    ctx->pc = 0x414658u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 0));
label_41465c:
    // 0x41465c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x41465cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_414660:
    // 0x414660: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x414660u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_414664:
    // 0x414664: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x414664u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_414668:
    // 0x414668: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x414668u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_41466c:
    // 0x41466c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x41466cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_414670:
    // 0x414670: 0x3e00008  jr          $ra
label_414674:
    if (ctx->pc == 0x414674u) {
        ctx->pc = 0x414674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414670u;
        // 0x414674: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x414678u;
        goto label_414678;
    }
    ctx->pc = 0x414670u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x414674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414670u;
        // 0x414674: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x414670u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x414678u;
label_414678:
    // 0x414678: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x414678u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_41467c:
    // 0x41467c: 0x3c070003  lui         $a3, 0x3
    ctx->pc = 0x41467cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3 << 16));
label_414680:
    // 0x414680: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x414680u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_414684:
    // 0x414684: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x414684u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_414688:
    // 0x414688: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x414688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_41468c:
    // 0x41468c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x41468cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_414690:
    // 0x414690: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x414690u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_414694:
    // 0x414694: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x414694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_414698:
    // 0x414698: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x414698u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41469c:
    // 0x41469c: 0x2405002a  addiu       $a1, $zero, 0x2A
    ctx->pc = 0x41469cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
label_4146a0:
    // 0x4146a0: 0x34e77002  ori         $a3, $a3, 0x7002
    ctx->pc = 0x4146a0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)28674);
label_4146a4:
    // 0x4146a4: 0xc103404  jal         func_40D010
label_4146a8:
    if (ctx->pc == 0x4146A8u) {
        ctx->pc = 0x4146A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4146A4u;
        // 0x4146a8: 0x2408002d  addiu       $t0, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4146ACu;
        goto label_4146ac;
    }
    ctx->pc = 0x4146A4u;
    SET_GPR_U32(ctx, 31, 0x4146ACu);
    ctx->pc = 0x4146A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4146A4u;
    // 0x4146a8: 0x2408002d  addiu       $t0, $zero, 0x2D (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D010u, 0x4146A4u, 0x4146ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4146ACu;
label_4146ac:
    // 0x4146ac: 0x501026  xor         $v0, $v0, $s0
    ctx->pc = 0x4146acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 16));
label_4146b0:
    // 0x4146b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4146b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4146b4:
    // 0x4146b4: 0x2880b  movn        $s1, $zero, $v0
    ctx->pc = 0x4146b4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 0));
label_4146b8:
    // 0x4146b8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x4146b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4146bc:
    // 0x4146bc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4146bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4146c0:
    // 0x4146c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4146c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4146c4:
    // 0x4146c4: 0x3e00008  jr          $ra
label_4146c8:
    if (ctx->pc == 0x4146C8u) {
        ctx->pc = 0x4146C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4146C4u;
        // 0x4146c8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4146CCu;
        goto label_4146cc;
    }
    ctx->pc = 0x4146C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4146C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4146C4u;
        // 0x4146c8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4146C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4146CCu;
label_4146cc:
    // 0x4146cc: 0x0  nop
    ctx->pc = 0x4146ccu;
    // NOP
    ctx->pc = 0x4146d0u;
}
