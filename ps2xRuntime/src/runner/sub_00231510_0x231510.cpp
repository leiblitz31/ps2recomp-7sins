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

// Function: sub_00231510
// Address: 0x231510 - 0x231930
void sub_00231510_0x231510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00231510_0x231510");
#endif

    switch (ctx->pc) {
        case 0x231510u: goto label_231510;
        case 0x231514u: goto label_231514;
        case 0x231518u: goto label_231518;
        case 0x23151cu: goto label_23151c;
        case 0x231520u: goto label_231520;
        case 0x231524u: goto label_231524;
        case 0x231528u: goto label_231528;
        case 0x23152cu: goto label_23152c;
        case 0x231530u: goto label_231530;
        case 0x231534u: goto label_231534;
        case 0x231538u: goto label_231538;
        case 0x23153cu: goto label_23153c;
        case 0x231540u: goto label_231540;
        case 0x231544u: goto label_231544;
        case 0x231548u: goto label_231548;
        case 0x23154cu: goto label_23154c;
        case 0x231550u: goto label_231550;
        case 0x231554u: goto label_231554;
        case 0x231558u: goto label_231558;
        case 0x23155cu: goto label_23155c;
        case 0x231560u: goto label_231560;
        case 0x231564u: goto label_231564;
        case 0x231568u: goto label_231568;
        case 0x23156cu: goto label_23156c;
        case 0x231570u: goto label_231570;
        case 0x231574u: goto label_231574;
        case 0x231578u: goto label_231578;
        case 0x23157cu: goto label_23157c;
        case 0x231580u: goto label_231580;
        case 0x231584u: goto label_231584;
        case 0x231588u: goto label_231588;
        case 0x23158cu: goto label_23158c;
        case 0x231590u: goto label_231590;
        case 0x231594u: goto label_231594;
        case 0x231598u: goto label_231598;
        case 0x23159cu: goto label_23159c;
        case 0x2315a0u: goto label_2315a0;
        case 0x2315a4u: goto label_2315a4;
        case 0x2315a8u: goto label_2315a8;
        case 0x2315acu: goto label_2315ac;
        case 0x2315b0u: goto label_2315b0;
        case 0x2315b4u: goto label_2315b4;
        case 0x2315b8u: goto label_2315b8;
        case 0x2315bcu: goto label_2315bc;
        case 0x2315c0u: goto label_2315c0;
        case 0x2315c4u: goto label_2315c4;
        case 0x2315c8u: goto label_2315c8;
        case 0x2315ccu: goto label_2315cc;
        case 0x2315d0u: goto label_2315d0;
        case 0x2315d4u: goto label_2315d4;
        case 0x2315d8u: goto label_2315d8;
        case 0x2315dcu: goto label_2315dc;
        case 0x2315e0u: goto label_2315e0;
        case 0x2315e4u: goto label_2315e4;
        case 0x2315e8u: goto label_2315e8;
        case 0x2315ecu: goto label_2315ec;
        case 0x2315f0u: goto label_2315f0;
        case 0x2315f4u: goto label_2315f4;
        case 0x2315f8u: goto label_2315f8;
        case 0x2315fcu: goto label_2315fc;
        case 0x231600u: goto label_231600;
        case 0x231604u: goto label_231604;
        case 0x231608u: goto label_231608;
        case 0x23160cu: goto label_23160c;
        case 0x231610u: goto label_231610;
        case 0x231614u: goto label_231614;
        case 0x231618u: goto label_231618;
        case 0x23161cu: goto label_23161c;
        case 0x231620u: goto label_231620;
        case 0x231624u: goto label_231624;
        case 0x231628u: goto label_231628;
        case 0x23162cu: goto label_23162c;
        case 0x231630u: goto label_231630;
        case 0x231634u: goto label_231634;
        case 0x231638u: goto label_231638;
        case 0x23163cu: goto label_23163c;
        case 0x231640u: goto label_231640;
        case 0x231644u: goto label_231644;
        case 0x231648u: goto label_231648;
        case 0x23164cu: goto label_23164c;
        case 0x231650u: goto label_231650;
        case 0x231654u: goto label_231654;
        case 0x231658u: goto label_231658;
        case 0x23165cu: goto label_23165c;
        case 0x231660u: goto label_231660;
        case 0x231664u: goto label_231664;
        case 0x231668u: goto label_231668;
        case 0x23166cu: goto label_23166c;
        case 0x231670u: goto label_231670;
        case 0x231674u: goto label_231674;
        case 0x231678u: goto label_231678;
        case 0x23167cu: goto label_23167c;
        case 0x231680u: goto label_231680;
        case 0x231684u: goto label_231684;
        case 0x231688u: goto label_231688;
        case 0x23168cu: goto label_23168c;
        case 0x231690u: goto label_231690;
        case 0x231694u: goto label_231694;
        case 0x231698u: goto label_231698;
        case 0x23169cu: goto label_23169c;
        case 0x2316a0u: goto label_2316a0;
        case 0x2316a4u: goto label_2316a4;
        case 0x2316a8u: goto label_2316a8;
        case 0x2316acu: goto label_2316ac;
        case 0x2316b0u: goto label_2316b0;
        case 0x2316b4u: goto label_2316b4;
        case 0x2316b8u: goto label_2316b8;
        case 0x2316bcu: goto label_2316bc;
        case 0x2316c0u: goto label_2316c0;
        case 0x2316c4u: goto label_2316c4;
        case 0x2316c8u: goto label_2316c8;
        case 0x2316ccu: goto label_2316cc;
        case 0x2316d0u: goto label_2316d0;
        case 0x2316d4u: goto label_2316d4;
        case 0x2316d8u: goto label_2316d8;
        case 0x2316dcu: goto label_2316dc;
        case 0x2316e0u: goto label_2316e0;
        case 0x2316e4u: goto label_2316e4;
        case 0x2316e8u: goto label_2316e8;
        case 0x2316ecu: goto label_2316ec;
        case 0x2316f0u: goto label_2316f0;
        case 0x2316f4u: goto label_2316f4;
        case 0x2316f8u: goto label_2316f8;
        case 0x2316fcu: goto label_2316fc;
        case 0x231700u: goto label_231700;
        case 0x231704u: goto label_231704;
        case 0x231708u: goto label_231708;
        case 0x23170cu: goto label_23170c;
        case 0x231710u: goto label_231710;
        case 0x231714u: goto label_231714;
        case 0x231718u: goto label_231718;
        case 0x23171cu: goto label_23171c;
        case 0x231720u: goto label_231720;
        case 0x231724u: goto label_231724;
        case 0x231728u: goto label_231728;
        case 0x23172cu: goto label_23172c;
        case 0x231730u: goto label_231730;
        case 0x231734u: goto label_231734;
        case 0x231738u: goto label_231738;
        case 0x23173cu: goto label_23173c;
        case 0x231740u: goto label_231740;
        case 0x231744u: goto label_231744;
        case 0x231748u: goto label_231748;
        case 0x23174cu: goto label_23174c;
        case 0x231750u: goto label_231750;
        case 0x231754u: goto label_231754;
        case 0x231758u: goto label_231758;
        case 0x23175cu: goto label_23175c;
        case 0x231760u: goto label_231760;
        case 0x231764u: goto label_231764;
        case 0x231768u: goto label_231768;
        case 0x23176cu: goto label_23176c;
        case 0x231770u: goto label_231770;
        case 0x231774u: goto label_231774;
        case 0x231778u: goto label_231778;
        case 0x23177cu: goto label_23177c;
        case 0x231780u: goto label_231780;
        case 0x231784u: goto label_231784;
        case 0x231788u: goto label_231788;
        case 0x23178cu: goto label_23178c;
        case 0x231790u: goto label_231790;
        case 0x231794u: goto label_231794;
        case 0x231798u: goto label_231798;
        case 0x23179cu: goto label_23179c;
        case 0x2317a0u: goto label_2317a0;
        case 0x2317a4u: goto label_2317a4;
        case 0x2317a8u: goto label_2317a8;
        case 0x2317acu: goto label_2317ac;
        case 0x2317b0u: goto label_2317b0;
        case 0x2317b4u: goto label_2317b4;
        case 0x2317b8u: goto label_2317b8;
        case 0x2317bcu: goto label_2317bc;
        case 0x2317c0u: goto label_2317c0;
        case 0x2317c4u: goto label_2317c4;
        case 0x2317c8u: goto label_2317c8;
        case 0x2317ccu: goto label_2317cc;
        case 0x2317d0u: goto label_2317d0;
        case 0x2317d4u: goto label_2317d4;
        case 0x2317d8u: goto label_2317d8;
        case 0x2317dcu: goto label_2317dc;
        case 0x2317e0u: goto label_2317e0;
        case 0x2317e4u: goto label_2317e4;
        case 0x2317e8u: goto label_2317e8;
        case 0x2317ecu: goto label_2317ec;
        case 0x2317f0u: goto label_2317f0;
        case 0x2317f4u: goto label_2317f4;
        case 0x2317f8u: goto label_2317f8;
        case 0x2317fcu: goto label_2317fc;
        case 0x231800u: goto label_231800;
        case 0x231804u: goto label_231804;
        case 0x231808u: goto label_231808;
        case 0x23180cu: goto label_23180c;
        case 0x231810u: goto label_231810;
        case 0x231814u: goto label_231814;
        case 0x231818u: goto label_231818;
        case 0x23181cu: goto label_23181c;
        case 0x231820u: goto label_231820;
        case 0x231824u: goto label_231824;
        case 0x231828u: goto label_231828;
        case 0x23182cu: goto label_23182c;
        case 0x231830u: goto label_231830;
        case 0x231834u: goto label_231834;
        case 0x231838u: goto label_231838;
        case 0x23183cu: goto label_23183c;
        case 0x231840u: goto label_231840;
        case 0x231844u: goto label_231844;
        case 0x231848u: goto label_231848;
        case 0x23184cu: goto label_23184c;
        case 0x231850u: goto label_231850;
        case 0x231854u: goto label_231854;
        case 0x231858u: goto label_231858;
        case 0x23185cu: goto label_23185c;
        case 0x231860u: goto label_231860;
        case 0x231864u: goto label_231864;
        case 0x231868u: goto label_231868;
        case 0x23186cu: goto label_23186c;
        case 0x231870u: goto label_231870;
        case 0x231874u: goto label_231874;
        case 0x231878u: goto label_231878;
        case 0x23187cu: goto label_23187c;
        case 0x231880u: goto label_231880;
        case 0x231884u: goto label_231884;
        case 0x231888u: goto label_231888;
        case 0x23188cu: goto label_23188c;
        case 0x231890u: goto label_231890;
        case 0x231894u: goto label_231894;
        case 0x231898u: goto label_231898;
        case 0x23189cu: goto label_23189c;
        case 0x2318a0u: goto label_2318a0;
        case 0x2318a4u: goto label_2318a4;
        case 0x2318a8u: goto label_2318a8;
        case 0x2318acu: goto label_2318ac;
        case 0x2318b0u: goto label_2318b0;
        case 0x2318b4u: goto label_2318b4;
        case 0x2318b8u: goto label_2318b8;
        case 0x2318bcu: goto label_2318bc;
        case 0x2318c0u: goto label_2318c0;
        case 0x2318c4u: goto label_2318c4;
        case 0x2318c8u: goto label_2318c8;
        case 0x2318ccu: goto label_2318cc;
        case 0x2318d0u: goto label_2318d0;
        case 0x2318d4u: goto label_2318d4;
        case 0x2318d8u: goto label_2318d8;
        case 0x2318dcu: goto label_2318dc;
        case 0x2318e0u: goto label_2318e0;
        case 0x2318e4u: goto label_2318e4;
        case 0x2318e8u: goto label_2318e8;
        case 0x2318ecu: goto label_2318ec;
        case 0x2318f0u: goto label_2318f0;
        case 0x2318f4u: goto label_2318f4;
        case 0x2318f8u: goto label_2318f8;
        case 0x2318fcu: goto label_2318fc;
        case 0x231900u: goto label_231900;
        case 0x231904u: goto label_231904;
        case 0x231908u: goto label_231908;
        case 0x23190cu: goto label_23190c;
        case 0x231910u: goto label_231910;
        case 0x231914u: goto label_231914;
        case 0x231918u: goto label_231918;
        case 0x23191cu: goto label_23191c;
        case 0x231920u: goto label_231920;
        case 0x231924u: goto label_231924;
        case 0x231928u: goto label_231928;
        case 0x23192cu: goto label_23192c;
        default: break;
    }

    ctx->pc = 0x231510u;

