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

// Function: sub_00311248
// Address: 0x311248 - 0x311818
void sub_00311248_0x311248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00311248_0x311248");
#endif

    switch (ctx->pc) {
        case 0x311248u: goto label_311248;
        case 0x31124cu: goto label_31124c;
        case 0x311250u: goto label_311250;
        case 0x311254u: goto label_311254;
        case 0x311258u: goto label_311258;
        case 0x31125cu: goto label_31125c;
        case 0x311260u: goto label_311260;
        case 0x311264u: goto label_311264;
        case 0x311268u: goto label_311268;
        case 0x31126cu: goto label_31126c;
        case 0x311270u: goto label_311270;
        case 0x311274u: goto label_311274;
        case 0x311278u: goto label_311278;
        case 0x31127cu: goto label_31127c;
        case 0x311280u: goto label_311280;
        case 0x311284u: goto label_311284;
        case 0x311288u: goto label_311288;
        case 0x31128cu: goto label_31128c;
        case 0x311290u: goto label_311290;
        case 0x311294u: goto label_311294;
        case 0x311298u: goto label_311298;
        case 0x31129cu: goto label_31129c;
        case 0x3112a0u: goto label_3112a0;
        case 0x3112a4u: goto label_3112a4;
        case 0x3112a8u: goto label_3112a8;
        case 0x3112acu: goto label_3112ac;
        case 0x3112b0u: goto label_3112b0;
        case 0x3112b4u: goto label_3112b4;
        case 0x3112b8u: goto label_3112b8;
        case 0x3112bcu: goto label_3112bc;
        case 0x3112c0u: goto label_3112c0;
        case 0x3112c4u: goto label_3112c4;
        case 0x3112c8u: goto label_3112c8;
        case 0x3112ccu: goto label_3112cc;
        case 0x3112d0u: goto label_3112d0;
        case 0x3112d4u: goto label_3112d4;
        case 0x3112d8u: goto label_3112d8;
        case 0x3112dcu: goto label_3112dc;
        case 0x3112e0u: goto label_3112e0;
        case 0x3112e4u: goto label_3112e4;
        case 0x3112e8u: goto label_3112e8;
        case 0x3112ecu: goto label_3112ec;
        case 0x3112f0u: goto label_3112f0;
        case 0x3112f4u: goto label_3112f4;
        case 0x3112f8u: goto label_3112f8;
        case 0x3112fcu: goto label_3112fc;
        case 0x311300u: goto label_311300;
        case 0x311304u: goto label_311304;
        case 0x311308u: goto label_311308;
        case 0x31130cu: goto label_31130c;
        case 0x311310u: goto label_311310;
        case 0x311314u: goto label_311314;
        case 0x311318u: goto label_311318;
        case 0x31131cu: goto label_31131c;
        case 0x311320u: goto label_311320;
        case 0x311324u: goto label_311324;
        case 0x311328u: goto label_311328;
        case 0x31132cu: goto label_31132c;
        case 0x311330u: goto label_311330;
        case 0x311334u: goto label_311334;
        case 0x311338u: goto label_311338;
        case 0x31133cu: goto label_31133c;
        case 0x311340u: goto label_311340;
        case 0x311344u: goto label_311344;
        case 0x311348u: goto label_311348;
        case 0x31134cu: goto label_31134c;
        case 0x311350u: goto label_311350;
        case 0x311354u: goto label_311354;
        case 0x311358u: goto label_311358;
        case 0x31135cu: goto label_31135c;
        case 0x311360u: goto label_311360;
        case 0x311364u: goto label_311364;
        case 0x311368u: goto label_311368;
        case 0x31136cu: goto label_31136c;
        case 0x311370u: goto label_311370;
        case 0x311374u: goto label_311374;
        case 0x311378u: goto label_311378;
        case 0x31137cu: goto label_31137c;
        case 0x311380u: goto label_311380;
        case 0x311384u: goto label_311384;
        case 0x311388u: goto label_311388;
        case 0x31138cu: goto label_31138c;
        case 0x311390u: goto label_311390;
        case 0x311394u: goto label_311394;
        case 0x311398u: goto label_311398;
        case 0x31139cu: goto label_31139c;
        case 0x3113a0u: goto label_3113a0;
        case 0x3113a4u: goto label_3113a4;
        case 0x3113a8u: goto label_3113a8;
        case 0x3113acu: goto label_3113ac;
        case 0x3113b0u: goto label_3113b0;
        case 0x3113b4u: goto label_3113b4;
        case 0x3113b8u: goto label_3113b8;
        case 0x3113bcu: goto label_3113bc;
        case 0x3113c0u: goto label_3113c0;
        case 0x3113c4u: goto label_3113c4;
        case 0x3113c8u: goto label_3113c8;
        case 0x3113ccu: goto label_3113cc;
        case 0x3113d0u: goto label_3113d0;
        case 0x3113d4u: goto label_3113d4;
        case 0x3113d8u: goto label_3113d8;
        case 0x3113dcu: goto label_3113dc;
        case 0x3113e0u: goto label_3113e0;
        case 0x3113e4u: goto label_3113e4;
        case 0x3113e8u: goto label_3113e8;
        case 0x3113ecu: goto label_3113ec;
        case 0x3113f0u: goto label_3113f0;
        case 0x3113f4u: goto label_3113f4;
        case 0x3113f8u: goto label_3113f8;
        case 0x3113fcu: goto label_3113fc;
        case 0x311400u: goto label_311400;
        case 0x311404u: goto label_311404;
        case 0x311408u: goto label_311408;
        case 0x31140cu: goto label_31140c;
        case 0x311410u: goto label_311410;
        case 0x311414u: goto label_311414;
        case 0x311418u: goto label_311418;
        case 0x31141cu: goto label_31141c;
        case 0x311420u: goto label_311420;
        case 0x311424u: goto label_311424;
        case 0x311428u: goto label_311428;
        case 0x31142cu: goto label_31142c;
        case 0x311430u: goto label_311430;
        case 0x311434u: goto label_311434;
        case 0x311438u: goto label_311438;
        case 0x31143cu: goto label_31143c;
        case 0x311440u: goto label_311440;
        case 0x311444u: goto label_311444;
        case 0x311448u: goto label_311448;
        case 0x31144cu: goto label_31144c;
        case 0x311450u: goto label_311450;
        case 0x311454u: goto label_311454;
        case 0x311458u: goto label_311458;
        case 0x31145cu: goto label_31145c;
        case 0x311460u: goto label_311460;
        case 0x311464u: goto label_311464;
        case 0x311468u: goto label_311468;
        case 0x31146cu: goto label_31146c;
        case 0x311470u: goto label_311470;
        case 0x311474u: goto label_311474;
        case 0x311478u: goto label_311478;
        case 0x31147cu: goto label_31147c;
        case 0x311480u: goto label_311480;
        case 0x311484u: goto label_311484;
        case 0x311488u: goto label_311488;
        case 0x31148cu: goto label_31148c;
        case 0x311490u: goto label_311490;
        case 0x311494u: goto label_311494;
        case 0x311498u: goto label_311498;
        case 0x31149cu: goto label_31149c;
        case 0x3114a0u: goto label_3114a0;
        case 0x3114a4u: goto label_3114a4;
        case 0x3114a8u: goto label_3114a8;
        case 0x3114acu: goto label_3114ac;
        case 0x3114b0u: goto label_3114b0;
        case 0x3114b4u: goto label_3114b4;
        case 0x3114b8u: goto label_3114b8;
        case 0x3114bcu: goto label_3114bc;
        case 0x3114c0u: goto label_3114c0;
        case 0x3114c4u: goto label_3114c4;
        case 0x3114c8u: goto label_3114c8;
        case 0x3114ccu: goto label_3114cc;
        case 0x3114d0u: goto label_3114d0;
        case 0x3114d4u: goto label_3114d4;
        case 0x3114d8u: goto label_3114d8;
        case 0x3114dcu: goto label_3114dc;
        case 0x3114e0u: goto label_3114e0;
        case 0x3114e4u: goto label_3114e4;
        case 0x3114e8u: goto label_3114e8;
        case 0x3114ecu: goto label_3114ec;
        case 0x3114f0u: goto label_3114f0;
        case 0x3114f4u: goto label_3114f4;
        case 0x3114f8u: goto label_3114f8;
        case 0x3114fcu: goto label_3114fc;
        case 0x311500u: goto label_311500;
        case 0x311504u: goto label_311504;
        case 0x311508u: goto label_311508;
        case 0x31150cu: goto label_31150c;
        case 0x311510u: goto label_311510;
        case 0x311514u: goto label_311514;
        case 0x311518u: goto label_311518;
        case 0x31151cu: goto label_31151c;
        case 0x311520u: goto label_311520;
        case 0x311524u: goto label_311524;
        case 0x311528u: goto label_311528;
        case 0x31152cu: goto label_31152c;
        case 0x311530u: goto label_311530;
        case 0x311534u: goto label_311534;
        case 0x311538u: goto label_311538;
        case 0x31153cu: goto label_31153c;
        case 0x311540u: goto label_311540;
        case 0x311544u: goto label_311544;
        case 0x311548u: goto label_311548;
        case 0x31154cu: goto label_31154c;
        case 0x311550u: goto label_311550;
        case 0x311554u: goto label_311554;
        case 0x311558u: goto label_311558;
        case 0x31155cu: goto label_31155c;
        case 0x311560u: goto label_311560;
        case 0x311564u: goto label_311564;
        case 0x311568u: goto label_311568;
        case 0x31156cu: goto label_31156c;
        case 0x311570u: goto label_311570;
        case 0x311574u: goto label_311574;
        case 0x311578u: goto label_311578;
        case 0x31157cu: goto label_31157c;
        case 0x311580u: goto label_311580;
        case 0x311584u: goto label_311584;
        case 0x311588u: goto label_311588;
        case 0x31158cu: goto label_31158c;
        case 0x311590u: goto label_311590;
        case 0x311594u: goto label_311594;
        case 0x311598u: goto label_311598;
        case 0x31159cu: goto label_31159c;
        case 0x3115a0u: goto label_3115a0;
        case 0x3115a4u: goto label_3115a4;
        case 0x3115a8u: goto label_3115a8;
        case 0x3115acu: goto label_3115ac;
        case 0x3115b0u: goto label_3115b0;
        case 0x3115b4u: goto label_3115b4;
        case 0x3115b8u: goto label_3115b8;
        case 0x3115bcu: goto label_3115bc;
        case 0x3115c0u: goto label_3115c0;
        case 0x3115c4u: goto label_3115c4;
        case 0x3115c8u: goto label_3115c8;
        case 0x3115ccu: goto label_3115cc;
        case 0x3115d0u: goto label_3115d0;
        case 0x3115d4u: goto label_3115d4;
        case 0x3115d8u: goto label_3115d8;
        case 0x3115dcu: goto label_3115dc;
        case 0x3115e0u: goto label_3115e0;
        case 0x3115e4u: goto label_3115e4;
        case 0x3115e8u: goto label_3115e8;
        case 0x3115ecu: goto label_3115ec;
        case 0x3115f0u: goto label_3115f0;
        case 0x3115f4u: goto label_3115f4;
        case 0x3115f8u: goto label_3115f8;
        case 0x3115fcu: goto label_3115fc;
        case 0x311600u: goto label_311600;
        case 0x311604u: goto label_311604;
        case 0x311608u: goto label_311608;
        case 0x31160cu: goto label_31160c;
        case 0x311610u: goto label_311610;
        case 0x311614u: goto label_311614;
        case 0x311618u: goto label_311618;
        case 0x31161cu: goto label_31161c;
        case 0x311620u: goto label_311620;
        case 0x311624u: goto label_311624;
        case 0x311628u: goto label_311628;
        case 0x31162cu: goto label_31162c;
        case 0x311630u: goto label_311630;
        case 0x311634u: goto label_311634;
        case 0x311638u: goto label_311638;
        case 0x31163cu: goto label_31163c;
        case 0x311640u: goto label_311640;
        case 0x311644u: goto label_311644;
        case 0x311648u: goto label_311648;
        case 0x31164cu: goto label_31164c;
        case 0x311650u: goto label_311650;
        case 0x311654u: goto label_311654;
        case 0x311658u: goto label_311658;
        case 0x31165cu: goto label_31165c;
        case 0x311660u: goto label_311660;
        case 0x311664u: goto label_311664;
        case 0x311668u: goto label_311668;
        case 0x31166cu: goto label_31166c;
        case 0x311670u: goto label_311670;
        case 0x311674u: goto label_311674;
        case 0x311678u: goto label_311678;
        case 0x31167cu: goto label_31167c;
        case 0x311680u: goto label_311680;
        case 0x311684u: goto label_311684;
        case 0x311688u: goto label_311688;
        case 0x31168cu: goto label_31168c;
        case 0x311690u: goto label_311690;
        case 0x311694u: goto label_311694;
        case 0x311698u: goto label_311698;
        case 0x31169cu: goto label_31169c;
        case 0x3116a0u: goto label_3116a0;
        case 0x3116a4u: goto label_3116a4;
        case 0x3116a8u: goto label_3116a8;
        case 0x3116acu: goto label_3116ac;
        case 0x3116b0u: goto label_3116b0;
        case 0x3116b4u: goto label_3116b4;
        case 0x3116b8u: goto label_3116b8;
        case 0x3116bcu: goto label_3116bc;
        case 0x3116c0u: goto label_3116c0;
        case 0x3116c4u: goto label_3116c4;
        case 0x3116c8u: goto label_3116c8;
        case 0x3116ccu: goto label_3116cc;
        case 0x3116d0u: goto label_3116d0;
        case 0x3116d4u: goto label_3116d4;
        case 0x3116d8u: goto label_3116d8;
        case 0x3116dcu: goto label_3116dc;
        case 0x3116e0u: goto label_3116e0;
        case 0x3116e4u: goto label_3116e4;
        case 0x3116e8u: goto label_3116e8;
        case 0x3116ecu: goto label_3116ec;
        case 0x3116f0u: goto label_3116f0;
        case 0x3116f4u: goto label_3116f4;
        case 0x3116f8u: goto label_3116f8;
        case 0x3116fcu: goto label_3116fc;
        case 0x311700u: goto label_311700;
        case 0x311704u: goto label_311704;
        case 0x311708u: goto label_311708;
        case 0x31170cu: goto label_31170c;
        case 0x311710u: goto label_311710;
        case 0x311714u: goto label_311714;
        case 0x311718u: goto label_311718;
        case 0x31171cu: goto label_31171c;
        case 0x311720u: goto label_311720;
        case 0x311724u: goto label_311724;
        case 0x311728u: goto label_311728;
        case 0x31172cu: goto label_31172c;
        case 0x311730u: goto label_311730;
        case 0x311734u: goto label_311734;
        case 0x311738u: goto label_311738;
        case 0x31173cu: goto label_31173c;
        case 0x311740u: goto label_311740;
        case 0x311744u: goto label_311744;
        case 0x311748u: goto label_311748;
        case 0x31174cu: goto label_31174c;
        case 0x311750u: goto label_311750;
        case 0x311754u: goto label_311754;
        case 0x311758u: goto label_311758;
        case 0x31175cu: goto label_31175c;
        case 0x311760u: goto label_311760;
        case 0x311764u: goto label_311764;
        case 0x311768u: goto label_311768;
        case 0x31176cu: goto label_31176c;
        case 0x311770u: goto label_311770;
        case 0x311774u: goto label_311774;
        case 0x311778u: goto label_311778;
        case 0x31177cu: goto label_31177c;
        case 0x311780u: goto label_311780;
        case 0x311784u: goto label_311784;
        case 0x311788u: goto label_311788;
        case 0x31178cu: goto label_31178c;
        case 0x311790u: goto label_311790;
        case 0x311794u: goto label_311794;
        case 0x311798u: goto label_311798;
        case 0x31179cu: goto label_31179c;
        case 0x3117a0u: goto label_3117a0;
        case 0x3117a4u: goto label_3117a4;
        case 0x3117a8u: goto label_3117a8;
        case 0x3117acu: goto label_3117ac;
        case 0x3117b0u: goto label_3117b0;
        case 0x3117b4u: goto label_3117b4;
        case 0x3117b8u: goto label_3117b8;
        case 0x3117bcu: goto label_3117bc;
        case 0x3117c0u: goto label_3117c0;
        case 0x3117c4u: goto label_3117c4;
        case 0x3117c8u: goto label_3117c8;
        case 0x3117ccu: goto label_3117cc;
        case 0x3117d0u: goto label_3117d0;
        case 0x3117d4u: goto label_3117d4;
        case 0x3117d8u: goto label_3117d8;
        case 0x3117dcu: goto label_3117dc;
        case 0x3117e0u: goto label_3117e0;
        case 0x3117e4u: goto label_3117e4;
        case 0x3117e8u: goto label_3117e8;
        case 0x3117ecu: goto label_3117ec;
        case 0x3117f0u: goto label_3117f0;
        case 0x3117f4u: goto label_3117f4;
        case 0x3117f8u: goto label_3117f8;
        case 0x3117fcu: goto label_3117fc;
        case 0x311800u: goto label_311800;
        case 0x311804u: goto label_311804;
        case 0x311808u: goto label_311808;
        case 0x31180cu: goto label_31180c;
        case 0x311810u: goto label_311810;
        case 0x311814u: goto label_311814;
        default: break;
    }

    ctx->pc = 0x311248u;

