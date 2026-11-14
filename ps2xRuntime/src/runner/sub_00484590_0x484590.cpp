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

// Function: sub_00484590
// Address: 0x484590 - 0x484920
void sub_00484590_0x484590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00484590_0x484590");
#endif

    switch (ctx->pc) {
        case 0x484590u: goto label_484590;
        case 0x484594u: goto label_484594;
        case 0x484598u: goto label_484598;
        case 0x48459cu: goto label_48459c;
        case 0x4845a0u: goto label_4845a0;
        case 0x4845a4u: goto label_4845a4;
        case 0x4845a8u: goto label_4845a8;
        case 0x4845acu: goto label_4845ac;
        case 0x4845b0u: goto label_4845b0;
        case 0x4845b4u: goto label_4845b4;
        case 0x4845b8u: goto label_4845b8;
        case 0x4845bcu: goto label_4845bc;
        case 0x4845c0u: goto label_4845c0;
        case 0x4845c4u: goto label_4845c4;
        case 0x4845c8u: goto label_4845c8;
        case 0x4845ccu: goto label_4845cc;
        case 0x4845d0u: goto label_4845d0;
        case 0x4845d4u: goto label_4845d4;
        case 0x4845d8u: goto label_4845d8;
        case 0x4845dcu: goto label_4845dc;
        case 0x4845e0u: goto label_4845e0;
        case 0x4845e4u: goto label_4845e4;
        case 0x4845e8u: goto label_4845e8;
        case 0x4845ecu: goto label_4845ec;
        case 0x4845f0u: goto label_4845f0;
        case 0x4845f4u: goto label_4845f4;
        case 0x4845f8u: goto label_4845f8;
        case 0x4845fcu: goto label_4845fc;
        case 0x484600u: goto label_484600;
        case 0x484604u: goto label_484604;
        case 0x484608u: goto label_484608;
        case 0x48460cu: goto label_48460c;
        case 0x484610u: goto label_484610;
        case 0x484614u: goto label_484614;
        case 0x484618u: goto label_484618;
        case 0x48461cu: goto label_48461c;
        case 0x484620u: goto label_484620;
        case 0x484624u: goto label_484624;
        case 0x484628u: goto label_484628;
        case 0x48462cu: goto label_48462c;
        case 0x484630u: goto label_484630;
        case 0x484634u: goto label_484634;
        case 0x484638u: goto label_484638;
        case 0x48463cu: goto label_48463c;
        case 0x484640u: goto label_484640;
        case 0x484644u: goto label_484644;
        case 0x484648u: goto label_484648;
        case 0x48464cu: goto label_48464c;
        case 0x484650u: goto label_484650;
        case 0x484654u: goto label_484654;
        case 0x484658u: goto label_484658;
        case 0x48465cu: goto label_48465c;
        case 0x484660u: goto label_484660;
        case 0x484664u: goto label_484664;
        case 0x484668u: goto label_484668;
        case 0x48466cu: goto label_48466c;
        case 0x484670u: goto label_484670;
        case 0x484674u: goto label_484674;
        case 0x484678u: goto label_484678;
        case 0x48467cu: goto label_48467c;
        case 0x484680u: goto label_484680;
        case 0x484684u: goto label_484684;
        case 0x484688u: goto label_484688;
        case 0x48468cu: goto label_48468c;
        case 0x484690u: goto label_484690;
        case 0x484694u: goto label_484694;
        case 0x484698u: goto label_484698;
        case 0x48469cu: goto label_48469c;
        case 0x4846a0u: goto label_4846a0;
        case 0x4846a4u: goto label_4846a4;
        case 0x4846a8u: goto label_4846a8;
        case 0x4846acu: goto label_4846ac;
        case 0x4846b0u: goto label_4846b0;
        case 0x4846b4u: goto label_4846b4;
        case 0x4846b8u: goto label_4846b8;
        case 0x4846bcu: goto label_4846bc;
        case 0x4846c0u: goto label_4846c0;
        case 0x4846c4u: goto label_4846c4;
        case 0x4846c8u: goto label_4846c8;
        case 0x4846ccu: goto label_4846cc;
        case 0x4846d0u: goto label_4846d0;
        case 0x4846d4u: goto label_4846d4;
        case 0x4846d8u: goto label_4846d8;
        case 0x4846dcu: goto label_4846dc;
        case 0x4846e0u: goto label_4846e0;
        case 0x4846e4u: goto label_4846e4;
        case 0x4846e8u: goto label_4846e8;
        case 0x4846ecu: goto label_4846ec;
        case 0x4846f0u: goto label_4846f0;
        case 0x4846f4u: goto label_4846f4;
        case 0x4846f8u: goto label_4846f8;
        case 0x4846fcu: goto label_4846fc;
        case 0x484700u: goto label_484700;
        case 0x484704u: goto label_484704;
        case 0x484708u: goto label_484708;
        case 0x48470cu: goto label_48470c;
        case 0x484710u: goto label_484710;
        case 0x484714u: goto label_484714;
        case 0x484718u: goto label_484718;
        case 0x48471cu: goto label_48471c;
        case 0x484720u: goto label_484720;
        case 0x484724u: goto label_484724;
        case 0x484728u: goto label_484728;
        case 0x48472cu: goto label_48472c;
        case 0x484730u: goto label_484730;
        case 0x484734u: goto label_484734;
        case 0x484738u: goto label_484738;
        case 0x48473cu: goto label_48473c;
        case 0x484740u: goto label_484740;
        case 0x484744u: goto label_484744;
        case 0x484748u: goto label_484748;
        case 0x48474cu: goto label_48474c;
        case 0x484750u: goto label_484750;
        case 0x484754u: goto label_484754;
        case 0x484758u: goto label_484758;
        case 0x48475cu: goto label_48475c;
        case 0x484760u: goto label_484760;
        case 0x484764u: goto label_484764;
        case 0x484768u: goto label_484768;
        case 0x48476cu: goto label_48476c;
        case 0x484770u: goto label_484770;
        case 0x484774u: goto label_484774;
        case 0x484778u: goto label_484778;
        case 0x48477cu: goto label_48477c;
        case 0x484780u: goto label_484780;
        case 0x484784u: goto label_484784;
        case 0x484788u: goto label_484788;
        case 0x48478cu: goto label_48478c;
        case 0x484790u: goto label_484790;
        case 0x484794u: goto label_484794;
        case 0x484798u: goto label_484798;
        case 0x48479cu: goto label_48479c;
        case 0x4847a0u: goto label_4847a0;
        case 0x4847a4u: goto label_4847a4;
        case 0x4847a8u: goto label_4847a8;
        case 0x4847acu: goto label_4847ac;
        case 0x4847b0u: goto label_4847b0;
        case 0x4847b4u: goto label_4847b4;
        case 0x4847b8u: goto label_4847b8;
        case 0x4847bcu: goto label_4847bc;
        case 0x4847c0u: goto label_4847c0;
        case 0x4847c4u: goto label_4847c4;
        case 0x4847c8u: goto label_4847c8;
        case 0x4847ccu: goto label_4847cc;
        case 0x4847d0u: goto label_4847d0;
        case 0x4847d4u: goto label_4847d4;
        case 0x4847d8u: goto label_4847d8;
        case 0x4847dcu: goto label_4847dc;
        case 0x4847e0u: goto label_4847e0;
        case 0x4847e4u: goto label_4847e4;
        case 0x4847e8u: goto label_4847e8;
        case 0x4847ecu: goto label_4847ec;
        case 0x4847f0u: goto label_4847f0;
        case 0x4847f4u: goto label_4847f4;
        case 0x4847f8u: goto label_4847f8;
        case 0x4847fcu: goto label_4847fc;
        case 0x484800u: goto label_484800;
        case 0x484804u: goto label_484804;
        case 0x484808u: goto label_484808;
        case 0x48480cu: goto label_48480c;
        case 0x484810u: goto label_484810;
        case 0x484814u: goto label_484814;
        case 0x484818u: goto label_484818;
        case 0x48481cu: goto label_48481c;
        case 0x484820u: goto label_484820;
        case 0x484824u: goto label_484824;
        case 0x484828u: goto label_484828;
        case 0x48482cu: goto label_48482c;
        case 0x484830u: goto label_484830;
        case 0x484834u: goto label_484834;
        case 0x484838u: goto label_484838;
        case 0x48483cu: goto label_48483c;
        case 0x484840u: goto label_484840;
        case 0x484844u: goto label_484844;
        case 0x484848u: goto label_484848;
        case 0x48484cu: goto label_48484c;
        case 0x484850u: goto label_484850;
        case 0x484854u: goto label_484854;
        case 0x484858u: goto label_484858;
        case 0x48485cu: goto label_48485c;
        case 0x484860u: goto label_484860;
        case 0x484864u: goto label_484864;
        case 0x484868u: goto label_484868;
        case 0x48486cu: goto label_48486c;
        case 0x484870u: goto label_484870;
        case 0x484874u: goto label_484874;
        case 0x484878u: goto label_484878;
        case 0x48487cu: goto label_48487c;
        case 0x484880u: goto label_484880;
        case 0x484884u: goto label_484884;
        case 0x484888u: goto label_484888;
        case 0x48488cu: goto label_48488c;
        case 0x484890u: goto label_484890;
        case 0x484894u: goto label_484894;
        case 0x484898u: goto label_484898;
        case 0x48489cu: goto label_48489c;
        case 0x4848a0u: goto label_4848a0;
        case 0x4848a4u: goto label_4848a4;
        case 0x4848a8u: goto label_4848a8;
        case 0x4848acu: goto label_4848ac;
        case 0x4848b0u: goto label_4848b0;
        case 0x4848b4u: goto label_4848b4;
        case 0x4848b8u: goto label_4848b8;
        case 0x4848bcu: goto label_4848bc;
        case 0x4848c0u: goto label_4848c0;
        case 0x4848c4u: goto label_4848c4;
        case 0x4848c8u: goto label_4848c8;
        case 0x4848ccu: goto label_4848cc;
        case 0x4848d0u: goto label_4848d0;
        case 0x4848d4u: goto label_4848d4;
        case 0x4848d8u: goto label_4848d8;
        case 0x4848dcu: goto label_4848dc;
        case 0x4848e0u: goto label_4848e0;
        case 0x4848e4u: goto label_4848e4;
        case 0x4848e8u: goto label_4848e8;
        case 0x4848ecu: goto label_4848ec;
        case 0x4848f0u: goto label_4848f0;
        case 0x4848f4u: goto label_4848f4;
        case 0x4848f8u: goto label_4848f8;
        case 0x4848fcu: goto label_4848fc;
        case 0x484900u: goto label_484900;
        case 0x484904u: goto label_484904;
        case 0x484908u: goto label_484908;
        case 0x48490cu: goto label_48490c;
        case 0x484910u: goto label_484910;
        case 0x484914u: goto label_484914;
        case 0x484918u: goto label_484918;
        case 0x48491cu: goto label_48491c;
        default: break;
    }

    ctx->pc = 0x484590u;

