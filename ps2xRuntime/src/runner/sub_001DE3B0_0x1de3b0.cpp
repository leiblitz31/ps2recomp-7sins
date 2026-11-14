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

// Function: sub_001DE3B0
// Address: 0x1de3b0 - 0x1de400
void sub_001DE3B0_0x1de3b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DE3B0_0x1de3b0");
#endif

    switch (ctx->pc) {
        case 0x1de3d8u: goto label_1de3d8;
        case 0x1de3f0u: goto label_1de3f0;
        default: break;
    }

    ctx->pc = 0x1de3b0u;

    // 0x1de3b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1de3b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1de3b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1de3b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1de3b8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1de3b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1de3bc: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x1de3bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
    // 0x1de3c0: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1de3c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x1de3c4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1de3c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1de3c8: 0x27a5001c  addiu       $a1, $sp, 0x1C
    ctx->pc = 0x1de3c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x1de3cc: 0x27a60018  addiu       $a2, $sp, 0x18
    ctx->pc = 0x1de3ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x1de3d0: 0xc07782c  jal         func_1DE0B0
    ctx->pc = 0x1DE3D0u;
    SET_GPR_U32(ctx, 31, 0x1DE3D8u);
    ctx->pc = 0x1DE0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE0B0u, 0x1DE3D0u, 0x1DE3D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE3D8u;
label_1de3d8:
    // 0x1de3d8: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1de3d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1de3dc: 0x8fa5001c  lw          $a1, 0x1C($sp)
    ctx->pc = 0x1de3dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1de3e0: 0x8fa60018  lw          $a2, 0x18($sp)
    ctx->pc = 0x1de3e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1de3e4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1de3e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1de3e8: 0xc07772c  jal         func_1DDCB0
    ctx->pc = 0x1DE3E8u;
    SET_GPR_U32(ctx, 31, 0x1DE3F0u);
    ctx->pc = 0x1DDCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DDCB0u, 0x1DE3E8u, 0x1DE3F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE3F0u;
label_1de3f0:
    // 0x1de3f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1de3f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1de3f4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1de3f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1de3f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1DE3F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DE3F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DE400u;
}
