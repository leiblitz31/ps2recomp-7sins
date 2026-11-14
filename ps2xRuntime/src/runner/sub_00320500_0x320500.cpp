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

// Function: sub_00320500
// Address: 0x320500 - 0x320980
void sub_00320500_0x320500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00320500_0x320500");
#endif

    switch (ctx->pc) {
        case 0x320500u: goto label_320500;
        case 0x320504u: goto label_320504;
        case 0x320508u: goto label_320508;
        case 0x32050cu: goto label_32050c;
        case 0x320510u: goto label_320510;
        case 0x320514u: goto label_320514;
        case 0x320518u: goto label_320518;
        case 0x32051cu: goto label_32051c;
        case 0x320520u: goto label_320520;
        case 0x320524u: goto label_320524;
        case 0x320528u: goto label_320528;
        case 0x32052cu: goto label_32052c;
        case 0x320530u: goto label_320530;
        case 0x320534u: goto label_320534;
        case 0x320538u: goto label_320538;
        case 0x32053cu: goto label_32053c;
        case 0x320540u: goto label_320540;
        case 0x320544u: goto label_320544;
        case 0x320548u: goto label_320548;
        case 0x32054cu: goto label_32054c;
        case 0x320550u: goto label_320550;
        case 0x320554u: goto label_320554;
        case 0x320558u: goto label_320558;
        case 0x32055cu: goto label_32055c;
        case 0x320560u: goto label_320560;
        case 0x320564u: goto label_320564;
        case 0x320568u: goto label_320568;
        case 0x32056cu: goto label_32056c;
        case 0x320570u: goto label_320570;
        case 0x320574u: goto label_320574;
        case 0x320578u: goto label_320578;
        case 0x32057cu: goto label_32057c;
        case 0x320580u: goto label_320580;
        case 0x320584u: goto label_320584;
        case 0x320588u: goto label_320588;
        case 0x32058cu: goto label_32058c;
        case 0x320590u: goto label_320590;
        case 0x320594u: goto label_320594;
        case 0x320598u: goto label_320598;
        case 0x32059cu: goto label_32059c;
        case 0x3205a0u: goto label_3205a0;
        case 0x3205a4u: goto label_3205a4;
        case 0x3205a8u: goto label_3205a8;
        case 0x3205acu: goto label_3205ac;
        case 0x3205b0u: goto label_3205b0;
        case 0x3205b4u: goto label_3205b4;
        case 0x3205b8u: goto label_3205b8;
        case 0x3205bcu: goto label_3205bc;
        case 0x3205c0u: goto label_3205c0;
        case 0x3205c4u: goto label_3205c4;
        case 0x3205c8u: goto label_3205c8;
        case 0x3205ccu: goto label_3205cc;
        case 0x3205d0u: goto label_3205d0;
        case 0x3205d4u: goto label_3205d4;
        case 0x3205d8u: goto label_3205d8;
        case 0x3205dcu: goto label_3205dc;
        case 0x3205e0u: goto label_3205e0;
        case 0x3205e4u: goto label_3205e4;
        case 0x3205e8u: goto label_3205e8;
        case 0x3205ecu: goto label_3205ec;
        case 0x3205f0u: goto label_3205f0;
        case 0x3205f4u: goto label_3205f4;
        case 0x3205f8u: goto label_3205f8;
        case 0x3205fcu: goto label_3205fc;
        case 0x320600u: goto label_320600;
        case 0x320604u: goto label_320604;
        case 0x320608u: goto label_320608;
        case 0x32060cu: goto label_32060c;
        case 0x320610u: goto label_320610;
        case 0x320614u: goto label_320614;
        case 0x320618u: goto label_320618;
        case 0x32061cu: goto label_32061c;
        case 0x320620u: goto label_320620;
        case 0x320624u: goto label_320624;
        case 0x320628u: goto label_320628;
        case 0x32062cu: goto label_32062c;
        case 0x320630u: goto label_320630;
        case 0x320634u: goto label_320634;
        case 0x320638u: goto label_320638;
        case 0x32063cu: goto label_32063c;
        case 0x320640u: goto label_320640;
        case 0x320644u: goto label_320644;
        case 0x320648u: goto label_320648;
        case 0x32064cu: goto label_32064c;
        case 0x320650u: goto label_320650;
        case 0x320654u: goto label_320654;
        case 0x320658u: goto label_320658;
        case 0x32065cu: goto label_32065c;
        case 0x320660u: goto label_320660;
        case 0x320664u: goto label_320664;
        case 0x320668u: goto label_320668;
        case 0x32066cu: goto label_32066c;
        case 0x320670u: goto label_320670;
        case 0x320674u: goto label_320674;
        case 0x320678u: goto label_320678;
        case 0x32067cu: goto label_32067c;
        case 0x320680u: goto label_320680;
        case 0x320684u: goto label_320684;
        case 0x320688u: goto label_320688;
        case 0x32068cu: goto label_32068c;
        case 0x320690u: goto label_320690;
        case 0x320694u: goto label_320694;
        case 0x320698u: goto label_320698;
        case 0x32069cu: goto label_32069c;
        case 0x3206a0u: goto label_3206a0;
        case 0x3206a4u: goto label_3206a4;
        case 0x3206a8u: goto label_3206a8;
        case 0x3206acu: goto label_3206ac;
        case 0x3206b0u: goto label_3206b0;
        case 0x3206b4u: goto label_3206b4;
        case 0x3206b8u: goto label_3206b8;
        case 0x3206bcu: goto label_3206bc;
        case 0x3206c0u: goto label_3206c0;
        case 0x3206c4u: goto label_3206c4;
        case 0x3206c8u: goto label_3206c8;
        case 0x3206ccu: goto label_3206cc;
        case 0x3206d0u: goto label_3206d0;
        case 0x3206d4u: goto label_3206d4;
        case 0x3206d8u: goto label_3206d8;
        case 0x3206dcu: goto label_3206dc;
        case 0x3206e0u: goto label_3206e0;
        case 0x3206e4u: goto label_3206e4;
        case 0x3206e8u: goto label_3206e8;
        case 0x3206ecu: goto label_3206ec;
        case 0x3206f0u: goto label_3206f0;
        case 0x3206f4u: goto label_3206f4;
        case 0x3206f8u: goto label_3206f8;
        case 0x3206fcu: goto label_3206fc;
        case 0x320700u: goto label_320700;
        case 0x320704u: goto label_320704;
        case 0x320708u: goto label_320708;
        case 0x32070cu: goto label_32070c;
        case 0x320710u: goto label_320710;
        case 0x320714u: goto label_320714;
        case 0x320718u: goto label_320718;
        case 0x32071cu: goto label_32071c;
        case 0x320720u: goto label_320720;
        case 0x320724u: goto label_320724;
        case 0x320728u: goto label_320728;
        case 0x32072cu: goto label_32072c;
        case 0x320730u: goto label_320730;
        case 0x320734u: goto label_320734;
        case 0x320738u: goto label_320738;
        case 0x32073cu: goto label_32073c;
        case 0x320740u: goto label_320740;
        case 0x320744u: goto label_320744;
        case 0x320748u: goto label_320748;
        case 0x32074cu: goto label_32074c;
        case 0x320750u: goto label_320750;
        case 0x320754u: goto label_320754;
        case 0x320758u: goto label_320758;
        case 0x32075cu: goto label_32075c;
        case 0x320760u: goto label_320760;
        case 0x320764u: goto label_320764;
        case 0x320768u: goto label_320768;
        case 0x32076cu: goto label_32076c;
        case 0x320770u: goto label_320770;
        case 0x320774u: goto label_320774;
        case 0x320778u: goto label_320778;
        case 0x32077cu: goto label_32077c;
        case 0x320780u: goto label_320780;
        case 0x320784u: goto label_320784;
        case 0x320788u: goto label_320788;
        case 0x32078cu: goto label_32078c;
        case 0x320790u: goto label_320790;
        case 0x320794u: goto label_320794;
        case 0x320798u: goto label_320798;
        case 0x32079cu: goto label_32079c;
        case 0x3207a0u: goto label_3207a0;
        case 0x3207a4u: goto label_3207a4;
        case 0x3207a8u: goto label_3207a8;
        case 0x3207acu: goto label_3207ac;
        case 0x3207b0u: goto label_3207b0;
        case 0x3207b4u: goto label_3207b4;
        case 0x3207b8u: goto label_3207b8;
        case 0x3207bcu: goto label_3207bc;
        case 0x3207c0u: goto label_3207c0;
        case 0x3207c4u: goto label_3207c4;
        case 0x3207c8u: goto label_3207c8;
        case 0x3207ccu: goto label_3207cc;
        case 0x3207d0u: goto label_3207d0;
        case 0x3207d4u: goto label_3207d4;
        case 0x3207d8u: goto label_3207d8;
        case 0x3207dcu: goto label_3207dc;
        case 0x3207e0u: goto label_3207e0;
        case 0x3207e4u: goto label_3207e4;
        case 0x3207e8u: goto label_3207e8;
        case 0x3207ecu: goto label_3207ec;
        case 0x3207f0u: goto label_3207f0;
        case 0x3207f4u: goto label_3207f4;
        case 0x3207f8u: goto label_3207f8;
        case 0x3207fcu: goto label_3207fc;
        case 0x320800u: goto label_320800;
        case 0x320804u: goto label_320804;
        case 0x320808u: goto label_320808;
        case 0x32080cu: goto label_32080c;
        case 0x320810u: goto label_320810;
        case 0x320814u: goto label_320814;
        case 0x320818u: goto label_320818;
        case 0x32081cu: goto label_32081c;
        case 0x320820u: goto label_320820;
        case 0x320824u: goto label_320824;
        case 0x320828u: goto label_320828;
        case 0x32082cu: goto label_32082c;
        case 0x320830u: goto label_320830;
        case 0x320834u: goto label_320834;
        case 0x320838u: goto label_320838;
        case 0x32083cu: goto label_32083c;
        case 0x320840u: goto label_320840;
        case 0x320844u: goto label_320844;
        case 0x320848u: goto label_320848;
        case 0x32084cu: goto label_32084c;
        case 0x320850u: goto label_320850;
        case 0x320854u: goto label_320854;
        case 0x320858u: goto label_320858;
        case 0x32085cu: goto label_32085c;
        case 0x320860u: goto label_320860;
        case 0x320864u: goto label_320864;
        case 0x320868u: goto label_320868;
        case 0x32086cu: goto label_32086c;
        case 0x320870u: goto label_320870;
        case 0x320874u: goto label_320874;
        case 0x320878u: goto label_320878;
        case 0x32087cu: goto label_32087c;
        case 0x320880u: goto label_320880;
        case 0x320884u: goto label_320884;
        case 0x320888u: goto label_320888;
        case 0x32088cu: goto label_32088c;
        case 0x320890u: goto label_320890;
        case 0x320894u: goto label_320894;
        case 0x320898u: goto label_320898;
        case 0x32089cu: goto label_32089c;
        case 0x3208a0u: goto label_3208a0;
        case 0x3208a4u: goto label_3208a4;
        case 0x3208a8u: goto label_3208a8;
        case 0x3208acu: goto label_3208ac;
        case 0x3208b0u: goto label_3208b0;
        case 0x3208b4u: goto label_3208b4;
        case 0x3208b8u: goto label_3208b8;
        case 0x3208bcu: goto label_3208bc;
        case 0x3208c0u: goto label_3208c0;
        case 0x3208c4u: goto label_3208c4;
        case 0x3208c8u: goto label_3208c8;
        case 0x3208ccu: goto label_3208cc;
        case 0x3208d0u: goto label_3208d0;
        case 0x3208d4u: goto label_3208d4;
        case 0x3208d8u: goto label_3208d8;
        case 0x3208dcu: goto label_3208dc;
        case 0x3208e0u: goto label_3208e0;
        case 0x3208e4u: goto label_3208e4;
        case 0x3208e8u: goto label_3208e8;
        case 0x3208ecu: goto label_3208ec;
        case 0x3208f0u: goto label_3208f0;
        case 0x3208f4u: goto label_3208f4;
        case 0x3208f8u: goto label_3208f8;
        case 0x3208fcu: goto label_3208fc;
        case 0x320900u: goto label_320900;
        case 0x320904u: goto label_320904;
        case 0x320908u: goto label_320908;
        case 0x32090cu: goto label_32090c;
        case 0x320910u: goto label_320910;
        case 0x320914u: goto label_320914;
        case 0x320918u: goto label_320918;
        case 0x32091cu: goto label_32091c;
        case 0x320920u: goto label_320920;
        case 0x320924u: goto label_320924;
        case 0x320928u: goto label_320928;
        case 0x32092cu: goto label_32092c;
        case 0x320930u: goto label_320930;
        case 0x320934u: goto label_320934;
        case 0x320938u: goto label_320938;
        case 0x32093cu: goto label_32093c;
        case 0x320940u: goto label_320940;
        case 0x320944u: goto label_320944;
        case 0x320948u: goto label_320948;
        case 0x32094cu: goto label_32094c;
        case 0x320950u: goto label_320950;
        case 0x320954u: goto label_320954;
        case 0x320958u: goto label_320958;
        case 0x32095cu: goto label_32095c;
        case 0x320960u: goto label_320960;
        case 0x320964u: goto label_320964;
        case 0x320968u: goto label_320968;
        case 0x32096cu: goto label_32096c;
        case 0x320970u: goto label_320970;
        case 0x320974u: goto label_320974;
        case 0x320978u: goto label_320978;
        case 0x32097cu: goto label_32097c;
        default: break;
    }

    ctx->pc = 0x320500u;

