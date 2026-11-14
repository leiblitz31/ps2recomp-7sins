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

// Function: sub_0014D550
// Address: 0x14d550 - 0x14d970
void sub_0014D550_0x14d550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014D550_0x14d550");
#endif

    switch (ctx->pc) {
        case 0x14d550u: goto label_14d550;
        case 0x14d554u: goto label_14d554;
        case 0x14d558u: goto label_14d558;
        case 0x14d55cu: goto label_14d55c;
        case 0x14d560u: goto label_14d560;
        case 0x14d564u: goto label_14d564;
        case 0x14d568u: goto label_14d568;
        case 0x14d56cu: goto label_14d56c;
        case 0x14d570u: goto label_14d570;
        case 0x14d574u: goto label_14d574;
        case 0x14d578u: goto label_14d578;
        case 0x14d57cu: goto label_14d57c;
        case 0x14d580u: goto label_14d580;
        case 0x14d584u: goto label_14d584;
        case 0x14d588u: goto label_14d588;
        case 0x14d58cu: goto label_14d58c;
        case 0x14d590u: goto label_14d590;
        case 0x14d594u: goto label_14d594;
        case 0x14d598u: goto label_14d598;
        case 0x14d59cu: goto label_14d59c;
        case 0x14d5a0u: goto label_14d5a0;
        case 0x14d5a4u: goto label_14d5a4;
        case 0x14d5a8u: goto label_14d5a8;
        case 0x14d5acu: goto label_14d5ac;
        case 0x14d5b0u: goto label_14d5b0;
        case 0x14d5b4u: goto label_14d5b4;
        case 0x14d5b8u: goto label_14d5b8;
        case 0x14d5bcu: goto label_14d5bc;
        case 0x14d5c0u: goto label_14d5c0;
        case 0x14d5c4u: goto label_14d5c4;
        case 0x14d5c8u: goto label_14d5c8;
        case 0x14d5ccu: goto label_14d5cc;
        case 0x14d5d0u: goto label_14d5d0;
        case 0x14d5d4u: goto label_14d5d4;
        case 0x14d5d8u: goto label_14d5d8;
        case 0x14d5dcu: goto label_14d5dc;
        case 0x14d5e0u: goto label_14d5e0;
        case 0x14d5e4u: goto label_14d5e4;
        case 0x14d5e8u: goto label_14d5e8;
        case 0x14d5ecu: goto label_14d5ec;
        case 0x14d5f0u: goto label_14d5f0;
        case 0x14d5f4u: goto label_14d5f4;
        case 0x14d5f8u: goto label_14d5f8;
        case 0x14d5fcu: goto label_14d5fc;
        case 0x14d600u: goto label_14d600;
        case 0x14d604u: goto label_14d604;
        case 0x14d608u: goto label_14d608;
        case 0x14d60cu: goto label_14d60c;
        case 0x14d610u: goto label_14d610;
        case 0x14d614u: goto label_14d614;
        case 0x14d618u: goto label_14d618;
        case 0x14d61cu: goto label_14d61c;
        case 0x14d620u: goto label_14d620;
        case 0x14d624u: goto label_14d624;
        case 0x14d628u: goto label_14d628;
        case 0x14d62cu: goto label_14d62c;
        case 0x14d630u: goto label_14d630;
        case 0x14d634u: goto label_14d634;
        case 0x14d638u: goto label_14d638;
        case 0x14d63cu: goto label_14d63c;
        case 0x14d640u: goto label_14d640;
        case 0x14d644u: goto label_14d644;
        case 0x14d648u: goto label_14d648;
        case 0x14d64cu: goto label_14d64c;
        case 0x14d650u: goto label_14d650;
        case 0x14d654u: goto label_14d654;
        case 0x14d658u: goto label_14d658;
        case 0x14d65cu: goto label_14d65c;
        case 0x14d660u: goto label_14d660;
        case 0x14d664u: goto label_14d664;
        case 0x14d668u: goto label_14d668;
        case 0x14d66cu: goto label_14d66c;
        case 0x14d670u: goto label_14d670;
        case 0x14d674u: goto label_14d674;
        case 0x14d678u: goto label_14d678;
        case 0x14d67cu: goto label_14d67c;
        case 0x14d680u: goto label_14d680;
        case 0x14d684u: goto label_14d684;
        case 0x14d688u: goto label_14d688;
        case 0x14d68cu: goto label_14d68c;
        case 0x14d690u: goto label_14d690;
        case 0x14d694u: goto label_14d694;
        case 0x14d698u: goto label_14d698;
        case 0x14d69cu: goto label_14d69c;
        case 0x14d6a0u: goto label_14d6a0;
        case 0x14d6a4u: goto label_14d6a4;
        case 0x14d6a8u: goto label_14d6a8;
        case 0x14d6acu: goto label_14d6ac;
        case 0x14d6b0u: goto label_14d6b0;
        case 0x14d6b4u: goto label_14d6b4;
        case 0x14d6b8u: goto label_14d6b8;
        case 0x14d6bcu: goto label_14d6bc;
        case 0x14d6c0u: goto label_14d6c0;
        case 0x14d6c4u: goto label_14d6c4;
        case 0x14d6c8u: goto label_14d6c8;
        case 0x14d6ccu: goto label_14d6cc;
        case 0x14d6d0u: goto label_14d6d0;
        case 0x14d6d4u: goto label_14d6d4;
        case 0x14d6d8u: goto label_14d6d8;
        case 0x14d6dcu: goto label_14d6dc;
        case 0x14d6e0u: goto label_14d6e0;
        case 0x14d6e4u: goto label_14d6e4;
        case 0x14d6e8u: goto label_14d6e8;
        case 0x14d6ecu: goto label_14d6ec;
        case 0x14d6f0u: goto label_14d6f0;
        case 0x14d6f4u: goto label_14d6f4;
        case 0x14d6f8u: goto label_14d6f8;
        case 0x14d6fcu: goto label_14d6fc;
        case 0x14d700u: goto label_14d700;
        case 0x14d704u: goto label_14d704;
        case 0x14d708u: goto label_14d708;
        case 0x14d70cu: goto label_14d70c;
        case 0x14d710u: goto label_14d710;
        case 0x14d714u: goto label_14d714;
        case 0x14d718u: goto label_14d718;
        case 0x14d71cu: goto label_14d71c;
        case 0x14d720u: goto label_14d720;
        case 0x14d724u: goto label_14d724;
        case 0x14d728u: goto label_14d728;
        case 0x14d72cu: goto label_14d72c;
        case 0x14d730u: goto label_14d730;
        case 0x14d734u: goto label_14d734;
        case 0x14d738u: goto label_14d738;
        case 0x14d73cu: goto label_14d73c;
        case 0x14d740u: goto label_14d740;
        case 0x14d744u: goto label_14d744;
        case 0x14d748u: goto label_14d748;
        case 0x14d74cu: goto label_14d74c;
        case 0x14d750u: goto label_14d750;
        case 0x14d754u: goto label_14d754;
        case 0x14d758u: goto label_14d758;
        case 0x14d75cu: goto label_14d75c;
        case 0x14d760u: goto label_14d760;
        case 0x14d764u: goto label_14d764;
        case 0x14d768u: goto label_14d768;
        case 0x14d76cu: goto label_14d76c;
        case 0x14d770u: goto label_14d770;
        case 0x14d774u: goto label_14d774;
        case 0x14d778u: goto label_14d778;
        case 0x14d77cu: goto label_14d77c;
        case 0x14d780u: goto label_14d780;
        case 0x14d784u: goto label_14d784;
        case 0x14d788u: goto label_14d788;
        case 0x14d78cu: goto label_14d78c;
        case 0x14d790u: goto label_14d790;
        case 0x14d794u: goto label_14d794;
        case 0x14d798u: goto label_14d798;
        case 0x14d79cu: goto label_14d79c;
        case 0x14d7a0u: goto label_14d7a0;
        case 0x14d7a4u: goto label_14d7a4;
        case 0x14d7a8u: goto label_14d7a8;
        case 0x14d7acu: goto label_14d7ac;
        case 0x14d7b0u: goto label_14d7b0;
        case 0x14d7b4u: goto label_14d7b4;
        case 0x14d7b8u: goto label_14d7b8;
        case 0x14d7bcu: goto label_14d7bc;
        case 0x14d7c0u: goto label_14d7c0;
        case 0x14d7c4u: goto label_14d7c4;
        case 0x14d7c8u: goto label_14d7c8;
        case 0x14d7ccu: goto label_14d7cc;
        case 0x14d7d0u: goto label_14d7d0;
        case 0x14d7d4u: goto label_14d7d4;
        case 0x14d7d8u: goto label_14d7d8;
        case 0x14d7dcu: goto label_14d7dc;
        case 0x14d7e0u: goto label_14d7e0;
        case 0x14d7e4u: goto label_14d7e4;
        case 0x14d7e8u: goto label_14d7e8;
        case 0x14d7ecu: goto label_14d7ec;
        case 0x14d7f0u: goto label_14d7f0;
        case 0x14d7f4u: goto label_14d7f4;
        case 0x14d7f8u: goto label_14d7f8;
        case 0x14d7fcu: goto label_14d7fc;
        case 0x14d800u: goto label_14d800;
        case 0x14d804u: goto label_14d804;
        case 0x14d808u: goto label_14d808;
        case 0x14d80cu: goto label_14d80c;
        case 0x14d810u: goto label_14d810;
        case 0x14d814u: goto label_14d814;
        case 0x14d818u: goto label_14d818;
        case 0x14d81cu: goto label_14d81c;
        case 0x14d820u: goto label_14d820;
        case 0x14d824u: goto label_14d824;
        case 0x14d828u: goto label_14d828;
        case 0x14d82cu: goto label_14d82c;
        case 0x14d830u: goto label_14d830;
        case 0x14d834u: goto label_14d834;
        case 0x14d838u: goto label_14d838;
        case 0x14d83cu: goto label_14d83c;
        case 0x14d840u: goto label_14d840;
        case 0x14d844u: goto label_14d844;
        case 0x14d848u: goto label_14d848;
        case 0x14d84cu: goto label_14d84c;
        case 0x14d850u: goto label_14d850;
        case 0x14d854u: goto label_14d854;
        case 0x14d858u: goto label_14d858;
        case 0x14d85cu: goto label_14d85c;
        case 0x14d860u: goto label_14d860;
        case 0x14d864u: goto label_14d864;
        case 0x14d868u: goto label_14d868;
        case 0x14d86cu: goto label_14d86c;
        case 0x14d870u: goto label_14d870;
        case 0x14d874u: goto label_14d874;
        case 0x14d878u: goto label_14d878;
        case 0x14d87cu: goto label_14d87c;
        case 0x14d880u: goto label_14d880;
        case 0x14d884u: goto label_14d884;
        case 0x14d888u: goto label_14d888;
        case 0x14d88cu: goto label_14d88c;
        case 0x14d890u: goto label_14d890;
        case 0x14d894u: goto label_14d894;
        case 0x14d898u: goto label_14d898;
        case 0x14d89cu: goto label_14d89c;
        case 0x14d8a0u: goto label_14d8a0;
        case 0x14d8a4u: goto label_14d8a4;
        case 0x14d8a8u: goto label_14d8a8;
        case 0x14d8acu: goto label_14d8ac;
        case 0x14d8b0u: goto label_14d8b0;
        case 0x14d8b4u: goto label_14d8b4;
        case 0x14d8b8u: goto label_14d8b8;
        case 0x14d8bcu: goto label_14d8bc;
        case 0x14d8c0u: goto label_14d8c0;
        case 0x14d8c4u: goto label_14d8c4;
        case 0x14d8c8u: goto label_14d8c8;
        case 0x14d8ccu: goto label_14d8cc;
        case 0x14d8d0u: goto label_14d8d0;
        case 0x14d8d4u: goto label_14d8d4;
        case 0x14d8d8u: goto label_14d8d8;
        case 0x14d8dcu: goto label_14d8dc;
        case 0x14d8e0u: goto label_14d8e0;
        case 0x14d8e4u: goto label_14d8e4;
        case 0x14d8e8u: goto label_14d8e8;
        case 0x14d8ecu: goto label_14d8ec;
        case 0x14d8f0u: goto label_14d8f0;
        case 0x14d8f4u: goto label_14d8f4;
        case 0x14d8f8u: goto label_14d8f8;
        case 0x14d8fcu: goto label_14d8fc;
        case 0x14d900u: goto label_14d900;
        case 0x14d904u: goto label_14d904;
        case 0x14d908u: goto label_14d908;
        case 0x14d90cu: goto label_14d90c;
        case 0x14d910u: goto label_14d910;
        case 0x14d914u: goto label_14d914;
        case 0x14d918u: goto label_14d918;
        case 0x14d91cu: goto label_14d91c;
        case 0x14d920u: goto label_14d920;
        case 0x14d924u: goto label_14d924;
        case 0x14d928u: goto label_14d928;
        case 0x14d92cu: goto label_14d92c;
        case 0x14d930u: goto label_14d930;
        case 0x14d934u: goto label_14d934;
        case 0x14d938u: goto label_14d938;
        case 0x14d93cu: goto label_14d93c;
        case 0x14d940u: goto label_14d940;
        case 0x14d944u: goto label_14d944;
        case 0x14d948u: goto label_14d948;
        case 0x14d94cu: goto label_14d94c;
        case 0x14d950u: goto label_14d950;
        case 0x14d954u: goto label_14d954;
        case 0x14d958u: goto label_14d958;
        case 0x14d95cu: goto label_14d95c;
        case 0x14d960u: goto label_14d960;
        case 0x14d964u: goto label_14d964;
        case 0x14d968u: goto label_14d968;
        case 0x14d96cu: goto label_14d96c;
        default: break;
    }

    ctx->pc = 0x14d550u;