label_484590:
    // 0x484590: 0x27bdfbc0  addiu       $sp, $sp, -0x440
    ctx->pc = 0x484590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966208));
label_484594:
    // 0x484594: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x484594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_484598:
    // 0x484598: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x484598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_48459c:
    // 0x48459c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x48459cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4845a0:
    // 0x4845a0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4845a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4845a4:
    // 0x4845a4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4845a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4845a8:
    // 0x4845a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4845a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4845ac:
    // 0x4845ac: 0xafa403f0  sw          $a0, 0x3F0($sp)
    ctx->pc = 0x4845acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1008), GPR_U32(ctx, 4));
label_4845b0:
    // 0x4845b0: 0xafa60410  sw          $a2, 0x410($sp)
    ctx->pc = 0x4845b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1040), GPR_U32(ctx, 6));
label_4845b4:
    // 0x4845b4: 0xafa70420  sw          $a3, 0x420($sp)
    ctx->pc = 0x4845b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1056), GPR_U32(ctx, 7));
label_4845b8:
    // 0x4845b8: 0xafa80430  sw          $t0, 0x430($sp)
    ctx->pc = 0x4845b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1072), GPR_U32(ctx, 8));
label_4845bc:
    // 0x4845bc: 0x8fb00430  lw          $s0, 0x430($sp)
    ctx->pc = 0x4845bcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1072)));
