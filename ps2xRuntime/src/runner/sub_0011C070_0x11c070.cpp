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

// Function: sub_0011C070
// Address: 0x11c070 - 0x11c0b0
void sub_0011C070_0x11c070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011C070_0x11c070");
#endif

    switch (ctx->pc) {
        case 0x11c090u: goto label_11c090;
        default: break;
    }

    ctx->pc = 0x11c070u;

    // 0x11c070: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x11c070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11c074: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11c074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11c078: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x11c078u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x11c07c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x11c07cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x11c080: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x11c080u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11c084: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x11c084u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11c088: 0xc042b9c  jal         func_10AE70
    ctx->pc = 0x11C088u;
    SET_GPR_U32(ctx, 31, 0x11C090u);
    ctx->pc = 0x10AE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10AE70u, 0x11C088u, 0x11C090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C090u;
label_11c090:
    // 0x11c090: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x11c090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11c094: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11c094u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11c098: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x11c098u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x11c09c: 0x3e00008  jr          $ra
    ctx->pc = 0x11C09Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11C09Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11C0A4u;
    // 0x11c0a4: 0x0  nop
    ctx->pc = 0x11c0a4u;
    // NOP
    // 0x11c0a8: 0x0  nop
    ctx->pc = 0x11c0a8u;
    // NOP
    // 0x11c0ac: 0x0  nop
    ctx->pc = 0x11c0acu;
    // NOP
    ctx->pc = 0x11c0b0u;
}
