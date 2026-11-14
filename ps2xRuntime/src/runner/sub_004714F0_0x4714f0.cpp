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

// Function: sub_004714F0
// Address: 0x4714f0 - 0x471990
void sub_004714F0_0x4714f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004714F0_0x4714f0");
#endif

    switch (ctx->pc) {
        case 0x4714f0u: goto label_4714f0;
        case 0x4714f4u: goto label_4714f4;
        case 0x4714f8u: goto label_4714f8;
        case 0x4714fcu: goto label_4714fc;
        case 0x471500u: goto label_471500;
        case 0x471504u: goto label_471504;
        case 0x471508u: goto label_471508;
        case 0x47150cu: goto label_47150c;
        case 0x471510u: goto label_471510;
        case 0x471514u: goto label_471514;
        case 0x471518u: goto label_471518;
        case 0x47151cu: goto label_47151c;
        case 0x471520u: goto label_471520;
        case 0x471524u: goto label_471524;
        case 0x471528u: goto label_471528;
        case 0x47152cu: goto label_47152c;
        case 0x471530u: goto label_471530;
        case 0x471534u: goto label_471534;
        case 0x471538u: goto label_471538;
        case 0x47153cu: goto label_47153c;
        case 0x471540u: goto label_471540;
        case 0x471544u: goto label_471544;
        case 0x471548u: goto label_471548;
        case 0x47154cu: goto label_47154c;
        case 0x471550u: goto label_471550;
        case 0x471554u: goto label_471554;
        case 0x471558u: goto label_471558;
        case 0x47155cu: goto label_47155c;
        case 0x471560u: goto label_471560;
        case 0x471564u: goto label_471564;
        case 0x471568u: goto label_471568;
        case 0x47156cu: goto label_47156c;
        case 0x471570u: goto label_471570;
        case 0x471574u: goto label_471574;
        case 0x471578u: goto label_471578;
        case 0x47157cu: goto label_47157c;
        case 0x471580u: goto label_471580;
        case 0x471584u: goto label_471584;
        case 0x471588u: goto label_471588;
        case 0x47158cu: goto label_47158c;
        case 0x471590u: goto label_471590;
        case 0x471594u: goto label_471594;
        case 0x471598u: goto label_471598;
        case 0x47159cu: goto label_47159c;
        case 0x4715a0u: goto label_4715a0;
        case 0x4715a4u: goto label_4715a4;
        case 0x4715a8u: goto label_4715a8;
        case 0x4715acu: goto label_4715ac;
        case 0x4715b0u: goto label_4715b0;
        case 0x4715b4u: goto label_4715b4;
        case 0x4715b8u: goto label_4715b8;
        case 0x4715bcu: goto label_4715bc;
        case 0x4715c0u: goto label_4715c0;
        case 0x4715c4u: goto label_4715c4;
        case 0x4715c8u: goto label_4715c8;
        case 0x4715ccu: goto label_4715cc;
        case 0x4715d0u: goto label_4715d0;
        case 0x4715d4u: goto label_4715d4;
        case 0x4715d8u: goto label_4715d8;
        case 0x4715dcu: goto label_4715dc;
        case 0x4715e0u: goto label_4715e0;
        case 0x4715e4u: goto label_4715e4;
        case 0x4715e8u: goto label_4715e8;
        case 0x4715ecu: goto label_4715ec;
        case 0x4715f0u: goto label_4715f0;
        case 0x4715f4u: goto label_4715f4;
        case 0x4715f8u: goto label_4715f8;
        case 0x4715fcu: goto label_4715fc;
        case 0x471600u: goto label_471600;
        case 0x471604u: goto label_471604;
        case 0x471608u: goto label_471608;
        case 0x47160cu: goto label_47160c;
        case 0x471610u: goto label_471610;
        case 0x471614u: goto label_471614;
        case 0x471618u: goto label_471618;
        case 0x47161cu: goto label_47161c;
        case 0x471620u: goto label_471620;
        case 0x471624u: goto label_471624;
        case 0x471628u: goto label_471628;
        case 0x47162cu: goto label_47162c;
        case 0x471630u: goto label_471630;
        case 0x471634u: goto label_471634;
        case 0x471638u: goto label_471638;
        case 0x47163cu: goto label_47163c;
        case 0x471640u: goto label_471640;
        case 0x471644u: goto label_471644;
        case 0x471648u: goto label_471648;
        case 0x47164cu: goto label_47164c;
        case 0x471650u: goto label_471650;
        case 0x471654u: goto label_471654;
        case 0x471658u: goto label_471658;
        case 0x47165cu: goto label_47165c;
        case 0x471660u: goto label_471660;
        case 0x471664u: goto label_471664;
        case 0x471668u: goto label_471668;
        case 0x47166cu: goto label_47166c;
        case 0x471670u: goto label_471670;
        case 0x471674u: goto label_471674;
        case 0x471678u: goto label_471678;
        case 0x47167cu: goto label_47167c;
        case 0x471680u: goto label_471680;
        case 0x471684u: goto label_471684;
        case 0x471688u: goto label_471688;
        case 0x47168cu: goto label_47168c;
        case 0x471690u: goto label_471690;
        case 0x471694u: goto label_471694;
        case 0x471698u: goto label_471698;
        case 0x47169cu: goto label_47169c;
        case 0x4716a0u: goto label_4716a0;
        case 0x4716a4u: goto label_4716a4;
        case 0x4716a8u: goto label_4716a8;
        case 0x4716acu: goto label_4716ac;
        case 0x4716b0u: goto label_4716b0;
        case 0x4716b4u: goto label_4716b4;
        case 0x4716b8u: goto label_4716b8;
        case 0x4716bcu: goto label_4716bc;
        case 0x4716c0u: goto label_4716c0;
        case 0x4716c4u: goto label_4716c4;
        case 0x4716c8u: goto label_4716c8;
        case 0x4716ccu: goto label_4716cc;
        case 0x4716d0u: goto label_4716d0;
        case 0x4716d4u: goto label_4716d4;
        case 0x4716d8u: goto label_4716d8;
        case 0x4716dcu: goto label_4716dc;
        case 0x4716e0u: goto label_4716e0;
        case 0x4716e4u: goto label_4716e4;
        case 0x4716e8u: goto label_4716e8;
        case 0x4716ecu: goto label_4716ec;
        case 0x4716f0u: goto label_4716f0;
        case 0x4716f4u: goto label_4716f4;
        case 0x4716f8u: goto label_4716f8;
        case 0x4716fcu: goto label_4716fc;
        case 0x471700u: goto label_471700;
        case 0x471704u: goto label_471704;
        case 0x471708u: goto label_471708;
        case 0x47170cu: goto label_47170c;
        case 0x471710u: goto label_471710;
        case 0x471714u: goto label_471714;
        case 0x471718u: goto label_471718;
        case 0x47171cu: goto label_47171c;
        case 0x471720u: goto label_471720;
        case 0x471724u: goto label_471724;
        case 0x471728u: goto label_471728;
        case 0x47172cu: goto label_47172c;
        case 0x471730u: goto label_471730;
        case 0x471734u: goto label_471734;
        case 0x471738u: goto label_471738;
        case 0x47173cu: goto label_47173c;
        case 0x471740u: goto label_471740;
        case 0x471744u: goto label_471744;
        case 0x471748u: goto label_471748;
        case 0x47174cu: goto label_47174c;
        case 0x471750u: goto label_471750;
        case 0x471754u: goto label_471754;
        case 0x471758u: goto label_471758;
        case 0x47175cu: goto label_47175c;
        case 0x471760u: goto label_471760;
        case 0x471764u: goto label_471764;
        case 0x471768u: goto label_471768;
        case 0x47176cu: goto label_47176c;
        case 0x471770u: goto label_471770;
        case 0x471774u: goto label_471774;
        case 0x471778u: goto label_471778;
        case 0x47177cu: goto label_47177c;
        case 0x471780u: goto label_471780;
        case 0x471784u: goto label_471784;
        case 0x471788u: goto label_471788;
        case 0x47178cu: goto label_47178c;
        case 0x471790u: goto label_471790;
        case 0x471794u: goto label_471794;
        case 0x471798u: goto label_471798;
        case 0x47179cu: goto label_47179c;
        case 0x4717a0u: goto label_4717a0;
        case 0x4717a4u: goto label_4717a4;
        case 0x4717a8u: goto label_4717a8;
        case 0x4717acu: goto label_4717ac;
        case 0x4717b0u: goto label_4717b0;
        case 0x4717b4u: goto label_4717b4;
        case 0x4717b8u: goto label_4717b8;
        case 0x4717bcu: goto label_4717bc;
        case 0x4717c0u: goto label_4717c0;
        case 0x4717c4u: goto label_4717c4;
        case 0x4717c8u: goto label_4717c8;
        case 0x4717ccu: goto label_4717cc;
        case 0x4717d0u: goto label_4717d0;
        case 0x4717d4u: goto label_4717d4;
        case 0x4717d8u: goto label_4717d8;
        case 0x4717dcu: goto label_4717dc;
        case 0x4717e0u: goto label_4717e0;
        case 0x4717e4u: goto label_4717e4;
        case 0x4717e8u: goto label_4717e8;
        case 0x4717ecu: goto label_4717ec;
        case 0x4717f0u: goto label_4717f0;
        case 0x4717f4u: goto label_4717f4;
        case 0x4717f8u: goto label_4717f8;
        case 0x4717fcu: goto label_4717fc;
        case 0x471800u: goto label_471800;
        case 0x471804u: goto label_471804;
        case 0x471808u: goto label_471808;
        case 0x47180cu: goto label_47180c;
        case 0x471810u: goto label_471810;
        case 0x471814u: goto label_471814;
        case 0x471818u: goto label_471818;
        case 0x47181cu: goto label_47181c;
        case 0x471820u: goto label_471820;
        case 0x471824u: goto label_471824;
        case 0x471828u: goto label_471828;
        case 0x47182cu: goto label_47182c;
        case 0x471830u: goto label_471830;
        case 0x471834u: goto label_471834;
        case 0x471838u: goto label_471838;
        case 0x47183cu: goto label_47183c;
        case 0x471840u: goto label_471840;
        case 0x471844u: goto label_471844;
        case 0x471848u: goto label_471848;
        case 0x47184cu: goto label_47184c;
        case 0x471850u: goto label_471850;
        case 0x471854u: goto label_471854;
        case 0x471858u: goto label_471858;
        case 0x47185cu: goto label_47185c;
        case 0x471860u: goto label_471860;
        case 0x471864u: goto label_471864;
        case 0x471868u: goto label_471868;
        case 0x47186cu: goto label_47186c;
        case 0x471870u: goto label_471870;
        case 0x471874u: goto label_471874;
        case 0x471878u: goto label_471878;
        case 0x47187cu: goto label_47187c;
        case 0x471880u: goto label_471880;
        case 0x471884u: goto label_471884;
        case 0x471888u: goto label_471888;
        case 0x47188cu: goto label_47188c;
        case 0x471890u: goto label_471890;
        case 0x471894u: goto label_471894;
        case 0x471898u: goto label_471898;
        case 0x47189cu: goto label_47189c;
        case 0x4718a0u: goto label_4718a0;
        case 0x4718a4u: goto label_4718a4;
        case 0x4718a8u: goto label_4718a8;
        case 0x4718acu: goto label_4718ac;
        case 0x4718b0u: goto label_4718b0;
        case 0x4718b4u: goto label_4718b4;
        case 0x4718b8u: goto label_4718b8;
        case 0x4718bcu: goto label_4718bc;
        case 0x4718c0u: goto label_4718c0;
        case 0x4718c4u: goto label_4718c4;
        case 0x4718c8u: goto label_4718c8;
        case 0x4718ccu: goto label_4718cc;
        case 0x4718d0u: goto label_4718d0;
        case 0x4718d4u: goto label_4718d4;
        case 0x4718d8u: goto label_4718d8;
        case 0x4718dcu: goto label_4718dc;
        case 0x4718e0u: goto label_4718e0;
        case 0x4718e4u: goto label_4718e4;
        case 0x4718e8u: goto label_4718e8;
        case 0x4718ecu: goto label_4718ec;
        case 0x4718f0u: goto label_4718f0;
        case 0x4718f4u: goto label_4718f4;
        case 0x4718f8u: goto label_4718f8;
        case 0x4718fcu: goto label_4718fc;
        case 0x471900u: goto label_471900;
        case 0x471904u: goto label_471904;
        case 0x471908u: goto label_471908;
        case 0x47190cu: goto label_47190c;
        case 0x471910u: goto label_471910;
        case 0x471914u: goto label_471914;
        case 0x471918u: goto label_471918;
        case 0x47191cu: goto label_47191c;
        case 0x471920u: goto label_471920;
        case 0x471924u: goto label_471924;
        case 0x471928u: goto label_471928;
        case 0x47192cu: goto label_47192c;
        case 0x471930u: goto label_471930;
        case 0x471934u: goto label_471934;
        case 0x471938u: goto label_471938;
        case 0x47193cu: goto label_47193c;
        case 0x471940u: goto label_471940;
        case 0x471944u: goto label_471944;
        case 0x471948u: goto label_471948;
        case 0x47194cu: goto label_47194c;
        case 0x471950u: goto label_471950;
        case 0x471954u: goto label_471954;
        case 0x471958u: goto label_471958;
        case 0x47195cu: goto label_47195c;
        case 0x471960u: goto label_471960;
        case 0x471964u: goto label_471964;
        case 0x471968u: goto label_471968;
        case 0x47196cu: goto label_47196c;
        case 0x471970u: goto label_471970;
        case 0x471974u: goto label_471974;
        case 0x471978u: goto label_471978;
        case 0x47197cu: goto label_47197c;
        case 0x471980u: goto label_471980;
        case 0x471984u: goto label_471984;
        case 0x471988u: goto label_471988;
        case 0x47198cu: goto label_47198c;
        default: break;
    }

    ctx->pc = 0x4714f0u;

