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

// Function: sub_003493B8
// Address: 0x3493b8 - 0x349848
void sub_003493B8_0x3493b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003493B8_0x3493b8");
#endif

    switch (ctx->pc) {
        case 0x3493b8u: goto label_3493b8;
        case 0x3493bcu: goto label_3493bc;
        case 0x3493c0u: goto label_3493c0;
        case 0x3493c4u: goto label_3493c4;
        case 0x3493c8u: goto label_3493c8;
        case 0x3493ccu: goto label_3493cc;
        case 0x3493d0u: goto label_3493d0;
        case 0x3493d4u: goto label_3493d4;
        case 0x3493d8u: goto label_3493d8;
        case 0x3493dcu: goto label_3493dc;
        case 0x3493e0u: goto label_3493e0;
        case 0x3493e4u: goto label_3493e4;
        case 0x3493e8u: goto label_3493e8;
        case 0x3493ecu: goto label_3493ec;
        case 0x3493f0u: goto label_3493f0;
        case 0x3493f4u: goto label_3493f4;
        case 0x3493f8u: goto label_3493f8;
        case 0x3493fcu: goto label_3493fc;
        case 0x349400u: goto label_349400;
        case 0x349404u: goto label_349404;
        case 0x349408u: goto label_349408;
        case 0x34940cu: goto label_34940c;
        case 0x349410u: goto label_349410;
        case 0x349414u: goto label_349414;
        case 0x349418u: goto label_349418;
        case 0x34941cu: goto label_34941c;
        case 0x349420u: goto label_349420;
        case 0x349424u: goto label_349424;
        case 0x349428u: goto label_349428;
        case 0x34942cu: goto label_34942c;
        case 0x349430u: goto label_349430;
        case 0x349434u: goto label_349434;
        case 0x349438u: goto label_349438;
        case 0x34943cu: goto label_34943c;
        case 0x349440u: goto label_349440;
        case 0x349444u: goto label_349444;
        case 0x349448u: goto label_349448;
        case 0x34944cu: goto label_34944c;
        case 0x349450u: goto label_349450;
        case 0x349454u: goto label_349454;
        case 0x349458u: goto label_349458;
        case 0x34945cu: goto label_34945c;
        case 0x349460u: goto label_349460;
        case 0x349464u: goto label_349464;
        case 0x349468u: goto label_349468;
        case 0x34946cu: goto label_34946c;
        case 0x349470u: goto label_349470;
        case 0x349474u: goto label_349474;
        case 0x349478u: goto label_349478;
        case 0x34947cu: goto label_34947c;
        case 0x349480u: goto label_349480;
        case 0x349484u: goto label_349484;
        case 0x349488u: goto label_349488;
        case 0x34948cu: goto label_34948c;
        case 0x349490u: goto label_349490;
        case 0x349494u: goto label_349494;
        case 0x349498u: goto label_349498;
        case 0x34949cu: goto label_34949c;
        case 0x3494a0u: goto label_3494a0;
        case 0x3494a4u: goto label_3494a4;
        case 0x3494a8u: goto label_3494a8;
        case 0x3494acu: goto label_3494ac;
        case 0x3494b0u: goto label_3494b0;
        case 0x3494b4u: goto label_3494b4;
        case 0x3494b8u: goto label_3494b8;
        case 0x3494bcu: goto label_3494bc;
        case 0x3494c0u: goto label_3494c0;
        case 0x3494c4u: goto label_3494c4;
        case 0x3494c8u: goto label_3494c8;
        case 0x3494ccu: goto label_3494cc;
        case 0x3494d0u: goto label_3494d0;
        case 0x3494d4u: goto label_3494d4;
        case 0x3494d8u: goto label_3494d8;
        case 0x3494dcu: goto label_3494dc;
        case 0x3494e0u: goto label_3494e0;
        case 0x3494e4u: goto label_3494e4;
        case 0x3494e8u: goto label_3494e8;
        case 0x3494ecu: goto label_3494ec;
        case 0x3494f0u: goto label_3494f0;
        case 0x3494f4u: goto label_3494f4;
        case 0x3494f8u: goto label_3494f8;
        case 0x3494fcu: goto label_3494fc;
        case 0x349500u: goto label_349500;
        case 0x349504u: goto label_349504;
        case 0x349508u: goto label_349508;
        case 0x34950cu: goto label_34950c;
        case 0x349510u: goto label_349510;
        case 0x349514u: goto label_349514;
        case 0x349518u: goto label_349518;
        case 0x34951cu: goto label_34951c;
        case 0x349520u: goto label_349520;
        case 0x349524u: goto label_349524;
        case 0x349528u: goto label_349528;
        case 0x34952cu: goto label_34952c;
        case 0x349530u: goto label_349530;
        case 0x349534u: goto label_349534;
        case 0x349538u: goto label_349538;
        case 0x34953cu: goto label_34953c;
        case 0x349540u: goto label_349540;
        case 0x349544u: goto label_349544;
        case 0x349548u: goto label_349548;
        case 0x34954cu: goto label_34954c;
        case 0x349550u: goto label_349550;
        case 0x349554u: goto label_349554;
        case 0x349558u: goto label_349558;
        case 0x34955cu: goto label_34955c;
        case 0x349560u: goto label_349560;
        case 0x349564u: goto label_349564;
        case 0x349568u: goto label_349568;
        case 0x34956cu: goto label_34956c;
        case 0x349570u: goto label_349570;
        case 0x349574u: goto label_349574;
        case 0x349578u: goto label_349578;
        case 0x34957cu: goto label_34957c;
        case 0x349580u: goto label_349580;
        case 0x349584u: goto label_349584;
        case 0x349588u: goto label_349588;
        case 0x34958cu: goto label_34958c;
        case 0x349590u: goto label_349590;
        case 0x349594u: goto label_349594;
        case 0x349598u: goto label_349598;
        case 0x34959cu: goto label_34959c;
        case 0x3495a0u: goto label_3495a0;
        case 0x3495a4u: goto label_3495a4;
        case 0x3495a8u: goto label_3495a8;
        case 0x3495acu: goto label_3495ac;
        case 0x3495b0u: goto label_3495b0;
        case 0x3495b4u: goto label_3495b4;
        case 0x3495b8u: goto label_3495b8;
        case 0x3495bcu: goto label_3495bc;
        case 0x3495c0u: goto label_3495c0;
        case 0x3495c4u: goto label_3495c4;
        case 0x3495c8u: goto label_3495c8;
        case 0x3495ccu: goto label_3495cc;
        case 0x3495d0u: goto label_3495d0;
        case 0x3495d4u: goto label_3495d4;
        case 0x3495d8u: goto label_3495d8;
        case 0x3495dcu: goto label_3495dc;
        case 0x3495e0u: goto label_3495e0;
        case 0x3495e4u: goto label_3495e4;
        case 0x3495e8u: goto label_3495e8;
        case 0x3495ecu: goto label_3495ec;
        case 0x3495f0u: goto label_3495f0;
        case 0x3495f4u: goto label_3495f4;
        case 0x3495f8u: goto label_3495f8;
        case 0x3495fcu: goto label_3495fc;
        case 0x349600u: goto label_349600;
        case 0x349604u: goto label_349604;
        case 0x349608u: goto label_349608;
        case 0x34960cu: goto label_34960c;
        case 0x349610u: goto label_349610;
        case 0x349614u: goto label_349614;
        case 0x349618u: goto label_349618;
        case 0x34961cu: goto label_34961c;
        case 0x349620u: goto label_349620;
        case 0x349624u: goto label_349624;
        case 0x349628u: goto label_349628;
        case 0x34962cu: goto label_34962c;
        case 0x349630u: goto label_349630;
        case 0x349634u: goto label_349634;
        case 0x349638u: goto label_349638;
        case 0x34963cu: goto label_34963c;
        case 0x349640u: goto label_349640;
        case 0x349644u: goto label_349644;
        case 0x349648u: goto label_349648;
        case 0x34964cu: goto label_34964c;
        case 0x349650u: goto label_349650;
        case 0x349654u: goto label_349654;
        case 0x349658u: goto label_349658;
        case 0x34965cu: goto label_34965c;
        case 0x349660u: goto label_349660;
        case 0x349664u: goto label_349664;
        case 0x349668u: goto label_349668;
        case 0x34966cu: goto label_34966c;
        case 0x349670u: goto label_349670;
        case 0x349674u: goto label_349674;
        case 0x349678u: goto label_349678;
        case 0x34967cu: goto label_34967c;
        case 0x349680u: goto label_349680;
        case 0x349684u: goto label_349684;
        case 0x349688u: goto label_349688;
        case 0x34968cu: goto label_34968c;
        case 0x349690u: goto label_349690;
        case 0x349694u: goto label_349694;
        case 0x349698u: goto label_349698;
        case 0x34969cu: goto label_34969c;
        case 0x3496a0u: goto label_3496a0;
        case 0x3496a4u: goto label_3496a4;
        case 0x3496a8u: goto label_3496a8;
        case 0x3496acu: goto label_3496ac;
        case 0x3496b0u: goto label_3496b0;
        case 0x3496b4u: goto label_3496b4;
        case 0x3496b8u: goto label_3496b8;
        case 0x3496bcu: goto label_3496bc;
        case 0x3496c0u: goto label_3496c0;
        case 0x3496c4u: goto label_3496c4;
        case 0x3496c8u: goto label_3496c8;
        case 0x3496ccu: goto label_3496cc;
        case 0x3496d0u: goto label_3496d0;
        case 0x3496d4u: goto label_3496d4;
        case 0x3496d8u: goto label_3496d8;
        case 0x3496dcu: goto label_3496dc;
        case 0x3496e0u: goto label_3496e0;
        case 0x3496e4u: goto label_3496e4;
        case 0x3496e8u: goto label_3496e8;
        case 0x3496ecu: goto label_3496ec;
        case 0x3496f0u: goto label_3496f0;
        case 0x3496f4u: goto label_3496f4;
        case 0x3496f8u: goto label_3496f8;
        case 0x3496fcu: goto label_3496fc;
        case 0x349700u: goto label_349700;
        case 0x349704u: goto label_349704;
        case 0x349708u: goto label_349708;
        case 0x34970cu: goto label_34970c;
        case 0x349710u: goto label_349710;
        case 0x349714u: goto label_349714;
        case 0x349718u: goto label_349718;
        case 0x34971cu: goto label_34971c;
        case 0x349720u: goto label_349720;
        case 0x349724u: goto label_349724;
        case 0x349728u: goto label_349728;
        case 0x34972cu: goto label_34972c;
        case 0x349730u: goto label_349730;
        case 0x349734u: goto label_349734;
        case 0x349738u: goto label_349738;
        case 0x34973cu: goto label_34973c;
        case 0x349740u: goto label_349740;
        case 0x349744u: goto label_349744;
        case 0x349748u: goto label_349748;
        case 0x34974cu: goto label_34974c;
        case 0x349750u: goto label_349750;
        case 0x349754u: goto label_349754;
        case 0x349758u: goto label_349758;
        case 0x34975cu: goto label_34975c;
        case 0x349760u: goto label_349760;
        case 0x349764u: goto label_349764;
        case 0x349768u: goto label_349768;
        case 0x34976cu: goto label_34976c;
        case 0x349770u: goto label_349770;
        case 0x349774u: goto label_349774;
        case 0x349778u: goto label_349778;
        case 0x34977cu: goto label_34977c;
        case 0x349780u: goto label_349780;
        case 0x349784u: goto label_349784;
        case 0x349788u: goto label_349788;
        case 0x34978cu: goto label_34978c;
        case 0x349790u: goto label_349790;
        case 0x349794u: goto label_349794;
        case 0x349798u: goto label_349798;
        case 0x34979cu: goto label_34979c;
        case 0x3497a0u: goto label_3497a0;
        case 0x3497a4u: goto label_3497a4;
        case 0x3497a8u: goto label_3497a8;
        case 0x3497acu: goto label_3497ac;
        case 0x3497b0u: goto label_3497b0;
        case 0x3497b4u: goto label_3497b4;
        case 0x3497b8u: goto label_3497b8;
        case 0x3497bcu: goto label_3497bc;
        case 0x3497c0u: goto label_3497c0;
        case 0x3497c4u: goto label_3497c4;
        case 0x3497c8u: goto label_3497c8;
        case 0x3497ccu: goto label_3497cc;
        case 0x3497d0u: goto label_3497d0;
        case 0x3497d4u: goto label_3497d4;
        case 0x3497d8u: goto label_3497d8;
        case 0x3497dcu: goto label_3497dc;
        case 0x3497e0u: goto label_3497e0;
        case 0x3497e4u: goto label_3497e4;
        case 0x3497e8u: goto label_3497e8;
        case 0x3497ecu: goto label_3497ec;
        case 0x3497f0u: goto label_3497f0;
        case 0x3497f4u: goto label_3497f4;
        case 0x3497f8u: goto label_3497f8;
        case 0x3497fcu: goto label_3497fc;
        case 0x349800u: goto label_349800;
        case 0x349804u: goto label_349804;
        case 0x349808u: goto label_349808;
        case 0x34980cu: goto label_34980c;
        case 0x349810u: goto label_349810;
        case 0x349814u: goto label_349814;
        case 0x349818u: goto label_349818;
        case 0x34981cu: goto label_34981c;
        case 0x349820u: goto label_349820;
        case 0x349824u: goto label_349824;
        case 0x349828u: goto label_349828;
        case 0x34982cu: goto label_34982c;
        case 0x349830u: goto label_349830;
        case 0x349834u: goto label_349834;
        case 0x349838u: goto label_349838;
        case 0x34983cu: goto label_34983c;
        case 0x349840u: goto label_349840;
        case 0x349844u: goto label_349844;
        default: break;
    }

    ctx->pc = 0x3493b8u;

