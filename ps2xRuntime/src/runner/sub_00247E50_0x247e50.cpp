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

// Function: sub_00247E50
// Address: 0x247e50 - 0x247e80
void sub_00247E50_0x247e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00247E50_0x247e50");
#endif

    switch (ctx->pc) {
        case 0x247e68u: goto label_247e68;
        default: break;
    }

    ctx->pc = 0x247e50u;

    // 0x247e50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x247e50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x247e54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x247e54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x247e58: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x247e58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x247e5c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x247e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x247e60: 0xc091fa0  jal         func_247E80
    ctx->pc = 0x247E60u;
    SET_GPR_U32(ctx, 31, 0x247E68u);
    ctx->pc = 0x247E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247E80u, 0x247E60u, 0x247E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247E68u;
label_247e68:
    // 0x247e68: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x247e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x247e6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x247e6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x247e70: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x247e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x247e74: 0x3e00008  jr          $ra
    ctx->pc = 0x247E74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x247E74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x247E7Cu;
    // 0x247e7c: 0x0  nop
    ctx->pc = 0x247e7cu;
    // NOP
    ctx->pc = 0x247e80u;
}