label_4714f0:
    // 0x4714f0: 0x27bdf970  addiu       $sp, $sp, -0x690
    ctx->pc = 0x4714f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965616));
label_4714f4:
    // 0x4714f4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x4714f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_4714f8:
    // 0x4714f8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x4714f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_4714fc:
    // 0x4714fc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x4714fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_471500:
    // 0x471500: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x471500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_471504:
    // 0x471504: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x471504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_471508:
    // 0x471508: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x471508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_47150c:
    // 0x47150c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x47150cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_471510:
    // 0x471510: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x471510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_471514:
    // 0x471514: 0xafa40670  sw          $a0, 0x670($sp)
    ctx->pc = 0x471514u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1648), GPR_U32(ctx, 4));
label_471518:
    // 0x471518: 0xafa50680  sw          $a1, 0x680($sp)
    ctx->pc = 0x471518u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1664), GPR_U32(ctx, 5));
label_47151c:
    // 0x47151c: 0x8fa20670  lw          $v0, 0x670($sp)
    ctx->pc = 0x47151cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1648)));
label_471520:
    // 0x471520: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x471520u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_471524:
    // 0x471524: 0x1600002b  bnez        $s0, . + 4 + (0x2B << 2)
label_471528:
    if (ctx->pc == 0x471528u) {
        ctx->pc = 0x47152Cu;
        goto label_47152c;
    }
    ctx->pc = 0x471524u;
    {
        const bool branch_taken_0x471524 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x471524) {
            ctx->pc = 0x4715D4u;
            goto label_4715d4;
        }
    }
    ctx->pc = 0x47152Cu;
