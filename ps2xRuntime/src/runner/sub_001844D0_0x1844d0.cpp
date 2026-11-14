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

// Function: sub_001844D0
// Address: 0x1844d0 - 0x184810
void sub_001844D0_0x1844d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001844D0_0x1844d0");
#endif

    switch (ctx->pc) {
        case 0x1844d0u: goto label_1844d0;
        case 0x1844d4u: goto label_1844d4;
        case 0x1844d8u: goto label_1844d8;
        case 0x1844dcu: goto label_1844dc;
        case 0x1844e0u: goto label_1844e0;
        case 0x1844e4u: goto label_1844e4;
        case 0x1844e8u: goto label_1844e8;
        case 0x1844ecu: goto label_1844ec;
        case 0x1844f0u: goto label_1844f0;
        case 0x1844f4u: goto label_1844f4;
        case 0x1844f8u: goto label_1844f8;
        case 0x1844fcu: goto label_1844fc;
        case 0x184500u: goto label_184500;
        case 0x184504u: goto label_184504;
        case 0x184508u: goto label_184508;
        case 0x18450cu: goto label_18450c;
        case 0x184510u: goto label_184510;
        case 0x184514u: goto label_184514;
        case 0x184518u: goto label_184518;
        case 0x18451cu: goto label_18451c;
        case 0x184520u: goto label_184520;
        case 0x184524u: goto label_184524;
        case 0x184528u: goto label_184528;
        case 0x18452cu: goto label_18452c;
        case 0x184530u: goto label_184530;
        case 0x184534u: goto label_184534;
        case 0x184538u: goto label_184538;
        case 0x18453cu: goto label_18453c;
        case 0x184540u: goto label_184540;
        case 0x184544u: goto label_184544;
        case 0x184548u: goto label_184548;
        case 0x18454cu: goto label_18454c;
        case 0x184550u: goto label_184550;
        case 0x184554u: goto label_184554;
        case 0x184558u: goto label_184558;
        case 0x18455cu: goto label_18455c;
        case 0x184560u: goto label_184560;
        case 0x184564u: goto label_184564;
        case 0x184568u: goto label_184568;
        case 0x18456cu: goto label_18456c;
        case 0x184570u: goto label_184570;
        case 0x184574u: goto label_184574;
        case 0x184578u: goto label_184578;
        case 0x18457cu: goto label_18457c;
        case 0x184580u: goto label_184580;
        case 0x184584u: goto label_184584;
        case 0x184588u: goto label_184588;
        case 0x18458cu: goto label_18458c;
        case 0x184590u: goto label_184590;
        case 0x184594u: goto label_184594;
        case 0x184598u: goto label_184598;
        case 0x18459cu: goto label_18459c;
        case 0x1845a0u: goto label_1845a0;
        case 0x1845a4u: goto label_1845a4;
        case 0x1845a8u: goto label_1845a8;
        case 0x1845acu: goto label_1845ac;
        case 0x1845b0u: goto label_1845b0;
        case 0x1845b4u: goto label_1845b4;
        case 0x1845b8u: goto label_1845b8;
        case 0x1845bcu: goto label_1845bc;
        case 0x1845c0u: goto label_1845c0;
        case 0x1845c4u: goto label_1845c4;
        case 0x1845c8u: goto label_1845c8;
        case 0x1845ccu: goto label_1845cc;
        case 0x1845d0u: goto label_1845d0;
        case 0x1845d4u: goto label_1845d4;
        case 0x1845d8u: goto label_1845d8;
        case 0x1845dcu: goto label_1845dc;
        case 0x1845e0u: goto label_1845e0;
        case 0x1845e4u: goto label_1845e4;
        case 0x1845e8u: goto label_1845e8;
        case 0x1845ecu: goto label_1845ec;
        case 0x1845f0u: goto label_1845f0;
        case 0x1845f4u: goto label_1845f4;
        case 0x1845f8u: goto label_1845f8;
        case 0x1845fcu: goto label_1845fc;
        case 0x184600u: goto label_184600;
        case 0x184604u: goto label_184604;
        case 0x184608u: goto label_184608;
        case 0x18460cu: goto label_18460c;
        case 0x184610u: goto label_184610;
        case 0x184614u: goto label_184614;
        case 0x184618u: goto label_184618;
        case 0x18461cu: goto label_18461c;
        case 0x184620u: goto label_184620;
        case 0x184624u: goto label_184624;
        case 0x184628u: goto label_184628;
        case 0x18462cu: goto label_18462c;
        case 0x184630u: goto label_184630;
        case 0x184634u: goto label_184634;
        case 0x184638u: goto label_184638;
        case 0x18463cu: goto label_18463c;
        case 0x184640u: goto label_184640;
        case 0x184644u: goto label_184644;
        case 0x184648u: goto label_184648;
        case 0x18464cu: goto label_18464c;
        case 0x184650u: goto label_184650;
        case 0x184654u: goto label_184654;
        case 0x184658u: goto label_184658;
        case 0x18465cu: goto label_18465c;
        case 0x184660u: goto label_184660;
        case 0x184664u: goto label_184664;
        case 0x184668u: goto label_184668;
        case 0x18466cu: goto label_18466c;
        case 0x184670u: goto label_184670;
        case 0x184674u: goto label_184674;
        case 0x184678u: goto label_184678;
        case 0x18467cu: goto label_18467c;
        case 0x184680u: goto label_184680;
        case 0x184684u: goto label_184684;
        case 0x184688u: goto label_184688;
        case 0x18468cu: goto label_18468c;
        case 0x184690u: goto label_184690;
        case 0x184694u: goto label_184694;
        case 0x184698u: goto label_184698;
        case 0x18469cu: goto label_18469c;
        case 0x1846a0u: goto label_1846a0;
        case 0x1846a4u: goto label_1846a4;
        case 0x1846a8u: goto label_1846a8;
        case 0x1846acu: goto label_1846ac;
        case 0x1846b0u: goto label_1846b0;
        case 0x1846b4u: goto label_1846b4;
        case 0x1846b8u: goto label_1846b8;
        case 0x1846bcu: goto label_1846bc;
        case 0x1846c0u: goto label_1846c0;
        case 0x1846c4u: goto label_1846c4;
        case 0x1846c8u: goto label_1846c8;
        case 0x1846ccu: goto label_1846cc;
        case 0x1846d0u: goto label_1846d0;
        case 0x1846d4u: goto label_1846d4;
        case 0x1846d8u: goto label_1846d8;
        case 0x1846dcu: goto label_1846dc;
        case 0x1846e0u: goto label_1846e0;
        case 0x1846e4u: goto label_1846e4;
        case 0x1846e8u: goto label_1846e8;
        case 0x1846ecu: goto label_1846ec;
        case 0x1846f0u: goto label_1846f0;
        case 0x1846f4u: goto label_1846f4;
        case 0x1846f8u: goto label_1846f8;
        case 0x1846fcu: goto label_1846fc;
        case 0x184700u: goto label_184700;
        case 0x184704u: goto label_184704;
        case 0x184708u: goto label_184708;
        case 0x18470cu: goto label_18470c;
        case 0x184710u: goto label_184710;
        case 0x184714u: goto label_184714;
        case 0x184718u: goto label_184718;
        case 0x18471cu: goto label_18471c;
        case 0x184720u: goto label_184720;
        case 0x184724u: goto label_184724;
        case 0x184728u: goto label_184728;
        case 0x18472cu: goto label_18472c;
        case 0x184730u: goto label_184730;
        case 0x184734u: goto label_184734;
        case 0x184738u: goto label_184738;
        case 0x18473cu: goto label_18473c;
        case 0x184740u: goto label_184740;
        case 0x184744u: goto label_184744;
        case 0x184748u: goto label_184748;
        case 0x18474cu: goto label_18474c;
        case 0x184750u: goto label_184750;
        case 0x184754u: goto label_184754;
        case 0x184758u: goto label_184758;
        case 0x18475cu: goto label_18475c;
        case 0x184760u: goto label_184760;
        case 0x184764u: goto label_184764;
        case 0x184768u: goto label_184768;
        case 0x18476cu: goto label_18476c;
        case 0x184770u: goto label_184770;
        case 0x184774u: goto label_184774;
        case 0x184778u: goto label_184778;
        case 0x18477cu: goto label_18477c;
        case 0x184780u: goto label_184780;
        case 0x184784u: goto label_184784;
        case 0x184788u: goto label_184788;
        case 0x18478cu: goto label_18478c;
        case 0x184790u: goto label_184790;
        case 0x184794u: goto label_184794;
        case 0x184798u: goto label_184798;
        case 0x18479cu: goto label_18479c;
        case 0x1847a0u: goto label_1847a0;
        case 0x1847a4u: goto label_1847a4;
        case 0x1847a8u: goto label_1847a8;
        case 0x1847acu: goto label_1847ac;
        case 0x1847b0u: goto label_1847b0;
        case 0x1847b4u: goto label_1847b4;
        case 0x1847b8u: goto label_1847b8;
        case 0x1847bcu: goto label_1847bc;
        case 0x1847c0u: goto label_1847c0;
        case 0x1847c4u: goto label_1847c4;
        case 0x1847c8u: goto label_1847c8;
        case 0x1847ccu: goto label_1847cc;
        case 0x1847d0u: goto label_1847d0;
        case 0x1847d4u: goto label_1847d4;
        case 0x1847d8u: goto label_1847d8;
        case 0x1847dcu: goto label_1847dc;
        case 0x1847e0u: goto label_1847e0;
        case 0x1847e4u: goto label_1847e4;
        case 0x1847e8u: goto label_1847e8;
        case 0x1847ecu: goto label_1847ec;
        case 0x1847f0u: goto label_1847f0;
        case 0x1847f4u: goto label_1847f4;
        case 0x1847f8u: goto label_1847f8;
        case 0x1847fcu: goto label_1847fc;
        case 0x184800u: goto label_184800;
        case 0x184804u: goto label_184804;
        case 0x184808u: goto label_184808;
        case 0x18480cu: goto label_18480c;
        default: break;
    }

    ctx->pc = 0x1844d0u;