label_14d550:
    // 0x14d550: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x14d550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_14d554:
    // 0x14d554: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x14d554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_14d558:
    // 0x14d558: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14d558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_14d55c:
    // 0x14d55c: 0xa3a40020  sb          $a0, 0x20($sp)
    ctx->pc = 0x14d55cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 4));
label_14d560:
    // 0x14d560: 0x8f83ba90  lw          $v1, -0x4570($gp)
    ctx->pc = 0x14d560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949520)));
label_14d564:
    // 0x14d564: 0x10030030  beq         $zero, $v1, . + 4 + (0x30 << 2)
label_14d568:
    if (ctx->pc == 0x14D568u) {
        ctx->pc = 0x14D56Cu;
        goto label_14d56c;
    }
    ctx->pc = 0x14D564u;
    {
        const bool branch_taken_0x14d564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        if (branch_taken_0x14d564) {
            ctx->pc = 0x14D628u;
            goto label_14d628;
        }
    }
    ctx->pc = 0x14D56Cu;
label_14d56c:
    // 0x14d56c: 0x93a30020  lbu         $v1, 0x20($sp)
    ctx->pc = 0x14d56cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
label_14d570:
    // 0x14d570: 0xa3838cbc  sb          $v1, -0x7344($gp)
    ctx->pc = 0x14d570u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937788), (uint8_t)GPR_U32(ctx, 3));
