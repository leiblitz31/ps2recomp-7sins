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

// Function: sub_003C5028
// Address: 0x3c5028 - 0x3c5048
void sub_003C5028_0x3c5028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C5028_0x3c5028");
#endif

    switch (ctx->pc) {
        case 0x3c5038u: goto label_3c5038;
        default: break;
    }

    ctx->pc = 0x3c5028u;

    // 0x3c5028: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3c5028u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3c502c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3c502cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3c5030: 0xc0f08a2  jal         func_3C2288
    ctx->pc = 0x3C5030u;
    SET_GPR_U32(ctx, 31, 0x3C5038u);
    ctx->pc = 0x3C2288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2288u, 0x3C5030u, 0x3C5038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C5038u;
label_3c5038:
    // 0x3c5038: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3c5038u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3c503c: 0x3e00008  jr          $ra
    ctx->pc = 0x3C503Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C5040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C503Cu;
        // 0x3c5040: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C503Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C5044u;
    // 0x3c5044: 0x0  nop
    ctx->pc = 0x3c5044u;
    // NOP
    ctx->pc = 0x3c5048u;
}
