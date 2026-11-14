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

// Function: sub_001424D0
// Address: 0x1424d0 - 0x142960
void sub_001424D0_0x1424d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001424D0_0x1424d0");
#endif

    switch (ctx->pc) {
        case 0x1424d0u: goto label_1424d0;
        case 0x1424d4u: goto label_1424d4;
        case 0x1424d8u: goto label_1424d8;
        case 0x1424dcu: goto label_1424dc;
        case 0x1424e0u: goto label_1424e0;
        case 0x1424e4u: goto label_1424e4;
        case 0x1424e8u: goto label_1424e8;
        case 0x1424ecu: goto label_1424ec;
        case 0x1424f0u: goto label_1424f0;
        case 0x1424f4u: goto label_1424f4;
        case 0x1424f8u: goto label_1424f8;
        case 0x1424fcu: goto label_1424fc;
        case 0x142500u: goto label_142500;
        case 0x142504u: goto label_142504;
        case 0x142508u: goto label_142508;
        case 0x14250cu: goto label_14250c;
        case 0x142510u: goto label_142510;
        case 0x142514u: goto label_142514;
        case 0x142518u: goto label_142518;
        case 0x14251cu: goto label_14251c;
        case 0x142520u: goto label_142520;
        case 0x142524u: goto label_142524;
        case 0x142528u: goto label_142528;
        case 0x14252cu: goto label_14252c;
        case 0x142530u: goto label_142530;
        case 0x142534u: goto label_142534;
        case 0x142538u: goto label_142538;
        case 0x14253cu: goto label_14253c;
        case 0x142540u: goto label_142540;
        case 0x142544u: goto label_142544;
        case 0x142548u: goto label_142548;
        case 0x14254cu: goto label_14254c;
        case 0x142550u: goto label_142550;
        case 0x142554u: goto label_142554;
        case 0x142558u: goto label_142558;
        case 0x14255cu: goto label_14255c;
        case 0x142560u: goto label_142560;
        case 0x142564u: goto label_142564;
        case 0x142568u: goto label_142568;
        case 0x14256cu: goto label_14256c;
        case 0x142570u: goto label_142570;
        case 0x142574u: goto label_142574;
        case 0x142578u: goto label_142578;
        case 0x14257cu: goto label_14257c;
        case 0x142580u: goto label_142580;
        case 0x142584u: goto label_142584;
        case 0x142588u: goto label_142588;
        case 0x14258cu: goto label_14258c;
        case 0x142590u: goto label_142590;
        case 0x142594u: goto label_142594;
        case 0x142598u: goto label_142598;
        case 0x14259cu: goto label_14259c;
        case 0x1425a0u: goto label_1425a0;
        case 0x1425a4u: goto label_1425a4;
        case 0x1425a8u: goto label_1425a8;
        case 0x1425acu: goto label_1425ac;
        case 0x1425b0u: goto label_1425b0;
        case 0x1425b4u: goto label_1425b4;
        case 0x1425b8u: goto label_1425b8;
        case 0x1425bcu: goto label_1425bc;
        case 0x1425c0u: goto label_1425c0;
        case 0x1425c4u: goto label_1425c4;
        case 0x1425c8u: goto label_1425c8;
        case 0x1425ccu: goto label_1425cc;
        case 0x1425d0u: goto label_1425d0;
        case 0x1425d4u: goto label_1425d4;
        case 0x1425d8u: goto label_1425d8;
        case 0x1425dcu: goto label_1425dc;
        case 0x1425e0u: goto label_1425e0;
        case 0x1425e4u: goto label_1425e4;
        case 0x1425e8u: goto label_1425e8;
        case 0x1425ecu: goto label_1425ec;
        case 0x1425f0u: goto label_1425f0;
        case 0x1425f4u: goto label_1425f4;
        case 0x1425f8u: goto label_1425f8;
        case 0x1425fcu: goto label_1425fc;
        case 0x142600u: goto label_142600;
        case 0x142604u: goto label_142604;
        case 0x142608u: goto label_142608;
        case 0x14260cu: goto label_14260c;
        case 0x142610u: goto label_142610;
        case 0x142614u: goto label_142614;
        case 0x142618u: goto label_142618;
        case 0x14261cu: goto label_14261c;
        case 0x142620u: goto label_142620;
        case 0x142624u: goto label_142624;
        case 0x142628u: goto label_142628;
        case 0x14262cu: goto label_14262c;
        case 0x142630u: goto label_142630;
        case 0x142634u: goto label_142634;
        case 0x142638u: goto label_142638;
        case 0x14263cu: goto label_14263c;
        case 0x142640u: goto label_142640;
        case 0x142644u: goto label_142644;
        case 0x142648u: goto label_142648;
        case 0x14264cu: goto label_14264c;
        case 0x142650u: goto label_142650;
        case 0x142654u: goto label_142654;
        case 0x142658u: goto label_142658;
        case 0x14265cu: goto label_14265c;
        case 0x142660u: goto label_142660;
        case 0x142664u: goto label_142664;
        case 0x142668u: goto label_142668;
        case 0x14266cu: goto label_14266c;
        case 0x142670u: goto label_142670;
        case 0x142674u: goto label_142674;
        case 0x142678u: goto label_142678;
        case 0x14267cu: goto label_14267c;
        case 0x142680u: goto label_142680;
        case 0x142684u: goto label_142684;
        case 0x142688u: goto label_142688;
        case 0x14268cu: goto label_14268c;
        case 0x142690u: goto label_142690;
        case 0x142694u: goto label_142694;
        case 0x142698u: goto label_142698;
        case 0x14269cu: goto label_14269c;
        case 0x1426a0u: goto label_1426a0;
        case 0x1426a4u: goto label_1426a4;
        case 0x1426a8u: goto label_1426a8;
        case 0x1426acu: goto label_1426ac;
        case 0x1426b0u: goto label_1426b0;
        case 0x1426b4u: goto label_1426b4;
        case 0x1426b8u: goto label_1426b8;
        case 0x1426bcu: goto label_1426bc;
        case 0x1426c0u: goto label_1426c0;
        case 0x1426c4u: goto label_1426c4;
        case 0x1426c8u: goto label_1426c8;
        case 0x1426ccu: goto label_1426cc;
        case 0x1426d0u: goto label_1426d0;
        case 0x1426d4u: goto label_1426d4;
        case 0x1426d8u: goto label_1426d8;
        case 0x1426dcu: goto label_1426dc;
        case 0x1426e0u: goto label_1426e0;
        case 0x1426e4u: goto label_1426e4;
        case 0x1426e8u: goto label_1426e8;
        case 0x1426ecu: goto label_1426ec;
        case 0x1426f0u: goto label_1426f0;
        case 0x1426f4u: goto label_1426f4;
        case 0x1426f8u: goto label_1426f8;
        case 0x1426fcu: goto label_1426fc;
        case 0x142700u: goto label_142700;
        case 0x142704u: goto label_142704;
        case 0x142708u: goto label_142708;
        case 0x14270cu: goto label_14270c;
        case 0x142710u: goto label_142710;
        case 0x142714u: goto label_142714;
        case 0x142718u: goto label_142718;
        case 0x14271cu: goto label_14271c;
        case 0x142720u: goto label_142720;
        case 0x142724u: goto label_142724;
        case 0x142728u: goto label_142728;
        case 0x14272cu: goto label_14272c;
        case 0x142730u: goto label_142730;
        case 0x142734u: goto label_142734;
        case 0x142738u: goto label_142738;
        case 0x14273cu: goto label_14273c;
        case 0x142740u: goto label_142740;
        case 0x142744u: goto label_142744;
        case 0x142748u: goto label_142748;
        case 0x14274cu: goto label_14274c;
        case 0x142750u: goto label_142750;
        case 0x142754u: goto label_142754;
        case 0x142758u: goto label_142758;
        case 0x14275cu: goto label_14275c;
        case 0x142760u: goto label_142760;
        case 0x142764u: goto label_142764;
        case 0x142768u: goto label_142768;
        case 0x14276cu: goto label_14276c;
        case 0x142770u: goto label_142770;
        case 0x142774u: goto label_142774;
        case 0x142778u: goto label_142778;
        case 0x14277cu: goto label_14277c;
        case 0x142780u: goto label_142780;
        case 0x142784u: goto label_142784;
        case 0x142788u: goto label_142788;
        case 0x14278cu: goto label_14278c;
        case 0x142790u: goto label_142790;
        case 0x142794u: goto label_142794;
        case 0x142798u: goto label_142798;
        case 0x14279cu: goto label_14279c;
        case 0x1427a0u: goto label_1427a0;
        case 0x1427a4u: goto label_1427a4;
        case 0x1427a8u: goto label_1427a8;
        case 0x1427acu: goto label_1427ac;
        case 0x1427b0u: goto label_1427b0;
        case 0x1427b4u: goto label_1427b4;
        case 0x1427b8u: goto label_1427b8;
        case 0x1427bcu: goto label_1427bc;
        case 0x1427c0u: goto label_1427c0;
        case 0x1427c4u: goto label_1427c4;
        case 0x1427c8u: goto label_1427c8;
        case 0x1427ccu: goto label_1427cc;
        case 0x1427d0u: goto label_1427d0;
        case 0x1427d4u: goto label_1427d4;
        case 0x1427d8u: goto label_1427d8;
        case 0x1427dcu: goto label_1427dc;
        case 0x1427e0u: goto label_1427e0;
        case 0x1427e4u: goto label_1427e4;
        case 0x1427e8u: goto label_1427e8;
        case 0x1427ecu: goto label_1427ec;
        case 0x1427f0u: goto label_1427f0;
        case 0x1427f4u: goto label_1427f4;
        case 0x1427f8u: goto label_1427f8;
        case 0x1427fcu: goto label_1427fc;
        case 0x142800u: goto label_142800;
        case 0x142804u: goto label_142804;
        case 0x142808u: goto label_142808;
        case 0x14280cu: goto label_14280c;
        case 0x142810u: goto label_142810;
        case 0x142814u: goto label_142814;
        case 0x142818u: goto label_142818;
        case 0x14281cu: goto label_14281c;
        case 0x142820u: goto label_142820;
        case 0x142824u: goto label_142824;
        case 0x142828u: goto label_142828;
        case 0x14282cu: goto label_14282c;
        case 0x142830u: goto label_142830;
        case 0x142834u: goto label_142834;
        case 0x142838u: goto label_142838;
        case 0x14283cu: goto label_14283c;
        case 0x142840u: goto label_142840;
        case 0x142844u: goto label_142844;
        case 0x142848u: goto label_142848;
        case 0x14284cu: goto label_14284c;
        case 0x142850u: goto label_142850;
        case 0x142854u: goto label_142854;
        case 0x142858u: goto label_142858;
        case 0x14285cu: goto label_14285c;
        case 0x142860u: goto label_142860;
        case 0x142864u: goto label_142864;
        case 0x142868u: goto label_142868;
        case 0x14286cu: goto label_14286c;
        case 0x142870u: goto label_142870;
        case 0x142874u: goto label_142874;
        case 0x142878u: goto label_142878;
        case 0x14287cu: goto label_14287c;
        case 0x142880u: goto label_142880;
        case 0x142884u: goto label_142884;
        case 0x142888u: goto label_142888;
        case 0x14288cu: goto label_14288c;
        case 0x142890u: goto label_142890;
        case 0x142894u: goto label_142894;
        case 0x142898u: goto label_142898;
        case 0x14289cu: goto label_14289c;
        case 0x1428a0u: goto label_1428a0;
        case 0x1428a4u: goto label_1428a4;
        case 0x1428a8u: goto label_1428a8;
        case 0x1428acu: goto label_1428ac;
        case 0x1428b0u: goto label_1428b0;
        case 0x1428b4u: goto label_1428b4;
        case 0x1428b8u: goto label_1428b8;
        case 0x1428bcu: goto label_1428bc;
        case 0x1428c0u: goto label_1428c0;
        case 0x1428c4u: goto label_1428c4;
        case 0x1428c8u: goto label_1428c8;
        case 0x1428ccu: goto label_1428cc;
        case 0x1428d0u: goto label_1428d0;
        case 0x1428d4u: goto label_1428d4;
        case 0x1428d8u: goto label_1428d8;
        case 0x1428dcu: goto label_1428dc;
        case 0x1428e0u: goto label_1428e0;
        case 0x1428e4u: goto label_1428e4;
        case 0x1428e8u: goto label_1428e8;
        case 0x1428ecu: goto label_1428ec;
        case 0x1428f0u: goto label_1428f0;
        case 0x1428f4u: goto label_1428f4;
        case 0x1428f8u: goto label_1428f8;
        case 0x1428fcu: goto label_1428fc;
        case 0x142900u: goto label_142900;
        case 0x142904u: goto label_142904;
        case 0x142908u: goto label_142908;
        case 0x14290cu: goto label_14290c;
        case 0x142910u: goto label_142910;
        case 0x142914u: goto label_142914;
        case 0x142918u: goto label_142918;
        case 0x14291cu: goto label_14291c;
        case 0x142920u: goto label_142920;
        case 0x142924u: goto label_142924;
        case 0x142928u: goto label_142928;
        case 0x14292cu: goto label_14292c;
        case 0x142930u: goto label_142930;
        case 0x142934u: goto label_142934;
        case 0x142938u: goto label_142938;
        case 0x14293cu: goto label_14293c;
        case 0x142940u: goto label_142940;
        case 0x142944u: goto label_142944;
        case 0x142948u: goto label_142948;
        case 0x14294cu: goto label_14294c;
        case 0x142950u: goto label_142950;
        case 0x142954u: goto label_142954;
        case 0x142958u: goto label_142958;
        case 0x14295cu: goto label_14295c;
        default: break;
    }

    ctx->pc = 0x1424d0u;