label_14d574:
    // 0x14d574: 0x93838cbc  lbu         $v1, -0x7344($gp)
    ctx->pc = 0x14d574u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937788)));
label_14d578:
    // 0x14d578: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x14d578u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_14d57c:
    // 0x14d57c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x14d57cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14d580:
    // 0x14d580: 0x14830012  bne         $a0, $v1, . + 4 + (0x12 << 2)
label_14d584:
    if (ctx->pc == 0x14D584u) {
        ctx->pc = 0x14D588u;
        goto label_14d588;
    }
    ctx->pc = 0x14D580u;
    {
        const bool branch_taken_0x14d580 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x14d580) {
            ctx->pc = 0x14D5CCu;
            goto label_14d5cc;
        }
    }
    ctx->pc = 0x14D588u;
label_14d588:
    // 0x14d588: 0x8f84ba90  lw          $a0, -0x4570($gp)
    ctx->pc = 0x14d588u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949520)));
label_14d58c:
    // 0x14d58c: 0xc0913e4  jal         func_244F90
label_14d590:
    if (ctx->pc == 0x14D590u) {
        ctx->pc = 0x14D594u;
        goto label_14d594;
    }
    ctx->pc = 0x14D58Cu;
    SET_GPR_U32(ctx, 31, 0x14D594u);
    ctx->pc = 0x244F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244F90u, 0x14D58Cu, 0x14D594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D594u;
label_14d594:
    // 0x14d594: 0x1402000d  bne         $zero, $v0, . + 4 + (0xD << 2)
label_14d598:
    if (ctx->pc == 0x14D598u) {
        ctx->pc = 0x14D59Cu;
        goto label_14d59c;
    }
    ctx->pc = 0x14D594u;
    {
        const bool branch_taken_0x14d594 = (GPR_U64(ctx, 0) != GPR_U64(ctx, 2));
        if (branch_taken_0x14d594) {
            ctx->pc = 0x14D5CCu;
            goto label_14d5cc;
        }
    }
    ctx->pc = 0x14D59Cu;
label_14d59c:
    // 0x14d59c: 0x8f84ba8c  lw          $a0, -0x4574($gp)
    ctx->pc = 0x14d59cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949516)));
label_14d5a0:
    // 0x14d5a0: 0xc050b24  jal         func_142C90
label_14d5a4:
    if (ctx->pc == 0x14D5A4u) {
        ctx->pc = 0x14D5A8u;
        goto label_14d5a8;
    }
    ctx->pc = 0x14D5A0u;
    SET_GPR_U32(ctx, 31, 0x14D5A8u);
    ctx->pc = 0x142C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x142C90u, 0x14D5A0u, 0x14D5A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D5A8u;
label_14d5a8:
    // 0x14d5a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x14d5a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14d5ac:
    // 0x14d5ac: 0x8f85ba90  lw          $a1, -0x4570($gp)
    ctx->pc = 0x14d5acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949520)));
label_14d5b0:
    // 0x14d5b0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x14d5b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14d5b4:
    // 0x14d5b4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x14d5b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_14d5b8:
    // 0x14d5b8: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x14d5b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_14d5bc:
    // 0x14d5bc: 0x320f809  jalr        $t9
label_14d5c0:
    if (ctx->pc == 0x14D5C0u) {
        ctx->pc = 0x14D5C4u;
        goto label_14d5c4;
    }
    ctx->pc = 0x14D5BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x14D5C4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14D5BCu, 0x14D5C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14D5C4u;
label_14d5c4:
    // 0x14d5c4: 0x10000018  b           . + 4 + (0x18 << 2)
label_14d5c8:
    if (ctx->pc == 0x14D5C8u) {
        ctx->pc = 0x14D5CCu;
        goto label_14d5cc;
    }
    ctx->pc = 0x14D5C4u;
    {
        const bool branch_taken_0x14d5c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d5c4) {
            ctx->pc = 0x14D628u;
            goto label_14d628;
        }
    }
    ctx->pc = 0x14D5CCu;
label_14d5cc:
    // 0x14d5cc: 0x93838cbc  lbu         $v1, -0x7344($gp)
    ctx->pc = 0x14d5ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937788)));
label_14d5d0:
    // 0x14d5d0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x14d5d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_14d5d4:
    // 0x14d5d4: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
label_14d5d8:
    if (ctx->pc == 0x14D5D8u) {
        ctx->pc = 0x14D5DCu;
        goto label_14d5dc;
    }
    ctx->pc = 0x14D5D4u;
    {
        const bool branch_taken_0x14d5d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14d5d4) {
            ctx->pc = 0x14D628u;
            goto label_14d628;
        }
    }
    ctx->pc = 0x14D5DCu;
label_14d5dc:
    // 0x14d5dc: 0x8f84ba90  lw          $a0, -0x4570($gp)
    ctx->pc = 0x14d5dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949520)));
label_14d5e0:
    // 0x14d5e0: 0xc0913e4  jal         func_244F90
label_14d5e4:
    if (ctx->pc == 0x14D5E4u) {
        ctx->pc = 0x14D5E8u;
        goto label_14d5e8;
    }
    ctx->pc = 0x14D5E0u;
    SET_GPR_U32(ctx, 31, 0x14D5E8u);
    ctx->pc = 0x244F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244F90u, 0x14D5E0u, 0x14D5E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D5E8u;