label_4845c0:
    // 0x4845c0: 0x8e14004c  lw          $s4, 0x4C($s0)
    ctx->pc = 0x4845c0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
label_4845c4:
    // 0x4845c4: 0x8fa30420  lw          $v1, 0x420($sp)
    ctx->pc = 0x4845c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1056)));
label_4845c8:
    // 0x4845c8: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x4845c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_4845cc:
    // 0x4845cc: 0x146200ca  bne         $v1, $v0, . + 4 + (0xCA << 2)
label_4845d0:
    if (ctx->pc == 0x4845D0u) {
        ctx->pc = 0x4845D4u;
        goto label_4845d4;
    }
    ctx->pc = 0x4845CCu;
    {
        const bool branch_taken_0x4845cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x4845cc) {
            ctx->pc = 0x4848F8u;
            goto label_4848f8;
        }
    }
    ctx->pc = 0x4845D4u;
label_4845d4:
    // 0x4845d4: 0x8fa30410  lw          $v1, 0x410($sp)
    ctx->pc = 0x4845d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1040)));
label_4845d8:
    // 0x4845d8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4845d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4845dc:
    // 0x4845dc: 0x146200c6  bne         $v1, $v0, . + 4 + (0xC6 << 2)
label_4845e0:
    if (ctx->pc == 0x4845E0u) {
        ctx->pc = 0x4845E4u;
        goto label_4845e4;
    }
    ctx->pc = 0x4845DCu;
    {
        const bool branch_taken_0x4845dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x4845dc) {
            ctx->pc = 0x4848F8u;
            goto label_4848f8;
        }
    }
    ctx->pc = 0x4845E4u;
label_4845e4:
    // 0x4845e4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4845e4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4845e8:
    // 0x4845e8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4845e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4845ec:
    // 0x4845ec: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x4845ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_4845f0:
    // 0x4845f0: 0x24425bc0  addiu       $v0, $v0, 0x5BC0
    ctx->pc = 0x4845f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23488));
label_4845f4:
    // 0x4845f4: 0xafa203e8  sw          $v0, 0x3E8($sp)
    ctx->pc = 0x4845f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1000), GPR_U32(ctx, 2));
label_4845f8:
    // 0x4845f8: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x4845f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
label_4845fc:
    // 0x4845fc: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x4845fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
label_484600:
    // 0x484600: 0xafa203ec  sw          $v0, 0x3EC($sp)
    ctx->pc = 0x484600u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1004), GPR_U32(ctx, 2));
label_484604:
    // 0x484604: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x484604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_484608:
    // 0x484608: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x484608u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_48460c:
    // 0x48460c: 0x27a603e8  addiu       $a2, $sp, 0x3E8
    ctx->pc = 0x48460cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1000));
label_484610:
    // 0x484610: 0xc10493e  jal         func_4124F8
label_484614:
    if (ctx->pc == 0x484614u) {
        ctx->pc = 0x484618u;
        goto label_484618;
    }
    ctx->pc = 0x484610u;
    SET_GPR_U32(ctx, 31, 0x484618u);
    ctx->pc = 0x4124F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4124F8u, 0x484610u, 0x484618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x484618u;
label_484618:
    // 0x484618: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x484618u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_48461c:
    // 0x48461c: 0x12600089  beqz        $s3, . + 4 + (0x89 << 2)
label_484620:
    if (ctx->pc == 0x484620u) {
        ctx->pc = 0x484624u;
        goto label_484624;
    }
    ctx->pc = 0x48461Cu;
    {
        const bool branch_taken_0x48461c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x48461c) {
            ctx->pc = 0x484844u;
            goto label_484844;
        }
    }
    ctx->pc = 0x484624u;
label_484624:
    // 0x484624: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x484624u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_484628:
    // 0x484628: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x484628u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
