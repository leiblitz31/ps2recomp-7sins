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

// Function: sub_0029D520
// Address: 0x29d520 - 0x29da10
void sub_0029D520_0x29d520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029D520_0x29d520");
#endif

    switch (ctx->pc) {
        case 0x29d520u: goto label_29d520;
        case 0x29d524u: goto label_29d524;
        case 0x29d528u: goto label_29d528;
        case 0x29d52cu: goto label_29d52c;
        case 0x29d530u: goto label_29d530;
        case 0x29d534u: goto label_29d534;
        case 0x29d538u: goto label_29d538;
        case 0x29d53cu: goto label_29d53c;
        case 0x29d540u: goto label_29d540;
        case 0x29d544u: goto label_29d544;
        case 0x29d548u: goto label_29d548;
        case 0x29d54cu: goto label_29d54c;
        case 0x29d550u: goto label_29d550;
        case 0x29d554u: goto label_29d554;
        case 0x29d558u: goto label_29d558;
        case 0x29d55cu: goto label_29d55c;
        case 0x29d560u: goto label_29d560;
        case 0x29d564u: goto label_29d564;
        case 0x29d568u: goto label_29d568;
        case 0x29d56cu: goto label_29d56c;
        case 0x29d570u: goto label_29d570;
        case 0x29d574u: goto label_29d574;
        case 0x29d578u: goto label_29d578;
        case 0x29d57cu: goto label_29d57c;
        case 0x29d580u: goto label_29d580;
        case 0x29d584u: goto label_29d584;
        case 0x29d588u: goto label_29d588;
        case 0x29d58cu: goto label_29d58c;
        case 0x29d590u: goto label_29d590;
        case 0x29d594u: goto label_29d594;
        case 0x29d598u: goto label_29d598;
        case 0x29d59cu: goto label_29d59c;
        case 0x29d5a0u: goto label_29d5a0;
        case 0x29d5a4u: goto label_29d5a4;
        case 0x29d5a8u: goto label_29d5a8;
        case 0x29d5acu: goto label_29d5ac;
        case 0x29d5b0u: goto label_29d5b0;
        case 0x29d5b4u: goto label_29d5b4;
        case 0x29d5b8u: goto label_29d5b8;
        case 0x29d5bcu: goto label_29d5bc;
        case 0x29d5c0u: goto label_29d5c0;
        case 0x29d5c4u: goto label_29d5c4;
        case 0x29d5c8u: goto label_29d5c8;
        case 0x29d5ccu: goto label_29d5cc;
        case 0x29d5d0u: goto label_29d5d0;
        case 0x29d5d4u: goto label_29d5d4;
        case 0x29d5d8u: goto label_29d5d8;
        case 0x29d5dcu: goto label_29d5dc;
        case 0x29d5e0u: goto label_29d5e0;
        case 0x29d5e4u: goto label_29d5e4;
        case 0x29d5e8u: goto label_29d5e8;
        case 0x29d5ecu: goto label_29d5ec;
        case 0x29d5f0u: goto label_29d5f0;
        case 0x29d5f4u: goto label_29d5f4;
        case 0x29d5f8u: goto label_29d5f8;
        case 0x29d5fcu: goto label_29d5fc;
        case 0x29d600u: goto label_29d600;
        case 0x29d604u: goto label_29d604;
        case 0x29d608u: goto label_29d608;
        case 0x29d60cu: goto label_29d60c;
        case 0x29d610u: goto label_29d610;
        case 0x29d614u: goto label_29d614;
        case 0x29d618u: goto label_29d618;
        case 0x29d61cu: goto label_29d61c;
        case 0x29d620u: goto label_29d620;
        case 0x29d624u: goto label_29d624;
        case 0x29d628u: goto label_29d628;
        case 0x29d62cu: goto label_29d62c;
        case 0x29d630u: goto label_29d630;
        case 0x29d634u: goto label_29d634;
        case 0x29d638u: goto label_29d638;
        case 0x29d63cu: goto label_29d63c;
        case 0x29d640u: goto label_29d640;
        case 0x29d644u: goto label_29d644;
        case 0x29d648u: goto label_29d648;
        case 0x29d64cu: goto label_29d64c;
        case 0x29d650u: goto label_29d650;
        case 0x29d654u: goto label_29d654;
        case 0x29d658u: goto label_29d658;
        case 0x29d65cu: goto label_29d65c;
        case 0x29d660u: goto label_29d660;
        case 0x29d664u: goto label_29d664;
        case 0x29d668u: goto label_29d668;
        case 0x29d66cu: goto label_29d66c;
        case 0x29d670u: goto label_29d670;
        case 0x29d674u: goto label_29d674;
        case 0x29d678u: goto label_29d678;
        case 0x29d67cu: goto label_29d67c;
        case 0x29d680u: goto label_29d680;
        case 0x29d684u: goto label_29d684;
        case 0x29d688u: goto label_29d688;
        case 0x29d68cu: goto label_29d68c;
        case 0x29d690u: goto label_29d690;
        case 0x29d694u: goto label_29d694;
        case 0x29d698u: goto label_29d698;
        case 0x29d69cu: goto label_29d69c;
        case 0x29d6a0u: goto label_29d6a0;
        case 0x29d6a4u: goto label_29d6a4;
        case 0x29d6a8u: goto label_29d6a8;
        case 0x29d6acu: goto label_29d6ac;
        case 0x29d6b0u: goto label_29d6b0;
        case 0x29d6b4u: goto label_29d6b4;
        case 0x29d6b8u: goto label_29d6b8;
        case 0x29d6bcu: goto label_29d6bc;
        case 0x29d6c0u: goto label_29d6c0;
        case 0x29d6c4u: goto label_29d6c4;
        case 0x29d6c8u: goto label_29d6c8;
        case 0x29d6ccu: goto label_29d6cc;
        case 0x29d6d0u: goto label_29d6d0;
        case 0x29d6d4u: goto label_29d6d4;
        case 0x29d6d8u: goto label_29d6d8;
        case 0x29d6dcu: goto label_29d6dc;
        case 0x29d6e0u: goto label_29d6e0;
        case 0x29d6e4u: goto label_29d6e4;
        case 0x29d6e8u: goto label_29d6e8;
        case 0x29d6ecu: goto label_29d6ec;
        case 0x29d6f0u: goto label_29d6f0;
        case 0x29d6f4u: goto label_29d6f4;
        case 0x29d6f8u: goto label_29d6f8;
        case 0x29d6fcu: goto label_29d6fc;
        case 0x29d700u: goto label_29d700;
        case 0x29d704u: goto label_29d704;
        case 0x29d708u: goto label_29d708;
        case 0x29d70cu: goto label_29d70c;
        case 0x29d710u: goto label_29d710;
        case 0x29d714u: goto label_29d714;
        case 0x29d718u: goto label_29d718;
        case 0x29d71cu: goto label_29d71c;
        case 0x29d720u: goto label_29d720;
        case 0x29d724u: goto label_29d724;
        case 0x29d728u: goto label_29d728;
        case 0x29d72cu: goto label_29d72c;
        case 0x29d730u: goto label_29d730;
        case 0x29d734u: goto label_29d734;
        case 0x29d738u: goto label_29d738;
        case 0x29d73cu: goto label_29d73c;
        case 0x29d740u: goto label_29d740;
        case 0x29d744u: goto label_29d744;
        case 0x29d748u: goto label_29d748;
        case 0x29d74cu: goto label_29d74c;
        case 0x29d750u: goto label_29d750;
        case 0x29d754u: goto label_29d754;
        case 0x29d758u: goto label_29d758;
        case 0x29d75cu: goto label_29d75c;
        case 0x29d760u: goto label_29d760;
        case 0x29d764u: goto label_29d764;
        case 0x29d768u: goto label_29d768;
        case 0x29d76cu: goto label_29d76c;
        case 0x29d770u: goto label_29d770;
        case 0x29d774u: goto label_29d774;
        case 0x29d778u: goto label_29d778;
        case 0x29d77cu: goto label_29d77c;
        case 0x29d780u: goto label_29d780;
        case 0x29d784u: goto label_29d784;
        case 0x29d788u: goto label_29d788;
        case 0x29d78cu: goto label_29d78c;
        case 0x29d790u: goto label_29d790;
        case 0x29d794u: goto label_29d794;
        case 0x29d798u: goto label_29d798;
        case 0x29d79cu: goto label_29d79c;
        case 0x29d7a0u: goto label_29d7a0;
        case 0x29d7a4u: goto label_29d7a4;
        case 0x29d7a8u: goto label_29d7a8;
        case 0x29d7acu: goto label_29d7ac;
        case 0x29d7b0u: goto label_29d7b0;
        case 0x29d7b4u: goto label_29d7b4;
        case 0x29d7b8u: goto label_29d7b8;
        case 0x29d7bcu: goto label_29d7bc;
        case 0x29d7c0u: goto label_29d7c0;
        case 0x29d7c4u: goto label_29d7c4;
        case 0x29d7c8u: goto label_29d7c8;
        case 0x29d7ccu: goto label_29d7cc;
        case 0x29d7d0u: goto label_29d7d0;
        case 0x29d7d4u: goto label_29d7d4;
        case 0x29d7d8u: goto label_29d7d8;
        case 0x29d7dcu: goto label_29d7dc;
        case 0x29d7e0u: goto label_29d7e0;
        case 0x29d7e4u: goto label_29d7e4;
        case 0x29d7e8u: goto label_29d7e8;
        case 0x29d7ecu: goto label_29d7ec;
        case 0x29d7f0u: goto label_29d7f0;
        case 0x29d7f4u: goto label_29d7f4;
        case 0x29d7f8u: goto label_29d7f8;
        case 0x29d7fcu: goto label_29d7fc;
        case 0x29d800u: goto label_29d800;
        case 0x29d804u: goto label_29d804;
        case 0x29d808u: goto label_29d808;
        case 0x29d80cu: goto label_29d80c;
        case 0x29d810u: goto label_29d810;
        case 0x29d814u: goto label_29d814;
        case 0x29d818u: goto label_29d818;
        case 0x29d81cu: goto label_29d81c;
        case 0x29d820u: goto label_29d820;
        case 0x29d824u: goto label_29d824;
        case 0x29d828u: goto label_29d828;
        case 0x29d82cu: goto label_29d82c;
        case 0x29d830u: goto label_29d830;
        case 0x29d834u: goto label_29d834;
        case 0x29d838u: goto label_29d838;
        case 0x29d83cu: goto label_29d83c;
        case 0x29d840u: goto label_29d840;
        case 0x29d844u: goto label_29d844;
        case 0x29d848u: goto label_29d848;
        case 0x29d84cu: goto label_29d84c;
        case 0x29d850u: goto label_29d850;
        case 0x29d854u: goto label_29d854;
        case 0x29d858u: goto label_29d858;
        case 0x29d85cu: goto label_29d85c;
        case 0x29d860u: goto label_29d860;
        case 0x29d864u: goto label_29d864;
        case 0x29d868u: goto label_29d868;
        case 0x29d86cu: goto label_29d86c;
        case 0x29d870u: goto label_29d870;
        case 0x29d874u: goto label_29d874;
        case 0x29d878u: goto label_29d878;
        case 0x29d87cu: goto label_29d87c;
        case 0x29d880u: goto label_29d880;
        case 0x29d884u: goto label_29d884;
        case 0x29d888u: goto label_29d888;
        case 0x29d88cu: goto label_29d88c;
        case 0x29d890u: goto label_29d890;
        case 0x29d894u: goto label_29d894;
        case 0x29d898u: goto label_29d898;
        case 0x29d89cu: goto label_29d89c;
        case 0x29d8a0u: goto label_29d8a0;
        case 0x29d8a4u: goto label_29d8a4;
        case 0x29d8a8u: goto label_29d8a8;
        case 0x29d8acu: goto label_29d8ac;
        case 0x29d8b0u: goto label_29d8b0;
        case 0x29d8b4u: goto label_29d8b4;
        case 0x29d8b8u: goto label_29d8b8;
        case 0x29d8bcu: goto label_29d8bc;
        case 0x29d8c0u: goto label_29d8c0;
        case 0x29d8c4u: goto label_29d8c4;
        case 0x29d8c8u: goto label_29d8c8;
        case 0x29d8ccu: goto label_29d8cc;
        case 0x29d8d0u: goto label_29d8d0;
        case 0x29d8d4u: goto label_29d8d4;
        case 0x29d8d8u: goto label_29d8d8;
        case 0x29d8dcu: goto label_29d8dc;
        case 0x29d8e0u: goto label_29d8e0;
        case 0x29d8e4u: goto label_29d8e4;
        case 0x29d8e8u: goto label_29d8e8;
        case 0x29d8ecu: goto label_29d8ec;
        case 0x29d8f0u: goto label_29d8f0;
        case 0x29d8f4u: goto label_29d8f4;
        case 0x29d8f8u: goto label_29d8f8;
        case 0x29d8fcu: goto label_29d8fc;
        case 0x29d900u: goto label_29d900;
        case 0x29d904u: goto label_29d904;
        case 0x29d908u: goto label_29d908;
        case 0x29d90cu: goto label_29d90c;
        case 0x29d910u: goto label_29d910;
        case 0x29d914u: goto label_29d914;
        case 0x29d918u: goto label_29d918;
        case 0x29d91cu: goto label_29d91c;
        case 0x29d920u: goto label_29d920;
        case 0x29d924u: goto label_29d924;
        case 0x29d928u: goto label_29d928;
        case 0x29d92cu: goto label_29d92c;
        case 0x29d930u: goto label_29d930;
        case 0x29d934u: goto label_29d934;
        case 0x29d938u: goto label_29d938;
        case 0x29d93cu: goto label_29d93c;
        case 0x29d940u: goto label_29d940;
        case 0x29d944u: goto label_29d944;
        case 0x29d948u: goto label_29d948;
        case 0x29d94cu: goto label_29d94c;
        case 0x29d950u: goto label_29d950;
        case 0x29d954u: goto label_29d954;
        case 0x29d958u: goto label_29d958;
        case 0x29d95cu: goto label_29d95c;
        case 0x29d960u: goto label_29d960;
        case 0x29d964u: goto label_29d964;
        case 0x29d968u: goto label_29d968;
        case 0x29d96cu: goto label_29d96c;
        case 0x29d970u: goto label_29d970;
        case 0x29d974u: goto label_29d974;
        case 0x29d978u: goto label_29d978;
        case 0x29d97cu: goto label_29d97c;
        case 0x29d980u: goto label_29d980;
        case 0x29d984u: goto label_29d984;
        case 0x29d988u: goto label_29d988;
        case 0x29d98cu: goto label_29d98c;
        case 0x29d990u: goto label_29d990;
        case 0x29d994u: goto label_29d994;
        case 0x29d998u: goto label_29d998;
        case 0x29d99cu: goto label_29d99c;
        case 0x29d9a0u: goto label_29d9a0;
        case 0x29d9a4u: goto label_29d9a4;
        case 0x29d9a8u: goto label_29d9a8;
        case 0x29d9acu: goto label_29d9ac;
        case 0x29d9b0u: goto label_29d9b0;
        case 0x29d9b4u: goto label_29d9b4;
        case 0x29d9b8u: goto label_29d9b8;
        case 0x29d9bcu: goto label_29d9bc;
        case 0x29d9c0u: goto label_29d9c0;
        case 0x29d9c4u: goto label_29d9c4;
        case 0x29d9c8u: goto label_29d9c8;
        case 0x29d9ccu: goto label_29d9cc;
        case 0x29d9d0u: goto label_29d9d0;
        case 0x29d9d4u: goto label_29d9d4;
        case 0x29d9d8u: goto label_29d9d8;
        case 0x29d9dcu: goto label_29d9dc;
        case 0x29d9e0u: goto label_29d9e0;
        case 0x29d9e4u: goto label_29d9e4;
        case 0x29d9e8u: goto label_29d9e8;
        case 0x29d9ecu: goto label_29d9ec;
        case 0x29d9f0u: goto label_29d9f0;
        case 0x29d9f4u: goto label_29d9f4;
        case 0x29d9f8u: goto label_29d9f8;
        case 0x29d9fcu: goto label_29d9fc;
        case 0x29da00u: goto label_29da00;
        case 0x29da04u: goto label_29da04;
        case 0x29da08u: goto label_29da08;
        case 0x29da0cu: goto label_29da0c;
        default: break;
    }

    ctx->pc = 0x29d520u;