label_3493b8:
    // 0x3493b8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3493b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_3493bc:
    // 0x3493bc: 0x3c060035  lui         $a2, 0x35
    ctx->pc = 0x3493bcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)53 << 16));
label_3493c0:
    // 0x3493c0: 0x3c070035  lui         $a3, 0x35
    ctx->pc = 0x3493c0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)53 << 16));
label_3493c4:
    // 0x3493c4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3493c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_3493c8:
    // 0x3493c8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3493c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3493cc:
    // 0x3493cc: 0x24c69ce0  addiu       $a2, $a2, -0x6320
    ctx->pc = 0x3493ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294941920));
label_3493d0:
    // 0x3493d0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x3493d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_3493d4:
    // 0x3493d4: 0x24e79260  addiu       $a3, $a3, -0x6DA0
    ctx->pc = 0x3493d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294939232));
label_3493d8:
    // 0x3493d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3493d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3493dc:
    // 0x3493dc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3493dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3493e0:
    // 0x3493e0: 0x24050130  addiu       $a1, $zero, 0x130
    ctx->pc = 0x3493e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
label_3493e4:
    // 0x3493e4: 0xc1063f6  jal         func_418FD8
label_3493e8:
    if (ctx->pc == 0x3493E8u) {
        ctx->pc = 0x3493E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3493E4u;
        // 0x3493e8: 0x24120080  addiu       $s2, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3493ECu;
        goto label_3493ec;
    }
    ctx->pc = 0x3493E4u;
    SET_GPR_U32(ctx, 31, 0x3493ECu);
    ctx->pc = 0x3493E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3493E4u;
    // 0x3493e8: 0x24120080  addiu       $s2, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x418FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x418FD8u, 0x3493E4u, 0x3493ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3493ECu;
