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

// Function: sub_003983A0
// Address: 0x3983a0 - 0x3987d0
void sub_003983A0_0x3983a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003983A0_0x3983a0");
#endif

    switch (ctx->pc) {
        case 0x3983a0u: goto label_3983a0;
        case 0x3983a4u: goto label_3983a4;
        case 0x3983a8u: goto label_3983a8;
        case 0x3983acu: goto label_3983ac;
        case 0x3983b0u: goto label_3983b0;
        case 0x3983b4u: goto label_3983b4;
        case 0x3983b8u: goto label_3983b8;
        case 0x3983bcu: goto label_3983bc;
        case 0x3983c0u: goto label_3983c0;
        case 0x3983c4u: goto label_3983c4;
        case 0x3983c8u: goto label_3983c8;
        case 0x3983ccu: goto label_3983cc;
        case 0x3983d0u: goto label_3983d0;
        case 0x3983d4u: goto label_3983d4;
        case 0x3983d8u: goto label_3983d8;
        case 0x3983dcu: goto label_3983dc;
        case 0x3983e0u: goto label_3983e0;
        case 0x3983e4u: goto label_3983e4;
        case 0x3983e8u: goto label_3983e8;
        case 0x3983ecu: goto label_3983ec;
        case 0x3983f0u: goto label_3983f0;
        case 0x3983f4u: goto label_3983f4;
        case 0x3983f8u: goto label_3983f8;
        case 0x3983fcu: goto label_3983fc;
        case 0x398400u: goto label_398400;
        case 0x398404u: goto label_398404;
        case 0x398408u: goto label_398408;
        case 0x39840cu: goto label_39840c;
        case 0x398410u: goto label_398410;
        case 0x398414u: goto label_398414;
        case 0x398418u: goto label_398418;
        case 0x39841cu: goto label_39841c;
        case 0x398420u: goto label_398420;
        case 0x398424u: goto label_398424;
        case 0x398428u: goto label_398428;
        case 0x39842cu: goto label_39842c;
        case 0x398430u: goto label_398430;
        case 0x398434u: goto label_398434;
        case 0x398438u: goto label_398438;
        case 0x39843cu: goto label_39843c;
        case 0x398440u: goto label_398440;
        case 0x398444u: goto label_398444;
        case 0x398448u: goto label_398448;
        case 0x39844cu: goto label_39844c;
        case 0x398450u: goto label_398450;
        case 0x398454u: goto label_398454;
        case 0x398458u: goto label_398458;
        case 0x39845cu: goto label_39845c;
        case 0x398460u: goto label_398460;
        case 0x398464u: goto label_398464;
        case 0x398468u: goto label_398468;
        case 0x39846cu: goto label_39846c;
        case 0x398470u: goto label_398470;
        case 0x398474u: goto label_398474;
        case 0x398478u: goto label_398478;
        case 0x39847cu: goto label_39847c;
        case 0x398480u: goto label_398480;
        case 0x398484u: goto label_398484;
        case 0x398488u: goto label_398488;
        case 0x39848cu: goto label_39848c;
        case 0x398490u: goto label_398490;
        case 0x398494u: goto label_398494;
        case 0x398498u: goto label_398498;
        case 0x39849cu: goto label_39849c;
        case 0x3984a0u: goto label_3984a0;
        case 0x3984a4u: goto label_3984a4;
        case 0x3984a8u: goto label_3984a8;
        case 0x3984acu: goto label_3984ac;
        case 0x3984b0u: goto label_3984b0;
        case 0x3984b4u: goto label_3984b4;
        case 0x3984b8u: goto label_3984b8;
        case 0x3984bcu: goto label_3984bc;
        case 0x3984c0u: goto label_3984c0;
        case 0x3984c4u: goto label_3984c4;
        case 0x3984c8u: goto label_3984c8;
        case 0x3984ccu: goto label_3984cc;
        case 0x3984d0u: goto label_3984d0;
        case 0x3984d4u: goto label_3984d4;
        case 0x3984d8u: goto label_3984d8;
        case 0x3984dcu: goto label_3984dc;
        case 0x3984e0u: goto label_3984e0;
        case 0x3984e4u: goto label_3984e4;
        case 0x3984e8u: goto label_3984e8;
        case 0x3984ecu: goto label_3984ec;
        case 0x3984f0u: goto label_3984f0;
        case 0x3984f4u: goto label_3984f4;
        case 0x3984f8u: goto label_3984f8;
        case 0x3984fcu: goto label_3984fc;
        case 0x398500u: goto label_398500;
        case 0x398504u: goto label_398504;
        case 0x398508u: goto label_398508;
        case 0x39850cu: goto label_39850c;
        case 0x398510u: goto label_398510;
        case 0x398514u: goto label_398514;
        case 0x398518u: goto label_398518;
        case 0x39851cu: goto label_39851c;
        case 0x398520u: goto label_398520;
        case 0x398524u: goto label_398524;
        case 0x398528u: goto label_398528;
        case 0x39852cu: goto label_39852c;
        case 0x398530u: goto label_398530;
        case 0x398534u: goto label_398534;
        case 0x398538u: goto label_398538;
        case 0x39853cu: goto label_39853c;
        case 0x398540u: goto label_398540;
        case 0x398544u: goto label_398544;
        case 0x398548u: goto label_398548;
        case 0x39854cu: goto label_39854c;
        case 0x398550u: goto label_398550;
        case 0x398554u: goto label_398554;
        case 0x398558u: goto label_398558;
        case 0x39855cu: goto label_39855c;
        case 0x398560u: goto label_398560;
        case 0x398564u: goto label_398564;
        case 0x398568u: goto label_398568;
        case 0x39856cu: goto label_39856c;
        case 0x398570u: goto label_398570;
        case 0x398574u: goto label_398574;
        case 0x398578u: goto label_398578;
        case 0x39857cu: goto label_39857c;
        case 0x398580u: goto label_398580;
        case 0x398584u: goto label_398584;
        case 0x398588u: goto label_398588;
        case 0x39858cu: goto label_39858c;
        case 0x398590u: goto label_398590;
        case 0x398594u: goto label_398594;
        case 0x398598u: goto label_398598;
        case 0x39859cu: goto label_39859c;
        case 0x3985a0u: goto label_3985a0;
        case 0x3985a4u: goto label_3985a4;
        case 0x3985a8u: goto label_3985a8;
        case 0x3985acu: goto label_3985ac;
        case 0x3985b0u: goto label_3985b0;
        case 0x3985b4u: goto label_3985b4;
        case 0x3985b8u: goto label_3985b8;
        case 0x3985bcu: goto label_3985bc;
        case 0x3985c0u: goto label_3985c0;
        case 0x3985c4u: goto label_3985c4;
        case 0x3985c8u: goto label_3985c8;
        case 0x3985ccu: goto label_3985cc;
        case 0x3985d0u: goto label_3985d0;
        case 0x3985d4u: goto label_3985d4;
        case 0x3985d8u: goto label_3985d8;
        case 0x3985dcu: goto label_3985dc;
        case 0x3985e0u: goto label_3985e0;
        case 0x3985e4u: goto label_3985e4;
        case 0x3985e8u: goto label_3985e8;
        case 0x3985ecu: goto label_3985ec;
        case 0x3985f0u: goto label_3985f0;
        case 0x3985f4u: goto label_3985f4;
        case 0x3985f8u: goto label_3985f8;
        case 0x3985fcu: goto label_3985fc;
        case 0x398600u: goto label_398600;
        case 0x398604u: goto label_398604;
        case 0x398608u: goto label_398608;
        case 0x39860cu: goto label_39860c;
        case 0x398610u: goto label_398610;
        case 0x398614u: goto label_398614;
        case 0x398618u: goto label_398618;
        case 0x39861cu: goto label_39861c;
        case 0x398620u: goto label_398620;
        case 0x398624u: goto label_398624;
        case 0x398628u: goto label_398628;
        case 0x39862cu: goto label_39862c;
        case 0x398630u: goto label_398630;
        case 0x398634u: goto label_398634;
        case 0x398638u: goto label_398638;
        case 0x39863cu: goto label_39863c;
        case 0x398640u: goto label_398640;
        case 0x398644u: goto label_398644;
        case 0x398648u: goto label_398648;
        case 0x39864cu: goto label_39864c;
        case 0x398650u: goto label_398650;
        case 0x398654u: goto label_398654;
        case 0x398658u: goto label_398658;
        case 0x39865cu: goto label_39865c;
        case 0x398660u: goto label_398660;
        case 0x398664u: goto label_398664;
        case 0x398668u: goto label_398668;
        case 0x39866cu: goto label_39866c;
        case 0x398670u: goto label_398670;
        case 0x398674u: goto label_398674;
        case 0x398678u: goto label_398678;
        case 0x39867cu: goto label_39867c;
        case 0x398680u: goto label_398680;
        case 0x398684u: goto label_398684;
        case 0x398688u: goto label_398688;
        case 0x39868cu: goto label_39868c;
        case 0x398690u: goto label_398690;
        case 0x398694u: goto label_398694;
        case 0x398698u: goto label_398698;
        case 0x39869cu: goto label_39869c;
        case 0x3986a0u: goto label_3986a0;
        case 0x3986a4u: goto label_3986a4;
        case 0x3986a8u: goto label_3986a8;
        case 0x3986acu: goto label_3986ac;
        case 0x3986b0u: goto label_3986b0;
        case 0x3986b4u: goto label_3986b4;
        case 0x3986b8u: goto label_3986b8;
        case 0x3986bcu: goto label_3986bc;
        case 0x3986c0u: goto label_3986c0;
        case 0x3986c4u: goto label_3986c4;
        case 0x3986c8u: goto label_3986c8;
        case 0x3986ccu: goto label_3986cc;
        case 0x3986d0u: goto label_3986d0;
        case 0x3986d4u: goto label_3986d4;
        case 0x3986d8u: goto label_3986d8;
        case 0x3986dcu: goto label_3986dc;
        case 0x3986e0u: goto label_3986e0;
        case 0x3986e4u: goto label_3986e4;
        case 0x3986e8u: goto label_3986e8;
        case 0x3986ecu: goto label_3986ec;
        case 0x3986f0u: goto label_3986f0;
        case 0x3986f4u: goto label_3986f4;
        case 0x3986f8u: goto label_3986f8;
        case 0x3986fcu: goto label_3986fc;
        case 0x398700u: goto label_398700;
        case 0x398704u: goto label_398704;
        case 0x398708u: goto label_398708;
        case 0x39870cu: goto label_39870c;
        case 0x398710u: goto label_398710;
        case 0x398714u: goto label_398714;
        case 0x398718u: goto label_398718;
        case 0x39871cu: goto label_39871c;
        case 0x398720u: goto label_398720;
        case 0x398724u: goto label_398724;
        case 0x398728u: goto label_398728;
        case 0x39872cu: goto label_39872c;
        case 0x398730u: goto label_398730;
        case 0x398734u: goto label_398734;
        case 0x398738u: goto label_398738;
        case 0x39873cu: goto label_39873c;
        case 0x398740u: goto label_398740;
        case 0x398744u: goto label_398744;
        case 0x398748u: goto label_398748;
        case 0x39874cu: goto label_39874c;
        case 0x398750u: goto label_398750;
        case 0x398754u: goto label_398754;
        case 0x398758u: goto label_398758;
        case 0x39875cu: goto label_39875c;
        case 0x398760u: goto label_398760;
        case 0x398764u: goto label_398764;
        case 0x398768u: goto label_398768;
        case 0x39876cu: goto label_39876c;
        case 0x398770u: goto label_398770;
        case 0x398774u: goto label_398774;
        case 0x398778u: goto label_398778;
        case 0x39877cu: goto label_39877c;
        case 0x398780u: goto label_398780;
        case 0x398784u: goto label_398784;
        case 0x398788u: goto label_398788;
        case 0x39878cu: goto label_39878c;
        case 0x398790u: goto label_398790;
        case 0x398794u: goto label_398794;
        case 0x398798u: goto label_398798;
        case 0x39879cu: goto label_39879c;
        case 0x3987a0u: goto label_3987a0;
        case 0x3987a4u: goto label_3987a4;
        case 0x3987a8u: goto label_3987a8;
        case 0x3987acu: goto label_3987ac;
        case 0x3987b0u: goto label_3987b0;
        case 0x3987b4u: goto label_3987b4;
        case 0x3987b8u: goto label_3987b8;
        case 0x3987bcu: goto label_3987bc;
        case 0x3987c0u: goto label_3987c0;
        case 0x3987c4u: goto label_3987c4;
        case 0x3987c8u: goto label_3987c8;
        case 0x3987ccu: goto label_3987cc;
        default: break;
    }

    ctx->pc = 0x3983a0u;