label_29d520:
    // 0x29d520: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x29d520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_29d524:
    // 0x29d524: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29d524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_29d528:
    // 0x29d528: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x29d528u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_29d52c:
    // 0x29d52c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x29d52cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
label_29d530:
    // 0x29d530: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x29d530u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_29d534:
    // 0x29d534: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x29d534u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_29d538:
    // 0x29d538: 0xc0a76d8  jal         func_29DB60
label_29d53c:
    if (ctx->pc == 0x29D53Cu) {
        ctx->pc = 0x29D540u;
        goto label_29d540;
    }
    ctx->pc = 0x29D538u;
    SET_GPR_U32(ctx, 31, 0x29D540u);
    ctx->pc = 0x29DB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29DB60u, 0x29D538u, 0x29D540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D540u;
label_29d540:
    // 0x29d540: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x29d540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_29d544:
    // 0x29d544: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29d544u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_29d548:
    // 0x29d548: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x29d548u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_29d54c:
    // 0x29d54c: 0x3e00008  jr          $ra
label_29d550:
    if (ctx->pc == 0x29D550u) {
        ctx->pc = 0x29D554u;
        goto label_29d554;
    }
    ctx->pc = 0x29D54Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29D54Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29D554u;
label_29d554:
    // 0x29d554: 0x0  nop
    ctx->pc = 0x29d554u;
    // NOP