label_14d5e8:
    // 0x14d5e8: 0x1002000f  beq         $zero, $v0, . + 4 + (0xF << 2)
label_14d5ec:
    if (ctx->pc == 0x14D5ECu) {
        ctx->pc = 0x14D5F0u;
        goto label_14d5f0;
    }
    ctx->pc = 0x14D5E8u;
    {
        const bool branch_taken_0x14d5e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x14d5e8) {
            ctx->pc = 0x14D628u;
            goto label_14d628;
        }
    }
    ctx->pc = 0x14D5F0u;
label_14d5f0:
    // 0x14d5f0: 0x8f84ba8c  lw          $a0, -0x4574($gp)
    ctx->pc = 0x14d5f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949516)));
label_14d5f4:
    // 0x14d5f4: 0xc050b24  jal         func_142C90
label_14d5f8:
    if (ctx->pc == 0x14D5F8u) {
        ctx->pc = 0x14D5FCu;
        goto label_14d5fc;
    }
    ctx->pc = 0x14D5F4u;
    SET_GPR_U32(ctx, 31, 0x14D5FCu);
    ctx->pc = 0x142C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x142C90u, 0x14D5F4u, 0x14D5FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D5FCu;
label_14d5fc:
    // 0x14d5fc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x14d5fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14d600:
    // 0x14d600: 0x8f84ba90  lw          $a0, -0x4570($gp)
    ctx->pc = 0x14d600u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949520)));
label_14d604:
    // 0x14d604: 0xc0913e4  jal         func_244F90
label_14d608:
    if (ctx->pc == 0x14D608u) {
        ctx->pc = 0x14D60Cu;
        goto label_14d60c;
    }
    ctx->pc = 0x14D604u;
    SET_GPR_U32(ctx, 31, 0x14D60Cu);
    ctx->pc = 0x244F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244F90u, 0x14D604u, 0x14D60Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D60Cu;
label_14d60c:
    // 0x14d60c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14d60cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_14d610:
    // 0x14d610: 0x8f85ba90  lw          $a1, -0x4570($gp)
    ctx->pc = 0x14d610u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949520)));
label_14d614:
    // 0x14d614: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x14d614u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14d618:
    // 0x14d618: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x14d618u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_14d61c:
    // 0x14d61c: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x14d61cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_14d620:
    // 0x14d620: 0x320f809  jalr        $t9
label_14d624:
    if (ctx->pc == 0x14D624u) {
        ctx->pc = 0x14D628u;
        goto label_14d628;
    }
    ctx->pc = 0x14D620u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x14D628u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14D620u, 0x14D628u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14D628u;
label_14d628:
    // 0x14d628: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x14d628u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_14d62c:
    // 0x14d62c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14d62cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_14d630:
    // 0x14d630: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x14d630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_14d634:
    // 0x14d634: 0x3e00008  jr          $ra
label_14d638:
    if (ctx->pc == 0x14D638u) {
        ctx->pc = 0x14D63Cu;
        goto label_14d63c;
    }
    ctx->pc = 0x14D634u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14D634u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14D63Cu;
label_14d63c:
    // 0x14d63c: 0x0  nop
    ctx->pc = 0x14d63cu;
    // NOP
label_14d640:
    // 0x14d640: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x14d640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_14d644:
    // 0x14d644: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14d644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_14d648:
    // 0x14d648: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x14d648u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_14d64c:
    // 0x14d64c: 0xa3a50020  sb          $a1, 0x20($sp)
    ctx->pc = 0x14d64cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 5));
label_14d650:
    // 0x14d650: 0x93a30020  lbu         $v1, 0x20($sp)
    ctx->pc = 0x14d650u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
label_14d654:
    // 0x14d654: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x14d654u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_14d658:
    // 0x14d658: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
label_14d65c:
    if (ctx->pc == 0x14D65Cu) {
        ctx->pc = 0x14D660u;
        goto label_14d660;
    }
    ctx->pc = 0x14D658u;
    {
        const bool branch_taken_0x14d658 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14d658) {
            ctx->pc = 0x14D684u;
            goto label_14d684;
        }
    }
    ctx->pc = 0x14D660u;
label_14d660:
    // 0x14d660: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x14d660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_14d664:
    // 0x14d664: 0x27858cf0  addiu       $a1, $gp, -0x7310
    ctx->pc = 0x14d664u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937840));
label_14d668:
    // 0x14d668: 0xc054548  jal         func_151520
label_14d66c:
    if (ctx->pc == 0x14D66Cu) {
        ctx->pc = 0x14D670u;
        goto label_14d670;
    }
    ctx->pc = 0x14D668u;
    SET_GPR_U32(ctx, 31, 0x14D670u);
    ctx->pc = 0x151520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151520u, 0x14D668u, 0x14D670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D670u;
label_14d670:
    // 0x14d670: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x14d670u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14d674:
    // 0x14d674: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14d674u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14d678:
    // 0x14d678: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x14d678u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14d67c:
    // 0x14d67c: 0xc0413c4  jal         func_104F10
label_14d680:
    if (ctx->pc == 0x14D680u) {
        ctx->pc = 0x14D684u;
        goto label_14d684;
    }
    ctx->pc = 0x14D67Cu;
    SET_GPR_U32(ctx, 31, 0x14D684u);
    ctx->pc = 0x104F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104F10u, 0x14D67Cu, 0x14D684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D684u;
label_14d684:
    // 0x14d684: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14d684u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_14d688:
    // 0x14d688: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x14d688u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_14d68c:
    // 0x14d68c: 0x3e00008  jr          $ra
label_14d690:
    if (ctx->pc == 0x14D690u) {
        ctx->pc = 0x14D694u;
        goto label_14d694;
    }
    ctx->pc = 0x14D68Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14D68Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14D694u;
label_14d694:
    // 0x14d694: 0x0  nop
    ctx->pc = 0x14d694u;
    // NOP
label_14d698:
    // 0x14d698: 0x0  nop
    ctx->pc = 0x14d698u;
    // NOP
label_14d69c:
    // 0x14d69c: 0x0  nop
    ctx->pc = 0x14d69cu;
    // NOP
label_14d6a0:
    // 0x14d6a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x14d6a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_14d6a4:
    // 0x14d6a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14d6a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_14d6a8:
    // 0x14d6a8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x14d6a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_14d6ac:
    // 0x14d6ac: 0xa3a50020  sb          $a1, 0x20($sp)
    ctx->pc = 0x14d6acu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 5));
label_14d6b0:
    // 0x14d6b0: 0x93a30020  lbu         $v1, 0x20($sp)
    ctx->pc = 0x14d6b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
label_14d6b4:
    // 0x14d6b4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x14d6b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_14d6b8:
    // 0x14d6b8: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
