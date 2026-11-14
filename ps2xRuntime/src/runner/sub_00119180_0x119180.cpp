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

// Function: sub_00119180
// Address: 0x119180 - 0x1196c0
void sub_00119180_0x119180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00119180_0x119180");
#endif

    switch (ctx->pc) {
        case 0x119180u: goto label_119180;
        case 0x119184u: goto label_119184;
        case 0x119188u: goto label_119188;
        case 0x11918cu: goto label_11918c;
        case 0x119190u: goto label_119190;
        case 0x119194u: goto label_119194;
        case 0x119198u: goto label_119198;
        case 0x11919cu: goto label_11919c;
        case 0x1191a0u: goto label_1191a0;
        case 0x1191a4u: goto label_1191a4;
        case 0x1191a8u: goto label_1191a8;
        case 0x1191acu: goto label_1191ac;
        case 0x1191b0u: goto label_1191b0;
        case 0x1191b4u: goto label_1191b4;
        case 0x1191b8u: goto label_1191b8;
        case 0x1191bcu: goto label_1191bc;
        case 0x1191c0u: goto label_1191c0;
        case 0x1191c4u: goto label_1191c4;
        case 0x1191c8u: goto label_1191c8;
        case 0x1191ccu: goto label_1191cc;
        case 0x1191d0u: goto label_1191d0;
        case 0x1191d4u: goto label_1191d4;
        case 0x1191d8u: goto label_1191d8;
        case 0x1191dcu: goto label_1191dc;
        case 0x1191e0u: goto label_1191e0;
        case 0x1191e4u: goto label_1191e4;
        case 0x1191e8u: goto label_1191e8;
        case 0x1191ecu: goto label_1191ec;
        case 0x1191f0u: goto label_1191f0;
        case 0x1191f4u: goto label_1191f4;
        case 0x1191f8u: goto label_1191f8;
        case 0x1191fcu: goto label_1191fc;
        case 0x119200u: goto label_119200;
        case 0x119204u: goto label_119204;
        case 0x119208u: goto label_119208;
        case 0x11920cu: goto label_11920c;
        case 0x119210u: goto label_119210;
        case 0x119214u: goto label_119214;
        case 0x119218u: goto label_119218;
        case 0x11921cu: goto label_11921c;
        case 0x119220u: goto label_119220;
        case 0x119224u: goto label_119224;
        case 0x119228u: goto label_119228;
        case 0x11922cu: goto label_11922c;
        case 0x119230u: goto label_119230;
        case 0x119234u: goto label_119234;
        case 0x119238u: goto label_119238;
        case 0x11923cu: goto label_11923c;
        case 0x119240u: goto label_119240;
        case 0x119244u: goto label_119244;
        case 0x119248u: goto label_119248;
        case 0x11924cu: goto label_11924c;
        case 0x119250u: goto label_119250;
        case 0x119254u: goto label_119254;
        case 0x119258u: goto label_119258;
        case 0x11925cu: goto label_11925c;
        case 0x119260u: goto label_119260;
        case 0x119264u: goto label_119264;
        case 0x119268u: goto label_119268;
        case 0x11926cu: goto label_11926c;
        case 0x119270u: goto label_119270;
        case 0x119274u: goto label_119274;
        case 0x119278u: goto label_119278;
        case 0x11927cu: goto label_11927c;
        case 0x119280u: goto label_119280;
        case 0x119284u: goto label_119284;
        case 0x119288u: goto label_119288;
        case 0x11928cu: goto label_11928c;
        case 0x119290u: goto label_119290;
        case 0x119294u: goto label_119294;
        case 0x119298u: goto label_119298;
        case 0x11929cu: goto label_11929c;
        case 0x1192a0u: goto label_1192a0;
        case 0x1192a4u: goto label_1192a4;
        case 0x1192a8u: goto label_1192a8;
        case 0x1192acu: goto label_1192ac;
        case 0x1192b0u: goto label_1192b0;
        case 0x1192b4u: goto label_1192b4;
        case 0x1192b8u: goto label_1192b8;
        case 0x1192bcu: goto label_1192bc;
        case 0x1192c0u: goto label_1192c0;
        case 0x1192c4u: goto label_1192c4;
        case 0x1192c8u: goto label_1192c8;
        case 0x1192ccu: goto label_1192cc;
        case 0x1192d0u: goto label_1192d0;
        case 0x1192d4u: goto label_1192d4;
        case 0x1192d8u: goto label_1192d8;
        case 0x1192dcu: goto label_1192dc;
        case 0x1192e0u: goto label_1192e0;
        case 0x1192e4u: goto label_1192e4;
        case 0x1192e8u: goto label_1192e8;
        case 0x1192ecu: goto label_1192ec;
        case 0x1192f0u: goto label_1192f0;
        case 0x1192f4u: goto label_1192f4;
        case 0x1192f8u: goto label_1192f8;
        case 0x1192fcu: goto label_1192fc;
        case 0x119300u: goto label_119300;
        case 0x119304u: goto label_119304;
        case 0x119308u: goto label_119308;
        case 0x11930cu: goto label_11930c;
        case 0x119310u: goto label_119310;
        case 0x119314u: goto label_119314;
        case 0x119318u: goto label_119318;
        case 0x11931cu: goto label_11931c;
        case 0x119320u: goto label_119320;
        case 0x119324u: goto label_119324;
        case 0x119328u: goto label_119328;
        case 0x11932cu: goto label_11932c;
        case 0x119330u: goto label_119330;
        case 0x119334u: goto label_119334;
        case 0x119338u: goto label_119338;
        case 0x11933cu: goto label_11933c;
        case 0x119340u: goto label_119340;
        case 0x119344u: goto label_119344;
        case 0x119348u: goto label_119348;
        case 0x11934cu: goto label_11934c;
        case 0x119350u: goto label_119350;
        case 0x119354u: goto label_119354;
        case 0x119358u: goto label_119358;
        case 0x11935cu: goto label_11935c;
        case 0x119360u: goto label_119360;
        case 0x119364u: goto label_119364;
        case 0x119368u: goto label_119368;
        case 0x11936cu: goto label_11936c;
        case 0x119370u: goto label_119370;
        case 0x119374u: goto label_119374;
        case 0x119378u: goto label_119378;
        case 0x11937cu: goto label_11937c;
        case 0x119380u: goto label_119380;
        case 0x119384u: goto label_119384;
        case 0x119388u: goto label_119388;
        case 0x11938cu: goto label_11938c;
        case 0x119390u: goto label_119390;
        case 0x119394u: goto label_119394;
        case 0x119398u: goto label_119398;
        case 0x11939cu: goto label_11939c;
        case 0x1193a0u: goto label_1193a0;
        case 0x1193a4u: goto label_1193a4;
        case 0x1193a8u: goto label_1193a8;
        case 0x1193acu: goto label_1193ac;
        case 0x1193b0u: goto label_1193b0;
        case 0x1193b4u: goto label_1193b4;
        case 0x1193b8u: goto label_1193b8;
        case 0x1193bcu: goto label_1193bc;
        case 0x1193c0u: goto label_1193c0;
        case 0x1193c4u: goto label_1193c4;
        case 0x1193c8u: goto label_1193c8;
        case 0x1193ccu: goto label_1193cc;
        case 0x1193d0u: goto label_1193d0;
        case 0x1193d4u: goto label_1193d4;
        case 0x1193d8u: goto label_1193d8;
        case 0x1193dcu: goto label_1193dc;
        case 0x1193e0u: goto label_1193e0;
        case 0x1193e4u: goto label_1193e4;
        case 0x1193e8u: goto label_1193e8;
        case 0x1193ecu: goto label_1193ec;
        case 0x1193f0u: goto label_1193f0;
        case 0x1193f4u: goto label_1193f4;
        case 0x1193f8u: goto label_1193f8;
        case 0x1193fcu: goto label_1193fc;
        case 0x119400u: goto label_119400;
        case 0x119404u: goto label_119404;
        case 0x119408u: goto label_119408;
        case 0x11940cu: goto label_11940c;
        case 0x119410u: goto label_119410;
        case 0x119414u: goto label_119414;
        case 0x119418u: goto label_119418;
        case 0x11941cu: goto label_11941c;
        case 0x119420u: goto label_119420;
        case 0x119424u: goto label_119424;
        case 0x119428u: goto label_119428;
        case 0x11942cu: goto label_11942c;
        case 0x119430u: goto label_119430;
        case 0x119434u: goto label_119434;
        case 0x119438u: goto label_119438;
        case 0x11943cu: goto label_11943c;
        case 0x119440u: goto label_119440;
        case 0x119444u: goto label_119444;
        case 0x119448u: goto label_119448;
        case 0x11944cu: goto label_11944c;
        case 0x119450u: goto label_119450;
        case 0x119454u: goto label_119454;
        case 0x119458u: goto label_119458;
        case 0x11945cu: goto label_11945c;
        case 0x119460u: goto label_119460;
        case 0x119464u: goto label_119464;
        case 0x119468u: goto label_119468;
        case 0x11946cu: goto label_11946c;
        case 0x119470u: goto label_119470;
        case 0x119474u: goto label_119474;
        case 0x119478u: goto label_119478;
        case 0x11947cu: goto label_11947c;
        case 0x119480u: goto label_119480;
        case 0x119484u: goto label_119484;
        case 0x119488u: goto label_119488;
        case 0x11948cu: goto label_11948c;
        case 0x119490u: goto label_119490;
        case 0x119494u: goto label_119494;
        case 0x119498u: goto label_119498;
        case 0x11949cu: goto label_11949c;
        case 0x1194a0u: goto label_1194a0;
        case 0x1194a4u: goto label_1194a4;
        case 0x1194a8u: goto label_1194a8;
        case 0x1194acu: goto label_1194ac;
        case 0x1194b0u: goto label_1194b0;
        case 0x1194b4u: goto label_1194b4;
        case 0x1194b8u: goto label_1194b8;
        case 0x1194bcu: goto label_1194bc;
        case 0x1194c0u: goto label_1194c0;
        case 0x1194c4u: goto label_1194c4;
        case 0x1194c8u: goto label_1194c8;
        case 0x1194ccu: goto label_1194cc;
        case 0x1194d0u: goto label_1194d0;
        case 0x1194d4u: goto label_1194d4;
        case 0x1194d8u: goto label_1194d8;
        case 0x1194dcu: goto label_1194dc;
        case 0x1194e0u: goto label_1194e0;
        case 0x1194e4u: goto label_1194e4;
        case 0x1194e8u: goto label_1194e8;
        case 0x1194ecu: goto label_1194ec;
        case 0x1194f0u: goto label_1194f0;
        case 0x1194f4u: goto label_1194f4;
        case 0x1194f8u: goto label_1194f8;
        case 0x1194fcu: goto label_1194fc;
        case 0x119500u: goto label_119500;
        case 0x119504u: goto label_119504;
        case 0x119508u: goto label_119508;
        case 0x11950cu: goto label_11950c;
        case 0x119510u: goto label_119510;
        case 0x119514u: goto label_119514;
        case 0x119518u: goto label_119518;
        case 0x11951cu: goto label_11951c;
        case 0x119520u: goto label_119520;
        case 0x119524u: goto label_119524;
        case 0x119528u: goto label_119528;
        case 0x11952cu: goto label_11952c;
        case 0x119530u: goto label_119530;
        case 0x119534u: goto label_119534;
        case 0x119538u: goto label_119538;
        case 0x11953cu: goto label_11953c;
        case 0x119540u: goto label_119540;
        case 0x119544u: goto label_119544;
        case 0x119548u: goto label_119548;
        case 0x11954cu: goto label_11954c;
        case 0x119550u: goto label_119550;
        case 0x119554u: goto label_119554;
        case 0x119558u: goto label_119558;
        case 0x11955cu: goto label_11955c;
        case 0x119560u: goto label_119560;
        case 0x119564u: goto label_119564;
        case 0x119568u: goto label_119568;
        case 0x11956cu: goto label_11956c;
        case 0x119570u: goto label_119570;
        case 0x119574u: goto label_119574;
        case 0x119578u: goto label_119578;
        case 0x11957cu: goto label_11957c;
        case 0x119580u: goto label_119580;
        case 0x119584u: goto label_119584;
        case 0x119588u: goto label_119588;
        case 0x11958cu: goto label_11958c;
        case 0x119590u: goto label_119590;
        case 0x119594u: goto label_119594;
        case 0x119598u: goto label_119598;
        case 0x11959cu: goto label_11959c;
        case 0x1195a0u: goto label_1195a0;
        case 0x1195a4u: goto label_1195a4;
        case 0x1195a8u: goto label_1195a8;
        case 0x1195acu: goto label_1195ac;
        case 0x1195b0u: goto label_1195b0;
        case 0x1195b4u: goto label_1195b4;
        case 0x1195b8u: goto label_1195b8;
        case 0x1195bcu: goto label_1195bc;
        case 0x1195c0u: goto label_1195c0;
        case 0x1195c4u: goto label_1195c4;
        case 0x1195c8u: goto label_1195c8;
        case 0x1195ccu: goto label_1195cc;
        case 0x1195d0u: goto label_1195d0;
        case 0x1195d4u: goto label_1195d4;
        case 0x1195d8u: goto label_1195d8;
        case 0x1195dcu: goto label_1195dc;
        case 0x1195e0u: goto label_1195e0;
        case 0x1195e4u: goto label_1195e4;
        case 0x1195e8u: goto label_1195e8;
        case 0x1195ecu: goto label_1195ec;
        case 0x1195f0u: goto label_1195f0;
        case 0x1195f4u: goto label_1195f4;
        case 0x1195f8u: goto label_1195f8;
        case 0x1195fcu: goto label_1195fc;
        case 0x119600u: goto label_119600;
        case 0x119604u: goto label_119604;
        case 0x119608u: goto label_119608;
        case 0x11960cu: goto label_11960c;
        case 0x119610u: goto label_119610;
        case 0x119614u: goto label_119614;
        case 0x119618u: goto label_119618;
        case 0x11961cu: goto label_11961c;
        case 0x119620u: goto label_119620;
        case 0x119624u: goto label_119624;
        case 0x119628u: goto label_119628;
        case 0x11962cu: goto label_11962c;
        case 0x119630u: goto label_119630;
        case 0x119634u: goto label_119634;
        case 0x119638u: goto label_119638;
        case 0x11963cu: goto label_11963c;
        case 0x119640u: goto label_119640;
        case 0x119644u: goto label_119644;
        case 0x119648u: goto label_119648;
        case 0x11964cu: goto label_11964c;
        case 0x119650u: goto label_119650;
        case 0x119654u: goto label_119654;
        case 0x119658u: goto label_119658;
        case 0x11965cu: goto label_11965c;
        case 0x119660u: goto label_119660;
        case 0x119664u: goto label_119664;
        case 0x119668u: goto label_119668;
        case 0x11966cu: goto label_11966c;
        case 0x119670u: goto label_119670;
        case 0x119674u: goto label_119674;
        case 0x119678u: goto label_119678;
        case 0x11967cu: goto label_11967c;
        case 0x119680u: goto label_119680;
        case 0x119684u: goto label_119684;
        case 0x119688u: goto label_119688;
        case 0x11968cu: goto label_11968c;
        case 0x119690u: goto label_119690;
        case 0x119694u: goto label_119694;
        case 0x119698u: goto label_119698;
        case 0x11969cu: goto label_11969c;
        case 0x1196a0u: goto label_1196a0;
        case 0x1196a4u: goto label_1196a4;
        case 0x1196a8u: goto label_1196a8;
        case 0x1196acu: goto label_1196ac;
        case 0x1196b0u: goto label_1196b0;
        case 0x1196b4u: goto label_1196b4;
        case 0x1196b8u: goto label_1196b8;
        case 0x1196bcu: goto label_1196bc;
        default: break;
    }

    ctx->pc = 0x119180u;

