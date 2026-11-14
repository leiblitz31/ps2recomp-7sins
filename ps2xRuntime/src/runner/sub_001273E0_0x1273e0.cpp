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

// Function: sub_001273E0
// Address: 0x1273e0 - 0x1274e0
void sub_001273E0_0x1273e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001273E0_0x1273e0");
#endif

    switch (ctx->pc) {
        case 0x1273e0u: goto label_1273e0;
        case 0x1273e4u: goto label_1273e4;
        case 0x1273e8u: goto label_1273e8;
        case 0x1273ecu: goto label_1273ec;
        case 0x1273f0u: goto label_1273f0;
        case 0x1273f4u: goto label_1273f4;
        case 0x1273f8u: goto label_1273f8;
        case 0x1273fcu: goto label_1273fc;
        case 0x127400u: goto label_127400;
        case 0x127404u: goto label_127404;
        case 0x127408u: goto label_127408;
        case 0x12740cu: goto label_12740c;
        case 0x127410u: goto label_127410;
        case 0x127414u: goto label_127414;
        case 0x127418u: goto label_127418;
        case 0x12741cu: goto label_12741c;
        case 0x127420u: goto label_127420;
        case 0x127424u: goto label_127424;
        case 0x127428u: goto label_127428;
        case 0x12742cu: goto label_12742c;
        case 0x127430u: goto label_127430;
        case 0x127434u: goto label_127434;
        case 0x127438u: goto label_127438;
        case 0x12743cu: goto label_12743c;
        case 0x127440u: goto label_127440;
        case 0x127444u: goto label_127444;
        case 0x127448u: goto label_127448;
        case 0x12744cu: goto label_12744c;
        case 0x127450u: goto label_127450;
        case 0x127454u: goto label_127454;
        case 0x127458u: goto label_127458;
        case 0x12745cu: goto label_12745c;
        case 0x127460u: goto label_127460;
        case 0x127464u: goto label_127464;
        case 0x127468u: goto label_127468;
        case 0x12746cu: goto label_12746c;
        case 0x127470u: goto label_127470;
        case 0x127474u: goto label_127474;
        case 0x127478u: goto label_127478;
        case 0x12747cu: goto label_12747c;
        case 0x127480u: goto label_127480;
        case 0x127484u: goto label_127484;
        case 0x127488u: goto label_127488;
        case 0x12748cu: goto label_12748c;
        case 0x127490u: goto label_127490;
        case 0x127494u: goto label_127494;
        case 0x127498u: goto label_127498;
        case 0x12749cu: goto label_12749c;
        case 0x1274a0u: goto label_1274a0;
        case 0x1274a4u: goto label_1274a4;
        case 0x1274a8u: goto label_1274a8;
        case 0x1274acu: goto label_1274ac;
        case 0x1274b0u: goto label_1274b0;
        case 0x1274b4u: goto label_1274b4;
        case 0x1274b8u: goto label_1274b8;
        case 0x1274bcu: goto label_1274bc;
        case 0x1274c0u: goto label_1274c0;
        case 0x1274c4u: goto label_1274c4;
        case 0x1274c8u: goto label_1274c8;
        case 0x1274ccu: goto label_1274cc;
        case 0x1274d0u: goto label_1274d0;
        case 0x1274d4u: goto label_1274d4;
        case 0x1274d8u: goto label_1274d8;
        case 0x1274dcu: goto label_1274dc;
        default: break;
    }

    ctx->pc = 0x1273e0u;

label_1273e0:
    // 0x1273e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1273e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1273e4:
    // 0x1273e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1273e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1273e8:
    // 0x1273e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1273e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1273ec:
    // 0x1273ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1273ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1273f0:
    // 0x1273f0: 0xa3a40030  sb          $a0, 0x30($sp)
    ctx->pc = 0x1273f0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 4));
label_1273f4:
    // 0x1273f4: 0x93a30030  lbu         $v1, 0x30($sp)
    ctx->pc = 0x1273f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
