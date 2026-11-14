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

// Function: sub_00240220
// Address: 0x240220 - 0x240720
void sub_00240220_0x240220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00240220_0x240220");
#endif

    switch (ctx->pc) {
        case 0x240220u: goto label_240220;
        case 0x240224u: goto label_240224;
        case 0x240228u: goto label_240228;
        case 0x24022cu: goto label_24022c;
        case 0x240230u: goto label_240230;
        case 0x240234u: goto label_240234;
        case 0x240238u: goto label_240238;
        case 0x24023cu: goto label_24023c;
        case 0x240240u: goto label_240240;
        case 0x240244u: goto label_240244;
        case 0x240248u: goto label_240248;
        case 0x24024cu: goto label_24024c;
        case 0x240250u: goto label_240250;
        case 0x240254u: goto label_240254;
        case 0x240258u: goto label_240258;
        case 0x24025cu: goto label_24025c;
        case 0x240260u: goto label_240260;
        case 0x240264u: goto label_240264;
        case 0x240268u: goto label_240268;
        case 0x24026cu: goto label_24026c;
        case 0x240270u: goto label_240270;
        case 0x240274u: goto label_240274;
        case 0x240278u: goto label_240278;
        case 0x24027cu: goto label_24027c;
        case 0x240280u: goto label_240280;
        case 0x240284u: goto label_240284;
        case 0x240288u: goto label_240288;
        case 0x24028cu: goto label_24028c;
        case 0x240290u: goto label_240290;
        case 0x240294u: goto label_240294;
        case 0x240298u: goto label_240298;
        case 0x24029cu: goto label_24029c;
        case 0x2402a0u: goto label_2402a0;
        case 0x2402a4u: goto label_2402a4;
        case 0x2402a8u: goto label_2402a8;
        case 0x2402acu: goto label_2402ac;
        case 0x2402b0u: goto label_2402b0;
        case 0x2402b4u: goto label_2402b4;
        case 0x2402b8u: goto label_2402b8;
        case 0x2402bcu: goto label_2402bc;
        case 0x2402c0u: goto label_2402c0;
        case 0x2402c4u: goto label_2402c4;
        case 0x2402c8u: goto label_2402c8;
        case 0x2402ccu: goto label_2402cc;
        case 0x2402d0u: goto label_2402d0;
        case 0x2402d4u: goto label_2402d4;
        case 0x2402d8u: goto label_2402d8;
        case 0x2402dcu: goto label_2402dc;
        case 0x2402e0u: goto label_2402e0;
        case 0x2402e4u: goto label_2402e4;
        case 0x2402e8u: goto label_2402e8;
        case 0x2402ecu: goto label_2402ec;
        case 0x2402f0u: goto label_2402f0;
        case 0x2402f4u: goto label_2402f4;
        case 0x2402f8u: goto label_2402f8;
        case 0x2402fcu: goto label_2402fc;
        case 0x240300u: goto label_240300;
        case 0x240304u: goto label_240304;
        case 0x240308u: goto label_240308;
        case 0x24030cu: goto label_24030c;
        case 0x240310u: goto label_240310;
        case 0x240314u: goto label_240314;
        case 0x240318u: goto label_240318;
        case 0x24031cu: goto label_24031c;
        case 0x240320u: goto label_240320;
        case 0x240324u: goto label_240324;
        case 0x240328u: goto label_240328;
        case 0x24032cu: goto label_24032c;
        case 0x240330u: goto label_240330;
        case 0x240334u: goto label_240334;
        case 0x240338u: goto label_240338;
        case 0x24033cu: goto label_24033c;
        case 0x240340u: goto label_240340;
        case 0x240344u: goto label_240344;
        case 0x240348u: goto label_240348;
        case 0x24034cu: goto label_24034c;
        case 0x240350u: goto label_240350;
        case 0x240354u: goto label_240354;
        case 0x240358u: goto label_240358;
        case 0x24035cu: goto label_24035c;
        case 0x240360u: goto label_240360;
        case 0x240364u: goto label_240364;
        case 0x240368u: goto label_240368;
        case 0x24036cu: goto label_24036c;
        case 0x240370u: goto label_240370;
        case 0x240374u: goto label_240374;
        case 0x240378u: goto label_240378;
        case 0x24037cu: goto label_24037c;
        case 0x240380u: goto label_240380;
        case 0x240384u: goto label_240384;
        case 0x240388u: goto label_240388;
        case 0x24038cu: goto label_24038c;
        case 0x240390u: goto label_240390;
        case 0x240394u: goto label_240394;
        case 0x240398u: goto label_240398;
        case 0x24039cu: goto label_24039c;
        case 0x2403a0u: goto label_2403a0;
        case 0x2403a4u: goto label_2403a4;
        case 0x2403a8u: goto label_2403a8;
        case 0x2403acu: goto label_2403ac;
        case 0x2403b0u: goto label_2403b0;
        case 0x2403b4u: goto label_2403b4;
        case 0x2403b8u: goto label_2403b8;
        case 0x2403bcu: goto label_2403bc;
        case 0x2403c0u: goto label_2403c0;
        case 0x2403c4u: goto label_2403c4;
        case 0x2403c8u: goto label_2403c8;
        case 0x2403ccu: goto label_2403cc;
        case 0x2403d0u: goto label_2403d0;
        case 0x2403d4u: goto label_2403d4;
        case 0x2403d8u: goto label_2403d8;
        case 0x2403dcu: goto label_2403dc;
        case 0x2403e0u: goto label_2403e0;
        case 0x2403e4u: goto label_2403e4;
        case 0x2403e8u: goto label_2403e8;
        case 0x2403ecu: goto label_2403ec;
        case 0x2403f0u: goto label_2403f0;
        case 0x2403f4u: goto label_2403f4;
        case 0x2403f8u: goto label_2403f8;
        case 0x2403fcu: goto label_2403fc;
        case 0x240400u: goto label_240400;
        case 0x240404u: goto label_240404;
        case 0x240408u: goto label_240408;
        case 0x24040cu: goto label_24040c;
        case 0x240410u: goto label_240410;
        case 0x240414u: goto label_240414;
        case 0x240418u: goto label_240418;
        case 0x24041cu: goto label_24041c;
        case 0x240420u: goto label_240420;
        case 0x240424u: goto label_240424;
        case 0x240428u: goto label_240428;
        case 0x24042cu: goto label_24042c;
        case 0x240430u: goto label_240430;
        case 0x240434u: goto label_240434;
        case 0x240438u: goto label_240438;
        case 0x24043cu: goto label_24043c;
        case 0x240440u: goto label_240440;
        case 0x240444u: goto label_240444;
        case 0x240448u: goto label_240448;
        case 0x24044cu: goto label_24044c;
        case 0x240450u: goto label_240450;
        case 0x240454u: goto label_240454;
        case 0x240458u: goto label_240458;
        case 0x24045cu: goto label_24045c;
        case 0x240460u: goto label_240460;
        case 0x240464u: goto label_240464;
        case 0x240468u: goto label_240468;
        case 0x24046cu: goto label_24046c;
        case 0x240470u: goto label_240470;
        case 0x240474u: goto label_240474;
        case 0x240478u: goto label_240478;
        case 0x24047cu: goto label_24047c;
        case 0x240480u: goto label_240480;
        case 0x240484u: goto label_240484;
        case 0x240488u: goto label_240488;
        case 0x24048cu: goto label_24048c;
        case 0x240490u: goto label_240490;
        case 0x240494u: goto label_240494;
        case 0x240498u: goto label_240498;
        case 0x24049cu: goto label_24049c;
        case 0x2404a0u: goto label_2404a0;
        case 0x2404a4u: goto label_2404a4;
        case 0x2404a8u: goto label_2404a8;
        case 0x2404acu: goto label_2404ac;
        case 0x2404b0u: goto label_2404b0;
        case 0x2404b4u: goto label_2404b4;
        case 0x2404b8u: goto label_2404b8;
        case 0x2404bcu: goto label_2404bc;
        case 0x2404c0u: goto label_2404c0;
        case 0x2404c4u: goto label_2404c4;
        case 0x2404c8u: goto label_2404c8;
        case 0x2404ccu: goto label_2404cc;
        case 0x2404d0u: goto label_2404d0;
        case 0x2404d4u: goto label_2404d4;
        case 0x2404d8u: goto label_2404d8;
        case 0x2404dcu: goto label_2404dc;
        case 0x2404e0u: goto label_2404e0;
        case 0x2404e4u: goto label_2404e4;
        case 0x2404e8u: goto label_2404e8;
        case 0x2404ecu: goto label_2404ec;
        case 0x2404f0u: goto label_2404f0;
        case 0x2404f4u: goto label_2404f4;
        case 0x2404f8u: goto label_2404f8;
        case 0x2404fcu: goto label_2404fc;
        case 0x240500u: goto label_240500;
        case 0x240504u: goto label_240504;
        case 0x240508u: goto label_240508;
        case 0x24050cu: goto label_24050c;
        case 0x240510u: goto label_240510;
        case 0x240514u: goto label_240514;
        case 0x240518u: goto label_240518;
        case 0x24051cu: goto label_24051c;
        case 0x240520u: goto label_240520;
        case 0x240524u: goto label_240524;
        case 0x240528u: goto label_240528;
        case 0x24052cu: goto label_24052c;
        case 0x240530u: goto label_240530;
        case 0x240534u: goto label_240534;
        case 0x240538u: goto label_240538;
        case 0x24053cu: goto label_24053c;
        case 0x240540u: goto label_240540;
        case 0x240544u: goto label_240544;
        case 0x240548u: goto label_240548;
        case 0x24054cu: goto label_24054c;
        case 0x240550u: goto label_240550;
        case 0x240554u: goto label_240554;
        case 0x240558u: goto label_240558;
        case 0x24055cu: goto label_24055c;
        case 0x240560u: goto label_240560;
        case 0x240564u: goto label_240564;
        case 0x240568u: goto label_240568;
        case 0x24056cu: goto label_24056c;
        case 0x240570u: goto label_240570;
        case 0x240574u: goto label_240574;
        case 0x240578u: goto label_240578;
        case 0x24057cu: goto label_24057c;
        case 0x240580u: goto label_240580;
        case 0x240584u: goto label_240584;
        case 0x240588u: goto label_240588;
        case 0x24058cu: goto label_24058c;
        case 0x240590u: goto label_240590;
        case 0x240594u: goto label_240594;
        case 0x240598u: goto label_240598;
        case 0x24059cu: goto label_24059c;
        case 0x2405a0u: goto label_2405a0;
        case 0x2405a4u: goto label_2405a4;
        case 0x2405a8u: goto label_2405a8;
        case 0x2405acu: goto label_2405ac;
        case 0x2405b0u: goto label_2405b0;
        case 0x2405b4u: goto label_2405b4;
        case 0x2405b8u: goto label_2405b8;
        case 0x2405bcu: goto label_2405bc;
        case 0x2405c0u: goto label_2405c0;
        case 0x2405c4u: goto label_2405c4;
        case 0x2405c8u: goto label_2405c8;
        case 0x2405ccu: goto label_2405cc;
        case 0x2405d0u: goto label_2405d0;
        case 0x2405d4u: goto label_2405d4;
        case 0x2405d8u: goto label_2405d8;
        case 0x2405dcu: goto label_2405dc;
        case 0x2405e0u: goto label_2405e0;
        case 0x2405e4u: goto label_2405e4;
        case 0x2405e8u: goto label_2405e8;
        case 0x2405ecu: goto label_2405ec;
        case 0x2405f0u: goto label_2405f0;
        case 0x2405f4u: goto label_2405f4;
        case 0x2405f8u: goto label_2405f8;
        case 0x2405fcu: goto label_2405fc;
        case 0x240600u: goto label_240600;
        case 0x240604u: goto label_240604;
        case 0x240608u: goto label_240608;
        case 0x24060cu: goto label_24060c;
        case 0x240610u: goto label_240610;
        case 0x240614u: goto label_240614;
        case 0x240618u: goto label_240618;
        case 0x24061cu: goto label_24061c;
        case 0x240620u: goto label_240620;
        case 0x240624u: goto label_240624;
        case 0x240628u: goto label_240628;
        case 0x24062cu: goto label_24062c;
        case 0x240630u: goto label_240630;
        case 0x240634u: goto label_240634;
        case 0x240638u: goto label_240638;
        case 0x24063cu: goto label_24063c;
        case 0x240640u: goto label_240640;
        case 0x240644u: goto label_240644;
        case 0x240648u: goto label_240648;
        case 0x24064cu: goto label_24064c;
        case 0x240650u: goto label_240650;
        case 0x240654u: goto label_240654;
        case 0x240658u: goto label_240658;
        case 0x24065cu: goto label_24065c;
        case 0x240660u: goto label_240660;
        case 0x240664u: goto label_240664;
        case 0x240668u: goto label_240668;
        case 0x24066cu: goto label_24066c;
        case 0x240670u: goto label_240670;
        case 0x240674u: goto label_240674;
        case 0x240678u: goto label_240678;
        case 0x24067cu: goto label_24067c;
        case 0x240680u: goto label_240680;
        case 0x240684u: goto label_240684;
        case 0x240688u: goto label_240688;
        case 0x24068cu: goto label_24068c;
        case 0x240690u: goto label_240690;
        case 0x240694u: goto label_240694;
        case 0x240698u: goto label_240698;
        case 0x24069cu: goto label_24069c;
        case 0x2406a0u: goto label_2406a0;
        case 0x2406a4u: goto label_2406a4;
        case 0x2406a8u: goto label_2406a8;
        case 0x2406acu: goto label_2406ac;
        case 0x2406b0u: goto label_2406b0;
        case 0x2406b4u: goto label_2406b4;
        case 0x2406b8u: goto label_2406b8;
        case 0x2406bcu: goto label_2406bc;
        case 0x2406c0u: goto label_2406c0;
        case 0x2406c4u: goto label_2406c4;
        case 0x2406c8u: goto label_2406c8;
        case 0x2406ccu: goto label_2406cc;
        case 0x2406d0u: goto label_2406d0;
        case 0x2406d4u: goto label_2406d4;
        case 0x2406d8u: goto label_2406d8;
        case 0x2406dcu: goto label_2406dc;
        case 0x2406e0u: goto label_2406e0;
        case 0x2406e4u: goto label_2406e4;
        case 0x2406e8u: goto label_2406e8;
        case 0x2406ecu: goto label_2406ec;
        case 0x2406f0u: goto label_2406f0;
        case 0x2406f4u: goto label_2406f4;
        case 0x2406f8u: goto label_2406f8;
        case 0x2406fcu: goto label_2406fc;
        case 0x240700u: goto label_240700;
        case 0x240704u: goto label_240704;
        case 0x240708u: goto label_240708;
        case 0x24070cu: goto label_24070c;
        case 0x240710u: goto label_240710;
        case 0x240714u: goto label_240714;
        case 0x240718u: goto label_240718;
        case 0x24071cu: goto label_24071c;
        default: break;
    }

    ctx->pc = 0x240220u;