label_311248:
    // 0x311248: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x311248u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_31124c:
    // 0x31124c: 0x8f82a578  lw          $v0, -0x5A88($gp)
    ctx->pc = 0x31124cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944120)));
label_311250:
    // 0x311250: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x311250u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_311254:
    // 0x311254: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x311254u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_311258:
    // 0x311258: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x311258u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_31125c:
    // 0x31125c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x31125cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_311260:
    // 0x311260: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x311260u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_311264:
    // 0x311264: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x311264u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
label_311268:
    // 0x311268: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x311268u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31126c:
    // 0x31126c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x31126cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_311270:
    // 0x311270: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x311270u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_311274:
    // 0x311274: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x311274u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_311278:
    // 0x311278: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_31127c:
    if (ctx->pc == 0x31127Cu) {
        ctx->pc = 0x31127Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311278u;
        // 0x31127c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x311280u;
        goto label_311280;
    }
    ctx->pc = 0x311278u;
    {
        const bool branch_taken_0x311278 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31127Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311278u;
        // 0x31127c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311278) {
            ctx->pc = 0x3112B8u;
            goto label_3112b8;
        }
    }
    ctx->pc = 0x311280u;
label_311280:
    // 0x311280: 0x40f809  jalr        $v0
label_311284:
    if (ctx->pc == 0x311284u) {
        ctx->pc = 0x311288u;
        goto label_311288;
    }
    ctx->pc = 0x311280u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x311288u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x311280u, 0x311288u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x311288u;
label_311288:
    // 0x311288: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_31128c:
    if (ctx->pc == 0x31128Cu) {
        ctx->pc = 0x31128Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311288u;
        // 0x31128c: 0x3c100062  lui         $s0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x311290u;
        goto label_311290;
    }
    ctx->pc = 0x311288u;
    {
        const bool branch_taken_0x311288 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31128Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311288u;
        // 0x31128c: 0x3c100062  lui         $s0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311288) {
            ctx->pc = 0x3112BCu;
            goto label_3112bc;
        }
    }
    ctx->pc = 0x311290u;
label_311290:
    // 0x311290: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x311290u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_311294:
    // 0x311294: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x311294u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_311298:
    // 0x311298: 0xc0bb7e6  jal         func_2EDF98
label_31129c:
    if (ctx->pc == 0x31129Cu) {
        ctx->pc = 0x31129Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311298u;
        // 0x31129c: 0x8e460004  lw          $a2, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3112A0u;
        goto label_3112a0;
    }
    ctx->pc = 0x311298u;
    SET_GPR_U32(ctx, 31, 0x3112A0u);
    ctx->pc = 0x31129Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311298u;
    // 0x31129c: 0x8e460004  lw          $a2, 0x4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x311298u, 0x3112A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3112A0u;
label_3112a0:
    // 0x3112a0: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x3112a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_3112a4:
    // 0x3112a4: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x3112a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3112a8:
    // 0x3112a8: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x3112a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_3112ac:
    // 0x3112ac: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3112acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3112b0:
    // 0x3112b0: 0x10000150  b           . + 4 + (0x150 << 2)
label_3112b4:
    if (ctx->pc == 0x3112B4u) {
        ctx->pc = 0x3112B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3112B0u;
        // 0x3112b4: 0xae23000c  sw          $v1, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3112B8u;
        goto label_3112b8;
    }
    ctx->pc = 0x3112B0u;
    {
        const bool branch_taken_0x3112b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3112B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3112B0u;
        // 0x3112b4: 0xae23000c  sw          $v1, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3112b0) {
            ctx->pc = 0x3117F4u;
            goto label_3117f4;
        }
    }
    ctx->pc = 0x3112B8u;
label_3112b8:
    // 0x3112b8: 0x3c100062  lui         $s0, 0x62
    ctx->pc = 0x3112b8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)98 << 16));
label_3112bc:
    // 0x3112bc: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x3112bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_3112c0:
    // 0x3112c0: 0x2603e880  addiu       $v1, $s0, -0x1780
    ctx->pc = 0x3112c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961280));
label_3112c4:
    // 0x3112c4: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x3112c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_3112c8:
    // 0x3112c8: 0x8c620108  lw          $v0, 0x108($v1)
    ctx->pc = 0x3112c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
label_3112cc:
    // 0x3112cc: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x3112ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_3112d0:
    // 0x3112d0: 0x40f809  jalr        $v0
label_3112d4:
    if (ctx->pc == 0x3112D4u) {
        ctx->pc = 0x3112D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3112D0u;
        // 0x3112d4: 0x34a50134  ori         $a1, $a1, 0x134 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)308);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3112D8u;
        goto label_3112d8;
    }
    ctx->pc = 0x3112D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3112D8u);
        ctx->pc = 0x3112D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3112D0u;
        // 0x3112d4: 0x34a50134  ori         $a1, $a1, 0x134 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)308);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3112D0u, 0x3112D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3112D8u;
label_3112d8:
    // 0x3112d8: 0x8e460004  lw          $a2, 0x4($s2)
    ctx->pc = 0x3112d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_3112dc:
    // 0x3112dc: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3112dcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3112e0:
    // 0x3112e0: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x3112e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3112e4:
    // 0x3112e4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3112e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3112e8:
    // 0x3112e8: 0xc0bb778  jal         func_2EDDE0
label_3112ec:
    if (ctx->pc == 0x3112ECu) {
        ctx->pc = 0x3112ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3112E8u;
        // 0x3112ec: 0x63040  sll         $a2, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3112F0u;
        goto label_3112f0;
    }
    ctx->pc = 0x3112E8u;
    SET_GPR_U32(ctx, 31, 0x3112F0u);
    ctx->pc = 0x3112ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3112E8u;
    // 0x3112ec: 0x63040  sll         $a2, $a2, 1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x3112E8u, 0x3112F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3112F0u;