label_1844d0:
    // 0x1844d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1844d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1844d4:
    // 0x1844d4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1844d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_1844d8:
    // 0x1844d8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1844d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1844dc:
    // 0x1844dc: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1844dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1844e0:
    // 0x1844e0: 0x3e00008  jr          $ra
label_1844e4:
    if (ctx->pc == 0x1844E4u) {
        ctx->pc = 0x1844E8u;
        goto label_1844e8;
    }
    ctx->pc = 0x1844E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1844E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1844E8u;
label_1844e8:
    // 0x1844e8: 0x0  nop
    ctx->pc = 0x1844e8u;
    // NOP
label_1844ec:
    // 0x1844ec: 0x0  nop
    ctx->pc = 0x1844ecu;
    // NOP
label_1844f0:
    // 0x1844f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1844f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1844f4:
    // 0x1844f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1844f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1844f8:
    // 0x1844f8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1844f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_1844fc:
    // 0x1844fc: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x1844fcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
label_184500:
    // 0x184500: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x184500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_184504:
    // 0x184504: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
label_184508:
    if (ctx->pc == 0x184508u) {
        ctx->pc = 0x18450Cu;
        goto label_18450c;
    }
    ctx->pc = 0x184504u;
    {
        const bool branch_taken_0x184504 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x184504) {
            ctx->pc = 0x184594u;
            goto label_184594;
        }
    }
    ctx->pc = 0x18450Cu;
