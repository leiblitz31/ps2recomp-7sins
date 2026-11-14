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

// Function: sub_002E0490
// Address: 0x2e0490 - 0x2e04d0
void sub_002E0490_0x2e0490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E0490_0x2e0490");
#endif

    switch (ctx->pc) {
        case 0x2e04b0u: goto label_2e04b0;
        default: break;
    }

    ctx->pc = 0x2e0490u;

    // 0x2e0490: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e0490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2e0494: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e0494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e0498: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2e0498u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2e049c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2e049cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2e04a0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2e04a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e04a4: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x2e04a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e04a8: 0xc0b8134  jal         func_2E04D0
    ctx->pc = 0x2E04A8u;
    SET_GPR_U32(ctx, 31, 0x2E04B0u);
    ctx->pc = 0x2E04D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E04D0u, 0x2E04A8u, 0x2E04B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E04B0u;
label_2e04b0:
    // 0x2e04b0: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2e04b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e04b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e04b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e04b8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2e04b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2e04bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2E04BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E04BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E04C4u;
    // 0x2e04c4: 0x0  nop
    ctx->pc = 0x2e04c4u;
    // NOP
    // 0x2e04c8: 0x0  nop
    ctx->pc = 0x2e04c8u;
    // NOP
    // 0x2e04cc: 0x0  nop
    ctx->pc = 0x2e04ccu;
    // NOP
    ctx->pc = 0x2e04d0u;
}
