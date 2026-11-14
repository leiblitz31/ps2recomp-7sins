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

// Function: sub_004514D0
// Address: 0x4514d0 - 0x451940
void sub_004514D0_0x4514d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004514D0_0x4514d0");
#endif

    switch (ctx->pc) {
        case 0x4514d0u: goto label_4514d0;
        case 0x4514d4u: goto label_4514d4;
        case 0x4514d8u: goto label_4514d8;
        case 0x4514dcu: goto label_4514dc;
        case 0x4514e0u: goto label_4514e0;
        case 0x4514e4u: goto label_4514e4;
        case 0x4514e8u: goto label_4514e8;
        case 0x4514ecu: goto label_4514ec;
        case 0x4514f0u: goto label_4514f0;
        case 0x4514f4u: goto label_4514f4;
        case 0x4514f8u: goto label_4514f8;
        case 0x4514fcu: goto label_4514fc;
        case 0x451500u: goto label_451500;
        case 0x451504u: goto label_451504;
        case 0x451508u: goto label_451508;
        case 0x45150cu: goto label_45150c;
        case 0x451510u: goto label_451510;
        case 0x451514u: goto label_451514;
        case 0x451518u: goto label_451518;
        case 0x45151cu: goto label_45151c;
        case 0x451520u: goto label_451520;
        case 0x451524u: goto label_451524;
        case 0x451528u: goto label_451528;
        case 0x45152cu: goto label_45152c;
        case 0x451530u: goto label_451530;
        case 0x451534u: goto label_451534;
        case 0x451538u: goto label_451538;
        case 0x45153cu: goto label_45153c;
        case 0x451540u: goto label_451540;
        case 0x451544u: goto label_451544;
        case 0x451548u: goto label_451548;
        case 0x45154cu: goto label_45154c;
        case 0x451550u: goto label_451550;
        case 0x451554u: goto label_451554;
        case 0x451558u: goto label_451558;
        case 0x45155cu: goto label_45155c;
        case 0x451560u: goto label_451560;
        case 0x451564u: goto label_451564;
        case 0x451568u: goto label_451568;
        case 0x45156cu: goto label_45156c;
        case 0x451570u: goto label_451570;
        case 0x451574u: goto label_451574;
        case 0x451578u: goto label_451578;
        case 0x45157cu: goto label_45157c;
        case 0x451580u: goto label_451580;
        case 0x451584u: goto label_451584;
        case 0x451588u: goto label_451588;
        case 0x45158cu: goto label_45158c;
        case 0x451590u: goto label_451590;
        case 0x451594u: goto label_451594;
        case 0x451598u: goto label_451598;
        case 0x45159cu: goto label_45159c;
        case 0x4515a0u: goto label_4515a0;
        case 0x4515a4u: goto label_4515a4;
        case 0x4515a8u: goto label_4515a8;
        case 0x4515acu: goto label_4515ac;
        case 0x4515b0u: goto label_4515b0;
        case 0x4515b4u: goto label_4515b4;
        case 0x4515b8u: goto label_4515b8;
        case 0x4515bcu: goto label_4515bc;
        case 0x4515c0u: goto label_4515c0;
        case 0x4515c4u: goto label_4515c4;
        case 0x4515c8u: goto label_4515c8;
        case 0x4515ccu: goto label_4515cc;
        case 0x4515d0u: goto label_4515d0;
        case 0x4515d4u: goto label_4515d4;
        case 0x4515d8u: goto label_4515d8;
        case 0x4515dcu: goto label_4515dc;
        case 0x4515e0u: goto label_4515e0;
        case 0x4515e4u: goto label_4515e4;
        case 0x4515e8u: goto label_4515e8;
        case 0x4515ecu: goto label_4515ec;
        case 0x4515f0u: goto label_4515f0;
        case 0x4515f4u: goto label_4515f4;
        case 0x4515f8u: goto label_4515f8;
        case 0x4515fcu: goto label_4515fc;
        case 0x451600u: goto label_451600;
        case 0x451604u: goto label_451604;
        case 0x451608u: goto label_451608;
        case 0x45160cu: goto label_45160c;
        case 0x451610u: goto label_451610;
        case 0x451614u: goto label_451614;
        case 0x451618u: goto label_451618;
        case 0x45161cu: goto label_45161c;
        case 0x451620u: goto label_451620;
        case 0x451624u: goto label_451624;
        case 0x451628u: goto label_451628;
        case 0x45162cu: goto label_45162c;
        case 0x451630u: goto label_451630;
        case 0x451634u: goto label_451634;
        case 0x451638u: goto label_451638;
        case 0x45163cu: goto label_45163c;
        case 0x451640u: goto label_451640;
        case 0x451644u: goto label_451644;
        case 0x451648u: goto label_451648;
        case 0x45164cu: goto label_45164c;
        case 0x451650u: goto label_451650;
        case 0x451654u: goto label_451654;
        case 0x451658u: goto label_451658;
        case 0x45165cu: goto label_45165c;
        case 0x451660u: goto label_451660;
        case 0x451664u: goto label_451664;
        case 0x451668u: goto label_451668;
        case 0x45166cu: goto label_45166c;
        case 0x451670u: goto label_451670;
        case 0x451674u: goto label_451674;
        case 0x451678u: goto label_451678;
        case 0x45167cu: goto label_45167c;
        case 0x451680u: goto label_451680;
        case 0x451684u: goto label_451684;
        case 0x451688u: goto label_451688;
        case 0x45168cu: goto label_45168c;
        case 0x451690u: goto label_451690;
        case 0x451694u: goto label_451694;
        case 0x451698u: goto label_451698;
        case 0x45169cu: goto label_45169c;
        case 0x4516a0u: goto label_4516a0;
        case 0x4516a4u: goto label_4516a4;
        case 0x4516a8u: goto label_4516a8;
        case 0x4516acu: goto label_4516ac;
        case 0x4516b0u: goto label_4516b0;
        case 0x4516b4u: goto label_4516b4;
        case 0x4516b8u: goto label_4516b8;
        case 0x4516bcu: goto label_4516bc;
        case 0x4516c0u: goto label_4516c0;
        case 0x4516c4u: goto label_4516c4;
        case 0x4516c8u: goto label_4516c8;
        case 0x4516ccu: goto label_4516cc;
        case 0x4516d0u: goto label_4516d0;
        case 0x4516d4u: goto label_4516d4;
        case 0x4516d8u: goto label_4516d8;
        case 0x4516dcu: goto label_4516dc;
        case 0x4516e0u: goto label_4516e0;
        case 0x4516e4u: goto label_4516e4;
        case 0x4516e8u: goto label_4516e8;
        case 0x4516ecu: goto label_4516ec;
        case 0x4516f0u: goto label_4516f0;
        case 0x4516f4u: goto label_4516f4;
        case 0x4516f8u: goto label_4516f8;
        case 0x4516fcu: goto label_4516fc;
        case 0x451700u: goto label_451700;
        case 0x451704u: goto label_451704;
        case 0x451708u: goto label_451708;
        case 0x45170cu: goto label_45170c;
        case 0x451710u: goto label_451710;
        case 0x451714u: goto label_451714;
        case 0x451718u: goto label_451718;
        case 0x45171cu: goto label_45171c;
        case 0x451720u: goto label_451720;
        case 0x451724u: goto label_451724;
        case 0x451728u: goto label_451728;
        case 0x45172cu: goto label_45172c;
        case 0x451730u: goto label_451730;
        case 0x451734u: goto label_451734;
        case 0x451738u: goto label_451738;
        case 0x45173cu: goto label_45173c;
        case 0x451740u: goto label_451740;
        case 0x451744u: goto label_451744;
        case 0x451748u: goto label_451748;
        case 0x45174cu: goto label_45174c;
        case 0x451750u: goto label_451750;
        case 0x451754u: goto label_451754;
        case 0x451758u: goto label_451758;
        case 0x45175cu: goto label_45175c;
        case 0x451760u: goto label_451760;
        case 0x451764u: goto label_451764;
        case 0x451768u: goto label_451768;
        case 0x45176cu: goto label_45176c;
        case 0x451770u: goto label_451770;
        case 0x451774u: goto label_451774;
        case 0x451778u: goto label_451778;
        case 0x45177cu: goto label_45177c;
        case 0x451780u: goto label_451780;
        case 0x451784u: goto label_451784;
        case 0x451788u: goto label_451788;
        case 0x45178cu: goto label_45178c;
        case 0x451790u: goto label_451790;
        case 0x451794u: goto label_451794;
        case 0x451798u: goto label_451798;
        case 0x45179cu: goto label_45179c;
        case 0x4517a0u: goto label_4517a0;
        case 0x4517a4u: goto label_4517a4;
        case 0x4517a8u: goto label_4517a8;
        case 0x4517acu: goto label_4517ac;
        case 0x4517b0u: goto label_4517b0;
        case 0x4517b4u: goto label_4517b4;
        case 0x4517b8u: goto label_4517b8;
        case 0x4517bcu: goto label_4517bc;
        case 0x4517c0u: goto label_4517c0;
        case 0x4517c4u: goto label_4517c4;
        case 0x4517c8u: goto label_4517c8;
        case 0x4517ccu: goto label_4517cc;
        case 0x4517d0u: goto label_4517d0;
        case 0x4517d4u: goto label_4517d4;
        case 0x4517d8u: goto label_4517d8;
        case 0x4517dcu: goto label_4517dc;
        case 0x4517e0u: goto label_4517e0;
        case 0x4517e4u: goto label_4517e4;
        case 0x4517e8u: goto label_4517e8;
        case 0x4517ecu: goto label_4517ec;
        case 0x4517f0u: goto label_4517f0;
        case 0x4517f4u: goto label_4517f4;
        case 0x4517f8u: goto label_4517f8;
        case 0x4517fcu: goto label_4517fc;
        case 0x451800u: goto label_451800;
        case 0x451804u: goto label_451804;
        case 0x451808u: goto label_451808;
        case 0x45180cu: goto label_45180c;
        case 0x451810u: goto label_451810;
        case 0x451814u: goto label_451814;
        case 0x451818u: goto label_451818;
        case 0x45181cu: goto label_45181c;
        case 0x451820u: goto label_451820;
        case 0x451824u: goto label_451824;
        case 0x451828u: goto label_451828;
        case 0x45182cu: goto label_45182c;
        case 0x451830u: goto label_451830;
        case 0x451834u: goto label_451834;
        case 0x451838u: goto label_451838;
        case 0x45183cu: goto label_45183c;
        case 0x451840u: goto label_451840;
        case 0x451844u: goto label_451844;
        case 0x451848u: goto label_451848;
        case 0x45184cu: goto label_45184c;
        case 0x451850u: goto label_451850;
        case 0x451854u: goto label_451854;
        case 0x451858u: goto label_451858;
        case 0x45185cu: goto label_45185c;
        case 0x451860u: goto label_451860;
        case 0x451864u: goto label_451864;
        case 0x451868u: goto label_451868;
        case 0x45186cu: goto label_45186c;
        case 0x451870u: goto label_451870;
        case 0x451874u: goto label_451874;
        case 0x451878u: goto label_451878;
        case 0x45187cu: goto label_45187c;
        case 0x451880u: goto label_451880;
        case 0x451884u: goto label_451884;
        case 0x451888u: goto label_451888;
        case 0x45188cu: goto label_45188c;
        case 0x451890u: goto label_451890;
        case 0x451894u: goto label_451894;
        case 0x451898u: goto label_451898;
        case 0x45189cu: goto label_45189c;
        case 0x4518a0u: goto label_4518a0;
        case 0x4518a4u: goto label_4518a4;
        case 0x4518a8u: goto label_4518a8;
        case 0x4518acu: goto label_4518ac;
        case 0x4518b0u: goto label_4518b0;
        case 0x4518b4u: goto label_4518b4;
        case 0x4518b8u: goto label_4518b8;
        case 0x4518bcu: goto label_4518bc;
        case 0x4518c0u: goto label_4518c0;
        case 0x4518c4u: goto label_4518c4;
        case 0x4518c8u: goto label_4518c8;
        case 0x4518ccu: goto label_4518cc;
        case 0x4518d0u: goto label_4518d0;
        case 0x4518d4u: goto label_4518d4;
        case 0x4518d8u: goto label_4518d8;
        case 0x4518dcu: goto label_4518dc;
        case 0x4518e0u: goto label_4518e0;
        case 0x4518e4u: goto label_4518e4;
        case 0x4518e8u: goto label_4518e8;
        case 0x4518ecu: goto label_4518ec;
        case 0x4518f0u: goto label_4518f0;
        case 0x4518f4u: goto label_4518f4;
        case 0x4518f8u: goto label_4518f8;
        case 0x4518fcu: goto label_4518fc;
        case 0x451900u: goto label_451900;
        case 0x451904u: goto label_451904;
        case 0x451908u: goto label_451908;
        case 0x45190cu: goto label_45190c;
        case 0x451910u: goto label_451910;
        case 0x451914u: goto label_451914;
        case 0x451918u: goto label_451918;
        case 0x45191cu: goto label_45191c;
        case 0x451920u: goto label_451920;
        case 0x451924u: goto label_451924;
        case 0x451928u: goto label_451928;
        case 0x45192cu: goto label_45192c;
        case 0x451930u: goto label_451930;
        case 0x451934u: goto label_451934;
        case 0x451938u: goto label_451938;
        case 0x45193cu: goto label_45193c;
        default: break;
    }

    ctx->pc = 0x4514d0u;

