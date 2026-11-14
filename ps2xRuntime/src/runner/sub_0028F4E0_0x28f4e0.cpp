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

// Function: sub_0028F4E0
// Address: 0x28f4e0 - 0x28f520
void sub_0028F4E0_0x28f4e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028F4E0_0x28f4e0");
#endif

    switch (ctx->pc) {
        case 0x28f4f8u: goto label_28f4f8;
        case 0x28f508u: goto label_28f508;
        default: break;
    }

    ctx->pc = 0x28f4e0u;

    // 0x28f4e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x28f4e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x28f4e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28f4e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28f4e8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x28f4e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x28f4ec: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x28f4ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28f4f0: 0xc0a3d48  jal         func_28F520
    ctx->pc = 0x28F4F0u;
    SET_GPR_U32(ctx, 31, 0x28F4F8u);
    ctx->pc = 0x28F520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F520u, 0x28F4F0u, 0x28F4F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F4F8u;
label_28f4f8:
    // 0x28f4f8: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x28f4f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x28f4fc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x28f4fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f500: 0xc0a3dcc  jal         func_28F730
    ctx->pc = 0x28F500u;
    SET_GPR_U32(ctx, 31, 0x28F508u);
    ctx->pc = 0x28F730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F730u, 0x28F500u, 0x28F508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F508u;
label_28f508:
    // 0x28f508: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28f508u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28f50c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x28f50cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x28f510: 0x3e00008  jr          $ra
    ctx->pc = 0x28F510u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28F510u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28F518u;
    // 0x28f518: 0x0  nop
    ctx->pc = 0x28f518u;
    // NOP
    // 0x28f51c: 0x0  nop
    ctx->pc = 0x28f51cu;
    // NOP
    ctx->pc = 0x28f520u;
}
