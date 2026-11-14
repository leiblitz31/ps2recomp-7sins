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

// Function: sub_00225530
// Address: 0x225530 - 0x2255d0
void sub_00225530_0x225530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00225530_0x225530");
#endif

    switch (ctx->pc) {
        case 0x225530u: goto label_225530;
        case 0x225534u: goto label_225534;
        case 0x225538u: goto label_225538;
        case 0x22553cu: goto label_22553c;
        case 0x225540u: goto label_225540;
        case 0x225544u: goto label_225544;
        case 0x225548u: goto label_225548;
        case 0x22554cu: goto label_22554c;
        case 0x225550u: goto label_225550;
        case 0x225554u: goto label_225554;
        case 0x225558u: goto label_225558;
        case 0x22555cu: goto label_22555c;
        case 0x225560u: goto label_225560;
        case 0x225564u: goto label_225564;
        case 0x225568u: goto label_225568;
        case 0x22556cu: goto label_22556c;
        case 0x225570u: goto label_225570;
        case 0x225574u: goto label_225574;
        case 0x225578u: goto label_225578;
        case 0x22557cu: goto label_22557c;
        case 0x225580u: goto label_225580;
        case 0x225584u: goto label_225584;
        case 0x225588u: goto label_225588;
        case 0x22558cu: goto label_22558c;
        case 0x225590u: goto label_225590;
        case 0x225594u: goto label_225594;
        case 0x225598u: goto label_225598;
        case 0x22559cu: goto label_22559c;
        case 0x2255a0u: goto label_2255a0;
        case 0x2255a4u: goto label_2255a4;
        case 0x2255a8u: goto label_2255a8;
        case 0x2255acu: goto label_2255ac;
        case 0x2255b0u: goto label_2255b0;
        case 0x2255b4u: goto label_2255b4;
        case 0x2255b8u: goto label_2255b8;
        case 0x2255bcu: goto label_2255bc;
        case 0x2255c0u: goto label_2255c0;
        case 0x2255c4u: goto label_2255c4;
        case 0x2255c8u: goto label_2255c8;
        case 0x2255ccu: goto label_2255cc;
        default: break;
    }

    ctx->pc = 0x225530u;

label_225530:
    // 0x225530: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x225530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_225534:
    // 0x225534: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x225534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_225538:
    // 0x225538: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x225538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_22553c:
    // 0x22553c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22553cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_225540:
    // 0x225540: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x225540u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_225544:
    // 0x225544: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x225544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_225548:
    // 0x225548: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_22554c:
    if (ctx->pc == 0x22554Cu) {
        ctx->pc = 0x225550u;
        goto label_225550;
    }
    ctx->pc = 0x225548u;
    {
        const bool branch_taken_0x225548 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x225548) {
            ctx->pc = 0x225558u;
            goto label_225558;
        }
    }
    ctx->pc = 0x225550u;
label_225550:
    // 0x225550: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x225550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_225554:
    // 0x225554: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x225554u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_225558:
    // 0x225558: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x225558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_22555c:
    // 0x22555c: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x22555cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_225560:
    // 0x225560: 0xc119b68  jal         func_466DA0
label_225564:
    if (ctx->pc == 0x225564u) {
        ctx->pc = 0x225568u;
        goto label_225568;
    }
    ctx->pc = 0x225560u;
    SET_GPR_U32(ctx, 31, 0x225568u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x225560u, 0x225568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225568u;
label_225568:
    // 0x225568: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x225568u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22556c:
    // 0x22556c: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_225570:
    if (ctx->pc == 0x225570u) {
        ctx->pc = 0x225574u;
        goto label_225574;
    }
    ctx->pc = 0x22556Cu;
    {
        const bool branch_taken_0x22556c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x22556c) {
            ctx->pc = 0x225580u;
            goto label_225580;
        }
    }
    ctx->pc = 0x225574u;
label_225574:
    // 0x225574: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x225574u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_225578:
    // 0x225578: 0x1000000e  b           . + 4 + (0xE << 2)
label_22557c:
    if (ctx->pc == 0x22557Cu) {
        ctx->pc = 0x225580u;
        goto label_225580;
    }
    ctx->pc = 0x225578u;
    {
        const bool branch_taken_0x225578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x225578) {
            ctx->pc = 0x2255B4u;
            goto label_2255b4;
        }
    }
    ctx->pc = 0x225580u;
label_225580:
    // 0x225580: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x225580u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_225584:
    // 0x225584: 0xc0ba088  jal         func_2E8220
label_225588:
    if (ctx->pc == 0x225588u) {
        ctx->pc = 0x22558Cu;
        goto label_22558c;
    }
    ctx->pc = 0x225584u;
    SET_GPR_U32(ctx, 31, 0x22558Cu);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x225584u, 0x22558Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22558Cu;
label_22558c:
    // 0x22558c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x22558cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_225590:
    // 0x225590: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x225590u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_225594:
    // 0x225594: 0xc0ba088  jal         func_2E8220
label_225598:
    if (ctx->pc == 0x225598u) {
        ctx->pc = 0x22559Cu;
        goto label_22559c;
    }
    ctx->pc = 0x225594u;
    SET_GPR_U32(ctx, 31, 0x22559Cu);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x225594u, 0x22559Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22559Cu;
label_22559c:
    // 0x22559c: 0x1200ffee  beqz        $s0, . + 4 + (-0x12 << 2)
label_2255a0:
    if (ctx->pc == 0x2255A0u) {
        ctx->pc = 0x2255A4u;
        goto label_2255a4;
    }
    ctx->pc = 0x22559Cu;
    {
        const bool branch_taken_0x22559c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x22559c) {
            ctx->pc = 0x225558u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_225558;
        }
    }
    ctx->pc = 0x2255A4u;
label_2255a4:
    // 0x2255a4: 0x200f809  jalr        $s0
label_2255a8:
    if (ctx->pc == 0x2255A8u) {
        ctx->pc = 0x2255ACu;
        goto label_2255ac;
    }
    ctx->pc = 0x2255A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x2255ACu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2255A4u, 0x2255ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2255ACu;
label_2255ac:
    // 0x2255ac: 0x1000ffea  b           . + 4 + (-0x16 << 2)
label_2255b0:
    if (ctx->pc == 0x2255B0u) {
        ctx->pc = 0x2255B4u;
        goto label_2255b4;
    }
    ctx->pc = 0x2255ACu;
    {
        const bool branch_taken_0x2255ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2255ac) {
            ctx->pc = 0x225558u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_225558;
        }
    }
    ctx->pc = 0x2255B4u;
label_2255b4:
    // 0x2255b4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2255b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2255b8:
    // 0x2255b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2255b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2255bc:
    // 0x2255bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2255bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2255c0:
    // 0x2255c0: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x2255c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_2255c4:
    // 0x2255c4: 0x3e00008  jr          $ra
label_2255c8:
    if (ctx->pc == 0x2255C8u) {
        ctx->pc = 0x2255CCu;
        goto label_2255cc;
    }
    ctx->pc = 0x2255C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2255C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2255CCu;
label_2255cc:
    // 0x2255cc: 0x0  nop
    ctx->pc = 0x2255ccu;
    // NOP
    ctx->pc = 0x2255d0u;
}