label_240220:
    // 0x240220: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x240220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_240224:
    // 0x240224: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x240224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_240228:
    // 0x240228: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x240228u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_24022c:
    // 0x24022c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x24022cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_240230:
    // 0x240230: 0xc084f04  jal         func_213C10
label_240234:
    if (ctx->pc == 0x240234u) {
        ctx->pc = 0x240238u;
        goto label_240238;
    }
    ctx->pc = 0x240230u;
    SET_GPR_U32(ctx, 31, 0x240238u);
    ctx->pc = 0x213C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x213C10u, 0x240230u, 0x240238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240238u;
label_240238:
    // 0x240238: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x240238u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_24023c:
    // 0x24023c: 0x246356a0  addiu       $v1, $v1, 0x56A0
    ctx->pc = 0x24023cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22176));
label_240240:
    // 0x240240: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x240240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_240244:
    // 0x240244: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x240244u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_240248:
    // 0x240248: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x240248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_24024c:
    // 0x24024c: 0xac40111c  sw          $zero, 0x111C($v0)
    ctx->pc = 0x24024cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4380), GPR_U32(ctx, 0));
label_240250:
    // 0x240250: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x240250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_240254:
    // 0x240254: 0xac401120  sw          $zero, 0x1120($v0)
    ctx->pc = 0x240254u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4384), GPR_U32(ctx, 0));
