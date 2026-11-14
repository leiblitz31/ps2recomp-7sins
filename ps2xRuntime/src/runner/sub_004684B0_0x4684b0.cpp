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

// Function: sub_004684B0
// Address: 0x4684b0 - 0x468860
void sub_004684B0_0x4684b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004684B0_0x4684b0");
#endif

    switch (ctx->pc) {
        case 0x4684b0u: goto label_4684b0;
        case 0x4684b4u: goto label_4684b4;
        case 0x4684b8u: goto label_4684b8;
        case 0x4684bcu: goto label_4684bc;
        case 0x4684c0u: goto label_4684c0;
        case 0x4684c4u: goto label_4684c4;
        case 0x4684c8u: goto label_4684c8;
        case 0x4684ccu: goto label_4684cc;
        case 0x4684d0u: goto label_4684d0;
        case 0x4684d4u: goto label_4684d4;
        case 0x4684d8u: goto label_4684d8;
        case 0x4684dcu: goto label_4684dc;
        case 0x4684e0u: goto label_4684e0;
        case 0x4684e4u: goto label_4684e4;
        case 0x4684e8u: goto label_4684e8;
        case 0x4684ecu: goto label_4684ec;
        case 0x4684f0u: goto label_4684f0;
        case 0x4684f4u: goto label_4684f4;
        case 0x4684f8u: goto label_4684f8;
        case 0x4684fcu: goto label_4684fc;
        case 0x468500u: goto label_468500;
        case 0x468504u: goto label_468504;
        case 0x468508u: goto label_468508;
        case 0x46850cu: goto label_46850c;
        case 0x468510u: goto label_468510;
        case 0x468514u: goto label_468514;
        case 0x468518u: goto label_468518;
        case 0x46851cu: goto label_46851c;
        case 0x468520u: goto label_468520;
        case 0x468524u: goto label_468524;
        case 0x468528u: goto label_468528;
        case 0x46852cu: goto label_46852c;
        case 0x468530u: goto label_468530;
        case 0x468534u: goto label_468534;
        case 0x468538u: goto label_468538;
        case 0x46853cu: goto label_46853c;
        case 0x468540u: goto label_468540;
        case 0x468544u: goto label_468544;
        case 0x468548u: goto label_468548;
        case 0x46854cu: goto label_46854c;
        case 0x468550u: goto label_468550;
        case 0x468554u: goto label_468554;
        case 0x468558u: goto label_468558;
        case 0x46855cu: goto label_46855c;
        case 0x468560u: goto label_468560;
        case 0x468564u: goto label_468564;
        case 0x468568u: goto label_468568;
        case 0x46856cu: goto label_46856c;
        case 0x468570u: goto label_468570;
        case 0x468574u: goto label_468574;
        case 0x468578u: goto label_468578;
        case 0x46857cu: goto label_46857c;
        case 0x468580u: goto label_468580;
        case 0x468584u: goto label_468584;
        case 0x468588u: goto label_468588;
        case 0x46858cu: goto label_46858c;
        case 0x468590u: goto label_468590;
        case 0x468594u: goto label_468594;
        case 0x468598u: goto label_468598;
        case 0x46859cu: goto label_46859c;
        case 0x4685a0u: goto label_4685a0;
        case 0x4685a4u: goto label_4685a4;
        case 0x4685a8u: goto label_4685a8;
        case 0x4685acu: goto label_4685ac;
        case 0x4685b0u: goto label_4685b0;
        case 0x4685b4u: goto label_4685b4;
        case 0x4685b8u: goto label_4685b8;
        case 0x4685bcu: goto label_4685bc;
        case 0x4685c0u: goto label_4685c0;
        case 0x4685c4u: goto label_4685c4;
        case 0x4685c8u: goto label_4685c8;
        case 0x4685ccu: goto label_4685cc;
        case 0x4685d0u: goto label_4685d0;
        case 0x4685d4u: goto label_4685d4;
        case 0x4685d8u: goto label_4685d8;
        case 0x4685dcu: goto label_4685dc;
        case 0x4685e0u: goto label_4685e0;
        case 0x4685e4u: goto label_4685e4;
        case 0x4685e8u: goto label_4685e8;
        case 0x4685ecu: goto label_4685ec;
        case 0x4685f0u: goto label_4685f0;
        case 0x4685f4u: goto label_4685f4;
        case 0x4685f8u: goto label_4685f8;
        case 0x4685fcu: goto label_4685fc;
        case 0x468600u: goto label_468600;
        case 0x468604u: goto label_468604;
        case 0x468608u: goto label_468608;
        case 0x46860cu: goto label_46860c;
        case 0x468610u: goto label_468610;
        case 0x468614u: goto label_468614;
        case 0x468618u: goto label_468618;
        case 0x46861cu: goto label_46861c;
        case 0x468620u: goto label_468620;
        case 0x468624u: goto label_468624;
        case 0x468628u: goto label_468628;
        case 0x46862cu: goto label_46862c;
        case 0x468630u: goto label_468630;
        case 0x468634u: goto label_468634;
        case 0x468638u: goto label_468638;
        case 0x46863cu: goto label_46863c;
        case 0x468640u: goto label_468640;
        case 0x468644u: goto label_468644;
        case 0x468648u: goto label_468648;
        case 0x46864cu: goto label_46864c;
        case 0x468650u: goto label_468650;
        case 0x468654u: goto label_468654;
        case 0x468658u: goto label_468658;
        case 0x46865cu: goto label_46865c;
        case 0x468660u: goto label_468660;
        case 0x468664u: goto label_468664;
        case 0x468668u: goto label_468668;
        case 0x46866cu: goto label_46866c;
        case 0x468670u: goto label_468670;
        case 0x468674u: goto label_468674;
        case 0x468678u: goto label_468678;
        case 0x46867cu: goto label_46867c;
        case 0x468680u: goto label_468680;
        case 0x468684u: goto label_468684;
        case 0x468688u: goto label_468688;
        case 0x46868cu: goto label_46868c;
        case 0x468690u: goto label_468690;
        case 0x468694u: goto label_468694;
        case 0x468698u: goto label_468698;
        case 0x46869cu: goto label_46869c;
        case 0x4686a0u: goto label_4686a0;
        case 0x4686a4u: goto label_4686a4;
        case 0x4686a8u: goto label_4686a8;
        case 0x4686acu: goto label_4686ac;
        case 0x4686b0u: goto label_4686b0;
        case 0x4686b4u: goto label_4686b4;
        case 0x4686b8u: goto label_4686b8;
        case 0x4686bcu: goto label_4686bc;
        case 0x4686c0u: goto label_4686c0;
        case 0x4686c4u: goto label_4686c4;
        case 0x4686c8u: goto label_4686c8;
        case 0x4686ccu: goto label_4686cc;
        case 0x4686d0u: goto label_4686d0;
        case 0x4686d4u: goto label_4686d4;
        case 0x4686d8u: goto label_4686d8;
        case 0x4686dcu: goto label_4686dc;
        case 0x4686e0u: goto label_4686e0;
        case 0x4686e4u: goto label_4686e4;
        case 0x4686e8u: goto label_4686e8;
        case 0x4686ecu: goto label_4686ec;
        case 0x4686f0u: goto label_4686f0;
        case 0x4686f4u: goto label_4686f4;
        case 0x4686f8u: goto label_4686f8;
        case 0x4686fcu: goto label_4686fc;
        case 0x468700u: goto label_468700;
        case 0x468704u: goto label_468704;
        case 0x468708u: goto label_468708;
        case 0x46870cu: goto label_46870c;
        case 0x468710u: goto label_468710;
        case 0x468714u: goto label_468714;
        case 0x468718u: goto label_468718;
        case 0x46871cu: goto label_46871c;
        case 0x468720u: goto label_468720;
        case 0x468724u: goto label_468724;
        case 0x468728u: goto label_468728;
        case 0x46872cu: goto label_46872c;
        case 0x468730u: goto label_468730;
        case 0x468734u: goto label_468734;
        case 0x468738u: goto label_468738;
        case 0x46873cu: goto label_46873c;
        case 0x468740u: goto label_468740;
        case 0x468744u: goto label_468744;
        case 0x468748u: goto label_468748;
        case 0x46874cu: goto label_46874c;
        case 0x468750u: goto label_468750;
        case 0x468754u: goto label_468754;
        case 0x468758u: goto label_468758;
        case 0x46875cu: goto label_46875c;
        case 0x468760u: goto label_468760;
        case 0x468764u: goto label_468764;
        case 0x468768u: goto label_468768;
        case 0x46876cu: goto label_46876c;
        case 0x468770u: goto label_468770;
        case 0x468774u: goto label_468774;
        case 0x468778u: goto label_468778;
        case 0x46877cu: goto label_46877c;
        case 0x468780u: goto label_468780;
        case 0x468784u: goto label_468784;
        case 0x468788u: goto label_468788;
        case 0x46878cu: goto label_46878c;
        case 0x468790u: goto label_468790;
        case 0x468794u: goto label_468794;
        case 0x468798u: goto label_468798;
        case 0x46879cu: goto label_46879c;
        case 0x4687a0u: goto label_4687a0;
        case 0x4687a4u: goto label_4687a4;
        case 0x4687a8u: goto label_4687a8;
        case 0x4687acu: goto label_4687ac;
        case 0x4687b0u: goto label_4687b0;
        case 0x4687b4u: goto label_4687b4;
        case 0x4687b8u: goto label_4687b8;
        case 0x4687bcu: goto label_4687bc;
        case 0x4687c0u: goto label_4687c0;
        case 0x4687c4u: goto label_4687c4;
        case 0x4687c8u: goto label_4687c8;
        case 0x4687ccu: goto label_4687cc;
        case 0x4687d0u: goto label_4687d0;
        case 0x4687d4u: goto label_4687d4;
        case 0x4687d8u: goto label_4687d8;
        case 0x4687dcu: goto label_4687dc;
        case 0x4687e0u: goto label_4687e0;
        case 0x4687e4u: goto label_4687e4;
        case 0x4687e8u: goto label_4687e8;
        case 0x4687ecu: goto label_4687ec;
        case 0x4687f0u: goto label_4687f0;
        case 0x4687f4u: goto label_4687f4;
        case 0x4687f8u: goto label_4687f8;
        case 0x4687fcu: goto label_4687fc;
        case 0x468800u: goto label_468800;
        case 0x468804u: goto label_468804;
        case 0x468808u: goto label_468808;
        case 0x46880cu: goto label_46880c;
        case 0x468810u: goto label_468810;
        case 0x468814u: goto label_468814;
        case 0x468818u: goto label_468818;
        case 0x46881cu: goto label_46881c;
        case 0x468820u: goto label_468820;
        case 0x468824u: goto label_468824;
        case 0x468828u: goto label_468828;
        case 0x46882cu: goto label_46882c;
        case 0x468830u: goto label_468830;
        case 0x468834u: goto label_468834;
        case 0x468838u: goto label_468838;
        case 0x46883cu: goto label_46883c;
        case 0x468840u: goto label_468840;
        case 0x468844u: goto label_468844;
        case 0x468848u: goto label_468848;
        case 0x46884cu: goto label_46884c;
        case 0x468850u: goto label_468850;
        case 0x468854u: goto label_468854;
        case 0x468858u: goto label_468858;
        case 0x46885cu: goto label_46885c;
        default: break;
    }

    ctx->pc = 0x4684b0u;