label_320500:
    // 0x320500: 0x27bdf610  addiu       $sp, $sp, -0x9F0
    ctx->pc = 0x320500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294964752));
label_320504:
    // 0x320504: 0x7fb50980  sq          $s5, 0x980($sp)
    ctx->pc = 0x320504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2432), GPR_VEC(ctx, 21));
label_320508:
    // 0x320508: 0x7fb009d0  sq          $s0, 0x9D0($sp)
    ctx->pc = 0x320508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2512), GPR_VEC(ctx, 16));
label_32050c:
    // 0x32050c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x32050cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_320510:
    // 0x320510: 0x7fb109c0  sq          $s1, 0x9C0($sp)
    ctx->pc = 0x320510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2496), GPR_VEC(ctx, 17));
label_320514:
    // 0x320514: 0x7fb209b0  sq          $s2, 0x9B0($sp)
    ctx->pc = 0x320514u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2480), GPR_VEC(ctx, 18));
label_320518:
    // 0x320518: 0x7fb309a0  sq          $s3, 0x9A0($sp)
    ctx->pc = 0x320518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2464), GPR_VEC(ctx, 19));
label_32051c:
    // 0x32051c: 0x7fb40990  sq          $s4, 0x990($sp)
    ctx->pc = 0x32051cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2448), GPR_VEC(ctx, 20));
label_320520:
    // 0x320520: 0x7fb60970  sq          $s6, 0x970($sp)
    ctx->pc = 0x320520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2416), GPR_VEC(ctx, 22));
label_320524:
    // 0x320524: 0x7fb70960  sq          $s7, 0x960($sp)
    ctx->pc = 0x320524u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2400), GPR_VEC(ctx, 23));
label_320528:
    // 0x320528: 0x7fbe0950  sq          $fp, 0x950($sp)
    ctx->pc = 0x320528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2384), GPR_VEC(ctx, 30));
label_32052c:
    // 0x32052c: 0xffbf0940  sd          $ra, 0x940($sp)
    ctx->pc = 0x32052cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 2368), GPR_U64(ctx, 31));
label_320530:
    // 0x320530: 0xe7b409e0  swc1        $f20, 0x9E0($sp)
    ctx->pc = 0x320530u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2528), bits); }
label_320534:
    // 0x320534: 0x8ea20014  lw          $v0, 0x14($s5)
    ctx->pc = 0x320534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
label_320538:
    // 0x320538: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x320538u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_32053c:
    // 0x32053c: 0x1200002e  beqz        $s0, . + 4 + (0x2E << 2)
label_320540:
    if (ctx->pc == 0x320540u) {
        ctx->pc = 0x320540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32053Cu;
        // 0x320540: 0x8eb10000  lw          $s1, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320544u;
        goto label_320544;
    }
    ctx->pc = 0x32053Cu;
    {
        const bool branch_taken_0x32053c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x320540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32053Cu;
        // 0x320540: 0x8eb10000  lw          $s1, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32053c) {
            ctx->pc = 0x3205F8u;
            goto label_3205f8;
        }
    }
    ctx->pc = 0x320544u;
