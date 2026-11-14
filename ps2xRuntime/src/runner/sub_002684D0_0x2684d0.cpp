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

// Function: sub_002684D0
// Address: 0x2684d0 - 0x268580
void sub_002684D0_0x2684d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002684D0_0x2684d0");
#endif

    switch (ctx->pc) {
        case 0x2684d0u: goto label_2684d0;
        case 0x2684d4u: goto label_2684d4;
        case 0x2684d8u: goto label_2684d8;
        case 0x2684dcu: goto label_2684dc;
        case 0x2684e0u: goto label_2684e0;
        case 0x2684e4u: goto label_2684e4;
        case 0x2684e8u: goto label_2684e8;
        case 0x2684ecu: goto label_2684ec;
        case 0x2684f0u: goto label_2684f0;
        case 0x2684f4u: goto label_2684f4;
        case 0x2684f8u: goto label_2684f8;
        case 0x2684fcu: goto label_2684fc;
        case 0x268500u: goto label_268500;
        case 0x268504u: goto label_268504;
        case 0x268508u: goto label_268508;
        case 0x26850cu: goto label_26850c;
        case 0x268510u: goto label_268510;
        case 0x268514u: goto label_268514;
        case 0x268518u: goto label_268518;
        case 0x26851cu: goto label_26851c;
        case 0x268520u: goto label_268520;
        case 0x268524u: goto label_268524;
        case 0x268528u: goto label_268528;
        case 0x26852cu: goto label_26852c;
        case 0x268530u: goto label_268530;
        case 0x268534u: goto label_268534;
        case 0x268538u: goto label_268538;
        case 0x26853cu: goto label_26853c;
        case 0x268540u: goto label_268540;
        case 0x268544u: goto label_268544;
        case 0x268548u: goto label_268548;
        case 0x26854cu: goto label_26854c;
        case 0x268550u: goto label_268550;
        case 0x268554u: goto label_268554;
        case 0x268558u: goto label_268558;
        case 0x26855cu: goto label_26855c;
        case 0x268560u: goto label_268560;
        case 0x268564u: goto label_268564;
        case 0x268568u: goto label_268568;
        case 0x26856cu: goto label_26856c;
        case 0x268570u: goto label_268570;
        case 0x268574u: goto label_268574;
        case 0x268578u: goto label_268578;
        case 0x26857cu: goto label_26857c;
        default: break;
    }

    ctx->pc = 0x2684d0u;

label_2684d0:
    // 0x2684d0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2684d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_2684d4:
    // 0x2684d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2684d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2684d8:
    // 0x2684d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2684d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2684dc:
    // 0x2684dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2684dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2684e0:
    // 0x2684e0: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x2684e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_2684e4:
    // 0x2684e4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2684e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2684e8:
    // 0x2684e8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2684ec:
    if (ctx->pc == 0x2684ECu) {
        ctx->pc = 0x2684F0u;
        goto label_2684f0;
    }
    ctx->pc = 0x2684E8u;
    {
        const bool branch_taken_0x2684e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2684e8) {
            ctx->pc = 0x2684F8u;
            goto label_2684f8;
        }
    }
    ctx->pc = 0x2684F0u;
label_2684f0:
    // 0x2684f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2684f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2684f4:
    // 0x2684f4: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x2684f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_2684f8:
    // 0x2684f8: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x2684f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2684fc:
    // 0x2684fc: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2684fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_268500:
    // 0x268500: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x268500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_268504:
    // 0x268504: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x268504u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_268508:
    // 0x268508: 0xc119b68  jal         func_466DA0
label_26850c:
    if (ctx->pc == 0x26850Cu) {
        ctx->pc = 0x268510u;
        goto label_268510;
    }
    ctx->pc = 0x268508u;
    SET_GPR_U32(ctx, 31, 0x268510u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x268508u, 0x268510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268510u;
label_268510:
    // 0x268510: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x268510u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_268514:
    // 0x268514: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_268518:
    if (ctx->pc == 0x268518u) {
        ctx->pc = 0x26851Cu;
        goto label_26851c;
    }
    ctx->pc = 0x268514u;
    {
        const bool branch_taken_0x268514 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x268514) {
            ctx->pc = 0x268528u;
            goto label_268528;
        }
    }
    ctx->pc = 0x26851Cu;
label_26851c:
    // 0x26851c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x26851cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_268520:
    // 0x268520: 0x1000000e  b           . + 4 + (0xE << 2)
label_268524:
    if (ctx->pc == 0x268524u) {
        ctx->pc = 0x268528u;
        goto label_268528;
    }
    ctx->pc = 0x268520u;
    {
        const bool branch_taken_0x268520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x268520) {
            ctx->pc = 0x26855Cu;
            goto label_26855c;
        }
    }
    ctx->pc = 0x268528u;
label_268528:
    // 0x268528: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x268528u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26852c:
    // 0x26852c: 0xc0ba088  jal         func_2E8220
label_268530:
    if (ctx->pc == 0x268530u) {
        ctx->pc = 0x268534u;
        goto label_268534;
    }
    ctx->pc = 0x26852Cu;
    SET_GPR_U32(ctx, 31, 0x268534u);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x26852Cu, 0x268534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268534u;
label_268534:
    // 0x268534: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x268534u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_268538:
    // 0x268538: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x268538u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26853c:
    // 0x26853c: 0xc0ba088  jal         func_2E8220
label_268540:
    if (ctx->pc == 0x268540u) {
        ctx->pc = 0x268544u;
        goto label_268544;
    }
    ctx->pc = 0x26853Cu;
    SET_GPR_U32(ctx, 31, 0x268544u);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x26853Cu, 0x268544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268544u;
label_268544:
    // 0x268544: 0x1200ffec  beqz        $s0, . + 4 + (-0x14 << 2)
label_268548:
    if (ctx->pc == 0x268548u) {
        ctx->pc = 0x26854Cu;
        goto label_26854c;
    }
    ctx->pc = 0x268544u;
    {
        const bool branch_taken_0x268544 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x268544) {
            ctx->pc = 0x2684F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2684f8;
        }
    }
    ctx->pc = 0x26854Cu;
label_26854c:
    // 0x26854c: 0x200f809  jalr        $s0
label_268550:
    if (ctx->pc == 0x268550u) {
        ctx->pc = 0x268554u;
        goto label_268554;
    }
    ctx->pc = 0x26854Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x268554u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26854Cu, 0x268554u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x268554u;
label_268554:
    // 0x268554: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
label_268558:
    if (ctx->pc == 0x268558u) {
        ctx->pc = 0x26855Cu;
        goto label_26855c;
    }
    ctx->pc = 0x268554u;
    {
        const bool branch_taken_0x268554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x268554) {
            ctx->pc = 0x2684F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2684f8;
        }
    }
    ctx->pc = 0x26855Cu;
label_26855c:
    // 0x26855c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x26855cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_268560:
    // 0x268560: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x268560u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_268564:
    // 0x268564: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x268564u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_268568:
    // 0x268568: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x268568u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_26856c:
    // 0x26856c: 0x3e00008  jr          $ra
label_268570:
    if (ctx->pc == 0x268570u) {
        ctx->pc = 0x268574u;
        goto label_268574;
    }
    ctx->pc = 0x26856Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26856Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x268574u;
label_268574:
    // 0x268574: 0x0  nop
    ctx->pc = 0x268574u;
    // NOP
label_268578:
    // 0x268578: 0x0  nop
    ctx->pc = 0x268578u;
    // NOP
label_26857c:
    // 0x26857c: 0x0  nop
    ctx->pc = 0x26857cu;
    // NOP
    ctx->pc = 0x268580u;
}