label_4684b0:
    // 0x4684b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4684b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_4684b4:
    // 0x4684b4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x4684b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_4684b8:
    // 0x4684b8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4684b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_4684bc:
    // 0x4684bc: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x4684bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_4684c0:
    // 0x4684c0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x4684c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_4684c4:
    // 0x4684c4: 0x3e00008  jr          $ra
label_4684c8:
    if (ctx->pc == 0x4684C8u) {
        ctx->pc = 0x4684CCu;
        goto label_4684cc;
    }
    ctx->pc = 0x4684C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4684C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4684CCu;
label_4684cc:
    // 0x4684cc: 0x0  nop
    ctx->pc = 0x4684ccu;
    // NOP
label_4684d0:
    // 0x4684d0: 0x27bdfc20  addiu       $sp, $sp, -0x3E0
    ctx->pc = 0x4684d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966304));
label_4684d4:
    // 0x4684d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4684d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4684d8:
    // 0x4684d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4684d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4684dc:
    // 0x4684dc: 0xafa403b0  sw          $a0, 0x3B0($sp)
    ctx->pc = 0x4684dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 944), GPR_U32(ctx, 4));
label_4684e0:
    // 0x4684e0: 0xafa503c0  sw          $a1, 0x3C0($sp)
    ctx->pc = 0x4684e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 960), GPR_U32(ctx, 5));