label_320544:
    // 0x320544: 0xc1067f6  jal         func_419FD8
label_320548:
    if (ctx->pc == 0x320548u) {
        ctx->pc = 0x320548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320544u;
        // 0x320548: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32054Cu;
        goto label_32054c;
    }
    ctx->pc = 0x320544u;
    SET_GPR_U32(ctx, 31, 0x32054Cu);
    ctx->pc = 0x320548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320544u;
    // 0x320548: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419FD8u, 0x320544u, 0x32054Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32054Cu;
label_32054c:
    // 0x32054c: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
label_320550:
    if (ctx->pc == 0x320550u) {
        ctx->pc = 0x320550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32054Cu;
        // 0x320550: 0x7a030010  lq          $v1, 0x10($s0) (Delay Slot)
        SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320554u;
        goto label_320554;
    }
    ctx->pc = 0x32054Cu;
    {
        const bool branch_taken_0x32054c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32054c) {
            ctx->pc = 0x320550u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32054Cu;
            // 0x320550: 0x7a030010  lq          $v1, 0x10($s0) (Delay Slot)
            SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x320588u;
            goto label_320588;
        }
    }
    ctx->pc = 0x320554u;
label_320554:
    // 0x320554: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x320554u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_320558:
    // 0x320558: 0xc106784  jal         func_419E10
label_32055c:
    if (ctx->pc == 0x32055Cu) {
        ctx->pc = 0x32055Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320558u;
        // 0x32055c: 0x32342000  andi        $s4, $s1, 0x2000 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)8192);
        ctx->in_delay_slot = false;
        ctx->pc = 0x320560u;
        goto label_320560;
    }
    ctx->pc = 0x320558u;
    SET_GPR_U32(ctx, 31, 0x320560u);
    ctx->pc = 0x32055Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320558u;
    // 0x32055c: 0x32342000  andi        $s4, $s1, 0x2000 (Delay Slot)
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)8192);
    ctx->in_delay_slot = false;
    ctx->pc = 0x419E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419E10u, 0x320558u, 0x320560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320560u;
label_320560:
    // 0x320560: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x320560u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_320564:
    // 0x320564: 0x27b20040  addiu       $s2, $sp, 0x40
    ctx->pc = 0x320564u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_320568:
    // 0x320568: 0x7fa30800  sq          $v1, 0x800($sp)
    ctx->pc = 0x320568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2048), GPR_VEC(ctx, 3));
label_32056c:
    // 0x32056c: 0x78440010  lq          $a0, 0x10($v0)
    ctx->pc = 0x32056cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 16)));
label_320570:
    // 0x320570: 0x7fa40810  sq          $a0, 0x810($sp)
    ctx->pc = 0x320570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2064), GPR_VEC(ctx, 4));
label_320574:
    // 0x320574: 0x78430020  lq          $v1, 0x20($v0)
    ctx->pc = 0x320574u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 32)));
label_320578:
    // 0x320578: 0x7fa30820  sq          $v1, 0x820($sp)
    ctx->pc = 0x320578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2080), GPR_VEC(ctx, 3));
label_32057c:
    // 0x32057c: 0x78440030  lq          $a0, 0x30($v0)
    ctx->pc = 0x32057cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 48)));
label_320580:
    // 0x320580: 0x10000033  b           . + 4 + (0x33 << 2)
label_320584:
    if (ctx->pc == 0x320584u) {
        ctx->pc = 0x320584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320580u;
        // 0x320584: 0x7fa40830  sq          $a0, 0x830($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 2096), GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320588u;
        goto label_320588;
    }
    ctx->pc = 0x320580u;
    {
        const bool branch_taken_0x320580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x320584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320580u;
        // 0x320584: 0x7fa40830  sq          $a0, 0x830($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 2096), GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320580) {
            ctx->pc = 0x320650u;
            goto label_320650;
        }
    }
    ctx->pc = 0x320588u;
label_320588:
    // 0x320588: 0x32342000  andi        $s4, $s1, 0x2000
    ctx->pc = 0x320588u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)8192);
label_32058c:
    // 0x32058c: 0x7fa30800  sq          $v1, 0x800($sp)
    ctx->pc = 0x32058cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2048), GPR_VEC(ctx, 3));
label_320590:
    // 0x320590: 0x7a020020  lq          $v0, 0x20($s0)
    ctx->pc = 0x320590u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 32)));
label_320594:
    // 0x320594: 0x7fa20810  sq          $v0, 0x810($sp)
    ctx->pc = 0x320594u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2064), GPR_VEC(ctx, 2));
label_320598:
    // 0x320598: 0x7a030030  lq          $v1, 0x30($s0)
    ctx->pc = 0x320598u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 48)));
label_32059c:
    // 0x32059c: 0x7fa30820  sq          $v1, 0x820($sp)
    ctx->pc = 0x32059cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2080), GPR_VEC(ctx, 3));
label_3205a0:
    // 0x3205a0: 0x7a020040  lq          $v0, 0x40($s0)
    ctx->pc = 0x3205a0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 64)));
label_3205a4:
    // 0x3205a4: 0x7fa20830  sq          $v0, 0x830($sp)
    ctx->pc = 0x3205a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2096), GPR_VEC(ctx, 2));
label_3205a8:
    // 0x3205a8: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x3205a8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3205ac:
    // 0x3205ac: 0x12000028  beqz        $s0, . + 4 + (0x28 << 2)
label_3205b0:
    if (ctx->pc == 0x3205B0u) {
        ctx->pc = 0x3205B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3205ACu;
        // 0x3205b0: 0x27b20040  addiu       $s2, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3205B4u;
        goto label_3205b4;
    }
    ctx->pc = 0x3205ACu;
    {
        const bool branch_taken_0x3205ac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3205B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3205ACu;
        // 0x3205b0: 0x27b20040  addiu       $s2, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3205ac) {
            ctx->pc = 0x320650u;
            goto label_320650;
        }
    }
    ctx->pc = 0x3205B4u;
label_3205b4:
    // 0x3205b4: 0x7ba80800  lq          $t0, 0x800($sp)
    ctx->pc = 0x3205b4u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 2048)));
label_3205b8:
    // 0x3205b8: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x3205b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_3205bc:
    // 0x3205bc: 0x7ba70810  lq          $a3, 0x810($sp)
    ctx->pc = 0x3205bcu;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 2064)));
label_3205c0:
    // 0x3205c0: 0x27a40800  addiu       $a0, $sp, 0x800
    ctx->pc = 0x3205c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 2048));
label_3205c4:
    // 0x3205c4: 0x7ba30820  lq          $v1, 0x820($sp)
    ctx->pc = 0x3205c4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 2080)));
label_3205c8:
    // 0x3205c8: 0x27a50840  addiu       $a1, $sp, 0x840
    ctx->pc = 0x3205c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 2112));
label_3205cc:
    // 0x3205cc: 0x7ba20830  lq          $v0, 0x830($sp)
    ctx->pc = 0x3205ccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 2096)));
label_3205d0:
    // 0x3205d0: 0x7fa80840  sq          $t0, 0x840($sp)
    ctx->pc = 0x3205d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2112), GPR_VEC(ctx, 8));
label_3205d4:
    // 0x3205d4: 0x7fa70850  sq          $a3, 0x850($sp)
    ctx->pc = 0x3205d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2128), GPR_VEC(ctx, 7));
label_3205d8:
    // 0x3205d8: 0x7fa30860  sq          $v1, 0x860($sp)
    ctx->pc = 0x3205d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2144), GPR_VEC(ctx, 3));
label_3205dc:
    // 0x3205dc: 0xc103dd4  jal         func_40F750
label_3205e0:
    if (ctx->pc == 0x3205E0u) {
        ctx->pc = 0x3205E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3205DCu;
        // 0x3205e0: 0x7fa20870  sq          $v0, 0x870($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 2160), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3205E4u;
        goto label_3205e4;
    }
    ctx->pc = 0x3205DCu;
    SET_GPR_U32(ctx, 31, 0x3205E4u);
    ctx->pc = 0x3205E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3205DCu;
    // 0x3205e0: 0x7fa20870  sq          $v0, 0x870($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 2160), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40F750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F750u, 0x3205DCu, 0x3205E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3205E4u;