label_3493ec:
    // 0x3493ec: 0x3c100062  lui         $s0, 0x62
    ctx->pc = 0x3493ecu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)98 << 16));
label_3493f0:
    // 0x3493f0: 0x3c060035  lui         $a2, 0x35
    ctx->pc = 0x3493f0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)53 << 16));
label_3493f4:
    // 0x3493f4: 0xae02c2c8  sw          $v0, -0x3D38($s0)
    ctx->pc = 0x3493f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294951624), GPR_U32(ctx, 2));
label_3493f8:
    // 0x3493f8: 0x3c070035  lui         $a3, 0x35
    ctx->pc = 0x3493f8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)53 << 16));
label_3493fc:
    // 0x3493fc: 0x3c080035  lui         $t0, 0x35
    ctx->pc = 0x3493fcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)53 << 16));
label_349400:
    // 0x349400: 0x2610c2c8  addiu       $s0, $s0, -0x3D38
    ctx->pc = 0x349400u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294951624));
label_349404:
    // 0x349404: 0x25089d98  addiu       $t0, $t0, -0x6268
    ctx->pc = 0x349404u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294942104));
label_349408:
    // 0x349408: 0x24c69d10  addiu       $a2, $a2, -0x62F0
    ctx->pc = 0x349408u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294941968));
label_34940c:
    // 0x34940c: 0x24e79d20  addiu       $a3, $a3, -0x62E0
    ctx->pc = 0x34940cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294941984));
label_349410:
    // 0x349410: 0x24050130  addiu       $a1, $zero, 0x130
    ctx->pc = 0x349410u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
label_349414:
    // 0x349414: 0xc0e28ec  jal         func_38A3B0
label_349418:
    if (ctx->pc == 0x349418u) {
        ctx->pc = 0x349418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349414u;
        // 0x349418: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34941Cu;
        goto label_34941c;
    }
    ctx->pc = 0x349414u;
    SET_GPR_U32(ctx, 31, 0x34941Cu);
    ctx->pc = 0x349418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349414u;
    // 0x349418: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38A3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38A3B0u, 0x349414u, 0x34941Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34941Cu;
label_34941c:
    // 0x34941c: 0x3c050035  lui         $a1, 0x35
    ctx->pc = 0x34941cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
label_349420:
    // 0x349420: 0x3c060035  lui         $a2, 0x35
    ctx->pc = 0x349420u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)53 << 16));
label_349424:
    // 0x349424: 0x3c070035  lui         $a3, 0x35
    ctx->pc = 0x349424u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)53 << 16));
label_349428:
    // 0x349428: 0x24c69f48  addiu       $a2, $a2, -0x60B8
    ctx->pc = 0x349428u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294942536));
label_34942c:
    // 0x34942c: 0x24e79e30  addiu       $a3, $a3, -0x61D0
    ctx->pc = 0x34942cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294942256));
label_349430:
    // 0x349430: 0x24a59e70  addiu       $a1, $a1, -0x6190
    ctx->pc = 0x349430u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942320));
label_349434:
    // 0x349434: 0x24040130  addiu       $a0, $zero, 0x130
    ctx->pc = 0x349434u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
label_349438:
    // 0x349438: 0xc0e2910  jal         func_38A440
label_34943c:
    if (ctx->pc == 0x34943Cu) {
        ctx->pc = 0x34943Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349438u;
        // 0x34943c: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x349440u;
        goto label_349440;
    }
    ctx->pc = 0x349438u;
    SET_GPR_U32(ctx, 31, 0x349440u);
    ctx->pc = 0x34943Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349438u;
    // 0x34943c: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38A440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38A440u, 0x349438u, 0x349440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349440u;
label_349440:
    // 0x349440: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x349440u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_349444:
    // 0x349444: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x349444u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
label_349448:
    // 0x349448: 0xae03007c  sw          $v1, 0x7C($s0)
    ctx->pc = 0x349448u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 3));
label_34944c:
    // 0x34944c: 0x2484fc20  addiu       $a0, $a0, -0x3E0
    ctx->pc = 0x34944cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966304));
label_349450:
    // 0x349450: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x349450u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_349454:
    // 0x349454: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x349454u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
label_349458:
    // 0x349458: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x349458u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
label_34945c:
    // 0x34945c: 0xc0d26e8  jal         func_349BA0
label_349460:
    if (ctx->pc == 0x349460u) {
        ctx->pc = 0x349460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34945Cu;
        // 0x349460: 0xae000068  sw          $zero, 0x68($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x349464u;
        goto label_349464;
    }
    ctx->pc = 0x34945Cu;
    SET_GPR_U32(ctx, 31, 0x349464u);
    ctx->pc = 0x349460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34945Cu;
    // 0x349460: 0xae000068  sw          $zero, 0x68($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x349BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349BA0u, 0x34945Cu, 0x349464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349464u;
label_349464:
    // 0x349464: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x349464u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
label_349468:
    // 0x349468: 0xc0d26f2  jal         func_349BC8
label_34946c:
    if (ctx->pc == 0x34946Cu) {
        ctx->pc = 0x34946Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349468u;
        // 0x34946c: 0x2484fcf8  addiu       $a0, $a0, -0x308 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966520));
        ctx->in_delay_slot = false;
        ctx->pc = 0x349470u;
        goto label_349470;
    }
    ctx->pc = 0x349468u;
    SET_GPR_U32(ctx, 31, 0x349470u);
    ctx->pc = 0x34946Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349468u;
    // 0x34946c: 0x2484fcf8  addiu       $a0, $a0, -0x308 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x349BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349BC8u, 0x349468u, 0x349470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349470u;
label_349470:
    // 0x349470: 0x3c110062  lui         $s1, 0x62
    ctx->pc = 0x349470u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)98 << 16));
label_349474:
    // 0x349474: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x349474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_349478:
    // 0x349478: 0x2631e880  addiu       $s1, $s1, -0x1780
    ctx->pc = 0x349478u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294961280));
label_34947c:
    // 0x34947c: 0xae000094  sw          $zero, 0x94($s0)
    ctx->pc = 0x34947cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 0));
label_349480:
    // 0x349480: 0xae000090  sw          $zero, 0x90($s0)
    ctx->pc = 0x349480u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 0));
label_349484:
    // 0x349484: 0x3c050104  lui         $a1, 0x104
    ctx->pc = 0x349484u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)260 << 16));
label_349488:
    // 0x349488: 0x8e220108  lw          $v0, 0x108($s1)
    ctx->pc = 0x349488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 264)));
label_34948c:
    // 0x34948c: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x34948cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_349490:
    // 0x349490: 0xae0300c4  sw          $v1, 0xC4($s0)
    ctx->pc = 0x349490u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 3));
label_349494:
    // 0x349494: 0x34a50130  ori         $a1, $a1, 0x130
    ctx->pc = 0x349494u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)304);
label_349498:
    // 0x349498: 0xae030098  sw          $v1, 0x98($s0)
    ctx->pc = 0x349498u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 3));
label_34949c:
    // 0x34949c: 0xae03009c  sw          $v1, 0x9C($s0)
    ctx->pc = 0x34949cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 3));
label_3494a0:
    // 0x3494a0: 0xae0300a0  sw          $v1, 0xA0($s0)
    ctx->pc = 0x3494a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 3));
label_3494a4:
    // 0x3494a4: 0xae0300a4  sw          $v1, 0xA4($s0)
    ctx->pc = 0x3494a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 3));
label_3494a8:
    // 0x3494a8: 0xae0300a8  sw          $v1, 0xA8($s0)
    ctx->pc = 0x3494a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 3));