label_4684e4:
    // 0x4684e4: 0xafa603d0  sw          $a2, 0x3D0($sp)
    ctx->pc = 0x4684e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 976), GPR_U32(ctx, 6));
label_4684e8:
    // 0x4684e8: 0x8fa203b0  lw          $v0, 0x3B0($sp)
    ctx->pc = 0x4684e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 944)));
label_4684ec:
    // 0x4684ec: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x4684ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_4684f0:
    // 0x4684f0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x4684f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4684f4:
    // 0x4684f4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x4684f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_4684f8:
    // 0x4684f8: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_4684fc:
    if (ctx->pc == 0x4684FCu) {
        ctx->pc = 0x468500u;
        goto label_468500;
    }
    ctx->pc = 0x4684F8u;
    {
        const bool branch_taken_0x4684f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4684f8) {
            ctx->pc = 0x4685A8u;
            goto label_4685a8;
        }
    }
    ctx->pc = 0x468500u;
label_468500:
    // 0x468500: 0x8f82b2d8  lw          $v0, -0x4D28($gp)
    ctx->pc = 0x468500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947544)));
label_468504:
    // 0x468504: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_468508:
    if (ctx->pc == 0x468508u) {
        ctx->pc = 0x46850Cu;
        goto label_46850c;
    }
    ctx->pc = 0x468504u;
    {
        const bool branch_taken_0x468504 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x468504) {
            ctx->pc = 0x4685A8u;
            goto label_4685a8;
        }
    }
    ctx->pc = 0x46850Cu;
label_46850c:
    // 0x46850c: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x46850cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_468510:
    // 0x468510: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x468510u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_468514:
    // 0x468514: 0x27a603a0  addiu       $a2, $sp, 0x3A0
    ctx->pc = 0x468514u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 928));
label_468518:
    // 0x468518: 0xc115ee8  jal         func_457BA0
label_46851c:
    if (ctx->pc == 0x46851Cu) {
        ctx->pc = 0x468520u;
        goto label_468520;
    }
    ctx->pc = 0x468518u;
    SET_GPR_U32(ctx, 31, 0x468520u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x468518u, 0x468520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x468520u;
label_468520:
    // 0x468520: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_468524:
    if (ctx->pc == 0x468524u) {
        ctx->pc = 0x468528u;
        goto label_468528;
    }
    ctx->pc = 0x468520u;
    {
        const bool branch_taken_0x468520 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x468520) {
            ctx->pc = 0x4685A8u;
            goto label_4685a8;
        }
    }
    ctx->pc = 0x468528u;
label_468528:
    // 0x468528: 0x8fa203a8  lw          $v0, 0x3A8($sp)
    ctx->pc = 0x468528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 936)));
label_46852c:
    // 0x46852c: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_468530:
    if (ctx->pc == 0x468530u) {
        ctx->pc = 0x468534u;
        goto label_468534;
    }
    ctx->pc = 0x46852Cu;
    {
        const bool branch_taken_0x46852c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x46852c) {
            ctx->pc = 0x4685A8u;
            goto label_4685a8;
        }
    }
    ctx->pc = 0x468534u;
label_468534:
    // 0x468534: 0x27a40260  addiu       $a0, $sp, 0x260
    ctx->pc = 0x468534u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
label_468538:
    // 0x468538: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x468538u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_46853c:
    // 0x46853c: 0x8fa603a4  lw          $a2, 0x3A4($sp)
    ctx->pc = 0x46853cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 932)));
label_468540:
    // 0x468540: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x468540u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_468544:
    // 0x468544: 0x24e7f780  addiu       $a3, $a3, -0x880
    ctx->pc = 0x468544u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294965120));
label_468548:
    // 0x468548: 0x240800d5  addiu       $t0, $zero, 0xD5
    ctx->pc = 0x468548u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 213));
label_46854c:
    // 0x46854c: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x46854cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_468550:
    // 0x468550: 0x2529f7a0  addiu       $t1, $t1, -0x860
    ctx->pc = 0x468550u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294965152));
