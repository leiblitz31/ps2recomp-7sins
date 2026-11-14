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

// Function: sub_0045A560
// Address: 0x45a560 - 0x45a6d0
void sub_0045A560_0x45a560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0045A560_0x45a560");
#endif

    switch (ctx->pc) {
        case 0x45a560u: goto label_45a560;
        case 0x45a564u: goto label_45a564;
        case 0x45a568u: goto label_45a568;
        case 0x45a56cu: goto label_45a56c;
        case 0x45a570u: goto label_45a570;
        case 0x45a574u: goto label_45a574;
        case 0x45a578u: goto label_45a578;
        case 0x45a57cu: goto label_45a57c;
        case 0x45a580u: goto label_45a580;
        case 0x45a584u: goto label_45a584;
        case 0x45a588u: goto label_45a588;
        case 0x45a58cu: goto label_45a58c;
        case 0x45a590u: goto label_45a590;
        case 0x45a594u: goto label_45a594;
        case 0x45a598u: goto label_45a598;
        case 0x45a59cu: goto label_45a59c;
        case 0x45a5a0u: goto label_45a5a0;
        case 0x45a5a4u: goto label_45a5a4;
        case 0x45a5a8u: goto label_45a5a8;
        case 0x45a5acu: goto label_45a5ac;
        case 0x45a5b0u: goto label_45a5b0;
        case 0x45a5b4u: goto label_45a5b4;
        case 0x45a5b8u: goto label_45a5b8;
        case 0x45a5bcu: goto label_45a5bc;
        case 0x45a5c0u: goto label_45a5c0;
        case 0x45a5c4u: goto label_45a5c4;
        case 0x45a5c8u: goto label_45a5c8;
        case 0x45a5ccu: goto label_45a5cc;
        case 0x45a5d0u: goto label_45a5d0;
        case 0x45a5d4u: goto label_45a5d4;
        case 0x45a5d8u: goto label_45a5d8;
        case 0x45a5dcu: goto label_45a5dc;
        case 0x45a5e0u: goto label_45a5e0;
        case 0x45a5e4u: goto label_45a5e4;
        case 0x45a5e8u: goto label_45a5e8;
        case 0x45a5ecu: goto label_45a5ec;
        case 0x45a5f0u: goto label_45a5f0;
        case 0x45a5f4u: goto label_45a5f4;
        case 0x45a5f8u: goto label_45a5f8;
        case 0x45a5fcu: goto label_45a5fc;
        case 0x45a600u: goto label_45a600;
        case 0x45a604u: goto label_45a604;
        case 0x45a608u: goto label_45a608;
        case 0x45a60cu: goto label_45a60c;
        case 0x45a610u: goto label_45a610;
        case 0x45a614u: goto label_45a614;
        case 0x45a618u: goto label_45a618;
        case 0x45a61cu: goto label_45a61c;
        case 0x45a620u: goto label_45a620;
        case 0x45a624u: goto label_45a624;
        case 0x45a628u: goto label_45a628;
        case 0x45a62cu: goto label_45a62c;
        case 0x45a630u: goto label_45a630;
        case 0x45a634u: goto label_45a634;
        case 0x45a638u: goto label_45a638;
        case 0x45a63cu: goto label_45a63c;
        case 0x45a640u: goto label_45a640;
        case 0x45a644u: goto label_45a644;
        case 0x45a648u: goto label_45a648;
        case 0x45a64cu: goto label_45a64c;
        case 0x45a650u: goto label_45a650;
        case 0x45a654u: goto label_45a654;
        case 0x45a658u: goto label_45a658;
        case 0x45a65cu: goto label_45a65c;
        case 0x45a660u: goto label_45a660;
        case 0x45a664u: goto label_45a664;
        case 0x45a668u: goto label_45a668;
        case 0x45a66cu: goto label_45a66c;
        case 0x45a670u: goto label_45a670;
        case 0x45a674u: goto label_45a674;
        case 0x45a678u: goto label_45a678;
        case 0x45a67cu: goto label_45a67c;
        case 0x45a680u: goto label_45a680;
        case 0x45a684u: goto label_45a684;
        case 0x45a688u: goto label_45a688;
        case 0x45a68cu: goto label_45a68c;
        case 0x45a690u: goto label_45a690;
        case 0x45a694u: goto label_45a694;
        case 0x45a698u: goto label_45a698;
        case 0x45a69cu: goto label_45a69c;
        case 0x45a6a0u: goto label_45a6a0;
        case 0x45a6a4u: goto label_45a6a4;
        case 0x45a6a8u: goto label_45a6a8;
        case 0x45a6acu: goto label_45a6ac;
        case 0x45a6b0u: goto label_45a6b0;
        case 0x45a6b4u: goto label_45a6b4;
        case 0x45a6b8u: goto label_45a6b8;
        case 0x45a6bcu: goto label_45a6bc;
        case 0x45a6c0u: goto label_45a6c0;
        case 0x45a6c4u: goto label_45a6c4;
        case 0x45a6c8u: goto label_45a6c8;
        case 0x45a6ccu: goto label_45a6cc;
        default: break;
    }

    ctx->pc = 0x45a560u;

