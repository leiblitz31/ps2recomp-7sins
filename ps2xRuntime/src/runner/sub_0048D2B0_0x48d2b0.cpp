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

// Function: sub_0048D2B0
// Address: 0x48d2b0 - 0x48d300
void sub_0048D2B0_0x48d2b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048D2B0_0x48d2b0");
#endif

    switch (ctx->pc) {
        case 0x48d2d8u: goto label_48d2d8;
        case 0x48d2e8u: goto label_48d2e8;
        default: break;
    }

    ctx->pc = 0x48d2b0u;

    // 0x48d2b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x48d2b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x48d2b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x48d2b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x48d2b8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x48d2b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x48d2bc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x48d2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48d2c0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x48d2c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x48d2c4: 0x3c050049  lui         $a1, 0x49
    ctx->pc = 0x48d2c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)73 << 16));
    // 0x48d2c8: 0x24a5d340  addiu       $a1, $a1, -0x2CC0
    ctx->pc = 0x48d2c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955840));
    // 0x48d2cc: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x48d2ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48d2d0: 0xc0e2628  jal         func_3898A0
    ctx->pc = 0x48D2D0u;
    SET_GPR_U32(ctx, 31, 0x48D2D8u);
    ctx->pc = 0x3898A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3898A0u, 0x48D2D0u, 0x48D2D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48D2D8u;
label_48d2d8:
    // 0x48d2d8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x48d2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48d2dc: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x48d2dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x48d2e0: 0xc1234c0  jal         func_48D300
    ctx->pc = 0x48D2E0u;
    SET_GPR_U32(ctx, 31, 0x48D2E8u);
    ctx->pc = 0x48D300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48D300u, 0x48D2E0u, 0x48D2E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48D2E8u;
label_48d2e8:
    // 0x48d2e8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x48d2e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x48d2ec: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x48d2ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x48d2f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x48d2f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48d2f4: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x48d2f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x48d2f8: 0x3e00008  jr          $ra
    ctx->pc = 0x48D2F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48D2F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48D300u;
}