label_14d6bc:
    if (ctx->pc == 0x14D6BCu) {
        ctx->pc = 0x14D6C0u;
        goto label_14d6c0;
    }
    ctx->pc = 0x14D6B8u;
    {
        const bool branch_taken_0x14d6b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14d6b8) {
            ctx->pc = 0x14D6E0u;
            goto label_14d6e0;
        }
    }
    ctx->pc = 0x14D6C0u;
label_14d6c0:
    // 0x14d6c0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x14d6c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_14d6c4:
    // 0x14d6c4: 0x27858cf0  addiu       $a1, $gp, -0x7310
    ctx->pc = 0x14d6c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937840));
label_14d6c8:
    // 0x14d6c8: 0xc054548  jal         func_151520
label_14d6cc:
    if (ctx->pc == 0x14D6CCu) {
        ctx->pc = 0x14D6D0u;
        goto label_14d6d0;
    }
    ctx->pc = 0x14D6C8u;
    SET_GPR_U32(ctx, 31, 0x14D6D0u);
    ctx->pc = 0x151520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151520u, 0x14D6C8u, 0x14D6D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D6D0u;
label_14d6d0:
    // 0x14d6d0: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x14d6d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_14d6d4:
    // 0x14d6d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14d6d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14d6d8:
    // 0x14d6d8: 0xc08ef28  jal         func_23BCA0
label_14d6dc:
    if (ctx->pc == 0x14D6DCu) {
        ctx->pc = 0x14D6E0u;
        goto label_14d6e0;
    }
    ctx->pc = 0x14D6D8u;
    SET_GPR_U32(ctx, 31, 0x14D6E0u);
    ctx->pc = 0x23BCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BCA0u, 0x14D6D8u, 0x14D6E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D6E0u;
label_14d6e0:
    // 0x14d6e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14d6e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_14d6e4:
    // 0x14d6e4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x14d6e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_14d6e8:
    // 0x14d6e8: 0x3e00008  jr          $ra
label_14d6ec:
    if (ctx->pc == 0x14D6ECu) {
        ctx->pc = 0x14D6F0u;
        goto label_14d6f0;
    }
    ctx->pc = 0x14D6E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14D6E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14D6F0u;
label_14d6f0:
    // 0x14d6f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x14d6f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_14d6f4:
    // 0x14d6f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14d6f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_14d6f8:
    // 0x14d6f8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x14d6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_14d6fc:
    // 0x14d6fc: 0xa3a50020  sb          $a1, 0x20($sp)
    ctx->pc = 0x14d6fcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 5));
label_14d700:
    // 0x14d700: 0x93a30020  lbu         $v1, 0x20($sp)
    ctx->pc = 0x14d700u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
label_14d704:
    // 0x14d704: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x14d704u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_14d708:
    // 0x14d708: 0x14600081  bnez        $v1, . + 4 + (0x81 << 2)
label_14d70c:
    if (ctx->pc == 0x14D70Cu) {
        ctx->pc = 0x14D710u;
        goto label_14d710;
    }
    ctx->pc = 0x14D708u;
    {
        const bool branch_taken_0x14d708 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14d708) {
            ctx->pc = 0x14D910u;
            goto label_14d910;
        }
    }
    ctx->pc = 0x14D710u;
label_14d710:
    // 0x14d710: 0x8f83ba98  lw          $v1, -0x4568($gp)
    ctx->pc = 0x14d710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949528)));
label_14d714:
    // 0x14d714: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x14d714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_14d718:
    // 0x14d718: 0x10030005  beq         $zero, $v1, . + 4 + (0x5 << 2)
label_14d71c:
    if (ctx->pc == 0x14D71Cu) {
        ctx->pc = 0x14D720u;
        goto label_14d720;
    }
    ctx->pc = 0x14D718u;
    {
        const bool branch_taken_0x14d718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        if (branch_taken_0x14d718) {
            ctx->pc = 0x14D730u;
            goto label_14d730;
        }
    }
    ctx->pc = 0x14D720u;
label_14d720:
    // 0x14d720: 0x8f83ba98  lw          $v1, -0x4568($gp)
    ctx->pc = 0x14d720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949528)));
label_14d724:
    // 0x14d724: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x14d724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_14d728:
    // 0x14d728: 0x14030003  bne         $zero, $v1, . + 4 + (0x3 << 2)
label_14d72c:
    if (ctx->pc == 0x14D72Cu) {
        ctx->pc = 0x14D730u;
        goto label_14d730;
    }
    ctx->pc = 0x14D728u;
    {
        const bool branch_taken_0x14d728 = (GPR_U64(ctx, 0) != GPR_U64(ctx, 3));
        if (branch_taken_0x14d728) {
            ctx->pc = 0x14D738u;
            goto label_14d738;
        }
    }
    ctx->pc = 0x14D730u;
label_14d730:
    // 0x14d730: 0x10000077  b           . + 4 + (0x77 << 2)
label_14d734:
    if (ctx->pc == 0x14D734u) {
        ctx->pc = 0x14D738u;
        goto label_14d738;
    }
    ctx->pc = 0x14D730u;
    {
        const bool branch_taken_0x14d730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d730) {
            ctx->pc = 0x14D910u;
            goto label_14d910;
        }
    }
    ctx->pc = 0x14D738u;
label_14d738:
    // 0x14d738: 0x8f83bb70  lw          $v1, -0x4490($gp)
    ctx->pc = 0x14d738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_14d73c:
    // 0x14d73c: 0x8c63003c  lw          $v1, 0x3C($v1)
    ctx->pc = 0x14d73cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
label_14d740:
    // 0x14d740: 0x1003003d  beq         $zero, $v1, . + 4 + (0x3D << 2)
label_14d744:
    if (ctx->pc == 0x14D744u) {
        ctx->pc = 0x14D748u;
        goto label_14d748;
    }
    ctx->pc = 0x14D740u;
    {
        const bool branch_taken_0x14d740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        if (branch_taken_0x14d740) {
            ctx->pc = 0x14D838u;
            goto label_14d838;
        }
    }
    ctx->pc = 0x14D748u;
label_14d748:
    // 0x14d748: 0x8f83bb70  lw          $v1, -0x4490($gp)
    ctx->pc = 0x14d748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_14d74c:
    // 0x14d74c: 0x8c63002c  lw          $v1, 0x2C($v1)
    ctx->pc = 0x14d74cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_14d750:
    // 0x14d750: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x14d750u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
label_14d754:
    // 0x14d754: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_14d758:
    if (ctx->pc == 0x14D758u) {
        ctx->pc = 0x14D75Cu;
        goto label_14d75c;
    }
    ctx->pc = 0x14D754u;
    {
        const bool branch_taken_0x14d754 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d754) {
            ctx->pc = 0x14D784u;
            goto label_14d784;
        }
    }
    ctx->pc = 0x14D75Cu;