label_231510:
    // 0x231510: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x231510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_231514:
    // 0x231514: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x231514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_231518:
    // 0x231518: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x231518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_23151c:
    // 0x23151c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x23151cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_231520:
    // 0x231520: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x231520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_231524:
    // 0x231524: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x231524u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_231528:
    // 0x231528: 0xafa40080  sw          $a0, 0x80($sp)
    ctx->pc = 0x231528u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 4));
label_23152c:
    // 0x23152c: 0xafa50090  sw          $a1, 0x90($sp)
    ctx->pc = 0x23152cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 5));
label_231530:
    // 0x231530: 0xe7ac00a0  swc1        $f12, 0xA0($sp)
    ctx->pc = 0x231530u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_231534:
    // 0x231534: 0xe7ad00b0  swc1        $f13, 0xB0($sp)
    ctx->pc = 0x231534u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_231538:
    // 0x231538: 0xafa600c0  sw          $a2, 0xC0($sp)
    ctx->pc = 0x231538u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 6));
label_23153c:
    // 0x23153c: 0xafa700d0  sw          $a3, 0xD0($sp)
    ctx->pc = 0x23153cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 7));
label_231540:
    // 0x231540: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x231540u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_231544:
    // 0x231544: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x231544u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_231548:
    // 0x231548: 0xc08c200  jal         func_230800
