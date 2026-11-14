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

// Function: sub_00182690
// Address: 0x182690 - 0x182740
void sub_00182690_0x182690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00182690_0x182690");
#endif

    switch (ctx->pc) {
        case 0x182690u: goto label_182690;
        case 0x182694u: goto label_182694;
        case 0x182698u: goto label_182698;
        case 0x18269cu: goto label_18269c;
        case 0x1826a0u: goto label_1826a0;
        case 0x1826a4u: goto label_1826a4;
        case 0x1826a8u: goto label_1826a8;
        case 0x1826acu: goto label_1826ac;
        case 0x1826b0u: goto label_1826b0;
        case 0x1826b4u: goto label_1826b4;
        case 0x1826b8u: goto label_1826b8;
        case 0x1826bcu: goto label_1826bc;
        case 0x1826c0u: goto label_1826c0;
        case 0x1826c4u: goto label_1826c4;
        case 0x1826c8u: goto label_1826c8;
        case 0x1826ccu: goto label_1826cc;
        case 0x1826d0u: goto label_1826d0;
        case 0x1826d4u: goto label_1826d4;
        case 0x1826d8u: goto label_1826d8;
        case 0x1826dcu: goto label_1826dc;
        case 0x1826e0u: goto label_1826e0;
        case 0x1826e4u: goto label_1826e4;
        case 0x1826e8u: goto label_1826e8;
        case 0x1826ecu: goto label_1826ec;
        case 0x1826f0u: goto label_1826f0;
        case 0x1826f4u: goto label_1826f4;
        case 0x1826f8u: goto label_1826f8;
        case 0x1826fcu: goto label_1826fc;
        case 0x182700u: goto label_182700;
        case 0x182704u: goto label_182704;
        case 0x182708u: goto label_182708;
        case 0x18270cu: goto label_18270c;
        case 0x182710u: goto label_182710;
        case 0x182714u: goto label_182714;
        case 0x182718u: goto label_182718;
        case 0x18271cu: goto label_18271c;
        case 0x182720u: goto label_182720;
        case 0x182724u: goto label_182724;
        case 0x182728u: goto label_182728;
        case 0x18272cu: goto label_18272c;
        case 0x182730u: goto label_182730;
        case 0x182734u: goto label_182734;
        case 0x182738u: goto label_182738;
        case 0x18273cu: goto label_18273c;
        default: break;
    }

    ctx->pc = 0x182690u;

label_182690:
    // 0x182690: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x182690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_182694:
    // 0x182694: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x182694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_182698:
    // 0x182698: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x182698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_18269c:
    // 0x18269c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18269cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1826a0:
    // 0x1826a0: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x1826a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_1826a4:
    // 0x1826a4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1826a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1826a8:
    // 0x1826a8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1826ac:
    if (ctx->pc == 0x1826ACu) {
        ctx->pc = 0x1826B0u;
        goto label_1826b0;
    }
    ctx->pc = 0x1826A8u;
    {
        const bool branch_taken_0x1826a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1826a8) {
            ctx->pc = 0x1826B8u;
            goto label_1826b8;
        }
    }
    ctx->pc = 0x1826B0u;
label_1826b0:
    // 0x1826b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1826b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1826b4:
    // 0x1826b4: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x1826b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_1826b8:
    // 0x1826b8: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1826b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1826bc:
    // 0x1826bc: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1826bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1826c0:
    // 0x1826c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1826c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1826c4:
    // 0x1826c4: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x1826c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1826c8:
    // 0x1826c8: 0xc119b68  jal         func_466DA0