label_240258:
    // 0x240258: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x240258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_24025c:
    // 0x24025c: 0xac401124  sw          $zero, 0x1124($v0)
    ctx->pc = 0x24025cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4388), GPR_U32(ctx, 0));
label_240260:
    // 0x240260: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x240260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_240264:
    // 0x240264: 0x24441128  addiu       $a0, $v0, 0x1128
    ctx->pc = 0x240264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4392));
label_240268:
    // 0x240268: 0xc0908fc  jal         func_2423F0
label_24026c:
    if (ctx->pc == 0x24026Cu) {
        ctx->pc = 0x240270u;
        goto label_240270;
    }
    ctx->pc = 0x240268u;
    SET_GPR_U32(ctx, 31, 0x240270u);
    ctx->pc = 0x2423F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2423F0u, 0x240268u, 0x240270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240270u;
label_240270:
    // 0x240270: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x240270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_240274:
    // 0x240274: 0xac401144  sw          $zero, 0x1144($v0)
    ctx->pc = 0x240274u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4420), GPR_U32(ctx, 0));
label_240278:
    // 0x240278: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x240278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_24027c:
    // 0x24027c: 0xaf82bbf4  sw          $v0, -0x440C($gp)
    ctx->pc = 0x24027cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949876), GPR_U32(ctx, 2));
label_240280:
    // 0x240280: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x240280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_240284:
    // 0x240284: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x240284u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_240288:
    // 0x240288: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x240288u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_24028c:
    // 0x24028c: 0x3e00008  jr          $ra
label_240290:
    if (ctx->pc == 0x240290u) {
        ctx->pc = 0x240294u;
        goto label_240294;
    }
    ctx->pc = 0x24028Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24028Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x240294u;
label_240294:
    // 0x240294: 0x0  nop
    ctx->pc = 0x240294u;
    // NOP
label_240298:
    // 0x240298: 0x0  nop
    ctx->pc = 0x240298u;
    // NOP
label_24029c:
    // 0x24029c: 0x0  nop
    ctx->pc = 0x24029cu;
    // NOP
label_2402a0:
    // 0x2402a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2402a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2402a4:
    // 0x2402a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2402a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2402a8:
    // 0x2402a8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2402a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_2402ac:
    // 0x2402ac: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x2402acu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
label_2402b0:
    // 0x2402b0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2402b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2402b4:
    // 0x2402b4: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_2402b8:
    if (ctx->pc == 0x2402B8u) {
        ctx->pc = 0x2402BCu;
        goto label_2402bc;
    }
    ctx->pc = 0x2402B4u;
    {
        const bool branch_taken_0x2402b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2402b4) {
            ctx->pc = 0x240314u;
            goto label_240314;
        }
    }
    ctx->pc = 0x2402BCu;
