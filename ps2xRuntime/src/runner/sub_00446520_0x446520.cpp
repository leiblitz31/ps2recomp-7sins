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

// Function: sub_00446520
// Address: 0x446520 - 0x446990
void sub_00446520_0x446520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00446520_0x446520");
#endif

    switch (ctx->pc) {
        case 0x446520u: goto label_446520;
        case 0x446524u: goto label_446524;
        case 0x446528u: goto label_446528;
        case 0x44652cu: goto label_44652c;
        case 0x446530u: goto label_446530;
        case 0x446534u: goto label_446534;
        case 0x446538u: goto label_446538;
        case 0x44653cu: goto label_44653c;
        case 0x446540u: goto label_446540;
        case 0x446544u: goto label_446544;
        case 0x446548u: goto label_446548;
        case 0x44654cu: goto label_44654c;
        case 0x446550u: goto label_446550;
        case 0x446554u: goto label_446554;
        case 0x446558u: goto label_446558;
        case 0x44655cu: goto label_44655c;
        case 0x446560u: goto label_446560;
        case 0x446564u: goto label_446564;
        case 0x446568u: goto label_446568;
        case 0x44656cu: goto label_44656c;
        case 0x446570u: goto label_446570;
        case 0x446574u: goto label_446574;
        case 0x446578u: goto label_446578;
        case 0x44657cu: goto label_44657c;
        case 0x446580u: goto label_446580;
        case 0x446584u: goto label_446584;
        case 0x446588u: goto label_446588;
        case 0x44658cu: goto label_44658c;
        case 0x446590u: goto label_446590;
        case 0x446594u: goto label_446594;
        case 0x446598u: goto label_446598;
        case 0x44659cu: goto label_44659c;
        case 0x4465a0u: goto label_4465a0;
        case 0x4465a4u: goto label_4465a4;
        case 0x4465a8u: goto label_4465a8;
        case 0x4465acu: goto label_4465ac;
        case 0x4465b0u: goto label_4465b0;
        case 0x4465b4u: goto label_4465b4;
        case 0x4465b8u: goto label_4465b8;
        case 0x4465bcu: goto label_4465bc;
        case 0x4465c0u: goto label_4465c0;
        case 0x4465c4u: goto label_4465c4;
        case 0x4465c8u: goto label_4465c8;
        case 0x4465ccu: goto label_4465cc;
        case 0x4465d0u: goto label_4465d0;
        case 0x4465d4u: goto label_4465d4;
        case 0x4465d8u: goto label_4465d8;
        case 0x4465dcu: goto label_4465dc;
        case 0x4465e0u: goto label_4465e0;
        case 0x4465e4u: goto label_4465e4;
        case 0x4465e8u: goto label_4465e8;
        case 0x4465ecu: goto label_4465ec;
        case 0x4465f0u: goto label_4465f0;
        case 0x4465f4u: goto label_4465f4;
        case 0x4465f8u: goto label_4465f8;
        case 0x4465fcu: goto label_4465fc;
        case 0x446600u: goto label_446600;
        case 0x446604u: goto label_446604;
        case 0x446608u: goto label_446608;
        case 0x44660cu: goto label_44660c;
        case 0x446610u: goto label_446610;
        case 0x446614u: goto label_446614;
        case 0x446618u: goto label_446618;
        case 0x44661cu: goto label_44661c;
        case 0x446620u: goto label_446620;
        case 0x446624u: goto label_446624;
        case 0x446628u: goto label_446628;
        case 0x44662cu: goto label_44662c;
        case 0x446630u: goto label_446630;
        case 0x446634u: goto label_446634;
        case 0x446638u: goto label_446638;
        case 0x44663cu: goto label_44663c;
        case 0x446640u: goto label_446640;
        case 0x446644u: goto label_446644;
        case 0x446648u: goto label_446648;
        case 0x44664cu: goto label_44664c;
        case 0x446650u: goto label_446650;
        case 0x446654u: goto label_446654;
        case 0x446658u: goto label_446658;
        case 0x44665cu: goto label_44665c;
        case 0x446660u: goto label_446660;
        case 0x446664u: goto label_446664;
        case 0x446668u: goto label_446668;
        case 0x44666cu: goto label_44666c;
        case 0x446670u: goto label_446670;
        case 0x446674u: goto label_446674;
        case 0x446678u: goto label_446678;
        case 0x44667cu: goto label_44667c;
        case 0x446680u: goto label_446680;
        case 0x446684u: goto label_446684;
        case 0x446688u: goto label_446688;
        case 0x44668cu: goto label_44668c;
        case 0x446690u: goto label_446690;
        case 0x446694u: goto label_446694;
        case 0x446698u: goto label_446698;
        case 0x44669cu: goto label_44669c;
        case 0x4466a0u: goto label_4466a0;
        case 0x4466a4u: goto label_4466a4;
        case 0x4466a8u: goto label_4466a8;
        case 0x4466acu: goto label_4466ac;
        case 0x4466b0u: goto label_4466b0;
        case 0x4466b4u: goto label_4466b4;
        case 0x4466b8u: goto label_4466b8;
        case 0x4466bcu: goto label_4466bc;
        case 0x4466c0u: goto label_4466c0;
        case 0x4466c4u: goto label_4466c4;
        case 0x4466c8u: goto label_4466c8;
        case 0x4466ccu: goto label_4466cc;
        case 0x4466d0u: goto label_4466d0;
        case 0x4466d4u: goto label_4466d4;
        case 0x4466d8u: goto label_4466d8;
        case 0x4466dcu: goto label_4466dc;
        case 0x4466e0u: goto label_4466e0;
        case 0x4466e4u: goto label_4466e4;
        case 0x4466e8u: goto label_4466e8;
        case 0x4466ecu: goto label_4466ec;
        case 0x4466f0u: goto label_4466f0;
        case 0x4466f4u: goto label_4466f4;
        case 0x4466f8u: goto label_4466f8;
        case 0x4466fcu: goto label_4466fc;
        case 0x446700u: goto label_446700;
        case 0x446704u: goto label_446704;
        case 0x446708u: goto label_446708;
        case 0x44670cu: goto label_44670c;
        case 0x446710u: goto label_446710;
        case 0x446714u: goto label_446714;
        case 0x446718u: goto label_446718;
        case 0x44671cu: goto label_44671c;
        case 0x446720u: goto label_446720;
        case 0x446724u: goto label_446724;
        case 0x446728u: goto label_446728;
        case 0x44672cu: goto label_44672c;
        case 0x446730u: goto label_446730;
        case 0x446734u: goto label_446734;
        case 0x446738u: goto label_446738;
        case 0x44673cu: goto label_44673c;
        case 0x446740u: goto label_446740;
        case 0x446744u: goto label_446744;
        case 0x446748u: goto label_446748;
        case 0x44674cu: goto label_44674c;
        case 0x446750u: goto label_446750;
        case 0x446754u: goto label_446754;
        case 0x446758u: goto label_446758;
        case 0x44675cu: goto label_44675c;
        case 0x446760u: goto label_446760;
        case 0x446764u: goto label_446764;
        case 0x446768u: goto label_446768;
        case 0x44676cu: goto label_44676c;
        case 0x446770u: goto label_446770;
        case 0x446774u: goto label_446774;
        case 0x446778u: goto label_446778;
        case 0x44677cu: goto label_44677c;
        case 0x446780u: goto label_446780;
        case 0x446784u: goto label_446784;
        case 0x446788u: goto label_446788;
        case 0x44678cu: goto label_44678c;
        case 0x446790u: goto label_446790;
        case 0x446794u: goto label_446794;
        case 0x446798u: goto label_446798;
        case 0x44679cu: goto label_44679c;
        case 0x4467a0u: goto label_4467a0;
        case 0x4467a4u: goto label_4467a4;
        case 0x4467a8u: goto label_4467a8;
        case 0x4467acu: goto label_4467ac;
        case 0x4467b0u: goto label_4467b0;
        case 0x4467b4u: goto label_4467b4;
        case 0x4467b8u: goto label_4467b8;
        case 0x4467bcu: goto label_4467bc;
        case 0x4467c0u: goto label_4467c0;
        case 0x4467c4u: goto label_4467c4;
        case 0x4467c8u: goto label_4467c8;
        case 0x4467ccu: goto label_4467cc;
        case 0x4467d0u: goto label_4467d0;
        case 0x4467d4u: goto label_4467d4;
        case 0x4467d8u: goto label_4467d8;
        case 0x4467dcu: goto label_4467dc;
        case 0x4467e0u: goto label_4467e0;
        case 0x4467e4u: goto label_4467e4;
        case 0x4467e8u: goto label_4467e8;
        case 0x4467ecu: goto label_4467ec;
        case 0x4467f0u: goto label_4467f0;
        case 0x4467f4u: goto label_4467f4;
        case 0x4467f8u: goto label_4467f8;
        case 0x4467fcu: goto label_4467fc;
        case 0x446800u: goto label_446800;
        case 0x446804u: goto label_446804;
        case 0x446808u: goto label_446808;
        case 0x44680cu: goto label_44680c;
        case 0x446810u: goto label_446810;
        case 0x446814u: goto label_446814;
        case 0x446818u: goto label_446818;
        case 0x44681cu: goto label_44681c;
        case 0x446820u: goto label_446820;
        case 0x446824u: goto label_446824;
        case 0x446828u: goto label_446828;
        case 0x44682cu: goto label_44682c;
        case 0x446830u: goto label_446830;
        case 0x446834u: goto label_446834;
        case 0x446838u: goto label_446838;
        case 0x44683cu: goto label_44683c;
        case 0x446840u: goto label_446840;
        case 0x446844u: goto label_446844;
        case 0x446848u: goto label_446848;
        case 0x44684cu: goto label_44684c;
        case 0x446850u: goto label_446850;
        case 0x446854u: goto label_446854;
        case 0x446858u: goto label_446858;
        case 0x44685cu: goto label_44685c;
        case 0x446860u: goto label_446860;
        case 0x446864u: goto label_446864;
        case 0x446868u: goto label_446868;
        case 0x44686cu: goto label_44686c;
        case 0x446870u: goto label_446870;
        case 0x446874u: goto label_446874;
        case 0x446878u: goto label_446878;
        case 0x44687cu: goto label_44687c;
        case 0x446880u: goto label_446880;
        case 0x446884u: goto label_446884;
        case 0x446888u: goto label_446888;
        case 0x44688cu: goto label_44688c;
        case 0x446890u: goto label_446890;
        case 0x446894u: goto label_446894;
        case 0x446898u: goto label_446898;
        case 0x44689cu: goto label_44689c;
        case 0x4468a0u: goto label_4468a0;
        case 0x4468a4u: goto label_4468a4;
        case 0x4468a8u: goto label_4468a8;
        case 0x4468acu: goto label_4468ac;
        case 0x4468b0u: goto label_4468b0;
        case 0x4468b4u: goto label_4468b4;
        case 0x4468b8u: goto label_4468b8;
        case 0x4468bcu: goto label_4468bc;
        case 0x4468c0u: goto label_4468c0;
        case 0x4468c4u: goto label_4468c4;
        case 0x4468c8u: goto label_4468c8;
        case 0x4468ccu: goto label_4468cc;
        case 0x4468d0u: goto label_4468d0;
        case 0x4468d4u: goto label_4468d4;
        case 0x4468d8u: goto label_4468d8;
        case 0x4468dcu: goto label_4468dc;
        case 0x4468e0u: goto label_4468e0;
        case 0x4468e4u: goto label_4468e4;
        case 0x4468e8u: goto label_4468e8;
        case 0x4468ecu: goto label_4468ec;
        case 0x4468f0u: goto label_4468f0;
        case 0x4468f4u: goto label_4468f4;
        case 0x4468f8u: goto label_4468f8;
        case 0x4468fcu: goto label_4468fc;
        case 0x446900u: goto label_446900;
        case 0x446904u: goto label_446904;
        case 0x446908u: goto label_446908;
        case 0x44690cu: goto label_44690c;
        case 0x446910u: goto label_446910;
        case 0x446914u: goto label_446914;
        case 0x446918u: goto label_446918;
        case 0x44691cu: goto label_44691c;
        case 0x446920u: goto label_446920;
        case 0x446924u: goto label_446924;
        case 0x446928u: goto label_446928;
        case 0x44692cu: goto label_44692c;
        case 0x446930u: goto label_446930;
        case 0x446934u: goto label_446934;
        case 0x446938u: goto label_446938;
        case 0x44693cu: goto label_44693c;
        case 0x446940u: goto label_446940;
        case 0x446944u: goto label_446944;
        case 0x446948u: goto label_446948;
        case 0x44694cu: goto label_44694c;
        case 0x446950u: goto label_446950;
        case 0x446954u: goto label_446954;
        case 0x446958u: goto label_446958;
        case 0x44695cu: goto label_44695c;
        case 0x446960u: goto label_446960;
        case 0x446964u: goto label_446964;
        case 0x446968u: goto label_446968;
        case 0x44696cu: goto label_44696c;
        case 0x446970u: goto label_446970;
        case 0x446974u: goto label_446974;
        case 0x446978u: goto label_446978;
        case 0x44697cu: goto label_44697c;
        case 0x446980u: goto label_446980;
        case 0x446984u: goto label_446984;
        case 0x446988u: goto label_446988;
        case 0x44698cu: goto label_44698c;
        default: break;
    }

    ctx->pc = 0x446520u;

