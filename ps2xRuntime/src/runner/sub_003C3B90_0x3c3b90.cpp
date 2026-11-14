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

// Function: sub_003C3B90
// Address: 0x3c3b90 - 0x3c3bb8
void sub_003C3B90_0x3c3b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C3B90_0x3c3b90");
#endif

    switch (ctx->pc) {
        case 0x3c3bacu: goto label_3c3bac;
        default: break;
    }

    ctx->pc = 0x3c3b90u;

    // 0x3c3b90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3c3b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3c3b94: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3c3b94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c3b98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3c3b98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3c3b9c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3c3b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c3ba0: 0xac430038  sw          $v1, 0x38($v0)
    ctx->pc = 0x3c3ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 3));
    // 0x3c3ba4: 0xc0c0c5e  jal         func_303178
    ctx->pc = 0x3C3BA4u;
    SET_GPR_U32(ctx, 31, 0x3C3BACu);
    ctx->pc = 0x3C3BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C3BA4u;
    // 0x3c3ba8: 0x8c440060  lw          $a0, 0x60($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x303178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x303178u, 0x3C3BA4u, 0x3C3BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C3BACu;
label_3c3bac:
    // 0x3c3bac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3c3bacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3c3bb0: 0x3e00008  jr          $ra
    ctx->pc = 0x3C3BB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C3BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3BB0u;
        // 0x3c3bb4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C3BB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C3BB8u;
}
