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

// Function: sub_001365A0
// Address: 0x1365a0 - 0x136710
void sub_001365A0_0x1365a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001365A0_0x1365a0");
#endif

    switch (ctx->pc) {
        case 0x1365a0u: goto label_1365a0;
        case 0x1365a4u: goto label_1365a4;
        case 0x1365a8u: goto label_1365a8;
        case 0x1365acu: goto label_1365ac;
        case 0x1365b0u: goto label_1365b0;
        case 0x1365b4u: goto label_1365b4;
        case 0x1365b8u: goto label_1365b8;
        case 0x1365bcu: goto label_1365bc;
        case 0x1365c0u: goto label_1365c0;
        case 0x1365c4u: goto label_1365c4;
        case 0x1365c8u: goto label_1365c8;
        case 0x1365ccu: goto label_1365cc;
        case 0x1365d0u: goto label_1365d0;
        case 0x1365d4u: goto label_1365d4;
        case 0x1365d8u: goto label_1365d8;
        case 0x1365dcu: goto label_1365dc;
        case 0x1365e0u: goto label_1365e0;
        case 0x1365e4u: goto label_1365e4;
        case 0x1365e8u: goto label_1365e8;
        case 0x1365ecu: goto label_1365ec;
        case 0x1365f0u: goto label_1365f0;
        case 0x1365f4u: goto label_1365f4;
        case 0x1365f8u: goto label_1365f8;
        case 0x1365fcu: goto label_1365fc;
        case 0x136600u: goto label_136600;
        case 0x136604u: goto label_136604;
        case 0x136608u: goto label_136608;
        case 0x13660cu: goto label_13660c;
        case 0x136610u: goto label_136610;
        case 0x136614u: goto label_136614;
        case 0x136618u: goto label_136618;
        case 0x13661cu: goto label_13661c;
        case 0x136620u: goto label_136620;
        case 0x136624u: goto label_136624;
        case 0x136628u: goto label_136628;
        case 0x13662cu: goto label_13662c;
        case 0x136630u: goto label_136630;
        case 0x136634u: goto label_136634;
        case 0x136638u: goto label_136638;
        case 0x13663cu: goto label_13663c;
        case 0x136640u: goto label_136640;
        case 0x136644u: goto label_136644;
        case 0x136648u: goto label_136648;
        case 0x13664cu: goto label_13664c;
        case 0x136650u: goto label_136650;
        case 0x136654u: goto label_136654;
        case 0x136658u: goto label_136658;
        case 0x13665cu: goto label_13665c;
        case 0x136660u: goto label_136660;
        case 0x136664u: goto label_136664;
        case 0x136668u: goto label_136668;
        case 0x13666cu: goto label_13666c;
        case 0x136670u: goto label_136670;
        case 0x136674u: goto label_136674;
        case 0x136678u: goto label_136678;
        case 0x13667cu: goto label_13667c;
        case 0x136680u: goto label_136680;
        case 0x136684u: goto label_136684;
        case 0x136688u: goto label_136688;
        case 0x13668cu: goto label_13668c;
        case 0x136690u: goto label_136690;
        case 0x136694u: goto label_136694;
        case 0x136698u: goto label_136698;
        case 0x13669cu: goto label_13669c;
        case 0x1366a0u: goto label_1366a0;
        case 0x1366a4u: goto label_1366a4;
        case 0x1366a8u: goto label_1366a8;
        case 0x1366acu: goto label_1366ac;
        case 0x1366b0u: goto label_1366b0;
        case 0x1366b4u: goto label_1366b4;
        case 0x1366b8u: goto label_1366b8;
        case 0x1366bcu: goto label_1366bc;
        case 0x1366c0u: goto label_1366c0;
        case 0x1366c4u: goto label_1366c4;
        case 0x1366c8u: goto label_1366c8;
        case 0x1366ccu: goto label_1366cc;
        case 0x1366d0u: goto label_1366d0;
        case 0x1366d4u: goto label_1366d4;
        case 0x1366d8u: goto label_1366d8;
        case 0x1366dcu: goto label_1366dc;
        case 0x1366e0u: goto label_1366e0;
        case 0x1366e4u: goto label_1366e4;
        case 0x1366e8u: goto label_1366e8;
        case 0x1366ecu: goto label_1366ec;
        case 0x1366f0u: goto label_1366f0;
        case 0x1366f4u: goto label_1366f4;
        case 0x1366f8u: goto label_1366f8;
        case 0x1366fcu: goto label_1366fc;
        case 0x136700u: goto label_136700;
        case 0x136704u: goto label_136704;
        case 0x136708u: goto label_136708;
        case 0x13670cu: goto label_13670c;
        default: break;
    }

    ctx->pc = 0x1365a0u;

