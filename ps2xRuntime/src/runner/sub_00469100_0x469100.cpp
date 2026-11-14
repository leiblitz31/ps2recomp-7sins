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

// Function: sub_00469100
// Address: 0x469100 - 0x469130
void sub_00469100_0x469100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00469100_0x469100");
#endif

    switch (ctx->pc) {
        case 0x46911cu: goto label_46911c;
        default: break;
    }

    ctx->pc = 0x469100u;

    // 0x469100: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x469100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x469104: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x469104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x469108: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x469108u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x46910c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x46910cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x469110: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x469110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x469114: 0xc11a44c  jal         func_469130
    ctx->pc = 0x469114u;
    SET_GPR_U32(ctx, 31, 0x46911Cu);
    ctx->pc = 0x469130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x469130u, 0x469114u, 0x46911Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46911Cu;
label_46911c:
    // 0x46911c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x46911cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x469120: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x469120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x469124: 0x3e00008  jr          $ra
    ctx->pc = 0x469124u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x469124u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46912Cu;
    // 0x46912c: 0x0  nop
    ctx->pc = 0x46912cu;
    // NOP
    ctx->pc = 0x469130u;
}