label_48462c:
    // 0x48462c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x48462cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_484630:
    // 0x484630: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x484630u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_484634:
    // 0x484634: 0xc103322  jal         func_40CC88
label_484638:
    if (ctx->pc == 0x484638u) {
        ctx->pc = 0x48463Cu;
        goto label_48463c;
    }
    ctx->pc = 0x484634u;
    SET_GPR_U32(ctx, 31, 0x48463Cu);
    ctx->pc = 0x40CC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40CC88u, 0x484634u, 0x48463Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48463Cu;
label_48463c:
    // 0x48463c: 0x10400056  beqz        $v0, . + 4 + (0x56 << 2)
label_484640:
    if (ctx->pc == 0x484640u) {
        ctx->pc = 0x484644u;
        goto label_484644;
    }
    ctx->pc = 0x48463Cu;
    {
        const bool branch_taken_0x48463c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48463c) {
            ctx->pc = 0x484798u;
            goto label_484798;
        }
    }
    ctx->pc = 0x484644u;
label_484644:
    // 0x484644: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x484644u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_484648:
    // 0x484648: 0xc0eeda8  jal         func_3BB6A0
label_48464c:
    if (ctx->pc == 0x48464Cu) {
        ctx->pc = 0x484650u;
        goto label_484650;
    }
    ctx->pc = 0x484648u;
    SET_GPR_U32(ctx, 31, 0x484650u);
    ctx->pc = 0x3BB6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BB6A0u, 0x484648u, 0x484650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x484650u;
label_484650:
    // 0x484650: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x484650u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_484654:
    // 0x484654: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x484654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_484658:
    // 0x484658: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x484658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_48465c:
    // 0x48465c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x48465cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_484660:
    // 0x484660: 0x1062002c  beq         $v1, $v0, . + 4 + (0x2C << 2)
label_484664:
    if (ctx->pc == 0x484664u) {
        ctx->pc = 0x484668u;
        goto label_484668;
    }
    ctx->pc = 0x484660u;
    {
        const bool branch_taken_0x484660 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x484660) {
            ctx->pc = 0x484714u;
            goto label_484714;
        }
    }
    ctx->pc = 0x484668u;
label_484668:
    // 0x484668: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x484668u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_48466c:
    // 0x48466c: 0x2405fffe  addiu       $a1, $zero, -0x2
    ctx->pc = 0x48466cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_484670:
    // 0x484670: 0x27a603d8  addiu       $a2, $sp, 0x3D8
    ctx->pc = 0x484670u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 984));
label_484674:
    // 0x484674: 0xc115ee8  jal         func_457BA0
label_484678:
    if (ctx->pc == 0x484678u) {
        ctx->pc = 0x48467Cu;
        goto label_48467c;
    }
    ctx->pc = 0x484674u;
    SET_GPR_U32(ctx, 31, 0x48467Cu);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x484674u, 0x48467Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48467Cu;
label_48467c:
    // 0x48467c: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_484680:
    if (ctx->pc == 0x484680u) {
        ctx->pc = 0x484684u;
        goto label_484684;
    }
    ctx->pc = 0x48467Cu;
    {
        const bool branch_taken_0x48467c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48467c) {
            ctx->pc = 0x484700u;
            goto label_484700;
        }
    }
    ctx->pc = 0x484684u;
label_484684:
    // 0x484684: 0x8fa203e0  lw          $v0, 0x3E0($sp)
    ctx->pc = 0x484684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 992)));
label_484688:
    // 0x484688: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_48468c:
    if (ctx->pc == 0x48468Cu) {
        ctx->pc = 0x484690u;
        goto label_484690;
    }
    ctx->pc = 0x484688u;
    {
        const bool branch_taken_0x484688 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x484688) {
            ctx->pc = 0x484700u;
            goto label_484700;
        }
    }
    ctx->pc = 0x484690u;
label_484690:
    // 0x484690: 0x27a402a0  addiu       $a0, $sp, 0x2A0
    ctx->pc = 0x484690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
label_484694:
    // 0x484694: 0x2405fffe  addiu       $a1, $zero, -0x2
    ctx->pc = 0x484694u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_484698:
    // 0x484698: 0x8fa603dc  lw          $a2, 0x3DC($sp)
    ctx->pc = 0x484698u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 988)));
label_48469c:
    // 0x48469c: 0x3c07005f  lui         $a3, 0x5F
    ctx->pc = 0x48469cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)95 << 16));
label_4846a0:
    // 0x4846a0: 0x24e73b10  addiu       $a3, $a3, 0x3B10
    ctx->pc = 0x4846a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 15120));
label_4846a4:
    // 0x4846a4: 0x240801b5  addiu       $t0, $zero, 0x1B5
    ctx->pc = 0x4846a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 437));
label_4846a8:
    // 0x4846a8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x4846a8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4846ac:
    // 0x4846ac: 0xc113940  jal         func_44E500
label_4846b0:
    if (ctx->pc == 0x4846B0u) {
        ctx->pc = 0x4846B4u;
        goto label_4846b4;
    }
    ctx->pc = 0x4846ACu;
    SET_GPR_U32(ctx, 31, 0x4846B4u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x4846ACu, 0x4846B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4846B4u;
label_4846b4:
    // 0x4846b4: 0x27a402a0  addiu       $a0, $sp, 0x2A0
    ctx->pc = 0x4846b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
label_4846b8:
    // 0x4846b8: 0x3c05005f  lui         $a1, 0x5F
    ctx->pc = 0x4846b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)95 << 16));