label_1273f8:
    // 0x1273f8: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1273f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1273fc:
    // 0x1273fc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1273fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_127400:
    // 0x127400: 0x14830018  bne         $a0, $v1, . + 4 + (0x18 << 2)
label_127404:
    if (ctx->pc == 0x127404u) {
        ctx->pc = 0x127408u;
        goto label_127408;
    }
    ctx->pc = 0x127400u;
    {
        const bool branch_taken_0x127400 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x127400) {
            ctx->pc = 0x127464u;
            goto label_127464;
        }
    }
    ctx->pc = 0x127408u;
label_127408:
    // 0x127408: 0x8f84b9d8  lw          $a0, -0x4628($gp)
    ctx->pc = 0x127408u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949336)));
label_12740c:
    // 0x12740c: 0xc050b24  jal         func_142C90
label_127410:
    if (ctx->pc == 0x127410u) {
        ctx->pc = 0x127414u;
        goto label_127414;
    }
    ctx->pc = 0x12740Cu;
    SET_GPR_U32(ctx, 31, 0x127414u);
    ctx->pc = 0x142C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x142C90u, 0x12740Cu, 0x127414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127414u;
label_127414:
    // 0x127414: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x127414u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_127418:
    // 0x127418: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x127418u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_12741c:
    // 0x12741c: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x12741cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_127420:
    // 0x127420: 0x320f809  jalr        $t9
label_127424:
    if (ctx->pc == 0x127424u) {
        ctx->pc = 0x127428u;
        goto label_127428;
    }
    ctx->pc = 0x127420u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x127428u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x127420u, 0x127428u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x127428u;
label_127428:
    // 0x127428: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x127428u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12742c:
    // 0x12742c: 0x16200023  bnez        $s1, . + 4 + (0x23 << 2)
label_127430:
    if (ctx->pc == 0x127430u) {
        ctx->pc = 0x127434u;
        goto label_127434;
    }
    ctx->pc = 0x12742Cu;
    {
        const bool branch_taken_0x12742c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x12742c) {
            ctx->pc = 0x1274BCu;
            goto label_1274bc;
        }
    }
    ctx->pc = 0x127434u;
label_127434:
    // 0x127434: 0x8f84b9d8  lw          $a0, -0x4628($gp)
    ctx->pc = 0x127434u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949336)));
label_127438:
    // 0x127438: 0xc050b24  jal         func_142C90
label_12743c:
    if (ctx->pc == 0x12743Cu) {
        ctx->pc = 0x127440u;
        goto label_127440;
    }
    ctx->pc = 0x127438u;
    SET_GPR_U32(ctx, 31, 0x127440u);
    ctx->pc = 0x142C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x142C90u, 0x127438u, 0x127440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127440u;
label_127440:
    // 0x127440: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x127440u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_127444:
    // 0x127444: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x127444u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_127448:
    // 0x127448: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x127448u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12744c:
    // 0x12744c: 0xc041484  jal         func_105210
label_127450:
    if (ctx->pc == 0x127450u) {
        ctx->pc = 0x127454u;
        goto label_127454;
    }
    ctx->pc = 0x12744Cu;
    SET_GPR_U32(ctx, 31, 0x127454u);
    ctx->pc = 0x105210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105210u, 0x12744Cu, 0x127454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127454u;
label_127454:
    // 0x127454: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x127454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_127458:
    // 0x127458: 0xa383b9e4  sb          $v1, -0x461C($gp)
    ctx->pc = 0x127458u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294949348), (uint8_t)GPR_U32(ctx, 3));
label_12745c:
    // 0x12745c: 0x10000017  b           . + 4 + (0x17 << 2)
label_127460:
    if (ctx->pc == 0x127460u) {
        ctx->pc = 0x127464u;
        goto label_127464;
    }
    ctx->pc = 0x12745Cu;
    {
        const bool branch_taken_0x12745c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12745c) {
            ctx->pc = 0x1274BCu;
            goto label_1274bc;
        }
    }
    ctx->pc = 0x127464u;
label_127464:
    // 0x127464: 0x9383b9e4  lbu         $v1, -0x461C($gp)
    ctx->pc = 0x127464u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294949348)));
