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

// Function: sub_004877C0
// Address: 0x4877c0 - 0x487800
void sub_004877C0_0x4877c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004877C0_0x4877c0");
#endif

    switch (ctx->pc) {
        case 0x4877e4u: goto label_4877e4;
        default: break;
    }

    ctx->pc = 0x4877c0u;

    // 0x4877c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4877c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4877c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4877c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4877c8: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x4877c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x4877cc: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x4877ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4877d0: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x4877d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x4877d4: 0x24a57800  addiu       $a1, $a1, 0x7800
    ctx->pc = 0x4877d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30720));
    // 0x4877d8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4877d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4877dc: 0xc0e2628  jal         func_3898A0
    ctx->pc = 0x4877DCu;
    SET_GPR_U32(ctx, 31, 0x4877E4u);
    ctx->pc = 0x3898A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3898A0u, 0x4877DCu, 0x4877E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4877E4u;
label_4877e4:
    // 0x4877e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4877e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4877e8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x4877e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x4877ec: 0x3e00008  jr          $ra
    ctx->pc = 0x4877ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4877ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4877F4u;
    // 0x4877f4: 0x0  nop
    ctx->pc = 0x4877f4u;
    // NOP
    // 0x4877f8: 0x0  nop
    ctx->pc = 0x4877f8u;
    // NOP
    // 0x4877fc: 0x0  nop
    ctx->pc = 0x4877fcu;
    // NOP
    ctx->pc = 0x487800u;
}
