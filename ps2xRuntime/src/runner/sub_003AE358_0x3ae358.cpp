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

// Function: sub_003AE358
// Address: 0x3ae358 - 0x3ae3b0
void sub_003AE358_0x3ae358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AE358_0x3ae358");
#endif

    switch (ctx->pc) {
        case 0x3ae368u: goto label_3ae368;
        case 0x3ae370u: goto label_3ae370;
        case 0x3ae378u: goto label_3ae378;
        case 0x3ae380u: goto label_3ae380;
        case 0x3ae388u: goto label_3ae388;
        case 0x3ae390u: goto label_3ae390;
        case 0x3ae398u: goto label_3ae398;
        case 0x3ae3a0u: goto label_3ae3a0;
        default: break;
    }

    ctx->pc = 0x3ae358u;

    // 0x3ae358: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3ae358u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3ae35c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3ae35cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3ae360: 0xc0eed9c  jal         func_3BB670
    ctx->pc = 0x3AE360u;
    SET_GPR_U32(ctx, 31, 0x3AE368u);
    ctx->pc = 0x3BB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BB670u, 0x3AE360u, 0x3AE368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AE368u;
label_3ae368:
    // 0x3ae368: 0xc0eba58  jal         func_3AE960
    ctx->pc = 0x3AE368u;
    SET_GPR_U32(ctx, 31, 0x3AE370u);
    ctx->pc = 0x3AE960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AE960u, 0x3AE368u, 0x3AE370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AE370u;
label_3ae370:
    // 0x3ae370: 0xc0ed404  jal         func_3B5010
    ctx->pc = 0x3AE370u;
    SET_GPR_U32(ctx, 31, 0x3AE378u);
    ctx->pc = 0x3B5010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B5010u, 0x3AE370u, 0x3AE378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AE378u;
label_3ae378:
    // 0x3ae378: 0xc0eaff2  jal         func_3ABFC8
    ctx->pc = 0x3AE378u;
    SET_GPR_U32(ctx, 31, 0x3AE380u);
    ctx->pc = 0x3ABFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ABFC8u, 0x3AE378u, 0x3AE380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AE380u;
label_3ae380:
    // 0x3ae380: 0xc0e9f46  jal         func_3A7D18
    ctx->pc = 0x3AE380u;
    SET_GPR_U32(ctx, 31, 0x3AE388u);
    ctx->pc = 0x3A7D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7D18u, 0x3AE380u, 0x3AE388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AE388u;
label_3ae388:
    // 0x3ae388: 0xc0ec90a  jal         func_3B2428
    ctx->pc = 0x3AE388u;
    SET_GPR_U32(ctx, 31, 0x3AE390u);
    ctx->pc = 0x3B2428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2428u, 0x3AE388u, 0x3AE390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AE390u;
label_3ae390:
    // 0x3ae390: 0xc0eed4a  jal         func_3BB528
    ctx->pc = 0x3AE390u;
    SET_GPR_U32(ctx, 31, 0x3AE398u);
    ctx->pc = 0x3BB528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BB528u, 0x3AE390u, 0x3AE398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AE398u;
label_3ae398:
    // 0x3ae398: 0xc0eb742  jal         func_3ADD08
    ctx->pc = 0x3AE398u;
    SET_GPR_U32(ctx, 31, 0x3AE3A0u);
    ctx->pc = 0x3AE39Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AE398u;
    // 0x3ae39c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3ADD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ADD08u, 0x3AE398u, 0x3AE3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AE3A0u;
label_3ae3a0:
    // 0x3ae3a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3ae3a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ae3a4: 0x3e00008  jr          $ra
    ctx->pc = 0x3AE3A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AE3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE3A4u;
        // 0x3ae3a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AE3A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AE3ACu;
    // 0x3ae3ac: 0x0  nop
    ctx->pc = 0x3ae3acu;
    // NOP
    ctx->pc = 0x3ae3b0u;
}