label_23154c:
    if (ctx->pc == 0x23154Cu) {
        ctx->pc = 0x231550u;
        goto label_231550;
    }
    ctx->pc = 0x231548u;
    SET_GPR_U32(ctx, 31, 0x231550u);
    ctx->pc = 0x230800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230800u, 0x231548u, 0x231550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231550u;
label_231550:
    // 0x231550: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_231554:
    if (ctx->pc == 0x231554u) {
        ctx->pc = 0x231558u;
        goto label_231558;
    }
    ctx->pc = 0x231550u;
    {
        const bool branch_taken_0x231550 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x231550) {
            ctx->pc = 0x231564u;
            goto label_231564;
        }
    }
    ctx->pc = 0x231558u;
label_231558:
    // 0x231558: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x231558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_23155c:
    // 0x23155c: 0x100000e9  b           . + 4 + (0xE9 << 2)
label_231560:
    if (ctx->pc == 0x231560u) {
        ctx->pc = 0x231564u;
        goto label_231564;
    }
    ctx->pc = 0x23155Cu;
    {
        const bool branch_taken_0x23155c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23155c) {
            ctx->pc = 0x231904u;
            goto label_231904;
        }
    }
    ctx->pc = 0x231564u;
label_231564:
    // 0x231564: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x231564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_231568:
    // 0x231568: 0x3043f000  andi        $v1, $v0, 0xF000
    ctx->pc = 0x231568u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)61440);
label_23156c:
    // 0x23156c: 0x24022000  addiu       $v0, $zero, 0x2000
    ctx->pc = 0x23156cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
label_231570:
    // 0x231570: 0x10620071  beq         $v1, $v0, . + 4 + (0x71 << 2)
label_231574:
    if (ctx->pc == 0x231574u) {
        ctx->pc = 0x231578u;
        goto label_231578;
    }
    ctx->pc = 0x231570u;
    {
        const bool branch_taken_0x231570 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x231570) {
            ctx->pc = 0x231738u;
            goto label_231738;
        }
    }
    ctx->pc = 0x231578u;
label_231578:
    // 0x231578: 0x24021000  addiu       $v0, $zero, 0x1000
    ctx->pc = 0x231578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
label_23157c:
    // 0x23157c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_231580:
    if (ctx->pc == 0x231580u) {
        ctx->pc = 0x231584u;
        goto label_231584;
    }
    ctx->pc = 0x23157Cu;
    {
        const bool branch_taken_0x23157c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x23157c) {
            ctx->pc = 0x23158Cu;
            goto label_23158c;
        }
    }
    ctx->pc = 0x231584u;
label_231584:
    // 0x231584: 0x100000de  b           . + 4 + (0xDE << 2)
