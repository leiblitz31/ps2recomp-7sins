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

// Function: sub_00232E30
// Address: 0x232e30 - 0x232e70
void sub_00232E30_0x232e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00232E30_0x232e30");
#endif

    switch (ctx->pc) {
        case 0x232e50u: goto label_232e50;
        default: break;
    }

    ctx->pc = 0x232e30u;

    // 0x232e30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x232e30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x232e34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x232e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x232e38: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x232e38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x232e3c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x232e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x232e40: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x232e40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x232e44: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x232e44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x232e48: 0xc08cb9c  jal         func_232E70
    ctx->pc = 0x232E48u;
    SET_GPR_U32(ctx, 31, 0x232E50u);
    ctx->pc = 0x232E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232E70u, 0x232E48u, 0x232E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232E50u;
label_232e50:
    // 0x232e50: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x232e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x232e54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x232e54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x232e58: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x232e58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x232e5c: 0x3e00008  jr          $ra
    ctx->pc = 0x232E5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x232E5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x232E64u;
    // 0x232e64: 0x0  nop
    ctx->pc = 0x232e64u;
    // NOP
    // 0x232e68: 0x0  nop
    ctx->pc = 0x232e68u;
    // NOP
    // 0x232e6c: 0x0  nop
    ctx->pc = 0x232e6cu;
    // NOP
    ctx->pc = 0x232e70u;
}