label_3205e4:
    // 0x3205e4: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x3205e4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3205e8:
    // 0x3205e8: 0x1600fff3  bnez        $s0, . + 4 + (-0xD << 2)
label_3205ec:
    if (ctx->pc == 0x3205ECu) {
        ctx->pc = 0x3205ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3205E8u;
        // 0x3205ec: 0x7ba80800  lq          $t0, 0x800($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 2048)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3205F0u;
        goto label_3205f0;
    }
    ctx->pc = 0x3205E8u;
    {
        const bool branch_taken_0x3205e8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3205ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3205E8u;
        // 0x3205ec: 0x7ba80800  lq          $t0, 0x800($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 2048)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3205e8) {
            ctx->pc = 0x3205B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3205b8;
        }
    }
    ctx->pc = 0x3205F0u;
label_3205f0:
    // 0x3205f0: 0x10000017  b           . + 4 + (0x17 << 2)
label_3205f4:
    if (ctx->pc == 0x3205F4u) {
        ctx->pc = 0x3205F8u;
        goto label_3205f8;
    }
    ctx->pc = 0x3205F0u;
    {
        const bool branch_taken_0x3205f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3205f0) {
            ctx->pc = 0x320650u;
            goto label_320650;
        }
    }
    ctx->pc = 0x3205F8u;
label_3205f8:
    // 0x3205f8: 0x8fa3080c  lw          $v1, 0x80C($sp)
    ctx->pc = 0x3205f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2060)));
label_3205fc:
    // 0x3205fc: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x3205fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
label_320600:
    // 0x320600: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x320600u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_320604:
    // 0x320604: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x320604u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
label_320608:
    // 0x320608: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x320608u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_32060c:
    // 0x32060c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x32060cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_320610:
    // 0x320610: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x320610u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_320614:
    // 0x320614: 0xe7a00830  swc1        $f0, 0x830($sp)
    ctx->pc = 0x320614u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2096), bits); }
label_320618:
    // 0x320618: 0x32342000  andi        $s4, $s1, 0x2000
    ctx->pc = 0x320618u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)8192);
label_32061c:
    // 0x32061c: 0xe7a10800  swc1        $f1, 0x800($sp)
    ctx->pc = 0x32061cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2048), bits); }
label_320620:
    // 0x320620: 0x27b20040  addiu       $s2, $sp, 0x40
    ctx->pc = 0x320620u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_320624:
    // 0x320624: 0xafa3080c  sw          $v1, 0x80C($sp)
    ctx->pc = 0x320624u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2060), GPR_U32(ctx, 3));
label_320628:
    // 0x320628: 0xe7a10828  swc1        $f1, 0x828($sp)
    ctx->pc = 0x320628u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2088), bits); }
label_32062c:
    // 0x32062c: 0xe7a10814  swc1        $f1, 0x814($sp)
    ctx->pc = 0x32062cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2068), bits); }
label_320630:
    // 0x320630: 0xe7a00810  swc1        $f0, 0x810($sp)
    ctx->pc = 0x320630u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2064), bits); }
label_320634:
    // 0x320634: 0xe7a00808  swc1        $f0, 0x808($sp)
    ctx->pc = 0x320634u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2056), bits); }
label_320638:
    // 0x320638: 0xe7a00804  swc1        $f0, 0x804($sp)
    ctx->pc = 0x320638u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2052), bits); }
label_32063c:
    // 0x32063c: 0xe7a00824  swc1        $f0, 0x824($sp)
    ctx->pc = 0x32063cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2084), bits); }
label_320640:
    // 0x320640: 0xe7a00820  swc1        $f0, 0x820($sp)
    ctx->pc = 0x320640u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2080), bits); }
label_320644:
    // 0x320644: 0xe7a00818  swc1        $f0, 0x818($sp)
    ctx->pc = 0x320644u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2072), bits); }
label_320648:
    // 0x320648: 0xe7a00838  swc1        $f0, 0x838($sp)
    ctx->pc = 0x320648u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2104), bits); }
label_32064c:
    // 0x32064c: 0xe7a00834  swc1        $f0, 0x834($sp)
    ctx->pc = 0x32064cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2100), bits); }
label_320650:
    // 0x320650: 0x52800014  beql        $s4, $zero, . + 4 + (0x14 << 2)
label_320654:
    if (ctx->pc == 0x320654u) {
        ctx->pc = 0x320654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320650u;
        // 0x320654: 0x8ea30020  lw          $v1, 0x20($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320658u;
        goto label_320658;
    }
    ctx->pc = 0x320650u;
    {
        const bool branch_taken_0x320650 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x320650) {
            ctx->pc = 0x320654u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x320650u;
            // 0x320654: 0x8ea30020  lw          $v1, 0x20($s5) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3206A4u;
            goto label_3206a4;
        }
    }
    ctx->pc = 0x320658u;
label_320658:
    // 0x320658: 0x8ea30014  lw          $v1, 0x14($s5)
    ctx->pc = 0x320658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
label_32065c:
    // 0x32065c: 0x8c6600a0  lw          $a2, 0xA0($v1)
    ctx->pc = 0x32065cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 160)));
label_320660:
    // 0x320660: 0x90c20003  lbu         $v0, 0x3($a2)
    ctx->pc = 0x320660u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3)));
label_320664:
    // 0x320664: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x320664u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_320668:
    // 0x320668: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
label_32066c:
    if (ctx->pc == 0x32066Cu) {
        ctx->pc = 0x32066Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320668u;
        // 0x32066c: 0x8ea30020  lw          $v1, 0x20($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320670u;
        goto label_320670;
    }
    ctx->pc = 0x320668u;
    {
        const bool branch_taken_0x320668 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x320668) {
            ctx->pc = 0x32066Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x320668u;
            // 0x32066c: 0x8ea30020  lw          $v1, 0x20($s5) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3206A4u;
            goto label_3206a4;
        }
    }
    ctx->pc = 0x320670u;
label_320670:
    // 0x320670: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x320670u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_320674:
    // 0x320674: 0x24c50008  addiu       $a1, $a2, 0x8
    ctx->pc = 0x320674u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_320678:
    // 0x320678: 0x8c64e93c  lw          $a0, -0x16C4($v1)
    ctx->pc = 0x320678u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961468)));
label_32067c:
    // 0x32067c: 0x2462e93c  addiu       $v0, $v1, -0x16C4
    ctx->pc = 0x32067cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961468));
label_320680:
    // 0x320680: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x320680u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
label_320684:
    // 0x320684: 0xacc40008  sw          $a0, 0x8($a2)
    ctx->pc = 0x320684u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 4));
label_320688:
    // 0x320688: 0x8c62e93c  lw          $v0, -0x16C4($v1)
    ctx->pc = 0x320688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961468)));
label_32068c:
    // 0x32068c: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x32068cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
label_320690:
    // 0x320690: 0xac65e93c  sw          $a1, -0x16C4($v1)
    ctx->pc = 0x320690u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294961468), GPR_U32(ctx, 5));
label_320694:
    // 0x320694: 0x90c20003  lbu         $v0, 0x3($a2)
    ctx->pc = 0x320694u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3)));
label_320698:
    // 0x320698: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x320698u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_32069c:
    // 0x32069c: 0xa0c20003  sb          $v0, 0x3($a2)
    ctx->pc = 0x32069cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 2));
label_3206a0:
    // 0x3206a0: 0x8ea30020  lw          $v1, 0x20($s5)
    ctx->pc = 0x3206a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
label_3206a4:
    // 0x3206a4: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x3206a4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3206a8:
    // 0x3206a8: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x3206a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_3206ac:
    // 0x3206ac: 0x8c64003c  lw          $a0, 0x3C($v1)
    ctx->pc = 0x3206acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
label_3206b0:
    // 0x3206b0: 0x2476004c  addiu       $s6, $v1, 0x4C
    ctx->pc = 0x3206b0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 76));
label_3206b4:
    // 0x3206b4: 0xafa40930  sw          $a0, 0x930($sp)
    ctx->pc = 0x3206b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2352), GPR_U32(ctx, 4));