label_3494ac:
    // 0x3494ac: 0xae0300b4  sw          $v1, 0xB4($s0)
    ctx->pc = 0x3494acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 3));
label_3494b0:
    // 0x3494b0: 0xae0300b8  sw          $v1, 0xB8($s0)
    ctx->pc = 0x3494b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 3));
label_3494b4:
    // 0x3494b4: 0xae0300bc  sw          $v1, 0xBC($s0)
    ctx->pc = 0x3494b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 3));
label_3494b8:
    // 0x3494b8: 0x40f809  jalr        $v0
label_3494bc:
    if (ctx->pc == 0x3494BCu) {
        ctx->pc = 0x3494BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3494B8u;
        // 0x3494bc: 0xae0300c0  sw          $v1, 0xC0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3494C0u;
        goto label_3494c0;
    }
    ctx->pc = 0x3494B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3494C0u);
        ctx->pc = 0x3494BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3494B8u;
        // 0x3494bc: 0xae0300c0  sw          $v1, 0xC0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3494B8u, 0x3494C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3494C0u;
label_3494c0:
    // 0x3494c0: 0x8e230108  lw          $v1, 0x108($s1)
    ctx->pc = 0x3494c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 264)));
label_3494c4:
    // 0x3494c4: 0x3c050104  lui         $a1, 0x104
    ctx->pc = 0x3494c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)260 << 16));
label_3494c8:
    // 0x3494c8: 0xae12008c  sw          $s2, 0x8C($s0)
    ctx->pc = 0x3494c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 18));
label_3494cc:
    // 0x3494cc: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x3494ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_3494d0:
    // 0x3494d0: 0xae020088  sw          $v0, 0x88($s0)
    ctx->pc = 0x3494d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 2));
label_3494d4:
    // 0x3494d4: 0x60f809  jalr        $v1
label_3494d8:
    if (ctx->pc == 0x3494D8u) {
        ctx->pc = 0x3494D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3494D4u;
        // 0x3494d8: 0x34a50130  ori         $a1, $a1, 0x130 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)304);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3494DCu;
        goto label_3494dc;
    }
    ctx->pc = 0x3494D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3494DCu);
        ctx->pc = 0x3494D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3494D4u;
        // 0x3494d8: 0x34a50130  ori         $a1, $a1, 0x130 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)304);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3494D4u, 0x3494DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3494DCu;
label_3494dc:
    // 0x3494dc: 0xae020080  sw          $v0, 0x80($s0)
    ctx->pc = 0x3494dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 2));
label_3494e0:
    // 0x3494e0: 0xae120084  sw          $s2, 0x84($s0)
    ctx->pc = 0x3494e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 18));
label_3494e4:
    // 0x3494e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3494e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3494e8:
    // 0x3494e8: 0xae000078  sw          $zero, 0x78($s0)
    ctx->pc = 0x3494e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 0));
label_3494ec:
    // 0x3494ec: 0xae000074  sw          $zero, 0x74($s0)
    ctx->pc = 0x3494ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 0));
label_3494f0:
    // 0x3494f0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3494f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3494f4:
    // 0x3494f4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3494f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3494f8:
    // 0x3494f8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3494f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3494fc:
    // 0x3494fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3494fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_349500:
    // 0x349500: 0x3e00008  jr          $ra
label_349504:
    if (ctx->pc == 0x349504u) {
        ctx->pc = 0x349504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349500u;
        // 0x349504: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x349508u;
        goto label_349508;
    }
    ctx->pc = 0x349500u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x349504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349500u;
        // 0x349504: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x349500u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x349508u;
label_349508:
    // 0x349508: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x349508u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_34950c:
    // 0x34950c: 0x3c050062  lui         $a1, 0x62
    ctx->pc = 0x34950cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)98 << 16));
label_349510:
    // 0x349510: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x349510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_349514:
    // 0x349514: 0x24a5c2d4  addiu       $a1, $a1, -0x3D2C
    ctx->pc = 0x349514u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951636));
label_349518:
    // 0x349518: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x349518u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_34951c:
    // 0x34951c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x34951cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_349520:
    // 0x349520: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x349520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_349524:
    // 0x349524: 0xc103468  jal         func_40D1A0
label_349528:
    if (ctx->pc == 0x349528u) {
        ctx->pc = 0x349528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349524u;
        // 0x349528: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34952Cu;
        goto label_34952c;
    }
    ctx->pc = 0x349524u;
    SET_GPR_U32(ctx, 31, 0x34952Cu);
    ctx->pc = 0x349528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349524u;
    // 0x349528: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D1A0u, 0x349524u, 0x34952Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34952Cu;
label_34952c:
    // 0x34952c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34952cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_349530:
    // 0x349530: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x349530u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_349534:
    // 0x349534: 0xc103468  jal         func_40D1A0
label_349538:
    if (ctx->pc == 0x349538u) {
        ctx->pc = 0x349538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349534u;
        // 0x349538: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34953Cu;
        goto label_34953c;
    }
    ctx->pc = 0x349534u;
    SET_GPR_U32(ctx, 31, 0x34953Cu);
    ctx->pc = 0x349538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349534u;
    // 0x349538: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D1A0u, 0x349534u, 0x34953Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34953Cu;
label_34953c:
    // 0x34953c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x34953cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_349540:
    // 0x349540: 0x18400011  blez        $v0, . + 4 + (0x11 << 2)
label_349544:
    if (ctx->pc == 0x349544u) {
        ctx->pc = 0x349544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349540u;
        // 0x349544: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x349548u;
        goto label_349548;
    }
    ctx->pc = 0x349540u;
    {
        const bool branch_taken_0x349540 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x349544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349540u;
        // 0x349544: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349540) {
            ctx->pc = 0x349588u;
            goto label_349588;
        }
    }
    ctx->pc = 0x349548u;
label_349548:
    // 0x349548: 0x1840000f  blez        $v0, . + 4 + (0xF << 2)
label_34954c:
    if (ctx->pc == 0x34954Cu) {
        ctx->pc = 0x34954Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349548u;
        // 0x34954c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x349550u;
        goto label_349550;
    }
    ctx->pc = 0x349548u;
    {
        const bool branch_taken_0x349548 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x34954Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349548u;
        // 0x34954c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349548) {
            ctx->pc = 0x349588u;
            goto label_349588;
        }
    }
    ctx->pc = 0x349550u;
label_349550:
    // 0x349550: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x349550u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_349554:
    // 0x349554: 0x0  nop
    ctx->pc = 0x349554u;
    // NOP
label_349558:
    // 0x349558: 0x24050025  addiu       $a1, $zero, 0x25
    ctx->pc = 0x349558u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_34955c:
    // 0x34955c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x34955cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_349560:
    // 0x349560: 0xc103322  jal         func_40CC88
label_349564:
    if (ctx->pc == 0x349564u) {
        ctx->pc = 0x349564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349560u;
        // 0x349564: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x349568u;
        goto label_349568;
    }
    ctx->pc = 0x349560u;
    SET_GPR_U32(ctx, 31, 0x349568u);
    ctx->pc = 0x349564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349560u;
    // 0x349564: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40CC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40CC88u, 0x349560u, 0x349568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349568u;
label_349568:
    // 0x349568: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
label_34956c:
    if (ctx->pc == 0x34956Cu) {
        ctx->pc = 0x34956Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349568u;
        // 0x34956c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x349570u;
        goto label_349570;
    }
    ctx->pc = 0x349568u;
    {
        const bool branch_taken_0x349568 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34956Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349568u;
        // 0x34956c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349568) {
            ctx->pc = 0x349620u;
            goto label_349620;
        }
    }
    ctx->pc = 0x349570u;
label_349570:
    // 0x349570: 0xc0d115c  jal         func_344570