label_119180:
    // 0x119180: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x119180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_119184:
    // 0x119184: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x119184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_119188:
    // 0x119188: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x119188u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_11918c:
    // 0x11918c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x11918cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_119190:
    // 0x119190: 0xc084f04  jal         func_213C10
label_119194:
    if (ctx->pc == 0x119194u) {
        ctx->pc = 0x119198u;
        goto label_119198;
    }
    ctx->pc = 0x119190u;
    SET_GPR_U32(ctx, 31, 0x119198u);
    ctx->pc = 0x213C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x213C10u, 0x119190u, 0x119198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119198u;
label_119198:
    // 0x119198: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x119198u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_11919c:
    // 0x11919c: 0x24633370  addiu       $v1, $v1, 0x3370
    ctx->pc = 0x11919cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13168));
label_1191a0:
    // 0x1191a0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1191a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1191a4:
    // 0x1191a4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1191a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_1191a8:
    // 0x1191a8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1191a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1191ac:
    // 0x1191ac: 0xac400038  sw          $zero, 0x38($v0)
    ctx->pc = 0x1191acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 0));
label_1191b0:
    // 0x1191b0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1191b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1191b4:
    // 0x1191b4: 0xac40003c  sw          $zero, 0x3C($v0)
    ctx->pc = 0x1191b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 0));
