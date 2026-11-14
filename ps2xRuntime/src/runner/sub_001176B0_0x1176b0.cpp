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

// Function: sub_001176B0
// Address: 0x1176b0 - 0x1176f0
void sub_001176B0_0x1176b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001176B0_0x1176b0");
#endif

    switch (ctx->pc) {
        case 0x1176c8u: goto label_1176c8;
        case 0x1176d8u: goto label_1176d8;
        default: break;
    }

    ctx->pc = 0x1176b0u;

    // 0x1176b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1176b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1176b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1176b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1176b8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1176b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1176bc: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1176bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1176c0: 0xc044ecc  jal         func_113B30
    ctx->pc = 0x1176C0u;
    SET_GPR_U32(ctx, 31, 0x1176C8u);
    ctx->pc = 0x113B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113B30u, 0x1176C0u, 0x1176C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1176C8u;
label_1176c8:
    // 0x1176c8: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x1176c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x1176cc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1176ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1176d0: 0xc044ec4  jal         func_113B10
    ctx->pc = 0x1176D0u;
    SET_GPR_U32(ctx, 31, 0x1176D8u);
    ctx->pc = 0x113B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113B10u, 0x1176D0u, 0x1176D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1176D8u;
label_1176d8:
    // 0x1176d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1176d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1176dc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1176dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1176e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1176E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1176E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1176E8u;
    // 0x1176e8: 0x0  nop
    ctx->pc = 0x1176e8u;
    // NOP
    // 0x1176ec: 0x0  nop
    ctx->pc = 0x1176ecu;
    // NOP
    ctx->pc = 0x1176f0u;
}
