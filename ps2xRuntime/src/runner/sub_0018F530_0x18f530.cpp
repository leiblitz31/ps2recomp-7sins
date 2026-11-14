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

// Function: sub_0018F530
// Address: 0x18f530 - 0x18f5e0
void sub_0018F530_0x18f530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018F530_0x18f530");
#endif

    switch (ctx->pc) {
        case 0x18f530u: goto label_18f530;
        case 0x18f534u: goto label_18f534;
        case 0x18f538u: goto label_18f538;
        case 0x18f53cu: goto label_18f53c;
        case 0x18f540u: goto label_18f540;
        case 0x18f544u: goto label_18f544;
        case 0x18f548u: goto label_18f548;
        case 0x18f54cu: goto label_18f54c;
        case 0x18f550u: goto label_18f550;
        case 0x18f554u: goto label_18f554;
        case 0x18f558u: goto label_18f558;
        case 0x18f55cu: goto label_18f55c;
        case 0x18f560u: goto label_18f560;
        case 0x18f564u: goto label_18f564;
        case 0x18f568u: goto label_18f568;
        case 0x18f56cu: goto label_18f56c;
        case 0x18f570u: goto label_18f570;
        case 0x18f574u: goto label_18f574;
        case 0x18f578u: goto label_18f578;
        case 0x18f57cu: goto label_18f57c;
        case 0x18f580u: goto label_18f580;
        case 0x18f584u: goto label_18f584;
        case 0x18f588u: goto label_18f588;
        case 0x18f58cu: goto label_18f58c;
        case 0x18f590u: goto label_18f590;
        case 0x18f594u: goto label_18f594;
        case 0x18f598u: goto label_18f598;
        case 0x18f59cu: goto label_18f59c;
        case 0x18f5a0u: goto label_18f5a0;
        case 0x18f5a4u: goto label_18f5a4;
        case 0x18f5a8u: goto label_18f5a8;
        case 0x18f5acu: goto label_18f5ac;
        case 0x18f5b0u: goto label_18f5b0;
        case 0x18f5b4u: goto label_18f5b4;
        case 0x18f5b8u: goto label_18f5b8;
        case 0x18f5bcu: goto label_18f5bc;
        case 0x18f5c0u: goto label_18f5c0;
        case 0x18f5c4u: goto label_18f5c4;
        case 0x18f5c8u: goto label_18f5c8;
        case 0x18f5ccu: goto label_18f5cc;
        case 0x18f5d0u: goto label_18f5d0;
        case 0x18f5d4u: goto label_18f5d4;
        case 0x18f5d8u: goto label_18f5d8;
        case 0x18f5dcu: goto label_18f5dc;
        default: break;
    }

    ctx->pc = 0x18f530u;

label_18f530:
    // 0x18f530: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x18f530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_18f534:
    // 0x18f534: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x18f534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_18f538:
    // 0x18f538: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18f538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_18f53c:
    // 0x18f53c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18f53cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_18f540:
    // 0x18f540: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x18f540u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_18f544:
    // 0x18f544: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x18f544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_18f548:
    // 0x18f548: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_18f54c:
    if (ctx->pc == 0x18F54Cu) {
        ctx->pc = 0x18F550u;
        goto label_18f550;
    }
    ctx->pc = 0x18F548u;
    {
        const bool branch_taken_0x18f548 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18f548) {
            ctx->pc = 0x18F558u;
            goto label_18f558;
        }
    }
    ctx->pc = 0x18F550u;
label_18f550:
    // 0x18f550: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18f550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18f554:
    // 0x18f554: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x18f554u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_18f558:
    // 0x18f558: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x18f558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_18f55c:
    // 0x18f55c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x18f55cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_18f560:
    // 0x18f560: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x18f560u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_18f564:
    // 0x18f564: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x18f564u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_18f568:
    // 0x18f568: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x18f568u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_18f56c:
    // 0x18f56c: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x18f56cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_18f570:
    // 0x18f570: 0xc119b68  jal         func_466DA0