label_1191b8:
    // 0x1191b8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1191b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1191bc:
    // 0x1191bc: 0xac400040  sw          $zero, 0x40($v0)
    ctx->pc = 0x1191bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
label_1191c0:
    // 0x1191c0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1191c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1191c4:
    // 0x1191c4: 0xac400044  sw          $zero, 0x44($v0)
    ctx->pc = 0x1191c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 0));
label_1191c8:
    // 0x1191c8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1191c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1191cc:
    // 0x1191cc: 0xac400048  sw          $zero, 0x48($v0)
    ctx->pc = 0x1191ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 0));
label_1191d0:
    // 0x1191d0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1191d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1191d4:
    // 0x1191d4: 0xaf82b9d0  sw          $v0, -0x4630($gp)
    ctx->pc = 0x1191d4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949328), GPR_U32(ctx, 2));
label_1191d8:
    // 0x1191d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1191d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1191dc:
    // 0x1191dc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1191dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1191e0:
    // 0x1191e0: 0xa043004c  sb          $v1, 0x4C($v0)
    ctx->pc = 0x1191e0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 76), (uint8_t)GPR_U32(ctx, 3));
label_1191e4:
    // 0x1191e4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1191e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1191e8:
    // 0x1191e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1191e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1191ec:
    // 0x1191ec: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1191ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1191f0:
    // 0x1191f0: 0x3e00008  jr          $ra
