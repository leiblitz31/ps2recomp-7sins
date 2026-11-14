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

// Function: sub_0018C290
// Address: 0x18c290 - 0x18c2d0
void sub_0018C290_0x18c290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018C290_0x18c290");
#endif

    switch (ctx->pc) {
        case 0x18c2b4u: goto label_18c2b4;
        default: break;
    }

    ctx->pc = 0x18c290u;

    // 0x18c290: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x18c290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x18c294: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18c294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18c298: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x18c298u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x18c29c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x18c29cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x18c2a0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x18c2a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18c2a4: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x18c2a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18c2a8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18c2a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c2ac: 0xc0630b4  jal         func_18C2D0
    ctx->pc = 0x18C2ACu;
    SET_GPR_U32(ctx, 31, 0x18C2B4u);
    ctx->pc = 0x18C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2D0u, 0x18C2ACu, 0x18C2B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C2B4u;
label_18c2b4:
    // 0x18c2b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18c2b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18c2b8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x18c2b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x18c2bc: 0x3e00008  jr          $ra
    ctx->pc = 0x18C2BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18C2BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18C2C4u;
    // 0x18c2c4: 0x0  nop
    ctx->pc = 0x18c2c4u;
    // NOP
    // 0x18c2c8: 0x0  nop
    ctx->pc = 0x18c2c8u;
    // NOP
    // 0x18c2cc: 0x0  nop
    ctx->pc = 0x18c2ccu;
    // NOP
    ctx->pc = 0x18c2d0u;
}