label_3112f0:
    // 0x3112f0: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3112f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_3112f4:
    // 0x3112f4: 0x8e4a0000  lw          $t2, 0x0($s2)
    ctx->pc = 0x3112f4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3112f8:
    // 0x3112f8: 0x104000a5  beqz        $v0, . + 4 + (0xA5 << 2)
label_3112fc:
    if (ctx->pc == 0x3112FCu) {
        ctx->pc = 0x3112FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3112F8u;
        // 0x3112fc: 0x8e2b000c  lw          $t3, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x311300u;
        goto label_311300;
    }
    ctx->pc = 0x3112F8u;
    {
        const bool branch_taken_0x3112f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3112FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3112F8u;
        // 0x3112fc: 0x8e2b000c  lw          $t3, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3112f8) {
            ctx->pc = 0x311590u;
            goto label_311590;
        }
    }
    ctx->pc = 0x311300u;
label_311300:
    // 0x311300: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x311300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_311304:
    // 0x311304: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
label_311308:
    if (ctx->pc == 0x311308u) {
        ctx->pc = 0x311308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311304u;
        // 0x311308: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31130Cu;
        goto label_31130c;
    }
    ctx->pc = 0x311304u;
    {
        const bool branch_taken_0x311304 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x311308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311304u;
        // 0x311308: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311304) {
            ctx->pc = 0x3113B4u;
            goto label_3113b4;
        }
    }
    ctx->pc = 0x31130Cu;
label_31130c:
    // 0x31130c: 0x240c0001  addiu       $t4, $zero, 0x1
    ctx->pc = 0x31130cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_311310:
    // 0x311310: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x311310u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_311314:
    // 0x311314: 0x140402d  daddu       $t0, $t2, $zero
    ctx->pc = 0x311314u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_311318:
    // 0x311318: 0x2ce20002  sltiu       $v0, $a3, 0x2
    ctx->pc = 0x311318u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_31131c:
    // 0x31131c: 0x5440001a  bnel        $v0, $zero, . + 4 + (0x1A << 2)
label_311320:
    if (ctx->pc == 0x311320u) {
        ctx->pc = 0x311320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31131Cu;
        // 0x311320: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x311324u;
        goto label_311324;
    }
    ctx->pc = 0x31131Cu;
    {
        const bool branch_taken_0x31131c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31131c) {
            ctx->pc = 0x311320u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31131Cu;
            // 0x311320: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x311388u;
            goto label_311388;
        }
    }
    ctx->pc = 0x311324u;
label_311324:
    // 0x311324: 0x94c90000  lhu         $t1, 0x0($a2)
    ctx->pc = 0x311324u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_311328:
    // 0x311328: 0x94c2fffe  lhu         $v0, -0x2($a2)
    ctx->pc = 0x311328u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 4294967294)));
label_31132c:
    // 0x31132c: 0x3123ffff  andi        $v1, $t1, 0xFFFF
    ctx->pc = 0x31132cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
label_311330:
    // 0x311330: 0x54620015  bnel        $v1, $v0, . + 4 + (0x15 << 2)
label_311334:
    if (ctx->pc == 0x311334u) {
        ctx->pc = 0x311334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311330u;
        // 0x311334: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x311338u;
        goto label_311338;
    }
    ctx->pc = 0x311330u;
    {
        const bool branch_taken_0x311330 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x311330) {
            ctx->pc = 0x311334u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x311330u;
            // 0x311334: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x311388u;
            goto label_311388;
        }
    }
    ctx->pc = 0x311338u;
label_311338:
    // 0x311338: 0x94c4fffc  lhu         $a0, -0x4($a2)
    ctx->pc = 0x311338u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 4294967292)));
label_31133c:
    // 0x31133c: 0x50640008  beql        $v1, $a0, . + 4 + (0x8 << 2)
label_311340:
    if (ctx->pc == 0x311340u) {
        ctx->pc = 0x311340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31133Cu;
        // 0x311340: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x311344u;
        goto label_311344;
    }
    ctx->pc = 0x31133Cu;
    {
        const bool branch_taken_0x31133c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x31133c) {
            ctx->pc = 0x311340u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31133Cu;
            // 0x311340: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x311360u;
            goto label_311360;
        }
    }
    ctx->pc = 0x311344u;
label_311344:
    // 0x311344: 0x94c2fffa  lhu         $v0, -0x6($a2)
    ctx->pc = 0x311344u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 4294967290)));
label_311348:
    // 0x311348: 0x5082000d  beql        $a0, $v0, . + 4 + (0xD << 2)
label_31134c:
    if (ctx->pc == 0x31134Cu) {
        ctx->pc = 0x31134Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311348u;
        // 0x31134c: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x311350u;
        goto label_311350;
    }
    ctx->pc = 0x311348u;
    {
        const bool branch_taken_0x311348 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x311348) {
            ctx->pc = 0x31134Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x311348u;
            // 0x31134c: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x311380u;
            goto label_311380;
        }
    }
    ctx->pc = 0x311350u;
label_311350:
    // 0x311350: 0x94c30004  lhu         $v1, 0x4($a2)
    ctx->pc = 0x311350u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
label_311354:
    // 0x311354: 0x94c20002  lhu         $v0, 0x2($a2)
    ctx->pc = 0x311354u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
label_311358:
    // 0x311358: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
label_31135c:
    if (ctx->pc == 0x31135Cu) {
        ctx->pc = 0x31135Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311358u;
        // 0x31135c: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x311360u;
        goto label_311360;
    }
    ctx->pc = 0x311358u;
    {
        const bool branch_taken_0x311358 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x31135Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311358u;
        // 0x31135c: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311358) {
            ctx->pc = 0x311380u;
            goto label_311380;
        }
    }
    ctx->pc = 0x311360u;
label_311360:
    // 0x311360: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x311360u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_311364:
    // 0x311364: 0xa5090000  sh          $t1, 0x0($t0)
    ctx->pc = 0x311364u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 9));
label_311368:
    // 0x311368: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x311368u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
label_31136c:
    // 0x31136c: 0x25080002  addiu       $t0, $t0, 0x2
    ctx->pc = 0x31136cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
label_311370:
    // 0x311370: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x311370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_311374:
    // 0x311374: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x311374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_311378:
    // 0x311378: 0x10000009  b           . + 4 + (0x9 << 2)
label_31137c:
    if (ctx->pc == 0x31137Cu) {
        ctx->pc = 0x31137Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311378u;
        // 0x31137c: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x311380u;
        goto label_311380;
    }
    ctx->pc = 0x311378u;
    {
        const bool branch_taken_0x311378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31137Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311378u;
        // 0x31137c: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311378) {
            ctx->pc = 0x3113A0u;
            goto label_3113a0;
        }
    }
    ctx->pc = 0x311380u;
label_311380:
    // 0x311380: 0x10000007  b           . + 4 + (0x7 << 2)
label_311384:
    if (ctx->pc == 0x311384u) {
        ctx->pc = 0x311384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311380u;
        // 0x311384: 0xa04c0000  sb          $t4, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x311388u;
        goto label_311388;
    }
    ctx->pc = 0x311380u;
    {
        const bool branch_taken_0x311380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x311384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311380u;
        // 0x311384: 0xa04c0000  sb          $t4, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311380) {
            ctx->pc = 0x3113A0u;
            goto label_3113a0;
        }
    }
    ctx->pc = 0x311388u;
label_311388:
    // 0x311388: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x311388u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_31138c:
    // 0x31138c: 0x94c30000  lhu         $v1, 0x0($a2)
    ctx->pc = 0x31138cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_311390:
    // 0x311390: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x311390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_311394:
    // 0x311394: 0xa5030000  sh          $v1, 0x0($t0)
    ctx->pc = 0x311394u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 3));
label_311398:
    // 0x311398: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x311398u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_31139c:
    // 0x31139c: 0x25080002  addiu       $t0, $t0, 0x2
    ctx->pc = 0x31139cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
label_3113a0:
    // 0x3113a0: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x3113a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_3113a4:
    // 0x3113a4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3113a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_3113a8:
    // 0x3113a8: 0xe2102b  sltu        $v0, $a3, $v0
    ctx->pc = 0x3113a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3113ac:
    // 0x3113ac: 0x1440ffda  bnez        $v0, . + 4 + (-0x26 << 2)
label_3113b0:
    if (ctx->pc == 0x3113B0u) {
        ctx->pc = 0x3113B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3113ACu;
        // 0x3113b0: 0x24c60002  addiu       $a2, $a2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3113B4u;
        goto label_3113b4;
    }
    ctx->pc = 0x3113ACu;
    {
        const bool branch_taken_0x3113ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3113B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3113ACu;
        // 0x3113b0: 0x24c60002  addiu       $a2, $a2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3113ac) {
            ctx->pc = 0x311318u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_311318;
        }
    }
    ctx->pc = 0x3113B4u;
label_3113b4:
    // 0x3113b4: 0x12600104  beqz        $s3, . + 4 + (0x104 << 2)
label_3113b8:
    if (ctx->pc == 0x3113B8u) {
        ctx->pc = 0x3113B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3113B4u;
        // 0x3113b8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3113BCu;
        goto label_3113bc;
    }
    ctx->pc = 0x3113B4u;
    {
        const bool branch_taken_0x3113b4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3113B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3113B4u;
        // 0x3113b8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3113b4) {
            ctx->pc = 0x3117C8u;
            goto label_3117c8;
        }
    }
    ctx->pc = 0x3113BCu;
label_3113bc:
    // 0x3113bc: 0x160402d  daddu       $t0, $t3, $zero
    ctx->pc = 0x3113bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_3113c0:
    // 0x3113c0: 0x140202d  daddu       $a0, $t2, $zero
    ctx->pc = 0x3113c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_3113c4:
    // 0x3113c4: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x3113c4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3113c8:
    // 0x3113c8: 0x1a60001b  blez        $s3, . + 4 + (0x1B << 2)
label_3113cc:
    if (ctx->pc == 0x3113CCu) {
        ctx->pc = 0x3113CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3113C8u;
        // 0x3113cc: 0x32630003  andi        $v1, $s3, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3113D0u;
        goto label_3113d0;
    }
    ctx->pc = 0x3113C8u;
    {
        const bool branch_taken_0x3113c8 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x3113CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3113C8u;
        // 0x3113cc: 0x32630003  andi        $v1, $s3, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3113c8) {
            ctx->pc = 0x311438u;
            goto label_311438;
        }
    }
    ctx->pc = 0x3113D0u;
label_3113d0:
    // 0x3113d0: 0x1060002b  beqz        $v1, . + 4 + (0x2B << 2)
label_3113d4:
    if (ctx->pc == 0x3113D4u) {
        ctx->pc = 0x3113D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3113D0u;
        // 0x3113d4: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3113D8u;
        goto label_3113d8;
    }
    ctx->pc = 0x3113D0u;
    {
        const bool branch_taken_0x3113d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3113D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3113D0u;
        // 0x3113d4: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3113d0) {
            ctx->pc = 0x311480u;
            goto label_311480;
        }
    }
    ctx->pc = 0x3113D8u;
label_3113d8:
    // 0x3113d8: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
label_3113dc:
    if (ctx->pc == 0x3113DCu) {
        ctx->pc = 0x3113DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3113D8u;
        // 0x3113dc: 0x2ce20002  sltiu       $v0, $a3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3113E0u;
        goto label_3113e0;
    }
    ctx->pc = 0x3113D8u;
    {
        const bool branch_taken_0x3113d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3113DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3113D8u;
        // 0x3113dc: 0x2ce20002  sltiu       $v0, $a3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3113d8) {
            ctx->pc = 0x31143Cu;
            goto label_31143c;
        }
    }
    ctx->pc = 0x3113E0u;