label_446520:
    // 0x446520: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x446520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_446524:
    // 0x446524: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x446524u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_446528:
    // 0x446528: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x446528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_44652c:
    // 0x44652c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x44652cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_446530:
    // 0x446530: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x446530u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
label_446534:
    // 0x446534: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x446534u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_446538:
    // 0x446538: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x446538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_44653c:
    // 0x44653c: 0x3c170062  lui         $s7, 0x62
    ctx->pc = 0x44653cu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)98 << 16));
label_446540:
    // 0x446540: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x446540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_446544:
    // 0x446544: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x446544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_446548:
    // 0x446548: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x446548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_44654c:
    // 0x44654c: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x44654cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
label_446550:
    // 0x446550: 0x125300a9  beq         $s2, $s3, . + 4 + (0xA9 << 2)
label_446554:
    if (ctx->pc == 0x446554u) {
        ctx->pc = 0x446554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446550u;
        // 0x446554: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x446558u;
        goto label_446558;
    }
    ctx->pc = 0x446550u;
    {
        const bool branch_taken_0x446550 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 19));
        ctx->pc = 0x446554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446550u;
        // 0x446554: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x446550) {
            ctx->pc = 0x4467F8u;
            goto label_4467f8;
        }
    }
    ctx->pc = 0x446558u;
