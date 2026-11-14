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

// Function: sub_00243730
// Address: 0x243730 - 0x2437c0
void sub_00243730_0x243730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00243730_0x243730");
#endif

    switch (ctx->pc) {
        case 0x243754u: goto label_243754;
        case 0x243760u: goto label_243760;
        case 0x243784u: goto label_243784;
        case 0x2437a0u: goto label_2437a0;
        default: break;
    }

    ctx->pc = 0x243730u;

    // 0x243730: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x243730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x243734: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x243734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x243738: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x243738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x24373c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x24373cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x243740: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x243740u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x243744: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x243744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x243748: 0x24440034  addiu       $a0, $v0, 0x34
    ctx->pc = 0x243748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
    // 0x24374c: 0xc090cac  jal         func_2432B0
    ctx->pc = 0x24374Cu;
    SET_GPR_U32(ctx, 31, 0x243754u);
    ctx->pc = 0x2432B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2432B0u, 0x24374Cu, 0x243754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243754u;
label_243754:
    // 0x243754: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x243754u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243758: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x243758u;
    {
        const bool branch_taken_0x243758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x243758) {
            ctx->pc = 0x243790u;
            goto label_243790;
        }
    }
    ctx->pc = 0x243760u;
label_243760:
    // 0x243760: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x243760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x243764: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x243764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x243768: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x243768u;
    {
        const bool branch_taken_0x243768 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x243768) {
            ctx->pc = 0x24378Cu;
            goto label_24378c;
        }
    }
    ctx->pc = 0x243770u;
    // 0x243770: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x243770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x243774: 0x24440034  addiu       $a0, $v0, 0x34
    ctx->pc = 0x243774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
    // 0x243778: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x243778u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24377c: 0xc090df0  jal         func_2437C0
    ctx->pc = 0x24377Cu;
    SET_GPR_U32(ctx, 31, 0x243784u);
    ctx->pc = 0x2437C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2437C0u, 0x24377Cu, 0x243784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243784u;
label_243784:
    // 0x243784: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x243784u;
    {
        const bool branch_taken_0x243784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x243784) {
            ctx->pc = 0x2437A8u;
            goto label_2437a8;
        }
    }
    ctx->pc = 0x24378Cu;
label_24378c:
    // 0x24378c: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x24378cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_243790:
    // 0x243790: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x243790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x243794: 0x24440034  addiu       $a0, $v0, 0x34
    ctx->pc = 0x243794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
    // 0x243798: 0xc090ca4  jal         func_243290
    ctx->pc = 0x243798u;
    SET_GPR_U32(ctx, 31, 0x2437A0u);
    ctx->pc = 0x243290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243290u, 0x243798u, 0x2437A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2437A0u;
label_2437a0:
    // 0x2437a0: 0x1602ffef  bne         $s0, $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x2437A0u;
    {
        const bool branch_taken_0x2437a0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x2437a0) {
            ctx->pc = 0x243760u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_243760;
        }
    }
    ctx->pc = 0x2437A8u;
label_2437a8:
    // 0x2437a8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2437a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2437ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2437acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2437b0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2437b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2437b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2437B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2437B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2437BCu;
    // 0x2437bc: 0x0  nop
    ctx->pc = 0x2437bcu;
    // NOP
    ctx->pc = 0x2437c0u;
}