label_1365a0:
    // 0x1365a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1365a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1365a4:
    // 0x1365a4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1365a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1365a8:
    // 0x1365a8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1365a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1365ac:
    // 0x1365ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1365acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1365b0:
    // 0x1365b0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1365b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1365b4:
    // 0x1365b4: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x1365b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
label_1365b8:
    // 0x1365b8: 0x8f83bb70  lw          $v1, -0x4490($gp)
    ctx->pc = 0x1365b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_1365bc:
    // 0x1365bc: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x1365bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1365c0:
    // 0x1365c0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1365c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1365c4:
    // 0x1365c4: 0x0  nop
    ctx->pc = 0x1365c4u;
    // NOP
label_1365c8:
    // 0x1365c8: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1365c8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1365cc:
    // 0x1365cc: 0x45010049  bc1t        . + 4 + (0x49 << 2)
label_1365d0:
    if (ctx->pc == 0x1365D0u) {
        ctx->pc = 0x1365D4u;
        goto label_1365d4;
    }
    ctx->pc = 0x1365CCu;
    {
        const bool branch_taken_0x1365cc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1365cc) {
            ctx->pc = 0x1366F4u;
            goto label_1366f4;
        }
    }
    ctx->pc = 0x1365D4u;
label_1365d4:
    // 0x1365d4: 0xc08ef50  jal         func_23BD40
label_1365d8:
    if (ctx->pc == 0x1365D8u) {
        ctx->pc = 0x1365DCu;
        goto label_1365dc;
    }
    ctx->pc = 0x1365D4u;
    SET_GPR_U32(ctx, 31, 0x1365DCu);
    ctx->pc = 0x23BD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BD40u, 0x1365D4u, 0x1365DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1365DCu;
label_1365dc:
    // 0x1365dc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1365dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1365e0:
    // 0x1365e0: 0x10120044  beq         $zero, $s2, . + 4 + (0x44 << 2)
label_1365e4:
    if (ctx->pc == 0x1365E4u) {
        ctx->pc = 0x1365E8u;
        goto label_1365e8;
    }
    ctx->pc = 0x1365E0u;
    {
        const bool branch_taken_0x1365e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 18));
        if (branch_taken_0x1365e0) {
            ctx->pc = 0x1366F4u;
            goto label_1366f4;
        }
    }
    ctx->pc = 0x1365E8u;
label_1365e8:
    // 0x1365e8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1365e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1365ec:
    // 0x1365ec: 0xc0406f0  jal         func_101BC0
label_1365f0:
    if (ctx->pc == 0x1365F0u) {
        ctx->pc = 0x1365F4u;
        goto label_1365f4;
    }
    ctx->pc = 0x1365ECu;
    SET_GPR_U32(ctx, 31, 0x1365F4u);
    ctx->pc = 0x101BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101BC0u, 0x1365ECu, 0x1365F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1365F4u;
label_1365f4:
    // 0x1365f4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1365f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1365f8:
    // 0x1365f8: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
label_1365fc:
    if (ctx->pc == 0x1365FCu) {
        ctx->pc = 0x136600u;
        goto label_136600;
    }
    ctx->pc = 0x1365F8u;
    {
        const bool branch_taken_0x1365f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1365f8) {
            ctx->pc = 0x136610u;
            goto label_136610;
        }
    }
    ctx->pc = 0x136600u;
label_136600:
    // 0x136600: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_136604:
    if (ctx->pc == 0x136604u) {
        ctx->pc = 0x136608u;
        goto label_136608;
    }
    ctx->pc = 0x136600u;
    {
        const bool branch_taken_0x136600 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x136600) {
            ctx->pc = 0x136610u;
            goto label_136610;
        }
    }
    ctx->pc = 0x136608u;
label_136608:
    // 0x136608: 0x1000003a  b           . + 4 + (0x3A << 2)