label_4846bc:
    // 0x4846bc: 0x24a53be0  addiu       $a1, $a1, 0x3BE0
    ctx->pc = 0x4846bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15328));
label_4846c0:
    // 0x4846c0: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x4846c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_4846c4:
    // 0x4846c4: 0xc115c24  jal         func_457090
label_4846c8:
    if (ctx->pc == 0x4846C8u) {
        ctx->pc = 0x4846CCu;
        goto label_4846cc;
    }
    ctx->pc = 0x4846C4u;
    SET_GPR_U32(ctx, 31, 0x4846CCu);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x4846C4u, 0x4846CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4846CCu;
label_4846cc:
    // 0x4846cc: 0x27a402a0  addiu       $a0, $sp, 0x2A0
    ctx->pc = 0x4846ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
label_4846d0:
    // 0x4846d0: 0x8fa203e0  lw          $v0, 0x3E0($sp)
    ctx->pc = 0x4846d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 992)));
label_4846d4:
    // 0x4846d4: 0x40f809  jalr        $v0
label_4846d8:
    if (ctx->pc == 0x4846D8u) {
        ctx->pc = 0x4846DCu;
        goto label_4846dc;
    }
    ctx->pc = 0x4846D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4846DCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4846D4u, 0x4846DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4846DCu;
label_4846dc:
    // 0x4846dc: 0x8fa202a0  lw          $v0, 0x2A0($sp)
    ctx->pc = 0x4846dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
label_4846e0:
    // 0x4846e0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_4846e4:
    if (ctx->pc == 0x4846E4u) {
        ctx->pc = 0x4846E8u;
        goto label_4846e8;
    }
    ctx->pc = 0x4846E0u;
    {
        const bool branch_taken_0x4846e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4846e0) {
            ctx->pc = 0x4846F0u;
            goto label_4846f0;
        }
    }
    ctx->pc = 0x4846E8u;
label_4846e8:
    // 0x4846e8: 0xd  break       0
    ctx->pc = 0x4846e8u;
    runtime->handleBreak(rdram, ctx);
label_4846ec:
    // 0x4846ec: 0x0  nop
    ctx->pc = 0x4846ecu;
    // NOP
label_4846f0:
    // 0x4846f0: 0x27a402a0  addiu       $a0, $sp, 0x2A0
    ctx->pc = 0x4846f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
label_4846f4:
    // 0x4846f4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x4846f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4846f8:
    // 0x4846f8: 0xc11392c  jal         func_44E4B0
label_4846fc:
    if (ctx->pc == 0x4846FCu) {
        ctx->pc = 0x484700u;
        goto label_484700;
    }
    ctx->pc = 0x4846F8u;
    SET_GPR_U32(ctx, 31, 0x484700u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x4846F8u, 0x484700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x484700u;
label_484700:
    // 0x484700: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x484700u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_484704:
    // 0x484704: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x484704u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_484708:
    // 0x484708: 0xc1208e8  jal         func_4823A0
label_48470c:
    if (ctx->pc == 0x48470Cu) {
        ctx->pc = 0x484710u;
        goto label_484710;
    }
    ctx->pc = 0x484708u;
    SET_GPR_U32(ctx, 31, 0x484710u);
    ctx->pc = 0x4823A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4823A0u, 0x484708u, 0x484710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x484710u;
label_484710:
    // 0x484710: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x484710u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_484714:
    // 0x484714: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x484714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_484718:
    // 0x484718: 0xc0ef356  jal         func_3BCD58
label_48471c:
    if (ctx->pc == 0x48471Cu) {
        ctx->pc = 0x484720u;
        goto label_484720;
    }
    ctx->pc = 0x484718u;
    SET_GPR_U32(ctx, 31, 0x484720u);
    ctx->pc = 0x3BCD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BCD58u, 0x484718u, 0x484720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x484720u;
label_484720:
    // 0x484720: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x484720u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_484724:
    // 0x484724: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x484724u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_484728:
    // 0x484728: 0xc1208a8  jal         func_4822A0
label_48472c:
    if (ctx->pc == 0x48472Cu) {
        ctx->pc = 0x484730u;
        goto label_484730;
    }
    ctx->pc = 0x484728u;
    SET_GPR_U32(ctx, 31, 0x484730u);
    ctx->pc = 0x4822A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4822A0u, 0x484728u, 0x484730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x484730u;
label_484730:
    // 0x484730: 0x26840008  addiu       $a0, $s4, 0x8
    ctx->pc = 0x484730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
label_484734:
    // 0x484734: 0x26050008  addiu       $a1, $s0, 0x8
    ctx->pc = 0x484734u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_484738:
    // 0x484738: 0xc120e04  jal         func_483810
label_48473c:
    if (ctx->pc == 0x48473Cu) {
        ctx->pc = 0x484740u;
        goto label_484740;
    }
    ctx->pc = 0x484738u;
    SET_GPR_U32(ctx, 31, 0x484740u);
    ctx->pc = 0x483810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x483810u, 0x484738u, 0x484740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x484740u;
label_484740:
    // 0x484740: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x484740u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_484744:
    // 0x484744: 0xae510000  sw          $s1, 0x0($s2)
    ctx->pc = 0x484744u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
label_484748:
    // 0x484748: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x484748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_48474c:
    // 0x48474c: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x48474cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
label_484750:
    // 0x484750: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x484750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_484754:
    // 0x484754: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x484754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_484758:
    // 0x484758: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_48475c:
    if (ctx->pc == 0x48475Cu) {
        ctx->pc = 0x484760u;
        goto label_484760;
    }
    ctx->pc = 0x484758u;
    {
        const bool branch_taken_0x484758 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x484758) {
            ctx->pc = 0x484770u;
            goto label_484770;
        }
    }
    ctx->pc = 0x484760u;