label_18450c:
    // 0x18450c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x18450cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_184510:
    // 0x184510: 0x24633fb0  addiu       $v1, $v1, 0x3FB0
    ctx->pc = 0x184510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16304));
label_184514:
    // 0x184514: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x184514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_184518:
    // 0x184518: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x184518u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_18451c:
    // 0x18451c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x18451cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_184520:
    // 0x184520: 0x24440084  addiu       $a0, $v0, 0x84
    ctx->pc = 0x184520u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 132));
label_184524:
    // 0x184524: 0x3c050018  lui         $a1, 0x18
    ctx->pc = 0x184524u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)24 << 16));
label_184528:
    // 0x184528: 0x24a53d20  addiu       $a1, $a1, 0x3D20
    ctx->pc = 0x184528u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15648));
label_18452c:
    // 0x18452c: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x18452cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_184530:
    // 0x184530: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x184530u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_184534:
    // 0x184534: 0xc0b9fd4  jal         func_2E7F50
label_184538:
    if (ctx->pc == 0x184538u) {
        ctx->pc = 0x18453Cu;
        goto label_18453c;
    }
    ctx->pc = 0x184534u;
    SET_GPR_U32(ctx, 31, 0x18453Cu);
    ctx->pc = 0x2E7F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E7F50u, 0x184534u, 0x18453Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18453Cu;