label_3983a0:
    // 0x3983a0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x3983a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_3983a4:
    // 0x3983a4: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x3983a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_3983a8:
    // 0x3983a8: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x3983a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_3983ac:
    // 0x3983ac: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x3983acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_3983b0:
    // 0x3983b0: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x3983b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_3983b4:
    // 0x3983b4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3983b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3983b8:
    // 0x3983b8: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x3983b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_3983bc:
    // 0x3983bc: 0x34a50502  ori         $a1, $a1, 0x502
    ctx->pc = 0x3983bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1282);
label_3983c0:
    // 0x3983c0: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x3983c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_3983c4:
    // 0x3983c4: 0x60a82d  daddu       $s5, $v1, $zero
    ctx->pc = 0x3983c4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3983c8:
    // 0x3983c8: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x3983c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_3983cc:
    // 0x3983cc: 0x2463e880  addiu       $v1, $v1, -0x1780
    ctx->pc = 0x3983ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961280));
label_3983d0:
    // 0x3983d0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3983d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_3983d4:
    // 0x3983d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3983d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3983d8:
    // 0x3983d8: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x3983d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_3983dc:
    // 0x3983dc: 0x8c620108  lw          $v0, 0x108($v1)
    ctx->pc = 0x3983dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
label_3983e0:
    // 0x3983e0: 0x40f809  jalr        $v0