label_231588:
    if (ctx->pc == 0x231588u) {
        ctx->pc = 0x23158Cu;
        goto label_23158c;
    }
    ctx->pc = 0x231584u;
    {
        const bool branch_taken_0x231584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x231584) {
            ctx->pc = 0x231900u;
            goto label_231900;
        }
    }
    ctx->pc = 0x23158Cu;
label_23158c:
    // 0x23158c: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x23158cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_231590:
    // 0x231590: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x231590u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_231594:
    // 0x231594: 0x27a60078  addiu       $a2, $sp, 0x78
    ctx->pc = 0x231594u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
label_231598:
    // 0x231598: 0xc08c688  jal         func_231A20
label_23159c:
    if (ctx->pc == 0x23159Cu) {
        ctx->pc = 0x2315A0u;
        goto label_2315a0;
    }
    ctx->pc = 0x231598u;
    SET_GPR_U32(ctx, 31, 0x2315A0u);
    ctx->pc = 0x231A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A20u, 0x231598u, 0x2315A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2315A0u;
label_2315a0:
    // 0x2315a0: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x2315a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_2315a4:
    // 0x2315a4: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x2315a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_2315a8:
    // 0x2315a8: 0x2445f000  addiu       $a1, $v0, -0x1000
    ctx->pc = 0x2315a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963200));
label_2315ac:
    // 0x2315ac: 0x24640028  addiu       $a0, $v1, 0x28
    ctx->pc = 0x2315acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
label_2315b0:
    // 0x2315b0: 0xc08c248  jal         func_230920
label_2315b4:
    if (ctx->pc == 0x2315B4u) {
        ctx->pc = 0x2315B8u;
        goto label_2315b8;
    }
    ctx->pc = 0x2315B0u;
    SET_GPR_U32(ctx, 31, 0x2315B8u);
    ctx->pc = 0x230920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230920u, 0x2315B0u, 0x2315B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2315B8u;
label_2315b8:
    // 0x2315b8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2315b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2315bc:
    // 0x2315bc: 0xc7ac00a0  lwc1        $f12, 0xA0($sp)
    ctx->pc = 0x2315bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2315c0:
    // 0x2315c0: 0xc7ad00b0  lwc1        $f13, 0xB0($sp)
    ctx->pc = 0x2315c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_2315c4:
    // 0x2315c4: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x2315c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_2315c8:
    // 0x2315c8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2315c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2315cc:
    // 0x2315cc: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x2315ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_2315d0:
    // 0x2315d0: 0x320f809  jalr        $t9
label_2315d4:
    if (ctx->pc == 0x2315D4u) {
        ctx->pc = 0x2315D8u;
        goto label_2315d8;
    }
    ctx->pc = 0x2315D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2315D8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2315D0u, 0x2315D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2315D8u;
label_2315d8:
    // 0x2315d8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2315d8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2315dc:
    // 0x2315dc: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x2315dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_2315e0:
    // 0x2315e0: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x2315e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_2315e4:
    // 0x2315e4: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x2315e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2315e8:
    // 0x2315e8: 0xc08c688  jal         func_231A20
label_2315ec:
    if (ctx->pc == 0x2315ECu) {
        ctx->pc = 0x2315F0u;
        goto label_2315f0;
    }
    ctx->pc = 0x2315E8u;
    SET_GPR_U32(ctx, 31, 0x2315F0u);
    ctx->pc = 0x231A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A20u, 0x2315E8u, 0x2315F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2315F0u;
label_2315f0:
    // 0x2315f0: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x2315f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_2315f4:
    // 0x2315f4: 0x1040004d  beqz        $v0, . + 4 + (0x4D << 2)
label_2315f8:
    if (ctx->pc == 0x2315F8u) {
        ctx->pc = 0x2315FCu;
        goto label_2315fc;
    }
    ctx->pc = 0x2315F4u;
    {
        const bool branch_taken_0x2315f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2315f4) {
            ctx->pc = 0x23172Cu;
            goto label_23172c;
        }
    }
    ctx->pc = 0x2315FCu;
label_2315fc:
    // 0x2315fc: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x2315fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_231600:
    // 0x231600: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x231600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_231604:
    // 0x231604: 0x2445f000  addiu       $a1, $v0, -0x1000
    ctx->pc = 0x231604u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963200));
label_231608:
    // 0x231608: 0x24640028  addiu       $a0, $v1, 0x28
    ctx->pc = 0x231608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
label_23160c:
    // 0x23160c: 0xc08c248  jal         func_230920
label_231610:
    if (ctx->pc == 0x231610u) {
        ctx->pc = 0x231614u;
        goto label_231614;
    }
    ctx->pc = 0x23160Cu;
    SET_GPR_U32(ctx, 31, 0x231614u);
    ctx->pc = 0x230920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230920u, 0x23160Cu, 0x231614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231614u;
label_231614:
    // 0x231614: 0x8c510004  lw          $s1, 0x4($v0)
    ctx->pc = 0x231614u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_231618:
    // 0x231618: 0x27a40068  addiu       $a0, $sp, 0x68
    ctx->pc = 0x231618u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
label_23161c:
    // 0x23161c: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x23161cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_231620:
    // 0x231620: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
label_231624:
    if (ctx->pc == 0x231624u) {
        ctx->pc = 0x231628u;
        goto label_231628;
    }
    ctx->pc = 0x231620u;
    {
        const bool branch_taken_0x231620 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x231620) {
            ctx->pc = 0x231648u;
            goto label_231648;
        }
    }
    ctx->pc = 0x231628u;
label_231628:
    // 0x231628: 0x801021  addu        $v0, $a0, $zero
    ctx->pc = 0x231628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 0)));