label_2402bc:
    // 0x2402bc: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2402bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_2402c0:
    // 0x2402c0: 0x246356a0  addiu       $v1, $v1, 0x56A0
    ctx->pc = 0x2402c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22176));
label_2402c4:
    // 0x2402c4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2402c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2402c8:
    // 0x2402c8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2402c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_2402cc:
    // 0x2402cc: 0xaf80bbf4  sw          $zero, -0x440C($gp)
    ctx->pc = 0x2402ccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949876), GPR_U32(ctx, 0));
label_2402d0:
    // 0x2402d0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2402d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2402d4:
    // 0x2402d4: 0x24441128  addiu       $a0, $v0, 0x1128
    ctx->pc = 0x2402d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4392));
label_2402d8:
    // 0x2402d8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2402d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2402dc:
    // 0x2402dc: 0xc064784  jal         func_191E10
label_2402e0:
    if (ctx->pc == 0x2402E0u) {
        ctx->pc = 0x2402E4u;
        goto label_2402e4;
    }
    ctx->pc = 0x2402DCu;
    SET_GPR_U32(ctx, 31, 0x2402E4u);
    ctx->pc = 0x191E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E10u, 0x2402DCu, 0x2402E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2402E4u;
label_2402e4:
    // 0x2402e4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2402e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2402e8:
    // 0x2402e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2402e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2402ec:
    // 0x2402ec: 0xc084ffc  jal         func_213FF0
label_2402f0:
    if (ctx->pc == 0x2402F0u) {
        ctx->pc = 0x2402F4u;
        goto label_2402f4;
    }
    ctx->pc = 0x2402ECu;
    SET_GPR_U32(ctx, 31, 0x2402F4u);
    ctx->pc = 0x213FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x213FF0u, 0x2402ECu, 0x2402F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2402F4u;
label_2402f4:
    // 0x2402f4: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x2402f4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
label_2402f8:
    // 0x2402f8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2402f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_2402fc:
    // 0x2402fc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2402fcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_240300:
    // 0x240300: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
label_240304:
    if (ctx->pc == 0x240304u) {
        ctx->pc = 0x240308u;
        goto label_240308;
    }
    ctx->pc = 0x240300u;
    {
        const bool branch_taken_0x240300 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x240300) {
            ctx->pc = 0x240314u;
            goto label_240314;
        }
    }
    ctx->pc = 0x240308u;
label_240308:
    // 0x240308: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x240308u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_24030c:
    // 0x24030c: 0xc0ba070  jal         func_2E81C0
label_240310:
    if (ctx->pc == 0x240310u) {
        ctx->pc = 0x240314u;
        goto label_240314;
    }
    ctx->pc = 0x24030Cu;
    SET_GPR_U32(ctx, 31, 0x240314u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x24030Cu, 0x240314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240314u;
label_240314:
    // 0x240314: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x240314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_240318:
    // 0x240318: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x240318u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_24031c:
    // 0x24031c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x24031cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_240320:
    // 0x240320: 0x3e00008  jr          $ra
label_240324:
    if (ctx->pc == 0x240324u) {
        ctx->pc = 0x240328u;
        goto label_240328;
    }
    ctx->pc = 0x240320u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x240320u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x240328u;
label_240328:
    // 0x240328: 0x0  nop
    ctx->pc = 0x240328u;
    // NOP
label_24032c:
    // 0x24032c: 0x0  nop
    ctx->pc = 0x24032cu;
    // NOP
label_240330:
    // 0x240330: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x240330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_240334:
    // 0x240334: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x240334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_240338:
    // 0x240338: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x240338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_24033c:
    // 0x24033c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x24033cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_240340:
    // 0x240340: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x240340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_240344:
    // 0x240344: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x240344u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_240348:
    // 0x240348: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x240348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_24034c:
    // 0x24034c: 0xafa40060  sw          $a0, 0x60($sp)
    ctx->pc = 0x24034cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
label_240350:
    // 0x240350: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x240350u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_240354:
    // 0x240354: 0xc085020  jal         func_214080
label_240358:
    if (ctx->pc == 0x240358u) {
        ctx->pc = 0x24035Cu;
        goto label_24035c;
    }
    ctx->pc = 0x240354u;
    SET_GPR_U32(ctx, 31, 0x24035Cu);
    ctx->pc = 0x214080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214080u, 0x240354u, 0x24035Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24035Cu;
label_24035c:
    // 0x24035c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x24035cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_240360:
    // 0x240360: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x240360u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_240364:
    // 0x240364: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x240364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_240368:
    // 0x240368: 0x1462006e  bne         $v1, $v0, . + 4 + (0x6E << 2)
label_24036c:
    if (ctx->pc == 0x24036Cu) {
        ctx->pc = 0x240370u;
        goto label_240370;
    }
    ctx->pc = 0x240368u;
    {
        const bool branch_taken_0x240368 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x240368) {
            ctx->pc = 0x240524u;
            goto label_240524;
        }
    }
    ctx->pc = 0x240370u;
label_240370:
    // 0x240370: 0x240400c4  addiu       $a0, $zero, 0xC4
    ctx->pc = 0x240370u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 196));
label_240374:
    // 0x240374: 0xc119b68  jal         func_466DA0
label_240378:
    if (ctx->pc == 0x240378u) {
        ctx->pc = 0x24037Cu;
        goto label_24037c;
    }
    ctx->pc = 0x240374u;
    SET_GPR_U32(ctx, 31, 0x24037Cu);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x240374u, 0x24037Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24037Cu;
label_24037c:
    // 0x24037c: 0x240400c4  addiu       $a0, $zero, 0xC4
    ctx->pc = 0x24037cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 196));
label_240380:
    // 0x240380: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x240380u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_240384:
    // 0x240384: 0xc0400e0  jal         func_100380
label_240388:
    if (ctx->pc == 0x240388u) {
        ctx->pc = 0x24038Cu;
        goto label_24038c;
    }
    ctx->pc = 0x240384u;
    SET_GPR_U32(ctx, 31, 0x24038Cu);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x240384u, 0x24038Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24038Cu;
label_24038c:
    // 0x24038c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x24038cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_240390:
    // 0x240390: 0x12800005  beqz        $s4, . + 4 + (0x5 << 2)