label_3983e4:
    if (ctx->pc == 0x3983E4u) {
        ctx->pc = 0x3983E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3983E0u;
        // 0x3983e4: 0x42080  sll         $a0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3983E8u;
        goto label_3983e8;
    }
    ctx->pc = 0x3983E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3983E8u);
        ctx->pc = 0x3983E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3983E0u;
        // 0x3983e4: 0x42080  sll         $a0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3983E0u, 0x3983E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3983E8u;
label_3983e8:
    // 0x3983e8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3983e8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3983ec:
    // 0x3983ec: 0x526000e4  beql        $s3, $zero, . + 4 + (0xE4 << 2)
label_3983f0:
    if (ctx->pc == 0x3983F0u) {
        ctx->pc = 0x3983F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3983ECu;
        // 0x3983f0: 0x8e450004  lw          $a1, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3983F4u;
        goto label_3983f4;
    }
    ctx->pc = 0x3983ECu;
    {
        const bool branch_taken_0x3983ec = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x3983ec) {
            ctx->pc = 0x3983F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3983ECu;
            // 0x3983f0: 0x8e450004  lw          $a1, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x398780u;
            goto label_398780;
        }
    }
    ctx->pc = 0x3983F4u;
label_3983f4:
    // 0x3983f4: 0x8e490004  lw          $t1, 0x4($s2)
    ctx->pc = 0x3983f4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_3983f8:
    // 0x3983f8: 0x11200033  beqz        $t1, . + 4 + (0x33 << 2)
label_3983fc:
    if (ctx->pc == 0x3983FCu) {
        ctx->pc = 0x3983FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3983F8u;
        // 0x3983fc: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398400u;
        goto label_398400;
    }
    ctx->pc = 0x3983F8u;
    {
        const bool branch_taken_0x3983f8 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x3983FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3983F8u;
        // 0x3983fc: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3983f8) {
            ctx->pc = 0x3984C8u;
            goto label_3984c8;
        }
    }
    ctx->pc = 0x398400u;
label_398400:
    // 0x398400: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x398400u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_398404:
    // 0x398404: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x398404u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_398408:
    // 0x398408: 0x19200012  blez        $t1, . + 4 + (0x12 << 2)
label_39840c:
    if (ctx->pc == 0x39840Cu) {
        ctx->pc = 0x39840Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398408u;
        // 0x39840c: 0x31230003  andi        $v1, $t1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        ctx->pc = 0x398410u;
        goto label_398410;
    }
    ctx->pc = 0x398408u;
    {
        const bool branch_taken_0x398408 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x39840Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398408u;
        // 0x39840c: 0x31230003  andi        $v1, $t1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x398408) {
            ctx->pc = 0x398454u;
            goto label_398454;
        }
    }
    ctx->pc = 0x398410u;
label_398410:
    // 0x398410: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
label_398414:
    if (ctx->pc == 0x398414u) {
        ctx->pc = 0x398414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398410u;
        // 0x398414: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x398418u;
        goto label_398418;
    }
    ctx->pc = 0x398410u;
    {
        const bool branch_taken_0x398410 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x398414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398410u;
        // 0x398414: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x398410) {
            ctx->pc = 0x398474u;
            goto label_398474;
        }
    }
    ctx->pc = 0x398418u;
label_398418:
    // 0x398418: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
label_39841c:
    if (ctx->pc == 0x39841Cu) {
        ctx->pc = 0x39841Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398418u;
        // 0x39841c: 0x8e420008  lw          $v0, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398420u;
        goto label_398420;
    }
    ctx->pc = 0x398418u;
    {
        const bool branch_taken_0x398418 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x398418) {
            ctx->pc = 0x39841Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x398418u;
            // 0x39841c: 0x8e420008  lw          $v0, 0x8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x398458u;
            goto label_398458;
        }
    }
    ctx->pc = 0x398420u;
label_398420:
    // 0x398420: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x398420u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_398424:
    // 0x398424: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_398428:
    if (ctx->pc == 0x398428u) {
        ctx->pc = 0x398428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398424u;
        // 0x398428: 0x8e420008  lw          $v0, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39842Cu;
        goto label_39842c;
    }
    ctx->pc = 0x398424u;
    {
        const bool branch_taken_0x398424 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x398428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398424u;
        // 0x398428: 0x8e420008  lw          $v0, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398424) {
            ctx->pc = 0x398440u;
            goto label_398440;
        }
    }
    ctx->pc = 0x39842Cu;