label_29d558:
    // 0x29d558: 0x0  nop
    ctx->pc = 0x29d558u;
    // NOP
label_29d55c:
    // 0x29d55c: 0x0  nop
    ctx->pc = 0x29d55cu;
    // NOP
label_29d560:
    // 0x29d560: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x29d560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_29d564:
    // 0x29d564: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x29d564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_29d568:
    // 0x29d568: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x29d568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_29d56c:
    // 0x29d56c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29d56cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_29d570:
    // 0x29d570: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29d570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_29d574:
    // 0x29d574: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x29d574u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
label_29d578:
    // 0x29d578: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x29d578u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29d57c:
    // 0x29d57c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x29d57cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29d580:
    // 0x29d580: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x29d580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_29d584:
    // 0x29d584: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x29d584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_29d588:
    // 0x29d588: 0x2464006c  addiu       $a0, $v1, 0x6C
    ctx->pc = 0x29d588u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 108));
label_29d58c:
    // 0x29d58c: 0x8c450054  lw          $a1, 0x54($v0)
    ctx->pc = 0x29d58cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_29d590:
    // 0x29d590: 0xc0a74a0  jal         func_29D280
label_29d594:
    if (ctx->pc == 0x29D594u) {
        ctx->pc = 0x29D598u;
        goto label_29d598;
    }
    ctx->pc = 0x29D590u;
    SET_GPR_U32(ctx, 31, 0x29D598u);
    ctx->pc = 0x29D280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D280u, 0x29D590u, 0x29D598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D598u;
label_29d598:
    // 0x29d598: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x29d598u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_29d59c:
    // 0x29d59c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x29d59cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_29d5a0:
    // 0x29d5a0: 0x9042007d  lbu         $v0, 0x7D($v0)
    ctx->pc = 0x29d5a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 125)));
label_29d5a4:
    // 0x29d5a4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_29d5a8:
    if (ctx->pc == 0x29D5A8u) {
        ctx->pc = 0x29D5ACu;
        goto label_29d5ac;
    }
    ctx->pc = 0x29D5A4u;
    {
        const bool branch_taken_0x29d5a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29d5a4) {
            ctx->pc = 0x29D5D0u;
            goto label_29d5d0;
        }
    }
    ctx->pc = 0x29D5ACu;
label_29d5ac:
    // 0x29d5ac: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
label_29d5b0:
    if (ctx->pc == 0x29D5B0u) {
        ctx->pc = 0x29D5B4u;
        goto label_29d5b4;
    }
    ctx->pc = 0x29D5ACu;
    {
        const bool branch_taken_0x29d5ac = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x29d5ac) {
            ctx->pc = 0x29D5C0u;
            goto label_29d5c0;
        }
    }
    ctx->pc = 0x29D5B4u;
label_29d5b4:
    // 0x29d5b4: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x29d5b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29d5b8:
    // 0x29d5b8: 0x10000005  b           . + 4 + (0x5 << 2)
label_29d5bc:
    if (ctx->pc == 0x29D5BCu) {
        ctx->pc = 0x29D5C0u;
        goto label_29d5c0;
    }
    ctx->pc = 0x29D5B8u;
    {
        const bool branch_taken_0x29d5b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29d5b8) {
            ctx->pc = 0x29D5D0u;
            goto label_29d5d0;
        }
    }
    ctx->pc = 0x29D5C0u;
label_29d5c0:
    // 0x29d5c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29d5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29d5c4:
    // 0x29d5c4: 0x16020002  bne         $s0, $v0, . + 4 + (0x2 << 2)
label_29d5c8:
    if (ctx->pc == 0x29D5C8u) {
        ctx->pc = 0x29D5CCu;
        goto label_29d5cc;
    }
    ctx->pc = 0x29D5C4u;
    {
        const bool branch_taken_0x29d5c4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x29d5c4) {
            ctx->pc = 0x29D5D0u;
            goto label_29d5d0;
        }
    }
    ctx->pc = 0x29D5CCu;
