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

// Function: sub_004B3A98
// Address: 0x4b3a98 - 0x4b3ab8
void sub_004B3A98_0x4b3a98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B3A98_0x4b3a98");
#endif

    switch (ctx->pc) {
        case 0x4b3aacu: goto label_4b3aac;
        default: break;
    }

    ctx->pc = 0x4b3a98u;

    // 0x4b3a98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4b3a98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4b3a9c: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x4b3a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x4b3aa0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4b3aa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4b3aa4: 0xc127608  jal         func_49D820
    ctx->pc = 0x4B3AA4u;
    SET_GPR_U32(ctx, 31, 0x4B3AACu);
    ctx->pc = 0x4B3AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B3AA4u;
    // 0x4b3aa8: 0x2484edd8  addiu       $a0, $a0, -0x1228 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49D820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49D820u, 0x4B3AA4u, 0x4B3AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B3AACu;
label_4b3aac:
    // 0x4b3aac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4b3aacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b3ab0: 0x3e00008  jr          $ra
    ctx->pc = 0x4B3AB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B3AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3AB0u;
        // 0x4b3ab4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B3AB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B3AB8u;
}
