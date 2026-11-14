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

// Function: sub_00153FE0
// Address: 0x153fe0 - 0x154020
void sub_00153FE0_0x153fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00153FE0_0x153fe0");
#endif

    switch (ctx->pc) {
        case 0x154000u: goto label_154000;
        default: break;
    }

    ctx->pc = 0x153fe0u;

    // 0x153fe0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x153fe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x153fe4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x153fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x153fe8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x153fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x153fec: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x153fecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x153ff0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x153ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x153ff4: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x153ff4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x153ff8: 0xc042b9c  jal         func_10AE70
    ctx->pc = 0x153FF8u;
    SET_GPR_U32(ctx, 31, 0x154000u);
    ctx->pc = 0x10AE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10AE70u, 0x153FF8u, 0x154000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154000u;
label_154000:
    // 0x154000: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x154000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x154004: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x154004u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x154008: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x154008u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x15400c: 0x3e00008  jr          $ra
    ctx->pc = 0x15400Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15400Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x154014u;
    // 0x154014: 0x0  nop
    ctx->pc = 0x154014u;
    // NOP
    // 0x154018: 0x0  nop
    ctx->pc = 0x154018u;
    // NOP
    // 0x15401c: 0x0  nop
    ctx->pc = 0x15401cu;
    // NOP
    ctx->pc = 0x154020u;
}