label_47152c:
    // 0x47152c: 0x8f82b37c  lw          $v0, -0x4C84($gp)
    ctx->pc = 0x47152cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947708)));
label_471530:
    // 0x471530: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_471534:
    if (ctx->pc == 0x471534u) {
        ctx->pc = 0x471538u;
        goto label_471538;
    }
    ctx->pc = 0x471530u;
    {
        const bool branch_taken_0x471530 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x471530) {
            ctx->pc = 0x4715D4u;
            goto label_4715d4;
        }
    }
    ctx->pc = 0x471538u;
label_471538:
    // 0x471538: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x471538u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_47153c:
    // 0x47153c: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x47153cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_471540:
    // 0x471540: 0x27a60660  addiu       $a2, $sp, 0x660
    ctx->pc = 0x471540u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1632));
label_471544:
    // 0x471544: 0xc115ee8  jal         func_457BA0
label_471548:
    if (ctx->pc == 0x471548u) {
        ctx->pc = 0x47154Cu;
        goto label_47154c;
    }
    ctx->pc = 0x471544u;
    SET_GPR_U32(ctx, 31, 0x47154Cu);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x471544u, 0x47154Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47154Cu;
label_47154c:
    // 0x47154c: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_471550:
    if (ctx->pc == 0x471550u) {
        ctx->pc = 0x471554u;
        goto label_471554;
    }
    ctx->pc = 0x47154Cu;
    {
        const bool branch_taken_0x47154c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47154c) {
            ctx->pc = 0x4715D4u;
            goto label_4715d4;
        }
    }
    ctx->pc = 0x471554u;
label_471554:
    // 0x471554: 0x8fa20668  lw          $v0, 0x668($sp)
    ctx->pc = 0x471554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1640)));
label_471558:
    // 0x471558: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_47155c:
    if (ctx->pc == 0x47155Cu) {
        ctx->pc = 0x471560u;
        goto label_471560;
    }
    ctx->pc = 0x471558u;
    {
        const bool branch_taken_0x471558 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x471558) {
            ctx->pc = 0x4715D4u;
            goto label_4715d4;
        }
    }
    ctx->pc = 0x471560u;
label_471560:
    // 0x471560: 0x27a40500  addiu       $a0, $sp, 0x500
    ctx->pc = 0x471560u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1280));
label_471564:
    // 0x471564: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x471564u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_471568:
    // 0x471568: 0x8fa60664  lw          $a2, 0x664($sp)
    ctx->pc = 0x471568u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1636)));
label_47156c:
    // 0x47156c: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x47156cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_471570:
    // 0x471570: 0x24e701e0  addiu       $a3, $a3, 0x1E0
    ctx->pc = 0x471570u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 480));
label_471574:
    // 0x471574: 0x2408009e  addiu       $t0, $zero, 0x9E
    ctx->pc = 0x471574u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 158));
label_471578:
    // 0x471578: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x471578u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_47157c:
    // 0x47157c: 0x252901f0  addiu       $t1, $t1, 0x1F0
    ctx->pc = 0x47157cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 496));
label_471580:
    // 0x471580: 0xc113940  jal         func_44E500
label_471584:
    if (ctx->pc == 0x471584u) {
        ctx->pc = 0x471588u;
        goto label_471588;
    }
    ctx->pc = 0x471580u;
    SET_GPR_U32(ctx, 31, 0x471588u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x471580u, 0x471588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x471588u;
label_471588:
    // 0x471588: 0x27a40500  addiu       $a0, $sp, 0x500
    ctx->pc = 0x471588u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1280));
label_47158c:
    // 0x47158c: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x47158cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_471590:
    // 0x471590: 0x24a50200  addiu       $a1, $a1, 0x200
    ctx->pc = 0x471590u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 512));
label_471594:
    // 0x471594: 0xc115c24  jal         func_457090
label_471598:
    if (ctx->pc == 0x471598u) {
        ctx->pc = 0x47159Cu;
        goto label_47159c;
    }
    ctx->pc = 0x471594u;
    SET_GPR_U32(ctx, 31, 0x47159Cu);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x471594u, 0x47159Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47159Cu;
label_47159c:
    // 0x47159c: 0x27a40500  addiu       $a0, $sp, 0x500
    ctx->pc = 0x47159cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1280));
label_4715a0:
    // 0x4715a0: 0x8fa20668  lw          $v0, 0x668($sp)
    ctx->pc = 0x4715a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1640)));
label_4715a4:
    // 0x4715a4: 0x40f809  jalr        $v0
label_4715a8:
    if (ctx->pc == 0x4715A8u) {
        ctx->pc = 0x4715ACu;
        goto label_4715ac;
    }
    ctx->pc = 0x4715A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4715ACu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4715A4u, 0x4715ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4715ACu;
label_4715ac:
    // 0x4715ac: 0xaf82b37c  sw          $v0, -0x4C84($gp)
    ctx->pc = 0x4715acu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947708), GPR_U32(ctx, 2));
label_4715b0:
    // 0x4715b0: 0x8fa20500  lw          $v0, 0x500($sp)
    ctx->pc = 0x4715b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1280)));
label_4715b4:
    // 0x4715b4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_4715b8:
    if (ctx->pc == 0x4715B8u) {
        ctx->pc = 0x4715BCu;
        goto label_4715bc;
    }
    ctx->pc = 0x4715B4u;
    {
        const bool branch_taken_0x4715b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4715b4) {
            ctx->pc = 0x4715C4u;
            goto label_4715c4;
        }
    }
    ctx->pc = 0x4715BCu;