label_3113e0:
    // 0x3113e0: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x3113e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_3113e4:
    // 0x3113e4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_3113e8:
    if (ctx->pc == 0x3113E8u) {
        ctx->pc = 0x3113E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3113E4u;
        // 0x3113e8: 0x2ce20002  sltiu       $v0, $a3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3113ECu;
        goto label_3113ec;
    }
    ctx->pc = 0x3113E4u;
    {
        const bool branch_taken_0x3113e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3113E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3113E4u;
        // 0x3113e8: 0x2ce20002  sltiu       $v0, $a3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3113e4) {
            ctx->pc = 0x3113FCu;
            goto label_3113fc;
        }
    }
    ctx->pc = 0x3113ECu;
label_3113ec:
    // 0x3113ec: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3113ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_3113f0:
    // 0x3113f0: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x3113f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
label_3113f4:
    // 0x3113f4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3113f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_3113f8:
    // 0x3113f8: 0x2ce20002  sltiu       $v0, $a3, 0x2
    ctx->pc = 0x3113f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_3113fc:
    // 0x3113fc: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
label_311400:
    if (ctx->pc == 0x311400u) {
        ctx->pc = 0x311400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3113FCu;
        // 0x311400: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x311404u;
        goto label_311404;
    }
    ctx->pc = 0x3113FCu;
    {
        const bool branch_taken_0x3113fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3113fc) {
            ctx->pc = 0x311400u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3113FCu;
            // 0x311400: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x311430u;
            goto label_311430;
        }
    }
    ctx->pc = 0x311404u;
label_311404:
    // 0x311404: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x311404u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_311408:
    // 0x311408: 0x9486fffe  lhu         $a2, -0x2($a0)
    ctx->pc = 0x311408u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4294967294)));
label_31140c:
    // 0x31140c: 0x50660007  beql        $v1, $a2, . + 4 + (0x7 << 2)
label_311410:
    if (ctx->pc == 0x311410u) {
        ctx->pc = 0x311410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31140Cu;
        // 0x311410: 0xa10b0000  sb          $t3, 0x0($t0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x311414u;
        goto label_311414;
    }
    ctx->pc = 0x31140Cu;
    {
        const bool branch_taken_0x31140c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        if (branch_taken_0x31140c) {
            ctx->pc = 0x311410u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31140Cu;
            // 0x311410: 0xa10b0000  sb          $t3, 0x0($t0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31142Cu;
            goto label_31142c;
        }
    }
    ctx->pc = 0x311414u;
label_311414:
    // 0x311414: 0x9482fffc  lhu         $v0, -0x4($a0)
    ctx->pc = 0x311414u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4294967292)));
label_311418:
    // 0x311418: 0x50620004  beql        $v1, $v0, . + 4 + (0x4 << 2)
label_31141c:
    if (ctx->pc == 0x31141Cu) {
        ctx->pc = 0x31141Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311418u;
        // 0x31141c: 0xa10b0000  sb          $t3, 0x0($t0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x311420u;
        goto label_311420;
    }
    ctx->pc = 0x311418u;
    {
        const bool branch_taken_0x311418 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x311418) {
            ctx->pc = 0x31141Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x311418u;
            // 0x31141c: 0xa10b0000  sb          $t3, 0x0($t0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31142Cu;
            goto label_31142c;
        }
    }
    ctx->pc = 0x311420u;
label_311420:
    // 0x311420: 0x54c20003  bnel        $a2, $v0, . + 4 + (0x3 << 2)
label_311424:
    if (ctx->pc == 0x311424u) {
        ctx->pc = 0x311424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311420u;
        // 0x311424: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x311428u;
        goto label_311428;
    }
    ctx->pc = 0x311420u;
    {
        const bool branch_taken_0x311420 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x311420) {
            ctx->pc = 0x311424u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x311420u;
            // 0x311424: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x311430u;
            goto label_311430;
        }
    }
    ctx->pc = 0x311428u;
label_311428:
    // 0x311428: 0xa10b0000  sb          $t3, 0x0($t0)
    ctx->pc = 0x311428u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 11));
label_31142c:
    // 0x31142c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x31142cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_311430:
    // 0x311430: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x311430u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
label_311434:
    // 0x311434: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x311434u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_311438:
    // 0x311438: 0x2ce20002  sltiu       $v0, $a3, 0x2
    ctx->pc = 0x311438u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_31143c:
    // 0x31143c: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
label_311440:
    if (ctx->pc == 0x311440u) {
        ctx->pc = 0x311440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31143Cu;
        // 0x311440: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x311444u;
        goto label_311444;
    }
    ctx->pc = 0x31143Cu;
    {
        const bool branch_taken_0x31143c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31143c) {
            ctx->pc = 0x311440u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31143Cu;
            // 0x311440: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x311470u;
            goto label_311470;
        }
    }
    ctx->pc = 0x311444u;
label_311444:
    // 0x311444: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x311444u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_311448:
    // 0x311448: 0x9486fffe  lhu         $a2, -0x2($a0)
    ctx->pc = 0x311448u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4294967294)));
label_31144c:
    // 0x31144c: 0x50660007  beql        $v1, $a2, . + 4 + (0x7 << 2)
label_311450:
    if (ctx->pc == 0x311450u) {
        ctx->pc = 0x311450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31144Cu;
        // 0x311450: 0xa10b0000  sb          $t3, 0x0($t0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x311454u;
        goto label_311454;
    }
    ctx->pc = 0x31144Cu;
    {
        const bool branch_taken_0x31144c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        if (branch_taken_0x31144c) {
            ctx->pc = 0x311450u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31144Cu;
            // 0x311450: 0xa10b0000  sb          $t3, 0x0($t0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31146Cu;
            goto label_31146c;
        }
    }
    ctx->pc = 0x311454u;
label_311454:
    // 0x311454: 0x9482fffc  lhu         $v0, -0x4($a0)
    ctx->pc = 0x311454u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4294967292)));
label_311458:
    // 0x311458: 0x50620004  beql        $v1, $v0, . + 4 + (0x4 << 2)
label_31145c:
    if (ctx->pc == 0x31145Cu) {
        ctx->pc = 0x31145Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311458u;
        // 0x31145c: 0xa10b0000  sb          $t3, 0x0($t0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x311460u;
        goto label_311460;
    }
    ctx->pc = 0x311458u;
    {
        const bool branch_taken_0x311458 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x311458) {
            ctx->pc = 0x31145Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x311458u;
            // 0x31145c: 0xa10b0000  sb          $t3, 0x0($t0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31146Cu;
            goto label_31146c;
        }
    }
    ctx->pc = 0x311460u;
label_311460:
    // 0x311460: 0x54c20003  bnel        $a2, $v0, . + 4 + (0x3 << 2)
label_311464:
    if (ctx->pc == 0x311464u) {
        ctx->pc = 0x311464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311460u;
        // 0x311464: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x311468u;
        goto label_311468;
    }
    ctx->pc = 0x311460u;
    {
        const bool branch_taken_0x311460 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x311460) {
            ctx->pc = 0x311464u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x311460u;
            // 0x311464: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x311470u;
            goto label_311470;
        }
    }
    ctx->pc = 0x311468u;
label_311468:
    // 0x311468: 0xa10b0000  sb          $t3, 0x0($t0)
    ctx->pc = 0x311468u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 11));
label_31146c:
    // 0x31146c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x31146cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_311470:
    // 0x311470: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x311470u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_311474:
    // 0x311474: 0xf3102b  sltu        $v0, $a3, $s3
    ctx->pc = 0x311474u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_311478:
    // 0x311478: 0x104000d3  beqz        $v0, . + 4 + (0xD3 << 2)
label_31147c:
    if (ctx->pc == 0x31147Cu) {
        ctx->pc = 0x31147Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311478u;
        // 0x31147c: 0x24840002  addiu       $a0, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x311480u;
        goto label_311480;
    }
    ctx->pc = 0x311478u;
    {
        const bool branch_taken_0x311478 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31147Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311478u;
        // 0x31147c: 0x24840002  addiu       $a0, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311478) {
            ctx->pc = 0x3117C8u;
            goto label_3117c8;
        }
    }
    ctx->pc = 0x311480u;
label_311480:
    // 0x311480: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x311480u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_311484:
    // 0x311484: 0x100502d  daddu       $t2, $t0, $zero
    ctx->pc = 0x311484u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_311488:
    // 0x311488: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x311488u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_31148c:
    // 0x31148c: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x31148cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_311490:
    // 0x311490: 0x2ce20002  sltiu       $v0, $a3, 0x2
    ctx->pc = 0x311490u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_311494:
    // 0x311494: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_311498:
    if (ctx->pc == 0x311498u) {
        ctx->pc = 0x311498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311494u;
        // 0x311498: 0x24e20001  addiu       $v0, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31149Cu;
        goto label_31149c;
    }
    ctx->pc = 0x311494u;
    {
        const bool branch_taken_0x311494 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x311498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311494u;
        // 0x311498: 0x24e20001  addiu       $v0, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311494) {
            ctx->pc = 0x3114C8u;
            goto label_3114c8;
        }
    }
    ctx->pc = 0x31149Cu;
label_31149c:
    // 0x31149c: 0x95030000  lhu         $v1, 0x0($t0)
    ctx->pc = 0x31149cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
label_3114a0:
    // 0x3114a0: 0x9524fffe  lhu         $a0, -0x2($t1)
    ctx->pc = 0x3114a0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 4294967294)));
label_3114a4:
    // 0x3114a4: 0x50640008  beql        $v1, $a0, . + 4 + (0x8 << 2)
label_3114a8:
    if (ctx->pc == 0x3114A8u) {
        ctx->pc = 0x3114A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3114A4u;
        // 0x3114a8: 0xa14b0000  sb          $t3, 0x0($t2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 10), 0), (uint8_t)GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3114ACu;
        goto label_3114ac;
    }
    ctx->pc = 0x3114A4u;
    {
        const bool branch_taken_0x3114a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x3114a4) {
            ctx->pc = 0x3114A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3114A4u;
            // 0x3114a8: 0xa14b0000  sb          $t3, 0x0($t2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 10), 0), (uint8_t)GPR_U32(ctx, 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3114C8u;
            goto label_3114c8;
        }
    }
    ctx->pc = 0x3114ACu;
label_3114ac:
    // 0x3114ac: 0x94c2fffc  lhu         $v0, -0x4($a2)
    ctx->pc = 0x3114acu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 4294967292)));
label_3114b0:
    // 0x3114b0: 0x50620004  beql        $v1, $v0, . + 4 + (0x4 << 2)
label_3114b4:
    if (ctx->pc == 0x3114B4u) {
        ctx->pc = 0x3114B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3114B0u;
        // 0x3114b4: 0xa14b0000  sb          $t3, 0x0($t2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 10), 0), (uint8_t)GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3114B8u;
        goto label_3114b8;
    }
    ctx->pc = 0x3114B0u;
    {
        const bool branch_taken_0x3114b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3114b0) {
            ctx->pc = 0x3114B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3114B0u;
            // 0x3114b4: 0xa14b0000  sb          $t3, 0x0($t2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 10), 0), (uint8_t)GPR_U32(ctx, 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3114C4u;
            goto label_3114c4;
        }
    }
    ctx->pc = 0x3114B8u;
label_3114b8:
    // 0x3114b8: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
