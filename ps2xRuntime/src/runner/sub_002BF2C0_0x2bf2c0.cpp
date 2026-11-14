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

// Function: sub_002BF2C0
// Address: 0x2bf2c0 - 0x2bf2f0
void sub_002BF2C0_0x2bf2c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BF2C0_0x2bf2c0");
#endif

    switch (ctx->pc) {
        case 0x2bf2dcu: goto label_2bf2dc;
        default: break;
    }

    ctx->pc = 0x2bf2c0u;

    // 0x2bf2c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2bf2c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2bf2c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2bf2c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2bf2c8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2bf2c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2bf2cc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2bf2ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bf2d0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2bf2d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2bf2d4: 0xc0afcbc  jal         func_2BF2F0
    ctx->pc = 0x2BF2D4u;
    SET_GPR_U32(ctx, 31, 0x2BF2DCu);
    ctx->pc = 0x2BF2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF2F0u, 0x2BF2D4u, 0x2BF2DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF2DCu;
label_2bf2dc:
    // 0x2bf2dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2bf2dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bf2e0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2bf2e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2bf2e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2BF2E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BF2E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BF2ECu;
    // 0x2bf2ec: 0x0  nop
    ctx->pc = 0x2bf2ecu;
    // NOP
    ctx->pc = 0x2bf2f0u;
}