label_484760:
    // 0x484760: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x484760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_484764:
    // 0x484764: 0xae020050  sw          $v0, 0x50($s0)
    ctx->pc = 0x484764u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
label_484768:
    // 0x484768: 0x10000030  b           . + 4 + (0x30 << 2)
label_48476c:
    if (ctx->pc == 0x48476Cu) {
        ctx->pc = 0x484770u;
        goto label_484770;
    }
    ctx->pc = 0x484768u;
    {
        const bool branch_taken_0x484768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x484768) {
            ctx->pc = 0x48482Cu;
            goto label_48482c;
        }
    }
    ctx->pc = 0x484770u;
label_484770:
    // 0x484770: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x484770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_484774:
    // 0x484774: 0xae020050  sw          $v0, 0x50($s0)
    ctx->pc = 0x484774u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
label_484778:
    // 0x484778: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x484778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_48477c:
    // 0x48477c: 0x1002002b  beq         $zero, $v0, . + 4 + (0x2B << 2)
label_484780:
    if (ctx->pc == 0x484780u) {
        ctx->pc = 0x484784u;
        goto label_484784;
    }
    ctx->pc = 0x48477Cu;
    {
        const bool branch_taken_0x48477c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x48477c) {
            ctx->pc = 0x48482Cu;
            goto label_48482c;
        }
    }
    ctx->pc = 0x484784u;
label_484784:
    // 0x484784: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x484784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_484788:
    // 0x484788: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x484788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_48478c:
    // 0x48478c: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x48478cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
label_484790:
    // 0x484790: 0x10000026  b           . + 4 + (0x26 << 2)
label_484794:
    if (ctx->pc == 0x484794u) {
        ctx->pc = 0x484798u;
        goto label_484798;
    }
    ctx->pc = 0x484790u;
    {
        const bool branch_taken_0x484790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x484790) {
            ctx->pc = 0x48482Cu;
            goto label_48482c;
        }
    }
    ctx->pc = 0x484798u;
label_484798:
    // 0x484798: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x484798u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_48479c:
    // 0x48479c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x48479cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4847a0:
    // 0x4847a0: 0x27a603c8  addiu       $a2, $sp, 0x3C8
    ctx->pc = 0x4847a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 968));
label_4847a4:
    // 0x4847a4: 0xc115ee8  jal         func_457BA0
label_4847a8:
    if (ctx->pc == 0x4847A8u) {
        ctx->pc = 0x4847ACu;
        goto label_4847ac;
    }
    ctx->pc = 0x4847A4u;
    SET_GPR_U32(ctx, 31, 0x4847ACu);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x4847A4u, 0x4847ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4847ACu;
label_4847ac:
    // 0x4847ac: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_4847b0:
    if (ctx->pc == 0x4847B0u) {
        ctx->pc = 0x4847B4u;
        goto label_4847b4;
    }
    ctx->pc = 0x4847ACu;
    {
        const bool branch_taken_0x4847ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4847ac) {
            ctx->pc = 0x48482Cu;
            goto label_48482c;
        }
    }
    ctx->pc = 0x4847B4u;
label_4847b4:
    // 0x4847b4: 0x8fa203d0  lw          $v0, 0x3D0($sp)
    ctx->pc = 0x4847b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 976)));
label_4847b8:
    // 0x4847b8: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_4847bc:
    if (ctx->pc == 0x4847BCu) {
        ctx->pc = 0x4847C0u;
        goto label_4847c0;
    }
    ctx->pc = 0x4847B8u;
    {
        const bool branch_taken_0x4847b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4847b8) {
            ctx->pc = 0x48482Cu;
            goto label_48482c;
        }
    }
    ctx->pc = 0x4847C0u;
label_4847c0:
    // 0x4847c0: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x4847c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_4847c4:
    // 0x4847c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4847c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4847c8:
    // 0x4847c8: 0x8fa603cc  lw          $a2, 0x3CC($sp)
    ctx->pc = 0x4847c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 972)));
label_4847cc:
    // 0x4847cc: 0x3c07005f  lui         $a3, 0x5F
    ctx->pc = 0x4847ccu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)95 << 16));
label_4847d0:
    // 0x4847d0: 0x24e73b10  addiu       $a3, $a3, 0x3B10
    ctx->pc = 0x4847d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 15120));
label_4847d4:
    // 0x4847d4: 0x240801d6  addiu       $t0, $zero, 0x1D6
    ctx->pc = 0x4847d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 470));
label_4847d8:
    // 0x4847d8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x4847d8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4847dc:
    // 0x4847dc: 0xc113940  jal         func_44E500
label_4847e0:
    if (ctx->pc == 0x4847E0u) {
        ctx->pc = 0x4847E4u;
        goto label_4847e4;
    }
    ctx->pc = 0x4847DCu;
    SET_GPR_U32(ctx, 31, 0x4847E4u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x4847DCu, 0x4847E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4847E4u;
label_4847e4:
    // 0x4847e4: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x4847e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_4847e8:
    // 0x4847e8: 0x3c05005f  lui         $a1, 0x5F
    ctx->pc = 0x4847e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)95 << 16));
