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

// Function: sub_0014B3B0
// Address: 0x14b3b0 - 0x14b3f0
void sub_0014B3B0_0x14b3b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014B3B0_0x14b3b0");
#endif

    switch (ctx->pc) {
        case 0x14b3d0u: goto label_14b3d0;
        case 0x14b3e0u: goto label_14b3e0;
        default: break;
    }

    ctx->pc = 0x14b3b0u;

    // 0x14b3b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x14b3b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x14b3b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14b3b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14b3b8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x14b3b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x14b3bc: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x14b3bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x14b3c0: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x14b3c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x14b3c4: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x14b3c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14b3c8: 0xc052d28  jal         func_14B4A0
    ctx->pc = 0x14B3C8u;
    SET_GPR_U32(ctx, 31, 0x14B3D0u);
    ctx->pc = 0x14B4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B4A0u, 0x14B3C8u, 0x14B3D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B3D0u;
label_14b3d0:
    // 0x14b3d0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x14b3d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14b3d4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x14b3d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b3d8: 0xc052cfc  jal         func_14B3F0
    ctx->pc = 0x14B3D8u;
    SET_GPR_U32(ctx, 31, 0x14B3E0u);
    ctx->pc = 0x14B3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B3F0u, 0x14B3D8u, 0x14B3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B3E0u;
label_14b3e0:
    // 0x14b3e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14b3e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14b3e4: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x14b3e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x14b3e8: 0x3e00008  jr          $ra
    ctx->pc = 0x14B3E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14B3E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14B3F0u;
}
