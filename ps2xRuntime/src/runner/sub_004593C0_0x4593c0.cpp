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

// Function: sub_004593C0
// Address: 0x4593c0 - 0x4593f0
void sub_004593C0_0x4593c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004593C0_0x4593c0");
#endif

    switch (ctx->pc) {
        case 0x4593d0u: goto label_4593d0;
        default: break;
    }

    ctx->pc = 0x4593c0u;

    // 0x4593c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4593c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4593c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4593c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4593c8: 0xc116488  jal         func_459220
    ctx->pc = 0x4593C8u;
    SET_GPR_U32(ctx, 31, 0x4593D0u);
    ctx->pc = 0x459220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x459220u, 0x4593C8u, 0x4593D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4593D0u;
label_4593d0:
    // 0x4593d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4593d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4593d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4593d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4593d8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x4593d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x4593dc: 0x3e00008  jr          $ra
    ctx->pc = 0x4593DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4593DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4593E4u;
    // 0x4593e4: 0x0  nop
    ctx->pc = 0x4593e4u;
    // NOP
    // 0x4593e8: 0x0  nop
    ctx->pc = 0x4593e8u;
    // NOP
    // 0x4593ec: 0x0  nop
    ctx->pc = 0x4593ecu;
    // NOP
    ctx->pc = 0x4593f0u;
}