label_468554:
    // 0x468554: 0xc113940  jal         func_44E500
label_468558:
    if (ctx->pc == 0x468558u) {
        ctx->pc = 0x46855Cu;
        goto label_46855c;
    }
    ctx->pc = 0x468554u;
    SET_GPR_U32(ctx, 31, 0x46855Cu);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x468554u, 0x46855Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46855Cu;
label_46855c:
    // 0x46855c: 0x27a40260  addiu       $a0, $sp, 0x260
    ctx->pc = 0x46855cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
label_468560:
    // 0x468560: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x468560u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_468564:
    // 0x468564: 0x24a5f830  addiu       $a1, $a1, -0x7D0
    ctx->pc = 0x468564u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965296));
label_468568:
    // 0x468568: 0xc115c24  jal         func_457090
label_46856c:
    if (ctx->pc == 0x46856Cu) {
        ctx->pc = 0x468570u;
        goto label_468570;
    }
    ctx->pc = 0x468568u;
    SET_GPR_U32(ctx, 31, 0x468570u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x468568u, 0x468570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x468570u;
label_468570:
    // 0x468570: 0x27a40260  addiu       $a0, $sp, 0x260
    ctx->pc = 0x468570u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
label_468574:
    // 0x468574: 0x8fa203a8  lw          $v0, 0x3A8($sp)
    ctx->pc = 0x468574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 936)));
label_468578:
    // 0x468578: 0x40f809  jalr        $v0
label_46857c:
    if (ctx->pc == 0x46857Cu) {
        ctx->pc = 0x468580u;
        goto label_468580;
    }
    ctx->pc = 0x468578u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x468580u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x468578u, 0x468580u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x468580u;
label_468580:
    // 0x468580: 0xaf82b2d8  sw          $v0, -0x4D28($gp)
    ctx->pc = 0x468580u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947544), GPR_U32(ctx, 2));
label_468584:
    // 0x468584: 0x8fa20260  lw          $v0, 0x260($sp)
    ctx->pc = 0x468584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
label_468588:
    // 0x468588: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_46858c:
    if (ctx->pc == 0x46858Cu) {
        ctx->pc = 0x468590u;
        goto label_468590;
    }
    ctx->pc = 0x468588u;
    {
        const bool branch_taken_0x468588 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x468588) {
            ctx->pc = 0x468598u;
            goto label_468598;
        }
    }
    ctx->pc = 0x468590u;
label_468590:
    // 0x468590: 0xd  break       0
    ctx->pc = 0x468590u;
    runtime->handleBreak(rdram, ctx);
label_468594:
    // 0x468594: 0x0  nop
    ctx->pc = 0x468594u;
    // NOP
label_468598:
    // 0x468598: 0x27a40260  addiu       $a0, $sp, 0x260
    ctx->pc = 0x468598u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
label_46859c:
    // 0x46859c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x46859cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4685a0:
    // 0x4685a0: 0xc11392c  jal         func_44E4B0
label_4685a4:
    if (ctx->pc == 0x4685A4u) {
        ctx->pc = 0x4685A8u;
        goto label_4685a8;
    }
    ctx->pc = 0x4685A0u;
    SET_GPR_U32(ctx, 31, 0x4685A8u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x4685A0u, 0x4685A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4685A8u;
label_4685a8:
    // 0x4685a8: 0x8fa303d0  lw          $v1, 0x3D0($sp)
    ctx->pc = 0x4685a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 976)));
label_4685ac:
    // 0x4685ac: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4685acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4685b0:
    // 0x4685b0: 0x10620013  beq         $v1, $v0, . + 4 + (0x13 << 2)
label_4685b4:
    if (ctx->pc == 0x4685B4u) {
        ctx->pc = 0x4685B8u;
        goto label_4685b8;
    }
    ctx->pc = 0x4685B0u;
    {
        const bool branch_taken_0x4685b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4685b0) {
            ctx->pc = 0x468600u;
            goto label_468600;
        }
    }
    ctx->pc = 0x4685B8u;
label_4685b8:
    // 0x4685b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4685b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4685bc:
    // 0x4685bc: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
label_4685c0:
    if (ctx->pc == 0x4685C0u) {
        ctx->pc = 0x4685C4u;
        goto label_4685c4;
    }
    ctx->pc = 0x4685BCu;
    {
        const bool branch_taken_0x4685bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4685bc) {
            ctx->pc = 0x4685E0u;
            goto label_4685e0;
        }
    }
    ctx->pc = 0x4685C4u;
label_4685c4:
    // 0x4685c4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_4685c8:
    if (ctx->pc == 0x4685C8u) {
        ctx->pc = 0x4685CCu;
        goto label_4685cc;
    }
    ctx->pc = 0x4685C4u;
    {
        const bool branch_taken_0x4685c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4685c4) {
            ctx->pc = 0x4685D4u;
            goto label_4685d4;
        }
    }
    ctx->pc = 0x4685CCu;
label_4685cc:
    // 0x4685cc: 0x10000014  b           . + 4 + (0x14 << 2)
label_4685d0:
    if (ctx->pc == 0x4685D0u) {
        ctx->pc = 0x4685D4u;
        goto label_4685d4;
    }
    ctx->pc = 0x4685CCu;
    {
        const bool branch_taken_0x4685cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4685cc) {
            ctx->pc = 0x468620u;
            goto label_468620;
        }
    }
    ctx->pc = 0x4685D4u;
label_4685d4:
    // 0x4685d4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x4685d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4685d8:
    // 0x4685d8: 0x10000014  b           . + 4 + (0x14 << 2)