label_4715bc:
    // 0x4715bc: 0xd  break       0
    ctx->pc = 0x4715bcu;
    runtime->handleBreak(rdram, ctx);
label_4715c0:
    // 0x4715c0: 0x0  nop
    ctx->pc = 0x4715c0u;
    // NOP
label_4715c4:
    // 0x4715c4: 0x27a40500  addiu       $a0, $sp, 0x500
    ctx->pc = 0x4715c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1280));
label_4715c8:
    // 0x4715c8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x4715c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4715cc:
    // 0x4715cc: 0xc11392c  jal         func_44E4B0
label_4715d0:
    if (ctx->pc == 0x4715D0u) {
        ctx->pc = 0x4715D4u;
        goto label_4715d4;
    }
    ctx->pc = 0x4715CCu;
    SET_GPR_U32(ctx, 31, 0x4715D4u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x4715CCu, 0x4715D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4715D4u;
label_4715d4:
    // 0x4715d4: 0x8e12000c  lw          $s2, 0xC($s0)
    ctx->pc = 0x4715d4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_4715d8:
    // 0x4715d8: 0x8e160010  lw          $s6, 0x10($s0)
    ctx->pc = 0x4715d8u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_4715dc:
    // 0x4715dc: 0x2561026  xor         $v0, $s2, $s6
    ctx->pc = 0x4715dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) ^ GPR_U64(ctx, 22));
label_4715e0:
    // 0x4715e0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x4715e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_4715e4:
    // 0x4715e4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x4715e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_4715e8:
    // 0x4715e8: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_4715ec:
    if (ctx->pc == 0x4715ECu) {
        ctx->pc = 0x4715F0u;
        goto label_4715f0;
    }
    ctx->pc = 0x4715E8u;
    {
        const bool branch_taken_0x4715e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4715e8) {
            ctx->pc = 0x471698u;
            goto label_471698;
        }
    }
    ctx->pc = 0x4715F0u;
label_4715f0:
    // 0x4715f0: 0x8f82b380  lw          $v0, -0x4C80($gp)
    ctx->pc = 0x4715f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947712)));
label_4715f4:
    // 0x4715f4: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_4715f8:
    if (ctx->pc == 0x4715F8u) {
        ctx->pc = 0x4715FCu;
        goto label_4715fc;
    }
    ctx->pc = 0x4715F4u;
    {
        const bool branch_taken_0x4715f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4715f4) {
            ctx->pc = 0x471698u;
            goto label_471698;
        }
    }
    ctx->pc = 0x4715FCu;
label_4715fc:
    // 0x4715fc: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x4715fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_471600:
    // 0x471600: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x471600u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_471604:
    // 0x471604: 0x27a60650  addiu       $a2, $sp, 0x650
    ctx->pc = 0x471604u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1616));
label_471608:
    // 0x471608: 0xc115ee8  jal         func_457BA0
label_47160c:
    if (ctx->pc == 0x47160Cu) {
        ctx->pc = 0x471610u;
        goto label_471610;
    }
    ctx->pc = 0x471608u;
    SET_GPR_U32(ctx, 31, 0x471610u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x471608u, 0x471610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x471610u;
label_471610:
    // 0x471610: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_471614:
    if (ctx->pc == 0x471614u) {
        ctx->pc = 0x471618u;
        goto label_471618;
    }
    ctx->pc = 0x471610u;
    {
        const bool branch_taken_0x471610 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x471610) {
            ctx->pc = 0x471698u;
            goto label_471698;
        }
    }
    ctx->pc = 0x471618u;
label_471618:
    // 0x471618: 0x8fa20658  lw          $v0, 0x658($sp)
    ctx->pc = 0x471618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1624)));
label_47161c:
    // 0x47161c: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_471620:
    if (ctx->pc == 0x471620u) {
        ctx->pc = 0x471624u;
        goto label_471624;
    }
    ctx->pc = 0x47161Cu;
    {
        const bool branch_taken_0x47161c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47161c) {
            ctx->pc = 0x471698u;
            goto label_471698;
        }
    }
    ctx->pc = 0x471624u;
label_471624:
    // 0x471624: 0x27a403e0  addiu       $a0, $sp, 0x3E0
    ctx->pc = 0x471624u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 992));
label_471628:
    // 0x471628: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x471628u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_47162c:
    // 0x47162c: 0x8fa60654  lw          $a2, 0x654($sp)
    ctx->pc = 0x47162cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1620)));
label_471630:
    // 0x471630: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x471630u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_471634:
    // 0x471634: 0x24e701e0  addiu       $a3, $a3, 0x1E0
    ctx->pc = 0x471634u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 480));
label_471638:
    // 0x471638: 0x240800a3  addiu       $t0, $zero, 0xA3
    ctx->pc = 0x471638u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 163));
label_47163c:
    // 0x47163c: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x47163cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_471640:
    // 0x471640: 0x25290210  addiu       $t1, $t1, 0x210
    ctx->pc = 0x471640u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 528));
label_471644:
    // 0x471644: 0xc113940  jal         func_44E500
label_471648:
    if (ctx->pc == 0x471648u) {
        ctx->pc = 0x47164Cu;
        goto label_47164c;
    }
    ctx->pc = 0x471644u;
    SET_GPR_U32(ctx, 31, 0x47164Cu);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x471644u, 0x47164Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47164Cu;
label_47164c:
    // 0x47164c: 0x27a403e0  addiu       $a0, $sp, 0x3E0
    ctx->pc = 0x47164cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 992));
label_471650:
    // 0x471650: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x471650u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_471654:
    // 0x471654: 0x24a50220  addiu       $a1, $a1, 0x220
    ctx->pc = 0x471654u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 544));
label_471658:
    // 0x471658: 0xc115c24  jal         func_457090
label_47165c:
    if (ctx->pc == 0x47165Cu) {
        ctx->pc = 0x471660u;
        goto label_471660;
    }
    ctx->pc = 0x471658u;
    SET_GPR_U32(ctx, 31, 0x471660u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x471658u, 0x471660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x471660u;
label_471660:
    // 0x471660: 0x27a403e0  addiu       $a0, $sp, 0x3E0
    ctx->pc = 0x471660u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 992));
label_471664:
    // 0x471664: 0x8fa20658  lw          $v0, 0x658($sp)
    ctx->pc = 0x471664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1624)));
label_471668:
    // 0x471668: 0x40f809  jalr        $v0
label_47166c:
    if (ctx->pc == 0x47166Cu) {
        ctx->pc = 0x471670u;
        goto label_471670;
    }
    ctx->pc = 0x471668u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x471670u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x471668u, 0x471670u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x471670u;
label_471670:
    // 0x471670: 0xaf82b380  sw          $v0, -0x4C80($gp)
    ctx->pc = 0x471670u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947712), GPR_U32(ctx, 2));
label_471674:
    // 0x471674: 0x8fa203e0  lw          $v0, 0x3E0($sp)
    ctx->pc = 0x471674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 992)));