label_18453c:
    // 0x18453c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x18453cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_184540:
    // 0x184540: 0x24440078  addiu       $a0, $v0, 0x78
    ctx->pc = 0x184540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_184544:
    // 0x184544: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x184544u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_184548:
    // 0x184548: 0xc060e48  jal         func_183920
label_18454c:
    if (ctx->pc == 0x18454Cu) {
        ctx->pc = 0x184550u;
        goto label_184550;
    }
    ctx->pc = 0x184548u;
    SET_GPR_U32(ctx, 31, 0x184550u);
    ctx->pc = 0x183920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183920u, 0x184548u, 0x184550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184550u;
label_184550:
    // 0x184550: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x184550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_184554:
    // 0x184554: 0x24440068  addiu       $a0, $v0, 0x68
    ctx->pc = 0x184554u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
label_184558:
    // 0x184558: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x184558u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_18455c:
    // 0x18455c: 0xc060ee8  jal         func_183BA0
label_184560:
    if (ctx->pc == 0x184560u) {
        ctx->pc = 0x184564u;
        goto label_184564;
    }
    ctx->pc = 0x18455Cu;
    SET_GPR_U32(ctx, 31, 0x184564u);
    ctx->pc = 0x183BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183BA0u, 0x18455Cu, 0x184564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184564u;
label_184564:
    // 0x184564: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x184564u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_184568:
    // 0x184568: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x184568u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18456c:
    // 0x18456c: 0xc055950  jal         func_156540
label_184570:
    if (ctx->pc == 0x184570u) {
        ctx->pc = 0x184574u;
        goto label_184574;
    }
    ctx->pc = 0x18456Cu;
    SET_GPR_U32(ctx, 31, 0x184574u);
    ctx->pc = 0x156540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156540u, 0x18456Cu, 0x184574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184574u;
label_184574:
    // 0x184574: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x184574u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
label_184578:
    // 0x184578: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x184578u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_18457c:
    // 0x18457c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x18457cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_184580:
    // 0x184580: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
label_184584:
    if (ctx->pc == 0x184584u) {
        ctx->pc = 0x184588u;
        goto label_184588;
    }
    ctx->pc = 0x184580u;
    {
        const bool branch_taken_0x184580 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x184580) {
            ctx->pc = 0x184594u;
            goto label_184594;
        }
    }
    ctx->pc = 0x184588u;
label_184588:
    // 0x184588: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x184588u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_18458c:
    // 0x18458c: 0xc0ba070  jal         func_2E81C0
label_184590:
    if (ctx->pc == 0x184590u) {
        ctx->pc = 0x184594u;
        goto label_184594;
    }
    ctx->pc = 0x18458Cu;
    SET_GPR_U32(ctx, 31, 0x184594u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x18458Cu, 0x184594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184594u;
label_184594:
    // 0x184594: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x184594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_184598:
    // 0x184598: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x184598u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_18459c:
    // 0x18459c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x18459cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1845a0:
    // 0x1845a0: 0x3e00008  jr          $ra
label_1845a4:
    if (ctx->pc == 0x1845A4u) {
        ctx->pc = 0x1845A8u;
        goto label_1845a8;
    }
    ctx->pc = 0x1845A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1845A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1845A8u;
label_1845a8:
    // 0x1845a8: 0x0  nop
    ctx->pc = 0x1845a8u;
    // NOP
label_1845ac:
    // 0x1845ac: 0x0  nop
    ctx->pc = 0x1845acu;
    // NOP
label_1845b0:
    // 0x1845b0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1845b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_1845b4:
    // 0x1845b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1845b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1845b8:
    // 0x1845b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1845b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1845bc:
    // 0x1845bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1845bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1845c0:
    // 0x1845c0: 0xafa40090  sw          $a0, 0x90($sp)
    ctx->pc = 0x1845c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 4));
