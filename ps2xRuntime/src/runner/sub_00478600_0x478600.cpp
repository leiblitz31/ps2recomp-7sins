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

// Function: sub_00478600
// Address: 0x478600 - 0x478790
void sub_00478600_0x478600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00478600_0x478600");
#endif

    switch (ctx->pc) {
        case 0x478600u: goto label_478600;
        case 0x478604u: goto label_478604;
        case 0x478608u: goto label_478608;
        case 0x47860cu: goto label_47860c;
        case 0x478610u: goto label_478610;
        case 0x478614u: goto label_478614;
        case 0x478618u: goto label_478618;
        case 0x47861cu: goto label_47861c;
        case 0x478620u: goto label_478620;
        case 0x478624u: goto label_478624;
        case 0x478628u: goto label_478628;
        case 0x47862cu: goto label_47862c;
        case 0x478630u: goto label_478630;
        case 0x478634u: goto label_478634;
        case 0x478638u: goto label_478638;
        case 0x47863cu: goto label_47863c;
        case 0x478640u: goto label_478640;
        case 0x478644u: goto label_478644;
        case 0x478648u: goto label_478648;
        case 0x47864cu: goto label_47864c;
        case 0x478650u: goto label_478650;
        case 0x478654u: goto label_478654;
        case 0x478658u: goto label_478658;
        case 0x47865cu: goto label_47865c;
        case 0x478660u: goto label_478660;
        case 0x478664u: goto label_478664;
        case 0x478668u: goto label_478668;
        case 0x47866cu: goto label_47866c;
        case 0x478670u: goto label_478670;
        case 0x478674u: goto label_478674;
        case 0x478678u: goto label_478678;
        case 0x47867cu: goto label_47867c;
        case 0x478680u: goto label_478680;
        case 0x478684u: goto label_478684;
        case 0x478688u: goto label_478688;
        case 0x47868cu: goto label_47868c;
        case 0x478690u: goto label_478690;
        case 0x478694u: goto label_478694;
        case 0x478698u: goto label_478698;
        case 0x47869cu: goto label_47869c;
        case 0x4786a0u: goto label_4786a0;
        case 0x4786a4u: goto label_4786a4;
        case 0x4786a8u: goto label_4786a8;
        case 0x4786acu: goto label_4786ac;
        case 0x4786b0u: goto label_4786b0;
        case 0x4786b4u: goto label_4786b4;
        case 0x4786b8u: goto label_4786b8;
        case 0x4786bcu: goto label_4786bc;
        case 0x4786c0u: goto label_4786c0;
        case 0x4786c4u: goto label_4786c4;
        case 0x4786c8u: goto label_4786c8;
        case 0x4786ccu: goto label_4786cc;
        case 0x4786d0u: goto label_4786d0;
        case 0x4786d4u: goto label_4786d4;
        case 0x4786d8u: goto label_4786d8;
        case 0x4786dcu: goto label_4786dc;
        case 0x4786e0u: goto label_4786e0;
        case 0x4786e4u: goto label_4786e4;
        case 0x4786e8u: goto label_4786e8;
        case 0x4786ecu: goto label_4786ec;
        case 0x4786f0u: goto label_4786f0;
        case 0x4786f4u: goto label_4786f4;
        case 0x4786f8u: goto label_4786f8;
        case 0x4786fcu: goto label_4786fc;
        case 0x478700u: goto label_478700;
        case 0x478704u: goto label_478704;
        case 0x478708u: goto label_478708;
        case 0x47870cu: goto label_47870c;
        case 0x478710u: goto label_478710;
        case 0x478714u: goto label_478714;
        case 0x478718u: goto label_478718;
        case 0x47871cu: goto label_47871c;
        case 0x478720u: goto label_478720;
        case 0x478724u: goto label_478724;
        case 0x478728u: goto label_478728;
        case 0x47872cu: goto label_47872c;
        case 0x478730u: goto label_478730;
        case 0x478734u: goto label_478734;
        case 0x478738u: goto label_478738;
        case 0x47873cu: goto label_47873c;
        case 0x478740u: goto label_478740;
        case 0x478744u: goto label_478744;
        case 0x478748u: goto label_478748;
        case 0x47874cu: goto label_47874c;
        case 0x478750u: goto label_478750;
        case 0x478754u: goto label_478754;
        case 0x478758u: goto label_478758;
        case 0x47875cu: goto label_47875c;
        case 0x478760u: goto label_478760;
        case 0x478764u: goto label_478764;
        case 0x478768u: goto label_478768;
        case 0x47876cu: goto label_47876c;
        case 0x478770u: goto label_478770;
        case 0x478774u: goto label_478774;
        case 0x478778u: goto label_478778;
        case 0x47877cu: goto label_47877c;
        case 0x478780u: goto label_478780;
        case 0x478784u: goto label_478784;
        case 0x478788u: goto label_478788;
        case 0x47878cu: goto label_47878c;
        default: break;
    }

    ctx->pc = 0x478600u;

