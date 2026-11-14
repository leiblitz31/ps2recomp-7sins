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

// Function: sub_002D1D30
// Address: 0x2d1d30 - 0x2d1d80
void sub_002D1D30_0x2d1d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D1D30_0x2d1d30");
#endif

    switch (ctx->pc) {
        case 0x2d1d68u: goto label_2d1d68;
        default: break;
    }

    ctx->pc = 0x2d1d30u;

    // 0x2d1d30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d1d30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2d1d34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d1d34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d1d38: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2d1d38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2d1d3c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2d1d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2d1d40: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2d1d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d1d44: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2d1d44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2d1d48: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2d1d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d1d4c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2d1d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2d1d50: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2d1d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d1d54: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x2d1d54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x2d1d58: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x2d1d58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d1d5c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d1d5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1d60: 0xc0b4760  jal         func_2D1D80
    ctx->pc = 0x2D1D60u;
    SET_GPR_U32(ctx, 31, 0x2D1D68u);
    ctx->pc = 0x2D1D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1D80u, 0x2D1D60u, 0x2D1D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1D68u;
label_2d1d68:
    // 0x2d1d68: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2d1d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d1d6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d1d6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d1d70: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2d1d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2d1d74: 0x3e00008  jr          $ra
    ctx->pc = 0x2D1D74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D1D74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D1D7Cu;
    // 0x2d1d7c: 0x0  nop
    ctx->pc = 0x2d1d7cu;
    // NOP
    ctx->pc = 0x2d1d80u;
}