label_4514d0:
    // 0x4514d0: 0x27bdf9a0  addiu       $sp, $sp, -0x660
    ctx->pc = 0x4514d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965664));
label_4514d4:
    // 0x4514d4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4514d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_4514d8:
    // 0x4514d8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4514d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4514dc:
    // 0x4514dc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4514dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4514e0:
    // 0x4514e0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4514e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4514e4:
    // 0x4514e4: 0xafa40640  sw          $a0, 0x640($sp)
    ctx->pc = 0x4514e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1600), GPR_U32(ctx, 4));
label_4514e8:
    // 0x4514e8: 0xafa50650  sw          $a1, 0x650($sp)
    ctx->pc = 0x4514e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1616), GPR_U32(ctx, 5));
label_4514ec:
    // 0x4514ec: 0x8f82bf24  lw          $v0, -0x40DC($gp)
    ctx->pc = 0x4514ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950692)));
label_4514f0:
    // 0x4514f0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x4514f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4514f4:
    // 0x4514f4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x4514f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_4514f8:
    // 0x4514f8: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
label_4514fc:
    if (ctx->pc == 0x4514FCu) {
        ctx->pc = 0x451500u;
        goto label_451500;
    }
    ctx->pc = 0x4514F8u;
    {
        const bool branch_taken_0x4514f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4514f8) {
            ctx->pc = 0x4515A4u;
            goto label_4515a4;
        }
    }
    ctx->pc = 0x451500u;