label_4847ec:
    // 0x4847ec: 0x24a53c70  addiu       $a1, $a1, 0x3C70
    ctx->pc = 0x4847ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15472));
label_4847f0:
    // 0x4847f0: 0xc115c24  jal         func_457090
label_4847f4:
    if (ctx->pc == 0x4847F4u) {
        ctx->pc = 0x4847F8u;
        goto label_4847f8;
    }
    ctx->pc = 0x4847F0u;
    SET_GPR_U32(ctx, 31, 0x4847F8u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x4847F0u, 0x4847F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4847F8u;
label_4847f8:
    // 0x4847f8: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x4847f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_4847fc:
    // 0x4847fc: 0x8fa203d0  lw          $v0, 0x3D0($sp)
    ctx->pc = 0x4847fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 976)));
label_484800:
    // 0x484800: 0x40f809  jalr        $v0
label_484804:
    if (ctx->pc == 0x484804u) {
        ctx->pc = 0x484808u;
        goto label_484808;
    }
    ctx->pc = 0x484800u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x484808u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x484800u, 0x484808u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x484808u;
label_484808:
    // 0x484808: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x484808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
label_48480c:
    // 0x48480c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_484810:
    if (ctx->pc == 0x484810u) {
        ctx->pc = 0x484814u;
        goto label_484814;
    }
    ctx->pc = 0x48480Cu;
    {
        const bool branch_taken_0x48480c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48480c) {
            ctx->pc = 0x48481Cu;
            goto label_48481c;
        }
    }
    ctx->pc = 0x484814u;
label_484814:
    // 0x484814: 0xd  break       0
    ctx->pc = 0x484814u;
    runtime->handleBreak(rdram, ctx);
label_484818:
    // 0x484818: 0x0  nop
    ctx->pc = 0x484818u;
    // NOP
label_48481c:
    // 0x48481c: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x48481cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_484820:
    // 0x484820: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x484820u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_484824:
    // 0x484824: 0xc11392c  jal         func_44E4B0
label_484828:
    if (ctx->pc == 0x484828u) {
        ctx->pc = 0x48482Cu;
        goto label_48482c;
    }
    ctx->pc = 0x484824u;
    SET_GPR_U32(ctx, 31, 0x48482Cu);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x484824u, 0x48482Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48482Cu;
label_48482c:
    // 0x48482c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x48482cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_484830:
    // 0x484830: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x484830u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_484834:
    // 0x484834: 0xc10496a  jal         func_4125A8
label_484838:
    if (ctx->pc == 0x484838u) {
        ctx->pc = 0x48483Cu;
        goto label_48483c;
    }
    ctx->pc = 0x484834u;
    SET_GPR_U32(ctx, 31, 0x48483Cu);
    ctx->pc = 0x4125A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4125A8u, 0x484834u, 0x48483Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48483Cu;
label_48483c:
    // 0x48483c: 0x10000026  b           . + 4 + (0x26 << 2)
label_484840:
    if (ctx->pc == 0x484840u) {
        ctx->pc = 0x484844u;
        goto label_484844;
    }
    ctx->pc = 0x48483Cu;
    {
        const bool branch_taken_0x48483c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x48483c) {
            ctx->pc = 0x4848D8u;
            goto label_4848d8;
        }
    }
    ctx->pc = 0x484844u;
label_484844:
    // 0x484844: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x484844u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_484848:
    // 0x484848: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x484848u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_48484c:
    // 0x48484c: 0x27a603b8  addiu       $a2, $sp, 0x3B8
    ctx->pc = 0x48484cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 952));
label_484850:
    // 0x484850: 0xc115ee8  jal         func_457BA0
label_484854:
    if (ctx->pc == 0x484854u) {
        ctx->pc = 0x484858u;
        goto label_484858;
    }
    ctx->pc = 0x484850u;
    SET_GPR_U32(ctx, 31, 0x484858u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x484850u, 0x484858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x484858u;
label_484858:
    // 0x484858: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_48485c:
    if (ctx->pc == 0x48485Cu) {
        ctx->pc = 0x484860u;
        goto label_484860;
    }
    ctx->pc = 0x484858u;
    {
        const bool branch_taken_0x484858 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x484858) {
            ctx->pc = 0x4848D8u;
            goto label_4848d8;
        }
    }
    ctx->pc = 0x484860u;
label_484860:
    // 0x484860: 0x8fa203c0  lw          $v0, 0x3C0($sp)
    ctx->pc = 0x484860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 960)));
label_484864:
    // 0x484864: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_484868:
    if (ctx->pc == 0x484868u) {
        ctx->pc = 0x48486Cu;
        goto label_48486c;
    }
    ctx->pc = 0x484864u;
    {
        const bool branch_taken_0x484864 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x484864) {
            ctx->pc = 0x4848D8u;
            goto label_4848d8;
        }
    }
    ctx->pc = 0x48486Cu;
label_48486c:
    // 0x48486c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x48486cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_484870:
    // 0x484870: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x484870u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_484874:
    // 0x484874: 0x8fa603bc  lw          $a2, 0x3BC($sp)
    ctx->pc = 0x484874u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 956)));
label_484878:
    // 0x484878: 0x3c07005f  lui         $a3, 0x5F
    ctx->pc = 0x484878u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)95 << 16));
label_48487c:
    // 0x48487c: 0x24e73b10  addiu       $a3, $a3, 0x3B10
    ctx->pc = 0x48487cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 15120));
