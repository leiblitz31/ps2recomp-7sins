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

// Function: sub_002DE3A0
// Address: 0x2de3a0 - 0x2de3e0
void sub_002DE3A0_0x2de3a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DE3A0_0x2de3a0");
#endif

    switch (ctx->pc) {
        case 0x2de3b8u: goto label_2de3b8;
        case 0x2de3c8u: goto label_2de3c8;
        default: break;
    }

    ctx->pc = 0x2de3a0u;

    // 0x2de3a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2de3a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2de3a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2de3a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2de3a8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2de3a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2de3ac: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x2de3acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x2de3b0: 0xc0b7938  jal         func_2DE4E0
    ctx->pc = 0x2DE3B0u;
    SET_GPR_U32(ctx, 31, 0x2DE3B8u);
    ctx->pc = 0x2DE4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE4E0u, 0x2DE3B0u, 0x2DE3B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE3B8u;
label_2de3b8:
    // 0x2de3b8: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2de3b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2de3bc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2de3bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de3c0: 0xc0b78f8  jal         func_2DE3E0
    ctx->pc = 0x2DE3C0u;
    SET_GPR_U32(ctx, 31, 0x2DE3C8u);
    ctx->pc = 0x2DE3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE3E0u, 0x2DE3C0u, 0x2DE3C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE3C8u;
label_2de3c8:
    // 0x2de3c8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2de3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2de3cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2de3ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2de3d0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2de3d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2de3d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2DE3D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DE3D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DE3DCu;
    // 0x2de3dc: 0x0  nop
    ctx->pc = 0x2de3dcu;
    // NOP
    ctx->pc = 0x2de3e0u;
}