label_471678:
    // 0x471678: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_47167c:
    if (ctx->pc == 0x47167Cu) {
        ctx->pc = 0x471680u;
        goto label_471680;
    }
    ctx->pc = 0x471678u;
    {
        const bool branch_taken_0x471678 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x471678) {
            ctx->pc = 0x471688u;
            goto label_471688;
        }
    }
    ctx->pc = 0x471680u;
label_471680:
    // 0x471680: 0xd  break       0
    ctx->pc = 0x471680u;
    runtime->handleBreak(rdram, ctx);
label_471684:
    // 0x471684: 0x0  nop
    ctx->pc = 0x471684u;
    // NOP
label_471688:
    // 0x471688: 0x27a403e0  addiu       $a0, $sp, 0x3E0
    ctx->pc = 0x471688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 992));
label_47168c:
    // 0x47168c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x47168cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_471690:
    // 0x471690: 0xc11392c  jal         func_44E4B0
label_471694:
    if (ctx->pc == 0x471694u) {
        ctx->pc = 0x471698u;
        goto label_471698;
    }
    ctx->pc = 0x471690u;
    SET_GPR_U32(ctx, 31, 0x471698u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x471690u, 0x471698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x471698u;
label_471698:
    // 0x471698: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x471698u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_47169c:
    // 0x47169c: 0xc11ca04  jal         func_472810
label_4716a0:
    if (ctx->pc == 0x4716A0u) {
        ctx->pc = 0x4716A4u;
        goto label_4716a4;
    }
    ctx->pc = 0x47169Cu;
    SET_GPR_U32(ctx, 31, 0x4716A4u);
    ctx->pc = 0x472810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x472810u, 0x47169Cu, 0x4716A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4716A4u;
label_4716a4:
    // 0x4716a4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x4716a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4716a8:
    // 0x4716a8: 0x1660002b  bnez        $s3, . + 4 + (0x2B << 2)
label_4716ac:
    if (ctx->pc == 0x4716ACu) {
        ctx->pc = 0x4716B0u;
        goto label_4716b0;
    }
    ctx->pc = 0x4716A8u;
    {
        const bool branch_taken_0x4716a8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x4716a8) {
            ctx->pc = 0x471758u;
            goto label_471758;
        }
    }
    ctx->pc = 0x4716B0u;
label_4716b0:
    // 0x4716b0: 0x8f82b384  lw          $v0, -0x4C7C($gp)
    ctx->pc = 0x4716b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947716)));
label_4716b4:
    // 0x4716b4: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_4716b8:
    if (ctx->pc == 0x4716B8u) {
        ctx->pc = 0x4716BCu;
        goto label_4716bc;
    }
    ctx->pc = 0x4716B4u;
    {
        const bool branch_taken_0x4716b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4716b4) {
            ctx->pc = 0x471758u;
            goto label_471758;
        }
    }
    ctx->pc = 0x4716BCu;
label_4716bc:
    // 0x4716bc: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x4716bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_4716c0:
    // 0x4716c0: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x4716c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_4716c4:
    // 0x4716c4: 0x27a60640  addiu       $a2, $sp, 0x640
    ctx->pc = 0x4716c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1600));
label_4716c8:
    // 0x4716c8: 0xc115ee8  jal         func_457BA0
label_4716cc:
    if (ctx->pc == 0x4716CCu) {
        ctx->pc = 0x4716D0u;
        goto label_4716d0;
    }
    ctx->pc = 0x4716C8u;
    SET_GPR_U32(ctx, 31, 0x4716D0u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x4716C8u, 0x4716D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4716D0u;
label_4716d0:
    // 0x4716d0: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_4716d4:
    if (ctx->pc == 0x4716D4u) {
        ctx->pc = 0x4716D8u;
        goto label_4716d8;
    }
    ctx->pc = 0x4716D0u;
    {
        const bool branch_taken_0x4716d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4716d0) {
            ctx->pc = 0x471758u;
            goto label_471758;
        }
    }
    ctx->pc = 0x4716D8u;
label_4716d8:
    // 0x4716d8: 0x8fa20648  lw          $v0, 0x648($sp)
    ctx->pc = 0x4716d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1608)));
label_4716dc:
    // 0x4716dc: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_4716e0:
    if (ctx->pc == 0x4716E0u) {
        ctx->pc = 0x4716E4u;
        goto label_4716e4;
    }
    ctx->pc = 0x4716DCu;
    {
        const bool branch_taken_0x4716dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4716dc) {
            ctx->pc = 0x471758u;
            goto label_471758;
        }
    }
    ctx->pc = 0x4716E4u;
label_4716e4:
    // 0x4716e4: 0x27a402c0  addiu       $a0, $sp, 0x2C0
    ctx->pc = 0x4716e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
label_4716e8:
    // 0x4716e8: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x4716e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_4716ec:
    // 0x4716ec: 0x8fa60644  lw          $a2, 0x644($sp)
    ctx->pc = 0x4716ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1604)));
label_4716f0:
    // 0x4716f0: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x4716f0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_4716f4:
    // 0x4716f4: 0x24e701e0  addiu       $a3, $a3, 0x1E0
    ctx->pc = 0x4716f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 480));
label_4716f8:
    // 0x4716f8: 0x240800a6  addiu       $t0, $zero, 0xA6
    ctx->pc = 0x4716f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 166));
label_4716fc:
    // 0x4716fc: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x4716fcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_471700:
    // 0x471700: 0x25290248  addiu       $t1, $t1, 0x248
    ctx->pc = 0x471700u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 584));
label_471704:
    // 0x471704: 0xc113940  jal         func_44E500
label_471708:
    if (ctx->pc == 0x471708u) {
        ctx->pc = 0x47170Cu;
        goto label_47170c;
    }
    ctx->pc = 0x471704u;
    SET_GPR_U32(ctx, 31, 0x47170Cu);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x471704u, 0x47170Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47170Cu;
label_47170c:
    // 0x47170c: 0x27a402c0  addiu       $a0, $sp, 0x2C0
    ctx->pc = 0x47170cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
label_471710:
    // 0x471710: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x471710u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_471714:
    // 0x471714: 0x24a50260  addiu       $a1, $a1, 0x260
    ctx->pc = 0x471714u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 608));
label_471718:
    // 0x471718: 0xc115c24  jal         func_457090
label_47171c:
    if (ctx->pc == 0x47171Cu) {
        ctx->pc = 0x471720u;
        goto label_471720;
    }
    ctx->pc = 0x471718u;
    SET_GPR_U32(ctx, 31, 0x471720u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x471718u, 0x471720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x471720u;
label_471720:
    // 0x471720: 0x27a402c0  addiu       $a0, $sp, 0x2C0
    ctx->pc = 0x471720u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
label_471724:
    // 0x471724: 0x8fa20648  lw          $v0, 0x648($sp)
    ctx->pc = 0x471724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1608)));
label_471728:
    // 0x471728: 0x40f809  jalr        $v0
label_47172c:
    if (ctx->pc == 0x47172Cu) {
        ctx->pc = 0x471730u;
        goto label_471730;
    }
    ctx->pc = 0x471728u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x471730u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x471728u, 0x471730u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x471730u;