label_45a560:
    // 0x45a560: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x45a560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
label_45a564:
    // 0x45a564: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x45a564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_45a568:
    // 0x45a568: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x45a568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_45a56c:
    // 0x45a56c: 0xafa40160  sw          $a0, 0x160($sp)
    ctx->pc = 0x45a56cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 4));
label_45a570:
    // 0x45a570: 0xafa50170  sw          $a1, 0x170($sp)
    ctx->pc = 0x45a570u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 5));
label_45a574:
    // 0x45a574: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x45a574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_45a578:
    // 0x45a578: 0x2c420004  sltiu       $v0, $v0, 0x4
    ctx->pc = 0x45a578u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_45a57c:
    // 0x45a57c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x45a57cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_45a580:
    // 0x45a580: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_45a584:
    if (ctx->pc == 0x45A584u) {
        ctx->pc = 0x45A588u;
        goto label_45a588;
    }
    ctx->pc = 0x45A580u;
    {
        const bool branch_taken_0x45a580 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x45a580) {
            ctx->pc = 0x45A630u;
            goto label_45a630;
        }
    }
    ctx->pc = 0x45A588u;
label_45a588:
    // 0x45a588: 0x8f82b13c  lw          $v0, -0x4EC4($gp)
    ctx->pc = 0x45a588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947132)));
label_45a58c:
    // 0x45a58c: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_45a590:
    if (ctx->pc == 0x45A590u) {
        ctx->pc = 0x45A594u;
        goto label_45a594;
    }
    ctx->pc = 0x45A58Cu;
    {
        const bool branch_taken_0x45a58c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45a58c) {
            ctx->pc = 0x45A630u;
            goto label_45a630;
        }
    }
    ctx->pc = 0x45A594u;
label_45a594:
    // 0x45a594: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x45a594u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_45a598:
    // 0x45a598: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x45a598u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_45a59c:
    // 0x45a59c: 0x27a60150  addiu       $a2, $sp, 0x150
    ctx->pc = 0x45a59cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_45a5a0:
    // 0x45a5a0: 0xc115ee8  jal         func_457BA0
label_45a5a4:
    if (ctx->pc == 0x45A5A4u) {
        ctx->pc = 0x45A5A8u;
        goto label_45a5a8;
    }
    ctx->pc = 0x45A5A0u;
    SET_GPR_U32(ctx, 31, 0x45A5A8u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x45A5A0u, 0x45A5A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45A5A8u;
label_45a5a8:
    // 0x45a5a8: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_45a5ac:
    if (ctx->pc == 0x45A5ACu) {
        ctx->pc = 0x45A5B0u;
        goto label_45a5b0;
    }
    ctx->pc = 0x45A5A8u;
    {
        const bool branch_taken_0x45a5a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45a5a8) {
            ctx->pc = 0x45A630u;
            goto label_45a630;
        }
    }
    ctx->pc = 0x45A5B0u;