label_349574:
    if (ctx->pc == 0x349574u) {
        ctx->pc = 0x349574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349570u;
        // 0x349574: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x349578u;
        goto label_349578;
    }
    ctx->pc = 0x349570u;
    SET_GPR_U32(ctx, 31, 0x349578u);
    ctx->pc = 0x349574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349570u;
    // 0x349574: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344570u, 0x349570u, 0x349578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349578u;
label_349578:
    // 0x349578: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x349578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_34957c:
    // 0x34957c: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x34957cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_349580:
    // 0x349580: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
label_349584:
    if (ctx->pc == 0x349584u) {
        ctx->pc = 0x349584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349580u;
        // 0x349584: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x349588u;
        goto label_349588;
    }
    ctx->pc = 0x349580u;
    {
        const bool branch_taken_0x349580 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x349584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349580u;
        // 0x349584: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349580) {
            ctx->pc = 0x349558u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_349558;
        }
    }
    ctx->pc = 0x349588u;
label_349588:
    // 0x349588: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x349588u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_34958c:
    // 0x34958c: 0xc103468  jal         func_40D1A0
label_349590:
    if (ctx->pc == 0x349590u) {
        ctx->pc = 0x349590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34958Cu;
        // 0x349590: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x349594u;
        goto label_349594;
    }
    ctx->pc = 0x34958Cu;
    SET_GPR_U32(ctx, 31, 0x349594u);
    ctx->pc = 0x349590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34958Cu;
    // 0x349590: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D1A0u, 0x34958Cu, 0x349594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349594u;
label_349594:
    // 0x349594: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x349594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_349598:
    // 0x349598: 0x18400011  blez        $v0, . + 4 + (0x11 << 2)
label_34959c:
    if (ctx->pc == 0x34959Cu) {
        ctx->pc = 0x34959Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349598u;
        // 0x34959c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3495A0u;
        goto label_3495a0;
    }
    ctx->pc = 0x349598u;
    {
        const bool branch_taken_0x349598 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x34959Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349598u;
        // 0x34959c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349598) {
            ctx->pc = 0x3495E0u;
            goto label_3495e0;
        }
    }
    ctx->pc = 0x3495A0u;
label_3495a0:
    // 0x3495a0: 0x1840000f  blez        $v0, . + 4 + (0xF << 2)
label_3495a4:
    if (ctx->pc == 0x3495A4u) {
        ctx->pc = 0x3495A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3495A0u;
        // 0x3495a4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3495A8u;
        goto label_3495a8;
    }
    ctx->pc = 0x3495A0u;
    {
        const bool branch_taken_0x3495a0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x3495A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3495A0u;
        // 0x3495a4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3495a0) {
            ctx->pc = 0x3495E0u;
            goto label_3495e0;
        }
    }
    ctx->pc = 0x3495A8u;
label_3495a8:
    // 0x3495a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3495a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3495ac:
    // 0x3495ac: 0x0  nop
    ctx->pc = 0x3495acu;
    // NOP
label_3495b0:
    // 0x3495b0: 0x24050025  addiu       $a1, $zero, 0x25
    ctx->pc = 0x3495b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_3495b4:
    // 0x3495b4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3495b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3495b8:
    // 0x3495b8: 0xc103322  jal         func_40CC88
label_3495bc:
    if (ctx->pc == 0x3495BCu) {
        ctx->pc = 0x3495BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3495B8u;
        // 0x3495bc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3495C0u;
        goto label_3495c0;
    }
    ctx->pc = 0x3495B8u;
    SET_GPR_U32(ctx, 31, 0x3495C0u);
    ctx->pc = 0x3495BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3495B8u;
    // 0x3495bc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40CC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40CC88u, 0x3495B8u, 0x3495C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3495C0u;
label_3495c0:
    // 0x3495c0: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_3495c4:
    if (ctx->pc == 0x3495C4u) {
        ctx->pc = 0x3495C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3495C0u;
        // 0x3495c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3495C8u;
        goto label_3495c8;
    }
    ctx->pc = 0x3495C0u;
    {
        const bool branch_taken_0x3495c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3495C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3495C0u;
        // 0x3495c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3495c0) {
            ctx->pc = 0x349620u;
            goto label_349620;
        }
    }
    ctx->pc = 0x3495C8u;
label_3495c8:
    // 0x3495c8: 0xc0d0d2a  jal         func_3434A8
label_3495cc:
    if (ctx->pc == 0x3495CCu) {
        ctx->pc = 0x3495CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3495C8u;
        // 0x3495cc: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3495D0u;
        goto label_3495d0;
    }
    ctx->pc = 0x3495C8u;
    SET_GPR_U32(ctx, 31, 0x3495D0u);
    ctx->pc = 0x3495CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3495C8u;
    // 0x3495cc: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3434A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3434A8u, 0x3495C8u, 0x3495D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3495D0u;
label_3495d0:
    // 0x3495d0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x3495d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_3495d4:
    // 0x3495d4: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x3495d4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_3495d8:
    // 0x3495d8: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
label_3495dc:
    if (ctx->pc == 0x3495DCu) {
        ctx->pc = 0x3495DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3495D8u;
        // 0x3495dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3495E0u;
        goto label_3495e0;
    }
    ctx->pc = 0x3495D8u;
    {
        const bool branch_taken_0x3495d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3495DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3495D8u;
        // 0x3495dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3495d8) {
            ctx->pc = 0x3495B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3495b0;
        }
    }
    ctx->pc = 0x3495E0u;
label_3495e0:
    // 0x3495e0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3495e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3495e4:
    // 0x3495e4: 0xc103468  jal         func_40D1A0
label_3495e8:
    if (ctx->pc == 0x3495E8u) {
        ctx->pc = 0x3495E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3495E4u;
        // 0x3495e8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3495ECu;
        goto label_3495ec;
    }
    ctx->pc = 0x3495E4u;
    SET_GPR_U32(ctx, 31, 0x3495ECu);
    ctx->pc = 0x3495E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3495E4u;
    // 0x3495e8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D1A0u, 0x3495E4u, 0x3495ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3495ECu;
label_3495ec:
    // 0x3495ec: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x3495ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_3495f0:
    // 0x3495f0: 0x58400014  blezl       $v0, . + 4 + (0x14 << 2)
label_3495f4:
    if (ctx->pc == 0x3495F4u) {
        ctx->pc = 0x3495F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3495F0u;
        // 0x3495f4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3495F8u;
        goto label_3495f8;
    }
    ctx->pc = 0x3495F0u;
    {
        const bool branch_taken_0x3495f0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3495f0) {
            ctx->pc = 0x3495F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3495F0u;
            // 0x3495f4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x349644u;
            goto label_349644;
        }
    }
    ctx->pc = 0x3495F8u;
label_3495f8:
    // 0x3495f8: 0x18400011  blez        $v0, . + 4 + (0x11 << 2)
label_3495fc:
    if (ctx->pc == 0x3495FCu) {
        ctx->pc = 0x3495FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3495F8u;
        // 0x3495fc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x349600u;
        goto label_349600;
    }
    ctx->pc = 0x3495F8u;
    {
        const bool branch_taken_0x3495f8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x3495FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3495F8u;
        // 0x3495fc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3495f8) {
            ctx->pc = 0x349640u;
            goto label_349640;
        }
    }
    ctx->pc = 0x349600u;
label_349600:
    // 0x349600: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x349600u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_349604:
    // 0x349604: 0x0  nop
    ctx->pc = 0x349604u;
    // NOP
label_349608:
    // 0x349608: 0x24050025  addiu       $a1, $zero, 0x25
    ctx->pc = 0x349608u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_34960c:
    // 0x34960c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x34960cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_349610:
    // 0x349610: 0xc103322  jal         func_40CC88