label_1424d0:
    // 0x1424d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1424d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1424d4:
    // 0x1424d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1424d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1424d8:
    // 0x1424d8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1424d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_1424dc:
    // 0x1424dc: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x1424dcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
label_1424e0:
    // 0x1424e0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1424e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1424e4:
    // 0x1424e4: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_1424e8:
    if (ctx->pc == 0x1424E8u) {
        ctx->pc = 0x1424ECu;
        goto label_1424ec;
    }
    ctx->pc = 0x1424E4u;
    {
        const bool branch_taken_0x1424e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1424e4) {
            ctx->pc = 0x14252Cu;
            goto label_14252c;
        }
    }
    ctx->pc = 0x1424ECu;
label_1424ec:
    // 0x1424ec: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1424ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_1424f0:
    // 0x1424f0: 0x24633870  addiu       $v1, $v1, 0x3870
    ctx->pc = 0x1424f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14448));
label_1424f4:
    // 0x1424f4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1424f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1424f8:
    // 0x1424f8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1424f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_1424fc:
    // 0x1424fc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1424fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_142500:
    // 0x142500: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x142500u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_142504:
    // 0x142504: 0xc08ec24  jal         func_23B090
label_142508:
    if (ctx->pc == 0x142508u) {
        ctx->pc = 0x14250Cu;
        goto label_14250c;
    }
    ctx->pc = 0x142504u;
    SET_GPR_U32(ctx, 31, 0x14250Cu);
    ctx->pc = 0x23B090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B090u, 0x142504u, 0x14250Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14250Cu;
