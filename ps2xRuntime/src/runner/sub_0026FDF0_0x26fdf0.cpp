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

// Function: sub_0026FDF0
// Address: 0x26fdf0 - 0x26fe30
void sub_0026FDF0_0x26fdf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026FDF0_0x26fdf0");
#endif

    switch (ctx->pc) {
        case 0x26fe10u: goto label_26fe10;
        default: break;
    }

    ctx->pc = 0x26fdf0u;

    // 0x26fdf0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x26fdf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x26fdf4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x26fdf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x26fdf8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x26fdf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x26fdfc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x26fdfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x26fe00: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x26fe00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26fe04: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x26fe04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26fe08: 0xc09bf8c  jal         func_26FE30
    ctx->pc = 0x26FE08u;
    SET_GPR_U32(ctx, 31, 0x26FE10u);
    ctx->pc = 0x26FE30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26FE30u, 0x26FE08u, 0x26FE10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FE10u;
label_26fe10:
    // 0x26fe10: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x26fe10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26fe14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26fe14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26fe18: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x26fe18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x26fe1c: 0x3e00008  jr          $ra
    ctx->pc = 0x26FE1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26FE1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26FE24u;
    // 0x26fe24: 0x0  nop
    ctx->pc = 0x26fe24u;
    // NOP
    // 0x26fe28: 0x0  nop
    ctx->pc = 0x26fe28u;
    // NOP
    // 0x26fe2c: 0x0  nop
    ctx->pc = 0x26fe2cu;
    // NOP
    ctx->pc = 0x26fe30u;
}
