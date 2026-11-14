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

// Function: sub_0011C1D0
// Address: 0x11c1d0 - 0x11c220
void sub_0011C1D0_0x11c1d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011C1D0_0x11c1d0");
#endif

    switch (ctx->pc) {
        case 0x11c1f0u: goto label_11c1f0;
        default: break;
    }

    ctx->pc = 0x11c1d0u;

    // 0x11c1d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x11c1d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11c1d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11c1d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11c1d8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x11c1d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x11c1dc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x11c1dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x11c1e0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x11c1e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11c1e4: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x11c1e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11c1e8: 0xc08ed70  jal         func_23B5C0
    ctx->pc = 0x11C1E8u;
    SET_GPR_U32(ctx, 31, 0x11C1F0u);
    ctx->pc = 0x23B5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B5C0u, 0x11C1E8u, 0x11C1F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C1F0u;
label_11c1f0:
    // 0x11c1f0: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x11c1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x11c1f4: 0x246333b0  addiu       $v1, $v1, 0x33B0
    ctx->pc = 0x11c1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13232));
    // 0x11c1f8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x11c1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11c1fc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x11c1fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x11c200: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x11c200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11c204: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11c204u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11c208: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x11c208u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x11c20c: 0x3e00008  jr          $ra
    ctx->pc = 0x11C20Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11C20Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11C214u;
    // 0x11c214: 0x0  nop
    ctx->pc = 0x11c214u;
    // NOP
    // 0x11c218: 0x0  nop
    ctx->pc = 0x11c218u;
    // NOP
    // 0x11c21c: 0x0  nop
    ctx->pc = 0x11c21cu;
    // NOP
    ctx->pc = 0x11c220u;
}