label_240394:
    if (ctx->pc == 0x240394u) {
        ctx->pc = 0x240398u;
        goto label_240398;
    }
    ctx->pc = 0x240390u;
    {
        const bool branch_taken_0x240390 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x240390) {
            ctx->pc = 0x2403A8u;
            goto label_2403a8;
        }
    }
    ctx->pc = 0x240398u;
label_240398:
    // 0x240398: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x240398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_24039c:
    // 0x24039c: 0xc091400  jal         func_245000
label_2403a0:
    if (ctx->pc == 0x2403A0u) {
        ctx->pc = 0x2403A4u;
        goto label_2403a4;
    }
    ctx->pc = 0x24039Cu;
    SET_GPR_U32(ctx, 31, 0x2403A4u);
    ctx->pc = 0x245000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x245000u, 0x24039Cu, 0x2403A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2403A4u;
label_2403a4:
    // 0x2403a4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2403a4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2403a8:
    // 0x2403a8: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x2403a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_2403ac:
    // 0x2403ac: 0xac541118  sw          $s4, 0x1118($v0)
    ctx->pc = 0x2403acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4376), GPR_U32(ctx, 20));
label_2403b0:
    // 0x2403b0: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x2403b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_2403b4:
    // 0x2403b4: 0x8c441118  lw          $a0, 0x1118($v0)
    ctx->pc = 0x2403b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4376)));
label_2403b8:
    // 0x2403b8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2403b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2403bc:
    // 0x2403bc: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2403bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2403c0:
    // 0x2403c0: 0x320f809  jalr        $t9
label_2403c4:
    if (ctx->pc == 0x2403C4u) {
        ctx->pc = 0x2403C8u;
        goto label_2403c8;
    }
    ctx->pc = 0x2403C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2403C8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2403C0u, 0x2403C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2403C8u;
label_2403c8:
    // 0x2403c8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2403c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2403cc:
    // 0x2403cc: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x2403ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_2403d0:
    // 0x2403d0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2403d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2403d4:
    // 0x2403d4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2403d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2403d8:
    // 0x2403d8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2403d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_2403dc:
    // 0x2403dc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2403dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_2403e0:
    // 0x2403e0: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x2403e0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2403e4:
    // 0x2403e4: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x2403e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_2403e8:
    // 0x2403e8: 0xc119b68  jal         func_466DA0
label_2403ec:
    if (ctx->pc == 0x2403ECu) {
        ctx->pc = 0x2403F0u;
        goto label_2403f0;
    }
    ctx->pc = 0x2403E8u;
    SET_GPR_U32(ctx, 31, 0x2403F0u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x2403E8u, 0x2403F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2403F0u;
label_2403f0:
    // 0x2403f0: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x2403f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_2403f4:
    // 0x2403f4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2403f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2403f8:
    // 0x2403f8: 0xc0400e0  jal         func_100380
label_2403fc:
    if (ctx->pc == 0x2403FCu) {
        ctx->pc = 0x240400u;
        goto label_240400;
    }
    ctx->pc = 0x2403F8u;
    SET_GPR_U32(ctx, 31, 0x240400u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x2403F8u, 0x240400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240400u;
label_240400:
    // 0x240400: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x240400u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_240404:
    // 0x240404: 0x12600005  beqz        $s3, . + 4 + (0x5 << 2)
label_240408:
    if (ctx->pc == 0x240408u) {
        ctx->pc = 0x24040Cu;
        goto label_24040c;
    }
    ctx->pc = 0x240404u;
    {
        const bool branch_taken_0x240404 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x240404) {
            ctx->pc = 0x24041Cu;
            goto label_24041c;
        }
    }
    ctx->pc = 0x24040Cu;
label_24040c:
    // 0x24040c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x24040cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_240410:
    // 0x240410: 0xc095088  jal         func_254220
label_240414:
    if (ctx->pc == 0x240414u) {
        ctx->pc = 0x240418u;
        goto label_240418;
    }
    ctx->pc = 0x240410u;
    SET_GPR_U32(ctx, 31, 0x240418u);
    ctx->pc = 0x254220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254220u, 0x240410u, 0x240418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240418u;
label_240418:
    // 0x240418: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x240418u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24041c:
    // 0x24041c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x24041cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_240420:
    // 0x240420: 0xac53111c  sw          $s3, 0x111C($v0)
    ctx->pc = 0x240420u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4380), GPR_U32(ctx, 19));
label_240424:
    // 0x240424: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x240424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_240428:
    // 0x240428: 0x8c44111c  lw          $a0, 0x111C($v0)
    ctx->pc = 0x240428u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4380)));
label_24042c:
    // 0x24042c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x24042cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_240430:
    // 0x240430: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x240430u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_240434:
    // 0x240434: 0x320f809  jalr        $t9
label_240438:
    if (ctx->pc == 0x240438u) {
        ctx->pc = 0x24043Cu;
        goto label_24043c;
    }
    ctx->pc = 0x240434u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x24043Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x240434u, 0x24043Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24043Cu;
label_24043c:
    // 0x24043c: 0x2404006c  addiu       $a0, $zero, 0x6C
    ctx->pc = 0x24043cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
label_240440:
    // 0x240440: 0xc119b68  jal         func_466DA0
label_240444:
    if (ctx->pc == 0x240444u) {
        ctx->pc = 0x240448u;
        goto label_240448;
    }
    ctx->pc = 0x240440u;
    SET_GPR_U32(ctx, 31, 0x240448u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x240440u, 0x240448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240448u;
label_240448:
    // 0x240448: 0x2404006c  addiu       $a0, $zero, 0x6C
    ctx->pc = 0x240448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
label_24044c:
    // 0x24044c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x24044cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_240450:
    // 0x240450: 0xc0400e0  jal         func_100380
label_240454:
    if (ctx->pc == 0x240454u) {
        ctx->pc = 0x240458u;
        goto label_240458;
    }
    ctx->pc = 0x240450u;
    SET_GPR_U32(ctx, 31, 0x240458u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x240450u, 0x240458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240458u;
label_240458:
    // 0x240458: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x240458u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24045c:
    // 0x24045c: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
label_240460:
    if (ctx->pc == 0x240460u) {
        ctx->pc = 0x240464u;
        goto label_240464;
    }
    ctx->pc = 0x24045Cu;
    {
        const bool branch_taken_0x24045c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x24045c) {
            ctx->pc = 0x240474u;
            goto label_240474;
        }
    }
    ctx->pc = 0x240464u;
label_240464:
    // 0x240464: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x240464u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_240468:
    // 0x240468: 0xc09a174  jal         func_2685D0
label_24046c:
    if (ctx->pc == 0x24046Cu) {
        ctx->pc = 0x240470u;
        goto label_240470;
    }
    ctx->pc = 0x240468u;
    SET_GPR_U32(ctx, 31, 0x240470u);
    ctx->pc = 0x2685D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2685D0u, 0x240468u, 0x240470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240470u;
label_240470:
    // 0x240470: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x240470u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_240474:
    // 0x240474: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x240474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_240478:
    // 0x240478: 0xac521120  sw          $s2, 0x1120($v0)
    ctx->pc = 0x240478u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4384), GPR_U32(ctx, 18));