label_14d75c:
    // 0x14d75c: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x14d75cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_14d760:
    // 0x14d760: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x14d760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_14d764:
    // 0x14d764: 0x8f82ba98  lw          $v0, -0x4568($gp)
    ctx->pc = 0x14d764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949528)));
label_14d768:
    // 0x14d768: 0xac430018  sw          $v1, 0x18($v0)
    ctx->pc = 0x14d768u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 3));
label_14d76c:
    // 0x14d76c: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x14d76cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_14d770:
    // 0x14d770: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14d770u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14d774:
    // 0x14d774: 0xc08ef28  jal         func_23BCA0
label_14d778:
    if (ctx->pc == 0x14D778u) {
        ctx->pc = 0x14D77Cu;
        goto label_14d77c;
    }
    ctx->pc = 0x14D774u;
    SET_GPR_U32(ctx, 31, 0x14D77Cu);
    ctx->pc = 0x23BCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BCA0u, 0x14D774u, 0x14D77Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D77Cu;
label_14d77c:
    // 0x14d77c: 0x10000064  b           . + 4 + (0x64 << 2)
label_14d780:
    if (ctx->pc == 0x14D780u) {
        ctx->pc = 0x14D784u;
        goto label_14d784;
    }
    ctx->pc = 0x14D77Cu;
    {
        const bool branch_taken_0x14d77c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d77c) {
            ctx->pc = 0x14D910u;
            goto label_14d910;
        }
    }
    ctx->pc = 0x14D784u;
label_14d784:
    // 0x14d784: 0x8f83bb70  lw          $v1, -0x4490($gp)
    ctx->pc = 0x14d784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_14d788:
    // 0x14d788: 0x8c63002c  lw          $v1, 0x2C($v1)
    ctx->pc = 0x14d788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_14d78c:
    // 0x14d78c: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x14d78cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
label_14d790:
    // 0x14d790: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_14d794:
    if (ctx->pc == 0x14D794u) {
        ctx->pc = 0x14D798u;
        goto label_14d798;
    }
    ctx->pc = 0x14D790u;
    {
        const bool branch_taken_0x14d790 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d790) {
            ctx->pc = 0x14D7C0u;
            goto label_14d7c0;
        }
    }
    ctx->pc = 0x14D798u;
label_14d798:
    // 0x14d798: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x14d798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_14d79c:
    // 0x14d79c: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x14d79cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_14d7a0:
    // 0x14d7a0: 0x8f82ba98  lw          $v0, -0x4568($gp)
    ctx->pc = 0x14d7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949528)));
label_14d7a4:
    // 0x14d7a4: 0xac430018  sw          $v1, 0x18($v0)
    ctx->pc = 0x14d7a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 3));
label_14d7a8:
    // 0x14d7a8: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x14d7a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_14d7ac:
    // 0x14d7ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14d7acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14d7b0:
    // 0x14d7b0: 0xc08ef28  jal         func_23BCA0
label_14d7b4:
    if (ctx->pc == 0x14D7B4u) {
        ctx->pc = 0x14D7B8u;
        goto label_14d7b8;
    }
    ctx->pc = 0x14D7B0u;
    SET_GPR_U32(ctx, 31, 0x14D7B8u);
    ctx->pc = 0x23BCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BCA0u, 0x14D7B0u, 0x14D7B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D7B8u;
label_14d7b8:
    // 0x14d7b8: 0x10000055  b           . + 4 + (0x55 << 2)
label_14d7bc:
    if (ctx->pc == 0x14D7BCu) {
        ctx->pc = 0x14D7C0u;
        goto label_14d7c0;
    }
    ctx->pc = 0x14D7B8u;
    {
        const bool branch_taken_0x14d7b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d7b8) {
            ctx->pc = 0x14D910u;
            goto label_14d910;
        }
    }
    ctx->pc = 0x14D7C0u;
label_14d7c0:
    // 0x14d7c0: 0x8f83bb70  lw          $v1, -0x4490($gp)
    ctx->pc = 0x14d7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_14d7c4:
    // 0x14d7c4: 0x8c63002c  lw          $v1, 0x2C($v1)
    ctx->pc = 0x14d7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_14d7c8:
    // 0x14d7c8: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x14d7c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
label_14d7cc:
    // 0x14d7cc: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_14d7d0:
    if (ctx->pc == 0x14D7D0u) {
        ctx->pc = 0x14D7D4u;
        goto label_14d7d4;
    }
    ctx->pc = 0x14D7CCu;
    {
        const bool branch_taken_0x14d7cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d7cc) {
            ctx->pc = 0x14D7FCu;
            goto label_14d7fc;
        }
    }
    ctx->pc = 0x14D7D4u;
label_14d7d4:
    // 0x14d7d4: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x14d7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_14d7d8:
    // 0x14d7d8: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x14d7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_14d7dc:
    // 0x14d7dc: 0x8f82ba98  lw          $v0, -0x4568($gp)
    ctx->pc = 0x14d7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949528)));
label_14d7e0:
    // 0x14d7e0: 0xac430018  sw          $v1, 0x18($v0)
    ctx->pc = 0x14d7e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 3));
label_14d7e4:
    // 0x14d7e4: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x14d7e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_14d7e8:
    // 0x14d7e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14d7e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14d7ec:
    // 0x14d7ec: 0xc08ef28  jal         func_23BCA0
label_14d7f0:
    if (ctx->pc == 0x14D7F0u) {
        ctx->pc = 0x14D7F4u;
        goto label_14d7f4;
    }
    ctx->pc = 0x14D7ECu;
    SET_GPR_U32(ctx, 31, 0x14D7F4u);
    ctx->pc = 0x23BCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BCA0u, 0x14D7ECu, 0x14D7F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D7F4u;
label_14d7f4:
    // 0x14d7f4: 0x10000046  b           . + 4 + (0x46 << 2)
label_14d7f8:
    if (ctx->pc == 0x14D7F8u) {
        ctx->pc = 0x14D7FCu;
        goto label_14d7fc;
    }
    ctx->pc = 0x14D7F4u;
    {
        const bool branch_taken_0x14d7f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d7f4) {
            ctx->pc = 0x14D910u;
            goto label_14d910;
        }
    }
    ctx->pc = 0x14D7FCu;
label_14d7fc:
    // 0x14d7fc: 0x8f83bb70  lw          $v1, -0x4490($gp)
    ctx->pc = 0x14d7fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_14d800:
    // 0x14d800: 0x8c63002c  lw          $v1, 0x2C($v1)
    ctx->pc = 0x14d800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_14d804:
    // 0x14d804: 0x30630200  andi        $v1, $v1, 0x200
    ctx->pc = 0x14d804u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
label_14d808:
    // 0x14d808: 0x10600041  beqz        $v1, . + 4 + (0x41 << 2)