label_478600:
    // 0x478600: 0x27bdfe60  addiu       $sp, $sp, -0x1A0
    ctx->pc = 0x478600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966880));
label_478604:
    // 0x478604: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x478604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_478608:
    // 0x478608: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x478608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_47860c:
    // 0x47860c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x47860cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_478610:
    // 0x478610: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x478610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_478614:
    // 0x478614: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x478614u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_478618:
    // 0x478618: 0xafa40180  sw          $a0, 0x180($sp)
    ctx->pc = 0x478618u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 4));
label_47861c:
    // 0x47861c: 0xafa50190  sw          $a1, 0x190($sp)
    ctx->pc = 0x47861cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 5));
label_478620:
    // 0x478620: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x478620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
label_478624:
    // 0x478624: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_478628:
    if (ctx->pc == 0x478628u) {
        ctx->pc = 0x47862Cu;
        goto label_47862c;
    }
    ctx->pc = 0x478624u;
    {
        const bool branch_taken_0x478624 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x478624) {
            ctx->pc = 0x4786D4u;
            goto label_4786d4;
        }
    }
    ctx->pc = 0x47862Cu;
label_47862c:
    // 0x47862c: 0x8f82b4ac  lw          $v0, -0x4B54($gp)
    ctx->pc = 0x47862cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948012)));
label_478630:
    // 0x478630: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_478634:
    if (ctx->pc == 0x478634u) {
        ctx->pc = 0x478638u;
        goto label_478638;
    }
    ctx->pc = 0x478630u;
    {
        const bool branch_taken_0x478630 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x478630) {
            ctx->pc = 0x4786D4u;
            goto label_4786d4;
        }
    }
    ctx->pc = 0x478638u;
label_478638:
    // 0x478638: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x478638u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_47863c:
    // 0x47863c: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x47863cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_478640:
    // 0x478640: 0x27a60170  addiu       $a2, $sp, 0x170
    ctx->pc = 0x478640u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_478644:
    // 0x478644: 0xc115ee8  jal         func_457BA0
label_478648:
    if (ctx->pc == 0x478648u) {
        ctx->pc = 0x47864Cu;
        goto label_47864c;
    }
    ctx->pc = 0x478644u;
    SET_GPR_U32(ctx, 31, 0x47864Cu);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x478644u, 0x47864Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47864Cu;
label_47864c:
    // 0x47864c: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_478650:
    if (ctx->pc == 0x478650u) {
        ctx->pc = 0x478654u;
        goto label_478654;
    }
    ctx->pc = 0x47864Cu;
    {
        const bool branch_taken_0x47864c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47864c) {
            ctx->pc = 0x4786D4u;
            goto label_4786d4;
        }
    }
    ctx->pc = 0x478654u;
label_478654:
    // 0x478654: 0x8fa20178  lw          $v0, 0x178($sp)
    ctx->pc = 0x478654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
label_478658:
    // 0x478658: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_47865c:
    if (ctx->pc == 0x47865Cu) {
        ctx->pc = 0x478660u;
        goto label_478660;
    }
    ctx->pc = 0x478658u;
    {
        const bool branch_taken_0x478658 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x478658) {
            ctx->pc = 0x4786D4u;
            goto label_4786d4;
        }
    }
    ctx->pc = 0x478660u;
label_478660:
    // 0x478660: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x478660u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_478664:
    // 0x478664: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x478664u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_478668:
    // 0x478668: 0x8fa60174  lw          $a2, 0x174($sp)
    ctx->pc = 0x478668u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 372)));
label_47866c:
    // 0x47866c: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x47866cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_478670:
    // 0x478670: 0x24e713e8  addiu       $a3, $a3, 0x13E8
    ctx->pc = 0x478670u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 5096));
label_478674:
    // 0x478674: 0x240801f4  addiu       $t0, $zero, 0x1F4
    ctx->pc = 0x478674u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
label_478678:
    // 0x478678: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x478678u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_47867c:
    // 0x47867c: 0x252913f8  addiu       $t1, $t1, 0x13F8
    ctx->pc = 0x47867cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 5112));
label_478680:
    // 0x478680: 0xc113940  jal         func_44E500
label_478684:
    if (ctx->pc == 0x478684u) {
        ctx->pc = 0x478688u;
        goto label_478688;
    }
    ctx->pc = 0x478680u;
    SET_GPR_U32(ctx, 31, 0x478688u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x478680u, 0x478688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x478688u;
label_478688:
    // 0x478688: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x478688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_47868c:
    // 0x47868c: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x47868cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_478690:
    // 0x478690: 0x24a51408  addiu       $a1, $a1, 0x1408
    ctx->pc = 0x478690u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5128));