label_471730:
    // 0x471730: 0xaf82b384  sw          $v0, -0x4C7C($gp)
    ctx->pc = 0x471730u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947716), GPR_U32(ctx, 2));
label_471734:
    // 0x471734: 0x8fa202c0  lw          $v0, 0x2C0($sp)
    ctx->pc = 0x471734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
label_471738:
    // 0x471738: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_47173c:
    if (ctx->pc == 0x47173Cu) {
        ctx->pc = 0x471740u;
        goto label_471740;
    }
    ctx->pc = 0x471738u;
    {
        const bool branch_taken_0x471738 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x471738) {
            ctx->pc = 0x471748u;
            goto label_471748;
        }
    }
    ctx->pc = 0x471740u;
label_471740:
    // 0x471740: 0xd  break       0
    ctx->pc = 0x471740u;
    runtime->handleBreak(rdram, ctx);
label_471744:
    // 0x471744: 0x0  nop
    ctx->pc = 0x471744u;
    // NOP
label_471748:
    // 0x471748: 0x27a402c0  addiu       $a0, $sp, 0x2C0
    ctx->pc = 0x471748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
label_47174c:
    // 0x47174c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x47174cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_471750:
    // 0x471750: 0xc11392c  jal         func_44E4B0
label_471754:
    if (ctx->pc == 0x471754u) {
        ctx->pc = 0x471758u;
        goto label_471758;
    }
    ctx->pc = 0x471750u;
    SET_GPR_U32(ctx, 31, 0x471758u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x471750u, 0x471758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x471758u;
label_471758:
    // 0x471758: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x471758u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_47175c:
    // 0x47175c: 0xc11ca04  jal         func_472810
label_471760:
    if (ctx->pc == 0x471760u) {
        ctx->pc = 0x471764u;
        goto label_471764;
    }
    ctx->pc = 0x47175Cu;
    SET_GPR_U32(ctx, 31, 0x471764u);
    ctx->pc = 0x472810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x472810u, 0x47175Cu, 0x471764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x471764u;
label_471764:
    // 0x471764: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x471764u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_471768:
    // 0x471768: 0x1680002b  bnez        $s4, . + 4 + (0x2B << 2)
label_47176c:
    if (ctx->pc == 0x47176Cu) {
        ctx->pc = 0x471770u;
        goto label_471770;
    }
    ctx->pc = 0x471768u;
    {
        const bool branch_taken_0x471768 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x471768) {
            ctx->pc = 0x471818u;
            goto label_471818;
        }
    }
    ctx->pc = 0x471770u;
label_471770:
    // 0x471770: 0x8f82b388  lw          $v0, -0x4C78($gp)
    ctx->pc = 0x471770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947720)));
label_471774:
    // 0x471774: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_471778:
    if (ctx->pc == 0x471778u) {
        ctx->pc = 0x47177Cu;
        goto label_47177c;
    }
    ctx->pc = 0x471774u;
    {
        const bool branch_taken_0x471774 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x471774) {
            ctx->pc = 0x471818u;
            goto label_471818;
        }
    }
    ctx->pc = 0x47177Cu;
label_47177c:
    // 0x47177c: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x47177cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_471780:
    // 0x471780: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x471780u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_471784:
    // 0x471784: 0x27a60630  addiu       $a2, $sp, 0x630
    ctx->pc = 0x471784u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1584));
label_471788:
    // 0x471788: 0xc115ee8  jal         func_457BA0
label_47178c:
    if (ctx->pc == 0x47178Cu) {
        ctx->pc = 0x471790u;
        goto label_471790;
    }
    ctx->pc = 0x471788u;
    SET_GPR_U32(ctx, 31, 0x471790u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x471788u, 0x471790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x471790u;
label_471790:
    // 0x471790: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_471794:
    if (ctx->pc == 0x471794u) {
        ctx->pc = 0x471798u;
        goto label_471798;
    }
    ctx->pc = 0x471790u;
    {
        const bool branch_taken_0x471790 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x471790) {
            ctx->pc = 0x471818u;
            goto label_471818;
        }
    }
    ctx->pc = 0x471798u;
label_471798:
    // 0x471798: 0x8fa20638  lw          $v0, 0x638($sp)
    ctx->pc = 0x471798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1592)));
label_47179c:
    // 0x47179c: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_4717a0:
    if (ctx->pc == 0x4717A0u) {
        ctx->pc = 0x4717A4u;
        goto label_4717a4;
    }
    ctx->pc = 0x47179Cu;
    {
        const bool branch_taken_0x47179c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47179c) {
            ctx->pc = 0x471818u;
            goto label_471818;
        }
    }
    ctx->pc = 0x4717A4u;
label_4717a4:
    // 0x4717a4: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x4717a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_4717a8:
    // 0x4717a8: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x4717a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_4717ac:
    // 0x4717ac: 0x8fa60634  lw          $a2, 0x634($sp)
    ctx->pc = 0x4717acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1588)));
label_4717b0:
    // 0x4717b0: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x4717b0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_4717b4:
    // 0x4717b4: 0x24e701e0  addiu       $a3, $a3, 0x1E0
    ctx->pc = 0x4717b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 480));
label_4717b8:
    // 0x4717b8: 0x240800a9  addiu       $t0, $zero, 0xA9
    ctx->pc = 0x4717b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 169));
label_4717bc:
    // 0x4717bc: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x4717bcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_4717c0:
    // 0x4717c0: 0x25290278  addiu       $t1, $t1, 0x278
    ctx->pc = 0x4717c0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 632));
label_4717c4:
    // 0x4717c4: 0xc113940  jal         func_44E500
label_4717c8:
    if (ctx->pc == 0x4717C8u) {
        ctx->pc = 0x4717CCu;
        goto label_4717cc;
    }
    ctx->pc = 0x4717C4u;
    SET_GPR_U32(ctx, 31, 0x4717CCu);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x4717C4u, 0x4717CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4717CCu;
label_4717cc:
    // 0x4717cc: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x4717ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_4717d0:
    // 0x4717d0: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x4717d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_4717d4:
    // 0x4717d4: 0x24a50260  addiu       $a1, $a1, 0x260
    ctx->pc = 0x4717d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 608));
label_4717d8:
    // 0x4717d8: 0xc115c24  jal         func_457090
label_4717dc:
    if (ctx->pc == 0x4717DCu) {
        ctx->pc = 0x4717E0u;
        goto label_4717e0;
    }
    ctx->pc = 0x4717D8u;
    SET_GPR_U32(ctx, 31, 0x4717E0u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x4717D8u, 0x4717E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4717E0u;
label_4717e0:
    // 0x4717e0: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x4717e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_4717e4:
    // 0x4717e4: 0x8fa20638  lw          $v0, 0x638($sp)
    ctx->pc = 0x4717e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1592)));
label_4717e8:
    // 0x4717e8: 0x40f809  jalr        $v0
label_4717ec:
    if (ctx->pc == 0x4717ECu) {
        ctx->pc = 0x4717F0u;
        goto label_4717f0;
    }
    ctx->pc = 0x4717E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4717F0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4717E8u, 0x4717F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4717F0u;