label_349614:
    if (ctx->pc == 0x349614u) {
        ctx->pc = 0x349614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349610u;
        // 0x349614: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x349618u;
        goto label_349618;
    }
    ctx->pc = 0x349610u;
    SET_GPR_U32(ctx, 31, 0x349618u);
    ctx->pc = 0x349614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349610u;
    // 0x349614: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40CC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40CC88u, 0x349610u, 0x349618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349618u;
label_349618:
    // 0x349618: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_34961c:
    if (ctx->pc == 0x34961Cu) {
        ctx->pc = 0x34961Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349618u;
        // 0x34961c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x349620u;
        goto label_349620;
    }
    ctx->pc = 0x349618u;
    {
        const bool branch_taken_0x349618 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x34961Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349618u;
        // 0x34961c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349618) {
            ctx->pc = 0x349628u;
            goto label_349628;
        }
    }
    ctx->pc = 0x349620u;
label_349620:
    // 0x349620: 0x10000008  b           . + 4 + (0x8 << 2)
label_349624:
    if (ctx->pc == 0x349624u) {
        ctx->pc = 0x349624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349620u;
        // 0x349624: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x349628u;
        goto label_349628;
    }
    ctx->pc = 0x349620u;
    {
        const bool branch_taken_0x349620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x349624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349620u;
        // 0x349624: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349620) {
            ctx->pc = 0x349644u;
            goto label_349644;
        }
    }
    ctx->pc = 0x349628u;
label_349628:
    // 0x349628: 0xc0d0340  jal         func_340D00
label_34962c:
    if (ctx->pc == 0x34962Cu) {
        ctx->pc = 0x34962Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349628u;
        // 0x34962c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x349630u;
        goto label_349630;
    }
    ctx->pc = 0x349628u;
    SET_GPR_U32(ctx, 31, 0x349630u);
    ctx->pc = 0x34962Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349628u;
    // 0x34962c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x340D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x340D00u, 0x349628u, 0x349630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349630u;
label_349630:
    // 0x349630: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x349630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_349634:
    // 0x349634: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x349634u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_349638:
    // 0x349638: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
label_34963c:
    if (ctx->pc == 0x34963Cu) {
        ctx->pc = 0x34963Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349638u;
        // 0x34963c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x349640u;
        goto label_349640;
    }
    ctx->pc = 0x349638u;
    {
        const bool branch_taken_0x349638 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x34963Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349638u;
        // 0x34963c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349638) {
            ctx->pc = 0x349608u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_349608;
        }
    }
    ctx->pc = 0x349640u;
label_349640:
    // 0x349640: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x349640u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_349644:
    // 0x349644: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x349644u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_349648:
    // 0x349648: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x349648u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_34964c:
    // 0x34964c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x34964cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_349650:
    // 0x349650: 0x3e00008  jr          $ra
label_349654:
    if (ctx->pc == 0x349654u) {
        ctx->pc = 0x349654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349650u;
        // 0x349654: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x349658u;
        goto label_349658;
    }
    ctx->pc = 0x349650u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x349654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349650u;
        // 0x349654: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x349650u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x349658u;
label_349658:
    // 0x349658: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x349658u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_34965c:
    // 0x34965c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x34965cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_349660:
    // 0x349660: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x349660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_349664:
    // 0x349664: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x349664u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_349668:
    // 0x349668: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x349668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_34966c:
    // 0x34966c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x34966cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_349670:
    // 0x349670: 0xc0d26fc  jal         func_349BF0
label_349674:
    if (ctx->pc == 0x349674u) {
        ctx->pc = 0x349674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349670u;
        // 0x349674: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x349678u;
        goto label_349678;
    }
    ctx->pc = 0x349670u;
    SET_GPR_U32(ctx, 31, 0x349678u);
    ctx->pc = 0x349674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349670u;
    // 0x349674: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x349BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349BF0u, 0x349670u, 0x349678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349678u;
label_349678:
    // 0x349678: 0x3c070003  lui         $a3, 0x3
    ctx->pc = 0x349678u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3 << 16));
label_34967c:
    // 0x34967c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x34967cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_349680:
    // 0x349680: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x349680u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_349684:
    // 0x349684: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x349684u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_349688:
    // 0x349688: 0x24050025  addiu       $a1, $zero, 0x25
    ctx->pc = 0x349688u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_34968c:
    // 0x34968c: 0x34e77002  ori         $a3, $a3, 0x7002
    ctx->pc = 0x34968cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)28674);
label_349690:
    // 0x349690: 0xc103404  jal         func_40D010
label_349694:
    if (ctx->pc == 0x349694u) {
        ctx->pc = 0x349694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349690u;
        // 0x349694: 0x2408002d  addiu       $t0, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        ctx->pc = 0x349698u;
        goto label_349698;
    }
    ctx->pc = 0x349690u;
    SET_GPR_U32(ctx, 31, 0x349698u);
    ctx->pc = 0x349694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349690u;
    // 0x349694: 0x2408002d  addiu       $t0, $zero, 0x2D (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D010u, 0x349690u, 0x349698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349698u;
label_349698:
    // 0x349698: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_34969c:
    if (ctx->pc == 0x34969Cu) {
        ctx->pc = 0x34969Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349698u;
        // 0x34969c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3496A0u;
        goto label_3496a0;
    }
    ctx->pc = 0x349698u;
    {
        const bool branch_taken_0x349698 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x34969Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349698u;
        // 0x34969c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349698) {
            ctx->pc = 0x3496A8u;
            goto label_3496a8;
        }
    }
    ctx->pc = 0x3496A0u;
label_3496a0:
    // 0x3496a0: 0x10000062  b           . + 4 + (0x62 << 2)
label_3496a4:
    if (ctx->pc == 0x3496A4u) {
        ctx->pc = 0x3496A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3496A0u;
        // 0x3496a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3496A8u;
        goto label_3496a8;
    }
    ctx->pc = 0x3496A0u;
    {
        const bool branch_taken_0x3496a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3496A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3496A0u;
        // 0x3496a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3496a0) {
            ctx->pc = 0x34982Cu;
            goto label_34982c;
        }
    }
    ctx->pc = 0x3496A8u;
label_3496a8:
    // 0x3496a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3496a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3496ac:
    // 0x3496ac: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x3496acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_3496b0:
    // 0x3496b0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3496b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3496b4:
    // 0x3496b4: 0xc103440  jal         func_40D100
label_3496b8:
    if (ctx->pc == 0x3496B8u) {
        ctx->pc = 0x3496B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3496B4u;
        // 0x3496b8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3496BCu;
        goto label_3496bc;
    }
    ctx->pc = 0x3496B4u;
    SET_GPR_U32(ctx, 31, 0x3496BCu);
    ctx->pc = 0x3496B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3496B4u;
    // 0x3496b8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D100u, 0x3496B4u, 0x3496BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3496BCu;
label_3496bc:
    // 0x3496bc: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x3496bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_3496c0:
    // 0x3496c0: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x3496c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3496c4:
    // 0x3496c4: 0x2463c2c8  addiu       $v1, $v1, -0x3D38
    ctx->pc = 0x3496c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951624));
label_3496c8:
    // 0x3496c8: 0x8c710068  lw          $s1, 0x68($v1)
    ctx->pc = 0x3496c8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 104)));
label_3496cc:
    // 0x3496cc: 0x12200015  beqz        $s1, . + 4 + (0x15 << 2)
label_3496d0:
    if (ctx->pc == 0x3496D0u) {
        ctx->pc = 0x3496D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3496CCu;
        // 0x3496d0: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3496D4u;
        goto label_3496d4;
    }
    ctx->pc = 0x3496CCu;
    {
        const bool branch_taken_0x3496cc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3496D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3496CCu;
        // 0x3496d0: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3496cc) {
            ctx->pc = 0x349724u;
            goto label_349724;
        }
    }
    ctx->pc = 0x3496D4u;