label_14250c:
    // 0x14250c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x14250cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
label_142510:
    // 0x142510: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x142510u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_142514:
    // 0x142514: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x142514u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_142518:
    // 0x142518: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
label_14251c:
    if (ctx->pc == 0x14251Cu) {
        ctx->pc = 0x142520u;
        goto label_142520;
    }
    ctx->pc = 0x142518u;
    {
        const bool branch_taken_0x142518 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x142518) {
            ctx->pc = 0x14252Cu;
            goto label_14252c;
        }
    }
    ctx->pc = 0x142520u;
label_142520:
    // 0x142520: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x142520u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_142524:
    // 0x142524: 0xc0ba070  jal         func_2E81C0
label_142528:
    if (ctx->pc == 0x142528u) {
        ctx->pc = 0x14252Cu;
        goto label_14252c;
    }
    ctx->pc = 0x142524u;
    SET_GPR_U32(ctx, 31, 0x14252Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x142524u, 0x14252Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14252Cu;
label_14252c:
    // 0x14252c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x14252cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_142530:
    // 0x142530: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x142530u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_142534:
    // 0x142534: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x142534u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_142538:
    // 0x142538: 0x3e00008  jr          $ra
label_14253c:
    if (ctx->pc == 0x14253Cu) {
        ctx->pc = 0x142540u;
        goto label_142540;
    }
    ctx->pc = 0x142538u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x142538u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x142540u;
label_142540:
    // 0x142540: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x142540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_142544:
    // 0x142544: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x142544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_142548:
    // 0x142548: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x142548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_14254c:
    // 0x14254c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x14254cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_142550:
    // 0x142550: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x142550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_142554:
    // 0x142554: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x142554u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_142558:
    // 0x142558: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x142558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_14255c:
    // 0x14255c: 0xafa40060  sw          $a0, 0x60($sp)
    ctx->pc = 0x14255cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
label_142560:
    // 0x142560: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x142560u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_142564:
    // 0x142564: 0xc08ec3c  jal         func_23B0F0
label_142568:
    if (ctx->pc == 0x142568u) {
        ctx->pc = 0x14256Cu;
        goto label_14256c;
    }
    ctx->pc = 0x142564u;
    SET_GPR_U32(ctx, 31, 0x14256Cu);
    ctx->pc = 0x23B0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B0F0u, 0x142564u, 0x14256Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14256Cu;
label_14256c:
    // 0x14256c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x14256cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_142570:
    // 0x142570: 0x2404005c  addiu       $a0, $zero, 0x5C
    ctx->pc = 0x142570u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
label_142574:
    // 0x142574: 0xc119b68  jal         func_466DA0
label_142578:
    if (ctx->pc == 0x142578u) {
        ctx->pc = 0x14257Cu;
        goto label_14257c;
    }
    ctx->pc = 0x142574u;
    SET_GPR_U32(ctx, 31, 0x14257Cu);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x142574u, 0x14257Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14257Cu;
label_14257c:
    // 0x14257c: 0x2404005c  addiu       $a0, $zero, 0x5C
    ctx->pc = 0x14257cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
label_142580:
    // 0x142580: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x142580u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_142584:
    // 0x142584: 0xc0400e0  jal         func_100380
label_142588:
    if (ctx->pc == 0x142588u) {
        ctx->pc = 0x14258Cu;
        goto label_14258c;
    }
    ctx->pc = 0x142584u;
    SET_GPR_U32(ctx, 31, 0x14258Cu);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x142584u, 0x14258Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14258Cu;
label_14258c:
    // 0x14258c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x14258cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_142590:
    // 0x142590: 0x12800005  beqz        $s4, . + 4 + (0x5 << 2)
label_142594:
    if (ctx->pc == 0x142594u) {
        ctx->pc = 0x142598u;
        goto label_142598;
    }
    ctx->pc = 0x142590u;
    {
        const bool branch_taken_0x142590 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x142590) {
            ctx->pc = 0x1425A8u;
            goto label_1425a8;
        }
    }
    ctx->pc = 0x142598u;