label_4717f0:
    // 0x4717f0: 0xaf82b388  sw          $v0, -0x4C78($gp)
    ctx->pc = 0x4717f0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947720), GPR_U32(ctx, 2));
label_4717f4:
    // 0x4717f4: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x4717f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_4717f8:
    // 0x4717f8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_4717fc:
    if (ctx->pc == 0x4717FCu) {
        ctx->pc = 0x471800u;
        goto label_471800;
    }
    ctx->pc = 0x4717F8u;
    {
        const bool branch_taken_0x4717f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4717f8) {
            ctx->pc = 0x471808u;
            goto label_471808;
        }
    }
    ctx->pc = 0x471800u;
label_471800:
    // 0x471800: 0xd  break       0
    ctx->pc = 0x471800u;
    runtime->handleBreak(rdram, ctx);
label_471804:
    // 0x471804: 0x0  nop
    ctx->pc = 0x471804u;
    // NOP
label_471808:
    // 0x471808: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x471808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_47180c:
    // 0x47180c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x47180cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_471810:
    // 0x471810: 0xc11392c  jal         func_44E4B0
label_471814:
    if (ctx->pc == 0x471814u) {
        ctx->pc = 0x471818u;
        goto label_471818;
    }
    ctx->pc = 0x471810u;
    SET_GPR_U32(ctx, 31, 0x471818u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x471810u, 0x471818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x471818u;
label_471818:
    // 0x471818: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x471818u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_47181c:
    // 0x47181c: 0xc11c994  jal         func_472650
label_471820:
    if (ctx->pc == 0x471820u) {
        ctx->pc = 0x471824u;
        goto label_471824;
    }
    ctx->pc = 0x47181Cu;
    SET_GPR_U32(ctx, 31, 0x471824u);
    ctx->pc = 0x472650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x472650u, 0x47181Cu, 0x471824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x471824u;
label_471824:
    // 0x471824: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x471824u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_471828:
    // 0x471828: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x471828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_47182c:
    // 0x47182c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x47182cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_471830:
    // 0x471830: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x471830u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_471834:
    // 0x471834: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x471834u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_471838:
    // 0x471838: 0x8fa80680  lw          $t0, 0x680($sp)
    ctx->pc = 0x471838u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1664)));
label_47183c:
    // 0x47183c: 0xc11c664  jal         func_471990
label_471840:
    if (ctx->pc == 0x471840u) {
        ctx->pc = 0x471844u;
        goto label_471844;
    }
    ctx->pc = 0x47183Cu;
    SET_GPR_U32(ctx, 31, 0x471844u);
    ctx->pc = 0x471990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x471990u, 0x47183Cu, 0x471844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x471844u;
label_471844:
    // 0x471844: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x471844u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_471848:
    // 0x471848: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x471848u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_47184c:
    // 0x47184c: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x47184cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_471850:
    // 0x471850: 0xc107034  jal         func_41C0D0
label_471854:
    if (ctx->pc == 0x471854u) {
        ctx->pc = 0x471858u;
        goto label_471858;
    }
    ctx->pc = 0x471850u;
    SET_GPR_U32(ctx, 31, 0x471858u);
    ctx->pc = 0x41C0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C0D0u, 0x471850u, 0x471858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x471858u;
label_471858:
    // 0x471858: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x471858u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_47185c:
    // 0x47185c: 0x1620002a  bnez        $s1, . + 4 + (0x2A << 2)
label_471860:
    if (ctx->pc == 0x471860u) {
        ctx->pc = 0x471864u;
        goto label_471864;
    }
    ctx->pc = 0x47185Cu;
    {
        const bool branch_taken_0x47185c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x47185c) {
            ctx->pc = 0x471908u;
            goto label_471908;
        }
    }
    ctx->pc = 0x471864u;
label_471864:
    // 0x471864: 0x8f82b38c  lw          $v0, -0x4C74($gp)
    ctx->pc = 0x471864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947724)));
label_471868:
    // 0x471868: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_47186c:
    if (ctx->pc == 0x47186Cu) {
        ctx->pc = 0x471870u;
        goto label_471870;
    }
    ctx->pc = 0x471868u;
    {
        const bool branch_taken_0x471868 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x471868) {
            ctx->pc = 0x471908u;
            goto label_471908;
        }
    }
    ctx->pc = 0x471870u;
label_471870:
    // 0x471870: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x471870u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_471874:
    // 0x471874: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x471874u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_471878:
    // 0x471878: 0x27a60620  addiu       $a2, $sp, 0x620
    ctx->pc = 0x471878u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1568));
label_47187c:
    // 0x47187c: 0xc115ee8  jal         func_457BA0
label_471880:
    if (ctx->pc == 0x471880u) {
        ctx->pc = 0x471884u;
        goto label_471884;
    }
    ctx->pc = 0x47187Cu;
    SET_GPR_U32(ctx, 31, 0x471884u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x47187Cu, 0x471884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x471884u;
label_471884:
    // 0x471884: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_471888:
    if (ctx->pc == 0x471888u) {
        ctx->pc = 0x47188Cu;
        goto label_47188c;
    }
    ctx->pc = 0x471884u;
    {
        const bool branch_taken_0x471884 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x471884) {
            ctx->pc = 0x471908u;
            goto label_471908;
        }
    }
    ctx->pc = 0x47188Cu;
label_47188c:
    // 0x47188c: 0x8fa20628  lw          $v0, 0x628($sp)
    ctx->pc = 0x47188cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1576)));
label_471890:
    // 0x471890: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_471894:
    if (ctx->pc == 0x471894u) {
        ctx->pc = 0x471898u;
        goto label_471898;
    }
    ctx->pc = 0x471890u;
    {
        const bool branch_taken_0x471890 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x471890) {
            ctx->pc = 0x471908u;
            goto label_471908;
        }
    }
    ctx->pc = 0x471898u;
label_471898:
    // 0x471898: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x471898u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_47189c:
    // 0x47189c: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x47189cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_4718a0:
    // 0x4718a0: 0x8fa60624  lw          $a2, 0x624($sp)
    ctx->pc = 0x4718a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1572)));
label_4718a4:
    // 0x4718a4: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x4718a4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_4718a8:
    // 0x4718a8: 0x24e701e0  addiu       $a3, $a3, 0x1E0
    ctx->pc = 0x4718a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 480));
label_4718ac:
    // 0x4718ac: 0x240800b1  addiu       $t0, $zero, 0xB1
    ctx->pc = 0x4718acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 177));
label_4718b0:
    // 0x4718b0: 0x2789b390  addiu       $t1, $gp, -0x4C70
    ctx->pc = 0x4718b0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 28), 4294947728));
label_4718b4:
    // 0x4718b4: 0xc113940  jal         func_44E500
label_4718b8:
    if (ctx->pc == 0x4718B8u) {
        ctx->pc = 0x4718BCu;
        goto label_4718bc;
    }
    ctx->pc = 0x4718B4u;
    SET_GPR_U32(ctx, 31, 0x4718BCu);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x4718B4u, 0x4718BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4718BCu;