label_13660c:
    if (ctx->pc == 0x13660Cu) {
        ctx->pc = 0x136610u;
        goto label_136610;
    }
    ctx->pc = 0x136608u;
    {
        const bool branch_taken_0x136608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x136608) {
            ctx->pc = 0x1366F4u;
            goto label_1366f4;
        }
    }
    ctx->pc = 0x136610u;
label_136610:
    // 0x136610: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x136610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_136614:
    // 0x136614: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x136614u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_136618:
    // 0x136618: 0xc04da84  jal         func_136A10
label_13661c:
    if (ctx->pc == 0x13661Cu) {
        ctx->pc = 0x136620u;
        goto label_136620;
    }
    ctx->pc = 0x136618u;
    SET_GPR_U32(ctx, 31, 0x136620u);
    ctx->pc = 0x136A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136A10u, 0x136618u, 0x136620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136620u;
label_136620:
    // 0x136620: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x136620u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_136624:
    // 0x136624: 0x1000000b  b           . + 4 + (0xB << 2)
label_136628:
    if (ctx->pc == 0x136628u) {
        ctx->pc = 0x13662Cu;
        goto label_13662c;
    }
    ctx->pc = 0x136624u;
    {
        const bool branch_taken_0x136624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x136624) {
            ctx->pc = 0x136654u;
            goto label_136654;
        }
    }
    ctx->pc = 0x13662Cu;
label_13662c:
    // 0x13662c: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x13662cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_136630:
    // 0x136630: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x136630u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_136634:
    // 0x136634: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x136634u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_136638:
    // 0x136638: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x136638u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_13663c:
    // 0x13663c: 0x8e070008  lw          $a3, 0x8($s0)
    ctx->pc = 0x13663cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_136640:
    // 0x136640: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x136640u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_136644:
    // 0x136644: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x136644u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_136648:
    // 0x136648: 0x320f809  jalr        $t9
label_13664c:
    if (ctx->pc == 0x13664Cu) {
        ctx->pc = 0x136650u;
        goto label_136650;
    }
    ctx->pc = 0x136648u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x136650u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x136648u, 0x136650u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x136650u;
label_136650:
    // 0x136650: 0x2631000c  addiu       $s1, $s1, 0xC
    ctx->pc = 0x136650u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
label_136654:
    // 0x136654: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x136654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_136658:
    // 0x136658: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x136658u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_13665c:
    // 0x13665c: 0xc04da7c  jal         func_1369F0
label_136660:
    if (ctx->pc == 0x136660u) {
        ctx->pc = 0x136664u;
        goto label_136664;
    }
    ctx->pc = 0x13665Cu;
    SET_GPR_U32(ctx, 31, 0x136664u);
    ctx->pc = 0x1369F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1369F0u, 0x13665Cu, 0x136664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136664u;
label_136664:
    // 0x136664: 0x1622fff1  bne         $s1, $v0, . + 4 + (-0xF << 2)
label_136668:
    if (ctx->pc == 0x136668u) {
        ctx->pc = 0x13666Cu;
        goto label_13666c;
    }
    ctx->pc = 0x136664u;
    {
        const bool branch_taken_0x136664 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x136664) {
            ctx->pc = 0x13662Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13662c;
        }
    }
    ctx->pc = 0x13666Cu;
label_13666c:
    // 0x13666c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x13666cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_136670:
    // 0x136670: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x136670u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_136674:
    // 0x136674: 0xc04d9c4  jal         func_136710
label_136678:
    if (ctx->pc == 0x136678u) {
        ctx->pc = 0x13667Cu;
        goto label_13667c;
    }
    ctx->pc = 0x136674u;
    SET_GPR_U32(ctx, 31, 0x13667Cu);
    ctx->pc = 0x136710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136710u, 0x136674u, 0x13667Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13667Cu;
label_13667c:
    // 0x13667c: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x13667cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_136680:
    // 0x136680: 0x90630040  lbu         $v1, 0x40($v1)
    ctx->pc = 0x136680u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 64)));
label_136684:
    // 0x136684: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x136684u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_136688:
    // 0x136688: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x136688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13668c:
    // 0x13668c: 0x14830019  bne         $a0, $v1, . + 4 + (0x19 << 2)
