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

// Function: sub_0028F0B0
// Address: 0x28f0b0 - 0x28f0f0
void sub_0028F0B0_0x28f0b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028F0B0_0x28f0b0");
#endif

    switch (ctx->pc) {
        case 0x28f0ccu: goto label_28f0cc;
        case 0x28f0dcu: goto label_28f0dc;
        default: break;
    }

    ctx->pc = 0x28f0b0u;

    // 0x28f0b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x28f0b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x28f0b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28f0b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28f0b8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x28f0b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x28f0bc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x28f0bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x28f0c0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x28f0c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28f0c4: 0xc0a13cc  jal         func_284F30
    ctx->pc = 0x28F0C4u;
    SET_GPR_U32(ctx, 31, 0x28F0CCu);
    ctx->pc = 0x284F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284F30u, 0x28F0C4u, 0x28F0CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F0CCu;
label_28f0cc:
    // 0x28f0cc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x28f0ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28f0d0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x28f0d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28f0d4: 0xc0a3c3c  jal         func_28F0F0
    ctx->pc = 0x28F0D4u;
    SET_GPR_U32(ctx, 31, 0x28F0DCu);
    ctx->pc = 0x28F0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F0F0u, 0x28F0D4u, 0x28F0DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F0DCu;
label_28f0dc:
    // 0x28f0dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28f0dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28f0e0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x28f0e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x28f0e4: 0x3e00008  jr          $ra
    ctx->pc = 0x28F0E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28F0E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28F0ECu;
    // 0x28f0ec: 0x0  nop
    ctx->pc = 0x28f0ecu;
    // NOP
    ctx->pc = 0x28f0f0u;
}