label_4718bc:
    // 0x4718bc: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x4718bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_4718c0:
    // 0x4718c0: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x4718c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_4718c4:
    // 0x4718c4: 0x24a50290  addiu       $a1, $a1, 0x290
    ctx->pc = 0x4718c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 656));
label_4718c8:
    // 0x4718c8: 0xc115c24  jal         func_457090
label_4718cc:
    if (ctx->pc == 0x4718CCu) {
        ctx->pc = 0x4718D0u;
        goto label_4718d0;
    }
    ctx->pc = 0x4718C8u;
    SET_GPR_U32(ctx, 31, 0x4718D0u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x4718C8u, 0x4718D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4718D0u;
label_4718d0:
    // 0x4718d0: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x4718d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_4718d4:
    // 0x4718d4: 0x8fa20628  lw          $v0, 0x628($sp)
    ctx->pc = 0x4718d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1576)));
label_4718d8:
    // 0x4718d8: 0x40f809  jalr        $v0
label_4718dc:
    if (ctx->pc == 0x4718DCu) {
        ctx->pc = 0x4718E0u;
        goto label_4718e0;
    }
    ctx->pc = 0x4718D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4718E0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4718D8u, 0x4718E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4718E0u;
label_4718e0:
    // 0x4718e0: 0xaf82b38c  sw          $v0, -0x4C74($gp)
    ctx->pc = 0x4718e0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947724), GPR_U32(ctx, 2));
label_4718e4:
    // 0x4718e4: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x4718e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_4718e8:
    // 0x4718e8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_4718ec:
    if (ctx->pc == 0x4718ECu) {
        ctx->pc = 0x4718F0u;
        goto label_4718f0;
    }
    ctx->pc = 0x4718E8u;
    {
        const bool branch_taken_0x4718e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4718e8) {
            ctx->pc = 0x4718F8u;
            goto label_4718f8;
        }
    }
    ctx->pc = 0x4718F0u;
label_4718f0:
    // 0x4718f0: 0xd  break       0
    ctx->pc = 0x4718f0u;
    runtime->handleBreak(rdram, ctx);
label_4718f4:
    // 0x4718f4: 0x0  nop
    ctx->pc = 0x4718f4u;
    // NOP
label_4718f8:
    // 0x4718f8: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x4718f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_4718fc:
    // 0x4718fc: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x4718fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_471900:
    // 0x471900: 0xc11392c  jal         func_44E4B0
label_471904:
    if (ctx->pc == 0x471904u) {
        ctx->pc = 0x471908u;
        goto label_471908;
    }
    ctx->pc = 0x471900u;
    SET_GPR_U32(ctx, 31, 0x471908u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x471900u, 0x471908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x471908u;
label_471908:
    // 0x471908: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x471908u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_47190c:
    // 0x47190c: 0xc107078  jal         func_41C1E0
label_471910:
    if (ctx->pc == 0x471910u) {
        ctx->pc = 0x471914u;
        goto label_471914;
    }
    ctx->pc = 0x47190Cu;
    SET_GPR_U32(ctx, 31, 0x471914u);
    ctx->pc = 0x41C1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C1E0u, 0x47190Cu, 0x471914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x471914u;
label_471914:
    // 0x471914: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x471914u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_471918:
    // 0x471918: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x471918u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_47191c:
    // 0x47191c: 0xc1073a8  jal         func_41CEA0
label_471920:
    if (ctx->pc == 0x471920u) {
        ctx->pc = 0x471924u;
        goto label_471924;
    }
    ctx->pc = 0x47191Cu;
    SET_GPR_U32(ctx, 31, 0x471924u);
    ctx->pc = 0x41CEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41CEA0u, 0x47191Cu, 0x471924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x471924u;
label_471924:
    // 0x471924: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x471924u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_471928:
    // 0x471928: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x471928u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_47192c:
    // 0x47192c: 0xc1073c2  jal         func_41CF08
label_471930:
    if (ctx->pc == 0x471930u) {
        ctx->pc = 0x471934u;
        goto label_471934;
    }
    ctx->pc = 0x47192Cu;
    SET_GPR_U32(ctx, 31, 0x471934u);
    ctx->pc = 0x41CF08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41CF08u, 0x47192Cu, 0x471934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x471934u;
label_471934:
    // 0x471934: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x471934u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_471938:
    // 0x471938: 0xc10705c  jal         func_41C170
label_47193c:
    if (ctx->pc == 0x47193Cu) {
        ctx->pc = 0x471940u;
        goto label_471940;
    }
    ctx->pc = 0x471938u;
    SET_GPR_U32(ctx, 31, 0x471940u);
    ctx->pc = 0x41C170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C170u, 0x471938u, 0x471940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x471940u;
label_471940:
    // 0x471940: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x471940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_471944:
    // 0x471944: 0xc11c9cc  jal         func_472730
label_471948:
    if (ctx->pc == 0x471948u) {
        ctx->pc = 0x47194Cu;
        goto label_47194c;
    }
    ctx->pc = 0x471944u;
    SET_GPR_U32(ctx, 31, 0x47194Cu);
    ctx->pc = 0x472730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x472730u, 0x471944u, 0x47194Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47194Cu;
label_47194c:
    // 0x47194c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x47194cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_471950:
    // 0x471950: 0xc11ca1c  jal         func_472870
label_471954:
    if (ctx->pc == 0x471954u) {
        ctx->pc = 0x471958u;
        goto label_471958;
    }
    ctx->pc = 0x471950u;
    SET_GPR_U32(ctx, 31, 0x471958u);
    ctx->pc = 0x472870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x472870u, 0x471950u, 0x471958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x471958u;
label_471958:
    // 0x471958: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x471958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_47195c:
    // 0x47195c: 0xc11ca1c  jal         func_472870
label_471960:
    if (ctx->pc == 0x471960u) {
        ctx->pc = 0x471964u;
        goto label_471964;
    }
    ctx->pc = 0x47195Cu;
    SET_GPR_U32(ctx, 31, 0x471964u);
    ctx->pc = 0x472870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x472870u, 0x47195Cu, 0x471964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x471964u;
label_471964:
    // 0x471964: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x471964u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_471968:
    // 0x471968: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x471968u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_47196c:
    // 0x47196c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x47196cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_471970:
    // 0x471970: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x471970u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_471974:
    // 0x471974: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x471974u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_471978:
    // 0x471978: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x471978u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_47197c:
    // 0x47197c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x47197cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_471980:
    // 0x471980: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x471980u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_471984:
    // 0x471984: 0x27bd0690  addiu       $sp, $sp, 0x690
    ctx->pc = 0x471984u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1680));
label_471988:
    // 0x471988: 0x3e00008  jr          $ra
label_47198c:
    if (ctx->pc == 0x47198Cu) {
        ctx->pc = 0x471990u;
        goto label_fallthrough_0x471988;
    }
    ctx->pc = 0x471988u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x471988u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x471988:
    ctx->pc = 0x471990u;
}