label_446558:
    // 0x446558: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x446558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_44655c:
    // 0x44655c: 0x2450ffff  addiu       $s0, $v0, -0x1
    ctx->pc = 0x44655cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_446560:
    // 0x446560: 0x60000a4  bltz        $s0, . + 4 + (0xA4 << 2)
label_446564:
    if (ctx->pc == 0x446564u) {
        ctx->pc = 0x446564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446560u;
        // 0x446564: 0x24030028  addiu       $v1, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x446568u;
        goto label_446568;
    }
    ctx->pc = 0x446560u;
    {
        const bool branch_taken_0x446560 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x446564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446560u;
        // 0x446564: 0x24030028  addiu       $v1, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x446560) {
            ctx->pc = 0x4467F4u;
            goto label_4467f4;
        }
    }
    ctx->pc = 0x446568u;
label_446568:
    // 0x446568: 0x101027  nor         $v0, $zero, $s0
    ctx->pc = 0x446568u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 16)));
label_44656c:
    // 0x44656c: 0x2038818  mult        $s1, $s0, $v1
    ctx->pc = 0x44656cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
label_446570:
    // 0x446570: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x446570u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_446574:
    // 0x446574: 0x26f6e880  addiu       $s6, $s7, -0x1780
    ctx->pc = 0x446574u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 23), 4294961280));
label_446578:
    // 0x446578: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
label_44657c:
    if (ctx->pc == 0x44657Cu) {
        ctx->pc = 0x44657Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446578u;
        // 0x44657c: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x446580u;
        goto label_446580;
    }
    ctx->pc = 0x446578u;
    {
        const bool branch_taken_0x446578 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44657Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446578u;
        // 0x44657c: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x446578) {
            ctx->pc = 0x446644u;
            goto label_446644;
        }
    }
    ctx->pc = 0x446580u;
label_446580:
    // 0x446580: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x446580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_446584:
    // 0x446584: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x446584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_446588:
    // 0x446588: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x446588u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
label_44658c:
    // 0x44658c: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x44658cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_446590:
    // 0x446590: 0x68620007  ldl         $v0, 0x7($v1)
    ctx->pc = 0x446590u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_446594:
    // 0x446594: 0x6c620000  ldr         $v0, 0x0($v1)
    ctx->pc = 0x446594u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_446598:
    // 0x446598: 0x6865000f  ldl         $a1, 0xF($v1)
    ctx->pc = 0x446598u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_44659c:
    // 0x44659c: 0x6c650008  ldr         $a1, 0x8($v1)
    ctx->pc = 0x44659cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_4465a0:
    // 0x4465a0: 0x68660017  ldl         $a2, 0x17($v1)
    ctx->pc = 0x4465a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_4465a4:
    // 0x4465a4: 0x6c660010  ldr         $a2, 0x10($v1)
    ctx->pc = 0x4465a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_4465a8:
    // 0x4465a8: 0x6867001f  ldl         $a3, 0x1F($v1)
    ctx->pc = 0x4465a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_4465ac:
    // 0x4465ac: 0x6c670018  ldr         $a3, 0x18($v1)
    ctx->pc = 0x4465acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_4465b0:
    // 0x4465b0: 0xb0820007  sdl         $v0, 0x7($a0)
    ctx->pc = 0x4465b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4465b4:
    // 0x4465b4: 0xb4820000  sdr         $v0, 0x0($a0)
    ctx->pc = 0x4465b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4465b8:
    // 0x4465b8: 0xb085000f  sdl         $a1, 0xF($a0)
    ctx->pc = 0x4465b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4465bc:
    // 0x4465bc: 0xb4850008  sdr         $a1, 0x8($a0)
    ctx->pc = 0x4465bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4465c0:
    // 0x4465c0: 0xb0860017  sdl         $a2, 0x17($a0)
    ctx->pc = 0x4465c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4465c4:
    // 0x4465c4: 0xb4860010  sdr         $a2, 0x10($a0)
    ctx->pc = 0x4465c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4465c8:
    // 0x4465c8: 0xb087001f  sdl         $a3, 0x1F($a0)
    ctx->pc = 0x4465c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4465cc:
    // 0x4465cc: 0xb4870018  sdr         $a3, 0x18($a0)
    ctx->pc = 0x4465ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4465d0:
    // 0x4465d0: 0x68620027  ldl         $v0, 0x27($v1)
    ctx->pc = 0x4465d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_4465d4:
    // 0x4465d4: 0x6c620020  ldr         $v0, 0x20($v1)
    ctx->pc = 0x4465d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_4465d8:
    // 0x4465d8: 0xb0820027  sdl         $v0, 0x27($a0)
    ctx->pc = 0x4465d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4465dc:
    // 0x4465dc: 0xb4820020  sdr         $v0, 0x20($a0)
    ctx->pc = 0x4465dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4465e0:
    // 0x4465e0: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x4465e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_4465e4:
    // 0x4465e4: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x4465e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_4465e8:
    // 0x4465e8: 0x8c440024  lw          $a0, 0x24($v0)
    ctx->pc = 0x4465e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_4465ec:
    // 0x4465ec: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x4465ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
label_4465f0:
    // 0x4465f0: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x4465f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
label_4465f4:
    // 0x4465f4: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x4465f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
label_4465f8:
    // 0x4465f8: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
label_4465fc:
    if (ctx->pc == 0x4465FCu) {
        ctx->pc = 0x4465FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4465F8u;
        // 0x4465fc: 0xac400018  sw          $zero, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x446600u;
        goto label_446600;
    }
    ctx->pc = 0x4465F8u;
    {
        const bool branch_taken_0x4465f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4465FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4465F8u;
        // 0x4465fc: 0xac400018  sw          $zero, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4465f8) {
            ctx->pc = 0x446638u;
            goto label_446638;
        }
    }
    ctx->pc = 0x446600u;