label_39842c:
    // 0x39842c: 0x26640004  addiu       $a0, $s3, 0x4
    ctx->pc = 0x39842cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_398430:
    // 0x398430: 0x24070014  addiu       $a3, $zero, 0x14
    ctx->pc = 0x398430u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_398434:
    // 0x398434: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x398434u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_398438:
    // 0x398438: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x398438u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_39843c:
    // 0x39843c: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x39843cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_398440:
    // 0x398440: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x398440u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_398444:
    // 0x398444: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x398444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_398448:
    // 0x398448: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x398448u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_39844c:
    // 0x39844c: 0x24e70014  addiu       $a3, $a3, 0x14
    ctx->pc = 0x39844cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 20));
label_398450:
    // 0x398450: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x398450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_398454:
    // 0x398454: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x398454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_398458:
    // 0x398458: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x398458u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_39845c:
    // 0x39845c: 0x149402b  sltu        $t0, $t2, $t1
    ctx->pc = 0x39845cu;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
label_398460:
    // 0x398460: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x398460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_398464:
    // 0x398464: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x398464u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_398468:
    // 0x398468: 0x24e70014  addiu       $a3, $a3, 0x14
    ctx->pc = 0x398468u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 20));
label_39846c:
    // 0x39846c: 0x11000016  beqz        $t0, . + 4 + (0x16 << 2)
label_398470:
    if (ctx->pc == 0x398470u) {
        ctx->pc = 0x398470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39846Cu;
        // 0x398470: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398474u;
        goto label_398474;
    }
    ctx->pc = 0x39846Cu;
    {
        const bool branch_taken_0x39846c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x398470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39846Cu;
        // 0x398470: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39846c) {
            ctx->pc = 0x3984C8u;
            goto label_3984c8;
        }
    }
    ctx->pc = 0x398474u;
label_398474:
    // 0x398474: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x398474u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_398478:
    // 0x398478: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x398478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_39847c:
    // 0x39847c: 0x24e30014  addiu       $v1, $a3, 0x14
    ctx->pc = 0x39847cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 20));
label_398480:
    // 0x398480: 0x24e40028  addiu       $a0, $a3, 0x28
    ctx->pc = 0x398480u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 40));
label_398484:
    // 0x398484: 0x24e5003c  addiu       $a1, $a3, 0x3C
    ctx->pc = 0x398484u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 60));
label_398488:
    // 0x398488: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x398488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_39848c:
    // 0x39848c: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x39848cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
label_398490:
    // 0x398490: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x398490u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_398494:
    // 0x398494: 0x24e70050  addiu       $a3, $a3, 0x50
    ctx->pc = 0x398494u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 80));
label_398498:
    // 0x398498: 0x149402b  sltu        $t0, $t2, $t1
    ctx->pc = 0x398498u;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
label_39849c:
    // 0x39849c: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x39849cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_3984a0:
    // 0x3984a0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3984a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3984a4:
    // 0x3984a4: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x3984a4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
label_3984a8:
    // 0x3984a8: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x3984a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_3984ac:
    // 0x3984ac: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3984acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3984b0:
    // 0x3984b0: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x3984b0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
label_3984b4:
    // 0x3984b4: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x3984b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_3984b8:
    // 0x3984b8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x3984b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_3984bc:
    // 0x3984bc: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x3984bcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
label_3984c0:
    // 0x3984c0: 0x1500ffed  bnez        $t0, . + 4 + (-0x13 << 2)
label_3984c4:
    if (ctx->pc == 0x3984C4u) {
        ctx->pc = 0x3984C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3984C0u;
        // 0x3984c4: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3984C8u;
        goto label_3984c8;
    }
    ctx->pc = 0x3984C0u;
    {
        const bool branch_taken_0x3984c0 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x3984C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3984C0u;
        // 0x3984c4: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3984c0) {
            ctx->pc = 0x398478u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_398478;
        }
    }
    ctx->pc = 0x3984C8u;
label_3984c8:
    // 0x3984c8: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x3984c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_3984cc:
    // 0x3984cc: 0x3c070039  lui         $a3, 0x39
    ctx->pc = 0x3984ccu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)57 << 16));
label_3984d0:
    // 0x3984d0: 0x24e70458  addiu       $a3, $a3, 0x458
    ctx->pc = 0x3984d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1112));
label_3984d4:
    // 0x3984d4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3984d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3984d8:
    // 0x3984d8: 0xc0bbc9c  jal         func_2EF270
label_3984dc:
    if (ctx->pc == 0x3984DCu) {
        ctx->pc = 0x3984DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3984D8u;
        // 0x3984dc: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3984E0u;
        goto label_3984e0;
    }
    ctx->pc = 0x3984D8u;
    SET_GPR_U32(ctx, 31, 0x3984E0u);
    ctx->pc = 0x3984DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3984D8u;
    // 0x3984dc: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EF270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EF270u, 0x3984D8u, 0x3984E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3984E0u;
label_3984e0:
    // 0x3984e0: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x3984e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_3984e4:
    // 0x3984e4: 0x2ca20002  sltiu       $v0, $a1, 0x2
    ctx->pc = 0x3984e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_3984e8:
    // 0x3984e8: 0x14400046  bnez        $v0, . + 4 + (0x46 << 2)
label_3984ec:
    if (ctx->pc == 0x3984ECu) {
        ctx->pc = 0x3984ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3984E8u;
        // 0x3984ec: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3984F0u;
        goto label_3984f0;
    }
    ctx->pc = 0x3984E8u;
    {
        const bool branch_taken_0x3984e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3984ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3984E8u;
        // 0x3984ec: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3984e8) {
            ctx->pc = 0x398604u;
            goto label_398604;
        }
    }
    ctx->pc = 0x3984F0u;
label_3984f0:
    // 0x3984f0: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x3984f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3984f4:
    // 0x3984f4: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x3984f4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3984f8:
    // 0x3984f8: 0x145102b  sltu        $v0, $t2, $a1
    ctx->pc = 0x3984f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_3984fc:
    // 0x3984fc: 0x10400041  beqz        $v0, . + 4 + (0x41 << 2)