label_23162c:
    // 0x23162c: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x23162cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
label_231630:
    // 0x231630: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x231630u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_231634:
    // 0x231634: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x231634u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_231638:
    // 0x231638: 0x0  nop
    ctx->pc = 0x231638u;
    // NOP
label_23163c:
    // 0x23163c: 0x0  nop
    ctx->pc = 0x23163cu;
    // NOP
label_231640:
    // 0x231640: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_231644:
    if (ctx->pc == 0x231644u) {
        ctx->pc = 0x231648u;
        goto label_231648;
    }
    ctx->pc = 0x231640u;
    {
        const bool branch_taken_0x231640 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x231640) {
            ctx->pc = 0x23162Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23162c;
        }
    }
    ctx->pc = 0x231648u;
label_231648:
    // 0x231648: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x231648u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_23164c:
    // 0x23164c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_231650:
    if (ctx->pc == 0x231650u) {
        ctx->pc = 0x231654u;
        goto label_231654;
    }
    ctx->pc = 0x23164Cu;
    {
        const bool branch_taken_0x23164c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23164c) {
            ctx->pc = 0x23166Cu;
            goto label_23166c;
        }
    }
    ctx->pc = 0x231654u;
label_231654:
    // 0x231654: 0xc7a10078  lwc1        $f1, 0x78($sp)
    ctx->pc = 0x231654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_231658:
    // 0x231658: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x231658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23165c:
    // 0x23165c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x23165cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_231660:
    // 0x231660: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x231660u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_231664:
    // 0x231664: 0x1000000c  b           . + 4 + (0xC << 2)
label_231668:
    if (ctx->pc == 0x231668u) {
        ctx->pc = 0x23166Cu;
        goto label_23166c;
    }
    ctx->pc = 0x231664u;
    {
        const bool branch_taken_0x231664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x231664) {
            ctx->pc = 0x231698u;
            goto label_231698;
        }
    }
    ctx->pc = 0x23166Cu;
label_23166c:
    // 0x23166c: 0x32220004  andi        $v0, $s1, 0x4
    ctx->pc = 0x23166cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)4);
label_231670:
    // 0x231670: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_231674:
    if (ctx->pc == 0x231674u) {
        ctx->pc = 0x231678u;
        goto label_231678;
    }
    ctx->pc = 0x231670u;
    {
        const bool branch_taken_0x231670 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x231670) {
            ctx->pc = 0x231698u;
            goto label_231698;
        }
    }
    ctx->pc = 0x231678u;
label_231678:
    // 0x231678: 0xc7a10078  lwc1        $f1, 0x78($sp)
    ctx->pc = 0x231678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_23167c:
    // 0x23167c: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x23167cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_231680:
    // 0x231680: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x231680u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_231684:
    // 0x231684: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x231684u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_231688:
    // 0x231688: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x231688u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23168c:
    // 0x23168c: 0x0  nop
    ctx->pc = 0x23168cu;
    // NOP
label_231690:
    // 0x231690: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x231690u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_231694:
    // 0x231694: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x231694u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_231698:
    // 0x231698: 0x32220002  andi        $v0, $s1, 0x2
    ctx->pc = 0x231698u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)2);
label_23169c:
    // 0x23169c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_2316a0:
    if (ctx->pc == 0x2316A0u) {
        ctx->pc = 0x2316A4u;
        goto label_2316a4;
    }
    ctx->pc = 0x23169Cu;
    {
        const bool branch_taken_0x23169c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23169c) {
            ctx->pc = 0x2316BCu;
            goto label_2316bc;
        }
    }
    ctx->pc = 0x2316A4u;
label_2316a4:
    // 0x2316a4: 0xc7a1007c  lwc1        $f1, 0x7C($sp)
    ctx->pc = 0x2316a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2316a8:
    // 0x2316a8: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x2316a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2316ac:
    // 0x2316ac: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2316acu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2316b0:
    // 0x2316b0: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x2316b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
label_2316b4:
    // 0x2316b4: 0x1000000c  b           . + 4 + (0xC << 2)
label_2316b8:
    if (ctx->pc == 0x2316B8u) {
        ctx->pc = 0x2316BCu;
        goto label_2316bc;
    }
    ctx->pc = 0x2316B4u;
    {
        const bool branch_taken_0x2316b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2316b4) {
            ctx->pc = 0x2316E8u;
            goto label_2316e8;
        }
    }
    ctx->pc = 0x2316BCu;
label_2316bc:
    // 0x2316bc: 0x32220008  andi        $v0, $s1, 0x8
    ctx->pc = 0x2316bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)8);
label_2316c0:
    // 0x2316c0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_2316c4:
    if (ctx->pc == 0x2316C4u) {
        ctx->pc = 0x2316C8u;
        goto label_2316c8;
    }
    ctx->pc = 0x2316C0u;
    {
        const bool branch_taken_0x2316c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2316c0) {
            ctx->pc = 0x2316E8u;
            goto label_2316e8;
        }
    }
    ctx->pc = 0x2316C8u;
label_2316c8:
    // 0x2316c8: 0xc7a1007c  lwc1        $f1, 0x7C($sp)
    ctx->pc = 0x2316c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2316cc:
    // 0x2316cc: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x2316ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2316d0:
    // 0x2316d0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2316d0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2316d4:
    // 0x2316d4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2316d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_2316d8:
    // 0x2316d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2316d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2316dc:
    // 0x2316dc: 0x0  nop
    ctx->pc = 0x2316dcu;
    // NOP
label_2316e0:
    // 0x2316e0: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x2316e0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_2316e4:
    // 0x2316e4: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x2316e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