label_24047c:
    // 0x24047c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x24047cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_240480:
    // 0x240480: 0x8c441120  lw          $a0, 0x1120($v0)
    ctx->pc = 0x240480u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4384)));
label_240484:
    // 0x240484: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x240484u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_240488:
    // 0x240488: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x240488u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_24048c:
    // 0x24048c: 0x320f809  jalr        $t9
label_240490:
    if (ctx->pc == 0x240490u) {
        ctx->pc = 0x240494u;
        goto label_240494;
    }
    ctx->pc = 0x24048Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x240494u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24048Cu, 0x240494u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x240494u;
label_240494:
    // 0x240494: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x240494u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_240498:
    // 0x240498: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x240498u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_24049c:
    // 0x24049c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x24049cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2404a0:
    // 0x2404a0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2404a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2404a4:
    // 0x2404a4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2404a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_2404a8:
    // 0x2404a8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2404a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_2404ac:
    // 0x2404ac: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x2404acu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2404b0:
    // 0x2404b0: 0x24040058  addiu       $a0, $zero, 0x58
    ctx->pc = 0x2404b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
label_2404b4:
    // 0x2404b4: 0xc119b68  jal         func_466DA0
label_2404b8:
    if (ctx->pc == 0x2404B8u) {
        ctx->pc = 0x2404BCu;
        goto label_2404bc;
    }
    ctx->pc = 0x2404B4u;
    SET_GPR_U32(ctx, 31, 0x2404BCu);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x2404B4u, 0x2404BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2404BCu;
label_2404bc:
    // 0x2404bc: 0x24040058  addiu       $a0, $zero, 0x58
    ctx->pc = 0x2404bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
label_2404c0:
    // 0x2404c0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2404c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2404c4:
    // 0x2404c4: 0xc0400e0  jal         func_100380
label_2404c8:
    if (ctx->pc == 0x2404C8u) {
        ctx->pc = 0x2404CCu;
        goto label_2404cc;
    }
    ctx->pc = 0x2404C4u;
    SET_GPR_U32(ctx, 31, 0x2404CCu);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x2404C4u, 0x2404CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2404CCu;
label_2404cc:
    // 0x2404cc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2404ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2404d0:
    // 0x2404d0: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
label_2404d4:
    if (ctx->pc == 0x2404D4u) {
        ctx->pc = 0x2404D8u;
        goto label_2404d8;
    }
    ctx->pc = 0x2404D0u;
    {
        const bool branch_taken_0x2404d0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2404d0) {
            ctx->pc = 0x2404E8u;
            goto label_2404e8;
        }
    }
    ctx->pc = 0x2404D8u;
label_2404d8:
    // 0x2404d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2404d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2404dc:
    // 0x2404dc: 0xc0986c8  jal         func_261B20
label_2404e0:
    if (ctx->pc == 0x2404E0u) {
        ctx->pc = 0x2404E4u;
        goto label_2404e4;
    }
    ctx->pc = 0x2404DCu;
    SET_GPR_U32(ctx, 31, 0x2404E4u);
    ctx->pc = 0x261B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261B20u, 0x2404DCu, 0x2404E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2404E4u;
label_2404e4:
    // 0x2404e4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2404e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2404e8:
    // 0x2404e8: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x2404e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_2404ec:
    // 0x2404ec: 0xac511124  sw          $s1, 0x1124($v0)
    ctx->pc = 0x2404ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4388), GPR_U32(ctx, 17));
label_2404f0:
    // 0x2404f0: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x2404f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_2404f4:
    // 0x2404f4: 0x8c441124  lw          $a0, 0x1124($v0)
    ctx->pc = 0x2404f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4388)));
label_2404f8:
    // 0x2404f8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2404f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2404fc:
    // 0x2404fc: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2404fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_240500:
    // 0x240500: 0x320f809  jalr        $t9
label_240504:
    if (ctx->pc == 0x240504u) {
        ctx->pc = 0x240508u;
        goto label_240508;
    }
    ctx->pc = 0x240500u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x240508u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x240500u, 0x240508u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x240508u;
label_240508:
    // 0x240508: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x240508u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_24050c:
    // 0x24050c: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x24050cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_240510:
    // 0x240510: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x240510u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_240514:
    // 0x240514: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x240514u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_240518:
    // 0x240518: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x240518u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_24051c:
    // 0x24051c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x24051cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_240520:
    // 0x240520: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x240520u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_240524:
    // 0x240524: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x240524u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_240528:
    // 0x240528: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x240528u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_24052c:
    // 0x24052c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x24052cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_240530:
    // 0x240530: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x240530u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_240534:
    // 0x240534: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x240534u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_240538:
    // 0x240538: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x240538u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_24053c:
    // 0x24053c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x24053cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_240540:
    // 0x240540: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x240540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_240544:
    // 0x240544: 0x3e00008  jr          $ra
label_240548:
    if (ctx->pc == 0x240548u) {
        ctx->pc = 0x24054Cu;
        goto label_24054c;
    }
    ctx->pc = 0x240544u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x240544u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24054Cu;
label_24054c:
    // 0x24054c: 0x0  nop
    ctx->pc = 0x24054cu;
    // NOP
label_240550:
    // 0x240550: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x240550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_240554:
    // 0x240554: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x240554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_240558:
    // 0x240558: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x240558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_24055c:
    // 0x24055c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x24055cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
label_240560:
    // 0x240560: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x240560u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_240564:
    // 0x240564: 0xc085204  jal         func_214810