label_1826cc:
    if (ctx->pc == 0x1826CCu) {
        ctx->pc = 0x1826D0u;
        goto label_1826d0;
    }
    ctx->pc = 0x1826C8u;
    SET_GPR_U32(ctx, 31, 0x1826D0u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x1826C8u, 0x1826D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1826D0u;
label_1826d0:
    // 0x1826d0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1826d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1826d4:
    // 0x1826d4: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_1826d8:
    if (ctx->pc == 0x1826D8u) {
        ctx->pc = 0x1826DCu;
        goto label_1826dc;
    }
    ctx->pc = 0x1826D4u;
    {
        const bool branch_taken_0x1826d4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1826d4) {
            ctx->pc = 0x1826E8u;
            goto label_1826e8;
        }
    }
    ctx->pc = 0x1826DCu;
label_1826dc:
    // 0x1826dc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1826dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1826e0:
    // 0x1826e0: 0x1000000e  b           . + 4 + (0xE << 2)
label_1826e4:
    if (ctx->pc == 0x1826E4u) {
        ctx->pc = 0x1826E8u;
        goto label_1826e8;
    }
    ctx->pc = 0x1826E0u;
    {
        const bool branch_taken_0x1826e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1826e0) {
            ctx->pc = 0x18271Cu;
            goto label_18271c;
        }
    }
    ctx->pc = 0x1826E8u;
label_1826e8:
    // 0x1826e8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1826e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1826ec:
    // 0x1826ec: 0xc0ba088  jal         func_2E8220
label_1826f0:
    if (ctx->pc == 0x1826F0u) {
        ctx->pc = 0x1826F4u;
        goto label_1826f4;
    }
    ctx->pc = 0x1826ECu;
    SET_GPR_U32(ctx, 31, 0x1826F4u);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x1826ECu, 0x1826F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1826F4u;
label_1826f4:
    // 0x1826f4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1826f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1826f8:
    // 0x1826f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1826f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1826fc:
    // 0x1826fc: 0xc0ba088  jal         func_2E8220
label_182700:
    if (ctx->pc == 0x182700u) {
        ctx->pc = 0x182704u;
        goto label_182704;
    }
    ctx->pc = 0x1826FCu;
    SET_GPR_U32(ctx, 31, 0x182704u);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x1826FCu, 0x182704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182704u;
label_182704:
    // 0x182704: 0x1200ffec  beqz        $s0, . + 4 + (-0x14 << 2)
label_182708:
    if (ctx->pc == 0x182708u) {
        ctx->pc = 0x18270Cu;
        goto label_18270c;
    }
    ctx->pc = 0x182704u;
    {
        const bool branch_taken_0x182704 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x182704) {
            ctx->pc = 0x1826B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1826b8;
        }
    }
    ctx->pc = 0x18270Cu;
label_18270c:
    // 0x18270c: 0x200f809  jalr        $s0
label_182710:
    if (ctx->pc == 0x182710u) {
        ctx->pc = 0x182714u;
        goto label_182714;
    }
    ctx->pc = 0x18270Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x182714u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18270Cu, 0x182714u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x182714u;
label_182714:
    // 0x182714: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
label_182718:
    if (ctx->pc == 0x182718u) {
        ctx->pc = 0x18271Cu;
        goto label_18271c;
    }
    ctx->pc = 0x182714u;
    {
        const bool branch_taken_0x182714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x182714) {
            ctx->pc = 0x1826B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1826b8;
        }
    }
    ctx->pc = 0x18271Cu;
label_18271c:
    // 0x18271c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x18271cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_182720:
    // 0x182720: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x182720u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_182724:
    // 0x182724: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x182724u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_182728:
    // 0x182728: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x182728u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_18272c:
    // 0x18272c: 0x3e00008  jr          $ra
label_182730:
    if (ctx->pc == 0x182730u) {
        ctx->pc = 0x182734u;
        goto label_182734;
    }
    ctx->pc = 0x18272Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18272Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x182734u;
label_182734:
    // 0x182734: 0x0  nop
    ctx->pc = 0x182734u;
    // NOP
label_182738:
    // 0x182738: 0x0  nop
    ctx->pc = 0x182738u;
    // NOP
label_18273c:
    // 0x18273c: 0x0  nop
    ctx->pc = 0x18273cu;
    // NOP
    ctx->pc = 0x182740u;
}
