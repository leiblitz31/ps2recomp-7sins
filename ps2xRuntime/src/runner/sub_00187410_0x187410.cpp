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

// Function: sub_00187410
// Address: 0x187410 - 0x1874c0
void sub_00187410_0x187410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00187410_0x187410");
#endif

    switch (ctx->pc) {
        case 0x187410u: goto label_187410;
        case 0x187414u: goto label_187414;
        case 0x187418u: goto label_187418;
        case 0x18741cu: goto label_18741c;
        case 0x187420u: goto label_187420;
        case 0x187424u: goto label_187424;
        case 0x187428u: goto label_187428;
        case 0x18742cu: goto label_18742c;
        case 0x187430u: goto label_187430;
        case 0x187434u: goto label_187434;
        case 0x187438u: goto label_187438;
        case 0x18743cu: goto label_18743c;
        case 0x187440u: goto label_187440;
        case 0x187444u: goto label_187444;
        case 0x187448u: goto label_187448;
        case 0x18744cu: goto label_18744c;
        case 0x187450u: goto label_187450;
        case 0x187454u: goto label_187454;
        case 0x187458u: goto label_187458;
        case 0x18745cu: goto label_18745c;
        case 0x187460u: goto label_187460;
        case 0x187464u: goto label_187464;
        case 0x187468u: goto label_187468;
        case 0x18746cu: goto label_18746c;
        case 0x187470u: goto label_187470;
        case 0x187474u: goto label_187474;
        case 0x187478u: goto label_187478;
        case 0x18747cu: goto label_18747c;
        case 0x187480u: goto label_187480;
        case 0x187484u: goto label_187484;
        case 0x187488u: goto label_187488;
        case 0x18748cu: goto label_18748c;
        case 0x187490u: goto label_187490;
        case 0x187494u: goto label_187494;
        case 0x187498u: goto label_187498;
        case 0x18749cu: goto label_18749c;
        case 0x1874a0u: goto label_1874a0;
        case 0x1874a4u: goto label_1874a4;
        case 0x1874a8u: goto label_1874a8;
        case 0x1874acu: goto label_1874ac;
        case 0x1874b0u: goto label_1874b0;
        case 0x1874b4u: goto label_1874b4;
        case 0x1874b8u: goto label_1874b8;
        case 0x1874bcu: goto label_1874bc;
        default: break;
    }

    ctx->pc = 0x187410u;

label_187410:
    // 0x187410: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x187410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_187414:
    // 0x187414: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x187414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_187418:
    // 0x187418: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x187418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_18741c:
    // 0x18741c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18741cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_187420:
    // 0x187420: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x187420u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_187424:
    // 0x187424: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x187424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_187428:
    // 0x187428: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_18742c:
    if (ctx->pc == 0x18742Cu) {
        ctx->pc = 0x187430u;
        goto label_187430;
    }
    ctx->pc = 0x187428u;
    {
        const bool branch_taken_0x187428 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x187428) {
            ctx->pc = 0x187438u;
            goto label_187438;
        }
    }
    ctx->pc = 0x187430u;
label_187430:
    // 0x187430: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x187430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_187434:
    // 0x187434: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x187434u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_187438:
    // 0x187438: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x187438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_18743c:
    // 0x18743c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x18743cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_187440:
    // 0x187440: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x187440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_187444:
    // 0x187444: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x187444u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_187448:
    // 0x187448: 0xc119b68  jal         func_466DA0
label_18744c:
    if (ctx->pc == 0x18744Cu) {
        ctx->pc = 0x187450u;
        goto label_187450;
    }
    ctx->pc = 0x187448u;
    SET_GPR_U32(ctx, 31, 0x187450u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x187448u, 0x187450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187450u;
label_187450:
    // 0x187450: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x187450u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_187454:
    // 0x187454: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_187458:
    if (ctx->pc == 0x187458u) {
        ctx->pc = 0x18745Cu;
        goto label_18745c;
    }
    ctx->pc = 0x187454u;
    {
        const bool branch_taken_0x187454 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x187454) {
            ctx->pc = 0x187468u;
            goto label_187468;
        }
    }
    ctx->pc = 0x18745Cu;
label_18745c:
    // 0x18745c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x18745cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_187460:
    // 0x187460: 0x1000000e  b           . + 4 + (0xE << 2)
label_187464:
    if (ctx->pc == 0x187464u) {
        ctx->pc = 0x187468u;
        goto label_187468;
    }
    ctx->pc = 0x187460u;
    {
        const bool branch_taken_0x187460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x187460) {
            ctx->pc = 0x18749Cu;
            goto label_18749c;
        }
    }
    ctx->pc = 0x187468u;
label_187468:
    // 0x187468: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x187468u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18746c:
    // 0x18746c: 0xc0ba088  jal         func_2E8220
label_187470:
    if (ctx->pc == 0x187470u) {
        ctx->pc = 0x187474u;
        goto label_187474;
    }
    ctx->pc = 0x18746Cu;
    SET_GPR_U32(ctx, 31, 0x187474u);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x18746Cu, 0x187474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187474u;
label_187474:
    // 0x187474: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x187474u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_187478:
    // 0x187478: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x187478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18747c:
    // 0x18747c: 0xc0ba088  jal         func_2E8220
label_187480:
    if (ctx->pc == 0x187480u) {
        ctx->pc = 0x187484u;
        goto label_187484;
    }
    ctx->pc = 0x18747Cu;
    SET_GPR_U32(ctx, 31, 0x187484u);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x18747Cu, 0x187484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187484u;
label_187484:
    // 0x187484: 0x1200ffec  beqz        $s0, . + 4 + (-0x14 << 2)
label_187488:
    if (ctx->pc == 0x187488u) {
        ctx->pc = 0x18748Cu;
        goto label_18748c;
    }
    ctx->pc = 0x187484u;
    {
        const bool branch_taken_0x187484 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x187484) {
            ctx->pc = 0x187438u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_187438;
        }
    }
    ctx->pc = 0x18748Cu;
label_18748c:
    // 0x18748c: 0x200f809  jalr        $s0
label_187490:
    if (ctx->pc == 0x187490u) {
        ctx->pc = 0x187494u;
        goto label_187494;
    }
    ctx->pc = 0x18748Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x187494u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18748Cu, 0x187494u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x187494u;
label_187494:
    // 0x187494: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
label_187498:
    if (ctx->pc == 0x187498u) {
        ctx->pc = 0x18749Cu;
        goto label_18749c;
    }
    ctx->pc = 0x187494u;
    {
        const bool branch_taken_0x187494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x187494) {
            ctx->pc = 0x187438u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_187438;
        }
    }
    ctx->pc = 0x18749Cu;
label_18749c:
    // 0x18749c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x18749cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1874a0:
    // 0x1874a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1874a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1874a4:
    // 0x1874a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1874a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1874a8:
    // 0x1874a8: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x1874a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1874ac:
    // 0x1874ac: 0x3e00008  jr          $ra
label_1874b0:
    if (ctx->pc == 0x1874B0u) {
        ctx->pc = 0x1874B4u;
        goto label_1874b4;
    }
    ctx->pc = 0x1874ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1874ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1874B4u;
label_1874b4:
    // 0x1874b4: 0x0  nop
    ctx->pc = 0x1874b4u;
    // NOP
label_1874b8:
    // 0x1874b8: 0x0  nop
    ctx->pc = 0x1874b8u;
    // NOP
label_1874bc:
    // 0x1874bc: 0x0  nop
    ctx->pc = 0x1874bcu;
    // NOP
    ctx->pc = 0x1874c0u;
}