label_3114bc:
    if (ctx->pc == 0x3114BCu) {
        ctx->pc = 0x3114BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3114B8u;
        // 0x3114bc: 0x24e20001  addiu       $v0, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3114C0u;
        goto label_3114c0;
    }
    ctx->pc = 0x3114B8u;
    {
        const bool branch_taken_0x3114b8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x3114BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3114B8u;
        // 0x3114bc: 0x24e20001  addiu       $v0, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3114b8) {
            ctx->pc = 0x3114C8u;
            goto label_3114c8;
        }
    }
    ctx->pc = 0x3114C0u;
label_3114c0:
    // 0x3114c0: 0xa14b0000  sb          $t3, 0x0($t2)
    ctx->pc = 0x3114c0u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 0), (uint8_t)GPR_U32(ctx, 11));
label_3114c4:
    // 0x3114c4: 0x24e20001  addiu       $v0, $a3, 0x1
    ctx->pc = 0x3114c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_3114c8:
    // 0x3114c8: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x3114c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_3114cc:
    // 0x3114cc: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_3114d0:
    if (ctx->pc == 0x3114D0u) {
        ctx->pc = 0x3114D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3114CCu;
        // 0x3114d0: 0x24e20002  addiu       $v0, $a3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3114D4u;
        goto label_3114d4;
    }
    ctx->pc = 0x3114CCu;
    {
        const bool branch_taken_0x3114cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3114D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3114CCu;
        // 0x3114d0: 0x24e20002  addiu       $v0, $a3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3114cc) {
            ctx->pc = 0x311500u;
            goto label_311500;
        }
    }
    ctx->pc = 0x3114D4u;
label_3114d4:
    // 0x3114d4: 0x95030002  lhu         $v1, 0x2($t0)
    ctx->pc = 0x3114d4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 2)));
label_3114d8:
    // 0x3114d8: 0x95240000  lhu         $a0, 0x0($t1)
    ctx->pc = 0x3114d8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
label_3114dc:
    // 0x3114dc: 0x50640008  beql        $v1, $a0, . + 4 + (0x8 << 2)
label_3114e0:
    if (ctx->pc == 0x3114E0u) {
        ctx->pc = 0x3114E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3114DCu;
        // 0x3114e0: 0xa14b0001  sb          $t3, 0x1($t2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 10), 1), (uint8_t)GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3114E4u;
        goto label_3114e4;
    }
    ctx->pc = 0x3114DCu;
    {
        const bool branch_taken_0x3114dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x3114dc) {
            ctx->pc = 0x3114E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3114DCu;
            // 0x3114e0: 0xa14b0001  sb          $t3, 0x1($t2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 10), 1), (uint8_t)GPR_U32(ctx, 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x311500u;
            goto label_311500;
        }
    }
    ctx->pc = 0x3114E4u;
label_3114e4:
    // 0x3114e4: 0x94c2fffe  lhu         $v0, -0x2($a2)
    ctx->pc = 0x3114e4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 4294967294)));
label_3114e8:
    // 0x3114e8: 0x50620004  beql        $v1, $v0, . + 4 + (0x4 << 2)
label_3114ec:
    if (ctx->pc == 0x3114ECu) {
        ctx->pc = 0x3114ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3114E8u;
        // 0x3114ec: 0xa14b0001  sb          $t3, 0x1($t2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 10), 1), (uint8_t)GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3114F0u;
        goto label_3114f0;
    }
    ctx->pc = 0x3114E8u;
    {
        const bool branch_taken_0x3114e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3114e8) {
            ctx->pc = 0x3114ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3114E8u;
            // 0x3114ec: 0xa14b0001  sb          $t3, 0x1($t2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 10), 1), (uint8_t)GPR_U32(ctx, 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3114FCu;
            goto label_3114fc;
        }
    }
    ctx->pc = 0x3114F0u;
label_3114f0:
    // 0x3114f0: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
label_3114f4:
    if (ctx->pc == 0x3114F4u) {
        ctx->pc = 0x3114F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3114F0u;
        // 0x3114f4: 0x24e20002  addiu       $v0, $a3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3114F8u;
        goto label_3114f8;
    }
    ctx->pc = 0x3114F0u;
    {
        const bool branch_taken_0x3114f0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x3114F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3114F0u;
        // 0x3114f4: 0x24e20002  addiu       $v0, $a3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3114f0) {
            ctx->pc = 0x311500u;
            goto label_311500;
        }
    }
    ctx->pc = 0x3114F8u;
label_3114f8:
    // 0x3114f8: 0xa14b0001  sb          $t3, 0x1($t2)
    ctx->pc = 0x3114f8u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 1), (uint8_t)GPR_U32(ctx, 11));
label_3114fc:
    // 0x3114fc: 0x24e20002  addiu       $v0, $a3, 0x2
    ctx->pc = 0x3114fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
label_311500:
    // 0x311500: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x311500u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_311504:
    // 0x311504: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_311508:
    if (ctx->pc == 0x311508u) {
        ctx->pc = 0x311508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311504u;
        // 0x311508: 0x24e20003  addiu       $v0, $a3, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31150Cu;
        goto label_31150c;
    }
    ctx->pc = 0x311504u;
    {
        const bool branch_taken_0x311504 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x311508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311504u;
        // 0x311508: 0x24e20003  addiu       $v0, $a3, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311504) {
            ctx->pc = 0x311538u;
            goto label_311538;
        }
    }
    ctx->pc = 0x31150Cu;
label_31150c:
    // 0x31150c: 0x95030004  lhu         $v1, 0x4($t0)
    ctx->pc = 0x31150cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 4)));
label_311510:
    // 0x311510: 0x95240002  lhu         $a0, 0x2($t1)
    ctx->pc = 0x311510u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 2)));
label_311514:
    // 0x311514: 0x50640008  beql        $v1, $a0, . + 4 + (0x8 << 2)
label_311518:
    if (ctx->pc == 0x311518u) {
        ctx->pc = 0x311518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311514u;
        // 0x311518: 0xa14b0002  sb          $t3, 0x2($t2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 10), 2), (uint8_t)GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31151Cu;
        goto label_31151c;
    }
    ctx->pc = 0x311514u;
    {
        const bool branch_taken_0x311514 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x311514) {
            ctx->pc = 0x311518u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x311514u;
            // 0x311518: 0xa14b0002  sb          $t3, 0x2($t2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 10), 2), (uint8_t)GPR_U32(ctx, 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x311538u;
            goto label_311538;
        }
    }
    ctx->pc = 0x31151Cu;
label_31151c:
    // 0x31151c: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x31151cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_311520:
    // 0x311520: 0x50620004  beql        $v1, $v0, . + 4 + (0x4 << 2)
label_311524:
    if (ctx->pc == 0x311524u) {
        ctx->pc = 0x311524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311520u;
        // 0x311524: 0xa14b0002  sb          $t3, 0x2($t2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 10), 2), (uint8_t)GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x311528u;
        goto label_311528;
    }
    ctx->pc = 0x311520u;
    {
        const bool branch_taken_0x311520 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x311520) {
            ctx->pc = 0x311524u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x311520u;
            // 0x311524: 0xa14b0002  sb          $t3, 0x2($t2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 10), 2), (uint8_t)GPR_U32(ctx, 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x311534u;
            goto label_311534;
        }
    }
    ctx->pc = 0x311528u;
label_311528:
    // 0x311528: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
label_31152c:
    if (ctx->pc == 0x31152Cu) {
        ctx->pc = 0x31152Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311528u;
        // 0x31152c: 0x24e20003  addiu       $v0, $a3, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x311530u;
        goto label_311530;
    }
    ctx->pc = 0x311528u;
    {
        const bool branch_taken_0x311528 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x31152Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311528u;
        // 0x31152c: 0x24e20003  addiu       $v0, $a3, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311528) {
            ctx->pc = 0x311538u;
            goto label_311538;
        }
    }
    ctx->pc = 0x311530u;
label_311530:
    // 0x311530: 0xa14b0002  sb          $t3, 0x2($t2)
    ctx->pc = 0x311530u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 2), (uint8_t)GPR_U32(ctx, 11));
label_311534:
    // 0x311534: 0x24e20003  addiu       $v0, $a3, 0x3
    ctx->pc = 0x311534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 3));
label_311538:
    // 0x311538: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x311538u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_31153c:
    // 0x31153c: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
label_311540:
    if (ctx->pc == 0x311540u) {
        ctx->pc = 0x311540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31153Cu;
        // 0x311540: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x311544u;
        goto label_311544;
    }
    ctx->pc = 0x31153Cu;
    {
        const bool branch_taken_0x31153c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31153c) {
            ctx->pc = 0x311540u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31153Cu;
            // 0x311540: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x311570u;
            goto label_311570;
        }
    }
    ctx->pc = 0x311544u;
label_311544:
    // 0x311544: 0x95030006  lhu         $v1, 0x6($t0)
    ctx->pc = 0x311544u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 6)));
label_311548:
    // 0x311548: 0x95240004  lhu         $a0, 0x4($t1)
    ctx->pc = 0x311548u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 4)));
label_31154c:
    // 0x31154c: 0x50640007  beql        $v1, $a0, . + 4 + (0x7 << 2)
label_311550:
    if (ctx->pc == 0x311550u) {
        ctx->pc = 0x311550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31154Cu;
        // 0x311550: 0xa14b0003  sb          $t3, 0x3($t2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 10), 3), (uint8_t)GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x311554u;
        goto label_311554;
    }
    ctx->pc = 0x31154Cu;
    {
        const bool branch_taken_0x31154c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x31154c) {
            ctx->pc = 0x311550u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31154Cu;
            // 0x311550: 0xa14b0003  sb          $t3, 0x3($t2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 10), 3), (uint8_t)GPR_U32(ctx, 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31156Cu;
            goto label_31156c;
        }
    }
    ctx->pc = 0x311554u;
label_311554:
    // 0x311554: 0x94c20002  lhu         $v0, 0x2($a2)
    ctx->pc = 0x311554u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
label_311558:
    // 0x311558: 0x50620004  beql        $v1, $v0, . + 4 + (0x4 << 2)
label_31155c:
    if (ctx->pc == 0x31155Cu) {
        ctx->pc = 0x31155Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311558u;
        // 0x31155c: 0xa14b0003  sb          $t3, 0x3($t2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 10), 3), (uint8_t)GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x311560u;
        goto label_311560;
    }
    ctx->pc = 0x311558u;
    {
        const bool branch_taken_0x311558 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x311558) {
            ctx->pc = 0x31155Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x311558u;
            // 0x31155c: 0xa14b0003  sb          $t3, 0x3($t2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 10), 3), (uint8_t)GPR_U32(ctx, 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31156Cu;
            goto label_31156c;
        }
    }
    ctx->pc = 0x311560u;
label_311560:
    // 0x311560: 0x54820003  bnel        $a0, $v0, . + 4 + (0x3 << 2)
label_311564:
    if (ctx->pc == 0x311564u) {
        ctx->pc = 0x311564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311560u;
        // 0x311564: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x311568u;
        goto label_311568;
    }
    ctx->pc = 0x311560u;
    {
        const bool branch_taken_0x311560 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x311560) {
            ctx->pc = 0x311564u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x311560u;
            // 0x311564: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x311570u;
            goto label_311570;
        }
    }
    ctx->pc = 0x311568u;
label_311568:
    // 0x311568: 0xa14b0003  sb          $t3, 0x3($t2)
    ctx->pc = 0x311568u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 3), (uint8_t)GPR_U32(ctx, 11));