label_446600:
    // 0x446600: 0x8ec20108  lw          $v0, 0x108($s6)
    ctx->pc = 0x446600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 264)));
label_446604:
    // 0x446604: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x446604u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_446608:
    // 0x446608: 0x40f809  jalr        $v0
label_44660c:
    if (ctx->pc == 0x44660Cu) {
        ctx->pc = 0x44660Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446608u;
        // 0x44660c: 0x34a50409  ori         $a1, $a1, 0x409 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1033);
        ctx->in_delay_slot = false;
        ctx->pc = 0x446610u;
        goto label_446610;
    }
    ctx->pc = 0x446608u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x446610u);
        ctx->pc = 0x44660Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446608u;
        // 0x44660c: 0x34a50409  ori         $a1, $a1, 0x409 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1033);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x446608u, 0x446610u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x446610u;
label_446610:
    // 0x446610: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x446610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_446614:
    // 0x446614: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x446614u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_446618:
    // 0x446618: 0x2232821  addu        $a1, $s1, $v1
    ctx->pc = 0x446618u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_44661c:
    // 0x44661c: 0x10800062  beqz        $a0, . + 4 + (0x62 << 2)
label_446620:
    if (ctx->pc == 0x446620u) {
        ctx->pc = 0x446620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44661Cu;
        // 0x446620: 0xaca40020  sw          $a0, 0x20($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x446624u;
        goto label_446624;
    }
    ctx->pc = 0x44661Cu;
    {
        const bool branch_taken_0x44661c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x446620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44661Cu;
        // 0x446620: 0xaca40020  sw          $a0, 0x20($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44661c) {
            ctx->pc = 0x4467A8u;
            goto label_4467a8;
        }
    }
    ctx->pc = 0x446624u;
label_446624:
    // 0x446624: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x446624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_446628:
    // 0x446628: 0x8ca60024  lw          $a2, 0x24($a1)
    ctx->pc = 0x446628u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
label_44662c:
    // 0x44662c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x44662cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_446630:
    // 0x446630: 0xc0bb778  jal         func_2EDDE0
label_446634:
    if (ctx->pc == 0x446634u) {
        ctx->pc = 0x446634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446630u;
        // 0x446634: 0x8c450020  lw          $a1, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x446638u;
        goto label_446638;
    }
    ctx->pc = 0x446630u;
    SET_GPR_U32(ctx, 31, 0x446638u);
    ctx->pc = 0x446634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x446630u;
    // 0x446634: 0x8c450020  lw          $a1, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x446630u, 0x446638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x446638u;
label_446638:
    // 0x446638: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x446638u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_44663c:
    // 0x44663c: 0x600006c  bltz        $s0, . + 4 + (0x6C << 2)
label_446640:
    if (ctx->pc == 0x446640u) {
        ctx->pc = 0x446640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44663Cu;
        // 0x446640: 0x2631ffd8  addiu       $s1, $s1, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x446644u;
        goto label_446644;
    }
    ctx->pc = 0x44663Cu;
    {
        const bool branch_taken_0x44663c = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x446640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44663Cu;
        // 0x446640: 0x2631ffd8  addiu       $s1, $s1, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44663c) {
            ctx->pc = 0x4467F0u;
            goto label_4467f0;
        }
    }
    ctx->pc = 0x446644u;
label_446644:
    // 0x446644: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x446644u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_446648:
    // 0x446648: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x446648u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_44664c:
    // 0x44664c: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x44664cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_446650:
    // 0x446650: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x446650u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
label_446654:
    // 0x446654: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x446654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_446658:
    // 0x446658: 0x686a0007  ldl         $t2, 0x7($v1)
    ctx->pc = 0x446658u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
label_44665c:
    // 0x44665c: 0x6c6a0000  ldr         $t2, 0x0($v1)
    ctx->pc = 0x44665cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
label_446660:
    // 0x446660: 0x686b000f  ldl         $t3, 0xF($v1)
    ctx->pc = 0x446660u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
label_446664:
    // 0x446664: 0x6c6b0008  ldr         $t3, 0x8($v1)
    ctx->pc = 0x446664u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
label_446668:
    // 0x446668: 0x68620017  ldl         $v0, 0x17($v1)
    ctx->pc = 0x446668u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_44666c:
    // 0x44666c: 0x6c620010  ldr         $v0, 0x10($v1)
    ctx->pc = 0x44666cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_446670:
    // 0x446670: 0x6865001f  ldl         $a1, 0x1F($v1)
    ctx->pc = 0x446670u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_446674:
    // 0x446674: 0x6c650018  ldr         $a1, 0x18($v1)
    ctx->pc = 0x446674u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_446678:
    // 0x446678: 0xb08a0007  sdl         $t2, 0x7($a0)
    ctx->pc = 0x446678u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_44667c:
    // 0x44667c: 0xb48a0000  sdr         $t2, 0x0($a0)
    ctx->pc = 0x44667cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_446680:
    // 0x446680: 0xb08b000f  sdl         $t3, 0xF($a0)
    ctx->pc = 0x446680u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_446684:
    // 0x446684: 0xb48b0008  sdr         $t3, 0x8($a0)
    ctx->pc = 0x446684u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_446688:
    // 0x446688: 0xb0820017  sdl         $v0, 0x17($a0)
    ctx->pc = 0x446688u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_44668c:
    // 0x44668c: 0xb4820010  sdr         $v0, 0x10($a0)
    ctx->pc = 0x44668cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_446690:
    // 0x446690: 0xb085001f  sdl         $a1, 0x1F($a0)
    ctx->pc = 0x446690u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_446694:
    // 0x446694: 0xb4850018  sdr         $a1, 0x18($a0)
    ctx->pc = 0x446694u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_446698:
    // 0x446698: 0x686a0027  ldl         $t2, 0x27($v1)
    ctx->pc = 0x446698u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
label_44669c:
    // 0x44669c: 0x6c6a0020  ldr         $t2, 0x20($v1)
    ctx->pc = 0x44669cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
label_4466a0:
    // 0x4466a0: 0xb08a0027  sdl         $t2, 0x27($a0)
    ctx->pc = 0x4466a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4466a4:
    // 0x4466a4: 0xb48a0020  sdr         $t2, 0x20($a0)
    ctx->pc = 0x4466a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4466a8:
    // 0x4466a8: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x4466a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_4466ac:
    // 0x4466ac: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x4466acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_4466b0:
    // 0x4466b0: 0x8c440024  lw          $a0, 0x24($v0)
    ctx->pc = 0x4466b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_4466b4:
    // 0x4466b4: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x4466b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
label_4466b8:
    // 0x4466b8: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x4466b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
label_4466bc:
    // 0x4466bc: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x4466bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
