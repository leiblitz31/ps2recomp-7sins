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

// Function: sub_0022C8D0
// Address: 0x22c8d0 - 0x22c910
void sub_0022C8D0_0x22c8d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022C8D0_0x22c8d0");
#endif

    switch (ctx->pc) {
        case 0x22c8f0u: goto label_22c8f0;
        default: break;
    }

    ctx->pc = 0x22c8d0u;

    // 0x22c8d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x22c8d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x22c8d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22c8d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22c8d8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x22c8d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x22c8dc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x22c8dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x22c8e0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x22c8e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22c8e4: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x22c8e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22c8e8: 0xc08b244  jal         func_22C910
    ctx->pc = 0x22C8E8u;
    SET_GPR_U32(ctx, 31, 0x22C8F0u);
    ctx->pc = 0x22C910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C910u, 0x22C8E8u, 0x22C8F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C8F0u;
label_22c8f0:
    // 0x22c8f0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x22c8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22c8f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22c8f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22c8f8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x22c8f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x22c8fc: 0x3e00008  jr          $ra
    ctx->pc = 0x22C8FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22C8FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22C904u;
    // 0x22c904: 0x0  nop
    ctx->pc = 0x22c904u;
    // NOP
    // 0x22c908: 0x0  nop
    ctx->pc = 0x22c908u;
    // NOP
    // 0x22c90c: 0x0  nop
    ctx->pc = 0x22c90cu;
    // NOP
    ctx->pc = 0x22c910u;
}