label_1845c4:
    // 0x1845c4: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x1845c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_1845c8:
    // 0x1845c8: 0xc055974  jal         func_1565D0
label_1845cc:
    if (ctx->pc == 0x1845CCu) {
        ctx->pc = 0x1845D0u;
        goto label_1845d0;
    }
    ctx->pc = 0x1845C8u;
    SET_GPR_U32(ctx, 31, 0x1845D0u);
    ctx->pc = 0x1565D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1565D0u, 0x1845C8u, 0x1845D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1845D0u;
label_1845d0:
    // 0x1845d0: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x1845d0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1845d4:
    // 0x1845d4: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x1845d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_1845d8:
    // 0x1845d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1845d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1845dc:
    // 0x1845dc: 0x14620085  bne         $v1, $v0, . + 4 + (0x85 << 2)
label_1845e0:
    if (ctx->pc == 0x1845E0u) {
        ctx->pc = 0x1845E4u;
        goto label_1845e4;
    }
    ctx->pc = 0x1845DCu;
    {
        const bool branch_taken_0x1845dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1845dc) {
            ctx->pc = 0x1847F4u;
            goto label_1847f4;
        }
    }
    ctx->pc = 0x1845E4u;
label_1845e4:
    // 0x1845e4: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x1845e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_1845e8:
    // 0x1845e8: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1845e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_1845ec:
    // 0x1845ec: 0x24a55110  addiu       $a1, $a1, 0x5110
    ctx->pc = 0x1845ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20752));
label_1845f0:
    // 0x1845f0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1845f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1845f4:
    // 0x1845f4: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x1845f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_1845f8:
    // 0x1845f8: 0x320f809  jalr        $t9
label_1845fc:
    if (ctx->pc == 0x1845FCu) {
        ctx->pc = 0x184600u;
        goto label_184600;
    }
    ctx->pc = 0x1845F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x184600u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1845F8u, 0x184600u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x184600u;
label_184600:
    // 0x184600: 0x3c06004e  lui         $a2, 0x4E
    ctx->pc = 0x184600u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)78 << 16));
label_184604:
    // 0x184604: 0x24c650c0  addiu       $a2, $a2, 0x50C0
    ctx->pc = 0x184604u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20672));
label_184608:
    // 0x184608: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x184608u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_18460c:
    // 0x18460c: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x18460cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_184610:
    // 0x184610: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x184610u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_184614:
    // 0x184614: 0x80c20001  lb          $v0, 0x1($a2)
    ctx->pc = 0x184614u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
label_184618:
    // 0x184618: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x184618u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
label_18461c:
    // 0x18461c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x18461cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_184620:
    // 0x184620: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x184620u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
label_184624:
    // 0x184624: 0xa0a20001  sb          $v0, 0x1($a1)
    ctx->pc = 0x184624u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 2));
label_184628:
    // 0x184628: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x184628u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
label_18462c:
    // 0x18462c: 0x1c80fff8  bgtz        $a0, . + 4 + (-0x8 << 2)
label_184630:
    if (ctx->pc == 0x184630u) {
        ctx->pc = 0x184634u;
        goto label_184634;
    }
    ctx->pc = 0x18462Cu;
    {
        const bool branch_taken_0x18462c = (GPR_S32(ctx, 4) > 0);
        if (branch_taken_0x18462c) {
            ctx->pc = 0x184610u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_184610;
        }
    }
    ctx->pc = 0x184634u;
label_184634:
    // 0x184634: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x184634u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_184638:
    // 0x184638: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x184638u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_18463c:
    // 0x18463c: 0xc0552e4  jal         func_154B90
