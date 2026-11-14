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

// Function: sub_004AC2A0
// Address: 0x4ac2a0 - 0x4ac2c0
void sub_004AC2A0_0x4ac2a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AC2A0_0x4ac2a0");
#endif

    switch (ctx->pc) {
        case 0x4ac2b4u: goto label_4ac2b4;
        default: break;
    }

    ctx->pc = 0x4ac2a0u;

    // 0x4ac2a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4ac2a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4ac2a4: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x4ac2a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x4ac2a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ac2a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4ac2ac: 0xc127608  jal         func_49D820
    ctx->pc = 0x4AC2ACu;
    SET_GPR_U32(ctx, 31, 0x4AC2B4u);
    ctx->pc = 0x4AC2B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AC2ACu;
    // 0x4ac2b0: 0x24848a10  addiu       $a0, $a0, -0x75F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49D820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49D820u, 0x4AC2ACu, 0x4AC2B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AC2B4u;
label_4ac2b4:
    // 0x4ac2b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ac2b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ac2b8: 0x3e00008  jr          $ra
    ctx->pc = 0x4AC2B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AC2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC2B8u;
        // 0x4ac2bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AC2B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AC2C0u;
}
