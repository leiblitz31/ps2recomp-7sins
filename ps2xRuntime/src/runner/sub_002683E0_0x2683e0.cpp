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

// Function: sub_002683E0
// Address: 0x2683e0 - 0x268480
void sub_002683E0_0x2683e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002683E0_0x2683e0");
#endif

    switch (ctx->pc) {
        case 0x2683e0u: goto label_2683e0;
        case 0x2683e4u: goto label_2683e4;
        case 0x2683e8u: goto label_2683e8;
        case 0x2683ecu: goto label_2683ec;
        case 0x2683f0u: goto label_2683f0;
        case 0x2683f4u: goto label_2683f4;
        case 0x2683f8u: goto label_2683f8;
        case 0x2683fcu: goto label_2683fc;
        case 0x268400u: goto label_268400;
        case 0x268404u: goto label_268404;
        case 0x268408u: goto label_268408;
        case 0x26840cu: goto label_26840c;
        case 0x268410u: goto label_268410;
        case 0x268414u: goto label_268414;
        case 0x268418u: goto label_268418;
        case 0x26841cu: goto label_26841c;
        case 0x268420u: goto label_268420;
        case 0x268424u: goto label_268424;
        case 0x268428u: goto label_268428;
        case 0x26842cu: goto label_26842c;
        case 0x268430u: goto label_268430;
        case 0x268434u: goto label_268434;
        case 0x268438u: goto label_268438;
        case 0x26843cu: goto label_26843c;
        case 0x268440u: goto label_268440;
        case 0x268444u: goto label_268444;
        case 0x268448u: goto label_268448;
        case 0x26844cu: goto label_26844c;
        case 0x268450u: goto label_268450;
        case 0x268454u: goto label_268454;
        case 0x268458u: goto label_268458;
        case 0x26845cu: goto label_26845c;
        case 0x268460u: goto label_268460;
        case 0x268464u: goto label_268464;
        case 0x268468u: goto label_268468;
        case 0x26846cu: goto label_26846c;
        case 0x268470u: goto label_268470;
        case 0x268474u: goto label_268474;
        case 0x268478u: goto label_268478;
        case 0x26847cu: goto label_26847c;
        default: break;
    }

    ctx->pc = 0x2683e0u;

label_2683e0:
    // 0x2683e0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2683e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_2683e4:
    // 0x2683e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2683e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2683e8:
    // 0x2683e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2683e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2683ec:
    // 0x2683ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2683ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2683f0:
    // 0x2683f0: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x2683f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_2683f4:
    // 0x2683f4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2683f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2683f8:
    // 0x2683f8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2683fc:
    if (ctx->pc == 0x2683FCu) {
        ctx->pc = 0x268400u;
        goto label_268400;
    }
    ctx->pc = 0x2683F8u;
    {
        const bool branch_taken_0x2683f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2683f8) {
            ctx->pc = 0x268408u;
            goto label_268408;
        }
    }
    ctx->pc = 0x268400u;
label_268400:
    // 0x268400: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x268400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_268404:
    // 0x268404: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x268404u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_268408:
    // 0x268408: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x268408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_26840c:
    // 0x26840c: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x26840cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_268410:
    // 0x268410: 0xc119b68  jal         func_466DA0
label_268414:
    if (ctx->pc == 0x268414u) {
        ctx->pc = 0x268418u;
        goto label_268418;
    }
    ctx->pc = 0x268410u;
    SET_GPR_U32(ctx, 31, 0x268418u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x268410u, 0x268418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268418u;
label_268418:
    // 0x268418: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x268418u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26841c:
    // 0x26841c: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_268420:
    if (ctx->pc == 0x268420u) {
        ctx->pc = 0x268424u;
        goto label_268424;
    }
    ctx->pc = 0x26841Cu;
    {
        const bool branch_taken_0x26841c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x26841c) {
            ctx->pc = 0x268430u;
            goto label_268430;
        }
    }
    ctx->pc = 0x268424u;
label_268424:
    // 0x268424: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x268424u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_268428:
    // 0x268428: 0x1000000e  b           . + 4 + (0xE << 2)
label_26842c:
    if (ctx->pc == 0x26842Cu) {
        ctx->pc = 0x268430u;
        goto label_268430;
    }
    ctx->pc = 0x268428u;
    {
        const bool branch_taken_0x268428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x268428) {
            ctx->pc = 0x268464u;
            goto label_268464;
        }
    }
    ctx->pc = 0x268430u;
label_268430:
    // 0x268430: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x268430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_268434:
    // 0x268434: 0xc0ba088  jal         func_2E8220
label_268438:
    if (ctx->pc == 0x268438u) {
        ctx->pc = 0x26843Cu;
        goto label_26843c;
    }
    ctx->pc = 0x268434u;
    SET_GPR_U32(ctx, 31, 0x26843Cu);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x268434u, 0x26843Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26843Cu;
label_26843c:
    // 0x26843c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26843cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_268440:
    // 0x268440: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x268440u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_268444:
    // 0x268444: 0xc0ba088  jal         func_2E8220
label_268448:
    if (ctx->pc == 0x268448u) {
        ctx->pc = 0x26844Cu;
        goto label_26844c;
    }
    ctx->pc = 0x268444u;
    SET_GPR_U32(ctx, 31, 0x26844Cu);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x268444u, 0x26844Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26844Cu;
label_26844c:
    // 0x26844c: 0x1200ffee  beqz        $s0, . + 4 + (-0x12 << 2)
label_268450:
    if (ctx->pc == 0x268450u) {
        ctx->pc = 0x268454u;
        goto label_268454;
    }
    ctx->pc = 0x26844Cu;
    {
        const bool branch_taken_0x26844c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x26844c) {
            ctx->pc = 0x268408u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_268408;
        }
    }
    ctx->pc = 0x268454u;
label_268454:
    // 0x268454: 0x200f809  jalr        $s0
label_268458:
    if (ctx->pc == 0x268458u) {
        ctx->pc = 0x26845Cu;
        goto label_26845c;
    }
    ctx->pc = 0x268454u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x26845Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x268454u, 0x26845Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26845Cu;
label_26845c:
    // 0x26845c: 0x1000ffea  b           . + 4 + (-0x16 << 2)
label_268460:
    if (ctx->pc == 0x268460u) {
        ctx->pc = 0x268464u;
        goto label_268464;
    }
    ctx->pc = 0x26845Cu;
    {
        const bool branch_taken_0x26845c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26845c) {
            ctx->pc = 0x268408u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_268408;
        }
    }
    ctx->pc = 0x268464u;
label_268464:
    // 0x268464: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x268464u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_268468:
    // 0x268468: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x268468u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_26846c:
    // 0x26846c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26846cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_268470:
    // 0x268470: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x268470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_268474:
    // 0x268474: 0x3e00008  jr          $ra
label_268478:
    if (ctx->pc == 0x268478u) {
        ctx->pc = 0x26847Cu;
        goto label_26847c;
    }
    ctx->pc = 0x268474u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x268474u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26847Cu;
label_26847c:
    // 0x26847c: 0x0  nop
    ctx->pc = 0x26847cu;
    // NOP
    ctx->pc = 0x268480u;
}