label_142598:
    // 0x142598: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x142598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_14259c:
    // 0x14259c: 0xc08d6fc  jal         func_235BF0
label_1425a0:
    if (ctx->pc == 0x1425A0u) {
        ctx->pc = 0x1425A4u;
        goto label_1425a4;
    }
    ctx->pc = 0x14259Cu;
    SET_GPR_U32(ctx, 31, 0x1425A4u);
    ctx->pc = 0x235BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235BF0u, 0x14259Cu, 0x1425A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1425A4u;
label_1425a4:
    // 0x1425a4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1425a4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1425a8:
    // 0x1425a8: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1425a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_1425ac:
    // 0x1425ac: 0xac540038  sw          $s4, 0x38($v0)
    ctx->pc = 0x1425acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 20));
label_1425b0:
    // 0x1425b0: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1425b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_1425b4:
    // 0x1425b4: 0x8c440038  lw          $a0, 0x38($v0)
    ctx->pc = 0x1425b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_1425b8:
    // 0x1425b8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1425b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1425bc:
    // 0x1425bc: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1425bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1425c0:
    // 0x1425c0: 0x320f809  jalr        $t9
label_1425c4:
    if (ctx->pc == 0x1425C4u) {
        ctx->pc = 0x1425C8u;
        goto label_1425c8;
    }
    ctx->pc = 0x1425C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1425C8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1425C0u, 0x1425C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1425C8u;
label_1425c8:
    // 0x1425c8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1425c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1425cc:
    // 0x1425cc: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x1425ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_1425d0:
    // 0x1425d0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1425d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_1425d4:
    // 0x1425d4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1425d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1425d8:
    // 0x1425d8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1425d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1425dc:
    // 0x1425dc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1425dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1425e0:
    // 0x1425e0: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x1425e0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1425e4:
    // 0x1425e4: 0x24040048  addiu       $a0, $zero, 0x48
    ctx->pc = 0x1425e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
label_1425e8:
    // 0x1425e8: 0xc119b68  jal         func_466DA0