label_1191f4:
    if (ctx->pc == 0x1191F4u) {
        ctx->pc = 0x1191F8u;
        goto label_1191f8;
    }
    ctx->pc = 0x1191F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1191F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1191F8u;
label_1191f8:
    // 0x1191f8: 0x0  nop
    ctx->pc = 0x1191f8u;
    // NOP
label_1191fc:
    // 0x1191fc: 0x0  nop
    ctx->pc = 0x1191fcu;
    // NOP
label_119200:
    // 0x119200: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x119200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_119204:
    // 0x119204: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x119204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_119208:
    // 0x119208: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x119208u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_11920c:
    // 0x11920c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x11920cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
label_119210:
    // 0x119210: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x119210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_119214:
    // 0x119214: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_119218:
    if (ctx->pc == 0x119218u) {
        ctx->pc = 0x11921Cu;
        goto label_11921c;
    }
    ctx->pc = 0x119214u;
    {
        const bool branch_taken_0x119214 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x119214) {
            ctx->pc = 0x119260u;
            goto label_119260;
        }
    }
    ctx->pc = 0x11921Cu;
label_11921c:
    // 0x11921c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x11921cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_119220:
    // 0x119220: 0x24633370  addiu       $v1, $v1, 0x3370
    ctx->pc = 0x119220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13168));
label_119224:
    // 0x119224: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x119224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_119228:
    // 0x119228: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x119228u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_11922c:
    // 0x11922c: 0xaf80b9d0  sw          $zero, -0x4630($gp)
    ctx->pc = 0x11922cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949328), GPR_U32(ctx, 0));
label_119230:
    // 0x119230: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x119230u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_119234:
    // 0x119234: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x119234u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_119238:
    // 0x119238: 0xc084ffc  jal         func_213FF0
label_11923c:
    if (ctx->pc == 0x11923Cu) {
        ctx->pc = 0x119240u;
        goto label_119240;
    }
    ctx->pc = 0x119238u;
    SET_GPR_U32(ctx, 31, 0x119240u);
    ctx->pc = 0x213FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x213FF0u, 0x119238u, 0x119240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119240u;
label_119240:
    // 0x119240: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x119240u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
label_119244:
    // 0x119244: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x119244u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_119248:
    // 0x119248: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x119248u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_11924c:
    // 0x11924c: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
label_119250:
    if (ctx->pc == 0x119250u) {
        ctx->pc = 0x119254u;
        goto label_119254;
    }
    ctx->pc = 0x11924Cu;
    {
        const bool branch_taken_0x11924c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x11924c) {
            ctx->pc = 0x119260u;
            goto label_119260;
        }
    }
    ctx->pc = 0x119254u;
label_119254:
    // 0x119254: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x119254u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_119258:
    // 0x119258: 0xc0ba070  jal         func_2E81C0
label_11925c:
    if (ctx->pc == 0x11925Cu) {
        ctx->pc = 0x119260u;
        goto label_119260;
    }
    ctx->pc = 0x119258u;
    SET_GPR_U32(ctx, 31, 0x119260u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x119258u, 0x119260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119260u;
label_119260:
    // 0x119260: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x119260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_119264:
    // 0x119264: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x119264u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_119268:
    // 0x119268: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x119268u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_11926c:
    // 0x11926c: 0x3e00008  jr          $ra
label_119270:
    if (ctx->pc == 0x119270u) {
        ctx->pc = 0x119274u;
        goto label_119274;
    }
    ctx->pc = 0x11926Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11926Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x119274u;
label_119274:
    // 0x119274: 0x0  nop
    ctx->pc = 0x119274u;
    // NOP
label_119278:
    // 0x119278: 0x0  nop
    ctx->pc = 0x119278u;
    // NOP
label_11927c:
    // 0x11927c: 0x0  nop
    ctx->pc = 0x11927cu;
    // NOP
label_119280:
    // 0x119280: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x119280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_119284:
    // 0x119284: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x119284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_119288:
    // 0x119288: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x119288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_11928c:
    // 0x11928c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x11928cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_119290:
    // 0x119290: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x119290u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_119294:
    // 0x119294: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x119294u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_119298:
    // 0x119298: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x119298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_11929c:
    // 0x11929c: 0xafa40060  sw          $a0, 0x60($sp)
    ctx->pc = 0x11929cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
label_1192a0:
    // 0x1192a0: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x1192a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_1192a4:
    // 0x1192a4: 0xc085020  jal         func_214080
label_1192a8:
    if (ctx->pc == 0x1192A8u) {
        ctx->pc = 0x1192ACu;
        goto label_1192ac;
    }
    ctx->pc = 0x1192A4u;
    SET_GPR_U32(ctx, 31, 0x1192ACu);
    ctx->pc = 0x214080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214080u, 0x1192A4u, 0x1192ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1192ACu;
label_1192ac:
    // 0x1192ac: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x1192acu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1192b0:
    // 0x1192b0: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x1192b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_1192b4:
    // 0x1192b4: 0xc119b68  jal         func_466DA0
label_1192b8:
    if (ctx->pc == 0x1192B8u) {
        ctx->pc = 0x1192BCu;
        goto label_1192bc;
    }
    ctx->pc = 0x1192B4u;
    SET_GPR_U32(ctx, 31, 0x1192BCu);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x1192B4u, 0x1192BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1192BCu;
label_1192bc:
    // 0x1192bc: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x1192bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_1192c0:
    // 0x1192c0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1192c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1192c4:
    // 0x1192c4: 0xc0400e0  jal         func_100380
label_1192c8:
    if (ctx->pc == 0x1192C8u) {
        ctx->pc = 0x1192CCu;
        goto label_1192cc;
    }
    ctx->pc = 0x1192C4u;
    SET_GPR_U32(ctx, 31, 0x1192CCu);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x1192C4u, 0x1192CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1192CCu;
label_1192cc:
    // 0x1192cc: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1192ccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1192d0:
    // 0x1192d0: 0x12800005  beqz        $s4, . + 4 + (0x5 << 2)
label_1192d4:
    if (ctx->pc == 0x1192D4u) {
        ctx->pc = 0x1192D8u;
        goto label_1192d8;
    }
    ctx->pc = 0x1192D0u;
    {
        const bool branch_taken_0x1192d0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x1192d0) {
            ctx->pc = 0x1192E8u;
            goto label_1192e8;
        }
    }
    ctx->pc = 0x1192D8u;