label_2316e8:
    // 0x2316e8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2316e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2316ec:
    // 0x2316ec: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x2316ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2316f0:
    // 0x2316f0: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2316f0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2316f4:
    // 0x2316f4: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_2316f8:
    if (ctx->pc == 0x2316F8u) {
        ctx->pc = 0x2316FCu;
        goto label_2316fc;
    }
    ctx->pc = 0x2316F4u;
    {
        const bool branch_taken_0x2316f4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2316f4) {
            ctx->pc = 0x231710u;
            goto label_231710;
        }
    }
    ctx->pc = 0x2316FCu;
label_2316fc:
    // 0x2316fc: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2316fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_231700:
    // 0x231700: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x231700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_231704:
    // 0x231704: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x231704u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_231708:
    // 0x231708: 0x45010008  bc1t        . + 4 + (0x8 << 2)
label_23170c:
    if (ctx->pc == 0x23170Cu) {
        ctx->pc = 0x231710u;
        goto label_231710;
    }
    ctx->pc = 0x231708u;
    {
        const bool branch_taken_0x231708 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x231708) {
            ctx->pc = 0x23172Cu;
            goto label_23172c;
        }
    }
    ctx->pc = 0x231710u;
label_231710:
    // 0x231710: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x231710u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_231714:
    // 0x231714: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x231714u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_231718:
    // 0x231718: 0xc7ac0068  lwc1        $f12, 0x68($sp)
    ctx->pc = 0x231718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_23171c:
    // 0x23171c: 0xc7ad006c  lwc1        $f13, 0x6C($sp)
    ctx->pc = 0x23171cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_231720:
    // 0x231720: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x231720u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_231724:
    // 0x231724: 0xc08c208  jal         func_230820
label_231728:
    if (ctx->pc == 0x231728u) {
        ctx->pc = 0x23172Cu;
        goto label_23172c;
    }
    ctx->pc = 0x231724u;
    SET_GPR_U32(ctx, 31, 0x23172Cu);
    ctx->pc = 0x230820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230820u, 0x231724u, 0x23172Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23172Cu;
label_23172c:
    // 0x23172c: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x23172cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_231730:
    // 0x231730: 0x10000074  b           . + 4 + (0x74 << 2)
label_231734:
    if (ctx->pc == 0x231734u) {
        ctx->pc = 0x231738u;
        goto label_231738;
    }
    ctx->pc = 0x231730u;
    {
        const bool branch_taken_0x231730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x231730) {
            ctx->pc = 0x231904u;
            goto label_231904;
        }
    }
    ctx->pc = 0x231738u;
label_231738:
    // 0x231738: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x231738u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_23173c:
    // 0x23173c: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x23173cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_231740:
    // 0x231740: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x231740u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_231744:
    // 0x231744: 0xc08c688  jal         func_231A20
label_231748:
    if (ctx->pc == 0x231748u) {
        ctx->pc = 0x23174Cu;
        goto label_23174c;
    }
    ctx->pc = 0x231744u;
    SET_GPR_U32(ctx, 31, 0x23174Cu);
    ctx->pc = 0x231A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A20u, 0x231744u, 0x23174Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23174Cu;
label_23174c:
    // 0x23174c: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x23174cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_231750:
    // 0x231750: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x231750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_231754:
    // 0x231754: 0x2445e000  addiu       $a1, $v0, -0x2000
    ctx->pc = 0x231754u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959104));
label_231758:
    // 0x231758: 0x24640034  addiu       $a0, $v1, 0x34
    ctx->pc = 0x231758u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 52));
label_23175c:
    // 0x23175c: 0xc08c1f0  jal         func_2307C0
label_231760:
    if (ctx->pc == 0x231760u) {
        ctx->pc = 0x231764u;
        goto label_231764;
    }
    ctx->pc = 0x23175Cu;
    SET_GPR_U32(ctx, 31, 0x231764u);
    ctx->pc = 0x2307C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2307C0u, 0x23175Cu, 0x231764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231764u;
label_231764:
    // 0x231764: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x231764u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_231768:
    // 0x231768: 0xc7ac00a0  lwc1        $f12, 0xA0($sp)
    ctx->pc = 0x231768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_23176c:
    // 0x23176c: 0xc7ad00b0  lwc1        $f13, 0xB0($sp)
    ctx->pc = 0x23176cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_231770:
    // 0x231770: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x231770u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_231774:
    // 0x231774: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x231774u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_231778:
    // 0x231778: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x231778u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_23177c:
    // 0x23177c: 0x320f809  jalr        $t9
label_231780:
    if (ctx->pc == 0x231780u) {
        ctx->pc = 0x231784u;
        goto label_231784;
    }
    ctx->pc = 0x23177Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x231784u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23177Cu, 0x231784u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x231784u;
label_231784:
    // 0x231784: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x231784u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_231788:
    // 0x231788: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x231788u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_23178c:
    // 0x23178c: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x23178cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_231790:
    // 0x231790: 0x27a60058  addiu       $a2, $sp, 0x58
    ctx->pc = 0x231790u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
label_231794:
    // 0x231794: 0xc08c688  jal         func_231A20
label_231798:
    if (ctx->pc == 0x231798u) {
        ctx->pc = 0x23179Cu;
        goto label_23179c;
    }
    ctx->pc = 0x231794u;
    SET_GPR_U32(ctx, 31, 0x23179Cu);
    ctx->pc = 0x231A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A20u, 0x231794u, 0x23179Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23179Cu;
label_23179c:
    // 0x23179c: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x23179cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_2317a0:
    // 0x2317a0: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x2317a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_2317a4:
    // 0x2317a4: 0x2445e000  addiu       $a1, $v0, -0x2000
    ctx->pc = 0x2317a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959104));