label_1425ec:
    if (ctx->pc == 0x1425ECu) {
        ctx->pc = 0x1425F0u;
        goto label_1425f0;
    }
    ctx->pc = 0x1425E8u;
    SET_GPR_U32(ctx, 31, 0x1425F0u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x1425E8u, 0x1425F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1425F0u;
label_1425f0:
    // 0x1425f0: 0x24040048  addiu       $a0, $zero, 0x48
    ctx->pc = 0x1425f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
label_1425f4:
    // 0x1425f4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1425f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1425f8:
    // 0x1425f8: 0xc0400e0  jal         func_100380
label_1425fc:
    if (ctx->pc == 0x1425FCu) {
        ctx->pc = 0x142600u;
        goto label_142600;
    }
    ctx->pc = 0x1425F8u;
    SET_GPR_U32(ctx, 31, 0x142600u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x1425F8u, 0x142600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142600u;
label_142600:
    // 0x142600: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x142600u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_142604:
    // 0x142604: 0x12600005  beqz        $s3, . + 4 + (0x5 << 2)
label_142608:
    if (ctx->pc == 0x142608u) {
        ctx->pc = 0x14260Cu;
        goto label_14260c;
    }
    ctx->pc = 0x142604u;
    {
        const bool branch_taken_0x142604 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x142604) {
            ctx->pc = 0x14261Cu;
            goto label_14261c;
        }
    }
    ctx->pc = 0x14260Cu;
label_14260c:
    // 0x14260c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x14260cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_142610:
    // 0x142610: 0xc04ab6c  jal         func_12ADB0
label_142614:
    if (ctx->pc == 0x142614u) {
        ctx->pc = 0x142618u;
        goto label_142618;
    }
    ctx->pc = 0x142610u;
    SET_GPR_U32(ctx, 31, 0x142618u);
    ctx->pc = 0x12ADB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12ADB0u, 0x142610u, 0x142618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142618u;
label_142618:
    // 0x142618: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x142618u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14261c:
    // 0x14261c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x14261cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_142620:
    // 0x142620: 0xac530030  sw          $s3, 0x30($v0)
    ctx->pc = 0x142620u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 19));
label_142624:
    // 0x142624: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x142624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_142628:
    // 0x142628: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x142628u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_14262c:
    // 0x14262c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x14262cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_142630:
    // 0x142630: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x142630u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_142634:
    // 0x142634: 0x320f809  jalr        $t9
label_142638:
    if (ctx->pc == 0x142638u) {
        ctx->pc = 0x14263Cu;
        goto label_14263c;
    }
    ctx->pc = 0x142634u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x14263Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x142634u, 0x14263Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14263Cu;
label_14263c:
    // 0x14263c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x14263cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_142640:
    // 0x142640: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x142640u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_142644:
    // 0x142644: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x142644u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_142648:
    // 0x142648: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x142648u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_14264c:
    // 0x14264c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x14264cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_142650:
    // 0x142650: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x142650u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_142654:
    // 0x142654: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x142654u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_142658:
    // 0x142658: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x142658u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_14265c:
    // 0x14265c: 0xc119b68  jal         func_466DA0
label_142660:
    if (ctx->pc == 0x142660u) {
        ctx->pc = 0x142664u;
        goto label_142664;
    }
    ctx->pc = 0x14265Cu;
    SET_GPR_U32(ctx, 31, 0x142664u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x14265Cu, 0x142664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142664u;
label_142664:
    // 0x142664: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x142664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_142668:
    // 0x142668: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x142668u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14266c:
    // 0x14266c: 0xc0400e0  jal         func_100380
label_142670:
    if (ctx->pc == 0x142670u) {
        ctx->pc = 0x142674u;
        goto label_142674;
    }
    ctx->pc = 0x14266Cu;
    SET_GPR_U32(ctx, 31, 0x142674u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x14266Cu, 0x142674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142674u;
label_142674:
    // 0x142674: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x142674u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_142678:
    // 0x142678: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
label_14267c:
    if (ctx->pc == 0x14267Cu) {
        ctx->pc = 0x142680u;
        goto label_142680;
    }
    ctx->pc = 0x142678u;
    {
        const bool branch_taken_0x142678 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x142678) {
            ctx->pc = 0x142690u;
            goto label_142690;
        }
    }
    ctx->pc = 0x142680u;
label_142680:
    // 0x142680: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x142680u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_142684:
    // 0x142684: 0xc04f5f8  jal         func_13D7E0
label_142688:
    if (ctx->pc == 0x142688u) {
        ctx->pc = 0x14268Cu;
        goto label_14268c;
    }
    ctx->pc = 0x142684u;
    SET_GPR_U32(ctx, 31, 0x14268Cu);
    ctx->pc = 0x13D7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13D7E0u, 0x142684u, 0x14268Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14268Cu;
label_14268c:
    // 0x14268c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x14268cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_142690:
    // 0x142690: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x142690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_142694:
    // 0x142694: 0xac520028  sw          $s2, 0x28($v0)
    ctx->pc = 0x142694u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 18));
label_142698:
    // 0x142698: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x142698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_14269c:
    // 0x14269c: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x14269cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_1426a0:
    // 0x1426a0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1426a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1426a4:
    // 0x1426a4: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1426a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1426a8:
    // 0x1426a8: 0x320f809  jalr        $t9
label_1426ac:
    if (ctx->pc == 0x1426ACu) {
        ctx->pc = 0x1426B0u;
        goto label_1426b0;
    }
    ctx->pc = 0x1426A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1426B0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1426A8u, 0x1426B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1426B0u;