label_31156c:
    // 0x31156c: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x31156cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_311570:
    // 0x311570: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x311570u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
label_311574:
    // 0x311574: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x311574u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_311578:
    // 0x311578: 0x25290008  addiu       $t1, $t1, 0x8
    ctx->pc = 0x311578u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
label_31157c:
    // 0x31157c: 0xf3102b  sltu        $v0, $a3, $s3
    ctx->pc = 0x31157cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_311580:
    // 0x311580: 0x1440ffc3  bnez        $v0, . + 4 + (-0x3D << 2)
label_311584:
    if (ctx->pc == 0x311584u) {
        ctx->pc = 0x311584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311580u;
        // 0x311584: 0x25080008  addiu       $t0, $t0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x311588u;
        goto label_311588;
    }
    ctx->pc = 0x311580u;
    {
        const bool branch_taken_0x311580 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x311584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311580u;
        // 0x311584: 0x25080008  addiu       $t0, $t0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311580) {
            ctx->pc = 0x311490u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_311490;
        }
    }
    ctx->pc = 0x311588u;
label_311588:
    // 0x311588: 0x10000090  b           . + 4 + (0x90 << 2)
label_31158c:
    if (ctx->pc == 0x31158Cu) {
        ctx->pc = 0x31158Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311588u;
        // 0x31158c: 0x8e430004  lw          $v1, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x311590u;
        goto label_311590;
    }
    ctx->pc = 0x311588u;
    {
        const bool branch_taken_0x311588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31158Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311588u;
        // 0x31158c: 0x8e430004  lw          $v1, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311588) {
            ctx->pc = 0x3117CCu;
            goto label_3117cc;
        }
    }
    ctx->pc = 0x311590u;
label_311590:
    // 0x311590: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x311590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_311594:
    // 0x311594: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_311598:
    if (ctx->pc == 0x311598u) {
        ctx->pc = 0x311598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311594u;
        // 0x311598: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31159Cu;
        goto label_31159c;
    }
    ctx->pc = 0x311594u;
    {
        const bool branch_taken_0x311594 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x311598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311594u;
        // 0x311598: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311594) {
            ctx->pc = 0x3115F4u;
            goto label_3115f4;
        }
    }
    ctx->pc = 0x31159Cu;
label_31159c:
    // 0x31159c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x31159cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3115a0:
    // 0x3115a0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3115a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3115a4:
    // 0x3115a4: 0x140302d  daddu       $a2, $t2, $zero
    ctx->pc = 0x3115a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_3115a8:
    // 0x3115a8: 0x50e00007  beql        $a3, $zero, . + 4 + (0x7 << 2)
label_3115ac:
    if (ctx->pc == 0x3115ACu) {
        ctx->pc = 0x3115ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3115A8u;
        // 0x3115ac: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3115B0u;
        goto label_3115b0;
    }
    ctx->pc = 0x3115A8u;
    {
        const bool branch_taken_0x3115a8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x3115a8) {
            ctx->pc = 0x3115ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3115A8u;
            // 0x3115ac: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3115C8u;
            goto label_3115c8;
        }
    }
    ctx->pc = 0x3115B0u;
label_3115b0:
    // 0x3115b0: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x3115b0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_3115b4:
    // 0x3115b4: 0x9482fffe  lhu         $v0, -0x2($a0)
    ctx->pc = 0x3115b4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4294967294)));
label_3115b8:
    // 0x3115b8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_3115bc:
    if (ctx->pc == 0x3115BCu) {
        ctx->pc = 0x3115BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3115B8u;
        // 0x3115bc: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3115C0u;
        goto label_3115c0;
    }
    ctx->pc = 0x3115B8u;
    {
        const bool branch_taken_0x3115b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3115BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3115B8u;
        // 0x3115bc: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3115b8) {
            ctx->pc = 0x3115C8u;
            goto label_3115c8;
        }
    }
    ctx->pc = 0x3115C0u;
label_3115c0:
    // 0x3115c0: 0x10000007  b           . + 4 + (0x7 << 2)
label_3115c4:
    if (ctx->pc == 0x3115C4u) {
        ctx->pc = 0x3115C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3115C0u;
        // 0x3115c4: 0xa0480000  sb          $t0, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3115C8u;
        goto label_3115c8;
    }
    ctx->pc = 0x3115C0u;
    {
        const bool branch_taken_0x3115c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3115C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3115C0u;
        // 0x3115c4: 0xa0480000  sb          $t0, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3115c0) {
            ctx->pc = 0x3115E0u;
            goto label_3115e0;
        }
    }
    ctx->pc = 0x3115C8u;
label_3115c8:
    // 0x3115c8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3115c8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_3115cc:
    // 0x3115cc: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x3115ccu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_3115d0:
    // 0x3115d0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3115d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3115d4:
    // 0x3115d4: 0xa4c30000  sh          $v1, 0x0($a2)
    ctx->pc = 0x3115d4u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 3));
label_3115d8:
    // 0x3115d8: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x3115d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_3115dc:
    // 0x3115dc: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x3115dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
label_3115e0:
    // 0x3115e0: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x3115e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_3115e4:
    // 0x3115e4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3115e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_3115e8:
    // 0x3115e8: 0xe2102b  sltu        $v0, $a3, $v0
    ctx->pc = 0x3115e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3115ec:
    // 0x3115ec: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
label_3115f0:
    if (ctx->pc == 0x3115F0u) {
        ctx->pc = 0x3115F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3115ECu;
        // 0x3115f0: 0x24840002  addiu       $a0, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3115F4u;
        goto label_3115f4;
    }
    ctx->pc = 0x3115ECu;
    {
        const bool branch_taken_0x3115ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3115F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3115ECu;
        // 0x3115f0: 0x24840002  addiu       $a0, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3115ec) {
            ctx->pc = 0x3115A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3115a8;
        }
    }
    ctx->pc = 0x3115F4u;
label_3115f4:
    // 0x3115f4: 0x12600074  beqz        $s3, . + 4 + (0x74 << 2)
label_3115f8:
    if (ctx->pc == 0x3115F8u) {
        ctx->pc = 0x3115F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3115F4u;
        // 0x3115f8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3115FCu;
        goto label_3115fc;
    }
    ctx->pc = 0x3115F4u;
    {
        const bool branch_taken_0x3115f4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3115F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3115F4u;
        // 0x3115f8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3115f4) {
            ctx->pc = 0x3117C8u;
            goto label_3117c8;
        }
    }
    ctx->pc = 0x3115FCu;
label_3115fc:
    // 0x3115fc: 0x160402d  daddu       $t0, $t3, $zero
    ctx->pc = 0x3115fcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_311600:
    // 0x311600: 0x140202d  daddu       $a0, $t2, $zero
    ctx->pc = 0x311600u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_311604:
    // 0x311604: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x311604u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_311608:
    // 0x311608: 0x1a60001b  blez        $s3, . + 4 + (0x1B << 2)
label_31160c:
    if (ctx->pc == 0x31160Cu) {
        ctx->pc = 0x31160Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311608u;
        // 0x31160c: 0x32630003  andi        $v1, $s3, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        ctx->pc = 0x311610u;
        goto label_311610;
    }
    ctx->pc = 0x311608u;
    {
        const bool branch_taken_0x311608 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x31160Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311608u;
        // 0x31160c: 0x32630003  andi        $v1, $s3, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x311608) {
            ctx->pc = 0x311678u;
            goto label_311678;
        }
    }
    ctx->pc = 0x311610u;
label_311610:
    // 0x311610: 0x1060002b  beqz        $v1, . + 4 + (0x2B << 2)
label_311614:
    if (ctx->pc == 0x311614u) {
        ctx->pc = 0x311614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311610u;
        // 0x311614: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x311618u;
        goto label_311618;
    }
    ctx->pc = 0x311610u;
    {
        const bool branch_taken_0x311610 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x311614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311610u;
        // 0x311614: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x311610) {
            ctx->pc = 0x3116C0u;
            goto label_3116c0;
        }
    }
    ctx->pc = 0x311618u;
label_311618:
    // 0x311618: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
label_31161c:
    if (ctx->pc == 0x31161Cu) {
        ctx->pc = 0x31161Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311618u;
        // 0x31161c: 0x2ce20002  sltiu       $v0, $a3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x311620u;
        goto label_311620;
    }
    ctx->pc = 0x311618u;
    {
        const bool branch_taken_0x311618 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31161Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311618u;
        // 0x31161c: 0x2ce20002  sltiu       $v0, $a3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x311618) {
            ctx->pc = 0x31167Cu;
            goto label_31167c;
        }
    }
    ctx->pc = 0x311620u;
label_311620:
    // 0x311620: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x311620u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_311624:
    // 0x311624: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_311628:
    if (ctx->pc == 0x311628u) {
        ctx->pc = 0x311628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311624u;
        // 0x311628: 0x2ce20002  sltiu       $v0, $a3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x31162Cu;
        goto label_31162c;
    }
    ctx->pc = 0x311624u;
    {
        const bool branch_taken_0x311624 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x311628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311624u;
        // 0x311628: 0x2ce20002  sltiu       $v0, $a3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x311624) {
            ctx->pc = 0x31163Cu;
            goto label_31163c;
        }
    }
    ctx->pc = 0x31162Cu;
label_31162c:
    // 0x31162c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x31162cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_311630:
    // 0x311630: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x311630u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
label_311634:
    // 0x311634: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x311634u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_311638:
    // 0x311638: 0x2ce20002  sltiu       $v0, $a3, 0x2
    ctx->pc = 0x311638u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_31163c:
    // 0x31163c: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
label_311640:
    if (ctx->pc == 0x311640u) {
        ctx->pc = 0x311640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31163Cu;
        // 0x311640: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x311644u;
        goto label_311644;
    }
    ctx->pc = 0x31163Cu;
    {
        const bool branch_taken_0x31163c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31163c) {
            ctx->pc = 0x311640u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31163Cu;
            // 0x311640: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x311670u;
            goto label_311670;
        }
    }
    ctx->pc = 0x311644u;
label_311644:
    // 0x311644: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x311644u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_311648:
    // 0x311648: 0x9486fffe  lhu         $a2, -0x2($a0)
    ctx->pc = 0x311648u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4294967294)));
label_31164c:
    // 0x31164c: 0x50660007  beql        $v1, $a2, . + 4 + (0x7 << 2)
label_311650:
    if (ctx->pc == 0x311650u) {
        ctx->pc = 0x311650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31164Cu;
        // 0x311650: 0xa10b0000  sb          $t3, 0x0($t0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x311654u;
        goto label_311654;
    }
    ctx->pc = 0x31164Cu;
    {
        const bool branch_taken_0x31164c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        if (branch_taken_0x31164c) {
            ctx->pc = 0x311650u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31164Cu;
            // 0x311650: 0xa10b0000  sb          $t3, 0x0($t0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31166Cu;
            goto label_31166c;
        }
    }
    ctx->pc = 0x311654u;
label_311654:
    // 0x311654: 0x9482fffc  lhu         $v0, -0x4($a0)
    ctx->pc = 0x311654u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4294967292)));
label_311658:
    // 0x311658: 0x50620004  beql        $v1, $v0, . + 4 + (0x4 << 2)
label_31165c:
    if (ctx->pc == 0x31165Cu) {
        ctx->pc = 0x31165Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311658u;
        // 0x31165c: 0xa10b0000  sb          $t3, 0x0($t0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x311660u;
        goto label_311660;
    }
    ctx->pc = 0x311658u;
    {
        const bool branch_taken_0x311658 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x311658) {
            ctx->pc = 0x31165Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x311658u;
            // 0x31165c: 0xa10b0000  sb          $t3, 0x0($t0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31166Cu;
            goto label_31166c;
        }
    }
    ctx->pc = 0x311660u;