label_451500:
    // 0x451500: 0x8f82afe0  lw          $v0, -0x5020($gp)
    ctx->pc = 0x451500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946784)));
label_451504:
    // 0x451504: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_451508:
    if (ctx->pc == 0x451508u) {
        ctx->pc = 0x45150Cu;
        goto label_45150c;
    }
    ctx->pc = 0x451504u;
    {
        const bool branch_taken_0x451504 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x451504) {
            ctx->pc = 0x4515A4u;
            goto label_4515a4;
        }
    }
    ctx->pc = 0x45150Cu;
label_45150c:
    // 0x45150c: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x45150cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_451510:
    // 0x451510: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x451510u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_451514:
    // 0x451514: 0x27a60630  addiu       $a2, $sp, 0x630
    ctx->pc = 0x451514u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1584));
label_451518:
    // 0x451518: 0xc115ee8  jal         func_457BA0
label_45151c:
    if (ctx->pc == 0x45151Cu) {
        ctx->pc = 0x451520u;
        goto label_451520;
    }
    ctx->pc = 0x451518u;
    SET_GPR_U32(ctx, 31, 0x451520u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x451518u, 0x451520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x451520u;
label_451520:
    // 0x451520: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_451524:
    if (ctx->pc == 0x451524u) {
        ctx->pc = 0x451528u;
        goto label_451528;
    }
    ctx->pc = 0x451520u;
    {
        const bool branch_taken_0x451520 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x451520) {
            ctx->pc = 0x4515A4u;
            goto label_4515a4;
        }
    }
    ctx->pc = 0x451528u;
label_451528:
    // 0x451528: 0x8fa20638  lw          $v0, 0x638($sp)
    ctx->pc = 0x451528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1592)));
label_45152c:
    // 0x45152c: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_451530:
    if (ctx->pc == 0x451530u) {
        ctx->pc = 0x451534u;
        goto label_451534;
    }
    ctx->pc = 0x45152Cu;
    {
        const bool branch_taken_0x45152c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45152c) {
            ctx->pc = 0x4515A4u;
            goto label_4515a4;
        }
    }
    ctx->pc = 0x451534u;
label_451534:
    // 0x451534: 0x27a404c0  addiu       $a0, $sp, 0x4C0
    ctx->pc = 0x451534u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1216));
label_451538:
    // 0x451538: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x451538u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_45153c:
    // 0x45153c: 0x8fa60634  lw          $a2, 0x634($sp)
    ctx->pc = 0x45153cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1588)));
label_451540:
    // 0x451540: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x451540u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_451544:
    // 0x451544: 0x24e7d990  addiu       $a3, $a3, -0x2670
    ctx->pc = 0x451544u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294957456));
label_451548:
    // 0x451548: 0x240801ed  addiu       $t0, $zero, 0x1ED
    ctx->pc = 0x451548u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 493));
label_45154c:
    // 0x45154c: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x45154cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_451550:
    // 0x451550: 0x2529dcc0  addiu       $t1, $t1, -0x2340
    ctx->pc = 0x451550u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294958272));
label_451554:
    // 0x451554: 0xc113940  jal         func_44E500
label_451558:
    if (ctx->pc == 0x451558u) {
        ctx->pc = 0x45155Cu;
        goto label_45155c;
    }
    ctx->pc = 0x451554u;
    SET_GPR_U32(ctx, 31, 0x45155Cu);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x451554u, 0x45155Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45155Cu;
label_45155c:
    // 0x45155c: 0x27a404c0  addiu       $a0, $sp, 0x4C0
    ctx->pc = 0x45155cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1216));
label_451560:
    // 0x451560: 0x2785afcc  addiu       $a1, $gp, -0x5034
    ctx->pc = 0x451560u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294946764));
label_451564:
    // 0x451564: 0xc115c24  jal         func_457090
label_451568:
    if (ctx->pc == 0x451568u) {
        ctx->pc = 0x45156Cu;
        goto label_45156c;
    }
    ctx->pc = 0x451564u;
    SET_GPR_U32(ctx, 31, 0x45156Cu);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x451564u, 0x45156Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45156Cu;
label_45156c:
    // 0x45156c: 0x27a404c0  addiu       $a0, $sp, 0x4C0
    ctx->pc = 0x45156cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1216));
label_451570:
    // 0x451570: 0x8fa20638  lw          $v0, 0x638($sp)
    ctx->pc = 0x451570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1592)));
label_451574:
    // 0x451574: 0x40f809  jalr        $v0
label_451578:
    if (ctx->pc == 0x451578u) {
        ctx->pc = 0x45157Cu;
        goto label_45157c;
    }
    ctx->pc = 0x451574u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x45157Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x451574u, 0x45157Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x45157Cu;
label_45157c:
    // 0x45157c: 0xaf82afe0  sw          $v0, -0x5020($gp)
    ctx->pc = 0x45157cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946784), GPR_U32(ctx, 2));
label_451580:
    // 0x451580: 0x8fa204c0  lw          $v0, 0x4C0($sp)
    ctx->pc = 0x451580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1216)));
label_451584:
    // 0x451584: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_451588:
    if (ctx->pc == 0x451588u) {
        ctx->pc = 0x45158Cu;
        goto label_45158c;
    }
    ctx->pc = 0x451584u;
    {
        const bool branch_taken_0x451584 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x451584) {
            ctx->pc = 0x451594u;
            goto label_451594;
        }
    }
    ctx->pc = 0x45158Cu;
label_45158c:
    // 0x45158c: 0xd  break       0
    ctx->pc = 0x45158cu;
    runtime->handleBreak(rdram, ctx);
label_451590:
    // 0x451590: 0x0  nop
    ctx->pc = 0x451590u;
    // NOP
label_451594:
    // 0x451594: 0x27a404c0  addiu       $a0, $sp, 0x4C0
    ctx->pc = 0x451594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1216));
label_451598:
    // 0x451598: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x451598u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_45159c:
    // 0x45159c: 0xc11392c  jal         func_44E4B0