label_1192d8:
    // 0x1192d8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1192d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1192dc:
    // 0x1192dc: 0xc0461a8  jal         func_1186A0
label_1192e0:
    if (ctx->pc == 0x1192E0u) {
        ctx->pc = 0x1192E4u;
        goto label_1192e4;
    }
    ctx->pc = 0x1192DCu;
    SET_GPR_U32(ctx, 31, 0x1192E4u);
    ctx->pc = 0x1186A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1186A0u, 0x1192DCu, 0x1192E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1192E4u;
label_1192e4:
    // 0x1192e4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1192e4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1192e8:
    // 0x1192e8: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1192e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_1192ec:
    // 0x1192ec: 0xac540038  sw          $s4, 0x38($v0)
    ctx->pc = 0x1192ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 20));
label_1192f0:
    // 0x1192f0: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1192f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_1192f4:
    // 0x1192f4: 0x8c440038  lw          $a0, 0x38($v0)
    ctx->pc = 0x1192f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_1192f8:
    // 0x1192f8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1192f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1192fc:
    // 0x1192fc: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1192fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_119300:
    // 0x119300: 0x320f809  jalr        $t9
label_119304:
    if (ctx->pc == 0x119304u) {
        ctx->pc = 0x119308u;
        goto label_119308;
    }
    ctx->pc = 0x119300u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x119308u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119300u, 0x119308u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x119308u;
label_119308:
    // 0x119308: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x119308u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_11930c:
    // 0x11930c: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x11930cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_119310:
    // 0x119310: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x119310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_119314:
    // 0x119314: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x119314u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_119318:
    // 0x119318: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x119318u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_11931c:
    // 0x11931c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x11931cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_119320:
    // 0x119320: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x119320u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_119324:
    // 0x119324: 0x2404004c  addiu       $a0, $zero, 0x4C
    ctx->pc = 0x119324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
label_119328:
    // 0x119328: 0xc119b68  jal         func_466DA0
label_11932c:
    if (ctx->pc == 0x11932Cu) {
        ctx->pc = 0x119330u;
        goto label_119330;
    }
    ctx->pc = 0x119328u;
    SET_GPR_U32(ctx, 31, 0x119330u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x119328u, 0x119330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119330u;
label_119330:
    // 0x119330: 0x2404004c  addiu       $a0, $zero, 0x4C
    ctx->pc = 0x119330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
label_119334:
    // 0x119334: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x119334u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_119338:
    // 0x119338: 0xc0400e0  jal         func_100380
label_11933c:
    if (ctx->pc == 0x11933Cu) {
        ctx->pc = 0x119340u;
        goto label_119340;
    }
    ctx->pc = 0x119338u;
    SET_GPR_U32(ctx, 31, 0x119340u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x119338u, 0x119340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119340u;
label_119340:
    // 0x119340: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x119340u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_119344:
    // 0x119344: 0x12600005  beqz        $s3, . + 4 + (0x5 << 2)
label_119348:
    if (ctx->pc == 0x119348u) {
        ctx->pc = 0x11934Cu;
        goto label_11934c;
    }
    ctx->pc = 0x119344u;
    {
        const bool branch_taken_0x119344 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x119344) {
            ctx->pc = 0x11935Cu;
            goto label_11935c;
        }
    }
    ctx->pc = 0x11934Cu;
label_11934c:
    // 0x11934c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11934cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_119350:
    // 0x119350: 0xc05248c  jal         func_149230
label_119354:
    if (ctx->pc == 0x119354u) {
        ctx->pc = 0x119358u;
        goto label_119358;
    }
    ctx->pc = 0x119350u;
    SET_GPR_U32(ctx, 31, 0x119358u);
    ctx->pc = 0x149230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149230u, 0x119350u, 0x119358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119358u;
label_119358:
    // 0x119358: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x119358u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11935c:
    // 0x11935c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x11935cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_119360:
    // 0x119360: 0xac530044  sw          $s3, 0x44($v0)
    ctx->pc = 0x119360u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 19));
label_119364:
    // 0x119364: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x119364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_119368:
    // 0x119368: 0x8c440044  lw          $a0, 0x44($v0)
    ctx->pc = 0x119368u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_11936c:
    // 0x11936c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x11936cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_119370:
    // 0x119370: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x119370u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_119374:
    // 0x119374: 0x320f809  jalr        $t9
label_119378:
    if (ctx->pc == 0x119378u) {
        ctx->pc = 0x11937Cu;
        goto label_11937c;
    }
    ctx->pc = 0x119374u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x11937Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119374u, 0x11937Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11937Cu;
label_11937c:
    // 0x11937c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x11937cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_119380:
    // 0x119380: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x119380u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_119384:
    // 0x119384: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x119384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_119388:
    // 0x119388: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x119388u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_11938c:
    // 0x11938c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x11938cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_119390:
    // 0x119390: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x119390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_119394:
    // 0x119394: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x119394u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_119398:
    // 0x119398: 0x24040034  addiu       $a0, $zero, 0x34
    ctx->pc = 0x119398u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_11939c:
    // 0x11939c: 0xc119b68  jal         func_466DA0
