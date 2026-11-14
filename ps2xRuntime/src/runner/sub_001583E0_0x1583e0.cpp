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

// Function: sub_001583E0
// Address: 0x1583e0 - 0x158420
void sub_001583E0_0x1583e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001583E0_0x1583e0");
#endif

    switch (ctx->pc) {
        case 0x158404u: goto label_158404;
        default: break;
    }

    ctx->pc = 0x1583e0u;

    // 0x1583e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1583e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1583e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1583e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1583e8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1583e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1583ec: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1583ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1583f0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1583f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1583f4: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1583f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1583f8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1583f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1583fc: 0xc056108  jal         func_158420
    ctx->pc = 0x1583FCu;
    SET_GPR_U32(ctx, 31, 0x158404u);
    ctx->pc = 0x158420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158420u, 0x1583FCu, 0x158404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158404u;
label_158404:
    // 0x158404: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x158404u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x158408: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x158408u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x15840c: 0x3e00008  jr          $ra
    ctx->pc = 0x15840Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15840Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x158414u;
    // 0x158414: 0x0  nop
    ctx->pc = 0x158414u;
    // NOP
    // 0x158418: 0x0  nop
    ctx->pc = 0x158418u;
    // NOP
    // 0x15841c: 0x0  nop
    ctx->pc = 0x15841cu;
    // NOP
    ctx->pc = 0x158420u;
}