label_4515a0:
    if (ctx->pc == 0x4515A0u) {
        ctx->pc = 0x4515A4u;
        goto label_4515a4;
    }
    ctx->pc = 0x45159Cu;
    SET_GPR_U32(ctx, 31, 0x4515A4u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x45159Cu, 0x4515A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4515A4u;
label_4515a4:
    // 0x4515a4: 0x8f82bf28  lw          $v0, -0x40D8($gp)
    ctx->pc = 0x4515a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950696)));
label_4515a8:
    // 0x4515a8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x4515a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4515ac:
    // 0x4515ac: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x4515acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_4515b0:
    // 0x4515b0: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
label_4515b4:
    if (ctx->pc == 0x4515B4u) {
        ctx->pc = 0x4515B8u;
        goto label_4515b8;
    }
    ctx->pc = 0x4515B0u;
    {
        const bool branch_taken_0x4515b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4515b0) {
            ctx->pc = 0x45165Cu;
            goto label_45165c;
        }
    }
    ctx->pc = 0x4515B8u;
label_4515b8:
    // 0x4515b8: 0x8f82afe4  lw          $v0, -0x501C($gp)
    ctx->pc = 0x4515b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946788)));
label_4515bc:
    // 0x4515bc: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_4515c0:
    if (ctx->pc == 0x4515C0u) {
        ctx->pc = 0x4515C4u;
        goto label_4515c4;
    }
    ctx->pc = 0x4515BCu;
    {
        const bool branch_taken_0x4515bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4515bc) {
            ctx->pc = 0x45165Cu;
            goto label_45165c;
        }
    }
    ctx->pc = 0x4515C4u;
label_4515c4:
    // 0x4515c4: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x4515c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_4515c8:
    // 0x4515c8: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x4515c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_4515cc:
    // 0x4515cc: 0x27a60620  addiu       $a2, $sp, 0x620
    ctx->pc = 0x4515ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1568));
label_4515d0:
    // 0x4515d0: 0xc115ee8  jal         func_457BA0
label_4515d4:
    if (ctx->pc == 0x4515D4u) {
        ctx->pc = 0x4515D8u;
        goto label_4515d8;
    }
    ctx->pc = 0x4515D0u;
    SET_GPR_U32(ctx, 31, 0x4515D8u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x4515D0u, 0x4515D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4515D8u;
label_4515d8:
    // 0x4515d8: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_4515dc:
    if (ctx->pc == 0x4515DCu) {
        ctx->pc = 0x4515E0u;
        goto label_4515e0;
    }
    ctx->pc = 0x4515D8u;
    {
        const bool branch_taken_0x4515d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4515d8) {
            ctx->pc = 0x45165Cu;
            goto label_45165c;
        }
    }
    ctx->pc = 0x4515E0u;
label_4515e0:
    // 0x4515e0: 0x8fa20628  lw          $v0, 0x628($sp)
    ctx->pc = 0x4515e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1576)));
label_4515e4:
    // 0x4515e4: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_4515e8:
    if (ctx->pc == 0x4515E8u) {
        ctx->pc = 0x4515ECu;
        goto label_4515ec;
    }
    ctx->pc = 0x4515E4u;
    {
        const bool branch_taken_0x4515e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4515e4) {
            ctx->pc = 0x45165Cu;
            goto label_45165c;
        }
    }
    ctx->pc = 0x4515ECu;
label_4515ec:
    // 0x4515ec: 0x27a403a0  addiu       $a0, $sp, 0x3A0
    ctx->pc = 0x4515ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 928));
label_4515f0:
    // 0x4515f0: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x4515f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_4515f4:
    // 0x4515f4: 0x8fa60624  lw          $a2, 0x624($sp)
    ctx->pc = 0x4515f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1572)));
label_4515f8:
    // 0x4515f8: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x4515f8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_4515fc:
    // 0x4515fc: 0x24e7d990  addiu       $a3, $a3, -0x2670
    ctx->pc = 0x4515fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294957456));
label_451600:
    // 0x451600: 0x240801ee  addiu       $t0, $zero, 0x1EE
    ctx->pc = 0x451600u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 494));
label_451604:
    // 0x451604: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x451604u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_451608:
    // 0x451608: 0x2529dce0  addiu       $t1, $t1, -0x2320
    ctx->pc = 0x451608u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294958304));
label_45160c:
    // 0x45160c: 0xc113940  jal         func_44E500
label_451610:
    if (ctx->pc == 0x451610u) {
        ctx->pc = 0x451614u;
        goto label_451614;
    }
    ctx->pc = 0x45160Cu;
    SET_GPR_U32(ctx, 31, 0x451614u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x45160Cu, 0x451614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x451614u;
label_451614:
    // 0x451614: 0x27a403a0  addiu       $a0, $sp, 0x3A0
    ctx->pc = 0x451614u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 928));
label_451618:
    // 0x451618: 0x2785afcc  addiu       $a1, $gp, -0x5034
    ctx->pc = 0x451618u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294946764));
label_45161c:
    // 0x45161c: 0xc115c24  jal         func_457090
label_451620:
    if (ctx->pc == 0x451620u) {
        ctx->pc = 0x451624u;
        goto label_451624;
    }
    ctx->pc = 0x45161Cu;
    SET_GPR_U32(ctx, 31, 0x451624u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x45161Cu, 0x451624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x451624u;
label_451624:
    // 0x451624: 0x27a403a0  addiu       $a0, $sp, 0x3A0
    ctx->pc = 0x451624u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 928));
label_451628:
    // 0x451628: 0x8fa20628  lw          $v0, 0x628($sp)
    ctx->pc = 0x451628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1576)));
label_45162c:
    // 0x45162c: 0x40f809  jalr        $v0
label_451630:
    if (ctx->pc == 0x451630u) {
        ctx->pc = 0x451634u;
        goto label_451634;
    }
    ctx->pc = 0x45162Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x451634u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45162Cu, 0x451634u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x451634u;
label_451634:
    // 0x451634: 0xaf82afe4  sw          $v0, -0x501C($gp)
    ctx->pc = 0x451634u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946788), GPR_U32(ctx, 2));
label_451638:
    // 0x451638: 0x8fa203a0  lw          $v0, 0x3A0($sp)
    ctx->pc = 0x451638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_45163c:
    // 0x45163c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_451640:
    if (ctx->pc == 0x451640u) {
        ctx->pc = 0x451644u;
        goto label_451644;
    }
    ctx->pc = 0x45163Cu;
    {
        const bool branch_taken_0x45163c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45163c) {
            ctx->pc = 0x45164Cu;
            goto label_45164c;
        }
    }
    ctx->pc = 0x451644u;
label_451644:
    // 0x451644: 0xd  break       0
    ctx->pc = 0x451644u;
    runtime->handleBreak(rdram, ctx);
label_451648:
    // 0x451648: 0x0  nop
    ctx->pc = 0x451648u;
    // NOP
label_45164c:
    // 0x45164c: 0x27a403a0  addiu       $a0, $sp, 0x3A0
    ctx->pc = 0x45164cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 928));