label_1193a0:
    if (ctx->pc == 0x1193A0u) {
        ctx->pc = 0x1193A4u;
        goto label_1193a4;
    }
    ctx->pc = 0x11939Cu;
    SET_GPR_U32(ctx, 31, 0x1193A4u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x11939Cu, 0x1193A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1193A4u;
label_1193a4:
    // 0x1193a4: 0x24040034  addiu       $a0, $zero, 0x34
    ctx->pc = 0x1193a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_1193a8:
    // 0x1193a8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1193a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1193ac:
    // 0x1193ac: 0xc0400e0  jal         func_100380
label_1193b0:
    if (ctx->pc == 0x1193B0u) {
        ctx->pc = 0x1193B4u;
        goto label_1193b4;
    }
    ctx->pc = 0x1193ACu;
    SET_GPR_U32(ctx, 31, 0x1193B4u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x1193ACu, 0x1193B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1193B4u;
label_1193b4:
    // 0x1193b4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1193b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1193b8:
    // 0x1193b8: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
label_1193bc:
    if (ctx->pc == 0x1193BCu) {
        ctx->pc = 0x1193C0u;
        goto label_1193c0;
    }
    ctx->pc = 0x1193B8u;
    {
        const bool branch_taken_0x1193b8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1193b8) {
            ctx->pc = 0x1193D0u;
            goto label_1193d0;
        }
    }
    ctx->pc = 0x1193C0u;
label_1193c0:
    // 0x1193c0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1193c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1193c4:
    // 0x1193c4: 0xc054db8  jal         func_1536E0
label_1193c8:
    if (ctx->pc == 0x1193C8u) {
        ctx->pc = 0x1193CCu;
        goto label_1193cc;
    }
    ctx->pc = 0x1193C4u;
    SET_GPR_U32(ctx, 31, 0x1193CCu);
    ctx->pc = 0x1536E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1536E0u, 0x1193C4u, 0x1193CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1193CCu;
label_1193cc:
    // 0x1193cc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1193ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1193d0:
    // 0x1193d0: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1193d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_1193d4:
    // 0x1193d4: 0xac520048  sw          $s2, 0x48($v0)
    ctx->pc = 0x1193d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 18));
label_1193d8:
    // 0x1193d8: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1193d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_1193dc:
    // 0x1193dc: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x1193dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
label_1193e0:
    // 0x1193e0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1193e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1193e4:
    // 0x1193e4: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1193e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1193e8:
    // 0x1193e8: 0x320f809  jalr        $t9
label_1193ec:
    if (ctx->pc == 0x1193ECu) {
        ctx->pc = 0x1193F0u;
        goto label_1193f0;
    }
    ctx->pc = 0x1193E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1193F0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1193E8u, 0x1193F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1193F0u;
label_1193f0:
    // 0x1193f0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1193f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1193f4:
    // 0x1193f4: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x1193f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_1193f8:
    // 0x1193f8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1193f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_1193fc:
    // 0x1193fc: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1193fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_119400:
    // 0x119400: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x119400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_119404:
    // 0x119404: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x119404u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_119408:
    // 0x119408: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x119408u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_11940c:
    // 0x11940c: 0x24040048  addiu       $a0, $zero, 0x48
    ctx->pc = 0x11940cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
label_119410:
    // 0x119410: 0xc119b68  jal         func_466DA0
label_119414:
    if (ctx->pc == 0x119414u) {
        ctx->pc = 0x119418u;
        goto label_119418;
    }
    ctx->pc = 0x119410u;
    SET_GPR_U32(ctx, 31, 0x119418u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x119410u, 0x119418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119418u;
label_119418:
    // 0x119418: 0x24040048  addiu       $a0, $zero, 0x48
    ctx->pc = 0x119418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
label_11941c:
    // 0x11941c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11941cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_119420:
    // 0x119420: 0xc0400e0  jal         func_100380
label_119424:
    if (ctx->pc == 0x119424u) {
        ctx->pc = 0x119428u;
        goto label_119428;
    }
    ctx->pc = 0x119420u;
    SET_GPR_U32(ctx, 31, 0x119428u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x119420u, 0x119428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119428u;
label_119428:
    // 0x119428: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x119428u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11942c:
    // 0x11942c: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
label_119430:
    if (ctx->pc == 0x119430u) {
        ctx->pc = 0x119434u;
        goto label_119434;
    }
    ctx->pc = 0x11942Cu;
    {
        const bool branch_taken_0x11942c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x11942c) {
            ctx->pc = 0x119444u;
            goto label_119444;
        }
    }
    ctx->pc = 0x119434u;
label_119434:
    // 0x119434: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x119434u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_119438:
    // 0x119438: 0xc0470a4  jal         func_11C290
label_11943c:
    if (ctx->pc == 0x11943Cu) {
        ctx->pc = 0x119440u;
        goto label_119440;
    }
    ctx->pc = 0x119438u;
    SET_GPR_U32(ctx, 31, 0x119440u);
    ctx->pc = 0x11C290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11C290u, 0x119438u, 0x119440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119440u;
label_119440:
    // 0x119440: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x119440u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_119444:
    // 0x119444: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x119444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_119448:
    // 0x119448: 0xac510040  sw          $s1, 0x40($v0)
    ctx->pc = 0x119448u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 17));
label_11944c:
    // 0x11944c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x11944cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_119450:
    // 0x119450: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x119450u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_119454:
    // 0x119454: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x119454u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_119458:
    // 0x119458: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x119458u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_11945c:
    // 0x11945c: 0x320f809  jalr        $t9
label_119460:
    if (ctx->pc == 0x119460u) {
        ctx->pc = 0x119464u;
        goto label_119464;
    }
    ctx->pc = 0x11945Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x119464u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11945Cu, 0x119464u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x119464u;
label_119464:
    // 0x119464: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x119464u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_119468:
    // 0x119468: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x119468u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_11946c:
    // 0x11946c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x11946cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_119470:
    // 0x119470: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x119470u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_119474:
    // 0x119474: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x119474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_119478:
    // 0x119478: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x119478u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_11947c:
    // 0x11947c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x11947cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_119480:
    // 0x119480: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x119480u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_119484:
    // 0x119484: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x119484u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_119488:
    // 0x119488: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x119488u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_11948c:
    // 0x11948c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x11948cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_119490:
    // 0x119490: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x119490u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_119494:
    // 0x119494: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x119494u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_119498:
    // 0x119498: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x119498u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_11949c:
    // 0x11949c: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x11949cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1194a0:
    // 0x1194a0: 0x3e00008  jr          $ra
label_1194a4:
    if (ctx->pc == 0x1194A4u) {
        ctx->pc = 0x1194A8u;
        goto label_1194a8;
    }
    ctx->pc = 0x1194A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1194A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1194A8u;
label_1194a8:
    // 0x1194a8: 0x0  nop
    ctx->pc = 0x1194a8u;
    // NOP
label_1194ac:
    // 0x1194ac: 0x0  nop
    ctx->pc = 0x1194acu;
    // NOP
label_1194b0:
    // 0x1194b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1194b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1194b4:
    // 0x1194b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1194b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1194b8:
    // 0x1194b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1194b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1194bc:
    // 0x1194bc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1194bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
