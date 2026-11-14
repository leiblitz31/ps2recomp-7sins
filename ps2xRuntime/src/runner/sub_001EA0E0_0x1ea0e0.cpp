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

// Function: sub_001EA0E0
// Address: 0x1ea0e0 - 0x1ea130
void sub_001EA0E0_0x1ea0e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EA0E0_0x1ea0e0");
#endif

    switch (ctx->pc) {
        case 0x1ea118u: goto label_1ea118;
        default: break;
    }

    ctx->pc = 0x1ea0e0u;

    // 0x1ea0e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ea0e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ea0e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ea0e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ea0e8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1ea0e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1ea0ec: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1ea0ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1ea0f0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1ea0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ea0f4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1ea0f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1ea0f8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1ea0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ea0fc: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1ea0fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1ea100: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1ea100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ea104: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x1ea104u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1ea108: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1ea108u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ea10c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ea10cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea110: 0xc07a84c  jal         func_1EA130
    ctx->pc = 0x1EA110u;
    SET_GPR_U32(ctx, 31, 0x1EA118u);
    ctx->pc = 0x1EA130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA130u, 0x1EA110u, 0x1EA118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA118u;
label_1ea118:
    // 0x1ea118: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1ea118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ea11c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ea11cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ea120: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1ea120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1ea124: 0x3e00008  jr          $ra
    ctx->pc = 0x1EA124u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EA124u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EA12Cu;
    // 0x1ea12c: 0x0  nop
    ctx->pc = 0x1ea12cu;
    // NOP
    ctx->pc = 0x1ea130u;
}
