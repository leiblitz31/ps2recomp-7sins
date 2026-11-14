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

// Function: sub_0014EED0
// Address: 0x14eed0 - 0x14ef10
void sub_0014EED0_0x14eed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014EED0_0x14eed0");
#endif

    switch (ctx->pc) {
        case 0x14eef4u: goto label_14eef4;
        default: break;
    }

    ctx->pc = 0x14eed0u;

    // 0x14eed0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x14eed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x14eed4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14eed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14eed8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x14eed8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x14eedc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x14eedcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x14eee0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x14eee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14eee4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x14eee4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14eee8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x14eee8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14eeec: 0xc053bc4  jal         func_14EF10
    ctx->pc = 0x14EEECu;
    SET_GPR_U32(ctx, 31, 0x14EEF4u);
    ctx->pc = 0x14EF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EF10u, 0x14EEECu, 0x14EEF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EEF4u;
label_14eef4:
    // 0x14eef4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14eef4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14eef8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x14eef8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x14eefc: 0x3e00008  jr          $ra
    ctx->pc = 0x14EEFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14EEFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14EF04u;
    // 0x14ef04: 0x0  nop
    ctx->pc = 0x14ef04u;
    // NOP
    // 0x14ef08: 0x0  nop
    ctx->pc = 0x14ef08u;
    // NOP
    // 0x14ef0c: 0x0  nop
    ctx->pc = 0x14ef0cu;
    // NOP
    ctx->pc = 0x14ef10u;
}