label_136690:
    if (ctx->pc == 0x136690u) {
        ctx->pc = 0x136694u;
        goto label_136694;
    }
    ctx->pc = 0x13668Cu;
    {
        const bool branch_taken_0x13668c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x13668c) {
            ctx->pc = 0x1366F4u;
            goto label_1366f4;
        }
    }
    ctx->pc = 0x136694u;
label_136694:
    // 0x136694: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x136694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_136698:
    // 0x136698: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x136698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_13669c:
    // 0x13669c: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
label_1366a0:
    if (ctx->pc == 0x1366A0u) {
        ctx->pc = 0x1366A4u;
        goto label_1366a4;
    }
    ctx->pc = 0x13669Cu;
    {
        const bool branch_taken_0x13669c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13669c) {
            ctx->pc = 0x1366E8u;
            goto label_1366e8;
        }
    }
    ctx->pc = 0x1366A4u;
label_1366a4:
    // 0x1366a4: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x1366a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
label_1366a8:
    // 0x1366a8: 0xc047eb8  jal         func_11FAE0
label_1366ac:
    if (ctx->pc == 0x1366ACu) {
        ctx->pc = 0x1366B0u;
        goto label_1366b0;
    }
    ctx->pc = 0x1366A8u;
    SET_GPR_U32(ctx, 31, 0x1366B0u);
    ctx->pc = 0x11FAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FAE0u, 0x1366A8u, 0x1366B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1366B0u;
label_1366b0:
    // 0x1366b0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1366b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1366b4:
    // 0x1366b4: 0xc047eb0  jal         func_11FAC0
label_1366b8:
    if (ctx->pc == 0x1366B8u) {
        ctx->pc = 0x1366BCu;
        goto label_1366bc;
    }
    ctx->pc = 0x1366B4u;
    SET_GPR_U32(ctx, 31, 0x1366BCu);
    ctx->pc = 0x11FAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FAC0u, 0x1366B4u, 0x1366BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1366BCu;
label_1366bc:
    // 0x1366bc: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1366bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1366c0:
    // 0x1366c0: 0x8c64004c  lw          $a0, 0x4C($v1)
    ctx->pc = 0x1366c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_1366c4:
    // 0x1366c4: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1366c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1366c8:
    // 0x1366c8: 0x83001b  divu        $zero, $a0, $v1
    ctx->pc = 0x1366c8u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
label_1366cc:
    // 0x1366cc: 0x2010  mfhi        $a0
    ctx->pc = 0x1366ccu;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_1366d0:
    // 0x1366d0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1366d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1366d4:
    // 0x1366d4: 0x832004  sllv        $a0, $v1, $a0
    ctx->pc = 0x1366d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
label_1366d8:
    // 0x1366d8: 0x8c430028  lw          $v1, 0x28($v0)
    ctx->pc = 0x1366d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_1366dc:
    // 0x1366dc: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1366dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_1366e0:
    // 0x1366e0: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_1366e4:
    if (ctx->pc == 0x1366E4u) {
        ctx->pc = 0x1366E8u;
        goto label_1366e8;
    }
    ctx->pc = 0x1366E0u;
    {
        const bool branch_taken_0x1366e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1366e0) {
            ctx->pc = 0x1366F4u;
            goto label_1366f4;
        }
    }
    ctx->pc = 0x1366E8u;
label_1366e8:
    // 0x1366e8: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1366e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1366ec:
    // 0x1366ec: 0xc04dbc4  jal         func_136F10
label_1366f0:
    if (ctx->pc == 0x1366F0u) {
        ctx->pc = 0x1366F4u;
        goto label_1366f4;
    }
    ctx->pc = 0x1366ECu;
    SET_GPR_U32(ctx, 31, 0x1366F4u);
    ctx->pc = 0x136F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136F10u, 0x1366ECu, 0x1366F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1366F4u;
label_1366f4:
    // 0x1366f4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1366f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1366f8:
    // 0x1366f8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1366f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1366fc:
    // 0x1366fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1366fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_136700:
    // 0x136700: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x136700u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_136704:
    // 0x136704: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x136704u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_136708:
    // 0x136708: 0x3e00008  jr          $ra
label_13670c:
    if (ctx->pc == 0x13670Cu) {
        ctx->pc = 0x136710u;
        goto label_fallthrough_0x136708;
    }
    ctx->pc = 0x136708u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x136708u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x136708:
    ctx->pc = 0x136710u;
}
