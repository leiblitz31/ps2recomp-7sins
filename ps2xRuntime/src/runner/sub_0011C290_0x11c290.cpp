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

// Function: sub_0011C290
// Address: 0x11c290 - 0x11c2d0
void sub_0011C290_0x11c290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011C290_0x11c290");
#endif

    switch (ctx->pc) {
        case 0x11c2a8u: goto label_11c2a8;
        default: break;
    }

    ctx->pc = 0x11c290u;

    // 0x11c290: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x11c290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11c294: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11c294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11c298: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x11c298u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x11c29c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x11c29cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11c2a0: 0xc08ede0  jal         func_23B780
    ctx->pc = 0x11C2A0u;
    SET_GPR_U32(ctx, 31, 0x11C2A8u);
    ctx->pc = 0x23B780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B780u, 0x11C2A0u, 0x11C2A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C2A8u;
label_11c2a8:
    // 0x11c2a8: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x11c2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x11c2ac: 0x246333e0  addiu       $v1, $v1, 0x33E0
    ctx->pc = 0x11c2acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13280));
    // 0x11c2b0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x11c2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11c2b4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x11c2b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x11c2b8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x11c2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11c2bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11c2bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11c2c0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x11c2c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x11c2c4: 0x3e00008  jr          $ra
    ctx->pc = 0x11C2C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11C2C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11C2CCu;
    // 0x11c2cc: 0x0  nop
    ctx->pc = 0x11c2ccu;
    // NOP
    ctx->pc = 0x11c2d0u;
}
