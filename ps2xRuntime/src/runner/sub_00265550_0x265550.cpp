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

// Function: sub_00265550
// Address: 0x265550 - 0x2655f0
void sub_00265550_0x265550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00265550_0x265550");
#endif

    switch (ctx->pc) {
        case 0x265550u: goto label_265550;
        case 0x265554u: goto label_265554;
        case 0x265558u: goto label_265558;
        case 0x26555cu: goto label_26555c;
        case 0x265560u: goto label_265560;
        case 0x265564u: goto label_265564;
        case 0x265568u: goto label_265568;
        case 0x26556cu: goto label_26556c;
        case 0x265570u: goto label_265570;
        case 0x265574u: goto label_265574;
        case 0x265578u: goto label_265578;
        case 0x26557cu: goto label_26557c;
        case 0x265580u: goto label_265580;
        case 0x265584u: goto label_265584;
        case 0x265588u: goto label_265588;
        case 0x26558cu: goto label_26558c;
        case 0x265590u: goto label_265590;
        case 0x265594u: goto label_265594;
        case 0x265598u: goto label_265598;
        case 0x26559cu: goto label_26559c;
        case 0x2655a0u: goto label_2655a0;
        case 0x2655a4u: goto label_2655a4;
        case 0x2655a8u: goto label_2655a8;
        case 0x2655acu: goto label_2655ac;
        case 0x2655b0u: goto label_2655b0;
        case 0x2655b4u: goto label_2655b4;
        case 0x2655b8u: goto label_2655b8;
        case 0x2655bcu: goto label_2655bc;
        case 0x2655c0u: goto label_2655c0;
        case 0x2655c4u: goto label_2655c4;
        case 0x2655c8u: goto label_2655c8;
        case 0x2655ccu: goto label_2655cc;
        case 0x2655d0u: goto label_2655d0;
        case 0x2655d4u: goto label_2655d4;
        case 0x2655d8u: goto label_2655d8;
        case 0x2655dcu: goto label_2655dc;
        case 0x2655e0u: goto label_2655e0;
        case 0x2655e4u: goto label_2655e4;
        case 0x2655e8u: goto label_2655e8;
        case 0x2655ecu: goto label_2655ec;
        default: break;
    }

    ctx->pc = 0x265550u;

label_265550:
    // 0x265550: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x265550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_265554:
    // 0x265554: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x265554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_265558:
    // 0x265558: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x265558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_26555c:
    // 0x26555c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x26555cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_265560:
    // 0x265560: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x265560u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_265564:
    // 0x265564: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x265564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_265568:
    // 0x265568: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_26556c:
    if (ctx->pc == 0x26556Cu) {
        ctx->pc = 0x265570u;
        goto label_265570;
    }
    ctx->pc = 0x265568u;
    {
        const bool branch_taken_0x265568 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x265568) {
            ctx->pc = 0x265578u;
            goto label_265578;
        }
    }
    ctx->pc = 0x265570u;
label_265570:
    // 0x265570: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x265570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_265574:
    // 0x265574: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x265574u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_265578:
    // 0x265578: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x265578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_26557c:
    // 0x26557c: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x26557cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_265580:
    // 0x265580: 0xc119b68  jal         func_466DA0
label_265584:
    if (ctx->pc == 0x265584u) {
        ctx->pc = 0x265588u;
        goto label_265588;
    }
    ctx->pc = 0x265580u;
    SET_GPR_U32(ctx, 31, 0x265588u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x265580u, 0x265588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265588u;
label_265588:
    // 0x265588: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x265588u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26558c:
    // 0x26558c: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_265590:
    if (ctx->pc == 0x265590u) {
        ctx->pc = 0x265594u;
        goto label_265594;
    }
    ctx->pc = 0x26558Cu;
    {
        const bool branch_taken_0x26558c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x26558c) {
            ctx->pc = 0x2655A0u;
            goto label_2655a0;
        }
    }
    ctx->pc = 0x265594u;
label_265594:
    // 0x265594: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x265594u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_265598:
    // 0x265598: 0x1000000e  b           . + 4 + (0xE << 2)
label_26559c:
    if (ctx->pc == 0x26559Cu) {
        ctx->pc = 0x2655A0u;
        goto label_2655a0;
    }
    ctx->pc = 0x265598u;
    {
        const bool branch_taken_0x265598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x265598) {
            ctx->pc = 0x2655D4u;
            goto label_2655d4;
        }
    }
    ctx->pc = 0x2655A0u;
label_2655a0:
    // 0x2655a0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2655a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2655a4:
    // 0x2655a4: 0xc0ba088  jal         func_2E8220
label_2655a8:
    if (ctx->pc == 0x2655A8u) {
        ctx->pc = 0x2655ACu;
        goto label_2655ac;
    }
    ctx->pc = 0x2655A4u;
    SET_GPR_U32(ctx, 31, 0x2655ACu);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x2655A4u, 0x2655ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2655ACu;
label_2655ac:
    // 0x2655ac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2655acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2655b0:
    // 0x2655b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2655b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2655b4:
    // 0x2655b4: 0xc0ba088  jal         func_2E8220
label_2655b8:
    if (ctx->pc == 0x2655B8u) {
        ctx->pc = 0x2655BCu;
        goto label_2655bc;
    }
    ctx->pc = 0x2655B4u;
    SET_GPR_U32(ctx, 31, 0x2655BCu);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x2655B4u, 0x2655BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2655BCu;
label_2655bc:
    // 0x2655bc: 0x1200ffee  beqz        $s0, . + 4 + (-0x12 << 2)
label_2655c0:
    if (ctx->pc == 0x2655C0u) {
        ctx->pc = 0x2655C4u;
        goto label_2655c4;
    }
    ctx->pc = 0x2655BCu;
    {
        const bool branch_taken_0x2655bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2655bc) {
            ctx->pc = 0x265578u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_265578;
        }
    }
    ctx->pc = 0x2655C4u;
label_2655c4:
    // 0x2655c4: 0x200f809  jalr        $s0
label_2655c8:
    if (ctx->pc == 0x2655C8u) {
        ctx->pc = 0x2655CCu;
        goto label_2655cc;
    }
    ctx->pc = 0x2655C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x2655CCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2655C4u, 0x2655CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2655CCu;
label_2655cc:
    // 0x2655cc: 0x1000ffea  b           . + 4 + (-0x16 << 2)
label_2655d0:
    if (ctx->pc == 0x2655D0u) {
        ctx->pc = 0x2655D4u;
        goto label_2655d4;
    }
    ctx->pc = 0x2655CCu;
    {
        const bool branch_taken_0x2655cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2655cc) {
            ctx->pc = 0x265578u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_265578;
        }
    }
    ctx->pc = 0x2655D4u;
label_2655d4:
    // 0x2655d4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2655d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2655d8:
    // 0x2655d8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2655d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2655dc:
    // 0x2655dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2655dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2655e0:
    // 0x2655e0: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x2655e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_2655e4:
    // 0x2655e4: 0x3e00008  jr          $ra
label_2655e8:
    if (ctx->pc == 0x2655E8u) {
        ctx->pc = 0x2655ECu;
        goto label_2655ec;
    }
    ctx->pc = 0x2655E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2655E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2655ECu;
label_2655ec:
    // 0x2655ec: 0x0  nop
    ctx->pc = 0x2655ecu;
    // NOP
    ctx->pc = 0x2655f0u;
}