label_4685dc:
    if (ctx->pc == 0x4685DCu) {
        ctx->pc = 0x4685E0u;
        goto label_4685e0;
    }
    ctx->pc = 0x4685D8u;
    {
        const bool branch_taken_0x4685d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4685d8) {
            ctx->pc = 0x46862Cu;
            goto label_46862c;
        }
    }
    ctx->pc = 0x4685E0u;
label_4685e0:
    // 0x4685e0: 0x8fa203b0  lw          $v0, 0x3B0($sp)
    ctx->pc = 0x4685e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 944)));
label_4685e4:
    // 0x4685e4: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x4685e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_4685e8:
    // 0x4685e8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x4685e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_4685ec:
    // 0x4685ec: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x4685ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_4685f0:
    // 0x4685f0: 0x2803c  dsll32      $s0, $v0, 0
    ctx->pc = 0x4685f0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 0));
label_4685f4:
    // 0x4685f4: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x4685f4u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
label_4685f8:
    // 0x4685f8: 0x1000000c  b           . + 4 + (0xC << 2)
label_4685fc:
    if (ctx->pc == 0x4685FCu) {
        ctx->pc = 0x468600u;
        goto label_468600;
    }
    ctx->pc = 0x4685F8u;
    {
        const bool branch_taken_0x4685f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4685f8) {
            ctx->pc = 0x46862Cu;
            goto label_46862c;
        }
    }
    ctx->pc = 0x468600u;
label_468600:
    // 0x468600: 0x8fa203b0  lw          $v0, 0x3B0($sp)
    ctx->pc = 0x468600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 944)));
label_468604:
    // 0x468604: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x468604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_468608:
    // 0x468608: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x468608u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_46860c:
    // 0x46860c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x46860cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_468610:
    // 0x468610: 0x2803c  dsll32      $s0, $v0, 0
    ctx->pc = 0x468610u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 0));
label_468614:
    // 0x468614: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x468614u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
label_468618:
    // 0x468618: 0x10000004  b           . + 4 + (0x4 << 2)
label_46861c:
    if (ctx->pc == 0x46861Cu) {
        ctx->pc = 0x468620u;
        goto label_468620;
    }
    ctx->pc = 0x468618u;
    {
        const bool branch_taken_0x468618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x468618) {
            ctx->pc = 0x46862Cu;
            goto label_46862c;
        }
    }
    ctx->pc = 0x468620u;
label_468620:
    // 0x468620: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x468620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_468624:
    // 0x468624: 0x1000007b  b           . + 4 + (0x7B << 2)
label_468628:
    if (ctx->pc == 0x468628u) {
        ctx->pc = 0x46862Cu;
        goto label_46862c;
    }
    ctx->pc = 0x468624u;
    {
        const bool branch_taken_0x468624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x468624) {
            ctx->pc = 0x468814u;
            goto label_468814;
        }
    }
    ctx->pc = 0x46862Cu;
label_46862c:
    // 0x46862c: 0x8fa203c0  lw          $v0, 0x3C0($sp)
    ctx->pc = 0x46862cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 960)));
label_468630:
    // 0x468630: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x468630u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_468634:
    // 0x468634: 0x6010033  bgez        $s0, . + 4 + (0x33 << 2)
label_468638:
    if (ctx->pc == 0x468638u) {
        ctx->pc = 0x46863Cu;
        goto label_46863c;
    }
    ctx->pc = 0x468634u;
    {
        const bool branch_taken_0x468634 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x468634) {
            ctx->pc = 0x468704u;
            goto label_468704;
        }
    }
    ctx->pc = 0x46863Cu;
label_46863c:
    // 0x46863c: 0x200102a  slt         $v0, $s0, $zero
    ctx->pc = 0x46863cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_468640:
    // 0x468640: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x468640u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_468644:
    // 0x468644: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x468644u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_468648:
    // 0x468648: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_46864c:
    if (ctx->pc == 0x46864Cu) {
        ctx->pc = 0x468650u;
        goto label_468650;
    }
    ctx->pc = 0x468648u;
    {
        const bool branch_taken_0x468648 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x468648) {
            ctx->pc = 0x4686F8u;
            goto label_4686f8;
        }
    }
    ctx->pc = 0x468650u;
label_468650:
    // 0x468650: 0x8f82b2dc  lw          $v0, -0x4D24($gp)
    ctx->pc = 0x468650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947548)));
label_468654:
    // 0x468654: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_468658:
    if (ctx->pc == 0x468658u) {
        ctx->pc = 0x46865Cu;
        goto label_46865c;
    }
    ctx->pc = 0x468654u;
    {
        const bool branch_taken_0x468654 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x468654) {
            ctx->pc = 0x4686F8u;
            goto label_4686f8;
        }
    }
    ctx->pc = 0x46865Cu;
label_46865c:
    // 0x46865c: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x46865cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_468660:
    // 0x468660: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x468660u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_468664:
    // 0x468664: 0x27a60390  addiu       $a2, $sp, 0x390
    ctx->pc = 0x468664u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 912));
label_468668:
    // 0x468668: 0xc115ee8  jal         func_457BA0
label_46866c:
    if (ctx->pc == 0x46866Cu) {
        ctx->pc = 0x468670u;
        goto label_468670;
    }
    ctx->pc = 0x468668u;
    SET_GPR_U32(ctx, 31, 0x468670u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x468668u, 0x468670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x468670u;
label_468670:
    // 0x468670: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_468674:
    if (ctx->pc == 0x468674u) {
        ctx->pc = 0x468678u;
        goto label_468678;
    }
    ctx->pc = 0x468670u;
    {
        const bool branch_taken_0x468670 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x468670) {
            ctx->pc = 0x4686F8u;
            goto label_4686f8;
        }
    }
    ctx->pc = 0x468678u;