label_4466c0:
    // 0x4466c0: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
label_4466c4:
    if (ctx->pc == 0x4466C4u) {
        ctx->pc = 0x4466C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4466C0u;
        // 0x4466c4: 0xac400018  sw          $zero, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4466C8u;
        goto label_4466c8;
    }
    ctx->pc = 0x4466C0u;
    {
        const bool branch_taken_0x4466c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4466C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4466C0u;
        // 0x4466c4: 0xac400018  sw          $zero, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4466c0) {
            ctx->pc = 0x446700u;
            goto label_446700;
        }
    }
    ctx->pc = 0x4466C8u;
label_4466c8:
    // 0x4466c8: 0x8ec20108  lw          $v0, 0x108($s6)
    ctx->pc = 0x4466c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 264)));
label_4466cc:
    // 0x4466cc: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x4466ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_4466d0:
    // 0x4466d0: 0x40f809  jalr        $v0
label_4466d4:
    if (ctx->pc == 0x4466D4u) {
        ctx->pc = 0x4466D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4466D0u;
        // 0x4466d4: 0x34a50409  ori         $a1, $a1, 0x409 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1033);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4466D8u;
        goto label_4466d8;
    }
    ctx->pc = 0x4466D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4466D8u);
        ctx->pc = 0x4466D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4466D0u;
        // 0x4466d4: 0x34a50409  ori         $a1, $a1, 0x409 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1033);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4466D0u, 0x4466D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4466D8u;
label_4466d8:
    // 0x4466d8: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x4466d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_4466dc:
    // 0x4466dc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4466dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4466e0:
    // 0x4466e0: 0x2232821  addu        $a1, $s1, $v1
    ctx->pc = 0x4466e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_4466e4:
    // 0x4466e4: 0x10800030  beqz        $a0, . + 4 + (0x30 << 2)
label_4466e8:
    if (ctx->pc == 0x4466E8u) {
        ctx->pc = 0x4466E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4466E4u;
        // 0x4466e8: 0xaca40020  sw          $a0, 0x20($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4466ECu;
        goto label_4466ec;
    }
    ctx->pc = 0x4466E4u;
    {
        const bool branch_taken_0x4466e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4466E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4466E4u;
        // 0x4466e8: 0xaca40020  sw          $a0, 0x20($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4466e4) {
            ctx->pc = 0x4467A8u;
            goto label_4467a8;
        }
    }
    ctx->pc = 0x4466ECu;
label_4466ec:
    // 0x4466ec: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x4466ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_4466f0:
    // 0x4466f0: 0x8ca60024  lw          $a2, 0x24($a1)
    ctx->pc = 0x4466f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
label_4466f4:
    // 0x4466f4: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x4466f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_4466f8:
    // 0x4466f8: 0xc0bb778  jal         func_2EDDE0
label_4466fc:
    if (ctx->pc == 0x4466FCu) {
        ctx->pc = 0x4466FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4466F8u;
        // 0x4466fc: 0x8c450020  lw          $a1, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x446700u;
        goto label_446700;
    }
    ctx->pc = 0x4466F8u;
    SET_GPR_U32(ctx, 31, 0x446700u);
    ctx->pc = 0x4466FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4466F8u;
    // 0x4466fc: 0x8c450020  lw          $a1, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x4466F8u, 0x446700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x446700u;
label_446700:
    // 0x446700: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x446700u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_446704:
    // 0x446704: 0x2630ffd8  addiu       $s0, $s1, -0x28
    ctx->pc = 0x446704u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967256));
label_446708:
    // 0x446708: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x446708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_44670c:
    // 0x44670c: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x44670cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
label_446710:
    // 0x446710: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x446710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_446714:
    // 0x446714: 0x68660007  ldl         $a2, 0x7($v1)
    ctx->pc = 0x446714u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_446718:
    // 0x446718: 0x6c660000  ldr         $a2, 0x0($v1)
    ctx->pc = 0x446718u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_44671c:
    // 0x44671c: 0x6867000f  ldl         $a3, 0xF($v1)
    ctx->pc = 0x44671cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_446720:
    // 0x446720: 0x6c670008  ldr         $a3, 0x8($v1)
    ctx->pc = 0x446720u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_446724:
    // 0x446724: 0x686a0017  ldl         $t2, 0x17($v1)
    ctx->pc = 0x446724u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
label_446728:
    // 0x446728: 0x6c6a0010  ldr         $t2, 0x10($v1)
    ctx->pc = 0x446728u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
label_44672c:
    // 0x44672c: 0x686b001f  ldl         $t3, 0x1F($v1)
    ctx->pc = 0x44672cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
label_446730:
    // 0x446730: 0x6c6b0018  ldr         $t3, 0x18($v1)
    ctx->pc = 0x446730u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
label_446734:
    // 0x446734: 0xb0860007  sdl         $a2, 0x7($a0)
    ctx->pc = 0x446734u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_446738:
    // 0x446738: 0xb4860000  sdr         $a2, 0x0($a0)
    ctx->pc = 0x446738u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_44673c:
    // 0x44673c: 0xb087000f  sdl         $a3, 0xF($a0)
    ctx->pc = 0x44673cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_446740:
    // 0x446740: 0xb4870008  sdr         $a3, 0x8($a0)
    ctx->pc = 0x446740u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_446744:
    // 0x446744: 0xb08a0017  sdl         $t2, 0x17($a0)
    ctx->pc = 0x446744u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_446748:
    // 0x446748: 0xb48a0010  sdr         $t2, 0x10($a0)
    ctx->pc = 0x446748u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_44674c:
    // 0x44674c: 0xb08b001f  sdl         $t3, 0x1F($a0)
    ctx->pc = 0x44674cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_446750:
    // 0x446750: 0xb48b0018  sdr         $t3, 0x18($a0)
    ctx->pc = 0x446750u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_446754:
    // 0x446754: 0x68660027  ldl         $a2, 0x27($v1)
    ctx->pc = 0x446754u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_446758:
    // 0x446758: 0x6c660020  ldr         $a2, 0x20($v1)
    ctx->pc = 0x446758u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_44675c:
    // 0x44675c: 0xb0860027  sdl         $a2, 0x27($a0)
    ctx->pc = 0x44675cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_446760:
    // 0x446760: 0xb4860020  sdr         $a2, 0x20($a0)
    ctx->pc = 0x446760u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_446764:
    // 0x446764: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x446764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_446768:
    // 0x446768: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x446768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_44676c:
    // 0x44676c: 0x8c440024  lw          $a0, 0x24($v0)
    ctx->pc = 0x44676cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_446770:
    // 0x446770: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x446770u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
label_446774:
    // 0x446774: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x446774u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
label_446778:
    // 0x446778: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x446778u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
label_44677c:
    // 0x44677c: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