label_451650:
    // 0x451650: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x451650u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_451654:
    // 0x451654: 0xc11392c  jal         func_44E4B0
label_451658:
    if (ctx->pc == 0x451658u) {
        ctx->pc = 0x45165Cu;
        goto label_45165c;
    }
    ctx->pc = 0x451654u;
    SET_GPR_U32(ctx, 31, 0x45165Cu);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x451654u, 0x45165Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45165Cu;
label_45165c:
    // 0x45165c: 0x8fa20650  lw          $v0, 0x650($sp)
    ctx->pc = 0x45165cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1616)));
label_451660:
    // 0x451660: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x451660u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_451664:
    // 0x451664: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x451664u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_451668:
    // 0x451668: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
label_45166c:
    if (ctx->pc == 0x45166Cu) {
        ctx->pc = 0x451670u;
        goto label_451670;
    }
    ctx->pc = 0x451668u;
    {
        const bool branch_taken_0x451668 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x451668) {
            ctx->pc = 0x451714u;
            goto label_451714;
        }
    }
    ctx->pc = 0x451670u;
label_451670:
    // 0x451670: 0x8f82afe8  lw          $v0, -0x5018($gp)
    ctx->pc = 0x451670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946792)));
label_451674:
    // 0x451674: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_451678:
    if (ctx->pc == 0x451678u) {
        ctx->pc = 0x45167Cu;
        goto label_45167c;
    }
    ctx->pc = 0x451674u;
    {
        const bool branch_taken_0x451674 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x451674) {
            ctx->pc = 0x451714u;
            goto label_451714;
        }
    }
    ctx->pc = 0x45167Cu;
label_45167c:
    // 0x45167c: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x45167cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_451680:
    // 0x451680: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x451680u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_451684:
    // 0x451684: 0x27a60610  addiu       $a2, $sp, 0x610
    ctx->pc = 0x451684u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1552));
label_451688:
    // 0x451688: 0xc115ee8  jal         func_457BA0
label_45168c:
    if (ctx->pc == 0x45168Cu) {
        ctx->pc = 0x451690u;
        goto label_451690;
    }
    ctx->pc = 0x451688u;
    SET_GPR_U32(ctx, 31, 0x451690u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x451688u, 0x451690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x451690u;
label_451690:
    // 0x451690: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_451694:
    if (ctx->pc == 0x451694u) {
        ctx->pc = 0x451698u;
        goto label_451698;
    }
    ctx->pc = 0x451690u;
    {
        const bool branch_taken_0x451690 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x451690) {
            ctx->pc = 0x451714u;
            goto label_451714;
        }
    }
    ctx->pc = 0x451698u;
label_451698:
    // 0x451698: 0x8fa20618  lw          $v0, 0x618($sp)
    ctx->pc = 0x451698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1560)));
label_45169c:
    // 0x45169c: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_4516a0:
    if (ctx->pc == 0x4516A0u) {
        ctx->pc = 0x4516A4u;
        goto label_4516a4;
    }
    ctx->pc = 0x45169Cu;
    {
        const bool branch_taken_0x45169c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45169c) {
            ctx->pc = 0x451714u;
            goto label_451714;
        }
    }
    ctx->pc = 0x4516A4u;
label_4516a4:
    // 0x4516a4: 0x27a40280  addiu       $a0, $sp, 0x280
    ctx->pc = 0x4516a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
label_4516a8:
    // 0x4516a8: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x4516a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_4516ac:
    // 0x4516ac: 0x8fa60614  lw          $a2, 0x614($sp)
    ctx->pc = 0x4516acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1556)));
label_4516b0:
    // 0x4516b0: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x4516b0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_4516b4:
    // 0x4516b4: 0x24e7d990  addiu       $a3, $a3, -0x2670
    ctx->pc = 0x4516b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294957456));
label_4516b8:
    // 0x4516b8: 0x240801ef  addiu       $t0, $zero, 0x1EF
    ctx->pc = 0x4516b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 495));
label_4516bc:
    // 0x4516bc: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x4516bcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_4516c0:
    // 0x4516c0: 0x2529dd00  addiu       $t1, $t1, -0x2300
    ctx->pc = 0x4516c0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294958336));
label_4516c4:
    // 0x4516c4: 0xc113940  jal         func_44E500
label_4516c8:
    if (ctx->pc == 0x4516C8u) {
        ctx->pc = 0x4516CCu;
        goto label_4516cc;
    }
    ctx->pc = 0x4516C4u;
    SET_GPR_U32(ctx, 31, 0x4516CCu);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x4516C4u, 0x4516CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4516CCu;
label_4516cc:
    // 0x4516cc: 0x27a40280  addiu       $a0, $sp, 0x280
    ctx->pc = 0x4516ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
label_4516d0:
    // 0x4516d0: 0x2785afcc  addiu       $a1, $gp, -0x5034
    ctx->pc = 0x4516d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294946764));
label_4516d4:
    // 0x4516d4: 0xc115c24  jal         func_457090
label_4516d8:
    if (ctx->pc == 0x4516D8u) {
        ctx->pc = 0x4516DCu;
        goto label_4516dc;
    }
    ctx->pc = 0x4516D4u;
    SET_GPR_U32(ctx, 31, 0x4516DCu);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x4516D4u, 0x4516DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4516DCu;
label_4516dc:
    // 0x4516dc: 0x27a40280  addiu       $a0, $sp, 0x280
    ctx->pc = 0x4516dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
label_4516e0:
    // 0x4516e0: 0x8fa20618  lw          $v0, 0x618($sp)
    ctx->pc = 0x4516e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1560)));
label_4516e4:
    // 0x4516e4: 0x40f809  jalr        $v0
label_4516e8:
    if (ctx->pc == 0x4516E8u) {
        ctx->pc = 0x4516ECu;
        goto label_4516ec;
    }
    ctx->pc = 0x4516E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4516ECu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4516E4u, 0x4516ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4516ECu;
label_4516ec:
    // 0x4516ec: 0xaf82afe8  sw          $v0, -0x5018($gp)
    ctx->pc = 0x4516ecu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946792), GPR_U32(ctx, 2));
label_4516f0:
    // 0x4516f0: 0x8fa20280  lw          $v0, 0x280($sp)
    ctx->pc = 0x4516f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_4516f4:
    // 0x4516f4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_4516f8:
    if (ctx->pc == 0x4516F8u) {
        ctx->pc = 0x4516FCu;
        goto label_4516fc;
    }
    ctx->pc = 0x4516F4u;
    {
        const bool branch_taken_0x4516f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4516f4) {
            ctx->pc = 0x451704u;
            goto label_451704;
        }
    }
    ctx->pc = 0x4516FCu;
label_4516fc:
    // 0x4516fc: 0xd  break       0
    ctx->pc = 0x4516fcu;
    runtime->handleBreak(rdram, ctx);
label_451700:
    // 0x451700: 0x0  nop
    ctx->pc = 0x451700u;
    // NOP