label_1426b0:
    // 0x1426b0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1426b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1426b4:
    // 0x1426b4: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x1426b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_1426b8:
    // 0x1426b8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1426b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_1426bc:
    // 0x1426bc: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1426bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1426c0:
    // 0x1426c0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1426c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1426c4:
    // 0x1426c4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1426c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1426c8:
    // 0x1426c8: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x1426c8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1426cc:
    // 0x1426cc: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x1426ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_1426d0:
    // 0x1426d0: 0xc119b68  jal         func_466DA0
label_1426d4:
    if (ctx->pc == 0x1426D4u) {
        ctx->pc = 0x1426D8u;
        goto label_1426d8;
    }
    ctx->pc = 0x1426D0u;
    SET_GPR_U32(ctx, 31, 0x1426D8u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x1426D0u, 0x1426D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1426D8u;
label_1426d8:
    // 0x1426d8: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x1426d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_1426dc:
    // 0x1426dc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1426dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1426e0:
    // 0x1426e0: 0xc0400e0  jal         func_100380
label_1426e4:
    if (ctx->pc == 0x1426E4u) {
        ctx->pc = 0x1426E8u;
        goto label_1426e8;
    }
    ctx->pc = 0x1426E0u;
    SET_GPR_U32(ctx, 31, 0x1426E8u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x1426E0u, 0x1426E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1426E8u;
label_1426e8:
    // 0x1426e8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1426e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1426ec:
    // 0x1426ec: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
label_1426f0:
    if (ctx->pc == 0x1426F0u) {
        ctx->pc = 0x1426F4u;
        goto label_1426f4;
    }
    ctx->pc = 0x1426ECu;
    {
        const bool branch_taken_0x1426ec = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1426ec) {
            ctx->pc = 0x142704u;
            goto label_142704;
        }
    }
    ctx->pc = 0x1426F4u;
label_1426f4:
    // 0x1426f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1426f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1426f8:
    // 0x1426f8: 0xc050f20  jal         func_143C80
label_1426fc:
    if (ctx->pc == 0x1426FCu) {
        ctx->pc = 0x142700u;
        goto label_142700;
    }
    ctx->pc = 0x1426F8u;
    SET_GPR_U32(ctx, 31, 0x142700u);
    ctx->pc = 0x143C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143C80u, 0x1426F8u, 0x142700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142700u;
label_142700:
    // 0x142700: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x142700u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_142704:
    // 0x142704: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x142704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_142708:
    // 0x142708: 0xac510034  sw          $s1, 0x34($v0)
    ctx->pc = 0x142708u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 17));
label_14270c:
    // 0x14270c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x14270cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_142710:
    // 0x142710: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x142710u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_142714:
    // 0x142714: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x142714u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_142718:
    // 0x142718: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x142718u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_14271c:
    // 0x14271c: 0x320f809  jalr        $t9
label_142720:
    if (ctx->pc == 0x142720u) {
        ctx->pc = 0x142724u;
        goto label_142724;
    }
    ctx->pc = 0x14271Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x142724u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14271Cu, 0x142724u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x142724u;
label_142724:
    // 0x142724: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x142724u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_142728:
    // 0x142728: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x142728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_14272c:
    // 0x14272c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x14272cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_142730:
    // 0x142730: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x142730u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_142734:
    // 0x142734: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x142734u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_142738:
    // 0x142738: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x142738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_14273c:
    // 0x14273c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x14273cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_142740:
    // 0x142740: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x142740u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_142744:
    // 0x142744: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x142744u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_142748:
    // 0x142748: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x142748u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_14274c:
    // 0x14274c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x14274cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_142750:
    // 0x142750: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x142750u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_142754:
    // 0x142754: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x142754u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_142758:
    // 0x142758: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x142758u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_14275c:
    // 0x14275c: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x14275cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_142760:
    // 0x142760: 0x3e00008  jr          $ra
label_142764:
    if (ctx->pc == 0x142764u) {
        ctx->pc = 0x142768u;
        goto label_142768;
    }
    ctx->pc = 0x142760u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x142760u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x142768u;
label_142768:
    // 0x142768: 0x0  nop
    ctx->pc = 0x142768u;
    // NOP
label_14276c:
    // 0x14276c: 0x0  nop
    ctx->pc = 0x14276cu;
    // NOP
label_142770:
    // 0x142770: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x142770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_142774:
    // 0x142774: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x142774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_142778:
    // 0x142778: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x142778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_14277c:
    // 0x14277c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x14277cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
label_142780:
    // 0x142780: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x142780u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_142784:
    // 0x142784: 0xc08ec48  jal         func_23B120
label_142788:
    if (ctx->pc == 0x142788u) {
        ctx->pc = 0x14278Cu;
        goto label_14278c;
    }
    ctx->pc = 0x142784u;
    SET_GPR_U32(ctx, 31, 0x14278Cu);
    ctx->pc = 0x23B120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B120u, 0x142784u, 0x14278Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14278Cu;
label_14278c:
    // 0x14278c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x14278cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_142790:
    // 0x142790: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x142790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_142794:
    // 0x142794: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x142794u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_142798:
    // 0x142798: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x142798u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_14279c:
    // 0x14279c: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x14279cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_1427a0:
    // 0x1427a0: 0x320f809  jalr        $t9
label_1427a4:
    if (ctx->pc == 0x1427A4u) {
        ctx->pc = 0x1427A8u;
        goto label_1427a8;
    }
    ctx->pc = 0x1427A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1427A8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1427A0u, 0x1427A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1427A8u;