label_484880:
    // 0x484880: 0x240801dd  addiu       $t0, $zero, 0x1DD
    ctx->pc = 0x484880u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 477));
label_484884:
    // 0x484884: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x484884u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_484888:
    // 0x484888: 0xc113940  jal         func_44E500
label_48488c:
    if (ctx->pc == 0x48488Cu) {
        ctx->pc = 0x484890u;
        goto label_484890;
    }
    ctx->pc = 0x484888u;
    SET_GPR_U32(ctx, 31, 0x484890u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x484888u, 0x484890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x484890u;
label_484890:
    // 0x484890: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x484890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_484894:
    // 0x484894: 0x3c05005f  lui         $a1, 0x5F
    ctx->pc = 0x484894u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)95 << 16));
label_484898:
    // 0x484898: 0x24a53c70  addiu       $a1, $a1, 0x3C70
    ctx->pc = 0x484898u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15472));
label_48489c:
    // 0x48489c: 0xc115c24  jal         func_457090
label_4848a0:
    if (ctx->pc == 0x4848A0u) {
        ctx->pc = 0x4848A4u;
        goto label_4848a4;
    }
    ctx->pc = 0x48489Cu;
    SET_GPR_U32(ctx, 31, 0x4848A4u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x48489Cu, 0x4848A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4848A4u;
label_4848a4:
    // 0x4848a4: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x4848a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_4848a8:
    // 0x4848a8: 0x8fa203c0  lw          $v0, 0x3C0($sp)
    ctx->pc = 0x4848a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 960)));
label_4848ac:
    // 0x4848ac: 0x40f809  jalr        $v0
label_4848b0:
    if (ctx->pc == 0x4848B0u) {
        ctx->pc = 0x4848B4u;
        goto label_4848b4;
    }
    ctx->pc = 0x4848ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4848B4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4848ACu, 0x4848B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4848B4u;
label_4848b4:
    // 0x4848b4: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x4848b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_4848b8:
    // 0x4848b8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_4848bc:
    if (ctx->pc == 0x4848BCu) {
        ctx->pc = 0x4848C0u;
        goto label_4848c0;
    }
    ctx->pc = 0x4848B8u;
    {
        const bool branch_taken_0x4848b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4848b8) {
            ctx->pc = 0x4848C8u;
            goto label_4848c8;
        }
    }
    ctx->pc = 0x4848C0u;
label_4848c0:
    // 0x4848c0: 0xd  break       0
    ctx->pc = 0x4848c0u;
    runtime->handleBreak(rdram, ctx);
label_4848c4:
    // 0x4848c4: 0x0  nop
    ctx->pc = 0x4848c4u;
    // NOP
label_4848c8:
    // 0x4848c8: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x4848c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_4848cc:
    // 0x4848cc: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x4848ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4848d0:
    // 0x4848d0: 0xc11392c  jal         func_44E4B0
label_4848d4:
    if (ctx->pc == 0x4848D4u) {
        ctx->pc = 0x4848D8u;
        goto label_4848d8;
    }
    ctx->pc = 0x4848D0u;
    SET_GPR_U32(ctx, 31, 0x4848D8u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x4848D0u, 0x4848D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4848D8u;
label_4848d8:
    // 0x4848d8: 0x8fa403f0  lw          $a0, 0x3F0($sp)
    ctx->pc = 0x4848d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1008)));
label_4848dc:
    // 0x4848dc: 0xc0f0af2  jal         func_3C2BC8
label_4848e0:
    if (ctx->pc == 0x4848E0u) {
        ctx->pc = 0x4848E4u;
        goto label_4848e4;
    }
    ctx->pc = 0x4848DCu;
    SET_GPR_U32(ctx, 31, 0x4848E4u);
    ctx->pc = 0x3C2BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2BC8u, 0x4848DCu, 0x4848E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4848E4u;
label_4848e4:
    // 0x4848e4: 0xae800030  sw          $zero, 0x30($s4)
    ctx->pc = 0x4848e4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 48), GPR_U32(ctx, 0));
label_4848e8:
    // 0x4848e8: 0x8f83bc64  lw          $v1, -0x439C($gp)
    ctx->pc = 0x4848e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949988)));
label_4848ec:
    // 0x4848ec: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x4848ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_4848f0:
    // 0x4848f0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x4848f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4848f4:
    // 0x4848f4: 0xaf82bc64  sw          $v0, -0x439C($gp)
    ctx->pc = 0x4848f4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949988), GPR_U32(ctx, 2));
label_4848f8:
    // 0x4848f8: 0x8fa203f0  lw          $v0, 0x3F0($sp)
    ctx->pc = 0x4848f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1008)));
label_4848fc:
    // 0x4848fc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x4848fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_484900:
    // 0x484900: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x484900u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_484904:
    // 0x484904: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x484904u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_484908:
    // 0x484908: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x484908u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_48490c:
    // 0x48490c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x48490cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_484910:
    // 0x484910: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x484910u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_484914:
    // 0x484914: 0x27bd0440  addiu       $sp, $sp, 0x440
    ctx->pc = 0x484914u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
label_484918:
    // 0x484918: 0x3e00008  jr          $ra
label_48491c:
    if (ctx->pc == 0x48491Cu) {
        ctx->pc = 0x484920u;
        goto label_fallthrough_0x484918;
    }
    ctx->pc = 0x484918u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x484918u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x484918:
    ctx->pc = 0x484920u;
}