label_45a5b0:
    // 0x45a5b0: 0x8fa20158  lw          $v0, 0x158($sp)
    ctx->pc = 0x45a5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
label_45a5b4:
    // 0x45a5b4: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_45a5b8:
    if (ctx->pc == 0x45A5B8u) {
        ctx->pc = 0x45A5BCu;
        goto label_45a5bc;
    }
    ctx->pc = 0x45A5B4u;
    {
        const bool branch_taken_0x45a5b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45a5b4) {
            ctx->pc = 0x45A630u;
            goto label_45a630;
        }
    }
    ctx->pc = 0x45A5BCu;
label_45a5bc:
    // 0x45a5bc: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x45a5bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_45a5c0:
    // 0x45a5c0: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x45a5c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_45a5c4:
    // 0x45a5c4: 0x8fa60154  lw          $a2, 0x154($sp)
    ctx->pc = 0x45a5c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
label_45a5c8:
    // 0x45a5c8: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x45a5c8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_45a5cc:
    // 0x45a5cc: 0x24e7ea30  addiu       $a3, $a3, -0x15D0
    ctx->pc = 0x45a5ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294961712));
label_45a5d0:
    // 0x45a5d0: 0x24080134  addiu       $t0, $zero, 0x134
    ctx->pc = 0x45a5d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 308));
label_45a5d4:
    // 0x45a5d4: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x45a5d4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_45a5d8:
    // 0x45a5d8: 0x2529ea48  addiu       $t1, $t1, -0x15B8
    ctx->pc = 0x45a5d8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294961736));
label_45a5dc:
    // 0x45a5dc: 0xc113940  jal         func_44E500
label_45a5e0:
    if (ctx->pc == 0x45A5E0u) {
        ctx->pc = 0x45A5E4u;
        goto label_45a5e4;
    }
    ctx->pc = 0x45A5DCu;
    SET_GPR_U32(ctx, 31, 0x45A5E4u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x45A5DCu, 0x45A5E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45A5E4u;
label_45a5e4:
    // 0x45a5e4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x45a5e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_45a5e8:
    // 0x45a5e8: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x45a5e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_45a5ec:
    // 0x45a5ec: 0x24a5ea60  addiu       $a1, $a1, -0x15A0
    ctx->pc = 0x45a5ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
label_45a5f0:
    // 0x45a5f0: 0xc115c24  jal         func_457090
label_45a5f4:
    if (ctx->pc == 0x45A5F4u) {
        ctx->pc = 0x45A5F8u;
        goto label_45a5f8;
    }
    ctx->pc = 0x45A5F0u;
    SET_GPR_U32(ctx, 31, 0x45A5F8u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x45A5F0u, 0x45A5F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45A5F8u;
label_45a5f8:
    // 0x45a5f8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x45a5f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_45a5fc:
    // 0x45a5fc: 0x8fa20158  lw          $v0, 0x158($sp)
    ctx->pc = 0x45a5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
label_45a600:
    // 0x45a600: 0x40f809  jalr        $v0
label_45a604:
    if (ctx->pc == 0x45A604u) {
        ctx->pc = 0x45A608u;
        goto label_45a608;
    }
    ctx->pc = 0x45A600u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x45A608u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45A600u, 0x45A608u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x45A608u;
label_45a608:
    // 0x45a608: 0xaf82b13c  sw          $v0, -0x4EC4($gp)
    ctx->pc = 0x45a608u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947132), GPR_U32(ctx, 2));
