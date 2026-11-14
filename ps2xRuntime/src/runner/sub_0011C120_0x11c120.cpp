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

// Function: sub_0011C120
// Address: 0x11c120 - 0x11c160
void sub_0011C120_0x11c120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011C120_0x11c120");
#endif

    switch (ctx->pc) {
        case 0x11c13cu: goto label_11c13c;
        case 0x11c14cu: goto label_11c14c;
        default: break;
    }

    ctx->pc = 0x11c120u;

    // 0x11c120: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x11c120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11c124: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11c124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11c128: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x11c128u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x11c12c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x11c12cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x11c130: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x11c130u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11c134: 0xc047058  jal         func_11C160
    ctx->pc = 0x11C134u;
    SET_GPR_U32(ctx, 31, 0x11C13Cu);
    ctx->pc = 0x11C160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11C160u, 0x11C134u, 0x11C13Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C13Cu;
label_11c13c:
    // 0x11c13c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x11c13cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11c140: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x11c140u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11c144: 0xc046fec  jal         func_11BFB0
    ctx->pc = 0x11C144u;
    SET_GPR_U32(ctx, 31, 0x11C14Cu);
    ctx->pc = 0x11BFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11BFB0u, 0x11C144u, 0x11C14Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C14Cu;
label_11c14c:
    // 0x11c14c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11c14cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11c150: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x11c150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x11c154: 0x3e00008  jr          $ra
    ctx->pc = 0x11C154u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11C154u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11C15Cu;
    // 0x11c15c: 0x0  nop
    ctx->pc = 0x11c15cu;
    // NOP
    ctx->pc = 0x11c160u;
}