label_29d5cc:
    // 0x29d5cc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x29d5ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29d5d0:
    // 0x29d5d0: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x29d5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_29d5d4:
    // 0x29d5d4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x29d5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_29d5d8:
    // 0x29d5d8: 0x2464006c  addiu       $a0, $v1, 0x6C
    ctx->pc = 0x29d5d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 108));
label_29d5dc:
    // 0x29d5dc: 0x8c450054  lw          $a1, 0x54($v0)
    ctx->pc = 0x29d5dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_29d5e0:
    // 0x29d5e0: 0xc0a74a0  jal         func_29D280
label_29d5e4:
    if (ctx->pc == 0x29D5E4u) {
        ctx->pc = 0x29D5E8u;
        goto label_29d5e8;
    }
    ctx->pc = 0x29D5E0u;
    SET_GPR_U32(ctx, 31, 0x29D5E8u);
    ctx->pc = 0x29D280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D280u, 0x29D5E0u, 0x29D5E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D5E8u;
label_29d5e8:
    // 0x29d5e8: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x29d5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_29d5ec:
    // 0x29d5ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29d5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29d5f0:
    // 0x29d5f0: 0x10620052  beq         $v1, $v0, . + 4 + (0x52 << 2)
label_29d5f4:
    if (ctx->pc == 0x29D5F4u) {
        ctx->pc = 0x29D5F8u;
        goto label_29d5f8;
    }
    ctx->pc = 0x29D5F0u;
    {
        const bool branch_taken_0x29d5f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x29d5f0) {
            ctx->pc = 0x29D73Cu;
            goto label_29d73c;
        }
    }
    ctx->pc = 0x29D5F8u;
label_29d5f8:
    // 0x29d5f8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_29d5fc:
    if (ctx->pc == 0x29D5FCu) {
        ctx->pc = 0x29D600u;
        goto label_29d600;
    }
    ctx->pc = 0x29D5F8u;
    {
        const bool branch_taken_0x29d5f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29d5f8) {
            ctx->pc = 0x29D608u;
            goto label_29d608;
        }
    }
    ctx->pc = 0x29D600u;
label_29d600:
    // 0x29d600: 0x1000005a  b           . + 4 + (0x5A << 2)
label_29d604:
    if (ctx->pc == 0x29D604u) {
        ctx->pc = 0x29D608u;
        goto label_29d608;
    }
    ctx->pc = 0x29D600u;
    {
        const bool branch_taken_0x29d600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29d600) {
            ctx->pc = 0x29D76Cu;
            goto label_29d76c;
        }
    }
    ctx->pc = 0x29D608u;
label_29d608:
    // 0x29d608: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x29d608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_29d60c:
    // 0x29d60c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x29d60cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_29d610:
    // 0x29d610: 0x2464006c  addiu       $a0, $v1, 0x6C
    ctx->pc = 0x29d610u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 108));
label_29d614:
    // 0x29d614: 0x8c450054  lw          $a1, 0x54($v0)
    ctx->pc = 0x29d614u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_29d618:
    // 0x29d618: 0xc0a74a0  jal         func_29D280
label_29d61c:
    if (ctx->pc == 0x29D61Cu) {
        ctx->pc = 0x29D620u;
        goto label_29d620;
    }
    ctx->pc = 0x29D618u;
    SET_GPR_U32(ctx, 31, 0x29D620u);
    ctx->pc = 0x29D280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D280u, 0x29D618u, 0x29D620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D620u;
label_29d620:
    // 0x29d620: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x29d620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_29d624:
    // 0x29d624: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
label_29d628:
    if (ctx->pc == 0x29D628u) {
        ctx->pc = 0x29D62Cu;
        goto label_29d62c;
    }
    ctx->pc = 0x29D624u;
    {
        const bool branch_taken_0x29d624 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29d624) {
            ctx->pc = 0x29D68Cu;
            goto label_29d68c;
        }
    }
    ctx->pc = 0x29D62Cu;
label_29d62c:
    // 0x29d62c: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x29d62cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_29d630:
    // 0x29d630: 0x24050072  addiu       $a1, $zero, 0x72
    ctx->pc = 0x29d630u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
label_29d634:
    // 0x29d634: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x29d634u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29d638:
    // 0x29d638: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x29d638u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_29d63c:
    // 0x29d63c: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x29d63cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_29d640:
    // 0x29d640: 0x320f809  jalr        $t9
label_29d644:
    if (ctx->pc == 0x29D644u) {
        ctx->pc = 0x29D648u;
        goto label_29d648;
    }
    ctx->pc = 0x29D640u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x29D648u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29D640u, 0x29D648u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29D648u;
label_29d648:
    // 0x29d648: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x29d648u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_29d64c:
    // 0x29d64c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x29d64cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_29d650:
    // 0x29d650: 0x9042007c  lbu         $v0, 0x7C($v0)
    ctx->pc = 0x29d650u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 124)));
label_29d654:
    // 0x29d654: 0x10400045  beqz        $v0, . + 4 + (0x45 << 2)
label_29d658:
    if (ctx->pc == 0x29D658u) {
        ctx->pc = 0x29D65Cu;
        goto label_29d65c;
    }
    ctx->pc = 0x29D654u;
    {
        const bool branch_taken_0x29d654 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29d654) {
            ctx->pc = 0x29D76Cu;
            goto label_29d76c;
        }
    }
    ctx->pc = 0x29D65Cu;
label_29d65c:
    // 0x29d65c: 0x16200043  bnez        $s1, . + 4 + (0x43 << 2)
label_29d660:
    if (ctx->pc == 0x29D660u) {
        ctx->pc = 0x29D664u;
        goto label_29d664;
    }
    ctx->pc = 0x29D65Cu;
    {
        const bool branch_taken_0x29d65c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x29d65c) {
            ctx->pc = 0x29D76Cu;
            goto label_29d76c;
        }
    }
    ctx->pc = 0x29D664u;
label_29d664:
    // 0x29d664: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x29d664u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_29d668:
    // 0x29d668: 0x2405006c  addiu       $a1, $zero, 0x6C
    ctx->pc = 0x29d668u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
label_29d66c:
    // 0x29d66c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x29d66cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29d670:
    // 0x29d670: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x29d670u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_29d674:
    // 0x29d674: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x29d674u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_29d678:
    // 0x29d678: 0x320f809  jalr        $t9
label_29d67c:
    if (ctx->pc == 0x29D67Cu) {
        ctx->pc = 0x29D680u;
        goto label_29d680;
    }
    ctx->pc = 0x29D678u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x29D680u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29D678u, 0x29D680u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29D680u;
label_29d680:
    // 0x29d680: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x29d680u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_29d684:
    // 0x29d684: 0x10000039  b           . + 4 + (0x39 << 2)
label_29d688:
    if (ctx->pc == 0x29D688u) {
        ctx->pc = 0x29D68Cu;
        goto label_29d68c;
    }
    ctx->pc = 0x29D684u;
    {
        const bool branch_taken_0x29d684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29d684) {
            ctx->pc = 0x29D76Cu;
            goto label_29d76c;
        }
    }
    ctx->pc = 0x29D68Cu;
