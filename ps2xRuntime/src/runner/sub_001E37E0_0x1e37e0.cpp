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

// Function: sub_001E37E0
// Address: 0x1e37e0 - 0x1e3820
void sub_001E37E0_0x1e37e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E37E0_0x1e37e0");
#endif

    switch (ctx->pc) {
        case 0x1e3800u: goto label_1e3800;
        default: break;
    }

    ctx->pc = 0x1e37e0u;

    // 0x1e37e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e37e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e37e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e37e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e37e8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1e37e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1e37ec: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1e37ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1e37f0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1e37f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e37f4: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1e37f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e37f8: 0xc078e08  jal         func_1E3820
    ctx->pc = 0x1E37F8u;
    SET_GPR_U32(ctx, 31, 0x1E3800u);
    ctx->pc = 0x1E3820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3820u, 0x1E37F8u, 0x1E3800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3800u;
label_1e3800:
    // 0x1e3800: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e3800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e3804: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e3804u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e3808: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1e3808u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1e380c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E380Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E380Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E3814u;
    // 0x1e3814: 0x0  nop
    ctx->pc = 0x1e3814u;
    // NOP
    // 0x1e3818: 0x0  nop
    ctx->pc = 0x1e3818u;
    // NOP
    // 0x1e381c: 0x0  nop
    ctx->pc = 0x1e381cu;
    // NOP
    ctx->pc = 0x1e3820u;
}