label_18f574:
    if (ctx->pc == 0x18F574u) {
        ctx->pc = 0x18F578u;
        goto label_18f578;
    }
    ctx->pc = 0x18F570u;
    SET_GPR_U32(ctx, 31, 0x18F578u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x18F570u, 0x18F578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F578u;
label_18f578:
    // 0x18f578: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x18f578u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18f57c:
    // 0x18f57c: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_18f580:
    if (ctx->pc == 0x18F580u) {
        ctx->pc = 0x18F584u;
        goto label_18f584;
    }
    ctx->pc = 0x18F57Cu;
    {
        const bool branch_taken_0x18f57c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f57c) {
            ctx->pc = 0x18F590u;
            goto label_18f590;
        }
    }
    ctx->pc = 0x18F584u;
label_18f584:
    // 0x18f584: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x18f584u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18f588:
    // 0x18f588: 0x1000000e  b           . + 4 + (0xE << 2)
label_18f58c:
    if (ctx->pc == 0x18F58Cu) {
        ctx->pc = 0x18F590u;
        goto label_18f590;
    }
    ctx->pc = 0x18F588u;
    {
        const bool branch_taken_0x18f588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f588) {
            ctx->pc = 0x18F5C4u;
            goto label_18f5c4;
        }
    }
    ctx->pc = 0x18F590u;
label_18f590:
    // 0x18f590: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x18f590u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18f594:
    // 0x18f594: 0xc0ba088  jal         func_2E8220
label_18f598:
    if (ctx->pc == 0x18F598u) {
        ctx->pc = 0x18F59Cu;
        goto label_18f59c;
    }
    ctx->pc = 0x18F594u;
    SET_GPR_U32(ctx, 31, 0x18F59Cu);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x18F594u, 0x18F59Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F59Cu;
label_18f59c:
    // 0x18f59c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x18f59cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18f5a0:
    // 0x18f5a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18f5a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18f5a4:
    // 0x18f5a4: 0xc0ba088  jal         func_2E8220
label_18f5a8:
    if (ctx->pc == 0x18F5A8u) {
        ctx->pc = 0x18F5ACu;
        goto label_18f5ac;
    }
    ctx->pc = 0x18F5A4u;
    SET_GPR_U32(ctx, 31, 0x18F5ACu);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x18F5A4u, 0x18F5ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F5ACu;
label_18f5ac:
    // 0x18f5ac: 0x1200ffea  beqz        $s0, . + 4 + (-0x16 << 2)
label_18f5b0:
    if (ctx->pc == 0x18F5B0u) {
        ctx->pc = 0x18F5B4u;
        goto label_18f5b4;
    }
    ctx->pc = 0x18F5ACu;
    {
        const bool branch_taken_0x18f5ac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f5ac) {
            ctx->pc = 0x18F558u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18f558;
        }
    }
    ctx->pc = 0x18F5B4u;
label_18f5b4:
    // 0x18f5b4: 0x200f809  jalr        $s0
label_18f5b8:
    if (ctx->pc == 0x18F5B8u) {
        ctx->pc = 0x18F5BCu;
        goto label_18f5bc;
    }
    ctx->pc = 0x18F5B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x18F5BCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18F5B4u, 0x18F5BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18F5BCu;
label_18f5bc:
    // 0x18f5bc: 0x1000ffe6  b           . + 4 + (-0x1A << 2)
label_18f5c0:
    if (ctx->pc == 0x18F5C0u) {
        ctx->pc = 0x18F5C4u;
        goto label_18f5c4;
    }
    ctx->pc = 0x18F5BCu;
    {
        const bool branch_taken_0x18f5bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f5bc) {
            ctx->pc = 0x18F558u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18f558;
        }
    }
    ctx->pc = 0x18F5C4u;
label_18f5c4:
    // 0x18f5c4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x18f5c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_18f5c8:
    // 0x18f5c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18f5c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_18f5cc:
    // 0x18f5cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18f5ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_18f5d0:
    // 0x18f5d0: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x18f5d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_18f5d4:
    // 0x18f5d4: 0x3e00008  jr          $ra
label_18f5d8:
    if (ctx->pc == 0x18F5D8u) {
        ctx->pc = 0x18F5DCu;
        goto label_18f5dc;
    }
    ctx->pc = 0x18F5D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18F5D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18F5DCu;
label_18f5dc:
    // 0x18f5dc: 0x0  nop
    ctx->pc = 0x18f5dcu;
    // NOP
    ctx->pc = 0x18f5e0u;
}