label_446780:
    if (ctx->pc == 0x446780u) {
        ctx->pc = 0x446780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44677Cu;
        // 0x446780: 0xac400018  sw          $zero, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x446784u;
        goto label_446784;
    }
    ctx->pc = 0x44677Cu;
    {
        const bool branch_taken_0x44677c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x446780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44677Cu;
        // 0x446780: 0xac400018  sw          $zero, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44677c) {
            ctx->pc = 0x4467E4u;
            goto label_4467e4;
        }
    }
    ctx->pc = 0x446784u;
label_446784:
    // 0x446784: 0x8ec20108  lw          $v0, 0x108($s6)
    ctx->pc = 0x446784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 264)));
label_446788:
    // 0x446788: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x446788u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_44678c:
    // 0x44678c: 0x40f809  jalr        $v0
label_446790:
    if (ctx->pc == 0x446790u) {
        ctx->pc = 0x446790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44678Cu;
        // 0x446790: 0x34a50409  ori         $a1, $a1, 0x409 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1033);
        ctx->in_delay_slot = false;
        ctx->pc = 0x446794u;
        goto label_446794;
    }
    ctx->pc = 0x44678Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x446794u);
        ctx->pc = 0x446790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44678Cu;
        // 0x446790: 0x34a50409  ori         $a1, $a1, 0x409 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1033);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44678Cu, 0x446794u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x446794u;
label_446794:
    // 0x446794: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x446794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_446798:
    // 0x446798: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x446798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_44679c:
    // 0x44679c: 0x2032821  addu        $a1, $s0, $v1
    ctx->pc = 0x44679cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_4467a0:
    // 0x4467a0: 0x1480000b  bnez        $a0, . + 4 + (0xB << 2)
label_4467a4:
    if (ctx->pc == 0x4467A4u) {
        ctx->pc = 0x4467A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4467A0u;
        // 0x4467a4: 0xaca40020  sw          $a0, 0x20($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4467A8u;
        goto label_4467a8;
    }
    ctx->pc = 0x4467A0u;
    {
        const bool branch_taken_0x4467a0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x4467A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4467A0u;
        // 0x4467a4: 0xaca40020  sw          $a0, 0x20($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4467a0) {
            ctx->pc = 0x4467D0u;
            goto label_4467d0;
        }
    }
    ctx->pc = 0x4467A8u;
label_4467a8:
    // 0x4467a8: 0xafb50000  sw          $s5, 0x0($sp)
    ctx->pc = 0x4467a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 21));
label_4467ac:
    // 0x4467ac: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x4467acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_4467b0:
    // 0x4467b0: 0x34840013  ori         $a0, $a0, 0x13
    ctx->pc = 0x4467b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
label_4467b4:
    // 0x4467b4: 0xc1035f6  jal         func_40D7D8
label_4467b8:
    if (ctx->pc == 0x4467B8u) {
        ctx->pc = 0x4467B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4467B4u;
        // 0x4467b8: 0x8ca50024  lw          $a1, 0x24($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4467BCu;
        goto label_4467bc;
    }
    ctx->pc = 0x4467B4u;
    SET_GPR_U32(ctx, 31, 0x4467BCu);
    ctx->pc = 0x4467B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4467B4u;
    // 0x4467b8: 0x8ca50024  lw          $a1, 0x24($a1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x4467B4u, 0x4467BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4467BCu;
label_4467bc:
    // 0x4467bc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4467bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_4467c0:
    // 0x4467c0: 0xc103628  jal         func_40D8A0
label_4467c4:
    if (ctx->pc == 0x4467C4u) {
        ctx->pc = 0x4467C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4467C0u;
        // 0x4467c4: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4467C8u;
        goto label_4467c8;
    }
    ctx->pc = 0x4467C0u;
    SET_GPR_U32(ctx, 31, 0x4467C8u);
    ctx->pc = 0x4467C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4467C0u;
    // 0x4467c4: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x4467C0u, 0x4467C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4467C8u;
label_4467c8:
    // 0x4467c8: 0x10000065  b           . + 4 + (0x65 << 2)
label_4467cc:
    if (ctx->pc == 0x4467CCu) {
        ctx->pc = 0x4467CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4467C8u;
        // 0x4467cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4467D0u;
        goto label_4467d0;
    }
    ctx->pc = 0x4467C8u;
    {
        const bool branch_taken_0x4467c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4467CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4467C8u;
        // 0x4467cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4467c8) {
            ctx->pc = 0x446960u;
            goto label_446960;
        }
    }
    ctx->pc = 0x4467D0u;
label_4467d0:
    // 0x4467d0: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x4467d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_4467d4:
    // 0x4467d4: 0x8ca60024  lw          $a2, 0x24($a1)
    ctx->pc = 0x4467d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
label_4467d8:
    // 0x4467d8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x4467d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_4467dc:
    // 0x4467dc: 0xc0bb778  jal         func_2EDDE0
label_4467e0:
    if (ctx->pc == 0x4467E0u) {
        ctx->pc = 0x4467E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4467DCu;
        // 0x4467e0: 0x8c450020  lw          $a1, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4467E4u;
        goto label_4467e4;
    }
    ctx->pc = 0x4467DCu;
    SET_GPR_U32(ctx, 31, 0x4467E4u);
    ctx->pc = 0x4467E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4467DCu;
    // 0x4467e0: 0x8c450020  lw          $a1, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x4467DCu, 0x4467E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4467E4u;
label_4467e4:
    // 0x4467e4: 0x2694fffe  addiu       $s4, $s4, -0x2
    ctx->pc = 0x4467e4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967294));
label_4467e8:
    // 0x4467e8: 0x681ff97  bgez        $s4, . + 4 + (-0x69 << 2)
label_4467ec:
    if (ctx->pc == 0x4467ECu) {
        ctx->pc = 0x4467ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4467E8u;
        // 0x4467ec: 0x2631ffb0  addiu       $s1, $s1, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967216));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4467F0u;
        goto label_4467f0;
    }
    ctx->pc = 0x4467E8u;
    {
        const bool branch_taken_0x4467e8 = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x4467ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4467E8u;
        // 0x4467ec: 0x2631ffb0  addiu       $s1, $s1, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967216));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4467e8) {
            ctx->pc = 0x446648u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_446648;
        }
    }
    ctx->pc = 0x4467F0u;
label_4467f0:
    // 0x4467f0: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x4467f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_4467f4:
    // 0x4467f4: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x4467f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
label_4467f8:
    // 0x4467f8: 0x8f83bf20  lw          $v1, -0x40E0($gp)
    ctx->pc = 0x4467f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950688)));
label_4467fc:
    // 0x4467fc: 0x26e2e880  addiu       $v0, $s7, -0x1780
    ctx->pc = 0x4467fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294961280));