label_29d68c:
    // 0x29d68c: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x29d68cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_29d690:
    // 0x29d690: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x29d690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_29d694:
    // 0x29d694: 0x2464006c  addiu       $a0, $v1, 0x6C
    ctx->pc = 0x29d694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 108));
label_29d698:
    // 0x29d698: 0x8c450054  lw          $a1, 0x54($v0)
    ctx->pc = 0x29d698u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_29d69c:
    // 0x29d69c: 0xc0a74a0  jal         func_29D280
label_29d6a0:
    if (ctx->pc == 0x29D6A0u) {
        ctx->pc = 0x29D6A4u;
        goto label_29d6a4;
    }
    ctx->pc = 0x29D69Cu;
    SET_GPR_U32(ctx, 31, 0x29D6A4u);
    ctx->pc = 0x29D280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D280u, 0x29D69Cu, 0x29D6A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D6A4u;
label_29d6a4:
    // 0x29d6a4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x29d6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_29d6a8:
    // 0x29d6a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29d6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29d6ac:
    // 0x29d6ac: 0x14620019  bne         $v1, $v0, . + 4 + (0x19 << 2)
label_29d6b0:
    if (ctx->pc == 0x29D6B0u) {
        ctx->pc = 0x29D6B4u;
        goto label_29d6b4;
    }
    ctx->pc = 0x29D6ACu;
    {
        const bool branch_taken_0x29d6ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x29d6ac) {
            ctx->pc = 0x29D714u;
            goto label_29d714;
        }
    }
    ctx->pc = 0x29D6B4u;
label_29d6b4:
    // 0x29d6b4: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x29d6b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_29d6b8:
    // 0x29d6b8: 0x2405006c  addiu       $a1, $zero, 0x6C
    ctx->pc = 0x29d6b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
label_29d6bc:
    // 0x29d6bc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x29d6bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29d6c0:
    // 0x29d6c0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x29d6c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_29d6c4:
    // 0x29d6c4: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x29d6c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_29d6c8:
    // 0x29d6c8: 0x320f809  jalr        $t9
label_29d6cc:
    if (ctx->pc == 0x29D6CCu) {
        ctx->pc = 0x29D6D0u;
        goto label_29d6d0;
    }
    ctx->pc = 0x29D6C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x29D6D0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29D6C8u, 0x29D6D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29D6D0u;
label_29d6d0:
    // 0x29d6d0: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x29d6d0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_29d6d4:
    // 0x29d6d4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x29d6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_29d6d8:
    // 0x29d6d8: 0x9042007c  lbu         $v0, 0x7C($v0)
    ctx->pc = 0x29d6d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 124)));
label_29d6dc:
    // 0x29d6dc: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
label_29d6e0:
    if (ctx->pc == 0x29D6E0u) {
        ctx->pc = 0x29D6E4u;
        goto label_29d6e4;
    }
    ctx->pc = 0x29D6DCu;
    {
        const bool branch_taken_0x29d6dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29d6dc) {
            ctx->pc = 0x29D76Cu;
            goto label_29d76c;
        }
    }
    ctx->pc = 0x29D6E4u;
label_29d6e4:
    // 0x29d6e4: 0x16200021  bnez        $s1, . + 4 + (0x21 << 2)
label_29d6e8:
    if (ctx->pc == 0x29D6E8u) {
        ctx->pc = 0x29D6ECu;
        goto label_29d6ec;
    }
    ctx->pc = 0x29D6E4u;
    {
        const bool branch_taken_0x29d6e4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x29d6e4) {
            ctx->pc = 0x29D76Cu;
            goto label_29d76c;
        }
    }
    ctx->pc = 0x29D6ECu;
label_29d6ec:
    // 0x29d6ec: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x29d6ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_29d6f0:
    // 0x29d6f0: 0x24050072  addiu       $a1, $zero, 0x72
    ctx->pc = 0x29d6f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
label_29d6f4:
    // 0x29d6f4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x29d6f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29d6f8:
    // 0x29d6f8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x29d6f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_29d6fc:
    // 0x29d6fc: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x29d6fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_29d700:
    // 0x29d700: 0x320f809  jalr        $t9
label_29d704:
    if (ctx->pc == 0x29D704u) {
        ctx->pc = 0x29D708u;
        goto label_29d708;
    }
    ctx->pc = 0x29D700u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x29D708u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29D700u, 0x29D708u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29D708u;
label_29d708:
    // 0x29d708: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x29d708u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_29d70c:
    // 0x29d70c: 0x10000017  b           . + 4 + (0x17 << 2)
label_29d710:
    if (ctx->pc == 0x29D710u) {
        ctx->pc = 0x29D714u;
        goto label_29d714;
    }
    ctx->pc = 0x29D70Cu;
    {
        const bool branch_taken_0x29d70c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29d70c) {
            ctx->pc = 0x29D76Cu;
            goto label_29d76c;
        }
    }
    ctx->pc = 0x29D714u;
label_29d714:
    // 0x29d714: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x29d714u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_29d718:
    // 0x29d718: 0x24050078  addiu       $a1, $zero, 0x78
    ctx->pc = 0x29d718u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_29d71c:
    // 0x29d71c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x29d71cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29d720:
    // 0x29d720: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x29d720u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_29d724:
    // 0x29d724: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x29d724u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_29d728:
    // 0x29d728: 0x320f809  jalr        $t9
label_29d72c:
    if (ctx->pc == 0x29D72Cu) {
        ctx->pc = 0x29D730u;
        goto label_29d730;
    }
    ctx->pc = 0x29D728u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x29D730u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29D728u, 0x29D730u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29D730u;
label_29d730:
    // 0x29d730: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x29d730u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_29d734:
    // 0x29d734: 0x1000000d  b           . + 4 + (0xD << 2)
label_29d738:
    if (ctx->pc == 0x29D738u) {
        ctx->pc = 0x29D73Cu;
        goto label_29d73c;
    }
    ctx->pc = 0x29D734u;
    {
        const bool branch_taken_0x29d734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29d734) {
            ctx->pc = 0x29D76Cu;
            goto label_29d76c;
        }
    }
    ctx->pc = 0x29D73Cu;
label_29d73c:
    // 0x29d73c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x29d73cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_29d740:
    // 0x29d740: 0x90420068  lbu         $v0, 0x68($v0)
    ctx->pc = 0x29d740u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 104)));
label_29d744:
    // 0x29d744: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29d744u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_29d748:
    // 0x29d748: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_29d74c:
    if (ctx->pc == 0x29D74Cu) {
        ctx->pc = 0x29D750u;
        goto label_29d750;
    }
    ctx->pc = 0x29D748u;
    {
        const bool branch_taken_0x29d748 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29d748) {
            ctx->pc = 0x29D76Cu;
            goto label_29d76c;
        }
    }
    ctx->pc = 0x29D750u;
label_29d750:
    // 0x29d750: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x29d750u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_29d754:
    // 0x29d754: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x29d754u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29d758:
    // 0x29d758: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x29d758u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_29d75c:
    // 0x29d75c: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x29d75cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_29d760:
    // 0x29d760: 0x320f809  jalr        $t9
label_29d764:
    if (ctx->pc == 0x29D764u) {
        ctx->pc = 0x29D768u;
        goto label_29d768;
    }
    ctx->pc = 0x29D760u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x29D768u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29D760u, 0x29D768u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29D768u;