label_14d80c:
    if (ctx->pc == 0x14D80Cu) {
        ctx->pc = 0x14D810u;
        goto label_14d810;
    }
    ctx->pc = 0x14D808u;
    {
        const bool branch_taken_0x14d808 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d808) {
            ctx->pc = 0x14D910u;
            goto label_14d910;
        }
    }
    ctx->pc = 0x14D810u;
label_14d810:
    // 0x14d810: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x14d810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_14d814:
    // 0x14d814: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x14d814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_14d818:
    // 0x14d818: 0x8f82ba98  lw          $v0, -0x4568($gp)
    ctx->pc = 0x14d818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949528)));
label_14d81c:
    // 0x14d81c: 0xac430018  sw          $v1, 0x18($v0)
    ctx->pc = 0x14d81cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 3));
label_14d820:
    // 0x14d820: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x14d820u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_14d824:
    // 0x14d824: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14d824u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14d828:
    // 0x14d828: 0xc08ef28  jal         func_23BCA0
label_14d82c:
    if (ctx->pc == 0x14D82Cu) {
        ctx->pc = 0x14D830u;
        goto label_14d830;
    }
    ctx->pc = 0x14D828u;
    SET_GPR_U32(ctx, 31, 0x14D830u);
    ctx->pc = 0x23BCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BCA0u, 0x14D828u, 0x14D830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D830u;
label_14d830:
    // 0x14d830: 0x10000037  b           . + 4 + (0x37 << 2)
label_14d834:
    if (ctx->pc == 0x14D834u) {
        ctx->pc = 0x14D838u;
        goto label_14d838;
    }
    ctx->pc = 0x14D830u;
    {
        const bool branch_taken_0x14d830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d830) {
            ctx->pc = 0x14D910u;
            goto label_14d910;
        }
    }
    ctx->pc = 0x14D838u;
label_14d838:
    // 0x14d838: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x14d838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_14d83c:
    // 0x14d83c: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x14d83cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_14d840:
    // 0x14d840: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x14d840u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
label_14d844:
    // 0x14d844: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_14d848:
    if (ctx->pc == 0x14D848u) {
        ctx->pc = 0x14D84Cu;
        goto label_14d84c;
    }
    ctx->pc = 0x14D844u;
    {
        const bool branch_taken_0x14d844 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d844) {
            ctx->pc = 0x14D8C8u;
            goto label_14d8c8;
        }
    }
    ctx->pc = 0x14D84Cu;
label_14d84c:
    // 0x14d84c: 0x8f82ba98  lw          $v0, -0x4568($gp)
    ctx->pc = 0x14d84cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949528)));
label_14d850:
    // 0x14d850: 0x2444000c  addiu       $a0, $v0, 0xC
    ctx->pc = 0x14d850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_14d854:
    // 0x14d854: 0xc053548  jal         func_14D520
label_14d858:
    if (ctx->pc == 0x14D858u) {
        ctx->pc = 0x14D85Cu;
        goto label_14d85c;
    }
    ctx->pc = 0x14D854u;
    SET_GPR_U32(ctx, 31, 0x14D85Cu);
    ctx->pc = 0x14D520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14D520u, 0x14D854u, 0x14D85Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D85Cu;
label_14d85c:
    // 0x14d85c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x14d85cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_14d860:
    // 0x14d860: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
label_14d864:
    if (ctx->pc == 0x14D864u) {
        ctx->pc = 0x14D868u;
        goto label_14d868;
    }
    ctx->pc = 0x14D860u;
    {
        const bool branch_taken_0x14d860 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14d860) {
            ctx->pc = 0x14D8C8u;
            goto label_14d8c8;
        }
    }
    ctx->pc = 0x14D868u;
label_14d868:
    // 0x14d868: 0x8f82ba98  lw          $v0, -0x4568($gp)
    ctx->pc = 0x14d868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949528)));
label_14d86c:
    // 0x14d86c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x14d86cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_14d870:
    // 0x14d870: 0x1002000f  beq         $zero, $v0, . + 4 + (0xF << 2)
label_14d874:
    if (ctx->pc == 0x14D874u) {
        ctx->pc = 0x14D878u;
        goto label_14d878;
    }
    ctx->pc = 0x14D870u;
    {
        const bool branch_taken_0x14d870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x14d870) {
            ctx->pc = 0x14D8B0u;
            goto label_14d8b0;
        }
    }
    ctx->pc = 0x14D878u;
label_14d878:
    // 0x14d878: 0x8f82ba98  lw          $v0, -0x4568($gp)
    ctx->pc = 0x14d878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949528)));
label_14d87c:
    // 0x14d87c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x14d87cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_14d880:
    // 0x14d880: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x14d880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_14d884:
    // 0x14d884: 0x1002000a  beq         $zero, $v0, . + 4 + (0xA << 2)
label_14d888:
    if (ctx->pc == 0x14D888u) {
        ctx->pc = 0x14D88Cu;
        goto label_14d88c;
    }
    ctx->pc = 0x14D884u;
    {
        const bool branch_taken_0x14d884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x14d884) {
            ctx->pc = 0x14D8B0u;
            goto label_14d8b0;
        }
    }
    ctx->pc = 0x14D88Cu;
label_14d88c:
    // 0x14d88c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x14d88cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_14d890:
    // 0x14d890: 0x8f82ba98  lw          $v0, -0x4568($gp)
    ctx->pc = 0x14d890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949528)));
label_14d894:
    // 0x14d894: 0xac430018  sw          $v1, 0x18($v0)
    ctx->pc = 0x14d894u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 3));
label_14d898:
    // 0x14d898: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x14d898u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_14d89c:
    // 0x14d89c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14d89cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14d8a0:
    // 0x14d8a0: 0xc08ef28  jal         func_23BCA0
label_14d8a4:
    if (ctx->pc == 0x14D8A4u) {
        ctx->pc = 0x14D8A8u;
        goto label_14d8a8;
    }
    ctx->pc = 0x14D8A0u;
    SET_GPR_U32(ctx, 31, 0x14D8A8u);
    ctx->pc = 0x23BCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BCA0u, 0x14D8A0u, 0x14D8A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D8A8u;
label_14d8a8:
    // 0x14d8a8: 0x10000019  b           . + 4 + (0x19 << 2)
label_14d8ac:
    if (ctx->pc == 0x14D8ACu) {
        ctx->pc = 0x14D8B0u;
        goto label_14d8b0;
    }
    ctx->pc = 0x14D8A8u;
    {
        const bool branch_taken_0x14d8a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d8a8) {
            ctx->pc = 0x14D910u;
            goto label_14d910;
        }
    }
    ctx->pc = 0x14D8B0u;
label_14d8b0:
    // 0x14d8b0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x14d8b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_14d8b4:
    // 0x14d8b4: 0x27858cf8  addiu       $a1, $gp, -0x7308
    ctx->pc = 0x14d8b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937848));
label_14d8b8:
    // 0x14d8b8: 0xc054548  jal         func_151520
