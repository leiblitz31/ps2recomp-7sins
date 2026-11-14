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

// Function: sub_0041C9B0
// Address: 0x41c9b0 - 0x41c9e0
void sub_0041C9B0_0x41c9b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041C9B0_0x41c9b0");
#endif

    switch (ctx->pc) {
        case 0x41c9d0u: goto label_41c9d0;
        default: break;
    }

    ctx->pc = 0x41c9b0u;

    // 0x41c9b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x41c9b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x41c9b4: 0x3c060042  lui         $a2, 0x42
    ctx->pc = 0x41c9b4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)66 << 16));
    // 0x41c9b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x41c9b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x41c9bc: 0x24c6cc70  addiu       $a2, $a2, -0x3390
    ctx->pc = 0x41c9bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954096));
    // 0x41c9c0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x41c9c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x41c9c4: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x41c9c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x41c9c8: 0xc106c40  jal         func_41B100
    ctx->pc = 0x41C9C8u;
    SET_GPR_U32(ctx, 31, 0x41C9D0u);
    ctx->pc = 0x41C9CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41C9C8u;
    // 0x41c9cc: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41B100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41B100u, 0x41C9C8u, 0x41C9D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41C9D0u;
label_41c9d0:
    // 0x41c9d0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x41c9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x41c9d4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x41c9d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x41c9d8: 0x3e00008  jr          $ra
    ctx->pc = 0x41C9D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41C9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C9D8u;
        // 0x41c9dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41C9D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41C9E0u;
}