label_451704:
    // 0x451704: 0x27a40280  addiu       $a0, $sp, 0x280
    ctx->pc = 0x451704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
label_451708:
    // 0x451708: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x451708u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_45170c:
    // 0x45170c: 0xc11392c  jal         func_44E4B0
label_451710:
    if (ctx->pc == 0x451710u) {
        ctx->pc = 0x451714u;
        goto label_451714;
    }
    ctx->pc = 0x45170Cu;
    SET_GPR_U32(ctx, 31, 0x451714u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x45170Cu, 0x451714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x451714u;
label_451714:
    // 0x451714: 0x27a40600  addiu       $a0, $sp, 0x600
    ctx->pc = 0x451714u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1536));
label_451718:
    // 0x451718: 0x2785afcc  addiu       $a1, $gp, -0x5034
    ctx->pc = 0x451718u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294946764));
label_45171c:
    // 0x45171c: 0xc040304  jal         func_100C10
label_451720:
    if (ctx->pc == 0x451720u) {
        ctx->pc = 0x451724u;
        goto label_451724;
    }
    ctx->pc = 0x45171Cu;
    SET_GPR_U32(ctx, 31, 0x451724u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x45171Cu, 0x451724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x451724u;
label_451724:
    // 0x451724: 0x27a40600  addiu       $a0, $sp, 0x600
    ctx->pc = 0x451724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1536));
label_451728:
    // 0x451728: 0x8fa50650  lw          $a1, 0x650($sp)
    ctx->pc = 0x451728u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1616)));
label_45172c:
    // 0x45172c: 0xc041ba4  jal         func_106E90
label_451730:
    if (ctx->pc == 0x451730u) {
        ctx->pc = 0x451734u;
        goto label_451734;
    }
    ctx->pc = 0x45172Cu;
    SET_GPR_U32(ctx, 31, 0x451734u);
    ctx->pc = 0x106E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106E90u, 0x45172Cu, 0x451734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x451734u;
label_451734:
    // 0x451734: 0x27a40600  addiu       $a0, $sp, 0x600
    ctx->pc = 0x451734u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1536));
label_451738:
    // 0x451738: 0x2785aff0  addiu       $a1, $gp, -0x5010
    ctx->pc = 0x451738u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294946800));
label_45173c:
    // 0x45173c: 0xc0424e8  jal         func_1093A0
label_451740:
    if (ctx->pc == 0x451740u) {
        ctx->pc = 0x451744u;
        goto label_451744;
    }
    ctx->pc = 0x45173Cu;
    SET_GPR_U32(ctx, 31, 0x451744u);
    ctx->pc = 0x1093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1093A0u, 0x45173Cu, 0x451744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x451744u;
label_451744:
    // 0x451744: 0x8f84bf28  lw          $a0, -0x40D8($gp)
    ctx->pc = 0x451744u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950696)));
label_451748:
    // 0x451748: 0x27a50600  addiu       $a1, $sp, 0x600
    ctx->pc = 0x451748u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1536));
label_45174c:
    // 0x45174c: 0xc114b38  jal         func_452CE0
label_451750:
    if (ctx->pc == 0x451750u) {
        ctx->pc = 0x451754u;
        goto label_451754;
    }
    ctx->pc = 0x45174Cu;
    SET_GPR_U32(ctx, 31, 0x451754u);
    ctx->pc = 0x452CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x452CE0u, 0x45174Cu, 0x451754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x451754u;
label_451754:
    // 0x451754: 0x1440002e  bnez        $v0, . + 4 + (0x2E << 2)
label_451758:
    if (ctx->pc == 0x451758u) {
        ctx->pc = 0x45175Cu;
        goto label_45175c;
    }
    ctx->pc = 0x451754u;
    {
        const bool branch_taken_0x451754 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x451754) {
            ctx->pc = 0x451810u;
            goto label_451810;
        }
    }
    ctx->pc = 0x45175Cu;
label_45175c:
    // 0x45175c: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x45175cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_451760:
    // 0x451760: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x451760u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_451764:
    // 0x451764: 0x27a605f0  addiu       $a2, $sp, 0x5F0
    ctx->pc = 0x451764u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1520));
label_451768:
    // 0x451768: 0xc115ee8  jal         func_457BA0
label_45176c:
    if (ctx->pc == 0x45176Cu) {
        ctx->pc = 0x451770u;
        goto label_451770;
    }
    ctx->pc = 0x451768u;
    SET_GPR_U32(ctx, 31, 0x451770u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x451768u, 0x451770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x451770u;
label_451770:
    // 0x451770: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_451774:
    if (ctx->pc == 0x451774u) {
        ctx->pc = 0x451778u;
        goto label_451778;
    }
    ctx->pc = 0x451770u;
    {
        const bool branch_taken_0x451770 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x451770) {
            ctx->pc = 0x4517F0u;
            goto label_4517f0;
        }
    }
    ctx->pc = 0x451778u;
label_451778:
    // 0x451778: 0x8fa205f8  lw          $v0, 0x5F8($sp)
    ctx->pc = 0x451778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1528)));
label_45177c:
    // 0x45177c: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_451780:
    if (ctx->pc == 0x451780u) {
        ctx->pc = 0x451784u;
        goto label_451784;
    }
    ctx->pc = 0x45177Cu;
    {
        const bool branch_taken_0x45177c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45177c) {
            ctx->pc = 0x4517F0u;
            goto label_4517f0;
        }
    }
    ctx->pc = 0x451784u;
label_451784:
    // 0x451784: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x451784u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_451788:
    // 0x451788: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x451788u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_45178c:
    // 0x45178c: 0x8fa605f4  lw          $a2, 0x5F4($sp)
    ctx->pc = 0x45178cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1524)));
label_451790:
    // 0x451790: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x451790u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_451794:
    // 0x451794: 0x24e7d990  addiu       $a3, $a3, -0x2670
    ctx->pc = 0x451794u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294957456));
label_451798:
    // 0x451798: 0x240801fa  addiu       $t0, $zero, 0x1FA
    ctx->pc = 0x451798u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 506));
label_45179c:
    // 0x45179c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x45179cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4517a0:
    // 0x4517a0: 0xc113940  jal         func_44E500
label_4517a4:
    if (ctx->pc == 0x4517A4u) {
        ctx->pc = 0x4517A8u;
        goto label_4517a8;
    }
    ctx->pc = 0x4517A0u;
    SET_GPR_U32(ctx, 31, 0x4517A8u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x4517A0u, 0x4517A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4517A8u;
label_4517a8:
    // 0x4517a8: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x4517a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_4517ac:
    // 0x4517ac: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x4517acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_4517b0:
    // 0x4517b0: 0x24a5dd20  addiu       $a1, $a1, -0x22E0
    ctx->pc = 0x4517b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958368));
label_4517b4:
    // 0x4517b4: 0xc115c24  jal         func_457090
label_4517b8:
    if (ctx->pc == 0x4517B8u) {
        ctx->pc = 0x4517BCu;
        goto label_4517bc;
    }
    ctx->pc = 0x4517B4u;
    SET_GPR_U32(ctx, 31, 0x4517BCu);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x4517B4u, 0x4517BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4517BCu;
