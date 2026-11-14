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

// Function: sub_002D05B0
// Address: 0x2d05b0 - 0x2d0600
void sub_002D05B0_0x2d05b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D05B0_0x2d05b0");
#endif

    switch (ctx->pc) {
        case 0x2d05e8u: goto label_2d05e8;
        default: break;
    }

    ctx->pc = 0x2d05b0u;

    // 0x2d05b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d05b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2d05b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d05b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d05b8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2d05b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2d05bc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2d05bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2d05c0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2d05c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d05c4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2d05c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2d05c8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2d05c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d05cc: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2d05ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2d05d0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2d05d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d05d4: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x2d05d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x2d05d8: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x2d05d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d05dc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d05dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d05e0: 0xc0b4180  jal         func_2D0600
    ctx->pc = 0x2D05E0u;
    SET_GPR_U32(ctx, 31, 0x2D05E8u);
    ctx->pc = 0x2D0600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0600u, 0x2D05E0u, 0x2D05E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D05E8u;
label_2d05e8:
    // 0x2d05e8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2d05e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d05ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d05ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d05f0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2d05f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2d05f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2D05F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D05F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D05FCu;
    // 0x2d05fc: 0x0  nop
    ctx->pc = 0x2d05fcu;
    // NOP
    ctx->pc = 0x2d0600u;
}