label_240568:
    if (ctx->pc == 0x240568u) {
        ctx->pc = 0x24056Cu;
        goto label_24056c;
    }
    ctx->pc = 0x240564u;
    SET_GPR_U32(ctx, 31, 0x24056Cu);
    ctx->pc = 0x214810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214810u, 0x240564u, 0x24056Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24056Cu;
label_24056c:
    // 0x24056c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x24056cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_240570:
    // 0x240570: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x240570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_240574:
    // 0x240574: 0x8c441118  lw          $a0, 0x1118($v0)
    ctx->pc = 0x240574u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4376)));
label_240578:
    // 0x240578: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x240578u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_24057c:
    // 0x24057c: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x24057cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_240580:
    // 0x240580: 0x320f809  jalr        $t9
label_240584:
    if (ctx->pc == 0x240584u) {
        ctx->pc = 0x240588u;
        goto label_240588;
    }
    ctx->pc = 0x240580u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x240588u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x240580u, 0x240588u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x240588u;
label_240588:
    // 0x240588: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x240588u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_24058c:
    // 0x24058c: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x24058cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_240590:
    // 0x240590: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x240590u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_240594:
    // 0x240594: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x240594u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_240598:
    // 0x240598: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x240598u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_24059c:
    // 0x24059c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x24059cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_2405a0:
    // 0x2405a0: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x2405a0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2405a4:
    // 0x2405a4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2405a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2405a8:
    // 0x2405a8: 0x8c421118  lw          $v0, 0x1118($v0)
    ctx->pc = 0x2405a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4376)));
label_2405ac:
    // 0x2405ac: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_2405b0:
    if (ctx->pc == 0x2405B0u) {
        ctx->pc = 0x2405B4u;
        goto label_2405b4;
    }
    ctx->pc = 0x2405ACu;
    {
        const bool branch_taken_0x2405ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2405ac) {
            ctx->pc = 0x2405DCu;
            goto label_2405dc;
        }
    }
    ctx->pc = 0x2405B4u;
label_2405b4:
    // 0x2405b4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2405b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2405b8:
    // 0x2405b8: 0x8c441118  lw          $a0, 0x1118($v0)
    ctx->pc = 0x2405b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4376)));
label_2405bc:
    // 0x2405bc: 0xc0901f4  jal         func_2407D0
label_2405c0:
    if (ctx->pc == 0x2405C0u) {
        ctx->pc = 0x2405C4u;
        goto label_2405c4;
    }
    ctx->pc = 0x2405BCu;
    SET_GPR_U32(ctx, 31, 0x2405C4u);
    ctx->pc = 0x2407D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2407D0u, 0x2405BCu, 0x2405C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2405C4u;
label_2405c4:
    // 0x2405c4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2405c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2405c8:
    // 0x2405c8: 0x8c441118  lw          $a0, 0x1118($v0)
    ctx->pc = 0x2405c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4376)));
label_2405cc:
    // 0x2405cc: 0xc119c5c  jal         func_467170
label_2405d0:
    if (ctx->pc == 0x2405D0u) {
        ctx->pc = 0x2405D4u;
        goto label_2405d4;
    }
    ctx->pc = 0x2405CCu;
    SET_GPR_U32(ctx, 31, 0x2405D4u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x2405CCu, 0x2405D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2405D4u;
label_2405d4:
    // 0x2405d4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2405d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2405d8:
    // 0x2405d8: 0xac401118  sw          $zero, 0x1118($v0)
    ctx->pc = 0x2405d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4376), GPR_U32(ctx, 0));
label_2405dc:
    // 0x2405dc: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2405dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2405e0:
    // 0x2405e0: 0x8c44111c  lw          $a0, 0x111C($v0)
    ctx->pc = 0x2405e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4380)));
label_2405e4:
    // 0x2405e4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2405e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2405e8:
    // 0x2405e8: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x2405e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_2405ec:
    // 0x2405ec: 0x320f809  jalr        $t9
label_2405f0:
    if (ctx->pc == 0x2405F0u) {
        ctx->pc = 0x2405F4u;
        goto label_2405f4;
    }
    ctx->pc = 0x2405ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2405F4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2405ECu, 0x2405F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2405F4u;
label_2405f4:
    // 0x2405f4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2405f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2405f8:
    // 0x2405f8: 0x8c42111c  lw          $v0, 0x111C($v0)
    ctx->pc = 0x2405f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4380)));
label_2405fc:
    // 0x2405fc: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_240600:
    if (ctx->pc == 0x240600u) {
        ctx->pc = 0x240604u;
        goto label_240604;
    }
    ctx->pc = 0x2405FCu;
    {
        const bool branch_taken_0x2405fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2405fc) {
            ctx->pc = 0x24062Cu;
            goto label_24062c;
        }
    }
    ctx->pc = 0x240604u;
label_240604:
    // 0x240604: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x240604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_240608:
    // 0x240608: 0x8c44111c  lw          $a0, 0x111C($v0)
    ctx->pc = 0x240608u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4380)));
label_24060c:
    // 0x24060c: 0xc0901e4  jal         func_240790
label_240610:
    if (ctx->pc == 0x240610u) {
        ctx->pc = 0x240614u;
        goto label_240614;
    }
    ctx->pc = 0x24060Cu;
    SET_GPR_U32(ctx, 31, 0x240614u);
    ctx->pc = 0x240790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240790u, 0x24060Cu, 0x240614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240614u;
label_240614:
    // 0x240614: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x240614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_240618:
    // 0x240618: 0x8c44111c  lw          $a0, 0x111C($v0)
    ctx->pc = 0x240618u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4380)));
label_24061c:
    // 0x24061c: 0xc119c5c  jal         func_467170
label_240620:
    if (ctx->pc == 0x240620u) {
        ctx->pc = 0x240624u;
        goto label_240624;
    }
    ctx->pc = 0x24061Cu;
    SET_GPR_U32(ctx, 31, 0x240624u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x24061Cu, 0x240624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240624u;
label_240624:
    // 0x240624: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x240624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_240628:
    // 0x240628: 0xac40111c  sw          $zero, 0x111C($v0)
    ctx->pc = 0x240628u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4380), GPR_U32(ctx, 0));
label_24062c:
    // 0x24062c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x24062cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_240630:
    // 0x240630: 0x8c441120  lw          $a0, 0x1120($v0)
    ctx->pc = 0x240630u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4384)));
label_240634:
    // 0x240634: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x240634u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_240638:
    // 0x240638: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x240638u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_24063c:
    // 0x24063c: 0x320f809  jalr        $t9
