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

// Function: sub_00466840
// Address: 0x466840 - 0x466870
void sub_00466840_0x466840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00466840_0x466840");
#endif

    switch (ctx->pc) {
        case 0x46685cu: goto label_46685c;
        default: break;
    }

    ctx->pc = 0x466840u;

    // 0x466840: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x466840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x466844: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x466844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x466848: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x466848u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x46684c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x46684cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x466850: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x466850u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x466854: 0xc119aa0  jal         func_466A80
    ctx->pc = 0x466854u;
    SET_GPR_U32(ctx, 31, 0x46685Cu);
    ctx->pc = 0x466A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466A80u, 0x466854u, 0x46685Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46685Cu;
label_46685c:
    // 0x46685c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x46685cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x466860: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x466860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x466864: 0x3e00008  jr          $ra
    ctx->pc = 0x466864u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x466864u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46686Cu;
    // 0x46686c: 0x0  nop
    ctx->pc = 0x46686cu;
    // NOP
    ctx->pc = 0x466870u;
}