label_3206b8:
    // 0x3206b8: 0x8ea40010  lw          $a0, 0x10($s5)
    ctx->pc = 0x3206b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
label_3206bc:
    // 0x3206bc: 0x184000a1  blez        $v0, . + 4 + (0xA1 << 2)
label_3206c0:
    if (ctx->pc == 0x3206C0u) {
        ctx->pc = 0x3206C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3206BCu;
        // 0x3206c0: 0x8c7e0024  lw          $fp, 0x24($v1) (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3206C4u;
        goto label_3206c4;
    }
    ctx->pc = 0x3206BCu;
    {
        const bool branch_taken_0x3206bc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x3206C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3206BCu;
        // 0x3206c0: 0x8c7e0024  lw          $fp, 0x24($v1) (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3206bc) {
            ctx->pc = 0x320944u;
            goto label_320944;
        }
    }
    ctx->pc = 0x3206C4u;
label_3206c4:
    // 0x3206c4: 0x32311000  andi        $s1, $s1, 0x1000
    ctx->pc = 0x3206c4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)4096);
label_3206c8:
    // 0x3206c8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3206c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3206cc:
    // 0x3206cc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3206ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3206d0:
    // 0x3206d0: 0xafb10934  sw          $s1, 0x934($sp)
    ctx->pc = 0x3206d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2356), GPR_U32(ctx, 17));
label_3206d4:
    // 0x3206d4: 0x24930008  addiu       $s3, $a0, 0x8
    ctx->pc = 0x3206d4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_3206d8:
    // 0x3206d8: 0x2471006c  addiu       $s1, $v1, 0x6C
    ctx->pc = 0x3206d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 108));
label_3206dc:
    // 0x3206dc: 0x0  nop
    ctx->pc = 0x3206dcu;
    // NOP
label_3206e0:
    // 0x3206e0: 0x3c030032  lui         $v1, 0x32
    ctx->pc = 0x3206e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50 << 16));
label_3206e4:
    // 0x3206e4: 0x8fa20930  lw          $v0, 0x930($sp)
    ctx->pc = 0x3206e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2352)));
label_3206e8:
    // 0x3206e8: 0x2463ece0  addiu       $v1, $v1, -0x1320
    ctx->pc = 0x3206e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962400));
label_3206ec:
    // 0x3206ec: 0x14430042  bne         $v0, $v1, . + 4 + (0x42 << 2)
label_3206f0:
    if (ctx->pc == 0x3206F0u) {
        ctx->pc = 0x3206F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3206ECu;
        // 0x3206f0: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3206F4u;
        goto label_3206f4;
    }
    ctx->pc = 0x3206ECu;
    {
        const bool branch_taken_0x3206ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3206F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3206ECu;
        // 0x3206f0: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3206ec) {
            ctx->pc = 0x3207F8u;
            goto label_3207f8;
        }
    }
    ctx->pc = 0x3206F4u;
label_3206f4:
    // 0x3206f4: 0xc626ffec  lwc1        $f6, -0x14($s1)
    ctx->pc = 0x3206f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294967276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_3206f8:
    // 0x3206f8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3206f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3206fc:
    // 0x3206fc: 0xc620ffe8  lwc1        $f0, -0x18($s1)
    ctx->pc = 0x3206fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294967272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_320700:
    // 0x320700: 0xc621fff0  lwc1        $f1, -0x10($s1)
    ctx->pc = 0x320700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294967280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_320704:
    // 0x320704: 0x46063082  mul.s       $f2, $f6, $f6
    ctx->pc = 0x320704u;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[6]);
label_320708:
    // 0x320708: 0xc624fff4  lwc1        $f4, -0xC($s1)
    ctx->pc = 0x320708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294967284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_32070c:
    // 0x32070c: 0x46000142  mul.s       $f5, $f0, $f0
    ctx->pc = 0x32070cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_320710:
    // 0x320710: 0x460109c2  mul.s       $f7, $f1, $f1
    ctx->pc = 0x320710u;
    ctx->f[7] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_320714:
    // 0x320714: 0xafa008b0  sw          $zero, 0x8B0($sp)
    ctx->pc = 0x320714u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2224), GPR_U32(ctx, 0));
label_320718:
    // 0x320718: 0x460122c2  mul.s       $f11, $f4, $f1
    ctx->pc = 0x320718u;
    ctx->f[11] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
label_32071c:
    // 0x32071c: 0xe7a20904  swc1        $f2, 0x904($sp)
    ctx->pc = 0x32071cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2308), bits); }
label_320720:
    // 0x320720: 0x460130c2  mul.s       $f3, $f6, $f1
    ctx->pc = 0x320720u;
    ctx->f[3] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
label_320724:
    // 0x320724: 0xe7a50900  swc1        $f5, 0x900($sp)
    ctx->pc = 0x320724u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2304), bits); }
label_320728:
    // 0x320728: 0x46002242  mul.s       $f9, $f4, $f0
    ctx->pc = 0x320728u;
    ctx->f[9] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_32072c:
    // 0x32072c: 0xe7a70908  swc1        $f7, 0x908($sp)
    ctx->pc = 0x32072cu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2312), bits); }
label_320730:
    // 0x320730: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x320730u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_320734:
    // 0x320734: 0xe7ab0928  swc1        $f11, 0x928($sp)
    ctx->pc = 0x320734u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2344), bits); }
label_320738:
    // 0x320738: 0x46062102  mul.s       $f4, $f4, $f6
    ctx->pc = 0x320738u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[6]);
label_32073c:
    // 0x32073c: 0xe7a30910  swc1        $f3, 0x910($sp)
    ctx->pc = 0x32073cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2320), bits); }
label_320740:
    // 0x320740: 0x46022a80  add.s       $f10, $f5, $f2
    ctx->pc = 0x320740u;
    ctx->f[10] = FPU_ADD_S(ctx->f[5], ctx->f[2]);
label_320744:
    // 0x320744: 0xafa008b4  sw          $zero, 0x8B4($sp)
    ctx->pc = 0x320744u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2228), GPR_U32(ctx, 0));
label_320748:
    // 0x320748: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x320748u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
label_32074c:
    // 0x32074c: 0xe7a10914  swc1        $f1, 0x914($sp)
    ctx->pc = 0x32074cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2324), bits); }
label_320750:
    // 0x320750: 0x46072940  add.s       $f5, $f5, $f7
    ctx->pc = 0x320750u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[7]);
label_320754:
    // 0x320754: 0xe7a90920  swc1        $f9, 0x920($sp)
    ctx->pc = 0x320754u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2336), bits); }
label_320758:
    // 0x320758: 0x46071080  add.s       $f2, $f2, $f7
    ctx->pc = 0x320758u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[7]);
label_32075c:
    // 0x32075c: 0xe7a40924  swc1        $f4, 0x924($sp)
    ctx->pc = 0x32075cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2340), bits); }
label_320760:
    // 0x320760: 0x46040a00  add.s       $f8, $f1, $f4
    ctx->pc = 0x320760u;
    ctx->f[8] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
label_320764:
    // 0x320764: 0xe7a00918  swc1        $f0, 0x918($sp)
    ctx->pc = 0x320764u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2328), bits); }
label_320768:
    // 0x320768: 0x460b0181  sub.s       $f6, $f0, $f11
    ctx->pc = 0x320768u;
    ctx->f[6] = FPU_SUB_S(ctx->f[0], ctx->f[11]);
label_32076c:
    // 0x32076c: 0xafa008b8  sw          $zero, 0x8B8($sp)
    ctx->pc = 0x32076cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2232), GPR_U32(ctx, 0));
label_320770:
    // 0x320770: 0x460919c1  sub.s       $f7, $f3, $f9
    ctx->pc = 0x320770u;
    ctx->f[7] = FPU_SUB_S(ctx->f[3], ctx->f[9]);
label_320774:
    // 0x320774: 0xafa4088c  sw          $a0, 0x88C($sp)
    ctx->pc = 0x320774u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2188), GPR_U32(ctx, 4));
label_320778:
    // 0x320778: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x320778u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_32077c:
    // 0x32077c: 0x46052940  add.s       $f5, $f5, $f5
    ctx->pc = 0x32077cu;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[5]);