label_398500:
    if (ctx->pc == 0x398500u) {
        ctx->pc = 0x398500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3984FCu;
        // 0x398500: 0x8c640008  lw          $a0, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398504u;
        goto label_398504;
    }
    ctx->pc = 0x3984FCu;
    {
        const bool branch_taken_0x3984fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x398500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3984FCu;
        // 0x398500: 0x8c640008  lw          $a0, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3984fc) {
            ctx->pc = 0x398604u;
            goto label_398604;
        }
    }
    ctx->pc = 0x398504u;
label_398504:
    // 0x398504: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x398504u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_398508:
    // 0x398508: 0x26660004  addiu       $a2, $s3, 0x4
    ctx->pc = 0x398508u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_39850c:
    // 0x39850c: 0x2502ffff  addiu       $v0, $t0, -0x1
    ctx->pc = 0x39850cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
label_398510:
    // 0x398510: 0x29030002  slti        $v1, $t0, 0x2
    ctx->pc = 0x398510u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)2) ? 1 : 0);
label_398514:
    // 0x398514: 0x14600016  bnez        $v1, . + 4 + (0x16 << 2)
label_398518:
    if (ctx->pc == 0x398518u) {
        ctx->pc = 0x398518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398514u;
        // 0x398518: 0x30450003  andi        $a1, $v0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        ctx->pc = 0x39851Cu;
        goto label_39851c;
    }
    ctx->pc = 0x398514u;
    {
        const bool branch_taken_0x398514 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x398518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398514u;
        // 0x398518: 0x30450003  andi        $a1, $v0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x398514) {
            ctx->pc = 0x398570u;
            goto label_398570;
        }
    }
    ctx->pc = 0x39851Cu;
label_39851c:
    // 0x39851c: 0x10a0001d  beqz        $a1, . + 4 + (0x1D << 2)
label_398520:
    if (ctx->pc == 0x398520u) {
        ctx->pc = 0x398520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39851Cu;
        // 0x398520: 0x28a20002  slti        $v0, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x398524u;
        goto label_398524;
    }
    ctx->pc = 0x39851Cu;
    {
        const bool branch_taken_0x39851c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x398520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39851Cu;
        // 0x398520: 0x28a20002  slti        $v0, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x39851c) {
            ctx->pc = 0x398594u;
            goto label_398594;
        }
    }
    ctx->pc = 0x398524u;
label_398524:
    // 0x398524: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
label_398528:
    if (ctx->pc == 0x398528u) {
        ctx->pc = 0x398528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398524u;
        // 0x398528: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39852Cu;
        goto label_39852c;
    }
    ctx->pc = 0x398524u;
    {
        const bool branch_taken_0x398524 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x398524) {
            ctx->pc = 0x398528u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x398524u;
            // 0x398528: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x398574u;
            goto label_398574;
        }
    }
    ctx->pc = 0x39852Cu;
label_39852c:
    // 0x39852c: 0x28a20003  slti        $v0, $a1, 0x3
    ctx->pc = 0x39852cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
label_398530:
    // 0x398530: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_398534:
    if (ctx->pc == 0x398534u) {
        ctx->pc = 0x398534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398530u;
        // 0x398534: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398538u;
        goto label_398538;
    }
    ctx->pc = 0x398530u;
    {
        const bool branch_taken_0x398530 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x398530) {
            ctx->pc = 0x398534u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x398530u;
            // 0x398534: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x398558u;
            goto label_398558;
        }
    }
    ctx->pc = 0x398538u;
label_398538:
    // 0x398538: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x398538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_39853c:
    // 0x39853c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x39853cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_398540:
    // 0x398540: 0x10440003  beq         $v0, $a0, . + 4 + (0x3 << 2)
label_398544:
    if (ctx->pc == 0x398544u) {
        ctx->pc = 0x398544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398540u;
        // 0x398544: 0x26660008  addiu       $a2, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398548u;
        goto label_398548;
    }
    ctx->pc = 0x398540u;
    {
        const bool branch_taken_0x398540 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x398544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398540u;
        // 0x398544: 0x26660008  addiu       $a2, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398540) {
            ctx->pc = 0x398550u;
            goto label_398550;
        }
    }
    ctx->pc = 0x398548u;
label_398548:
    // 0x398548: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x398548u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39854c:
    // 0x39854c: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x39854cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_398550:
    // 0x398550: 0x240a0002  addiu       $t2, $zero, 0x2
    ctx->pc = 0x398550u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_398554:
    // 0x398554: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x398554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_398558:
    // 0x398558: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x398558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_39855c:
    // 0x39855c: 0x10440003  beq         $v0, $a0, . + 4 + (0x3 << 2)
label_398560:
    if (ctx->pc == 0x398560u) {
        ctx->pc = 0x398560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39855Cu;
        // 0x398560: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398564u;
        goto label_398564;
    }
    ctx->pc = 0x39855Cu;
    {
        const bool branch_taken_0x39855c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x398560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39855Cu;
        // 0x398560: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39855c) {
            ctx->pc = 0x39856Cu;
            goto label_39856c;
        }
    }
    ctx->pc = 0x398564u;
label_398564:
    // 0x398564: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x398564u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_398568:
    // 0x398568: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x398568u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_39856c:
    // 0x39856c: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x39856cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_398570:
    // 0x398570: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x398570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_398574:
    // 0x398574: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x398574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_398578:
    // 0x398578: 0x10440003  beq         $v0, $a0, . + 4 + (0x3 << 2)
label_39857c:
    if (ctx->pc == 0x39857Cu) {
        ctx->pc = 0x39857Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398578u;
        // 0x39857c: 0x254a0001  addiu       $t2, $t2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398580u;
        goto label_398580;
    }
    ctx->pc = 0x398578u;
    {
        const bool branch_taken_0x398578 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x39857Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398578u;
        // 0x39857c: 0x254a0001  addiu       $t2, $t2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398578) {
            ctx->pc = 0x398588u;
            goto label_398588;
        }
    }
    ctx->pc = 0x398580u;
label_398580:
    // 0x398580: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x398580u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_398584:
    // 0x398584: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x398584u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_398588:
    // 0x398588: 0x148102b  sltu        $v0, $t2, $t0
    ctx->pc = 0x398588u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_39858c:
    // 0x39858c: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_398590:
    if (ctx->pc == 0x398590u) {
        ctx->pc = 0x398590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39858Cu;
        // 0x398590: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398594u;
        goto label_398594;
    }
    ctx->pc = 0x39858Cu;
    {
        const bool branch_taken_0x39858c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x398590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39858Cu;
        // 0x398590: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39858c) {
            ctx->pc = 0x398604u;
            goto label_398604;
        }
    }
    ctx->pc = 0x398594u;
