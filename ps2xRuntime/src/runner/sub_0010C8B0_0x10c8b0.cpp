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

// Function: sub_0010C8B0
// Address: 0x10c8b0 - 0x10c900
void sub_0010C8B0_0x10c8b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010C8B0_0x10c8b0");
#endif

    switch (ctx->pc) {
        case 0x10c8e0u: goto label_10c8e0;
        default: break;
    }

    ctx->pc = 0x10c8b0u;

    // 0x10c8b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10c8b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10c8b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10c8b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10c8b8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x10c8b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x10c8bc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x10c8bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x10c8c0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x10c8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10c8c4: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x10c8c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x10c8c8: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x10c8c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x10c8cc: 0x3c06005f  lui         $a2, 0x5F
    ctx->pc = 0x10c8ccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)95 << 16));
    // 0x10c8d0: 0x24c67e68  addiu       $a2, $a2, 0x7E68
    ctx->pc = 0x10c8d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32360));
    // 0x10c8d4: 0x8fa70020  lw          $a3, 0x20($sp)
    ctx->pc = 0x10c8d4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10c8d8: 0xc0bc398  jal         func_2F0E60
    ctx->pc = 0x10C8D8u;
    SET_GPR_U32(ctx, 31, 0x10C8E0u);
    ctx->pc = 0x2F0E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0E60u, 0x10C8D8u, 0x10C8E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C8E0u;
label_10c8e0:
    // 0x10c8e0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x10c8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10c8e4: 0xa0400027  sb          $zero, 0x27($v0)
    ctx->pc = 0x10c8e4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 39), (uint8_t)GPR_U32(ctx, 0));
    // 0x10c8e8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x10c8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10c8ec: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x10c8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x10c8f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10c8f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10c8f4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x10c8f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x10c8f8: 0x3e00008  jr          $ra
    ctx->pc = 0x10C8F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10C8F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10C900u;
}
