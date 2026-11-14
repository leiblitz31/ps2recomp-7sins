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

// Function: sub_0044C940
// Address: 0x44c940 - 0x44c960
void sub_0044C940_0x44c940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0044C940_0x44c940");
#endif

    switch (ctx->pc) {
        case 0x44c950u: goto label_44c950;
        default: break;
    }

    ctx->pc = 0x44c940u;

    // 0x44c940: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x44c940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x44c944: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x44c944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x44c948: 0xc112f36  jal         func_44BCD8
    ctx->pc = 0x44C948u;
    SET_GPR_U32(ctx, 31, 0x44C950u);
    ctx->pc = 0x44BCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44BCD8u, 0x44C948u, 0x44C950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44C950u;
label_44c950:
    // 0x44c950: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x44c950u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x44c954: 0x3e00008  jr          $ra
    ctx->pc = 0x44C954u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44C958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C954u;
        // 0x44c958: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44C954u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x44C95Cu;
    // 0x44c95c: 0x0  nop
    ctx->pc = 0x44c95cu;
    // NOP
    ctx->pc = 0x44c960u;
}