label_184640:
    if (ctx->pc == 0x184640u) {
        ctx->pc = 0x184644u;
        goto label_184644;
    }
    ctx->pc = 0x18463Cu;
    SET_GPR_U32(ctx, 31, 0x184644u);
    ctx->pc = 0x154B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B90u, 0x18463Cu, 0x184644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184644u;
label_184644:
    // 0x184644: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x184644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_184648:
    // 0x184648: 0xac620050  sw          $v0, 0x50($v1)
    ctx->pc = 0x184648u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 80), GPR_U32(ctx, 2));
label_18464c:
    // 0x18464c: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x18464cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_184650:
    // 0x184650: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x184650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_184654:
    // 0x184654: 0x8c450050  lw          $a1, 0x50($v0)
    ctx->pc = 0x184654u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
label_184658:
    // 0x184658: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x184658u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_18465c:
    // 0x18465c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18465cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_184660:
    // 0x184660: 0xc08c8dc  jal         func_232370
label_184664:
    if (ctx->pc == 0x184664u) {
        ctx->pc = 0x184668u;
        goto label_184668;
    }
    ctx->pc = 0x184660u;
    SET_GPR_U32(ctx, 31, 0x184668u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x184660u, 0x184668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184668u;
label_184668:
    // 0x184668: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x184668u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_18466c:
    // 0x18466c: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x18466cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_184670:
    // 0x184670: 0xc0552e4  jal         func_154B90
label_184674:
    if (ctx->pc == 0x184674u) {
        ctx->pc = 0x184678u;
        goto label_184678;
    }
    ctx->pc = 0x184670u;
    SET_GPR_U32(ctx, 31, 0x184678u);
    ctx->pc = 0x154B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B90u, 0x184670u, 0x184678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184678u;
label_184678:
    // 0x184678: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x184678u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18467c:
    // 0x18467c: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x18467cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_184680:
    // 0x184680: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x184680u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_184684:
    // 0x184684: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x184684u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_184688:
    // 0x184688: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x184688u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18468c:
    // 0x18468c: 0xc08c8dc  jal         func_232370
label_184690:
    if (ctx->pc == 0x184690u) {
        ctx->pc = 0x184694u;
        goto label_184694;
    }
    ctx->pc = 0x18468Cu;
    SET_GPR_U32(ctx, 31, 0x184694u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x18468Cu, 0x184694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184694u;
label_184694:
    // 0x184694: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x184694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_184698:
    // 0x184698: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x184698u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_18469c:
    // 0x18469c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x18469cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1846a0:
    // 0x1846a0: 0x27a60088  addiu       $a2, $sp, 0x88
    ctx->pc = 0x1846a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
label_1846a4:
    // 0x1846a4: 0xc08c744  jal         func_231D10
label_1846a8:
    if (ctx->pc == 0x1846A8u) {
        ctx->pc = 0x1846ACu;
        goto label_1846ac;
    }
    ctx->pc = 0x1846A4u;
    SET_GPR_U32(ctx, 31, 0x1846ACu);
    ctx->pc = 0x231D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231D10u, 0x1846A4u, 0x1846ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1846ACu;
label_1846ac:
    // 0x1846ac: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1846acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_1846b0:
    // 0x1846b0: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x1846b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1846b4:
    // 0x1846b4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1846b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1846b8:
    // 0x1846b8: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x1846b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1846bc:
    // 0x1846bc: 0xc08c688  jal         func_231A20
label_1846c0:
    if (ctx->pc == 0x1846C0u) {
        ctx->pc = 0x1846C4u;
        goto label_1846c4;
    }
    ctx->pc = 0x1846BCu;
    SET_GPR_U32(ctx, 31, 0x1846C4u);
    ctx->pc = 0x231A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A20u, 0x1846BCu, 0x1846C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1846C4u;
label_1846c4:
    // 0x1846c4: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x1846c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1846c8:
    // 0x1846c8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1846c8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1846cc:
    // 0x1846cc: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1846ccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_1846d0:
    // 0x1846d0: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1846d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_1846d4:
    // 0x1846d4: 0xac430054  sw          $v1, 0x54($v0)
    ctx->pc = 0x1846d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 84), GPR_U32(ctx, 3));
