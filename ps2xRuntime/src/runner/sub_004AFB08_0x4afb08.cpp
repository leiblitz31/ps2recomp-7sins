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

// Function: sub_004AFB08
// Address: 0x4afb08 - 0x4afb20
void sub_004AFB08_0x4afb08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AFB08_0x4afb08");
#endif

    switch (ctx->pc) {
        case 0x4afb18u: goto label_4afb18;
        default: break;
    }

    ctx->pc = 0x4afb08u;

    // 0x4afb08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4afb08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4afb0c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4afb0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4afb10: 0xc12d188  jal         func_4B4620
    ctx->pc = 0x4AFB10u;
    SET_GPR_U32(ctx, 31, 0x4AFB18u);
    ctx->pc = 0x4AFB14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AFB10u;
    // 0x4afb14: 0x248402c0  addiu       $a0, $a0, 0x2C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B4620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B4620u, 0x4AFB10u, 0x4AFB18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AFB18u;
label_4afb18:
    // 0x4afb18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4afb18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4afb1c: 0x3e00008  jr          $ra
    ctx->pc = 0x4AFB1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AFB1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AFB24u;
}