label_320780:
    // 0x320780: 0x460a5280  add.s       $f10, $f10, $f10
    ctx->pc = 0x320780u;
    ctx->f[10] = FPU_ADD_S(ctx->f[10], ctx->f[10]);
label_320784:
    // 0x320784: 0x460b0000  add.s       $f0, $f0, $f11
    ctx->pc = 0x320784u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[11]);
label_320788:
    // 0x320788: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x320788u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
label_32078c:
    // 0x32078c: 0x460918c0  add.s       $f3, $f3, $f9
    ctx->pc = 0x32078cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[9]);
label_320790:
    // 0x320790: 0x4602a081  sub.s       $f2, $f20, $f2
    ctx->pc = 0x320790u;
    ctx->f[2] = FPU_SUB_S(ctx->f[20], ctx->f[2]);
label_320794:
    // 0x320794: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x320794u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_320798:
    // 0x320798: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x320798u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_32079c:
    // 0x32079c: 0x46063180  add.s       $f6, $f6, $f6
    ctx->pc = 0x32079cu;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[6]);
label_3207a0:
    // 0x3207a0: 0xe7a20880  swc1        $f2, 0x880($sp)
    ctx->pc = 0x3207a0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2176), bits); }
label_3207a4:
    // 0x3207a4: 0x4605a141  sub.s       $f5, $f20, $f5
    ctx->pc = 0x3207a4u;
    ctx->f[5] = FPU_SUB_S(ctx->f[20], ctx->f[5]);
label_3207a8:
    // 0x3207a8: 0xe7a00884  swc1        $f0, 0x884($sp)
    ctx->pc = 0x3207a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2180), bits); }
label_3207ac:
    // 0x3207ac: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x3207acu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_3207b0:
    // 0x3207b0: 0xe7a10888  swc1        $f1, 0x888($sp)
    ctx->pc = 0x3207b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2184), bits); }
label_3207b4:
    // 0x3207b4: 0x46084200  add.s       $f8, $f8, $f8
    ctx->pc = 0x3207b4u;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[8]);
label_3207b8:
    // 0x3207b8: 0xe7a60890  swc1        $f6, 0x890($sp)
    ctx->pc = 0x3207b8u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2192), bits); }
label_3207bc:
    // 0x3207bc: 0x460739c0  add.s       $f7, $f7, $f7
    ctx->pc = 0x3207bcu;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[7]);
label_3207c0:
    // 0x3207c0: 0xe7a50894  swc1        $f5, 0x894($sp)
    ctx->pc = 0x3207c0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2196), bits); }
label_3207c4:
    // 0x3207c4: 0x460aa281  sub.s       $f10, $f20, $f10
    ctx->pc = 0x3207c4u;
    ctx->f[10] = FPU_SUB_S(ctx->f[20], ctx->f[10]);
label_3207c8:
    // 0x3207c8: 0xe7a30898  swc1        $f3, 0x898($sp)
    ctx->pc = 0x3207c8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2200), bits); }
label_3207cc:
    // 0x3207cc: 0xe7a808a0  swc1        $f8, 0x8A0($sp)
    ctx->pc = 0x3207ccu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2208), bits); }
label_3207d0:
    // 0x3207d0: 0xe7a708a4  swc1        $f7, 0x8A4($sp)
    ctx->pc = 0x3207d0u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2212), bits); }
label_3207d4:
    // 0x3207d4: 0xe7aa08a8  swc1        $f10, 0x8A8($sp)
    ctx->pc = 0x3207d4u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2216), bits); }
label_3207d8:
    // 0x3207d8: 0xc620fff8  lwc1        $f0, -0x8($s1)
    ctx->pc = 0x3207d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294967288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3207dc:
    // 0x3207dc: 0xe7a008b0  swc1        $f0, 0x8B0($sp)
    ctx->pc = 0x3207dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2224), bits); }
label_3207e0:
    // 0x3207e0: 0xc621fffc  lwc1        $f1, -0x4($s1)
    ctx->pc = 0x3207e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3207e4:
    // 0x3207e4: 0xe7a108b4  swc1        $f1, 0x8B4($sp)
    ctx->pc = 0x3207e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2228), bits); }
label_3207e8:
    // 0x3207e8: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x3207e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3207ec:
    // 0x3207ec: 0x10000004  b           . + 4 + (0x4 << 2)
label_3207f0:
    if (ctx->pc == 0x3207F0u) {
        ctx->pc = 0x3207F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3207ECu;
        // 0x3207f0: 0xe7a008b8  swc1        $f0, 0x8B8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2232), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3207F4u;
        goto label_3207f4;
    }
    ctx->pc = 0x3207ECu;
    {
        const bool branch_taken_0x3207ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3207F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3207ECu;
        // 0x3207f0: 0xe7a008b8  swc1        $f0, 0x8B8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2232), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3207ec) {
            ctx->pc = 0x320800u;
            goto label_320800;
        }
    }
    ctx->pc = 0x3207F4u;
label_3207f4:
    // 0x3207f4: 0x0  nop
    ctx->pc = 0x3207f4u;
    // NOP
label_3207f8:
    // 0x3207f8: 0x40f809  jalr        $v0
label_3207fc:
    if (ctx->pc == 0x3207FCu) {
        ctx->pc = 0x3207FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3207F8u;
        // 0x3207fc: 0x27a40880  addiu       $a0, $sp, 0x880 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 2176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320800u;
        goto label_320800;
    }
    ctx->pc = 0x3207F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x320800u);
        ctx->pc = 0x3207FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3207F8u;
        // 0x3207fc: 0x27a40880  addiu       $a0, $sp, 0x880 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 2176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3207F8u, 0x320800u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x320800u;
label_320800:
    // 0x320800: 0x27a50880  addiu       $a1, $sp, 0x880
    ctx->pc = 0x320800u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 2176));
label_320804:
    // 0x320804: 0x27a408c0  addiu       $a0, $sp, 0x8C0
    ctx->pc = 0x320804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 2240));
label_320808:
    // 0x320808: 0xc103dd4  jal         func_40F750
label_32080c:
    if (ctx->pc == 0x32080Cu) {
        ctx->pc = 0x32080Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320808u;
        // 0x32080c: 0x27a60800  addiu       $a2, $sp, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 2048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320810u;
        goto label_320810;
    }
    ctx->pc = 0x320808u;
    SET_GPR_U32(ctx, 31, 0x320810u);
    ctx->pc = 0x32080Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320808u;
    // 0x32080c: 0x27a60800  addiu       $a2, $sp, 0x800 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 2048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40F750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F750u, 0x320808u, 0x320810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320810u;
label_320810:
    // 0x320810: 0x8e700004  lw          $s0, 0x4($s3)
    ctx->pc = 0x320810u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_320814:
    // 0x320814: 0x1200001b  beqz        $s0, . + 4 + (0x1B << 2)
label_320818:
    if (ctx->pc == 0x320818u) {
        ctx->pc = 0x320818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320814u;
        // 0x320818: 0x8fa30934  lw          $v1, 0x934($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2356)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32081Cu;
        goto label_32081c;
    }
    ctx->pc = 0x320814u;
    {
        const bool branch_taken_0x320814 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x320818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320814u;
        // 0x320818: 0x8fa30934  lw          $v1, 0x934($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2356)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320814) {
            ctx->pc = 0x320884u;
            goto label_320884;
        }
    }
    ctx->pc = 0x32081Cu;
label_32081c:
    // 0x32081c: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_320820:
    if (ctx->pc == 0x320820u) {
        ctx->pc = 0x320820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32081Cu;
        // 0x320820: 0x7ba20880  lq          $v0, 0x880($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 2176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320824u;
        goto label_320824;
    }
    ctx->pc = 0x32081Cu;
    {
        const bool branch_taken_0x32081c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x320820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32081Cu;
        // 0x320820: 0x7ba20880  lq          $v0, 0x880($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 2176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32081c) {
            ctx->pc = 0x32084Cu;
            goto label_32084c;
        }
    }
    ctx->pc = 0x320824u;
label_320824:
    // 0x320824: 0x7e020010  sq          $v0, 0x10($s0)
    ctx->pc = 0x320824u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
label_320828:
    // 0x320828: 0x7ba30890  lq          $v1, 0x890($sp)
    ctx->pc = 0x320828u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 2192)));
label_32082c:
    // 0x32082c: 0x7e030020  sq          $v1, 0x20($s0)
    ctx->pc = 0x32082cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 3));