label_1846d8:
    // 0x1846d8: 0xc7a0008c  lwc1        $f0, 0x8C($sp)
    ctx->pc = 0x1846d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1846dc:
    // 0x1846dc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1846dcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1846e0:
    // 0x1846e0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1846e0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_1846e4:
    // 0x1846e4: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1846e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_1846e8:
    // 0x1846e8: 0xac430058  sw          $v1, 0x58($v0)
    ctx->pc = 0x1846e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 88), GPR_U32(ctx, 3));
label_1846ec:
    // 0x1846ec: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x1846ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1846f0:
    // 0x1846f0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1846f0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1846f4:
    // 0x1846f4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1846f4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_1846f8:
    // 0x1846f8: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1846f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_1846fc:
    // 0x1846fc: 0xac43005c  sw          $v1, 0x5C($v0)
    ctx->pc = 0x1846fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 92), GPR_U32(ctx, 3));
label_184700:
    // 0x184700: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x184700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_184704:
    // 0x184704: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x184704u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_184708:
    // 0x184708: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x184708u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_18470c:
    // 0x18470c: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x18470cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_184710:
    // 0x184710: 0xac430060  sw          $v1, 0x60($v0)
    ctx->pc = 0x184710u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 3));
label_184714:
    // 0x184714: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x184714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_184718:
    // 0x184718: 0x24440078  addiu       $a0, $v0, 0x78
    ctx->pc = 0x184718u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_18471c:
    // 0x18471c: 0xc061204  jal         func_184810
label_184720:
    if (ctx->pc == 0x184720u) {
        ctx->pc = 0x184724u;
        goto label_184724;
    }
    ctx->pc = 0x18471Cu;
    SET_GPR_U32(ctx, 31, 0x184724u);
    ctx->pc = 0x184810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184810u, 0x18471Cu, 0x184724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184724u;
label_184724:
    // 0x184724: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x184724u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
label_184728:
    // 0x184728: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x184728u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18472c:
    // 0x18472c: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x18472cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_184730:
    // 0x184730: 0xe4400064  swc1        $f0, 0x64($v0)
    ctx->pc = 0x184730u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 100), bits); }
label_184734:
    // 0x184734: 0x8f82bb80  lw          $v0, -0x4480($gp)
    ctx->pc = 0x184734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
label_184738:
    // 0x184738: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x184738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_18473c:
    // 0x18473c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_184740:
    if (ctx->pc == 0x184740u) {
        ctx->pc = 0x184744u;
        goto label_184744;
    }
    ctx->pc = 0x18473Cu;
    {
        const bool branch_taken_0x18473c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x18473c) {
            ctx->pc = 0x184758u;
            goto label_184758;
        }
    }
    ctx->pc = 0x184744u;
label_184744:
    // 0x184744: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x184744u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_184748:
    // 0x184748: 0x0  nop
    ctx->pc = 0x184748u;
    // NOP
label_18474c:
    // 0x18474c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x18474cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_184750:
    // 0x184750: 0x10000008  b           . + 4 + (0x8 << 2)
label_184754:
    if (ctx->pc == 0x184754u) {
        ctx->pc = 0x184758u;
        goto label_184758;
    }
    ctx->pc = 0x184750u;
    {
        const bool branch_taken_0x184750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x184750) {
            ctx->pc = 0x184774u;
            goto label_184774;
        }
    }
    ctx->pc = 0x184758u;
label_184758:
    // 0x184758: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x184758u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_18475c:
    // 0x18475c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x18475cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_184760:
    // 0x184760: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x184760u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_184764:
    // 0x184764: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x184764u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_184768:
    // 0x184768: 0x0  nop
    ctx->pc = 0x184768u;
    // NOP
label_18476c:
    // 0x18476c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x18476cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_184770:
    // 0x184770: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x184770u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_184774:
    // 0x184774: 0x3c0243e0  lui         $v0, 0x43E0
    ctx->pc = 0x184774u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17376 << 16));
