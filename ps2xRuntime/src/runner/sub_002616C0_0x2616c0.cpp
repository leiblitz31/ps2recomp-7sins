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

// Function: sub_002616C0
// Address: 0x2616c0 - 0x261760
void sub_002616C0_0x2616c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002616C0_0x2616c0");
#endif

    switch (ctx->pc) {
        case 0x2616c0u: goto label_2616c0;
        case 0x2616c4u: goto label_2616c4;
        case 0x2616c8u: goto label_2616c8;
        case 0x2616ccu: goto label_2616cc;
        case 0x2616d0u: goto label_2616d0;
        case 0x2616d4u: goto label_2616d4;
        case 0x2616d8u: goto label_2616d8;
        case 0x2616dcu: goto label_2616dc;
        case 0x2616e0u: goto label_2616e0;
        case 0x2616e4u: goto label_2616e4;
        case 0x2616e8u: goto label_2616e8;
        case 0x2616ecu: goto label_2616ec;
        case 0x2616f0u: goto label_2616f0;
        case 0x2616f4u: goto label_2616f4;
        case 0x2616f8u: goto label_2616f8;
        case 0x2616fcu: goto label_2616fc;
        case 0x261700u: goto label_261700;
        case 0x261704u: goto label_261704;
        case 0x261708u: goto label_261708;
        case 0x26170cu: goto label_26170c;
        case 0x261710u: goto label_261710;
        case 0x261714u: goto label_261714;
        case 0x261718u: goto label_261718;
        case 0x26171cu: goto label_26171c;
        case 0x261720u: goto label_261720;
        case 0x261724u: goto label_261724;
        case 0x261728u: goto label_261728;
        case 0x26172cu: goto label_26172c;
        case 0x261730u: goto label_261730;
        case 0x261734u: goto label_261734;
        case 0x261738u: goto label_261738;
        case 0x26173cu: goto label_26173c;
        case 0x261740u: goto label_261740;
        case 0x261744u: goto label_261744;
        case 0x261748u: goto label_261748;
        case 0x26174cu: goto label_26174c;
        case 0x261750u: goto label_261750;
        case 0x261754u: goto label_261754;
        case 0x261758u: goto label_261758;
        case 0x26175cu: goto label_26175c;
        default: break;
    }

    ctx->pc = 0x2616c0u;

label_2616c0:
    // 0x2616c0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2616c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_2616c4:
    // 0x2616c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2616c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2616c8:
    // 0x2616c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2616c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2616cc:
    // 0x2616cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2616ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2616d0:
    // 0x2616d0: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x2616d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_2616d4:
    // 0x2616d4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2616d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2616d8:
    // 0x2616d8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2616dc:
    if (ctx->pc == 0x2616DCu) {
        ctx->pc = 0x2616E0u;
        goto label_2616e0;
    }
    ctx->pc = 0x2616D8u;
    {
        const bool branch_taken_0x2616d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2616d8) {
            ctx->pc = 0x2616E8u;
            goto label_2616e8;
        }
    }
    ctx->pc = 0x2616E0u;
label_2616e0:
    // 0x2616e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2616e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2616e4:
    // 0x2616e4: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x2616e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_2616e8:
    // 0x2616e8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2616e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2616ec:
    // 0x2616ec: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x2616ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2616f0:
    // 0x2616f0: 0xc119b68  jal         func_466DA0
label_2616f4:
    if (ctx->pc == 0x2616F4u) {
        ctx->pc = 0x2616F8u;
        goto label_2616f8;
    }
    ctx->pc = 0x2616F0u;
    SET_GPR_U32(ctx, 31, 0x2616F8u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x2616F0u, 0x2616F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2616F8u;
label_2616f8:
    // 0x2616f8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2616f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2616fc:
    // 0x2616fc: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_261700:
    if (ctx->pc == 0x261700u) {
        ctx->pc = 0x261704u;
        goto label_261704;
    }
    ctx->pc = 0x2616FCu;
    {
        const bool branch_taken_0x2616fc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2616fc) {
            ctx->pc = 0x261710u;
            goto label_261710;
        }
    }
    ctx->pc = 0x261704u;
label_261704:
    // 0x261704: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x261704u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_261708:
    // 0x261708: 0x1000000e  b           . + 4 + (0xE << 2)
label_26170c:
    if (ctx->pc == 0x26170Cu) {
        ctx->pc = 0x261710u;
        goto label_261710;
    }
    ctx->pc = 0x261708u;
    {
        const bool branch_taken_0x261708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x261708) {
            ctx->pc = 0x261744u;
            goto label_261744;
        }
    }
    ctx->pc = 0x261710u;
label_261710:
    // 0x261710: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x261710u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_261714:
    // 0x261714: 0xc0ba088  jal         func_2E8220
label_261718:
    if (ctx->pc == 0x261718u) {
        ctx->pc = 0x26171Cu;
        goto label_26171c;
    }
    ctx->pc = 0x261714u;
    SET_GPR_U32(ctx, 31, 0x26171Cu);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x261714u, 0x26171Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26171Cu;
label_26171c:
    // 0x26171c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26171cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_261720:
    // 0x261720: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x261720u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_261724:
    // 0x261724: 0xc0ba088  jal         func_2E8220
label_261728:
    if (ctx->pc == 0x261728u) {
        ctx->pc = 0x26172Cu;
        goto label_26172c;
    }
    ctx->pc = 0x261724u;
    SET_GPR_U32(ctx, 31, 0x26172Cu);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x261724u, 0x26172Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26172Cu;
label_26172c:
    // 0x26172c: 0x1200ffee  beqz        $s0, . + 4 + (-0x12 << 2)
label_261730:
    if (ctx->pc == 0x261730u) {
        ctx->pc = 0x261734u;
        goto label_261734;
    }
    ctx->pc = 0x26172Cu;
    {
        const bool branch_taken_0x26172c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x26172c) {
            ctx->pc = 0x2616E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2616e8;
        }
    }
    ctx->pc = 0x261734u;
label_261734:
    // 0x261734: 0x200f809  jalr        $s0
label_261738:
    if (ctx->pc == 0x261738u) {
        ctx->pc = 0x26173Cu;
        goto label_26173c;
    }
    ctx->pc = 0x261734u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x26173Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x261734u, 0x26173Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26173Cu;
label_26173c:
    // 0x26173c: 0x1000ffea  b           . + 4 + (-0x16 << 2)
label_261740:
    if (ctx->pc == 0x261740u) {
        ctx->pc = 0x261744u;
        goto label_261744;
    }
    ctx->pc = 0x26173Cu;
    {
        const bool branch_taken_0x26173c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26173c) {
            ctx->pc = 0x2616E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2616e8;
        }
    }
    ctx->pc = 0x261744u;
label_261744:
    // 0x261744: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x261744u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_261748:
    // 0x261748: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x261748u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_26174c:
    // 0x26174c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26174cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_261750:
    // 0x261750: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x261750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_261754:
    // 0x261754: 0x3e00008  jr          $ra
label_261758:
    if (ctx->pc == 0x261758u) {
        ctx->pc = 0x26175Cu;
        goto label_26175c;
    }
    ctx->pc = 0x261754u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x261754u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26175Cu;
label_26175c:
    // 0x26175c: 0x0  nop
    ctx->pc = 0x26175cu;
    // NOP
    ctx->pc = 0x261760u;
}