label_320830:
    // 0x320830: 0x7ba208a0  lq          $v0, 0x8A0($sp)
    ctx->pc = 0x320830u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 2208)));
label_320834:
    // 0x320834: 0x7e020030  sq          $v0, 0x30($s0)
    ctx->pc = 0x320834u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), GPR_VEC(ctx, 2));
label_320838:
    // 0x320838: 0x7ba308b0  lq          $v1, 0x8B0($sp)
    ctx->pc = 0x320838u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 2224)));
label_32083c:
    // 0x32083c: 0x16800005  bnez        $s4, . + 4 + (0x5 << 2)
label_320840:
    if (ctx->pc == 0x320840u) {
        ctx->pc = 0x320840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32083Cu;
        // 0x320840: 0x7e030040  sq          $v1, 0x40($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 64), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320844u;
        goto label_320844;
    }
    ctx->pc = 0x32083Cu;
    {
        const bool branch_taken_0x32083c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x320840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32083Cu;
        // 0x320840: 0x7e030040  sq          $v1, 0x40($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 64), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32083c) {
            ctx->pc = 0x320854u;
            goto label_320854;
        }
    }
    ctx->pc = 0x320844u;
label_320844:
    // 0x320844: 0xc106794  jal         func_419E50
label_320848:
    if (ctx->pc == 0x320848u) {
        ctx->pc = 0x320848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320844u;
        // 0x320848: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32084Cu;
        goto label_32084c;
    }
    ctx->pc = 0x320844u;
    SET_GPR_U32(ctx, 31, 0x32084Cu);
    ctx->pc = 0x320848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320844u;
    // 0x320848: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419E50u, 0x320844u, 0x32084Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32084Cu;
label_32084c:
    // 0x32084c: 0x5280000e  beql        $s4, $zero, . + 4 + (0xE << 2)
label_320850:
    if (ctx->pc == 0x320850u) {
        ctx->pc = 0x320850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32084Cu;
        // 0x320850: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320854u;
        goto label_320854;
    }
    ctx->pc = 0x32084Cu;
    {
        const bool branch_taken_0x32084c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x32084c) {
            ctx->pc = 0x320850u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32084Cu;
            // 0x320850: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x320888u;
            goto label_320888;
        }
    }
    ctx->pc = 0x320854u;
label_320854:
    // 0x320854: 0x7ba208c0  lq          $v0, 0x8C0($sp)
    ctx->pc = 0x320854u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 2240)));
label_320858:
    // 0x320858: 0x92040003  lbu         $a0, 0x3($s0)
    ctx->pc = 0x320858u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
label_32085c:
    // 0x32085c: 0x7e020050  sq          $v0, 0x50($s0)
    ctx->pc = 0x32085cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 80), GPR_VEC(ctx, 2));
label_320860:
    // 0x320860: 0x308400fb  andi        $a0, $a0, 0xFB
    ctx->pc = 0x320860u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)251);
label_320864:
    // 0x320864: 0x7ba308d0  lq          $v1, 0x8D0($sp)
    ctx->pc = 0x320864u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 2256)));
label_320868:
    // 0x320868: 0x34840008  ori         $a0, $a0, 0x8
    ctx->pc = 0x320868u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8);
label_32086c:
    // 0x32086c: 0x7e030060  sq          $v1, 0x60($s0)
    ctx->pc = 0x32086cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 96), GPR_VEC(ctx, 3));
label_320870:
    // 0x320870: 0x7ba208e0  lq          $v0, 0x8E0($sp)
    ctx->pc = 0x320870u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 2272)));
label_320874:
    // 0x320874: 0x7e020070  sq          $v0, 0x70($s0)
    ctx->pc = 0x320874u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 112), GPR_VEC(ctx, 2));
label_320878:
    // 0x320878: 0x7ba308f0  lq          $v1, 0x8F0($sp)
    ctx->pc = 0x320878u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 2288)));
label_32087c:
    // 0x32087c: 0xa2040003  sb          $a0, 0x3($s0)
    ctx->pc = 0x32087cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 4));
label_320880:
    // 0x320880: 0x7e030080  sq          $v1, 0x80($s0)
    ctx->pc = 0x320880u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 128), GPR_VEC(ctx, 3));
label_320884:
    // 0x320884: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x320884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_320888:
    // 0x320888: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x320888u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_32088c:
    // 0x32088c: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x32088cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_320890:
    // 0x320890: 0x1064000b  beq         $v1, $a0, . + 4 + (0xB << 2)
label_320894:
    if (ctx->pc == 0x320894u) {
        ctx->pc = 0x320894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320890u;
        // 0x320894: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x320898u;
        goto label_320898;
    }
    ctx->pc = 0x320890u;
    {
        const bool branch_taken_0x320890 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x320894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320890u;
        // 0x320894: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x320890) {
            ctx->pc = 0x3208C0u;
            goto label_3208c0;
        }
    }
    ctx->pc = 0x320898u;
label_320898:
    // 0x320898: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_32089c:
    if (ctx->pc == 0x32089Cu) {
        ctx->pc = 0x32089Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320898u;
        // 0x32089c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3208A0u;
        goto label_3208a0;
    }
    ctx->pc = 0x320898u;
    {
        const bool branch_taken_0x320898 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32089Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320898u;
        // 0x32089c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320898) {
            ctx->pc = 0x3208B0u;
            goto label_3208b0;
        }
    }
    ctx->pc = 0x3208A0u;
label_3208a0:
    // 0x3208a0: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
label_3208a4:
    if (ctx->pc == 0x3208A4u) {
        ctx->pc = 0x3208A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3208A0u;
        // 0x3208a4: 0x7ba208c0  lq          $v0, 0x8C0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 2240)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3208A8u;
        goto label_3208a8;
    }
    ctx->pc = 0x3208A0u;
    {
        const bool branch_taken_0x3208a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3208A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3208A0u;
        // 0x3208a4: 0x7ba208c0  lq          $v0, 0x8C0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 2240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3208a0) {
            ctx->pc = 0x32090Cu;
            goto label_32090c;
        }
    }
    ctx->pc = 0x3208A8u;
label_3208a8:
    // 0x3208a8: 0x10000020  b           . + 4 + (0x20 << 2)
label_3208ac:
    if (ctx->pc == 0x3208ACu) {
        ctx->pc = 0x3208ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3208A8u;
        // 0x3208ac: 0x8ea20004  lw          $v0, 0x4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3208B0u;
        goto label_3208b0;
    }
    ctx->pc = 0x3208A8u;
    {
        const bool branch_taken_0x3208a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3208ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3208A8u;
        // 0x3208ac: 0x8ea20004  lw          $v0, 0x4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3208a8) {
            ctx->pc = 0x32092Cu;
            goto label_32092c;
        }
    }
    ctx->pc = 0x3208B0u;
label_3208b0:
    // 0x3208b0: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
label_3208b4:
    if (ctx->pc == 0x3208B4u) {
        ctx->pc = 0x3208B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3208B0u;
        // 0x3208b4: 0x7ba20800  lq          $v0, 0x800($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 2048)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3208B8u;
        goto label_3208b8;
    }
    ctx->pc = 0x3208B0u;
    {
        const bool branch_taken_0x3208b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3208B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3208B0u;
        // 0x3208b4: 0x7ba20800  lq          $v0, 0x800($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 2048)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3208b0) {
            ctx->pc = 0x3208E8u;
            goto label_3208e8;
        }
    }
    ctx->pc = 0x3208B8u;
label_3208b8:
    // 0x3208b8: 0x1000001c  b           . + 4 + (0x1C << 2)
label_3208bc:
    if (ctx->pc == 0x3208BCu) {
        ctx->pc = 0x3208BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3208B8u;
        // 0x3208bc: 0x8ea20004  lw          $v0, 0x4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3208C0u;
        goto label_3208c0;
    }
    ctx->pc = 0x3208B8u;
    {
        const bool branch_taken_0x3208b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3208BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3208B8u;
        // 0x3208bc: 0x8ea20004  lw          $v0, 0x4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3208b8) {
            ctx->pc = 0x32092Cu;
            goto label_32092c;
        }
    }
    ctx->pc = 0x3208C0u;