label_446800:
    // 0x446800: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x446800u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_446804:
    // 0x446804: 0x8e460008  lw          $a2, 0x8($s2)
    ctx->pc = 0x446804u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_446808:
    // 0x446808: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x446808u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_44680c:
    // 0x44680c: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x44680cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_446810:
    // 0x446810: 0x8c620038  lw          $v0, 0x38($v1)
    ctx->pc = 0x446810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
label_446814:
    // 0x446814: 0x2490ffff  addiu       $s0, $a0, -0x1
    ctx->pc = 0x446814u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_446818:
    // 0x446818: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x446818u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_44681c:
    // 0x44681c: 0x6000037  bltz        $s0, . + 4 + (0x37 << 2)
label_446820:
    if (ctx->pc == 0x446820u) {
        ctx->pc = 0x446820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44681Cu;
        // 0x446820: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x446824u;
        goto label_446824;
    }
    ctx->pc = 0x44681Cu;
    {
        const bool branch_taken_0x44681c = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x446820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44681Cu;
        // 0x446820: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44681c) {
            ctx->pc = 0x4468FCu;
            goto label_4468fc;
        }
    }
    ctx->pc = 0x446824u;
label_446824:
    // 0x446824: 0x24090028  addiu       $t1, $zero, 0x28
    ctx->pc = 0x446824u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_446828:
    // 0x446828: 0x2092018  mult        $a0, $s0, $t1
    ctx->pc = 0x446828u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_44682c:
    // 0x44682c: 0x0  nop
    ctx->pc = 0x44682cu;
    // NOP
label_446830:
    // 0x446830: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x446830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_446834:
    // 0x446834: 0x1011c0  sll         $v0, $s0, 7
    ctx->pc = 0x446834u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 7));
label_446838:
    // 0x446838: 0x8e650008  lw          $a1, 0x8($s3)
    ctx->pc = 0x446838u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_44683c:
    // 0x44683c: 0xc23821  addu        $a3, $a2, $v0
    ctx->pc = 0x44683cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_446840:
    // 0x446840: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x446840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_446844:
    // 0x446844: 0xac670008  sw          $a3, 0x8($v1)
    ctx->pc = 0x446844u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 7));
label_446848:
    // 0x446848: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x446848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_44684c:
    // 0x44684c: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x44684cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_446850:
    // 0x446850: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_446854:
    if (ctx->pc == 0x446854u) {
        ctx->pc = 0x446854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446850u;
        // 0x446854: 0x2608ffff  addiu       $t0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x446858u;
        goto label_446858;
    }
    ctx->pc = 0x446850u;
    {
        const bool branch_taken_0x446850 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x446854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446850u;
        // 0x446854: 0x2608ffff  addiu       $t0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x446850) {
            ctx->pc = 0x4468F0u;
            goto label_4468f0;
        }
    }
    ctx->pc = 0x446858u;
label_446858:
    // 0x446858: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x446858u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_44685c:
    // 0x44685c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x44685cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_446860:
    // 0x446860: 0x641025  or          $v0, $v1, $a0
    ctx->pc = 0x446860u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_446864:
    // 0x446864: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x446864u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
label_446868:
    // 0x446868: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_44686c:
    if (ctx->pc == 0x44686Cu) {
        ctx->pc = 0x44686Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446868u;
        // 0x44686c: 0x24620080  addiu       $v0, $v1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x446870u;
        goto label_446870;
    }
    ctx->pc = 0x446868u;
    {
        const bool branch_taken_0x446868 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44686Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446868u;
        // 0x44686c: 0x24620080  addiu       $v0, $v1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x446868) {
            ctx->pc = 0x4468C4u;
            goto label_4468c4;
        }
    }
    ctx->pc = 0x446870u;
label_446870:
    // 0x446870: 0x68650007  ldl         $a1, 0x7($v1)
    ctx->pc = 0x446870u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_446874:
    // 0x446874: 0x6c650000  ldr         $a1, 0x0($v1)
    ctx->pc = 0x446874u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_446878:
    // 0x446878: 0x6867000f  ldl         $a3, 0xF($v1)
    ctx->pc = 0x446878u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_44687c:
    // 0x44687c: 0x6c670008  ldr         $a3, 0x8($v1)
    ctx->pc = 0x44687cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_446880:
    // 0x446880: 0x686a0017  ldl         $t2, 0x17($v1)
    ctx->pc = 0x446880u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
label_446884:
    // 0x446884: 0x6c6a0010  ldr         $t2, 0x10($v1)
    ctx->pc = 0x446884u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
label_446888:
    // 0x446888: 0x686b001f  ldl         $t3, 0x1F($v1)
    ctx->pc = 0x446888u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
label_44688c:
    // 0x44688c: 0x6c6b0018  ldr         $t3, 0x18($v1)
    ctx->pc = 0x44688cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
label_446890:
    // 0x446890: 0xb0850007  sdl         $a1, 0x7($a0)
    ctx->pc = 0x446890u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_446894:
    // 0x446894: 0xb4850000  sdr         $a1, 0x0($a0)
    ctx->pc = 0x446894u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_446898:
    // 0x446898: 0xb087000f  sdl         $a3, 0xF($a0)
    ctx->pc = 0x446898u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_44689c:
    // 0x44689c: 0xb4870008  sdr         $a3, 0x8($a0)
    ctx->pc = 0x44689cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4468a0:
    // 0x4468a0: 0xb08a0017  sdl         $t2, 0x17($a0)
    ctx->pc = 0x4468a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4468a4:
    // 0x4468a4: 0xb48a0010  sdr         $t2, 0x10($a0)
    ctx->pc = 0x4468a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4468a8:
    // 0x4468a8: 0xb08b001f  sdl         $t3, 0x1F($a0)
    ctx->pc = 0x4468a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4468ac:
    // 0x4468ac: 0xb48b0018  sdr         $t3, 0x18($a0)
    ctx->pc = 0x4468acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4468b0:
    // 0x4468b0: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x4468b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_4468b4:
    // 0x4468b4: 0x1462ffee  bne         $v1, $v0, . + 4 + (-0x12 << 2)
label_4468b8:
    if (ctx->pc == 0x4468B8u) {
        ctx->pc = 0x4468B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4468B4u;
        // 0x4468b8: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4468BCu;
        goto label_4468bc;
    }
    ctx->pc = 0x4468B4u;
    {
        const bool branch_taken_0x4468b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x4468B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4468B4u;
        // 0x4468b8: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4468b4) {
            ctx->pc = 0x446870u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_446870;
        }
    }
    ctx->pc = 0x4468BCu;
label_4468bc:
    // 0x4468bc: 0x1000000d  b           . + 4 + (0xD << 2)
label_4468c0:
    if (ctx->pc == 0x4468C0u) {
        ctx->pc = 0x4468C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4468BCu;
        // 0x4468c0: 0x100802d  daddu       $s0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4468C4u;
        goto label_4468c4;
    }
    ctx->pc = 0x4468BCu;
    {
        const bool branch_taken_0x4468bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4468C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4468BCu;
        // 0x4468c0: 0x100802d  daddu       $s0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4468bc) {
            ctx->pc = 0x4468F4u;
            goto label_4468f4;
        }
    }
    ctx->pc = 0x4468C4u;