label_45a60c:
    // 0x45a60c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x45a60cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_45a610:
    // 0x45a610: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_45a614:
    if (ctx->pc == 0x45A614u) {
        ctx->pc = 0x45A618u;
        goto label_45a618;
    }
    ctx->pc = 0x45A610u;
    {
        const bool branch_taken_0x45a610 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45a610) {
            ctx->pc = 0x45A620u;
            goto label_45a620;
        }
    }
    ctx->pc = 0x45A618u;
label_45a618:
    // 0x45a618: 0xd  break       0
    ctx->pc = 0x45a618u;
    runtime->handleBreak(rdram, ctx);
label_45a61c:
    // 0x45a61c: 0x0  nop
    ctx->pc = 0x45a61cu;
    // NOP
label_45a620:
    // 0x45a620: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x45a620u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_45a624:
    // 0x45a624: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x45a624u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_45a628:
    // 0x45a628: 0xc11392c  jal         func_44E4B0
label_45a62c:
    if (ctx->pc == 0x45A62Cu) {
        ctx->pc = 0x45A630u;
        goto label_45a630;
    }
    ctx->pc = 0x45A628u;
    SET_GPR_U32(ctx, 31, 0x45A630u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x45A628u, 0x45A630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45A630u;
label_45a630:
    // 0x45a630: 0x8fa40170  lw          $a0, 0x170($sp)
    ctx->pc = 0x45a630u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_45a634:
    // 0x45a634: 0xc116ea4  jal         func_45BA90
label_45a638:
    if (ctx->pc == 0x45A638u) {
        ctx->pc = 0x45A63Cu;
        goto label_45a63c;
    }
    ctx->pc = 0x45A634u;
    SET_GPR_U32(ctx, 31, 0x45A63Cu);
    ctx->pc = 0x45BA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45BA90u, 0x45A634u, 0x45A63Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45A63Cu;
label_45a63c:
    // 0x45a63c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x45a63cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_45a640:
    // 0x45a640: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
label_45a644:
    if (ctx->pc == 0x45A644u) {
        ctx->pc = 0x45A648u;
        goto label_45a648;
    }
    ctx->pc = 0x45A640u;
    {
        const bool branch_taken_0x45a640 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x45a640) {
            ctx->pc = 0x45A654u;
            goto label_45a654;
        }
    }
    ctx->pc = 0x45A648u;
label_45a648:
    // 0x45a648: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x45a648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_45a64c:
    // 0x45a64c: 0x10000018  b           . + 4 + (0x18 << 2)
label_45a650:
    if (ctx->pc == 0x45A650u) {
        ctx->pc = 0x45A654u;
        goto label_45a654;
    }
    ctx->pc = 0x45A64Cu;
    {
        const bool branch_taken_0x45a64c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45a64c) {
            ctx->pc = 0x45A6B0u;
            goto label_45a6b0;
        }
    }
    ctx->pc = 0x45A654u;
label_45a654:
    // 0x45a654: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x45a654u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_45a658:
    // 0x45a658: 0x10000011  b           . + 4 + (0x11 << 2)
label_45a65c:
    if (ctx->pc == 0x45A65Cu) {
        ctx->pc = 0x45A660u;
        goto label_45a660;
    }
    ctx->pc = 0x45A658u;
    {
        const bool branch_taken_0x45a658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45a658) {
            ctx->pc = 0x45A6A0u;
            goto label_45a6a0;
        }
    }
    ctx->pc = 0x45A660u;
label_45a660:
    // 0x45a660: 0xafb00140  sw          $s0, 0x140($sp)
    ctx->pc = 0x45a660u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 16));
label_45a664:
    // 0x45a664: 0x8fa40170  lw          $a0, 0x170($sp)
    ctx->pc = 0x45a664u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_45a668:
    // 0x45a668: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x45a668u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_45a66c:
    // 0x45a66c: 0xc116e00  jal         func_45B800