label_29d768:
    // 0x29d768: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x29d768u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_29d76c:
    // 0x29d76c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x29d76cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_29d770:
    // 0x29d770: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x29d770u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_29d774:
    // 0x29d774: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x29d774u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_29d778:
    // 0x29d778: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x29d778u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_29d77c:
    // 0x29d77c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29d77cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_29d780:
    // 0x29d780: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x29d780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_29d784:
    // 0x29d784: 0x3e00008  jr          $ra
label_29d788:
    if (ctx->pc == 0x29D788u) {
        ctx->pc = 0x29D78Cu;
        goto label_29d78c;
    }
    ctx->pc = 0x29D784u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29D784u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29D78Cu;
label_29d78c:
    // 0x29d78c: 0x0  nop
    ctx->pc = 0x29d78cu;
    // NOP
label_29d790:
    // 0x29d790: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x29d790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_29d794:
    // 0x29d794: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x29d794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_29d798:
    // 0x29d798: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x29d798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_29d79c:
    // 0x29d79c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x29d79cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_29d7a0:
    // 0x29d7a0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x29d7a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_29d7a4:
    // 0x29d7a4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x29d7a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_29d7a8:
    // 0x29d7a8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x29d7a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_29d7ac:
    // 0x29d7ac: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x29d7acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_29d7b0:
    // 0x29d7b0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x29d7b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_29d7b4:
    // 0x29d7b4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29d7b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_29d7b8:
    // 0x29d7b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29d7b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_29d7bc:
    // 0x29d7bc: 0xafa400d0  sw          $a0, 0xD0($sp)
    ctx->pc = 0x29d7bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 4));
label_29d7c0:
    // 0x29d7c0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x29d7c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29d7c4:
    // 0x29d7c4: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x29d7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_29d7c8:
    // 0x29d7c8: 0x8c44003c  lw          $a0, 0x3C($v0)
    ctx->pc = 0x29d7c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_29d7cc:
    // 0x29d7cc: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x29d7ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_29d7d0:
    // 0x29d7d0: 0xc085538  jal         func_2154E0
label_29d7d4:
    if (ctx->pc == 0x29D7D4u) {
        ctx->pc = 0x29D7D8u;
        goto label_29d7d8;
    }
    ctx->pc = 0x29D7D0u;
    SET_GPR_U32(ctx, 31, 0x29D7D8u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x29D7D0u, 0x29D7D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D7D8u;
label_29d7d8:
    // 0x29d7d8: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x29d7d8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29d7dc:
    // 0x29d7dc: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x29d7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_29d7e0:
    // 0x29d7e0: 0x8c44003c  lw          $a0, 0x3C($v0)
    ctx->pc = 0x29d7e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_29d7e4:
    // 0x29d7e4: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x29d7e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_29d7e8:
    // 0x29d7e8: 0xc085538  jal         func_2154E0
label_29d7ec:
    if (ctx->pc == 0x29D7ECu) {
        ctx->pc = 0x29D7F0u;
        goto label_29d7f0;
    }
    ctx->pc = 0x29D7E8u;
    SET_GPR_U32(ctx, 31, 0x29D7F0u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x29D7E8u, 0x29D7F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D7F0u;
label_29d7f0:
    // 0x29d7f0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x29d7f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29d7f4:
    // 0x29d7f4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x29d7f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29d7f8:
    // 0x29d7f8: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x29d7f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_29d7fc:
    // 0x29d7fc: 0xc041b48  jal         func_106D20
label_29d800:
    if (ctx->pc == 0x29D800u) {
        ctx->pc = 0x29D804u;
        goto label_29d804;
    }
    ctx->pc = 0x29D7FCu;
    SET_GPR_U32(ctx, 31, 0x29D804u);
    ctx->pc = 0x106D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D20u, 0x29D7FCu, 0x29D804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D804u;
label_29d804:
    // 0x29d804: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x29d804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_29d808:
    // 0x29d808: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x29d808u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_29d80c:
    // 0x29d80c: 0x240504cf  addiu       $a1, $zero, 0x4CF
    ctx->pc = 0x29d80cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1231));
label_29d810:
    // 0x29d810: 0x2786a388  addiu       $a2, $gp, -0x5C78
    ctx->pc = 0x29d810u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943624));
label_29d814:
    // 0x29d814: 0xc041a50  jal         func_106940
label_29d818:
    if (ctx->pc == 0x29D818u) {
        ctx->pc = 0x29D81Cu;
        goto label_29d81c;
    }
    ctx->pc = 0x29D814u;
    SET_GPR_U32(ctx, 31, 0x29D81Cu);
    ctx->pc = 0x106940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106940u, 0x29D814u, 0x29D81Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D81Cu;
label_29d81c:
    // 0x29d81c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x29d81cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_29d820:
    // 0x29d820: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x29d820u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29d824:
    // 0x29d824: 0xc040304  jal         func_100C10
label_29d828:
    if (ctx->pc == 0x29D828u) {
        ctx->pc = 0x29D82Cu;
        goto label_29d82c;
    }
    ctx->pc = 0x29D824u;
    SET_GPR_U32(ctx, 31, 0x29D82Cu);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x29D824u, 0x29D82Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D82Cu;
label_29d82c:
    // 0x29d82c: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x29d82cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_29d830:
    // 0x29d830: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x29d830u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_29d834:
    // 0x29d834: 0xc1190f4  jal         func_4643D0
label_29d838:
    if (ctx->pc == 0x29D838u) {
        ctx->pc = 0x29D83Cu;
        goto label_29d83c;
    }
    ctx->pc = 0x29D834u;
    SET_GPR_U32(ctx, 31, 0x29D83Cu);
    ctx->pc = 0x4643D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4643D0u, 0x29D834u, 0x29D83Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D83Cu;
label_29d83c:
    // 0x29d83c: 0xc0434e0  jal         func_10D380
label_29d840:
    if (ctx->pc == 0x29D840u) {
        ctx->pc = 0x29D844u;
        goto label_29d844;
    }
    ctx->pc = 0x29D83Cu;
    SET_GPR_U32(ctx, 31, 0x29D844u);
    ctx->pc = 0x10D380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D380u, 0x29D83Cu, 0x29D844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D844u;
label_29d844:
    // 0x29d844: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x29d844u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29d848:
    // 0x29d848: 0xc0434d8  jal         func_10D360
label_29d84c:
    if (ctx->pc == 0x29D84Cu) {
        ctx->pc = 0x29D850u;
        goto label_29d850;
    }
    ctx->pc = 0x29D848u;
    SET_GPR_U32(ctx, 31, 0x29D850u);
    ctx->pc = 0x10D360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D360u, 0x29D848u, 0x29D850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D850u;
label_29d850:
    // 0x29d850: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x29d850u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29d854:
    // 0x29d854: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x29d854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_29d858:
    // 0x29d858: 0xc041b38  jal         func_106CE0