label_127468:
    // 0x127468: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x127468u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_12746c:
    // 0x12746c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x12746cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_127470:
    // 0x127470: 0x14830012  bne         $a0, $v1, . + 4 + (0x12 << 2)
label_127474:
    if (ctx->pc == 0x127474u) {
        ctx->pc = 0x127478u;
        goto label_127478;
    }
    ctx->pc = 0x127470u;
    {
        const bool branch_taken_0x127470 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x127470) {
            ctx->pc = 0x1274BCu;
            goto label_1274bc;
        }
    }
    ctx->pc = 0x127478u;
label_127478:
    // 0x127478: 0x8f84b9d8  lw          $a0, -0x4628($gp)
    ctx->pc = 0x127478u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949336)));
label_12747c:
    // 0x12747c: 0xc050b24  jal         func_142C90
label_127480:
    if (ctx->pc == 0x127480u) {
        ctx->pc = 0x127484u;
        goto label_127484;
    }
    ctx->pc = 0x12747Cu;
    SET_GPR_U32(ctx, 31, 0x127484u);
    ctx->pc = 0x142C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x142C90u, 0x12747Cu, 0x127484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127484u;
label_127484:
    // 0x127484: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x127484u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_127488:
    // 0x127488: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x127488u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_12748c:
    // 0x12748c: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x12748cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_127490:
    // 0x127490: 0x320f809  jalr        $t9
label_127494:
    if (ctx->pc == 0x127494u) {
        ctx->pc = 0x127498u;
        goto label_127498;
    }
    ctx->pc = 0x127490u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x127498u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x127490u, 0x127498u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x127498u;
label_127498:
    // 0x127498: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x127498u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12749c:
    // 0x12749c: 0x8f84b9d8  lw          $a0, -0x4628($gp)
    ctx->pc = 0x12749cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949336)));
label_1274a0:
    // 0x1274a0: 0xc050b24  jal         func_142C90
label_1274a4:
    if (ctx->pc == 0x1274A4u) {
        ctx->pc = 0x1274A8u;
        goto label_1274a8;
    }
    ctx->pc = 0x1274A0u;
    SET_GPR_U32(ctx, 31, 0x1274A8u);
    ctx->pc = 0x142C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x142C90u, 0x1274A0u, 0x1274A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1274A8u;
label_1274a8:
    // 0x1274a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1274a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1274ac:
    // 0x1274ac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1274acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1274b0:
    // 0x1274b0: 0xc041c7c  jal         func_1071F0
label_1274b4:
    if (ctx->pc == 0x1274B4u) {
        ctx->pc = 0x1274B8u;
        goto label_1274b8;
    }
    ctx->pc = 0x1274B0u;
    SET_GPR_U32(ctx, 31, 0x1274B8u);
    ctx->pc = 0x1071F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1071F0u, 0x1274B0u, 0x1274B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1274B8u;
label_1274b8:
    // 0x1274b8: 0xa380b9e4  sb          $zero, -0x461C($gp)
    ctx->pc = 0x1274b8u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294949348), (uint8_t)GPR_U32(ctx, 0));
label_1274bc:
    // 0x1274bc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1274bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1274c0:
    // 0x1274c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1274c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1274c4:
    // 0x1274c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1274c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1274c8:
    // 0x1274c8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1274c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1274cc:
    // 0x1274cc: 0x3e00008  jr          $ra
label_1274d0:
    if (ctx->pc == 0x1274D0u) {
        ctx->pc = 0x1274D4u;
        goto label_1274d4;
    }
    ctx->pc = 0x1274CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1274CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1274D4u;
label_1274d4:
    // 0x1274d4: 0x0  nop
    ctx->pc = 0x1274d4u;
    // NOP
label_1274d8:
    // 0x1274d8: 0x0  nop
    ctx->pc = 0x1274d8u;
    // NOP
label_1274dc:
    // 0x1274dc: 0x0  nop
    ctx->pc = 0x1274dcu;
    // NOP
    ctx->pc = 0x1274e0u;
}
