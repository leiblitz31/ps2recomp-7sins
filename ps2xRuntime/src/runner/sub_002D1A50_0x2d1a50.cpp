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

// Function: sub_002D1A50
// Address: 0x2d1a50 - 0x2d1a90
void sub_002D1A50_0x2d1a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D1A50_0x2d1a50");
#endif

    switch (ctx->pc) {
        case 0x2d1a7cu: goto label_2d1a7c;
        default: break;
    }

    ctx->pc = 0x2d1a50u;

    // 0x2d1a50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d1a50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d1a54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d1a54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d1a58: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2d1a58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2d1a5c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2d1a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2d1a60: 0x24636a28  addiu       $v1, $v1, 0x6A28
    ctx->pc = 0x2d1a60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27176));
    // 0x2d1a64: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2d1a64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d1a68: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2d1a68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2d1a6c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2d1a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d1a70: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x2d1a70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2d1a74: 0xc0b472c  jal         func_2D1CB0
    ctx->pc = 0x2D1A74u;
    SET_GPR_U32(ctx, 31, 0x2D1A7Cu);
    ctx->pc = 0x2D1CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1CB0u, 0x2D1A74u, 0x2D1A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1A7Cu;
label_2d1a7c:
    // 0x2d1a7c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2d1a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d1a80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d1a80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d1a84: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2d1a84u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d1a88: 0x3e00008  jr          $ra
    ctx->pc = 0x2D1A88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D1A88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D1A90u;
}