label_29d85c:
    if (ctx->pc == 0x29D85Cu) {
        ctx->pc = 0x29D860u;
        goto label_29d860;
    }
    ctx->pc = 0x29D858u;
    SET_GPR_U32(ctx, 31, 0x29D860u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x29D858u, 0x29D860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D860u;
label_29d860:
    // 0x29d860: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x29d860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_29d864:
    // 0x29d864: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x29d864u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29d868:
    // 0x29d868: 0xc044edc  jal         func_113B70
label_29d86c:
    if (ctx->pc == 0x29D86Cu) {
        ctx->pc = 0x29D870u;
        goto label_29d870;
    }
    ctx->pc = 0x29D868u;
    SET_GPR_U32(ctx, 31, 0x29D870u);
    ctx->pc = 0x113B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113B70u, 0x29D868u, 0x29D870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D870u;
label_29d870:
    // 0x29d870: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x29d870u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29d874:
    // 0x29d874: 0x10140005  beq         $zero, $s4, . + 4 + (0x5 << 2)
label_29d878:
    if (ctx->pc == 0x29D878u) {
        ctx->pc = 0x29D87Cu;
        goto label_29d87c;
    }
    ctx->pc = 0x29D874u;
    {
        const bool branch_taken_0x29d874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 20));
        if (branch_taken_0x29d874) {
            ctx->pc = 0x29D88Cu;
            goto label_29d88c;
        }
    }
    ctx->pc = 0x29D87Cu;
label_29d87c:
    // 0x29d87c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29d87cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_29d880:
    // 0x29d880: 0xc0457d8  jal         func_115F60
label_29d884:
    if (ctx->pc == 0x29D884u) {
        ctx->pc = 0x29D888u;
        goto label_29d888;
    }
    ctx->pc = 0x29D880u;
    SET_GPR_U32(ctx, 31, 0x29D888u);
    ctx->pc = 0x115F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115F60u, 0x29D880u, 0x29D888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D888u;
label_29d888:
    // 0x29d888: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x29d888u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29d88c:
    // 0x29d88c: 0x1200003b  beqz        $s0, . + 4 + (0x3B << 2)
label_29d890:
    if (ctx->pc == 0x29D890u) {
        ctx->pc = 0x29D894u;
        goto label_29d894;
    }
    ctx->pc = 0x29D88Cu;
    {
        const bool branch_taken_0x29d88c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x29d88c) {
            ctx->pc = 0x29D97Cu;
            goto label_29d97c;
        }
    }
    ctx->pc = 0x29D894u;
label_29d894:
    // 0x29d894: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29d894u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_29d898:
    // 0x29d898: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x29d898u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29d89c:
    // 0x29d89c: 0xc096b4c  jal         func_25AD30
label_29d8a0:
    if (ctx->pc == 0x29D8A0u) {
        ctx->pc = 0x29D8A4u;
        goto label_29d8a4;
    }
    ctx->pc = 0x29D89Cu;
    SET_GPR_U32(ctx, 31, 0x29D8A4u);
    ctx->pc = 0x25AD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD30u, 0x29D89Cu, 0x29D8A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D8A4u;
label_29d8a4:
    // 0x29d8a4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x29d8a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_29d8a8:
    // 0x29d8a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29d8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29d8ac:
    // 0x29d8ac: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
label_29d8b0:
    if (ctx->pc == 0x29D8B0u) {
        ctx->pc = 0x29D8B4u;
        goto label_29d8b4;
    }
    ctx->pc = 0x29D8ACu;
    {
        const bool branch_taken_0x29d8ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x29d8ac) {
            ctx->pc = 0x29D8F0u;
            goto label_29d8f0;
        }
    }
    ctx->pc = 0x29D8B4u;
label_29d8b4:
    // 0x29d8b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29d8b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_29d8b8:
    // 0x29d8b8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x29d8b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29d8bc:
    // 0x29d8bc: 0xc096af0  jal         func_25ABC0
label_29d8c0:
    if (ctx->pc == 0x29D8C0u) {
        ctx->pc = 0x29D8C4u;
        goto label_29d8c4;
    }
    ctx->pc = 0x29D8BCu;
    SET_GPR_U32(ctx, 31, 0x29D8C4u);
    ctx->pc = 0x25ABC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25ABC0u, 0x29D8BCu, 0x29D8C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D8C4u;
label_29d8c4:
    // 0x29d8c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29d8c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_29d8c8:
    // 0x29d8c8: 0xc096ad0  jal         func_25AB40
label_29d8cc:
    if (ctx->pc == 0x29D8CCu) {
        ctx->pc = 0x29D8D0u;
        goto label_29d8d0;
    }
    ctx->pc = 0x29D8C8u;
    SET_GPR_U32(ctx, 31, 0x29D8D0u);
    ctx->pc = 0x25AB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AB40u, 0x29D8C8u, 0x29D8D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D8D0u;
label_29d8d0:
    // 0x29d8d0: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x29d8d0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29d8d4:
    // 0x29d8d4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x29d8d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_29d8d8:
    // 0x29d8d8: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x29d8d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_29d8dc:
    // 0x29d8dc: 0xc0a82d4  jal         func_2A0B50
label_29d8e0:
    if (ctx->pc == 0x29D8E0u) {
        ctx->pc = 0x29D8E4u;
        goto label_29d8e4;
    }
    ctx->pc = 0x29D8DCu;
    SET_GPR_U32(ctx, 31, 0x29D8E4u);
    ctx->pc = 0x2A0B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0B50u, 0x29D8DCu, 0x29D8E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D8E4u;
label_29d8e4:
    // 0x29d8e4: 0x305300ff  andi        $s3, $v0, 0xFF
    ctx->pc = 0x29d8e4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_29d8e8:
    // 0x29d8e8: 0x10000024  b           . + 4 + (0x24 << 2)
label_29d8ec:
    if (ctx->pc == 0x29D8ECu) {
        ctx->pc = 0x29D8F0u;
        goto label_29d8f0;
    }
    ctx->pc = 0x29D8E8u;
    {
        const bool branch_taken_0x29d8e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29d8e8) {
            ctx->pc = 0x29D97Cu;
            goto label_29d97c;
        }
    }
    ctx->pc = 0x29D8F0u;
label_29d8f0:
    // 0x29d8f0: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x29d8f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_29d8f4:
    // 0x29d8f4: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x29d8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_29d8f8:
    // 0x29d8f8: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
label_29d8fc:
    if (ctx->pc == 0x29D8FCu) {
        ctx->pc = 0x29D900u;
        goto label_29d900;
    }
    ctx->pc = 0x29D8F8u;
    {
        const bool branch_taken_0x29d8f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x29d8f8) {
            ctx->pc = 0x29D920u;
            goto label_29d920;
        }
    }
    ctx->pc = 0x29D900u;
label_29d900:
    // 0x29d900: 0x801021  addu        $v0, $a0, $zero
    ctx->pc = 0x29d900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 0)));
label_29d904:
    // 0x29d904: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x29d904u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
label_29d908:
    // 0x29d908: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x29d908u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_29d90c:
    // 0x29d90c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x29d90cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_29d910:
    // 0x29d910: 0x0  nop
    ctx->pc = 0x29d910u;
    // NOP
label_29d914:
    // 0x29d914: 0x0  nop
    ctx->pc = 0x29d914u;
    // NOP
label_29d918:
    // 0x29d918: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_29d91c:
    if (ctx->pc == 0x29D91Cu) {
        ctx->pc = 0x29D920u;
        goto label_29d920;
    }
    ctx->pc = 0x29D918u;
    {
        const bool branch_taken_0x29d918 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x29d918) {
            ctx->pc = 0x29D904u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29d904;
        }
    }
    ctx->pc = 0x29D920u;