label_4517bc:
    // 0x4517bc: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x4517bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_4517c0:
    // 0x4517c0: 0x8fa205f8  lw          $v0, 0x5F8($sp)
    ctx->pc = 0x4517c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1528)));
label_4517c4:
    // 0x4517c4: 0x40f809  jalr        $v0
label_4517c8:
    if (ctx->pc == 0x4517C8u) {
        ctx->pc = 0x4517CCu;
        goto label_4517cc;
    }
    ctx->pc = 0x4517C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4517CCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4517C4u, 0x4517CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4517CCu;
label_4517cc:
    // 0x4517cc: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x4517ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_4517d0:
    // 0x4517d0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_4517d4:
    if (ctx->pc == 0x4517D4u) {
        ctx->pc = 0x4517D8u;
        goto label_4517d8;
    }
    ctx->pc = 0x4517D0u;
    {
        const bool branch_taken_0x4517d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4517d0) {
            ctx->pc = 0x4517E0u;
            goto label_4517e0;
        }
    }
    ctx->pc = 0x4517D8u;
label_4517d8:
    // 0x4517d8: 0xd  break       0
    ctx->pc = 0x4517d8u;
    runtime->handleBreak(rdram, ctx);
label_4517dc:
    // 0x4517dc: 0x0  nop
    ctx->pc = 0x4517dcu;
    // NOP
label_4517e0:
    // 0x4517e0: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x4517e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_4517e4:
    // 0x4517e4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x4517e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4517e8:
    // 0x4517e8: 0xc11392c  jal         func_44E4B0
label_4517ec:
    if (ctx->pc == 0x4517ECu) {
        ctx->pc = 0x4517F0u;
        goto label_4517f0;
    }
    ctx->pc = 0x4517E8u;
    SET_GPR_U32(ctx, 31, 0x4517F0u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x4517E8u, 0x4517F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4517F0u;
label_4517f0:
    // 0x4517f0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4517f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4517f4:
    // 0x4517f4: 0x27a40600  addiu       $a0, $sp, 0x600
    ctx->pc = 0x4517f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1536));
label_4517f8:
    // 0x4517f8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x4517f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4517fc:
    // 0x4517fc: 0xc0402d4  jal         func_100B50
label_451800:
    if (ctx->pc == 0x451800u) {
        ctx->pc = 0x451804u;
        goto label_451804;
    }
    ctx->pc = 0x4517FCu;
    SET_GPR_U32(ctx, 31, 0x451804u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x4517FCu, 0x451804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x451804u;
label_451804:
    // 0x451804: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x451804u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_451808:
    // 0x451808: 0x10000046  b           . + 4 + (0x46 << 2)
label_45180c:
    if (ctx->pc == 0x45180Cu) {
        ctx->pc = 0x451810u;
        goto label_451810;
    }
    ctx->pc = 0x451808u;
    {
        const bool branch_taken_0x451808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x451808) {
            ctx->pc = 0x451924u;
            goto label_451924;
        }
    }
    ctx->pc = 0x451810u;
label_451810:
    // 0x451810: 0x27a40600  addiu       $a0, $sp, 0x600
    ctx->pc = 0x451810u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1536));
label_451814:
    // 0x451814: 0x8fa50650  lw          $a1, 0x650($sp)
    ctx->pc = 0x451814u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1616)));
label_451818:
    // 0x451818: 0xc041ba4  jal         func_106E90
label_45181c:
    if (ctx->pc == 0x45181Cu) {
        ctx->pc = 0x451820u;
        goto label_451820;
    }
    ctx->pc = 0x451818u;
    SET_GPR_U32(ctx, 31, 0x451820u);
    ctx->pc = 0x106E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106E90u, 0x451818u, 0x451820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x451820u;
label_451820:
    // 0x451820: 0x27a40600  addiu       $a0, $sp, 0x600
    ctx->pc = 0x451820u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1536));
label_451824:
    // 0x451824: 0x2785aff8  addiu       $a1, $gp, -0x5008
    ctx->pc = 0x451824u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294946808));
label_451828:
    // 0x451828: 0xc0424e8  jal         func_1093A0
label_45182c:
    if (ctx->pc == 0x45182Cu) {
        ctx->pc = 0x451830u;
        goto label_451830;
    }
    ctx->pc = 0x451828u;
    SET_GPR_U32(ctx, 31, 0x451830u);
    ctx->pc = 0x1093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1093A0u, 0x451828u, 0x451830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x451830u;
label_451830:
    // 0x451830: 0x8f84bf28  lw          $a0, -0x40D8($gp)
    ctx->pc = 0x451830u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950696)));
label_451834:
    // 0x451834: 0x27a50600  addiu       $a1, $sp, 0x600
    ctx->pc = 0x451834u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1536));
label_451838:
    // 0x451838: 0x8fa60640  lw          $a2, 0x640($sp)
    ctx->pc = 0x451838u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1600)));
label_45183c:
    // 0x45183c: 0xc114ee8  jal         func_453BA0
label_451840:
    if (ctx->pc == 0x451840u) {
        ctx->pc = 0x451844u;
        goto label_451844;
    }
    ctx->pc = 0x45183Cu;
    SET_GPR_U32(ctx, 31, 0x451844u);
    ctx->pc = 0x453BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x453BA0u, 0x45183Cu, 0x451844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x451844u;
label_451844:
    // 0x451844: 0x1440002e  bnez        $v0, . + 4 + (0x2E << 2)
label_451848:
    if (ctx->pc == 0x451848u) {
        ctx->pc = 0x45184Cu;
        goto label_45184c;
    }
    ctx->pc = 0x451844u;
    {
        const bool branch_taken_0x451844 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x451844) {
            ctx->pc = 0x451900u;
            goto label_451900;
        }
    }
    ctx->pc = 0x45184Cu;
label_45184c:
    // 0x45184c: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x45184cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_451850:
    // 0x451850: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x451850u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_451854:
    // 0x451854: 0x27a605e0  addiu       $a2, $sp, 0x5E0
    ctx->pc = 0x451854u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1504));
label_451858:
    // 0x451858: 0xc115ee8  jal         func_457BA0
label_45185c:
    if (ctx->pc == 0x45185Cu) {
        ctx->pc = 0x451860u;
        goto label_451860;
    }
    ctx->pc = 0x451858u;
    SET_GPR_U32(ctx, 31, 0x451860u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x451858u, 0x451860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x451860u;
label_451860:
    // 0x451860: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_451864:
    if (ctx->pc == 0x451864u) {
        ctx->pc = 0x451868u;
        goto label_451868;
    }
    ctx->pc = 0x451860u;
    {
        const bool branch_taken_0x451860 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x451860) {
            ctx->pc = 0x4518E0u;
            goto label_4518e0;
        }
    }
    ctx->pc = 0x451868u;
label_451868:
    // 0x451868: 0x8fa205e8  lw          $v0, 0x5E8($sp)
    ctx->pc = 0x451868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1512)));