label_14d8bc:
    if (ctx->pc == 0x14D8BCu) {
        ctx->pc = 0x14D8C0u;
        goto label_14d8c0;
    }
    ctx->pc = 0x14D8B8u;
    SET_GPR_U32(ctx, 31, 0x14D8C0u);
    ctx->pc = 0x151520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151520u, 0x14D8B8u, 0x14D8C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D8C0u;
label_14d8c0:
    // 0x14d8c0: 0x10000013  b           . + 4 + (0x13 << 2)
label_14d8c4:
    if (ctx->pc == 0x14D8C4u) {
        ctx->pc = 0x14D8C8u;
        goto label_14d8c8;
    }
    ctx->pc = 0x14D8C0u;
    {
        const bool branch_taken_0x14d8c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d8c0) {
            ctx->pc = 0x14D910u;
            goto label_14d910;
        }
    }
    ctx->pc = 0x14D8C8u;
label_14d8c8:
    // 0x14d8c8: 0x8f82ba98  lw          $v0, -0x4568($gp)
    ctx->pc = 0x14d8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949528)));
label_14d8cc:
    // 0x14d8cc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x14d8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_14d8d0:
    // 0x14d8d0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x14d8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_14d8d4:
    // 0x14d8d4: 0x1002000a  beq         $zero, $v0, . + 4 + (0xA << 2)
label_14d8d8:
    if (ctx->pc == 0x14D8D8u) {
        ctx->pc = 0x14D8DCu;
        goto label_14d8dc;
    }
    ctx->pc = 0x14D8D4u;
    {
        const bool branch_taken_0x14d8d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x14d8d4) {
            ctx->pc = 0x14D900u;
            goto label_14d900;
        }
    }
    ctx->pc = 0x14D8DCu;
label_14d8dc:
    // 0x14d8dc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x14d8dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14d8e0:
    // 0x14d8e0: 0x8f82ba98  lw          $v0, -0x4568($gp)
    ctx->pc = 0x14d8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949528)));
label_14d8e4:
    // 0x14d8e4: 0xac430018  sw          $v1, 0x18($v0)
    ctx->pc = 0x14d8e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 3));
label_14d8e8:
    // 0x14d8e8: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x14d8e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_14d8ec:
    // 0x14d8ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14d8ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14d8f0:
    // 0x14d8f0: 0xc08ef28  jal         func_23BCA0
label_14d8f4:
    if (ctx->pc == 0x14D8F4u) {
        ctx->pc = 0x14D8F8u;
        goto label_14d8f8;
    }
    ctx->pc = 0x14D8F0u;
    SET_GPR_U32(ctx, 31, 0x14D8F8u);
    ctx->pc = 0x23BCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BCA0u, 0x14D8F0u, 0x14D8F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D8F8u;
label_14d8f8:
    // 0x14d8f8: 0x10000005  b           . + 4 + (0x5 << 2)
label_14d8fc:
    if (ctx->pc == 0x14D8FCu) {
        ctx->pc = 0x14D900u;
        goto label_14d900;
    }
    ctx->pc = 0x14D8F8u;
    {
        const bool branch_taken_0x14d8f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d8f8) {
            ctx->pc = 0x14D910u;
            goto label_14d910;
        }
    }
    ctx->pc = 0x14D900u;
label_14d900:
    // 0x14d900: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x14d900u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_14d904:
    // 0x14d904: 0x27858cf8  addiu       $a1, $gp, -0x7308
    ctx->pc = 0x14d904u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937848));
label_14d908:
    // 0x14d908: 0xc054548  jal         func_151520
label_14d90c:
    if (ctx->pc == 0x14D90Cu) {
        ctx->pc = 0x14D910u;
        goto label_14d910;
    }
    ctx->pc = 0x14D908u;
    SET_GPR_U32(ctx, 31, 0x14D910u);
    ctx->pc = 0x151520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151520u, 0x14D908u, 0x14D910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D910u;
label_14d910:
    // 0x14d910: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14d910u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_14d914:
    // 0x14d914: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x14d914u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_14d918:
    // 0x14d918: 0x3e00008  jr          $ra
label_14d91c:
    if (ctx->pc == 0x14D91Cu) {
        ctx->pc = 0x14D920u;
        goto label_14d920;
    }
    ctx->pc = 0x14D918u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14D918u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14D920u;
label_14d920:
    // 0x14d920: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x14d920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_14d924:
    // 0x14d924: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14d924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_14d928:
    // 0x14d928: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x14d928u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_14d92c:
    // 0x14d92c: 0xa3a50020  sb          $a1, 0x20($sp)
    ctx->pc = 0x14d92cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 5));
label_14d930:
    // 0x14d930: 0x93a30020  lbu         $v1, 0x20($sp)
    ctx->pc = 0x14d930u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
label_14d934:
    // 0x14d934: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x14d934u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_14d938:
    // 0x14d938: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
label_14d93c:
    if (ctx->pc == 0x14D93Cu) {
        ctx->pc = 0x14D940u;
        goto label_14d940;
    }
    ctx->pc = 0x14D938u;
    {
        const bool branch_taken_0x14d938 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14d938) {
            ctx->pc = 0x14D960u;
            goto label_14d960;
        }
    }
    ctx->pc = 0x14D940u;
label_14d940:
    // 0x14d940: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x14d940u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_14d944:
    // 0x14d944: 0x27858cf0  addiu       $a1, $gp, -0x7310
    ctx->pc = 0x14d944u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937840));
label_14d948:
    // 0x14d948: 0xc054548  jal         func_151520
label_14d94c:
    if (ctx->pc == 0x14D94Cu) {
        ctx->pc = 0x14D950u;
        goto label_14d950;
    }
    ctx->pc = 0x14D948u;
    SET_GPR_U32(ctx, 31, 0x14D950u);
    ctx->pc = 0x151520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151520u, 0x14D948u, 0x14D950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D950u;
label_14d950:
    // 0x14d950: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x14d950u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_14d954:
    // 0x14d954: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14d954u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14d958:
    // 0x14d958: 0xc08ef28  jal         func_23BCA0
label_14d95c:
    if (ctx->pc == 0x14D95Cu) {
        ctx->pc = 0x14D960u;
        goto label_14d960;
    }
    ctx->pc = 0x14D958u;
    SET_GPR_U32(ctx, 31, 0x14D960u);
    ctx->pc = 0x23BCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BCA0u, 0x14D958u, 0x14D960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D960u;
label_14d960:
    // 0x14d960: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14d960u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_14d964:
    // 0x14d964: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x14d964u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_14d968:
    // 0x14d968: 0x3e00008  jr          $ra
label_14d96c:
    if (ctx->pc == 0x14D96Cu) {
        ctx->pc = 0x14D970u;
        goto label_fallthrough_0x14d968;
    }
    ctx->pc = 0x14D968u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14D968u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x14d968:
    ctx->pc = 0x14D970u;
}