label_478694:
    // 0x478694: 0xc115c24  jal         func_457090
label_478698:
    if (ctx->pc == 0x478698u) {
        ctx->pc = 0x47869Cu;
        goto label_47869c;
    }
    ctx->pc = 0x478694u;
    SET_GPR_U32(ctx, 31, 0x47869Cu);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x478694u, 0x47869Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47869Cu;
label_47869c:
    // 0x47869c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x47869cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_4786a0:
    // 0x4786a0: 0x8fa20178  lw          $v0, 0x178($sp)
    ctx->pc = 0x4786a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
label_4786a4:
    // 0x4786a4: 0x40f809  jalr        $v0
label_4786a8:
    if (ctx->pc == 0x4786A8u) {
        ctx->pc = 0x4786ACu;
        goto label_4786ac;
    }
    ctx->pc = 0x4786A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4786ACu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4786A4u, 0x4786ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4786ACu;
label_4786ac:
    // 0x4786ac: 0xaf82b4ac  sw          $v0, -0x4B54($gp)
    ctx->pc = 0x4786acu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948012), GPR_U32(ctx, 2));
label_4786b0:
    // 0x4786b0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x4786b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_4786b4:
    // 0x4786b4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_4786b8:
    if (ctx->pc == 0x4786B8u) {
        ctx->pc = 0x4786BCu;
        goto label_4786bc;
    }
    ctx->pc = 0x4786B4u;
    {
        const bool branch_taken_0x4786b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4786b4) {
            ctx->pc = 0x4786C4u;
            goto label_4786c4;
        }
    }
    ctx->pc = 0x4786BCu;
label_4786bc:
    // 0x4786bc: 0xd  break       0
    ctx->pc = 0x4786bcu;
    runtime->handleBreak(rdram, ctx);
label_4786c0:
    // 0x4786c0: 0x0  nop
    ctx->pc = 0x4786c0u;
    // NOP
label_4786c4:
    // 0x4786c4: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x4786c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_4786c8:
    // 0x4786c8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x4786c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4786cc:
    // 0x4786cc: 0xc11392c  jal         func_44E4B0
label_4786d0:
    if (ctx->pc == 0x4786D0u) {
        ctx->pc = 0x4786D4u;
        goto label_4786d4;
    }
    ctx->pc = 0x4786CCu;
    SET_GPR_U32(ctx, 31, 0x4786D4u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x4786CCu, 0x4786D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4786D4u;
label_4786d4:
    // 0x4786d4: 0x8fb30190  lw          $s3, 0x190($sp)
    ctx->pc = 0x4786d4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
label_4786d8:
    // 0x4786d8: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x4786d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
label_4786dc:
    // 0x4786dc: 0x8c52003c  lw          $s2, 0x3C($v0)
    ctx->pc = 0x4786dcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_4786e0:
    // 0x4786e0: 0x8f84c068  lw          $a0, -0x3F98($gp)
    ctx->pc = 0x4786e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951016)));
label_4786e4:
    // 0x4786e4: 0xc11dd74  jal         func_4775D0
label_4786e8:
    if (ctx->pc == 0x4786E8u) {
        ctx->pc = 0x4786ECu;
        goto label_4786ec;
    }
    ctx->pc = 0x4786E4u;
    SET_GPR_U32(ctx, 31, 0x4786ECu);
    ctx->pc = 0x4775D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4775D0u, 0x4786E4u, 0x4786ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4786ECu;
label_4786ec:
    // 0x4786ec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4786ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4786f0:
    // 0x4786f0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4786f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4786f4:
    // 0x4786f4: 0x1000000d  b           . + 4 + (0xD << 2)
label_4786f8:
    if (ctx->pc == 0x4786F8u) {
        ctx->pc = 0x4786FCu;
        goto label_4786fc;
    }
    ctx->pc = 0x4786F4u;
    {
        const bool branch_taken_0x4786f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4786f4) {
            ctx->pc = 0x47872Cu;
            goto label_47872c;
        }
    }
    ctx->pc = 0x4786FCu;
label_4786fc:
    // 0x4786fc: 0x8fa30180  lw          $v1, 0x180($sp)
    ctx->pc = 0x4786fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
label_478700:
    // 0x478700: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x478700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_478704:
    // 0x478704: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
label_478708:
    if (ctx->pc == 0x478708u) {
        ctx->pc = 0x47870Cu;
        goto label_47870c;
    }
    ctx->pc = 0x478704u;
    {
        const bool branch_taken_0x478704 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x478704) {
            ctx->pc = 0x478728u;
            goto label_478728;
        }
    }
    ctx->pc = 0x47870Cu;