label_398594:
    // 0x398594: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x398594u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_398598:
    // 0x398598: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x398598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_39859c:
    // 0x39859c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x39859cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3985a0:
    // 0x3985a0: 0x50440004  beql        $v0, $a0, . + 4 + (0x4 << 2)
label_3985a4:
    if (ctx->pc == 0x3985A4u) {
        ctx->pc = 0x3985A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3985A0u;
        // 0x3985a4: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3985A8u;
        goto label_3985a8;
    }
    ctx->pc = 0x3985A0u;
    {
        const bool branch_taken_0x3985a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x3985a0) {
            ctx->pc = 0x3985A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3985A0u;
            // 0x3985a4: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3985B4u;
            goto label_3985b4;
        }
    }
    ctx->pc = 0x3985A8u;
label_3985a8:
    // 0x3985a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3985a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3985ac:
    // 0x3985ac: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3985acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_3985b0:
    // 0x3985b0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x3985b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_3985b4:
    // 0x3985b4: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x3985b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3985b8:
    // 0x3985b8: 0x50440004  beql        $v0, $a0, . + 4 + (0x4 << 2)
label_3985bc:
    if (ctx->pc == 0x3985BCu) {
        ctx->pc = 0x3985BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3985B8u;
        // 0x3985bc: 0x8c620008  lw          $v0, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3985C0u;
        goto label_3985c0;
    }
    ctx->pc = 0x3985B8u;
    {
        const bool branch_taken_0x3985b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x3985b8) {
            ctx->pc = 0x3985BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3985B8u;
            // 0x3985bc: 0x8c620008  lw          $v0, 0x8($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3985CCu;
            goto label_3985cc;
        }
    }
    ctx->pc = 0x3985C0u;
label_3985c0:
    // 0x3985c0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3985c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3985c4:
    // 0x3985c4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3985c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_3985c8:
    // 0x3985c8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x3985c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_3985cc:
    // 0x3985cc: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x3985ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3985d0:
    // 0x3985d0: 0x50440004  beql        $v0, $a0, . + 4 + (0x4 << 2)
label_3985d4:
    if (ctx->pc == 0x3985D4u) {
        ctx->pc = 0x3985D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3985D0u;
        // 0x3985d4: 0x8c62000c  lw          $v0, 0xC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3985D8u;
        goto label_3985d8;
    }
    ctx->pc = 0x3985D0u;
    {
        const bool branch_taken_0x3985d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x3985d0) {
            ctx->pc = 0x3985D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3985D0u;
            // 0x3985d4: 0x8c62000c  lw          $v0, 0xC($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3985E4u;
            goto label_3985e4;
        }
    }
    ctx->pc = 0x3985D8u;
label_3985d8:
    // 0x3985d8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3985d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3985dc:
    // 0x3985dc: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3985dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_3985e0:
    // 0x3985e0: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x3985e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_3985e4:
    // 0x3985e4: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x3985e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3985e8:
    // 0x3985e8: 0x10440003  beq         $v0, $a0, . + 4 + (0x3 << 2)
label_3985ec:
    if (ctx->pc == 0x3985ECu) {
        ctx->pc = 0x3985ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3985E8u;
        // 0x3985ec: 0x254a0004  addiu       $t2, $t2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3985F0u;
        goto label_3985f0;
    }
    ctx->pc = 0x3985E8u;
    {
        const bool branch_taken_0x3985e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x3985ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3985E8u;
        // 0x3985ec: 0x254a0004  addiu       $t2, $t2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3985e8) {
            ctx->pc = 0x3985F8u;
            goto label_3985f8;
        }
    }
    ctx->pc = 0x3985F0u;
label_3985f0:
    // 0x3985f0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3985f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3985f4:
    // 0x3985f4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3985f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_3985f8:
    // 0x3985f8: 0x148102b  sltu        $v0, $t2, $t0
    ctx->pc = 0x3985f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_3985fc:
    // 0x3985fc: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
label_398600:
    if (ctx->pc == 0x398600u) {
        ctx->pc = 0x398600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3985FCu;
        // 0x398600: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398604u;
        goto label_398604;
    }
    ctx->pc = 0x3985FCu;
    {
        const bool branch_taken_0x3985fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x398600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3985FCu;
        // 0x398600: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3985fc) {
            ctx->pc = 0x398598u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_398598;
        }
    }
    ctx->pc = 0x398604u;
label_398604:
    // 0x398604: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x398604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_398608:
    // 0x398608: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x398608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_39860c:
    // 0x39860c: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x39860cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_398610:
    // 0x398610: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x398610u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_398614:
    // 0x398614: 0xe3a018  mult        $s4, $a3, $v1
    ctx->pc = 0x398614u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 20, (int32_t)result); }
label_398618:
    // 0x398618: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x398618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_39861c:
    // 0x39861c: 0x2828821  addu        $s1, $s4, $v0
    ctx->pc = 0x39861cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_398620:
    // 0x398620: 0xc0e410c  jal         func_390430
label_398624:
    if (ctx->pc == 0x398624u) {
        ctx->pc = 0x398624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398620u;
        // 0x398624: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398628u;
        goto label_398628;
    }
    ctx->pc = 0x398620u;
    SET_GPR_U32(ctx, 31, 0x398628u);
    ctx->pc = 0x398624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398620u;
    // 0x398624: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390430u, 0x398620u, 0x398628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398628u;
label_398628:
    // 0x398628: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x398628u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39862c:
    // 0x39862c: 0x5600000e  bnel        $s0, $zero, . + 4 + (0xE << 2)
label_398630:
    if (ctx->pc == 0x398630u) {
        ctx->pc = 0x398630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39862Cu;
        // 0x398630: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398634u;
        goto label_398634;
    }
    ctx->pc = 0x39862Cu;
    {
        const bool branch_taken_0x39862c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x39862c) {
            ctx->pc = 0x398630u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39862Cu;
            // 0x398630: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x398668u;
            goto label_398668;
        }
    }
    ctx->pc = 0x398634u;
