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

// Function: sub_001B9AD0
// Address: 0x1b9ad0 - 0x1b9b10
void sub_001B9AD0_0x1b9ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B9AD0_0x1b9ad0");
#endif

    switch (ctx->pc) {
        case 0x1b9af0u: goto label_1b9af0;
        default: break;
    }

    ctx->pc = 0x1b9ad0u;

    // 0x1b9ad0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b9ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b9ad4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b9ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b9ad8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1b9ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1b9adc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1b9adcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1b9ae0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1b9ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b9ae4: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1b9ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b9ae8: 0xc06e6c4  jal         func_1B9B10
    ctx->pc = 0x1B9AE8u;
    SET_GPR_U32(ctx, 31, 0x1B9AF0u);
    ctx->pc = 0x1B9B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9B10u, 0x1B9AE8u, 0x1B9AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9AF0u;
label_1b9af0:
    // 0x1b9af0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1b9af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b9af4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b9af4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b9af8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1b9af8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1b9afc: 0x3e00008  jr          $ra
    ctx->pc = 0x1B9AFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B9AFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B9B04u;
    // 0x1b9b04: 0x0  nop
    ctx->pc = 0x1b9b04u;
    // NOP
    // 0x1b9b08: 0x0  nop
    ctx->pc = 0x1b9b08u;
    // NOP
    // 0x1b9b0c: 0x0  nop
    ctx->pc = 0x1b9b0cu;
    // NOP
    ctx->pc = 0x1b9b10u;
}