label_45a670:
    if (ctx->pc == 0x45A670u) {
        ctx->pc = 0x45A674u;
        goto label_45a674;
    }
    ctx->pc = 0x45A66Cu;
    SET_GPR_U32(ctx, 31, 0x45A674u);
    ctx->pc = 0x45B800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45B800u, 0x45A66Cu, 0x45A674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45A674u;
label_45a674:
    // 0x45a674: 0xafa20144  sw          $v0, 0x144($sp)
    ctx->pc = 0x45a674u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 2));
label_45a678:
    // 0x45a678: 0x8fa40170  lw          $a0, 0x170($sp)
    ctx->pc = 0x45a678u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_45a67c:
    // 0x45a67c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x45a67cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_45a680:
    // 0x45a680: 0xc116d44  jal         func_45B510
label_45a684:
    if (ctx->pc == 0x45A684u) {
        ctx->pc = 0x45A688u;
        goto label_45a688;
    }
    ctx->pc = 0x45A680u;
    SET_GPR_U32(ctx, 31, 0x45A688u);
    ctx->pc = 0x45B510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45B510u, 0x45A680u, 0x45A688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45A688u;
label_45a688:
    // 0x45a688: 0xafa20148  sw          $v0, 0x148($sp)
    ctx->pc = 0x45a688u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 2));
label_45a68c:
    // 0x45a68c: 0x8fa40160  lw          $a0, 0x160($sp)
    ctx->pc = 0x45a68cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_45a690:
    // 0x45a690: 0x27a50140  addiu       $a1, $sp, 0x140
    ctx->pc = 0x45a690u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_45a694:
    // 0x45a694: 0xc1168a8  jal         func_45A2A0
label_45a698:
    if (ctx->pc == 0x45A698u) {
        ctx->pc = 0x45A69Cu;
        goto label_45a69c;
    }
    ctx->pc = 0x45A694u;
    SET_GPR_U32(ctx, 31, 0x45A69Cu);
    ctx->pc = 0x45A2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45A2A0u, 0x45A694u, 0x45A69Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45A69Cu;
label_45a69c:
    // 0x45a69c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x45a69cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_45a6a0:
    // 0x45a6a0: 0x2e010022  sltiu       $at, $s0, 0x22
    ctx->pc = 0x45a6a0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)34) ? 1 : 0);
label_45a6a4:
    // 0x45a6a4: 0x1420ffee  bnez        $at, . + 4 + (-0x12 << 2)
label_45a6a8:
    if (ctx->pc == 0x45A6A8u) {
        ctx->pc = 0x45A6ACu;
        goto label_45a6ac;
    }
    ctx->pc = 0x45A6A4u;
    {
        const bool branch_taken_0x45a6a4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x45a6a4) {
            ctx->pc = 0x45A660u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45a660;
        }
    }
    ctx->pc = 0x45A6ACu;
label_45a6ac:
    // 0x45a6ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x45a6acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_45a6b0:
    // 0x45a6b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x45a6b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_45a6b4:
    // 0x45a6b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x45a6b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_45a6b8:
    // 0x45a6b8: 0x27bd0180  addiu       $sp, $sp, 0x180
    ctx->pc = 0x45a6b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_45a6bc:
    // 0x45a6bc: 0x3e00008  jr          $ra
label_45a6c0:
    if (ctx->pc == 0x45A6C0u) {
        ctx->pc = 0x45A6C4u;
        goto label_45a6c4;
    }
    ctx->pc = 0x45A6BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45A6BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x45A6C4u;
label_45a6c4:
    // 0x45a6c4: 0x0  nop
    ctx->pc = 0x45a6c4u;
    // NOP
label_45a6c8:
    // 0x45a6c8: 0x0  nop
    ctx->pc = 0x45a6c8u;
    // NOP
label_45a6cc:
    // 0x45a6cc: 0x0  nop
    ctx->pc = 0x45a6ccu;
    // NOP
    ctx->pc = 0x45a6d0u;
}