label_1194c0:
    // 0x1194c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1194c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1194c4:
    // 0x1194c4: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x1194c4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1194c8:
    // 0x1194c8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1194c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1194cc:
    // 0x1194cc: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x1194ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_1194d0:
    // 0x1194d0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1194d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1194d4:
    // 0x1194d4: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x1194d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_1194d8:
    // 0x1194d8: 0x320f809  jalr        $t9
label_1194dc:
    if (ctx->pc == 0x1194DCu) {
        ctx->pc = 0x1194E0u;
        goto label_1194e0;
    }
    ctx->pc = 0x1194D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1194E0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1194D8u, 0x1194E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1194E0u;
label_1194e0:
    // 0x1194e0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1194e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1194e4:
    // 0x1194e4: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x1194e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_1194e8:
    // 0x1194e8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1194e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_1194ec:
    // 0x1194ec: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1194ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1194f0:
    // 0x1194f0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1194f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1194f4:
    // 0x1194f4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1194f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1194f8:
    // 0x1194f8: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x1194f8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1194fc:
    // 0x1194fc: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1194fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_119500:
    // 0x119500: 0x8c420040  lw          $v0, 0x40($v0)
    ctx->pc = 0x119500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_119504:
    // 0x119504: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_119508:
    if (ctx->pc == 0x119508u) {
        ctx->pc = 0x11950Cu;
        goto label_11950c;
    }
    ctx->pc = 0x119504u;
    {
        const bool branch_taken_0x119504 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x119504) {
            ctx->pc = 0x119534u;
            goto label_119534;
        }
    }
    ctx->pc = 0x11950Cu;
label_11950c:
    // 0x11950c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x11950cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_119510:
    // 0x119510: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x119510u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_119514:
    // 0x119514: 0xc0465dc  jal         func_119770
label_119518:
    if (ctx->pc == 0x119518u) {
        ctx->pc = 0x11951Cu;
        goto label_11951c;
    }
    ctx->pc = 0x119514u;
    SET_GPR_U32(ctx, 31, 0x11951Cu);
    ctx->pc = 0x119770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119770u, 0x119514u, 0x11951Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11951Cu;
label_11951c:
    // 0x11951c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x11951cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_119520:
    // 0x119520: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x119520u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_119524:
    // 0x119524: 0xc119c5c  jal         func_467170
label_119528:
    if (ctx->pc == 0x119528u) {
        ctx->pc = 0x11952Cu;
        goto label_11952c;
    }
    ctx->pc = 0x119524u;
    SET_GPR_U32(ctx, 31, 0x11952Cu);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x119524u, 0x11952Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11952Cu;
label_11952c:
    // 0x11952c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x11952cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_119530:
    // 0x119530: 0xac400040  sw          $zero, 0x40($v0)
    ctx->pc = 0x119530u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
label_119534:
    // 0x119534: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x119534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_119538:
    // 0x119538: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x119538u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
label_11953c:
    // 0x11953c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x11953cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_119540:
    // 0x119540: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x119540u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_119544:
    // 0x119544: 0x320f809  jalr        $t9
label_119548:
    if (ctx->pc == 0x119548u) {
        ctx->pc = 0x11954Cu;
        goto label_11954c;
    }
    ctx->pc = 0x119544u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x11954Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119544u, 0x11954Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11954Cu;
label_11954c:
    // 0x11954c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x11954cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_119550:
    // 0x119550: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x119550u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_119554:
    // 0x119554: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x119554u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_119558:
    // 0x119558: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x119558u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_11955c:
    // 0x11955c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x11955cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_119560:
    // 0x119560: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x119560u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_119564:
    // 0x119564: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x119564u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_119568:
    // 0x119568: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x119568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_11956c:
    // 0x11956c: 0x8c420048  lw          $v0, 0x48($v0)
    ctx->pc = 0x11956cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
label_119570:
    // 0x119570: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_119574:
    if (ctx->pc == 0x119574u) {
        ctx->pc = 0x119578u;
        goto label_119578;
    }
    ctx->pc = 0x119570u;
    {
        const bool branch_taken_0x119570 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x119570) {
            ctx->pc = 0x1195A0u;
            goto label_1195a0;
        }
    }
    ctx->pc = 0x119578u;
label_119578:
    // 0x119578: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x119578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_11957c:
    // 0x11957c: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x11957cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
label_119580:
    // 0x119580: 0xc0465cc  jal         func_119730
label_119584:
    if (ctx->pc == 0x119584u) {
        ctx->pc = 0x119588u;
        goto label_119588;
    }
    ctx->pc = 0x119580u;
    SET_GPR_U32(ctx, 31, 0x119588u);
    ctx->pc = 0x119730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119730u, 0x119580u, 0x119588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119588u;
label_119588:
    // 0x119588: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x119588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_11958c:
    // 0x11958c: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x11958cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
label_119590:
    // 0x119590: 0xc119c5c  jal         func_467170
label_119594:
    if (ctx->pc == 0x119594u) {
        ctx->pc = 0x119598u;
        goto label_119598;
    }
    ctx->pc = 0x119590u;
    SET_GPR_U32(ctx, 31, 0x119598u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x119590u, 0x119598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119598u;
label_119598:
    // 0x119598: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x119598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_11959c:
    // 0x11959c: 0xac400048  sw          $zero, 0x48($v0)
    ctx->pc = 0x11959cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 0));
label_1195a0:
    // 0x1195a0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1195a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1195a4:
    // 0x1195a4: 0x8c440044  lw          $a0, 0x44($v0)
    ctx->pc = 0x1195a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_1195a8:
    // 0x1195a8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1195a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1195ac:
    // 0x1195ac: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x1195acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_1195b0:
    // 0x1195b0: 0x320f809  jalr        $t9
label_1195b4:
    if (ctx->pc == 0x1195B4u) {
        ctx->pc = 0x1195B8u;
        goto label_1195b8;
    }
    ctx->pc = 0x1195B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1195B8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1195B0u, 0x1195B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1195B8u;
