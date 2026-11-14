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

// Function: sub_002D1CF0
// Address: 0x2d1cf0 - 0x2d1d30
void sub_002D1CF0_0x2d1cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D1CF0_0x2d1cf0");
#endif

    switch (ctx->pc) {
        case 0x2d1d10u: goto label_2d1d10;
        default: break;
    }

    ctx->pc = 0x2d1cf0u;

    // 0x2d1cf0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d1cf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2d1cf4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d1cf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d1cf8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2d1cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2d1cfc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2d1cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2d1d00: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2d1d00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d1d04: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x2d1d04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d1d08: 0xc0b474c  jal         func_2D1D30
    ctx->pc = 0x2D1D08u;
    SET_GPR_U32(ctx, 31, 0x2D1D10u);
    ctx->pc = 0x2D1D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1D30u, 0x2D1D08u, 0x2D1D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1D10u;
label_2d1d10:
    // 0x2d1d10: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2d1d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d1d14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d1d14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d1d18: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2d1d18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2d1d1c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D1D1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D1D1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D1D24u;
    // 0x2d1d24: 0x0  nop
    ctx->pc = 0x2d1d24u;
    // NOP
    // 0x2d1d28: 0x0  nop
    ctx->pc = 0x2d1d28u;
    // NOP
    // 0x2d1d2c: 0x0  nop
    ctx->pc = 0x2d1d2cu;
    // NOP
    ctx->pc = 0x2d1d30u;
}