label_468678:
    // 0x468678: 0x8fa20398  lw          $v0, 0x398($sp)
    ctx->pc = 0x468678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 920)));
label_46867c:
    // 0x46867c: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_468680:
    if (ctx->pc == 0x468680u) {
        ctx->pc = 0x468684u;
        goto label_468684;
    }
    ctx->pc = 0x46867Cu;
    {
        const bool branch_taken_0x46867c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x46867c) {
            ctx->pc = 0x4686F8u;
            goto label_4686f8;
        }
    }
    ctx->pc = 0x468684u;
label_468684:
    // 0x468684: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x468684u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_468688:
    // 0x468688: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x468688u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_46868c:
    // 0x46868c: 0x8fa60394  lw          $a2, 0x394($sp)
    ctx->pc = 0x46868cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 916)));
label_468690:
    // 0x468690: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x468690u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_468694:
    // 0x468694: 0x24e7f780  addiu       $a3, $a3, -0x880
    ctx->pc = 0x468694u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294965120));
label_468698:
    // 0x468698: 0x240800f0  addiu       $t0, $zero, 0xF0
    ctx->pc = 0x468698u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
label_46869c:
    // 0x46869c: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x46869cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_4686a0:
    // 0x4686a0: 0x2529f860  addiu       $t1, $t1, -0x7A0
    ctx->pc = 0x4686a0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294965344));
label_4686a4:
    // 0x4686a4: 0xc113940  jal         func_44E500
label_4686a8:
    if (ctx->pc == 0x4686A8u) {
        ctx->pc = 0x4686ACu;
        goto label_4686ac;
    }
    ctx->pc = 0x4686A4u;
    SET_GPR_U32(ctx, 31, 0x4686ACu);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x4686A4u, 0x4686ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4686ACu;
label_4686ac:
    // 0x4686ac: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x4686acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_4686b0:
    // 0x4686b0: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x4686b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_4686b4:
    // 0x4686b4: 0x24a5f870  addiu       $a1, $a1, -0x790
    ctx->pc = 0x4686b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965360));
label_4686b8:
    // 0x4686b8: 0xc115c24  jal         func_457090
label_4686bc:
    if (ctx->pc == 0x4686BCu) {
        ctx->pc = 0x4686C0u;
        goto label_4686c0;
    }
    ctx->pc = 0x4686B8u;
    SET_GPR_U32(ctx, 31, 0x4686C0u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x4686B8u, 0x4686C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4686C0u;
label_4686c0:
    // 0x4686c0: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x4686c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_4686c4:
    // 0x4686c4: 0x8fa20398  lw          $v0, 0x398($sp)
    ctx->pc = 0x4686c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 920)));
label_4686c8:
    // 0x4686c8: 0x40f809  jalr        $v0
label_4686cc:
    if (ctx->pc == 0x4686CCu) {
        ctx->pc = 0x4686D0u;
        goto label_4686d0;
    }
    ctx->pc = 0x4686C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4686D0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4686C8u, 0x4686D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4686D0u;
label_4686d0:
    // 0x4686d0: 0xaf82b2dc  sw          $v0, -0x4D24($gp)
    ctx->pc = 0x4686d0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947548), GPR_U32(ctx, 2));
label_4686d4:
    // 0x4686d4: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x4686d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_4686d8:
    // 0x4686d8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_4686dc:
    if (ctx->pc == 0x4686DCu) {
        ctx->pc = 0x4686E0u;
        goto label_4686e0;
    }
    ctx->pc = 0x4686D8u;
    {
        const bool branch_taken_0x4686d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4686d8) {
            ctx->pc = 0x4686E8u;
            goto label_4686e8;
        }
    }
    ctx->pc = 0x4686E0u;
label_4686e0:
    // 0x4686e0: 0xd  break       0
    ctx->pc = 0x4686e0u;
    runtime->handleBreak(rdram, ctx);
label_4686e4:
    // 0x4686e4: 0x0  nop
    ctx->pc = 0x4686e4u;
    // NOP
label_4686e8:
    // 0x4686e8: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x4686e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_4686ec:
    // 0x4686ec: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x4686ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4686f0:
    // 0x4686f0: 0xc11392c  jal         func_44E4B0
label_4686f4:
    if (ctx->pc == 0x4686F4u) {
        ctx->pc = 0x4686F8u;
        goto label_4686f8;
    }
    ctx->pc = 0x4686F0u;
    SET_GPR_U32(ctx, 31, 0x4686F8u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x4686F0u, 0x4686F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4686F8u;
label_4686f8:
    // 0x4686f8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4686f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4686fc:
    // 0x4686fc: 0x10000045  b           . + 4 + (0x45 << 2)
label_468700:
    if (ctx->pc == 0x468700u) {
        ctx->pc = 0x468704u;
        goto label_468704;
    }
    ctx->pc = 0x4686FCu;
    {
        const bool branch_taken_0x4686fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4686fc) {
            ctx->pc = 0x468814u;
            goto label_468814;
        }
    }
    ctx->pc = 0x468704u;
label_468704:
    // 0x468704: 0x10183c  dsll32      $v1, $s0, 0
    ctx->pc = 0x468704u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
label_468708:
    // 0x468708: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x468708u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_46870c:
    // 0x46870c: 0x8fa203b0  lw          $v0, 0x3B0($sp)
    ctx->pc = 0x46870cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 944)));