label_398634:
    // 0x398634: 0x26a2e880  addiu       $v0, $s5, -0x1780
    ctx->pc = 0x398634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294961280));
label_398638:
    // 0x398638: 0x8c43010c  lw          $v1, 0x10C($v0)
    ctx->pc = 0x398638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 268)));
label_39863c:
    // 0x39863c: 0x60f809  jalr        $v1
label_398640:
    if (ctx->pc == 0x398640u) {
        ctx->pc = 0x398640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39863Cu;
        // 0x398640: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398644u;
        goto label_398644;
    }
    ctx->pc = 0x39863Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x398644u);
        ctx->pc = 0x398640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39863Cu;
        // 0x398640: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39863Cu, 0x398644u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x398644u;
label_398644:
    // 0x398644: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x398644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_398648:
    // 0x398648: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x398648u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_39864c:
    // 0x39864c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x39864cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_398650:
    // 0x398650: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x398650u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_398654:
    // 0x398654: 0xc1035f6  jal         func_40D7D8
label_398658:
    if (ctx->pc == 0x398658u) {
        ctx->pc = 0x398658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398654u;
        // 0x398658: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        ctx->pc = 0x39865Cu;
        goto label_39865c;
    }
    ctx->pc = 0x398654u;
    SET_GPR_U32(ctx, 31, 0x39865Cu);
    ctx->pc = 0x398658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398654u;
    // 0x398658: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x398654u, 0x39865Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39865Cu;
label_39865c:
    // 0x39865c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x39865cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_398660:
    // 0x398660: 0x1000004f  b           . + 4 + (0x4F << 2)
label_398664:
    if (ctx->pc == 0x398664u) {
        ctx->pc = 0x398664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398660u;
        // 0x398664: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398668u;
        goto label_398668;
    }
    ctx->pc = 0x398660u;
    {
        const bool branch_taken_0x398660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x398664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398660u;
        // 0x398664: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398660) {
            ctx->pc = 0x3987A0u;
            goto label_3987a0;
        }
    }
    ctx->pc = 0x398668u;
label_398668:
    // 0x398668: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x398668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_39866c:
    // 0x39866c: 0xa6020004  sh          $v0, 0x4($s0)
    ctx->pc = 0x39866cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 2));
label_398670:
    // 0x398670: 0x26a8e880  addiu       $t0, $s5, -0x1780
    ctx->pc = 0x398670u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), 4294961280));
label_398674:
    // 0x398674: 0x8f82bd50  lw          $v0, -0x42B0($gp)
    ctx->pc = 0x398674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950224)));
label_398678:
    // 0x398678: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x398678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_39867c:
    // 0x39867c: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x39867cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_398680:
    // 0x398680: 0x945821  addu        $t3, $a0, $s4
    ctx->pc = 0x398680u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
label_398684:
    // 0x398684: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x398684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_398688:
    // 0x398688: 0x8e670000  lw          $a3, 0x0($s3)
    ctx->pc = 0x398688u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_39868c:
    // 0x39868c: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x39868cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_398690:
    // 0x398690: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x398690u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_398694:
    // 0x398694: 0x94460000  lhu         $a2, 0x0($v0)
    ctx->pc = 0x398694u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_398698:
    // 0x398698: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x398698u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39869c:
    // 0x39869c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x39869cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_3986a0:
    // 0x3986a0: 0x8ce50008  lw          $a1, 0x8($a3)
    ctx->pc = 0x3986a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_3986a4:
    // 0x3986a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3986a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3986a8:
    // 0x3986a8: 0xa6060006  sh          $a2, 0x6($s0)
    ctx->pc = 0x3986a8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 6));
label_3986ac:
    // 0x3986ac: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x3986acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_3986b0:
    // 0x3986b0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3986b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3986b4:
    // 0x3986b4: 0xac850008  sw          $a1, 0x8($a0)
    ctx->pc = 0x3986b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
label_3986b8:
    // 0x3986b8: 0x8f83bd50  lw          $v1, -0x42B0($gp)
    ctx->pc = 0x3986b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950224)));
label_3986bc:
    // 0x3986bc: 0x160282d  daddu       $a1, $t3, $zero
    ctx->pc = 0x3986bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_3986c0:
    // 0x3986c0: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x3986c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_3986c4:
    // 0x3986c4: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x3986c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_3986c8:
    // 0x3986c8: 0xae0b0010  sw          $t3, 0x10($s0)
    ctx->pc = 0x3986c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 11));
label_3986cc:
    // 0x3986cc: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x3986ccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_3986d0:
    // 0x3986d0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3986d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3986d4:
    // 0x3986d4: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x3986d4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
label_3986d8:
    // 0x3986d8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x3986d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_3986dc:
    // 0x3986dc: 0x8d230008  lw          $v1, 0x8($t1)
    ctx->pc = 0x3986dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
label_3986e0:
    // 0x3986e0: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x3986e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3986e4:
    // 0x3986e4: 0x50830009  beql        $a0, $v1, . + 4 + (0x9 << 2)
label_3986e8:
    if (ctx->pc == 0x3986E8u) {
        ctx->pc = 0x3986E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3986E4u;
        // 0x3986e8: 0x8cc40000  lw          $a0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3986ECu;
        goto label_3986ec;
    }
    ctx->pc = 0x3986E4u;
    {
        const bool branch_taken_0x3986e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3986e4) {
            ctx->pc = 0x3986E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3986E4u;
            // 0x3986e8: 0x8cc40000  lw          $a0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39870Cu;
            goto label_39870c;
        }
    }
    ctx->pc = 0x3986ECu;
label_3986ec:
    // 0x3986ec: 0x96020004  lhu         $v0, 0x4($s0)
    ctx->pc = 0x3986ecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_3986f0:
    // 0x3986f0: 0x2529000c  addiu       $t1, $t1, 0xC
    ctx->pc = 0x3986f0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 12));
label_3986f4:
    // 0x3986f4: 0xad240008  sw          $a0, 0x8($t1)
    ctx->pc = 0x3986f4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 4));
label_3986f8:
    // 0x3986f8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3986f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3986fc:
    // 0x3986fc: 0xad200004  sw          $zero, 0x4($t1)
    ctx->pc = 0x3986fcu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 0));
label_398700:
    // 0x398700: 0xa6020004  sh          $v0, 0x4($s0)
    ctx->pc = 0x398700u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 2));