label_3496d4:
    // 0x3496d4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x3496d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_3496d8:
    // 0x3496d8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x3496d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_3496dc:
    // 0x3496dc: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x3496dcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3496e0:
    // 0x3496e0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3496e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3496e4:
    // 0x3496e4: 0x0  nop
    ctx->pc = 0x3496e4u;
    // NOP
label_3496e8:
    // 0x3496e8: 0x0  nop
    ctx->pc = 0x3496e8u;
    // NOP
label_3496ec:
    // 0x3496ec: 0x1611fffa  bne         $s0, $s1, . + 4 + (-0x6 << 2)
label_3496f0:
    if (ctx->pc == 0x3496F0u) {
        ctx->pc = 0x3496F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3496ECu;
        // 0x3496f0: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3496F4u;
        goto label_3496f4;
    }
    ctx->pc = 0x3496ECu;
    {
        const bool branch_taken_0x3496ec = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        ctx->pc = 0x3496F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3496ECu;
        // 0x3496f0: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3496ec) {
            ctx->pc = 0x3496D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3496d8;
        }
    }
    ctx->pc = 0x3496F4u;
label_3496f4:
    // 0x3496f4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3496f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3496f8:
    // 0x3496f8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3496f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3496fc:
    // 0x3496fc: 0xc103440  jal         func_40D100
label_349700:
    if (ctx->pc == 0x349700u) {
        ctx->pc = 0x349700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3496FCu;
        // 0x349700: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x349704u;
        goto label_349704;
    }
    ctx->pc = 0x3496FCu;
    SET_GPR_U32(ctx, 31, 0x349704u);
    ctx->pc = 0x349700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3496FCu;
    // 0x349700: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D100u, 0x3496FCu, 0x349704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349704u;
label_349704:
    // 0x349704: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x349704u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_349708:
    // 0x349708: 0xc0d1288  jal         func_344A20
label_34970c:
    if (ctx->pc == 0x34970Cu) {
        ctx->pc = 0x34970Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349708u;
        // 0x34970c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x349710u;
        goto label_349710;
    }
    ctx->pc = 0x349708u;
    SET_GPR_U32(ctx, 31, 0x349710u);
    ctx->pc = 0x34970Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349708u;
    // 0x34970c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344A20u, 0x349708u, 0x349710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349710u;
label_349710:
    // 0x349710: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x349710u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_349714:
    // 0x349714: 0x1611fffc  bne         $s0, $s1, . + 4 + (-0x4 << 2)
label_349718:
    if (ctx->pc == 0x349718u) {
        ctx->pc = 0x349718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349714u;
        // 0x349718: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34971Cu;
        goto label_34971c;
    }
    ctx->pc = 0x349714u;
    {
        const bool branch_taken_0x349714 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        ctx->pc = 0x349718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349714u;
        // 0x349718: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349714) {
            ctx->pc = 0x349708u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_349708;
        }
    }
    ctx->pc = 0x34971Cu;
label_34971c:
    // 0x34971c: 0x10000007  b           . + 4 + (0x7 << 2)
label_349720:
    if (ctx->pc == 0x349720u) {
        ctx->pc = 0x349720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34971Cu;
        // 0x349720: 0x2662c2c8  addiu       $v0, $s3, -0x3D38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294951624));
        ctx->in_delay_slot = false;
        ctx->pc = 0x349724u;
        goto label_349724;
    }
    ctx->pc = 0x34971Cu;
    {
        const bool branch_taken_0x34971c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x349720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34971Cu;
        // 0x349720: 0x2662c2c8  addiu       $v0, $s3, -0x3D38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294951624));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34971c) {
            ctx->pc = 0x34973Cu;
            goto label_34973c;
        }
    }
    ctx->pc = 0x349724u;
label_349724:
    // 0x349724: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x349724u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_349728:
    // 0x349728: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x349728u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_34972c:
    // 0x34972c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x34972cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_349730:
    // 0x349730: 0xc103440  jal         func_40D100
label_349734:
    if (ctx->pc == 0x349734u) {
        ctx->pc = 0x349734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349730u;
        // 0x349734: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x349738u;
        goto label_349738;
    }
    ctx->pc = 0x349730u;
    SET_GPR_U32(ctx, 31, 0x349738u);
    ctx->pc = 0x349734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349730u;
    // 0x349734: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D100u, 0x349730u, 0x349738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349738u;
label_349738:
    // 0x349738: 0x2662c2c8  addiu       $v0, $s3, -0x3D38
    ctx->pc = 0x349738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294951624));
label_34973c:
    // 0x34973c: 0x8c510064  lw          $s1, 0x64($v0)
    ctx->pc = 0x34973cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_349740:
    // 0x349740: 0x12200016  beqz        $s1, . + 4 + (0x16 << 2)
label_349744:
    if (ctx->pc == 0x349744u) {
        ctx->pc = 0x349744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349740u;
        // 0x349744: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x349748u;
        goto label_349748;
    }
    ctx->pc = 0x349740u;
    {
        const bool branch_taken_0x349740 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x349744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349740u;
        // 0x349744: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349740) {
            ctx->pc = 0x34979Cu;
            goto label_34979c;
        }
    }
    ctx->pc = 0x349748u;
label_349748:
    // 0x349748: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x349748u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_34974c:
    // 0x34974c: 0x0  nop
    ctx->pc = 0x34974cu;
    // NOP
label_349750:
    // 0x349750: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x349750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_349754:
    // 0x349754: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x349754u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_349758:
    // 0x349758: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x349758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_34975c:
    // 0x34975c: 0x0  nop
    ctx->pc = 0x34975cu;
    // NOP
label_349760:
    // 0x349760: 0x0  nop
    ctx->pc = 0x349760u;
    // NOP
label_349764:
    // 0x349764: 0x1611fffa  bne         $s0, $s1, . + 4 + (-0x6 << 2)
label_349768:
    if (ctx->pc == 0x349768u) {
        ctx->pc = 0x349768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349764u;
        // 0x349768: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34976Cu;
        goto label_34976c;
    }
    ctx->pc = 0x349764u;
    {
        const bool branch_taken_0x349764 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        ctx->pc = 0x349768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349764u;
        // 0x349768: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349764) {
            ctx->pc = 0x349750u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_349750;
        }
    }
    ctx->pc = 0x34976Cu;
label_34976c:
    // 0x34976c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x34976cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_349770:
    // 0x349770: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x349770u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_349774:
    // 0x349774: 0xc103440  jal         func_40D100
label_349778:
    if (ctx->pc == 0x349778u) {
        ctx->pc = 0x349778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349774u;
        // 0x349778: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34977Cu;
        goto label_34977c;
    }
    ctx->pc = 0x349774u;
    SET_GPR_U32(ctx, 31, 0x34977Cu);
    ctx->pc = 0x349778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349774u;
    // 0x349778: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D100u, 0x349774u, 0x34977Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34977Cu;
label_34977c:
    // 0x34977c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x34977cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_349780:
    // 0x349780: 0xc0d0e78  jal         func_3439E0
label_349784:
    if (ctx->pc == 0x349784u) {
        ctx->pc = 0x349784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349780u;
        // 0x349784: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x349788u;
        goto label_349788;
    }
    ctx->pc = 0x349780u;
    SET_GPR_U32(ctx, 31, 0x349788u);
    ctx->pc = 0x349784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349780u;
    // 0x349784: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3439E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3439E0u, 0x349780u, 0x349788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349788u;
label_349788:
    // 0x349788: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x349788u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_34978c:
    // 0x34978c: 0x1611fffc  bne         $s0, $s1, . + 4 + (-0x4 << 2)