label_1195b8:
    // 0x1195b8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1195b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1195bc:
    // 0x1195bc: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x1195bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_1195c0:
    // 0x1195c0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1195c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_1195c4:
    // 0x1195c4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1195c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1195c8:
    // 0x1195c8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1195c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1195cc:
    // 0x1195cc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1195ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1195d0:
    // 0x1195d0: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x1195d0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1195d4:
    // 0x1195d4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1195d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1195d8:
    // 0x1195d8: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x1195d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_1195dc:
    // 0x1195dc: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1195e0:
    if (ctx->pc == 0x1195E0u) {
        ctx->pc = 0x1195E4u;
        goto label_1195e4;
    }
    ctx->pc = 0x1195DCu;
    {
        const bool branch_taken_0x1195dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1195dc) {
            ctx->pc = 0x11960Cu;
            goto label_11960c;
        }
    }
    ctx->pc = 0x1195E4u;
label_1195e4:
    // 0x1195e4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1195e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1195e8:
    // 0x1195e8: 0x8c440044  lw          $a0, 0x44($v0)
    ctx->pc = 0x1195e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_1195ec:
    // 0x1195ec: 0xc0465bc  jal         func_1196F0
label_1195f0:
    if (ctx->pc == 0x1195F0u) {
        ctx->pc = 0x1195F4u;
        goto label_1195f4;
    }
    ctx->pc = 0x1195ECu;
    SET_GPR_U32(ctx, 31, 0x1195F4u);
    ctx->pc = 0x1196F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1196F0u, 0x1195ECu, 0x1195F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1195F4u;
label_1195f4:
    // 0x1195f4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1195f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1195f8:
    // 0x1195f8: 0x8c440044  lw          $a0, 0x44($v0)
    ctx->pc = 0x1195f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_1195fc:
    // 0x1195fc: 0xc119c5c  jal         func_467170
label_119600:
    if (ctx->pc == 0x119600u) {
        ctx->pc = 0x119604u;
        goto label_119604;
    }
    ctx->pc = 0x1195FCu;
    SET_GPR_U32(ctx, 31, 0x119604u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x1195FCu, 0x119604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119604u;
label_119604:
    // 0x119604: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x119604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_119608:
    // 0x119608: 0xac400044  sw          $zero, 0x44($v0)
    ctx->pc = 0x119608u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 0));
label_11960c:
    // 0x11960c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x11960cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_119610:
    // 0x119610: 0x8c440038  lw          $a0, 0x38($v0)
    ctx->pc = 0x119610u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_119614:
    // 0x119614: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x119614u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_119618:
    // 0x119618: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x119618u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_11961c:
    // 0x11961c: 0x320f809  jalr        $t9
label_119620:
    if (ctx->pc == 0x119620u) {
        ctx->pc = 0x119624u;
        goto label_119624;
    }
    ctx->pc = 0x11961Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x119624u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11961Cu, 0x119624u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x119624u;
label_119624:
    // 0x119624: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x119624u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_119628:
    // 0x119628: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x119628u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_11962c:
    // 0x11962c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x11962cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_119630:
    // 0x119630: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x119630u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_119634:
    // 0x119634: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x119634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_119638:
    // 0x119638: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x119638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_11963c:
    // 0x11963c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x11963cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_119640:
    // 0x119640: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x119640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_119644:
    // 0x119644: 0x8c420038  lw          $v0, 0x38($v0)
    ctx->pc = 0x119644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_119648:
    // 0x119648: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_11964c:
    if (ctx->pc == 0x11964Cu) {
        ctx->pc = 0x119650u;
        goto label_119650;
    }
    ctx->pc = 0x119648u;
    {
        const bool branch_taken_0x119648 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x119648) {
            ctx->pc = 0x119678u;
            goto label_119678;
        }
    }
    ctx->pc = 0x119650u;
label_119650:
    // 0x119650: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x119650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_119654:
    // 0x119654: 0x8c440038  lw          $a0, 0x38($v0)
    ctx->pc = 0x119654u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_119658:
    // 0x119658: 0xc0465b0  jal         func_1196C0
label_11965c:
    if (ctx->pc == 0x11965Cu) {
        ctx->pc = 0x119660u;
        goto label_119660;
    }
    ctx->pc = 0x119658u;
    SET_GPR_U32(ctx, 31, 0x119660u);
    ctx->pc = 0x1196C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1196C0u, 0x119658u, 0x119660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119660u;
label_119660:
    // 0x119660: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x119660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_119664:
    // 0x119664: 0x8c440038  lw          $a0, 0x38($v0)
    ctx->pc = 0x119664u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_119668:
    // 0x119668: 0xc119c5c  jal         func_467170
label_11966c:
    if (ctx->pc == 0x11966Cu) {
        ctx->pc = 0x119670u;
        goto label_119670;
    }
    ctx->pc = 0x119668u;
    SET_GPR_U32(ctx, 31, 0x119670u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x119668u, 0x119670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119670u;
label_119670:
    // 0x119670: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x119670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_119674:
    // 0x119674: 0xac400038  sw          $zero, 0x38($v0)
    ctx->pc = 0x119674u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 0));
label_119678:
    // 0x119678: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x119678u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_11967c:
    // 0x11967c: 0xc085204  jal         func_214810
label_119680:
    if (ctx->pc == 0x119680u) {
        ctx->pc = 0x119684u;
        goto label_119684;
    }
    ctx->pc = 0x11967Cu;
    SET_GPR_U32(ctx, 31, 0x119684u);
    ctx->pc = 0x214810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214810u, 0x11967Cu, 0x119684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119684u;
label_119684:
    // 0x119684: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x119684u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_119688:
    // 0x119688: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x119688u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_11968c:
    // 0x11968c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x11968cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_119690:
    // 0x119690: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x119690u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_119694:
    // 0x119694: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x119694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_119698:
    // 0x119698: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x119698u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_11969c:
    // 0x11969c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x11969cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1196a0:
    // 0x1196a0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1196a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1196a4:
    // 0x1196a4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1196a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1196a8:
    // 0x1196a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1196a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1196ac:
    // 0x1196ac: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1196acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1196b0:
    // 0x1196b0: 0x3e00008  jr          $ra
label_1196b4:
    if (ctx->pc == 0x1196B4u) {
        ctx->pc = 0x1196B8u;
        goto label_1196b8;
    }
    ctx->pc = 0x1196B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1196B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1196B8u;
label_1196b8:
    // 0x1196b8: 0x0  nop
    ctx->pc = 0x1196b8u;
    // NOP
label_1196bc:
    // 0x1196bc: 0x0  nop
    ctx->pc = 0x1196bcu;
    // NOP
    ctx->pc = 0x1196c0u;
}
