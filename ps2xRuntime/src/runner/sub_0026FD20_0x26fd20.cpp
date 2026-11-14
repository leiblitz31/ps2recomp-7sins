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

// Function: sub_0026FD20
// Address: 0x26fd20 - 0x26fd60
void sub_0026FD20_0x26fd20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026FD20_0x26fd20");
#endif

    switch (ctx->pc) {
        case 0x26fd44u: goto label_26fd44;
        default: break;
    }

    ctx->pc = 0x26fd20u;

    // 0x26fd20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x26fd20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x26fd24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x26fd24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x26fd28: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x26fd28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x26fd2c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x26fd2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x26fd30: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x26fd30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26fd34: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x26fd34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26fd38: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26fd38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26fd3c: 0xc09bf58  jal         func_26FD60
    ctx->pc = 0x26FD3Cu;
    SET_GPR_U32(ctx, 31, 0x26FD44u);
    ctx->pc = 0x26FD60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26FD60u, 0x26FD3Cu, 0x26FD44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FD44u;
label_26fd44:
    // 0x26fd44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26fd44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26fd48: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x26fd48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x26fd4c: 0x3e00008  jr          $ra
    ctx->pc = 0x26FD4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26FD4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26FD54u;
    // 0x26fd54: 0x0  nop
    ctx->pc = 0x26fd54u;
    // NOP
    // 0x26fd58: 0x0  nop
    ctx->pc = 0x26fd58u;
    // NOP
    // 0x26fd5c: 0x0  nop
    ctx->pc = 0x26fd5cu;
    // NOP
    ctx->pc = 0x26fd60u;
}