label_3208c0:
    // 0x3208c0: 0x2652ffc0  addiu       $s2, $s2, -0x40
    ctx->pc = 0x3208c0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967232));
label_3208c4:
    // 0x3208c4: 0x7a420000  lq          $v0, 0x0($s2)
    ctx->pc = 0x3208c4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_3208c8:
    // 0x3208c8: 0x7fa20800  sq          $v0, 0x800($sp)
    ctx->pc = 0x3208c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2048), GPR_VEC(ctx, 2));
label_3208cc:
    // 0x3208cc: 0x7a430010  lq          $v1, 0x10($s2)
    ctx->pc = 0x3208ccu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 16)));
label_3208d0:
    // 0x3208d0: 0x7fa30810  sq          $v1, 0x810($sp)
    ctx->pc = 0x3208d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2064), GPR_VEC(ctx, 3));
label_3208d4:
    // 0x3208d4: 0x7a420020  lq          $v0, 0x20($s2)
    ctx->pc = 0x3208d4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 32)));
label_3208d8:
    // 0x3208d8: 0x7fa20820  sq          $v0, 0x820($sp)
    ctx->pc = 0x3208d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2080), GPR_VEC(ctx, 2));
label_3208dc:
    // 0x3208dc: 0x7a430030  lq          $v1, 0x30($s2)
    ctx->pc = 0x3208dcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 48)));
label_3208e0:
    // 0x3208e0: 0x10000011  b           . + 4 + (0x11 << 2)
label_3208e4:
    if (ctx->pc == 0x3208E4u) {
        ctx->pc = 0x3208E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3208E0u;
        // 0x3208e4: 0x7fa30830  sq          $v1, 0x830($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 2096), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3208E8u;
        goto label_3208e8;
    }
    ctx->pc = 0x3208E0u;
    {
        const bool branch_taken_0x3208e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3208E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3208E0u;
        // 0x3208e4: 0x7fa30830  sq          $v1, 0x830($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 2096), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3208e0) {
            ctx->pc = 0x320928u;
            goto label_320928;
        }
    }
    ctx->pc = 0x3208E8u;
label_3208e8:
    // 0x3208e8: 0x7e420000  sq          $v0, 0x0($s2)
    ctx->pc = 0x3208e8u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 2));
label_3208ec:
    // 0x3208ec: 0x7ba30810  lq          $v1, 0x810($sp)
    ctx->pc = 0x3208ecu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 2064)));
label_3208f0:
    // 0x3208f0: 0x7e430010  sq          $v1, 0x10($s2)
    ctx->pc = 0x3208f0u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), GPR_VEC(ctx, 3));
label_3208f4:
    // 0x3208f4: 0x7ba20820  lq          $v0, 0x820($sp)
    ctx->pc = 0x3208f4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 2080)));
label_3208f8:
    // 0x3208f8: 0x7e420020  sq          $v0, 0x20($s2)
    ctx->pc = 0x3208f8u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 32), GPR_VEC(ctx, 2));
label_3208fc:
    // 0x3208fc: 0x7ba30830  lq          $v1, 0x830($sp)
    ctx->pc = 0x3208fcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 2096)));
label_320900:
    // 0x320900: 0x7e430030  sq          $v1, 0x30($s2)
    ctx->pc = 0x320900u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 48), GPR_VEC(ctx, 3));
label_320904:
    // 0x320904: 0x26520040  addiu       $s2, $s2, 0x40
    ctx->pc = 0x320904u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
label_320908:
    // 0x320908: 0x7ba208c0  lq          $v0, 0x8C0($sp)
    ctx->pc = 0x320908u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 2240)));
label_32090c:
    // 0x32090c: 0x7ba308d0  lq          $v1, 0x8D0($sp)
    ctx->pc = 0x32090cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 2256)));
label_320910:
    // 0x320910: 0x7ba408e0  lq          $a0, 0x8E0($sp)
    ctx->pc = 0x320910u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 2272)));
label_320914:
    // 0x320914: 0x7ba508f0  lq          $a1, 0x8F0($sp)
    ctx->pc = 0x320914u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 2288)));
label_320918:
    // 0x320918: 0x7fa20800  sq          $v0, 0x800($sp)
    ctx->pc = 0x320918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2048), GPR_VEC(ctx, 2));
label_32091c:
    // 0x32091c: 0x7fa30810  sq          $v1, 0x810($sp)
    ctx->pc = 0x32091cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2064), GPR_VEC(ctx, 3));
label_320920:
    // 0x320920: 0x7fa40820  sq          $a0, 0x820($sp)
    ctx->pc = 0x320920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2080), GPR_VEC(ctx, 4));
label_320924:
    // 0x320924: 0x7fa50830  sq          $a1, 0x830($sp)
    ctx->pc = 0x320924u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2096), GPR_VEC(ctx, 5));
label_320928:
    // 0x320928: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x320928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_32092c:
    // 0x32092c: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x32092cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_320930:
    // 0x320930: 0x23e8821  addu        $s1, $s1, $fp
    ctx->pc = 0x320930u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 30)));
label_320934:
    // 0x320934: 0x2deb021  addu        $s6, $s6, $fp
    ctx->pc = 0x320934u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 30)));
label_320938:
    // 0x320938: 0x2e2102a  slt         $v0, $s7, $v0
    ctx->pc = 0x320938u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_32093c:
    // 0x32093c: 0x1440ff68  bnez        $v0, . + 4 + (-0x98 << 2)
label_320940:
    if (ctx->pc == 0x320940u) {
        ctx->pc = 0x320940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32093Cu;
        // 0x320940: 0x26730010  addiu       $s3, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320944u;
        goto label_320944;
    }
    ctx->pc = 0x32093Cu;
    {
        const bool branch_taken_0x32093c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x320940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32093Cu;
        // 0x320940: 0x26730010  addiu       $s3, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32093c) {
            ctx->pc = 0x3206E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3206e0;
        }
    }
    ctx->pc = 0x320944u;
label_320944:
    // 0x320944: 0x7bb009d0  lq          $s0, 0x9D0($sp)
    ctx->pc = 0x320944u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 2512)));
label_320948:
    // 0x320948: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x320948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_32094c:
    // 0x32094c: 0x7bb109c0  lq          $s1, 0x9C0($sp)
    ctx->pc = 0x32094cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 2496)));
label_320950:
    // 0x320950: 0x7bb209b0  lq          $s2, 0x9B0($sp)
    ctx->pc = 0x320950u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 2480)));
label_320954:
    // 0x320954: 0x7bb309a0  lq          $s3, 0x9A0($sp)
    ctx->pc = 0x320954u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 2464)));
label_320958:
    // 0x320958: 0x7bb40990  lq          $s4, 0x990($sp)
    ctx->pc = 0x320958u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 2448)));
label_32095c:
    // 0x32095c: 0x7bb50980  lq          $s5, 0x980($sp)
    ctx->pc = 0x32095cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 2432)));
label_320960:
    // 0x320960: 0x7bb60970  lq          $s6, 0x970($sp)
    ctx->pc = 0x320960u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 2416)));
label_320964:
    // 0x320964: 0x7bb70960  lq          $s7, 0x960($sp)
    ctx->pc = 0x320964u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 2400)));
label_320968:
    // 0x320968: 0x7bbe0950  lq          $fp, 0x950($sp)
    ctx->pc = 0x320968u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 2384)));
label_32096c:
    // 0x32096c: 0xdfbf0940  ld          $ra, 0x940($sp)
    ctx->pc = 0x32096cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 2368)));
label_320970:
    // 0x320970: 0xc7b409e0  lwc1        $f20, 0x9E0($sp)
    ctx->pc = 0x320970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_320974:
    // 0x320974: 0x3e00008  jr          $ra
label_320978:
    if (ctx->pc == 0x320978u) {
        ctx->pc = 0x320978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320974u;
        // 0x320978: 0x27bd09f0  addiu       $sp, $sp, 0x9F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2544));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32097Cu;
        goto label_32097c;
    }
    ctx->pc = 0x320974u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x320978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320974u;
        // 0x320978: 0x27bd09f0  addiu       $sp, $sp, 0x9F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2544));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x320974u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32097Cu;
label_32097c:
    // 0x32097c: 0x0  nop
    ctx->pc = 0x32097cu;
    // NOP
    ctx->pc = 0x320980u;
}