label_468710:
    // 0x468710: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x468710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_468714:
    // 0x468714: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x468714u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_468718:
    // 0x468718: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x468718u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_46871c:
    // 0x46871c: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x46871cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_468720:
    // 0x468720: 0x10200039  beqz        $at, . + 4 + (0x39 << 2)
label_468724:
    if (ctx->pc == 0x468724u) {
        ctx->pc = 0x468728u;
        goto label_468728;
    }
    ctx->pc = 0x468720u;
    {
        const bool branch_taken_0x468720 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x468720) {
            ctx->pc = 0x468808u;
            goto label_468808;
        }
    }
    ctx->pc = 0x468728u;
label_468728:
    // 0x468728: 0x8fa203b0  lw          $v0, 0x3B0($sp)
    ctx->pc = 0x468728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 944)));
label_46872c:
    // 0x46872c: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x46872cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_468730:
    // 0x468730: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x468730u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_468734:
    // 0x468734: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x468734u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_468738:
    // 0x468738: 0x10103c  dsll32      $v0, $s0, 0
    ctx->pc = 0x468738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
label_46873c:
    // 0x46873c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x46873cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_468740:
    // 0x468740: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x468740u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_468744:
    // 0x468744: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x468744u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_468748:
    // 0x468748: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x468748u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_46874c:
    // 0x46874c: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_468750:
    if (ctx->pc == 0x468750u) {
        ctx->pc = 0x468754u;
        goto label_468754;
    }
    ctx->pc = 0x46874Cu;
    {
        const bool branch_taken_0x46874c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x46874c) {
            ctx->pc = 0x4687FCu;
            goto label_4687fc;
        }
    }
    ctx->pc = 0x468754u;
label_468754:
    // 0x468754: 0x8f82b2e0  lw          $v0, -0x4D20($gp)
    ctx->pc = 0x468754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947552)));
label_468758:
    // 0x468758: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_46875c:
    if (ctx->pc == 0x46875Cu) {
        ctx->pc = 0x468760u;
        goto label_468760;
    }
    ctx->pc = 0x468758u;
    {
        const bool branch_taken_0x468758 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x468758) {
            ctx->pc = 0x4687FCu;
            goto label_4687fc;
        }
    }
    ctx->pc = 0x468760u;
label_468760:
    // 0x468760: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x468760u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_468764:
    // 0x468764: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x468764u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_468768:
    // 0x468768: 0x27a60380  addiu       $a2, $sp, 0x380
    ctx->pc = 0x468768u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 896));
label_46876c:
    // 0x46876c: 0xc115ee8  jal         func_457BA0
label_468770:
    if (ctx->pc == 0x468770u) {
        ctx->pc = 0x468774u;
        goto label_468774;
    }
    ctx->pc = 0x46876Cu;
    SET_GPR_U32(ctx, 31, 0x468774u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x46876Cu, 0x468774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x468774u;
label_468774:
    // 0x468774: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_468778:
    if (ctx->pc == 0x468778u) {
        ctx->pc = 0x46877Cu;
        goto label_46877c;
    }
    ctx->pc = 0x468774u;
    {
        const bool branch_taken_0x468774 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x468774) {
            ctx->pc = 0x4687FCu;
            goto label_4687fc;
        }
    }
    ctx->pc = 0x46877Cu;
label_46877c:
    // 0x46877c: 0x8fa20388  lw          $v0, 0x388($sp)
    ctx->pc = 0x46877cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 904)));
label_468780:
    // 0x468780: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_468784:
    if (ctx->pc == 0x468784u) {
        ctx->pc = 0x468788u;
        goto label_468788;
    }
    ctx->pc = 0x468780u;
    {
        const bool branch_taken_0x468780 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x468780) {
            ctx->pc = 0x4687FCu;
            goto label_4687fc;
        }
    }
    ctx->pc = 0x468788u;
label_468788:
    // 0x468788: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x468788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_46878c:
    // 0x46878c: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x46878cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_468790:
    // 0x468790: 0x8fa60384  lw          $a2, 0x384($sp)
    ctx->pc = 0x468790u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 900)));
label_468794:
    // 0x468794: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x468794u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_468798:
    // 0x468798: 0x24e7f780  addiu       $a3, $a3, -0x880
    ctx->pc = 0x468798u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294965120));
label_46879c:
    // 0x46879c: 0x240800f5  addiu       $t0, $zero, 0xF5
    ctx->pc = 0x46879cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 245));
label_4687a0:
    // 0x4687a0: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x4687a0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_4687a4:
    // 0x4687a4: 0x2529f890  addiu       $t1, $t1, -0x770
    ctx->pc = 0x4687a4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294965392));
label_4687a8:
    // 0x4687a8: 0xc113940  jal         func_44E500
label_4687ac:
    if (ctx->pc == 0x4687ACu) {
        ctx->pc = 0x4687B0u;
        goto label_4687b0;
    }
    ctx->pc = 0x4687A8u;
    SET_GPR_U32(ctx, 31, 0x4687B0u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x4687A8u, 0x4687B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4687B0u;
label_4687b0:
    // 0x4687b0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x4687b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_4687b4:
    // 0x4687b4: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x4687b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_4687b8:
    // 0x4687b8: 0x24a5f8b0  addiu       $a1, $a1, -0x750
    ctx->pc = 0x4687b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965424));
label_4687bc:
    // 0x4687bc: 0xc115c24  jal         func_457090
label_4687c0:
    if (ctx->pc == 0x4687C0u) {
        ctx->pc = 0x4687C4u;
        goto label_4687c4;
    }
    ctx->pc = 0x4687BCu;
    SET_GPR_U32(ctx, 31, 0x4687C4u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x4687BCu, 0x4687C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4687C4u;
label_4687c4:
    // 0x4687c4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x4687c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_4687c8:
    // 0x4687c8: 0x8fa20388  lw          $v0, 0x388($sp)
    ctx->pc = 0x4687c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 904)));