label_1427a8:
    // 0x1427a8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1427a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1427ac:
    // 0x1427ac: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x1427acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_1427b0:
    // 0x1427b0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1427b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_1427b4:
    // 0x1427b4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1427b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1427b8:
    // 0x1427b8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1427b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1427bc:
    // 0x1427bc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1427bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1427c0:
    // 0x1427c0: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x1427c0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1427c4:
    // 0x1427c4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1427c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1427c8:
    // 0x1427c8: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x1427c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1427cc:
    // 0x1427cc: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1427d0:
    if (ctx->pc == 0x1427D0u) {
        ctx->pc = 0x1427D4u;
        goto label_1427d4;
    }
    ctx->pc = 0x1427CCu;
    {
        const bool branch_taken_0x1427cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1427cc) {
            ctx->pc = 0x1427FCu;
            goto label_1427fc;
        }
    }
    ctx->pc = 0x1427D4u;
label_1427d4:
    // 0x1427d4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1427d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1427d8:
    // 0x1427d8: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x1427d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1427dc:
    // 0x1427dc: 0xc050a7c  jal         func_1429F0
label_1427e0:
    if (ctx->pc == 0x1427E0u) {
        ctx->pc = 0x1427E4u;
        goto label_1427e4;
    }
    ctx->pc = 0x1427DCu;
    SET_GPR_U32(ctx, 31, 0x1427E4u);
    ctx->pc = 0x1429F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1429F0u, 0x1427DCu, 0x1427E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1427E4u;
label_1427e4:
    // 0x1427e4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1427e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1427e8:
    // 0x1427e8: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x1427e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1427ec:
    // 0x1427ec: 0xc119c5c  jal         func_467170
label_1427f0:
    if (ctx->pc == 0x1427F0u) {
        ctx->pc = 0x1427F4u;
        goto label_1427f4;
    }
    ctx->pc = 0x1427ECu;
    SET_GPR_U32(ctx, 31, 0x1427F4u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x1427ECu, 0x1427F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1427F4u;
label_1427f4:
    // 0x1427f4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1427f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1427f8:
    // 0x1427f8: 0xac400034  sw          $zero, 0x34($v0)
    ctx->pc = 0x1427f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 0));
label_1427fc:
    // 0x1427fc: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1427fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_142800:
    // 0x142800: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x142800u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_142804:
    // 0x142804: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x142804u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_142808:
    // 0x142808: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x142808u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_14280c:
    // 0x14280c: 0x320f809  jalr        $t9
label_142810:
    if (ctx->pc == 0x142810u) {
        ctx->pc = 0x142814u;
        goto label_142814;
    }
    ctx->pc = 0x14280Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x142814u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14280Cu, 0x142814u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x142814u;
label_142814:
    // 0x142814: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x142814u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_142818:
    // 0x142818: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x142818u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_14281c:
    // 0x14281c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x14281cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_142820:
    // 0x142820: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x142820u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_142824:
    // 0x142824: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x142824u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_142828:
    // 0x142828: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x142828u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_14282c:
    // 0x14282c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x14282cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_142830:
    // 0x142830: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x142830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_142834:
    // 0x142834: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x142834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_142838:
    // 0x142838: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_14283c:
    if (ctx->pc == 0x14283Cu) {
        ctx->pc = 0x142840u;
        goto label_142840;
    }
    ctx->pc = 0x142838u;
    {
        const bool branch_taken_0x142838 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x142838) {
            ctx->pc = 0x142868u;
            goto label_142868;
        }
    }
    ctx->pc = 0x142840u;
label_142840:
    // 0x142840: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x142840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_142844:
    // 0x142844: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x142844u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_142848:
    // 0x142848: 0xc050a70  jal         func_1429C0
label_14284c:
    if (ctx->pc == 0x14284Cu) {
        ctx->pc = 0x142850u;
        goto label_142850;
    }
    ctx->pc = 0x142848u;
    SET_GPR_U32(ctx, 31, 0x142850u);
    ctx->pc = 0x1429C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1429C0u, 0x142848u, 0x142850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142850u;
label_142850:
    // 0x142850: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x142850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_142854:
    // 0x142854: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x142854u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_142858:
    // 0x142858: 0xc119c5c  jal         func_467170
label_14285c:
    if (ctx->pc == 0x14285Cu) {
        ctx->pc = 0x142860u;
        goto label_142860;
    }
    ctx->pc = 0x142858u;
    SET_GPR_U32(ctx, 31, 0x142860u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x142858u, 0x142860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142860u;
label_142860:
    // 0x142860: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x142860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_142864:
    // 0x142864: 0xac400028  sw          $zero, 0x28($v0)
    ctx->pc = 0x142864u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
label_142868:
    // 0x142868: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x142868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_14286c:
    // 0x14286c: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x14286cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_142870:
    // 0x142870: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x142870u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_142874:
    // 0x142874: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x142874u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_142878:
    // 0x142878: 0x320f809  jalr        $t9
label_14287c:
    if (ctx->pc == 0x14287Cu) {
        ctx->pc = 0x142880u;
        goto label_142880;
    }
    ctx->pc = 0x142878u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x142880u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x142878u, 0x142880u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x142880u;
label_142880:
    // 0x142880: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x142880u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_142884:
    // 0x142884: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x142884u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_142888:
    // 0x142888: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x142888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_14288c:
    // 0x14288c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x14288cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_142890:
    // 0x142890: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x142890u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_142894:
    // 0x142894: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x142894u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_142898:
    // 0x142898: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x142898u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_14289c:
    // 0x14289c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x14289cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1428a0:
    // 0x1428a0: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x1428a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_1428a4:
    // 0x1428a4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1428a8:
    if (ctx->pc == 0x1428A8u) {
        ctx->pc = 0x1428ACu;
        goto label_1428ac;
    }
    ctx->pc = 0x1428A4u;
    {
        const bool branch_taken_0x1428a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1428a4) {
            ctx->pc = 0x1428D4u;
            goto label_1428d4;
        }
    }
    ctx->pc = 0x1428ACu;