label_45186c:
    // 0x45186c: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_451870:
    if (ctx->pc == 0x451870u) {
        ctx->pc = 0x451874u;
        goto label_451874;
    }
    ctx->pc = 0x45186Cu;
    {
        const bool branch_taken_0x45186c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45186c) {
            ctx->pc = 0x4518E0u;
            goto label_4518e0;
        }
    }
    ctx->pc = 0x451874u;
label_451874:
    // 0x451874: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x451874u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_451878:
    // 0x451878: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x451878u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_45187c:
    // 0x45187c: 0x8fa605e4  lw          $a2, 0x5E4($sp)
    ctx->pc = 0x45187cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1508)));
label_451880:
    // 0x451880: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x451880u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_451884:
    // 0x451884: 0x24e7d990  addiu       $a3, $a3, -0x2670
    ctx->pc = 0x451884u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294957456));
label_451888:
    // 0x451888: 0x24080206  addiu       $t0, $zero, 0x206
    ctx->pc = 0x451888u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 518));
label_45188c:
    // 0x45188c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x45188cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_451890:
    // 0x451890: 0xc113940  jal         func_44E500
label_451894:
    if (ctx->pc == 0x451894u) {
        ctx->pc = 0x451898u;
        goto label_451898;
    }
    ctx->pc = 0x451890u;
    SET_GPR_U32(ctx, 31, 0x451898u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x451890u, 0x451898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x451898u;
label_451898:
    // 0x451898: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x451898u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_45189c:
    // 0x45189c: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x45189cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_4518a0:
    // 0x4518a0: 0x24a5dd20  addiu       $a1, $a1, -0x22E0
    ctx->pc = 0x4518a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958368));
label_4518a4:
    // 0x4518a4: 0xc115c24  jal         func_457090
label_4518a8:
    if (ctx->pc == 0x4518A8u) {
        ctx->pc = 0x4518ACu;
        goto label_4518ac;
    }
    ctx->pc = 0x4518A4u;
    SET_GPR_U32(ctx, 31, 0x4518ACu);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x4518A4u, 0x4518ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4518ACu;
label_4518ac:
    // 0x4518ac: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x4518acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_4518b0:
    // 0x4518b0: 0x8fa205e8  lw          $v0, 0x5E8($sp)
    ctx->pc = 0x4518b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1512)));
label_4518b4:
    // 0x4518b4: 0x40f809  jalr        $v0
label_4518b8:
    if (ctx->pc == 0x4518B8u) {
        ctx->pc = 0x4518BCu;
        goto label_4518bc;
    }
    ctx->pc = 0x4518B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4518BCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4518B4u, 0x4518BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4518BCu;
label_4518bc:
    // 0x4518bc: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x4518bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_4518c0:
    // 0x4518c0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_4518c4:
    if (ctx->pc == 0x4518C4u) {
        ctx->pc = 0x4518C8u;
        goto label_4518c8;
    }
    ctx->pc = 0x4518C0u;
    {
        const bool branch_taken_0x4518c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4518c0) {
            ctx->pc = 0x4518D0u;
            goto label_4518d0;
        }
    }
    ctx->pc = 0x4518C8u;
label_4518c8:
    // 0x4518c8: 0xd  break       0
    ctx->pc = 0x4518c8u;
    runtime->handleBreak(rdram, ctx);
label_4518cc:
    // 0x4518cc: 0x0  nop
    ctx->pc = 0x4518ccu;
    // NOP
label_4518d0:
    // 0x4518d0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x4518d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_4518d4:
    // 0x4518d4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x4518d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4518d8:
    // 0x4518d8: 0xc11392c  jal         func_44E4B0
label_4518dc:
    if (ctx->pc == 0x4518DCu) {
        ctx->pc = 0x4518E0u;
        goto label_4518e0;
    }
    ctx->pc = 0x4518D8u;
    SET_GPR_U32(ctx, 31, 0x4518E0u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x4518D8u, 0x4518E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4518E0u;
label_4518e0:
    // 0x4518e0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4518e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4518e4:
    // 0x4518e4: 0x27a40600  addiu       $a0, $sp, 0x600
    ctx->pc = 0x4518e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1536));
label_4518e8:
    // 0x4518e8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x4518e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4518ec:
    // 0x4518ec: 0xc0402d4  jal         func_100B50
label_4518f0:
    if (ctx->pc == 0x4518F0u) {
        ctx->pc = 0x4518F4u;
        goto label_4518f4;
    }
    ctx->pc = 0x4518ECu;
    SET_GPR_U32(ctx, 31, 0x4518F4u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x4518ECu, 0x4518F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4518F4u;
label_4518f4:
    // 0x4518f4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4518f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4518f8:
    // 0x4518f8: 0x1000000a  b           . + 4 + (0xA << 2)
label_4518fc:
    if (ctx->pc == 0x4518FCu) {
        ctx->pc = 0x451900u;
        goto label_451900;
    }
    ctx->pc = 0x4518F8u;
    {
        const bool branch_taken_0x4518f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4518f8) {
            ctx->pc = 0x451924u;
            goto label_451924;
        }
    }
    ctx->pc = 0x451900u;
label_451900:
    // 0x451900: 0x8fa40640  lw          $a0, 0x640($sp)
    ctx->pc = 0x451900u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1600)));
label_451904:
    // 0x451904: 0xc11471c  jal         func_451C70
label_451908:
    if (ctx->pc == 0x451908u) {
        ctx->pc = 0x45190Cu;
        goto label_45190c;
    }
    ctx->pc = 0x451904u;
    SET_GPR_U32(ctx, 31, 0x45190Cu);
    ctx->pc = 0x451C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x451C70u, 0x451904u, 0x45190Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45190Cu;
label_45190c:
    // 0x45190c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x45190cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_451910:
    // 0x451910: 0x27a40600  addiu       $a0, $sp, 0x600
    ctx->pc = 0x451910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1536));
label_451914:
    // 0x451914: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x451914u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_451918:
    // 0x451918: 0xc0402d4  jal         func_100B50
label_45191c:
    if (ctx->pc == 0x45191Cu) {
        ctx->pc = 0x451920u;
        goto label_451920;
    }
    ctx->pc = 0x451918u;
    SET_GPR_U32(ctx, 31, 0x451920u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x451918u, 0x451920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x451920u;
label_451920:
    // 0x451920: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x451920u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_451924:
    // 0x451924: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x451924u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_451928:
    // 0x451928: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x451928u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_45192c:
    // 0x45192c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x45192cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_451930:
    // 0x451930: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x451930u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_451934:
    // 0x451934: 0x27bd0660  addiu       $sp, $sp, 0x660
    ctx->pc = 0x451934u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1632));
label_451938:
    // 0x451938: 0x3e00008  jr          $ra
label_45193c:
    if (ctx->pc == 0x45193Cu) {
        ctx->pc = 0x451940u;
        goto label_fallthrough_0x451938;
    }
    ctx->pc = 0x451938u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x451938u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x451938:
    ctx->pc = 0x451940u;
}