label_2317a8:
    // 0x2317a8: 0x24640034  addiu       $a0, $v1, 0x34
    ctx->pc = 0x2317a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 52));
label_2317ac:
    // 0x2317ac: 0xc08c1f0  jal         func_2307C0
label_2317b0:
    if (ctx->pc == 0x2317B0u) {
        ctx->pc = 0x2317B4u;
        goto label_2317b4;
    }
    ctx->pc = 0x2317ACu;
    SET_GPR_U32(ctx, 31, 0x2317B4u);
    ctx->pc = 0x2307C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2307C0u, 0x2317ACu, 0x2317B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2317B4u;
label_2317b4:
    // 0x2317b4: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x2317b4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2317b8:
    // 0x2317b8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2317b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2317bc:
    // 0x2317bc: 0x0  nop
    ctx->pc = 0x2317bcu;
    // NOP
label_2317c0:
    // 0x2317c0: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x2317c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_2317c4:
    // 0x2317c4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2317c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2317c8:
    // 0x2317c8: 0x0  nop
    ctx->pc = 0x2317c8u;
    // NOP
label_2317cc:
    // 0x2317cc: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x2317ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_2317d0:
    // 0x2317d0: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x2317d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
label_2317d4:
    // 0x2317d4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_2317d8:
    if (ctx->pc == 0x2317D8u) {
        ctx->pc = 0x2317DCu;
        goto label_2317dc;
    }
    ctx->pc = 0x2317D4u;
    {
        const bool branch_taken_0x2317d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2317d4) {
            ctx->pc = 0x2317F4u;
            goto label_2317f4;
        }
    }
    ctx->pc = 0x2317DCu;
label_2317dc:
    // 0x2317dc: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x2317dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2317e0:
    // 0x2317e0: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x2317e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2317e4:
    // 0x2317e4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2317e4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2317e8:
    // 0x2317e8: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x2317e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_2317ec:
    // 0x2317ec: 0x1000000c  b           . + 4 + (0xC << 2)
label_2317f0:
    if (ctx->pc == 0x2317F0u) {
        ctx->pc = 0x2317F4u;
        goto label_2317f4;
    }
    ctx->pc = 0x2317ECu;
    {
        const bool branch_taken_0x2317ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2317ec) {
            ctx->pc = 0x231820u;
            goto label_231820;
        }
    }
    ctx->pc = 0x2317F4u;
label_2317f4:
    // 0x2317f4: 0x32020004  andi        $v0, $s0, 0x4
    ctx->pc = 0x2317f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4);
label_2317f8:
    // 0x2317f8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_2317fc:
    if (ctx->pc == 0x2317FCu) {
        ctx->pc = 0x231800u;
        goto label_231800;
    }
    ctx->pc = 0x2317F8u;
    {
        const bool branch_taken_0x2317f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2317f8) {
            ctx->pc = 0x231820u;
            goto label_231820;
        }
    }
    ctx->pc = 0x231800u;
label_231800:
    // 0x231800: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x231800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_231804:
    // 0x231804: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x231804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_231808:
    // 0x231808: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x231808u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_23180c:
    // 0x23180c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x23180cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_231810:
    // 0x231810: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x231810u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_231814:
    // 0x231814: 0x0  nop
    ctx->pc = 0x231814u;
    // NOP
label_231818:
    // 0x231818: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x231818u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_23181c:
    // 0x23181c: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x23181cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_231820:
    // 0x231820: 0x32020002  andi        $v0, $s0, 0x2
    ctx->pc = 0x231820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2);
label_231824:
    // 0x231824: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_231828:
    if (ctx->pc == 0x231828u) {
        ctx->pc = 0x23182Cu;
        goto label_23182c;
    }
    ctx->pc = 0x231824u;
    {
        const bool branch_taken_0x231824 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x231824) {
            ctx->pc = 0x231844u;
            goto label_231844;
        }
    }
    ctx->pc = 0x23182Cu;
label_23182c:
    // 0x23182c: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x23182cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_231830:
    // 0x231830: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x231830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_231834:
    // 0x231834: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x231834u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_231838:
    // 0x231838: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x231838u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_23183c:
    // 0x23183c: 0x1000000c  b           . + 4 + (0xC << 2)
label_231840:
    if (ctx->pc == 0x231840u) {
        ctx->pc = 0x231844u;
        goto label_231844;
    }
    ctx->pc = 0x23183Cu;
    {
        const bool branch_taken_0x23183c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23183c) {
            ctx->pc = 0x231870u;
            goto label_231870;
        }
    }
    ctx->pc = 0x231844u;
label_231844:
    // 0x231844: 0x32020008  andi        $v0, $s0, 0x8
    ctx->pc = 0x231844u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)8);
label_231848:
    // 0x231848: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_23184c:
    if (ctx->pc == 0x23184Cu) {
        ctx->pc = 0x231850u;
        goto label_231850;
    }
    ctx->pc = 0x231848u;
    {
        const bool branch_taken_0x231848 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x231848) {
            ctx->pc = 0x231870u;
            goto label_231870;
        }
    }
    ctx->pc = 0x231850u;
label_231850:
    // 0x231850: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x231850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_231854:
    // 0x231854: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x231854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_231858:
    // 0x231858: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x231858u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_23185c:
    // 0x23185c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x23185cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_231860:
    // 0x231860: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x231860u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_231864:
    // 0x231864: 0x0  nop
    ctx->pc = 0x231864u;
    // NOP
