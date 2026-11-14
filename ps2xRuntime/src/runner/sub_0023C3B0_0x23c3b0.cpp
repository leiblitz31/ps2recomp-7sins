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

// Function: sub_0023C3B0
// Address: 0x23c3b0 - 0x23c3f0
void sub_0023C3B0_0x23c3b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023C3B0_0x23c3b0");
#endif

    switch (ctx->pc) {
        case 0x23c3c8u: goto label_23c3c8;
        case 0x23c3dcu: goto label_23c3dc;
        default: break;
    }

    ctx->pc = 0x23c3b0u;

    // 0x23c3b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x23c3b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23c3b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23c3b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23c3b8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x23c3b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x23c3bc: 0x27a40018  addiu       $a0, $sp, 0x18
    ctx->pc = 0x23c3bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x23c3c0: 0xc08f17c  jal         func_23C5F0
    ctx->pc = 0x23C3C0u;
    SET_GPR_U32(ctx, 31, 0x23C3C8u);
    ctx->pc = 0x23C5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C5F0u, 0x23C3C0u, 0x23C3C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C3C8u;
label_23c3c8:
    // 0x23c3c8: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x23c3c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23c3cc: 0x27a5001c  addiu       $a1, $sp, 0x1C
    ctx->pc = 0x23c3ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x23c3d0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x23c3d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c3d4: 0xc08f0fc  jal         func_23C3F0
    ctx->pc = 0x23C3D4u;
    SET_GPR_U32(ctx, 31, 0x23C3DCu);
    ctx->pc = 0x23C3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C3F0u, 0x23C3D4u, 0x23C3DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C3DCu;
label_23c3dc:
    // 0x23c3dc: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x23c3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23c3e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23c3e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23c3e4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x23c3e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x23c3e8: 0x3e00008  jr          $ra
    ctx->pc = 0x23C3E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23C3E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23C3F0u;
}