label_184778:
    // 0x184778: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x184778u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18477c:
    // 0x18477c: 0x0  nop
    ctx->pc = 0x18477cu;
    // NOP
label_184780:
    // 0x184780: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x184780u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_184784:
    // 0x184784: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x184784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_184788:
    // 0x184788: 0xc4400064  lwc1        $f0, 0x64($v0)
    ctx->pc = 0x184788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18478c:
    // 0x18478c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x18478cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_184790:
    // 0x184790: 0xe4400064  swc1        $f0, 0x64($v0)
    ctx->pc = 0x184790u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 100), bits); }
label_184794:
    // 0x184794: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x184794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_184798:
    // 0x184798: 0xa04000d4  sb          $zero, 0xD4($v0)
    ctx->pc = 0x184798u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 212), (uint8_t)GPR_U32(ctx, 0));
label_18479c:
    // 0x18479c: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x18479cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_1847a0:
    // 0x1847a0: 0x2444009c  addiu       $a0, $v0, 0x9C
    ctx->pc = 0x1847a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 156));
label_1847a4:
    // 0x1847a4: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1847a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_1847a8:
    // 0x1847a8: 0x24a55130  addiu       $a1, $a1, 0x5130
    ctx->pc = 0x1847a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20784));
label_1847ac:
    // 0x1847ac: 0xc0bc5c6  jal         func_2F1718
label_1847b0:
    if (ctx->pc == 0x1847B0u) {
        ctx->pc = 0x1847B4u;
        goto label_1847b4;
    }
    ctx->pc = 0x1847ACu;
    SET_GPR_U32(ctx, 31, 0x1847B4u);
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x1847ACu, 0x1847B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1847B4u;
label_1847b4:
    // 0x1847b4: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x1847b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1847b8:
    // 0x1847b8: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1847b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_1847bc:
    // 0x1847bc: 0xac4300bc  sw          $v1, 0xBC($v0)
    ctx->pc = 0x1847bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 188), GPR_U32(ctx, 3));
label_1847c0:
    // 0x1847c0: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x1847c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
label_1847c4:
    // 0x1847c4: 0x24425100  addiu       $v0, $v0, 0x5100
    ctx->pc = 0x1847c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20736));
label_1847c8:
    // 0x1847c8: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x1847c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1847cc:
    // 0x1847cc: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1847ccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1847d0:
    // 0x1847d0: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x1847d0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
label_1847d4:
    // 0x1847d4: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1847d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_1847d8:
    // 0x1847d8: 0x244400c0  addiu       $a0, $v0, 0xC0
    ctx->pc = 0x1847d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
label_1847dc:
    // 0x1847dc: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1847dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1847e0:
    // 0x1847e0: 0xc059ff0  jal         func_167FC0
label_1847e4:
    if (ctx->pc == 0x1847E4u) {
        ctx->pc = 0x1847E8u;
        goto label_1847e8;
    }
    ctx->pc = 0x1847E0u;
    SET_GPR_U32(ctx, 31, 0x1847E8u);
    ctx->pc = 0x167FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167FC0u, 0x1847E0u, 0x1847E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1847E8u;
label_1847e8:
    // 0x1847e8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1847e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1847ec:
    // 0x1847ec: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1847ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_1847f0:
    // 0x1847f0: 0xac4300d0  sw          $v1, 0xD0($v0)
    ctx->pc = 0x1847f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 208), GPR_U32(ctx, 3));
label_1847f4:
    // 0x1847f4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1847f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1847f8:
    // 0x1847f8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1847f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1847fc:
    // 0x1847fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1847fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_184800:
    // 0x184800: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x184800u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_184804:
    // 0x184804: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x184804u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_184808:
    // 0x184808: 0x3e00008  jr          $ra
label_18480c:
    if (ctx->pc == 0x18480Cu) {
        ctx->pc = 0x184810u;
        goto label_fallthrough_0x184808;
    }
    ctx->pc = 0x184808u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x184808u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x184808:
    ctx->pc = 0x184810u;
}