label_4687cc:
    // 0x4687cc: 0x40f809  jalr        $v0
label_4687d0:
    if (ctx->pc == 0x4687D0u) {
        ctx->pc = 0x4687D4u;
        goto label_4687d4;
    }
    ctx->pc = 0x4687CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4687D4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4687CCu, 0x4687D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4687D4u;
label_4687d4:
    // 0x4687d4: 0xaf82b2e0  sw          $v0, -0x4D20($gp)
    ctx->pc = 0x4687d4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947552), GPR_U32(ctx, 2));
label_4687d8:
    // 0x4687d8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x4687d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_4687dc:
    // 0x4687dc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_4687e0:
    if (ctx->pc == 0x4687E0u) {
        ctx->pc = 0x4687E4u;
        goto label_4687e4;
    }
    ctx->pc = 0x4687DCu;
    {
        const bool branch_taken_0x4687dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4687dc) {
            ctx->pc = 0x4687ECu;
            goto label_4687ec;
        }
    }
    ctx->pc = 0x4687E4u;
label_4687e4:
    // 0x4687e4: 0xd  break       0
    ctx->pc = 0x4687e4u;
    runtime->handleBreak(rdram, ctx);
label_4687e8:
    // 0x4687e8: 0x0  nop
    ctx->pc = 0x4687e8u;
    // NOP
label_4687ec:
    // 0x4687ec: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x4687ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_4687f0:
    // 0x4687f0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x4687f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4687f4:
    // 0x4687f4: 0xc11392c  jal         func_44E4B0
label_4687f8:
    if (ctx->pc == 0x4687F8u) {
        ctx->pc = 0x4687FCu;
        goto label_4687fc;
    }
    ctx->pc = 0x4687F4u;
    SET_GPR_U32(ctx, 31, 0x4687FCu);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x4687F4u, 0x4687FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4687FCu;
label_4687fc:
    // 0x4687fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4687fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_468800:
    // 0x468800: 0x10000004  b           . + 4 + (0x4 << 2)
label_468804:
    if (ctx->pc == 0x468804u) {
        ctx->pc = 0x468808u;
        goto label_468808;
    }
    ctx->pc = 0x468800u;
    {
        const bool branch_taken_0x468800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x468800) {
            ctx->pc = 0x468814u;
            goto label_468814;
        }
    }
    ctx->pc = 0x468808u;
label_468808:
    // 0x468808: 0x8fa203b0  lw          $v0, 0x3B0($sp)
    ctx->pc = 0x468808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 944)));
label_46880c:
    // 0x46880c: 0xac500018  sw          $s0, 0x18($v0)
    ctx->pc = 0x46880cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 16));
label_468810:
    // 0x468810: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x468810u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_468814:
    // 0x468814: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x468814u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_468818:
    // 0x468818: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x468818u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_46881c:
    // 0x46881c: 0x27bd03e0  addiu       $sp, $sp, 0x3E0
    ctx->pc = 0x46881cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 992));
label_468820:
    // 0x468820: 0x3e00008  jr          $ra
label_468824:
    if (ctx->pc == 0x468824u) {
        ctx->pc = 0x468828u;
        goto label_468828;
    }
    ctx->pc = 0x468820u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x468820u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x468828u;
label_468828:
    // 0x468828: 0x0  nop
    ctx->pc = 0x468828u;
    // NOP
label_46882c:
    // 0x46882c: 0x0  nop
    ctx->pc = 0x46882cu;
    // NOP
label_468830:
    // 0x468830: 0x811a134  j           func_4684D0
label_468834:
    if (ctx->pc == 0x468834u) {
        ctx->pc = 0x468834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x468830u;
        // 0x468834: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x468838u;
        goto label_468838;
    }
    ctx->pc = 0x468830u;
    ctx->pc = 0x468834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x468830u;
    // 0x468834: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4684D0u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    goto label_4684d0;
    ctx->pc = 0x468838u;
label_468838:
    // 0x468838: 0x0  nop
    ctx->pc = 0x468838u;
    // NOP
label_46883c:
    // 0x46883c: 0x0  nop
    ctx->pc = 0x46883cu;
    // NOP
label_468840:
    // 0x468840: 0x8119fa0  j           func_467E80
label_468844:
    if (ctx->pc == 0x468844u) {
        ctx->pc = 0x468844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x468840u;
        // 0x468844: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x468848u;
        goto label_468848;
    }
    ctx->pc = 0x468840u;
    ctx->pc = 0x468844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x468840u;
    // 0x468844: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x467E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467E80u, 0x468840u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x468848u;
label_468848:
    // 0x468848: 0x0  nop
    ctx->pc = 0x468848u;
    // NOP
label_46884c:
    // 0x46884c: 0x0  nop
    ctx->pc = 0x46884cu;
    // NOP
label_468850:
    // 0x468850: 0x8119fc4  j           func_467F10
label_468854:
    if (ctx->pc == 0x468854u) {
        ctx->pc = 0x468854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x468850u;
        // 0x468854: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x468858u;
        goto label_468858;
    }
    ctx->pc = 0x468850u;
    ctx->pc = 0x468854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x468850u;
    // 0x468854: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x467F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467F10u, 0x468850u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x468858u;
label_468858:
    // 0x468858: 0x0  nop
    ctx->pc = 0x468858u;
    // NOP
label_46885c:
    // 0x46885c: 0x0  nop
    ctx->pc = 0x46885cu;
    // NOP
    ctx->pc = 0x468860u;
}
