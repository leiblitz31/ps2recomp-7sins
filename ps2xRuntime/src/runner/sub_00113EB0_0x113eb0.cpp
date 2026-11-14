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

// Function: sub_00113EB0
// Address: 0x113eb0 - 0x113ef0
void sub_00113EB0_0x113eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00113EB0_0x113eb0");
#endif

    switch (ctx->pc) {
        case 0x113ed0u: goto label_113ed0;
        default: break;
    }

    ctx->pc = 0x113eb0u;

    // 0x113eb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x113eb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x113eb4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x113eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x113eb8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x113eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x113ebc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x113ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x113ec0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x113ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x113ec4: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x113ec4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x113ec8: 0xc044fbc  jal         func_113EF0
    ctx->pc = 0x113EC8u;
    SET_GPR_U32(ctx, 31, 0x113ED0u);
    ctx->pc = 0x113EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113EF0u, 0x113EC8u, 0x113ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113ED0u;
label_113ed0:
    // 0x113ed0: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x113ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x113ed4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x113ed4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x113ed8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x113ed8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x113edc: 0x3e00008  jr          $ra
    ctx->pc = 0x113EDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x113EDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x113EE4u;
    // 0x113ee4: 0x0  nop
    ctx->pc = 0x113ee4u;
    // NOP
    // 0x113ee8: 0x0  nop
    ctx->pc = 0x113ee8u;
    // NOP
    // 0x113eec: 0x0  nop
    ctx->pc = 0x113eecu;
    // NOP
    ctx->pc = 0x113ef0u;
}