label_29d920:
    // 0x29d920: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29d920u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29d924:
    // 0x29d924: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x29d924u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_29d928:
    // 0x29d928: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x29d928u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29d92c:
    // 0x29d92c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x29d92cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29d930:
    // 0x29d930: 0xc08cd28  jal         func_2334A0
label_29d934:
    if (ctx->pc == 0x29D934u) {
        ctx->pc = 0x29D938u;
        goto label_29d938;
    }
    ctx->pc = 0x29D930u;
    SET_GPR_U32(ctx, 31, 0x29D938u);
    ctx->pc = 0x2334A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2334A0u, 0x29D930u, 0x29D938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D938u;
label_29d938:
    // 0x29d938: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x29d938u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29d93c:
    // 0x29d93c: 0x1012000f  beq         $zero, $s2, . + 4 + (0xF << 2)
label_29d940:
    if (ctx->pc == 0x29D940u) {
        ctx->pc = 0x29D944u;
        goto label_29d944;
    }
    ctx->pc = 0x29D93Cu;
    {
        const bool branch_taken_0x29d93c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 18));
        if (branch_taken_0x29d93c) {
            ctx->pc = 0x29D97Cu;
            goto label_29d97c;
        }
    }
    ctx->pc = 0x29D944u;
label_29d944:
    // 0x29d944: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29d944u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_29d948:
    // 0x29d948: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x29d948u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29d94c:
    // 0x29d94c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x29d94cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_29d950:
    // 0x29d950: 0xc096a20  jal         func_25A880
label_29d954:
    if (ctx->pc == 0x29D954u) {
        ctx->pc = 0x29D958u;
        goto label_29d958;
    }
    ctx->pc = 0x29D950u;
    SET_GPR_U32(ctx, 31, 0x29D958u);
    ctx->pc = 0x25A880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A880u, 0x29D950u, 0x29D958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D958u;
label_29d958:
    // 0x29d958: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29d958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_29d95c:
    // 0x29d95c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x29d95cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29d960:
    // 0x29d960: 0xc096af0  jal         func_25ABC0
label_29d964:
    if (ctx->pc == 0x29D964u) {
        ctx->pc = 0x29D968u;
        goto label_29d968;
    }
    ctx->pc = 0x29D960u;
    SET_GPR_U32(ctx, 31, 0x29D968u);
    ctx->pc = 0x25ABC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25ABC0u, 0x29D960u, 0x29D968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D968u;
label_29d968:
    // 0x29d968: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x29d968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_29d96c:
    // 0x29d96c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x29d96cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_29d970:
    // 0x29d970: 0xc0a82d4  jal         func_2A0B50
label_29d974:
    if (ctx->pc == 0x29D974u) {
        ctx->pc = 0x29D978u;
        goto label_29d978;
    }
    ctx->pc = 0x29D970u;
    SET_GPR_U32(ctx, 31, 0x29D978u);
    ctx->pc = 0x2A0B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0B50u, 0x29D970u, 0x29D978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D978u;
label_29d978:
    // 0x29d978: 0x305300ff  andi        $s3, $v0, 0xFF
    ctx->pc = 0x29d978u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_29d97c:
    // 0x29d97c: 0x327600ff  andi        $s6, $s3, 0xFF
    ctx->pc = 0x29d97cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
label_29d980:
    // 0x29d980: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x29d980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_29d984:
    // 0x29d984: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x29d984u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_29d988:
    // 0x29d988: 0xc0402d4  jal         func_100B50
label_29d98c:
    if (ctx->pc == 0x29D98Cu) {
        ctx->pc = 0x29D990u;
        goto label_29d990;
    }
    ctx->pc = 0x29D988u;
    SET_GPR_U32(ctx, 31, 0x29D990u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x29D988u, 0x29D990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D990u;
label_29d990:
    // 0x29d990: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x29d990u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_29d994:
    // 0x29d994: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x29d994u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_29d998:
    // 0x29d998: 0xc0402d4  jal         func_100B50
label_29d99c:
    if (ctx->pc == 0x29D99Cu) {
        ctx->pc = 0x29D9A0u;
        goto label_29d9a0;
    }
    ctx->pc = 0x29D998u;
    SET_GPR_U32(ctx, 31, 0x29D9A0u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x29D998u, 0x29D9A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D9A0u;
label_29d9a0:
    // 0x29d9a0: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x29d9a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_29d9a4:
    // 0x29d9a4: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x29d9a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_29d9a8:
    // 0x29d9a8: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x29d9a8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_29d9ac:
    // 0x29d9ac: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x29d9acu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_29d9b0:
    // 0x29d9b0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x29d9b0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_29d9b4:
    // 0x29d9b4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x29d9b4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_29d9b8:
    // 0x29d9b8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x29d9b8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_29d9bc:
    // 0x29d9bc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x29d9bcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_29d9c0:
    // 0x29d9c0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x29d9c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_29d9c4:
    // 0x29d9c4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x29d9c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_29d9c8:
    // 0x29d9c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29d9c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_29d9cc:
    // 0x29d9cc: 0x27bd00e0  addiu       $sp, $sp, 0xE0
    ctx->pc = 0x29d9ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_29d9d0:
    // 0x29d9d0: 0x3e00008  jr          $ra
label_29d9d4:
    if (ctx->pc == 0x29D9D4u) {
        ctx->pc = 0x29D9D8u;
        goto label_29d9d8;
    }
    ctx->pc = 0x29D9D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29D9D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29D9D8u;
label_29d9d8:
    // 0x29d9d8: 0x0  nop
    ctx->pc = 0x29d9d8u;
    // NOP
label_29d9dc:
    // 0x29d9dc: 0x0  nop
    ctx->pc = 0x29d9dcu;
    // NOP
label_29d9e0:
    // 0x29d9e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29d9e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_29d9e4:
    // 0x29d9e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29d9e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_29d9e8:
    // 0x29d9e8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x29d9e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_29d9ec:
    // 0x29d9ec: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x29d9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_29d9f0:
    // 0x29d9f0: 0x8c440058  lw          $a0, 0x58($v0)
    ctx->pc = 0x29d9f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
label_29d9f4:
    // 0x29d9f4: 0xc0a7684  jal         func_29DA10
label_29d9f8:
    if (ctx->pc == 0x29D9F8u) {
        ctx->pc = 0x29D9FCu;
        goto label_29d9fc;
    }
    ctx->pc = 0x29D9F4u;
    SET_GPR_U32(ctx, 31, 0x29D9FCu);
    ctx->pc = 0x29DA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29DA10u, 0x29D9F4u, 0x29D9FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D9FCu;
label_29d9fc:
    // 0x29d9fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29d9fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_29da00:
    // 0x29da00: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x29da00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_29da04:
    // 0x29da04: 0x3e00008  jr          $ra
label_29da08:
    if (ctx->pc == 0x29DA08u) {
        ctx->pc = 0x29DA0Cu;
        goto label_29da0c;
    }
    ctx->pc = 0x29DA04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29DA04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29DA0Cu;
label_29da0c:
    // 0x29da0c: 0x0  nop
    ctx->pc = 0x29da0cu;
    // NOP
    ctx->pc = 0x29da10u;
}