label_349790:
    if (ctx->pc == 0x349790u) {
        ctx->pc = 0x349790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34978Cu;
        // 0x349790: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x349794u;
        goto label_349794;
    }
    ctx->pc = 0x34978Cu;
    {
        const bool branch_taken_0x34978c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        ctx->pc = 0x349790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34978Cu;
        // 0x349790: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34978c) {
            ctx->pc = 0x349780u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_349780;
        }
    }
    ctx->pc = 0x349794u;
label_349794:
    // 0x349794: 0x10000007  b           . + 4 + (0x7 << 2)
label_349798:
    if (ctx->pc == 0x349798u) {
        ctx->pc = 0x349798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349794u;
        // 0x349798: 0x2662c2c8  addiu       $v0, $s3, -0x3D38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294951624));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34979Cu;
        goto label_34979c;
    }
    ctx->pc = 0x349794u;
    {
        const bool branch_taken_0x349794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x349798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349794u;
        // 0x349798: 0x2662c2c8  addiu       $v0, $s3, -0x3D38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294951624));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349794) {
            ctx->pc = 0x3497B4u;
            goto label_3497b4;
        }
    }
    ctx->pc = 0x34979Cu;
label_34979c:
    // 0x34979c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x34979cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_3497a0:
    // 0x3497a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3497a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3497a4:
    // 0x3497a4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3497a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3497a8:
    // 0x3497a8: 0xc103440  jal         func_40D100
label_3497ac:
    if (ctx->pc == 0x3497ACu) {
        ctx->pc = 0x3497ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3497A8u;
        // 0x3497ac: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3497B0u;
        goto label_3497b0;
    }
    ctx->pc = 0x3497A8u;
    SET_GPR_U32(ctx, 31, 0x3497B0u);
    ctx->pc = 0x3497ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3497A8u;
    // 0x3497ac: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D100u, 0x3497A8u, 0x3497B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3497B0u;
label_3497b0:
    // 0x3497b0: 0x2662c2c8  addiu       $v0, $s3, -0x3D38
    ctx->pc = 0x3497b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294951624));
label_3497b4:
    // 0x3497b4: 0x8c510060  lw          $s1, 0x60($v0)
    ctx->pc = 0x3497b4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_3497b8:
    // 0x3497b8: 0x12200016  beqz        $s1, . + 4 + (0x16 << 2)
label_3497bc:
    if (ctx->pc == 0x3497BCu) {
        ctx->pc = 0x3497BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3497B8u;
        // 0x3497bc: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3497C0u;
        goto label_3497c0;
    }
    ctx->pc = 0x3497B8u;
    {
        const bool branch_taken_0x3497b8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3497BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3497B8u;
        // 0x3497bc: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3497b8) {
            ctx->pc = 0x349814u;
            goto label_349814;
        }
    }
    ctx->pc = 0x3497C0u;
label_3497c0:
    // 0x3497c0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x3497c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_3497c4:
    // 0x3497c4: 0x0  nop
    ctx->pc = 0x3497c4u;
    // NOP
label_3497c8:
    // 0x3497c8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x3497c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_3497cc:
    // 0x3497cc: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x3497ccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3497d0:
    // 0x3497d0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3497d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3497d4:
    // 0x3497d4: 0x0  nop
    ctx->pc = 0x3497d4u;
    // NOP
label_3497d8:
    // 0x3497d8: 0x0  nop
    ctx->pc = 0x3497d8u;
    // NOP
label_3497dc:
    // 0x3497dc: 0x1611fffa  bne         $s0, $s1, . + 4 + (-0x6 << 2)
label_3497e0:
    if (ctx->pc == 0x3497E0u) {
        ctx->pc = 0x3497E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3497DCu;
        // 0x3497e0: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3497E4u;
        goto label_3497e4;
    }
    ctx->pc = 0x3497DCu;
    {
        const bool branch_taken_0x3497dc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        ctx->pc = 0x3497E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3497DCu;
        // 0x3497e0: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3497dc) {
            ctx->pc = 0x3497C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3497c8;
        }
    }
    ctx->pc = 0x3497E4u;
label_3497e4:
    // 0x3497e4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3497e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3497e8:
    // 0x3497e8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3497e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3497ec:
    // 0x3497ec: 0xc103440  jal         func_40D100
label_3497f0:
    if (ctx->pc == 0x3497F0u) {
        ctx->pc = 0x3497F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3497ECu;
        // 0x3497f0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3497F4u;
        goto label_3497f4;
    }
    ctx->pc = 0x3497ECu;
    SET_GPR_U32(ctx, 31, 0x3497F4u);
    ctx->pc = 0x3497F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3497ECu;
    // 0x3497f0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D100u, 0x3497ECu, 0x3497F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3497F4u;
label_3497f4:
    // 0x3497f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3497f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3497f8:
    // 0x3497f8: 0xc0d04dc  jal         func_341370
label_3497fc:
    if (ctx->pc == 0x3497FCu) {
        ctx->pc = 0x3497FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3497F8u;
        // 0x3497fc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x349800u;
        goto label_349800;
    }
    ctx->pc = 0x3497F8u;
    SET_GPR_U32(ctx, 31, 0x349800u);
    ctx->pc = 0x3497FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3497F8u;
    // 0x3497fc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341370u, 0x3497F8u, 0x349800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349800u;
label_349800:
    // 0x349800: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x349800u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_349804:
    // 0x349804: 0x1611fffc  bne         $s0, $s1, . + 4 + (-0x4 << 2)
label_349808:
    if (ctx->pc == 0x349808u) {
        ctx->pc = 0x349808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349804u;
        // 0x349808: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34980Cu;
        goto label_34980c;
    }
    ctx->pc = 0x349804u;
    {
        const bool branch_taken_0x349804 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        ctx->pc = 0x349808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349804u;
        // 0x349808: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349804) {
            ctx->pc = 0x3497F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3497f8;
        }
    }
    ctx->pc = 0x34980Cu;
label_34980c:
    // 0x34980c: 0x10000007  b           . + 4 + (0x7 << 2)
label_349810:
    if (ctx->pc == 0x349810u) {
        ctx->pc = 0x349810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34980Cu;
        // 0x349810: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x349814u;
        goto label_349814;
    }
    ctx->pc = 0x34980Cu;
    {
        const bool branch_taken_0x34980c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x349810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34980Cu;
        // 0x349810: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34980c) {
            ctx->pc = 0x34982Cu;
            goto label_34982c;
        }
    }
    ctx->pc = 0x349814u;
label_349814:
    // 0x349814: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x349814u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_349818:
    // 0x349818: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x349818u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_34981c:
    // 0x34981c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x34981cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_349820:
    // 0x349820: 0xc103440  jal         func_40D100
label_349824:
    if (ctx->pc == 0x349824u) {
        ctx->pc = 0x349824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349820u;
        // 0x349824: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x349828u;
        goto label_349828;
    }
    ctx->pc = 0x349820u;
    SET_GPR_U32(ctx, 31, 0x349828u);
    ctx->pc = 0x349824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349820u;
    // 0x349824: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D100u, 0x349820u, 0x349828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349828u;
label_349828:
    // 0x349828: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x349828u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_34982c:
    // 0x34982c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x34982cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_349830:
    // 0x349830: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x349830u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_349834:
    // 0x349834: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x349834u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_349838:
    // 0x349838: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x349838u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_34983c:
    // 0x34983c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x34983cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_349840:
    // 0x349840: 0x3e00008  jr          $ra
label_349844:
    if (ctx->pc == 0x349844u) {
        ctx->pc = 0x349844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349840u;
        // 0x349844: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x349848u;
        goto label_fallthrough_0x349840;
    }
    ctx->pc = 0x349840u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x349844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349840u;
        // 0x349844: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x349840u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x349840:
    ctx->pc = 0x349848u;
}