label_231868:
    // 0x231868: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x231868u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_23186c:
    // 0x23186c: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x23186cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_231870:
    // 0x231870: 0xc7a10050  lwc1        $f1, 0x50($sp)
    ctx->pc = 0x231870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_231874:
    // 0x231874: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x231874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_231878:
    // 0x231878: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x231878u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_23187c:
    // 0x23187c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23187cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_231880:
    // 0x231880: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_231884:
    if (ctx->pc == 0x231884u) {
        ctx->pc = 0x231888u;
        goto label_231888;
    }
    ctx->pc = 0x231880u;
    {
        const bool branch_taken_0x231880 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x231880) {
            ctx->pc = 0x23188Cu;
            goto label_23188c;
        }
    }
    ctx->pc = 0x231888u;
label_231888:
    // 0x231888: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x231888u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23188c:
    // 0x23188c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_231890:
    if (ctx->pc == 0x231890u) {
        ctx->pc = 0x231894u;
        goto label_231894;
    }
    ctx->pc = 0x23188Cu;
    {
        const bool branch_taken_0x23188c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x23188c) {
            ctx->pc = 0x2318A8u;
            goto label_2318a8;
        }
    }
    ctx->pc = 0x231894u;
label_231894:
    // 0x231894: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x231894u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_231898:
    // 0x231898: 0x0  nop
    ctx->pc = 0x231898u;
    // NOP
label_23189c:
    // 0x23189c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x23189cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_2318a0:
    // 0x2318a0: 0x10000008  b           . + 4 + (0x8 << 2)
label_2318a4:
    if (ctx->pc == 0x2318A4u) {
        ctx->pc = 0x2318A8u;
        goto label_2318a8;
    }
    ctx->pc = 0x2318A0u;
    {
        const bool branch_taken_0x2318a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2318a0) {
            ctx->pc = 0x2318C4u;
            goto label_2318c4;
        }
    }
    ctx->pc = 0x2318A8u;
label_2318a8:
    // 0x2318a8: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x2318a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_2318ac:
    // 0x2318ac: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2318acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2318b0:
    // 0x2318b0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2318b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2318b4:
    // 0x2318b4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2318b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2318b8:
    // 0x2318b8: 0x0  nop
    ctx->pc = 0x2318b8u;
    // NOP
label_2318bc:
    // 0x2318bc: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2318bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_2318c0:
    // 0x2318c0: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2318c0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2318c4:
    // 0x2318c4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2318c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2318c8:
    // 0x2318c8: 0x0  nop
    ctx->pc = 0x2318c8u;
    // NOP
label_2318cc:
    // 0x2318cc: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2318ccu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2318d0:
    // 0x2318d0: 0x45010008  bc1t        . + 4 + (0x8 << 2)
label_2318d4:
    if (ctx->pc == 0x2318D4u) {
        ctx->pc = 0x2318D8u;
        goto label_2318d8;
    }
    ctx->pc = 0x2318D0u;
    {
        const bool branch_taken_0x2318d0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2318d0) {
            ctx->pc = 0x2318F4u;
            goto label_2318f4;
        }
    }
    ctx->pc = 0x2318D8u;
label_2318d8:
    // 0x2318d8: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x2318d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_2318dc:
    // 0x2318dc: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x2318dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_2318e0:
    // 0x2318e0: 0xc7ac0050  lwc1        $f12, 0x50($sp)
    ctx->pc = 0x2318e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2318e4:
    // 0x2318e4: 0xc7ad0054  lwc1        $f13, 0x54($sp)
    ctx->pc = 0x2318e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_2318e8:
    // 0x2318e8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2318e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2318ec:
    // 0x2318ec: 0xc08c208  jal         func_230820
label_2318f0:
    if (ctx->pc == 0x2318F0u) {
        ctx->pc = 0x2318F4u;
        goto label_2318f4;
    }
    ctx->pc = 0x2318ECu;
    SET_GPR_U32(ctx, 31, 0x2318F4u);
    ctx->pc = 0x230820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230820u, 0x2318ECu, 0x2318F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2318F4u;
label_2318f4:
    // 0x2318f4: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x2318f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2318f8:
    // 0x2318f8: 0x10000002  b           . + 4 + (0x2 << 2)
label_2318fc:
    if (ctx->pc == 0x2318FCu) {
        ctx->pc = 0x231900u;
        goto label_231900;
    }
    ctx->pc = 0x2318F8u;
    {
        const bool branch_taken_0x2318f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2318f8) {
            ctx->pc = 0x231904u;
            goto label_231904;
        }
    }
    ctx->pc = 0x231900u;
label_231900:
    // 0x231900: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x231900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_231904:
    // 0x231904: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x231904u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_231908:
    // 0x231908: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x231908u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_23190c:
    // 0x23190c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x23190cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_231910:
    // 0x231910: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x231910u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_231914:
    // 0x231914: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x231914u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_231918:
    // 0x231918: 0x27bd00e0  addiu       $sp, $sp, 0xE0
    ctx->pc = 0x231918u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_23191c:
    // 0x23191c: 0x3e00008  jr          $ra
label_231920:
    if (ctx->pc == 0x231920u) {
        ctx->pc = 0x231924u;
        goto label_231924;
    }
    ctx->pc = 0x23191Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23191Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x231924u;
label_231924:
    // 0x231924: 0x0  nop
    ctx->pc = 0x231924u;
    // NOP
label_231928:
    // 0x231928: 0x0  nop
    ctx->pc = 0x231928u;
    // NOP
label_23192c:
    // 0x23192c: 0x0  nop
    ctx->pc = 0x23192cu;
    // NOP
    ctx->pc = 0x231930u;
}
