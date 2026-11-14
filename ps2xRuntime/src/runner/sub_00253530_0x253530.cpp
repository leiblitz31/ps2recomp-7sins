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

// Function: sub_00253530
// Address: 0x253530 - 0x2535d0
void sub_00253530_0x253530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00253530_0x253530");
#endif

    switch (ctx->pc) {
        case 0x253530u: goto label_253530;
        case 0x253534u: goto label_253534;
        case 0x253538u: goto label_253538;
        case 0x25353cu: goto label_25353c;
        case 0x253540u: goto label_253540;
        case 0x253544u: goto label_253544;
        case 0x253548u: goto label_253548;
        case 0x25354cu: goto label_25354c;
        case 0x253550u: goto label_253550;
        case 0x253554u: goto label_253554;
        case 0x253558u: goto label_253558;
        case 0x25355cu: goto label_25355c;
        case 0x253560u: goto label_253560;
        case 0x253564u: goto label_253564;
        case 0x253568u: goto label_253568;
        case 0x25356cu: goto label_25356c;
        case 0x253570u: goto label_253570;
        case 0x253574u: goto label_253574;
        case 0x253578u: goto label_253578;
        case 0x25357cu: goto label_25357c;
        case 0x253580u: goto label_253580;
        case 0x253584u: goto label_253584;
        case 0x253588u: goto label_253588;
        case 0x25358cu: goto label_25358c;
        case 0x253590u: goto label_253590;
        case 0x253594u: goto label_253594;
        case 0x253598u: goto label_253598;
        case 0x25359cu: goto label_25359c;
        case 0x2535a0u: goto label_2535a0;
        case 0x2535a4u: goto label_2535a4;
        case 0x2535a8u: goto label_2535a8;
        case 0x2535acu: goto label_2535ac;
        case 0x2535b0u: goto label_2535b0;
        case 0x2535b4u: goto label_2535b4;
        case 0x2535b8u: goto label_2535b8;
        case 0x2535bcu: goto label_2535bc;
        case 0x2535c0u: goto label_2535c0;
        case 0x2535c4u: goto label_2535c4;
        case 0x2535c8u: goto label_2535c8;
        case 0x2535ccu: goto label_2535cc;
        default: break;
    }

    ctx->pc = 0x253530u;

label_253530:
    // 0x253530: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x253530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_253534:
    // 0x253534: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x253534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_253538:
    // 0x253538: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x253538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_25353c:
    // 0x25353c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25353cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_253540:
    // 0x253540: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x253540u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_253544:
    // 0x253544: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x253544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_253548:
    // 0x253548: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_25354c:
    if (ctx->pc == 0x25354Cu) {
        ctx->pc = 0x253550u;
        goto label_253550;
    }
    ctx->pc = 0x253548u;
    {
        const bool branch_taken_0x253548 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x253548) {
            ctx->pc = 0x253558u;
            goto label_253558;
        }
    }
    ctx->pc = 0x253550u;
label_253550:
    // 0x253550: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x253550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_253554:
    // 0x253554: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x253554u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_253558:
    // 0x253558: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x253558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_25355c:
    // 0x25355c: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x25355cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_253560:
    // 0x253560: 0xc119b68  jal         func_466DA0
label_253564:
    if (ctx->pc == 0x253564u) {
        ctx->pc = 0x253568u;
        goto label_253568;
    }
    ctx->pc = 0x253560u;
    SET_GPR_U32(ctx, 31, 0x253568u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x253560u, 0x253568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253568u;
label_253568:
    // 0x253568: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x253568u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25356c:
    // 0x25356c: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_253570:
    if (ctx->pc == 0x253570u) {
        ctx->pc = 0x253574u;
        goto label_253574;
    }
    ctx->pc = 0x25356Cu;
    {
        const bool branch_taken_0x25356c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x25356c) {
            ctx->pc = 0x253580u;
            goto label_253580;
        }
    }
    ctx->pc = 0x253574u;
label_253574:
    // 0x253574: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x253574u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_253578:
    // 0x253578: 0x1000000e  b           . + 4 + (0xE << 2)
label_25357c:
    if (ctx->pc == 0x25357Cu) {
        ctx->pc = 0x253580u;
        goto label_253580;
    }
    ctx->pc = 0x253578u;
    {
        const bool branch_taken_0x253578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x253578) {
            ctx->pc = 0x2535B4u;
            goto label_2535b4;
        }
    }
    ctx->pc = 0x253580u;
label_253580:
    // 0x253580: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x253580u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_253584:
    // 0x253584: 0xc0ba088  jal         func_2E8220
label_253588:
    if (ctx->pc == 0x253588u) {
        ctx->pc = 0x25358Cu;
        goto label_25358c;
    }
    ctx->pc = 0x253584u;
    SET_GPR_U32(ctx, 31, 0x25358Cu);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x253584u, 0x25358Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25358Cu;
label_25358c:
    // 0x25358c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x25358cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_253590:
    // 0x253590: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x253590u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_253594:
    // 0x253594: 0xc0ba088  jal         func_2E8220
label_253598:
    if (ctx->pc == 0x253598u) {
        ctx->pc = 0x25359Cu;
        goto label_25359c;
    }
    ctx->pc = 0x253594u;
    SET_GPR_U32(ctx, 31, 0x25359Cu);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x253594u, 0x25359Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25359Cu;
label_25359c:
    // 0x25359c: 0x1200ffee  beqz        $s0, . + 4 + (-0x12 << 2)
label_2535a0:
    if (ctx->pc == 0x2535A0u) {
        ctx->pc = 0x2535A4u;
        goto label_2535a4;
    }
    ctx->pc = 0x25359Cu;
    {
        const bool branch_taken_0x25359c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x25359c) {
            ctx->pc = 0x253558u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_253558;
        }
    }
    ctx->pc = 0x2535A4u;
label_2535a4:
    // 0x2535a4: 0x200f809  jalr        $s0
label_2535a8:
    if (ctx->pc == 0x2535A8u) {
        ctx->pc = 0x2535ACu;
        goto label_2535ac;
    }
    ctx->pc = 0x2535A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x2535ACu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2535A4u, 0x2535ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2535ACu;
label_2535ac:
    // 0x2535ac: 0x1000ffea  b           . + 4 + (-0x16 << 2)
label_2535b0:
    if (ctx->pc == 0x2535B0u) {
        ctx->pc = 0x2535B4u;
        goto label_2535b4;
    }
    ctx->pc = 0x2535ACu;
    {
        const bool branch_taken_0x2535ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2535ac) {
            ctx->pc = 0x253558u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_253558;
        }
    }
    ctx->pc = 0x2535B4u;
label_2535b4:
    // 0x2535b4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2535b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2535b8:
    // 0x2535b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2535b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2535bc:
    // 0x2535bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2535bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2535c0:
    // 0x2535c0: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x2535c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_2535c4:
    // 0x2535c4: 0x3e00008  jr          $ra
label_2535c8:
    if (ctx->pc == 0x2535C8u) {
        ctx->pc = 0x2535CCu;
        goto label_2535cc;
    }
    ctx->pc = 0x2535C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2535C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2535CCu;
label_2535cc:
    // 0x2535cc: 0x0  nop
    ctx->pc = 0x2535ccu;
    // NOP
    ctx->pc = 0x2535d0u;
}