label_398704:
    // 0x398704: 0xad2b0000  sw          $t3, 0x0($t1)
    ctx->pc = 0x398704u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 11));
label_398708:
    // 0x398708: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x398708u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_39870c:
    // 0x39870c: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x39870cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_398710:
    // 0x398710: 0x8d230004  lw          $v1, 0x4($t1)
    ctx->pc = 0x398710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
label_398714:
    // 0x398714: 0x256b0006  addiu       $t3, $t3, 0x6
    ctx->pc = 0x398714u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 6));
label_398718:
    // 0x398718: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x398718u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_39871c:
    // 0x39871c: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x39871cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_398720:
    // 0x398720: 0x24630003  addiu       $v1, $v1, 0x3
    ctx->pc = 0x398720u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
label_398724:
    // 0x398724: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x398724u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
label_398728:
    // 0x398728: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x398728u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
label_39872c:
    // 0x39872c: 0xad230004  sw          $v1, 0x4($t1)
    ctx->pc = 0x39872cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 3));
label_398730:
    // 0x398730: 0x94820002  lhu         $v0, 0x2($a0)
    ctx->pc = 0x398730u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_398734:
    // 0x398734: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x398734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_398738:
    // 0x398738: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x398738u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
label_39873c:
    // 0x39873c: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x39873cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
label_398740:
    // 0x398740: 0x143182b  sltu        $v1, $t2, $v1
    ctx->pc = 0x398740u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_398744:
    // 0x398744: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x398744u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_398748:
    // 0x398748: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x398748u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
label_39874c:
    // 0x39874c: 0x1460ffe2  bnez        $v1, . + 4 + (-0x1E << 2)
label_398750:
    if (ctx->pc == 0x398750u) {
        ctx->pc = 0x398750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39874Cu;
        // 0x398750: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398754u;
        goto label_398754;
    }
    ctx->pc = 0x39874Cu;
    {
        const bool branch_taken_0x39874c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x398750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39874Cu;
        // 0x398750: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39874c) {
            ctx->pc = 0x3986D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3986d8;
        }
    }
    ctx->pc = 0x398754u;
label_398754:
    // 0x398754: 0x3c050039  lui         $a1, 0x39
    ctx->pc = 0x398754u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)57 << 16));
label_398758:
    // 0x398758: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x398758u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_39875c:
    // 0x39875c: 0x24a505b0  addiu       $a1, $a1, 0x5B0
    ctx->pc = 0x39875cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1456));
label_398760:
    // 0x398760: 0xc0e40c2  jal         func_390308
label_398764:
    if (ctx->pc == 0x398764u) {
        ctx->pc = 0x398764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398760u;
        // 0x398764: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398768u;
        goto label_398768;
    }
    ctx->pc = 0x398760u;
    SET_GPR_U32(ctx, 31, 0x398768u);
    ctx->pc = 0x398764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398760u;
    // 0x398764: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390308u, 0x398760u, 0x398768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398768u;
label_398768:
    // 0x398768: 0x26a3e880  addiu       $v1, $s5, -0x1780
    ctx->pc = 0x398768u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294961280));
label_39876c:
    // 0x39876c: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x39876cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_398770:
    // 0x398770: 0x40f809  jalr        $v0
label_398774:
    if (ctx->pc == 0x398774u) {
        ctx->pc = 0x398774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398770u;
        // 0x398774: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398778u;
        goto label_398778;
    }
    ctx->pc = 0x398770u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x398778u);
        ctx->pc = 0x398774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398770u;
        // 0x398774: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x398770u, 0x398778u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x398778u;
label_398778:
    // 0x398778: 0x1000000c  b           . + 4 + (0xC << 2)
label_39877c:
    if (ctx->pc == 0x39877Cu) {
        ctx->pc = 0x39877Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398778u;
        // 0x39877c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398780u;
        goto label_398780;
    }
    ctx->pc = 0x398778u;
    {
        const bool branch_taken_0x398778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39877Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398778u;
        // 0x39877c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398778) {
            ctx->pc = 0x3987ACu;
            goto label_3987ac;
        }
    }
    ctx->pc = 0x398780u;
label_398780:
    // 0x398780: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x398780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_398784:
    // 0x398784: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x398784u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_398788:
    // 0x398788: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x398788u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_39878c:
    // 0x39878c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x39878cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_398790:
    // 0x398790: 0xc1035f6  jal         func_40D7D8
label_398794:
    if (ctx->pc == 0x398794u) {
        ctx->pc = 0x398794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398790u;
        // 0x398794: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        ctx->pc = 0x398798u;
        goto label_398798;
    }
    ctx->pc = 0x398790u;
    SET_GPR_U32(ctx, 31, 0x398798u);
    ctx->pc = 0x398794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398790u;
    // 0x398794: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x398790u, 0x398798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398798u;
label_398798:
    // 0x398798: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x398798u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_39879c:
    // 0x39879c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x39879cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3987a0:
    // 0x3987a0: 0xc103628  jal         func_40D8A0
label_3987a4:
    if (ctx->pc == 0x3987A4u) {
        ctx->pc = 0x3987A8u;
        goto label_3987a8;
    }
    ctx->pc = 0x3987A0u;
    SET_GPR_U32(ctx, 31, 0x3987A8u);
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x3987A0u, 0x3987A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3987A8u;
label_3987a8:
    // 0x3987a8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3987a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3987ac:
    // 0x3987ac: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x3987acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3987b0:
    // 0x3987b0: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x3987b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3987b4:
    // 0x3987b4: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x3987b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3987b8:
    // 0x3987b8: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x3987b8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3987bc:
    // 0x3987bc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3987bcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3987c0:
    // 0x3987c0: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x3987c0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3987c4:
    // 0x3987c4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3987c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3987c8:
    // 0x3987c8: 0x3e00008  jr          $ra
label_3987cc:
    if (ctx->pc == 0x3987CCu) {
        ctx->pc = 0x3987CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3987C8u;
        // 0x3987cc: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3987D0u;
        goto label_fallthrough_0x3987c8;
    }
    ctx->pc = 0x3987C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3987CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3987C8u;
        // 0x3987cc: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3987C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3987c8:
    ctx->pc = 0x3987D0u;
}
