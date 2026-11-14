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

// Function: sub_002DE3E0
// Address: 0x2de3e0 - 0x2de420
void sub_002DE3E0_0x2de3e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DE3E0_0x2de3e0");
#endif

    switch (ctx->pc) {
        case 0x2de400u: goto label_2de400;
        default: break;
    }

    ctx->pc = 0x2de3e0u;

    // 0x2de3e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2de3e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2de3e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2de3e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2de3e8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2de3e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2de3ec: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2de3ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2de3f0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2de3f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2de3f4: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x2de3f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2de3f8: 0xc0b7908  jal         func_2DE420
    ctx->pc = 0x2DE3F8u;
    SET_GPR_U32(ctx, 31, 0x2DE400u);
    ctx->pc = 0x2DE420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE420u, 0x2DE3F8u, 0x2DE400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE400u;
label_2de400:
    // 0x2de400: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2de400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2de404: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2de404u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2de408: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2de408u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2de40c: 0x3e00008  jr          $ra
    ctx->pc = 0x2DE40Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DE40Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DE414u;
    // 0x2de414: 0x0  nop
    ctx->pc = 0x2de414u;
    // NOP
    // 0x2de418: 0x0  nop
    ctx->pc = 0x2de418u;
    // NOP
    // 0x2de41c: 0x0  nop
    ctx->pc = 0x2de41cu;
    // NOP
    ctx->pc = 0x2de420u;
}