label_47870c:
    // 0x47870c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x47870cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_478710:
    // 0x478710: 0x8c42003c  lw          $v0, 0x3C($v0)
    ctx->pc = 0x478710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_478714:
    // 0x478714: 0x16420004  bne         $s2, $v0, . + 4 + (0x4 << 2)
label_478718:
    if (ctx->pc == 0x478718u) {
        ctx->pc = 0x47871Cu;
        goto label_47871c;
    }
    ctx->pc = 0x478714u;
    {
        const bool branch_taken_0x478714 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x478714) {
            ctx->pc = 0x478728u;
            goto label_478728;
        }
    }
    ctx->pc = 0x47871Cu;
label_47871c:
    // 0x47871c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x47871cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_478720:
    // 0x478720: 0x10000007  b           . + 4 + (0x7 << 2)
label_478724:
    if (ctx->pc == 0x478724u) {
        ctx->pc = 0x478728u;
        goto label_478728;
    }
    ctx->pc = 0x478720u;
    {
        const bool branch_taken_0x478720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x478720) {
            ctx->pc = 0x478740u;
            goto label_478740;
        }
    }
    ctx->pc = 0x478728u;
label_478728:
    // 0x478728: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x478728u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_47872c:
    // 0x47872c: 0x8f84c068  lw          $a0, -0x3F98($gp)
    ctx->pc = 0x47872cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951016)));
label_478730:
    // 0x478730: 0xc11dd6c  jal         func_4775B0
label_478734:
    if (ctx->pc == 0x478734u) {
        ctx->pc = 0x478738u;
        goto label_478738;
    }
    ctx->pc = 0x478730u;
    SET_GPR_U32(ctx, 31, 0x478738u);
    ctx->pc = 0x4775B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4775B0u, 0x478730u, 0x478738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x478738u;
label_478738:
    // 0x478738: 0x1602fff0  bne         $s0, $v0, . + 4 + (-0x10 << 2)
label_47873c:
    if (ctx->pc == 0x47873Cu) {
        ctx->pc = 0x478740u;
        goto label_478740;
    }
    ctx->pc = 0x478738u;
    {
        const bool branch_taken_0x478738 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x478738) {
            ctx->pc = 0x4786FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4786fc;
        }
    }
    ctx->pc = 0x478740u;
label_478740:
    // 0x478740: 0x1620000a  bnez        $s1, . + 4 + (0xA << 2)
label_478744:
    if (ctx->pc == 0x478744u) {
        ctx->pc = 0x478748u;
        goto label_478748;
    }
    ctx->pc = 0x478740u;
    {
        const bool branch_taken_0x478740 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x478740) {
            ctx->pc = 0x47876Cu;
            goto label_47876c;
        }
    }
    ctx->pc = 0x478748u;
label_478748:
    // 0x478748: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x478748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
label_47874c:
    // 0x47874c: 0xafa20168  sw          $v0, 0x168($sp)
    ctx->pc = 0x47874cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 360), GPR_U32(ctx, 2));
label_478750:
    // 0x478750: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x478750u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_478754:
    // 0x478754: 0x0  nop
    ctx->pc = 0x478754u;
    // NOP
label_478758:
    // 0x478758: 0xe7a0016c  swc1        $f0, 0x16C($sp)
    ctx->pc = 0x478758u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 364), bits); }
label_47875c:
    // 0x47875c: 0x8f84c068  lw          $a0, -0x3F98($gp)
    ctx->pc = 0x47875cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951016)));
label_478760:
    // 0x478760: 0x27a50168  addiu       $a1, $sp, 0x168
    ctx->pc = 0x478760u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 360));
label_478764:
    // 0x478764: 0xc11de00  jal         func_477800
label_478768:
    if (ctx->pc == 0x478768u) {
        ctx->pc = 0x47876Cu;
        goto label_47876c;
    }
    ctx->pc = 0x478764u;
    SET_GPR_U32(ctx, 31, 0x47876Cu);
    ctx->pc = 0x477800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x477800u, 0x478764u, 0x47876Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47876Cu;
label_47876c:
    // 0x47876c: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x47876cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
label_478770:
    // 0x478770: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x478770u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_478774:
    // 0x478774: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x478774u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_478778:
    // 0x478778: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x478778u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_47877c:
    // 0x47877c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x47877cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_478780:
    // 0x478780: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x478780u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_478784:
    // 0x478784: 0x27bd01a0  addiu       $sp, $sp, 0x1A0
    ctx->pc = 0x478784u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_478788:
    // 0x478788: 0x3e00008  jr          $ra
label_47878c:
    if (ctx->pc == 0x47878Cu) {
        ctx->pc = 0x478790u;
        goto label_fallthrough_0x478788;
    }
    ctx->pc = 0x478788u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x478788u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x478788:
    ctx->pc = 0x478790u;
}