label_1428ac:
    // 0x1428ac: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1428acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1428b0:
    // 0x1428b0: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x1428b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_1428b4:
    // 0x1428b4: 0xc050a64  jal         func_142990
label_1428b8:
    if (ctx->pc == 0x1428B8u) {
        ctx->pc = 0x1428BCu;
        goto label_1428bc;
    }
    ctx->pc = 0x1428B4u;
    SET_GPR_U32(ctx, 31, 0x1428BCu);
    ctx->pc = 0x142990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x142990u, 0x1428B4u, 0x1428BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1428BCu;
label_1428bc:
    // 0x1428bc: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1428bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1428c0:
    // 0x1428c0: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x1428c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_1428c4:
    // 0x1428c4: 0xc119c5c  jal         func_467170
label_1428c8:
    if (ctx->pc == 0x1428C8u) {
        ctx->pc = 0x1428CCu;
        goto label_1428cc;
    }
    ctx->pc = 0x1428C4u;
    SET_GPR_U32(ctx, 31, 0x1428CCu);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x1428C4u, 0x1428CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1428CCu;
label_1428cc:
    // 0x1428cc: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1428ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1428d0:
    // 0x1428d0: 0xac400030  sw          $zero, 0x30($v0)
    ctx->pc = 0x1428d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
label_1428d4:
    // 0x1428d4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1428d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1428d8:
    // 0x1428d8: 0x8c440038  lw          $a0, 0x38($v0)
    ctx->pc = 0x1428d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_1428dc:
    // 0x1428dc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1428dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1428e0:
    // 0x1428e0: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x1428e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_1428e4:
    // 0x1428e4: 0x320f809  jalr        $t9
label_1428e8:
    if (ctx->pc == 0x1428E8u) {
        ctx->pc = 0x1428ECu;
        goto label_1428ec;
    }
    ctx->pc = 0x1428E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1428ECu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1428E4u, 0x1428ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1428ECu;
label_1428ec:
    // 0x1428ec: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1428ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1428f0:
    // 0x1428f0: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x1428f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_1428f4:
    // 0x1428f4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1428f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_1428f8:
    // 0x1428f8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1428f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1428fc:
    // 0x1428fc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1428fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_142900:
    // 0x142900: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x142900u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_142904:
    // 0x142904: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x142904u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_142908:
    // 0x142908: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x142908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_14290c:
    // 0x14290c: 0x8c420038  lw          $v0, 0x38($v0)
    ctx->pc = 0x14290cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_142910:
    // 0x142910: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_142914:
    if (ctx->pc == 0x142914u) {
        ctx->pc = 0x142918u;
        goto label_142918;
    }
    ctx->pc = 0x142910u;
    {
        const bool branch_taken_0x142910 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x142910) {
            ctx->pc = 0x142940u;
            goto label_142940;
        }
    }
    ctx->pc = 0x142918u;
label_142918:
    // 0x142918: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x142918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_14291c:
    // 0x14291c: 0x8c440038  lw          $a0, 0x38($v0)
    ctx->pc = 0x14291cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_142920:
    // 0x142920: 0xc050a58  jal         func_142960
label_142924:
    if (ctx->pc == 0x142924u) {
        ctx->pc = 0x142928u;
        goto label_142928;
    }
    ctx->pc = 0x142920u;
    SET_GPR_U32(ctx, 31, 0x142928u);
    ctx->pc = 0x142960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x142960u, 0x142920u, 0x142928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142928u;
label_142928:
    // 0x142928: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x142928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_14292c:
    // 0x14292c: 0x8c440038  lw          $a0, 0x38($v0)
    ctx->pc = 0x14292cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_142930:
    // 0x142930: 0xc119c5c  jal         func_467170
label_142934:
    if (ctx->pc == 0x142934u) {
        ctx->pc = 0x142938u;
        goto label_142938;
    }
    ctx->pc = 0x142930u;
    SET_GPR_U32(ctx, 31, 0x142938u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x142930u, 0x142938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142938u;
label_142938:
    // 0x142938: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x142938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_14293c:
    // 0x14293c: 0xac400038  sw          $zero, 0x38($v0)
    ctx->pc = 0x14293cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 0));
label_142940:
    // 0x142940: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x142940u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_142944:
    // 0x142944: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x142944u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_142948:
    // 0x142948: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x142948u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_14294c:
    // 0x14294c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x14294cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_142950:
    // 0x142950: 0x3e00008  jr          $ra
label_142954:
    if (ctx->pc == 0x142954u) {
        ctx->pc = 0x142958u;
        goto label_142958;
    }
    ctx->pc = 0x142950u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x142950u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x142958u;
label_142958:
    // 0x142958: 0x0  nop
    ctx->pc = 0x142958u;
    // NOP
label_14295c:
    // 0x14295c: 0x0  nop
    ctx->pc = 0x14295cu;
    // NOP
    ctx->pc = 0x142960u;
}