label_311660:
    // 0x311660: 0x54c20003  bnel        $a2, $v0, . + 4 + (0x3 << 2)
label_311664:
    if (ctx->pc == 0x311664u) {
        ctx->pc = 0x311664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311660u;
        // 0x311664: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x311668u;
        goto label_311668;
    }
    ctx->pc = 0x311660u;
    {
        const bool branch_taken_0x311660 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x311660) {
            ctx->pc = 0x311664u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x311660u;
            // 0x311664: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x311670u;
            goto label_311670;
        }
    }
    ctx->pc = 0x311668u;
label_311668:
    // 0x311668: 0xa10b0000  sb          $t3, 0x0($t0)
    ctx->pc = 0x311668u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 11));
label_31166c:
    // 0x31166c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x31166cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_311670:
    // 0x311670: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x311670u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
label_311674:
    // 0x311674: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x311674u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_311678:
    // 0x311678: 0x2ce20002  sltiu       $v0, $a3, 0x2
    ctx->pc = 0x311678u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_31167c:
    // 0x31167c: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
label_311680:
    if (ctx->pc == 0x311680u) {
        ctx->pc = 0x311680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31167Cu;
        // 0x311680: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x311684u;
        goto label_311684;
    }
    ctx->pc = 0x31167Cu;
    {
        const bool branch_taken_0x31167c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31167c) {
            ctx->pc = 0x311680u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31167Cu;
            // 0x311680: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3116B0u;
            goto label_3116b0;
        }
    }
    ctx->pc = 0x311684u;
label_311684:
    // 0x311684: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x311684u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_311688:
    // 0x311688: 0x9486fffe  lhu         $a2, -0x2($a0)
    ctx->pc = 0x311688u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4294967294)));
label_31168c:
    // 0x31168c: 0x50660007  beql        $v1, $a2, . + 4 + (0x7 << 2)
label_311690:
    if (ctx->pc == 0x311690u) {
        ctx->pc = 0x311690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31168Cu;
        // 0x311690: 0xa10b0000  sb          $t3, 0x0($t0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x311694u;
        goto label_311694;
    }
    ctx->pc = 0x31168Cu;
    {
        const bool branch_taken_0x31168c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        if (branch_taken_0x31168c) {
            ctx->pc = 0x311690u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31168Cu;
            // 0x311690: 0xa10b0000  sb          $t3, 0x0($t0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3116ACu;
            goto label_3116ac;
        }
    }
    ctx->pc = 0x311694u;
label_311694:
    // 0x311694: 0x9482fffc  lhu         $v0, -0x4($a0)
    ctx->pc = 0x311694u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4294967292)));
label_311698:
    // 0x311698: 0x50620004  beql        $v1, $v0, . + 4 + (0x4 << 2)
label_31169c:
    if (ctx->pc == 0x31169Cu) {
        ctx->pc = 0x31169Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311698u;
        // 0x31169c: 0xa10b0000  sb          $t3, 0x0($t0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3116A0u;
        goto label_3116a0;
    }
    ctx->pc = 0x311698u;
    {
        const bool branch_taken_0x311698 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x311698) {
            ctx->pc = 0x31169Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x311698u;
            // 0x31169c: 0xa10b0000  sb          $t3, 0x0($t0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3116ACu;
            goto label_3116ac;
        }
    }
    ctx->pc = 0x3116A0u;
label_3116a0:
    // 0x3116a0: 0x54c20003  bnel        $a2, $v0, . + 4 + (0x3 << 2)
label_3116a4:
    if (ctx->pc == 0x3116A4u) {
        ctx->pc = 0x3116A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3116A0u;
        // 0x3116a4: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3116A8u;
        goto label_3116a8;
    }
    ctx->pc = 0x3116A0u;
    {
        const bool branch_taken_0x3116a0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x3116a0) {
            ctx->pc = 0x3116A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3116A0u;
            // 0x3116a4: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3116B0u;
            goto label_3116b0;
        }
    }
    ctx->pc = 0x3116A8u;
label_3116a8:
    // 0x3116a8: 0xa10b0000  sb          $t3, 0x0($t0)
    ctx->pc = 0x3116a8u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 11));
label_3116ac:
    // 0x3116ac: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3116acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_3116b0:
    // 0x3116b0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3116b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_3116b4:
    // 0x3116b4: 0xf3102b  sltu        $v0, $a3, $s3
    ctx->pc = 0x3116b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_3116b8:
    // 0x3116b8: 0x10400043  beqz        $v0, . + 4 + (0x43 << 2)
label_3116bc:
    if (ctx->pc == 0x3116BCu) {
        ctx->pc = 0x3116BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3116B8u;
        // 0x3116bc: 0x24840002  addiu       $a0, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3116C0u;
        goto label_3116c0;
    }
    ctx->pc = 0x3116B8u;
    {
        const bool branch_taken_0x3116b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3116BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3116B8u;
        // 0x3116bc: 0x24840002  addiu       $a0, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3116b8) {
            ctx->pc = 0x3117C8u;
            goto label_3117c8;
        }
    }
    ctx->pc = 0x3116C0u;
label_3116c0:
    // 0x3116c0: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x3116c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3116c4:
    // 0x3116c4: 0x100502d  daddu       $t2, $t0, $zero
    ctx->pc = 0x3116c4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_3116c8:
    // 0x3116c8: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x3116c8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3116cc:
    // 0x3116cc: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x3116ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3116d0:
    // 0x3116d0: 0x2ce20002  sltiu       $v0, $a3, 0x2
    ctx->pc = 0x3116d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_3116d4:
    // 0x3116d4: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_3116d8:
    if (ctx->pc == 0x3116D8u) {
        ctx->pc = 0x3116D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3116D4u;
        // 0x3116d8: 0x24e20001  addiu       $v0, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3116DCu;
        goto label_3116dc;
    }
    ctx->pc = 0x3116D4u;
    {
        const bool branch_taken_0x3116d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3116D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3116D4u;
        // 0x3116d8: 0x24e20001  addiu       $v0, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3116d4) {
            ctx->pc = 0x311708u;
            goto label_311708;
        }
    }
    ctx->pc = 0x3116DCu;
label_3116dc:
    // 0x3116dc: 0x95030000  lhu         $v1, 0x0($t0)
    ctx->pc = 0x3116dcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
label_3116e0:
    // 0x3116e0: 0x9524fffe  lhu         $a0, -0x2($t1)
    ctx->pc = 0x3116e0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 4294967294)));
label_3116e4:
    // 0x3116e4: 0x50640008  beql        $v1, $a0, . + 4 + (0x8 << 2)
label_3116e8:
    if (ctx->pc == 0x3116E8u) {
        ctx->pc = 0x3116E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3116E4u;
        // 0x3116e8: 0xa14b0000  sb          $t3, 0x0($t2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 10), 0), (uint8_t)GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3116ECu;
        goto label_3116ec;
    }
    ctx->pc = 0x3116E4u;
    {
        const bool branch_taken_0x3116e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x3116e4) {
            ctx->pc = 0x3116E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3116E4u;
            // 0x3116e8: 0xa14b0000  sb          $t3, 0x0($t2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 10), 0), (uint8_t)GPR_U32(ctx, 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x311708u;
            goto label_311708;
        }
    }
    ctx->pc = 0x3116ECu;
label_3116ec:
    // 0x3116ec: 0x94c2fffc  lhu         $v0, -0x4($a2)
    ctx->pc = 0x3116ecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 4294967292)));
label_3116f0:
    // 0x3116f0: 0x50620004  beql        $v1, $v0, . + 4 + (0x4 << 2)
label_3116f4:
    if (ctx->pc == 0x3116F4u) {
        ctx->pc = 0x3116F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3116F0u;
        // 0x3116f4: 0xa14b0000  sb          $t3, 0x0($t2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 10), 0), (uint8_t)GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3116F8u;
        goto label_3116f8;
    }
    ctx->pc = 0x3116F0u;
    {
        const bool branch_taken_0x3116f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3116f0) {
            ctx->pc = 0x3116F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3116F0u;
            // 0x3116f4: 0xa14b0000  sb          $t3, 0x0($t2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 10), 0), (uint8_t)GPR_U32(ctx, 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x311704u;
            goto label_311704;
        }
    }
    ctx->pc = 0x3116F8u;
label_3116f8:
    // 0x3116f8: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
label_3116fc:
    if (ctx->pc == 0x3116FCu) {
        ctx->pc = 0x3116FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3116F8u;
        // 0x3116fc: 0x24e20001  addiu       $v0, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x311700u;
        goto label_311700;
    }
    ctx->pc = 0x3116F8u;
    {
        const bool branch_taken_0x3116f8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x3116FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3116F8u;
        // 0x3116fc: 0x24e20001  addiu       $v0, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3116f8) {
            ctx->pc = 0x311708u;
            goto label_311708;
        }
    }
    ctx->pc = 0x311700u;
label_311700:
    // 0x311700: 0xa14b0000  sb          $t3, 0x0($t2)
    ctx->pc = 0x311700u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 0), (uint8_t)GPR_U32(ctx, 11));
label_311704:
    // 0x311704: 0x24e20001  addiu       $v0, $a3, 0x1
    ctx->pc = 0x311704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_311708:
    // 0x311708: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x311708u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_31170c:
    // 0x31170c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_311710:
    if (ctx->pc == 0x311710u) {
        ctx->pc = 0x311710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31170Cu;
        // 0x311710: 0x24e20002  addiu       $v0, $a3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x311714u;
        goto label_311714;
    }
    ctx->pc = 0x31170Cu;
    {
        const bool branch_taken_0x31170c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x311710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31170Cu;
        // 0x311710: 0x24e20002  addiu       $v0, $a3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31170c) {
            ctx->pc = 0x311740u;
            goto label_311740;
        }
    }
    ctx->pc = 0x311714u;
label_311714:
    // 0x311714: 0x95030002  lhu         $v1, 0x2($t0)
    ctx->pc = 0x311714u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 2)));
label_311718:
    // 0x311718: 0x95240000  lhu         $a0, 0x0($t1)
    ctx->pc = 0x311718u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
label_31171c:
    // 0x31171c: 0x50640008  beql        $v1, $a0, . + 4 + (0x8 << 2)
label_311720:
    if (ctx->pc == 0x311720u) {
        ctx->pc = 0x311720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31171Cu;
        // 0x311720: 0xa14b0001  sb          $t3, 0x1($t2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 10), 1), (uint8_t)GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x311724u;
        goto label_311724;
    }
    ctx->pc = 0x31171Cu;
    {
        const bool branch_taken_0x31171c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x31171c) {
            ctx->pc = 0x311720u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31171Cu;
            // 0x311720: 0xa14b0001  sb          $t3, 0x1($t2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 10), 1), (uint8_t)GPR_U32(ctx, 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x311740u;
            goto label_311740;
        }
    }
    ctx->pc = 0x311724u;
label_311724:
    // 0x311724: 0x94c2fffe  lhu         $v0, -0x2($a2)
    ctx->pc = 0x311724u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 4294967294)));
label_311728:
    // 0x311728: 0x50620004  beql        $v1, $v0, . + 4 + (0x4 << 2)