label_240640:
    if (ctx->pc == 0x240640u) {
        ctx->pc = 0x240644u;
        goto label_240644;
    }
    ctx->pc = 0x24063Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x240644u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24063Cu, 0x240644u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x240644u;
label_240644:
    // 0x240644: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x240644u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_240648:
    // 0x240648: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x240648u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_24064c:
    // 0x24064c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x24064cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_240650:
    // 0x240650: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x240650u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_240654:
    // 0x240654: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x240654u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_240658:
    // 0x240658: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x240658u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_24065c:
    // 0x24065c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x24065cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_240660:
    // 0x240660: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x240660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_240664:
    // 0x240664: 0x8c421120  lw          $v0, 0x1120($v0)
    ctx->pc = 0x240664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4384)));
label_240668:
    // 0x240668: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_24066c:
    if (ctx->pc == 0x24066Cu) {
        ctx->pc = 0x240670u;
        goto label_240670;
    }
    ctx->pc = 0x240668u;
    {
        const bool branch_taken_0x240668 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x240668) {
            ctx->pc = 0x240698u;
            goto label_240698;
        }
    }
    ctx->pc = 0x240670u;
label_240670:
    // 0x240670: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x240670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_240674:
    // 0x240674: 0x8c441120  lw          $a0, 0x1120($v0)
    ctx->pc = 0x240674u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4384)));
label_240678:
    // 0x240678: 0xc0901d4  jal         func_240750
label_24067c:
    if (ctx->pc == 0x24067Cu) {
        ctx->pc = 0x240680u;
        goto label_240680;
    }
    ctx->pc = 0x240678u;
    SET_GPR_U32(ctx, 31, 0x240680u);
    ctx->pc = 0x240750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240750u, 0x240678u, 0x240680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240680u;
label_240680:
    // 0x240680: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x240680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_240684:
    // 0x240684: 0x8c441120  lw          $a0, 0x1120($v0)
    ctx->pc = 0x240684u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4384)));
label_240688:
    // 0x240688: 0xc119c5c  jal         func_467170
label_24068c:
    if (ctx->pc == 0x24068Cu) {
        ctx->pc = 0x240690u;
        goto label_240690;
    }
    ctx->pc = 0x240688u;
    SET_GPR_U32(ctx, 31, 0x240690u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x240688u, 0x240690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240690u;
label_240690:
    // 0x240690: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x240690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_240694:
    // 0x240694: 0xac401120  sw          $zero, 0x1120($v0)
    ctx->pc = 0x240694u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4384), GPR_U32(ctx, 0));
label_240698:
    // 0x240698: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x240698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_24069c:
    // 0x24069c: 0x8c441124  lw          $a0, 0x1124($v0)
    ctx->pc = 0x24069cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4388)));
label_2406a0:
    // 0x2406a0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2406a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2406a4:
    // 0x2406a4: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x2406a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_2406a8:
    // 0x2406a8: 0x320f809  jalr        $t9
label_2406ac:
    if (ctx->pc == 0x2406ACu) {
        ctx->pc = 0x2406B0u;
        goto label_2406b0;
    }
    ctx->pc = 0x2406A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2406B0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2406A8u, 0x2406B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2406B0u;
label_2406b0:
    // 0x2406b0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2406b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2406b4:
    // 0x2406b4: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x2406b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_2406b8:
    // 0x2406b8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2406b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2406bc:
    // 0x2406bc: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2406bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2406c0:
    // 0x2406c0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2406c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_2406c4:
    // 0x2406c4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2406c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_2406c8:
    // 0x2406c8: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x2406c8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2406cc:
    // 0x2406cc: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2406ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2406d0:
    // 0x2406d0: 0x8c421124  lw          $v0, 0x1124($v0)
    ctx->pc = 0x2406d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4388)));
label_2406d4:
    // 0x2406d4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_2406d8:
    if (ctx->pc == 0x2406D8u) {
        ctx->pc = 0x2406DCu;
        goto label_2406dc;
    }
    ctx->pc = 0x2406D4u;
    {
        const bool branch_taken_0x2406d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2406d4) {
            ctx->pc = 0x240704u;
            goto label_240704;
        }
    }
    ctx->pc = 0x2406DCu;
label_2406dc:
    // 0x2406dc: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2406dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2406e0:
    // 0x2406e0: 0x8c441124  lw          $a0, 0x1124($v0)
    ctx->pc = 0x2406e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4388)));
label_2406e4:
    // 0x2406e4: 0xc0901c8  jal         func_240720
label_2406e8:
    if (ctx->pc == 0x2406E8u) {
        ctx->pc = 0x2406ECu;
        goto label_2406ec;
    }
    ctx->pc = 0x2406E4u;
    SET_GPR_U32(ctx, 31, 0x2406ECu);
    ctx->pc = 0x240720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240720u, 0x2406E4u, 0x2406ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2406ECu;
label_2406ec:
    // 0x2406ec: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2406ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2406f0:
    // 0x2406f0: 0x8c441124  lw          $a0, 0x1124($v0)
    ctx->pc = 0x2406f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4388)));
label_2406f4:
    // 0x2406f4: 0xc119c5c  jal         func_467170
label_2406f8:
    if (ctx->pc == 0x2406F8u) {
        ctx->pc = 0x2406FCu;
        goto label_2406fc;
    }
    ctx->pc = 0x2406F4u;
    SET_GPR_U32(ctx, 31, 0x2406FCu);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x2406F4u, 0x2406FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2406FCu;
label_2406fc:
    // 0x2406fc: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2406fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_240700:
    // 0x240700: 0xac401124  sw          $zero, 0x1124($v0)
    ctx->pc = 0x240700u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4388), GPR_U32(ctx, 0));
label_240704:
    // 0x240704: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x240704u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_240708:
    // 0x240708: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x240708u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_24070c:
    // 0x24070c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x24070cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_240710:
    // 0x240710: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x240710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_240714:
    // 0x240714: 0x3e00008  jr          $ra
label_240718:
    if (ctx->pc == 0x240718u) {
        ctx->pc = 0x24071Cu;
        goto label_24071c;
    }
    ctx->pc = 0x240714u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x240714u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24071Cu;
label_24071c:
    // 0x24071c: 0x0  nop
    ctx->pc = 0x24071cu;
    // NOP
    ctx->pc = 0x240720u;
}
