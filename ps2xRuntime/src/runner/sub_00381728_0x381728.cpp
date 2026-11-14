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

// Function: sub_00381728
// Address: 0x381728 - 0x381780
void sub_00381728_0x381728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00381728_0x381728");
#endif

    switch (ctx->pc) {
        case 0x381750u: goto label_381750;
        case 0x381758u: goto label_381758;
        case 0x381760u: goto label_381760;
        case 0x381768u: goto label_381768;
        default: break;
    }

    ctx->pc = 0x381728u;

    // 0x381728: 0x8f82a914  lw          $v0, -0x56EC($gp)
    ctx->pc = 0x381728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945044)));
    // 0x38172c: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x38172cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x381730: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x381730u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x381734: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x381734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x381738: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x381738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x38173c: 0xaf82a914  sw          $v0, -0x56EC($gp)
    ctx->pc = 0x38173cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294945044), GPR_U32(ctx, 2));
    // 0x381740: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x381740u;
    {
        const bool branch_taken_0x381740 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x381744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381740u;
        // 0x381744: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x381740) {
            ctx->pc = 0x381768u;
            goto label_381768;
        }
    }
    ctx->pc = 0x381748u;
    // 0x381748: 0xc0e0718  jal         func_381C60
    ctx->pc = 0x381748u;
    SET_GPR_U32(ctx, 31, 0x381750u);
    ctx->pc = 0x381C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x381C60u, 0x381748u, 0x381750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x381750u;
label_381750:
    // 0x381750: 0xc0e07c2  jal         func_381F08
    ctx->pc = 0x381750u;
    SET_GPR_U32(ctx, 31, 0x381758u);
    ctx->pc = 0x381F08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x381F08u, 0x381750u, 0x381758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x381758u;
label_381758:
    // 0x381758: 0xc0e0700  jal         func_381C00
    ctx->pc = 0x381758u;
    SET_GPR_U32(ctx, 31, 0x381760u);
    ctx->pc = 0x381C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x381C00u, 0x381758u, 0x381760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x381760u;
label_381760:
    // 0x381760: 0xc0e070c  jal         func_381C30
    ctx->pc = 0x381760u;
    SET_GPR_U32(ctx, 31, 0x381768u);
    ctx->pc = 0x381C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x381C30u, 0x381760u, 0x381768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x381768u;
label_381768:
    // 0x381768: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x381768u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38176c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38176cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x381770: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x381770u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x381774: 0x3e00008  jr          $ra
    ctx->pc = 0x381774u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x381778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381774u;
        // 0x381778: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x381774u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38177Cu;
    // 0x38177c: 0x0  nop
    ctx->pc = 0x38177cu;
    // NOP
    ctx->pc = 0x381780u;
}