label_4468c4:
    // 0x4468c4: 0xdc650000  ld          $a1, 0x0($v1)
    ctx->pc = 0x4468c4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 0)));
label_4468c8:
    // 0x4468c8: 0xdc670008  ld          $a3, 0x8($v1)
    ctx->pc = 0x4468c8u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 8)));
label_4468cc:
    // 0x4468cc: 0xdc6a0010  ld          $t2, 0x10($v1)
    ctx->pc = 0x4468ccu;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 3), 16)));
label_4468d0:
    // 0x4468d0: 0xdc6b0018  ld          $t3, 0x18($v1)
    ctx->pc = 0x4468d0u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 3), 24)));
label_4468d4:
    // 0x4468d4: 0xfc850000  sd          $a1, 0x0($a0)
    ctx->pc = 0x4468d4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 5));
label_4468d8:
    // 0x4468d8: 0xfc870008  sd          $a3, 0x8($a0)
    ctx->pc = 0x4468d8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 7));
label_4468dc:
    // 0x4468dc: 0xfc8a0010  sd          $t2, 0x10($a0)
    ctx->pc = 0x4468dcu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 10));
label_4468e0:
    // 0x4468e0: 0xfc8b0018  sd          $t3, 0x18($a0)
    ctx->pc = 0x4468e0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 11));
label_4468e4:
    // 0x4468e4: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x4468e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_4468e8:
    // 0x4468e8: 0x1462fff6  bne         $v1, $v0, . + 4 + (-0xA << 2)
label_4468ec:
    if (ctx->pc == 0x4468ECu) {
        ctx->pc = 0x4468ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4468E8u;
        // 0x4468ec: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4468F0u;
        goto label_4468f0;
    }
    ctx->pc = 0x4468E8u;
    {
        const bool branch_taken_0x4468e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x4468ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4468E8u;
        // 0x4468ec: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4468e8) {
            ctx->pc = 0x4468C4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4468c4;
        }
    }
    ctx->pc = 0x4468F0u;
label_4468f0:
    // 0x4468f0: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x4468f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_4468f4:
    // 0x4468f4: 0x603ffce  bgezl       $s0, . + 4 + (-0x32 << 2)
label_4468f8:
    if (ctx->pc == 0x4468F8u) {
        ctx->pc = 0x4468F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4468F4u;
        // 0x4468f8: 0x2092018  mult        $a0, $s0, $t1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4468FCu;
        goto label_4468fc;
    }
    ctx->pc = 0x4468F4u;
    {
        const bool branch_taken_0x4468f4 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x4468f4) {
            ctx->pc = 0x4468F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4468F4u;
            // 0x4468f8: 0x2092018  mult        $a0, $s0, $t1 (Delay Slot)
            { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x446830u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_446830;
        }
    }
    ctx->pc = 0x4468FCu;
label_4468fc:
    // 0x4468fc: 0x8f83bf20  lw          $v1, -0x40E0($gp)
    ctx->pc = 0x4468fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950688)));
label_446900:
    // 0x446900: 0x26e4e880  addiu       $a0, $s7, -0x1780
    ctx->pc = 0x446900u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294961280));
label_446904:
    // 0x446904: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x446904u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_446908:
    // 0x446908: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x446908u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_44690c:
    // 0x44690c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x44690cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_446910:
    // 0x446910: 0x8c620038  lw          $v0, 0x38($v1)
    ctx->pc = 0x446910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
label_446914:
    // 0x446914: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x446914u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
label_446918:
    // 0x446918: 0x10a00010  beqz        $a1, . + 4 + (0x10 << 2)
label_44691c:
    if (ctx->pc == 0x44691Cu) {
        ctx->pc = 0x44691Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446918u;
        // 0x44691c: 0xc22021  addu        $a0, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x446920u;
        goto label_446920;
    }
    ctx->pc = 0x446918u;
    {
        const bool branch_taken_0x446918 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x44691Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446918u;
        // 0x44691c: 0xc22021  addu        $a0, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x446918) {
            ctx->pc = 0x44695Cu;
            goto label_44695c;
        }
    }
    ctx->pc = 0x446920u;
label_446920:
    // 0x446920: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x446920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_446924:
    // 0x446924: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x446924u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_446928:
    // 0x446928: 0x2445001c  addiu       $a1, $v0, 0x1C
    ctx->pc = 0x446928u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
label_44692c:
    // 0x44692c: 0x0  nop
    ctx->pc = 0x44692cu;
    // NOP
label_446930:
    // 0x446930: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x446930u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_446934:
    // 0x446934: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x446934u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_446938:
    // 0x446938: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x446938u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_44693c:
    // 0x44693c: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x44693cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
label_446940:
    // 0x446940: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x446940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_446944:
    // 0x446944: 0x24a50028  addiu       $a1, $a1, 0x28
    ctx->pc = 0x446944u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 40));
label_446948:
    // 0x446948: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x446948u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
label_44694c:
    // 0x44694c: 0x2484000c  addiu       $a0, $a0, 0xC
    ctx->pc = 0x44694cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
label_446950:
    // 0x446950: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x446950u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_446954:
    // 0x446954: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_446958:
    if (ctx->pc == 0x446958u) {
        ctx->pc = 0x446958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446954u;
        // 0x446958: 0x2463000c  addiu       $v1, $v1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44695Cu;
        goto label_44695c;
    }
    ctx->pc = 0x446954u;
    {
        const bool branch_taken_0x446954 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x446958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446954u;
        // 0x446958: 0x2463000c  addiu       $v1, $v1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x446954) {
            ctx->pc = 0x446930u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_446930;
        }
    }
    ctx->pc = 0x44695Cu;
label_44695c:
    // 0x44695c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x44695cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_446960:
    // 0x446960: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x446960u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_446964:
    // 0x446964: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x446964u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_446968:
    // 0x446968: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x446968u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_44696c:
    // 0x44696c: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x44696cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_446970:
    // 0x446970: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x446970u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_446974:
    // 0x446974: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x446974u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_446978:
    // 0x446978: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x446978u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_44697c:
    // 0x44697c: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x44697cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_446980:
    // 0x446980: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x446980u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_446984:
    // 0x446984: 0x3e00008  jr          $ra
label_446988:
    if (ctx->pc == 0x446988u) {
        ctx->pc = 0x446988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446984u;
        // 0x446988: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44698Cu;
        goto label_44698c;
    }
    ctx->pc = 0x446984u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x446988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446984u;
        // 0x446988: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x446984u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x44698Cu;
label_44698c:
    // 0x44698c: 0x0  nop
    ctx->pc = 0x44698cu;
    // NOP
    ctx->pc = 0x446990u;
}