label_31172c:
    if (ctx->pc == 0x31172Cu) {
        ctx->pc = 0x31172Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311728u;
        // 0x31172c: 0xa14b0001  sb          $t3, 0x1($t2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 10), 1), (uint8_t)GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x311730u;
        goto label_311730;
    }
    ctx->pc = 0x311728u;
    {
        const bool branch_taken_0x311728 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x311728) {
            ctx->pc = 0x31172Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x311728u;
            // 0x31172c: 0xa14b0001  sb          $t3, 0x1($t2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 10), 1), (uint8_t)GPR_U32(ctx, 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31173Cu;
            goto label_31173c;
        }
    }
    ctx->pc = 0x311730u;
label_311730:
    // 0x311730: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
label_311734:
    if (ctx->pc == 0x311734u) {
        ctx->pc = 0x311734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311730u;
        // 0x311734: 0x24e20002  addiu       $v0, $a3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x311738u;
        goto label_311738;
    }
    ctx->pc = 0x311730u;
    {
        const bool branch_taken_0x311730 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x311734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311730u;
        // 0x311734: 0x24e20002  addiu       $v0, $a3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311730) {
            ctx->pc = 0x311740u;
            goto label_311740;
        }
    }
    ctx->pc = 0x311738u;
label_311738:
    // 0x311738: 0xa14b0001  sb          $t3, 0x1($t2)
    ctx->pc = 0x311738u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 1), (uint8_t)GPR_U32(ctx, 11));
label_31173c:
    // 0x31173c: 0x24e20002  addiu       $v0, $a3, 0x2
    ctx->pc = 0x31173cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
label_311740:
    // 0x311740: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x311740u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_311744:
    // 0x311744: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_311748:
    if (ctx->pc == 0x311748u) {
        ctx->pc = 0x311748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311744u;
        // 0x311748: 0x24e20003  addiu       $v0, $a3, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31174Cu;
        goto label_31174c;
    }
    ctx->pc = 0x311744u;
    {
        const bool branch_taken_0x311744 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x311748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311744u;
        // 0x311748: 0x24e20003  addiu       $v0, $a3, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311744) {
            ctx->pc = 0x311778u;
            goto label_311778;
        }
    }
    ctx->pc = 0x31174Cu;
label_31174c:
    // 0x31174c: 0x95030004  lhu         $v1, 0x4($t0)
    ctx->pc = 0x31174cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 4)));
label_311750:
    // 0x311750: 0x95240002  lhu         $a0, 0x2($t1)
    ctx->pc = 0x311750u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 2)));
label_311754:
    // 0x311754: 0x50640008  beql        $v1, $a0, . + 4 + (0x8 << 2)
label_311758:
    if (ctx->pc == 0x311758u) {
        ctx->pc = 0x311758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311754u;
        // 0x311758: 0xa14b0002  sb          $t3, 0x2($t2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 10), 2), (uint8_t)GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31175Cu;
        goto label_31175c;
    }
    ctx->pc = 0x311754u;
    {
        const bool branch_taken_0x311754 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x311754) {
            ctx->pc = 0x311758u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x311754u;
            // 0x311758: 0xa14b0002  sb          $t3, 0x2($t2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 10), 2), (uint8_t)GPR_U32(ctx, 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x311778u;
            goto label_311778;
        }
    }
    ctx->pc = 0x31175Cu;
label_31175c:
    // 0x31175c: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x31175cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_311760:
    // 0x311760: 0x50620004  beql        $v1, $v0, . + 4 + (0x4 << 2)
label_311764:
    if (ctx->pc == 0x311764u) {
        ctx->pc = 0x311764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311760u;
        // 0x311764: 0xa14b0002  sb          $t3, 0x2($t2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 10), 2), (uint8_t)GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x311768u;
        goto label_311768;
    }
    ctx->pc = 0x311760u;
    {
        const bool branch_taken_0x311760 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x311760) {
            ctx->pc = 0x311764u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x311760u;
            // 0x311764: 0xa14b0002  sb          $t3, 0x2($t2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 10), 2), (uint8_t)GPR_U32(ctx, 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x311774u;
            goto label_311774;
        }
    }
    ctx->pc = 0x311768u;
label_311768:
    // 0x311768: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
label_31176c:
    if (ctx->pc == 0x31176Cu) {
        ctx->pc = 0x31176Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311768u;
        // 0x31176c: 0x24e20003  addiu       $v0, $a3, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x311770u;
        goto label_311770;
    }
    ctx->pc = 0x311768u;
    {
        const bool branch_taken_0x311768 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x31176Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311768u;
        // 0x31176c: 0x24e20003  addiu       $v0, $a3, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311768) {
            ctx->pc = 0x311778u;
            goto label_311778;
        }
    }
    ctx->pc = 0x311770u;
label_311770:
    // 0x311770: 0xa14b0002  sb          $t3, 0x2($t2)
    ctx->pc = 0x311770u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 2), (uint8_t)GPR_U32(ctx, 11));
label_311774:
    // 0x311774: 0x24e20003  addiu       $v0, $a3, 0x3
    ctx->pc = 0x311774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 3));
label_311778:
    // 0x311778: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x311778u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_31177c:
    // 0x31177c: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
label_311780:
    if (ctx->pc == 0x311780u) {
        ctx->pc = 0x311780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31177Cu;
        // 0x311780: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x311784u;
        goto label_311784;
    }
    ctx->pc = 0x31177Cu;
    {
        const bool branch_taken_0x31177c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31177c) {
            ctx->pc = 0x311780u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31177Cu;
            // 0x311780: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3117B0u;
            goto label_3117b0;
        }
    }
    ctx->pc = 0x311784u;
label_311784:
    // 0x311784: 0x95030006  lhu         $v1, 0x6($t0)
    ctx->pc = 0x311784u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 6)));
label_311788:
    // 0x311788: 0x95240004  lhu         $a0, 0x4($t1)
    ctx->pc = 0x311788u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 4)));
label_31178c:
    // 0x31178c: 0x50640007  beql        $v1, $a0, . + 4 + (0x7 << 2)
label_311790:
    if (ctx->pc == 0x311790u) {
        ctx->pc = 0x311790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31178Cu;
        // 0x311790: 0xa14b0003  sb          $t3, 0x3($t2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 10), 3), (uint8_t)GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x311794u;
        goto label_311794;
    }
    ctx->pc = 0x31178Cu;
    {
        const bool branch_taken_0x31178c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x31178c) {
            ctx->pc = 0x311790u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31178Cu;
            // 0x311790: 0xa14b0003  sb          $t3, 0x3($t2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 10), 3), (uint8_t)GPR_U32(ctx, 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3117ACu;
            goto label_3117ac;
        }
    }
    ctx->pc = 0x311794u;
label_311794:
    // 0x311794: 0x94c20002  lhu         $v0, 0x2($a2)
    ctx->pc = 0x311794u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
label_311798:
    // 0x311798: 0x50620004  beql        $v1, $v0, . + 4 + (0x4 << 2)
label_31179c:
    if (ctx->pc == 0x31179Cu) {
        ctx->pc = 0x31179Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311798u;
        // 0x31179c: 0xa14b0003  sb          $t3, 0x3($t2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 10), 3), (uint8_t)GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3117A0u;
        goto label_3117a0;
    }
    ctx->pc = 0x311798u;
    {
        const bool branch_taken_0x311798 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x311798) {
            ctx->pc = 0x31179Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x311798u;
            // 0x31179c: 0xa14b0003  sb          $t3, 0x3($t2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 10), 3), (uint8_t)GPR_U32(ctx, 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3117ACu;
            goto label_3117ac;
        }
    }
    ctx->pc = 0x3117A0u;
label_3117a0:
    // 0x3117a0: 0x54820003  bnel        $a0, $v0, . + 4 + (0x3 << 2)
label_3117a4:
    if (ctx->pc == 0x3117A4u) {
        ctx->pc = 0x3117A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3117A0u;
        // 0x3117a4: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3117A8u;
        goto label_3117a8;
    }
    ctx->pc = 0x3117A0u;
    {
        const bool branch_taken_0x3117a0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x3117a0) {
            ctx->pc = 0x3117A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3117A0u;
            // 0x3117a4: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3117B0u;
            goto label_3117b0;
        }
    }
    ctx->pc = 0x3117A8u;
label_3117a8:
    // 0x3117a8: 0xa14b0003  sb          $t3, 0x3($t2)
    ctx->pc = 0x3117a8u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 3), (uint8_t)GPR_U32(ctx, 11));
label_3117ac:
    // 0x3117ac: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x3117acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_3117b0:
    // 0x3117b0: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x3117b0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
label_3117b4:
    // 0x3117b4: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x3117b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_3117b8:
    // 0x3117b8: 0x25290008  addiu       $t1, $t1, 0x8
    ctx->pc = 0x3117b8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
label_3117bc:
    // 0x3117bc: 0xf3102b  sltu        $v0, $a3, $s3
    ctx->pc = 0x3117bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_3117c0:
    // 0x3117c0: 0x1440ffc3  bnez        $v0, . + 4 + (-0x3D << 2)
label_3117c4:
    if (ctx->pc == 0x3117C4u) {
        ctx->pc = 0x3117C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3117C0u;
        // 0x3117c4: 0x25080008  addiu       $t0, $t0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3117C8u;
        goto label_3117c8;
    }
    ctx->pc = 0x3117C0u;
    {
        const bool branch_taken_0x3117c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3117C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3117C0u;
        // 0x3117c4: 0x25080008  addiu       $t0, $t0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3117c0) {
            ctx->pc = 0x3116D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3116d0;
        }
    }
    ctx->pc = 0x3117C8u;
label_3117c8:
    // 0x3117c8: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x3117c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_3117cc:
    // 0x3117cc: 0x2605e880  addiu       $a1, $s0, -0x1780
    ctx->pc = 0x3117ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961280));
label_3117d0:
    // 0x3117d0: 0x8ea20008  lw          $v0, 0x8($s5)
    ctx->pc = 0x3117d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_3117d4:
    // 0x3117d4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3117d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3117d8:
    // 0x3117d8: 0x731823  subu        $v1, $v1, $s3
    ctx->pc = 0x3117d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_3117dc:
    // 0x3117dc: 0x8ca6010c  lw          $a2, 0x10C($a1)
    ctx->pc = 0x3117dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 268)));
label_3117e0:
    // 0x3117e0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x3117e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3117e4:
    // 0x3117e4: 0xaea20008  sw          $v0, 0x8($s5)
    ctx->pc = 0x3117e4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 2));
label_3117e8:
    // 0x3117e8: 0xc0f809  jalr        $a2
label_3117ec:
    if (ctx->pc == 0x3117ECu) {
        ctx->pc = 0x3117ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3117E8u;
        // 0x3117ec: 0xae530004  sw          $s3, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3117F0u;
        goto label_3117f0;
    }
    ctx->pc = 0x3117E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x3117F0u);
        ctx->pc = 0x3117ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3117E8u;
        // 0x3117ec: 0xae530004  sw          $s3, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3117E8u, 0x3117F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3117F0u;
label_3117f0:
    // 0x3117f0: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x3117f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3117f4:
    // 0x3117f4: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x3117f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3117f8:
    // 0x3117f8: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x3117f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3117fc:
    // 0x3117fc: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x3117fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_311800:
    // 0x311800: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x311800u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_311804:
    // 0x311804: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x311804u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_311808:
    // 0x311808: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x311808u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_31180c:
    // 0x31180c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31180cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_311810:
    // 0x311810: 0x3e00008  jr          $ra
label_311814:
    if (ctx->pc == 0x311814u) {
        ctx->pc = 0x311814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311810u;
        // 0x311814: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x311818u;
        goto label_fallthrough_0x311810;
    }
    ctx->pc = 0x311810u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x311814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311810u;
        // 0x311814: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x311810u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x311810:
    ctx->pc = 0x311818u;
}
